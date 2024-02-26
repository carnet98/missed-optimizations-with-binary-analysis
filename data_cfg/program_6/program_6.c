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
static int16_t g_22 = 0xCDF1;
static uint32_t *g_23 = (void*)0;
static int32_t g_52[6] = {(-1), (-1), (-1), (-1), (-1), (-1)};
static int32_t g_53 = 0xF402BE2F;
static uint32_t g_56 = 0x5C7E4DDB;
static int32_t g_57 = (-2);
static uint32_t **g_88 = &g_23;
static uint32_t ***g_87[2][8] = {{&g_88, (void*)0, &g_88, &g_88, (void*)0, &g_88, (void*)0, &g_88}, {&g_88, (void*)0, &g_88, &g_88, (void*)0, &g_88, (void*)0, &g_88}};
static uint32_t ****g_86 = &g_87[1][5];
static int32_t *g_91 = &g_52[5];
static int32_t **g_95 = &g_91;
static int32_t ***g_94 = &g_95;
static uint32_t g_134[8] = {0x9DB4E21E, 0U, 0x9DB4E21E, 0U, 0x9DB4E21E, 0U, 0x9DB4E21E, 0U};
static int16_t g_158 = 0x7F3A;
static int32_t g_167[1][5] = {{0xB2AD5794, 0, 0xB2AD5794, 0, 0xB2AD5794}};
static uint32_t g_178 = 4294967295U;
static uint16_t g_180[8][9] = {{0xC6BB, 65535U, 0x1173, 0x2D86, 0x1173, 65535U, 0xC6BB, 0xFA84, 0xFE55}, {0xC6BB, 65535U, 0x1173, 0x2D86, 0x1173, 65535U, 0xC6BB, 0xFA84, 0xFE55}, {0xC6BB, 65535U, 0x1173, 0x2D86, 0x1173, 65535U, 0xC6BB, 0xFA84, 0xFE55}, {0xC6BB, 65535U, 0x1173, 0x2D86, 0x1173, 65535U, 0xC6BB, 0xFA84, 0xFE55}, {0xC6BB, 65535U, 0x1173, 0x2D86, 0x1173, 65535U, 0xC6BB, 0xFA84, 0xFE55}, {0xC6BB, 65535U, 0x1173, 0x2D86, 0x1173, 65535U, 0xC6BB, 0xFA84, 0xFE55}, {0xC6BB, 65535U, 0x1173, 0x2D86, 0x1173, 65535U, 0xC6BB, 0xFA84, 0xFE55}, {0xC6BB, 65535U, 0x1173, 0x2D86, 0x1173, 65535U, 0xC6BB, 0xFA84, 0xFE55}};
static uint16_t *g_179 = &g_180[5][2];
static uint16_t g_210 = 0x3813;
static int8_t g_240 = 0x7E;
static uint32_t g_261[2] = {4294967295U, 4294967295U};
static int32_t ****g_297[5] = {&g_94, &g_94, &g_94, &g_94, &g_94};
static int32_t *****g_296 = &g_297[2];
static uint8_t g_332 = 1U;
static uint8_t *g_331 = &g_332;
static uint8_t g_344 = 250U;
static int8_t *g_364 = &g_240;
static int8_t **g_363[2][10] = {{&g_364, &g_364, &g_364, &g_364, &g_364, &g_364, &g_364, &g_364, &g_364, &g_364}, {&g_364, &g_364, &g_364, &g_364, &g_364, &g_364, &g_364, &g_364, &g_364, &g_364}};
static uint16_t g_377 = 65531U;
static int32_t g_397 = 0x24F1B424;
static int8_t g_419 = 0;
static int16_t *g_449 = &g_22;
static int16_t **g_448[2][7][3] = {{{&g_449, &g_449, &g_449}, {&g_449, &g_449, &g_449}, {&g_449, &g_449, &g_449}, {&g_449, &g_449, &g_449}, {&g_449, &g_449, &g_449}, {&g_449, &g_449, &g_449}, {&g_449, &g_449, &g_449}}, {{&g_449, &g_449, &g_449}, {&g_449, &g_449, &g_449}, {&g_449, &g_449, &g_449}, {&g_449, &g_449, &g_449}, {&g_449, &g_449, &g_449}, {&g_449, &g_449, &g_449}, {&g_449, &g_449, &g_449}}};
static int16_t ***g_523 = &g_448[1][1][0];
static int16_t ***g_524 = &g_448[1][1][0];
static int32_t ***g_617 = &g_95;
static uint8_t **g_668 = (void*)0;
static uint8_t ***g_667 = &g_668;
static int8_t ***g_703[9] = {&g_363[0][9], &g_363[0][9], &g_363[0][9], &g_363[0][9], &g_363[0][9], &g_363[0][9], &g_363[0][9], &g_363[0][9], &g_363[0][9]};
static int32_t *g_722 = &g_57;
static int16_t g_766[5] = {(-1), 0x1D1E, (-1), 0x1D1E, (-1)};
static uint32_t g_823 = 0U;
static int8_t g_938 = 0xDC;
static int8_t ****g_954 = &g_703[6];
static int8_t *****g_953[7] = {&g_954, &g_954, &g_954, &g_954, &g_954, &g_954, &g_954};
static int32_t g_1001 = 0xB6D67F6E;
static int32_t g_1019 = (-6);
static int32_t func_1(void);
static int16_t func_7(uint32_t * p_8, uint16_t p_9, uint32_t * p_10);
static uint32_t * func_11(uint16_t p_12, uint32_t * p_13, uint32_t * p_14, int8_t p_15, uint32_t p_16);
static uint16_t func_17(int32_t p_18, uint32_t * p_19, uint32_t p_20, uint32_t * p_21);
static uint32_t * func_24(int32_t p_25, uint32_t p_26);
static int32_t * func_27(int32_t * p_28, uint32_t * p_29, uint32_t p_30);
static uint32_t * func_32(uint32_t p_33, int8_t p_34);
static uint32_t func_35(uint8_t p_36, int16_t p_37, int8_t p_38, int32_t * p_39);
static int16_t func_41(uint16_t p_42, int32_t p_43, int32_t p_44);
static uint32_t func_45(int32_t * p_46, int32_t p_47, uint32_t * p_48, uint32_t * p_49);
static int32_t func_1(void)
{
    int32_t l_2[10][1][1] = {{{0x167FA5C6}}, {{0x167FA5C6}}, {{0x167FA5C6}}, {{0x167FA5C6}}, {{0x167FA5C6}}, {{0x167FA5C6}}, {{0x167FA5C6}}, {{0x167FA5C6}}, {{0x167FA5C6}}, {{0x167FA5C6}}};
    uint32_t *l_3 = (void*)0;
    int8_t l_4[7] = {0, 0, 1, 0, 0, 1, 0};
    uint16_t *l_1037 = &g_180[1][2];
    uint32_t l_1039 = 0U;
    int32_t ****l_1058 = (void*)0;
    int32_t l_1076 = 0xA5A1D790;
    int i, j, k;
    (*g_722) = ((l_4[1] = l_2[1][0][0]) > (((4 >= (((safe_lshift_func_int16_t_s_s(func_7(func_11(func_17(g_22, g_23, g_22, func_24(g_22, g_22)), l_3, (*g_88), l_2[1][0][0], l_2[1][0][0]), l_2[1][0][0], l_3), 6)) > 6U) | l_2[1][0][0])) == 0xD0AB88F8) > 0x69BA));
    ((void) sizeof ((g_91 == 0 || g_91 == &g_56 || g_91 == &g_53) ? 1 : 0), __extension__ ({ if (g_91 == 0 || g_91 == &g_56 || g_91 == &g_53) ; else __assert_fail ("g_91 == 0 || g_91 == &g_56 || g_91 == &g_53", "/tmp/tmpbs9tgugr.c", 101, __extension__ __PRETTY_FUNCTION__); }));
    for (g_377 = 21; (g_377 == 26); g_377 = safe_add_func_int8_t_s_s(g_377, 5))
    {
        uint32_t l_1032 = 4294967293U;
        uint32_t *****l_1033 = (void*)0;
        uint32_t *l_1038 = &g_823;
        int16_t l_1061[8] = {0xBF5B, 1, 0xBF5B, 1, 0xBF5B, 1, 0xBF5B, 1};
        uint16_t l_1073 = 1U;
        int32_t *l_1075 = &l_2[8][0][0];
        int i;
        l_2[4][0][0] = (0 & ((l_1032 >= ((void*)0 == l_1033)) || ((safe_sub_func_uint32_t_u_u(((-1) < ((safe_unary_minus_func_uint8_t_u((*g_331))) ^ (1U || (((*l_1038) = ((l_4[1] > (&g_210 == l_1037)) | (*g_331))) ^ l_1039)))), l_4[4])) <= (*g_331))));
        for (g_22 = (-4); (g_22 == (-29)); g_22--)
        {
            uint32_t *****l_1044 = &g_86;
            int32_t l_1074 = (-1);
            for (g_158 = (-11); (g_158 != (-14)); --g_158)
            {
                uint8_t l_1054 = 1U;
                int8_t *****l_1064 = (void*)0;
                (**g_617) = (void*)0;
                ((void) sizeof ((g_91 == 0) ? 1 : 0), __extension__ ({ if (g_91 == 0) ; else __assert_fail ("g_91 == 0", "/tmp/tmpbs9tgugr.c", 122, __extension__ __PRETTY_FUNCTION__); }));
                for (g_57 = 1; (g_57 <= 4); g_57 += 1)
                {
                    l_1044 = &g_86;
                    for (l_1039 = 0; (l_1039 <= 0); l_1039 += 1)
                    {
                        int32_t **l_1045 = &g_722;
                        int i, j, k;
                        (*l_1045) = ((**g_94) = (**g_617));
                        ((void) sizeof ((g_722 == 0) ? 1 : 0), __extension__ ({ if (g_722 == 0) ; else __assert_fail ("g_722 == 0", "/tmp/tmpbs9tgugr.c", 132, __extension__ __PRETTY_FUNCTION__); }));
                        l_2[(l_1039 + 7)][l_1039][l_1039] = 0x84A7F8DF;
                    }
                    for (g_1001 = 0; (g_1001 >= 0); g_1001 -= 1)
                    {
                        int16_t *l_1055 = &g_766[0];
                        int i, j, k;
                        l_2[(g_1001 + 5)][g_1001][g_1001] = ((((safe_add_func_int16_t_s_s((safe_rshift_func_int8_t_s_u(l_2[(g_57 + 5)][g_1001][g_1001], g_261[g_1001])), (((*l_1055) = ((*g_449) == (safe_sub_func_uint32_t_u_u((0x5AD77B7C >= (l_1039 == l_1032)), ((safe_mul_func_uint8_t_u_u(0x2E, (l_1054 || 0x96ED))) >= l_4[2]))))) > (*g_449)))) && l_2[4][0][0]) > 0x76AEE916) ^ l_2[(g_57 + 5)][g_1001][g_1001]);
                        (**g_617) = (void*)0;
                    }
                }
                (****g_296) = l_1075;
                ((void) sizeof (((g_91 >= &l_2[0][0][0] && g_91 <= &l_2[9][0][0])) ? 1 : 0), __extension__ ({ if ((g_91 >= &l_2[0][0][0] && g_91 <= &l_2[9][0][0])) ; else __assert_fail ("(g_91 >= &l_2[0][0][0] && g_91 <= &l_2[9][0][0])", "/tmp/tmpbs9tgugr.c", 145, __extension__ __PRETTY_FUNCTION__); }));
                if ((*l_1075))
                    break;
            }
        }
        (****g_296) = (*g_95);
    }
    ((void) sizeof (((g_91 >= &l_2[0][0][0] && g_91 <= &l_2[9][0][0]) || g_91 == 0 || g_91 == &g_56 || g_91 == &g_53) ? 1 : 0), __extension__ ({ if ((g_91 >= &l_2[0][0][0] && g_91 <= &l_2[9][0][0]) || g_91 == 0 || g_91 == &g_56 || g_91 == &g_53) ; else __assert_fail ("(g_91 >= &l_2[0][0][0] && g_91 <= &l_2[9][0][0]) || g_91 == 0 || g_91 == &g_56 || g_91 == &g_53", "/tmp/tmpbs9tgugr.c", 153, __extension__ __PRETTY_FUNCTION__); }));
    ((void) sizeof ((g_722 == 0 || g_722 == &g_57) ? 1 : 0), __extension__ ({ if (g_722 == 0 || g_722 == &g_57) ; else __assert_fail ("g_722 == 0 || g_722 == &g_57", "/tmp/tmpbs9tgugr.c", 154, __extension__ __PRETTY_FUNCTION__); }));
    return l_1076;
}
static int16_t func_7(uint32_t * p_8, uint16_t p_9, uint32_t * p_10)
{
    int8_t l_971 = (-4);
    int16_t ***l_998 = &g_448[1][1][0];
    int32_t l_1012 = 1;
    int32_t l_1013 = 0xD1B9AD0E;
    uint32_t *l_1025 = &g_56;
    uint8_t *****l_1027 = (void*)0;
    uint8_t ****l_1029 = &g_667;
    uint8_t *****l_1028 = &l_1029;
    if (p_9)
    {
        uint8_t l_988 = 0U;
        int32_t l_1003 = 0x427B8F96;
lbl_973:
        (****g_296) = (**g_617);
        if ((l_971 = 3))
        {
            int32_t *****l_972 = &g_297[2];
            int8_t *l_989 = (void*)0;
            int16_t ***l_999 = &g_448[1][1][0];
            uint8_t ***l_1014 = (void*)0;
            if ((&g_297[2] != l_972))
            {
                uint32_t l_993 = 0x605D252F;
                int32_t *l_994[5];
                uint16_t l_1002 = 0x7C6E;
                int32_t *l_1004 = &g_53;
                uint32_t l_1018 = 4294967292U;
                int i;
                for (i = 0; i < 5; i++)
                    l_994[i] = &g_53;
                if (p_9)
                    goto lbl_973;
                for (g_240 = 11; (g_240 <= (-1)); g_240 = safe_sub_func_uint16_t_u_u(g_240, 1))
                {
                    int8_t *l_990 = &g_240;
                    uint16_t *l_991[1];
                    int32_t l_992 = (-1);
                    int8_t l_995 = (-10);
                    int16_t ****l_1000 = &g_524;
                    uint8_t l_1011 = 0xAA;
                    uint8_t ****l_1015[4];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_991[i] = &g_377;
                    for (i = 0; i < 4; i++)
                        l_1015[i] = &g_667;
                    l_994[0] = func_27(p_8, (*g_88), (safe_unary_minus_func_int32_t_s((safe_add_func_int8_t_s_s(0, ((safe_mul_func_int8_t_s_s(((safe_mod_func_int8_t_s_s((~(*g_179)), (((safe_mod_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s(l_988, p_9)), ((l_989 != l_990) ^ ((l_992 = (*g_179)) && (-1))))) && 0x87A6) || l_971))) | l_993), l_993)) == l_971))))));
                    ((void) sizeof ((g_91 == 0) ? 1 : 0), __extension__ ({ if (g_91 == 0) ; else __assert_fail ("g_91 == 0", "/tmp/tmpbs9tgugr.c", 216, __extension__ __PRETTY_FUNCTION__); }));
                    (****l_972) = (**g_94);
                    if ((safe_mul_func_int16_t_s_s((l_998 != ((*l_1000) = l_999)), p_9)))
                    {
                        if (g_1001)
                            break;
                    }
                    else
                    {
                        if (l_1002)
                            break;
                        l_1003 = 0x15666F80;
                        (*g_95) = l_1004;
                        ((void) sizeof ((g_91 == &g_53) ? 1 : 0), __extension__ ({ if (g_91 == &g_53) ; else __assert_fail ("g_91 == &g_53", "/tmp/tmpbs9tgugr.c", 230, __extension__ __PRETTY_FUNCTION__); }));
                        (*g_95) = (**g_617);
                    }
                    ((void) sizeof ((g_91 == &g_53 || g_91 == 0) ? 1 : 0), __extension__ ({ if (g_91 == &g_53 || g_91 == 0) ; else __assert_fail ("g_91 == &g_53 || g_91 == 0", "/tmp/tmpbs9tgugr.c", 234, __extension__ __PRETTY_FUNCTION__); }));
                    (*l_1004) = ((l_992 = (p_9 >= (safe_lshift_func_uint16_t_u_s((safe_mul_func_uint16_t_u_u(((*g_179) = (((*g_449) = 0xA288) == l_971)), (safe_rshift_func_uint16_t_u_u((l_1013 = (l_1012 = l_1011)), ((g_667 = (l_1014 = &g_668)) == (void*)0))))), (safe_mul_func_int16_t_s_s((p_9 & l_1018), (g_377 = p_9))))))) >= 2U);
                    ((void) sizeof ((l_1014 == &g_668) ? 1 : 0), __extension__ ({ if (l_1014 == &g_668) ; else __assert_fail ("l_1014 == &g_668", "/tmp/tmpbs9tgugr.c", 237, __extension__ __PRETTY_FUNCTION__); }));
                }
                ((void) sizeof ((g_91 == &g_53 || g_91 == 0) ? 1 : 0), __extension__ ({ if (g_91 == &g_53 || g_91 == 0) ; else __assert_fail ("g_91 == &g_53 || g_91 == 0", "/tmp/tmpbs9tgugr.c", 240, __extension__ __PRETTY_FUNCTION__); }));
                ((void) sizeof ((l_1014 == &g_668 || l_1014 == 0) ? 1 : 0), __extension__ ({ if (l_1014 == &g_668 || l_1014 == 0) ; else __assert_fail ("l_1014 == &g_668 || l_1014 == 0", "/tmp/tmpbs9tgugr.c", 242, __extension__ __PRETTY_FUNCTION__); }));
            }
            else
            {
                for (l_1003 = 4; (l_1003 >= 0); l_1003 -= 1)
                {
                    return g_1019;
                }
                (*g_722) = (0x649A32F9 || p_9);
            }
            ((void) sizeof ((g_91 == &g_53 || g_91 == 0) ? 1 : 0), __extension__ ({ if (g_91 == &g_53 || g_91 == 0) ; else __assert_fail ("g_91 == &g_53 || g_91 == 0", "/tmp/tmpbs9tgugr.c", 253, __extension__ __PRETTY_FUNCTION__); }));
            ((void) sizeof ((l_1014 == &g_668 || l_1014 == 0) ? 1 : 0), __extension__ ({ if (l_1014 == &g_668 || l_1014 == 0) ; else __assert_fail ("l_1014 == &g_668 || l_1014 == 0", "/tmp/tmpbs9tgugr.c", 254, __extension__ __PRETTY_FUNCTION__); }));
        }
        else
        {
            uint8_t l_1022 = 248U;
            for (l_971 = 12; (l_971 < 7); --l_971)
            {
                (*g_722) = l_1022;
            }
            (****g_296) = p_8;
            ((void) sizeof ((g_91 == 0 || g_91 == &g_56) ? 1 : 0), __extension__ ({ if (g_91 == 0 || g_91 == &g_56) ; else __assert_fail ("g_91 == 0 || g_91 == &g_56", "/tmp/tmpbs9tgugr.c", 265, __extension__ __PRETTY_FUNCTION__); }));
        }
        ((void) sizeof ((g_91 == 0 || g_91 == &g_56 || g_91 == &g_53) ? 1 : 0), __extension__ ({ if (g_91 == 0 || g_91 == &g_56 || g_91 == &g_53) ; else __assert_fail ("g_91 == 0 || g_91 == &g_56 || g_91 == &g_53", "/tmp/tmpbs9tgugr.c", 268, __extension__ __PRETTY_FUNCTION__); }));
        return p_9;
    }
    else
    {
        uint32_t l_1023 = 0x97A901F3;
        int32_t *l_1024[2][2][5] = {{{(void*)0, &l_1013, &g_167[0][0], (void*)0, &g_53}, {(void*)0, &l_1013, &g_167[0][0], (void*)0, &g_53}}, {{(void*)0, &l_1013, &g_167[0][0], (void*)0, &g_53}, {(void*)0, &l_1013, &g_167[0][0], (void*)0, &g_53}}};
        uint32_t l_1026[1][6][2] = {{{0xDC1DA48D, 2U}, {0xDC1DA48D, 2U}, {0xDC1DA48D, 2U}, {0xDC1DA48D, 2U}, {0xDC1DA48D, 2U}, {0xDC1DA48D, 2U}}};
        int i, j, k;
        (*g_95) = func_27((l_1024[0][1][4] = ((****g_296) = (**g_617))), l_1025, l_1026[0][5][0]);
        ((void) sizeof ((g_91 == &g_56) ? 1 : 0), __extension__ ({ if (g_91 == &g_56) ; else __assert_fail ("g_91 == &g_56", "/tmp/tmpbs9tgugr.c", 279, __extension__ __PRETTY_FUNCTION__); }));
    }
    ((void) sizeof ((g_91 == &g_56) ? 1 : 0), __extension__ ({ if (g_91 == &g_56) ; else __assert_fail ("g_91 == &g_56", "/tmp/tmpbs9tgugr.c", 282, __extension__ __PRETTY_FUNCTION__); }));
    (*l_1028) = (void*)0;
    ((void) sizeof ((l_1029 == 0) ? 1 : 0), __extension__ ({ if (l_1029 == 0) ; else __assert_fail ("l_1029 == 0", "/tmp/tmpbs9tgugr.c", 285, __extension__ __PRETTY_FUNCTION__); }));
    return p_9;
}
static uint32_t * func_11(uint16_t p_12, uint32_t * p_13, uint32_t * p_14, int8_t p_15, uint32_t p_16)
{
    uint32_t *l_970 = &g_56;
    for (g_397 = 0; (g_397 != 11); g_397 = safe_add_func_uint32_t_u_u(g_397, 1))
    {
        (*g_95) = p_13;
        return (*g_88);
    }
    return l_970;
}
static uint16_t func_17(int32_t p_18, uint32_t * p_19, uint32_t p_20, uint32_t * p_21)
{
    (*g_722) = p_18;
    return (*g_179);
}
static uint32_t * func_24(int32_t p_25, uint32_t p_26)
{
    int32_t *l_31 = (void*)0;
    int16_t l_40 = 0xAA08;
    uint32_t *l_106 = &g_56;
    int32_t *l_166 = &g_167[0][0];
    (*g_95) = func_27(l_31, func_32(func_35(l_40, func_41(((0xBE ^ p_26) > (((*l_106) = func_45(l_31, p_26, l_31, g_23)) != 2U)), g_22, l_40), p_25, l_166), p_26), p_25);
    ((void) sizeof ((g_91 == 0) ? 1 : 0), __extension__ ({ if (g_91 == 0) ; else __assert_fail ("g_91 == 0", "/tmp/tmpbs9tgugr.c", 336, __extension__ __PRETTY_FUNCTION__); }));
    for (g_823 = 0; (g_823 < 20); ++g_823)
    {
        uint32_t *l_967 = (void*)0;
        return l_967;
    }
    return (*g_88);
}
static int32_t * func_27(int32_t * p_28, uint32_t * p_29, uint32_t p_30)
{
    uint32_t l_957 = 5U;
    int16_t l_960 = 0x38CC;
    int32_t l_964 = (-5);
    (*g_95) = p_29;
    ((void) sizeof ((g_91 == 0 || g_91 == &g_56) ? 1 : 0), __extension__ ({ if (g_91 == 0 || g_91 == &g_56) ; else __assert_fail ("g_91 == 0 || g_91 == &g_56", "/tmp/tmpbs9tgugr.c", 362, __extension__ __PRETTY_FUNCTION__); }));
    (*g_722) = ((safe_sub_func_uint16_t_u_u((((l_957 ^ (safe_lshift_func_uint16_t_u_u((p_30 < ((l_960 | (~(p_30 || ((safe_add_func_int8_t_s_s(l_960, 1U)) > l_964)))) < ((p_30 || (l_957 & l_960)) >= l_957))), l_964))) != 0x8537A730) ^ p_30), p_30)) > (-2));
    return (*g_95);
}
static uint32_t * func_32(uint32_t p_33, int8_t p_34)
{
    int32_t ***l_792 = &g_95;
    int32_t *****l_799 = &g_297[0];
    int32_t l_801[4][4] = {{0xDF5CCD75, (-10), 0x1DA05545, (-10)}, {0xDF5CCD75, (-10), 0x1DA05545, (-10)}, {0xDF5CCD75, (-10), 0x1DA05545, (-10)}, {0xDF5CCD75, (-10), 0x1DA05545, (-10)}};
    uint32_t *l_825 = &g_56;
    uint32_t ***l_837 = &g_88;
    int8_t *l_841 = &g_419;
    int16_t *l_854 = &g_766[2];
    uint8_t **l_868 = &g_331;
    uint32_t l_870 = 0xE5AB9BAD;
    int16_t ***l_883 = &g_448[1][1][0];
    uint8_t ****l_888 = (void*)0;
    int8_t ****l_932 = &g_703[0];
    int i, j;
lbl_914:
    for (g_57 = 0; (g_57 <= 1); g_57 += 1)
    {
        uint8_t *l_786 = &g_344;
        int32_t ***l_793 = &g_95;
        int32_t ****l_794 = &l_793;
        uint32_t *l_795 = &g_56;
        int32_t l_796 = 0x97FD8CF9;
        int32_t *l_800 = (void*)0;
        int8_t l_838[3];
        int i;
        for (i = 0; i < 3; i++)
            l_838[i] = 0x92;
        l_796 = (safe_add_func_uint32_t_u_u((((*l_786) = ((*g_331) = 0x43)) <= ((safe_mul_func_int8_t_s_s(((255U ^ (safe_lshift_func_int8_t_s_s((!((*l_795) = (((**g_296) = l_792) != ((*l_794) = l_793)))), (((***l_792) || (***l_792)) != p_33)))) ^ (l_801[1][3] = (l_796 | (safe_sub_func_int16_t_s_s((((*g_179) = ((l_799 == (void*)0) != (***l_792))) < l_796), p_34))))), p_33)) ^ p_33)), p_34));
        if (p_34)
            break;
        for (g_56 = 0; (g_56 <= 7); g_56 += 1)
        {
            int32_t *l_807 = &l_801[0][1];
            uint8_t ****l_810 = &g_667;
            uint32_t ***l_836 = (void*)0;
            int8_t *l_839 = &l_838[0];
            int8_t *l_842 = &l_838[2];
        }
    }
    for (g_210 = 0; (g_210 == 53); g_210 = safe_add_func_int8_t_s_s(g_210, 5))
    {
        int16_t ***l_882 = &g_448[1][1][0];
        int32_t l_913[2];
        int32_t l_952 = 0x605A90B0;
        int i;
        for (i = 0; i < 2; i++)
            l_913[i] = 0xB12F0277;
        for (p_34 = 6; (p_34 >= 0); p_34 -= 1)
        {
            int16_t ****l_884 = &l_883;
            int16_t ****l_885 = &g_523;
            uint32_t l_899 = 4294967289U;
            int8_t ****l_915 = &g_703[3];
            int i;
            if ((((*g_331) = ((g_134[(p_34 + 1)] || (*****l_799)) || ((safe_sub_func_uint8_t_u_u(((g_524 = l_882) != ((*l_885) = ((*l_884) = l_883))), ((void*)0 != &g_448[1][1][0]))) & (safe_lshift_func_uint8_t_u_s(6U, 5))))) && (-2)))
            {
                uint8_t *****l_889 = &l_888;
                (*l_889) = l_888;
                if ((***g_617))
                    break;
            }
            else
            {
                int16_t l_890 = (-1);
                if (((***l_792) = ((p_33 & (((l_890 & (safe_lshift_func_int8_t_s_s(0x13, (safe_add_func_uint8_t_u_u(248U, p_33))))) < 0x9111) && (g_134[(p_34 + 1)] | ((((((safe_add_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u((*g_331), (*g_331))) == l_890), l_899)) && (**g_95)) ^ 0) >= p_33) & 0U) <= 0x74176977)))) | p_34)))
                {
                    (****g_296) = (void*)0;
                    ((void) sizeof ((g_91 == 0) ? 1 : 0), __extension__ ({ if (g_91 == 0) ; else __assert_fail ("g_91 == 0", "/tmp/tmpbs9tgugr.c", 444, __extension__ __PRETTY_FUNCTION__); }));
                }
                else
                {
                    for (l_890 = 1; (l_890 <= 7); l_890 += 1)
                    {
                        (*g_722) = (safe_mod_func_uint32_t_u_u(((safe_rshift_func_int16_t_s_s(((((((void*)0 != &g_668) & 0xE4D370B7) > (((+((safe_mul_func_int8_t_s_s(0, ((safe_lshift_func_int16_t_s_s((safe_unary_minus_func_int16_t_s(l_890)), 1)) | p_33))) <= ((safe_rshift_func_uint8_t_u_u((+((*g_179) = l_890)), l_913[0])) & (p_33 && 0xBF4D98B7)))) && p_33) || p_34)) == l_913[1]) >= 1U), p_33)) > 0x68C5), 0x0BF11632));
                        if (g_210)
                            goto lbl_914;
                        (*g_722) = p_34;
                        (*g_86) = l_837;
                    }
                    if (p_33)
                        continue;
                }
                ((void) sizeof ((g_91 == &g_57 || (g_91 >= &g_52[0] && g_91 <= &g_52[5]) || g_91 == 0) ? 1 : 0), __extension__ ({ if (g_91 == &g_57 || (g_91 >= &g_52[0] && g_91 <= &g_52[5]) || g_91 == 0) ; else __assert_fail ("g_91 == &g_57 || (g_91 >= &g_52[0] && g_91 <= &g_52[5]) || g_91 == 0", "/tmp/tmpbs9tgugr.c", 460, __extension__ __PRETTY_FUNCTION__); }));
            }
            ((void) sizeof ((g_91 == &g_57 || (g_91 >= &g_52[0] && g_91 <= &g_52[5]) || g_91 == 0) ? 1 : 0), __extension__ ({ if (g_91 == &g_57 || (g_91 >= &g_52[0] && g_91 <= &g_52[5]) || g_91 == 0) ; else __assert_fail ("g_91 == &g_57 || (g_91 >= &g_52[0] && g_91 <= &g_52[5]) || g_91 == 0", "/tmp/tmpbs9tgugr.c", 463, __extension__ __PRETTY_FUNCTION__); }));
            (*l_915) = &g_363[1][8];
            return (**l_837);
        }
        if ((*g_722))
            continue;
        for (g_178 = 28; (g_178 < 1); g_178 = safe_sub_func_uint16_t_u_u(g_178, 6))
        {
            uint8_t l_937 = 0xD1;
            l_913[0] = (safe_mul_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((0xB055 && (safe_rshift_func_uint8_t_u_u((0U == 0xFB69), (*****l_799)))), (safe_add_func_int16_t_s_s((safe_add_func_uint32_t_u_u((((safe_sub_func_int32_t_s_s((safe_add_func_int8_t_s_s(0x25, 0x10)), (l_932 != (void*)0))) && (safe_sub_func_uint32_t_u_u((safe_add_func_int8_t_s_s(p_34, (*g_331))), 0x5FCB9C23))) || l_937), g_938)), 0x349C)))), l_937));
            if ((*****l_799))
                break;
            l_952 = (safe_lshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u((l_913[0] = (((((safe_mod_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_s(((+((safe_lshift_func_uint8_t_u_u(255U, 3)) == (((((((*g_95) != (void*)0) && p_33) ^ (***l_792)) < (*****l_799)) & (0x0B8A47DF > (((*g_331) = l_913[0]) < p_33))) > 0x2653))) < l_913[0]), l_913[1])) < 252U), 0x00)), p_33)) > p_34) ^ p_33) || p_34) <= l_937)), 13)), (*g_179)));
        }
        l_913[0] = (0x0A5C || ((void*)0 == g_953[5]));
    }
    return (**l_837);
}
static uint32_t func_35(uint8_t p_36, int16_t p_37, int8_t p_38, int32_t * p_39)
{
    int16_t l_168 = 0;
    int16_t l_173 = (-9);
    int32_t l_176 = 0xB2C92A46;
    uint16_t *l_177 = (void*)0;
    uint16_t l_211 = 0x3440;
    int16_t l_215 = 1;
    int32_t *l_223 = &g_167[0][2];
    int32_t ***l_258 = &g_95;
    int32_t ***l_260 = &g_95;
    int32_t *****l_298 = &g_297[2];
    int32_t *l_300 = (void*)0;
    int8_t *l_321 = (void*)0;
    uint8_t *l_334 = &g_332;
    uint32_t **l_341 = &g_23;
    int32_t l_357 = 0xFC5FDFF8;
    int32_t ***l_414 = (void*)0;
    uint16_t l_460 = 0xF1D0;
    int32_t l_472 = (-2);
    uint32_t l_500 = 0xED819893;
    int16_t ***l_521 = &g_448[0][6][1];
    int16_t ****l_522[3][10][7] = {{{(void*)0, &l_521, (void*)0, &l_521, (void*)0, &l_521, (void*)0}, {(void*)0, &l_521, (void*)0, &l_521, (void*)0, &l_521, (void*)0}, {(void*)0, &l_521, (void*)0, &l_521, (void*)0, &l_521, (void*)0}, {(void*)0, &l_521, (void*)0, &l_521, (void*)0, &l_521, (void*)0}, {(void*)0, &l_521, (void*)0, &l_521, (void*)0, &l_521, (void*)0}, {(void*)0, &l_521, (void*)0, &l_521, (void*)0, &l_521, (void*)0}, {(void*)0, &l_521, (void*)0, &l_521, (void*)0, &l_521, (void*)0}, {(void*)0, &l_521, (void*)0, &l_521, (void*)0, &l_521, (void*)0}, {(void*)0, &l_521, (void*)0, &l_521, (void*)0, &l_521, (void*)0}, {(void*)0, &l_521, (void*)0, &l_521, (void*)0, &l_521, (void*)0}}, {{(void*)0, &l_521, (void*)0, &l_521, (void*)0, &l_521, (void*)0}, {(void*)0, &l_521, (void*)0, &l_521, (void*)0, &l_521, (void*)0}, {(void*)0, &l_521, (void*)0, &l_521, (void*)0, &l_521, (void*)0}, {(void*)0, &l_521, (void*)0, &l_521, (void*)0, &l_521, (void*)0}, {(void*)0, &l_521, (void*)0, &l_521, (void*)0, &l_521, (void*)0}, {(void*)0, &l_521, (void*)0, &l_521, (void*)0, &l_521, (void*)0}, {(void*)0, &l_521, (void*)0, &l_521, (void*)0, &l_521, (void*)0}, {(void*)0, &l_521, (void*)0, &l_521, (void*)0, &l_521, (void*)0}, {(void*)0, &l_521, (void*)0, &l_521, (void*)0, &l_521, (void*)0}, {(void*)0, &l_521, (void*)0, &l_521, (void*)0, &l_521, (void*)0}}, {{(void*)0, &l_521, (void*)0, &l_521, (void*)0, &l_521, (void*)0}, {(void*)0, &l_521, (void*)0, &l_521, (void*)0, &l_521, (void*)0}, {(void*)0, &l_521, (void*)0, &l_521, (void*)0, &l_521, (void*)0}, {(void*)0, &l_521, (void*)0, &l_521, (void*)0, &l_521, (void*)0}, {(void*)0, &l_521, (void*)0, &l_521, (void*)0, &l_521, (void*)0}, {(void*)0, &l_521, (void*)0, &l_521, (void*)0, &l_521, (void*)0}, {(void*)0, &l_521, (void*)0, &l_521, (void*)0, &l_521, (void*)0}, {(void*)0, &l_521, (void*)0, &l_521, (void*)0, &l_521, (void*)0}, {(void*)0, &l_521, (void*)0, &l_521, (void*)0, &l_521, (void*)0}, {(void*)0, &l_521, (void*)0, &l_521, (void*)0, &l_521, (void*)0}}};
    int32_t l_550[2][6] = {{0x7CDF4BE7, (-8), 0x7CDF4BE7, (-8), 0x7CDF4BE7, (-8)}, {0x7CDF4BE7, (-8), 0x7CDF4BE7, (-8), 0x7CDF4BE7, (-8)}};
    int16_t *l_561 = &g_158;
    uint8_t **l_719 = (void*)0;
    int32_t l_764 = (-4);
    int i, j, k;
    return g_766[0];
}
static int16_t func_41(uint16_t p_42, int32_t p_43, int32_t p_44)
{
    int32_t *l_112 = &g_57;
    int32_t ****l_159 = &g_94;
lbl_119:
    for (g_56 = 0; g_56 < 6; g_56 += 1)
    {
        g_52[g_56] = 0x757325A1;
    }
    for (g_56 = (-18); (g_56 == 10); g_56 = safe_add_func_uint16_t_u_u(g_56, 1))
    {
        uint32_t *l_135 = (void*)0;
        int32_t l_139 = (-1);
        int32_t **l_146 = &l_112;
        for (p_42 = (-20); (p_42 >= 16); p_42++)
        {
            uint32_t l_111[1];
            int32_t **l_145 = (void*)0;
            int32_t l_163 = 0xBFC28CD2;
            int i;
            for (i = 0; i < 1; i++)
                l_111[i] = 4294967294U;
            if (((*g_91) = l_111[0]))
            {
                (**g_94) = l_112;
                ((void) sizeof ((g_91 == &g_57) ? 1 : 0), __extension__ ({ if (g_91 == &g_57) ; else __assert_fail ("g_91 == &g_57", "/tmp/tmpbs9tgugr.c", 555, __extension__ __PRETTY_FUNCTION__); }));
                return g_56;
            }
            else
            {
                int32_t *l_118[2][3][10] = {{{&g_53, &g_57, &g_53, &g_53, &g_57, &g_53, (void*)0, &g_52[4], &g_52[5], &g_53}, {&g_53, &g_57, &g_53, &g_53, &g_57, &g_53, (void*)0, &g_52[4], &g_52[5], &g_53}, {&g_53, &g_57, &g_53, &g_53, &g_57, &g_53, (void*)0, &g_52[4], &g_52[5], &g_53}}, {{&g_53, &g_57, &g_53, &g_53, &g_57, &g_53, (void*)0, &g_52[4], &g_52[5], &g_53}, {&g_53, &g_57, &g_53, &g_53, &g_57, &g_53, (void*)0, &g_52[4], &g_52[5], &g_53}, {&g_53, &g_57, &g_53, &g_53, &g_57, &g_53, (void*)0, &g_52[4], &g_52[5], &g_53}}};
                uint8_t l_138 = 255U;
                int32_t ****l_162 = &g_94;
                int i, j, k;
                for (g_57 = 0; (g_57 == (-8)); g_57--)
                {
                    uint32_t l_117 = 2U;
                    for (g_53 = 22; (g_53 >= (-21)); g_53--)
                    {
                    }
                }
                if (g_56)
                    goto lbl_119;
                for (p_43 = 5; (p_43 >= 1); p_43 -= 1)
                {
                    int16_t *l_157 = &g_158;
                    uint32_t *l_161[8][5] = {{&l_111[0], (void*)0, &l_111[0], &l_111[0], &l_111[0]}, {&l_111[0], (void*)0, &l_111[0], &l_111[0], &l_111[0]}, {&l_111[0], (void*)0, &l_111[0], &l_111[0], &l_111[0]}, {&l_111[0], (void*)0, &l_111[0], &l_111[0], &l_111[0]}, {&l_111[0], (void*)0, &l_111[0], &l_111[0], &l_111[0]}, {&l_111[0], (void*)0, &l_111[0], &l_111[0], &l_111[0]}, {&l_111[0], (void*)0, &l_111[0], &l_111[0], &l_111[0]}, {&l_111[0], (void*)0, &l_111[0], &l_111[0], &l_111[0]}};
                    int i, j;
                }
            }
            (*g_91) = (0U || (safe_add_func_int8_t_s_s(0x35, g_57)));
            return p_43;
        }
    }
    return g_134[3];
}
static uint32_t func_45(int32_t * p_46, int32_t p_47, uint32_t * p_48, uint32_t * p_49)
{
    int16_t l_74[8] = {1, 1, 0, 1, 1, 0, 1, 1};
    int32_t *l_76 = (void*)0;
    int32_t **l_75 = &l_76;
    uint32_t **l_85[3][2][4] = {{{(void*)0, &g_23, &g_23, &g_23}, {(void*)0, &g_23, &g_23, &g_23}}, {{(void*)0, &g_23, &g_23, &g_23}, {(void*)0, &g_23, &g_23, &g_23}}, {{(void*)0, &g_23, &g_23, &g_23}, {(void*)0, &g_23, &g_23, &g_23}}};
    uint32_t ***l_84 = &l_85[2][1][1];
    int32_t ***l_97 = (void*)0;
    int32_t l_100 = 0xBFA339BC;
    uint32_t ***l_103[5][5] = {{&l_85[2][1][1], &l_85[2][1][1], &l_85[1][0][3], &l_85[2][1][1], &l_85[2][1][1]}, {&l_85[2][1][1], &l_85[2][1][1], &l_85[1][0][3], &l_85[2][1][1], &l_85[2][1][1]}, {&l_85[2][1][1], &l_85[2][1][1], &l_85[1][0][3], &l_85[2][1][1], &l_85[2][1][1]}, {&l_85[2][1][1], &l_85[2][1][1], &l_85[1][0][3], &l_85[2][1][1], &l_85[2][1][1]}, {&l_85[2][1][1], &l_85[2][1][1], &l_85[1][0][3], &l_85[2][1][1], &l_85[2][1][1]}};
    uint32_t *l_105[9] = {&g_56, &g_56, &g_56, &g_56, &g_56, &g_56, &g_56, &g_56, &g_56};
    uint32_t **l_104 = &l_105[6];
    int i, j, k;
    for (p_47 = 0; (p_47 <= 25); ++p_47)
    {
        uint32_t *l_55 = &g_56;
        uint32_t **l_54[4];
        int32_t *l_70 = &g_57;
        int32_t **l_69 = &l_70;
        uint32_t ***l_83 = &l_54[2];
        int i;
        for (i = 0; i < 4; i++)
            l_54[i] = &l_55;
        for (g_53 = 1; (g_53 <= 5); g_53 += 1)
        {
            int32_t **l_68 = (void*)0;
            int32_t ***l_67 = &l_68;
            int32_t ***l_73 = &l_69;
            int i;
            l_54[2] = &p_48;
            for (g_56 = 0; (g_56 <= 5); g_56 += 1)
            {
                int32_t *l_60 = &g_57;
                int i;
                for (g_57 = 5; (g_57 >= 1); g_57 -= 1)
                {
                    int32_t *l_59 = &g_52[g_57];
                    int32_t **l_58 = &l_59;
                    int i;
                    (*l_58) = &g_52[g_57];
                    (*l_58) = &g_52[1];
                    (*l_58) = l_60;
                    ((void) sizeof ((l_59 == &g_57) ? 1 : 0), __extension__ ({ if (l_59 == &g_57) ; else __assert_fail ("l_59 == &g_57", "/tmp/tmpbs9tgugr.c", 636, __extension__ __PRETTY_FUNCTION__); }));
                }
                if (g_52[g_53])
                    continue;
            }
            g_52[g_53] = (-7);
            g_52[0] = (safe_mul_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((safe_mul_func_int8_t_s_s((((((*l_70) = (((*l_67) = &p_46) == l_69)) < p_47) == 4U) || ((safe_add_func_uint8_t_u_u((p_47 ^ (0x32E8 > (-1))), (253U && (l_73 == (void*)0)))) | l_74[5])), 8)), 0xCBC8CA92)), l_74[5]));
            ((void) sizeof ((l_68 == &p_46) ? 1 : 0), __extension__ ({ if (l_68 == &p_46) ; else __assert_fail ("l_68 == &p_46", "/tmp/tmpbs9tgugr.c", 644, __extension__ __PRETTY_FUNCTION__); }));
        }
        (*l_70) = (l_75 == &p_46);
        for (g_56 = 26; (g_56 <= 28); g_56++)
        {
            int8_t l_79[6];
            uint32_t ***l_80 = &l_54[0];
            uint32_t ****l_81 = (void*)0;
            uint32_t ****l_82 = (void*)0;
            int i;
            for (i = 0; i < 6; i++)
                l_79[i] = 0x67;
            g_57 = l_79[5];
            l_83 = l_80;
            (**l_69) = ((l_84 = &l_54[0]) != &l_54[2]);
            ((void) sizeof (((l_84 >= &l_54[0] && l_84 <= &l_54[3])) ? 1 : 0), __extension__ ({ if ((l_84 >= &l_54[0] && l_84 <= &l_54[3])) ; else __assert_fail ("(l_84 >= &l_54[0] && l_84 <= &l_54[3])", "/tmp/tmpbs9tgugr.c", 662, __extension__ __PRETTY_FUNCTION__); }));
        }
    }
    l_104 = l_85[2][1][1];
    ((void) sizeof ((l_104 == 0 || l_104 == &g_23) ? 1 : 0), __extension__ ({ if (l_104 == 0 || l_104 == &g_23) ; else __assert_fail ("l_104 == 0 || l_104 == &g_23", "/tmp/tmpbs9tgugr.c", 671, __extension__ __PRETTY_FUNCTION__); }));
    g_57 = ((*g_91) = (***g_94));
    return p_47;
}
int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    g_91 = 0;
    csmith_sink_ = g_22;
    for (i = 0; i < 6; i++)
    {
        csmith_sink_ = g_52[i];
    }
    csmith_sink_ = g_53;
    csmith_sink_ = g_56;
    csmith_sink_ = g_57;
    for (i = 0; i < 8; i++)
    {
        csmith_sink_ = g_134[i];
    }
    csmith_sink_ = g_158;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
        {
            csmith_sink_ = g_167[i][j];
        }
    }
    csmith_sink_ = g_178;
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 9; j++)
        {
            csmith_sink_ = g_180[i][j];
        }
    }
    csmith_sink_ = g_210;
    csmith_sink_ = g_240;
    for (i = 0; i < 2; i++)
    {
        csmith_sink_ = g_261[i];
    }
    csmith_sink_ = g_332;
    csmith_sink_ = g_344;
    csmith_sink_ = g_377;
    csmith_sink_ = g_397;
    csmith_sink_ = g_419;
    for (i = 0; i < 5; i++)
    {
        csmith_sink_ = g_766[i];
    }
    csmith_sink_ = g_823;
    csmith_sink_ = g_938;
    csmith_sink_ = g_1001;
    csmith_sink_ = g_1019;
    platform_main_end(0,0);
    return 0;
}
