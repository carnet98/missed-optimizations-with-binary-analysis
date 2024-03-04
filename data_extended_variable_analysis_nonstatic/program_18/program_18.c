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
static int8_t g_8 = 1;
static int8_t g_9 = 0x24;
static int8_t g_10 = 9;
static int32_t g_19 = 0xFC3A065C;
static int8_t g_30 = 0xB1;
static uint32_t g_77 = 0x132E8824;
static int8_t g_96 = 0xEB;
static uint32_t g_113 = 0xFF6DE5F4;
static int16_t g_114 = 0xEAB3;
static int8_t g_119 = (-1);
static uint32_t g_125 = 0xA7FFA302;
static uint8_t g_126 = 0U;
static int32_t g_189 = 1;
static uint32_t g_287 = 4294967295U;
static uint16_t g_297 = 0xAE32;
static uint32_t g_366 = 1U;
static int32_t g_461 = 0xE0484801;
static uint32_t g_518 = 0xECE5EC5E;
static int16_t g_554 = (-1);
static uint16_t g_613 = 0x59FE;
static int32_t g_654 = (-5);
static int32_t g_774 = 0x582BB0F4;
static int16_t g_777 = 1;
static int32_t g_816 = 0xB7406EEB;
static int32_t g_929 = (-1);
static int16_t func_1(void);
static int32_t func_2(int32_t p_3, uint16_t p_4, int32_t p_5, uint16_t p_6);
inline static int32_t func_14(uint8_t p_15, int32_t p_16, int32_t p_17, uint32_t p_18);
inline static uint8_t func_31(uint32_t p_32, uint32_t p_33);
static int32_t func_44(uint32_t p_45, int32_t p_46, uint8_t p_47, uint32_t p_48);
inline static uint32_t func_52(int16_t p_53, int16_t p_54, int32_t p_55, uint32_t p_56, uint8_t p_57);
static int16_t func_58(int32_t p_59, uint8_t p_60);
static int8_t func_69(int8_t p_70);
static int8_t func_71(int16_t p_72);
static int16_t func_106(int32_t p_107);
static int16_t func_1(void)
{
    int32_t l_7 = 0x0ADE2167;
    int32_t l_615 = 8;
    int32_t l_619 = 2;
    int32_t l_626 = 0;
    int32_t l_632 = (-8);
    int32_t l_653 = (-10);
    int32_t l_885 = (-9);
    uint8_t l_900 = 0U;
    int32_t l_930 = 0x0A6B406A;
    int16_t l_931 = 0x82FE;
    int32_t l_956 = 8;
    l_615 = func_2(l_7, g_8, l_7, g_8);
    if ((~((~(~((0xBF & (l_615 = g_518)) == (((g_8 = (l_619 = 7)) | (safe_add_func_uint32_t_u_u((l_632 = ((safe_mod_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((((l_626 = (l_7 == g_613)) | (g_125 & ((safe_rshift_func_uint8_t_u_s(l_7, 2)) && (!0xFB76E186)))) >= (safe_add_func_int32_t_s_s(g_126, g_461))), 3)), 9)) | 0x81F6)), g_461))) ^ g_19)))) >= (-3))))
    {
        int32_t l_650 = 0x93FC86E0;
        uint32_t l_673 = 0x68C539D9;
        int32_t l_704 = 0;
        uint16_t l_724 = 65535U;
        int16_t l_743 = 0xA539;
        int16_t l_873 = 0xA546;
        uint8_t l_901 = 251U;
        int16_t l_902 = 0x3931;
        if (((safe_lshift_func_uint16_t_u_s(g_189, ((safe_lshift_func_int16_t_s_s((safe_sub_func_int16_t_s_s((7U != (l_619 = ((safe_lshift_func_int8_t_s_u((-1), 0)) || (g_125 = ((l_615 = 4294967295U) || (l_615 = (safe_sub_func_int32_t_s_s((4294967295U < ((safe_add_func_int16_t_s_s(((g_654 = (+((g_96 = g_287) != (safe_rshift_func_int16_t_s_u((safe_add_func_uint32_t_u_u((l_626 = (l_653 = (l_650 ^ ((l_619 && (safe_mul_func_int8_t_s_s(l_615, l_615))) ^ g_77)))), l_650)), 15))))) ^ (-1)), 1)) | g_9)), g_8)))))))), l_650)), 6)) ^ l_650))) && l_619))
        {
            uint16_t l_674 = 0xFC28;
            int32_t l_675 = 1;
            uint16_t l_701 = 6U;
            int32_t l_723 = 0xD26FB0D8;
            int32_t l_744 = (-2);
            uint16_t l_771 = 0x9DEC;
            int32_t l_848 = 0x3FE5AD83;
            uint32_t l_871 = 0xC64CF0D9;
            if (g_366)
            {
                int8_t l_657 = 0;
                int8_t l_676 = 0xE1;
                int32_t l_679 = 1;
                g_654 = g_113;
                g_654 = ((l_675 = (((((safe_mod_func_uint16_t_u_u(((l_657 & (((safe_rshift_func_int16_t_s_s(0x79E2, (+(safe_mod_func_int16_t_s_s((((safe_add_func_int32_t_s_s(g_287, g_9)) && (g_613 > (safe_rshift_func_int8_t_s_u((safe_add_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(0x8703, 12)), ((-1) != (l_657 == (safe_mul_func_uint8_t_u_u(l_650, l_626)))))), 7)))) <= l_657), 0x4E08))))) < l_673) != g_9)) < 0x74), l_674)) > g_113) == l_7) >= 0x5D) | 0x1158)) <= l_676);
                l_650 = (safe_mod_func_int16_t_s_s(((l_679 = g_287) >= (l_676 | (((safe_sub_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u(((g_8 = ((g_297 = (((+l_615) ^ l_650) < 1U)) < (safe_sub_func_uint16_t_u_u(((l_675 = g_654) != (l_674 == l_650)), (safe_mul_func_int16_t_s_s((g_189 < g_461), l_676)))))) > l_657), g_119)), g_114)) < l_676) < l_657))), l_657));
            }
            else
            {
                int32_t l_705 = 7;
                g_654 = (g_114 > 0x99);
                g_189 = ((safe_mod_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(((g_126 = (g_518 != (safe_sub_func_int32_t_s_s((safe_rshift_func_int8_t_s_s(2, l_650)), (g_113 | (safe_add_func_int32_t_s_s(((g_189 || l_615) > (safe_mul_func_int16_t_s_s((g_461 <= l_701), (safe_add_func_uint16_t_u_u(l_650, l_704))))), 0x5C10A759))))))) || g_77), g_287)), 0xB7)) ^ 0);
                l_705 = ((l_675 = g_30) >= g_554);
            }
            if ((((((safe_rshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_u(g_287, 12)), 3)) & ((!0xD5) ^ (((l_724 = (g_126 = (safe_lshift_func_int8_t_s_s((safe_sub_func_int8_t_s_s(g_654, (((((((l_675 <= l_675) | 1U) > 0xF1ED8198) > (safe_sub_func_uint8_t_u_u((((safe_lshift_func_int8_t_s_u(((safe_lshift_func_uint8_t_u_u(0xAA, (safe_rshift_func_int8_t_s_s((l_723 = g_8), g_10)))) > 0x7E), l_675)) >= 0U) < l_675), g_366))) < g_119) & 4294967295U) <= 0x08AE73E5))), l_615)))) > 0x1F) && 0x103C6BBC))) && g_461) < l_619) ^ l_619))
            {
                int32_t l_732 = 1;
                int32_t l_733 = 0;
                int16_t l_773 = 0x9438;
                uint16_t l_775 = 1U;
                int32_t l_776 = 0x90B08B0A;
                l_744 = (safe_mod_func_int8_t_s_s(0xBA, (l_743 = ((((+((safe_add_func_uint32_t_u_u((safe_add_func_uint16_t_u_u((l_733 = l_732), (safe_sub_func_uint8_t_u_u((0x5CDB && g_9), (((safe_lshift_func_int16_t_s_u(g_518, 12)) > ((safe_mul_func_int16_t_s_s((g_287 && (l_704 & 0U)), (safe_add_func_uint8_t_u_u((((!(g_125 = (l_673 != 0x2316))) == g_30) <= g_189), 0)))) == 5U)) == g_114))))), g_9)) != g_613)) <= g_77) != g_10) || 0xB44A))));
                for (g_518 = 0; (g_518 < 58); g_518 = safe_add_func_uint32_t_u_u(g_518, 3))
                {
                    uint8_t l_772 = 0x98;
                    g_654 = ((+(((((safe_mod_func_uint8_t_u_u(((((safe_sub_func_int8_t_s_s((g_461 || l_673), l_653)) < g_287) && (0x0603BE73 && (g_287 = ((((l_776 = ((((((safe_add_func_uint32_t_u_u((((((((safe_rshift_func_int8_t_s_u(((g_8 = (safe_add_func_uint16_t_u_u((l_733 = (safe_add_func_int16_t_s_s((((safe_mul_func_int8_t_s_s(((g_114 <= (safe_lshift_func_int8_t_s_s((g_9 = (safe_unary_minus_func_int16_t_s((((((!l_704) & ((g_96 = (safe_lshift_func_int16_t_s_u(0x0375, (+((safe_lshift_func_uint8_t_u_u((l_674 >= g_189), 7)) != 65535U))))) | g_461)) > g_19) & l_771) ^ l_744)))), l_732))) < g_19), g_613)) < g_287) && l_733), g_125))), (-1)))) < g_554), l_772)) & g_297) >= 0x724AF6CA) == l_773) == g_613) | g_774) & 0x3F31), g_297)) > g_554) & 4294967292U) > 0xCB) > l_775) != 0xEC)) & 0x24ECEEE7) && l_704) & g_777)))) && l_704), g_113)) & g_297) || 7) == g_777) || l_7)) < g_126);
                    g_189 = g_10;
                }
                g_654 = ((safe_lshift_func_int16_t_s_s((safe_mod_func_int16_t_s_s(g_125, (safe_rshift_func_int16_t_s_s(l_776, ((safe_rshift_func_uint16_t_u_u(((((~g_113) && g_9) | (l_733 = g_113)) > (l_673 < ((safe_rshift_func_int8_t_s_s(0, (l_723 > (safe_lshift_func_uint8_t_u_u((safe_add_func_int32_t_s_s(((safe_mul_func_uint8_t_u_u((((safe_lshift_func_int8_t_s_s((g_96 = g_189), g_119)) >= g_10) == g_297), 0x6D)) > g_613), l_771)), g_189))))) && 249U))), 4)) | 65531U))))), 2)) & g_366);
                for (l_674 = (-29); (l_674 >= 43); ++l_674)
                {
                    g_654 = (l_704 = (l_733 = 0x0A6F7631));
                }
            }
            else
            {
                int32_t l_815 = 0xE95772E4;
                int16_t l_872 = (-10);
                uint8_t l_888 = 0U;
                if ((g_613 >= (((((safe_add_func_int16_t_s_s(g_126, (g_114 = ((safe_add_func_int32_t_s_s(g_297, (safe_lshift_func_int8_t_s_s(((0xE2 ^ (safe_rshift_func_int8_t_s_s(g_461, 4))) || ((safe_rshift_func_int16_t_s_s((g_518 > (safe_rshift_func_int16_t_s_s((safe_add_func_int32_t_s_s(((safe_mul_func_uint16_t_u_u((g_816 = l_815), ((((safe_add_func_int32_t_s_s(l_701, (safe_rshift_func_uint16_t_u_u(((g_189 >= l_771) || g_114), l_675)))) == g_119) < 0xB5813945) != 6))) != g_518), 4294967295U)), g_96))), 0)) != 1U)), l_650)))) < g_654)))) | 0x1B85) | l_743) || g_9) && l_815)))
                {
                    uint32_t l_823 = 4294967295U;
                    int32_t l_824 = 0x0C7446ED;
                    for (g_297 = 0; (g_297 <= 49); g_297 = safe_add_func_uint16_t_u_u(g_297, 7))
                    {
                        int16_t l_843 = 0xE649;
                        l_824 = (g_189 = l_823);
                        l_626 = (+(l_723 = (l_615 = 0x28CE)));
                        g_189 = (l_704 = (((+((((g_189 ^ (safe_sub_func_int8_t_s_s((((-1) | (((l_744 = g_297) > (safe_lshift_func_uint16_t_u_u(g_654, 14))) | (safe_rshift_func_int8_t_s_s(((7U && (l_724 & (safe_add_func_uint16_t_u_u((((safe_rshift_func_int8_t_s_s((g_119 = (0x5AD4 ^ (safe_mod_func_uint8_t_u_u((safe_add_func_int8_t_s_s((safe_sub_func_int8_t_s_s((g_10 ^ l_843), g_287)), g_654)), 0xE2)))), 5)) == g_8) ^ l_843), 0)))) ^ 1), 5)))) >= g_19), 255U))) && g_613) <= g_554) || 0x2D0B)) == l_7) < 0x60));
                    }
                }
                else
                {
                    g_816 = (65535U ^ g_554);
                }
                if (l_704)
                {
                    uint16_t l_844 = 0x1AD2;
                    return l_844;
                }
                else
                {
                    uint8_t l_845 = 255U;
                    int32_t l_847 = 0;
                    l_845 = l_626;
                    l_619 = (g_518 && (-1));
                    l_873 = (g_654 = ((safe_unary_minus_func_int8_t_s((l_847 = l_619))) != ((l_848 != ((safe_lshift_func_uint16_t_u_u((g_613 = (((safe_add_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(g_518, ((g_554 = (safe_lshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s((l_815 = ((g_189 = (g_816 = ((g_77 | ((l_615 & (((g_9 = g_774) && (safe_rshift_func_uint8_t_u_s((g_126 = (((safe_lshift_func_uint16_t_u_u(0xFADB, 10)) != (((((65535U & (safe_lshift_func_int8_t_s_u((safe_add_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_u(l_815, l_815)) ^ g_125), l_815)), l_871)), 3))) && g_297) == g_654) <= l_872) <= l_771)) < l_845)), l_653))) < l_701)) | (-3))) ^ l_632))) >= l_845)), l_845)), g_287))) || g_119))), g_10)) || g_654) | l_7)), 5)) & 1U)) == g_113)));
                    for (l_626 = 0; (l_626 > 26); l_626 = safe_add_func_int8_t_s_s(l_626, 7))
                    {
                        if (l_872)
                            break;
                        g_654 = ((l_902 = (((safe_sub_func_int16_t_s_s(((((l_653 = (safe_sub_func_int8_t_s_s((g_119 = (l_847 ^ (safe_lshift_func_int16_t_s_u((safe_mul_func_int8_t_s_s((+0x7D08), l_815)), (l_885 <= (((safe_mod_func_int8_t_s_s(((l_888 = g_96) & 5), (-1))) < (safe_add_func_int32_t_s_s((safe_add_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((l_723 = ((~(safe_rshift_func_int8_t_s_u(g_126, (safe_mod_func_int8_t_s_s(l_847, l_847))))) & l_744)), g_9)), l_815)), 0x6C46F4F2))) | l_626)))))), l_900))) >= l_845) & 0x6853BB1E) != g_613), 5U)) && l_901) ^ g_9)) ^ l_724);
                        if (l_845)
                            continue;
                    }
                }
                return g_114;
            }
        }
        else
        {
            g_654 = (-1);
        }
        g_816 = (g_654 = g_518);
        l_930 = ((safe_mod_func_int32_t_s_s(((0x0C != ((safe_lshift_func_int8_t_s_s(((((safe_sub_func_uint32_t_u_u((7 < l_902), ((safe_mod_func_uint8_t_u_u(l_626, (safe_sub_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((safe_mod_func_int32_t_s_s((safe_mod_func_uint16_t_u_u(((safe_sub_func_uint8_t_u_u(((((safe_mod_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((g_287 <= (255U || ((l_650 = 0x11B70B80) != (safe_rshift_func_int8_t_s_u((l_901 == (safe_lshift_func_uint8_t_u_u(((l_704 = g_10) && g_366), 4))), 0))))), l_619)), 0x60)) < l_653) ^ l_743) > 0x17), g_774)) < g_366), g_96)), g_461)), 3U)), g_554)))) || 255U))) <= g_929) && 4294967293U) & l_930), g_30)) < 0x95)) > l_931), 0x53FE2603)) <= l_902);
    }
    else
    {
        uint32_t l_940 = 4294967295U;
        uint32_t l_975 = 0x964F49C9;
        int32_t l_992 = 0x1087EE62;
        int32_t l_993 = 0xC08895D5;
        int16_t l_1013 = (-1);
        for (g_126 = 0; (g_126 >= 41); g_126 = safe_add_func_uint8_t_u_u(g_126, 9))
        {
            return g_113;
        }
        for (l_900 = 6; (l_900 != 6); l_900 = safe_add_func_uint16_t_u_u(l_900, 4))
        {
            uint8_t l_941 = 0xAB;
            int32_t l_959 = 1;
            int32_t l_960 = 0xECEC2F4F;
            int32_t l_1000 = 0xCED74906;
            g_816 = ((((safe_mod_func_int16_t_s_s((((safe_sub_func_int32_t_s_s(l_940, ((l_941 <= (safe_mul_func_uint8_t_u_u((((safe_sub_func_int32_t_s_s(5, (g_287 = (safe_sub_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(g_77, l_940)), (safe_rshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(((safe_rshift_func_uint8_t_u_s((l_619 = (l_956 <= ((safe_add_func_uint32_t_u_u(l_959, g_19)) && g_8))), l_959)) == g_9), l_626)), g_816))))))) == l_941) | 4294967294U), 0xCC))) >= 0x2D58371F))) | l_960) & l_931), g_929)) <= g_114) < 0x1B) || l_940);
            g_816 = (0x2D15 ^ (safe_mul_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((l_626 = (safe_lshift_func_int8_t_s_s((safe_mod_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u(l_940, (safe_add_func_int32_t_s_s(g_10, (((safe_mul_func_uint16_t_u_u((l_975 >= ((safe_add_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_s(0xD8, 3)) < ((0U & (safe_mod_func_uint32_t_u_u(((safe_lshift_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_s(((g_366 && (safe_add_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((l_993 = (safe_mod_func_int32_t_s_s(((l_992 = g_9) == l_959), g_777))), l_632)), l_885))) & 65532U), l_960)) <= 0x8D), 8)) == 0x93C0), g_114))) <= g_554)), 1)) ^ g_518)), 1)) ^ l_960) > (-1)))))) ^ l_940), 0x9F17)), 6))), l_941)), 0xF3F9)));
            l_1000 = ((l_960 = (((g_816 = g_297) <= l_615) > ((safe_mod_func_int16_t_s_s(l_941, (safe_mod_func_uint32_t_u_u((safe_add_func_int16_t_s_s(g_929, (l_941 == (0x8A == 7U)))), g_297)))) >= g_929))) <= 0x18);
        }
        g_816 = (safe_add_func_uint32_t_u_u((l_626 ^ l_626), (((l_992 & ((safe_mod_func_uint8_t_u_u((g_30 != ((safe_lshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_u((safe_add_func_uint16_t_u_u(g_96, l_1013)), 6)), 2)), 1)) >= 0x475E14D7)), g_77)) & ((+g_19) > g_125))) || g_189) != g_366)));
    }
    return g_777;
}
static int32_t func_2(int32_t p_3, uint16_t p_4, int32_t p_5, uint16_t p_6)
{
    int8_t l_13 = 0x46;
    uint8_t l_298 = 0xDD;
    uint32_t l_573 = 0x7AADFBA5;
    uint16_t l_612 = 65535U;
    uint32_t l_614 = 0x96C11273;
    p_5 = g_8;
    g_9 = g_8;
    g_10 = (g_9 == g_9);
    if ((safe_lshift_func_uint8_t_u_s(l_13, p_6)))
    {
        int32_t l_49 = 0xBE2FF5FF;
        int32_t l_252 = 0x13750715;
        int16_t l_569 = 0x49E0;
        uint32_t l_582 = 0x253E9C7D;
        g_554 = func_14((g_19 = p_3), g_8, (safe_lshift_func_uint16_t_u_u(((l_298 = (((safe_add_func_uint8_t_u_u(((g_30 = (g_8 || (safe_mul_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(0x086335C0, l_13)), (safe_lshift_func_int8_t_s_u((-1), 3)))))) == (l_252 = (func_31((9 != g_9), (safe_add_func_int8_t_s_s((safe_add_func_int32_t_s_s(((safe_rshift_func_int8_t_s_s((safe_mod_func_int8_t_s_s((safe_mod_func_int8_t_s_s(((func_44((l_49 = (p_3 | l_13)), p_6, g_9, l_13) & 0xDF83237C) ^ g_8), l_13)), l_252)), 3)) || p_5), g_8)), p_3))) || g_114))), l_13)) || p_5) && 0x9E01)) <= g_9), g_9)), p_6);
        g_189 = (safe_rshift_func_int8_t_s_u((safe_mod_func_int32_t_s_s(g_189, p_3)), 6));
        g_189 = (safe_sub_func_int32_t_s_s(0x20EB5CE8, (safe_sub_func_uint8_t_u_u((l_252 = (((0x5923 < ((safe_lshift_func_uint8_t_u_s((6 ^ (((((safe_mod_func_uint32_t_u_u(p_6, (safe_lshift_func_uint16_t_u_u(l_569, 15)))) >= g_77) ^ ((safe_mod_func_uint32_t_u_u((!0x22), (((l_252 && (l_13 > p_5)) || l_298) && l_13))) > g_77)) == 7) < g_8)), l_252)) ^ l_573)) < 5U) && 0x0162)), 0xE7))));
        for (g_461 = 0; (g_461 > (-24)); --g_461)
        {
            uint8_t l_581 = 0x53;
            int32_t l_584 = 3;
            int32_t l_598 = (-4);
            int16_t l_611 = 0x2F1D;
            g_189 = (safe_unary_minus_func_uint8_t_u((safe_lshift_func_uint16_t_u_s((p_6 = 1U), ((l_582 = l_581) || ((l_584 = (safe_unary_minus_func_int32_t_s(0x7B7ADCC2))) <= ((safe_add_func_uint16_t_u_u((1 < ((safe_rshift_func_uint8_t_u_u((safe_add_func_int32_t_s_s(p_4, (safe_unary_minus_func_uint8_t_u((((safe_sub_func_int8_t_s_s((((safe_mod_func_uint32_t_u_u(((l_598 = (safe_lshift_func_uint8_t_u_u(((l_598 | ((((safe_lshift_func_uint8_t_u_s((safe_add_func_uint32_t_u_u(((safe_sub_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_s((safe_mul_func_uint16_t_u_u(((p_4 ^ 0x1A031D18) || 1), 1)), l_611)), l_598)) > g_518), l_252)) != 0xF981), p_4)), l_612)) >= 0xA946) != 253U) <= 1)) > 5), 4))) <= 255U), 1U)) != l_581) >= p_5), g_77)) == g_96) == p_3))))), g_126)) <= p_4)), g_613)) <= l_252)))))));
        }
    }
    else
    {
        p_3 = g_518;
    }
    return l_614;
}
inline static int32_t func_14(uint8_t p_15, int32_t p_16, int32_t p_17, uint32_t p_18)
{
    int8_t l_301 = 0x34;
    int32_t l_313 = 0;
    int32_t l_316 = 0x58F5FF72;
    uint32_t l_324 = 0x1CD5F59C;
    uint32_t l_372 = 0x0AD67FAE;
    int32_t l_448 = 1;
    uint16_t l_508 = 0xDB46;
    l_316 = (((((safe_lshift_func_int8_t_s_u(l_301, 0)) ^ (safe_mod_func_uint16_t_u_u(g_96, (0x137A95C2 && ((p_16 <= 4294967291U) >= (((safe_sub_func_uint32_t_u_u(((safe_sub_func_uint16_t_u_u(((((!p_17) < (safe_lshift_func_int8_t_s_u((safe_add_func_int32_t_s_s(g_287, (((((l_313 = 0x2E) == ((((safe_mul_func_int8_t_s_s(((l_301 >= g_113) >= 0x99366D9D), g_126)) || 0x709E64E2) < 0x55) != p_17)) > g_297) || p_15) ^ g_119))), l_301))) & g_96) > g_297), g_77)) && (-2)), p_15)) == g_125) < 0x5C)))))) ^ p_17) & 0) | p_17);
    if ((65535U < (~(l_313 != (((safe_add_func_int32_t_s_s(((p_17 == p_18) & (l_316 = (g_297 = l_316))), (g_126 | (l_313 && g_287)))) == ((safe_mul_func_uint16_t_u_u(((safe_mod_func_int32_t_s_s(((0x7DDE3D06 ^ 8U) == l_313), l_313)) | l_324), 0x9FDB)) != l_324)) || 0xB06FB9F2)))))
    {
        int32_t l_341 = (-6);
        uint32_t l_346 = 0x13BAED34;
        int32_t l_356 = 0xF3997202;
        uint16_t l_359 = 1U;
        for (g_113 = 0; (g_113 >= 28); g_113++)
        {
            int32_t l_329 = 0x9337A333;
            int32_t l_357 = 0xE57F3D41;
            int32_t l_358 = (-1);
            g_189 = (safe_add_func_uint32_t_u_u(l_329, ((g_8 = (safe_sub_func_int16_t_s_s((safe_unary_minus_func_uint32_t_u(0U)), (l_358 = (l_316 = (p_17 == (safe_add_func_int32_t_s_s((l_357 = ((safe_sub_func_int8_t_s_s(((safe_mod_func_uint32_t_u_u((((safe_lshift_func_uint8_t_u_s(l_341, (((safe_mul_func_int8_t_s_s(((((safe_mod_func_uint8_t_u_u((l_346 > 0U), (safe_mul_func_int16_t_s_s(((safe_rshift_func_int8_t_s_s((!((((safe_sub_func_uint16_t_u_u(((g_9 && ((safe_mul_func_uint16_t_u_u((((l_329 != (-8)) ^ l_329) >= 0x2393EE34), l_329)) == 5U)) ^ 0U), p_17)) | (-8)) || (-7)) != 0x0D)), g_9)) == l_316), l_341)))) != l_329) == 250U) >= 1), p_18)) == l_329) == 0xA321D597))) <= l_341) >= 65526U), g_9)) > p_18), l_356)) > 0xEFC7)), p_15)))))))) & 0U)));
        }
        l_359 = p_17;
        l_316 = (safe_lshift_func_uint16_t_u_u(l_356, 8));
        g_189 = (((safe_lshift_func_uint8_t_u_s((g_287 <= g_113), 7)) < (g_10 == 0x65)) ^ (l_316 = (safe_add_func_uint32_t_u_u((g_125 && 0xF3F1), (0x351D3947 <= g_366)))));
    }
    else
    {
        uint8_t l_369 = 251U;
        l_316 = 0xCA0AF4E1;
        g_189 = ((safe_lshift_func_int8_t_s_u(g_96, l_369)) != (safe_lshift_func_int16_t_s_s((g_114 = l_372), 2)));
        l_316 = (safe_add_func_int32_t_s_s((safe_mod_func_int16_t_s_s((-1), (safe_mul_func_uint8_t_u_u(l_372, (p_15 = g_30))))), (g_19 <= (0x2A ^ 0x84))));
        g_189 = (~g_113);
    }
    g_189 = (p_18 > l_316);
    if (((l_324 ^ (safe_mod_func_int16_t_s_s((safe_add_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(1U, 4)), l_316)), l_324))) != (l_313 = (g_19 & (safe_lshift_func_uint8_t_u_u((9 && (((p_18 <= (g_189 = l_372)) | g_77) ^ l_313)), p_18))))))
    {
        int16_t l_388 = 7;
        int8_t l_393 = 2;
        uint32_t l_482 = 0U;
        int32_t l_483 = (-1);
        int32_t l_484 = 1;
        l_388 = l_316;
        for (g_8 = 0; (g_8 < (-28)); g_8 = safe_sub_func_int8_t_s_s(g_8, 4))
        {
            int32_t l_402 = (-1);
            int32_t l_425 = (-8);
            int32_t l_485 = (-8);
            uint32_t l_549 = 0x29A9F4B6;
            for (g_77 = 0; (g_77 > 31); g_77++)
            {
                int32_t l_426 = 1;
                int32_t l_433 = 2;
                int32_t l_480 = 0xDA71A939;
                int32_t l_481 = 0x159E7B89;
                g_189 = (((((l_393 = (0U && 0x92F7)) <= ((!l_324) == p_16)) >= g_96) || l_388) <= 0xEA);
                g_189 = (l_388 <= ((!(safe_mod_func_int16_t_s_s((safe_sub_func_int8_t_s_s(0x35, (+(g_297 > (!0xA5))))), p_15))) && l_402));
                if ((g_189 != (safe_mod_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(p_16, 1)), l_324))))
                {
                    l_425 = (((g_297 = (g_366 | ((((safe_mod_func_uint32_t_u_u(((safe_rshift_func_uint16_t_u_s(0x71F8, (safe_lshift_func_int8_t_s_s((l_313 = (safe_lshift_func_uint16_t_u_u((l_324 ^ ((((safe_lshift_func_uint8_t_u_s((g_287 | (safe_mod_func_int16_t_s_s((~(safe_mod_func_int8_t_s_s((safe_unary_minus_func_uint16_t_u(((1 != 3) && 1U))), (-1)))), l_393))), 6)) ^ 1U) || l_402) & 0xD0)), p_16))), p_18)))) <= 0U), g_113)) && 4294967295U) & g_8) & g_119))) | g_10) || 0xC33572A6);
                    l_426 = (-1);
                }
                else
                {
                    uint16_t l_446 = 0x6A5E;
                    int32_t l_447 = 0xBDF1AA62;
                    uint32_t l_517 = 0U;
                    l_448 = (((safe_mul_func_int8_t_s_s((safe_mod_func_int8_t_s_s(p_17, (safe_lshift_func_int8_t_s_s((-2), l_433)))), (g_126 = (safe_unary_minus_func_int8_t_s(((((+0xCDB33FEF) == 0U) > (0xFD3B != (safe_lshift_func_int16_t_s_u(((l_313 = (l_447 = (p_17 ^ ((g_10 = ((g_9 = (-1)) == (((safe_sub_func_int16_t_s_s((((safe_mul_func_int16_t_s_s((g_114 = (l_316 = ((((safe_mod_func_uint32_t_u_u(((((safe_mul_func_int16_t_s_s((g_126 >= g_30), g_114)) || g_287) | p_18) < 0xE20BCBD8), p_15)) <= p_18) && 2U) < p_17))), 65531U)) | (-10)) < (-2)), l_388)) > l_388) ^ l_446))) <= g_8)))) > 1), 15)))) && l_426)))))) == l_324) <= g_30);
                    g_189 = (safe_rshift_func_uint16_t_u_s((safe_add_func_int8_t_s_s(9, (safe_mul_func_uint16_t_u_u(g_125, (safe_lshift_func_uint8_t_u_s((0x4824 || g_8), 6)))))), 3));
                    if ((safe_mod_func_uint16_t_u_u(0U, (safe_mod_func_uint8_t_u_u(g_461, (g_96 = g_297))))))
                    {
                        l_485 = ((safe_rshift_func_uint8_t_u_s(((((safe_lshift_func_int16_t_s_u((safe_mul_func_uint8_t_u_u(p_17, (l_426 = 0xC4))), 5)) || l_426) <= (g_114 = p_16)) ^ (((g_297 = ((l_484 = (l_483 = ((0x03 < (l_425 = (l_393 != ((~(safe_add_func_int32_t_s_s((((l_481 = (safe_rshift_func_int16_t_s_u(((((g_189 = ((p_18 == (safe_add_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(((safe_rshift_func_int8_t_s_u(((l_402 != (safe_unary_minus_func_uint32_t_u(((l_480 = p_16) && (-1))))) | g_8), 1)) >= g_126), g_189)), 0xEE))) < g_96)) < 0x60B0DC34) > l_301) < p_15), p_16))) || 0xEC64) & g_77), p_17))) || l_482)))) | 0x9911))) | p_17)) > l_313) <= 65528U)), 3)) ^ p_17);
                    }
                    else
                    {
                        g_189 = (safe_rshift_func_uint8_t_u_u(g_461, 4));
                        if (p_17)
                            continue;
                    }
                    if (l_425)
                    {
                        l_484 = (l_485 = (g_189 = 0));
                        return p_17;
                    }
                    else
                    {
                        uint16_t l_507 = 0x23B7;
                        g_189 = ((~((safe_rshift_func_int16_t_s_s((g_114 = ((((safe_add_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s((0x2F & ((safe_rshift_func_int8_t_s_u(((g_518 = ((g_287 = (!((g_125 = (p_18 = ((l_483 = 0x5E07) & ((safe_unary_minus_func_int8_t_s((safe_unary_minus_func_uint16_t_u((((((l_482 > g_126) | ((safe_mul_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(((!(l_508 = l_507)) > (safe_mul_func_int16_t_s_s(p_15, g_77))), (((safe_add_func_uint32_t_u_u(((safe_mul_func_uint8_t_u_u(p_18, (safe_add_func_uint8_t_u_u((p_16 > g_9), l_482)))) | 0xB6DF1091), p_15)) || 6) & l_446))), g_10)) ^ p_17)) & g_126) || 0U) < g_297))))) >= l_447)))) ^ l_517))) ^ l_485)) >= 0x33FAE959), 3)) || 0U)), g_30)), 0)) ^ 4294967292U) < 0) == 0xB25053CB)), 12)) ^ (-6))) | g_9);
                        g_189 = (safe_mul_func_int16_t_s_s(p_17, ((safe_lshift_func_uint8_t_u_s(l_402, (safe_mod_func_uint8_t_u_u(255U, g_10)))) != (g_287 = ((l_484 = ((safe_mul_func_uint16_t_u_u(g_30, 4U)) <= l_507)) > (g_113 >= ((l_485 = 0xDC79) == l_393)))))));
                    }
                }
                l_426 = (safe_sub_func_uint16_t_u_u((g_119 < p_18), (g_297 = (safe_rshift_func_int16_t_s_u(((l_448 = (((safe_add_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(7U, 9)), (safe_sub_func_int32_t_s_s((safe_rshift_func_int16_t_s_u((safe_add_func_int8_t_s_s(0, (safe_lshift_func_uint16_t_u_u(l_388, 11)))), 3)), ((l_393 && (safe_sub_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s(1, 5)), (((0x0F43A48F == (((safe_sub_func_uint16_t_u_u(((g_114 = 6) <= 65535U), 0xC845)) < p_15) == p_18)) || l_301) > p_17)))) || g_126))))) >= l_549) != g_518)) | l_433), 0)))));
            }
            l_448 = (l_483 = (l_485 = (l_485 <= (safe_add_func_uint16_t_u_u(l_388, g_77)))));
            g_189 = (safe_rshift_func_uint8_t_u_s((l_484 = g_96), 4));
            l_484 = 5;
        }
    }
    else
    {
        l_448 = p_16;
    }
    return p_18;
}
inline static uint8_t func_31(uint32_t p_32, uint32_t p_33)
{
    uint32_t l_288 = 0x50D544D0;
    int32_t l_289 = (-8);
    int32_t l_290 = 0xE1CCF118;
    l_290 = (((safe_add_func_uint8_t_u_u(p_33, ((safe_rshift_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(((safe_add_func_int8_t_s_s(g_96, (safe_sub_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s((safe_sub_func_int32_t_s_s(((safe_mul_func_uint16_t_u_u(p_32, (l_289 = (safe_rshift_func_uint8_t_u_s(((g_126 | (g_114 == (((~p_32) && ((((p_32 & (safe_mul_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u((g_287 = ((safe_sub_func_int8_t_s_s(((!((safe_sub_func_uint16_t_u_u((6U <= ((safe_mul_func_uint16_t_u_u(0xE83F, p_33)) | (-3))), 65535U)) || 65535U)) < 0), g_10)) == 0U)), 1)), 0xBE))) <= p_32) >= p_32) || l_288)) < g_126))) <= 0xAD), 4))))) & g_125), 4294967295U)), 0)), 1)))) <= p_32), g_125)), g_125)), 4)) | 246U), g_8)) | 0xCF))) || g_114) > g_189);
    l_290 = (((l_289 = (+0x8299)) != 1U) == (safe_mod_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u((safe_unary_minus_func_uint32_t_u(l_290)), 12)), 0x2B85)));
    return g_297;
}
static int32_t func_44(uint32_t p_45, int32_t p_46, uint8_t p_47, uint32_t p_48)
{
    int32_t l_91 = 0xB8F5B6EF;
    uint8_t l_180 = 0x7F;
    int32_t l_194 = 0xB91B04C5;
    int32_t l_216 = 1;
    int32_t l_227 = (-1);
    int8_t l_228 = 0x63;
    if (((safe_sub_func_int16_t_s_s((p_48 <= func_52(func_58(g_9, p_47), (!((safe_sub_func_uint8_t_u_u(p_45, 3U)) == (safe_add_func_int16_t_s_s((l_91 & ((0x9286 >= (safe_lshift_func_uint8_t_u_s(g_8, g_9))) && 0x0E6E27DF)), 0xF792)))), p_46, p_45, p_48)), p_47)) || g_119))
    {
        int8_t l_179 = 0x5C;
        int32_t l_181 = 0x954A6F35;
        l_181 = (((safe_mul_func_int16_t_s_s((((safe_mul_func_uint16_t_u_u((g_96 >= 1U), ((0x6206 < 0x5F2B) >= (((safe_mul_func_uint8_t_u_u((p_47 = (l_91 == ((safe_sub_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((g_8 & 0xEAAE), (safe_mod_func_int16_t_s_s(((safe_sub_func_uint32_t_u_u(((((((p_46 != (((safe_sub_func_uint8_t_u_u(((g_96 || 0) != l_91), p_48)) ^ l_179) <= 0x4999CA7B)) || l_179) || 1U) > p_47) > p_48) != l_179), p_46)) == (-3)), 0x8AE1)))), g_125)) && l_179))), (-2))) || 0x94) > 3U)))) && p_48) > l_180), g_77)) >= 0xD1E1) < 7);
    }
    else
    {
        int8_t l_193 = 1;
        int32_t l_195 = 2;
        int32_t l_226 = 0xEADC2A9F;
        for (g_10 = 0; (g_10 < (-4)); g_10 = safe_sub_func_uint8_t_u_u(g_10, 3))
        {
            int32_t l_188 = 0xEDDB30E8;
            l_188 = (((safe_lshift_func_uint16_t_u_u((l_194 = ((p_47 & (((g_189 = l_188) == (g_9 & g_8)) <= p_47)) >= (safe_unary_minus_func_int16_t_s((g_77 <= (l_193 = (safe_mod_func_uint8_t_u_u((0x7CF268A7 >= g_77), (-6))))))))), 8)) == p_46) >= l_195);
            g_189 = g_125;
            l_194 = (p_45 || (safe_add_func_int16_t_s_s(p_48, g_114)));
            l_195 = 0;
        }
        l_195 = (safe_lshift_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((safe_add_func_uint32_t_u_u((safe_rshift_func_int8_t_s_s((safe_mul_func_int16_t_s_s((l_194 = (p_46 == (safe_lshift_func_uint16_t_u_u(p_45, 0)))), ((p_48 || p_48) <= (4294967288U & (safe_sub_func_int8_t_s_s((safe_add_func_uint16_t_u_u(((0x8EA2 ^ (safe_mod_func_uint8_t_u_u((l_227 = ((l_226 = ((((((l_216 = g_125) ^ (!p_48)) == (safe_add_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(l_180, p_46)), l_180)), 0)), l_193))) | l_91) || g_9) || g_96)) & p_45)), l_91))) || l_228), l_195)), 0)))))), 4)), 0U)), 0x1EDE)), 2));
        g_189 = (g_119 ^ g_8);
        for (l_180 = 1; (l_180 == 50); l_180++)
        {
            return l_195;
        }
    }
    g_189 = (l_227 = p_48);
    l_216 = (safe_mul_func_int16_t_s_s(((((1 || ((+(safe_mod_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((g_114 = (safe_lshift_func_uint8_t_u_s(g_10, 3))), 15)), (safe_mul_func_int16_t_s_s(1, (251U | (safe_add_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(65532U, (l_227 = 0x1252))), (safe_sub_func_int8_t_s_s((safe_rshift_func_int8_t_s_s(g_126, (safe_sub_func_int16_t_s_s((((l_194 = p_45) || ((p_47 == l_216) || p_48)) != l_180), p_48)))), 1U)))))))))) != l_228)) | g_9) > g_189) || 1U), 0x2AF4));
    return p_48;
}
inline static uint32_t func_52(int16_t p_53, int16_t p_54, int32_t p_55, uint32_t p_56, uint8_t p_57)
{
    uint32_t l_94 = 0x5BCD5918;
    int32_t l_95 = 0x2ACF1929;
    int32_t l_112 = (-1);
    int32_t l_146 = (-8);
    int32_t l_147 = 0xE2023AE7;
    int32_t l_157 = (-4);
    l_95 = l_94;
    if (l_95)
    {
        uint8_t l_97 = 0U;
        if (g_8)
        {
            return p_56;
        }
        else
        {
            g_96 = 0xFE07384C;
            return l_97;
        }
    }
    else
    {
        int32_t l_98 = 0xDD146F18;
        int32_t l_124 = 0x739A15FB;
        g_114 = ((l_98 && (-1)) == (safe_lshift_func_uint8_t_u_s(((l_95 < (safe_rshift_func_uint8_t_u_u((p_57 = (safe_unary_minus_func_int16_t_s(1))), 6))) || (safe_add_func_uint8_t_u_u(p_53, func_71(func_106((safe_mul_func_int16_t_s_s((g_113 = (g_8 && (((safe_sub_func_uint16_t_u_u((((p_54 >= (((((((l_98 == ((l_112 < l_98) < g_8)) == p_57) > g_9) || l_98) <= 0U) & (-8)) ^ p_55)) <= g_8) || p_54), 0x115B)) || l_112) > 4294967289U))), g_77))))))), 7)));
        g_126 = (g_125 = (((safe_sub_func_int8_t_s_s((safe_sub_func_int8_t_s_s(((g_119 = (0x4E4C || g_113)) < g_114), (g_96 > 0xEB33))), (p_54 > g_8))) & (safe_mod_func_int16_t_s_s((l_98 > ((l_124 = ((safe_rshift_func_int16_t_s_s(((p_53 >= 7U) >= l_98), g_77)) == 0x82E2804C)) != g_77)), p_55))) != 0xE9852BC5));
    }
    l_147 = (((l_146 = ((l_95 = (safe_rshift_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((((g_77 <= (l_95 > p_57)) || (safe_rshift_func_uint16_t_u_s((safe_add_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u(((-1) || (l_112 = ((safe_mod_func_uint32_t_u_u((~((l_112 ^ (safe_mod_func_int16_t_s_s(0, 0x3435))) || 0x4503)), (safe_sub_func_uint32_t_u_u(1U, p_55)))) <= g_113))), g_113)), 0x90BA)), 14))) | g_77), g_119)), l_95))) & g_126)) | p_57) || g_126);
    l_147 = (p_55 = (((safe_mod_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((g_114 = (-10)), p_53)), (p_54 && (safe_lshift_func_int16_t_s_s((((0xDCC1A10F && (safe_add_func_int16_t_s_s(5, (safe_unary_minus_func_int16_t_s(l_157))))) && (~(safe_lshift_func_uint8_t_u_u((p_57 = ((((g_77 ^ l_147) > 0U) | 1U) <= 7U)), 6)))) >= p_55), 5))))) == 0x7979DB4E) > g_119));
    return p_55;
}
static int16_t func_58(int32_t p_59, uint8_t p_60)
{
    int16_t l_84 = 0x6206;
    int32_t l_85 = 0xA929EFCF;
    for (g_10 = 12; (g_10 != 21); g_10 = safe_add_func_uint32_t_u_u(g_10, 9))
    {
        uint32_t l_76 = 0U;
        for (p_60 = 2; (p_60 != 11); p_60 = safe_add_func_int32_t_s_s(p_60, 9))
        {
            uint32_t l_78 = 0xC4EA3C91;
            uint32_t l_79 = 4294967295U;
            l_78 = (g_77 = (safe_sub_func_uint32_t_u_u(g_9, (safe_rshift_func_int8_t_s_s(func_69(func_71(g_10)), (l_76 = (-1)))))));
            return l_79;
        }
    }
    for (g_77 = 26; (g_77 > 43); g_77 = safe_add_func_uint16_t_u_u(g_77, 8))
    {
        p_59 = (safe_add_func_uint32_t_u_u(g_10, (l_85 = l_84)));
    }
    return g_8;
}
static int8_t func_69(int8_t p_70)
{
    int32_t l_75 = (-1);
    l_75 = (func_71(g_8) & (-2));
    return g_8;
}
static int8_t func_71(int16_t p_72)
{
    uint32_t l_73 = 6U;
    int32_t l_74 = 0x11ACA8B1;
    l_74 = l_73;
    return g_10;
}
static int16_t func_106(int32_t p_107)
{
    return g_113;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_8;
    csmith_sink_ = g_9;
    csmith_sink_ = g_10;
    csmith_sink_ = g_19;
    csmith_sink_ = g_30;
    csmith_sink_ = g_77;
    csmith_sink_ = g_96;
    csmith_sink_ = g_113;
    csmith_sink_ = g_114;
    csmith_sink_ = g_119;
    csmith_sink_ = g_125;
    csmith_sink_ = g_126;
    csmith_sink_ = g_189;
    csmith_sink_ = g_287;
    csmith_sink_ = g_297;
    csmith_sink_ = g_366;
    csmith_sink_ = g_461;
    csmith_sink_ = g_518;
    csmith_sink_ = g_554;
    csmith_sink_ = g_613;
    csmith_sink_ = g_654;
    csmith_sink_ = g_774;
    csmith_sink_ = g_777;
    csmith_sink_ = g_816;
    csmith_sink_ = g_929;
    platform_main_end(0,0);
    return 0;
}
