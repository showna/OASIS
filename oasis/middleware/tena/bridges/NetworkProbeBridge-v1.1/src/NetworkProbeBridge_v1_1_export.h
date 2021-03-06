// -*- C++ -*-

#ifndef NETWORKPROBEBRIDGE_V1_1_EXPORT_H
#define NETWORKPROBEBRIDGE_V1_1_EXPORT_H

#include "ace/config-all.h"

#if defined (ACE_AS_STATIC_LIBS) && !defined (NETWORKPROBEBRIDGE_V1_1_HAS_DLL)
#  define NETWORKPROBEBRIDGE_V1_1_HAS_DLL 0
#endif /* ACE_AS_STATIC_LIBS && NETWORKPROBEBRIDGE_V1_1_HAS_DLL */

#if !defined (NETWORKPROBEBRIDGE_V1_1_HAS_DLL)
#  define NETWORKPROBEBRIDGE_V1_1_HAS_DLL 1
#endif /* ! NETWORKPROBEBRIDGE_V1_1_HAS_DLL */

#if defined (NETWORKPROBEBRIDGE_V1_1_HAS_DLL) && (NETWORKPROBEBRIDGE_V1_1_HAS_DLL == 1)
#  if defined (NETWORKPROBEBRIDGE_V1_1_BUILD_DLL)
#    define NETWORKPROBEBRIDGE_V1_1_Export ACE_Proper_Export_Flag
#    define NETWORKPROBEBRIDGE_V1_1_SINGLETON_DECLARATION(T) ACE_EXPORT_SINGLETON_DECLARATION (T)
#    define NETWORKPROBEBRIDGE_V1_1_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_EXPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  else /* NETWORKPROBEBRIDGE_V1_1_BUILD_DLL */
#    define NETWORKPROBEBRIDGE_V1_1_Export ACE_Proper_Import_Flag
#    define NETWORKPROBEBRIDGE_V1_1_SINGLETON_DECLARATION(T) ACE_IMPORT_SINGLETON_DECLARATION (T)
#    define NETWORKPROBEBRIDGE_V1_1_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_IMPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  endif /* NETWORKPROBEBRIDGE_V1_1_BUILD_DLL */
#else /* NETWORKPROBEBRIDGE_V1_1_HAS_DLL == 1 */
#  define NETWORKPROBEBRIDGE_V1_1_Export
#  define NETWORKPROBEBRIDGE_V1_1_SINGLETON_DECLARATION(T)
#  define NETWORKPROBEBRIDGE_V1_1_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#endif /* NETWORKPROBEBRIDGE_V1_1_HAS_DLL == 1 */

// Set NETWORKPROBEBRIDGE_V1_1_NTRACE = 0 to turn on library specific tracing even if
// tracing is turned off for ACE.
#if !defined (NETWORKPROBEBRIDGE_V1_1_NTRACE)
#  if (ACE_NTRACE == 1)
#    define NETWORKPROBEBRIDGE_V1_1_NTRACE 1
#  else /* (ACE_NTRACE == 1) */
#    define NETWORKPROBEBRIDGE_V1_1_NTRACE 0
#  endif /* (ACE_NTRACE == 1) */
#endif /* !NETWORKPROBEBRIDGE_V1_1_NTRACE */

#if (NETWORKPROBEBRIDGE_V1_1_NTRACE == 1)
#  define NETWORKPROBEBRIDGE_V1_1_TRACE(X)
#else /* (NETWORKPROBEBRIDGE_V1_1_NTRACE == 1) */
#  if !defined (ACE_HAS_TRACE)
#    define ACE_HAS_TRACE
#  endif /* ACE_HAS_TRACE */
#  define NETWORKPROBEBRIDGE_V1_1_TRACE(X) ACE_TRACE_IMPL(X)
#  include "ace/Trace.h"
#endif /* (NETWORKPROBEBRIDGE_V1_1_NTRACE == 1) */

#endif /* NETWORKPROBEBRIDGE_V1_1_EXPORT_H */
