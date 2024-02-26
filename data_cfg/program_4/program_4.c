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
struct S0 {
   uint32_t f0;
   int32_t f1;
   uint8_t f2;
   int8_t f3;
   int32_t f4;
};
struct S1 {
   uint8_t f0;
   uint8_t f1;
   uint16_t f2;
   uint16_t f3;
   int8_t f4;
};
static int32_t g_31 = 0xD7F285F4L;
static struct S0 g_50 = {0x010F1939L,1L,255UL,0xE8L,0x24086237L};
static struct S1 g_86 = {255UL,0UL,65530UL,0x4DC4L,0x55L};
static int32_t g_102 = (-9L);
static uint32_t g_159 = 0x93F2D2C6L;
static struct S1 g_235 = {1UL,249UL,0xF892L,6UL,0L};
static int8_t g_346 = (-1L);
static int32_t g_447 = 7L;
static int32_t g_525 = 0x46E749F2L;
static int8_t g_968 = 1L;
static struct S0 g_981 = {2UL,0xEF7BFB54L,255UL,0x57L,0xD176FAB4L};
static struct S0 g_983 = {0xE3B3466FL,-3L,6UL,1L,1L};
inline static uint8_t func_1(void);
inline static struct S0 func_3(int16_t p_4, int32_t p_5, uint16_t p_6, struct S0 p_7, struct S1 p_8);
inline static uint32_t func_13(struct S0 p_14, struct S1 p_15, uint16_t p_16, uint32_t p_17);
static struct S0 func_18(uint16_t p_19, uint8_t p_20, int8_t p_21);
inline static uint16_t func_22(struct S0 p_23, uint8_t p_24, int32_t p_25, struct S0 p_26);
static struct S0 func_27(int32_t p_28, int16_t p_29, struct S1 p_30);
inline static struct S1 func_34(uint16_t p_35, int32_t p_36);
inline static uint8_t func_37(int16_t p_38, uint16_t p_39);
inline static int8_t func_40(uint8_t p_41, int8_t p_42, struct S0 p_43);
inline static int16_t func_62(int32_t p_63, int32_t p_64, int32_t p_65, int8_t p_66);
inline static uint8_t func_1(void)
{
    uint16_t l_2 = 5UL;
    struct S0 l_51 = {0UL,0L,255UL,1L,0xF39588DFL};
    struct S1 l_970 = {0xCCL,1UL,65535UL,0x66FFL,0x16L};
    int16_t l_1041 = 0xD3BEL;
    uint16_t l_1108 = 65535UL;
    l_2 = 1L;
    l_51 = func_3(((safe_add_func_uint8_t_u_u(((safe_mod_func_uint8_t_u_u(l_2, (l_2 && func_13(func_18((func_22(func_27(g_31, (g_31 | (~(!l_2))), func_34(g_31, (g_31 != (func_37(l_2, (func_40(((((((((safe_rshift_func_uint16_t_u_s((safe_mod_func_int16_t_s_s(((safe_mod_func_uint32_t_u_u(4294967295UL, (-1L))) >= l_2), g_31)), 11)) , g_50) , (-7L)) && g_50.f1) >= 0x49L) <= g_50.f2) , 0x4264L) ^ (-3L)), l_2, l_51) , l_51.f0)) , g_102)))), g_447, g_447, l_51) && l_51.f0), l_51.f1, g_31), l_970, g_159, g_159)))) < l_51.f3), l_51.f4)) & l_970.f1), l_51.f4, g_31, g_983, l_970);
    if (((g_159 < g_235.f3) != 0x7213L))
    {
        uint16_t l_1021 = 65529UL;
        uint32_t l_1043 = 18446744073709551610UL;
        struct S1 l_1044 = {0xB8L,5UL,8UL,0xD5DBL,2L};
        int16_t l_1054 = 0xA1B9L;
        uint16_t l_1070 = 0x460BL;
        uint32_t l_1073 = 0xF38B5E5EL;
        struct S0 l_1092 = {8UL,-1L,3UL,3L,0xCE409672L};
        l_51.f4 = l_1021;
        for (l_970.f0 = 0; (l_970.f0 != 42); l_970.f0 = safe_add_func_int32_t_s_s(l_970.f0, 7))
        {
            int32_t l_1028 = 0x41E856F5L;
            uint8_t l_1107 = 0xE4L;
            l_1044 = func_34((safe_unary_minus_func_uint16_t_u(((~((safe_add_func_uint16_t_u_u(0x03C8L, ((l_1028 >= (l_970.f1 , ((((g_50.f2 == ((safe_unary_minus_func_uint32_t_u((safe_unary_minus_func_uint16_t_u(((safe_rshift_func_uint16_t_u_u((+((((safe_div_func_int8_t_s_s((((safe_lshift_func_int16_t_s_s((((0xB6FBL || ((safe_rshift_func_uint16_t_u_u((((~l_1041) , (+g_235.f0)) || g_50.f0), (l_51.f4 , l_970.f0))) , l_1021)) & l_970.f1) && 0x73L), g_235.f1)) < g_981.f0) != 0x61L), l_1043)) ^ g_981.f3) | l_51.f2) <= l_1028)), 7)) || g_525))))) != 0x25F0L)) > l_1021) , l_970.f0) , g_968))) | l_1028))) , l_1028)) ^ g_86.f4))), l_51.f3);
            if ((!g_235.f2))
            {
                int32_t l_1057 = 6L;
                g_50.f4 = (safe_mod_func_uint8_t_u_u(((3UL > ((safe_rshift_func_uint8_t_u_u((((l_1028 ^ l_1044.f1) > (l_1043 > (safe_lshift_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_u((l_1054 <= (safe_rshift_func_uint16_t_u_s((l_1057 <= (safe_sub_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(((g_983.f3 , (safe_rshift_func_int16_t_s_u((safe_add_func_uint16_t_u_u((l_1057 == (safe_rshift_func_uint8_t_u_s((l_1028 , g_86.f4), g_86.f2))), g_50.f1)), l_1028))) < 0L), g_983.f0)), g_346))), 15))), 7)) , 65530UL), g_983.f0)))) < l_1028), g_50.f1)) , g_983.f0)) , 0xB6L), l_1044.f4));
            }
            else
            {
                int32_t l_1083 = 6L;
                int32_t l_1086 = (-7L);
                if ((((safe_rshift_func_uint8_t_u_u((l_970.f1 || (((l_1070 || (safe_lshift_func_int16_t_s_s((l_1041 && g_346), l_51.f4))) | ((((0x795DL <= (g_86.f0 > (0x8C7DL <= (g_983.f1 != 0xAFC6F627L)))) != l_2) & l_1028) , 65529UL)) & l_1073)), l_51.f0)) <= g_235.f3) & g_235.f1))
                {
                    g_981.f4 = 1L;
                }
                else
                {
                    int32_t l_1091 = 0x494B5CD4L;
                    g_981 = func_18(((safe_mod_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u((((safe_sub_func_int16_t_s_s((safe_unary_minus_func_uint8_t_u((safe_add_func_uint8_t_u_u(g_525, 0UL)))), l_1083)) >= ((l_1083 , (safe_add_func_int16_t_s_s(l_1086, 65530UL))) != (((-1L) | ((safe_add_func_int16_t_s_s(g_235.f3, (safe_rshift_func_uint8_t_u_s(l_1028, l_1091)))) || g_31)) != l_1091))) <= l_1044.f0), g_983.f1)), g_50.f4)) < g_235.f2), g_86.f2, l_1028);
                    l_1092 = g_981;
                    g_50.f4 = (g_983.f3 > g_983.f4);
                }
                if (g_981.f1)
                    continue;
            }
            g_983.f4 = ((6UL != (((g_981.f1 == (safe_lshift_func_uint16_t_u_s((safe_mod_func_int16_t_s_s(6L, (safe_mod_func_uint32_t_u_u(((g_983.f3 & l_970.f4) , (((((safe_div_func_int32_t_s_s((0x15415B44L != (safe_lshift_func_int16_t_s_s(((g_235.f3 , (safe_mod_func_int8_t_s_s(((g_86.f1 , (safe_lshift_func_int8_t_s_s(g_447, l_51.f2))) <= g_983.f4), g_447))) <= 0L), g_50.f2))), g_86.f4)) & 65535UL) || g_983.f2) && (-1L)) ^ g_50.f0)), 0x6875C227L)))), 14))) < l_1107) >= l_1108)) != g_235.f2);
            if (g_983.f4)
                break;
        }
    }
    else
    {
        struct S1 l_1109 = {0x10L,0UL,65530UL,65535UL,0x44L};
        struct S1 l_1110 = {247UL,0UL,65532UL,0x9FBFL,0xDCL};
        l_1110 = l_1109;
    }
    return g_50.f2;
}
inline static struct S0 func_3(int16_t p_4, int32_t p_5, uint16_t p_6, struct S0 p_7, struct S1 p_8)
{
    uint8_t l_1000 = 0x0BL;
    struct S1 l_1007 = {0x5FL,1UL,65535UL,0UL,-3L};
    uint8_t l_1018 = 0x1DL;
    int32_t l_1019 = 0L;
    struct S0 l_1020 = {0x3C3BA185L,9L,0x2BL,9L,1L};
    g_50.f4 = (g_86.f4 == ((safe_add_func_int8_t_s_s(9L, (safe_add_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s((+(safe_add_func_uint8_t_u_u(g_983.f1, (((((((+(((((((safe_sub_func_uint32_t_u_u((p_4 ^ (safe_lshift_func_int16_t_s_u((safe_mod_func_int16_t_s_s((l_1000 | ((safe_div_func_int8_t_s_s((l_1000 >= (1UL >= (safe_add_func_uint32_t_u_u((1UL < ((safe_mod_func_uint16_t_u_u(0UL, p_8.f3)) && 0x8EL)), l_1000)))), g_86.f3)) ^ 0x6BD69F73L)), g_983.f1)), 0))), p_5)) >= (-6L)) , 4L) && g_102) , 0x84BA530CL) < 0xADE1D561L) & 1UL)) <= 0x15L) >= 5L) <= p_8.f3) && p_5) , p_7.f2) , 0xCCL)))), g_50.f1)), g_86.f4)))) < 0x1DC4L));
    p_8 = l_1007;
    p_7.f4 = p_8.f3;
    l_1019 = ((((((((((safe_sub_func_int16_t_s_s((((l_1000 ^ (safe_rshift_func_uint8_t_u_s(0x4DL, 3))) <= ((-9L) >= (safe_div_func_int32_t_s_s(l_1000, p_7.f4)))) >= (0xAA9C0EEEL <= ((l_1000 , ((safe_div_func_int16_t_s_s((g_50.f1 >= l_1007.f3), p_7.f3)) < l_1007.f2)) < g_235.f1))), l_1018)) , l_1007.f0) && g_983.f0) | l_1018) != p_8.f0) | 0L) < l_1007.f2) > 1L) != p_8.f1) && l_1007.f2);
    return l_1020;
}
inline static uint32_t func_13(struct S0 p_14, struct S1 p_15, uint16_t p_16, uint32_t p_17)
{
    int16_t l_979 = (-1L);
    for (g_50.f2 = 0; (g_50.f2 <= 41); g_50.f2 = safe_add_func_uint8_t_u_u(g_50.f2, 4))
    {
        int8_t l_973 = 0x89L;
        uint16_t l_980 = 0UL;
        struct S1 l_982 = {0xF9L,0UL,0xBFB1L,65535UL,1L};
        g_50.f4 = ((((0x31L == l_973) & (safe_unary_minus_func_uint8_t_u(((((p_15.f2 , (0x92L >= (0UL >= ((((safe_rshift_func_int8_t_s_u(p_17, (p_15.f2 > ((safe_lshift_func_uint8_t_u_s((g_86 , (g_235.f4 > l_973)), 7)) , p_14.f4)))) & 0L) && p_15.f2) || 3UL)))) || (-3L)) > l_979) != g_447)))) , l_980) && 1UL);
        g_981 = p_14;
        l_982 = g_235;
    }
    g_50 = p_14;
    p_15 = g_235;
    return p_15.f2;
}
static struct S0 func_18(uint16_t p_19, uint8_t p_20, int8_t p_21)
{
    int8_t l_965 = 0xF4L;
    uint32_t l_966 = 0UL;
    struct S1 l_967 = {0xA6L,0UL,0x8567L,0xC2EEL,0xD8L};
    struct S0 l_969 = {0x5353AFA3L,-3L,0x0AL,0x58L,0x3D2AB0B3L};
    g_968 = ((((0x8827L == ((l_965 & p_19) <= g_235.f4)) , func_34(g_50.f3, g_235.f4)) , l_966) != ((((((l_967 , l_967.f2) & 5UL) < p_21) | p_20) != 0x85L) < g_102));
    g_50.f4 = g_50.f2;
    return l_969;
}
inline static uint16_t func_22(struct S0 p_23, uint8_t p_24, int32_t p_25, struct S0 p_26)
{
    uint32_t l_964 = 4294967291UL;
    l_964 = (p_26.f3 == p_26.f3);
    return g_86.f1;
}
static struct S0 func_27(int32_t p_28, int16_t p_29, struct S1 p_30)
{
    struct S0 l_923 = {0x50884B79L,0L,1UL,-1L,-8L};
    uint16_t l_962 = 0xA725L;
    int8_t l_963 = 6L;
    l_923.f4 = (((((safe_mod_func_int8_t_s_s(((safe_sub_func_int32_t_s_s(1L, ((((((p_30.f4 , g_50) , (safe_add_func_int32_t_s_s(0x2ABB9650L, (safe_add_func_int8_t_s_s(p_28, ((p_30.f3 >= ((l_923 , (safe_rshift_func_uint8_t_u_s(((!((safe_add_func_int32_t_s_s(((((((((safe_lshift_func_int8_t_s_u((((((safe_add_func_uint8_t_u_u(((((safe_mod_func_int16_t_s_s((safe_add_func_int8_t_s_s(((safe_add_func_int8_t_s_s(g_50.f2, (((l_923.f4 && 65531UL) && p_29) , 0xB5L))) != 0x120CL), (-8L))), l_923.f0)) , p_30.f2) | l_923.f1) == p_30.f2), 2L)) <= g_235.f3) ^ p_29) | p_30.f2) != p_30.f4), p_29)) != 1UL) != p_29) > p_30.f4) , l_923.f2) <= l_923.f4) , p_30.f2) != g_235.f1), p_30.f1)) ^ p_30.f2)) && p_28), g_102))) > l_923.f1)) & 0x9BL)))))) & g_86.f0) || g_235.f1) | g_50.f0) < l_923.f0))) , 0xD6L), g_50.f1)) != 0xCB3A100BL) != 0xDC6D6AE9L) >= (-1L)) >= 1UL);
    l_923.f4 = (g_235.f2 < (safe_add_func_uint16_t_u_u((safe_add_func_int8_t_s_s((p_30.f0 && ((safe_sub_func_uint32_t_u_u(((((safe_add_func_int16_t_s_s((safe_sub_func_int32_t_s_s(g_235.f0, 4294967288UL)), (safe_add_func_uint16_t_u_u((+(safe_sub_func_uint32_t_u_u(((0xD85F01CFL > (65529UL | ((safe_add_func_int16_t_s_s((65533UL || g_235.f1), ((((safe_lshift_func_uint8_t_u_s((safe_add_func_uint8_t_u_u((((safe_rshift_func_int8_t_s_s((((l_962 , p_30.f0) | 0x8460L) == l_923.f0), p_30.f3)) == (-5L)) ^ p_30.f0), p_28)), g_86.f4)) & g_235.f3) > l_962) == g_235.f0))) <= l_923.f0))) < g_50.f3), 0x9B1F1A9FL))), l_923.f4)))) || l_962) >= l_963) , 4294967295UL), 4294967295UL)) >= 1UL)), 0x21L)), p_28)));
    l_923 = l_923;
    return l_923;
}
inline static struct S1 func_34(uint16_t p_35, int32_t p_36)
{
    struct S0 l_687 = {0xC4EECA38L,0x26FFD2F1L,0xD1L,0L,0x8C88A246L};
    uint16_t l_733 = 0x94ABL;
    int8_t l_734 = 7L;
    struct S1 l_841 = {1UL,0xA1L,1UL,65528UL,0xBEL};
    l_687 = g_50;
    if (g_235.f1)
    {
        int32_t l_690 = 0xA6F76317L;
        struct S0 l_801 = {0xBFD2CBEBL,0x3CB1FA36L,0UL,0xC3L,0x3599A88AL};
        struct S1 l_802 = {1UL,4UL,0x3368L,65535UL,0xE2L};
        uint8_t l_803 = 0x3CL;
        int32_t l_826 = 1L;
lbl_868:
        if (((safe_add_func_int16_t_s_s(l_690, (safe_mod_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_u(((l_687.f3 , (safe_div_func_uint16_t_u_u(0x54C4L, 1UL))) != (safe_add_func_int16_t_s_s((safe_div_func_uint8_t_u_u((g_235.f1 && g_86.f1), g_86.f2)), p_36))), 7)) == ((g_235.f2 ^ g_447) != g_86.f0)), l_690)))) <= l_687.f2))
        {
            int32_t l_719 = 0x804E4C95L;
            struct S1 l_735 = {0xD3L,255UL,0UL,0xD2B4L,0x5CL};
            struct S0 l_758 = {0x830FC48FL,6L,0x87L,1L,0L};
            if (g_50.f2)
            {
                struct S0 l_736 = {4294967286UL,-1L,255UL,0x4CL,0x888401FAL};
                for (g_235.f2 = 0; (g_235.f2 == 26); ++g_235.f2)
                {
                    p_36 = p_36;
                }
                for (l_690 = (-26); (l_690 > 12); ++l_690)
                {
                    struct S1 l_724 = {246UL,0xB8L,9UL,0x1B35L,0x49L};
                    if (((safe_sub_func_uint8_t_u_u(((1UL & ((safe_lshift_func_uint16_t_u_u(g_235.f1, 7)) | (((safe_mod_func_int32_t_s_s((safe_mod_func_int16_t_s_s((8L <= ((safe_div_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_u((((l_719 | (safe_lshift_func_int16_t_s_u((g_235 , (safe_sub_func_uint16_t_u_u((l_724 , 0x235AL), (safe_rshift_func_uint8_t_u_s(p_36, ((((safe_sub_func_uint32_t_u_u((((safe_rshift_func_uint8_t_u_u((safe_div_func_int8_t_s_s(0xB0L, g_86.f3)), p_36)) < 7L) != 1L), g_235.f4)) > l_724.f0) || 1UL) ^ 3UL)))))), 9))) || g_86.f2) == g_235.f1), l_733)), l_719)) <= g_86.f1)), l_734)), 4294967295UL)) || g_86.f1) , g_86.f4))) && p_35), 0x17L)) > p_35))
                    {
                        g_50.f4 = g_447;
                    }
                    else
                    {
                        if (p_36)
                            break;
                    }
                    return l_735;
                }
                l_736 = g_50;
                l_687.f4 = (safe_mod_func_uint32_t_u_u((safe_sub_func_int8_t_s_s((g_159 >= (safe_rshift_func_int16_t_s_s(p_35, p_36))), (safe_sub_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s(l_690, 6)), (((l_735 , ((safe_sub_func_uint32_t_u_u(4294967287UL, (safe_mod_func_uint32_t_u_u(g_525, (safe_mod_func_int8_t_s_s(p_35, (((safe_lshift_func_uint16_t_u_s(((((+(safe_div_func_int16_t_s_s((g_86.f1 , p_35), p_36))) && g_50.f0) , p_36) && g_50.f3), p_35)) & 0x11L) , p_35))))))) , l_734)) || l_736.f3) == 0xE8L))))), p_35));
            }
            else
            {
                struct S1 l_778 = {0x50L,255UL,4UL,0UL,0x92L};
                l_758 = g_50;
                if ((safe_rshift_func_int8_t_s_s(((g_50 , ((safe_lshift_func_int8_t_s_u((+((safe_add_func_int32_t_s_s((safe_unary_minus_func_uint8_t_u((safe_mod_func_uint8_t_u_u(((g_86.f1 <= (((safe_div_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u((~(safe_mod_func_int32_t_s_s((l_778 , (safe_rshift_func_uint8_t_u_u(((safe_div_func_int16_t_s_s((safe_add_func_int8_t_s_s((0x9FD8L < (safe_mod_func_uint8_t_u_u(((safe_mod_func_uint32_t_u_u((safe_add_func_int16_t_s_s((0x3733L != ((safe_add_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((!((safe_add_func_uint8_t_u_u(p_35, g_525)) ^ (((-8L) >= (safe_sub_func_uint32_t_u_u((((p_36 <= l_758.f3) != 5L) != l_778.f1), 1UL))) && 4294967295UL))), 0x1449L)), (-1L))) != p_35)), 0xF686L)), 0xF42E50F7L)) ^ p_35), l_690))), l_687.f1)), 0xE50EL)) != (-8L)), g_50.f3))), g_50.f1))), l_778.f2)), l_778.f1)) , 0x9D5CL) > p_36)) , g_50.f4), p_36)))), g_346)) || g_86.f2)), l_690)) > 0x843B2AB1L)) && 1UL), 1)))
                {
                    struct S0 l_800 = {1UL,0xF4B23933L,3UL,0L,0xD25AFC36L};
                    l_801 = l_800;
                    p_36 = l_690;
                }
                else
                {
                    g_86 = g_86;
                    return l_802;
                }
            }
        }
        else
        {
            int32_t l_811 = (-1L);
            int8_t l_851 = 0xBFL;
            l_803 = 0x9FAE1AD1L;
            g_50.f4 = (g_235.f0 && p_36);
            l_801.f4 = p_35;
            if ((((((safe_rshift_func_int16_t_s_u((safe_add_func_int32_t_s_s((safe_sub_func_int16_t_s_s((p_36 , 0xD0C5L), (!(l_811 > p_36)))), (1UL == (safe_mod_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(5L, (safe_sub_func_uint32_t_u_u((((safe_lshift_func_uint8_t_u_s((safe_div_func_uint8_t_u_u(1UL, (safe_mod_func_int8_t_s_s((safe_div_func_uint32_t_u_u(l_811, p_35)), p_36)))), 1)) ^ 1UL) != p_35), l_826)))), p_36))))), 4)) < 0x306DL) >= g_31) || 0x1B70L) != l_811))
            {
                uint16_t l_842 = 0xA876L;
                p_36 = (l_802.f1 == (safe_sub_func_uint32_t_u_u((safe_rshift_func_int8_t_s_s(l_802.f3, 2)), (1UL && (((g_50.f4 <= (safe_add_func_uint16_t_u_u((((~(safe_lshift_func_int16_t_s_u((+((((safe_rshift_func_int8_t_s_s(((((l_826 , (safe_mod_func_uint8_t_u_u((l_841 , ((((l_842 ^ (safe_sub_func_uint8_t_u_u(g_86.f4, ((safe_sub_func_uint32_t_u_u(l_687.f2, l_811)) | 1UL)))) > p_35) ^ 9L) != g_447)), p_35))) || g_86.f3) != 4294967294UL) <= p_35), p_36)) ^ l_811) | 0L) > l_811)), 1))) == 0x09L) && 0xC6L), p_35))) > 0L) , l_811)))));
            }
            else
            {
                for (l_687.f3 = 0; (l_687.f3 > (-1)); l_687.f3 = safe_sub_func_int16_t_s_s(l_687.f3, 6))
                {
                    for (l_826 = 26; (l_826 != (-23)); l_826 = safe_sub_func_int8_t_s_s(l_826, 1))
                    {
                        l_851 = 0x4F17AA12L;
                        return g_235;
                    }
                    g_50 = g_50;
                    return l_802;
                }
            }
        }
        if (((safe_div_func_uint32_t_u_u(((~(safe_mod_func_uint32_t_u_u((safe_add_func_int8_t_s_s(0x44L, (safe_div_func_uint8_t_u_u(l_690, ((0xC40DL & 0x2ECBL) , ((safe_div_func_uint32_t_u_u((((safe_lshift_func_int16_t_s_u(p_36, ((safe_rshift_func_uint16_t_u_s((l_841 , (~(p_36 < 0xCDL))), (l_801.f0 , g_159))) == l_826))) || 0xFFCFL) <= 0x15L), l_687.f2)) | l_802.f0)))))), p_35))) & l_733), g_50.f1)) <= 0x90L))
        {
            uint8_t l_881 = 0xEEL;
            if (g_86.f1)
                goto lbl_868;
            g_50.f4 = (safe_lshift_func_uint8_t_u_u(((p_35 | 65535UL) > (((safe_lshift_func_uint8_t_u_u(255UL, g_50.f4)) > (((safe_rshift_func_uint8_t_u_u(g_235.f4, (safe_rshift_func_uint16_t_u_s((((safe_add_func_uint8_t_u_u(((((((g_86.f0 <= (p_36 && (((safe_mod_func_int32_t_s_s(((l_881 > (safe_mod_func_uint32_t_u_u((g_50 , g_86.f4), 0xC08895D5L))) == p_35), g_50.f3)) == 0x74A193EBL) && 0x58L))) ^ g_50.f0) <= 0xFAL) && l_802.f4) && 4UL) , g_235.f0), g_447)) != 65529UL) && 1UL), p_35)))) && g_525) <= 0x87L)) <= l_881)), p_35));
        }
        else
        {
            int8_t l_895 = (-8L);
            for (g_525 = 1; (g_525 > 4); g_525 = safe_add_func_uint16_t_u_u(g_525, 3))
            {
                l_801 = g_50;
            }
            g_50.f4 = (((safe_div_func_int32_t_s_s(0xAE525FB5L, (0x80L & (g_50 , (safe_add_func_int8_t_s_s(((safe_add_func_uint16_t_u_u(l_841.f2, ((safe_add_func_uint8_t_u_u((safe_unary_minus_func_int8_t_s(((((0xF8EAL ^ l_895) <= ((safe_lshift_func_uint8_t_u_s((l_687.f0 < g_86.f3), 4)) <= (((((l_801.f2 != g_50.f4) ^ 0xD5L) > 4294967295UL) && g_235.f0) ^ 0x9310B8B6L))) != l_895) < p_36))), p_36)) && p_36))) ^ g_50.f3), l_895)))))) & 4294967295UL) && g_447);
            l_687 = l_801;
        }
        g_235 = l_841;
    }
    else
    {
        uint16_t l_908 = 0UL;
        int32_t l_911 = (-1L);
        struct S1 l_912 = {251UL,0x46L,0xBF99L,0UL,0x32L};
        l_911 = ((0L & (((p_36 | ((safe_mod_func_uint8_t_u_u((((safe_unary_minus_func_int32_t_s(((safe_mod_func_int16_t_s_s(l_733, (safe_lshift_func_uint16_t_u_s((!(safe_add_func_int16_t_s_s(0x8E3FL, g_50.f1))), (((l_908 ^ (safe_add_func_uint16_t_u_u((l_687.f4 && ((p_36 , 6UL) == 0x59L)), g_86.f1))) == p_36) , l_908))))) , l_908))) , 0L) || g_86.f4), l_908)) < l_908)) ^ 0x9556L) ^ (-4L))) , g_86.f3);
        return l_912;
    }
    return g_235;
}
inline static uint8_t func_37(int16_t p_38, uint16_t p_39)
{
    uint32_t l_108 = 0UL;
    struct S0 l_132 = {4294967287UL,1L,0UL,0xA3L,1L};
    struct S1 l_386 = {0xFDL,2UL,0UL,0x33A1L,0x27L};
    uint16_t l_432 = 1UL;
    struct S0 l_538 = {0x6F4E6486L,-9L,0UL,-1L,0xCEB77BD8L};
    uint32_t l_562 = 18446744073709551615UL;
    struct S0 l_622 = {0UL,0xF067BEC6L,0UL,-10L,0L};
    int32_t l_670 = 0x447322CEL;
    uint32_t l_686 = 0x7048DB68L;
lbl_574:
    g_50.f4 = (~(safe_mod_func_int32_t_s_s(p_39, ((((safe_div_func_uint32_t_u_u(p_38, l_108)) && (g_50.f0 || 0xC3L)) == 248UL) || (l_108 ^ (safe_add_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_u((safe_add_func_int8_t_s_s(0xDEL, (((safe_mod_func_uint16_t_u_u(4UL, p_39)) < l_108) <= 0x954321B6L))), l_108)), g_50.f0)), g_86.f3)))))));
    if (((safe_div_func_uint32_t_u_u((((l_108 <= (((0x27L && ((((((safe_mod_func_uint16_t_u_u(l_108, (safe_div_func_uint8_t_u_u(0x1EL, l_108)))) != (((((((((~(((safe_add_func_int16_t_s_s((((safe_mul_func_int32_t_s_s(p_38, (l_132 , ((p_38 ^ 0x06077EAAL) == (-1L))))) && 0UL) , g_31), g_86.f4)) > 0xA7L) <= l_132.f0)) , g_50.f3) | l_132.f3) > 1UL) | l_132.f0) && g_31) <= (-9L)) , 0xE4L) & 0UL)) < g_50.f4) && (-10L)) , p_38) > g_50.f0)) < l_132.f1) && l_132.f1)) ^ g_102) | (-9L)), l_132.f2)) <= 1L))
    {
        int32_t l_158 = 0xF268A7AFL;
        int8_t l_259 = 1L;
        struct S0 l_338 = {0UL,-7L,0x6FL,0x27L,0x98E5AE54L};
        uint32_t l_408 = 0xB4845BDFL;
        uint32_t l_411 = 4294967288UL;
        int32_t l_412 = 5L;
lbl_260:
        for (g_86.f3 = 7; (g_86.f3 < 34); g_86.f3++)
        {
            int16_t l_160 = 0xCD2BL;
            int32_t l_207 = 0L;
            int32_t l_236 = 1L;
            if ((safe_sub_func_uint32_t_u_u((6L ^ p_39), (((g_50.f3 | (safe_div_func_uint8_t_u_u((!((((safe_add_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((p_38 < ((safe_div_func_uint16_t_u_u(0UL, (safe_sub_func_uint8_t_u_u((safe_div_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((safe_sub_func_uint32_t_u_u((0x4FL == (((safe_add_func_int8_t_s_s((-3L), (g_86.f3 , (((safe_add_func_uint8_t_u_u(((-4L) < p_39), l_132.f2)) | g_31) , l_158)))) && g_50.f2) != 0x7F9DL)), l_158)), g_159)), 0x4051L)), g_86.f1)))) >= p_38)), 8)), l_160)) < l_160) > 0x9247L) > g_86.f1)), l_158))) ^ 0xCAL) , l_160))))
            {
                uint8_t l_161 = 0x94L;
                g_50.f4 = (l_161 != (safe_lshift_func_uint8_t_u_s((safe_div_func_int16_t_s_s(l_161, (((safe_unary_minus_func_int16_t_s((safe_lshift_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(g_86.f4, (safe_rshift_func_int8_t_s_u((0x1EL <= p_39), 2)))), 0)))) & (safe_rshift_func_uint16_t_u_s((safe_add_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u(l_161, (safe_lshift_func_int16_t_s_s(g_102, (((safe_add_func_int32_t_s_s(((0x2A46F7BBL && l_132.f1) <= 0L), 0x988898D0L)) | g_86.f4) <= 0x0DB8L))))) >= g_86.f1), p_38)), 10))) || l_160))), 6)));
            }
            else
            {
                int16_t l_185 = (-8L);
                for (g_86.f1 = (-22); (g_86.f1 != 22); g_86.f1++)
                {
                    int16_t l_191 = (-8L);
                    int32_t l_203 = 0x0944A394L;
                    l_158 = ((g_86.f4 < ((p_38 < 0xA8L) || (65533UL ^ l_185))) > g_31);
                    l_203 = (safe_lshift_func_uint16_t_u_s((safe_unary_minus_func_int8_t_s((0x05FBL < ((l_191 ^ (l_191 <= (safe_add_func_int32_t_s_s((p_39 == (safe_rshift_func_uint8_t_u_u(247UL, 6))), g_31)))) & (safe_rshift_func_uint8_t_u_u(p_38, 7)))))), (+((safe_lshift_func_uint16_t_u_s((safe_mod_func_int32_t_s_s((l_185 & l_132.f2), l_185)), g_50.f3)) <= g_86.f3))));
                    g_50.f4 = ((((safe_add_func_int32_t_s_s((-9L), (~(((g_50.f4 | (l_158 > l_207)) == ((safe_rshift_func_uint8_t_u_s((safe_sub_func_int16_t_s_s(g_50.f1, 1UL)), 7)) || (safe_rshift_func_int16_t_s_s(g_50.f3, (safe_rshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s((!g_86.f0), 6)), (!(safe_add_func_int8_t_s_s((l_132 , 0x96L), g_86.f2))))), 12)))))) , g_31)))) && (-1L)) & p_38) | 0x00CAL);
                }
            }
            l_158 = (((safe_rshift_func_int16_t_s_s((safe_add_func_int8_t_s_s(l_132.f1, p_39)), 5)) == (g_86.f1 , (0L & (((g_31 < ((l_158 | (safe_lshift_func_uint8_t_u_u(g_86.f3, (safe_div_func_uint16_t_u_u(3UL, 0xAF53L))))) & g_31)) >= p_39) <= p_38)))) < g_31);
            for (l_108 = 0; (l_108 >= 38); l_108++)
            {
                struct S1 l_234 = {0UL,255UL,0x9892L,0x9344L,0xF1L};
                struct S0 l_237 = {0xE87FF4EDL,-1L,0x4DL,0x63L,-3L};
                g_235 = l_234;
                l_236 = g_159;
                g_50 = l_237;
            }
        }
        g_86 = ((safe_div_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s((((safe_sub_func_int32_t_s_s((safe_sub_func_int32_t_s_s(g_86.f3, ((p_39 , (safe_add_func_uint16_t_u_u(l_132.f3, 0xC23FL))) && (g_159 <= ((safe_div_func_int32_t_s_s(((g_86.f4 > 0x18B289E9L) , 0xACED721EL), ((65528UL <= p_38) || 0xDC0FL))) != p_38))))), (-9L))) == l_132.f1) ^ 0L), 2)), 1UL)) , g_86);
        for (g_235.f1 = 6; (g_235.f1 <= 47); g_235.f1++)
        {
            int32_t l_252 = 0xFCDCBAFFL;
            l_158 = (((l_252 <= ((safe_sub_func_uint8_t_u_u((!(((-1L) <= (((l_158 , p_39) == p_38) < p_38)) | (0x5B5E6331L > p_38))), (!(p_38 < 0x149C1215L)))) , l_259)) | g_86.f2) || 1UL);
            l_158 = 0xD74585E3L;
            if (g_86.f4)
                goto lbl_260;
        }
        if ((safe_add_func_uint32_t_u_u(1UL, (l_132.f2 & (((safe_sub_func_uint16_t_u_u(g_86.f4, ((((safe_sub_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((((safe_lshift_func_uint8_t_u_s(0xFCL, (safe_rshift_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(g_235.f4, p_39)), 6)))) > ((0x70L && (safe_rshift_func_uint16_t_u_s(((p_39 , (-1L)) | p_38), 2))) > l_259)) < g_235.f0), 0xB7CDL)), 1L)) && 0UL) > p_38) >= l_158))) & g_235.f1) && l_259)))))
        {
            struct S0 l_291 = {4294967293UL,1L,0x2EL,1L,4L};
            struct S1 l_344 = {9UL,0UL,0xBD02L,0xBC67L,1L};
            if (g_86.f4)
            {
                uint8_t l_277 = 1UL;
                int8_t l_343 = (-1L);
                g_50.f4 = (p_38 & l_277);
                if ((safe_div_func_uint32_t_u_u(l_277, (safe_mod_func_int32_t_s_s((safe_add_func_int16_t_s_s((((((safe_div_func_uint32_t_u_u((((safe_rshift_func_uint16_t_u_s(((+(((safe_rshift_func_uint16_t_u_u(((l_291 , ((safe_add_func_uint8_t_u_u((((~0x9D2CL) ^ (p_38 ^ (safe_rshift_func_uint8_t_u_s(((((((l_132 , (safe_lshift_func_uint16_t_u_s((l_291.f2 , (safe_lshift_func_uint16_t_u_u(((safe_add_func_int16_t_s_s(g_50.f4, p_39)) < (safe_div_func_int16_t_s_s(((0xD591L && 65535UL) <= g_50.f3), (-1L)))), 12))), 2))) == l_277) , p_38) & g_86.f2) >= 0x9D35L) , g_102), p_39)))) || 0xDE1195C0L), p_38)) > g_86.f0)) | g_50.f3), 1)) || g_31) , 4294967295UL)) ^ 1UL), 3)) < p_39) <= 0x513BAED3L), (-2L))) != l_291.f1) || p_39) != g_31) >= 1UL), l_291.f0)), 0x843EA291L)))))
                {
                    uint32_t l_307 = 0xEBB8F754L;
                    uint8_t l_311 = 0xE3L;
                    for (l_291.f1 = 3; (l_291.f1 < (-24)); l_291.f1 = safe_sub_func_int16_t_s_s(l_291.f1, 8))
                    {
                        l_307 = 4L;
                        g_50.f4 = (!((((safe_add_func_int16_t_s_s(l_311, 0xF51DL)) < (((safe_mod_func_uint16_t_u_u(((((g_159 || (l_132.f0 == ((~g_50.f0) & l_277))) ^ 0x321DL) > g_50.f4) || ((safe_mod_func_int8_t_s_s((g_235.f2 <= 1L), p_39)) <= l_277)), 0x7972L)) != 0xF3L) == g_86.f4)) < l_291.f4) , g_86.f2));
                        return g_50.f3;
                    }
                    for (g_235.f3 = 9; (g_235.f3 != 15); g_235.f3 = safe_add_func_int8_t_s_s(g_235.f3, 6))
                    {
                        g_50.f4 = p_38;
                        return g_31;
                    }
                }
                else
                {
                    int8_t l_329 = (-5L);
                    struct S1 l_345 = {0x35L,252UL,0x6975L,65535UL,8L};
                    int32_t l_358 = 0xAE037B79L;
                    g_50 = ((((0x5E067757L > (((safe_div_func_int8_t_s_s(((((-2L) <= (((((safe_sub_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(l_329, ((p_38 >= (safe_add_func_int8_t_s_s((safe_div_func_uint16_t_u_u(((safe_add_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_s((l_338 , l_329), 0)) != (((9L > p_39) , ((((~(safe_add_func_int8_t_s_s(((!((0UL || 0x3CE6L) > 1UL)) >= l_132.f0), l_343))) < g_50.f2) && g_50.f1) && l_132.f2)) && (-6L))), 7UL)) ^ 5L), 0x0BA7L)), g_86.f2))) && l_108))), 1L)), g_235.f1)) == g_50.f4) && p_39) < 8L) & g_86.f1)) >= p_39) | p_38), p_39)) , l_132.f2) , g_86.f3)) > l_329) == 0UL) , l_291);
                    l_345 = l_344;
                    if (g_235.f3)
                        goto lbl_359;
