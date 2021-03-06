eval '(exit $?0)' && eval 'exec perl -S $0 ${1+"$@"}'
    & eval 'exec perl -S $0 $argv:q'
    if 0;

# $Id: run_test.pl 2239 2013-08-08 15:23:33Z dfeiock $
# -*- perl -*-

use lib "$ENV{'ACE_ROOT'}/bin";
use PerlACE::Run_Test;

$OASIS_ROOT = "$ENV{'OASIS_ROOT'}";
$PIN_ROOT = "$ENV{'PIN_ROOT'}";

# Start the DAC
$the_DAC_options = "-ORBEndpoint iiop://localhost:20000 --name=StandardDAC -c Smoke_Test.dac --database=StandardDAC.db -v --debug";
$the_DAC = new PerlACE::Process ("$OASIS_ROOT/bin/oasis_dac", $the_DAC_options);
$the_DAC->Spawn ();

sleep (15);

# Run the example which starts an EINode, creates a single 
# Instruction_Counter_Probe, then runs 'ls' from PIN
#$cmd = "find /home/dfeiock/Documents/SEM_trunk/SEM -name *.conf";
$cmd = "ls";

$the_Example_options = "-t $OASIS_ROOT/oasis/tools/PINtool/libOASIS_PINtool.so \"-bcSmoke_Test.einode\" -- $cmd";

#$the_Example_options = "-t $PIN_ROOT/source/tools/SimpleExamples/obj-ia32/icount.so -- $cmd";
$the_Example = new PerlACE::Process ("$PIN_ROOT/pin", $the_Example_options);
$the_Example->Spawn ();

sleep (10);

# Kill the application
$the_Example->Kill ();
$the_Example->TimedWait (1);

# Kill the DAC process.
$the_DAC->Kill ();
$the_DAC->TimedWait (1);

exit 0;
