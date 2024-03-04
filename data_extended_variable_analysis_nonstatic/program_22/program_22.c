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
struct S1 {
   signed f0 : 2;
   uint16_t f1;
   signed f2 : 12;
   signed f3 : 19;
   unsigned f4 : 14;
};
struct S2 {
   int16_t f0;
   uint8_t f1;
   uint32_t f2;
   int32_t f3;
   int16_t f4;
};
struct S0 {
   uint8_t f0;
   signed f1 : 4;
   uint32_t f2;
};
struct S3 {
   int32_t f0;
   struct S0 f1;
};
struct S4 {
   int32_t f0;
   uint32_t f1;
   int16_t f2;
   int32_t f3;
   signed f4 : 3;
   unsigned f5 : 22;
   struct S0 f6;
   signed f7 : 21;
   int8_t f8;
};
struct S5 {
   signed f0 : 31;
   signed f1 : 10;
   unsigned f2 : 27;
   signed f3 : 13;
   signed f4 : 4;
   signed f5 : 31;
   signed f6 : 29;
};
struct S6 {
   int32_t f0;
   uint32_t f1;
   uint8_t f2;
   uint8_t f3;
   struct S1 f4;
   struct S4 f5;
   uint32_t f6;
   struct S2 f7;
   int8_t f8;
};
static int32_t g_2 = (-1);
static uint32_t g_22 = 0x30B137D3;
static uint32_t g_25 = 0x618D7C58;
static int8_t g_26 = 1;
static uint8_t g_29 = 0U;
static int16_t g_98 = 1;
static uint32_t g_130 = 4294967295U;
static int16_t g_150 = 1;
static struct S2 g_165 = {2,0x44,3U,-9,-1};
static int8_t g_167 = 0x54;
static uint32_t g_168 = 0xC974F601;
static struct S1 g_171 = {-0,65526U,53,6,73};
static uint32_t g_175 = 0xF8277DDD;
static int8_t g_210 = 0;
static int8_t g_212 = (-5);
static int8_t g_213 = 0x70;
static int32_t g_214 = 2;
static uint32_t g_215 = 8U;
static uint8_t g_276 = 253U;
static uint16_t g_370 = 0xB1AD;
static struct S4 g_457 = {-1,1U,-1,0x541A7B9A,-1,310,{251U,-2,1U},175,0xBF};
static struct S6 g_475 = {0,0xF5BBFEBD,0x09,255U,{0,1U,-22,-229,121},{0x6153CF38,0x014C9FED,0x757B,-5,1,866,{0U,-1,4294967295U},-226,1},0x951FFD2F,{0x792E,255U,0xC77A69A3,4,0x31B6},0x01};
static uint32_t g_574 = 0x4290EE5F;
static uint32_t g_612 = 2U;
static uint8_t g_713 = 0x4D;
inline static uint32_t func_1(void);
static uint16_t func_5(uint16_t p_6, int16_t p_7, uint16_t p_8, int32_t p_9);
static int32_t func_31(uint8_t p_32, uint8_t p_33, uint32_t p_34, uint32_t p_35, uint32_t p_36);
static int8_t func_43(int8_t p_44);
static int8_t func_47(uint32_t p_48, uint32_t p_49);
static int8_t func_56(uint8_t p_57, int16_t p_58);
static int16_t func_62(uint32_t p_63, uint32_t p_64, uint32_t p_65, int32_t p_66);
inline static int8_t func_78(uint8_t p_79, uint32_t p_80, int16_t p_81);
inline static uint16_t func_87(int32_t p_88);
inline static uint32_t func_91(uint8_t p_92, int32_t p_93);
inline static uint32_t func_1(void)
{
    uint8_t l_14 = 5U;
    int32_t l_20 = 0x221EBC5F;
    int8_t l_21 = 0xE7;
    uint16_t l_30 = 0xF6DA;
    for (g_2 = 0; (g_2 <= 9); g_2++)
    {
        int8_t l_10 = 0xF4;
        uint8_t l_15 = 1U;
        int32_t l_18 = 0;
        int32_t l_19 = (-1);
        int32_t l_577 = (-4);
        l_15 = ((0x5F27 != (func_5(g_2, g_2, ((0xC84B != 0x8319) ^ 1U), l_10) && func_5(l_10, l_10, l_14, g_2))) ^ l_10);
        for (l_14 = 23; (l_14 > 17); l_14--)
        {
            g_22++;
            if (g_22)
            {
                g_25 ^= (g_22 != 0x997736EA);
            }
            else
            {
                g_26 = 0x81F6ED73;
            }
            g_29 = (safe_lshift_func_uint16_t_u_u(l_19, l_20));
            if (l_30)
                break;
        }
        g_713 ^= func_31(l_14, (+(((safe_mod_func_uint8_t_u_u(((l_21 == ((1U ^ l_10) >= 65531U)) | ((safe_unary_minus_func_uint16_t_u(((0x9980A6F8 < (safe_rshift_func_int8_t_s_u(func_43(func_5(((safe_mod_func_int8_t_s_s(func_47((safe_lshift_func_int16_t_s_u(((safe_sub_func_uint8_t_u_u(func_5((safe_mod_func_int8_t_s_s(func_56(g_25, l_30), 0x0C)), g_25, g_26, l_14), g_26)) <= 250U), 2)), g_2), g_457.f1)) & 0x753B8153), g_457.f0, l_577, l_21)), l_21))) ^ l_18))) == l_21)), g_212)) && (-7)) ^ l_19)), l_15, l_15, g_457.f3);
        l_18 = l_21;
    }
    return g_475.f4.f2;
}
static uint16_t func_5(uint16_t p_6, int16_t p_7, uint16_t p_8, int32_t p_9)
{
    uint32_t l_11 = 0xAF953423;
    --l_11;
    return p_9;
}
static int32_t func_31(uint8_t p_32, uint8_t p_33, uint32_t p_34, uint32_t p_35, uint32_t p_36)
{
    uint16_t l_581 = 0x8EF2;
    int32_t l_598 = 0x50DB643D;
    int32_t l_599 = 0x3593B1CD;
    int32_t l_601 = 0x3638035F;
    int32_t l_604 = 0xFF8510DB;
    int32_t l_606 = 1;
    int32_t l_608 = 0xB2CCB7F4;
    int32_t l_609 = 0x671A7418;
    int16_t l_629 = 1;
    int16_t l_641 = 0xDDEC;
    struct S2 l_642 = {0xBBB0,0xE7,0x49798385,-1,7};
    int8_t l_650 = 0x90;
    uint32_t l_691 = 4U;
    if ((safe_lshift_func_int16_t_s_s(l_581, (p_34 || ((safe_unary_minus_func_int16_t_s(((safe_mod_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((((-9) ^ (safe_add_func_uint32_t_u_u((l_581 <= (p_33 > (p_33 != p_33))), 0x79B81593))) == (safe_lshift_func_uint16_t_u_s(((safe_lshift_func_uint16_t_u_s((safe_add_func_int8_t_s_s((~(safe_add_func_int8_t_s_s(l_581, g_165.f2))), g_457.f4)), 0)) || 0x28), 0))), l_581)), g_25)) && p_34))) & 0xF4)))))
    {
        int8_t l_600 = 0;
        int32_t l_602 = (-5);
        int32_t l_603 = 0;
        int32_t l_605 = (-1);
        int32_t l_607 = 0xC42DF65B;
        int32_t l_610 = 0x3B3733C0;
        int32_t l_611 = 0x7DB1264F;
        ++g_612;
        g_457.f0 |= (0x5F5EA2E8 | (((safe_lshift_func_int8_t_s_s(1, (g_457.f8 < ((safe_unary_minus_func_uint8_t_u(((((((safe_rshift_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((1U >= ((safe_add_func_uint16_t_u_u(((safe_sub_func_uint16_t_u_u(((((l_611 != g_457.f6.f2) != (safe_sub_func_uint8_t_u_u(0x74, (~l_608)))) < ((g_130 & 7) & p_32)) <= p_35), 0x77EC)) >= l_600), g_165.f2)) ^ g_165.f0)), l_600)), 7)) <= 0xDE) & g_26) >= 4294967295U) | 0U) || 0x07))) | g_171.f2)))) ^ p_32) <= l_629));
        l_641 &= ((((safe_add_func_int32_t_s_s((safe_lshift_func_int8_t_s_u(p_36, ((safe_rshift_func_int16_t_s_s(((g_475.f4.f2 > (+p_34)) == g_475.f3), ((g_165.f4 <= 0xA1) != (safe_add_func_uint8_t_u_u(0x71, (g_165.f2 == (safe_add_func_int8_t_s_s(g_165.f3, g_171.f2)))))))) >= 1))), l_611)) ^ l_629) & p_32) != 1);
    }
    else
    {
        l_604 &= (((7 > p_32) <= g_150) >= p_33);
    }
    l_642 = g_165;
    g_165.f3 = ((safe_rshift_func_uint8_t_u_u(l_642.f3, 2)) ^ (!((g_171.f4 != (safe_lshift_func_int16_t_s_s((p_32 & (safe_add_func_uint32_t_u_u((((((0 < ((l_642.f0 != l_650) <= (safe_rshift_func_int8_t_s_u((safe_add_func_int8_t_s_s(((((safe_add_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(((+(safe_rshift_func_int8_t_s_u((0x8519B97B != 0U), (safe_mod_func_uint32_t_u_u((l_604 || g_475.f4.f2), l_604))))) >= l_650), l_642.f2)), l_581)) | 0) || 0U) & g_171.f0), l_599)), g_370)))) | l_641) && g_210) < 0) <= g_26), g_370))), 0))) >= g_457.f6.f0)));
    for (g_457.f6.f2 = 0; (g_457.f6.f2 <= 38); ++g_457.f6.f2)
    {
        struct S3 l_670 = {-1,{4U,0,0xD62980BD}};
        uint16_t l_712 = 65535U;
        for (g_612 = 0; (g_612 == 19); g_612 = safe_add_func_int32_t_s_s(g_612, 9))
        {
            struct S3 l_671 = {0xFE0EFC14,{4U,-3,0x45E634FC}};
            l_671 = l_670;
            if (p_36)
                break;
        }
        l_670.f0 = ((safe_add_func_uint32_t_u_u(l_650, ((((l_670.f1.f1 && l_670.f0) & (safe_lshift_func_uint16_t_u_u(g_475.f4.f1, (safe_sub_func_int16_t_s_s(((safe_add_func_int8_t_s_s(((0xCB373A21 >= (~((((0x25FB || (l_670.f1.f2 ^ 0x70C2)) > (safe_lshift_func_uint16_t_u_s(65535U, 2))) > p_36) ^ g_171.f1))) | g_475.f7.f4), l_642.f4)) <= 0x5B947408), l_670.f1.f2))))) || 0xD260) | 0x6D))) < g_475.f5.f6.f2);
        l_609 = ((safe_sub_func_int8_t_s_s((((((l_642.f2 <= (((safe_mod_func_int8_t_s_s((0xC1 || 0U), l_650)) != ((safe_sub_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(p_36, ((((0x1CA5D67B && (4294967288U ^ (p_36 & p_36))) | g_213) != p_33) < g_370))), l_650)) > l_642.f2)) < l_691)) < g_98) > g_215) <= l_670.f1.f0) <= 0x8F58), g_475.f4.f1)) | 0xC461);
        g_171.f0 ^= ((safe_mod_func_uint16_t_u_u((safe_mod_func_int16_t_s_s(((safe_mod_func_uint8_t_u_u(((((safe_mod_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_u(g_475.f5.f7, (65532U <= (safe_add_func_uint32_t_u_u((safe_add_func_uint8_t_u_u((((l_604 >= 1) || (g_457.f2 | (safe_add_func_uint8_t_u_u((safe_mod_func_int32_t_s_s((safe_lshift_func_int16_t_s_s(g_475.f5.f6.f1, 1)), p_35)), g_457.f4)))) ^ (g_214 | (-7))), l_601)), 1U))))) != 0), p_32)) < l_712) <= 0x1194) != l_670.f1.f2), p_32)) | l_598), g_475.f5.f7)), l_712)) | p_34);
    }
    return p_34;
}
static int8_t func_43(int8_t p_44)
{
    uint8_t l_578 = 1U;
    return l_578;
}
static int8_t func_47(uint32_t p_48, uint32_t p_49)
{
    int8_t l_71 = (-1);
    int32_t l_575 = 0xAA8F1E1F;
    int32_t l_576 = (-1);
    l_575 = func_56((safe_add_func_int8_t_s_s((p_49 == l_71), ((safe_add_func_int8_t_s_s(((safe_add_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(((((0xAA && func_78(p_49, g_29, (safe_lshift_func_int8_t_s_u(l_71, (g_26 > ((0x2CD5B9AA || l_71) & g_25)))))) < 0x48) || p_48) < 0xCF31961C), l_71)), 0x0535)) >= 4294967295U), 0x0A)) != g_167))), p_48);
    return l_576;
}
static int8_t func_56(uint8_t p_57, int16_t p_58)
{
    uint8_t l_61 = 0xC4;
    int32_t l_68 = (-1);
    l_68 = ((safe_rshift_func_uint8_t_u_u((l_61 || func_62(g_29, p_58, (func_5(p_57, g_29, g_26, func_5(g_25, (0xBD5E5709 <= g_2), l_61, p_57)) != p_57), g_25)), l_61)) | (-1));
    return p_57;
}
static int16_t func_62(uint32_t p_63, uint32_t p_64, uint32_t p_65, int32_t p_66)
{
    int32_t l_67 = (-7);
    l_67 |= 0x5F08A7CF;
    return l_67;
}
inline static int8_t func_78(uint8_t p_79, uint32_t p_80, int16_t p_81)
{
    uint16_t l_86 = 6U;
    g_574 |= (safe_lshift_func_uint16_t_u_s((func_5(l_86, ((func_87((((((252U < (safe_add_func_int32_t_s_s(0, ((l_86 || 0x9A) < g_2)))) < 2) && func_91(l_86, ((safe_mod_func_int8_t_s_s((safe_add_func_uint32_t_u_u((0 || (-8)), l_86)), g_25)) == 0x8AAD))) == 0x82) <= 1U)) == 0x44DE) != p_80), l_86, g_457.f3) == l_86), 2));
    return p_80;
}
inline static uint16_t func_87(int32_t p_88)
{
    uint8_t l_550 = 254U;
    for (g_210 = 0; (g_210 < 13); g_210++)
    {
        uint32_t l_509 = 0x848C472A;
        int32_t l_572 = 0x4B74EBB8;
        int32_t l_573 = 0;
        if ((l_509 <= ((safe_sub_func_uint16_t_u_u(p_88, (safe_mod_func_int32_t_s_s((8U | (safe_lshift_func_uint16_t_u_s((safe_add_func_uint32_t_u_u((safe_sub_func_int16_t_s_s(((g_457.f0 < (safe_add_func_uint8_t_u_u(((((p_88 < (safe_sub_func_uint8_t_u_u(g_457.f6.f2, (0x8B || ((g_214 <= g_165.f4) > p_88))))) || p_88) < 0x3FA14610) < p_88), p_88))) && l_509), g_475.f7.f1)), l_509)), g_165.f0))), l_509)))) < 4294967293U)))
        {
            uint32_t l_538 = 1U;
            g_475.f5.f7 = (safe_lshift_func_int16_t_s_u(l_509, (((safe_add_func_uint32_t_u_u(((p_88 > l_509) > (safe_add_func_int8_t_s_s(1, (safe_rshift_func_uint16_t_u_s(((safe_lshift_func_int16_t_s_s(g_475.f5.f7, (0U || p_88))) || g_457.f4), (safe_mod_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((((l_509 && g_475.f0) | 1) || 1), g_475.f7.f3)), l_538))))))), p_88)) > p_88) <= l_509)));
            p_88 ^= (-2);
        }
        else
        {
            int8_t l_565 = 0xAE;
            for (g_213 = 0; (g_213 < 16); g_213 = safe_add_func_int16_t_s_s(g_213, 9))
            {
                uint8_t l_568 = 0x42;
                int32_t l_569 = 1;
                l_569 = (safe_add_func_int32_t_s_s(g_22, (safe_unary_minus_func_uint16_t_u((safe_mod_func_uint32_t_u_u((((safe_add_func_uint16_t_u_u(((((g_171.f1 < (safe_lshift_func_int8_t_s_s(l_550, (safe_lshift_func_int16_t_s_s((safe_add_func_int32_t_s_s(((safe_rshift_func_int16_t_s_s((safe_sub_func_int8_t_s_s(((((((safe_mod_func_int8_t_s_s((p_88 > (safe_lshift_func_uint8_t_u_s((0xF3 & (safe_add_func_uint32_t_u_u((0xFD || l_565), g_130))), (safe_add_func_uint32_t_u_u(1U, p_88))))), g_457.f8)) != p_88) < g_457.f0) ^ 0x6DAC0E38) & g_475.f3) == g_171.f4), l_550)), 7)) & p_88), p_88)), 0))))) >= l_568) <= 0xB6) > 0x16E39AFF), l_550)) || 0xFC) > l_568), p_88))))));
            }
            return g_22;
        }
        l_573 &= ((safe_rshift_func_uint16_t_u_s((p_88 < p_88), 11)) != ((g_165.f2 != g_175) > (l_572 != l_509)));
    }
    return p_88;
}
inline static uint32_t func_91(uint8_t p_92, int32_t p_93)
{
    int16_t l_119 = (-1);
    uint32_t l_122 = 0x1B997E34;
    int32_t l_174 = 0xFFFD43EB;
    uint16_t l_246 = 0x1A6A;
    uint32_t l_253 = 0x25BB58BC;
    int32_t l_274 = 0;
    int32_t l_275 = (-6);
    int32_t l_367 = 0x5890436E;
    int16_t l_414 = (-4);
    struct S1 l_493 = {1,0xC72E,-7,135,27};
    struct S5 l_506 = {-34441,-16,1931,-17,-0,9110,-13902};
    g_98 = p_92;
    for (g_25 = 6; (g_25 <= 2); g_25 = safe_sub_func_uint32_t_u_u(g_25, 7))
    {
        int32_t l_129 = 0xB6C63C42;
        struct S5 l_162 = {7661,-24,2600,-80,-2,-24737,-2321};
        uint32_t l_257 = 0x9F787DA6;
        uint16_t l_272 = 0x5FA7;
        uint32_t l_297 = 0x1F6DF76F;
        uint32_t l_421 = 4294967290U;
        struct S4 l_458 = {0x7BDA4903,0x6566E984,0xEECE,6,1,910,{0x45,1,1U},-981,0x43};
        uint32_t l_473 = 1U;
        for (g_98 = (-2); (g_98 == (-20)); --g_98)
        {
            int32_t l_110 = (-3);
            uint8_t l_149 = 0xBF;
            struct S2 l_164 = {0xCE85,4U,0xA5373E3C,0xACCF6335,1};
            struct S1 l_172 = {0,0x3845,36,302,82};
            uint8_t l_180 = 0xC9;
            int32_t l_411 = 0xE1086328;
            struct S5 l_433 = {-3338,17,169,-53,3,-20952,18210};
            int8_t l_456 = 6;
            struct S6 l_474 = {-3,0xC2D3943D,0x9F,0U,{0,0x805F,-47,-568,23},{0x1FDB081E,0x192F1295,-4,-3,-0,1728,{246U,0,0xCA008E1B},1289,0xF8},0xDB4FB30E,{0x7A36,255U,0xD9D4A117,-1,0xEBEE},0x75};
            for (p_92 = 0; (p_92 >= 55); p_92 = safe_add_func_int16_t_s_s(p_92, 3))
            {
                int32_t l_107 = 0xF0F57B56;
                uint32_t l_148 = 0xF3C5D46A;
                struct S5 l_163 = {-11775,-8,4254,-33,3,23926,7352};
                g_130 &= (0xA5 <= ((safe_mod_func_int32_t_s_s((0xA4E19C9F > l_107), (safe_rshift_func_uint8_t_u_u((l_110 & (safe_sub_func_int8_t_s_s((((l_107 == (safe_mod_func_int8_t_s_s((((safe_sub_func_int16_t_s_s(((safe_rshift_func_int16_t_s_s((((((l_119 != ((safe_add_func_int32_t_s_s(l_122, (safe_sub_func_uint16_t_u_u(g_2, ((safe_lshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(65526U, 15)), p_93)) == (-1)))))) <= g_22)) < l_110) | p_93) || (-3)) ^ l_107), 8)) ^ l_129), p_92)) | 0x462F) >= p_92), l_122))) != (-1)) || g_26), l_129))), g_2)))) >= g_98));
                g_150 = (safe_sub_func_int8_t_s_s((((((safe_rshift_func_int8_t_s_u(0x19, 6)) & l_129) ^ ((safe_lshift_func_uint8_t_u_s(((safe_add_func_int32_t_s_s(((g_26 != (0x5359 | ((((((((((+(g_2 || (l_129 == ((((((safe_lshift_func_uint8_t_u_u(((safe_sub_func_uint16_t_u_u(l_129, (((safe_mod_func_uint32_t_u_u(((((1U != ((-3) && g_25)) > g_98) == p_93) <= (-4)), 1)) && 0xC78DD814) >= g_29))) & p_93), 7)) < 8U) > l_119) || g_130) ^ 0x61A18340) & l_129)))) || l_110) > 0x83E1B125) >= l_148) ^ g_130) && g_98) != 4294967295U) >= 0x75) < l_110) || l_149))) <= g_2), l_110)) >= 65530U), 1)) && g_98)) <= p_92) && 0xF17702E8), 2));
                for (l_122 = 29; (l_122 <= 26); l_122 = safe_sub_func_int16_t_s_s(l_122, 7))
                {
                    int32_t l_155 = 9;
                    int32_t l_166 = 0xD4D58858;
                    int32_t l_240 = 0x834E5BC4;
                    int16_t l_241 = 0;
                    int32_t l_242 = (-1);
                    if ((0x78AD | (safe_add_func_uint16_t_u_u((((l_155 == (g_29 || ((safe_sub_func_uint8_t_u_u((p_92 || l_148), g_26)) && ((safe_sub_func_int16_t_s_s((((g_29 <= (((+(+0)) >= p_92) >= 0x95)) || g_29) < 0U), p_92)) & g_98)))) >= p_92) > 1U), (-1)))))
                    {
                        l_163 = l_162;
                        g_165 = l_164;
                        if (g_165.f4)
                            break;
                        g_168++;
                    }
                    else
                    {
                        int16_t l_173 = 2;
                        uint16_t l_187 = 0U;
                        l_172 = g_171;
                        --g_175;
                        l_129 |= (p_92 | ((safe_mod_func_int16_t_s_s((p_92 >= (l_180 & (safe_sub_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((safe_sub_func_int16_t_s_s(l_187, (((safe_mod_func_int16_t_s_s(((safe_unary_minus_func_uint16_t_u(0xC500)) || ((0x96CB == p_93) != (safe_lshift_func_uint8_t_u_s((((safe_mod_func_int16_t_s_s((~l_172.f2), l_174)) > p_92) != p_92), g_171.f1)))), 8)) ^ g_130) != l_187))), 6)), g_171.f3)))), 0xFEF3)) != g_168));
                    }
                    if (g_22)
                    {
                        g_165.f3 &= (((l_166 & 6) ^ ((g_167 != (((((((safe_add_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_s(((-1) || ((((safe_rshift_func_uint8_t_u_s((~(l_166 <= (p_93 < (safe_rshift_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(65535U, p_92)), ((((g_171.f1 || 4294967287U) && 2U) >= l_107) == g_165.f0)))))), 1)) ^ 0) > g_165.f2) < l_164.f0)), l_164.f3)) && 0xB4AE), l_162.f0)), g_29)) || g_171.f1) < p_93) != g_29) > p_93) || p_93) >= p_92)) >= p_92)) ^ g_168);
                    }
                    else
                    {
                        int32_t l_209 = 0;
                        int32_t l_211 = 1;
                        p_93 = 0x7DA4FB26;
                        --g_215;
                    }
                    if (g_165.f4)
                        continue;
                    if ((((safe_sub_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u(((safe_mod_func_int16_t_s_s(l_155, l_122)) != ((safe_mod_func_int8_t_s_s((p_92 | (safe_rshift_func_int8_t_s_s((p_93 || (((p_93 & l_164.f1) != (safe_lshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_s(l_166, 2)), 6))) >= (safe_rshift_func_uint16_t_u_u(0U, (safe_rshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_u(((safe_mod_func_int32_t_s_s(g_165.f1, g_171.f4)) < l_119), 4)), 4)))))), l_240))), l_162.f6)) != 0x18026454)), 8)) == l_241), 0x67)) || g_213) == l_242))
                    {
                        return p_93;
                    }
                    else
                    {
                        uint32_t l_243 = 5U;
                        l_243--;
                        l_246 |= g_165.f1;
                        l_172.f3 &= (safe_sub_func_uint32_t_u_u(((0xB8BA | g_165.f3) | ((safe_mod_func_uint8_t_u_u((((((1U >= ((((((l_253 <= (safe_unary_minus_func_int32_t_s(7))) || l_163.f4) > (((safe_add_func_int16_t_s_s((0x99573897 ^ p_93), l_163.f4)) <= 0xC2C40DF2) <= l_243)) < p_92) > 0xC9BB) >= 0U)) ^ 0x66762014) > l_243) > g_214) != 0U), l_257)) > g_171.f3)), g_130));
                        g_165.f3 = (~p_93);
                    }
                }
                for (g_22 = 0; (g_22 <= 31); g_22 = safe_add_func_int32_t_s_s(g_22, 1))
                {
                    int8_t l_267 = 7;
                    int32_t l_298 = 2;
                    if ((safe_sub_func_uint16_t_u_u(0U, (0xCDA1 ^ ((safe_mod_func_int16_t_s_s(((-1) ^ 5U), p_92)) ^ g_98)))))
                    {
                        l_110 ^= ((p_92 == g_175) || ((safe_add_func_uint8_t_u_u((4294967295U & l_267), (8U | ((safe_lshift_func_int8_t_s_u((safe_add_func_uint16_t_u_u(((g_167 > g_213) < ((((g_165.f2 | (l_162.f0 >= p_93)) >= 7) ^ p_93) != 0x558A1B90)), 0x15DD)), 6)) != p_93)))) > l_272));
                        p_93 ^= (-9);
                    }
                    else
                    {
                        int8_t l_273 = 0x82;
                        --g_276;
                        p_93 &= (l_163.f2 | (-1));
                        l_163.f6 |= (p_92 ^ (safe_sub_func_int8_t_s_s(p_92, ((((g_165.f1 != ((safe_sub_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((safe_add_func_uint16_t_u_u(p_93, ((safe_rshift_func_int16_t_s_s((-1), p_93)) != (safe_sub_func_uint32_t_u_u(l_267, p_93))))), 7)), ((safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_s((0x6E1E6A54 && 0x18DD0C9C), 3)), 4)), g_22)) & 0x4AB4))) >= l_119)) < g_165.f0) ^ 0x38C1A74C) != l_297))));
                        l_298 |= p_92;
                    }
                    for (l_274 = 0; (l_274 == 13); l_274++)
                    {
                        int8_t l_310 = 0x02;
                        p_93 = 1;
                        g_171.f3 &= ((g_22 > (((0x3B != ((+g_213) | (safe_add_func_int8_t_s_s((-6), (safe_lshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_s(0xD6, (1U | g_165.f3))), p_93)))))) || (((g_167 && 0U) <= g_214) < l_310)) | g_175)) && g_26);
                    }
                    if (((((((safe_add_func_int16_t_s_s(((g_215 && (-10)) && (safe_lshift_func_int16_t_s_s(g_150, 4))), (safe_rshift_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_u((0xAD6DF752 || (p_92 == (0 == (1 | p_93)))), 6)) || (7U || g_150)), g_98)))) && 0) & l_162.f0) >= g_215) > p_92) >= p_93))
                    {
                        int32_t l_321 = 0x9E35B24F;
                        g_171.f3 = (safe_sub_func_uint32_t_u_u(l_321, (p_93 < (l_321 | (safe_sub_func_int8_t_s_s((safe_add_func_uint32_t_u_u(0xA35753ED, ((-5) ^ ((l_129 == (((((safe_rshift_func_int8_t_s_u((((g_168 || (l_321 > ((safe_sub_func_int8_t_s_s(1, p_92)) | 65532U))) ^ l_164.f3) != l_149), 4)) >= 0xA5F5) & l_163.f2) < 0) && 0xE2)) == g_171.f3)))), g_165.f1))))));
                        if (g_171.f1)
                            continue;
                    }
                    else
                    {
                        p_93 = (248U || ((0xF0F9 < g_26) == p_93));
                        g_171.f2 = (+l_163.f4);
                        if (p_92)
                            break;
                    }
                    for (l_164.f2 = 0; (l_164.f2 > 27); l_164.f2 = safe_add_func_uint8_t_u_u(l_164.f2, 9))
                    {
                        int32_t l_347 = 8;
                        l_275 = ((g_171.f0 ^ ((l_267 || g_165.f1) == ((safe_rshift_func_uint16_t_u_u((((((safe_add_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((((safe_mod_func_int32_t_s_s(((((0xF6 > p_93) < (safe_sub_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((g_165.f0 && p_93), ((safe_lshift_func_int8_t_s_s(g_276, (7 <= g_98))) ^ g_26))), g_213))) >= g_167) | 0x96E1), p_92)) ^ (-1)) > 2), p_92)), l_347)) <= l_267) < p_92) <= g_214) || l_163.f0), 3)) != 0U))) ^ p_93);
                    }
                }
            }
            if (((((((g_213 <= ((safe_lshift_func_uint16_t_u_s((safe_mod_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((((safe_unary_minus_func_uint8_t_u(((g_215 < (safe_rshift_func_int16_t_s_u(((((g_150 | ((safe_rshift_func_uint16_t_u_u((((safe_sub_func_uint32_t_u_u((g_213 == (!l_162.f6)), (((safe_rshift_func_uint16_t_u_s((((p_92 | (p_92 == (safe_lshift_func_uint8_t_u_s(((0xC0 | (l_119 || l_172.f3)) < p_93), g_150)))) ^ (-1)) < 9), l_122)) | p_93) && 0U))) ^ 0) || l_172.f3), g_215)) > g_165.f3)) > p_92) | 1U) > g_171.f1), 1))) != 0xCE))) && 1U) < g_171.f3), g_98)), p_93)), p_92)) || g_171.f0)) | g_22) < p_92) | p_93) ^ p_92) & 0x62E9))
            {
                int16_t l_366 = 0x560C;
                int32_t l_368 = 0x66E181E8;
                int32_t l_369 = (-3);
                --g_370;
            }
            else
            {
                uint32_t l_393 = 0x1B7860BB;
                uint8_t l_394 = 1U;
                int32_t l_415 = 9;
                int32_t l_501 = 0xAE1242CA;
                int32_t l_502 = 0x3C018DC6;
                if ((safe_rshift_func_uint8_t_u_s((((-1) | ((safe_add_func_int8_t_s_s(((l_162.f5 & 0x63) != ((safe_lshift_func_uint8_t_u_u((((safe_mod_func_uint32_t_u_u((((((safe_lshift_func_int8_t_s_s((l_162.f4 < (((((((safe_add_func_int16_t_s_s(1, 65532U)) || g_29) > ((safe_add_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(0U, (((safe_add_func_uint16_t_u_u(g_165.f1, l_393)) | l_162.f6) <= p_92))), p_93)), g_171.f1)) < g_165.f2)) ^ g_2) == l_394) > p_92) > l_394)), 5)) ^ p_93) != 0) == 0xD5) < p_92), g_175)) & 0xFA) == l_393), 0)) < p_93)), p_92)) & p_92)) <= 8U), l_393)))
                {
                    uint32_t l_402 = 4294967295U;
                    g_171.f2 |= ((safe_add_func_uint8_t_u_u(((0U && ((p_93 != (safe_sub_func_int8_t_s_s((((safe_unary_minus_func_int8_t_s((255U >= (((safe_sub_func_uint16_t_u_u((0xABFCD6EC > l_246), ((l_402 ^ (g_25 == ((((l_393 == ((l_402 ^ 0xF5C8) <= l_394)) != g_29) ^ 65530U) <= 0))) & p_92))) == p_92) | g_25)))) < p_92) ^ (-1)), g_25))) == g_29)) < 0x84B3), l_162.f1)) ^ 0x746449A1);
                    g_171.f3 ^= (safe_lshift_func_uint8_t_u_s((safe_sub_func_uint16_t_u_u(g_98, g_171.f2)), ((safe_sub_func_int16_t_s_s(((safe_lshift_func_int16_t_s_u((l_411 | g_130), ((g_168 == (safe_add_func_int8_t_s_s((-1), (255U <= (0x4999 && (g_165.f0 > l_162.f3)))))) == l_414))) <= g_29), 65535U)) > l_367)));
                }
                else
                {
                    uint32_t l_416 = 7U;
                    l_416--;
                    if ((65531U > ((g_98 == l_421) > (safe_mod_func_int32_t_s_s(((safe_mod_func_int8_t_s_s((safe_mod_func_uint32_t_u_u(4294967295U, (g_168 && (((safe_rshift_func_uint8_t_u_s(0xFA, ((((l_119 < (((safe_mod_func_uint16_t_u_u((+0x65B3739A), 1)) <= 0xA1AF) > p_92)) != p_92) && 0xDA) != 65535U))) | p_92) ^ 0U)))), g_210)) | l_421), 0x13E96B69)))))
                    {
                        l_433 = l_162;
                        return g_168;
                    }
                    else
                    {
                        int32_t l_446 = 0x912836B3;
                        l_162.f4 = (safe_lshift_func_uint8_t_u_u((((safe_sub_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((-9), 8)), (safe_add_func_int16_t_s_s(((safe_lshift_func_int16_t_s_s(g_26, ((safe_lshift_func_uint16_t_u_s(l_446, 9)) < ((l_122 >= 0x5F814490) & ((safe_rshift_func_int16_t_s_s(l_246, (g_215 & g_212))) && g_212))))) >= 255U), 0U)))) | p_93) < 4294967295U), g_165.f0));
                        g_171.f0 |= ((l_446 != (((0x3E41 >= ((safe_add_func_uint32_t_u_u(p_93, 0x72407BEE)) >= g_370)) && p_92) != ((!(g_212 ^ (safe_rshift_func_int8_t_s_u(((((l_162.f2 < (((g_150 <= (-8)) >= l_162.f1) != 0xFB93)) <= 0x9F) || g_165.f1) <= p_92), p_92)))) == l_416))) || l_456);
                        l_458 = g_457;
                    }
                    g_165.f3 = (l_274 > (safe_add_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u(((l_394 && ((((l_164.f0 && (((safe_mod_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u(g_26, (safe_add_func_uint8_t_u_u(0xDC, (p_93 ^ (l_367 != (safe_sub_func_int16_t_s_s((((((0U || (~(+l_458.f7))) | l_149) <= l_473) >= l_174) != p_93), 0x8D82)))))))), l_393)) < l_416) > p_92)) ^ p_93) || p_93) || 0x1750)) != l_394), 15)), p_93)));
                }
                g_475 = l_474;
                if (((2U | g_457.f0) <= (safe_lshift_func_uint8_t_u_u(((safe_unary_minus_func_uint32_t_u(p_93)) & (p_93 & (safe_rshift_func_uint16_t_u_s((((safe_rshift_func_uint16_t_u_u(((1 && (safe_lshift_func_uint16_t_u_s(g_475.f7.f3, 6))) | ((((((g_475.f8 && g_475.f2) & 0xD2) || l_458.f0) || 0x6FBD9CE2) <= g_475.f6) <= 1U)), l_458.f6.f0)) | 0xF15A) <= g_457.f6.f2), 13)))), g_175))))
                {
                    struct S6 l_487 = {0,0x33D65060,255U,8U,{-0,0x64CD,58,-284,93},{0x831A427D,3U,0,1,-1,1727,{8U,3,0U},-86,1},0xF0461D22,{0,0U,0U,0x9D6C35AE,7},0};
                    uint16_t l_492 = 0x48F3;
                    g_475 = l_487;
                    if (l_172.f4)
                        continue;
                    if ((safe_lshift_func_uint16_t_u_s((((safe_lshift_func_int16_t_s_s((l_367 == l_492), l_149)) < (g_210 || p_93)) > l_274), 7)))
                    {
                        l_172 = l_493;
                        g_475.f5.f0 |= g_165.f2;
                        g_475.f4.f2 |= ((0U && 0x0F10) || (((safe_sub_func_int32_t_s_s(((!p_93) | (safe_add_func_int32_t_s_s(l_492, (l_415 || l_394)))), (g_475.f5.f6.f2 < ((l_487.f0 != (safe_lshift_func_int8_t_s_u((g_457.f6.f2 != g_214), g_475.f5.f2))) & 0x28)))) < (-1)) <= l_474.f5.f2));
                    }
                    else
                    {
                        l_458 = l_458;
                    }
                    g_165 = l_487.f7;
                }
                else
                {
                    uint16_t l_503 = 65528U;
                    l_503++;
                    if (g_150)
                        continue;
                    p_93 &= 0x16BDFAA1;
                    p_93 = p_93;
                }
            }
        }
        g_475.f5.f7 = l_458.f4;
        l_506 = l_162;
        return g_457.f7;
    }
    return l_506.f0;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_2;
    csmith_sink_ = g_22;
    csmith_sink_ = g_25;
    csmith_sink_ = g_26;
    csmith_sink_ = g_29;
    csmith_sink_ = g_98;
    csmith_sink_ = g_130;
    csmith_sink_ = g_150;
    csmith_sink_ = g_165.f0;
    csmith_sink_ = g_165.f1;
    csmith_sink_ = g_165.f2;
    csmith_sink_ = g_165.f3;
    csmith_sink_ = g_165.f4;
    csmith_sink_ = g_167;
    csmith_sink_ = g_168;
    csmith_sink_ = g_171.f0;
    csmith_sink_ = g_171.f1;
    csmith_sink_ = g_171.f2;
    csmith_sink_ = g_171.f3;
    csmith_sink_ = g_171.f4;
    csmith_sink_ = g_175;
    csmith_sink_ = g_210;
    csmith_sink_ = g_212;
    csmith_sink_ = g_213;
    csmith_sink_ = g_214;
    csmith_sink_ = g_215;
    csmith_sink_ = g_276;
    csmith_sink_ = g_370;
    csmith_sink_ = g_457.f0;
    csmith_sink_ = g_457.f1;
    csmith_sink_ = g_457.f2;
    csmith_sink_ = g_457.f3;
    csmith_sink_ = g_457.f4;
    csmith_sink_ = g_457.f5;
    csmith_sink_ = g_457.f6.f0;
    csmith_sink_ = g_457.f6.f1;
    csmith_sink_ = g_457.f6.f2;
    csmith_sink_ = g_457.f7;
    csmith_sink_ = g_457.f8;
    csmith_sink_ = g_475.f0;
    csmith_sink_ = g_475.f1;
    csmith_sink_ = g_475.f2;
    csmith_sink_ = g_475.f3;
    csmith_sink_ = g_475.f4.f0;
    csmith_sink_ = g_475.f4.f1;
    csmith_sink_ = g_475.f4.f2;
    csmith_sink_ = g_475.f4.f3;
    csmith_sink_ = g_475.f4.f4;
    csmith_sink_ = g_475.f5.f0;
    csmith_sink_ = g_475.f5.f1;
    csmith_sink_ = g_475.f5.f2;
    csmith_sink_ = g_475.f5.f3;
    csmith_sink_ = g_475.f5.f4;
    csmith_sink_ = g_475.f5.f5;
    csmith_sink_ = g_475.f5.f6.f0;
    csmith_sink_ = g_475.f5.f6.f1;
    csmith_sink_ = g_475.f5.f6.f2;
    csmith_sink_ = g_475.f5.f7;
    csmith_sink_ = g_475.f5.f8;
    csmith_sink_ = g_475.f6;
    csmith_sink_ = g_475.f7.f0;
    csmith_sink_ = g_475.f7.f1;
    csmith_sink_ = g_475.f7.f2;
    csmith_sink_ = g_475.f7.f3;
    csmith_sink_ = g_475.f7.f4;
    csmith_sink_ = g_475.f8;
    csmith_sink_ = g_574;
    csmith_sink_ = g_612;
    csmith_sink_ = g_713;
    platform_main_end(0,0);
    return 0;
}