lbl_359:
                    l_358 = (g_346 < ((1UL > (safe_add_func_int8_t_s_s(0x1BL, 0L))) >= (((+l_132.f3) , ((safe_div_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((safe_div_func_uint32_t_u_u((1UL == (safe_sub_func_uint8_t_u_u(((0L && (l_345.f0 >= 1UL)) || g_235.f3), 0xA2L))), p_38)), g_50.f0)), l_132.f0)) & g_102)) < l_291.f3)));
                    g_50 = g_50;
                }
            }
            else
            {
                int16_t l_360 = 4L;
                int32_t l_385 = (-9L);
                g_50.f4 = l_360;
                l_385 = (!(g_50.f2 == (1L | ((safe_rshift_func_uint16_t_u_s((safe_rshift_func_int16_t_s_s(p_38, g_50.f2)), 14)) , (safe_unary_minus_func_int32_t_s(((safe_add_func_uint16_t_u_u(((safe_div_func_uint16_t_u_u((safe_div_func_int32_t_s_s(0x9240290DL, (safe_lshift_func_uint8_t_u_s(g_86.f0, (safe_div_func_int8_t_s_s((((l_360 ^ (safe_rshift_func_int8_t_s_s((safe_add_func_uint16_t_u_u((((safe_mod_func_uint8_t_u_u(((safe_add_func_int32_t_s_s(p_39, (p_39 , g_86.f1))) == 1L), p_39)) > l_132.f1) & l_291.f3), g_86.f0)), l_344.f1))) == l_291.f0) | 0xC8ACL), 0x84L)))))), 0x4FC5L)) , 0x3418L), (-1L))) ^ 0xCC0637CDL)))))));
            }
            l_386 = l_386;
        }
        else
        {
            uint8_t l_398 = 3UL;
            struct S1 l_409 = {0x18L,249UL,0x3864L,0UL,0x9EL};
            uint8_t l_410 = 0x5DL;
            int32_t l_413 = 0x68AAB93AL;
            int32_t l_449 = 0x0AFCA1F2L;
            struct S0 l_450 = {0x4EA0C654L,0x21E32876L,254UL,-1L,0xD0CE8B55L};
            int16_t l_461 = 0x3486L;
            int32_t l_480 = 6L;
            g_50.f4 = (0x3B92L && (l_386.f4 , g_50.f0));
            g_50.f4 = (((((safe_mod_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_u((((((safe_mod_func_uint16_t_u_u(2UL, (+((0UL > 0xE8A82D6EL) && (safe_sub_func_uint16_t_u_u(l_338.f1, ((safe_div_func_int32_t_s_s((l_398 == (safe_rshift_func_int8_t_s_u(((safe_lshift_func_int16_t_s_s(g_86.f1, (safe_sub_func_uint8_t_u_u((safe_add_func_int32_t_s_s((+((0x5EL || l_408) , ((l_409 , 0x5CL) < l_410))), g_86.f3)), l_411)))) != p_38), 4))), l_412)) | 0x3055DAE0L))))))) & l_409.f3) , g_50.f0) != l_108) && 0xBA821798L), p_39)) >= p_38), l_386.f4)) , 65532UL) > g_235.f2) , l_410) < 0x09A3CD57L);
            if (((((((l_413 || (((g_86.f4 , (((((((((0x79C0L > g_50.f3) && (safe_div_func_int16_t_s_s((((safe_add_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u((((safe_mod_func_int16_t_s_s(p_38, ((((safe_div_func_uint8_t_u_u(g_50.f1, (0x2EL | ((((((safe_add_func_int8_t_s_s(((((safe_rshift_func_int8_t_s_u(((safe_lshift_func_uint8_t_u_u(p_38, 5)) != (((g_346 != 0x73F3L) <= g_86.f1) == l_132.f1)), 5)) | g_346) >= g_86.f1) ^ g_235.f2), g_50.f3)) , p_39) != g_50.f1) > l_412) < (-4L)) , 1UL)))) | 0x5E4EL) == g_102) & p_39))) | p_39) < l_386.f1), 0x9381L)), 0x390C7C57L)) <= l_132.f3) & g_31), g_86.f4))) || g_50.f1) && p_38) | l_408) ^ g_86.f0) ^ l_411) | p_38) ^ 2UL)) & 0L) || l_408)) > 255UL) > l_409.f3) | p_39) ^ l_398) > 0x28EBL))
            {
                struct S0 l_433 = {4UL,0xA26EFF64L,0xC5L,0x25L,0xCA76CCA6L};
                for (l_338.f1 = 0; (l_338.f1 <= (-9)); l_338.f1 = safe_sub_func_int16_t_s_s(l_338.f1, 6))
                {
                    if (g_86.f2)
                    {
                        l_132.f4 = l_432;
                        l_433 = g_50;
                    }
                    else
                    {
                        int16_t l_448 = 0x1D76L;
                        l_158 = (safe_add_func_uint16_t_u_u(((0x7BDE48DDL & ((g_86.f4 > (g_50 , g_346)) < ((((((g_346 , (((safe_sub_func_uint16_t_u_u((g_235.f0 , (safe_mod_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((+((safe_sub_func_uint16_t_u_u((((g_447 != p_38) <= 0xAAD6L) > l_448), (-7L))) ^ g_235.f3)), 1L)), 0)), p_38))), (-2L))) <= g_235.f0) ^ 0L)) && g_235.f0) > 0x21DC31B4L) , p_38) , p_38) , 0xB1L))) , 65530UL), l_433.f4));
                    }
                    if (g_50.f0)
                        break;
                    if (p_38)
                        continue;
                    l_449 = ((-1L) > p_38);
                }
                g_50 = (g_235.f1 , l_450);
            }
            else
            {
                uint32_t l_492 = 18446744073709551615UL;
                uint8_t l_493 = 5UL;
                if (p_39)
                {
                    uint32_t l_464 = 1UL;
                    struct S0 l_487 = {0x89AA0642L,0x539D021FL,3UL,0x87L,0x85252EDAL};
                    struct S1 l_494 = {248UL,1UL,0x3F3EL,0x0D12L,-2L};
                    l_450.f4 = (safe_mod_func_int32_t_s_s((safe_lshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_s(((((safe_div_func_int8_t_s_s(l_386.f1, g_86.f1)) < (safe_sub_func_int16_t_s_s((l_461 >= (safe_add_func_int8_t_s_s(0xE4L, l_464))), (safe_div_func_int32_t_s_s((g_235.f3 || (g_50.f0 , (l_158 <= (safe_rshift_func_uint16_t_u_s(((0x5FA5L == 0UL) , p_39), g_235.f1))))), l_386.f0))))) == l_461) && 0x6D40L), g_346)), l_464)), 0x302B2448L));
                    if (l_450.f3)
                        goto lbl_479;
