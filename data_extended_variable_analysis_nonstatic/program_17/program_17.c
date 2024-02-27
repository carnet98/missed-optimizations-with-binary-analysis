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
static int16_t g_4 = 5L;
static uint64_t g_8 = 18446744073709551615UL;
static uint32_t g_17 = 2UL;
static int32_t g_19 = 0xBDD7770BL;
static int32_t g_21 = 0xD9BA5F27L;
static int64_t g_29 = 0x268F62C4DF8E3BF1LL;
static int64_t g_74 = 8L;
static uint32_t g_79 = 4294967290UL;
static int16_t g_98 = (-1L);
static int8_t g_101 = (-1L);
static int32_t g_103 = 0x26016E5DL;
static int8_t g_125 = 0xF1L;
static int32_t g_132 = 0xE19C9FCCL;
static int32_t *g_137 = &g_103;
static int64_t *g_153 = &g_74;
static int64_t g_203 = 0x0F2447E691350E28LL;
static int64_t *g_202 = &g_203;
static uint32_t **g_250 = (void*)0;
static uint32_t ***g_249 = &g_250;
static int8_t g_274 = 0L;
static uint64_t ***g_314 = (void*)0;
static int32_t g_318 = 0x63D6F255L;
static int8_t g_328 = (-1L);
static uint32_t g_380 = 0x1531C667L;
static uint8_t g_415 = 246UL;
static uint8_t *g_414 = &g_415;
static uint64_t g_426 = 0xF9D7EAA5562F0F95LL;
static uint16_t g_430 = 9UL;
static const uint8_t g_449 = 250UL;
static const int32_t *g_485 = &g_132;
static uint16_t g_508 = 1UL;
static int32_t g_516 = (-1L);
static uint64_t ****g_525 = &g_314;
static uint32_t g_570 = 4294967295UL;
static uint32_t g_594 = 0x41F22137L;
static uint8_t g_682 = 1UL;
static int64_t * const *g_689 = &g_153;
static int64_t * const **g_688 = &g_689;
static uint8_t g_809 = 1UL;
static int64_t *g_812 = (void*)0;
static int64_t g_822 = 0x8CE44BD025288064LL;
static int32_t *g_824 = &g_318;
static int32_t **g_823 = &g_824;
static int32_t g_885 = (-1L);
static int16_t g_949 = 0xD6DFL;
static uint8_t g_971 = 0x70L;
static int16_t func_1(void);
static int16_t func_2(int64_t p_3);
static int32_t * func_22(int32_t * p_23, int64_t p_24, uint8_t p_25, uint32_t p_26, const int32_t p_27);
static int32_t func_35(const int64_t * p_36, int64_t * p_37, uint16_t p_38);
static int64_t * func_39(int32_t p_40, int8_t p_41, int64_t p_42, uint32_t * p_43, uint32_t p_44);
static int32_t * func_49(const uint8_t p_50, uint32_t p_51);
static int8_t func_57(const int8_t p_58);
static int8_t func_59(int16_t p_60, int32_t * p_61, int8_t p_62, uint32_t * p_63);
static uint32_t * func_65(uint32_t p_66, int64_t p_67, int64_t * p_68);
static uint32_t func_69(uint16_t p_70, int64_t * p_71, const uint64_t p_72);
static int16_t func_1(void)
{
    uint16_t l_6 = 0x7222L;
    int32_t l_7 = (-9L);
    uint32_t *l_15 = (void*)0;
    uint32_t *l_16 = &g_17;
    int32_t *l_18 = &g_19;
    int32_t *l_20 = &g_21;
    int64_t *l_28 = &g_29;
    int32_t *l_47 = &g_21;
    int8_t l_813 = (-8L);
    uint64_t l_876 = 1UL;
    int32_t **l_976 = &l_18;
    (*l_20) = ((func_2(g_4) <= l_6) > ((*l_18) = (g_4 & (g_4 != (g_4 | ((l_6 & (--g_8)) && ((*l_16) = ((((safe_div_func_uint8_t_u_u((safe_add_func_int16_t_s_s(0x9934L, 0L)), 0x66L)) | 4294967295UL) , g_4) | g_8))))))));
    (*l_976) = func_22(&g_21, ((*l_28) = (*l_20)), (safe_mod_func_uint64_t_u_u(((safe_unary_minus_func_uint8_t_u((((*l_18) <= (*l_20)) == (safe_rshift_func_int16_t_s_s(g_19, 2))))) <= (func_2((func_35(func_39((safe_rshift_func_int8_t_s_s((l_20 != l_47), 5)), (safe_unary_minus_func_uint8_t_u(((g_17 < (*l_18)) || 0x1771B705L))), (*l_47), l_18, g_17), g_812, l_813) , (*l_20))) != (*l_47))), (*l_20))), l_876, g_21);
    return g_101;
}
static int16_t func_2(int64_t p_3)
{
    uint8_t l_5 = 9UL;
    return l_5;
}
static int32_t * func_22(int32_t * p_23, int64_t p_24, uint8_t p_25, uint32_t p_26, const int32_t p_27)
{
    int32_t l_881 = (-5L);
    int32_t l_882 = 0L;
    int8_t *l_888 = &g_125;
    int32_t l_889 = (-6L);
    int32_t *l_890 = (void*)0;
    int32_t *l_891 = &g_19;
    int32_t *l_892 = &g_103;
    int32_t *l_893 = &g_19;
    int32_t *l_894 = &g_21;
    int32_t *l_895 = &l_889;
    int32_t *l_896 = (void*)0;
    int32_t *l_897 = (void*)0;
    int32_t *l_898 = &l_889;
    int32_t *l_899 = &l_889;
    int32_t *l_900 = &g_21;
    int32_t *l_901 = (void*)0;
    int32_t *l_902 = &g_19;
    int32_t *l_903 = &g_132;
    int32_t *l_904 = &l_889;
    int32_t *l_905 = &g_103;
    int32_t *l_906 = &g_103;
    int32_t *l_907 = (void*)0;
    int32_t *l_908 = &g_103;
    int32_t *l_909 = &g_103;
    int32_t *l_910 = &g_19;
    int32_t *l_911 = &g_103;
    int32_t *l_912 = (void*)0;
    int32_t l_913 = 0x2C990645L;
    int32_t *l_914 = &g_103;
    int32_t l_915 = 3L;
    int32_t *l_916 = &g_103;
    int32_t *l_917 = (void*)0;
    int32_t *l_918 = &g_132;
    int32_t *l_919 = &g_19;
    int32_t l_920 = 0x57EACDEBL;
    int32_t *l_921 = &l_913;
    int32_t *l_922 = &l_913;
    int32_t *l_923 = &l_913;
    int32_t l_924 = 0x5D62980BL;
    int32_t l_925 = 0xDE0247B0L;
    int32_t *l_926 = &l_924;
    int32_t *l_927 = &l_925;
    int32_t *l_928 = &l_920;
    int32_t *l_929 = &l_920;
    int32_t *l_930 = &g_21;
    int32_t *l_931 = &l_924;
    int32_t l_932 = 0L;
    int32_t *l_933 = (void*)0;
    int32_t *l_934 = &g_132;
    int32_t *l_935 = &l_932;
    int32_t *l_936 = (void*)0;
    int32_t *l_937 = &g_21;
    int32_t *l_938 = (void*)0;
    int32_t *l_939 = &l_913;
    int32_t *l_940 = &g_21;
    int32_t *l_941 = &g_19;
    int32_t *l_942 = &l_889;
    int32_t *l_943 = (void*)0;
    int32_t *l_944 = (void*)0;
    int32_t l_945 = 2L;
    int32_t *l_946 = &g_21;
    int32_t *l_947 = &l_932;
    int32_t l_948 = 0x1DA6DF85L;
    int32_t *l_950 = &l_915;
    int32_t *l_951 = &l_945;
    int32_t *l_952 = &l_945;
    int32_t *l_953 = &l_915;
    int32_t *l_954 = &g_103;
    int32_t *l_955 = &g_132;
    int32_t *l_956 = (void*)0;
    int32_t *l_957 = &l_925;
    int32_t *l_958 = (void*)0;
    int32_t *l_959 = &l_913;
    int32_t *l_960 = (void*)0;
    int32_t *l_961 = (void*)0;
    int32_t *l_962 = &g_19;
    int32_t *l_963 = &l_948;
    int32_t *l_964 = &g_21;
    int32_t *l_965 = &l_915;
    int32_t *l_966 = &g_132;
    int32_t *l_967 = &l_925;
    int32_t l_968 = 0xC976DBF2L;
    int32_t *l_969 = &l_915;
    int32_t *l_970 = (void*)0;
    (*p_23) ^= (((7UL == (safe_sub_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s(l_881, 11)), (l_882 , ((safe_div_func_int64_t_s_s(((g_885 > (*g_414)) ^ (((g_19 , (safe_add_func_uint32_t_u_u(((l_881 , l_888) == (void*)0), 4UL))) & g_516) ^ l_881)), l_881)) && (*g_414)))))) > 0xE709L) == g_415);
    ++g_971;
    for (l_889 = 0; (l_889 <= 20); l_889 = safe_add_func_uint16_t_u_u(l_889, 1))
    {
        return &g_19;
    }
    return &g_21;
}
static int32_t func_35(const int64_t * p_36, int64_t * p_37, uint16_t p_38)
{
    int32_t l_816 = 0xB55C7C47L;
    int64_t *l_821 = &g_822;
    int16_t l_829 = 0xA7F6L;
    int32_t l_830 = 1L;
    int32_t l_831 = (-1L);
    int32_t **l_832 = &g_137;
    int32_t *l_834 = &g_132;
    int32_t **l_833 = &l_834;
    int32_t *l_835 = &l_830;
    int32_t *l_836 = &g_132;
    int32_t *l_837 = &l_830;
    int32_t *l_838 = &l_830;
    int32_t *l_839 = &l_831;
    int32_t *l_840 = &l_816;
    int32_t *l_841 = (void*)0;
    int32_t *l_842 = &g_103;
    int32_t *l_843 = &g_103;
    int32_t *l_844 = &l_830;
    int32_t *l_845 = (void*)0;
    int32_t *l_846 = &l_830;
    int32_t *l_847 = &l_830;
    int32_t *l_848 = &l_816;
    int32_t *l_849 = &l_830;
    int32_t *l_850 = &l_831;
    int32_t *l_851 = &l_830;
    int32_t *l_852 = &g_103;
    int32_t *l_853 = &g_103;
    int32_t *l_854 = &g_132;
    int32_t *l_855 = &l_830;
    int32_t *l_856 = &l_830;
    uint32_t l_857 = 8UL;
    uint64_t l_874 = 0x1105FF6A7CA8EC19LL;
    int32_t l_875 = 7L;
    (*l_833) = ((*l_832) = ((p_38 = ((safe_div_func_uint32_t_u_u(l_816, (l_831 = (safe_add_func_uint8_t_u_u(((safe_sub_func_uint64_t_u_u((1UL > (-2L)), l_816)) && ((*l_821) ^= (*p_36))), (((((g_823 != &g_824) != (*g_485)) & (l_830 = (safe_mod_func_int64_t_s_s((l_829 &= ((safe_sub_func_uint64_t_u_u((((g_426 ^ p_38) , p_38) >= l_816), (*g_202))) > l_816)), 0xCCB7F4E04A87671ALL)))) < 2L) | 0xC0L)))))) ^ 1UL)) , &g_103));
    ++l_857;
    (*l_840) = 0x62341F96L;
    l_875 &= (safe_sub_func_uint8_t_u_u((((!(((*l_848) = 1L) < (*g_137))) && (safe_div_func_int8_t_s_s(((((safe_rshift_func_uint16_t_u_s(1UL, (((safe_rshift_func_int8_t_s_u(((g_274 || (safe_unary_minus_func_int8_t_s((p_38 == ((**l_833) && (&l_832 != (void*)0)))))) , (safe_lshift_func_uint16_t_u_s(((*p_36) ^ (**l_833)), 1))), p_38)) && p_38) ^ g_809))) , 0x5771CC63L) || (-1L)) != (*l_847)), (*g_414)))) > l_874), 0UL));
    return p_38;
}
static int64_t * func_39(int32_t p_40, int8_t p_41, int64_t p_42, uint32_t * p_43, uint32_t p_44)
{
    int32_t *l_52 = (void*)0;
    int32_t l_64 = 0xF576105FL;
    int64_t *l_73 = &g_74;
    int32_t l_75 = (-1L);
    uint16_t l_104 = 65535UL;
    uint32_t *l_691 = (void*)0;
    int32_t **l_699 = (void*)0;
    int32_t **l_700 = (void*)0;
    int32_t **l_701 = (void*)0;
    int32_t **l_702 = &g_137;
    int32_t **l_703 = &l_52;
    int8_t *l_708 = &g_274;
    uint32_t *l_711 = &g_17;
    uint32_t * const *l_718 = &l_711;
    uint32_t * const **l_717 = &l_718;
    uint32_t * const ***l_716 = &l_717;
    int32_t ***l_723 = &l_699;
    int32_t l_724 = 0x376B98D4L;
    int64_t **l_733 = &g_202;
    int64_t ***l_732 = &l_733;
    int64_t ****l_731 = &l_732;
    uint16_t *l_734 = &g_430;
    int32_t *l_735 = &g_132;
    int32_t *l_736 = &l_75;
    int32_t *l_737 = &l_75;
    int32_t *l_738 = &l_75;
    int32_t *l_739 = &g_103;
    int32_t *l_740 = &l_64;
    int32_t *l_741 = &g_132;
    int32_t *l_742 = &g_132;
    int32_t *l_743 = &g_103;
    int32_t *l_744 = &l_75;
    int32_t *l_745 = &l_75;
    int32_t *l_746 = &l_64;
    int32_t *l_747 = &g_103;
    int32_t *l_748 = &l_75;
    int32_t *l_749 = &l_64;
    int32_t *l_750 = &g_132;
    int32_t *l_751 = &g_132;
    int32_t *l_752 = &g_103;
    int32_t *l_753 = &g_132;
    int32_t *l_754 = &l_75;
    int32_t *l_755 = &g_103;
    int32_t *l_756 = (void*)0;
    int32_t *l_757 = &l_64;
    int32_t *l_758 = &l_64;
    int32_t *l_759 = &g_103;
    int32_t *l_760 = &l_64;
    int32_t *l_761 = (void*)0;
    int32_t *l_762 = &l_75;
    int32_t *l_763 = (void*)0;
    int32_t *l_764 = (void*)0;
    int32_t *l_765 = &l_75;
    int32_t *l_766 = &g_103;
    int32_t *l_767 = (void*)0;
    int32_t *l_768 = (void*)0;
    int32_t *l_769 = &g_132;
    int32_t *l_770 = &g_132;
    int32_t *l_771 = &l_64;
    int32_t *l_772 = &g_132;
    int32_t *l_773 = &l_64;
    int32_t *l_774 = &g_132;
    int32_t *l_775 = &g_132;
    int32_t *l_776 = &g_103;
    int32_t *l_777 = &g_132;
    int32_t *l_778 = &g_132;
    int32_t l_779 = (-4L);
    int32_t *l_780 = &l_75;
    int32_t *l_781 = &l_75;
    int32_t *l_782 = &l_75;
    int32_t *l_783 = &l_779;
    int32_t l_784 = 0L;
    int32_t *l_785 = &l_784;
    int32_t *l_786 = &l_64;
    int32_t *l_787 = &l_64;
    int32_t *l_788 = &l_64;
    int32_t *l_789 = (void*)0;
    int32_t *l_790 = &l_75;
    int32_t *l_791 = &l_784;
    int32_t *l_792 = &l_784;
    int32_t *l_793 = &g_103;
    int32_t *l_794 = &l_784;
    int32_t *l_795 = &l_779;
    int32_t *l_796 = &l_75;
    int32_t *l_797 = &g_103;
    int32_t *l_798 = &g_103;
    int32_t *l_799 = (void*)0;
    int32_t *l_800 = &l_64;
    int32_t *l_801 = &l_64;
    int32_t *l_802 = &l_779;
    int32_t *l_803 = &l_75;
    int32_t *l_804 = &l_784;
    int32_t l_805 = 0L;
    int32_t *l_806 = (void*)0;
    int32_t *l_807 = &l_779;
    int32_t *l_808 = &g_103;
    (*l_703) = ((*l_702) = func_49((&g_19 != (l_52 = (void*)0)), (p_40 <= (((safe_rshift_func_int8_t_s_u((safe_add_func_uint64_t_u_u((func_57(func_59(g_19, &g_19, l_64, func_65(func_69(g_17, l_73, (l_75 = ((((l_64 & 0x05L) || (-6L)) & 0x6EC3L) ^ g_19))), l_104, &g_74))) | 0xFEL), p_41)), 1)) , (void*)0) != l_691))));
    (*l_703) = (((p_44 ^ (g_98 = ((safe_unary_minus_func_int32_t_s(((+((*l_52) = ((safe_rshift_func_uint16_t_u_s((l_708 != &g_328), ((((safe_lshift_func_int16_t_s_s((((((**l_703) , ((-9L) & ((*l_711)++))) | (safe_add_func_int64_t_s_s((l_716 != &l_717), ((safe_div_func_int16_t_s_s(p_42, ((safe_rshift_func_uint16_t_u_s((((l_723 == &l_702) & p_41) && (*g_414)), p_41)) & g_380))) , p_44)))) < g_508) != 4UL), 5)) > p_40) & 0x9FEDD1D0L) >= p_41))) , 0L))) , p_41))) , (*l_52)))) <= l_724) , p_43);
    (**l_702) = ((safe_rshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(0x81EFL, ((*l_734) = ((safe_add_func_uint64_t_u_u(((((void*)0 != (*g_689)) < g_21) && 0xC661F5DAL), ((l_731 != (void*)0) || (((void*)0 == l_708) | (*l_52))))) , (*l_52))))), p_41)) ^ p_41);
    g_809++;
    return (***l_731);
}
static int32_t * func_49(const uint8_t p_50, uint32_t p_51)
{
    const uint32_t ***l_694 = (void*)0;
    const uint32_t ****l_695 = &l_694;
    int8_t *l_696 = &g_274;
    int32_t *l_698 = &g_103;
    (*l_698) = (safe_lshift_func_int8_t_s_s((((*l_695) = l_694) == &g_250), (((*l_696) = g_19) >= (!0x2CB2F88E1740D2DALL))));
    (*l_698) = 0x685F7F2BL;
    return &g_132;
}
static int8_t func_57(const int8_t p_58)
{
    uint8_t l_173 = 0x2DL;
    int32_t *l_174 = &g_132;
    uint32_t **l_188 = (void*)0;
    uint32_t ***l_187 = &l_188;
    int8_t *l_190 = (void*)0;
    int32_t *l_221 = &g_19;
    uint32_t ***l_251 = &g_250;
    uint64_t *l_270 = &g_8;
    uint64_t **l_269 = &l_270;
    int64_t l_279 = 0xE550A762820C098CLL;
    int32_t l_297 = 0x37E1BAF4L;
    int32_t *l_298 = &g_132;
    int32_t l_357 = 0xAB0926F4L;
    int8_t l_422 = 0x19L;
    int32_t **l_531 = &l_221;
    const int32_t l_601 = 0x857CB03BL;
    uint32_t l_604 = 0xD29F545CL;
    uint8_t l_645 = 0x71L;
    int32_t *l_687 = &g_516;
    int32_t **l_686 = &l_687;
    if (((*l_174) = l_173))
    {
        int32_t l_176 = (-7L);
        int32_t l_222 = 0xD5444549L;
        int64_t l_238 = 1L;
        int32_t l_262 = 1L;
        int32_t **l_268 = &g_137;
        if ((&g_74 != (void*)0))
        {
            uint32_t l_182 = 0UL;
            int32_t l_189 = 0xD022AC7DL;
            int8_t l_191 = 0x1BL;
            int32_t **l_237 = &g_137;
            uint32_t ****l_248 = &l_187;
            int8_t *l_255 = &g_101;
            uint8_t *l_263 = &l_173;
            uint64_t *l_264 = &g_8;
            int32_t *l_265 = &g_103;
            (*l_174) = ((((!(g_79 &= ((6L == (*g_137)) | (((l_176 , p_58) & (((safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s((+(*g_137)), (((((l_182 | ((safe_lshift_func_int8_t_s_s(((g_132 & l_182) && (((safe_add_func_int64_t_s_s((((void*)0 == l_187) , (*g_153)), 0x62BF17702E8EBDD0LL)) & 1UL) , l_189)), 1)) ^ 65532UL)) && (*g_153)) < (-6L)) , l_190) != &p_58))), 4)) ^ (*l_174)) || l_191)) | (-5L))))) || g_19) == (*l_174)) || p_58);
            if (((*l_174) = (*l_174)))
            {
                uint64_t l_215 = 0xE0EBF16E3D7E29C1LL;
                int32_t **l_220 = &l_174;
                for (g_125 = 0; (g_125 < 23); g_125 = safe_add_func_uint32_t_u_u(g_125, 5))
                {
                    uint32_t * const l_196 = (void*)0;
                    int64_t **l_200 = &g_153;
                    int64_t **l_201 = (void*)0;
                    int32_t l_207 = 0xE74D0DCDL;
                    uint32_t ****l_208 = &l_187;
                    uint32_t ***l_210 = &l_188;
                    uint32_t ****l_209 = &l_210;
                    int32_t *l_211 = &g_132;
                    int32_t *l_212 = &l_207;
                    int32_t *l_213 = &l_207;
                    int32_t *l_214 = &g_132;
                    (*l_209) = ((*l_208) = (((((safe_add_func_uint64_t_u_u(g_74, (l_196 == (void*)0))) && ((&g_98 != &g_4) ^ 0L)) ^ (safe_unary_minus_func_uint64_t_u((safe_rshift_func_int8_t_s_u(((((*l_200) = (void*)0) == (g_202 = &g_74)) && (safe_mod_func_int64_t_s_s((~p_58), l_207))), 7))))) && l_191) , &l_188));
                    --l_215;
                }
                g_103 |= (g_21 ^ (safe_lshift_func_int8_t_s_s(p_58, ((((*l_220) = &l_189) != l_221) < (l_222 &= l_176)))));
            }
            else
            {
                const int64_t l_232 = 0xB7AFBAD67FFFD43ELL;
                int32_t *l_241 = &l_189;
                int32_t **l_242 = (void*)0;
                int32_t **l_243 = &l_241;
                if (((safe_add_func_int8_t_s_s((-4L), ((safe_sub_func_int8_t_s_s(1L, (((safe_sub_func_int8_t_s_s(g_8, (l_222 , (((+((safe_rshift_func_int16_t_s_s(((p_58 == (253UL && ((g_203 & l_232) >= (g_125 && l_222)))) ^ l_182), 3)) || (-7L))) , 0UL) >= p_58)))) != l_176) & 65530UL))) & 4294967295UL))) , (-1L)))
                {
                    (*l_174) = (~g_4);
                }
                else
                {
                    uint8_t l_236 = 0x18L;
                    int16_t *l_239 = (void*)0;
                    int16_t *l_240 = &g_4;
                    l_189 = (safe_add_func_int16_t_s_s(((((*l_240) = (g_17 , (p_58 >= (l_236 && ((((p_58 , &g_137) == (l_237 = &g_137)) & (l_238 == l_236)) , ((**l_237) > l_236)))))) & l_238) >= 4294967292UL), g_17));
                    (*l_174) &= (*g_137);
                    g_132 |= p_58;
                }
                (*l_243) = (g_137 = l_241);
            }
            (*l_265) |= (2L >= ((*l_174) = (safe_mod_func_int8_t_s_s((safe_mod_func_uint8_t_u_u((((*l_248) = &l_188) == (l_251 = g_249)), ((((((+(((*l_264) &= (((*l_255) ^= (safe_div_func_int32_t_s_s(1L, (l_222 = 0x537B0903L)))) <= ((*l_263) = (((0x46E93449L <= (l_262 = (safe_lshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((((safe_sub_func_int8_t_s_s(3L, ((void*)0 != &l_191))) > g_19) & 1L), g_203)), 15)))) ^ 7UL) >= p_58)))) >= 18446744073709551615UL)) >= 18446744073709551615UL) > (-1L)) & 0xB260L) & l_238) ^ 1UL))), l_238))));
        }
        else
        {
            int32_t **l_266 = &l_221;
            (*l_266) = l_174;
            (**l_266) = (+1L);
            (*l_266) = &g_19;
        }
        (*l_268) = &g_19;
    }
    else
    {
        uint64_t ***l_271 = &l_269;
        int8_t *l_272 = &g_101;
        int8_t *l_273 = &g_274;
        int32_t l_280 = 0xEA53087AL;
        (*l_174) &= (*g_137);
        (*l_271) = l_269;
        (*l_174) ^= ((((*l_273) &= ((*l_272) = g_125)) < (safe_sub_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u((l_279 & (l_280 ^= 0x3EL)), 7)), (0x36L <= 0xE7L)))) >= (*g_153));
        for (g_132 = 0; (g_132 <= (-9)); g_132 = safe_sub_func_int8_t_s_s(g_132, 1))
        {
            int32_t **l_283 = &g_137;
            uint32_t *l_284 = &g_79;
            (*l_283) = &g_103;
            (**l_283) = ((void*)0 == l_284);
        }
    }
    (*l_298) ^= (~((((*l_221) , (safe_unary_minus_func_uint8_t_u(((safe_sub_func_int64_t_s_s(((((((((void*)0 == &g_74) && 0x63CD058DL) | (safe_rshift_func_uint8_t_u_u(0UL, (p_58 < (safe_add_func_int64_t_s_s(((*g_202) = (safe_mod_func_uint16_t_u_u(1UL, (safe_sub_func_int32_t_s_s((l_297 |= p_58), (*l_221)))))), p_58)))))) , p_58) , p_58) ^ (*g_137)) & 0xDBL), g_274)) | 0x37L)))) || (*l_221)) || 1L));
    if (p_58)
    {
        uint32_t l_308 = 0UL;
        uint64_t ****l_313 = (void*)0;
        int32_t *l_317 = &g_318;
        l_174 = func_65(((0x8FA55F2295907062LL || (safe_sub_func_uint8_t_u_u((((((*g_202) |= ((((**l_269) &= (safe_div_func_int64_t_s_s((safe_sub_func_uint64_t_u_u((~(safe_rshift_func_uint8_t_u_s((((*l_251) != (l_308 , (*g_249))) , (safe_add_func_uint32_t_u_u(((g_103 != ((safe_rshift_func_uint16_t_u_u(((g_314 = &l_269) == &l_269), ((((*l_317) = (p_58 > (((safe_sub_func_uint64_t_u_u(18446744073709551607UL, 0x9609D19F9CDA19F3LL)) , (void*)0) != (void*)0))) , g_103) < g_4))) <= p_58)) , p_58), 0UL))), 1))), (*l_221))), g_132))) ^ p_58) < p_58)) && p_58) >= 7UL) <= l_308), 247UL))) , (*l_298)), p_58, &l_279);
    }
    else
    {
        int32_t l_319 = (-8L);
        int32_t *l_320 = &g_103;
        int32_t *l_321 = &l_297;
        int32_t *l_322 = &g_132;
        int32_t *l_323 = &g_103;
        int32_t *l_324 = &g_132;
        int32_t *l_325 = &g_132;
        int32_t *l_326 = &g_103;
        int32_t *l_327 = &g_103;
        int32_t *l_329 = &g_132;
        int32_t *l_330 = &g_132;
        int32_t *l_331 = &g_103;
        int32_t *l_332 = &l_297;
        int32_t l_333 = 0L;
        int32_t *l_334 = &l_333;
        int32_t *l_335 = (void*)0;
        int32_t *l_336 = &l_297;
        int32_t *l_337 = &g_103;
        int32_t l_338 = (-9L);
        int32_t *l_339 = &g_103;
        int32_t *l_340 = &g_132;
        int32_t *l_341 = (void*)0;
        int32_t *l_342 = (void*)0;
        int32_t *l_343 = &g_132;
        int32_t *l_344 = &l_297;
        int32_t *l_345 = &l_333;
        int32_t *l_346 = &g_132;
        int32_t *l_347 = &l_333;
        int32_t *l_348 = &g_103;
        int32_t *l_349 = &l_297;
        int32_t *l_350 = &g_103;
        int32_t *l_351 = &l_338;
        int32_t *l_352 = &l_338;
        int32_t *l_353 = &g_103;
        int32_t *l_354 = &l_297;
        int32_t *l_355 = &l_333;
        int32_t l_356 = 0xCABFC40FL;
        int32_t *l_358 = &l_338;
        int32_t *l_359 = &l_356;
        int32_t *l_360 = (void*)0;
        int32_t *l_361 = &l_338;
        int32_t l_362 = 0x562396B6L;
        int32_t *l_363 = &l_297;
        int32_t *l_364 = &l_362;
        int32_t *l_365 = (void*)0;
        int32_t *l_366 = &l_333;
        int32_t *l_367 = &l_333;
        int32_t *l_368 = &g_132;
        int32_t *l_369 = (void*)0;
        int32_t *l_370 = (void*)0;
        int32_t *l_371 = &l_297;
        int32_t *l_372 = &l_333;
        int32_t *l_373 = (void*)0;
        int32_t l_374 = 0x9F3894ABL;
        int32_t *l_375 = (void*)0;
        int16_t l_376 = 0x38C1L;
        int32_t *l_377 = &l_362;
        int32_t *l_378 = &l_374;
        int32_t *l_379 = &g_132;
        const uint8_t *l_448 = &g_449;
        uint64_t *l_507 = &g_8;
        uint64_t ****l_524 = (void*)0;
        uint16_t *l_532 = &g_430;
        int8_t l_591 = 2L;
        int64_t *l_624 = &l_279;
        int64_t l_647 = 0x0406FBD9CE2155AALL;
        g_380--;
        for (g_74 = 0; (g_74 < (-10)); g_74 = safe_sub_func_int64_t_s_s(g_74, 9))
        {
            int8_t l_399 = (-1L);
            int32_t *l_431 = &g_318;
            int8_t l_436 = 8L;
            uint64_t ****l_523 = &g_314;
            uint64_t l_533 = 1UL;
            int32_t l_534 = 0xB4C910CAL;
            int16_t *l_535 = &l_376;
            uint64_t * const *l_603 = (void*)0;
            int32_t **l_619 = &g_137;
            int64_t l_621 = 0x81E7EB0D783281D4LL;
            int64_t ***l_650 = (void*)0;
            int64_t ****l_649 = &l_650;
            int64_t *****l_648 = &l_649;
            int32_t l_668 = 1L;
            int32_t l_670 = 0xB50C5A40L;
            int32_t l_676 = 0L;
            for (l_333 = 0; (l_333 <= 4); ++l_333)
            {
                int32_t l_392 = 0xF8A4C053L;
                int32_t l_425 = 0x643068DEL;
                uint16_t *l_429 = &g_430;
                int32_t **l_432 = (void*)0;
                int32_t **l_433 = &l_431;
                int32_t l_443 = 0x5EE9B9BCL;
                int16_t *l_450 = &l_376;
                int16_t *l_451 = (void*)0;
                int16_t *l_452 = &g_4;
                uint32_t l_459 = 4294967288UL;
                int32_t l_482 = 0L;
                int16_t l_509 = 9L;
                for (g_328 = 0; (g_328 != 12); g_328 = safe_add_func_int64_t_s_s(g_328, 6))
                {
                    uint8_t *l_391 = (void*)0;
                    int16_t *l_400 = (void*)0;
                    int16_t *l_401 = &g_4;
                    int8_t *l_404 = &g_274;
                    int32_t l_412 = 0xC21EBF77L;
                    int32_t **l_413 = &l_344;
                    (*l_368) = ((l_392 &= (*l_329)) || (safe_rshift_func_int16_t_s_s((!0x5E133C69A03E5472LL), 9)));
                }
                l_425 = (g_414 == ((safe_sub_func_uint16_t_u_u(0xB4E3L, ((l_392 <= (((*l_298) = (safe_add_func_uint16_t_u_u(l_422, g_21))) || 0L)) | (safe_sub_func_uint16_t_u_u(((*l_429) |= (--g_426)), g_328))))) , &l_173));
                (*l_378) |= ((((*l_433) = l_431) == &g_318) , ((*g_414) > ((((*g_137) , (((*l_452) = ((*l_450) = ((safe_add_func_int8_t_s_s(((*l_379) = (l_436 , l_436)), ((((((safe_rshift_func_int16_t_s_u(g_4, 13)) , (safe_lshift_func_int16_t_s_u(((l_443 |= p_58) >= ((safe_rshift_func_uint8_t_u_s(((safe_add_func_uint16_t_u_u(((((l_448 = (void*)0) == &g_449) & 0x9F4AA1E9C32DDD9FLL) & 65535UL), g_17)) >= p_58), p_58)) , 1UL)), l_392))) , 0L) < 0x2B6AL) , 18446744073709551607UL) > 0L))) , g_19))) ^ g_449)) < p_58) , g_415)));
                if (((*l_364) ^= ((*l_350) = ((*l_298) = (((((&l_422 == ((g_132 || (safe_rshift_func_uint8_t_u_u(((((*l_298) && (((*l_450) ^= p_58) >= (((safe_lshift_func_int8_t_s_u((l_392 ^ l_459), 3)) == ((**l_269) = (((((((p_58 == ((((*g_202) && ((*l_363) = (safe_div_func_int32_t_s_s((*l_298), 0x83B725F0L)))) != g_328) & 0x448FBCCCL)) == 3L) < 0x47C4E963L) , 0L) == 0x2021EEE7737C8A46LL) , l_431) != l_431))) <= 1UL))) >= 0xC7L) != g_274), (*l_298)))) , &p_58)) || 0L) , l_399) < (-5L)) && (*l_221))))))
                {
                    uint16_t l_464 = 0x261AL;
                    const int32_t *l_483 = &g_21;
                    const int32_t **l_484 = (void*)0;
                    const int32_t **l_502 = (void*)0;
                    const int32_t *l_504 = (void*)0;
                    const int32_t **l_503 = &l_504;
                    g_485 = ((safe_add_func_int32_t_s_s(l_464, ((((safe_rshift_func_uint16_t_u_s((((safe_unary_minus_func_uint64_t_u(((safe_add_func_uint8_t_u_u((((p_58 , p_58) == (safe_rshift_func_int16_t_s_u(p_58, (safe_add_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((safe_div_func_int16_t_s_s(((safe_add_func_uint16_t_u_u(((*g_137) | ((&g_318 != ((*l_433) = &g_318)) , ((0xC1196AC0404CD1A3LL <= (((((safe_add_func_int16_t_s_s((g_103 , g_98), 3L)) & (*g_414)) <= (*g_137)) , l_464) >= (*g_137))) , p_58))), p_58)) >= 0x780F7B21165C56F8LL), p_58)), 4)), p_58))))) || 0xA4L), 0UL)) != p_58))) ^ (*l_346)) , l_482), 6)) , p_58) != p_58) != g_4))) , l_483);
                    g_485 = &g_21;
                    (*l_361) |= (((((*g_137) == ((safe_lshift_func_int16_t_s_s((((*l_270) &= (safe_div_func_int64_t_s_s((safe_sub_func_int8_t_s_s((((safe_rshift_func_uint8_t_u_u((+((*l_429)++)), 5)) == (safe_div_func_int64_t_s_s((*g_202), 9L))) < (safe_sub_func_int16_t_s_s(((*g_485) , 0x7F08L), (safe_unary_minus_func_uint8_t_u((&g_318 == ((*l_503) = l_431))))))), (((safe_add_func_uint16_t_u_u((((void*)0 == l_507) > p_58), p_58)) || g_508) ^ 0x35C911F6L))), 0xA1957178973CE836LL))) && p_58), 13)) , (*l_221))) , 0x2B50L) == p_58) >= l_509);
                    return (*l_221);
                }
                else
                {
                    int8_t *l_517 = &l_436;
                    int32_t l_519 = (-1L);
                    if (p_58)
                        break;
                    for (l_279 = 0; (l_279 <= 12); ++l_279)
                    {
                        (*l_359) = (*g_137);
                        if (l_509)
                            continue;
                        return l_399;
                    }
                    if (p_58)
                        continue;
                    (*l_349) = ((safe_lshift_func_uint16_t_u_s(l_399, (g_98 = ((safe_mod_func_int16_t_s_s(((*l_452) = (18446744073709551615UL == ((**l_269) = (((l_509 & ((((*l_517) = g_516) && l_509) , ((!p_58) || 0xB3L))) || l_519) == g_380)))), 1L)) <= g_274)))) & 3UL);
                }
            }
            if (((safe_unary_minus_func_int64_t_s((safe_mod_func_int16_t_s_s(((*l_535) = ((l_523 != (g_525 = l_524)) < (safe_unary_minus_func_uint16_t_u((((*l_332) = 0x38648295L) == (l_534 &= ((safe_mod_func_int16_t_s_s((l_436 >= (safe_sub_func_int8_t_s_s(((g_516 , &l_221) == (l_531 = &g_137)), ((void*)0 != l_532)))), l_436)) <= l_533))))))), (-2L))))) == g_328))
            {
                uint32_t l_541 = 0UL;
                for (l_422 = 0; (l_422 <= 13); ++l_422)
                {
                    for (l_534 = 11; (l_534 >= (-25)); l_534 = safe_sub_func_int32_t_s_s(l_534, 5))
                    {
                        int32_t **l_540 = &l_359;
                        (*l_540) = ((*l_531) = &g_21);
                        g_137 = ((*l_540) = &l_356);
                    }
                }
                l_541++;
            }
            else
            {
                int32_t l_563 = 0x48041978L;
                int32_t l_593 = 1L;
                uint64_t * const *l_602 = &l_270;
                const int64_t ***l_612 = (void*)0;
                const int64_t ****l_611 = &l_612;
                const int64_t *****l_610 = &l_611;
                int32_t ***l_620 = &l_619;
                int64_t **l_625 = &g_153;
                int32_t **l_626 = &l_431;
                int16_t l_646 = (-1L);
                int32_t l_680 = 0xBE83BFA7L;
                if ((*g_485))
                {
                    for (g_430 = (-27); (g_430 < 54); g_430++)
                    {
                        (*l_531) = &g_103;
                        (*l_368) ^= (*g_137);
                    }
                }
                else
                {
                    uint32_t l_566 = 0x1FFAFB93L;
                    const uint64_t *l_586 = &l_533;
                    const uint64_t **l_585 = &l_586;
                    const uint64_t ***l_584 = &l_585;
                    uint64_t * const *l_589 = &l_507;
                    uint64_t * const **l_588 = &l_589;
                    if (p_58)
                    {
                        (*l_531) = &g_103;
                    }
                    else
                    {
                        int16_t **l_552 = &l_535;
                        int32_t l_564 = 3L;
                        uint64_t *l_565 = &g_426;
                        uint32_t l_567 = 0x9F148163L;
                        uint32_t *l_568 = (void*)0;
                        uint32_t *l_569 = &g_380;
                        (*l_361) = ((*l_359) = (((*l_377) > (+(((safe_div_func_uint64_t_u_u((((*l_569) = ((g_274 >= p_58) | (!((l_399 | ((safe_sub_func_uint64_t_u_u(((*l_565) |= ((((*l_552) = &g_98) == (void*)0) , ((*l_323) | ((((*l_270) &= ((0x1DE7662D703F634CLL && ((((((safe_rshift_func_int16_t_s_s((((safe_add_func_int8_t_s_s((safe_div_func_int32_t_s_s((safe_mod_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((((p_58 != 0x5BL) , 1L) & l_563), 11)), g_132)), 2UL)), (*g_414))) == 4UL) ^ l_564), g_132)) > 1L) | 0xC2L) > p_58) , l_533) & p_58)) == p_58)) != p_58) == p_58)))), l_566)) >= l_567)) != l_563)))) >= p_58), 0xA718A48E0BD70E0ELL)) , g_570) != g_4))) <= 1L));
                        g_525 = (void*)0;
                        if ((*g_485))
                            continue;
                    }
                    for (l_534 = 0; (l_534 <= 28); l_534 = safe_add_func_uint8_t_u_u(l_534, 7))
                    {
                        const uint64_t ****l_587 = &l_584;
                        uint64_t * const ***l_590 = &l_588;
                        int32_t l_592 = 0x3B5990A5L;
                        (*l_359) = (safe_add_func_int64_t_s_s(p_58, (((safe_rshift_func_uint16_t_u_s((safe_div_func_int16_t_s_s(p_58, l_563)), 11)) || p_58) , (+((safe_lshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_u(l_566, (((*l_587) = l_584) == ((*l_590) = (g_79 , l_588))))), (l_591 > l_566))) , 0x718DDC09L)))));
                        g_594--;
                    }
                    (*l_344) = (safe_rshift_func_uint16_t_u_u(((*l_330) != (safe_mod_func_int16_t_s_s((*l_366), ((l_399 == ((l_601 < (l_602 == l_603)) ^ (1UL != 4UL))) , ((l_533 > g_4) | l_604))))), 14));
                    for (l_534 = (-8); (l_534 >= 18); l_534 = safe_add_func_uint16_t_u_u(l_534, 2))
                    {
                        int64_t * const * const l_609 = &g_153;
                        int64_t * const * const *l_608 = &l_609;
                        int64_t * const * const **l_607 = &l_608;
                        g_137 = &g_21;
                        (*l_607) = (void*)0;
                        if ((*g_485))
                            break;
                    }
                }
                l_610 = l_610;
                (*l_349) &= 0x59B0F3FEL;
                if (((safe_mod_func_uint32_t_u_u((safe_div_func_uint32_t_u_u((safe_add_func_int8_t_s_s((((0xD82C8C8CCAE6502ALL ^ ((((*l_620) = l_619) == &g_485) , ((0x1843362BL && 0xE3F98E29L) , (l_621 , ((safe_sub_func_int64_t_s_s((l_507 != ((*l_625) = (l_624 = &g_203))), (&l_431 != l_626))) && (***l_620)))))) >= 1L) | (*l_327)), p_58)), l_593)), 0xBDD09BC5L)) || p_58))
                {
                    uint16_t l_639 = 1UL;
                    int32_t l_651 = 0xDDBE43CFL;
                    int32_t *l_652 = &l_297;
                    int32_t *l_653 = (void*)0;
                    int32_t *l_654 = &l_534;
                    int32_t *l_655 = &l_333;
                    int32_t *l_656 = &l_338;
                    int32_t *l_657 = &l_534;
                    int32_t *l_658 = &l_333;
                    int32_t *l_659 = &g_132;
                    int32_t *l_660 = &l_356;
                    int32_t l_661 = 0xD783F521L;
                    int32_t *l_662 = &l_333;
                    int32_t *l_663 = &l_297;
                    int32_t *l_664 = &l_374;
                    int32_t *l_665 = &l_661;
                    int32_t *l_666 = &g_132;
                    int32_t *l_667 = (void*)0;
                    int32_t *l_669 = &g_132;
                    int32_t *l_671 = &l_670;
                    int32_t *l_672 = &l_357;
                    int32_t *l_673 = &l_297;
                    int32_t *l_674 = &l_661;
                    int32_t *l_675 = &g_103;
                    int32_t *l_677 = &g_132;
                    int32_t *l_678 = &l_593;
                    int32_t *l_679 = (void*)0;
                    int32_t *l_681 = &g_103;
                    (*l_329) = ((((p_58 <= ((((safe_rshift_func_int16_t_s_u((safe_div_func_uint64_t_u_u(((*l_507) = (0xEA5990F09F6C475CLL >= ((((safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_u(((0x3794DB26L <= ((((p_58 < (((safe_lshift_func_int8_t_s_u(0x5CL, ((1L > ((((((safe_rshift_func_uint8_t_u_s(l_639, ((safe_lshift_func_int8_t_s_s(((~(((safe_sub_func_uint64_t_u_u(((void*)0 == (*l_625)), 0xB8CBE4D16FD438B1LL)) != (*g_414)) >= l_645)) , (-3L)), p_58)) > l_646))) | p_58) == (*l_298)) , l_639) ^ 0L) >= (-1L))) < l_647))) , (**l_619)) , p_58)) , (void*)0) != l_648) || (*g_414))) <= 0L), p_58)), 1)) , 0x64CDAB08L) & 0x831A427DL) , (*g_153)))), (*g_153))), (*l_321))) == 0xD6C35AECD1C56688LL) >= l_639) || (*g_153))) || 0x7A49A58F885F7989LL) < p_58) > (*g_414));
                    ++g_682;
                    (*l_352) = p_58;
                }
                else
                {
                    int32_t **l_685 = &l_371;
                    const int32_t l_690 = 0x6315FFA7L;
                    (*l_685) = ((*l_531) = &g_21);
                    (**l_620) = (**l_620);
                    l_593 ^= ((*l_352) = ((*l_336) = (((l_686 == (void*)0) <= (((g_688 == (void*)0) && ((p_58 && (((*l_535) = p_58) > (((p_58 >= (((*l_298) ^= (*g_414)) || 0x17L)) | p_58) <= p_58))) , l_690)) , 0xBEL)) || p_58)));
                }
            }
            if ((*g_137))
                continue;
        }
        (*l_372) = (*l_298);
    }
    return g_21;
}
static int8_t func_59(int16_t p_60, int32_t * p_61, int8_t p_62, uint32_t * p_63)
{
    int64_t *l_151 = &g_74;
    int64_t *l_152 = &g_74;
    int32_t *l_154 = (void*)0;
    int32_t *l_155 = &g_132;
    uint64_t l_166 = 18446744073709551609UL;
    int32_t *l_167 = &g_103;
    uint32_t *l_169 = (void*)0;
    uint32_t ** const l_168 = &l_169;
    uint32_t **l_171 = &l_169;
    uint32_t ***l_170 = &l_171;
    (*l_167) = (((safe_div_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(((safe_sub_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u(((*g_137) ^ (p_60 < (p_60 == (((((l_151 = l_151) == (g_153 = l_152)) < (*p_61)) , (((((*l_155) = 0xB3ED55EDL) ^ (safe_mod_func_uint32_t_u_u((0xCB74L > (safe_div_func_uint32_t_u_u(((safe_sub_func_uint32_t_u_u((safe_div_func_int32_t_s_s((safe_lshift_func_int16_t_s_s(((void*)0 != l_154), g_17)), (*p_61))), (*p_61))) , g_8), 1L))), g_21))) , p_60) & (-1L))) != p_60)))), p_60)), g_125)) , 0xCC2217A8L), 0x0C07BB3EL)), l_166)) < (*p_61)) & 0x5434A3FDL);
    (*l_155) |= (*p_61);
    (*l_170) = l_168;
    (*l_167) = (!(g_17 <= (p_60 , 0x8DL)));
    return (*l_167);
}
static uint32_t * func_65(uint32_t p_66, int64_t p_67, int64_t * p_68)
{
    const int16_t l_111 = 6L;
    int8_t *l_113 = &g_101;
    int32_t *l_123 = &g_103;
    int8_t *l_124 = &g_125;
    uint32_t *l_126 = &g_79;
    int16_t *l_127 = (void*)0;
    int16_t *l_128 = &g_98;
    int16_t l_129 = (-1L);
    int32_t l_130 = (-1L);
    int16_t *l_131 = &g_4;
    int32_t *l_142 = &l_130;
    g_132 ^= (safe_rshift_func_int16_t_s_u(((*l_131) ^= (l_130 = ((((safe_div_func_int16_t_s_s(((*l_128) = (safe_mod_func_uint32_t_u_u(g_101, (l_111 , (((!l_111) <= (l_113 != l_113)) , ((*l_126) &= (((safe_div_func_int16_t_s_s((((*l_124) ^= (0UL | (p_67 ^ (safe_mod_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_s(((((*l_123) &= ((safe_sub_func_uint32_t_u_u(p_67, (+(((void*)0 == &g_21) >= p_66)))) <= 0x31L)) && (*l_123)) , 255UL), 3)) ^ 0x8ED4FF94FDEA9412LL), 0x5561L))))) > 0x5AL), 0x2037L)) , &l_111) == &l_111))))))), l_129)) , p_67) & g_101) && g_103))), g_101));
    (*l_142) ^= (safe_div_func_uint64_t_u_u((0L ^ (p_67 != (safe_add_func_uint16_t_u_u((((p_66 && ((g_137 = &g_21) == (void*)0)) > g_74) , (g_17 <= g_17)), (safe_div_func_int32_t_s_s((safe_mod_func_int32_t_s_s((((*l_123) = p_66) <= g_74), p_67)), g_4)))))), l_111));
    return &g_17;
}
static uint32_t func_69(uint16_t p_70, int64_t * p_71, const uint64_t p_72)
{
    const uint16_t l_87 = 2UL;
    for (g_17 = 22; (g_17 >= 23); ++g_17)
    {
        uint32_t *l_78 = &g_79;
        int32_t l_96 = 0xB492BB76L;
        int16_t *l_97 = &g_98;
        int8_t *l_99 = (void*)0;
        int8_t *l_100 = &g_101;
        int32_t *l_102 = &g_103;
        (*l_102) ^= ((((--(*l_78)) <= (safe_mod_func_uint8_t_u_u(((((((void*)0 == &g_17) , g_8) ^ (safe_unary_minus_func_int32_t_s((safe_add_func_uint8_t_u_u(l_87, ((*l_100) = (((safe_sub_func_uint32_t_u_u(((0xBFL == (((safe_sub_func_int16_t_s_s(((*l_97) &= (safe_div_func_uint32_t_u_u(g_4, ((safe_lshift_func_int16_t_s_s(((((0xBD03168FL | p_72) >= (((void*)0 != p_71) & g_19)) >= g_19) || g_21), g_17)) , l_96)))), 0xD5AEL)) > g_4) != g_8)) && p_72), p_72)) == g_19) < l_87))))))) >= g_19) > 0xB16E5D1CL), 6UL))) , 4L) || g_17);
    }
    return p_70;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_4;
    csmith_sink_ = g_8;
    csmith_sink_ = g_17;
    csmith_sink_ = g_19;
    csmith_sink_ = g_21;
    csmith_sink_ = g_29;
    csmith_sink_ = g_74;
    csmith_sink_ = g_79;
    csmith_sink_ = g_98;
    csmith_sink_ = g_101;
    csmith_sink_ = g_103;
    csmith_sink_ = g_125;
    csmith_sink_ = g_132;
    csmith_sink_ = g_203;
    csmith_sink_ = g_274;
    csmith_sink_ = g_318;
    csmith_sink_ = g_328;
    csmith_sink_ = g_380;
    csmith_sink_ = g_415;
    csmith_sink_ = g_426;
    csmith_sink_ = g_430;
    csmith_sink_ = g_449;
    csmith_sink_ = g_508;
    csmith_sink_ = g_516;
    csmith_sink_ = g_570;
    csmith_sink_ = g_594;
    csmith_sink_ = g_682;
    csmith_sink_ = g_809;
    csmith_sink_ = g_822;
    csmith_sink_ = g_885;
    csmith_sink_ = g_949;
    csmith_sink_ = g_971;
    platform_main_end(0,0);
    return 0;
}
