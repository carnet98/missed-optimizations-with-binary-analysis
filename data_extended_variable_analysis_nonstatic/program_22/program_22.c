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
static int32_t g_4 = 1;
static int32_t g_27 = 0xCD833989;
static int32_t *g_29 = &g_27;
static int32_t **g_28 = &g_29;
static int32_t g_89 = 0;
static int32_t ****g_205 = (void*)0;
static const int32_t ***g_331 = (void*)0;
static uint16_t g_443 = 1U;
static int16_t g_532 = 0x00EA;
static int32_t *g_549 = &g_89;
static uint8_t g_582 = 0x0B;
static int32_t *****g_596 = (void*)0;
static uint32_t func_1(void);
static uint16_t func_16(int32_t p_17, int32_t p_18, uint32_t p_19, int16_t p_20, uint8_t p_21);
static uint8_t func_23(const int16_t p_24, int16_t p_25);
static uint8_t func_32(uint8_t p_33);
static int32_t func_34(uint32_t p_35, const int32_t * p_36, int8_t p_37, int32_t * const p_38);
static const int32_t * func_39(int32_t p_40, uint8_t p_41, int32_t * p_42, int32_t ** p_43);
static int32_t * func_44(int32_t * const p_45, int32_t * p_46, const int32_t p_47);
static int32_t * const func_48(int32_t ** p_49, int32_t ** p_50, int32_t p_51, int32_t * p_52);
static uint16_t func_53(uint16_t p_54);
static int32_t func_57(int32_t * p_58, int32_t ** p_59, int32_t ** p_60, int16_t p_61);
static uint32_t func_1(void)
{
    int16_t l_11 = (-10);
    int8_t l_594 = (-4);
    int32_t *****l_597 = &g_205;
    uint32_t l_611 = 4294967288U;
    const uint16_t l_630 = 0x5985;
    int32_t *l_643 = &g_27;
    int32_t l_654 = 0x22DB1961;
    int32_t ***l_663 = &g_28;
    uint32_t l_674 = 0xF73D86DD;
    int32_t **l_677 = &l_643;
    const int32_t *l_678 = &g_89;
    if ((safe_rshift_func_uint8_t_u_s(((g_4 & (safe_mod_func_int32_t_s_s(((safe_mod_func_uint32_t_u_u((((safe_mul_func_int16_t_s_s(l_11, (safe_sub_func_int32_t_s_s((((g_4 <= 0xCE96B779) , (((safe_lshift_func_uint16_t_u_u(func_16((((~g_4) > ((g_4 > ((g_4 ^ ((func_23(l_11, g_4) == 1U) , 0U)) , g_443)) , l_11)) == l_11), g_4, l_11, g_532, l_11), l_11)) , 254U) < g_582)) , l_11), g_582)))) ^ 0x92FE) != l_11), l_11)) & l_11), g_4))) < l_594), 5)))
    {
        int32_t l_595 = 0x04BFDDC9;
        int32_t ***l_612 = &g_28;
        const int32_t *l_667 = &l_654;
        const int32_t **l_666 = &l_667;
        if ((((l_595 , g_596) != (void*)0) > l_594))
        {
            int32_t ***l_601 = &g_28;
            int32_t ****l_600 = &l_601;
            const int32_t *l_614 = (void*)0;
            const int32_t **l_613 = &l_614;
            (*g_549) = ((l_597 != &g_205) , (*g_549));
            (*l_613) = func_39(((safe_rshift_func_int16_t_s_s(((-1) ^ ((g_4 < 0x2B) > ((void*)0 != l_600))), (safe_lshift_func_int16_t_s_s((g_443 <= ((&g_205 != ((((safe_mod_func_uint32_t_u_u((((safe_unary_minus_func_uint32_t_u(((safe_lshift_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((((4294967295U || (***l_601)) , (void*)0) != (*l_601)), l_595)), 4)) & l_611))) | 0x7A5F) & l_595), l_611)) , (*l_600)) == l_612) , &l_600)) , 0U)), 11)))) && 8), g_89, (***l_600), (*l_612));
        }
        else
        {
            int32_t * const * const l_621 = &g_549;
            if ((safe_lshift_func_int16_t_s_u((safe_add_func_int32_t_s_s((**g_28), (safe_mod_func_uint8_t_u_u((((((*l_612) != l_621) , (0xBB == g_4)) <= (((void*)0 != &g_205) , ((safe_lshift_func_int8_t_s_u((((safe_rshift_func_int8_t_s_u((((((safe_add_func_uint32_t_u_u(0U, ((safe_lshift_func_int8_t_s_u(((((((*l_612) != (void*)0) >= l_630) | (***l_612)) | 0xB845AE73) <= g_532), 5)) ^ (***l_612)))) < g_89) , g_27) ^ 0x9D) && (**l_621)), 7)) && (*g_549)) & g_582), g_89)) , (**l_621)))) , (**l_621)), 0xDB)))), 4)))
            {
                (**g_28) = (**g_28);
            }
            else
            {
                int32_t l_641 = (-3);
                int32_t **l_642 = &g_549;
                (**l_612) = func_44((*l_621), (**l_612), (safe_lshift_func_int8_t_s_s((safe_add_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s((g_582 > g_443), 2)), (((safe_lshift_func_int8_t_s_u(g_4, (safe_rshift_func_int16_t_s_u(g_27, (((void*)0 == &g_205) > 0))))) || g_443) || 0x45))), l_641)));
                (**l_612) = (**l_612);
                (*l_642) = (*l_621);
            }
            (*g_28) = l_643;
            for (g_4 = 0; (g_4 < (-29)); --g_4)
            {
                int32_t **l_646 = (void*)0;
                int32_t **l_647 = &g_549;
                (*l_647) = (*l_621);
                (**l_647) = ((safe_rshift_func_uint16_t_u_u(((safe_add_func_int8_t_s_s(((0xB2 > (((0x1AFBA164 != l_654) >= ((safe_add_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u((0x8F == (((***l_612) > (safe_lshift_func_uint16_t_u_s((0x4D | ((safe_sub_func_uint8_t_u_u((((**l_621) < 0x1F) >= (((l_663 == (void*)0) == 0x7400) && (***l_612))), (***l_663))) , g_582)), g_27))) | (***l_612))), (**l_621))), 4294967286U)) < (**l_647))) != g_4)) , g_89), g_532)) | 1), g_4)) , 0x45AB81DD);
                l_678 = func_39((safe_add_func_uint32_t_u_u((l_666 == (void*)0), (***l_663))), (safe_lshift_func_uint8_t_u_u(((((safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u(l_674, (+(~(4294967288U > ((0xA1B7 | (l_677 == (*l_612))) <= g_89)))))), 15)) || (**l_621)) == 0x664BDADB) && 0x43), (*l_643))), (**l_663), (*l_612));
                (*l_666) = (**l_612);
            }
            (*g_28) = (*l_677);
        }
        if (((safe_sub_func_int16_t_s_s(g_532, 6U)) , (safe_rshift_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(0xE4, (((**l_666) || ((*g_29) && ((safe_lshift_func_int8_t_s_s((g_443 , g_4), 4)) == (g_89 == (65530U < 0x1ED9))))) < (*l_667)))), g_27))))
        {
            return g_443;
        }
        else
        {
            uint16_t l_689 = 0U;
            l_689 = (0xF7F3574D <= ((l_597 != l_597) >= g_4));
        }
        for (l_611 = (-4); (l_611 > 10); ++l_611)
        {
            (***l_663) = 0xC207FA35;
        }
    }
    else
    {
        int8_t l_696 = 0x78;
        int32_t ***l_699 = &l_677;
        const int32_t **l_715 = &l_678;
        for (l_654 = 0; (l_654 > 5); l_654 = safe_add_func_uint32_t_u_u(l_654, 3))
        {
            for (l_611 = 11; (l_611 < 15); l_611 = safe_add_func_uint32_t_u_u(l_611, 1))
            {
                (*l_677) = (**l_663);
            }
        }
        (*l_715) = func_39(l_696, (safe_lshift_func_int16_t_s_s((0xF347 ^ ((((void*)0 != l_699) , (0x39 <= (safe_add_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(((((((safe_sub_func_uint8_t_u_u((((g_27 ^ (safe_rshift_func_int16_t_s_u(((((safe_add_func_uint16_t_u_u((!4294967295U), g_532)) >= (safe_add_func_uint16_t_u_u((***l_699), 1U))) ^ (-1)) > g_89), g_89))) <= 0xC93C5DA8) , (*l_678)), (***l_699))) , (***l_699)) , 255U) || (*l_678)) , 0xF0) , (*l_643)), g_89)), g_89)), g_89)))) | (***l_699))), 15)), (*g_28), &g_29);
    }
    (**g_28) = (*g_29);
    return g_582;
}
static uint16_t func_16(int32_t p_17, int32_t p_18, uint32_t p_19, int16_t p_20, uint8_t p_21)
{
    int32_t l_584 = 0xF6E4C014;
    int32_t ** const *l_593 = &g_28;
    int32_t ** const * const *l_592 = &l_593;
    int32_t ** const * const **l_591 = &l_592;
    for (g_532 = 0; (g_532 != (-8)); --g_532)
    {
        const uint8_t l_583 = 2U;
        int32_t **l_587 = &g_549;
        int32_t **l_588 = &g_29;
        (*l_588) = func_48(((safe_lshift_func_uint8_t_u_s(p_19, (g_582 , (((((p_21 == (l_583 & (0xA4E8 || l_584))) < ((((safe_rshift_func_int16_t_s_u(((((l_583 >= l_584) < 0x48B2) <= p_21) | 9), 11)) & 0x9A9A) , (void*)0) == (void*)0)) < 250U) ^ p_19) < 4294967287U)))) , l_587), l_587, (*g_549), &l_584);
    }
    (*g_28) = (*g_28);
    (*g_29) = (safe_add_func_uint16_t_u_u(65535U, (l_591 == &g_205)));
    return p_17;
}
static uint8_t func_23(const int16_t p_24, int16_t p_25)
{
    int32_t *l_26 = &g_27;
    int32_t l_576 = 0xF73BA368;
    int32_t *** const *l_577 = (void*)0;
    (*l_26) = p_25;
    g_28 = g_28;
    (*l_26) = (safe_add_func_uint8_t_u_u(func_32(p_24), (safe_lshift_func_int16_t_s_u((safe_mod_func_int32_t_s_s((safe_unary_minus_func_uint16_t_u(p_24)), (safe_sub_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(l_576, ((l_576 <= (((g_443 != 0x90F47D59) || ((((void*)0 == &l_26) , l_577) == (void*)0)) >= p_24)) & g_443))), g_532)) , 65526U), p_24)))), 3))));
    return (*l_26);
}
static uint8_t func_32(uint8_t p_33)
{
    int32_t **l_132 = &g_29;
    int32_t ***l_564 = &g_28;
    int32_t ****l_563 = &l_564;
    (*g_29) = func_34(((*g_28) == (void*)0), func_39(p_33, p_33, func_44(func_48((func_53((g_27 ^ 0xC5A4)) , l_132), &g_29, p_33, (*l_132)), (*l_132), p_33), l_132), p_33, (*l_132));
    (*l_132) = (*l_132);
    (*l_563) = &l_132;
    (**l_563) = (**l_563);
    return p_33;
}
static int32_t func_34(uint32_t p_35, const int32_t * p_36, int8_t p_37, int32_t * const p_38)
{
    int32_t *l_562 = &g_89;
    l_562 = l_562;
    return (*p_36);
}
static const int32_t * func_39(int32_t p_40, uint8_t p_41, int32_t * p_42, int32_t ** p_43)
{
    int32_t **l_558 = &g_29;
    int32_t ***l_559 = &l_558;
    const int32_t ****l_561 = (void*)0;
    const int32_t ***** const l_560 = &l_561;
    (*l_559) = l_558;
    (**l_558) = (l_560 == &g_205);
    (**p_43) = (**g_28);
    return (*g_28);
}
static int32_t * func_44(int32_t * const p_45, int32_t * p_46, const int32_t p_47)
{
    int32_t l_135 = 0xB816A8AB;
    const int32_t * const l_164 = &g_89;
    int32_t **l_240 = &g_29;
    int32_t ** const ***l_269 = (void*)0;
    uint16_t l_286 = 65533U;
    uint8_t l_466 = 0x14;
    int32_t l_531 = 0x2544A887;
    uint8_t l_547 = 0xB9;
    if (l_135)
    {
        int32_t l_143 = (-10);
        int32_t **l_166 = &g_29;
        l_135 = ((safe_add_func_uint8_t_u_u(((p_47 < p_47) & ((void*)0 != &l_135)), (((*g_28) != &p_47) || ((((safe_add_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(((((((g_4 > (!(((l_135 || ((void*)0 == &p_45)) <= l_143) ^ l_135))) != g_4) <= p_47) || l_143) < l_143) > 4294967295U), g_89)), l_143)) != l_135) ^ 0x06) | p_47)))) , (*p_45));
        for (l_135 = 0; (l_135 <= (-3)); l_135 = safe_sub_func_uint32_t_u_u(l_135, 5))
        {
            int32_t l_165 = 0x85D13469;
            int32_t *l_171 = &l_135;
            if ((safe_sub_func_uint8_t_u_u((((((safe_sub_func_int32_t_s_s((**g_28), (safe_lshift_func_int16_t_s_u(p_47, g_89)))) || (((((safe_sub_func_uint32_t_u_u((l_143 > ((((safe_sub_func_int32_t_s_s(((safe_sub_func_int16_t_s_s((((((safe_mul_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(((void*)0 != &p_45), (65533U <= ((safe_add_func_int8_t_s_s(g_4, (p_47 & g_27))) || p_47)))), 0xE1A3)) | 0x1EF97960) ^ 65535U) , l_164) == (*g_28)), 0x211E)) , 1), 0x6E64EF7B)) != 0x07125969) == g_4) >= 4U)), 0x81DC2E7B)) > 0xEA) <= 0x799C) , 1U) & g_4)) || 0x319CEE68) == l_165) , p_47), l_165)))
            {
                int32_t *l_168 = &l_135;
                int32_t **l_167 = &l_168;
                (*l_167) = func_48(l_166, &g_29, (*p_45), p_46);
                if ((*p_45))
                    break;
                for (l_143 = (-24); (l_143 == 9); ++l_143)
                {
                    int32_t **l_172 = &l_168;
                    (*p_46) = (*g_29);
                    (*l_172) = ((l_166 == &p_45) , func_48(&l_168, &l_168, (**l_166), l_171));
                    if ((*g_29))
                        break;
                }
            }
            else
            {
                return (*g_28);
            }
        }
        for (g_89 = 3; (g_89 < 10); g_89 = safe_add_func_uint8_t_u_u(g_89, 5))
        {
            int32_t *l_178 = &l_143;
            int32_t **l_177 = &l_178;
            (*l_177) = func_48(&g_29, &p_46, (((**g_28) | (*p_46)) > (safe_mul_func_uint8_t_u_u(((void*)0 != &g_28), 0x3B))), (*l_166));
        }
    }
    else
    {
        int16_t l_235 = 0x727D;
        int32_t *l_239 = &g_27;
        int16_t l_247 = 0;
        const int32_t ***l_268 = (void*)0;
        const int32_t ****l_267 = &l_268;
        int32_t ** const **l_271 = (void*)0;
        int32_t ** const ***l_270 = &l_271;
        if (((((0x23C0CBE0 == (safe_mul_func_int16_t_s_s((*l_164), ((-3) > ((*p_46) ^ (p_47 ^ (safe_lshift_func_int8_t_s_u((safe_mul_func_uint16_t_u_u((p_47 , p_47), 0x90A9)), 7)))))))) | (&p_45 == &p_45)) && 0xFA) <= g_89))
        {
            int32_t **l_207 = &g_29;
            uint16_t l_236 = 0xC2E1;
            int16_t l_241 = 0;
            int32_t ***l_244 = (void*)0;
            int32_t ****l_243 = &l_244;
            int32_t *l_257 = &g_27;
            uint32_t l_266 = 0xA72973F1;
            for (l_135 = 9; (l_135 >= (-29)); --l_135)
            {
                const int32_t l_206 = 0xDFE2BB12;
                int32_t **** const * const l_208 = &g_205;
                for (g_89 = 10; (g_89 < 1); g_89 = safe_sub_func_uint32_t_u_u(g_89, 2))
                {
                    int32_t *l_242 = (void*)0;
                    int32_t *** const *l_256 = &l_244;
                    int32_t **l_258 = (void*)0;
                    int32_t **l_259 = &l_239;
                    if ((safe_lshift_func_uint16_t_u_s((((safe_sub_func_uint32_t_u_u(((safe_mul_func_uint16_t_u_u(p_47, (0xF3 == ((g_4 , &g_28) == (void*)0)))) == ((((g_4 >= p_47) , (p_47 != (safe_lshift_func_uint16_t_u_u(((g_27 | g_89) == 0x0A), g_4)))) , (void*)0) != &p_47)), (*g_29))) >= (-2)) , 9U), 6)))
                    {
                        int32_t ***l_200 = &g_28;
                        int32_t ****l_199 = &l_200;
                        int32_t *****l_201 = &l_199;
                        int32_t **** const *l_209 = &g_205;
                        (*l_201) = l_199;
                        l_209 = ((+((safe_sub_func_int32_t_s_s((((0xF76D <= 65528U) & ((((((g_27 <= (-8)) , (g_205 != (void*)0)) > l_206) < 0) , (*l_200)) != l_207)) > 0xB1C8), 0x662C939D)) ^ g_89)) , l_208);
                    }
                    else
                    {
                        int16_t l_232 = 0x8CA0;
                        const int32_t *l_238 = &g_89;
                        const int32_t **l_237 = &l_238;
                        (*l_237) = ((safe_mul_func_uint16_t_u_u((0x8EA33B35 | (((safe_mod_func_int16_t_s_s(g_89, (safe_rshift_func_int8_t_s_s(g_4, (safe_lshift_func_int8_t_s_u(((((safe_rshift_func_uint16_t_u_s((safe_add_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s((safe_mul_func_int16_t_s_s((((((+(((safe_sub_func_int32_t_s_s(((safe_add_func_uint8_t_u_u((((-9) & (p_47 <= (!((l_232 , &g_205) == &g_205)))) == ((safe_lshift_func_uint8_t_u_u(p_47, p_47)) ^ 0x7C5CFF5E)), 0)) < l_235), p_47)) || p_47) > l_232)) & p_47) <= 1) | 0x23) , p_47), 0x1DBC)), p_47)) > p_47), 0x7913)), (**l_207))) == g_27) <= g_4) , l_236), 0)))))) >= 3U) | 0x06)), g_27)) , &p_47);
                        if ((*l_238))
                            break;
                        (*l_237) = (*g_28);
                        p_46 = &l_135;
                    }
                    l_239 = (void*)0;
                    p_46 = func_48(&p_46, l_240, l_241, l_242);
                    (*l_259) = func_48(&p_46, &p_46, (((void*)0 == l_243) ^ (((safe_rshift_func_uint8_t_u_u(l_247, ((safe_lshift_func_int8_t_s_s((((safe_mod_func_uint16_t_u_u((((((safe_rshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_u(g_89, 4)), 15)) != (l_256 != &l_244)) , ((void*)0 != &l_164)) , 0x09) < g_89), p_47)) < p_47) >= p_47), p_47)) <= l_235))) , p_47) <= p_47)), l_257);
                }
                l_270 = (((&p_47 == (*l_240)) <= ((*p_45) && ((safe_rshift_func_uint16_t_u_u((((safe_add_func_int32_t_s_s((**g_28), p_47)) < (*p_46)) || (g_89 == ((safe_lshift_func_int8_t_s_s(9, (((((l_266 , 8) && p_47) , (void*)0) == l_267) != g_27))) == (**l_240)))), 13)) | p_47))) , l_269);
            }
        }
        else
        {
            int32_t **l_272 = (void*)0;
            int32_t **l_273 = &l_239;
            (*l_273) = (void*)0;
        }
    }
    if (((safe_lshift_func_uint16_t_u_s((((*g_29) && (safe_sub_func_int16_t_s_s((((safe_sub_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_u((safe_add_func_int32_t_s_s((*p_45), ((((((g_205 != g_205) >= 0xBDA1) == (((&g_205 != &g_205) <= (**l_240)) , (safe_sub_func_uint16_t_u_u(0x393D, 1U)))) , (void*)0) != (void*)0) <= p_47))), 8)) != (*l_164)), g_4)) < g_4) != (-4)), l_286))) && g_4), p_47)) <= (*g_29)))
    {
        int32_t **l_290 = &g_29;
        int16_t l_316 = 0x6700;
        uint32_t l_317 = 4U;
        const int32_t l_332 = 0xDA7B3351;
        for (l_135 = 0; (l_135 == (-24)); l_135--)
        {
            int32_t **l_289 = &g_29;
            uint32_t l_318 = 0x99E674F9;
            uint32_t l_319 = 0xC677B600;
            int32_t *l_321 = &g_27;
            int32_t **l_320 = &l_321;
            int32_t **l_333 = (void*)0;
            int32_t **l_334 = (void*)0;
            int32_t **l_335 = &l_321;
            uint8_t l_363 = 0x49;
            (*l_320) = func_48(l_289, l_290, ((((safe_rshift_func_int16_t_s_s((safe_mod_func_int8_t_s_s((((((((((((safe_sub_func_uint8_t_u_u((((safe_mod_func_int32_t_s_s((*p_46), (((&p_45 != (void*)0) >= (&l_289 == (((((+(safe_add_func_uint8_t_u_u((**l_289), (safe_sub_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((((((safe_mod_func_uint32_t_u_u((((+((safe_rshift_func_int8_t_s_u(g_89, (((~((((p_47 ^ (**l_240)) , &g_29) == &p_45) , 0x7F)) , g_4) <= g_27))) , 1U)) & (**l_289)) > (**l_240)), 9U)) != 0x7D95) != 4) >= g_4) , g_4), (**l_289))), p_47)), 5)), l_316))))) == (**l_289)) , p_47) > p_47) , (void*)0))) | g_27))) <= p_47) > (-1)), p_47)) | l_317) , g_89) , (void*)0) != (void*)0) < l_318) ^ 0xFA) == (**l_240)) >= l_319) && (**l_289)) && (**l_290)), p_47)), g_4)) | 0x1ADF) > 1) , (**g_28)), p_46);
            (*l_320) = (*l_290);
            (*l_335) = func_48(((((void*)0 != g_205) && ((**l_290) , (g_27 , (safe_sub_func_uint16_t_u_u((((safe_sub_func_int16_t_s_s((((safe_lshift_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_u(((safe_unary_minus_func_int8_t_s(g_4)) || (&p_47 == (*l_290))), 11)) < (&l_290 == g_331)), 4)) , (**l_290)) < g_89), p_47)) < l_332) > (*p_46)), (**l_290)))))) , (void*)0), &g_29, (*p_46), (*l_289));
            for (g_27 = 24; (g_27 > (-3)); --g_27)
            {
                uint32_t l_344 = 0U;
                int32_t **l_364 = (void*)0;
                int32_t **l_365 = (void*)0;
                int32_t **l_366 = &l_321;
                (*l_366) = func_48(l_290, l_290, ((**l_289) && (safe_sub_func_int16_t_s_s((((safe_mod_func_uint8_t_u_u(((((safe_mul_func_int8_t_s_s((((l_344 & (((0x44 > (safe_mod_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(((safe_mod_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_s(((safe_add_func_uint32_t_u_u(0xBC6312C1, (p_47 ^ (((safe_rshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s(65535U, g_89)), l_344)), (**l_289))), g_89)) , 0) | 248U)))) , 1U), l_344)) , p_47), (**l_290))) > g_89), (**l_240))), l_363))) , g_27) >= p_47)) || (**l_290)) == p_47), 2U)) > p_47) >= 0xC9) , p_47), g_4)) , &g_331) != &g_331), (**l_240)))), (*l_240));
            }
        }
    }
    else
    {
        int32_t ***l_390 = (void*)0;
        int32_t ****l_389 = &l_390;
        int32_t l_413 = 0x5B1CE934;
        int32_t *l_453 = (void*)0;
        uint32_t l_517 = 4294967291U;
        uint32_t l_526 = 0x94BFF715;
        for (l_286 = (-11); (l_286 > 10); l_286 = safe_add_func_int8_t_s_s(l_286, 3))
        {
            int32_t **l_369 = (void*)0;
            int8_t l_370 = (-1);
            int32_t **l_371 = (void*)0;
            int32_t *l_373 = (void*)0;
            int32_t **l_372 = &l_373;
            int32_t *****l_400 = (void*)0;
            (*l_372) = func_48(l_369, (l_370 , ((&g_28 != (void*)0) , &g_29)), (*p_46), (*g_28));
            (*p_46) = (&g_205 != (void*)0);
            (*g_29) = ((safe_sub_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(0U, 5)), g_27)), (**l_240))) | (((safe_lshift_func_int16_t_s_s((0x3FD6ED36 && (safe_sub_func_uint8_t_u_u((safe_add_func_int8_t_s_s((p_47 , (+(safe_rshift_func_int16_t_s_s((&g_331 == l_389), (~((safe_add_func_int8_t_s_s((safe_sub_func_int16_t_s_s((safe_mul_func_int8_t_s_s((**l_372), ((safe_mul_func_int16_t_s_s(((void*)0 != l_400), (-1))) | g_89))), g_27)), 1)) >= g_4)))))), g_89)), g_27))), p_47)) >= (*l_164)) ^ (**l_372)));
            (*p_46) = ((*l_389) != (void*)0);
        }
        if (((((((safe_mod_func_uint8_t_u_u((p_47 != (safe_mul_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_u((((g_89 >= (safe_mod_func_int8_t_s_s((&p_45 == &p_45), g_89))) == g_4) && (*l_164)), 14)) | ((safe_rshift_func_uint16_t_u_u(p_47, (safe_add_func_int16_t_s_s(((((*g_29) == (*p_45)) ^ 0x1174D2FE) , g_4), 0xBBF7)))) <= p_47)), g_89))), g_4)) || p_47) | g_27) , p_47) , l_413) != g_89))
        {
            int16_t l_416 = 1;
            const int32_t *l_418 = &g_89;
            const int32_t **l_417 = &l_418;
            int32_t **l_427 = &g_29;
            int32_t *l_429 = &g_27;
            int32_t **l_428 = &l_429;
            (*l_417) = ((safe_add_func_int16_t_s_s((((l_416 , l_416) , p_47) , 0x0EC1), g_27)) , &p_47);
            (*l_417) = (*g_28);
            (*l_428) = func_48((((safe_add_func_int32_t_s_s(((g_89 > (1 && ((safe_add_func_int32_t_s_s((-1), 1)) , g_89))) && (safe_rshift_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u(250U, ((((**l_240) && p_47) != g_89) && 0x49))), 6))), (*l_164))) , p_47) , l_240), l_427, (*p_46), (*l_240));
        }
        else
        {
            int32_t *l_434 = &l_135;
            int32_t *** const * const l_442 = &l_390;
            int8_t l_505 = 0;
            uint16_t l_506 = 0xB522;
            if (((void*)0 == &p_45))
            {
                int32_t l_441 = 0x6F301F7C;
                int32_t **l_485 = &l_434;
                const int32_t **l_489 = (void*)0;
                const int32_t *l_491 = &l_441;
                const int32_t **l_490 = &l_491;
                if ((safe_mod_func_int16_t_s_s(1, (safe_lshift_func_uint16_t_u_u(g_89, g_4)))))
                {
                    int32_t * const l_440 = &g_27;
                    int32_t **l_446 = &l_434;
                    int32_t ****l_456 = &l_390;
                    int32_t **l_483 = &l_453;
                    if (((l_434 != &p_47) , (((p_47 && ((+p_47) < ((void*)0 != &g_28))) < (((safe_sub_func_uint16_t_u_u((((((1 && ((((safe_lshift_func_uint16_t_u_u((((0U ^ ((l_440 != (void*)0) && (*l_434))) , 0x8385) || g_89), g_89)) , p_47) ^ 0x85) || (*p_46))) , l_441) , &g_331) == l_442) ^ p_47), 0xD345)) ^ 255U) == 0x4D634411)) , g_443)))
                    {
                        int32_t *l_444 = &l_441;
                        return p_46;
                    }
                    else
                    {
                        int32_t **l_445 = &l_434;
                        int32_t **l_454 = (void*)0;
                        int32_t **l_455 = &l_434;
                        (*l_445) = func_48(&g_29, &l_434, l_441, p_46);
                        (*l_455) = func_48(l_446, l_445, (safe_mod_func_uint32_t_u_u((g_89 != ((safe_add_func_uint32_t_u_u(p_47, (g_443 != (((((safe_mod_func_int16_t_s_s(l_441, p_47)) != 0x0113F8EA) >= (p_47 ^ g_89)) , (-1)) ^ 1U)))) , g_89)), 0x5808407F)), l_453);
                    }
                    (**l_446) = ((l_456 == (void*)0) , (safe_mod_func_uint16_t_u_u((safe_mod_func_int16_t_s_s(l_441, (safe_add_func_uint32_t_u_u(4294967295U, g_89)))), (((!(safe_rshift_func_int8_t_s_s(((p_47 , (*p_45)) ^ (g_4 > l_466)), p_47))) || 0U) , p_47))));
                    p_46 = func_48(&p_46, &g_29, (safe_rshift_func_uint8_t_u_u(((((((safe_sub_func_int32_t_s_s(((safe_mod_func_uint32_t_u_u((p_47 == (safe_mod_func_uint8_t_u_u(p_47, g_89))), (*g_29))) != (safe_add_func_int8_t_s_s(g_443, (safe_rshift_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((&p_45 != ((safe_sub_func_uint8_t_u_u(255U, p_47)) , &p_45)), g_27)), g_4))))), g_89)) >= p_47) , (void*)0) != (void*)0) == 7) > p_47), 0)), &l_441);
                    (*l_483) = func_48(&p_46, &g_29, (&g_331 != (void*)0), p_46);
                }
                else
                {
                    int32_t **** const l_484 = &l_390;
                    int32_t **l_488 = &l_453;
                    (*l_488) = func_48((((void*)0 == l_484) , &p_46), l_485, ((+(&p_47 != (void*)0)) , (safe_unary_minus_func_int16_t_s(g_27))), (*g_28));
                }
                (*l_490) = &p_47;
            }
            else
            {
                int32_t **l_492 = &l_434;
                (**l_492) = ((l_492 == l_492) | (safe_sub_func_int8_t_s_s(0xA0, (&p_47 == (void*)0))));
                (*p_46) = (((((safe_lshift_func_int8_t_s_s(0x16, ((void*)0 == &g_331))) , (safe_sub_func_int8_t_s_s((safe_sub_func_int8_t_s_s(0x2D, ((((g_443 , (((**l_492) < (((safe_lshift_func_uint8_t_u_u(2U, ((safe_mul_func_uint8_t_u_u(((((void*)0 != &g_28) >= (**l_492)) & g_27), p_47)) > g_4))) , g_443) != g_443)) > l_505)) >= p_47) < g_27) < g_443))), 0xE3))) <= 0x9378FC52) && l_506) && 4294967295U);
                (*p_46) = ((safe_mod_func_uint32_t_u_u(p_47, 1)) || ((void*)0 != &p_47));
                if ((((((void*)0 != (*g_28)) , (!(((((void*)0 == &l_442) <= (((!(&l_442 != &l_389)) != (safe_rshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_s(((((*l_434) == 1U) == (safe_sub_func_int16_t_s_s(g_4, p_47))) , p_47), 6)), g_443))) <= (**l_492))) || (**g_28)) , p_47))) <= l_517) | p_47))
                {
                    return (*g_28);
                }
                else
                {
                    (**g_28) = (*p_46);
                }
            }
            (**g_28) = 0;
            (*l_434) = ((*l_442) != (((((safe_rshift_func_uint8_t_u_s(g_443, 0)) || (safe_lshift_func_uint8_t_u_u((((((g_4 , p_47) , ((safe_lshift_func_int16_t_s_u(((((safe_sub_func_int32_t_s_s(l_526, ((0xEBAA9610 > ((safe_mod_func_uint16_t_u_u(((*l_389) == (*l_442)), (safe_lshift_func_uint8_t_u_u(l_531, 4)))) == p_47)) == g_532))) | (*l_164)) & g_443) ^ g_443), g_532)) >= 0x085E)) ^ (-1)) >= g_443) <= g_532), 1))) >= 4294967288U) < (-1)) , (*l_442)));
            if (((safe_sub_func_int16_t_s_s((6U > (g_4 <= (safe_sub_func_int16_t_s_s((~g_27), (g_89 != ((!(p_47 >= (safe_mod_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(((*l_164) > (*l_434)), g_89)), (safe_sub_func_uint32_t_u_u(((safe_sub_func_int32_t_s_s(l_547, 0x40EA7109)) != (**l_240)), g_89)))))) , g_27)))))), 8)) & 0U))
            {
                int32_t *****l_548 = &g_205;
                (*l_548) = (void*)0;
            }
            else
            {
                int32_t **l_550 = &g_549;
                const int32_t *l_551 = &l_531;
                p_46 = (void*)0;
                (*p_45) = (*p_45);
                (*l_550) = (p_47 , g_549);
                l_551 = &p_47;
            }
        }
        if ((*g_549))
        {
            return p_46;
        }
        else
        {
            int32_t *l_552 = &g_89;
            int32_t **l_553 = (void*)0;
            int32_t **l_554 = &l_552;
            const int32_t **l_555 = (void*)0;
            const int32_t *l_557 = &l_135;
            const int32_t **l_556 = &l_557;
            p_46 = (void*)0;
            (*l_389) = (p_47 , &l_240);
            (*l_554) = func_48(&p_46, &p_46, (***l_390), l_552);
            (*l_556) = &p_47;
        }
    }
    return (*g_28);
}
static int32_t * const func_48(int32_t ** p_49, int32_t ** p_50, int32_t p_51, int32_t * p_52)
{
    int32_t *l_134 = &g_89;
    int32_t **l_133 = &l_134;
    (*l_133) = (*g_28);
    return (*p_50);
}
static uint16_t func_53(uint16_t p_54)
{
    int32_t *l_66 = &g_27;
    for (g_27 = 20; (g_27 <= (-22)); g_27 = safe_sub_func_uint32_t_u_u(g_27, 5))
    {
        int32_t **l_62 = (void*)0;
        int32_t * const *l_100 = (void*)0;
        if (func_57((*g_28), &g_29, l_62, ((g_4 , (safe_sub_func_int16_t_s_s(((~((l_66 != (*g_28)) | ((safe_lshift_func_uint8_t_u_s((l_66 == (void*)0), 0)) < ((safe_lshift_func_int16_t_s_s((~(*g_29)), 4)) != p_54)))) , g_4), 0U))) < 1U)))
        {
            int16_t l_74 = 0x2F60;
            int32_t **l_86 = &g_29;
            int32_t *l_87 = (void*)0;
            int32_t *l_88 = &g_89;
            if (l_74)
                break;
            (*l_88) = ((safe_mul_func_int8_t_s_s(((((((safe_mod_func_int8_t_s_s((p_54 , (((p_54 < (((safe_rshift_func_uint8_t_u_s((safe_add_func_int8_t_s_s(((~(p_54 == (((((*g_28) != (void*)0) , (void*)0) != l_66) < (4294967295U > ((safe_add_func_int8_t_s_s((((p_54 , g_4) >= g_4) > (*l_66)), (-1))) ^ g_27))))) == l_74), 0xA6)), g_27)) || g_4) >= g_4)) , &g_29) != l_86)), p_54)) || p_54) < g_4) , g_4) >= (*l_66)) ^ 0x638B), 0xAE)) >= 0xCFD2);
        }
        else
        {
            int32_t *l_102 = (void*)0;
            g_89 = ((((((safe_add_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(((g_89 > ((((safe_unary_minus_func_int32_t_s((((safe_sub_func_uint32_t_u_u(p_54, (safe_unary_minus_func_uint8_t_u((safe_add_func_int8_t_s_s(((((void*)0 == l_100) | (safe_unary_minus_func_int8_t_s(p_54))) , (p_54 ^ ((void*)0 != l_102))), (4294967291U && (**g_28)))))))) <= g_89) != g_89))) & 0x669B) != 4U) , 0x804E)) && 7U), (*l_66))), p_54)) <= 0x6A71) , 1U) , g_89) | (*l_66)) && p_54);
        }
    }
    (**g_28) = ((&g_29 != &g_29) , ((safe_rshift_func_uint8_t_u_u((4294967292U < g_4), 1)) != (safe_add_func_int16_t_s_s(((safe_lshift_func_int8_t_s_s((((safe_sub_func_int8_t_s_s(((void*)0 == l_66), ((safe_rshift_func_int16_t_s_u((safe_add_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((safe_unary_minus_func_uint32_t_u(((safe_lshift_func_uint16_t_u_s(0x3FBE, 15)) , g_4))), (safe_rshift_func_int16_t_s_u(p_54, 9)))), g_4)), 15)) == (-9)))) < 0x0A) && g_27), g_4)) == (*l_66)), 0xFDFB))));
    for (g_89 = 0; (g_89 < 7); ++g_89)
    {
        uint32_t l_124 = 0U;
        int32_t **l_131 = &l_66;
        int32_t ***l_130 = &l_131;
        (*l_66) = (((l_124 != ((safe_mul_func_uint8_t_u_u(p_54, 0)) && (safe_mod_func_int32_t_s_s(l_124, (~(g_4 >= ((((*l_66) || (((void*)0 != l_66) | ((0xE6 < 0x2E) , 65531U))) & p_54) < 0xC77F))))))) >= (*l_66)) != g_89);
        (*l_130) = &g_29;
    }
    return p_54;
}
static int32_t func_57(int32_t * p_58, int32_t ** p_59, int32_t ** p_60, int16_t p_61)
{
    return (*p_58);
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_4;
    csmith_sink_ = g_27;
    csmith_sink_ = g_89;
    csmith_sink_ = g_443;
    csmith_sink_ = g_532;
    csmith_sink_ = g_582;
    platform_main_end(0,0);
    return 0;
}
