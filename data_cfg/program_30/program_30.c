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
static uint32_t g_2 = 0x185299DA;
static int32_t g_15 = (-2);
static int32_t *g_53 = (void*)0;
static uint16_t g_79 = 65535U;
static int32_t g_83 = 1;
static uint32_t g_96 = 0x3C1A33FE;
static uint16_t g_132 = 0x3B1D;
static uint16_t *g_131 = &g_132;
static int16_t g_139 = (-4);
static int8_t g_145 = (-1);
static int8_t g_173 = 0xCA;
static int32_t g_174 = 9;
static uint8_t g_193 = 255U;
static int8_t *g_199 = &g_145;
static int8_t **g_198 = &g_199;
static int16_t *g_226 = &g_139;
static int16_t **g_225 = &g_226;
static uint32_t g_239 = 0xB26268CB;
static int8_t g_256 = 0x9E;
static int16_t g_291 = 1;
static int16_t g_344 = (-9);
static int32_t g_349 = 0x37185AD0;
static int32_t *g_404 = &g_15;
static int32_t **g_443 = (void*)0;
static uint32_t ***g_453 = (void*)0;
static uint32_t ****g_494 = (void*)0;
static uint32_t *****g_493 = &g_494;
static uint8_t g_507 = 0x8A;
static int16_t g_517 = 0x80B5;
static int32_t ***g_527 = (void*)0;
static int32_t ****g_526 = &g_527;
static int32_t g_594 = 0xE9DB47B0;
static uint8_t **g_615 = (void*)0;
static uint32_t g_684 = 0x0ADA1600;
static uint32_t g_686 = 4294967293U;
static int8_t ****g_719 = (void*)0;
static int32_t *g_773 = &g_594;
static int16_t ***g_816 = &g_225;
static int16_t ****g_815 = &g_816;
static uint32_t g_829 = 0x7ACF50A8;
static int32_t *g_889 = &g_83;
static uint8_t g_914 = 0x65;
inline static int8_t func_1(void);
inline static int32_t func_3(uint32_t p_4);
static int32_t func_7(int16_t p_8, uint32_t p_9);
static int32_t * func_17(uint8_t p_18, int16_t p_19, uint32_t p_20, int32_t * p_21, uint32_t p_22);
inline static uint32_t func_25(uint8_t p_26, int32_t * p_27, int32_t p_28, int32_t p_29, int32_t p_30);
inline static uint8_t func_31(int16_t p_32, uint32_t p_33, uint32_t p_34, int32_t * p_35);
static uint8_t func_36(uint16_t p_37, int32_t * p_38, uint16_t p_39);
inline static int16_t func_40(int16_t p_41);
static int32_t * func_46(int32_t * p_47);
static int32_t func_49(int32_t * p_50, int8_t p_51, int16_t p_52);
inline static int8_t func_1(void)
{
    uint8_t l_12 = 0U;
    int32_t *l_1097 = &g_594;
    uint32_t l_1118 = 4294967289U;
    uint32_t l_1119 = 0xFDB3A4D1;
    if (g_2)
    {
        int32_t l_912 = (-2);
        uint8_t *l_913 = &g_914;
        int16_t **l_1089 = (void*)0;
        if ((func_3((safe_mod_func_int8_t_s_s((func_7((safe_rshift_func_uint16_t_u_u(65535U, 0)), (0U <= l_12)) | ((safe_unary_minus_func_uint32_t_u((((*l_913) = l_912) > (safe_sub_func_int8_t_s_s((1 < l_12), 0U))))) == (-1))), l_12))) < l_12))
        {
            l_912 = ((l_1089 = (**g_815)) == (**g_815));
            ((void) sizeof ((l_1089 == &g_226) ? 1 : 0), __extension__ ({ if (l_1089 == &g_226) ; else __assert_fail ("l_1089 == &g_226", "/tmp/tmpbi86tzyg.c", 99, __extension__ __PRETTY_FUNCTION__); }));
        }
        else
        {
            return l_912;
        }
        ((void) sizeof ((g_53 == &g_83 || g_53 == 0) ? 1 : 0), __extension__ ({ if (g_53 == &g_83 || g_53 == 0) ; else __assert_fail ("g_53 == &g_83 || g_53 == 0", "/tmp/tmpbi86tzyg.c", 106, __extension__ __PRETTY_FUNCTION__); }));
        ((void) sizeof ((g_773 == &g_83 || g_773 == &g_594) ? 1 : 0), __extension__ ({ if (g_773 == &g_83 || g_773 == &g_594) ; else __assert_fail ("g_773 == &g_83 || g_773 == &g_594", "/tmp/tmpbi86tzyg.c", 108, __extension__ __PRETTY_FUNCTION__); }));
        ((void) sizeof ((l_1089 == &g_226) ? 1 : 0), __extension__ ({ if (l_1089 == &g_226) ; else __assert_fail ("l_1089 == &g_226", "/tmp/tmpbi86tzyg.c", 109, __extension__ __PRETTY_FUNCTION__); }));
        for (g_594 = 22; (g_594 <= 9); g_594--)
        {
            uint32_t l_1095 = 1U;
            uint16_t l_1096 = 0U;
            (*g_404) = (0x01CEB843 | (!(safe_lshift_func_int8_t_s_u((-6), 0))));
            if (l_1095)
                break;
            if (l_1096)
                continue;
        }
    }
    else
    {
        int32_t **l_1098 = &g_53;
        (*l_1098) = l_1097;
        ((void) sizeof ((g_53 == &g_594) ? 1 : 0), __extension__ ({ if (g_53 == &g_594) ; else __assert_fail ("g_53 == &g_594", "/tmp/tmpbi86tzyg.c", 126, __extension__ __PRETTY_FUNCTION__); }));
        if ((safe_rshift_func_int16_t_s_s((****g_815), 7)))
        {
            uint8_t l_1117 = 0U;
            (*g_773) = (0x2CEE != (((*g_404) = ((safe_lshift_func_uint16_t_u_s(((*g_131) = (safe_mod_func_int32_t_s_s(((safe_mod_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u(0x6A84, ((*g_226) >= ((safe_add_func_int32_t_s_s((*l_1097), (((*g_889) = 0x08CBA115) <= ((*g_131) | (safe_div_func_int8_t_s_s((*g_199), (safe_rshift_func_uint8_t_u_u(0xE9, ((safe_sub_func_int16_t_s_s((((*g_131) != 0xE333) && (*g_199)), l_1117)) | (*g_226)))))))))) & 4)))), (**l_1098))) && 0x5C17), l_1118))), 3)) || l_1117)) ^ (*g_773)));
        }
        else
        {
            (**l_1098) = l_1119;
        }
        return (**g_198);
    }
    ((void) sizeof ((g_53 == &g_83 || g_53 == 0) ? 1 : 0), __extension__ ({ if (g_53 == &g_83 || g_53 == 0) ; else __assert_fail ("g_53 == &g_83 || g_53 == 0", "/tmp/tmpbi86tzyg.c", 139, __extension__ __PRETTY_FUNCTION__); }));
    ((void) sizeof ((g_773 == &g_83 || g_773 == &g_594) ? 1 : 0), __extension__ ({ if (g_773 == &g_83 || g_773 == &g_594) ; else __assert_fail ("g_773 == &g_83 || g_773 == &g_594", "/tmp/tmpbi86tzyg.c", 141, __extension__ __PRETTY_FUNCTION__); }));
    (*l_1097) = ((((*g_889) = ((*g_404) = (0x5A4EA860 < (*l_1097)))) > (*l_1097)) < (*l_1097));
    return (*l_1097);
}
inline static int32_t func_3(uint32_t p_4)
{
    uint32_t l_919 = 1U;
    int32_t *l_951 = &g_349;
    int16_t **l_962 = &g_226;
    int16_t **l_964 = (void*)0;
    int16_t ***l_963 = &l_964;
    int8_t **l_1003 = &g_199;
    uint32_t *l_1077 = (void*)0;
    uint32_t **l_1076 = &l_1077;
    uint32_t ***l_1075 = &l_1076;
    uint32_t ***l_1081 = &l_1076;
    int8_t *l_1087 = &g_145;
    uint8_t l_1088 = 0xE9;
    for (g_239 = 22; (g_239 <= 47); ++g_239)
    {
        uint8_t *l_927 = &g_507;
        uint8_t **l_926 = &l_927;
        uint32_t *l_934 = &g_2;
        int32_t l_935 = 0xA7373DC7;
        int32_t **l_946 = &g_773;
        uint16_t **l_950 = &g_131;
        l_919 = (*g_404);
    }
    (*g_404) = ((safe_lshift_func_int8_t_s_u(((safe_div_func_uint32_t_u_u(((*l_951) = (safe_add_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(((*g_131) = (safe_add_func_uint32_t_u_u(0x1E0C2732, (((**g_815) = l_962) != ((*l_963) = l_962))))), 2)), (((*l_951) | ((**g_198) >= (safe_add_func_int8_t_s_s((**g_198), (p_4 | p_4))))) <= ((*l_951) == (*l_951)))))), p_4)) | p_4), 7)) || (*l_951));
    ((void) sizeof ((l_964 == &g_226) ? 1 : 0), __extension__ ({ if (l_964 == &g_226) ; else __assert_fail ("l_964 == &g_226", "/tmp/tmpbi86tzyg.c", 178, __extension__ __PRETTY_FUNCTION__); }));
    l_951 = l_951;
    for (g_686 = 0; (g_686 <= 48); g_686++)
    {
        uint16_t l_993 = 0xC936;
        uint8_t l_1052 = 0x20;
        int32_t *l_1060 = &g_83;
        uint32_t ****l_1078 = &l_1075;
        uint32_t ****l_1079 = &g_453;
        uint32_t ***l_1080 = (void*)0;
        int32_t l_1082 = 1;
        for (g_684 = 3; (g_684 != 53); ++g_684)
        {
            uint32_t l_985 = 4294967295U;
            int32_t l_1005 = 0x82AC67B0;
            for (g_83 = 1; (g_83 < 28); g_83 = safe_add_func_int32_t_s_s(g_83, 1))
            {
                uint16_t l_982 = 65535U;
                int8_t **l_1002 = &g_199;
                int32_t *l_1041 = &g_594;
                int16_t l_1058 = 8;
                uint16_t *l_1059 = &l_982;
                int32_t **l_1061 = &g_773;
                int32_t *l_1070 = &g_83;
            }
            g_773 = l_1060;
            ((void) sizeof ((g_773 == &g_83) ? 1 : 0), __extension__ ({ if (g_773 == &g_83) ; else __assert_fail ("g_773 == &g_83", "/tmp/tmpbi86tzyg.c", 205, __extension__ __PRETTY_FUNCTION__); }));
        }
        if ((*l_1060))
            break;
        (*g_404) = ((*l_1060) = (safe_div_func_uint8_t_u_u((((safe_rshift_func_uint8_t_u_s(0xEE, 1)) || 1U) ^ (((((*l_1079) = ((*l_1078) = l_1075)) == (l_1081 = l_1080)) > (l_1082 == ((((*l_951) = (*l_951)) && (safe_sub_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(1, ((((*g_198) = (*l_1003)) != l_1087) ^ p_4))), p_4))) & 0x58))) && (*g_199))), 0x8E)));
        ((void) sizeof ((g_453 == &l_1076) ? 1 : 0), __extension__ ({ if (g_453 == &l_1076) ; else __assert_fail ("g_453 == &l_1076", "/tmp/tmpbi86tzyg.c", 211, __extension__ __PRETTY_FUNCTION__); }));
        ((void) sizeof ((l_1081 == 0) ? 1 : 0), __extension__ ({ if (l_1081 == 0) ; else __assert_fail ("l_1081 == 0", "/tmp/tmpbi86tzyg.c", 212, __extension__ __PRETTY_FUNCTION__); }));
        l_1060 = l_951;
        ((void) sizeof ((l_1060 == &g_349) ? 1 : 0), __extension__ ({ if (l_1060 == &g_349) ; else __assert_fail ("l_1060 == &g_349", "/tmp/tmpbi86tzyg.c", 215, __extension__ __PRETTY_FUNCTION__); }));
    }
    ((void) sizeof ((g_453 == &l_1076 || g_453 == 0) ? 1 : 0), __extension__ ({ if (g_453 == &l_1076 || g_453 == 0) ; else __assert_fail ("g_453 == &l_1076 || g_453 == 0", "/tmp/tmpbi86tzyg.c", 218, __extension__ __PRETTY_FUNCTION__); }));
    ((void) sizeof ((g_773 == &g_83 || g_773 == &g_594) ? 1 : 0), __extension__ ({ if (g_773 == &g_83 || g_773 == &g_594) ; else __assert_fail ("g_773 == &g_83 || g_773 == &g_594", "/tmp/tmpbi86tzyg.c", 219, __extension__ __PRETTY_FUNCTION__); }));
    ((void) sizeof ((l_1081 == 0 || l_1081 == &l_1076) ? 1 : 0), __extension__ ({ if (l_1081 == 0 || l_1081 == &l_1076) ; else __assert_fail ("l_1081 == 0 || l_1081 == &l_1076", "/tmp/tmpbi86tzyg.c", 220, __extension__ __PRETTY_FUNCTION__); }));
    return l_1088;
}
static int32_t func_7(int16_t p_8, uint32_t p_9)
{
    uint16_t l_13 = 5U;
    int32_t *l_14 = &g_15;
    int8_t **l_341 = &g_199;
    int32_t ****l_880 = &g_527;
    int8_t *l_906 = &g_173;
    (*l_14) = l_13;
    (*l_14) = (-9);
    if (((void*)0 == l_14))
    {
        uint32_t l_347 = 0x937DDB64;
        int32_t l_351 = 0xC175E5F0;
        int16_t l_875 = 0xF585;
        int32_t ****l_879 = &g_527;
        if ((~0x06))
        {
            int32_t *l_48 = (void*)0;
            int32_t **l_338 = &g_53;
            int8_t ***l_342 = &l_341;
            int16_t *l_343 = &g_344;
            int32_t *l_348 = &g_349;
            uint32_t *l_350 = &l_347;
            int16_t l_872 = 0xD132;
            (*l_338) = func_17(((((safe_div_func_uint32_t_u_u(func_25(func_31(p_8, ((func_36((func_40(((((((((safe_mod_func_int32_t_s_s(((*l_14) = g_2), ((*l_350) = (safe_mod_func_uint32_t_u_u((((*l_338) = func_46(l_48)) != (void*)0), ((((*l_343) = (((*l_342) = l_341) == (void*)0)) ^ 1) && (((*l_348) = (safe_rshift_func_uint16_t_u_s(((0x3284 <= l_347) || l_347), 2))) != p_8))))))) < p_8) != 4294967286U) ^ g_239) >= g_174) | p_8) < p_8) <= l_351)) ^ l_351), g_404, g_2) > 0xE7) != (-1)), g_684, &l_351), &l_351, l_872, g_173, (*g_773)), l_875)) == 0x8C) > 0xF7A1) < 0x1D), p_9, p_8, l_14, g_684);
            for (g_344 = 0; (g_344 < 27); g_344++)
            {
                int32_t *****l_881 = &l_880;
                int32_t *****l_882 = &g_526;
                (*l_14) = (l_879 == ((*l_882) = ((*l_881) = l_880)));
            }
        }
        else
        {
            return p_8;
        }
    }
    else
    {
        int32_t l_883 = 1;
        int32_t *l_885 = &g_15;
        int8_t *l_904 = (void*)0;
        int8_t *****l_910 = &g_719;
        (*g_404) = 0xC632FFAA;
        if ((l_883 = p_9))
        {
            int32_t *l_884 = &g_349;
            l_885 = func_46(l_884);
            ((void) sizeof ((g_53 == &g_83 || g_53 == 0) ? 1 : 0), __extension__ ({ if (g_53 == &g_83 || g_53 == 0) ; else __assert_fail ("g_53 == &g_83 || g_53 == 0", "/tmp/tmpbi86tzyg.c", 281, __extension__ __PRETTY_FUNCTION__); }));
            ((void) sizeof ((l_885 == &g_83 || l_885 == &g_349) ? 1 : 0), __extension__ ({ if (l_885 == &g_83 || l_885 == &g_349) ; else __assert_fail ("l_885 == &g_83 || l_885 == &g_349", "/tmp/tmpbi86tzyg.c", 282, __extension__ __PRETTY_FUNCTION__); }));
        }
        else
        {
            int32_t *l_886 = &g_349;
            l_886 = (void*)0;
            ((void) sizeof ((l_886 == 0) ? 1 : 0), __extension__ ({ if (l_886 == 0) ; else __assert_fail ("l_886 == 0", "/tmp/tmpbi86tzyg.c", 289, __extension__ __PRETTY_FUNCTION__); }));
        }
        ((void) sizeof ((g_53 == &g_83 || g_53 == 0) ? 1 : 0), __extension__ ({ if (g_53 == &g_83 || g_53 == 0) ; else __assert_fail ("g_53 == &g_83 || g_53 == 0", "/tmp/tmpbi86tzyg.c", 292, __extension__ __PRETTY_FUNCTION__); }));
        ((void) sizeof ((l_885 == &g_15 || l_885 == &g_83 || l_885 == &g_349) ? 1 : 0), __extension__ ({ if (l_885 == &g_15 || l_885 == &g_83 || l_885 == &g_349) ; else __assert_fail ("l_885 == &g_15 || l_885 == &g_83 || l_885 == &g_349", "/tmp/tmpbi86tzyg.c", 293, __extension__ __PRETTY_FUNCTION__); }));
        for (l_13 = 10; (l_13 >= 29); ++l_13)
        {
            int32_t **l_890 = &l_885;
            int8_t **l_905 = &l_904;
            int8_t *l_907 = &g_145;
            int32_t ***l_908 = &g_443;
            uint32_t *l_909 = &g_686;
            (*l_890) = g_889;
            ((void) sizeof ((l_885 == &g_83) ? 1 : 0), __extension__ ({ if (l_885 == &g_83) ; else __assert_fail ("l_885 == &g_83", "/tmp/tmpbi86tzyg.c", 303, __extension__ __PRETTY_FUNCTION__); }));
        }
    }
    ((void) sizeof ((g_53 == &g_83 || g_53 == 0) ? 1 : 0), __extension__ ({ if (g_53 == &g_83 || g_53 == 0) ; else __assert_fail ("g_53 == &g_83 || g_53 == 0", "/tmp/tmpbi86tzyg.c", 307, __extension__ __PRETTY_FUNCTION__); }));
    return p_9;
}
static int32_t * func_17(uint8_t p_18, int16_t p_19, uint32_t p_20, int32_t * p_21, uint32_t p_22)
{
    int32_t *l_876 = (void*)0;
    return l_876;
}
inline static uint32_t func_25(uint8_t p_26, int32_t * p_27, int32_t p_28, int32_t p_29, int32_t p_30)
{
    int32_t *l_873 = &g_594;
    int32_t **l_874 = &g_773;
    (*l_874) = l_873;
    return p_30;
}
inline static uint8_t func_31(int16_t p_32, uint32_t p_33, uint32_t p_34, int32_t * p_35)
{
    int32_t *l_689 = &g_83;
    int16_t **l_735 = (void*)0;
    uint32_t *l_759 = &g_2;
    uint32_t **l_758 = &l_759;
    uint32_t **l_760 = (void*)0;
    uint16_t **l_776 = &g_131;
    uint32_t l_800 = 4294967288U;
    uint8_t l_826 = 0U;
    uint8_t l_835 = 1U;
    uint32_t l_867 = 0x3D5BD87D;
    int32_t **l_871 = &g_53;
    l_689 = p_35;
    for (g_174 = (-5); (g_174 < 16); g_174++)
    {
        uint32_t ****l_696 = (void*)0;
        int32_t l_697 = (-1);
        int16_t **l_698 = &g_226;
        int16_t *l_707 = &g_517;
        uint32_t l_714 = 0xF9D683A8;
        int16_t l_718 = (-1);
        int8_t **l_725 = &g_199;
        int8_t l_763 = 0x74;
        int32_t l_766 = 1;
        int32_t **l_772 = (void*)0;
        uint16_t l_812 = 1U;
        uint8_t *l_868 = (void*)0;
    }
    (*l_871) = l_759;
    ((void) sizeof ((g_53 == &g_2) ? 1 : 0), __extension__ ({ if (g_53 == &g_2) ; else __assert_fail ("g_53 == &g_2", "/tmp/tmpbi86tzyg.c", 378, __extension__ __PRETTY_FUNCTION__); }));
    return (*l_689);
}
static uint8_t func_36(uint16_t p_37, int32_t * p_38, uint16_t p_39)
{
    int32_t *l_508 = (void*)0;
    int32_t ****l_522 = (void*)0;
    int8_t ***l_607 = &g_198;
    int8_t ****l_606 = &l_607;
    uint32_t ****l_687 = (void*)0;
    uint8_t **l_688 = (void*)0;
    l_508 = func_46(l_508);
    ((void) sizeof ((l_508 == &g_83 || l_508 == 0) ? 1 : 0), __extension__ ({ if (l_508 == &g_83 || l_508 == 0) ; else __assert_fail ("l_508 == &g_83 || l_508 == 0", "/tmp/tmpbi86tzyg.c", 398, __extension__ __PRETTY_FUNCTION__); }));
    for (g_256 = (-24); (g_256 > 29); g_256 = safe_add_func_uint32_t_u_u(g_256, 6))
    {
        return g_256;
    }
    for (g_83 = (-21); (g_83 < 23); g_83 = safe_add_func_uint16_t_u_u(g_83, 3))
    {
        int16_t **l_518 = &g_226;
        int32_t ****l_528 = &g_527;
        uint32_t ****l_530 = &g_453;
        uint8_t *l_561 = &g_507;
        int32_t l_568 = 0;
        int32_t *l_647 = &g_594;
        (*p_38) = 0xFFA1354D;
        for (p_39 = 0; (p_39 <= 21); p_39++)
        {
            int16_t ***l_519 = &l_518;
            int32_t *****l_523 = (void*)0;
            int32_t *****l_524 = (void*)0;
            int32_t *****l_525 = &l_522;
            uint16_t *l_529 = &g_79;
            uint32_t ****l_531 = &g_453;
            uint8_t *l_558 = &g_507;
            int32_t l_603 = 0x7491A237;
            int8_t ****l_608 = (void*)0;
            p_38 = p_38;
            for (g_2 = 0; (g_2 >= 1); g_2 = safe_add_func_uint8_t_u_u(g_2, 5))
            {
                (*g_404) = ((*g_226) >= (*g_131));
                (*p_38) = g_517;
            }
            (*l_519) = l_518;
        }
        (*g_404) = (*p_38);
        return (*l_647);
    }
    return p_39;
}
inline static int16_t func_40(int16_t p_41)
{
    int32_t *l_368 = &g_83;
    int32_t l_401 = 0xF7E247BF;
    uint32_t **l_430 = (void*)0;
    int8_t l_432 = 0x5D;
    int32_t ***l_437 = (void*)0;
    int32_t ****l_436 = &l_437;
    int32_t *l_464 = &g_15;
    int8_t **l_478 = (void*)0;
    uint8_t *l_504 = &g_193;
    uint8_t *l_505 = (void*)0;
    uint8_t *l_506 = &g_507;
    for (g_239 = 0; (g_239 >= 54); ++g_239)
    {
        int32_t **l_360 = &g_53;
        int32_t ***l_359 = &l_360;
        int32_t ***l_384 = &l_360;
        uint8_t *l_385 = &g_193;
        uint32_t *l_438 = &g_2;
        uint32_t *****l_495 = &g_494;
    }
    (*l_368) = ((0xDED5E2A7 && (safe_add_func_uint32_t_u_u((+((*g_131) = (safe_sub_func_uint8_t_u_u(((*l_506) = ((*l_504) = p_41)), (&g_443 == &g_443))))), 8))) & ((*l_436) == &g_443));
    l_478 = l_478;
    return p_41;
}
static int32_t * func_46(int32_t * p_47)
{
    int32_t l_60 = 0x15ED761E;
    int32_t *l_77 = (void*)0;
    int32_t **l_76 = &l_77;
    uint16_t *l_78 = &g_79;
    int32_t *l_82 = &g_83;
    uint32_t l_84 = 7U;
    int32_t l_143 = 0xCB066DBB;
    uint8_t l_164 = 0U;
    int8_t *l_171 = &g_145;
    uint32_t l_219 = 4294967295U;
    uint32_t l_255 = 0x51EC3C31;
    int8_t l_268 = 2;
    uint8_t l_292 = 255U;
    uint32_t *l_336 = &g_2;
    uint32_t **l_335 = &l_336;
    uint32_t ***l_337 = &l_335;
    if (func_49(g_53, ((safe_unary_minus_func_int16_t_s((safe_unary_minus_func_uint8_t_u((safe_div_func_int32_t_s_s((safe_add_func_int8_t_s_s((l_60 <= (safe_sub_func_uint8_t_u_u((safe_unary_minus_func_int8_t_s((g_2 < (((((safe_mod_func_uint32_t_u_u(((safe_lshift_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(((safe_rshift_func_int16_t_s_u(((safe_lshift_func_uint16_t_u_s(((*l_78) = (((*l_76) = g_53) != (void*)0)), 6)) != (l_60 <= 0x82)), (safe_div_func_int32_t_s_s(((*l_82) = ((((void*)0 == g_53) | g_2) >= l_60)), l_84)))) >= g_2), 0x71C2AA0B)), g_2)), g_2)) > g_2), 1)) <= 1) ^ g_2) || g_2) != l_60)))), 0x8E))), 0x37)), g_2)))))) ^ g_2), g_2))
    {
        for (g_79 = 25; (g_79 <= 4); g_79 = safe_sub_func_uint16_t_u_u(g_79, 9))
        {
            for (g_96 = (-24); (g_96 > 18); g_96 = safe_add_func_int16_t_s_s(g_96, 1))
            {
                int32_t l_119 = (-6);
                (*l_76) = p_47;
                ((void) sizeof ((l_77 == 0 || l_77 == &g_83 || l_77 == &g_349 || l_77 == &g_15 || l_77 == &g_2) ? 1 : 0), __extension__ ({ if (l_77 == 0 || l_77 == &g_83 || l_77 == &g_349 || l_77 == &g_15 || l_77 == &g_2) ; else __assert_fail ("l_77 == 0 || l_77 == &g_83 || l_77 == &g_349 || l_77 == &g_15 || l_77 == &g_2", "/tmp/tmpbi86tzyg.c", 503, __extension__ __PRETTY_FUNCTION__); }));
                (*l_82) = (safe_div_func_uint32_t_u_u(l_119, 0xB5B285EF));
            }
        }
        g_83 = (safe_sub_func_uint32_t_u_u(4294967286U, ((+(*l_82)) == ((g_96 != (l_78 == l_78)) >= g_96))));
    }
    else
    {
        uint8_t l_123 = 0xFE;
        uint16_t *l_129 = (void*)0;
        uint16_t **l_130 = &l_129;
        int32_t l_137 = (-1);
        int16_t *l_138 = &g_139;
        int8_t *l_144 = &g_145;
        uint8_t l_178 = 0xAF;
        (*l_82) = ((255U && (l_123 && (l_123 <= ((safe_rshift_func_uint16_t_u_u((safe_unary_minus_func_int16_t_s(((*l_138) = (safe_add_func_uint16_t_u_u((((*l_78) = (l_123 || ((*l_82) == 0x7C9A86FC))) & (((((*l_130) = l_129) == g_131) >= (((safe_mod_func_int32_t_s_s((safe_mod_func_int32_t_s_s(l_123, 4294967289U)), l_137)) ^ (*l_82)) && 255U)) && l_123)), (*g_131)))))), (*g_131))) > (*l_82))))) & g_96);
        (*l_82) = (safe_rshift_func_uint16_t_u_u(7U, ((+(((*l_144) = l_143) | (safe_div_func_uint16_t_u_u(0x65D9, (safe_sub_func_uint16_t_u_u(65535U, (g_83 <= 1))))))) > (l_137 | l_123))));
        for (g_145 = 0; (g_145 >= 24); g_145++)
        {
            uint16_t *l_154 = (void*)0;
            int16_t *l_155 = &g_139;
            int32_t l_158 = 3;
            uint32_t l_159 = 0x4A4A936F;
            int32_t **l_211 = &l_77;
            uint16_t l_233 = 1U;
        }
    }
    (*l_82) = (safe_div_func_int8_t_s_s((0xE33B >= (*l_82)), (((*l_82) < (*l_82)) | ((*l_82) >= (((*g_226) = (0 != (*l_82))) || (((*l_82) | (*l_82)) > l_268))))));
    for (l_268 = 0; (l_268 >= (-27)); --l_268)
    {
        int32_t *l_272 = &l_60;
        int32_t l_289 = (-7);
        int8_t l_316 = 1;
        int16_t **l_333 = &g_226;
        (*l_82) = ((*l_82) >= (((+(**g_225)) ^ 0) & 0xD99575F5));
        l_272 = (*l_76);
        for (g_256 = 0; (g_256 > 15); g_256 = safe_add_func_uint32_t_u_u(g_256, 6))
        {
            uint32_t l_281 = 0x54A4C857;
            uint8_t *l_284 = &l_164;
            int16_t *l_290 = &g_291;
            uint8_t *l_293 = (void*)0;
            uint8_t *l_294 = &l_292;
            int32_t l_305 = 1;
            int32_t *l_317 = &l_289;
            (*l_82) = (((**g_198) && (*g_199)) ^ (safe_rshift_func_int16_t_s_u(((0U != (*g_226)) || ((*l_294) = ((((safe_rshift_func_int16_t_s_u(((*g_226) = 0xFA5D), 10)) ^ (((*l_290) = (safe_div_func_uint16_t_u_u((l_281 == (safe_lshift_func_int16_t_s_s(((g_193 = ((*l_284) = 0xCA)) == (safe_add_func_uint32_t_u_u(g_83, (safe_lshift_func_uint8_t_u_u(((g_79 <= 4294967288U) && g_132), l_289))))), g_83))), l_289))) != 0xB7A5)) != l_289) > l_292))), 11)));
            if (((*l_82) = (l_281 | (safe_add_func_int16_t_s_s((safe_rshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_s((**g_225), ((safe_mod_func_int8_t_s_s((safe_sub_func_int32_t_s_s(l_305, (safe_sub_func_int16_t_s_s(((*l_290) = ((l_305 | ((safe_lshift_func_uint8_t_u_u((*l_82), ((safe_div_func_int16_t_s_s(l_281, ((safe_lshift_func_uint16_t_u_u((0x7DDB8EC8 == 5), ((*l_78) = l_316))) & (*l_82)))) && g_79))) <= 7)) != (**g_225))), l_305)))), l_305)) <= (-1)))), 6)), l_305)))))
            {
                (*l_76) = &g_83;
                ((void) sizeof ((l_77 == &g_83) ? 1 : 0), __extension__ ({ if (l_77 == &g_83) ; else __assert_fail ("l_77 == &g_83", "/tmp/tmpbi86tzyg.c", 559, __extension__ __PRETTY_FUNCTION__); }));
                return p_47;
            }
            else
            {
                uint8_t l_334 = 0U;
                (*l_317) = ((safe_sub_func_int32_t_s_s((safe_mod_func_uint16_t_u_u((safe_unary_minus_func_int32_t_s(((*l_317) != 0U))), (*g_226))), (safe_lshift_func_int16_t_s_u((*l_317), 1)))) <= (safe_lshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_s((((-2) <= (((void*)0 == p_47) && (safe_sub_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((l_333 != &g_226), 0)), 250U)))) == l_334), 1)), (*g_199))));
            }
        }
    }
    (*l_337) = l_335;
    return &g_83;
}
static int32_t func_49(int32_t * p_50, int8_t p_51, int16_t p_52)
{
    int16_t l_85 = 4;
    int32_t l_91 = (-4);
    int32_t **l_103 = &g_53;
    int32_t ***l_102 = &l_103;
    int32_t *l_111 = &g_83;
    if (l_85)
    {
        int32_t **l_90 = (void*)0;
        int32_t ***l_89 = &l_90;
        for (g_79 = 0; (g_79 >= 38); g_79++)
        {
            int32_t **l_88 = &g_53;
            (*l_88) = p_50;
        }
        l_91 = (((*l_89) = (void*)0) == &g_53);
        p_50 = &g_83;
        ((void) sizeof ((p_50 == &g_83) ? 1 : 0), __extension__ ({ if (p_50 == &g_83) ; else __assert_fail ("p_50 == &g_83", "/tmp/tmpbi86tzyg.c", 602, __extension__ __PRETTY_FUNCTION__); }));
    }
    else
    {
        int32_t *l_97 = (void*)0;
        int32_t *l_98 = &g_83;
        int32_t **l_99 = &g_53;
        (*l_98) = (safe_sub_func_uint8_t_u_u((&g_83 == (void*)0), (safe_add_func_uint32_t_u_u(l_85, g_96))));
        (*l_99) = l_98;
        ((void) sizeof ((g_53 == &g_83) ? 1 : 0), __extension__ ({ if (g_53 == &g_83) ; else __assert_fail ("g_53 == &g_83", "/tmp/tmpbi86tzyg.c", 612, __extension__ __PRETTY_FUNCTION__); }));
    }
    for (g_83 = 0; (g_83 < (-25)); g_83 = safe_sub_func_int16_t_s_s(g_83, 1))
    {
        uint32_t l_110 = 2U;
        int32_t *l_112 = &l_91;
        (*l_112) = ((((l_102 != &l_103) && (((safe_mod_func_int16_t_s_s((4294967289U < (g_83 || (((p_52 >= g_2) ^ ((safe_mod_func_int32_t_s_s(((safe_add_func_int32_t_s_s(l_110, (((l_111 != l_112) | (-7)) < g_2))) >= 0), 5)) || (*l_111))) || g_96))), g_79)) > 247U) == (*l_112))) != 1U) > (*l_112));
    }
    return p_52;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_2;
    csmith_sink_ = g_15;
    csmith_sink_ = g_79;
    csmith_sink_ = g_83;
    csmith_sink_ = g_96;
    csmith_sink_ = g_132;
    csmith_sink_ = g_139;
    csmith_sink_ = g_145;
    csmith_sink_ = g_173;
    csmith_sink_ = g_174;
    csmith_sink_ = g_193;
    csmith_sink_ = g_239;
    csmith_sink_ = g_256;
    csmith_sink_ = g_291;
    csmith_sink_ = g_344;
    csmith_sink_ = g_349;
    csmith_sink_ = g_507;
    csmith_sink_ = g_517;
    csmith_sink_ = g_594;
    csmith_sink_ = g_684;
    csmith_sink_ = g_686;
    csmith_sink_ = g_829;
    csmith_sink_ = g_914;
    platform_main_end(0,0);
    return 0;
}
