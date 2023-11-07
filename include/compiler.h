#ifndef COMPILER_H
#define COMPILER_H


// TODO add specific compiler versions

#if defined(__GNUC__) || defined(__GNUG__)

    #include <pthread.h>

    #define ff_FORCE_INLINE __attribute__((always_inline))
    #define ff_DEPRECATED(msg) __attribute__((deprecated(msg)))
    #define ff_UNIMPLEMENTED_FUNC(r, f) r __attribute__((deprecated("Unimplemented function"))) f {}
    #define ff_UNIMPLEMENTED_TYPE(t) typedef struct {} t __attribute__((deprecated("Unimplemented type")))


#elif defined(_MSC_VER)

    #include <windows.h>
    #include <process.h> // _beginthread, _endthread

    #define ff_FORCE_INLINE __forceinline
    #define ff_DEPRECATED(msg) __declspec(deprecated(msg))
    #define ff_UNIMPLEMENTED_FUNC(r, f) r __declspec(deprecated("Unimplemented function")) f {}
    #define ff_UNIMPLEMENTED_TYPE(t) __declspec(deprecated("Unimplemented type")) typedef struct {} t


#else

    #define ff_FORCE_INLINE
    #define ff_DEPRECATED(msg)
    #define ff_UNIMPLEMENTED_FUNC(t)
    #define ff_UNIMPLEMENTED_TYPE(t)


#endif // __clang__, __GNUC__ || __GNUG__, _MSC_VER


#endif // ! COMPILER_H