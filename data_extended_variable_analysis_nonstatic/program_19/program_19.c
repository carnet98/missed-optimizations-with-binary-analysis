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
static uint16_t g_10 = 0x7222L;
static int8_t g_21 = 0x29L;
static uint8_t g_34 = 254UL;
static const int32_t g_69 = 0xF54C3DC4L;
static const int32_t *g_68 = &g_69;
static uint8_t g_88 = 1UL;
static int8_t g_91 = 0x40L;
static int8_t g_94 = 0xCCL;
static int8_t * const g_93 = &g_94;
static uint8_t *g_98 = (void*)0;
static uint16_t g_113 = 0UL;
static const uint8_t g_136 = 249UL;
static uint32_t g_141 = 0x9A6A910BL;
static int16_t g_159 = (-1L);
static int32_t g_161 = 0x9E22A417L;
static int32_t *g_160 = &g_161;
static int32_t g_189 = 0x86372135L;
static const uint32_t g_219 = 0xC2FE74D0L;
static uint8_t g_232 = 252UL;
static int32_t **g_236 = (void*)0;
static int32_t ***g_235 = &g_236;
static uint32_t g_237 = 0x6FFE17F8L;
static int32_t * const *g_269 = (void*)0;
static int32_t * const **g_268 = &g_269;
static uint16_t *g_298 = &g_113;
static uint16_t **g_297 = &g_298;
static uint16_t ***g_296 = &g_297;
static int32_t ** const **g_368 = (void*)0;
static int16_t g_375 = (-1L);
static int8_t g_394 = 0xBCL;
static uint32_t **g_403 = (void*)0;
static uint8_t ***g_431 = (void*)0;
static uint8_t **** const g_430 = &g_431;
static int32_t g_511 = (-1L);
static int8_t *g_609 = (void*)0;
static int8_t **g_608 = &g_609;
static int32_t g_797 = 1L;
static int32_t g_817 = 0xABDBBF31L;
static int32_t func_1(void);
static uint16_t func_2(int8_t p_3, int32_t p_4, uint16_t p_5, int16_t p_6, uint32_t p_7);
static const int8_t func_11(uint32_t p_12, uint32_t p_13, uint16_t p_14);
static int32_t func_22(uint8_t p_23, const int32_t p_24, int8_t * p_25, int32_t p_26, uint32_t p_27);
static int8_t * func_29(int8_t * p_30, uint8_t p_31);
static int32_t * func_35(uint8_t * p_36, uint8_t * p_37, uint32_t p_38, const int32_t p_39);
static uint8_t * func_41(const uint16_t p_42, int32_t p_43, int8_t p_44, uint8_t * p_45);
static int8_t func_50(uint8_t * p_51, int32_t p_52, uint8_t * p_53, uint8_t p_54, int8_t * p_55);
static uint8_t * func_56(uint8_t p_57, uint8_t p_58, int8_t * const p_59, const uint8_t p_60);
static const uint16_t func_63(uint32_t p_64, uint16_t p_65, uint16_t p_66);
static int32_t func_1(void)
{
    int8_t l_17 = 9L;
    int8_t *l_20 = &g_21;
    int32_t *l_849 = (void*)0;
    int32_t *l_850 = &g_511;
    (*l_850) = (func_2((safe_lshift_func_int8_t_s_s(g_10, ((*l_20) = ((func_11((safe_add_func_int32_t_s_s(l_17, l_17)), ((+((*l_20) = (safe_unary_minus_func_int32_t_s(l_17)))) && ((((((&l_17 == &g_21) != l_17) || (l_17 <= (((l_17 != 1UL) ^ g_10) > g_21))) > g_10) < g_10) ^ l_17)), g_10) | l_17) != l_17)))), l_17, l_17, l_17, l_17) || l_17);
    return (*l_850);
}
static uint16_t func_2(int8_t p_3, int32_t p_4, uint16_t p_5, int16_t p_6, uint32_t p_7)
{
    uint8_t *l_846 = &g_34;
    int32_t l_848 = 0x201698AEL;
    l_848 = (safe_rshift_func_uint8_t_u_s((safe_mod_func_uint8_t_u_u((l_846 == l_846), (g_161 || (~0L)))), (&l_846 == &l_846)));
    return (***g_296);
}
static const int8_t func_11(uint32_t p_12, uint32_t p_13, uint16_t p_14)
{
    int32_t l_28 = 0L;
    int8_t *l_32 = &g_21;
    uint8_t *l_33 = &g_34;
    int8_t **l_805 = &l_32;
    int32_t *l_816 = &g_817;
    int32_t l_818 = (-6L);
    (*l_816) = func_22(l_28, ((void*)0 != &g_21), ((*l_805) = func_29(l_32, ((*l_33) = (&g_21 == (void*)0)))), (safe_lshift_func_uint8_t_u_s((safe_mod_func_uint16_t_u_u(l_28, ((((l_818 = (safe_rshift_func_uint8_t_u_s((((safe_sub_func_int32_t_s_s(((*l_816) = (safe_rshift_func_int8_t_s_u(0x76L, 6))), 0x945B6AD6L)) <= p_13) <= 0xF8L), p_13))) > p_13) & 8UL) || (*l_816)))), l_28)), p_14);
    return (*g_93);
}
static int32_t func_22(uint8_t p_23, const int32_t p_24, int8_t * p_25, int32_t p_26, uint32_t p_27)
{
    uint32_t l_823 = 0x2ECB5477L;
    uint8_t l_834 = 0x65L;
    int32_t **l_835 = (void*)0;
    uint16_t * const l_838 = &g_10;
    int32_t *l_839 = &g_817;
    int32_t *l_840 = (void*)0;
    int32_t *l_841 = &g_189;
    (*l_841) = ((((safe_rshift_func_uint16_t_u_s(((safe_sub_func_int32_t_s_s(l_823, (safe_rshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_u(l_823, (p_27 == (safe_add_func_int32_t_s_s(((*l_839) = ((safe_rshift_func_int16_t_s_u(l_834, 5)) < ((((*g_268) == l_835) == (safe_add_func_uint8_t_u_u(p_23, 1L))) | ((((((void*)0 == l_838) < 0x95L) >= p_23) == p_24) > g_34)))), 4294967292UL))))) ^ (*p_25)), (*g_298))), (**g_297))))) > 0xD4BDL), 12)) != p_26) > (*p_25)) <= (*g_93));
    return p_27;
}
static int8_t * func_29(int8_t * p_30, uint8_t p_31)
{
    uint8_t *l_40 = &g_34;
    int32_t *l_67 = (void*)0;
    int32_t l_291 = 0x930141AFL;
    int32_t *l_750 = &g_161;
    uint32_t ** const l_799 = (void*)0;
    l_67 = func_35(l_40, func_41(((safe_mod_func_uint16_t_u_u(((safe_add_func_int8_t_s_s((func_50(func_56((safe_add_func_uint16_t_u_u((p_31 && 1UL), func_63(((l_67 != g_68) ^ (safe_lshift_func_uint16_t_u_u(0x0055L, 3))), g_34, (!(2L && ((l_67 != l_67) <= p_31)))))), p_31, g_93, g_10), p_31, l_40, l_291, l_40) < 0xEBL), 0xC6L)) == p_31), g_219)) || (*p_30)), g_69, l_291, l_40), p_31, p_31);
    for (l_291 = 0; (l_291 == (-28)); l_291--)
    {
        int32_t *l_749 = &g_511;
        int32_t l_768 = (-10L);
        uint16_t ****l_771 = &g_296;
        const uint32_t ** const *l_778 = (void*)0;
        uint32_t ***l_779 = (void*)0;
        int32_t ****l_784 = (void*)0;
        uint8_t *l_788 = &g_34;
        uint32_t ***l_800 = &g_403;
        l_67 = l_749;
        if ((&l_67 != &l_67))
        {
            l_750 = (l_67 = &l_291);
        }
        else
        {
            uint32_t l_755 = 0xD2271E9CL;
            int32_t ** const ***l_761 = &g_368;
            int16_t *l_780 = &g_159;
            int32_t **l_787 = &l_749;
            int8_t ***l_790 = (void*)0;
            int8_t ***l_791 = &g_608;
            uint32_t *l_792 = &g_141;
            uint32_t *l_798 = (void*)0;
            if ((safe_add_func_uint16_t_u_u(((-6L) | 0xCCL), (***g_296))))
            {
                uint32_t *l_760 = &g_141;
                int32_t l_764 = (-8L);
                int32_t *l_765 = (void*)0;
                (*l_749) = p_31;
                (*l_749) = (((safe_sub_func_uint8_t_u_u((0xF48A93D0L || l_755), (safe_lshift_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(((*l_760) = (p_31 ^ 65534UL)), p_31)), ((void*)0 == l_761))))) == (safe_lshift_func_uint16_t_u_s(((void*)0 == p_30), g_88))) & l_764);
                l_765 = &l_764;
            }
            else
            {
                uint8_t ****l_777 = &g_431;
                int32_t ****l_783 = &g_235;
                (*l_749) = (safe_add_func_int32_t_s_s((l_768 != (safe_add_func_uint16_t_u_u(((void*)0 != l_771), ((((safe_rshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_s(p_31, 3)), (!(&g_431 != (l_777 = (void*)0))))) != (l_778 == l_779)) <= (l_780 != (void*)0)) != 1L)))), (*l_750)));
                for (l_768 = 0; (l_768 == (-30)); l_768 = safe_sub_func_uint32_t_u_u(l_768, 1))
                {
                    g_68 = func_35(&p_31, &p_31, (*l_749), ((l_784 = l_783) == (void*)0));
                    (*l_749) = (safe_rshift_func_uint8_t_u_s(p_31, 0));
                }
            }
            (*l_787) = &l_291;
            l_749 = func_35(l_788, l_40, ((((+((((*l_792) = (((*l_791) = &g_609) == &g_93)) | p_31) ^ (p_31 && ((*l_750) == (*l_67))))) ^ (((g_237 = (safe_mod_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(p_31, g_797)), (*g_93)))) != 1UL) <= 0x3133L)) & 0x06918533L) >= 0x8E7FE8F5L), p_31);
        }
        (*l_800) = l_799;
    }
    (*l_750) = (0x54L < (5L < (safe_add_func_int8_t_s_s((*p_30), ((*g_93) = (safe_mod_func_int16_t_s_s(g_69, 0x9A08L)))))));
    return p_30;
}
static int32_t * func_35(uint8_t * p_36, uint8_t * p_37, uint32_t p_38, const int32_t p_39)
{
    int32_t *l_746 = (void*)0;
    return l_746;
}
static uint8_t * func_41(const uint16_t p_42, int32_t p_43, int8_t p_44, uint8_t * p_45)
{
    uint16_t l_294 = 0UL;
    const uint16_t * const l_301 = &g_10;
    const uint16_t * const * const l_300 = &l_301;
    const uint16_t * const * const *l_299 = &l_300;
    const uint16_t * const * const **l_302 = (void*)0;
    const uint16_t * const * const **l_303 = &l_299;
    uint8_t *l_308 = &g_34;
    uint8_t **l_314 = &l_308;
    uint8_t ***l_313 = &l_314;
    uint8_t **l_315 = &l_308;
    uint32_t *l_316 = (void*)0;
    uint32_t *l_317 = (void*)0;
    uint32_t *l_318 = &g_141;
    int32_t l_331 = (-10L);
    int32_t l_370 = 0x1C7D0813L;
    int32_t *l_379 = &g_189;
    uint32_t l_395 = 0x483999EBL;
    int32_t ****l_448 = &g_235;
    int32_t *****l_447 = &l_448;
    uint16_t l_450 = 0xCC58L;
    uint16_t ***l_460 = &g_297;
    uint16_t l_570 = 0x1095L;
    int8_t **l_610 = &g_609;
    uint8_t *l_666 = &g_34;
    uint8_t ***l_690 = &l_315;
    uint8_t **** const l_689 = &l_690;
    uint8_t **** const *l_688 = &l_689;
    int32_t ****l_707 = (void*)0;
    int32_t ****l_709 = &g_235;
    int32_t *****l_708 = &l_709;
    const uint8_t l_722 = 0x5EL;
    uint32_t l_728 = 4UL;
    uint32_t l_741 = 0x9838588BL;
    int32_t *l_744 = &l_370;
    int32_t **l_745 = &l_379;
    if ((l_294 | (!((g_296 == ((*l_303) = l_299)) & (((((*g_93) = 1L) != ((((*l_318) = ((((*g_160) = (((0xC2226265L <= (safe_add_func_uint32_t_u_u((safe_add_func_uint32_t_u_u((((((l_308 == (void*)0) == ((safe_add_func_uint32_t_u_u((g_237 = (safe_lshift_func_uint8_t_u_u(((((*l_313) = &g_98) != l_315) <= 0x9AD63D6FL), (*p_45)))), p_43)) != 65535UL)) || 0xE24FC960L) > 0xAF9C2886L) < l_294), 1UL)), l_294))) != 0x1400L) > l_294)) || p_42) > p_43)) == g_232) || p_44)) | l_294) >= 1L)))))
    {
        int32_t l_319 = 1L;
        uint16_t *l_328 = (void*)0;
        uint16_t *l_329 = (void*)0;
        int32_t l_330 = 1L;
        (*g_160) = ((((*l_318) = ((0x0640L >= ((*g_298) || ((l_319 < ((safe_lshift_func_uint8_t_u_u((((((l_330 = ((***g_296) = ((safe_sub_func_int16_t_s_s(l_294, (safe_rshift_func_int8_t_s_u(((p_43 > g_21) >= (safe_lshift_func_uint8_t_u_u(g_21, 4))), (*p_45))))) | 0xBA08L))) <= p_42) != p_44) | g_159) ^ 3L), l_294)) | l_331)) || p_44))) && 0xC40FA6E5L)) || p_42) < 65532UL);
    }
    else
    {
        int32_t *l_334 = &g_189;
        uint16_t ***l_346 = &g_297;
        int32_t ***l_347 = (void*)0;
        uint8_t l_371 = 0UL;
        uint8_t ** const l_400 = &l_308;
        int16_t *l_423 = &g_375;
        uint32_t *l_426 = &g_237;
        uint32_t ***l_439 = (void*)0;
        int32_t ****l_446 = &g_235;
        int32_t *****l_445 = &l_446;
        uint16_t *l_449 = &l_294;
        int16_t *l_451 = (void*)0;
        int8_t *l_473 = &g_94;
        int8_t **l_472 = &l_473;
        int32_t l_531 = (-6L);
        uint8_t ***l_533 = &l_314;
        uint8_t l_641 = 6UL;
        for (g_34 = (-10); (g_34 >= 57); g_34 = safe_add_func_int16_t_s_s(g_34, 6))
        {
            uint8_t *l_341 = &g_88;
            int32_t l_342 = 0x61F6DF76L;
            uint16_t ***l_345 = &g_297;
            int32_t ****l_351 = &g_235;
            uint32_t *l_355 = (void*)0;
            int32_t l_386 = 3L;
            l_334 = &p_43;
            if (((((safe_add_func_uint16_t_u_u(((**g_297) = (safe_add_func_uint8_t_u_u(((*l_341) = ((*g_93) && 0L)), g_94))), g_94)) ^ ((l_342 && p_43) && 5UL)) && ((safe_rshift_func_uint8_t_u_u((((((l_346 = l_345) == (void*)0) >= 0x080AL) || p_44) || p_42), (*p_45))) < (-1L))) > 0x7229B259L))
            {
                int32_t ****l_348 = &l_347;
                int32_t *****l_352 = &l_351;
                int32_t ** const ***l_369 = &g_368;
                int16_t *l_372 = (void*)0;
                int16_t *l_373 = &g_159;
                int16_t *l_374 = &g_375;
                uint8_t *l_376 = &l_371;
                int16_t l_377 = 0xFD8CL;
                int32_t *l_378 = &l_342;
                (*l_334) = ((((*l_348) = l_347) != &g_236) | (safe_lshift_func_int16_t_s_u((&g_235 != ((*l_352) = l_351)), 15)));
                (*l_378) = ((*g_160) = ((*l_334) = (((*l_376) = (((safe_rshift_func_int16_t_s_u((((*l_374) = ((p_43 | ((*l_334) || ((((void*)0 == l_355) >= ((***l_346) = (safe_lshift_func_uint8_t_u_u(l_331, 2)))) & (safe_mod_func_int8_t_s_s(((safe_sub_func_int32_t_s_s((safe_sub_func_int32_t_s_s((safe_mod_func_uint8_t_u_u(((*l_341) = ((safe_mod_func_int16_t_s_s(((*l_373) = ((((((*l_369) = g_368) == &g_235) & ((0x5B24L >= (l_370 = 0x00C9L)) > l_371)) >= 0xEECBL) && p_43)), 1L)) != (*l_334))), (*g_93))), 4294967295UL)), (*g_160))) || g_232), 1L))))) != g_21)) < g_161), 14)) & p_44) ^ l_331)) | l_377)));
                l_379 = &p_43;
                for (g_159 = (-6); (g_159 == (-10)); g_159 = safe_sub_func_int8_t_s_s(g_159, 5))
                {
                    (*l_378) = (((safe_lshift_func_uint8_t_u_u((g_34 >= 0UL), (*p_45))) == (((((((*g_298) = l_386) == ((*l_374) = (safe_mod_func_uint16_t_u_u(((void*)0 == &g_34), (safe_add_func_uint8_t_u_u((~(safe_sub_func_int8_t_s_s(((-1L) > g_394), ((&l_345 == &g_296) < (*l_379))))), 0xBEL)))))) || (*l_378)) & (*p_45)) != g_159) != l_395)) >= 0x1EL);
                    if ((*g_160))
                        break;
                    for (p_44 = (-17); (p_44 > (-28)); p_44 = safe_sub_func_int16_t_s_s(p_44, 5))
                    {
                        (*l_379) = p_43;
                        l_379 = &p_43;
                        if (p_43)
                            continue;
                    }
                }
            }
            else
            {
                if ((*l_379))
                {
                    for (g_394 = 0; (g_394 > 25); g_394 = safe_add_func_uint8_t_u_u(g_394, 1))
                    {
                        uint8_t ***l_401 = &l_315;
                        int32_t **l_402 = &l_379;
                        (*l_401) = l_400;
                        (*l_402) = &p_43;
                        (*g_160) = 0xE449F472L;
                    }
                }
                else
                {
                    uint32_t ***l_404 = &g_403;
                    (*l_404) = g_403;
                }
                return p_45;
            }
            return &g_34;
        }
        (*l_334) = (safe_sub_func_uint16_t_u_u((((**l_315) = (safe_lshift_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((safe_sub_func_int8_t_s_s(((*g_93) = ((p_43 = (((0xD3785568L > g_34) >= (6UL > (((safe_sub_func_uint32_t_u_u(((*l_318) = (safe_rshift_func_int16_t_s_s(0xE364L, 10))), (safe_add_func_uint16_t_u_u((*g_298), (((((g_34 ^ (safe_mod_func_int8_t_s_s((((*l_423) = 0x97A7L) & (safe_sub_func_int16_t_s_s((((*l_426) = (((void*)0 != l_423) && 65526UL)) > p_43), 0xD871L))), 0xADL))) || 0xF5L) | 0xD78261ABL) ^ p_42) != 0x01L))))) && (***g_296)) != 1UL))) & p_42)) && p_44)), p_44)), p_42)), 14))) && p_42), p_42));
        for (g_237 = 0; (g_237 < 59); ++g_237)
        {
            int32_t *l_429 = &g_161;
            uint8_t ****l_433 = &g_431;
            uint8_t *****l_432 = &l_433;
            (*l_334) = 0x09A42ADBL;
            g_160 = (l_429 = &p_43);
            (*l_432) = g_430;
        }
        if ((~(((*g_160) = (p_44 > 0xE2EC5B38L)) >= (((safe_mod_func_int16_t_s_s((g_159 = ((l_439 != l_439) != ((safe_sub_func_int16_t_s_s(((*l_423) = (((safe_rshift_func_int16_t_s_s((!(p_44 || (((l_445 != l_447) && ((*l_334) = ((*l_449) = ((***l_346) = (*l_379))))) < (1L >= p_44)))), p_44)) || 0x34L) > (*p_45))), 0UL)) <= l_450))), 0x5377L)) < p_42) | g_394))))
        {
            uint32_t l_474 = 2UL;
            int32_t ***l_497 = &g_236;
            uint16_t * const *l_508 = &l_449;
            uint16_t * const **l_507 = &l_508;
            int32_t l_512 = 0L;
            uint32_t l_549 = 0UL;
            int32_t *l_578 = &l_370;
            int8_t ***l_611 = (void*)0;
            int8_t **l_613 = &l_473;
            int8_t ***l_612 = &l_613;
            if (((~(-1L)) != p_44))
            {
                int32_t *l_453 = &l_370;
                (*l_334) = p_42;
                l_453 = (g_160 = &p_43);
            }
            else
            {
                uint16_t ****l_461 = (void*)0;
                uint16_t ****l_462 = (void*)0;
                uint16_t ****l_463 = &g_296;
                uint16_t ****l_464 = &l_460;
                int8_t *l_471 = &g_91;
                int8_t **l_470 = &l_471;
                int8_t ***l_469 = &l_470;
                int32_t l_503 = 0xE0959EE6L;
                uint16_t * const **l_509 = &l_508;
                uint8_t **l_564 = &g_98;
                int32_t **l_572 = (void*)0;
                int32_t **l_573 = (void*)0;
lbl_576:
                if ((safe_rshift_func_int16_t_s_s((((*g_298) = (safe_add_func_uint32_t_u_u(((0xCF3447AFL <= p_44) > ((safe_lshift_func_int16_t_s_u((p_43 == (&g_297 == ((*l_464) = ((*l_463) = l_460)))), ((g_141 >= (((safe_rshift_func_uint8_t_u_s((((p_43 & (((((safe_lshift_func_uint8_t_u_u((p_44 != ((((*l_469) = (void*)0) == l_472) != 0xD6L)), 2)) || p_42) ^ (*p_45)) <= l_474) | 0x162C1F02L)) >= (-2L)) >= l_474), 7)) & (-1L)) ^ g_21)) && p_43))) != (*g_93))), p_43))) != 4UL), 13)))
                {
                    uint8_t l_491 = 0x83L;
                    int32_t *l_500 = &l_370;
                    int8_t l_510 = (-9L);
                    int32_t ** const *l_520 = &g_236;
                    int32_t ** const **l_521 = &l_520;
                    int32_t **l_555 = &l_500;
                    if ((*l_379))
                    {
                        const int8_t l_476 = 0x08L;
                        l_334 = &p_43;
                        if (l_294)
                            goto lbl_475;
lbl_475:
                        (*g_160) = (((&g_296 != &g_296) | 0xBCADB230L) | ((****l_463) = l_474));
                        (*l_334) = (l_476 == (p_43 >= (-9L)));
                    }
                    else
                    {
                        int32_t *l_481 = &g_161;
                        int32_t **l_482 = (void*)0;
                        int32_t **l_483 = &g_160;
                        int32_t ****l_494 = (void*)0;
                        int32_t ****l_495 = (void*)0;
                        int32_t ****l_496 = (void*)0;
                        int16_t *l_498 = &g_159;
                        (*l_334) = ((safe_mod_func_uint8_t_u_u(((**l_315) = (((safe_rshift_func_uint16_t_u_s(((((*l_483) = l_481) != &p_43) != ((void*)0 == &p_43)), ((((*l_498) = (safe_lshift_func_int16_t_s_u(((safe_add_func_int16_t_s_s((!((-9L) < (safe_add_func_int16_t_s_s(((((**l_472) = p_44) ^ l_491) >= ((*l_423) = g_189)), ((safe_lshift_func_uint8_t_u_u(((l_497 = &g_236) == (void*)0), (*p_45))) < 2UL))))), (**g_297))) && p_43), p_42))) > g_21) & 0x90910357L))) == 0xCF3EL) != (*l_334))), 2L)) == g_91);
                        if (l_474)
                            goto lbl_499;
lbl_499:
                        (*l_483) = (void*)0;
                        (*l_334) = p_43;
                        (*l_483) = l_500;
                    }
                    (*l_379) = (((((((*g_93) && (g_219 > ((safe_sub_func_int16_t_s_s(g_136, ((((*l_318) = p_44) >= ((l_503 < l_503) < ((!((((((safe_mod_func_uint8_t_u_u(((*l_334) && (&g_297 == (l_509 = l_507))), (*g_93))) && 0x5CL) && p_43) <= (**g_297)) || l_510) >= g_511)) & (**g_297)))) | (*g_93)))) ^ 65527UL))) | 0x74L) > p_43) | l_512) < 65529UL) != p_43);
                    if (l_331)
                        goto lbl_571;
                    if (((+((safe_sub_func_int32_t_s_s(p_44, (safe_lshift_func_int8_t_s_s((0xBFA3C9DEL >= p_42), 0)))) && ((safe_lshift_func_int16_t_s_s((&g_269 != ((*l_521) = l_520)), 4)) ^ (((*l_471) = 0L) > (((p_44 < (*l_500)) || (safe_sub_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((p_44 ^ 65535UL), 6)), 5)) > p_43), p_42)), p_42))) < (*p_45)))))) || p_43))
                    {
                        int8_t l_530 = 0x68L;
                        l_530 = (((***g_296) = (*g_298)) != 0x69EFL);
                        l_334 = &p_43;
                    }
                    else
                    {
                        uint8_t ***l_532 = &l_315;
                        int32_t l_538 = 1L;
                        int32_t l_539 = 0x8E29903CL;
                        uint8_t *l_540 = &l_491;
                        int32_t l_552 = 4L;
                        int16_t *l_553 = &g_159;
                        int32_t l_554 = 0xEE10AEB0L;
                        l_531 = 0x92F1295BL;
                        (*l_500) = 0xCF8EDB4FL;
                        (*g_160) = (l_512 = (l_532 != l_533));
                        p_43 = (safe_sub_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((l_503 != (l_539 = (l_538 = ((***l_532) = 0xC1L)))), 6)), ((*l_473) = (0xD783281DL <= (((*l_540) = 0x14L) && ((((*l_426) = (2L >= (***g_296))) >= (safe_sub_func_uint16_t_u_u(((((*l_540) = (safe_add_func_int16_t_s_s(((*l_553) = (l_552 = ((safe_lshift_func_uint16_t_u_s(l_549, 0)) <= (((*l_423) = ((((1UL ^ (safe_rshift_func_uint16_t_u_u((l_503 == l_503), (*g_298)))) && g_189) ^ (-1L)) || p_42)) > p_43)))), (*g_298)))) && 0x27L) < p_43), 0UL))) >= l_554))))));
                    }
                    (*l_555) = &p_43;
                }
                else
                {
                    p_43 = p_43;
lbl_571:
                    for (g_375 = 0; (g_375 > 14); ++g_375)
                    {
                        int32_t l_567 = 0x4BF430DAL;
                        p_43 = (safe_rshift_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((p_45 != (void*)0), (safe_rshift_func_uint16_t_u_u((((((-10L) | ((void*)0 != l_564)) && p_43) >= (safe_sub_func_uint8_t_u_u((l_567 != 0UL), (safe_rshift_func_uint16_t_u_s(l_570, g_113))))) && (-7L)), p_43)))), 3));
                    }
                    l_334 = &p_43;
                }
                for (g_88 = 0; (g_88 <= 39); ++g_88)
                {
                    int32_t *l_577 = &l_370;
                    if (g_141)
                        goto lbl_576;
                    l_578 = l_577;
                    (*l_464) = ((*l_463) = &g_297);
                    return p_45;
                }
                (*l_379) = (p_43 || 4294967295UL);
                if (((safe_mod_func_uint16_t_u_u(0xA96AL, 0xB87AL)) <= (**g_297)))
                {
                    const int32_t l_600 = 0x217C7FCCL;
                    (*l_578) = (-1L);
                    for (g_21 = 0; (g_21 >= 18); ++g_21)
                    {
                        uint16_t l_601 = 0UL;
                        (*l_578) = p_42;
                        (*l_578) = (safe_sub_func_int32_t_s_s(((*l_379) = (p_43 = (~(safe_sub_func_int16_t_s_s(((safe_lshift_func_int8_t_s_s(0L, (0UL && ((((((*l_379) == (safe_mod_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(((0xE9A02F5DL < ((safe_rshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(((((safe_sub_func_uint16_t_u_u(1UL, ((***g_296) = (***g_296)))) & (&l_446 != &g_368)) & (((void*)0 == &g_91) >= (-10L))) >= 0xB0BAL), 9)), l_600)) <= l_600)) ^ (-9L)), p_43)), (*p_45)))) <= p_44) & p_42) | (*g_93)) == 255UL)))) || l_601), 0xF104L))))), 0xB4FA76D7L));
                        (*l_379) = (safe_add_func_uint32_t_u_u(((*l_334) != 7L), p_43));
                        (*l_578) = 0xE3905655L;
                    }
                }
                else
                {
                    int32_t *l_607 = &g_511;
                    p_43 = (*l_334);
                    for (g_159 = 0; (g_159 > 17); g_159 = safe_add_func_int8_t_s_s(g_159, 5))
                    {
                        int32_t *l_606 = &l_512;
                        l_607 = (l_606 = &p_43);
                    }
                    g_68 = &p_43;
                }
            }
            (*l_578) = ((*l_334) = (&g_93 == ((*l_612) = (g_608 = (l_472 = (l_610 = g_608))))));
        }
        else
        {
            int32_t *l_618 = &g_189;
            uint8_t l_633 = 255UL;
            int32_t **l_696 = (void*)0;
            int32_t **l_697 = &g_160;
            if (p_42)
            {
                uint16_t *l_650 = &l_294;
                (*l_334) = 0xBECF8EA8L;
                for (l_371 = (-18); (l_371 == 58); l_371 = safe_add_func_int32_t_s_s(l_371, 3))
                {
                    const int8_t *l_632 = (void*)0;
                    const int8_t **l_631 = &l_632;
                    int32_t l_634 = 3L;
                    int32_t *l_638 = (void*)0;
                    uint16_t *l_651 = &l_570;
                    uint8_t *l_655 = &g_88;
                    for (g_159 = (-21); (g_159 != (-5)); g_159 = safe_add_func_uint8_t_u_u(g_159, 8))
                    {
                        l_618 = &p_43;
                    }
                    for (g_189 = 0; (g_189 > 13); g_189 = safe_add_func_uint16_t_u_u(g_189, 1))
                    {
                        uint16_t l_635 = 65535UL;
                        (*g_160) = (safe_sub_func_uint8_t_u_u((safe_add_func_int32_t_s_s((*l_618), 0x2BDF2BCAL)), ((g_88 && (((*p_45) = ((safe_mod_func_uint8_t_u_u(((void*)0 != (*g_296)), (safe_sub_func_int32_t_s_s((l_634 = ((((safe_rshift_func_uint16_t_u_u(((l_631 == (void*)0) ^ ((*l_423) = ((0x8CC5E52AL != p_42) | l_633))), 6)) != 255UL) > p_42) < (*p_45))), 0xFA9E3522L)))) != 0x3FA14610L)) > l_635)) && p_42)));
                    }
                    for (g_161 = (-19); (g_161 >= (-14)); g_161 = safe_add_func_int8_t_s_s(g_161, 1))
                    {
                        uint16_t **l_649 = (void*)0;
                        int32_t l_652 = (-1L);
                        int32_t *l_653 = (void*)0;
                        int32_t **l_654 = &l_618;
                        l_638 = &p_43;
                        p_43 = (0xCD9760A1L | (((*l_638) ^ ((safe_rshift_func_uint16_t_u_s(((g_394 != (l_641 < ((*g_298) == (((*l_449) = (p_44 >= (!(safe_sub_func_uint8_t_u_u((*p_45), (0xD961DEDFL | ((*l_426) = (safe_sub_func_uint8_t_u_u((((*l_334) = ((l_651 = (l_650 = (**g_296))) != (void*)0)) ^ p_44), (*g_93)))))))))) > l_652)))) >= p_44), g_219)) || 0xA8L)) | p_44));
                        (*l_654) = (l_653 = l_618);
                        return l_655;
                    }
                    for (g_237 = 0; (g_237 <= 47); g_237++)
                    {
                        return l_655;
                    }
                }
            }
            else
            {
                for (l_633 = 0; (l_633 >= 40); l_633 = safe_add_func_uint16_t_u_u(l_633, 5))
                {
                    (*l_334) = (0x299EL <= (l_618 != (void*)0));
                }
            }
            for (g_511 = 0; (g_511 <= (-28)); --g_511)
            {
                for (g_21 = 20; (g_21 <= 29); g_21++)
                {
                    int32_t **l_664 = &l_334;
                    if (p_42)
                        break;
                    (*l_664) = &p_43;
                    return p_45;
                }
                p_43 = (safe_unary_minus_func_int32_t_s(p_42));
                return l_666;
            }
            if ((safe_rshift_func_uint16_t_u_s(8UL, (safe_rshift_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(((*g_160) = (safe_lshift_func_int16_t_s_u((safe_sub_func_uint32_t_u_u((((safe_add_func_uint32_t_u_u(g_189, ((safe_lshift_func_uint8_t_u_u((p_43 != (((*p_45) = 255UL) != p_43)), 5)) <= ((((safe_add_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(((((safe_lshift_func_int16_t_s_s(p_42, ((safe_unary_minus_func_uint32_t_u(0UL)) && ((l_688 = &g_430) == &l_689)))) == (*l_334)) | (*l_379)) != 1UL), 0)), 0L)) >= p_43) != (*l_618)) == (*l_334))))) != (*l_618)) != 0UL), p_44)), 13))), 0x6DA8D548L)), 9)))))
            {
                l_379 = (void*)0;
                (*l_334) = 1L;
            }
            else
            {
                int32_t *l_695 = &g_511;
                for (l_633 = 0; (l_633 == 52); ++l_633)
                {
                    for (l_641 = 0; (l_641 >= 49); l_641 = safe_add_func_uint16_t_u_u(l_641, 4))
                    {
                        (*l_618) = (*l_334);
                        (*g_160) = p_43;
                        if (p_44)
                            continue;
                    }
                }
                l_695 = &p_43;
            }
            (*l_697) = l_618;
        }
    }
    if (((p_42 <= g_189) && (safe_sub_func_int32_t_s_s((safe_add_func_uint8_t_u_u(((safe_mod_func_int32_t_s_s((!(safe_rshift_func_int16_t_s_s(((*l_447) != ((*l_708) = (l_707 = (*l_447)))), (safe_sub_func_uint32_t_u_u(((65535UL >= (((safe_lshift_func_int8_t_s_s((safe_sub_func_int16_t_s_s(g_141, (safe_rshift_func_int16_t_s_u((((safe_sub_func_int32_t_s_s((-7L), ((safe_sub_func_int8_t_s_s(((*l_610) != (*g_608)), l_722)) || p_42))) > 0x41L) == (*p_45)), (*g_298))))), 4)) == (**g_297)) && (-1L))) ^ (*p_45)), p_42))))), p_44)) >= (*p_45)), (*p_45))), 0x62B32FD3L))))
    {
        uint8_t *l_725 = &g_232;
        for (g_94 = (-6); (g_94 >= 19); g_94++)
        {
            return p_45;
        }
        return l_725;
    }
    else
    {
        uint8_t l_729 = 254UL;
        int32_t l_730 = 0x77EC3601L;
        const int32_t l_733 = 0x2F62680EL;
        uint8_t * const ***l_736 = (void*)0;
        uint8_t * const ****l_737 = (void*)0;
        uint8_t * const ****l_738 = &l_736;
        uint32_t l_739 = 0x6A7CA8ECL;
        uint32_t l_740 = 18446744073709551615UL;
        int32_t l_742 = 1L;
        int32_t *l_743 = (void*)0;
        l_742 = (safe_add_func_int32_t_s_s(l_728, ((((((((((*g_160) = (l_730 = l_729)) & 0xA462446FL) == ((0x1BBEL != l_729) <= (((((safe_add_func_int16_t_s_s(l_733, ((safe_mod_func_uint32_t_u_u(l_729, (((((p_42 ^ (((*l_738) = l_736) == &g_431)) || g_113) | g_159) & l_739) || (-9L)))) < p_44))) ^ g_113) == l_740) > p_42) != p_44))) | p_42) || p_44) <= l_741) & l_739) && g_136) > (*g_93))));
        l_743 = &p_43;
        l_743 = &p_43;
    }
    (*l_745) = l_744;
    return p_45;
}
static int8_t func_50(uint8_t * p_51, int32_t p_52, uint8_t * p_53, uint8_t p_54, int8_t * p_55)
{
    int32_t *l_292 = &g_161;
    int32_t **l_293 = &g_160;
    (*l_293) = l_292;
    return (**l_293);
}
static uint8_t * func_56(uint8_t p_57, uint8_t p_58, int8_t * const p_59, const uint8_t p_60)
{
    uint8_t **l_97 = (void*)0;
    uint8_t *l_110 = &g_88;
    int32_t l_111 = 0xBB0CEA4FL;
    uint16_t *l_112 = &g_113;
    int32_t *l_115 = &l_111;
    int32_t ***l_273 = &g_236;
    if (((safe_sub_func_int16_t_s_s(((g_98 = &p_57) != (void*)0), ((*l_112) = ((safe_add_func_int16_t_s_s(((safe_sub_func_int16_t_s_s(((((+(((p_58 && ((*l_110) = (safe_sub_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(((safe_mod_func_uint16_t_u_u(p_58, p_57)) || g_21), 1)), g_10)))) != 0xD4L) || l_111)) > 0x3A9B16E5L) < 0xC1L) >= l_111), 0x9E06L)) || 0xD260L), p_58)) > 7UL)))) && p_57))
    {
        int32_t *l_114 = &l_111;
        int8_t *l_149 = (void*)0;
        uint16_t * const *l_206 = &l_112;
        l_115 = l_114;
        if ((safe_mod_func_int8_t_s_s((*g_93), ((safe_add_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_u((((safe_rshift_func_uint16_t_u_s((((*l_112) = ((void*)0 != l_114)) != (((void*)0 == &l_111) >= (safe_lshift_func_int16_t_s_s(((0x89L && (p_58 > (0x1773L ^ p_60))) >= 0xB2A1L), 13)))), 8)) & 0L) || g_94), p_57)) == 0x566AL), (*l_115))) & g_91))))
        {
            const uint8_t *l_135 = &g_136;
            const uint8_t **l_134 = &l_135;
            uint16_t **l_137 = &l_112;
            uint32_t *l_140 = &g_141;
            int32_t l_209 = 0xCB70C1D3L;
            (*l_114) = (*l_115);
            if ((((safe_sub_func_uint32_t_u_u(((*l_140) = (((0x0BL || (safe_unary_minus_func_uint32_t_u((!p_60)))) != g_88) | (safe_lshift_func_uint8_t_u_s(((((safe_rshift_func_uint16_t_u_u(((((*l_134) = l_110) != &p_58) != (*g_98)), ((&g_113 == ((*l_137) = &g_10)) < (safe_lshift_func_uint16_t_u_u((*l_114), p_60))))) > p_58) >= (*g_68)) < g_34), 3)))), 0x75C33281L)) || g_94) && 0UL))
            {
                int8_t l_150 = 0x01L;
                int16_t *l_158 = &g_159;
                int32_t l_205 = 0x0038BE24L;
                uint16_t *l_231 = &g_113;
                if ((((safe_sub_func_int16_t_s_s((+(safe_rshift_func_uint8_t_u_u(((*l_115) <= ((*g_98) = (safe_lshift_func_uint16_t_u_u((((&g_21 == l_149) < l_150) | p_60), 12)))), (((*l_158) = ((safe_lshift_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((safe_unary_minus_func_int32_t_s(0x56D442F4L)), (1L || (*l_115)))), (p_59 != (void*)0))), 5)) == 0x26BDL)) > g_69)))), p_60)) | p_58) <= 248UL))
                {
                    int32_t **l_162 = &g_160;
                    int32_t ***l_163 = &l_162;
                    uint16_t *l_169 = (void*)0;
                    uint16_t *l_187 = &g_113;
                    int32_t *l_188 = &g_189;
                    g_68 = ((*l_162) = g_160);
                    (*l_163) = &l_114;
                    if (g_21)
                        goto lbl_190;
lbl_190:
                    (*l_188) = ((!(((*l_158) = (safe_sub_func_uint16_t_u_u(((*l_187) = (safe_rshift_func_int8_t_s_u(((0x5E0419DFL ^ ((l_169 = ((*l_137) = &g_10)) != (void*)0)) == (safe_rshift_func_uint16_t_u_u(((p_57 || (safe_mod_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((*g_98), ((*l_110) = ((safe_sub_func_uint16_t_u_u((((*l_115) = 0x434AL) || (safe_rshift_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((~((*g_93) = ((0x9732EC2CL > (((safe_sub_func_int8_t_s_s((((((safe_lshift_func_int16_t_s_u((((*l_140) = (((*g_160) = (*g_160)) < 5UL)) >= p_57), 6)) | 1L) & 65535UL) > g_91) < (*g_98)), l_150)) >= p_57) & p_58)) | (*l_115)))), l_150)), 6))), 0x83A0L)) < l_150)))), 0x78L))) >= p_60), 2))), l_150))), p_60))) > p_60)) <= g_69);
                    for (g_21 = 0; (g_21 > 19); ++g_21)
                    {
                        int32_t **l_193 = &l_115;
                        (*g_160) = p_58;
                        g_68 = (*l_162);
                        (*l_193) = ((*l_162) = (*l_162));
                        return &g_88;
                    }
                }
                else
                {
                    for (g_159 = (-5); (g_159 == (-25)); g_159 = safe_sub_func_uint8_t_u_u(g_159, 8))
                    {
                        int16_t l_204 = 0xF92FL;
                        uint16_t * const **l_207 = (void*)0;
                        uint16_t * const **l_208 = &l_206;
                        const uint32_t **l_216 = (void*)0;
                        const uint32_t *l_218 = &g_219;
                        const uint32_t **l_217 = &l_218;
                        uint32_t **l_220 = &l_140;
                        int8_t **l_221 = &l_149;
                        l_205 = ((safe_sub_func_int32_t_s_s(1L, (safe_add_func_int8_t_s_s((*g_93), ((g_21 <= p_57) >= (p_58 < ((safe_mod_func_int8_t_s_s((((*l_134) != &g_88) || (l_204 == (0x24L | (*p_59)))), (*g_98))) > g_189))))))) | p_60);
                        (*l_208) = l_206;
                        (*g_160) = (((g_113 = l_209) && ((+p_57) < l_204)) | (((safe_lshift_func_int8_t_s_u((((!(*g_98)) > (safe_rshift_func_int16_t_s_s(((((*l_217) = &g_141) == ((*l_220) = &g_141)) < ((*l_110) = (((*l_221) = l_110) != (void*)0))), 3))) <= (safe_mod_func_uint8_t_u_u((*l_114), 0x6EL))), p_58)) <= (-1L)) < (*g_93)));
                    }
                }
                (*l_115) = (((*l_114) ^ ((safe_lshift_func_uint16_t_u_u((g_237 = (((((*g_68) != (((+(safe_lshift_func_uint16_t_u_s(((((*l_140) = ((safe_add_func_int32_t_s_s(0x622FFCB4L, (g_159 == (g_232 = ((*l_231) = ((void*)0 == &p_59)))))) | (((void*)0 != g_235) | 0L))) == 8L) < g_136), 3))) || p_60) > 0x18C5L)) ^ g_88) | 0UL) != l_205)), p_60)) == g_219)) >= g_219);
            }
            else
            {
                (*g_160) = 1L;
            }
        }
        else
        {
            int32_t *l_238 = &l_111;
            int32_t **l_239 = &l_238;
            uint16_t **l_244 = &l_112;
            uint16_t *** const l_243 = &l_244;
            uint8_t l_283 = 1UL;
            (*l_239) = l_238;
lbl_287:
            if (((*g_160) = ((*l_115) = (safe_add_func_uint16_t_u_u(((**l_206) = (safe_unary_minus_func_int8_t_s((((void*)0 == l_243) <= ((((void*)0 != l_114) == (*l_114)) | (((void*)0 != (*l_243)) <= g_136)))))), (safe_sub_func_uint16_t_u_u(0xAC1AL, 0x3397L)))))))
            {
                uint32_t *l_261 = (void*)0;
                (*l_238) = (safe_sub_func_uint32_t_u_u((**l_239), ((*g_160) = ((**l_239) != 1L))));
                for (p_57 = 0; (p_57 >= 44); ++p_57)
                {
                    (*l_239) = &l_111;
                    for (g_189 = (-5); (g_189 > 7); ++g_189)
                    {
                        (*l_238) = 0x4DF6C7F8L;
                    }
                }
                for (g_94 = 0; (g_94 > 21); g_94 = safe_add_func_int8_t_s_s(g_94, 1))
                {
                    uint32_t *l_260 = &g_237;
                    uint32_t **l_259 = &l_260;
                    (*g_160) = (safe_lshift_func_int8_t_s_u((((-1L) <= (((((*l_259) = l_238) != l_261) != (((p_57 > p_57) && 1UL) || (safe_mod_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(0x43946F77L, ((*l_114) = ((safe_lshift_func_uint16_t_u_s((((g_268 = g_268) == (void*)0) ^ g_159), 5)) && (*p_59))))), (*g_93))))) & 0xBFL)) != p_60), 7));
                }
                (*l_238) = ((*g_160) = 0xB4AE9B51L);
            }
            else
            {
                int8_t l_270 = 1L;
                int32_t ****l_272 = &g_235;
                (*g_160) = ((l_270 ^ (~(((((*l_272) = &l_239) == l_273) & (safe_lshift_func_int8_t_s_u((((*l_112) = 0xE0FAL) != (+((safe_lshift_func_uint16_t_u_s(((*l_114) = 0x0BE3L), ((0xB4B9L == (+(!p_60))) < ((safe_lshift_func_int16_t_s_s(0x2CDDL, ((g_237 | l_283) > p_57))) & (*g_93))))) == p_60))), p_58))) >= 0xEAL))) && (*g_98));
                l_114 = ((*l_239) = &l_111);
                for (g_159 = 0; (g_159 != 7); ++g_159)
                {
                    int32_t *l_286 = &g_161;
                    if (p_60)
                        break;
                    if (g_88)
                        goto lbl_287;
                    if ((***g_235))
                        break;
                    l_286 = l_286;
                }
            }
            (*l_114) = (safe_unary_minus_func_uint16_t_u((*l_114)));
            l_114 = (void*)0;
        }
    }
    else
    {
        int32_t ****l_290 = &l_273;
        (*l_115) = (+((*l_115) && ((*g_98) < (g_136 < (&g_235 != l_290)))));
    }
    return &g_232;
}
static const uint16_t func_63(uint32_t p_64, uint16_t p_65, uint16_t p_66)
{
    const int8_t *l_80 = (void*)0;
    int32_t l_81 = 0x8BF51449L;
    uint8_t *l_82 = &g_34;
    uint8_t *l_87 = &g_88;
    int8_t *l_89 = &g_21;
    int8_t *l_90 = &g_91;
    int32_t *l_92 = &l_81;
    (*l_92) = ((safe_lshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(g_69, ((-3L) & (((*l_82) = ((safe_unary_minus_func_uint8_t_u((0x5104E0BBL <= (l_80 != l_80)))) && l_81)) < ((((*l_90) = ((*l_89) = ((g_10 ^ (safe_mod_func_uint32_t_u_u((safe_sub_func_int8_t_s_s(g_10, ((*l_87) = ((void*)0 != l_82)))), (*g_68)))) || l_81))) != l_81) >= g_10))))), 15)) || p_64);
    return g_91;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    g_68 = 0;
    g_98 = 0;
    g_160 = 0;
    g_235 = 0;
    csmith_sink_ = g_10;
    csmith_sink_ = g_21;
    csmith_sink_ = g_34;
    csmith_sink_ = g_69;
    csmith_sink_ = g_88;
    csmith_sink_ = g_91;
    csmith_sink_ = g_94;
    csmith_sink_ = g_113;
    csmith_sink_ = g_136;
    csmith_sink_ = g_141;
    csmith_sink_ = g_159;
    csmith_sink_ = g_161;
    csmith_sink_ = g_189;
    csmith_sink_ = g_219;
    csmith_sink_ = g_232;
    csmith_sink_ = g_237;
    csmith_sink_ = g_375;
    csmith_sink_ = g_394;
    csmith_sink_ = g_511;
    csmith_sink_ = g_797;
    csmith_sink_ = g_817;
    platform_main_end(0,0);
    return 0;
}
