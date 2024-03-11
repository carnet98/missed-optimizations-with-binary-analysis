typedef long unsigned int size_t;
extern void *memcpy (void *__restrict __dest, const void *__restrict __src,
       size_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern void *memmove (void *__dest, const void *__src, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern void *memccpy (void *__restrict __dest, const void *__restrict __src,
        int __c, size_t __n)
    __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2))) ;
extern void *memset (void *__s, int __c, size_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
extern int memcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern int __memcmpeq (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern void *memchr (const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern char *strcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern char *strncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern char *strcat (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern char *strncat (char *__restrict __dest, const char *__restrict __src,
        size_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern int strcmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern int strncmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern int strcoll (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern size_t strxfrm (char *__restrict __dest,
         const char *__restrict __src, size_t __n)
    __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2))) ;
struct __locale_struct
{
  struct __locale_data *__locales[13];
  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;
  const char *__names[13];
};
typedef struct __locale_struct *__locale_t;

typedef __locale_t locale_t;
extern int strcoll_l (const char *__s1, const char *__s2, locale_t __l)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));
extern size_t strxfrm_l (char *__dest, const char *__src, size_t __n,
    locale_t __l) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2, 4)))
                                           ;
extern char *strdup (const char *__s)
     __attribute__ ((__nothrow__ )) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
extern char *strndup (const char *__string, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
extern char *strchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern char *strrchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern size_t strcspn (const char *__s, const char *__reject)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern size_t strspn (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *strpbrk (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *strstr (const char *__haystack, const char *__needle)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *strtok (char *__restrict __s, const char *__restrict __delim)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));
extern char *__strtok_r (char *__restrict __s,
    const char *__restrict __delim,
    char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2, 3)));
extern char *strtok_r (char *__restrict __s, const char *__restrict __delim,
         char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2, 3)));
extern size_t strlen (const char *__s)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern size_t strnlen (const char *__string, size_t __maxlen)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern char *strerror (int __errnum) __attribute__ ((__nothrow__ ));
extern int strerror_r (int __errnum, char *__buf, size_t __buflen) __asm__ ("" "__xpg_strerror_r") __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)))
                                          ;
extern char *strerror_l (int __errnum, locale_t __l) __attribute__ ((__nothrow__ ));
extern int bcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern void bcopy (const void *__src, void *__dest, size_t __n)
  __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern void bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
extern char *index (const char *__s, int __c)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern char *rindex (const char *__s, int __c)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern int ffs (int __i) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern int ffsl (long int __l) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
__extension__ extern int ffsll (long long int __ll)
     __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern int strcasecmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern int strncasecmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern int strcasecmp_l (const char *__s1, const char *__s2, locale_t __loc)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));
extern int strncasecmp_l (const char *__s1, const char *__s2,
     size_t __n, locale_t __loc)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 4)));
extern void explicit_bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)))
                                                  ;
extern char *strsep (char **__restrict __stringp,
       const char *__restrict __delim)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern char *strsignal (int __sig) __attribute__ ((__nothrow__ ));
extern char *__stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern char *__stpncpy (char *__restrict __dest,
   const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;
typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;
typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;
typedef __int8_t __int_least8_t;
typedef __uint8_t __uint_least8_t;
typedef __int16_t __int_least16_t;
typedef __uint16_t __uint_least16_t;
typedef __int32_t __int_least32_t;
typedef __uint32_t __uint_least32_t;
typedef __int64_t __int_least64_t;
typedef __uint64_t __uint_least64_t;
typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
typedef long int __intmax_t;
typedef unsigned long int __uintmax_t;
typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;
typedef long int __suseconds64_t;
typedef int __daddr_t;
typedef int __key_t;
typedef int __clockid_t;
typedef void * __timer_t;
typedef long int __blksize_t;
typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;
typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;
typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;
typedef long int __fsword_t;
typedef long int __ssize_t;
typedef long int __syscall_slong_t;
typedef unsigned long int __syscall_ulong_t;
typedef __off64_t __loff_t;
typedef char *__caddr_t;
typedef long int __intptr_t;
typedef unsigned int __socklen_t;
typedef int __sig_atomic_t;




typedef float float_t;
typedef double double_t;
extern int __fpclassify (double __value) __attribute__ ((__nothrow__ ))
     __attribute__ ((__const__));
extern int __signbit (double __value) __attribute__ ((__nothrow__ ))
     __attribute__ ((__const__));
extern int __isinf (double __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));
extern int __finite (double __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));
extern int __isnan (double __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));
extern int __iseqsig (double __x, double __y) __attribute__ ((__nothrow__ ));
extern int __issignaling (double __value) __attribute__ ((__nothrow__ ))
     __attribute__ ((__const__));
 extern double acos (double __x) __attribute__ ((__nothrow__ )); extern double __acos (double __x) __attribute__ ((__nothrow__ ));
 extern double asin (double __x) __attribute__ ((__nothrow__ )); extern double __asin (double __x) __attribute__ ((__nothrow__ ));
 extern double atan (double __x) __attribute__ ((__nothrow__ )); extern double __atan (double __x) __attribute__ ((__nothrow__ ));
 extern double atan2 (double __y, double __x) __attribute__ ((__nothrow__ )); extern double __atan2 (double __y, double __x) __attribute__ ((__nothrow__ ));
 extern double cos (double __x) __attribute__ ((__nothrow__ )); extern double __cos (double __x) __attribute__ ((__nothrow__ ));
 extern double sin (double __x) __attribute__ ((__nothrow__ )); extern double __sin (double __x) __attribute__ ((__nothrow__ ));
 extern double tan (double __x) __attribute__ ((__nothrow__ )); extern double __tan (double __x) __attribute__ ((__nothrow__ ));
 extern double cosh (double __x) __attribute__ ((__nothrow__ )); extern double __cosh (double __x) __attribute__ ((__nothrow__ ));
 extern double sinh (double __x) __attribute__ ((__nothrow__ )); extern double __sinh (double __x) __attribute__ ((__nothrow__ ));
 extern double tanh (double __x) __attribute__ ((__nothrow__ )); extern double __tanh (double __x) __attribute__ ((__nothrow__ ));
 extern double acosh (double __x) __attribute__ ((__nothrow__ )); extern double __acosh (double __x) __attribute__ ((__nothrow__ ));
 extern double asinh (double __x) __attribute__ ((__nothrow__ )); extern double __asinh (double __x) __attribute__ ((__nothrow__ ));
 extern double atanh (double __x) __attribute__ ((__nothrow__ )); extern double __atanh (double __x) __attribute__ ((__nothrow__ ));
 extern double exp (double __x) __attribute__ ((__nothrow__ )); extern double __exp (double __x) __attribute__ ((__nothrow__ ));
extern double frexp (double __x, int *__exponent) __attribute__ ((__nothrow__ )); extern double __frexp (double __x, int *__exponent) __attribute__ ((__nothrow__ ));
extern double ldexp (double __x, int __exponent) __attribute__ ((__nothrow__ )); extern double __ldexp (double __x, int __exponent) __attribute__ ((__nothrow__ ));
 extern double log (double __x) __attribute__ ((__nothrow__ )); extern double __log (double __x) __attribute__ ((__nothrow__ ));
 extern double log10 (double __x) __attribute__ ((__nothrow__ )); extern double __log10 (double __x) __attribute__ ((__nothrow__ ));
extern double modf (double __x, double *__iptr) __attribute__ ((__nothrow__ )); extern double __modf (double __x, double *__iptr) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));
 extern double expm1 (double __x) __attribute__ ((__nothrow__ )); extern double __expm1 (double __x) __attribute__ ((__nothrow__ ));
 extern double log1p (double __x) __attribute__ ((__nothrow__ )); extern double __log1p (double __x) __attribute__ ((__nothrow__ ));
extern double logb (double __x) __attribute__ ((__nothrow__ )); extern double __logb (double __x) __attribute__ ((__nothrow__ ));
 extern double exp2 (double __x) __attribute__ ((__nothrow__ )); extern double __exp2 (double __x) __attribute__ ((__nothrow__ ));
 extern double log2 (double __x) __attribute__ ((__nothrow__ )); extern double __log2 (double __x) __attribute__ ((__nothrow__ ));
 extern double pow (double __x, double __y) __attribute__ ((__nothrow__ )); extern double __pow (double __x, double __y) __attribute__ ((__nothrow__ ));
extern double sqrt (double __x) __attribute__ ((__nothrow__ )); extern double __sqrt (double __x) __attribute__ ((__nothrow__ ));
 extern double hypot (double __x, double __y) __attribute__ ((__nothrow__ )); extern double __hypot (double __x, double __y) __attribute__ ((__nothrow__ ));
 extern double cbrt (double __x) __attribute__ ((__nothrow__ )); extern double __cbrt (double __x) __attribute__ ((__nothrow__ ));
