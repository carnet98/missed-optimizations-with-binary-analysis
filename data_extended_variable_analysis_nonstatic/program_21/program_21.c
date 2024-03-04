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
static uint16_t g_7 = 0xB4E1;
static uint32_t g_10 = 1U;
static int32_t g_12 = 0xFAAAEB9A;
static int32_t *g_11 = &g_12;
static int32_t g_46 = 1;
static uint8_t g_69 = 0xDC;
static uint8_t g_75 = 0x54;
static int32_t g_92 = 0xD66A4358;
static int32_t ***g_98 = (void*)0;
static int8_t g_108 = 1;
static int32_t g_113 = 0x6E0D2487;
static int8_t g_134 = (-4);
static int32_t g_140 = 0x41744B85;
static uint32_t g_154 = 0x9A86FCAF;
static uint8_t g_190 = 0xED;
static int32_t g_196 = 0x9727A2C1;
static int8_t g_223 = 0x23;
static int8_t g_236 = 0xA5;
static int8_t g_266 = 8;
static uint32_t g_289 = 4294967292U;
static uint16_t *g_332 = (void*)0;
static uint16_t **g_331 = &g_332;
static uint8_t g_333 = 0x8D;
static uint16_t g_369 = 0x5CFC;
static int32_t *g_374 = &g_113;
static uint16_t g_377 = 0U;
static uint16_t *g_376 = &g_377;
static uint8_t g_381 = 0U;
static int16_t g_517 = 0xBFCD;
static uint32_t g_518 = 0x0BE9092F;
static uint8_t g_582 = 0xEE;
static uint16_t g_635 = 2U;
static int16_t g_734 = 0xCA38;
static uint32_t g_753 = 6U;
static int32_t *g_780 = (void*)0;
static int32_t *****g_807 = (void*)0;
static uint32_t *g_832 = &g_289;
static uint32_t **g_831 = &g_832;
static uint32_t *g_852 = &g_518;
static uint32_t **g_851 = &g_852;
static uint16_t func_1(void);
static int32_t * func_2(uint16_t p_3, int32_t p_4, int32_t * p_5);
static int32_t * func_13(uint16_t p_14, int16_t p_15, int8_t p_16);
static uint32_t func_21(int16_t p_22, int8_t p_23);
static int16_t func_24(uint16_t * p_25, uint8_t p_26, int32_t ** p_27);
static uint16_t * func_28(uint16_t * p_29, int32_t p_30, uint16_t p_31, int32_t ** p_32, uint16_t * p_33);
static uint16_t * func_34(int32_t ** p_35, uint16_t p_36, uint32_t p_37);
static int32_t ** func_38(uint32_t p_39, uint16_t * p_40, int16_t p_41, int32_t p_42, int32_t ** p_43);
static int16_t func_53(int32_t * p_54, uint16_t * p_55);
static uint16_t * func_57(int32_t * p_58, uint32_t p_59, uint32_t p_60);
static uint16_t func_1(void)
{
    uint16_t *l_6 = &g_7;
    int32_t **l_871 = &g_374;
    (*l_871) = func_2(((*l_6)--), g_10, g_11);
    return (**l_871);
}
static int32_t * func_2(uint16_t p_3, int32_t p_4, int32_t * p_5)
{
    int32_t l_17 = 0;
    int32_t **l_20 = &g_11;
    uint16_t *l_44 = (void*)0;
    int32_t **l_45 = (void*)0;
    uint32_t l_375 = 8U;
    int16_t l_868 = 0x69B5;
    int16_t *l_869 = &g_517;
    int8_t *l_870 = &g_108;
    (*l_20) = func_13(p_3, g_7, l_17);
    (*g_11) = (func_21((**l_20), ((g_12 < ((((p_4 >= ((func_24(func_28(func_34(func_38(((**l_20) > (**l_20)), l_44, (**l_20), ((g_46 = (((l_45 = &g_11) != &g_11) , (**l_20))) || (**l_45)), &g_11), p_4, l_375), p_4, p_3, l_20, g_376), g_518, l_20) ^ (**l_20)) == (**l_20))) == p_4) ^ g_582) & (*g_11))) , 0xD0)) , (**l_45));
    p_4 = ((*p_5) = (0xF9 != (safe_div_func_int8_t_s_s(((*l_870) = ((safe_lshift_func_int16_t_s_u(((safe_mod_func_int8_t_s_s(g_12, g_10)) , (safe_unary_minus_func_uint16_t_u(((safe_sub_func_uint16_t_u_u(0x48FF, ((safe_unary_minus_func_uint16_t_u(((*g_376) ^= p_3))) , (**l_20)))) , 0x109D)))), (**l_45))) != ((safe_add_func_int8_t_s_s((safe_mod_func_int16_t_s_s(((*l_869) = ((p_4 == (**l_20)) && l_868)), (**l_45))), 1U)) != 0x5B))), (**l_45)))));
    return (*l_20);
}
static int32_t * func_13(uint16_t p_14, int16_t p_15, int8_t p_16)
{
    int16_t l_18 = (-1);
    int32_t *l_19 = &g_12;
    l_18 = 0x8D3A18E4;
    return l_19;
}
static uint32_t func_21(int16_t p_22, int8_t p_23)
{
    uint32_t *l_600 = &g_289;
    int32_t l_620 = 6;
    uint32_t *l_632 = &g_154;
    int32_t ****l_634 = (void*)0;
    int32_t *****l_633 = &l_634;
    uint32_t *l_636 = &g_518;
    int32_t *l_637 = (void*)0;
    uint16_t *l_643 = &g_7;
    int32_t l_676 = 0x00CD75C9;
    int32_t l_709 = 0xAC51FBB9;
    int32_t l_711 = (-8);
    int32_t l_729 = 0x943528DA;
    int32_t l_735 = (-3);
    int32_t l_737 = 0x263C96B1;
    int32_t l_749 = 0xD20DEDAF;
    int32_t l_751 = (-10);
    int32_t **l_785 = &g_780;
    uint32_t **l_836 = &l_600;
    int32_t **l_853 = &l_637;
    for (g_196 = (-20); (g_196 >= (-12)); g_196++)
    {
        int16_t *l_594 = &g_517;
        int16_t **l_593 = &l_594;
        int32_t l_605 = 0;
        int32_t l_621 = 9;
        uint8_t *l_622 = (void*)0;
        uint8_t *l_623 = &g_75;
        uint32_t *l_624 = &g_154;
        int8_t l_625 = (-1);
        l_625 ^= (safe_sub_func_int16_t_s_s(1, (safe_div_func_int8_t_s_s(((safe_add_func_int16_t_s_s((0x2DCBE072 ^ (l_593 == ((((((safe_add_func_int32_t_s_s(((*g_11) ^= (!(safe_add_func_int16_t_s_s((l_600 == (((safe_mod_func_int16_t_s_s(g_517, ((safe_div_func_int8_t_s_s(l_605, ((*l_623) = (safe_add_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(((((*l_600) = (safe_add_func_int32_t_s_s((safe_add_func_int16_t_s_s((((l_621 &= (safe_rshift_func_int16_t_s_s((safe_div_func_int8_t_s_s((p_23 = ((0x53 <= p_23) , (safe_lshift_func_uint16_t_u_s((((p_22 <= g_7) >= 1U) > l_620), 9)))), 1)), 6))) <= l_620) <= l_605), l_620)), 0x1A75E040))) || p_23) == p_22), p_22)), 0xD8A2))))) | p_22))) & p_22) , l_624)), l_620)))), l_620)) | (*g_376)) < 0x06B7106A) <= p_22) , l_605) , &l_594))), l_605)) , p_23), 255U))));
        if (l_605)
            continue;
        (*g_11) = p_23;
    }
    if ((safe_div_func_int32_t_s_s((((((safe_add_func_uint16_t_u_u((g_289 & (((*l_636) &= (((l_620 , ((safe_sub_func_uint8_t_u_u((g_582 = (g_333 && ((*l_632) = 0x89C41765))), 0xAA)) && (l_620 | l_620))) <= (((void*)0 != l_633) == p_22)) , g_635)) , g_223)), g_69)) , 7) , 0x7E) != g_369) || p_22), 0x2FDA7249)))
    {
        uint16_t *l_642 = (void*)0;
        int32_t l_648 = 0x48E6E6E3;
        uint32_t **l_649 = &l_636;
        int32_t **l_650 = &g_374;
        int32_t *l_651 = &g_12;
        g_374 = l_637;
        for (g_333 = 14; (g_333 == 15); ++g_333)
        {
            (*g_11) = 7;
        }
        l_651 = ((*l_650) = func_13((g_266 < (p_22 && (safe_lshift_func_uint8_t_u_u(g_377, p_23)))), g_46, ((((l_643 = l_642) != l_642) , (safe_mod_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((((*l_649) = func_13(l_648, (l_648 ^ g_12), g_377)) != l_600), 3U)), 0xC37C))) && 0x52216D8C)));
    }
    else
    {
        int32_t *l_652 = &g_113;
        int32_t *l_653 = &l_620;
        int32_t *l_654 = &g_92;
        int32_t *l_655 = &g_113;
        int32_t *l_656 = &l_620;
        int32_t *l_657 = &l_620;
        int32_t *l_658 = &g_12;
        int32_t *l_659 = (void*)0;
        int32_t *l_660 = (void*)0;
        int32_t *l_661 = &g_196;
        int32_t *l_662 = &g_92;
        int32_t *l_663 = &g_92;
        int32_t *l_664 = &l_620;
        int32_t *l_665 = &g_92;
        int32_t *l_666 = &l_620;
        int32_t *l_667 = &g_12;
        int32_t *l_668 = &l_620;
        int32_t *l_669 = &g_113;
        int32_t *l_670 = (void*)0;
        int32_t *l_671 = &g_92;
        int32_t *l_672 = &g_12;
        int32_t *l_673 = (void*)0;
        int32_t *l_674 = &g_113;
        int32_t *l_675 = &g_196;
        int32_t *l_677 = &g_12;
        int32_t *l_678 = &g_92;
        int32_t *l_679 = (void*)0;
        int32_t *l_680 = &g_196;
        int32_t *l_681 = &l_676;
        int32_t *l_682 = &g_113;
        int32_t *l_683 = (void*)0;
        int32_t *l_684 = &g_12;
        int32_t *l_685 = &g_113;
        int32_t *l_686 = &l_620;
        int32_t *l_687 = &l_676;
        int32_t *l_688 = &l_676;
        int32_t *l_689 = &g_12;
        int32_t *l_690 = &l_676;
        int32_t *l_691 = &g_92;
        int32_t *l_692 = &g_12;
        int32_t *l_693 = &g_113;
        int32_t *l_694 = &g_113;
        int32_t l_695 = (-3);
        int32_t *l_696 = &g_92;
        int32_t *l_697 = (void*)0;
        int32_t l_698 = 1;
        int32_t *l_699 = &l_620;
        int32_t *l_700 = &l_695;
        int32_t *l_701 = &l_698;
        int32_t *l_702 = &l_620;
        int32_t *l_703 = &g_113;
        int32_t *l_704 = &l_620;
        int32_t l_705 = 0x5565A14C;
        int32_t *l_706 = &g_92;
        int32_t *l_707 = &g_113;
        int32_t *l_708 = &l_698;
        int32_t l_710 = 3;
        int32_t *l_712 = &l_705;
        int32_t *l_713 = &g_196;
        int32_t *l_714 = &l_705;
        int32_t *l_715 = &l_698;
        int32_t *l_716 = &l_695;
        int32_t *l_717 = &l_711;
        int32_t *l_718 = (void*)0;
        int32_t *l_719 = &g_92;
        int32_t *l_720 = &g_12;
        int32_t *l_721 = &l_709;
        int32_t *l_722 = &g_12;
        int32_t *l_723 = &l_711;
        int32_t *l_724 = &l_705;
        int32_t *l_725 = &l_709;
        int32_t *l_726 = &l_705;
        int32_t *l_727 = (void*)0;
        int32_t *l_728 = &l_711;
        int32_t *l_730 = &l_710;
        int32_t *l_731 = &l_676;
        int32_t *l_732 = (void*)0;
        int32_t *l_733 = (void*)0;
        int32_t *l_736 = &l_695;
        int32_t *l_738 = &l_735;
        int32_t *l_739 = &g_113;
        int32_t *l_740 = &g_196;
        int32_t *l_741 = &l_711;
        int32_t *l_742 = (void*)0;
        int32_t *l_743 = &l_705;
        int32_t *l_744 = &l_709;
        int32_t *l_745 = &g_12;
        int32_t *l_746 = &l_709;
        int32_t *l_747 = &l_711;
        int32_t *l_748 = &g_113;
        int32_t *l_750 = &g_12;
        int32_t *l_752 = &g_12;
        uint8_t *l_760 = &g_69;
        int16_t *l_773 = (void*)0;
        int16_t *l_774 = &g_517;
        int32_t *l_779 = &g_46;
        int32_t **l_778 = &l_779;
        int8_t *l_800 = &g_236;
        int32_t **l_820 = &l_678;
        int32_t ***l_819 = &l_820;
        uint16_t l_821 = 65535U;
        int8_t l_822 = (-10);
        uint32_t **l_823 = (void*)0;
        uint32_t **l_837 = (void*)0;
        uint16_t l_839 = 0U;
        uint32_t **l_850 = &l_636;
        g_753--;
        (*l_745) = ((((p_23 || (p_22 && ((0x4B48 <= ((*g_376) = (safe_lshift_func_int8_t_s_u((safe_add_func_int8_t_s_s((((*l_760) = g_190) && ((0 & (g_12 , (g_92 && ((&l_710 == (void*)0) & 4U)))) ^ 0x7A34)), p_23)), p_22)))) , g_190))) >= 0x3A70) ^ g_635) || 0x2866C1D6);
        if ((p_22 == (safe_add_func_uint32_t_u_u((p_23 , (safe_lshift_func_int16_t_s_s((safe_div_func_int8_t_s_s((g_381 , (safe_sub_func_int32_t_s_s(p_23, (((safe_mod_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_s(p_22, ((*l_774) = p_23))), ((((*g_376) = (((l_636 == (g_780 = ((*l_778) = func_13(p_22, (!(((safe_mod_func_uint32_t_u_u(0xE98F5385, g_635)) & p_23) > (-1))), p_23)))) || (*l_730)) ^ (*l_682))) != p_22) , p_22))) | p_22) == 0xE5)))), (*l_652))), 9))), (*g_11)))))
        {
            int32_t **l_784 = &l_779;
            uint32_t *l_788 = &g_518;
            int8_t *l_797 = &g_236;
            int32_t l_811 = 0;
            (*l_713) ^= p_22;
            if ((~(&p_23 != ((safe_sub_func_uint32_t_u_u((((((l_784 == l_785) || ((((safe_add_func_uint32_t_u_u(g_517, ((l_636 = l_632) == l_788))) , (safe_div_func_int16_t_s_s((safe_div_func_int32_t_s_s(((safe_sub_func_int16_t_s_s((((((*l_797) |= ((++(*l_760)) != (g_75 || p_22))) || (safe_div_func_uint32_t_u_u(((p_22 , (void*)0) != l_632), (*l_728)))) && 0x26) , 1), g_369)) ^ 0xB7), g_196)), (*l_654)))) >= (-3)) || 2)) , p_22) < (*l_740)) >= p_23), p_22)) , l_800))))
            {
                int32_t *****l_808 = &l_634;
                uint32_t ***l_824 = &l_823;
                (*l_686) = p_22;
                for (g_582 = 17; (g_582 > 48); g_582++)
                {
                    int32_t *l_806 = &g_92;
                    for (l_676 = (-6); (l_676 != 10); l_676 = safe_add_func_int8_t_s_s(l_676, 8))
                    {
                        int32_t *l_805 = &g_92;
                        l_805 = &g_196;
                        l_806 = l_788;
                        l_808 = g_807;
                    }
                    g_374 = &l_695;
                    (*l_820) = ((((l_788 != (void*)0) , (p_22 > p_22)) ^ (((*l_760) &= ((safe_mod_func_uint8_t_u_u((p_23 , ((((l_811 <= ((*l_774) = ((safe_unary_minus_func_int32_t_s(((((((p_22 != l_811) > (safe_mod_func_uint32_t_u_u((safe_mod_func_int8_t_s_s(((*l_797) = (((safe_div_func_int32_t_s_s(((((l_819 != &l_820) , p_23) != (-1)) || (-1)), p_23)) , g_333) , g_381)), p_23)), (*l_690)))) , g_190) == l_821) && g_134) , p_22))) == 1U))) >= 0x8C005219) & p_23) , 255U)), l_822)) && 4294967295U)) ^ g_734)) , (**l_819));
                    if ((*g_374))
                        break;
                }
                (*l_824) = l_823;
                return g_223;
            }
            else
            {
                (**l_819) = (**l_819);
            }
            for (g_518 = 0; (g_518 >= 36); g_518 = safe_add_func_uint8_t_u_u(g_518, 1))
            {
                uint32_t ***l_833 = &l_823;
                uint32_t **l_835 = (void*)0;
                uint32_t ***l_834 = &l_835;
                int32_t l_838 = 0;
                (*l_699) &= ((l_811 < (safe_mod_func_int8_t_s_s(((safe_mod_func_uint32_t_u_u(((((*l_833) = g_831) != ((*l_834) = &g_832)) || 0x7BD1B394), ((*l_662) = ((p_23 >= p_23) , (((((7 > g_582) , ((l_836 = &g_832) != l_837)) ^ l_838) & p_23) , l_839))))) < 1), g_12))) , 4);
            }
        }
        else
        {
            int32_t *l_840 = &l_751;
            uint32_t **l_845 = &l_600;
            (***l_819) = (((*l_633) = &g_98) != &l_819);
            (*l_820) = l_840;
            (*l_720) = (((safe_sub_func_int16_t_s_s((((((*l_774) = p_22) | (((*l_741) , (((g_582 &= ((((safe_sub_func_int8_t_s_s((l_845 != (void*)0), ((*l_760) = (((safe_rshift_func_int8_t_s_s((((g_12 ^ 0x1A) < (-1)) ^ g_7), (safe_add_func_int16_t_s_s((l_850 != g_851), 0x9BB6)))) >= p_23) || 0)))) & (*l_840)) , 4294967295U) > 0x10BD9416)) == g_753) , (*g_376))) ^ (-3))) || (*l_840)) != (*g_376)), 5)) ^ p_23) | (*l_700));
        }
    }
    (*l_853) = &l_620;
    return p_22;
}
static int16_t func_24(uint16_t * p_25, uint8_t p_26, int32_t ** p_27)
{
    uint8_t l_581 = 0xA5;
    for (g_289 = 0; (g_289 >= 60); g_289++)
    {
        g_113 &= (*g_11);
        if ((**p_27))
            break;
        return l_581;
    }
    return p_26;
}
static uint16_t * func_28(uint16_t * p_29, int32_t p_30, uint16_t p_31, int32_t ** p_32, uint16_t * p_33)
{
    uint16_t l_380 = 0U;
    int8_t *l_383 = &g_236;
    int32_t ****l_390 = &g_98;
    int8_t l_401 = 0x4F;
    int32_t l_420 = 0xD7926888;
    int32_t l_444 = 0x447BCE47;
    uint32_t l_453 = 0x51732A5C;
    int32_t *l_456 = &l_420;
    int32_t l_466 = 0;
    uint8_t l_484 = 8U;
    uint32_t l_487 = 0U;
    int8_t l_489 = 8;
    int32_t l_490 = 0x909606A0;
    int32_t *l_492 = &l_420;
    int32_t l_508 = (-1);
    int16_t *l_516 = &g_517;
    int16_t **l_515 = &l_516;
    int16_t *l_519 = &g_517;
    uint16_t *l_520 = &g_369;
    int32_t **l_521 = &l_456;
    int32_t **l_522 = &l_492;
    uint32_t *l_542 = &g_289;
    uint32_t l_551 = 0x3E9099EA;
    int16_t l_576 = 0;
    if ((safe_add_func_int16_t_s_s(l_380, (g_381 >= (*p_33)))))
    {
        int8_t *l_382 = &g_266;
        int32_t l_393 = 8;
        uint16_t l_415 = 1U;
        uint32_t l_419 = 6U;
        int32_t l_426 = 0;
        (*g_374) = (*g_374);
        if ((l_393 = ((l_382 == l_383) && (safe_unary_minus_func_int8_t_s(((((((((((!(((safe_sub_func_int32_t_s_s((**p_32), (((l_390 != l_390) ^ (((l_383 != (void*)0) >= (safe_add_func_uint16_t_u_u((g_196 , 65535U), 0x89EA))) < (*g_11))) <= p_30))) || p_31) , p_30)) , (-1)) == 8) & 65535U) < (*p_33)) & 0x58) != p_31) | g_381) || p_31) ^ g_113))))))
        {
            int32_t **l_394 = &g_374;
            uint8_t *l_397 = &g_190;
            int32_t *l_398 = &g_113;
            int16_t l_399 = 1;
            (*l_394) = (void*)0;
            (*l_398) = (((*l_397) &= (safe_add_func_uint16_t_u_u(((*g_376) &= ((void*)0 != &p_33)), p_30))) ^ ((void*)0 != &g_98));
            l_399 |= 1;
            return (*g_331);
        }
        else
        {
            int16_t l_400 = 0xF979;
            uint32_t l_414 = 0x069DA9D1;
            int16_t *l_416 = (void*)0;
            int16_t *l_417 = &l_400;
            uint32_t l_418 = 7U;
            int32_t l_421 = 0xCC5206A4;
            int32_t *l_422 = &g_113;
            int32_t *l_423 = &g_92;
            int32_t *l_424 = (void*)0;
            int32_t *l_425 = &l_420;
            int32_t *l_427 = &g_92;
            int32_t *l_428 = &g_113;
            int32_t *l_429 = &g_92;
            int32_t *l_430 = (void*)0;
            int32_t *l_431 = &l_420;
            int32_t *l_432 = &l_420;
            int32_t *l_433 = (void*)0;
            int32_t *l_434 = (void*)0;
            int32_t *l_435 = &g_92;
            int32_t *l_436 = &g_113;
            int32_t *l_437 = &g_113;
            int32_t l_438 = (-8);
            int32_t *l_439 = (void*)0;
            int32_t *l_440 = &l_421;
            int32_t *l_441 = &g_113;
            int32_t *l_442 = &g_92;
            int32_t *l_443 = &l_420;
            int32_t l_445 = 0xB97F08B3;
            int32_t *l_446 = (void*)0;
            int32_t *l_447 = &l_445;
            int32_t *l_448 = &l_421;
            int32_t l_449 = 0;
            int32_t *l_450 = &l_420;
            int32_t *l_451 = (void*)0;
            int32_t *l_452 = (void*)0;
            (*g_374) |= l_400;
            (*g_374) = ((((((*g_11) , l_401) | l_401) == (((((safe_mod_func_int16_t_s_s(0xF580, l_393)) , (safe_div_func_int16_t_s_s(0xDFDB, (((safe_sub_func_int16_t_s_s(((~2) < ((*l_417) ^= (safe_lshift_func_uint8_t_u_s((safe_div_func_uint8_t_u_u(((0U >= (!(l_414 == (**p_32)))) & l_393), p_31)), l_415)))), (*g_376))) ^ l_418) || g_12)))) <= 0xD2) , l_419) >= 0x56)) , g_108) & l_419);
            ++l_453;
        }
        l_456 = &l_393;
        (*g_374) &= ((*l_456) = (**p_32));
    }
    else
    {
        int32_t *l_457 = &g_92;
        uint8_t *l_483 = &g_75;
        uint8_t *l_485 = (void*)0;
        uint8_t *l_486 = &g_190;
        uint32_t *l_488 = &g_10;
        int32_t *l_491 = &l_444;
        l_457 = (*p_32);
        (*g_374) = ((*g_331) == (*g_331));
        (*l_491) ^= (safe_rshift_func_uint8_t_u_s(((((safe_sub_func_int8_t_s_s((+0x3B492582), (!(((*g_374) = (safe_add_func_int32_t_s_s(l_466, p_31))) || ((safe_rshift_func_int8_t_s_s((safe_div_func_uint16_t_u_u((safe_div_func_uint16_t_u_u(0x95D1, (safe_sub_func_int8_t_s_s(((((**p_32) , ((g_154 | (((((*l_383) &= (((*l_488) = (((safe_lshift_func_uint8_t_u_u(((((*l_390) = &p_32) != (((((safe_rshift_func_uint8_t_u_u(((*l_486) ^= ((((g_266 &= ((((*l_483) = (safe_lshift_func_uint8_t_u_s(p_30, (safe_mod_func_uint8_t_u_u(p_30, 0x1A))))) == (*l_457)) & l_484)) || g_69) >= 0xDD) && g_12)), 7)) , (**p_32)) , (*l_457)) && p_30) , &p_32)) , g_333), 4)) && (**p_32)) == l_487)) != (*l_456))) >= g_113) != g_69) , l_489)) , g_377)) < p_31) ^ (*g_374)), l_490)))), 1)), 1)) != 4U))))) , (*l_390)) != &p_32) | g_12), g_381));
    }
    (*l_492) = ((*g_374) &= ((void*)0 != &l_401));
    if ((g_332 != ((*l_515) = func_57((p_31 , ((*l_522) = func_13(((*l_520) = (((safe_div_func_int32_t_s_s((safe_div_func_uint8_t_u_u(((((~((*l_519) = ((((0 < ((*l_492) = (((safe_lshift_func_uint16_t_u_u(((safe_sub_func_uint16_t_u_u((--(*g_376)), (safe_add_func_int16_t_s_s(g_12, ((((*l_515) = (p_31 , func_34(p_32, (*l_492), ((safe_lshift_func_int8_t_s_u((l_508 <= (safe_add_func_int16_t_s_s((((safe_div_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_u((0xDC | g_92), (*l_492))) < p_30), 2)) , (**p_32)) & (*l_492)), 0))), 4)) ^ g_196)))) != &g_517) , (-10)))))) ^ (*l_492)), 9)) ^ g_518) & (*l_492)))) || (*p_33)) != p_30) <= 0U))) ^ 0x5F7D) && (*l_492)) && (*g_376)), g_46)), 0x142EE290)) || g_196) , 65526U)), g_289, g_236))), g_10, g_154))))
    {
        uint16_t l_530 = 0x9E4D;
        uint8_t l_533 = 255U;
        (*g_374) = ((((*l_383) = (safe_add_func_uint32_t_u_u(0U, (safe_add_func_int32_t_s_s((safe_unary_minus_func_uint16_t_u(((((safe_rshift_func_int16_t_s_u((l_530 > (((*l_492) | ((p_30 , (-9)) , (((p_30 , (safe_lshift_func_int8_t_s_s((p_30 & ((**p_32) && ((**l_522) & 0x7CE8))), p_31))) <= p_31) || 0U))) || l_533)), (*g_376))) | (*g_376)) & l_533) != (*g_11)))), (**p_32)))))) || l_533) <= (*g_376));
    }
    else
    {
        int8_t *l_543 = &g_223;
        int32_t l_544 = 0xE3E17F14;
        int32_t l_564 = 0;
        int32_t *l_565 = &l_420;
        l_544 &= ((((safe_div_func_int8_t_s_s(0, (safe_mod_func_int16_t_s_s(p_31, ((p_31 , ((*g_376) <= (safe_div_func_uint32_t_u_u(((0x9D1F99BF ^ ((**l_522) == ((**l_515) |= (p_31 > (safe_sub_func_int8_t_s_s(((*l_383) = p_30), ((*l_543) = (l_542 == (void*)0)))))))) <= p_30), (**l_522))))) , (*g_376)))))) > g_140) && p_30) | g_333);
        (*g_374) |= ((((safe_sub_func_uint32_t_u_u((((*g_331) = func_34(p_32, l_544, p_31)) != (void*)0), (1 > (g_46 < (g_12 == ((safe_div_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((*g_376), g_223)), p_31)) , 0xC733)))))) <= p_31) ^ 0xFEEA) == p_30);
        l_551 &= 0x87219A0B;
        (*l_565) &= (((safe_rshift_func_int8_t_s_u((safe_div_func_uint32_t_u_u(((4294967295U < ((*g_374) &= (safe_mod_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((((g_236 >= l_544) ^ 2) & p_31), 2)), (safe_add_func_int16_t_s_s(p_31, (l_564 = ((*l_516) = (safe_sub_func_int8_t_s_s(g_518, ((void*)0 == &g_517))))))))))) < (*l_492)), 2U)), 5)) , g_223) <= 0U);
    }
    (*g_374) = ((((safe_add_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((*g_374), (((((safe_lshift_func_int8_t_s_u(((safe_lshift_func_uint8_t_u_s(0U, (safe_rshift_func_uint8_t_u_u(l_576, (safe_add_func_int32_t_s_s((g_10 , (p_30 == (0x17 || ((((*l_383) = g_381) , ((*p_33) , (p_30 >= g_154))) <= 0x9A76D4F9)))), (*g_374))))))) <= (*g_374)), 7)) ^ 0x24) > 0x52) > g_333) == 65528U))), g_223)) & (-6)) & 255U) | (**p_32));
    return (*g_331);
}
static uint16_t * func_34(int32_t ** p_35, uint16_t p_36, uint32_t p_37)
{
    return (*g_331);
}
static int32_t ** func_38(uint32_t p_39, uint16_t * p_40, int16_t p_41, int32_t p_42, int32_t ** p_43)
{
    int32_t *l_56 = &g_12;
    int32_t *l_62 = &g_12;
    int32_t **l_61 = &l_62;
    uint8_t *l_68 = &g_69;
    int32_t ***l_71 = (void*)0;
    int32_t **l_73 = &g_11;
    int32_t ***l_72 = &l_73;
    uint8_t *l_74 = &g_75;
    int16_t l_194 = 1;
    int32_t *l_195 = &g_196;
    uint8_t l_206 = 0x83;
    uint32_t l_219 = 0xE2574B05;
    int32_t l_244 = 0xD5895350;
    int32_t l_250 = 1;
    (*l_195) ^= (safe_mod_func_int32_t_s_s(((safe_div_func_uint32_t_u_u(((((safe_rshift_func_int16_t_s_s(func_53(l_56, func_57(((*l_61) = &g_12), (!(safe_add_func_int16_t_s_s((*l_56), p_42))), ((((p_39 & p_42) != ((((safe_mod_func_uint8_t_u_u(((*l_68) = (*l_56)), ((*l_74) = (safe_unary_minus_func_uint32_t_u(((((*l_72) = p_43) != (((p_42 <= g_46) >= (**p_43)) , &g_11)) > g_7)))))) , 1) & g_7) > p_41)) , g_46) && 0))), p_42)) | g_134) , (*g_11)) || (**p_43)), l_194)) & (*l_56)), g_140));
    for (g_196 = 0; (g_196 >= (-1)); g_196--)
    {
        uint32_t l_204 = 4294967291U;
        int32_t l_205 = 0xE60EB54A;
        l_205 |= (safe_lshift_func_int16_t_s_s(((!p_39) < ((*l_73) != (l_204 , (*l_73)))), 1));
    }
    if ((g_108 || l_206))
    {
        int32_t l_209 = 1;
        uint8_t *l_241 = (void*)0;
        uint32_t l_249 = 7U;
        uint16_t l_261 = 0xB904;
        uint32_t l_267 = 1U;
        uint16_t *l_294 = &g_7;
        uint16_t **l_293 = &l_294;
        int16_t l_330 = 1;
        int32_t *l_334 = &l_244;
        (*l_195) = (safe_div_func_uint32_t_u_u(l_209, (**p_43)));
        for (g_7 = (-3); (g_7 <= 23); g_7++)
        {
            int32_t l_212 = 0x89317E4F;
            int32_t l_288 = (-2);
            int32_t l_290 = (-5);
            int8_t *l_307 = &g_223;
            int8_t *l_308 = (void*)0;
            if (l_212)
            {
                int32_t **l_213 = &l_62;
                int8_t *l_218 = &g_108;
                int8_t *l_220 = (void*)0;
                int8_t *l_221 = (void*)0;
                int8_t *l_222 = &g_223;
                uint32_t *l_226 = &g_154;
                uint16_t *l_230 = &g_7;
                uint16_t **l_229 = &l_230;
                int8_t *l_235 = &g_236;
                (*l_195) = ((((l_213 != (void*)0) & (safe_sub_func_int8_t_s_s(((*l_222) |= (l_219 = ((*l_218) = (safe_lshift_func_int16_t_s_u(g_134, g_75))))), ((*l_68) = (safe_lshift_func_uint8_t_u_u((((*l_226) |= l_212) & (((safe_add_func_int16_t_s_s((&g_7 != ((*l_229) = &g_7)), (p_41 |= (**l_213)))) & ((((safe_mod_func_uint16_t_u_u(((((*l_235) = (((safe_mod_func_int16_t_s_s(p_39, 0xEBDE)) || (**l_213)) , l_212)) & l_209) , g_7), l_209)) ^ l_212) ^ g_140) , g_10)) != 0x5C)), g_10)))))) >= (*g_11)) != (-6));
            }
            else
            {
                uint32_t l_246 = 4294967295U;
                int32_t l_272 = 0;
                int32_t ****l_291 = &l_71;
                int32_t *****l_292 = &l_291;
                for (g_190 = (-1); (g_190 <= 40); g_190++)
                {
                    for (g_140 = 0; (g_140 >= (-2)); g_140 = safe_sub_func_uint8_t_u_u(g_140, 8))
                    {
                        int32_t *l_245 = &g_46;
                        int8_t *l_262 = (void*)0;
                        int8_t *l_263 = &g_108;
                        (*l_61) = func_13((l_241 == &g_190), ((**p_43) > (safe_rshift_func_uint8_t_u_u((((*l_245) = l_244) , g_12), l_246))), ((((*l_195) ^= (**p_43)) ^ (((safe_div_func_uint32_t_u_u((((&g_75 == l_241) >= 254U) , p_39), l_249)) <= (**p_43)) ^ p_42)) != l_250));
                        (*l_61) = ((((safe_lshift_func_int8_t_s_u(((*l_263) = ((((safe_sub_func_uint32_t_u_u(4294967288U, (safe_add_func_uint8_t_u_u(g_196, l_246)))) || ((((g_223 , (((safe_rshift_func_int8_t_s_u((-6), ((**p_43) < ((-3) == 9)))) , ((l_261 | (*l_195)) , (-2))) , g_46)) >= p_41) || g_108) != 0x3E77)) ^ g_108) != g_12)), l_261)) < l_212) , 0xC2572027) , (*p_43));
                        g_113 |= (**p_43);
                    }
                    for (p_39 = 0; (p_39 != 21); ++p_39)
                    {
                        (*l_61) = func_13(l_246, (g_266 = g_108), l_267);
                        (*l_195) = (**p_43);
                        if ((*g_11))
                            continue;
                    }
                }
                for (p_41 = 0; (p_41 == 24); p_41 = safe_add_func_int8_t_s_s(p_41, 1))
                {
                    uint16_t *l_271 = &l_261;
                    l_272 = (+((*l_271) = g_236));
                    (*l_61) = &l_212;
                    l_209 = 1;
                    (*l_61) = &g_196;
                }
                (*l_195) = (l_290 |= (safe_div_func_int8_t_s_s((safe_sub_func_int16_t_s_s((((((((safe_lshift_func_uint8_t_u_u(((*l_68) = (l_212 ^= ((0xC3 < g_92) && (((+(**p_43)) ^ (p_42 ^ (l_272 != 0x831FD11E))) , (safe_lshift_func_uint8_t_u_s(((safe_mod_func_int8_t_s_s(((safe_add_func_int16_t_s_s((safe_add_func_int8_t_s_s((g_46 <= (*l_56)), (p_42 < 0xCE7FF7C5))), g_266)) != g_196), p_39)) <= 1U), 7)))))), p_39)) && p_42) , p_42) , g_236) < l_288) >= g_140) >= g_289), 1)), g_75)));
                (*l_292) = l_291;
            }
            (*l_61) = func_13(g_75, (&p_40 != l_293), ((safe_div_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u(((void*)0 == l_241), 6)), (*l_62))) > (((safe_sub_func_uint8_t_u_u(((safe_div_func_uint32_t_u_u((safe_div_func_uint32_t_u_u((g_75 , (g_223 , (safe_lshift_func_int16_t_s_s((((*l_68) = ((l_212 ^ 1) , p_42)) || g_134), g_190)))), l_290)), 0xF6CD2DBE)) ^ l_249), g_10)) , l_307) != l_308)));
            if ((*g_11))
                break;
        }
        (*l_334) ^= (safe_rshift_func_int16_t_s_u((safe_div_func_int32_t_s_s((safe_div_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s(l_249, ((safe_mod_func_uint8_t_u_u((((1 == (safe_lshift_func_int16_t_s_s((0xD1 | (safe_unary_minus_func_uint8_t_u(g_134))), ((((*g_331) = func_57(&l_209, (safe_div_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s(0xE869, (safe_div_func_uint32_t_u_u(((0x19 ^ (g_92 , (((safe_mod_func_uint32_t_u_u((((l_261 , 0U) && (*l_195)) < l_330), 0x09D1445D)) , &p_40) != g_331))) < 0xE174), 0xC8010362)))), g_333)), g_190)) != (*l_293)) > p_42)))) > p_41) || g_223), 6)) == g_196))), l_209)), (*g_11))), 13));
    }
    else
    {
        uint8_t l_337 = 1U;
        int32_t l_350 = 0x2993E52E;
        uint16_t *l_364 = &g_7;
        int32_t ****l_365 = &g_98;
        int8_t *l_366 = (void*)0;
        int8_t *l_367 = &g_223;
        uint16_t *l_368 = &g_369;
        int32_t l_370 = 1;
        l_370 |= (safe_mod_func_int32_t_s_s(((l_337 , ((safe_lshift_func_int16_t_s_u(((((*l_368) = (+((*l_367) |= (4294967295U || (safe_sub_func_int8_t_s_s((((*l_195) |= ((((safe_rshift_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(((~4294967294U) & ((safe_div_func_int32_t_s_s(((l_350 = p_39) <= p_42), (-1))) & (((safe_rshift_func_int8_t_s_u((((safe_sub_func_int8_t_s_s(((safe_unary_minus_func_int16_t_s((0xBF3EA2FF ^ ((((***l_72) ^ (safe_mod_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(((safe_rshift_func_uint16_t_u_u(((*l_364) = l_337), (*l_62))) || 0x132B8B98), 6)), (-1)))) , p_42) < p_39)))) >= (**p_43)), (*l_62))) >= (-9)) < 0U), 7)) , &l_71) != l_365))), g_10)), 5)) || (**p_43)) , 4294967295U) && (*g_11))) , g_333), 0x3A)))))) , &p_43) != (void*)0), 6)) && 0x55)) >= 0x42488E89), (*l_62)));
        (*l_195) &= (*l_56);
        for (g_10 = 0; (g_10 <= 30); ++g_10)
        {
            uint8_t l_373 = 0x2F;
            if (l_373)
                break;
        }
        (*l_61) = g_374;
    }
    return &g_11;
}
static int16_t func_53(int32_t * p_54, uint16_t * p_55)
{
    int16_t l_163 = (-8);
    int32_t *l_174 = &g_92;
    int32_t *l_175 = &g_113;
    int32_t *l_176 = &g_113;
    int32_t *l_177 = &g_92;
    int32_t l_178 = 0;
    int32_t *l_179 = &g_113;
    int32_t *l_180 = &g_92;
    int32_t *l_181 = &g_113;
    int32_t *l_182 = &g_113;
    int32_t *l_183 = (void*)0;
    int32_t *l_184 = &l_178;
    int32_t *l_185 = &l_178;
    int32_t *l_186 = (void*)0;
    int32_t *l_187 = (void*)0;
    int32_t l_188 = (-9);
    int32_t *l_189 = &g_113;
    int32_t l_193 = (-8);
    (*l_174) &= ((safe_rshift_func_int8_t_s_u(((0x3D > (-1)) != (safe_sub_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s(65535U, 15)), g_69))), l_163)) , ((safe_lshift_func_int16_t_s_u(l_163, 6)) & (l_163 == (0x22 < (!(safe_add_func_uint32_t_u_u((((safe_div_func_int32_t_s_s((+(l_163 != g_46)), 0xEB4CA122)) == l_163) || l_163), 1)))))));
    g_190++;
    return l_193;
}
static uint16_t * func_57(int32_t * p_58, uint32_t p_59, uint32_t p_60)
{
    uint32_t l_78 = 1U;
    uint8_t *l_104 = &g_69;
    int32_t l_109 = 0x3A129387;
    int32_t *l_114 = &g_92;
    int32_t *l_115 = &g_92;
    int32_t *l_116 = (void*)0;
    int32_t *l_117 = &l_109;
    int32_t *l_118 = &g_92;
    int32_t l_119 = 0x65C771C7;
    int32_t *l_120 = &l_109;
    int32_t *l_121 = (void*)0;
    int32_t *l_122 = (void*)0;
    int32_t *l_123 = &l_109;
    int32_t *l_124 = &g_92;
    int32_t *l_125 = &l_119;
    int32_t *l_126 = &g_113;
    int32_t *l_127 = &l_109;
    int32_t *l_128 = &g_113;
    int32_t *l_129 = &g_92;
    int32_t l_130 = 8;
    int32_t *l_131 = (void*)0;
    int32_t *l_132 = (void*)0;
    int32_t *l_133 = &l_130;
    int32_t *l_135 = &l_130;
    int32_t *l_136 = &g_92;
    int32_t *l_137 = (void*)0;
    int32_t *l_138 = &g_113;
    int32_t *l_139 = &l_130;
    int32_t *l_141 = (void*)0;
    int32_t *l_142 = &l_109;
    int32_t *l_143 = &l_130;
    int32_t *l_144 = &l_109;
    int32_t *l_145 = &g_113;
    int32_t *l_146 = &l_109;
    int32_t l_147 = 0;
    int32_t *l_148 = &g_113;
    int32_t *l_149 = &g_113;
    int32_t *l_150 = &l_119;
    int32_t *l_151 = &l_109;
    int32_t *l_152 = &g_92;
    int32_t *l_153 = (void*)0;
    for (g_46 = 0; (g_46 <= 22); g_46 = safe_add_func_int32_t_s_s(g_46, 9))
    {
        uint8_t *l_89 = &g_75;
        uint32_t l_90 = 0xFE378062;
        int32_t *l_91 = &g_92;
        int32_t **l_94 = &l_91;
        int32_t ***l_93 = &l_94;
        int8_t *l_105 = (void*)0;
        int8_t *l_106 = (void*)0;
        int8_t *l_107 = &g_108;
        int32_t *l_110 = (void*)0;
        int32_t *l_111 = (void*)0;
        int32_t *l_112 = &g_113;
        if (l_78)
            break;
        (*l_91) |= (safe_add_func_uint32_t_u_u((((safe_mod_func_uint8_t_u_u(((0 && (((safe_sub_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(p_60, p_59)), (safe_mod_func_uint32_t_u_u((((&p_58 != &p_58) & ((g_69 != (((void*)0 != l_89) < l_90)) && p_60)) >= p_60), l_90)))) ^ 0x1C) ^ g_75)) > (-1)), 4)) , l_78) <= g_46), l_90));
        (*l_112) |= (((((((*l_93) = &g_11) != &p_58) != (*p_58)) && (safe_rshift_func_int8_t_s_s(g_46, 6))) , ((l_109 &= (safe_unary_minus_func_uint16_t_u(((&l_94 != g_98) , (g_7 = (safe_mod_func_int8_t_s_s(((*l_91) = ((((~(((safe_div_func_uint32_t_u_u(((((*l_107) &= ((((p_59 , l_104) != &g_75) | 1) | 1U)) > p_59) & p_59), (-7))) , p_59) < 0x1AD8)) >= g_69) , 0) & l_78)), g_69))))))) > (-1))) >= l_78);
    }
    g_154--;
    return &g_7;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    g_98 = 0;
    csmith_sink_ = g_7;
    csmith_sink_ = g_10;
    csmith_sink_ = g_12;
    csmith_sink_ = g_46;
    csmith_sink_ = g_69;
    csmith_sink_ = g_75;
    csmith_sink_ = g_92;
    csmith_sink_ = g_108;
    csmith_sink_ = g_113;
    csmith_sink_ = g_134;
    csmith_sink_ = g_140;
    csmith_sink_ = g_154;
    csmith_sink_ = g_190;
    csmith_sink_ = g_196;
    csmith_sink_ = g_223;
    csmith_sink_ = g_236;
    csmith_sink_ = g_266;
    csmith_sink_ = g_289;
    csmith_sink_ = g_333;
    csmith_sink_ = g_369;
    csmith_sink_ = g_377;
    csmith_sink_ = g_381;
    csmith_sink_ = g_517;
    csmith_sink_ = g_518;
    csmith_sink_ = g_582;
    csmith_sink_ = g_635;
    csmith_sink_ = g_734;
    csmith_sink_ = g_753;
    platform_main_end(0,0);
    return 0;
}
