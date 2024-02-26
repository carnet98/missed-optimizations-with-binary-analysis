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
#pragma pack(push)
#pragma pack(1)
struct S0 {
   unsigned f0 : 22;
   signed f1 : 19;
   unsigned f2 : 9;
   const signed f3 : 17;
   signed f4 : 28;
   signed f5 : 3;
   const signed f6 : 21;
};
#pragma pack(pop)
struct S1 {
   int32_t f0;
   const int32_t f1;
   const int8_t f2;
   int8_t f3;
};
static int32_t g_8 = 0x16A205B2L;
static int32_t g_16[3] = {(-1L),(-1L),(-1L)};
static int32_t *g_15 = &g_16[2];
static struct S1 g_21 = {0x295A5277L,0x0104353EL,0x3AL,-4L};
static int32_t g_50 = 0xDA29A6A9L;
static int32_t g_55 = 0x0F3C6490L;
static int32_t g_108 = 0xBE24636BL;
static int32_t ***g_137 = (void*)0;
static int32_t * const *g_309 = &g_15;
static int32_t g_429 = 0x6562D020L;
static int32_t g_550 = 0xABA05EC2L;
static int32_t *g_686 = &g_16[2];
static int32_t ****g_719 = &g_137;
static int32_t *****g_718[2] = {&g_719,&g_719};
static int32_t g_920 = 0xF795D2A6L;
static uint32_t g_1043[1] = {4UL};
static int32_t *g_1103[1] = {&g_55};
static uint8_t func_1(void);
static int32_t * func_2(int32_t p_3);
static int32_t func_4(uint8_t p_5, int8_t p_6, int32_t * p_7);
static uint32_t func_10(uint16_t p_11, struct S0 p_12, int32_t * p_13);
static const int32_t func_17(uint16_t p_18, struct S1 p_19, int32_t * p_20);
static int32_t * func_31(uint32_t p_32, struct S1 p_33, int32_t * p_34, int32_t * p_35);
static uint32_t func_36(struct S0 p_37, int32_t p_38);
static uint32_t func_44(int32_t * p_45, int32_t * p_46, int8_t p_47);
static uint8_t func_58(int32_t p_59, uint16_t p_60, int32_t p_61);
static uint16_t func_70(int32_t * p_71, uint32_t p_72, int32_t * const p_73, struct S1 p_74);
static uint8_t func_1(void)
{
    int8_t l_9 = 1L;
    struct S0 l_14[2] = {{1703,211,20,-311,-15558,-1,-426},{1703,211,20,-311,-15558,-1,-426}};
    const int32_t **l_846 = (void*)0;
    const int32_t ***l_845 = &l_846;
    const int32_t ****l_844 = &l_845;
    const int32_t *****l_843[2];
    int32_t *l_847[3];
    int32_t *l_1328 = &g_50;
    int32_t l_1329 = 0L;
    int i;
    for (i = 0; i < 2; i++)
        l_843[i] = &l_844;
    for (i = 0; i < 3; i++)
        l_847[i] = &g_429;
    l_1328 = func_2(func_4(g_8, (l_9 != (func_10(l_9, l_14[1], g_15) >= (l_843[1] == (void*)0))), l_847[0]));
    (*g_686) |= 4L;
    (*g_686) &= (&l_844 != (void*)0);
    return l_1329;
}
static int32_t * func_2(int32_t p_3)
{
    uint8_t l_904 = 0xCCL;
    int32_t l_911 = 0x4222F1F6L;
    int32_t l_918 = 0xAA750571L;
    int32_t l_922 = 1L;
    int32_t l_923 = (-4L);
    int32_t l_927 = 1L;
    uint16_t l_928 = 0x163DL;
    const int32_t *l_932 = &l_911;
    const int32_t **l_931[4][10] = {{&l_932,&l_932,&l_932,&l_932,&l_932,&l_932,&l_932,&l_932,&l_932,&l_932},{&l_932,&l_932,&l_932,&l_932,(void*)0,&l_932,(void*)0,&l_932,&l_932,&l_932},{(void*)0,&l_932,&l_932,(void*)0,&l_932,&l_932,(void*)0,&l_932,&l_932,(void*)0},{&l_932,&l_932,&l_932,&l_932,&l_932,&l_932,&l_932,&l_932,&l_932,&l_932}};
    uint16_t l_1006[6][1][9] = {{{0xBF1FL,0x3BADL,0x4A0BL,0x2F0DL,0x0C27L,0x0C27L,0x2F0DL,0x4A0BL,0x3BADL}},{{65526UL,65531UL,0xBF1FL,0x2F0DL,7UL,65533UL,0x4A0BL,0xEADCL,0UL}},{{65535UL,0UL,0x0C27L,0UL,0UL,0x2F0DL,0UL,0UL,0UL}},{{0UL,65531UL,0xCD50L,0xCD50L,65531UL,0UL,65535UL,0x3BADL,0UL}},{{0UL,0x3BADL,0xEADCL,0xF0A4L,65526UL,0x4A0BL,0UL,0xCD50L,0UL}},{{0xF0A4L,0xEADCL,0x3BADL,0UL,65535UL,65535UL,65535UL,0UL,0x3BADL}}};
    int32_t *l_1061 = &g_55;
    int32_t ****l_1079 = &g_137;
    int32_t l_1098 = 0L;
    int32_t *l_1118 = &g_16[2];
    struct S1 l_1123 = {0x082FECA0L,1L,0L,0x00L};
    uint32_t l_1129[7];
    int32_t ** const l_1203 = &l_1061;
    uint8_t l_1237 = 254UL;
    int32_t *l_1255 = &g_50;
    int32_t l_1276 = 0x5B5A7F34L;
    int32_t l_1282 = 0xFCB2AE5AL;
    int32_t l_1283 = (-10L);
    int32_t l_1284 = 0x6EB000D4L;
    int32_t l_1285 = 0x83565437L;
    int32_t l_1286 = 0x4A4FA1DFL;
    int32_t l_1287 = 1L;
    int32_t *l_1326 = &g_50;
    int32_t *l_1327[2][1];
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_1129[i] = 0UL;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_1327[i][j] = (void*)0;
    }
    return l_1327[0][0];
}
static int32_t func_4(uint8_t p_5, int8_t p_6, int32_t * p_7)
{
    int32_t *l_849 = &g_55;
    int32_t l_865 = 0x4063B49BL;
    int32_t l_866 = 0xB9134090L;
    int32_t l_867 = 0xF9759D12L;
    int32_t l_868 = 0x052BB73BL;
    uint8_t l_869 = 8UL;
    int32_t * const ** const l_879 = &g_309;
    int32_t * const ** const * const l_878 = &l_879;
    int32_t * const ** const * const *l_877[10] = {&l_878,(void*)0,&l_878,(void*)0,(void*)0,&l_878,(void*)0,&l_878,(void*)0,(void*)0};
    uint32_t l_886[10] = {0x7B1766E9L,1UL,0x7B1766E9L,0x7D068A3DL,0x7D068A3DL,0x7B1766E9L,1UL,0x7B1766E9L,0x7D068A3DL,0x7D068A3DL};
    uint32_t l_890[2];
    uint16_t l_891 = 1UL;
    uint32_t l_892 = 0UL;
    int i;
    for (i = 0; i < 2; i++)
        l_890[i] = 0x24B386A6L;
    (**g_309) ^= (*p_7);
lbl_893:
    for (g_50 = 1; (g_50 >= 0); g_50 -= 1)
    {
        int16_t l_859[4] = {0xF531L,0xF531L,0xF531L,0xF531L};
        int32_t l_860 = 1L;
        int32_t l_861[8][8] = {{9L,7L,9L,7L,9L,7L,9L,7L},{9L,7L,9L,7L,9L,7L,9L,7L},{9L,7L,9L,7L,9L,7L,9L,7L},{9L,7L,9L,7L,9L,7L,9L,7L},{9L,7L,9L,7L,9L,7L,9L,7L},{9L,7L,9L,7L,9L,7L,9L,7L},{9L,7L,9L,7L,9L,7L,9L,7L},{9L,7L,9L,7L,9L,7L,9L,7L}};
        int16_t l_862 = 0xBEF8L;
        int32_t *l_863 = &g_429;
        int32_t *l_864[2];
        int i, j;
        for (i = 0; i < 2; i++)
            l_864[i] = &g_429;
        for (g_550 = 0; (g_550 <= 1); g_550 += 1)
        {
            int32_t **l_848 = &g_686;
            (*l_848) = p_7;
            l_860 ^= (((((0x75F79F04L && (g_108 == ((void*)0 == l_849))) == ((((!(g_429 | 0x8402L)) | (safe_mul_func_int16_t_s_s((((safe_rshift_func_int16_t_s_u(p_5, (safe_add_func_uint16_t_u_u(0UL, ((safe_mul_func_uint8_t_u_u(((void*)0 != &l_849), g_429)) >= l_859[3]))))) <= (**l_848)) <= 1UL), g_16[1]))) || p_6) < p_5)) < 0x0FL) < (*l_849)) <= (*g_15));
            if ((*p_7))
                break;
            if ((*p_7))
            {
                if ((*l_849))
                    break;
            }
            else
            {
                (**l_848) &= l_859[3];
            }
        }
        --l_869;
        (*l_863) ^= (((+p_6) == (safe_mul_func_int16_t_s_s((*l_849), (*l_849)))) ^ p_5);
        (*g_686) = (safe_lshift_func_uint16_t_u_u((l_877[3] == &g_719), 5));
    }
    l_892 ^= ((safe_mul_func_int16_t_s_s((((((-1L) <= ((safe_lshift_func_uint8_t_u_s(0xCDL, ((((void*)0 != &l_878) <= (((****l_878) & (safe_mod_func_int32_t_s_s((l_886[8] && (safe_unary_minus_func_uint8_t_u(((safe_rshift_func_uint8_t_u_u(p_5, p_5)) != ((void*)0 == (*l_879)))))), p_6))) && (*p_7))) >= (****l_878)))) < l_890[0])) || g_55) | g_21.f2) >= (**g_309)), l_891)) || g_21.f0);
    if (l_869)
        goto lbl_893;
    return (*p_7);
}
static uint32_t func_10(uint16_t p_11, struct S0 p_12, int32_t * p_13)
{
    const uint32_t l_571[4][5] = {{0x80774A50L,0x6B643258L,0x6B643258L,0x80774A50L,0x6B643258L},{0UL,0UL,4294967295UL,0UL,0UL},{0x6B643258L,0x80774A50L,0x6B643258L,0x6B643258L,0x80774A50L},{0UL,0x5C02DEE4L,0x5C02DEE4L,0UL,0x5C02DEE4L}};
    int32_t l_579 = 0x66DE2BC6L;
    uint32_t l_581[9][1] = {{0x499C8A93L},{4294967290UL},{0x499C8A93L},{4294967290UL},{0x499C8A93L},{4294967290UL},{0x499C8A93L},{4294967290UL},{0x499C8A93L}};
    int32_t l_607 = 0xEEB94F3CL;
    int32_t l_616 = (-1L);
    int32_t l_620 = 1L;
    int32_t **l_692[1];
    int32_t ***l_691[8];
    uint16_t l_707 = 0x02FCL;
    int32_t ****l_715 = &l_691[4];
    int32_t *****l_714 = &l_715;
    int16_t l_756 = 2L;
    int32_t **** const * const l_764 = &g_719;
    const uint32_t l_786 = 6UL;
    uint32_t l_809 = 0x0A6DFBD8L;
    int32_t l_814 = 9L;
    int i, j;
    for (i = 0; i < 1; i++)
        l_692[i] = &g_686;
    for (i = 0; i < 8; i++)
        l_691[i] = &l_692[0];
    for (p_11 = 0; (p_11 <= 2); p_11 += 1)
    {
        int32_t l_580[6][6][6] = {{{(-1L),9L,0L,0xB71E0002L,0x30418B9AL,0x1547C4DCL},{1L,0x9AFC0437L,0x8ACD95A8L,1L,1L,9L},{1L,1L,(-1L),(-1L),0x89DF03D7L,0xE7D91D22L},{0x6146F474L,0x8D4C7CE3L,(-2L),0x2CFEE170L,0x304A1884L,1L},{(-2L),0L,0xB71E0002L,0x304A1884L,7L,7L},{(-7L),0xE7D91D22L,0xE7D91D22L,(-7L),0L,0x49A9E73DL}},{{1L,0x2FD68A29L,0x30418B9AL,0x19B8C05AL,1L,0x2CFEE170L},{0xC0BB32C3L,0x1547C4DCL,0xB73B8B81L,0xF750D730L,1L,0xFBFB54F0L},{9L,0x2FD68A29L,0xADC43AA2L,0L,0L,0xD6662754L},{0xB71E0002L,0xE7D91D22L,0xC0BB32C3L,1L,7L,(-7L)},{0x6A5BD3E2L,0L,0x9AFC0437L,0xB73B8B81L,0x304A1884L,(-1L)},{1L,0x8D4C7CE3L,1L,7L,0x49A9E73DL,1L}},{{0xAE814B6CL,0xF750D730L,0x6E8D5083L,1L,0x89DF03D7L,1L},{0xE7D91D22L,0xB73B8B81L,0xFBFB54F0L,1L,0L,1L},{1L,(-1L),1L,(-5L),0xC0BB32C3L,0xB71E0002L},{(-1L),0xAE814B6CL,0x304A1884L,9L,(-1L),0xF750D730L},{1L,0x4A355F0EL,1L,9L,0xE7D91D22L,(-5L)},{(-1L),0x5C8EECDEL,0x73560EADL,(-5L),0xDFB355A3L,0x9AFC0437L}},{{1L,(-7L),0xE914F3DBL,1L,0x9AFC0437L,(-2L)},{0xE7D91D22L,0L,0xF750D730L,1L,1L,0L},{0xAE814B6CL,(-7L),(-7L),7L,0x19B8C05AL,(-1L)},{1L,0xE914F3DBL,1L,0xB73B8B81L,1L,9L},{0x6A5BD3E2L,(-1L),0x2FD68A29L,1L,1L,0x2FD68A29L},{0xB71E0002L,0xB71E0002L,0x89DF03D7L,0L,0x8ACD95A8L,0x73560EADL}},{{9L,0xDFB355A3L,1L,0xF750D730L,(-5L),0x89DF03D7L},{0xC0BB32C3L,9L,1L,0x19B8C05AL,0xB71E0002L,0x73560EADL},{1L,0x19B8C05AL,0x89DF03D7L,(-7L),9L,0x2FD68A29L},{(-7L),9L,0x2FD68A29L,0x304A1884L,0x8D4C7CE3L,9L},{(-2L),1L,1L,0x2CFEE170L,0x6146F474L,(-1L)},{0x6146F474L,1L,(-7L),9L,(-1L),0L}},{{0x304A1884L,1L,0xF750D730L,0xE7D91D22L,1L,(-2L)},{(-5L),0x9AFC0437L,0xE914F3DBL,(-1L),0xE914F3DBL,0x9AFC0437L},{(-1L),1L,0x73560EADL,(-1L),(-1L),(-5L)},{0x30418B9AL,0x49A9E73DL,1L,0x5C8EECDEL,(-2L),0xF750D730L},{0x2FD68A29L,0x49A9E73DL,0x304A1884L,1L,0xDFB355A3L,(-1L)},{0x4A355F0EL,0x304A1884L,1L,0x6146F474L,0x8ACD95A8L,0xADC43AA2L}}};
        uint16_t l_625 = 65534UL;
        int32_t *l_658 = &g_16[2];
        int32_t ****l_674[6] = {&g_137,&g_137,&g_137,&g_137,&g_137,&g_137};
        int32_t *****l_673 = &l_674[2];
        int32_t l_704 = 0xE8F94FF3L;
        int32_t l_770 = (-9L);
        int i, j, k;
    }
    --l_809;
    for (l_620 = 0; (l_620 <= 0); l_620 += 1)
    {
        uint32_t l_819[7][2];
        int32_t *****l_828 = &l_715;
        int32_t l_836 = 0L;
        int32_t l_837 = (-5L);
        int32_t l_838 = 0xCFA23563L;
        int32_t l_839 = 0L;
        int i, j;
        for (i = 0; i < 7; i++)
        {
            for (j = 0; j < 2; j++)
                l_819[i][j] = 0x4B8D4815L;
        }
        if ((*****l_714))
            break;
        (****l_715) = (safe_sub_func_int8_t_s_s((-5L), l_814));
        for (g_108 = 0; (g_108 <= 0); g_108 += 1)
        {
            int32_t *** const *l_827[3];
            int32_t *** const **l_826 = &l_827[1];
            uint16_t l_840 = 0x7A27L;
            int i, j;
            for (i = 0; i < 3; i++)
                l_827[i] = &l_691[2];
            (*p_13) ^= l_581[(g_108 + 1)][g_108];
            (*g_686) = (safe_sub_func_uint32_t_u_u((((safe_rshift_func_uint8_t_u_s(l_819[4][0], 5)) > ((safe_add_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u(((((p_12.f6 ^ (safe_mul_func_uint8_t_u_u((((((g_50 ^ (l_826 == l_828)) == (safe_sub_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u((*****l_826), (safe_add_func_int32_t_s_s((+(&g_719 == &l_827[0])), (*****l_828))))), (*p_13)))) < 0x9336L) != p_12.f0) ^ 4294967295UL), g_21.f3))) ^ (*****l_828)) < 0x28F3L) <= p_12.f5), (*****l_826))), 4L)) && (*****l_828))) & (*g_15)), (*****l_714)));
            l_840++;
        }
    }
    return g_50;
}
static const int32_t func_17(uint16_t p_18, struct S1 p_19, int32_t * p_20)
{
    int16_t l_22 = 0x09E8L;
    int32_t *l_23 = (void*)0;
    int32_t *l_24 = (void*)0;
    int32_t *l_25 = (void*)0;
    int32_t *l_26[10] = {&g_21.f0,&g_21.f0,&g_21.f0,&g_21.f0,&g_21.f0,&g_21.f0,&g_21.f0,&g_21.f0,&g_21.f0,&g_21.f0};
    int32_t l_27 = 0xEC37461BL;
    uint8_t l_28 = 0UL;
    struct S0 l_39[1] = {{1489,440,1,-38,-13121,-1,29}};
    struct S1 l_392 = {-1L,9L,0x3DL,0x50L};
    int32_t **l_568 = &l_26[4];
    int i;
    l_28--;
    (*l_568) = func_31(func_36(l_39[0], ((void*)0 != l_23)), l_392, l_25, l_24);
    return (*p_20);
}
static int32_t * func_31(uint32_t p_32, struct S1 p_33, int32_t * p_34, int32_t * p_35)
{
    int16_t l_393 = (-9L);
    int32_t **l_407 = &g_15;
    int32_t ***l_406 = &l_407;
    int32_t l_428[2];
    uint32_t l_430 = 0x4E597F0CL;
    uint32_t l_480[1];
    int32_t ** const *l_564 = (void*)0;
    int32_t ** const **l_563 = &l_564;
    int32_t ** const ***l_562 = &l_563;
    int16_t l_565[3][10];
    int i, j;
    for (i = 0; i < 2; i++)
        l_428[i] = (-4L);
    for (i = 0; i < 1; i++)
        l_480[i] = 9UL;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 10; j++)
            l_565[i][j] = 9L;
    }
    if (l_393)
    {
        const int8_t l_408 = 0xECL;
        int32_t *l_409 = &g_16[1];
        (*l_409) = ((safe_add_func_int32_t_s_s(((+(l_393 ^ g_21.f2)) || (0x2180A96AL ^ ((safe_add_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_s((((safe_lshift_func_int8_t_s_u(((((safe_unary_minus_func_uint32_t_u((1UL | (safe_lshift_func_uint16_t_u_u(p_33.f1, 11))))) && g_21.f0) | (p_33.f2 < ((((&g_309 == l_406) < 65531UL) <= l_408) >= 0xA0L))) & l_408), l_408)) > g_21.f1) != g_16[1]), 5)) | g_21.f0), 0x22L)) || p_32))), 0x24D97331L)) < p_33.f0);
        (*l_409) ^= (safe_lshift_func_int8_t_s_s(((void*)0 == (*l_406)), 0));
        g_16[2] = ((*l_409) > p_33.f1);
    }
    else
    {
        for (g_55 = 0; (g_55 <= 20); g_55 = safe_add_func_int16_t_s_s(g_55, 1))
        {
            int8_t l_416 = 0x45L;
            for (p_33.f0 = 0; (p_33.f0 >= 8); p_33.f0 = safe_add_func_int32_t_s_s(p_33.f0, 1))
            {
                return &g_16[2];
            }
            (**l_406) = p_35;
            if (l_416)
                break;
        }
    }
    for (p_33.f0 = 2; (p_33.f0 >= 0); p_33.f0 -= 1)
    {
        int32_t *l_417 = (void*)0;
        int32_t *l_418 = &g_16[0];
        int32_t *l_419 = &g_55;
        int32_t *l_420 = (void*)0;
        int32_t *l_421 = &g_50;
        int32_t *l_422 = &g_50;
        int32_t *l_423 = &g_21.f0;
        int32_t *l_424 = &g_55;
        int32_t *l_425 = &g_16[2];
        int32_t *l_426[7][3] = {{(void*)0,&g_16[2],(void*)0},{&g_16[2],&g_16[2],&g_16[2]},{(void*)0,&g_16[2],(void*)0},{&g_16[2],&g_16[2],&g_16[2]},{(void*)0,&g_16[2],(void*)0},{&g_16[2],&g_16[2],&g_16[2]},{(void*)0,&g_16[2],(void*)0}};
        int8_t l_427 = 0x76L;
        int16_t l_445[9][1];
        uint32_t l_513 = 0x14DF5019L;
        uint16_t l_520 = 0x8B50L;
        int32_t *****l_547[1];
        uint32_t l_559 = 0x001951E7L;
        int i, j;
        for (i = 0; i < 9; i++)
        {
            for (j = 0; j < 1; j++)
                l_445[i][j] = (-1L);
        }
        for (i = 0; i < 1; i++)
            l_547[i] = (void*)0;
        l_430++;
        for (p_32 = 0; (p_32 <= 2); p_32 += 1)
        {
            int32_t ***l_438 = (void*)0;
            uint16_t l_463 = 65535UL;
            int i;
            g_16[p_33.f0] = (0xC6L || (safe_sub_func_uint32_t_u_u(((safe_add_func_uint32_t_u_u((~(l_438 == (void*)0)), g_16[p_33.f0])) | 0L), (safe_mul_func_int16_t_s_s(g_55, (g_16[0] <= ((safe_mod_func_uint8_t_u_u((0UL & (safe_rshift_func_int8_t_s_u(p_33.f0, p_33.f0))), (*l_424))) >= l_445[3][0])))))));
            for (l_427 = 0; (l_427 <= 2); l_427 += 1)
            {
                int32_t l_451 = (-2L);
                const int8_t l_485 = 0x85L;
                int32_t ***l_506 = &l_407;
                if ((+(safe_mod_func_int16_t_s_s(p_33.f0, (((((safe_add_func_uint16_t_u_u(l_451, 0x9E2CL)) < (0UL <= 0x66L)) == g_429) | (((&l_451 == p_35) == (safe_add_func_int16_t_s_s(0x71CAL, p_33.f1))) & (*l_421))) | l_451)))))
                {
                    int32_t l_454 = 0x56A80535L;
                    int i, j;
                    l_454 = 0xDED77D42L;
                }
                else
                {
                    return p_35;
                }
                for (p_33.f3 = 20; (p_33.f3 >= 11); p_33.f3--)
                {
                    uint32_t l_460 = 18446744073709551614UL;
                    for (g_50 = 0; (g_50 != 6); ++g_50)
                    {
                        int32_t *l_459 = &l_428[1];
                        if (l_451)
                            break;
                        return &g_55;
                    }
                    (*l_418) = ((g_50 & ((p_32 != (((l_460 > 0xA3E0L) <= (safe_mul_func_uint8_t_u_u(l_463, ((safe_sub_func_int32_t_s_s((safe_lshift_func_int8_t_s_u((safe_add_func_int32_t_s_s((((safe_rshift_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((g_50 || ((safe_add_func_uint8_t_u_u(l_451, 2UL)) <= (p_33.f0 < l_480[0]))), p_33.f1)), 3)) && l_451) >= 9UL), 0x3D8D72F7L)), g_16[2])), l_451)) == l_451)))) ^ p_33.f1)) != p_33.f1)) && 255UL);
                    for (l_451 = (-12); (l_451 != 27); ++l_451)
                    {
                        int32_t *l_497 = &g_16[2];
                        (*l_422) = ((((safe_add_func_int16_t_s_s((p_33.f1 != (((g_21.f3 | p_32) > l_485) != ((void*)0 == &g_309))), (safe_mul_func_int16_t_s_s((~(g_21.f1 > (safe_lshift_func_int8_t_s_s(((safe_sub_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_u((l_497 != (void*)0), 6)) | 0x0AL), 0x6FL)) | 0UL), g_8)) && p_33.f1), g_8)))), p_33.f3)))) | g_21.f3) | 0x37A3F2DCL) ^ g_55);
                        (*l_407) = p_34;
                        (*l_425) = (safe_mod_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((1UL ^ (safe_mod_func_uint32_t_u_u(((safe_add_func_uint32_t_u_u((l_506 == l_438), (g_429 || g_21.f2))) >= ((0UL || (((((((l_460 ^ (safe_lshift_func_int16_t_s_u(g_21.f0, 8))) & ((safe_sub_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u(((void*)0 != &g_309), 0)), l_460)) & 5UL)) < g_16[2]) > (-1L)) != l_513) <= p_32) ^ p_33.f3)) & l_460)), 0x771CC63FL))), 0x58B4L)), p_32));
                    }
                }
            }
        }
        (**l_406) = &g_16[p_33.f0];
        if (((safe_add_func_int32_t_s_s(((safe_add_func_uint8_t_u_u((***l_406), p_33.f2)) >= (((safe_mod_func_int8_t_s_s(((l_520 >= (safe_lshift_func_uint16_t_u_u(p_32, 4))) < p_33.f3), (safe_mul_func_uint8_t_u_u(((((((safe_add_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u(g_21.f2, (g_21.f3 > ((safe_mul_func_int16_t_s_s((*l_418), 1UL)) < (*l_422))))) | (*g_15)), 0x09B1L)) <= 0x6DFF1690L) | (*l_424)) | (**l_407)) == (**l_407)) < 0xCDL), (***l_406))))) & g_50) ^ (*g_15))), (*l_424))) | 0x97C9L))
        {
            if (p_33.f1)
                break;
            if ((**l_407))
                break;
        }
        else
        {
            int32_t ****l_538[1];
            int32_t *****l_537 = &l_538[0];
            int8_t l_551 = (-7L);
            int i;
            for (i = 0; i < 1; i++)
                l_538[i] = (void*)0;
            for (l_520 = 18; (l_520 != 18); l_520 = safe_add_func_int32_t_s_s(l_520, 7))
            {
                (*l_422) &= 3L;
                for (g_21.f0 = (-21); (g_21.f0 <= 8); g_21.f0 = safe_add_func_int32_t_s_s(g_21.f0, 1))
                {
                    for (p_32 = 0; (p_32 > 41); p_32 = safe_add_func_int32_t_s_s(p_32, 9))
                    {
                        int32_t *l_546 = &g_21.f0;
                        (***l_406) = (((void*)0 == l_537) >= ((252UL >= ((safe_rshift_func_int8_t_s_s(((8L == ((*g_15) && ((safe_rshift_func_uint8_t_u_s(255UL, p_33.f1)) || (p_34 != p_35)))) != (*g_15)), 2)) && g_429)) < g_21.f3));
                        (*g_15) ^= (safe_rshift_func_int16_t_s_s((((!(p_34 != (void*)0)) ^ p_33.f2) & 0xD8A3L), (p_35 == (void*)0)));
                        return l_546;
                    }
                }
                l_547[0] = &l_538[0];
            }
            for (p_33.f3 = 0; (p_33.f3 >= 27); p_33.f3++)
            {
                int32_t l_552 = 0xE9FD627EL;
                int32_t l_553 = (-1L);
                int32_t l_554 = (-1L);
                int32_t l_555 = 0L;
                int32_t l_556 = 7L;
                int32_t l_557 = 0L;
                int32_t l_558 = 0x5B2F575AL;
                (*l_407) = p_34;
                l_559--;
                (*l_418) = p_33.f2;
                (**l_406) = p_34;
            }
        }
    }
    l_565[1][2] = ((void*)0 != l_562);
    for (g_50 = 0; (g_50 == 23); g_50 = safe_add_func_uint16_t_u_u(g_50, 6))
    {
        return p_34;
    }
    return p_35;
}
static uint32_t func_36(struct S0 p_37, int32_t p_38)
{
    int16_t l_42 = 0x4EBBL;
    int32_t *l_126 = &g_21.f0;
    int32_t **l_136 = (void*)0;
    int32_t *** const l_135 = &l_136;
    uint32_t l_208 = 8UL;
    int32_t l_284 = 0x9D9BB4E3L;
    int32_t l_287 = 0x45A74A02L;
    int32_t l_289 = 0L;
    int32_t l_291[2][8][7] = {{{0L,0x8F75EC2EL,0x8716988AL,(-4L),(-1L),0xE92A9D97L,0x61B3FF6DL},{0xDB875EC3L,0x4FD79D32L,0x92906445L,(-3L),0x3C0F87B1L,0L,0xE963F5E7L},{0xD599E6D1L,0x4FD79D32L,0xE963F5E7L,(-3L),0xFC01C5CEL,0x8716988AL,0x8716988AL},{0x737C8A46L,0x8F75EC2EL,0x794BD401L,0x8F75EC2EL,0x737C8A46L,0xD599E6D1L,0xDB875EC3L},{0x8F75EC2EL,0x61B3FF6DL,0x997FF8A4L,0xE92A9D97L,0x2326A62AL,0x5BA16F0DL,0xCC2C11AEL},{0x794BD401L,0x997FF8A4L,0x8C2F3897L,0xFBABD686L,0xD599E6D1L,0xFC01C5CEL,0x11B0AF79L},{0x8F75EC2EL,0xE92A9D97L,0xFBABD686L,(-1L),0xE963F5E7L,0x924C3FCAL,0L},{0x737C8A46L,0x2326A62AL,0xD599E6D1L,0xE963F5E7L,(-3L),0xCC2C11AEL,0xB85EC9B8L}},{{0xD599E6D1L,0x5BA16F0DL,0xFC01C5CEL,0x924C3FCAL,0xCC2C11AEL,0x8F75EC2EL,0xB85EC9B8L},{0xDB875EC3L,0xCC2C11AEL,0x11B0AF79L,0L,0xB85EC9B8L,0xB85EC9B8L,0L},{0L,0x8C2F3897L,0L,0xFC01C5CEL,0x65D37855L,0xC05448FBL,0x11B0AF79L},{8L,0L,0xE991FC1BL,(-5L),0L,0xFBABD686L,0xCC2C11AEL},{0x11B0AF79L,0x2855B816L,0x2061BE2EL,0x794BD401L,0xE92A9D97L,0xC05448FBL,0xDB875EC3L},{0x924C3FCAL,1L,0x0DB183B7L,8L,0x2855B816L,0xB85EC9B8L,0x8716988AL},{1L,(-1L),0xB85EC9B8L,9L,(-5L),0x8F75EC2EL,0xE963F5E7L},{(-4L),0xC05448FBL,0x2326A62AL,0xE332CBFDL,(-5L),0xCC2C11AEL,0x61B3FF6DL}}};
    int32_t * const *l_307 = &l_126;
    int8_t l_325 = 0x86L;
    int8_t l_330 = 0xA9L;
    int32_t *l_386 = (void*)0;
    int32_t *l_387[2][3] = {{(void*)0,(void*)0,(void*)0},{&l_289,&l_289,&l_289}};
    int8_t l_388 = (-1L);
    uint32_t l_389[6][10] = {{0xD2A935E3L,0UL,0x0406FBD9L,0x22A72A61L,0UL,0UL,3UL,0x0DAA9E50L,0UL,0UL},{0x0664DF6DL,0x0406FBD9L,3UL,0x22A72A61L,0x6C35ACBBL,0UL,0UL,0UL,0UL,0x6C35ACBBL},{0x22A72A61L,0x0DAA9E50L,0x0DAA9E50L,0x22A72A61L,18446744073709551615UL,0xD2A935E3L,0UL,0x0664DF6DL,18446744073709551611UL,0xF601095BL},{0x55AAE28EL,0x0664DF6DL,0UL,2UL,6UL,1UL,0x22A72A61L,0UL,18446744073709551611UL,6UL},{18446744073709551611UL,0xD2A935E3L,0x0664DF6DL,2UL,4UL,2UL,0x0664DF6DL,0xD2A935E3L,18446744073709551611UL,4UL},{1UL,0UL,0UL,2UL,18446744073709551615UL,0x55AAE28EL,0xD2A935E3L,0x22A72A61L,18446744073709551611UL,18446744073709551615UL}};
    int i, j, k;
    if ((*g_15))
    {
        uint16_t l_53 = 0x7427L;
        struct S1 l_75 = {1L,0xD379EBF7L,0L,-10L};
        for (g_21.f0 = (-24); (g_21.f0 >= 10); ++g_21.f0)
        {
            uint8_t l_43 = 0x13L;
            int32_t *l_48 = &g_21.f0;
            int32_t *l_54 = &g_55;
        }
        (*g_15) = (safe_mul_func_int16_t_s_s(((safe_mul_func_int16_t_s_s(g_21.f0, (((*g_15) < (!(safe_add_func_int8_t_s_s((p_37.f1 <= l_42), (0x6E1CL > (safe_unary_minus_func_int8_t_s((0xF1L == 0x3DL)))))))) | g_21.f0))) || (l_53 < l_75.f1)), (-6L)));
    }
    else
    {
        uint32_t l_130 = 0xEC947174L;
        int32_t l_138 = 0xFFD43EB6L;
        uint8_t l_213 = 0x01L;
        int32_t ** const l_222[1] = {&l_126};
        uint16_t l_277 = 0xC7D0L;
        int32_t ****l_299[6][7] = {{&g_137,&g_137,&g_137,&g_137,(void*)0,&g_137,(void*)0},{&g_137,&g_137,&g_137,&g_137,&g_137,&g_137,&g_137},{&g_137,&g_137,(void*)0,(void*)0,&g_137,&g_137,&g_137},{&g_137,&g_137,&g_137,&g_137,&g_137,&g_137,&g_137},{&g_137,&g_137,(void*)0,&g_137,&g_137,(void*)0,&g_137},{&g_137,&g_137,&g_137,&g_137,&g_137,&g_137,&g_137}};
        int32_t *****l_298 = &l_299[3][5];
        int32_t ****l_304 = (void*)0;
        int8_t l_383 = 7L;
        int i, j;
        if ((((((l_126 == l_126) | (!7UL)) || (safe_sub_func_uint8_t_u_u(0UL, ((&l_126 != (void*)0) != p_38)))) <= (l_130 < (safe_mul_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(((l_135 == g_137) < 0x9FL), 3)), g_108)))) && l_138))
        {
            uint16_t l_153 = 0x98C6L;
            uint16_t l_173 = 65533UL;
            const int32_t *l_250 = &g_50;
            const int32_t **l_249 = &l_250;
            const int32_t ***l_248 = &l_249;
            int32_t l_280 = 0x36394302L;
            int32_t l_285[1];
            uint32_t l_294 = 0xF49B51BDL;
            uint32_t l_326 = 4294967294UL;
            uint16_t l_332 = 0x692CL;
            int i;
            for (i = 0; i < 1; i++)
                l_285[i] = 0xF78231FDL;
lbl_214:
            p_37.f1 = (safe_sub_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((safe_mod_func_uint32_t_u_u((safe_add_func_uint8_t_u_u((safe_add_func_int16_t_s_s((safe_sub_func_int16_t_s_s((safe_add_func_int16_t_s_s((g_55 > (((l_153 ^ ((safe_sub_func_uint16_t_u_u((0xE1E5EACDL || g_108), ((safe_rshift_func_uint8_t_u_u(((((safe_add_func_int32_t_s_s(((safe_mul_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(0xFF3CL, g_16[2])), p_37.f5)) > (((safe_mod_func_uint32_t_u_u((0L ^ (~(((safe_rshift_func_int16_t_s_s(((safe_add_func_uint32_t_u_u((g_21.f0 || p_37.f0), (*g_15))) >= l_173), g_50)) != (*l_126)) == p_37.f6))), p_37.f2)) || p_37.f5) != g_16[2])), 0xE251L)) == p_37.f0), p_37.f0)) | 1L) <= p_37.f1) ^ g_8), 5)) > 0x4766B9EEL))) <= 0xEAL)) >= 0x7FL) ^ l_130)), l_173)), g_8)), 65531UL)), 249UL)), l_173)), l_173)), g_21.f0));
            if ((safe_rshift_func_uint16_t_u_u(0x477AL, 5)))
            {
                uint32_t l_176 = 1UL;
                for (g_21.f3 = 0; (g_21.f3 <= 2); g_21.f3 += 1)
                {
                    for (p_38 = 0; (p_38 <= 2); p_38 += 1)
                    {
                        int i;
                        g_16[g_21.f3] = g_16[p_38];
                        if (l_176)
                            continue;
                    }
                }
                for (l_42 = 5; (l_42 != 14); l_42 = safe_add_func_uint16_t_u_u(l_42, 9))
                {
                    int8_t l_202 = 0x9CL;
                    int32_t ** const l_205 = &l_126;
                    for (l_176 = 0; (l_176 >= 8); ++l_176)
                    {
                        g_15 = &l_138;
                    }
                    if ((*g_15))
                        continue;
                    for (l_153 = 0; (l_153 != 52); l_153 = safe_add_func_int8_t_s_s(l_153, 4))
                    {
                        const uint32_t l_189 = 0x964B4B9CL;
                        (*g_15) |= (safe_sub_func_uint16_t_u_u(p_38, (p_37.f4 != g_21.f3)));
                        (*g_15) &= (safe_rshift_func_uint16_t_u_u(((safe_sub_func_uint16_t_u_u(65529UL, ((0x57383A17L && l_189) != (safe_lshift_func_uint8_t_u_u((((safe_lshift_func_uint8_t_u_s((0xD88BL && (g_50 > (safe_mul_func_uint16_t_u_u((!4294967295UL), (safe_mod_func_int8_t_s_s(l_153, (-6L))))))), g_55)) | p_38) == 248UL), 2))))) < p_38), 7));
                    }
                    p_37.f5 ^= ((((safe_unary_minus_func_uint32_t_u(((safe_mod_func_uint8_t_u_u(g_55, l_202)) && ((safe_add_func_uint32_t_u_u((l_205 == l_205), ((((void*)0 == &l_205) && (safe_mod_func_uint16_t_u_u(l_176, l_208))) || (safe_sub_func_int8_t_s_s(((safe_mul_func_uint16_t_u_u(((**l_205) != 0x60L), g_16[2])) & l_213), (**l_205)))))) < 1L)))) <= 248UL) == 0xEEL) < g_16[2]);
                }
                if (l_173)
                    goto lbl_214;
            }
            else
            {
                int32_t *** const l_232 = &l_136;
                uint16_t l_236 = 0x2234L;
lbl_235:
                for (l_138 = (-1); (l_138 >= (-21)); l_138--)
                {
                    for (l_173 = 0; l_173 < 3; l_173 += 1)
                    {
                        g_16[l_173] = (-3L);
                    }
                }
                for (l_153 = 0; (l_153 <= 2); l_153 += 1)
                {
                    int16_t l_233[2][8][6] = {{{(-1L),0x7AC5L,0x5FF3L,0x1E5AL,0x5FF3L,0x7AC5L},{0x2192L,0x1E5AL,7L,0xE8F5L,0x03DAL,0x3F16L},{0xE8F5L,0x03DAL,0x3F16L,0x5FF3L,0xCEE9L,0x01D9L},{0x8159L,0x03DAL,0xD558L,0xD558L,0x03DAL,0x8159L},{0x03DAL,0x1E5AL,0x7AC5L,0xBE74L,0x5FF3L,(-1L)},{0xD558L,0x7AC5L,0xCEE9L,(-1L),0x29BAL,0x04F5L},{0xD558L,0xBE74L,(-1L),0xBE74L,0xD558L,0x5FF3L},{0x03DAL,0x5FF3L,0x29BAL,0xD558L,0x04F5L,0x2192L}},{{0x8159L,(-1L),0x04F5L,0x5FF3L,0x2192L,0x2192L},{0xE8F5L,0x29BAL,0x29BAL,0xE8F5L,0x01D9L,0x5FF3L},{0x2192L,7L,(-1L),0x1E5AL,0xBE74L,0x04F5L},{(-1L),0x8159L,0xCEE9L,(-1L),0xBE74L,(-1L)},{0x7AC5L,7L,0x7AC5L,0x3F16L,0x01D9L,0x8159L},{0x5FF3L,0x29BAL,0xD558L,0x04F5L,0x2192L,0x01D9L},{0x1E5AL,(-1L),0x3F16L,0x04F5L,0x04F5L,0x3F16L},{0x5FF3L,0x5FF3L,7L,0x3F16L,0xD558L,0x7AC5L}}};
                    int32_t *l_234 = &g_50;
                    int i, j, k;
                    for (g_21.f0 = 0; (g_21.f0 <= 2); g_21.f0 += 1)
                    {
                        int32_t **l_217[10][5] = {{&l_126,&g_15,&g_15,&g_15,&l_126},{&g_15,&g_15,(void*)0,&g_15,&g_15},{&l_126,&g_15,&g_15,&g_15,&l_126},{&g_15,&g_15,(void*)0,&g_15,&g_15},{&g_15,&g_15,&l_126,&g_15,&g_15},{&g_15,&g_15,(void*)0,&g_15,&g_15},{&g_15,&g_15,&l_126,&g_15,&g_15},{&g_15,&g_15,(void*)0,&g_15,&g_15},{&g_15,&g_15,&l_126,&g_15,&g_15},{&g_15,&g_15,(void*)0,&g_15,&g_15}};
                        int i, j;
                        g_16[l_153] |= ((void*)0 == l_217[9][2]);
                        (*g_15) = ((((safe_add_func_uint32_t_u_u((251UL || ((safe_mod_func_uint32_t_u_u((((void*)0 == l_222[0]) ^ 0UL), (safe_add_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_s(g_16[g_21.f0], 3)), (((((safe_rshift_func_int8_t_s_s(((~g_16[l_153]) ^ ((0x10F4L >= (((((void*)0 != l_232) == 0x0E9AL) >= p_37.f1) != 9UL)) < p_37.f6)), 5)) > 0x4FL) == (-3L)) < g_21.f2) >= p_38))), g_55)))) == p_37.f3)), l_233[1][0][5])) & 0x7BB3L) <= p_37.f4) ^ 0x7B2E72F2L);
                        g_15 = l_234;
                        if (g_8)
                            goto lbl_235;
                    }
                    ++l_236;
                }
                return g_108;
            }
            if ((*g_15))
            {
                uint32_t l_243 = 0x48562396L;
                uint32_t l_269[5] = {1UL,1UL,1UL,1UL,1UL};
                const int32_t **l_270 = &l_250;
                int32_t l_286[9][10] = {{0xF3735969L,0xF623B8A3L,0xF3735969L,(-6L),0xF623B8A3L,0L,0L,0xF623B8A3L,(-6L),0xF3735969L},{1L,1L,1L,0xF623B8A3L,0xCCD52C48L,1L,0xCCD52C48L,0xF623B8A3L,1L,1L},{0xCCD52C48L,0L,0xF3735969L,0xCCD52C48L,(-6L),(-6L),0xCCD52C48L,0xF3735969L,0L,0xCCD52C48L},{0xF3735969L,1L,0L,(-6L),1L,(-6L),0L,1L,0xF3735969L,0xF3735969L},{0xCCD52C48L,0xF623B8A3L,1L,1L,1L,1L,0xF623B8A3L,0xCCD52C48L,1L,0xCCD52C48L},{1L,0L,(-6L),1L,(-6L),0L,1L,0xF3735969L,0xF3735969L,1L},{0xF3735969L,0xCCD52C48L,(-6L),(-6L),0xCCD52C48L,0xF3735969L,0L,0xCCD52C48L,0L,0xF3735969L},{0xF623B8A3L,0xCCD52C48L,1L,0xCCD52C48L,0xF623B8A3L,1L,1L,1L,1L,0xF623B8A3L},{0xF623B8A3L,0L,0L,0xF623B8A3L,(-6L),0xF3735969L,0xF623B8A3L,0xF3735969L,(-6L),0xF623B8A3L}};
                int i, j;
lbl_297:
                if ((*g_15))
                {
                    int8_t l_251 = 0x93L;
                    for (l_213 = 10; (l_213 == 25); l_213++)
                    {
                        (*g_15) = (p_38 & (safe_sub_func_uint8_t_u_u(g_21.f2, p_37.f0)));
                        if (g_108)
                            goto lbl_297;
                        l_243 &= l_173;
                    }
                    for (g_108 = (-9); (g_108 >= (-4)); ++g_108)
                    {
                        uint16_t l_258 = 0xABBFL;
                        (*l_126) |= (((safe_sub_func_uint16_t_u_u(((((l_248 != &l_249) < g_50) && l_251) > (safe_rshift_func_int8_t_s_u(((g_137 == g_137) && (safe_rshift_func_uint8_t_u_s(((safe_rshift_func_int16_t_s_u(g_8, p_37.f6)) != (((-2L) <= p_37.f4) | l_243)), 0))), l_258))), l_258)) & (-1L)) != 65528UL);
                        (*l_126) = 0x345E133CL;
                    }
                    if (((0xD6L >= (g_21.f3 < (safe_lshift_func_uint16_t_u_u((l_222[0] != (void*)0), (((safe_mod_func_int16_t_s_s(0xF503L, (safe_sub_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((((safe_rshift_func_int16_t_s_s(l_269[4], g_108)) & ((void*)0 == l_270)) == 9L), 6)), 0x36DBL)))) >= 0x0A9BE4DEL) | 0L))))) > l_251))
                    {
                        return p_38;
                    }
                    else
                    {
                        p_37.f4 = (safe_mod_func_int32_t_s_s(((safe_lshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_s((-1L), 6)), 15)) <= p_37.f1), (*g_15)));
                        l_277++;
                    }
                    l_280 ^= ((*l_270) != (void*)0);
                }
                else
                {
                    int32_t ** const *l_282 = &l_222[0];
                    int32_t ** const **l_281 = &l_282;
                    int32_t l_283 = (-1L);
                    int32_t l_288 = 0x6A1B3597L;
                    int32_t l_290 = 0x7A41384DL;
                    int32_t l_292 = 0x029FDCDEL;
                    int32_t l_293 = 0xFA19F6DDL;
                    (*l_281) = &l_222[0];
                    l_294++;
                }
                return p_37.f6;
            }
            else
            {
                l_298 = (void*)0;
            }
            if (((safe_add_func_int32_t_s_s((safe_sub_func_uint16_t_u_u(0x55E3L, (((void*)0 != &l_291[0][1][5]) < g_21.f1))), (l_304 == &l_135))) && (g_8 || ((~(*g_15)) != 65535UL))))
            {
                int32_t *** const *l_306 = &l_135;
                if (l_130)
                    goto lbl_214;
                (*g_15) ^= (&l_135 == l_306);
                l_126 = &g_55;
            }
            else
            {
                int32_t * const **l_308[6];
                int32_t l_331 = 1L;
                int i;
                for (i = 0; i < 6; i++)
                    l_308[i] = &l_307;
                g_309 = l_307;
                for (g_50 = 2; (g_50 < (-13)); --g_50)
                {
                    int8_t l_314 = 3L;
                    int32_t ****l_324 = &g_137;
                    (**g_309) = (-8L);
                    if (((void*)0 != &l_248))
                    {
                        int32_t **l_329 = &l_126;
                        l_285[0] |= (safe_mul_func_int8_t_s_s(l_314, (safe_sub_func_uint32_t_u_u((255UL > (((((safe_unary_minus_func_uint32_t_u((safe_unary_minus_func_uint32_t_u((~g_108))))) ^ (safe_mul_func_int16_t_s_s(p_37.f6, (0xC83813D3L > (g_50 >= ((safe_lshift_func_int8_t_s_u(((g_21.f3 || (l_324 == l_324)) < g_21.f0), (*l_126))) != (*l_126))))))) || 0x41B9L) ^ g_108) | (-7L))), l_325))));
                        --l_326;
                        if (p_37.f5)
                            break;
                        (*l_329) = (*g_309);
                    }
                    else
                    {
                        l_332--;
                        if ((*g_15))
                            break;
                        (*l_126) = ((4294967295UL > ((((void*)0 == &l_135) > 0UL) == ((g_21.f3 || ((safe_mod_func_uint32_t_u_u((safe_sub_func_int16_t_s_s(p_38, (1L != (p_37.f5 != (safe_add_func_uint32_t_u_u(g_16[2], g_55)))))), 1UL)) != 65526UL)) | 0UL))) | p_37.f3);
                    }
                }
            }
        }
        else
        {
            int32_t **l_341[5] = {&l_126,&l_126,&l_126,&l_126,&l_126};
            int32_t **l_342 = &l_126;
            int i;
            (*l_342) = (*g_309);
            for (p_38 = 1; (p_38 >= 0); p_38 -= 1)
            {
                return p_37.f5;
            }
            for (l_287 = (-21); (l_287 <= 23); l_287 = safe_add_func_int16_t_s_s(l_287, 4))
            {
                int16_t l_345 = (-3L);
                return l_345;
            }
        }
        (**l_307) = (((safe_mul_func_uint16_t_u_u((~p_37.f4), g_21.f3)) ^ ((g_21.f3 & ((safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((**l_307), g_108)), 0)) ^ (**l_307))) == ((safe_add_func_int16_t_s_s((**l_307), (safe_rshift_func_int16_t_s_u(0x1B61L, p_37.f5)))) >= 0x2A0CL))) > g_21.f3);
        (*l_126) = (&g_15 != (*l_135));
        for (g_55 = 0; (g_55 < 2); g_55++)
        {
            uint32_t l_384 = 6UL;
            int32_t l_385 = 0L;
            l_385 |= ((safe_lshift_func_uint16_t_u_s(0x5D40L, (safe_mod_func_uint32_t_u_u((((safe_sub_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u((safe_mod_func_int8_t_s_s((safe_mod_func_int32_t_s_s(((**l_307) | (safe_add_func_uint8_t_u_u((((**g_309) == ((safe_rshift_func_uint16_t_u_s((safe_sub_func_int8_t_s_s((-1L), p_37.f1)), 0)) < (&g_309 == &g_309))) ^ ((0x7777L ^ (((((((safe_lshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_s((&l_307 != &l_136), g_21.f3)), l_383)) || 0x20E41F59L) ^ 0xDBL) & p_37.f3) || 0x1EA96E3CL) && (**l_307)) | 1UL)) || l_384)), 0xDAL))), p_37.f5)), (-2L))), 14)), 4294967292UL)) ^ 0x674DFA43L) < p_37.f1), l_384)))) ^ p_38);
        }
    }
    l_389[3][5]--;
    p_37.f1 |= 0x8D24CAA2L;
    return p_37.f3;
}
static uint32_t func_44(int32_t * p_45, int32_t * p_46, int8_t p_47)
{
    int32_t *l_49 = &g_50;
    (*l_49) &= (*g_15);
    (*l_49) ^= (*p_46);
    return g_16[0];
}
static uint8_t func_58(int32_t p_59, uint16_t p_60, int32_t p_61)
{
    int8_t l_79 = 0x38L;
    int32_t l_81 = (-1L);
    int32_t l_82[6];
    int32_t **l_89 = &g_15;
    int i;
    for (i = 0; i < 6; i++)
        l_82[i] = 0x21BE7324L;
    if ((safe_lshift_func_uint8_t_u_s(l_79, 3)))
    {
        int32_t *l_80[10] = {&g_16[2],&g_16[2],&g_16[2],&g_16[2],&g_16[2],&g_16[2],&g_16[2],&g_16[2],&g_16[2],&g_16[2]};
        uint32_t l_83 = 0x48D72D27L;
        int i;
        --l_83;
        for (l_83 = 14; (l_83 <= 44); l_83 = safe_add_func_int16_t_s_s(l_83, 5))
        {
            int32_t **l_88 = &l_80[5];
            int32_t ***l_90 = (void*)0;
            int32_t ***l_91[8] = {(void*)0,&l_89,(void*)0,(void*)0,&l_89,(void*)0,(void*)0,&l_89};
            int i;
            (*l_88) = &g_16[2];
            l_89 = l_89;
        }
    }
    else
    {
        int32_t *l_106 = &g_50;
        for (p_60 = 0; (p_60 > 15); p_60 = safe_add_func_uint16_t_u_u(p_60, 7))
        {
            int32_t *l_94 = &l_81;
            int32_t *l_105[4];
            uint32_t l_109 = 18446744073709551611UL;
            int i;
            for (i = 0; i < 4; i++)
                l_105[i] = &g_55;
            (*l_89) = l_94;
            g_108 ^= ((g_8 && p_60) >= (safe_add_func_int8_t_s_s((safe_unary_minus_func_uint32_t_u(((safe_lshift_func_uint16_t_u_s((safe_mod_func_int16_t_s_s((safe_sub_func_int16_t_s_s((!(l_105[0] == (*l_89))), ((l_106 == l_105[0]) && ((((((p_60 > (((p_61 <= (!p_59)) <= 0x1EC4L) == 0x44L)) <= g_21.f0) > g_16[1]) && (*l_94)) && 0x4A99L) & (*l_106))))), p_61)), g_50)) ^ g_55))), g_16[2])));
            (*l_89) = l_94;
            (*l_106) &= l_109;
        }
    }
    return p_60;
}
static uint16_t func_70(int32_t * p_71, uint32_t p_72, int32_t * const p_73, struct S1 p_74)
{
    int32_t l_76 = 0xFB93C35EL;
    (*g_15) &= l_76;
    return g_8;
}
int main (void)
{
    int i;
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_8;
    for (i = 0; i < 3; i++)
    {
        csmith_sink_ = g_16[i];
    }
    csmith_sink_ = g_21.f0;
    csmith_sink_ = g_21.f1;
    csmith_sink_ = g_21.f2;
    csmith_sink_ = g_21.f3;
    csmith_sink_ = g_50;
    csmith_sink_ = g_55;
    csmith_sink_ = g_108;
    csmith_sink_ = g_429;
    csmith_sink_ = g_550;
    csmith_sink_ = g_920;
    for (i = 0; i < 1; i++)
    {
        csmith_sink_ = g_1043[i];
    }
    platform_main_end(0,0);
    return 0;
}
