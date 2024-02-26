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
static uint32_t g_4 = 4294967291U;
static int32_t g_19 = 0;
static int32_t **g_49 = (void*)0;
static uint16_t g_57 = 65534U;
static int32_t g_65 = 0;
static uint16_t g_74 = 0U;
static int32_t g_76 = 0;
static uint32_t g_83 = 0U;
static int32_t g_94 = 0;
static int16_t g_96 = (-5);
static uint8_t g_107 = 0x24;
static int8_t g_115 = 0x4C;
static uint32_t g_202 = 0x3CEA4A79;
static int8_t g_232 = 0x02;
static uint16_t g_242 = 0x2BB1;
static uint8_t g_283 = 253U;
static int32_t *g_287 = &g_76;
static int32_t **g_286 = &g_287;
static uint32_t g_372 = 0xBF450670;
static int8_t *g_392 = &g_232;
static int32_t ***g_501 = &g_286;
static int32_t ****g_500 = &g_501;
static int32_t *****g_499 = &g_500;
static int32_t **g_523 = &g_287;
static uint32_t *g_534 = &g_372;
static uint32_t **g_533 = &g_534;
static uint8_t g_535 = 0xE3;
static uint8_t *g_584 = &g_535;
inline static uint8_t func_1(void);
inline static int32_t * func_2(uint32_t p_3);
inline static int32_t func_5(uint32_t p_6, uint32_t p_7, int16_t p_8, int16_t p_9, uint8_t p_10);
static uint32_t func_13(int32_t * p_14, uint32_t p_15, uint16_t p_16, uint32_t p_17);
inline static int32_t * func_23(int32_t * p_24);
static uint16_t func_37(int32_t ** p_38, int32_t * p_39, int32_t p_40, int32_t * p_41, int32_t * p_42);
inline static int32_t * func_44(int32_t ** p_45, int32_t p_46, uint32_t p_47, uint16_t p_48);
static int32_t * func_50(int32_t p_51, int32_t * p_52, uint32_t p_53);
static int32_t * func_58(int32_t p_59, int32_t p_60, int16_t p_61, int32_t p_62);
static int32_t func_63(int32_t ** p_64);
inline static uint8_t func_1(void)
{
    (*g_523) = func_2(g_4);
    ((void) sizeof ((g_287 == &g_94 || g_287 == 0 || g_287 == &g_19) ? 1 : 0), __extension__ ({ if (g_287 == &g_94 || g_287 == 0 || g_287 == &g_19) ; else __assert_fail ("g_287 == &g_94 || g_287 == 0 || g_287 == &g_19", "/tmp/tmp_vz0cvqq.c", 74, __extension__ __PRETTY_FUNCTION__); }));
    ((void) sizeof ((g_286 == 0 || g_286 == &g_287) ? 1 : 0), __extension__ ({ if (g_286 == 0 || g_286 == &g_287) ; else __assert_fail ("g_286 == 0 || g_286 == &g_287", "/tmp/tmp_vz0cvqq.c", 75, __extension__ __PRETTY_FUNCTION__); }));
    ((void) sizeof ((g_584 == &g_107) ? 1 : 0), __extension__ ({ if (g_584 == &g_107) ; else __assert_fail ("g_584 == &g_107", "/tmp/tmp_vz0cvqq.c", 76, __extension__ __PRETTY_FUNCTION__); }));
    return (*g_584);
}
inline static int32_t * func_2(uint32_t p_3)
{
    int32_t *l_18 = &g_19;
    int32_t l_20 = (-8);
    uint8_t *l_582 = &g_107;
    uint8_t **l_583 = &l_582;
    uint16_t *l_599 = &g_242;
    int16_t *l_600 = (void*)0;
    int16_t *l_601 = &g_96;
    uint8_t *l_602 = &g_535;
    (*l_18) = func_5((safe_sub_func_uint32_t_u_u(func_13(l_18, g_4, l_20, g_4), (*l_18))), g_4, (+func_13(l_18, p_3, p_3, (*l_18))), (*l_18), p_3);
    ((void) sizeof ((g_287 == &g_19) ? 1 : 0), __extension__ ({ if (g_287 == &g_19) ; else __assert_fail ("g_287 == &g_19", "/tmp/tmp_vz0cvqq.c", 98, __extension__ __PRETTY_FUNCTION__); }));
    (***g_501) = (l_18 == l_18);
    for (g_535 = 0; (g_535 != 40); g_535++)
    {
        int8_t **l_578 = &g_392;
        int8_t ***l_577 = &l_578;
        int8_t ****l_576 = &l_577;
        int8_t *****l_579 = &l_576;
        (*l_579) = l_576;
    }
    (*g_523) = func_50(p_3, ((**g_501) = l_18), (safe_div_func_int8_t_s_s(((g_584 = ((*l_583) = l_582)) == (void*)0), (safe_lshift_func_uint8_t_u_u(((0x28 == (safe_add_func_int16_t_s_s((((g_19 >= ((*l_602) = (0xD2D2 != (safe_sub_func_int8_t_s_s(((safe_div_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(((g_232 < (safe_mod_func_int8_t_s_s((((*l_601) = ((((*l_599) = (safe_rshift_func_int8_t_s_u(0, p_3))) | (*l_18)) && 0)) && 9), 7))) || (*g_392)), 0x14E789EA)), (-1))) == 0xA8E01941), p_3))))) > 1U) ^ (*l_18)), p_3))) ^ 0x10), 2)))));
    ((void) sizeof ((g_287 == &g_94 || g_287 == 0 || g_287 == &g_19) ? 1 : 0), __extension__ ({ if (g_287 == &g_94 || g_287 == 0 || g_287 == &g_19) ; else __assert_fail ("g_287 == &g_94 || g_287 == 0 || g_287 == &g_19", "/tmp/tmp_vz0cvqq.c", 110, __extension__ __PRETTY_FUNCTION__); }));
    ((void) sizeof ((g_286 == 0 || g_286 == &g_287) ? 1 : 0), __extension__ ({ if (g_286 == 0 || g_286 == &g_287) ; else __assert_fail ("g_286 == 0 || g_286 == &g_287", "/tmp/tmp_vz0cvqq.c", 111, __extension__ __PRETTY_FUNCTION__); }));
    ((void) sizeof ((g_584 == &g_107) ? 1 : 0), __extension__ ({ if (g_584 == &g_107) ; else __assert_fail ("g_584 == &g_107", "/tmp/tmp_vz0cvqq.c", 112, __extension__ __PRETTY_FUNCTION__); }));
    return (*g_523);
}
inline static int32_t func_5(uint32_t p_6, uint32_t p_7, int16_t p_8, int16_t p_9, uint8_t p_10)
{
    int32_t *l_25 = &g_19;
    (*g_523) = func_23(l_25);
    ((void) sizeof ((g_287 == &g_19) ? 1 : 0), __extension__ ({ if (g_287 == &g_19) ; else __assert_fail ("g_287 == &g_19", "/tmp/tmp_vz0cvqq.c", 129, __extension__ __PRETTY_FUNCTION__); }));
    return (**g_286);
}
static uint32_t func_13(int32_t * p_14, uint32_t p_15, uint16_t p_16, uint32_t p_17)
{
    uint16_t l_21 = 0U;
    return l_21;
}
inline static int32_t * func_23(int32_t * p_24)
{
    uint32_t l_43 = 0x4EB0A117;
    int8_t l_494 = 0x3D;
    int32_t *l_522 = &g_19;
    uint32_t l_536 = 0U;
    int8_t **l_568 = (void*)0;
    (*p_24) = (safe_rshift_func_int8_t_s_u(((void*)0 == p_24), 7));
    for (g_4 = 0; (g_4 != 49); g_4 = safe_add_func_uint8_t_u_u(g_4, 7))
    {
        int32_t **l_30 = (void*)0;
        uint16_t *l_56 = &g_57;
        int32_t l_135 = 0;
        uint16_t l_495 = 65535U;
        int32_t *l_531 = &g_76;
        int8_t *l_553 = &l_494;
        int16_t l_560 = 5;
        uint8_t l_571 = 247U;
        uint32_t l_572 = 4294967295U;
        int32_t *l_573 = (void*)0;
    }
    (**g_501) = (****g_499);
    return l_522;
}
static uint16_t func_37(int32_t ** p_38, int32_t * p_39, int32_t p_40, int32_t * p_41, int32_t * p_42)
{
    uint16_t l_516 = 0xF388;
    int16_t *l_520 = &g_96;
    for (g_283 = 22; (g_283 == 55); ++g_283)
    {
        uint16_t *l_517 = &g_57;
        int16_t *l_519 = &g_96;
        int16_t **l_518 = &l_519;
        int32_t l_521 = 0xBF0036B7;
        (*p_41) = ((g_242 = (safe_lshift_func_int16_t_s_s((safe_sub_func_int8_t_s_s(((safe_rshift_func_int16_t_s_u(p_40, 15)) && (p_40 < (safe_rshift_func_int8_t_s_s(((*g_392) = (safe_rshift_func_int16_t_s_s((l_516 ^ (((*l_517) = g_232) | (&g_96 == (l_520 = ((*l_518) = &g_96))))), ((void*)0 == &p_42)))), 4)))), g_115)), 9))) == 65535U);
        l_521 = l_521;
    }
    return l_516;
}
inline static int32_t * func_44(int32_t ** p_45, int32_t p_46, uint32_t p_47, uint16_t p_48)
{
    int32_t ***l_498 = &g_49;
    int32_t ****l_497 = &l_498;
    int32_t *****l_496 = &l_497;
    int32_t l_502 = 0x754648E5;
    int32_t *l_503 = &g_19;
    g_499 = l_496;
    ((void) sizeof ((g_499 == &l_497) ? 1 : 0), __extension__ ({ if (g_499 == &l_497) ; else __assert_fail ("g_499 == &l_497", "/tmp/tmp_vz0cvqq.c", 215, __extension__ __PRETTY_FUNCTION__); }));
    (*l_503) = l_502;
    return &g_19;
}
static int32_t * func_50(int32_t p_51, int32_t * p_52, uint32_t p_53)
{
    uint8_t *l_184 = (void*)0;
    int32_t *l_191 = &g_94;
    int32_t **l_190 = &l_191;
    int32_t ***l_189 = &l_190;
    int16_t *l_200 = &g_96;
    uint32_t *l_201 = &g_202;
    uint32_t l_251 = 7U;
    int8_t **l_272 = (void*)0;
    uint32_t l_299 = 4294967295U;
    uint32_t l_312 = 4294967295U;
    uint8_t l_342 = 0x08;
    uint16_t l_477 = 65531U;
    int32_t l_493 = 0x37EDD218;
    (*p_52) = (safe_div_func_uint16_t_u_u(((safe_mod_func_uint8_t_u_u(0xE9, 1U)) == ((0x95DD1021 <= ((l_184 == &g_107) != (safe_mod_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_u((((*l_189) = (void*)0) != &p_52), (safe_div_func_uint8_t_u_u(((safe_sub_func_uint8_t_u_u(((safe_sub_func_int32_t_s_s(g_65, ((safe_lshift_func_uint16_t_u_s((g_83 && (-1)), 14)) < g_19))) && 0U), p_53)) | g_65), 0xF8)))) <= 7U), p_53)))) < g_107)), p_53));
    ((void) sizeof ((l_190 == 0) ? 1 : 0), __extension__ ({ if (l_190 == 0) ; else __assert_fail ("l_190 == 0", "/tmp/tmp_vz0cvqq.c", 246, __extension__ __PRETTY_FUNCTION__); }));
    p_51 = ((0x07125969 >= ((*l_201) = ((void*)0 == l_200))) || ((*p_52) = (safe_lshift_func_uint8_t_u_u((*l_191), g_57))));
    if (((safe_rshift_func_uint8_t_u_s(((*l_191) = ((((void*)0 == l_184) || g_202) <= (safe_rshift_func_uint16_t_u_s(1U, 3)))), ((&p_51 == &p_51) < g_83))) < (+g_65)))
    {
        int32_t ****l_212 = &l_189;
        int8_t l_226 = 0xBE;
        int32_t ***l_229 = &g_49;
        uint32_t *l_279 = &g_202;
        if (((((*l_191) = ((safe_mod_func_uint8_t_u_u((((void*)0 != &p_51) > (65535U && ((void*)0 != l_212))), (safe_add_func_uint32_t_u_u((safe_rshift_func_int8_t_s_s(7, ((((safe_lshift_func_uint8_t_u_u(g_202, 0)) != (!(p_53 <= (((*l_200) = p_51) ^ (*l_191))))) | g_94) < 0xBA))), (*p_52))))) <= g_202)) <= 0x2FA66786) < 9))
        {
            uint8_t l_234 = 0xEE;
            uint16_t *l_241 = &g_74;
            int32_t l_270 = (-1);
            for (g_115 = (-26); (g_115 <= 18); g_115++)
            {
                int8_t *l_230 = &l_226;
                int8_t *l_231 = &g_232;
                int32_t l_233 = (-1);
                int32_t l_235 = 0xFA83A99F;
                (**l_212) = g_49;
                (*p_52) = (safe_div_func_uint32_t_u_u((safe_div_func_uint16_t_u_u(((l_226 = 7U) && (((safe_mod_func_int32_t_s_s(((((*l_231) = ((*l_230) = (l_229 != (void*)0))) ^ l_233) >= l_234), g_4)) <= (((&g_96 != &g_96) != 0) <= p_53)) == (*p_52))), 0x0108)), 0x20E445E5));
                if (l_235)
                    continue;
            }
            (*l_191) = g_65;
            if ((((0x6923BBB9 > ((safe_rshift_func_uint16_t_u_u(0xF76D, 15)) >= (safe_mod_func_int32_t_s_s((g_83 & (g_107 & (!(*p_52)))), (((*l_241) = p_51) || (65528U < (0 & (g_242 != 1U)))))))) ^ 8) < g_57))
            {
                int32_t *l_256 = &g_19;
                for (g_107 = 10; (g_107 < 17); g_107 = safe_add_func_uint32_t_u_u(g_107, 9))
                {
                    (*p_52) = ((safe_rshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_s(p_51, 2)), 10)) > (safe_add_func_int16_t_s_s(p_51, (l_251 = g_96))));
                }
                for (g_115 = 7; (g_115 != 9); ++g_115)
                {
                    uint32_t l_257 = 0xEAB9BFD8;
                }
            }
            else
            {
                (*p_52) = (*p_52);
            }
        }
        else
        {
            uint32_t **l_280 = &l_201;
            uint8_t *l_281 = &g_107;
            uint8_t *l_282 = &g_283;
            (*g_287) = (safe_add_func_int32_t_s_s((*p_52), (g_57 <= ((((((*l_282) = ((*l_281) = ((l_279 == ((*l_280) = (void*)0)) | p_53))) < (((safe_add_func_uint8_t_u_u(((g_115 ^ (g_49 == (g_286 = (void*)0))) > (((*l_279) = (safe_add_func_uint16_t_u_u((!(safe_rshift_func_uint8_t_u_s((safe_add_func_int16_t_s_s(p_53, g_19)), g_19))), g_65))) ^ 4294967295U)), 3U)) == (*g_287)) && g_94)) == g_19) && g_242) | p_53))));
            ((void) sizeof ((l_201 == 0) ? 1 : 0), __extension__ ({ if (l_201 == 0) ; else __assert_fail ("l_201 == 0", "/tmp/tmp_vz0cvqq.c", 295, __extension__ __PRETTY_FUNCTION__); }));
            ((void) sizeof ((g_286 == 0) ? 1 : 0), __extension__ ({ if (g_286 == 0) ; else __assert_fail ("g_286 == 0", "/tmp/tmp_vz0cvqq.c", 296, __extension__ __PRETTY_FUNCTION__); }));
            (*l_191) = (safe_add_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u(0x9745, 3)), (*g_287)));
        }
        ((void) sizeof ((l_201 == 0 || l_201 == &g_202) ? 1 : 0), __extension__ ({ if (l_201 == 0 || l_201 == &g_202) ; else __assert_fail ("l_201 == 0 || l_201 == &g_202", "/tmp/tmp_vz0cvqq.c", 300, __extension__ __PRETTY_FUNCTION__); }));
        ((void) sizeof ((g_286 == 0 || g_286 == &g_287) ? 1 : 0), __extension__ ({ if (g_286 == 0 || g_286 == &g_287) ; else __assert_fail ("g_286 == 0 || g_286 == &g_287", "/tmp/tmp_vz0cvqq.c", 301, __extension__ __PRETTY_FUNCTION__); }));
        g_287 = func_58(g_83, (*p_52), (l_299 = ((*l_200) = g_4)), (*p_52));
        ((void) sizeof ((g_287 == &g_76 || g_287 == &g_65) ? 1 : 0), __extension__ ({ if (g_287 == &g_76 || g_287 == &g_65) ; else __assert_fail ("g_287 == &g_76 || g_287 == &g_65", "/tmp/tmp_vz0cvqq.c", 304, __extension__ __PRETTY_FUNCTION__); }));
    }
    else
    {
        int32_t *l_300 = (void*)0;
        uint16_t *l_303 = &g_242;
        uint16_t **l_302 = &l_303;
        uint16_t *l_305 = &g_242;
        uint16_t **l_304 = &l_305;
        int8_t *l_313 = (void*)0;
        int8_t *l_314 = &g_232;
        int32_t l_386 = 8;
        int8_t l_402 = 0x76;
        uint8_t l_409 = 247U;
        uint32_t l_450 = 0xF8D69C6D;
        uint16_t l_456 = 0xF453;
        uint32_t ***l_483 = (void*)0;
        int32_t **l_491 = &l_191;
        int8_t **l_492 = &l_313;
        (*g_286) = l_300;
        ((void) sizeof ((g_287 == 0) ? 1 : 0), __extension__ ({ if (g_287 == 0) ; else __assert_fail ("g_287 == 0", "/tmp/tmp_vz0cvqq.c", 325, __extension__ __PRETTY_FUNCTION__); }));
        if (((+((*p_52) = ((((*l_304) = ((*l_302) = l_200)) != l_200) >= 0x45))) > (((safe_lshift_func_uint16_t_u_s(g_115, 10)) || ((*l_314) = (safe_mod_func_int32_t_s_s((safe_sub_func_int16_t_s_s(g_202, ((65534U >= g_242) & (p_53 | p_51)))), l_312)))) <= 0xA5)))
        {
            uint32_t l_335 = 4294967295U;
            int32_t l_336 = 0x72E63399;
            uint16_t **l_341 = (void*)0;
            int32_t ***l_414 = &l_190;
            int32_t *l_434 = &l_386;
            int32_t *l_435 = &g_19;
            p_52 = (*g_286);
            ((void) sizeof ((p_52 == 0) ? 1 : 0), __extension__ ({ if (p_52 == 0) ; else __assert_fail ("p_52 == 0", "/tmp/tmp_vz0cvqq.c", 336, __extension__ __PRETTY_FUNCTION__); }));
            for (g_94 = 0; (g_94 != 0); g_94 = safe_add_func_uint8_t_u_u(g_94, 7))
            {
                uint32_t *l_338 = &g_202;
                int32_t l_389 = 1;
                int32_t ***l_408 = &g_49;
                for (g_83 = 1; (g_83 < 26); ++g_83)
                {
                    uint16_t l_337 = 3U;
                    int32_t l_381 = 1;
                    int32_t *l_393 = &l_386;
                    for (l_299 = 7; (l_299 >= 5); --l_299)
                    {
                        uint8_t *l_325 = &g_283;
                        int32_t *l_334 = &g_19;
                        p_51 = ((l_338 = func_58(g_74, ((safe_div_func_int16_t_s_s((safe_add_func_uint8_t_u_u(((*l_325) = ((void*)0 == &p_52)), (l_335 = (safe_add_func_int32_t_s_s(p_51, (g_83 || (((*l_201) = ((0 == (safe_div_func_int8_t_s_s(4, (g_76 & (safe_sub_func_int32_t_s_s(((*l_334) = (safe_lshift_func_uint16_t_u_u(1U, p_53))), p_53)))))) == g_57)) ^ p_53))))))), p_51)) ^ l_336), p_51, l_337)) != l_300);
                        ((void) sizeof ((l_338 == &g_76 || l_338 == &g_65) ? 1 : 0), __extension__ ({ if (l_338 == &g_76 || l_338 == &g_65) ; else __assert_fail ("l_338 == &g_76 || l_338 == &g_65", "/tmp/tmp_vz0cvqq.c", 353, __extension__ __PRETTY_FUNCTION__); }));
                    }
                    if ((((*l_200) = 0xA417) ^ (safe_rshift_func_uint16_t_u_s((&l_305 != l_341), 3))))
                    {
                        int32_t *l_343 = (void*)0;
                        int32_t *l_344 = (void*)0;
                        int32_t *l_345 = &g_65;
                        (*l_345) = l_342;
                    }
                    else
                    {
                        uint32_t l_361 = 0xBCB941C5;
                        int32_t *l_362 = (void*)0;
                        int32_t *l_387 = (void*)0;
                        int32_t *l_388 = &l_336;
                        p_51 = (((*l_338) = (safe_mod_func_uint16_t_u_u(((safe_sub_func_uint16_t_u_u((((safe_unary_minus_func_int16_t_s(p_53)) == g_65) != ((((safe_lshift_func_uint16_t_u_s(0x4EA9, (safe_div_func_uint16_t_u_u((g_83 && 6U), ((l_337 | 0) & (safe_mod_func_int8_t_s_s(p_53, (safe_div_func_int16_t_s_s(7, l_361))))))))) >= p_53) && g_115) != p_51)), 0U)) >= 0x82F0), g_19))) ^ 0x67C5E2B0);
                        if (p_53)
                            break;
                        l_389 = ((+((*l_388) = ((safe_add_func_uint16_t_u_u(p_51, (((safe_add_func_int16_t_s_s((safe_sub_func_int8_t_s_s((safe_mod_func_uint32_t_u_u(g_115, 0xCED499C8)), g_372)), (safe_rshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_u(((safe_add_func_uint8_t_u_u(p_53, (safe_lshift_func_int16_t_s_s((g_96 = g_242), (l_381 = 0x3006))))) ^ ((safe_div_func_uint16_t_u_u(((0x6DF7 | (safe_div_func_uint8_t_u_u(255U, l_335))) || 1U), p_51)) & l_386)), 7)), 1)))) && g_76) | p_51))) > p_53))) < 0U);
                    }
                    (*l_393) = (safe_add_func_uint32_t_u_u((g_392 == (void*)0), (g_74 >= p_51)));
                }
                ((void) sizeof ((l_338 == &g_76 || l_338 == &g_65 || l_338 == &g_202) ? 1 : 0), __extension__ ({ if (l_338 == &g_76 || l_338 == &g_65 || l_338 == &g_202) ; else __assert_fail ("l_338 == &g_76 || l_338 == &g_65 || l_338 == &g_202", "/tmp/tmp_vz0cvqq.c", 376, __extension__ __PRETTY_FUNCTION__); }));
                for (l_335 = 0; (l_335 > 28); l_335 = safe_add_func_uint16_t_u_u(l_335, 9))
                {
                    int32_t *l_396 = &g_65;
                    (*l_396) = 1;
                }
                for (l_251 = 23; (l_251 == 20); l_251 = safe_sub_func_uint16_t_u_u(l_251, 7))
                {
                    int16_t l_399 = (-10);
                    int32_t *l_405 = &l_389;
                    uint32_t **l_411 = &l_338;
                    uint32_t ***l_410 = &l_411;
                    if (l_399)
                        break;
                    l_405 = func_58((safe_rshift_func_uint16_t_u_u(g_202, 3)), l_402, (safe_add_func_uint16_t_u_u(((l_409 = (((l_399 & l_336) | ((*l_405) = ((*g_286) != (void*)0))) | (safe_rshift_func_uint8_t_u_s(0x6E, ((void*)0 == l_408))))) | p_51), 65535U)), g_232);
                    ((void) sizeof ((l_405 == &g_76 || l_405 == &g_65) ? 1 : 0), __extension__ ({ if (l_405 == &g_76 || l_405 == &g_65) ; else __assert_fail ("l_405 == &g_76 || l_405 == &g_65", "/tmp/tmp_vz0cvqq.c", 392, __extension__ __PRETTY_FUNCTION__); }));
                    (*l_410) = (void*)0;
                    ((void) sizeof ((l_411 == 0) ? 1 : 0), __extension__ ({ if (l_411 == 0) ; else __assert_fail ("l_411 == 0", "/tmp/tmp_vz0cvqq.c", 395, __extension__ __PRETTY_FUNCTION__); }));
                    (*g_286) = (*g_286);
                }
            }
            (*l_435) = ((*l_434) = (safe_div_func_uint16_t_u_u(((void*)0 != l_414), (safe_lshift_func_int16_t_s_s((((p_51 | (safe_sub_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_s((safe_rshift_func_int16_t_s_s(((safe_sub_func_int16_t_s_s((safe_div_func_int32_t_s_s(p_53, (safe_sub_func_int32_t_s_s((safe_div_func_int32_t_s_s(((*l_191) = (l_303 != (void*)0)), ((*l_201) = (((void*)0 == &g_232) & (safe_mod_func_uint8_t_u_u(((+(p_51 ^ 0xB0A4)) == p_53), p_51)))))), 4294967293U)))), g_283)) && p_53), g_372)), 11)) && g_65), p_51))) && p_51) != g_96), 13)))));
        }
        else
        {
            int16_t l_453 = (-10);
            uint16_t *l_458 = (void*)0;
            int8_t l_479 = 0xDC;
            int32_t *l_480 = &g_76;
            uint16_t l_486 = 65532U;
            uint32_t l_487 = 0x3323BC56;
            for (g_96 = (-22); (g_96 == 9); g_96 = safe_add_func_int16_t_s_s(g_96, 9))
            {
                int8_t *l_446 = &l_402;
                int32_t l_478 = (-1);
                int16_t *l_490 = &l_453;
                l_300 = &p_51;
                ((void) sizeof ((l_300 == &p_51) ? 1 : 0), __extension__ ({ if (l_300 == &p_51) ; else __assert_fail ("l_300 == &p_51", "/tmp/tmp_vz0cvqq.c", 416, __extension__ __PRETTY_FUNCTION__); }));
                for (l_402 = 26; (l_402 > (-8)); l_402 = safe_sub_func_int16_t_s_s(l_402, 8))
                {
                    int8_t *l_447 = &g_115;
                    uint16_t *l_457 = &g_74;
                    int32_t l_481 = 0x8A9741A8;
                    if (((safe_mod_func_uint16_t_u_u((((&p_52 != (*l_189)) & (safe_rshift_func_uint8_t_u_u(((*g_392) <= (*g_392)), 6))) >= (safe_sub_func_int8_t_s_s(((p_51 ^ (l_446 == l_447)) & (safe_rshift_func_uint16_t_u_s((l_450 ^ (safe_sub_func_int16_t_s_s(1, 0U))), 3))), (-3)))), g_283)) >= l_453))
                    {
                        l_479 = ((safe_sub_func_int8_t_s_s(0x41, (((*l_300) <= l_456) <= ((l_457 != l_458) != (safe_rshift_func_uint16_t_u_s((safe_add_func_uint32_t_u_u((safe_mod_func_int8_t_s_s(((safe_add_func_uint8_t_u_u((safe_add_func_int16_t_s_s((safe_mod_func_int16_t_s_s((safe_sub_func_int16_t_s_s(g_19, (safe_add_func_uint32_t_u_u(4294967295U, (safe_lshift_func_uint8_t_u_s(0xC9, (((g_96 && (-1)) == 3U) >= l_477))))))), 0xEDAA)), l_478)), 0xE6)) <= p_53), 0x5F)), p_51)), 11)))))) <= (*l_300));
                        l_480 = (*g_286);
                        ((void) sizeof ((l_480 == 0) ? 1 : 0), __extension__ ({ if (l_480 == 0) ; else __assert_fail ("l_480 == 0", "/tmp/tmp_vz0cvqq.c", 427, __extension__ __PRETTY_FUNCTION__); }));
                    }
                    else
                    {
                        int32_t *l_482 = &g_19;
                        (*p_52) = l_481;
                        (*g_286) = &p_51;
                        ((void) sizeof ((g_287 == &p_51) ? 1 : 0), __extension__ ({ if (g_287 == &p_51) ; else __assert_fail ("g_287 == &p_51", "/tmp/tmp_vz0cvqq.c", 435, __extension__ __PRETTY_FUNCTION__); }));
                        return l_482;
                    }
                    ((void) sizeof ((l_480 == 0) ? 1 : 0), __extension__ ({ if (l_480 == 0) ; else __assert_fail ("l_480 == 0", "/tmp/tmp_vz0cvqq.c", 442, __extension__ __PRETTY_FUNCTION__); }));
                    return (*g_286);
                }
                if (g_107)
                {
                    (*l_300) = ((void*)0 != l_483);
                }
                else
                {
                    if ((*p_52))
                    {
                        l_487 = (safe_rshift_func_uint16_t_u_s(l_486, 6));
                    }
                    else
                    {
                        if ((*l_300))
                            break;
                    }
                }
                (*l_300) = ((safe_lshift_func_int16_t_s_u(((*l_490) = 0x4312), 1)) < 246U);
            }
            ((void) sizeof ((l_300 == &p_51 || l_300 == 0) ? 1 : 0), __extension__ ({ if (l_300 == &p_51 || l_300 == 0) ; else __assert_fail ("l_300 == &p_51 || l_300 == 0", "/tmp/tmp_vz0cvqq.c", 466, __extension__ __PRETTY_FUNCTION__); }));
        }
        ((void) sizeof ((p_52 == &g_65 || p_52 == &g_76 || p_52 == 0 || p_52 == &g_19) ? 1 : 0), __extension__ ({ if (p_52 == &g_65 || p_52 == &g_76 || p_52 == 0 || p_52 == &g_19) ; else __assert_fail ("p_52 == &g_65 || p_52 == &g_76 || p_52 == 0 || p_52 == &g_19", "/tmp/tmp_vz0cvqq.c", 469, __extension__ __PRETTY_FUNCTION__); }));
        ((void) sizeof ((l_300 == &p_51 || l_300 == 0) ? 1 : 0), __extension__ ({ if (l_300 == &p_51 || l_300 == 0) ; else __assert_fail ("l_300 == &p_51 || l_300 == 0", "/tmp/tmp_vz0cvqq.c", 470, __extension__ __PRETTY_FUNCTION__); }));
        ((void) sizeof ((l_303 == &g_96) ? 1 : 0), __extension__ ({ if (l_303 == &g_96) ; else __assert_fail ("l_303 == &g_96", "/tmp/tmp_vz0cvqq.c", 471, __extension__ __PRETTY_FUNCTION__); }));
        ((void) sizeof ((l_305 == &g_96) ? 1 : 0), __extension__ ({ if (l_305 == &g_96) ; else __assert_fail ("l_305 == &g_96", "/tmp/tmp_vz0cvqq.c", 472, __extension__ __PRETTY_FUNCTION__); }));
        (*l_491) = ((*g_286) = (*g_286));
        ((void) sizeof ((l_191 == 0) ? 1 : 0), __extension__ ({ if (l_191 == 0) ; else __assert_fail ("l_191 == 0", "/tmp/tmp_vz0cvqq.c", 475, __extension__ __PRETTY_FUNCTION__); }));
        l_493 = (l_184 == ((*l_492) = &g_115));
        ((void) sizeof ((l_313 == &g_115) ? 1 : 0), __extension__ ({ if (l_313 == &g_115) ; else __assert_fail ("l_313 == &g_115", "/tmp/tmp_vz0cvqq.c", 478, __extension__ __PRETTY_FUNCTION__); }));
    }
    ((void) sizeof ((p_52 == &g_65 || p_52 == &g_76 || p_52 == 0 || p_52 == &g_19) ? 1 : 0), __extension__ ({ if (p_52 == &g_65 || p_52 == &g_76 || p_52 == 0 || p_52 == &g_19) ; else __assert_fail ("p_52 == &g_65 || p_52 == &g_76 || p_52 == 0 || p_52 == &g_19", "/tmp/tmp_vz0cvqq.c", 481, __extension__ __PRETTY_FUNCTION__); }));
    ((void) sizeof ((l_191 == 0 || l_191 == &g_94) ? 1 : 0), __extension__ ({ if (l_191 == 0 || l_191 == &g_94) ; else __assert_fail ("l_191 == 0 || l_191 == &g_94", "/tmp/tmp_vz0cvqq.c", 482, __extension__ __PRETTY_FUNCTION__); }));
    ((void) sizeof ((l_201 == 0 || l_201 == &g_202) ? 1 : 0), __extension__ ({ if (l_201 == 0 || l_201 == &g_202) ; else __assert_fail ("l_201 == 0 || l_201 == &g_202", "/tmp/tmp_vz0cvqq.c", 483, __extension__ __PRETTY_FUNCTION__); }));
    ((void) sizeof ((g_287 == 0 || g_287 == &g_76 || g_287 == &g_65) ? 1 : 0), __extension__ ({ if (g_287 == 0 || g_287 == &g_76 || g_287 == &g_65) ; else __assert_fail ("g_287 == 0 || g_287 == &g_76 || g_287 == &g_65", "/tmp/tmp_vz0cvqq.c", 484, __extension__ __PRETTY_FUNCTION__); }));
    ((void) sizeof ((g_286 == 0 || g_286 == &g_287) ? 1 : 0), __extension__ ({ if (g_286 == 0 || g_286 == &g_287) ; else __assert_fail ("g_286 == 0 || g_286 == &g_287", "/tmp/tmp_vz0cvqq.c", 485, __extension__ __PRETTY_FUNCTION__); }));
    return &g_94;
}
static int32_t * func_58(int32_t p_59, int32_t p_60, int16_t p_61, int32_t p_62)
{
    int8_t *l_147 = &g_115;
    int8_t **l_146 = &l_147;
    int32_t l_148 = (-1);
    int16_t *l_149 = &g_96;
    uint32_t l_158 = 1U;
    if ((((safe_mod_func_uint16_t_u_u((l_148 = (safe_div_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(0xFE, ((l_146 == (void*)0) || (l_148 < g_19)))), ((*l_149) = g_76))) > (safe_rshift_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((safe_add_func_int16_t_s_s(((g_94 != (-9)) != ((safe_lshift_func_int16_t_s_u(l_148, 0)) || l_148)), p_60)), l_148)), 1))), l_148)), l_148))), 0x8205)) <= p_60) >= l_158))
    {
        int32_t **l_159 = (void*)0;
        int32_t *l_160 = &g_65;
        int32_t **l_179 = &l_160;
        l_160 = &l_148;
        ((void) sizeof ((l_160 == &l_148) ? 1 : 0), __extension__ ({ if (l_160 == &l_148) ; else __assert_fail ("l_160 == &l_148", "/tmp/tmp_vz0cvqq.c", 511, __extension__ __PRETTY_FUNCTION__); }));
        if (((void*)0 != &p_62))
        {
            int32_t *l_161 = (void*)0;
            int32_t **l_162 = (void*)0;
            int32_t **l_163 = (void*)0;
            int32_t **l_164 = &l_161;
            int32_t **l_165 = &l_160;
            l_160 = &p_60;
            ((void) sizeof ((l_160 == &p_60) ? 1 : 0), __extension__ ({ if (l_160 == &p_60) ; else __assert_fail ("l_160 == &p_60", "/tmp/tmp_vz0cvqq.c", 521, __extension__ __PRETTY_FUNCTION__); }));
            (*l_165) = ((*l_164) = l_161);
            ((void) sizeof ((l_160 == 0) ? 1 : 0), __extension__ ({ if (l_160 == 0) ; else __assert_fail ("l_160 == 0", "/tmp/tmp_vz0cvqq.c", 524, __extension__ __PRETTY_FUNCTION__); }));
            for (g_115 = 0; (g_115 == 22); ++g_115)
            {
                (*l_164) = &p_60;
                ((void) sizeof ((l_161 == &p_60) ? 1 : 0), __extension__ ({ if (l_161 == &p_60) ; else __assert_fail ("l_161 == &p_60", "/tmp/tmp_vz0cvqq.c", 529, __extension__ __PRETTY_FUNCTION__); }));
            }
            ((void) sizeof ((l_161 == &p_60 || l_161 == 0) ? 1 : 0), __extension__ ({ if (l_161 == &p_60 || l_161 == 0) ; else __assert_fail ("l_161 == &p_60 || l_161 == 0", "/tmp/tmp_vz0cvqq.c", 532, __extension__ __PRETTY_FUNCTION__); }));
        }
        else
        {
            int32_t l_175 = 0x27D2F113;
            int32_t ***l_176 = (void*)0;
            (*l_160) = ((((safe_sub_func_int16_t_s_s(((void*)0 != &g_96), g_19)) > (-9)) && p_61) != (safe_sub_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(g_4, (~((void*)0 == &g_107)))), ((l_175 = g_94) == g_76))));
            if (((((*l_149) = l_158) >= (*l_160)) & g_76))
            {
                return &g_65;
            }
            else
            {
                int32_t ****l_177 = &l_176;
                (*l_177) = l_176;
            }
            g_65 = ((~g_115) >= g_94);
        }
        ((void) sizeof ((l_160 == &l_148 || l_160 == 0) ? 1 : 0), __extension__ ({ if (l_160 == &l_148 || l_160 == 0) ; else __assert_fail ("l_160 == &l_148 || l_160 == 0", "/tmp/tmp_vz0cvqq.c", 553, __extension__ __PRETTY_FUNCTION__); }));
        (*l_179) = &g_19;
        ((void) sizeof ((l_160 == &g_19) ? 1 : 0), __extension__ ({ if (l_160 == &g_19) ; else __assert_fail ("l_160 == &g_19", "/tmp/tmp_vz0cvqq.c", 556, __extension__ __PRETTY_FUNCTION__); }));
    }
    else
    {
        return &g_65;
    }
    return &g_76;
}
static int32_t func_63(int32_t ** p_64)
{
    uint32_t l_69 = 0U;
    for (g_65 = 0; (g_65 > 28); g_65++)
    {
        uint8_t l_68 = 0x59;
        int32_t *l_91 = &g_65;
        if (l_68)
            break;
        if (l_69)
        {
            int32_t l_70 = (-4);
            uint16_t *l_73 = &g_74;
            int32_t *l_75 = &g_76;
            uint8_t *l_104 = (void*)0;
            uint8_t *l_105 = &l_68;
            uint8_t *l_106 = &g_107;
            int8_t *l_114 = &g_115;
            (*l_75) = ((p_64 == p_64) != ((l_70 < (l_69 | ((g_19 | l_68) == (safe_add_func_uint32_t_u_u(g_4, l_70))))) && (((((*l_73) = l_70) ^ g_65) || 0x9C674F98) || (-9))));
            for (g_74 = 0; (g_74 < 59); g_74 = safe_add_func_int8_t_s_s(g_74, 7))
            {
                uint32_t l_92 = 0x327BC4A6;
                (*l_75) = l_68;
                for (l_69 = 0; (l_69 == 39); l_69 = safe_add_func_uint16_t_u_u(l_69, 8))
                {
                    uint32_t l_86 = 4294967292U;
                    int32_t *l_93 = &g_94;
                    int32_t l_95 = 1;
                    g_96 = (l_95 = ((((safe_mod_func_int16_t_s_s(((g_83 = (g_19 < 1U)) == g_76), (*l_75))) || ((*l_75) = (safe_lshift_func_int8_t_s_u(g_74, g_4)))) > l_86) <= ((*l_93) = (safe_div_func_int32_t_s_s(l_68, (safe_lshift_func_uint16_t_u_u((((void*)0 == l_91) == l_69), l_92)))))));
                }
            }
            g_94 = (safe_div_func_uint8_t_u_u((~(65530U != (((*l_106) = (safe_lshift_func_int8_t_s_s((safe_add_func_uint8_t_u_u(((*l_105) = g_4), 0x08)), ((*l_75) | 250U)))) > ((safe_sub_func_int16_t_s_s((((*l_91) != 0x3350090E) && g_96), (safe_sub_func_int8_t_s_s(((*l_114) = (safe_mod_func_int16_t_s_s(g_65, g_83))), l_69)))) ^ l_69)))), 0x2C));
        }
        else
        {
            uint32_t l_116 = 8U;
            int32_t **l_117 = &l_91;
            if ((*l_91))
                break;
            if (l_116)
                break;
            (*l_117) = &g_19;
            ((void) sizeof ((l_91 == &g_19) ? 1 : 0), __extension__ ({ if (l_91 == &g_19) ; else __assert_fail ("l_91 == &g_19", "/tmp/tmp_vz0cvqq.c", 618, __extension__ __PRETTY_FUNCTION__); }));
            for (g_83 = (-13); (g_83 == 49); g_83 = safe_add_func_int32_t_s_s(g_83, 9))
            {
                int32_t l_120 = (-8);
                uint16_t *l_125 = &g_74;
                int8_t *l_127 = &g_115;
                int8_t **l_126 = &l_127;
                int8_t *l_129 = (void*)0;
                int8_t **l_128 = &l_129;
                int32_t *l_134 = &g_94;
                g_76 = l_120;
                (*l_134) = (safe_sub_func_int16_t_s_s(((safe_add_func_uint32_t_u_u((((1U && (l_125 != &g_74)) && (((*l_126) = &g_115) != ((*l_128) = &g_115))) ^ (l_120 < ((**l_117) && (safe_div_func_uint16_t_u_u((((safe_sub_func_uint32_t_u_u((0x6C6C && (1 || g_19)), 0x3BBBF133)) == 0xB5) & (**l_117)), g_94))))), (*l_91))) != l_120), 0U));
                ((void) sizeof ((l_129 == 0 || l_129 == &g_115) ? 1 : 0), __extension__ ({ if (l_129 == 0 || l_129 == &g_115) ; else __assert_fail ("l_129 == 0 || l_129 == &g_115", "/tmp/tmp_vz0cvqq.c", 631, __extension__ __PRETTY_FUNCTION__); }));
            }
        }
        ((void) sizeof ((l_91 == &g_19 || l_91 == &g_65) ? 1 : 0), __extension__ ({ if (l_91 == &g_19 || l_91 == &g_65) ; else __assert_fail ("l_91 == &g_19 || l_91 == &g_65", "/tmp/tmp_vz0cvqq.c", 635, __extension__ __PRETTY_FUNCTION__); }));
    }
    return l_69;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_4;
    csmith_sink_ = g_19;
    csmith_sink_ = g_57;
    csmith_sink_ = g_65;
    csmith_sink_ = g_74;
    csmith_sink_ = g_76;
    csmith_sink_ = g_83;
    csmith_sink_ = g_94;
    csmith_sink_ = g_96;
    csmith_sink_ = g_107;
    csmith_sink_ = g_115;
    csmith_sink_ = g_202;
    csmith_sink_ = g_232;
    csmith_sink_ = g_242;
    csmith_sink_ = g_283;
    csmith_sink_ = g_372;
    csmith_sink_ = g_535;
    platform_main_end(0,0);
    return 0;
}
