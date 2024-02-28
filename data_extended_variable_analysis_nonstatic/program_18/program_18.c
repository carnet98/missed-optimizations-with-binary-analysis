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
   const int16_t f0;
};
struct S1 {
   struct S0 f0;
   int16_t f1;
   const int32_t f2;
   uint8_t f3;
   const int8_t f4;
};
static int8_t g_3 = 0xE0;
static uint32_t g_5 = 0U;
static struct S0 g_20 = {0xF4F8};
static uint8_t g_113 = 0xEC;
static int32_t g_114 = 0xFDEE1321;
static int32_t g_116 = 7;
static int8_t g_117 = 1;
static uint32_t g_118 = 1U;
static uint8_t g_166 = 0U;
static int32_t g_237 = 0x3FFD8805;
static uint8_t g_384 = 255U;
static int32_t g_473 = 0x857A78FE;
static int32_t g_529 = 0x9532293B;
static uint32_t g_533 = 4294967295U;
static uint32_t g_549 = 4294967293U;
static uint32_t g_570 = 0U;
static int8_t g_605 = 2;
static int32_t g_608 = 0x6A68E759;
static uint16_t g_609 = 65531U;
static uint32_t g_639 = 0xF66749B9;
static struct S1 g_682 = {{0xEBA5},5,0x71A94A4F,0xEC,2};
static int8_t g_900 = 0x6A;
static uint32_t g_970 = 4294967295U;
static uint32_t func_1(void);
static int32_t func_8(uint32_t p_9, struct S0 p_10, const uint8_t p_11, uint16_t p_12, uint32_t p_13);
static struct S0 func_14(struct S0 p_15, int16_t p_16, int16_t p_17, uint32_t p_18, const struct S1 p_19);
static int32_t func_21(struct S1 p_22);
static struct S1 func_23(uint16_t p_24, uint32_t p_25, const struct S1 p_26, int16_t p_27, const uint32_t p_28);
static int32_t func_30(uint8_t p_31);
static uint16_t func_33(int32_t p_34, uint32_t p_35);
static uint32_t func_42(uint32_t p_43, int16_t p_44, uint32_t p_45);
static uint8_t func_48(int32_t p_49, const uint32_t p_50);
static uint16_t func_55(int32_t p_56, const struct S0 p_57, int32_t p_58, struct S0 p_59);
static uint32_t func_1(void)
{
    int8_t l_2 = 0x67;
    int32_t l_4 = (-3);
    const struct S1 l_29 = {{0xC0C8},-7,0x75DAA08B,0xD1,-1};
    int8_t l_946 = 0xF6;
    g_5--;
    if (func_8(l_4, func_14(g_20, (func_21(func_23(g_20.f0, g_20.f0, l_29, g_5, l_29.f4)) == 6U), l_29.f4, l_29.f1, g_682), l_29.f4, g_117, l_29.f3))
    {
        return l_29.f1;
    }
    else
    {
        int32_t l_943 = 0x1AD119B0;
        int32_t l_947 = 0xDA1FE423;
        l_947 |= (safe_div_func_uint32_t_u_u(((safe_sub_func_int16_t_s_s((l_943 == ((((safe_rshift_func_uint8_t_u_u((g_570 < (1 >= 0xDD4BC153)), l_29.f3)) && (((-1) < 0) & (l_946 >= (g_605 || g_166)))) < 0xBABB) < l_29.f0.f0)), l_943)) < l_29.f2), g_384));
        g_608 = ((((safe_rshift_func_int8_t_s_u((l_946 > g_117), 2)) ^ ((g_639 || 0x2B9995A0) & (0x37 < (0xC4 <= (g_682.f3 ^ l_947))))) >= 0x6DEE) || g_114);
    }
    g_116 |= (((safe_sub_func_int16_t_s_s((((65535U >= ((safe_sub_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((((safe_mod_func_int8_t_s_s(((l_29.f3 != (safe_lshift_func_int8_t_s_s(((((((safe_div_func_uint16_t_u_u(g_3, g_166)) || l_4) ^ (safe_sub_func_int32_t_s_s((l_4 < ((safe_add_func_uint32_t_u_u(4294967295U, (-8))) && (((safe_div_func_uint32_t_u_u((safe_sub_func_int8_t_s_s(g_970, g_166)), l_29.f0.f0)) ^ 4) & g_682.f1))), l_29.f1))) & 0x940804DA) ^ g_20.f0) == 65535U), 2))) != g_605), g_549)) & g_608) & g_970), 0x798E)), g_20.f0)) ^ g_639)) > l_2) && g_166), l_29.f2)) || 255U) > g_5);
    return g_529;
}
static int32_t func_8(uint32_t p_9, struct S0 p_10, const uint8_t p_11, uint16_t p_12, uint32_t p_13)
{
    uint32_t l_919 = 0x9CC52DD4;
    int32_t l_922 = 0x3F6BE3E0;
    uint32_t l_938 = 0xEA60D25A;
    g_114 |= (safe_mod_func_int8_t_s_s((((1 && ((safe_sub_func_uint32_t_u_u((8U != 1), ((l_919 & (((((safe_add_func_uint16_t_u_u((l_922 == (p_13 | (0xE4370F09 != (safe_lshift_func_int8_t_s_s((-1), 4))))), (((safe_lshift_func_uint8_t_u_s(((((l_922 <= l_919) >= p_12) < l_919) <= 0x516A470D), l_922)) | 5U) > l_919))) < 4294967293U) && p_10.f0) == g_605) >= g_639)) < g_900))) != g_3)) > (-9)) | g_608), p_13));
    g_608 ^= (safe_rshift_func_uint8_t_u_u((safe_unary_minus_func_uint16_t_u((0x92 || (((((((((((0 || (((((l_919 >= ((g_20.f0 == 0x9CD9867D) | 0xA530)) ^ (safe_add_func_uint8_t_u_u(l_922, g_682.f1))) && ((safe_mod_func_int32_t_s_s(((safe_mod_func_int8_t_s_s(l_938, g_682.f3)) ^ p_9), (-4))) == l_938)) > 5U) & 0xA3CB1FA3)) != 0x00C3) <= p_9) ^ p_11) > 0xAFB630BA) != g_114) != p_9) || g_682.f2) & p_10.f0) | g_3) > 1)))), 1));
    return g_237;
}
static struct S0 func_14(struct S0 p_15, int16_t p_16, int16_t p_17, uint32_t p_18, const struct S1 p_19)
{
    int16_t l_874 = 0;
    int32_t l_914 = (-1);
    g_608 |= (((!l_874) <= ((safe_lshift_func_uint16_t_u_u((l_874 ^ (!l_874)), 13)) && l_874)) >= ((((g_3 < ((safe_sub_func_int16_t_s_s(((-1) <= (((safe_lshift_func_uint16_t_u_s((l_874 > (((safe_lshift_func_int16_t_s_u(((safe_rshift_func_uint8_t_u_s((p_19.f4 != p_19.f3), g_529)) <= 0x650F65B8), l_874)) < 0x38F8) < l_874)), 3)) ^ 0xD2B475C6) && 1)), g_570)) == 255U)) > l_874) <= p_19.f0.f0) > g_20.f0));
    l_914 = (!((+(safe_mod_func_int32_t_s_s((safe_div_func_uint8_t_u_u(((safe_add_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(0U, l_874)), (safe_mod_func_int8_t_s_s(g_900, (safe_unary_minus_func_int16_t_s(l_874)))))) && ((((~(safe_sub_func_uint16_t_u_u(g_682.f2, (safe_add_func_int8_t_s_s((safe_mul_func_uint32_t_u_u((safe_add_func_uint16_t_u_u((0x4A && p_17), g_608)), ((+((5U || 0U) >= 0x3273)) <= g_639))), 0xFC))))) > l_874) != l_874) == g_608)), p_19.f1)), l_874))) > l_874));
    return g_682.f0;
}
static int32_t func_21(struct S1 p_22)
{
    uint32_t l_728 = 1U;
    int32_t l_731 = 0x2066DBDA;
    int8_t l_793 = 0x43;
    uint8_t l_852 = 0x61;
    l_728 = p_22.f3;
    for (g_570 = (-11); (g_570 < 55); g_570 = safe_add_func_int16_t_s_s(g_570, 4))
    {
        uint8_t l_791 = 255U;
        int16_t l_794 = 0x6DD2;
        uint8_t l_870 = 0U;
        l_731 = g_605;
        for (g_5 = (-23); (g_5 > 60); ++g_5)
        {
            int8_t l_739 = 3;
            uint32_t l_866 = 0x7A452E01;
            for (g_166 = 12; (g_166 > 35); g_166 = safe_add_func_int16_t_s_s(g_166, 3))
            {
                uint8_t l_736 = 255U;
                int32_t l_740 = 2;
                l_736 |= g_118;
                for (l_728 = 16; (l_728 <= 28); l_728 = safe_add_func_uint32_t_u_u(l_728, 1))
                {
                    uint8_t l_741 = 0x40;
                    l_741++;
                }
            }
            if (p_22.f4)
                break;
            for (g_608 = 21; (g_608 == 8); g_608 = safe_sub_func_uint8_t_u_u(g_608, 3))
            {
                uint16_t l_790 = 65535U;
                uint16_t l_792 = 0xF5B1;
                l_731 &= (safe_mod_func_int8_t_s_s((((safe_sub_func_int32_t_s_s((((safe_mod_func_uint16_t_u_u((safe_div_func_int16_t_s_s(0x9660, (safe_sub_func_uint16_t_u_u((((safe_sub_func_uint16_t_u_u(((((safe_add_func_int32_t_s_s(g_114, p_22.f4)) | ((safe_rshift_func_int8_t_s_s((+(safe_add_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_s(((safe_mod_func_uint8_t_u_u((((!p_22.f0.f0) | (~(safe_add_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(g_384, (+(safe_rshift_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(g_118, p_22.f1)), 2))))), (((safe_add_func_int32_t_s_s(((safe_add_func_uint16_t_u_u(((safe_sub_func_int16_t_s_s(g_384, ((((safe_add_func_int8_t_s_s((((0x7C88 & l_790) ^ p_22.f0.f0) & p_22.f2), g_237)) | g_237) & g_609) > g_609))) > g_639), 0xF927)) && l_791), g_533)) != g_118) > l_791))), 0x61A6)))) | l_792), 2)) >= 0x0F), 3)) == p_22.f4), 0xD322))), 1)) && 6U)) && 0x87EC) && l_793), l_790)) && p_22.f0.f0) == l_794), 0U)))), g_3)) | p_22.f2) == 0xB3E25D42), 0x347A7D29)) < g_116) != g_609), 1U));
                if ((((g_473 ^ (safe_rshift_func_int8_t_s_s((0x5A27DE33 || (safe_lshift_func_int8_t_s_s(((safe_mod_func_int32_t_s_s(((safe_sub_func_int8_t_s_s(((0 == ((0 && g_609) == (l_728 || 4294967294U))) | l_739), (safe_lshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_s((~(+((safe_unary_minus_func_uint16_t_u((safe_sub_func_uint16_t_u_u((!7U), 0xA6EF)))) | 0))), 4)), l_790)))) || p_22.f2), p_22.f4)) || p_22.f3), 7))), l_731))) == p_22.f3) && 0x44))
                {
                    uint16_t l_853 = 0U;
                    int32_t l_854 = 4;
                    l_854 = (safe_sub_func_int16_t_s_s((((((1 < ((safe_rshift_func_int8_t_s_u(g_570, ((safe_mod_func_int32_t_s_s((0x6B91 < (safe_add_func_int32_t_s_s((safe_add_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((((safe_rshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(((safe_div_func_int8_t_s_s((((safe_div_func_uint32_t_u_u((+p_22.f0.f0), g_570)) || (safe_lshift_func_int16_t_s_s((safe_mod_func_uint8_t_u_u((p_22.f4 > (safe_sub_func_uint8_t_u_u((((safe_rshift_func_int8_t_s_s(p_22.f2, ((safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s((safe_div_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_u(g_384, l_794)), 6)) & g_384), g_533)), p_22.f1)), 6)) == p_22.f0.f0))) | l_852) < 0xD7F501F7), l_790))), 8)), 11))) < g_114), g_117)) | l_731), 1)), 0)) != g_5) >= p_22.f1), p_22.f4)), p_22.f0.f0)), 0x0138B086))), g_5)) && 0))) > 0x248ECBAB)) && g_570) & 0xF7B77048) != l_853) | 0xCB), 0x2462));
                    g_116 |= (((p_22.f0.f0 < (p_22.f4 <= l_739)) < ((safe_rshift_func_uint16_t_u_u((safe_add_func_int8_t_s_s((p_22.f3 <= (p_22.f1 < l_739)), ((safe_add_func_int32_t_s_s((-1), 4294967286U)) == (safe_rshift_func_int16_t_s_s(((((safe_div_func_int32_t_s_s(((l_792 ^ g_549) && p_22.f0.f0), l_739)) < l_739) ^ 1U) > (-7)), l_790))))), l_853)) != g_605)) | p_22.f4);
                    l_866 = (safe_unary_minus_func_uint32_t_u(g_549));
                    return p_22.f3;
                }
                else
                {
                    return p_22.f0.f0;
                }
            }
        }
        l_731 = p_22.f0.f0;
        g_116 = (((safe_lshift_func_int8_t_s_u(((g_113 <= ((!l_794) >= p_22.f1)) & l_870), 4)) == l_852) || ((g_118 | l_852) & (((-4) != (safe_add_func_int16_t_s_s(g_639, 0x804E))) < 0U)));
    }
    return l_793;
}
static struct S1 func_23(uint16_t p_24, uint32_t p_25, const struct S1 p_26, int16_t p_27, const uint32_t p_28)
{
    int8_t l_32 = 1;
    int32_t l_643 = 0;
    l_643 = func_30(l_32);
    l_643 ^= p_26.f0.f0;
    l_643 = (safe_add_func_uint32_t_u_u(l_32, l_643));
    for (g_549 = 16; (g_549 <= 50); ++g_549)
    {
        int8_t l_648 = 1;
        l_648 = 0x69C7B3D9;
        for (g_113 = 0; (g_113 > 38); g_113++)
        {
            uint32_t l_665 = 4294967289U;
            uint8_t l_678 = 0U;
            int32_t l_718 = 6;
            int32_t l_722 = (-1);
            if ((safe_sub_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_u((p_26.f2 & (safe_rshift_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(g_533, ((l_648 >= g_118) & (safe_sub_func_int16_t_s_s(g_570, (safe_mod_func_uint8_t_u_u((p_26.f1 >= (((((((g_166 ^ ((safe_sub_func_int16_t_s_s(l_643, p_26.f3)) & 0xA5)) & g_116) < p_27) && g_639) & 0) <= p_26.f0.f0) & l_665)), 0xBE))))))), 15))), g_639)) <= g_608), 255U)))
            {
                int8_t l_679 = (-3);
                uint8_t l_723 = 255U;
                if ((safe_lshift_func_uint16_t_u_u(p_26.f4, 2)))
                {
                    uint16_t l_684 = 0U;
                    int32_t l_703 = 5;
                    l_679 = ((g_609 >= (safe_div_func_uint8_t_u_u((p_26.f2 ^ (p_26.f2 != (safe_rshift_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((safe_add_func_int32_t_s_s(0x7A54794A, (l_665 != ((safe_sub_func_int8_t_s_s((((0xFA || 0x31) > g_609) & p_24), 0x51)) > p_25)))), l_648)), l_678)))), 0xAA))) == p_26.f0.f0);
                    for (l_679 = 23; (l_679 < 0); l_679 = safe_sub_func_int16_t_s_s(l_679, 6))
                    {
                        return g_682;
                    }
                    if (g_118)
                    {
                        uint16_t l_683 = 0x667E;
                        int32_t l_685 = (-8);
                        if (l_648)
                            break;
                        if (g_118)
                            continue;
                        l_684 &= l_683;
                        l_685 = p_26.f3;
                    }
                    else
                    {
                        int16_t l_702 = 0xB007;
                        l_643 = ((0xFCBE8DE9 & ((g_5 > ((g_639 && (safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((safe_lshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_s(0x5BC5, (((l_678 & ((safe_mod_func_int32_t_s_s(g_609, (safe_div_func_uint32_t_u_u(((0xB5 == ((((((((safe_div_func_int32_t_s_s((g_682.f1 ^ (safe_add_func_int8_t_s_s(0xC6, 0xDB))), 0x6A15EEDD)) != 7U) != l_702) & 0x784A) < l_702) ^ g_117) || l_648) & 4)) & p_27), g_116)))) <= 6)) || l_702) && p_26.f1))), 15)), p_26.f1)), p_26.f1))) != g_682.f2)) || g_237)) & p_28);
                    }
                    l_703 ^= 1;
                }
                else
                {
                    int8_t l_721 = 0x27;
                    if (l_643)
                        break;
                    l_643 = (safe_sub_func_int16_t_s_s(((g_639 < l_648) || ((safe_lshift_func_int16_t_s_u((g_20.f0 && (g_473 != (safe_rshift_func_uint8_t_u_s(((((safe_mod_func_uint16_t_u_u((((g_682.f2 < (safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s((p_26.f4 > ((safe_sub_func_int32_t_s_s(((g_113 <= l_718) || (safe_div_func_int32_t_s_s(p_26.f1, 4294967292U))), g_682.f3)) || l_648)), 2)), p_26.f4))) & p_26.f3) != 0xD96EB05B), l_648)) || g_682.f1) <= g_116) && l_643), g_117)))), p_26.f0.f0)) || l_721)), 0U));
                    l_722 = p_28;
                }
                if (l_723)
                    break;
            }
            else
            {
                return g_682;
            }
            l_722 &= 0xAC37D0DC;
        }
        for (l_32 = 0; (l_32 == (-19)); --l_32)
        {
            for (g_114 = 0; (g_114 > (-5)); g_114 = safe_sub_func_uint16_t_u_u(g_114, 3))
            {
                return g_682;
            }
        }
    }
    return g_682;
}
static int32_t func_30(uint8_t p_31)
{
    uint16_t l_77 = 1U;
    struct S0 l_78 = {0xED33};
    int32_t l_642 = 4;
    l_642 = (func_33((safe_mod_func_int32_t_s_s((safe_sub_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u(func_42(p_31, p_31, (safe_lshift_func_uint8_t_u_s(func_48((safe_div_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(func_55((((((safe_sub_func_uint32_t_u_u(((safe_lshift_func_uint16_t_u_u(p_31, (safe_rshift_func_int16_t_s_u(g_20.f0, 11)))) > (g_3 <= p_31)), ((safe_mul_func_int32_t_s_s((-7), (p_31 <= (safe_sub_func_int32_t_s_s((+(((safe_rshift_func_int16_t_s_s((safe_add_func_uint32_t_u_u(((((safe_div_func_int16_t_s_s((g_5 || 2), g_20.f0)) ^ 2) && g_3) & p_31), 0x8934ECA6)), 9)) == l_77) | g_20.f0)), g_3))))) >= 0x5F))) && 0U) | p_31) ^ 3) < g_20.f0), g_20, p_31, l_78), 5)), p_31)), g_20.f0), 3))), p_31)), g_5)), g_116)), g_5) == l_77);
    return p_31;
}
static uint16_t func_33(int32_t p_34, uint32_t p_35)
{
    int16_t l_211 = 3;
    int32_t l_250 = 7;
    int32_t l_420 = 0x9659D1DF;
    uint32_t l_485 = 4294967293U;
    int32_t l_530 = 0x6DF10915;
    uint8_t l_577 = 0x8B;
    int16_t l_600 = 1;
    int32_t l_606 = (-5);
    int32_t l_634 = (-1);
    int32_t l_635 = (-1);
    int32_t l_636 = (-1);
    int32_t l_637 = 0;
    int32_t l_638 = 0;
lbl_245:
    l_211 = (-1);
lbl_426:
    g_116 &= (~0xD2B34E31);
    if ((0xF8 == (((0xAB484368 | (safe_mod_func_int16_t_s_s(0x6CD9, (((safe_sub_func_uint32_t_u_u(l_211, ((+0x2E61) & ((!(((safe_div_func_int32_t_s_s(0x6E003A77, g_3)) & (!(safe_sub_func_int8_t_s_s(((1U | (!(safe_div_func_int16_t_s_s(((~(((4294967288U != 0) ^ p_35) <= g_114)) > l_211), (-4))))) >= 250U), 0xA5)))) || g_5)) ^ 1)))) == l_211) | l_211)))) <= p_35) ^ 0)))
    {
        uint32_t l_236 = 0x87CD55F7;
        int32_t l_391 = (-1);
        int32_t l_419 = 0x4EB9A496;
        int32_t l_470 = 0;
        int32_t l_471 = 0xDAE04848;
        int32_t l_472 = 0;
        int8_t l_604 = (-9);
        if ((safe_div_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(((((safe_rshift_func_int8_t_s_u(((safe_rshift_func_uint8_t_u_s(p_35, 1)) <= ((l_236 != p_34) > g_237)), (safe_div_func_uint32_t_u_u(l_236, l_211)))) == (~((g_3 && (l_211 ^ (((safe_rshift_func_int16_t_s_s(((-1) || (-1)), 13)) | p_34) != l_211))) < g_237))) < g_166) || p_35), 4)), l_211)))
        {
            for (g_116 = 0; (g_116 <= 28); ++g_116)
            {
                if (g_116)
                    goto lbl_245;
                l_250 = (safe_div_func_int32_t_s_s(((safe_lshift_func_uint16_t_u_u((p_35 || g_116), 15)) || 0xB0DCD2CF), 0x2FDF4311));
            }
        }
        else
        {
            int16_t l_273 = 3;
            uint8_t l_296 = 1U;
            int32_t l_319 = 0xA4C9FFC7;
            uint32_t l_377 = 0U;
            int16_t l_412 = 0xCD4F;
            int32_t l_422 = 1;
lbl_387:
            if (p_35)
            {
                uint8_t l_253 = 249U;
                uint32_t l_320 = 4294967295U;
                if (g_113)
                {
                    uint8_t l_269 = 0x5F;
                    int32_t l_297 = (-1);
                    g_116 = ((safe_sub_func_uint32_t_u_u(0xA69A7D35, (l_253 == 4294967294U))) && ((safe_lshift_func_uint16_t_u_u(p_35, ((safe_sub_func_int16_t_s_s(((((((safe_rshift_func_int8_t_s_u((safe_div_func_uint8_t_u_u(g_20.f0, (~(safe_mod_func_int32_t_s_s(0x66C57027, (((safe_div_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(((l_269 <= 0U) != (safe_rshift_func_int8_t_s_u((+(((p_35 || l_273) <= 0xD4) & g_3)), l_236))), (-1))), 0x6A07)) > (-6)) || g_5)))))), 0)) <= p_35) ^ g_114) < g_20.f0) && 4294967295U) < g_3), 1)) >= 0x6F38))) == 0x1F));
                    l_297 ^= ((65535U <= (safe_div_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((safe_div_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(((g_166 <= (safe_lshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_s((((safe_add_func_uint8_t_u_u(((safe_div_func_int32_t_s_s(g_3, (safe_lshift_func_uint8_t_u_u((((p_35 == ((safe_lshift_func_int16_t_s_s(g_114, 13)) != ((g_117 >= 0x81580886) & ((g_237 ^ (((safe_div_func_uint32_t_u_u(p_35, p_34)) ^ 0) ^ p_34)) ^ 1)))) ^ l_269) && p_34), g_118)))) <= 0x57A2), p_34)) <= g_116) > 0xCF), 12)), 3))) ^ l_296), g_113)), p_34)), g_237)), g_117))) || 0x181D);
                }
                else
                {
                    for (l_250 = 0; (l_250 > 10); l_250++)
                    {
                        int32_t l_308 = 0x83ED5A70;
                        uint8_t l_339 = 0x43;
                        if (l_296)
                            break;
                        g_114 = (!((+(g_3 || ((g_118 & l_250) != (safe_mod_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((safe_add_func_uint16_t_u_u((l_308 >= (g_166 <= (2 ^ l_296))), (safe_sub_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((((safe_add_func_int32_t_s_s(p_34, (safe_sub_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s(((p_35 ^ g_3) || g_114), g_166)), g_166)))) != l_250) == 1), l_308)), l_296)))), g_166)), p_35))))) == 0xCA));
                        l_320--;
                        g_114 = ((((g_3 >= (safe_add_func_uint16_t_u_u(((((0x36 & l_253) < (((safe_unary_minus_func_uint32_t_u((safe_mod_func_int32_t_s_s(((safe_add_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(l_211, (safe_lshift_func_uint16_t_u_s(g_20.f0, 6)))), (safe_div_func_int8_t_s_s(4, 1U)))) || (safe_unary_minus_func_uint16_t_u(l_236))), p_35)))) && p_34) < l_339)) > 255U) ^ 1U), g_117))) || 0xB58F1CD6) || 0xDA4D) && g_20.f0);
                    }
                }
            }
            else
            {
                int16_t l_350 = 0x3612;
                if (((safe_lshift_func_int16_t_s_u(((((((safe_rshift_func_uint8_t_u_s(l_211, 5)) == ((safe_mod_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u((((((safe_lshift_func_uint8_t_u_s((0xB803 & (p_35 == ((p_35 & (((l_350 & (p_34 < (0U < (65529U ^ (((g_116 || p_35) && g_3) & l_250))))) && 0xC6) && l_250)) < l_236))), 4)) <= 0x44A45901) || l_236) < g_117) == l_236), g_114)), p_35)) > p_35)) | l_350) | g_20.f0) < p_34) == 4294967293U), 6)) == 0xA7))
                {
                    int32_t l_376 = 0;
                    l_377 = (((safe_lshift_func_int8_t_s_u(g_237, ((safe_add_func_int16_t_s_s(2, (((safe_lshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((((safe_mod_func_int16_t_s_s(((safe_lshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_s(((safe_unary_minus_func_int8_t_s(l_350)) || l_296), (65535U <= (safe_rshift_func_uint8_t_u_s(g_20.f0, 7))))), (((safe_div_func_int32_t_s_s((safe_add_func_int16_t_s_s((-3), (safe_add_func_uint8_t_u_u(p_34, ((safe_sub_func_uint32_t_u_u(p_35, 0xF3997202)) == 4294967295U))))), g_118)) > p_35) & 0x16))) > p_34), p_35)) && g_117) ^ 0x04), 7)), l_211)) ^ 0xC778) ^ g_3))) >= l_376))) || g_20.f0) == g_116);
                    if (p_34)
                        goto lbl_387;
                }
                else
                {
                    return l_236;
                }
                for (p_35 = 13; (p_35 >= 48); p_35 = safe_add_func_int8_t_s_s(p_35, 3))
                {
                    uint8_t l_380 = 0U;
                    int32_t l_383 = 0x4DBD819F;
                    l_380--;
                    ++g_384;
                    if (g_118)
                        break;
                }
            }
            g_116 &= (safe_unary_minus_func_int8_t_s((safe_sub_func_uint16_t_u_u(p_34, (0xC576 ^ (((l_391 || (safe_sub_func_uint32_t_u_u(g_113, (((safe_lshift_func_uint16_t_u_u(0x4EDF, 8)) | ((safe_div_func_int8_t_s_s((-1), (0xAC || ((~((~l_211) == (~(safe_add_func_int32_t_s_s((safe_sub_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((safe_rshift_func_int16_t_s_s(((~(l_391 & (-5))) || l_236), p_35)), l_391)), p_34)), l_412))))) & p_34)))) & 0U)) || l_391)))) | g_384) >= g_20.f0))))));
            for (g_237 = (-20); (g_237 < (-15)); g_237 = safe_add_func_uint8_t_u_u(g_237, 9))
            {
                uint32_t l_415 = 0x3CF452AD;
                int32_t l_418 = 0xFDAFAEC7;
                int32_t l_421 = 1;
                int32_t l_429 = 9;
                l_415--;
                if (l_415)
                {
                    uint16_t l_423 = 1U;
                    l_423--;
                    if (l_391)
                        goto lbl_426;
                }
                else
                {
                    for (l_421 = 0; (l_421 <= 19); l_421 = safe_add_func_int32_t_s_s(l_421, 2))
                    {
                        if (p_34)
                            break;
                        if (p_35)
                            continue;
                    }
                }
                l_429 ^= 0xAF598EF8;
                l_319 ^= ((((p_34 == p_34) | p_35) && (0x0E6A5700 > ((((247U != (safe_sub_func_int8_t_s_s((((0x1A || (safe_div_func_int16_t_s_s((safe_mod_func_uint32_t_u_u(((1 < ((safe_add_func_int32_t_s_s((safe_mod_func_int16_t_s_s((((safe_lshift_func_int16_t_s_s(((safe_rshift_func_int16_t_s_s((-3), 8)) > 248U), 7)) > 0x53BC47F2) && 65535U), g_113)), g_166)) | 0xBDD79ECD)) <= l_415), (-10))), p_34))) || l_236) ^ p_35), 1U))) < (-1)) > p_34) != 1U))) > l_412);
            }
        }
        if ((safe_sub_func_int32_t_s_s(l_211, p_35)))
        {
            return g_3;
        }
        else
        {
            const int32_t l_461 = (-6);
            l_420 = g_3;
            l_419 = ((g_237 != 0xD006) == ((+(-7)) <= (((safe_div_func_int32_t_s_s((safe_mod_func_int32_t_s_s(((g_20.f0 ^ (safe_sub_func_uint32_t_u_u((0x7C816288 > 0), (((safe_mod_func_uint8_t_u_u((((0xA15C ^ (safe_sub_func_uint16_t_u_u(((safe_div_func_int8_t_s_s(((((((0x17BC99AC ^ (p_35 < l_461)) || p_35) < g_237) > p_34) >= 65535U) | p_35), g_237)) ^ 1), 65532U))) != 2U) > p_34), p_34)) || p_34) && 65535U)))) > g_117), l_391)), p_35)) <= 0) != g_5)));
        }
        l_420 = (((p_34 || (0x5A76 || g_113)) | (!0x30)) > (((((l_420 <= 0xC6A5) < ((safe_rshift_func_uint16_t_u_s((safe_sub_func_int32_t_s_s(((!l_391) || (((g_20.f0 < ((-7) < g_237)) & 8U) <= g_384)), 4294967295U)), l_391)) <= l_391)) ^ g_117) != g_113) >= p_34));
        if (g_384)
        {
            uint8_t l_474 = 3U;
            l_474++;
        }
        else
        {
            uint32_t l_490 = 0U;
            int32_t l_511 = 0x9A3CBAA0;
            int32_t l_531 = 0x40E5F0E1;
            int8_t l_547 = 0x15;
            for (p_34 = 0; (p_34 == (-7)); p_34--)
            {
                uint32_t l_491 = 0xFCF75B37;
                int16_t l_525 = 1;
                int32_t l_528 = (-10);
                int32_t l_532 = 1;
                if ((((safe_rshift_func_uint16_t_u_u(((p_35 == (safe_rshift_func_int16_t_s_s((l_420 && ((safe_lshift_func_uint16_t_u_u(p_35, 7)) || ((((l_485 >= 0x07) && (safe_lshift_func_int16_t_s_u(p_35, 7))) < (safe_add_func_int8_t_s_s(l_490, 8))) != 1))), g_114))) > l_491), p_34)) != g_384) > p_35))
                {
                    int32_t l_510 = 8;
                    g_114 |= ((safe_add_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((+((0x19 > (p_35 ^ (safe_sub_func_int16_t_s_s(g_166, (((g_5 != (safe_sub_func_uint8_t_u_u(250U, ((p_35 <= (safe_sub_func_int8_t_s_s((p_34 >= (((+p_34) >= (safe_add_func_uint16_t_u_u(((safe_add_func_int16_t_s_s(1, g_116)) <= p_35), g_3))) || g_117)), l_490))) < 5U)))) < l_510) ^ p_35))))) & l_490)), 0x1B39F6DA)), p_35)), p_35)) > g_384);
                }
                else
                {
                    const int32_t l_521 = 0xF782E1A8;
                    int32_t l_548 = 0x6198F1B2;
                    g_116 = g_384;
                    if (g_3)
                    {
                        uint16_t l_512 = 0U;
                        l_512--;
                        g_116 = (g_5 | (safe_rshift_func_int8_t_s_s(g_5, (safe_mod_func_int16_t_s_s(((l_419 <= (((safe_rshift_func_int8_t_s_s(l_521, (+(p_34 < (g_118 == (-1)))))) > (((safe_div_func_int8_t_s_s((((0xF648C512 ^ (p_34 == 0x7D)) ^ l_250) <= l_512), g_473)) != p_35) > 0U)) && p_35)) && 9U), g_166)))));
                        g_114 = l_391;
                    }
                    else
                    {
                        int32_t l_526 = (-1);
                        int32_t l_527 = 0xEDB2B042;
                        g_533++;
                        l_470 |= (+(safe_mod_func_uint16_t_u_u(((l_530 && (p_35 == (((safe_rshift_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_u(g_166, 5)) & g_117), 2)) || (p_35 | ((l_532 <= ((safe_sub_func_int16_t_s_s(((!((0U < p_34) >= (safe_unary_minus_func_uint32_t_u(((0U == g_114) <= l_547))))) && l_391), l_521)) & p_34)) & (-1)))) & 0x2A7C))) != 0x5F), l_491)));
                        g_116 |= 5;
                    }
                    g_114 = l_211;
                    ++g_549;
                }
                if (g_5)
                    continue;
            }
            if ((safe_rshift_func_uint8_t_u_s(((safe_rshift_func_uint16_t_u_s((safe_div_func_uint32_t_u_u((252U > (((((safe_add_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u(g_473, (safe_sub_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((safe_add_func_uint32_t_u_u(((safe_rshift_func_uint8_t_u_u(0x00, (g_570 > g_384))) | (p_35 > (0U || (safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_u(l_511, 5)), 6))))), (safe_mod_func_uint8_t_u_u((p_34 & l_547), 0x3E)))), l_485)), g_117)))), p_34)) > l_250) >= 0x60BC6B06) >= g_20.f0) ^ (-1))), p_34)), p_34)) && g_5), 3)))
            {
                l_391 = (l_577 < ((safe_add_func_uint16_t_u_u((((((safe_div_func_int8_t_s_s((safe_sub_func_int8_t_s_s((p_35 || (g_116 <= g_549)), ((safe_add_func_int16_t_s_s((g_549 <= l_472), ((((safe_lshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((((safe_rshift_func_int8_t_s_s((safe_div_func_int32_t_s_s((((safe_lshift_func_int16_t_s_s(((0x1E < ((safe_sub_func_uint32_t_u_u(g_3, 1U)) >= l_419)) && l_490), 3)) && p_34) < 0x6D9E), 0xA355E920)), l_600)) ^ p_34) < (-1)), 2)), g_5)), 1)) || l_600) <= p_35) >= 3))) < 0x4DD7))), g_529)) == l_531) ^ g_117) < l_547) > g_118), 0xD3F3)) != 6U));
            }
            else
            {
                int32_t l_601 = (-10);
                int32_t l_602 = 5;
                int32_t l_603 = 0xE987AC3E;
                int32_t l_607 = 0xC200F242;
                ++g_609;
            }
        }
    }
    else
    {
        int16_t l_633 = (-1);
        l_420 = (safe_sub_func_int16_t_s_s((+(g_118 != l_250)), ((p_35 > 0x0C) <= g_549)));
        g_608 = (((safe_rshift_func_uint16_t_u_u(0xB947, 10)) | ((safe_lshift_func_uint8_t_u_s(((p_35 >= ((p_35 == p_35) & (safe_rshift_func_int16_t_s_s(0x56D9, 5)))) || (g_20.f0 == (safe_add_func_uint8_t_u_u(((safe_sub_func_uint8_t_u_u((~0x031D18E5), (((safe_div_func_int16_t_s_s((safe_sub_func_int32_t_s_s(l_250, ((safe_rshift_func_int8_t_s_s((g_117 < 0xA11E), p_34)) & l_420))), p_34)) != 0x3870) || p_34))) ^ 0xA4), g_549)))), l_606)) | l_600)) | 0x470F29F9);
        l_633 ^= (safe_unary_minus_func_int8_t_s(1));
    }
    ++g_639;
    return p_34;
}
static uint32_t func_42(uint32_t p_43, int16_t p_44, uint32_t p_45)
{
    g_114 ^= (3 < 0x4C5D);
    return g_3;
}
static uint8_t func_48(int32_t p_49, const uint32_t p_50)
{
    uint32_t l_97 = 9U;
    int16_t l_136 = 0x41AB;
    int32_t l_160 = 0xEEE9A188;
    if ((safe_mod_func_int8_t_s_s(6, (safe_add_func_int8_t_s_s(g_3, (-6))))))
    {
        int8_t l_112 = 5;
        int32_t l_115 = 0;
        g_113 = (safe_rshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_s(((safe_div_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s(((7 != (safe_unary_minus_func_int8_t_s(((!(l_97 == ((0x5AC3 != (safe_div_func_uint8_t_u_u((g_5 | (safe_rshift_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_u((g_20.f0 & p_50), (safe_sub_func_uint32_t_u_u(((safe_rshift_func_int8_t_s_u((1 && (safe_lshift_func_int16_t_s_u((safe_div_func_uint8_t_u_u((0xFF || ((g_20.f0 == g_3) != p_49)), 4)), 0))), p_49)) == p_49), l_97)))) || p_50), l_112))), 0xBC))) != l_112))) && l_97)))) >= 0xFECA), 0)), 0xE0D3BD28)) && g_5), p_50)), 10));
        g_118--;
        g_114 = (+(safe_sub_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_s((safe_div_func_int32_t_s_s((p_50 >= p_50), p_50)), ((safe_rshift_func_uint16_t_u_s(0xEAC2, 6)) || 3))) > (((p_49 | ((safe_rshift_func_uint8_t_u_u((((0x3379BBDC || (safe_add_func_int8_t_s_s(l_97, ((((l_112 == l_136) | 0x676DC049) & g_114) >= 0)))) | 0xB0) > 65535U), 6)) > p_50)) || g_114) == p_50)), l_97)));
    }
    else
    {
        uint32_t l_143 = 4294967294U;
        int16_t l_161 = (-2);
        int32_t l_162 = 0x9A964D50;
        int32_t l_163 = 1;
        int32_t l_165 = 0;
        if ((((safe_div_func_uint32_t_u_u((safe_add_func_uint16_t_u_u(((((safe_lshift_func_uint8_t_u_u((((l_143 >= ((safe_div_func_uint32_t_u_u(1U, p_50)) & (safe_sub_func_int8_t_s_s((safe_unary_minus_func_uint8_t_u((g_3 != (safe_mod_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((((safe_div_func_int16_t_s_s((0xD4 & (((safe_mod_func_int16_t_s_s(((safe_add_func_uint32_t_u_u(((g_5 <= ((+l_160) & (((0U & 65529U) ^ p_50) != p_50))) && l_161), 0x08A63556)) & 0x087C2297), 1)) && 1) == p_50)), 0x21B6)) != g_3) < g_113), l_161)), g_114))))), p_50)))) && l_136) ^ g_116), l_136)) <= g_117) == g_116) < g_114), 1U)), 1U)) <= 0xCBAF5A79) || l_143))
        {
            int8_t l_164 = 0xE2;
            ++g_166;
        }
        else
        {
            uint32_t l_193 = 0x8C6B94EF;
            l_193 = (safe_add_func_int32_t_s_s(((((safe_lshift_func_uint8_t_u_u((g_116 == (((safe_lshift_func_uint16_t_u_u(0x7620, (((safe_sub_func_int8_t_s_s((safe_mod_func_int8_t_s_s(((((safe_lshift_func_int16_t_s_u((safe_sub_func_int32_t_s_s(l_162, 0x06077EAA)), 7)) && g_20.f0) || (safe_lshift_func_int16_t_s_s(p_49, (safe_add_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((1 ^ (safe_mod_func_int32_t_s_s((1U != g_20.f0), l_161))), 15)), 0))))) ^ g_166), g_166)), l_143)) == l_163) > g_166))) && g_114) < 0x99)), 2)) == p_50) != p_49) | g_5), g_3));
        }
        l_162 = (safe_div_func_uint8_t_u_u(0U, (~(safe_lshift_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((0x6F35 ^ (safe_add_func_uint32_t_u_u(g_5, l_160))), g_118)), ((safe_mod_func_uint32_t_u_u((safe_sub_func_int8_t_s_s(((((g_20.f0 ^ (safe_rshift_func_uint16_t_u_s(((p_49 & 0xA79A) ^ (l_162 <= l_136)), 3))) | 0x101610A3) <= 0U) == l_136), p_49)), 1)) == 0xF268))), 7)))));
    }
    return l_97;
}
static uint16_t func_55(int32_t p_56, const struct S0 p_57, int32_t p_58, struct S0 p_59)
{
    uint32_t l_81 = 0xE66C79A8;
    int32_t l_82 = 0xF5B6EF3B;
    l_81 = (safe_rshift_func_int8_t_s_s((-9), g_20.f0));
    return l_82;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_3;
    csmith_sink_ = g_5;
    csmith_sink_ = g_20.f0;
    csmith_sink_ = g_113;
    csmith_sink_ = g_114;
    csmith_sink_ = g_116;
    csmith_sink_ = g_117;
    csmith_sink_ = g_118;
    csmith_sink_ = g_166;
    csmith_sink_ = g_237;
    csmith_sink_ = g_384;
    csmith_sink_ = g_473;
    csmith_sink_ = g_529;
    csmith_sink_ = g_533;
    csmith_sink_ = g_549;
    csmith_sink_ = g_570;
    csmith_sink_ = g_605;
    csmith_sink_ = g_608;
    csmith_sink_ = g_609;
    csmith_sink_ = g_639;
    csmith_sink_ = g_682.f0.f0;
    csmith_sink_ = g_682.f1;
    csmith_sink_ = g_682.f2;
    csmith_sink_ = g_682.f3;
    csmith_sink_ = g_682.f4;
    csmith_sink_ = g_900;
    csmith_sink_ = g_970;
    platform_main_end(0,0);
    return 0;
}
