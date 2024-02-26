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
static uint16_t g_6 = 3U;
static int32_t g_22 = (-7);
static const int32_t g_30 = 0xD24B5E49;
static int32_t g_48 = 4;
static int32_t g_65 = 1;
static int32_t ***g_70 = (void*)0;
static int16_t g_83 = (-4);
static uint16_t g_99 = 65535U;
static uint16_t g_103 = 0x2A19;
static uint8_t g_109 = 0x5C;
static int32_t g_111 = (-2);
static uint32_t g_145 = 0x22C85E55;
static uint16_t g_148 = 0U;
static int8_t g_150 = 0x77;
static int16_t g_153 = (-10);
static int32_t g_154 = 7;
static const int8_t g_240 = 9;
static int32_t *g_282 = &g_48;
static const uint32_t *g_324 = &g_145;
static const uint32_t ** const g_323 = &g_324;
static int16_t *g_362 = &g_83;
static int16_t **g_361 = &g_362;
static int16_t g_408 = 0x48B5;
static uint8_t g_456 = 0xB9;
static int8_t *g_504 = &g_150;
static uint32_t g_508 = 0x7702AA31;
static uint32_t *g_521 = &g_508;
static uint32_t **g_520 = &g_521;
static uint32_t ***g_519 = &g_520;
static uint32_t ****g_518 = &g_519;
static uint32_t *****g_517 = &g_518;
static int16_t * const * const g_537 = &g_362;
static int16_t * const * const *g_536 = &g_537;
static int16_t * const * const **g_535 = &g_536;
static int16_t g_561 = 2;
static int32_t *g_568 = &g_65;
static uint32_t * const *g_602 = (void*)0;
static uint32_t * const * const *g_601 = &g_602;
static uint32_t g_606 = 0xA795881A;
static uint32_t func_1(void);
static int32_t * func_2(uint16_t p_3, int32_t p_4, int32_t * p_5);
static int32_t * func_8(uint32_t p_9, int32_t * p_10, const int32_t * p_11, int32_t p_12, int32_t p_13);
static int32_t * func_14(int32_t * p_15, int32_t p_16, int32_t * p_17);
static int32_t * func_18(const int16_t p_19);
static int32_t * func_23(uint32_t p_24, int32_t p_25, int32_t p_26);
static int32_t func_36(int32_t p_37, const int32_t p_38, const int16_t p_39, int32_t p_40, int32_t p_41);
static uint32_t func_42(uint16_t p_43, int32_t p_44);
static int8_t func_49(uint8_t p_50, const uint32_t p_51, int32_t * p_52);
static int32_t * func_53(uint32_t p_54, const int16_t p_55);
static uint32_t func_1(void)
{
    uint8_t l_7 = 1U;
    const int8_t l_20 = 0x6E;
    const int32_t *l_424 = (void*)0;
    int32_t **l_545 = (void*)0;
    uint8_t *l_546 = &g_109;
    int32_t l_553 = 1;
    uint16_t *l_560 = &g_103;
    int8_t l_648 = 0x1C;
    l_424 = func_2(g_6, l_7, func_8(l_7, func_14(func_18(l_20), g_6, func_23(g_6, l_7, (g_6 <= (-1)))), l_424, g_240, l_20));
    ((void) sizeof ((g_324 == &g_145 || g_324 == &g_508) ? 1 : 0), __extension__ ({ if (g_324 == &g_145 || g_324 == &g_508) ; else __assert_fail ("g_324 == &g_145 || g_324 == &g_508", "/tmp/tmp9ydwqowq.c", 94, __extension__ __PRETTY_FUNCTION__); }));
    ((void) sizeof ((l_424 == &g_111) ? 1 : 0), __extension__ ({ if (l_424 == &g_111) ; else __assert_fail ("l_424 == &g_111", "/tmp/tmp9ydwqowq.c", 95, __extension__ __PRETTY_FUNCTION__); }));
    ((void) sizeof ((g_517 == &g_518 || g_517 == 0) ? 1 : 0), __extension__ ({ if (g_517 == &g_518 || g_517 == 0) ; else __assert_fail ("g_517 == &g_518 || g_517 == 0", "/tmp/tmp9ydwqowq.c", 96, __extension__ __PRETTY_FUNCTION__); }));
    if (((((((1 ^ (*l_424)) <= (*l_424)) ^ ((*l_546) = 0xCF)) | (((safe_mod_func_uint32_t_u_u((*g_521), g_408)) | (safe_rshift_func_uint16_t_u_s((safe_mod_func_uint16_t_u_u(l_553, (safe_rshift_func_uint16_t_u_u(((*l_560) = (safe_lshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s((*l_424), (*g_504))), 10))), 13)))), 5))) <= 0xD0AFAAC5)) && g_561) | 0x5481))
    {
        uint32_t l_590 = 4294967295U;
        int16_t **l_592 = &g_362;
        const uint32_t **l_620 = &g_324;
        const uint32_t ***l_619 = &l_620;
        const uint32_t ****l_618 = &l_619;
        const uint32_t ****l_623 = &l_619;
        for (g_508 = (-10); (g_508 != 6); g_508++)
        {
            int32_t l_577 = (-7);
            uint32_t ****l_582 = &g_519;
            int32_t l_586 = (-5);
            int16_t l_589 = 0xF65B;
            uint16_t *l_599 = (void*)0;
            int32_t *l_600 = &l_586;
            uint32_t * const l_605 = &g_606;
            uint32_t * const * const l_604 = &l_605;
            uint32_t * const * const *l_603 = &l_604;
            int16_t l_610 = 0;
            for (g_48 = 18; (g_48 >= 7); --g_48)
            {
                int32_t *l_566 = &g_65;
                int32_t **l_567 = &g_282;
                uint32_t ** const *l_581 = (void*)0;
                uint32_t ** const **l_580 = &l_581;
                int32_t l_583 = 0;
                uint16_t *l_591 = &g_148;
                g_568 = ((*l_567) = l_566);
                ((void) sizeof ((g_282 == &g_65) ? 1 : 0), __extension__ ({ if (g_282 == &g_65) ; else __assert_fail ("g_282 == &g_65", "/tmp/tmp9ydwqowq.c", 127, __extension__ __PRETTY_FUNCTION__); }));
                (*l_567) = func_53((safe_mod_func_uint16_t_u_u(((*l_560) = (((safe_lshift_func_uint8_t_u_u((g_103 || (g_561 <= (-2))), g_240)) || 0x20) != ((void*)0 != &g_535))), (safe_lshift_func_uint16_t_u_s(((((0xF4CE8A4B != (0x2A86 < l_577)) && 0x23) && (*g_504)) >= 65532U), (*g_362))))), l_577);
                ((void) sizeof ((g_282 == 0 || g_282 == &g_65) ? 1 : 0), __extension__ ({ if (g_282 == 0 || g_282 == &g_65) ; else __assert_fail ("g_282 == 0 || g_282 == &g_65", "/tmp/tmp9ydwqowq.c", 130, __extension__ __PRETTY_FUNCTION__); }));
                l_583 = (g_22 = ((g_111 != (0xECA0DB15 ^ (safe_lshift_func_int16_t_s_u((l_577 >= ((l_580 == l_582) >= l_583)), 0)))) && ((((*l_591) = ((*l_560) = ((safe_mul_func_int8_t_s_s(((l_586 = ((*l_566) = 0xF81C17BA)) & (65529U != (safe_add_func_uint32_t_u_u((l_590 = (l_589 | (*g_504))), 5)))), 0x9E)) | (-1)))) ^ 8U) != 5)));
                return (**g_323);
            }
            (*l_600) = ((*g_568) = ((((*g_536) != l_592) >= g_6) >= (0x87 && ((safe_add_func_int16_t_s_s((**g_361), (g_150 ^ ((safe_rshift_func_int16_t_s_s((safe_mul_func_int16_t_s_s((l_599 == (void*)0), (((*l_546) = 0x8E) & g_153))), 14)) || 0x7C4DA7D5)))) == 1))));
            if ((((l_603 = g_601) != (void*)0) <= 0xC1))
            {
                int8_t l_609 = 0x32;
                int32_t **l_611 = &g_282;
                for (g_154 = 29; (g_154 < (-2)); g_154--)
                {
                    return l_609;
                }
                (*l_611) = func_2(l_609, l_590, func_23((l_610 & l_609), ((*g_568) = 0), l_590));
                ((void) sizeof ((g_282 == &g_111) ? 1 : 0), __extension__ ({ if (g_282 == &g_111) ; else __assert_fail ("g_282 == &g_111", "/tmp/tmp9ydwqowq.c", 145, __extension__ __PRETTY_FUNCTION__); }));
                (*l_600) = ((void*)0 == &g_536);
            }
            else
            {
                const uint32_t *****l_621 = &l_618;
                const uint32_t *****l_622 = (void*)0;
                int32_t l_626 = 3;
                uint8_t *l_642 = &g_456;
                (*g_568) = (safe_mul_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((((*l_600) = ((**g_537) <= (safe_mod_func_int8_t_s_s(((l_623 = ((*l_621) = l_618)) == &g_519), (((((*l_642) = ((l_626 | (safe_unary_minus_func_int8_t_s((safe_mod_func_int32_t_s_s((((*l_546) = ((safe_sub_func_uint32_t_u_u((*l_600), (((1U >= ((*g_518) != (*g_518))) == (safe_rshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_u((safe_mul_func_uint8_t_u_u((((safe_rshift_func_int8_t_s_s((safe_mod_func_int32_t_s_s(0, l_626)), (*g_504))) & (*l_600)) != 8), (*g_504))), 2)), 8))) ^ 8))) == g_103)) | l_626), (-1)))))) <= g_83)) ^ (*l_600)) | 6U) && (-8)))))) > (*g_568)), l_590)), l_626));
            }
            ((void) sizeof ((l_603 == &g_602) ? 1 : 0), __extension__ ({ if (l_603 == &g_602) ; else __assert_fail ("l_603 == &g_602", "/tmp/tmp9ydwqowq.c", 157, __extension__ __PRETTY_FUNCTION__); }));
            if ((*g_568))
                break;
        }
        return (*l_424);
    }
    else
    {
        for (g_109 = 0; (g_109 < 41); g_109++)
        {
            uint32_t l_645 = 0xF47D597A;
            l_645 = (*g_568);
            (*g_568) = (*g_568);
        }
        for (g_148 = 0; (g_148 >= 8); g_148++)
        {
            return (*g_521);
        }
    }
    return l_648;
}
static int32_t * func_2(uint16_t p_3, int32_t p_4, int32_t * p_5)
{
    uint32_t *****l_516 = (void*)0;
    uint32_t *****l_522 = &g_518;
    uint8_t l_523 = 9U;
    int32_t *l_544 = &g_111;
    for (g_65 = 0; (g_65 > 15); g_65 = safe_add_func_int16_t_s_s(g_65, 2))
    {
        int8_t l_528 = 0xD8;
        uint32_t *l_531 = &g_508;
        int32_t *l_532 = &g_48;
        int32_t *l_533 = &g_22;
        int16_t ****l_534 = (void*)0;
        int16_t l_538 = 0x8DB4;
        (*l_533) = (((-1) && ((g_517 = l_516) != l_522)) & (l_523 | ((*l_532) = (((((safe_sub_func_uint32_t_u_u(((p_4 <= (safe_add_func_int32_t_s_s(((l_528 < 0x11DBAA1B) || (safe_rshift_func_int16_t_s_u((((*g_323) = (*g_520)) == l_531), 11))), 0x8D1B6FB1))) < l_528), l_528)) && p_4) == p_3) == l_528) >= l_523))));
        l_538 = (l_534 != g_535);
        g_48 = ((p_3 != ((((**g_520) != (p_3 || (safe_add_func_int8_t_s_s(((*g_504) = (*g_504)), (~(***g_536)))))) <= ((void*)0 != &l_534)) != ((safe_lshift_func_int16_t_s_s((g_111 < (p_4 > p_3)), (*l_533))) > l_523))) != (**g_537));
    }
    return l_544;
}
static int32_t * func_8(uint32_t p_9, int32_t * p_10, const int32_t * p_11, int32_t p_12, int32_t p_13)
{
    uint32_t l_440 = 0x5E94A68F;
    int32_t l_458 = (-5);
    int32_t *l_461 = &l_458;
    int16_t ****l_471 = (void*)0;
    int32_t l_472 = 0xABCEAACA;
    int16_t *****l_510 = &l_471;
    int32_t *l_511 = &l_472;
    int32_t *l_512 = &l_458;
    int32_t *l_513 = &g_65;
    if ((*p_10))
    {
        int16_t l_428 = 0x2F10;
        int8_t *l_437 = (void*)0;
        int32_t l_438 = 0xBF432456;
        int8_t *l_439 = &g_150;
        p_10 = func_23(p_9, (((((*g_362) < p_13) || (~p_12)) == (safe_sub_func_uint8_t_u_u(l_428, g_103))) <= (safe_add_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u((safe_mod_func_int16_t_s_s(((g_145 & g_103) == (l_440 = ((((safe_sub_func_int8_t_s_s(((*l_439) = (l_438 = (g_111 < 0x26))), g_109)) < p_12) & l_428) != (*p_10)))), p_13)), 15)), 0x69))), (*p_10));
        ((void) sizeof ((p_10 == &g_65) ? 1 : 0), __extension__ ({ if (p_10 == &g_65) ; else __assert_fail ("p_10 == &g_65", "/tmp/tmp9ydwqowq.c", 236, __extension__ __PRETTY_FUNCTION__); }));
    }
    else
    {
        int32_t * const *l_444 = &g_282;
        int32_t * const **l_443 = &l_444;
        uint8_t *l_454 = &g_109;
        uint8_t *l_455 = &g_456;
        int32_t l_457 = 0;
        l_458 = (safe_add_func_uint32_t_u_u((l_443 != (void*)0), (~(((*l_455) = ((*l_454) = (((p_12 | p_9) == (safe_lshift_func_uint16_t_u_s((safe_sub_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_u(p_9, g_109)) ^ g_6), p_13)), (safe_sub_func_uint8_t_u_u(l_440, 255U))))) > g_408))) == l_457))));
    }
    ((void) sizeof ((p_10 == &g_22 || p_10 == &g_111 || p_10 == &g_65) ? 1 : 0), __extension__ ({ if (p_10 == &g_22 || p_10 == &g_111 || p_10 == &g_65) ; else __assert_fail ("p_10 == &g_22 || p_10 == &g_111 || p_10 == &g_65", "/tmp/tmp9ydwqowq.c", 248, __extension__ __PRETTY_FUNCTION__); }));
    if (((*g_324) == (safe_sub_func_int32_t_s_s((*p_10), ((7 & (g_99 & 0x78)) ^ (((*l_461) = (*p_10)) || (*l_461)))))))
    {
        int16_t ***l_462 = &g_361;
        int16_t ****l_463 = &l_462;
        (*l_463) = l_462;
    }
    else
    {
        int32_t *l_464 = &g_22;
        int8_t *l_503 = &g_150;
        uint32_t *l_507 = &g_508;
        int32_t l_509 = 0x8F70EA9C;
        l_464 = &p_12;
        ((void) sizeof ((l_464 == &p_12) ? 1 : 0), __extension__ ({ if (l_464 == &p_12) ; else __assert_fail ("l_464 == &p_12", "/tmp/tmp9ydwqowq.c", 263, __extension__ __PRETTY_FUNCTION__); }));
        if (((-1) != (g_22 && 0)))
        {
            int8_t *l_470 = &g_150;
            int32_t l_478 = 0x89D6F418;
            (*l_461) = ((safe_rshift_func_int8_t_s_s(0xA9, 4)) >= ((((safe_unary_minus_func_int16_t_s((((*l_470) = (p_13 | 2)) < (l_471 == (void*)0)))) > l_472) >= 1U) | (+((safe_mul_func_int8_t_s_s((((((1U < (safe_lshift_func_uint8_t_u_u(p_9, 5))) == 0x2D) != 0xF818FFB8) ^ l_478) <= g_109), g_30)) != 0xF2F0760A))));
        }
        else
        {
            int16_t ***l_494 = &g_361;
            int16_t ****l_493 = &l_494;
            int32_t l_499 = 0x28C494CC;
            uint32_t *l_500 = &g_145;
            (*p_10) = (((safe_rshift_func_uint16_t_u_s(0U, 11)) < (0x2B & (safe_add_func_uint32_t_u_u(((*l_500) = ((safe_add_func_uint8_t_u_u(((0 >= ((safe_add_func_int8_t_s_s(g_99, 0x2E)) <= (+0x5FF1))) >= (safe_mod_func_uint32_t_u_u(((((safe_lshift_func_int16_t_s_u((!(((*l_493) = &g_361) != &g_361)), 7)) && (safe_mul_func_int8_t_s_s((safe_sub_func_int16_t_s_s((**g_361), p_13)), 0x78))) & l_499) < p_12), 0x84613669))), 1)) == p_12)), p_12)))) && p_12);
            return &g_22;
        }
        l_509 = ((*l_461) >= (((((*l_464) = (*l_464)) || ((safe_rshift_func_int16_t_s_s((((**g_323) <= (((*p_10) = (((((g_504 = l_503) == (void*)0) == (((*l_507) = ((p_13 > ((-1) | (*l_464))) != (safe_mod_func_int32_t_s_s((*l_461), (*p_10))))) & (*l_464))) == 0x586226D4) == (*l_464))) == 0x591B0979)) & (*l_464)), (**g_361))) ^ (*l_461))) == g_408) || (*l_461)));
        l_510 = &l_471;
    }
    return l_513;
}
static int32_t * func_14(int32_t * p_15, int32_t p_16, int32_t * p_17)
{
    const uint32_t l_283 = 9U;
    int32_t **l_284 = &g_282;
    uint32_t *l_287 = (void*)0;
    int32_t *l_423 = &g_111;
    (*l_284) = func_18(l_283);
    ((void) sizeof ((g_282 == &g_22) ? 1 : 0), __extension__ ({ if (g_282 == &g_22) ; else __assert_fail ("g_282 == &g_22", "/tmp/tmp9ydwqowq.c", 303, __extension__ __PRETTY_FUNCTION__); }));
    if ((safe_lshift_func_uint16_t_u_u(((void*)0 == l_287), 1)))
    {
        int32_t *l_288 = &g_22;
        return l_288;
    }
    else
    {
        int16_t l_289 = 0x0633;
        int8_t *l_331 = &g_150;
        int16_t *l_337 = &g_153;
        int16_t l_338 = 1;
        uint32_t **l_355 = &l_287;
        uint32_t ***l_354 = &l_355;
        uint32_t ****l_353 = &l_354;
        uint16_t *l_374 = (void*)0;
        uint16_t **l_373 = &l_374;
        int16_t ** const *l_393 = &g_361;
        int32_t ** const *l_419 = &l_284;
        int32_t ** const **l_418 = &l_419;
        int32_t ** const ***l_420 = &l_418;
        uint16_t *l_421 = &g_103;
        int16_t * const l_422 = &g_408;
        if (((l_289 <= ((-1) || ((void*)0 == &g_109))) != g_154))
        {
            const int32_t *l_291 = &g_30;
            const int32_t **l_290 = &l_291;
            uint16_t *l_302 = &g_99;
            uint16_t *l_305 = (void*)0;
            uint16_t *l_306 = &g_148;
            uint16_t l_313 = 0U;
            int16_t *l_314 = &l_289;
            int32_t *l_315 = &g_48;
            (*l_290) = &g_30;
            (*l_315) = (safe_sub_func_uint32_t_u_u((safe_add_func_int16_t_s_s((((safe_lshift_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(0xF720A13F, ((*p_15) = ((**l_290) == ((*l_302) = ((void*)0 == &g_150)))))), ((*l_314) = (safe_add_func_uint8_t_u_u((0xE899 == ((*l_306) = 65528U)), (((*p_17) = (safe_add_func_int8_t_s_s(((((safe_mod_func_int16_t_s_s(0, (safe_lshift_func_uint16_t_u_s((1U && 9), 2)))) & l_313) != 255U) < p_16), 254U))) <= 4)))))), 5)) || g_6) || p_16), p_16)), 0x93B49664));
        }
        else
        {
            uint32_t l_318 = 0x9BF21D4A;
            int8_t *l_321 = &g_150;
            (*p_17) = ((((safe_rshift_func_int8_t_s_u(0xD2, l_318)) > ((safe_mod_func_uint32_t_u_u(4294967294U, 4294967292U)) == ((*l_321) = (-1)))) <= ((void*)0 == &p_16)) != 0);
            (*g_282) = (+4U);
            return (*l_284);
        }
        if (((g_323 != &l_287) || ((safe_sub_func_uint32_t_u_u((((+(p_16 || g_6)) > (g_240 | ((1U | (safe_add_func_uint32_t_u_u((~((*l_331) = g_103)), (((((g_145 = (((safe_mod_func_int8_t_s_s(l_289, (safe_lshift_func_int16_t_s_s(((*l_337) = (~1)), 8)))) >= p_16) <= (*p_15))) < (*g_282)) >= 0xE2) & 0x32ECD07D) | 0xFA01DA8F)))) & (**l_284)))) & g_22), l_338)) == 0x7BDA)))
        {
            uint32_t *l_345 = &g_145;
            int16_t l_350 = 4;
            int16_t l_352 = 0;
            (*l_284) = &p_16;
            ((void) sizeof ((g_282 == &p_16) ? 1 : 0), __extension__ ({ if (g_282 == &p_16) ; else __assert_fail ("g_282 == &p_16", "/tmp/tmp9ydwqowq.c", 358, __extension__ __PRETTY_FUNCTION__); }));
            (*p_15) = (((5 <= ((safe_mul_func_int16_t_s_s(((*l_337) = (p_16 | (safe_sub_func_int8_t_s_s(((safe_add_func_uint32_t_u_u(((((*l_345) = 0x0AE0B852) && (safe_rshift_func_int8_t_s_u(((((1 >= (((((0x31 || (**l_284)) & (safe_sub_func_int16_t_s_s(l_350, p_16))) <= (+(l_350 & g_148))) ^ l_338) != g_30)) <= 0x13) | p_16) || (**l_284)), 2))) ^ p_16), l_350)) | p_16), (**l_284))))), p_16)) >= g_111)) | (**l_284)) > l_352);
        }
        else
        {
            uint32_t *****l_356 = &l_353;
            uint32_t ****l_358 = &l_354;
            uint32_t *****l_357 = &l_358;
            int32_t l_366 = 0x632126A5;
            uint32_t l_377 = 0xCEB42ADA;
            const uint8_t *l_395 = &g_109;
            int32_t l_407 = 0x15BDB47C;
            (*l_284) = func_18(g_145);
            (*l_357) = ((*l_356) = l_353);
            for (g_109 = 0; (g_109 <= 38); g_109 = safe_add_func_int8_t_s_s(g_109, 4))
            {
                int16_t ***l_363 = &g_361;
                int32_t l_369 = 0x0CB62A19;
                int32_t l_372 = 1;
                (*l_363) = g_361;
                (*l_284) = func_18((safe_sub_func_uint32_t_u_u(((((l_366 < (l_369 = (safe_rshift_func_int8_t_s_s(p_16, 0)))) <= ((**l_356) == (void*)0)) >= ((safe_mul_func_uint16_t_u_u(l_372, ((void*)0 != l_373))) > (safe_add_func_int32_t_s_s(0x7552E8AB, 0x66BC57D9)))) >= (*g_324)), l_377)));
            }
            for (g_65 = (-17); (g_65 != 7); g_65 = safe_add_func_uint32_t_u_u(g_65, 8))
            {
                uint32_t l_384 = 3U;
                int32_t *l_413 = &g_22;
                int32_t ***l_414 = (void*)0;
                int32_t ***l_415 = &l_284;
                for (g_83 = 15; (g_83 < (-2)); g_83 = safe_sub_func_int32_t_s_s(g_83, 8))
                {
                    uint16_t *l_389 = &g_148;
                    const int32_t l_390 = 0;
                    if ((safe_sub_func_int8_t_s_s((((void*)0 == g_70) || ((l_384 = (**l_284)) && 0x4A16)), ((*l_331) = ((**l_284) == (p_16 >= (safe_add_func_uint16_t_u_u(((0xB6004B46 & ((0xF01ADFF8 ^ (safe_mod_func_int16_t_s_s((((((g_99 = ((*l_389) = 0xD68E)) <= 0xCBBC) && (*g_362)) ^ p_16) != (*p_17)), 0x7B79))) == l_390)) < (*g_282)), l_338))))))))
                    {
                        uint8_t *l_394 = &g_109;
                        int32_t *l_409 = (void*)0;
                        int32_t *l_410 = (void*)0;
                        int32_t *l_411 = &g_48;
                        (*g_282) = ((((*l_337) = (safe_add_func_int16_t_s_s((p_16 & ((void*)0 != l_393)), (g_6 ^ g_145)))) | 65532U) ^ g_150);
                        (*l_411) = ((l_394 == l_395) ^ (!((&g_324 == &g_324) >= (((safe_sub_func_uint32_t_u_u((safe_mul_func_int16_t_s_s(p_16, ((((*g_282) = ((g_65 >= 3U) >= 0xAD83)) ^ (safe_sub_func_uint8_t_u_u(((g_408 = (g_150 = (((safe_mul_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((l_384 >= (*g_324)), (**g_361))), p_16)) | l_384) == l_407))) & 0x0A), l_384))) | 0xC5))), l_366)) <= p_16) | (*p_17)))));
                    }
                    else
                    {
                        (*l_284) = &g_111;
                        ((void) sizeof ((g_282 == &g_111) ? 1 : 0), __extension__ ({ if (g_282 == &g_111) ; else __assert_fail ("g_282 == &g_111", "/tmp/tmp9ydwqowq.c", 403, __extension__ __PRETTY_FUNCTION__); }));
                        (*l_284) = (void*)0;
                        ((void) sizeof ((g_282 == 0) ? 1 : 0), __extension__ ({ if (g_282 == 0) ; else __assert_fail ("g_282 == 0", "/tmp/tmp9ydwqowq.c", 406, __extension__ __PRETTY_FUNCTION__); }));
                        (*l_284) = func_18((!p_16));
                        ((void) sizeof ((g_282 == &g_22) ? 1 : 0), __extension__ ({ if (g_282 == &g_22) ; else __assert_fail ("g_282 == &g_22", "/tmp/tmp9ydwqowq.c", 409, __extension__ __PRETTY_FUNCTION__); }));
                        (*l_284) = &l_366;
                        ((void) sizeof ((g_282 == &l_366) ? 1 : 0), __extension__ ({ if (g_282 == &l_366) ; else __assert_fail ("g_282 == &l_366", "/tmp/tmp9ydwqowq.c", 412, __extension__ __PRETTY_FUNCTION__); }));
                    }
                    ((void) sizeof ((g_282 == &l_366 || g_282 == &g_22) ? 1 : 0), __extension__ ({ if (g_282 == &l_366 || g_282 == &g_22) ; else __assert_fail ("g_282 == &l_366 || g_282 == &g_22", "/tmp/tmp9ydwqowq.c", 415, __extension__ __PRETTY_FUNCTION__); }));
                    return l_413;
                }
                (*l_415) = &g_282;
            }
        }
        ((void) sizeof ((g_282 == &g_22 || g_282 == &p_16) ? 1 : 0), __extension__ ({ if (g_282 == &g_22 || g_282 == &p_16) ; else __assert_fail ("g_282 == &g_22 || g_282 == &p_16", "/tmp/tmp9ydwqowq.c", 425, __extension__ __PRETTY_FUNCTION__); }));
        (*g_282) = (((***l_393) = 0x8108) && ((*l_421) = ((safe_rshift_func_int8_t_s_s((**l_284), 6)) != ((*g_362) && (&g_70 != ((*l_420) = l_418))))));
        (*p_17) = ((**l_393) == l_422);
    }
    ((void) sizeof ((g_282 == &g_22 || g_282 == &p_16) ? 1 : 0), __extension__ ({ if (g_282 == &g_22 || g_282 == &p_16) ; else __assert_fail ("g_282 == &g_22 || g_282 == &p_16", "/tmp/tmp9ydwqowq.c", 430, __extension__ __PRETTY_FUNCTION__); }));
    return l_423;
}
static int32_t * func_18(const int16_t p_19)
{
    int32_t *l_21 = &g_22;
    (*l_21) = (g_6 && g_6);
    return l_21;
}
static int32_t * func_23(uint32_t p_24, int32_t p_25, int32_t p_26)
{
    const int32_t *l_29 = &g_30;
    uint32_t l_35 = 5U;
    uint8_t *l_172 = (void*)0;
    uint8_t *l_173 = &g_109;
    int32_t *l_174 = (void*)0;
    int32_t *l_175 = &g_48;
    int8_t l_180 = 0xEB;
    int32_t l_203 = 0x8602F127;
    const int8_t *l_239 = &g_240;
    const int32_t **l_278 = (void*)0;
    const int32_t **l_279 = &l_29;
    const int32_t *l_281 = &g_111;
    const int32_t **l_280 = &l_281;
    if (((*l_175) = (safe_lshift_func_uint8_t_u_u(((&p_26 == l_29) ^ ((void*)0 != l_29)), (safe_lshift_func_int16_t_s_u((((*l_173) = (((((safe_mod_func_uint16_t_u_u(0x8407, l_35)) != func_36((func_42(g_30, ((safe_sub_func_int8_t_s_s(g_6, p_26)) | 1)) | g_30), p_25, g_30, (*l_29), p_24)) | 0xE8FF) == (*l_29)) | 0xA5B9)) == p_24), p_26))))))
    {
        int32_t **l_186 = (void*)0;
        uint16_t *l_187 = &g_103;
        int8_t *l_188 = &g_150;
        int8_t *l_189 = &l_180;
        int16_t *l_190 = &g_153;
        int32_t **l_191 = &l_174;
        int32_t **l_192 = &l_175;
        uint32_t *l_194 = &g_145;
        uint32_t **l_193 = &l_194;
        uint32_t ***l_195 = (void*)0;
        uint32_t ***l_196 = &l_193;
        uint32_t **l_198 = &l_194;
        uint32_t ***l_197 = &l_198;
        uint32_t **l_200 = &l_194;
        uint32_t ***l_199 = &l_200;
        uint16_t **l_204 = (void*)0;
        uint16_t **l_205 = &l_187;
        int16_t *l_209 = &g_83;
        (*l_192) = ((*l_191) = func_53(p_25, (g_83 = ((*l_190) = (safe_sub_func_int8_t_s_s(((*l_189) = ((*l_188) = ((1U >= (&p_25 != l_29)) <= ((*l_187) = (((0x2F3E != (safe_sub_func_int32_t_s_s(0, p_26))) | l_180) == (safe_unary_minus_func_uint8_t_u((safe_mul_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((l_186 != (void*)0), p_25)), g_145))))))))), 0U))))));
        ((void) sizeof ((l_174 == 0 || l_174 == &g_65) ? 1 : 0), __extension__ ({ if (l_174 == 0 || l_174 == &g_65) ; else __assert_fail ("l_174 == 0 || l_174 == &g_65", "/tmp/tmp9ydwqowq.c", 495, __extension__ __PRETTY_FUNCTION__); }));
        ((void) sizeof ((l_175 == 0 || l_175 == &g_65) ? 1 : 0), __extension__ ({ if (l_175 == 0 || l_175 == &g_65) ; else __assert_fail ("l_175 == 0 || l_175 == &g_65", "/tmp/tmp9ydwqowq.c", 496, __extension__ __PRETTY_FUNCTION__); }));
        (*l_199) = ((*l_197) = ((*l_196) = l_193));
        l_203 = (safe_sub_func_uint32_t_u_u(l_203, ((-9) >= ((((((*l_205) = l_190) == (void*)0) != ((*l_209) = (safe_unary_minus_func_int32_t_s(((safe_add_func_int16_t_s_s(p_24, p_25)) >= (g_111 != ((*l_190) = p_26))))))) || g_103) & p_26))));
        ((void) sizeof ((l_187 == &g_153) ? 1 : 0), __extension__ ({ if (l_187 == &g_153) ; else __assert_fail ("l_187 == &g_153", "/tmp/tmp9ydwqowq.c", 500, __extension__ __PRETTY_FUNCTION__); }));
    }
    else
    {
        int32_t *l_210 = &g_65;
        int32_t **l_211 = &l_174;
        int16_t l_268 = 0x9DC3;
        (*l_211) = l_210;
        ((void) sizeof ((l_174 == &g_65) ? 1 : 0), __extension__ ({ if (l_174 == &g_65) ; else __assert_fail ("l_174 == &g_65", "/tmp/tmp9ydwqowq.c", 509, __extension__ __PRETTY_FUNCTION__); }));
        for (g_99 = 0; (g_99 >= 49); ++g_99)
        {
            uint8_t l_223 = 0x66;
            int32_t ** const *l_227 = (void*)0;
            int32_t ** const **l_226 = &l_227;
            int32_t *l_241 = &g_48;
            uint32_t *l_248 = &g_145;
            uint32_t * const *l_247 = &l_248;
            uint32_t * const **l_246 = &l_247;
            const int32_t l_249 = 0x7F069B64;
            (*l_174) = (((((*l_175) = (safe_add_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s((safe_add_func_int32_t_s_s((safe_unary_minus_func_int16_t_s((safe_unary_minus_func_int32_t_s((-5))))), (~l_223))), 8)), g_148))) && ((*l_210) || (safe_mod_func_uint32_t_u_u((g_70 == ((*l_226) = g_70)), p_26)))) < 0U) ^ (safe_mod_func_int8_t_s_s(g_99, g_153)));
            p_25 = (safe_rshift_func_int16_t_s_s((+(safe_mod_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(0x9144, ((l_239 = &l_180) == &g_240))), p_25)), (((7 != 0x2175) | ((l_241 = &p_25) == (void*)0)) | (safe_add_func_int32_t_s_s(((((safe_lshift_func_uint8_t_u_u(((((void*)0 == l_246) > (*l_175)) ^ p_25), 3)) > 0) & 2U) <= g_30), l_249)))))), g_150));
            ((void) sizeof ((l_239 == &l_180) ? 1 : 0), __extension__ ({ if (l_239 == &l_180) ; else __assert_fail ("l_239 == &l_180", "/tmp/tmp9ydwqowq.c", 523, __extension__ __PRETTY_FUNCTION__); }));
            ((void) sizeof ((l_241 == &p_25) ? 1 : 0), __extension__ ({ if (l_241 == &p_25) ; else __assert_fail ("l_241 == &p_25", "/tmp/tmp9ydwqowq.c", 524, __extension__ __PRETTY_FUNCTION__); }));
            (*l_174) = (((*l_175) = p_26) < p_26);
        }
        ((void) sizeof ((l_239 == &l_180 || l_239 == &g_240) ? 1 : 0), __extension__ ({ if (l_239 == &l_180 || l_239 == &g_240) ; else __assert_fail ("l_239 == &l_180 || l_239 == &g_240", "/tmp/tmp9ydwqowq.c", 528, __extension__ __PRETTY_FUNCTION__); }));
        for (g_150 = 0; (g_150 < 14); g_150++)
        {
            uint8_t l_263 = 0xBD;
            for (p_26 = 0; (p_26 < 6); p_26 = safe_add_func_uint8_t_u_u(p_26, 3))
            {
                int8_t *l_256 = &l_180;
                int16_t *l_265 = &g_153;
                (*l_210) = (safe_mul_func_int8_t_s_s(((*l_256) = (-9)), ((safe_rshift_func_int16_t_s_u((((safe_rshift_func_uint8_t_u_u((((0x68D6 ^ (0x36 > (safe_mod_func_uint16_t_u_u((l_263 = (&g_240 == (void*)0)), ((*l_265) = (~((*l_175) = 0x033E3335))))))) != ((safe_rshift_func_uint8_t_u_u(l_268, p_24)) < (safe_rshift_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((((*l_211) = &p_25) == &l_203), g_6)), (*l_29))))) >= (*l_29)), 3)) ^ 0x5315) != 0x4D10AE1D), 10)) ^ p_26)));
                ((void) sizeof ((l_174 == &p_25) ? 1 : 0), __extension__ ({ if (l_174 == &p_25) ; else __assert_fail ("l_174 == &p_25", "/tmp/tmp9ydwqowq.c", 538, __extension__ __PRETTY_FUNCTION__); }));
                if (g_6)
                    continue;
            }
            ((void) sizeof ((l_174 == &p_25 || l_174 == &g_65) ? 1 : 0), __extension__ ({ if (l_174 == &p_25 || l_174 == &g_65) ; else __assert_fail ("l_174 == &p_25 || l_174 == &g_65", "/tmp/tmp9ydwqowq.c", 543, __extension__ __PRETTY_FUNCTION__); }));
            l_210 = ((*l_211) = &g_65);
            ((void) sizeof ((l_174 == &g_65) ? 1 : 0), __extension__ ({ if (l_174 == &g_65) ; else __assert_fail ("l_174 == &g_65", "/tmp/tmp9ydwqowq.c", 546, __extension__ __PRETTY_FUNCTION__); }));
        }
    }
    ((void) sizeof ((l_174 == 0 || l_174 == &g_65) ? 1 : 0), __extension__ ({ if (l_174 == 0 || l_174 == &g_65) ; else __assert_fail ("l_174 == 0 || l_174 == &g_65", "/tmp/tmp9ydwqowq.c", 550, __extension__ __PRETTY_FUNCTION__); }));
    ((void) sizeof ((l_175 == &g_48 || l_175 == 0 || l_175 == &g_65) ? 1 : 0), __extension__ ({ if (l_175 == &g_48 || l_175 == 0 || l_175 == &g_65) ; else __assert_fail ("l_175 == &g_48 || l_175 == 0 || l_175 == &g_65", "/tmp/tmp9ydwqowq.c", 551, __extension__ __PRETTY_FUNCTION__); }));
    ((void) sizeof ((l_239 == &l_180 || l_239 == &g_240) ? 1 : 0), __extension__ ({ if (l_239 == &l_180 || l_239 == &g_240) ; else __assert_fail ("l_239 == &l_180 || l_239 == &g_240", "/tmp/tmp9ydwqowq.c", 552, __extension__ __PRETTY_FUNCTION__); }));
    for (g_111 = 0; (g_111 > 7); g_111 = safe_add_func_uint16_t_u_u(g_111, 9))
    {
        int32_t * const *l_275 = (void*)0;
        int32_t * const **l_276 = (void*)0;
        int32_t * const **l_277 = &l_275;
        (*l_277) = l_275;
    }
    (*l_280) = ((*l_279) = &g_48);
    ((void) sizeof ((l_29 == &g_48) ? 1 : 0), __extension__ ({ if (l_29 == &g_48) ; else __assert_fail ("l_29 == &g_48", "/tmp/tmp9ydwqowq.c", 562, __extension__ __PRETTY_FUNCTION__); }));
    ((void) sizeof ((l_281 == &g_48) ? 1 : 0), __extension__ ({ if (l_281 == &g_48) ; else __assert_fail ("l_281 == &g_48", "/tmp/tmp9ydwqowq.c", 563, __extension__ __PRETTY_FUNCTION__); }));
    g_282 = &p_26;
    ((void) sizeof ((g_282 == &p_26) ? 1 : 0), __extension__ ({ if (g_282 == &p_26) ; else __assert_fail ("g_282 == &p_26", "/tmp/tmp9ydwqowq.c", 566, __extension__ __PRETTY_FUNCTION__); }));
    return &g_65;
}
static int32_t func_36(int32_t p_37, const int32_t p_38, const int16_t p_39, int32_t p_40, int32_t p_41)
{
    int32_t *l_47 = &g_48;
    int32_t *l_110 = &g_111;
    int8_t l_171 = 4;
    (*l_47) = g_6;
    (*l_47) = p_41;
    if ((func_49((*l_47), (&g_30 == &g_48), func_53(p_38, ((void*)0 != &g_30))) ^ (((*l_110) = 0) | p_37)))
    {
        uint16_t *l_113 = &g_103;
        uint16_t **l_112 = &l_113;
        (*l_47) = (p_37 <= g_6);
        (*l_47) = (&g_6 == ((*l_112) = &g_103));
    }
    else
    {
        uint16_t l_125 = 65526U;
        uint32_t *l_144 = &g_145;
        int16_t *l_146 = (void*)0;
        int16_t *l_147 = &g_83;
        int8_t *l_149 = &g_150;
        int16_t *l_151 = (void*)0;
        int16_t *l_152 = &g_153;
        int32_t l_155 = 0x6A8AB26F;
        uint8_t *l_156 = (void*)0;
        uint8_t *l_157 = &g_109;
        const int32_t **l_168 = (void*)0;
        const int32_t *l_170 = &g_30;
        const int32_t **l_169 = &l_170;
        (*l_110) = (((~(0x9A < (((safe_sub_func_int8_t_s_s((-1), ((safe_mod_func_int16_t_s_s(((0x02 > (safe_rshift_func_int16_t_s_u((l_155 = (safe_add_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(l_125, ((((g_154 = ((*l_152) = ((((safe_add_func_uint8_t_u_u(((safe_add_func_uint8_t_u_u(0x6A, (safe_rshift_func_uint16_t_u_s((safe_mul_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u((l_125 >= (safe_mul_func_uint8_t_u_u(((-1) || (safe_lshift_func_int8_t_s_s(((*l_149) = ((*l_110) || (g_148 = ((*l_147) = (safe_mul_func_int16_t_s_s((((*l_144) = ((g_30 != 1) | p_38)) || 0x961BCE71), 0)))))), 2))), p_39))), g_99)) >= g_30), p_38)), g_103)))) >= 0x7F51BCBD), g_103)) == 254U) && 0xB93D) != 4U))) | 0x6129) | 0xEB00D6BF) >= 0xF1E5))), p_39))), 3))) || p_37), g_99)) != p_38))) ^ l_125) != 0x6630802E))) >= p_38) ^ 1U);
        (*l_47) = (l_125 <= ((void*)0 != l_149));
        (*l_47) = ((((*l_157) = l_155) < (safe_mul_func_int16_t_s_s((((((safe_sub_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_u(l_125, p_37)) >= (((1 || ((*l_110) = (safe_rshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_s((((*l_169) = func_53(l_125, g_145)) != (void*)0), g_99)), 6)))) == l_171) & 0x16371A01)), g_30)) ^ 0xFE) <= g_153) <= 0xA3) > 0x1BCAB2B0), 0xC10E))) ^ p_41);
        ((void) sizeof ((l_170 == &g_30 || l_170 == 0 || l_170 == &g_65) ? 1 : 0), __extension__ ({ if (l_170 == &g_30 || l_170 == 0 || l_170 == &g_65) ; else __assert_fail ("l_170 == &g_30 || l_170 == 0 || l_170 == &g_65", "/tmp/tmp9ydwqowq.c", 612, __extension__ __PRETTY_FUNCTION__); }));
        (*l_47) = p_39;
    }
    return (*l_47);
}
static uint32_t func_42(uint16_t p_43, int32_t p_44)
{
    return g_30;
}
static int8_t func_49(uint8_t p_50, const uint32_t p_51, int32_t * p_52)
{
    int32_t l_95 = 0x310705E7;
    uint16_t *l_98 = &g_99;
    int32_t **l_101 = (void*)0;
    int32_t ***l_100 = &l_101;
    uint16_t *l_102 = &g_103;
    int32_t *l_104 = (void*)0;
    int32_t *l_105 = &g_48;
    uint8_t *l_108 = &g_109;
    g_65 = (p_50 || (l_95 <= (safe_rshift_func_uint8_t_u_u((((*l_105) = (((*l_98) = 1U) & ((*l_102) = (l_100 == g_70)))) ^ ((safe_rshift_func_uint16_t_u_s(((0xF474 ^ 0x2BB1) == (0x30 && ((*l_108) = g_65))), 8)) <= g_83)), p_50))));
    return p_50;
}
static int32_t * func_53(uint32_t p_54, const int16_t p_55)
{
    int32_t *l_56 = &g_48;
    int32_t **l_57 = &l_56;
    int32_t ** const l_58 = (void*)0;
    int32_t l_66 = 0x1B2D863E;
    uint32_t l_85 = 4294967290U;
    int32_t *l_94 = (void*)0;
    (*l_57) = l_56;
    if (((void*)0 == l_58))
    {
        uint16_t l_63 = 0U;
        int32_t *l_64 = &g_65;
        for (p_54 = 0; (p_54 < 38); p_54 = safe_add_func_uint32_t_u_u(p_54, 8))
        {
            int32_t *l_61 = &g_48;
            int32_t ***l_62 = &l_57;
            (*l_57) = l_61;
            (*l_62) = &l_56;
        }
        (*l_64) = (l_63 = g_48);
    }
    else
    {
        int32_t *l_67 = &g_65;
        int32_t ***l_73 = &l_57;
        int16_t *l_78 = (void*)0;
        int16_t *l_79 = (void*)0;
        int16_t *l_80 = (void*)0;
        int16_t *l_81 = (void*)0;
        int16_t *l_82 = &g_83;
        const uint8_t l_84 = 0xE6;
        (*l_67) = (l_66 = (*l_56));
        if ((((((safe_mod_func_uint16_t_u_u((((*l_67) = (g_70 != &l_57)) || (((safe_mod_func_int32_t_s_s(((void*)0 != l_73), (safe_mul_func_int8_t_s_s((**l_57), p_54)))) >= ((g_48 < (safe_rshift_func_int16_t_s_s(((*l_82) = g_30), p_55))) < g_6)) <= g_6)), g_48)) || l_84) != g_48) ^ l_85) | g_6))
        {
            int16_t **l_89 = &l_80;
            int32_t l_90 = 6;
            l_90 = (((*l_82) = (-1)) ^ (safe_mul_func_uint16_t_u_u((~(((*l_89) = l_80) != (void*)0)), g_6)));
        }
        else
        {
            for (p_54 = 17; (p_54 > 10); --p_54)
            {
                int32_t *l_93 = &g_65;
                return l_93;
            }
        }
    }
    return l_94;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_6;
    csmith_sink_ = g_22;
    csmith_sink_ = g_30;
    csmith_sink_ = g_48;
    csmith_sink_ = g_65;
    csmith_sink_ = g_83;
    csmith_sink_ = g_99;
    csmith_sink_ = g_103;
    csmith_sink_ = g_109;
    csmith_sink_ = g_111;
    csmith_sink_ = g_145;
    csmith_sink_ = g_148;
    csmith_sink_ = g_150;
    csmith_sink_ = g_153;
    csmith_sink_ = g_154;
    csmith_sink_ = g_240;
    csmith_sink_ = g_408;
    csmith_sink_ = g_456;
    csmith_sink_ = g_508;
    csmith_sink_ = g_561;
    csmith_sink_ = g_606;
    platform_main_end(0,0);
    return 0;
}
