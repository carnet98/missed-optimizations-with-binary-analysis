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
static uint32_t g_20 = 1U;
static uint8_t g_60 = 253U;
static int16_t g_79 = 2;
static int16_t g_82 = 0x5D26;
static uint8_t g_189 = 255U;
static int8_t g_241 = (-1);
static int8_t g_305 = 0;
static uint32_t g_306 = 0x47ABF410;
static uint32_t g_323 = 4294967292U;
static uint8_t g_357 = 255U;
static uint16_t g_393 = 0x24DF;
static int32_t g_394 = 0;
static uint32_t g_395 = 0x62369411;
static int32_t g_406 = (-1);
static int16_t g_513 = (-1);
static int8_t g_607 = 0x72;
static uint8_t g_739 = 0U;
static const int16_t g_813 = (-1);
static int8_t g_816 = 1;
static uint32_t g_862 = 0U;
static const uint32_t g_908 = 0U;
static const uint8_t g_962 = 0x01;
static int16_t g_1062 = 0x47C9;
static uint32_t g_1080 = 8U;
static uint16_t g_1181 = 1U;
static int32_t g_1255 = (-10);
inline static int8_t func_1(void);
inline static const int32_t func_2(int8_t p_3);
static int32_t func_6(int32_t p_7, uint16_t p_8);
inline static uint32_t func_17(uint16_t p_18, uint32_t p_19);
inline static int32_t func_23(uint16_t p_24, int32_t p_25);
inline static int32_t func_46(uint32_t p_47, uint8_t p_48);
inline static uint8_t func_61(int32_t p_62, int8_t p_63);
inline static int32_t func_71(int8_t p_72, uint32_t p_73, uint16_t p_74, int16_t p_75);
inline static int8_t func_76(uint32_t p_77, uint16_t p_78);
static int32_t func_111(uint32_t p_112, int16_t p_113, int32_t p_114, int32_t p_115);
inline static int8_t func_1(void)
{
    uint8_t l_9 = 7U;
    uint32_t l_22 = 0x85E0710D;
    g_1255 = func_2((safe_div_func_int32_t_s_s((func_6(l_9, l_9) <= 0x3921DED6), (safe_mod_func_int16_t_s_s((safe_add_func_int32_t_s_s(0x9EDBDA7F, (safe_sub_func_int32_t_s_s(l_9, func_17(g_20, (g_20 == ((+(g_20 ^ l_22)) | l_22))))))), g_962)))));
    return l_22;
}
inline static const int32_t func_2(int8_t p_3)
{
    int16_t l_1253 = 4;
    const int8_t l_1254 = 0xFE;
    g_406 = l_1253;
    return l_1254;
}
static int32_t func_6(int32_t p_7, uint16_t p_8)
{
    uint32_t l_10 = 0U;
    return l_10;
}
inline static uint32_t func_17(uint16_t p_18, uint32_t p_19)
{
    int8_t l_1222 = 0x0A;
    int32_t l_1229 = 1;
    int32_t l_1230 = (-1);
    int32_t l_1231 = 0x5C98CB16;
    int8_t l_1234 = 0xD7;
    uint8_t l_1250 = 0x32;
    int32_t l_1251 = 0x492B7BB6;
    uint16_t l_1252 = 0xB75D;
    l_1222 = func_23(p_19, g_20);
    l_1251 = ((safe_rshift_func_int16_t_s_s((safe_mod_func_uint8_t_u_u((0xEF && (safe_mod_func_uint8_t_u_u((l_1230 = l_1229), ((l_1231 = g_394) || (safe_lshift_func_int8_t_s_s((l_1234 = p_19), ((safe_rshift_func_uint16_t_u_u((((safe_sub_func_int16_t_s_s((safe_sub_func_int16_t_s_s((g_1062 = ((g_20 = g_739) == (p_19 <= (((((safe_unary_minus_func_int8_t_s((safe_add_func_int16_t_s_s(g_1080, (((g_357 = (safe_unary_minus_func_int8_t_s((l_1231 = (safe_add_func_uint16_t_u_u((((l_1229 ^ (!l_1222)) && p_19) ^ 0xE2), g_1181)))))) && 0x71) >= p_19))))) > g_813) < g_1181) < g_813) || p_19)))), 0x2636)), 0xF1F3)) && g_962) || g_739), 3)) && 0xBDFE))))))), p_19)), l_1250)) || l_1230);
    return l_1252;
}
inline static int32_t func_23(uint16_t p_24, int32_t p_25)
{
    uint32_t l_57 = 0x942FAFEC;
    int32_t l_58 = 0x58230B54;
    int8_t l_59 = 0;
    uint32_t l_1184 = 0xED26BBB7;
    int8_t l_1218 = 7;
    int16_t l_1219 = (-1);
    int32_t l_1220 = 6;
    int32_t l_1221 = 9;
    g_60 = func_6(p_25, (safe_sub_func_uint8_t_u_u((l_58 = (((safe_sub_func_uint16_t_u_u(func_6(p_24, ((safe_add_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s(0xC7C4, (func_6(g_20, (safe_div_func_int8_t_s_s((((safe_rshift_func_uint16_t_u_s((((-1) < (safe_sub_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u((p_24 || ((l_57 = (safe_lshift_func_int16_t_s_s(p_25, func_6(func_46(((safe_mul_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(((func_6(p_25, (((safe_sub_func_int32_t_s_s(0x7FF51885, 0xC8F94914)) > p_24) ^ g_20)) >= g_20) >= p_24), 0U)), g_20)) <= 2), g_20), g_20)))) == l_58)), 0x5D)) & 0x231D5762), g_20))) < l_58), g_20)) != g_20) || l_59), 0x8D))) || 1U))) || g_20), 10)), 0x7E64BFCE)) && p_24)), 0x0F0C)) & l_59) && g_20)), l_59)));
    l_1184 = (l_58 != func_61((safe_rshift_func_uint16_t_u_u(g_60, 1)), (((safe_sub_func_int16_t_s_s(((((!(safe_lshift_func_int16_t_s_s(func_6(func_71(p_25, func_46(((p_25 ^ func_76((g_79 = l_57), (safe_mul_func_uint8_t_u_u(g_20, func_46(g_60, (g_82 = (p_24 > (((0U < (-1)) & (-1)) < l_59)))))))) == 0xC6), p_25), g_60, p_25), l_57), l_57))) & p_25) | p_24) > l_57), p_25)) && p_24) ^ (-1))));
    if (g_357)
        goto lbl_1187;
