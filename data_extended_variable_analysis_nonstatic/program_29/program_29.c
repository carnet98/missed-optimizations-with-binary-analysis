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
#pragma pack(push)
#pragma pack(1)
struct S0 {
   int8_t f0;
   uint8_t f1;
   uint8_t f2;
   uint16_t f3;
   int64_t f4;
};
#pragma pack(pop)
#pragma pack(push)
#pragma pack(1)
struct S1 {
   int16_t f0;
   uint64_t f1;
   int64_t f2;
   int16_t f3;
   int16_t f4;
   int8_t f5;
};
#pragma pack(pop)
static uint32_t g_8 = 0xA8D3A18EL;
static int16_t g_14 = 0x2F3FL;
static uint32_t g_15 = 0xD013D0BBL;
static struct S0 g_20 = {0xAEL,255UL,1UL,0x9041L,0x894FF5452FA814B1LL};
static int16_t g_53 = (-1L);
static uint32_t g_100 = 0x774A7686L;
static int64_t g_103 = 0L;
static int32_t g_106 = (-1L);
static int64_t g_118 = (-8L);
static int16_t g_168 = 0x27D4L;
static int64_t g_169 = 0xF60D6E8A3BFF2BCALL;
static int32_t g_182 = 2L;
static uint32_t g_260 = 0xFF24D7E9L;
static uint64_t g_265 = 18446744073709551610UL;
static int64_t g_285 = (-9L);
static uint64_t g_311 = 18446744073709551606UL;
static uint32_t g_312 = 0xBBC7000DL;
static int8_t g_315 = 0xA4L;
static struct S0 g_316 = {1L,0xCBL,0UL,1UL,0xFD7715F622DDEA78LL};
static struct S1 g_357 = {4L,0x9D6BEC8285390B3FLL,0xD78BCD14600C48DCLL,0x0734L,0L,-1L};
static uint32_t g_483 = 0UL;
static struct S1 g_536 = {0xA664L,0xA46128A7D53E825CLL,0xB5565A14CF5EBA1CLL,0x6547L,-1L,0x27L};
static int32_t g_588 = 0x58D355F8L;
static struct S0 g_609 = {-4L,0x8DL,255UL,0x7B5DL,0x3B61F78BA8257AE0LL};
static int32_t g_629 = 0xE8C67BD1L;
static uint32_t g_761 = 4294967295UL;
inline static int64_t func_1(void);
inline static int32_t func_16(struct S0 p_17, uint32_t p_18, uint16_t p_19);
static int32_t func_23(int64_t p_24, uint16_t p_25, uint16_t p_26);
inline static uint32_t func_28(uint32_t p_29);
static int16_t func_30(int16_t p_31, int16_t p_32, struct S0 p_33, struct S0 p_34, int8_t p_35);
static int32_t func_41(int8_t p_42, uint32_t p_43, int16_t p_44);
static uint32_t func_45(uint64_t p_46, struct S1 p_47, uint8_t p_48, uint16_t p_49, int32_t p_50);
static uint64_t func_55(uint16_t p_56, uint32_t p_57, uint32_t p_58, uint16_t p_59, int16_t p_60);
inline static uint64_t func_63(uint16_t p_64, int32_t p_65);
static int8_t func_73(uint8_t p_74, uint16_t p_75, struct S0 p_76, uint8_t p_77);
inline static int64_t func_1(void)
{
    int32_t l_9 = 1L;
    int32_t l_777 = 0x30309DA8L;
    int64_t l_778 = 0x9ABD4CCE0B556F03LL;
    l_778 = (safe_rshift_func_uint16_t_u_s((safe_mod_func_uint64_t_u_u(0xE77AB3921DED6804LL, (((safe_rshift_func_uint16_t_u_s((g_8 = 0xFE64L), (((l_9 , (l_777 = ((0x07L > (safe_mod_func_uint16_t_u_u((g_15 = (safe_add_func_uint32_t_u_u(g_14, l_9))), l_9))) | func_16(g_20, (l_9 , 0x040C3F30L), g_20.f3)))) && g_106) , 0L))) | g_536.f2) , 0xE65A7BB6B80C1C8FLL))), 0));
    l_777 = (l_9 == 0L);
    return g_357.f5;
}
inline static int32_t func_16(struct S0 p_17, uint32_t p_18, uint16_t p_19)
{
    uint16_t l_535 = 6UL;
    struct S1 l_774 = {0x16FBL,4UL,1L,-1L,1L,7L};
    int32_t l_775 = (-1L);
    int32_t l_776 = 0x48CBF1F4L;
    for (g_20.f3 = 10; (g_20.f3 == 16); g_20.f3 = safe_add_func_int64_t_s_s(g_20.f3, 4))
    {
        uint64_t l_38 = 1UL;
        struct S0 l_70 = {0L,0x70L,251UL,65531UL,3L};
        uint32_t l_537 = 18446744073709551611UL;
        struct S1 l_773 = {0xF56FL,0UL,0xAA8F27D40664565FLL,0xF100L,3L,0x19L};
        l_773 = (func_23(g_14, (!func_28(((0xD2F2L | g_20.f0) <= func_30((safe_sub_func_int16_t_s_s(l_38, (safe_lshift_func_uint16_t_u_s((g_20.f0 , (func_41(g_20.f3, func_45(((safe_add_func_uint32_t_u_u((((g_53 = 0x4B54C5F6L) , (+func_55(((safe_mod_func_int16_t_s_s((func_63(p_17.f4, ((safe_mod_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s((l_70 , p_17.f0), 3)), 0xF0C0L)) < 1L)) != 1UL), g_20.f1)) , l_70.f3), p_17.f3, p_17.f3, l_70.f4, p_17.f0))) <= g_14), l_535)) , g_357.f3), g_536, p_17.f4, l_537, g_536.f4), g_14) | 0L)), 10)))), p_18, p_17, g_609, l_70.f2)))), l_535) , l_773);
    }
    l_774 = g_357;
    g_629 = l_774.f3;
    l_776 = (l_775 = l_774.f3);
    return g_609.f2;
}
static int32_t func_23(int64_t p_24, uint16_t p_25, uint16_t p_26)
{
    int32_t l_767 = 0x4524DB42L;
    int32_t l_768 = (-1L);
    struct S0 l_771 = {0L,253UL,252UL,0UL,0x8FB5487AABD8BFE4LL};
    l_768 = ((g_609.f3 = (safe_mul_func_int8_t_s_s((l_767 = g_14), 0x35L))) || ((g_260 , 1L) && p_26));
    for (g_315 = 0; (g_315 != (-6)); g_315 = safe_sub_func_uint64_t_u_u(g_315, 6))
    {
        struct S0 l_772 = {6L,255UL,4UL,0xE634L,1L};
        l_772 = l_771;
    }
    return g_357.f1;
}
inline static uint32_t func_28(uint32_t p_29)
{
    struct S1 l_658 = {5L,0UL,0xA7A95B488C69B533LL,-1L,-7L,0x22L};
    int32_t l_705 = 0xEF916B20L;
    struct S0 l_728 = {0x4FL,0UL,246UL,0UL,0xF67C68C47A08A383LL};
    int32_t l_763 = 1L;
    for (g_536.f4 = 5; (g_536.f4 != 7); g_536.f4++)
    {
        struct S1 l_657 = {-8L,18446744073709551615UL,-6L,3L,6L,0L};
        int32_t l_675 = 0L;
        int32_t l_714 = 0x41984138L;
        int32_t l_715 = 4L;
        for (g_536.f1 = 7; (g_536.f1 >= 48); g_536.f1++)
        {
            uint64_t l_685 = 0xBDDA4217B113511FLL;
            int32_t l_704 = 0xA5547CAEL;
            l_658 = (g_357 = l_657);
            for (g_20.f0 = 0; (g_20.f0 >= (-3)); --g_20.f0)
            {
                int16_t l_663 = 0xC6F8L;
                int32_t l_695 = 0x2DC9DB21L;
                if ((safe_sub_func_uint32_t_u_u(g_316.f4, (l_658.f2 >= ((((0x07L && (g_357.f5 = ((l_663 <= (safe_rshift_func_int16_t_s_s(0x9E18L, ((g_609.f0 = ((safe_mul_func_uint16_t_u_u((((safe_rshift_func_int8_t_s_s(l_658.f3, 5)) , ((l_675 = (((((!(p_29 >= (((safe_rshift_func_int16_t_s_u((l_658.f5 ^ (safe_mod_func_int8_t_s_s(((l_663 , l_663) && l_658.f1), 0x28L))), 4)) < l_663) , 0L))) > g_357.f4) && l_657.f2) >= p_29) <= p_29)) , l_658.f5)) > p_29), 0x7A05L)) <= g_106)) <= p_29)))) <= p_29))) || 0UL) <= 0x00L) || g_357.f1)))))
                {
                    if (p_29)
                        break;
                    for (g_536.f0 = (-6); (g_536.f0 <= 10); g_536.f0++)
                    {
                        int8_t l_690 = 0x11L;
                        g_629 = (g_20.f0 != (!(safe_lshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_s((l_685 = ((safe_mul_func_uint8_t_u_u(p_29, l_658.f4)) , g_483)), (g_357.f4 <= ((safe_add_func_uint16_t_u_u(g_106, (safe_rshift_func_int8_t_s_s(l_663, 4)))) != (g_357.f3 = (l_690 ^ ((safe_rshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_u(g_357.f0, 1)), 15)) , (-1L)))))))), l_657.f5))));
                    }
                    l_695 = (0x243BFB2A94C3E1F6LL | ((g_357.f4 > 3L) | 0x8EEBD60AL));
                }
                else
                {
                    return l_658.f4;
                }
                g_316 = g_609;
            }
            l_715 = (7UL < ((((l_714 = (safe_mul_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u(g_20.f4, p_29)), ((g_357 , (l_658.f3 && (safe_rshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_u((0xAD89L && (((l_705 = (l_704 = (-1L))) || (safe_mod_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u((l_675 = (((safe_mul_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((g_357.f5 = p_29), g_20.f1)), l_658.f5)) && p_29) ^ 1UL)), l_685)), (-7L)))) <= p_29)), l_685)), 4)))) ^ g_14)))) , 1L) , 0xA8L) <= 0x36L));
        }
    }
    g_629 = (safe_mod_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(0x19L, (l_705 = ((((safe_mod_func_int16_t_s_s(l_658.f3, l_705)) < ((safe_add_func_int32_t_s_s((p_29 != p_29), (safe_mod_func_int8_t_s_s((((safe_add_func_uint32_t_u_u(g_20.f2, l_658.f3)) ^ (g_483 = 1UL)) & (p_29 < g_20.f2)), 0xD1L)))) && g_20.f0)) < l_658.f1) ^ l_658.f0)))), g_100));
    l_728 = l_728;
    if ((safe_mod_func_uint64_t_u_u((((~(safe_sub_func_uint64_t_u_u((g_536.f1 = g_357.f1), ((safe_lshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((safe_sub_func_int8_t_s_s((((safe_sub_func_int32_t_s_s((g_106 = (l_763 = ((l_658.f1 != (g_312 && (g_483 = 4294967287UL))) , (safe_lshift_func_int8_t_s_u((-6L), (safe_mod_func_uint32_t_u_u(p_29, ((((safe_mul_func_uint16_t_u_u(((!(safe_mul_func_int8_t_s_s((safe_mul_func_int8_t_s_s((l_705 = (safe_rshift_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_u((safe_mod_func_int32_t_s_s(((safe_sub_func_uint8_t_u_u((g_761 = 0xEAL), (((+(g_316.f2 = ((((g_285 = (((((g_118 = (p_29 | p_29)) < 0xD132804A82FB0978LL) < l_728.f4) < g_20.f3) >= l_728.f2)) , l_658.f1) && g_483) || p_29))) , 0x54A41F7AL) > p_29))) == g_357.f0), g_14)), 4)) != p_29), l_658.f2))), p_29)), g_100))) , l_658.f3), l_728.f2)) > l_658.f2) , p_29) , p_29)))))))), 9L)) < l_728.f0) , p_29), l_728.f4)), 7)), l_728.f4)) > (-5L))))) >= g_357.f2) || 0x47E8BC910BC76E3ELL), 0xAD0B91B8A0D48A56LL)))
    {
        uint16_t l_764 = 0x043CL;
        g_106 = 0xC2D84C48L;
        l_763 = l_764;
        g_106 = p_29;
    }
    else
    {
        if (g_20.f2)
        {
            g_357 = g_357;
        }
        else
        {
            return g_357.f5;
        }
    }
    return l_658.f1;
}
static int16_t func_30(int16_t p_31, int16_t p_32, struct S0 p_33, struct S0 p_34, int8_t p_35)
{
    int8_t l_616 = 1L;
    uint16_t l_623 = 65526UL;
    int32_t l_627 = 0x1DEE14E4L;
    int32_t l_628 = 0x221DAD85L;
    struct S1 l_632 = {0xF03CL,0xD15DEDACC3B839A9LL,0x9770D9853B420156LL,0x6ADCL,0xBF5EL,0x3CL};
    int32_t l_648 = 1L;
    int64_t l_649 = (-7L);
    uint32_t l_650 = 0x1113FE2FL;
    int32_t l_651 = 0L;
    int32_t l_652 = 0x013A05FCL;
    for (p_33.f0 = 0; (p_33.f0 == 10); ++p_33.f0)
    {
        struct S0 l_612 = {-9L,5UL,0x76L,65531UL,1L};
        g_106 = (-4L);
        l_612 = p_34;
        l_616 = (safe_unary_minus_func_uint8_t_u((safe_add_func_int64_t_s_s((p_33.f4 = l_612.f4), p_34.f2))));
    }
    g_629 = (!(((+l_616) , (l_628 = (safe_mod_func_uint16_t_u_u(g_20.f1, (safe_lshift_func_uint16_t_u_s((p_33.f3 = (g_609.f3 = (((g_106 = (l_616 <= (g_53 ^ ((0xE941L <= l_623) <= (safe_rshift_func_int8_t_s_u(p_31, 0)))))) , (l_616 ^ (+(((l_627 = (0x05FA7F40F6B3D5CDLL == g_357.f4)) ^ g_483) || p_33.f0)))) & g_311))), p_34.f4)))))) ^ g_20.f1));
    l_652 = (g_106 = (safe_add_func_int8_t_s_s((((l_632 = l_632) , (l_651 = ((g_609.f2 = (1UL ^ (safe_lshift_func_int16_t_s_u((((0x0FAAD68A61375C96LL & (safe_mod_func_int64_t_s_s(((((l_627 = (l_628 = g_100)) <= (safe_rshift_func_int8_t_s_u((((safe_lshift_func_uint16_t_u_s(((1L == (((safe_mul_func_uint16_t_u_u(((p_31 < (0x0CD45CBEL == (((((l_648 = (safe_mul_func_uint16_t_u_u(((!g_536.f2) < (safe_rshift_func_int8_t_s_s((((g_357.f5 = ((p_32 = p_34.f0) >= g_103)) && l_632.f5) < 0xF64BL), 0))), 0L))) > l_632.f4) > 1L) && 4294967293UL) <= g_260))) , 0x628FL), l_632.f1)) | g_20.f0) & p_34.f3)) != l_649), 10)) > 0xA7EAE086L) < 0x1D18E0CDL), l_632.f3))) , l_632.f4) || l_650), g_609.f0))) == l_632.f0) && l_632.f3), 8)))) == g_609.f1))) == g_182), 0x41L)));
    return g_609.f2;
}
static int32_t func_41(int8_t p_42, uint32_t p_43, int16_t p_44)
{
    int64_t l_538 = 0x6455D9A9F4F744FALL;
    int32_t l_541 = (-1L);
    int32_t l_604 = (-7L);
    int32_t l_606 = 8L;
    struct S1 l_607 = {0x43B9L,0x1674D990A123978ALL,-5L,1L,-10L,0x4CL};
    g_106 = l_538;
    for (g_357.f2 = 0; (g_357.f2 < 7); g_357.f2 = safe_add_func_int32_t_s_s(g_357.f2, 1))
    {
        uint64_t l_544 = 0xD37360B372F9E3CALL;
        uint16_t l_545 = 65535UL;
        int32_t l_555 = 0x5382ABE2L;
        int8_t l_589 = 0xFCL;
        int32_t l_590 = (-1L);
        int32_t l_605 = (-7L);
        struct S1 l_608 = {-1L,0x2B867EBC6C22D216LL,0x44ADA5C3A70C3FC6LL,-1L,0L,0xDBL};
        l_541 = p_44;
        for (g_260 = (-24); (g_260 > 58); ++g_260)
        {
            int32_t l_546 = (-1L);
            int8_t l_556 = (-1L);
            uint16_t l_557 = 0xB6BFL;
            int32_t l_558 = 0x572298C6L;
            uint32_t l_559 = 0x1EB2E0E0L;
            struct S0 l_579 = {5L,1UL,0x1AL,65535UL,-9L};
            uint64_t l_583 = 18446744073709551615UL;
            int32_t l_584 = 0x98F471FAL;
            int16_t l_599 = 1L;
            l_558 = (((((l_544 , (((g_483 = l_545) != ((l_546 > (safe_mul_func_int8_t_s_s((((-2L) || p_42) , l_538), (((safe_lshift_func_int8_t_s_u(0L, ((((((safe_add_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(g_14, 6)), (l_555 = l_546))) | l_544) , l_556) & g_260) > 0xA2L) || p_43))) >= g_168) >= p_42)))) , p_43)) != 0xBAL)) & 255UL) || 1UL) > l_557) | g_316.f0);
            l_559 = (g_106 = l_541);
            if ((g_357.f0 == (safe_add_func_int8_t_s_s(g_285, l_538))))
            {
                int64_t l_562 = 1L;
                g_106 = l_562;
            }
            else
            {
                struct S0 l_580 = {0x4FL,0x84L,255UL,0x16A3L,0x41C0306E1B25E860LL};
                int32_t l_585 = (-2L);
                l_584 = ((((p_43 > ((!g_100) <= (g_316.f2 = (safe_mod_func_uint64_t_u_u((+l_558), (safe_rshift_func_int8_t_s_u(0x08L, 6))))))) , (safe_mul_func_int16_t_s_s((((safe_lshift_func_uint16_t_u_s(((safe_sub_func_uint16_t_u_u(0UL, (l_558 = (safe_lshift_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(((l_580 = l_579) , (g_316.f4 || (safe_sub_func_uint16_t_u_u(((l_546 ^ l_541) != 0x1E5470AFF039BE76LL), g_536.f2)))), 0xB5CFA8EBL)), p_43))))) && g_536.f3), 13)) != l_583) != g_316.f2), l_541))) && 18446744073709551615UL) && g_316.f2);
                l_590 = (((l_585 = p_42) , (g_53 && p_43)) != (safe_add_func_int32_t_s_s((g_106 = g_588), (l_589 ^ (l_555 = l_541)))));
                l_580 = l_579;
                l_558 = (((safe_mul_func_int16_t_s_s(0xF967L, (((((safe_add_func_uint64_t_u_u(g_14, (l_585 = (safe_add_func_int64_t_s_s((((l_606 = (l_605 = (g_536.f3 != (g_20.f3 < (safe_rshift_func_uint16_t_u_u((l_604 = ((l_599 , ((((((g_182 , ((l_541 = p_43) , p_42)) , (safe_lshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(g_20.f3, p_44)), 0))) && 0x08L) || l_580.f0) , 1UL) == 0xF4737537E989F726LL)) <= g_20.f3)), 8)))))) == l_538) != (-10L)), l_538))))) , p_42) != p_42) != l_538) ^ p_42))) < l_579.f2) < p_44);
            }
        }
        l_608 = l_607;
    }
    l_541 = p_42;
    return g_357.f1;
}
static uint32_t func_45(uint64_t p_46, struct S1 p_47, uint8_t p_48, uint16_t p_49, int32_t p_50)
{
    p_50 = g_357.f3;
    return g_316.f1;
}
static uint64_t func_55(uint16_t p_56, uint32_t p_57, uint32_t p_58, uint16_t p_59, int16_t p_60)
{
    uint64_t l_116 = 18446744073709551606UL;
    uint8_t l_117 = 0x83L;
    struct S0 l_119 = {-1L,7UL,5UL,0xDC6FL,0xD13389D4FE02E223LL};
    int32_t l_128 = 2L;
    int16_t l_129 = 0x5813L;
    uint8_t l_138 = 250UL;
    int32_t l_197 = 0x271733CDL;
    int32_t l_198 = 0x881EA7A1L;
    int8_t l_199 = 0x16L;
    uint32_t l_225 = 0xC8359BE3L;
    int64_t l_232 = (-5L);
    int8_t l_342 = 0xF3L;
    int8_t l_393 = 0x1FL;
    int32_t l_473 = 0x6D61B4E3L;
    int32_t l_476 = (-4L);
    int16_t l_516 = 0x48E6L;
    uint32_t l_520 = 1UL;
    g_118 = (p_60 & (safe_mul_func_uint16_t_u_u((p_59 = ((p_56 || (g_20 , (0x626C4802A3EDB7DELL <= (g_106 = 0x29F9B9B769E501E4LL)))) >= p_59)), (safe_mul_func_uint8_t_u_u(((l_117 = (safe_add_func_uint8_t_u_u(((((0x2835E52A12E21983LL > (g_103 = (safe_unary_minus_func_int64_t_s(0x09B9819055545B60LL)))) && ((safe_mul_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(9L, g_20.f0)), 255UL)) != p_56)) , p_60) ^ 0xEEA4L), l_116))) || p_56), 0x7EL)))));
    l_119 = g_20;
    if ((safe_unary_minus_func_uint16_t_u((((g_20 , (!(l_119.f4 && (((4294967289UL >= g_20.f0) & ((((l_129 = (safe_sub_func_uint64_t_u_u(l_116, ((g_106 = (((p_57 && 0xF256DA865B3CABD6LL) | (safe_mod_func_int16_t_s_s(l_119.f0, (l_128 = ((safe_rshift_func_int8_t_s_u((((g_20.f2 && g_103) , p_59) ^ l_119.f3), g_20.f2)) | p_60))))) > g_20.f1)) & 4294967286UL)))) > 0x8DCBL) | p_56) == l_117)) <= g_118)))) , g_20.f3) || 0xB91FBA64L))))
    {
        int16_t l_134 = 2L;
        int32_t l_137 = 0x9CA3844EL;
        struct S1 l_139 = {0x3E85L,6UL,0L,-8L,1L,0xDAL};
        uint32_t l_261 = 6UL;
        struct S0 l_283 = {5L,248UL,0x11L,0x0960L,0xBCD69BB4E128B6DCLL};
        struct S0 l_286 = {0x7DL,255UL,0xD5L,65535UL,0xD53B09113BFD860ELL};
        uint32_t l_314 = 0x1047791FL;
        int32_t l_345 = 0x2C29D257L;
        int64_t l_394 = 1L;
        if (((safe_mod_func_uint64_t_u_u((((safe_lshift_func_int16_t_s_u((g_103 != (((0x91L == (((g_106 && (0x3203L <= (p_58 > (((l_134 <= 0xD86B4661L) | (safe_mul_func_int8_t_s_s((-6L), (l_137 = l_119.f3)))) , g_20.f4)))) | l_138) || 0x84E0L)) , 0L) == g_106)), 9)) , 0UL) != l_134), g_103)) && l_137))
        {
            uint32_t l_166 = 0x50F6E7EFL;
            int32_t l_167 = 0x35A7C04AL;
            uint16_t l_226 = 0x19EBL;
            struct S0 l_233 = {1L,0xD3L,253UL,0x72DDL,1L};
            int8_t l_272 = 0xB9L;
            uint16_t l_313 = 9UL;
            if (g_103)
            {
                int8_t l_173 = 0xCCL;
                int32_t l_181 = 0xC767B023L;
                struct S0 l_282 = {-4L,0xCCL,0x66L,0x8CA9L,0x3D71B0492FC4D6C5LL};
                g_106 = (18446744073709551611UL <= ((l_139 = l_139) , (l_167 = (((1L < l_139.f1) , ((safe_lshift_func_int16_t_s_s((((g_169 = (g_168 = (((((safe_mod_func_uint8_t_u_u(((((~((safe_lshift_func_uint16_t_u_u((((safe_add_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(l_139.f3, (safe_unary_minus_func_uint8_t_u((g_20 , (safe_mod_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u(247UL, l_139.f2)) & ((safe_mul_func_int16_t_s_s((safe_mod_func_int16_t_s_s(((safe_sub_func_int32_t_s_s(((l_166 = (((safe_lshift_func_int8_t_s_u((l_137 = (safe_rshift_func_uint8_t_u_s(g_53, 1))), 0)) & l_129) == p_59)) , l_119.f0), 0xD86A01D5L)) == p_58), l_167)), p_57)) >= 0L)), l_129))))))), 0x5EB6L)) , p_56) >= g_20.f2), 6)) , 9L)) ^ 8L) != 0xBBL) && 0x9C2EL), p_58)) ^ 0x803E9268L) , 0xB5F6A149L) ^ l_119.f0) >= 0x15B1D915A15C47ABLL))) | g_103) & l_139.f4), 0)) , g_100)) || g_169))));
                if (l_139.f2)
                {
                    uint8_t l_180 = 255UL;
                    int32_t l_208 = 0x760C5D1EL;
                    struct S0 l_262 = {0xFCL,0x85L,0x70L,0xA65AL,0x8AB48177611255D9LL};
                    l_137 = (safe_rshift_func_int16_t_s_s(((((0x3CD8D72E106ED31ELL < l_116) <= ((((g_20.f1 && ((g_182 = (((l_181 = (~((l_117 , ((l_180 = ((l_173 >= ((0xB63E7769F70AFF55LL ^ ((safe_lshift_func_int16_t_s_s((((safe_mod_func_int16_t_s_s((p_60 = (0x79D62275L & l_119.f3)), (safe_rshift_func_int8_t_s_u((((((((l_167 = ((((l_173 & g_14) ^ g_14) , p_57) , p_58)) < g_20.f1) < g_20.f0) > l_116) , 0xAF410160L) ^ l_173) | 0x55624925L), 2)))) || 0x1FL) & g_169), 6)) , p_60)) ^ l_166)) ^ 7UL)) , 0xA86176E3L)) , p_59))) == g_14) , g_106)) ^ g_20.f3)) && 0x4B37A05FL) <= (-10L)) > 0xE4L)) , l_139) , 6L), l_166));
                    if ((safe_mul_func_uint8_t_u_u(255UL, 0L)))
                    {
                        uint16_t l_211 = 1UL;
                        int32_t l_212 = 0x6FF74A9DL;
                        l_197 = (safe_rshift_func_int8_t_s_u((l_181 = ((l_128 = l_180) , (((l_173 , (g_168 & (safe_sub_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_s((l_128 ^ (((l_167 = g_20.f1) && (l_137 ^ (safe_add_func_int32_t_s_s(g_106, ((safe_lshift_func_uint16_t_u_u(0x3FAEL, (safe_mul_func_uint16_t_u_u(g_20.f1, l_167)))) , l_173))))) ^ 1L)), l_180)), l_139.f4)))) == 0UL) | 65532UL))), p_56));
                        l_208 = ((p_60 = (g_168 = (p_58 || p_57))) > (g_53 = (g_182 && (l_198 < ((0x25D64D038AAF2569LL & ((l_173 == (l_199 , (safe_rshift_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((safe_mul_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u(l_180, (g_106 != 0L))) & g_100), (-1L))), l_180)), l_139.f2)))) | g_100)) | 8L)))));
                        l_167 = ((safe_add_func_uint8_t_u_u(g_106, l_211)) , g_20.f2);
                        l_212 = 0xFC9603B0L;
                    }
                    else
                    {
                        int32_t l_224 = 0L;
                        g_106 = (safe_rshift_func_int16_t_s_s((p_60 = (((safe_mul_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u((safe_add_func_int64_t_s_s((!(safe_lshift_func_int8_t_s_s((l_167 = (l_224 & (l_225 & (p_59 != ((((l_226 = p_56) > ((((-8L) < (safe_rshift_func_uint8_t_u_s(((!p_60) , l_173), 7))) < (l_180 <= (safe_lshift_func_uint8_t_u_u(g_20.f0, g_20.f0)))) && l_232)) < p_60) != g_20.f0))))), p_56))), 18446744073709551615UL)), g_20.f2)), p_58)) != 1L) | l_208)), 9));
                        l_233 = l_233;
                        l_262 = (((((p_58 && (((safe_add_func_int8_t_s_s(((p_59 || ((safe_lshift_func_uint16_t_u_u((safe_add_func_int32_t_s_s((((safe_mul_func_int16_t_s_s(((safe_rshift_func_int8_t_s_s(0xA8L, 7)) & p_59), (((safe_lshift_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u((((((g_20.f0 ^ (l_137 || (safe_rshift_func_uint16_t_u_s((safe_sub_func_uint16_t_u_u((g_260 = ((safe_mul_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(l_208, ((0x8CL != p_56) & l_139.f1))), 10)) || 0L), 5L)) != p_56)), (-6L))), 9)))) <= 1L) != 0x9895135FD4661E40LL) < 0xDAL) <= (-1L)), g_20.f2)), 11)) < l_261) != 1L))) == g_20.f3) <= g_20.f4), 7UL)), l_261)) < p_60)) | 0xBFL), 0xB0L)) ^ p_59) >= 9UL)) == (-1L)) < g_20.f4) ^ g_20.f1) , g_20);
                    }
                }
                else
                {
                    int16_t l_284 = 0xAE0AL;
                    l_286 = ((safe_lshift_func_int8_t_s_s((g_168 && (g_103 || ((g_265 = g_169) ^ ((safe_lshift_func_uint16_t_u_u((g_20 , ((safe_mul_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(l_272, (safe_unary_minus_func_int16_t_s(p_59)))), (((l_283 = (l_233 = (((-3L) <= (((safe_rshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_s(((((safe_add_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(((0x43L <= (l_282 , g_260)) || (-6L)), l_282.f1)), g_103)) <= g_20.f3) >= l_138) < l_282.f1), g_103)), 2)) > 4294967291UL) , 2UL)) , l_282))) , l_138) != p_57))) & p_58)), l_284)) >= g_285)))), p_60)) , l_233);
                    g_315 = (g_106 = (safe_mul_func_uint16_t_u_u(((g_168 = l_225) && ((g_20.f1 = l_139.f2) == ((0UL >= (((safe_mul_func_int8_t_s_s(((((p_60 = (g_53 = l_173)) , 0x6E32C832L) < (safe_lshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(((safe_sub_func_int8_t_s_s(l_284, (safe_sub_func_uint64_t_u_u(p_57, g_118)))) ^ (safe_mul_func_int8_t_s_s((+(((safe_lshift_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(((safe_mod_func_uint64_t_u_u((((((g_312 = (g_311 = (l_137 = (safe_lshift_func_int8_t_s_s((~p_59), l_284))))) | 3UL) <= g_260) == l_166) > g_182), 9UL)) , 0xE2L), g_106)), 6)) >= g_20.f2) && l_119.f4)), g_14))), 10)), l_282.f2))) ^ l_284), l_282.f1)) & l_313) ^ l_166)) && l_314))), 0xADB9L)));
                    g_316 = l_282;
                }
            }
            else
            {
                uint8_t l_334 = 7UL;
                l_334 = (0x44L || ((l_167 = (safe_mul_func_int16_t_s_s((safe_add_func_int8_t_s_s((-1L), (g_260 <= ((safe_unary_minus_func_int16_t_s((p_57 ^ (safe_sub_func_uint8_t_u_u((safe_unary_minus_func_uint32_t_u((l_166 < (((safe_unary_minus_func_uint32_t_u(p_57)) , ((safe_mod_func_int16_t_s_s(p_57, ((safe_rshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s(p_59, 7)), 2)) | 0L))) , l_272)) == g_118)))), g_100))))) ^ p_59)))), 1UL))) == p_60));
            }
            l_128 = (safe_sub_func_uint8_t_u_u((l_137 = (l_198 = p_58)), (safe_mod_func_uint16_t_u_u((p_56 = ((0UL && 0L) < ((safe_add_func_uint32_t_u_u(((~l_286.f3) | (((l_345 = (65535UL | (l_342 >= (((safe_rshift_func_int8_t_s_s((-1L), (p_58 , 0L))) < g_118) >= g_316.f0)))) || g_182) , g_312)), 0UL)) ^ g_53))), l_134))));
        }
        else
        {
            int8_t l_348 = 0xD1L;
            int8_t l_360 = (-1L);
            int32_t l_361 = 0x117F8C89L;
            struct S1 l_370 = {0x4991L,0x248C8C4592B0D433LL,0x65C0EDC9BEBC32C6LL,-8L,3L,0xDCL};
            int64_t l_395 = 4L;
            l_361 = (((6L == (((safe_mul_func_uint8_t_u_u(l_348, (safe_lshift_func_int8_t_s_s((((l_128 = (+(g_311 || l_119.f0))) | p_59) || (safe_lshift_func_uint16_t_u_u((!(((safe_sub_func_int64_t_s_s(((((g_14 <= (p_56 = (g_316.f3 = ((l_139 = g_357) , (safe_mod_func_uint16_t_u_u((p_59 = g_357.f0), l_360)))))) != p_58) | l_119.f3) < l_360), p_58)) <= (-10L)) != p_60)), 4))), l_119.f0)))) <= g_316.f1) >= 0x025E17D8L)) >= (-6L)) < l_283.f4);
            g_106 = g_100;
            l_198 = (((p_56 = ((((p_58 = (safe_mul_func_uint16_t_u_u((g_106 & l_139.f3), l_116))) == (l_197 = g_20.f1)) >= ((safe_mul_func_int8_t_s_s((l_361 = 0x25L), (safe_rshift_func_int8_t_s_u(((safe_add_func_uint16_t_u_u(((l_370 , ((l_128 = (((safe_add_func_int16_t_s_s(((safe_sub_func_int8_t_s_s((safe_lshift_func_int16_t_s_u(p_60, g_311)), p_60)) > l_348), p_60)) & g_20.f1) > g_312)) >= g_20.f3)) == g_311), 0x4ED6L)) > 1UL), 6)))) <= g_315)) , p_60)) >= 0x2F05L) , 0L);
            g_106 = (((safe_lshift_func_uint16_t_u_s(((((0x4F5E980E34BD4938LL ^ 2UL) , l_283.f2) == (g_312 , ((safe_rshift_func_uint16_t_u_u(p_57, 10)) , (((((safe_rshift_func_uint16_t_u_s((safe_sub_func_uint8_t_u_u((((safe_unary_minus_func_uint8_t_u(((l_283 , (safe_sub_func_uint8_t_u_u(((p_58 = l_138) , (safe_mod_func_int64_t_s_s(g_182, (safe_unary_minus_func_int16_t_s((((safe_lshift_func_uint8_t_u_s((l_139 , p_59), l_393)) | 18446744073709551607UL) || 0x5F4550BBL)))))), 248UL))) != p_56))) | l_394) == 0x7BCCL), 0x64L)), p_60)) , g_357) , l_283.f0) | l_395) <= g_260)))) , p_60), 15)) , l_119.f3) > g_312);
        }
        g_316 = l_119;
        for (p_57 = 0; (p_57 < 1); p_57++)
        {
            int16_t l_436 = 0x4202L;
            int32_t l_437 = (-4L);
            g_106 = (+g_265);
            g_106 = (1UL || (safe_lshift_func_uint16_t_u_s(((safe_rshift_func_int16_t_s_u((safe_mod_func_int64_t_s_s((((safe_add_func_int16_t_s_s(p_58, (p_59 = ((l_345 = (safe_lshift_func_int8_t_s_u((safe_sub_func_uint32_t_u_u((l_137 , (safe_sub_func_int8_t_s_s(l_129, ((((safe_lshift_func_uint16_t_u_s(65535UL, (safe_rshift_func_uint8_t_u_u(g_20.f2, ((((l_437 = (safe_sub_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((g_103 || (~(safe_lshift_func_uint16_t_u_s(((((safe_lshift_func_uint16_t_u_s((g_316.f3 = (safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint16_t_u_s((((safe_mul_func_uint8_t_u_u((((((safe_sub_func_int64_t_s_s(1L, (l_137 = ((safe_rshift_func_int8_t_s_u(p_60, g_357.f1)) || g_20.f0)))) >= g_316.f3) | g_20.f0) > g_14) | l_436), p_56)) && p_58) | p_57), g_316.f1)), g_265))), g_53)) || 0UL) || 0xB09884D2L) ^ l_283.f1), l_139.f5)))), 0L)), l_139.f1))) == p_60) <= 18446744073709551615UL) & g_20.f1))))) <= p_59) < l_119.f0) > p_57)))), l_138)), g_53))) ^ 1L)))) & p_56) <= g_357.f0), l_286.f2)), 5)) != g_357.f5), p_60)));
        }
    }
    else
    {
        int8_t l_440 = 0x5FL;
        int32_t l_443 = 0xFED1B261L;
        uint64_t l_469 = 1UL;
        uint16_t l_482 = 0x409CL;
        int32_t l_486 = 0x96F6385FL;
        int32_t l_534 = 0xA15B89DEL;
        if ((((safe_add_func_uint16_t_u_u(((l_440 = g_20.f0) ^ (p_59 = (((0x3D28L <= ((g_106 , p_59) && p_60)) , (0xBC46D2E92B18FB1CLL && p_57)) || (l_128 = p_60)))), (g_357.f3 = (safe_sub_func_uint16_t_u_u(p_57, 9L))))) != l_443) < g_118))
        {
            int16_t l_470 = 0xD9DEL;
            int32_t l_471 = 0xE3B4D8D3L;
            int32_t l_474 = (-9L);
            int32_t l_475 = 0x14F0DF43L;
            if (g_357.f2)
            {
                uint64_t l_472 = 0xD1182DDDC65759DALL;
                l_476 = ((l_475 = ((p_58 , (safe_lshift_func_int8_t_s_u((-1L), ((l_474 = (l_473 = (((((safe_mod_func_uint32_t_u_u(((((safe_mod_func_int32_t_s_s(((safe_mul_func_int64_t_s_s(0L, (((safe_mod_func_int32_t_s_s((l_472 = (((+((((safe_mod_func_uint64_t_u_u((safe_mod_func_int64_t_s_s(0x3E3075481A67B9ECLL, ((l_128 = (l_471 = ((((g_285 = ((l_197 = g_20.f0) > ((safe_rshift_func_int8_t_s_u((l_469 = (safe_add_func_int16_t_s_s((l_198 = (safe_mul_func_int16_t_s_s((p_58 != g_182), ((safe_mod_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(0x9D67L, ((g_316.f1 = ((p_60 = p_56) , g_316.f1)) ^ p_59))), p_56)) ^ 0x21E6B41BF8B169A7LL)))), p_57))), p_58)) > l_470))) | 0xAE5FA1D2478E7992LL) == p_59) <= 5UL))) , l_443))), 0xA1B5FB86B1F90554LL)) == g_316.f4) != 0x29A2F1BEE13FE991LL) & 0xD0A345A6L)) ^ 0x17372B41L) > l_440)), 0xA76652DCL)) >= p_58) >= p_58))) | g_20.f2), 1L)) & p_57) & l_116) <= g_357.f1), l_117)) || (-1L)) < 0x1B768BDAEAC2B9D9LL) , p_56) != p_57))) < l_138)))) & g_20.f3)) & 0x64FE7D8400D46969LL);
                l_471 = g_20.f3;
            }
            else
            {
                struct S1 l_484 = {4L,0x58DE11E3C6B21A75LL,0x040CA63DC5F1FE55LL,-4L,-1L,0L};
                int32_t l_485 = 5L;
                for (g_20.f1 = (-15); (g_20.f1 <= 41); g_20.f1++)
                {
                    int8_t l_481 = 0x40L;
                    g_106 = ((g_311 == (safe_rshift_func_uint8_t_u_u((p_59 , (l_481 < ((p_59 , ((g_483 = ((l_482 == g_315) && (g_14 >= (g_316.f0 = l_481)))) , l_443)) ^ p_59))), 2))) , p_59);
                    g_357 = l_484;
                }
                l_485 = 0x66C90CBBL;
                g_316 = g_20;
                return l_486;
            }
        }
        else
        {
            int64_t l_493 = (-5L);
            int32_t l_507 = 0x187817E4L;
            l_507 = (safe_lshift_func_int16_t_s_s((g_53 = ((((safe_sub_func_int32_t_s_s((((safe_mod_func_uint32_t_u_u(((l_493 && (!0x3AABL)) , (((safe_mod_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_u((((((p_58 , (safe_lshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u(((((safe_mod_func_uint64_t_u_u((0UL || 0xE899L), l_507)) ^ (safe_add_func_int64_t_s_s((safe_mod_func_int64_t_s_s(g_260, ((safe_add_func_uint32_t_u_u(((safe_sub_func_int32_t_s_s(g_357.f5, (0x2FDA7249E897311ALL >= g_316.f1))) || l_129), 0xB3669826L)) && 0xED41E486L))), p_59))) , 0xFB40BA595F55AF59LL) > 1UL), 0x15L)) || 1L), p_57)), 3))) , g_265) != g_20.f4) < l_493) == l_119.f0), l_486)) || g_20.f4), p_56)) == g_20.f4) , 0xD57F4B2DL)), l_440)) ^ 18446744073709551615UL) > 0x36C5L), 0x91536337L)) < g_316.f3) , l_516) <= l_507)), g_106));
        }
        l_534 = (l_486 = ((g_285 <= (+(safe_rshift_func_int8_t_s_u((-1L), 1)))) == ((l_476 = l_520) != (((g_103 | l_116) <= (~((safe_mul_func_int16_t_s_s((l_128 | ((safe_mod_func_int16_t_s_s((0xC4L | (((((l_443 = ((4UL || (safe_mul_func_uint8_t_u_u((l_198 = ((safe_lshift_func_uint8_t_u_s(((((safe_mod_func_uint16_t_u_u((((safe_mul_func_uint8_t_u_u(g_100, l_469)) , g_14) > 6UL), g_260)) , g_20) , 1L) & 0x2D07L), l_486)) <= p_58)), g_357.f4))) & g_285)) && 4294967292UL) , l_486) >= l_469) | p_60)), g_182)) >= 0xE9F0929DL)), 0x2352L)) < 1UL))) | 0x95C481ACL))));
    }
    return g_20.f0;
}
inline static uint64_t func_63(uint16_t p_64, int32_t p_65)
{
    uint16_t l_89 = 0x8FB8L;
    uint32_t l_99 = 0x33086262L;
    struct S0 l_101 = {1L,253UL,0x6CL,65530UL,0x55642E063A29C5D0LL};
    g_103 = ((safe_rshift_func_int8_t_s_u(func_73((safe_sub_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(((!((-8L) < g_20.f3)) && (((g_100 = (((0x780627DBD1BD9F01LL < (((((p_64 > ((safe_sub_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((l_89 && 6L), (safe_lshift_func_int16_t_s_u(((safe_add_func_int16_t_s_s((((safe_rshift_func_int16_t_s_s(g_20.f3, (((safe_sub_func_uint32_t_u_u(((g_20.f4 = 0L) ^ ((!1UL) || p_65)), l_99)) != p_64) , g_53))) && l_99) != p_65), g_20.f3)) <= l_89), p_65)))), g_20.f2)), l_89)) && (-1L))) && 0xE3B8AEA20016C6A4LL) && g_20.f3) < 4L) < l_89)) | 1L) > g_14)) | p_65) || 1UL)), l_99)), 9L)), l_99, l_101, g_20.f2), 4)) && l_101.f3);
    return l_99;
}
static int8_t func_73(uint8_t p_74, uint16_t p_75, struct S0 p_76, uint8_t p_77)
{
    uint16_t l_102 = 65534UL;
    l_102 = g_100;
    return p_75;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_8;
    csmith_sink_ = g_14;
    csmith_sink_ = g_15;
    csmith_sink_ = g_20.f0;
    csmith_sink_ = g_20.f1;
    csmith_sink_ = g_20.f2;
    csmith_sink_ = g_20.f3;
    csmith_sink_ = g_20.f4;
    csmith_sink_ = g_53;
    csmith_sink_ = g_100;
    csmith_sink_ = g_103;
    csmith_sink_ = g_106;
    csmith_sink_ = g_118;
    csmith_sink_ = g_168;
    csmith_sink_ = g_169;
    csmith_sink_ = g_182;
    csmith_sink_ = g_260;
    csmith_sink_ = g_265;
    csmith_sink_ = g_285;
    csmith_sink_ = g_311;
    csmith_sink_ = g_312;
    csmith_sink_ = g_315;
    csmith_sink_ = g_316.f0;
    csmith_sink_ = g_316.f1;
    csmith_sink_ = g_316.f2;
    csmith_sink_ = g_316.f3;
    csmith_sink_ = g_316.f4;
    csmith_sink_ = g_357.f0;
    csmith_sink_ = g_357.f1;
    csmith_sink_ = g_357.f2;
    csmith_sink_ = g_357.f3;
    csmith_sink_ = g_357.f4;
    csmith_sink_ = g_357.f5;
    csmith_sink_ = g_483;
    csmith_sink_ = g_536.f0;
    csmith_sink_ = g_536.f1;
    csmith_sink_ = g_536.f2;
    csmith_sink_ = g_536.f3;
    csmith_sink_ = g_536.f4;
    csmith_sink_ = g_536.f5;
    csmith_sink_ = g_588;
    csmith_sink_ = g_609.f0;
    csmith_sink_ = g_609.f1;
    csmith_sink_ = g_609.f2;
    csmith_sink_ = g_609.f3;
    csmith_sink_ = g_609.f4;
    csmith_sink_ = g_629;
    csmith_sink_ = g_761;
    platform_main_end(0,0);
    return 0;
}
