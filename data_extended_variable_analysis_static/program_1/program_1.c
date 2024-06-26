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
static uint16_t g_21 = 0x5C2D;
static int16_t g_29 = (-4);
static int16_t g_30 = 4;
static int32_t g_32 = (-1);
static int16_t *g_45 = &g_29;
static int16_t **g_44 = &g_45;
static int32_t g_72 = 0x39588DFE;
static uint8_t g_82 = 0xEE;
static int32_t g_85 = 5;
static uint8_t g_87 = 6U;
static int8_t g_89 = 0x6F;
static int8_t g_98 = 0xA8;
static int32_t g_157 = 1;
static uint32_t g_161 = 4294967289U;
static int32_t *g_185 = &g_85;
static int32_t **g_184 = &g_185;
static int32_t ***g_183 = &g_184;
static uint32_t g_187 = 4294967294U;
static int32_t g_210 = (-8);
static int32_t g_227 = 0x38B95618;
static int16_t g_326 = 0x96FC;
static int32_t g_327 = 1;
static int16_t g_328 = (-6);
static int32_t g_342 = 0x22C2485C;
static int32_t g_347 = 0xB2ED70B5;
static int32_t g_363 = 2;
static int8_t g_373 = 0x98;
static uint32_t g_380 = 1U;
static int32_t g_590 = 0;
static int8_t g_594 = 0x3F;
static int32_t g_602 = 0x5F79DBF3;
static int8_t g_612 = 0xE5;
static int32_t g_619 = 0xE5074FC5;
static uint32_t g_631 = 4294967295U;
static uint32_t g_634 = 4294967295U;
static uint16_t g_662 = 65527U;
static uint8_t *g_667 = &g_87;
static uint8_t **g_666 = &g_667;
static int8_t g_855 = 0xED;
static uint16_t g_861 = 0x259E;
static int32_t *****g_943 = (void*)0;
static int32_t ****g_947 = (void*)0;
static int32_t *****g_946 = &g_947;
static int16_t ****g_1091 = (void*)0;
static uint32_t g_1121 = 0x586AD29E;
static uint16_t g_1130 = 0x99FD;
static uint8_t ****g_1160 = (void*)0;
static uint8_t *****g_1159 = &g_1160;
inline static uint8_t func_1(void);
static int8_t func_8(int8_t p_9);
inline static int16_t func_10(int32_t p_11, uint32_t p_12, uint32_t p_13);
inline static uint32_t func_15(uint8_t p_16, uint8_t p_17, int32_t p_18);
static uint8_t func_33(int32_t * p_34);
inline static uint32_t func_38(int32_t p_39, int16_t ** p_40, int16_t ** p_41, int16_t ** p_42);
static int16_t ** func_46(int32_t * p_47, int16_t * p_48);
inline static int32_t * func_49(int8_t p_50, uint32_t p_51, int16_t p_52, int32_t p_53);
static int32_t * func_55(int16_t * p_56, int16_t p_57, int32_t p_58, uint32_t p_59);
static int16_t * func_60(uint32_t p_61, int16_t ** p_62, int32_t * p_63);
inline static uint8_t func_1(void)
{
    int32_t l_14 = 1;
    int16_t *l_28 = &g_29;
    int32_t *l_31 = &g_32;
    int8_t *l_1164 = &g_373;
    (*l_31) = (safe_add_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((safe_sub_func_int8_t_s_s(func_8(((*l_1164) = (((func_10(l_14, func_15(((1 ^ (safe_mod_func_int8_t_s_s(1, ((g_21 == (safe_add_func_uint32_t_u_u((((*l_31) &= ((l_14 >= (g_21 || (g_30 = (safe_add_func_int32_t_s_s((g_21 != (l_14 != (safe_rshift_func_int16_t_s_s(((*l_28) = l_14), g_21)))), l_14))))) & g_21)) > g_21), (-9)))) | g_21)))) < 3), g_21, g_21), l_14) && 0xDF61) <= 0U) & g_327))), 0xF4)), 3)), g_594));
    return (**g_666);
}
static int8_t func_8(int8_t p_9)
{
    return g_590;
}
inline static int16_t func_10(int32_t p_11, uint32_t p_12, uint32_t p_13)
{
    return p_13;
}
inline static uint32_t func_15(uint8_t p_16, uint8_t p_17, int32_t p_18)
{
    int8_t *l_912 = &g_855;
    int32_t *l_916 = &g_342;
    int16_t **l_921 = &g_45;
    int32_t *l_924 = &g_85;
    int32_t ****l_945 = (void*)0;
    int32_t *****l_944 = &l_945;
    uint32_t l_950 = 0x329EC49B;
    int32_t l_974 = 0xF652E9D1;
    int32_t l_980 = 0;
    int32_t l_981 = 0xEC352537;
    int32_t l_986 = 0xB97FC597;
    int32_t l_1009 = 0x2680E70E;
    int32_t l_1015 = 1;
    int32_t l_1018 = (-1);
    int32_t l_1020 = (-1);
    int32_t l_1072 = (-8);
    int32_t l_1082 = 0x6419F036;
    uint16_t l_1084 = 0U;
    int8_t l_1115 = 0xE6;
    if ((func_33(&g_32) != ((*l_912) &= p_18)))
    {
        int32_t *l_920 = &g_32;
        uint32_t *l_935 = &g_187;
        int32_t l_951 = 0xF5B1743C;
        for (g_29 = 0; (g_29 != 6); g_29++)
        {
            int32_t l_915 = 0x4228D920;
            int16_t *l_919 = &g_30;
            int16_t ***l_922 = (void*)0;
            int16_t ***l_923 = &g_44;
            (*l_920) = ((l_915 | 0xDBDAC93B) > (((*l_923) = l_921) != (void*)0));
            l_920 = ((**g_183) = l_924);
        }
        (*g_184) = &p_18;
        (*l_916) &= ((*g_667) ^ (((safe_rshift_func_int16_t_s_s(p_17, ((safe_unary_minus_func_int16_t_s(0)) | (p_18 >= (safe_sub_func_int32_t_s_s(((safe_mod_func_uint16_t_u_u(((g_590 && (p_18 ^ (g_943 != (g_946 = l_944)))) & ((*l_920) = ((safe_add_func_uint32_t_u_u(((((*l_920) < 4U) > 4U) != l_950), 0)) > g_631))), p_17)) == p_18), l_951)))))) || (*l_920)) <= 0x37));
        (*l_924) &= (*g_185);
    }
    else
    {
        int32_t ****l_957 = &g_183;
        int32_t *l_958 = (void*)0;
        uint16_t *l_960 = &g_861;
        uint16_t **l_959 = &l_960;
        uint32_t *l_961 = &g_631;
        uint32_t *l_962 = &g_380;
        int32_t *l_963 = (void*)0;
        int32_t *l_964 = (void*)0;
        int32_t *l_965 = &g_347;
        int32_t *l_966 = (void*)0;
        int32_t *l_967 = &g_72;
        int32_t *l_968 = &g_342;
        int32_t *l_969 = &g_342;
        int32_t *l_970 = &g_32;
        int32_t *l_971 = &g_85;
        int32_t *l_972 = &g_85;
        int32_t l_973 = 0x6D42293F;
        int32_t *l_975 = &g_72;
        int32_t *l_976 = (void*)0;
        int32_t *l_977 = &g_32;
        int32_t *l_978 = (void*)0;
        int32_t *l_979 = &l_973;
        int32_t *l_982 = &l_981;
        int32_t *l_983 = &l_981;
        int32_t *l_984 = &l_981;
        int32_t *l_985 = &g_72;
        int32_t *l_987 = &l_986;
        int32_t *l_988 = &g_227;
        int32_t *l_989 = (void*)0;
        int32_t *l_990 = (void*)0;
        int32_t *l_991 = &l_974;
        int32_t *l_992 = &g_85;
        int32_t *l_993 = (void*)0;
        int32_t *l_994 = &g_347;
        int32_t l_995 = 0x24AF6CA7;
        int32_t l_996 = (-10);
        int32_t *l_997 = &g_227;
        int32_t *l_998 = (void*)0;
        int32_t *l_999 = &g_32;
        int32_t *l_1000 = &g_347;
        int32_t *l_1001 = &g_72;
        int32_t *l_1002 = &l_986;
        int32_t *l_1003 = &g_227;
        int32_t *l_1004 = &g_72;
        int32_t *l_1005 = (void*)0;
        int32_t *l_1006 = (void*)0;
        int32_t *l_1007 = (void*)0;
        int32_t *l_1008 = (void*)0;
        int32_t *l_1010 = (void*)0;
        int32_t *l_1011 = &l_974;
        int32_t *l_1012 = (void*)0;
        int32_t *l_1013 = &g_72;
        int32_t l_1014 = 0xD7933123;
        int32_t *l_1016 = (void*)0;
        int32_t *l_1017 = &l_996;
        int32_t *l_1019 = &l_996;
        int32_t l_1021 = 0x4A8F72BD;
        int32_t *l_1022 = &g_32;
        int32_t l_1023 = 1;
        int32_t *l_1024 = &l_996;
        int32_t *l_1025 = &g_602;
        int32_t *l_1026 = &l_973;
        int32_t *l_1027 = (void*)0;
        int32_t l_1028 = 0x7F501F7B;
        int32_t *l_1029 = &g_72;
        int32_t *l_1030 = &l_1023;
        int32_t *l_1031 = &l_974;
        int32_t *l_1032 = &g_227;
        int32_t *l_1033 = &g_85;
        int32_t *l_1034 = &g_342;
        int32_t *l_1035 = &l_1018;
        int32_t *l_1036 = &l_981;
        int32_t *l_1037 = (void*)0;
        int32_t *l_1038 = &l_1020;
        int32_t *l_1039 = &l_1018;
        int32_t *l_1040 = &g_602;
        int32_t *l_1041 = &l_995;
        int32_t *l_1042 = &l_1023;
        int32_t *l_1043 = &g_227;
        int32_t *l_1044 = (void*)0;
        int32_t *l_1045 = &g_85;
        int32_t *l_1046 = (void*)0;
        int32_t *l_1047 = (void*)0;
        int32_t *l_1048 = (void*)0;
        int32_t *l_1049 = &g_85;
        int32_t *l_1050 = &l_1028;
        int32_t *l_1051 = (void*)0;
        int32_t *l_1052 = &l_973;
        int32_t *l_1053 = (void*)0;
        int32_t *l_1054 = &l_1023;
        int32_t *l_1055 = (void*)0;
        int32_t *l_1056 = &g_72;
        int32_t *l_1057 = &g_85;
        int32_t *l_1058 = &l_1023;
        int32_t *l_1059 = (void*)0;
        int32_t *l_1060 = (void*)0;
        int32_t *l_1061 = &l_1020;
        int32_t *l_1062 = (void*)0;
        int32_t *l_1063 = &l_1021;
        int32_t *l_1064 = &l_996;
        int32_t *l_1065 = &g_602;
        int32_t *l_1066 = &l_986;
        int32_t *l_1067 = &g_85;
        int32_t *l_1068 = &l_1009;
        int32_t *l_1069 = &l_1020;
        int32_t *l_1070 = &g_342;
        int32_t *l_1071 = &l_1009;
        int32_t *l_1073 = &l_974;
        int32_t *l_1074 = &g_72;
        int32_t *l_1075 = &l_981;
        int32_t *l_1076 = (void*)0;
        int32_t *l_1077 = (void*)0;
        int32_t *l_1078 = &g_342;
        int32_t l_1079 = (-1);
        int32_t *l_1080 = &l_974;
        int32_t *l_1081 = &l_1020;
        int32_t *l_1083 = (void*)0;
        uint8_t ***l_1100 = &g_666;
        (*l_924) = ((g_347 ^ (!(((((*l_959) = &g_861) == (void*)0) && ((*l_962) = ((*l_961) = p_18))) >= 1U))) > p_18);
        ++l_1084;
        (*l_1067) |= (-2);
        if ((*l_916))
        {
            int32_t l_1116 = 0x17ABCC97;
            int32_t l_1119 = 0xB0D563B0;
            int16_t *l_1120 = &g_30;
            (*l_1080) |= ((safe_sub_func_uint32_t_u_u(4294967291U, ((g_1091 != g_1091) == ((((*l_965) = (((*l_1069) != (--(*l_962))) > (safe_add_func_uint32_t_u_u((safe_add_func_uint32_t_u_u(g_85, ((65529U > 65527U) <= (*l_1041)))), ((safe_rshift_func_int8_t_s_s((((&g_666 != l_1100) || g_29) <= g_612), (*l_924))) ^ p_17))))) == 0xA11204BB) >= p_16)))) || (*l_916));
            (*g_184) = func_55((*l_921), ((*l_1120) = (safe_add_func_uint8_t_u_u((*l_916), (safe_add_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((l_1119 |= ((+0x9636) == ((*l_912) = (safe_add_func_int16_t_s_s((-1), ((*g_45) = (safe_add_func_int8_t_s_s(((safe_unary_minus_func_uint32_t_u((((safe_sub_func_int32_t_s_s((((l_1115 ^ (l_1116 && (safe_sub_func_int8_t_s_s(((&l_1084 == (*l_959)) != (((void*)0 != l_1100) >= p_18)), l_1116)))) >= (*l_916)) ^ p_17), p_18)) >= 1) || 0))) > (*l_1064)), l_1116)))))))), (*g_667))), p_16))))), g_1121, p_18);
        }
        else
        {
            uint16_t **l_1124 = &l_960;
            int32_t l_1127 = 0xECB61A0A;
            int32_t l_1128 = 0x4AF2D04D;
            int32_t l_1129 = 0x41A13F6B;
            (***l_957) = func_55((*g_44), ((*g_45) ^= ((safe_sub_func_uint32_t_u_u(g_187, (l_1124 == l_1124))) > p_16)), ((&g_631 != &g_380) ^ ((*l_961) ^= (safe_sub_func_uint16_t_u_u(8U, (((g_327 & g_21) || p_16) | 0x86011412))))), p_18);
            g_1130++;
            for (l_1009 = (-26); (l_1009 >= (-3)); ++l_1009)
            {
                int32_t *l_1135 = &l_973;
                (*g_184) = l_1135;
                if (p_18)
                {
                    int16_t ***l_1152 = &g_44;
                    int16_t ****l_1151 = &l_1152;
                    int16_t *****l_1150 = &l_1151;
                    int16_t ****l_1154 = (void*)0;
                    int16_t *****l_1153 = &l_1154;
                    (*l_1066) = (((safe_lshift_func_uint8_t_u_s(((**g_666)++), (g_85 <= (safe_rshift_func_int16_t_s_s((*g_45), (safe_add_func_int8_t_s_s((~p_18), (p_17 < (safe_sub_func_int32_t_s_s((safe_sub_func_int8_t_s_s((p_16 && (+(*g_45))), (*l_924))), (g_1091 == ((*l_1153) = ((*l_1150) = g_1091))))))))))))) & 255U) != p_18);
                    for (g_363 = 0; (g_363 != 7); ++g_363)
                    {
                        if (l_1127)
                            break;
                    }
                    (***l_957) = (*g_184);
                    (*l_999) = 6;
                }
                else
                {
                    int32_t l_1163 = (-1);
                    for (l_986 = (-7); (l_986 != 29); l_986++)
                    {
                        (*g_184) = (void*)0;
                        g_1159 = g_1159;
                        if (p_17)
                            continue;
                        if (p_18)
                            continue;
                    }
                    for (g_32 = 0; (g_32 <= (-8)); g_32--)
                    {
                        return l_1163;
                    }
                }
            }
        }
    }
    (*l_916) = p_17;
    return (*l_916);
}
static uint8_t func_33(int32_t * p_34)
{
    int32_t l_35 = 4;
    int16_t *l_36 = &g_29;
    int16_t **l_37 = &l_36;
    int32_t *l_43 = &g_32;
    int16_t *l_195 = &g_29;
    (*l_43) = ((l_35 >= (((*l_37) = l_36) == (void*)0)) | func_38((l_43 == (void*)0), g_44, l_37, func_46(func_49((*l_43), (((safe_unary_minus_func_uint16_t_u((*l_43))) == (-10)) >= (*l_43)), (**g_44), (*p_34)), l_195)));
    return (*l_43);
}
inline static uint32_t func_38(int32_t p_39, int16_t ** p_40, int16_t ** p_41, int16_t ** p_42)
{
    int16_t *l_197 = &g_29;
    uint8_t *l_202 = (void*)0;
    uint8_t **l_203 = &l_202;
    int32_t l_206 = (-6);
    uint32_t l_207 = 0xF5692BD2;
    uint32_t *l_208 = &g_187;
    uint32_t *l_209 = (void*)0;
    uint8_t *l_214 = &g_82;
    uint8_t *l_215 = &g_87;
    int32_t l_233 = 0x0517B6AF;
    int32_t l_243 = 1;
    uint32_t l_244 = 0x426CD914;
    int32_t l_286 = 0x7F264C02;
    int32_t l_304 = (-1);
    int32_t l_336 = 0;
    uint8_t l_432 = 0x6B;
    uint16_t l_458 = 0x1EBB;
    uint8_t l_649 = 249U;
    uint8_t **l_679 = &l_215;
    int32_t *l_738 = &g_347;
    int16_t ***l_757 = &g_44;
    int16_t ****l_756 = &l_757;
    uint32_t l_910 = 0xCBC974CA;
    (**g_183) = func_55(l_197, ((((**g_44) <= 0xCE61) > (p_39 >= (safe_mod_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s(((((&g_82 == ((*l_203) = l_202)) < (g_210 = ((*l_208) = ((((safe_mod_func_int8_t_s_s(((l_197 != l_197) != (**g_184)), 0x3D)) ^ l_206) || p_39) && l_207)))) | p_39) | l_207), 6)), l_206)))) <= l_206), p_39, g_21);
    if (((safe_add_func_int16_t_s_s((((*l_215) = ((*l_214) |= (safe_unary_minus_func_uint8_t_u(l_206)))) == 0x11), (**p_42))) | (-1)))
    {
        int32_t *l_216 = &g_72;
        int32_t *l_217 = &g_32;
        int32_t *l_218 = &g_32;
        int32_t *l_219 = &l_206;
        int32_t *l_220 = &g_85;
        int32_t *l_221 = &g_32;
        int32_t l_222 = (-4);
        int32_t *l_223 = &l_222;
        int32_t l_224 = 0x9A5490C0;
        int32_t *l_225 = &l_206;
        int32_t *l_226 = &l_224;
        int32_t *l_228 = &l_206;
        int32_t *l_229 = &g_32;
        int32_t *l_230 = (void*)0;
        int32_t *l_231 = &l_224;
        int32_t *l_232 = &g_32;
        int32_t *l_234 = (void*)0;
        int32_t *l_235 = (void*)0;
        int32_t *l_236 = &g_227;
        int32_t *l_237 = (void*)0;
        int32_t *l_238 = (void*)0;
        int32_t *l_239 = &g_72;
        int32_t *l_240 = &l_222;
        int32_t *l_241 = (void*)0;
        int32_t *l_242 = &g_227;
        int32_t l_299 = 0xE011399F;
        int32_t l_319 = (-1);
        int32_t l_352 = 0x68BBE49A;
        int32_t l_354 = 0x53446F38;
        int32_t l_366 = 9;
        int32_t l_370 = 0x9E744938;
        uint32_t l_399 = 0U;
        uint8_t *l_415 = &g_82;
        int8_t l_589 = 0xEC;
        int32_t **l_715 = (void*)0;
        uint32_t l_778 = 0U;
        int16_t ***l_881 = (void*)0;
        ++l_244;
        if ((((*g_45) == (safe_sub_func_uint8_t_u_u(g_85, g_210))) > 0x2E619775))
        {
            int32_t l_298 = 0xAD12C72D;
            int32_t l_417 = 0x9962E55F;
            int32_t l_418 = (-10);
            int32_t ****l_684 = &g_183;
            int32_t *****l_683 = &l_684;
            int8_t l_723 = 0;
            uint32_t *l_727 = &g_380;
            int32_t l_755 = 7;
            if (p_39)
            {
                int32_t *l_249 = &g_227;
                int32_t *l_250 = &l_243;
                int32_t *l_251 = &l_222;
                int32_t *l_252 = &g_227;
                int32_t *l_253 = &g_85;
                int32_t *l_254 = &g_85;
                int32_t *l_255 = &g_72;
                int32_t *l_256 = &l_206;
                int32_t *l_257 = &l_243;
                int32_t *l_258 = &l_206;
                int32_t *l_259 = &g_227;
                int32_t *l_260 = (void*)0;
                int32_t *l_261 = &l_222;
                int32_t *l_262 = &g_227;
                int32_t *l_263 = &l_222;
                int32_t *l_264 = &l_243;
                int32_t *l_265 = &l_222;
                int32_t *l_266 = &g_72;
                int32_t *l_267 = &g_227;
                int32_t *l_268 = &g_85;
                int32_t *l_269 = &g_32;
                int32_t *l_270 = &g_72;
                int32_t *l_271 = &l_206;
                int32_t *l_272 = (void*)0;
                int32_t *l_273 = &g_32;
                int32_t *l_274 = &g_85;
                int32_t *l_275 = (void*)0;
                int32_t *l_276 = &l_224;
                int32_t *l_277 = &l_224;
                int32_t *l_278 = &l_206;
                int32_t *l_279 = &l_233;
                int32_t *l_280 = &g_32;
                int32_t l_281 = 1;
                int32_t *l_282 = &l_222;
                int32_t *l_283 = &g_72;
                int32_t *l_284 = &l_222;
                int32_t *l_285 = &l_281;
                int32_t *l_287 = (void*)0;
                int32_t *l_288 = &l_206;
                int32_t *l_289 = &l_233;
                int32_t *l_290 = &g_32;
                int32_t *l_291 = &l_224;
                int32_t *l_292 = &g_85;
                int32_t *l_293 = &l_281;
                int32_t *l_294 = &l_243;
                int32_t *l_295 = &l_243;
                int32_t *l_296 = &l_206;
                int32_t *l_297 = &g_32;
                int32_t *l_300 = (void*)0;
                int32_t *l_301 = &g_85;
                int32_t *l_302 = &l_243;
                int32_t *l_303 = (void*)0;
                int32_t *l_305 = &l_281;
                int32_t *l_306 = (void*)0;
                int32_t *l_307 = &l_299;
                int32_t *l_308 = &l_298;
                int32_t *l_309 = &l_243;
                int32_t *l_310 = &l_206;
                int32_t *l_311 = &l_298;
                int32_t *l_312 = (void*)0;
                int32_t *l_313 = &l_222;
                int32_t *l_314 = &g_72;
                int32_t *l_315 = &l_299;
                int32_t *l_316 = &g_227;
                int32_t *l_317 = &g_32;
                int32_t *l_318 = &l_298;
                int32_t *l_320 = &l_319;
                int32_t *l_321 = &l_206;
                int32_t *l_322 = &l_233;
                int32_t *l_323 = &g_85;
                int32_t l_324 = 0x1BE63813;
                int32_t *l_325 = &l_304;
                int32_t *l_329 = &g_72;
                int32_t *l_330 = &l_298;
                int32_t *l_331 = &l_222;
                int32_t *l_332 = &l_304;
                int32_t *l_333 = (void*)0;
                int32_t *l_334 = (void*)0;
                int32_t *l_335 = &l_281;
                int32_t *l_337 = (void*)0;
                int32_t *l_338 = (void*)0;
                int32_t *l_339 = (void*)0;
                int32_t *l_340 = &l_206;
                int32_t *l_341 = (void*)0;
                int32_t *l_343 = &g_32;
                int32_t *l_344 = &l_298;
                int32_t *l_345 = &l_298;
                int32_t *l_346 = &l_324;
                int32_t *l_348 = &l_233;
                int32_t *l_349 = &g_85;
                int32_t *l_350 = &l_233;
                int32_t *l_351 = &l_286;
                int32_t *l_353 = &l_299;
                int32_t *l_355 = (void*)0;
                int32_t *l_356 = &l_336;
                int32_t *l_357 = &l_206;
                int32_t *l_358 = &l_286;
                int32_t *l_359 = (void*)0;
                int32_t *l_360 = &l_298;
                int32_t *l_361 = &l_336;
                int32_t *l_362 = &l_281;
                int32_t *l_364 = (void*)0;
                int32_t *l_365 = &l_222;
                int32_t *l_367 = (void*)0;
                int32_t *l_368 = &l_233;
                int32_t *l_369 = &g_85;
                int32_t *l_371 = &g_347;
                int32_t *l_372 = (void*)0;
                int32_t *l_374 = (void*)0;
                int32_t *l_375 = &g_227;
                int32_t *l_376 = &l_354;
                int32_t *l_377 = (void*)0;
                int32_t *l_378 = (void*)0;
                int32_t *l_379 = (void*)0;
                g_380++;
                (*l_302) = (**g_184);
            }
            else
            {
                uint8_t l_385 = 0xC6;
                int32_t l_388 = 0;
                int32_t l_389 = 0xA6923628;
                int32_t l_390 = 1;
                int8_t *l_406 = &g_89;
                (*l_217) &= (p_39 && (g_87 || p_39));
                (*l_228) = 0x97B6011E;
                for (g_347 = 24; (g_347 < 23); g_347--)
                {
                    int32_t *l_391 = &l_206;
                    int32_t *l_392 = (void*)0;
                    int32_t *l_393 = &l_206;
                    int32_t l_394 = 1;
                    int32_t *l_395 = &l_336;
                    int32_t *l_396 = &l_299;
                    int32_t *l_397 = (void*)0;
                    int32_t *l_398 = (void*)0;
                    l_385++;
                    --l_399;
                    if (l_388)
                        break;
                }
                (*l_236) &= ((*l_225) = ((safe_add_func_int16_t_s_s(((((*l_215) = (safe_rshift_func_int8_t_s_s(((*l_406) = l_298), 5))) && ((((((g_373 |= (g_32 & (safe_lshift_func_int8_t_s_u((g_98 = ((safe_sub_func_int8_t_s_s(((*l_406) &= (safe_rshift_func_int8_t_s_u(0, ((*l_215) = g_161)))), 0xCB)) && ((safe_add_func_uint8_t_u_u(l_298, g_72)) != l_389))), 7)))) | p_39) >= l_389) & (-8)) <= g_347) != g_32)) <= g_187), p_39)) < 0));
            }
            if ((((**p_42) = ((**g_183) != (*g_184))) && (l_415 != l_415)))
            {
                int16_t l_416 = 0x24B1;
                int32_t l_419 = 0;
                int32_t *l_420 = &l_299;
                int32_t *l_421 = &l_366;
                int32_t *l_422 = &l_233;
                int32_t *l_423 = &l_206;
                int32_t *l_424 = &l_354;
                int32_t *l_425 = (void*)0;
                int32_t *l_426 = (void*)0;
                int32_t *l_427 = &g_32;
                int32_t *l_428 = (void*)0;
                int32_t l_429 = 0x3D06CCA6;
                int32_t *l_430 = (void*)0;
                int32_t *l_431 = &g_85;
                int32_t ****l_665 = &g_183;
                --l_432;
                for (l_418 = 0; (l_418 >= (-15)); l_418--)
                {
                    int32_t **l_457 = &l_231;
                    int32_t l_459 = 0x48657F93;
                    int32_t l_486 = (-1);
                    int32_t l_503 = 0x3B96F827;
                    int32_t l_533 = (-9);
                    int32_t l_554 = (-10);
                    int32_t l_564 = 0xD9498994;
                    int32_t l_591 = 0;
                    uint8_t **l_680 = &l_214;
                    int32_t **l_685 = (void*)0;
                    int32_t **l_686 = &l_423;
                }
            }
            else
            {
                uint32_t *l_699 = (void*)0;
                uint32_t *l_700 = (void*)0;
                uint32_t *l_701 = &l_399;
                int32_t l_702 = 0xA1166EDB;
                uint16_t *l_703 = &l_458;
                uint16_t *l_704 = &g_21;
                uint8_t ***l_724 = &l_203;
                int16_t ****l_733 = (void*)0;
                int16_t ***l_735 = &g_44;
                int16_t ****l_734 = &l_735;
                int8_t l_747 = 7;
                int32_t ***l_752 = &g_184;
                int32_t l_754 = 0x6B8AEEBA;
                if ((p_39 || (6 > ((*l_704) = ((*l_703) ^= ((*g_45) ^ (((*l_220) = (safe_add_func_uint8_t_u_u((safe_add_func_int16_t_s_s((*l_217), (((safe_sub_func_uint8_t_u_u(((g_98 = g_327) ^ ((g_187 = p_39) == p_39)), ((!(((((safe_lshift_func_int16_t_s_u((l_702 = (p_39 > (~(safe_add_func_uint32_t_u_u(((*l_701) &= g_328), (*****l_683)))))), p_39)) || p_39) == (*g_667)) > 0xF109158F) ^ (***g_183))) < (*****l_683)))) == p_39) > g_327))), (*l_226)))) || 0)))))))
                {
                    uint32_t l_718 = 1U;
                    p_39 |= l_649;
                    if ((safe_sub_func_int32_t_s_s(l_233, (l_702 < ((safe_lshift_func_uint8_t_u_s((8U && ((safe_add_func_int16_t_s_s((*l_226), (safe_add_func_int16_t_s_s(((l_715 = (*g_183)) == (***l_683)), (p_39 & ((*l_236) < (safe_lshift_func_int16_t_s_u((*g_45), 14)))))))) > p_39)), 7)) || 0U)))))
                    {
                        return p_39;
                    }
                    else
                    {
                        ++l_718;
                        (*l_236) ^= (**g_184);
                        (**g_183) = func_55((*p_40), (l_702 | p_39), p_39, ((*l_208) = ((((*l_704) = ((p_39 || l_718) || ((**l_679) = (p_39 || 251U)))) != (safe_add_func_uint16_t_u_u((p_39 && l_718), p_39))) >= 65535U)));
                    }
                    (**g_184) = ((*l_223) ^= (p_39 || g_161));
                }
                else
                {
                    uint8_t ****l_725 = (void*)0;
                    uint8_t ****l_726 = &l_724;
                    int32_t l_728 = 5;
                    (*l_231) &= (0xB96E405D != l_723);
                    (*l_726) = l_724;
                    (***l_684) = &p_39;
                    (*l_225) = ((l_727 != l_701) | ((**p_40) = ((l_728 < (safe_lshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_s((0xF2 <= l_728), (**p_40))), 2))) ^ (**g_44))));
                }
                (*l_734) = (void*)0;
                for (l_206 = (-9); (l_206 <= (-9)); l_206 = safe_add_func_int32_t_s_s(l_206, 3))
                {
                    int32_t ***l_753 = &g_184;
                    int32_t l_782 = 7;
                    int32_t l_812 = 2;
                    int32_t l_849 = 1;
                    l_738 = &p_39;
                    if ((safe_add_func_int16_t_s_s((((((*l_703) ^= ((safe_rshift_func_int16_t_s_u(0, 4)) >= (safe_rshift_func_int8_t_s_u((safe_add_func_int32_t_s_s((g_380 >= ((((**l_679) = (**g_666)) == l_747) < p_39)), (safe_add_func_uint32_t_u_u(((((void*)0 != l_699) || p_39) && ((safe_sub_func_uint16_t_u_u(((((((l_752 == l_753) & 255U) > 1) < (****l_684)) <= 0x355E920F) >= l_754), 65534U)) >= (*l_221))), g_373)))), (***l_753))))) >= l_755) || (*g_45)) | 0xD7AA), (****l_684))))
                    {
                        int16_t *****l_758 = &l_734;
                        int16_t *****l_759 = (void*)0;
                        int16_t *****l_760 = (void*)0;
                        int16_t *****l_761 = &l_756;
                        int32_t l_776 = 0;
                        uint8_t *l_777 = &l_649;
                        (*l_761) = ((*l_758) = l_756);
                        (***g_183) = (-1);
                        (*l_218) = ((void*)0 == p_40);
                        (***l_752) = ((((safe_add_func_uint32_t_u_u(1U, p_39)) ^ (*g_185)) < (((**g_44) = ((**g_666) <= (safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u(((*l_777) &= ((*l_214) = ((safe_lshift_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(((l_776 = ((safe_lshift_func_uint8_t_u_u(p_39, 6)) || (safe_mul_func_int8_t_s_s(((-8) < ((((*l_724) = &g_667) != (void*)0) ^ (4294967293U || 3))), 0U)))) && 0x31), (*l_738))), p_39)) ^ p_39))), 6)), 2)))) <= l_778)) != 0xEB9D);
                    }
                    else
                    {
                        uint8_t l_779 = 1U;
                        int32_t *l_783 = &l_336;
                        int32_t *l_784 = &g_342;
                        int32_t *l_785 = &g_85;
                        int32_t *l_786 = &l_243;
                        int32_t *l_787 = (void*)0;
                        int32_t *l_788 = (void*)0;
                        int32_t *l_789 = &l_298;
                        int32_t *l_790 = &g_602;
                        int32_t *l_791 = &g_347;
                        int32_t *l_792 = &g_342;
                        int32_t *l_793 = &l_243;
                        int32_t *l_794 = &l_224;
                        int32_t *l_795 = &l_304;
                        int32_t *l_796 = &g_342;
                        int32_t *l_797 = &l_222;
                        int32_t *l_798 = &g_227;
                        int32_t *l_799 = &g_347;
                        int32_t *l_800 = &g_602;
                        int32_t *l_801 = (void*)0;
                        int32_t *l_802 = &l_299;
                        int32_t *l_803 = &l_224;
                        int32_t *l_804 = &l_754;
                        int32_t *l_805 = (void*)0;
                        int32_t *l_806 = &l_417;
                        int32_t *l_807 = &l_418;
                        int32_t *l_808 = &g_602;
                        int32_t *l_809 = &g_72;
                        int32_t *l_810 = (void*)0;
                        int32_t *l_811 = &l_370;
                        int32_t *l_813 = &g_342;
                        int32_t *l_814 = &g_72;
                        int32_t *l_815 = (void*)0;
                        int32_t *l_816 = &l_366;
                        int32_t *l_817 = &l_233;
                        int32_t *l_818 = &g_347;
                        int32_t *l_819 = &l_286;
                        int32_t *l_820 = &l_298;
                        int32_t *l_821 = &l_352;
                        int32_t *l_822 = &l_336;
                        int32_t *l_823 = &l_352;
                        int32_t *l_824 = &l_366;
                        int32_t *l_825 = &l_304;
                        int32_t *l_826 = (void*)0;
                        int32_t *l_827 = &l_417;
                        int32_t *l_828 = (void*)0;
                        int32_t *l_829 = &l_243;
                        int32_t *l_830 = &l_812;
                        int32_t *l_831 = (void*)0;
                        int32_t *l_832 = &l_754;
                        int32_t *l_833 = &g_85;
                        int32_t *l_834 = &l_366;
                        int32_t *l_835 = &g_72;
                        int32_t *l_836 = (void*)0;
                        int32_t *l_837 = &l_224;
                        int32_t *l_838 = &l_224;
                        int32_t *l_839 = &l_370;
                        int32_t *l_840 = &l_222;
                        int32_t *l_841 = (void*)0;
                        int32_t *l_842 = (void*)0;
                        int32_t *l_843 = &g_342;
                        int32_t *l_844 = (void*)0;
                        int32_t *l_845 = (void*)0;
                        int32_t *l_846 = &l_354;
                        int32_t *l_847 = &l_418;
                        int32_t *l_848 = &g_72;
                        int32_t *l_850 = &l_417;
                        int32_t *l_851 = &g_85;
                        int32_t *l_852 = (void*)0;
                        int32_t *l_853 = &l_849;
                        int32_t *l_854 = &g_85;
                        int32_t *l_856 = (void*)0;
                        int32_t *l_857 = &l_319;
                        int32_t *l_858 = &l_366;
                        int32_t *l_859 = &g_85;
                        int32_t *l_860 = &g_342;
                        (**g_183) = (*g_184);
                        (*l_220) |= 0;
                        ++l_779;
                        g_861++;
                    }
                    if (((0x80 ^ ((**g_44) && (((safe_lshift_func_int8_t_s_u(((((*l_704) = ((g_380--) != (***l_752))) & ((safe_sub_func_uint32_t_u_u(((*l_701) |= (((*g_667) == (safe_unary_minus_func_uint8_t_u((*g_667)))) != (((safe_mod_func_int16_t_s_s((**g_44), (safe_mod_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((**p_42), 4)), ((safe_lshift_func_int16_t_s_s((((*l_239) = (safe_sub_func_uint32_t_u_u(((&g_44 != ((*l_756) = l_881)) < (**g_44)), 4294967295U))) && 0x04D68C53), (**g_44))) && p_39))))) >= g_594) > 0x28))), p_39)) & 0)) < p_39), (*g_667))) < (***l_753)) ^ p_39))) >= g_89))
                    {
                        (**l_752) = (*g_184);
                        if ((***l_753))
                            break;
                    }
                    else
                    {
                        int8_t *l_883 = &l_723;
                        int8_t **l_882 = &l_883;
                        int8_t *l_885 = &g_594;
                        int8_t **l_884 = &l_885;
                        (***l_753) = (((*l_882) = l_214) == ((*l_884) = &l_589));
                        if ((***l_753))
                            break;
                        return p_39;
                    }
                }
            }
            (*l_217) = p_39;
        }
        else
        {
            (*l_226) |= ((**p_42) >= 0x4FEE);
            return g_363;
        }
    }
    else
    {
        return p_39;
    }
    for (g_72 = (-4); (g_72 > 16); g_72 = safe_add_func_int8_t_s_s(g_72, 3))
    {
        int32_t l_892 = 1;
        uint16_t l_907 = 0x6835;
        int32_t l_909 = 0xB1F47291;
        int32_t l_911 = 0x8E044B3E;
        l_911 &= ((safe_add_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_u(l_892, 6)) || ((+(safe_unary_minus_func_uint8_t_u((safe_mod_func_uint32_t_u_u((((safe_add_func_uint32_t_u_u(0x89F3F2C7, ((***g_183) = (safe_rshift_func_int8_t_s_s((((**g_666) ^= ((l_892 & (**p_40)) & (safe_mod_func_uint16_t_u_u((safe_mod_func_int16_t_s_s(((safe_add_func_uint32_t_u_u((((*l_214) = l_907) & (p_39 > (~(7 | ((((l_909 <= l_910) ^ l_892) < p_39) != l_892))))), (*l_738))) != (*g_45)), (*l_738))), (*g_45))))) <= 0x76), g_342))))) & 0x88) && 0x5AF5), 0x3EE54826))))) | g_326)), 7U)) ^ l_907);
    }
    return p_39;
}
static int16_t ** func_46(int32_t * p_47, int16_t * p_48)
{
    int16_t **l_196 = &g_45;
    (***g_183) = 0x5DB76206;
    return l_196;
}
inline static int32_t * func_49(int8_t p_50, uint32_t p_51, int16_t p_52, int32_t p_53)
{
    int32_t *l_67 = (void*)0;
    uint16_t *l_68 = &g_21;
    int32_t *l_71 = &g_72;
    uint8_t *l_80 = (void*)0;
    uint8_t *l_81 = &g_82;
    int32_t *l_83 = (void*)0;
    int32_t *l_84 = &g_85;
    int16_t l_86 = (-5);
    int8_t *l_88 = &g_89;
    int16_t **l_90 = (void*)0;
    int32_t ****l_194 = (void*)0;
    int32_t *****l_193 = &l_194;
    (*g_184) = func_55(((*g_44) = func_60((((((*l_88) = ((safe_unary_minus_func_int32_t_s((safe_sub_func_int32_t_s_s(g_32, (g_87 = (((((*l_68) |= (l_67 == &g_32)) >= (g_32 || ((*l_84) = (((safe_sub_func_int16_t_s_s((((*l_71) = g_32) < 8), ((!(safe_sub_func_int8_t_s_s((safe_rshift_func_int8_t_s_u((p_52 & (safe_lshift_func_int8_t_s_s((-8), ((((*l_81) = ((p_52 > g_29) ^ p_51)) && 1U) == p_51)))), p_51)), g_29))) > g_32))) != p_51) <= p_53)))) | p_52) <= l_86)))))) & 0x04B7)) | p_50) ^ g_29) < 0x6109), l_90, &g_32)), p_53, p_51, g_29);
    (**g_183) = (*g_184);
    (*g_185) &= (safe_sub_func_int32_t_s_s(0x714DF77C, (((*l_193) = &g_183) != (void*)0)));
    return (***l_194);
}
static int32_t * func_55(int16_t * p_56, int16_t p_57, int32_t p_58, uint32_t p_59)
{
    int32_t *l_190 = &g_32;
    return l_190;
}
static int16_t * func_60(uint32_t p_61, int16_t ** p_62, int32_t * p_63)
{
    int32_t *l_93 = &g_32;
    int32_t *l_95 = &g_32;
    int32_t **l_94 = &l_95;
    uint16_t *l_96 = &g_21;
    int8_t *l_97 = &g_98;
    uint8_t *l_99 = &g_87;
    int32_t *l_103 = (void*)0;
    int32_t *l_104 = &g_72;
    int32_t *l_105 = &g_72;
    int32_t *l_106 = &g_32;
    int32_t *l_107 = (void*)0;
    int32_t *l_108 = &g_85;
    int32_t *l_109 = (void*)0;
    int32_t *l_110 = &g_32;
    int32_t *l_111 = (void*)0;
    int32_t *l_112 = &g_72;
    int32_t *l_113 = &g_32;
    int32_t *l_114 = &g_72;
    int32_t *l_115 = &g_85;
    int32_t *l_116 = &g_32;
    int32_t *l_117 = &g_72;
    int32_t *l_118 = &g_72;
    int32_t *l_119 = &g_32;
    int32_t *l_120 = (void*)0;
    int32_t *l_121 = &g_85;
    int32_t *l_122 = &g_85;
    int32_t *l_123 = &g_72;
    int32_t *l_124 = &g_32;
    int32_t l_125 = 0x357609E5;
    int32_t *l_126 = &l_125;
    int32_t *l_127 = &g_32;
    int32_t *l_128 = &g_32;
    int32_t *l_129 = &g_32;
    int32_t *l_130 = &l_125;
    int32_t *l_131 = &l_125;
    int32_t l_132 = 0x2804CE6F;
    int32_t *l_133 = &l_125;
    int32_t *l_134 = (void*)0;
    int32_t *l_135 = &l_125;
    int32_t *l_136 = &g_85;
    int32_t *l_137 = &g_72;
    int32_t *l_138 = &g_72;
    int32_t *l_139 = &l_125;
    int32_t *l_140 = &l_125;
    int32_t *l_141 = &g_85;
    int32_t *l_142 = &l_132;
    int32_t l_143 = 0xF9AB2FCB;
    int32_t *l_144 = &g_85;
    int32_t l_145 = 8;
    int32_t *l_146 = &l_132;
    int32_t *l_147 = &l_145;
    int32_t *l_148 = &g_32;
    int32_t *l_149 = &l_145;
    int32_t *l_150 = (void*)0;
    int32_t *l_151 = &g_85;
    int32_t *l_152 = &g_72;
    int32_t *l_153 = &g_32;
    int32_t *l_154 = &l_143;
    int32_t l_155 = (-1);
    int32_t *l_156 = &l_145;
    int32_t *l_158 = (void*)0;
    int32_t *l_159 = &g_32;
    int32_t *l_160 = (void*)0;
    int16_t **l_174 = &g_45;
    int32_t ***l_177 = (void*)0;
    int32_t ****l_178 = (void*)0;
    int32_t ***l_180 = &l_94;
    int32_t ****l_179 = &l_180;
    int32_t ***l_182 = &l_94;
    int32_t ****l_181 = &l_182;
    uint32_t *l_186 = &g_187;
    if (((((g_30 ^ (0xD8 >= (g_29 | (((*l_96) = (l_93 != ((*l_94) = &g_85))) != (((*l_99) = (0xBF | ((*l_97) &= g_89))) == (!((l_97 == l_97) & g_89))))))) >= g_30) <= (*l_93)) || 1))
    {
        int32_t **l_101 = &l_93;
        (*l_101) = ((*l_94) = &g_72);
    }
    else
    {
        int32_t ***l_102 = &l_94;
        (*l_102) = &p_63;
    }
    ++g_161;
    (***g_183) = (safe_lshift_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(((*l_139) = (1 ^ (-6))), (1U ^ (0x0B == (safe_add_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((safe_sub_func_uint32_t_u_u(((*l_186) = (p_61 == ((l_174 != l_174) ^ (((safe_add_func_uint16_t_u_u((((*l_181) = ((*l_179) = (l_177 = &l_94))) == g_183), 0x17BD)) <= 1) | g_29)))), (*p_63))), (*g_185))), g_29)))))), p_61));
    (*p_63) = (safe_rshift_func_uint16_t_u_u(((**g_183) == (void*)0), 7));
    return (*g_44);
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    g_185 = 0;
    g_946 = 0;
    csmith_sink_ = g_21;
    csmith_sink_ = g_29;
    csmith_sink_ = g_30;
    csmith_sink_ = g_32;
    csmith_sink_ = g_72;
    csmith_sink_ = g_82;
    csmith_sink_ = g_85;
    csmith_sink_ = g_87;
    csmith_sink_ = g_89;
    csmith_sink_ = g_98;
    csmith_sink_ = g_157;
    csmith_sink_ = g_161;
    csmith_sink_ = g_187;
    csmith_sink_ = g_210;
    csmith_sink_ = g_227;
    csmith_sink_ = g_326;
    csmith_sink_ = g_327;
    csmith_sink_ = g_328;
    csmith_sink_ = g_342;
    csmith_sink_ = g_347;
    csmith_sink_ = g_363;
    csmith_sink_ = g_373;
    csmith_sink_ = g_380;
    csmith_sink_ = g_590;
    csmith_sink_ = g_594;
    csmith_sink_ = g_602;
    csmith_sink_ = g_612;
    csmith_sink_ = g_619;
    csmith_sink_ = g_631;
    csmith_sink_ = g_634;
    csmith_sink_ = g_662;
    csmith_sink_ = g_855;
    csmith_sink_ = g_861;
    csmith_sink_ = g_1121;
    csmith_sink_ = g_1130;
    platform_main_end(0,0);
    return 0;
}
