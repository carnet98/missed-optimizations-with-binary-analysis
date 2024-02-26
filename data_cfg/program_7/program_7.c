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
static uint16_t g_8 = 65535U;
static int32_t g_31 = (-5);
static int32_t *g_65 = &g_31;
static int32_t g_69 = 0x6BA8A7E8;
static int32_t *g_68 = &g_69;
static int32_t **g_67[8] = {&g_68, (void*)0, &g_68, (void*)0, &g_68, (void*)0, &g_68, (void*)0};
static int32_t ****g_154 = (void*)0;
static int16_t g_237 = 2;
static uint32_t g_253[10] = {4294967291U, 4294967291U, 0x5242DE1A, 4294967291U, 4294967291U, 0x5242DE1A, 4294967291U, 4294967291U, 0x5242DE1A, 4294967291U};
static int32_t *****g_289 = (void*)0;
static uint32_t g_343 = 0x78F6FBE8;
static int32_t *g_347 = &g_69;
static int32_t *g_348 = &g_69;
static int32_t g_418 = (-5);
static int32_t g_456 = 0x5C873847;
static int32_t *g_492[2][2] = {{&g_31, &g_31}, {&g_31, &g_31}};
static uint32_t g_578 = 4294967294U;
static uint8_t g_583 = 255U;
static int32_t g_692 = (-6);
static int32_t g_709 = (-2);
static int32_t *g_708 = &g_709;
static int16_t g_930 = (-1);
static int8_t g_953 = 0xB3;
inline static int8_t func_1(void);
static uint16_t func_6(int8_t p_7);
static int32_t * func_9(int32_t p_10, int32_t p_11);
inline static uint16_t func_17(int32_t p_18, int32_t * p_19, int8_t p_20, int32_t * p_21, int32_t * p_22);
static int32_t * func_23(uint8_t p_24, int32_t p_25);
static uint8_t func_28(int32_t * p_29);
static int32_t * func_32(int32_t * p_33);
inline static int32_t * func_34(uint32_t p_35);
inline static int32_t ** func_38(int16_t p_39, int32_t ** p_40, int32_t ** p_41);
static int32_t ** func_42(int32_t * p_43, int32_t p_44, uint8_t p_45);
inline static int8_t func_1(void)
{
    uint32_t l_982 = 0x70B75324;
    int32_t l_983 = 0;
    l_983 = (+((safe_mod_func_uint16_t_u_u(((+func_6(g_8)) || (+g_343)), 0x70DB)) != (safe_sub_func_int32_t_s_s((safe_sub_func_int32_t_s_s(g_253[8], (((g_418 < l_982) && ((((-9) == (g_289 != (void*)0)) , l_982) == (-8))) || g_456))), l_982))));
    (*g_348) = (*g_708);
    return l_982;
}
static uint16_t func_6(int8_t p_7)
{
    int8_t l_14 = (-3);
    int32_t *l_30 = &g_31;
    int32_t *****l_427 = (void*)0;
    int16_t l_428[10] = {1, (-10), 0x3486, 0x3486, (-10), 1, (-10), 0x3486, 0x3486, (-10)};
    int32_t **l_976 = &l_30;
    int i;
    (*l_976) = func_9((safe_sub_func_int16_t_s_s(((l_14 >= (safe_mod_func_int32_t_s_s(((g_8 == (func_17(p_7, func_23((safe_rshift_func_uint8_t_u_s(func_28(l_30), p_7)), (((~(((((safe_unary_minus_func_uint16_t_u(((void*)0 != l_427))) ^ (g_418 >= 0x1DFC)) != p_7) , 65534U) <= g_8)) != g_253[1]) >= l_428[3])), p_7, l_30, g_708) <= p_7)) && p_7), 0xBBB251D0))) == (-5)), g_953)), g_418);
    return (*l_30);
}
static int32_t * func_9(int32_t p_10, int32_t p_11)
{
    int8_t l_958 = 0x41;
    int16_t l_971 = 1;
    int32_t *l_972[2];
    int32_t **l_973[6] = {&g_708, &g_708, &l_972[0], &g_708, &g_708, &l_972[0]};
    int32_t *l_974 = &g_31;
    int32_t *l_975 = &g_709;
    int i;
    for (i = 0; i < 2; i++)
        l_972[i] = &g_709;
    l_971 = (safe_sub_func_int32_t_s_s(((p_10 == (((p_11 , ((safe_lshift_func_uint16_t_u_s(g_31, l_958)) != (safe_mod_func_uint8_t_u_u(((l_958 || ((safe_mul_func_int8_t_s_s(p_10, ((((safe_sub_func_int16_t_s_s(g_578, ((safe_sub_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(0xCD, (((safe_mod_func_uint32_t_u_u(((0x5A ^ l_958) != l_958), l_958)) ^ 4294967290U) >= 0x8D3C))), 0x5C)) , l_958))) >= g_253[8]) || p_11) < g_31))) , l_958)) == 7U), p_10)))) , 0xDBA6) , g_930)) == l_958), 0x50FA481D));
    l_974 = l_972[1];
    return l_975;
}
inline static uint16_t func_17(int32_t p_18, int32_t * p_19, int8_t p_20, int32_t * p_21, int32_t * p_22)
{
    int32_t **l_710 = &g_348;
    int32_t ***l_785 = (void*)0;
    int32_t ****l_784 = &l_785;
    uint8_t l_885 = 7U;
    uint32_t l_929 = 0x26D757B8;
    (*l_710) = p_21;
    if ((&l_710 == (void*)0))
    {
        int8_t l_720 = 9;
        int32_t *l_721 = &g_69;
        (**l_710) = (safe_add_func_uint8_t_u_u((((0 && (-8)) , (*l_710)) != l_721), (**l_710)));
    }
    else
    {
        int32_t **l_731 = &g_347;
        uint16_t l_742 = 1U;
        int32_t ***l_776[5] = {(void*)0, &l_710, (void*)0, &l_710, (void*)0};
        int32_t ****l_775[10];
        int32_t l_792 = 0xDFBF31C4;
        int32_t l_805 = 0xA6FFE830;
        int32_t l_908 = 8;
        uint8_t l_914 = 0x4D;
        int i;
        for (i = 0; i < 10; i++)
            l_775[i] = &l_776[3];
        if ((safe_rshift_func_uint16_t_u_s(0x02CD, ((((safe_sub_func_int16_t_s_s((**l_710), ((safe_add_func_uint8_t_u_u(((((safe_sub_func_int32_t_s_s((+((void*)0 != l_731)), (&l_710 != (void*)0))) , (safe_sub_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((safe_sub_func_uint32_t_u_u((**l_731), (p_20 || (safe_mul_func_int8_t_s_s((((safe_sub_func_int8_t_s_s(p_20, g_31)) > (**l_710)) == 6U), (-1)))))), p_18)), g_253[8]))) , g_692) , g_8), p_20)) , (-1)))) >= p_18) || (**l_710)) , l_742))))
        {
            int32_t *l_745 = &g_709;
            int32_t ***l_779 = &l_710;
            int32_t *****l_793[6][1] = {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}};
            int i, j;
            for (g_583 = (-1); (g_583 > 48); g_583 = safe_add_func_int32_t_s_s(g_583, 4))
            {
                int8_t l_756 = (-10);
                int32_t ****l_777[7];
                int i;
                for (i = 0; i < 7; i++)
                    l_777[i] = &l_776[4];
                for (g_237 = 7; (g_237 >= 0); g_237 -= 1)
                {
                    (*l_710) = l_745;
                }
                (*p_21) = (*g_708);
            }
            (**l_731) = (((safe_rshift_func_uint8_t_u_u(0x99, ((safe_lshift_func_int8_t_s_u((&g_67[5] != (void*)0), ((safe_lshift_func_uint16_t_u_u((((&l_779 == &l_776[3]) && ((l_792 , &l_775[4]) != l_793[0][0])) && ((p_18 || g_578) <= (-1))), p_18)) == (*g_708)))) | (-2)))) == 0x00) , (*p_21));
        }
        else
        {
            int32_t l_804 = 1;
            int32_t ***l_815 = (void*)0;
            uint8_t l_854 = 2U;
            uint32_t l_897[1][1][4] = {{{0x9A87D3D0, 0xE7E72800, 0x9A87D3D0, 0xE7E72800}}};
            int i, j, k;
            if ((safe_add_func_int32_t_s_s(((((safe_mod_func_int32_t_s_s((safe_sub_func_int32_t_s_s(((0x7253 != (g_709 == (((p_20 ^ ((safe_lshift_func_uint8_t_u_u(((void*)0 == &g_154), 7)) == p_18)) , (((safe_mul_func_int16_t_s_s(((((void*)0 != (*l_784)) <= ((l_804 ^ l_804) | l_805)) || (**l_731)), p_20)) > (-1)) && l_804)) < p_18))) <= p_20), 4294967295U)), (*g_708))) , g_237) , p_18) & 0), (*p_21))))
            {
                uint8_t l_822 = 6U;
                int32_t *l_836 = &g_69;
                int32_t ****l_845 = &l_776[1];
                uint32_t l_873 = 4294967293U;
                int16_t l_874 = (-1);
                for (g_578 = 0; (g_578 <= 52); ++g_578)
                {
                    uint16_t l_821 = 9U;
                    int32_t *l_842[3];
                    int32_t ***l_851 = &g_67[5];
                    int32_t **l_860 = &g_492[0][1];
                    int32_t **l_871 = &g_68;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_842[i] = &g_69;
                    if ((((((~g_418) || (((((**l_710) != ((safe_mod_func_uint8_t_u_u(((safe_add_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u((((*l_784) != l_815) | (safe_add_func_int16_t_s_s(g_418, ((((safe_lshift_func_int16_t_s_u(p_20, (+p_20))) ^ (*p_22)) < (((((((p_20 || p_18) > p_20) <= g_578) , l_821) , 4294967291U) != l_822) > 1)) , p_18)))), 1)) >= 4294967295U), l_821)) >= (-2)), 0x68)) || 0x4C62396D)) ^ l_822) || 65529U) == g_418)) && g_709) >= (-9)) , l_821))
                    {
                        int32_t l_841 = 0x1DE4F4FF;
                        (*p_22) = (((safe_sub_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((((safe_mod_func_int32_t_s_s(((safe_rshift_func_int16_t_s_s(p_20, 9)) <= (!(((((((safe_add_func_int16_t_s_s(g_418, g_456)) , ((safe_mul_func_int8_t_s_s((p_22 == l_836), (safe_rshift_func_uint16_t_u_u(p_20, ((((safe_lshift_func_uint8_t_u_u(((1 ^ ((0x92F102A9 <= g_583) == g_578)) > 1), g_31)) & l_841) >= 0xE6) == g_709))))) > 0xE8056A8F)) > g_456) ^ g_692) & 1U) == p_20) != g_709))), l_821)) && (*l_836)) , 0xDC70), 8)), 1U)) , l_821) , 0xE5ECFBEB);
                        if ((**l_710))
                            continue;
                        (*l_784) = (*l_784);
                    }
                    else
                    {
                        l_842[0] = p_21;
                        return g_31;
                    }
                }
                (*l_731) = p_22;
            }
            else
            {
                uint32_t l_891[2][9][2];
                int32_t *****l_898 = &g_154;
                int32_t ***l_901[4];
                uint8_t l_911 = 255U;
                int i, j, k;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 9; j++)
                    {
                        for (k = 0; k < 2; k++)
                            l_891[i][j][k] = 0x2ADA6890;
                    }
                }
                for (i = 0; i < 4; i++)
                    l_901[i] = &g_67[5];
                if ((((g_692 == (safe_add_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(0xA6, g_253[8])), (!l_891[1][0][1])))) , ((safe_rshift_func_int8_t_s_s((p_18 & (safe_add_func_uint32_t_u_u(((((safe_unary_minus_func_int16_t_s(((l_897[0][0][1] || ((l_898 != (void*)0) != (((((safe_mod_func_int8_t_s_s(((((p_20 ^ p_20) == g_69) , (-2)) || 0xE0), p_18)) == p_20) , l_901[1]) == (void*)0) ^ p_20))) ^ (-4)))) , g_8) , (-1)) || g_456), (*p_22)))), p_20)) | 0x7472131F)) , (*p_22)))
                {
                    int8_t l_917[3];
                    int32_t *l_931 = (void*)0;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_917[i] = 0x1E;
                    (**l_731) = ((((safe_sub_func_int32_t_s_s(((safe_lshift_func_int8_t_s_u((safe_sub_func_uint16_t_u_u(l_908, (safe_mod_func_int8_t_s_s(((((void*)0 == &l_776[0]) , (p_18 , l_911)) , p_18), ((p_18 , ((safe_mod_func_uint16_t_u_u((p_20 <= p_20), 0xDE9E)) && g_31)) | l_914))))), g_343)) > g_583), g_253[8])) && g_583) != 0) <= p_20);
                    p_19 = l_931;
                }
                else
                {
                    uint16_t l_932[2][5] = {{0xA8A2, 0xBFA0, 0xA8A2, 0xBFA0, 0xA8A2}, {0xA8A2, 0xBFA0, 0xA8A2, 0xBFA0, 0xA8A2}};
                    int i, j;
                    (**l_710) = l_932[0][1];
                    (*l_710) = p_22;
                }
                for (p_18 = 0; (p_18 < 3); ++p_18)
                {
                    (**l_731) = 0;
                    for (l_911 = (-3); (l_911 > 46); l_911 = safe_add_func_uint32_t_u_u(l_911, 8))
                    {
                        int32_t *l_937 = &g_709;
                        l_937 = l_937;
                        (**l_710) = (*g_708);
                        (**l_710) = (*p_21);
                    }
                    for (g_343 = 9; (g_343 <= 24); ++g_343)
                    {
                        return p_20;
                    }
                }
            }
        }
        (*p_21) = (((((((safe_add_func_uint8_t_u_u(g_578, (safe_mod_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(p_18, 5)), ((((+p_18) , (g_253[0] && (&g_708 == &g_708))) <= ((void*)0 == &l_775[0])) , (((safe_mul_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((((safe_mul_func_int16_t_s_s(g_583, g_253[8])) < (**l_710)) < g_253[8]), g_456)), (-1))) & (**l_710)) , p_18)))))) >= g_953) , p_20) >= 0xFF) == 0U) | (*g_347)) < (**l_731));
    }
    return g_930;
}
static int32_t * func_23(uint8_t p_24, int32_t p_25)
{
    int16_t l_450 = 5;
    int32_t *l_497 = &g_69;
    int32_t *l_515 = &g_31;
    int32_t l_526[1];
    int32_t *l_536 = &l_526[0];
    int32_t ***l_538 = &g_67[5];
    int32_t *l_580 = &g_69;
    uint32_t l_682 = 1U;
    uint16_t l_683 = 1U;
    int32_t *l_707 = &g_31;
    int i;
    for (i = 0; i < 1; i++)
        l_526[i] = 4;
    if ((safe_rshift_func_uint16_t_u_u(g_69, 10)))
    {
        uint16_t l_435 = 0x4D54;
        int8_t l_455 = 0x82;
        int32_t *l_481 = (void*)0;
        int32_t *l_494 = &g_31;
        int32_t **l_554 = &g_348;
        int32_t *l_556[9][4][7] = {{{&l_526[0], (void*)0, &l_526[0], &g_69, &g_31, &l_526[0], &l_526[0]}, {&l_526[0], (void*)0, &l_526[0], &g_69, &g_31, &l_526[0], &l_526[0]}, {&l_526[0], (void*)0, &l_526[0], &g_69, &g_31, &l_526[0], &l_526[0]}, {&l_526[0], (void*)0, &l_526[0], &g_69, &g_31, &l_526[0], &l_526[0]}}, {{&l_526[0], (void*)0, &l_526[0], &g_69, &g_31, &l_526[0], &l_526[0]}, {&l_526[0], (void*)0, &l_526[0], &g_69, &g_31, &l_526[0], &l_526[0]}, {&l_526[0], (void*)0, &l_526[0], &g_69, &g_31, &l_526[0], &l_526[0]}, {&l_526[0], (void*)0, &l_526[0], &g_69, &g_31, &l_526[0], &l_526[0]}}, {{&l_526[0], (void*)0, &l_526[0], &g_69, &g_31, &l_526[0], &l_526[0]}, {&l_526[0], (void*)0, &l_526[0], &g_69, &g_31, &l_526[0], &l_526[0]}, {&l_526[0], (void*)0, &l_526[0], &g_69, &g_31, &l_526[0], &l_526[0]}, {&l_526[0], (void*)0, &l_526[0], &g_69, &g_31, &l_526[0], &l_526[0]}}, {{&l_526[0], (void*)0, &l_526[0], &g_69, &g_31, &l_526[0], &l_526[0]}, {&l_526[0], (void*)0, &l_526[0], &g_69, &g_31, &l_526[0], &l_526[0]}, {&l_526[0], (void*)0, &l_526[0], &g_69, &g_31, &l_526[0], &l_526[0]}, {&l_526[0], (void*)0, &l_526[0], &g_69, &g_31, &l_526[0], &l_526[0]}}, {{&l_526[0], (void*)0, &l_526[0], &g_69, &g_31, &l_526[0], &l_526[0]}, {&l_526[0], (void*)0, &l_526[0], &g_69, &g_31, &l_526[0], &l_526[0]}, {&l_526[0], (void*)0, &l_526[0], &g_69, &g_31, &l_526[0], &l_526[0]}, {&l_526[0], (void*)0, &l_526[0], &g_69, &g_31, &l_526[0], &l_526[0]}}, {{&l_526[0], (void*)0, &l_526[0], &g_69, &g_31, &l_526[0], &l_526[0]}, {&l_526[0], (void*)0, &l_526[0], &g_69, &g_31, &l_526[0], &l_526[0]}, {&l_526[0], (void*)0, &l_526[0], &g_69, &g_31, &l_526[0], &l_526[0]}, {&l_526[0], (void*)0, &l_526[0], &g_69, &g_31, &l_526[0], &l_526[0]}}, {{&l_526[0], (void*)0, &l_526[0], &g_69, &g_31, &l_526[0], &l_526[0]}, {&l_526[0], (void*)0, &l_526[0], &g_69, &g_31, &l_526[0], &l_526[0]}, {&l_526[0], (void*)0, &l_526[0], &g_69, &g_31, &l_526[0], &l_526[0]}, {&l_526[0], (void*)0, &l_526[0], &g_69, &g_31, &l_526[0], &l_526[0]}}, {{&l_526[0], (void*)0, &l_526[0], &g_69, &g_31, &l_526[0], &l_526[0]}, {&l_526[0], (void*)0, &l_526[0], &g_69, &g_31, &l_526[0], &l_526[0]}, {&l_526[0], (void*)0, &l_526[0], &g_69, &g_31, &l_526[0], &l_526[0]}, {&l_526[0], (void*)0, &l_526[0], &g_69, &g_31, &l_526[0], &l_526[0]}}, {{&l_526[0], (void*)0, &l_526[0], &g_69, &g_31, &l_526[0], &l_526[0]}, {&l_526[0], (void*)0, &l_526[0], &g_69, &g_31, &l_526[0], &l_526[0]}, {&l_526[0], (void*)0, &l_526[0], &g_69, &g_31, &l_526[0], &l_526[0]}, {&l_526[0], (void*)0, &l_526[0], &g_69, &g_31, &l_526[0], &l_526[0]}}};
        int32_t ****l_599 = &l_538;
        uint32_t l_689[7][4][2] = {{{4294967295U, 0U}, {4294967295U, 0U}, {4294967295U, 0U}, {4294967295U, 0U}}, {{4294967295U, 0U}, {4294967295U, 0U}, {4294967295U, 0U}, {4294967295U, 0U}}, {{4294967295U, 0U}, {4294967295U, 0U}, {4294967295U, 0U}, {4294967295U, 0U}}, {{4294967295U, 0U}, {4294967295U, 0U}, {4294967295U, 0U}, {4294967295U, 0U}}, {{4294967295U, 0U}, {4294967295U, 0U}, {4294967295U, 0U}, {4294967295U, 0U}}, {{4294967295U, 0U}, {4294967295U, 0U}, {4294967295U, 0U}, {4294967295U, 0U}}, {{4294967295U, 0U}, {4294967295U, 0U}, {4294967295U, 0U}, {4294967295U, 0U}}};
        int i, j, k;
        if (((safe_rshift_func_uint16_t_u_u((((p_24 < ((safe_mul_func_uint16_t_u_u((l_435 <= (((safe_add_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(2, 7)), (safe_lshift_func_uint16_t_u_s(((*g_65) , ((+(safe_add_func_int8_t_s_s((((~(safe_rshift_func_int8_t_s_s(l_450, 7))) , g_69) , (safe_mod_func_int32_t_s_s((((safe_add_func_int32_t_s_s((0x84D3 >= (((6 & g_253[2]) < p_24) != p_24)), 7U)) > p_25) != (*g_348)), p_24))), 0U))) , 65531U)), l_450)))), l_455)) <= (-5)) != 1U)), g_237)) && l_455)) < g_456) != l_450), l_450)) , p_24))
        {
            int8_t l_470 = 0xF1;
            int32_t *l_495 = &g_31;
            if ((safe_mul_func_uint8_t_u_u(((p_25 > (safe_sub_func_int32_t_s_s(((safe_mod_func_int16_t_s_s(((safe_sub_func_int8_t_s_s(g_237, g_456)) , (safe_mod_func_int32_t_s_s(((((safe_unary_minus_func_int16_t_s(((safe_rshift_func_int16_t_s_u(l_470, 12)) < (safe_mul_func_int8_t_s_s(((((safe_add_func_int32_t_s_s((*g_68), l_470)) != ((g_237 , (g_343 > ((((safe_rshift_func_uint8_t_u_s((safe_sub_func_uint8_t_u_u((p_24 || 0x876D), p_25)), l_470)) <= l_470) , (*g_347)) != 0xA55D4B49))) , g_31)) > p_25) & p_25), g_31))))) , (void*)0) == (void*)0) | l_455), l_450))), g_253[7])) < 0x1E98), 0))) != 0xD29A4E53), l_470)))
            {
                int32_t ***l_491 = &g_67[2];
                for (g_31 = 0; (g_31 <= (-24)); g_31 = safe_sub_func_uint32_t_u_u(g_31, 6))
                {
                    int32_t **l_482 = &g_68;
                    (*l_482) = l_481;
                }
                for (g_237 = 29; (g_237 == 23); --g_237)
                {
                    int32_t ****l_488 = (void*)0;
                    int32_t **l_493[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_493[i] = &g_68;
                    (*g_65) = (safe_rshift_func_int16_t_s_u(6, (((~((253U == (l_488 == (void*)0)) , ((safe_mul_func_int16_t_s_s(((l_491 != (void*)0) != (g_8 ^ 0x98)), p_24)) , l_470))) | g_69) <= l_450)));
                    l_494 = g_492[1][0];
                }
            }
            else
            {
                int32_t **l_496[10] = {&g_492[1][0], &g_65, &g_492[1][0], &g_65, &g_492[1][0], &g_65, &g_492[1][0], &g_65, &g_492[1][0], &g_65};
                int i;
                l_497 = l_495;
            }
            (*l_497) = ((safe_mod_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(((*l_494) , ((safe_mod_func_int32_t_s_s(((p_24 <= 0x470F) <= (safe_sub_func_int8_t_s_s(((((0x17 > 0xCC) < (+(((((safe_rshift_func_uint16_t_u_s((safe_sub_func_int8_t_s_s((((void*)0 != l_494) | (((((l_481 == (((safe_rshift_func_uint16_t_u_u(((((safe_rshift_func_uint8_t_u_u((g_343 <= p_24), 6)) | p_25) < g_8) , p_24), 0)) >= g_253[8]) , l_515)) != g_253[8]) >= (*l_515)) < 0xEF3A2CEB) || 0xD8)), 0xB9)), 3)) > g_69) <= g_8) , 0xB828AEB0) , 0x3617))) || g_237) & g_253[4]), 8))), 1U)) , p_24)), p_24)), p_25)) == g_253[3]);
            (*g_65) = p_24;
        }
        else
        {
            int32_t **l_524 = &g_65;
            uint32_t l_582 = 4294967293U;
            uint32_t l_632 = 0x49DC7950;
            int32_t *l_634[6][8] = {{&g_31, &g_69, &g_31, &l_526[0], &g_69, &g_31, &l_526[0], &g_69}, {&g_31, &g_69, &g_31, &l_526[0], &g_69, &g_31, &l_526[0], &g_69}, {&g_31, &g_69, &g_31, &l_526[0], &g_69, &g_31, &l_526[0], &g_69}, {&g_31, &g_69, &g_31, &l_526[0], &g_69, &g_31, &l_526[0], &g_69}, {&g_31, &g_69, &g_31, &l_526[0], &g_69, &g_31, &l_526[0], &g_69}, {&g_31, &g_69, &g_31, &l_526[0], &g_69, &g_31, &l_526[0], &g_69}};
            int i, j;
            for (g_31 = 9; (g_31 <= 3); --g_31)
            {
                uint8_t l_525 = 2U;
                int8_t l_529 = 0xB6;
                (*g_348) = (safe_mod_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((*l_494), (*l_515))), ((safe_add_func_int32_t_s_s(p_24, p_24)) | ((((void*)0 != l_524) != (l_525 , (((g_253[8] ^ ((*l_497) | g_253[1])) < (*g_348)) <= g_253[8]))) | l_526[0]))));
                (*l_497) = ((((((p_24 <= (safe_sub_func_int8_t_s_s(((l_529 || (p_25 < ((safe_mod_func_uint32_t_u_u(((safe_mul_func_int8_t_s_s(g_69, (1U < (&g_154 == (void*)0)))) | ((-6) == (safe_mod_func_uint16_t_u_u(g_343, 7)))), p_24)) >= p_24))) || 0), p_25))) || p_24) > (**l_524)) >= (*l_515)) ^ (*g_68)) | p_25);
                l_536 = l_481;
            }
            for (g_343 = 0; (g_343 <= 0); g_343 += 1)
            {
                int32_t l_537 = (-7);
                int32_t ***l_552 = (void*)0;
                int32_t *l_555 = &l_526[0];
                int32_t *****l_622 = &l_599;
                for (g_31 = 0; (g_31 >= 0); g_31 -= 1)
                {
                    int32_t *l_541 = &l_526[0];
                    if ((l_537 | (0xDFCB6BE4 & (((-1) | (*l_494)) && ((((l_538 == ((safe_add_func_int32_t_s_s((-1), (((p_25 & ((g_418 | ((((void*)0 == &g_154) , g_343) , p_25)) & 0xED)) , p_24) , 0x9653B007))) , (void*)0)) && (-10)) , l_537) <= 0x7554)))))
                    {
                        int i, j;
                        (*l_524) = (void*)0;
                        if ((*l_497))
                            break;
                    }
                    else
                    {
                        return l_481;
                    }
                    (*l_524) = l_541;
                    (*l_524) = l_481;
                    (*l_524) = l_541;
                }
            }
        }
        for (l_450 = 25; (l_450 <= (-10)); --l_450)
        {
            int32_t *l_668 = &g_69;
            int32_t l_679 = 0x66349AED;
            int32_t ****l_684[5];
            int i;
            for (i = 0; i < 5; i++)
                l_684[i] = (void*)0;
            (*l_554) = l_668;
            (*l_497) = (safe_mul_func_int8_t_s_s((-4), (0xA5B6891C != (((((p_24 <= (((safe_sub_func_int32_t_s_s(((safe_add_func_uint32_t_u_u((((((((safe_lshift_func_uint8_t_u_u(0x79, 4)) < (((safe_sub_func_int8_t_s_s(l_679, (safe_unary_minus_func_uint8_t_u((((void*)0 == &l_679) & (((+(g_8 , ((*l_668) < 0x32))) ^ g_8) , l_682)))))) , 0x59DC) || (*l_668))) || p_24) , g_154) != (void*)0) , p_24) , g_69), 0xAB5D27EC)) ^ 0x8C58), p_25)) || 1) || g_69)) ^ 1U) , l_683) , g_154) == l_684[3]))));
        }
        (*g_347) = ((safe_mul_func_uint16_t_u_u(p_25, (((l_689[1][2][1] ^ ((safe_add_func_int8_t_s_s(g_692, (+(safe_add_func_uint16_t_u_u(g_418, (safe_mul_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(g_418, ((p_25 , (g_69 & (safe_lshift_func_int8_t_s_s(1, ((safe_mul_func_uint8_t_u_u(254U, (**l_554))) >= g_343))))) & g_8))), p_25))))))) != g_343)) <= p_25) ^ 0xAE1A))) || (**l_554));
    }
    else
    {
        for (l_683 = 0; (l_683 != 0); l_683 = safe_add_func_uint32_t_u_u(l_683, 7))
        {
            int32_t **l_706 = &g_492[0][1];
            (*l_706) = &l_526[0];
        }
        (*l_580) = (*l_497);
    }
    return l_707;
}
static uint8_t func_28(int32_t * p_29)
{
    int32_t **l_424 = &g_347;
    (*l_424) = func_32(func_34(g_31));
    return g_418;
}
static int32_t * func_32(int32_t * p_33)
{
    int32_t l_416 = 0x34B62777;
    int32_t ****l_420 = (void*)0;
    int32_t *****l_421 = &l_420;
    int32_t *l_422 = &g_31;
    int32_t **l_423 = &l_422;
    for (g_237 = 0; (g_237 <= 7); g_237 += 1)
    {
        int32_t l_419 = 1;
        int i;
        (*g_65) = ((1U == g_31) <= (*p_33));
        for (g_343 = 0; (g_343 <= 9); g_343 += 1)
        {
            uint32_t l_410 = 0xCEEB9A91;
            int32_t ***l_417 = &g_67[5];
            for (g_69 = 9; (g_69 >= 3); g_69 -= 1)
            {
                int32_t *l_389 = &g_31;
                return l_389;
            }
            for (g_31 = 7; (g_31 >= 2); g_31 -= 1)
            {
                int32_t l_390 = 9;
                int i;
                (*g_347) = l_390;
            }
            p_33 = p_33;
            (*p_33) = ((((~((safe_mul_func_int8_t_s_s(g_31, 1)) == (safe_lshift_func_uint16_t_u_s((safe_mod_func_int8_t_s_s(((safe_add_func_int16_t_s_s(((safe_mod_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u((((safe_add_func_int16_t_s_s(l_410, ((*p_33) > (((((!(((safe_add_func_uint8_t_u_u((l_410 & ((void*)0 != &p_33)), 0xA3)) != (safe_mod_func_int8_t_s_s(((l_416 & 1) || g_69), l_410))) > g_8)) , (void*)0) != (void*)0) <= l_416) , 8U)))) , &g_67[g_237]) != l_417), 0)), g_69)), 0U)), g_31)) & l_416), (-8))) <= (*p_33)), g_418)), l_419)))) < (-10)) , l_416) <= (-5));
        }
    }
    (*l_421) = l_420;
    (*l_423) = l_422;
    (*l_423) = p_33;
    return p_33;
}
inline static int32_t * func_34(uint32_t p_35)
{
    int32_t *l_36 = &g_31;
    int16_t l_37[10] = {(-9), (-1), (-9), (-1), (-9), (-1), (-9), (-1), (-9), (-1)};
    int32_t **l_48 = &l_36;
    int32_t l_145 = (-1);
    int32_t ***l_163 = (void*)0;
    int32_t ****l_162 = &l_163;
    uint8_t l_182 = 7U;
    int8_t l_221[3];
    uint32_t l_371[5][8] = {{0U, 4294967294U, 0x80DC1767, 0x57E038DF, 4294967294U, 0U, 4294967294U, 0x57E038DF}, {0U, 4294967294U, 0x80DC1767, 0x57E038DF, 4294967294U, 0U, 4294967294U, 0x57E038DF}, {0U, 4294967294U, 0x80DC1767, 0x57E038DF, 4294967294U, 0U, 4294967294U, 0x57E038DF}, {0U, 4294967294U, 0x80DC1767, 0x57E038DF, 4294967294U, 0U, 4294967294U, 0x57E038DF}, {0U, 4294967294U, 0x80DC1767, 0x57E038DF, 4294967294U, 0U, 4294967294U, 0x57E038DF}};
    int32_t *l_387 = &l_145;
    int32_t *l_388[7];
    int i, j;
    for (i = 0; i < 3; i++)
        l_221[i] = 0x14;
    for (i = 0; i < 7; i++)
        l_388[i] = &g_69;
    (*l_36) = 0x6335C0DE;
    for (p_35 = 2; (p_35 <= 9); p_35 += 1)
    {
        int i;
        g_67[3] = func_38(l_37[p_35], func_42(l_36, p_35, (safe_lshift_func_uint16_t_u_u(((g_8 ^ (&l_36 != l_48)) , (((safe_mod_func_uint32_t_u_u(((safe_lshift_func_uint16_t_u_u(((*l_48) == (void*)0), (safe_lshift_func_int8_t_s_u((((safe_add_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(p_35, 65533U)), 7)), g_31)) , 65529U) , 0x1B), 0)))) <= g_31), 0xBDEDBEC1)) && l_37[p_35]) , 1U)), g_31))), g_67[5]);
    }
    for (g_31 = 0; (g_31 <= 7); g_31 += 1)
    {
        uint8_t l_139 = 0U;
        uint8_t l_181[3][1];
        int32_t *l_183 = &l_145;
        int32_t **l_224 = &l_36;
        int32_t ****l_235 = &l_163;
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 1; j++)
                l_181[i][j] = 252U;
        }
        if ((safe_lshift_func_int16_t_s_u(((((p_35 & (&g_67[g_31] == &g_67[g_31])) | ((((void*)0 != &l_36) > (((safe_sub_func_int32_t_s_s((safe_sub_func_uint16_t_u_u((4294967292U || (g_69 , 0xD50EE726)), (((void*)0 != &g_65) <= 4U))), (-1))) == 0xFF) , 1U)) & 0x7C)) == g_31) ^ p_35), p_35)))
        {
            int32_t *l_138[6] = {&g_31, &g_69, &g_31, &g_69, &g_31, &g_69};
            int32_t ***l_157 = (void*)0;
            int8_t l_165 = 0x49;
            int i;
            for (g_69 = (-10); (g_69 != 13); ++g_69)
            {
                uint8_t l_144 = 255U;
                (*l_48) = l_138[2];
                l_145 = (l_139 , ((safe_sub_func_int16_t_s_s(((*l_48) == (void*)0), ((((((safe_sub_func_int32_t_s_s((g_8 ^ (p_35 , 0)), (*g_68))) <= p_35) == l_144) , l_144) && 1U) , 0U))) == 255U));
                (*l_48) = l_138[5];
            }
            for (l_139 = 0; (l_139 != 36); l_139++)
            {
                int32_t **l_166 = &l_36;
                (*l_48) = l_138[2];
                for (p_35 = 1; (p_35 <= 5); p_35 += 1)
                {
                    int32_t ****l_164 = &l_157;
                    int i;
                    (*g_68) = (safe_mod_func_int8_t_s_s(((l_37[(p_35 + 3)] <= ((safe_mod_func_int32_t_s_s(((((safe_add_func_uint8_t_u_u(((((((void*)0 == g_154) , l_37[(g_31 + 1)]) <= (((((g_8 < g_31) == (safe_lshift_func_uint16_t_u_s((l_157 != (void*)0), (safe_mod_func_int8_t_s_s(((((safe_mod_func_uint8_t_u_u(255U, p_35)) , l_162) == l_164) != l_165), p_35))))) & 0xEBA2) , &l_138[p_35]) != l_166)) < (**l_48)) < g_31), p_35)) == g_8) , (**l_166)) == p_35), 0xCD91451F)) ^ 0xFE66)) == (**l_166)), 254U));
                    if (p_35)
                        break;
                    (*g_68) = ((safe_mod_func_uint32_t_u_u((((void*)0 == (*l_166)) & ((safe_add_func_uint8_t_u_u(((!((safe_lshift_func_int8_t_s_s(p_35, 5)) && (p_35 >= (-10)))) > (p_35 , ((+p_35) == (((((safe_add_func_int8_t_s_s((g_69 & (safe_add_func_int8_t_s_s((safe_mod_func_int32_t_s_s(l_181[1][0], (**l_166))), p_35))), l_182)) < p_35) & 1) > g_69) == p_35)))), 0xA6)) , g_69)), p_35)) ^ g_31);
                    l_138[p_35] = l_138[2];
                }
            }
            if ((*g_68))
                continue;
        }
        else
        {
            int32_t *l_184[4][7][6] = {{{&g_69, &g_31, &g_31, &g_31, &g_69, &l_145}, {&g_69, &g_31, &g_31, &g_31, &g_69, &l_145}, {&g_69, &g_31, &g_31, &g_31, &g_69, &l_145}, {&g_69, &g_31, &g_31, &g_31, &g_69, &l_145}, {&g_69, &g_31, &g_31, &g_31, &g_69, &l_145}, {&g_69, &g_31, &g_31, &g_31, &g_69, &l_145}, {&g_69, &g_31, &g_31, &g_31, &g_69, &l_145}}, {{&g_69, &g_31, &g_31, &g_31, &g_69, &l_145}, {&g_69, &g_31, &g_31, &g_31, &g_69, &l_145}, {&g_69, &g_31, &g_31, &g_31, &g_69, &l_145}, {&g_69, &g_31, &g_31, &g_31, &g_69, &l_145}, {&g_69, &g_31, &g_31, &g_31, &g_69, &l_145}, {&g_69, &g_31, &g_31, &g_31, &g_69, &l_145}, {&g_69, &g_31, &g_31, &g_31, &g_69, &l_145}}, {{&g_69, &g_31, &g_31, &g_31, &g_69, &l_145}, {&g_69, &g_31, &g_31, &g_31, &g_69, &l_145}, {&g_69, &g_31, &g_31, &g_31, &g_69, &l_145}, {&g_69, &g_31, &g_31, &g_31, &g_69, &l_145}, {&g_69, &g_31, &g_31, &g_31, &g_69, &l_145}, {&g_69, &g_31, &g_31, &g_31, &g_69, &l_145}, {&g_69, &g_31, &g_31, &g_31, &g_69, &l_145}}, {{&g_69, &g_31, &g_31, &g_31, &g_69, &l_145}, {&g_69, &g_31, &g_31, &g_31, &g_69, &l_145}, {&g_69, &g_31, &g_31, &g_31, &g_69, &l_145}, {&g_69, &g_31, &g_31, &g_31, &g_69, &l_145}, {&g_69, &g_31, &g_31, &g_31, &g_69, &l_145}, {&g_69, &g_31, &g_31, &g_31, &g_69, &l_145}, {&g_69, &g_31, &g_31, &g_31, &g_69, &l_145}}};
            int32_t *l_185 = &l_145;
            int32_t *l_186 = &g_69;
            int i, j, k;
            return l_186;
        }
        for (l_139 = (-27); (l_139 == 51); l_139 = safe_add_func_int16_t_s_s(l_139, 6))
        {
            int8_t l_207 = 0x6F;
            int32_t *l_209 = &l_145;
            int32_t ***l_280 = &g_67[g_31];
            int32_t ***l_342 = &l_48;
        }
        for (g_237 = (-4); (g_237 <= 17); g_237++)
        {
            int16_t l_372 = (-10);
            int32_t *****l_384 = &g_154;
            (*l_183) = (safe_mul_func_int8_t_s_s((g_8 && ((((safe_rshift_func_uint16_t_u_u(g_237, l_371[4][5])) ^ (((l_372 == ((safe_add_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u(g_31, g_8)), 9)), (!((3 >= (safe_lshift_func_int16_t_s_u(p_35, ((safe_sub_func_uint32_t_u_u(((((*l_224) != (*l_48)) , (void*)0) != &l_163), g_8)) , l_372)))) || g_69)))) , 1U)) | (**l_48)) < 7)) , (void*)0) == l_384)), g_8));
            for (g_69 = 8; (g_69 > 4); g_69--)
            {
                (*l_384) = (void*)0;
            }
        }
    }
    return l_388[6];
}
inline static int32_t ** func_38(int16_t p_39, int32_t ** p_40, int32_t ** p_41)
{
    int32_t *l_73 = &g_69;
    int32_t l_112 = 0x350B76A7;
    int32_t ***l_125 = (void*)0;
    for (p_39 = 0; (p_39 < 4); p_39 = safe_add_func_int8_t_s_s(p_39, 1))
    {
        int32_t *l_72 = &g_31;
        int32_t ***l_75[5][3];
        int32_t ****l_74 = &l_75[3][2];
        int i, j;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 3; j++)
                l_75[i][j] = (void*)0;
        }
        l_73 = l_72;
        (*l_74) = &g_67[5];
        for (g_31 = 0; (g_31 <= 7); g_31 += 1)
        {
            int32_t *l_76 = (void*)0;
            int i;
            l_73 = l_76;
            (*g_68) = (safe_rshift_func_int8_t_s_u(((safe_rshift_func_uint8_t_u_s((!g_8), 2)) & (&l_75[3][2] != (void*)0)), 3));
            if (p_39)
                continue;
            for (g_69 = 5; (g_69 >= 0); g_69 -= 1)
            {
                uint32_t l_95[2];
                int32_t l_96 = 0xACDC9FF6;
                int i;
                for (i = 0; i < 2; i++)
                    l_95[i] = 2U;
                l_96 = (g_8 == ((safe_mod_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u((((((((p_39 || (&g_68 == ((safe_sub_func_uint16_t_u_u((((safe_sub_func_uint8_t_u_u(g_8, ((safe_mul_func_uint8_t_u_u((p_39 | ((p_39 , (p_41 != &g_68)) || ((+l_95[1]) , g_69))), p_39)) , 0xBD))) > 1U) , 65529U), 0xA6EC)) , p_40))) & g_8) & (*g_68)) & 0x30) , &g_67[g_31]) != &p_41) != g_8), 13)), 0)), 1U)) == p_39));
                l_112 = (safe_add_func_uint16_t_u_u((((p_39 > g_8) , p_39) > (safe_sub_func_int16_t_s_s((0xC9E0 != 0x2CFC), (safe_mod_func_uint8_t_u_u(((+((safe_sub_func_uint8_t_u_u(((*g_68) || (safe_rshift_func_uint8_t_u_s(((safe_rshift_func_uint16_t_u_s(p_39, (safe_rshift_func_uint16_t_u_s(g_31, p_39)))) <= g_31), g_31))), g_69)) | l_95[1])) >= g_31), 255U))))), (-4)));
            }
        }
        l_73 = &l_112;
    }
    (*l_73) = ((safe_rshift_func_int16_t_s_s(p_39, (safe_add_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u((((safe_lshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((((safe_add_func_int32_t_s_s((((((void*)0 == l_125) | (*l_73)) ^ (0x3A == (safe_rshift_func_uint8_t_u_u(((4294967291U < (safe_lshift_func_uint8_t_u_u(0x2B, 1))) , (*l_73)), 1)))) != ((65528U & p_39) <= (*l_73))), (*g_65))) | p_39) ^ g_31), p_39)), 3)) ^ p_39) , p_39), 0xF1C4852B)), 4294967295U)))) | 0xA708);
    return &g_65;
}
static int32_t ** func_42(int32_t * p_43, int32_t p_44, uint8_t p_45)
{
    int32_t l_63 = 0x2C6F7398;
    int32_t **l_66[7][10] = {{&g_65, (void*)0, &g_65, (void*)0, &g_65, &g_65, &g_65, &g_65, &g_65, (void*)0}, {&g_65, (void*)0, &g_65, (void*)0, &g_65, &g_65, &g_65, &g_65, &g_65, (void*)0}, {&g_65, (void*)0, &g_65, (void*)0, &g_65, &g_65, &g_65, &g_65, &g_65, (void*)0}, {&g_65, (void*)0, &g_65, (void*)0, &g_65, &g_65, &g_65, &g_65, &g_65, (void*)0}, {&g_65, (void*)0, &g_65, (void*)0, &g_65, &g_65, &g_65, &g_65, &g_65, (void*)0}, {&g_65, (void*)0, &g_65, (void*)0, &g_65, &g_65, &g_65, &g_65, &g_65, (void*)0}, {&g_65, (void*)0, &g_65, (void*)0, &g_65, &g_65, &g_65, &g_65, &g_65, (void*)0}};
    int i, j;
    for (p_45 = 0; (p_45 < 59); p_45 = safe_add_func_uint32_t_u_u(p_45, 1))
    {
        int32_t *l_64 = &g_31;
        (*p_43) = (*p_43);
        (*p_43) = l_63;
        if (g_8)
            break;
        g_65 = l_64;
    }
    return l_66[5][4];
}
int main (void)
{
    int i, j;
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    g_65 = 0;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
            g_492[i][j] = 0;
    }
    csmith_sink_ = g_8;
    csmith_sink_ = g_31;
    csmith_sink_ = g_69;
    csmith_sink_ = g_237;
    for (i = 0; i < 10; i++)
    {
        csmith_sink_ = g_253[i];
    }
    csmith_sink_ = g_343;
    csmith_sink_ = g_418;
    csmith_sink_ = g_456;
    csmith_sink_ = g_578;
    csmith_sink_ = g_583;
    csmith_sink_ = g_692;
    csmith_sink_ = g_709;
    csmith_sink_ = g_930;
    csmith_sink_ = g_953;
    platform_main_end(0,0);
    return 0;
}
