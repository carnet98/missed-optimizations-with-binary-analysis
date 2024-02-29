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
static int32_t g_9 = 0x3126FF23L;
static uint32_t g_35 = 0x3BE41B0CL;
static int64_t g_108 = 0xFCC30D4DDF0F57B5LL;
static uint8_t g_110 = 0xA9L;
static int32_t g_138 = (-1L);
static int64_t g_177 = (-1L);
static uint16_t g_178 = 0UL;
static int64_t g_297 = 1L;
static uint8_t g_298 = 0x9FL;
static int16_t g_339 = 0xF8A2L;
static int8_t g_667 = 6L;
static uint32_t g_700 = 2UL;
static uint64_t g_1016 = 18446744073709551615UL;
static uint32_t g_1034 = 2UL;
static uint32_t g_1072 = 0xE333F7A5L;
static int32_t g_1076 = 0x60271661L;
static uint8_t g_1077 = 1UL;
static uint8_t g_1110 = 1UL;
static uint64_t func_1(void);
static uint16_t func_2(int32_t p_3, int8_t p_4, int16_t p_5, uint16_t p_6, uint32_t p_7);
static int32_t func_12(uint8_t p_13, uint32_t p_14);
inline static const uint64_t func_15(int64_t p_16, int8_t p_17, uint32_t p_18, int64_t p_19);
inline static int16_t func_40(uint64_t p_41, int8_t p_42, int32_t p_43, const int16_t p_44, int16_t p_45);
inline static int32_t func_50(int8_t p_51, uint8_t p_52, uint32_t p_53, const int32_t p_54, uint16_t p_55);
inline static int32_t func_80(const uint32_t p_81, uint64_t p_82, uint8_t p_83, uint32_t p_84, uint8_t p_85);
inline static uint16_t func_148(int8_t p_149, const int64_t p_150, int32_t p_151, uint16_t p_152, const uint8_t p_153);
static int8_t func_168(uint64_t p_169, int32_t p_170);
static uint8_t func_181(int64_t p_182, uint32_t p_183);
static uint64_t func_1(void)
{
    uint8_t l_8 = 247UL;
    int32_t l_1219 = (-1L);
    l_1219 |= ((func_2(l_8, g_9, l_8, g_9, (safe_rshift_func_int8_t_s_u(g_9, 1))) < (safe_rshift_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_u((safe_mod_func_uint32_t_u_u((0x064E568B51CAC005LL == (((safe_add_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(l_8, l_8)), g_700)) > (-1L)) && 0x30A66224318EE37ALL)), g_700)), l_8)) < g_700), 2))) < l_8);
    l_1219 = 0x938FA67BL;
    return l_1219;
}
static uint16_t func_2(int32_t p_3, int8_t p_4, int16_t p_5, uint16_t p_6, uint32_t p_7)
{
    int64_t l_20 = 2L;
    g_9 ^= p_7;
    p_3 = func_12(((func_15(p_5, l_20, (l_20 && ((((-1L) | ((safe_sub_func_uint8_t_u_u((!((g_9 ^ p_7) ^ 0x7AL)), (0x61FCL || 65529UL))) && l_20)) | g_9) == l_20)), p_4) != 0xB831966C4779D44FLL) && l_20), p_4);
    return l_20;
}
static int32_t func_12(uint8_t p_13, uint32_t p_14)
{
    int32_t l_31 = 4L;
    int64_t l_159 = 0x05295FBE9E82CB70LL;
    int32_t l_962 = 0xA44AD962L;
    int32_t l_1075 = 3L;
    int32_t l_1102 = 0L;
    int32_t l_1103 = 0xEE1018BFL;
    int32_t l_1104 = 0L;
    int32_t l_1107 = 9L;
    for (p_14 = 12; (p_14 <= 32); p_14 = safe_add_func_uint64_t_u_u(p_14, 3))
    {
        uint32_t l_32 = 9UL;
        int32_t l_33 = 0L;
        uint64_t l_965 = 0x69F31A67D4BA1193LL;
        int32_t l_1015 = 0L;
        int32_t l_1108 = (-1L);
        if (g_9)
        {
            int32_t l_34 = 0xEA3A7221L;
            l_31 = p_14;
            l_33 = (p_14 >= (p_13 & l_32));
            g_35 = l_34;
            l_159 &= (safe_lshift_func_int8_t_s_u(l_33, (l_32 & (safe_rshift_func_int16_t_s_s(func_40(((safe_sub_func_int32_t_s_s((safe_rshift_func_int8_t_s_s((func_50(l_31, l_33, (safe_rshift_func_int16_t_s_u((safe_sub_func_uint64_t_u_u((((g_35 && (((safe_mod_func_uint32_t_u_u(((safe_add_func_uint8_t_u_u(0x02L, p_13)) || (safe_lshift_func_int8_t_s_s(((-1L) < (((((safe_mod_func_uint32_t_u_u(l_33, 0x0A6F85D5L)) ^ p_14) >= l_33) ^ g_9) >= g_9)), g_9))), p_14)) & l_31) > 0L)) != (-1L)) < 0x28784865L), 0x449BABE4A9FF1DB0LL)), 13)), l_34, g_9) <= g_35), l_34)), 1L)) || 0xF33DL), l_34, l_31, g_35, l_31), 8)))));
        }
        else
        {
            uint64_t l_959 = 0xEEBAE8CD4CD2D5FELL;
            int32_t l_996 = 0x1264B4B7L;
            if ((((safe_add_func_uint16_t_u_u(0xF0AFL, ((((((safe_rshift_func_uint16_t_u_u(0x50E2L, 9)) <= (safe_sub_func_int8_t_s_s((safe_sub_func_int32_t_s_s(g_35, ((func_168(g_138, p_13) == (safe_lshift_func_int8_t_s_u(0x03L, (safe_rshift_func_int8_t_s_u((safe_mod_func_int64_t_s_s((((((safe_sub_func_int8_t_s_s((safe_sub_func_uint64_t_u_u(l_159, 0xAE9065158273F2EDLL)), 1UL)) && l_31) || g_35) < l_32) <= l_32), p_13)), l_959))))) < l_31))), p_13))) || l_159) != l_159) <= 0UL) != 0xB3L))) ^ g_108) || p_13))
            {
                int16_t l_979 = 0x8292L;
                for (g_108 = 22; (g_108 < (-2)); g_108--)
                {
                    int8_t l_963 = 0x2DL;
                    int32_t l_980 = (-1L);
                    l_962 = 0x1D341BE1L;
                    l_963 &= l_31;
                    l_965 &= (+(0x5B7AL <= ((1L < p_13) || p_14)));
                    l_980 = (~(p_14 || ((safe_sub_func_int8_t_s_s((((safe_rshift_func_int8_t_s_s(p_14, 1)) == ((safe_mod_func_int64_t_s_s(((0x5357BF20D3B1C16DLL && (safe_rshift_func_uint8_t_u_s(l_959, 4))) == (safe_add_func_uint32_t_u_u(4294967295UL, l_962))), (p_13 | ((safe_sub_func_int16_t_s_s(0x9CFFL, (p_13 >= l_962))) | (-2L))))) & p_13)) > l_979), g_667)) > l_159)));
                }
                l_962 = (safe_rshift_func_int8_t_s_u(((18446744073709551614UL | ((+(safe_sub_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(l_965, 0xE507901EL)), ((g_700 || g_108) <= l_959)))) || l_159)) <= (((safe_mod_func_uint8_t_u_u((safe_mod_func_int64_t_s_s(((safe_mod_func_int16_t_s_s(l_959, (((safe_mod_func_int16_t_s_s((g_110 & 5UL), l_31)) != 1UL) ^ 0x45F7C773A72BCD84LL))) == g_667), l_32)), 0xC9L)) <= 4294967295UL) != 0x4B78L)), 2));
            }
            else
            {
                int8_t l_1013 = 0xE5L;
                int64_t l_1014 = 0x454661B5F784611DLL;
                l_996 = p_14;
                l_1014 = (((safe_rshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_u((l_31 != (!(safe_rshift_func_int16_t_s_u(0L, (safe_rshift_func_int8_t_s_s((safe_sub_func_int16_t_s_s((+0UL), (0x11100CBAL || g_177))), p_13)))))), 3)), (((6L & (+(safe_unary_minus_func_int16_t_s(4L)))) && ((l_1013 ^ g_110) <= 0x2AL)) & g_108))), 1)) <= (-1L)) && g_298);
                ++g_1016;
            }
        }
        if (g_339)
            break;
        for (l_33 = 0; (l_33 >= (-28)); l_33 = safe_sub_func_int64_t_s_s(l_33, 7))
        {
            uint32_t l_1031 = 0xD42C570CL;
            int32_t l_1033 = 0x8B3A6A92L;
            if (p_14)
                break;
            for (g_667 = 0; (g_667 <= (-2)); --g_667)
            {
                int16_t l_1023 = 0x8BFFL;
                l_1023 = p_14;
            }
            if (p_13)
            {
                uint8_t l_1030 = 0x9CL;
                if (((g_297 != (0x47L && (safe_lshift_func_uint8_t_u_u(((g_9 || p_13) && (g_110 <= ((safe_sub_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(p_14, 2L)), (((((0x81F1L && l_1030) ^ 0UL) ^ 0L) == l_1031) != 4UL))) >= g_108))), l_1030)))) || g_298))
                {
                    uint8_t l_1032 = 0x94L;
                    l_1032 ^= 1L;
                }
                else
                {
                    return p_14;
                }
                g_1034++;
                l_1015 ^= ((safe_mod_func_int8_t_s_s(g_177, (safe_sub_func_int16_t_s_s((g_108 & ((g_700 > (l_31 | (safe_lshift_func_int8_t_s_s(4L, l_32)))) & (p_13 || ((safe_sub_func_int8_t_s_s((g_177 != (safe_sub_func_int64_t_s_s((4294967295UL ^ p_13), g_700))), l_33)) >= g_1034)))), g_1034)))) ^ p_14);
            }
            else
            {
                int64_t l_1051 = 0x7B437F155E10568FLL;
                if (p_13)
                    break;
                if ((safe_rshift_func_int8_t_s_s((safe_add_func_uint32_t_u_u((l_1051 < (p_13 || (safe_add_func_uint32_t_u_u(p_14, (safe_mod_func_int32_t_s_s(g_110, (((safe_mod_func_uint64_t_u_u((0x5466897AL && 0x542FB140L), g_700)) >= p_13) ^ ((g_700 > l_1033) || 0x4CC231891B3FF4C6LL)))))))), g_700)), l_962)))
                {
                    return p_13;
                }
                else
                {
                    uint8_t l_1058 = 0xFEL;
                    int32_t l_1073 = 7L;
                    int32_t l_1074 = 0xF07AD880L;
                    g_138 |= (((l_1058 & (l_1015 != ((safe_lshift_func_int8_t_s_u((9L & ((safe_sub_func_int8_t_s_s((((safe_rshift_func_int8_t_s_s(g_1034, 0)) < (safe_rshift_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((+g_297), (l_1051 ^ (((safe_lshift_func_int8_t_s_u((g_110 || (l_1051 <= g_178)), g_667)) <= 1L) != l_33)))), 2))) == g_1072), l_965)) == l_31)), p_14)) >= p_13))) >= p_13) && l_1031);
                    --g_1077;
                }
            }
        }
        for (g_110 = (-6); (g_110 <= 19); ++g_110)
        {
            uint32_t l_1091 = 18446744073709551610UL;
            int32_t l_1105 = (-1L);
            int32_t l_1106 = 9L;
            int32_t l_1109 = 1L;
            uint32_t l_1155 = 0xB7F10ED4L;
            uint32_t l_1162 = 4294967293UL;
            l_962 = (safe_mod_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s((((!(1UL == 0x740761FCL)) < (g_108 < ((((safe_sub_func_uint64_t_u_u(l_1091, (g_1034 < ((((safe_mod_func_int64_t_s_s((((safe_rshift_func_int16_t_s_s((safe_mod_func_int8_t_s_s((((safe_sub_func_int8_t_s_s((((g_108 <= g_1077) | 0xDF44BCC2L) == (((safe_unary_minus_func_uint16_t_u(((+g_339) >= 1UL))) <= l_33) > p_13)), g_1076)) < g_1077) >= 0x6439F9CE753B2C59LL), g_177)), 12)) || g_298) == 0x76L), l_1091)) <= 0L) == 251UL) != 4294967289UL)))) == 0x56L) & 0x64EBL) <= g_178))) == 0x6B82FFD5L), l_33)), l_31));
            --g_1110;
            g_9 |= (~(safe_lshift_func_uint8_t_u_u(g_1034, (((((safe_lshift_func_uint16_t_u_u((l_1106 & (safe_mod_func_int32_t_s_s(((+(safe_lshift_func_uint8_t_u_u(l_1091, (safe_rshift_func_uint16_t_u_s(((safe_add_func_int32_t_s_s(((((p_13 != ((safe_lshift_func_int16_t_s_s((0x28B9A5AAL || ((safe_unary_minus_func_uint16_t_u(((l_31 ^ (~(safe_mod_func_uint64_t_u_u(((g_1016 && (safe_add_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(((((safe_lshift_func_int16_t_s_s(((((safe_add_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((((safe_rshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_s(((safe_sub_func_uint32_t_u_u(((safe_sub_func_uint32_t_u_u((l_1102 | ((safe_sub_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(g_1077, p_14)), l_965)) && p_13)), p_13)) & g_178), p_14)) <= 1UL), g_1077)), 2)) < 0x87F01CE0L) && (-1L)), 3)), p_13)) >= l_1105) < g_1077) ^ p_13), 11)) ^ 0x7E7B6CEDL) & l_1015) > g_1110), p_14)), 65535UL))) || p_14), g_138)))) == l_1091))) >= 0xA40C0A46DF9EA56DLL)), 5)) ^ l_1091)) ^ p_14) ^ g_1077) > p_13), p_14)) && p_13), g_700))))) < g_178), 1UL))), l_1103)) || 4UL) | l_1109) >= l_1155) || p_14))));
            l_1105 = (safe_sub_func_int16_t_s_s((safe_rshift_func_int8_t_s_u((safe_rshift_func_int16_t_s_s(l_1162, l_33)), 4)), (safe_unary_minus_func_int64_t_s((safe_rshift_func_uint8_t_u_s(((safe_add_func_uint64_t_u_u(0x9724E13E8E109428LL, (-10L))) & ((0xACL & ((0UL ^ (((((safe_lshift_func_int8_t_s_u((8L && p_14), l_1106)) <= 0x62L) < p_14) | g_1072) || 0xE87BL)) | 0xDCL)) & 250UL)), g_1110))))));
        }
    }
    for (g_1077 = 16; (g_1077 != 29); ++g_1077)
    {
        int32_t l_1198 = (-7L);
        if (g_667)
            break;
        for (p_14 = 22; (p_14 == 38); p_14++)
        {
            g_9 = 0xA88838F2L;
            g_9 = (safe_lshift_func_int8_t_s_s(((p_13 & (safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_u(((safe_sub_func_int16_t_s_s((safe_unary_minus_func_uint32_t_u((p_14 != (l_31 || g_339)))), ((safe_add_func_int32_t_s_s(((+(-1L)) >= (safe_mod_func_int16_t_s_s((safe_rshift_func_int16_t_s_u((safe_add_func_uint32_t_u_u((((p_13 && (0xEBC610E7L <= (safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(65528UL, (safe_lshift_func_int8_t_s_s((g_1016 && l_1198), 7)))), 2)))) >= p_13) > 0x52F8075E05071890LL), g_1110)), g_177)), g_700))), l_962)) != g_138))) > g_1034), 2)), 1))) == g_1077), g_138));
        }
        g_9 = ((((safe_add_func_int8_t_s_s((safe_add_func_int64_t_s_s((l_31 && l_1198), ((safe_mod_func_uint32_t_u_u((0xA73BD8A8L && ((((g_1077 <= l_1198) | l_1075) & g_9) ^ 0UL)), ((safe_lshift_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((0x130B41F1L ^ l_1198), l_1198)), p_14)) | l_31))) <= p_14))), l_1103)) || 1UL) < g_700) && p_13);
    }
    l_1104 = 0xFACDD10DL;
    l_1102 = (-1L);
    return l_962;
}
inline static const uint64_t func_15(int64_t p_16, int8_t p_17, uint32_t p_18, int64_t p_19)
{
    uint8_t l_26 = 6UL;
    --l_26;
    return l_26;
}
inline static int16_t func_40(uint64_t p_41, int8_t p_42, int32_t p_43, const int16_t p_44, int16_t p_45)
{
    int16_t l_125 = 1L;
    uint8_t l_139 = 247UL;
    uint16_t l_155 = 0xB4AEL;
    int16_t l_156 = 0L;
    uint64_t l_157 = 0x105C8CF041155C20LL;
    int32_t l_158 = (-5L);
    for (g_35 = 0; (g_35 != 39); ++g_35)
    {
        int32_t l_115 = 0x82D738A4L;
        int32_t l_124 = 1L;
        for (g_9 = 0; (g_9 < 26); g_9 = safe_add_func_int32_t_s_s(g_9, 8))
        {
            int32_t l_105 = 1L;
            int8_t l_117 = 7L;
            for (p_45 = 0; (p_45 >= 24); ++p_45)
            {
                uint64_t l_106 = 1UL;
                int32_t l_116 = 0x60C92991L;
                if (l_105)
                    break;
                if (l_106)
                {
                    uint32_t l_107 = 1UL;
                    int32_t l_109 = (-7L);
                    g_108 = l_107;
                    l_109 = g_108;
                    ++g_110;
                    for (g_110 = 4; (g_110 >= 4); --g_110)
                    {
                        uint64_t l_118 = 0x20E74272ABD0CEA3LL;
                        l_118++;
                        l_124 &= (((((((safe_rshift_func_int16_t_s_s(func_15((~(p_43 && p_44)), l_118, (p_41 <= (((g_110 == (g_108 >= ((g_108 != (-1L)) && g_9))) & l_115) ^ p_41)), p_41), l_117)) | p_41) ^ p_41) || g_110) | g_35) >= 4L) == l_115);
                    }
                }
                else
                {
                    int32_t l_137 = 0xB2BE9FDCL;
                    l_125 = l_116;
                    g_138 = ((p_41 | (safe_lshift_func_uint16_t_u_u((+((((safe_mod_func_uint32_t_u_u((0x718CB29726E95652LL ^ (safe_add_func_int32_t_s_s(func_15(((l_115 < (safe_add_func_uint16_t_u_u((g_110 ^ ((((((((g_110 && g_108) && (l_124 >= (safe_add_func_int64_t_s_s(l_117, (g_9 || l_117))))) == l_124) && 0xF9L) != 1L) && g_35) & g_9) | g_9)), l_137))) && l_124), g_108, l_115, g_108), g_35))), 0xC662609BL)) ^ 1L) == 0UL) ^ p_43)), g_9))) > g_9);
                }
            }
            g_138 ^= l_117;
        }
        ++l_139;
        l_124 &= p_45;
    }
    l_158 = (safe_add_func_uint64_t_u_u((safe_lshift_func_int16_t_s_s((safe_mul_func_int16_t_s_s((-1L), ((func_80(((p_42 != (func_50((l_139 || func_15(((0L | func_148(l_125, p_44, g_108, g_35, p_42)) || p_44), g_110, g_108, p_42)), l_139, g_110, l_139, l_139) | (-1L))) < l_155), l_156, g_110, g_108, g_110) != l_157) == 0xB982148F47512D44LL))), 11)), g_138));
    return p_43;
}
inline static int32_t func_50(int8_t p_51, uint8_t p_52, uint32_t p_53, const int32_t p_54, uint16_t p_55)
{
    int64_t l_76 = (-1L);
    int32_t l_79 = 1L;
    const int8_t l_96 = 9L;
    int32_t l_98 = 0L;
    l_79 = ((safe_mod_func_int16_t_s_s((0UL ^ ((g_35 && (safe_rshift_func_uint8_t_u_u((p_52 != (((((-1L) != ((func_15(((safe_rshift_func_int16_t_s_u((safe_sub_func_int16_t_s_s(g_35, l_76)), (safe_sub_func_int8_t_s_s(0x75L, func_15(l_76, l_76, l_76, g_35))))) != g_9), p_55, g_35, p_52) | 7UL) ^ 4294967295UL)) > 0x677CCB2DL) >= 0x754B492BL) & g_9)), l_76))) | p_51)), p_55)) > g_35);
    l_98 |= func_80((safe_lshift_func_uint16_t_u_u(l_79, 12)), (~(func_15(l_79, g_9, ((l_79 != (+(((safe_mod_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(((((0xAADFL != ((1UL <= g_9) > (((safe_rshift_func_int16_t_s_u(l_76, (l_76 ^ l_76))) && p_51) || p_54))) || l_79) >= 9L) | 4L), l_96)), g_9)) || l_76) > g_35))) > 0x4DCBD99AL), g_9) <= (-1L))), g_35, g_35, p_54);
    return g_35;
}
inline static int32_t func_80(const uint32_t p_81, uint64_t p_82, uint8_t p_83, uint32_t p_84, uint8_t p_85)
{
    int32_t l_97 = 2L;
    g_9 &= 0xFF357798L;
    g_9 = l_97;
    return g_35;
}
inline static uint16_t func_148(int8_t p_149, const int64_t p_150, int32_t p_151, uint16_t p_152, const uint8_t p_153)
{
    int64_t l_154 = 0xD022AC7DB9AC0673LL;
    return l_154;
}
static int8_t func_168(uint64_t p_169, int32_t p_170)
{
    int32_t l_171 = 3L;
    int32_t l_172 = 0L;
    int32_t l_173 = 0xCCF6335BL;
    int32_t l_174 = 0x8D9708B6L;
    int32_t l_175 = 1L;
    int32_t l_176 = 0x9494419DL;
    int16_t l_207 = 0x5888L;
    uint32_t l_208 = 0UL;
    uint16_t l_607 = 0xC35AL;
    uint8_t l_626 = 0x7BL;
    uint64_t l_627 = 0xD783F521F7CC3D62LL;
    int8_t l_682 = 2L;
    int16_t l_727 = 3L;
    uint16_t l_728 = 0x1264L;
    int64_t l_729 = (-9L);
    uint64_t l_780 = 0x8A71A114269E5A54LL;
    const uint8_t l_914 = 0xE8L;
    uint16_t l_928 = 1UL;
    int32_t l_948 = (-1L);
    --g_178;
    if ((func_181(l_174, (((safe_lshift_func_int8_t_s_s(((safe_mod_func_uint16_t_u_u(2UL, (safe_lshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_u((-1L), ((safe_rshift_func_uint16_t_u_s((safe_add_func_int32_t_s_s(((safe_rshift_func_uint16_t_u_u(((safe_sub_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s((safe_sub_func_int64_t_s_s(p_170, ((safe_sub_func_uint16_t_u_u((safe_unary_minus_func_int8_t_s(0x43L)), l_207)) != ((l_176 || (((l_208 && (safe_mod_func_int64_t_s_s((((safe_sub_func_int8_t_s_s((((safe_add_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(65531UL, g_108)), 13)), 0x651808F8001326FFLL)) || 0x83E9L) || 0x1E5EACDDF55BC500LL), 0x0CL)) && 0x60L) != g_138), p_170))) ^ g_9) >= g_177)) >= g_177)))), 1)), 0x2EL)) > 0xFDDEAC1AL), 1)) ^ p_169), 4294967292UL)), 7)) ^ g_35))), 7)))) | g_110), p_170)) && l_172) | g_110)) || (-1L)))
    {
        uint32_t l_547 = 0x44D82C8CL;
        for (l_208 = 16; (l_208 > 20); l_208 = safe_add_func_int8_t_s_s(l_208, 7))
        {
            l_176 ^= p_170;
        }
        l_547--;
    }
    else
    {
        int32_t l_605 = (-10L);
        uint32_t l_670 = 0x7DB0D489L;
        for (p_170 = (-21); (p_170 < 14); p_170++)
        {
            int8_t l_563 = 0x67L;
            uint8_t l_629 = 0x12L;
            int32_t l_647 = 0xC586C547L;
            if ((((safe_add_func_int16_t_s_s((0xEE41843362B28E3FLL & (((-5L) != ((safe_sub_func_int64_t_s_s(g_339, (+0x14C7L))) || (safe_sub_func_int16_t_s_s(((0x8DL || (safe_lshift_func_uint8_t_u_s(((safe_rshift_func_uint16_t_u_s(l_563, 3)) != ((p_169 == p_169) != (safe_rshift_func_uint8_t_u_s(p_170, 3)))), 7))) == p_169), l_176)))) <= p_169)), (-1L))) < l_175) != l_563))
            {
                const uint16_t l_606 = 0xAB08L;
                l_171 = (((((safe_mod_func_int64_t_s_s(((((safe_sub_func_int8_t_s_s(((((p_169 & (l_563 ^ (safe_sub_func_int64_t_s_s((safe_add_func_uint64_t_u_u((safe_mod_func_int32_t_s_s((safe_lshift_func_int8_t_s_s((+((!(safe_sub_func_int64_t_s_s(p_169, (((p_170 != (+((safe_sub_func_uint32_t_u_u((~(((safe_rshift_func_uint8_t_u_s(p_169, 6)) >= (safe_add_func_uint32_t_u_u((safe_mod_func_int16_t_s_s((safe_add_func_uint64_t_u_u((safe_mod_func_uint16_t_u_u(l_563, (-2L))), (safe_lshift_func_int16_t_s_u((((safe_rshift_func_int8_t_s_s(((~(((safe_lshift_func_int8_t_s_s(p_169, ((safe_lshift_func_int16_t_s_s((4294967295UL <= g_178), 12)) == p_170))) <= 0x12E4BF430DAA9E50LL) == g_108)) ^ p_170), l_605)) < g_35) | g_339), 2)))), p_170)), g_298))) > 0xE215L)), 0x8E932011L)) | 0x64DFL))) > 255UL) != g_138)))) <= 0x24CAA257L)), 5)), 1UL)), l_563)), l_563)))) < 0UL) & p_170) ^ g_108), l_606)) != g_138) == 0UL) < l_605), l_605)) != 0L) ^ g_177) || p_169) <= 18446744073709551608UL);
                return g_138;
            }
            else
            {
                int32_t l_628 = 0x48F3110DL;
                uint16_t l_646 = 0x3E43L;
                uint16_t l_666 = 1UL;
                g_138 = l_607;
                for (l_175 = (-8); (l_175 == 12); l_175 = safe_add_func_int32_t_s_s(l_175, 1))
                {
                    return g_108;
                }
                if ((safe_mod_func_uint64_t_u_u((safe_add_func_uint16_t_u_u(l_176, 0UL)), (safe_add_func_uint16_t_u_u((p_170 ^ (safe_mod_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(((l_563 | ((g_35 >= (safe_lshift_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u((((((-9L) & (p_169 && (4294967286UL < (safe_add_func_int8_t_s_s(((0xCA2CE9A0L && 3L) >= 1L), g_339))))) == l_626) < l_171) | l_563), l_563)), 1))) >= l_627)) <= l_628), 1UL)), 5L))), l_629)))))
                {
                    g_138 = (safe_mod_func_uint32_t_u_u((g_138 ^ (safe_rshift_func_uint8_t_u_s(l_207, 0))), (safe_sub_func_uint32_t_u_u(((8L & (p_170 == ((g_178 <= (safe_rshift_func_int8_t_s_s((safe_sub_func_uint64_t_u_u(((((safe_mod_func_int8_t_s_s(((((safe_rshift_func_int16_t_s_s(p_169, 8)) != (safe_rshift_func_uint8_t_u_u(p_169, l_605))) >= p_169) || 0x22L), p_169)) | l_629) >= g_108) ^ p_169), l_563)), 3))) || l_646))) | p_169), (-1L)))));
                    l_647 |= p_169;
                }
                else
                {
                    int32_t l_651 = 2L;
                    int32_t l_683 = 6L;
                    l_651 = (safe_add_func_uint64_t_u_u(p_170, (~65532UL)));
                    g_667 = ((safe_mod_func_int32_t_s_s((((safe_lshift_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_u(l_651, 0)), 4)) > ((((((!(safe_sub_func_uint16_t_u_u(l_605, 0xDD1EL))) & (safe_mod_func_int32_t_s_s(((((p_169 != l_208) <= (p_170 & (+1L))) != 3L) == ((l_628 != l_647) != 0xA0EE495EL)), l_646))) <= g_9) ^ 0x80E682F7A6DE3D14LL) > g_138) >= g_138)), g_298)) | (-1L)) != l_666), 0xE52A0C30L)) ^ g_35);
                    if ((safe_sub_func_int16_t_s_s((g_9 ^ (p_169 != ((((((l_670 || (g_35 || ((~(65535UL ^ ((g_177 & (safe_rshift_func_int16_t_s_s((((+((l_646 & (safe_rshift_func_uint16_t_u_s(((1L <= 0xE1F8B2898107CF97LL) <= p_170), l_670))) <= 0UL)) ^ 1L) != 9UL), 7))) == g_298))) >= g_177))) >= l_670) < 1L) != 0x76D961DEL) <= p_169) || 0UL))), g_110)))
                    {
                        g_9 = ((!((((g_110 & p_170) >= (((safe_lshift_func_int8_t_s_u((0x97L != 0xCCL), ((g_138 != (safe_mod_func_int16_t_s_s((1UL <= p_170), 0xA5AEL))) | (l_651 & g_297)))) && (-6L)) ^ g_178)) & 1UL) || g_138)) & p_170);
                        l_683 &= l_682;
                    }
                    else
                    {
                        return p_170;
                    }
                }
            }
        }
    }
    if ((p_169 || 6UL))
    {
        int16_t l_696 = (-2L);
        uint16_t l_697 = 0x8B21L;
        l_171 = ((safe_add_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_u(((3L & (safe_sub_func_int8_t_s_s(((((p_169 | 0x5AL) & 0x8BL) || p_169) && ((safe_sub_func_int8_t_s_s((safe_mod_func_int32_t_s_s((((((((((((0x7BL & p_169) <= ((safe_rshift_func_uint16_t_u_s(65529UL, 12)) == (((p_170 != p_170) > (-10L)) < l_696))) == 0x5F462AB2L) & p_169) || l_697) & p_170) || g_297) >= g_108) >= l_696) && l_626) ^ l_208), 6L)), l_627)) | g_339)), l_626))) & p_169), 8)) ^ 0xE0DFL), l_697)) ^ g_298);
        g_9 &= (g_700 | (l_607 != l_626));
    }
    else
    {
        int32_t l_717 = 0xE0A8AAA3L;
        uint16_t l_722 = 0x65DEL;
        uint8_t l_742 = 0UL;
        int32_t l_743 = (-3L);
        const int32_t l_849 = (-5L);
        int8_t l_860 = (-1L);
        l_729 |= ((4L < (safe_lshift_func_uint8_t_u_s(((((safe_lshift_func_uint8_t_u_u(g_9, 0)) & ((~(safe_add_func_uint16_t_u_u(0xEF27L, (((5L < (!(safe_add_func_int16_t_s_s((safe_mod_func_int32_t_s_s((((((safe_add_func_int32_t_s_s((safe_sub_func_int64_t_s_s(l_717, (((((g_138 < (safe_sub_func_int16_t_s_s(((((safe_sub_func_int64_t_s_s(l_722, ((+((((0x981BCEC03A269736LL == ((safe_mod_func_int16_t_s_s(((+65535UL) > l_722), l_207)) && g_138)) <= l_727) >= p_170) & p_170)) != 0UL))) | p_170) || (-2L)) >= g_9), l_727))) || g_177) & l_722) | l_728) | 0UL))), p_170)) ^ g_35) | g_339) && l_717) && g_297), g_667)), 65535UL)))) <= g_667) <= g_108)))) != 0xD4L)) && g_108) <= 0x8AL), 5))) && 0x13L);
        l_172 &= ((((((((-7L) < (safe_lshift_func_uint8_t_u_s(((((g_108 >= (((safe_mod_func_int8_t_s_s((safe_add_func_int32_t_s_s((safe_mod_func_uint64_t_u_u((l_175 > (g_9 >= ((safe_lshift_func_uint8_t_u_u(((0x777EC360L || (safe_add_func_int16_t_s_s((l_607 & (1UL || (l_729 | p_170))), l_742))) || p_169), 5)) ^ l_742))), p_169)), 5UL)), p_169)) && 1L) > g_667)) && g_667) != 0x8762EF23L) ^ l_743), 6))) ^ l_743) == p_170) | 0xDF50196CCCDC0E4CLL) < 0x851C7AA1L) && p_169) ^ g_110);
        g_138 = g_297;
        for (g_339 = 0; (g_339 == 9); g_339++)
        {
            uint64_t l_757 = 18446744073709551606UL;
            uint64_t l_807 = 18446744073709551606UL;
            int32_t l_808 = (-1L);
            uint32_t l_886 = 0xA8EB0B87L;
            p_170 = (safe_add_func_int32_t_s_s(((safe_sub_func_int64_t_s_s(((safe_mod_func_int32_t_s_s((safe_unary_minus_func_int8_t_s((safe_add_func_uint8_t_u_u(0x02L, (((safe_rshift_func_int8_t_s_s(l_757, 0)) ^ l_729) || (safe_rshift_func_int8_t_s_u(l_757, (((safe_rshift_func_int16_t_s_s((-1L), 4)) >= g_138) <= (g_138 < (safe_sub_func_uint64_t_u_u(p_170, ((((safe_sub_func_int32_t_s_s((l_757 == 0x54A7L), g_339)) ^ p_170) == p_169) & p_170)))))))))))), g_110)) && p_170), 0xD3678853474502B8LL)) >= 0x49F5L), p_170));
            l_171 &= (safe_lshift_func_int8_t_s_u((0xFF16L && (safe_add_func_uint64_t_u_u((((safe_rshift_func_uint16_t_u_u(((((safe_sub_func_uint8_t_u_u((safe_sub_func_int64_t_s_s((((safe_rshift_func_int8_t_s_s((-7L), l_780)) <= (safe_add_func_uint64_t_u_u(0x6F48A93D07BB10A7LL, p_170))) != g_178), (safe_unary_minus_func_uint16_t_u((((g_339 & l_722) != (g_339 == l_757)) ^ 0x7618C1D6L))))), 255UL)) == p_169) ^ p_170) <= 18446744073709551615UL), p_170)) < p_170) || p_169), 0x8F7A2ED855E32588LL))), 6));
            p_170 = ((safe_sub_func_uint8_t_u_u((l_757 | ((p_169 | ((safe_sub_func_int8_t_s_s((safe_add_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_u(g_110, 5)), 4UL)), p_170)) < 0x99BDL)) == p_170)), ((safe_add_func_int32_t_s_s((g_667 || (safe_rshift_func_uint8_t_u_u(252UL, 7))), l_743)) >= p_169))) != g_35);
            for (g_138 = 0; (g_138 > (-9)); g_138 = safe_sub_func_uint8_t_u_u(g_138, 9))
            {
                uint8_t l_821 = 0xF2L;
                uint32_t l_885 = 0UL;
                int32_t l_887 = 0L;
                l_808 = (((safe_sub_func_int32_t_s_s((0x0D6DFB27AFACB373LL && 0x1C4B697E6CD3EA2ALL), ((((safe_lshift_func_uint16_t_u_u((((g_108 && (p_170 || (safe_unary_minus_func_uint8_t_u(255UL)))) >= (((+g_178) < ((safe_sub_func_int64_t_s_s((2UL == 4294967289UL), ((!l_807) & g_177))) ^ g_298)) > p_170)) | g_108), p_170)) <= 8L) >= 0L) || l_757))) & 0x814A270EL) | p_170);
                if (g_177)
                    break;
                for (l_757 = 0; (l_757 >= 35); l_757++)
                {
                    uint8_t l_822 = 247UL;
                    int32_t l_850 = 0L;
                    if (g_667)
                    {
                        uint16_t l_823 = 0x0A15L;
                        l_176 &= 0xF87B7233L;
                        g_9 = ((safe_rshift_func_int16_t_s_s(0x5D67L, ((((p_169 ^ (safe_rshift_func_int8_t_s_s(((safe_rshift_func_int8_t_s_u((((((0L && ((g_297 > (g_9 < ((l_176 & ((safe_rshift_func_uint8_t_u_u(l_742, (safe_mod_func_int32_t_s_s(l_821, l_821)))) > p_170)) & g_108))) == l_822)) & g_110) < l_208) != l_808) <= 0x76F8L), 5)) & g_700), 2))) ^ 0xF2F1L) || g_298) ^ p_170))) || l_823);
                        l_850 = (safe_add_func_int32_t_s_s(l_821, (safe_lshift_func_uint16_t_u_s((safe_lshift_func_int16_t_s_s((safe_add_func_uint32_t_u_u((((safe_sub_func_int32_t_s_s((safe_lshift_func_int16_t_s_u((((-5L) ^ 1UL) | ((((safe_rshift_func_uint16_t_u_u(g_298, (safe_sub_func_uint8_t_u_u((((safe_sub_func_uint64_t_u_u(1UL, ((((safe_lshift_func_int8_t_s_s((~(safe_mod_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u(0x55L, g_700)), g_108))), (0xECB5477E608005D3LL ^ l_823))) | p_169) != 65535UL) < p_170))) ^ l_757) ^ l_742), g_700)))) > 0xB91CECA7L) ^ 0x23F1L) && l_849)), l_822)), l_728)) == p_170) < p_170), p_169)), p_169)), p_170))));
                        l_717 &= ((safe_mod_func_uint32_t_u_u(2UL, (safe_lshift_func_int8_t_s_u((((~((safe_sub_func_int32_t_s_s(((safe_mod_func_int16_t_s_s(((p_169 > 0x7D0D4E049B4DC2C9LL) && (l_860 >= (!l_823))), l_821)) || (g_177 == ((safe_lshift_func_int16_t_s_u((0x7CL < l_757), g_138)) < p_169))), p_169)) || 0x9417D865338BAB3ALL)) > p_169) >= g_667), 7)))) | p_169);
                    }
                    else
                    {
                        uint32_t l_868 = 2UL;
                        l_808 |= (((safe_lshift_func_int16_t_s_u(((g_110 & 0x9834FE6B64325831LL) <= (safe_mod_func_uint8_t_u_u((l_868 < (p_170 || ((safe_rshift_func_int16_t_s_u(((g_339 ^ ((safe_lshift_func_uint8_t_u_u((safe_add_func_int16_t_s_s((((0L == (safe_lshift_func_uint8_t_u_s(((safe_lshift_func_int8_t_s_s(((((safe_sub_func_uint16_t_u_u(((4294967293UL == ((p_170 | l_780) <= 0x350376C1C0E45286LL)) <= g_138), g_9)) < p_170) && 0UL) >= l_717), 4)) | p_169), g_667))) == g_35) != 4UL), p_169)), 1)) <= g_110)) || l_885), 5)) < l_822))), p_169))), l_868)) <= l_886) < (-1L));
                        l_887 = l_757;
                    }
                    return p_169;
                }
            }
        }
    }
    if ((safe_lshift_func_int16_t_s_u(1L, 8)))
    {
        uint8_t l_903 = 0x4DL;
        int32_t l_917 = (-1L);
        uint64_t l_918 = 5UL;
        l_917 = ((safe_add_func_int8_t_s_s((-1L), (((((safe_sub_func_uint32_t_u_u((safe_mod_func_uint64_t_u_u((((((((safe_rshift_func_int16_t_s_u((((safe_sub_func_uint64_t_u_u((((+(safe_add_func_uint16_t_u_u(p_170, g_667))) == l_175) <= (l_903 >= (safe_add_func_uint64_t_u_u((~l_174), ((((safe_add_func_int16_t_s_s(l_903, (safe_unary_minus_func_uint8_t_u((safe_lshift_func_int16_t_s_u(((((safe_rshift_func_uint8_t_u_s(l_914, (safe_add_func_int8_t_s_s(p_170, g_35)))) || l_780) || l_903) >= g_177), l_903)))))) > g_110) <= l_172) | 0x46F4741CL))))), p_169)) >= g_700) == p_169), l_176)) >= 0x55F0E2775F6733D8LL) == p_169) & l_903) < g_667) | g_177) > l_917), 18446744073709551615UL)), l_903)) < l_173) || g_108) < l_727) == l_918))) == l_917);
        l_172 ^= ((((!(safe_add_func_uint16_t_u_u(((safe_sub_func_int32_t_s_s(((g_178 < (safe_rshift_func_int8_t_s_u(((safe_mod_func_int64_t_s_s((-1L), g_110)) >= ((l_928 | 1L) == g_177)), ((l_175 < g_110) && ((((((safe_add_func_int64_t_s_s(l_917, 0x072303308098ED6ELL)) < 255UL) != g_700) >= 0xCB8091BE74A69634LL) >= p_170) || p_170))))) & g_138), p_170)) < p_170), g_700))) || 0xD0L) | g_297) | g_177);
        l_172 |= (p_170 != p_170);
        l_917 = g_110;
    }
    else
    {
        uint32_t l_933 = 1UL;
        int8_t l_947 = 0x36L;
        p_170 = (p_170 > ((((p_170 <= l_933) & ((safe_rshift_func_int16_t_s_u(0x899CL, 0)) > g_177)) != (((((safe_lshift_func_uint8_t_u_s((((!((safe_add_func_int64_t_s_s(((6L != ((safe_add_func_uint32_t_u_u(((g_339 ^ (safe_mod_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u((g_700 > (7L || p_169)), g_700)), l_728))) && 0x1FL), g_297)) <= l_933)) != 4UL), l_947)) <= l_914)) >= 65535UL) | l_933), 5)) & g_178) < l_727) | l_948) < g_9)) < p_170));
    }
    return g_178;
}
static uint8_t func_181(int64_t p_182, uint32_t p_183)
{
    int8_t l_219 = 0L;
    uint64_t l_223 = 0UL;
    int16_t l_261 = (-10L);
    int8_t l_274 = (-4L);
    int32_t l_289 = (-1L);
    if ((((-7L) || g_177) ^ l_219))
    {
        l_223 = (0x91L && (((safe_mod_func_uint16_t_u_u((+0xBDC1381652B82488LL), p_182)) && 1L) | l_219));
    }
    else
    {
        uint64_t l_224 = 1UL;
        l_224 = p_182;
        g_9 = ((safe_add_func_uint64_t_u_u((((safe_lshift_func_int16_t_s_u(((safe_sub_func_uint8_t_u_u(((+p_182) == (!((safe_add_func_int32_t_s_s(((~(((safe_sub_func_uint16_t_u_u((((safe_lshift_func_uint8_t_u_u(l_224, (((safe_unary_minus_func_uint32_t_u((safe_rshift_func_uint16_t_u_s(((safe_add_func_uint64_t_u_u(((((-1L) & (p_183 | ((safe_rshift_func_int8_t_s_s((safe_sub_func_int32_t_s_s(((((safe_mod_func_uint8_t_u_u((((((((((safe_mod_func_uint8_t_u_u(((safe_mod_func_uint32_t_u_u(p_183, (safe_sub_func_uint64_t_u_u((((safe_lshift_func_uint8_t_u_u(((l_224 & (((((1UL < (((safe_rshift_func_uint16_t_u_u((0x2820C098L >= (((-1L) > (-1L)) || p_183)), 8)) < l_219) && g_108)) > g_9) && 7L) <= g_35) || p_183)) >= l_224), 6)) >= 0xC4DBL) && g_108), 0UL)))) <= g_35), p_182)) || p_183) && p_182) & 0x3F262008L) & l_224) ^ g_138) >= p_182) >= g_9) != (-2L)), l_223)) && g_35) & g_35) || g_35), p_183)), 7)) < p_182))) != 0x9467L) ^ 0UL), 0x8FD093CF0600BE36LL)) != l_223), g_35)))) | l_224) > 1L))) == g_108) | 0xAEE27A70L), 9UL)) ^ g_138) ^ (-1L))) > g_177), 8UL)) != g_35))), p_183)) | l_224), 6)) < l_224) <= 252UL), 0x40898BEAC2537462LL)) < l_261);
    }
    if (g_108)
    {
        uint8_t l_262 = 0x8FL;
        l_262 = g_138;
        g_9 |= ((g_138 < (safe_lshift_func_uint16_t_u_s((safe_mod_func_int64_t_s_s(((safe_sub_func_uint64_t_u_u(l_262, (safe_mod_func_int8_t_s_s(0L, p_182)))) != (((((p_182 & (p_183 < p_182)) && g_178) < p_182) & 0x9BB6L) == 0xC222626586A66762LL)), (-3L))), 3))) ^ p_183);
    }
    else
    {
        uint32_t l_271 = 1UL;
        int32_t l_290 = 0xCEF6D558L;
        int32_t l_296 = 0xF18D4743L;
        int32_t l_338 = 0x9FA897B0L;
        if ((l_261 == (l_271 > (safe_sub_func_int32_t_s_s(l_274, (safe_mod_func_uint16_t_u_u(((safe_add_func_uint64_t_u_u(l_271, 0L)) || ((safe_rshift_func_uint16_t_u_s((l_271 < 0xDA19L), 3)) ^ ((safe_lshift_func_int16_t_s_u((l_271 == (((g_138 | g_35) <= g_35) && p_182)), 9)) > g_177))), 1UL)))))))
        {
            return g_35;
        }
        else
        {
            uint32_t l_291 = 0x15DD1E5AL;
            int32_t l_294 = (-2L);
            int32_t l_295 = 0xF24C6D4EL;
            l_289 = ((safe_rshift_func_uint16_t_u_u(((0x0310DE8F57C2B75BLL && 0L) || (g_35 == g_9)), (safe_mod_func_int8_t_s_s((g_9 ^ (g_35 ^ 1UL)), l_274)))) && l_271);
            l_291++;
            g_298++;
        }
        g_138 = (safe_mod_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_u((p_182 || 65535UL), (p_183 ^ (safe_unary_minus_func_int16_t_s(((p_183 != ((((safe_mod_func_uint8_t_u_u(p_182, g_9)) <= g_110) < (((safe_lshift_func_uint16_t_u_s((safe_add_func_int32_t_s_s(((g_35 > (safe_rshift_func_uint16_t_u_u((0x6EDAL > g_9), 2))) < g_9), 4294967295UL)), 15)) || p_183) >= l_271)) & g_110)) <= g_9)))))) || g_35), l_290)), g_298));
        l_296 = ((safe_rshift_func_int8_t_s_u((((l_271 < (((p_182 | ((safe_add_func_int64_t_s_s(((safe_sub_func_uint64_t_u_u(p_182, ((((safe_rshift_func_uint8_t_u_u(0xABL, 7)) || (+l_261)) == l_271) || p_182))) == g_138), p_182)) != g_298)) > g_298) && l_261)) || 0x9B25979984349FD6LL) | l_296), 2)) > g_110);
        g_9 = (((g_138 >= ((safe_lshift_func_int16_t_s_s(((((((safe_lshift_func_int8_t_s_s(0x6BL, (safe_lshift_func_int16_t_s_u(g_178, g_177)))) ^ 65535UL) < ((safe_mod_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((!(p_183 < g_297)), 10)), (safe_sub_func_int16_t_s_s(0x0A9BL, (((((0xF779L || l_219) & 0xAC577DD6L) >= 0x8263L) && l_296) != p_183))))) & 0L)) == 0L) >= p_182) && l_338), 9)) || g_177)) != 0xE82F85C9L) > g_339);
    }
    for (g_298 = 0; (g_298 == 4); ++g_298)
    {
        int32_t l_342 = 1L;
        int32_t l_354 = 0x52C48C06L;
        int32_t l_363 = 0x13D1F3DBL;
        if (l_342)
        {
            uint32_t l_347 = 18446744073709551614UL;
            g_138 = (((p_182 && l_223) > (safe_mod_func_int16_t_s_s(g_177, (safe_rshift_func_int16_t_s_u((-1L), 15))))) | (((g_178 & (l_347 ^ (((((safe_lshift_func_uint16_t_u_s(l_342, 0)) == (l_219 & (((safe_sub_func_int8_t_s_s(0xF1L, g_9)) ^ 18446744073709551615UL) > g_9))) != g_298) < 0x8DE9F75FL) && p_182))) || 0xF0L) > p_182));
            l_354 = ((8L >= p_182) < p_182);
        }
        else
        {
            uint32_t l_367 = 0x462B6A1BL;
            for (g_178 = 10; (g_178 >= 58); ++g_178)
            {
                l_289 = (1L != (((0x61L & ((!(safe_lshift_func_uint16_t_u_u(p_183, (safe_add_func_int8_t_s_s((!(l_363 > ((safe_lshift_func_int16_t_s_u(0L, 12)) >= (g_35 && p_182)))), (((~((0xF4B5L < (((g_138 | g_35) && p_182) && g_35)) < 0xD9FBL)) && g_138) != p_183)))))) != 7L)) != p_182) <= p_182));
                l_289 = l_261;
            }
            ++l_367;
        }
        if (l_363)
        {
            const uint32_t l_402 = 0x0E000E15L;
            int32_t l_403 = 0xA5F7E6AAL;
            if ((((safe_rshift_func_int16_t_s_s(p_182, (safe_rshift_func_int16_t_s_u((~(safe_rshift_func_int8_t_s_u(((safe_add_func_uint32_t_u_u((safe_rshift_func_int8_t_s_s((safe_unary_minus_func_uint32_t_u((safe_lshift_func_int16_t_s_s(((((((+(1UL & l_289)) >= (2UL || 0xD599L)) | l_354) || p_182) < (safe_rshift_func_uint16_t_u_s((((p_183 && l_363) == p_183) | 0xFDL), p_183))) || p_182), p_183)))), g_339)), g_108)) | 0x8F75L), l_274))), g_297)))) || g_108) != l_289))
            {
                if (g_35)
                    break;
            }
            else
            {
                l_403 = (g_138 | (safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(1UL, (safe_sub_func_int32_t_s_s((safe_mod_func_uint8_t_u_u(((-1L) >= ((safe_add_func_uint16_t_u_u(0xF5E7L, (((safe_rshift_func_uint16_t_u_s(g_35, ((((l_223 == ((((safe_mod_func_uint8_t_u_u(((safe_unary_minus_func_int8_t_s(g_110)) == g_110), l_289)) | 4UL) <= l_223) && g_339)) > g_108) > 0x9F704017L) >= p_182))) > 254UL) != g_138))) != l_402)), g_138)), 0xECE72C06L)))), g_138)));
                g_138 = 0x6DDA7767L;
            }
            g_138 &= ((safe_rshift_func_int8_t_s_u((p_182 > l_403), 1)) == l_354);
            for (g_339 = 26; (g_339 != 25); g_339 = safe_sub_func_int8_t_s_s(g_339, 1))
            {
                uint32_t l_408 = 0x48654136L;
                l_408--;
            }
            if ((safe_rshift_func_uint8_t_u_u((0L == (((safe_rshift_func_uint16_t_u_s((safe_add_func_int32_t_s_s(p_182, (((safe_rshift_func_int16_t_s_s((g_35 & (0x7BF04F6DL == (~((safe_add_func_uint8_t_u_u(l_223, ((safe_sub_func_uint32_t_u_u(g_177, g_339)) & (p_182 | 0x366CL)))) | l_289)))), 4)) < g_178) | p_183))), g_138)) ^ p_182) && g_178)), 1)))
            {
                return p_183;
            }
            else
            {
                int32_t l_446 = 0xBC03DAD8L;
                int32_t l_453 = 0xB3864829L;
                l_453 = (0xA933L > (((((((safe_rshift_func_int8_t_s_s((safe_mod_func_int16_t_s_s(((((65534UL && (safe_lshift_func_int8_t_s_u((((-6L) >= (safe_rshift_func_int8_t_s_u((safe_add_func_int32_t_s_s(l_261, ((((+g_177) < (((safe_sub_func_int32_t_s_s((safe_add_func_int32_t_s_s((~(((safe_sub_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_u((((((l_446 == (safe_lshift_func_int16_t_s_u(((safe_add_func_int8_t_s_s((((65535UL <= (safe_sub_func_uint32_t_u_u((0x397C8A83L == p_183), 4294967295UL))) | 4L) && g_339), l_446)) <= p_183), p_182))) ^ g_138) & 255UL) | l_289) == g_35), 7)), 6)), l_402)) > g_298) ^ l_402)), g_297)), p_182)) && l_223) && g_9)) & g_298) & 0x82L))), g_177))) || 0L), 1))) < 0xFC4C1116L) < l_403) && 0xDB8AA7565D6A2F6ELL), 0xBB20L)), 0)) == g_9) & 0x67L) && 6UL) ^ p_182) < g_110) != g_178));
            }
        }
        else
        {
            uint32_t l_456 = 0x1FB03A89L;
            uint8_t l_482 = 0x28L;
            for (l_223 = 0; (l_223 <= 56); l_223 = safe_add_func_uint16_t_u_u(l_223, 1))
            {
                --l_456;
                g_138 = (1UL & g_110);
                l_363 &= g_178;
            }
            l_482 ^= (safe_sub_func_uint8_t_u_u((((((safe_sub_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((safe_add_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_u(((safe_add_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((((247UL > (255UL == (g_9 < (safe_mod_func_int8_t_s_s(((g_339 > (safe_unary_minus_func_uint64_t_u(((g_110 || ((l_456 >= ((((0x1AFC6B86L && (safe_rshift_func_uint8_t_u_s(l_261, ((((((p_183 == p_183) & p_182) ^ g_35) <= g_297) == p_183) != l_456)))) == l_223) <= g_339) > l_342)) && p_183)) | g_35)))) != l_342), g_35))))) == g_339) <= 0xC0L), l_456)), (-6L))) || 6UL), 5)), 6)), 0xF0F04271E6D9B8B5LL)), g_108)), g_297)) <= 0xDE76L) | 0xD703F634L) | l_456) <= l_289), p_183));
        }
    }
    for (g_297 = (-19); (g_297 <= 8); g_297++)
    {
        int8_t l_498 = 0x9FL;
        int16_t l_525 = (-1L);
        int32_t l_526 = (-1L);
        const uint32_t l_543 = 0x4478303DL;
        g_9 = (safe_add_func_uint16_t_u_u((255UL || g_108), ((((safe_mod_func_uint8_t_u_u(g_138, 1UL)) < (-10L)) != (g_35 >= (!((safe_mod_func_uint64_t_u_u((safe_mod_func_int16_t_s_s(g_339, p_182)), (safe_rshift_func_int8_t_s_s(0x28L, g_9)))) ^ g_297)))) & p_183)));
        if (p_182)
            continue;
        for (g_339 = (-20); (g_339 != 1); g_339 = safe_add_func_int8_t_s_s(g_339, 7))
        {
            int32_t l_538 = (-4L);
            int32_t l_544 = 0x2B0EBEEAL;
            l_526 &= (l_498 || (safe_mod_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((-3L), (((safe_rshift_func_uint8_t_u_u((safe_sub_func_int64_t_s_s((((p_183 < ((((g_297 < (g_339 > (g_297 == ((safe_mod_func_uint8_t_u_u((((((safe_rshift_func_int16_t_s_u((4294967292UL && ((safe_add_func_uint32_t_u_u(g_177, (safe_rshift_func_uint8_t_u_u((safe_add_func_int64_t_s_s((safe_add_func_uint32_t_u_u((((safe_add_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(((safe_sub_func_int32_t_s_s((((g_108 <= 0x6566E9846EECE68CLL) > p_183) | 0xA43F426DL), p_183)) == 3L), p_182)), p_183)) <= p_183) & g_298), 0x02D1D452L)), g_178)), 2)))) || l_223)), 3)) & g_35) | 0L) > p_183) | 0x9B761190L), l_219)) <= g_298)))) < g_110) ^ g_178) <= l_498)) >= l_498) < p_182), 1L)), l_498)) & p_182) | 0xFF2559C4L))), l_525)));
            l_544 &= ((safe_mod_func_int64_t_s_s((safe_lshift_func_int8_t_s_u(l_219, (safe_lshift_func_int16_t_s_s((safe_add_func_uint64_t_u_u(0x2E5E93C6BA4E8C01LL, (safe_unary_minus_func_int32_t_s(((l_538 <= (p_182 > (0x08D8L || l_525))) >= ((((safe_sub_func_uint32_t_u_u(((safe_lshift_func_uint8_t_u_u(p_182, ((1UL | 0xE805L) | g_298))) && g_339), l_543)) ^ l_538) > p_183) != p_182)))))), p_182)))), g_138)) && l_289);
            l_544 = g_110;
            if (p_182)
                continue;
        }
    }
    return g_339;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_9;
    csmith_sink_ = g_35;
    csmith_sink_ = g_108;
    csmith_sink_ = g_110;
    csmith_sink_ = g_138;
    csmith_sink_ = g_177;
    csmith_sink_ = g_178;
    csmith_sink_ = g_297;
    csmith_sink_ = g_298;
    csmith_sink_ = g_339;
    csmith_sink_ = g_667;
    csmith_sink_ = g_700;
    csmith_sink_ = g_1016;
    csmith_sink_ = g_1034;
    csmith_sink_ = g_1072;
    csmith_sink_ = g_1076;
    csmith_sink_ = g_1077;
    csmith_sink_ = g_1110;
    platform_main_end(0,0);
    return 0;
}