lbl_1187:
    l_58 = (((g_82 = (g_513 = (safe_rshift_func_int8_t_s_s(p_25, g_962)))) & g_306) < g_394);
    l_1221 = (((g_20 ^ (((safe_mod_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((g_241 || (((l_1220 = (safe_mul_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(((safe_mul_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((p_25 < (safe_mul_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s((safe_add_func_int32_t_s_s((safe_sub_func_int16_t_s_s((safe_mod_func_int16_t_s_s((l_1219 = (g_1062 = (((!(((((p_25 & (safe_rshift_func_uint16_t_u_u(p_25, (l_58 = 0xAEAA)))) == (((+((safe_sub_func_int32_t_s_s((g_739 != 0xA5), g_305)) || g_60)) > 0x614A) != p_24)) >= g_816) & 255U) & l_1218)) | 0xF7971DED) <= 4294967293U))), g_60)), l_1218)), p_25)), 6)), g_816))), l_1218)), g_406)) && 0), 6)), (-10)))) < p_25) | p_25)), 2)), l_59)) == g_306) <= p_24)) && 0x10FDE8CE) & 0x18B0);
    return g_394;
}
inline static int32_t func_46(uint32_t p_47, uint8_t p_48)
{
    int16_t l_55 = 0xDD0B;
    int32_t l_56 = (-3);
    l_56 = (l_55 = p_47);
    l_56 = (p_47 | p_48);
    return g_20;
}
inline static uint8_t func_61(int32_t p_62, int8_t p_63)
{
    uint32_t l_618 = 1U;
    int32_t l_626 = 0x80693184;
    int32_t l_627 = 9;
    int32_t l_628 = (-4);
    int32_t l_629 = 0x1A75E040;
    int32_t l_664 = 0x2E92F049;
    uint16_t l_675 = 0x71CE;
    uint16_t l_676 = 0x0421;
    uint16_t l_708 = 0xEE3B;
    uint16_t l_919 = 0x952E;
    const uint32_t l_1077 = 0x5022A0B6;
    if (p_62)
    {
        uint32_t l_621 = 2U;
        int32_t l_644 = (-1);
        if ((((safe_rshift_func_uint8_t_u_u(((l_629 = ((l_628 = (((l_627 = (((((safe_add_func_int8_t_s_s((g_305 = (safe_mod_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(g_323, 0)), l_618))), (safe_div_func_uint8_t_u_u((0x9DBE0F00 > ((l_621 | p_62) || (safe_div_func_uint32_t_u_u((l_626 = (((safe_lshift_func_int16_t_s_s(p_62, 0)) | p_63) | l_618)), l_618)))), g_79)))) & l_618) | p_62) & p_62) <= p_63)) != g_20) <= 8U)) > g_82)) >= 9), p_63)) != g_82) && p_62))
        {
            int8_t l_630 = 1;
            l_630 = g_393;
        }
        else
        {
            uint32_t l_641 = 0x9F104EF5;
            int32_t l_653 = 0xF5970634;
            l_644 = (l_628 <= (0x98332D3B && ((safe_rshift_func_int8_t_s_s(((safe_lshift_func_int16_t_s_u(p_62, (safe_lshift_func_uint8_t_u_u(0x0B, (((g_406 = (p_63 | p_63)) != (safe_mul_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(((l_641 >= (((safe_rshift_func_uint8_t_u_u(g_323, 5)) < l_621) <= p_63)) < 0x558134D8), 8)), 0xE13E))) != g_394))))) > 0U), g_513)) != l_621)));
            if (l_641)
                goto lbl_654;
            g_406 = (((((safe_div_func_uint32_t_u_u(((((safe_rshift_func_uint16_t_u_s(l_621, ((((safe_mul_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(0U, 0x8973)), (l_629 == ((g_323 <= 0xD41E486D) & (l_641 ^ (l_653 = (-1))))))) && (l_644 = p_63)) || 0x3D) <= 0U))) < p_62) >= p_62) ^ g_393), g_189)) | p_63) || 0xF2) && g_406) > 0x848B);
            return l_626;
        }
lbl_654:
        l_627 = g_79;
        l_644 = (safe_add_func_uint16_t_u_u(0x5CB0, l_644));
    }
    else
    {
        return l_626;
    }
    g_406 = (safe_unary_minus_func_uint8_t_u((l_676 = ((((safe_mod_func_uint8_t_u_u((l_664 = ((safe_mul_func_uint16_t_u_u((9 == (safe_mul_func_uint16_t_u_u(l_664, 0x7E89))), g_406)) >= (3U && (l_628 = (safe_div_func_int8_t_s_s((l_626 = (p_62 < (safe_lshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(((safe_mul_func_uint8_t_u_u((g_189 = g_306), (safe_mul_func_uint8_t_u_u((l_629 = (0x1DC753CE >= l_626)), l_626)))) >= p_62), 11)), g_306)))), l_675)))))), (-1))) ^ l_627) >= p_63) & l_618))));
