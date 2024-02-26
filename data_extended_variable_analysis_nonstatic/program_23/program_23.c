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
   uint32_t f0;
   const uint8_t f1;
   uint32_t f2;
   int32_t f3;
   int8_t f4;
   const uint32_t f5;
   int8_t f6;
   const uint32_t f7;
   int32_t f8;
};
static int32_t g_2 = (-4);
static uint8_t g_5 = 0x44;
static int32_t g_14 = 1;
static uint16_t g_23 = 5U;
static int32_t g_66 = 0xED6CA138;
static int32_t **g_89 = (void*)0;
static uint32_t g_112 = 0U;
static int32_t g_117 = 0xEDB7DE59;
static int16_t g_160 = (-4);
static uint8_t g_172 = 0U;
static int32_t *g_179 = (void*)0;
static uint32_t g_234 = 4294967287U;
static int32_t g_344 = 0x7A8E80D3;
static uint8_t g_407 = 251U;
static uint8_t g_410 = 0U;
static struct S0 g_440 = {4294967290U,255U,4294967286U,-5,1,4294967295U,6,0x5809B3B6,8};
static int8_t g_655 = 0x75;
static int32_t g_663 = 0x97AA9BFB;
static int32_t g_666 = 0x2B9D9594;
static int16_t g_683 = 2;
static uint32_t g_694 = 0U;
static int16_t g_749 = 0x24AB;
static int16_t g_770 = 0xABBB;
static int8_t g_772 = 0xCE;
static uint32_t g_773 = 0xA0B92CAF;
static const int32_t g_846 = 0xF039BE76;
static uint8_t g_849 = 0xF6;
static uint8_t g_890 = 0x86;
static uint8_t g_930 = 0xCA;
static int32_t func_1(void);
static int32_t * func_8(uint8_t p_9, const uint32_t p_10);
static const int32_t * func_28(int32_t p_29, struct S0 p_30, struct S0 p_31, int32_t * p_32);
static uint8_t func_45(int32_t * const p_46, struct S0 p_47);
static int32_t * const func_48(uint16_t p_49, int32_t ** p_50);
static int32_t ** func_51(uint32_t p_52, int32_t ** p_53, int8_t p_54);
static uint32_t func_55(int32_t ** p_56, int32_t ** p_57, uint8_t p_58, int32_t * p_59, int32_t * p_60);
static int32_t ** func_61(int16_t p_62);
static uint8_t func_69(uint8_t p_70);
static uint16_t func_71(int16_t p_72, int32_t p_73, int32_t ** const p_74, int8_t p_75);
static int32_t func_1(void)
{
    struct S0 l_34 = {0xDC068927,247U,0x90B2811F,4,-8,0x9FF93F8D,0x90,4294967286U,0x0C653DDB};
    uint32_t l_591 = 1U;
    int32_t * const l_599 = &g_117;
    int8_t l_601 = 0x59;
    int32_t l_764 = 0x069D2D8E;
    uint32_t l_786 = 0x05295536;
    const uint32_t l_901 = 4294967293U;
    uint8_t l_967 = 0x2E;
lbl_707:
    for (g_2 = 0; (g_2 < 18); g_2 = safe_add_func_int16_t_s_s(g_2, 7))
    {
        const int16_t l_11 = 0x2F80;
        struct S0 l_33 = {4294967291U,0xBB,4294967286U,0xD0BD2F23,0x37,4U,0xD2,1U,2};
        int32_t *l_35 = &g_2;
        const int32_t *l_549 = &g_14;
        const int32_t **l_548 = &l_549;
        g_5 = (-1);
        for (g_5 = 0; (g_5 <= 14); ++g_5)
        {
            int32_t *l_27 = &g_14;
            int32_t **l_26 = &l_27;
            if (g_5)
                break;
            (*l_26) = func_8(g_5, l_11);
        }
        (*l_548) = func_28(g_14, l_33, l_34, l_35);
    }
    for (g_172 = 0; (g_172 != 31); ++g_172)
    {
        uint32_t l_584 = 0x72773E2D;
        uint32_t l_604 = 9U;
        int32_t l_628 = 0x41BF8B16;
        int32_t l_687 = 6;
        int8_t l_746 = 8;
        int32_t l_771 = 1;
        int32_t **l_850 = &g_179;
        int16_t l_924 = 0x6DB0;
        if ((&g_179 == (void*)0))
        {
            int32_t **l_552 = &g_179;
            int32_t *l_553 = (void*)0;
            int32_t *l_554 = &g_2;
            int32_t *l_555 = &g_2;
            int32_t *l_556 = &g_2;
            int32_t *l_557 = (void*)0;
            int32_t *l_558 = &g_66;
            int32_t *l_559 = &g_66;
            int32_t *l_560 = &g_117;
            int32_t *l_561 = &g_2;
            int32_t *l_562 = &g_117;
            int32_t *l_563 = &g_344;
            int32_t *l_564 = &g_14;
            int32_t *l_565 = &g_14;
            int32_t *l_566 = &g_344;
            int32_t *l_567 = (void*)0;
            int32_t *l_568 = &g_2;
            int32_t *l_569 = (void*)0;
            int32_t *l_570 = &g_14;
            int32_t *l_571 = &g_344;
            int32_t *l_572 = &g_344;
            int32_t *l_573 = (void*)0;
            int32_t *l_574 = &g_117;
            int32_t *l_575 = (void*)0;
            int32_t *l_576 = &g_66;
            int32_t *l_577 = &g_117;
            int32_t *l_578 = &g_344;
            int32_t *l_579 = (void*)0;
            int32_t *l_580 = &g_14;
            int32_t *l_581 = &g_2;
            int32_t *l_582 = &g_2;
            int32_t *l_583 = &g_344;
            int32_t l_629 = 0;
            int32_t l_636 = 0xAE5FA1D2;
            int32_t l_669 = 2;
            int32_t l_750 = 0x8BD8E4BD;
            int32_t l_758 = (-4);
            (*l_552) = &g_2;
            --l_584;
            for (g_117 = 23; (g_117 <= (-19)); g_117--)
            {
                int16_t l_602 = 0x6B74;
                int32_t l_603 = 8;
                for (g_440.f2 = 0; (g_440.f2 > 52); ++g_440.f2)
                {
                    uint8_t l_594 = 0xE1;
                    int32_t ***l_597 = (void*)0;
                    int32_t ***l_598 = &l_552;
                    int32_t **l_600 = &l_582;
                    l_591--;
                    ++l_594;
                    (*l_598) = &g_179;
                    (*l_600) = l_599;
                }
                (*l_558) = l_601;
                l_603 = l_602;
            }
            if (((-7) ^ (l_604 | (-4))))
            {
                int32_t ***l_610 = &l_552;
                for (g_440.f8 = (-13); (g_440.f8 >= 12); g_440.f8 = safe_add_func_int16_t_s_s(g_440.f8, 1))
                {
                    int8_t l_611 = 0x04;
                    uint32_t l_612 = 0x2A857ABA;
                    for (l_34.f0 = (-4); (l_34.f0 >= 22); l_34.f0 = safe_add_func_int16_t_s_s(l_34.f0, 1))
                    {
                        int32_t **l_609 = &l_567;
                        (*l_609) = l_599;
                        (***l_610) |= ((l_610 == &g_89) <= l_604);
                        (*l_609) = &g_344;
                    }
                    (*l_583) ^= ((l_604 != ((((l_611 >= ((*l_599) > (*l_556))) < ((l_584 != 4294967295U) || (***l_610))) && (l_611 | 1)) ^ 0x93EC)) || l_611);
                    if ((***l_610))
                    {
                        int32_t *l_615 = &g_344;
                        int32_t *l_616 = (void*)0;
                        int32_t *l_617 = (void*)0;
                        int32_t *l_618 = &g_14;
                        int32_t *l_619 = &g_2;
                        int32_t *l_620 = &g_344;
                        int32_t *l_621 = &g_117;
                        int32_t *l_622 = &g_344;
                        int32_t *l_623 = (void*)0;
                        int32_t *l_624 = &g_66;
                        int32_t *l_625 = &g_14;
                        int32_t *l_626 = &g_66;
                        int32_t *l_627 = &g_344;
                        int32_t l_630 = 0xDF48D24F;
                        int32_t *l_631 = (void*)0;
                        int32_t *l_632 = &g_14;
                        int32_t *l_633 = &l_629;
                        int32_t *l_634 = &l_629;
                        int32_t *l_635 = &g_344;
                        int32_t *l_637 = &l_636;
                        int32_t *l_638 = &g_117;
                        int32_t *l_639 = &g_344;
                        int32_t *l_640 = &l_628;
                        int32_t *l_641 = (void*)0;
                        int32_t l_642 = 0x95CDAB8C;
                        int32_t *l_643 = &l_630;
                        int32_t *l_644 = &l_642;
                        int32_t *l_645 = (void*)0;
                        int32_t *l_646 = &l_636;
                        int32_t *l_647 = &l_630;
                        int32_t *l_648 = &g_14;
                        int32_t *l_649 = (void*)0;
                        int32_t *l_650 = &l_629;
                        int32_t *l_651 = &g_344;
                        int32_t *l_652 = (void*)0;
                        int32_t *l_653 = &l_628;
                        int32_t *l_654 = &g_344;
                        int32_t *l_656 = &g_14;
                        int32_t *l_657 = &l_629;
                        int32_t *l_658 = &g_117;
                        int32_t *l_659 = &l_629;
                        int32_t *l_660 = &g_344;
                        int32_t *l_661 = &l_629;
                        int32_t *l_662 = &g_117;
                        int32_t *l_664 = &l_636;
                        int32_t *l_665 = &l_628;
                        int32_t *l_667 = &l_628;
                        int32_t *l_668 = &g_117;
                        int32_t *l_670 = &g_2;
                        int32_t *l_671 = &g_2;
                        int32_t *l_672 = &g_117;
                        int32_t *l_673 = &l_628;
                        int32_t *l_674 = &l_636;
                        int32_t *l_675 = &l_629;
                        int32_t *l_676 = &g_14;
                        int32_t *l_677 = &g_14;
                        int32_t *l_678 = &l_630;
                        int32_t *l_679 = &l_628;
                        int32_t *l_680 = &l_630;
                        int32_t *l_681 = &g_666;
                        int32_t *l_682 = &l_636;
                        int32_t *l_684 = &l_669;
                        int32_t *l_685 = &l_642;
                        int32_t *l_686 = &g_14;
                        int32_t *l_688 = &g_2;
                        int32_t *l_689 = &l_669;
                        int32_t *l_690 = &g_66;
                        int32_t *l_691 = &l_636;
                        int32_t *l_692 = &l_669;
                        int32_t *l_693 = (void*)0;
                        l_612++;
                        --g_694;
                    }
                    else
                    {
                        (*l_577) ^= (safe_add_func_uint8_t_u_u(0xB8, ((((safe_mod_func_uint16_t_u_u(((g_234 < 0xDE11E3C6) == (safe_mod_func_uint32_t_u_u(((((g_440.f1 & ((&g_179 != (void*)0) & (safe_add_func_int32_t_s_s(0x2E80C138, (safe_add_func_int32_t_s_s((0x0CBBEA3A || (*g_179)), 0x6A118B43)))))) <= g_440.f6) | g_172) <= g_440.f2), g_440.f7))), (*l_561))) != 0U) ^ 0x1CAE223D) | (*g_179))));
                        if (g_5)
                            goto lbl_707;
                    }
                }
            }
            else
            {
                int32_t **l_710 = (void*)0;
                int32_t **l_711 = &l_564;
                int32_t *l_712 = &l_687;
                int32_t *l_713 = (void*)0;
                int32_t *l_714 = &g_666;
                int32_t *l_715 = &g_2;
                int32_t *l_716 = &l_629;
                int32_t *l_717 = &l_687;
                int32_t *l_718 = (void*)0;
                int32_t *l_719 = &l_629;
                int32_t *l_720 = &g_344;
                int32_t l_721 = 0x3AE2FDA7;
                int32_t *l_722 = (void*)0;
                int32_t *l_723 = &g_66;
                int32_t *l_724 = &g_117;
                int32_t *l_725 = (void*)0;
                int32_t *l_726 = &l_636;
                int32_t l_727 = (-1);
                int32_t *l_728 = &l_721;
                int32_t *l_729 = (void*)0;
                int32_t *l_730 = (void*)0;
                int32_t *l_731 = &g_14;
                int32_t *l_732 = &g_2;
                int32_t *l_733 = (void*)0;
                int32_t *l_734 = &l_721;
                int32_t *l_735 = &l_669;
                int32_t *l_736 = &l_629;
                int32_t *l_737 = &g_66;
                int32_t *l_738 = &l_727;
                int32_t *l_739 = &l_629;
                int32_t *l_740 = (void*)0;
                int32_t *l_741 = &g_117;
                int32_t *l_742 = (void*)0;
                int32_t *l_743 = &g_66;
                int32_t *l_744 = &l_629;
                int32_t *l_745 = &g_666;
                int32_t *l_747 = &l_629;
                int32_t *l_748 = &l_628;
                int32_t *l_751 = &l_687;
                int32_t *l_752 = &g_14;
                int32_t *l_753 = &g_117;
                int32_t *l_754 = &l_721;
                int32_t *l_755 = &l_629;
                int32_t *l_756 = (void*)0;
                int32_t *l_757 = &l_750;
                int32_t *l_759 = &g_66;
                int32_t *l_760 = &l_687;
                int32_t *l_761 = &l_629;
                int32_t *l_762 = &g_117;
                int32_t *l_763 = &l_669;
                int32_t *l_765 = &l_727;
                int32_t *l_766 = &l_669;
                int32_t *l_767 = &g_66;
                int32_t *l_768 = (void*)0;
                int32_t *l_769 = (void*)0;
                (*l_711) = func_48((safe_mod_func_uint16_t_u_u((*l_599), 0x6724)), &g_179);
                ++g_773;
            }
        }
        else
        {
            int8_t l_776 = 4;
            int32_t l_780 = 6;
            int32_t l_816 = (-7);
            const int32_t l_939 = 2;
            int32_t **l_970 = (void*)0;
            (*l_599) &= l_776;
            for (l_591 = 0; (l_591 != 4); l_591 = safe_add_func_uint32_t_u_u(l_591, 4))
            {
                int32_t *l_779 = (void*)0;
                int32_t *l_781 = &g_344;
                int32_t *l_782 = &g_14;
                int32_t *l_783 = (void*)0;
                int32_t *l_784 = &l_764;
                int32_t *l_785 = &l_771;
                l_786++;
                l_816 |= ((safe_sub_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((g_440.f7 == (safe_rshift_func_int16_t_s_s(((safe_add_func_uint16_t_u_u(0xC329, ((((safe_sub_func_int16_t_s_s(g_344, ((safe_add_func_int8_t_s_s(((safe_sub_func_int32_t_s_s((g_666 || ((+((safe_sub_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(l_780, (safe_lshift_func_uint8_t_u_s((l_584 | (safe_add_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(((((((0 | (((((safe_rshift_func_int8_t_s_u(((((l_628 <= (((&l_782 != &g_179) || 65532U) && g_440.f7)) | g_2) != l_780) >= (*l_599)), 0)) & 0x16) || l_776) && 0x10) & 5)) <= 0x9AA10C5D) && 0U) && (*l_782)) && l_776) >= 6), (*l_782))), (*l_599)))), g_14)))), g_440.f4)) < 0)) > 1)), 7U)) | (-8)), (*l_782))) | 0xBE2860F0))) > g_440.f3) >= (*l_781)) != 4))) ^ g_440.f4), 10))), g_683)), g_440.f8)) | (*l_599));
                if ((safe_rshift_func_uint8_t_u_s(g_344, 4)))
                {
                    int32_t **l_819 = &l_785;
                    int32_t ***l_820 = &l_819;
                    (*l_819) = &g_117;
                    (*l_819) = (void*)0;
                    (*l_820) = &g_179;
                    (*l_819) = l_783;
                }
                else
                {
                    uint16_t l_847 = 0xFA8E;
                    int8_t l_848 = 0;
                    int32_t *l_902 = &l_780;
                    int32_t *l_903 = &g_344;
                    int32_t *l_904 = &l_771;
                    int32_t *l_905 = &l_764;
                    int32_t *l_906 = (void*)0;
                    int32_t *l_907 = &l_771;
                    int32_t *l_908 = (void*)0;
                    int32_t *l_909 = &l_628;
                    int32_t *l_910 = &l_816;
                    int32_t *l_911 = &g_2;
                    int32_t *l_912 = &l_780;
                    int32_t *l_913 = &l_780;
                    int32_t *l_914 = &g_2;
                    int32_t *l_915 = &l_771;
                    int32_t *l_916 = (void*)0;
                    int32_t *l_917 = &l_780;
                    int32_t *l_918 = &g_344;
                    int32_t *l_919 = &g_66;
                    int32_t *l_920 = &g_2;
                    int32_t *l_921 = &l_816;
                    int32_t *l_922 = &g_2;
                    int32_t *l_923 = &l_771;
                    int32_t l_925 = 0x429C6FF4;
                    int32_t *l_926 = (void*)0;
                    int32_t *l_927 = &l_771;
                    int32_t *l_928 = (void*)0;
                    int32_t *l_929 = &g_14;
                    if ((safe_sub_func_int8_t_s_s((((void*)0 != l_781) && g_440.f4), 0x57)))
                    {
                        int32_t l_845 = 0x476F2015;
                        int32_t *l_851 = (void*)0;
                        int32_t *l_852 = &g_66;
                        int32_t *l_853 = (void*)0;
                        int32_t *l_854 = &g_66;
                        int32_t *l_855 = &g_344;
                        int32_t *l_856 = &g_2;
                        int32_t *l_857 = (void*)0;
                        int32_t *l_858 = &g_666;
                        int32_t *l_859 = (void*)0;
                        int32_t *l_860 = (void*)0;
                        int32_t *l_861 = &g_14;
                        int32_t *l_862 = &g_117;
                        int32_t *l_863 = &g_2;
                        int32_t *l_864 = &l_687;
                        int32_t *l_865 = &g_14;
                        int32_t *l_866 = &g_66;
                        int32_t *l_867 = (void*)0;
                        int32_t *l_868 = &g_666;
                        int32_t *l_869 = &g_14;
                        int32_t *l_870 = &g_14;
                        int32_t *l_871 = (void*)0;
                        int32_t *l_872 = &g_2;
                        int32_t *l_873 = &l_780;
                        int32_t *l_874 = &g_2;
                        int32_t *l_875 = &l_764;
                        int32_t *l_876 = &l_764;
                        int32_t *l_877 = &g_344;
                        int32_t *l_878 = (void*)0;
                        int32_t *l_879 = (void*)0;
                        int32_t *l_880 = &l_687;
                        int32_t *l_881 = &l_687;
                        int32_t *l_882 = &g_2;
                        int32_t *l_883 = &g_2;
                        int32_t *l_884 = (void*)0;
                        int32_t *l_885 = &g_14;
                        int32_t *l_886 = &l_687;
                        int32_t *l_887 = &g_344;
                        int32_t *l_888 = (void*)0;
                        int32_t *l_889 = (void*)0;
                        if (g_440.f5)
                            goto lbl_707;
                        (*l_850) = (*l_850);
                        g_890++;
                    }
                    else
                    {
                        (*l_784) = ((((-1) && g_773) >= ((((~(0x6B && (((safe_lshift_func_int16_t_s_s(0xA123, ((-2) >= l_848))) < (safe_sub_func_uint16_t_u_u(l_780, (g_890 >= (((safe_sub_func_uint32_t_u_u((!g_849), l_780)) ^ l_901) < 0x42))))) | g_683))) < g_344) >= g_440.f3) >= 0xCEA2)) & (*l_781));
                    }
                    (*l_850) = l_779;
                    ++g_930;
                }
            }
            for (g_849 = 0; (g_849 != 20); g_849 = safe_add_func_int8_t_s_s(g_849, 2))
            {
                int32_t *l_949 = &l_816;
                int32_t *l_950 = &g_117;
                int32_t *l_951 = &g_666;
                int32_t *l_952 = &g_14;
                int32_t l_953 = 0xB3BFBB48;
                int32_t *l_954 = &g_66;
                int32_t *l_955 = &l_816;
                int32_t *l_956 = &g_344;
                int32_t *l_957 = &l_953;
                int32_t *l_958 = &g_66;
                int32_t *l_959 = &l_780;
                int32_t *l_960 = &l_780;
                int32_t *l_961 = (void*)0;
                uint32_t l_962 = 0xDC25C0CC;
                if (l_816)
                    break;
                l_687 ^= ((safe_rshift_func_int8_t_s_u((safe_add_func_uint16_t_u_u((l_939 && (l_816 >= (g_694 | (!(safe_add_func_uint8_t_u_u(((safe_mod_func_uint32_t_u_u(((safe_rshift_func_int8_t_s_u(((g_112 || (safe_add_func_uint16_t_u_u(0x57E8, g_160))) <= 0x1B), (g_749 > ((void*)0 != &l_599)))) || g_117), l_780)) || g_440.f7), g_666)))))), g_663)), (*l_599))) != 0x61);
                l_962--;
            }
            l_850 = l_970;
        }
        return l_628;
    }
    return (*l_599);
}
static int32_t * func_8(uint8_t p_9, const uint32_t p_10)
{
    int8_t l_12 = (-6);
    int32_t *l_13 = &g_14;
    int32_t *l_15 = &g_14;
    int32_t *l_16 = (void*)0;
    int32_t l_17 = 0xC383C67E;
    int32_t *l_18 = &g_14;
    int32_t *l_19 = &g_14;
    int32_t *l_20 = &l_17;
    int32_t *l_21 = (void*)0;
    int32_t l_22 = 0x2301355F;
    ++g_23;
    return &g_14;
}
static const int32_t * func_28(int32_t p_29, struct S0 p_30, struct S0 p_31, int32_t * p_32)
{
    int32_t *l_39 = &g_2;
    int32_t **l_38 = &l_39;
    int32_t l_452 = 0xB55A89C1;
    uint32_t l_456 = 0U;
    int16_t l_547 = 3;
    for (p_31.f8 = 22; (p_31.f8 <= 3); --p_31.f8)
    {
        int32_t *l_40 = &g_14;
        int32_t l_449 = 1;
        int32_t l_489 = 0xD2678A66;
        (*l_40) |= ((void*)0 == l_38);
        (*l_38) = &g_14;
        if ((((g_5 && (safe_rshift_func_uint16_t_u_s(g_5, g_14))) < 9U) <= (0x11 < ((safe_rshift_func_uint16_t_u_u(p_31.f8, 1)) == func_45(func_48((*l_39), func_51(func_55(&l_39, func_61(g_14), (*l_39), p_32, p_32), g_89, g_5)), g_440)))))
        {
            int32_t ***l_447 = &l_38;
            uint16_t l_448 = 0x7926;
            (*l_39) = (0xE3E20B61 & (((&p_32 != &p_32) | (((((safe_rshift_func_uint16_t_u_s(0x7D5E, g_344)) & p_31.f8) == (safe_rshift_func_uint16_t_u_s(p_30.f2, 14))) == (!(((&l_38 == l_447) > l_448) & l_449))) > p_30.f1)) && g_66));
        }
        else
        {
            uint16_t l_470 = 0U;
            int32_t ***l_546 = &g_89;
            (*g_89) = (void*)0;
            if ((safe_mod_func_uint8_t_u_u(l_452, (0x99B4 | (*l_40)))))
            {
                int32_t **l_455 = (void*)0;
                const int32_t *l_467 = &g_117;
                const int32_t **l_466 = &l_467;
                int16_t l_474 = (-7);
                int32_t l_498 = (-8);
                uint16_t l_526 = 1U;
                for (p_31.f2 = 0; (p_31.f2 < 25); p_31.f2 = safe_add_func_int16_t_s_s(p_31.f2, 3))
                {
                    uint32_t l_468 = 0x9B6EA8F3;
                    int32_t **l_490 = &g_179;
                    uint32_t l_491 = 0x94F91D43;
                    (*g_89) = l_40;
                    if ((*p_32))
                    {
                        int32_t l_469 = 0x6F3B4925;
                        (*g_89) = l_40;
                        if ((*p_32))
                            continue;
                        (**g_89) = ((l_456 ^ ((-3) >= ((safe_rshift_func_uint8_t_u_s(((((~0x4A) >= (safe_add_func_uint8_t_u_u(((-8) ^ 6), (safe_unary_minus_func_int16_t_s((safe_mod_func_uint8_t_u_u((((((safe_unary_minus_func_uint32_t_u(((*g_89) == (void*)0))) & (l_466 != &g_179)) == (*l_39)) > (**l_38)) | l_468), p_30.f2))))))) ^ l_468) ^ l_469), 2)) | g_440.f2))) != l_470);
                        (**l_38) = (safe_unary_minus_func_uint8_t_u(((p_30.f2 != l_469) < ((*l_467) >= (safe_rshift_func_uint16_t_u_u(((g_23 > g_440.f0) | (((*l_467) >= (l_474 >= ((safe_mod_func_uint16_t_u_u(((((((&g_179 != (void*)0) > (*p_32)) >= p_30.f7) && p_31.f3) >= g_234) && l_470), 0xD146)) > 0xC48D))) >= 0x44A4)), 9))))));
                    }
                    else
                    {
                        int32_t **l_492 = &g_179;
                        uint16_t l_493 = 0x3865;
                        (**l_38) = (p_30.f7 & (0x66 > ((((safe_add_func_int16_t_s_s(((safe_sub_func_uint16_t_u_u(g_5, (safe_rshift_func_int16_t_s_s((0x36 < (((safe_lshift_func_int16_t_s_s(g_23, 15)) < (0xE1 || l_470)) ^ (safe_lshift_func_int16_t_s_u(p_31.f8, g_440.f2)))), 0)))) || 1U), 0x9F13)) >= g_172) != g_2) >= p_30.f8)));
                        (*l_492) = func_48(l_489, func_51(p_30.f3, func_51(p_30.f8, l_490, ((0x7F || (&g_179 == &p_32)) != (g_440.f7 != 255U))), l_491));
                        l_493--;
                    }
                    for (g_66 = (-5); (g_66 < (-23)); g_66 = safe_sub_func_uint32_t_u_u(g_66, 6))
                    {
                        int32_t *l_499 = &l_489;
                        int32_t *l_500 = &l_489;
                        int32_t *l_501 = (void*)0;
                        int32_t *l_502 = &g_117;
                        int32_t *l_503 = (void*)0;
                        int32_t *l_504 = &g_117;
                        int32_t *l_505 = (void*)0;
                        int32_t *l_506 = &g_14;
                        int32_t *l_507 = &g_117;
                        int32_t *l_508 = &l_498;
                        int32_t *l_509 = &l_489;
                        int32_t *l_510 = &g_14;
                        int32_t *l_511 = &l_489;
                        int32_t *l_512 = (void*)0;
                        int32_t *l_513 = &l_489;
                        int32_t *l_514 = &g_14;
                        int32_t *l_515 = &l_489;
                        int32_t *l_516 = &l_489;
                        int32_t *l_517 = &g_344;
                        int32_t *l_518 = &g_344;
                        int32_t *l_519 = &g_14;
                        int32_t *l_520 = &g_14;
                        int32_t *l_521 = &l_498;
                        int32_t l_522 = 0xBB21BB53;
                        int32_t *l_523 = &g_14;
                        int32_t *l_524 = &l_522;
                        int32_t *l_525 = &l_498;
                        --l_526;
                    }
                    for (g_440.f3 = 0; (g_440.f3 < 1); ++g_440.f3)
                    {
                        int32_t l_538 = (-3);
                        (**g_89) = ((safe_mod_func_uint32_t_u_u((((**l_490) <= ((&g_179 == &l_40) != (250U >= (safe_add_func_uint16_t_u_u((*l_39), g_410))))) > (safe_mod_func_int32_t_s_s(((~((-1) <= 1U)) == ((l_538 && p_30.f2) & 5U)), (*l_40)))), g_440.f3)) || g_160);
                    }
                }
            }
            else
            {
                int32_t *l_539 = (void*)0;
                (*g_89) = l_539;
                (*l_40) = (safe_add_func_int32_t_s_s((((l_470 & 1) == (g_440.f1 | g_440.f4)) ^ ((safe_sub_func_uint32_t_u_u((((safe_mod_func_uint8_t_u_u(((*g_89) == (*g_89)), g_440.f2)) ^ (((g_66 || 5U) <= g_23) == p_30.f4)) >= g_117), 0x4B3CA658)) < g_440.f6)), l_470));
            }
            l_547 |= ((*l_40) != ((l_546 == &g_89) > (*p_32)));
        }
    }
    return p_32;
}
static uint8_t func_45(int32_t * const p_46, struct S0 p_47)
{
    int32_t ***l_441 = &g_89;
    (*l_441) = &g_179;
    return p_47.f1;
}
static int32_t * const func_48(uint16_t p_49, int32_t ** p_50)
{
    const int32_t *l_417 = &g_14;
    const int32_t * const *l_416 = &l_417;
    const int8_t l_422 = 0xEF;
    if ((safe_rshift_func_int16_t_s_s((g_2 <= ((((((void*)0 == l_416) == (((7U <= (*g_179)) != (safe_add_func_uint16_t_u_u(((4294967289U ^ ((((((safe_mod_func_int32_t_s_s((p_49 > (l_422 & (*l_417))), g_66)) & g_410) >= (*g_179)) > (**p_50)) != g_23) <= p_49)) | (*l_417)), 0x23CC))) ^ 0x638CA9B3)) && (**l_416)) <= 1) > p_49)), 3)))
    {
        (*p_50) = func_8((&l_417 == &g_179), p_49);
    }
    else
    {
        int32_t l_438 = 0x201F38D1;
        int32_t l_439 = 0;
        (*p_50) = (*p_50);
        l_439 |= ((safe_mod_func_uint32_t_u_u(((g_160 == p_49) && ((4294967293U | ((((((safe_sub_func_uint16_t_u_u((((((+(safe_rshift_func_uint8_t_u_u((((((((safe_lshift_func_int8_t_s_u(0x3D, 3)) > (safe_lshift_func_uint16_t_u_s(((safe_sub_func_int32_t_s_s(((p_49 > 0xBE) > ((-1) && (safe_rshift_func_int16_t_s_u(((void*)0 == (*p_50)), p_49)))), g_117)) != g_234), 3))) <= (**p_50)) < 1U) && (**l_416)) >= (*l_417)) || (**l_416)), p_49))) > (-1)) || g_2) != p_49) ^ 1U), p_49)) < g_5) != 0x55) & p_49) >= 0x1491AB50) <= l_438)) ^ 3U)), 0x0D411CF6)) && p_49);
    }
    return (*p_50);
}
static int32_t ** func_51(uint32_t p_52, int32_t ** p_53, int8_t p_54)
{
    const int32_t l_294 = 0x377C8831;
    int32_t *l_301 = (void*)0;
    int32_t l_302 = 0xE542F5EF;
    int32_t l_310 = 9;
    uint32_t l_341 = 4294967293U;
    int32_t l_392 = 4;
    int32_t **l_411 = (void*)0;
    int32_t **l_412 = &l_301;
    const int8_t l_413 = 0x5D;
lbl_314:
    l_302 = (safe_mod_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((((+p_52) > (l_294 & (((l_294 | (0x069B > ((safe_rshift_func_uint16_t_u_u(p_52, 8)) & ((p_54 != g_172) & (!g_23))))) && (+(safe_mod_func_int32_t_s_s((-1), g_112)))) != g_112))) & p_52), p_52)), 6)), l_294));
    for (g_112 = 0; (g_112 == 40); g_112 = safe_add_func_uint8_t_u_u(g_112, 7))
    {
        uint32_t l_316 = 4U;
        const int32_t *l_323 = (void*)0;
        int32_t l_350 = (-1);
        if ((*g_179))
        {
            uint8_t l_312 = 0x79;
            for (l_302 = 3; (l_302 <= 3); l_302 = safe_add_func_int16_t_s_s(l_302, 7))
            {
                int32_t **l_309 = (void*)0;
                for (p_54 = (-24); (p_54 == 12); p_54 = safe_add_func_int8_t_s_s(p_54, 6))
                {
                    l_310 |= (&g_179 != l_309);
                    if ((~p_54))
                    {
                        int32_t *l_313 = &g_66;
                        (*l_313) ^= l_312;
                    }
                    else
                    {
                        return &g_179;
                    }
                }
                if (g_66)
                    goto lbl_314;
            }
        }
        else
        {
            int32_t *l_315 = &g_117;
            int32_t l_343 = 0;
            int32_t l_381 = 6;
            (*l_315) = 2;
            l_316 = (*g_179);
            if ((safe_lshift_func_uint16_t_u_u((((safe_lshift_func_uint8_t_u_u((*l_315), 4)) <= (safe_sub_func_int16_t_s_s((l_323 != (void*)0), p_52))) || 247U), (safe_rshift_func_uint16_t_u_s((l_323 == (void*)0), ((((((+0xB0C7BE27) & (l_316 | 4)) ^ 0x405D245C) | 0xD67A6C11) || 0x4C) ^ 0x1A))))))
            {
                int32_t *l_327 = (void*)0;
                l_301 = l_327;
                if (p_52)
                    continue;
                (*l_315) = (253U == ((((void*)0 != l_327) <= 0x9066) <= (safe_mod_func_int8_t_s_s(g_160, (safe_unary_minus_func_uint8_t_u((safe_add_func_int16_t_s_s((safe_add_func_int16_t_s_s(((*g_179) || ((safe_add_func_uint16_t_u_u(0x9C92, ((!0x266A) >= g_112))) | g_66)), g_14)), 0xD144))))))));
            }
            else
            {
                const int32_t **l_338 = &l_323;
                (*l_338) = l_323;
                for (p_52 = 7; (p_52 != 4); p_52--)
                {
                    int32_t *l_342 = &g_117;
                    int32_t *l_345 = &g_117;
                    int32_t *l_346 = &l_343;
                    int32_t *l_347 = &l_343;
                    int32_t *l_348 = (void*)0;
                    int32_t *l_349 = &l_343;
                    int32_t *l_351 = &l_302;
                    int32_t *l_352 = &g_117;
                    int32_t *l_353 = &g_66;
                    int32_t *l_354 = &g_344;
                    int32_t *l_355 = &g_344;
                    int32_t *l_356 = &g_66;
                    int32_t *l_357 = (void*)0;
                    int32_t *l_358 = &g_117;
                    int32_t *l_359 = &g_117;
                    int32_t *l_360 = &l_350;
                    int32_t *l_361 = &g_66;
                    int32_t *l_362 = &l_310;
                    int32_t *l_363 = &l_302;
                    int32_t *l_364 = (void*)0;
                    int32_t *l_365 = (void*)0;
                    int32_t *l_366 = &l_310;
                    int32_t *l_367 = &l_310;
                    int32_t *l_368 = &g_117;
                    int32_t *l_369 = &g_117;
                    int32_t *l_370 = (void*)0;
                    int32_t *l_371 = &g_66;
                    int32_t *l_372 = &l_302;
                    int32_t *l_373 = (void*)0;
                    int32_t *l_374 = &l_310;
                    int32_t *l_375 = &l_343;
                    int32_t *l_376 = &l_350;
                    int32_t *l_377 = (void*)0;
                    int32_t *l_378 = &g_344;
                    int32_t *l_379 = &g_66;
                    int32_t *l_380 = (void*)0;
                    int32_t *l_382 = &g_344;
                    int32_t *l_383 = &g_344;
                    int32_t *l_384 = &l_343;
                    int32_t *l_385 = &l_310;
                    int32_t *l_386 = &l_310;
                    int32_t *l_387 = &g_117;
                    int32_t *l_388 = (void*)0;
                    int32_t *l_389 = &g_117;
                    int32_t *l_390 = &g_66;
                    int32_t *l_391 = &l_343;
                    int32_t *l_393 = &g_66;
                    int32_t *l_394 = &g_117;
                    int32_t *l_395 = &l_343;
                    int32_t *l_396 = &g_66;
                    int32_t *l_397 = &l_381;
                    int32_t *l_398 = &l_343;
                    int32_t *l_399 = (void*)0;
                    int32_t *l_400 = &l_350;
                    int32_t l_401 = 0x5135FD46;
                    int32_t *l_402 = &l_343;
                    int32_t *l_403 = &l_350;
                    int32_t *l_404 = &g_117;
                    int32_t *l_405 = &l_302;
                    int32_t *l_406 = &l_401;
                    (*l_315) &= l_341;
                    g_407--;
                    if (g_410)
                        break;
                }
                if (p_54)
                    break;
            }
        }
        if (g_112)
            goto lbl_314;
    }
    (*l_412) = &l_392;
    g_179 = func_8(((p_52 < p_54) | ((void*)0 == &g_344)), l_413);
    return &g_179;
}
static uint32_t func_55(int32_t ** p_56, int32_t ** p_57, uint8_t p_58, int32_t * p_59, int32_t * p_60)
{
    int32_t *l_177 = &g_14;
    int32_t **l_178 = (void*)0;
    int32_t l_191 = 0x0F1C71BA;
    int32_t l_211 = 0xCE8EB294;
    int32_t l_212 = 0xFF389711;
    int32_t l_230 = 0xFB87D1E3;
    g_179 = func_8((safe_rshift_func_uint16_t_u_s(((g_112 & 0xDF9043A1) ^ 0xE61D), (l_177 == (void*)0))), (p_58 >= p_58));
    for (g_112 = 0; (g_112 < 9); g_112++)
    {
        int32_t l_182 = 0xC14779B9;
        int32_t *l_183 = &l_182;
        int32_t *l_184 = &l_182;
        int32_t *l_185 = &l_182;
        int32_t *l_186 = &g_66;
        int32_t *l_187 = &l_182;
        int32_t *l_188 = &g_66;
        int32_t *l_189 = &g_117;
        int32_t *l_190 = (void*)0;
        int32_t *l_192 = &g_117;
        int32_t *l_193 = &g_117;
        int32_t *l_194 = &l_191;
        int32_t *l_195 = &l_182;
        int32_t *l_196 = &l_182;
        int32_t *l_197 = &g_117;
        int32_t *l_198 = &l_191;
        int32_t *l_199 = (void*)0;
        int32_t *l_200 = &l_182;
        int32_t *l_201 = (void*)0;
        int32_t *l_202 = &l_182;
        int32_t *l_203 = (void*)0;
        int32_t *l_204 = &g_117;
        int32_t *l_205 = &l_182;
        int32_t *l_206 = &l_182;
        int32_t *l_207 = &l_191;
        int32_t *l_208 = &g_117;
        int32_t *l_209 = &g_66;
        int32_t *l_210 = &l_191;
        int32_t l_213 = 0xBC8DDD0E;
        int32_t *l_214 = (void*)0;
        int32_t *l_215 = &l_212;
        int32_t *l_216 = &g_117;
        int32_t *l_217 = &l_191;
        int32_t *l_218 = &l_182;
        int32_t *l_219 = (void*)0;
        int32_t *l_220 = &g_117;
        int32_t *l_221 = &l_182;
        int32_t *l_222 = &l_182;
        int32_t *l_223 = &l_211;
        int32_t *l_224 = (void*)0;
        int32_t *l_225 = &l_211;
        int32_t l_226 = 0;
        int32_t *l_227 = (void*)0;
        int32_t *l_228 = &g_66;
        int32_t l_229 = 0xF8A60635;
        int32_t *l_231 = &g_66;
        int32_t *l_232 = (void*)0;
        int32_t *l_233 = &l_212;
        g_234++;
        l_225 = func_8((((safe_lshift_func_int8_t_s_u(((safe_sub_func_uint8_t_u_u((((-1) > (safe_rshift_func_uint16_t_u_s((safe_sub_func_uint8_t_u_u((+p_58), (safe_mod_func_int8_t_s_s((~(((safe_rshift_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((g_14 <= (safe_unary_minus_func_int16_t_s((safe_sub_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(((void*)0 != &l_177), 0xD9)), ((*l_200) <= g_112)))))), ((safe_add_func_uint16_t_u_u((((-1) || p_58) || (*l_177)), (*l_177))) == 0x86A0))), p_58)) & 0x0F15) < 8)), p_58)))), p_58))) ^ p_58), 9U)) || 0x5D), g_172)) != p_58) ^ 0), p_58);
        (*l_220) = (((safe_sub_func_int8_t_s_s(((safe_mod_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(p_58, 1)), 65535U)) <= (((~(g_23 < g_160)) | (((((+p_58) || ((g_66 <= (((((safe_rshift_func_uint16_t_u_u(((&p_60 == &g_179) || ((safe_lshift_func_int8_t_s_u((((*g_179) ^ 1) <= g_23), (*l_200))) < 0x993B)), 0)) & 0x1CC493F2) || p_58) != (*p_59)) != (-6))) != p_58)) < (-1)) <= p_58) & (-10))) ^ 65529U)), (*l_177))) > 0xE8) < g_5);
        for (l_212 = 11; (l_212 > (-27)); l_212--)
        {
            int32_t *l_276 = (void*)0;
            const int32_t l_285 = 9;
            int32_t **l_286 = &l_207;
            (*l_194) = ((void*)0 == l_276);
            (*l_286) = func_8(((safe_rshift_func_uint8_t_u_s(p_58, 2)) <= (((&l_177 != (void*)0) != (((l_276 == (void*)0) != (safe_lshift_func_int8_t_s_u((safe_mod_func_uint32_t_u_u(((&l_190 != (void*)0) > (safe_sub_func_int32_t_s_s(((l_276 == (*p_56)) && (*g_179)), 0))), (*g_179))), 2))) > 0xC7)) ^ 0x3839)), l_285);
        }
    }
    return p_58;
}
static int32_t ** func_61(int16_t p_62)
{
    int32_t *l_65 = &g_66;
    int16_t l_76 = 0;
    int32_t l_83 = 0xDCB2139E;
    int32_t *l_115 = (void*)0;
    int32_t *l_116 = &g_117;
    int32_t *l_118 = &g_66;
    int32_t *l_119 = &g_66;
    int32_t l_120 = (-8);
    int32_t *l_121 = &g_117;
    int32_t *l_122 = &g_66;
    int32_t *l_123 = &g_66;
    int32_t l_124 = 0;
    int32_t *l_125 = &l_124;
    int32_t *l_126 = &g_66;
    int32_t *l_127 = &l_120;
    int32_t l_128 = 2;
    int32_t *l_129 = &l_128;
    int32_t *l_130 = (void*)0;
    int32_t *l_131 = &l_128;
    int32_t *l_132 = &l_128;
    int32_t *l_133 = (void*)0;
    int32_t *l_134 = (void*)0;
    int32_t *l_135 = &l_120;
    int32_t *l_136 = (void*)0;
    int32_t *l_137 = (void*)0;
    int32_t *l_138 = &l_128;
    int32_t *l_139 = &l_124;
    int32_t l_140 = 0xEFE8F334;
    int32_t *l_141 = &g_117;
    int32_t *l_142 = &g_117;
    int32_t *l_143 = &l_140;
    int32_t l_144 = 0x33B1D787;
    int32_t *l_145 = &g_66;
    int32_t l_146 = 0x816E0766;
    int32_t *l_147 = &l_146;
    int32_t *l_148 = &l_146;
    int32_t *l_149 = &l_146;
    int32_t *l_150 = &g_117;
    int32_t l_151 = 0xE2238E95;
    int32_t *l_152 = &l_144;
    int32_t *l_153 = &l_128;
    int32_t *l_154 = &l_124;
    int32_t *l_155 = &l_120;
    int32_t *l_156 = &g_66;
    int32_t *l_157 = &l_144;
    int32_t *l_158 = &l_124;
    int32_t *l_159 = &g_117;
    int32_t *l_161 = &l_151;
    int32_t *l_162 = &l_151;
    int32_t *l_163 = &l_146;
    int32_t *l_164 = &l_128;
    int32_t *l_165 = &l_128;
    int32_t *l_166 = (void*)0;
    int32_t *l_167 = &l_140;
    int32_t *l_168 = (void*)0;
    int32_t *l_169 = &l_144;
    int32_t l_170 = (-2);
    int32_t *l_171 = &l_170;
    (*l_65) ^= (safe_lshift_func_uint16_t_u_s(0xEFAB, 7));
    (*l_116) ^= (safe_add_func_int32_t_s_s(((func_69(((*l_65) & func_71(l_76, (((((safe_add_func_int16_t_s_s(((&l_65 == (void*)0) == (((*l_65) || (safe_sub_func_int32_t_s_s(g_2, (1U >= (safe_rshift_func_uint16_t_u_u((((((*l_65) ^ (*l_65)) > (*l_65)) && l_83) != 0), p_62)))))) < (*l_65))), (*l_65))) < 0x9E6D) & (*l_65)) > 0x1BDB030F) && 0xF0EB), &l_65, p_62))) < (-8)) != g_2), 0xFF66F6C6));
    g_172++;
    (*l_125) = p_62;
    return g_89;
}
static uint8_t func_69(uint8_t p_70)
{
    int32_t *l_88 = &g_14;
    int32_t **l_87 = &l_88;
    int32_t l_91 = 0x870B5DC3;
    int32_t *l_92 = &l_91;
    int32_t *l_93 = &g_66;
    int32_t *l_94 = &g_66;
    int32_t *l_95 = (void*)0;
    int32_t *l_96 = &l_91;
    int32_t *l_97 = &g_66;
    int32_t *l_98 = &g_66;
    int32_t *l_99 = &g_66;
    int32_t *l_100 = &g_66;
    int32_t *l_101 = &g_66;
    int32_t l_102 = 0xEB51834A;
    int32_t *l_103 = (void*)0;
    int32_t *l_104 = &l_102;
    int32_t l_105 = 0;
    int32_t *l_106 = &l_91;
    int32_t *l_107 = &l_102;
    int32_t *l_108 = (void*)0;
    int32_t *l_109 = &l_102;
    int32_t *l_110 = &l_105;
    int32_t *l_111 = &l_102;
    for (g_66 = 0; (g_66 != (-15)); g_66--)
    {
        return g_14;
    }
    (*l_87) = func_8(p_70, p_70);
    if ((((void*)0 == g_89) < (*l_88)))
    {
        (*l_87) = (void*)0;
    }
    else
    {
        uint32_t l_90 = 1U;
        return l_90;
    }
    --g_112;
    return p_70;
}
static uint16_t func_71(int16_t p_72, int32_t p_73, int32_t ** const p_74, int8_t p_75)
{
    uint16_t l_84 = 1U;
    l_84 = ((void*)0 == &g_66);
    return l_84;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_2;
    csmith_sink_ = g_5;
    csmith_sink_ = g_14;
    csmith_sink_ = g_23;
    csmith_sink_ = g_66;
    csmith_sink_ = g_112;
    csmith_sink_ = g_117;
    csmith_sink_ = g_160;
    csmith_sink_ = g_172;
    csmith_sink_ = g_234;
    csmith_sink_ = g_344;
    csmith_sink_ = g_407;
    csmith_sink_ = g_410;
    csmith_sink_ = g_440.f0;
    csmith_sink_ = g_440.f1;
    csmith_sink_ = g_440.f2;
    csmith_sink_ = g_440.f3;
    csmith_sink_ = g_440.f4;
    csmith_sink_ = g_440.f5;
    csmith_sink_ = g_440.f6;
    csmith_sink_ = g_440.f7;
    csmith_sink_ = g_440.f8;
    csmith_sink_ = g_655;
    csmith_sink_ = g_663;
    csmith_sink_ = g_666;
    csmith_sink_ = g_683;
    csmith_sink_ = g_694;
    csmith_sink_ = g_749;
    csmith_sink_ = g_770;
    csmith_sink_ = g_772;
    csmith_sink_ = g_773;
    csmith_sink_ = g_846;
    csmith_sink_ = g_849;
    csmith_sink_ = g_890;
    csmith_sink_ = g_930;
    platform_main_end(0,0);
    return 0;
}
