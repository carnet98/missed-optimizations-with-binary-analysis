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
   int32_t f0;
   int32_t f1;
   int16_t f2;
   int16_t f3;
   uint32_t f4;
};
struct S1 {
   int32_t f0;
   int16_t f1;
   uint8_t f2;
};
struct S2 {
   uint8_t f0;
   int8_t f1;
   uint16_t f2;
   const int16_t f3;
   int32_t f4;
   uint32_t f5;
   int32_t f6;
   uint32_t f7;
   int32_t f8;
};
static uint32_t g_4 = 0xE17C1097;
static struct S2 g_32 = {1U,0xB6,0xB2FA,0x9634,-1,4294967295U,0x93846F26,0U,0x3B839BF5};
static const uint32_t g_33 = 0xED761E7F;
static int32_t *g_38 = &g_32.f6;
static struct S1 g_48 = {0x1C2AA0BD,-3,0x1E};
static const int32_t *g_90 = &g_48.f0;
static const int32_t **g_89 = &g_90;
static struct S0 g_99 = {0x45B60A5F,0x02C871CF,0,0x1A11,1U};
static int32_t g_252 = 5;
static struct S0 g_285 = {-1,7,0x103C,0,0x678DBA8A};
static struct S0 **g_323 = (void*)0;
static struct S0 ***g_322 = &g_323;
static const int32_t * const * const **g_394 = (void*)0;
static struct S2 g_499 = {248U,0xEC,1U,0x4AA0,1,2U,-5,0x2807B3F7,0};
static int32_t ***g_501 = (void*)0;
static int32_t ****g_500 = &g_501;
static int32_t *g_586 = (void*)0;
static int32_t *g_589 = &g_48.f0;
static int32_t **g_704 = &g_38;
static struct S0 ****g_744 = &g_322;
static struct S0 *****g_743 = &g_744;
static struct S1 *g_784 = &g_48;
static struct S1 **g_783 = &g_784;
static struct S1 ***g_782 = &g_783;
static int16_t func_1(void);
static uint16_t func_11(int32_t p_12, uint16_t p_13, int32_t p_14, struct S0 p_15);
static uint8_t func_16(struct S2 p_17, int32_t p_18, uint32_t p_19);
static int32_t * func_35(int32_t * p_36, int32_t * p_37);
static int32_t * func_39(int32_t * p_40, int32_t * p_41, const struct S2 p_42, uint16_t p_43, struct S0 p_44);
static int32_t * func_45(struct S1 p_46, int8_t p_47);
static int32_t * const * const func_50(int32_t * p_51, int32_t * const p_52, struct S1 p_53, uint32_t p_54);
static int32_t * const func_55(const int32_t ** p_56, int32_t * p_57, struct S0 p_58, int32_t * p_59);
static const int32_t ** func_60(uint16_t p_61, struct S1 p_62, int32_t p_63, int32_t p_64);
static uint16_t func_65(int16_t p_66, const int32_t p_67, struct S1 p_68);
static int16_t func_1(void)
{
    uint32_t l_2 = 0xFE64FD9E;
    struct S2 l_34 = {0x4E,0x85,0U,0x9F32,1,0xA048C840,0x0A3B7DC4,4294967295U,9};
    struct S0 l_315 = {5,-7,-6,0x0DFB,0xD1797038};
    const int8_t l_626 = 0xCA;
    int32_t ***l_638 = (void*)0;
    struct S1 **l_669 = (void*)0;
    struct S1 *l_671 = &g_48;
    uint8_t l_690 = 0xA1;
    int32_t ** const ***l_723 = (void*)0;
    int32_t l_745 = 2;
    struct S0 l_748 = {0xD459E581,0x60841DE6,1,0xFDD3,0xF56F5195};
    int32_t l_753 = 0xCB890483;
    int32_t l_776 = 0x86AFFD7E;
    struct S1 l_791 = {6,2,0x4D};
    int32_t **l_823 = &g_38;
    const int32_t * const * const ***l_834 = &g_394;
    uint32_t l_842 = 0x9A253E11;
    uint8_t l_849 = 0x20;
    struct S0 *l_854 = &l_315;
    uint16_t l_855 = 0x9E56;
    if ((((l_2 <= (safe_unary_minus_func_uint32_t_u(0xE418A527))) != 0x582F) ^ (g_4 , ((safe_add_func_uint32_t_u_u((safe_add_func_int8_t_s_s(((safe_div_func_int32_t_s_s(((func_11(g_4, l_2, ((func_16(((safe_add_func_uint8_t_u_u(((safe_div_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((safe_add_func_int32_t_s_s(g_4, l_2)), ((safe_lshift_func_int16_t_s_s((safe_div_func_int32_t_s_s((g_32 , l_2), 1U)), g_33)) & l_2))), 0xA1)) > g_32.f1), 0x45)) , l_34), g_32.f3, l_34.f0) , l_315) , (**g_89)), l_315) >= l_34.f3) != (-1)), l_34.f2)) < 2U), l_626)), l_315.f3)) & l_315.f4))))
    {
        uint32_t l_627 = 0U;
        struct S1 *l_661 = (void*)0;
        struct S0 l_680 = {0xF33982F3,-1,0xAAF9,2,6U};
        struct S2 l_695 = {0x36,7,65529U,0x1481,-1,0x9FCF4C5A,0x9EC56952,4294967295U,0};
        uint8_t l_701 = 1U;
        int32_t *l_703 = &l_695.f6;
        struct S0 *l_709 = &l_315;
        uint16_t l_710 = 65535U;
        int32_t ** const ***l_724 = (void*)0;
        (*g_589) = l_627;
lbl_837:
        for (g_499.f2 = 0; (g_499.f2 > 60); ++g_499.f2)
        {
            uint8_t l_637 = 0xBC;
            int32_t *l_652 = &g_285.f1;
            struct S1 **l_667 = (void*)0;
            struct S1 l_668 = {0,0x2C58,251U};
            int32_t *l_720 = &g_99.f1;
            struct S0 l_722 = {-1,-6,5,1,1U};
        }
        for (l_695.f1 = 0; (l_695.f1 > (-23)); l_695.f1 = safe_sub_func_uint32_t_u_u(l_695.f1, 5))
        {
            int16_t l_752 = 0x03BB;
            struct S0 l_755 = {0xBB6B80C1,0,-1,0x99D7,1U};
            uint8_t l_778 = 1U;
            struct S1 l_779 = {1,0xCB84,1U};
            uint32_t l_804 = 4294967295U;
            const int32_t *l_805 = &l_34.f6;
            int32_t ****l_831 = &g_501;
            int32_t ****l_832 = (void*)0;
            for (g_4 = 0; (g_4 != 13); g_4 = safe_add_func_int8_t_s_s(g_4, 1))
            {
                struct S0 * const ***l_751 = (void*)0;
                struct S0 * const **** const l_750 = &l_751;
                int32_t l_754 = 1;
                int8_t l_777 = 0x17;
                const int32_t * const *l_789 = &g_90;
                struct S2 l_790 = {0U,0x6F,0x5C8B,-9,-3,0x17EB4B1D,0xB0C34D6B,0x2E8D2751,0xF8B2501E};
                (*l_709) = ((safe_div_func_uint8_t_u_u(((((safe_add_func_int8_t_s_s((((safe_mod_func_int8_t_s_s(((safe_add_func_int32_t_s_s((((((safe_sub_func_uint32_t_u_u(0x13959837, (-1))) || (g_743 == (void*)0)) ^ ((l_745 ^ (((safe_div_func_uint32_t_u_u(g_4, 1)) , (l_748 , func_60((~(&g_744 == l_750)), g_48, (**g_704), l_752))) == (void*)0)) && 0)) < 0x4C) , l_752), l_753)) <= l_752), 0xA4)) <= g_48.f1) < 0x48CB), 0xF4)) ^ 1U) , l_754) && (-1)), g_33)) , l_755);
                if (((**g_704) | ((l_755 , func_60(g_32.f5, g_48, ((safe_add_func_uint8_t_u_u(((safe_add_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u(0x25, l_755.f3)), (safe_rshift_func_int8_t_s_u((safe_mul_func_int16_t_s_s((safe_add_func_uint32_t_u_u((safe_add_func_uint16_t_u_u((*l_703), ((safe_add_func_int32_t_s_s(((safe_add_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u(l_776, ((&g_48 != (void*)0) | g_499.f6))) <= g_4), l_754)) & g_252), g_48.f2)) | 0xDAAE))), (*g_589))), g_285.f3)), 6)))) & g_252), g_32.f5)) >= l_777), l_778)) != (void*)0)))
                {
                    int32_t *l_792 = &l_695.f6;
                    (*l_671) = l_779;
                    (*l_671) = (g_499 , g_48);
                    (*l_671) = (((0xA9 != ((g_32 , g_782) != (((g_285.f2 < ((safe_add_func_uint32_t_u_u((safe_mul_func_int16_t_s_s(g_499.f7, 0x1899)), (l_789 == (void*)0))) || ((l_790 , g_99.f2) , g_32.f5))) || (*g_589)) , (void*)0))) || 0x11) , l_791);
                    (*g_89) = l_792;
                }
                else
                {
                    int32_t l_793 = 0xB697FD7F;
                    if (l_793)
                        break;
                }
                if ((*l_703))
                    break;
                (*g_589) = (safe_add_func_int32_t_s_s((*g_38), g_32.f5));
            }
            for (g_499.f0 = 0; (g_499.f0 <= 8); g_499.f0++)
            {
                uint32_t l_798 = 0x8A5F3DD5;
                uint32_t l_801 = 0x4248B175;
                struct S0 l_824 = {0x69DFB147,1,0x7E5D,-1,0x3771AFC1};
                (*g_89) = (((((g_499.f4 < l_798) && (g_499.f4 > (&l_680 != ((1 ^ ((((safe_rshift_func_int8_t_s_u(g_4, 6)) , (l_801 , (safe_add_func_int16_t_s_s(0x6C6F, (0xA0 < g_48.f1))))) & l_801) && l_804)) , (void*)0)))) || 4294967289U) == l_755.f0) , l_805);
                if ((safe_lshift_func_uint8_t_u_s((g_99.f4 , g_499.f3), 3)))
                {
                    int32_t **l_829 = &g_586;
                    struct S1 l_830 = {0x7F42DCED,0x0E32,0x23};
                    (*l_709) = ((((safe_div_func_uint8_t_u_u(((((((l_801 <= (g_499 , ((safe_sub_func_uint32_t_u_u((safe_div_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u((safe_mod_func_int32_t_s_s((0xE3C019AF ^ 0xF3DCCD3F), (safe_div_func_int16_t_s_s((safe_sub_func_int8_t_s_s((*l_703), (!(((*g_782) == (void*)0) & ((*g_744) != (**g_743)))))), g_499.f8)))), g_252)), 0x15277C0C)), 0x02890120)) == 255U))) || l_801) , l_823) == (void*)0) >= (*l_703)) , 255U), g_285.f0)) != (-1)) > g_32.f3) , l_824);
                    (*g_784) = ((((safe_rshift_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u(g_32.f8, (g_499.f7 <= (&l_680 != &l_680)))) , ((void*)0 != l_829)), 6)) , l_830) , (*l_805)) , (**g_783));
                    l_832 = l_831;
                }
                else
                {
                    int32_t l_833 = 0x33B52DE7;
                    (**l_823) = l_833;
                    return l_824.f4;
                }
            }
            l_834 = &g_394;
        }
        for (l_627 = 0; (l_627 > 8); ++l_627)
        {
            int32_t *l_838 = &l_776;
            if (l_2)
                goto lbl_837;
            (*g_89) = l_838;
            (*g_89) = func_35((*g_704), l_838);
            return g_99.f4;
        }
    }
    else
    {
        struct S0 l_839 = {1,0xF6242A4D,0,1,0x4C6A6857};
        struct S0 *l_840 = &g_99;
        (*g_38) = ((void*)0 == (**g_782));
        (*l_840) = l_839;
        (*l_671) = (***g_782);
    }
    (**l_823) = (g_285.f0 , (((!l_842) & g_99.f4) >= (safe_mul_func_uint16_t_u_u(((g_32 , g_499.f2) ^ (safe_mod_func_uint32_t_u_u(((safe_sub_func_int16_t_s_s((l_849 , (safe_rshift_func_int16_t_s_u((((safe_lshift_func_int8_t_s_u(g_499.f4, ((void*)0 != &g_744))) < g_32.f5) , g_99.f1), 12))), g_33)) || g_499.f0), (*g_589)))), (**l_823)))));
    (*l_854) = l_748;
    return l_855;
}
static uint16_t func_11(int32_t p_12, uint16_t p_13, int32_t p_14, struct S0 p_15)
{
    int32_t **l_319 = (void*)0;
    int32_t ***l_318 = &l_319;
    int32_t ****l_317 = &l_318;
    struct S2 l_348 = {254U,0xE8,0x3F0C,0x087C,0x294B8309,4294967287U,0x29E785CD,4294967295U,-9};
    struct S0 l_442 = {0xB1D3D90B,-2,-4,0x8147,0x35C08C91};
    const int8_t l_457 = (-1);
    struct S0 l_465 = {-5,0xB86B1F90,0x5481,-1,0U};
    struct S0 *l_530 = &l_465;
    uint32_t l_537 = 0U;
    struct S1 l_577 = {-3,0,1U};
    if ((*g_90))
    {
        struct S0 l_324 = {7,8,-1,0xAE9B,0x45DA4C04};
        struct S1 l_388 = {8,-10,4U};
        const uint32_t l_389 = 0xA2DBFFCE;
        int32_t *l_432 = &g_48.f0;
        struct S2 l_462 = {0x35,0x0D,65535U,-10,0x352C18B5,0U,0x610CE664,0xE04766EC,-5};
        struct S2 l_471 = {0x96,0xFE,0xD840,0xD469,-1,0x8050AC78,0x6EC41A83,0x79B07E79,0x7529FD8B};
        int32_t *l_489 = &g_99.f1;
        struct S0 *l_491 = &l_324;
        if ((!((void*)0 != l_317)))
        {
            int32_t *l_329 = &g_285.f1;
            struct S0 l_349 = {-1,0x26119749,0x63B6,0xD5BF,3U};
            uint32_t l_352 = 0xD46530D6;
            struct S1 l_353 = {0xF9E10025,0x17D8,5U};
            struct S0 *l_360 = &l_324;
            struct S0 * const *l_359 = &l_360;
            struct S0 * const **l_358 = &l_359;
            struct S0 * const ***l_357 = &l_358;
            struct S0 * const ****l_356 = &l_357;
            uint8_t l_406 = 247U;
            int32_t * const **l_408 = (void*)0;
            int32_t * const *** const l_407 = &l_408;
            struct S0 l_433 = {-3,0x7C7878CA,0x96E5,-2,1U};
lbl_403:
            for (g_48.f1 = 0; (g_48.f1 == 2); g_48.f1 = safe_add_func_int8_t_s_s(g_48.f1, 7))
            {
                if (((((((-4) < (-2)) | p_14) , g_322) == ((p_15.f4 , l_324) , (void*)0)) > (safe_mod_func_uint32_t_u_u(((-10) & ((safe_mul_func_int16_t_s_s(0x711F, g_32.f8)) & l_324.f1)), p_15.f1))))
                {
                    int32_t **** const l_342 = &l_318;
                    struct S1 l_347 = {1,-3,0x49};
                    (*g_89) = l_329;
                    for (p_15.f3 = 16; (p_15.f3 >= 3); p_15.f3 = safe_sub_func_uint16_t_u_u(p_15.f3, 5))
                    {
                        (*g_89) = &p_14;
                        if ((*g_38))
                            continue;
                        (*l_329) = (safe_div_func_uint8_t_u_u(((safe_div_func_uint8_t_u_u(((((g_285.f3 == g_285.f1) == 1) & 0xDC434A21) , 0x48), (safe_lshift_func_int16_t_s_u((safe_add_func_int16_t_s_s((g_32 , (((void*)0 != l_342) == ((safe_div_func_int8_t_s_s(l_324.f3, p_15.f3)) <= (-9)))), p_13)), 3)))) , 1U), g_48.f2));
                        if ((*l_329))
                            break;
                    }
                    (*g_38) = (safe_sub_func_uint8_t_u_u((g_32.f8 == (((l_347 , (p_15 , (l_348 , (l_349 , l_348)))) , &g_89) != (*l_317))), (((((((p_15.f1 ^ (-2)) ^ 0x9926629D) != p_15.f3) <= g_99.f3) , g_285.f3) == p_12) , p_15.f1)));
                    (*g_89) = &p_14;
                }
                else
                {
                    struct S0 ***l_350 = &g_323;
                    struct S0 ****l_351 = &l_350;
                    (*g_89) = (*g_89);
                    (*l_351) = l_350;
                }
                if ((*g_38))
                {
                    struct S1 l_354 = {1,0x89F1,0x5E};
                    struct S0 * const ****l_355 = (void*)0;
                    l_354 = (l_352 , l_353);
                    l_356 = l_355;
                    (*g_38) = p_13;
                }
                else
                {
                    uint32_t l_370 = 0xB2BB56A6;
                    for (g_285.f1 = 0; (g_285.f1 < 14); g_285.f1 = safe_add_func_uint32_t_u_u(g_285.f1, 1))
                    {
                        int32_t *l_363 = &l_324.f1;
                        (*g_89) = &p_14;
                        l_363 = &p_14;
                    }
                    (*l_329) = (0x43B4 != ((safe_rshift_func_int8_t_s_s(0x45, ((safe_rshift_func_uint8_t_u_s(1U, (safe_rshift_func_int8_t_s_s(l_370, 5)))) ^ (safe_lshift_func_uint16_t_u_u(g_32.f1, ((((p_15 , (**l_358)) != &p_15) == (~(safe_div_func_uint8_t_u_u((safe_div_func_uint8_t_u_u(p_15.f3, g_32.f0)), 0x89)))) , 0x1F19)))))) && p_15.f4));
                    if (l_370)
                        break;
                }
                (*g_89) = (void*)0;
                (*l_329) = (((safe_add_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(((safe_unary_minus_func_uint16_t_u(g_32.f0)) && 1), (-7))), l_324.f3)) & 0x4A) < (safe_unary_minus_func_int32_t_s((safe_mod_func_int16_t_s_s(((safe_div_func_uint16_t_u_u(p_15.f0, ((((g_32.f0 <= g_285.f2) | p_14) , l_388) , l_389))) | (*l_329)), l_324.f1)))));
            }
            if ((((safe_lshift_func_uint16_t_u_s((safe_mod_func_int8_t_s_s((g_394 != (void*)0), (safe_mul_func_int16_t_s_s(p_15.f4, (g_285.f0 < ((((((l_348 , p_12) && (*l_329)) ^ (safe_lshift_func_int8_t_s_u((*l_329), (safe_sub_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(((void*)0 != (*g_89)), 15)), g_252))))) == 0x928291F7) > p_12) == p_15.f3)))))), l_389)) & (-1)) != 0x8BBA7D40))
            {
                struct S0 *** const *l_415 = (void*)0;
                int32_t l_417 = (-1);
                struct S1 l_422 = {0x84BEE1A4,-9,1U};
                int32_t *l_429 = (void*)0;
                int32_t *****l_458 = (void*)0;
                int32_t *****l_459 = &l_317;
                if (l_348.f4)
                    goto lbl_403;
                if (p_15.f2)
                {
                    struct S1 l_427 = {0xC52A4E98,0x0E9C,246U};
                    int32_t *l_428 = &l_349.f1;
                    if (p_15.f3)
                    {
                        uint16_t l_416 = 0U;
                        struct S1 l_418 = {0x55AA21F6,1,0x70};
                        struct S1 *l_419 = &l_418;
                        (*l_419) = (((safe_add_func_uint32_t_u_u((l_406 , (g_285.f2 != ((((void*)0 != l_407) <= p_15.f0) >= ((safe_add_func_uint8_t_u_u(g_32.f4, (p_15.f2 & (safe_rshift_func_int16_t_s_s((((safe_rshift_func_uint8_t_u_s(((&g_322 != l_415) || 3), l_416)) == 0x11) < g_99.f2), 7))))) , l_417)))), p_15.f1)) <= g_285.f3) , l_418);
                        (*l_419) = (((safe_lshift_func_uint8_t_u_s(((0xC7 == g_48.f0) != g_32.f1), 7)) | (((l_422 , p_12) ^ (((safe_rshift_func_uint8_t_u_s((7U || (g_33 > p_15.f2)), ((safe_div_func_int32_t_s_s((*g_38), p_15.f1)) == 0x0F))) || p_13) , p_15.f0)) ^ 4294967295U)) , l_427);
                    }
                    else
                    {
                        l_429 = &p_14;
                        p_15.f1 = (7U && (l_415 == (void*)0));
                        l_329 = l_432;
                    }
                    (*l_407) = (*l_407);
                    (*g_38) = ((l_433 , func_55(func_60((*l_428), l_388, (*l_428), ((safe_rshift_func_int8_t_s_u((&l_388 == &l_353), (safe_mul_func_uint16_t_u_u(((safe_sub_func_uint16_t_u_u(g_32.f2, (safe_lshift_func_uint16_t_u_s(g_48.f1, 13)))) || 0x847B), g_4)))) , p_15.f3)), l_428, l_442, l_329)) != (void*)0);
                    (*l_329) = (safe_lshift_func_uint8_t_u_u(g_48.f1, (safe_sub_func_int32_t_s_s((((safe_mul_func_uint16_t_u_u((((((*l_317) != &g_89) != (*l_329)) , g_48.f1) | (((safe_add_func_uint8_t_u_u(((((*l_432) == ((*l_357) != &g_323)) , ((safe_div_func_uint16_t_u_u((safe_div_func_uint8_t_u_u(g_33, 0xEB)), p_14)) >= g_32.f2)) & 0x681D166E), g_99.f1)) , (*l_318)) != (void*)0)), p_13)) || g_32.f4) | g_285.f1), l_457))));
                }
                else
                {
                    (*g_89) = &p_14;
                }
                (*l_459) = &l_318;
                (*g_89) = l_432;
            }
            else
            {
                int32_t **l_467 = &g_38;
                (*g_38) = (safe_mod_func_int16_t_s_s(((l_462 , ((safe_lshift_func_uint8_t_u_s(((l_465 , 0x66) >= (!(l_467 != (void*)0))), (safe_unary_minus_func_uint32_t_u(((p_15.f2 , g_48.f2) , (((safe_div_func_uint16_t_u_u((((((g_99.f4 ^ p_15.f0) , 0xEAC2B9D9) ^ p_15.f1) > g_285.f4) || p_15.f2), g_99.f1)) && 0x0489F0D1) , 0x42CF14F0)))))) , l_471)) , g_32.f0), 0x0963));
            }
        }
        else
        {
            int32_t l_487 = (-8);
            int8_t l_488 = 0x4F;
            const int32_t * const * const ***l_490 = &g_394;
            (*g_38) = ((safe_div_func_uint16_t_u_u((g_99.f0 <= p_15.f4), (safe_sub_func_uint8_t_u_u(((~(((!(safe_div_func_uint32_t_u_u((((safe_sub_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((safe_unary_minus_func_uint8_t_u(0U)), p_15.f2)), g_285.f3)) && (9U && (((*g_90) != p_14) & (safe_sub_func_uint32_t_u_u(((p_15.f1 >= l_487) <= g_99.f2), (*g_90)))))) , g_32.f3), 0x3D67096F))) != 0x85) , g_32.f0)) & g_48.f2), l_488)))) < g_4);
            (*g_89) = l_489;
            (*l_490) = g_394;
        }
        (*l_491) = p_15;
        (*g_89) = l_489;
    }
    else
    {
        struct S0 l_494 = {0xBCAAE953,0x2AAD0BF7,0xD977,-7,0xF1A6B96E};
        int32_t *l_502 = &l_494.f1;
        int32_t l_513 = (-1);
        struct S0 **** const l_525 = &g_322;
        struct S2 l_558 = {255U,0,65535U,0xEB2E,1,0xB141089C,-1,0x04C2488F,0x222C9885};
        struct S0 l_576 = {-4,0xA27C9C68,1,1,0x9675A4D6};
        struct S1 *l_622 = (void*)0;
        struct S1 **l_621 = &l_622;
        if ((safe_rshift_func_int8_t_s_u(((l_494 , &l_317) != &l_317), 4)))
        {
            int32_t *l_503 = &g_499.f6;
            struct S0 l_511 = {0x79A99503,0,0x8E73,-1,0U};
            int32_t *l_526 = &l_465.f1;
            struct S0 *l_529 = &l_494;
            struct S1 *l_556 = &g_48;
            int32_t ***l_561 = &l_319;
            uint32_t l_573 = 0x52CC8D21;
            l_503 = &p_14;
            for (l_465.f4 = (-9); (l_465.f4 <= 48); ++l_465.f4)
            {
                struct S1 l_512 = {0x2FE9EABB,0x5ED8,0x83};
                int32_t *l_514 = (void*)0;
                struct S0 *l_517 = &g_99;
                struct S0 ****l_572 = &g_322;
                struct S0 *****l_571 = &l_572;
                for (l_348.f6 = 17; (l_348.f6 != (-24)); l_348.f6--)
                {
                    int32_t *l_510 = (void*)0;
                    if (p_15.f3)
                        break;
                    for (g_32.f7 = 6; (g_32.f7 == 36); g_32.f7 = safe_add_func_uint32_t_u_u(g_32.f7, 4))
                    {
                        l_510 = (void*)0;
                        return p_12;
                    }
                    l_511 = p_15;
                    if (p_14)
                        break;
                }
            }
            (*g_89) = (*g_89);
        }
        else
        {
            const uint16_t l_619 = 0x0222;
            struct S1 ***l_623 = (void*)0;
            struct S1 ***l_624 = (void*)0;
            struct S1 **l_625 = (void*)0;
            for (g_32.f6 = (-18); (g_32.f6 > (-13)); g_32.f6 = safe_add_func_int16_t_s_s(g_32.f6, 1))
            {
                int8_t l_620 = 9;
                (*g_589) = ((*l_502) <= ((safe_sub_func_int8_t_s_s(g_499.f1, ((safe_lshift_func_int8_t_s_u((safe_sub_func_int16_t_s_s((!((65535U > ((safe_lshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_u((-8), 0)), 10)) != ((((safe_mod_func_int16_t_s_s((safe_sub_func_int16_t_s_s((g_32.f3 <= (safe_lshift_func_uint8_t_u_s((((((~((!(safe_sub_func_int16_t_s_s((safe_mod_func_uint32_t_u_u(0x6FF438C0, (safe_lshift_func_uint16_t_u_u(g_32.f1, 7)))), g_99.f4))) , (safe_add_func_uint8_t_u_u((*l_502), p_13)))) || 0x1C) & g_499.f8) | p_15.f0) , g_32.f3), 5))), l_619)), l_620)) <= l_620) & 0xA7) & p_15.f3))) > p_15.f1)), g_285.f0)), 0)) || g_32.f6))) && g_33));
            }
            (*l_502) = p_15.f0;
            l_625 = l_621;
            (*g_89) = l_502;
        }
        (*g_89) = &p_14;
    }
    (*g_589) = p_15.f4;
    return g_252;
}
static uint8_t func_16(struct S2 p_17, int32_t p_18, uint32_t p_19)
{
    int16_t l_49 = 1;
    int32_t *l_281 = &g_48.f0;
    struct S2 l_310 = {1U,0x6E,65530U,1,-1,0x55E27A0A,-1,3U,1};
    (*g_89) = func_35(g_38, func_39(func_45((p_17.f3 , g_48), l_49), l_281, p_17, (*l_281), ((safe_rshift_func_int16_t_s_u(((safe_unary_minus_func_int16_t_s(g_252)) , (*l_281)), (*l_281))) , g_285)));
    (*l_281) = (safe_add_func_int8_t_s_s(((1 || (*l_281)) , (((~0x511B20A9) && (*l_281)) < g_32.f6)), (((safe_mul_func_uint8_t_u_u((*l_281), (*l_281))) , (!((((((safe_sub_func_int8_t_s_s((g_285.f3 | (*l_281)), p_17.f3)) > (*l_281)) || p_17.f1) < g_32.f1) != (*l_281)) , p_17.f5))) < 255U)));
    (*l_281) = (safe_rshift_func_int8_t_s_u((((*l_281) & (safe_add_func_uint16_t_u_u(4U, (safe_rshift_func_int8_t_s_s(0x5E, ((safe_mul_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((((l_310 , p_17.f7) , (safe_mod_func_uint16_t_u_u(g_48.f2, (safe_lshift_func_int8_t_s_u((g_285.f3 | g_32.f3), p_17.f3))))) != p_17.f1), 0x63)), g_285.f1)) , g_32.f6)))))) , g_285.f3), 7));
    return p_17.f2;
}
static int32_t * func_35(int32_t * p_36, int32_t * p_37)
{
    for (g_32.f0 = (-5); (g_32.f0 != 37); ++g_32.f0)
    {
        if ((*g_90))
            break;
    }
    return g_38;
}
static int32_t * func_39(int32_t * p_40, int32_t * p_41, const struct S2 p_42, uint16_t p_43, struct S0 p_44)
{
    const int32_t **l_286 = &g_90;
    struct S0 l_287 = {0x9B3D71B0,0,0xC4D6,1,4294967289U};
    struct S1 l_288 = {0,0xA06D,0x7C};
    int32_t *l_289 = &g_285.f1;
    (*l_286) = p_41;
    return l_289;
}
static int32_t * func_45(struct S1 p_46, int8_t p_47)
{
    uint32_t l_69 = 0U;
    int32_t l_74 = 0x8949E3B9;
    struct S0 l_75 = {-1,0xB7CFF1CC,1,1,0xE1338462};
    struct S1 l_80 = {0x182417F1,0xC3B1,1U};
    int32_t l_91 = 0x349FFB2E;
    int32_t * const l_280 = &l_74;
    int32_t * const *l_279 = &l_280;
    l_279 = func_50(g_38, func_55(func_60(func_65(l_69, l_69, ((safe_lshift_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(l_74, (l_75 , (safe_mul_func_uint32_t_u_u((safe_mod_func_int16_t_s_s(0xE5B4, g_32.f2)), (((p_46 , l_75.f1) == 0xEB) <= g_32.f6)))))), 4)) , l_80)), g_48, (*g_38), g_33), g_38, l_75, g_38), g_48, l_91);
    return g_38;
}
static int32_t * const * const func_50(int32_t * p_51, int32_t * const p_52, struct S1 p_53, uint32_t p_54)
{
    int8_t l_94 = 0x9A;
    int32_t **l_95 = (void*)0;
    struct S2 l_98 = {2U,-1,0xEDB7,7,9,0x9F9B9B76,-1,4294967295U,0x5A2DC96F};
    const int32_t **l_100 = (void*)0;
    struct S0 l_101 = {0x34EEA40F,0xB04FC3DD,0,0,4294967292U};
    int8_t l_113 = 0x43;
    struct S1 l_123 = {-1,-1,0U};
    const int16_t l_197 = 0x5804;
    uint32_t l_213 = 0x5D64D038;
    int32_t * const * const l_269 = (void*)0;
    struct S0 *l_276 = &g_99;
    struct S0 ** const l_275 = &l_276;
    if ((((((((*g_90) , p_53.f1) < ((safe_mul_func_int8_t_s_s(g_48.f1, ((void*)0 == (*g_89)))) && ((((l_94 < (&p_51 == l_95)) && (safe_lshift_func_int8_t_s_u(g_32.f1, p_53.f1))) , 0x10) & p_53.f2))) , l_98) , (*g_38)) != (*p_52)) <= p_53.f0))
    {
        struct S2 l_106 = {0U,0xE2,0x5FF2,1,-2,3U,0,0x53E4EB4C,0x122FC4CE};
        const int32_t **l_124 = &g_90;
        int32_t * const * const l_150 = (void*)0;
        int32_t l_168 = 0;
        uint32_t l_179 = 0U;
        int16_t l_180 = 1;
        uint16_t l_181 = 0x6227;
        uint8_t l_182 = 0xB1;
        struct S0 l_251 = {0x013E866A,0xDDA62993,8,1,0U};
        struct S0 *l_259 = (void*)0;
        struct S0 **l_258 = &l_259;
        (*p_52) = (p_53.f0 , ((g_99 , p_51) == (void*)0));
        if ((!((safe_mul_func_int8_t_s_s(8, (((g_32.f3 , ((+0xA1E5BAC9) , l_106)) , g_32.f4) , (g_32.f0 | ((((safe_div_func_uint32_t_u_u((safe_add_func_uint8_t_u_u((l_106.f6 | (g_32.f0 , (safe_lshift_func_int8_t_s_u(0x15, 7)))), 0x6B)), l_113)) != 4294967291U) , 0xDBD1) & 8U))))) , g_99.f3)))
        {
            int16_t l_116 = 0x3BB0;
            int32_t * const * const l_117 = &g_38;
            struct S2 l_122 = {5U,-1,65529U,-8,0,2U,0x6565E832,0U,0x9FEB662F};
            if ((safe_lshift_func_int8_t_s_u(((*p_52) || l_116), 3)))
            {
                return l_117;
            }
            else
            {
                int8_t l_129 = 2;
                (*l_124) = ((((safe_lshift_func_uint16_t_u_s(1U, 4)) < ((g_4 , (void*)0) != ((safe_lshift_func_int16_t_s_u(g_99.f0, (((void*)0 != p_52) == (((((l_122 , ((*g_89) != (*g_89))) , g_32.f3) , l_123) , l_124) == (void*)0)))) , (void*)0))) && (**l_124)) , (void*)0);
                if ((p_53.f0 != (g_32.f0 & (safe_rshift_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_s((0xC475 == ((**l_117) > l_129)), (((((g_99.f4 != (((safe_mul_func_int8_t_s_s(0xCC, l_129)) == p_53.f2) >= p_53.f1)) < 5U) == g_32.f6) < l_129) || g_99.f1))) | g_48.f1), g_32.f2)))))
                {
                    (*g_38) = 1;
                    return &g_38;
                }
                else
                {
                    int8_t l_136 = 0;
                    int32_t * const * const l_146 = &g_38;
                    (*g_38) = (((-1) ^ ((safe_div_func_int32_t_s_s((safe_add_func_uint16_t_u_u(l_136, (&p_51 == (((safe_lshift_func_uint8_t_u_s(((safe_rshift_func_uint8_t_u_u(((!(((*l_117) != (*g_89)) >= ((*g_89) != p_51))) , p_53.f2), 6)) , (safe_rshift_func_int8_t_s_s((g_48.f0 <= 0x8953), 0))), 1)) != 252U) , l_100)))), 1)) || 0x85)) | 0xDB);
                    if (l_98.f1)
                        goto lbl_147;
                    return l_146;
                }
            }
        }
        else
        {
lbl_147:
            (*p_52) = (*p_51);
            for (l_101.f3 = 25; (l_101.f3 >= 12); l_101.f3--)
            {
                return l_150;
            }
            (*g_38) = (safe_mul_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((&g_38 != (void*)0), (((safe_add_func_uint8_t_u_u(g_32.f1, ((l_106 , (((safe_div_func_int32_t_s_s(((safe_mod_func_int8_t_s_s((safe_mod_func_int16_t_s_s((((safe_mul_func_int16_t_s_s(p_53.f1, p_53.f2)) <= (safe_mul_func_uint16_t_u_u((!(l_168 <= (safe_mul_func_int16_t_s_s((((safe_mod_func_int32_t_s_s((safe_mod_func_int32_t_s_s((safe_add_func_uint32_t_u_u(g_32.f7, (safe_mul_func_int16_t_s_s(((*p_52) > (*g_38)), g_32.f5)))), (*p_52))), (*p_52))) && g_99.f2) ^ l_179), l_180)))), (-1)))) < l_181), p_53.f1)), g_32.f4)) <= p_53.f2), p_53.f2)) , l_182) < 0xD9)) && 1))) , (void*)0) == (void*)0))), 0x57DD));
        }
        if ((safe_div_func_uint8_t_u_u(((safe_mod_func_int32_t_s_s((((safe_add_func_int32_t_s_s((*p_52), (0xABB1F743 != ((safe_div_func_uint32_t_u_u((((safe_div_func_uint16_t_u_u((l_101.f1 , g_99.f3), ((safe_mod_func_uint8_t_u_u((l_150 == (g_48 , func_60((safe_add_func_uint8_t_u_u(g_4, ((0x0AC0 <= (0x88 < l_197)) ^ 0xAA09))), g_48, (*p_51), p_53.f1))), 0x7C)) , g_99.f0))) && g_32.f2) == p_53.f0), g_33)) | g_99.f3)))) >= p_54) ^ p_53.f2), (*p_52))) != g_99.f1), p_54)))
        {
            struct S0 l_214 = {-10,0x11DD1DBF,7,-5,1U};
            uint8_t l_245 = 0x0E;
            if ((*p_51))
            {
                const int16_t l_202 = 0xFFE4;
                struct S0 *l_240 = &g_99;
                for (g_32.f8 = 0; (g_32.f8 == (-9)); g_32.f8--)
                {
                    struct S0 *l_215 = (void*)0;
                    struct S0 *l_216 = &l_214;
                    int32_t l_232 = 0x219EB458;
                    if ((*p_51))
                        break;
                    (*p_52) = ((safe_mul_func_uint16_t_u_u(l_202, p_53.f0)) , (safe_mul_func_uint8_t_u_u((((p_52 != (void*)0) != (p_53.f0 != (safe_sub_func_int16_t_s_s(((safe_sub_func_uint32_t_u_u((0x692C9271 > (((safe_rshift_func_uint8_t_u_u(6U, (((((safe_mul_func_uint8_t_u_u(0x7D, (4294967295U ^ l_213))) <= (*p_52)) || p_53.f1) >= g_32.f4) & 4294967287U))) | 0x1708) , g_32.f2)), 0x36BFB3EC)) , (-2)), g_99.f4)))) , g_99.f2), 0x25)));
                    (*l_216) = l_214;
                    (*g_38) = (!(((safe_sub_func_int32_t_s_s((0xC9603B0C & (safe_rshift_func_uint8_t_u_s(((safe_rshift_func_int16_t_s_s(((safe_lshift_func_int8_t_s_s(((safe_mul_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u((((void*)0 == &p_52) != 0x0524C490), 4)), (p_53 , (g_32.f0 == 0xFF8C)))) ^ ((0xC9E869F9 & (safe_sub_func_int32_t_s_s(l_214.f0, l_232))) > 0x45)), 0)) >= p_53.f0), 4)) , p_53.f1), p_53.f1))), g_32.f1)) , (*g_89)) != (*g_89)));
                }
                (*l_240) = (((safe_div_func_int16_t_s_s(((*p_51) <= (((~0xBE17463E) | (p_54 & (l_214.f3 , ((safe_sub_func_uint8_t_u_u(g_32.f7, ((l_202 , p_53.f0) , p_53.f0))) < l_214.f2)))) , l_202)), 0x07A8)) == (*p_52)) , g_99);
                return l_150;
            }
            else
            {
                int8_t l_246 = 0xCD;
                if ((p_54 <= (safe_add_func_uint32_t_u_u(((*g_38) >= l_214.f2), (safe_rshift_func_uint16_t_u_u(((p_53.f1 == ((void*)0 == p_51)) >= (((l_245 >= (l_246 | (((safe_lshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(((l_251 , 1) == g_252), g_48.f1)), l_246)) , &g_99) != &g_99))) < l_246) == p_53.f1)), 1))))))
                {
                    (*p_51) = (p_53.f2 & 4U);
                }
                else
                {
lbl_255:
                    for (l_106.f6 = 0; (l_106.f6 > 2); ++l_106.f6)
                    {
                        return &g_38;
                    }
                }
                if (l_98.f8)
                    goto lbl_255;
            }
        }
        else
        {
            int32_t *l_268 = &l_98.f6;
            for (g_99.f2 = 0; (g_99.f2 <= 27); g_99.f2 = safe_add_func_uint8_t_u_u(g_99.f2, 8))
            {
                struct S0 ***l_260 = &l_258;
                const int32_t ****l_261 = (void*)0;
                const int32_t ***l_263 = (void*)0;
                const int32_t ****l_262 = &l_263;
                (*l_260) = l_258;
                (*l_262) = &l_124;
                for (l_251.f2 = 0; (l_251.f2 == (-2)); l_251.f2 = safe_sub_func_uint16_t_u_u(l_251.f2, 2))
                {
                    int32_t *l_267 = &l_123.f0;
                    int32_t **l_266 = &l_267;
                    (*l_266) = p_52;
                    (***l_262) = l_268;
                }
            }
            return l_269;
        }
    }
    else
    {
lbl_272:
        (*p_52) = (safe_add_func_uint16_t_u_u(65527U, 0x2B07));
    }
    if (g_48.f0)
        goto lbl_272;
    (*p_52) = ((0U == ((safe_mul_func_int16_t_s_s((((l_275 != (void*)0) , (*g_89)) == (*g_89)), (safe_add_func_int16_t_s_s(g_4, g_99.f2)))) != 0)) , ((((g_48 , g_48.f1) < 249U) & 0xFEDE) == p_53.f1));
    p_51 = func_55(&g_90, p_51, (*l_276), p_51);
    return &g_38;
}
static int32_t * const func_55(const int32_t ** p_56, int32_t * p_57, struct S0 p_58, int32_t * p_59)
{
    (*g_89) = (*p_56);
    return g_38;
}
static const int32_t ** func_60(uint16_t p_61, struct S1 p_62, int32_t p_63, int32_t p_64)
{
    int32_t *l_85 = (void*)0;
    int32_t **l_84 = &l_85;
    int32_t *l_86 = &g_48.f0;
    const int32_t *l_88 = &g_48.f0;
    const int32_t **l_87 = &l_88;
    (*l_84) = g_38;
    (*l_84) = l_86;
    return g_89;
}
static uint16_t func_65(int16_t p_66, const int32_t p_67, struct S1 p_68)
{
    int32_t *l_81 = &g_48.f0;
    int32_t **l_82 = (void*)0;
    int32_t **l_83 = &l_81;
    (*l_83) = l_81;
    return p_67;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_4;
    csmith_sink_ = g_32.f0;
    csmith_sink_ = g_32.f1;
    csmith_sink_ = g_32.f2;
    csmith_sink_ = g_32.f3;
    csmith_sink_ = g_32.f4;
    csmith_sink_ = g_32.f5;
    csmith_sink_ = g_32.f6;
    csmith_sink_ = g_32.f7;
    csmith_sink_ = g_32.f8;
    csmith_sink_ = g_33;
    csmith_sink_ = g_48.f0;
    csmith_sink_ = g_48.f1;
    csmith_sink_ = g_48.f2;
    csmith_sink_ = g_99.f0;
    csmith_sink_ = g_99.f1;
    csmith_sink_ = g_99.f2;
    csmith_sink_ = g_99.f3;
    csmith_sink_ = g_99.f4;
    csmith_sink_ = g_252;
    csmith_sink_ = g_285.f0;
    csmith_sink_ = g_285.f1;
    csmith_sink_ = g_285.f2;
    csmith_sink_ = g_285.f3;
    csmith_sink_ = g_285.f4;
    csmith_sink_ = g_499.f0;
    csmith_sink_ = g_499.f1;
    csmith_sink_ = g_499.f2;
    csmith_sink_ = g_499.f3;
    csmith_sink_ = g_499.f4;
    csmith_sink_ = g_499.f5;
    csmith_sink_ = g_499.f6;
    csmith_sink_ = g_499.f7;
    csmith_sink_ = g_499.f8;
    platform_main_end(0,0);
    return 0;
}
