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
static int8_t g_9 = 0x4F;
static int32_t g_28 = 0x87972E7E;
static int32_t *g_27 = &g_28;
static int32_t g_82 = 0x70486D4D;
static uint8_t g_102 = 0xE0;
static uint32_t g_277 = 1U;
static uint32_t g_330 = 0xA6C6404D;
static uint8_t g_385 = 0x75;
static int32_t *g_390 = (void*)0;
static uint32_t g_450 = 1U;
static int32_t g_461 = 0;
static uint32_t g_477 = 4294967295U;
static int32_t *g_481 = &g_28;
static uint16_t g_545 = 0xA92B;
static int32_t **g_549 = &g_481;
static int32_t ***g_548 = &g_549;
static uint8_t g_622 = 250U;
static uint16_t g_713 = 3U;
static int32_t *g_725 = &g_28;
static uint8_t g_786 = 0xDA;
static int32_t ****g_841 = &g_548;
static int32_t *****g_840 = &g_841;
static uint16_t g_940 = 0x0B80;
static int8_t g_1160 = (-1);
static uint32_t g_1166 = 0x911FFDAD;
inline static uint32_t func_1(void);
inline static int32_t func_2(uint8_t p_3);
static int32_t func_10(uint8_t p_11, uint32_t p_12, uint32_t p_13);
static uint8_t func_14(uint32_t p_15, uint32_t p_16, uint8_t p_17, uint16_t p_18, uint16_t p_19);
inline static int32_t * func_25(int32_t * p_26);
inline static int32_t * func_30(uint16_t p_31, int16_t p_32);
inline static int32_t * func_105(uint32_t p_106, int32_t * p_107, int8_t p_108);
static int32_t func_112(int32_t * p_113);
static int32_t * func_114(int32_t * p_115, int16_t p_116);
inline static int32_t func_117(int32_t * p_118, uint32_t p_119, int32_t p_120);
inline static uint32_t func_1(void)
{
    uint16_t l_6 = 0x4AD3;
    uint32_t l_22 = 0x5DAA08BB;
    int8_t l_23 = (-2);
    uint16_t l_24 = 0xA6C2;
    int16_t l_1169 = 0;
    uint32_t l_1172 = 4294967292U;
    int32_t l_1173 = (-1);
    l_1173 = (((func_2((((((0U != 0x39BA) ^ (safe_lshift_func_uint8_t_u_s(((((l_6 | (safe_sub_func_uint16_t_u_u(((g_9 >= ((func_10(l_6, (((0x6C && func_14(((g_9 < l_6) < ((safe_sub_func_int32_t_s_s(((g_9 , 0) != l_22), l_23)) , 0xE3)), l_23, l_6, l_24, g_9)) >= 1U) | 0xF5), l_1169) | 4294967287U) , l_23)) < g_622), 0))) , (-1)) < 1U) != (-1)), 3))) >= g_940) == (-1)) <= 0xB89B8029)) != l_6) | l_1172) <= 1);
    return g_82;
}
inline static int32_t func_2(uint8_t p_3)
{
    int32_t *l_1171 = &g_82;
    (*l_1171) &= (l_1171 == l_1171);
    return p_3;
}
static int32_t func_10(uint8_t p_11, uint32_t p_12, uint32_t p_13)
{
    uint8_t l_1170 = 247U;
    return l_1170;
}
static uint8_t func_14(uint32_t p_15, uint32_t p_16, uint8_t p_17, uint16_t p_18, uint16_t p_19)
{
    int32_t *l_29 = &g_28;
    uint32_t l_1121 = 0x07E29610;
    int8_t l_1132 = 0xD7;
    uint32_t l_1135 = 4U;
    int32_t l_1136 = (-1);
    int32_t *l_1137 = &g_28;
    int32_t *l_1138 = &g_82;
    int32_t *l_1139 = &g_28;
    int32_t *l_1140 = (void*)0;
    int32_t *l_1141 = &l_1136;
    int32_t *l_1142 = &l_1136;
    int32_t *l_1143 = &g_82;
    int32_t *l_1144 = (void*)0;
    int32_t l_1145 = (-1);
    int32_t l_1146 = (-5);
    int32_t *l_1147 = &g_82;
    int32_t *l_1148 = &g_28;
    int32_t *l_1149 = &l_1145;
    int32_t *l_1150 = &l_1136;
    int32_t *l_1151 = &l_1145;
    int32_t *l_1152 = &l_1146;
    int32_t l_1153 = 0xFEC79CEB;
    int32_t *l_1154 = (void*)0;
    int32_t *l_1155 = &l_1145;
    int32_t *l_1156 = &l_1136;
    int32_t *l_1157 = (void*)0;
    int32_t l_1158 = 0;
    int32_t l_1159 = 0;
    int32_t *l_1161 = &l_1153;
    int32_t *l_1162 = &l_1136;
    int32_t *l_1163 = (void*)0;
    int32_t *l_1164 = &g_82;
    int32_t *l_1165 = &l_1153;
    (*g_549) = func_25(((g_27 != l_29) , func_30(g_28, g_9)));
    --l_1121;
    l_1136 |= (safe_rshift_func_uint8_t_u_s((1U | (((3 != (((p_19 != ((safe_rshift_func_int8_t_s_u(p_17, p_19)) != ((safe_rshift_func_int16_t_s_s(((((((safe_add_func_int8_t_s_s(((p_18 , l_1132) | ((safe_sub_func_uint32_t_u_u(l_1135, (((0x8F3C005B || 0x961DC487) || (*l_29)) ^ g_461))) & 0x5F81)), g_622)) > (-1)) & (*l_29)) && (*l_29)) || p_17) == (*l_29)), g_622)) == 0xD0))) < 0U) || g_940)) ^ (*g_725)) , 1U)), 7));
    g_1166++;
    return p_15;
}
inline static int32_t * func_25(int32_t * p_26)
{
    int32_t l_728 = 0xCCE724BC;
    int32_t **l_729 = &g_27;
    int32_t l_767 = 0x20501DBA;
    int32_t l_781 = 0;
    int16_t l_837 = (-1);
    int32_t *****l_858 = &g_841;
    int32_t l_974 = 0x10F67D22;
    int32_t l_975 = 0xE62CEDA2;
    int32_t **l_1005 = &g_390;
    uint32_t l_1081 = 0xC66EEC14;
    uint8_t l_1085 = 0x5F;
    uint32_t l_1092 = 0x1B1E8128;
    uint32_t l_1093 = 0U;
    uint16_t l_1094 = 0U;
    int16_t l_1120 = (-6);
    if (((safe_rshift_func_int8_t_s_s((((((g_28 < l_728) | (l_729 != (g_450 , &p_26))) ^ ((safe_lshift_func_uint8_t_u_s((((safe_unary_minus_func_int32_t_s(((safe_lshift_func_uint8_t_u_u((g_461 == l_728), 4)) == g_82))) | ((-4) || (*p_26))) || (*p_26)), g_277)) , 0x6C17)) && 7) , l_728), g_461)) > g_9))
    {
        int16_t l_735 = 0;
        int32_t ***l_738 = (void*)0;
        int32_t ****l_812 = &l_738;
        (*l_729) = p_26;
        if (((g_277 == l_735) >= 4))
        {
            uint32_t l_749 = 0x198939B6;
            int32_t l_785 = 9;
            int32_t l_820 = 0x84C814A6;
            int32_t *****l_830 = &l_812;
            for (g_461 = 0; (g_461 != (-1)); g_461--)
            {
                uint32_t l_748 = 0xC257B2B4;
                int32_t l_775 = (-1);
                int32_t *l_843 = &l_785;
                if ((((((((((void*)0 == l_738) , p_26) == &g_82) || g_330) , (safe_sub_func_uint32_t_u_u((safe_add_func_int16_t_s_s(g_545, ((*g_27) > 0U))), (safe_rshift_func_uint8_t_u_u((+(l_748 > 0x719E0550)), 2))))) , l_749) >= 0xD2) , (*p_26)))
                {
                    if ((*g_27))
                        break;
                }
                else
                {
                    int32_t l_789 = 0x5824E1A1;
                    if ((!(safe_mod_func_int8_t_s_s(g_102, ((*g_725) && (*p_26))))))
                    {
                        int32_t *l_753 = &g_82;
                        int32_t l_754 = 1;
                        int32_t *l_755 = &l_754;
                        int32_t *l_756 = &l_754;
                        int32_t *l_757 = &g_28;
                        int32_t *l_758 = &g_82;
                        int32_t *l_759 = (void*)0;
                        int32_t *l_760 = (void*)0;
                        int32_t *l_761 = (void*)0;
                        int32_t l_762 = 0x3B31FDA1;
                        int32_t *l_763 = &g_28;
                        int32_t *l_764 = &g_82;
                        int32_t *l_765 = (void*)0;
                        int32_t *l_766 = (void*)0;
                        int32_t *l_768 = (void*)0;
                        int32_t *l_769 = &l_762;
                        int32_t *l_770 = &g_28;
                        int32_t *l_771 = &g_28;
                        int32_t *l_772 = &l_767;
                        int32_t *l_773 = &g_28;
                        int32_t *l_774 = &g_28;
                        int32_t *l_776 = &g_82;
                        int32_t *l_777 = &g_82;
                        int32_t *l_778 = &l_762;
                        int32_t *l_779 = &g_82;
                        int32_t *l_780 = (void*)0;
                        int32_t *l_782 = (void*)0;
                        int32_t *l_783 = &l_754;
                        int32_t *l_784 = &l_767;
                        --g_786;
                        (*l_776) ^= (((0x464DA054 == (((l_789 , (0U ^ (~(safe_mod_func_uint32_t_u_u((**l_729), ((safe_mod_func_int32_t_s_s((((((safe_add_func_int8_t_s_s(g_622, (safe_lshift_func_uint16_t_u_s((safe_mod_func_int32_t_s_s((safe_mod_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u(g_277, (safe_sub_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((g_28 <= (&g_548 == ((safe_sub_func_int16_t_s_s((l_775 , 0x30AF), g_622)) , &g_548))), g_622)), l_749)))), l_748)), 0xF3A545B3)), (**l_729))))) & l_775) & 0) >= g_786) != 1), 0x1E0427C1)) & l_785)))))) ^ l_785) != 1)) , (void*)0) != (void*)0);
                    }
                    else
                    {
                        int32_t *****l_811 = (void*)0;
                        int32_t *l_842 = &l_820;
                        l_812 = &g_548;
                        if ((*g_27))
                            continue;
                        l_820 |= ((safe_lshift_func_int16_t_s_u((((**l_729) ^ (((((((l_748 >= (g_545 & (((safe_sub_func_int32_t_s_s((g_461 && (g_786 != (g_9 , (((safe_rshift_func_int8_t_s_s((safe_unary_minus_func_uint8_t_u(((l_785 , p_26) == &g_82))), 2)) >= l_785) , g_277)))), 1U)) <= 0) || g_786))) == g_9) , 0xC0FBA9DE) & (*p_26)) & 0xCE) == (*p_26)) != (**l_729))) & l_748), (**l_729))) >= l_785);
                        (*l_842) ^= (safe_mod_func_int32_t_s_s(((l_785 , (((safe_add_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((**l_729), (safe_unary_minus_func_uint8_t_u(((safe_sub_func_int8_t_s_s((((void*)0 == l_830) && (((safe_mod_func_uint32_t_u_u((safe_mod_func_int16_t_s_s(((((g_477 , ((l_789 ^ (((safe_sub_func_uint16_t_u_u(((l_837 != ((safe_add_func_uint8_t_u_u(((((((void*)0 == g_840) <= l_789) != 1U) & 1) < 0U), l_775)) & g_450)) , l_789), 0xB086)) & (-5)) ^ l_748)) | 0xF600)) <= l_789) , 1) <= (*p_26)), g_545)), (*g_725))) < 4294967289U) >= l_775)), g_622)) || l_748))))), 4U)) & g_477) && (**l_729))) || g_477), l_789));
                    }
                }
                (*l_843) |= (*p_26);
                (*g_549) = p_26;
            }
            (*g_725) = 0x06EEB6C1;
        }
        else
        {
            int32_t l_862 = 0x3554933A;
            (*l_729) = p_26;
            l_767 ^= ((((((safe_add_func_uint8_t_u_u(0x2D, (-7))) || ((safe_sub_func_uint16_t_u_u((**l_729), 2)) , (l_858 != (void*)0))) > (safe_rshift_func_uint8_t_u_s((!l_862), 3))) & ((((((((void*)0 == &l_738) <= (**l_729)) || l_862) & l_862) ^ g_330) , g_9) , g_28)) , g_102) <= (**l_729));
        }
        (*g_841) = (*l_812);
    }
    else
    {
        uint8_t l_869 = 252U;
        int16_t l_901 = 0x470D;
        uint8_t l_939 = 0x44;
        int32_t *****l_956 = &g_841;
        int32_t **l_1006 = &g_390;
        uint32_t l_1048 = 0x00DC6D6A;
        int32_t **l_1059 = &g_390;
        int32_t l_1080 = 9;
        for (g_450 = 0; (g_450 <= 30); ++g_450)
        {
            uint16_t l_865 = 4U;
            int32_t ****l_920 = &g_548;
            int32_t *l_979 = &g_82;
            int16_t l_1065 = 0xC8D4;
            if ((l_865 && ((~(safe_add_func_uint16_t_u_u(((l_869 , g_450) > (safe_rshift_func_uint8_t_u_s((g_545 <= (safe_unary_minus_func_int32_t_s((*p_26)))), ((((((l_869 != g_786) , p_26) != (void*)0) != 2) > l_865) == l_865)))), 0x3CE6))) > l_865)))
            {
                uint16_t l_887 = 3U;
                uint32_t l_926 = 0xD55D8CE4;
                uint8_t l_995 = 8U;
                int32_t *l_1018 = &l_781;
                uint16_t l_1041 = 0xCBDC;
                (*g_725) = l_869;
                if ((((safe_sub_func_int16_t_s_s(((safe_add_func_uint32_t_u_u((((safe_unary_minus_func_uint32_t_u(4294967295U)) <= ((5 || (safe_sub_func_int16_t_s_s(((safe_rshift_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(((((safe_add_func_int32_t_s_s(0x051AD2F5, (g_28 , g_82))) > 0xE336C1B1) & (!(((-1) & (((g_277 , 0x8891) >= l_869) , l_865)) | 0x468BF4C4))) > l_869), (*p_26))), 3)) | 9U), l_865))) , 0U)) < l_887), g_786)) & l_865), g_82)) & g_385) | l_869))
                {
                    uint32_t l_900 = 0x8D098C8D;
                    int32_t *l_902 = &g_82;
                    (*l_902) |= ((safe_rshift_func_int8_t_s_u(0xB6, (g_477 < 0x52DD))) | (safe_rshift_func_int16_t_s_s((((((0x841A != 0xF6BE) <= (((safe_rshift_func_int8_t_s_s(0x0F, 1)) <= l_865) >= ((((safe_lshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_u((safe_mod_func_int32_t_s_s(l_900, l_865)), 3)), 4)) | g_477) < l_901) , (*p_26)))) && g_461) & 0xCF) & l_865), 3)));
                    (*p_26) = (safe_add_func_uint8_t_u_u(((g_713 || (((safe_mod_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((*l_902), 6)), (safe_rshift_func_int16_t_s_s(((((safe_add_func_uint8_t_u_u((~(safe_add_func_int8_t_s_s(0x5F, ((*l_902) , (65527U <= (safe_rshift_func_uint8_t_u_u(g_545, (safe_add_func_int16_t_s_s(((l_887 >= l_901) <= ((*g_841) != (void*)0)), g_9))))))))), (-1))) , g_277) > g_102) ^ 1), 4)))) , (void*)0) == l_920)) <= 0xD9), 0x7D));
                    if ((*p_26))
                    {
                        uint32_t l_925 = 0xAC903C7F;
                        l_926 |= ((*g_725) ^ (safe_rshift_func_int8_t_s_u((g_622 || ((((*l_902) , g_713) & ((void*)0 != &p_26)) <= (((((safe_lshift_func_int16_t_s_u((((((&p_26 == ((*l_902) , &p_26)) > 0x2E) , g_277) ^ (*l_902)) & 0x68), l_887)) || (*p_26)) > g_102) && (*p_26)) >= l_925))), 1)));
                    }
                    else
                    {
                        uint32_t l_927 = 4294967295U;
                        if ((*p_26))
                            break;
                        (*l_729) = (void*)0;
                        (*g_725) = (*l_902);
                        --l_927;
                    }
                }
                else
                {
                    int16_t l_934 = 0x2A4C;
                    int32_t *****l_938 = &l_920;
                    uint32_t l_973 = 0x143F5FBD;
                    for (g_28 = 0; (g_28 > (-18)); g_28 = safe_sub_func_int32_t_s_s(g_28, 8))
                    {
                        int32_t l_935 = 0xFE42344F;
                        l_939 = ((((safe_rshift_func_uint16_t_u_u(l_934, 4)) > l_935) , (safe_mod_func_int8_t_s_s(l_926, 8))) | ((l_926 , l_938) != l_938));
                        (*g_549) = (void*)0;
                        if (g_940)
                            continue;
                        l_935 = (((safe_lshift_func_uint16_t_u_u(g_713, 9)) ^ (((((((safe_add_func_int8_t_s_s(((l_935 || (((((safe_unary_minus_func_int32_t_s((1U >= l_901))) < g_622) , (*l_920)) != (l_869 , (**l_858))) >= (safe_lshift_func_uint16_t_u_s((safe_sub_func_uint32_t_u_u(((safe_sub_func_uint32_t_u_u((safe_mod_func_int8_t_s_s(((0xEB <= g_786) < 3U), g_102)), g_82)) & l_901), 0x769C75D7)), 6)))) != g_330), g_102)) && g_545) <= 0xE9) > g_9) > 9) , 0xC3CF86C1) , 1)) , (*p_26));
                    }
                    l_975 &= ((((safe_add_func_uint8_t_u_u((&g_841 == l_956), (safe_mod_func_int32_t_s_s(((((safe_rshift_func_uint8_t_u_s(254U, 7)) > (((((*g_841) == (l_934 , ((safe_lshift_func_uint8_t_u_s(((safe_unary_minus_func_int32_t_s((g_9 <= g_330))) , ((((+((((((safe_sub_func_int16_t_s_s(((((((safe_rshift_func_uint8_t_u_s((safe_add_func_uint8_t_u_u((((safe_mod_func_int8_t_s_s((&g_390 != (void*)0), g_82)) ^ g_477) && l_887), g_28)), 6)) && 1) > (-1)) < l_926) , (*p_26)) < (*p_26)), l_973)) ^ 6) != g_450) ^ 0xDBD6FB7F) | 0x4F) > 0x83)) > g_9) || g_545) < l_887)), g_940)) , (*l_920)))) <= 4) > 65528U) & g_9)) , g_9) != l_974), g_713)))) , (void*)0) != p_26) && l_887);
                }
                for (g_545 = 18; (g_545 != 53); g_545 = safe_add_func_int32_t_s_s(g_545, 1))
                {
                    int32_t *l_978 = &g_28;
                    l_979 = l_978;
                }
                for (l_767 = 23; (l_767 == 26); l_767 = safe_add_func_int32_t_s_s(l_767, 1))
                {
                    int32_t *l_982 = &l_781;
                    int32_t *l_983 = &g_82;
                    int32_t *l_984 = &g_82;
                    int32_t *l_985 = &g_82;
                    int32_t *l_986 = &g_28;
                    int32_t *l_987 = (void*)0;
                    int32_t *l_988 = &g_82;
                    int32_t *l_989 = (void*)0;
                    int32_t *l_990 = &l_781;
                    int32_t *l_991 = &l_781;
                    int32_t *l_992 = &g_28;
                    int32_t *l_993 = &l_781;
                    int32_t *l_994 = &g_28;
                    int32_t *l_1019 = &g_82;
                    int32_t ****l_1040 = &g_548;
                    --l_995;
                    if ((0xAE525FB5 >= (safe_mod_func_int8_t_s_s((safe_add_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(((!((l_1005 == l_1006) && (l_887 || (safe_add_func_int8_t_s_s((safe_unary_minus_func_uint8_t_u((8 > ((((safe_add_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((safe_mod_func_uint8_t_u_u((((safe_lshift_func_uint8_t_u_s(((l_1018 == l_1019) && (((((safe_lshift_func_int8_t_s_u(((((((safe_lshift_func_int8_t_s_s((*l_1018), (g_713 != g_277))) , 0x8D) > (*l_979)) < 0U) < 0xD9348BBE) ^ g_786), g_28)) || g_9) == 0xE0) <= (*l_1018)) >= (-4))), (*l_986))) | g_713) && 0), g_622)), g_330)), (*l_979))) , g_450) , (void*)0) != p_26)))), (*l_1018)))))) , (*p_26)), (*l_991))), 0x2F)), (*l_1018)))))
                    {
                        int16_t l_1024 = (-1);
                        (*g_549) = &g_82;
                        (*l_1006) = (*g_549);
                        l_1024 |= (*p_26);
                        (*p_26) = ((g_330 <= (((((safe_mul_func_int32_t_s_s(0xAA9D2AA6, ((safe_rshift_func_int8_t_s_u(((((0xE00E <= (((safe_rshift_func_int16_t_s_u((*l_982), 1)) < (*l_1018)) && (*l_1018))) && (safe_rshift_func_uint8_t_u_s(250U, 7))) ^ (safe_lshift_func_uint16_t_u_s(((safe_sub_func_int32_t_s_s((*p_26), ((*l_982) || (**l_1005)))) <= (*l_1018)), (*l_1018)))) > g_940), (*l_1018))) != g_330))) & (**l_1006)) , (**l_956)) == (void*)0) , (**l_1005))) , (*l_1018));
                    }
                    else
                    {
                        int32_t *l_1037 = &g_82;
                        return l_1037;
                    }
                    (*l_1005) = (*g_549);
                    l_1041++;
                }
            }
            else
            {
                int32_t *l_1066 = &l_781;
                int32_t l_1082 = 0x48B04097;
                for (l_837 = 15; (l_837 >= 2); l_837--)
                {
                    uint8_t l_1063 = 249U;
                    int32_t *****l_1064 = &l_920;
                    if ((safe_lshift_func_int8_t_s_u(7, 4)))
                    {
                        int32_t ***l_1060 = &l_1059;
                        (*l_979) = l_1048;
                        (*l_979) = (safe_add_func_int16_t_s_s((safe_mod_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(((void*)0 != (*g_841)), g_622)), ((safe_sub_func_uint32_t_u_u((l_1059 != &p_26), (*p_26))) ^ (((void*)0 != l_1060) == (g_713 ^ 0xB670))))), (-1)));
                        l_1065 &= (safe_sub_func_uint32_t_u_u((g_545 > l_1063), (l_1064 != (void*)0)));
                        (*l_1005) = (**l_1060);
                    }
                    else
                    {
                        uint32_t l_1069 = 0xD2DDFCDC;
                        l_729 = &p_26;
                        (*l_1005) = p_26;
                    }
                    (*g_549) = (void*)0;
                    return (*l_1005);
                }
                l_1082 &= ((safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u((1U < (*l_979)), ((void*)0 != p_26))), (safe_rshift_func_int16_t_s_u(((safe_sub_func_int8_t_s_s((safe_mod_func_int16_t_s_s((((((g_477 || (&p_26 != &g_481)) || ((l_1080 >= (*p_26)) , (*l_979))) , g_786) & g_28) || g_461), 0x2711)), 0)) , 0x4569), (*l_1066))))) != l_1081);
            }
        }
        (*g_725) = (p_26 == p_26);
    }
    (*p_26) = ((((*p_26) , (((g_622 > (safe_rshift_func_int16_t_s_u(((((((*g_725) == 0xECE36A8A) < (g_385 & l_1085)) > ((safe_mod_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_s((((safe_add_func_int32_t_s_s(((*p_26) > l_1092), (*p_26))) == g_713) , 7U), 9)) && g_82), 5)) | 2)) < g_102) < 0), 8))) | l_1093) > l_1085)) <= (*p_26)) , 0xC911DA05);
    l_1094++;
    (*g_725) = ((((g_713 , ((**g_840) == (*g_841))) ^ (safe_mod_func_int32_t_s_s(0, (safe_lshift_func_int16_t_s_s((safe_mod_func_int32_t_s_s(((((safe_sub_func_uint32_t_u_u((safe_sub_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((~(safe_rshift_func_uint16_t_u_s(l_1094, 8))), (*p_26))), ((((!(safe_rshift_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_s((g_330 , (g_9 == (!g_385))), g_9)) ^ g_82), 11))) ^ g_786) || g_477) != 0))), l_1120)) | g_277) || g_9) == 0xFA68), 0x7A1FE74B)), g_330))))) >= 0x773BE9CC) != g_622);
    return p_26;
}
inline static int32_t * func_30(uint16_t p_31, int16_t p_32)
{
    int32_t *l_33 = &g_28;
    int32_t l_34 = 0;
    int32_t *l_35 = &g_28;
    int32_t *l_36 = (void*)0;
    int32_t *l_37 = &l_34;
    int32_t *l_38 = &l_34;
    int32_t *l_39 = &l_34;
    int32_t *l_40 = &g_28;
    int32_t *l_41 = &l_34;
    int32_t *l_42 = &g_28;
    int32_t *l_43 = &g_28;
    int32_t *l_44 = (void*)0;
    int32_t *l_45 = &l_34;
    int32_t *l_46 = &g_28;
    int32_t *l_47 = &g_28;
    int32_t *l_48 = (void*)0;
    int32_t *l_49 = &l_34;
    int32_t *l_50 = &g_28;
    int32_t *l_51 = &l_34;
    int32_t *l_52 = (void*)0;
    int32_t *l_53 = &g_28;
    int32_t l_54 = 0x71081B27;
    int32_t l_55 = (-1);
    int32_t *l_56 = &l_54;
    int32_t *l_57 = (void*)0;
    int32_t *l_58 = &l_34;
    int32_t *l_59 = &l_34;
    int32_t *l_60 = &l_54;
    int32_t *l_61 = &l_34;
    int32_t *l_62 = &l_54;
    int32_t *l_63 = &g_28;
    int32_t *l_64 = &l_34;
    int32_t *l_65 = (void*)0;
    int32_t *l_66 = &l_34;
    int32_t *l_67 = &l_34;
    int32_t *l_68 = &l_54;
    int32_t l_69 = 0x7DDC4EA3;
    int32_t *l_70 = &l_34;
    int32_t *l_71 = &l_34;
    int32_t *l_72 = &l_34;
    int32_t *l_73 = &l_55;
    int32_t *l_74 = &l_69;
    int32_t l_75 = 1;
    int32_t *l_76 = &l_54;
    int32_t *l_77 = &l_34;
    int32_t *l_78 = &l_55;
    int32_t *l_79 = &l_34;
    int32_t *l_80 = &l_69;
    int32_t *l_81 = &l_75;
    int32_t *l_83 = &l_34;
    int32_t *l_84 = (void*)0;
    int32_t *l_85 = &g_28;
    int32_t *l_86 = (void*)0;
    int32_t l_87 = (-7);
    int32_t l_88 = 1;
    int32_t *l_89 = (void*)0;
    int32_t *l_90 = &g_28;
    int32_t *l_91 = &l_87;
    int32_t l_92 = 0;
    int32_t l_93 = 0x3A6950E6;
    int32_t *l_94 = &l_75;
    int32_t *l_95 = &l_87;
    int32_t l_96 = (-7);
    int32_t *l_97 = &l_93;
    int32_t *l_98 = &l_69;
    int32_t l_99 = 0x18CD8B12;
    int32_t l_100 = 0x9B4DB59F;
    int32_t l_101 = 7;
    int32_t *l_723 = &l_55;
    int32_t *l_724 = &l_55;
    g_102--;
    (*g_549) = func_105((safe_rshift_func_uint8_t_u_s(((((safe_unary_minus_func_int16_t_s(((func_112(func_114((func_117(&l_87, (*l_50), p_32) , &l_75), (safe_rshift_func_int8_t_s_u((((((void*)0 == &l_76) <= ((-1) ^ ((((safe_lshift_func_int16_t_s_s(((((&l_69 == &g_28) >= g_28) & p_32) & g_102), (*l_76))) ^ p_32) , &g_27) == &l_67))) , p_31) , 1), p_31)))) | g_9) , p_31))) || g_9) < g_461) < 1U), 7)), &l_69, g_385);
    return g_725;
}
inline static int32_t * func_105(uint32_t p_106, int32_t * p_107, int8_t p_108)
{
    int32_t ***l_556 = &g_549;
    int32_t l_612 = 0x7E2D96D4;
    int32_t l_694 = 0;
    (*g_549) = (*g_549);
    for (p_108 = 20; (p_108 == (-17)); p_108--)
    {
        int32_t l_574 = 0;
        int8_t l_581 = 0x6C;
        int32_t l_625 = 0x8533E3FD;
        int32_t l_629 = 0xC31B24D9;
        int32_t *l_650 = &l_625;
        int32_t l_653 = 0x501C377F;
        int32_t **l_677 = &l_650;
        uint16_t l_695 = 0xB6EA;
        uint16_t l_702 = 9U;
        int32_t l_715 = 3;
    }
    for (g_102 = 0; (g_102 == 4); g_102 = safe_add_func_int16_t_s_s(g_102, 4))
    {
        int8_t l_719 = (-1);
        int32_t ***l_722 = &g_549;
        (***l_556) |= ((0xBC >= g_622) ^ (((safe_unary_minus_func_int8_t_s((p_106 & l_719))) , (safe_lshift_func_uint16_t_u_s((251U != p_108), ((-1) || (l_722 != &g_549))))) > 0xE46391FA));
    }
    (***l_556) = 0x216D08B1;
    return p_107;
}
static int32_t func_112(int32_t * p_113)
{
    uint8_t l_342 = 251U;
    int32_t **l_346 = &g_27;
    int32_t l_387 = (-4);
    int16_t l_403 = 0xD801;
    int32_t l_480 = 0x922DFDF0;
    int32_t l_503 = (-3);
    int32_t l_504 = (-1);
    uint16_t l_552 = 1U;
    for (g_277 = 20; (g_277 != 38); g_277 = safe_add_func_uint16_t_u_u(g_277, 9))
    {
        uint8_t l_345 = 255U;
        l_342++;
        (*g_27) = l_345;
    }
    (*l_346) = (void*)0;
    for (g_28 = 29; (g_28 < (-15)); g_28 = safe_sub_func_int16_t_s_s(g_28, 1))
    {
        int32_t **l_349 = &g_27;
        int32_t ***l_350 = &l_349;
        int32_t *l_351 = (void*)0;
        int32_t *l_352 = &g_82;
        (*l_350) = l_349;
        (*l_352) &= (4 != ((void*)0 != l_346));
        g_82 = (*p_113);
        (**l_350) = p_113;
    }
    if (((safe_rshift_func_int16_t_s_s((l_342 ^ (l_342 > ((((((*p_113) || (safe_rshift_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((&g_82 == (void*)0), (g_330 , (*p_113)))), 1))) && (l_342 > (&g_27 == (void*)0))) , (void*)0) == &g_27) && 248U))), 5)) , (*p_113)))
    {
        int32_t l_361 = (-1);
        uint8_t l_383 = 254U;
        uint16_t l_384 = 65535U;
        int32_t ***l_386 = &l_346;
        uint8_t l_499 = 0x22;
        int32_t l_510 = 0x52C26C8E;
        int32_t l_513 = 4;
        int32_t l_530 = (-5);
        l_387 = (0xCD && ((safe_lshift_func_int8_t_s_s(((l_361 > ((((*p_113) && (safe_add_func_uint8_t_u_u((((((safe_mod_func_uint16_t_u_u((0x59C5 && (((*p_113) & (((((safe_rshift_func_int16_t_s_u((((((safe_lshift_func_int8_t_s_s(((((((void*)0 == &l_346) == ((safe_mod_func_int32_t_s_s((safe_sub_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((!l_342), (safe_lshift_func_uint16_t_u_s(((safe_mod_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(g_102, 4)), g_277)) , l_342), g_102)))), l_383)), 0x038DEA13)) | 1)) == l_383) && g_330) | l_384), g_277)) == l_342) >= l_383) < l_361) ^ 4U), g_9)) , 0U) >= l_383) < l_384) ^ g_102)) <= g_385)), g_82)) , (*p_113)) , (void*)0) != l_386) & 0x68), g_330))) && g_102) & 5)) | l_384), 1)) || 0x23));
        (*l_346) = (*l_346);
        if (g_9)
        {
            uint8_t l_414 = 0xB2;
            int32_t l_431 = (-6);
            int32_t l_457 = 0;
            if ((*p_113))
            {
                uint16_t l_413 = 0x1E5C;
                (*l_346) = (*l_346);
                for (g_28 = 0; (g_28 <= (-27)); g_28--)
                {
                    (*l_346) = &g_82;
                    if ((**l_346))
                        continue;
                    (**l_386) = g_390;
                }
                for (g_277 = (-18); (g_277 > 9); g_277 = safe_add_func_uint32_t_u_u(g_277, 9))
                {
                    int32_t l_395 = 0xEFC71797;
                    int32_t *l_412 = &l_361;
                    (*l_412) = (safe_lshift_func_int16_t_s_u(l_395, (~(((safe_mod_func_int8_t_s_s(g_277, ((safe_mod_func_int8_t_s_s(0x89, (0x7298 && ((((safe_mod_func_int16_t_s_s(0x7EC6, l_403)) , (((safe_mod_func_uint32_t_u_u((safe_mod_func_int32_t_s_s(((safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(((void*)0 != &g_82), (l_412 == (*l_346)))), l_413)) , l_414), 0xBE1962AD)), g_9)) <= g_330) , g_277)) ^ 2U) | (-5))))) && 1U))) & (*p_113)) != g_277))));
                }
            }
            else
            {
                int32_t *l_415 = &l_361;
                int32_t *l_416 = &l_361;
                int32_t *l_417 = (void*)0;
                int32_t *l_418 = &l_361;
                int32_t *l_419 = &g_82;
                int32_t *l_420 = &g_82;
                int32_t *l_421 = &g_82;
                int32_t *l_422 = &g_82;
                int32_t *l_423 = &l_361;
                int32_t *l_424 = &l_361;
                int32_t *l_425 = &g_28;
                int32_t *l_426 = &l_361;
                int32_t *l_427 = (void*)0;
                int32_t *l_428 = &g_82;
                int32_t *l_429 = (void*)0;
                int32_t *l_430 = &l_361;
                int32_t *l_432 = &g_28;
                int32_t *l_433 = (void*)0;
                int32_t *l_434 = &l_361;
                int32_t *l_435 = &g_28;
                int32_t l_436 = 0x92A1E79B;
                int32_t *l_437 = &l_436;
                int32_t *l_438 = &l_361;
                int32_t *l_439 = &g_28;
                int32_t *l_440 = &l_436;
                int32_t *l_441 = &g_82;
                int32_t *l_442 = (void*)0;
                int32_t *l_443 = &l_436;
                int32_t *l_444 = &g_82;
                int32_t *l_445 = (void*)0;
                int32_t *l_446 = (void*)0;
                int32_t *l_447 = &l_361;
                int32_t *l_448 = &g_82;
                int32_t *l_449 = &g_82;
                g_450++;
                for (l_431 = 13; (l_431 <= (-3)); l_431 = safe_sub_func_int16_t_s_s(l_431, 1))
                {
                    int32_t *l_458 = &l_361;
                    int32_t l_459 = 1;
                    int32_t *l_460 = &l_361;
                    int32_t *l_462 = &l_459;
                    int32_t *l_463 = &l_457;
                    int32_t *l_464 = &g_82;
                    int32_t *l_465 = &g_28;
                    int32_t *l_466 = &g_28;
                    int32_t *l_467 = &l_436;
                    int32_t *l_468 = &l_459;
                    int32_t *l_469 = &l_457;
                    int32_t *l_470 = (void*)0;
                    int32_t *l_471 = &g_28;
                    int32_t *l_472 = (void*)0;
                    int32_t *l_473 = &g_28;
                    int32_t *l_474 = &l_361;
                    int32_t *l_475 = &l_361;
                    int32_t *l_476 = &l_361;
                    for (g_102 = 0; (g_102 < 48); g_102 = safe_add_func_int16_t_s_s(g_102, 3))
                    {
                        if ((*l_423))
                            break;
                    }
                    ++g_477;
                }
                (*l_421) = l_480;
            }
            (**l_386) = &g_28;
            l_431 ^= (safe_lshift_func_int8_t_s_u(((safe_sub_func_uint32_t_u_u(((g_385 >= ((2 & g_450) >= ((**l_386) == &l_431))) , (**l_346)), (safe_add_func_int32_t_s_s((g_28 || ((((safe_mod_func_uint32_t_u_u((**l_346), ((safe_lshift_func_int8_t_s_s((+l_414), g_385)) && 1U))) < g_477) || (***l_386)) && 0xD2A1)), (-2))))) && 0xB33F), l_414));
            for (l_431 = (-23); (l_431 < (-15)); ++l_431)
            {
                uint8_t l_495 = 255U;
            }
        }
        else
        {
            int32_t l_496 = 3;
            int32_t *l_502 = &g_82;
            int32_t *l_505 = &l_496;
            int32_t *l_506 = &g_28;
            int32_t *l_507 = (void*)0;
            int32_t *l_508 = &l_361;
            int32_t *l_509 = &l_503;
            int32_t *l_511 = (void*)0;
            int32_t *l_512 = &l_496;
            int32_t *l_514 = &l_503;
            int32_t *l_515 = &l_504;
            int32_t *l_516 = &g_28;
            int32_t *l_517 = &l_361;
            int32_t *l_518 = &l_513;
            int32_t *l_519 = &g_28;
            int32_t *l_520 = &l_513;
            int32_t *l_521 = &g_28;
            int32_t *l_522 = &g_82;
            int32_t *l_523 = &g_28;
            int32_t *l_524 = &l_496;
            int32_t *l_525 = &l_510;
            int32_t *l_526 = (void*)0;
            int32_t *l_527 = (void*)0;
            int32_t *l_528 = &l_503;
            int32_t *l_529 = &l_513;
            int32_t *l_531 = &l_361;
            int32_t *l_532 = &l_530;
            int32_t *l_533 = &l_513;
            int32_t *l_534 = &g_82;
            int32_t *l_535 = &l_361;
            int32_t *l_536 = &l_496;
            int32_t *l_537 = &l_504;
            int32_t *l_538 = &g_28;
            int32_t *l_539 = &l_496;
            int32_t *l_540 = &l_530;
            int32_t *l_541 = &g_82;
            int32_t *l_542 = &l_530;
            int32_t *l_543 = &g_28;
            int32_t *l_544 = (void*)0;
            int32_t ****l_550 = &l_386;
            if (((&p_113 == &p_113) <= ((l_496 , 9U) == ((((safe_rshift_func_uint16_t_u_u(l_499, 11)) ^ ((l_502 == (void*)0) <= (l_361 , (((g_28 && (*l_502)) , l_480) > (*l_502))))) , 0xFC92) <= (-1)))))
            {
                (**l_386) = (void*)0;
            }
            else
            {
                return (*l_502);
            }
            --g_545;
            (*l_532) &= ((*l_517) , (0x6BD0 > 65535U));
            (*l_550) = g_548;
        }
    }
    else
    {
        int32_t ****l_551 = &g_548;
        (*l_551) = (void*)0;
        (**g_549) = 7;
    }
    return l_552;
}
static int32_t * func_114(int32_t * p_115, int16_t p_116)
{
    int32_t **l_155 = &g_27;
    int8_t l_175 = 0xF3;
    int16_t l_193 = 0xBD0B;
    int32_t l_292 = (-1);
    int32_t l_295 = (-1);
    int32_t l_315 = 0xB7FA829B;
    (**l_155) = ((~g_9) , ((safe_rshift_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((&p_115 == l_155), ((+(safe_add_func_int8_t_s_s(p_116, (((**l_155) , p_115) != (void*)0)))) | (safe_lshift_func_int8_t_s_u(0x2B, 1))))), 15)) || (((p_115 != (void*)0) != 0xE3) | (*g_27))));
    for (p_116 = 18; (p_116 > 3); p_116 = safe_sub_func_uint32_t_u_u(p_116, 9))
    {
        int32_t *l_184 = &g_82;
        uint32_t l_213 = 0xEBA28959;
        int32_t l_238 = 1;
        int32_t *l_280 = (void*)0;
        int32_t *l_281 = &g_28;
        int32_t *l_282 = &g_82;
        int32_t *l_283 = &g_28;
        int32_t *l_284 = &g_82;
        int32_t *l_285 = &g_28;
        int32_t *l_286 = &g_82;
        int32_t l_287 = 0;
        int32_t *l_288 = (void*)0;
        int32_t *l_289 = &l_287;
        int32_t l_290 = 9;
        int32_t *l_291 = (void*)0;
        int32_t *l_293 = (void*)0;
        int32_t *l_294 = &l_290;
        int32_t *l_296 = (void*)0;
        int32_t *l_297 = &g_28;
        int32_t *l_298 = &l_295;
        int32_t *l_299 = &l_238;
        int32_t *l_300 = &l_295;
        int32_t *l_301 = &l_287;
        int32_t *l_302 = &g_82;
        int32_t *l_303 = (void*)0;
        int32_t *l_304 = &g_28;
        int32_t *l_305 = &l_290;
        int32_t *l_306 = (void*)0;
        int32_t l_307 = (-3);
        int32_t *l_308 = &g_82;
        int32_t *l_309 = &l_292;
        int32_t *l_310 = &l_287;
        int32_t *l_311 = &g_82;
        int32_t *l_312 = &g_28;
        int32_t *l_313 = &g_82;
        int32_t *l_314 = &l_238;
        int32_t *l_316 = &l_292;
        int32_t *l_317 = (void*)0;
        int32_t *l_318 = &g_82;
        int32_t *l_319 = &l_290;
        int32_t *l_320 = &g_82;
        int32_t *l_321 = &l_290;
        int32_t *l_322 = (void*)0;
        int32_t *l_323 = &l_287;
        int32_t *l_324 = &l_287;
        int32_t *l_325 = &g_82;
        int32_t *l_326 = &l_287;
        int32_t *l_327 = &g_28;
        int32_t l_328 = (-4);
        int32_t *l_329 = &l_328;
        int32_t *l_335 = (void*)0;
        if ((safe_add_func_uint16_t_u_u(p_116, (safe_lshift_func_uint16_t_u_s((**l_155), ((safe_add_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((((((((safe_mod_func_int16_t_s_s(g_102, (l_175 ^ 0x12964217))) && ((safe_sub_func_int16_t_s_s(0x485D, (0x27 | (safe_rshift_func_int16_t_s_u((((safe_add_func_int8_t_s_s(((((((safe_sub_func_uint8_t_u_u((l_184 != ((safe_sub_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_u((((*p_115) <= (*l_184)) && 0), 1)), 3)), g_82)), p_116)) , p_115)), p_116)) , (*g_27)) == g_102) , p_116) != (*l_184)) <= (*p_115)), g_82)) >= 3U) > (*l_184)), 14))))) && g_82)) > (*g_27)) && (*g_27)) , 0x0AA6A4DF) >= 0xF98C0194) , (**l_155)), (-8))), 0xA0)), (*l_184))) < l_193))))))
        {
            int16_t l_196 = (-1);
            (*l_184) = ((((void*)0 == &p_115) > g_82) , ((0x99C725F5 <= (safe_sub_func_uint16_t_u_u(0x1F1E, l_196))) < 0x07));
            (**l_155) = (safe_add_func_int32_t_s_s((*g_27), 0xFEA996BB));
        }
        else
        {
            uint32_t l_201 = 4294967290U;
            int32_t **l_206 = &l_184;
            uint8_t l_214 = 0x41;
            int32_t l_264 = 7;
            int32_t l_266 = (-10);
            int32_t l_269 = 0xC57027B0;
            if (((((safe_lshift_func_uint16_t_u_u(p_116, 9)) < (((((l_201 , (0x73 >= (((safe_rshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_s(((void*)0 != l_206), (((safe_sub_func_uint16_t_u_u((**l_206), (safe_add_func_uint32_t_u_u((safe_sub_func_int8_t_s_s(((void*)0 != &p_115), ((((((((2 >= g_28) && (*l_184)) ^ 65528U) , l_213) & g_102) || g_102) && (**l_155)) || p_116))), 4294967287U)))) , &g_82) == &g_28))), 2)) ^ p_116) | (**l_206)))) | 0xB484) , &g_28) == (void*)0) && p_116)) | (-3)) & 4294967289U))
            {
                l_214--;
                (**l_206) |= (p_115 == (void*)0);
            }
            else
            {
                int32_t **l_217 = &g_27;
                int32_t l_236 = 0x39AD12C7;
                int32_t l_249 = 0x2BB3BD2D;
                int32_t l_258 = (-4);
                int8_t l_259 = 0x54;
                (*l_206) = p_115;
                if ((l_206 != l_217))
                {
                    (*l_155) = p_115;
                    return p_115;
                }
                else
                {
                    int32_t **l_225 = &l_184;
                    (*g_27) = (((((((safe_unary_minus_func_int8_t_s(((safe_lshift_func_int8_t_s_s((((safe_lshift_func_uint16_t_u_s(((safe_lshift_func_uint8_t_u_s(((g_82 , l_225) == (void*)0), 4)) > g_82), ((p_116 , g_9) , (safe_add_func_uint16_t_u_u(0U, ((safe_lshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u((g_9 && ((safe_rshift_func_uint8_t_u_s(((!0xD5) | g_102), p_116)) | g_102)), 3)), 6)) < 0xB333)))))) & p_116) , p_116), 1)) == g_102))) < p_116) , (*l_217)) == &g_28) >= (**l_206)) >= p_116) != 0xE3592EE3);
                    (**l_206) &= (*g_27);
                    if ((*p_115))
                    {
                        int32_t *l_235 = &g_82;
                        (*l_155) = l_235;
                        return &g_28;
                    }
                    else
                    {
                        int32_t *l_237 = &g_82;
                        int32_t *l_239 = &g_82;
                        int32_t *l_240 = &l_236;
                        int32_t *l_241 = &l_238;
                        int32_t *l_242 = &l_238;
                        int32_t *l_243 = &g_82;
                        int32_t *l_244 = &l_236;
                        int32_t *l_245 = &g_82;
                        int32_t *l_246 = &l_236;
                        int32_t *l_247 = &l_238;
                        int32_t *l_248 = &g_82;
                        int32_t *l_250 = (void*)0;
                        int32_t l_251 = 0;
                        int32_t *l_252 = &l_236;
                        int32_t *l_253 = &l_249;
                        int32_t *l_254 = &l_236;
                        int32_t *l_255 = &l_251;
                        int32_t *l_256 = (void*)0;
                        int32_t *l_257 = &l_236;
                        int32_t *l_260 = &l_251;
                        int32_t *l_261 = &l_238;
                        int32_t *l_262 = &l_258;
                        int32_t *l_263 = &l_238;
                        int32_t *l_265 = &l_238;
                        int32_t *l_267 = &l_251;
                        int32_t *l_268 = (void*)0;
                        int32_t *l_270 = &g_28;
                        int32_t *l_271 = &l_251;
                        int32_t *l_272 = &g_28;
                        int32_t *l_273 = &l_266;
                        int32_t *l_274 = (void*)0;
                        int32_t *l_275 = &l_264;
                        int32_t *l_276 = (void*)0;
                        --g_277;
                        (*l_239) = (**l_155);
                    }
                }
                (*l_217) = &g_28;
            }
            (*l_206) = (void*)0;
            if (l_213)
                continue;
        }
        --g_330;
        (*l_299) ^= (safe_lshift_func_uint16_t_u_u(((((**l_155) != ((&g_28 != l_335) , (p_116 | ((*p_115) & (safe_sub_func_int16_t_s_s((((&g_27 != l_155) >= (safe_add_func_uint8_t_u_u(((((g_277 , ((((void*)0 != &p_115) , p_115) != &g_82)) > g_28) == (**l_155)) != (**l_155)), p_116))) | p_116), 0x4585)))))) || (*g_27)) && (*p_115)), g_277));
    }
    return &g_28;
}
inline static int32_t func_117(int32_t * p_118, uint32_t p_119, int32_t p_120)
{
    int32_t *l_123 = &g_28;
    int8_t l_144 = 0;
    int32_t l_145 = 0x7676DC04;
    for (p_119 = (-11); (p_119 > 42); ++p_119)
    {
        int32_t **l_124 = &l_123;
        int8_t l_142 = 1;
        int8_t l_143 = 0xA7;
        (*l_124) = l_123;
        (*p_118) = 0x3884E3EE;
        l_145 ^= (safe_sub_func_uint16_t_u_u((((+2) || (((((((safe_add_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u((l_124 != &g_27), (safe_sub_func_uint8_t_u_u(p_119, (p_118 != p_118))))), ((safe_add_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((safe_mod_func_int16_t_s_s(((((safe_rshift_func_int8_t_s_s(l_142, (0x9A || g_9))) != 4294967287U) <= 1U) | g_28), l_143)), l_144)), (**l_124))) | g_28))) > p_120) ^ (**l_124)) < 0x5AEF2735) == p_119) ^ g_28) >= (*l_123))) >= g_28), g_28));
    }
    return g_28;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    g_27 = 0;
    csmith_sink_ = g_9;
    csmith_sink_ = g_28;
    csmith_sink_ = g_82;
    csmith_sink_ = g_102;
    csmith_sink_ = g_277;
    csmith_sink_ = g_330;
    csmith_sink_ = g_385;
    csmith_sink_ = g_450;
    csmith_sink_ = g_461;
    csmith_sink_ = g_477;
    csmith_sink_ = g_545;
    csmith_sink_ = g_622;
    csmith_sink_ = g_713;
    csmith_sink_ = g_786;
    csmith_sink_ = g_940;
    csmith_sink_ = g_1160;
    csmith_sink_ = g_1166;
    platform_main_end(0,0);
    return 0;
}
