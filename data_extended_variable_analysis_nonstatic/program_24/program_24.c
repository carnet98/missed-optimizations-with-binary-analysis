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
static int32_t g_2 = 0x60477862;
static uint32_t g_20 = 4294967295U;
static int32_t g_24 = 0x84DCC80F;
static uint16_t g_54 = 0xA9EF;
static uint32_t g_63 = 0xEC53A21B;
static uint16_t g_64 = 0x08FB;
static int16_t g_66 = 0x1E25;
static int8_t g_72 = 0xFE;
static uint16_t * const g_74 = (void*)0;
static uint16_t * const *g_73 = &g_74;
static uint8_t g_91 = 0U;
static uint16_t *g_111 = &g_64;
static uint16_t **g_110 = &g_111;
static uint16_t ***g_109 = &g_110;
static uint32_t g_125 = 0x03A71B0F;
static int32_t g_153 = 0;
static int32_t g_155 = 0;
static uint8_t g_171 = 1U;
static uint32_t g_222 = 4294967295U;
static int32_t *g_257 = (void*)0;
static uint32_t g_258 = 0x24755464;
static uint16_t g_276 = 0x1554;
static int16_t g_285 = 0x1872;
static uint16_t ****g_290 = &g_109;
static uint16_t *****g_289 = &g_290;
static int32_t g_370 = 0xA82994EB;
static int32_t g_374 = (-1);
static uint16_t g_398 = 0x4D70;
static int32_t g_462 = 0x05484D78;
static uint32_t g_478 = 0x39974A84;
static int16_t *g_489 = (void*)0;
static int16_t **g_488 = &g_489;
static const int16_t *g_553 = &g_66;
static const int16_t **g_552 = &g_553;
static const int16_t ***g_551 = &g_552;
static const int16_t ****g_550 = &g_551;
static int8_t *g_581 = (void*)0;
static int8_t **g_580 = &g_581;
static uint32_t g_661 = 1U;
static int32_t g_673 = 0xD487A202;
static int32_t g_678 = 5;
static uint16_t g_692 = 0x767E;
static uint16_t g_763 = 8U;
static int16_t g_839 = (-10);
static int16_t g_842 = (-1);
static int8_t g_849 = 1;
static int32_t g_867 = 8;
static uint32_t g_878 = 4U;
static uint16_t ** const *g_927 = &g_110;
static uint16_t ** const * const *g_926 = &g_927;
static uint16_t ** const * const **g_925 = &g_926;
static uint16_t g_1085 = 0x6EB0;
static uint8_t g_1149 = 0x74;
static int16_t **g_1158 = &g_489;
static uint32_t *g_1167 = &g_63;
static uint32_t **g_1166 = &g_1167;
static uint8_t g_1279 = 7U;
static uint8_t g_1312 = 249U;
static uint32_t g_1597 = 0x1D4A0EF3;
static uint8_t g_1631 = 255U;
static int8_t g_1826 = (-8);
static uint16_t g_1828 = 0xC696;
static int32_t * const *g_1852 = (void*)0;
static uint32_t g_1974 = 0x9FBF3DC2;
static int32_t g_2064 = (-1);
static uint32_t g_2067 = 1U;
static int16_t g_2073 = 0xCB7C;
static int32_t g_2092 = (-9);
static uint32_t g_2093 = 0x2507D538;
static uint32_t func_1(void);
static int32_t * func_5(const int32_t p_6, uint32_t p_7, int32_t * p_8, int8_t p_9, const uint8_t p_10);
static const uint8_t func_13(uint32_t p_14, uint32_t p_15);
static int32_t func_26(int32_t * p_27, int32_t p_28, uint16_t p_29);
static uint16_t func_30(uint32_t * p_31, uint32_t p_32, uint32_t * p_33);
static uint32_t * func_34(uint32_t p_35, uint32_t p_36, const int32_t p_37, int32_t p_38);
static int32_t func_39(int32_t * p_40, int32_t p_41);
static int32_t * func_42(uint32_t p_43);
static uint32_t func_44(uint32_t * p_45, uint32_t p_46, int32_t p_47);
static uint16_t * const * func_56(int32_t * p_57, uint32_t p_58, int8_t p_59, int32_t p_60);
static uint32_t func_1(void)
{
    int32_t l_18 = (-10);
    int32_t l_2033 = 4;
    int32_t l_2065 = 0xB52DAF65;
    int16_t ***l_2098 = &g_1158;
    int32_t *l_2099 = &g_678;
    for (g_2 = 0; (g_2 < 19); g_2 = safe_add_func_uint8_t_u_u(g_2, 1))
    {
        uint32_t *l_19 = &g_20;
        int32_t l_1726 = 0x6CCA4E6B;
        int32_t **l_2009 = (void*)0;
        int32_t **l_2010 = &g_257;
        int32_t *l_2012 = &g_462;
        int32_t **l_2011 = &l_2012;
        int32_t *l_2013 = &g_153;
        int32_t *l_2014 = &g_673;
        int32_t *l_2015 = &g_155;
        int32_t *l_2016 = &g_678;
        int32_t *l_2017 = (void*)0;
        int32_t *l_2018 = (void*)0;
        int32_t *l_2019 = &g_678;
        int32_t *l_2020 = &g_462;
        int32_t *l_2021 = &g_867;
        int32_t *l_2022 = (void*)0;
        int32_t *l_2023 = &g_867;
        int32_t *l_2024 = &g_24;
        int32_t *l_2025 = &g_678;
        int32_t *l_2026 = (void*)0;
        int32_t *l_2027 = (void*)0;
        int32_t *l_2028 = &g_153;
        int32_t *l_2029 = &g_678;
        int32_t *l_2030 = (void*)0;
        int32_t *l_2031 = (void*)0;
        int32_t *l_2032 = &g_678;
        int32_t *l_2034 = &g_24;
        int32_t *l_2035 = &g_678;
        int32_t *l_2036 = &g_153;
        int32_t *l_2037 = &l_1726;
        int32_t *l_2038 = &g_678;
        int32_t *l_2039 = &g_24;
        int32_t *l_2040 = &l_1726;
        int32_t *l_2041 = &g_678;
        int32_t *l_2042 = &g_24;
        int32_t l_2043 = 0x09C18685;
        int32_t *l_2044 = &l_1726;
        int32_t *l_2045 = &l_1726;
        int32_t *l_2046 = &l_2043;
        int32_t l_2047 = 0x781C9FD5;
        int32_t *l_2048 = &g_24;
        int32_t *l_2049 = &g_155;
        int32_t *l_2050 = (void*)0;
        int32_t *l_2051 = &g_678;
        int32_t *l_2052 = &l_2033;
        int32_t *l_2053 = &l_18;
        int32_t *l_2054 = &g_24;
        int32_t *l_2055 = &l_1726;
        int32_t *l_2056 = (void*)0;
        int32_t *l_2057 = &g_155;
        int32_t *l_2058 = &g_153;
        int32_t *l_2059 = &l_18;
        int32_t *l_2060 = &g_678;
        int32_t *l_2061 = &g_462;
        int32_t *l_2062 = &l_18;
        int32_t *l_2063 = &g_678;
        int8_t l_2066 = 0xCF;
        int32_t l_2072 = 9;
        int32_t *l_2074 = &g_153;
        int32_t *l_2075 = &l_2065;
        int32_t *l_2076 = &g_153;
        int32_t *l_2077 = (void*)0;
        int32_t *l_2078 = &l_2065;
        int32_t *l_2079 = &g_2064;
        int32_t *l_2080 = (void*)0;
        int32_t *l_2081 = &g_155;
        int32_t *l_2082 = &l_2065;
        int32_t *l_2083 = &l_18;
        int32_t *l_2084 = &l_2047;
        int32_t *l_2085 = &g_155;
        int32_t *l_2086 = &l_2065;
        int32_t *l_2087 = (void*)0;
        int32_t *l_2088 = &g_867;
        int32_t *l_2089 = &l_2047;
        int32_t *l_2090 = (void*)0;
        int32_t *l_2091 = (void*)0;
        (*l_2011) = ((*l_2010) = func_5(((func_13((safe_add_func_int16_t_s_s(0xBA20, l_18)), ((*l_19) = g_2)) ^ (!(safe_div_func_uint16_t_u_u(0x0E5A, (g_842 | l_1726))))) || ((void*)0 != (*g_927))), g_1149, &g_462, l_1726, g_1631));
        ((void) sizeof ((g_257 == &g_673 || g_257 == &g_155 || g_257 == &g_2) ? 1 : 0), __extension__ ({ if (g_257 == &g_673 || g_257 == &g_155 || g_257 == &g_2) ; else __assert_fail ("g_257 == &g_673 || g_257 == &g_155 || g_257 == &g_2", "/tmp/tmp8smexepa.c", 198, __extension__ __PRETTY_FUNCTION__); }));
        ((void) sizeof ((l_2012 == &g_673 || l_2012 == &g_155 || l_2012 == &g_2) ? 1 : 0), __extension__ ({ if (l_2012 == &g_673 || l_2012 == &g_155 || l_2012 == &g_2) ; else __assert_fail ("l_2012 == &g_673 || l_2012 == &g_155 || l_2012 == &g_2", "/tmp/tmp8smexepa.c", 199, __extension__ __PRETTY_FUNCTION__); }));
        g_2067++;
        (*l_2059) &= (safe_div_func_uint32_t_u_u(1U, ((*l_19) |= g_1312)));
        g_2093--;
    }
    ((void) sizeof ((g_257 == &g_155 || g_257 == &g_2 || g_257 == &g_673 || g_257 == 0) ? 1 : 0), __extension__ ({ if (g_257 == &g_155 || g_257 == &g_2 || g_257 == &g_673 || g_257 == 0) ; else __assert_fail ("g_257 == &g_155 || g_257 == &g_2 || g_257 == &g_673 || g_257 == 0", "/tmp/tmp8smexepa.c", 205, __extension__ __PRETTY_FUNCTION__); }));
    ((void) sizeof ((g_1852 == &g_257 || g_1852 == 0) ? 1 : 0), __extension__ ({ if (g_1852 == &g_257 || g_1852 == 0) ; else __assert_fail ("g_1852 == &g_257 || g_1852 == 0", "/tmp/tmp8smexepa.c", 206, __extension__ __PRETTY_FUNCTION__); }));
    (*l_2099) = (l_18 < ((safe_div_func_int32_t_s_s(g_1149, l_2033)) >= (l_2098 != (*g_550))));
    return (*l_2099);
}
static int32_t * func_5(const int32_t p_6, uint32_t p_7, int32_t * p_8, int8_t p_9, const uint8_t p_10)
{
    uint16_t l_1731 = 0x60B2;
    int8_t * const *l_1753 = &g_581;
    uint32_t *l_1754 = &g_1597;
    int8_t *l_1755 = &g_72;
    int32_t l_1756 = 0;
    int32_t l_1802 = 3;
    int32_t l_1804 = 0;
    int32_t l_1805 = 0xA3540E25;
    int32_t * const *l_1850 = &g_257;
    int16_t *** const *l_1987 = (void*)0;
    int32_t l_1992 = 0;
    if (((safe_sub_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((l_1731 && (p_7 | ((safe_add_func_int16_t_s_s(((safe_div_func_int8_t_s_s((p_9 = l_1731), g_258)) == (safe_div_func_uint8_t_u_u((p_10 | (safe_div_func_uint8_t_u_u(0x93, (l_1756 |= ((*l_1755) |= (safe_mod_func_int8_t_s_s((~((*l_1754) = (safe_add_func_uint32_t_u_u((safe_mod_func_int32_t_s_s(((*p_8) > (g_171 | ((safe_sub_func_int16_t_s_s((((safe_add_func_uint32_t_u_u((safe_add_func_uint16_t_u_u((l_1753 != l_1753), p_6)), g_398)) == 8U) != (*p_8)), 1)) ^ p_10))), (*p_8))), 1)))), g_54))))))), 255U))), (****g_290))) != g_398))), l_1731)), 0x79CE)) > 0x019ABBBE))
    {
        int32_t *l_1757 = (void*)0;
        int32_t *l_1758 = &g_155;
        int32_t l_1759 = 1;
        int32_t *l_1760 = &g_867;
        int32_t *l_1761 = &g_673;
        int32_t *l_1762 = &l_1756;
        int32_t *l_1763 = &g_155;
        int32_t *l_1764 = &g_155;
        int32_t *l_1765 = (void*)0;
        int32_t *l_1766 = (void*)0;
        int32_t *l_1767 = (void*)0;
        int32_t *l_1768 = &g_673;
        int32_t *l_1769 = &g_155;
        int32_t *l_1770 = &g_462;
        int32_t *l_1771 = &g_678;
        int32_t *l_1772 = (void*)0;
        int32_t *l_1773 = &l_1759;
        int32_t *l_1774 = (void*)0;
        int32_t *l_1775 = &l_1759;
        int32_t *l_1776 = (void*)0;
        int32_t *l_1777 = &g_155;
        int32_t *l_1778 = (void*)0;
        int32_t *l_1779 = &g_153;
        int32_t *l_1780 = &l_1756;
        int32_t *l_1781 = &g_153;
        int32_t *l_1782 = &g_153;
        int32_t *l_1783 = &l_1756;
        int32_t *l_1784 = &g_24;
        int32_t *l_1785 = &g_678;
        int32_t *l_1786 = &g_867;
        int32_t *l_1787 = &g_153;
        int32_t *l_1788 = &g_153;
        int32_t *l_1789 = (void*)0;
        int32_t *l_1790 = &g_24;
        int32_t *l_1791 = &g_155;
        int32_t *l_1792 = &l_1756;
        int32_t l_1793 = 0x26CFDE9E;
        int32_t *l_1794 = &g_153;
        int32_t *l_1795 = &l_1759;
        int32_t *l_1796 = &g_153;
        int32_t *l_1797 = &g_155;
        int32_t *l_1798 = &g_153;
        int32_t *l_1799 = &g_153;
        int32_t *l_1800 = (void*)0;
        int32_t *l_1801 = &l_1793;
        int32_t *l_1803 = &g_24;
        int32_t *l_1806 = &g_155;
        int32_t *l_1807 = (void*)0;
        int32_t *l_1808 = &l_1756;
        int32_t *l_1809 = (void*)0;
        int32_t *l_1810 = &l_1756;
        int32_t *l_1811 = &g_153;
        int32_t *l_1812 = &g_153;
        int32_t *l_1813 = (void*)0;
        int32_t *l_1814 = &g_24;
        int32_t *l_1815 = &g_155;
        int32_t *l_1816 = &g_462;
        int32_t *l_1817 = &l_1804;
        int32_t *l_1818 = &g_867;
        int32_t *l_1819 = (void*)0;
        int32_t *l_1820 = (void*)0;
        int32_t *l_1821 = &l_1802;
        int32_t *l_1822 = (void*)0;
        int32_t *l_1823 = &g_24;
        int32_t *l_1824 = &l_1805;
        int32_t *l_1825 = &g_673;
        int32_t l_1827 = (-1);
        uint16_t *** const ** const l_1831 = (void*)0;
        uint16_t *** const *l_1833 = &g_109;
        uint16_t *** const **l_1832 = &l_1833;
        int8_t ***l_1844 = &g_580;
        --g_1828;
        l_1832 = l_1831;
        ((void) sizeof ((l_1832 == 0) ? 1 : 0), __extension__ ({ if (l_1832 == 0) ; else __assert_fail ("l_1832 == 0", "/tmp/tmp8smexepa.c", 306, __extension__ __PRETTY_FUNCTION__); }));
        (*l_1803) = (0x24 || (((safe_mul_func_uint8_t_u_u((0xA8 & (((*l_1754) = ((safe_mod_func_int32_t_s_s((g_72 ^ ((*l_1760) = (safe_lshift_func_uint8_t_u_s((&g_20 != p_8), 2)))), ((safe_mod_func_uint16_t_u_u(1U, (safe_lshift_func_int8_t_s_s(((void*)0 != l_1844), (safe_add_func_uint8_t_u_u(g_692, (-7))))))) && p_6))) | 0x54)) > l_1756)), 0U)) == 5U) != (*l_1824)));
    }
    else
    {
        int32_t * const **l_1851 = (void*)0;
        int32_t l_1872 = 0xAE732C27;
        int32_t l_1901 = (-2);
        int32_t l_1903 = 0x9D8EB882;
        int32_t l_1909 = 1;
        int32_t l_1956 = 2;
        uint8_t l_1977 = 255U;
        int16_t ***l_1991 = &g_1158;
        int16_t ****l_1990 = &l_1991;
        int16_t ***** const l_1989 = &l_1990;
        int32_t *l_2008 = &g_678;
        for (g_20 = 0; (g_20 >= 12); g_20 = safe_add_func_uint8_t_u_u(g_20, 7))
        {
            int32_t *l_1849 = &g_2;
            return l_1849;
        }
        g_1852 = l_1850;
        ((void) sizeof ((g_1852 == &g_257) ? 1 : 0), __extension__ ({ if (g_1852 == &g_257) ; else __assert_fail ("g_1852 == &g_257", "/tmp/tmp8smexepa.c", 331, __extension__ __PRETTY_FUNCTION__); }));
        for (g_1279 = 5; (g_1279 == 47); g_1279++)
        {
            int32_t l_1855 = 0x24449844;
            int32_t l_1902 = 0xB5CD4281;
            int32_t l_1967 = 0;
            int16_t l_2007 = 0x07A1;
            if (l_1855)
            {
                uint16_t l_1869 = 0x3C52;
                for (g_276 = 0; (g_276 > 3); g_276 = safe_add_func_int16_t_s_s(g_276, 4))
                {
                    uint32_t l_1861 = 7U;
                    int32_t **l_1864 = (void*)0;
                    int32_t **l_1865 = (void*)0;
                    int32_t **l_1866 = &g_257;
                    for (g_285 = 0; (g_285 < 9); g_285++)
                    {
                        int32_t *l_1860 = &g_155;
                        g_257 = (*g_1852);
                        l_1861++;
                    }
                    if ((*p_8))
                        break;
                    (*l_1866) = (void*)0;
                    ((void) sizeof ((g_257 == 0) ? 1 : 0), __extension__ ({ if (g_257 == 0) ; else __assert_fail ("g_257 == 0", "/tmp/tmp8smexepa.c", 357, __extension__ __PRETTY_FUNCTION__); }));
                    for (g_763 = (-27); (g_763 >= 42); g_763 = safe_add_func_uint32_t_u_u(g_763, 2))
                    {
                        uint8_t *l_1871 = &g_1312;
                        uint8_t **l_1870 = &l_1871;
                        (*l_1866) = func_34(l_1869, l_1869, (&g_1631 != ((*l_1870) = &g_1149)), (*p_8));
                        ((void) sizeof ((l_1871 == &g_1149) ? 1 : 0), __extension__ ({ if (l_1871 == &g_1149) ; else __assert_fail ("l_1871 == &g_1149", "/tmp/tmp8smexepa.c", 364, __extension__ __PRETTY_FUNCTION__); }));
                    }
                }
                return &g_155;
            }
            else
            {
                int32_t *l_1873 = &l_1872;
                int32_t *l_1874 = (void*)0;
                int32_t *l_1875 = &l_1872;
                int32_t l_1876 = 2;
                int32_t *l_1877 = (void*)0;
                int32_t *l_1878 = (void*)0;
                int32_t *l_1879 = &l_1756;
                int32_t *l_1880 = &g_678;
                int32_t *l_1881 = (void*)0;
                int32_t *l_1882 = &l_1756;
                int32_t *l_1883 = (void*)0;
                int32_t *l_1884 = &g_678;
                int32_t *l_1885 = &g_155;
                int32_t *l_1886 = (void*)0;
                int32_t *l_1887 = &g_673;
                int32_t *l_1888 = &g_462;
                int32_t *l_1889 = &l_1872;
                int32_t *l_1890 = (void*)0;
                int32_t *l_1891 = &g_155;
                int32_t *l_1892 = &l_1804;
                int32_t *l_1893 = (void*)0;
                int32_t *l_1894 = (void*)0;
                int32_t *l_1895 = &l_1756;
                int32_t *l_1896 = &l_1805;
                int32_t *l_1897 = &l_1872;
                int32_t *l_1898 = &l_1804;
                int32_t *l_1899 = &l_1876;
                int32_t *l_1900 = (void*)0;
                int32_t *l_1904 = &g_867;
                int32_t *l_1905 = &g_673;
                int32_t *l_1906 = &l_1805;
                int32_t *l_1907 = &l_1802;
                int32_t *l_1908 = &g_673;
                int32_t *l_1910 = &l_1872;
                int32_t *l_1911 = (void*)0;
                int32_t *l_1912 = &l_1909;
                int32_t *l_1913 = &l_1876;
                int32_t *l_1914 = &g_24;
                int32_t *l_1915 = &l_1805;
                int32_t *l_1916 = &l_1903;
                int32_t *l_1917 = &l_1876;
                int32_t *l_1918 = &g_153;
                int32_t *l_1919 = &l_1903;
                int32_t *l_1920 = &l_1902;
                int32_t *l_1921 = &g_673;
                int32_t *l_1922 = &l_1909;
                int32_t *l_1923 = (void*)0;
                int32_t *l_1924 = &l_1876;
                int32_t *l_1925 = &l_1756;
                int32_t *l_1926 = (void*)0;
                int32_t *l_1927 = &l_1805;
                int32_t *l_1928 = &l_1902;
                int32_t *l_1929 = &g_673;
                int32_t *l_1930 = &g_462;
                int32_t *l_1931 = &g_153;
                int32_t *l_1932 = (void*)0;
                int32_t *l_1933 = &l_1872;
                int32_t *l_1934 = &g_673;
                int32_t *l_1935 = &l_1876;
                int32_t *l_1936 = &l_1902;
                int32_t *l_1937 = &g_462;
                int32_t *l_1938 = &g_867;
                int32_t *l_1939 = &l_1804;
                int32_t *l_1940 = &l_1802;
                int32_t *l_1941 = &l_1805;
                int32_t *l_1942 = &l_1903;
                int32_t *l_1943 = &l_1805;
                int32_t *l_1944 = &l_1909;
                int32_t *l_1945 = &g_673;
                int32_t *l_1946 = &g_673;
                int32_t *l_1947 = &g_867;
                int32_t *l_1948 = &g_678;
                int32_t l_1949 = 1;
                int32_t *l_1950 = &l_1805;
                int32_t *l_1951 = (void*)0;
                int32_t *l_1952 = &l_1902;
                int32_t *l_1953 = &l_1872;
                int32_t *l_1954 = &l_1756;
                int32_t *l_1955 = &l_1805;
                int32_t *l_1957 = &l_1902;
                int32_t *l_1958 = &l_1802;
                int32_t *l_1959 = &l_1872;
                int32_t *l_1960 = &l_1903;
                int32_t *l_1961 = &l_1756;
                int32_t *l_1962 = &g_153;
                int32_t *l_1963 = &g_678;
                int32_t *l_1964 = &l_1805;
                int32_t *l_1965 = &l_1802;
                int32_t *l_1966 = &l_1901;
                int32_t *l_1968 = (void*)0;
                int32_t *l_1969 = &g_155;
                int32_t *l_1970 = &l_1804;
                int32_t l_1971 = (-10);
                int32_t *l_1972 = &l_1967;
                int32_t *l_1973 = &l_1901;
                ++g_1974;
                if ((*p_8))
                    continue;
                ++l_1977;
                if ((*l_1904))
                    break;
            }
            for (g_673 = (-3); (g_673 > (-17)); g_673 = safe_sub_func_uint32_t_u_u(g_673, 5))
            {
                int16_t *** const * const l_1986 = (void*)0;
                int16_t *****l_1988 = (void*)0;
                const int32_t l_2003 = 0x182C3F39;
                int32_t l_2004 = 0xAC64FFB0;
                int32_t *l_2005 = (void*)0;
                int32_t *l_2006 = &l_1967;
                l_2007 = ((safe_mod_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((l_1902 ^ (*p_8)), (l_1986 != l_1987))), ((((0x0D && ((l_1988 = l_1988) == l_1989)) ^ l_1992) && (safe_mod_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(((g_867 = (g_24 = ((*l_2006) = (safe_rshift_func_int16_t_s_u((safe_mod_func_int16_t_s_s((l_2004 = (safe_sub_func_uint16_t_u_u((*****g_925), l_2003))), p_7)), p_6))))) | p_6), 7)), 0x3CA9))) ^ l_1956))) || 0);
                return &g_2;
            }
        }
        (*l_2008) ^= ((*p_8) && (g_867 ^= 0x4AB280E8));
    }
    (*p_8) = (*p_8);
    return &g_673;
}
static const uint8_t func_13(uint32_t p_14, uint32_t p_15)
{
    int32_t l_52 = 1;
    int32_t l_1721 = (-1);
    const int32_t l_1722 = 0xEC2BF287;
    for (p_15 = 0; (p_15 == 9); p_15++)
    {
        int32_t *l_23 = &g_24;
        uint16_t *l_53 = &g_54;
        int32_t *l_1720 = (void*)0;
        (*l_23) ^= p_15;
        l_1721 |= (((***g_927) = (!func_26(&g_24, (*l_23), func_30(l_23, g_2, func_34(p_15, p_14, p_15, func_39(func_42(func_44(&g_20, (safe_mod_func_uint8_t_u_u((safe_add_func_int16_t_s_s((((*l_53) = ((g_24 && l_52) <= p_15)) != g_2), g_2)), 0x9F)), (*l_23))), (*l_23))))))) < p_14);
        ((void) sizeof ((g_257 == &g_2 || g_257 == 0 || g_257 == &g_20 || g_257 == &g_155 || g_257 == &g_673) ? 1 : 0), __extension__ ({ if (g_257 == &g_2 || g_257 == 0 || g_257 == &g_20 || g_257 == &g_155 || g_257 == &g_673) ; else __assert_fail ("g_257 == &g_2 || g_257 == 0 || g_257 == &g_20 || g_257 == &g_155 || g_257 == &g_673", "/tmp/tmp8smexepa.c", 516, __extension__ __PRETTY_FUNCTION__); }));
        return l_1722;
    }
    return p_14;
}
static int32_t func_26(int32_t * p_27, int32_t p_28, uint16_t p_29)
{
    int16_t l_1610 = (-7);
    int8_t *l_1611 = &g_849;
    uint8_t *l_1612 = (void*)0;
    uint8_t *l_1613 = &g_91;
    const int32_t *l_1621 = &g_462;
    int16_t ***l_1635 = &g_488;
    int16_t ****l_1634 = &l_1635;
    int16_t *****l_1633 = &l_1634;
    int16_t l_1640 = 0;
    int32_t l_1680 = 0x5353AFA3;
    int16_t l_1682 = 1;
    int8_t l_1701 = 0xFF;
    uint32_t l_1707 = 0U;
    uint32_t * const *l_1714 = &g_1167;
    uint32_t * const **l_1713 = &l_1714;
    int32_t **l_1718 = &g_257;
    int32_t *l_1719 = &g_673;
    if ((safe_lshift_func_int16_t_s_u(0x959C, (~(g_673 <= (safe_mod_func_int32_t_s_s((safe_add_func_int32_t_s_s((*p_27), (safe_mod_func_uint32_t_u_u((((~(((*l_1611) |= l_1610) >= g_66)) <= (((*l_1613) = 0xED) || ((0x17 | (safe_rshift_func_uint16_t_u_u(((****g_290) |= (+0x6204)), (safe_mod_func_int8_t_s_s(((safe_sub_func_int16_t_s_s((((void*)0 == l_1621) | 0xE0838DAD), (*l_1621))) <= 0U), p_29))))) | 0))) != p_28), (*p_27))))), (*p_27))))))))
    {
        (*p_27) &= (safe_unary_minus_func_int16_t_s(0xCBE1));
    }
    else
    {
        uint32_t *l_1623 = &g_478;
        int32_t l_1628 = 0x59B7D033;
        int32_t **l_1632 = &g_257;
        (*p_27) = g_155;
        (*l_1632) = func_34(((*l_1623) = (p_29 && (p_29 & (*****g_925)))), p_29, (((-7) > ((-1) >= (safe_sub_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s(((l_1628 |= p_29) && 9U), (((safe_sub_func_int8_t_s_s(g_1631, (*l_1621))) == (*l_1621)) == p_29))), 0x27)))) & (**g_552)), (*p_27));
        ((void) sizeof ((g_257 == 0) ? 1 : 0), __extension__ ({ if (g_257 == 0) ; else __assert_fail ("g_257 == 0", "/tmp/tmp8smexepa.c", 559, __extension__ __PRETTY_FUNCTION__); }));
    }
    if (((&g_550 != l_1633) && (+(p_29 != (!(*l_1621))))))
    {
        int16_t ****l_1647 = &l_1635;
        int32_t *l_1654 = &g_678;
        int32_t *l_1655 = &g_153;
        int16_t *l_1656 = &g_66;
        int16_t *l_1657 = &g_285;
        if ((safe_add_func_int16_t_s_s((-1), ((*l_1657) = (((*l_1656) ^= ((l_1640 != ((&g_1167 == (void*)0) ^ (safe_div_func_uint32_t_u_u((((safe_div_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(((((*l_1633) = l_1647) != l_1647) <= (safe_div_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((((*l_1655) = (((safe_lshift_func_int16_t_s_s((p_29 & ((*p_27) = ((*l_1654) &= (*p_27)))), 5)) != (****g_290)) | (*l_1621))) ^ g_867), p_28)), p_29))), p_28)), p_28)) && 255U) >= 65531U), (*l_1621))))) | g_839)) < p_29)))))
        {
            return (*p_27);
        }
        else
        {
            int32_t **l_1658 = &l_1655;
            int32_t *l_1659 = &g_867;
            uint32_t l_1683 = 0U;
            (*l_1658) = (void*)0;
            ((void) sizeof ((l_1655 == 0) ? 1 : 0), __extension__ ({ if (l_1655 == 0) ; else __assert_fail ("l_1655 == 0", "/tmp/tmp8smexepa.c", 579, __extension__ __PRETTY_FUNCTION__); }));
            (*l_1659) = ((*p_27) &= ((*l_1654) ^= 6));
            (*l_1658) = func_34(g_1149, (g_878 = (safe_div_func_int32_t_s_s(0x996C4569, (safe_add_func_int32_t_s_s((safe_div_func_int32_t_s_s(((void*)0 == &g_257), (safe_unary_minus_func_int32_t_s((safe_rshift_func_int8_t_s_s((safe_div_func_uint16_t_u_u((safe_add_func_int8_t_s_s(((-2) < ((((safe_add_func_int16_t_s_s((safe_mod_func_uint8_t_u_u((g_171 &= (((((~0xED) & (~(~l_1680))) >= g_1312) && ((~0xA1) >= (*g_553))) >= (*l_1659))), p_28)), (*l_1654))) & l_1682) < (-10)) != (*l_1659))), l_1683)), 0x65EB)), 0)))))), (*p_27)))))), (*l_1654), (*l_1659));
        }
        ((void) sizeof ((l_1655 == 0) ? 1 : 0), __extension__ ({ if (l_1655 == 0) ; else __assert_fail ("l_1655 == 0", "/tmp/tmp8smexepa.c", 584, __extension__ __PRETTY_FUNCTION__); }));
    }
    else
    {
        uint8_t l_1684 = 0xC9;
        int32_t l_1692 = 0x61F1B2CB;
        int8_t **l_1697 = &g_581;
        int32_t **l_1698 = &g_257;
        uint8_t l_1706 = 1U;
        uint32_t ****l_1715 = (void*)0;
        uint32_t ***l_1717 = &g_1166;
        uint32_t ****l_1716 = &l_1717;
        (*l_1698) = func_34(p_28, ((((*l_1611) = (((l_1684 < (~((safe_div_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s(((*l_1613) = (p_28 == (safe_div_func_uint8_t_u_u((l_1692 |= 0U), (safe_sub_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((1 | (&g_257 != &g_257)), 0x75)), (l_1697 != (void*)0))))))), 0)), (*l_1621))) || (**g_552)))) ^ g_2) || p_29)) | p_29) ^ 0), g_72, (*p_27));
        ((void) sizeof ((g_257 == 0) ? 1 : 0), __extension__ ({ if (g_257 == 0) ; else __assert_fail ("g_257 == 0", "/tmp/tmp8smexepa.c", 598, __extension__ __PRETTY_FUNCTION__); }));
        l_1707 = (safe_lshift_func_int16_t_s_s((((p_29 < (l_1701 != ((void*)0 == &g_1166))) & (((((((*l_1613)++) && ((*g_580) != (void*)0)) | (g_398 ^ (safe_mod_func_int8_t_s_s(l_1706, ((-5) | 0x0E))))) == g_285) ^ (-6)) && 65535U)) < g_1279), p_29));
        (*l_1698) = func_34(g_91, g_171, p_28, (safe_rshift_func_uint8_t_u_s(((safe_rshift_func_uint8_t_u_s(((&p_27 != (void*)0) || (*l_1621)), (((!(g_867 <= ((l_1713 == ((*l_1716) = &g_1166)) ^ (*p_27)))) > p_29) & (-2)))) & 0x2217CD8A), 4)));
    }
    (*l_1718) = func_42((*l_1621));
    ((void) sizeof ((g_257 == &g_20 || g_257 == 0) ? 1 : 0), __extension__ ({ if (g_257 == &g_20 || g_257 == 0) ; else __assert_fail ("g_257 == &g_20 || g_257 == 0", "/tmp/tmp8smexepa.c", 604, __extension__ __PRETTY_FUNCTION__); }));
    (*l_1719) |= (*p_27);
    return (*l_1621);
}
static uint16_t func_30(uint32_t * p_31, uint32_t p_32, uint32_t * p_33)
{
    int32_t l_1462 = 5;
    int32_t l_1463 = 0x38197485;
    int32_t l_1478 = 7;
    int32_t l_1490 = 0xACB79A42;
    int32_t l_1525 = 4;
    int32_t l_1542 = 0;
    int32_t l_1580 = 1;
    int32_t l_1594 = (-1);
    int32_t l_1595 = 0xEE6C72AB;
    for (g_222 = 0; (g_222 >= 29); ++g_222)
    {
        int32_t *l_1438 = &g_155;
        int32_t *l_1439 = &g_153;
        int32_t l_1440 = (-1);
        int32_t *l_1441 = &g_673;
        int32_t *l_1442 = (void*)0;
        int32_t *l_1443 = &g_462;
        int32_t *l_1444 = &g_155;
        int32_t *l_1445 = &g_673;
        int32_t *l_1446 = &g_462;
        int32_t *l_1447 = (void*)0;
        int32_t *l_1448 = &g_155;
        int32_t *l_1449 = &g_155;
        int32_t *l_1450 = &g_462;
        int32_t *l_1451 = (void*)0;
        int32_t *l_1452 = &g_678;
        int32_t *l_1453 = (void*)0;
        int32_t *l_1454 = &l_1440;
        int32_t *l_1455 = &g_155;
        int32_t *l_1456 = (void*)0;
        int32_t l_1457 = 0x180B027E;
        int32_t *l_1458 = (void*)0;
        int32_t *l_1459 = (void*)0;
        int32_t *l_1460 = &g_867;
        int32_t *l_1461 = (void*)0;
        int32_t *l_1464 = (void*)0;
        int32_t *l_1465 = &g_462;
        int32_t *l_1466 = (void*)0;
        int32_t *l_1467 = &g_155;
        int32_t l_1468 = 0xA2EFD34D;
        int32_t *l_1469 = &g_462;
        int32_t *l_1470 = &g_678;
        int32_t *l_1471 = &l_1440;
        int32_t *l_1472 = &l_1440;
        int32_t *l_1473 = &g_153;
        int32_t *l_1474 = &g_153;
        int32_t *l_1475 = &l_1440;
        int32_t *l_1476 = &l_1440;
        int32_t *l_1477 = &l_1463;
        int32_t l_1479 = 0x3B941B74;
        int32_t *l_1480 = (void*)0;
        int32_t l_1481 = 5;
        int32_t *l_1482 = &g_673;
        int32_t *l_1483 = &l_1481;
        int32_t *l_1484 = &g_155;
        int32_t *l_1485 = (void*)0;
        int32_t *l_1486 = &l_1440;
        int32_t *l_1487 = &g_153;
        int32_t *l_1488 = &l_1463;
        int32_t *l_1489 = &l_1481;
        int32_t *l_1491 = &g_678;
        int32_t *l_1492 = (void*)0;
        int32_t *l_1493 = &l_1457;
        int32_t *l_1494 = &l_1490;
        int32_t *l_1495 = &l_1490;
        int32_t *l_1496 = &g_678;
        int32_t l_1497 = 0x345A5EF8;
        int32_t *l_1498 = &g_153;
        int32_t l_1499 = 1;
        int32_t *l_1500 = &l_1478;
        int32_t *l_1501 = &l_1478;
        int32_t *l_1502 = &l_1497;
        int32_t *l_1503 = &l_1457;
        int32_t *l_1504 = (void*)0;
        int32_t *l_1505 = &l_1499;
        int32_t *l_1506 = (void*)0;
        int32_t *l_1507 = &l_1457;
        int32_t *l_1508 = &g_867;
        int32_t l_1509 = (-1);
        int32_t *l_1510 = &g_155;
        int32_t *l_1511 = (void*)0;
        int32_t *l_1512 = &l_1509;
        int32_t *l_1513 = &l_1509;
        int32_t *l_1514 = &l_1479;
        int32_t *l_1515 = (void*)0;
        int32_t *l_1516 = &l_1478;
        int32_t *l_1517 = &g_867;
        int32_t *l_1518 = &l_1499;
        int32_t l_1519 = 0;
        int32_t *l_1520 = &g_678;
        int32_t *l_1521 = (void*)0;
        int32_t *l_1522 = &g_678;
        int32_t *l_1523 = &l_1478;
        int32_t *l_1524 = &l_1440;
        int32_t l_1526 = 0x0DAD4556;
        int32_t *l_1527 = &l_1481;
        int32_t *l_1528 = &g_153;
        int32_t l_1529 = 0xEADA7899;
        int32_t *l_1530 = &g_462;
        int32_t *l_1531 = &g_155;
        int32_t *l_1532 = &g_153;
        int32_t *l_1533 = &l_1490;
        int32_t *l_1534 = &g_155;
        int32_t *l_1535 = &l_1490;
        int32_t *l_1536 = (void*)0;
        int32_t *l_1537 = &l_1468;
        int32_t *l_1538 = &g_867;
        int32_t *l_1539 = &l_1463;
        int32_t *l_1540 = &l_1509;
        int32_t *l_1541 = &g_462;
        int32_t *l_1543 = &g_155;
        int32_t l_1544 = (-2);
        int32_t *l_1545 = &l_1526;
        int32_t *l_1546 = &l_1440;
        int32_t *l_1547 = (void*)0;
        int32_t *l_1548 = &l_1542;
        int32_t *l_1549 = &l_1519;
        int32_t *l_1550 = &l_1457;
        int32_t *l_1551 = &l_1440;
        int32_t *l_1552 = (void*)0;
        int32_t *l_1553 = &g_867;
        int32_t *l_1554 = &g_673;
        int32_t *l_1555 = &g_153;
        int32_t *l_1556 = &g_462;
        int32_t *l_1557 = &l_1490;
        int32_t *l_1558 = &g_673;
        int32_t *l_1559 = &l_1497;
        int32_t *l_1560 = &l_1490;
        int32_t *l_1561 = &l_1497;
        int32_t *l_1562 = &l_1509;
        int32_t *l_1563 = &l_1526;
        int32_t *l_1564 = &l_1544;
        int32_t *l_1565 = &g_867;
        int32_t *l_1566 = (void*)0;
        int32_t *l_1567 = &g_673;
        int32_t *l_1568 = &g_673;
        int32_t l_1569 = 0x2FF020BE;
        int32_t *l_1570 = (void*)0;
        int32_t *l_1571 = &l_1481;
        int32_t *l_1572 = (void*)0;
        int32_t *l_1573 = &l_1479;
        int32_t *l_1574 = &l_1569;
        int32_t *l_1575 = &l_1525;
        int32_t *l_1576 = &l_1529;
        int32_t l_1577 = 0;
        int32_t *l_1578 = (void*)0;
        int32_t *l_1579 = &g_673;
        int32_t *l_1581 = &l_1580;
        int32_t *l_1582 = &l_1497;
        int32_t *l_1583 = &l_1577;
        int32_t *l_1584 = &g_153;
        int32_t *l_1585 = (void*)0;
        int32_t *l_1586 = (void*)0;
        int32_t *l_1587 = (void*)0;
        int32_t *l_1588 = &l_1525;
        int32_t *l_1589 = &l_1525;
        int32_t *l_1590 = &l_1544;
        int32_t *l_1591 = &l_1481;
        int32_t *l_1592 = &l_1478;
        int32_t *l_1593 = &l_1468;
        int32_t *l_1596 = &l_1544;
        g_1597--;
    }
    return p_32;
}
static uint32_t * func_34(uint32_t p_35, uint32_t p_36, const int32_t p_37, int32_t p_38)
{
    int16_t ***l_280 = (void*)0;
    int16_t ****l_281 = &l_280;
    int32_t l_282 = (-4);
    int32_t l_348 = 0x3559E744;
    int32_t l_371 = 1;
    int32_t l_388 = 6;
    int8_t **l_584 = &g_581;
    int16_t l_814 = (-4);
    int16_t ***l_941 = &g_488;
    uint32_t l_942 = 0x9F76C228;
    uint32_t *l_989 = (void*)0;
    uint32_t **l_988 = &l_989;
    int32_t l_1265 = 7;
    uint16_t *****l_1365 = (void*)0;
    int32_t l_1369 = 0xCC9C3384;
    uint16_t *l_1415 = &g_64;
    (*l_281) = l_280;
    return l_989;
}
static int32_t func_39(int32_t * p_40, int32_t p_41)
{
    uint32_t l_135 = 0U;
    int32_t l_150 = (-7);
    uint16_t * const **l_172 = &g_73;
    int32_t l_211 = 0x2B768FFD;
    int32_t l_279 = 0xDA66330F;
    for (g_66 = 0; (g_66 >= 6); g_66 = safe_add_func_int32_t_s_s(g_66, 9))
    {
        uint8_t *l_138 = &g_91;
        uint16_t ****l_173 = &g_109;
        int32_t l_180 = (-8);
        uint32_t l_187 = 1U;
        int32_t *l_190 = &g_155;
        int32_t *l_191 = &g_153;
        int32_t *l_192 = &l_180;
        int32_t *l_193 = &g_153;
        int32_t *l_194 = (void*)0;
        int32_t *l_195 = (void*)0;
        int32_t *l_196 = &g_153;
        int32_t *l_197 = &l_180;
        int32_t *l_198 = &l_180;
        int32_t *l_199 = &l_150;
        int32_t *l_200 = &l_150;
        int32_t *l_201 = &g_155;
        int32_t *l_202 = (void*)0;
        int32_t *l_203 = &g_153;
        int32_t *l_204 = &l_150;
        int32_t *l_205 = &g_153;
        int32_t *l_206 = (void*)0;
        int32_t *l_207 = &l_180;
        int32_t *l_208 = &l_150;
        int32_t *l_209 = &l_150;
        int32_t *l_210 = &l_150;
        int32_t *l_212 = (void*)0;
        int32_t *l_213 = &l_150;
        int32_t *l_214 = (void*)0;
        int32_t *l_215 = &g_155;
        int32_t *l_216 = &g_153;
        int32_t *l_217 = &l_211;
        int32_t *l_218 = &g_153;
        int32_t *l_219 = (void*)0;
        int32_t *l_220 = (void*)0;
        int32_t *l_221 = &g_155;
        uint32_t l_245 = 4294967295U;
        if ((safe_rshift_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_s((((0xE4E4 > (**g_110)) > (((p_41 | (p_41 && l_135)) & ((*l_138) = ((safe_lshift_func_int16_t_s_u(((l_138 != l_138) > l_135), 13)) || ((&g_73 == &g_73) & 0x97)))) != 0xB575)) && p_41), 1)) >= p_41), 5)))
        {
            uint32_t *l_147 = (void*)0;
            uint32_t *l_148 = (void*)0;
            uint32_t *l_149 = &g_20;
            int32_t *l_151 = (void*)0;
            int32_t *l_152 = &g_153;
            int32_t *l_154 = &g_155;
            uint8_t *l_170 = &g_171;
            uint16_t ****l_175 = &g_109;
            uint16_t *****l_174 = &l_175;
            uint16_t ****l_177 = &g_109;
            uint16_t *****l_176 = &l_177;
            int32_t *l_181 = (void*)0;
            int32_t *l_182 = (void*)0;
            int32_t *l_183 = &l_150;
            (*l_154) = (safe_sub_func_uint32_t_u_u(p_41, ((*l_152) = (safe_unary_minus_func_uint32_t_u((l_150 = ((*l_149) ^= (safe_rshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((~p_41), 15)), 3)))))))));
            (*l_183) &= (safe_lshift_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(255U, (safe_div_func_int8_t_s_s(g_2, g_63)))), (safe_lshift_func_uint8_t_u_u(((((safe_div_func_int16_t_s_s((safe_add_func_uint8_t_u_u(((*l_170) = (++g_91)), (((void*)0 != l_172) | ((0x0B | (l_173 == ((*l_176) = ((*l_174) = l_173)))) < ((safe_sub_func_int8_t_s_s(l_180, (*l_154))) < 0x55696F08))))), g_153)) || (**g_110)) >= p_41) && g_155), 1))));
            if (p_41)
                continue;
        }
        else
        {
            int32_t *l_184 = &g_153;
            int32_t *l_185 = &l_180;
            int32_t *l_186 = &g_155;
            --l_187;
            return g_72;
        }
        g_222++;
        for (l_211 = 14; (l_211 < (-27)); l_211 = safe_sub_func_uint32_t_u_u(l_211, 7))
        {
            int8_t *l_229 = &g_72;
            int32_t l_244 = (-2);
            (*l_204) ^= (safe_unary_minus_func_int32_t_s((~((*l_138) = g_222))));
            if ((g_153 != ((*l_229) = p_41)))
            {
                int16_t *l_243 = &g_66;
                int16_t **l_242 = &l_243;
                (*l_209) = g_222;
                (*l_192) = (safe_sub_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(g_91, 14)), (((*g_111) = (((*l_229) |= g_66) <= ((*l_196) |= p_41))) <= (safe_add_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((safe_sub_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((0x17 & ((l_242 == (void*)0) ^ (-1))), 15)), (1U == 1))), 0)), l_244)))));
                if (l_245)
                    break;
            }
            else
            {
                uint32_t l_246 = 4294967295U;
                int32_t **l_247 = &l_217;
                int32_t l_263 = 0xE66233F1;
                int32_t l_265 = 1;
                int32_t l_266 = 1;
                l_246 |= l_244;
                (*l_247) = &p_41;
                ((void) sizeof ((l_217 == &p_41) ? 1 : 0), __extension__ ({ if (l_217 == &p_41) ; else __assert_fail ("l_217 == &p_41", "/tmp/tmp8smexepa.c", 918, __extension__ __PRETTY_FUNCTION__); }));
                for (p_41 = 15; (p_41 < (-3)); p_41--)
                {
                    (*l_247) = &g_24;
                    ((void) sizeof ((l_217 == &g_24) ? 1 : 0), __extension__ ({ if (l_217 == &g_24) ; else __assert_fail ("l_217 == &g_24", "/tmp/tmp8smexepa.c", 923, __extension__ __PRETTY_FUNCTION__); }));
                }
                ((void) sizeof ((l_217 == &g_24 || l_217 == &p_41) ? 1 : 0), __extension__ ({ if (l_217 == &g_24 || l_217 == &p_41) ; else __assert_fail ("l_217 == &g_24 || l_217 == &p_41", "/tmp/tmp8smexepa.c", 926, __extension__ __PRETTY_FUNCTION__); }));
                for (g_171 = (-24); (g_171 == 2); g_171 = safe_add_func_uint16_t_u_u(g_171, 1))
                {
                    int32_t *l_254 = &g_2;
                    int32_t l_267 = 0;
                    (*l_247) = &l_244;
                    ((void) sizeof ((l_217 == &l_244) ? 1 : 0), __extension__ ({ if (l_217 == &l_244) ; else __assert_fail ("l_217 == &l_244", "/tmp/tmp8smexepa.c", 933, __extension__ __PRETTY_FUNCTION__); }));
                    for (g_72 = 14; (g_72 == 8); g_72 = safe_sub_func_uint16_t_u_u(g_72, 6))
                    {
                        int32_t **l_255 = (void*)0;
                        int32_t **l_256 = &l_200;
                        g_257 = ((*l_256) = ((*l_247) = l_254));
                        ((void) sizeof ((l_200 == &g_2) ? 1 : 0), __extension__ ({ if (l_200 == &g_2) ; else __assert_fail ("l_200 == &g_2", "/tmp/tmp8smexepa.c", 940, __extension__ __PRETTY_FUNCTION__); }));
                        ((void) sizeof ((l_217 == &g_2) ? 1 : 0), __extension__ ({ if (l_217 == &g_2) ; else __assert_fail ("l_217 == &g_2", "/tmp/tmp8smexepa.c", 941, __extension__ __PRETTY_FUNCTION__); }));
                        ((void) sizeof ((g_257 == &g_2) ? 1 : 0), __extension__ ({ if (g_257 == &g_2) ; else __assert_fail ("g_257 == &g_2", "/tmp/tmp8smexepa.c", 942, __extension__ __PRETTY_FUNCTION__); }));
                        ++g_258;
                        (*l_221) = ((*l_207) = (**l_247));
                    }
                    ((void) sizeof ((l_217 == &g_2 || l_217 == &l_244) ? 1 : 0), __extension__ ({ if (l_217 == &g_2 || l_217 == &l_244) ; else __assert_fail ("l_217 == &g_2 || l_217 == &l_244", "/tmp/tmp8smexepa.c", 947, __extension__ __PRETTY_FUNCTION__); }));
                    for (g_125 = 0; (g_125 != 31); ++g_125)
                    {
                        int32_t l_264 = (-1);
                        int32_t *l_268 = &l_180;
                        int32_t *l_269 = &l_265;
                        int32_t l_270 = 1;
                        int32_t *l_271 = (void*)0;
                        int32_t *l_272 = (void*)0;
                        int32_t *l_273 = &l_150;
                        int32_t *l_274 = &g_153;
                        int32_t *l_275 = &l_270;
                        g_276--;
                        p_41 = l_244;
                    }
                }
                ((void) sizeof ((l_217 == &g_2 || l_217 == &l_244 || l_217 == &g_24 || l_217 == &p_41) ? 1 : 0), __extension__ ({ if (l_217 == &g_2 || l_217 == &l_244 || l_217 == &g_24 || l_217 == &p_41) ; else __assert_fail ("l_217 == &g_2 || l_217 == &l_244 || l_217 == &g_24 || l_217 == &p_41", "/tmp/tmp8smexepa.c", 964, __extension__ __PRETTY_FUNCTION__); }));
            }
        }
        ((void) sizeof ((l_200 == &g_2 || l_200 == &l_150) ? 1 : 0), __extension__ ({ if (l_200 == &g_2 || l_200 == &l_150) ; else __assert_fail ("l_200 == &g_2 || l_200 == &l_150", "/tmp/tmp8smexepa.c", 970, __extension__ __PRETTY_FUNCTION__); }));
        (*l_192) = (g_63 != l_279);
    }
    return p_41;
}
static int32_t * func_42(uint32_t p_43)
{
    int32_t *l_61 = &g_2;
    uint16_t * const **l_75 = (void*)0;
    uint16_t * const **l_76 = &g_73;
    int16_t *l_90 = (void*)0;
    uint16_t *l_105 = &g_54;
    uint16_t **l_104 = &l_105;
    uint16_t ***l_103 = &l_104;
    uint16_t ****l_106 = &l_103;
    uint16_t ****l_112 = &g_109;
    int16_t *l_115 = &g_66;
    int8_t *l_116 = &g_72;
    uint32_t *l_117 = &g_20;
    uint8_t *l_118 = (void*)0;
    (*l_76) = func_56(l_61, p_43, p_43, g_2);
    for (g_72 = (-1); (g_72 == (-20)); g_72 = safe_sub_func_int32_t_s_s(g_72, 9))
    {
        int16_t *l_83 = (void*)0;
        uint16_t *l_84 = &g_64;
        int16_t *l_85 = (void*)0;
        int16_t **l_86 = &l_85;
        uint16_t *l_88 = &g_54;
        uint16_t **l_87 = &l_88;
        int32_t l_89 = 0x67338D58;
        int32_t *l_92 = &l_89;
        l_89 = ((safe_sub_func_uint16_t_u_u((((safe_mod_func_int16_t_s_s((g_66 |= (((p_43 == g_20) && 0x09) <= 0)), ((*l_84) = (*l_61)))) | ((((*l_86) = l_85) != (void*)0) >= (((*l_87) = l_84) != (void*)0))) <= g_24), l_89)) <= 0U);
        ((void) sizeof ((l_88 == &g_64) ? 1 : 0), __extension__ ({ if (l_88 == &g_64) ; else __assert_fail ("l_88 == &g_64", "/tmp/tmp8smexepa.c", 1011, __extension__ __PRETTY_FUNCTION__); }));
        (*l_92) = (g_91 = ((void*)0 == l_90));
    }
    if (((safe_rshift_func_uint8_t_u_u(g_2, (g_91 = (p_43 > (safe_add_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u(((safe_div_func_uint32_t_u_u(((*l_117) = (safe_rshift_func_uint8_t_u_s(((*l_61) >= (&g_73 == ((*l_106) = l_103))), (safe_rshift_func_uint8_t_u_s((((*l_116) = (((&g_73 == ((*l_112) = g_109)) < ((safe_sub_func_uint8_t_u_u((*l_61), ((((*l_115) = (0x0BD24A17 || g_24)) < p_43) & p_43))) || 4U)) != 0xBFA339BC)) ^ 0x8B), p_43))))), 1U)) | (*l_61)), 11)), (*l_61))))))) < g_64))
    {
        int16_t **l_121 = (void*)0;
        int32_t **l_124 = &l_61;
        for (g_66 = 0; (g_66 > (-4)); g_66--)
        {
            int32_t *l_122 = &g_2;
            int32_t **l_123 = &l_122;
            l_121 = &l_90;
            ((void) sizeof ((l_121 == &l_90) ? 1 : 0), __extension__ ({ if (l_121 == &l_90) ; else __assert_fail ("l_121 == &l_90", "/tmp/tmp8smexepa.c", 1024, __extension__ __PRETTY_FUNCTION__); }));
            (*l_123) = l_122;
        }
        ((void) sizeof ((l_121 == &l_90 || l_121 == 0) ? 1 : 0), __extension__ ({ if (l_121 == &l_90 || l_121 == 0) ; else __assert_fail ("l_121 == &l_90 || l_121 == 0", "/tmp/tmp8smexepa.c", 1028, __extension__ __PRETTY_FUNCTION__); }));
        (*l_124) = l_117;
        ((void) sizeof ((l_61 == &g_20) ? 1 : 0), __extension__ ({ if (l_61 == &g_20) ; else __assert_fail ("l_61 == &g_20", "/tmp/tmp8smexepa.c", 1031, __extension__ __PRETTY_FUNCTION__); }));
        (*l_61) = 3;
    }
    else
    {
        int32_t *l_128 = (void*)0;
        g_125--;
        return l_128;
    }
    ((void) sizeof ((l_61 == &g_20) ? 1 : 0), __extension__ ({ if (l_61 == &g_20) ; else __assert_fail ("l_61 == &g_20", "/tmp/tmp8smexepa.c", 1043, __extension__ __PRETTY_FUNCTION__); }));
    return l_61;
}
static uint32_t func_44(uint32_t * p_45, uint32_t p_46, int32_t p_47)
{
    int32_t l_55 = (-7);
    return l_55;
}
static uint16_t * const * func_56(int32_t * p_57, uint32_t p_58, int8_t p_59, int32_t p_60)
{
    int8_t l_62 = 0xB4;
    int16_t *l_65 = &g_66;
    p_60 = ((l_62 >= (g_64 = (g_63 = g_20))) != (0xD1A9 == ((*l_65) = (0x6D ^ ((void*)0 == &g_20)))));
    for (g_20 = 28; (g_20 <= 19); g_20 = safe_sub_func_int32_t_s_s(g_20, 3))
    {
        const uint16_t *l_69 = &g_64;
        uint16_t *l_71 = &g_64;
        uint16_t **l_70 = &l_71;
        g_72 |= (l_69 != ((*l_70) = l_65));
        ((void) sizeof ((l_71 == &g_66) ? 1 : 0), __extension__ ({ if (l_71 == &g_66) ; else __assert_fail ("l_71 == &g_66", "/tmp/tmp8smexepa.c", 1079, __extension__ __PRETTY_FUNCTION__); }));
    }
    return g_73;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_2;
    csmith_sink_ = g_20;
    csmith_sink_ = g_24;
    csmith_sink_ = g_54;
    csmith_sink_ = g_63;
    csmith_sink_ = g_64;
    csmith_sink_ = g_66;
    csmith_sink_ = g_72;
    csmith_sink_ = g_91;
    csmith_sink_ = g_125;
    csmith_sink_ = g_153;
    csmith_sink_ = g_155;
    csmith_sink_ = g_171;
    csmith_sink_ = g_222;
    csmith_sink_ = g_258;
    csmith_sink_ = g_276;
    csmith_sink_ = g_285;
    csmith_sink_ = g_370;
    csmith_sink_ = g_374;
    csmith_sink_ = g_398;
    csmith_sink_ = g_462;
    csmith_sink_ = g_478;
    csmith_sink_ = g_661;
    csmith_sink_ = g_673;
    csmith_sink_ = g_678;
    csmith_sink_ = g_692;
    csmith_sink_ = g_763;
    csmith_sink_ = g_839;
    csmith_sink_ = g_842;
    csmith_sink_ = g_849;
    csmith_sink_ = g_867;
    csmith_sink_ = g_878;
    csmith_sink_ = g_1085;
    csmith_sink_ = g_1149;
    csmith_sink_ = g_1279;
    csmith_sink_ = g_1312;
    csmith_sink_ = g_1597;
    csmith_sink_ = g_1631;
    csmith_sink_ = g_1826;
    csmith_sink_ = g_1828;
    csmith_sink_ = g_1974;
    csmith_sink_ = g_2064;
    csmith_sink_ = g_2067;
    csmith_sink_ = g_2073;
    csmith_sink_ = g_2092;
    csmith_sink_ = g_2093;
    platform_main_end(0,0);
    return 0;
}
