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
static int32_t g_2 = 4L;
static int8_t g_51 = 0x64L;
static int8_t g_53 = 0x93L;
static int32_t g_59 = 0xBB5FB49AL;
static uint32_t g_63 = 9UL;
static uint32_t g_142 = 0UL;
static uint8_t g_153 = 250UL;
static uint16_t g_172 = 0xE3D0L;
static int8_t g_286 = 7L;
static int32_t g_287 = (-1L);
static uint32_t g_288 = 0UL;
static int16_t g_311 = 0x124BL;
static uint32_t g_362 = 0x735A53A1L;
static int32_t g_522 = 0xB1A930ACL;
static uint16_t g_574 = 7UL;
static uint16_t g_577 = 0xBD0BL;
static uint32_t g_716 = 0x270CE445L;
static int32_t g_768 = 0L;
static int16_t g_769 = (-2L);
static uint16_t g_771 = 65528UL;
static int16_t g_805 = 0x2F89L;
static uint16_t g_806 = 65526UL;
static int32_t g_940 = 0x6C014928L;
static uint32_t g_983 = 0xECBFB99FL;
static uint32_t func_1(void);
static int8_t func_3(int32_t p_4, uint8_t p_5, int32_t p_6, int32_t p_7, int16_t p_8);
inline static int32_t func_9(int32_t p_10, int16_t p_11);
static int32_t func_13(int32_t p_14, int32_t p_15, int32_t p_16, int32_t p_17, int32_t p_18);
inline static int32_t func_22(int16_t p_23, int16_t p_24, int32_t p_25, int16_t p_26, int16_t p_27);
static uint8_t func_35(int16_t p_36, uint32_t p_37, int8_t p_38);
static int8_t func_41(int32_t p_42, uint32_t p_43, uint16_t p_44, int16_t p_45);
inline static uint16_t func_46(int32_t p_47);
inline static int32_t func_66(int32_t p_67, uint32_t p_68);
inline static int8_t func_73(int16_t p_74, uint8_t p_75);
static uint32_t func_1(void)
{
    uint8_t l_12 = 1UL;
    uint32_t l_387 = 0x57D3ECDBL;
    int16_t l_912 = (-1L);
    int32_t l_919 = 1L;
    int32_t l_921 = 1L;
    uint32_t l_945 = 18446744073709551615UL;
    if ((g_2 != func_3(func_9(l_12, g_2), (g_2 || (((((safe_sub_func_int8_t_s_s(((((l_12 == (safe_div_func_uint32_t_u_u(((safe_div_func_int16_t_s_s(g_2, ((safe_lshift_func_int16_t_s_u((((safe_div_func_int16_t_s_s(((safe_rshift_func_int16_t_s_u((safe_sub_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((((safe_sub_func_uint32_t_u_u(l_12, ((safe_add_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u(l_12, l_387)) == l_387), g_362)) & l_387))) < (-1L)) || g_53), g_53)), g_362)), g_53)) <= l_387), 0xD4F5L)) && (-1L)) || l_387), 2)) || 0x721220F7L))) <= g_153), 0x3FD0BA7AL))) != g_2) && l_387) > 0xCCL), l_12)) ^ l_12) <= l_387) & 0L) <= l_387)), l_12, l_12, g_311)))
    {
        uint16_t l_915 = 0xAEAAL;
        int32_t l_920 = (-1L);
        g_59 &= g_287;
        for (g_311 = 0; (g_311 > (-21)); g_311 = safe_sub_func_uint32_t_u_u(g_311, 9))
        {
            uint16_t l_916 = 65530UL;
            for (g_805 = 0; (g_805 <= 0); g_805++)
            {
                int16_t l_905 = (-6L);
                g_768 &= 0xEBE50E91L;
                g_768 ^= (safe_mod_func_int32_t_s_s((safe_sub_func_int32_t_s_s((l_905 && ((((-8L) >= (safe_rshift_func_int16_t_s_s(3L, (l_905 != g_806)))) <= g_806) & (safe_add_func_int32_t_s_s((((safe_add_func_int8_t_s_s(l_912, (0L >= ((safe_mod_func_uint8_t_u_u((g_288 & g_522), 248UL)) != g_771)))) < l_915) != g_59), 0UL)))), g_286)), l_916));
            }
            g_59 = (safe_rshift_func_uint16_t_u_s((g_51 & l_919), 5));
            if (l_915)
                continue;
            l_920 = 0x46F4F246L;
        }
        l_921 = 0x90B6658EL;
    }
    else
    {
        int16_t l_922 = 1L;
        uint16_t l_933 = 0xE6EDL;
        g_768 = l_922;
        g_59 = (safe_add_func_uint16_t_u_u((safe_unary_minus_func_uint8_t_u((((safe_unary_minus_func_int16_t_s((safe_add_func_uint8_t_u_u(g_153, (safe_mod_func_int16_t_s_s((g_771 && (safe_rshift_func_uint16_t_u_u((l_933 && g_2), l_922))), l_921)))))) & (0x03L != (safe_rshift_func_uint16_t_u_u(g_769, 1)))) != (safe_div_func_uint8_t_u_u((g_806 || l_919), g_771))))), 65526UL));
        g_768 = (safe_rshift_func_int8_t_s_s(g_940, 6));
    }
    if ((safe_div_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(l_945, (safe_div_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_s(l_921, 3)), (~(safe_add_func_uint8_t_u_u(255UL, (safe_lshift_func_int8_t_s_s((g_59 <= g_153), 6))))))) >= ((safe_div_func_int32_t_s_s(g_769, ((0x39B9L != (safe_rshift_func_uint8_t_u_s((safe_sub_func_uint32_t_u_u(g_153, (((safe_div_func_int16_t_s_s(((!((((safe_unary_minus_func_int16_t_s((safe_lshift_func_int8_t_s_u((l_12 | l_387), l_912)))) > g_574) == 0L) > g_574)) <= 247UL), g_805)) && g_522) & g_940))), g_716))) ^ l_387))) < g_53)), 250UL)))), g_768)))
    {
        int32_t l_981 = 0x45ADCE26L;
        l_981 = ((safe_add_func_uint32_t_u_u(l_919, (safe_sub_func_uint32_t_u_u(g_362, g_2)))) == ((safe_add_func_uint8_t_u_u(255UL, (safe_mod_func_uint32_t_u_u((((safe_rshift_func_uint8_t_u_u(((g_805 || ((((safe_div_func_uint8_t_u_u(((l_981 == (((g_522 >= (l_981 | ((((safe_unary_minus_func_int8_t_s(0x1DL)) <= l_981) | l_912) <= 0x17L))) & (-1L)) > l_981)) | 65529UL), g_940)) >= g_59) || l_945) < g_53)) ^ l_12), g_940)) | l_919) & g_63), g_769)))) > 1L));
    }
    else
    {
        ++g_983;
        return g_142;
    }
    return g_51;
}
static int8_t func_3(int32_t p_4, uint8_t p_5, int32_t p_6, int32_t p_7, int16_t p_8)
{
    uint32_t l_403 = 0x65715371L;
    int32_t l_672 = 0x150F1E49L;
    uint16_t l_697 = 0xC25BL;
    int32_t l_702 = 0x860C42ACL;
    int32_t l_715 = (-1L);
    int32_t l_790 = 1L;
    int32_t l_792 = 8L;
    int32_t l_793 = 0xCC4A8F72L;
    int32_t l_794 = 1L;
    int16_t l_809 = 0L;
    int8_t l_826 = 0x2DL;
    uint16_t l_831 = 65535UL;
    uint32_t l_859 = 4294967295UL;
    for (p_8 = 29; (p_8 <= (-12)); --p_8)
    {
        uint16_t l_402 = 65530UL;
        int32_t l_404 = 0L;
        int16_t l_523 = 0x7B7DL;
        int32_t l_789 = 1L;
        int16_t l_800 = 0xDB7AL;
        int32_t l_801 = (-1L);
        int32_t l_803 = 0x56533C95L;
        uint8_t l_854 = 0UL;
        uint8_t l_875 = 255UL;
        l_404 &= ((((safe_add_func_int16_t_s_s((((safe_mod_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_u(p_4, 0)) != p_7), ((p_8 >= ((((safe_lshift_func_uint16_t_u_u((p_5 < (safe_rshift_func_uint8_t_u_s((safe_add_func_uint32_t_u_u(((65530UL || (-1L)) & ((((l_402 >= g_53) < p_8) < 8UL) && g_59)), 7UL)), p_5))), 0)) == l_402) != 1L) == l_403)) && l_402))) > 0x3AE0L) || l_402), p_6)) ^ l_402) == 4294967295UL) > p_7);
        if ((safe_div_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((((l_402 > (((0xEE52L > (((7L >= (safe_div_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((safe_add_func_int32_t_s_s((safe_mod_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u(g_311, (safe_rshift_func_int16_t_s_s(((+(safe_unary_minus_func_uint32_t_u((!(safe_sub_func_uint8_t_u_u(((p_8 <= (g_53 > (safe_add_func_uint16_t_u_u(g_2, ((p_4 <= g_2) & g_288))))) && 0xFBL), 1L)))))) && 0xD3L), p_4)))), 1UL)), g_53)), l_403)), p_6))) <= p_7) || 7L)) < p_5) < l_404)) >= g_53) ^ 6L), g_53)), 5L)))
        {
            uint8_t l_449 = 0x48L;
            int8_t l_520 = (-1L);
            uint8_t l_521 = 0xB5L;
            int16_t l_673 = 0L;
            if ((safe_add_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((-1L), (safe_sub_func_uint32_t_u_u(0x27760F31L, (((safe_lshift_func_uint16_t_u_u((0x231FCB92L | (1UL >= (~((p_7 < ((safe_lshift_func_uint16_t_u_u(((((((safe_mod_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((safe_sub_func_int8_t_s_s((1UL & (((safe_rshift_func_int8_t_s_u(g_51, 4)) < 0x8F18L) == l_403)), g_2)), 7)), l_402)) == g_2) > (-1L)) | l_403) < g_286) <= 0xB5L), 13)) != l_404)) > l_402)))), 14)) | l_449) & 0L))))), p_4)))
            {
                int32_t l_454 = (-4L);
                g_59 = (p_6 <= (safe_rshift_func_uint16_t_u_s(((safe_rshift_func_int8_t_s_s((((g_286 || 0xC8L) <= l_454) > (p_5 ^ ((g_172 && l_403) > (safe_lshift_func_uint16_t_u_u(p_7, ((g_2 | 0x55DAL) & l_403)))))), 6)) | 0x0FL), g_288)));
                p_4 = g_2;
            }
            else
            {
                uint32_t l_464 = 18446744073709551612UL;
                l_404 = (~((safe_add_func_int32_t_s_s((((safe_rshift_func_int8_t_s_u(l_464, 4)) ^ (((safe_sub_func_uint8_t_u_u(((l_464 ^ (safe_rshift_func_int16_t_s_s(((safe_mod_func_int32_t_s_s((((safe_rshift_func_int16_t_s_s(((((((((0xCA4FL && (((safe_rshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(0xC4L, 5)), p_8)) >= g_2) | (safe_rshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_s(((((0x1F33E96EL < ((safe_mod_func_uint32_t_u_u((l_449 < l_449), 0x60B0DC34L)) == 0x3EL)) != (-8L)) && 0x0D79L) < 0x9DE05E41L), g_311)), g_142)))) > p_4) > 0xB879L) > l_449) | p_5) != g_311) | g_287) != p_4), p_7)) || 0xC9911B01L) <= p_8), l_449)) == 1UL), g_153))) > 0xA570L), g_288)) == l_403) & 1L)) <= 0xA1B39F6DL), p_4)) || p_6));
                g_59 &= (((safe_sub_func_int32_t_s_s((p_7 < (safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_s(((~(safe_add_func_int16_t_s_s(l_464, (-6L)))) || (g_362 && 0xD6L)), l_402)), 10))), 1UL)) & (safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_s(g_286, 0)), (safe_rshift_func_int16_t_s_u((p_4 >= g_53), g_172))))) & l_449);
            }
            if (l_402)
                break;
            for (g_153 = (-8); (g_153 != 36); g_153 = safe_add_func_uint8_t_u_u(g_153, 4))
            {
                uint32_t l_545 = 1UL;
                if (((65535UL >= (safe_rshift_func_int16_t_s_u(p_5, (safe_mod_func_int32_t_s_s((safe_rshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(g_172, 2)), (((safe_rshift_func_uint8_t_u_s((((((safe_lshift_func_uint8_t_u_s((((safe_add_func_uint32_t_u_u(((p_7 && g_142) || (safe_add_func_int8_t_s_s((g_51 & ((safe_rshift_func_int8_t_s_s(((safe_div_func_uint8_t_u_u(l_402, (-1L))) != ((((g_287 <= g_51) == 1UL) ^ 0xAD60L) == 0xD8L)), l_403)) > l_520)), 0x0EL))), 0xEC5E385FL)) && l_521) == g_522), 7)) | l_404) || (-1L)) & l_523) < 0x2BE5E30AL), 4)) | g_59) == 4294967295UL))), g_153))))) && p_4))
                {
                    if ((safe_mod_func_uint16_t_u_u((!p_8), g_172)))
                    {
                        uint32_t l_534 = 0x512BAA61L;
                        g_59 = (safe_rshift_func_int16_t_s_u((g_172 == (g_288 > (g_59 <= (((0x8CC1L && (safe_lshift_func_int16_t_s_u((safe_mod_func_int8_t_s_s((((~(g_172 ^ ((((l_534 ^ ((0x4B7D85DBL <= (0x7AF7L ^ ((safe_sub_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s((0xD5L < p_5), l_534)), g_63)) != p_5))) == 255UL)) == l_449) & p_8) && g_522))) != 0x24D0L) >= g_522), g_53)), g_311))) > l_403) || p_5)))), l_520));
                        g_59 = ((0UL | ((((safe_lshift_func_uint8_t_u_u((safe_div_func_int8_t_s_s((((safe_lshift_func_int16_t_s_u(((l_545 || (p_8 >= (safe_rshift_func_int16_t_s_u(((!(safe_lshift_func_uint16_t_u_s((safe_div_func_uint16_t_u_u((((l_534 < (safe_rshift_func_int16_t_s_u(0x4D9DL, 2))) ^ (g_286 & (safe_div_func_int32_t_s_s((3UL <= (safe_sub_func_int32_t_s_s(((safe_mod_func_int32_t_s_s((p_6 && p_4), 0xB89AA064L)) & 7UL), 0x487B8525L))), 0xA270D7B4L)))) ^ 0x25L), g_362)), 0))) == 0x5A3FL), 15)))) > p_4), g_287)) & 0xC8A2L) | 9UL), (-1L))), 2)) ^ l_545) | 0x87L) <= g_287)) & g_286);
                    }
                    else
                    {
                        uint8_t l_573 = 0x86L;
                        l_573 = (((safe_div_func_uint8_t_u_u((p_5 > g_522), (safe_mod_func_int8_t_s_s(((((l_403 == (((7L >= ((safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(0x9998L, 1)), 1)) || 0x6316L)) == (0xC3L | (safe_lshift_func_int8_t_s_u(0x33L, (safe_add_func_int16_t_s_s(g_172, p_5)))))) < g_59)) | 65531UL) && l_402) | 0x42L), p_5)))) > 0x75L) > p_5);
                        g_574++;
                    }
                }
                else
                {
                    int32_t l_582 = (-7L);
                    --g_577;
                    p_6 = ((~p_6) < (((+l_582) && ((((safe_add_func_int8_t_s_s((safe_mod_func_int32_t_s_s((safe_sub_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(((-1L) && g_59), (65535UL > (((safe_lshift_func_int16_t_s_s((safe_add_func_uint8_t_u_u(0x5FL, (safe_lshift_func_uint16_t_u_s(g_59, 7)))), 2)) && g_574) ^ g_51)))), l_449)), 0x55BC6F42L)), p_5)) > 0x4373L) > p_6) | g_53)) <= l_582));
                }
            }
            for (p_4 = 0; (p_4 != 0); p_4++)
            {
                uint8_t l_605 = 6UL;
                for (p_5 = 0; (p_5 >= 31); p_5 = safe_add_func_uint32_t_u_u(p_5, 4))
                {
                    uint32_t l_608 = 18446744073709551615UL;
                    uint32_t l_631 = 0UL;
                    if (((((safe_lshift_func_int16_t_s_s(((safe_mod_func_int32_t_s_s(((l_605 != (safe_mod_func_uint32_t_u_u((1UL | (l_608 < ((safe_add_func_int8_t_s_s(((((((1UL | ((safe_sub_func_int16_t_s_s((safe_add_func_uint16_t_u_u(g_153, (safe_unary_minus_func_uint16_t_u((l_404 <= (l_404 > ((safe_unary_minus_func_uint8_t_u((p_4 | 7L))) > g_59))))))), g_51)) > g_153)) <= 1L) || 65535UL) != p_6) == 7UL) > 0L), 1UL)) < p_8))), p_8))) != 0x2EL), p_8)) == p_7), 3)) <= p_8) || 0x7DL) | 0L))
                    {
                        return l_605;
                    }
                    else
                    {
                        int32_t l_630 = 7L;
                        p_6 = (1L || ((l_403 < ((safe_rshift_func_uint8_t_u_u((0x2254L < (-1L)), (safe_div_func_int8_t_s_s(((247UL | p_6) != ((g_142 ^ (safe_sub_func_uint16_t_u_u((safe_add_func_int8_t_s_s((!g_153), (l_630 & g_53))), g_288))) && (-1L))), p_5)))) == g_574)) < l_631));
                    }
                    g_59 = ((safe_sub_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((safe_sub_func_int16_t_s_s(((!((l_523 == 0x067EL) ^ g_172)) || ((safe_add_func_int8_t_s_s(0x62L, (safe_mod_func_int16_t_s_s((-4L), (+(g_2 <= (((((((safe_div_func_int32_t_s_s((safe_mod_func_int32_t_s_s(((safe_rshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_s((g_2 == ((1UL == (safe_add_func_int16_t_s_s(g_63, l_403))) >= 1UL)), p_8)), p_8)) || p_5), l_521)), g_142)) | p_6) < (-1L)) > (-9L)) <= 65532UL) && g_286) == l_403))))))) ^ 1UL)), p_4)), p_5)), 3UL)) < p_5);
                    if ((((g_577 ^ (safe_rshift_func_uint8_t_u_u(((l_520 && (((safe_sub_func_uint32_t_u_u((p_5 >= (((safe_add_func_uint16_t_u_u((((safe_sub_func_uint32_t_u_u((((p_7 || 65526UL) < 0UL) == (safe_lshift_func_uint16_t_u_u((((safe_lshift_func_uint8_t_u_u(p_8, 7)) < ((((safe_add_func_uint32_t_u_u((safe_add_func_uint8_t_u_u(((((safe_sub_func_int16_t_s_s((65535UL && l_449), p_7)) < 1L) | l_631) | g_288), l_403)), l_608)) && 0xBBEEL) & l_605) > p_7)) >= p_5), l_521))), l_523)) != 0xF7L) && g_172), g_362)) == l_403) < p_8)), l_523)) >= g_288) < l_672)) >= 7UL), g_577))) <= l_673) <= g_311))
                    {
                        return p_4;
                    }
                    else
                    {
                        g_59 = g_362;
                        return l_523;
                    }
                }
            }
        }
        else
        {
            uint32_t l_696 = 4294967295UL;
            int32_t l_770 = 7L;
            int32_t l_788 = 0L;
            int32_t l_791 = 0x31ACD9AAL;
            int32_t l_795 = 6L;
            int32_t l_797 = (-1L);
            int32_t l_798 = 0x19613A48L;
            int32_t l_802 = 0xD19A9688L;
            if (p_4)
                break;
            if ((safe_sub_func_int32_t_s_s((safe_add_func_uint8_t_u_u(255UL, (((65535UL ^ (safe_rshift_func_uint8_t_u_s(((9UL >= (safe_mod_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u((((safe_lshift_func_int8_t_s_u((safe_rshift_func_int16_t_s_s((safe_div_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u(((p_6 & l_403) >= (g_577 >= ((!(((((+(safe_sub_func_uint32_t_u_u((p_8 > l_696), p_6))) ^ l_672) == 0x5AF5L) ^ (-4L)) <= l_696)) | (-7L)))), 3)), l_696)), 14)), g_59)) && g_574) >= l_523), g_153)), 0x36F0ECDBL))) ^ g_142), 4))) ^ 0xBCEDCD0DL) || p_6))), l_697)))
            {
                g_59 = (safe_mod_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((l_702 > (((0x96L ^ ((safe_mod_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(g_51, l_402)), ((safe_rshift_func_uint8_t_u_s((((safe_rshift_func_uint16_t_u_s((p_8 || ((((4294967295UL >= (safe_rshift_func_uint8_t_u_s(0xE1L, 5))) || ((safe_sub_func_int8_t_s_s(g_574, g_574)) > l_404)) || 0xA6L) | 0xBEL)), 13)) != 8UL) ^ p_4), l_702)) & p_7))) > g_288)) || 0x18L) & g_288)), 12)), g_142));
            }
            else
            {
                int8_t l_724 = 0x97L;
                int32_t l_796 = 1L;
                --g_716;
                if ((safe_div_func_int8_t_s_s(l_696, (~(safe_add_func_int8_t_s_s((l_724 >= (safe_add_func_uint16_t_u_u((safe_div_func_uint16_t_u_u(((!p_5) && (safe_lshift_func_uint8_t_u_s((!((l_672 ^ ((safe_sub_func_int8_t_s_s(0xB8L, (((safe_mod_func_uint8_t_u_u(((0x666EL && (((safe_rshift_func_int16_t_s_s(l_724, 8)) >= g_153) & p_7)) <= g_311), g_522)) || 0x523A5182L) < l_724))) && l_702)) == p_8)), 3))), g_153)), l_696))), 0x92L))))))
                {
                    int32_t l_764 = 0xC069431AL;
                    int32_t l_799 = 0xF501F7BDL;
                    int32_t l_804 = 0xCD12D269L;
                    if (p_7)
                        break;
                    p_4 = g_63;
                    if ((safe_rshift_func_uint16_t_u_s((safe_add_func_int32_t_s_s(g_716, g_153)), 6)))
                    {
                        int16_t l_765 = 0x719CL;
                        p_4 = (((safe_lshift_func_int16_t_s_s((((safe_lshift_func_uint8_t_u_u((l_696 || (~((((((!((0xE7L < ((safe_sub_func_uint8_t_u_u(4UL, p_5)) != (safe_add_func_int8_t_s_s(((~((safe_lshift_func_int8_t_s_u(g_286, 2)) & g_716)) != (((((safe_lshift_func_int8_t_s_u((!g_2), ((+((safe_mod_func_int16_t_s_s(l_764, ((l_724 < g_53) || g_2))) != l_403)) >= 0xF6L))) | l_696) == g_51) || 65526UL) || 0x97FB50E5L)), 6UL)))) & l_724)) == l_764) & l_764) | 8L) <= p_6) && l_402))), p_6)) != 0UL) < p_8), 3)) <= 1L) == 1UL);
                        if (l_765)
                            break;
                        l_715 = (safe_sub_func_int32_t_s_s(p_7, p_7));
                        --g_771;
                    }
                    else
                    {
                        g_768 = ((l_764 >= (((safe_div_func_int32_t_s_s(l_404, g_63)) != (safe_rshift_func_int16_t_s_s((safe_div_func_uint16_t_u_u(p_7, (safe_rshift_func_int8_t_s_u((((0x4387CDF4L | g_311) != p_5) > (safe_rshift_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(l_702, (safe_div_func_uint8_t_u_u(((0xAAL ^ g_286) ^ g_142), p_7)))), 2))), 0)))), g_51))) != 0x274F990BL)) ^ g_574);
                    }
                    g_806--;
                }
                else
                {
                    if (p_8)
                    {
                        l_809 &= g_362;
                    }
                    else
                    {
                        p_6 = p_6;
                    }
                    for (l_803 = 0; (l_803 > (-4)); l_803--)
                    {
                        g_59 = (safe_rshift_func_int8_t_s_s(1L, 1));
                        p_6 = ((safe_sub_func_uint32_t_u_u((l_770 & 0xFFL), 7UL)) != (((safe_rshift_func_uint16_t_u_s(p_4, 2)) <= (safe_sub_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(7UL, 0x4E49D378L)), 6)), (0xAEECL > 0xEA17L)))) && p_4));
                    }
                }
            }
            for (l_790 = 0; (l_790 > (-26)); l_790 = safe_sub_func_uint8_t_u_u(l_790, 6))
            {
                l_715 = ((g_771 <= l_826) || (-6L));
            }
        }
        if ((safe_div_func_int32_t_s_s((safe_sub_func_uint32_t_u_u(((l_831 > (0xEAL >= 2UL)) && l_792), (safe_div_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u(((((safe_sub_func_int8_t_s_s(((((0x49L || (~(safe_rshift_func_uint16_t_u_u((~0UL), 9)))) < (safe_rshift_func_int8_t_s_u((p_5 ^ ((((((+((safe_mod_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((0x74C6B50DL & (((65535UL <= 5L) >= 0x05DFL) >= l_523)), 5)), 6)), g_2)) >= p_5)) | 7L) == p_4) & p_7) < g_59) ^ p_4)), l_523))) >= p_5) && g_287), l_404)) > g_287) != 0xCCF94996L) || l_404), 4)), p_5)))), g_768)))
        {
            int16_t l_853 = (-5L);
            l_803 &= l_853;
        }
        else
        {
            uint32_t l_874 = 1UL;
            if (g_522)
                break;
            l_793 = ((l_702 != g_362) < 0x2377L);
            if (l_801)
            {
                if (g_288)
                    break;
                --l_854;
                g_59 = 0x65B8B17AL;
            }
            else
            {
                l_794 = (safe_sub_func_int8_t_s_s((((l_859 > (safe_sub_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(((!p_8) & l_826), ((!(safe_add_func_uint16_t_u_u(((((safe_rshift_func_int8_t_s_s(g_51, 2)) == ((safe_mod_func_int32_t_s_s((((p_4 && (safe_sub_func_uint32_t_u_u(((l_874 >= g_2) <= p_5), (p_4 | l_875)))) <= l_874) == g_362), g_716)) | p_6)) >= 0x34L) & l_874), g_63))) & (-4L)))), 0x2739L))) > p_5) & 5UL), g_53));
                if (p_5)
                    continue;
            }
            g_768 = ((p_4 != ((((((safe_mod_func_int32_t_s_s((safe_lshift_func_int16_t_s_s((((safe_lshift_func_int16_t_s_u(((safe_lshift_func_int8_t_s_u((((safe_rshift_func_int8_t_s_s(0xD2L, 5)) && 0xECL) < ((safe_mod_func_uint16_t_u_u((~((p_4 & (((safe_mod_func_uint8_t_u_u((((safe_rshift_func_int8_t_s_u(0xB7L, 6)) == ((safe_div_func_uint32_t_u_u(p_5, 0xF0950F3FL)) == ((((l_715 ^ ((safe_add_func_int16_t_s_s(g_59, 0UL)) >= g_286)) || 1UL) >= (-10L)) != p_5))) >= 0x1F36L), g_59)) ^ p_4) || 8L)) >= l_875)), l_809)) != l_803)), 1)) | 0x10BCL), g_286)) == g_574) || p_8), g_806)), g_288)) & l_789) ^ 0L) <= p_6) == 0x38C58E6BL) < p_4)) != g_172);
        }
    }
    return g_2;
}
inline static int32_t func_9(int32_t p_10, int16_t p_11)
{
    uint16_t l_283 = 65533UL;
    int32_t l_335 = 0x0965D61EL;
    uint32_t l_355 = 1UL;
    uint32_t l_363 = 1UL;
    int32_t l_364 = 0x73823433L;
    l_335 = func_13((g_2 & 0xD461E3FFL), g_2, (+(safe_mod_func_int8_t_s_s(((((g_2 | (func_22(p_11, g_2, p_11, (safe_sub_func_int16_t_s_s(0x3D6CL, g_2)), p_11) == g_2)) <= g_2) ^ (-2L)) && 4UL), g_2))), l_283, p_10);
    l_335 = ((g_172 & (((safe_mod_func_uint32_t_u_u((p_11 > (safe_mod_func_int16_t_s_s(0x1529L, (safe_sub_func_uint8_t_u_u(((((safe_add_func_int16_t_s_s((p_11 | (safe_add_func_int32_t_s_s((safe_add_func_int32_t_s_s(p_10, ((-8L) | (0xFEL & g_142)))), (safe_unary_minus_func_int8_t_s(l_283))))), 1L)) > 0xDEA1L) < l_335) | p_11), l_335))))), l_283)) != g_142) >= p_10)) == l_283);
    l_364 |= (safe_sub_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s((((p_10 ^ ((safe_lshift_func_int16_t_s_s((((l_355 != (safe_add_func_int32_t_s_s(0x36DCFDDAL, l_355))) > ((safe_sub_func_int8_t_s_s((l_283 && 0UL), ((((safe_lshift_func_uint16_t_u_s((((g_286 <= g_362) & ((((8L <= p_10) & p_11) ^ 0x6EFC7179L) > l_283)) != p_11), l_363)) != g_362) > 0L) || 0L))) <= 65527UL)) != (-2L)), p_10)) ^ g_287)) || l_363) && l_335), g_362)), 0x7575L));
    return g_51;
}
static int32_t func_13(int32_t p_14, int32_t p_15, int32_t p_16, int32_t p_17, int32_t p_18)
{
    uint8_t l_304 = 7UL;
    if (p_17)
    {
        int32_t l_303 = 0x9E64E212L;
        for (p_17 = 1; (p_17 >= (-24)); --p_17)
        {
            ++g_288;
        }
        l_304 = (((g_288 != (0x73L != 1L)) == ((((safe_add_func_int8_t_s_s(p_17, ((0xC22D9D8AL | (((safe_div_func_int16_t_s_s(((0xFECD8716L | ((safe_mod_func_int32_t_s_s(((((safe_sub_func_uint16_t_u_u((((((g_153 && 0UL) < (safe_sub_func_int8_t_s_s(g_172, 0x6DL))) > p_17) || (-1L)) || 4294967291UL), 0x1562L)) != g_286) & g_172) < 0xC7C3L), g_53)) >= 0xA6L)) > l_303), 0x6191L)) != 0x605AL) != l_303)) | 0xDFF0F661L))) && p_16) >= 0xCDL) || p_16)) == g_286);
        return g_51;
    }
    else
    {
        uint32_t l_321 = 0xD69E2DA4L;
        uint8_t l_328 = 0xFDL;
        l_328 = (safe_div_func_uint8_t_u_u((((safe_rshift_func_uint16_t_u_u((((safe_mod_func_int32_t_s_s(g_311, ((safe_add_func_uint8_t_u_u(p_15, (safe_lshift_func_int16_t_s_s(g_172, 4)))) | (g_51 > (safe_lshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((!l_321), l_321)), 0)))))) || (safe_lshift_func_uint8_t_u_s(((((safe_div_func_uint32_t_u_u(g_287, (safe_add_func_int8_t_s_s(g_63, l_321)))) && l_304) != 0UL) && p_15), l_321))) || p_15), 10)) > 0xE6B9L) != g_51), g_142));
        g_59 ^= ((safe_div_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(p_14, p_14)), (safe_rshift_func_uint16_t_u_s(65535UL, 13)))) == g_172);
    }
    return g_53;
}
inline static int32_t func_22(int16_t p_23, int16_t p_24, int32_t p_25, int16_t p_26, int16_t p_27)
{
    uint32_t l_30 = 3UL;
    int32_t l_279 = 0x78381580L;
    uint16_t l_282 = 0UL;
    ++l_30;
    l_279 = (safe_add_func_uint8_t_u_u(255UL, func_35(g_2, l_30, ((safe_mod_func_int8_t_s_s((1UL != (func_41(l_30, p_26, func_46(p_25), p_24) == 254UL)), p_26)) || g_2))));
    l_279 &= ((safe_lshift_func_uint8_t_u_u((l_282 ^ (p_25 && g_51)), 0)) || 0x2C81L);
    return p_25;
}
static uint8_t func_35(int16_t p_36, uint32_t p_37, int8_t p_38)
{
    int32_t l_270 = 0x43E87FF4L;
    int32_t l_278 = (-6L);
    l_278 = (safe_lshift_func_int8_t_s_u(((safe_div_func_int8_t_s_s(((((safe_unary_minus_func_uint16_t_u((0xBA6EL < (safe_rshift_func_uint16_t_u_s((((safe_mod_func_int8_t_s_s(6L, 0x9DL)) && ((!l_270) == g_59)) < ((p_36 | (safe_rshift_func_uint16_t_u_u((+g_153), 11))) || (g_63 >= (safe_lshift_func_int8_t_s_s(0L, g_142))))), 13))))) | 0xB4L) && 0xB7L) <= g_51), 0xC7L)) != 1L), g_142));
    return g_63;
}
static int8_t func_41(int32_t p_42, uint32_t p_43, uint16_t p_44, int16_t p_45)
{
    uint16_t l_249 = 0x43B8L;
    int32_t l_256 = 8L;
    l_256 |= ((l_249 ^ g_63) | (l_249 <= (((safe_rshift_func_uint8_t_u_s((safe_mod_func_int16_t_s_s(((-2L) == (0L ^ (safe_add_func_int32_t_s_s(l_249, 3UL)))), (4L || l_249))), p_42)) & g_142) <= p_42)));
    p_42 = (p_44 <= (safe_div_func_uint16_t_u_u((~l_256), g_142)));
    return l_249;
}
inline static uint16_t func_46(int32_t p_47)
{
    int32_t l_48 = 0xC1477A14L;
    int32_t l_49 = (-4L);
    int32_t l_50 = (-1L);
    int32_t l_52 = (-4L);
    int32_t l_54 = 8L;
    int32_t l_55 = 0xFF74F57BL;
    int32_t l_56 = 4L;
    int32_t l_57 = (-3L);
    int32_t l_58 = 0x7E4DDBB7L;
    int32_t l_60 = 0xC821F997L;
    int32_t l_61 = 0x1B78CD90L;
    int32_t l_62 = (-8L);
    uint8_t l_194 = 4UL;
    g_63++;
    l_57 = func_66(((safe_add_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((func_73((safe_mod_func_int16_t_s_s((l_56 <= ((safe_mod_func_int16_t_s_s(((l_50 | (((p_47 ^ (0x01L > p_47)) > (g_59 || (safe_mod_func_int8_t_s_s((((((-4L) | ((+(g_2 || l_60)) <= l_48)) > p_47) > p_47) == p_47), p_47)))) > 0x58L)) != p_47), 0x4A1AL)) == 0x04L)), g_2)), g_51) != l_194), p_47)), p_47)) != p_47), g_63);
    return g_153;
}
inline static int32_t func_66(int32_t p_67, uint32_t p_68)
{
    uint16_t l_195 = 0xCA7BL;
    uint32_t l_219 = 0x4755464FL;
    if (l_195)
    {
        uint32_t l_207 = 18446744073709551613UL;
        int32_t l_208 = (-6L);
        g_59 |= ((g_51 >= (g_2 & ((safe_div_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(((safe_div_func_int8_t_s_s((safe_add_func_uint32_t_u_u((+p_68), 0UL)), (l_195 && 0xD0954A6FL))) <= (safe_sub_func_uint32_t_u_u(l_207, 0x439DAF5BL))), 1)), (((p_68 == 0x0859L) & p_67) & 1L))) >= 0x5FL))) > g_142);
        l_208 = ((-1L) < (g_153 <= (0x21L | g_142)));
        g_59 = ((1UL >= (safe_div_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((safe_sub_func_int8_t_s_s(((l_207 >= ((safe_add_func_uint16_t_u_u(((l_219 >= (g_63 > p_67)) > l_207), ((((p_68 <= l_219) >= ((safe_sub_func_uint8_t_u_u(g_153, 0xB8L)) >= 0UL)) > (-9L)) >= g_153))) | p_67)) > 8L), p_67)), g_172)), 15)) < (-1L)), 1UL))) && p_68);
    }
    else
    {
        uint16_t l_230 = 0xEAE6L;
        p_67 = ((((safe_add_func_int16_t_s_s((p_67 >= (safe_sub_func_uint32_t_u_u(((safe_sub_func_int8_t_s_s(g_63, ((safe_mod_func_int8_t_s_s(((l_230 != p_67) < ((safe_div_func_uint16_t_u_u((((((((safe_div_func_int8_t_s_s((+((safe_div_func_uint8_t_u_u(((((safe_mod_func_uint32_t_u_u(((safe_unary_minus_func_uint32_t_u((0L | ((~(((safe_add_func_int8_t_s_s((safe_mod_func_int16_t_s_s((3L || ((g_142 < g_172) || 0L)), p_68)), 255UL)) != 4294967295UL) != g_142)) & 0x3CL)))) | l_230), 0xA339AD12L)) ^ g_51) && 255UL) && 0x944AL), l_195)) <= 8UL)), l_230)) <= 0xF2L) < l_219) > p_67) || p_67) || 0UL) | p_68), g_2)) && 1UL)), p_68)) >= l_219))) != 3UL), g_53))), l_230)) <= l_219) | 0UL) ^ p_67);
        return p_68;
    }
    for (g_51 = 2; (g_51 <= (-24)); g_51 = safe_sub_func_uint32_t_u_u(g_51, 2))
    {
        int16_t l_248 = 1L;
        p_67 = (g_172 | 0x305FE1C8L);
        if (p_68)
            continue;
        l_248 = p_68;
        g_59 |= g_53;
    }
    return p_68;
}
inline static int8_t func_73(int16_t p_74, uint8_t p_75)
{
    uint8_t l_85 = 0xDAL;
    int32_t l_86 = 1L;
    uint8_t l_87 = 0UL;
    int8_t l_90 = 0L;
    int32_t l_141 = 0x70A8D4FFL;
    int16_t l_191 = 0x75BAL;
    int32_t l_193 = 0x6F400ABDL;
    l_85 ^= 0xD03D8E66L;
    ++l_87;
    g_59 = ((((((((p_74 != 4294967289UL) != g_53) >= ((0x2AL < l_87) ^ 0xB4DBL)) & l_85) >= l_90) < 0xFEL) > 246UL) > p_74);
    for (p_75 = (-8); (p_75 > 23); p_75 = safe_add_func_int16_t_s_s(p_75, 1))
    {
        uint16_t l_116 = 0x8C6EL;
        int32_t l_133 = 0x28AE825DL;
        uint32_t l_192 = 0x7E41B645L;
        for (p_74 = (-28); (p_74 != (-19)); p_74 = safe_add_func_uint32_t_u_u(p_74, 9))
        {
            uint16_t l_95 = 0xBB00L;
            int32_t l_131 = 8L;
            int32_t l_140 = 0xCB97C0B8L;
            l_95 = p_74;
            if (p_74)
            {
                uint8_t l_130 = 255UL;
                l_131 = (safe_mod_func_uint32_t_u_u((p_75 || (safe_add_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(((((g_53 <= ((((safe_add_func_int8_t_s_s(((g_53 != (safe_div_func_int8_t_s_s(((1UL != p_75) && ((safe_mod_func_uint8_t_u_u(((safe_div_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(((safe_mod_func_int16_t_s_s(((safe_sub_func_uint16_t_u_u(l_116, ((((safe_lshift_func_int8_t_s_u((safe_mod_func_uint8_t_u_u(l_116, 0x01L)), 5)) <= ((((safe_lshift_func_int16_t_s_s((safe_unary_minus_func_uint32_t_u(((safe_rshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((safe_div_func_int8_t_s_s(g_2, g_2)), g_53)), 0)) & l_116))), p_74)) >= g_59) <= 4UL) >= g_63)) < 249UL) >= 0L))) != g_53), g_53)) < 0x64L), p_75)), 0x3576L)) > 0xE5L), l_130)) <= g_63)), 0x67L))) & 1UL), l_130)) ^ 0x2BL) >= p_74) != g_59)) >= (-10L)) >= l_87) != 0xA9739A15L), p_75)), 0x32L))), g_59));
                if (l_116)
                    break;
            }
            else
            {
                int32_t l_132 = 0L;
                l_133 |= l_132;
                g_59 = (safe_div_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(((l_95 <= 0UL) | p_74), ((-1L) && ((l_87 < ((safe_lshift_func_int16_t_s_s((0x96L ^ p_75), p_74)) == p_75)) <= g_59)))), l_116));
                ++g_142;
                return g_53;
            }
            g_59 = (safe_rshift_func_uint16_t_u_s(l_116, 1));
        }
        l_86 &= (safe_sub_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(((safe_sub_func_int16_t_s_s(g_153, (safe_rshift_func_uint8_t_u_s(((safe_rshift_func_int16_t_s_s((safe_unary_minus_func_uint32_t_u(((!(safe_add_func_uint16_t_u_u((p_75 >= l_87), (safe_rshift_func_int16_t_s_u(0L, p_75))))) & l_90))), 7)) ^ (((safe_lshift_func_int8_t_s_s(((safe_div_func_int32_t_s_s((p_75 != p_75), ((safe_sub_func_uint32_t_u_u(l_116, p_75)) && 6L))) >= 1UL), 3)) ^ 65534UL) < p_74)), 0)))) == 0xBAF5A799L), 5)), 0xF6L));
        for (l_85 = 8; (l_85 < 42); l_85 = safe_add_func_int16_t_s_s(l_85, 5))
        {
            if (l_133)
                break;
            --g_172;
        }
        l_192 = ((l_133 || ((safe_div_func_int16_t_s_s(((((safe_div_func_uint8_t_u_u(l_141, 255UL)) == g_51) >= 9UL) == (safe_sub_func_int32_t_s_s(l_141, 4294967288UL))), ((0L >= (safe_mod_func_uint32_t_u_u((((safe_mod_func_int16_t_s_s((safe_sub_func_int32_t_s_s((safe_add_func_uint8_t_u_u((safe_add_func_int32_t_s_s(9L, g_59)), 0UL)), l_191)), p_74)) | l_133) && 248UL), l_133))) || 0UL))) && 0x19L)) == 0UL);
    }
    return l_193;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_2;
    csmith_sink_ = g_51;
    csmith_sink_ = g_53;
    csmith_sink_ = g_59;
    csmith_sink_ = g_63;
    csmith_sink_ = g_142;
    csmith_sink_ = g_153;
    csmith_sink_ = g_172;
    csmith_sink_ = g_286;
    csmith_sink_ = g_287;
    csmith_sink_ = g_288;
    csmith_sink_ = g_311;
    csmith_sink_ = g_362;
    csmith_sink_ = g_522;
    csmith_sink_ = g_574;
    csmith_sink_ = g_577;
    csmith_sink_ = g_716;
    csmith_sink_ = g_768;
    csmith_sink_ = g_769;
    csmith_sink_ = g_771;
    csmith_sink_ = g_805;
    csmith_sink_ = g_806;
    csmith_sink_ = g_940;
    csmith_sink_ = g_983;
    platform_main_end(0,0);
    return 0;
}