lbl_1141:
    l_628 = (safe_div_func_uint16_t_u_u(p_62, l_676));
    if ((safe_rshift_func_uint16_t_u_s((safe_sub_func_int32_t_s_s((p_63 > ((l_664 = (((safe_lshift_func_uint16_t_u_s(g_305, 11)) >= g_79) ^ (l_676 && ((g_607 | (safe_sub_func_int8_t_s_s((l_627 == (safe_mod_func_int16_t_s_s((((safe_sub_func_int16_t_s_s(p_62, (safe_mul_func_uint16_t_u_u((1U || (safe_mul_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(((safe_add_func_uint32_t_u_u(((safe_mod_func_int8_t_s_s((((!(safe_sub_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((((0 | 0xB5) ^ l_664) && p_63), 0x9985)), g_189)), 4294967293U))) > l_629) == g_79), p_63)) != p_63), p_63)) >= l_708), (-1))), g_79))), l_675)))) & 0) || g_20), g_82))), l_708))) >= 0xE843)))) | p_63)), p_63)), 3)))
    {
        int8_t l_711 = (-10);
        int32_t l_783 = 6;
        const int16_t l_806 = 1;
        int8_t l_839 = 0;
        uint32_t l_910 = 0x17B11351;
        int32_t l_930 = (-1);
        int8_t l_931 = 0;
        int32_t l_995 = (-1);
        uint32_t l_1101 = 0U;
        uint32_t l_1153 = 4294967286U;
        uint32_t l_1154 = 4294967287U;
        l_629 = 0xF9E3CA38;
        if ((l_627 != (safe_lshift_func_uint8_t_u_u(l_711, ((g_241 || p_63) < (l_629 = g_393))))))
        {
            int32_t l_722 = 1;
            int32_t l_732 = (-9);
            int32_t l_740 = 0xC1D64AA1;
            uint16_t l_863 = 65528U;
            uint32_t l_1059 = 4294967288U;
            int8_t l_1060 = 0xF2;
            l_740 = (((safe_div_func_int32_t_s_s((p_63 <= (safe_lshift_func_uint8_t_u_s((g_739 = ((safe_sub_func_int8_t_s_s(0xA8, (safe_mul_func_int16_t_s_s(((l_628 = (safe_mul_func_int16_t_s_s((l_722 = p_63), (safe_lshift_func_uint8_t_u_s((safe_sub_func_uint16_t_u_u((((l_664 = (safe_unary_minus_func_int32_t_s((safe_add_func_int32_t_s_s((255U & (-9)), (safe_rshift_func_int8_t_s_s((p_63 < (l_732 = (g_241 <= l_732))), 3))))))) < (safe_mul_func_int16_t_s_s((safe_div_func_int32_t_s_s((safe_lshift_func_int16_t_s_s(p_62, 0)), l_626)), (-10)))) & l_618), l_629)), 0))))) ^ 255U), g_306)))) && p_63)), 1))), p_63)) || (-4)) < g_393);
            if ((+(p_62 || p_62)))
            {
                return g_305;
            }
            else
            {
                int32_t l_768 = 3;
                int32_t l_773 = (-1);
                int32_t l_782 = 0x9B52CC8D;
                uint8_t l_807 = 0xCE;
                int8_t l_820 = 0x67;
                int16_t l_864 = 0xBE89;
                uint8_t l_932 = 0x48;
                if (((safe_rshift_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_s((((safe_mod_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(g_357, ((safe_rshift_func_int8_t_s_u((((safe_sub_func_uint8_t_u_u(((safe_mod_func_int8_t_s_s((((safe_lshift_func_uint16_t_u_s((g_393 = ((safe_lshift_func_int16_t_s_s(((((l_626 = p_62) != l_629) > (safe_rshift_func_uint8_t_u_s((l_783 = (safe_div_func_int32_t_s_s(((safe_rshift_func_uint16_t_u_s((p_63 <= l_768), 5)) <= (safe_mul_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((l_773 = p_62), g_241)), (safe_add_func_int16_t_s_s((l_782 = (safe_add_func_uint32_t_u_u(((safe_mul_func_int8_t_s_s((safe_mul_func_int16_t_s_s(l_768, l_711)), p_63)) >= 0U), l_711))), 65535U))))), 0x58048058))), p_63))) & 8U), 1)) != 0)), 9)) == p_62) ^ l_768), g_739)) <= 0x05), l_628)) & l_768) | 0x4D), 5)) <= 6))), 0xE8E3)) && g_406) || 0), g_323)) < p_63), 3)) || g_323))
                {
                    int32_t l_802 = (-9);
                    int32_t l_805 = (-1);
                    l_807 = (safe_lshift_func_int16_t_s_s(((safe_add_func_int8_t_s_s(((safe_rshift_func_int8_t_s_s((((l_782 = (safe_lshift_func_uint8_t_u_s(((safe_add_func_uint16_t_u_u((l_805 = (safe_sub_func_int32_t_s_s((((g_79 == ((safe_sub_func_int16_t_s_s(0xBDB8, (g_323 <= (l_740 = 4294967293U)))) >= (safe_mod_func_int16_t_s_s(g_406, (safe_rshift_func_uint8_t_u_s((l_802 = 0x6D), 6)))))) & ((((safe_add_func_uint16_t_u_u((((l_618 < 0x12779A91) | (-1)) > l_783), 0x4D99)) < g_394) < 1) || p_62)) < 1), g_306))), 9U)) & l_711), l_806))) | 1) && p_62), 0)) >= g_739), 7)) == 0x75), 2));
                }
                else
                {
                    g_406 = ((g_513 = g_323) > p_63);
                    l_740 = ((~g_323) || (l_773 = (((safe_sub_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((p_62 & (g_406 = (l_732 = p_63))), 0)), ((p_63 && g_813) | p_63))) ^ ((safe_add_func_int32_t_s_s((g_816 = p_62), (+(safe_rshift_func_int8_t_s_s((l_722 = l_820), 5))))) > (l_708 <= 0xA0))) < l_740)));
                    l_783 = p_62;
                }
                g_406 = (((g_305 = (safe_add_func_uint8_t_u_u(0xC0, (safe_lshift_func_int16_t_s_u((p_63 <= (safe_add_func_uint32_t_u_u((((~(((safe_mul_func_uint16_t_u_u(g_357, ((safe_add_func_int32_t_s_s(((safe_lshift_func_int16_t_s_u(((safe_mod_func_uint16_t_u_u(p_63, (0xE0 | (l_628 = (((safe_add_func_uint8_t_u_u(g_306, 0xF1)) || p_63) || (+g_393)))))) ^ g_60), l_839)) && 0x57), 3U)) || l_768))) || (-1)) | g_79)) | p_62) == g_241), p_62))), p_63))))) >= p_62) < 0x77);
                if ((p_62 >= (((l_864 = (safe_add_func_uint16_t_u_u(0xD389, ((safe_sub_func_int8_t_s_s(((safe_sub_func_uint16_t_u_u(((((safe_sub_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(((p_63 <= (~((safe_add_func_int8_t_s_s((g_816 = (g_305 = p_62)), ((safe_sub_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(p_62, 2)), (0x828D ^ g_813))) ^ p_62))) != (!(((l_664 = p_62) != l_618) == g_79))))) > 0), l_839)), g_862)), g_82)), p_62)) && l_863) && 3U) | 1), (-6))) == 65527U), g_60)) < 0x1A)))) < 0U) && p_62)))
                {
                    g_406 = p_62;
                }
                else
                {
                    g_406 = p_63;
                    l_664 = (safe_sub_func_int32_t_s_s((safe_div_func_int32_t_s_s(p_63, p_62)), (4294967288U | ((safe_unary_minus_func_int16_t_s((0xA29DA7EA == p_62))) != 255U))));
                    l_773 = 1;
                }
                if (((safe_add_func_int16_t_s_s((safe_div_func_uint16_t_u_u(0xFE2F, 0x68F9)), l_807)) <= (0x86 <= g_189)))
                {
                    g_406 = (-1);
                }
                else
                {
                    const uint16_t l_882 = 4U;
                    int32_t l_898 = (-3);
                    int32_t l_909 = (-1);
                    int32_t l_911 = 9;
                    uint16_t l_929 = 5U;
                    g_406 = 0xB7B80AF9;
                    if ((safe_mod_func_int32_t_s_s((p_63 & l_864), (l_782 && ((l_783 ^ (((((l_740 >= 0x264842B0) && (safe_rshift_func_uint8_t_u_s(1U, 3))) & (safe_sub_func_uint16_t_u_u(l_627, ((l_722 = p_62) <= g_357)))) >= l_882) <= 0x68D9D34F)) == l_732)))))
                    {
                        uint8_t l_897 = 0xA8;
                        int32_t l_899 = 0xE16D2DC1;
                        g_406 = (safe_mul_func_uint16_t_u_u((p_63 <= (-8)), (safe_div_func_uint32_t_u_u((safe_unary_minus_func_int32_t_s((((safe_mul_func_int8_t_s_s((safe_sub_func_int32_t_s_s(((g_513 && (l_898 = (((l_740 && g_513) ^ 0x13) != (0x9E18 | (safe_mul_func_uint8_t_u_u((safe_add_func_int8_t_s_s((+(p_63 & g_305)), l_897)), l_839)))))) > 0xF419A7F4), g_79)), 0x4D)) == l_722) & l_807))), 4294967295U))));
                        l_899 = l_897;
                        l_911 = (0x1B <= ((safe_sub_func_uint16_t_u_u((l_768 = (g_393 = (safe_rshift_func_int8_t_s_u(0x62, g_20)))), (((l_783 = ((l_732 || (g_306 & ((p_62 || (safe_sub_func_int16_t_s_s((l_708 || (l_898 = g_305)), ((safe_mul_func_int8_t_s_s((-8), 0x85)) >= g_79)))) < g_908))) == g_79)) && l_909) & l_910))) && l_909));
                    }
                    else
                    {
                        int32_t l_914 = (-10);
                        l_914 = (l_768 = (safe_mul_func_uint8_t_u_u((((l_914 || 0x11) != (safe_add_func_uint32_t_u_u((!(+((l_628 = l_919) > (l_932 = (((0xC3E1F6E4 ^ ((p_63 = (l_708 && ((g_82 = ((((((g_306 = (((safe_sub_func_int8_t_s_s((l_664 = ((((safe_add_func_uint8_t_u_u((((((safe_sub_func_int16_t_s_s(0x009D, ((g_908 != g_82) != (safe_lshift_func_int8_t_s_s((!(l_929 <= 0x26)), 6))))) && p_63) | l_930) && 1) > l_806), p_62)) ^ 0x98A99315) == p_62) == p_62)), p_62)) > p_62) <= 0x43B0)) < l_931) <= 6U) <= l_722) ^ g_79) && g_323)) <= 0xC9B9))) & 0)) ^ g_357) != l_711))))), g_357))) <= 0x077C), p_62)));
                    }
                    for (g_79 = (-21); (g_79 < (-29)); --g_79)
                    {
                        uint8_t l_950 = 5U;
                        int32_t l_963 = 1;
                        l_627 = (l_732 = (-1));
                        l_783 = (l_732 < (safe_mul_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(((safe_div_func_uint32_t_u_u(l_930, (~p_62))) ^ p_63), (safe_sub_func_int8_t_s_s((l_740 = (((safe_lshift_func_uint8_t_u_s(250U, 2)) <= p_62) || p_63)), (safe_mul_func_int16_t_s_s((-1), ((safe_sub_func_int32_t_s_s((-4), l_950)) > p_62))))))), g_79)));
                        l_963 = (safe_add_func_int16_t_s_s((p_62 > ((safe_unary_minus_func_uint16_t_u(((g_305 || (safe_rshift_func_int16_t_s_u((-1), 5))) <= (p_63 != (((0U && (g_393 = (safe_mod_func_int8_t_s_s((l_664 | (((safe_mul_func_int16_t_s_s(l_909, 9)) != (safe_mul_func_int16_t_s_s(((l_626 || g_20) < g_962), l_864))) || 4294967295U)), 0x79)))) != g_306) & l_950))))) == g_406)), g_82));
                    }
                    return p_63;
                }
            }
            for (g_513 = 8; (g_513 == (-6)); g_513 = safe_sub_func_int32_t_s_s(g_513, 4))
            {
                int32_t l_983 = (-6);
                uint16_t l_1054 = 0xBEDF;
                int32_t l_1063 = 1;
                int32_t l_1112 = 7;
                int16_t l_1144 = 0x33E7;
                for (l_627 = 2; (l_627 != 2); l_627 = safe_add_func_uint8_t_u_u(l_627, 8))
                {
                    uint16_t l_972 = 8U;
                    int32_t l_982 = 0x15894DD9;
                    const uint16_t l_1022 = 0U;
                    if (((-1) > p_63))
                    {
                        int16_t l_973 = 0;
                        l_783 = (l_629 = (safe_lshift_func_int8_t_s_u((p_63 = ((safe_rshift_func_int16_t_s_s(p_63, (g_79 = ((p_62 >= (((l_972 == l_973) || g_862) & (l_628 = (safe_sub_func_int32_t_s_s((safe_div_func_uint16_t_u_u((safe_div_func_uint32_t_u_u((l_722 = ((l_664 = ((((safe_add_func_uint8_t_u_u(l_732, (l_676 || (g_82 < ((g_357 = (p_63 | 0xECCD96A9)) & 0))))) ^ 0xAA11) ^ l_708) >= g_962)) > 0x3ECB)), l_972)), 0xD48A)), p_62))))) < p_62)))) == g_305)), l_863)));
                    }
                    else
                    {
                        l_982 = g_813;
                    }
                    l_995 = (l_983 > (g_393 = ((g_607 != (p_62 & p_62)) ^ (safe_add_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((l_783 = ((safe_lshift_func_int8_t_s_u(((safe_mod_func_uint8_t_u_u((~(1U && g_393)), p_62)) == 1U), (p_63 & p_62))) == g_513)), (-1))), p_63)), 0x4548)))));
                    if ((((safe_div_func_int32_t_s_s(0xF3FDD34F, g_82)) < (((safe_mod_func_int8_t_s_s((((safe_mul_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s((safe_add_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(g_908, (safe_unary_minus_func_uint16_t_u(g_394)))), l_983)), (g_189 = g_908))) >= ((safe_add_func_uint8_t_u_u((l_664 = ((safe_unary_minus_func_uint32_t_u(((l_783 = (safe_add_func_uint8_t_u_u(0U, (safe_rshift_func_int16_t_s_s((g_513 <= (safe_sub_func_int16_t_s_s(((l_995 = ((safe_mod_func_int8_t_s_s((l_983 == g_816), 0xB8)) <= 0x1C8F0088)) <= g_813), 1))), 5))))) || p_63))) ^ 1U)), l_1022)) | 7U)), l_618)), p_62)) <= l_931) != 0x955C), g_739)) == p_62) > p_62)) == g_323))
                    {
                        int32_t l_1061 = 1;
                        g_406 = (safe_add_func_uint8_t_u_u((((safe_div_func_int8_t_s_s(((safe_mul_func_uint16_t_u_u(((((((safe_div_func_int8_t_s_s(((!((l_740 ^ ((l_722 = (l_1061 = (safe_sub_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(((p_62 >= (safe_sub_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s((l_1059 = (~(safe_sub_func_uint32_t_u_u((((l_982 = (safe_lshift_func_int8_t_s_u(g_406, 5))) ^ ((+(safe_div_func_int8_t_s_s(((((((safe_rshift_func_int16_t_s_u(l_676, ((safe_mul_func_uint8_t_u_u((((0x5348 < ((((l_1054 & (safe_sub_func_uint8_t_u_u((g_739 = 0U), (g_513 < 0)))) < g_60) == g_357) ^ l_839)) == g_189) <= 1), l_1054)) && p_63))) == 5) ^ l_732) >= g_357) == g_20) >= p_62), p_63))) < l_711)) | p_63), l_626)))), g_862)), p_63))) | l_1060), g_82)), l_972)))) < 1)) > 8U)) != 0xAD36), 252U)) && 0x1E) < 0x732C7BF0) & (-7)) > p_62) == l_618), g_394)) && g_406), p_63)) || p_62) != g_1062), g_962));
                    }
                    else
                    {
                        int32_t l_1079 = (-2);
                        l_1063 = p_63;
                        g_406 = (l_1063 = ((((safe_lshift_func_uint16_t_u_u(g_813, (safe_rshift_func_uint8_t_u_u(g_813, ((-1) ^ l_1063))))) || (!l_664)) == (safe_div_func_int8_t_s_s(((((safe_sub_func_uint32_t_u_u((g_60 ^ (g_20 = (((safe_sub_func_int8_t_s_s(((safe_sub_func_uint32_t_u_u(1U, ((l_1077 & (((safe_unary_minus_func_int8_t_s(((l_711 != l_972) && (-8)))) & p_63) && p_62)) | p_62))) > l_1079), g_1062)) && 0x36) || p_62))), g_1080)) >= 0x07238D4E) <= 0x7D) ^ 1), g_1062))) | g_393));
                    }
                }
                l_628 = (safe_rshift_func_uint8_t_u_s((safe_mod_func_int16_t_s_s((0x9369 & (((((safe_rshift_func_uint8_t_u_s(g_393, 0)) != (safe_sub_func_int16_t_s_s((l_783 = l_983), 2U))) ^ 1U) ^ (safe_mod_func_int8_t_s_s(l_629, (safe_mod_func_uint16_t_u_u(l_1054, g_305))))) > (safe_sub_func_int16_t_s_s(((1U > l_711) == 6U), (-6))))), 0x2564)), l_839));
                if ((l_627 || (-6)))
                {
                    int32_t l_1110 = 0x04CCA586;
                    int32_t l_1111 = 7;
                    l_1112 = (((g_305 > ((safe_add_func_int16_t_s_s(((((((~(+(safe_div_func_int32_t_s_s((l_1101 ^ (g_395 | p_63)), (safe_mod_func_int16_t_s_s((l_919 ^ (p_63 < (l_783 = ((((safe_sub_func_uint8_t_u_u((l_995 = g_1080), (l_1063 = (g_241 == l_1110)))) & l_676) ^ 3) < l_711)))), l_1111)))))) > g_79) <= 250U) && g_306) <= l_806) < g_20), 65533U)) < l_740)) ^ l_1111) > (-1));
                    if (p_62)
                        break;
                }
                else
                {
                    uint32_t l_1139 = 4294967295U;
                    for (l_919 = 9; (l_919 != 12); l_919 = safe_add_func_int8_t_s_s(l_919, 3))
                    {
                        int32_t l_1140 = 0xCC6B557C;
                        l_1063 = (safe_mod_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(((+((safe_add_func_int8_t_s_s((((g_305 = ((safe_rshift_func_int16_t_s_u((l_783 = (g_79 = (safe_lshift_func_uint16_t_u_u((l_664 = g_393), (g_357 & g_962))))), (g_189 < (!(((safe_sub_func_uint32_t_u_u((g_395 = 4294967295U), 0xD34C6A68)) & ((safe_mul_func_int16_t_s_s((((safe_mod_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u(255U, p_62)), (safe_lshift_func_uint16_t_u_s(l_1139, 0)))) || p_62) >= l_1054), 0xD1FD)) | p_62)) & l_1060))))) < l_1054)) != 0U) <= l_1054), g_1080)) < p_62)) ^ p_63), 0)), l_1140));
                        return p_62;
                    }
                    if (p_62)
                        goto lbl_1141;
                    l_627 = (((((safe_rshift_func_uint8_t_u_s(l_1144, 4)) <= g_607) < (safe_lshift_func_int8_t_s_s(g_1080, (0x7C < ((g_607 < (safe_mul_func_uint8_t_u_u(l_1054, (safe_mul_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(p_62, 4)), (l_1063 = (l_863 > p_63))))))) || g_60))))) < 0x6B09797E) < l_732);
                    if (l_1153)
                        continue;
                }
            }
            l_1154 = l_1060;
        }
        else
        {
            int32_t l_1157 = 4;
            int32_t l_1170 = (-1);
            int32_t l_1180 = 5;
            l_627 = (safe_add_func_uint32_t_u_u((l_1157 <= ((safe_div_func_uint16_t_u_u(((0xA92F >= (+(((~((l_664 = (safe_lshift_func_int8_t_s_s(l_1157, 1))) | 2)) & (((safe_rshift_func_uint16_t_u_u(((l_628 = (g_1181 = ((safe_mul_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_u(((l_1170 = l_675) ^ (safe_mul_func_uint16_t_u_u((((l_1180 = (g_306 = ((l_1077 == (((((safe_mul_func_int8_t_s_s(((g_393 = ((g_862 >= l_783) | ((safe_mul_func_int16_t_s_s(((safe_unary_minus_func_int8_t_s(((safe_mul_func_uint8_t_u_u(((((0 < l_1157) & l_1180) | 65533U) || p_62), p_62)) & p_63))) > 0), 0U)) == 0x77C4E1C7))) < 1U), l_1157)) || g_1062) || 0xACFD) && g_395) & 0xC427)) | l_1157))) | l_1157) ^ g_739), g_862))), 0)) & l_676), l_1157)) >= 0x3C))) | 0xDD28), p_62)) ^ g_1062) == 0x0BF7)) <= p_62))) | 9U), 0x5240)) > g_305)), p_62));
            return g_393;
        }
        for (g_1181 = (-24); (g_1181 != 54); ++g_1181)
        {
            return l_839;
        }
    }
    else
    {
        l_626 = p_63;
    }
    return g_607;
}
inline static int32_t func_71(int8_t p_72, uint32_t p_73, uint16_t p_74, int16_t p_75)
{
    uint8_t l_577 = 5U;
    int32_t l_584 = (-6);
    for (g_20 = (-5); (g_20 >= 51); ++g_20)
    {
        int8_t l_582 = 7;
        const uint32_t l_583 = 4294967295U;
        int32_t l_608 = 0xFB86B1F9;
        uint32_t l_609 = 0xB4156664;
        l_584 = (safe_mod_func_int16_t_s_s(l_577, (safe_sub_func_uint8_t_u_u((safe_div_func_uint32_t_u_u(p_72, l_582)), l_583))));
        if (p_74)
            continue;
        for (g_395 = (-12); (g_395 >= 45); g_395 = safe_add_func_uint8_t_u_u(g_395, 2))
        {
            int32_t l_606 = 1;
            l_584 = l_582;
            if (g_306)
            {
                int8_t l_593 = 0x6F;
                g_406 = (p_73 >= (safe_sub_func_int16_t_s_s((((l_608 = (safe_add_func_uint32_t_u_u(((((safe_add_func_int8_t_s_s(l_593, p_75)) & ((4294967295U >= (g_189 < (((safe_mod_func_uint32_t_u_u((5 ^ ((safe_add_func_int32_t_s_s((safe_sub_func_uint8_t_u_u(3U, (((safe_mul_func_int8_t_s_s((p_72 = ((safe_rshift_func_uint8_t_u_s(l_606, 6)) | g_607)), (-8))) >= 0x47) > l_606))), g_189)) || g_323)), p_73)) & g_394) < g_79))) >= 1)) == p_74) <= 0), g_395))) >= p_73) ^ g_79), l_593)));
            }
            else
            {
                if (l_606)
                    break;
                l_609 = 0x8D0A345A;
            }
        }
    }
    g_406 = 0x507BB3D1;
    l_584 = 0x65759DA7;
    return p_74;
}
inline static int8_t func_76(uint32_t p_77, uint16_t p_78)
{
    uint32_t l_89 = 0x33308626;
    int32_t l_106 = 0x55642E06;
    int32_t l_110 = 1;
    uint8_t l_127 = 1U;
    int16_t l_549 = (-5);
    uint32_t l_568 = 4294967295U;
    if ((safe_mul_func_int16_t_s_s((safe_mod_func_int32_t_s_s((g_60 != ((safe_rshift_func_int8_t_s_s(func_46(g_82, l_89), (safe_rshift_func_int16_t_s_s((l_89 <= (((safe_lshift_func_int16_t_s_u(p_77, (safe_rshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s((g_82 > 0xC99C2354), 0)), (safe_rshift_func_uint16_t_u_s(((g_20 >= p_77) != 0x45), g_60)))), l_89)) && 1), l_89)), l_89)))) < (-7)) == l_106)), 10)))) != l_106)), p_78)), 65531U)))
    {
        int16_t l_120 = 0x9E50;
        int32_t l_512 = (-1);
        uint32_t l_514 = 4294967289U;
        int32_t l_536 = 0;
        uint8_t l_550 = 8U;
        for (p_78 = (-12); (p_78 < 1); p_78 = safe_add_func_int8_t_s_s(p_78, 4))
        {
            uint32_t l_109 = 4294967295U;
            l_109 = g_79;
            l_110 = g_79;
        }
        if ((g_513 = (l_512 = ((((p_77 & ((((func_111(p_77, (safe_mul_func_int16_t_s_s((safe_add_func_uint32_t_u_u(l_120, g_20)), 0x2DC9)), ((safe_rshift_func_int8_t_s_s(p_78, 6)) | (safe_mod_func_uint16_t_u_u((((p_77 & 248U) == ((safe_mod_func_uint8_t_u_u((g_79 & p_78), p_78)) <= p_77)) || l_127), g_79))), l_89) | g_60) != g_60) == 0x33FE9B47) >= g_60)) <= p_77) != l_89) >= 0x50FE))))
        {
            return l_514;
        }
        else
        {
            uint32_t l_525 = 4294967295U;
            l_110 = (g_323 < (((l_536 = (l_127 & (l_512 = (((safe_mod_func_uint16_t_u_u((g_306 <= (-7)), (safe_div_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((safe_mul_func_uint8_t_u_u(0x58, (safe_lshift_func_int8_t_s_s(l_525, 3)))), g_357)), g_394)))) <= ((((safe_div_func_uint32_t_u_u((safe_mod_func_int16_t_s_s((((safe_lshift_func_uint8_t_u_u(((safe_mod_func_uint8_t_u_u((safe_div_func_uint16_t_u_u((0x3A8C0956 && g_406), 0x0EA8)), 0x5B)) | l_110), p_77)) && l_525) | 5U), l_525)), g_306)) && l_512) != l_120) | g_395)) | 0x8B)))) >= p_77) ^ 0xA6BBBD3E));
        }
        l_110 = (safe_mul_func_int8_t_s_s(((0x7DD9 & 0U) != l_127), (~(((safe_unary_minus_func_uint8_t_u((((g_406 = ((((safe_add_func_int32_t_s_s(g_79, p_78)) && (safe_mul_func_uint16_t_u_u((g_393 = 0U), (l_514 <= (safe_add_func_int32_t_s_s(p_77, ((safe_rshift_func_uint16_t_u_u(p_78, l_549)) != 0x4A7F7F5E))))))) && p_77) > 0)) < 1) <= p_77))) < l_550) < g_60))));
    }
    else
    {
        uint32_t l_564 = 0U;
        int32_t l_567 = 0xF87219A0;
        l_110 = (((safe_mod_func_int32_t_s_s(((0xC74D2140 <= 0xF99B61E3) >= (((safe_add_func_int16_t_s_s(g_395, g_189)) | ((((safe_rshift_func_uint16_t_u_u((safe_add_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(p_78, (l_567 = (p_78 && (+(((0x78 >= (l_564 == (safe_lshift_func_int8_t_s_u((g_395 ^ l_564), l_127)))) >= p_77) != g_513)))))), g_305)), g_20)) > p_78) == 0x9EA1FDA2) && l_568)) > l_564)), l_564)) | g_82) <= l_564);
        g_406 = 8;
        for (g_20 = 0; (g_20 > 3); g_20 = safe_add_func_int16_t_s_s(g_20, 3))
        {
            if (g_79)
                break;
            g_406 = (l_567 = 0x35C08C91);
        }
    }
    for (l_110 = 27; (l_110 <= 25); --l_110)
    {
        g_406 = 0xA0C64F53;
    }
    return p_77;
}
static int32_t func_111(uint32_t p_112, int16_t p_113, int32_t p_114, int32_t p_115)
{
    int32_t l_128 = 4;
    uint8_t l_152 = 9U;
    int32_t l_165 = 1;
    int32_t l_166 = (-1);
    int32_t l_184 = 0xE0FF3897;
    uint32_t l_185 = 1U;
    int32_t l_187 = 1;
    int8_t l_264 = 0;
    uint32_t l_297 = 0x0524C490;
    const uint16_t l_304 = 0U;
    const int8_t l_478 = 0x8A;
    uint16_t l_489 = 0xC32C;
    uint32_t l_490 = 5U;
    uint32_t l_511 = 0U;
    if ((0xA2 != (l_128 & (+(safe_sub_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s((safe_mod_func_int16_t_s_s((((0x1C03A75F != (safe_lshift_func_uint8_t_u_s((l_128 && (safe_div_func_uint32_t_u_u(l_128, (safe_lshift_func_uint16_t_u_s((safe_mod_func_uint8_t_u_u(((p_112 && ((l_128 || ((safe_div_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(0xEA, (((((safe_mod_func_uint16_t_u_u((safe_div_func_uint32_t_u_u(l_128, l_128)), g_82)) >= p_115) || l_128) <= l_152) && 0x34))), p_115)) <= g_82)) > 0x9E)) == g_60), l_128)), p_113))))), p_115))) == 0x99) == g_60), l_152)), 2)), g_20))))))
    {
        uint32_t l_173 = 0U;
        uint32_t l_186 = 4294967295U;
        uint32_t l_188 = 4294967288U;
        g_189 = (((safe_sub_func_uint16_t_u_u((safe_div_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(((safe_add_func_int16_t_s_s((safe_div_func_int8_t_s_s((safe_mod_func_int16_t_s_s((p_113 = (l_166 = ((l_165 = ((l_128 = 4U) | p_115)) > (g_20 <= 0xFA5AF98D)))), l_152)), (safe_div_func_int16_t_s_s((l_152 >= (safe_unary_minus_func_uint32_t_u((safe_mul_func_uint16_t_u_u(((+l_173) > (l_187 = (safe_sub_func_uint32_t_u_u((safe_sub_func_int32_t_s_s((safe_div_func_int32_t_s_s((((safe_rshift_func_int8_t_s_s((l_185 = (l_184 = (safe_div_func_int8_t_s_s((0x84 | 7), 0x29)))), 0)) || g_60) != l_173), 0xD0B6939A)), l_186)), g_60)))), p_112))))), p_115)))), l_188)) && g_79), 2)), p_114)), l_152)) && p_114) & 0x75);
        if (g_20)
            goto lbl_190;
