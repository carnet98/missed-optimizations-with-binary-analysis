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
static int64_t
(safe_unary_minus_func_int64_t_s)(int64_t si )
{
  return
    (si==(-9223372036854775807L -1)) ?
    ((si)) :
    -si;
}
static int64_t
(safe_add_func_int64_t_s_s)(int64_t si1, int64_t si2 )
{
  return
    (((si1>0) && (si2>0) && (si1 > ((9223372036854775807L)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-9223372036854775807L -1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int64_t
(safe_sub_func_int64_t_s_s)(int64_t si1, int64_t si2 )
{
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(9223372036854775807L))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int64_t
(safe_mul_func_int64_t_s_s)(int64_t si1, int64_t si2 )
{
  return
    (((si1 > 0) && (si2 > 0) && (si1 > ((9223372036854775807L) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-9223372036854775807L -1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-9223372036854775807L -1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((9223372036854775807L) / si1)))) ?
    ((si1)) :
    si1 * si2;
}
static int64_t
(safe_mod_func_int64_t_s_s)(int64_t si1, int64_t si2 )
{
  return
    ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int64_t
(safe_div_func_int64_t_s_s)(int64_t si1, int64_t si2 )
{
  return
    ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int64_t
(safe_lshift_func_int64_t_s_s)(int64_t left, int right )
{
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((9223372036854775807L) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int64_t
(safe_lshift_func_int64_t_s_u)(int64_t left, unsigned int right )
{
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((9223372036854775807L) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int64_t
(safe_rshift_func_int64_t_s_s)(int64_t left, int right )
{
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int64_t
(safe_rshift_func_int64_t_s_u)(int64_t left, unsigned int right )
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
static uint64_t
(safe_unary_minus_func_uint64_t_u)(uint64_t ui )
{
  return -ui;
}
static uint64_t
(safe_add_func_uint64_t_u_u)(uint64_t ui1, uint64_t ui2 )
{
  return ui1 + ui2;
}
static uint64_t
(safe_sub_func_uint64_t_u_u)(uint64_t ui1, uint64_t ui2 )
{
  return ui1 - ui2;
}
static uint64_t
(safe_mul_func_uint64_t_u_u)(uint64_t ui1, uint64_t ui2 )
{
  return ((unsigned long long)ui1) * ((unsigned long long)ui2);
}
static uint64_t
(safe_mod_func_uint64_t_u_u)(uint64_t ui1, uint64_t ui2 )
{
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint64_t
(safe_div_func_uint64_t_u_u)(uint64_t ui1, uint64_t ui2 )
{
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint64_t
(safe_lshift_func_uint64_t_u_s)(uint64_t left, int right )
{
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((18446744073709551615UL) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint64_t
(safe_lshift_func_uint64_t_u_u)(uint64_t left, unsigned int right )
{
  return
    ((((unsigned int)right) >= 32) || (left > ((18446744073709551615UL) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint64_t
(safe_rshift_func_uint64_t_u_s)(uint64_t left, int right )
{
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint64_t
(safe_rshift_func_uint64_t_u_u)(uint64_t left, unsigned int right )
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
crc32_8bytes (uint64_t val)
{
 crc32_byte ((val>>0) & 0xff);
 crc32_byte ((val>>8) & 0xff);
 crc32_byte ((val>>16) & 0xff);
 crc32_byte ((val>>24) & 0xff);
 crc32_byte ((val>>32) & 0xff);
 crc32_byte ((val>>40) & 0xff);
 crc32_byte ((val>>48) & 0xff);
 crc32_byte ((val>>56) & 0xff);
}
static void
transparent_crc (uint64_t val, char* vname, int flag)
{
 crc32_8bytes(val);
 if (flag) {
    printf("...checksum after hashing %s : %lX\n", vname, crc32_context ^ 0xFFFFFFFFUL);
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
static int32_t g_8 = (-3L);
static int32_t g_12 = 1L;
static int32_t **g_140 = (void*)0;
static int8_t g_141 = (-9L);
static int32_t g_161 = (-1L);
static uint32_t g_176 = 1UL;
static uint32_t g_179 = 0x58C38B95L;
static int32_t g_181 = 0xFB40517BL;
static int32_t *** const *g_245 = (void*)0;
static int32_t *** const **g_244 = &g_245;
static int32_t *g_316 = (void*)0;
static int8_t g_353 = (-4L);
static int32_t ****g_405 = (void*)0;
static int32_t *****g_404 = &g_405;
static int32_t g_516 = 0x827ED631L;
static int32_t g_545 = 1L;
static int16_t g_685 = 0x8ECBL;
static uint8_t func_1(void);
static int32_t * func_2(int32_t * p_3);
static int32_t * func_4(int16_t p_5, int8_t p_6, int32_t * p_7);
static int8_t func_9(int32_t * p_10);
static uint32_t func_22(const uint16_t p_23, int32_t p_24, int16_t p_25, int32_t p_26);
static const uint16_t func_27(uint16_t p_28, uint8_t p_29);
static const uint32_t func_43(int32_t * p_44, int32_t p_45);
static int32_t * func_46(int16_t p_47, int32_t p_48);
static int16_t func_49(int32_t * p_50, const uint16_t p_51, int16_t p_52, uint32_t p_53);
static int8_t func_57(int32_t p_58, int8_t p_59, int8_t p_60, uint8_t p_61);
static uint8_t func_1(void)
{
    int32_t *l_11 = (void*)0;
    int32_t **l_821 = &l_11;
    (*l_821) = func_2(func_4(g_8, func_9(l_11), l_11));
    return g_161;
}
static int32_t * func_2(int32_t * p_3)
{
    int16_t l_638 = 3L;
    int32_t *l_640 = &g_12;
    int32_t ***l_646 = &g_140;
    int32_t *** const * const l_645 = &l_646;
    uint32_t l_688 = 18446744073709551615UL;
    int32_t l_704 = 0x6D612AFBL;
    int32_t l_736 = 0x9B9ED660L;
    int32_t l_743 = 1L;
    const uint8_t l_768 = 0x5FL;
    uint8_t l_808 = 0x0EL;
    int32_t l_819 = 7L;
    for (g_516 = 26; (g_516 != (-4)); g_516--)
    {
        int32_t **l_628 = &g_316;
        int32_t ***l_630 = &g_140;
        int32_t ****l_629 = &l_630;
        const int32_t l_658 = 8L;
        uint32_t l_671 = 4294967294UL;
        int16_t l_780 = (-1L);
        l_628 = (void*)0;
        if ((l_629 == (*g_244)))
        {
            const int32_t *l_637 = &g_181;
            const int32_t **l_636 = &l_637;
            const int32_t ***l_635 = &l_636;
            uint32_t l_639 = 18446744073709551615UL;
            l_640 = func_46(((safe_mod_func_int32_t_s_s(((void*)0 != (*l_629)), g_181)) || (((((((safe_sub_func_uint8_t_u_u((((0x2BECD138L > ((void*)0 != l_635)) & ((((p_3 != p_3) | g_12) <= 0x08L) | (**l_636))) && (***l_635)), g_179)) > 4294967295UL) & 0x9E97L) < l_638) > (*l_637)) == (*l_637)) <= l_639)), (***l_635));
            p_3 = p_3;
            for (l_639 = 0; (l_639 == 41); l_639 = safe_add_func_int32_t_s_s(l_639, 3))
            {
                int32_t l_644 = 1L;
                (*l_640) = ((*l_640) > (!(l_644 & (((((void*)0 == l_645) | (safe_lshift_func_int16_t_s_u(((safe_add_func_uint8_t_u_u((*l_637), ((0x3CEE95F5L || ((l_644 == 0x5D32L) & (((((safe_lshift_func_int8_t_s_s(0xC4L, 0)) ^ (***l_635)) >= l_644) && 0x03L) || l_644))) & 1UL))) | (*l_637)), 0))) == g_545) == (*l_637)))));
                (*l_640) = ((safe_sub_func_uint32_t_u_u(((0UL & 0x7186L) != 0xFA88L), (&l_629 != (void*)0))) > (&l_630 == (void*)0));
                l_644 = (0xD6L & (***l_635));
            }
            for (g_353 = (-18); (g_353 < (-29)); g_353 = safe_sub_func_uint8_t_u_u(g_353, 5))
            {
                uint16_t l_657 = 9UL;
                if (l_657)
                    break;
                if (l_657)
                    continue;
                if (l_658)
                    continue;
            }
        }
        else
        {
            uint32_t l_661 = 4UL;
            int8_t l_684 = (-1L);
            (*l_640) = (safe_add_func_uint32_t_u_u((0x293FL > l_661), ((safe_mod_func_int16_t_s_s(g_353, ((l_661 || (((((!((g_141 == ((safe_lshift_func_uint16_t_u_u((l_661 != (((g_181 == l_661) ^ (safe_mod_func_int32_t_s_s(((safe_add_func_uint32_t_u_u(((*l_640) <= 0x6BL), l_671)) ^ (*l_640)), (-1L)))) && g_353)), 0)) < g_181)) > l_661)) || g_179) <= 0x003AA5FDL) == 0UL) != 1UL)) && 0x5909L))) >= l_661)));
            for (g_141 = (-6); (g_141 > (-24)); g_141 = safe_sub_func_int8_t_s_s(g_141, 1))
            {
                int32_t *l_674 = &g_181;
                int32_t l_677 = 0x7E6ADB7AL;
                l_674 = p_3;
                p_3 = p_3;
                (*l_640) = (3L > (((safe_add_func_uint8_t_u_u(((&g_405 != &g_405) & ((l_677 ^ 0x4793L) && (safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(((void*)0 != &g_405), (safe_lshift_func_uint8_t_u_s(((g_545 || (l_684 < l_684)) > g_685), g_8)))), g_176)))), g_12)) && 0UL) || (-6L)));
            }
        }
        for (g_545 = 20; (g_545 >= (-26)); g_545--)
        {
            uint32_t l_707 = 18446744073709551614UL;
            int32_t l_752 = 0xFE5E9859L;
            int8_t l_805 = 0L;
            int32_t **l_815 = &l_640;
            if (l_688)
            {
                int8_t l_702 = 0xB3L;
                int32_t *l_705 = (void*)0;
                int32_t ***l_710 = (void*)0;
                int32_t l_735 = 0xDD166B52L;
                const int32_t * const l_745 = &g_516;
                int8_t l_750 = 0xF2L;
                for (g_141 = 0; (g_141 == 18); ++g_141)
                {
                    for (g_179 = 0; (g_179 == 38); g_179++)
                    {
                        p_3 = func_46((safe_unary_minus_func_uint32_t_u(((*l_640) >= ((void*)0 != (*l_645))))), g_179);
                        return p_3;
                    }
                    p_3 = p_3;
                }
                for (g_141 = 0; (g_141 == 24); ++g_141)
                {
                    uint8_t l_706 = 251UL;
                    int32_t **l_732 = &g_316;
                    l_707 = (safe_lshift_func_uint16_t_u_s((safe_add_func_int16_t_s_s(((&g_245 == &g_405) | (safe_rshift_func_int16_t_s_s(l_702, 8))), (2UL != ((((~l_702) < (l_704 >= ((void*)0 != l_705))) && 9L) || l_706)))), (*l_640)));
                    (*l_640) = (g_141 && (((((((safe_lshift_func_int16_t_s_u(l_707, 7)) != (-1L)) != 0x50L) && ((((void*)0 != l_710) ^ (safe_sub_func_uint16_t_u_u(l_706, (~(safe_mod_func_uint32_t_u_u(0x15CD146AL, l_707)))))) & g_141)) || g_176) | 0x898E814AL) != g_181));
                    for (g_685 = 0; (g_685 > 26); g_685 = safe_add_func_uint8_t_u_u(g_685, 5))
                    {
                        int8_t l_718 = 1L;
                        int32_t *l_744 = &g_12;
                        uint8_t l_751 = 0x70L;
                        (*l_640) = (g_161 ^ ((l_718 || (safe_lshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_s(0x8AD9L, 14)), 3))) && ((safe_mod_func_uint16_t_u_u(((((safe_unary_minus_func_int32_t_s((safe_add_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_s((p_3 == p_3), 6)) == (safe_sub_func_uint32_t_u_u((l_707 != ((&p_3 == l_732) & ((safe_mod_func_int32_t_s_s(((0L < (*l_640)) & g_179), g_181)) && (*l_640)))), (*l_640)))), l_735)))) <= g_516) && l_736) >= g_8), g_516)) ^ l_707)));
                        (*l_744) = (safe_add_func_uint32_t_u_u(((safe_sub_func_uint16_t_u_u(g_141, 0UL)) ^ ((safe_mod_func_uint16_t_u_u(((void*)0 == &l_645), l_743)) != ((g_176 < (l_744 == l_745)) <= ((((safe_rshift_func_int8_t_s_u(((safe_add_func_int8_t_s_s(l_750, 0x04L)) <= g_516), 1)) | 0UL) || (*l_744)) & g_179)))), 7UL));
                        l_752 = l_751;
                        (*l_732) = func_46(g_179, ((void*)0 == l_732));
                    }
                }
            }
            else
            {
                int32_t **l_755 = &g_316;
                int32_t l_769 = 0x86FE12CFL;
                uint16_t l_792 = 3UL;
                uint32_t l_800 = 7UL;
                l_769 = (safe_sub_func_int32_t_s_s((&p_3 != l_755), (safe_add_func_int8_t_s_s((*l_640), ((safe_rshift_func_int8_t_s_s((safe_mod_func_uint8_t_u_u((p_3 != &l_752), (safe_mod_func_uint32_t_u_u(0xD27EC538L, (safe_lshift_func_int8_t_s_u(0xB8L, (!l_707))))))), 2)) ^ (((~l_768) && (*l_640)) >= 0x02L))))));
                (*l_640) = 0xF7C5490FL;
                if ((safe_mod_func_int32_t_s_s(l_707, (g_353 & (((safe_lshift_func_int8_t_s_s(g_181, 7)) ^ ((void*)0 != p_3)) < (((((safe_sub_func_int32_t_s_s((((*l_640) || ((*l_640) >= (safe_add_func_uint16_t_u_u((g_353 >= ((((safe_mod_func_uint8_t_u_u(l_752, 246UL)) || l_780) || (*l_640)) ^ g_8)), 0xB2EEL)))) | g_8), l_752)) & 2UL) | g_516) < g_179) != 1UL))))))
                {
                    int32_t l_782 = 1L;
                    if (l_752)
                    {
                        l_752 = 0x7943931DL;
                    }
                    else
                    {
                        int8_t l_781 = 2L;
                        int32_t l_783 = (-1L);
                        l_782 = l_781;
                        l_783 = 0x867992C3L;
                    }
                    if (l_707)
                        break;
                }
                else
                {
                    const int32_t *l_791 = &l_704;
                    const int32_t **l_790 = &l_791;
                    int32_t *l_801 = &g_8;
                    for (l_752 = 18; (l_752 != (-29)); --l_752)
                    {
                        p_3 = func_46(g_545, g_8);
                    }
                    (*g_244) = (void*)0;
                    if ((safe_rshift_func_int8_t_s_u((safe_sub_func_uint32_t_u_u(0x15F2B1AFL, ((l_790 != (void*)0) || (6UL > (&l_646 != (*g_244)))))), 5)))
                    {
                        int32_t *****l_795 = (void*)0;
                        l_792 = (-9L);
                        (*l_640) = ((safe_lshift_func_int8_t_s_u((((*l_791) < g_141) ^ ((*l_640) <= (g_516 > ((**l_790) > g_12)))), (l_795 != &g_245))) != (safe_lshift_func_uint8_t_u_u((((safe_lshift_func_uint16_t_u_s((0x7CFEF7E0L | l_752), (*l_791))) > l_752) > l_800), 6)));
                        p_3 = (void*)0;
                    }
                    else
                    {
                        (*l_755) = p_3;
                        return l_801;
                    }
                }
                (*l_640) = (((p_3 != p_3) < ((((((~l_752) <= ((safe_rshift_func_int8_t_s_s(((0x94D042BCL && 0UL) | l_707), (g_12 != l_805))) >= (safe_add_func_uint16_t_u_u(g_8, 0UL)))) == g_516) && l_808) ^ 0x98L) >= 0xC69AL)) | (-1L));
            }
            for (g_176 = 0; (g_176 >= 47); g_176++)
            {
                int32_t *l_811 = (void*)0;
                p_3 = l_811;
                for (g_181 = 15; (g_181 > 10); --g_181)
                {
                    uint32_t l_820 = 0x7EDBD6FBL;
                }
            }
            (**l_815) = (**l_815);
        }
    }
    return p_3;
}
static int32_t * func_4(int16_t p_5, int8_t p_6, int32_t * p_7)
{
    int32_t l_536 = (-1L);
    int32_t * const *l_540 = &g_316;
    int32_t * const **l_539 = &l_540;
    int32_t * const ***l_538 = &l_539;
    int32_t * const ****l_537 = &l_538;
    int32_t *l_564 = (void*)0;
    uint32_t l_606 = 0UL;
    int32_t ***l_609 = &g_140;
    int32_t *l_622 = (void*)0;
    int32_t *l_623 = (void*)0;
    int32_t *l_624 = (void*)0;
    int32_t *l_625 = &g_516;
    if ((((safe_lshift_func_int16_t_s_u(p_6, ((g_516 || (safe_sub_func_uint32_t_u_u((safe_add_func_uint16_t_u_u(((0x4C0E27DAL > 0xE9FB76E1L) < l_536), ((void*)0 != l_537))), p_5))) == (0x2F47L && p_6)))) > g_516) || 0x53C2L))
    {
        int8_t l_543 = 0xF9L;
        int32_t *** const **l_544 = &g_245;
        int32_t l_559 = (-1L);
        uint32_t l_565 = 1UL;
        int32_t *l_568 = &g_161;
        int32_t **l_569 = &g_316;
        if ((safe_sub_func_int16_t_s_s(l_543, 0xECCFL)))
        {
            uint16_t l_552 = 5UL;
            l_544 = &g_245;
            p_7 = p_7;
            l_559 = (g_545 < (((safe_rshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(((((void*)0 != (*l_538)) | (safe_mod_func_uint16_t_u_u(l_552, (safe_add_func_uint32_t_u_u((safe_add_func_uint32_t_u_u(0x794A079EL, (safe_rshift_func_uint8_t_u_s((p_5 ^ (0x5EBC0542L != 4294967295UL)), g_353)))), p_6))))) && g_516), p_6)), g_353)) ^ g_12) ^ p_5));
        }
        else
        {
            int32_t **l_560 = (void*)0;
            l_560 = &p_7;
            return p_7;
        }
        for (g_176 = (-23); (g_176 <= 50); g_176 = safe_add_func_int16_t_s_s(g_176, 2))
        {
            int32_t **l_563 = &g_316;
            (*l_563) = (**l_539);
            l_564 = (void*)0;
            l_565 = p_5;
        }
        for (l_543 = 26; (l_543 < (-17)); l_543 = safe_sub_func_int32_t_s_s(l_543, 8))
        {
            l_564 = p_7;
        }
        (*l_569) = l_568;
    }
    else
    {
        uint16_t l_572 = 65527UL;
        int32_t *****l_580 = &g_405;
        int32_t l_587 = 0x548150A4L;
        int32_t ***l_610 = &g_140;
        const uint16_t l_620 = 65526UL;
        int32_t *l_621 = &g_12;
        for (g_181 = 0; (g_181 == 19); g_181 = safe_add_func_uint32_t_u_u(g_181, 4))
        {
            if (l_572)
                break;
            for (g_353 = 0; (g_353 != (-23)); --g_353)
            {
                int32_t *l_575 = &g_545;
                if (((-1L) > p_6))
                {
                    return l_575;
                }
                else
                {
                    int32_t **** const *l_581 = &g_405;
                    uint32_t l_586 = 0UL;
                    int32_t *l_588 = &g_12;
                    (*l_575) = (((safe_lshift_func_int8_t_s_s((g_353 < ((((*l_537) == (void*)0) >= (l_580 == l_581)) < ((p_6 < (0x681DB775L >= (((safe_sub_func_int16_t_s_s((((safe_sub_func_uint8_t_u_u(g_353, (-5L))) >= p_5) >= 65533UL), g_179)) < l_572) >= p_6))) ^ l_586))), 3)) | (-3L)) || g_176);
                    l_587 = p_6;
                    l_575 = l_588;
                }
            }
        }
        (*l_621) = (safe_lshift_func_uint8_t_u_u(((safe_mod_func_uint8_t_u_u((!p_6), (safe_mod_func_uint8_t_u_u(1UL, (safe_mod_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((&l_538 == &g_245), ((safe_add_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u(((safe_add_func_uint16_t_u_u(l_606, (safe_add_func_int32_t_s_s((l_609 != l_610), (safe_mod_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_u(0x79L, (~p_6))), 10)) | p_6), g_516)), l_620)))))) != p_6), g_12)), 0xAF13EE54L)) || g_12))), 0x4115L)))))) & 0x7EACAC37L), 0));
    }
    (*l_625) = p_6;
    return p_7;
}
static int8_t func_9(int32_t * p_10)
{
    int8_t l_40 = 0L;
    int32_t l_285 = (-1L);
    int32_t ***l_288 = &g_140;
    int32_t ****l_287 = &l_288;
    int32_t l_298 = 9L;
    int32_t *l_314 = &g_161;
    int32_t * const ** const *l_364 = (void*)0;
    int32_t * const ** const **l_363 = &l_364;
    int32_t * const ** const **l_365 = &l_364;
    const uint32_t l_454 = 0UL;
    const uint16_t l_455 = 0x20ECL;
    int8_t l_471 = (-10L);
    for (g_12 = (-4); (g_12 != (-4)); g_12 = safe_add_func_uint8_t_u_u(g_12, 6))
    {
        int32_t l_17 = 1L;
        l_285 = ((safe_rshift_func_uint16_t_u_s((((l_17 != ((safe_add_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((0xD7L & (g_12 || func_22(func_27(l_17, ((g_8 & (l_17 > (((((safe_lshift_func_int16_t_s_u(g_8, 12)) || ((safe_sub_func_uint8_t_u_u((((safe_add_func_int16_t_s_s(g_8, (safe_add_func_uint16_t_u_u(((void*)0 == p_10), 0xCFDAL)))) | l_40) || l_17), g_8)) || g_12)) > l_17) <= l_17) == g_8))) > 0x7EB6L)), g_12, g_12, l_17))), l_40)), (-5L))) ^ l_17)) ^ l_17) < l_17), g_8)) || l_17);
    }
    if ((((((~((void*)0 == &l_285)) ^ (((((void*)0 == l_287) <= ((safe_add_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(g_181, (l_40 | ((!l_285) <= 0UL)))), (safe_rshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(g_161, 11)), l_298)))) != 4294967294UL)) == 9L) <= 0x0DFFA390L)) == g_8) ^ g_141) | l_40))
    {
        int32_t l_299 = 0x23124B16L;
        int32_t ***l_341 = &g_140;
        int8_t l_383 = 0x92L;
        int32_t l_384 = (-3L);
        if (l_299)
        {
            int8_t l_321 = (-4L);
            int8_t l_342 = 0x5DL;
            for (g_141 = (-22); (g_141 != (-27)); g_141--)
            {
                int32_t ****l_306 = (void*)0;
                uint32_t l_308 = 0x844AFDE6L;
                int32_t *l_312 = &g_161;
                int32_t *l_315 = (void*)0;
                for (l_298 = 0; (l_298 >= 26); ++l_298)
                {
                    int32_t *l_304 = (void*)0;
                    int32_t *l_305 = &g_12;
                    (*l_305) = 1L;
                    if (((((((void*)0 != l_306) && (g_179 <= 255UL)) ^ 2L) && (g_181 < (safe_unary_minus_func_uint8_t_u(l_308)))) <= g_161))
                    {
                        int8_t l_309 = (-10L);
                        int32_t **l_310 = &l_304;
                        p_10 = func_46(l_309, g_179);
                        (*l_310) = (void*)0;
                        g_244 = &g_245;
                        if (l_309)
                            continue;
                    }
                    else
                    {
                        uint8_t l_311 = 255UL;
                        int32_t *l_313 = &l_285;
                        l_312 = func_46(g_8, l_311);
                        l_314 = l_313;
                        g_316 = l_315;
                        (*l_305) = 0x6216E467L;
                    }
                    for (g_176 = 0; (g_176 >= 14); ++g_176)
                    {
                        (*l_314) = ((l_299 <= ((safe_add_func_int16_t_s_s(g_181, 0x5ADBL)) || (l_299 == (*l_312)))) ^ 0xD6678A5AL);
                    }
                }
                (*l_314) = (((*l_314) > l_321) != (safe_sub_func_int8_t_s_s(((g_179 < (0xC9A6L == (l_299 >= (g_141 ^ g_181)))) > (safe_lshift_func_int16_t_s_u(0x6023L, ((((((((+(safe_add_func_uint32_t_u_u(((4294967291UL < 0x735A53A1L) != l_299), (*l_312)))) <= g_181) > g_181) <= 0x9E382DF5L) || 0x97202116L) > g_8) > (*l_314)) >= (*l_312))))), g_176)));
                l_342 = ((safe_sub_func_int16_t_s_s((((g_141 || 0x575DL) & (safe_unary_minus_func_int8_t_s((+((safe_rshift_func_uint16_t_u_s(0x4D1BL, 4)) & (l_321 || (((safe_rshift_func_int16_t_s_s((safe_sub_func_int16_t_s_s((*l_314), ((void*)0 == l_306))), 6)) == ((safe_lshift_func_uint8_t_u_u(((l_341 != &g_140) | (*l_312)), g_12)) || g_12)) <= g_176))))))) | g_179), l_321)) <= g_181);
            }
        }
        else
        {
            int32_t * const *l_346 = &g_316;
            int32_t * const **l_345 = &l_346;
            int32_t * const ***l_344 = &l_345;
            int32_t * const ****l_343 = &l_344;
            (*l_314) = (((((void*)0 != &p_10) | ((&l_287 != l_343) == ((0UL != ((safe_lshift_func_int16_t_s_s((safe_sub_func_int8_t_s_s(g_176, (safe_lshift_func_int16_t_s_u((l_299 || (((*l_343) == &l_288) > g_176)), 13)))), 10)) != g_353)) == 3L))) >= (-1L)) > g_141);
            if (((safe_rshift_func_int16_t_s_u(((void*)0 == &g_245), 3)) == (safe_rshift_func_uint16_t_u_s((safe_add_func_int16_t_s_s(0x60F1L, 4UL)), 15))))
            {
                return g_141;
            }
            else
            {
                uint32_t l_362 = 0x81EC2600L;
                for (g_181 = 0; (g_181 < 0); g_181 = safe_add_func_uint32_t_u_u(g_181, 4))
                {
                    (*l_314) = 1L;
                    if (l_362)
                        break;
                    p_10 = p_10;
                }
                p_10 = p_10;
                p_10 = (void*)0;
            }
            (*l_314) = 0x70C8BC80L;
        }
        l_365 = l_363;
        (*l_314) = ((((((safe_rshift_func_uint16_t_u_s(g_8, 7)) && (safe_sub_func_uint8_t_u_u(0UL, (-1L)))) && g_176) < (g_179 | g_353)) | (safe_lshift_func_uint8_t_u_u((((void*)0 != &p_10) == g_8), g_141))) && g_12);
        l_384 = (((safe_unary_minus_func_int32_t_s((((((g_179 && (safe_add_func_uint8_t_u_u(((((*l_314) == (g_12 >= ((~(safe_add_func_uint32_t_u_u(g_181, (g_353 || (safe_add_func_int8_t_s_s(((~(safe_rshift_func_int8_t_s_s((*l_314), g_179))) < ((void*)0 == (*g_244))), g_12)))))) & l_299))) || (*l_314)) > g_179), g_353))) == l_299) & g_141) != l_383) & 1L))) <= g_176) && l_299);
    }
    else
    {
        uint16_t l_385 = 0xB082L;
        int32_t **l_386 = &g_316;
        int32_t * const ***l_399 = (void*)0;
        int32_t * const ****l_398 = &l_399;
        int16_t l_400 = 9L;
        const int32_t l_406 = 1L;
        uint32_t l_468 = 18446744073709551606UL;
        int32_t l_473 = 4L;
        int32_t *l_503 = &g_12;
        (*l_386) = func_46(l_385, l_385);
        for (l_385 = 8; (l_385 == 1); l_385 = safe_sub_func_uint16_t_u_u(l_385, 6))
        {
            uint16_t l_389 = 0UL;
            (*l_314) = (((((((**l_386) && l_389) | g_8) & l_389) ^ (safe_rshift_func_uint8_t_u_u((**l_386), 4))) == ((safe_lshift_func_int16_t_s_s(((1L == (safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint16_t_u_s((((void*)0 == l_398) >= g_141), l_389)), (**l_386)))) < l_389), 14)) & l_400)) | (**l_386));
            for (g_181 = 13; (g_181 > 4); g_181 = safe_sub_func_uint16_t_u_u(g_181, 5))
            {
                int32_t *****l_403 = &l_287;
                g_404 = l_403;
            }
        }
        if (l_406)
        {
            uint8_t l_418 = 0xC0L;
            int8_t l_430 = 0x78L;
            int32_t l_443 = (-4L);
            int32_t ****l_448 = &l_288;
            (*l_314) = (**l_386);
            for (g_181 = (-20); (g_181 == 11); ++g_181)
            {
                uint16_t l_421 = 0xF4BAL;
                int32_t ***l_429 = &l_386;
                (*l_386) = p_10;
                (*l_386) = p_10;
                for (l_400 = 15; (l_400 == 16); l_400 = safe_add_func_int8_t_s_s(l_400, 1))
                {
                    int16_t l_425 = 0x19D0L;
                    (*l_386) = p_10;
                    for (g_141 = 0; (g_141 != (-16)); g_141 = safe_sub_func_int32_t_s_s(g_141, 8))
                    {
                        int32_t l_413 = 0x3AFC0850L;
                        if (l_413)
                            break;
                        p_10 = p_10;
                    }
                    if ((safe_mod_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(((l_418 || (0UL && (safe_sub_func_uint8_t_u_u(g_141, (&l_399 == (void*)0))))) >= l_421), 4)), (+((safe_add_func_uint16_t_u_u(0UL, g_12)) != (l_425 == g_8))))))
                    {
                        uint8_t l_426 = 0x1BL;
                        (*l_314) = (l_426 <= ((safe_lshift_func_int8_t_s_s((p_10 == p_10), ((void*)0 == l_429))) < 0x7F4EC64AL));
                        (*l_314) = 8L;
                        return g_161;
                    }
                    else
                    {
                        l_430 = 0x3F36A349L;
                    }
                    (**l_429) = p_10;
                }
            }
            if ((g_179 == ((safe_add_func_uint8_t_u_u(((0xE4E5L && ((safe_rshift_func_uint16_t_u_s((((0x14L ^ ((safe_sub_func_uint32_t_u_u(((g_12 >= l_418) < (g_12 ^ (l_430 < (safe_mod_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_u((*l_314), (p_10 != (void*)0))), l_443))))), g_176)) >= g_141)) ^ 0xAE63A26EL) & g_176), l_430)) ^ l_443)) == 4294967289UL), g_181)) <= 3UL)))
            {
                int32_t ****l_449 = &l_288;
                int32_t l_450 = 0x6DF10915L;
                uint32_t l_465 = 0x4A5D0BC7L;
                int8_t l_472 = 0x95L;
                if (((safe_add_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u((l_448 != l_449), 5)), ((l_450 > (safe_lshift_func_uint8_t_u_s((~(g_141 == ((l_454 < (g_353 < l_455)) > g_181))), 5))) && (safe_sub_func_int32_t_s_s((safe_add_func_uint16_t_u_u((g_179 > 246UL), g_161)), l_443))))) | 0x9EL))
                {
                    int16_t l_460 = 0x2BE5L;
                    (*l_314) = l_460;
                    (*l_386) = p_10;
                    (*l_386) = p_10;
                    (*l_314) = (((((safe_lshift_func_int16_t_s_u((safe_rshift_func_uint8_t_u_u((&p_10 == (void*)0), 0)), 8)) | ((g_161 | l_465) == g_179)) <= g_161) <= (0xB2L & (0x86L >= (safe_add_func_int8_t_s_s(((g_161 >= g_8) < (-1L)), 1UL))))) & 0xB43EL);
                }
                else
                {
                    l_468 = 2L;
                    for (g_12 = 0; (g_12 > (-5)); g_12 = safe_sub_func_int16_t_s_s(g_12, 7))
                    {
                        l_472 = l_471;
                        return l_473;
                    }
                    (*l_386) = p_10;
                }
                for (l_400 = 0; (l_400 > (-2)); l_400 = safe_sub_func_int32_t_s_s(l_400, 9))
                {
                    uint32_t l_476 = 9UL;
                    if (l_476)
                        break;
                }
            }
            else
            {
                int32_t *l_487 = &l_285;
                for (l_40 = (-7); (l_40 <= 4); ++l_40)
                {
                    int32_t *l_499 = &g_12;
                    (*l_314) = ((safe_rshift_func_uint16_t_u_s((0x06L <= ((safe_add_func_int8_t_s_s(0xAEL, ((safe_mod_func_uint8_t_u_u(g_353, (safe_mod_func_uint16_t_u_u((l_487 == l_487), (safe_sub_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(((((!((*l_487) >= (4294967288UL <= (safe_rshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_s((g_179 == (safe_mod_func_int32_t_s_s((p_10 == l_499), (*l_487)))), (*l_487))), g_176))))) > (-9L)) && (*l_487)) && 0xF1FC9B04L), (*l_487))), (*l_499))))))) & g_179))) || l_443)), 3)) != g_141);
                }
                (*l_386) = p_10;
                (*l_386) = func_46(g_8, (g_141 == g_181));
                p_10 = p_10;
            }
        }
        else
        {
            int32_t * const * const l_501 = (void*)0;
            int32_t * const * const *l_500 = &l_501;
            int32_t * const * const **l_502 = &l_500;
            (*l_502) = l_500;
            g_161 = ((-5L) | ((**l_386) != (**l_386)));
        }
        p_10 = l_503;
    }
    for (g_181 = (-1); (g_181 == (-20)); --g_181)
    {
        uint32_t l_506 = 0x09434D88L;
        int32_t l_507 = 0xE7520BA3L;
        uint16_t l_512 = 0UL;
        int32_t **l_515 = (void*)0;
        uint16_t l_524 = 0x5E16L;
        int32_t l_527 = 0x923C52B2L;
        l_507 = l_506;
        if ((*l_314))
            break;
        (*l_314) = (safe_add_func_int8_t_s_s(((safe_rshift_func_int16_t_s_s((l_512 && ((65535UL ^ (safe_rshift_func_int8_t_s_u(l_507, 5))) > ((*g_404) != (void*)0))), 0)) || (&l_364 == &l_364)), ((((void*)0 != l_515) >= g_12) != g_516)));
        l_507 = (safe_sub_func_uint16_t_u_u(65535UL, (safe_add_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((!(-1L)), l_524)), ((l_527 == (l_524 > (((safe_sub_func_int16_t_s_s(((void*)0 == &p_10), ((-9L) || (g_12 & g_516)))) >= g_516) <= (*l_314)))) <= 0UL)))));
    }
    return g_353;
}
static uint32_t func_22(const uint16_t p_23, int32_t p_24, int16_t p_25, int32_t p_26)
{
    int32_t ***l_283 = &g_140;
    int32_t ****l_284 = &l_283;
    (*l_284) = l_283;
    return g_12;
}
static const uint16_t func_27(uint16_t p_28, uint8_t p_29)
{
    int32_t l_41 = 2L;
    int32_t *l_42 = &l_41;
    l_41 = g_12;
    (*l_42) = (-1L);
    (*l_42) = (func_43(&l_41, g_8) && (safe_mod_func_uint8_t_u_u(0x5CL, (*l_42))));
    return p_29;
}
static const uint32_t func_43(int32_t * p_44, int32_t p_45)
{
    int32_t l_56 = 1L;
    int32_t *l_241 = &g_161;
    int32_t **l_240 = &l_241;
    int32_t ***l_264 = &l_240;
    uint32_t l_270 = 0UL;
    (*l_240) = func_46(func_49(&g_12, ((l_56 ^ l_56) | ((&g_12 != &g_12) < ((-10L) <= func_57(p_45, g_12, (l_56 >= l_56), l_56)))), l_56, l_56), p_45);
    for (p_45 = 0; (p_45 == (-26)); --p_45)
    {
        int32_t *** const **l_246 = &g_245;
        int32_t l_267 = 1L;
        p_44 = &g_181;
        l_246 = g_244;
        (*p_44) = (((safe_rshift_func_int16_t_s_u((p_45 && (safe_mod_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((safe_add_func_uint8_t_u_u(((~((g_176 != (safe_sub_func_uint32_t_u_u(g_181, ((safe_lshift_func_uint16_t_u_u((p_45 > ((safe_mod_func_uint32_t_u_u((&l_240 == l_264), (((safe_rshift_func_int8_t_s_s((l_267 < 0x7036L), 5)) ^ (safe_rshift_func_uint8_t_u_s(g_12, 4))) && (*p_44)))) != 0xB4L)), g_176)) && 0L)))) | p_45)) == p_45), p_45)), 7)), g_181))), l_270)) >= 0UL) && g_141);
    }
    (*l_240) = func_46((((((***l_264) < ((*p_44) || (safe_add_func_int16_t_s_s((safe_add_func_int16_t_s_s(0x7A2EL, ((safe_add_func_uint8_t_u_u((p_45 != 0L), g_141)) != ((*l_241) < ((((safe_lshift_func_uint16_t_u_s(g_179, (safe_sub_func_uint16_t_u_u(5UL, 0x1EECL)))) || 0x9D5CL) | (*l_241)) < (*p_44)))))), 4UL)))) && (*p_44)) | (*p_44)) | 4294967295UL), g_8);
    return p_45;
}
static int32_t * func_46(int16_t p_47, int32_t p_48)
{
    int32_t *l_233 = (void*)0;
    int32_t **l_234 = &l_233;
    int32_t *l_235 = &g_181;
    for (g_176 = (-10); (g_176 >= 41); g_176 = safe_add_func_uint8_t_u_u(g_176, 1))
    {
        int32_t *l_231 = (void*)0;
        int32_t *l_232 = &g_181;
        (*l_232) = p_47;
        (*l_232) = (0x44L < p_47);
    }
    (*l_234) = l_233;
    (*l_235) = p_47;
    for (g_161 = 0; (g_161 > (-26)); g_161 = safe_sub_func_int32_t_s_s(g_161, 4))
    {
        int32_t ***l_239 = &l_234;
        int32_t ****l_238 = &l_239;
        (*l_238) = &g_140;
        (*l_234) = (*l_234);
    }
    return &g_8;
}
static int16_t func_49(int32_t * p_50, const uint16_t p_51, int16_t p_52, uint32_t p_53)
{
    int32_t *l_116 = &g_12;
    int32_t **l_115 = &l_116;
    (*l_115) = p_50;
    (*l_115) = p_50;
    if ((g_8 | (safe_lshift_func_int16_t_s_u(0x6F96L, 11))))
    {
        uint32_t l_121 = 1UL;
        int32_t *l_172 = &g_161;
        int32_t * const *l_223 = &l_172;
        int32_t * const **l_222 = &l_223;
        int16_t l_224 = 0L;
        for (p_52 = (-4); (p_52 < (-6)); p_52--)
        {
            int8_t l_124 = 0L;
            g_141 = ((l_121 <= (l_124 == ((safe_rshift_func_uint8_t_u_u((0x31L | 0xFDL), 3)) != ((l_121 < (((*p_50) > ((((safe_sub_func_uint16_t_u_u(((safe_sub_func_uint32_t_u_u((safe_mod_func_int16_t_s_s((safe_mod_func_uint8_t_u_u(((!((0x6E85L & (safe_sub_func_int16_t_s_s(((void*)0 != g_140), p_51))) <= (-1L))) <= 0x5AL), 0x37L)), g_12)), 0xF3BE1296L)) & 1UL), 0x485DL)) | 0x0792702EL) > 0xAF5A799BL) <= 249UL)) <= g_12)) >= p_52)))) ^ (-7L));
            for (l_121 = 0; (l_121 == 43); l_121 = safe_add_func_uint8_t_u_u(l_121, 8))
            {
                int16_t l_159 = 6L;
                int32_t *l_160 = &g_161;
                (*l_115) = (*l_115);
                if ((*p_50))
                    break;
                (*l_160) = (!(p_52 == ((safe_mod_func_int32_t_s_s((0x72C3L == (safe_mod_func_uint32_t_u_u(((void*)0 != &g_140), 0x65F2B768L))), (safe_mod_func_int8_t_s_s(((*l_116) && ((safe_mod_func_uint8_t_u_u(((p_50 == (void*)0) <= (safe_mod_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(((safe_lshift_func_int16_t_s_s(p_53, p_51)) | 1UL), l_159)), 2L))), p_52)) || l_159)), 0x1BL)))) != 65530UL)));
            }
            return p_53;
        }
        (*l_115) = (*l_115);
        if ((*p_50))
        {
            int16_t l_162 = 0x3DDAL;
            return l_162;
        }
        else
        {
            int32_t ***l_165 = &g_140;
            if ((safe_lshift_func_int16_t_s_u((((l_165 == (void*)0) ^ l_121) || ((safe_add_func_int16_t_s_s((g_141 <= (safe_add_func_uint32_t_u_u(((safe_sub_func_int32_t_s_s((((void*)0 == l_172) >= p_51), ((((safe_unary_minus_func_uint8_t_u((safe_sub_func_uint32_t_u_u((*l_172), (0xF8L != g_176))))) <= (**l_115)) <= g_12) > p_51))) != g_8), 0x9A7C6434L))), (*l_172))) == (*l_172))), 1)))
            {
                int32_t l_217 = (-3L);
                for (g_161 = 23; (g_161 != 5); g_161--)
                {
                    int32_t *l_180 = &g_181;
                    int32_t *l_216 = &g_8;
                    g_179 = (*p_50);
                    p_50 = p_50;
                    (*l_180) = (*p_50);
                    (*l_180) = (safe_mod_func_uint16_t_u_u((~(1UL >= ((safe_rshift_func_int16_t_s_s((safe_add_func_int8_t_s_s(p_52, (((((safe_sub_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(p_53, ((safe_mod_func_uint32_t_u_u((safe_mod_func_int16_t_s_s((safe_add_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(((safe_add_func_uint8_t_u_u(((*l_180) != (*p_50)), (p_51 != ((~((safe_mod_func_int32_t_s_s(((+(safe_sub_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((+(g_176 || (safe_add_func_uint32_t_u_u(p_51, (safe_sub_func_int16_t_s_s(((void*)0 != l_216), 0x58DEL)))))), 2)), l_217))) | (*l_172)), l_217)) < 0x3EADC2A9L)) ^ 0x88L)))) ^ (*p_50)), 6)), (*l_172))), g_181)), p_51)) > (*p_50)))), p_52)) && l_217) & g_161) || (*l_172)) && p_52))), p_52)) ^ p_52))), 0x6787L));
                }
            }
            else
            {
                int32_t l_220 = 0x3E7F264CL;
                (*l_172) = (((safe_lshift_func_int16_t_s_s(p_51, 10)) || ((l_220 && (safe_unary_minus_func_uint32_t_u(0xA421FDF7L))) ^ g_176)) | ((1L == g_141) || ((((((0x39AD12C7L < ((void*)0 != l_222)) == 0L) >= p_51) && 0x213FL) >= l_224) >= p_52)));
            }
            return g_141;
        }
    }
    else
    {
        int32_t *l_225 = &g_181;
        (*l_115) = (void*)0;
        (*l_225) = 7L;
        for (g_141 = 0; (g_141 == 22); g_141 = safe_add_func_uint16_t_u_u(g_141, 8))
        {
            uint8_t l_228 = 0xBBL;
            g_181 = (l_228 < p_53);
            if ((*l_225))
                break;
            (*l_225) = (*p_50);
        }
    }
    (*l_115) = p_50;
    return (**l_115);
}
static int8_t func_57(int32_t p_58, int8_t p_59, int8_t p_60, uint8_t p_61)
{
    int32_t l_66 = 0xDC4EA3C9L;
    int32_t *** const l_82 = (void*)0;
    int32_t *l_98 = &g_12;
    int32_t **l_97 = &l_98;
    int32_t *l_114 = &l_66;
    if ((g_8 && p_59))
    {
        int32_t *l_71 = &g_12;
        int32_t *l_95 = &l_66;
        int32_t **l_96 = &l_71;
        int32_t ***l_99 = &l_96;
        if ((safe_rshift_func_int8_t_s_u((safe_add_func_uint16_t_u_u(0x4560L, p_60)), (((l_66 || ((((&l_66 != (void*)0) && (safe_mod_func_int8_t_s_s((((0x95L ^ (((void*)0 != l_71) >= p_59)) == (*l_71)) || l_66), (-1L)))) <= 0x5BL) < g_12)) || g_12) < (*l_71)))))
        {
            int32_t *l_78 = &g_12;
            int32_t *l_79 = &l_66;
            int32_t **l_80 = &l_79;
            int32_t ***l_81 = &l_80;
            (*l_79) = ((safe_rshift_func_int8_t_s_u(((((((-9L) ^ ((((void*)0 == &l_66) <= (1UL | ((-6L) & (safe_sub_func_uint16_t_u_u(p_60, ((((void*)0 != l_78) != (l_78 == &g_8)) == 0xB7466640L)))))) ^ p_61)) & g_8) != (*l_71)) <= p_61) <= l_66), g_8)) < g_8);
            (*l_80) = (void*)0;
            (*l_81) = &l_79;
        }
        else
        {
            int32_t **l_85 = (void*)0;
            int32_t ***l_84 = &l_85;
            int32_t ****l_83 = &l_84;
            (*l_83) = l_82;
        }
        (*l_95) = (((((&g_12 != l_71) < (g_8 < ((safe_rshift_func_int8_t_s_s(0L, 6)) & (((safe_rshift_func_int8_t_s_u((safe_mod_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(((safe_unary_minus_func_int8_t_s((g_8 < (*l_71)))) != (&l_71 != &l_71)), 3)), (-7L))), 4)) & 65533UL) == 8L)))) || p_59) <= (*l_71)) && 0xC9L);
        (*l_96) = &g_12;
        (*l_99) = l_97;
    }
    else
    {
        uint8_t l_103 = 246UL;
        const int32_t *l_104 = &g_12;
        for (p_61 = 0; (p_61 < 38); p_61++)
        {
            const int32_t **l_105 = &l_104;
            l_103 = (safe_unary_minus_func_int16_t_s(g_12));
            (*l_105) = l_104;
            (*l_97) = &g_12;
        }
        for (l_103 = 0; (l_103 < 54); l_103++)
        {
            return (*l_98);
        }
    }
    (*l_97) = &g_8;
    (*l_114) = ((safe_lshift_func_int8_t_s_s((safe_mod_func_uint32_t_u_u(((safe_mod_func_int8_t_s_s(((void*)0 != (*l_97)), 0x15L)) > ((((*l_97) == &g_12) >= (g_8 == ((void*)0 != &g_12))) ^ (**l_97))), g_8)), 2)) & p_59);
    return p_61;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_8;
    csmith_sink_ = g_12;
    csmith_sink_ = g_141;
    csmith_sink_ = g_161;
    csmith_sink_ = g_176;
    csmith_sink_ = g_179;
    csmith_sink_ = g_181;
    csmith_sink_ = g_353;
    csmith_sink_ = g_516;
    csmith_sink_ = g_545;
    csmith_sink_ = g_685;
    platform_main_end(0,0);
    return 0;
}