extern double ceil (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern double __ceil (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern double fabs (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern double __fabs (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern double floor (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern double __floor (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern double fmod (double __x, double __y) __attribute__ ((__nothrow__ )); extern double __fmod (double __x, double __y) __attribute__ ((__nothrow__ ));
extern int isinf (double __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));
extern int finite (double __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));
extern double drem (double __x, double __y) __attribute__ ((__nothrow__ )); extern double __drem (double __x, double __y) __attribute__ ((__nothrow__ ));
extern double significand (double __x) __attribute__ ((__nothrow__ )); extern double __significand (double __x) __attribute__ ((__nothrow__ ));
extern double copysign (double __x, double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern double __copysign (double __x, double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern double nan (const char *__tagb) __attribute__ ((__nothrow__ )); extern double __nan (const char *__tagb) __attribute__ ((__nothrow__ ));
extern int isnan (double __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));
extern double j0 (double) __attribute__ ((__nothrow__ )); extern double __j0 (double) __attribute__ ((__nothrow__ ));
extern double j1 (double) __attribute__ ((__nothrow__ )); extern double __j1 (double) __attribute__ ((__nothrow__ ));
extern double jn (int, double) __attribute__ ((__nothrow__ )); extern double __jn (int, double) __attribute__ ((__nothrow__ ));
extern double y0 (double) __attribute__ ((__nothrow__ )); extern double __y0 (double) __attribute__ ((__nothrow__ ));
extern double y1 (double) __attribute__ ((__nothrow__ )); extern double __y1 (double) __attribute__ ((__nothrow__ ));
extern double yn (int, double) __attribute__ ((__nothrow__ )); extern double __yn (int, double) __attribute__ ((__nothrow__ ));
 extern double erf (double) __attribute__ ((__nothrow__ )); extern double __erf (double) __attribute__ ((__nothrow__ ));
 extern double erfc (double) __attribute__ ((__nothrow__ )); extern double __erfc (double) __attribute__ ((__nothrow__ ));
extern double lgamma (double) __attribute__ ((__nothrow__ )); extern double __lgamma (double) __attribute__ ((__nothrow__ ));
extern double tgamma (double) __attribute__ ((__nothrow__ )); extern double __tgamma (double) __attribute__ ((__nothrow__ ));
extern double gamma (double) __attribute__ ((__nothrow__ )); extern double __gamma (double) __attribute__ ((__nothrow__ ));
extern double lgamma_r (double, int *__signgamp) __attribute__ ((__nothrow__ )); extern double __lgamma_r (double, int *__signgamp) __attribute__ ((__nothrow__ ));
extern double rint (double __x) __attribute__ ((__nothrow__ )); extern double __rint (double __x) __attribute__ ((__nothrow__ ));
extern double nextafter (double __x, double __y) __attribute__ ((__nothrow__ )); extern double __nextafter (double __x, double __y) __attribute__ ((__nothrow__ ));
extern double nexttoward (double __x, long double __y) __attribute__ ((__nothrow__ )); extern double __nexttoward (double __x, long double __y) __attribute__ ((__nothrow__ ));
extern double remainder (double __x, double __y) __attribute__ ((__nothrow__ )); extern double __remainder (double __x, double __y) __attribute__ ((__nothrow__ ));
extern double scalbn (double __x, int __n) __attribute__ ((__nothrow__ )); extern double __scalbn (double __x, int __n) __attribute__ ((__nothrow__ ));
extern int ilogb (double __x) __attribute__ ((__nothrow__ )); extern int __ilogb (double __x) __attribute__ ((__nothrow__ ));
extern double scalbln (double __x, long int __n) __attribute__ ((__nothrow__ )); extern double __scalbln (double __x, long int __n) __attribute__ ((__nothrow__ ));
extern double nearbyint (double __x) __attribute__ ((__nothrow__ )); extern double __nearbyint (double __x) __attribute__ ((__nothrow__ ));
extern double round (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern double __round (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern double trunc (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern double __trunc (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern double remquo (double __x, double __y, int *__quo) __attribute__ ((__nothrow__ )); extern double __remquo (double __x, double __y, int *__quo) __attribute__ ((__nothrow__ ));
extern long int lrint (double __x) __attribute__ ((__nothrow__ )); extern long int __lrint (double __x) __attribute__ ((__nothrow__ ));
__extension__
extern long long int llrint (double __x) __attribute__ ((__nothrow__ )); extern long long int __llrint (double __x) __attribute__ ((__nothrow__ ));
extern long int lround (double __x) __attribute__ ((__nothrow__ )); extern long int __lround (double __x) __attribute__ ((__nothrow__ ));
__extension__
extern long long int llround (double __x) __attribute__ ((__nothrow__ )); extern long long int __llround (double __x) __attribute__ ((__nothrow__ ));
extern double fdim (double __x, double __y) __attribute__ ((__nothrow__ )); extern double __fdim (double __x, double __y) __attribute__ ((__nothrow__ ));
extern double fmax (double __x, double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern double __fmax (double __x, double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern double fmin (double __x, double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern double __fmin (double __x, double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern double fma (double __x, double __y, double __z) __attribute__ ((__nothrow__ )); extern double __fma (double __x, double __y, double __z) __attribute__ ((__nothrow__ ));
extern double scalb (double __x, double __n) __attribute__ ((__nothrow__ )); extern double __scalb (double __x, double __n) __attribute__ ((__nothrow__ ));
extern int __fpclassifyf (float __value) __attribute__ ((__nothrow__ ))
     __attribute__ ((__const__));
extern int __signbitf (float __value) __attribute__ ((__nothrow__ ))
     __attribute__ ((__const__));
extern int __isinff (float __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));
extern int __finitef (float __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));
extern int __isnanf (float __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));
extern int __iseqsigf (float __x, float __y) __attribute__ ((__nothrow__ ));
extern int __issignalingf (float __value) __attribute__ ((__nothrow__ ))
     __attribute__ ((__const__));
 extern float acosf (float __x) __attribute__ ((__nothrow__ )); extern float __acosf (float __x) __attribute__ ((__nothrow__ ));
 extern float asinf (float __x) __attribute__ ((__nothrow__ )); extern float __asinf (float __x) __attribute__ ((__nothrow__ ));
 extern float atanf (float __x) __attribute__ ((__nothrow__ )); extern float __atanf (float __x) __attribute__ ((__nothrow__ ));
 extern float atan2f (float __y, float __x) __attribute__ ((__nothrow__ )); extern float __atan2f (float __y, float __x) __attribute__ ((__nothrow__ ));
 extern float cosf (float __x) __attribute__ ((__nothrow__ )); extern float __cosf (float __x) __attribute__ ((__nothrow__ ));
 extern float sinf (float __x) __attribute__ ((__nothrow__ )); extern float __sinf (float __x) __attribute__ ((__nothrow__ ));
 extern float tanf (float __x) __attribute__ ((__nothrow__ )); extern float __tanf (float __x) __attribute__ ((__nothrow__ ));
 extern float coshf (float __x) __attribute__ ((__nothrow__ )); extern float __coshf (float __x) __attribute__ ((__nothrow__ ));
 extern float sinhf (float __x) __attribute__ ((__nothrow__ )); extern float __sinhf (float __x) __attribute__ ((__nothrow__ ));
 extern float tanhf (float __x) __attribute__ ((__nothrow__ )); extern float __tanhf (float __x) __attribute__ ((__nothrow__ ));
 extern float acoshf (float __x) __attribute__ ((__nothrow__ )); extern float __acoshf (float __x) __attribute__ ((__nothrow__ ));
 extern float asinhf (float __x) __attribute__ ((__nothrow__ )); extern float __asinhf (float __x) __attribute__ ((__nothrow__ ));
 extern float atanhf (float __x) __attribute__ ((__nothrow__ )); extern float __atanhf (float __x) __attribute__ ((__nothrow__ ));
 extern float expf (float __x) __attribute__ ((__nothrow__ )); extern float __expf (float __x) __attribute__ ((__nothrow__ ));
extern float frexpf (float __x, int *__exponent) __attribute__ ((__nothrow__ )); extern float __frexpf (float __x, int *__exponent) __attribute__ ((__nothrow__ ));
extern float ldexpf (float __x, int __exponent) __attribute__ ((__nothrow__ )); extern float __ldexpf (float __x, int __exponent) __attribute__ ((__nothrow__ ));
 extern float logf (float __x) __attribute__ ((__nothrow__ )); extern float __logf (float __x) __attribute__ ((__nothrow__ ));
 extern float log10f (float __x) __attribute__ ((__nothrow__ )); extern float __log10f (float __x) __attribute__ ((__nothrow__ ));
extern float modff (float __x, float *__iptr) __attribute__ ((__nothrow__ )); extern float __modff (float __x, float *__iptr) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));
 extern float expm1f (float __x) __attribute__ ((__nothrow__ )); extern float __expm1f (float __x) __attribute__ ((__nothrow__ ));
 extern float log1pf (float __x) __attribute__ ((__nothrow__ )); extern float __log1pf (float __x) __attribute__ ((__nothrow__ ));
extern float logbf (float __x) __attribute__ ((__nothrow__ )); extern float __logbf (float __x) __attribute__ ((__nothrow__ ));
 extern float exp2f (float __x) __attribute__ ((__nothrow__ )); extern float __exp2f (float __x) __attribute__ ((__nothrow__ ));
 extern float log2f (float __x) __attribute__ ((__nothrow__ )); extern float __log2f (float __x) __attribute__ ((__nothrow__ ));
 extern float powf (float __x, float __y) __attribute__ ((__nothrow__ )); extern float __powf (float __x, float __y) __attribute__ ((__nothrow__ ));
extern float sqrtf (float __x) __attribute__ ((__nothrow__ )); extern float __sqrtf (float __x) __attribute__ ((__nothrow__ ));
 extern float hypotf (float __x, float __y) __attribute__ ((__nothrow__ )); extern float __hypotf (float __x, float __y) __attribute__ ((__nothrow__ ));
 extern float cbrtf (float __x) __attribute__ ((__nothrow__ )); extern float __cbrtf (float __x) __attribute__ ((__nothrow__ ));
extern float ceilf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern float __ceilf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern float fabsf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern float __fabsf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern float floorf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern float __floorf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern float fmodf (float __x, float __y) __attribute__ ((__nothrow__ )); extern float __fmodf (float __x, float __y) __attribute__ ((__nothrow__ ));
extern int isinff (float __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));
extern int finitef (float __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));
extern float dremf (float __x, float __y) __attribute__ ((__nothrow__ )); extern float __dremf (float __x, float __y) __attribute__ ((__nothrow__ ));
extern float significandf (float __x) __attribute__ ((__nothrow__ )); extern float __significandf (float __x) __attribute__ ((__nothrow__ ));
extern float copysignf (float __x, float __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern float __copysignf (float __x, float __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern float nanf (const char *__tagb) __attribute__ ((__nothrow__ )); extern float __nanf (const char *__tagb) __attribute__ ((__nothrow__ ));
extern int isnanf (float __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));
extern float j0f (float) __attribute__ ((__nothrow__ )); extern float __j0f (float) __attribute__ ((__nothrow__ ));
extern float j1f (float) __attribute__ ((__nothrow__ )); extern float __j1f (float) __attribute__ ((__nothrow__ ));
extern float jnf (int, float) __attribute__ ((__nothrow__ )); extern float __jnf (int, float) __attribute__ ((__nothrow__ ));
extern float y0f (float) __attribute__ ((__nothrow__ )); extern float __y0f (float) __attribute__ ((__nothrow__ ));
extern float y1f (float) __attribute__ ((__nothrow__ )); extern float __y1f (float) __attribute__ ((__nothrow__ ));
extern float ynf (int, float) __attribute__ ((__nothrow__ )); extern float __ynf (int, float) __attribute__ ((__nothrow__ ));
 extern float erff (float) __attribute__ ((__nothrow__ )); extern float __erff (float) __attribute__ ((__nothrow__ ));
 extern float erfcf (float) __attribute__ ((__nothrow__ )); extern float __erfcf (float) __attribute__ ((__nothrow__ ));
extern float lgammaf (float) __attribute__ ((__nothrow__ )); extern float __lgammaf (float) __attribute__ ((__nothrow__ ));
extern float tgammaf (float) __attribute__ ((__nothrow__ )); extern float __tgammaf (float) __attribute__ ((__nothrow__ ));
extern float gammaf (float) __attribute__ ((__nothrow__ )); extern float __gammaf (float) __attribute__ ((__nothrow__ ));
extern float lgammaf_r (float, int *__signgamp) __attribute__ ((__nothrow__ )); extern float __lgammaf_r (float, int *__signgamp) __attribute__ ((__nothrow__ ));
extern float rintf (float __x) __attribute__ ((__nothrow__ )); extern float __rintf (float __x) __attribute__ ((__nothrow__ ));
extern float nextafterf (float __x, float __y) __attribute__ ((__nothrow__ )); extern float __nextafterf (float __x, float __y) __attribute__ ((__nothrow__ ));
extern float nexttowardf (float __x, long double __y) __attribute__ ((__nothrow__ )); extern float __nexttowardf (float __x, long double __y) __attribute__ ((__nothrow__ ));
extern float remainderf (float __x, float __y) __attribute__ ((__nothrow__ )); extern float __remainderf (float __x, float __y) __attribute__ ((__nothrow__ ));
extern float scalbnf (float __x, int __n) __attribute__ ((__nothrow__ )); extern float __scalbnf (float __x, int __n) __attribute__ ((__nothrow__ ));
extern int ilogbf (float __x) __attribute__ ((__nothrow__ )); extern int __ilogbf (float __x) __attribute__ ((__nothrow__ ));
extern float scalblnf (float __x, long int __n) __attribute__ ((__nothrow__ )); extern float __scalblnf (float __x, long int __n) __attribute__ ((__nothrow__ ));
extern float nearbyintf (float __x) __attribute__ ((__nothrow__ )); extern float __nearbyintf (float __x) __attribute__ ((__nothrow__ ));
extern float roundf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern float __roundf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern float truncf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern float __truncf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern float remquof (float __x, float __y, int *__quo) __attribute__ ((__nothrow__ )); extern float __remquof (float __x, float __y, int *__quo) __attribute__ ((__nothrow__ ));
extern long int lrintf (float __x) __attribute__ ((__nothrow__ )); extern long int __lrintf (float __x) __attribute__ ((__nothrow__ ));
__extension__
extern long long int llrintf (float __x) __attribute__ ((__nothrow__ )); extern long long int __llrintf (float __x) __attribute__ ((__nothrow__ ));
extern long int lroundf (float __x) __attribute__ ((__nothrow__ )); extern long int __lroundf (float __x) __attribute__ ((__nothrow__ ));
__extension__
extern long long int llroundf (float __x) __attribute__ ((__nothrow__ )); extern long long int __llroundf (float __x) __attribute__ ((__nothrow__ ));
extern float fdimf (float __x, float __y) __attribute__ ((__nothrow__ )); extern float __fdimf (float __x, float __y) __attribute__ ((__nothrow__ ));
extern float fmaxf (float __x, float __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern float __fmaxf (float __x, float __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern float fminf (float __x, float __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern float __fminf (float __x, float __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern float fmaf (float __x, float __y, float __z) __attribute__ ((__nothrow__ )); extern float __fmaf (float __x, float __y, float __z) __attribute__ ((__nothrow__ ));
extern float scalbf (float __x, float __n) __attribute__ ((__nothrow__ )); extern float __scalbf (float __x, float __n) __attribute__ ((__nothrow__ ));
extern int __fpclassifyl (long double __value) __attribute__ ((__nothrow__ ))
     __attribute__ ((__const__));
extern int __signbitl (long double __value) __attribute__ ((__nothrow__ ))
     __attribute__ ((__const__));
extern int __isinfl (long double __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));
extern int __finitel (long double __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));
extern int __isnanl (long double __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));
extern int __iseqsigl (long double __x, long double __y) __attribute__ ((__nothrow__ ));
extern int __issignalingl (long double __value) __attribute__ ((__nothrow__ ))
     __attribute__ ((__const__));
 extern long double acosl (long double __x) __attribute__ ((__nothrow__ )); extern long double __acosl (long double __x) __attribute__ ((__nothrow__ ));
 extern long double asinl (long double __x) __attribute__ ((__nothrow__ )); extern long double __asinl (long double __x) __attribute__ ((__nothrow__ ));
 extern long double atanl (long double __x) __attribute__ ((__nothrow__ )); extern long double __atanl (long double __x) __attribute__ ((__nothrow__ ));
 extern long double atan2l (long double __y, long double __x) __attribute__ ((__nothrow__ )); extern long double __atan2l (long double __y, long double __x) __attribute__ ((__nothrow__ ));
 extern long double cosl (long double __x) __attribute__ ((__nothrow__ )); extern long double __cosl (long double __x) __attribute__ ((__nothrow__ ));
 extern long double sinl (long double __x) __attribute__ ((__nothrow__ )); extern long double __sinl (long double __x) __attribute__ ((__nothrow__ ));
 extern long double tanl (long double __x) __attribute__ ((__nothrow__ )); extern long double __tanl (long double __x) __attribute__ ((__nothrow__ ));
 extern long double coshl (long double __x) __attribute__ ((__nothrow__ )); extern long double __coshl (long double __x) __attribute__ ((__nothrow__ ));
 extern long double sinhl (long double __x) __attribute__ ((__nothrow__ )); extern long double __sinhl (long double __x) __attribute__ ((__nothrow__ ));
 extern long double tanhl (long double __x) __attribute__ ((__nothrow__ )); extern long double __tanhl (long double __x) __attribute__ ((__nothrow__ ));
 extern long double acoshl (long double __x) __attribute__ ((__nothrow__ )); extern long double __acoshl (long double __x) __attribute__ ((__nothrow__ ));
 extern long double asinhl (long double __x) __attribute__ ((__nothrow__ )); extern long double __asinhl (long double __x) __attribute__ ((__nothrow__ ));
 extern long double atanhl (long double __x) __attribute__ ((__nothrow__ )); extern long double __atanhl (long double __x) __attribute__ ((__nothrow__ ));
 extern long double expl (long double __x) __attribute__ ((__nothrow__ )); extern long double __expl (long double __x) __attribute__ ((__nothrow__ ));
extern long double frexpl (long double __x, int *__exponent) __attribute__ ((__nothrow__ )); extern long double __frexpl (long double __x, int *__exponent) __attribute__ ((__nothrow__ ));
extern long double ldexpl (long double __x, int __exponent) __attribute__ ((__nothrow__ )); extern long double __ldexpl (long double __x, int __exponent) __attribute__ ((__nothrow__ ));
 extern long double logl (long double __x) __attribute__ ((__nothrow__ )); extern long double __logl (long double __x) __attribute__ ((__nothrow__ ));
 extern long double log10l (long double __x) __attribute__ ((__nothrow__ )); extern long double __log10l (long double __x) __attribute__ ((__nothrow__ ));
extern long double modfl (long double __x, long double *__iptr) __attribute__ ((__nothrow__ )); extern long double __modfl (long double __x, long double *__iptr) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));
 extern long double expm1l (long double __x) __attribute__ ((__nothrow__ )); extern long double __expm1l (long double __x) __attribute__ ((__nothrow__ ));
 extern long double log1pl (long double __x) __attribute__ ((__nothrow__ )); extern long double __log1pl (long double __x) __attribute__ ((__nothrow__ ));
extern long double logbl (long double __x) __attribute__ ((__nothrow__ )); extern long double __logbl (long double __x) __attribute__ ((__nothrow__ ));
 extern long double exp2l (long double __x) __attribute__ ((__nothrow__ )); extern long double __exp2l (long double __x) __attribute__ ((__nothrow__ ));
 extern long double log2l (long double __x) __attribute__ ((__nothrow__ )); extern long double __log2l (long double __x) __attribute__ ((__nothrow__ ));
 extern long double powl (long double __x, long double __y) __attribute__ ((__nothrow__ )); extern long double __powl (long double __x, long double __y) __attribute__ ((__nothrow__ ));
extern long double sqrtl (long double __x) __attribute__ ((__nothrow__ )); extern long double __sqrtl (long double __x) __attribute__ ((__nothrow__ ));
 extern long double hypotl (long double __x, long double __y) __attribute__ ((__nothrow__ )); extern long double __hypotl (long double __x, long double __y) __attribute__ ((__nothrow__ ));
 extern long double cbrtl (long double __x) __attribute__ ((__nothrow__ )); extern long double __cbrtl (long double __x) __attribute__ ((__nothrow__ ));
extern long double ceill (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern long double __ceill (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern long double fabsl (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern long double __fabsl (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern long double floorl (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern long double __floorl (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern long double fmodl (long double __x, long double __y) __attribute__ ((__nothrow__ )); extern long double __fmodl (long double __x, long double __y) __attribute__ ((__nothrow__ ));
extern int isinfl (long double __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));
extern int finitel (long double __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));
extern long double dreml (long double __x, long double __y) __attribute__ ((__nothrow__ )); extern long double __dreml (long double __x, long double __y) __attribute__ ((__nothrow__ ));
extern long double significandl (long double __x) __attribute__ ((__nothrow__ )); extern long double __significandl (long double __x) __attribute__ ((__nothrow__ ));
extern long double copysignl (long double __x, long double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern long double __copysignl (long double __x, long double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern long double nanl (const char *__tagb) __attribute__ ((__nothrow__ )); extern long double __nanl (const char *__tagb) __attribute__ ((__nothrow__ ));
extern int isnanl (long double __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));
extern long double j0l (long double) __attribute__ ((__nothrow__ )); extern long double __j0l (long double) __attribute__ ((__nothrow__ ));
extern long double j1l (long double) __attribute__ ((__nothrow__ )); extern long double __j1l (long double) __attribute__ ((__nothrow__ ));
extern long double jnl (int, long double) __attribute__ ((__nothrow__ )); extern long double __jnl (int, long double) __attribute__ ((__nothrow__ ));
extern long double y0l (long double) __attribute__ ((__nothrow__ )); extern long double __y0l (long double) __attribute__ ((__nothrow__ ));
extern long double y1l (long double) __attribute__ ((__nothrow__ )); extern long double __y1l (long double) __attribute__ ((__nothrow__ ));
extern long double ynl (int, long double) __attribute__ ((__nothrow__ )); extern long double __ynl (int, long double) __attribute__ ((__nothrow__ ));
 extern long double erfl (long double) __attribute__ ((__nothrow__ )); extern long double __erfl (long double) __attribute__ ((__nothrow__ ));
 extern long double erfcl (long double) __attribute__ ((__nothrow__ )); extern long double __erfcl (long double) __attribute__ ((__nothrow__ ));
extern long double lgammal (long double) __attribute__ ((__nothrow__ )); extern long double __lgammal (long double) __attribute__ ((__nothrow__ ));
extern long double tgammal (long double) __attribute__ ((__nothrow__ )); extern long double __tgammal (long double) __attribute__ ((__nothrow__ ));
extern long double gammal (long double) __attribute__ ((__nothrow__ )); extern long double __gammal (long double) __attribute__ ((__nothrow__ ));
extern long double lgammal_r (long double, int *__signgamp) __attribute__ ((__nothrow__ )); extern long double __lgammal_r (long double, int *__signgamp) __attribute__ ((__nothrow__ ));
extern long double rintl (long double __x) __attribute__ ((__nothrow__ )); extern long double __rintl (long double __x) __attribute__ ((__nothrow__ ));
extern long double nextafterl (long double __x, long double __y) __attribute__ ((__nothrow__ )); extern long double __nextafterl (long double __x, long double __y) __attribute__ ((__nothrow__ ));
extern long double nexttowardl (long double __x, long double __y) __attribute__ ((__nothrow__ )); extern long double __nexttowardl (long double __x, long double __y) __attribute__ ((__nothrow__ ));
extern long double remainderl (long double __x, long double __y) __attribute__ ((__nothrow__ )); extern long double __remainderl (long double __x, long double __y) __attribute__ ((__nothrow__ ));
extern long double scalbnl (long double __x, int __n) __attribute__ ((__nothrow__ )); extern long double __scalbnl (long double __x, int __n) __attribute__ ((__nothrow__ ));
extern int ilogbl (long double __x) __attribute__ ((__nothrow__ )); extern int __ilogbl (long double __x) __attribute__ ((__nothrow__ ));
extern long double scalblnl (long double __x, long int __n) __attribute__ ((__nothrow__ )); extern long double __scalblnl (long double __x, long int __n) __attribute__ ((__nothrow__ ));
extern long double nearbyintl (long double __x) __attribute__ ((__nothrow__ )); extern long double __nearbyintl (long double __x) __attribute__ ((__nothrow__ ));
extern long double roundl (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern long double __roundl (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern long double truncl (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern long double __truncl (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern long double remquol (long double __x, long double __y, int *__quo) __attribute__ ((__nothrow__ )); extern long double __remquol (long double __x, long double __y, int *__quo) __attribute__ ((__nothrow__ ));
extern long int lrintl (long double __x) __attribute__ ((__nothrow__ )); extern long int __lrintl (long double __x) __attribute__ ((__nothrow__ ));
__extension__
extern long long int llrintl (long double __x) __attribute__ ((__nothrow__ )); extern long long int __llrintl (long double __x) __attribute__ ((__nothrow__ ));
extern long int lroundl (long double __x) __attribute__ ((__nothrow__ )); extern long int __lroundl (long double __x) __attribute__ ((__nothrow__ ));
__extension__
extern long long int llroundl (long double __x) __attribute__ ((__nothrow__ )); extern long long int __llroundl (long double __x) __attribute__ ((__nothrow__ ));
extern long double fdiml (long double __x, long double __y) __attribute__ ((__nothrow__ )); extern long double __fdiml (long double __x, long double __y) __attribute__ ((__nothrow__ ));
extern long double fmaxl (long double __x, long double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern long double __fmaxl (long double __x, long double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern long double fminl (long double __x, long double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern long double __fminl (long double __x, long double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern long double fmal (long double __x, long double __y, long double __z) __attribute__ ((__nothrow__ )); extern long double __fmal (long double __x, long double __y, long double __z) __attribute__ ((__nothrow__ ));
extern long double scalbl (long double __x, long double __n) __attribute__ ((__nothrow__ )); extern long double __scalbl (long double __x, long double __n) __attribute__ ((__nothrow__ ));
extern int signgam;
enum
  {
    FP_NAN =
      0,
    FP_INFINITE =
      1,
    FP_ZERO =
      2,
    FP_SUBNORMAL =
      3,
    FP_NORMAL =
      4
  };

typedef __int8_t int8_t;
typedef __int16_t int16_t;
typedef __int32_t int32_t;
typedef __int64_t int64_t;
typedef __uint8_t uint8_t;
typedef __uint16_t uint16_t;
typedef __uint32_t uint32_t;
typedef __uint64_t uint64_t;
typedef __int_least8_t int_least8_t;
typedef __int_least16_t int_least16_t;
typedef __int_least32_t int_least32_t;
typedef __int_least64_t int_least64_t;
typedef __uint_least8_t uint_least8_t;
typedef __uint_least16_t uint_least16_t;
typedef __uint_least32_t uint_least32_t;
typedef __uint_least64_t uint_least64_t;
typedef signed char int_fast8_t;
typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;
typedef unsigned char uint_fast8_t;
typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
typedef long int intptr_t;
typedef unsigned long int uintptr_t;
typedef __intmax_t intmax_t;
typedef __uintmax_t uintmax_t;
extern void __assert_fail (const char *__assertion, const char *__file,
      unsigned int __line, const char *__function)
     __attribute__ ((__nothrow__ )) __attribute__ ((__noreturn__));
extern void __assert_perror_fail (int __errnum, const char *__file,
      unsigned int __line, const char *__function)
     __attribute__ ((__nothrow__ )) __attribute__ ((__noreturn__));
extern void __assert (const char *__assertion, const char *__file, int __line)
     __attribute__ ((__nothrow__ )) __attribute__ ((__noreturn__));
typedef __builtin_va_list __gnuc_va_list;
typedef struct
{
  int __count;
  union
  {
    unsigned int __wch;
    char __wchb[4];
  } __value;
} __mbstate_t;
typedef struct _G_fpos_t
{
  __off_t __pos;
  __mbstate_t __state;
} __fpos_t;
typedef struct _G_fpos64_t
{
  __off64_t __pos;
  __mbstate_t __state;
} __fpos64_t;
struct _IO_FILE;
typedef struct _IO_FILE __FILE;
struct _IO_FILE;
typedef struct _IO_FILE FILE;
struct _IO_FILE;
struct _IO_marker;
struct _IO_codecvt;
struct _IO_wide_data;
typedef void _IO_lock_t;
struct _IO_FILE
{
  int _flags;
  char *_IO_read_ptr;
  char *_IO_read_end;
  char *_IO_read_base;
  char *_IO_write_base;
  char *_IO_write_ptr;
  char *_IO_write_end;
  char *_IO_buf_base;
  char *_IO_buf_end;
  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;
  struct _IO_marker *_markers;
  struct _IO_FILE *_chain;
  int _fileno;
  int _flags2;
  __off_t _old_offset;
  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];
  _IO_lock_t *_lock;
  __off64_t _offset;
  struct _IO_codecvt *_codecvt;
  struct _IO_wide_data *_wide_data;
  struct _IO_FILE *_freeres_list;
  void *_freeres_buf;
  size_t __pad5;
  int _mode;
  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];
};
typedef __gnuc_va_list va_list;
typedef __off_t off_t;
typedef __ssize_t ssize_t;
typedef __fpos_t fpos_t;
extern FILE *stdin;
extern FILE *stdout;
extern FILE *stderr;
extern int remove (const char *__filename) __attribute__ ((__nothrow__ ));
extern int rename (const char *__old, const char *__new) __attribute__ ((__nothrow__ ));
extern int renameat (int __oldfd, const char *__old, int __newfd,
       const char *__new) __attribute__ ((__nothrow__ ));
extern int fclose (FILE *__stream);
extern FILE *tmpfile (void)
  __attribute__ ((__malloc__)) ;
extern char *tmpnam (char[20]) __attribute__ ((__nothrow__ )) ;
extern char *tmpnam_r (char __s[20]) __attribute__ ((__nothrow__ )) ;
extern char *tempnam (const char *__dir, const char *__pfx)
   __attribute__ ((__nothrow__ )) __attribute__ ((__malloc__)) ;
extern int fflush (FILE *__stream);
extern int fflush_unlocked (FILE *__stream);
extern FILE *fopen (const char *__restrict __filename,
      const char *__restrict __modes)
  __attribute__ ((__malloc__)) ;
extern FILE *freopen (const char *__restrict __filename,
        const char *__restrict __modes,
        FILE *__restrict __stream) ;
extern FILE *fdopen (int __fd, const char *__modes) __attribute__ ((__nothrow__ ))
  __attribute__ ((__malloc__)) ;
extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
  __attribute__ ((__nothrow__ )) __attribute__ ((__malloc__)) ;
extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) __attribute__ ((__nothrow__ ))
  __attribute__ ((__malloc__)) ;
extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) __attribute__ ((__nothrow__ ));
extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) __attribute__ ((__nothrow__ ));
extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) __attribute__ ((__nothrow__ ));
extern void setlinebuf (FILE *__stream) __attribute__ ((__nothrow__ ));
extern int fprintf (FILE *__restrict __stream,
      const char *__restrict __format, ...);
extern int printf (const char *__restrict __format, ...);
extern int sprintf (char *__restrict __s,
      const char *__restrict __format, ...) __attribute__ ((__nothrow__));
extern int vfprintf (FILE *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg);
extern int vprintf (const char *__restrict __format, __gnuc_va_list __arg);
extern int vsprintf (char *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg) __attribute__ ((__nothrow__));
extern int snprintf (char *__restrict __s, size_t __maxlen,
       const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 4)));
extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 0)));
extern int vdprintf (int __fd, const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));
extern int fscanf (FILE *__restrict __stream,
     const char *__restrict __format, ...) ;
extern int scanf (const char *__restrict __format, ...) ;
extern int sscanf (const char *__restrict __s,
     const char *__restrict __format, ...) __attribute__ ((__nothrow__ ));
extern int fscanf (FILE *__restrict __stream, const char *__restrict __format, ...) __asm__ ("" "__isoc99_fscanf") ;
extern int scanf (const char *__restrict __format, ...) __asm__ ("" "__isoc99_scanf") ;
extern int sscanf (const char *__restrict __s, const char *__restrict __format, ...) __asm__ ("" "__isoc99_sscanf") __attribute__ ((__nothrow__ ));
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;
extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;
extern int vsscanf (const char *__restrict __s,
      const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__ )) __attribute__ ((__format__ (__scanf__, 2, 0)));
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vfscanf")
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;
extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vscanf")
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;
extern int vsscanf (const char *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vsscanf") __attribute__ ((__nothrow__ ))
     __attribute__ ((__format__ (__scanf__, 2, 0)));
extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);
extern int getchar (void);
extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
extern int fgetc_unlocked (FILE *__stream);
extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);
extern int putchar (int __c);
extern int fputc_unlocked (int __c, FILE *__stream);
extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);
extern int getw (FILE *__stream);
extern int putw (int __w, FILE *__stream);
extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
                                                         ;
extern __ssize_t __getdelim (char **__restrict __lineptr,
                             size_t *__restrict __n, int __delimiter,
                             FILE *__restrict __stream) ;
extern __ssize_t getdelim (char **__restrict __lineptr,
                           size_t *__restrict __n, int __delimiter,
                           FILE *__restrict __stream) ;
extern __ssize_t getline (char **__restrict __lineptr,
                          size_t *__restrict __n,
                          FILE *__restrict __stream) ;
extern int fputs (const char *__restrict __s, FILE *__restrict __stream);
extern int puts (const char *__s);
extern int ungetc (int __c, FILE *__stream);
extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite (const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s);
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream);
extern int fseek (FILE *__stream, long int __off, int __whence);
extern long int ftell (FILE *__stream) ;
extern void rewind (FILE *__stream);
extern int fseeko (FILE *__stream, __off_t __off, int __whence);
extern __off_t ftello (FILE *__stream) ;
extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);
extern int fsetpos (FILE *__stream, const fpos_t *__pos);
extern void clearerr (FILE *__stream) __attribute__ ((__nothrow__ ));
extern int feof (FILE *__stream) __attribute__ ((__nothrow__ )) ;
extern int ferror (FILE *__stream) __attribute__ ((__nothrow__ )) ;
extern void clearerr_unlocked (FILE *__stream) __attribute__ ((__nothrow__ ));
extern int feof_unlocked (FILE *__stream) __attribute__ ((__nothrow__ )) ;
extern int ferror_unlocked (FILE *__stream) __attribute__ ((__nothrow__ )) ;
extern void perror (const char *__s);
extern int fileno (FILE *__stream) __attribute__ ((__nothrow__ )) ;
extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__ )) ;
extern int pclose (FILE *__stream);
extern FILE *popen (const char *__command, const char *__modes)
  __attribute__ ((__malloc__)) ;
