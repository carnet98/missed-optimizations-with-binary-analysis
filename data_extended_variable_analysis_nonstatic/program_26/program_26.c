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

volatile uint64_t csmith_sink_ = 0;
static long __undefined;
struct S0 {
   int64_t f0;
   uint64_t f1;
   const uint32_t f2;
   uint8_t f3;
   int8_t f4;
   int64_t f5;
   int32_t f6;
};
static struct S0 g_16 = {0x2F3F6085E0710DD0LL,18446744073709551615UL,4294967295UL,255UL,0xF4L,-1L,9L};
static const int32_t g_55 = 3L;
static const int32_t *g_54 = &g_55;
static int32_t g_76 = (-4L);
static int32_t g_110 = 0x5621C9A8L;
static int32_t g_166 = 0x2B5FF26AL;
static int8_t g_175 = 0x5DL;
static int8_t g_195 = 0xA4L;
static int64_t g_216 = 0x99DCED91EE60EB54LL;
static uint64_t g_218 = 18446744073709551607UL;
static int32_t *g_226 = &g_76;
static int32_t **g_225 = &g_226;
static int32_t ***g_224 = &g_225;
static const int32_t ****g_597 = (void*)0;
static const int32_t *****g_596 = &g_597;
static uint16_t g_598 = 65532UL;
static uint16_t g_623 = 5UL;
static uint32_t g_674 = 0x02FBBF1CL;
static uint16_t g_795 = 0x4FB5L;
static uint32_t g_815 = 4UL;
static int32_t g_873 = 0xA05FC923L;
static struct S0 *g_876 = &g_16;
static uint32_t g_916 = 0x960AD288L;
static int8_t g_953 = 0x33L;
static int32_t g_982 = 0xDF67C68CL;
static int32_t g_1004 = (-8L);
static uint32_t g_1029 = 0x685DCBD7L;
static uint16_t g_1166 = 65533UL;
static uint32_t g_1206 = 0x9477FAB1L;
static int8_t g_1272 = 0x2FL;
static uint32_t g_1287 = 18446744073709551610UL;
static uint64_t func_1(void);
static int32_t func_2(uint32_t p_3, uint8_t p_4, uint32_t p_5, int8_t p_6);
static uint8_t func_8(int16_t p_9);
static uint8_t func_14(struct S0 p_15);
static int32_t func_19(int32_t p_20, int64_t p_21, const int8_t p_22, uint32_t p_23, const uint16_t p_24);
static int32_t func_30(const uint32_t p_31);
static int32_t func_33(uint32_t p_34, int32_t p_35);
static uint16_t func_44(uint64_t p_45, int32_t p_46, uint32_t p_47, int32_t p_48);
static int16_t func_49(int32_t p_50);
static int32_t func_51(int32_t p_52);
static uint64_t func_1(void)
{
    int32_t l_10 = 1L;
    int32_t l_902 = (-6L);
    int32_t l_1290 = 0x17E0DDD1L;
    l_1290 = func_2((safe_unary_minus_func_uint8_t_u(func_8((l_10 | ((((((~(safe_mod_func_uint8_t_u_u(func_14(g_16), (safe_div_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((safe_mul_func_int16_t_s_s(((safe_sub_func_uint64_t_u_u(l_10, (-1L))) >= l_10), (+(l_10 >= ((0xE6DFL | (safe_mul_func_int8_t_s_s(l_10, l_902))) | l_10))))), g_623)), l_10))))) != l_902) & (-3L)) < 0x7E62C02F9299CAE1LL) == l_10) ^ g_55))))), l_10, l_902, l_10);
    return l_10;
}
static int32_t func_2(uint32_t p_3, uint8_t p_4, uint32_t p_5, int8_t p_6)
{
    uint64_t l_1084 = 2UL;
    uint32_t l_1095 = 0xFB8E5D72L;
    int32_t *l_1103 = &g_76;
    int32_t ** const *l_1179 = &g_225;
    int32_t ** const **l_1178 = &l_1179;
    int32_t ** const ***l_1177 = &l_1178;
    int32_t l_1210 = 1L;
    int32_t l_1236 = 1L;
    int32_t l_1269 = 0xBB5BAA33L;
    int32_t l_1273 = 0L;
    int32_t l_1283 = (-2L);
    for (g_195 = 0; (g_195 == (-2)); --g_195)
    {
        l_1084 = 0xB8C90312L;
    }
    return p_3;
}
static uint8_t func_8(int16_t p_9)
{
    int32_t *l_905 = &g_76;
    const struct S0 *l_927 = &g_16;
    const struct S0 ** const l_926 = &l_927;
    int32_t l_1032 = (-8L);
    int32_t l_1033 = 0xC37A7CA1L;
    uint32_t l_1034 = 0UL;
    int32_t ****l_1072 = &g_224;
    int32_t l_1081 = 0xA7BB6B80L;
    for (g_166 = 0; (g_166 != 17); g_166++)
    {
        uint32_t l_929 = 4294967289UL;
        int32_t **l_938 = (void*)0;
        int32_t l_1002 = 0x971BF20BL;
        int32_t ****l_1071 = &g_224;
        int32_t *l_1075 = &l_1032;
        if (p_9)
        {
            (*g_225) = (void*)0;
            (*g_225) = l_905;
        }
        else
        {
            uint16_t l_928 = 0x851AL;
            uint32_t l_931 = 0xDC0C1475L;
            struct S0 **l_939 = &g_876;
            uint32_t l_940 = 0UL;
            int32_t l_941 = (-1L);
            int32_t l_1014 = 0x86788387L;
            g_110 &= (safe_sub_func_int32_t_s_s((((safe_rshift_func_int8_t_s_u((safe_mul_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((safe_mul_func_int16_t_s_s(2L, p_9)), (g_916 || (+0x1083L)))), ((safe_add_func_uint64_t_u_u((safe_add_func_int64_t_s_s((safe_rshift_func_uint16_t_u_u((4294967295UL >= (((&g_597 == (void*)0) && (safe_mod_func_int64_t_s_s((g_674 == (((((void*)0 != l_926) & l_928) > 255UL) || l_928)), (*l_905)))) == p_9)), p_9)), 18446744073709551610UL)), 18446744073709551608UL)) < l_929))), p_9)) == 0UL) <= p_9), p_9));
            if (l_929)
            {
                int32_t *l_942 = &g_76;
                int32_t *l_943 = &l_941;
                int32_t *l_944 = &g_76;
                int32_t *l_945 = &g_76;
                int32_t *l_946 = (void*)0;
                int32_t *l_947 = &g_110;
                int32_t *l_948 = &g_110;
                int32_t *l_949 = &l_941;
                int32_t *l_950 = &g_110;
                int32_t *l_951 = &l_941;
                int32_t *l_952 = &l_941;
                int32_t *l_954 = &g_110;
                int32_t *l_955 = &g_110;
                int32_t *l_956 = &g_76;
                int32_t *l_957 = &g_76;
                int32_t *l_958 = (void*)0;
                int32_t *l_959 = &g_76;
                int32_t *l_960 = &g_110;
                int32_t *l_961 = &l_941;
                int32_t *l_962 = (void*)0;
                int32_t *l_963 = &g_110;
                int32_t *l_964 = &g_110;
                int32_t *l_965 = &g_110;
                int32_t *l_966 = &l_941;
                int32_t *l_967 = &g_76;
                int32_t *l_968 = &g_110;
                int32_t *l_969 = &g_76;
                int32_t *l_970 = (void*)0;
                int32_t *l_971 = &l_941;
                int32_t *l_972 = &g_110;
                int32_t *l_973 = &g_76;
                int32_t *l_974 = &g_76;
                int32_t *l_975 = &g_110;
                int32_t *l_976 = &l_941;
                int32_t l_977 = 1L;
                int32_t l_978 = 0xA64407A7L;
                int32_t *l_979 = &g_76;
                int32_t *l_980 = &l_978;
                int32_t *l_981 = &g_110;
                int32_t *l_983 = &l_941;
                int32_t *l_984 = &l_977;
                int32_t *l_985 = &g_76;
                int32_t *l_986 = &g_76;
                int32_t *l_987 = &g_76;
                int32_t *l_988 = &g_110;
                int32_t *l_989 = &l_941;
                int32_t *l_990 = &g_76;
                int32_t *l_991 = &l_977;
                int32_t *l_992 = &g_76;
                int32_t *l_993 = &l_978;
                int32_t *l_994 = &l_977;
                int32_t l_995 = (-6L);
                int32_t *l_996 = &l_978;
                int32_t *l_997 = &l_995;
                int32_t *l_998 = &g_110;
                int32_t *l_999 = &l_941;
                int32_t *l_1000 = (void*)0;
                int32_t *l_1001 = &g_76;
                int32_t *l_1003 = (void*)0;
                int32_t *l_1005 = &l_978;
                int32_t *l_1006 = &l_941;
                int32_t *l_1007 = &l_977;
                int32_t l_1008 = 0x3C25CABDL;
                int32_t *l_1009 = (void*)0;
                int32_t *l_1010 = &l_941;
                int32_t *l_1011 = &l_995;
                int32_t *l_1012 = &g_76;
                int32_t *l_1013 = &g_1004;
                int32_t *l_1015 = &g_76;
                int32_t l_1016 = 1L;
                int32_t *l_1017 = &l_995;
                int32_t *l_1018 = &l_978;
                int32_t *l_1019 = &l_1016;
                int32_t *l_1020 = &l_1008;
                int32_t *l_1021 = &l_941;
                int32_t *l_1022 = &g_76;
                int32_t l_1023 = 0L;
                int32_t *l_1024 = &l_978;
                int32_t *l_1025 = &l_1008;
                int32_t *l_1026 = &l_977;
                int32_t *l_1027 = &l_1023;
                int32_t *l_1028 = &l_1008;
                l_941 = (0x5F84L && (!((l_931 > (safe_sub_func_int64_t_s_s(((void*)0 != (*g_596)), ((safe_div_func_int8_t_s_s(((l_938 == &l_905) ^ ((l_939 == l_939) > (((void*)0 == l_938) && g_795))), g_916)) & 0x6749L)))) != l_940)));
                g_1029++;
                l_1034++;
                (*l_1027) |= (!(*l_905));
            }
            else
            {
                int32_t ** const l_1051 = &g_226;
                (*l_905) = (g_16.f2 || (safe_mul_func_int16_t_s_s(((18446744073709551610UL <= (safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_s(((safe_add_func_int32_t_s_s((safe_add_func_uint64_t_u_u((safe_sub_func_int16_t_s_s((safe_unary_minus_func_uint8_t_u(((void*)0 != l_1051))), (((*g_596) == (void*)0) ^ (safe_rshift_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(p_9, (safe_rshift_func_int8_t_s_u(p_9, (safe_sub_func_int16_t_s_s(g_815, g_16.f4)))))), (*l_905)))))), g_674)), p_9)) && 0xBA15CE5BL), 6)), (*l_905)))) >= p_9), 8UL)));
                return l_1002;
            }
        }
        if ((*l_905))
            break;
        (*l_1075) |= (safe_mul_func_uint16_t_u_u(g_216, (((safe_mul_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s(((1L != ((*g_54) || (safe_div_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((*l_905), ((~(l_1071 == l_1072)) && p_9))), ((safe_rshift_func_int8_t_s_s(((&g_876 != &l_927) || 0x0638L), 0)) && 0xAA0F6B03L))))) | p_9), 0xFB88L)) == 0xF3303BB52D6159CBLL), g_1029)) || p_9) > 0x54A1BF913048D2A2LL)));
        (*l_1075) = (safe_sub_func_int16_t_s_s(p_9, (*l_905)));
    }
    (*l_905) = p_9;
    for (g_16.f4 = 1; (g_16.f4 >= 29); g_16.f4 = safe_add_func_uint64_t_u_u(g_16.f4, 2))
    {
        int32_t *l_1080 = &g_110;
        (***l_1072) = l_1080;
    }
    return l_1081;
}
static uint8_t func_14(struct S0 p_15)
{
    const int64_t l_32 = 1L;
    int32_t *****l_610 = (void*)0;
    int32_t l_636 = 0xF0A38636L;
    uint32_t l_651 = 0x4EF5BD3AL;
    uint64_t l_652 = 1UL;
    uint16_t l_750 = 0xCA40L;
    int32_t *l_880 = &g_110;
    const struct S0 *l_887 = (void*)0;
    int32_t *l_890 = &l_636;
    for (g_16.f4 = 6; (g_16.f4 != (-24)); g_16.f4 = safe_sub_func_int64_t_s_s(g_16.f4, 3))
    {
        int32_t ****l_612 = &g_224;
        int32_t ***** const l_611 = &l_612;
        int32_t ***l_617 = &g_225;
        int32_t l_673 = 0L;
        uint32_t l_682 = 0x1512807BL;
        l_636 = func_19((safe_mod_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u(((~((func_30(l_32) != ((safe_div_func_uint16_t_u_u(((safe_mod_func_uint32_t_u_u((safe_sub_func_int16_t_s_s((safe_add_func_uint32_t_u_u((l_610 != l_611), (((((safe_sub_func_uint32_t_u_u(0xCBA1B5FBL, (safe_sub_func_int8_t_s_s(0x48L, ((l_617 != (void*)0) && g_598))))) || g_16.f4) || g_55) < 0x4ACD50D94507BB3DLL) & p_15.f0))), g_195)), g_16.f2)) ^ g_195), g_195)) && g_55)) & p_15.f6)) > g_598), 5)), g_175)), g_598, p_15.f6, g_55, g_55);
        if ((((safe_lshift_func_int16_t_s_s(((*g_596) == (*g_596)), (safe_mul_func_uint16_t_u_u((p_15.f1 | p_15.f6), ((safe_mod_func_int8_t_s_s((0x8D369A7CL & (((((p_15.f5 & (safe_mul_func_int8_t_s_s((p_15.f5 ^ ((safe_lshift_func_uint8_t_u_u((safe_div_func_int16_t_s_s(p_15.f6, p_15.f5)), p_15.f3)) <= 0x0534L)), p_15.f4))) >= p_15.f6) || g_16.f5) || (-4L)) >= p_15.f5)), p_15.f3)) > l_651))))) >= g_16.f6) ^ l_652))
        {
            int32_t *l_653 = &l_636;
            int32_t *l_654 = &g_76;
            int32_t *l_655 = &l_636;
            int32_t *l_656 = &l_636;
            int32_t *l_657 = &g_76;
            int32_t *l_658 = (void*)0;
            int32_t *l_659 = &g_76;
            int32_t *l_660 = &g_76;
            int32_t *l_661 = &l_636;
            int32_t *l_662 = &l_636;
            int32_t *l_663 = &g_110;
            int32_t *l_664 = &g_76;
            int32_t *l_665 = &g_76;
            int32_t *l_666 = &g_110;
            int32_t *l_667 = &g_76;
            int32_t *l_668 = (void*)0;
            int32_t *l_669 = &l_636;
            int32_t *l_670 = (void*)0;
            int32_t *l_671 = &g_76;
            int32_t *l_672 = &l_636;
            ++g_674;
        }
        else
        {
            int32_t *l_681 = &l_673;
            int32_t ****l_688 = &g_224;
            int32_t l_689 = 0xAB212BE9L;
            (*l_681) |= (safe_sub_func_uint16_t_u_u(((-1L) == (safe_lshift_func_int8_t_s_s(((((void*)0 == l_681) & ((((((l_682 < (safe_mul_func_int8_t_s_s(((void*)0 != (*g_596)), 7L))) >= (g_110 || (!(safe_lshift_func_int8_t_s_s((l_688 != (void*)0), 6))))) == 1UL) & p_15.f4) | p_15.f2) == l_689)) == 4294967295UL), p_15.f1))), 0L));
            for (p_15.f1 = 0; (p_15.f1 < 38); p_15.f1++)
            {
                int32_t *l_692 = &g_76;
                (****l_611) = l_692;
                (*l_681) ^= (***g_224);
                if ((**g_225))
                    break;
            }
            (*l_681) |= ((0x7FA0L >= g_674) || p_15.f4);
        }
        (*g_225) = &l_636;
    }
    if (((0x2CL <= 7L) & g_16.f1))
    {
        uint32_t l_705 = 0x72D8E9F0L;
        int32_t l_712 = 2L;
        int32_t *l_713 = &g_110;
        l_712 &= ((~(safe_rshift_func_uint8_t_u_s((p_15.f6 && (((4294967291UL < (safe_lshift_func_int16_t_s_u((((safe_div_func_uint8_t_u_u(g_623, (safe_div_func_uint8_t_u_u((safe_unary_minus_func_uint64_t_u((((safe_lshift_func_int8_t_s_s(((l_705 >= (g_216 >= (safe_rshift_func_uint8_t_u_u(g_16.f0, (safe_mod_func_int32_t_s_s(p_15.f0, g_16.f4)))))) < (safe_add_func_uint8_t_u_u((g_16.f2 | p_15.f5), p_15.f2))), g_16.f5)) ^ l_705) != p_15.f6))), g_16.f5)))) | (***g_224)) <= l_705), 12))) && l_651) != p_15.f6)), p_15.f2))) != 0xCF5EL);
        l_713 = (void*)0;
        if ((***g_224))
        {
            uint32_t l_714 = 4294967292UL;
            l_714--;
        }
        else
        {
            struct S0 *l_718 = &g_16;
            struct S0 **l_717 = &l_718;
            int32_t *l_723 = &g_110;
            (**g_224) = (*g_225);
            (*g_225) = (**g_224);
            (*l_717) = &g_16;
            (**g_225) &= ((((safe_mod_func_int64_t_s_s((p_15.f0 && (safe_sub_func_int16_t_s_s((0xE5L > (l_723 != l_723)), p_15.f5))), (((**g_224) == (void*)0) && (18446744073709551609UL <= (safe_div_func_int64_t_s_s((((safe_mul_func_uint8_t_u_u((g_16.f1 && g_55), g_216)) >= g_16.f6) || p_15.f5), (*l_723))))))) == p_15.f3) > p_15.f3) ^ p_15.f2);
        }
    }
    else
    {
        uint64_t l_740 = 0x36470620ECFB9FDFLL;
        int32_t **l_741 = &g_226;
        int32_t l_778 = 0xA978901FL;
        uint16_t l_872 = 65535UL;
        if ((g_175 <= (safe_mul_func_uint8_t_u_u(((safe_add_func_uint32_t_u_u(4294967295UL, ((safe_add_func_int8_t_s_s((safe_mul_func_int16_t_s_s((247UL ^ ((((p_15.f6 ^ (safe_sub_func_uint8_t_u_u(g_55, (((safe_sub_func_uint8_t_u_u((l_740 ^ ((void*)0 != l_741)), (safe_div_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(((safe_rshift_func_uint8_t_u_s((((safe_add_func_int64_t_s_s(0x22C98856A357A342LL, p_15.f4)) <= g_16.f4) || 0x72L), p_15.f5)) ^ (**l_741)), 0)), 0x3A70L)))) > 0xC85AL) > g_16.f5)))) & (**l_741)) > (**l_741)) != g_16.f6)), l_750)), 0x7FL)) <= 0x56B59CE9069BF6F8LL))) <= 7UL), p_15.f0))))
        {
            int32_t ****l_752 = &g_224;
            int32_t *****l_751 = &l_752;
            int64_t l_837 = 0xAF5FF487429C6FF4LL;
            l_751 = l_610;
            for (g_195 = 0; (g_195 <= (-5)); g_195 = safe_sub_func_int32_t_s_s(g_195, 2))
            {
                int16_t l_763 = 9L;
                int32_t l_768 = 0xE5494DAEL;
            }
        }
        else
        {
            return p_15.f0;
        }
        g_873 ^= (((!(**l_741)) <= (!(safe_sub_func_uint16_t_u_u(g_623, p_15.f4)))) | (((safe_add_func_uint32_t_u_u((safe_div_func_uint64_t_u_u(((**l_741) == ((safe_mod_func_int16_t_s_s(((g_16.f2 >= (p_15.f1 == 0xB81208BEEAF6CE8CLL)) | ((g_815 ^ ((safe_lshift_func_uint16_t_u_s((((((safe_lshift_func_uint16_t_u_s((+((safe_mul_func_int16_t_s_s(((-1L) & 0x02D9L), g_795)) || g_16.f1)), (**l_741))) ^ p_15.f5) >= g_623) ^ g_110) | (-4L)), 6)) == l_872)) >= 0x67ABEF210A2558F5LL)), p_15.f1)) > g_795)), (**l_741))), g_16.f3)) ^ 0x48280D94F229DFF9LL) ^ g_175));
        for (l_872 = 0; (l_872 != 2); l_872++)
        {
            struct S0 **l_877 = &g_876;
            (*l_877) = g_876;
        }
    }
    for (l_651 = 6; (l_651 >= 9); ++l_651)
    {
        (*g_225) = l_880;
    }
    (*l_890) |= (safe_mul_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(p_15.f6, ((*l_880) <= ((void*)0 != &l_636)))), (safe_div_func_uint8_t_u_u(((void*)0 != l_887), (safe_add_func_uint16_t_u_u(((&g_225 == (void*)0) && ((0L || p_15.f1) < 1UL)), (*l_880)))))));
    return (*l_880);
}
static int32_t func_19(int32_t p_20, int64_t p_21, const int8_t p_22, uint32_t p_23, const uint16_t p_24)
{
    int64_t l_624 = 6L;
    const int32_t **l_630 = &g_54;
    int32_t *** const l_634 = &g_225;
    int32_t *l_635 = &g_76;
    p_20 ^= (((safe_mul_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u((((safe_unary_minus_func_uint8_t_u(g_623)) < l_624) | p_23), (+((safe_rshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((l_630 == (*g_224)), 3)), 7)) == (**l_630))))), (safe_sub_func_int16_t_s_s((~((&l_630 == l_634) > ((**l_630) < g_16.f0))), (-6L))))) | 3UL) & (-1L));
    (*l_635) = (**l_630);
    (*l_630) = (*l_630);
    return p_21;
}
static int32_t func_30(const uint32_t p_31)
{
    int8_t l_53 = 0x65L;
    int32_t *** const *l_285 = (void*)0;
    int32_t *l_413 = &g_110;
    int16_t l_417 = 0L;
    uint16_t l_436 = 0x28A9L;
    int32_t l_534 = 0x4253AB80L;
    uint64_t l_556 = 18446744073709551615UL;
    int16_t l_600 = 0x1D16L;
    int64_t l_601 = 0xD67B2373D08090F0LL;
    if (func_33((safe_sub_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_s((safe_div_func_int64_t_s_s(g_16.f4, (safe_sub_func_uint64_t_u_u(g_16.f1, ((func_44((func_49(func_51(l_53)) ^ (0xAA09B46BL <= l_53)), (l_285 != (void*)0), g_16.f0, g_16.f2) < 0x478EL) ^ 0x5AC6L))))), p_31)) && 6UL), g_195)), g_55))
    {
        uint64_t l_362 = 0x98C0DEAB1E3EF1A1LL;
        uint32_t l_382 = 18446744073709551611UL;
        int32_t *l_405 = &g_110;
        for (g_16.f6 = 0; (g_16.f6 >= 16); g_16.f6 = safe_add_func_int32_t_s_s(g_16.f6, 1))
        {
            uint8_t l_386 = 0UL;
            int32_t l_402 = 0xD6E52BDFL;
            for (g_110 = 0; (g_110 <= (-17)); g_110 = safe_sub_func_uint16_t_u_u(g_110, 1))
            {
                int32_t *l_363 = &g_76;
                (*l_363) |= l_362;
            }
            for (g_218 = 27; (g_218 != 57); g_218++)
            {
                uint8_t l_383 = 1UL;
                uint8_t l_384 = 255UL;
                int32_t *l_385 = &g_76;
                (*l_385) |= ((safe_rshift_func_int8_t_s_u((safe_mul_func_uint8_t_u_u(((((-1L) | (safe_sub_func_uint64_t_u_u((safe_mod_func_int8_t_s_s(((safe_mod_func_uint64_t_u_u((1UL != 0xE9L), (safe_div_func_uint64_t_u_u((((safe_mul_func_uint8_t_u_u((safe_add_func_int32_t_s_s(p_31, (l_382 < (0x629B37185AD0F761LL != ((((void*)0 == &g_225) || ((g_16.f1 || l_383) && 0UL)) <= g_55))))), l_382)) == p_31) && l_384), 0x91C458B7C6787789LL)))) >= g_110), g_16.f1)), l_362))) != g_110) & 0x8A6CL), g_16.f2)), g_16.f1)) == 0x8CL);
                l_386 = (-1L);
                for (g_16.f5 = 26; (g_16.f5 <= 20); g_16.f5 = safe_sub_func_uint32_t_u_u(g_16.f5, 1))
                {
                    int32_t *l_401 = (void*)0;
                    l_402 &= (safe_lshift_func_uint16_t_u_u(0UL, (((((l_382 <= (p_31 > (safe_mod_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u(((g_175 != ((void*)0 != &l_285)) & (safe_lshift_func_int8_t_s_s((safe_div_func_uint64_t_u_u(((((*l_385) >= g_16.f3) | (safe_sub_func_int8_t_s_s(g_16.f4, 0xB9L))) <= l_386), p_31)), 5))), 1)), p_31)))) || 0xA6B8BF16BD3AC702LL) <= g_195) != p_31) & p_31)));
                    return l_382;
                }
            }
        }
        (*l_405) &= (safe_div_func_int64_t_s_s(p_31, p_31));
        (*l_405) = (0x9703L && (safe_add_func_int32_t_s_s((*g_54), ((p_31 > ((safe_rshift_func_uint8_t_u_s(255UL, p_31)) & (((safe_div_func_int16_t_s_s((safe_unary_minus_func_uint8_t_u(((&g_224 != (void*)0) < ((*l_405) < (p_31 <= g_16.f3))))), 0xD2E3L)) >= 0xC23C6ECB8E05617FLL) != p_31))) != p_31))));
    }
    else
    {
lbl_416:
        (*g_225) = l_413;
        for (g_218 = 24; (g_218 == 15); g_218 = safe_sub_func_uint16_t_u_u(g_218, 2))
        {
            if (g_110)
                goto lbl_416;
            (*l_413) = p_31;
        }
    }
    if (l_417)
    {
        int32_t l_420 = 1L;
        int8_t l_425 = 0L;
        int32_t l_485 = 0L;
        for (g_16.f3 = 0; (g_16.f3 == 39); g_16.f3 = safe_add_func_uint16_t_u_u(g_16.f3, 1))
        {
            return p_31;
        }
        l_420 = 6L;
        if (p_31)
        {
            int32_t *l_424 = &g_110;
            int32_t l_507 = 0x7AFCBD41L;
            uint32_t l_508 = 0x3093133CL;
            l_425 ^= (~(g_216 ^ (l_424 != (void*)0)));
            if ((0x47BFBD1E1DB44341LL | (safe_add_func_int16_t_s_s(g_216, (p_31 < l_425)))))
            {
                int32_t *l_428 = &g_76;
                (*g_225) = l_428;
                (*l_413) |= (safe_div_func_uint32_t_u_u(((((g_55 ^ 0xBA555173L) <= ((safe_div_func_uint64_t_u_u(((safe_rshift_func_uint16_t_u_s((+g_55), l_436)) ^ g_55), g_16.f6)) < (!((safe_div_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((1UL ^ (6L >= p_31)), p_31)), (*l_428))) ^ g_16.f1)))) & 0x24BA6F3BL) ^ 6UL), g_175));
            }
            else
            {
                int32_t *l_444 = &l_420;
                if ((safe_rshift_func_int8_t_s_u((&l_285 == &l_285), p_31)))
                {
                    int16_t l_447 = 0x0F39L;
                    l_444 = (void*)0;
                    for (g_16.f0 = 0; (g_16.f0 > 7); g_16.f0 = safe_add_func_int8_t_s_s(g_16.f0, 1))
                    {
                        int32_t ****l_455 = &g_224;
                        (*l_413) = (((l_447 == ((safe_div_func_int32_t_s_s(((((~((*g_224) != (void*)0)) == (((safe_mul_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(((p_31 < ((&g_224 == l_455) < (safe_mul_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((~(safe_sub_func_int64_t_s_s((safe_mul_func_uint8_t_u_u((p_31 & (safe_mul_func_int16_t_s_s((safe_div_func_int32_t_s_s(((((((safe_mod_func_uint64_t_u_u((safe_sub_func_int32_t_s_s(((safe_rshift_func_int16_t_s_s((safe_unary_minus_func_int8_t_s(l_447)), 3)) ^ ((1L ^ p_31) >= g_16.f3)), 4294967295UL)), l_425)) && p_31) >= l_425) >= 0xEA618A17L) && 9L) ^ p_31), p_31)), (-4L)))), g_195)), l_447))), 0x9D01L)), g_76)))) ^ 0x6FA48EE6909606A0LL), 2)), 0x28L)) && l_447) < 1L)) == l_447) >= g_216), g_16.f2)) ^ p_31)) != 0x247B4517E80FDE94LL) >= (-9L));
                        (*l_424) |= (p_31 | (safe_add_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(g_55, 6)), p_31)));
                    }
                }
                else
                {
                    int32_t *l_482 = &g_76;
                    l_482 = &l_420;
                }
                for (g_16.f5 = 9; (g_16.f5 <= 10); g_16.f5++)
                {
                    l_485 ^= l_420;
                    if ((*l_424))
                        break;
                    for (g_216 = 0; (g_216 >= (-25)); g_216--)
                    {
                        int32_t *l_496 = (void*)0;
                        (*l_424) |= (((safe_mod_func_int32_t_s_s((*g_54), (0L ^ (&l_485 != (void*)0)))) | p_31) == (safe_lshift_func_int8_t_s_u((safe_mul_func_uint8_t_u_u((((&g_224 == (void*)0) || g_55) || ((safe_div_func_int64_t_s_s(0x3ACB93F0E83303B9LL, (-6L))) && p_31)), g_16.f4)), 3)));
                        (*g_225) = l_496;
                        return p_31;
                    }
                }
                l_508 ^= (safe_sub_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_s((l_424 == l_444), 2)) & ((*l_424) != (p_31 == (safe_mul_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(p_31, ((safe_lshift_func_uint16_t_u_s((l_507 == (&l_485 == l_444)), 6)) && ((((g_175 <= 0UL) > l_425) >= p_31) >= 0x323745E6L)))), 9L))))), 0xA1E4L));
            }
            l_420 &= ((g_76 & (safe_mul_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(0UL, ((*l_413) ^ ((((void*)0 != &g_225) != (safe_mul_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(((void*)0 == &l_420), ((0UL & ((safe_mul_func_uint16_t_u_u((&g_224 != &g_224), p_31)) == g_16.f0)) != 0xC931L))), 65535UL))) > g_16.f3)))), (-1L)))) > p_31);
        }
        else
        {
            int32_t ****l_528 = &g_224;
            int32_t l_533 = (-1L);
            l_534 ^= (safe_mod_func_uint64_t_u_u((safe_add_func_uint32_t_u_u(l_485, (((safe_sub_func_uint64_t_u_u((!((void*)0 == (*g_224))), (p_31 && p_31))) == (safe_rshift_func_int8_t_s_u(((l_528 == l_285) ^ p_31), 2))) || (safe_add_func_uint8_t_u_u((safe_div_func_int32_t_s_s(l_533, (*l_413))), g_175))))), l_425));
        }
    }
    else
    {
        uint32_t l_557 = 0UL;
        int32_t l_558 = (-1L);
        int32_t ****l_574 = &g_224;
        uint32_t l_599 = 1UL;
        l_558 = (safe_div_func_uint64_t_u_u(((safe_add_func_uint32_t_u_u(((safe_mul_func_int8_t_s_s((safe_mod_func_int32_t_s_s((safe_lshift_func_int8_t_s_u((((safe_mod_func_uint32_t_u_u((((p_31 | g_110) <= ((p_31 == (((*g_54) == (safe_mul_func_int8_t_s_s(g_16.f6, g_16.f0))) > (safe_sub_func_uint32_t_u_u((&g_225 == (void*)0), (safe_div_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((safe_unary_minus_func_int64_t_s((l_556 && 0x9B61E3E17F145D16LL))), p_31)), 1UL)))))) < 0L)) > g_216), (*l_413))) || l_557) | 1L), g_16.f2)), 0xBD6B748EL)), p_31)) >= p_31), l_557)) <= 255UL), g_16.f2));
        (*l_413) = (((safe_add_func_uint16_t_u_u(p_31, (safe_add_func_uint64_t_u_u((p_31 != ((safe_add_func_int64_t_s_s((+p_31), (safe_mul_func_uint16_t_u_u((safe_div_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((safe_mul_func_int16_t_s_s((l_574 == l_285), (safe_lshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_u((safe_mul_func_int8_t_s_s((safe_sub_func_int16_t_s_s((safe_div_func_int64_t_s_s((safe_lshift_func_uint8_t_u_u((+0x1FL), (((safe_sub_func_uint64_t_u_u((safe_mul_func_uint8_t_u_u(((safe_mod_func_uint32_t_u_u(p_31, (((safe_sub_func_uint32_t_u_u((g_596 == (void*)0), g_598)) ^ p_31) ^ p_31))) < 0x9EL), 0xA9L)), g_218)) && l_599) < g_55))), (*l_413))), l_600)), 253UL)), p_31)), l_599)))), 13)), g_16.f3)), p_31)))) <= l_601)), g_76)))) > (*l_413)) ^ g_216);
    }
    return p_31;
}
static int32_t func_33(uint32_t p_34, int32_t p_35)
{
    int64_t l_339 = 0L;
    int32_t **l_349 = &g_226;
    for (g_218 = 0; (g_218 > 60); g_218 = safe_add_func_int16_t_s_s(g_218, 8))
    {
        uint8_t l_333 = 253UL;
        uint32_t l_334 = 4294967293UL;
        int32_t *l_340 = &g_76;
        int32_t ** const **l_350 = (void*)0;
        (*l_340) = (((1L >= 0xE24BL) ^ (safe_mul_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((safe_sub_func_int8_t_s_s(0L, (safe_div_func_int8_t_s_s(((safe_mul_func_int16_t_s_s((safe_mul_func_int8_t_s_s(((l_333 ^ l_334) & ((((safe_add_func_int16_t_s_s(g_16.f4, (((safe_rshift_func_uint16_t_u_s(((g_55 || (l_339 & l_334)) >= g_16.f6), l_339)) <= l_339) >= p_34))) == p_34) >= (-3L)) != l_339)), g_55)), 0xB675L)) | 0x85F17F0FL), (-7L))))), l_339)), 3)) && l_333), l_334))) || l_339);
        if ((*l_340))
            break;
        for (l_339 = 0; (l_339 != (-15)); l_339 = safe_sub_func_int16_t_s_s(l_339, 5))
        {
            int32_t l_356 = 3L;
            (*l_340) &= (&l_340 == &l_340);
            for (g_16.f1 = 0; (g_16.f1 >= 35); g_16.f1++)
            {
                const uint32_t l_348 = 1UL;
                int32_t l_354 = 0x957A56D6L;
                l_354 = ((+(0x14A0L == (g_216 < ((safe_mul_func_uint8_t_u_u(l_348, (((l_349 != (*g_224)) < (l_350 == (void*)0)) == g_175))) || (safe_div_func_uint32_t_u_u((safe_unary_minus_func_int16_t_s((-8L))), g_216)))))) > g_110);
                (**g_224) = l_340;
            }
            if (((0x6EBF33B00657D72FLL & ((!(p_35 && ((p_34 | l_356) <= (0x48L ^ (&g_224 == (void*)0))))) ^ p_34)) || (((void*)0 == &g_224) == p_34)))
            {
                int32_t ** const ***l_357 = &l_350;
                l_357 = &l_350;
                (*l_340) &= p_35;
            }
            else
            {
                return (*g_54);
            }
        }
        (*g_225) = l_340;
    }
    return l_339;
}
static uint16_t func_44(uint64_t p_45, int32_t p_46, uint32_t p_47, int32_t p_48)
{
    const int32_t **l_287 = &g_54;
    const int32_t ***l_286 = &l_287;
    int32_t *l_288 = &g_110;
    int64_t l_291 = 0x793C2613D90FEA26LL;
    (*l_288) = ((void*)0 != l_286);
    if (((*l_287) != &p_46))
    {
lbl_316:
        (*l_288) ^= p_45;
    }
    else
    {
        int32_t ***l_289 = (void*)0;
        uint64_t l_290 = 18446744073709551615UL;
        l_290 &= ((((void*)0 != l_289) >= (((void*)0 != (*l_286)) ^ g_76)) <= g_175);
        return g_16.f0;
    }
    if (l_291)
    {
        uint16_t l_292 = 65535UL;
        int32_t *l_299 = &g_76;
        int32_t ****l_302 = (void*)0;
        uint32_t l_303 = 1UL;
        int32_t *l_314 = &g_110;
        uint32_t l_315 = 0xCDC9E869L;
        (*l_299) = (l_292 >= ((safe_add_func_uint32_t_u_u(((safe_mod_func_uint64_t_u_u((&g_225 == &g_225), (safe_add_func_int32_t_s_s((&p_46 != l_299), p_46)))) == (+((((+((&g_224 != l_302) <= (*l_288))) && (-10L)) <= 1L) && p_47))), l_303)) <= g_16.f2));
        (*l_299) = ((safe_unary_minus_func_uint32_t_u(((((*l_288) & ((safe_lshift_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((**l_287), (((***l_286) | (!(safe_mul_func_int16_t_s_s(((-1L) <= 0UL), (g_16.f1 & ((&p_46 != l_314) >= (((***l_286) || g_175) >= g_16.f2))))))) != 0xFF8C8359L))), 6)) || l_315)) >= (**l_287)) == (***l_286)))) < g_16.f0);
    }
    else
    {
        if (g_16.f1)
            goto lbl_316;
        return g_218;
    }
    return g_16.f3;
}
static int16_t func_49(int32_t p_50)
{
    int32_t l_129 = 0L;
    int32_t l_133 = (-1L);
    int32_t l_146 = 0L;
    int32_t l_178 = 6L;
    int32_t l_196 = 1L;
    int32_t l_198 = 0L;
    int32_t ** const l_223 = (void*)0;
    int32_t ** const *l_222 = &l_223;
    int32_t ** const ** const l_221 = &l_222;
    int32_t **l_266 = (void*)0;
    for (g_16.f6 = (-19); (g_16.f6 != 17); g_16.f6 = safe_add_func_uint64_t_u_u(g_16.f6, 2))
    {
        int32_t *l_114 = &g_110;
        int8_t l_115 = 0x5EL;
        int32_t *l_116 = (void*)0;
        int32_t *l_117 = &g_110;
        int32_t *l_118 = (void*)0;
        int32_t *l_119 = (void*)0;
        int32_t *l_120 = &g_76;
        int32_t *l_121 = (void*)0;
        int32_t *l_122 = &g_110;
        int32_t *l_123 = &g_110;
        int32_t *l_124 = &g_110;
        int32_t l_125 = 0L;
        int32_t *l_126 = (void*)0;
        int32_t *l_127 = &g_110;
        int32_t *l_128 = &l_125;
        int32_t *l_130 = &g_110;
        int32_t *l_131 = &l_129;
        int32_t *l_132 = (void*)0;
        int32_t *l_134 = (void*)0;
        int32_t *l_135 = (void*)0;
        int32_t *l_136 = (void*)0;
        int32_t l_137 = (-1L);
        int32_t *l_138 = (void*)0;
        int32_t *l_139 = &l_125;
        int32_t *l_140 = (void*)0;
        int32_t *l_141 = &l_137;
        int32_t *l_142 = &g_76;
        int32_t *l_143 = &g_110;
        int32_t *l_144 = (void*)0;
        int32_t *l_145 = &l_137;
        int32_t *l_147 = &l_137;
        int32_t *l_148 = &l_137;
        int32_t *l_149 = &g_110;
        int32_t *l_150 = &l_129;
        int32_t *l_151 = (void*)0;
        int32_t *l_152 = &g_110;
        int32_t *l_153 = (void*)0;
        int32_t *l_154 = &g_76;
        int32_t *l_155 = &g_76;
        int32_t l_156 = (-9L);
        int32_t l_157 = (-9L);
        int32_t *l_158 = &l_129;
        int32_t *l_159 = &l_133;
        int32_t *l_160 = &g_110;
        int32_t *l_161 = &l_146;
        int32_t *l_162 = &g_110;
        int32_t *l_163 = &g_110;
        int32_t *l_164 = (void*)0;
        int32_t *l_165 = &l_137;
        int32_t *l_167 = &l_157;
        int32_t *l_168 = &l_157;
        int32_t *l_169 = &l_125;
        int32_t *l_170 = &g_76;
        int32_t *l_171 = &l_137;
        int32_t *l_172 = &g_110;
        int32_t *l_173 = &l_137;
        int32_t *l_174 = &l_146;
        int32_t *l_176 = (void*)0;
        int32_t *l_177 = &g_110;
        int32_t *l_179 = &g_76;
        int32_t *l_180 = &l_129;
        int32_t l_181 = (-1L);
        int32_t l_182 = 0x6DA865B3L;
        int32_t *l_183 = &l_182;
        int32_t *l_184 = (void*)0;
        int32_t *l_185 = &l_137;
        int32_t *l_186 = &g_110;
        int32_t *l_187 = (void*)0;
        int32_t *l_188 = &l_157;
        int32_t *l_189 = &l_157;
        int32_t *l_190 = &l_125;
        int32_t *l_191 = &l_181;
        int32_t *l_192 = &l_146;
        int32_t l_193 = 1L;
        int32_t *l_194 = &l_129;
        int32_t *l_197 = &l_182;
        int32_t *l_199 = &l_137;
        int32_t *l_200 = &g_110;
        int32_t *l_201 = &l_156;
        int32_t *l_202 = &l_193;
        int32_t *l_203 = (void*)0;
        int32_t *l_204 = &l_133;
        int32_t *l_205 = &g_110;
        int32_t *l_206 = (void*)0;
        int32_t *l_207 = &l_125;
        int32_t *l_208 = (void*)0;
        int32_t *l_209 = &l_146;
        int32_t *l_210 = (void*)0;
        int32_t *l_211 = &l_182;
        int32_t *l_212 = &l_133;
        int32_t *l_213 = &l_125;
        int32_t *l_214 = (void*)0;
        int32_t *l_215 = &l_137;
        int32_t *l_217 = &l_125;
        int32_t ***l_227 = &g_225;
        int32_t *l_255 = &l_196;
        int32_t ***l_276 = (void*)0;
        g_218--;
        if (((p_50 && ((l_221 == (void*)0) & ((((4294967294UL & ((void*)0 == g_224)) | (((l_227 != (void*)0) >= ((safe_add_func_int64_t_s_s(((&l_222 != (void*)0) > (-1L)), g_195)) < 0x2A20AB37EAFC3DE1LL)) < g_175)) ^ p_50) == g_195))) & p_50))
        {
            uint64_t l_232 = 0x58AA24F531248EFBLL;
            uint16_t l_254 = 65535UL;
            for (g_218 = 0; (g_218 != 21); g_218 = safe_add_func_int64_t_s_s(g_218, 1))
            {
                l_232--;
            }
            if ((safe_mod_func_int16_t_s_s(p_50, 0xA964L)))
            {
                uint32_t l_239 = 4294967291UL;
                for (l_157 = (-24); (l_157 > 6); ++l_157)
                {
                    l_239++;
                    (*l_215) &= p_50;
                }
            }
            else
            {
                int32_t * const *l_262 = &l_155;
                int32_t * const **l_261 = &l_262;
                int32_t l_263 = (-8L);
                (*l_152) &= ((safe_div_func_int8_t_s_s((((void*)0 == (*g_224)) ^ ((safe_rshift_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(((&p_50 != (void*)0) | 0xBFAE32FEL), (safe_lshift_func_uint8_t_u_u(((void*)0 != l_227), 2)))), (4294967295UL ^ ((safe_mod_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(l_254, 0x6AL)), p_50)) || g_16.f0)))) | 0x5932AA67735A7C04LL)), g_218)) | 0x45L);
                (**l_227) = l_255;
                (*l_120) = ((1L || ((l_227 != (void*)0) & (!p_50))) == (safe_div_func_int64_t_s_s((((g_195 ^ (((safe_mod_func_int8_t_s_s((l_261 != (void*)0), (*l_123))) <= p_50) && g_16.f1)) > g_16.f1) || p_50), l_263)));
                (**g_224) = &p_50;
            }
            for (l_129 = 0; (l_129 != 24); l_129 = safe_add_func_uint16_t_u_u(l_129, 4))
            {
                return g_216;
            }
        }
        else
        {
            int16_t l_273 = 0x7202L;
            int16_t l_279 = 0L;
            (**g_224) = (*g_225);
            if ((**g_225))
                break;
            if (((((void*)0 != l_266) || (((p_50 | (safe_mod_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((p_50 > (**g_225)), ((void*)0 != &l_227))), (*l_200)))) <= (safe_div_func_uint16_t_u_u(((g_55 & l_273) | p_50), p_50))) | g_110)) || p_50))
            {
                (*l_114) ^= (((((((**g_225) & (l_227 != (*l_221))) && (l_276 == (void*)0)) || p_50) | (&l_222 != &l_227)) == ((safe_div_func_int32_t_s_s((p_50 | 0UL), g_175)) == l_279)) || g_16.f2);
            }
            else
            {
                uint64_t l_280 = 0x839C7493250C18A6LL;
                --l_280;
            }
        }
        for (l_181 = 0; (l_181 <= (-26)); l_181 = safe_sub_func_uint64_t_u_u(l_181, 7))
        {
            (*l_170) |= 0x04B37A05L;
        }
    }
    p_50 = ((void*)0 == &g_224);
    g_110 &= (**g_225);
    return p_50;
}
static int32_t func_51(int32_t p_52)
{
    const int32_t **l_56 = (void*)0;
    const int32_t **l_57 = &g_54;
    uint32_t l_108 = 0UL;
    int32_t *l_109 = &g_110;
    (*l_57) = g_54;
lbl_111:
    if ((((safe_rshift_func_int16_t_s_u((((safe_sub_func_int8_t_s_s(g_16.f3, (safe_add_func_uint8_t_u_u(p_52, (safe_add_func_int16_t_s_s(((**l_57) && (&g_54 != l_56)), ((&g_54 == &g_54) && (safe_lshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_u((((((**l_57) && ((safe_add_func_uint64_t_u_u(p_52, p_52)) <= (**l_57))) != g_16.f4) ^ 65530UL) < g_16.f6), 6)), p_52))))))))) < 0xA0F0L) && (**l_57)), 13)) >= 0x3236L) || (**l_57)))
    {
        int32_t *l_75 = &g_76;
        int32_t **l_74 = &l_75;
        (*l_75) = (l_74 == (void*)0);
        return (*l_75);
    }
    else
    {
        const int32_t ***l_78 = &l_57;
        const int32_t ****l_77 = &l_78;
        (*l_77) = &l_57;
        g_76 = (safe_div_func_uint64_t_u_u((252UL | (safe_mod_func_uint64_t_u_u(((((safe_sub_func_uint8_t_u_u((**l_57), (safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u((safe_unary_minus_func_int8_t_s(((((g_76 & (&l_78 != &l_78)) >= (***l_78)) && (safe_div_func_int64_t_s_s(4L, ((safe_rshift_func_int8_t_s_s(((void*)0 == &g_76), (**l_57))) | 6L)))) ^ 0xE0EF155DL))), 6)), p_52)))) | p_52) > 1L) == p_52), (***l_78)))), g_76));
        (***l_77) = &g_76;
    }
    (*l_109) |= (0x224F168EL > ((safe_mod_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(((safe_lshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_s(0xFCL, (safe_mul_func_int8_t_s_s(((((safe_div_func_int64_t_s_s(((l_56 == l_56) & g_55), p_52)) ^ (((safe_lshift_func_int8_t_s_s(0x68L, ((((**l_57) <= (((*l_57) != (*l_57)) < 0x76CAF4455642E063LL)) || p_52) < 18446744073709551615UL))) > g_16.f0) == g_16.f1)) < 18446744073709551612UL) || g_16.f0), 0x80L)))), 1)) <= p_52), p_52)), l_108)) >= (*g_54)));
    if (g_76)
        goto lbl_111;
    return (*l_109);
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_16.f0;
    csmith_sink_ = g_16.f1;
    csmith_sink_ = g_16.f2;
    csmith_sink_ = g_16.f3;
    csmith_sink_ = g_16.f4;
    csmith_sink_ = g_16.f5;
    csmith_sink_ = g_16.f6;
    csmith_sink_ = g_55;
    csmith_sink_ = g_76;
    csmith_sink_ = g_110;
    csmith_sink_ = g_166;
    csmith_sink_ = g_175;
    csmith_sink_ = g_195;
    csmith_sink_ = g_216;
    csmith_sink_ = g_218;
    csmith_sink_ = g_598;
    csmith_sink_ = g_623;
    csmith_sink_ = g_674;
    csmith_sink_ = g_795;
    csmith_sink_ = g_815;
    csmith_sink_ = g_873;
    csmith_sink_ = g_916;
    csmith_sink_ = g_953;
    csmith_sink_ = g_982;
    csmith_sink_ = g_1004;
    csmith_sink_ = g_1029;
    csmith_sink_ = g_1166;
    csmith_sink_ = g_1206;
    csmith_sink_ = g_1272;
    csmith_sink_ = g_1287;
    platform_main_end(0,0);
    return 0;
}