lbl_479:
                    g_50.f4 = (safe_sub_func_uint32_t_u_u(((safe_add_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_s((p_39 == g_235.f0), 12)) <= ((-1L) ^ (safe_sub_func_int8_t_s_s((9UL != (((safe_add_func_int16_t_s_s((((l_413 , (l_132.f0 < (-1L))) & g_235.f0) <= 0xD7L), 0x07CFL)) , 0x6E641367L) & g_86.f4)), 0UL)))), 65535UL)) < 0x5AL), p_39));
                    l_493 = ((l_480 > (l_386.f3 || ((safe_add_func_uint16_t_u_u(g_159, (safe_rshift_func_uint8_t_u_u(((((((safe_lshift_func_uint16_t_u_s(((l_487 , 0x49L) ^ ((safe_lshift_func_uint16_t_u_s(4UL, 0)) && (safe_add_func_int32_t_s_s((-1L), ((p_39 != (g_31 , g_235.f2)) || l_492))))), l_487.f3)) == 2UL) == g_102) >= 65528UL) & l_464) <= g_235.f4), 4)))) < 1L))) , l_487.f3);
                    g_235 = l_494;
                }
                else
                {
                    uint32_t l_524 = 0UL;
                    g_86 = l_386;
                    if (((0UL & (safe_lshift_func_int8_t_s_s((safe_unary_minus_func_uint32_t_u((safe_div_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_s((safe_add_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u(((safe_add_func_uint16_t_u_u(((p_38 != (safe_lshift_func_uint16_t_u_s((safe_sub_func_uint8_t_u_u(((((g_50.f3 || g_86.f0) <= (g_159 != p_38)) >= ((safe_sub_func_uint8_t_u_u((safe_div_func_uint16_t_u_u((((safe_mod_func_uint8_t_u_u((safe_add_func_int32_t_s_s(((((p_39 || (p_39 | ((safe_mod_func_uint8_t_u_u(((((g_50 , p_39) || 1L) != l_492) == l_524), l_524)) >= 0xF827L))) ^ 0x1AL) == p_39) > l_524), l_492)), g_86.f2)) >= g_525) == 1L), 65535UL)), 6L)) != g_50.f1)) < p_39), p_38)), g_235.f2))) < 0UL), 0x73DCL)) & l_409.f1), g_86.f1)), g_235.f0)), 0x6CL)), 1)) >= 9L), g_102)))), 0))) & 0x7C5CC1F0L))
                    {
                        uint16_t l_526 = 0xEEF9L;
                        return l_526;
                    }
                    else
                    {
                        g_50.f4 = g_447;
                    }
                }
                for (g_50.f4 = 0; (g_50.f4 < (-20)); g_50.f4--)
                {
                    struct S0 l_529 = {0x179F6674L,0xB941B23EL,0x48L,0xF0L,-1L};
                    l_450 = l_529;
                    l_158 = (g_50.f4 ^ (safe_rshift_func_uint8_t_u_s((2UL >= p_38), ((((safe_add_func_uint16_t_u_u((g_447 >= (safe_sub_func_int32_t_s_s((safe_sub_func_int8_t_s_s(1L, ((((p_38 || (l_538 , (safe_add_func_uint32_t_u_u((safe_mod_func_int8_t_s_s(0xF4L, 0x90L)), 1UL)))) >= l_461) != p_38) < g_86.f1))), l_493))), p_39)) , 0x9D55L) >= 7UL) > 0x5ECCFE28L))));
                    return l_492;
                }
            }
        }
    }
    else
    {
        int32_t l_567 = 0x5A67771AL;
        struct S1 l_578 = {2UL,7UL,0xFA4EL,0x8471L,7L};
        if ((safe_mod_func_uint16_t_u_u((g_235.f0 , (safe_div_func_uint32_t_u_u(p_39, (0x47L & (safe_lshift_func_uint16_t_u_u((4UL | (((~(g_235.f2 | p_38)) < (((safe_lshift_func_uint8_t_u_u((65535UL > (safe_mod_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((+(safe_sub_func_uint16_t_u_u((0xEDL >= (safe_rshift_func_int16_t_s_u((+0x3A45L), 13))), g_50.f3))), g_50.f4)), 65528UL))), 7)) <= g_50.f1) & 0UL)) && p_39)), 4)))))), l_562)))
        {
            uint32_t l_572 = 0x8703EC12L;
            int32_t l_573 = 0xB6BE4E08L;
            l_573 = (4294967292UL == (safe_add_func_int32_t_s_s((safe_sub_func_int16_t_s_s(l_567, (g_159 != (((safe_div_func_uint16_t_u_u(p_38, 0x5343L)) < 0x233714A2L) < (1UL != ((safe_sub_func_uint8_t_u_u((((p_38 == (((((p_39 >= (-1L)) | l_567) && l_572) , l_572) & g_235.f3)) || g_50.f2) & (-2L)), g_159)) || g_50.f2)))))), p_38)));
        }
        else
        {
            int32_t l_597 = 0xF4354815L;
            struct S1 l_598 = {255UL,0x83L,0xDC64L,0UL,4L};
            if (g_235.f4)
                goto lbl_574;
            l_598 = ((g_50.f0 >= (((safe_lshift_func_int8_t_s_s(l_567, (l_538.f4 || g_86.f1))) & (safe_unary_minus_func_uint8_t_u((l_578 , p_38)))) , ((safe_rshift_func_int16_t_s_s((safe_div_func_uint16_t_u_u(g_50.f3, (safe_rshift_func_int16_t_s_s(((safe_div_func_int32_t_s_s(((safe_add_func_int16_t_s_s((safe_sub_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s(((g_525 || ((safe_add_func_uint16_t_u_u((safe_add_func_int32_t_s_s(0xF7C67319L, 0xCA1A1E9AL)), p_39)) || l_597)) > l_132.f4), 11)), l_578.f2)), 65529UL)) ^ g_235.f2), 0x3EB5AF86L)) | 0x8EACL), 15)))), p_38)) <= l_386.f2))) , l_598);
        }
        for (g_86.f0 = 0; (g_86.f0 == 50); g_86.f0 = safe_add_func_uint16_t_u_u(g_86.f0, 7))
        {
            int32_t l_614 = 1L;
            for (g_86.f4 = 0; (g_86.f4 <= 19); g_86.f4++)
            {
                return g_346;
            }
            for (p_38 = 0; (p_38 > (-15)); p_38--)
            {
                int32_t l_609 = 0xA75933EBL;
                g_50.f4 = ((safe_mod_func_uint8_t_u_u(((g_235.f3 , (((((safe_rshift_func_uint16_t_u_s((((-1L) & ((l_609 && 255UL) < (p_39 || (g_50.f2 | (safe_lshift_func_int8_t_s_u((((safe_rshift_func_uint16_t_u_s(g_50.f3, 5)) == (l_614 > (((safe_mod_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_u((~(l_622 , 0xB36FL)), 8)), 0)), p_38)) < l_538.f4) || 65535UL))) >= l_578.f2), g_235.f0)))))) || p_39), 14)) | l_609) <= g_50.f2) != p_38) || 1L)) < g_50.f1), l_614)) , g_525);
                if (p_39)
                    continue;
                l_132.f4 = (safe_mod_func_int32_t_s_s((safe_lshift_func_int16_t_s_s(((safe_add_func_int8_t_s_s(((((((((safe_add_func_int32_t_s_s((safe_div_func_int16_t_s_s((safe_unary_minus_func_int8_t_s(((((0L >= l_614) , g_102) == ((~(-4L)) > (((safe_div_func_uint16_t_u_u(((((safe_mod_func_int32_t_s_s(g_50.f0, ((~(((((((((safe_rshift_func_uint16_t_u_u((((g_50 , (((((safe_add_func_uint8_t_u_u(0xD5L, ((p_38 ^ (p_38 > p_38)) > g_235.f2))) | 1L) > 1UL) ^ p_38) || 1L)) && p_38) > g_235.f3), l_578.f0)) >= 6UL) != 0xF3L) > 4UL) <= 0x9273L) ^ p_38) == l_609) <= l_578.f0) | 0x1EL)) ^ l_578.f1))) & g_525) , 1L) != l_108), p_39)) || g_447) != (-6L)))) <= 7L))), p_39)), g_86.f1)) == l_614) , p_38) >= 0x7B73L) || l_609) < 0UL) != 0x9746L) > p_38), l_538.f2)) && p_39), 1)), 0xA545B3E2L));
            }
            return l_538.f4;
        }
        for (g_346 = 4; (g_346 >= 1); g_346--)
        {
            l_578 = g_86;
        }
    }
    l_132.f4 = (safe_rshift_func_int8_t_s_s((safe_div_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(g_50.f4, 1)), (0x6DFAL || ((safe_sub_func_uint16_t_u_u((((g_86.f2 != g_50.f1) < ((l_132.f3 ^ ((safe_lshift_func_uint8_t_u_s(p_39, ((safe_add_func_uint32_t_u_u((safe_add_func_int8_t_s_s(((safe_mod_func_uint32_t_u_u(4UL, (safe_div_func_uint32_t_u_u(((safe_lshift_func_int16_t_s_u((safe_add_func_uint32_t_u_u(((l_538.f0 == ((safe_mod_func_uint16_t_u_u(((((((g_447 || 0x9CF7L) <= l_622.f0) , l_670) & l_132.f4) , 0x3CL) | l_132.f0), g_525)) <= (-5L))) == 0x161CE606L), 0xA65998A3L)), 15)) > l_622.f2), p_38)))) & l_132.f0), p_38)), p_39)) != p_38))) == l_622.f1)) <= p_38)) > g_50.f3), 2L)) <= p_39)))), g_235.f3));
    g_50.f4 = (l_386.f2 ^ (safe_mod_func_uint8_t_u_u((l_538.f0 | (safe_lshift_func_uint8_t_u_s((((safe_add_func_uint16_t_u_u(((safe_div_func_int8_t_s_s(((l_132.f3 > (safe_mod_func_int8_t_s_s(p_38, ((safe_rshift_func_uint8_t_u_s((((((0x9189EAB9L == (((+(-5L)) & (((((g_50.f3 < l_386.f0) || (((l_622.f4 ^ l_132.f1) | 0x47L) || p_39)) < (-1L)) != p_39) != p_38)) == l_386.f0)) , 0x8F74L) <= 0x541FL) && l_386.f0) != 3UL), p_38)) | p_39)))) | g_159), 250UL)) < g_86.f2), g_235.f0)) ^ g_50.f3) >= p_39), 4))), l_686)));
    return l_538.f3;
}
inline static int8_t func_40(uint8_t p_41, int8_t p_42, struct S0 p_43)
{
    struct S1 l_69 = {0x35L,255UL,1UL,0x28F8L,-2L};
    g_50 = g_50;
    p_43.f4 = ((safe_lshift_func_int16_t_s_u(p_43.f4, 6)) ^ ((((safe_add_func_uint8_t_u_u(((safe_mod_func_uint16_t_u_u(p_43.f4, (((p_43.f0 | g_50.f4) < (safe_rshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_s(func_62(((safe_add_func_int16_t_s_s((l_69 , (+(-10L))), (((safe_unary_minus_func_int32_t_s(l_69.f2)) <= g_50.f2) , (safe_div_func_uint16_t_u_u(l_69.f3, g_50.f4))))) || 1L), l_69.f3, g_50.f0, l_69.f0), p_43.f3)), 15))) && l_69.f0))) && l_69.f2), l_69.f4)) & 9L) != l_69.f0) | p_42));
    return p_43.f1;
}
inline static int16_t func_62(int32_t p_63, int32_t p_64, int32_t p_65, int8_t p_66)
{
    int32_t l_78 = 0L;
    p_63 = (((((safe_add_func_uint32_t_u_u(((g_50.f1 ^ 0x10E9FB38L) > ((safe_rshift_func_uint16_t_u_s((l_78 , (p_63 < p_66)), 2)) > l_78)), (safe_lshift_func_uint16_t_u_u(((((safe_div_func_uint32_t_u_u(((safe_sub_func_uint32_t_u_u((l_78 < (((p_65 > ((~l_78) > p_66)) ^ 0x1B0FACDCL) > g_50.f4)), 1L)) , l_78), p_64)) <= g_50.f2) , 0x12L) < 0x2FL), g_50.f1)))) , p_63) >= p_65) | p_65) != p_63);
    if (g_50.f2)
        goto lbl_87;
lbl_87:
    g_86 = g_86;
    g_102 = (0x12EDL > (l_78 != ((safe_sub_func_uint32_t_u_u(l_78, 8L)) & (g_86.f4 , (((safe_lshift_func_int8_t_s_u((g_50.f1 , ((0x5FBEL | (l_78 | (((safe_rshift_func_int8_t_s_u((safe_add_func_uint32_t_u_u((safe_div_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(((p_65 ^ g_86.f2) || 0xF57EL), 1)), p_64)), l_78)), 0)) & g_31) != p_65))) || p_64)), p_63)) || 0x960BL) != l_78)))));
    return g_86.f1;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_31;
    csmith_sink_ = g_50.f0;
    csmith_sink_ = g_50.f1;
    csmith_sink_ = g_50.f2;
    csmith_sink_ = g_50.f3;
    csmith_sink_ = g_50.f4;
    csmith_sink_ = g_86.f0;
    csmith_sink_ = g_86.f1;
    csmith_sink_ = g_86.f2;
    csmith_sink_ = g_86.f3;
    csmith_sink_ = g_86.f4;
    csmith_sink_ = g_102;
    csmith_sink_ = g_159;
    csmith_sink_ = g_235.f0;
    csmith_sink_ = g_235.f1;
    csmith_sink_ = g_235.f2;
    csmith_sink_ = g_235.f3;
    csmith_sink_ = g_235.f4;
    csmith_sink_ = g_346;
    csmith_sink_ = g_447;
    csmith_sink_ = g_525;
    csmith_sink_ = g_968;
    csmith_sink_ = g_981.f0;
    csmith_sink_ = g_981.f1;
    csmith_sink_ = g_981.f2;
    csmith_sink_ = g_981.f3;
    csmith_sink_ = g_981.f4;
    csmith_sink_ = g_983.f0;
    csmith_sink_ = g_983.f1;
    csmith_sink_ = g_983.f2;
    csmith_sink_ = g_983.f3;
    csmith_sink_ = g_983.f4;
    platform_main_end(0,0);
    return 0;
}
