
#ifndef OSSIA_EXPORT_H
#define OSSIA_EXPORT_H

#ifdef OSSIA_STATIC_DEFINE
#  define OSSIA_EXPORT
#  define OSSIA_NO_EXPORT
#else
#  ifndef OSSIA_EXPORT
#    ifdef ossia_EXPORTS
        /* We are building this library */
#      define OSSIA_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define OSSIA_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef OSSIA_NO_EXPORT
#    define OSSIA_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef OSSIA_DEPRECATED
#  define OSSIA_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef OSSIA_DEPRECATED_EXPORT
#  define OSSIA_DEPRECATED_EXPORT OSSIA_EXPORT OSSIA_DEPRECATED
#endif

#ifndef OSSIA_DEPRECATED_NO_EXPORT
#  define OSSIA_DEPRECATED_NO_EXPORT OSSIA_NO_EXPORT OSSIA_DEPRECATED
#endif

#define DEFINE_NO_DEPRECATED 0
#if DEFINE_NO_DEPRECATED
# define OSSIA_NO_DEPRECATED
#endif

#endif
