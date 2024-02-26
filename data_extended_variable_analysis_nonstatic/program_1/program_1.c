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
static const int32_t g_23 = 0x4981FF29L;
static int32_t g_34 = 7L;
static int32_t g_68 = 0x64071C19L;
static int64_t g_83 = 0L;
static uint32_t g_86 = 18446744073709551607UL;
static int32_t *g_113 = &g_68;
static int32_t ** const g_112 = &g_113;
static uint64_t g_177 = 18446744073709551612UL;
static int8_t g_226 = 1L;
static uint8_t g_235 = 255UL;
static int8_t g_271 = 1L;
static int32_t g_279 = 3L;
static int8_t g_291 = 6L;
static int16_t g_299 = 1L;
static int32_t g_300 = (-1L);
static uint16_t g_309 = 1UL;
static uint32_t g_330 = 0xA698E65BL;
static uint32_t g_486 = 0xA0CDF28EL;
static uint8_t g_496 = 0UL;
static uint8_t g_518 = 9UL;
static uint32_t g_521 = 4294967291UL;
static int32_t * const *g_574 = &g_113;
static int32_t ****g_586 = (void*)0;
static int16_t g_651 = 0x2B50L;
static int64_t g_660 = 0x6EE753C971A0A197LL;
static uint32_t g_663 = 0x839D5F4DL;
static int32_t g_767 = 1L;
static int32_t g_778 = 0L;
static int16_t g_780 = 1L;
static int32_t g_951 = 0x88892DB6L;
static uint32_t g_957 = 18446744073709551612UL;
static int16_t g_1076 = (-1L);
static uint8_t g_1092 = 0x46L;
static int8_t g_1136 = 0L;
static int32_t g_1147 = 0x99BD9972L;
static uint32_t g_1174 = 18446744073709551615UL;
static int32_t func_1(void);
static const uint64_t func_11(int8_t p_12, int32_t p_13, uint16_t p_14, uint64_t p_15);
static uint16_t func_18(const int16_t p_19, uint32_t p_20, uint32_t p_21, const int32_t p_22);
static int32_t ** func_35(int32_t ** const p_36, int16_t p_37, int32_t p_38);
static int32_t ** const func_39(uint8_t p_40, uint16_t p_41, uint8_t p_42, int64_t p_43, uint8_t p_44);
static uint8_t func_45(int32_t * p_46);
static int32_t func_60(uint16_t p_61, int32_t * p_62, int32_t p_63);
static int32_t * func_65(uint16_t p_66);
static int32_t func_89(int32_t * const * p_90, int8_t p_91, int8_t p_92);
static int32_t ** func_93(uint32_t p_94, int32_t * p_95, int32_t p_96, int32_t ** const p_97);
static int32_t func_1(void)
{
    uint64_t l_4 = 4UL;
    int8_t l_1177 = 0L;
    int32_t *l_1267 = (void*)0;
    int32_t *l_1268 = &g_68;
    (*l_1268) = ((safe_div_func_uint32_t_u_u(l_4, l_4)) <= ((safe_mod_func_int32_t_s_s((safe_sub_func_int64_t_s_s(0L, (safe_div_func_uint64_t_u_u(0xA9565E08CCCDDD1DLL, func_11((safe_mul_func_uint16_t_u_u(func_18(g_23, g_23, l_4, (safe_mod_func_int64_t_s_s(((safe_sub_func_int64_t_s_s((((safe_div_func_uint16_t_u_u(l_4, (safe_div_func_int8_t_s_s(((g_23 == l_4) > g_23), (-1L))))) && g_23) && (-1L)), g_23)) < l_4), g_23))), 65535UL)), l_4, l_1177, l_4))))), l_1177)) & 0xB4E78164L));
    return (*l_1268);
}
static const uint64_t func_11(int8_t p_12, int32_t p_13, uint16_t p_14, uint64_t p_15)
{
    uint64_t l_1186 = 0x622000654BF2DDCFLL;
    int32_t l_1207 = 0x38B07EF5L;
    int32_t **l_1213 = (void*)0;
    int32_t l_1244 = 0x690BDB1BL;
    int32_t l_1253 = (-4L);
    int32_t l_1257 = 5L;
    int32_t *****l_1264 = &g_586;
    for (g_1147 = 27; (g_1147 > (-5)); --g_1147)
    {
        int32_t *l_1180 = &g_778;
        int32_t *l_1181 = &g_778;
        int32_t *l_1182 = &g_778;
        int32_t *l_1183 = &g_34;
        int32_t *l_1184 = &g_34;
        int32_t *l_1185 = &g_34;
        int32_t l_1243 = 1L;
        uint64_t l_1258 = 0x64451E212AE37643LL;
        --l_1186;
        if ((safe_rshift_func_int16_t_s_u(p_15, 8)))
        {
            uint8_t l_1197 = 249UL;
            int32_t ** const l_1212 = &l_1181;
            if ((safe_add_func_int64_t_s_s(((safe_lshift_func_int16_t_s_s((~((+l_1197) && p_15)), l_1186)) < (safe_div_func_uint16_t_u_u(((safe_mod_func_uint32_t_u_u((safe_sub_func_uint64_t_u_u((safe_div_func_int8_t_s_s((0xA1CB38105CBFDC91LL ^ (safe_unary_minus_func_uint8_t_u((l_1197 & ((void*)0 == g_586))))), (g_486 || (g_496 >= g_651)))), (*l_1185))), p_13)) ^ g_330), 65534UL))), 0x54239C461FC064E0LL)))
            {
                const uint64_t l_1216 = 18446744073709551614UL;
                (*l_1183) = (((l_1207 == (safe_rshift_func_int8_t_s_s(((0x9A086A66C8E15FFDLL | (((g_486 | (safe_rshift_func_uint16_t_u_u((g_586 != (void*)0), 6))) > (l_1212 == l_1213)) == 0UL)) & ((((safe_mul_func_int16_t_s_s(p_15, 0xBDBBL)) > (**l_1212)) & g_177) == 0xAD69DD57L)), l_1216))) | (*l_1185)) >= 4294967295UL);
            }
            else
            {
                return g_300;
            }
            p_13 = (safe_mul_func_int16_t_s_s(0xCE13L, ((safe_add_func_int16_t_s_s(p_13, (safe_mul_func_uint16_t_u_u((((((((g_330 != g_299) == p_14) && p_13) & 0xCBL) && ((&l_1213 == &l_1212) > 0xF1L)) & g_300) || g_177), p_12)))) < g_957)));
        }
        else
        {
            int16_t l_1223 = 0x6D4EL;
            int32_t *l_1224 = &g_778;
            int32_t *l_1225 = &g_68;
            int32_t *l_1226 = (void*)0;
            int32_t *l_1227 = &g_34;
            int32_t l_1228 = 0L;
            int32_t *l_1229 = (void*)0;
            int32_t *l_1230 = &g_778;
            int32_t *l_1231 = &g_34;
            int32_t *l_1232 = &g_778;
            int32_t *l_1233 = &l_1228;
            int32_t *l_1234 = &g_34;
            int32_t *l_1235 = &g_68;
            int32_t *l_1236 = (void*)0;
            int32_t *l_1237 = &g_68;
            int32_t *l_1238 = (void*)0;
            int32_t *l_1239 = &g_68;
            int32_t *l_1240 = &g_34;
            int32_t *l_1241 = &g_778;
            int32_t *l_1242 = &g_34;
            int32_t *l_1245 = &l_1244;
            int32_t *l_1246 = &g_778;
            int32_t *l_1247 = &l_1228;
            int32_t *l_1248 = &g_778;
            int32_t *l_1249 = (void*)0;
            int32_t *l_1250 = (void*)0;
            int32_t *l_1251 = (void*)0;
            int32_t *l_1252 = &g_68;
            int32_t *l_1254 = &g_34;
            int32_t l_1255 = (-1L);
            int32_t *l_1256 = &g_778;
            int32_t *****l_1261 = &g_586;
            l_1258++;
            (*l_1261) = g_586;
            (*l_1182) = (safe_add_func_uint8_t_u_u(p_12, 0x19L));
        }
        l_1264 = &g_586;
        for (p_15 = 0; (p_15 > 39); ++p_15)
        {
            (*l_1180) &= (*l_1184);
        }
    }
    return g_86;
}
static uint16_t func_18(const int16_t p_19, uint32_t p_20, uint32_t p_21, const int32_t p_22)
{
    int32_t *l_32 = (void*)0;
    int32_t *l_33 = &g_34;
    int32_t **l_1050 = &l_32;
    int32_t ***l_1049 = &l_1050;
    int16_t l_1058 = 0x6486L;
    int32_t l_1069 = 0L;
    int64_t l_1081 = 0xB00E7C4979838588LL;
    int32_t *l_1099 = &l_1069;
    int32_t *l_1100 = &g_34;
    int32_t *l_1101 = &g_68;
    int32_t l_1102 = 0xF1690082L;
    int32_t l_1103 = 0x6E08E020L;
    int32_t l_1104 = 1L;
    int32_t *l_1105 = &l_1104;
    int32_t l_1106 = 9L;
    int32_t *l_1107 = (void*)0;
    int32_t *l_1108 = &l_1106;
    int32_t *l_1109 = &l_1106;
    int32_t *l_1110 = &l_1102;
    int32_t *l_1111 = &l_1102;
    int32_t *l_1112 = &g_34;
    int32_t *l_1113 = &l_1069;
    int32_t *l_1114 = &l_1102;
    int32_t l_1115 = 0x14269E5AL;
    int32_t *l_1116 = &l_1104;
    int32_t *l_1117 = (void*)0;
    int32_t *l_1118 = &g_778;
    int32_t *l_1119 = (void*)0;
    int32_t *l_1120 = &l_1115;
    int32_t l_1121 = 0xEA02C455L;
    int32_t l_1122 = 0x21575A92L;
    int32_t *l_1123 = &l_1069;
    int32_t *l_1124 = &g_778;
    int32_t *l_1125 = &g_68;
    int32_t *l_1126 = &g_68;
    int32_t *l_1127 = &l_1103;
    int32_t *l_1128 = &l_1102;
    int32_t *l_1129 = &l_1115;
    int32_t *l_1130 = &l_1103;
    int32_t *l_1131 = &g_778;
    int32_t *l_1132 = &l_1069;
    int32_t *l_1133 = &l_1115;
    int32_t *l_1134 = &g_778;
    int32_t *l_1135 = (void*)0;
    int32_t *l_1137 = &l_1122;
    int32_t *l_1138 = (void*)0;
    int32_t *l_1139 = &l_1122;
    int32_t *l_1140 = &l_1104;
    int32_t *l_1141 = (void*)0;
    int32_t *l_1142 = &l_1104;
    int32_t l_1143 = 0L;
    int32_t *l_1144 = (void*)0;
    int32_t *l_1145 = &l_1103;
    int32_t *l_1146 = &l_1103;
    int32_t *l_1148 = &l_1103;
    int32_t l_1149 = 6L;
    int32_t *l_1150 = (void*)0;
    int32_t *l_1151 = (void*)0;
    int32_t *l_1152 = &g_34;
    int64_t l_1153 = 0L;
    int32_t *l_1154 = &l_1102;
    int32_t *l_1155 = &l_1069;
    int32_t *l_1156 = &l_1143;
    int32_t *l_1157 = (void*)0;
    int32_t l_1158 = 5L;
    int32_t *l_1159 = &l_1103;
    int32_t *l_1160 = &l_1115;
    int32_t *l_1161 = &l_1149;
    int32_t *l_1162 = &l_1143;
    int32_t *l_1163 = (void*)0;
    int32_t *l_1164 = &l_1069;
    int32_t *l_1165 = &l_1143;
    int32_t *l_1166 = &l_1069;
    int32_t *l_1167 = &g_778;
    int32_t *l_1168 = (void*)0;
    int32_t *l_1169 = &l_1106;
    int32_t l_1170 = (-1L);
    int32_t *l_1171 = &l_1102;
    int32_t *l_1172 = &l_1104;
    int32_t *l_1173 = &l_1122;
    (*l_33) = p_22;
    (*l_1049) = func_35(func_39(func_45(l_33), (safe_mul_func_uint8_t_u_u((0xEBD29D54AD48446ELL && (g_660 < (p_19 ^ p_21))), ((g_300 <= (((void*)0 != l_1049) || g_300)) & g_778))), g_23, p_22, g_951), l_1058, p_19);
    ((void) sizeof ((l_1050 == 0) ? 1 : 0), __extension__ ({ if (l_1050 == 0) ; else __assert_fail ("l_1050 == 0", "/tmp/tmphgl2ax7t.c", 267, __extension__ __PRETTY_FUNCTION__); }));
    if ((&p_22 != (void*)0))
    {
        const uint8_t l_1060 = 0x79L;
        int32_t **l_1065 = (void*)0;
        int32_t **** const l_1066 = &l_1049;
        int32_t *l_1067 = &g_68;
        int32_t *l_1068 = &g_68;
        int32_t *l_1070 = &l_1069;
        int32_t *l_1071 = &g_68;
        int32_t *l_1072 = &l_1069;
        int32_t *l_1073 = &g_68;
        int32_t *l_1074 = (void*)0;
        int32_t *l_1075 = (void*)0;
        int32_t *l_1077 = &g_68;
        int32_t *l_1078 = &g_778;
        int32_t *l_1079 = &g_34;
        int32_t *l_1080 = &g_778;
        int32_t *l_1082 = &l_1069;
        int32_t *l_1083 = &g_34;
        int32_t *l_1084 = &l_1069;
        int32_t l_1085 = 0x0AAF305EL;
        int32_t *l_1086 = &l_1085;
        int32_t *l_1087 = &g_68;
        int32_t *l_1088 = (void*)0;
        int32_t *l_1089 = &l_1069;
        int32_t *l_1090 = &g_34;
        int32_t *l_1091 = &g_68;
        (*l_33) = l_1060;
        (*l_33) |= (+(~(safe_add_func_uint64_t_u_u(((((void*)0 == l_1065) <= p_21) < (&l_1050 == &l_1065)), (g_586 == l_1066)))));
        g_1092++;
    }
    else
    {
        int8_t l_1095 = 0L;
        uint16_t l_1096 = 6UL;
        l_1096--;
    }
    g_1174--;
    return g_951;
}
static int32_t ** func_35(int32_t ** const p_36, int16_t p_37, int32_t p_38)
{
    int32_t **l_1059 = (void*)0;
    return l_1059;
}
static int32_t ** const func_39(uint8_t p_40, uint16_t p_41, uint8_t p_42, int64_t p_43, uint8_t p_44)
{
    int32_t ** const l_1053 = &g_113;
    int32_t * const l_1055 = &g_778;
    int32_t **l_1056 = (void*)0;
    int32_t **l_1057 = &g_113;
    for (g_951 = 14; (g_951 == 6); g_951 = safe_sub_func_uint32_t_u_u(g_951, 7))
    {
        if (p_42)
        {
            return l_1053;
        }
        else
        {
            int32_t ** const l_1054 = (void*)0;
            return l_1054;
        }
    }
    (*l_1057) = l_1055;
    ((void) sizeof ((g_113 == &g_778) ? 1 : 0), __extension__ ({ if (g_113 == &g_778) ; else __assert_fail ("g_113 == &g_778", "/tmp/tmphgl2ax7t.c", 353, __extension__ __PRETTY_FUNCTION__); }));
    return l_1056;
}
static uint8_t func_45(int32_t * p_46)
{
    int8_t l_47 = 0x7AL;
    int32_t l_689 = 1L;
    int32_t **l_715 = &g_113;
    int32_t ***l_714 = &l_715;
    uint32_t l_870 = 1UL;
    uint64_t l_886 = 18446744073709551611UL;
    int32_t l_935 = (-2L);
    int32_t l_956 = 1L;
    uint64_t l_999 = 0xE6960AF9E2C309A9LL;
    uint8_t l_1020 = 0x48L;
    int64_t l_1046 = 7L;
    if (((l_47 && (safe_lshift_func_uint16_t_u_u(65535UL, (safe_mod_func_uint16_t_u_u(g_23, g_34))))) >= 0x1EL))
    {
        uint64_t l_64 = 0x1F6ED734895C4B79LL;
        int32_t ****l_685 = (void*)0;
        int32_t l_690 = 0xC5AB965BL;
        int8_t l_753 = 0L;
        int32_t l_777 = 9L;
        uint8_t l_785 = 1UL;
        int32_t l_915 = (-7L);
        int32_t l_932 = 0xA78A989CL;
        uint16_t l_975 = 0xA440L;
        if ((safe_lshift_func_uint16_t_u_u(((safe_div_func_int16_t_s_s(((*p_46) | (safe_rshift_func_int8_t_s_u(((safe_add_func_int32_t_s_s(func_60(l_64, func_65(l_47), (*p_46)), l_47)) && g_309), ((((safe_sub_func_uint32_t_u_u((((((!(safe_lshift_func_int16_t_s_s(((void*)0 != l_685), 9))) && g_660) >= 0x534664D1L) != (*p_46)) | l_47), l_47)) | 0x0D94L) >= l_64) == l_47)))), 0x3D56L)) ^ 0x3ECA8A1A81AF41BFLL), 15)))
        {
            int32_t *l_686 = (void*)0;
            int32_t *l_687 = &g_68;
            int32_t *l_688 = (void*)0;
            int32_t *l_691 = (void*)0;
            int32_t *l_692 = &g_34;
            int32_t *l_693 = &g_34;
            int32_t *l_694 = &g_68;
            int32_t *l_695 = &l_690;
            int32_t *l_696 = &l_690;
            int32_t l_697 = 4L;
            int32_t *l_698 = &l_697;
            int32_t *l_699 = &l_697;
            uint16_t l_700 = 0x3E96L;
            l_700++;
            (*g_112) = p_46;
            ((void) sizeof ((g_113 == &g_34) ? 1 : 0), __extension__ ({ if (g_113 == &g_34) ; else __assert_fail ("g_113 == &g_34", "/tmp/tmphgl2ax7t.c", 407, __extension__ __PRETTY_FUNCTION__); }));
            for (g_299 = 0; (g_299 >= (-7)); g_299 = safe_sub_func_uint16_t_u_u(g_299, 5))
            {
                (*l_698) ^= (!g_660);
            }
            for (g_83 = 0; (g_83 != 0); g_83 = safe_add_func_uint16_t_u_u(g_83, 9))
            {
                (*p_46) = 0xB7B7E35EL;
                if ((**g_112))
                    break;
            }
        }
        else
        {
            int32_t *l_708 = &l_690;
lbl_711:
            (*g_112) = l_708;
            ((void) sizeof ((g_113 == &l_690) ? 1 : 0), __extension__ ({ if (g_113 == &l_690) ; else __assert_fail ("g_113 == &l_690", "/tmp/tmphgl2ax7t.c", 425, __extension__ __PRETTY_FUNCTION__); }));
            for (g_309 = 3; (g_309 < 55); g_309 = safe_add_func_int32_t_s_s(g_309, 3))
            {
                (*g_112) = p_46;
                ((void) sizeof ((g_113 == &g_34) ? 1 : 0), __extension__ ({ if (g_113 == &g_34) ; else __assert_fail ("g_113 == &g_34", "/tmp/tmphgl2ax7t.c", 430, __extension__ __PRETTY_FUNCTION__); }));
                if (g_291)
                    goto lbl_711;
            }
            ((void) sizeof ((g_113 == &g_34 || g_113 == &l_690) ? 1 : 0), __extension__ ({ if (g_113 == &g_34 || g_113 == &l_690) ; else __assert_fail ("g_113 == &g_34 || g_113 == &l_690", "/tmp/tmphgl2ax7t.c", 435, __extension__ __PRETTY_FUNCTION__); }));
        }
        ((void) sizeof ((g_113 == &g_34 || g_113 == &l_690) ? 1 : 0), __extension__ ({ if (g_113 == &g_34 || g_113 == &l_690) ; else __assert_fail ("g_113 == &g_34 || g_113 == &l_690", "/tmp/tmphgl2ax7t.c", 438, __extension__ __PRETTY_FUNCTION__); }));
        for (g_271 = 5; (g_271 == (-30)); --g_271)
        {
            int32_t ****l_716 = (void*)0;
            int32_t ****l_717 = &l_714;
            uint32_t l_754 = 0UL;
            int32_t *l_755 = &g_68;
            int32_t *l_756 = &g_68;
            int32_t *l_757 = &l_690;
            int32_t *l_758 = &l_690;
            int32_t *l_759 = &g_34;
            int32_t *l_760 = &g_68;
            int32_t *l_761 = &l_690;
            int32_t *l_762 = &l_690;
            int32_t *l_763 = (void*)0;
            int32_t *l_764 = &g_34;
            int32_t *l_765 = &g_68;
            int32_t *l_766 = &g_34;
            int32_t *l_768 = &l_690;
            int32_t *l_769 = &l_690;
            int32_t *l_770 = &l_690;
            int32_t *l_771 = &g_68;
            int32_t *l_772 = &l_690;
            int32_t *l_773 = &l_690;
            int32_t l_774 = 0L;
            int32_t *l_775 = &g_34;
            int32_t *l_776 = &l_690;
            int32_t *l_779 = &l_777;
            int32_t l_781 = (-8L);
            int32_t *l_782 = &l_774;
            int32_t *l_783 = &l_774;
            int32_t *l_784 = &l_774;
            (*l_717) = l_714;
            (*g_113) = (safe_sub_func_uint16_t_u_u((***l_714), (((***l_714) < (safe_mul_func_uint8_t_u_u((254UL | ((((**l_715) && 0x19L) | 0L) <= (safe_sub_func_uint16_t_u_u((safe_add_func_int8_t_s_s((g_586 == g_586), (safe_lshift_func_uint8_t_u_u((g_34 <= 0x2407BEE8L), 5)))), g_291)))), g_23))) >= 0L)));
            (**g_112) = (safe_lshift_func_int8_t_s_u(((**g_574) <= (**g_574)), (safe_mul_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((safe_div_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(g_496, ((~(safe_mod_func_int64_t_s_s((safe_div_func_int64_t_s_s((safe_div_func_uint16_t_u_u((0xEA63802CE8FD7E09LL | (g_651 || (****l_717))), (safe_sub_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u((0xFB580818782F0279LL | (&l_715 == &l_715)), l_753)) <= l_754), 0x857CL)))), 0x7BDA4903D6566E98LL)), g_23))) > (***l_714)))), 14)), (***l_714))), 8UL)), (***l_714)))));
            ++l_785;
        }
        (*p_46) = (*p_46);
        for (l_690 = 14; (l_690 > (-6)); l_690--)
        {
            const int32_t *l_800 = &g_23;
            const int32_t ** const l_799 = &l_800;
            const int32_t ** const *l_798 = &l_799;
            const int32_t **l_872 = (void*)0;
            const int32_t ***l_871 = &l_872;
            int32_t l_889 = 0L;
            int32_t l_903 = 0xEFB90BF1L;
            int32_t l_931 = 0x2BCA897FL;
            int32_t l_948 = 0x545F5720L;
            int32_t *l_1005 = &l_956;
            int32_t *l_1006 = &g_34;
            int32_t *l_1007 = &l_935;
            int32_t *l_1008 = &l_932;
            int32_t *l_1009 = &l_956;
            int32_t *l_1010 = &l_932;
            int32_t *l_1011 = &l_948;
            int32_t *l_1012 = &l_915;
            int32_t *l_1013 = &l_932;
            int32_t *l_1014 = &l_889;
            int32_t *l_1015 = &g_778;
            int32_t *l_1016 = (void*)0;
            int32_t *l_1017 = &l_956;
            int32_t *l_1018 = &l_948;
            int32_t *l_1019 = &l_935;
        }
    }
    else
    {
        const uint16_t l_1044 = 0xF378L;
        (**g_112) = (safe_sub_func_int16_t_s_s((safe_mul_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(((void*)0 == (*l_715)), ((1L >= (safe_add_func_int64_t_s_s(l_1044, (0x244BL | l_1044)))) && (safe_unary_minus_func_uint16_t_u(((**l_715) && (((((&l_715 != &l_715) && (*p_46)) == 0x3BL) >= l_1046) != l_1044))))))), 0x25L)), l_1044));
        return l_1044;
    }
    return g_957;
}
static int32_t func_60(uint16_t p_61, int32_t * p_62, int32_t p_63)
{
    int32_t *l_522 = &g_68;
    int32_t *l_523 = &g_68;
    int32_t l_524 = 0x9319D2E8L;
    int32_t *l_525 = &l_524;
    int32_t *l_526 = &g_68;
    uint64_t l_527 = 0x5B24F8A200C977F8LL;
    int32_t **l_564 = (void*)0;
    int32_t ***l_563 = &l_564;
    int32_t *l_582 = &g_68;
    int32_t l_605 = 2L;
    int32_t l_635 = 0x24D7EAAAL;
    int32_t l_653 = 5L;
    (*l_522) ^= ((&p_62 == &g_113) > g_226);
    (*g_112) = &p_63;
    ((void) sizeof ((g_113 == &p_63) ? 1 : 0), __extension__ ({ if (g_113 == &p_63) ; else __assert_fail ("g_113 == &p_63", "/tmp/tmphgl2ax7t.c", 538, __extension__ __PRETTY_FUNCTION__); }));
    l_527--;
    for (l_524 = 0; (l_524 <= (-18)); l_524--)
    {
        int32_t *l_532 = &g_34;
        int32_t **l_537 = &l_522;
        int32_t ***l_536 = &l_537;
        int32_t **** const l_535 = &l_536;
        int32_t l_649 = 0x855DD7CDL;
        (*g_112) = l_532;
        ((void) sizeof ((g_113 == &g_34) ? 1 : 0), __extension__ ({ if (g_113 == &g_34) ; else __assert_fail ("g_113 == &g_34", "/tmp/tmphgl2ax7t.c", 549, __extension__ __PRETTY_FUNCTION__); }));
    }
    ((void) sizeof ((g_113 == &g_34 || g_113 == &p_63) ? 1 : 0), __extension__ ({ if (g_113 == &g_34 || g_113 == &p_63) ; else __assert_fail ("g_113 == &g_34 || g_113 == &p_63", "/tmp/tmphgl2ax7t.c", 552, __extension__ __PRETTY_FUNCTION__); }));
    return (*l_523);
}
static int32_t * func_65(uint16_t p_66)
{
    int32_t *l_67 = &g_68;
    int32_t *l_69 = &g_68;
    int32_t *l_70 = (void*)0;
    int32_t *l_71 = &g_68;
    int32_t *l_72 = &g_68;
    int32_t *l_73 = &g_68;
    int32_t *l_74 = &g_68;
    int32_t *l_75 = &g_68;
    int32_t *l_76 = (void*)0;
    int32_t *l_77 = &g_68;
    int32_t *l_78 = &g_68;
    int32_t *l_79 = &g_68;
    int32_t *l_80 = &g_68;
    int32_t *l_81 = (void*)0;
    int32_t *l_82 = (void*)0;
    int32_t *l_84 = (void*)0;
    int32_t l_85 = 0x6463A473L;
    g_86--;
    g_521 ^= func_89(func_93(p_66, &l_85, (safe_mod_func_int8_t_s_s((safe_div_func_int8_t_s_s((safe_mod_func_int32_t_s_s((p_66 <= (safe_rshift_func_uint8_t_u_s(g_83, g_23))), p_66)), (safe_mod_func_uint64_t_u_u((18446744073709551615UL != (safe_rshift_func_int8_t_s_u(((0x9CL < (safe_mul_func_int8_t_s_s((p_66 != (*l_79)), 0x13L))) >= p_66), 3))), g_83)))), p_66)), g_112), p_66, g_83);
    ((void) sizeof ((g_113 == &g_34 || g_113 == &g_68) ? 1 : 0), __extension__ ({ if (g_113 == &g_34 || g_113 == &g_68) ; else __assert_fail ("g_113 == &g_34 || g_113 == &g_68", "/tmp/tmphgl2ax7t.c", 586, __extension__ __PRETTY_FUNCTION__); }));
    return (*g_112);
}
static int32_t func_89(int32_t * const * p_90, int8_t p_91, int8_t p_92)
{
    int32_t *l_343 = &g_34;
    int32_t **l_358 = (void*)0;
    int32_t ***l_357 = &l_358;
    int32_t l_361 = 4L;
    int32_t *l_516 = (void*)0;
    int32_t *l_517 = &g_68;
    for (g_271 = 0; (g_271 > 14); ++g_271)
    {
        int32_t **l_336 = &g_113;
        (*l_336) = (*p_90);
    }
    for (g_83 = (-12); (g_83 <= (-26)); g_83 = safe_sub_func_int32_t_s_s(g_83, 5))
    {
        uint32_t l_354 = 0xCDDF55BCL;
        int32_t *l_360 = (void*)0;
        int32_t ***l_402 = &l_358;
        int64_t l_411 = 0x06AC369FCEB6DB73LL;
        int8_t l_438 = (-2L);
        int32_t l_491 = 0x80ABBFA4L;
        int64_t l_505 = 5L;
        uint32_t l_513 = 1UL;
        for (g_291 = 15; (g_291 >= (-9)); g_291 = safe_sub_func_int8_t_s_s(g_291, 1))
        {
            uint16_t l_346 = 0xB9B3L;
            for (g_86 = 13; (g_86 >= 16); g_86 = safe_add_func_int64_t_s_s(g_86, 8))
            {
                int32_t **l_344 = &l_343;
                (*g_112) = l_343;
                ((void) sizeof ((g_113 == &g_34) ? 1 : 0), __extension__ ({ if (g_113 == &g_34) ; else __assert_fail ("g_113 == &g_34", "/tmp/tmphgl2ax7t.c", 629, __extension__ __PRETTY_FUNCTION__); }));
                (*l_344) = (*p_90);
                l_346 &= (safe_unary_minus_func_int8_t_s(0L));
                for (g_177 = 0; (g_177 < 44); g_177 = safe_add_func_uint64_t_u_u(g_177, 8))
                {
                    l_354 ^= (safe_add_func_int16_t_s_s(0x33B9L, (((&g_113 != l_344) ^ (+(-1L))) || (safe_lshift_func_int16_t_s_s(p_91, g_271)))));
                    if ((*g_113))
                        break;
                }
            }
        }
        for (g_177 = (-22); (g_177 > 29); g_177 = safe_add_func_int16_t_s_s(g_177, 6))
        {
            int32_t ****l_359 = &l_357;
            (*l_359) = l_357;
        }
        l_361 = (**g_112);
        for (g_291 = (-15); (g_291 >= (-23)); g_291 = safe_sub_func_uint32_t_u_u(g_291, 9))
        {
            int64_t l_370 = 0L;
            uint32_t l_437 = 0x2314006BL;
            int32_t ** const l_465 = &l_360;
            int32_t *l_500 = &l_361;
            int32_t *l_501 = &l_491;
            int32_t *l_502 = &l_361;
            int32_t *l_503 = &l_361;
            int32_t *l_504 = &l_491;
            int32_t *l_506 = (void*)0;
            int32_t *l_507 = &g_68;
            int32_t l_508 = 1L;
            int32_t *l_509 = &l_508;
            int32_t *l_510 = &l_361;
            int32_t *l_511 = &l_491;
            int32_t *l_512 = (void*)0;
            if ((((((g_86 > ((safe_div_func_uint8_t_u_u(((((safe_mul_func_int8_t_s_s(((safe_add_func_uint32_t_u_u(l_370, 0xB824888CL)) < (safe_mod_func_uint8_t_u_u(g_309, p_91))), 0x60L)) | (safe_mul_func_uint8_t_u_u(254UL, 8L))) < (safe_mod_func_uint64_t_u_u((p_91 > p_91), p_92))) != p_92), p_92)) != p_91)) != (**p_90)) | 18446744073709551615UL) >= g_226) || (**p_90)))
            {
                int32_t l_396 = 0x4C442B78L;
                int32_t *l_397 = &g_68;
                (*l_397) = (safe_mod_func_uint8_t_u_u((((safe_sub_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s((((p_92 <= (*l_343)) && (0UL && ((((&g_113 == &g_113) >= (1L == (safe_add_func_int32_t_s_s((**g_112), (((safe_lshift_func_int8_t_s_u(((safe_rshift_func_int8_t_s_s(((0UL < (~((((safe_mod_func_uint64_t_u_u((safe_sub_func_uint8_t_u_u((((safe_sub_func_uint64_t_u_u(0xCF241C91009C59F8LL, g_235)) && g_177) || (-4L)), g_279)), g_300)) ^ 0xB4L) <= l_396) > 0x95L))) & l_396), p_91)) > p_91), 5)) | g_23) & l_370))))) && g_68) & (*g_113)))) >= (**p_90)), 0)), (**p_90))) >= p_91) >= p_92), 0xBDL));
            }
            else
            {
                int8_t l_414 = 0L;
                int32_t l_484 = 1L;
                int32_t *l_489 = (void*)0;
                int32_t *l_490 = &l_484;
                int32_t *l_492 = &l_484;
                int32_t *l_493 = &l_484;
                int32_t *l_494 = (void*)0;
                int32_t *l_495 = &g_68;
                int32_t **l_499 = &l_494;
                if ((safe_mul_func_int8_t_s_s(((&g_112 == l_402) != ((safe_sub_func_uint8_t_u_u(g_309, (((-1L) & (((safe_mod_func_int64_t_s_s((1L & ((l_370 >= (*g_113)) <= g_271)), 0x71A2FFDF36518EE9LL)) && 0x24L) < 0x63CDL)) | (*g_113)))) == (*g_113))), 1L)))
                {
                    int32_t ****l_428 = &l_402;
                    for (p_92 = 0; (p_92 > 14); p_92 = safe_add_func_uint8_t_u_u(p_92, 6))
                    {
                        int32_t **l_409 = (void*)0;
                        int32_t **l_410 = &l_360;
                        (*l_410) = (*p_90);
                        ((void) sizeof ((l_360 == &g_34 || l_360 == &g_68) ? 1 : 0), __extension__ ({ if (l_360 == &g_34 || l_360 == &g_68) ; else __assert_fail ("l_360 == &g_34 || l_360 == &g_68", "/tmp/tmphgl2ax7t.c", 689, __extension__ __PRETTY_FUNCTION__); }));
                        l_411 = (0xA70E2737L < (p_92 <= p_92));
                    }
                    if ((**g_112))
                    {
                        const int64_t l_429 = 1L;
                        int32_t *l_430 = &l_361;
                        (*l_430) &= (((safe_add_func_int64_t_s_s((l_414 <= 0x81BE9AE68F206085LL), l_370)) <= g_23) >= (safe_sub_func_int64_t_s_s((*l_343), ((!(safe_mod_func_uint8_t_u_u((((safe_mod_func_uint64_t_u_u(5UL, (safe_rshift_func_uint16_t_u_u((0x75B735C5DC2C40DFLL > ((safe_lshift_func_int8_t_s_s(((**g_112) && ((safe_add_func_uint8_t_u_u(((l_428 == &l_402) != l_429), 255UL)) == 4L)), p_91)) == g_83)), 2)))) & g_291) < g_279), 0x50L))) < g_300))));
                    }
                    else
                    {
                        int8_t l_436 = 0L;
                        int32_t *l_439 = &l_361;
                        (*l_439) = (((!p_92) | (safe_mod_func_int8_t_s_s((safe_sub_func_int32_t_s_s((g_226 && p_91), p_92)), l_436))) > (l_437 | (l_438 ^ 255UL)));
                        return (**g_112);
                    }
                }
                else
                {
                    int64_t l_461 = (-1L);
                    int32_t l_467 = 0L;
                    int32_t l_469 = 4L;
                    if (l_370)
                        break;
                    if ((safe_add_func_int16_t_s_s(l_437, (safe_rshift_func_int8_t_s_u((g_83 && ((safe_div_func_int16_t_s_s((safe_mod_func_int64_t_s_s(((safe_lshift_func_int16_t_s_u((safe_sub_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(9L, 0)), (-1L))), (safe_mod_func_int64_t_s_s((g_309 < 0xDF5FA7B2E72F24C6LL), 18446744073709551615UL)))) || (~(safe_lshift_func_int8_t_s_u((p_91 <= (safe_add_func_int64_t_s_s(((0xC0L == 0x01L) == l_461), 0xD8C9BA08D8BCF49ALL))), g_68)))), p_92)), (-1L))) || g_23)), 3)))))
                    {
                        uint8_t l_462 = 0UL;
                        if (l_462)
                            break;
                    }
                    else
                    {
                        int32_t **l_466 = &l_343;
                        int32_t *l_468 = &g_68;
                        int32_t *l_470 = &l_467;
                        int32_t *l_471 = &l_361;
                        int32_t l_472 = (-1L);
                        int32_t *l_473 = &g_68;
                        int32_t *l_474 = &g_68;
                        int32_t *l_475 = &l_361;
                        int32_t *l_476 = (void*)0;
                        int32_t *l_477 = &l_467;
                        int32_t *l_478 = &l_361;
                        int32_t *l_479 = &l_467;
                        int32_t *l_480 = &l_469;
                        int32_t *l_481 = &l_472;
                        int32_t *l_482 = &l_467;
                        int32_t *l_483 = &l_469;
                        int32_t *l_485 = (void*)0;
                        p_90 = l_466;
                        ((void) sizeof ((p_90 == &l_343) ? 1 : 0), __extension__ ({ if (p_90 == &l_343) ; else __assert_fail ("p_90 == &l_343", "/tmp/tmphgl2ax7t.c", 740, __extension__ __PRETTY_FUNCTION__); }));
                        g_486++;
                    }
                }
                g_496--;
                (*l_499) = (*p_90);
                ((void) sizeof ((l_494 == &g_34 || l_494 == &g_68) ? 1 : 0), __extension__ ({ if (l_494 == &g_34 || l_494 == &g_68) ; else __assert_fail ("l_494 == &g_34 || l_494 == &g_68", "/tmp/tmphgl2ax7t.c", 747, __extension__ __PRETTY_FUNCTION__); }));
            }
            ++l_513;
        }
        ((void) sizeof ((l_360 == &g_34 || l_360 == &g_68 || l_360 == 0) ? 1 : 0), __extension__ ({ if (l_360 == &g_34 || l_360 == &g_68 || l_360 == 0) ; else __assert_fail ("l_360 == &g_34 || l_360 == &g_68 || l_360 == 0", "/tmp/tmphgl2ax7t.c", 752, __extension__ __PRETTY_FUNCTION__); }));
    }
    ((void) sizeof ((g_113 == &g_34 || g_113 == &g_68) ? 1 : 0), __extension__ ({ if (g_113 == &g_34 || g_113 == &g_68) ; else __assert_fail ("g_113 == &g_34 || g_113 == &g_68", "/tmp/tmphgl2ax7t.c", 755, __extension__ __PRETTY_FUNCTION__); }));
    ((void) sizeof ((p_90 == &l_343 || p_90 == &g_113) ? 1 : 0), __extension__ ({ if (p_90 == &l_343 || p_90 == &g_113) ; else __assert_fail ("p_90 == &l_343 || p_90 == &g_113", "/tmp/tmphgl2ax7t.c", 756, __extension__ __PRETTY_FUNCTION__); }));
    (*g_112) = (*g_112);
    g_518--;
    return (**p_90);
}
static int32_t ** func_93(uint32_t p_94, int32_t * p_95, int32_t p_96, int32_t ** const p_97)
{
    int8_t l_124 = 0x60L;
    uint8_t l_129 = 253UL;
    int32_t l_159 = 0x8B8566A4L;
    int32_t **l_181 = &g_113;
    int32_t l_211 = 0x7AE26BD8L;
    int32_t l_234 = 3L;
lbl_250:
    for (g_86 = (-20); (g_86 == 17); g_86 = safe_add_func_uint64_t_u_u(g_86, 4))
    {
        int32_t * const l_132 = &g_68;
        int32_t *l_135 = &g_68;
        int32_t l_149 = 0x596CDD17L;
        int32_t l_168 = 0x1A556116L;
        int64_t l_180 = 5L;
        if ((((safe_add_func_int16_t_s_s(0xCCC7L, 0xF08EL)) >= ((safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_s((((safe_mul_func_uint16_t_u_u(g_23, (((p_96 <= (&p_95 != &p_95)) <= ((-1L) < g_68)) && (p_94 > 0xDCL)))) | 3UL) > l_124), 9)), 8)) >= g_34)) <= (*g_113)))
        {
            int32_t *l_125 = &g_68;
            int32_t *l_126 = &g_68;
            int32_t *l_127 = &g_68;
            int32_t *l_128 = (void*)0;
            --l_129;
            if ((*g_113))
                continue;
        }
        else
        {
            int32_t **l_133 = (void*)0;
            int32_t **l_134 = (void*)0;
            int32_t l_152 = (-2L);
            l_135 = l_132;
            if ((*l_132))
                break;
            for (p_94 = (-27); (p_94 == 43); ++p_94)
            {
                int32_t *l_138 = &g_68;
                int32_t *l_139 = &g_68;
                int32_t *l_140 = &g_68;
                int32_t *l_141 = &g_68;
                int32_t *l_142 = &g_68;
                int32_t *l_143 = &g_68;
                int32_t l_144 = 0x82A8E6F9L;
                int32_t *l_145 = (void*)0;
                int32_t *l_146 = &l_144;
                int32_t *l_147 = &g_68;
                int32_t *l_148 = &l_144;
                int32_t *l_150 = &l_144;
                int32_t *l_151 = &g_68;
                int32_t l_153 = 0xB5BC1773L;
                int32_t *l_154 = &l_152;
                int32_t *l_155 = &l_153;
                int32_t *l_156 = &l_153;
                int32_t *l_157 = &l_144;
                int32_t *l_158 = &l_153;
                int32_t *l_160 = &l_153;
                int32_t *l_161 = (void*)0;
                int32_t *l_162 = &l_159;
                int32_t *l_163 = &l_144;
                int32_t *l_164 = &l_152;
                int32_t *l_165 = &l_152;
                int32_t *l_166 = &l_152;
                int32_t *l_167 = (void*)0;
                int32_t *l_169 = &l_153;
                int32_t *l_170 = (void*)0;
                int32_t *l_171 = &l_144;
                int32_t *l_172 = &l_153;
                int32_t *l_173 = &l_144;
                int32_t *l_174 = &l_153;
                int32_t *l_175 = &l_144;
                int32_t *l_176 = &l_159;
                (*l_135) = 0x36BC8474L;
                ++g_177;
                (*l_166) = (((0x896CL | l_180) ^ p_96) == ((void*)0 != l_181));
            }
        }
        if (((void*)0 == &g_113))
        {
            int32_t *l_182 = &l_149;
            int32_t *l_183 = &l_149;
            int32_t *l_184 = &l_149;
            int32_t *l_185 = &l_159;
            int32_t *l_186 = (void*)0;
            int32_t *l_187 = &g_68;
            int32_t l_188 = 0xB52C7FF4L;
            int32_t *l_189 = &l_149;
            int32_t *l_190 = &l_159;
            int32_t *l_191 = &l_149;
            int32_t *l_192 = &l_149;
            int32_t *l_193 = &l_168;
            int32_t *l_194 = &l_159;
            int32_t *l_195 = &l_168;
            int32_t *l_196 = &l_188;
            int32_t *l_197 = (void*)0;
            int32_t *l_198 = &l_149;
            int32_t *l_199 = (void*)0;
            int32_t *l_200 = &l_168;
            int32_t *l_201 = &g_68;
            int32_t *l_202 = &l_159;
            int32_t *l_203 = &l_149;
            int32_t *l_204 = &l_188;
            int32_t *l_205 = &l_168;
            int32_t l_206 = 1L;
            int32_t *l_207 = &l_168;
            int32_t *l_208 = &l_159;
            int32_t *l_209 = (void*)0;
            int32_t l_210 = 8L;
            int32_t *l_212 = &l_211;
            int32_t *l_213 = &l_149;
            int32_t *l_214 = &l_149;
            int32_t *l_215 = &l_188;
            int32_t *l_216 = &l_210;
            int32_t *l_217 = &l_210;
            int32_t *l_218 = &l_188;
            int32_t *l_219 = &l_168;
            int32_t *l_220 = &l_211;
            int32_t l_221 = 0xEB9EEC29L;
            int32_t *l_222 = &l_211;
            int32_t *l_223 = &l_149;
            int32_t *l_224 = &l_149;
            int32_t *l_225 = &l_159;
            int32_t *l_227 = &l_221;
            int32_t *l_228 = &l_206;
            int32_t *l_229 = &l_221;
            int32_t *l_230 = &l_149;
            int32_t *l_231 = (void*)0;
            int32_t *l_232 = &l_210;
            int32_t *l_233 = &l_210;
            (*l_132) = (**g_112);
            --g_235;
            l_218 = &l_188;
        }
        else
        {
            return &g_113;
        }
        (**g_112) = (((safe_rshift_func_uint16_t_u_s((((void*)0 != &g_113) > ((((safe_add_func_int8_t_s_s((safe_div_func_uint32_t_u_u((((((p_96 < 7L) >= (&p_95 == &g_113)) >= (safe_add_func_uint16_t_u_u((p_96 && (safe_mul_func_uint16_t_u_u(((void*)0 != (*g_112)), g_226))), (*l_132)))) && (-8L)) | g_83), (**g_112))), g_177)) ^ (*l_135)) & (*l_132)) ^ 0x9B7AB548L)), g_83)) || g_23) != (-7L));
    }
    if ((safe_rshift_func_int8_t_s_s(0x81L, (((0xCE40C6877B01F996LL < (((&p_95 == l_181) && 4L) >= p_96)) == g_86) || p_96))))
    {
        if (g_68)
            goto lbl_250;
    }
    else
    {
        int32_t *l_251 = &l_211;
        int32_t *l_252 = (void*)0;
        int32_t *l_253 = &l_211;
        int32_t *l_254 = (void*)0;
        int32_t *l_255 = &l_211;
        int32_t *l_256 = (void*)0;
        int32_t *l_257 = &l_159;
        int32_t *l_258 = &l_159;
        int32_t *l_259 = &l_159;
        int32_t *l_260 = &l_211;
        int32_t *l_261 = &l_159;
        int32_t l_262 = 0L;
        int32_t *l_263 = &l_262;
        int32_t *l_264 = &l_211;
        int32_t *l_265 = &l_262;
        int32_t *l_266 = (void*)0;
        int32_t *l_267 = &l_159;
        int32_t *l_268 = &l_234;
        int32_t *l_269 = &l_234;
        int32_t *l_270 = &l_159;
        int32_t *l_272 = &g_68;
        int32_t *l_273 = (void*)0;
        int32_t *l_274 = &g_68;
        int32_t *l_275 = (void*)0;
        int32_t *l_276 = &l_211;
        int32_t *l_277 = &l_234;
        int32_t *l_278 = &l_159;
        int32_t *l_280 = (void*)0;
        int32_t *l_281 = &l_159;
        int32_t *l_282 = &l_262;
        int32_t *l_283 = &l_211;
        int32_t l_284 = 0L;
        int32_t *l_285 = &g_68;
        int32_t *l_286 = &l_159;
        int32_t *l_287 = &l_262;
        int32_t *l_288 = &l_284;
        int32_t *l_289 = &l_234;
        int32_t *l_290 = &l_211;
        int32_t *l_292 = &l_159;
        int32_t *l_293 = &l_159;
        int32_t *l_294 = &l_284;
        int32_t *l_295 = &l_159;
        int32_t *l_296 = &l_234;
        int32_t *l_297 = &l_284;
        int32_t *l_298 = &l_234;
        int32_t *l_301 = &g_68;
        int32_t *l_302 = &l_262;
        int32_t *l_303 = (void*)0;
        int32_t *l_304 = &l_159;
        int32_t l_305 = 0x2FE74D0DL;
        int32_t *l_306 = &l_262;
        int32_t *l_307 = (void*)0;
        int32_t *l_308 = &l_211;
        g_309++;
    }
    if ((*p_95))
    {
        int32_t *l_312 = &l_234;
        int32_t *l_313 = &l_234;
        int32_t l_314 = 0L;
        int32_t *l_315 = &l_211;
        int32_t *l_316 = &l_159;
        int32_t *l_317 = &l_314;
        int32_t *l_318 = &l_211;
        int32_t *l_319 = &l_234;
        int32_t *l_320 = (void*)0;
        int32_t *l_321 = (void*)0;
        int32_t *l_322 = &l_234;
        int32_t *l_323 = &g_68;
        int32_t *l_324 = &l_211;
        int32_t *l_325 = &g_68;
        int32_t *l_326 = (void*)0;
        int32_t *l_327 = &l_314;
        int32_t l_328 = 0x976A6A2FL;
        int32_t *l_329 = &l_211;
        (*p_97) = (*g_112);
        --g_330;
    }
    else
    {
        int32_t *l_333 = (void*)0;
        l_333 = (*l_181);
        ((void) sizeof ((l_333 == &g_68) ? 1 : 0), __extension__ ({ if (l_333 == &g_68) ; else __assert_fail ("l_333 == &g_68", "/tmp/tmphgl2ax7t.c", 998, __extension__ __PRETTY_FUNCTION__); }));
    }
    return &g_113;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_23;
    csmith_sink_ = g_34;
    csmith_sink_ = g_68;
    csmith_sink_ = g_83;
    csmith_sink_ = g_86;
    csmith_sink_ = g_177;
    csmith_sink_ = g_226;
    csmith_sink_ = g_235;
    csmith_sink_ = g_271;
    csmith_sink_ = g_279;
    csmith_sink_ = g_291;
    csmith_sink_ = g_299;
    csmith_sink_ = g_300;
    csmith_sink_ = g_309;
    csmith_sink_ = g_330;
    csmith_sink_ = g_486;
    csmith_sink_ = g_496;
    csmith_sink_ = g_518;
    csmith_sink_ = g_521;
    csmith_sink_ = g_651;
    csmith_sink_ = g_660;
    csmith_sink_ = g_663;
    csmith_sink_ = g_767;
    csmith_sink_ = g_778;
    csmith_sink_ = g_780;
    csmith_sink_ = g_951;
    csmith_sink_ = g_957;
    csmith_sink_ = g_1076;
    csmith_sink_ = g_1092;
    csmith_sink_ = g_1136;
    csmith_sink_ = g_1147;
    csmith_sink_ = g_1174;
    platform_main_end(0,0);
    return 0;
}
