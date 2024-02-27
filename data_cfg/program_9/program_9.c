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
struct S0 {
   const int32_t f0;
   const uint32_t f1;
   const uint8_t f2;
   int32_t f3;
   uint32_t f4;
};
#pragma pack(push)
#pragma pack(1)
struct S1 {
   int32_t f0;
   const int16_t f1;
   uint8_t f2;
   int32_t f3;
   int32_t f4;
   int8_t f5;
   uint32_t f6;
   uint32_t f7;
   const int32_t f8;
   int16_t f9;
};
#pragma pack(pop)
static uint32_t g_2 = 0x23B1A956;
static struct S0 g_28 = {0x71B70561,4294967295U,0x58,3,4294967295U};
static int32_t g_30 = (-10);
static int32_t *g_29 = &g_30;
static struct S1 g_48 = {0x05104E0B,6,1U,0,-3,0x46,0xBCF2EC28,4294967295U,0x65E5AB8B,1};
static int32_t g_64 = 0;
static int32_t *g_63 = &g_64;
static const struct S1 g_91 = {0x507BCD5A,3,246U,-1,0xFE0EC928,1,0x596CDD17,0xCF63D7CB,0x8985BB29,0x1B0F};
static uint32_t *g_113 = &g_48.f7;
static uint32_t **g_112 = &g_113;
static struct S1 * const *g_134 = (void*)0;
static int32_t g_137 = 1;
static int32_t g_139 = (-9);
static int8_t *g_148 = &g_48.f5;
static int32_t *** const g_180 = (void*)0;
static int16_t g_193 = (-1);
static uint8_t g_213 = 1U;
static int32_t g_264 = 4;
static uint32_t g_290 = 0x0625BB58;
static uint16_t g_338 = 0x9962;
static struct S1 g_356 = {0x752B4E38,0x4A16,254U,0x968CA8C2,0xEBF77952,0xBC,0x1E6BA40B,4294967287U,-1,0x6AF2};
static int32_t **g_431 = &g_29;
static int32_t ***g_430 = &g_431;
static int32_t ****g_429 = &g_430;
static int32_t *****g_428 = &g_429;
static int32_t *****g_432 = &g_429;
static struct S0 **g_480 = (void*)0;
static struct S0 *g_483 = &g_28;
static struct S0 **g_482 = &g_483;
static int16_t g_486 = 0x9AFE;
static uint8_t **g_528 = (void*)0;
static int32_t *g_559 = &g_356.f4;
static int32_t **g_558 = &g_559;
static const struct S0 *g_601 = &g_28;
static const struct S0 * const *g_600 = &g_601;
static const struct S0 * const **g_599 = &g_600;
static const struct S0 * const ***g_598 = &g_599;
static uint16_t **g_607 = (void*)0;
static uint16_t ***g_606 = &g_607;
static const struct S1 g_612 = {0xD63294EE,9,6U,0,0x227B02F8,1,0x733126D1,0xA99E7479,0xDED783F5,0x1F7C};
static const int32_t *g_717 = &g_356.f0;
static struct S1 g_740 = {-1,0x99E8,0U,0x53B3733C,0x49724C7D,4,1U,0U,0x225E02E9,0xFD41};
static struct S1 *g_739 = &g_740;
static uint32_t g_796 = 0xA9F399BD;
static const struct S0 g_799 = {1,4294967295U,0x70,-10,0x1E990D92};
static int8_t g_885 = 0xFF;
static struct S0 g_904 = {0x439AC815,1U,0xDC,0,0x19B8C05A};
static struct S0 *g_903 = &g_904;
static struct S0 g_906 = {0,5U,0xB7,-3,0x043797CE};
static uint32_t ***g_1000 = (void*)0;
static uint32_t ****g_999 = &g_1000;
static uint32_t *****g_998 = &g_999;
static struct S1 **g_1141 = (void*)0;
static struct S1 ***g_1140 = &g_1141;
static const int16_t *g_1179 = &g_193;
static const int16_t **g_1178 = &g_1179;
static int8_t g_1208 = 1;
static struct S0 g_1216 = {0x62EB2117,0xD219A317,0xED,5,0x4E05D384};
static struct S0 **g_1242 = &g_903;
static struct S0 *** const g_1241 = &g_1242;
static struct S0 *** const *g_1240 = &g_1241;
static struct S0 *** const **g_1239 = &g_1240;
static uint8_t g_1413 = 1U;
static uint32_t *** const *g_1445 = (void*)0;
static uint32_t *** const * const *g_1444 = &g_1445;
static struct S0 ***g_1461 = &g_480;
static struct S0 ****g_1460 = &g_1461;
static struct S0 *****g_1459 = &g_1460;
static const struct S1 *g_1515 = &g_740;
static const struct S1 **g_1514 = &g_1515;
static const struct S1 ***g_1513 = &g_1514;
static const struct S1 ****g_1512 = &g_1513;
static const struct S1 ****g_1516 = &g_1513;
static struct S1 ****g_1518 = (void*)0;
static int8_t **g_1547 = (void*)0;
static int8_t ***g_1546 = &g_1547;
static uint16_t g_1668 = 65535U;
static uint16_t g_1671 = 0U;
static uint32_t func_1(void);
static uint16_t func_5(int32_t p_6, struct S1 p_7);
static struct S1 func_8(int32_t p_9, int8_t p_10);
static uint32_t func_15(const int32_t p_16);
static int32_t func_17(uint16_t p_18, const struct S1 p_19, int8_t p_20);
static uint32_t func_26(struct S0 p_27);
static int32_t * func_32(const int16_t p_33);
static int32_t * func_35(uint16_t p_36);
static uint8_t func_39(int32_t p_40, int32_t ** p_41, int32_t * p_42, uint32_t p_43, int32_t * const * p_44);
static uint32_t func_45(uint32_t p_46);
static uint32_t func_1(void)
{
    int8_t l_747 = (-1);
    int32_t l_748 = 0x25BB6234;
    uint32_t l_1683 = 0U;
    int8_t l_1701 = 0x06;
    uint8_t *l_1707 = &g_356.f2;
    uint16_t *l_1708 = &g_1668;
    if (g_2)
    {
        int32_t l_23 = 0x6D065835;
        uint8_t *l_496 = &g_356.f2;
        const struct S1 l_497 = {1,0x7662,0x70,0,0x4CE5A61A,0x90,4294967295U,0x197A70FA,-1,0x36B3};
        uint16_t l_1682 = 1U;
        l_1683 = ((((*g_148) = (safe_rshift_func_uint8_t_u_u(((((func_5(g_2, func_8((l_748 = (safe_rshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_s((func_15(((func_17((safe_mul_func_uint8_t_u_u(0xF4, (l_23 < ((((safe_add_func_int32_t_s_s((0xB0CE7AEB ^ func_26(g_28)), (safe_lshift_func_int8_t_s_s((g_91 , (*g_148)), ((safe_mod_func_int32_t_s_s((((*l_496) = g_48.f4) > l_23), 0x9FFF4F0F)) >= l_23))))) == 1U) == (*g_113)) ^ l_23)))), l_497, (*g_148)) && (*****g_432)) == 0xFD)) < l_747), l_747)), g_28.f1))), l_497.f1)) && 0x8F9C) < l_747) , l_1682) , 0x37), l_497.f5))) ^ g_356.f7) && (*g_1179));
        (*g_431) = (****g_432);
    }
    else
    {
        (**g_998) = (void*)0;
    }
    (****g_432) = func_32((safe_lshift_func_int16_t_s_s((safe_mul_func_int8_t_s_s(((*g_148) = (safe_rshift_func_uint8_t_u_u(((l_1683 , (safe_unary_minus_func_int16_t_s((((l_747 | ((((safe_mul_func_uint8_t_u_u((l_748 , ((safe_rshift_func_int8_t_s_s((l_1683 > (safe_rshift_func_int16_t_s_s(((**g_428) == (void*)0), (((*l_1708) = (safe_lshift_func_uint8_t_u_s(((*l_1707) = (safe_lshift_func_int8_t_s_u((-1), (l_1701 > (+(((*g_113) = ((safe_add_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((l_1683 | l_1683), 255U)), l_1701)) ^ 0x2A71E12F)) & l_748)))))), l_748))) , l_1683)))), 4)) || 0xCB25)), (*g_148))) >= (*****g_428)) > l_747) ^ l_1683)) == 1U) < 3)))) < 0xE163A601), l_1683))), l_1683)), 4)));
    return g_356.f6;
}
static uint16_t func_5(int32_t p_6, struct S1 p_7)
{
    uint32_t l_761 = 0x8AEC0CA3;
    uint8_t *l_762 = &g_213;
    int32_t l_763 = 0x1D3C004E;
    struct S0 *** const l_775 = &g_480;
    struct S0 *** const *l_774 = &l_775;
    struct S0 *** const **l_773 = &l_774;
    int16_t *l_883 = (void*)0;
    const int32_t l_884 = 0x74A50C4C;
    uint16_t *l_886 = &g_338;
    uint32_t ***l_891 = &g_112;
    uint32_t ****l_890 = &l_891;
    uint32_t *****l_889 = &l_890;
    int32_t *l_902 = &g_137;
    struct S1 l_927 = {-3,0x3D8E,247U,-1,0x6E6F9562,1,0x66873560,4294967295U,0x34328E44,0xD666};
    const struct S1 l_956 = {0xC440735A,8,0xCA,1,-10,0x4F,0x8DBEEBAE,0xCD4CD2D5,0xE627ACA0,-4};
    uint32_t l_973 = 0xF5298E87;
    uint16_t *****l_985 = (void*)0;
    int8_t l_990 = 0x86;
    uint32_t l_1053 = 1U;
    const int32_t *l_1096 = (void*)0;
    int32_t l_1133 = 0xEBF3ADF1;
    struct S1 **l_1137 = &g_739;
    struct S1 ***l_1136 = &l_1137;
    uint32_t l_1196 = 0U;
    uint32_t l_1228 = 4294967286U;
    int32_t l_1356 = 0x535C63B1;
    int8_t **l_1412 = &g_148;
    const struct S0 **l_1431 = &g_601;
    struct S1 *l_1432 = &g_740;
    const struct S0 *l_1433 = (void*)0;
    int16_t *l_1437 = (void*)0;
    int16_t *l_1438 = &l_927.f9;
    int16_t *l_1439 = (void*)0;
    int16_t *l_1440 = &g_48.f9;
    int8_t l_1479 = (-4);
    int32_t l_1480 = 0x68636CBD;
    int32_t l_1495 = 0x15FAE711;
    uint32_t l_1500 = 4294967286U;
    int16_t l_1505 = (-2);
    struct S0 *l_1539 = &g_28;
    return (*l_902);
}
static struct S1 func_8(int32_t p_9, int8_t p_10)
{
    struct S1 l_749 = {-10,9,0xF2,0x64861A6F,0x0C9EE209,0x77,0U,0xC3601EAC,1,0x24FA};
    (**g_430) = (****g_428);
    return l_749;
}
static uint32_t func_15(const int32_t p_16)
{
    uint32_t ***l_620 = &g_112;
    uint32_t ****l_619 = &l_620;
    uint32_t *** const *l_626 = &l_620;
    const struct S0 l_645 = {0x8EA86473,4294967287U,0xC9,0x4300DDB6,0xE37F816B};
    int32_t *l_646 = &g_28.f3;
    int32_t l_655 = 0x088892DB;
    uint32_t l_706 = 0xA7E6960A;
    uint8_t *l_726 = &g_213;
    int32_t *l_746 = &g_30;
    for (g_193 = 0; (g_193 >= 13); g_193++)
    {
        uint32_t *****l_621 = &l_619;
        uint32_t *****l_622 = (void*)0;
        uint32_t *****l_623 = (void*)0;
        uint32_t ****l_625 = (void*)0;
        uint32_t *****l_624 = &l_625;
        uint32_t *** const **l_627 = &l_626;
        int32_t l_632 = 0x65276332;
        uint16_t l_647 = 65526U;
        uint8_t *l_656 = (void*)0;
        uint8_t *l_657 = &g_356.f2;
        int32_t l_681 = 0;
        struct S1 l_738 = {0xE44BD025,0,0x64,4,0x9E45040F,0,4294967295U,4294967286U,0xCF4E9E4A,0x9525};
        (****g_428) = ((((p_16 || (((safe_sub_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u(0x42B0, 4)), p_16)) <= ((-1) == (((*l_624) = ((*l_621) = l_619)) != ((*l_627) = l_626)))) <= (safe_add_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(((l_632 && ((safe_add_func_int8_t_s_s(((safe_lshift_func_int16_t_s_u((safe_mod_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s(((((safe_mul_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((((l_645 , l_646) != (*g_558)) && l_647), 0)), p_16)) != p_16) ^ p_16) && (*****g_432)), p_16)), 252U)), 8)) == 0U), 253U)) != (*g_148))) == 0xB2), l_645.f2)), l_645.f0)))) == l_647) != 0x685F) , (****g_432));
        if (((!p_16) != ((safe_mod_func_int32_t_s_s((safe_sub_func_uint16_t_u_u(p_16, (safe_mod_func_uint32_t_u_u(((l_632 = ((((*g_148) = l_655) < ((*l_657) = 0x9E)) != ((safe_rshift_func_int8_t_s_u((safe_mul_func_int8_t_s_s((+p_16), (l_645.f0 >= l_632))), 5)) ^ ((0xC46A <= ((!l_645.f0) , 0x962A)) > p_16)))) == p_16), l_647)))), 0xF7FDB96D)) < (*g_29))))
        {
            uint32_t l_695 = 0xF3D00703;
            const int8_t l_696 = 0;
            int32_t * const ***l_732 = (void*)0;
            int32_t * const ****l_731 = &l_732;
            for (g_48.f6 = 17; (g_48.f6 <= 39); g_48.f6++)
            {
                int16_t l_714 = 0xB3E9;
                const int32_t *l_715 = &g_48.f8;
                int32_t l_733 = 0xEBE24CA3;
                if ((safe_lshift_func_int8_t_s_u(0, ((**g_558) , ((void*)0 == &g_2)))))
                {
                    struct S1 *l_670 = (void*)0;
                    int32_t l_712 = 9;
                    for (g_356.f9 = 0; (g_356.f9 < 25); g_356.f9++)
                    {
                        struct S1 **l_671 = &l_670;
                        (*g_29) = (*g_29);
                        (*l_671) = l_670;
                        if ((*g_29))
                            break;
                    }
                    for (g_48.f7 = 0; (g_48.f7 != 54); g_48.f7 = safe_add_func_int8_t_s_s(g_48.f7, 3))
                    {
                        uint16_t l_686 = 0xACF8;
                        int32_t l_697 = (-1);
                        int8_t *l_698 = &g_356.f5;
                        int32_t l_699 = 0x9E58FB84;
                        const int32_t **l_716 = &l_715;
                        l_699 = ((((~0x05A9FEDD) && 246U) | (safe_lshift_func_uint16_t_u_s(((safe_sub_func_int16_t_s_s(g_356.f1, (safe_lshift_func_int8_t_s_s(((*g_148) = l_681), ((*l_698) = (((safe_rshift_func_uint16_t_u_u(l_655, (((safe_lshift_func_uint16_t_u_u((l_686 = 0xDC73), 1)) < 1U) , ((safe_sub_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(0x1DC6E4EA, ((safe_add_func_uint8_t_u_u(((*l_657) = ((safe_add_func_uint16_t_u_u(((1U != l_647) || l_695), l_645.f1)) , l_632)), l_647)) <= 0xC5373F0F))), l_696)) && (-1))))) ^ p_16) > l_697)))))) , p_16), 15))) , (**g_431));
                        (**g_431) = (((safe_add_func_int8_t_s_s((0xF5 || (safe_lshift_func_int16_t_s_u((g_612.f0 == ((*g_148) = (safe_mod_func_uint32_t_u_u((p_16 & ((((l_706 = ((void*)0 != g_148)) , (!0x9A)) ^ ((safe_rshift_func_int8_t_s_u(((g_356.f2 = ((safe_rshift_func_int16_t_s_u(((**g_431) & (((g_48.f2 = l_712) , (+p_16)) < (*g_148))), 10)) < 0x25)) && p_16), 1)) & 0x5F)) | l_697)), l_645.f0)))), l_714))), p_16)) , l_645.f3) , (*g_29));
                        g_717 = ((*l_716) = l_715);
                    }
                }
                else
                {
                    for (l_647 = (-16); (l_647 <= 2); ++l_647)
                    {
                        uint8_t **l_727 = &l_726;
                        int32_t l_730 = 0xB07A36D7;
                        (***g_430) = (safe_sub_func_int16_t_s_s((*l_715), ((safe_mul_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((&g_486 != &g_486), 5)), (((*l_727) = l_726) != (void*)0))) | (safe_lshift_func_int8_t_s_u(((*g_148) = (l_730 = (*g_148))), (((void*)0 != l_731) ^ (((*****l_627) = ((void*)0 == (*g_429))) || l_733)))))));
                    }
                }
            }
            (****g_428) = (*g_431);
            (***g_430) = (safe_add_func_int32_t_s_s((p_16 , (((((safe_mul_func_int16_t_s_s((((l_738 , p_16) , (void*)0) == (void*)0), (g_148 == (void*)0))) < 0x510DB3CA) && p_16) , l_645.f1) , (*****g_428))), 0x2DF65B01));
            g_739 = &l_738;
        }
        else
        {
            uint16_t l_743 = 65535U;
            for (g_48.f0 = 0; (g_48.f0 <= 3); g_48.f0 = safe_add_func_int16_t_s_s(g_48.f0, 9))
            {
                return l_743;
            }
            return (*g_113);
        }
        for (g_740.f3 = 26; (g_740.f3 < 16); g_740.f3 = safe_sub_func_uint32_t_u_u(g_740.f3, 3))
        {
            (***g_429) = (***g_429);
        }
    }
    (****g_428) = l_746;
    return (*g_113);
}
static int32_t func_17(uint16_t p_18, const struct S1 p_19, int8_t p_20)
{
    int32_t l_498 = 0x09CF0BD4;
    uint16_t *l_501 = &g_338;
    uint16_t **l_500 = &l_501;
    uint16_t ***l_502 = (void*)0;
    uint16_t ***l_503 = &l_500;
    uint8_t *l_505 = (void*)0;
    uint8_t **l_504 = &l_505;
    uint8_t **l_506 = (void*)0;
    uint8_t *l_508 = (void*)0;
    uint8_t **l_507 = &l_508;
    int32_t l_509 = 4;
    int32_t *l_543 = &g_356.f0;
    int32_t l_560 = (-6);
    int8_t *l_561 = &g_356.f5;
    uint32_t ** const l_588 = &g_113;
    int32_t l_590 = 0xF79899B8;
    const struct S1 *l_609 = &g_91;
    (**g_430) = func_32((g_48.f1 >= l_498));
    (**g_431) = ((((!(((*l_503) = l_500) == (void*)0)) || ((g_48.f2 && ((((*l_504) = &g_213) == ((*l_507) = &g_213)) , g_137)) != ((**g_482) , ((*g_113) = (*g_113))))) > ((((l_509 | g_48.f9) && 0xFB93) >= l_509) < 0x1843F403)) ^ 0xEA);
    for (g_48.f0 = 0; (g_48.f0 < 10); g_48.f0 = safe_add_func_int32_t_s_s(g_48.f0, 1))
    {
        uint32_t l_529 = 0x90A5554E;
        if ((***g_430))
            break;
        if ((*g_63))
            continue;
        (*g_431) = func_35((!(((((*****g_432) = (safe_sub_func_uint32_t_u_u(((safe_rshift_func_int8_t_s_s((safe_sub_func_int16_t_s_s(0xE745, ((((safe_unary_minus_func_int32_t_s((*****g_428))) == (((((**l_500) = (safe_sub_func_int16_t_s_s((g_91.f9 ^ (((safe_add_func_int32_t_s_s((p_19.f7 , (safe_mul_func_uint8_t_u_u(l_498, 0U))), p_18)) || (((safe_rshift_func_int8_t_s_u((((void*)0 == g_528) > p_19.f2), p_18)) , l_498) , 3U)) & 4294967295U)), g_30))) , 250U) && l_509) | 0x3A9F)) | p_19.f0) < 1))), p_19.f7)) , l_529), p_19.f3))) ^ (*g_63)) && p_19.f3) , 0xF482893D)));
    }
    if ((safe_sub_func_int32_t_s_s((*g_29), (((safe_lshift_func_uint8_t_u_u((((safe_add_func_int16_t_s_s(((((p_18 && ((-7) >= ((*l_561) = (safe_lshift_func_uint16_t_u_s((safe_mod_func_uint8_t_u_u((+(safe_mod_func_int8_t_s_s(((l_543 == l_543) <= p_19.f4), ((safe_mod_func_uint8_t_u_u((((*g_63) = (safe_sub_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((p_18 = (((*g_148) = ((((safe_mul_func_uint16_t_u_u((g_338 = (+(0x08 < (((*g_113) = (safe_add_func_int8_t_s_s(0x30, (~(((safe_mod_func_uint32_t_u_u(((((*g_29) <= 1) , g_558) == &g_559), (*l_543))) == (*l_543)) , l_560))))) , p_19.f6)))), 0x5BE1)) <= 0x1102) , g_356.f5) > 0x0849)) != p_19.f8)), 2U)), p_19.f4))) <= (****g_429)), 0xEF)) || 0xE7EB)))), 4U)), 1))))) > 0x5BA1) && (*g_113)) , 0x7594), g_91.f5)) , (void*)0) != (void*)0), (*l_543))) , 0x9D93F26B) == p_19.f0))))
    {
        (*****g_432) = (*g_63);
        (*g_63) = (**g_431);
    }
    else
    {
        struct S0 *l_573 = &g_28;
        int32_t l_581 = (-4);
        int32_t l_582 = 2;
        int16_t *l_589 = &g_356.f9;
        int32_t *l_605 = (void*)0;
        uint16_t ***l_608 = &g_607;
        const struct S1 **l_610 = &l_609;
        const struct S1 *l_611 = &g_612;
        for (g_28.f3 = 0; (g_28.f3 == 19); g_28.f3++)
        {
            const struct S1 l_572 = {0xC192ABF6,4,249U,0x94DB26A7,5,-1,0x01FB9927,0xE46A7C77,-7,-7};
            int32_t l_579 = 0xB571F5CE;
            if ((*l_543))
            {
                struct S0 *l_574 = &g_28;
                int16_t *l_580 = &g_356.f9;
                int16_t *l_583 = &g_486;
                (*****g_428) = (safe_lshift_func_int16_t_s_u(((((*l_583) = ((safe_mod_func_int32_t_s_s(((l_581 = (safe_add_func_uint16_t_u_u(((0 ^ p_19.f8) || (((safe_rshift_func_uint16_t_u_s(65534U, 1)) , ((((((((*g_482) = (l_572 , l_573)) != l_574) || (4294967295U & (-3))) >= (safe_add_func_uint16_t_u_u((((((((*l_580) = ((l_579 = (safe_mod_func_uint16_t_u_u(g_48.f5, g_28.f2))) == p_19.f5)) || l_572.f8) == (-1)) < p_19.f9) && (*g_29)) != (*g_113)), g_48.f9))) & 0U) < 4U) , (*l_543))) != l_572.f8)), 5))) | l_582), 0x55AAE28E)) >= p_19.f7)) & l_572.f3) | l_582), 1));
            }
            else
            {
                if (p_19.f0)
                    break;
                (*g_29) = (****g_429);
            }
        }
        if ((((*l_589) = (~(((((-1) != ((safe_mod_func_int8_t_s_s((g_91.f7 & 0xE431), (~((*l_543) | (*g_113))))) || ((*g_63) , (l_588 == (void*)0)))) >= (&g_482 != &g_480)) , p_19) , p_19.f1))) , l_590))
        {
            uint32_t ***l_597 = &g_112;
            uint32_t ****l_596 = &l_597;
            uint32_t *****l_595 = &l_596;
            const struct S0 * const ****l_602 = &g_598;
            (*l_595) = ((safe_add_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(((*l_589) = 0x43CF), 13)), (*l_543))) , (void*)0);
            (*l_602) = g_598;
        }
        else
        {
            (**g_431) = (l_582 = (safe_lshift_func_int8_t_s_s((l_605 != (void*)0), 5)));
        }
        l_502 = (l_608 = g_606);
        l_611 = ((*l_610) = l_609);
    }
    return (***g_430);
}
static uint32_t func_26(struct S0 p_27)
{
    int32_t **l_31 = &g_29;
    uint32_t *l_60 = (void*)0;
    uint32_t *l_61 = &g_48.f6;
    int32_t *l_62 = &g_48.f0;
    int32_t **l_388 = &g_63;
    int32_t **l_390 = &l_62;
    int32_t ****l_427 = (void*)0;
    int32_t *****l_426 = &l_427;
    return (*g_113);
}
static int32_t * func_32(const int16_t p_33)
{
    int32_t *l_389 = &g_30;
    (*g_63) = 0x5C4462B6;
    return l_389;
}
static int32_t * func_35(uint16_t p_36)
{
    struct S1 ** const l_239 = (void*)0;
    int32_t *l_247 = &g_137;
    uint32_t ***l_251 = &g_112;
    int8_t l_361 = 5;
    uint16_t *l_384 = &g_338;
    uint16_t ** const l_383 = &l_384;
    if (((void*)0 == l_239))
    {
        int32_t *l_246 = &g_139;
        int32_t **l_248 = &l_246;
        uint32_t ** const *l_252 = &g_112;
        uint32_t ***l_360 = &g_112;
        for (g_193 = (-6); (g_193 <= 2); g_193 = safe_add_func_int8_t_s_s(g_193, 6))
        {
            int32_t **l_242 = (void*)0;
            int32_t **l_243 = &g_63;
            int32_t *l_245 = (void*)0;
            int32_t **l_244 = &l_245;
            (*l_244) = ((*l_243) = ((p_36 >= 0x62AE1A41) , &g_139));
            (*l_243) = l_246;
        }
        l_247 = l_247;
        (*l_248) = l_247;
        for (g_48.f4 = (-22); (g_48.f4 >= (-2)); g_48.f4 = safe_add_func_uint8_t_u_u(g_48.f4, 6))
        {
            int32_t *l_254 = &g_28.f3;
            int32_t **l_253 = &l_254;
            int32_t l_263 = 0xFE77FC21;
            int32_t *l_267 = &g_30;
            uint32_t ***l_288 = &g_112;
            int32_t l_339 = (-1);
            struct S1 *l_355 = &g_356;
            struct S0 *l_373 = &g_28;
            if (((((p_36 , l_251) == l_252) || (((((*l_253) = g_63) == (void*)0) != (g_48.f9 >= (safe_rshift_func_uint16_t_u_s((g_264 = (safe_mul_func_int16_t_s_s((((**g_112) = (((void*)0 == g_134) & (safe_lshift_func_uint8_t_u_s(((safe_mul_func_uint16_t_u_u((*l_247), p_36)) & (*g_148)), 7)))) < l_263), g_213))), 9)))) != g_64)) != (*l_246)))
            {
                return &g_137;
            }
            else
            {
                int16_t l_295 = 0x7DA6;
                int32_t * const *l_342 = &l_267;
                uint8_t *l_347 = &g_213;
                uint16_t *l_352 = &g_338;
                uint8_t *l_353 = &g_48.f2;
                struct S1 *l_354 = &g_48;
                for (l_263 = 0; (l_263 == 24); l_263 = safe_add_func_uint8_t_u_u(l_263, 3))
                {
                    int32_t *l_268 = &g_48.f0;
                    int32_t l_311 = 0x0310DE8F;
                    uint16_t *l_337 = &g_338;
                    uint8_t *l_340 = (void*)0;
                    uint8_t *l_341 = &g_48.f2;
                }
                (*l_267) = (g_28 , (p_36 & ((p_36 , ((((((((void*)0 != l_342) , ((g_91 , ((**l_248) = ((safe_sub_func_uint8_t_u_u(((*l_353) = ((((safe_mul_func_int8_t_s_s(1, ((*l_347) = 251U))) || (safe_mul_func_int16_t_s_s((safe_add_func_uint16_t_u_u(((*l_352) = (&g_112 != (void*)0)), g_91.f1)), 0x595D))) >= (**l_248)) & (*l_246))), (*g_148))) <= 0xA1813222))) && (*l_267))) != 0x7E574C6D) && p_36) <= g_91.f0) | g_91.f4) != (-1))) , (*l_267))));
                l_355 = l_354;
            }
            if ((safe_sub_func_uint8_t_u_u(((!((((*l_254) = 6) , ((l_360 = l_288) != &g_112)) | (l_361 <= p_36))) > (**l_248)), (safe_mod_func_uint32_t_u_u((*g_113), ((safe_mul_func_uint16_t_u_u(65535U, ((safe_mul_func_int16_t_s_s((safe_mod_func_int8_t_s_s(((*g_148) = (((*g_112) == (void*)0) , (*g_148))), p_36)), 1)) >= 0x1521))) ^ 0xDF))))))
            {
                struct S0 *l_371 = &g_28;
                struct S0 **l_370 = &l_371;
                int32_t *l_372 = &g_356.f0;
                (*l_370) = &g_28;
                (*l_248) = &l_263;
                return l_372;
            }
            else
            {
                (*l_248) = (*l_248);
                (*l_246) = ((l_373 == &g_28) , (*g_63));
            }
        }
    }
    else
    {
        int32_t *l_378 = &g_356.f0;
        const struct S0 l_385 = {0,0x46CF623B,1U,0xF7803BE8,0x8155B06E};
        uint16_t **l_386 = (void*)0;
        uint16_t ***l_387 = &l_386;
        (*l_247) = (*l_247);
        for (l_361 = 0; (l_361 != 0); l_361 = safe_add_func_int8_t_s_s(l_361, 7))
        {
            for (g_48.f9 = (-4); (g_48.f9 == 4); g_48.f9 = safe_add_func_int8_t_s_s(g_48.f9, 8))
            {
                (*g_63) = 0xCA2613CC;
                l_247 = l_378;
            }
        }
        (*l_387) = ((((safe_sub_func_int16_t_s_s((l_247 == (((safe_rshift_func_uint16_t_u_s((*l_378), ((*l_247) < p_36))) == (p_36 && (l_383 != (void*)0))) , l_247)), (((l_385 , g_48.f9) | (*l_247)) && (*l_378)))) , 0xDD) == p_36) , l_386);
    }
    return l_247;
}
static uint8_t func_39(int32_t p_40, int32_t ** p_41, int32_t * p_42, uint32_t p_43, int32_t * const * p_44)
{
    uint32_t l_73 = 0xD42BE3C6;
    struct S0 l_127 = {7,0x7AAA56D4,249U,-1,4294967295U};
    struct S1 *l_136 = &g_48;
    struct S1 **l_135 = &l_136;
    int8_t * const l_149 = (void*)0;
    int32_t l_150 = 0x3A0D7201;
    const uint32_t l_157 = 1U;
    int32_t **l_188 = &g_63;
    int32_t ***l_187 = &l_188;
    const uint16_t l_191 = 65535U;
    for (g_48.f6 = (-18); (g_48.f6 == 52); g_48.f6++)
    {
        int32_t l_82 = 2;
        int8_t *l_83 = &g_48.f5;
        int32_t *l_84 = &g_48.f4;
        uint32_t **l_115 = &g_113;
        int32_t **l_132 = &g_63;
        int32_t ***l_131 = &l_132;
        struct S0 l_133 = {0x74961716,0x7F30D379,255U,-1,1U};
        int32_t *l_138 = &g_139;
        (*g_63) = (safe_mul_func_uint16_t_u_u(((safe_add_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u(l_73, 11)), (l_73 <= (safe_rshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_s(1, 5)), 4)), 13))))) < (((((*l_84) = ((safe_sub_func_int8_t_s_s(l_73, ((*l_83) = l_82))) == l_82)) , p_43) && 0x4B) ^ (safe_rshift_func_int16_t_s_u(g_28.f0, l_73)))), g_48.f8));
        for (g_30 = 0; (g_30 >= (-1)); --g_30)
        {
            const struct S1 *l_90 = &g_91;
            const struct S1 **l_89 = &l_90;
            const struct S1 *l_93 = &g_91;
            const struct S1 **l_92 = &l_93;
            uint8_t *l_100 = &g_48.f2;
            const int32_t l_103 = (-1);
            uint32_t *l_105 = &l_73;
            uint32_t **l_104 = &l_105;
            uint32_t ***l_114 = &g_112;
            uint32_t ***l_116 = &l_115;
            (*l_92) = ((*l_89) = &g_48);
            (*l_116) = ((safe_lshift_func_int16_t_s_s((p_40 , (safe_rshift_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_s(((*l_100) = 0xFD), 1)) && (safe_lshift_func_uint16_t_u_u(((((l_103 , l_104) == ((*l_114) = (((((safe_lshift_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(g_91.f9, ((void*)0 == &l_82))), (safe_rshift_func_uint16_t_u_s(p_43, 6)))) != (l_73 < p_43)) > p_43) < 2) , g_112))) , g_48.f6) , 0xA910), 1))), 10))), l_103)) , l_115);
        }
        (*l_138) = (g_137 = (g_30 = ((**p_41) = (((safe_mul_func_int16_t_s_s((safe_add_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_u(((((((p_40 && (safe_add_func_uint16_t_u_u(1U, (((*p_42) = 0xB997E345) > (**g_112))))) > (safe_mod_func_int8_t_s_s((l_127 , ((((+l_82) < (((safe_sub_func_uint16_t_u_u(((((*l_131) = &p_42) != &p_42) , ((l_133 , l_127) , l_127.f1)), g_28.f0)) == p_40) , l_127.f0)) , g_134) == l_135)), g_48.f4))) | 0xC0) , 8U) , p_43) > p_40), g_137)) & 255U), g_91.f0)), 0xFF13)) || g_2) , 0xEEC55A7B))));
    }
    if ((safe_mod_func_uint8_t_u_u((!(safe_sub_func_int32_t_s_s((0x6519 >= (safe_rshift_func_uint16_t_u_s(((l_150 = ((*g_63) & (safe_unary_minus_func_uint16_t_u(((g_148 == ((l_149 == g_148) , g_148)) ^ l_127.f1))))) , p_43), (+p_40)))), (-1)))), p_43)))
    {
        int32_t l_154 = 0x661A1834;
        (*g_63) = (safe_add_func_uint8_t_u_u(0xA1, (l_154 <= (0x5583E1B1 ^ ((p_43 > (safe_mul_func_uint16_t_u_u(l_157, ((safe_rshift_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((**p_41), (safe_mod_func_uint16_t_u_u((safe_unary_minus_func_uint16_t_u(l_127.f1)), p_43)))), 14)) | ((safe_sub_func_uint16_t_u_u(((safe_mod_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((*g_148), 0)), l_154)) | 0x06), g_91.f3)) , 0x78ADDDDE))))) == 65535U)))));
    }
    else
    {
        struct S1 * const *l_201 = &l_136;
        int32_t l_214 = 0xB190C615;
        int32_t ****l_216 = &l_187;
        int32_t ***** const l_215 = &l_216;
        int32_t *****l_217 = &l_216;
        int16_t *l_226 = &g_48.f9;
        uint8_t *l_236 = (void*)0;
        uint8_t *l_237 = (void*)0;
        uint8_t *l_238 = &g_213;
        for (g_48.f3 = 14; (g_48.f3 == 21); g_48.f3 = safe_add_func_uint16_t_u_u(g_48.f3, 4))
        {
            return p_40;
        }
        for (g_64 = 0; (g_64 >= 7); g_64 = safe_add_func_int8_t_s_s(g_64, 6))
        {
            int32_t **l_186 = &g_63;
            int32_t ***l_185 = &l_186;
            int16_t *l_189 = (void*)0;
            int16_t *l_190 = &g_48.f9;
            int16_t *l_192 = &g_193;
            uint32_t l_211 = 0x77DDD3BA;
            if ((safe_mul_func_int16_t_s_s((~0x02422DCD), ((*l_192) = (3U <= (safe_mul_func_int8_t_s_s(((((**p_41) = ((&p_41 != g_180) && ((((safe_lshift_func_uint16_t_u_u(l_157, 11)) ^ (((*l_190) = (((0x10 < ((safe_add_func_uint32_t_u_u((p_40 | p_40), (l_185 != l_187))) < g_48.f3)) != p_43) ^ (*g_148))) < 65534U)) > (*g_63)) & 2))) != (*g_63)) == (*g_63)), l_191)))))))
            {
                int32_t ****l_194 = &l_185;
                uint8_t *l_210 = &g_48.f2;
                uint8_t *l_212 = &g_213;
                l_194 = &l_187;
                (**p_41) = (*p_42);
                (**p_41) = ((safe_sub_func_uint16_t_u_u((((*l_212) = (safe_sub_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(p_40, (0x2696941D && (l_150 = ((l_201 != (((safe_sub_func_uint32_t_u_u(((((**g_112) = p_43) , (*g_113)) == (((((safe_add_func_int16_t_s_s(g_2, 8)) , ((*l_210) = (safe_lshift_func_uint8_t_u_s((g_139 <= ((****l_194) <= 0x7EDD3F16)), (*g_148))))) & 0xCA) < 0x44) < (*g_63))), (***l_187))) , l_211) , (void*)0)) ^ 0))))), 8))) <= p_40), l_214)) ^ p_43);
                l_217 = l_215;
            }
            else
            {
                (****l_215) = (*l_188);
            }
            for (l_150 = 7; (l_150 != (-5)); l_150 = safe_sub_func_uint8_t_u_u(l_150, 4))
            {
                (***l_217) = (***l_217);
            }
            (**l_187) = (**l_187);
        }
        (**p_44) = (safe_mul_func_int16_t_s_s(((g_91.f9 & g_91.f6) | (!((*l_238) = ((&p_42 != &p_42) & (safe_add_func_int32_t_s_s(((((*l_226) = (~g_91.f3)) & (((safe_sub_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((((safe_rshift_func_uint16_t_u_u((+(0x00 <= (safe_mul_func_uint16_t_u_u(0xD08C, ((g_48.f8 , (((((1U < p_40) > p_40) != (****l_216)) , 65535U) < g_28.f2)) != g_48.f8))))), p_43)) > g_91.f2) != (****l_216)), 3)), p_40)) , 0x4394) >= (-7))) >= (****l_216)), (*p_42))))))), g_91.f7));
    }
    return (***l_187);
}
static uint32_t func_45(uint32_t p_46)
{
    struct S1 *l_47 = &g_48;
    struct S1 **l_49 = &l_47;
    int32_t *l_50 = &g_30;
    int32_t *l_51 = (void*)0;
    int32_t *l_52 = &g_48.f0;
    int32_t **l_53 = &l_51;
    (*l_49) = l_47;
    (*l_52) = ((*l_50) = (-7));
    (*l_53) = (void*)0;
    return p_46;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_2;
    csmith_sink_ = g_28.f0;
    csmith_sink_ = g_28.f1;
    csmith_sink_ = g_28.f2;
    csmith_sink_ = g_28.f3;
    csmith_sink_ = g_28.f4;
    csmith_sink_ = g_30;
    csmith_sink_ = g_48.f0;
    csmith_sink_ = g_48.f1;
    csmith_sink_ = g_48.f2;
    csmith_sink_ = g_48.f3;
    csmith_sink_ = g_48.f4;
    csmith_sink_ = g_48.f5;
    csmith_sink_ = g_48.f6;
    csmith_sink_ = g_48.f7;
    csmith_sink_ = g_48.f8;
    csmith_sink_ = g_48.f9;
    csmith_sink_ = g_64;
    csmith_sink_ = g_91.f0;
    csmith_sink_ = g_91.f1;
    csmith_sink_ = g_91.f2;
    csmith_sink_ = g_91.f3;
    csmith_sink_ = g_91.f4;
    csmith_sink_ = g_91.f5;
    csmith_sink_ = g_91.f6;
    csmith_sink_ = g_91.f7;
    csmith_sink_ = g_91.f8;
    csmith_sink_ = g_91.f9;
    csmith_sink_ = g_137;
    csmith_sink_ = g_139;
    csmith_sink_ = g_193;
    csmith_sink_ = g_213;
    csmith_sink_ = g_264;
    csmith_sink_ = g_290;
    csmith_sink_ = g_338;
    csmith_sink_ = g_356.f0;
    csmith_sink_ = g_356.f1;
    csmith_sink_ = g_356.f2;
    csmith_sink_ = g_356.f3;
    csmith_sink_ = g_356.f4;
    csmith_sink_ = g_356.f5;
    csmith_sink_ = g_356.f6;
    csmith_sink_ = g_356.f7;
    csmith_sink_ = g_356.f8;
    csmith_sink_ = g_356.f9;
    csmith_sink_ = g_486;
    csmith_sink_ = g_612.f0;
    csmith_sink_ = g_612.f1;
    csmith_sink_ = g_612.f2;
    csmith_sink_ = g_612.f3;
    csmith_sink_ = g_612.f4;
    csmith_sink_ = g_612.f5;
    csmith_sink_ = g_612.f6;
    csmith_sink_ = g_612.f7;
    csmith_sink_ = g_612.f8;
    csmith_sink_ = g_612.f9;
    csmith_sink_ = g_740.f0;
    csmith_sink_ = g_740.f1;
    csmith_sink_ = g_740.f2;
    csmith_sink_ = g_740.f3;
    csmith_sink_ = g_740.f4;
    csmith_sink_ = g_740.f5;
    csmith_sink_ = g_740.f6;
    csmith_sink_ = g_740.f7;
    csmith_sink_ = g_740.f8;
    csmith_sink_ = g_740.f9;
    csmith_sink_ = g_796;
    csmith_sink_ = g_799.f0;
    csmith_sink_ = g_799.f1;
    csmith_sink_ = g_799.f2;
    csmith_sink_ = g_799.f3;
    csmith_sink_ = g_799.f4;
    csmith_sink_ = g_885;
    csmith_sink_ = g_904.f0;
    csmith_sink_ = g_904.f1;
    csmith_sink_ = g_904.f2;
    csmith_sink_ = g_904.f3;
    csmith_sink_ = g_904.f4;
    csmith_sink_ = g_906.f0;
    csmith_sink_ = g_906.f1;
    csmith_sink_ = g_906.f2;
    csmith_sink_ = g_906.f3;
    csmith_sink_ = g_906.f4;
    csmith_sink_ = g_1208;
    csmith_sink_ = g_1216.f0;
    csmith_sink_ = g_1216.f1;
    csmith_sink_ = g_1216.f2;
    csmith_sink_ = g_1216.f3;
    csmith_sink_ = g_1216.f4;
    csmith_sink_ = g_1413;
    csmith_sink_ = g_1668;
    csmith_sink_ = g_1671;
    platform_main_end(0,0);
    return 0;
}
