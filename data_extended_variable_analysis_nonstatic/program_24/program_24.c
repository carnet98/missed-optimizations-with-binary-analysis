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
static const int8_t g_8 = 0xD2L;
static int8_t g_104 = (-5L);
static int16_t g_131 = 0x6318L;
static int16_t g_255 = 0x69ADL;
static int8_t g_296 = (-1L);
static int32_t g_312 = 0xC9A4B138L;
static int8_t g_335 = 5L;
static int32_t g_482 = 0x3D4E59D6L;
static uint8_t g_972 = 0UL;
static uint16_t g_1029 = 0xC2E0L;
static uint32_t func_1(void);
static int32_t func_2(int16_t p_3, int8_t p_4);
static int8_t func_13(uint8_t p_14);
static int16_t func_15(int16_t p_16, uint32_t p_17, uint32_t p_18, int32_t p_19, uint32_t p_20);
static uint8_t func_21(int16_t p_22, uint32_t p_23);
static int8_t func_32(int32_t p_33);
static uint16_t func_34(int32_t p_35, uint8_t p_36);
static const int32_t func_44(int32_t p_45, int16_t p_46, uint16_t p_47, int8_t p_48);
static uint8_t func_53(uint16_t p_54, uint32_t p_55);
static const uint16_t func_58(uint16_t p_59);
static uint32_t func_1(void)
{
    int32_t l_7 = 0xDE2BBEF7L;
    int8_t l_1015 = 4L;
    int32_t l_1016 = (-1L);
    int32_t l_1017 = 7L;
    int16_t l_1030 = 0L;
    l_1017 = (((func_2((safe_rshift_func_int8_t_s_u((l_7 , ((l_7 > g_8) || 0UL)), 3)), ((safe_mod_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(((((func_13(l_7) , (safe_rshift_func_int8_t_s_s(((((safe_sub_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u(((((safe_mul_func_int16_t_s_s(l_7, l_7)) <= 0L) < g_482) != 0x92E5L), g_312)), g_255)) ^ l_7) <= g_104) < l_7), l_1015))) && l_1015) , l_1016) ^ l_1017), 14)), l_1015)) , g_972)) & g_972) == l_1017) | l_1030);
    l_1017 = g_104;
    return l_1017;
}
static int32_t func_2(int16_t p_3, int8_t p_4)
{
    int32_t l_1020 = 0xF72E207DL;
    g_1029 = (g_296 <= ((safe_rshift_func_int8_t_s_s(((((l_1020 && p_4) != (safe_lshift_func_int16_t_s_u(l_1020, 4))) && ((safe_add_func_int16_t_s_s((((safe_mod_func_uint32_t_u_u(l_1020, l_1020)) > (p_3 < g_104)) <= (((safe_lshift_func_uint8_t_u_s(251UL, 4)) || l_1020) >= 4UL)), p_3)) && g_335)) | l_1020), 4)) && g_255));
    return g_312;
}
static int8_t func_13(uint8_t p_14)
{
    int8_t l_24 = 0x83L;
    int32_t l_1006 = 0x101B3833L;
    l_1006 = (func_15((func_21(l_24, (l_24 && l_24)) >= ((!(((safe_rshift_func_int8_t_s_u(p_14, p_14)) || (safe_lshift_func_int16_t_s_u((((((safe_add_func_uint8_t_u_u(p_14, (g_972 || p_14))) < g_8) >= (-2L)) ^ l_24) ^ 4294967291UL), l_24))) && l_24)) == g_972)), p_14, l_24, l_24, g_335) , p_14);
    return g_255;
}
static int16_t func_15(int16_t p_16, uint32_t p_17, uint32_t p_18, int32_t p_19, uint32_t p_20)
{
    int16_t l_1005 = 0x612BL;
    l_1005 = (safe_mul_func_uint8_t_u_u((65533UL | g_335), 0xEEL));
    return p_19;
}
static uint8_t func_21(int16_t p_22, uint32_t p_23)
{
    uint32_t l_29 = 0x37C57F39L;
    int32_t l_978 = 0x89089E91L;
    l_978 = ((((safe_rshift_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((l_29 , ((safe_rshift_func_uint8_t_u_s(g_8, ((0x2803L >= (((((func_32(p_22) < (safe_mul_func_uint16_t_u_u(0x9044L, (((safe_add_func_int16_t_s_s(0x6886L, ((0UL | l_29) > g_972))) == p_23) == l_29)))) , l_29) ^ 0x13L) != 5UL) , 0L)) > l_29))) , l_29)), (-1L))), 1)) , 0x8646L) < 0x70B0L) < g_335);
    l_978 = (((!((((safe_mod_func_int8_t_s_s(((safe_add_func_uint32_t_u_u(((safe_mul_func_int16_t_s_s((safe_sub_func_int8_t_s_s((((safe_mul_func_int8_t_s_s(p_23, (0x25A8L & ((((safe_mod_func_uint16_t_u_u(g_8, g_296)) , ((((((safe_add_func_int16_t_s_s(0L, (g_8 | (safe_sub_func_int8_t_s_s((((0x711CL != g_335) >= p_22) || g_482), p_22))))) , 6L) <= l_29) < g_335) & p_22) , g_255)) == 0x1FL) , l_978)))) , g_131) == 0xD71E01D5L), g_972)), l_29)) < 0x53DB5C6EL), 9UL)) , 0L), 0xB2L)) > l_978) | g_255) , p_23)) , g_312) & 0x3BL);
    l_978 = 0xF0A78885L;
    return g_312;
}
static int8_t func_32(int32_t p_33)
{
    uint8_t l_973 = 0x88L;
    l_973 = (func_34(p_33, (safe_mod_func_int32_t_s_s(0x717B38E5L, (-1L)))) == g_972);
    return p_33;
}
static uint16_t func_34(int32_t p_35, uint8_t p_36)
{
    int32_t l_41 = 0xA36A77D7L;
    int32_t l_923 = (-1L);
    const uint32_t l_971 = 5UL;
    l_923 = (((safe_lshift_func_uint16_t_u_s(l_41, (safe_lshift_func_int8_t_s_u(l_41, (func_44(p_36, l_41, ((safe_lshift_func_uint16_t_u_s(((l_41 && ((safe_add_func_uint8_t_u_u(246UL, func_53(p_36, (safe_lshift_func_uint16_t_u_s(((func_58(g_8) < p_36) <= p_35), l_41))))) < l_41)) >= g_335), p_36)) <= g_255), g_8) == p_35))))) , 0L) | 0x4756766AL);
    if (g_482)
    {
        int8_t l_924 = (-1L);
        g_482 = g_8;
        l_924 = g_131;
    }
    else
    {
        const uint8_t l_948 = 250UL;
        l_923 = g_296;
        for (g_255 = 14; (g_255 <= (-30)); g_255 = safe_sub_func_int16_t_s_s(g_255, 8))
        {
            int32_t l_941 = 0L;
            l_923 = (safe_sub_func_uint8_t_u_u((((safe_lshift_func_uint16_t_u_s((safe_unary_minus_func_uint16_t_u((((0x1BL | 0x61L) < (g_312 && (safe_mod_func_uint8_t_u_u((+(safe_sub_func_int32_t_s_s(g_482, g_255))), (p_36 , ((safe_rshift_func_int16_t_s_s(p_35, 2)) | (safe_mul_func_int8_t_s_s((l_941 || ((safe_mod_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u(((safe_lshift_func_int8_t_s_u(g_104, g_312)) < 0x46AEL), l_948)), 3L)) != p_35)), l_941)))))))) || 0x908BL))), 9)) != 0L) & 0x8E99B7F1L), g_482));
        }
    }
    g_482 = (p_35 >= (safe_add_func_int16_t_s_s((((safe_sub_func_int16_t_s_s(p_35, 0xC18EL)) , (0x621BF978L | l_41)) <= (safe_mod_func_int32_t_s_s(((g_296 && ((p_36 | 0x4C54A92AL) < g_296)) >= 0x874C5D7AL), g_335))), p_35)));
    l_923 = ((safe_add_func_uint32_t_u_u((p_35 & ((-2L) && 9UL)), ((0x513CF694L || p_36) | (safe_lshift_func_uint16_t_u_u(0xF11DL, ((1UL == ((((((~((-1L) ^ (safe_sub_func_uint8_t_u_u((((!((safe_rshift_func_int16_t_s_u(((((safe_add_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u((p_35 & p_35), l_971)), g_972)) || g_312) >= 0x9145419DL) != 4294967293UL), 8)) & p_36)) || p_35) == p_35), p_36)))) & p_35) <= l_971) < 0x7119B6BBL) , g_255) , 0x2ECF274FL)) | p_36)))))) , 0x93A25D23L);
    return g_104;
}
static const int32_t func_44(int32_t p_45, int16_t p_46, uint16_t p_47, int8_t p_48)
{
    uint16_t l_779 = 5UL;
    const int8_t l_809 = 0xA6L;
    uint32_t l_837 = 0xE769A47CL;
    int32_t l_870 = 0x4B06478BL;
    uint32_t l_878 = 6UL;
    uint8_t l_881 = 0xA9L;
    uint32_t l_892 = 0x81DB76AEL;
    const uint8_t l_898 = 0x36L;
    if ((((-1L) ^ (((safe_mod_func_int8_t_s_s(((safe_mod_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(65535UL, (safe_rshift_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u((p_48 < ((safe_mul_func_uint16_t_u_u((((~g_482) ^ l_779) , p_47), (safe_sub_func_int8_t_s_s((((0x5271L < ((p_45 , (0xACL <= g_296)) , g_8)) <= 0x97L) , g_104), g_482)))) ^ g_335)), 0x9138L)) , l_779), 8)))), 0x0BL)) > (-6L)), g_255)) >= l_779) <= p_46)) ^ g_104))
    {
        int32_t l_784 = 5L;
        int8_t l_806 = 0L;
        int8_t l_810 = 0xE1L;
        p_45 = ((safe_mul_func_uint16_t_u_u((p_45 <= ((g_296 < (((l_784 | (safe_mod_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((safe_add_func_int16_t_s_s((((safe_mul_func_int8_t_s_s(((((safe_rshift_func_uint8_t_u_s((safe_sub_func_int16_t_s_s(((safe_rshift_func_int8_t_s_u((safe_add_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_s(((safe_rshift_func_int8_t_s_u(((+l_779) , (-1L)), 3)) , (1UL < ((((p_48 != ((l_806 > (safe_mul_func_uint8_t_u_u(p_47, l_784))) , l_809)) && (-4L)) < g_104) != 0xF39963C5L))), l_810)) >= 246UL), g_255)), l_779)) != l_809), l_810)), l_810)) <= l_809) ^ l_779) && g_131), p_47)) , l_779) , p_45), g_8)), l_806)), 247UL))) , p_48) , g_104)) & g_104)), l_810)) <= g_8);
        l_784 = (safe_rshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_s((((safe_lshift_func_uint8_t_u_s((((safe_rshift_func_int16_t_s_u(((((((safe_add_func_uint8_t_u_u((l_784 , (p_46 && (-8L))), (!(safe_rshift_func_uint16_t_u_s((g_104 , (safe_add_func_uint8_t_u_u(255UL, (safe_lshift_func_uint8_t_u_s((safe_mul_func_int8_t_s_s(((-2L) == g_312), (safe_lshift_func_uint8_t_u_u((safe_unary_minus_func_uint8_t_u((safe_lshift_func_uint8_t_u_s((4294967295UL || (safe_mod_func_int16_t_s_s((p_48 >= l_837), p_45))), 7)))), 5)))), g_312))))), 8))))) && 0xC6L) , 0x48L) >= l_806) ^ 0x964FL) <= g_131), 13)) >= 9UL) < l_806), 6)) & p_46) || p_48), 1)), p_45));
    }
    else
    {
        const uint32_t l_844 = 0xE9151E37L;
        g_482 = (((safe_mul_func_int16_t_s_s((safe_add_func_int32_t_s_s((1L & (safe_add_func_int8_t_s_s(0x08L, (0UL >= 1UL)))), g_8)), p_46)) >= ((((l_844 != l_779) , (safe_sub_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s(g_255, 0x12L)) , 0x87C6L), l_844))) && g_255) && g_8)) & g_335);
        g_312 = (+4294967289UL);
        for (p_45 = (-14); (p_45 <= (-16)); p_45 = safe_sub_func_uint16_t_u_u(p_45, 5))
        {
            return p_47;
        }
    }
    l_870 = (safe_mul_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(((g_104 <= (0xF7L <= (safe_sub_func_uint16_t_u_u((g_312 , ((safe_add_func_int16_t_s_s(p_45, (l_779 && (g_312 & (safe_rshift_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(l_837, (safe_mod_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(((((((l_809 ^ (((safe_mod_func_uint16_t_u_u(l_837, l_809)) >= g_131) & g_482)) && g_8) , 0xA0B6L) , l_779) != g_8) > p_45), 7)), 0x9DL)))), 10)))))) && g_296)), 0UL)))) > (-9L)), p_48)), p_46));
    p_45 = (safe_mod_func_int8_t_s_s((+(((safe_mod_func_uint16_t_u_u(((0UL == p_45) && (((safe_lshift_func_int8_t_s_u((l_878 | ((g_8 | ((((safe_sub_func_int8_t_s_s((g_8 == ((l_881 ^ (l_878 >= (safe_mod_func_uint16_t_u_u(((((safe_rshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((((safe_mod_func_uint32_t_u_u((l_892 || ((safe_rshift_func_uint8_t_u_s((((((!((safe_rshift_func_uint8_t_u_u(l_881, 6)) , l_837)) ^ 4294967295UL) , p_47) | g_131) || g_8), 1)) , 0x24D3CD8CL)), g_335)) <= p_46) | 0xAE9C315BL), l_837)), l_898)), 1)) , 0x1F86L) || l_898) , 0x6CF1L), g_8)))) == g_8)), l_809)) >= 0x54L) & 0x7CL) == g_8)) == p_47)), 7)) >= l_898) > l_837)), g_131)) != p_45) != l_892)), g_104));
    g_482 = ((safe_add_func_int8_t_s_s(((((safe_mod_func_uint16_t_u_u((0xCCL || (p_46 && 0x18L)), (safe_lshift_func_uint8_t_u_u(((safe_add_func_uint16_t_u_u(0x839AL, (safe_sub_func_uint32_t_u_u((0x89L ^ (safe_mul_func_uint8_t_u_u(0xDDL, ((safe_mod_func_uint32_t_u_u(((safe_rshift_func_int16_t_s_s((safe_mod_func_int8_t_s_s((safe_add_func_uint16_t_u_u(0xCF93L, g_296)), (safe_mod_func_int16_t_s_s((((((((safe_add_func_uint16_t_u_u(l_878, 0xC77FL)) < 0UL) == 1L) < 4294967294UL) & 0x59CBL) > 1L) > l_779), p_47)))), l_898)) >= 0x1EC7C141L), p_46)) < 1L)))), l_892)))) , 0x2AL), l_878)))) , g_312) < p_48) | 0xCCDD1B2DL), l_779)) || p_45);
    return p_48;
}
static uint8_t func_53(uint16_t p_54, uint32_t p_55)
{
    uint16_t l_367 = 0UL;
    int32_t l_369 = (-8L);
    uint16_t l_399 = 1UL;
    int32_t l_613 = 0x774FC61EL;
    int32_t l_676 = 0x1BF9CC3CL;
    if ((p_54 ^ ((((safe_mod_func_int16_t_s_s(0xB192L, l_367)) | 0xE1L) <= (+(-2L))) || g_312)))
    {
        int8_t l_398 = (-1L);
        l_369 = p_55;
        l_399 = ((-5L) >= ((((((safe_mod_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u((((safe_mod_func_uint8_t_u_u(0x45L, l_367)) >= (safe_unary_minus_func_uint32_t_u((safe_lshift_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u((safe_add_func_int8_t_s_s(((((safe_lshift_func_uint8_t_u_u((((g_312 <= ((safe_mul_func_uint8_t_u_u(((safe_add_func_uint8_t_u_u((((safe_rshift_func_int8_t_s_u(0xDBL, (1L >= (!(safe_sub_func_uint16_t_u_u(g_296, ((safe_rshift_func_uint8_t_u_s(g_8, 5)) > l_369))))))) , p_55) != l_398), 5UL)) > p_54), g_131)) && p_55)) >= (-2L)) ^ p_54), l_367)) || g_131) | 0x1537B6BFL) || g_335), (-1L))), 255UL)) > 65535UL), g_255))))) || (-3L)), 6)), 6)), 1L)) | g_8) >= l_398) , p_54) || g_255) , l_398));
    }
    else
    {
        int8_t l_404 = 1L;
        uint32_t l_407 = 1UL;
        uint32_t l_427 = 0x5268C0C0L;
        int32_t l_512 = 6L;
        const uint32_t l_542 = 1UL;
        int32_t l_632 = 0x4585D67AL;
        const uint8_t l_681 = 0UL;
        uint32_t l_762 = 0x1BB26386L;
        if ((((safe_rshift_func_uint8_t_u_s(((0L > (safe_add_func_uint16_t_u_u((((g_296 <= p_54) != l_367) != 0xF8CBL), l_404))) < (safe_lshift_func_uint16_t_u_u(l_407, 5))), ((((safe_sub_func_int32_t_s_s((0xF85EL | ((((0x621D1AF2L && 4294967295UL) , 0xBCF0158AL) >= (-6L)) <= (-1L))), g_335)) < p_55) | l_404) , 0xA5L))) ^ l_407) || 0L))
        {
            int8_t l_416 = 0x25L;
            int8_t l_444 = 1L;
            int32_t l_483 = (-7L);
            uint16_t l_510 = 0x3DA2L;
            int32_t l_557 = 0x3548239FL;
            if ((!((safe_unary_minus_func_int16_t_s((-1L))) & (safe_unary_minus_func_uint8_t_u((~((((g_131 <= l_367) , ((safe_mod_func_uint8_t_u_u((((l_416 == (p_55 <= (safe_mul_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s(0x22EAL, (safe_lshift_func_int8_t_s_u((!(g_255 , (((safe_mul_func_uint16_t_u_u((safe_unary_minus_func_int8_t_s((p_54 != g_296))), l_404)) >= g_312) >= 0L))), l_416)))) , 65527UL), p_54)))) | 0x78A6L) ^ g_335), 0x51L)) != l_427)) && 65535UL) >= (-10L))))))))
            {
                int16_t l_449 = 0x1483L;
                uint32_t l_487 = 0UL;
                int32_t l_571 = 0x218528CAL;
                l_369 = 0x210DF2F0L;
                l_369 = (0x49L > (safe_mul_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u((p_54 <= (((((safe_sub_func_int8_t_s_s(((g_255 , (safe_sub_func_uint8_t_u_u(l_399, (safe_mod_func_uint16_t_u_u((l_416 && (safe_add_func_int8_t_s_s(l_444, (safe_sub_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((l_444 && (0x4648E599L || ((g_8 ^ 5L) && l_449))), p_55)), 0x78F1L))))), 0x7C32L))))) , l_427), g_296)) && 1L) & p_54) && p_54) ^ l_449)), 0L)), (-3L))), 8UL)), g_104)));
                if ((safe_rshift_func_uint8_t_u_s((((5UL ^ ((safe_sub_func_int32_t_s_s(g_131, ((((((safe_add_func_int32_t_s_s((safe_sub_func_uint16_t_u_u(p_54, (l_449 & g_8))), (safe_rshift_func_uint16_t_u_s((((((safe_mod_func_uint32_t_u_u((((((l_416 && ((+g_335) || (safe_sub_func_int16_t_s_s(0x6D53L, (safe_add_func_uint32_t_u_u((((safe_mod_func_uint8_t_u_u(((((safe_mul_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(((safe_unary_minus_func_uint16_t_u((safe_lshift_func_int16_t_s_s((safe_add_func_int32_t_s_s((safe_sub_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(l_416, 0x0AL)), l_367)), g_335)), 1)))) | g_482), 0x780D751CL)), g_131)) < l_369) ^ 0UL) | g_335), 252UL)) , 7L) != g_131), 0xC04D9ADCL)))))) == l_483) || g_104) ^ l_427) >= l_404), p_55)) >= g_296) && g_312) == (-1L)) > l_367), l_367)))) , l_407) , 0UL) , p_54) , 0x8972BC3EL) , 1L))) , 251UL)) != g_312) >= p_55), l_449)))
                {
                    l_487 = (+(safe_mul_func_uint8_t_u_u(0x11L, 0xAAL)));
                }
                else
                {
                    int16_t l_511 = (-5L);
                    if ((((safe_mod_func_int32_t_s_s((safe_add_func_uint16_t_u_u((p_54 == 0x9DB0L), (safe_lshift_func_uint16_t_u_u((((-10L) < ((safe_sub_func_uint32_t_u_u((l_399 , (safe_add_func_int8_t_s_s((safe_mod_func_int8_t_s_s((((((-1L) >= (g_296 , (safe_sub_func_uint16_t_u_u(g_255, ((safe_lshift_func_uint16_t_u_u(((((p_55 , (((((safe_add_func_uint32_t_u_u(((safe_mul_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_u(p_55, l_487)) , p_54), l_404)) > g_312), 0x9D07E729L)) , 0xB18B0854L) <= p_54) , g_296) ^ g_104)) && 0xCF3DL) , 0x387373AFL) , p_55), 12)) && p_55))))) , 0x35A0L) | p_55) , 0x5BL), l_510)), g_312))), l_511)) && p_54)) <= 5L), 8)))), g_335)) ^ g_335) && g_255))
                    {
                        l_512 = (g_335 , (-1L));
                        return l_369;
                    }
                    else
                    {
                        uint32_t l_543 = 2UL;
                        g_482 = (safe_rshift_func_int16_t_s_s((safe_add_func_uint8_t_u_u((p_55 >= (((safe_mul_func_int8_t_s_s(((((((l_449 & (safe_unary_minus_func_uint8_t_u((safe_mul_func_int16_t_s_s((((((((((safe_mul_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s((safe_sub_func_int8_t_s_s((g_131 ^ (l_483 , (safe_lshift_func_uint16_t_u_s(p_55, (safe_lshift_func_uint8_t_u_u((((((~((!((l_487 < (safe_rshift_func_int16_t_s_u(l_487, 12))) == (safe_rshift_func_uint8_t_u_s((((g_8 < ((((0x1EDD1ABFL || l_512) | p_54) ^ l_542) ^ p_54)) > p_54) < p_55), g_312)))) == 0x83D2L)) ^ 0xC168L) == p_54) > 1UL) < l_444), l_511)))))), p_55)), 2)), p_55)), (-2L))) < l_367), 0xE293L)) < g_255) == l_487) , 0xE0FEL) , 0x6327F81CL) < l_399) | g_104) >= l_543) & (-1L)), (-1L)))))) > l_444) , p_55) || l_449) & 0x9EL) , 0x65L), g_8)) , g_131) & g_8)), 0x4BL)), p_55));
                    }
                    g_482 = ((0x6C45A12CL || ((safe_mod_func_uint32_t_u_u(((((((p_55 != l_511) & (((l_511 < (255UL || (0x03L <= 6L))) <= (((((((255UL & p_54) < p_55) || p_55) , (-1L)) , l_399) | 0x25L) == p_54)) ^ 0x4784L)) , p_54) > l_511) | 0x10184A4CL) && l_416), g_131)) && l_483)) , 0L);
                    l_557 = ((((+p_55) , g_255) , (safe_sub_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(((0xAAL ^ ((((safe_sub_func_int16_t_s_s(((l_416 >= (((0x4EL >= ((g_131 < ((0xC4057CCAL >= (safe_add_func_uint32_t_u_u((g_296 || (safe_rshift_func_int8_t_s_u((p_54 >= p_55), l_487))), 4294967294UL))) & 0x4FE4L)) & g_8)) != g_104) | g_312)) ^ l_399), g_296)) , p_54) , 0UL) | l_449)) == g_104), g_335)), l_510))) != (-1L));
                }
                l_571 = ((safe_sub_func_int8_t_s_s((safe_mod_func_int32_t_s_s(((0xBA79L != (safe_sub_func_uint8_t_u_u((g_482 != (safe_rshift_func_int8_t_s_u(((2UL > ((g_255 != (safe_sub_func_uint16_t_u_u((0x62L > (safe_rshift_func_uint16_t_u_s((65535UL < ((+g_255) || (0x6AL <= (p_55 == 0x6EC0L)))), p_54))), (-4L)))) > g_335)) , 0xE2L), p_55))), p_55))) , (-1L)), l_557)), l_557)) | (-2L));
            }
            else
            {
                uint32_t l_574 = 1UL;
                int32_t l_577 = 3L;
                int8_t l_633 = 0x3BL;
                if ((255UL || ((l_542 != l_427) == ((0x20E8A28EL != (safe_add_func_int8_t_s_s((l_574 > (safe_mod_func_uint16_t_u_u((g_255 & (((g_312 && g_104) == p_54) > g_104)), p_55))), p_55))) > g_131))))
                {
                    uint32_t l_595 = 18446744073709551615UL;
                    l_557 = 0x3DB18A09L;
                    if (l_557)
                        goto lbl_578;
lbl_578:
                    l_577 = 0x40E68EF6L;
                    l_512 = ((safe_add_func_uint32_t_u_u(((safe_mod_func_int8_t_s_s(g_131, (0xE1B9L && g_312))) != g_131), (g_312 , (safe_mod_func_uint8_t_u_u((p_55 == (g_482 <= ((safe_rshift_func_uint8_t_u_s(g_104, (safe_add_func_uint32_t_u_u(((((((((safe_mod_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((((safe_mod_func_int16_t_s_s(((9UL < 0x9EL) , p_54), l_369)) <= l_427) & 0x4401L), l_367)), l_512)) , 0x6FL) & p_54) > l_399) == p_55) > 0x8B24L) & 0x5B496D99L) ^ 0x0F8B649AL), g_482)))) , 0x5AL))), l_427))))) , l_595);
                }
                else
                {
                    g_482 = (-1L);
                    return l_510;
                }
                for (l_404 = 0; (l_404 > (-4)); l_404--)
                {
                    int32_t l_631 = 4L;
                    uint16_t l_634 = 0x4EB3L;
                    for (l_510 = (-21); (l_510 <= 20); l_510++)
                    {
                        uint8_t l_604 = 0x2CL;
                        int32_t l_635 = (-9L);
                        l_613 = (((safe_add_func_int16_t_s_s((1UL >= (safe_add_func_uint32_t_u_u(l_604, p_54))), ((l_367 >= g_255) >= (((safe_sub_func_int16_t_s_s(((safe_mul_func_int8_t_s_s((((safe_sub_func_int16_t_s_s(((1UL | ((((safe_sub_func_uint16_t_u_u(g_255, ((l_574 >= g_296) & 0xFB914C63L))) && p_54) <= g_335) <= p_55)) | g_296), g_131)) > l_577) , g_104), 0UL)) , 0x2C87L), g_335)) | l_577) != p_54)))) == 1UL) <= g_335);
                        l_635 = (((safe_lshift_func_uint8_t_u_s((0x24097C16L >= (!(p_54 | (0xDE6F79BAL || ((safe_mod_func_int16_t_s_s(((((safe_mod_func_int32_t_s_s((((g_482 > (0x34L ^ 2UL)) ^ p_55) > ((((safe_mod_func_int32_t_s_s((safe_mul_func_uint16_t_u_u(((((safe_lshift_func_int8_t_s_s(((safe_sub_func_uint8_t_u_u(p_54, ((safe_mul_func_uint16_t_u_u((g_312 , 0xAE3FL), l_577)) >= 0xD5C99DA5L))) , p_54), g_8)) <= g_296) > l_631) ^ p_54), g_335)), 4L)) && g_255) || l_632) , g_482)), 0x4E87EB44L)) != 1UL) || p_54) || p_54), p_55)) & l_633))))), 7)) <= l_483) < l_634);
                    }
                    l_577 = (safe_sub_func_int8_t_s_s((safe_add_func_uint16_t_u_u((0xF3679650L == ((((((safe_mod_func_int16_t_s_s(0L, (safe_mul_func_int8_t_s_s((+(((safe_mul_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((g_335 == (+(safe_mul_func_int16_t_s_s(g_8, (safe_mod_func_int32_t_s_s(((safe_lshift_func_int8_t_s_s((((+((safe_sub_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((((safe_add_func_uint16_t_u_u(l_399, (g_335 != 0xF4BAL))) >= g_104) && (safe_mod_func_uint32_t_u_u((((safe_rshift_func_int8_t_s_u((((safe_rshift_func_int16_t_s_s(l_632, 6)) , g_255) & 0x3EL), g_104)) <= g_104) , p_55), p_55))), g_104)), l_631)) || (-2L))) , p_54) , (-1L)), l_369)) & (-4L)), 4294967295UL)))))), l_634)), g_296)) < 0xB8L) , l_577)), g_482)))) >= g_335) , l_631) >= p_54) | p_55) , l_557)), 0xD2C2L)), l_367));
                }
            }
        }
        else
        {
            int32_t l_675 = 0xF1E78B46L;
            int16_t l_711 = 0x2750L;
            uint8_t l_720 = 0x10L;
            l_369 = (((safe_rshift_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(((g_335 , l_675) | (l_676 && (safe_lshift_func_int16_t_s_u(0x4FB2L, 8)))), (safe_add_func_int32_t_s_s((p_55 , ((((((0x2DCDL == ((l_681 != p_54) < l_675)) <= l_675) | p_54) <= g_104) == g_8) < p_54)), g_312)))), g_255)) ^ l_404), l_675)) == (-4L)) >= 255UL);
            if (l_542)
                goto lbl_701;
