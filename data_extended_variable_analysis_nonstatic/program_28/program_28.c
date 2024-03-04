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
static uint32_t g_9 = 9U;
static int32_t g_52 = 0x9F3C5A4A;
static int32_t g_65 = 0x8945CB29;
static int32_t g_117 = 1;
static int32_t g_134 = 0xBD6B41A2;
static int32_t *g_180 = (void*)0;
static int32_t **g_179 = &g_180;
static int32_t ***g_178 = &g_179;
static int32_t ****g_177 = &g_178;
static int8_t g_225 = 7;
static int32_t g_248 = 0x2EEBB870;
static uint16_t g_252 = 0xA221;
static uint16_t g_259 = 0x646B;
static int16_t g_318 = 0xECC4;
static uint32_t g_334 = 2U;
static uint32_t g_436 = 0x35E5902A;
static int32_t g_499 = 0xEF99ECD0;
static int32_t g_515 = 0xAA575788;
static int32_t g_531 = (-10);
static int16_t g_536 = (-8);
static uint8_t g_582 = 0xAA;
static uint16_t g_621 = 0x7FD3;
static uint32_t g_800 = 1U;
static int32_t *****g_830 = (void*)0;
static uint32_t g_882 = 1U;
static int32_t g_1059 = 0xB76D250B;
static int32_t g_1101 = 0xB3396797;
static int32_t g_1178 = 0x2F56E8BA;
static int8_t g_1184 = 0x7C;
static int32_t g_1189 = 0xC344CCDD;
static int32_t g_1193 = 0xC0D47567;
static uint32_t g_1200 = 0xD440F6A7;
static uint32_t g_1352 = 3U;
static uint32_t func_1(void);
static uint32_t func_7(uint8_t p_8);
static uint8_t func_10(uint16_t p_11, int8_t p_12, int32_t p_13, uint32_t p_14);
static uint16_t func_15(int16_t p_16);
static int32_t func_17(uint32_t p_18, int8_t p_19, uint8_t p_20, int32_t p_21, uint32_t p_22);
static int8_t func_23(uint16_t p_24, int32_t p_25, uint8_t p_26, uint8_t p_27);
static int32_t func_41(int8_t p_42, uint32_t p_43);
static int16_t func_44(uint32_t p_45);
static uint32_t func_46(uint16_t p_47, uint16_t p_48, int32_t p_49, uint8_t p_50);
static int32_t * func_66(int32_t p_67);
static uint32_t func_1(void)
{
    uint8_t l_6 = 246U;
    int8_t l_887 = 0x7A;
    int32_t ***l_901 = &g_179;
    int32_t **l_911 = &g_180;
    int32_t l_922 = (-3);
    int32_t *l_948 = &g_248;
    int32_t **l_1012 = &l_948;
    uint32_t l_1017 = 1U;
    int32_t **l_1024 = &l_948;
    int8_t l_1030 = 0x7B;
    int32_t l_1137 = 1;
    int32_t l_1170 = 0x961A59D0;
    int32_t l_1185 = 9;
    int32_t *****l_1219 = &g_177;
    int16_t l_1231 = 0x4C5D;
    uint8_t l_1233 = 1U;
    int8_t l_1272 = (-9);
    int32_t l_1304 = 0xC0011AAF;
    int32_t l_1305 = 0x69A9CC32;
    int32_t l_1307 = 0xA2EB5741;
    int32_t l_1313 = 0xD9600DAE;
    int32_t l_1349 = 0xBE2029D4;
    if ((((((safe_mod_func_uint32_t_u_u((safe_add_func_int8_t_s_s(((l_6 <= l_6) == func_7(g_9)), 0x65)), g_499)) | (((!0) < ((void*)0 == &g_178)) || l_6)) <= 0x574DC9B7) ^ l_887) && l_887))
    {
        uint32_t l_890 = 0x36C680D9;
        int32_t *l_908 = (void*)0;
        int32_t *l_909 = &g_117;
        (*g_179) = (*g_179);
        (*l_909) &= ((safe_add_func_int32_t_s_s(((l_890 & ((safe_rshift_func_uint8_t_u_s(0xB1, 1)) >= (safe_div_func_int8_t_s_s(((safe_rshift_func_int16_t_s_s(l_6, ((((safe_lshift_func_uint16_t_u_u(((l_901 == l_901) == (((g_134 && (safe_sub_func_int16_t_s_s((safe_div_func_uint16_t_u_u(l_890, (safe_sub_func_uint32_t_u_u(((void*)0 != &g_177), l_890)))), 0x5EA8))) && g_334) != 1)), g_9)) & (*g_180)) & g_52) > g_248))) > g_225), 0x61)))) >= g_248), (***l_901))) >= g_800);
        (*l_901) = &l_908;
    }
    else
    {
        uint8_t l_910 = 0x30;
        (***g_177) = (void*)0;
        return l_910;
    }
    if (((((void*)0 == l_911) <= ((void*)0 != (*l_911))) > (**l_911)))
    {
        int32_t ***l_919 = (void*)0;
        int8_t l_952 = (-9);
        int32_t l_985 = 0x65A788E1;
        int32_t **l_1022 = (void*)0;
        uint32_t l_1045 = 0x5CC4EE72;
        int32_t l_1150 = 0x44E128AF;
        int32_t l_1216 = 0x9222E310;
        int32_t *l_1263 = &l_1170;
    }
    else
    {
        int32_t l_1273 = 0xE152CA6F;
        int32_t l_1274 = 0x89472DC9;
        int32_t l_1275 = 0x3D19DAEE;
        int32_t *l_1276 = &g_1101;
        int32_t *l_1277 = &g_1101;
        int32_t *l_1278 = (void*)0;
        int32_t *l_1279 = &g_1178;
        int32_t *l_1280 = &g_1178;
        int32_t *l_1281 = &g_248;
        int32_t l_1282 = 0x956C7C77;
        int32_t *l_1283 = &g_52;
        int32_t *l_1284 = (void*)0;
        int32_t *l_1285 = &l_1137;
        int32_t *l_1286 = &g_1101;
        int32_t *l_1287 = &g_117;
        int32_t *l_1288 = &l_1275;
        int32_t *l_1289 = &g_1101;
        int32_t *l_1290 = &g_52;
        int32_t *l_1291 = &g_1178;
        int32_t l_1292 = 0x997A383A;
        int32_t *l_1293 = &g_117;
        int32_t *l_1294 = &g_52;
        int32_t *l_1295 = (void*)0;
        int32_t *l_1296 = &l_1282;
        int32_t *l_1297 = &l_1275;
        int32_t *l_1298 = (void*)0;
        int32_t *l_1299 = &g_1178;
        int32_t *l_1300 = &l_1282;
        int32_t *l_1301 = &l_1275;
        int32_t *l_1302 = &l_1185;
        int32_t *l_1303 = &l_1292;
        int32_t *l_1306 = &g_52;
        int32_t *l_1308 = &g_1101;
        int32_t *l_1309 = (void*)0;
        int32_t *l_1310 = &g_1178;
        int32_t *l_1311 = &l_1304;
        int32_t *l_1312 = &l_1282;
        int32_t *l_1314 = &g_52;
        int32_t *l_1315 = (void*)0;
        int32_t *l_1316 = &l_1170;
        int32_t *l_1317 = &l_1137;
        int32_t *l_1318 = &l_1282;
        int32_t *l_1319 = &g_1178;
        int32_t *l_1320 = &l_1282;
        int32_t *l_1321 = (void*)0;
        int32_t *l_1322 = &g_1101;
        int32_t *l_1323 = &l_1185;
        int32_t *l_1324 = (void*)0;
        int32_t *l_1325 = &g_248;
        int32_t *l_1326 = (void*)0;
        int32_t *l_1327 = (void*)0;
        int32_t *l_1328 = (void*)0;
        int32_t *l_1329 = &l_1305;
        int32_t *l_1330 = &l_1137;
        int32_t *l_1331 = &l_1274;
        int32_t *l_1332 = &g_1178;
        int32_t *l_1333 = &l_1185;
        int32_t *l_1334 = &g_1101;
        int32_t l_1335 = 0xDD3CDA14;
        int32_t *l_1336 = &l_1307;
        int32_t *l_1337 = &l_1313;
        int32_t *l_1338 = (void*)0;
        int32_t *l_1339 = &l_1275;
        int32_t *l_1340 = &l_1282;
        int32_t *l_1341 = &l_1170;
        int32_t *l_1342 = &g_117;
        int32_t *l_1343 = (void*)0;
        int32_t *l_1344 = &l_1304;
        int32_t *l_1345 = &l_1275;
        int32_t *l_1346 = &l_1170;
        int32_t *l_1347 = &l_1292;
        int32_t *l_1348 = &l_1275;
        int32_t *l_1350 = (void*)0;
        int32_t *l_1351 = &l_1170;
        ++g_1352;
        return g_621;
    }
    for (g_9 = 24; (g_9 <= 16); --g_9)
    {
        for (g_1193 = 0; (g_1193 < (-28)); g_1193 = safe_sub_func_int32_t_s_s(g_1193, 1))
        {
            int32_t **l_1359 = &l_948;
            (**l_1024) = ((l_1359 == (void*)0) | g_536);
            (*l_911) = func_66((**l_1024));
        }
    }
    return g_65;
}
static uint32_t func_7(uint8_t p_8)
{
    uint32_t l_40 = 0x2E4A6B2C;
    uint16_t l_589 = 0xACCC;
    int32_t *l_885 = &g_52;
    (*l_885) = (func_10(func_15(((p_8 & p_8) >= (func_17((func_23((safe_add_func_uint8_t_u_u(((0xD4856CD8 && g_9) <= (safe_sub_func_int16_t_s_s(7, (safe_div_func_uint16_t_u_u((safe_mul_func_uint32_t_u_u(0x9B4AF7BD, (((safe_rshift_func_uint16_t_u_s(((safe_sub_func_int32_t_s_s((l_40 == (func_41(p_8, (func_44(func_46(p_8, l_40, l_40, l_40)) > 0x2465)) || l_40)), l_589)) ^ p_8), l_40)) || p_8) != g_499))), 0x061B))))), p_8)), p_8, g_225, l_40) & p_8), p_8, p_8, p_8, g_499) && 0xC5B28031))), p_8, l_589, g_318) && 0xBC);
    (*g_179) = func_66((*l_885));
    return (*l_885);
}
static uint8_t func_10(uint16_t p_11, int8_t p_12, int32_t p_13, uint32_t p_14)
{
    int8_t l_833 = 0x0A;
    int32_t *l_834 = &g_248;
    int32_t *l_835 = &g_117;
    int32_t *l_836 = &g_248;
    int32_t l_837 = 0x12C75C99;
    int32_t *l_838 = (void*)0;
    int32_t *l_839 = (void*)0;
    int32_t *l_840 = (void*)0;
    int32_t *l_841 = &g_117;
    int32_t *l_842 = &g_52;
    int32_t *l_843 = (void*)0;
    int32_t *l_844 = &g_248;
    int32_t *l_845 = &g_248;
    int32_t *l_846 = &g_52;
    int32_t *l_847 = &g_52;
    int32_t *l_848 = (void*)0;
    int32_t *l_849 = &g_248;
    int32_t *l_850 = &g_52;
    int32_t *l_851 = &l_837;
    int32_t *l_852 = &g_248;
    int32_t *l_853 = &l_837;
    int32_t l_854 = 0x87A09D2B;
    int32_t *l_855 = &g_117;
    int32_t l_856 = 0xA7BEFD94;
    int32_t *l_857 = (void*)0;
    int32_t *l_858 = &g_117;
    int32_t *l_859 = (void*)0;
    int32_t *l_860 = &g_248;
    int32_t *l_861 = (void*)0;
    int32_t l_862 = 0x1C28F168;
    int32_t *l_863 = &l_856;
    int32_t *l_864 = &l_837;
    int32_t l_865 = 0;
    int32_t *l_866 = &l_854;
    int32_t *l_867 = &l_854;
    int32_t *l_868 = (void*)0;
    int32_t *l_869 = &l_865;
    int32_t *l_870 = &l_856;
    int32_t *l_871 = (void*)0;
    int32_t *l_872 = (void*)0;
    int32_t *l_873 = &l_862;
    int32_t *l_874 = &l_865;
    int32_t *l_875 = (void*)0;
    int32_t l_876 = 0x2209B29B;
    int32_t *l_877 = &g_52;
    int32_t l_878 = 0x6E13792F;
    int32_t *l_879 = (void*)0;
    int32_t *l_880 = &l_862;
    int32_t *l_881 = &l_865;
    g_882++;
    (*g_179) = (**g_178);
    (**g_178) = (void*)0;
    return g_531;
}
static uint16_t func_15(int16_t p_16)
{
    uint16_t l_831 = 0x2DA6;
    int32_t *l_832 = &g_248;
    (*l_832) &= l_831;
    return g_436;
}
static int32_t func_17(uint32_t p_18, int8_t p_19, uint8_t p_20, int32_t p_21, uint32_t p_22)
{
    int32_t ****l_626 = &g_178;
    int32_t l_632 = 0x2E71CDC0;
    int32_t l_728 = 8;
    int32_t l_743 = 0xF30DADA6;
    uint32_t l_803 = 4294967292U;
    if (((safe_add_func_uint16_t_u_u((p_22 < (l_626 == l_626)), ((((((safe_mod_func_uint32_t_u_u(g_499, (safe_sub_func_int8_t_s_s(((((p_18 <= ((~((65535U & (255U && l_632)) == g_536)) ^ g_134)) > 0x6B) || 0xB892) | 0U), p_18)))) >= g_582) ^ 9) > 9) || g_318) ^ g_334))) < 0xC6D53B58))
    {
        int16_t l_635 = 1;
        int32_t *l_646 = &g_248;
        l_635 = (safe_rshift_func_int8_t_s_u(g_515, g_531));
        if ((safe_div_func_uint8_t_u_u((safe_div_func_int32_t_s_s(l_635, 4294967295U)), (safe_sub_func_uint32_t_u_u(0U, ((g_515 != ((g_582 == ((((0x05 & p_19) != ((0x0D || ((((safe_rshift_func_int8_t_s_u(0x31, p_22)) == g_9) ^ g_334) & 4)) && g_65)) && p_22) <= (-4))) < 8)) & 0x4204E514))))))
        {
            return l_635;
        }
        else
        {
            l_646 = l_646;
        }
        (*l_646) ^= (g_65 == (~((g_436 <= (safe_lshift_func_uint16_t_u_u((g_65 <= 0xCE), g_582))) | (safe_mod_func_int16_t_s_s(0xBAA1, 5U)))));
    }
    else
    {
        int32_t l_684 = (-9);
        int32_t l_710 = 1;
        int32_t l_748 = 0;
        int32_t l_761 = 2;
        int32_t l_772 = 0x4BFF7155;
        int32_t **l_807 = &g_180;
        if ((g_134 && (safe_mod_func_int8_t_s_s((safe_mod_func_uint32_t_u_u(((safe_mod_func_int16_t_s_s(((*g_178) != (void*)0), (safe_add_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(((0x46D64D6B ^ (safe_lshift_func_uint16_t_u_u(((g_117 != (safe_sub_func_int16_t_s_s(((safe_sub_func_uint16_t_u_u(((safe_div_func_uint16_t_u_u((!g_117), g_499)) ^ g_582), (safe_lshift_func_uint8_t_u_u((((safe_rshift_func_int8_t_s_s(0x96, 2)) || 9) != 0x2725), 3)))) || (-8)), 65535U))) | p_22), 5))) ^ g_248), g_134)), p_22)))) >= 0x8904), (-5))), p_22))))
        {
            return p_19;
        }
        else
        {
            int16_t l_685 = 0x5DE4;
            int32_t l_698 = 3;
            int32_t l_744 = 0xF3CF5ADE;
            int32_t l_760 = 0;
            int32_t l_790 = (-1);
            uint16_t l_827 = 65535U;
            int32_t *l_828 = (void*)0;
            int32_t l_829 = 1;
            for (g_252 = 0; (g_252 < 53); g_252++)
            {
                int16_t l_677 = 0x0E3D;
                int32_t *l_678 = &l_632;
                int32_t *l_679 = &g_52;
                int32_t *l_680 = &g_117;
                int32_t *l_681 = (void*)0;
                int32_t *l_682 = &l_632;
                int32_t *l_683 = &g_117;
                int32_t *l_686 = &l_632;
                int32_t *l_687 = (void*)0;
                int32_t *l_688 = (void*)0;
                int32_t *l_689 = &g_117;
                int32_t *l_690 = &g_52;
                int32_t *l_691 = &g_248;
                int32_t *l_692 = &g_117;
                int32_t *l_693 = &g_248;
                int32_t l_694 = 0xCB2C0788;
                int32_t *l_695 = &g_117;
                int32_t *l_696 = &g_248;
                int32_t *l_697 = (void*)0;
                int32_t *l_699 = &g_248;
                int32_t *l_700 = (void*)0;
                int32_t *l_701 = &l_632;
                int32_t *l_702 = &g_117;
                int32_t *l_703 = &g_248;
                int32_t *l_704 = &l_698;
                int32_t *l_705 = &g_248;
                int32_t *l_706 = (void*)0;
                int32_t *l_707 = &g_248;
                int32_t *l_708 = &l_698;
                int32_t l_709 = 0;
                int32_t *l_711 = (void*)0;
                int32_t *l_712 = &l_694;
                int32_t *l_713 = &l_632;
                int32_t *l_714 = &g_117;
                int32_t *l_715 = &l_694;
                int32_t *l_716 = &g_117;
                int32_t *l_717 = &l_632;
                int32_t *l_718 = (void*)0;
                int32_t *l_719 = (void*)0;
                int32_t *l_720 = &g_117;
                int32_t *l_721 = (void*)0;
                int32_t *l_722 = &l_632;
                int32_t l_723 = (-8);
                int32_t *l_724 = &g_52;
                int32_t *l_725 = &l_698;
                int32_t l_726 = 0xDDF15BD0;
                int32_t *l_727 = &l_710;
                int32_t *l_729 = &g_248;
                int32_t *l_730 = &g_52;
                int32_t *l_731 = &l_632;
                int32_t *l_732 = &l_698;
                int32_t *l_733 = (void*)0;
                int32_t *l_734 = &g_117;
                int32_t l_735 = 0xD637567B;
                int32_t *l_736 = (void*)0;
                int32_t *l_737 = &l_726;
                int32_t *l_738 = &g_117;
                int32_t *l_739 = &l_694;
                int32_t *l_740 = &l_694;
                int32_t *l_741 = &l_735;
                int32_t *l_742 = &l_726;
                int32_t *l_745 = &l_728;
                int32_t *l_746 = (void*)0;
                int32_t *l_747 = &l_698;
                int32_t *l_749 = &l_728;
                int32_t *l_750 = &l_744;
                int32_t *l_751 = &g_117;
                int32_t *l_752 = &l_709;
                int32_t *l_753 = &l_726;
                int32_t *l_754 = (void*)0;
                int32_t *l_755 = &l_694;
                int32_t *l_756 = (void*)0;
                int32_t *l_757 = &l_698;
                int32_t *l_758 = &l_710;
                int32_t *l_759 = &g_117;
                int32_t *l_762 = &l_694;
                int32_t *l_763 = &l_632;
                int32_t *l_764 = (void*)0;
                int32_t *l_765 = (void*)0;
                int32_t *l_766 = &l_726;
                int32_t *l_767 = &l_761;
                int32_t *l_768 = &l_744;
                int32_t *l_769 = (void*)0;
                int32_t *l_770 = &l_760;
                int32_t *l_771 = &g_117;
                int32_t *l_773 = &l_748;
                int32_t *l_774 = (void*)0;
                int32_t *l_775 = &l_748;
                int32_t *l_776 = (void*)0;
                int32_t *l_777 = &g_248;
                int32_t *l_778 = &g_248;
                int32_t *l_779 = (void*)0;
                int32_t *l_780 = &g_52;
                int32_t *l_781 = (void*)0;
                int32_t *l_782 = (void*)0;
                int32_t *l_783 = (void*)0;
                int32_t *l_784 = (void*)0;
                int32_t *l_785 = (void*)0;
                int32_t *l_786 = (void*)0;
                int32_t *l_787 = (void*)0;
                int32_t *l_788 = &g_117;
                int32_t *l_789 = (void*)0;
                int32_t *l_791 = &l_735;
                int32_t *l_792 = &l_632;
                int32_t l_793 = 0;
                int32_t *l_794 = &l_632;
                int32_t *l_795 = &l_632;
                int32_t *l_796 = &l_760;
                int32_t *l_797 = &l_726;
                int32_t *l_798 = &l_694;
                int32_t *l_799 = &l_698;
                --g_800;
                l_803--;
            }
            l_829 = ((p_20 ^ ((+l_790) > p_20)) || (((0xE62C == (((void*)0 == l_807) == (safe_rshift_func_int16_t_s_s((safe_sub_func_int8_t_s_s(((safe_rshift_func_int16_t_s_s((((safe_div_func_uint8_t_u_u((((safe_rshift_func_int16_t_s_s(((+(safe_add_func_int16_t_s_s(g_9, (safe_add_func_uint16_t_u_u((safe_div_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(p_19, g_499)), l_744)), l_827))))) & 1U), 11)) < 7U) >= l_632), p_21)) & l_760) || p_21), p_20)) > 0xA9), g_531)), p_22)))) | 0U) & l_803));
        }
        g_830 = &g_177;
    }
    return l_743;
}
static int8_t func_23(uint16_t p_24, int32_t p_25, uint8_t p_26, uint8_t p_27)
{
    int32_t ****l_590 = &g_178;
    int32_t l_591 = 1;
    int32_t *l_592 = &g_52;
    int32_t l_593 = 1;
    int32_t *l_594 = &g_117;
    int32_t *l_595 = (void*)0;
    int32_t l_596 = 0x4DE6DE12;
    int32_t *l_597 = &g_248;
    int32_t *l_598 = (void*)0;
    int32_t *l_599 = (void*)0;
    int32_t *l_600 = &l_593;
    int32_t *l_601 = &g_117;
    int32_t *l_602 = &g_117;
    int32_t *l_603 = &l_591;
    int32_t *l_604 = &g_248;
    int32_t l_605 = 0;
    int32_t *l_606 = &g_52;
    int32_t *l_607 = &g_52;
    int32_t *l_608 = &l_591;
    int32_t *l_609 = &l_596;
    int32_t l_610 = (-9);
    int32_t *l_611 = (void*)0;
    int32_t l_612 = 0;
    int32_t *l_613 = (void*)0;
    int32_t *l_614 = (void*)0;
    int32_t *l_615 = &g_248;
    int32_t *l_616 = &g_52;
    int32_t *l_617 = (void*)0;
    int32_t *l_618 = &l_596;
    int32_t *l_619 = &l_605;
    int32_t *l_620 = (void*)0;
    p_25 |= ((l_590 != l_590) || g_531);
    g_621--;
    return (*l_597);
}
static int32_t func_41(int8_t p_42, uint32_t p_43)
{
    int32_t l_302 = 2;
    int32_t l_317 = (-1);
    int32_t l_319 = (-3);
    int32_t l_327 = 0x5D2F89C1;
    int32_t l_362 = 0xA8FA583B;
    int32_t l_374 = (-8);
    int32_t l_380 = (-1);
    int32_t l_385 = 0xC8DC0C5F;
    int32_t l_392 = (-10);
    int32_t l_394 = 0x17A308BB;
    int32_t ***l_450 = &g_179;
    int32_t l_458 = 0xEF7269C6;
    for (p_43 = 18; (p_43 <= 15); p_43 = safe_sub_func_uint32_t_u_u(p_43, 2))
    {
        int32_t *l_303 = &g_117;
        int32_t *l_304 = (void*)0;
        int32_t *l_305 = &g_117;
        int32_t *l_306 = &g_117;
        int32_t *l_307 = &g_248;
        int32_t *l_308 = &g_248;
        int32_t *l_309 = &g_248;
        int32_t *l_310 = (void*)0;
        int32_t *l_311 = &g_117;
        int32_t *l_312 = (void*)0;
        int32_t *l_313 = &g_117;
        int32_t *l_314 = &g_117;
        int32_t *l_315 = &g_248;
        int32_t *l_316 = (void*)0;
        int32_t *l_320 = (void*)0;
        int32_t *l_321 = &g_248;
        int32_t *l_322 = &g_248;
        int32_t *l_323 = (void*)0;
        int32_t *l_324 = &g_117;
        int32_t *l_325 = &g_117;
        int32_t *l_326 = &g_52;
        int32_t *l_328 = &g_117;
        int32_t *l_329 = (void*)0;
        int32_t *l_330 = (void*)0;
        int32_t *l_331 = &l_327;
        int32_t *l_332 = (void*)0;
        int32_t *l_333 = (void*)0;
        int32_t *l_337 = &l_327;
        int32_t *l_338 = &g_52;
        int32_t *l_339 = &l_317;
        int32_t *l_340 = (void*)0;
        int32_t *l_341 = &g_52;
        int32_t *l_342 = &g_117;
        int32_t *l_343 = &l_319;
        int32_t *l_344 = &g_117;
        int32_t *l_345 = &l_327;
        int32_t l_346 = 0xF816EC6A;
        int32_t *l_347 = &g_248;
        int32_t *l_348 = &g_52;
        int32_t *l_349 = (void*)0;
        int32_t *l_350 = &l_346;
        int32_t *l_351 = &l_319;
        int32_t *l_352 = &g_52;
        int32_t *l_353 = &g_52;
        int32_t *l_354 = &l_319;
        int32_t *l_355 = &g_52;
        int32_t l_356 = 0xA225B384;
        int32_t *l_357 = &l_319;
        int32_t l_358 = (-6);
        int32_t *l_359 = &g_52;
        int32_t *l_360 = &g_52;
        int32_t *l_361 = &g_248;
        int32_t *l_363 = &g_52;
        int32_t *l_364 = &l_319;
        int32_t *l_365 = &g_52;
        int32_t *l_366 = &l_358;
        int32_t *l_367 = &l_362;
        int32_t *l_368 = &g_248;
        int32_t *l_369 = &l_356;
        int32_t *l_370 = (void*)0;
        int32_t *l_371 = &g_52;
        int32_t *l_372 = (void*)0;
        int32_t *l_373 = &l_358;
        int32_t *l_375 = (void*)0;
        int32_t *l_376 = &l_374;
        int32_t *l_377 = (void*)0;
        int32_t *l_378 = &l_346;
        int32_t *l_379 = (void*)0;
        int32_t *l_381 = &g_248;
        int32_t *l_382 = &g_248;
        int32_t *l_383 = (void*)0;
        int32_t *l_384 = &l_356;
        int32_t *l_386 = &l_374;
        int32_t *l_387 = (void*)0;
        int32_t *l_388 = (void*)0;
        int32_t *l_389 = &l_356;
        int32_t *l_390 = (void*)0;
        int32_t *l_391 = &g_248;
        int32_t *l_393 = &g_117;
        int32_t *l_395 = (void*)0;
        int32_t l_396 = 0xA5284081;
        int32_t *l_397 = &l_327;
        int32_t *l_398 = &l_394;
        int32_t *l_399 = &l_394;
        int32_t *l_400 = &g_117;
        int32_t *l_401 = (void*)0;
        int32_t *l_402 = &l_362;
        int32_t *l_403 = &l_319;
        int32_t *l_404 = &l_356;
        int32_t *l_405 = &l_327;
        int32_t *l_406 = &l_327;
        int32_t *l_407 = &l_374;
        int32_t *l_408 = &l_362;
        int32_t *l_409 = &l_317;
        int32_t l_410 = (-6);
        int32_t *l_411 = &l_374;
        int32_t *l_412 = &l_358;
        int32_t *l_413 = &l_374;
        int32_t *l_414 = &l_327;
        int32_t *l_415 = &l_317;
        int32_t *l_416 = &l_410;
        int32_t *l_417 = &l_317;
        int32_t *l_418 = (void*)0;
        int32_t *l_419 = &l_410;
        int32_t *l_420 = &l_358;
        int32_t *l_421 = &l_356;
        int32_t *l_422 = &l_356;
        int32_t l_423 = 0x970FD253;
        int32_t l_424 = 0x3265BCB9;
        int32_t *l_425 = &l_374;
        int32_t l_426 = 0x78632126;
        int32_t *l_427 = &l_392;
        int32_t l_428 = 0x48867B80;
        int32_t *l_429 = (void*)0;
        int32_t *l_430 = (void*)0;
        int32_t *l_431 = (void*)0;
        int32_t l_432 = (-1);
        int32_t *l_433 = (void*)0;
        int32_t *l_434 = &l_394;
        int32_t *l_435 = &l_392;
        g_334--;
        g_436++;
    }
    if ((safe_lshift_func_int8_t_s_s(((void*)0 == (*g_178)), ((255U ^ (((((safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u(((~((safe_sub_func_uint16_t_u_u(p_42, (((0x48030061 && (p_42 <= l_327)) <= ((safe_add_func_int16_t_s_s(p_43, (l_450 != (*g_177)))) ^ p_43)) > p_43))) & p_43)) || p_42), 5)), p_43)) ^ p_43) & p_43) & p_43) > 0U)) != g_225))))
    {
        int8_t l_451 = 0x89;
        int32_t *l_452 = &l_392;
        (*l_452) = l_451;
        (*l_452) = ((void*)0 == (*g_178));
        return p_43;
    }
    else
    {
        int32_t ***l_455 = &g_179;
        int32_t l_493 = 0;
        int32_t l_494 = 0x00964AE8;
        int32_t l_510 = 1;
        int32_t l_569 = (-10);
        if ((((safe_rshift_func_int16_t_s_u(((l_455 == (void*)0) == (safe_sub_func_uint32_t_u_u((p_42 <= l_458), ((-1) ^ g_248)))), 9)) <= ((void*)0 == &g_178)) >= g_65))
        {
            return p_42;
        }
        else
        {
            int32_t l_474 = 0x2F48B5C4;
            int16_t l_571 = 0;
            int32_t l_573 = 0;
            for (g_252 = (-14); (g_252 != 43); ++g_252)
            {
                uint32_t l_466 = 0xF94F0498;
                int32_t ****l_473 = (void*)0;
                int32_t l_475 = 0xFA596293;
                int32_t *l_476 = &l_317;
                int32_t *l_477 = &l_327;
                int32_t *l_478 = &l_392;
                int32_t *l_479 = &l_394;
                int32_t *l_480 = &l_392;
                int32_t *l_481 = &l_362;
                int32_t *l_482 = &l_374;
                int32_t *l_483 = &l_380;
                int32_t *l_484 = &l_374;
                int32_t *l_485 = &l_327;
                int32_t *l_486 = &l_458;
                int32_t *l_487 = &l_319;
                int32_t *l_488 = &g_52;
                int32_t *l_489 = &l_475;
                int32_t *l_490 = &l_374;
                int32_t *l_491 = &g_52;
                int32_t *l_492 = &l_374;
                int32_t *l_495 = &l_317;
                int32_t *l_496 = &l_493;
                int32_t *l_497 = &l_319;
                int32_t *l_498 = (void*)0;
                int32_t *l_500 = &l_392;
                int32_t *l_501 = &l_493;
                int32_t *l_502 = &l_374;
                int32_t *l_503 = &l_327;
                int32_t *l_504 = &l_474;
                int32_t *l_505 = &l_458;
                int32_t *l_506 = &l_392;
                int32_t *l_507 = &l_474;
                int32_t *l_508 = &g_117;
                int32_t *l_509 = &g_117;
                int32_t *l_511 = &l_362;
                int32_t *l_512 = &l_319;
                int32_t *l_513 = &l_458;
                int32_t *l_514 = &l_319;
                int32_t *l_516 = (void*)0;
                int32_t *l_517 = &l_392;
                int32_t *l_518 = (void*)0;
                int32_t *l_519 = &l_362;
                int32_t *l_520 = &l_493;
                int32_t *l_521 = (void*)0;
                int32_t *l_522 = &l_385;
                int32_t *l_523 = (void*)0;
                int32_t *l_524 = &l_385;
                int32_t l_525 = 0;
                int32_t *l_526 = &l_493;
                int32_t l_527 = 0x0CCB52AD;
                int32_t *l_528 = (void*)0;
                int32_t l_529 = 1;
                int32_t *l_530 = &l_319;
                int32_t *l_532 = &l_380;
                int32_t *l_533 = &l_327;
                int32_t *l_534 = &l_380;
                int32_t *l_535 = &l_362;
                int32_t *l_537 = &l_392;
                int32_t *l_538 = &l_327;
                int32_t *l_539 = &l_494;
                int32_t *l_540 = &g_117;
                int32_t *l_541 = &l_510;
                int32_t *l_542 = (void*)0;
                int32_t *l_543 = (void*)0;
                int32_t *l_544 = (void*)0;
                int32_t *l_545 = &l_494;
                int32_t *l_546 = &g_117;
                int32_t l_547 = 0;
                int32_t *l_548 = &l_474;
                int32_t *l_549 = (void*)0;
                int32_t *l_550 = &l_475;
                int32_t l_551 = 0x52C17340;
                int32_t *l_552 = &g_248;
                int32_t *l_553 = &g_248;
                int32_t *l_554 = &l_385;
                int32_t *l_555 = &l_494;
                int32_t *l_556 = &l_362;
                int32_t *l_557 = &l_547;
                int32_t *l_558 = (void*)0;
                int32_t *l_559 = &g_117;
                int32_t *l_560 = &l_385;
                int32_t *l_561 = &l_510;
                int32_t l_562 = 0x5AFFE87B;
                int32_t *l_563 = &l_510;
                int32_t *l_564 = &g_248;
                int32_t *l_565 = (void*)0;
                int32_t *l_566 = (void*)0;
                int32_t *l_567 = &l_475;
                int32_t *l_568 = &g_52;
                int32_t *l_570 = (void*)0;
                int32_t *l_572 = &l_569;
                int32_t *l_574 = &g_117;
                int32_t *l_575 = &l_493;
                int32_t *l_576 = &g_52;
                int32_t *l_577 = &l_362;
                int32_t *l_578 = &l_380;
                int32_t *l_579 = (void*)0;
                int32_t *l_580 = (void*)0;
                int32_t *l_581 = (void*)0;
                int8_t l_588 = 0xE2;
                l_474 |= (!(safe_div_func_uint16_t_u_u((((safe_sub_func_uint32_t_u_u(l_466, (safe_lshift_func_uint16_t_u_s(((void*)0 == &l_455), 10)))) || (g_334 ^ ((safe_mod_func_int32_t_s_s(((safe_lshift_func_uint16_t_u_s((l_466 <= 0x4DF7), (l_473 == &g_178))) != p_43), (-10))) || p_43))) | 0xB44413F6), p_43)));
                g_582++;
                if (l_573)
                {
                    uint32_t l_587 = 2U;
                    (*l_514) ^= (safe_add_func_int16_t_s_s((p_42 != ((*g_179) != &l_474)), (-6)));
                    (*l_546) &= (8U <= (&g_178 == &g_178));
                    if (l_587)
                        continue;
                }
                else
                {
                    return l_588;
                }
                if (p_43)
                    continue;
            }
        }
        l_493 &= 0xE55B3C0C;
        return g_515;
    }
}
static int16_t func_44(uint32_t p_45)
{
    int32_t l_112 = 0x5C685B35;
    int32_t l_115 = 0xE2E6445A;
    int32_t l_124 = (-1);
    int32_t l_140 = 0xC78ED0E1;
    uint32_t l_145 = 4294967295U;
    int32_t *l_155 = (void*)0;
    int32_t **l_154 = &l_155;
    int32_t ****l_169 = (void*)0;
    uint32_t l_297 = 0x52EBE5BD;
    uint32_t l_298 = 1U;
    uint8_t l_299 = 1U;
    for (p_45 = 0; (p_45 <= 22); ++p_45)
    {
        int32_t *l_106 = (void*)0;
        int32_t *l_107 = &g_52;
        int32_t *l_108 = &g_52;
        int32_t *l_109 = &g_52;
        int32_t *l_110 = &g_52;
        int32_t *l_111 = &g_52;
        int32_t *l_113 = &g_52;
        int32_t *l_114 = &g_52;
        int32_t *l_116 = &l_115;
        int32_t *l_118 = (void*)0;
        int32_t *l_119 = (void*)0;
        int32_t *l_120 = &g_52;
        int32_t *l_121 = &g_117;
        int32_t *l_122 = &g_52;
        int32_t *l_123 = &g_117;
        int32_t *l_125 = (void*)0;
        int32_t *l_126 = &g_117;
        int32_t *l_127 = (void*)0;
        int32_t l_128 = 1;
        int32_t *l_129 = &g_117;
        int32_t *l_130 = (void*)0;
        int32_t *l_131 = &l_124;
        int32_t *l_132 = &l_124;
        int32_t *l_133 = &g_117;
        int32_t *l_135 = &l_124;
        int32_t *l_136 = (void*)0;
        int32_t *l_137 = &l_124;
        int32_t *l_138 = &l_115;
        int32_t *l_139 = &l_115;
        int32_t *l_141 = &l_140;
        int32_t *l_142 = &l_128;
        int32_t *l_143 = &l_140;
        int32_t *l_144 = &l_128;
        int32_t l_215 = 2;
        int32_t ***l_219 = &l_154;
        uint32_t l_266 = 4294967290U;
        ++l_145;
        for (l_112 = (-7); (l_112 < 8); l_112 = safe_add_func_uint32_t_u_u(l_112, 6))
        {
            int32_t l_164 = 0x377822E8;
            int32_t l_181 = 1;
            int32_t l_238 = (-1);
            if ((*l_144))
            {
                uint32_t l_163 = 0xE71E83BB;
                int32_t ***l_168 = (void*)0;
                int32_t ****l_167 = &l_168;
                int32_t l_226 = 0xA92FA667;
                int32_t *l_227 = &l_181;
                int32_t *l_228 = &l_128;
                int32_t *l_229 = &g_52;
                int32_t *l_230 = &l_181;
                int32_t *l_231 = (void*)0;
                int32_t *l_232 = &l_140;
                int32_t *l_233 = &l_128;
                int32_t *l_234 = &l_115;
                int32_t *l_235 = (void*)0;
                int32_t *l_236 = &l_215;
                int32_t *l_237 = &l_124;
                int32_t *l_239 = &l_226;
                int32_t l_240 = 0xF0E25250;
                int32_t *l_241 = &l_238;
                int32_t *l_242 = &l_128;
                int32_t *l_243 = &l_115;
                int32_t *l_244 = &g_117;
                int32_t *l_245 = &l_226;
                int32_t *l_246 = &l_124;
                int32_t *l_247 = &g_52;
                int32_t *l_249 = &l_115;
                int32_t *l_250 = &g_248;
                int32_t *l_251 = &l_240;
                if (l_124)
                {
                    int32_t ****l_176 = &l_168;
                    (*l_108) = (safe_add_func_int16_t_s_s(g_134, ((((safe_div_func_int32_t_s_s(((g_52 ^ (l_154 == (void*)0)) | (safe_sub_func_int32_t_s_s((safe_mod_func_int8_t_s_s((-6), (((safe_mod_func_uint8_t_u_u((1 ^ (safe_unary_minus_func_int16_t_s((g_65 && (g_65 == 1U))))), 1U)) >= 0) || l_163))), g_134))), l_164)) & g_65) & 0x0CBF8205) == l_164)));
                    if (g_65)
                        continue;
                    l_181 = (((safe_add_func_int16_t_s_s((l_167 == l_169), (safe_rshift_func_uint16_t_u_u((0xA8 && (safe_mod_func_int32_t_s_s(((0x82F8 ^ (safe_add_func_int8_t_s_s(g_117, 0U))) >= (((l_176 == g_177) > p_45) ^ p_45)), 1))), g_65)))) != p_45) != g_117);
                }
                else
                {
                    int32_t l_191 = 0x5DD1021D;
                    for (l_164 = 0; (l_164 >= 27); l_164 = safe_add_func_uint8_t_u_u(l_164, 9))
                    {
                        if (l_181)
                            break;
                        (***g_177) = &l_181;
                        (***g_177) = func_66((***g_178));
                    }
                    if ((safe_rshift_func_int16_t_s_u(g_65, 15)))
                    {
                        uint32_t l_186 = 0x7FF43755;
                        l_186--;
                    }
                    else
                    {
                        int32_t *l_189 = &g_52;
                        int32_t ****l_201 = &l_168;
                        uint16_t l_216 = 0x9D58;
                        (*g_179) = l_189;
                        (*l_131) ^= (((safe_unary_minus_func_int8_t_s(((((((**g_178) == (***g_177)) ^ l_191) < (p_45 < (safe_rshift_func_uint16_t_u_s((((safe_sub_func_uint32_t_u_u((safe_unary_minus_func_uint32_t_u((((safe_sub_func_int16_t_s_s(((safe_mod_func_uint16_t_u_u(((l_201 == &g_178) != (safe_add_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u((safe_div_func_uint8_t_u_u((safe_div_func_int16_t_s_s(p_45, (safe_add_func_uint16_t_u_u(1U, (safe_sub_func_uint32_t_u_u((safe_unary_minus_func_uint16_t_u((65535U < (-1)))), 4294967291U)))))), g_9)), g_9)), g_117))), l_215)) > 0xF7B2E307), 1U)) < l_216) == p_45))), (***g_178))) >= 4294967290U) > 0x1527D319), (*l_114))))) <= l_191) | 0x3FB85D13))) > p_45) & 0xBEDA80D1);
                    }
                    (*l_154) = (*g_179);
                }
                (*l_135) &= (((*g_177) != (*l_167)) <= g_52);
                for (g_134 = (-22); (g_134 > 12); ++g_134)
                {
                    uint8_t l_222 = 254U;
                    if ((*l_107))
                        break;
                    if (l_164)
                    {
                        int8_t l_220 = 0xC4;
                        l_220 ^= (l_219 == (*l_167));
                    }
                    else
                    {
                        int32_t *l_221 = &l_215;
                        (*l_111) = (l_221 != (void*)0);
                        ++l_222;
                    }
                }
                g_252--;
            }
            else
            {
                int32_t l_255 = (-5);
                int32_t l_256 = (-9);
                int32_t l_257 = 0x144486E5;
                int32_t l_258 = (-2);
                int32_t *l_264 = (void*)0;
                int32_t *l_265 = &l_258;
                ++g_259;
                l_258 |= (safe_sub_func_uint8_t_u_u(0x36, (*l_131)));
                l_266--;
            }
            return g_248;
        }
    }
    (*l_154) = func_66((safe_div_func_int8_t_s_s(((((safe_rshift_func_int16_t_s_u((((safe_div_func_uint16_t_u_u((((p_45 < (safe_sub_func_int16_t_s_s((g_65 | (((((void*)0 == (*l_154)) || (safe_rshift_func_uint8_t_u_u(((safe_add_func_uint32_t_u_u(0U, ((safe_lshift_func_uint16_t_u_s(((safe_unary_minus_func_int8_t_s(((safe_mod_func_int16_t_s_s((((!g_52) >= (0xAC0F502B == (((((safe_div_func_int16_t_s_s((p_45 > ((~(((safe_rshift_func_uint16_t_u_u((+(safe_sub_func_uint32_t_u_u(((p_45 | p_45) || g_225), 4294967295U))), p_45)) ^ g_52) > p_45)) ^ g_117)), p_45)) < 0x60) > l_297) && g_252) & (-1)))) & g_9), g_248)) != 0xCEE369AD))) < g_52), 12)) | p_45))) != p_45), 5))) || 3U) ^ p_45)), 0x20A1))) ^ 0x4F6D) | 0), l_298)) && 1U) != (-10)), 13)) <= 0x73475511) < (-6)) == 0x65A7D269), p_45)));
    return l_299;
}
static uint32_t func_46(uint16_t p_47, uint16_t p_48, int32_t p_49, uint8_t p_50)
{
    int32_t *l_51 = &g_52;
    int32_t *l_53 = &g_52;
    int32_t *l_54 = &g_52;
    int32_t *l_55 = &g_52;
    int32_t *l_56 = &g_52;
    int32_t *l_57 = &g_52;
    int32_t *l_58 = (void*)0;
    int32_t *l_59 = &g_52;
    uint32_t l_60 = 0x93F04518;
    int32_t **l_100 = (void*)0;
    int32_t **l_101 = &l_57;
    int32_t ***l_103 = &l_100;
    int32_t ****l_102 = &l_103;
    ++l_60;
    g_65 ^= (safe_lshift_func_uint16_t_u_u((*l_55), 5));
    (*l_101) = func_66(((safe_add_func_uint8_t_u_u(0xFB, (safe_lshift_func_uint8_t_u_u((*l_59), 6)))) != ((((safe_lshift_func_int16_t_s_u(g_65, 3)) != (safe_rshift_func_int16_t_s_u((safe_unary_minus_func_uint16_t_u(((+p_50) & g_9))), 13))) >= (*l_56)) && ((((!(safe_lshift_func_uint16_t_u_s((((safe_rshift_func_uint8_t_u_s((0 <= ((p_50 > ((!7) && p_47)) != 1)), (*l_55))) < 1U) || g_9), 0))) == g_52) == g_52) > (*l_56)))));
    (*l_102) = &l_101;
    return (****l_102);
}
static int32_t * func_66(int32_t p_67)
{
    uint32_t l_90 = 4294967286U;
    uint32_t l_95 = 0x24BD9F5B;
    int32_t *l_96 = &g_52;
    if (((((safe_lshift_func_int16_t_s_u(((safe_sub_func_int16_t_s_s(l_90, (((g_52 || (4294967295U ^ (l_90 == (safe_mod_func_int32_t_s_s((&g_52 != (void*)0), p_67))))) < (0x13C5 <= ((safe_rshift_func_int16_t_s_s(((1U == p_67) > l_95), 0)) && l_95))) != l_90))) > p_67), p_67)) > l_90) > 0x33887E98) || (-2)))
    {
        int32_t **l_97 = &l_96;
        (*l_97) = l_96;
        for (p_67 = 0; (p_67 <= 18); ++p_67)
        {
            return &g_52;
        }
    }
    else
    {
        (*l_96) = 0xB0335009;
        g_52 = g_65;
    }
    return &g_52;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_9;
    csmith_sink_ = g_52;
    csmith_sink_ = g_65;
    csmith_sink_ = g_117;
    csmith_sink_ = g_134;
    csmith_sink_ = g_225;
    csmith_sink_ = g_248;
    csmith_sink_ = g_252;
    csmith_sink_ = g_259;
    csmith_sink_ = g_318;
    csmith_sink_ = g_334;
    csmith_sink_ = g_436;
    csmith_sink_ = g_499;
    csmith_sink_ = g_515;
    csmith_sink_ = g_531;
    csmith_sink_ = g_536;
    csmith_sink_ = g_582;
    csmith_sink_ = g_621;
    csmith_sink_ = g_800;
    csmith_sink_ = g_882;
    csmith_sink_ = g_1059;
    csmith_sink_ = g_1101;
    csmith_sink_ = g_1178;
    csmith_sink_ = g_1184;
    csmith_sink_ = g_1189;
    csmith_sink_ = g_1193;
    csmith_sink_ = g_1200;
    csmith_sink_ = g_1352;
    platform_main_end(0,0);
    return 0;
}
