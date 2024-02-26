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

volatile uint64_t csmith_sink_ = 0;
static long __undefined;
static int32_t g_10 = 0L;
static int16_t g_51 = (-10L);
static uint32_t g_52 = 0UL;
static int32_t g_57 = 8L;
static int16_t g_58 = 0L;
static uint64_t g_59 = 18446744073709551615UL;
static int16_t g_148 = 0xA49CL;
static uint8_t g_152 = 0x92L;
static uint8_t g_174 = 0x7DL;
static int32_t g_217 = 0x29FBB944L;
static uint32_t g_244 = 1UL;
static uint32_t g_430 = 0x97FF8A4DL;
static uint64_t g_473 = 0xF07CFA1AE7860303LL;
static uint64_t g_612 = 0x9426AAB50528DDE3LL;
static int32_t g_703 = 3L;
static int32_t g_714 = 0x661F5DA5L;
static int32_t g_715 = 0x722D6235L;
static int32_t g_716 = 3L;
static uint32_t g_717 = 0x0F8C35CBL;
static uint8_t g_759 = 248UL;
static uint8_t g_807 = 0x82L;
inline static int8_t func_1(void);
static int16_t func_8(uint32_t p_9);
static uint8_t func_13(int32_t p_14, int8_t p_15, const int32_t p_16, uint32_t p_17);
inline static int64_t func_18(int64_t p_19, int64_t p_20, uint64_t p_21);
inline static int16_t func_23(int64_t p_24, int8_t p_25, int64_t p_26, int32_t p_27, uint64_t p_28);
static int64_t func_42(uint32_t p_43, int32_t p_44, int32_t p_45, uint32_t p_46, int32_t p_47);
inline static int8_t func_72(uint32_t p_73, uint32_t p_74, uint32_t p_75, int16_t p_76, uint64_t p_77);
static uint32_t func_78(uint64_t p_79);
inline static const int32_t func_83(uint8_t p_84, int8_t p_85, int64_t p_86);
static int64_t func_91(uint32_t p_92, int32_t p_93, uint32_t p_94);
inline static int8_t func_1(void)
{
    int64_t l_967 = (-7L);
    uint16_t l_978 = 0xDD4CL;
    if (((safe_mul_func_int16_t_s_s((safe_mul_func_int16_t_s_s((safe_mod_func_int16_t_s_s(func_8(g_10), 0x6ED2L)), (safe_mul_func_uint8_t_u_u(g_807, ((g_807 != (+0L)) != 0x427FL))))), ((g_716 & (!(safe_lshift_func_uint16_t_u_s((+l_967), 9)))) == g_714))) <= 2L))
    {
        uint32_t l_977 = 0UL;
        g_57 = ((safe_add_func_int16_t_s_s((1L != (safe_add_func_uint32_t_u_u((0x0565D68CL != (((1UL > (((!(7UL ^ 0xCA4A355FL)) >= ((g_152 > ((safe_rshift_func_int8_t_s_s((safe_mod_func_uint32_t_u_u(((g_473 && (l_977 > 0x865F2FBFL)) & 253UL), g_759)), 4)) & 6UL)) >= g_10)) ^ 0xC8L)) < l_967) > 2UL)), 0L))), l_978)) || g_51);
    }
    else
    {
        return l_978;
    }
    return g_714;
}
static int16_t func_8(uint32_t p_9)
{
    uint16_t l_22 = 0x934BL;
    int32_t l_959 = (-4L);
    l_959 &= ((safe_add_func_int16_t_s_s(g_10, (g_10 < (((func_13(((func_18(g_10, l_22, g_10) & (g_10 <= (func_23(p_9, (func_18((l_22 > g_10), p_9, l_22) & p_9), p_9, p_9, g_10) < g_10))) || p_9), p_9, g_51, g_148) | g_612) && (-10L)) || p_9)))) & (-1L));
    return g_715;
}
static uint8_t func_13(int32_t p_14, int8_t p_15, const int32_t p_16, uint32_t p_17)
{
    int32_t l_422 = 1L;
    int32_t l_423 = 1L;
    int16_t l_424 = 9L;
    int32_t l_427 = 1L;
    int8_t l_428 = 0x01L;
    int8_t l_471 = (-2L);
    uint16_t l_482 = 65533UL;
    int64_t l_550 = 0xB277425FA9EE565BLL;
    int32_t l_667 = (-1L);
    int8_t l_730 = 1L;
    int32_t l_743 = 0x75D1EF86L;
    uint64_t l_744 = 1UL;
    int32_t l_781 = 7L;
    uint32_t l_855 = 0xD92BEB25L;
    uint32_t l_907 = 4294967295UL;
    uint32_t l_952 = 0UL;
    const uint32_t l_953 = 0x9AC81547L;
    if (p_16)
    {
        int16_t l_425 = (-10L);
        int32_t l_426 = 0L;
        for (p_17 = 0; (p_17 <= 15); p_17 = safe_add_func_int8_t_s_s(p_17, 9))
        {
            int32_t l_429 = (-8L);
            g_430++;
            l_427 = p_15;
            l_429 = (!p_14);
        }
    }
    else
    {
lbl_832:
        g_57 &= (safe_mul_func_uint16_t_u_u(g_52, 0xE902L));
        for (g_57 = 8; (g_57 != (-8)); g_57 = safe_sub_func_uint32_t_u_u(g_57, 2))
        {
            return p_14;
        }
    }
    if (((safe_rshift_func_int16_t_s_s((safe_unary_minus_func_int8_t_s(l_427)), 7)) & (p_16 || 0x284AL)))
    {
        uint8_t l_453 = 255UL;
        int32_t l_472 = (-1L);
        if ((safe_add_func_int32_t_s_s((((safe_add_func_int16_t_s_s((safe_mul_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(((0xB3C5L & ((safe_rshift_func_int8_t_s_s((0xBBL ^ ((g_52 != (((((l_453 == ((g_59 > 0x6F89L) >= (safe_rshift_func_uint16_t_u_s((safe_sub_func_uint64_t_u_u((!(l_423 <= (g_58 ^ (safe_mod_func_uint64_t_u_u((safe_mod_func_int16_t_s_s(((safe_sub_func_int32_t_s_s(((safe_add_func_uint64_t_u_u((safe_sub_func_int64_t_s_s((safe_lshift_func_uint16_t_u_u(0x279CL, 0)), 1L)), l_453)) < p_14), g_217)) > l_423), l_453)), (-1L)))))), p_16)), p_16)))) > l_453) == g_59) && l_428) < l_471)) & p_15)), g_217)) | p_17)) < l_422), 0)), (-1L))), g_152)) == l_424) < g_10), p_16)))
        {
            g_473--;
        }
        else
        {
            uint32_t l_488 = 1UL;
            int32_t l_505 = (-8L);
            for (g_52 = 3; (g_52 != 18); g_52++)
            {
                uint8_t l_504 = 254UL;
                g_57 = (safe_mod_func_int8_t_s_s(0L, (safe_sub_func_uint16_t_u_u(l_482, (+(p_16 <= g_174))))));
                l_505 = (g_473 == ((safe_add_func_int64_t_s_s((safe_mod_func_int8_t_s_s(l_488, ((safe_add_func_int16_t_s_s((0xEF98C274L ^ (safe_lshift_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_s(p_17, 12)) >= ((safe_mod_func_int64_t_s_s((safe_lshift_func_int8_t_s_u(g_174, ((g_152 | (((~((safe_lshift_func_uint8_t_u_s((safe_mul_func_uint8_t_u_u(p_16, l_504)), 4)) ^ (0x6E1BA1B34EAD6426LL <= l_453))) & 65535UL) == p_16)) ^ l_423))), g_58)) || g_10)), g_51))), p_14)) && 0x977FC4C1116C565ALL))), g_51)) < 0x7565L));
                if (p_17)
                    continue;
            }
        }
        g_57 = (0x28L <= ((safe_mul_func_uint8_t_u_u(l_453, p_15)) < (!(((safe_add_func_uint32_t_u_u(0x379A0499L, ((((safe_sub_func_uint32_t_u_u(((safe_sub_func_uint64_t_u_u((((safe_lshift_func_int8_t_s_u(0xA0L, (safe_mul_func_int16_t_s_s(0xF551L, (safe_lshift_func_uint8_t_u_s((safe_rshift_func_uint16_t_u_u(((p_16 <= (((safe_mul_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(p_16, (safe_lshift_func_int16_t_s_u((safe_mul_func_uint16_t_u_u(g_152, p_15)), 2)))), 0x2083L)) >= l_422) == g_58)) >= l_472), 15)), l_472)))))) | 0xED98FD706E587C2FLL) > 65531UL), l_482)) || l_482), p_17)) >= l_472) <= 0xE914E7A1AFC6B86DLL) || 0L))) > l_482) | g_52))));
    }
    else
    {
        uint8_t l_543 = 0xD7L;
        int32_t l_551 = 0x0966FC5EL;
        int16_t l_614 = 1L;
        uint8_t l_649 = 255UL;
        l_551 = ((((safe_sub_func_uint16_t_u_u(((safe_sub_func_uint16_t_u_u((((((safe_lshift_func_uint16_t_u_u(p_15, 13)) < (safe_lshift_func_uint16_t_u_s((((((p_15 <= p_16) < ((p_17 ^ (safe_sub_func_int8_t_s_s((safe_add_func_int64_t_s_s(g_10, (l_543 > (safe_mod_func_int8_t_s_s((g_244 <= (((g_473 > ((safe_add_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(g_59, g_152)), g_52)) >= l_428)) ^ g_430) | 0xCCBFCE7E004E4139LL)), p_14))))), p_15))) > l_423)) ^ 1UL) | g_10) | g_52), 13))) & g_473) ^ l_543) != l_550), l_543)) > 0xE8EDL), g_148)) && g_174) ^ l_424) > l_424);
        if (p_16)
        {
            int64_t l_565 = 0x0E41F59CEDBF0104LL;
            uint8_t l_648 = 0xD3L;
            g_57 = ((~p_17) >= ((safe_mul_func_int8_t_s_s((((((safe_mul_func_int16_t_s_s(((safe_sub_func_int16_t_s_s(((((7UL != (safe_lshift_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(255UL, (-2L))), g_148))) == l_551) >= (((((safe_rshift_func_uint8_t_u_s(0x9FL, l_565)) | 0x41L) == l_482) == l_423) | 0xE12FE5C71616FBDBLL)) > p_14), l_427)) | 0x903D6566E9846EECLL), p_14)) & 8UL) & p_14) || 4294967292UL) ^ p_15), p_16)) != g_10));
            if (((safe_mod_func_uint64_t_u_u((safe_sub_func_int16_t_s_s(0xE8EFL, ((safe_mul_func_uint16_t_u_u(0UL, p_17)) > ((((((((l_565 < (safe_add_func_uint64_t_u_u((safe_sub_func_int8_t_s_s(((((g_174 > (safe_sub_func_int32_t_s_s((safe_add_func_int16_t_s_s(g_148, ((safe_lshift_func_int8_t_s_s(((safe_mul_func_int8_t_s_s((p_14 <= ((safe_lshift_func_int16_t_s_u((safe_mod_func_int16_t_s_s(g_473, 0xBA4EL)), 12)) <= l_565)), l_565)) < p_15), 4)) && l_565))), g_217))) == p_17) & p_16) | 0x0C88L), 0x14L)), g_58))) > 0x24L) && g_174) && 0L) > 0x6FDAL) <= p_15) > 0L) != 3UL)))), p_16)) <= g_10))
            {
                uint8_t l_613 = 0x35L;
                int32_t l_615 = 0xF2D3BEE1L;
                int16_t l_645 = 0xEFF3L;
                uint32_t l_646 = 0x49A58F88L;
                int32_t l_688 = 0x137E70B8L;
                l_615 = ((safe_lshift_func_uint8_t_u_s((((p_16 > ((safe_mul_func_int8_t_s_s(0x4CL, (g_244 & ((safe_rshift_func_uint16_t_u_s(((((((safe_sub_func_int32_t_s_s((p_16 > ((safe_lshift_func_int16_t_s_s((g_59 & ((safe_mul_func_int16_t_s_s((-1L), (safe_mod_func_uint64_t_u_u((l_543 >= 2L), (safe_add_func_int32_t_s_s(((safe_mod_func_int8_t_s_s((((((safe_add_func_int64_t_s_s((safe_add_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s(((g_612 && p_14) && l_565), l_613)), l_614)), l_613)) | 0x7EFAC047L) && p_16) || g_612) == 0xEBDD09BCL), 1L)) | g_612), l_423)))))) <= g_612)), 5)) <= p_16)), 0x1DB9A225L)) & l_614) != 0x92E31E6C77A69A34LL) != l_614) | 0xA5990F09F6C475C6LL) ^ 1UL), l_565)) >= 0x0A2042FC192ABF6ELL)))) ^ p_17)) | 0x6AL) >= g_152), g_58)) ^ p_17);
                for (g_51 = 9; (g_51 != 12); g_51 = safe_add_func_int16_t_s_s(g_51, 3))
                {
                    int8_t l_644 = 0x15L;
                    for (l_615 = (-18); (l_615 <= (-21)); --l_615)
                    {
                        int32_t l_647 = 0xE43CFA8DL;
                        g_57 = g_51;
                        l_648 = (safe_unary_minus_func_uint16_t_u(((((0x723A0C79L != ((safe_rshift_func_int8_t_s_u(((-1L) < (safe_sub_func_uint64_t_u_u(((safe_lshift_func_int16_t_s_u(((0UL || (((safe_add_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(l_615, (0xFB842AC23A9A3610LL != (((safe_sub_func_uint8_t_u_u(((0xA78C10EFL == (((((safe_mul_func_int16_t_s_s((safe_add_func_uint16_t_u_u((!g_217), ((l_644 > (((((0x65060BCA81243464LL != l_613) | g_473) || 0xA427L) <= l_645) && 0x6E82L)) > 6UL))), 0x3A28L)) == 250UL) & g_217) > 0x5FD41A6DL) < l_646)) >= p_15), g_430)) >= l_644) < g_244)))), l_647)) <= 0L) != 18446744073709551615UL)) != (-9L)), p_16)) == p_14), 1L))), l_645)) < p_16)) <= p_15) >= p_14) | g_59)));
                    }
                    l_649 = 0L;
                    p_14 = p_14;
                }
                for (g_244 = (-13); (g_244 > 2); g_244 = safe_add_func_uint8_t_u_u(g_244, 1))
                {
                    const uint32_t l_676 = 0x0DDB63E3L;
                    g_57 = (0xAD403DDED29C47D6LL == (((((~((safe_sub_func_int16_t_s_s((g_217 || (+(p_16 >= (safe_mul_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_s(0xF92EL, l_645)) >= g_52), g_612))))), ((~((safe_add_func_uint64_t_u_u(l_648, ((safe_lshift_func_uint8_t_u_s(251UL, p_14)) ^ l_613))) > g_52)) >= g_473))) & p_14)) < p_17) <= p_16) | g_59) <= 0x5BFBL));
                    if ((((g_152 == 0xECC87DAEB41E3905LL) != ((p_16 & g_10) < l_422)) && (p_16 || ((safe_mod_func_uint16_t_u_u(((0x8B0B0584A9D03E43LL & ((l_667 | (g_152 ^ l_543)) <= p_17)) > 8L), l_543)) >= 0L))))
                    {
                        g_57 = (safe_rshift_func_int8_t_s_u((0x2AL | (safe_lshift_func_uint16_t_u_s(((safe_add_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s((l_649 || l_676), ((-7L) | p_15))) != (safe_rshift_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_s((safe_mod_func_int8_t_s_s(g_217, ((safe_mod_func_int32_t_s_s((+(((((g_148 ^ l_613) & (g_59 < g_244)) > 0UL) ^ p_17) < g_244)), 0x2A42C80EL)) & (-3L)))), l_688)) && p_15), g_612))), l_613)) & 0xD545F5720C289E62LL), 8))), 4));
                    }
                    else
                    {
                        uint16_t l_709 = 1UL;
                        g_703 |= ((((g_612 >= (safe_add_func_uint8_t_u_u(((l_676 <= (p_14 & p_16)) < (((safe_unary_minus_func_uint64_t_u((safe_rshift_func_int16_t_s_u((((-8L) < 0x89DF4B1FL) != ((((safe_add_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((1UL & (safe_unary_minus_func_int16_t_s(((p_17 != (safe_lshift_func_int8_t_s_s((safe_mul_func_int8_t_s_s(l_648, g_148)), 3))) != g_152)))), 0x83L)), p_15)) & 0x898107CF9725A535LL) | g_51) == p_15)), 0)))) >= p_14) || p_17)), g_59))) != p_15) & p_15) || g_57);
                        p_14 = ((((safe_mod_func_int16_t_s_s(0x62D0L, g_217)) ^ g_58) != l_676) >= (8L ^ ((!(l_646 < (p_14 ^ l_709))) == (safe_add_func_int8_t_s_s(g_174, p_15)))));
                    }
                    if (l_676)
                        continue;
                }
                for (l_646 = 0; (l_646 < 53); l_646++)
                {
                    uint64_t l_720 = 18446744073709551608UL;
                    if (g_148)
                        break;
                    g_717++;
                    l_422 |= l_720;
                }
            }
            else
            {
                int64_t l_729 = 0L;
                g_57 = 0xDDC43A81L;
                l_427 &= ((-7L) || (g_217 < ((safe_mul_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_s((((l_424 && ((p_14 < (p_15 && 0x1CL)) ^ ((7UL || ((l_614 || (safe_rshift_func_int16_t_s_u((safe_add_func_int16_t_s_s(((l_482 > l_471) <= g_430), 0x960AL)), 9))) && p_14)) > l_614))) || 0xC2L) & l_729), 7)) ^ l_730), l_565)) > p_16)));
                for (g_715 = 0; (g_715 < (-11)); g_715--)
                {
                    if (g_51)
                        break;
                }
                g_57 = (((safe_add_func_uint16_t_u_u((p_16 < ((p_17 <= ((((((safe_sub_func_uint64_t_u_u(((l_729 == (safe_lshift_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(g_716, ((safe_mul_func_int16_t_s_s(g_152, 0UL)) <= p_17))), 1))) > (g_57 >= (l_543 && p_14))), p_16)) && g_57) & g_174) == g_612) <= l_743) || g_430)) == g_244)), l_565)) != 1L) < g_703);
            }
            l_744++;
            p_14 = 0x27D77C0FL;
        }
        else
        {
            uint8_t l_751 = 0x65L;
            int32_t l_758 = 0x8064B3E7L;
            if ((safe_mod_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u(0x61L, l_751)) || p_15), ((safe_mod_func_int16_t_s_s((((l_667 ^ ((safe_mul_func_uint16_t_u_u(65527UL, (p_15 == g_59))) || 0x7CL)) || (p_16 >= p_17)) != (-2L)), p_16)) & g_473))))
            {
                const int64_t l_780 = 0x2E80AA86F4DE2BB9LL;
                g_759--;
                if (g_148)
                {
                    l_781 = (safe_lshift_func_int8_t_s_s((((safe_rshift_func_uint16_t_u_u(0xBCECL, (safe_rshift_func_int8_t_s_s((((3L || (safe_lshift_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u(g_152, (safe_rshift_func_int8_t_s_s(((safe_lshift_func_int8_t_s_s(l_744, (4294967289UL <= 3UL))) || (p_17 < (-1L))), ((safe_add_func_uint64_t_u_u((l_758 & l_780), 0xD29D54AD48446E02LL)) && g_217))))), l_614)) == g_57), 0))) || p_15) > l_780), g_473)))) == p_15) & p_17), 3));
                }
                else
                {
                    g_57 = (g_52 == ((0xFF84L ^ (((safe_sub_func_uint16_t_u_u(0UL, (0xCE45L > (safe_add_func_uint8_t_u_u(1UL, (safe_rshift_func_int8_t_s_u(8L, (safe_mod_func_int16_t_s_s((safe_add_func_int64_t_s_s(g_759, (safe_mod_func_uint32_t_u_u(1UL, l_780)))), g_715))))))))) & 0xC9EE2092L) & g_430)) ^ 3L));
                    g_715 = p_14;
                    g_57 |= 0xF292DE6BL;
                    l_427 &= 0xC8A5133EL;
                }
            }
            else
            {
                int32_t l_831 = (-10L);
                for (g_759 = 0; (g_759 != 44); g_759 = safe_add_func_int16_t_s_s(g_759, 2))
                {
                    uint32_t l_808 = 0x56DDEC07L;
                    int32_t l_809 = 0x655BBB00L;
                    l_809 = (safe_add_func_int32_t_s_s((safe_sub_func_int64_t_s_s(g_57, (g_473 == (safe_mod_func_uint64_t_u_u((((safe_rshift_func_uint16_t_u_s(((safe_lshift_func_uint16_t_u_s(((0UL | 0x4CL) == (+0x7AA1L)), 7)) > g_807), 1)) >= ((p_17 < (g_715 ^ (l_751 >= g_58))) >= l_808)) || p_15), 0xA9CEC29815FAFF3ELL))))), 0xC0CA3845L));
                    l_423 |= (safe_lshift_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((~((safe_sub_func_uint8_t_u_u((((safe_add_func_int16_t_s_s(((((safe_lshift_func_uint16_t_u_s((0x954AL & l_781), 1)) <= g_244) < ((safe_sub_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u(l_751, (safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((1L != l_809), 14)), (safe_sub_func_int64_t_s_s((4294967286UL >= 0xB6BC46E0L), (((l_758 == g_244) & 1L) < 0xC97CL))))))) > 1UL), l_831)) != g_703)) > 0xF6EAL), g_174)) == 0xA114L) == 1L), 255UL)) < g_244)), g_57)), l_758));
                }
                p_14 = g_10;
                if (l_751)
                    goto lbl_832;
            }
            l_551 ^= ((safe_lshift_func_int16_t_s_u((safe_add_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s((p_15 ^ (safe_sub_func_int16_t_s_s(((safe_sub_func_int16_t_s_s((safe_mul_func_int16_t_s_s(((safe_rshift_func_int16_t_s_u(p_15, 3)) && (safe_mul_func_uint8_t_u_u((0xD6L < ((g_57 ^ ((3L || (safe_mul_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_u((((p_15 != g_717) >= g_717) != ((safe_mul_func_int8_t_s_s((l_751 < p_14), g_152)) && l_471)), l_855)) == g_717), l_614))) || p_15)) <= l_614)), g_807))), 0UL)), l_649)) == 0xACL), p_17))), g_807)), l_482)), g_59)) ^ 3UL);
        }
        for (g_148 = 13; (g_148 < (-24)); --g_148)
        {
            uint8_t l_858 = 255UL;
            uint32_t l_863 = 0x55B94740L;
            uint32_t l_904 = 18446744073709551607UL;
            int8_t l_926 = 0x98L;
            if (g_217)
                break;
            if ((l_858 ^ (safe_add_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u((l_863 != (safe_lshift_func_uint16_t_u_s(((0x82L == g_430) < (1UL > (g_59 < (g_717 == ((+(0UL != (+((safe_mul_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((((-1L) < 0xAE1EL) < p_16), 6)), 0x6FL)) != g_59)))) <= p_15))))), p_16))), g_152)), (-1L)))))
            {
                int16_t l_876 = (-1L);
                l_876 |= 0xEA7A1CA5L;
            }
            else
            {
                int64_t l_886 = 0x76F87DB6F22ECC8FLL;
                int32_t l_887 = 0L;
                l_887 |= (p_14 || (((safe_rshift_func_uint8_t_u_s(0x08L, 5)) | ((0x8EL <= p_14) && 0x1313374200691853LL)) || ((p_15 < (p_16 || ((+0x40L) <= (safe_rshift_func_uint16_t_u_s((((safe_lshift_func_int8_t_s_u((((safe_sub_func_uint32_t_u_u(g_51, g_10)) & 0x6A66L) >= 5L), 5)) & l_886) >= l_858), l_886))))) | 0x400AL)));
            }
            l_904 = ((g_715 == (safe_mod_func_uint64_t_u_u(l_614, 0x4ABFF246976AE7EELL))) < (l_863 == (safe_unary_minus_func_uint32_t_u(((((((safe_rshift_func_int8_t_s_u(((1UL < (safe_unary_minus_func_int32_t_s((((!(safe_rshift_func_int16_t_s_u((safe_add_func_uint16_t_u_u(((l_428 == (+0UL)) && (safe_add_func_int32_t_s_s((safe_rshift_func_int8_t_s_s(p_15, 3)), 5UL))), g_152)), 5))) ^ g_717) >= p_14)))) ^ g_52), 1)) == l_649) >= l_427) < g_152) | g_57) && l_551)))));
            g_57 = (18446744073709551615UL == (((l_907 != (safe_sub_func_uint32_t_u_u((safe_mod_func_int64_t_s_s((+(safe_mod_func_int8_t_s_s(l_543, (safe_sub_func_uint8_t_u_u(((!((0xA08CL >= (safe_sub_func_uint16_t_u_u((p_17 & 65528UL), (safe_lshift_func_uint8_t_u_s((((6UL != ((safe_mod_func_int8_t_s_s((safe_mod_func_int64_t_s_s(p_17, 18446744073709551615UL)), 0x0BL)) == l_649)) != g_703) && 0xD35094B4BF2F429FLL), 3))))) >= p_16)) | l_926), g_217))))), l_730)), 4294967295UL))) && g_807) != g_717));
        }
    }
    if ((safe_mul_func_uint8_t_u_u((g_715 && ((p_15 < (((254UL >= ((l_427 != p_16) >= p_14)) ^ (g_430 != 1L)) >= (safe_add_func_int8_t_s_s(p_17, l_482)))) <= l_482)), p_17)))
    {
        uint32_t l_951 = 3UL;
        p_14 = (safe_lshift_func_uint8_t_u_s(p_14, (safe_sub_func_int8_t_s_s((0xA870L || (safe_mul_func_uint16_t_u_u((l_744 | (safe_add_func_int64_t_s_s(l_482, (((((safe_mul_func_uint16_t_u_u((((((safe_add_func_int8_t_s_s((((safe_rshift_func_int16_t_s_s(0x76C1L, ((safe_add_func_int8_t_s_s(((safe_lshift_func_int8_t_s_s(0x00L, 4)) == g_716), l_422)) | (safe_lshift_func_int16_t_s_s(l_951, p_17))))) <= 5L) & 0x1D2207AF5C8EECDELL), g_703)) != p_14) < p_15) || l_951) == p_14), 0xCD95L)) & l_952) == 0x89DF03D7L) && g_174) >= 0x27BBL)))), l_953))), l_951))));
    }
    else
    {
        uint32_t l_956 = 0xEE170399L;
        p_14 = (((safe_rshift_func_uint8_t_u_u(1UL, 7)) < l_956) || l_956);
        for (g_174 = 16; (g_174 > 52); ++g_174)
        {
            return p_15;
        }
    }
    return g_430;
}
inline static int64_t func_18(int64_t p_19, int64_t p_20, uint64_t p_21)
{
    return g_10;
}
inline static int16_t func_23(int64_t p_24, int8_t p_25, int64_t p_26, int32_t p_27, uint64_t p_28)
{
    uint16_t l_48 = 0xC4B7L;
    int32_t l_419 = 0x3640A0DBL;
    if (p_28)
    {
        uint64_t l_29 = 0x02268F62C4DF8E3BLL;
        l_29--;
        g_58 = ((0x4CL ^ (g_10 == (l_29 == ((safe_mul_func_uint8_t_u_u((safe_add_func_int64_t_s_s((g_10 && ((((safe_mod_func_int64_t_s_s((safe_rshift_func_uint16_t_u_u(func_18((g_10 != g_10), ((func_18((func_18(func_42((g_10 > func_18(func_18((p_25 == g_10), l_48, g_10), g_10, l_29)), p_28, p_24, l_29, l_29), p_25, g_51) == 1UL), g_51, p_28) == (-1L)) ^ 3UL), g_10), p_25)), 0xF85D55A9D45C545FLL)) && l_48) == l_48) > 0x5104E0BBE0E206F6LL)), 0x61BCF2EC28784865LL)), 0x9BL)) & 3L)))) == l_48);
    }
    else
    {
        int64_t l_62 = 1L;
        int32_t l_63 = 4L;
        g_59++;
        l_63 = l_62;
    }
    l_419 = (((g_52 == (l_48 || (safe_add_func_int16_t_s_s(0L, g_51)))) <= (safe_add_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u((l_48 >= ((safe_rshift_func_int8_t_s_u(func_72(func_78((~(!(!(((p_27 >= (l_48 >= l_48)) ^ func_83((((safe_add_func_int64_t_s_s((safe_sub_func_uint16_t_u_u(func_18(func_91(((safe_rshift_func_int16_t_s_u((((((safe_add_func_int32_t_s_s(0x16E5DCA5L, l_48)) && l_48) <= g_10) | 18446744073709551615UL) && g_59), 6)) != l_48), g_58, p_25), g_52, g_58), g_58)), 0xAADFED4114ABDC48LL)) & p_24) > 0x507BCD5AL), l_48, p_25)) > l_48))))), l_48, l_48, g_148, l_48), p_25)) && p_24)), l_48)), 0L))) ^ 0L);
    g_57 = 0x5F03459CL;
    return l_419;
}
static int64_t func_42(uint32_t p_43, int32_t p_44, int32_t p_45, uint32_t p_46, int32_t p_47)
{
    uint16_t l_56 = 0xC9AAL;
    for (p_47 = 0; (p_47 >= 24); p_47 = safe_add_func_uint8_t_u_u(p_47, 4))
    {
        p_44 = (0xDE2FD17BL >= 0xDA828C04L);
        ++g_52;
    }
    g_57 = (~((l_56 > 0x5761L) && 0L));
    return l_56;
}
inline static int8_t func_72(uint32_t p_73, uint32_t p_74, uint32_t p_75, int16_t p_76, uint64_t p_77)
{
    uint16_t l_303 = 0x0D39L;
    int32_t l_310 = 0L;
    uint32_t l_342 = 18446744073709551615UL;
    uint32_t l_418 = 0UL;
    l_310 ^= (!(~(safe_rshift_func_uint8_t_u_s((safe_sub_func_uint32_t_u_u(((0x2F4EL <= ((p_73 > (((safe_lshift_func_uint8_t_u_s((p_75 && (0xEA93L != (safe_mod_func_int64_t_s_s(l_303, (g_51 | ((((safe_sub_func_uint64_t_u_u((safe_sub_func_uint16_t_u_u((0x97L >= (safe_sub_func_uint16_t_u_u(((g_152 != l_303) <= l_303), 0x9A10L))), l_303)), 0xC84C52192DAD5565LL)) | 7UL) & l_303) | g_52)))))), 0)) == g_10) & l_303)) >= 1L)) && p_77), l_303)), l_303))));
    if (l_303)
    {
        int16_t l_313 = (-8L);
        int32_t l_337 = (-1L);
        for (g_152 = 0; (g_152 <= 35); ++g_152)
        {
            uint32_t l_314 = 18446744073709551610UL;
            g_57 = l_310;
            ++l_314;
        }
        for (p_73 = 24; (p_73 != 47); ++p_73)
        {
            int32_t l_330 = 0x6AE97821L;
            l_337 &= ((safe_rshift_func_int8_t_s_s(l_313, (safe_mod_func_int16_t_s_s((safe_unary_minus_func_int8_t_s(((((safe_add_func_int32_t_s_s((g_217 | (safe_mul_func_int16_t_s_s((safe_add_func_int32_t_s_s(l_330, (l_313 > (safe_mod_func_uint64_t_u_u((safe_lshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_u((((g_59 <= p_77) > (0x96B67929L || g_244)) > (0x249FL != g_51)), l_313)), g_148)), l_310))))), l_303))), p_75)) == g_58) > g_52) & 65532UL))), 0x4B02L)))) | g_58);
            l_310 = g_59;
            l_337 &= (((safe_add_func_int8_t_s_s(((p_77 > p_75) && (safe_add_func_uint8_t_u_u(l_342, (((g_52 >= (l_330 ^ g_58)) | (safe_sub_func_uint8_t_u_u((((safe_lshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_u((((safe_mul_func_uint16_t_u_u((7L != (safe_sub_func_uint64_t_u_u((p_75 && 0xA821AC23L), 18446744073709551615UL))), g_59)) <= g_244) >= l_313), 7)), 5)) >= g_51) == g_58), 5UL))) < p_75)))), 0x40L)) || 5L) && l_330);
            l_337 &= l_342;
        }
        for (g_174 = 0; (g_174 >= 53); ++g_174)
        {
            uint32_t l_363 = 8UL;
            l_363 = ((safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(g_217, ((safe_mul_func_int16_t_s_s((8L == 0x3B6AL), 0xAE36L)) == g_148))), (safe_rshift_func_int8_t_s_s((0x752B4E38L < 0xA16A1009L), ((l_337 ^ 5L) < 65533UL))))) == l_337);
            if (p_74)
            {
                int16_t l_374 = 0L;
                g_57 = (safe_rshift_func_uint16_t_u_s((safe_mod_func_int32_t_s_s(0L, (safe_add_func_int16_t_s_s(l_310, (0L >= (safe_mul_func_uint8_t_u_u(((safe_mod_func_uint8_t_u_u(0x9EL, l_374)) && ((safe_mod_func_int64_t_s_s(1L, l_310)) && (safe_add_func_int32_t_s_s(g_52, (~p_76))))), 9UL))))))), l_374));
                g_57 |= g_52;
            }
            else
            {
                g_57 = (safe_lshift_func_int8_t_s_s((0UL & l_363), ((l_313 != ((safe_lshift_func_uint8_t_u_s(p_73, (p_76 < (~1UL)))) & ((g_51 ^ (0x1FL <= (0xF9A5F5D6L > (-1L)))) > p_76))) && 0x76E25318A651242CLL)));
                g_57 = g_51;
            }
            g_57 = (((p_73 < (l_313 == ((safe_mod_func_int64_t_s_s((((((((safe_add_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s((l_310 <= (safe_mod_func_uint64_t_u_u((g_51 <= ((safe_mod_func_int16_t_s_s(l_313, g_10)) <= (((-5L) | (safe_lshift_func_int8_t_s_s(g_244, 5))) || 0x95L))), l_337))), 1)), 0xE9L)), 9)), l_342)), g_244)) ^ (-7L)) >= l_337) & p_77) >= 251UL) || l_363) ^ g_217), p_75)) && 0x4CL))) && l_303) || l_310);
        }
        g_57 = 0xDD9FBA2DL;
    }
    else
    {
        g_57 = 9L;
    }
    g_57 ^= ((safe_rshift_func_uint16_t_u_u(((safe_mod_func_int32_t_s_s((4294967295UL <= g_217), g_174)) & (g_10 && (((-10L) > (g_148 == (~(-1L)))) ^ (safe_mul_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u((((safe_add_func_uint64_t_u_u(((safe_mul_func_uint8_t_u_u(g_174, (((safe_rshift_func_int16_t_s_u((p_75 == l_342), l_418)) ^ (-2L)) < g_152))) && 0xFFL), p_74)) < 0x3C0F87B1L) <= p_74), g_217)) >= g_244), 0xCBFDL))))), g_244)) >= l_342);
    return g_10;
}
static uint32_t func_78(uint64_t p_79)
{
    int64_t l_287 = 0xC164ED7519BBCB22LL;
    int32_t l_292 = 0L;
    l_292 = ((-1L) ^ ((((safe_sub_func_int32_t_s_s(p_79, l_287)) <= (safe_lshift_func_uint8_t_u_u((0x5C5DC2C40DF29198LL > g_174), g_217))) & (safe_sub_func_uint8_t_u_u(250UL, (0x26L < l_292)))) < g_10));
    l_292 = 1L;
    return l_292;
}
inline static const int32_t func_83(uint8_t p_84, int8_t p_85, int64_t p_86)
{
    uint64_t l_104 = 2UL;
    int32_t l_124 = 0x738A40F9L;
    int32_t l_143 = 0x6E956520L;
    int32_t l_145 = 1L;
    int32_t l_146 = 0xB3E8CBBEL;
    uint16_t l_216 = 0UL;
    int32_t l_225 = (-10L);
    int8_t l_232 = 0x38L;
    uint32_t l_262 = 3UL;
    l_124 &= ((((safe_sub_func_uint16_t_u_u(l_104, (safe_lshift_func_int16_t_s_s(((safe_mod_func_uint64_t_u_u(g_51, (+(safe_mul_func_int8_t_s_s(0x8FL, (safe_add_func_int32_t_s_s((safe_add_func_uint32_t_u_u((((((p_84 >= (l_104 | 9UL)) == (g_59 | (safe_lshift_func_int8_t_s_s((((((l_104 < ((safe_sub_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u((safe_mul_func_uint8_t_u_u(1UL, l_104)), l_104)), p_85)) < p_84)) != 0xD896CD2A541E781FLL) || p_85) == (-3L)) == 1L), 2)))) & l_104) == l_104) != g_57), g_51)), 1L))))))) | 0x7B567EB8L), g_59)))) & 0UL) != p_85) < l_104);
    if (((safe_sub_func_uint32_t_u_u(p_85, (safe_add_func_int64_t_s_s(((((((p_86 != 0x04L) < (safe_rshift_func_uint16_t_u_u(65535UL, (safe_sub_func_uint64_t_u_u((+((safe_lshift_func_int16_t_s_s(p_85, 15)) != ((((safe_mod_func_int32_t_s_s(p_86, (safe_lshift_func_int16_t_s_s((((((g_51 != (((-1L) || g_10) < g_57)) | l_104) & g_58) ^ g_58) < 5L), g_51)))) > p_85) && 18446744073709551609UL) && (-1L)))), p_85))))) <= (-1L)) <= 0xD6DCL) <= l_124) <= 0x71667F30D379EBF7LL), p_86)))) < g_57))
    {
        int64_t l_144 = 0x53535970AEDAF9C5LL;
        int64_t l_147 = 0x3387B99205434A3FLL;
        int32_t l_149 = 0x93E8F6EEL;
        int32_t l_150 = 0x5E453FC6L;
        int32_t l_151 = 0xEC2C21BEL;
        uint32_t l_164 = 0xCC679C7DL;
        for (p_85 = 0; (p_85 >= (-23)); --p_85)
        {
            int16_t l_142 = 1L;
            l_142 = g_59;
            l_143 = 0x6B163557L;
        }
        g_152++;
        l_149 = (-1L);
        for (l_104 = (-16); (l_104 > 18); l_104 = safe_add_func_int16_t_s_s(l_104, 3))
        {
            const int8_t l_157 = 0x51L;
            uint8_t l_203 = 255UL;
            if ((l_157 & (!(p_84 || (g_152 >= p_86)))))
            {
                int16_t l_173 = 0x175DL;
                uint32_t l_202 = 18446744073709551606UL;
                g_174 ^= (((safe_add_func_uint32_t_u_u(((((+g_57) | (((safe_lshift_func_uint8_t_u_u(l_164, 6)) < 6L) && ((safe_rshift_func_int8_t_s_s((l_146 ^ (safe_sub_func_uint32_t_u_u((safe_sub_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_u(((0x38D3L || 0x60DBL) & g_10), (p_85 | g_52))) && g_10), g_52)), 0xB569DADAL))), 4)) && g_59))) != l_147) > l_149), 4294967295UL)) && g_59) > l_173);
                if (l_157)
                    continue;
                l_151 |= ((safe_lshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(0xD1L, ((safe_rshift_func_uint8_t_u_u(0x63L, 6)) > l_157))), 7)), (safe_lshift_func_int8_t_s_s((((g_148 | ((((safe_rshift_func_int8_t_s_u(((g_148 >= ((safe_add_func_uint16_t_u_u(g_58, (safe_add_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(0UL, (((safe_add_func_int64_t_s_s(l_157, (((safe_sub_func_uint8_t_u_u(((safe_unary_minus_func_int8_t_s((safe_rshift_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((g_148 != l_143), g_174)), l_173)))) <= (-1L)), 0xD2L)) <= 4294967286UL) != 0x5FL))) > g_148) > l_202))), g_58)))) >= l_143)) <= p_85), p_86)) != 0xCF6335B1L) == (-1L)) || g_58)) > l_203) < g_148), g_51)))) && 0xD4CF23647BCEAF5CLL);
            }
            else
            {
                if (p_86)
                    break;
            }
        }
    }
    else
    {
        return g_152;
    }
    g_217 &= (g_10 <= (((safe_mul_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(0x97L, (p_84 > (!((l_124 <= g_52) | (safe_sub_func_int16_t_s_s((safe_add_func_uint32_t_u_u(0x51692F62L, 0x138454CAL)), ((safe_unary_minus_func_uint16_t_u(g_152)) <= p_86)))))))), (-1L))), g_57)) > l_216) | g_148));
    if (g_152)
    {
        uint32_t l_218 = 0x77DDD3BAL;
        int32_t l_219 = 0x588FA3BEL;
        uint8_t l_224 = 0x7AL;
        l_219 = (g_57 >= l_218);
        l_219 ^= ((safe_add_func_uint16_t_u_u(((safe_sub_func_int32_t_s_s(l_224, (g_59 || (p_86 == (l_225 && (0xF569DE83L & 1UL)))))) || (safe_mul_func_uint16_t_u_u(((0xAAL == g_152) ^ p_85), g_10))), p_84)) ^ 0L);
        if (((((safe_lshift_func_int8_t_s_s(p_84, (safe_mod_func_uint64_t_u_u(l_232, (p_86 | (g_57 >= (((((l_225 & (safe_sub_func_uint64_t_u_u((g_174 ^ 1L), (((p_86 ^ 1L) != 0xB824L) | g_58)))) >= g_52) <= p_85) >= p_86) < g_148))))))) || g_51) | g_57) <= l_218))
        {
            uint8_t l_237 = 0xE9L;
            g_57 = ((safe_mod_func_int16_t_s_s(p_84, l_237)) && (safe_lshift_func_uint8_t_u_s(p_84, (safe_add_func_uint16_t_u_u(((safe_mod_func_int8_t_s_s(0x84L, 0xEAL)) & g_148), l_219)))));
            ++g_244;
            l_219 = (safe_sub_func_uint16_t_u_u(0x726CL, (((safe_unary_minus_func_uint16_t_u((g_52 && 0x7DL))) != (safe_rshift_func_uint16_t_u_u(0x002BL, p_86))) & g_58)));
            g_57 = (safe_lshift_func_uint16_t_u_s(((((1L || (p_84 == (0x015AL > l_232))) >= 5UL) & 0x60FA43BBL) || (safe_lshift_func_int8_t_s_s((safe_add_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(l_262, ((((1UL ^ 0x009C59F809E6970BLL) >= g_148) & p_85) == l_224))), p_86)), 4))), l_232));
        }
        else
        {
            int8_t l_283 = 3L;
            g_57 = ((((safe_unary_minus_func_uint32_t_u((safe_lshift_func_uint16_t_u_u(((((safe_add_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(((+((safe_sub_func_int64_t_s_s(g_152, (safe_rshift_func_int8_t_s_u((l_143 && 18446744073709551609UL), (((safe_rshift_func_uint16_t_u_s(((safe_rshift_func_uint8_t_u_s(((0xB3E926D7F8DAA83FLL < ((8L || (((0x03418026L == (safe_sub_func_uint32_t_u_u((((safe_sub_func_uint32_t_u_u(l_224, l_283)) & (g_59 == 6L)) < 18446744073709551606UL), g_52))) <= 6L) == 6UL)) || 0x0FL)) < 0xEEL), 7)) ^ 0x0E27L), l_219)) && p_84) <= p_86))))) != p_84)) != g_148), p_86)), 0x369FL)) ^ l_232) >= g_152) ^ l_145), l_283)))) ^ p_85) == 0x405B1F0BCF237C98LL) ^ 0xD1L);
        }
    }
    else
    {
        const uint16_t l_284 = 3UL;
        return l_284;
    }
    return g_58;
}
static int64_t func_91(uint32_t p_92, int32_t p_93, uint32_t p_94)
{
    uint16_t l_99 = 0x90ACL;
    int32_t l_100 = 0L;
    uint32_t l_101 = 0xA127326BL;
    l_100 = l_99;
    return l_101;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_10;
    csmith_sink_ = g_51;
    csmith_sink_ = g_52;
    csmith_sink_ = g_57;
    csmith_sink_ = g_58;
    csmith_sink_ = g_59;
    csmith_sink_ = g_148;
    csmith_sink_ = g_152;
    csmith_sink_ = g_174;
    csmith_sink_ = g_217;
    csmith_sink_ = g_244;
    csmith_sink_ = g_430;
    csmith_sink_ = g_473;
    csmith_sink_ = g_612;
    csmith_sink_ = g_703;
    csmith_sink_ = g_714;
    csmith_sink_ = g_715;
    csmith_sink_ = g_716;
    csmith_sink_ = g_717;
    csmith_sink_ = g_759;
    csmith_sink_ = g_807;
    platform_main_end(0,0);
    return 0;
}
