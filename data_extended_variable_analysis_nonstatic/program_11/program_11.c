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
static uint16_t g_8 = 65528U;
static int16_t g_32 = 0x9CEE;
static uint32_t g_84 = 0x45039A24;
static int32_t g_85 = 0x29A3A768;
static uint16_t g_128 = 0xCFE0;
static int32_t g_129 = (-1);
static int8_t g_180 = 0x68;
static int8_t g_181 = 0xAB;
static int8_t g_185 = (-4);
static int32_t g_193 = 0xA41A2CE7;
static int32_t g_288 = 5;
static uint16_t g_289 = 1U;
static int32_t g_314 = 0x7D7B11FA;
static uint16_t g_361 = 1U;
static uint32_t g_453 = 0xB8C2D583;
static uint32_t g_465 = 0x887CB2C0;
static int32_t g_466 = (-1);
static uint8_t g_524 = 0x9C;
static uint32_t g_543 = 0x64476A02;
static int32_t g_585 = 0xD8796C1E;
static int8_t g_590 = 3;
static uint8_t g_594 = 249U;
static uint32_t g_598 = 0xFD1BB63F;
static uint16_t g_600 = 0U;
static int16_t g_706 = 0x5BB8;
static uint32_t g_707 = 0x77A54CFC;
static int16_t g_714 = (-1);
static int32_t g_715 = 1;
static uint8_t g_719 = 0xCA;
static int16_t g_726 = 0x4E3D;
static uint16_t g_729 = 65535U;
static int16_t g_740 = 3;
static int32_t g_803 = 4;
static uint32_t g_807 = 4294967295U;
static int32_t g_891 = 0xD990FA4F;
static int16_t g_893 = 0x0698;
static uint32_t g_895 = 0x8606F11B;
static int32_t g_952 = 0x5998CE9E;
static uint16_t g_994 = 0x2C8C;
static int32_t g_1046 = 1;
static int32_t g_1047 = 0x5E17FB81;
static int32_t g_1048 = 1;
static int8_t g_1049 = 0;
static int8_t g_1050 = (-1);
static uint32_t g_1051 = 4294967295U;
static int32_t g_1054 = 0xB798D1A8;
static uint8_t g_1071 = 1U;
static uint16_t g_1160 = 0x999B;
inline static uint32_t func_1(void);
inline static int8_t func_2(int16_t p_3, int16_t p_4, int32_t p_5, uint32_t p_6, int16_t p_7);
static uint16_t func_12(int32_t p_13, const int16_t p_14, int32_t p_15);
inline static uint16_t func_17(uint32_t p_18);
static uint16_t func_21(uint32_t p_22, int16_t p_23, uint32_t p_24);
inline static int16_t func_25(int8_t p_26, int32_t p_27, int32_t p_28, uint16_t p_29, uint8_t p_30);
static int8_t func_33(const int16_t p_34, uint16_t p_35, uint32_t p_36, int8_t p_37);
inline static int16_t func_50(int32_t p_51, uint32_t p_52, int8_t p_53, int32_t p_54, uint16_t p_55);
inline static uint16_t func_60(const int8_t p_61, uint8_t p_62);
static uint32_t func_64(uint8_t p_65, int32_t p_66, int8_t p_67);
inline static uint32_t func_1(void)
{
    const int32_t l_9 = 0xF7D65121;
    uint8_t l_16 = 0x28;
    uint8_t l_743 = 251U;
    int32_t l_1055 = 9;
    int32_t l_1159 = 0x25C08400;
    if ((func_2(g_8, (l_1055 = ((g_1054 = (l_9 , ((safe_lshift_func_uint16_t_u_s(func_12(l_16, (func_17(g_8) <= (((l_9 != l_9) < l_9) > (((0 && l_16) < 0x177F) >= l_743))), l_743), 1)) != g_1046))) & g_1047)), l_743, l_16, l_743) , 1))
    {
        uint32_t l_1110 = 0xCD8A4DA5;
        int32_t l_1131 = (-1);
        uint32_t l_1132 = 0x3D6D626F;
        int32_t l_1133 = 1;
        for (g_585 = 4; (g_585 >= (-9)); --g_585)
        {
            uint32_t l_1076 = 1U;
            uint32_t l_1092 = 0U;
            int32_t l_1093 = 9;
            uint32_t l_1127 = 0x53E0ADFA;
            int32_t l_1128 = 0xACCC10CC;
            uint32_t l_1129 = 1U;
            int16_t l_1130 = 0xC1C9;
            g_129 = (l_1076 > (safe_add_func_uint8_t_u_u(g_32, (l_1093 |= (l_1055 = ((safe_add_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((safe_add_func_int8_t_s_s(g_543, (safe_sub_func_uint8_t_u_u(1U, ((safe_mod_func_int8_t_s_s((!((g_600 & ((l_16 > (-3)) , ((((((g_180 & ((safe_lshift_func_int8_t_s_u(0x6A, l_9)) ^ 0x371963E7)) ^ 0U) < g_994) & l_743) ^ 255U) & g_594))) , g_1071)), l_1092)) , l_1055))))), g_585)), g_8)) , l_1055))))));
            l_1133 = ((0x432B || (l_1055 = 0x6CE0)) ^ (safe_sub_func_uint16_t_u_u(1U, (g_714 = ((l_1132 = (g_181 |= ((safe_sub_func_uint8_t_u_u(((g_1049 = (safe_mod_func_uint16_t_u_u(((((g_180 <= ((l_1131 = (safe_sub_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_s((safe_div_func_uint8_t_u_u(250U, ((((((((((safe_lshift_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u(0U, l_1110)), 2)) ^ (safe_add_func_uint32_t_u_u((safe_mod_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s((l_1128 &= ((safe_div_func_int8_t_s_s((g_289 <= (safe_div_func_uint16_t_u_u(((safe_div_func_int32_t_s_s((safe_sub_func_uint16_t_u_u(((safe_add_func_int8_t_s_s((g_994 != g_891), g_8)) <= l_9), 0xF497)), 0xC807513C)) == 65535U), l_1127))), l_1093)) , g_193)), g_952)), g_314)), l_16))) ^ g_85) == 0xB58C9A58) == 0xCE83) , 5) | l_1129) | g_85) || l_1129) && l_1130))), l_9)) == 0x9F), 0x92))) | g_598)) ^ g_1054) , 1) == g_1071), 6U))) < 0xBD), g_952)) | g_719))) <= g_543)))));
            l_1131 ^= (((((safe_rshift_func_int16_t_s_u(4, 3)) , (safe_sub_func_uint16_t_u_u(((safe_add_func_int16_t_s_s(((((l_1055 = (safe_lshift_func_int8_t_s_u((l_1093 = (((l_1128 = ((safe_lshift_func_uint8_t_u_u((g_524--), (safe_add_func_uint32_t_u_u((+(safe_add_func_int16_t_s_s(l_1076, (((g_714 = ((((safe_lshift_func_int16_t_s_s((((safe_lshift_func_uint8_t_u_s(((((((l_1132 < ((g_994 >= g_129) == (g_895 , l_1110))) <= ((safe_rshift_func_int16_t_s_u((g_729 , ((l_1130 & 0x5445) | l_9)), 2)) && l_1076)) <= 1) ^ (-5)) || g_129) ^ 1U), g_1050)) & 4294967295U) || 1), g_453)) >= l_1128) | g_361) <= 0x7B7519AF)) <= 1) >= l_16)))), l_1055)))) == (-1))) >= g_288) , l_1132)), g_466))) & g_707) < g_706) < 0), g_893)) == l_1132), l_1129))) || g_1048) > g_180) | 0U);
            if (g_288)
                continue;
        }
        ++g_1160;
    }
    else
    {
        g_85 ^= (-4);
        g_85 = (l_1159 = 0xF3662933);
    }
    return l_743;
}
inline static int8_t func_2(int16_t p_3, int16_t p_4, int32_t p_5, uint32_t p_6, int16_t p_7)
{
    uint32_t l_1070 = 0x0645EE44;
    int32_t l_1072 = 0x8FDB3B11;
    int32_t l_1073 = 0x0235F57A;
    l_1073 |= (g_1050 == (safe_div_func_uint16_t_u_u(((safe_mod_func_int32_t_s_s((0x2A03F1FF < ((safe_add_func_int8_t_s_s(((g_1050 , (l_1072 = (g_585 , (safe_rshift_func_int16_t_s_s(((((((g_594 && ((safe_mod_func_int32_t_s_s((g_289 & ((safe_lshift_func_uint8_t_u_s((p_5 || (g_543 > ((g_1071 &= ((((safe_add_func_int8_t_s_s(0xFB, g_85)) , g_706) & g_994) > l_1070)) , l_1070))), p_5)) & 1)), p_5)) != g_952)) , 1) == (-6)) || 3) <= g_952) <= g_600), 7))))) > 0xA6FFD799), g_1046)) >= g_740)), 0x069A4CCF)) && 0U), p_7)));
    l_1073 &= g_714;
    return p_6;
}
static uint16_t func_12(int32_t p_13, const int16_t p_14, int32_t p_15)
{
    int32_t l_750 = (-1);
    int32_t l_763 = 0x9963C514;
    int32_t l_789 = (-4);
    int16_t l_852 = 0x4924;
    int32_t l_894 = 0x19E723B0;
    g_129 = ((((safe_div_func_int16_t_s_s(((((safe_lshift_func_int16_t_s_s((safe_add_func_int32_t_s_s(((l_750 ^ 0x14) , p_13), p_15)), 12)) , l_750) , g_707) , p_15), (l_763 = (+(((!(safe_sub_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(252U, ((safe_lshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(((-1) && l_750), 2)), 3)) || g_714))), p_15)), (-1)))) || 4294967295U) && g_32))))) && g_600) > 0x7A58) , (-1));
    g_129 = (((safe_sub_func_int16_t_s_s((((safe_mod_func_int16_t_s_s(((l_750 & p_15) , (safe_sub_func_uint32_t_u_u((((safe_unary_minus_func_uint32_t_u(((g_600 , ((g_85 | (l_763 || ((g_543++) , (safe_rshift_func_int8_t_s_u((safe_sub_func_int32_t_s_s(0xF853297B, ((p_13 ^ (safe_div_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_u((safe_add_func_uint8_t_u_u(((!(l_763 = (safe_sub_func_int16_t_s_s((~2), (((p_14 & p_14) , g_719) | 1U))))) < 0x2E), 1U)), l_750)) || l_763), p_13))) > g_361))), l_789))))) || 0U)) > 0x37))) && l_750) == g_181), l_750))), l_750)) <= p_13) > l_750), 0x7C6D)) >= p_14) || g_543);
    for (g_185 = (-24); (g_185 > 1); ++g_185)
    {
        uint32_t l_792 = 0xCC25D41F;
        int32_t l_804 = 0x025326A3;
        int32_t l_805 = 0x977BFDFE;
        int32_t l_806 = 0;
        int32_t l_896 = (-1);
        uint8_t l_1004 = 0x7D;
        int16_t l_1025 = 0x3BD1;
        int16_t l_1042 = 0x8F6A;
        --l_792;
        l_763 = ((((p_14 == (safe_rshift_func_uint8_t_u_s(p_14, 2))) , 5U) | (safe_rshift_func_int16_t_s_s((p_13 <= ((g_729 > (safe_div_func_int8_t_s_s((g_706 || (g_803 = ((((l_750 = (safe_rshift_func_uint8_t_u_u(p_14, (l_792 <= g_32)))) , l_763) >= l_763) != g_32))), 255U))) || 4294967292U)), 0))) > p_14);
        ++g_807;
        for (g_714 = 19; (g_714 != 5); g_714 = safe_sub_func_int16_t_s_s(g_714, 7))
        {
            int16_t l_839 = 0;
            int32_t l_844 = (-9);
            int32_t l_847 = 0;
            int32_t l_1045 = 0x6A8848A2;
            l_750 &= (safe_add_func_uint8_t_u_u(((safe_sub_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s(((safe_sub_func_uint32_t_u_u(((((safe_mod_func_int8_t_s_s(0x17, (safe_rshift_func_int8_t_s_u(((safe_div_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(((0x8710 == (-4)) != (((safe_add_func_uint16_t_u_u((+g_288), ((safe_sub_func_uint16_t_u_u(((9U & (safe_div_func_uint32_t_u_u(l_763, 4294967293U))) > (safe_sub_func_uint8_t_u_u((l_805 == ((g_129 < g_314) >= l_789)), 0xAC))), l_805)) , 0x0815))) == 0x48) != l_839)), l_763)), 0x31)) ^ g_32), 1)))) , p_15) & l_789) , 4294967286U), g_8)) ^ g_128), l_804)), p_15)) != g_8), l_806));
            if ((g_85 = (~((l_750 = 0x9F) , (~((l_750 &= ((safe_sub_func_int16_t_s_s(l_806, (l_844 = (-8)))) && ((safe_sub_func_uint16_t_u_u(0x421F, (l_847 , (safe_sub_func_uint32_t_u_u(((safe_mod_func_int32_t_s_s((249U ^ ((((0xD5 != p_15) , 0x2720) != p_14) > p_15)), 0x04C33061)) & g_543), l_852))))) , g_524))) > g_740))))))
            {
                uint32_t l_889 = 0x4F99A347;
                uint32_t l_890 = 4294967291U;
                int32_t l_970 = 0x1C4369A8;
                int32_t l_1005 = 0x01022D71;
                for (l_804 = 0; (l_804 > 4); l_804 = safe_add_func_uint32_t_u_u(l_804, 7))
                {
                    int16_t l_888 = 0;
                    int32_t l_892 = (-1);
                    int32_t l_1031 = 0x8679DBFF;
                    g_895 &= ((safe_lshift_func_int16_t_s_s((l_894 ^= (((l_844 &= ((((((safe_lshift_func_uint16_t_u_u(65535U, (~(!(safe_mod_func_int16_t_s_s(l_763, (~((safe_add_func_uint16_t_u_u(((~((g_891 = (g_85 || (0 || (((l_805 |= (safe_add_func_uint32_t_u_u(((l_750 = (safe_div_func_int16_t_s_s(((g_32 = (safe_sub_func_uint16_t_u_u((g_289 = p_15), ((safe_lshift_func_int16_t_s_u((g_726 = 0x4689), ((safe_mod_func_int32_t_s_s(l_847, (((g_590 && (safe_div_func_uint16_t_u_u(((safe_mod_func_uint16_t_u_u(((g_129 |= ((safe_add_func_uint16_t_u_u((+((safe_add_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_u((l_888 = g_314), 0)) , p_14), g_807)) || l_888)), 0x3F74)) & 0xD1EC)) != l_847), l_839)) == 0xF6), 0xEBFF))) > g_466) & p_15))) ^ l_750))) || l_889)))) ^ 3U), p_14))) != l_763), p_14))) >= l_890) > l_763)))) & l_892)) < p_15), g_893)) <= p_15)))))))) && 8U) | 1) | 0x9C121924) != 1U) == p_15)) , 0x1B636169) | l_806)), 11)) && p_14);
                    if ((g_129 &= 0xB23FF94A))
                    {
                        int8_t l_923 = 7;
                        g_129 ^= (l_896 > (safe_add_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_s((g_891 == g_715), 10)) & (safe_lshift_func_int8_t_s_u(((g_84 | ((safe_add_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(((l_892 = ((safe_sub_func_int16_t_s_s((!(p_14 >= (((safe_mod_func_uint8_t_u_u(0x05, (+(safe_unary_minus_func_int32_t_s(((safe_add_func_uint16_t_u_u((+((safe_sub_func_int32_t_s_s((((((0x2A < 253U) && 9U) && 1) & p_14) <= g_128), p_14)) == 0U)), g_600)) > p_14)))))) <= 0U) < l_923))), g_714)) ^ g_128)) , p_15), 4)), 248U)) && 3)) < 0x69452DE5), g_361))), 12)) || l_923), 0x03E5)), 3U)));
                        g_85 ^= ((safe_rshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_u(((0xC2F70400 || (safe_mod_func_uint8_t_u_u((+(--g_128)), (safe_unary_minus_func_int32_t_s((0xAEE287AA & (l_844 = ((safe_lshift_func_int8_t_s_u(((safe_add_func_int8_t_s_s(g_453, (safe_sub_func_uint8_t_u_u(((g_729 = (((5 ^ (((safe_rshift_func_int16_t_s_u((safe_sub_func_int8_t_s_s((((safe_div_func_int16_t_s_s(g_714, l_889)) , p_15) , 0x8A), ((safe_div_func_uint32_t_u_u(((safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(g_706, l_847)), 5)) >= p_14), p_15)) == g_952))), p_14)) , p_13) >= g_719)) ^ g_952) & p_13)) && 0x3F7A), 249U)))) & l_892), 0)) != 0xA315A2E9)))))))) >= p_15), 3)), 7)) < l_923);
                    }
                    else
                    {
                        int32_t l_961 = 4;
                        g_129 = ((l_789 != 0U) == ((+0x16) < ((p_13 , (safe_rshift_func_uint8_t_u_u(1U, 6))) && (~(l_970 = (safe_add_func_uint8_t_u_u(((safe_mod_func_uint8_t_u_u((l_847 |= l_961), ((safe_add_func_uint32_t_u_u((((g_598 , ((((safe_div_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u(1U, p_13)), l_961)), p_13)) || g_893) || l_805) >= p_13)) != g_524) < g_726), g_714)) || g_128))) && g_706), 0x83)))))));
                        l_763 |= 0x96BB040F;
                        g_85 = ((safe_sub_func_uint32_t_u_u((l_844 > (l_763 = ((safe_add_func_uint16_t_u_u(((l_892 = l_806) && ((l_750 &= (l_847 = (safe_add_func_int16_t_s_s(((p_14 , ((((safe_sub_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_s(l_806, (safe_lshift_func_uint8_t_u_u(1U, ((((safe_rshift_func_uint8_t_u_s(l_847, (~(safe_add_func_uint32_t_u_u(((((g_994 = (l_970 = ((!(safe_mod_func_uint8_t_u_u((((+(0x5EE152CA >= l_806)) != ((((g_193 && p_14) || l_896) & 8U) < l_889)) > p_14), l_852))) || 0U))) >= 1) < p_13) == 0xC775), l_890))))) >= l_852) < g_600) < g_314))))), g_314)), 65535U)) || g_288) == g_361) , 2U)) < p_15), l_805)))) || l_892)), 65535U)) || l_750))), p_14)) , (-1));
                    }
                    if (((g_193 >= (safe_lshift_func_uint16_t_u_u(65535U, 10))) , (safe_add_func_int8_t_s_s((((((l_763 &= (safe_unary_minus_func_int32_t_s(g_994))) | ((g_180 = (((l_970 == (g_524++)) < (safe_lshift_func_uint16_t_u_s(((l_1005 ^= l_1004) != (l_844 & ((-1) == (l_847 == (4294967289U > p_15))))), g_600))) < 0xD7)) == 0x77)) || (-7)) != l_892) > g_590), g_128))))
                    {
                        int8_t l_1010 = 0x72;
                        l_847 = (((255U == g_594) <= (l_844 = (safe_sub_func_uint8_t_u_u((l_970 ^= l_889), ((0x4F1FCDD3 <= 0xA1487E6D) != (safe_sub_func_int32_t_s_s(l_847, l_805))))))) || ((((l_1010 ^= p_13) , ((safe_div_func_uint32_t_u_u(l_750, 1)) && l_894)) | g_180) > 0x3D));
                    }
                    else
                    {
                        int32_t l_1019 = 1;
                        int32_t l_1026 = 1;
                        l_1026 = ((((((((l_892 = 0x3104) | ((0xF42FAE3F != g_84) < (safe_rshift_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(65535U, ((safe_div_func_uint32_t_u_u(0x7F57D6A1, ((l_1019 = (l_844 &= (g_719 = 0x1B))) && ((((l_1005 = 0x5D30) && ((((safe_div_func_uint32_t_u_u(((safe_unary_minus_func_uint16_t_u(((safe_add_func_int16_t_s_s((p_13 >= (g_600 ^ p_15)), p_13)) , 65532U))) , l_894), l_1025)) <= p_13) | 8U) & 1)) == 0xEE7F) == 0xADCA)))) & p_15))), p_13)))) , p_15) | l_890) , l_1004) , l_763) > p_13) < 0xB10E);
                        g_85 &= (((p_15 > (safe_mod_func_uint8_t_u_u((0xBB08 && ((l_970 = (((((--g_289) && (l_1005 &= l_844)) , l_1031) && ((safe_sub_func_int8_t_s_s(((g_952 > (!(safe_rshift_func_uint16_t_u_s((+(l_847 = (255U > (safe_rshift_func_uint16_t_u_u((l_1031 = 65528U), ((safe_mod_func_uint8_t_u_u((255U == (p_15 <= 0)), p_15)) && p_14)))))), l_763)))) >= 0x7C2D467C), l_892)) || l_1042)) >= l_1004)) > 8)), l_890))) < 0) >= 0xBC36);
                        l_970 = (safe_rshift_func_uint16_t_u_s(g_590, 11));
                    }
                }
                ++g_1051;
            }
            else
            {
                l_1045 &= 0x5695DE9A;
            }
        }
    }
    return g_803;
}
inline static uint16_t func_17(uint32_t p_18)
{
    uint32_t l_31 = 0xCD833989;
    int32_t l_56 = 0x8140A971;
    int32_t l_57 = 0xF0451807;
    int8_t l_597 = 0x8C;
    int32_t l_599 = (-2);
    const int16_t l_686 = 0xD78A;
    int16_t l_687 = 1;
    int32_t l_725 = 8;
    uint32_t l_727 = 0xC1BB2638;
    int32_t l_728 = 4;
    l_728 = ((((safe_rshift_func_uint8_t_u_s((g_726 |= (((func_21(p_18, func_25((l_687 = ((l_31 >= (((g_32 = (-3)) , func_33((g_600 |= ((((safe_rshift_func_int16_t_s_u((-3), 15)) ^ ((l_599 = (((safe_lshift_func_int8_t_s_s((safe_div_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u((g_598 &= (((l_56 = (safe_div_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_u((func_50(g_32, p_18, p_18, (l_56 | (l_57 = p_18)), l_56) & p_18), 4)) , l_31), l_31))) < 0) == l_597)), (-1))), p_18)), 3)) <= l_597) != l_31)) & p_18)) , p_18) && l_31)), g_590, p_18, p_18)) , l_686)) , g_129)), g_590, l_31, g_8, g_590), g_590) == l_725) , 0x1D8366D1) == p_18)), 5)) <= g_8) & l_725) & l_727);
    g_729++;
    for (g_361 = 0; (g_361 != 27); g_361 = safe_add_func_int8_t_s_s(g_361, 9))
    {
        l_57 = ((safe_lshift_func_int8_t_s_u(((((((safe_add_func_int32_t_s_s((safe_div_func_uint16_t_u_u(0x7833, g_600)), (p_18 , (--p_18)))) > l_725) , ((g_129 <= l_597) || 0x99D34D6E)) < (((((g_466 > (((l_728 , (-3)) > 0xD2) , 0xC4)) >= l_687) >= 0xC897231D) ^ 1U) & g_598)) ^ 0x2845) & g_289), 5)) <= 246U);
    }
    return l_57;
}
static uint16_t func_21(uint32_t p_22, int16_t p_23, uint32_t p_24)
{
    uint32_t l_724 = 0x26394AC3;
    l_724 &= (safe_rshift_func_int16_t_s_u(1, g_32));
    return p_22;
}
inline static int16_t func_25(int8_t p_26, int32_t p_27, int32_t p_28, uint16_t p_29, uint8_t p_30)
{
    int32_t l_703 = 0x59AE5ADF;
    int32_t l_708 = (-10);
    int32_t l_709 = 0;
    int32_t l_710 = 2;
    int32_t l_711 = 0xB602E002;
    int8_t l_712 = 0x27;
    int32_t l_713 = 0x7A8461DF;
    int32_t l_716 = (-1);
    int32_t l_717 = (-3);
    int32_t l_718 = 0x36FAE6D1;
    for (g_598 = 0; (g_598 > 8); g_598 = safe_add_func_uint16_t_u_u(g_598, 2))
    {
        const int8_t l_702 = 0x40;
        p_28 = (((safe_rshift_func_int8_t_s_u(((p_26 == 0x23D630D4) >= ((safe_div_func_uint8_t_u_u(((g_707 = (g_706 &= (safe_mod_func_int8_t_s_s(((safe_sub_func_int32_t_s_s(((safe_add_func_int16_t_s_s((((safe_div_func_int32_t_s_s((l_702 , l_703), p_26)) < 0U) <= ((p_28 > (0x6C > (safe_lshift_func_int8_t_s_u(0x7F, p_26)))) || l_702)), l_702)) >= 0xDF6B), 0xC0AECC13)) , g_466), l_703)))) , l_702), g_289)) <= l_702)), 5)) & 2U) != l_703);
    }
    --g_719;
    return g_289;
}
static int8_t func_33(const int16_t p_34, uint16_t p_35, uint32_t p_36, int8_t p_37)
{
    const int16_t l_630 = 0x903E;
    int32_t l_631 = 0xF6A4FDCA;
    int32_t l_632 = 0x1F151CA1;
    int8_t l_634 = 0xB0;
    int32_t l_654 = 1;
    int32_t l_684 = 0x231C7CB9;
    int32_t l_685 = (-9);
    g_85 &= (p_34 > p_35);
    for (g_129 = 0; (g_129 < 26); ++g_129)
    {
        int16_t l_629 = (-2);
        int32_t l_633 = 0x00C165BA;
        int32_t l_635 = 0x3DAB9E81;
        l_635 = (((p_34 ^ ((((255U != (((p_35 = p_35) , (safe_sub_func_int8_t_s_s((((safe_add_func_uint8_t_u_u((!(4294967289U != g_185)), ((safe_mod_func_int32_t_s_s((l_633 = ((safe_add_func_uint8_t_u_u((g_594 = ((l_632 = ((safe_rshift_func_int8_t_s_s((safe_add_func_uint32_t_u_u(g_600, (safe_add_func_uint16_t_u_u((l_631 = ((((safe_add_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((safe_div_func_uint32_t_u_u((((+((g_85 ^ ((safe_rshift_func_uint16_t_u_u((safe_add_func_int8_t_s_s(((g_289 = (l_629 | p_34)) , l_629), g_361)), 7)) | l_630)) , 0xF4BA8D89)) & 1) , 1U), p_36)), 4)), 1)) ^ g_185) & 1U) >= p_34)), p_37)))), 4)) && p_37)) , 0xED)), p_37)) , 0x792D11FC)), p_35)) < p_35))) , p_37) , g_314), l_629))) , l_630)) , 0x734205D2) , l_630) && l_633)) | l_634) , g_453);
        l_654 ^= (g_180 == ((p_37 || (((g_84 && (safe_div_func_uint32_t_u_u((safe_div_func_uint8_t_u_u((((safe_div_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s((l_632 &= (g_128 = (safe_add_func_int16_t_s_s((((safe_mod_func_uint8_t_u_u(((safe_mod_func_int32_t_s_s((p_36 & ((((l_633 = (l_635 = (l_629 == (255U || l_631)))) >= ((safe_rshift_func_int8_t_s_u(p_37, 2)) , ((safe_mod_func_uint16_t_u_u(g_128, l_631)) == l_630))) | l_629) , 1U)), l_629)) && p_34), (-5))) >= g_129) == 1), l_631)))), p_37)), l_629)) & p_36) <= g_594), l_629)), 0x5E48E1CB))) > g_288) > g_466)) , l_633));
    }
    l_631 = (safe_mod_func_uint16_t_u_u((((g_585 = l_634) , (l_685 ^= (l_630 >= (0xC2FE1B02 ^ (((safe_sub_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u((l_654 == ((safe_rshift_func_uint16_t_u_s((((l_684 |= (safe_lshift_func_uint8_t_u_u(((safe_add_func_int8_t_s_s((safe_mod_func_int8_t_s_s(((p_36 = ((safe_mod_func_int32_t_s_s(((((safe_div_func_uint32_t_u_u((((safe_sub_func_uint16_t_u_u(((+(--g_594)) <= p_36), (safe_rshift_func_int16_t_s_u((p_36 , (safe_mod_func_uint32_t_u_u((((l_630 , l_631) <= ((safe_lshift_func_uint16_t_u_u(65534U, 8)) , p_36)) || l_632), 0x65DB7B92))), 8)))) > 0x27) != g_590), p_34)) > 0x6F86) <= p_34) == p_36), g_8)) || 0xC6)) >= l_634), p_34)), 0x49)) != (-7)), p_37))) , 0x8285) || 0U), p_34)) == p_35)), 65535U)), p_37)) , p_34) , g_288))))) == g_289), g_600));
    return l_654;
}
inline static int16_t func_50(int32_t p_51, uint32_t p_52, int8_t p_53, int32_t p_54, uint16_t p_55)
{
    const int16_t l_63 = (-1);
    int32_t l_70 = 0x42039CE8;
    uint8_t l_586 = 6U;
    int32_t l_587 = (-10);
    int32_t l_588 = (-1);
    int32_t l_589 = 6;
    int16_t l_591 = 0x476E;
    int32_t l_592 = 3;
    int32_t l_593 = 1;
    p_51 = (safe_lshift_func_uint16_t_u_s(func_60(l_63, ((func_64(g_32, ((safe_sub_func_int16_t_s_s((-10), (g_32 , ((-1) == p_52)))) , (l_70 ^= p_51)), p_54) , p_55) >= 5)), g_8));
    l_587 |= ((g_466 ^ (safe_mod_func_int8_t_s_s(((p_55 = 65535U) == (safe_add_func_uint8_t_u_u(((safe_add_func_int8_t_s_s(((safe_div_func_int32_t_s_s((((((~g_314) && (((safe_add_func_uint8_t_u_u(((l_70 |= (safe_lshift_func_uint8_t_u_u(g_185, (g_288 < p_54)))) < (((65531U <= ((safe_sub_func_uint16_t_u_u(((((g_585 = (g_128 ^ 0x6CF4)) <= g_543) ^ p_51) <= l_63), (-3))) && l_63)) , g_128) , p_54)), g_543)) ^ p_51) >= g_129)) , l_70) <= 4294967290U) == l_63), 0x4396A70D)) | l_586), 0xD9)) != g_8), l_586))), l_586))) || p_54);
    g_594++;
    p_54 |= (-6);
    return g_314;
}
inline static uint16_t func_60(const int8_t p_61, uint8_t p_62)
{
    int32_t l_536 = 1;
    int32_t l_541 = 0x7CF21852;
    int32_t l_542 = 6;
    uint16_t l_544 = 0xB38F;
    uint16_t l_569 = 0U;
    g_85 |= ((g_543 &= ((safe_sub_func_int16_t_s_s((g_524 |= (g_32 = (safe_add_func_int8_t_s_s(g_466, g_361)))), ((l_542 |= (safe_sub_func_int16_t_s_s((0x85 > 0x99), (~(safe_rshift_func_uint16_t_u_s(((((l_541 = ((safe_lshift_func_int16_t_s_u(p_61, (safe_sub_func_int32_t_s_s(((safe_sub_func_int32_t_s_s(l_536, (safe_mod_func_uint8_t_u_u((g_289 < p_62), ((safe_mod_func_uint32_t_u_u((g_181 ^ l_536), g_465)) || p_62))))) , (-7)), 0x30A02638)))) & 0x28BE9F7A)) > 7) , p_62) != 0), g_128)))))) ^ 0xC15D))) & p_62)) ^ p_61);
    l_542 = 0x835956C4;
    g_85 = (l_544 <= ((g_128 == (safe_lshift_func_int8_t_s_s(((((safe_lshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_u((((((safe_lshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_s(g_465, p_62)), 7)) == ((g_32 &= l_542) != p_62)) != (safe_add_func_uint32_t_u_u((safe_div_func_int32_t_s_s((((safe_div_func_int16_t_s_s((l_544 != g_181), (((safe_mod_func_uint16_t_u_u((safe_div_func_uint8_t_u_u((l_541 = ((((((safe_lshift_func_uint16_t_u_u(((safe_mod_func_int8_t_s_s(((g_180 < 0x02A0FDBC) > 253U), p_61)) & g_128), p_61)) && 7U) & g_524) || l_541) | g_128) == 8U)), l_542)), 0x614B)) != g_314) ^ g_453))) , p_61) ^ 0U), g_8)), 0x4F25B496))) && g_84) && g_85), 4)), l_542)) > 0x77) > l_569) > p_62), 7))) , (-4)));
    l_542 = p_62;
    return g_180;
}
static uint32_t func_64(uint8_t p_65, int32_t p_66, int8_t p_67)
{
    uint32_t l_71 = 0x863E3202;
    int16_t l_80 = (-1);
    uint16_t l_83 = 0U;
    uint16_t l_90 = 0x0705;
    int32_t l_97 = 1;
    int32_t l_108 = 7;
    int8_t l_176 = 0xE3;
    const int32_t l_177 = 0xD581DC2E;
    int32_t l_310 = 0xC2CD189F;
    const int16_t l_313 = 0x412E;
    uint32_t l_448 = 0xAA096E82;
    int32_t l_518 = (-7);
    uint32_t l_519 = 4294967295U;
    l_71++;
    g_85 = ((safe_rshift_func_int8_t_s_s((l_71 >= 0xBA60), ((0xC62B != ((g_84 &= ((((0xF302D78B & (safe_rshift_func_uint8_t_u_s(((l_71 , l_71) ^ 0x7A065BBD), ((((safe_add_func_uint8_t_u_u(l_80, (safe_sub_func_int32_t_s_s((((p_66 , 4) == p_67) ^ l_71), p_65)))) != p_66) ^ 0) && g_32)))) <= g_32) < l_83) >= 0xF15F1D34)) ^ l_71)) , 0x3D))) && 0x39C3);
    if ((+(+(((((p_66 = p_65) , (((safe_rshift_func_uint8_t_u_s(l_90, 7)) >= p_67) <= ((l_108 |= (((g_32 = (safe_lshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_s((p_65 = l_83), g_85)) > ((l_97 = 0x774C) ^ (safe_add_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((((safe_mod_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u(2U, l_90)), (safe_mod_func_uint8_t_u_u(g_8, l_90)))) > p_66) > g_84), 4)), p_67)))), 7)), 6))) , p_66) || 1)) || 0xC378))) , 65528U) != p_67) < 1U))))
    {
        int32_t l_113 = (-3);
        int32_t l_114 = 0xB41A2416;
        int32_t l_127 = 0xBD83FE2F;
        uint32_t l_272 = 0U;
        int32_t l_337 = 0x15BDB47C;
        int32_t l_411 = (-1);
        int16_t l_493 = 7;
        int32_t l_517 = 0x93532996;
        if ((safe_div_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u(l_113, (((g_84 & (l_114 = 0x6D09)) ^ ((safe_mod_func_int8_t_s_s(0, ((((((p_67 > (((g_129 = (g_32 > ((0x7AFB >= l_71) , (safe_unary_minus_func_int32_t_s(((safe_div_func_int16_t_s_s((((~(safe_add_func_int16_t_s_s((g_128 = (((((safe_lshift_func_int16_t_s_u(((l_108 = l_127) | 0xFEA0), 6)) | 0x585B) >= l_113) < 1U) == 0U)), l_113))) , 0x6318) , p_66), p_67)) != 0)))))) , (-1)) > g_8)) , p_67) , p_67) == p_65) , p_67) , g_129))) || 0xA3)) != p_67))), p_66)))
        {
            int16_t l_148 = 1;
            int32_t l_182 = 0xD186C8CC;
            int32_t l_183 = 0x04F71531;
            uint32_t l_188 = 4294967291U;
            for (l_127 = 20; (l_127 >= 5); l_127--)
            {
                return p_65;
            }
            if ((safe_sub_func_int16_t_s_s((safe_add_func_int8_t_s_s((((safe_lshift_func_uint8_t_u_u(((((safe_sub_func_int32_t_s_s(((g_128 = ((safe_mod_func_int32_t_s_s(g_129, ((safe_unary_minus_func_uint16_t_u(((g_32 || (safe_rshift_func_int8_t_s_s((((!(l_113 = ((safe_div_func_uint32_t_u_u(p_65, ((l_114 |= 247U) ^ (l_127 || g_84)))) , (4294967295U == p_65)))) | 65535U) >= g_8), 6))) , p_67))) | p_65))) , l_148)) < l_97), g_32)) >= p_65) , g_32) & l_148), p_65)) | 0x59) <= l_90), g_85)), 4U)))
            {
                int32_t l_178 = 1;
                int32_t l_179 = (-1);
                uint8_t l_184 = 1U;
                uint32_t l_253 = 3U;
                for (l_148 = 0; (l_148 <= 27); l_148 = safe_add_func_int32_t_s_s(l_148, 7))
                {
                    return p_65;
                }
                if ((g_85 ^= (g_129 = ((safe_div_func_int16_t_s_s((g_32 ^ ((((l_183 = ((safe_lshift_func_uint16_t_u_s(((((((0x16371A01 == ((p_66 || (safe_lshift_func_uint16_t_u_u((((safe_lshift_func_uint16_t_u_u((l_182 = (g_8 >= (g_181 = (((g_180 ^= (safe_rshift_func_uint16_t_u_u((((safe_add_func_int32_t_s_s((l_178 |= (safe_lshift_func_int16_t_s_u((4294967294U == (safe_add_func_int8_t_s_s((safe_div_func_int8_t_s_s((safe_unary_minus_func_int16_t_s(((g_128 ^ (safe_lshift_func_uint8_t_u_u(l_114, (0xF6D8A0C8 > ((safe_add_func_int32_t_s_s(((((safe_lshift_func_int16_t_s_u(0x5A1E, p_65)) ^ 0x69B8) , p_65) & l_176), p_65)) > 0xE64E))))) | p_67))), g_128)), l_177))), 11))), g_84)) > l_179) == g_84), 6))) == g_129) | p_66)))), l_148)) != g_84) > l_176), 5))) == g_84)) , l_114) , p_65) || l_178) >= l_179) ^ l_83), l_114)) ^ p_65)) || 0x8C4D5004) || l_113) & g_84)), 0x73C8)) > l_184))))
                {
                    g_129 = (l_97 = (-9));
                    if ((((g_185 &= g_129) && (g_85 , (g_185 ^= (g_181 = (4294967295U > (((0xEB | (p_65 && 0x6E)) < (safe_sub_func_uint8_t_u_u(((((l_188 = (l_183 <= p_65)) < (g_193 = ((safe_add_func_uint16_t_u_u(((safe_mod_func_uint8_t_u_u((l_179 || p_65), (-9))) , 1U), 1U)) , g_181))) != g_180) && g_180), l_178))) && 0xDDC8)))))) == 65533U))
                    {
                        return l_113;
                    }
                    else
                    {
                        return g_32;
                    }
                }
                else
                {
                    uint32_t l_202 = 5U;
                    int32_t l_205 = 3;
                    int32_t l_230 = (-1);
                    uint32_t l_231 = 0x00ABAC2E;
                    int32_t l_251 = (-1);
                    g_85 &= ((((safe_add_func_int32_t_s_s(((safe_rshift_func_int16_t_s_u(p_67, 0)) & ((((safe_mod_func_int8_t_s_s((safe_rshift_func_int8_t_s_s(p_67, 6)), l_202)) ^ 4294967295U) <= l_80) , (((l_205 = (g_84++)) , (l_183 >= ((safe_lshift_func_uint16_t_u_s((safe_add_func_int16_t_s_s(p_65, ((((safe_add_func_uint32_t_u_u((safe_add_func_int16_t_s_s(((p_66 ^ 6U) != p_67), g_129)), p_65)) && 0x2BB1259A) < 251U) , 65535U))), 9)) ^ g_193))) < 0))), l_183)) < p_67) , p_66) > g_181);
                    g_85 &= (l_205 = l_148);
                    l_114 &= (safe_lshift_func_uint16_t_u_u(l_205, ((g_32 , (l_202 == (safe_sub_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((((((safe_div_func_int16_t_s_s(l_83, (safe_sub_func_int16_t_s_s(l_178, ((g_180 = ((l_179 = (safe_add_func_uint32_t_u_u(2U, (((((g_185 = p_67) == 1U) , 0x7B) && g_32) || p_67)))) && (-1))) != 0x87))))) & l_113) ^ (-6)) , l_184) || 1U), g_8)), p_65)))) == g_84)));
                    if ((safe_rshift_func_uint8_t_u_s((((safe_rshift_func_int8_t_s_s((9 != (l_179 , ((g_185 > 0xF83DE727) && (((g_180 = 0x58) , (p_67 != (l_183 = 0x2986))) >= l_90)))), p_65)) || g_193) , 1U), l_230)))
                    {
                        uint8_t l_252 = 0x55;
                        g_129 = p_66;
                        --l_231;
                        g_85 = ((((safe_rshift_func_int8_t_s_s((((((0 || ((safe_add_func_uint16_t_u_u((safe_add_func_int8_t_s_s(((safe_div_func_int16_t_s_s(1, ((l_188 , l_178) && (safe_add_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(l_183, 12)), (((g_32 ^ p_65) < (((safe_mod_func_int32_t_s_s(0, (((+((safe_rshift_func_int8_t_s_u(0x40, 7)) | 1U)) || 0x6A30) && 0xED1E4CC4))) & 8) < l_251)) >= l_252)))))) | l_205), l_253)), p_66)) || p_65)) > l_253) ^ 0xCC4F) >= l_252) > g_85), g_181)) >= p_66) , g_185) , 3);
                    }
                    else
                    {
                        uint16_t l_271 = 65535U;
                        g_129 = 0x1D4AA515;
                        g_129 ^= p_66;
                        g_129 = (l_178 ^ (l_114 |= (p_67 <= ((safe_div_func_int32_t_s_s((p_66 == (++g_128)), l_90)) == ((l_97 = ((l_113 = (safe_mod_func_int16_t_s_s(7, (l_205 ^ (safe_mod_func_uint32_t_u_u(((((safe_add_func_uint32_t_u_u((g_129 == (((p_65--) <= (((g_84 , ((safe_sub_func_uint16_t_u_u((safe_div_func_uint8_t_u_u((!(p_67 , 0U)), 0xDD)), (-8))) , g_180)) & l_271) && l_271)) , 0x87)), l_272)) , g_193) >= g_185) | 0x98), g_85)))))) > 0x25)) >= l_230)))));
                    }
                }
                g_129 = (g_314 &= ((p_65 & 3U) || ((p_67 = (((safe_add_func_int16_t_s_s((l_176 >= ((((((8 > ((safe_rshift_func_uint16_t_u_u((safe_unary_minus_func_int8_t_s(((safe_sub_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(((safe_mod_func_uint32_t_u_u(((safe_lshift_func_int8_t_s_u(((safe_rshift_func_int8_t_s_s(((p_66 == (g_289++)) != (l_113 = ((safe_sub_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_u((safe_add_func_int32_t_s_s(((((safe_mod_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((0 >= ((((safe_div_func_uint16_t_u_u(((p_67 && ((safe_lshift_func_uint8_t_u_s(0x0A, 5)) < (safe_add_func_uint16_t_u_u((((((--g_128) ^ (((0x29 < g_288) , 0) >= 0x9B32)) & l_178) != g_8) | p_66), (-1))))) == l_310), g_32)) , g_128) & l_310) & 0x7C5E)), 11)), l_177)) == 0U) ^ l_178) != l_313), g_84)), p_67)) != 0x964E), g_85)) == g_193))), l_179)) | p_67), p_67)) | g_84), 4294967286U)) >= l_310), g_181)), 0xEA)) && 0xC0))), 13)) && g_193)) == 250U) > l_188) != l_114) < g_129) | 0xB29B32BA)), 0x8223)) >= 255U) , l_272)) , g_288)));
                for (g_314 = 0; (g_314 < (-15)); --g_314)
                {
                    uint32_t l_319 = 0x0F05B929;
                    l_179 = (l_108 = (safe_rshift_func_int8_t_s_u((9U & (((((l_319 , ((!(safe_add_func_uint16_t_u_u((((((l_337 ^= (safe_rshift_func_uint16_t_u_s(((((l_113 = ((~g_129) != (((((((safe_add_func_uint32_t_u_u(((-1) & g_128), (g_193 != (((((((safe_rshift_func_uint16_t_u_s((((g_180 |= (safe_lshift_func_uint16_t_u_u(g_314, 15))) & (safe_rshift_func_uint8_t_u_s((~(safe_rshift_func_uint8_t_u_s(g_129, 1))), 3))) & ((g_288 ^ g_32) <= l_114)), l_319)) == 5) , p_65) != g_128) >= 0xAF) <= l_179) || (-10))))) , 0xB475) > g_85) , 0xC4DF7FA7) ^ l_177) != l_253) != p_65))) && l_127) < p_66) | 0U), p_67))) > 0x48) <= (-10)) != 0x0A) <= 0x4F), g_84))) != g_85)) & g_289) && 2U) | l_272) > g_84)), 1)));
                }
            }
            else
            {
                int32_t l_360 = (-1);
                l_113 = (safe_add_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(((((p_67 != (p_65 | (((safe_rshift_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((((g_289 |= l_272) != ((1U || (safe_mod_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u((safe_add_func_int8_t_s_s(((g_32 = g_128) > (((((safe_sub_func_uint8_t_u_u(0x08, (((((l_183 == (((((safe_add_func_int8_t_s_s((((((p_65 == (((safe_sub_func_uint32_t_u_u(l_183, 1)) || g_288) , l_183)) , 4294967295U) ^ 1U) , p_66) > p_65), 0xDA)) , 0) > g_288) , l_360) < 0U)) < g_288) , p_65) != l_83) != 65531U))) & g_288) >= g_8) , g_185) <= (-3))), 0x45)), 2)), g_85))) , 6)) == 0xCC574BBD), l_176)), 1)) & l_337) & 1U))) == g_185) || g_85) | l_148), l_188)), l_183));
                l_108 |= (p_67 ^ l_97);
                g_129 = g_288;
                g_361++;
            }
        }
        else
        {
            uint8_t l_393 = 0U;
            int32_t l_394 = 0;
            uint32_t l_412 = 0U;
            int32_t l_468 = 0xE834E38E;
            int8_t l_512 = 0xD6;
            g_129 = (((safe_sub_func_int32_t_s_s((((p_65 == (safe_lshift_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(l_176, ((safe_rshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_u((l_394 ^= ((safe_lshift_func_uint16_t_u_s(((safe_div_func_int32_t_s_s((g_8 | 2), (+(safe_add_func_uint32_t_u_u(0x6D143038, (safe_lshift_func_int8_t_s_s(((safe_lshift_func_int8_t_s_s(g_288, 2)) < (safe_lshift_func_int16_t_s_s((((((l_337 = (((((safe_div_func_int16_t_s_s(((safe_div_func_uint8_t_u_u(0x3D, l_393)) == l_393), 0x7D46)) < p_67) || g_181) & g_85) & p_67)) != l_393) == g_128) , 0x09D7) != 1), 10))), 4))))))) > 1), l_80)) , 0x2A8A)), 4)), 10)) , 0xA266))), 3)) , 0x96), l_176))) >= l_393) | g_32), g_193)) || 0xFB) ^ 0xC0C089D6);
            if (p_66)
            {
                int32_t l_396 = (-1);
                if ((l_396 = (~p_65)))
                {
                    uint8_t l_397 = 3U;
                    l_397 = l_113;
                    l_394 = ((safe_mod_func_uint32_t_u_u(((safe_lshift_func_uint16_t_u_s(((g_128 , (safe_unary_minus_func_int16_t_s((g_32 = p_65)))) | (g_314 , g_129)), 11)) < ((safe_add_func_uint8_t_u_u((l_396 = (l_397 != ((p_67 = (l_396 >= ((l_97 = ((safe_sub_func_uint8_t_u_u((((l_394 == (((safe_add_func_uint8_t_u_u(g_193, (safe_lshift_func_uint16_t_u_s((g_181 ^ 1U), l_411)))) , g_193) == g_85)) >= p_66) ^ p_66), l_127)) > 0xA97B)) != p_65))) ^ 4U))), g_85)) || p_65)), p_65)) < p_65);
                }
                else
                {
                    l_412++;
                }
                return p_66;
            }
            else
            {
                uint32_t l_417 = 0xBC12E71C;
                int32_t l_432 = 0x33E57981;
                uint16_t l_441 = 0x9122;
                int32_t l_494 = 0xB04E45F9;
                if ((((((((g_85 || l_71) && (safe_sub_func_int16_t_s_s(l_417, p_65))) <= ((((((g_361--) && p_65) == (g_32 |= g_193)) > (((g_185 , ((((l_337 = ((0xB097 || ((safe_add_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(((safe_add_func_int16_t_s_s(p_67, l_412)) || g_129), 4)), 7)) != 0xD7), g_128)) == l_394)) != 0xE218)) , 0x056DA063) != g_288) , p_67)) > p_66) != 0x33B8)) & g_288) || g_180)) > 0x1926) < 0x677EC04D) & g_8) <= l_394))
                {
                    const uint8_t l_433 = 0x97;
                    int32_t l_467 = (-1);
                    for (l_90 = 0; (l_90 < 15); l_90++)
                    {
                        int16_t l_430 = 0x04E5;
                        int32_t l_431 = 0x02CEDE38;
                        l_430 &= p_67;
                        l_431 = (p_66 | l_114);
                    }
                    if (p_66)
                    {
                        return l_394;
                    }
                    else
                    {
                        uint32_t l_434 = 0x2209DB0E;
                        int32_t l_442 = (-7);
                        int32_t l_445 = 0x675217F3;
                        g_85 ^= (-1);
                        g_129 = (((((l_432 = (0U != g_361)) <= (l_433 | (1 & (l_434--)))) <= (safe_div_func_uint8_t_u_u(252U, (safe_rshift_func_int16_t_s_u((l_441 || (p_67 <= (g_314 > (l_442 = 0)))), 13))))) < p_66) | 5U);
                        l_445 = (safe_rshift_func_uint16_t_u_u(65530U, 9));
                    }
                    l_468 = (safe_mod_func_int16_t_s_s(l_448, (safe_unary_minus_func_uint32_t_u(((((((safe_unary_minus_func_int32_t_s((g_32 > (l_394 = p_67)))) < (((l_177 >= ((g_453 = (safe_mod_func_int16_t_s_s(l_433, (0x38 ^ p_66)))) && (+(((safe_sub_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s((((safe_lshift_func_uint8_t_u_s((l_467 |= (g_466 = (4294967295U < ((g_465 = (safe_div_func_uint16_t_u_u(((l_272 > l_114) >= g_185), 7U))) <= p_67)))), 1)) | 0xAC) , p_65), p_67)), g_128)) <= g_180) , (-5))))) , p_67) == g_84)) >= 1) > p_67) & l_272) , p_66)))));
                    g_129 = (l_494 = (safe_rshift_func_int8_t_s_u(p_65, ((safe_mod_func_int8_t_s_s(((g_181 = p_67) , (l_468 |= ((l_71 >= (l_417 > (safe_lshift_func_uint8_t_u_u(((((((p_66 ^ (!(((safe_add_func_uint16_t_u_u((!(~((((!g_8) && (((safe_add_func_int32_t_s_s((l_432 |= p_66), (safe_mod_func_uint8_t_u_u((safe_add_func_int32_t_s_s((((~(safe_lshift_func_int8_t_s_s((+(safe_sub_func_int8_t_s_s((g_185 &= ((4294967295U || (65527U < 0xB0E2)) & 0xBDD6)), p_65))), g_181))) | l_393) && 0x90), p_67)), 0x53)))) == l_97) != p_65)) <= 0xDD5C3C14) == 0x89EAF65B))), 0x6F85)) <= g_289) ^ g_465))) < 0x94) , l_493) >= p_66) | 0xD1EB) != g_32), 7)))) ^ p_67))), 0xDB)) & (-1)))));
                }
                else
                {
                    l_432 |= l_494;
                }
                l_432 |= (l_494 = (-2));
            }
            l_113 ^= (l_517 = (safe_div_func_int16_t_s_s(0xA127, (safe_add_func_int16_t_s_s((safe_sub_func_int32_t_s_s(((l_519 = (1U & ((safe_sub_func_int32_t_s_s(((((safe_add_func_int8_t_s_s(((l_337 &= (p_67 = ((((safe_rshift_func_int8_t_s_u(((safe_sub_func_uint8_t_u_u(((-1) ^ (safe_sub_func_uint8_t_u_u((~(0xA7 == l_512)), (g_129 <= g_453)))), ((safe_sub_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((((g_466 || ((l_114 = p_65) ^ g_314)) , l_71) == l_517), l_71)), 254U)) & g_465))) != l_518), p_66)) && 0x57CC) && 0x617FE4AA) | g_129))) || 0U), p_66)) < 0x87) & 0) < p_66), p_66)) & 0x70))) && g_465), g_32)), 65530U)))));
        }
    }
    else
    {
        return g_465;
    }
    return l_97;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_8;
    csmith_sink_ = g_32;
    csmith_sink_ = g_84;
    csmith_sink_ = g_85;
    csmith_sink_ = g_128;
    csmith_sink_ = g_129;
    csmith_sink_ = g_180;
    csmith_sink_ = g_181;
    csmith_sink_ = g_185;
    csmith_sink_ = g_193;
    csmith_sink_ = g_288;
    csmith_sink_ = g_289;
    csmith_sink_ = g_314;
    csmith_sink_ = g_361;
    csmith_sink_ = g_453;
    csmith_sink_ = g_465;
    csmith_sink_ = g_466;
    csmith_sink_ = g_524;
    csmith_sink_ = g_543;
    csmith_sink_ = g_585;
    csmith_sink_ = g_590;
    csmith_sink_ = g_594;
    csmith_sink_ = g_598;
    csmith_sink_ = g_600;
    csmith_sink_ = g_706;
    csmith_sink_ = g_707;
    csmith_sink_ = g_714;
    csmith_sink_ = g_715;
    csmith_sink_ = g_719;
    csmith_sink_ = g_726;
    csmith_sink_ = g_729;
    csmith_sink_ = g_740;
    csmith_sink_ = g_803;
    csmith_sink_ = g_807;
    csmith_sink_ = g_891;
    csmith_sink_ = g_893;
    csmith_sink_ = g_895;
    csmith_sink_ = g_952;
    csmith_sink_ = g_994;
    csmith_sink_ = g_1046;
    csmith_sink_ = g_1047;
    csmith_sink_ = g_1048;
    csmith_sink_ = g_1049;
    csmith_sink_ = g_1050;
    csmith_sink_ = g_1051;
    csmith_sink_ = g_1054;
    csmith_sink_ = g_1071;
    csmith_sink_ = g_1160;
    platform_main_end(0,0);
    return 0;
}
