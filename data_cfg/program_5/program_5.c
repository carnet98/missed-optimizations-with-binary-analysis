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
static uint32_t g_16 = 0x90C54408;
static int32_t g_26 = (-10);
static int32_t g_68 = 0x58B506EE;
static int32_t *g_67 = &g_68;
static int32_t * const *g_117 = &g_67;
static int32_t * const **g_116 = &g_117;
static int32_t **g_208 = &g_67;
static int32_t ***g_207 = &g_208;
static int32_t ****g_206 = &g_207;
static int32_t *****g_205 = &g_206;
static int32_t g_249 = (-9);
static int32_t * const ***g_276 = &g_116;
static int32_t g_546 = (-6);
static uint16_t g_574 = 0x5782;
static uint32_t g_682 = 4U;
static int32_t **g_703 = &g_67;
static uint16_t g_927 = 0x769D;
static int32_t g_947 = 4;
static const int32_t *g_997 = (void*)0;
static uint32_t g_1142 = 0xE70858D2;
static int32_t **** const *g_1173 = &g_206;
static int32_t * const g_1213 = &g_68;
static int32_t g_1311 = 0x34A3A7AA;
static int8_t func_1(void);
inline static int32_t func_2(uint32_t p_3, int16_t p_4, int32_t p_5, int8_t p_6, uint16_t p_7);
inline static int16_t func_11(int32_t p_12, const uint16_t p_13, int16_t p_14, int32_t p_15);
inline static uint32_t func_17(int32_t p_18, int16_t p_19);
static int32_t func_20(uint8_t p_21, int32_t p_22, const int16_t p_23, uint32_t p_24);
static uint16_t func_33(int8_t p_34, int32_t * p_35, int32_t * const p_36, int16_t p_37, int32_t * p_38);
static int16_t func_39(uint32_t p_40);
static uint8_t func_41(int32_t * p_42, const int16_t p_43, int32_t * p_44, int32_t * p_45);
inline static const uint8_t func_51(uint16_t p_52, int32_t * p_53, uint32_t p_54, int32_t p_55, const int32_t * p_56);
inline static int32_t func_62(int32_t p_63, int32_t * p_64);
static int8_t func_1(void)
{
    uint32_t l_10 = 4294967295U;
    (*g_1213) = func_2((0xF72D4EA6 & ((safe_rshift_func_int16_t_s_s(((l_10 >= (((4294967288U >= (func_11(g_16, (func_17(func_20(l_10, (g_16 , ((g_16 >= l_10) ^ g_16)), g_16, l_10), l_10) || l_10), l_10, g_16) && g_249)) < 9U) || 0U)) < l_10), 0)) , g_546)), l_10, g_1142, g_1142, g_927);
    for (g_927 = 0; (g_927 <= 27); g_927 = safe_add_func_uint8_t_u_u(g_927, 1))
    {
        return g_682;
    }
    return l_10;
}
inline static int32_t func_2(uint32_t p_3, int16_t p_4, int32_t p_5, int8_t p_6, uint16_t p_7)
{
    int16_t l_1351 = 0xBD9A;
    int32_t l_1358 = (-1);
    l_1358 = (safe_mod_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_s(l_1351, l_1351)), g_947)), ((((p_3 , (((p_5 ^ ((-1) < ((((l_1351 == (safe_div_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((((p_3 & ((0xAA903B89 || p_5) || 0x893D4F76)) < g_249) , l_1351), 1U)), 0x588C))) >= l_1351) , (**g_1173)) != (void*)0))) > l_1351) | l_1351)) <= p_6) > 0x28) || 6)));
    return p_4;
}
inline static int16_t func_11(int32_t p_12, const uint16_t p_13, int16_t p_14, int32_t p_15)
{
    int32_t **** const *l_1180 = &g_206;
    int32_t l_1181 = 0x403E2D85;
    int8_t l_1310 = (-1);
    int32_t l_1344 = 0;
    if ((safe_add_func_int8_t_s_s((0 & (l_1180 == &g_276)), (g_947 , (l_1181 , p_14)))))
    {
        int32_t **l_1186 = &g_67;
        int8_t l_1238 = 1;
        (*g_208) = (*g_208);
        if ((((((((safe_lshift_func_uint8_t_u_s((p_15 ^ p_13), 5)) <= g_26) <= 0xCA985E2E) >= ((g_26 == 0xC9) < ((l_1186 != (***l_1180)) | (((((!65532U) , (**l_1186)) ^ 0x322A) == p_12) <= 0x2D5E488A)))) ^ 0) | 1) | p_15))
        {
            int32_t *l_1210 = (void*)0;
            int32_t ****l_1227 = &g_207;
            for (l_1181 = 13; (l_1181 >= 0); l_1181 = safe_sub_func_int8_t_s_s(l_1181, 4))
            {
                int32_t ***l_1202 = (void*)0;
                int32_t * const ****l_1209 = &g_276;
                int8_t l_1228 = 0;
                (*g_703) = &p_12;
                (*****l_1209) = (safe_mod_func_uint16_t_u_u(g_16, (+(safe_mod_func_uint32_t_u_u(((g_68 , p_12) || ((safe_rshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(((((~((safe_sub_func_uint8_t_u_u(0x6B, ((**l_1180) == l_1202))) || (safe_add_func_int32_t_s_s((safe_sub_func_uint32_t_u_u((p_15 & (safe_rshift_func_uint16_t_u_s((&g_206 == l_1209), 0))), (****g_206))), (***g_116))))) > p_12) <= 0xBA) == p_15), p_15)), 5)) , 1)), p_13)))));
                (****l_1180) = &p_12;
                if ((*****l_1209))
                {
                    uint32_t l_1216 = 0x485922E3;
                    (****l_1180) = (void*)0;
                    (*g_703) = l_1210;
                    (**g_207) = l_1210;
                    for (p_14 = 0; (p_14 > 2); p_14 = safe_add_func_int8_t_s_s(p_14, 7))
                    {
                        int32_t **l_1214 = (void*)0;
                        int32_t **l_1215 = &l_1210;
                        (*l_1215) = g_1213;
                        (**l_1215) = l_1216;
                        (*l_1210) = ((((p_13 & (g_682 > 0x37)) , (safe_add_func_uint32_t_u_u(((****l_1209) == &p_12), p_12))) < ((safe_add_func_int16_t_s_s((((safe_div_func_int32_t_s_s(((g_546 , (safe_mod_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_u((p_12 , ((((*g_1173) == l_1227) < 0x63330DF5) , l_1216)), 0)) || p_15), l_1228))) == 0x72), (-8))) & (-10)) < 0xFE0B28D5), 1)) <= 0xE8)) <= p_15);
                        p_12 = (-10);
                    }
                }
                else
                {
                    if ((*g_67))
                        break;
                }
            }
            for (p_15 = 0; (p_15 < 2); p_15 = safe_add_func_uint16_t_u_u(p_15, 4))
            {
                (**g_1173) = (*g_206);
            }
        }
        else
        {
            int16_t l_1231 = 0x53BD;
            int32_t **l_1257 = &g_67;
            int32_t l_1258 = 0;
            int32_t ****l_1261 = (void*)0;
            if ((((((p_14 >= l_1231) ^ ((safe_div_func_uint8_t_u_u(((safe_div_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(g_26, (l_1238 < 0x54AE1715))), ((safe_lshift_func_int16_t_s_u(g_947, (safe_rshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_u((((safe_sub_func_int16_t_s_s((((((!((safe_sub_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((!(p_15 & (safe_sub_func_uint16_t_u_u((((safe_div_func_uint8_t_u_u(p_12, p_13)) != g_927) ^ 1), g_574)))), 0x0243E11C)), l_1231)) | 0)) == (*****l_1180)) , (void*)0) != l_1257) < 1), g_26)) > g_249) , 0x2A80), 14)), 2)))) && g_26))) & 9U), 0x28)) ^ l_1258)) , p_15) != g_68) && 0x94))
            {
                int8_t l_1279 = 0x01;
                const int32_t **l_1282 = &g_997;
                const int32_t ***l_1281 = &l_1282;
                const int32_t ****l_1280 = &l_1281;
                int32_t *l_1296 = (void*)0;
                if ((**g_208))
                {
                    int32_t l_1262 = 0x169FA0BA;
                    if ((**l_1257))
                    {
                        int8_t l_1267 = 1;
                        (***g_206) = &p_12;
                        (****g_206) = (((safe_div_func_int8_t_s_s((((0x97F1D509 & p_12) && 1) >= (l_1261 != (void*)0)), (((l_1262 > (**l_1186)) > g_26) ^ p_12))) <= (*****l_1180)) && 0xF143);
                        (****g_206) = ((safe_mod_func_uint32_t_u_u(((safe_sub_func_int32_t_s_s(l_1267, ((p_13 > (safe_div_func_int16_t_s_s((p_12 != (safe_lshift_func_uint16_t_u_s((p_13 && (safe_add_func_int32_t_s_s((((*****l_1180) < ((1U <= 0x5B4419E5) || ((-1) < (p_12 == (*****l_1180))))) | 255U), p_12))), 10))), 4U))) < (*****l_1180)))) && 0x6B32), (*g_67))) , (***g_116));
                    }
                    else
                    {
                        (*g_208) = (*l_1186);
                        (****g_1173) = (**g_207);
                    }
                    if ((safe_sub_func_uint8_t_u_u((g_682 ^ (safe_rshift_func_int8_t_s_u(0x8D, 3))), 0x51)))
                    {
                        (****g_276) = (p_12 & g_574);
                        return g_249;
                    }
                    else
                    {
                        int32_t *l_1278 = &g_249;
                        l_1278 = (***g_276);
                        return l_1279;
                    }
                }
                else
                {
                    uint32_t l_1295 = 4294967290U;
                    int32_t *l_1312 = &l_1258;
                    if ((((void*)0 == l_1280) ^ ((((-1) <= (safe_div_func_int32_t_s_s((*****l_1180), 4294967290U))) < g_26) | (safe_lshift_func_int8_t_s_s(p_14, 6)))))
                    {
                        int32_t ****l_1294 = &g_207;
                        (**l_1186) = ((0U >= (((+(((safe_mod_func_uint8_t_u_u((g_574 , ((5 || ((safe_add_func_uint32_t_u_u(((((g_927 < ((l_1294 != (*g_1173)) != ((-5) | g_546))) , (**g_116)) != (**g_116)) | g_682), 0x91BF614C)) < l_1295)) || 3)), l_1295)) != 0xB93F) ^ g_927)) ^ 4294967287U) != (****l_1294))) , 0x9B521567);
                        (****g_205) = &p_12;
                        (**g_207) = l_1296;
                    }
                    else
                    {
                        int32_t **l_1309 = &l_1296;
                        (*l_1309) = (((safe_sub_func_uint32_t_u_u((safe_sub_func_int32_t_s_s((l_1261 == (void*)0), (&g_276 != &g_206))), (((*g_1173) != (*l_1180)) < ((safe_div_func_int16_t_s_s((**l_1186), (safe_div_func_int8_t_s_s((safe_add_func_int32_t_s_s((((((safe_add_func_uint8_t_u_u(g_1142, (((*g_207) == l_1309) >= l_1295))) , 0x6ACB) > p_13) > 1U) && (****g_206)), p_13)), l_1310)))) < p_12)))) || g_1311) , &p_12);
                        (****l_1180) = &p_12;
                        (***l_1280) = &p_12;
                        l_1312 = &p_12;
                    }
                }
                for (g_26 = 0; (g_26 == (-27)); --g_26)
                {
                    int32_t l_1328 = 0;
                    (*g_703) = (*l_1186);
                    for (g_947 = 2; (g_947 < 1); g_947--)
                    {
                        int32_t ***l_1325 = &l_1257;
                        (*g_703) = (****g_205);
                        if ((*g_1213))
                            break;
                        (*g_1213) = (safe_mod_func_int16_t_s_s((safe_sub_func_int16_t_s_s((((safe_sub_func_int32_t_s_s((safe_sub_func_int32_t_s_s((l_1325 != (void*)0), (safe_lshift_func_int8_t_s_s(((**g_205) == (void*)0), 2)))), ((((((void*)0 == (***g_206)) & (1 >= 0x6C72C8E3)) > ((**l_1280) != (**l_1280))) , 0x37) < 0x1C))) , l_1328) & p_14), 0x18E3)), g_947));
                        (**l_1281) = (**l_1325);
                    }
                    (*g_1213) = (safe_lshift_func_uint8_t_u_u(l_1328, (safe_mod_func_uint32_t_u_u(((safe_lshift_func_uint16_t_u_u((((safe_lshift_func_int8_t_s_s(0x9E, 0)) >= 4294967293U) > 0x18), 14)) < g_927), (safe_rshift_func_int16_t_s_u((((safe_mod_func_uint32_t_u_u((((void*)0 == (***l_1280)) | 0U), p_13)) <= g_927) && 0x9D80CDD3), 10))))));
                }
            }
            else
            {
                (**g_703) = (**l_1257);
            }
        }
        (*g_1213) = (p_14 < (p_12 | ((void*)0 == l_1186)));
        p_12 = (&l_1186 != (**l_1180));
    }
    else
    {
        (*****l_1180) = (****g_206);
        for (g_68 = 0; (g_68 < (-18)); g_68 = safe_sub_func_uint8_t_u_u(g_68, 7))
        {
            int32_t **l_1343 = &g_67;
            (*l_1343) = (**g_116);
        }
    }
    l_1344 = p_15;
    return g_574;
}
inline static uint32_t func_17(int32_t p_18, int16_t p_19)
{
    int32_t *****l_1174 = (void*)0;
    int32_t *l_1176 = &g_26;
    int32_t *l_1177 = (void*)0;
    for (g_249 = 0; (g_249 > 19); g_249 = safe_add_func_uint8_t_u_u(g_249, 4))
    {
        int32_t *l_1161 = &g_249;
        int16_t l_1175 = 0xA78D;
        l_1161 = l_1161;
        (*g_208) = ((safe_mod_func_uint32_t_u_u((((((((safe_div_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(0x1B05, 5)), g_682)) > ((0U == ((p_18 & ((safe_lshift_func_uint16_t_u_s(((safe_rshift_func_int8_t_s_u((*l_1161), 3)) == (!((g_1173 == l_1174) , ((*l_1161) && l_1175)))), p_18)) || 0x057B36A5)) & p_19)) <= p_18)) && g_927) > 6U) < 0x3159) , 0x0A6D275D) & p_18), (**g_117))) , (****g_1173));
    }
    l_1177 = (p_18 , l_1176);
    return g_249;
}
static int32_t func_20(uint8_t p_21, int32_t p_22, const int16_t p_23, uint32_t p_24)
{
    int32_t *l_25 = &g_26;
    (*l_25) = g_16;
    (*l_25) = (2U > (safe_lshift_func_int8_t_s_s(((((g_26 | (((((safe_lshift_func_uint8_t_u_s(((safe_sub_func_uint16_t_u_u(g_16, func_33((*l_25), l_25, l_25, (((func_39((*l_25)) , 0x758AF978) != p_24) , p_22), l_25))) , 0x13), p_23)) || p_23) >= p_22) >= (*l_25)) , g_574)) && p_24) < p_24) >= p_22), 0)));
    (*g_205) = (*g_205);
    (**g_117) = (((((((((safe_div_func_int8_t_s_s((g_574 , ((((*l_25) , (&g_276 == (void*)0)) && 9) , (0x3B5B < ((void*)0 == l_25)))), (((((safe_unary_minus_func_uint16_t_u((((0x140C && 0x5FE6) , g_26) | (*l_25)))) < g_26) || 0x68) , (***g_116)) | 0x304F785C))) && p_21) , p_21) <= p_21) == (-8)) && 0xBC) , (***g_116)) < 0xC70739DC) <= p_24);
    return g_26;
}
static uint16_t func_33(int8_t p_34, int32_t * p_35, int32_t * const p_36, int16_t p_37, int32_t * p_38)
{
    int32_t ****l_1149 = (void*)0;
    int16_t l_1154 = 0x5875;
    int32_t l_1155 = 0x5F2BDEF2;
    for (g_947 = 14; (g_947 >= 21); g_947++)
    {
        int32_t **l_1138 = (void*)0;
        int32_t **l_1139 = &g_67;
        (*l_1139) = p_36;
        p_35 = (*l_1139);
    }
    l_1155 = (safe_rshift_func_int8_t_s_u(((g_682 , g_1142) , ((((safe_div_func_uint16_t_u_u((((g_947 != ((((safe_mod_func_uint16_t_u_u(((((p_34 <= ((safe_add_func_uint16_t_u_u((0xA3 >= ((l_1149 == (void*)0) , 255U)), (((safe_rshift_func_int8_t_s_u(((((((safe_lshift_func_uint16_t_u_s(p_37, 10)) , l_1154) , (void*)0) == l_1149) ^ 0x3FC3) , 0xAE), 0)) == g_1142) < l_1154))) >= 0x6EAA)) && 0xB49E4BB3) , p_34) < (-1)), p_37)) > 0x3F) || 0xAC62) == g_927)) , 0) ^ l_1154), 65535U)) , (*g_205)) == l_1149) , g_1142)), p_37));
    (***g_206) = p_35;
    return g_68;
}
static int16_t func_39(uint32_t p_40)
{
    int32_t *l_46 = &g_26;
    int32_t ***l_334 = (void*)0;
    int32_t *****l_338 = &g_206;
    const int32_t ***l_767 = (void*)0;
    const int32_t ****l_766 = &l_767;
    const int32_t *****l_765 = &l_766;
    int32_t l_803 = 0x3A4460FC;
    int32_t l_829 = 0xC2F70400;
    int16_t l_887 = 0x346E;
    int32_t *****l_888 = &g_206;
    const int32_t l_1029 = 0x0CCB0EE6;
    int32_t l_1097 = 0x4F748CA8;
    int32_t **l_1135 = &g_67;
    if ((((func_41(l_46, ((~(safe_lshift_func_uint16_t_u_u(0xA971, (((((0x1BA5 >= (p_40 ^ (+(g_26 > 0xD9)))) && (((*l_46) >= func_51((*l_46), l_46, p_40, (*l_46), l_46)) && (*l_46))) > (*l_46)) , 1U) , g_68)))) , (*l_46)), l_46, l_46) , (**g_207)) != l_46) ^ p_40))
    {
        const uint16_t l_341 = 0x0854;
        int32_t l_344 = 0x71D79BB8;
        int32_t *l_408 = &l_344;
        int32_t ***l_424 = &g_208;
        uint32_t l_429 = 0xABF67B71;
        l_344 = (safe_add_func_int32_t_s_s((g_68 , (l_334 != (**g_205))), (safe_sub_func_uint32_t_u_u(g_249, (safe_unary_minus_func_uint32_t_u((((*l_46) , l_338) != (((safe_mod_func_uint8_t_u_u(l_341, (p_40 , (safe_add_func_uint8_t_u_u(((****g_206) , p_40), 0x36))))) < 0x34CB) , l_338))))))));
        g_249 = (((((void*)0 != (*l_338)) | (~(safe_div_func_int32_t_s_s((safe_rshift_func_int16_t_s_s((l_344 & 0xD0311AFB), (safe_rshift_func_uint8_t_u_u(0xE6, ((((safe_lshift_func_int16_t_s_s(((void*)0 == (*g_205)), ((safe_div_func_int32_t_s_s((((((!(safe_div_func_int32_t_s_s((safe_mod_func_int32_t_s_s(((safe_add_func_uint16_t_u_u(((0x8A97 && 0) > g_16), (-1))) , p_40), p_40)), (**g_117)))) <= l_341) && 1U) , l_341) | 5), 0x8D6C9D16)) ^ 0xF7))) | p_40) , (****l_338)) == (void*)0))))), l_344)))) == g_68) | g_249);
        for (g_68 = 0; (g_68 >= 13); g_68 = safe_add_func_uint32_t_u_u(g_68, 5))
        {
            const uint32_t l_371 = 0x9CFFEB18;
            int32_t *l_385 = &l_344;
            int32_t l_407 = 0x3DA29574;
            int32_t l_428 = 0xF51F510D;
            int32_t * const **l_434 = &g_117;
            int32_t *****l_461 = (void*)0;
            int8_t l_544 = (-4);
        }
    }
    else
    {
lbl_716:
        (***g_206) = (***g_276);
    }
    if ((*l_46))
    {
        int16_t l_553 = 0x1EE8;
        int32_t l_554 = 7;
        l_554 = ((**g_276) == (((((p_40 | ((p_40 || (l_338 != l_338)) & p_40)) && (g_546 < (0 ^ ((((0x92CA != g_249) ^ g_26) , l_553) , p_40)))) == p_40) && g_68) , (**g_276)));
        (**g_207) = &l_554;
        for (l_554 = (-5); (l_554 < 19); l_554++)
        {
            int32_t *l_575 = &g_68;
            (*l_575) = (safe_lshift_func_int16_t_s_s((((((safe_mod_func_int8_t_s_s((safe_sub_func_int8_t_s_s(((safe_mod_func_uint8_t_u_u((p_40 == g_249), (~((((g_26 , p_40) , (((safe_sub_func_int8_t_s_s((+(((g_16 == g_249) >= ((safe_unary_minus_func_uint32_t_u(((safe_sub_func_uint8_t_u_u(2U, (((safe_lshift_func_uint8_t_u_s(g_249, p_40)) , (****g_206)) != 0xA983F90F))) >= 0x00))) > 1)) , 0x2D90)), g_249)) < 65535U) >= g_249)) >= 0x71AF) == g_574)))) >= g_574), 7U)), p_40)) & p_40) != (*****l_338)) < p_40) > (-1)), g_546));
        }
    }
    else
    {
        int32_t **l_576 = &l_46;
        uint16_t l_599 = 0x2D8B;
        (*l_576) = (***g_276);
        for (g_574 = 0; (g_574 < 21); ++g_574)
        {
            int32_t l_583 = 0x0D2AF56B;
            int32_t ****l_594 = &g_207;
            int32_t *l_600 = (void*)0;
            int32_t *l_601 = &l_583;
            (*l_601) = ((((safe_mod_func_int8_t_s_s(((safe_div_func_int16_t_s_s((0xF1 > (((p_40 <= (((((l_583 , (-1)) , (*l_576)) == (*l_576)) , (safe_add_func_int16_t_s_s((safe_sub_func_int32_t_s_s((safe_add_func_int8_t_s_s((safe_mod_func_int8_t_s_s((safe_add_func_uint8_t_u_u(((*g_205) == l_594), ((((safe_rshift_func_int8_t_s_u((safe_mod_func_int8_t_s_s(g_249, (****l_594))), p_40)) >= g_546) < p_40) || 0))), p_40)), g_249)), 5)), p_40))) == (*****l_338))) <= l_599) , (*l_46))), (**l_576))) <= 0x7FA53BCF), g_546)) , 0xE24FCBCC) >= p_40) <= g_16);
            (****g_205) = (***l_594);
            (*l_601) = p_40;
        }
    }
    (*g_208) = l_46;
    for (g_574 = 0; (g_574 <= 19); ++g_574)
    {
        int32_t *l_604 = &g_249;
        int32_t l_661 = 0xF9774073;
        const uint8_t l_684 = 252U;
        uint32_t l_889 = 0x74A32B8D;
        int32_t ****l_938 = (void*)0;
        const int32_t l_967 = 0;
        int8_t l_986 = 0x71;
        uint32_t l_987 = 0U;
        int32_t ***l_1068 = &g_208;
        (*g_208) = l_604;
        if (((safe_mod_func_uint32_t_u_u(g_546, 0x87C04496)) <= p_40))
        {
            int32_t ****l_633 = &l_334;
            int16_t l_634 = 9;
            int32_t *l_641 = &g_26;
            int32_t **l_695 = &l_641;
            int32_t l_771 = 0x584459BC;
            int32_t * const ****l_795 = &g_276;
            (*****l_338) = ((safe_sub_func_uint8_t_u_u((*l_604), (*****l_338))) , (p_40 ^ ((safe_div_func_uint16_t_u_u(((((safe_add_func_int8_t_s_s(p_40, (safe_add_func_uint8_t_u_u((((void*)0 == (***l_338)) , ((0xF7 ^ (((*g_207) == (((safe_add_func_int8_t_s_s((!((void*)0 != (*g_205))), g_546)) , p_40) , (*g_116))) >= 0xF15F)) == p_40)), 0x78)))) <= g_546) , p_40) | g_574), p_40)) , g_546)));
            (***g_116) = ((safe_lshift_func_uint8_t_u_u((safe_unary_minus_func_uint32_t_u((safe_div_func_int16_t_s_s((safe_add_func_int32_t_s_s((**g_208), ((safe_div_func_uint32_t_u_u(((((*****l_338) | ((g_26 && (((***g_116) , ((0xB1 & (safe_mod_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u((p_40 ^ (((((((*g_205) == (((safe_rshift_func_uint16_t_u_s(0xF0AE, (((*l_604) <= (-1)) > (*l_46)))) ^ p_40) , l_633)) , (-7)) , (void*)0) != (*l_633)) , (void*)0) == (**g_206))), 7)), l_634))) == 0x73B8)) < (*****g_205))) ^ g_249)) || 0xEB20) & p_40), (*l_604))) < (***g_116)))), p_40)))), p_40)) <= p_40);
            if (((~((!(((((safe_div_func_int8_t_s_s((((((safe_div_func_uint32_t_u_u((((l_604 == (g_574 , l_641)) && g_26) < ((safe_add_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((((safe_sub_func_uint8_t_u_u(p_40, (~p_40))) > (safe_add_func_int8_t_s_s((safe_add_func_uint32_t_u_u(((safe_div_func_int32_t_s_s((((8 < (safe_div_func_int32_t_s_s(((safe_add_func_int8_t_s_s((((*l_604) ^ (((safe_div_func_uint16_t_u_u(g_16, 9)) , g_249) , (**g_117))) > 1U), l_661)) , (*l_604)), (*l_604)))) == (*****l_338)) != p_40), (*l_641))) && 0xDBCF), (**g_208))), p_40))) != 0x56), (*l_641))), (*l_604))) ^ g_574)), 5U)) >= 0xD34D6E84) & p_40) > (*l_604)) & (*l_604)), 246U)) & 0xC5A3CFD4) , (*l_641)) , g_546) | p_40)) , 1)) & 246U))
            {
                const int32_t *l_681 = &g_68;
                const int32_t **l_680 = &l_681;
                uint8_t l_683 = 0U;
                int32_t *****l_769 = &l_633;
                (*g_67) = (safe_mod_func_uint8_t_u_u(255U, (safe_lshift_func_uint16_t_u_s((((1 && (((safe_mod_func_int8_t_s_s((safe_add_func_uint8_t_u_u((p_40 ^ g_574), (((safe_sub_func_int32_t_s_s((((((safe_mod_func_uint32_t_u_u(((*l_633) == (void*)0), (safe_lshift_func_uint8_t_u_u((*****l_338), 1)))) & ((((safe_rshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_s((l_680 == (***l_338)), 2)), p_40)) && g_546) > p_40) , (*l_604))) == p_40) | g_249) < 65529U), g_682)) & (*l_681)) < 0x01A2F0B8))), 0x07)) > l_683) , 0x95)) == g_682) && p_40), g_26))));
                if (((l_684 <= 1) || (**l_680)))
                {
                    const int32_t ***l_697 = &l_680;
                    const int32_t ****l_696 = &l_697;
                    const int32_t *****l_698 = &l_696;
                    for (l_683 = 0; (l_683 < 13); l_683 = safe_add_func_int32_t_s_s(l_683, 2))
                    {
                        uint8_t l_689 = 0x96;
                        int32_t * const **l_692 = &g_117;
                        (*l_680) = (*l_680);
                        (*g_67) = (safe_div_func_int16_t_s_s(l_689, ((safe_mod_func_int16_t_s_s((l_692 != (*g_206)), (safe_add_func_uint8_t_u_u(((l_695 != (void*)0) > (g_26 & (**l_695))), (((p_40 ^ (g_68 == p_40)) || p_40) != 0x482BFD9E))))) || 0x297B)));
                        (****l_338) = (***g_206);
                        return (*l_46);
                    }
                    (*l_698) = l_696;
                }
                else
                {
                    int32_t **l_704 = &l_46;
                    for (p_40 = 0; (p_40 >= 18); ++p_40)
                    {
                        (*g_67) = ((safe_add_func_uint32_t_u_u((g_249 ^ ((g_703 == l_704) != ((safe_mod_func_int8_t_s_s((((((((!((~((**l_704) <= 0xC9)) < (+(*****l_338)))) || ((((safe_div_func_int8_t_s_s((safe_add_func_uint8_t_u_u(g_574, ((((((safe_mod_func_int8_t_s_s((p_40 ^ (0x6619627A == (**l_704))), g_249)) & 0xC3AB) < (**l_704)) | 0x2E85AD27) , p_40) , (*l_46)))), 1U)) , 0U) , g_16) & (**l_704))) , 0xBE) ^ g_16) <= p_40) , (**l_704)) == p_40), 0xB0)) , g_68))), p_40)) , p_40);
                    }
                    if (g_68)
                        goto lbl_716;
                    if (p_40)
                        break;
                    for (p_40 = (-13); (p_40 > 9); p_40 = safe_add_func_uint32_t_u_u(p_40, 1))
                    {
                        int16_t l_735 = 1;
                        (*l_680) = (*l_695);
                        if ((*l_641))
                            continue;
                        (****g_206) = (0xBFDF >= ((((((p_40 > p_40) >= ((((((safe_mod_func_uint16_t_u_u((safe_div_func_uint32_t_u_u((((g_546 , (((safe_rshift_func_uint16_t_u_s(((safe_add_func_uint8_t_u_u(p_40, ((+(safe_add_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((*****l_338), g_68)), (((safe_add_func_int8_t_s_s(5, ((!(*****l_338)) , (*l_641)))) | 5U) <= 2U)))) > (**l_695)))) != 6U), 8)) , g_68) && l_735)) , g_249) , p_40), 0xE5669A18)), g_249)) >= p_40) | (*l_46)) , 65533U) <= 0x0A71) & (**l_680))) , 0x6127) & (**l_704)) | g_68) ^ 1U));
                        (*g_703) = (****l_338);
                    }
                }
                for (g_682 = (-22); (g_682 >= 41); ++g_682)
                {
                    uint16_t l_770 = 5U;
                    uint8_t l_828 = 0xDA;
                    for (g_249 = 24; (g_249 <= 26); g_249++)
                    {
                        const int32_t l_768 = 0xC37E2B9E;
                        l_771 = (safe_sub_func_int32_t_s_s((safe_lshift_func_int16_t_s_u(g_546, ((safe_unary_minus_func_int8_t_s((safe_div_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(0x9387, (p_40 & p_40))), ((safe_add_func_uint16_t_u_u(((g_682 >= (safe_add_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((((((0x6508 || ((((((((safe_mod_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(((**g_208) || (safe_mod_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_s(((((safe_sub_func_int32_t_s_s((l_765 != (void*)0), (*l_604))) <= (*l_681)) > g_546) >= 254U), (*l_604))) < (*l_604)), 0x0E))), g_16)), g_546)) , l_768) == (*l_604)) , l_769) == (void*)0) == 4294967288U) && 65535U) ^ g_16)) , 0x28AF2A78) , 0xB8CE5931) != 0x29C52A4C) ^ g_249), 3)), l_768))) >= p_40), 65535U)) , (*l_604)))))) <= l_770))), 0));
                    }
                    if (((safe_lshift_func_int16_t_s_u(0x7747, 15)) & ((safe_lshift_func_uint16_t_u_s(((safe_rshift_func_int16_t_s_s((*l_604), 12)) && (((((*g_703) != (*l_680)) , (9 ^ (0xCB7D ^ p_40))) , g_16) , (((safe_sub_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(((safe_sub_func_int16_t_s_s(p_40, p_40)) , l_770), 246U)), p_40)) < 0xCCDD) , 0x2D))), p_40)) , p_40)))
                    {
                        int32_t *l_784 = &g_249;
                        if ((***g_207))
                            break;
                        (*l_695) = l_784;
                        return g_546;
                    }
                    else
                    {
                        (**g_117) = ((safe_rshift_func_int16_t_s_u(0x51D9, 0)) < (g_574 > ((safe_add_func_uint8_t_u_u(0x1B, p_40)) <= (((safe_div_func_int32_t_s_s(p_40, ((**l_695) && (safe_rshift_func_int8_t_s_s((((safe_lshift_func_int8_t_s_s(((((((-7) == g_26) , p_40) , (void*)0) != (void*)0) || (*l_604)), 1)) , (**g_205)) == (**l_338)), g_249))))) != p_40) || 0x039222E3))));
                        l_795 = &g_276;
                        (*g_208) = (*g_703);
                        (*g_703) = ((safe_div_func_int32_t_s_s((*****l_795), (safe_mod_func_uint32_t_u_u((((safe_lshift_func_int16_t_s_u((~(l_803 & (safe_lshift_func_uint16_t_u_u(((safe_sub_func_int16_t_s_s(((safe_div_func_uint32_t_u_u(g_68, p_40)) < ((safe_lshift_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(p_40, ((safe_div_func_int8_t_s_s((((safe_div_func_uint16_t_u_u(((safe_mod_func_uint8_t_u_u(((safe_sub_func_uint8_t_u_u(g_26, ((safe_sub_func_uint8_t_u_u((((safe_sub_func_int16_t_s_s((2 >= (*l_604)), (safe_lshift_func_int16_t_s_u(g_26, g_546)))) || p_40) , 0x30), l_828)) == p_40))) , p_40), p_40)) , p_40), 7U)) , p_40) ^ 0x37B94CF1), g_249)) ^ g_16))), g_546)) >= (*l_604))), p_40)) < g_26), g_574)))), g_16)) , l_829) , p_40), p_40)))) , (**g_207));
                    }
                    for (l_771 = (-30); (l_771 <= 11); l_771++)
                    {
                        if ((**g_703))
                            break;
                        if (p_40)
                            continue;
                    }
                    (*****l_795) = (*l_604);
                }
            }
            else
            {
                int32_t *l_832 = (void*)0;
                uint16_t l_844 = 65535U;
                int8_t l_871 = 0x29;
                (*g_703) = l_832;
                (****g_205) = l_604;
                if ((safe_sub_func_int8_t_s_s((g_26 || ((g_546 , (~(safe_sub_func_uint16_t_u_u((safe_add_func_int8_t_s_s((safe_div_func_int32_t_s_s((safe_add_func_uint32_t_u_u((((4294967295U < p_40) >= (((g_682 | ((*l_46) , (g_16 ^ p_40))) , &l_832) == (**g_206))) == (*l_46)), p_40)), (*l_46))), 0x23)), (**l_695))))) , l_844)), (*l_641))))
                {
                    int32_t *l_845 = &g_26;
                    (***g_116) = (*l_604);
                    (*g_208) = l_845;
                }
                else
                {
                    int32_t *l_858 = &g_249;
                    if (g_249)
                        goto lbl_716;
                    for (g_682 = (-9); (g_682 == 26); g_682++)
                    {
                        uint32_t l_852 = 0xD800C3F1;
                    }
                    (*g_703) = (p_40 , l_858);
                }
                for (g_249 = (-24); (g_249 >= (-13)); g_249 = safe_add_func_int32_t_s_s(g_249, 9))
                {
                    uint16_t l_863 = 0U;
                    int32_t *l_896 = (void*)0;
                    uint16_t l_913 = 0x50B8;
                    int32_t l_925 = 0x444CFFF9;
                    uint16_t l_928 = 0x5B24;
                    int32_t ***l_937 = &l_695;
                    for (g_546 = 0; (g_546 <= (-16)); g_546 = safe_sub_func_uint8_t_u_u(g_546, 5))
                    {
                        return p_40;
                    }
                    if (l_863)
                        continue;
                    (*g_703) = (**g_207);
                }
            }
            (****l_888) = l_604;
        }
        else
        {
            uint16_t l_944 = 0xDD09;
            (*****l_888) = ((g_546 <= g_16) > ((l_938 != (void*)0) & (safe_rshift_func_uint16_t_u_s(((+((safe_rshift_func_int16_t_s_s((l_944 , l_944), 15)) < g_682)) != ((**g_703) ^ ((safe_lshift_func_int16_t_s_u(g_947, 15)) , p_40))), p_40))));
            (*****l_338) = l_944;
            for (l_661 = (-24); (l_661 >= (-10)); l_661 = safe_add_func_int32_t_s_s(l_661, 1))
            {
                int32_t * const **l_957 = &g_117;
                (*l_604) = (**g_208);
                (***g_206) = (****g_205);
                (**g_703) = (((safe_lshift_func_int8_t_s_s((((safe_lshift_func_int8_t_s_u(((safe_sub_func_uint32_t_u_u((g_682 <= (((((!((l_957 != (void*)0) > p_40)) == (safe_rshift_func_int16_t_s_s((*****l_888), 2))) & ((((safe_div_func_int8_t_s_s(((&l_957 != (p_40 , (*l_765))) != (p_40 != 0x8D)), g_26)) , (****g_206)) == (**g_208)) | (-1))) , 0x5D) , p_40)), (**g_703))) , (-1)), g_249)) , l_938) != &l_957), 2)) < 0x0181B4B6) == g_546);
            }
        }
        for (l_661 = (-7); (l_661 < 21); l_661++)
        {
            (*****g_205) = (safe_rshift_func_int16_t_s_s(((+(&l_938 == (l_967 , &g_206))) == p_40), (((((safe_div_func_uint8_t_u_u(((((safe_mod_func_int32_t_s_s((safe_add_func_uint32_t_u_u(((safe_sub_func_int16_t_s_s(((p_40 != g_68) || (safe_div_func_uint16_t_u_u(((*l_604) < (safe_add_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((0x8BD7B8AA == (safe_mod_func_int32_t_s_s((***g_116), p_40))), p_40)), 2)), l_986))), l_987))), (*l_604))) >= 0xE4), g_26)), 0x4CCFCFA9)) != p_40) >= 7) > p_40), g_927)) ^ p_40) | g_68) && g_16) <= p_40)));
            (*g_703) = (**g_207);
            return p_40;
        }
        for (g_947 = 11; (g_947 >= (-29)); g_947--)
        {
            int8_t l_1013 = 0xEE;
            int32_t l_1052 = 0xFC70DBD5;
            const int32_t l_1076 = (-1);
            int32_t ** const **l_1106 = (void*)0;
            const int32_t **l_1113 = &g_997;
            const int32_t ** const *l_1112 = &l_1113;
            const int32_t ** const **l_1111 = &l_1112;
            const int32_t ** const ***l_1110 = &l_1111;
        }
    }
    return g_927;
}
static uint8_t func_41(int32_t * p_42, const int16_t p_43, int32_t * p_44, int32_t * p_45)
{
    int32_t *l_230 = &g_68;
    int32_t *****l_231 = &g_206;
    (**g_207) = l_230;
    (***g_207) = (g_68 > ((0U <= (246U ^ p_43)) == (((void*)0 == l_231) >= 0)));
    for (g_68 = 0; (g_68 <= (-26)); g_68 = safe_sub_func_int16_t_s_s(g_68, 9))
    {
        int32_t l_234 = (-7);
        int32_t ****l_241 = &g_207;
        int32_t l_305 = 0x273D293E;
        const int32_t l_325 = 0xE6595363;
        (**g_207) = p_42;
    }
    return (*l_230);
}
inline static const uint8_t func_51(uint16_t p_52, int32_t * p_53, uint32_t p_54, int32_t p_55, const int32_t * p_56)
{
    uint32_t l_59 = 4294967295U;
    int32_t *l_69 = &g_68;
    int32_t **l_80 = (void*)0;
    int32_t ***l_79 = &l_80;
    int32_t l_120 = 0x460CB503;
    int32_t l_121 = 0x05C77F51;
    int32_t l_160 = 0x61D7ECA5;
    int32_t l_192 = 0xF5BDECA5;
    const int32_t *l_217 = &g_26;
    int32_t l_227 = 0x6A24BEC2;
    if (((((safe_lshift_func_int16_t_s_s(0x3E32, ((((void*)0 != &g_26) , l_59) == (g_16 <= (g_26 ^ ((void*)0 != &g_26)))))) , ((func_62(l_59, &g_26) && (*p_56)) <= 0xA065)) <= l_59) , g_16))
    {
        return g_16;
    }
    else
    {
        g_67 = &g_26;
    }
    if ((*g_67))
    {
        int32_t **l_70 = &l_69;
        (*l_70) = l_69;
        (*l_70) = (*l_70);
        (**l_70) = (safe_rshift_func_int8_t_s_s((1 < (&p_55 == &p_55)), 6));
    }
    else
    {
        int32_t **l_78 = &l_69;
        int32_t *** const l_77 = &l_78;
        uint8_t l_99 = 1U;
        int32_t l_118 = 0x6E56265D;
        for (p_52 = 3; (p_52 <= 56); p_52 = safe_add_func_int32_t_s_s(p_52, 2))
        {
            const int32_t *l_76 = (void*)0;
            const int32_t **l_75 = &l_76;
            g_67 = (void*)0;
            (*l_75) = (void*)0;
            l_79 = l_77;
        }
        if ((safe_mod_func_int16_t_s_s((p_55 < (safe_rshift_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((safe_rshift_func_int8_t_s_s(((((safe_rshift_func_int16_t_s_u((((*l_69) && (safe_lshift_func_int16_t_s_s((9U >= ((safe_lshift_func_uint8_t_u_s(0x50, 1)) <= (safe_mod_func_uint32_t_u_u((safe_add_func_uint32_t_u_u((g_68 , l_99), (safe_add_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u((((g_16 , (((((((safe_mod_func_int16_t_s_s(((void*)0 == (*l_79)), (*l_69))) , (*p_56)) <= p_52) | 4294967292U) != 4294967295U) <= p_55) && g_16)) , 0U) < g_68), p_55)), p_54)))), 1U)))), 9))) > 0xBA), 10)) < p_55) == 0) & 0x899D3D8B), (**l_78))), 3U)), p_55))), p_54)))
        {
            int8_t l_119 = 0x4D;
            int32_t **l_173 = &g_67;
            p_55 = (safe_rshift_func_int16_t_s_u((((((void*)0 == &l_80) || (safe_mod_func_uint8_t_u_u((safe_add_func_int8_t_s_s((-1), (0U || ((g_16 < ((***l_77) || 0xDD)) > (((((((g_16 != (((((((((safe_sub_func_uint16_t_u_u(((*l_78) != (void*)0), p_55)) , (void*)0) == g_116) > g_68) == l_118) < l_119) < (***l_77)) ^ p_55) > l_120)) , &g_117) == &l_80) <= 0xCE71E83B) == p_54) == p_55) , 0xE3E6))))), 0xA6))) & 1U) , p_52), g_26));
            if (l_121)
            {
                int32_t ** const l_134 = (void*)0;
                uint32_t l_157 = 0x211E331E;
                int32_t l_159 = 0x7D319CEE;
                int32_t * const ***l_196 = &g_116;
                if ((safe_div_func_int8_t_s_s((safe_add_func_uint16_t_u_u(((((safe_rshift_func_int16_t_s_u(0x7CD1, (((safe_lshift_func_uint8_t_u_u(0x6B, 4)) >= (safe_div_func_int32_t_s_s(l_119, (-9)))) < (safe_rshift_func_int16_t_s_u((((((-1) != g_68) < ((void*)0 != (**g_116))) >= p_55) < p_54), 13))))) && p_54) & p_55) & (**l_78)), 0x93E3)), 0x7A)))
                {
                    int32_t ***l_135 = &l_78;
                    int32_t **l_162 = &g_67;
                    (**l_78) = (***l_77);
                    (*l_135) = l_134;
                    if (l_119)
                    {
                        (*l_69) = (*p_53);
                    }
                    else
                    {
                        int32_t l_156 = 0xA5B394F6;
                        int32_t *l_158 = (void*)0;
                        uint32_t l_161 = 4294967292U;
                        (*l_69) = ((((safe_div_func_uint8_t_u_u(g_26, (((((safe_lshift_func_int16_t_s_s((((safe_rshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((((safe_add_func_int16_t_s_s(0x7FF4, (((((safe_div_func_uint16_t_u_u((1 <= (((g_26 , (!(((safe_sub_func_int8_t_s_s(p_54, ((((((((safe_sub_func_uint32_t_u_u(((((&l_78 != ((*p_56) , &l_80)) > (!l_119)) <= l_156) , 0x34994D0E), 0x235839F2)) , p_52) | g_16) >= p_52) , &p_56) == (*g_116)) | 7) & (*p_56)))) == 0) == l_156))) && 0x9B) , l_157)), p_55)) , p_52) , l_158) != &p_55) | g_16))) , 1U) > l_159), 0)), g_26)) || g_16) , (-1)), p_54)) ^ p_52) , 255U) < l_160) & p_55))) == l_119) > l_161) | g_26);
                        return (*l_69);
                    }
                    (*l_162) = (**g_116);
                }
                else
                {
                    (**l_78) = (*p_56);
                }
                (*l_69) = (*p_56);
                for (g_68 = (-30); (g_68 < (-2)); g_68++)
                {
                    int32_t **l_165 = &g_67;
                    int32_t l_186 = 0x5E4FF753;
                    (*l_165) = (*g_117);
                    p_55 = ((0xD1870374 & (((p_54 , &l_165) == &g_117) , ((0x6DA7943A != 4294967295U) ^ p_54))) , (((safe_sub_func_int16_t_s_s(((((safe_mod_func_uint16_t_u_u((((!(safe_add_func_int32_t_s_s((*l_69), g_16))) && 0xF3) <= g_26), p_55)) < g_26) != g_16) ^ 0x472D), 0U)) , l_173) == &p_56));
                    if ((*p_56))
                    {
                        int32_t ***l_185 = &l_173;
                        l_186 = (g_16 ^ (g_26 > (((safe_lshift_func_uint16_t_u_u(((g_68 && (safe_mod_func_int8_t_s_s((safe_sub_func_int32_t_s_s((((*g_117) == ((0x5E5F9656 <= p_52) , &p_55)) != (!(((0U | (safe_rshift_func_uint16_t_u_s((safe_lshift_func_int16_t_s_s(((p_52 , (void*)0) == &p_55), 1)), 4))) , l_185) == &l_134))), g_26)), l_186))) && g_68), g_26)) | (*p_53)) && g_26)));
                    }
                    else
                    {
                        int32_t ***l_195 = (void*)0;
                        g_67 = &p_55;
                        (*l_173) = (((safe_lshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_u((((safe_unary_minus_func_uint8_t_u((0x9A & g_68))) | ((*g_116) == l_134)) != (((l_192 != ((*p_56) ^ ((g_68 ^ p_55) >= (safe_mod_func_int8_t_s_s((&p_55 != (*g_117)), 0x8F))))) , &g_117) != l_195)), 8)), g_26)) ^ (**l_173)) , (*l_173));
                    }
                }
                (*l_196) = &g_117;
            }
            else
            {
                (*l_173) = (p_55 , &p_55);
                (*l_78) = &p_55;
            }
            if ((65535U < (*l_69)))
            {
                const int16_t l_201 = 0x31F3;
                int32_t **l_202 = &g_67;
                int32_t l_203 = 9;
                int32_t *****l_209 = &g_206;
                (*l_202) = ((((safe_lshift_func_uint16_t_u_u((((0xCA | (((safe_rshift_func_int8_t_s_u(g_26, l_201)) , &l_80) != (void*)0)) , g_16) ^ g_26), (g_16 >= ((((p_52 > 9) | l_201) , l_201) , p_52)))) & 1) , g_16) , (*g_117));
                if (l_119)
                    goto lbl_204;
                if ((*p_53))
                {
                    return g_26;
                }
                else
                {
                    if ((&l_80 == &l_78))
                    {
                        l_203 = 0xC2E1585B;
lbl_204:
                        (*l_173) = &p_55;
                        l_209 = g_205;
                    }
                    else
                    {
                        uint16_t l_214 = 65527U;
                        (*l_69) = (safe_add_func_uint8_t_u_u((p_52 > ((((g_16 | (safe_sub_func_uint8_t_u_u((l_214 > (&p_53 == (*g_116))), ((l_214 ^ g_16) <= (safe_add_func_int16_t_s_s(p_54, p_52)))))) < (-6)) > (*l_69)) & 0x0BFAE5DC)), g_68));
                        (*g_208) = &p_55;
                    }
                    (**l_202) = (****g_206);
                }
            }
            else
            {
                const int32_t **l_218 = (void*)0;
                const int32_t **l_219 = &l_217;
                int32_t *** const *l_229 = &l_77;
                int32_t *** const **l_228 = &l_229;
                (*l_219) = l_217;
                (*l_69) = (!g_26);
                (*l_228) = (((safe_add_func_int16_t_s_s(((safe_div_func_int32_t_s_s((&l_218 == (void*)0), (65527U & (safe_rshift_func_int16_t_s_u(((p_52 & (((p_52 & p_55) && (((g_26 , (p_55 >= ((*l_173) == (void*)0))) == g_16) == g_16)) & 0x0C)) & 0xDBC78BEF), p_54))))) == l_227), 0xF4B6)) > g_26) , &l_77);
                (*l_173) = (**g_207);
            }
            (*l_69) = (*l_217);
        }
        else
        {
            (***l_77) = (*p_53);
            (*l_78) = &p_55;
        }
    }
    return p_54;
}
inline static int32_t func_62(int32_t p_63, int32_t * p_64)
{
    int32_t *l_66 = &g_26;
    int32_t **l_65 = &l_66;
    (*l_65) = &g_26;
    return (**l_65);
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_16;
    csmith_sink_ = g_26;
    csmith_sink_ = g_68;
    csmith_sink_ = g_249;
    csmith_sink_ = g_546;
    csmith_sink_ = g_574;
    csmith_sink_ = g_682;
    csmith_sink_ = g_927;
    csmith_sink_ = g_947;
    csmith_sink_ = g_1142;
    csmith_sink_ = g_1311;
    platform_main_end(0,0);
    return 0;
}
