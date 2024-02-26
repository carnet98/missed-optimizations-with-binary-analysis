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
static int32_t g_2 = 0x5252CB13;
static uint32_t g_117 = 4294967295U;
static int32_t g_125 = 1;
static int32_t g_253 = (-1);
static int16_t g_411 = 0xA912;
static const uint8_t g_594 = 1U;
static int32_t g_619 = 0xFEBEEF29;
static int32_t g_797 = (-1);
static uint32_t g_886 = 4294967295U;
static int16_t func_1(void);
static uint32_t func_3(int8_t p_4, uint32_t p_5);
static int8_t func_12(uint32_t p_13, const int16_t p_14, int16_t p_15);
static int32_t func_17(int32_t p_18, int32_t p_19, uint16_t p_20);
static int32_t func_21(uint16_t p_22, const uint32_t p_23, const uint8_t p_24);
static int32_t func_36(uint8_t p_37, int32_t p_38, int32_t p_39, int32_t p_40, uint32_t p_41);
static int16_t func_42(int32_t p_43);
static uint32_t func_44(const uint16_t p_45, uint16_t p_46, uint16_t p_47, int16_t p_48);
static uint16_t func_52(int8_t p_53, uint32_t p_54, uint32_t p_55);
static uint32_t func_56(int8_t p_57);
static int16_t func_1(void)
{
    uint8_t l_7[7][3][9] = {{{0x90,255U,0xE0,255U,0xE0,255U,0x90,0x35,0x2D},{0x9C,0xF5,0xD1,0xC9,246U,0xC9,0xD1,0xF5,0x9C},{255U,249U,250U,0x35,0U,0xE0,0U,0x35,250U}},{{0xF7,0xF7,0x9F,0U,0xF5,0xFB,0x9C,0xFB,0xF5},{255U,0U,0U,255U,2U,0x2D,255U,250U,255U},{0x9C,0x9F,0xF7,0xF7,0x9F,0U,0xF5,0xFB,0x9C}},{{0xD0,0xE0,2U,249U,249U,2U,0xE0,0xD0,255U},{0x9C,0xF7,0x51,0xF5,0x5B,0x5B,0xF5,0x51,0xF7},{249U,0xD0,250U,255U,255U,0x90,0x90,255U,255U}},{{0xC9,246U,0xC9,0xD1,0xF5,0x9C,0U,0U,0x9C},{250U,0xD0,249U,0xD0,250U,255U,255U,0x90,0x90},{0x51,0xF7,0x9C,0xD1,0x9C,0xF7,0x51,0xF5,0x5B}},{{2U,0xE0,0xD0,255U,0x2D,255U,0xD0,0xE0,2U},{0xF7,0x9F,0U,0xF5,0xFB,0x9C,0xFB,0xF5,0U},{255U,255U,0U,249U,0xE0,0x90,2U,0x90,0xE0}},{{0xF7,0xFB,0xFB,0xF7,0xC9,0x5B,0xD1,0U,0xD1},{2U,255U,0U,0U,255U,2U,0x2D,255U,250U},{0x51,0x5B,0U,0xC9,0xC9,0U,0x5B,0x51,0x9F}},{{250U,0U,0xD0,0x2D,0xE0,0xE0,0x2D,0xD0,0U},{0xC9,0x51,0x9C,0x9F,0xFB,0xD1,0xD1,0xFB,0x9F},{249U,0x35,249U,0x90,0x2D,250U,2U,2U,250U}}};
    const uint32_t l_16[4] = {4U,4U,4U,4U};
    int32_t l_909[7] = {5,5,5,5,5,5,5};
    int i, j, k;
    l_909[1] = (g_2 ^ func_3((((9 == (~l_7[5][0][6])) , ((((g_2 < ((safe_rshift_func_int8_t_s_u(g_2, 0)) || (safe_add_func_uint16_t_u_u(((g_2 ^ g_2) & func_12(((l_7[5][0][6] , l_16[3]) || 0x9B), l_16[2], g_2)), l_7[2][1][5])))) == 7) , 0x18B4) > g_411)) >= g_2), g_797));
    return g_619;
}
static uint32_t func_3(int8_t p_4, uint32_t p_5)
{
    uint8_t l_898[8] = {2U,2U,2U,2U,2U,2U,2U,2U};
    uint16_t l_908 = 0x1389;
    int i;
    g_619 = 0x6A70B39B;
    g_125 = ((safe_add_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_s(g_117, 1)), 5)), 0xD1)), (g_619 ^ (((l_898[1] ^ (safe_add_func_uint16_t_u_u((l_898[0] ^ (safe_unary_minus_func_uint32_t_u(((safe_rshift_func_int8_t_s_s(p_5, 5)) == (0xCFB3 > (safe_lshift_func_int8_t_s_u((-9), ((0xD6049ECE | p_5) || 251U)))))))), 0U))) | g_2) ^ l_908)))) | g_886);
    return p_4;
}
static int8_t func_12(uint32_t p_13, const int16_t p_14, int16_t p_15)
{
    int32_t l_25 = 0x95342363;
    int8_t l_31 = 3;
    int32_t l_887[9] = {0xE67C7FC8,0xE67C7FC8,0xE67C7FC8,0xE67C7FC8,0xE67C7FC8,0xE67C7FC8,0xE67C7FC8,0xE67C7FC8,0xE67C7FC8};
    int i;
    l_887[3] = func_17(p_13, func_21(l_25, l_25, (safe_add_func_int16_t_s_s(((safe_rshift_func_int8_t_s_u(((safe_unary_minus_func_uint32_t_u((l_31 != ((((safe_rshift_func_int16_t_s_s(((((g_2 > 0U) & 1U) | l_25) , l_31), 12)) > p_14) != l_31) , 0x18D7)))) , 0x4E), 3)) , 0xA81F), l_31))), l_25);
    l_887[3] = (g_125 <= (g_117 , (safe_sub_func_uint32_t_u_u((((0x9ED6D21A ^ p_15) > 0x3A6A) != g_619), g_117))));
    return g_2;
}
static int32_t func_17(int32_t p_18, int32_t p_19, uint16_t p_20)
{
    int8_t l_873[2];
    uint32_t l_874 = 0x8214B233;
    uint32_t l_875 = 0xCBFE7F72;
    int i;
    for (i = 0; i < 2; i++)
        l_873[i] = 1;
    l_875 = (((((safe_add_func_int8_t_s_s((safe_add_func_uint8_t_u_u(g_411, (p_19 < (safe_add_func_uint32_t_u_u(g_411, (safe_rshift_func_int16_t_s_u((safe_add_func_int8_t_s_s(g_619, ((safe_rshift_func_int8_t_s_u(((~((-4) || (safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u((((safe_lshift_func_uint16_t_u_u(0U, 10)) | (safe_unary_minus_func_uint32_t_u(0xDB26DBE5))) != (safe_mod_func_int32_t_s_s((safe_mod_func_int16_t_s_s(0x3CB8, (((p_19 <= 0x9B) , 0xE5AB5975) & l_873[1]))), 1))), g_594)), 6)))) < l_873[1]), 4)) <= l_873[1]))), l_874))))))), 0)) <= g_253) & g_125) < (-2)) >= g_2);
    g_886 = (p_19 || (p_18 != (((safe_add_func_int16_t_s_s(l_875, g_594)) == (safe_mod_func_uint16_t_u_u(65535U, ((l_873[0] >= ((safe_sub_func_uint8_t_u_u(g_797, g_619)) , ((safe_lshift_func_uint8_t_u_s((0 && 0xCB), 1)) == 1))) , g_2)))) < p_20)));
    return g_886;
}
static int32_t func_21(uint16_t p_22, const uint32_t p_23, const uint8_t p_24)
{
    uint32_t l_34 = 8U;
    int32_t l_35 = 0x77D900D2;
    uint8_t l_757 = 255U;
    uint16_t l_846 = 0x1139;
    l_34 = g_2;
    l_35 = 0;
    if (func_36((((0x3F <= 0xC3) , g_2) >= ((-1) | (func_42((func_44(p_24, g_2, p_24, l_34) , l_34)) == 0xA515))), p_23, p_23, l_35, g_2))
    {
        int16_t l_725 = 0x94B4;
        l_725 = ((safe_mod_func_int16_t_s_s((((((g_2 ^ (((safe_lshift_func_uint8_t_u_s((safe_sub_func_uint8_t_u_u(g_411, 0x1B)), 7)) ^ (safe_rshift_func_int16_t_s_s(0x4F4B, 6))) < ((safe_add_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u(249U, (g_594 , (safe_rshift_func_int16_t_s_u(p_22, 12))))), ((safe_unary_minus_func_int8_t_s((p_24 >= (((safe_lshift_func_int16_t_s_s(p_23, 14)) <= 0) | p_23)))) || (-3)))) >= 1U))) != p_24) , 0x00CB7D0D) | l_35) || 0), g_619)) == (-1));
    }
    else
    {
        uint16_t l_756 = 0x9CF3;
        int32_t l_758 = 0x39A2CFEE;
        int32_t l_759 = 0x79AFC043;
        int8_t l_760[10] = {2,0,2,0,2,0,2,0,2,0};
        uint16_t l_772 = 1U;
        int32_t l_788 = 0xD862036B;
        int i;
        l_35 = (safe_lshift_func_int8_t_s_u((safe_sub_func_uint16_t_u_u(0U, 65531U)), 3));
        l_758 = (safe_add_func_uint16_t_u_u(p_23, (safe_lshift_func_int16_t_s_u((safe_unary_minus_func_uint16_t_u(((g_2 & ((safe_add_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(((!(((safe_lshift_func_uint8_t_u_u(((((safe_add_func_uint8_t_u_u((((((safe_add_func_int8_t_s_s(((-1) < (safe_unary_minus_func_int8_t_s(((((safe_sub_func_uint8_t_u_u((safe_add_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((((g_411 , (((!((safe_add_func_int16_t_s_s(p_22, ((-1) | 9))) == (((1 || (l_34 == p_23)) != g_619) < l_34))) > l_34) >= p_23)) > g_594) , l_756), l_34)), 0xCD)), p_24)) < g_411) , l_757) == 0x7D)))), p_22)) , l_756) && g_125) , g_619) <= 255U), 3)) > g_2) <= g_594) && (-1)), g_125)) || p_24) , 0xB33DA5E9)) <= g_2), l_756)), (-10))) ^ 0x01B43018)) | 4294967289U))), 6))));
        l_758 = l_759;
        for (g_117 = 1; (g_117 <= 9); g_117 += 1)
        {
            int16_t l_767[10][7][3] = {{{0xD5FA,4,3},{0x1458,(-1),(-1)},{0xD5FA,4,3},{0x1458,0,0},{3,0x4F75,0xD508},{(-1),0,0},{3,0x4F75,0xD508}},{{(-1),0,0},{3,0x4F75,0xD508},{(-1),0,0},{3,0x4F75,0xD508},{(-1),0,0},{3,0x4F75,0xD508},{(-1),0,0}},{{3,0x4F75,0xD508},{(-1),0,0},{3,0x4F75,0xD508},{(-1),0,0},{3,0x4F75,0xD508},{(-1),0,0},{3,0x4F75,0xD508}},{{(-1),0,0},{3,0x4F75,0xD508},{(-1),0,0},{3,0x4F75,0xD508},{(-1),0,0},{3,0x4F75,0xD508},{(-1),0,0}},{{3,0x4F75,0xD508},{(-1),0,0},{3,0x4F75,0xD508},{(-1),0,0},{3,0x4F75,0xD508},{(-1),0,0},{3,0x4F75,0xD508}},{{(-1),0,0},{3,0x4F75,0xD508},{(-1),0,0},{3,0x4F75,0xD508},{(-1),0,0},{3,0x4F75,0xD508},{(-1),0,0}},{{3,0x4F75,0xD508},{(-1),0,0},{3,0x4F75,0xD508},{(-1),0,0},{3,0x4F75,0xD508},{(-1),0,0},{3,0x4F75,0xD508}},{{(-1),0,0},{3,0x4F75,0xD508},{(-1),0,0},{3,0x4F75,0xD508},{(-1),0,0},{3,0x4F75,0xD508},{(-1),0,0}},{{3,0x4F75,0xD508},{(-1),0,0},{3,0x4F75,0xD508},{(-1),0,0},{3,0x4F75,0xD508},{(-1),0,0},{3,0x4F75,0xD508}},{{(-1),0,0},{3,0x4F75,0xD508},{(-1),0,0},{3,0x4F75,0xD5FA},{0,0x1458,0x1458},{0xD508,0x0565,0xD5FA},{0,0x1458,0x1458}}};
            int32_t l_776 = 0x5D4031AD;
            int i, j, k;
            for (l_758 = 2; (l_758 <= 9); l_758 += 1)
            {
                uint32_t l_775 = 1U;
                int32_t l_798 = (-1);
                for (g_125 = 0; (g_125 <= 9); g_125 += 1)
                {
                    int i;
                    if ((((-8) == (safe_sub_func_uint16_t_u_u((((safe_add_func_uint8_t_u_u(((safe_add_func_int16_t_s_s(0x2FE4, ((((l_760[g_117] & (l_767[1][2][0] <= (((((safe_mod_func_uint16_t_u_u(((p_22 & l_767[0][0][2]) == 1), (((0x6275 <= l_760[g_117]) && 0xE2) || l_757))) | l_757) >= g_253) || g_411) ^ 248U))) || 5U) > p_23) <= 0xFD))) >= p_23), l_758)) > g_619) , g_411), 1))) | 0xDD))
                    {
                        g_619 = (((safe_sub_func_int16_t_s_s((((l_772 != 0x2A3D4274) && g_253) & (0 > ((l_757 == (((1U & l_759) >= l_756) != (l_756 ^ g_411))) < 0xED6EB20B))), p_24)) & g_411) , p_22);
                    }
                    else
                    {
                        int32_t l_777 = 0x95F0477A;
                        l_775 = (safe_lshift_func_uint8_t_u_u(l_772, 4));
                        l_776 = 1;
                        l_788 = ((((((-1) && (l_775 < ((((-10) > p_22) | (l_777 < ((p_24 < (safe_sub_func_uint8_t_u_u((((safe_add_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_u(l_767[3][1][0], g_125)), (((safe_lshift_func_uint8_t_u_u(((safe_sub_func_uint8_t_u_u(((l_767[1][2][0] < 0x770EC9E5) && 65535U), l_775)) != g_125), l_775)) >= 0xEC7AB91D) | l_777))) > g_125) > p_22), p_24))) && 0x2468C9C5))) <= g_125))) || p_24) <= p_23) <= p_23) , l_775);
                        if (p_23)
                            break;
                    }
                    return p_22;
                }
                if (((((4294967290U <= l_775) ^ ((l_775 | (safe_rshift_func_uint16_t_u_s((((safe_mod_func_uint16_t_u_u(g_594, (((safe_lshift_func_uint16_t_u_u(g_619, 13)) <= ((-10) > ((((safe_lshift_func_int16_t_s_u(l_757, 2)) != 0x4407) != 0xAC) >= p_24))) , 65529U))) <= p_23) == 6U), p_23))) , l_34)) > g_253) || g_797))
                {
                    g_125 = 0xCC27B372;
                }
                else
                {
                    l_798 = (-3);
                    return p_24;
                }
                l_798 = (((safe_mod_func_int16_t_s_s(((~1) || p_23), p_23)) , (safe_lshift_func_int8_t_s_s((safe_add_func_uint32_t_u_u(l_34, (safe_sub_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_u(l_757, 4)) | (((safe_mod_func_int16_t_s_s((safe_mod_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((((safe_lshift_func_int16_t_s_u(1, 7)) , ((5U == (safe_mod_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s((safe_mod_func_int8_t_s_s((l_35 <= ((safe_mod_func_int8_t_s_s((safe_mod_func_int8_t_s_s(0x35, l_798)), g_619)) == l_767[1][2][0])), l_34)), 6)), g_125))) , 4294967295U)) , 0U), l_798)), 0xE1)), l_798)) || 1U) | g_594)), p_22)))), 7))) ^ p_23);
                if (g_411)
                    break;
            }
        }
    }
    l_35 = (safe_sub_func_uint16_t_u_u((g_2 & (safe_mod_func_uint32_t_u_u(((safe_mod_func_uint8_t_u_u((safe_add_func_int16_t_s_s(p_23, (safe_add_func_int16_t_s_s(((safe_mod_func_uint8_t_u_u(l_35, (safe_rshift_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((safe_add_func_int16_t_s_s(((l_846 <= g_411) , g_411), ((0x9225960E | (safe_rshift_func_uint8_t_u_u(l_846, p_23))) != l_35))), l_757)), p_22)))) <= 0x3AB8), 0xADD4)))), g_117)) < l_846), l_846))), 0x56F2));
    return l_35;
}
static int32_t func_36(uint8_t p_37, int32_t p_38, int32_t p_39, int32_t p_40, uint32_t p_41)
{
    int8_t l_394 = 1;
    uint32_t l_395[3];
    uint16_t l_456 = 1U;
    int32_t l_463 = 0xCCAE6502;
    uint8_t l_567 = 250U;
    int8_t l_620 = 0;
    int32_t l_642 = 5;
    uint32_t l_649 = 3U;
    int32_t l_701 = (-1);
    int i;
    for (i = 0; i < 3; i++)
        l_395[i] = 0x9AFE914E;
    if ((safe_lshift_func_int8_t_s_u((l_394 , g_2), (l_395[2] , 0x6B))))
    {
        uint8_t l_465[5][9][3] = {{{0xFC,0xDE,9U},{0xB5,0xDE,0xBE},{251U,0xAA,0xAA},{7U,9U,0xBE},{0U,249U,9U},{0U,255U,0xDE},{7U,255U,255U},{251U,255U,255U},{0xB5,249U,255U}},{{0xFC,9U,255U},{0xD4,0xAA,0xDE},{0xFC,0xDE,9U},{0xB5,0xDE,0xBE},{251U,0xAA,0xAA},{7U,9U,0xBE},{0U,249U,9U},{0U,255U,0xDE},{7U,255U,255U}},{{251U,255U,255U},{0xB5,249U,255U},{0xFC,9U,255U},{0xD4,0xAA,0xDE},{0xFC,0xDE,9U},{0xB5,0xDE,0xBE},{251U,0xAA,0xAA},{7U,9U,0xBE},{0U,249U,9U}},{{0U,255U,0xDE},{7U,255U,255U},{251U,255U,255U},{0xB5,249U,255U},{0xFC,9U,255U},{0xD4,0xAA,0xDE},{0xFC,0xDE,9U},{0xB5,0xDE,0xBE},{251U,0xAA,0xAA}},{{7U,9U,0xBE},{0U,249U,9U},{0U,255U,0xDE},{7U,255U,255U},{251U,255U,255U},{0xB5,249U,255U},{0xFC,9U,255U},{0xD4,0xAA,0xDE},{0xFC,0xDE,9U}}};
        uint8_t l_466 = 0x9B;
        int32_t l_513[5][7] = {{0x242CA710,0x7DB03E5D,0x7DB03E5D,0x242CA710,0xFFA732BE,1,1},{(-6),(-1),0x0F461358,(-1),(-6),(-1),0x0F461358},{0xFFA732BE,0x242CA710,0x7DB03E5D,0x7DB03E5D,0x242CA710,0xFFA732BE,1},{1,0x6A0E8785,1,(-1),1,0x6A0E8785,1},{0xFFA732BE,0x7DB03E5D,1,0x242CA710,0x242CA710,1,0x7DB03E5D}};
        int i, j, k;
        for (p_39 = 0; (p_39 <= 2); p_39 += 1)
        {
            uint32_t l_441[6][7][1] = {{{4294967295U},{0xCD8F33B5},{4U},{0xCD8F33B5},{4294967295U},{0x5839F482},{4294967295U}},{{0xCD8F33B5},{4U},{0xCD8F33B5},{4294967295U},{4294967292U},{4U},{0x5839F482}},{{0x559C4E1F},{0x5839F482},{4U},{4294967292U},{4U},{0x5839F482},{0x559C4E1F}},{{0x5839F482},{4U},{4294967292U},{4U},{0x5839F482},{0x559C4E1F},{0x5839F482}},{{4U},{4294967292U},{4U},{0x5839F482},{0x559C4E1F},{0x5839F482},{4U}},{{4294967292U},{4U},{0x5839F482},{0x559C4E1F},{0x5839F482},{4U},{4294967292U}}};
            uint32_t l_467[4][6][7] = {{{1U,0xC08CAE39,0x3794DB26,0xE560B90D,0xAE4642CE,1U,0xABF6E8A7},{1U,0xAE4642CE,0xE560B90D,0x3794DB26,0xC08CAE39,1U,4U},{0x5B732AD4,1U,0x31E6C77A,0x3794DB26,0xAE4642CE,0x5B732AD4,4294967286U},{0xD27D1F8E,1U,0xE560B90D,0xE560B90D,1U,0xD27D1F8E,4294967286U},{0x5B732AD4,0xAE4642CE,0x3794DB26,0x31E6C77A,1U,0x5B732AD4,4U},{1U,0xC08CAE39,0x3794DB26,0xE560B90D,0xAE4642CE,1U,0xABF6E8A7}},{{1U,0xAE4642CE,0xE560B90D,0x3794DB26,0xC08CAE39,1U,4U},{0x5B732AD4,1U,0x31E6C77A,0x3794DB26,0xAE4642CE,0x5B732AD4,4294967286U},{0xD27D1F8E,1U,0xE560B90D,0xE560B90D,1U,0xD27D1F8E,4294967286U},{0x5B732AD4,0xAE4642CE,0x3794DB26,0x31E6C77A,1U,0x5B732AD4,4U},{1U,0xC08CAE39,0x3794DB26,0xE560B90D,0xAE4642CE,1U,0xABF6E8A7},{1U,0xAE4642CE,0xE560B90D,0x3794DB26,0xC08CAE39,1U,4U}},{{0x5B732AD4,1U,0x31E6C77A,0x3794DB26,0xAE4642CE,0x5B732AD4,4294967286U},{0xD27D1F8E,1U,0xE560B90D,0xE560B90D,1U,0xD27D1F8E,4294967286U},{0x5B732AD4,0xAE4642CE,0x3794DB26,0x31E6C77A,1U,0x5B732AD4,4U},{1U,0xC08CAE39,0x3794DB26,0xE560B90D,0xAE4642CE,1U,0xABF6E8A7},{1U,0xAE4642CE,0xE560B90D,0x3794DB26,0xC08CAE39,1U,4U},{0x5B732AD4,1U,0x31E6C77A,0x3794DB26,0xAE4642CE,0x5B732AD4,4294967286U}},{{0xD27D1F8E,1U,0xE560B90D,0xE560B90D,1U,0xD27D1F8E,4294967286U},{0x5B732AD4,0xAE4642CE,0x3794DB26,0x31E6C77A,1U,0x5B732AD4,4U},{1U,0xC08CAE39,0x3794DB26,0xE560B90D,0xAE4642CE,1U,0xABF6E8A7},{1U,0xAE4642CE,0xE560B90D,0x3794DB26,0xC08CAE39,1U,4U},{0x5B732AD4,1U,0x31E6C77A,0x3794DB26,0xAE4642CE,0x5B732AD4,1U},{4294967295U,0x6B561A88,4294967286U,4294967286U,0x6B561A88,4294967295U,1U}}};
            const uint32_t l_535 = 0x13DA4405;
            int i, j, k;
            for (g_117 = 0; (g_117 <= 2); g_117 += 1)
            {
                int16_t l_426[9][3][9] = {{{1,0xFC38,0xF34E,0xAF96,3,0xAF96,0xF34E,0xFC38,1},{0xCF93,0x66FC,0,0x66FC,0xCF93,0xCF93,0x66FC,0,0x66FC},{0xF34E,0,0xA20D,0x4219,3,0xFC38,3,0x4219,0xA20D}},{{0xCF93,0xCF93,0x66FC,0,0x66FC,0xCF93,0xCF93,0x66FC,0},{1,0,1,0xFC38,0xF34E,0xAF96,3,0xAF96,0xF34E},{1,0x66FC,0x66FC,1,9,1,0x66FC,0x66FC,1}},{{1,0xFC38,0xA20D,0xFC38,1,0xAE47,0xF34E,0x4219,0xF34E},{0x66FC,9,0,0,9,0x66FC,9,0,0},{1,0xAE47,0xF34E,0x4219,0xF34E,0xAE47,1,0xFC38,0xA20D}},{{1,9,1,0x66FC,0x66FC,1,9,1,0x66FC},{1,0xFC38,0xF34E,0xAF96,3,0xAF96,0xF34E,0xFC38,1},{0xCF93,0x66FC,0,0x66FC,0xCF93,0xCF93,0x66FC,0,0x66FC}},{{0xF34E,0,0xA20D,0x4219,3,0xFC38,3,0x4219,0xA20D},{0xCF93,0xCF93,0x66FC,0,0x66FC,0xCF93,0xCF93,0x66FC,0},{1,0,1,0xFC38,0xF34E,0xAF96,3,0xAF96,0xF34E}},{{1,0x66FC,0x66FC,1,9,1,0x66FC,0x66FC,1},{1,0xFC38,0xA20D,0xFC38,1,0xAE47,0xF34E,0x4219,0xF34E},{0x66FC,9,0,0,9,0x66FC,9,0,0}},{{1,0xAE47,0xF34E,0x4219,0xF34E,0xAE47,1,0xFC38,0xA20D},{1,9,1,0x66FC,0x66FC,1,9,1,0x66FC},{1,0xFC38,0xF34E,0x4219,1,0x4219,1,0xAF96,0xA20D}},{{0x66FC,1,9,1,0x66FC,0x66FC,1,9,1},{1,0xAE47,3,0,1,0xAF96,1,0,3},{0x66FC,0x66FC,1,9,1,0x66FC,0x66FC,1,9}},{{0xA20D,0xAE47,0xA20D,0xAF96,1,0x4219,1,0x4219,1},{0,1,1,0,0xCF93,0,1,1,0},{0xF34E,0xAF96,3,0xAF96,0xF34E,0xFC38,1,0,1}}};
                int i, j, k;
                for (p_38 = 0; (p_38 <= 2); p_38 += 1)
                {
                    int16_t l_410 = 2;
                    uint32_t l_440 = 0xDDC09939;
                    uint32_t l_464 = 0x6010BBA5;
                    for (p_40 = 2; (p_40 >= 0); p_40 -= 1)
                    {
                        int i;
                        g_253 = (safe_add_func_int32_t_s_s((safe_sub_func_int16_t_s_s(((l_395[p_39] | (p_41 , (safe_mod_func_int16_t_s_s(((0xB7 || 0x5E) ^ (safe_add_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u((p_37 | l_394), p_41)), ((p_37 & (safe_add_func_int16_t_s_s(l_410, 6U))) | 0xA3))), g_411))), l_395[0])))) <= 0x8116), g_411)), g_253));
                    }
                    g_125 = (safe_add_func_uint16_t_u_u(((safe_add_func_uint32_t_u_u((((safe_add_func_uint8_t_u_u(p_40, (((safe_lshift_func_uint16_t_u_s(65527U, 4)) , 0xEE09CF0B) != (((safe_sub_func_uint8_t_u_u(((safe_sub_func_uint8_t_u_u(p_41, g_2)) || (0x277425FA > (250U == 0xEE))), (safe_add_func_uint32_t_u_u(0x9F750CC6, g_117)))) || l_426[5][0][7]) & g_253)))) , p_39) && l_395[1]), (-1))) == 1), g_2));
                    if (((((~((-1) | g_2)) != (((+(safe_lshift_func_uint16_t_u_u((0 & (((safe_mod_func_int32_t_s_s(((((g_253 , g_125) | (safe_rshift_func_int8_t_s_u(g_117, (safe_lshift_func_uint16_t_u_s((g_253 < (!((0 | (((((safe_sub_func_int16_t_s_s(p_40, l_426[5][0][7])) > 1U) || 0x43) & l_440) == g_253)) || p_40))), 0))))) >= p_40) , g_117), 0xFA3C9DEE)) ^ l_441[4][3][0]) && p_38)), 3))) & g_411) & 0x4A31)) & g_2) != l_410))
                    {
                        int32_t l_468 = (-1);
                        l_468 = (safe_add_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((((((((safe_rshift_func_uint8_t_u_u((((safe_sub_func_uint8_t_u_u(7U, (safe_rshift_func_int16_t_s_s(p_37, (g_2 <= ((safe_add_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_u((((0xF129 ^ l_456) < ((safe_rshift_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((1 != (((safe_add_func_uint32_t_u_u((l_426[3][1][4] | 0xCD056996), (2 && p_38))) || 0x79) <= 0x2135)), l_463)), l_395[2])) , p_41)) > l_464), l_465[1][3][0])), g_411)) >= g_125)))))) <= 0x7EFAC047) <= l_441[0][2][0]), l_466)) & p_38) < p_38) , 0x569B) & 0) ^ g_253) >= g_411), l_426[5][0][7])), l_467[2][4][4]));
                    }
                    else
                    {
                        uint8_t l_481 = 0x93;
                        g_253 = g_2;
                        p_40 = ((0 <= (p_37 != (safe_mod_func_uint16_t_u_u((+((g_253 ^ ((safe_lshift_func_uint16_t_u_s((l_410 < (((l_441[4][3][0] || (safe_sub_func_int16_t_s_s(0xC35A, 6U))) == (!0x43)) ^ ((((((safe_lshift_func_int16_t_s_u((safe_add_func_int16_t_s_s(((l_463 , 6) == l_481), p_38)), p_41)) || 251U) <= g_2) || g_117) , g_2) , l_466))), 15)) > l_481)) , 0xA7616233)), l_426[8][1][1])))) == l_465[4][3][2]);
                        if (l_410)
                            break;
                        g_253 = (-1);
                    }
                }
                for (g_253 = 2; (g_253 >= 0); g_253 -= 1)
                {
                    uint8_t l_512 = 255U;
                    for (l_394 = 2; (l_394 >= 0); l_394 -= 1)
                    {
                        int16_t l_511 = 0xDBB8;
                        int i, j, k;
                        p_40 = (l_395[l_394] >= (safe_lshift_func_int16_t_s_u((((safe_lshift_func_int8_t_s_s((-1), 7)) != (safe_lshift_func_uint16_t_u_u(l_426[(g_253 + 6)][p_39][g_253], (l_426[(p_39 + 6)][g_117][(p_39 + 3)] , 0xDA1D)))) < ((safe_rshift_func_int8_t_s_s(((l_467[(l_394 + 1)][(p_39 + 1)][(p_39 + 1)] , (p_38 != p_40)) >= (~(p_38 ^ p_41))), p_38)) , 0xA1)), p_41)));
                        l_513[4][4] = (safe_unary_minus_func_int32_t_s(((((l_467[0][0][5] , (+(((((safe_rshift_func_int16_t_s_u(((((l_395[2] , 1) , (safe_lshift_func_int8_t_s_u(l_426[5][0][7], (((safe_lshift_func_int16_t_s_u(((((safe_sub_func_uint16_t_u_u((l_465[0][8][0] , (safe_lshift_func_int8_t_s_u((((safe_add_func_uint32_t_u_u(((g_125 != ((g_253 > (safe_mod_func_int32_t_s_s((safe_lshift_func_int8_t_s_s(g_2, 5)), ((safe_sub_func_int16_t_s_s(((p_41 & g_125) <= l_465[1][3][0]), l_511)) & p_38)))) && 0xECC8)) == 0xEB), 0x39056554)) && l_394) != l_512), 5))), l_395[1])) && l_456) > g_125) ^ l_426[5][0][7]), p_39)) ^ g_253) > p_37)))) == l_466) == 0x6527), g_117)) && 1U) != l_513[4][4]) < p_39) == g_2))) && p_41) || l_456) , l_512)));
                        if (l_426[5][0][7])
                            break;
                    }
                }
            }
            for (l_394 = 2; (l_394 >= 0); l_394 -= 1)
            {
                int8_t l_520[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_520[i] = 6;
                for (l_466 = 0; (l_466 <= 2); l_466 += 1)
                {
                    for (p_40 = 0; (p_40 <= 2); p_40 += 1)
                    {
                        int i;
                        g_125 = (l_395[p_39] <= 248U);
                    }
                }
                g_125 = (0xA989C91A | (safe_add_func_int32_t_s_s(((((((l_456 & (safe_sub_func_uint32_t_u_u((((-1) >= g_253) ^ (safe_lshift_func_int8_t_s_s((l_520[1] > (safe_rshift_func_uint8_t_u_s((safe_sub_func_int8_t_s_s((g_117 , 0x2D), (((safe_rshift_func_int16_t_s_s((((((g_411 != (safe_mod_func_int8_t_s_s((g_117 , l_513[3][5]), g_2))) > 0) , 1) || g_2) & 0xCF), l_466)) , g_2) || 65529U))), g_117))), l_513[4][4]))), g_117))) && l_394) >= l_520[1]) < 0xD9760A13) ^ g_117) & 0U), 0x0E1D867E)));
                if ((((safe_add_func_uint32_t_u_u(((g_117 || (p_38 || (safe_lshift_func_uint16_t_u_u((l_535 ^ (p_37 <= (p_39 && (l_467[3][1][0] != 4294967287U)))), 4)))) == (safe_rshift_func_int16_t_s_s(((safe_add_func_uint32_t_u_u((((g_253 && ((safe_sub_func_int16_t_s_s((-4), 0xEDC7)) & g_117)) != g_125) , 4294967286U), g_2)) != p_41), 14))), 0xD4E597F0)) | 0x32) == l_467[2][4][4]))
                {
                    return p_38;
                }
                else
                {
                    return g_411;
                }
            }
        }
    }
    else
    {
        int32_t l_569 = (-1);
        int32_t l_585 = (-8);
        for (p_39 = 0; (p_39 >= 6); p_39++)
        {
            for (p_38 = 0; (p_38 != (-17)); --p_38)
            {
                int32_t l_566 = 1;
                const uint32_t l_568 = 0U;
                g_125 = 1;
                if (g_2)
                    break;
                g_253 = (((((safe_sub_func_uint8_t_u_u((0x4C <= 9), ((safe_sub_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s((safe_sub_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(((safe_sub_func_int32_t_s_s(0x0E8EC2CF, g_125)) >= ((g_411 , (safe_sub_func_int8_t_s_s((safe_add_func_uint32_t_u_u((p_37 & (0x41C6 < (safe_unary_minus_func_int8_t_s((((((p_37 > (((safe_unary_minus_func_int16_t_s((((l_395[2] , 0U) | g_2) > p_39))) > 4294967290U) , g_411)) < l_566) , p_37) == l_567) , (-1)))))), g_125)), 0U))) , 1U)), l_568)), l_568)), p_37)), p_37)) & g_411))) & g_117) != p_39) && p_39) , l_569);
            }
            p_40 = (safe_rshift_func_int8_t_s_s((safe_unary_minus_func_int16_t_s(l_456)), 3));
            for (p_38 = 0; (p_38 <= 2); p_38 += 1)
            {
                int i;
                l_463 = (0xF361 || (((((5 >= (safe_lshift_func_uint8_t_u_u(l_395[p_38], (safe_rshift_func_int16_t_s_u(0xF8B0, (((-5) || (((safe_mod_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(((safe_add_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_u((((l_456 >= p_40) == l_585) && (safe_mod_func_uint8_t_u_u(((safe_mod_func_int16_t_s_s((safe_add_func_uint16_t_u_u(((safe_add_func_uint32_t_u_u(4294967286U, g_125)) <= 0x8AAA3B37), 1)), p_37)) >= g_253), p_37))), g_117)) && g_594), g_125)) < l_463), g_253)), g_594)) || l_585) < p_41)) & 65535U)))))) ^ g_253) < 4294967295U) < 0U) || g_253));
            }
        }
        l_569 = ((((g_594 > (((~l_567) >= (((((safe_rshift_func_int16_t_s_s((((g_2 , ((+(~(safe_unary_minus_func_uint16_t_u((safe_add_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(l_585, (~(0x25 | (safe_add_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(((((((safe_mod_func_int16_t_s_s((((safe_mod_func_int32_t_s_s((((safe_unary_minus_func_uint8_t_u(((((((safe_sub_func_int16_t_s_s(1, (((p_39 == (((0 != ((((safe_rshift_func_uint16_t_u_u(g_253, p_37)) > p_39) , p_39) || l_394)) != g_117) && 0x1EAC)) , (-8)) < g_619))) == 1) , l_569) || p_41) , g_594) != g_411))) ^ l_394) || g_253), g_117)) ^ g_2) & 7), l_585)) & p_40) & 0x2A15) || 65526U) < 1) && p_38), 1)), l_569)))))), g_2)))))) < p_37)) , g_117) || p_41), l_395[2])) > g_253) , g_619) ^ p_38) , g_253)) == p_40)) ^ g_594) != 0xC945) ^ 0x5289B28D);
        p_40 = (-1);
    }
    p_40 = l_620;
    if ((safe_add_func_uint32_t_u_u(0xEC077EBA, ((safe_mod_func_uint16_t_u_u(g_411, g_411)) > (l_463 <= ((safe_add_func_uint32_t_u_u(p_39, (p_37 , (g_117 >= ((((~(((safe_rshift_func_uint16_t_u_s((0x4C1F0387 == l_463), 6)) , 0U) , g_117)) && l_395[1]) , g_253) && p_39))))) & l_620))))))
    {
        uint8_t l_630 = 255U;
        int16_t l_673 = 0xBFB1;
        uint32_t l_681 = 0U;
        l_630 = 1;
        p_40 = ((65533U < g_411) >= ((p_41 || (((((safe_add_func_int8_t_s_s((((!((safe_lshift_func_uint8_t_u_s((safe_sub_func_int32_t_s_s(l_630, 0xFC97C912)), 7)) , 65532U)) | ((((safe_lshift_func_uint8_t_u_u(((safe_sub_func_int32_t_s_s((l_642 & (safe_sub_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_s((0xC455BB3A > (safe_rshift_func_int16_t_s_u(((g_125 , 0x82) == l_630), 6))), g_125)) && 65533U), p_37))), l_649)) && g_117), 2)) , 0xF57EACDE) , 0) , g_619)) ^ l_630), l_630)) , l_395[2]) <= p_41) == 0) , p_41)) && 65526U));
        l_463 = (safe_rshift_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_u(0, 3)) ^ ((safe_rshift_func_int16_t_s_u(((((safe_lshift_func_int8_t_s_u(((safe_add_func_uint8_t_u_u(((((safe_sub_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_s(l_630, ((safe_lshift_func_int8_t_s_s((l_630 | (safe_rshift_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((((safe_mod_func_int32_t_s_s((+g_594), (l_673 && (g_2 || (safe_sub_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((+((0xA9 & ((((safe_lshift_func_uint8_t_u_u((l_681 || ((safe_add_func_uint8_t_u_u(255U, p_38)) >= (-1))), g_253)) <= l_620) , g_594) != p_40)) || p_40)), 1)), 1U)))))) | g_117) == l_394), p_40)), 0))), 6)) & l_681))) >= p_39), l_456)) , g_125) >= g_411) , 0x06), (-1))) ^ 1), 7)) && 0xF5ECCF91) | 1U) <= g_619), p_40)) , 0x0211B9D0)), 5));
    }
    else
    {
        int16_t l_698 = 0x9A08;
        p_40 = (safe_sub_func_int8_t_s_s(p_40, ((250U != (((safe_rshift_func_uint8_t_u_u((((safe_mod_func_uint16_t_u_u(l_394, ((((p_38 <= 0x54239C46) > (safe_add_func_int32_t_s_s(((safe_mod_func_uint16_t_u_u((1 == (0x38 <= ((safe_mod_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(l_698, (safe_mod_func_int32_t_s_s(p_38, p_40)))), l_698)) <= p_39))), g_253)) && 1), 0x2F155644))) > l_456) && 1))) ^ l_701) <= g_594), 6)) != l_395[2]) , 0xB0)) && p_40)));
        g_125 = l_698;
        return l_698;
    }
    g_125 = ((safe_unary_minus_func_uint32_t_u((p_41 < (safe_lshift_func_int16_t_s_s(g_411, ((6 >= 0xF83B) , (safe_sub_func_uint16_t_u_u(l_395[0], ((((p_38 , (!g_594)) || 0x078D1F93) & ((g_594 ^ p_39) == l_463)) | 0))))))))) & l_394);
    return p_39;
}
static int16_t func_42(int32_t p_43)
{
    int32_t l_391 = 0x4282519B;
    l_391 = (safe_lshift_func_int8_t_s_u(g_117, ((safe_add_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((safe_mod_func_int32_t_s_s(g_253, ((safe_rshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((0x36 <= p_43), 6)), 3)) || p_43))), (safe_mod_func_uint32_t_u_u(p_43, (safe_lshift_func_uint16_t_u_s(((safe_rshift_func_int16_t_s_s(0xA691, 5)) & (((safe_sub_func_int16_t_s_s(p_43, ((((g_2 , 0x3F) && l_391) , g_117) >= 0xD9))) != l_391) ^ l_391)), g_117)))))), g_2)) ^ 4)));
    return g_2;
}
static uint32_t func_44(const uint16_t p_45, uint16_t p_46, uint16_t p_47, int16_t p_48)
{
    uint32_t l_49 = 0xB95DFEA4;
    int32_t l_67 = (-3);
    l_67 = (l_49 == (safe_add_func_int16_t_s_s(((func_52(g_2, func_56((((safe_mod_func_int32_t_s_s(((safe_lshift_func_int16_t_s_s(0x49BA, 14)) <= (safe_sub_func_int16_t_s_s((!p_45), (safe_lshift_func_int8_t_s_u((((l_67 > p_46) <= ((safe_sub_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((((safe_mod_func_uint32_t_u_u(l_49, l_49)) , (((p_47 ^ 0x5ED3) , 1) || 4U)) > 65535U), g_2)), p_47)) >= 0x36DE)) , 4), 3))))), 0x5EE2CBD0)) >= l_49) & p_46)), g_2) , g_2) || p_47), l_49)));
    g_253 = g_2;
    g_253 = (safe_rshift_func_int8_t_s_u(1, ((g_117 , (!(safe_mod_func_uint32_t_u_u((((l_67 ^ ((0x7CDD & ((safe_sub_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_s((g_125 == 0xC0), (safe_rshift_func_int16_t_s_u((((safe_add_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((g_117 >= ((safe_mod_func_uint16_t_u_u(((0 <= ((g_253 & l_49) > 0x2ED2992F)) <= l_49), l_49)) <= 0xAEB5FE0E)), p_45)), p_47)) == l_67) == l_49), p_45)))) < 0U), l_67)) && 0xC5E9977F)) ^ 0xC1)) == p_48) ^ l_67), p_47)))) == p_47)));
    return l_49;
}
static uint16_t func_52(int8_t p_53, uint32_t p_54, uint32_t p_55)
{
    return p_54;
}
static uint32_t func_56(int8_t p_57)
{
    int16_t l_86[7][9] = {{1,0,0,0xBC84,0x7BCD,0,0,(-9),0},{0,0xB302,0x2732,1,1,(-10),0x864C,(-1),(-1)},{1,(-1),1,0xB302,(-4),0xB302,1,(-1),1},{(-10),8,(-1),(-4),0xADFE,(-1),0xF95D,(-9),0x864C},{(-1),0,(-1),0,(-10),0x8FFC,0,1,(-1)},{(-10),0xADFE,0xF95D,(-1),(-1),0xBC84,(-1),0xBC84,(-1)},{1,0xF95D,0xF95D,1,0,1,(-10),0x864C,0}};
    int32_t l_89 = 0x8A2B653F;
    int32_t l_98 = 0x395F0F14;
    uint32_t l_190 = 4294967293U;
    uint32_t l_191 = 0x12477A05;
    int32_t l_200 = 0x62820C09;
    uint32_t l_230[8] = {0x22959070,0x22959070,0x22959070,0x22959070,0x22959070,0x22959070,0x22959070,0x22959070};
    uint32_t l_349[8][1][9] = {{{6U,4294967295U,0U,0x076C08D8,4294967295U,0xE3F350D2,0x57342A22,0xE760D366,1U}},{{6U,0x3A933DB2,3U,0x076C08D8,0x3A933DB2,4294967290U,0x57342A22,4294967295U,0x57342A22}},{{6U,0xE760D366,0x076C08D8,0x076C08D8,0xE760D366,6U,0x57342A22,0x3A933DB2,4294967293U}},{{6U,4294967295U,0U,0x076C08D8,4294967295U,0xE3F350D2,0x57342A22,0xE760D366,1U}},{{6U,0x3A933DB2,3U,0x076C08D8,0x3A933DB2,4294967290U,0x57342A22,4294967295U,0x57342A22}},{{6U,0xE760D366,0x076C08D8,0x076C08D8,0xE760D366,6U,0x57342A22,0x3A933DB2,4294967293U}},{{6U,4294967295U,0U,0x076C08D8,4294967295U,0x35C31475,0U,0U,3U}},{{4294967288U,3U,7U,0x86BC35C1,3U,4294967295U,0U,0x076C08D8,0U}}};
    int i, j, k;
    l_89 = (safe_rshift_func_uint8_t_u_u((g_2 < (((0x4B | (safe_lshift_func_uint8_t_u_u(p_57, (safe_lshift_func_int16_t_s_s((((65528U >= ((((safe_add_func_int32_t_s_s(p_57, (((safe_mod_func_int32_t_s_s((((((safe_sub_func_uint16_t_u_u((l_86[2][7] == p_57), (((((((safe_rshift_func_int8_t_s_s(l_86[5][7], (l_86[2][7] & 0xE685))) , p_57) == 0x8566) & 7) ^ g_2) == 0x1463D90B) == (-1)))) ^ 1U) && 0) | l_86[2][7]) || p_57), 0x20B1A556)) | p_57) || g_2))) & l_86[0][2]) | l_86[2][7]) | g_2)) , g_2) <= 0x23), l_86[2][7]))))) <= 0x7E) & 0xBB)), p_57));
    for (l_89 = 0; (l_89 <= 6); l_89 += 1)
    {
        uint8_t l_97 = 1U;
        int32_t l_99[5] = {0x68FEE394,0x68FEE394,0x68FEE394,0x68FEE394,0x68FEE394};
        int i;
        for (p_57 = 6; (p_57 >= 0); p_57 -= 1)
        {
            uint16_t l_92 = 1U;
            l_99[4] = ((safe_mod_func_int32_t_s_s((((l_92 < (safe_rshift_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(0x75C3, 0x8131)), l_86[1][4]))) && l_97) ^ g_2), 0x947660C9)) > ((((((g_2 ^ (-10)) || l_92) , g_2) , l_89) != l_98) && g_2));
        }
        for (p_57 = 1; (p_57 <= 6); p_57 += 1)
        {
            uint32_t l_122 = 0xE863DC2C;
            int32_t l_156 = (-5);
            for (l_98 = 6; (l_98 >= 1); l_98 -= 1)
            {
                int16_t l_114[2][9] = {{(-5),1,0x79EB,0xB423,0x79EB,1,(-5),(-5),1},{0xB423,1,(-1),1,0xB423,0,0,0xB423,1}};
                int i, j;
                g_117 = (safe_lshift_func_int16_t_s_s((((3 != 65535U) , ((safe_mod_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((p_57 > ((safe_add_func_int16_t_s_s(g_2, (safe_mod_func_int16_t_s_s((safe_add_func_uint8_t_u_u(((safe_add_func_int8_t_s_s(g_2, (((((((l_114[0][6] , (safe_sub_func_uint16_t_u_u(l_114[0][6], (p_57 < (g_2 && l_114[0][6]))))) & 0x6520) <= g_2) == p_57) && 0x1E8D) , 0x70AE) ^ g_2))) && p_57), l_89)), g_2)))) , l_98)), 0x07BB)), p_57)) <= p_57)) || p_57), 9));
                g_125 = (((((((safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(((l_99[4] == (l_86[5][4] ^ ((l_89 == (l_122 > 0)) == (((safe_mod_func_int8_t_s_s(p_57, l_114[1][6])) < l_114[1][8]) == ((p_57 | 0x09) , g_2))))) , 0xCD), l_89)), 9)) ^ l_99[2]) != g_117) > l_122) , p_57) != 0x142B0CC6) <= g_2);
                if (g_2)
                {
                    const uint32_t l_134[9][10][2] = {{{0x4636B982,0x4636B982},{4294967290U,1U},{0x48F47512,4294967288U},{4294967292U,4294967290U},{0x22DCD2DC,4294967292U},{0x8CF04115,0U},{0x8CF04115,4294967292U},{0x22DCD2DC,4294967290U},{4294967292U,4294967288U},{0x48F47512,1U}},{{4294967290U,0x4636B982},{0x4636B982,0x4636B982},{4294967290U,1U},{0x48F47512,4294967288U},{4294967292U,4294967290U},{0x22DCD2DC,4294967292U},{0x8CF04115,0U},{0x8CF04115,4294967292U},{0x22DCD2DC,4294967290U},{4294967292U,4294967288U}},{{0x48F47512,1U},{4294967290U,0x4636B982},{0x4636B982,0x4636B982},{4294967290U,1U},{0x48F47512,4294967288U},{4294967292U,4294967290U},{0x22DCD2DC,4294967292U},{0x8CF04115,0U},{0x8CF04115,4294967292U},{0x22DCD2DC,4294967290U}},{{4294967292U,4294967288U},{0x48F47512,1U},{4294967290U,0x4636B982},{0x4636B982,0x4636B982},{4294967290U,1U},{0x48F47512,4294967288U},{4294967292U,4294967290U},{0x22DCD2DC,4294967292U},{0x8CF04115,0U},{0x8CF04115,4294967292U}},{{0x22DCD2DC,4294967290U},{4294967292U,4294967288U},{0x48F47512,1U},{4294967290U,0x4636B982},{0x4636B982,0x4636B982},{4294967290U,1U},{0x48F47512,4294967288U},{4294967292U,4294967290U},{0x22DCD2DC,4294967292U},{0x8CF04115,0U}},{{0x8CF04115,4294967292U},{0x22DCD2DC,4294967290U},{4294967292U,4294967288U},{0x48F47512,1U},{4294967290U,0x4636B982},{0x4636B982,0x4636B982},{4294967290U,1U},{0x48F47512,4294967288U},{4294967292U,4294967290U},{0x22DCD2DC,4294967292U}},{{0x8CF04115,0U},{0x8CF04115,4294967292U},{0x22DCD2DC,4294967290U},{4294967292U,4294967288U},{0x48F47512,1U},{4294967290U,0x4636B982},{0x4636B982,0x4636B982},{4294967290U,1U},{0x48F47512,4294967288U},{4294967292U,4294967290U}},{{0x22DCD2DC,4294967292U},{0x8CF04115,0U},{0x8CF04115,4294967292U},{0x22DCD2DC,4294967290U},{4294967292U,4294967288U},{0x48F47512,1U},{4294967290U,0x4636B982},{0x4636B982,4294967295U},{0x4636B982,4294967290U},{0x8CF04115,0x22DCD2DC}},{{0U,0x4636B982},{0x48F47512,0U},{1U,0xC20038BE},{1U,0U},{0x48F47512,0x4636B982},{0U,0x22DCD2DC},{0x8CF04115,4294967290U},{0x4636B982,4294967295U},{4294967295U,4294967295U},{0x4636B982,4294967290U}}};
                    uint8_t l_155 = 1U;
                    int32_t l_165[1];
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                        l_165[i] = 0x7EDD3F16;
                    g_125 = ((safe_sub_func_uint16_t_u_u((l_122 > 2), (((((((((((g_2 >= (((p_57 , 0xA64C) , 1) <= (((((+(safe_mod_func_int16_t_s_s((safe_sub_func_int32_t_s_s((p_57 , l_122), (+((((g_117 & 1U) ^ p_57) != p_57) == p_57)))), p_57))) , l_134[5][5][1]) || l_134[5][5][1]) || 0x8194) ^ 0xD1))) , 0x295F) & l_122) | 0x70C1) ^ g_2) , 0x6E) <= 0xB4) != l_114[1][6]) >= p_57) | (-1)) , g_117))) , g_125);
                    l_156 = (safe_rshift_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_u(0x50E2, 9)), ((safe_sub_func_int32_t_s_s((((0xDC | (p_57 & ((4294967294U == (safe_add_func_int8_t_s_s((p_57 , (p_57 , (+(g_125 , (safe_mod_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u((((p_57 && (+(safe_sub_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(g_125, 2)), l_114[0][6])))) | p_57) >= l_155), 5)), g_2)))))), g_117))) || p_57))) > p_57) , 0xD5444549), 0x6149A46C)) >= p_57))) , 4U), 15));
                    l_165[0] = (safe_mod_func_int16_t_s_s(1, (safe_unary_minus_func_uint16_t_u((safe_rshift_func_int16_t_s_u(((safe_lshift_func_uint8_t_u_u(0xCA, 2)) && 0x64288929), (safe_unary_minus_func_int32_t_s(p_57))))))));
                }
                else
                {
                    uint32_t l_171[7];
                    int i;
                    for (i = 0; i < 7; i++)
                        l_171[i] = 0xFA8AF15E;
                    l_156 = (((~(((((safe_mod_func_uint16_t_u_u((((safe_add_func_uint8_t_u_u((l_171[6] < (safe_add_func_uint32_t_u_u((safe_add_func_int16_t_s_s((safe_add_func_int16_t_s_s(l_99[4], (safe_sub_func_uint32_t_u_u((1 | (0 <= (!((safe_mod_func_int16_t_s_s((((!((safe_add_func_uint8_t_u_u((0x9E ^ l_89), p_57)) == (((0x91C2 | (g_125 > (-9))) != p_57) == g_125))) ^ l_156) ^ g_117), l_171[6])) || p_57)))), l_171[1])))), p_57)), p_57))), (-7))) ^ l_156) > p_57), 8)) > l_97) , p_57) && g_125) && l_97)) <= l_86[1][1]) >= p_57);
                }
            }
            for (l_97 = 0; (l_97 <= 6); l_97 += 1)
            {
                int32_t l_218 = 1;
                int16_t l_229 = 0x237C;
                uint32_t l_254 = 0xF36FFF55;
                l_191 = (p_57 <= ((safe_sub_func_int8_t_s_s(((g_125 & l_98) <= ((((((g_125 || g_125) , p_57) , l_190) < 0xDF67) & (g_117 | 4U)) > 1)), g_2)) != 0U));
                l_200 = ((((((safe_sub_func_int8_t_s_s((g_2 || ((((((((((65531U < ((0xBB7F | (safe_lshift_func_int16_t_s_u(0x0227, (safe_unary_minus_func_uint16_t_u((l_156 , (~p_57))))))) <= p_57)) != (safe_lshift_func_uint16_t_u_s(p_57, (0x3B64E573 > g_117)))) , g_117) == l_97) == 0xB4) | 0U) < g_125) == 1) < 1) >= g_2)), 0x37)) && p_57) >= l_99[4]) > 3) > p_57) & 0x4E);
                if ((l_99[3] || (((l_156 > (((p_57 > ((((((+((safe_lshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(p_57, ((((safe_rshift_func_uint8_t_u_s(((((safe_rshift_func_uint16_t_u_s((safe_add_func_uint32_t_u_u(g_117, (safe_add_func_int16_t_s_s((l_218 == p_57), (safe_rshift_func_uint8_t_u_s((safe_mod_func_uint16_t_u_u(65526U, (safe_sub_func_int32_t_s_s(((safe_lshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_s((0xC6 | 0xFD), 13)), g_117)) != 0xCEB6DB73), l_99[4])))), l_229)))))), 8)) >= g_117) , l_218) <= g_125), 7)) | l_230[6]) > p_57) & g_2))), g_125)), g_125)), 4)) != p_57)) ^ g_125) || l_97) , l_229) > g_2) , l_229)) , g_117) != l_86[2][7])) <= l_218) || 0x18)))
                {
                    int8_t l_233 = (-3);
                    if (g_117)
                    {
                        int32_t l_232 = 0x762014B1;
                        g_125 = (!l_232);
                        g_125 = (0xFDE0 || l_233);
                        g_125 = g_2;
                        l_99[4] = (safe_lshift_func_uint8_t_u_s((safe_sub_func_uint32_t_u_u((safe_sub_func_int16_t_s_s((safe_add_func_int16_t_s_s(((safe_mod_func_int16_t_s_s(0x4BD8, (0xD19F9CDA || 0xF3F7CD45))) >= 65528U), ((safe_add_func_uint32_t_u_u((g_125 == (safe_add_func_int16_t_s_s(p_57, ((+((safe_mod_func_int8_t_s_s(l_156, ((safe_lshift_func_int16_t_s_s(g_2, 1)) , (((((g_117 & g_125) , l_229) >= p_57) , 0U) , g_253)))) > l_233)) & l_89)))), l_254)) && g_253))), p_57)), l_99[4])), l_233));
                    }
                    else
                    {
                        uint32_t l_261 = 0x3169765F;
                        l_156 = (((((!(-1)) ^ ((((safe_unary_minus_func_uint8_t_u((p_57 ^ l_254))) , (8 || 1U)) ^ ((safe_sub_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s(g_2, (1 <= l_261))), 1)) , l_261)) > l_97)) ^ 0x92) & l_122) == 0xB0BCA765);
                    }
                }
                else
                {
                    uint8_t l_293 = 254U;
                    uint8_t l_305 = 0xF0;
                    uint8_t l_316 = 0x04;
                    l_99[4] = (g_253 , (safe_add_func_int8_t_s_s(p_57, (0x0926 < p_57))));
                    for (l_190 = 0; (l_190 <= 6); l_190 += 1)
                    {
                        uint8_t l_306 = 6U;
                        int32_t l_321 = 0x6D9E332C;
                        int i, j;
                        g_253 = (safe_add_func_int16_t_s_s((l_86[l_190][l_97] | (!(!(safe_unary_minus_func_int16_t_s((!(safe_rshift_func_int8_t_s_u(((((((((safe_add_func_int32_t_s_s(((p_57 & g_125) < ((safe_rshift_func_uint16_t_u_u(((safe_add_func_uint8_t_u_u(p_57, (((!(0xD2 | (((g_253 > ((safe_lshift_func_int8_t_s_s(((safe_sub_func_uint32_t_u_u((safe_mod_func_int16_t_s_s(((((((safe_mod_func_int32_t_s_s(l_86[l_190][l_97], (safe_lshift_func_int8_t_s_u(((p_57 || (safe_sub_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((p_57 > p_57), g_253)), (-1)))) == g_117), g_2)))) != p_57) == l_293) && l_293) & g_125) & p_57), 0x6B15)), p_57)) ^ l_86[l_190][l_97]), 3)) & p_57)) == g_117) > 0U))) || 7) > g_253))) | 0xAD0AE36D), 11)) >= 0U)), 1)) > p_57) || 0xDF) && p_57) <= p_57) || l_86[l_190][l_97]) ^ 0xCB) == g_125), 5)))))))), 0x6348));
                        l_306 = (7 < (safe_add_func_uint8_t_u_u((((safe_sub_func_int16_t_s_s(l_89, ((safe_mod_func_uint8_t_u_u(g_117, ((((((((p_57 >= ((((0U ^ (0x88 && p_57)) ^ ((((safe_sub_func_uint16_t_u_u(((l_122 | ((~(((safe_mod_func_int32_t_s_s(g_253, p_57)) >= 250U) == 1)) ^ g_125)) , g_2), 0U)) , l_254) , g_253) , l_293)) <= g_117) >= l_218)) , p_57) >= p_57) == g_2) | 255U) , 9U) == p_57) || g_2))) , g_117))) > l_254) | l_305), g_2)));
                        l_99[2] = (((g_2 & 0x2C48) , ((safe_mod_func_uint8_t_u_u((((safe_add_func_int8_t_s_s(p_57, (0 <= (g_125 > 255U)))) && (safe_mod_func_uint32_t_u_u(((l_229 | (!(((0x2318213D != ((((safe_lshift_func_uint8_t_u_u(g_117, l_254)) == l_98) >= g_125) , 0U)) || 0x5B06) , g_117))) > 4294967295U), l_316))) , 0x99), g_253)) | g_125)) < 0x9FBA2D40);
                        l_321 = (((safe_rshift_func_uint16_t_u_s((safe_add_func_int8_t_s_s(((((g_2 > g_125) | ((((l_305 && ((g_2 > (p_57 ^ ((p_57 >= ((g_117 || p_57) && 0x009605B7)) >= l_156))) <= g_117)) & p_57) < 0x1D59) != 0U)) != g_2) || 0x97FFBABD), p_57)), 0)) > g_253) , p_57);
                    }
                }
            }
        }
    }
    for (g_253 = 0; (g_253 >= (-25)); --g_253)
    {
        int8_t l_328 = 0x25;
        uint16_t l_337 = 65530U;
        int32_t l_350 = 1;
        l_200 = (((0U >= (g_2 , (((safe_mod_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s(l_328, 0)), 0x59CE884C)) | ((l_86[4][3] & ((safe_lshift_func_int8_t_s_u((safe_add_func_uint32_t_u_u(g_253, ((((((safe_sub_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(1U, ((((p_57 , g_253) < p_57) < 0) == l_328))), 0x997F)) , l_337) ^ (-5)) || p_57) , 0x61AB) , l_86[2][7]))), g_117)) & g_2)) <= 252U)) ^ p_57))) < 1U) == 2U);
        g_125 = (~((g_2 > ((safe_lshift_func_int16_t_s_u(g_253, 6)) >= (((((safe_lshift_func_uint16_t_u_u((p_57 && (safe_add_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u(0xB0ED, 0U)) <= (safe_sub_func_uint32_t_u_u((l_328 ^ l_230[3]), (l_200 && ((p_57 && 0xC6F29780) >= l_190))))), g_253))), 12)) , g_117) || l_337) >= l_98) && l_230[6]))) != 0x7101F397));
        l_350 = l_349[5][0][3];
        for (l_191 = 0; (l_191 < 6); l_191 = safe_add_func_uint8_t_u_u(l_191, 7))
        {
            uint32_t l_353 = 1U;
            l_353 = (-7);
        }
    }
    return g_125;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_2;
    csmith_sink_ = g_117;
    csmith_sink_ = g_125;
    csmith_sink_ = g_253;
    csmith_sink_ = g_411;
    csmith_sink_ = g_594;
    csmith_sink_ = g_619;
    csmith_sink_ = g_797;
    csmith_sink_ = g_886;
    platform_main_end(0,0);
    return 0;
}