lbl_701:
            g_482 = (p_55 , (safe_sub_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((safe_add_func_int8_t_s_s(0xD1L, (safe_mod_func_int32_t_s_s((g_296 , 0xC63A252CL), 4L)))), (~(safe_mul_func_uint16_t_u_u((((safe_mul_func_int8_t_s_s(g_335, l_681)) < (((safe_mul_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(l_399, 3)), l_367)), l_367)) != 1L) < 1UL)) , 0xCAA1L), l_675))))), l_404)));
            g_312 = ((0xC6L ^ (safe_add_func_uint8_t_u_u((((safe_mod_func_uint32_t_u_u((~(safe_rshift_func_uint16_t_u_s(p_54, 8))), ((3L && ((((l_711 , (+(safe_lshift_func_int8_t_s_u(((safe_lshift_func_int8_t_s_u(l_675, 7)) < ((safe_sub_func_uint8_t_u_u((safe_unary_minus_func_int8_t_s(0xF2L)), (((0xA3387C04L < 0x65DB7B92L) <= (g_131 , 0x5827L)) != 0x21ED9DA0L))) >= l_720)), 1)))) != l_427) != g_296) < 0L)) || l_512))) , 0xEC7AC646L) >= 0x574D15F1L), p_55))) , g_296);
        }
        l_613 = ((safe_mul_func_uint8_t_u_u((~((-10L) || ((((safe_rshift_func_int8_t_s_s((safe_add_func_int32_t_s_s((safe_mod_func_uint8_t_u_u((g_104 < 4UL), ((((l_676 >= (((safe_mul_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_u(g_255, (safe_add_func_uint8_t_u_u(g_312, (safe_mul_func_int8_t_s_s(g_255, (((((safe_lshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_u((safe_add_func_uint32_t_u_u(4294967290UL, p_54)), l_367)), 3)) , 0x7DE20BC2L) ^ p_54) , p_55) >= 255UL))))))) <= 1L), g_335)) != p_54) < 0x642BL)) == l_632) > 0x69L) , (-5L)))), p_54)), g_296)) != p_54) , g_104) != l_407))), g_104)) | p_54);
        l_613 = ((safe_lshift_func_int8_t_s_s(l_542, (g_312 | ((safe_mod_func_uint8_t_u_u((p_54 ^ (0UL <= ((((safe_rshift_func_int8_t_s_u(l_632, 4)) & g_131) , ((safe_lshift_func_uint8_t_u_u(((((((safe_mul_func_int16_t_s_s((((0x2CDA6897L | (safe_rshift_func_uint8_t_u_s(l_399, 3))) == ((safe_add_func_uint16_t_u_u(((((((((safe_add_func_uint16_t_u_u(0UL, 0x4CA4L)) , l_369) & l_399) | p_55) != l_676) < p_54) ^ p_55) | 0x94L), g_255)) | 0UL)) , l_367), 3UL)) || g_312) & l_407) , 0L) ^ 0x3DL) , 246UL), p_55)) != g_104)) != l_762))), g_482)) > l_512)))) , 0xD2EB1299L);
    }
    for (l_369 = 24; (l_369 <= 3); l_369--)
    {
        int8_t l_765 = 0xBBL;
        l_765 = l_613;
    }
    return l_369;
}
static const uint16_t func_58(uint16_t p_59)
{
    int16_t l_82 = 0xE67BL;
    const uint16_t l_114 = 65528UL;
    int32_t l_194 = 0x4414898BL;
    int32_t l_239 = (-6L);
    uint32_t l_250 = 0xD60D6B5BL;
    const int8_t l_297 = 0xD7L;
    int8_t l_313 = (-6L);
    if (p_59)
    {
        uint32_t l_70 = 8UL;
        int32_t l_150 = 5L;
        uint8_t l_160 = 0x82L;
        if ((safe_sub_func_uint32_t_u_u((g_8 , (p_59 >= (safe_mul_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_s((safe_mul_func_int8_t_s_s(((0x74F9L ^ (l_70 > ((safe_add_func_uint8_t_u_u(g_8, 0x65L)) <= (((safe_mod_func_int32_t_s_s((g_8 , (!(safe_rshift_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(((((4294967295UL && (safe_mod_func_uint8_t_u_u((((g_8 < l_82) <= p_59) | l_82), 2UL))) ^ p_59) > g_8) != 1L), g_8)), 2)))), 0xB2E1D86EL)) , 0UL) != 9L)))) < 0x1D34L), g_8)), p_59)), 10)), l_70)))), 0xC36DE1F2L)))
        {
            uint32_t l_103 = 0xE64A2B51L;
            int8_t l_125 = 0x9FL;
            int32_t l_126 = 0xE2F772B8L;
            for (p_59 = (-7); (p_59 == 31); p_59++)
            {
                int32_t l_101 = (-2L);
                g_104 = (safe_rshift_func_int16_t_s_s(((g_8 || (((p_59 , (((p_59 , ((safe_rshift_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(((-1L) > ((safe_mul_func_uint8_t_u_u((safe_add_func_int8_t_s_s(((((l_82 , (safe_lshift_func_int8_t_s_u((safe_mul_func_int8_t_s_s(g_8, l_82)), 2))) >= (safe_mod_func_uint8_t_u_u(l_101, (~4294967295UL)))) != 5L) == l_82), 0x88L)), g_8)) & 4294967295UL)), l_82)), 9)) ^ 1L)) | l_82) < g_8)) || g_8) <= g_8)) & l_103), 5));
            }
            l_126 = (((safe_mod_func_uint16_t_u_u((g_8 >= (safe_rshift_func_int8_t_s_u((safe_unary_minus_func_int32_t_s((safe_lshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((l_114 && ((safe_sub_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((-1L), l_103)), l_82)) <= (((safe_mul_func_int8_t_s_s((((-3L) || (((safe_rshift_func_int8_t_s_u((safe_sub_func_uint16_t_u_u(p_59, g_8)), 3)) > ((g_104 & l_125) , l_70)) >= p_59)) && g_104), g_8)) || l_82) > l_82))), l_82)), l_70)))), 5))), l_125)) , g_8) < 5UL);
        }
        else
        {
            int16_t l_149 = 0x3D22L;
            for (l_82 = 24; (l_82 < 10); --l_82)
            {
                uint32_t l_132 = 0x9989FA4EL;
                int32_t l_145 = 8L;
                if (((safe_lshift_func_int8_t_s_u(1L, 0)) | 0x79L))
                {
                    uint8_t l_133 = 0x5EL;
                    g_131 = l_82;
                    l_132 = p_59;
                    l_133 = l_82;
                }
                else
                {
                    int8_t l_174 = 1L;
                    for (p_59 = (-26); (p_59 < 34); p_59 = safe_add_func_int8_t_s_s(p_59, 9))
                    {
                        int32_t l_148 = 0xF5A7A75AL;
                        l_150 = ((safe_mod_func_uint16_t_u_u(p_59, g_104)) & (safe_mod_func_int32_t_s_s(((safe_add_func_int8_t_s_s(((254UL || ((+l_114) | p_59)) , ((((safe_rshift_func_uint16_t_u_s(((p_59 <= ((0x0D6BF4B6L | (((l_145 & ((safe_rshift_func_int16_t_s_u((g_8 ^ p_59), 2)) , 0xDDL)) , 0xE780F4AAL) , g_131)) >= 0xFA911A91L)) <= l_148), l_149)) >= g_104) == g_131) | l_70)), g_104)) , p_59), g_8)));
                        l_148 = ((4294967295UL || 9UL) & (safe_add_func_uint16_t_u_u(p_59, ((((safe_rshift_func_uint16_t_u_u((l_114 != 0x4FL), 12)) == (~p_59)) || (safe_mod_func_uint16_t_u_u(g_8, 0x4375L))) > ((((safe_lshift_func_int8_t_s_s((((l_145 , (-7L)) , p_59) != l_148), p_59)) || g_131) | l_145) | l_149)))));
                    }
                    l_145 = (((((g_131 , (((((((((l_160 , ((safe_mul_func_int16_t_s_s(l_132, (g_104 | (0x8349L || l_149)))) != (safe_add_func_int32_t_s_s((((safe_unary_minus_func_uint32_t_u(l_70)) != (((((safe_lshift_func_uint16_t_u_s((safe_mod_func_uint16_t_u_u(((safe_add_func_uint8_t_u_u((0UL && (safe_sub_func_int32_t_s_s(1L, l_149))), g_131)) <= l_70), 0x08B9L)), p_59)) == 0xDC2EL) | l_174) | 0x19L) > g_8)) | 0UL), (-9L))))) != p_59) , p_59) && p_59) , 0xDF61L) & p_59) && g_131) >= l_132) <= (-1L))) && l_70) <= p_59) & p_59) == 65527UL);
                }
            }
            l_150 = (((safe_add_func_uint32_t_u_u((((p_59 >= (safe_rshift_func_int16_t_s_u((((safe_lshift_func_int16_t_s_s(((((safe_mul_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_s((safe_mul_func_int16_t_s_s(0xFDDCL, g_8)), (l_149 || 0L))) && (((l_82 & (((safe_mul_func_int16_t_s_s(0x048EL, l_149)) < g_8) ^ 0x6E91L)) || g_8) & g_104)), g_8)) != 0x4148A961L) , g_104) & l_82), 8)) , l_149) ^ g_104), 13))) | 0x4953L) <= g_131), 0xF93AE58DL)) || g_104) != p_59);
            return g_8;
        }
    }
    else
    {
        const int16_t l_193 = 0xE252L;
        uint16_t l_214 = 0x5E4FL;
        int32_t l_215 = 6L;
        int32_t l_216 = 0xCC2B1C82L;
        for (g_104 = 0; (g_104 <= 0); g_104++)
        {
            l_194 = (safe_lshift_func_uint8_t_u_s(l_193, 0));
        }
        l_216 = (safe_rshift_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(g_8, (safe_add_func_int16_t_s_s((~((0L & ((((safe_add_func_uint32_t_u_u(((safe_rshift_func_int8_t_s_s(p_59, (((0x7BFA83A9L > (safe_lshift_func_int8_t_s_u((-9L), 7))) <= g_8) & g_8))) ^ ((safe_sub_func_int32_t_s_s(((g_131 > (safe_lshift_func_int16_t_s_u((safe_add_func_uint8_t_u_u(1UL, g_131)), l_193))) != g_131), p_59)) & l_214)), l_215)) > 0UL) == 255UL) < 0x548221D4L)) || g_8)), l_193)))), g_8));
    }
    l_239 = ((safe_mod_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(((safe_mod_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((1L > l_114), 0)), (((l_114 | ((p_59 | (safe_rshift_func_int16_t_s_u((safe_rshift_func_uint8_t_u_s(((l_194 , (safe_add_func_uint16_t_u_u((((((((safe_add_func_int16_t_s_s((safe_mul_func_int8_t_s_s(g_104, l_114)), (safe_rshift_func_int8_t_s_u(g_8, 5)))) > (safe_add_func_uint8_t_u_u(l_114, p_59))) || l_114) && g_104) >= 0x7BB0CC75L) | l_239) , l_114), p_59))) | 0x02L), g_131)), 8))) >= 4294967291UL)) && l_82) , 0x275AL))) >= g_104), (-1L))), l_239)) > g_8);
    l_239 = ((l_239 || l_239) | (safe_sub_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u(((safe_mod_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_u(l_114, 3)) >= 255UL), (p_59 && (0xC979L == p_59)))) , (safe_mul_func_int16_t_s_s(l_250, ((safe_lshift_func_uint16_t_u_s(((safe_mul_func_int16_t_s_s((g_8 && 0x7E2CL), l_250)) || l_82), l_239)) == p_59)))), g_8)), g_255)));
    if ((0x0DL == g_104))
    {
        uint32_t l_260 = 0x35079E51L;
        int32_t l_314 = (-1L);
        if ((safe_lshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_u(l_260, 5)), (((safe_unary_minus_func_int8_t_s(g_8)) & l_260) && (((p_59 , (safe_mod_func_int16_t_s_s(g_255, (safe_rshift_func_int8_t_s_u(((safe_rshift_func_uint16_t_u_s((safe_mul_func_int8_t_s_s((safe_add_func_int8_t_s_s((p_59 & g_131), (safe_rshift_func_int16_t_s_u((+((~(((l_260 & (safe_rshift_func_int16_t_s_s(0x8909L, 2))) , 0xABEA055EL) > 6L)) > l_260)), p_59)))), l_250)), l_250)) < g_104), 4))))) < 1L) >= l_82)))))
        {
            uint8_t l_280 = 0xA5L;
            if ((((safe_mod_func_int32_t_s_s(l_260, (g_8 && ((4UL | l_280) & (+g_255))))) , (safe_add_func_int16_t_s_s(l_280, 1L))) , g_8))
            {
                g_296 = (0xAFL | ((((safe_mul_func_int16_t_s_s(((safe_add_func_int32_t_s_s((-1L), ((((safe_mul_func_uint16_t_u_u(0xB939L, (g_131 , ((safe_lshift_func_int16_t_s_u(l_250, (((0x85434852L <= ((safe_lshift_func_uint16_t_u_u(0UL, ((1UL & (safe_rshift_func_uint16_t_u_s(l_194, g_104))) <= 0xE9L))) & 0L)) < l_280) != (-1L)))) , g_131)))) == 0x51L) & 0x6131L) > p_59))) , 0xC9BEL), 0x225BL)) >= p_59) & g_8) , 0xEEL));
            }
            else
            {
                return l_297;
            }
            l_313 = ((((((p_59 && p_59) > 4L) | g_8) <= 8L) ^ ((safe_lshift_func_int8_t_s_u(((p_59 ^ (((safe_lshift_func_uint16_t_u_s(((safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_s(((0x0BL ^ (safe_add_func_int16_t_s_s(p_59, (safe_add_func_int32_t_s_s(((g_8 , g_8) , g_104), 0L))))) & p_59), l_260)), 1)) == l_114), g_312)) != p_59) != g_312)) != l_260), g_131)) > g_131)) != 5L);
            l_314 = p_59;
        }
        else
        {
            uint32_t l_334 = 18446744073709551615UL;
            int32_t l_336 = (-1L);
            for (l_239 = 0; (l_239 < (-17)); --l_239)
            {
                return l_239;
            }
            l_336 = ((0x6F4BL > (~((safe_rshift_func_int8_t_s_u(p_59, l_314)) && (safe_rshift_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u(249UL, ((((safe_mul_func_int16_t_s_s((((((-1L) || ((0xEFL > (safe_mod_func_int8_t_s_s((1L ^ (g_104 , (safe_add_func_int32_t_s_s((safe_mul_func_uint16_t_u_u(p_59, 4L)), l_334)))), p_59))) | p_59)) <= g_8) || g_8) > g_131), p_59)) && l_260) <= g_312) <= g_335))) < 0x7552E8ABL), g_104)), 11))))) , g_104);
        }
    }
    else
    {
        int32_t l_341 = 0x870BFBD2L;
        int8_t l_362 = 0xE0L;
        l_194 = 0x42ADA261L;
        for (l_194 = 0; (l_194 > 11); l_194++)
        {
            return p_59;
        }
        l_194 = (safe_sub_func_int32_t_s_s((l_341 == ((((5UL ^ (((safe_mul_func_int16_t_s_s((((p_59 , p_59) >= (g_8 || (((safe_sub_func_uint32_t_u_u((((safe_add_func_uint8_t_u_u(((((safe_unary_minus_func_uint8_t_u(p_59)) && (g_312 >= (safe_rshift_func_uint16_t_u_s(((((safe_lshift_func_uint8_t_u_s((g_104 != (l_341 ^ 0xB7L)), 4)) > g_255) == p_59) , l_341), 1)))) > 1L) >= p_59), p_59)) , g_255) , 0x6D4DFEEEL), 0xE27D13A1L)) , 0xEFL) <= p_59))) != g_312), 0x765BL)) > l_341) == 0xA4L)) != l_341) && l_341) >= 9L)), 1L));
        g_312 = ((((((safe_sub_func_uint16_t_u_u(g_8, (safe_sub_func_uint16_t_u_u((l_194 > ((l_250 && g_255) , (((safe_unary_minus_func_int16_t_s(g_312)) < (~(safe_lshift_func_uint16_t_u_s((l_82 , (+l_313)), 3)))) > (l_362 , ((((safe_sub_func_int16_t_s_s((0x6F131FA9L <= 0x732D4BDBL), p_59)) & 0UL) >= p_59) & l_194))))), 0x615BL)))) & l_341) >= g_335) < g_104) , 0x75L) > 252UL);
    }
    return l_194;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_8;
    csmith_sink_ = g_104;
    csmith_sink_ = g_131;
    csmith_sink_ = g_255;
    csmith_sink_ = g_296;
    csmith_sink_ = g_312;
    csmith_sink_ = g_335;
    csmith_sink_ = g_482;
    csmith_sink_ = g_972;
    csmith_sink_ = g_1029;
    platform_main_end(0,0);
    return 0;
}
