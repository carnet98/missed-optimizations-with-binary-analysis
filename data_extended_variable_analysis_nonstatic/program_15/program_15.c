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

volatile uint32_t csmith_sink_ = 0;
static long __undefined;
static int32_t g_18[5] = {0L, 0L, 0L, 0L, 0L};
static int32_t g_52 = 0xCD908FBDL;
static int32_t *g_112 = &g_18[4];
static int32_t **g_111[7][10][3] = {{{&g_112, &g_112, &g_112}, {&g_112, &g_112, &g_112}, {&g_112, &g_112, &g_112}, {&g_112, &g_112, &g_112}, {&g_112, &g_112, &g_112}, {&g_112, &g_112, &g_112}, {&g_112, &g_112, &g_112}, {&g_112, &g_112, &g_112}, {&g_112, &g_112, &g_112}, {&g_112, &g_112, &g_112}}, {{&g_112, &g_112, &g_112}, {&g_112, &g_112, &g_112}, {&g_112, &g_112, &g_112}, {&g_112, &g_112, &g_112}, {&g_112, &g_112, &g_112}, {&g_112, &g_112, &g_112}, {&g_112, &g_112, &g_112}, {&g_112, &g_112, &g_112}, {&g_112, &g_112, &g_112}, {&g_112, &g_112, &g_112}}, {{&g_112, &g_112, &g_112}, {&g_112, &g_112, &g_112}, {&g_112, &g_112, &g_112}, {&g_112, &g_112, &g_112}, {&g_112, &g_112, &g_112}, {&g_112, &g_112, &g_112}, {&g_112, &g_112, &g_112}, {&g_112, &g_112, &g_112}, {&g_112, &g_112, &g_112}, {&g_112, &g_112, &g_112}}, {{&g_112, &g_112, &g_112}, {&g_112, &g_112, &g_112}, {&g_112, &g_112, &g_112}, {&g_112, &g_112, &g_112}, {&g_112, &g_112, &g_112}, {&g_112, &g_112, &g_112}, {&g_112, &g_112, &g_112}, {&g_112, &g_112, &g_112}, {&g_112, &g_112, &g_112}, {&g_112, &g_112, &g_112}}, {{&g_112, &g_112, &g_112}, {&g_112, &g_112, &g_112}, {&g_112, &g_112, &g_112}, {&g_112, &g_112, &g_112}, {&g_112, &g_112, &g_112}, {&g_112, &g_112, &g_112}, {&g_112, &g_112, &g_112}, {&g_112, &g_112, &g_112}, {&g_112, &g_112, &g_112}, {&g_112, &g_112, &g_112}}, {{&g_112, &g_112, &g_112}, {&g_112, &g_112, &g_112}, {&g_112, &g_112, &g_112}, {&g_112, &g_112, &g_112}, {&g_112, &g_112, &g_112}, {&g_112, &g_112, &g_112}, {&g_112, &g_112, &g_112}, {&g_112, &g_112, &g_112}, {&g_112, &g_112, &g_112}, {&g_112, &g_112, &g_112}}, {{&g_112, &g_112, &g_112}, {&g_112, &g_112, &g_112}, {&g_112, &g_112, &g_112}, {&g_112, &g_112, &g_112}, {&g_112, &g_112, &g_112}, {&g_112, &g_112, &g_112}, {&g_112, &g_112, &g_112}, {&g_112, &g_112, &g_112}, {&g_112, &g_112, &g_112}, {&g_112, &g_112, &g_112}}};
static int32_t g_152 = 0x036850D5L;
static int32_t *****g_193 = (void*)0;
static int32_t ***g_215 = &g_111[6][9][1];
static int32_t ****g_214 = &g_215;
static uint8_t g_354 = 0UL;
static int32_t g_499 = 1L;
static int8_t g_512 = (-1L);
static int32_t *g_724 = &g_52;
static uint32_t func_1(void);
static uint16_t func_6(uint16_t p_7, uint32_t p_8, int32_t p_9, uint16_t p_10, uint16_t p_11);
inline static uint8_t func_12(uint32_t p_13);
inline static uint32_t func_14(uint8_t p_15, int32_t p_16, uint32_t p_17);
inline static uint16_t func_22(uint16_t p_23);
inline static int32_t * func_28(int32_t p_29, uint16_t p_30, int32_t * p_31, uint16_t p_32);
inline static uint32_t func_35(int32_t * p_36, uint8_t p_37, uint16_t p_38, int32_t p_39, uint32_t p_40);
static uint8_t func_42(uint8_t p_43, uint32_t p_44, int32_t * p_45, int32_t * p_46);
inline static int32_t * func_50(int32_t * p_51);
inline static int16_t func_55(int32_t * p_56, uint8_t p_57, int32_t p_58, uint8_t p_59);
static uint32_t func_1(void)
{
    int32_t l_19 = 0x4EB4C8F0L;
    int32_t l_500 = 0x50F7C549L;
    int32_t ****l_506 = &g_215;
    uint32_t l_517[2][10][2] = {{{7UL, 4294967289UL}, {7UL, 4294967289UL}, {7UL, 4294967289UL}, {7UL, 4294967289UL}, {7UL, 4294967289UL}, {7UL, 4294967289UL}, {7UL, 4294967289UL}, {7UL, 4294967289UL}, {7UL, 4294967289UL}, {7UL, 4294967289UL}}, {{7UL, 4294967289UL}, {7UL, 4294967289UL}, {7UL, 4294967289UL}, {7UL, 4294967289UL}, {7UL, 4294967289UL}, {7UL, 4294967289UL}, {7UL, 4294967289UL}, {7UL, 4294967289UL}, {7UL, 4294967289UL}, {7UL, 4294967289UL}}};
    int32_t *l_603 = (void*)0;
    int32_t *l_605 = &g_499;
    int32_t *l_707 = &g_499;
    uint32_t l_718[8];
    int8_t l_745 = 0x1CL;
    int i, j, k;
    for (i = 0; i < 8; i++)
        l_718[i] = 1UL;
    if ((safe_mod_func_uint8_t_u_u(((safe_mod_func_int16_t_s_s(6L, func_6((((func_12(func_14(g_18[4], (l_19 & g_18[4]), (safe_mod_func_int16_t_s_s(l_19, func_22(((safe_mod_func_int32_t_s_s(0xBFB66FEBL, l_19)) >= (((g_18[4] | (((g_18[0] >= g_18[4]) == g_18[3]) , l_19)) , l_19) < 0x45L))))))) , 0x1449L) > l_19) , 9UL), g_499, l_500, l_500, g_499))) & 0x50ECL), 0xC4L)))
    {
        uint16_t l_505 = 0xC39CL;
        int32_t *l_511 = &g_499;
        int32_t l_518[1][9] = {{0x7BEC7813L, (-1L), 0x7BEC7813L, (-1L), 0x7BEC7813L, (-1L), 0x7BEC7813L, (-1L), 0x7BEC7813L}};
        int16_t l_519 = 0xF444L;
        int32_t ****l_556 = &g_215;
        int32_t *l_602 = (void*)0;
        int32_t *l_604 = &g_18[4];
        int16_t l_617 = (-1L);
        int32_t ****l_639 = &g_215;
        int32_t l_663 = 0x75D25427L;
        uint32_t l_680 = 0UL;
        int32_t *l_706 = &l_19;
        int32_t *l_726 = (void*)0;
        int i, j;
        if (((g_354 > (safe_add_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_s((l_505 | ((1L && (l_506 == ((safe_add_func_uint8_t_u_u(((safe_add_func_int32_t_s_s((l_511 == l_511), g_512)) >= (((safe_sub_func_uint32_t_u_u((g_499 < ((((((g_18[0] < g_152) ^ (*l_511)) < 0x8EF3368AL) > l_517[1][4][0]) || 0xD0L) == g_152)), (-1L))) > (*g_112)) , l_518[0][7])), (*l_511))) , (void*)0))) != (*l_511))), 4)) >= 254UL), g_499))) , 0x2C38725AL))
        {
            int8_t l_520 = 1L;
            uint8_t l_538 = 0xD7L;
            int32_t l_548 = (-1L);
            int32_t ****l_572[3];
            int32_t l_578 = 6L;
            int16_t l_647 = (-8L);
            int32_t *l_708 = &g_499;
            int i;
            for (i = 0; i < 3; i++)
                l_572[i] = &g_215;
            (*g_215) = (**l_506);
            for (g_512 = 0; (g_512 >= 0); g_512 -= 1)
            {
                int32_t ***l_573 = &g_111[5][8][0];
                int i;
                if ((((g_18[(g_512 + 3)] == ((g_512 && (l_519 >= l_520)) , 65535UL)) && (((~0xC44B3C48L) != (safe_rshift_func_int8_t_s_u((+(((((safe_sub_func_int8_t_s_s(8L, (+l_520))) , (safe_rshift_func_int16_t_s_s(((g_18[4] == (*l_511)) , 0x7344L), 15))) , l_19) > 0x8106L) , g_499)), g_512))) && 1L)) && g_499))
                {
                    uint32_t l_530 = 0UL;
                    if (l_530)
                        break;
                    if ((((((0xF525L > (((g_499 && (g_18[(g_512 + 3)] | (safe_sub_func_uint32_t_u_u((((safe_sub_func_uint8_t_u_u((!l_520), (safe_rshift_func_int8_t_s_u((l_530 , 0L), l_538)))) != ((*l_511) , (safe_add_func_int8_t_s_s((((g_152 , g_52) || (*g_112)) & g_52), g_152)))) & g_18[4]), l_538)))) >= (*l_511)) || g_499)) , 2UL) >= g_18[4]) , g_354) >= l_520))
                    {
                        uint8_t l_551 = 0xA0L;
                        (*l_511) = ((safe_rshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((safe_sub_func_int32_t_s_s((((+(l_530 , ((l_548 ^ g_512) ^ (g_18[2] <= (safe_mod_func_uint16_t_u_u((l_551 != (safe_rshift_func_int16_t_s_s((((0x40D9A2ECL >= (&l_511 == ((safe_rshift_func_uint8_t_u_s((g_18[0] > (g_18[(g_512 + 3)] , 0xA1E8L)), 6)) , (**g_214)))) | g_152) | 0x66L), 11))), g_52)))))) ^ 0x1B74L) != l_520), (*l_511))), l_530)), l_551)) != 0x7B5DFC04L);
                    }
                    else
                    {
                        int32_t ****l_561 = &g_215;
                        (*g_112) = (((**g_214) == (void*)0) && (((*l_511) > (l_556 == ((safe_rshift_func_uint16_t_u_u((g_512 & (((safe_mod_func_int16_t_s_s((l_561 == ((((safe_mod_func_int16_t_s_s((safe_add_func_uint16_t_u_u((safe_add_func_int16_t_s_s(l_520, (safe_add_func_int16_t_s_s((((safe_rshift_func_int8_t_s_u(g_18[1], l_538)) , l_530) | g_354), g_354)))), (*l_511))), 6L)) ^ 65535UL) && g_52) , l_572[1])), g_152)) , 0x6FAB38D3L) || g_18[4])), g_152)) , l_506))) != g_354));
                        (*g_214) = (*g_214);
                        (*l_511) = (g_52 & ((l_530 , l_573) != (*g_214)));
                    }
                }
                else
                {
                    uint32_t l_577 = 18446744073709551612UL;
                    int32_t *l_629 = (void*)0;
                    int16_t l_646[4][7];
                    int i, j;
                    for (i = 0; i < 4; i++)
                    {
                        for (j = 0; j < 7; j++)
                            l_646[i][j] = (-7L);
                    }
                    if ((safe_add_func_uint32_t_u_u((safe_unary_minus_func_int8_t_s(l_577)), l_578)))
                    {
                        return g_18[(g_512 + 3)];
                    }
                    else
                    {
                        uint32_t l_600 = 0x813A9018L;
                        int16_t l_601[5][10][5] = {{{0x39BBL, 0x1FC5L, 0L, (-1L), (-1L)}, {0x39BBL, 0x1FC5L, 0L, (-1L), (-1L)}, {0x39BBL, 0x1FC5L, 0L, (-1L), (-1L)}, {0x39BBL, 0x1FC5L, 0L, (-1L), (-1L)}, {0x39BBL, 0x1FC5L, 0L, (-1L), (-1L)}, {0x39BBL, 0x1FC5L, 0L, (-1L), (-1L)}, {0x39BBL, 0x1FC5L, 0L, (-1L), (-1L)}, {0x39BBL, 0x1FC5L, 0L, (-1L), (-1L)}, {0x39BBL, 0x1FC5L, 0L, (-1L), (-1L)}, {0x39BBL, 0x1FC5L, 0L, (-1L), (-1L)}}, {{0x39BBL, 0x1FC5L, 0L, (-1L), (-1L)}, {0x39BBL, 0x1FC5L, 0L, (-1L), (-1L)}, {0x39BBL, 0x1FC5L, 0L, (-1L), (-1L)}, {0x39BBL, 0x1FC5L, 0L, (-1L), (-1L)}, {0x39BBL, 0x1FC5L, 0L, (-1L), (-1L)}, {0x39BBL, 0x1FC5L, 0L, (-1L), (-1L)}, {0x39BBL, 0x1FC5L, 0L, (-1L), (-1L)}, {0x39BBL, 0x1FC5L, 0L, (-1L), (-1L)}, {0x39BBL, 0x1FC5L, 0L, (-1L), (-1L)}, {0x39BBL, 0x1FC5L, 0L, (-1L), (-1L)}}, {{0x39BBL, 0x1FC5L, 0L, (-1L), (-1L)}, {0x39BBL, 0x1FC5L, 0L, (-1L), (-1L)}, {0x39BBL, 0x1FC5L, 0L, (-1L), (-1L)}, {0x39BBL, 0x1FC5L, 0L, (-1L), (-1L)}, {0x39BBL, 0x1FC5L, 0L, (-1L), (-1L)}, {0x39BBL, 0x1FC5L, 0L, (-1L), (-1L)}, {0x39BBL, 0x1FC5L, 0L, (-1L), (-1L)}, {0x39BBL, 0x1FC5L, 0L, (-1L), (-1L)}, {0x39BBL, 0x1FC5L, 0L, (-1L), (-1L)}, {0x39BBL, 0x1FC5L, 0L, (-1L), (-1L)}}, {{0x39BBL, 0x1FC5L, 0L, (-1L), (-1L)}, {0x39BBL, 0x1FC5L, 0L, (-1L), (-1L)}, {0x39BBL, 0x1FC5L, 0L, (-1L), (-1L)}, {0x39BBL, 0x1FC5L, 0L, (-1L), (-1L)}, {0x39BBL, 0x1FC5L, 0L, (-1L), (-1L)}, {0x39BBL, 0x1FC5L, 0L, (-1L), (-1L)}, {0x39BBL, 0x1FC5L, 0L, (-1L), (-1L)}, {0x39BBL, 0x1FC5L, 0L, (-1L), (-1L)}, {0x39BBL, 0x1FC5L, 0L, (-1L), (-1L)}, {0x39BBL, 0x1FC5L, 0L, (-1L), (-1L)}}, {{0x39BBL, 0x1FC5L, 0L, (-1L), (-1L)}, {0x39BBL, 0x1FC5L, 0L, (-1L), (-1L)}, {0x39BBL, 0x1FC5L, 0L, (-1L), (-1L)}, {0x39BBL, 0x1FC5L, 0L, (-1L), (-1L)}, {0x39BBL, 0x1FC5L, 0L, (-1L), (-1L)}, {0x39BBL, 0x1FC5L, 0L, (-1L), (-1L)}, {0x39BBL, 0x1FC5L, 0L, (-1L), (-1L)}, {0x39BBL, 0x1FC5L, 0L, (-1L), (-1L)}, {0x39BBL, 0x1FC5L, 0L, (-1L), (-1L)}, {0x39BBL, 0x1FC5L, 0L, (-1L), (-1L)}}};
                        int i, j, k;
                        l_603 = func_28((((safe_add_func_uint32_t_u_u((((safe_sub_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((((safe_rshift_func_int16_t_s_u((safe_sub_func_int32_t_s_s(l_577, (*g_112))), 1)) , (**g_214)) != (*g_215)), 1)), (-4L))) ^ (~(l_577 || ((safe_mod_func_uint32_t_u_u((((((*l_511) , (((safe_sub_func_uint16_t_u_u((((safe_rshift_func_uint8_t_u_u((((safe_rshift_func_int16_t_s_u((safe_sub_func_int16_t_s_s(0x7995L, (l_600 , g_354))), 15)) >= 0x26L) | l_577), g_512)) , (-9L)) , g_499), g_18[4])) <= g_499) || g_354)) >= g_152) != 0UL) & (*g_112)), 4294967295UL)) == 0x40C986C8L)))) && l_601[1][3][0]), l_601[1][3][0])) | 2UL) || l_600), l_600, l_602, g_18[4]);
                        ((void) sizeof (((l_603 >= &g_18[0] && l_603 <= &g_18[4])) ? 1 : 0), __extension__ ({ if ((l_603 >= &g_18[0] && l_603 <= &g_18[4])) ; else __assert_fail ("(l_603 >= &g_18[0] && l_603 <= &g_18[4])", "/tmp/tmp4ydgobyy.c", 138, __extension__ __PRETTY_FUNCTION__); }));
                        l_605 = l_604;
                        ((void) sizeof (((l_605 >= &g_18[0] && l_605 <= &g_18[4])) ? 1 : 0), __extension__ ({ if ((l_605 >= &g_18[0] && l_605 <= &g_18[4])) ; else __assert_fail ("(l_605 >= &g_18[0] && l_605 <= &g_18[4])", "/tmp/tmp4ydgobyy.c", 141, __extension__ __PRETTY_FUNCTION__); }));
                        if (l_577)
                            break;
                        (*g_112) = ((((safe_unary_minus_func_uint8_t_u(l_601[1][3][0])) , (safe_add_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(((g_152 || (safe_rshift_func_int8_t_s_u((safe_sub_func_int8_t_s_s(((safe_rshift_func_int8_t_s_s(l_617, (safe_lshift_func_int16_t_s_s(g_152, 2)))) >= (safe_rshift_func_int16_t_s_u((((*g_112) | (65526UL != g_354)) > (g_499 & 65534UL)), 13))), 1L)), g_52))) <= g_152), l_577)), 0x34L))) <= g_18[3]) == (*l_605));
                    }
                    ((void) sizeof (((l_603 >= &g_18[0] && l_603 <= &g_18[4])) ? 1 : 0), __extension__ ({ if ((l_603 >= &g_18[0] && l_603 <= &g_18[4])) ; else __assert_fail ("(l_603 >= &g_18[0] && l_603 <= &g_18[4])", "/tmp/tmp4ydgobyy.c", 147, __extension__ __PRETTY_FUNCTION__); }));
                    ((void) sizeof (((l_605 >= &g_18[0] && l_605 <= &g_18[4])) ? 1 : 0), __extension__ ({ if ((l_605 >= &g_18[0] && l_605 <= &g_18[4])) ; else __assert_fail ("(l_605 >= &g_18[0] && l_605 <= &g_18[4])", "/tmp/tmp4ydgobyy.c", 148, __extension__ __PRETTY_FUNCTION__); }));
                    (*l_511) = (safe_rshift_func_uint16_t_u_u((g_52 >= (safe_add_func_int32_t_s_s((safe_sub_func_uint16_t_u_u((~((&g_215 == l_572[1]) == ((((((((l_629 != &g_18[(g_512 + 3)]) != ((((((safe_lshift_func_uint8_t_u_u((safe_add_func_int32_t_s_s((*g_112), ((((l_629 != (void*)0) <= g_18[2]) < 0UL) && g_354))), 2)) || g_512) , g_18[4]) , (void*)0) == (void*)0) , g_18[1])) & 0x120BL) < g_152) <= g_52) | (*l_605)) , 0L) != g_18[(g_512 + 3)]))), g_52)), 0xBB7EB6F0L))), 12));
                    for (l_548 = 0; (l_548 >= 0); l_548 -= 1)
                    {
                        int32_t *l_638 = (void*)0;
                        (*g_112) = (safe_mod_func_int8_t_s_s(((((((g_152 , (void*)0) == l_638) > (g_499 == (l_639 == (void*)0))) > ((((safe_add_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(((4294967295UL <= (*l_605)) != ((safe_rshift_func_uint16_t_u_u((g_499 <= 1L), g_18[1])) == (*l_511))), l_646[2][6])), g_52)) , g_152) , (*l_605)) < g_354)) >= g_18[4]) >= l_647), (*l_511)));
                        (*l_506) = l_573;
                        l_602 = (void*)0;
                        (*g_112) = (*g_112);
                    }
                }
                for (l_519 = 0; (l_519 <= 0); l_519 += 1)
                {
                    return g_18[(g_512 + 3)];
                }
                for (l_617 = 0; (l_617 >= 0); l_617 -= 1)
                {
                    int32_t *l_648 = &g_499;
                    l_648 = l_604;
                    ((void) sizeof (((l_648 >= &g_18[0] && l_648 <= &g_18[4])) ? 1 : 0), __extension__ ({ if ((l_648 >= &g_18[0] && l_648 <= &g_18[4])) ; else __assert_fail ("(l_648 >= &g_18[0] && l_648 <= &g_18[4])", "/tmp/tmp4ydgobyy.c", 168, __extension__ __PRETTY_FUNCTION__); }));
                    for (l_548 = 0; l_548 < 5; l_548 += 1)
                    {
                        g_18[l_548] = 1L;
                    }
                    (*l_648) = (safe_add_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u(g_152, ((!((g_499 , 0x83L) , 0x1B1E8128L)) <= ((((3L | ((((safe_unary_minus_func_int32_t_s(((*l_648) == (g_18[4] != (((l_648 == ((*l_648) , l_648)) , g_499) > g_512))))) != g_152) , g_512) <= 65532UL)) >= (*l_648)) , 9L) != l_663)))), (*l_605))), 11)), 4)), g_354));
                }
                for (l_538 = 0; (l_538 <= 0); l_538 += 1)
                {
                    uint32_t l_665 = 0x80AD8338L;
                    int32_t l_668[8];
                    int i;
                    for (i = 0; i < 8; i++)
                        l_668[i] = 0x37537EE1L;
                    if (((+(g_18[4] || (*l_604))) && (l_665 , (g_499 , ((*l_604) >= (safe_lshift_func_int8_t_s_u(g_18[4], 0)))))))
                    {
                        (*l_605) = ((g_52 > g_512) == g_354);
                        l_668[0] = 0x487071BCL;
                    }
                    else
                    {
                        (*l_605) = 0xA3C5C08EL;
                    }
                }
            }
            ((void) sizeof (((l_603 >= &g_18[0] && l_603 <= &g_18[4]) || l_603 == 0) ? 1 : 0), __extension__ ({ if ((l_603 >= &g_18[0] && l_603 <= &g_18[4]) || l_603 == 0) ; else __assert_fail ("(l_603 >= &g_18[0] && l_603 <= &g_18[4]) || l_603 == 0", "/tmp/tmp4ydgobyy.c", 194, __extension__ __PRETTY_FUNCTION__); }));
            ((void) sizeof (((l_605 >= &g_18[0] && l_605 <= &g_18[4]) || l_605 == &g_499) ? 1 : 0), __extension__ ({ if ((l_605 >= &g_18[0] && l_605 <= &g_18[4]) || l_605 == &g_499) ; else __assert_fail ("(l_605 >= &g_18[0] && l_605 <= &g_18[4]) || l_605 == &g_499", "/tmp/tmp4ydgobyy.c", 195, __extension__ __PRETTY_FUNCTION__); }));
            if ((((g_152 , (safe_sub_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((g_512 , 0x8C79L), 1)), ((safe_rshift_func_int16_t_s_s((1L && (4294967292UL | ((safe_mod_func_int32_t_s_s((*g_112), (safe_sub_func_int8_t_s_s((g_512 <= (!0xC6L)), g_18[4])))) , (*g_112)))), g_18[3])) >= g_499)))) > (*l_605)) , l_680))
            {
                uint8_t l_681 = 255UL;
                int16_t l_689 = (-8L);
                int32_t *l_691 = (void*)0;
                int32_t l_696 = 0x3B9A87D3L;
                if (((l_681 > (((*l_604) & (+l_681)) || (safe_lshift_func_int16_t_s_u(((safe_rshift_func_uint16_t_u_s((((safe_add_func_int32_t_s_s(((l_689 > g_18[4]) < g_354), ((~0xF3L) < (&g_214 != ((0xCD5FL && g_354) , &g_214))))) == 3UL) <= 4294967292UL), 6)) != l_689), g_18[1])))) , 0x93C3E1ADL))
                {
                    int32_t *l_692 = &g_18[4];
                    l_692 = l_691;
                    ((void) sizeof ((l_692 == 0) ? 1 : 0), __extension__ ({ if (l_692 == 0) ; else __assert_fail ("l_692 == 0", "/tmp/tmp4ydgobyy.c", 207, __extension__ __PRETTY_FUNCTION__); }));
                }
                else
                {
                    int16_t l_697 = 0xF609L;
                    for (l_538 = 0; (l_538 != 43); ++l_538)
                    {
                        int32_t *****l_695 = &l_572[1];
                        l_695 = &g_214;
                        ((void) sizeof ((l_695 == &g_214) ? 1 : 0), __extension__ ({ if (l_695 == &g_214) ; else __assert_fail ("l_695 == &g_214", "/tmp/tmp4ydgobyy.c", 217, __extension__ __PRETTY_FUNCTION__); }));
                    }
                    l_696 = ((void*)0 != &l_506);
                    return l_697;
                }
                for (l_578 = 0; (l_578 > 7); ++l_578)
                {
                    int32_t l_702 = (-9L);
                    l_691 = func_28(g_152, (g_52 , (0x2C3D8337L >= (safe_sub_func_uint8_t_u_u((l_696 || l_702), g_18[4])))), func_28((*l_511), ((((*g_214) != (l_702 , (*g_214))) ^ g_18[0]) != 4294967295UL), &l_696, g_499), l_681);
                    ((void) sizeof (((l_691 >= &g_18[0] && l_691 <= &g_18[4])) ? 1 : 0), __extension__ ({ if ((l_691 >= &g_18[0] && l_691 <= &g_18[4])) ; else __assert_fail ("(l_691 >= &g_18[0] && l_691 <= &g_18[4])", "/tmp/tmp4ydgobyy.c", 227, __extension__ __PRETTY_FUNCTION__); }));
                    l_691 = &l_702;
                    ((void) sizeof ((l_691 == &l_702) ? 1 : 0), __extension__ ({ if (l_691 == &l_702) ; else __assert_fail ("l_691 == &l_702", "/tmp/tmp4ydgobyy.c", 230, __extension__ __PRETTY_FUNCTION__); }));
                }
                l_691 = (void*)0;
                ((void) sizeof ((l_691 == 0) ? 1 : 0), __extension__ ({ if (l_691 == 0) ; else __assert_fail ("l_691 == 0", "/tmp/tmp4ydgobyy.c", 236, __extension__ __PRETTY_FUNCTION__); }));
            }
            else
            {
                int32_t *l_722 = (void*)0;
                l_605 = func_50(&l_19);
                ((void) sizeof ((l_605 == &l_19) ? 1 : 0), __extension__ ({ if (l_605 == &l_19) ; else __assert_fail ("l_605 == &l_19", "/tmp/tmp4ydgobyy.c", 243, __extension__ __PRETTY_FUNCTION__); }));
                (*l_556) = (*g_214);
                for (l_520 = 15; (l_520 == (-13)); l_520 = safe_sub_func_uint32_t_u_u(l_520, 7))
                {
                    uint32_t l_705 = 0xFC1F9E2CL;
                    int32_t *l_723 = &g_18[3];
                    int32_t *l_725 = (void*)0;
                }
            }
            ((void) sizeof ((l_605 == &l_19 || (l_605 >= &g_18[0] && l_605 <= &g_18[4]) || l_605 == &g_499) ? 1 : 0), __extension__ ({ if (l_605 == &l_19 || (l_605 >= &g_18[0] && l_605 <= &g_18[4]) || l_605 == &g_499) ; else __assert_fail ("l_605 == &l_19 || (l_605 >= &g_18[0] && l_605 <= &g_18[4]) || l_605 == &g_499", "/tmp/tmp4ydgobyy.c", 253, __extension__ __PRETTY_FUNCTION__); }));
            (*l_604) = (g_18[4] , (*g_724));
        }
        else
        {
            uint8_t l_740 = 0x98L;
            uint32_t l_741 = 0x1416C448L;
            int32_t **l_744 = &l_511;
            (*l_511) = ((safe_sub_func_int16_t_s_s((safe_add_func_int16_t_s_s(((!(safe_mod_func_uint32_t_u_u((((safe_add_func_uint32_t_u_u(((safe_sub_func_int8_t_s_s(((*l_605) , (safe_add_func_uint16_t_u_u(l_740, g_354))), (l_741 , g_152))) , ((-1L) >= (((safe_rshift_func_uint8_t_u_s(((0xA673F03CL && (*g_724)) & (l_744 == l_744)), 5)) < g_354) | g_512))), (**l_744))) <= g_354) || g_499), g_512))) >= 0UL), g_152)), (*l_605))) >= l_745);
            return g_152;
        }
        ((void) sizeof (((l_603 >= &g_18[0] && l_603 <= &g_18[4]) || l_603 == 0) ? 1 : 0), __extension__ ({ if ((l_603 >= &g_18[0] && l_603 <= &g_18[4]) || l_603 == 0) ; else __assert_fail ("(l_603 >= &g_18[0] && l_603 <= &g_18[4]) || l_603 == 0", "/tmp/tmp4ydgobyy.c", 265, __extension__ __PRETTY_FUNCTION__); }));
        ((void) sizeof ((l_605 == &l_19 || (l_605 >= &g_18[0] && l_605 <= &g_18[4]) || l_605 == &g_499) ? 1 : 0), __extension__ ({ if (l_605 == &l_19 || (l_605 >= &g_18[0] && l_605 <= &g_18[4]) || l_605 == &g_499) ; else __assert_fail ("l_605 == &l_19 || (l_605 >= &g_18[0] && l_605 <= &g_18[4]) || l_605 == &g_499", "/tmp/tmp4ydgobyy.c", 266, __extension__ __PRETTY_FUNCTION__); }));
        return (*l_511);
    }
    else
    {
        uint8_t l_761 = 251UL;
        uint16_t l_762 = 0x89C0L;
        (*g_112) = ((safe_add_func_int8_t_s_s((-1L), ((((safe_add_func_uint16_t_u_u((((g_512 ^ (((safe_add_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((((((safe_add_func_int8_t_s_s(((0x34BAB3B3L && ((safe_lshift_func_int8_t_s_u((+(g_18[4] , (safe_mod_func_uint8_t_u_u(0x94L, (-1L))))), g_152)) , l_761)) <= 0xC4A8L), l_761)) >= g_354) == 0UL) | (*l_707)) , g_18[0]), l_762)), l_762)) || g_18[4]) == l_761)) == g_52) , 0xD0ADL), g_354)) , 6UL) || 0L) ^ g_152))) , (-7L));
    }
    (*g_214) = (*l_506);
    return g_499;
}
static uint16_t func_6(uint16_t p_7, uint32_t p_8, int32_t p_9, uint16_t p_10, uint16_t p_11)
{
    return g_499;
}
inline static uint8_t func_12(uint32_t p_13)
{
    int32_t **l_492 = &g_112;
    for (g_152 = 3; (g_152 >= 0); g_152 -= 1)
    {
        int i;
        if ((safe_add_func_int16_t_s_s((((g_18[g_152] != (g_18[g_152] > ((safe_rshift_func_uint8_t_u_s(g_354, 5)) >= (safe_rshift_func_uint8_t_u_s(g_18[0], ((void*)0 == l_492)))))) ^ ((~p_13) , ((**l_492) || (safe_rshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_u(g_18[g_152], 2)), (**l_492)))))) , p_13), 0xD50EL)))
        {
            return p_13;
        }
        else
        {
            uint32_t l_498 = 1UL;
            if (l_498)
                break;
        }
    }
    return (**l_492);
}
inline static uint32_t func_14(uint8_t p_15, int32_t p_16, uint32_t p_17)
{
    int32_t l_444 = (-4L);
    int32_t ****l_469 = &g_215;
    int32_t *****l_472 = (void*)0;
    uint8_t l_484[5][7] = {{0xAAL, 0x6EL, 1UL, 255UL, 0x6EL, 3UL, 0x6EL}, {0xAAL, 0x6EL, 1UL, 255UL, 0x6EL, 3UL, 0x6EL}, {0xAAL, 0x6EL, 1UL, 255UL, 0x6EL, 3UL, 0x6EL}, {0xAAL, 0x6EL, 1UL, 255UL, 0x6EL, 3UL, 0x6EL}, {0xAAL, 0x6EL, 1UL, 255UL, 0x6EL, 3UL, 0x6EL}};
    int32_t l_485 = 7L;
    int i, j;
    for (p_15 = 0; (p_15 <= 2); p_15 += 1)
    {
        int32_t *l_407 = &g_18[4];
        int32_t *****l_424 = &g_214;
        if ((*g_112))
            break;
        for (g_52 = 2; (g_52 >= 0); g_52 -= 1)
        {
            uint32_t l_419[1];
            uint32_t l_445 = 1UL;
            uint16_t l_459[2][7][3] = {{{0xC42CL, 0x6EEBL, 65529UL}, {0xC42CL, 0x6EEBL, 65529UL}, {0xC42CL, 0x6EEBL, 65529UL}, {0xC42CL, 0x6EEBL, 65529UL}, {0xC42CL, 0x6EEBL, 65529UL}, {0xC42CL, 0x6EEBL, 65529UL}, {0xC42CL, 0x6EEBL, 65529UL}}, {{0xC42CL, 0x6EEBL, 65529UL}, {0xC42CL, 0x6EEBL, 65529UL}, {0xC42CL, 0x6EEBL, 65529UL}, {0xC42CL, 0x6EEBL, 65529UL}, {0xC42CL, 0x6EEBL, 65529UL}, {0xC42CL, 0x6EEBL, 65529UL}, {0xC42CL, 0x6EEBL, 65529UL}}};
            int32_t **l_466[6] = {(void*)0, (void*)0, &l_407, (void*)0, (void*)0, &l_407};
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_419[i] = 4294967295UL;
            (*l_407) = (0x69431AA6L >= ((safe_add_func_int32_t_s_s(((safe_add_func_int16_t_s_s(0x2F00L, (((+(((l_407 == l_407) > ((safe_mod_func_uint16_t_u_u((~(safe_lshift_func_uint16_t_u_u((*l_407), 3))), p_17)) && (safe_lshift_func_uint16_t_u_u(1UL, 12)))) & (((g_354 >= (safe_sub_func_int32_t_s_s(((safe_rshift_func_uint16_t_u_s(65535UL, 3)) != 0UL), p_17))) <= p_16) ^ p_15))) , (*l_407)) && l_419[0]))) , (*g_112)), 0x23CA1EC1L)) ^ p_17));
            for (g_152 = 4; (g_152 >= 0); g_152 -= 1)
            {
                int32_t **l_446 = &l_407;
                int i;
                (*l_446) = func_28(g_18[g_152], ((safe_lshift_func_int16_t_s_u((safe_mod_func_uint32_t_u_u(((l_424 != &g_214) >= (safe_sub_func_int8_t_s_s(((safe_sub_func_uint32_t_u_u((((safe_lshift_func_uint8_t_u_u(0x4EL, (g_152 ^ ((safe_mod_func_int8_t_s_s(((((safe_lshift_func_uint16_t_u_s((((safe_sub_func_uint16_t_u_u(((((!(+(0x1FA87196L <= (((safe_add_func_uint8_t_u_u((!((safe_lshift_func_uint8_t_u_s(0xD1L, p_17)) == g_18[3])), 255UL)) && 0x9541L) != l_444)))) & 0xB1A2F894L) & 0x86L) & l_445), g_354)) ^ 0x5EB85CDDL) | g_18[g_152]), g_18[g_152])) , g_354) ^ 0x6A83L) , g_18[2]), p_17)) | 1UL)))) >= l_419[0]) <= g_18[4]), g_18[g_152])) != 0xD1L), 0xE1L))), 0x68CED126L)), g_18[4])) >= l_445), &l_444, g_18[4]);
                return g_354;
            }
            for (p_17 = 0; p_17 < 1; p_17 += 1)
            {
                l_419[p_17] = 9UL;
            }
            for (p_16 = 2; (p_16 >= 0); p_16 -= 1)
            {
                int16_t l_454 = 0x3080L;
                int32_t *l_461 = &g_18[4];
                l_444 = (safe_sub_func_uint8_t_u_u(((4294967295UL != (safe_lshift_func_int16_t_s_u(((+(0x74DEL == (l_445 , ((safe_sub_func_uint16_t_u_u(l_454, ((safe_sub_func_uint32_t_u_u(((((((safe_rshift_func_uint8_t_u_u((p_15 != l_454), 5)) && (l_459[0][1][1] , ((((void*)0 != l_407) && 0xEB1C24B5L) != p_17))) < 0xC950BEE5L) >= (*l_407)) < 0x73L) == p_16), p_17)) == p_16))) < p_15)))) ^ l_459[0][1][1]), 13))) ^ 1L), 9UL));
                for (l_444 = 0; (l_444 <= 2); l_444 += 1)
                {
                    int32_t **l_460[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_460[i] = &g_112;
                    l_461 = &l_444;
                    ((void) sizeof ((l_461 == &l_444) ? 1 : 0), __extension__ ({ if (l_461 == &l_444) ; else __assert_fail ("l_461 == &l_444", "/tmp/tmp4ydgobyy.c", 370, __extension__ __PRETTY_FUNCTION__); }));
                }
                ((void) sizeof ((l_461 == &l_444 || (l_461 >= &g_18[0] && l_461 <= &g_18[4])) ? 1 : 0), __extension__ ({ if (l_461 == &l_444 || (l_461 >= &g_18[0] && l_461 <= &g_18[4])) ; else __assert_fail ("l_461 == &l_444 || (l_461 >= &g_18[0] && l_461 <= &g_18[4])", "/tmp/tmp4ydgobyy.c", 373, __extension__ __PRETTY_FUNCTION__); }));
            }
            for (l_444 = 2; (l_444 >= 0); l_444 -= 1)
            {
                int32_t *l_462 = &g_152;
                int8_t l_463 = 0xC6L;
                l_462 = &l_444;
                ((void) sizeof ((l_462 == &l_444) ? 1 : 0), __extension__ ({ if (l_462 == &l_444) ; else __assert_fail ("l_462 == &l_444", "/tmp/tmp4ydgobyy.c", 381, __extension__ __PRETTY_FUNCTION__); }));
                if ((p_15 , ((((((g_52 >= (0x8EB32115L < 0x5E60CE41L)) , ((-1L) > (((p_16 == p_15) >= (-2L)) && (p_17 && l_444)))) <= g_18[4]) , l_463) == 0xF0L) ^ g_152)))
                {
                    int32_t **l_467 = &g_112;
                    int32_t ****l_468 = (void*)0;
                    uint32_t l_470 = 0xC992769CL;
                    (*l_467) = func_28((*l_462), (safe_lshift_func_int16_t_s_u(p_16, 9)), &l_444, (((l_466[4] != l_467) ^ (3UL <= (((0x3DD166B5L >= p_16) < ((l_468 == l_469) == p_17)) >= p_15))) != l_470));
                }
                else
                {
                    for (l_445 = 0; l_445 < 7; l_445 += 1)
                    {
                        for (g_152 = 0; g_152 < 10; g_152 += 1)
                        {
                            for (g_354 = 0; g_354 < 3; g_354 += 1)
                            {
                                g_111[l_445][g_152][g_354] = &g_112;
                            }
                        }
                    }
                }
                for (l_463 = 2; (l_463 >= 0); l_463 -= 1)
                {
                    int32_t *****l_471 = &g_214;
                    l_472 = l_471;
                    ((void) sizeof ((l_472 == &g_214) ? 1 : 0), __extension__ ({ if (l_472 == &g_214) ; else __assert_fail ("l_472 == &g_214", "/tmp/tmp4ydgobyy.c", 407, __extension__ __PRETTY_FUNCTION__); }));
                }
            }
        }
    }
    ((void) sizeof ((l_472 == &g_214 || l_472 == 0) ? 1 : 0), __extension__ ({ if (l_472 == &g_214 || l_472 == 0) ; else __assert_fail ("l_472 == &g_214 || l_472 == 0", "/tmp/tmp4ydgobyy.c", 413, __extension__ __PRETTY_FUNCTION__); }));
    for (p_17 = (-28); (p_17 < 32); p_17 = safe_add_func_int8_t_s_s(p_17, 8))
    {
        uint16_t l_481 = 65526UL;
        (*g_112) = (safe_sub_func_int32_t_s_s(0x7DDF1DDBL, (l_469 != l_469)));
        (*g_112) = (safe_rshift_func_int16_t_s_u((p_15 | ((safe_sub_func_uint32_t_u_u(l_481, (safe_rshift_func_uint8_t_u_u(p_17, 6)))) , ((p_17 , (l_481 && l_484[2][0])) != ((void*)0 == (*l_469))))), 8));
    }
    return l_485;
}
inline static uint16_t func_22(uint16_t p_23)
{
    int32_t *l_49[7][3][3] = {{{(void*)0, &g_18[4], (void*)0}, {(void*)0, &g_18[4], (void*)0}, {(void*)0, &g_18[4], (void*)0}}, {{(void*)0, &g_18[4], (void*)0}, {(void*)0, &g_18[4], (void*)0}, {(void*)0, &g_18[4], (void*)0}}, {{(void*)0, &g_18[4], (void*)0}, {(void*)0, &g_18[4], (void*)0}, {(void*)0, &g_18[4], (void*)0}}, {{(void*)0, &g_18[4], (void*)0}, {(void*)0, &g_18[4], (void*)0}, {(void*)0, &g_18[4], (void*)0}}, {{(void*)0, &g_18[4], (void*)0}, {(void*)0, &g_18[4], (void*)0}, {(void*)0, &g_18[4], (void*)0}}, {{(void*)0, &g_18[4], (void*)0}, {(void*)0, &g_18[4], (void*)0}, {(void*)0, &g_18[4], (void*)0}}, {{(void*)0, &g_18[4], (void*)0}, {(void*)0, &g_18[4], (void*)0}, {(void*)0, &g_18[4], (void*)0}}};
    int32_t l_400 = 0x08369C14L;
    int i, j, k;
    for (p_23 = 0; (p_23 < 54); p_23++)
    {
        int32_t *l_41 = &g_18[4];
        int32_t **l_388 = (void*)0;
        int32_t **l_389[9] = {&l_49[3][1][1], (void*)0, &l_49[3][1][1], (void*)0, &l_49[3][1][1], (void*)0, &l_49[3][1][1], (void*)0, &l_49[3][1][1]};
        uint32_t l_401 = 4UL;
        int i;
        l_49[6][2][1] = func_28((safe_sub_func_int32_t_s_s(g_18[4], func_35(l_41, p_23, (1L == (((func_42((safe_sub_func_uint16_t_u_u((&g_18[4] == l_49[3][1][1]), 1L)), (l_41 == &g_18[2]), l_41, l_41) >= 0xF9L) , p_23) , p_23)), p_23, g_18[4]))), g_18[3], l_49[3][1][1], g_18[4]);
        l_401 = (1L || (((safe_lshift_func_uint16_t_u_s((0x2407L >= ((safe_sub_func_int32_t_s_s(((void*)0 != &l_49[5][0][1]), (p_23 || (((safe_rshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((g_18[4] > (*g_112)), ((*l_41) | (safe_lshift_func_uint16_t_u_u(((((g_18[2] & p_23) < g_18[4]) || 0x4EL) , g_152), p_23))))), 7)) ^ l_400) , g_152)))) == g_152)), g_152)) , p_23) & p_23));
    }
    return g_18[1];
}
inline static int32_t * func_28(int32_t p_29, uint16_t p_30, int32_t * p_31, uint16_t p_32)
{
    int32_t l_375 = 0x17438A57L;
    int32_t **l_378 = &g_112;
    int32_t l_387 = 0L;
    l_387 = (((safe_mod_func_int32_t_s_s(((((l_375 || 6UL) <= ((((safe_rshift_func_int8_t_s_u(0x5BL, 3)) ^ ((void*)0 == l_378)) || ((safe_mod_func_int32_t_s_s((safe_lshift_func_int16_t_s_u((**l_378), (safe_add_func_int32_t_s_s(p_30, (g_354 < (safe_mod_func_uint8_t_u_u(4UL, 0x44L))))))), (*g_112))) >= p_32)) , p_30)) <= (**l_378)) > (**l_378)), (**l_378))) ^ 0x5BL) , 8L);
    return (*l_378);
}
inline static uint32_t func_35(int32_t * p_36, uint8_t p_37, uint16_t p_38, int32_t p_39, uint32_t p_40)
{
    int32_t **l_125 = &g_112;
    int32_t ***l_177 = &g_111[5][3][1];
    int32_t ****l_176[9] = {(void*)0, &l_177, (void*)0, &l_177, (void*)0, &l_177, (void*)0, &l_177, (void*)0};
    int32_t *l_208 = &g_152;
    uint16_t l_304 = 0xA9AAL;
    int8_t l_370[7][4][7] = {{{(-2L), 1L, 0xECL, 0xAAL, 0xEFL, 0x54L, 3L}, {(-2L), 1L, 0xECL, 0xAAL, 0xEFL, 0x54L, 3L}, {(-2L), 1L, 0xECL, 0xAAL, 0xEFL, 0x54L, 3L}, {(-2L), 1L, 0xECL, 0xAAL, 0xEFL, 0x54L, 3L}}, {{(-2L), 1L, 0xECL, 0xAAL, 0xEFL, 0x54L, 3L}, {(-2L), 1L, 0xECL, 0xAAL, 0xEFL, 0x54L, 3L}, {(-2L), 1L, 0xECL, 0xAAL, 0xEFL, 0x54L, 3L}, {(-2L), 1L, 0xECL, 0xAAL, 0xEFL, 0x54L, 3L}}, {{(-2L), 1L, 0xECL, 0xAAL, 0xEFL, 0x54L, 3L}, {(-2L), 1L, 0xECL, 0xAAL, 0xEFL, 0x54L, 3L}, {(-2L), 1L, 0xECL, 0xAAL, 0xEFL, 0x54L, 3L}, {(-2L), 1L, 0xECL, 0xAAL, 0xEFL, 0x54L, 3L}}, {{(-2L), 1L, 0xECL, 0xAAL, 0xEFL, 0x54L, 3L}, {(-2L), 1L, 0xECL, 0xAAL, 0xEFL, 0x54L, 3L}, {(-2L), 1L, 0xECL, 0xAAL, 0xEFL, 0x54L, 3L}, {(-2L), 1L, 0xECL, 0xAAL, 0xEFL, 0x54L, 3L}}, {{(-2L), 1L, 0xECL, 0xAAL, 0xEFL, 0x54L, 3L}, {(-2L), 1L, 0xECL, 0xAAL, 0xEFL, 0x54L, 3L}, {(-2L), 1L, 0xECL, 0xAAL, 0xEFL, 0x54L, 3L}, {(-2L), 1L, 0xECL, 0xAAL, 0xEFL, 0x54L, 3L}}, {{(-2L), 1L, 0xECL, 0xAAL, 0xEFL, 0x54L, 3L}, {(-2L), 1L, 0xECL, 0xAAL, 0xEFL, 0x54L, 3L}, {(-2L), 1L, 0xECL, 0xAAL, 0xEFL, 0x54L, 3L}, {(-2L), 1L, 0xECL, 0xAAL, 0xEFL, 0x54L, 3L}}, {{(-2L), 1L, 0xECL, 0xAAL, 0xEFL, 0x54L, 3L}, {(-2L), 1L, 0xECL, 0xAAL, 0xEFL, 0x54L, 3L}, {(-2L), 1L, 0xECL, 0xAAL, 0xEFL, 0x54L, 3L}, {(-2L), 1L, 0xECL, 0xAAL, 0xEFL, 0x54L, 3L}}};
    uint8_t l_371[4][5][9] = {{{0x9CL, 249UL, 0x9DL, 0x1AL, 0x0EL, 0x20L, 0x1AL, 0x49L, 0xF1L}, {0x9CL, 249UL, 0x9DL, 0x1AL, 0x0EL, 0x20L, 0x1AL, 0x49L, 0xF1L}, {0x9CL, 249UL, 0x9DL, 0x1AL, 0x0EL, 0x20L, 0x1AL, 0x49L, 0xF1L}, {0x9CL, 249UL, 0x9DL, 0x1AL, 0x0EL, 0x20L, 0x1AL, 0x49L, 0xF1L}, {0x9CL, 249UL, 0x9DL, 0x1AL, 0x0EL, 0x20L, 0x1AL, 0x49L, 0xF1L}}, {{0x9CL, 249UL, 0x9DL, 0x1AL, 0x0EL, 0x20L, 0x1AL, 0x49L, 0xF1L}, {0x9CL, 249UL, 0x9DL, 0x1AL, 0x0EL, 0x20L, 0x1AL, 0x49L, 0xF1L}, {0x9CL, 249UL, 0x9DL, 0x1AL, 0x0EL, 0x20L, 0x1AL, 0x49L, 0xF1L}, {0x9CL, 249UL, 0x9DL, 0x1AL, 0x0EL, 0x20L, 0x1AL, 0x49L, 0xF1L}, {0x9CL, 249UL, 0x9DL, 0x1AL, 0x0EL, 0x20L, 0x1AL, 0x49L, 0xF1L}}, {{0x9CL, 249UL, 0x9DL, 0x1AL, 0x0EL, 0x20L, 0x1AL, 0x49L, 0xF1L}, {0x9CL, 249UL, 0x9DL, 0x1AL, 0x0EL, 0x20L, 0x1AL, 0x49L, 0xF1L}, {0x9CL, 249UL, 0x9DL, 0x1AL, 0x0EL, 0x20L, 0x1AL, 0x49L, 0xF1L}, {0x9CL, 249UL, 0x9DL, 0x1AL, 0x0EL, 0x20L, 0x1AL, 0x49L, 0xF1L}, {0x9CL, 249UL, 0x9DL, 0x1AL, 0x0EL, 0x20L, 0x1AL, 0x49L, 0xF1L}}, {{0x9CL, 249UL, 0x9DL, 0x1AL, 0x0EL, 0x20L, 0x1AL, 0x49L, 0xF1L}, {0x9CL, 249UL, 0x9DL, 0x1AL, 0x0EL, 0x20L, 0x1AL, 0x49L, 0xF1L}, {0x9CL, 249UL, 0x9DL, 0x1AL, 0x0EL, 0x20L, 0x1AL, 0x49L, 0xF1L}, {0x9CL, 249UL, 0x9DL, 0x1AL, 0x0EL, 0x20L, 0x1AL, 0x49L, 0xF1L}, {0x9CL, 249UL, 0x9DL, 0x1AL, 0x0EL, 0x20L, 0x1AL, 0x49L, 0xF1L}}};
    int32_t ****l_372 = (void*)0;
    int i, j, k;
    (*l_125) = func_50(func_50(func_50(p_36)));
    for (g_52 = 0; (g_52 < 14); g_52 = safe_add_func_int8_t_s_s(g_52, 1))
    {
        int8_t l_138 = 0x09L;
        uint32_t l_139[6][10][4] = {{{1UL, 0UL, 0x447CF268L, 0xE63DA663L}, {1UL, 0UL, 0x447CF268L, 0xE63DA663L}, {1UL, 0UL, 0x447CF268L, 0xE63DA663L}, {1UL, 0UL, 0x447CF268L, 0xE63DA663L}, {1UL, 0UL, 0x447CF268L, 0xE63DA663L}, {1UL, 0UL, 0x447CF268L, 0xE63DA663L}, {1UL, 0UL, 0x447CF268L, 0xE63DA663L}, {1UL, 0UL, 0x447CF268L, 0xE63DA663L}, {1UL, 0UL, 0x447CF268L, 0xE63DA663L}, {1UL, 0UL, 0x447CF268L, 0xE63DA663L}}, {{1UL, 0UL, 0x447CF268L, 0xE63DA663L}, {1UL, 0UL, 0x447CF268L, 0xE63DA663L}, {1UL, 0UL, 0x447CF268L, 0xE63DA663L}, {1UL, 0UL, 0x447CF268L, 0xE63DA663L}, {1UL, 0UL, 0x447CF268L, 0xE63DA663L}, {1UL, 0UL, 0x447CF268L, 0xE63DA663L}, {1UL, 0UL, 0x447CF268L, 0xE63DA663L}, {1UL, 0UL, 0x447CF268L, 0xE63DA663L}, {1UL, 0UL, 0x447CF268L, 0xE63DA663L}, {1UL, 0UL, 0x447CF268L, 0xE63DA663L}}, {{1UL, 0UL, 0x447CF268L, 0xE63DA663L}, {1UL, 0UL, 0x447CF268L, 0xE63DA663L}, {1UL, 0UL, 0x447CF268L, 0xE63DA663L}, {1UL, 0UL, 0x447CF268L, 0xE63DA663L}, {1UL, 0UL, 0x447CF268L, 0xE63DA663L}, {1UL, 0UL, 0x447CF268L, 0xE63DA663L}, {1UL, 0UL, 0x447CF268L, 0xE63DA663L}, {1UL, 0UL, 0x447CF268L, 0xE63DA663L}, {1UL, 0UL, 0x447CF268L, 0xE63DA663L}, {1UL, 0UL, 0x447CF268L, 0xE63DA663L}}, {{1UL, 0UL, 0x447CF268L, 0xE63DA663L}, {1UL, 0UL, 0x447CF268L, 0xE63DA663L}, {1UL, 0UL, 0x447CF268L, 0xE63DA663L}, {1UL, 0UL, 0x447CF268L, 0xE63DA663L}, {1UL, 0UL, 0x447CF268L, 0xE63DA663L}, {1UL, 0UL, 0x447CF268L, 0xE63DA663L}, {1UL, 0UL, 0x447CF268L, 0xE63DA663L}, {1UL, 0UL, 0x447CF268L, 0xE63DA663L}, {1UL, 0UL, 0x447CF268L, 0xE63DA663L}, {1UL, 0UL, 0x447CF268L, 0xE63DA663L}}, {{1UL, 0UL, 0x447CF268L, 0xE63DA663L}, {1UL, 0UL, 0x447CF268L, 0xE63DA663L}, {1UL, 0UL, 0x447CF268L, 0xE63DA663L}, {1UL, 0UL, 0x447CF268L, 0xE63DA663L}, {1UL, 0UL, 0x447CF268L, 0xE63DA663L}, {1UL, 0UL, 0x447CF268L, 0xE63DA663L}, {1UL, 0UL, 0x447CF268L, 0xE63DA663L}, {1UL, 0UL, 0x447CF268L, 0xE63DA663L}, {1UL, 0UL, 0x447CF268L, 0xE63DA663L}, {1UL, 0UL, 0x447CF268L, 0xE63DA663L}}, {{1UL, 0UL, 0x447CF268L, 0xE63DA663L}, {1UL, 0UL, 0x447CF268L, 0xE63DA663L}, {1UL, 0UL, 0x447CF268L, 0xE63DA663L}, {1UL, 0UL, 0x447CF268L, 0xE63DA663L}, {1UL, 0UL, 0x447CF268L, 0xE63DA663L}, {1UL, 0UL, 0x447CF268L, 0xE63DA663L}, {1UL, 0UL, 0x447CF268L, 0xE63DA663L}, {1UL, 0UL, 0x447CF268L, 0xE63DA663L}, {1UL, 0UL, 0x447CF268L, 0xE63DA663L}, {1UL, 0UL, 0x447CF268L, 0xE63DA663L}}};
        int32_t *l_149 = &g_18[2];
        int32_t ****l_185 = &l_177;
        int32_t l_232 = 0L;
        int32_t l_238 = 9L;
        uint16_t l_316 = 65527UL;
        uint32_t l_333[2];
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_333[i] = 0xBC76C518L;
        for (p_38 = 8; (p_38 > 59); ++p_38)
        {
            int32_t l_136[2];
            uint32_t l_137 = 9UL;
            int32_t **l_148 = &g_112;
            int32_t l_167 = 7L;
            int32_t ***l_175[3];
            int32_t ****l_174 = &l_175[1];
            int8_t l_216 = 0x33L;
            int i;
            for (i = 0; i < 2; i++)
                l_136[i] = 0xE502840AL;
            for (i = 0; i < 3; i++)
                l_175[i] = (void*)0;
        }
        for (l_138 = 7; (l_138 >= 0); l_138 -= 1)
        {
            uint8_t l_229 = 0x98L;
            int32_t l_248 = 0x03701D3AL;
            int i;
            l_232 = (g_152 || ((g_18[4] > (safe_add_func_uint16_t_u_u((safe_mod_func_int16_t_s_s(l_229, p_37)), ((g_152 >= (safe_add_func_int32_t_s_s(l_229, (*p_36)))) < p_40)))) ^ 8UL));
            (*l_125) = p_36;
            if ((g_18[1] > ((p_37 < 0L) == (+(safe_unary_minus_func_uint32_t_u((((safe_add_func_uint32_t_u_u(g_18[2], (g_18[4] <= (&p_36 == (void*)0)))) , (0x62L != ((safe_unary_minus_func_int8_t_s(((l_229 || p_39) < 255UL))) && 4L))) , l_238)))))))
            {
                uint16_t l_239[10][6] = {{65531UL, 0x7760L, 0x3A1DL, 0x7760L, 65531UL, 1UL}, {65531UL, 0x7760L, 0x3A1DL, 0x7760L, 65531UL, 1UL}, {65531UL, 0x7760L, 0x3A1DL, 0x7760L, 65531UL, 1UL}, {65531UL, 0x7760L, 0x3A1DL, 0x7760L, 65531UL, 1UL}, {65531UL, 0x7760L, 0x3A1DL, 0x7760L, 65531UL, 1UL}, {65531UL, 0x7760L, 0x3A1DL, 0x7760L, 65531UL, 1UL}, {65531UL, 0x7760L, 0x3A1DL, 0x7760L, 65531UL, 1UL}, {65531UL, 0x7760L, 0x3A1DL, 0x7760L, 65531UL, 1UL}, {65531UL, 0x7760L, 0x3A1DL, 0x7760L, 65531UL, 1UL}, {65531UL, 0x7760L, 0x3A1DL, 0x7760L, 65531UL, 1UL}};
                int i, j;
                return l_239[7][5];
            }
            else
            {
                p_36 = p_36;
            }
            for (g_152 = 3; (g_152 >= 0); g_152 -= 1)
            {
                uint8_t l_241 = 0xC5L;
                int32_t l_254 = (-1L);
            }
        }
    }
    (*l_125) = func_50(((g_152 == (safe_lshift_func_int8_t_s_s(((safe_add_func_uint32_t_u_u((((((((((((((((**l_125) , (((((safe_rshift_func_int8_t_s_u((&l_177 != &l_177), 2)) == (((p_39 | ((0L >= (p_38 <= (~((g_18[3] , (safe_sub_func_int8_t_s_s(((-7L) == g_18[3]), p_39))) || 0UL)))) , p_39)) ^ g_152) , 0x348AL)) , 0UL) , 0xC0EDL) , g_52)) | l_370[5][2][1]) , l_371[3][4][7]) != g_18[4]) ^ g_18[3]) , p_38) <= 0UL) <= p_38) && g_152) | p_37) , l_372) == &l_177) , g_18[4]) | 0xF49CL), (*g_112))) < (-2L)), 2))) , p_36));
    return g_354;
}
static uint8_t func_42(uint8_t p_43, uint32_t p_44, int32_t * p_45, int32_t * p_46)
{
    int32_t **l_124 = &g_112;
    (*l_124) = func_50(p_45);
    return (**l_124);
}
inline static int32_t * func_50(int32_t * p_51)
{
    int32_t l_60 = (-10L);
    for (g_52 = 0; (g_52 <= (-25)); --g_52)
    {
        uint32_t l_61 = 5UL;
        int32_t *l_68 = &l_60;
        int8_t l_76 = 0x33L;
        uint32_t l_110 = 1UL;
        uint8_t l_113 = 8UL;
        (*l_68) = (0xA84BL >= func_55((l_60 , p_51), l_61, l_60, (((safe_rshift_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((((&l_60 != p_51) | l_60) <= ((g_52 && (-1L)) < l_61)), l_61)), l_60)) <= g_18[4]) ^ 0x4EA3L)));
        (*l_68) = (safe_add_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_s(((safe_rshift_func_uint16_t_u_s(((((((safe_unary_minus_func_uint16_t_u((0L <= ((*l_68) & l_76)))) & (safe_mod_func_uint32_t_u_u(((safe_mod_func_int32_t_s_s((((safe_add_func_uint8_t_u_u(l_60, ((((l_60 || (1UL && (safe_rshift_func_uint8_t_u_s(((g_52 && ((safe_mod_func_int32_t_s_s(0x384C7B93L, (((((void*)0 != p_51) != l_60) , 0x640DL) && (*l_68)))) <= 0x80ABL)) & 0x6109L), 3)))) == (-7L)) <= (*l_68)) , l_60))) , (void*)0) != (void*)0), g_18[4])) <= 1L), g_18[2]))) | g_18[2]) >= g_18[3]) && (*l_68)) >= 0x8BBD8818L), g_52)) , l_60), 3)) || l_60), 8UL));
        (*l_68) = (safe_mod_func_uint32_t_u_u((safe_add_func_uint32_t_u_u(((65527UL == (l_60 < ((void*)0 == &l_68))) && (safe_add_func_int32_t_s_s((l_60 & (g_18[4] < ((((l_68 != l_68) <= (safe_lshift_func_uint16_t_u_s(l_60, 14))) == l_60) && 0xD694L))), l_60))), 0xF9DBC330L)), 0x420D6CD4L));
        for (l_60 = 7; (l_60 >= (-25)); l_60 = safe_sub_func_int32_t_s_s(l_60, 9))
        {
            int32_t l_97 = 1L;
            uint32_t l_109 = 4294967288UL;
            int32_t *l_122 = &l_60;
        }
    }
    l_60 = 0x36E8D033L;
    return p_51;
}
inline static int16_t func_55(int32_t * p_56, uint8_t p_57, int32_t p_58, uint8_t p_59)
{
    int32_t *l_66[5];
    int32_t **l_67 = &l_66[4];
    int i;
    for (i = 0; i < 5; i++)
        l_66[i] = &g_52;
    (*l_67) = l_66[4];
    return g_18[4];
}
int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    for (i = 0; i < 5; i++)
    {
        csmith_sink_ = g_18[i];
    }
    csmith_sink_ = g_52;
    csmith_sink_ = g_152;
    csmith_sink_ = g_354;
    csmith_sink_ = g_499;
    csmith_sink_ = g_512;
    platform_main_end(0,0);
    return 0;
}