lbl_190:
        p_115 = g_82;
        p_114 = p_113;
    }
    else
    {
        uint32_t l_191 = 0x8AA24F53;
        l_191 = p_113;
    }
    if (((g_189 = l_185) || p_114))
    {
        int32_t l_214 = 0;
        int32_t l_229 = 0xEC837B64;
        int32_t l_240 = 0;
        uint32_t l_347 = 0x5CFCB859;
        int32_t l_384 = 0x18106815;
        p_115 = (l_187 > (0 < (safe_mul_func_uint16_t_u_u(g_60, (safe_mod_func_int32_t_s_s((safe_mul_func_uint16_t_u_u((((((((((1 != p_113) <= (0x5F48 ^ p_113)) <= ((safe_add_func_uint16_t_u_u(g_82, (0U != g_189))) > 2U)) != 0x3CF3) != p_114) >= l_152) >= l_152) != 0x998A83C5) | 1U), (-1))), p_114))))));
        p_114 = ((safe_lshift_func_uint8_t_u_s((safe_add_func_uint16_t_u_u(p_113, (g_79 = ((safe_mul_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(p_115, ((l_187 = 8) >= 1U))), (safe_mod_func_int16_t_s_s(((safe_div_func_int16_t_s_s((safe_add_func_uint16_t_u_u(65527U, (-10))), l_214)) || (safe_rshift_func_uint8_t_u_s((safe_add_func_int8_t_s_s((safe_div_func_uint16_t_u_u((((g_79 > g_60) <= p_114) > 0xFF), g_60)), p_112)), p_113))), 1U)))) <= g_20)))), l_152)) || 0xE9C12CE4);
        p_115 = ((g_241 = (g_20 = (l_184 = ((safe_unary_minus_func_uint32_t_u(0x06ED31E0)) > ((safe_add_func_uint32_t_u_u(((!(l_240 = (safe_add_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((l_229 = g_189), (safe_sub_func_uint16_t_u_u(l_165, 0x0199)))), (safe_rshift_func_int8_t_s_u(((((p_115 && l_214) == (safe_lshift_func_int16_t_s_u((((p_112 > p_115) >= (((((safe_div_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(g_82, 0)), 255U)) < l_166) >= p_112) | p_114) & l_187)) < 4), 4))) == p_112) & l_185), l_214)))))) ^ p_115), g_60)) || 1))))) < g_60);
        if (((safe_add_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s((~((p_114 = (safe_rshift_func_uint16_t_u_u((!l_187), (g_82 == (((p_115 = (safe_add_func_int16_t_s_s(g_82, (safe_div_func_int16_t_s_s(((-3) || (safe_add_func_uint32_t_u_u((((l_165 >= ((safe_add_func_uint8_t_u_u(0x75, (safe_mod_func_int32_t_s_s((((safe_rshift_func_int8_t_s_s(l_240, 5)) || (-9)) || p_113), g_20)))) & 0x9C)) | 0x0B) && 0x61), l_240))), l_185))))) > g_20) <= p_112))))) > l_264)), 8)), l_229)) ^ p_113))
        {
            const uint32_t l_272 = 0x71733CD6;
            int32_t l_298 = 0xEA880BC6;
            uint8_t l_322 = 0xD0;
            for (p_112 = (-16); (p_112 != 56); p_112 = safe_add_func_int16_t_s_s(p_112, 9))
            {
                int8_t l_280 = 0x72;
                l_128 = (safe_mul_func_uint16_t_u_u(0x913F, ((((!(safe_sub_func_int16_t_s_s(((g_241 < 0xD7) || (g_20 && (l_272 | (((safe_lshift_func_uint16_t_u_s(g_241, 7)) == ((l_184 = ((g_189 = 0x33) | (((safe_lshift_func_int16_t_s_s((~(safe_add_func_uint8_t_u_u((l_280 != (safe_lshift_func_int8_t_s_s(((p_113 && p_115) && 9), p_113))), g_241))), l_165)) || 0U) <= 65535U))) & 0x0311)) >= 0xA4)))), 0x9E25))) != 0) ^ g_20) > 0x21B652CE)));
                return g_60;
            }
            g_305 = (+((l_240 = (g_82 != (safe_add_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(((((+(safe_mul_func_int8_t_s_s(p_114, g_241))) & ((safe_sub_func_int16_t_s_s(9, (l_298 = l_297))) ^ ((((((safe_lshift_func_int16_t_s_u((p_113 = (6 | 7)), 5)) && (l_184 = g_20)) < ((!(safe_rshift_func_int8_t_s_s(((1 | l_304) && 0xAF2F86AF), g_60))) | 0x7C)) | l_187) >= g_241) < g_60))) > l_272) || l_297), g_60)), l_272)), 5)), p_114)))) || p_114));
            g_306 = g_82;
            l_298 = (g_323 = (g_60 & ((safe_rshift_func_uint16_t_u_s((4294967292U | (((l_322 = (safe_mod_func_uint32_t_u_u((5 > (safe_mod_func_uint8_t_u_u(((((!l_264) | p_113) | g_189) & (safe_sub_func_int16_t_s_s((4294967295U > 7), (safe_mul_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s((safe_add_func_uint32_t_u_u(0x9C3933B6, 0U)), l_128)), g_20))))), 1U))), 0x2E07C214))) == g_305) ^ g_241)), p_112)) <= (-6))));
        }
        else
        {
            uint16_t l_355 = 0x81AA;
            int32_t l_358 = 0;
            int16_t l_383 = 0x8778;
            int32_t l_432 = (-1);
            int32_t l_454 = 1;
            for (l_229 = (-9); (l_229 >= (-10)); l_229 = safe_sub_func_int32_t_s_s(l_229, 1))
            {
                p_115 = ((0x9686 == p_113) < l_214);
            }
            for (g_20 = (-16); (g_20 != 2); ++g_20)
            {
                int32_t l_356 = 9;
                uint16_t l_427 = 65531U;
                p_115 = ((safe_mod_func_uint8_t_u_u(((safe_unary_minus_func_uint8_t_u(0U)) < p_114), (safe_mul_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(p_112, g_323)), (p_115 <= l_240))), p_115)))) > g_306);
                for (p_113 = 0; (p_113 != 4); p_113++)
                {
                    uint32_t l_391 = 0xBFD860E4;
                    int32_t l_392 = 0x12AE39DF;
                    l_358 = ((safe_add_func_int8_t_s_s((((g_305 > (g_189 = (safe_add_func_int16_t_s_s(((safe_rshift_func_int8_t_s_s((((((((g_357 = (safe_mod_func_uint8_t_u_u((l_347 != (0xAB481776 <= (!(0x89 <= (safe_lshift_func_uint8_t_u_s(((safe_mod_func_int32_t_s_s((safe_add_func_int8_t_s_s(g_241, (l_356 = (g_241 >= (l_355 | 0xE9E38342))))), (l_187 = l_187))) & (-4)), g_60)))))), 0x81))) ^ l_355) | p_113) || g_60) >= g_306) > g_60) == p_113), 7)) == 2), g_241)))) > 0x103CEEFD) | 0x8A70), 0)) >= g_82);
                    g_394 = ((g_393 = ((safe_div_func_int8_t_s_s((safe_mod_func_int8_t_s_s(l_356, ((safe_sub_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((+(safe_add_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((l_165 = ((((safe_sub_func_int16_t_s_s((safe_sub_func_int16_t_s_s((0x0702C48D >= ((((safe_lshift_func_uint8_t_u_s(((safe_unary_minus_func_int8_t_s(0)) && ((l_392 = (safe_sub_func_uint32_t_u_u((l_384 = (l_383 ^ 0)), (safe_div_func_uint8_t_u_u(l_356, ((safe_sub_func_int16_t_s_s((safe_div_func_uint16_t_u_u(l_383, p_115)), (l_229 = l_391))) & g_60)))))) == 0x5ABEBF25)), 2)) | 0xC3217EF7) & 8U) <= p_112)), p_114)), l_358)) == 0x2136C564) && 9U) >= 5)), 0x29)), 65526U))), (-6))), l_391)) ^ l_304))), 0x34)) > p_114)) < l_184);
                    g_395 = g_357;
                }
                if ((safe_add_func_uint8_t_u_u((((p_112 >= 0x0D41) ^ p_115) && (g_406 = (safe_rshift_func_uint16_t_u_s(((g_20 < ((safe_div_func_int16_t_s_s((g_189 || (safe_lshift_func_int16_t_s_u(p_112, ((safe_mod_func_uint32_t_u_u(4294967289U, (g_395 = (g_357 | (0x7038 && p_113))))) < l_358)))), 0x20B6)) | p_114)) && 0x67), 2)))), 0U)))
                {
                    int32_t l_426 = 0;
                    p_114 = (safe_rshift_func_uint16_t_u_u(p_113, (safe_mul_func_uint8_t_u_u((g_357 = g_306), (safe_div_func_int16_t_s_s((((g_306 || (safe_rshift_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(((p_114 && (safe_sub_func_uint8_t_u_u((((((((l_432 = (((safe_div_func_int8_t_s_s((+(safe_sub_func_int8_t_s_s(g_20, l_426))), l_427)) && (safe_sub_func_uint16_t_u_u(l_384, (l_356 = (l_358 = ((safe_div_func_uint32_t_u_u(0U, 0xEE3F9E5F)) >= l_185)))))) <= l_347)) < 1U) < p_113) <= p_113) != l_426) && l_356) ^ g_241), l_426))) & l_214), p_113)), 0x38E6)), 7))) || g_323) | 8U), 0xC0B1))))));
                    g_406 = (safe_sub_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(0x871E, 9)), l_427));
                }
                else
                {
                    int8_t l_457 = 0;
                    l_454 = ((g_82 = ((g_306 = (+(safe_mod_func_uint16_t_u_u((g_241 < ((l_432 = (((safe_rshift_func_int16_t_s_u((g_79 = (l_165 = p_115)), 7)) || (safe_add_func_uint8_t_u_u(((safe_add_func_uint32_t_u_u(l_297, (safe_lshift_func_uint16_t_u_u(65535U, 5)))) == 3U), (safe_mod_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u(g_395, (l_358 = 1U))), g_60)), l_128))))) < p_112)) == g_241)), 65535U)))) || 0x95D116E5)) <= 0x3235);
                    l_457 = (safe_rshift_func_uint8_t_u_u(g_394, 7));
                }
            }
        }
    }
    else
    {
        const int32_t l_476 = 0x894D4653;
        int32_t l_477 = 2;
        l_128 = (safe_mul_func_uint16_t_u_u(0U, ((((((safe_add_func_uint8_t_u_u(0xF1, ((safe_mod_func_int32_t_s_s(g_406, ((((l_477 = (g_393 = ((safe_mul_func_uint8_t_u_u(252U, 255U)) & (safe_sub_func_int32_t_s_s(((safe_mul_func_int8_t_s_s(0xCE, (safe_rshift_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((0xAC4B || (p_112 < (p_113 != p_113))), g_82)), 10)))) >= l_476), g_20))))) | p_115) && l_478) & p_112))) | g_82))) != p_114) && 0x7545) >= 0x7CA8DE84) <= 0U) && 0U)));
    }
    l_128 = ((safe_add_func_int32_t_s_s(g_60, (1U <= (safe_mul_func_int16_t_s_s(((safe_div_func_uint32_t_u_u((0x89 == g_323), (l_264 | (p_112 && (safe_sub_func_int8_t_s_s(((safe_mul_func_int8_t_s_s((l_489 && p_115), (g_323 == 0xAB))) < 0xB5), 0xB0)))))) == p_114), 1))))) & 0xC4E7A1F0);
    g_406 = (l_490 == ((p_112 | g_20) < (l_187 = ((g_79 && (((0xFE85BEE4 <= (safe_sub_func_uint16_t_u_u(((safe_sub_func_uint8_t_u_u(((safe_mod_func_int8_t_s_s((safe_add_func_int16_t_s_s(((safe_sub_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(l_297, ((g_357 ^ (safe_div_func_int32_t_s_s(((safe_rshift_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(((p_114 = l_187) <= (2 | 0x144D)), p_112)), p_115)) && l_184), p_113))) ^ 8U))), g_305)) && g_323), l_166)), g_395)) || 0U), l_185)) && (-4)), 0xAFCB))) <= 0x1997E4C7) < g_79)) && 1))));
    return l_511;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_20;
    csmith_sink_ = g_60;
    csmith_sink_ = g_79;
    csmith_sink_ = g_82;
    csmith_sink_ = g_189;
    csmith_sink_ = g_241;
    csmith_sink_ = g_305;
    csmith_sink_ = g_306;
    csmith_sink_ = g_323;
    csmith_sink_ = g_357;
    csmith_sink_ = g_393;
    csmith_sink_ = g_394;
    csmith_sink_ = g_395;
    csmith_sink_ = g_406;
    csmith_sink_ = g_513;
    csmith_sink_ = g_607;
    csmith_sink_ = g_739;
    csmith_sink_ = g_813;
    csmith_sink_ = g_816;
    csmith_sink_ = g_862;
    csmith_sink_ = g_908;
    csmith_sink_ = g_962;
    csmith_sink_ = g_1062;
    csmith_sink_ = g_1080;
    csmith_sink_ = g_1181;
    csmith_sink_ = g_1255;
    platform_main_end(0,0);
    return 0;
}
