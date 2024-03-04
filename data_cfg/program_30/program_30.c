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
static uint32_t g_3 = 0U;
static int32_t g_4[9] = {5, 0x398070AD, 5, 0x398070AD, 5, 0x398070AD, 5, 0x398070AD, 5};
static int32_t g_68 = 1;
static int32_t g_72 = 0x9199ED18;
static int8_t g_73 = 0x34;
static uint32_t g_135[10][1][3] = {{{0xBFF0AA60, 0xBFF0AA60, 1U}}, {{0xBFF0AA60, 0xBFF0AA60, 1U}}, {{0xBFF0AA60, 0xBFF0AA60, 1U}}, {{0xBFF0AA60, 0xBFF0AA60, 1U}}, {{0xBFF0AA60, 0xBFF0AA60, 1U}}, {{0xBFF0AA60, 0xBFF0AA60, 1U}}, {{0xBFF0AA60, 0xBFF0AA60, 1U}}, {{0xBFF0AA60, 0xBFF0AA60, 1U}}, {{0xBFF0AA60, 0xBFF0AA60, 1U}}, {{0xBFF0AA60, 0xBFF0AA60, 1U}}};
static int16_t g_167 = 0xE7FF;
static uint16_t g_195 = 0x2619;
static int32_t g_225 = 5;
static uint32_t g_228 = 0x7C5A96FC;
static uint32_t g_339 = 0U;
static uint8_t g_340[6] = {3U, 3U, 0x31, 3U, 3U, 0x31};
static uint8_t g_383 = 0x4B;
static uint32_t g_389 = 4294967290U;
static int32_t g_478[3] = {0, 0, 0};
static int16_t g_511 = 1;
inline static int32_t func_1(void);
static const int32_t func_5(int8_t p_6, int32_t p_7, int32_t p_8);
static int16_t func_13(uint16_t p_14, int32_t p_15);
inline static uint8_t func_22(uint32_t p_23, uint8_t p_24);
inline static uint16_t func_27(int8_t p_28, int16_t p_29);
static uint32_t func_32(const int32_t p_33, uint8_t p_34);
inline static uint16_t func_37(int32_t p_38, int16_t p_39, int32_t p_40, uint32_t p_41);
inline static int32_t func_46(int16_t p_47, int8_t p_48, uint16_t p_49);
static const int8_t func_53(const int32_t p_54);
static int16_t func_57(int32_t p_58, int8_t p_59, int32_t p_60, int32_t p_61, int32_t p_62);
inline static int32_t func_1(void)
{
    uint32_t l_2 = 4294967295U;
    int32_t l_141 = (-9);
    int8_t l_871 = 1;
    g_3 = l_2;
    for (g_3 = 0; (g_3 <= 8); g_3 += 1)
    {
        int32_t l_9 = 8;
        uint32_t l_10 = 4294967286U;
        int i;
        g_4[g_3] = func_5(g_4[g_3], (l_10 = (l_9 = 0xC39BA095)), (safe_add_func_int16_t_s_s(g_4[0], (((func_13((safe_mod_func_uint16_t_u_u(((safe_sub_func_uint32_t_u_u(((func_22(((safe_rshift_func_uint16_t_u_u((l_141 = func_27(g_4[3], (g_135[2][0][2] = (((g_4[g_3] <= (safe_sub_func_uint32_t_u_u(func_32((safe_lshift_func_uint16_t_u_s((func_37(g_4[g_3], g_4[5], (l_2 >= 0), g_3) != g_4[5]), 12)), g_4[8]), g_4[2]))) > 0) | g_4[5])))), 14)) >= l_2), g_4[5]) || 0U) == g_4[4]), (-4))) >= g_4[g_3]), l_2)), g_3) <= l_871) && l_141) & g_4[g_3]))));
        if (g_4[g_3])
            break;
        if (g_72)
            break;
    }
    return g_72;
}
static const int32_t func_5(int8_t p_6, int32_t p_7, int32_t p_8)
{
    int8_t l_873[1];
    int i;
    for (i = 0; i < 1; i++)
        l_873[i] = 0xD2;
    l_873[0] = (safe_unary_minus_func_int8_t_s(((-1) | 0xE1DA)));
    return l_873[0];
}
static int16_t func_13(uint16_t p_14, int32_t p_15)
{
    int8_t l_173 = 0;
    uint16_t l_190 = 0xF159;
    int32_t l_191 = 4;
    uint32_t l_192[6][9] = {{1U, 0x79426CD9, 3U, 0x79426CD9, 1U, 0xE52F1CB2, 1U, 0x79426CD9, 3U}, {1U, 0x79426CD9, 3U, 0x79426CD9, 1U, 0xE52F1CB2, 1U, 0x79426CD9, 3U}, {1U, 0x79426CD9, 3U, 0x79426CD9, 1U, 0xE52F1CB2, 1U, 0x79426CD9, 3U}, {1U, 0x79426CD9, 3U, 0x79426CD9, 1U, 0xE52F1CB2, 1U, 0x79426CD9, 3U}, {1U, 0x79426CD9, 3U, 0x79426CD9, 1U, 0xE52F1CB2, 1U, 0x79426CD9, 3U}, {1U, 0x79426CD9, 3U, 0x79426CD9, 1U, 0xE52F1CB2, 1U, 0x79426CD9, 3U}};
    uint32_t l_267 = 0x723124B1;
    int32_t l_350 = 0x955F4E3B;
    uint16_t l_366[7] = {65535U, 65535U, 0xC52C, 65535U, 65535U, 0xC52C, 65535U};
    uint32_t l_417 = 0x47ECD37A;
    uint16_t l_419 = 0xDF10;
    int32_t l_499 = 5;
    int32_t l_513 = (-2);
    uint8_t l_522 = 255U;
    int32_t l_585[1];
    int16_t l_611 = 8;
    uint32_t l_673 = 4294967291U;
    uint8_t l_868 = 1U;
    uint8_t l_870[8] = {1U, 1U, 253U, 1U, 1U, 253U, 1U, 1U};
    int i, j;
    for (i = 0; i < 1; i++)
        l_585[i] = (-4);
    if ((g_72 = (safe_mod_func_int32_t_s_s((((safe_add_func_int16_t_s_s(0, 0U)) > l_173) > ((safe_lshift_func_uint8_t_u_s((((g_68 != l_173) || (0x370918AE == (((+(safe_mod_func_int16_t_s_s((safe_mul_func_int8_t_s_s(((((safe_add_func_uint16_t_u_u((l_191 = (((((safe_unary_minus_func_int16_t_s((safe_rshift_func_uint16_t_u_s((((g_167 = ((1 & ((((safe_sub_func_uint8_t_u_u((((safe_add_func_uint16_t_u_u(l_190, (1 >= p_15))) | g_3) > 0), p_15)) == g_4[0]) <= l_190) >= g_73)) < 0xC5)) && l_190) != 0x2C), 0)))) <= l_173) & 0xA289) || g_68) <= p_15)), l_192[5][8])) < p_14) ^ p_15) >= 0x41), g_135[2][0][2])), g_68))) || 0x2C9C021E) && p_14))) >= p_14), 7)) > (-6))), (-1)))))
    {
        int16_t l_209 = (-1);
        int32_t l_266 = 0xC1B5C86E;
        int32_t l_290 = 0x3D69D35C;
        int32_t l_291[4];
        uint32_t l_396 = 0xF36A349A;
        uint16_t l_418 = 65535U;
        uint16_t l_512[5];
        int i;
        for (i = 0; i < 4; i++)
            l_291[i] = 0x8FE965C8;
        for (i = 0; i < 5; i++)
            l_512[i] = 0x8A86;
        if (((safe_lshift_func_uint16_t_u_s(l_190, 5)) >= 0x8D885D17))
        {
            return g_135[3][0][2];
        }
        else
        {
            int32_t l_210 = 0x3FE1AB33;
            int32_t l_367 = 0x5E7C90FF;
            int32_t l_423 = 0x654F21E3;
            int32_t l_431 = 0xE405D193;
            g_72 = ((g_73 >= g_73) < (g_135[2][0][2] < (((g_195 = p_15) <= 0x89) ^ ((safe_add_func_int8_t_s_s((+((p_15 | ((safe_rshift_func_uint8_t_u_u(((p_14 || (safe_add_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(l_209, (g_135[2][0][2] || l_192[5][8]))), p_15)), g_73)), p_15))) < l_210), p_15)) ^ p_14)) || 65529U)), 255U)) ^ g_135[1][0][1]))));
            for (g_68 = 0; (g_68 <= 0); g_68 += 1)
            {
                const uint32_t l_229 = 0x3844FDB9;
                int32_t l_230 = 0x2C2485C8;
                uint32_t l_246[3][7] = {{0xCFDD99D9, 0xCFDD99D9, 4294967295U, 1U, 0x1CCF118B, 1U, 4294967295U}, {0xCFDD99D9, 0xCFDD99D9, 4294967295U, 1U, 0x1CCF118B, 1U, 4294967295U}, {0xCFDD99D9, 0xCFDD99D9, 4294967295U, 1U, 0x1CCF118B, 1U, 4294967295U}};
                uint8_t l_450 = 9U;
                int i, j;
                l_230 = (p_15 = (((safe_add_func_int16_t_s_s((g_73 > l_190), (g_135[2][0][2] && (safe_unary_minus_func_uint8_t_u((l_192[5][4] ^ ((+(((((safe_lshift_func_int16_t_s_u((((safe_add_func_uint32_t_u_u((safe_sub_func_int16_t_s_s((safe_add_func_int16_t_s_s((((g_228 = (safe_lshift_func_uint16_t_u_s(((p_14 & (0U | g_225)) < ((l_191 = l_209) != ((safe_lshift_func_int16_t_s_u((g_72 ^ p_15), 14)) | 2))), 3))) != g_73) > 0x8F), 0x40FC)), 0x3135)), p_14)) ^ 0x00) || l_229), g_167)) != g_135[2][0][2]) < l_210) >= p_15) ^ p_14)) && 0U))))))) && (-1)) == g_135[8][0][2]));
                if ((g_225 = p_14))
                {
                    uint32_t l_233 = 1U;
                    int32_t l_234 = 0x08536953;
                    if ((safe_lshift_func_uint16_t_u_s(((((g_135[2][0][2] = (((p_14 || (l_233 = l_209)) ^ l_234) ^ 4294967295U)) >= g_3) < (l_209 != ((safe_rshift_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((((((g_167 || (safe_add_func_int32_t_s_s(((((~((((safe_lshift_func_int8_t_s_s((safe_sub_func_int16_t_s_s(l_209, 1)), g_68)) | l_192[5][8]) & (-7)) || g_73)) ^ g_3) >= l_210) || p_14), l_234))) | l_246[1][2]) & (-1)) >= 1U) >= p_15), p_15)), p_14)) & p_15))) != 0x726D), l_209)))
                    {
                        int32_t l_264 = 0x366D9D4B;
                        int32_t l_265 = 9;
                        g_225 = (~(safe_rshift_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_s(0x9E0C, (safe_lshift_func_int16_t_s_s(0x9236, 8)))) <= 255U), 5)));
                        l_267 = (((((l_266 = (0x4C7829F0 > (l_234 = (safe_rshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_u((((l_210 >= (g_68 && ((l_265 = (((safe_rshift_func_int8_t_s_s(p_15, 7)) == l_209) <= ((g_135[3][0][0] <= p_14) <= (safe_mul_func_uint8_t_u_u(((~((((safe_unary_minus_func_uint8_t_u((l_191 = ((g_225 >= (l_264 = ((((p_14 > l_210) < l_192[5][8]) < 0xDE2A) < (-1)))) == g_225)))) >= g_68) && p_15) < p_15)) == g_225), p_14))))) == 0x66))) != p_15) < g_135[2][0][2]), g_167)), p_14))))) >= g_68) < 65535U) ^ p_14) >= p_14);
                        l_291[0] = ((safe_rshift_func_uint16_t_u_s((g_68 || p_14), 6)) | (safe_mul_func_int16_t_s_s(((safe_sub_func_uint32_t_u_u((!(l_234 >= ((((l_290 = (safe_add_func_uint32_t_u_u(((((safe_add_func_int8_t_s_s((safe_unary_minus_func_uint32_t_u((safe_rshift_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((0x844AFDE6 ^ (safe_mul_func_int16_t_s_s(l_230, (((l_266 = g_68) || (safe_mod_func_int8_t_s_s(3, (safe_add_func_int16_t_s_s((((g_3 != 7U) < g_72) ^ l_209), g_135[2][0][2]))))) > g_167)))), l_230)), g_167)))), l_192[3][7])) && g_225) != 0xC32A7BFF) ^ 0x21393EBF), 0xB63680A1))) & l_265) == l_210) <= 6))), 1U)) | l_230), 0xA459)));
                    }
                    else
                    {
                        uint32_t l_318[7][9][4] = {{{0xD0BA7A7D, 0xAE544DAC, 0x80A167A7, 0xE18812C0}, {0xD0BA7A7D, 0xAE544DAC, 0x80A167A7, 0xE18812C0}, {0xD0BA7A7D, 0xAE544DAC, 0x80A167A7, 0xE18812C0}, {0xD0BA7A7D, 0xAE544DAC, 0x80A167A7, 0xE18812C0}, {0xD0BA7A7D, 0xAE544DAC, 0x80A167A7, 0xE18812C0}, {0xD0BA7A7D, 0xAE544DAC, 0x80A167A7, 0xE18812C0}, {0xD0BA7A7D, 0xAE544DAC, 0x80A167A7, 0xE18812C0}, {0xD0BA7A7D, 0xAE544DAC, 0x80A167A7, 0xE18812C0}, {0xD0BA7A7D, 0xAE544DAC, 0x80A167A7, 0xE18812C0}}, {{0xD0BA7A7D, 0xAE544DAC, 0x80A167A7, 0xE18812C0}, {0xD0BA7A7D, 0xAE544DAC, 0x80A167A7, 0xE18812C0}, {0xD0BA7A7D, 0xAE544DAC, 0x80A167A7, 0xE18812C0}, {0xD0BA7A7D, 0xAE544DAC, 0x80A167A7, 0xE18812C0}, {0xD0BA7A7D, 0xAE544DAC, 0x80A167A7, 0xE18812C0}, {0xD0BA7A7D, 0xAE544DAC, 0x80A167A7, 0xE18812C0}, {0xD0BA7A7D, 0xAE544DAC, 0x80A167A7, 0xE18812C0}, {0xD0BA7A7D, 0xAE544DAC, 0x80A167A7, 0xE18812C0}, {0xD0BA7A7D, 0xAE544DAC, 0x80A167A7, 0xE18812C0}}, {{0xD0BA7A7D, 0xAE544DAC, 0x80A167A7, 0xE18812C0}, {0xD0BA7A7D, 0xAE544DAC, 0x80A167A7, 0xE18812C0}, {0xD0BA7A7D, 0xAE544DAC, 0x80A167A7, 0xE18812C0}, {0xD0BA7A7D, 0xAE544DAC, 0x80A167A7, 0xE18812C0}, {0xD0BA7A7D, 0xAE544DAC, 0x80A167A7, 0xE18812C0}, {0xD0BA7A7D, 0xAE544DAC, 0x80A167A7, 0xE18812C0}, {0xD0BA7A7D, 0xAE544DAC, 0x80A167A7, 0xE18812C0}, {0xD0BA7A7D, 0xAE544DAC, 0x80A167A7, 0xE18812C0}, {0xD0BA7A7D, 0xAE544DAC, 0x80A167A7, 0xE18812C0}}, {{0xD0BA7A7D, 0xAE544DAC, 0x80A167A7, 0xE18812C0}, {0xD0BA7A7D, 0xAE544DAC, 0x80A167A7, 0xE18812C0}, {0xD0BA7A7D, 0xAE544DAC, 0x80A167A7, 0xE18812C0}, {0xD0BA7A7D, 0xAE544DAC, 0x80A167A7, 0xE18812C0}, {0xD0BA7A7D, 0xAE544DAC, 0x80A167A7, 0xE18812C0}, {0xD0BA7A7D, 0xAE544DAC, 0x80A167A7, 0xE18812C0}, {0xD0BA7A7D, 0xAE544DAC, 0x80A167A7, 0xE18812C0}, {0xD0BA7A7D, 0xAE544DAC, 0x80A167A7, 0xE18812C0}, {0xD0BA7A7D, 0xAE544DAC, 0x80A167A7, 0xE18812C0}}, {{0xD0BA7A7D, 0xAE544DAC, 0x80A167A7, 0xE18812C0}, {0xD0BA7A7D, 0xAE544DAC, 0x80A167A7, 0xE18812C0}, {0xD0BA7A7D, 0xAE544DAC, 0x80A167A7, 0xE18812C0}, {0xD0BA7A7D, 0xAE544DAC, 0x80A167A7, 0xE18812C0}, {0xD0BA7A7D, 0xAE544DAC, 0x80A167A7, 0xE18812C0}, {0xD0BA7A7D, 0xAE544DAC, 0x80A167A7, 0xE18812C0}, {0xD0BA7A7D, 0xAE544DAC, 0x80A167A7, 0xE18812C0}, {0xD0BA7A7D, 0xAE544DAC, 0x80A167A7, 0xE18812C0}, {0xD0BA7A7D, 0xAE544DAC, 0x80A167A7, 0xE18812C0}}, {{0xD0BA7A7D, 0xAE544DAC, 0x80A167A7, 0xE18812C0}, {0xD0BA7A7D, 0xAE544DAC, 0x80A167A7, 0xE18812C0}, {0xD0BA7A7D, 0xAE544DAC, 0x80A167A7, 0xE18812C0}, {0xD0BA7A7D, 0xAE544DAC, 0x80A167A7, 0xE18812C0}, {0xD0BA7A7D, 0xAE544DAC, 0x80A167A7, 0xE18812C0}, {0xD0BA7A7D, 0xAE544DAC, 0x80A167A7, 0xE18812C0}, {0xD0BA7A7D, 0xAE544DAC, 0x80A167A7, 0xE18812C0}, {0xD0BA7A7D, 0xAE544DAC, 0x80A167A7, 0xE18812C0}, {0xD0BA7A7D, 0xAE544DAC, 0x80A167A7, 0xE18812C0}}, {{0xD0BA7A7D, 0xAE544DAC, 0x80A167A7, 0xE18812C0}, {0xD0BA7A7D, 0xAE544DAC, 0x80A167A7, 0xE18812C0}, {0xD0BA7A7D, 0xAE544DAC, 0x80A167A7, 0xE18812C0}, {0xD0BA7A7D, 0xAE544DAC, 0x80A167A7, 0xE18812C0}, {0xD0BA7A7D, 0xAE544DAC, 0x80A167A7, 0xE18812C0}, {0xD0BA7A7D, 0xAE544DAC, 0x80A167A7, 0xE18812C0}, {0xD0BA7A7D, 0xAE544DAC, 0x80A167A7, 0xE18812C0}, {0xD0BA7A7D, 0xAE544DAC, 0x80A167A7, 0xE18812C0}, {0xD0BA7A7D, 0xAE544DAC, 0x80A167A7, 0xE18812C0}}};
                        int32_t l_319 = 0xA1B66CBA;
                        int16_t l_320 = 6;
                        int i, j, k;
                        g_72 = (0x1316 & p_14);
                        p_15 = (((((!(((safe_mul_func_uint8_t_u_u(g_135[4][0][2], ((~((l_291[0] = (safe_add_func_int8_t_s_s((safe_mul_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(((g_228 == (((safe_mod_func_uint16_t_u_u((((safe_sub_func_uint32_t_u_u(((l_192[3][4] >= p_14) | (((safe_rshift_func_uint16_t_u_s((l_319 = (safe_lshift_func_uint16_t_u_u((((l_230 || ((safe_mul_func_uint8_t_u_u((((safe_mod_func_uint16_t_u_u((p_15 == 0xFC), ((((g_4[2] & ((safe_lshift_func_uint8_t_u_u((((l_191 = (g_68 | l_318[6][4][0])) < p_14) && 0x06), p_14)) || g_225)) == 0) == l_229) ^ (-2)))) <= p_15) & l_318[6][4][0]), p_14)) && l_173)) < g_72) || g_195), 0))), 13)) == p_15) != l_320)), 0x037B79DA)) == l_233) != p_15), 0xF003)) & 0xFCE7) == l_233)) >= (-7)), 5)), p_15)), p_15))) && p_15)) || g_167))) == (-5)) == g_4[7])) == (-9)) != l_190) != 0U) | 0x111D3FE6);
                    }
                }
                else
                {
                    uint32_t l_341 = 0x6231FCB9;
                    if ((0x5BEF || 0x76AC))
                    {
                        l_341 = ((l_190 < g_135[2][0][2]) >= (safe_sub_func_int16_t_s_s((safe_unary_minus_func_uint32_t_u((+((+(+(0x4D && ((l_230 | (safe_rshift_func_uint16_t_u_s((!g_135[2][0][2]), (!(safe_add_func_int32_t_s_s((safe_mul_func_int8_t_s_s(g_4[3], g_68)), (safe_lshift_func_int8_t_s_u((g_340[2] = ((((g_225 == (g_73 = (safe_sub_func_int8_t_s_s((p_14 < 0xC063), p_15)))) & 0x04) != g_3) >= g_339)), 7)))))))) >= 1U)))) != g_225)))), p_15)));
                        p_15 = 0xD4A889A8;
                    }
                    else
                    {
                        int8_t l_342 = 1;
                        int32_t l_368 = 5;
                        uint16_t l_380 = 0x1DC1;
                        g_72 = (l_342 = 0x676AEA6E);
                        l_367 = (safe_sub_func_uint8_t_u_u(((+((g_340[2] && ((safe_lshift_func_uint8_t_u_u((l_350 = (safe_rshift_func_uint8_t_u_s((l_191 = 0x82), 1))), l_267)) || l_291[2])) | ((-10) <= (safe_add_func_int8_t_s_s(p_15, (p_15 && ((safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_s(((safe_sub_func_int16_t_s_s(((safe_sub_func_int32_t_s_s((((~(safe_mul_func_uint16_t_u_u((g_72 ^ ((safe_lshift_func_uint8_t_u_u((p_15 != l_210), l_366[3])) < g_225)), g_4[6]))) == l_341) > g_228), g_4[7])) && p_15), 0xE037)) | l_342), 2)), l_366[0])) > g_135[6][0][0]))))))) | l_229), l_366[4]));
                        l_368 = 0x57A78FE8;
                        p_15 = (safe_sub_func_int32_t_s_s((safe_add_func_int8_t_s_s(g_72, (g_340[2] = (safe_mul_func_uint16_t_u_u(((p_14 || ((p_14 || (65529U >= (!((l_229 && ((safe_add_func_int8_t_s_s((p_15 ^ (safe_mul_func_uint16_t_u_u((g_73 <= g_339), (p_15 >= l_380)))), g_228)) == p_14)) > 65533U)))) & (-2))) <= l_341), l_291[0]))))), l_210));
                    }
                }
                l_230 = ((safe_mod_func_uint8_t_u_u(((g_383 = (g_167 = l_291[0])) & ((safe_sub_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(0x09C6, ((p_15 | (!(l_210 != g_389))) == g_389))), ((l_350 = (((safe_rshift_func_uint16_t_u_u((((safe_lshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_s(p_15, 11)), 13)) & ((g_389 != l_396) != g_195)) || g_339), g_195)) | p_14) ^ p_14)) > l_290))) > 0x0623)), p_15)) ^ p_14);
                if (l_366[5])
                    break;
                for (p_15 = 0; (p_15 >= 0); p_15 -= 1)
                {
                    uint32_t l_400 = 4294967295U;
                    int32_t l_420[5];
                    uint8_t l_463 = 0x68;
                    int i;
                    for (i = 0; i < 5; i++)
                        l_420[i] = 8;
                    if (g_135[2][0][2])
                        break;
                    for (l_267 = 1; (l_267 <= 5); l_267 += 1)
                    {
                        int i, j, k;
                        l_420[1] = ((+g_135[(l_267 + 1)][p_15][(g_68 + 2)]) ^ (safe_mod_func_uint16_t_u_u(l_400, (safe_mod_func_int32_t_s_s(((l_230 = (l_350 >= (safe_mod_func_int8_t_s_s((l_418 = (safe_rshift_func_uint16_t_u_s((safe_mul_func_int8_t_s_s(((g_195 = ((((-1) & (safe_mul_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(g_135[4][0][0], (((safe_mod_func_uint32_t_u_u((+(l_291[3] = (l_367 <= (((-1) >= g_73) | (~0x6D9C06BD))))), l_267)) >= l_417) | l_367))), l_417))) && g_135[(l_267 + 1)][p_15][(g_68 + 2)]) >= g_135[2][0][2])) < 5), l_173)), p_15))), l_419)))) != l_400), g_228)))));
                        if (l_367)
                            continue;
                        l_423 = (l_367 = ((-5) > ((l_367 <= ((0x64C719AA | 0xC0BA9720) == ((safe_lshift_func_uint16_t_u_u((l_230 = p_15), (0x9C & (g_135[(l_267 + 1)][p_15][(g_68 + 2)] ^ g_340[1])))) == (((p_15 < l_367) > p_15) && g_4[5])))) || 2U)));
                        l_191 = (safe_mod_func_int16_t_s_s(((safe_mul_func_int16_t_s_s(g_340[2], (((~g_195) < p_14) > ((255U <= ((p_15 || 0x4B0F) <= 0xB279)) != (safe_mod_func_uint16_t_u_u(((l_350 = g_340[2]) < g_135[(l_267 + 1)][p_15][(g_68 + 2)]), 1)))))) <= 0x3834), p_15));
                    }
                    for (l_396 = 0; (l_396 <= 0); l_396 += 1)
                    {
                        int32_t l_491 = 0xC0C862F9;
                        int i, j, k;
                        l_266 = (0xA7 < (g_135[(g_68 + 7)][g_68][(g_68 + 1)] | (((p_15 ^ l_431) ^ (((((((safe_mod_func_int32_t_s_s(0x7D9F95C7, l_423)) != ((((safe_sub_func_uint16_t_u_u((0 > (safe_mul_func_int8_t_s_s((p_14 < (safe_mul_func_uint8_t_u_u(g_135[(g_68 + 7)][g_68][(g_68 + 1)], g_228))), l_246[1][0]))), 0x14D5)) != g_73) != 9) != 0x1B)) ^ 6) | g_72) || 0x46CAE3DA) | g_72) != g_135[1][0][0])) > p_15)));
                        l_230 = ((safe_mul_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(g_135[(g_68 + 7)][g_68][(g_68 + 1)], (((l_463 = ((safe_sub_func_int16_t_s_s((p_14 ^ ((((safe_mod_func_uint16_t_u_u(((((((safe_rshift_func_int16_t_s_u(l_450, ((p_15 <= (((safe_sub_func_int16_t_s_s((safe_mod_func_int32_t_s_s((safe_sub_func_int16_t_s_s((1 > p_15), (safe_lshift_func_int16_t_s_u(p_15, 1)))), (safe_mul_func_uint16_t_u_u(3U, ((safe_lshift_func_int8_t_s_s(((l_291[0] = l_450) & p_15), g_225)) != l_190))))), p_14)) <= g_339) <= g_339)) | 0x49))) != 0xC234) | 0U) && p_15) <= g_340[2]) < 0xC1104DD7), p_14)) != p_15) | l_450) != 255U)), p_15)) > g_167)) & 0U) || l_246[0][2]))), 0U)) != 0x15963163);
                        if (p_14)
                            continue;
                        l_367 = (g_383 <= (((safe_mod_func_uint8_t_u_u(l_291[2], g_135[9][0][1])) | ((safe_mod_func_uint8_t_u_u((((((l_267 >= 0xBC9DA094) || (p_15 < ((safe_add_func_uint16_t_u_u((g_340[5] < ((safe_mul_func_int8_t_s_s((safe_add_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u((g_195 = ((l_423 = g_478[1]) > ((safe_mul_func_uint16_t_u_u((((g_73 = (((l_431 = ((safe_lshift_func_int16_t_s_u((safe_mul_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((l_491 = (safe_sub_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(((l_210 != g_478[1]) && 5U), p_14)), 0x9ADD))), 0xBDBA11E3)), g_4[7])), l_267)) || p_14)) && 0x5638) >= p_15)) >= g_135[2][0][2]) > g_228), 0x42A4)) != g_135[(g_68 + 1)][p_15][(p_15 + 1)]))), l_192[3][5])), 0xA6F6C273)), g_68)) <= g_135[9][0][0])), 0xF41B)) == 0xB1))) ^ p_15) || p_15) == l_209), p_15)) >= g_4[2])) != 0x016C));
                    }
                }
            }
        }
        l_513 = (safe_add_func_int8_t_s_s((((safe_add_func_uint8_t_u_u((safe_add_func_int32_t_s_s((l_499 = (+(-1))), (((safe_add_func_uint16_t_u_u((p_14 = ((l_350 = (safe_lshift_func_uint16_t_u_s(((l_291[0] = ((l_290 = (g_167 && g_383)) < 0x752A)) > (safe_sub_func_uint32_t_u_u(((((safe_add_func_int16_t_s_s((((((g_228 & ((safe_rshift_func_int16_t_s_s(0xE05A, (~(((0xF4 < g_135[6][0][2]) && (((l_191 = ((g_511 = g_225) > p_15)) && l_512[4]) >= 4U)) < l_366[3])))) & g_135[7][0][1])) != l_192[2][4]) && 0x44047B91) && g_73) >= g_3), 0x2815)) | l_396) > g_135[1][0][1]) != 0x3444), p_14))), l_417))) & p_14)), 65535U)) > l_366[3]) > p_15))), p_15)) & g_340[1]) | l_396), g_73));
    }
    else
    {
        int16_t l_523 = 8;
        int32_t l_542 = 0xCC03AC7A;
        p_15 = ((g_73 < (0xD792 <= ((safe_sub_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s(((l_191 = (l_523 = (safe_rshift_func_uint16_t_u_s((l_522 == p_15), 7)))) & ((g_4[1] || (safe_mod_func_int32_t_s_s(0xC16C75E8, (safe_lshift_func_int8_t_s_s(((safe_mod_func_uint16_t_u_u(p_14, (safe_add_func_uint8_t_u_u((((safe_mod_func_int16_t_s_s(((safe_rshift_func_int16_t_s_s((safe_mod_func_int16_t_s_s((safe_add_func_int16_t_s_s(((safe_mod_func_int16_t_s_s((l_542 > (g_340[1] = (l_513 = (safe_lshift_func_int8_t_s_s(g_225, g_383))))), 9)) < p_14), p_15)), l_542)), 15)) > p_15), 0x0851)) <= p_14) || l_192[1][6]), p_14)))) | p_15), p_15))))) | g_511)), 4)), g_3)) > 0xAC800890), 0)) < p_15))) <= 0xDE);
    }
    for (l_522 = 0; (l_522 > 56); l_522 = safe_add_func_int32_t_s_s(l_522, 1))
    {
        uint32_t l_565 = 0x3F2C7F3E;
        int32_t l_613 = 0xE0427C1C;
        int32_t l_615[4][8] = {{(-1), 1, 0xED6C0694, 0xED6C0694, 1, (-1), 1, 0xED6C0694}, {(-1), 1, 0xED6C0694, 0xED6C0694, 1, (-1), 1, 0xED6C0694}, {(-1), 1, 0xED6C0694, 0xED6C0694, 1, (-1), 1, 0xED6C0694}, {(-1), 1, 0xED6C0694, 0xED6C0694, 1, (-1), 1, 0xED6C0694}};
        int16_t l_616 = 1;
        int32_t l_664 = 0xB1DE2523;
        uint8_t l_667 = 255U;
        int32_t l_869[3][9][3] = {{{1, (-7), 0x1CEE6C72}, {1, (-7), 0x1CEE6C72}, {1, (-7), 0x1CEE6C72}, {1, (-7), 0x1CEE6C72}, {1, (-7), 0x1CEE6C72}, {1, (-7), 0x1CEE6C72}, {1, (-7), 0x1CEE6C72}, {1, (-7), 0x1CEE6C72}, {1, (-7), 0x1CEE6C72}}, {{1, (-7), 0x1CEE6C72}, {1, (-7), 0x1CEE6C72}, {1, (-7), 0x1CEE6C72}, {1, (-7), 0x1CEE6C72}, {1, (-7), 0x1CEE6C72}, {1, (-7), 0x1CEE6C72}, {1, (-7), 0x1CEE6C72}, {1, (-7), 0x1CEE6C72}, {1, (-7), 0x1CEE6C72}}, {{1, (-7), 0x1CEE6C72}, {1, (-7), 0x1CEE6C72}, {1, (-7), 0x1CEE6C72}, {1, (-7), 0x1CEE6C72}, {1, (-7), 0x1CEE6C72}, {1, (-7), 0x1CEE6C72}, {1, (-7), 0x1CEE6C72}, {1, (-7), 0x1CEE6C72}, {1, (-7), 0x1CEE6C72}}};
        int i, j, k;
        for (p_15 = 19; (p_15 <= (-20)); --p_15)
        {
            int32_t l_549 = (-6);
            l_549 = l_419;
            if (p_15)
                continue;
        }
        for (p_14 = 0; (p_14 < 39); ++p_14)
        {
            uint16_t l_564 = 5U;
            int32_t l_612 = (-6);
            int32_t l_614[5][6] = {{0, 0x230955C6, 0, 0x346B5924, 0x66DFA885, 0x27DE3356}, {0, 0x230955C6, 0, 0x346B5924, 0x66DFA885, 0x27DE3356}, {0, 0x230955C6, 0, 0x346B5924, 0x66DFA885, 0x27DE3356}, {0, 0x230955C6, 0, 0x346B5924, 0x66DFA885, 0x27DE3356}, {0, 0x230955C6, 0, 0x346B5924, 0x66DFA885, 0x27DE3356}};
            uint8_t l_772 = 6U;
            uint16_t l_863 = 65531U;
            int i, j;
            for (g_167 = 6; (g_167 >= 0); g_167 -= 1)
            {
                int32_t l_582 = 0xA43EBCED;
                int32_t l_584 = (-5);
                int32_t l_587 = 0;
                int i;
                if (l_366[g_167])
                {
                    uint32_t l_570 = 4U;
                    int32_t l_583 = 6;
                    const int16_t l_586 = 0x7158;
                    g_72 = ((safe_sub_func_int32_t_s_s((((safe_mod_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((((((safe_add_func_int16_t_s_s(((l_585[0] = ((0x2F | (safe_add_func_int16_t_s_s(l_564, l_565))) ^ ((l_584 = (l_583 = ((safe_rshift_func_int8_t_s_s((((l_582 = (safe_mod_func_uint32_t_u_u((l_565 <= (((l_570 <= 0xF1324776) || (((safe_sub_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u((safe_add_func_int16_t_s_s((l_564 < (((g_340[2] = l_564) < (((!(safe_sub_func_uint16_t_u_u(((safe_add_func_uint32_t_u_u(((((p_14 ^ 0x0D887441) || 0xA727B3C5) > l_564) != 0x13), 1U)) & p_14), 0x9325))) && p_15) ^ g_135[2][0][1])) & 1U)), l_192[5][8])), l_564)), 4U)) ^ l_366[g_167]) <= p_14)) < l_366[g_167])), l_499))) < g_228) != 255U), 0)) >= 255U))) ^ l_565))) < l_586), 0x57B2)) != g_389) ^ (-6)) || g_511) && l_586), 0xB6406CD2)), g_167)), 1U)) | 253U) > p_14), g_68)) != 0x03B3);
                    p_15 = 0x30CD26FB;
                }
                else
                {
                    for (l_173 = 2; (l_173 <= 6); l_173 += 1)
                    {
                        g_72 = p_15;
                    }
                }
                l_587 = l_587;
                g_478[1] = p_14;
            }
            if (((l_565 < (((+((((safe_rshift_func_int8_t_s_s((+p_15), ((((((l_615[3][1] = (l_565 >= (safe_add_func_int8_t_s_s(p_14, (safe_mul_func_int16_t_s_s((g_511 = p_15), (l_614[2][0] = ((l_613 = (safe_lshift_func_uint8_t_u_u((((((+(((safe_add_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_u(((safe_add_func_uint16_t_u_u(65529U, (l_612 = (((safe_lshift_func_uint16_t_u_s(((65535U && (safe_add_func_uint8_t_u_u(((((g_383 = (safe_lshift_func_uint16_t_u_s(p_14, (((0 < l_564) || 1U) >= p_15)))) <= 0x90) == p_15) != 0x2E91), p_15))) <= g_135[8][0][0]), 8)) == p_14) ^ l_611)))) ^ l_190), p_15)) | 0x0C), l_173)) > g_4[0]) & l_565)) != g_340[2]) ^ 0xE734) | p_15) >= l_565), p_15))) | g_478[0])))))))) != l_564) & g_167) < g_340[2]) | g_340[5]) > p_14))) <= l_564) >= l_564) <= g_478[0])) && l_616) <= l_191)) < l_616))
            {
                uint32_t l_651[8][8][4] = {{{0x2D28EED9, 0x17399357, 0xA38126FF, 0xA4869FFA}, {0x2D28EED9, 0x17399357, 0xA38126FF, 0xA4869FFA}, {0x2D28EED9, 0x17399357, 0xA38126FF, 0xA4869FFA}, {0x2D28EED9, 0x17399357, 0xA38126FF, 0xA4869FFA}, {0x2D28EED9, 0x17399357, 0xA38126FF, 0xA4869FFA}, {0x2D28EED9, 0x17399357, 0xA38126FF, 0xA4869FFA}, {0x2D28EED9, 0x17399357, 0xA38126FF, 0xA4869FFA}, {0x2D28EED9, 0x17399357, 0xA38126FF, 0xA4869FFA}}, {{0x2D28EED9, 0x17399357, 0xA38126FF, 0xA4869FFA}, {0x2D28EED9, 0x17399357, 0xA38126FF, 0xA4869FFA}, {0x2D28EED9, 0x17399357, 0xA38126FF, 0xA4869FFA}, {0x2D28EED9, 0x17399357, 0xA38126FF, 0xA4869FFA}, {0x2D28EED9, 0x17399357, 0xA38126FF, 0xA4869FFA}, {0x2D28EED9, 0x17399357, 0xA38126FF, 0xA4869FFA}, {0x2D28EED9, 0x17399357, 0xA38126FF, 0xA4869FFA}, {0x2D28EED9, 0x17399357, 0xA38126FF, 0xA4869FFA}}, {{0x2D28EED9, 0x17399357, 0xA38126FF, 0xA4869FFA}, {0x2D28EED9, 0x17399357, 0xA38126FF, 0xA4869FFA}, {0x2D28EED9, 0x17399357, 0xA38126FF, 0xA4869FFA}, {0x2D28EED9, 0x17399357, 0xA38126FF, 0xA4869FFA}, {0x2D28EED9, 0x17399357, 0xA38126FF, 0xA4869FFA}, {0x2D28EED9, 0x17399357, 0xA38126FF, 0xA4869FFA}, {0x2D28EED9, 0x17399357, 0xA38126FF, 0xA4869FFA}, {0x2D28EED9, 0x17399357, 0xA38126FF, 0xA4869FFA}}, {{0x2D28EED9, 0x17399357, 0xA38126FF, 0xA4869FFA}, {0x2D28EED9, 0x17399357, 0xA38126FF, 0xA4869FFA}, {0x2D28EED9, 0x17399357, 0xA38126FF, 0xA4869FFA}, {0x2D28EED9, 0x17399357, 0xA38126FF, 0xA4869FFA}, {0x2D28EED9, 0x17399357, 0xA38126FF, 0xA4869FFA}, {0x2D28EED9, 0x17399357, 0xA38126FF, 0xA4869FFA}, {0x2D28EED9, 0x17399357, 0xA38126FF, 0xA4869FFA}, {0x2D28EED9, 0x17399357, 0xA38126FF, 0xA4869FFA}}, {{0x2D28EED9, 0x17399357, 0xA38126FF, 0xA4869FFA}, {0x2D28EED9, 0x17399357, 0xA38126FF, 0xA4869FFA}, {0x2D28EED9, 0x17399357, 0xA38126FF, 0xA4869FFA}, {0x2D28EED9, 0x17399357, 0xA38126FF, 0xA4869FFA}, {0x2D28EED9, 0x17399357, 0xA38126FF, 0xA4869FFA}, {0x2D28EED9, 0x17399357, 0xA38126FF, 0xA4869FFA}, {0x2D28EED9, 0x17399357, 0xA38126FF, 0xA4869FFA}, {0x2D28EED9, 0x17399357, 0xA38126FF, 0xA4869FFA}}, {{0x2D28EED9, 0x17399357, 0xA38126FF, 0xA4869FFA}, {0x2D28EED9, 0x17399357, 0xA38126FF, 0xA4869FFA}, {0x2D28EED9, 0x17399357, 0xA38126FF, 0xA4869FFA}, {0x2D28EED9, 0x17399357, 0xA38126FF, 0xA4869FFA}, {0x2D28EED9, 0x17399357, 0xA38126FF, 0xA4869FFA}, {0x2D28EED9, 0x17399357, 0xA38126FF, 0xA4869FFA}, {0x2D28EED9, 0x17399357, 0xA38126FF, 0xA4869FFA}, {0x2D28EED9, 0x17399357, 0xA38126FF, 0xA4869FFA}}, {{0x2D28EED9, 0x17399357, 0xA38126FF, 0xA4869FFA}, {0x2D28EED9, 0x17399357, 0xA38126FF, 0xA4869FFA}, {0x2D28EED9, 0x17399357, 0xA38126FF, 0xA4869FFA}, {0x2D28EED9, 0x17399357, 0xA38126FF, 0xA4869FFA}, {0x2D28EED9, 0x17399357, 0xA38126FF, 0xA4869FFA}, {0x2D28EED9, 0x17399357, 0xA38126FF, 0xA4869FFA}, {0x2D28EED9, 0x17399357, 0xA38126FF, 0xA4869FFA}, {0x2D28EED9, 0x17399357, 0xA38126FF, 0xA4869FFA}}, {{0x2D28EED9, 0x17399357, 0xA38126FF, 0xA4869FFA}, {0x2D28EED9, 0x17399357, 0xA38126FF, 0xA4869FFA}, {0x2D28EED9, 0x17399357, 0xA38126FF, 0xA4869FFA}, {0x2D28EED9, 0x17399357, 0xA38126FF, 0xA4869FFA}, {0x2D28EED9, 0x17399357, 0xA38126FF, 0xA4869FFA}, {0x2D28EED9, 0x17399357, 0xA38126FF, 0xA4869FFA}, {0x2D28EED9, 0x17399357, 0xA38126FF, 0xA4869FFA}, {0x2D28EED9, 0x17399357, 0xA38126FF, 0xA4869FFA}}};
                int32_t l_658 = 0x146A0C74;
                int32_t l_659 = 0xDBDC7C9C;
                int32_t l_732 = 0x3C1EC72C;
                int i, j, k;
                for (l_612 = 0; (l_612 < 0); l_612 = safe_add_func_uint32_t_u_u(l_612, 3))
                {
                    g_72 = 0xEF68121B;
                    if (p_14)
                    {
                        int32_t l_652 = 1;
                        int32_t l_653[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_653[i] = (-1);
                        p_15 = ((p_15 == (((~(safe_lshift_func_uint8_t_u_s(l_614[2][1], 2))) || p_14) != g_167)) | 0x22CEEC35);
                        l_615[3][1] = g_68;
                        g_225 = (~(l_653[2] = (safe_rshift_func_int8_t_s_u(((safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(g_3, 6)), g_167)) <= (g_511 = ((l_652 = (safe_mul_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((((safe_lshift_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(0x36BC9209, ((l_350 = (safe_sub_func_int8_t_s_s((1U | g_135[2][0][2]), (safe_mod_func_uint8_t_u_u((0 <= (safe_mul_func_uint16_t_u_u(g_340[2], (safe_mul_func_uint16_t_u_u(p_15, (((safe_rshift_func_int8_t_s_s(((safe_lshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_s(g_195, 4)), g_383)) < l_651[5][4][3]), 5)) || g_339) <= 5)))))), 0xBE))))) ^ 0xA6))), 4)) != g_3) == l_614[2][0]), 0xC89E5DFC)), l_652))) < 0x94))), 0))));
                    }
                    else
                    {
                        p_15 = ((safe_lshift_func_int8_t_s_u(((1 != ((safe_mul_func_uint8_t_u_u(l_565, (l_513 = g_3))) > ((l_658 = 0xBB2F) == g_228))) & (l_191 = ((p_14 && l_614[0][4]) ^ l_585[0]))), (l_659 = g_68))) >= 252U);
                    }
                    for (g_225 = 10; (g_225 == 26); ++g_225)
                    {
                        if (p_14)
                            break;
                        p_15 = l_513;
                        l_664 = (safe_add_func_uint8_t_u_u(p_15, g_135[2][0][2]));
                        g_478[2] = (safe_mul_func_int16_t_s_s(l_667, 0x0CE4));
                    }
                    if (g_195)
                        break;
                }
                for (p_15 = 0; (p_15 >= (-1)); p_15--)
                {
                    int16_t l_672 = 0;
                    int32_t l_722[9] = {(-1), 3, (-1), 3, (-1), 3, (-1), 3, (-1)};
                    int i;
                    if (p_14)
                    {
                        int32_t l_674 = 0xCE64919B;
                        l_673 = (safe_add_func_int16_t_s_s((l_672 & (p_14 >= l_667)), (1 & (g_135[8][0][0] = l_522))));
                        l_674 = p_15;
                        l_732 = ((safe_lshift_func_int16_t_s_u(((safe_add_func_int16_t_s_s((p_15 != ((safe_lshift_func_int16_t_s_u(((g_135[0][0][2] = ((safe_mod_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((((safe_rshift_func_int8_t_s_u(((safe_add_func_int16_t_s_s((l_659 = (safe_mul_func_int16_t_s_s(l_612, ((g_383 = (((safe_unary_minus_func_uint32_t_u((safe_rshift_func_uint8_t_u_s((safe_sub_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(((l_350 = ((((0x11 == (((safe_mod_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(((safe_rshift_func_int8_t_s_u((((safe_mod_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_u(g_225, 11)) && (safe_mul_func_int16_t_s_s((safe_rshift_func_int16_t_s_u((safe_mod_func_uint32_t_u_u((l_658 = ((safe_sub_func_uint32_t_u_u((p_15 | ((safe_lshift_func_int8_t_s_u((l_722[1] = g_340[1]), 1)) <= ((l_614[2][0] = (safe_sub_func_int32_t_s_s((safe_mul_func_int16_t_s_s((safe_add_func_uint32_t_u_u((((+(safe_mul_func_uint16_t_u_u(65535U, l_267))) == (g_389 >= p_14)) > 0xFE492064), l_616)), g_228)), 0xD098C8D0))) > 1U))), 0x7C0A3751)) < 1)), 1)), 12)), p_14))), p_14)) || g_511) || l_658), 0)) == l_522), g_340[5])), g_195)) || l_722[2]) < 255U)) && p_14) >= 0) > g_195)) < 0x2A), g_3)), g_478[1])), g_225)), p_15)))) > 0) || p_15)) < l_659)))), g_195)) >= g_167), 4)) == g_478[1]) | g_478[2]), l_651[5][4][3])), g_228)) != g_72)) > l_674), 5)) > g_511)), p_15)) != g_478[1]), p_15)) || p_15);
                        l_613 = p_14;
                    }
                    else
                    {
                        uint16_t l_735[2];
                        int32_t l_736 = 0x4A824CC9;
                        int8_t l_766 = 0xE4;
                        int i;
                        for (i = 0; i < 2; i++)
                            l_735[i] = 2U;
                        l_736 = (safe_sub_func_int16_t_s_s((g_167 = 0x9D59), l_735[0]));
                        l_615[3][1] = ((!(g_135[8][0][1] || (safe_rshift_func_uint16_t_u_u((g_340[2] < (safe_mul_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(((l_722[1] = (safe_lshift_func_int16_t_s_s((g_511 >= (safe_mul_func_uint8_t_u_u(0xFA, (!(safe_mod_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((!g_478[1]), p_14)), ((safe_rshift_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((safe_mod_func_uint32_t_u_u(((l_613 = (safe_lshift_func_int16_t_s_u(((l_736 = (safe_mul_func_uint8_t_u_u((l_614[2][0] = (((safe_sub_func_int16_t_s_s(((l_766 ^ (g_195 = (safe_sub_func_int8_t_s_s((~0x0257), ((g_167 = (safe_mul_func_int16_t_s_s(g_478[2], g_68))) <= 65535U))))) || g_73), p_15)) != 0x7992C387) || l_672)), g_339))) > 0xC4), 9))) ^ g_135[2][0][2]), g_228)), g_73)), 6)) & g_135[8][0][1]))))))), 12))) < l_772), 7)), l_672))), 6)))) != (-1));
                        return p_14;
                    }
                    for (l_173 = 5; (l_173 >= 0); l_173 -= 1)
                    {
                        int i;
                        return g_340[l_173];
                    }
                    if (p_14)
                        break;
                    return g_383;
                }
                for (g_72 = 0; (g_72 == 1); g_72++)
                {
                    uint32_t l_784 = 0x40FB1418;
                    int32_t l_799 = 0x4785DC78;
                    g_478[2] = (!((safe_sub_func_int8_t_s_s(0xB7, (safe_mul_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(((((safe_lshift_func_int16_t_s_s(g_511, 15)) >= (l_784 & 3)) && (safe_mul_func_int16_t_s_s((-1), (safe_sub_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((l_350 = (safe_lshift_func_int8_t_s_u((l_799 = (((safe_lshift_func_uint16_t_u_u((g_195 = ((((safe_sub_func_uint16_t_u_u((l_615[2][0] = g_4[6]), (0 && p_14))) > (l_513 = 0x8A88)) & 0xE27B) >= g_478[1])), 6)) > 65535U) || 0xD80953FE)), g_72))), l_784)), 0)), l_191))))) && l_417), 0)), 0x80)))) > g_228));
                    return p_14;
                }
            }
            else
            {
                uint16_t l_831[2];
                int32_t l_832 = (-9);
                int i;
                for (i = 0; i < 2; i++)
                    l_831[i] = 0x6E4D;
                l_513 = ((safe_sub_func_uint8_t_u_u((l_612 = ((((safe_mod_func_uint32_t_u_u(((safe_lshift_func_uint16_t_u_u(((l_832 = (p_14 || (((safe_add_func_uint8_t_u_u(((((safe_rshift_func_int8_t_s_u((safe_mod_func_int32_t_s_s((p_15 || (~((((safe_add_func_int32_t_s_s(((safe_add_func_int16_t_s_s(((safe_rshift_func_int8_t_s_s((p_14 == g_340[2]), (safe_add_func_int32_t_s_s(g_167, (((((l_615[3][5] = (safe_rshift_func_uint16_t_u_s(((safe_mul_func_uint8_t_u_u(0x9E, p_14)) && (((safe_rshift_func_int16_t_s_s((g_225 > ((safe_lshift_func_uint16_t_u_u(l_612, p_15)) < l_615[2][5])), l_831[1])) || 0x5C) == 0xF760)), g_167))) || g_228) || (-3)) && (-5)) && g_340[3]))))) ^ p_15), g_340[5])) != p_15), 4294967295U)) != 0xF49C) > l_585[0]) | g_73))), 2U)), l_772)) != l_772) == 0x274C) || l_350), p_15)) & l_772) <= p_15))) < 255U), 15)) != l_614[1][5]), g_167)) || l_614[2][0]) <= 0x88) ^ 1)), p_15)) > l_831[0]);
            }
            for (l_191 = (-4); (l_191 >= 20); l_191 = safe_add_func_uint8_t_u_u(l_191, 1))
            {
                uint16_t l_848 = 0x4061;
                int32_t l_851 = 0x674774C4;
                p_15 = (safe_mul_func_int16_t_s_s((safe_rshift_func_int8_t_s_u(((l_513 = (p_14 | (0U & ((l_612 = p_15) ^ (l_350 = ((safe_mul_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u((((p_14 > (safe_lshift_func_uint8_t_u_u(l_615[0][2], ((g_73 = (g_511 != l_614[2][0])) <= ((safe_rshift_func_uint16_t_u_u((+(l_564 <= (((l_614[4][5] | g_228) > p_14) & l_613))), 3)) & l_848))))) && g_3) < p_15), 0U)) <= 4), p_14)) >= 0x8D)))))) < 0xEF8E), g_72)), 0x0434));
                l_613 = 9;
                for (l_673 = 0; (l_673 == 43); l_673 = safe_add_func_int32_t_s_s(l_673, 1))
                {
                    if (p_15)
                        break;
                }
                l_851 = l_190;
            }
            l_870[5] = (((safe_add_func_uint8_t_u_u((l_191 = 255U), ((safe_mod_func_int16_t_s_s(((((((safe_add_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((((g_167 = (((((safe_rshift_func_int8_t_s_u((!(g_478[1] = 0x3E6D9348)), 2)) | (l_612 <= l_863)) & g_389) <= ((((p_14 || ((((safe_add_func_uint16_t_u_u(0x93B8, ((((((safe_lshift_func_uint8_t_u_s(((l_614[4][5] | 0xFC) > 0x653B), 2)) == g_340[4]) < l_615[2][5]) || l_613) || l_565) ^ l_613))) == 0x71) >= p_14) && l_192[5][8])) == l_564) != g_167) != 0xD174)) ^ 1)) & g_195) && 0xB4), 0x1104)), l_868)) & (-10)) >= g_3) == g_72) | g_73) > 2U), 65526U)) == g_195))) >= 0x7F) >= l_869[1][3][1]);
        }
    }
    return g_135[2][0][2];
}
inline static uint8_t func_22(uint32_t p_23, uint8_t p_24)
{
    uint8_t l_148 = 255U;
    int32_t l_149 = 0x5BCF7219;
    int32_t l_158[7] = {0x6A2D9A96, 0xA799B5C0, 0x6A2D9A96, 0xA799B5C0, 0x6A2D9A96, 0xA799B5C0, 0x6A2D9A96};
    int32_t l_165 = 0x36E8D033;
    int32_t l_166 = 0x11D5598A;
    int32_t l_168 = 0x21A4FECF;
    int i;
    l_168 = (safe_mod_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s((((l_148 = (safe_add_func_uint16_t_u_u(p_24, g_73))) > (l_149 = (1U | 0xC22977FD))) < 0x1954321B), 11)), (safe_lshift_func_int16_t_s_s((safe_mul_func_int8_t_s_s((((l_166 = (((safe_sub_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_s(g_4[1], 3)) != (l_158[1] || (safe_add_func_int32_t_s_s((((safe_rshift_func_int8_t_s_s((safe_add_func_uint8_t_u_u(((((l_165 = ((-5) || g_135[0][0][2])) == g_4[6]) ^ g_68) >= p_24), l_158[1])), 3)) | p_24) & 0x2B76), g_68)))), p_23)) != 65533U) && 0x986CBD83)) >= l_158[0]) & p_24), g_167)), l_158[1]))));
    return p_24;
}
inline static uint16_t func_27(int8_t p_28, int16_t p_29)
{
    for (p_29 = (-16); (p_29 <= 26); p_29 = safe_add_func_int16_t_s_s(p_29, 5))
    {
        for (g_68 = 0; (g_68 < 11); g_68 = safe_add_func_uint32_t_u_u(g_68, 2))
        {
            int16_t l_140[3][4] = {{0xDFF4, 0xDFF4, 0x82BF, 0xDFF4}, {0xDFF4, 0xDFF4, 0x82BF, 0xDFF4}, {0xDFF4, 0xDFF4, 0x82BF, 0xDFF4}};
            int i, j;
            g_72 = l_140[1][1];
        }
    }
    return p_28;
}
static uint32_t func_32(const int32_t p_33, uint8_t p_34)
{
    g_72 = g_68;
    return p_33;
}
inline static uint16_t func_37(int32_t p_38, int16_t p_39, int32_t p_40, uint32_t p_41)
{
    int16_t l_50 = 0xD2C2;
    int32_t l_71 = (-6);
    uint32_t l_133 = 1U;
    int32_t l_134 = 0xEB90776C;
    l_134 = (safe_sub_func_int8_t_s_s((safe_mod_func_int32_t_s_s(g_4[5], ((g_3 | (func_46((l_50 ^ (safe_rshift_func_int8_t_s_s(func_53((safe_add_func_int16_t_s_s(func_57(((safe_rshift_func_int16_t_s_s(((safe_lshift_func_int16_t_s_u((safe_unary_minus_func_int16_t_s((g_68 = g_4[3]))), ((0U ^ p_40) < (((p_41 == g_4[7]) < ((g_73 = (g_72 = (safe_mod_func_uint32_t_u_u(((((l_71 = ((g_4[8] ^ g_4[6]) <= p_39)) == l_50) <= 0x9EFD) == 0x2E88), 0x86237DDC)))) & g_3)) <= l_50)))) != 4294967287U), g_4[5])) < g_3), g_4[4], l_50, p_39, l_50), l_50))), l_50))), l_50, l_50) < l_50)) && l_133))), l_50));
    return g_4[7];
}
inline static int32_t func_46(int16_t p_47, int8_t p_48, uint16_t p_49)
{
    int32_t l_107[4];
    int32_t l_118 = 0x5E3C92AC;
    int32_t l_126 = (-1);
    int32_t l_127 = (-1);
    int32_t l_128 = 0x0B76A7FF;
    int i;
    for (i = 0; i < 4; i++)
        l_107[i] = 0xE3EED797;
    for (p_47 = 3; (p_47 >= 0); p_47 -= 1)
    {
        int i;
        return l_107[p_47];
    }
    l_128 = (p_48 > (((safe_mul_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((l_127 = (l_126 = (((!(safe_mul_func_int16_t_s_s(1, g_72))) != (p_47 = (safe_mul_func_uint16_t_u_u(((((l_118 = ((l_107[2] = (p_49 = 6U)) & ((((g_73 <= (!l_118)) || ((safe_unary_minus_func_uint32_t_u(1U)) <= (safe_sub_func_int32_t_s_s((((l_118 <= ((safe_mul_func_int8_t_s_s((safe_add_func_uint32_t_u_u(4294967295U, g_3)), 0xEF)) && l_118)) == l_118) > g_68), g_3)))) == 65535U) ^ l_118))) >= 0xC0) == l_126) || 0xFFB082E2), l_126)))) && g_4[2]))), 3)), 251U)) >= g_3) || l_127));
    l_127 = (safe_add_func_int32_t_s_s(p_47, (safe_lshift_func_int8_t_s_u(g_73, 1))));
    return p_49;
}
static const int8_t func_53(const int32_t p_54)
{
    const int8_t l_83 = 0x86;
    uint32_t l_93 = 0U;
    int32_t l_106 = 5;
    g_72 = (safe_rshift_func_uint16_t_u_s((safe_mul_func_uint8_t_u_u(l_83, 0x49)), (safe_lshift_func_uint8_t_u_s(g_72, 0))));
    l_106 = (!(safe_add_func_uint16_t_u_u(((safe_sub_func_int8_t_s_s((safe_add_func_int8_t_s_s(l_93, (((-5) | (g_72 = l_93)) > ((((((safe_lshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u(0, 8)), p_54)) ^ (safe_sub_func_int32_t_s_s(((safe_add_func_uint8_t_u_u(((safe_add_func_uint8_t_u_u(0xD6, (safe_rshift_func_int16_t_s_s(0xABD1, 9)))) != (-1)), g_3)) >= l_93), g_73))) >= g_4[1]) ^ g_3) <= 4294967286U) != l_83)))), 0x40)) <= 0U), 0)));
    return l_106;
}
static int16_t func_57(int32_t p_58, int8_t p_59, int32_t p_60, int32_t p_61, int32_t p_62)
{
    for (p_58 = (-1); (p_58 == (-18)); --p_58)
    {
        int32_t l_78 = 3;
        l_78 = (safe_rshift_func_int16_t_s_s(g_72, 1));
        g_72 = g_4[6];
    }
    return p_61;
}
int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_3;
    for (i = 0; i < 9; i++)
    {
        csmith_sink_ = g_4[i];
    }
    csmith_sink_ = g_68;
    csmith_sink_ = g_72;
    csmith_sink_ = g_73;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 3; k++)
            {
                csmith_sink_ = g_135[i][j][k];
            }
        }
    }
    csmith_sink_ = g_167;
    csmith_sink_ = g_195;
    csmith_sink_ = g_225;
    csmith_sink_ = g_228;
    csmith_sink_ = g_339;
    for (i = 0; i < 6; i++)
    {
        csmith_sink_ = g_340[i];
    }
    csmith_sink_ = g_383;
    csmith_sink_ = g_389;
    for (i = 0; i < 3; i++)
    {
        csmith_sink_ = g_478[i];
    }
    csmith_sink_ = g_511;
    platform_main_end(0,0);
    return 0;
}