extern char *ctermid (char *__s) __attribute__ ((__nothrow__ ))
                                     ;
extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__ ));
extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__ )) ;
extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__ ));
extern int __uflow (FILE *);
extern int __overflow (FILE *, int);
extern __inline __attribute__ ((__gnu_inline__)) int
vprintf (const char *__restrict __fmt, __gnuc_va_list __arg)
{
  return vfprintf (stdout, __fmt, __arg);
}
extern __inline __attribute__ ((__gnu_inline__)) int
getchar (void)
{
  return getc (stdin);
}
extern __inline __attribute__ ((__gnu_inline__)) int
fgetc_unlocked (FILE *__fp)
{
  return (__builtin_expect (((__fp)->_IO_read_ptr >= (__fp)->_IO_read_end), 0) ? __uflow (__fp) : *(unsigned char *) (__fp)->_IO_read_ptr++);
}
extern __inline __attribute__ ((__gnu_inline__)) int
getc_unlocked (FILE *__fp)
{
  return (__builtin_expect (((__fp)->_IO_read_ptr >= (__fp)->_IO_read_end), 0) ? __uflow (__fp) : *(unsigned char *) (__fp)->_IO_read_ptr++);
}
extern __inline __attribute__ ((__gnu_inline__)) int
getchar_unlocked (void)
{
  return (__builtin_expect (((stdin)->_IO_read_ptr >= (stdin)->_IO_read_end), 0) ? __uflow (stdin) : *(unsigned char *) (stdin)->_IO_read_ptr++);
}
extern __inline __attribute__ ((__gnu_inline__)) int
putchar (int __c)
{
  return putc (__c, stdout);
}
extern __inline __attribute__ ((__gnu_inline__)) int
fputc_unlocked (int __c, FILE *__stream)
{
  return (__builtin_expect (((__stream)->_IO_write_ptr >= (__stream)->_IO_write_end), 0) ? __overflow (__stream, (unsigned char) (__c)) : (unsigned char) (*(__stream)->_IO_write_ptr++ = (__c)));
}
extern __inline __attribute__ ((__gnu_inline__)) int
putc_unlocked (int __c, FILE *__stream)
{
  return (__builtin_expect (((__stream)->_IO_write_ptr >= (__stream)->_IO_write_end), 0) ? __overflow (__stream, (unsigned char) (__c)) : (unsigned char) (*(__stream)->_IO_write_ptr++ = (__c)));
}
extern __inline __attribute__ ((__gnu_inline__)) int
putchar_unlocked (int __c)
{
  return (__builtin_expect (((stdout)->_IO_write_ptr >= (stdout)->_IO_write_end), 0) ? __overflow (stdout, (unsigned char) (__c)) : (unsigned char) (*(stdout)->_IO_write_ptr++ = (__c)));
}
extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ )) feof_unlocked (FILE *__stream)
{
  return (((__stream)->_flags & 0x0010) != 0);
}
extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ )) ferror_unlocked (FILE *__stream)
{
  return (((__stream)->_flags & 0x0020) != 0);
}
static void
platform_main_begin(void)
{
}
static void
platform_main_end(uint32_t crc, int flag)
{
 printf ("checksum = %X\n", crc);
}
static int8_t
(safe_unary_minus_func_int8_t_s)(int8_t si )
{
  return
    -si;
}
static int8_t
(safe_add_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{
  return
    (si1 + si2);
}
static int8_t
(safe_sub_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{
  return
    (si1 - si2);
}
static int8_t
(safe_mul_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{
  return
    si1 * si2;
}
static int8_t
(safe_mod_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int8_t
(safe_div_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int8_t
(safe_lshift_func_int8_t_s_s)(int8_t left, int right )
{
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((127) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int8_t
(safe_lshift_func_int8_t_s_u)(int8_t left, unsigned int right )
{
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((127) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int8_t
(safe_rshift_func_int8_t_s_s)(int8_t left, int right )
{
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int8_t
(safe_rshift_func_int8_t_s_u)(int8_t left, unsigned int right )
{
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int16_t
(safe_unary_minus_func_int16_t_s)(int16_t si )
{
  return
    -si;
}
static int16_t
(safe_add_func_int16_t_s_s)(int16_t si1, int16_t si2 )
{
  return
    (si1 + si2);
}
static int16_t
(safe_sub_func_int16_t_s_s)(int16_t si1, int16_t si2 )
{
  return
    (si1 - si2);
}
static int16_t
(safe_mul_func_int16_t_s_s)(int16_t si1, int16_t si2 )
{
  return
    si1 * si2;
}
static int16_t
(safe_mod_func_int16_t_s_s)(int16_t si1, int16_t si2 )
{
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int16_t
(safe_div_func_int16_t_s_s)(int16_t si1, int16_t si2 )
{
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int16_t
(safe_lshift_func_int16_t_s_s)(int16_t left, int right )
{
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((32767) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int16_t
(safe_lshift_func_int16_t_s_u)(int16_t left, unsigned int right )
{
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((32767) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int16_t
(safe_rshift_func_int16_t_s_s)(int16_t left, int right )
{
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int16_t
(safe_rshift_func_int16_t_s_u)(int16_t left, unsigned int right )
{
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int32_t
(safe_unary_minus_func_int32_t_s)(int32_t si )
{
  return
    (si==(-2147483647-1)) ?
    ((si)) :
    -si;
}
static int32_t
(safe_add_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{
  return
    (((si1>0) && (si2>0) && (si1 > ((2147483647)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-2147483647-1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int32_t
(safe_sub_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(2147483647))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int32_t
(safe_mul_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{
  return
    (((si1 > 0) && (si2 > 0) && (si1 > ((2147483647) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-2147483647-1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-2147483647-1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((2147483647) / si1)))) ?
    ((si1)) :
    si1 * si2;
}
static int32_t
(safe_mod_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int32_t
(safe_div_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int32_t
(safe_lshift_func_int32_t_s_s)(int32_t left, int right )
{
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((2147483647) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int32_t
(safe_lshift_func_int32_t_s_u)(int32_t left, unsigned int right )
{
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((2147483647) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int32_t
(safe_rshift_func_int32_t_s_s)(int32_t left, int right )
{
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int32_t
(safe_rshift_func_int32_t_s_u)(int32_t left, unsigned int right )
{
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint8_t
(safe_unary_minus_func_uint8_t_u)(uint8_t ui )
{
  return -ui;
}
static uint8_t
(safe_add_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 )
{
  return ui1 + ui2;
}
static uint8_t
(safe_sub_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 )
{
  return ui1 - ui2;
}
static uint8_t
(safe_mul_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 )
{
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint8_t
(safe_mod_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 )
{
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint8_t
(safe_div_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 )
{
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint8_t
(safe_lshift_func_uint8_t_u_s)(uint8_t left, int right )
{
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((255) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint8_t
(safe_lshift_func_uint8_t_u_u)(uint8_t left, unsigned int right )
{
  return
    ((((unsigned int)right) >= 32) || (left > ((255) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint8_t
(safe_rshift_func_uint8_t_u_s)(uint8_t left, int right )
{
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint8_t
(safe_rshift_func_uint8_t_u_u)(uint8_t left, unsigned int right )
{
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint16_t
(safe_unary_minus_func_uint16_t_u)(uint16_t ui )
{
  return -ui;
}
static uint16_t
(safe_add_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 )
{
  return ui1 + ui2;
}
static uint16_t
(safe_sub_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 )
{
  return ui1 - ui2;
}
static uint16_t
(safe_mul_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 )
{
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint16_t
(safe_mod_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 )
{
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint16_t
(safe_div_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 )
{
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint16_t
(safe_lshift_func_uint16_t_u_s)(uint16_t left, int right )
{
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((65535) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint16_t
(safe_lshift_func_uint16_t_u_u)(uint16_t left, unsigned int right )
{
  return
    ((((unsigned int)right) >= 32) || (left > ((65535) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint16_t
(safe_rshift_func_uint16_t_u_s)(uint16_t left, int right )
{
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint16_t
(safe_rshift_func_uint16_t_u_u)(uint16_t left, unsigned int right )
{
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint32_t
(safe_unary_minus_func_uint32_t_u)(uint32_t ui )
{
  return -ui;
}
static uint32_t
(safe_add_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 )
{
  return ui1 + ui2;
}
static uint32_t
(safe_sub_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 )
{
  return ui1 - ui2;
}
static uint32_t
(safe_mul_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 )
{
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint32_t
(safe_mod_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 )
{
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint32_t
(safe_div_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 )
{
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint32_t
(safe_lshift_func_uint32_t_u_s)(uint32_t left, int right )
{
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((4294967295U) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint32_t
(safe_lshift_func_uint32_t_u_u)(uint32_t left, unsigned int right )
{
  return
    ((((unsigned int)right) >= 32) || (left > ((4294967295U) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint32_t
(safe_rshift_func_uint32_t_u_s)(uint32_t left, int right )
{
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint32_t
(safe_rshift_func_uint32_t_u_u)(uint32_t left, unsigned int right )
{
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static float
(safe_add_func_float_f_f)(float sf1, float sf2 )
{
  return
    (fabsf((0.5f * sf1) + (0.5f * sf2)) > (0.5f * 3.40282347e+38F)) ?
    (sf1) :
    (sf1 + sf2);
}
static float
(safe_sub_func_float_f_f)(float sf1, float sf2 )
{
  return
    (fabsf((0.5f * sf1) - (0.5f * sf2)) > (0.5f * 3.40282347e+38F)) ?
    (sf1) :
    (sf1 - sf2);
}
static float
(safe_mul_func_float_f_f)(float sf1, float sf2 )
{
  return
    (fabsf((0x1.0p-100f * sf1) * (0x1.0p-28f * sf2)) > (0x1.0p-100f * (0x1.0p-28f * 3.40282347e+38F))) ?
    (sf1) :
    (sf1 * sf2);
}
static float
(safe_div_func_float_f_f)(float sf1, float sf2 )
{
  return
    ((fabsf(sf2) < 1.0f) && (((sf2 == 0.0f) || (fabsf((0x1.0p-49f * sf1) / (0x1.0p100f * sf2))) > (0x1.0p-100f * (0x1.0p-49f * 3.40282347e+38F))))) ?
    (sf1) :
    (sf1 / sf2);
}
static double
(safe_add_func_double_f_f)(double sf1, double sf2 )
{
  return
    (fabs((0.5 * sf1) + (0.5 * sf2)) > (0.5 * 1.7976931348623157e+308)) ?
    (sf1) :
    (sf1 + sf2);
}
static double
(safe_sub_func_double_f_f)(double sf1, double sf2 )
{
  return
    (fabs((0.5 * sf1) - (0.5 * sf2)) > (0.5 * 1.7976931348623157e+308)) ?
    (sf1) :
    (sf1 - sf2);
}
static double
(safe_mul_func_double_f_f)(double sf1, double sf2 )
{
  return
    (fabs((0x1.0p-100 * sf1) * (0x1.0p-924 * sf2)) > (0x1.0p-100 * (0x1.0p-924 * 1.7976931348623157e+308))) ?
    (sf1) :
    (sf1 * sf2);
}
static double
(safe_div_func_double_f_f)(double sf1, double sf2 )
{
  return
    ((fabs(sf2) < 1.0) && (((sf2 == 0.0) || (fabs((0x1.0p-974 * sf1) / (0x1.0p100 * sf2))) > (0x1.0p-100 * (0x1.0p-974 * 1.7976931348623157e+308))))) ?
    (sf1) :
    (sf1 / sf2);
}
static int32_t
(safe_convert_func_float_to_int32_t)(float sf1 )
{
  return
    ((sf1 <= (-2147483647-1)) || (sf1 >= (2147483647))) ?
    ((2147483647)) :
    ((int32_t)(sf1));
}

static uint32_t crc32_tab[256];
static uint32_t crc32_context = 0xFFFFFFFFUL;
static void
crc32_gentab (void)
{
 uint32_t crc;
 const uint32_t poly = 0xEDB88320UL;
 int i, j;
 for (i = 0; i < 256; i++) {
  crc = i;
  for (j = 8; j > 0; j--) {
   if (crc & 1) {
    crc = (crc >> 1) ^ poly;
   } else {
    crc >>= 1;
   }
  }
  crc32_tab[i] = crc;
 }
}
static void
crc32_byte (uint8_t b) {
 crc32_context =
  ((crc32_context >> 8) & 0x00FFFFFF) ^
  crc32_tab[(crc32_context ^ b) & 0xFF];
}
static void
crc32_8bytes (uint32_t val)
{
 crc32_byte ((val>>0) & 0xff);
 crc32_byte ((val>>8) & 0xff);
 crc32_byte ((val>>16) & 0xff);
 crc32_byte ((val>>24) & 0xff);
}
static void
transparent_crc (uint32_t val, char* vname, int flag)
{
 crc32_8bytes(val);
 if (flag) {
    printf("...checksum after hashing %s : %X\n", vname, crc32_context ^ 0xFFFFFFFFU);
 }
}
static void
transparent_crc_bytes (char *ptr, int nbytes, char* vname, int flag)
{
    int i;
    for (i=0; i<nbytes; i++) {
        crc32_byte(ptr[i]);
    }
 if (flag) {
    printf("...checksum after hashing %s : %lX\n", vname, crc32_context ^ 0xFFFFFFFFUL);
 }
}

volatile uint32_t csmith_sink_ = 0;
static long __undefined;
static int32_t *g_3 = (void*)0;
static uint32_t g_22 = 0x70AB227D;
static int32_t **g_30 = &g_3;
static uint32_t g_31 = 0xFC0336AE;
static const int32_t g_48 = 0xF0451807;
static int32_t g_70 = 0;
static const uint16_t g_88 = 0U;
static const uint16_t *g_87 = &g_88;
static int8_t g_101 = 1;
static uint32_t g_103 = 0U;
static int32_t g_105 = 0xDE3FE27F;
static int32_t *g_104 = &g_105;
static int16_t g_127 = 0xFB12;
static uint8_t g_168 = 5U;
static int16_t g_169 = 0xA3FF;
static int8_t g_171 = (-5);
static uint32_t g_173 = 3U;
static uint16_t g_189 = 9U;
static uint8_t *g_231 = &g_168;
static int32_t g_256 = 1;
static int8_t g_301 = (-10);
static const int32_t g_357 = (-1);
static int32_t *g_395 = &g_256;
static int32_t **g_394 = &g_395;
static uint8_t g_467 = 3U;
static uint8_t g_469 = 0U;
static uint8_t g_471 = 0xF8;
static int32_t * const *g_484 = &g_3;
static int32_t * const **g_483 = &g_484;
static int32_t * const ***g_482 = &g_483;
static int32_t * const ****g_481 = &g_482;
static uint16_t ***g_524 = (void*)0;
static const int32_t *g_535 = &g_105;
static const int32_t **g_534 = &g_535;
static int32_t g_583 = 0;
static int8_t *g_607 = &g_171;
static int8_t **g_606 = &g_607;
static uint32_t *g_624 = &g_173;
static uint32_t **g_623 = &g_624;
static int32_t ** const *g_789 = &g_30;
static int32_t ** const **g_788 = &g_789;
static int32_t ** const ***g_787 = &g_788;
static uint16_t g_791 = 0x2391;
static const uint16_t **g_797 = &g_87;
static const uint16_t ***g_796 = &g_797;
static const uint16_t ****g_795 = &g_796;
static uint8_t **g_804 = &g_231;
static const uint32_t g_899 = 0x0D1F6533;
static uint8_t g_910 = 0x9A;
static int8_t ***g_1012 = &g_606;
static int32_t ***g_1037 = &g_30;
static int32_t ****g_1036 = &g_1037;
static int8_t g_1079 = 0x48;
static int8_t func_1(void);
static int32_t * const func_5(int32_t p_6, uint16_t p_7, int32_t * p_8, uint8_t p_9, uint8_t p_10);
static uint8_t func_16(const int32_t * p_17, uint8_t p_18, uint32_t p_19);
static int32_t * func_32(uint16_t p_33, const int16_t p_34, uint16_t p_35, uint16_t p_36);
static int16_t func_39(int8_t p_40, uint32_t p_41, int16_t p_42, const int16_t p_43);
static int32_t * func_50(uint32_t p_51, int32_t * p_52, int32_t p_53);
static int32_t * func_54(uint8_t p_55, int8_t p_56);
static const int32_t * func_57(uint16_t p_58, int32_t * p_59, int32_t p_60, int32_t p_61, int8_t p_62);
static int32_t * func_63(int32_t * p_64, int32_t * p_65, uint8_t p_66, uint16_t p_67, int32_t * p_68);
static int32_t * func_73(int32_t ** p_74, int32_t p_75, int16_t p_76, uint8_t p_77);
static int8_t func_1(void)
{
    int32_t *l_2 = (void*)0;
    const int32_t l_4 = 1;
    int32_t l_27 = 0x537C57F3;
    int32_t *l_917 = (void*)0;
    int8_t *l_941 = (void*)0;
    int16_t * const l_1088 = &g_127;
    int16_t * const *l_1087 = &l_1088;
    const int32_t l_1097 = (-1);
    int16_t l_1102 = 0x4611;
    uint16_t **l_1111 = (void*)0;
    uint32_t l_1114 = 1U;
    int32_t l_1127 = 0xA49BFDBF;
    g_3 = l_2;
    if (l_4)
    {
        int8_t l_13 = 0xEB;
        const int32_t *l_21 = &l_4;
        const int32_t **l_20 = &l_21;
        int32_t **l_901 = &l_2;
        uint16_t *l_932 = &g_189;
        uint16_t * const *l_931 = &l_932;
        uint16_t * const **l_930 = &l_931;
        uint16_t * const ** const *l_929 = &l_930;
        uint32_t l_949 = 4294967295U;
        uint32_t **l_959 = &g_624;
        uint32_t l_1052 = 3U;
        (*l_901) = func_5(((safe_sub_func_uint16_t_u_u(l_13, (&l_4 == &l_4))) & (safe_sub_func_uint8_t_u_u(func_16(((*l_20) = &l_4), (g_22 <= (safe_mod_func_int32_t_s_s(((safe_div_func_int16_t_s_s((g_22 || (0xB5E4 > (0 ^ (g_22 >= l_27)))), g_22)) != g_22), 1))), g_22), g_22))), g_31, l_2, g_22, l_13);
        if (((g_791 || (((*l_2) = (*l_21)) <= (safe_add_func_uint8_t_u_u((**g_804), (((*g_231) == 0xCC) < (6 | ((safe_lshift_func_uint8_t_u_u((((0xDA || (safe_mul_func_uint8_t_u_u(0x1A, 0xB5))) != 65535U) & 0x73EFF802), (**g_804))) || (**g_623)))))))) >= g_22))
        {
            uint32_t l_911 = 3U;
            uint8_t *l_912 = &g_469;
            uint16_t **l_948 = &l_932;
            uint32_t **l_960 = &g_624;
            uint8_t l_1011 = 0U;
            if (((***g_483) = ((*l_2) = (safe_div_func_uint8_t_u_u(g_910, ((*l_912) = ((**g_804) = l_911)))))))
            {
                int32_t *l_915 = &g_583;
                uint16_t ****l_928 = &g_524;
                uint32_t **l_958 = (void*)0;
                int32_t l_985 = 0;
                for (g_103 = (-22); (g_103 > 45); g_103++)
                {
                    uint32_t * const l_924 = (void*)0;
                    int32_t l_925 = 0xD1120028;
                    uint16_t l_933 = 0xB4F7;
                    int16_t *l_934 = &g_169;
                    int32_t **l_935 = &g_104;
                    (*l_2) = (((void*)0 == &g_524) & 0x41FF);
                    (*g_534) = l_915;
                    (**l_901) = (!(*g_231));
                    (*l_935) = (***g_482);
                }
                if (((safe_mul_func_uint16_t_u_u((**l_20), (~(safe_lshift_func_uint8_t_u_s((l_941 != (*g_606)), 1))))) & ((safe_div_func_int8_t_s_s(((*g_535) | (((safe_add_func_int16_t_s_s((((((*l_912) = ((**g_804) = l_911)) & (((0x93F8 || (l_911 != ((**l_929) != l_948))) >= 0x1D) || l_949)) == (***g_796)) == (**g_534)), 0x853B)) ^ (*l_21)) > 0x97D7E8A4)), (*l_915))) & (**g_606))))
                {
                    uint32_t ***l_961 = &l_960;
                    uint16_t ***l_966 = &l_948;
                    int16_t *l_967 = &g_169;
                    int32_t l_975 = 0xE782D04C;
                    int32_t *l_979 = &g_105;
                    (*l_20) = &l_4;
                    if ((((*l_967) = (safe_mul_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u((*g_87), g_256)) < (safe_rshift_func_int16_t_s_u((safe_div_func_uint32_t_u_u(((l_959 = l_958) == ((*l_961) = l_960)), ((*g_231) && (**g_804)))), 7))), ((safe_div_func_int8_t_s_s((**g_606), (((safe_mul_func_int8_t_s_s((((*l_966) = l_948) == (**g_795)), 1)) || (*l_915)) | (*g_231)))) <= (*g_607))))) ^ (**l_20)))
                    {
                        uint8_t l_968 = 0U;
                        return l_968;
                    }
                    else
                    {
                        uint32_t ****l_969 = &l_961;
                        (*l_969) = &g_623;
                        (*g_104) = (((+(safe_sub_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u(((**g_606) = l_975), (*g_231))), 1))) != (safe_add_func_uint8_t_u_u(0xCA, (!(*g_624))))) < 0x86);
                        (****g_482) = 0x128AF2A7;
                    }
                    l_979 = (void*)0;
                    return (*g_607);
                }
                else
                {
                    uint16_t *l_984 = &g_189;
                    const int32_t l_995 = (-1);
                    uint32_t l_998 = 0xD2A675BC;
                    (****g_482) = (safe_sub_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u(((0U <= ((((*l_932) = (((void*)0 == l_984) ^ l_985)) >= ((*l_915) > (((void*)0 != l_915) && (safe_rshift_func_int8_t_s_s(((safe_div_func_uint8_t_u_u(((safe_div_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((!(*l_2)), ((1U >= (*l_915)) < (-7)))), l_995)) || 0x6490), (*g_231))) >= (***g_796)), (**g_606)))))) >= 0x0C34)) >= (-5)), 0)), 0x99A347A0));
                    for (g_101 = 0; (g_101 > (-23)); g_101--)
                    {
                        (***g_483) = (l_998 <= (*g_87));
                    }
                }
                for (g_31 = (-8); (g_31 != 6); g_31 = safe_add_func_uint8_t_u_u(g_31, 7))
                {
                    return (**g_606);
                }
            }
            else
            {
                int32_t **l_1001 = &l_2;
                (*l_1001) = (*g_484);
                (*l_20) = &l_4;
            }
            (***g_483) = ((**g_606) > ((~(safe_mod_func_uint16_t_u_u(((((safe_sub_func_uint32_t_u_u(0x71B48606, (safe_div_func_int32_t_s_s(l_911, (safe_rshift_func_uint16_t_u_s((0 || l_911), 6)))))) == ((****g_482) >= (**g_484))) & (l_911 < l_1011)) < (*l_2)), (**g_797)))) <= 0xD2D6704D));
            g_1012 = &g_606;
        }
        else
        {
            int16_t l_1023 = (-4);
            int32_t *l_1054 = &g_583;
            uint16_t **** const l_1062 = (void*)0;
            (**g_484) = (*l_21);
            (*g_534) = ((*l_901) = l_917);
            for (g_583 = 0; (g_583 <= 0); g_583 = safe_add_func_uint16_t_u_u(g_583, 1))
            {
                int16_t *l_1017 = &g_169;
                int32_t l_1022 = 0x5F75B2F8;
                int32_t l_1029 = 0xAEE287AA;
                int16_t *l_1030 = &g_127;
                int8_t l_1053 = 0xA7;
                (*g_3) = (safe_sub_func_uint16_t_u_u((***g_796), (*g_87)));
                if (((((((**g_797) == ((*l_1030) = ((((*l_1017) = g_103) <= (safe_add_func_uint8_t_u_u(250U, (((((*g_624) != (-4)) | (l_1022 = (safe_div_func_uint8_t_u_u((((***g_483) = (l_1022 < l_1023)) || ((safe_sub_func_int16_t_s_s(g_31, (safe_add_func_int8_t_s_s((safe_unary_minus_func_uint16_t_u(0x709B)), 0x90)))) == 0x05BAE702)), (*g_231))))) >= 0U) <= (*g_231))))) | l_1029))) != l_1029) | (*g_231)) && (**g_804)) || (**g_797)))
                {
                    for (g_189 = 0; (g_189 < 56); ++g_189)
                    {
                        int16_t l_1033 = (-9);
                        l_2 = (**g_483);
                        (*****g_481) = l_1033;
                    }
                    for (g_301 = 0; (g_301 >= 14); ++g_301)
                    {
                        int32_t *****l_1038 = &g_1036;
                        (*g_3) = ((*g_787) == ((*l_1038) = g_1036));
                        return (**g_606);
                    }
                    if ((***g_483))
                        continue;
                }
                else
                {
                    int32_t *l_1039 = &g_105;
                    (*l_20) = (*l_901);
                    (*l_20) = func_63(l_1039, func_32((l_1023 >= ((((*g_624) & ((safe_sub_func_uint8_t_u_u(((**g_804) | (**g_804)), (safe_rshift_func_uint8_t_u_s(((+l_1023) > (safe_rshift_func_uint16_t_u_u(((((safe_add_func_int8_t_s_s(1, ((safe_sub_func_int32_t_s_s((+(*g_231)), (*****g_481))) | (*l_1039)))) != l_1023) <= (****g_795)) & (*g_624)), 14))), 1)))) == 0)) == l_1052) ^ (**g_623))), g_471, l_1029, l_1029), l_1053, (***g_796), l_1054);
                    if ((*g_104))
                        continue;
                    for (g_469 = 0; (g_469 > 27); ++g_469)
                    {
                        (*g_534) = (void*)0;
                    }
                }
                (*****g_481) = ((!(safe_rshift_func_int16_t_s_s(((void*)0 == (*g_606)), 12))) >= ((****l_929) = (safe_add_func_int8_t_s_s((l_1062 == &g_524), ((((safe_unary_minus_func_int8_t_s(((void*)0 == &l_941))) > ((**g_606) = ((safe_mod_func_uint8_t_u_u(0xAE, (safe_sub_func_int16_t_s_s(l_1022, ((((*l_1030) = (*l_1054)) >= (*l_21)) >= (*g_624)))))) <= l_1029))) >= (*l_1054)) | 0x3F58)))));
            }
        }
        for (g_189 = (-9); (g_189 != 14); g_189++)
        {
            uint32_t l_1076 = 0x6795960C;
            int32_t l_1082 = 0;
            for (g_173 = 5; (g_173 > 8); g_173++)
            {
                (***g_483) = (*g_104);
            }
            if ((**g_484))
            {
                int16_t *l_1083 = &g_169;
                int16_t *l_1084 = &g_127;
                int32_t l_1085 = 1;
                (*g_534) = (*l_20);
            }
            else
            {
                int16_t l_1086 = 1;
                int16_t * const **l_1089 = (void*)0;
                int16_t * const **l_1090 = &l_1087;
                (*g_104) = l_1086;
                (*l_1090) = l_1087;
            }
            (*l_20) = func_32(((l_1082 = (safe_lshift_func_int8_t_s_u((((**l_1087) = (safe_mul_func_uint8_t_u_u((((l_1097 >= (****g_482)) & (*g_87)) == (*g_624)), (((*g_231) = (safe_rshift_func_int16_t_s_s((0xA41F != l_1082), 7))) != g_31)))) & ((**g_623) < (safe_rshift_func_uint8_t_u_u((**l_20), g_899)))), (*l_21)))) > l_1102), g_169, (****g_795), (****g_795));
        }
    }
    else
    {
        int32_t *l_1107 = &g_70;
        int32_t **l_1108 = &g_395;
        (*g_104) = (-4);
        for (g_173 = 0; (g_173 < 57); g_173 = safe_add_func_int32_t_s_s(g_173, 1))
        {
            int32_t **l_1105 = &l_917;
            int16_t l_1106 = 0x9AC2;
            (*l_1105) = (**g_483);
            return l_1106;
        }
        (***g_1036) = l_1107;
        (***g_789) = (((l_1108 == (void*)0) != (safe_mul_func_uint16_t_u_u(((****g_795) <= (((g_168 | (l_1111 == l_1111)) ^ (**g_623)) > (safe_add_func_int32_t_s_s((**g_30), l_1114)))), (*l_1107)))) | (-1));
    }
    (***g_483) = (safe_mod_func_int16_t_s_s((safe_mul_func_int16_t_s_s((249U || (((**g_623) = ((((***g_1012) = (safe_lshift_func_int16_t_s_s(((*l_1088) = (((safe_mul_func_int16_t_s_s(g_583, ((((***g_1012) ^ 1U) < (((((((safe_div_func_uint8_t_u_u(((*g_231) = ((((0x1241 > ((&l_941 != (void*)0) != ((safe_sub_func_int16_t_s_s((1 == (l_1114 && l_1102)), (****g_795))) >= (**g_797)))) != g_105) ^ g_357) > g_583)), (*g_607))) != g_70) || 1U) <= 0x088E) || (-1)) > 0x08) ^ g_22)) | (****g_795)))) > 0x8892) && g_256)), 9))) == l_1114) && (*g_624))) > l_1127)), 0xC803)), (**g_797)));
    return (***g_1012);
}
static int32_t * const func_5(int32_t p_6, uint16_t p_7, int32_t * p_8, uint8_t p_9, uint8_t p_10)
{
    uint16_t l_46 = 0xD4F6;
    const int32_t *l_47 = &g_48;
    uint16_t *l_529 = &l_46;
    int8_t ***l_883 = &g_606;
    int8_t ***l_884 = &g_606;
    const uint16_t ***l_887 = (void*)0;
    const uint16_t **** const l_886 = &l_887;
    const uint16_t **** const *l_885 = &l_886;
    const uint32_t *l_898 = &g_899;
    const uint32_t **l_897 = &l_898;
    int32_t *l_900 = &g_583;
    (*g_534) = func_32(((*l_529) = (safe_div_func_int16_t_s_s(func_39(g_22, ((safe_sub_func_uint16_t_u_u(65535U, (l_46 = 0x04AC))) & (((l_47 != (void*)0) == (&l_47 == (void*)0)) && (*l_47))), g_31, g_22), 65535U))), g_357, p_10, p_10);
    (**g_484) = ((safe_add_func_int32_t_s_s(((l_883 = l_883) != l_884), 0)) || ((l_885 = (void*)0) != (void*)0));
    (*l_900) = (g_48 ^ (0xC6BA643E == (safe_mul_func_int16_t_s_s((1 ^ (safe_add_func_int8_t_s_s(0x39, (safe_add_func_int8_t_s_s(((p_10 <= (0xD303 != (((*g_104) = (safe_mul_func_int8_t_s_s((safe_unary_minus_func_int16_t_s((((*l_897) = l_47) != p_8))), 0))) < p_9))) == g_169), (*l_47)))))), (*l_47)))));
    return l_900;
}
static uint8_t func_16(const int32_t * p_17, uint8_t p_18, uint32_t p_19)
{
    for (p_18 = 0; (p_18 != 41); p_18++)
    {
        g_30 = (void*)0;
    }
    return p_19;
}
static int32_t * func_32(uint16_t p_33, const int16_t p_34, uint16_t p_35, uint16_t p_36)
{
    uint32_t l_586 = 8U;
    int32_t *l_627 = &g_105;
    uint16_t ***l_653 = (void*)0;
    uint16_t l_666 = 1U;
    int16_t l_668 = 1;
    int32_t *l_670 = (void*)0;
    uint32_t l_694 = 0x9A71824B;
    const uint8_t *l_717 = &g_469;
    int8_t l_740 = 0xD6;
    uint16_t *l_750 = &g_189;
    uint16_t **l_749 = &l_750;
    int32_t ****l_773 = (void*)0;
    int32_t l_794 = 0;
    int8_t l_823 = 0xC0;
    int16_t l_834 = (-3);
    uint32_t l_846 = 4294967287U;
    int16_t l_847 = 0x2BF3;
    int16_t *l_848 = (void*)0;
    uint32_t l_864 = 0xBFA046A8;
    int32_t *l_880 = &g_105;
    for (p_36 = 0; (p_36 > 30); p_36++)
    {
        const int32_t ***l_536 = &g_534;
        const uint8_t *l_538 = &g_168;
        int32_t ** const *l_574 = (void*)0;
        int32_t ** const **l_573 = &l_574;
        int32_t ** const ***l_572 = &l_573;
        uint32_t ** const l_625 = &g_624;
        int8_t l_628 = (-1);
        int32_t *l_641 = (void*)0;
        int32_t **l_665 = &g_395;
        int32_t l_693 = 0xD22448B2;
        int32_t ***l_735 = (void*)0;
        int32_t ****l_734 = &l_735;
        uint16_t ****l_743 = &l_653;
        int16_t *l_768 = &l_668;
        int32_t l_828 = 0x23D630D4;
        int16_t l_829 = 0x5910;
        (**g_484) = p_36;
        (*****g_481) = p_36;
    }
    if ((safe_mul_func_uint8_t_u_u((safe_add_func_int32_t_s_s((l_834 = ((***g_483) = p_36)), ((void*)0 != &l_717))), (safe_lshift_func_uint16_t_u_s((safe_rshift_func_int16_t_s_s((safe_sub_func_int16_t_s_s((safe_unary_minus_func_int32_t_s(p_33)), (safe_lshift_func_uint8_t_u_s((*g_231), p_35)))), (g_127 = (((((p_36 <= (*g_624)) != (l_847 = (l_846 = ((safe_mod_func_int8_t_s_s((0x2D62B9C8 != 0x3333A8F2), l_666)) == p_33)))) && 4294967295U) && p_34) & 0x6F)))), p_34)))))
    {
        uint8_t l_851 = 4U;
        uint8_t *l_865 = &g_471;
        int8_t *l_875 = &l_823;
        uint32_t l_876 = 0xA60463D6;
        l_794 = (safe_div_func_int8_t_s_s((l_851 || 1), ((*l_865) = (g_471 || ((((**g_804) = l_851) != ((**g_606) = l_851)) | (!(safe_sub_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s((safe_div_func_int16_t_s_s((safe_div_func_int32_t_s_s((((g_791 = ((+(**g_623)) | ((p_35 || l_864) && ((*g_3) = ((p_36 < p_33) != p_33))))) > 1U) != 8), l_851)), g_127)), 1)), 0)), 6))))))));
        (***g_483) = (+(safe_lshift_func_int8_t_s_s((*g_607), (safe_lshift_func_int8_t_s_u((p_36 >= (((((l_851 > p_36) > (safe_sub_func_uint16_t_u_u(p_33, ((((*l_875) = (safe_mul_func_uint8_t_u_u((0x1337F2BB ^ (*l_627)), p_34))) < (**g_606)) <= 0x88)))) < l_876) == 8U) > (**g_804))), 4)))));
    }
    else
    {
        int32_t *l_877 = &l_794;
        int32_t **l_878 = (void*)0;
        int32_t **l_879 = &l_627;
        (*g_534) = ((*l_879) = l_877);
    }
    (***g_483) = 0x20194E63;
    (*l_627) = p_33;
    return l_880;
}
static int16_t func_39(int8_t p_40, uint32_t p_41, int16_t p_42, const int16_t p_43)
{
    int32_t *l_69 = &g_70;
    uint32_t l_273 = 0xBFAE5DCD;
    int8_t *l_274 = &g_101;
    int8_t l_421 = 0x14;
    int32_t * const l_423 = &g_70;
    uint16_t * const l_439 = &g_189;
    int32_t **l_456 = &g_395;
    int32_t *****l_485 = (void*)0;
    uint32_t l_498 = 4294967295U;
    uint16_t l_500 = 1U;
    const uint16_t **l_506 = &g_87;
    const uint16_t ** const *l_505 = &l_506;
    if ((+func_16(func_50(g_48, func_54(g_22, ((*l_274) = func_16(func_57(p_42, func_63(l_69, l_69, (((((safe_mod_func_int16_t_s_s(func_16(func_73(&l_69, p_42, (*l_69), p_40), g_31, p_43), g_22)) <= g_31) || 0x2BB1342F) ^ 0x3027) >= g_22), p_43, g_104), g_22, g_31, g_31), l_273, g_88))), g_31), g_22, g_48)))
    {
        const uint16_t l_416 = 1U;
        uint32_t *l_417 = (void*)0;
        uint32_t *l_418 = &g_31;
        int32_t l_419 = 0x1A296F13;
        int32_t l_420 = 0x2D4BDB75;
        int16_t l_422 = (-1);
        (*g_104) = 0xF7269C6A;
        (*g_3) = ((((safe_lshift_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u(((*g_87) >= (~(p_43 || ((*g_3) & (safe_lshift_func_uint16_t_u_s((!(l_420 = (l_419 = (safe_add_func_int32_t_s_s((safe_sub_func_int16_t_s_s((l_416 == (((*l_418) = l_416) || ((void*)0 != l_417))), (*l_69))), (0U >= 0)))))), l_421)))))), p_43)) & (*l_69)), l_422)) | (*g_231)) != p_42) < 0x596293FC);
        if (((*l_69) & (0U <= ((void*)0 != l_423))))
        {
            int16_t *l_435 = &g_169;
            uint32_t *l_473 = &g_173;
            int32_t l_474 = 0x0158A440;
            if ((p_43 || (safe_mod_func_int16_t_s_s(((safe_sub_func_uint32_t_u_u(((*l_418) = (safe_add_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_u((*g_87), 0)) || (+(safe_rshift_func_uint16_t_u_s(((void*)0 == l_435), 8)))), (&p_42 == l_435)))), (safe_add_func_int16_t_s_s((+l_416), ((l_439 == &g_88) | 0))))) < g_22), p_41))))
            {
                uint8_t *l_466 = &g_467;
                uint8_t *l_468 = &g_469;
                uint8_t *l_470 = &g_471;
                int32_t l_472 = (-1);
                (*l_69) = (0x8D92D271 || ((((void*)0 == &g_88) || (*g_231)) >= 0));
                (*l_69) = p_41;
                (*g_3) = (((safe_sub_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_u((safe_add_func_int8_t_s_s((safe_add_func_int8_t_s_s((((((safe_mod_func_int32_t_s_s(((safe_mul_func_int8_t_s_s((&g_171 != &g_171), (*g_231))) <= (safe_add_func_uint8_t_u_u(((*l_470) = ((*l_468) = ((*l_466) = ((((*l_274) = 0x1A) && (l_456 == &g_395)) > ((safe_lshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((!(p_40 ^ (*l_423))), (((safe_lshift_func_uint16_t_u_s((((((*l_435) = (*l_423)) >= g_88) < 0x7360) & 0x09EA005B), p_40)) <= 0x2C17) & g_189))), l_420)), 4)) == (*l_69)))))), 0U))), p_41)) <= g_70) != 5) & 0xB915) ^ g_127), l_472)), 255U)), 4)), 1)), (*g_87))) <= p_41) > 4U);
                (*l_69) = ((void*)0 != l_473);
            }
            else
            {
                (*g_3) = (-7);
            }
            return l_474;
        }
        else
        {
            int32_t l_486 = 0x8A9741A8;
            int32_t *l_499 = &l_420;
            int32_t **l_501 = (void*)0;
            int32_t **l_502 = &l_499;
            (*l_502) = func_63(func_50((safe_lshift_func_uint16_t_u_u((((safe_mod_func_uint16_t_u_u((*g_87), (safe_lshift_func_int8_t_s_u((g_481 == l_485), (l_486 || (g_301 = ((safe_rshift_func_int16_t_s_s(0x6925, 1)) == (safe_sub_func_int32_t_s_s(((*****g_481) = p_40), ((0x5B98 & (0x5B0E | (((+((safe_lshift_func_uint8_t_u_s(((safe_mul_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((p_43 | g_256), p_40)), p_40)) > p_40), l_420)) && 0)) & p_40) & p_42))) & l_498)))))))))) ^ p_42) <= (-10)), (*g_87))), l_499, (**g_394)), &l_419, g_48, l_500, &l_419);
        }
    }
    else
    {
        int32_t l_507 = 0;
        int16_t *l_525 = &g_127;
        uint8_t *l_526 = &g_471;
        int32_t **l_527 = (void*)0;
        int32_t **l_528 = &g_104;
        (*l_528) = func_54(((*l_526) = (safe_div_func_uint8_t_u_u(((*g_231) = ((*l_69) = (((void*)0 == l_505) ^ l_507))), (safe_mod_func_int8_t_s_s(((p_40 >= (safe_mod_func_int16_t_s_s((((safe_mod_func_uint32_t_u_u((safe_sub_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(((*g_87) >= (((((0 ^ (safe_mod_func_int16_t_s_s((((*g_104) = (safe_div_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((g_524 != (void*)0), ((*l_525) = (-8)))), 0xE8))) & l_507), g_31))) != p_42) < (-1)) && 253U) >= g_48)), g_469)), l_507)), l_507)) < p_40) > g_101), 2U))) > p_42), l_507))))), p_43);
    }
    return p_43;
}
static int32_t * func_50(uint32_t p_51, int32_t * p_52, int32_t p_53)
{
    const uint32_t l_328 = 0U;
    int32_t l_344 = 1;
    int8_t ***l_397 = (void*)0;
    const int8_t ***l_398 = (void*)0;
    int8_t ***l_399 = (void*)0;
    int8_t * const l_402 = &g_301;
    int8_t * const *l_401 = &l_402;
    int8_t * const **l_400 = &l_401;
    int32_t *l_403 = &g_105;
    for (g_31 = 0; (g_31 <= 60); g_31 = safe_add_func_int8_t_s_s(g_31, 4))
    {
        int16_t l_320 = 0x1DA8;
        int32_t l_367 = 0xED41F1B0;
        int8_t *l_375 = &g_101;
        p_52 = p_52;
        if ((safe_mul_func_uint16_t_u_u((!(safe_add_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(g_103, (l_320 || l_320))), 0xB5))), (safe_sub_func_int16_t_s_s(0x935B, l_320)))))
        {
            int8_t *l_335 = &g_171;
            uint32_t l_345 = 0xC20C0B13;
            int32_t *l_346 = &g_70;
            int32_t *l_354 = &g_256;
            int32_t **l_353 = &l_354;
            const int32_t **l_355 = (void*)0;
            const int32_t *l_356 = &g_357;
            int32_t l_358 = 1;
            (*l_346) = (safe_div_func_uint16_t_u_u(65535U, (safe_mod_func_int32_t_s_s(0x11EA6DD7, ((!l_328) & ((((*g_104) = (safe_sub_func_int16_t_s_s((safe_sub_func_int8_t_s_s(((*l_335) = (safe_add_func_uint32_t_u_u(g_301, (*g_104)))), (g_22 >= (safe_rshift_func_int8_t_s_u(((((*g_87) || (l_328 != (safe_rshift_func_uint16_t_u_s((((l_344 = ((((safe_mul_func_int8_t_s_s(l_328, (-1))) & g_189) <= p_53) | 0x9318AA52)) | (*g_87)) >= 65535U), l_345)))) == p_53) <= 0U), (*g_231)))))), 0x8AB2))) || (*p_52)) || 0))))));
            (*p_52) = (((safe_div_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(((safe_sub_func_int8_t_s_s(((*l_346) != (0U < g_189)), (((*l_353) = &g_256) != (l_356 = &p_53)))) == l_358), (0x41 & ((safe_rshift_func_int16_t_s_u(((safe_mod_func_int32_t_s_s((safe_add_func_uint8_t_u_u(((*g_231) = (safe_add_func_uint16_t_u_u(l_367, (l_367 ^ (*g_3))))), l_344)), 1)) ^ l_344), 14)) || 0xE547552E)))), p_53)) ^ (*p_52)) >= (*p_52));
        }
        else
        {
            int16_t *l_372 = &l_320;
            int8_t **l_376 = &l_375;
            int8_t *l_378 = &g_301;
            int8_t **l_377 = &l_378;
            int16_t *l_392 = &g_169;
            int16_t *l_393 = &g_127;
            int32_t l_396 = 0;
            (*g_3) = (safe_add_func_int8_t_s_s((safe_mod_func_int16_t_s_s(((*l_372) = 0xD499), (l_344 ^ (((((*l_377) = ((*l_376) = l_375)) == (void*)0) && (((*l_378) = ((safe_unary_minus_func_uint32_t_u(p_53)) | (((safe_mod_func_int8_t_s_s((safe_div_func_uint32_t_u_u((p_51 == (safe_sub_func_int8_t_s_s(g_301, (safe_mod_func_int8_t_s_s((safe_mul_func_int16_t_s_s((safe_mul_func_int16_t_s_s(((*l_393) = ((*l_392) = g_256)), (g_394 == (void*)0))), p_51)), p_53))))), g_256)), p_53)) == p_51) <= g_171))) >= l_396)) != 0x21)))), 255U));
            return &g_105;
        }
    }
    (*l_400) = (void*)0;
    return l_403;
}
static int32_t * func_54(uint8_t p_55, int8_t p_56)
{
    int16_t l_275 = 0xBA33;
    int32_t *l_276 = &g_70;
    int8_t *l_290 = &g_171;
    int8_t *l_291 = &g_101;
    uint16_t l_298 = 65535U;
    int8_t *l_299 = (void*)0;
    int8_t *l_300 = &g_301;
    uint32_t l_304 = 8U;
    int32_t l_305 = 0xDBC78BEF;
    uint32_t *l_306 = &g_31;
    uint16_t l_307 = 9U;
    int32_t **l_308 = &l_276;
    (*l_308) = &l_305;
    for (g_70 = (-29); (g_70 >= (-10)); ++g_70)
    {
        if ((**l_308))
            break;
    }
    (*l_308) = &g_70;
    return &g_105;
}
static const int32_t * func_57(uint16_t p_58, int32_t * p_59, int32_t p_60, int32_t p_61, int8_t p_62)
{
    int32_t ***l_109 = &g_30;
    int32_t ****l_108 = &l_109;
    const int32_t l_126 = (-1);
    int32_t *l_137 = &g_70;
    uint16_t *l_268 = &g_189;
    uint16_t **l_267 = &l_268;
    if ((((*l_108) = (void*)0) != (void*)0))
    {
        int32_t *l_139 = (void*)0;
        int32_t l_219 = 4;
        int16_t l_222 = 0;
        int32_t l_223 = 0xA50E592C;
        for (g_105 = 0; (g_105 < 8); g_105++)
        {
            uint8_t l_114 = 1U;
            int32_t l_166 = 7;
            int32_t *l_215 = &l_166;
        }
        for (g_189 = 0; (g_189 > 24); g_189 = safe_add_func_int8_t_s_s(g_189, 9))
        {
            int32_t **l_218 = &l_139;
            uint8_t *l_220 = (void*)0;
            uint8_t *l_221 = &g_168;
            uint32_t *l_224 = (void*)0;
            uint32_t *l_225 = &g_173;
            int32_t **l_226 = (void*)0;
            int32_t **l_227 = &g_104;
            (*l_227) = ((*l_218) = (g_3 = func_63(p_59, p_59, p_61, (((*l_225) = (((((&g_48 != &g_70) < l_222) && g_22) || l_223) | 6U)) <= 0x66B95E14), p_59)));
        }
    }
    else
    {
        uint8_t *l_230 = &g_168;
        int32_t l_236 = 1;
        uint16_t *l_239 = &g_189;
        uint16_t **l_238 = &l_239;
        int32_t l_245 = 1;
        const int32_t *l_248 = &l_245;
        const int32_t **l_247 = &l_248;
        const int32_t ***l_246 = &l_247;
        uint32_t *l_251 = (void*)0;
        uint32_t *l_252 = (void*)0;
        uint32_t *l_253 = &g_173;
        int32_t *l_255 = &g_256;
        uint16_t ***l_269 = &l_267;
        int16_t *l_270 = &g_169;
        int32_t **l_271 = (void*)0;
        int32_t **l_272 = &g_104;
        (*g_3) = ((safe_lshift_func_int16_t_s_s(((g_231 = l_230) == (void*)0), (safe_rshift_func_int8_t_s_u(((safe_mul_func_int8_t_s_s(l_236, ((safe_unary_minus_func_uint8_t_u((&g_88 == ((*l_238) = &p_58)))) <= (0xBF8F4250 ^ g_22)))) == (safe_sub_func_uint16_t_u_u((l_245 = ((((*g_104) = (safe_rshift_func_int8_t_s_s(((((0U == (!(0xEB09 ^ 0x3B4B))) ^ 1U) | (*g_87)) == p_62), 4))) != 0) >= 0xF8AF3884)), (*l_137)))), l_236)))) != p_60);
        (*l_137) = ((p_60 || ((((((*l_108) = &g_30) == l_246) || ((*p_59) < ((*l_253) = (4294967295U | (safe_lshift_func_int8_t_s_u(p_62, p_61)))))) ^ (+((((p_62 || (p_60 > 1U)) != 0) <= g_31) > (***l_246)))) | 0x0A)) < p_62);
        (*l_247) = ((*l_272) = func_73(&g_104, ((*l_255) = p_60), (g_127 = (safe_div_func_int32_t_s_s(((*p_59) = (((*l_137) = 0xDD16FCC1) & 1)), (((safe_rshift_func_uint8_t_u_s(255U, 4)) || ((*l_270) = (safe_mul_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u(p_62, ((safe_lshift_func_uint16_t_u_u((&l_239 == ((*l_269) = l_267)), (g_189 = (*g_87)))) >= 249U))), g_173)))) || g_48)))), (*l_248)));
    }
    return p_59;
}
static int32_t * func_63(int32_t * p_64, int32_t * p_65, uint8_t p_66, uint16_t p_67, int32_t * p_68)
{
    uint16_t l_106 = 0xE64A;
    int32_t *l_107 = &g_105;
    l_106 = ((*p_64) && 0x5669BA90);
    return l_107;
}
static int32_t * func_73(int32_t ** p_74, int32_t p_75, int16_t p_76, uint8_t p_77)
{
    int32_t *l_78 = &g_70;
    int32_t **l_79 = &g_3;
    int32_t **l_80 = &l_78;
    uint16_t l_83 = 65530U;
    uint16_t *l_84 = &l_83;
    const uint16_t *l_90 = &g_88;
    const uint16_t **l_89 = &l_90;
    const uint16_t *l_92 = &g_88;
    const uint16_t **l_91 = &l_92;
    int32_t l_93 = 0xFB0C4F31;
    int32_t ***l_99 = &g_30;
    int8_t *l_100 = &g_101;
    uint8_t l_102 = 0x35;
    (*l_79) = l_78;
    (*l_80) = ((*l_79) = (*p_74));
    (*l_78) = (p_77 | 251U);
    (**l_79) = (safe_mul_func_uint16_t_u_u((((**l_79) >= ((*l_84) = (((**l_80) < l_83) || ((*p_74) == ((*l_80) = (*p_74)))))) == (safe_sub_func_int32_t_s_s((g_87 != ((*l_91) = ((*l_89) = (void*)0))), (l_93 = (**p_74))))), (g_103 = (((safe_lshift_func_int16_t_s_u((((*l_100) = (safe_rshift_func_uint8_t_u_u(((+((((((*l_99) = &g_3) == (void*)0) > 0xAE) && g_48) & g_70)) | p_76), 0))) <= 0x7C), p_77)) | 0U) < l_102))));
    return (*g_30);
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_22;
    csmith_sink_ = g_31;
    csmith_sink_ = g_48;
    csmith_sink_ = g_70;
    csmith_sink_ = g_88;
    csmith_sink_ = g_101;
    csmith_sink_ = g_103;
    csmith_sink_ = g_105;
    csmith_sink_ = g_127;
    csmith_sink_ = g_168;
    csmith_sink_ = g_169;
    csmith_sink_ = g_171;
    csmith_sink_ = g_173;
    csmith_sink_ = g_189;
    csmith_sink_ = g_256;
    csmith_sink_ = g_301;
    csmith_sink_ = g_357;
    csmith_sink_ = g_467;
    csmith_sink_ = g_469;
    csmith_sink_ = g_471;
    csmith_sink_ = g_583;
    csmith_sink_ = g_791;
    csmith_sink_ = g_899;
    csmith_sink_ = g_910;
    csmith_sink_ = g_1079;
    platform_main_end(0,0);
    return 0;
}
