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
static int32_t g_100 = 4;
static uint8_t g_147 = 255U;
static int8_t g_181 = 0x2A;
static uint32_t g_182 = 0xC0673FC9;
static uint32_t g_186 = 0U;
static uint8_t g_236 = 0xAD;
static int8_t g_242 = 0xEF;
static int16_t g_243 = 0x4FC1;
static uint32_t g_244 = 0xFDF31C3D;
static uint32_t g_268 = 4294967288U;
static int16_t g_362 = 0x219A;
static int16_t g_413 = 0x03BE;
static int32_t g_438 = 0x747C4E96;
static int16_t g_439 = 0x021E;
static uint32_t g_440 = 0U;
static int32_t g_511 = 1;
static int32_t g_541 = 0x6AF9661F;
static uint32_t g_542 = 0x3BFC38B6;
static uint8_t g_622 = 0xC2;
static uint8_t g_780 = 0x9E;
static int32_t g_806 = 2;
static uint8_t g_807 = 0U;
static uint32_t func_1(void);
static int32_t func_2(int8_t p_3, uint32_t p_4, uint32_t p_5);
inline static int32_t func_21(int32_t p_22, int32_t p_23, uint32_t p_24, int16_t p_25, int32_t p_26);
inline static int8_t func_31(uint32_t p_32, int8_t p_33, const int32_t p_34, int8_t p_35, int16_t p_36);
static int16_t func_38(int32_t p_39, const uint32_t p_40);
inline static int8_t func_42(int16_t p_43, uint16_t p_44, int32_t p_45, int8_t p_46);
inline static uint32_t func_49(int8_t p_50, int8_t p_51, uint8_t p_52, const uint32_t p_53, uint8_t p_54);
inline static int8_t func_55(uint16_t p_56, int32_t p_57, uint32_t p_58);
inline static int8_t func_62(int32_t p_63, int8_t p_64, int32_t p_65, uint32_t p_66);
inline static int16_t func_67(uint8_t p_68, uint32_t p_69);
static uint32_t func_1(void)
{
    uint32_t l_27 = 4294967295U;
    int16_t l_798 = 0xA152;
    int32_t l_802 = (-7);
    int32_t l_803 = 0xB28D741A;
    int32_t l_804 = 0x105FF6A7;
    int32_t l_805 = 0x57F39EF1;
    l_802 |= func_2((safe_mul_func_uint16_t_u_u((!(safe_add_func_uint16_t_u_u((((0x205B < ((safe_sub_func_int32_t_s_s(6, 1U)) < ((safe_add_func_uint8_t_u_u((+(safe_rshift_func_int8_t_s_s((safe_mod_func_int8_t_s_s((g_20 >= func_21(l_27, l_27, g_20, ((l_27 >= (((safe_add_func_uint8_t_u_u(l_27, l_27)) || g_20) ^ 0U)) | l_27), l_27)), l_798)), g_242))), 0x84)) | 0x9B))) == g_20) != 0xA982ADD0), g_181))), 0xA7D8)), g_20, g_780);
    --g_807;
    l_802 = (((!l_27) || (safe_add_func_int8_t_s_s((!0x55BB), 252U))) != (255U && (safe_rshift_func_int16_t_s_s((((safe_lshift_func_int8_t_s_u((l_803 | (g_100 | (g_413 ^ g_186))), 5)) >= (safe_sub_func_uint32_t_u_u((safe_mul_func_int16_t_s_s(((safe_mod_func_uint8_t_u_u(l_804, 1)) != g_807), g_438)), l_27))) != l_802), 9))));
    return g_807;
}
static int32_t func_2(int8_t p_3, uint32_t p_4, uint32_t p_5)
{
    uint8_t l_799 = 2U;
    l_799++;
    return p_3;
}
inline static int32_t func_21(int32_t p_22, int32_t p_23, uint32_t p_24, int16_t p_25, int32_t p_26)
{
    uint16_t l_30 = 3U;
    const uint8_t l_37 = 0x5B;
    uint32_t l_266 = 4294967295U;
    int32_t l_797 = 0x598351C9;
    l_797 &= (l_30 | func_31((l_37 != (((p_23 ^ (g_20 ^ func_38((+((g_20 | 0xD3) >= func_42(g_20, g_20, (safe_sub_func_uint8_t_u_u(((func_49(func_55(l_30, g_20, g_20), p_23, g_20, g_20, l_30) > g_242) > l_30), p_26)), l_266))), g_181))) | l_266) <= g_541)), p_23, g_20, g_243, g_439));
    return l_797;
}
inline static int8_t func_31(uint32_t p_32, int8_t p_33, const int32_t p_34, int8_t p_35, int16_t p_36)
{
    int32_t l_593 = 0x2A305BE1;
    int32_t l_616 = 0x10AEB036;
    int32_t l_617 = 1;
    int32_t l_619 = 0x1F8EBCB2;
    int32_t l_620 = 0x9ACD6B56;
    uint32_t l_694 = 0x5FE190DD;
    uint32_t l_781 = 2U;
    uint16_t l_788 = 0U;
    const int32_t l_796 = 0;
    if ((safe_lshift_func_int16_t_s_s((safe_mod_func_uint8_t_u_u(((g_268 <= (safe_mul_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(((((((0x6B4E3A92 ^ (p_36 <= (g_147 > ((safe_mul_func_uint8_t_u_u(l_593, (((-1) != (safe_rshift_func_uint8_t_u_u(g_100, 2))) >= g_511))) | (0x36 || 0x98))))) || p_35) >= p_36) || p_33) | p_34) >= 0xB0), l_593)), 0x1D))) == p_36), l_593)), 13)))
    {
        uint16_t l_605 = 0x24CC;
        int32_t l_614 = (-2);
        int32_t l_649 = 0xD1F946E4;
        for (g_362 = 15; (g_362 == 17); g_362 = safe_add_func_uint32_t_u_u(g_362, 5))
        {
            const uint8_t l_598 = 1U;
            int32_t l_615 = 0xE46A7C77;
            int32_t l_618 = 0;
            int32_t l_621 = (-1);
            if (l_598)
                break;
            l_614 = (safe_rshift_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_s((((safe_mul_func_int8_t_s_s(l_605, ((((((safe_rshift_func_int16_t_s_s(p_33, 13)) == 8) & p_33) < p_36) ^ l_593) ^ (safe_lshift_func_int16_t_s_u(((0xA3492D31 || ((safe_rshift_func_int16_t_s_s(p_35, (safe_mod_func_uint16_t_u_u(p_33, p_34)))) <= p_35)) <= g_440), g_147))))) >= 4) | l_593), 7)) < g_20), 6));
            g_622++;
            l_614 ^= 0x0C79D9A0;
        }
        for (g_147 = 0; (g_147 == 20); g_147++)
        {
            uint32_t l_636 = 4294967288U;
            if ((safe_lshift_func_uint8_t_u_u((p_34 <= (-1)), 4)))
            {
                l_619 = (((p_33 | g_100) ^ ((safe_lshift_func_int16_t_s_u((+l_614), (g_147 && ((safe_mod_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_s(l_636, 7)) != (safe_lshift_func_int8_t_s_s((safe_mod_func_int8_t_s_s((p_32 ^ (safe_sub_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(p_36, (safe_lshift_func_uint8_t_u_s(0x15, (safe_rshift_func_int16_t_s_u((p_35 > l_605), 6)))))), p_33))), 255U)), l_605))), p_36)) < g_542)))) || 0xD65060BC)) > 0x4CDA);
                return l_649;
            }
            else
            {
                uint32_t l_658 = 8U;
                int32_t l_670 = 0;
                l_616 = (((p_36 == g_511) || (safe_sub_func_uint16_t_u_u(((((p_35 && ((g_20 | (l_619 >= p_36)) && (0xDDBE >= ((safe_lshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(p_34, 10)), g_186)) == l_649)))) < l_658) != 0U) > 0x7A0A), p_33))) >= p_32);
                if (g_20)
                    continue;
                if (l_649)
                    break;
                l_620 = ((((safe_mul_func_uint16_t_u_u(l_649, ((safe_mul_func_uint8_t_u_u(p_33, (((((((((safe_sub_func_uint16_t_u_u(g_242, (safe_mod_func_int16_t_s_s((~l_670), (safe_sub_func_uint32_t_u_u(((l_620 && p_33) != 65535U), 0xC177AAEC)))))) && (safe_sub_func_int8_t_s_s(0, 0x72))) || 0x00F266B3) == 4294967294U) && 0) > l_636) < l_670) || 2) >= l_619))) && p_34))) | l_636) | 0xD1) || 0U);
            }
        }
        g_100 = (safe_mod_func_int32_t_s_s(((safe_add_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((((((safe_rshift_func_int16_t_s_s(p_33, (safe_unary_minus_func_uint8_t_u((l_617 != (safe_add_func_int32_t_s_s((safe_mul_func_int8_t_s_s((safe_mul_func_int16_t_s_s(((p_33 ^ p_32) == g_440), (safe_add_func_int16_t_s_s((((safe_rshift_func_int8_t_s_u(g_440, (((g_236 || ((p_34 & 0x2CA7) | 0x0F)) | 0x358FC3C0) ^ l_614))) & g_439) ^ 5), p_32)))), p_32)), 9))))))) != g_181) && p_34) > l_614) != l_694), 6)), p_32)) > l_619), l_614));
        for (g_244 = 25; (g_244 == 1); g_244 = safe_sub_func_uint32_t_u_u(g_244, 1))
        {
            uint32_t l_697 = 0U;
            l_697 = 0xBDF2BCA8;
        }
    }
    else
    {
        uint8_t l_700 = 0x2F;
        int32_t l_734 = (-10);
        uint16_t l_765 = 1U;
        l_617 = (safe_mod_func_uint8_t_u_u(l_700, 3U));
        for (g_182 = 0; (g_182 < 45); g_182 = safe_add_func_uint16_t_u_u(g_182, 2))
        {
            int8_t l_716 = 0xFC;
            int32_t l_735 = 0xB17D30F8;
            for (l_700 = 0; (l_700 >= 34); l_700 = safe_add_func_int32_t_s_s(l_700, 3))
            {
                uint32_t l_720 = 0xF4B1FA80;
                int32_t l_723 = 6;
                g_438 = (safe_rshift_func_int16_t_s_s((safe_sub_func_int16_t_s_s((g_100 | 1), (safe_mod_func_int16_t_s_s(p_34, (safe_rshift_func_uint16_t_u_u((((safe_rshift_func_int8_t_s_u((safe_unary_minus_func_uint32_t_u((((l_716 & p_32) == ((((safe_mul_func_uint8_t_u_u(((p_33 && ((g_147 <= ((safe_unary_minus_func_int32_t_s(l_720)) | (safe_mul_func_uint16_t_u_u(g_236, 0xF827)))) >= l_723)) & 0x33D47206), p_32)) < l_700) >= 7) && g_244)) != p_32))), g_182)) != l_700) <= g_236), p_32)))))), p_34));
                g_100 ^= g_182;
                for (l_620 = 0; (l_620 <= 14); ++l_620)
                {
                    g_541 = g_244;
                    if (g_413)
                        break;
                }
            }
            g_100 = (g_511 == ((((+(((l_700 || ((-1) <= ((g_440 > p_33) ^ ((0x0AD6 != p_33) & (safe_sub_func_int8_t_s_s(l_700, 0x3D)))))) >= g_244) <= l_716)) & 0x1E) > p_33) && g_181));
            for (l_700 = 0; (l_700 != 47); l_700++)
            {
                uint16_t l_736 = 65535U;
                for (g_362 = 0; (g_362 >= 9); g_362 = safe_add_func_int32_t_s_s(g_362, 1))
                {
                    int32_t l_733 = 0;
                    ++l_736;
                    g_511 = ((safe_rshift_func_int8_t_s_u((((((1 | (safe_mul_func_uint8_t_u_u(l_735, (safe_sub_func_int32_t_s_s(((((((safe_add_func_uint8_t_u_u((((+0xD4) > (65535U > p_35)) | (safe_rshift_func_uint16_t_u_u((1U > ((0x0B20 > ((safe_rshift_func_int16_t_s_s(0xAF9E, ((l_736 && p_32) && 0xB7E052A3))) & 0x63)) && g_243)), p_34))), 252U)) || g_268) & l_734) ^ l_716) && p_36) <= l_736), 4294967295U))))) < g_362) && 0xA506) <= 0x5F) < l_733), 7)) != 0x948B);
                }
                g_541 = ((((((safe_add_func_int8_t_s_s(l_716, p_34)) < g_186) | 0xF3) > (safe_lshift_func_int16_t_s_u((((safe_lshift_func_uint16_t_u_s((safe_unary_minus_func_uint8_t_u((safe_lshift_func_int16_t_s_u((safe_add_func_uint32_t_u_u(p_32, ((p_34 == 0x084D0627) == 0x1E))), 8)))), ((((safe_rshift_func_uint8_t_u_u(l_765, 7)) <= 0x6D) <= g_439) == l_620))) || g_181) | g_243), 15))) && 1) >= 0xDA91);
            }
            l_734 = ((0x1D1E461C != (g_541 ^ (((safe_mul_func_int8_t_s_s(((safe_mod_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_s(((safe_sub_func_uint16_t_u_u(((~(g_244 != (safe_rshift_func_int16_t_s_s(((~(safe_rshift_func_int8_t_s_s((g_780 < ((((l_781 == (safe_add_func_uint32_t_u_u(p_36, 0xFF378B42))) || ((((0x9D >= ((((safe_rshift_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(((g_622 | 0U) && g_413), 1U)), 3)) || 0x49) & 0x4C) & g_236)) ^ p_34) > 2U) > g_181)) || g_622) | 0xE8)), p_36))) < l_619), 13)))) < l_593), 0x4844)) != l_700), 10)) == p_32), l_765)) || l_788), g_439)) < l_734) < l_716))) & g_236);
        }
        g_438 = (0x3F6AA859 != g_242);
    }
    l_616 &= 0xAFF845CD;
    l_619 = (g_244 != ((((safe_mul_func_uint8_t_u_u(((((((safe_unary_minus_func_int8_t_s(l_781)) | (65535U == 0x0927)) > 0x7E) | (safe_mod_func_uint32_t_u_u((l_781 >= g_362), l_619))) != p_33) != p_32), p_36)) | l_796) && l_796) <= l_781));
    return g_268;
}
static int16_t func_38(int32_t p_39, const uint32_t p_40)
{
    uint16_t l_580 = 0x206E;
    g_438 &= (safe_sub_func_uint16_t_u_u(0x03E6, (l_580 & (p_40 > g_413))));
    return l_580;
}
inline static int8_t func_42(int16_t p_43, uint16_t p_44, int32_t p_45, int8_t p_46)
{
    int32_t l_267 = (-8);
    uint8_t l_287 = 0xD2;
    uint32_t l_306 = 4294967291U;
    uint32_t l_361 = 0xF503595D;
    uint32_t l_447 = 0x81632061;
    const int8_t l_460 = (-1);
    uint32_t l_480 = 0x624D7EAA;
    int32_t l_540 = 0xBC30966F;
    int32_t l_561 = 0x71616FBD;
    --g_268;
    if (l_267)
    {
        uint16_t l_286 = 0x93CF;
        int32_t l_360 = 0xF0162682;
        int32_t l_437 = 0x84C05448;
        uint32_t l_523 = 0x4C983524;
        p_45 = (safe_mod_func_int32_t_s_s(0xD5964E55, (safe_mod_func_int32_t_s_s((9 > ((((~(p_45 ^ (safe_mod_func_uint16_t_u_u((((((safe_rshift_func_int8_t_s_u(0x76, ((safe_mod_func_int16_t_s_s((((((5 == ((p_44 | (safe_mod_func_int16_t_s_s(l_267, (-1)))) < p_44)) < 0xA9163CD0) < 252U) != l_286) ^ p_43), l_287)) != l_287))) & 1) & l_286) ^ g_147) < p_46), 1U)))) && l_287) != 3) && g_147)), 4294967286U))));
        if ((l_286 >= ((+0x73540898) <= 1U)))
        {
            uint32_t l_297 = 0x7519BBCB;
            for (p_44 = (-30); (p_44 > 43); ++p_44)
            {
                const uint32_t l_330 = 0x96C84C52;
                uint32_t l_331 = 0x404F5728;
                const int32_t l_332 = (-7);
                if (g_242)
                    break;
                if (p_43)
                    break;
                p_45 = (safe_sub_func_int32_t_s_s(((safe_mul_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((((0x58BC <= l_286) < p_43) ^ p_44), 1)), (p_45 == l_297))) <= (safe_sub_func_int8_t_s_s((!(~(safe_add_func_int8_t_s_s((((safe_sub_func_uint32_t_u_u(g_182, g_182)) != 0xC2) > 0x58), p_45)))), l_286))), l_306));
                g_100 = (((p_43 || (((safe_lshift_func_int16_t_s_s((safe_sub_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(0xE5E3F2DE, (g_243 > (1 == (safe_mod_func_uint8_t_u_u((p_44 == (((l_287 | (safe_mod_func_int16_t_s_s(g_147, (safe_mul_func_int8_t_s_s(((g_100 == (!(((safe_sub_func_int32_t_s_s((safe_mod_func_int8_t_s_s(((safe_mul_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((l_330 | p_44), l_331)), l_286)) || g_100), 247U)), g_242)) >= g_181) > p_44))) < 0x1E), p_43))))) < 0) <= l_332)), 0xB2)))))), p_45)), 4)) <= p_44) >= p_43)) >= p_46) != 0);
            }
            return g_182;
        }
        else
        {
            int32_t l_337 = 0x08D8BCF4;
            int32_t l_386 = 0x79CEF782;
            uint16_t l_418 = 0xE117;
            int32_t l_435 = 1;
            int16_t l_509 = (-8);
            if ((((safe_mod_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((l_337 >= 0x6D), 0x2DB4)), g_100)) && p_45) && (((((l_337 > ((safe_rshift_func_int8_t_s_u((safe_mul_func_int16_t_s_s(((3 >= 65534U) ^ (safe_mod_func_int8_t_s_s(g_243, g_182))), 0x5623)), 6)) & g_186)) == l_337) || 0x9F) || 0x96) > g_182)))
            {
                uint16_t l_385 = 0U;
                int32_t l_436 = 1;
                for (g_100 = (-20); (g_100 > (-3)); g_100++)
                {
                    int32_t l_416 = (-9);
                    l_361 |= ((((-2) > (((safe_rshift_func_uint8_t_u_u((p_43 > (safe_mul_func_int8_t_s_s(0xB4, ((((-1) && (safe_mul_func_int8_t_s_s(p_43, (safe_rshift_func_int16_t_s_u((safe_mod_func_uint16_t_u_u(l_286, (safe_mod_func_int16_t_s_s(((l_337 == l_287) || ((safe_lshift_func_int8_t_s_u(((((g_100 && 0x4722) >= g_100) | g_244) <= p_45), 7)) | g_182)), p_44)))), g_244))))) <= 0x194C) | l_360)))), 7)) && g_242) >= p_44)) != p_44) == 1);
                    g_362 = (g_236 ^ (252U & g_243));
                    if ((0xC6D2 > ((-5) >= (((safe_add_func_uint32_t_u_u((safe_mul_func_int16_t_s_s((safe_sub_func_int32_t_s_s((safe_rshift_func_int8_t_s_s(((((((p_46 ^ (((safe_lshift_func_uint16_t_u_u(0x971F, 6)) <= (safe_add_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((0xFA89 < p_43), (((safe_sub_func_int32_t_s_s(g_181, (safe_rshift_func_int16_t_s_u((safe_sub_func_uint8_t_u_u(((safe_sub_func_uint16_t_u_u(p_44, (0x3EB5 && l_337))) & l_337), 0xB3)), 7)))) != l_337) > g_181))), g_362))) | g_362)) < 1U) <= l_385) & g_242) & p_43) <= 0x9F63), l_287)), g_242)), 8)), l_361)) == g_100) && g_244))))
                    {
                        l_386 = 5;
                        l_386 = p_46;
                    }
                    else
                    {
                        uint16_t l_391 = 1U;
                        uint32_t l_417 = 0xE9C32DDD;
                        g_413 ^= (((((safe_rshift_func_int16_t_s_s(l_391, 13)) == g_362) ^ (p_44 > (((((safe_mod_func_int32_t_s_s(g_236, l_360)) | (safe_lshift_func_int8_t_s_s(g_243, 1))) & (safe_mul_func_uint8_t_u_u(l_287, (safe_mod_func_uint8_t_u_u(0xDD, (safe_rshift_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(((safe_unary_minus_func_uint8_t_u((0xB7 ^ l_361))) && 7U), l_360)), 0xB490)), g_181)), 6U)), p_44)), l_337))))))) | 0U) == g_362))) != g_268) ^ p_45);
                        p_45 = (safe_mul_func_uint16_t_u_u((((l_416 & l_417) != l_418) & (safe_rshift_func_uint8_t_u_s(250U, 6))), l_386));
                        return g_186;
                    }
                    l_435 = (((0xBFAF && (((((l_385 | (safe_lshift_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(p_44, (l_416 != (safe_sub_func_uint16_t_u_u((((~(safe_mod_func_int32_t_s_s(((p_43 != (safe_rshift_func_uint8_t_u_s((((safe_unary_minus_func_uint8_t_u((safe_sub_func_int32_t_s_s(((4294967295U ^ (g_362 != g_362)) || 4294967286U), l_385)))) && 0x9E) < p_46), 5))) && l_385), l_385))) < l_361) ^ p_45), 0x5568))))), p_45))) > (-1)) <= p_43) && 0xD3) || l_360)) || p_45) <= 3);
                }
                ++g_440;
                l_447 = (safe_lshift_func_int16_t_s_u(p_46, (safe_lshift_func_uint8_t_u_u((0x79 || g_438), 0))));
                l_437 = (safe_sub_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_u((((g_20 < ((safe_mul_func_int16_t_s_s(g_242, (safe_lshift_func_int16_t_s_s(0x2E90, 9)))) <= g_413)) <= ((safe_add_func_uint16_t_u_u((((((((safe_lshift_func_uint8_t_u_u(((((p_45 < l_436) & ((l_361 > p_44) > (0xAC04 | g_413))) == p_45) == l_306), 0)) & l_361) != p_44) || 0x34BA4E07) > g_438) || 1) ^ l_460), 0x7A6D)) > (-1))) < 1U), 3)) | l_437), 0));
            }
            else
            {
                int32_t l_479 = 0xD65F5B50;
                p_45 ^= g_244;
                if ((safe_mod_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(g_100, (safe_mul_func_int8_t_s_s(0x62, ((safe_sub_func_uint32_t_u_u((0U & (safe_mod_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u((((safe_sub_func_uint16_t_u_u(p_44, g_362)) == ((((0 == (((safe_lshift_func_uint16_t_u_s(0U, 0)) <= ((safe_mod_func_uint16_t_u_u((4U | l_479), p_43)) < p_44)) | l_447)) && g_439) <= 1) < g_242)) >= l_480), g_242)), l_306))), 0xA1AE7860)) || p_46))))), l_286)))
                {
                    g_100 = ((~1) | (((!(0 | (p_44 & (+((((safe_lshift_func_uint8_t_u_s(((-1) >= l_360), 2)) & 0x76D7F5B2) == 0xC2EF) > (0x1B9BB46E & (((safe_rshift_func_int8_t_s_u(((!(l_479 <= p_46)) >= p_46), 7)) >= p_46) < l_447))))))) | p_43) | g_147));
                    g_100 = ((safe_mul_func_uint16_t_u_u(0U, ((safe_mul_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u(((255U > (safe_lshift_func_uint16_t_u_s(6U, (safe_lshift_func_int16_t_s_s((safe_mod_func_int8_t_s_s(((((!((g_268 == ((((p_44 > (safe_mod_func_uint16_t_u_u(l_479, ((+g_147) && (g_440 > (0xCDB6F072 != (-7))))))) >= 0U) & 0xF8D4) <= l_479)) != g_100)) || p_44) >= l_509) | 0x5772), g_186)), g_413))))) <= g_20), g_440)), 0x4664D1F4)), g_243)) ^ g_236), l_479)) <= p_44))) || l_435);
                }
                else
                {
                    uint32_t l_510 = 0xF41BFAFF;
                    g_100 = (4294967286U || l_510);
                }
                g_511 &= 7;
                l_437 = ((safe_mul_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s((p_45 != p_43), ((((safe_add_func_int8_t_s_s((+(0xFE432794 && (safe_mul_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s((((l_523 < (g_100 ^ (((p_46 && (~((safe_mod_func_uint8_t_u_u(((safe_sub_func_int16_t_s_s((((safe_lshift_func_int16_t_s_s((!0x4FBB), (safe_sub_func_uint32_t_u_u((safe_sub_func_int32_t_s_s((safe_rshift_func_int16_t_s_s((((safe_lshift_func_uint16_t_u_s(65535U, 1)) >= (0x0C19 & p_46)) < g_439), g_182)), l_286)), 4294967295U)))) & g_438) | g_439), g_243)) || 4294967295U), p_44)) >= l_286))) && 0xE3) ^ g_236))) == p_44) | 0x0419), 8)), 0)))), 0x5D)) <= g_100) <= g_243) == 0x43))) != g_100), p_45)) & 0xA9EE);
            }
            g_511 = 1;
            ++g_542;
        }
        l_540 = 0;
    }
    else
    {
        int8_t l_547 = 0xF1;
        uint32_t l_568 = 0xD2FEEDA5;
        uint16_t l_577 = 0x54FA;
        g_438 |= (safe_sub_func_uint8_t_u_u((((1 != (l_547 && (safe_sub_func_int8_t_s_s(l_547, ((((safe_rshift_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((((p_46 || l_547) | ((((safe_lshift_func_int8_t_s_u((((safe_rshift_func_int8_t_s_u((+(safe_sub_func_int8_t_s_s(p_46, l_561))), 0)) >= (safe_sub_func_int8_t_s_s(g_362, ((safe_rshift_func_int8_t_s_s(l_480, l_306)) != 0x5674DFA4)))) < 1), 1)) || g_100) == p_44) > l_361)) <= l_480), 0xC5)), p_45)) | p_44) != p_46) != g_243))))) || 0x71) > 0xC099395F), g_440));
        g_438 = ((5 || ((l_547 & (safe_mod_func_int16_t_s_s((l_568 & (g_182 < ((((safe_sub_func_int8_t_s_s(((0xCC ^ 0) == (safe_mod_func_uint16_t_u_u((p_44 & (0xE5 || (safe_add_func_int32_t_s_s((safe_add_func_uint8_t_u_u(p_45, g_541)), l_547)))), g_236))), l_577)) <= g_243) & g_243) & l_568))), 65535U))) == p_43)) || l_361);
    }
    return l_287;
}
inline static uint32_t func_49(int8_t p_50, int8_t p_51, uint8_t p_52, const uint32_t p_53, uint8_t p_54)
{
    uint32_t l_114 = 0x0A080980;
    int32_t l_133 = 0x947660C9;
    int16_t l_162 = 0x0543;
    int32_t l_185 = 0x00B44CA3;
    int8_t l_226 = 0;
    uint16_t l_233 = 0x27C9;
    g_100 = g_100;
    for (p_52 = 17; (p_52 >= 35); ++p_52)
    {
        uint32_t l_131 = 0x81FF1C73;
        int32_t l_179 = 9;
        int32_t l_241 = 0xE9FE6B08;
        const int32_t l_263 = (-1);
        if (g_20)
        {
            int32_t l_132 = 8;
            uint8_t l_202 = 1U;
            l_133 &= (safe_add_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((((safe_sub_func_int16_t_s_s(((safe_mod_func_int8_t_s_s(((~(0x3A67 ^ (p_51 <= (g_20 <= 1U)))) || (safe_mod_func_int32_t_s_s(((l_114 && p_54) <= ((safe_rshift_func_int8_t_s_s(((safe_mod_func_int8_t_s_s((safe_mod_func_int32_t_s_s(g_20, ((safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_s(g_20, ((safe_sub_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(((safe_mul_func_int8_t_s_s((p_54 < p_53), g_100)) && l_114), g_100)), l_131)) && 0xB6FC))), 1)) && (-10)))), g_20)) ^ 65530U), g_100)) < g_100)), 0x67EB8760))), l_132)) & 0x6A91), l_114)) > 0x5C33) | 0x1310918D), l_114)), 9));
            if (l_133)
            {
                int16_t l_140 = 0x3454;
                l_133 = ((safe_rshift_func_uint16_t_u_u((((((safe_rshift_func_int8_t_s_u((safe_unary_minus_func_int16_t_s((+((g_20 || (l_140 && (safe_lshift_func_int8_t_s_s((0xB061D97A < (safe_mul_func_uint8_t_u_u((((safe_add_func_uint16_t_u_u(p_54, ((((g_147 ^ ((safe_add_func_int8_t_s_s((safe_unary_minus_func_int16_t_s((safe_mod_func_uint8_t_u_u((((safe_lshift_func_uint16_t_u_s((+((safe_lshift_func_int8_t_s_u((((l_140 < (safe_lshift_func_uint8_t_u_s(1U, 7))) != (safe_rshift_func_int8_t_s_s(((g_20 > (g_100 != 0U)) == l_140), p_51))) >= g_100), 2)) & p_51)), p_54)) || g_147) == (-2)), g_20)))), 3U)) >= l_162)) || 0xFAF2A49C) < 4294967295U) < 1U))) && g_100) || 253U), 248U))), 1)))) < l_132)))), 2)) > l_131) || g_100) || g_147) <= p_53), g_100)) ^ p_53);
            }
            else
            {
                int16_t l_180 = 0x596B;
                for (g_147 = (-14); (g_147 <= 48); g_147 = safe_add_func_int16_t_s_s(g_147, 4))
                {
                    const int16_t l_165 = 0x3176;
                    l_179 = (((g_147 > (l_165 | (safe_mod_func_int16_t_s_s((~g_100), (~g_100))))) < 0xB7AB548C) != (((safe_mul_func_int16_t_s_s(((p_54 <= (((!((0U ^ ((!(safe_rshift_func_int16_t_s_u((!((((safe_sub_func_int16_t_s_s(p_52, l_132)) > g_20) | g_147) && g_100)), 10))) > p_52)) >= p_51)) || 0x9DADA64C) > g_20)) && 0U), p_53)) | 8) < g_147));
                    --g_182;
                }
                if (g_182)
                    continue;
                ++g_186;
            }
            g_100 |= (safe_add_func_int32_t_s_s((((safe_mul_func_int8_t_s_s(((p_54 != l_132) && ((safe_unary_minus_func_int16_t_s(((0x148F > (((safe_add_func_int16_t_s_s(((p_50 != (safe_rshift_func_uint8_t_u_s((l_132 == (-1)), 5))) | ((safe_rshift_func_uint8_t_u_u(l_114, g_181)) >= ((l_114 && l_202) > l_132))), l_202)) > 0U) | 0xD0)) <= l_202))) < l_132)), 0)) || (-1)) == 0x4D0DCD5F), 7U));
        }
        else
        {
            uint32_t l_225 = 0xC1B7AFBA;
            int32_t l_227 = 2;
            l_227 = ((0x58 != (safe_add_func_uint32_t_u_u((safe_add_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s((safe_sub_func_int8_t_s_s(g_147, (safe_rshift_func_uint16_t_u_u(((safe_mod_func_int16_t_s_s(((safe_sub_func_int16_t_s_s(((((safe_add_func_uint32_t_u_u((safe_add_func_int16_t_s_s(0xD4D5, (((safe_unary_minus_func_uint8_t_u(((((!0xF9622FFC) ^ (safe_mul_func_int16_t_s_s(0x65B9, (((l_162 | 0) || (0x66 != (((0x3F160234 > g_186) ^ l_225) < g_20))) != 0U)))) != 249U) < l_226))) == 0U) & g_182))), 0xCE9429D6)) ^ g_100) != g_100) <= 1), p_52)) == l_225), l_225)) && (-1)), p_50)))), p_52)), p_54)), l_131))) >= p_50);
            for (l_179 = (-3); (l_179 > (-24)); --l_179)
            {
                uint32_t l_230 = 1U;
                l_230 = 0;
                for (l_114 = (-1); (l_114 < 17); l_114++)
                {
                    int32_t l_247 = 0x3BF28D7A;
                    if (p_54)
                    {
                        l_233--;
                        g_236++;
                        g_100 = (safe_lshift_func_uint16_t_u_s((p_51 & 0xC386), 4));
                        l_241 = l_227;
                    }
                    else
                    {
                        g_244++;
                        l_247 = p_53;
                        g_100 = 0xC7F8FBDC;
                    }
                    l_133 = (g_182 <= (((g_147 != (safe_lshift_func_int8_t_s_s(((((((safe_mul_func_uint8_t_u_u((((((0x1843AEAE <= ((((l_241 < (safe_unary_minus_func_int16_t_s((safe_sub_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((safe_add_func_int8_t_s_s(((((((safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(0xAE9B, 1)), l_263)) >= (safe_sub_func_int32_t_s_s((l_227 && p_52), g_182))) != p_50) >= g_182) < p_52) > p_50), g_242)), l_162)), l_247))))) ^ p_52) && p_54) && p_53)) <= 0xF29F115A) != l_226) || 1U) <= 0xC58B), g_181)) < g_147) == g_236) ^ 7) | 249U) != 1U), p_50))) <= p_51) | 1U));
                }
            }
        }
    }
    return p_50;
}
inline static int8_t func_55(uint16_t p_56, int32_t p_57, uint32_t p_58)
{
    int32_t l_59 = 0xF54C3DC4;
    uint32_t l_76 = 0x206F6EC3;
    uint16_t l_85 = 1U;
    l_85 = ((l_59 & (safe_add_func_int16_t_s_s(((0x14 | ((l_59 < l_59) & func_62(l_59, (func_67((safe_sub_func_int16_t_s_s((-1), (safe_sub_func_int32_t_s_s((0x0A > (safe_add_func_uint8_t_u_u(g_20, l_76))), 0x61BCF2EC)))), p_58) != p_58), p_57, p_56))) ^ 0x51CA2AE3), 0U))) >= 1);
    g_100 = (((0xBD5E5709 & l_76) && (safe_sub_func_uint32_t_u_u(((safe_lshift_func_int8_t_s_s((((((safe_rshift_func_int8_t_s_u((p_58 >= (safe_mul_func_uint16_t_u_u(((!(~((p_57 <= (safe_add_func_uint8_t_u_u(((safe_add_func_uint32_t_u_u(4294967295U, 9U)) & 0x7794), ((0xF543A9B1 > (l_76 && 0)) <= l_59)))) < 0xD26016E5))) != g_20), 0xAA93))), 3)) ^ 1U) | l_76) && g_20) ^ 0x46), 2)) > g_20), l_59))) && g_20);
    return p_56;
}
inline static int8_t func_62(int32_t p_63, int8_t p_64, int32_t p_65, uint32_t p_66)
{
    uint16_t l_84 = 1U;
    return l_84;
}
inline static int16_t func_67(uint8_t p_68, uint32_t p_69)
{
    uint16_t l_79 = 0x3564;
    int32_t l_83 = (-1);
    l_83 = ((safe_sub_func_uint32_t_u_u(5U, 1U)) <= (((g_20 < l_79) == (safe_unary_minus_func_int8_t_s((safe_mul_func_uint16_t_u_u(1U, p_69))))) != l_79));
    return l_83;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_20;
    csmith_sink_ = g_100;
    csmith_sink_ = g_147;
    csmith_sink_ = g_181;
    csmith_sink_ = g_182;
    csmith_sink_ = g_186;
    csmith_sink_ = g_236;
    csmith_sink_ = g_242;
    csmith_sink_ = g_243;
    csmith_sink_ = g_244;
    csmith_sink_ = g_268;
    csmith_sink_ = g_362;
    csmith_sink_ = g_413;
    csmith_sink_ = g_438;
    csmith_sink_ = g_439;
    csmith_sink_ = g_440;
    csmith_sink_ = g_511;
    csmith_sink_ = g_541;
    csmith_sink_ = g_542;
    csmith_sink_ = g_622;
    csmith_sink_ = g_780;
    csmith_sink_ = g_806;
    csmith_sink_ = g_807;
    platform_main_end(0,0);
    return 0;
}
