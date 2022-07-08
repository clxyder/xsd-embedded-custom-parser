#if __GNUC__
#if __x86_64__ || __ppc64__
#define ENVIRONMENT64
#else
#define ENVIRONMENT32
#endif
#endif

#ifdef ENVIRONMENT64
#include "library-schema-64.hxx"
#else
#include "library-schema-32.hxx"
#endif
