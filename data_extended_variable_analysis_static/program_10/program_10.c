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
   int32_t f0;
   int32_t f1;
   int64_t f2;
   uint32_t f3;
   uint8_t f4;
   int32_t f5;
   uint16_t f6;
};
static int32_t g_2 = (-7L);
static uint32_t g_3 = 18446744073709551613UL;
static int32_t g_154 = 0L;
static int16_t g_192 = 0x87ACL;
static int64_t g_195 = (-6L);
static uint32_t g_196 = 0x545D7662L;
static struct S0 g_213 = {6L,2L,0x7EECA001A1B52123LL,0xC837B64FL,0UL,0x79E8ABCBL,0x1993L};
static uint32_t g_216 = 0x7D84EA22L;
static int32_t g_301 = 5L;
static uint16_t g_310 = 65535UL;
static uint16_t g_314 = 0x2989L;
static uint64_t g_317 = 0x57A56D6DE41467E5LL;
static uint8_t g_322 = 0xF3L;
static uint32_t g_375 = 0xEBEB1CB8L;
static int32_t g_379 = (-6L);
static uint16_t g_383 = 0x617FL;
static int32_t g_451 = 7L;
static int32_t g_459 = 0x9A5BD9EAL;
static int16_t g_534 = 0x75E0L;
static int8_t g_597 = 6L;
static int32_t g_599 = 0xAC51FBB9L;
static int64_t g_600 = 0x116FCF1C565F0B7DLL;
static uint32_t g_601 = 0xB5EA7516L;
static uint64_t g_669 = 0UL;
static int32_t g_867 = (-1L);
static int64_t g_873 = (-1L);
static int64_t g_874 = 0xE9ABD4CCE0B556F0LL;
static uint32_t g_876 = 4294967286UL;
static int8_t g_973 = 0x0BL;
static int64_t g_981 = (-1L);
static int8_t g_982 = 1L;
static int16_t g_988 = 0x253EL;
static uint32_t g_990 = 4294967292UL;
static uint32_t g_1031 = 8UL;
static int16_t func_1(void);
static int32_t func_6(int64_t p_7);
static int64_t func_11(uint32_t p_12, int64_t p_13, int32_t p_14);
static int32_t func_20(int32_t p_21, int16_t p_22, int32_t p_23, int32_t p_24);
static uint8_t func_27(int64_t p_28, struct S0 p_29, uint32_t p_30, uint16_t p_31, int8_t p_32);
static int64_t func_33(int64_t p_34, uint64_t p_35, uint16_t p_36, int16_t p_37, uint8_t p_38);
static uint64_t func_42(int16_t p_43, uint16_t p_44, uint8_t p_45, int64_t p_46, int64_t p_47);
static uint16_t func_48(int8_t p_49, int32_t p_50);
static int8_t func_52(int16_t p_53);
static uint64_t func_65(int32_t p_66, uint32_t p_67, uint64_t p_68, struct S0 p_69, uint64_t p_70);
static int16_t func_1(void)
{
    int16_t l_19 = 1L;
    g_3--;
    g_1031 ^= func_6((g_3 >= ((safe_rshift_func_uint16_t_u_s((~((g_2 & func_11((safe_rshift_func_uint8_t_u_s((g_2 || ((safe_add_func_int64_t_s_s(g_2, (l_19 | 0xA3L))) >= (((((0xE0L >= 0xA0L) >= l_19) && l_19) != l_19) <= l_19))), l_19)), g_2, l_19)) | g_534)), g_873)) && l_19)));
    return g_600;
}
static int32_t func_6(int64_t p_7)
{
    int32_t l_972 = 0x8B9C85B5L;
    int32_t l_974 = 1L;
    int8_t l_977 = 0x6AL;
    int32_t l_978 = 0L;
    int32_t l_979 = (-1L);
    int32_t l_980 = (-1L);
    int32_t l_983 = 0xCCDD66B4L;
    int32_t l_984 = 0L;
    int32_t l_985 = 0xE458260DL;
    uint32_t l_1003 = 0x520A80A4L;
    struct S0 l_1030 = {0x16986B01L,0x30B8C623L,0xF3F9876829B015BALL,0xEF8DCEE0L,1UL,0x7DCA739CL,0UL};
    for (g_301 = 0; (g_301 <= (-16)); g_301 = safe_sub_func_uint16_t_u_u(g_301, 3))
    {
        int64_t l_975 = 0L;
        int32_t l_976 = (-1L);
        int32_t l_986 = 0L;
        int32_t l_987 = 0x6D23D1FDL;
        int32_t l_989 = 0xEAEC3927L;
        ++g_990;
    }
    l_974 = (safe_lshift_func_uint8_t_u_u(l_972, (safe_lshift_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_u(((((0UL <= (safe_lshift_func_int8_t_s_u((l_1003 | (((safe_lshift_func_uint8_t_u_u(g_310, 5)) != g_195) == ((safe_rshift_func_int8_t_s_u(p_7, g_534)) && (safe_lshift_func_int16_t_s_s(p_7, 9))))), 0))) < (l_983 || l_984)) <= g_981) <= 4294967287UL), g_375)), 7)) && l_983), p_7))));
    l_978 |= (l_980 & ((!p_7) ^ (((safe_add_func_uint16_t_u_u(l_972, (safe_rshift_func_int16_t_s_u((((+(p_7 && (safe_rshift_func_uint16_t_u_s(((((((safe_sub_func_int16_t_s_s((safe_add_func_int8_t_s_s(l_985, (safe_sub_func_int32_t_s_s((safe_sub_func_uint16_t_u_u(l_980, g_982)), (safe_lshift_func_int16_t_s_u((safe_add_func_uint16_t_u_u((g_876 != ((((g_600 || p_7) || g_459) <= l_1003) > g_990)), 0x6D78L)), p_7)))))), 0xD864L)) == 0x01B9C3DB4DE0D551LL) < g_669) & g_973) != l_977) > 0x36D1B473L), 13)))) & 18446744073709551615UL) < p_7), p_7)))) <= g_213.f3) != 0L)));
    l_1030 = l_1030;
    return p_7;
}
static int64_t func_11(uint32_t p_12, int64_t p_13, int32_t p_14)
{
    int16_t l_39 = (-6L);
    struct S0 l_891 = {5L,0x754FCFA5L,-1L,0x4A96FD5CL,1UL,0x581B317EL,1UL};
    int32_t l_930 = 0xC251EA64L;
    int32_t l_959 = 0x152C81AAL;
    int32_t l_960 = (-9L);
    int32_t l_961 = 0x7FAB41C9L;
    int32_t l_964 = 9L;
    int32_t l_965 = (-1L);
    int32_t l_966 = 0x63546EDCL;
    uint64_t l_967 = 0xFA3450C180EE848DLL;
    l_930 ^= func_20(p_13, (safe_add_func_uint8_t_u_u(func_27(func_33((l_39 && (safe_sub_func_int64_t_s_s(((func_42(l_39, func_48(p_13, (safe_unary_minus_func_int8_t_s(func_52(g_2)))), g_451, p_13, p_12) > 0L) | 0x02CB84A5L), 0xBDD2BEBB7DCF79EFLL))), p_13, p_14, g_873, l_39), l_891, p_12, l_891.f3, l_891.f3), 2UL)), p_14, g_867);
    for (l_891.f0 = 0; (l_891.f0 == (-14)); --l_891.f0)
    {
        int32_t l_940 = (-1L);
        int32_t l_956 = (-5L);
        int32_t l_957 = 0x0604CCA5L;
        int32_t l_958 = 0x7F42DCEDL;
        int32_t l_962 = 0x17B23019L;
        int32_t l_963 = 1L;
        l_956 |= (+((safe_sub_func_int32_t_s_s((((l_891.f5 & (safe_sub_func_int32_t_s_s(((-1L) ^ ((g_310 && (safe_sub_func_uint8_t_u_u(l_940, (safe_rshift_func_int16_t_s_u((+p_13), (safe_mod_func_int64_t_s_s((p_12 & p_13), (safe_mod_func_int16_t_s_s(((safe_sub_func_int32_t_s_s((-1L), (((((safe_rshift_func_uint16_t_u_s((((safe_mod_func_int64_t_s_s((safe_add_func_uint32_t_u_u((l_39 > g_196), g_601)), g_534)) | 1L) & p_14), p_14)) == g_314) < l_940) < l_891.f2) == 0x2CL))) & g_192), 65535UL))))))))) && l_940)), p_12))) <= 0L) != 0UL), g_597)) != 65529UL));
        --l_967;
    }
    l_930 ^= 0L;
    l_891 = g_213;
    return g_601;
}
static int32_t func_20(int32_t p_21, int16_t p_22, int32_t p_23, int32_t p_24)
{
    uint8_t l_909 = 1UL;
    uint8_t l_926 = 0xC0L;
    int16_t l_927 = (-1L);
    int64_t l_928 = 1L;
    int32_t l_929 = 0x5BC93694L;
    l_929 |= ((safe_add_func_uint8_t_u_u(g_213.f4, l_909)) >= (safe_rshift_func_int16_t_s_u(0xEEA3L, (((safe_sub_func_int16_t_s_s((-2L), (safe_sub_func_int64_t_s_s(((0x09L | ((safe_add_func_int32_t_s_s(g_876, ((((safe_add_func_int64_t_s_s((l_909 < (safe_add_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_u((safe_add_func_int16_t_s_s((l_926 || l_909), 6UL)), p_22)) == g_2), l_909))), g_600)) > g_375) == p_24) > p_21))) & l_927)) & 0x21L), l_927)))) | g_314) & l_928))));
    return p_22;
}
static uint8_t func_27(int64_t p_28, struct S0 p_29, uint32_t p_30, uint16_t p_31, int8_t p_32)
{
    uint16_t l_892 = 0xFEB5L;
    uint32_t l_904 = 18446744073709551615UL;
    int32_t l_905 = 0x1953091AL;
    int32_t l_906 = 0x5F8A5F3DL;
    l_906 |= ((l_892 ^ (safe_sub_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s((l_892 < (((g_383 > ((l_892 != (4294967295UL > (!(p_29.f6 >= ((1UL || ((safe_rshift_func_int8_t_s_u(p_32, l_904)) >= g_379)) > l_905))))) && p_29.f1)) | g_601) & l_905)), 11)), g_597)), p_29.f0))) || 0xA971L);
    return g_322;
}
static int64_t func_33(int64_t p_34, uint64_t p_35, uint16_t p_36, int16_t p_37, uint8_t p_38)
{
    struct S0 l_890 = {5L,0xD4A918BDL,0x23C2ED7B53487823LL,1UL,0x7FL,0L,0xCF5CL};
    l_890 = l_890;
    l_890.f5 = g_2;
    return g_597;
}
static uint64_t func_42(int16_t p_43, uint16_t p_44, uint8_t p_45, int64_t p_46, int64_t p_47)
{
    int8_t l_480 = 0L;
    uint8_t l_482 = 0xC5L;
    int64_t l_483 = 1L;
    int32_t l_486 = 0xA3E59FF1L;
    int16_t l_514 = 0L;
    uint32_t l_525 = 4294967295UL;
    int32_t l_535 = 0xDC5F1FE5L;
    int32_t l_537 = 0x404426EDL;
    int32_t l_550 = 0xBD3AAB8DL;
    int64_t l_592 = 0x481AC097D1D2AA15LL;
    struct S0 l_629 = {0x21C5DCD7L,0xFA84A016L,1L,0x44D6DA28L,0xB8L,-6L,0xA53EL};
    uint16_t l_723 = 0x7584L;
    uint32_t l_730 = 2UL;
    uint8_t l_762 = 0UL;
    uint16_t l_835 = 0UL;
    int8_t l_856 = 0L;
    int32_t l_860 = 0x16FB59AFL;
    int32_t l_872 = 0x65A7BB6BL;
    int32_t l_875 = 0xC5DB8C90L;
    struct S0 l_888 = {0xCBCBA06CL,7L,0L,0xFDC7DAAEL,0xD3L,0xB6A63FF3L,0xED7AL};
    if (((safe_sub_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((p_45 | (18446744073709551607UL & (safe_lshift_func_int8_t_s_s((6UL < p_44), (g_451 <= ((((safe_lshift_func_uint8_t_u_u(((((g_196 & (safe_rshift_func_uint16_t_u_u(((-4L) < (safe_lshift_func_uint16_t_u_u(l_480, 0))), (+(0x5ED74E0BBF694970LL != g_3))))) ^ p_45) && 1L) == p_44), l_480)) | l_482) ^ l_483) != g_154)))))), g_213.f0)), 1L)) > 1UL))
    {
        int8_t l_487 = 0L;
        struct S0 l_510 = {0x9EC7BC6DL,8L,7L,3UL,255UL,1L,0UL};
        int32_t l_546 = (-3L);
        int32_t l_548 = 0x45A0EEAEL;
        int32_t l_549 = 9L;
        for (g_213.f5 = 0; (g_213.f5 > (-4)); g_213.f5 = safe_sub_func_uint32_t_u_u(g_213.f5, 3))
        {
            l_486 &= 7L;
            if (g_213.f4)
                continue;
        }
        if ((l_487 && 5UL))
        {
            return p_47;
        }
        else
        {
            uint16_t l_492 = 65535UL;
            struct S0 l_511 = {5L,5L,0xDB1DC92F31237E01LL,0xA99D67B2L,9UL,-1L,0x90F0L};
            int32_t l_527 = 6L;
            int32_t l_529 = 0L;
            int32_t l_531 = 1L;
            int32_t l_533 = 0xD632458DL;
            int32_t l_536 = (-10L);
            int32_t l_538 = 0x925A2E80L;
            int32_t l_547 = (-1L);
            uint32_t l_551 = 5UL;
            if ((((l_487 >= ((safe_add_func_uint32_t_u_u(0x4F16CA5DL, (((l_483 < l_487) && ((g_383 & 0x5F8BL) | 2L)) && ((safe_sub_func_uint8_t_u_u(p_46, (p_43 | l_487))) != (-1L))))) || g_3)) >= g_314) == l_492))
            {
                uint8_t l_526 = 0xA1L;
                int32_t l_528 = 5L;
                int32_t l_530 = 0x47515C29L;
                int32_t l_532 = 9L;
                uint16_t l_539 = 0x32D3L;
                uint16_t l_542 = 0xA3A0L;
                int32_t l_545 = (-2L);
                for (g_310 = 0; (g_310 != 36); g_310 = safe_add_func_uint64_t_u_u(g_310, 2))
                {
                    int16_t l_509 = (-5L);
                    struct S0 l_513 = {0xFCE22FE3L,-5L,0xD3760678A595CDABLL,1UL,1UL,1L,0x6B1FL};
                    if ((safe_sub_func_uint64_t_u_u(((safe_mod_func_uint64_t_u_u(((+g_322) > p_44), (((g_213.f0 && (safe_lshift_func_int8_t_s_u(((safe_mod_func_uint8_t_u_u(g_213.f1, p_43)) ^ l_487), (safe_rshift_func_int8_t_s_s((safe_add_func_int32_t_s_s(((g_317 ^ (~0x658193ECL)) != (l_509 && (-10L))), p_43)), l_487))))) != p_46) ^ p_44))) || p_43), 0x3E8A2A857ABA26CFLL)))
                    {
                        l_510 = l_510;
                        l_511 = g_213;
                    }
                    else
                    {
                        struct S0 l_512 = {8L,1L,0xE9E73530DF48D24FLL,0x52C18B5EL,0UL,-2L,0xE664L};
                        l_513 = l_512;
                        l_514 &= 0x64ACD50DL;
                        l_526 |= (((safe_add_func_int16_t_s_s((((safe_add_func_uint16_t_u_u(l_480, ((((safe_sub_func_uint8_t_u_u(p_43, (-2L))) && p_46) && ((safe_sub_func_uint16_t_u_u((((0UL != 0x0DL) || (((safe_rshift_func_int8_t_s_u(0xB3L, ((p_46 > ((2UL != g_213.f0) <= l_525)) == p_45))) != g_322) && (-10L))) == (-1L)), 5L)) == 0UL)) & p_44))) == l_512.f5) <= 0x7EL), g_213.f0)) && g_192) && 8L);
                    }
                    --l_539;
                    ++l_542;
                }
                l_551++;
            }
            else
            {
                int32_t l_589 = 1L;
                int32_t l_593 = 0xF942CE0CL;
                int32_t l_594 = (-9L);
                int32_t l_596 = 1L;
                struct S0 l_625 = {0xB2E0E07BL,7L,0L,0x80D704C2L,0x88L,-8L,65535UL};
                for (l_514 = 23; (l_514 == (-18)); l_514 = safe_sub_func_int32_t_s_s(l_514, 8))
                {
                    int64_t l_558 = 0x17655FDF3245BCAALL;
                    uint64_t l_573 = 0x807B3F76F243D8EALL;
                    int32_t l_591 = 8L;
                    int32_t l_595 = 0x642A4612L;
                    struct S0 l_628 = {0x1E0D7F7AL,0x0C04CFA2L,2L,4294967292UL,0UL,0xF2E56B59L,1UL};
                    if ((safe_lshift_func_uint8_t_u_u((g_379 & p_47), 4)))
                    {
                        return l_558;
                    }
                    else
                    {
                        int64_t l_588 = 1L;
                        int32_t l_590 = (-2L);
                        int32_t l_598 = 0x1C427DAAL;
                        g_459 = (((((0x3EE8L & ((safe_lshift_func_uint8_t_u_s((l_525 < p_47), (((p_43 & (safe_mod_func_int64_t_s_s(0x02FBBF1C53AE2FDALL, (safe_add_func_int64_t_s_s(1L, (((5L & (safe_sub_func_uint8_t_u_u((0x7FL == (((safe_add_func_int64_t_s_s(((safe_add_func_int32_t_s_s((p_44 >= (-8L)), p_47)) > l_573), 0L)) > 65529UL) == g_534)), 0x63L))) & g_451) != p_43)))))) && p_47) || p_44))) < 0x59E75CB0L)) & p_45) >= g_379) && p_45) <= 0x8E6E6E3DF97D46C5LL);
                        g_213.f1 |= (safe_add_func_int64_t_s_s(0x2BE98BD8E4BD2433LL, (safe_rshift_func_int8_t_s_s((((l_538 >= 1UL) <= (safe_sub_func_uint16_t_u_u(((0xC98CL & ((l_538 > (!((0x7E579D2DL > 0xA05AC422L) & 0xF35EB71DL))) ^ ((safe_mod_func_int64_t_s_s(((((((+(safe_mod_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u(l_482, l_511.f2)), 65535UL))) & 0x4DEEL) == (-1L)) || 4294967287UL) != g_154) | g_317), g_314)) | 0UL))) | l_588), g_301))) < g_216), l_589))));
                        g_601--;
                    }
                    l_593 = ((safe_add_func_int64_t_s_s(((((0UL >= p_47) < ((safe_rshift_func_uint8_t_u_s(((safe_add_func_int32_t_s_s((safe_rshift_func_int16_t_s_s(0x28B0L, p_45)), (255UL ^ ((+((safe_mod_func_int64_t_s_s(l_549, ((safe_lshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((((safe_lshift_func_uint16_t_u_u((((safe_mod_func_int64_t_s_s((((safe_add_func_uint8_t_u_u(((0xBA003838L | ((-1L) != 0x20L)) != p_47), g_314)) || g_314) & p_47), 0x379EE0FBF538B6D5LL)) > 0xBE2860F0L) == g_213.f6), p_46)) || 0x42L) <= 1UL), p_44)), g_2)) & 0xB9D772FBL))) != g_154)) != l_510.f5)))) > l_510.f6), 4)) && 3UL)) != p_47) != l_593), 8L)) >= l_510.f2);
                    l_511 = l_625;
                    for (l_548 = 0; (l_548 > 13); l_548++)
                    {
                        l_629 = l_628;
                        return p_46;
                    }
                }
            }
        }
        for (g_600 = 0; (g_600 > (-14)); g_600 = safe_sub_func_int16_t_s_s(g_600, 2))
        {
            int32_t l_650 = (-1L);
            l_535 = (safe_sub_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(((safe_add_func_uint32_t_u_u((g_213.f5 ^ ((((((~l_629.f2) ^ g_195) > (((safe_mod_func_int16_t_s_s(((safe_lshift_func_int8_t_s_s(0x88L, (safe_mod_func_int32_t_s_s(((safe_add_func_int64_t_s_s(g_301, ((0x2DBD1D86D975A978LL < (0x5E9DL && (safe_sub_func_uint16_t_u_u((+g_601), (g_600 >= p_47))))) <= g_383))) & p_45), p_45)))) < l_510.f6), 0xE498L)) >= l_629.f6) && g_192)) < l_548) == p_47) <= p_43)), l_650)) < p_44), p_47)), l_510.f1));
        }
    }
    else
    {
        int32_t l_655 = 0x347022D9L;
        int64_t l_703 = 6L;
        uint32_t l_717 = 0x5F819645L;
        uint8_t l_718 = 249UL;
        int8_t l_858 = 0x0FL;
        int32_t l_859 = (-1L);
        int32_t l_861 = 0x2409DCF4L;
        int32_t l_862 = 0x048D2A28L;
        int32_t l_863 = 2L;
        int32_t l_864 = (-1L);
        int32_t l_865 = 0x47669F8BL;
        int32_t l_866 = 9L;
        int32_t l_868 = (-7L);
        int32_t l_869 = 2L;
        int32_t l_870 = (-3L);
        int32_t l_871 = (-1L);
        l_629.f1 = (((safe_lshift_func_int16_t_s_s(((g_599 >= (1L >= (p_43 | (safe_add_func_int64_t_s_s(((-7L) ^ l_655), ((safe_sub_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_s(g_213.f2, 7)) < (safe_mod_func_int8_t_s_s((!(((safe_add_func_uint8_t_u_u(l_537, l_655)) & (safe_rshift_func_uint16_t_u_s(((safe_sub_func_int64_t_s_s(((p_43 >= l_655) != p_43), 0L)) >= g_216), 5))) ^ l_629.f3)), g_669))), 1UL)) >= 0xB5CAA13ECC9E6B12LL)))))) < 0x01674D990A123978LL), p_43)) <= 0x84A4L) >= p_46);
        for (g_213.f6 = (-13); (g_213.f6 < 7); g_213.f6 = safe_add_func_uint16_t_u_u(g_213.f6, 7))
        {
            uint32_t l_697 = 9UL;
            int32_t l_732 = 4L;
            struct S0 l_857 = {7L,-1L,0L,0x581E6084L,0xDEL,6L,0x3FDDL};
            if ((safe_add_func_int64_t_s_s((safe_add_func_uint64_t_u_u(((0x6C22D216L < (l_655 | ((0xF942L <= (((l_655 != (p_46 | (((((safe_lshift_func_uint16_t_u_s((((0x82L == g_317) >= (~0xB766022079697BE9LL)) & (safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((safe_add_func_int32_t_s_s((!((~(((((((safe_add_func_uint64_t_u_u(((252UL < l_629.f4) | 0UL), l_697)) & 254UL) < l_550) | (-10L)) != l_655) <= 0x314E3489EDA9596CLL) | l_629.f6)) != g_322)), g_322)), l_655)), l_655)), g_213.f5)), 0)), p_44)), 2))), p_45)) | g_196) && 0x567B505FL) ^ 0xD2L) <= g_669))) && 0x75L) ^ 0x14L)) >= 0x1046CC358ADA008ELL))) > l_629.f5), p_44)), 0x616C221DAD853ECBLL)))
            {
                int8_t l_700 = 0L;
                for (g_213.f5 = (-7); (g_213.f5 == 28); ++g_213.f5)
                {
                    return l_700;
                }
                g_451 &= ((((g_601 > (g_534 | (safe_add_func_int64_t_s_s(((g_213.f2 <= ((g_314 < (0x43F7C68C20FEF92FLL ^ l_703)) <= ((safe_lshift_func_uint8_t_u_u((safe_unary_minus_func_uint16_t_u(0UL)), ((safe_sub_func_int16_t_s_s((safe_add_func_int8_t_s_s((((safe_add_func_uint16_t_u_u(g_213.f0, ((safe_rshift_func_int8_t_s_s((safe_mod_func_int32_t_s_s(l_717, l_655)), l_697)) >= l_718))) != g_213.f0) == p_44), l_717)), g_379)) || g_213.f4))) > g_459))) >= 65532UL), l_697)))) != 0xFEA1CE98L) & 0x6B17746CD1033610LL) != p_45);
            }
            else
            {
                int32_t l_739 = (-1L);
                int32_t l_790 = 6L;
                l_732 = (((safe_sub_func_int64_t_s_s((safe_mod_func_int64_t_s_s((l_723 && ((safe_lshift_func_uint8_t_u_u(l_537, (safe_sub_func_uint32_t_u_u((((safe_mod_func_int32_t_s_s(l_730, (((1L <= ((p_47 < p_44) & ((-8L) != p_47))) & (safe_unary_minus_func_int64_t_s((((g_213.f1 <= g_601) == g_3) & p_45)))) ^ l_592))) || 4294967295UL) != g_597), 1UL)))) || p_46)), g_213.f4)), p_45)) ^ p_46) >= 4294967294UL);
                for (g_600 = 6; (g_600 > 15); g_600 = safe_add_func_uint16_t_u_u(g_600, 3))
                {
                    int32_t l_743 = 0L;
                    int32_t l_787 = 1L;
                    uint16_t l_855 = 0xABD8L;
                    if ((safe_rshift_func_int8_t_s_u((((safe_sub_func_uint8_t_u_u((l_703 || l_739), ((((safe_add_func_uint8_t_u_u((safe_unary_minus_func_int32_t_s(((((-1L) ^ (l_697 >= (l_718 | ((g_213.f2 && (g_213.f3 >= ((((((l_743 | p_45) == l_730) && l_739) && 0xFCD8L) ^ l_743) == p_47))) && l_718)))) != g_3) ^ l_743))), 1L)) || l_743) < p_47) < g_379))) > p_45) == (-1L)), 3)))
                    {
                        g_451 = ((((0xA8D5DF423FFE4015LL && (g_534 > (p_47 || ((safe_lshift_func_int8_t_s_s(p_44, 2)) < g_375)))) & (safe_sub_func_int8_t_s_s(((((safe_sub_func_uint16_t_u_u(((safe_mod_func_uint32_t_u_u((((safe_lshift_func_uint16_t_u_s((((-1L) != (safe_rshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(g_213.f0, 10)), 0))) ^ p_46), 10)) != (safe_sub_func_int16_t_s_s((((safe_add_func_int16_t_s_s(g_213.f6, g_459)) & l_697) ^ l_762), p_44))) <= 1UL), p_46)) > 3UL), l_717)) <= l_743) | 0x749C67A7L) <= g_451), l_486))) != 0xA4217B11L) & p_46);
                    }
                    else
                    {
                        uint16_t l_786 = 0x4347L;
                        l_537 = p_43;
                        l_787 |= (safe_add_func_uint16_t_u_u(p_47, (((safe_lshift_func_uint8_t_u_u((safe_add_func_int16_t_s_s((safe_sub_func_int32_t_s_s((0x81FD019FL & ((0x70D5DF9CL || (((((safe_rshift_func_uint8_t_u_s(((safe_sub_func_int32_t_s_s(0xEBD60AD7L, (safe_lshift_func_uint16_t_u_s(1UL, (0x28D64A8CL <= (safe_rshift_func_uint16_t_u_s((((safe_lshift_func_int8_t_s_u((safe_add_func_int8_t_s_s((~(safe_mod_func_uint16_t_u_u(g_213.f4, 0xACF5L))), p_46)), g_213.f6)) == l_786) != g_379), g_213.f3))))))) == 6UL), 2)) > 1L) <= 253UL) <= l_655) && p_46)) & l_743)), 4294967295UL)), p_45)), 0)) & l_717) <= l_697)));
                    }
                    for (g_599 = 0; (g_599 >= 20); g_599++)
                    {
                        if (p_45)
                            break;
                        l_790 = (l_743 > p_46);
                        l_655 ^= (safe_add_func_uint16_t_u_u((safe_unary_minus_func_uint32_t_u((safe_sub_func_uint32_t_u_u((p_44 || l_486), (safe_rshift_func_int16_t_s_s(l_739, (p_47 < ((safe_sub_func_int64_t_s_s(g_375, (safe_rshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_u((((safe_sub_func_uint64_t_u_u(g_383, g_600)) && p_45) != 0x14L), g_213.f5)), l_762)))) && p_44)))))))), l_717));
                        if (g_383)
                            break;
                    }
                    for (g_196 = 0; (g_196 >= 51); g_196 = safe_add_func_int32_t_s_s(g_196, 3))
                    {
                        uint32_t l_822 = 4294967291UL;
                        uint16_t l_836 = 65531UL;
                        l_743 = (safe_lshift_func_int16_t_s_s(((0x63L >= (safe_rshift_func_int8_t_s_u((g_213.f5 && g_601), (((safe_add_func_uint8_t_u_u(p_43, (safe_sub_func_uint8_t_u_u((((safe_rshift_func_uint16_t_u_u((4UL == p_43), (safe_rshift_func_uint8_t_u_u(p_46, 1)))) && ((l_718 >= ((((((6UL ^ p_44) == g_213.f2) > 0x9951991CL) > g_534) <= (-10L)) == 0UL)) & g_599)) < 3UL), p_43)))) || p_43) == l_787)))) || l_787), l_822));
                        l_655 = ((safe_unary_minus_func_uint32_t_u(((-8L) ^ (((+p_47) ^ ((safe_mod_func_uint64_t_u_u(((((safe_add_func_int32_t_s_s((1L <= ((((l_703 && g_196) | ((l_762 && (safe_mod_func_int16_t_s_s((safe_mod_func_int8_t_s_s(((safe_rshift_func_int16_t_s_s(g_213.f4, (0UL != ((g_451 != l_732) ^ g_2)))) && l_835), g_375)), 0x5E01L))) < l_723)) && p_44) && l_822)), (-1L))) | p_47) & p_45) < 3L), g_213.f3)) | l_790)) || 0x81C3C37A7CA1713CLL)))) || g_216);
                        l_790 ^= ((l_836 ^ ((safe_sub_func_int64_t_s_s((!(safe_add_func_int32_t_s_s((p_46 & (8L == l_703)), (safe_add_func_uint64_t_u_u((((p_43 & 0x6AL) < (safe_rshift_func_uint16_t_u_s((safe_mod_func_int32_t_s_s((((p_43 & (((safe_add_func_int64_t_s_s(p_44, (0UL || 4294967295UL))) || g_192) <= l_703)) == l_762) && p_44), g_314)), g_600))) == p_43), l_718))))), 0xF24524DB425F3536LL)) == l_739)) < 0xA0L);
                        l_855 ^= (safe_sub_func_uint8_t_u_u((~0x4A4EL), (g_196 || 0x34E9C08F3AE75A78LL)));
                    }
                    if (l_856)
                        break;
                }
                l_486 = 0x442D31DCL;
            }
            l_655 &= g_213.f6;
            l_629 = l_857;
        }
        ++g_876;
        if (((safe_add_func_int16_t_s_s(((g_213.f6 >= g_375) | 0x0B8CL), (g_601 || 0x2D8EC700L))) >= l_655))
        {
            g_213.f5 = (2L != (l_870 <= (p_43 <= (p_43 | ((safe_rshift_func_int16_t_s_u((0L & l_486), 7)) <= (~(-5L)))))));
        }
        else
        {
            l_629 = g_213;
        }
    }
    for (g_383 = 0; (g_383 >= 54); g_383 = safe_add_func_uint32_t_u_u(g_383, 6))
    {
        int32_t l_889 = 0xF96888ABL;
        g_213 = l_888;
        return l_889;
    }
    return l_629.f3;
}
static uint16_t func_48(int8_t p_49, int32_t p_50)
{
    uint32_t l_467 = 0UL;
    return l_467;
}
static int8_t func_52(int16_t p_53)
{
    uint32_t l_71 = 7UL;
    struct S0 l_74 = {0x6D23037DL,-1L,0x3236C21779538E5ELL,1UL,0UL,0x8188558BL,0x47C1L};
    int32_t l_446 = 0xA11A75C4L;
    int32_t l_461 = 9L;
    if ((((-6L) || 0xC653L) & ((safe_add_func_int16_t_s_s((~0L), (safe_add_func_int32_t_s_s((g_2 ^ (((safe_lshift_func_int8_t_s_s(((-1L) == (safe_add_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((func_65((l_71 && ((0xD231L | (((safe_add_func_uint32_t_u_u((p_53 && (g_2 ^ l_71)), l_71)) < p_53) < l_71)) != g_2)), g_2, g_2, l_74, p_53) <= g_3), p_53)), p_53))), 7)) >= g_195) > g_195)), p_53)))) < p_53)))
    {
        int16_t l_413 = 0x7E51L;
        l_413 = g_192;
        return g_213.f6;
    }
    else
    {
        int8_t l_437 = 4L;
        struct S0 l_440 = {-1L,0L,0x8F5251EB5ED7D3D8LL,0x780C5D14L,2UL,0L,0UL};
        int32_t l_444 = 0xC5358BBAL;
        int32_t l_445 = 0x8B60CCDDL;
        int32_t l_447 = (-7L);
        int32_t l_448 = 0x629A8D41L;
        int32_t l_453 = (-6L);
        int32_t l_454 = 0x74C4999EL;
        int32_t l_457 = 0x80EBA00EL;
        int32_t l_462 = 0x111F8ADEL;
        if ((safe_lshift_func_uint16_t_u_u(g_314, 9)))
        {
            return g_301;
        }
        else
        {
            int8_t l_418 = 0x6FL;
            int32_t l_422 = (-1L);
            int32_t l_423 = (-1L);
            uint32_t l_436 = 0x77412C3FL;
            struct S0 l_443 = {0xE78DEA3DL,6L,-7L,0xE9B47BCCL,9UL,0L,65535UL};
            int32_t l_449 = 0x293BC625L;
            int32_t l_450 = 0x58DFCECCL;
            int32_t l_452 = 0L;
            int32_t l_455 = 0x53022FDEL;
            int32_t l_456 = 0xE6A233A8L;
            int32_t l_458 = 7L;
            int32_t l_463 = 5L;
            if (((((0xCCDEL < (g_192 == p_53)) >= p_53) == ((((safe_lshift_func_int8_t_s_u((g_314 || (((l_418 <= 18446744073709551610UL) | (0x402CEC61A2151F2FLL != g_322)) > p_53)), p_53)) > p_53) >= 2UL) & p_53)) < l_74.f4))
            {
                struct S0 l_419 = {-7L,0xC1874894L,0x46530D64130411F7LL,4UL,0UL,0x9E10025EL,0x7D8AL};
                uint16_t l_424 = 0x7F6EL;
                g_213 = l_419;
                for (g_301 = 28; (g_301 <= 2); --g_301)
                {
                    uint32_t l_438 = 0UL;
                    ++l_424;
                    l_438 &= ((g_213.f1 & (g_154 >= 0x3462L)) && ((safe_lshift_func_uint16_t_u_u((((safe_add_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_u(l_418, 5)) <= (p_53 || 8UL)), (((((4294967295UL | (+0x1F087F3AL)) ^ (safe_sub_func_int32_t_s_s(g_213.f4, l_436))) || p_53) || g_213.f5) >= 0x89L))) >= g_213.f2) == l_437), 15)) != 0UL));
                    l_419.f1 = p_53;
                }
            }
            else
            {
                struct S0 l_439 = {1L,0xD8A2F051L,0x51B6310204A1551BLL,5UL,0x21L,0xB53ACB93L,65535UL};
                int32_t l_460 = 0xC0A1D04AL;
                uint16_t l_464 = 65529UL;
                l_440 = l_439;
                if (l_440.f4)
                {
                    return p_53;
                }
                else
                {
                    l_423 = (p_53 > (g_383 || g_213.f1));
                }
                for (l_440.f2 = 29; (l_440.f2 != (-8)); l_440.f2--)
                {
                    l_443 = l_440;
                }
                l_464--;
            }
            return g_216;
        }
    }
}
static uint64_t func_65(int32_t p_66, uint32_t p_67, uint64_t p_68, struct S0 p_69, uint64_t p_70)
{
    int32_t l_79 = 1L;
    uint32_t l_90 = 0xB4E13384L;
    int32_t l_91 = 0L;
    int8_t l_138 = (-1L);
    uint64_t l_228 = 18446744073709551615UL;
    struct S0 l_323 = {0x6FA7AC4EL,0xC6B9971AL,0x17905CFCB859700ALL,0UL,0UL,-1L,0x7761L};
    int8_t l_351 = (-1L);
    uint32_t l_376 = 0x718072CEL;
    l_91 |= ((safe_rshift_func_int8_t_s_u((safe_add_func_uint16_t_u_u(l_79, (safe_lshift_func_uint16_t_u_s(65535UL, 4)))), (l_79 ^ (((((safe_lshift_func_uint16_t_u_s((((((!((((l_79 < ((safe_mod_func_int8_t_s_s((g_2 && ((safe_unary_minus_func_uint8_t_u(((safe_sub_func_int16_t_s_s(p_68, p_68)) ^ l_79))) == ((l_90 && g_2) < l_90))), p_69.f5)) || 0x08L)) != 0UL) > p_70) && l_79)) & g_3) <= 0x3F7CC827221BDB03LL) > p_69.f6) | g_3), l_79)) != g_2) | p_69.f1) | g_3) | p_69.f1)))) || 1UL);
    p_69.f5 = p_69.f4;
    for (p_69.f2 = 0; (p_69.f2 == (-24)); p_69.f2 = safe_sub_func_uint32_t_u_u(p_69.f2, 7))
    {
        struct S0 l_94 = {0x3D1F0774L,0L,-6L,0UL,255UL,1L,65527UL};
        int8_t l_137 = 0x09L;
        int16_t l_191 = 0L;
        int32_t l_208 = 1L;
        uint8_t l_233 = 0xD4L;
        int32_t l_377 = 0x18F1467FL;
        int32_t l_378 = 1L;
        int32_t l_380 = (-4L);
        int32_t l_381 = 0xD9ACA435L;
        int32_t l_382 = 0x9DC23C6EL;
        l_94 = p_69;
        if ((((safe_sub_func_int64_t_s_s(((0xE2L & (safe_lshift_func_int16_t_s_u((-2L), 8))) & ((safe_add_func_uint16_t_u_u((((safe_sub_func_int16_t_s_s((safe_sub_func_int16_t_s_s((safe_sub_func_int64_t_s_s((safe_sub_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((1UL <= (safe_rshift_func_uint16_t_u_s((safe_sub_func_int32_t_s_s(((safe_rshift_func_uint16_t_u_s(g_3, 6)) | ((safe_rshift_func_int8_t_s_s(g_2, (safe_lshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u((g_3 == (safe_mod_func_uint16_t_u_u(l_90, (safe_mod_func_int32_t_s_s(p_68, (safe_add_func_int64_t_s_s(((safe_sub_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_s((safe_sub_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s((l_137 ^ g_2), g_2)), g_3)), l_94.f1)) | g_2), g_2)) & p_69.f5), p_69.f3))))))), p_70)), l_90)))) != 0x04FC3DD168C87B4ELL)), 7L)), 7))), p_69.f0)), l_94.f3)), 0x6E0766B1C03A75F9LL)), 4UL)), p_69.f2)) | p_68) ^ 0x2E22L), p_67)) == g_2)), 8L)) <= 1L) || l_138))
        {
            g_154 = (((safe_rshift_func_uint16_t_u_u(((!(0x9ADA34CBL & ((safe_mod_func_int16_t_s_s(g_3, 65531UL)) > (safe_sub_func_int64_t_s_s((safe_mod_func_uint16_t_u_u(65535UL, l_79)), (safe_rshift_func_int16_t_s_u(((safe_sub_func_int16_t_s_s(0x1637L, g_3)) > ((safe_lshift_func_int16_t_s_u(l_94.f6, (1UL < 0x4BD6L))) != 0x0FE39EBDDF9043A1LL)), g_3))))))) & g_3), 4)) & (-1L)) ^ 0x5DBDBD1F82652714LL);
        }
        else
        {
            uint64_t l_155 = 18446744073709551609UL;
            int32_t l_215 = 0x15696D62L;
            int64_t l_256 = 0x5CF6CD2DBEE021B6LL;
            int32_t l_302 = 6L;
            int32_t l_303 = 0x6D6B7A56L;
            int32_t l_305 = (-1L);
            int32_t l_309 = 0L;
            if ((l_155 <= ((g_3 && (safe_rshift_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_s((~(1L != (safe_lshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((((p_70 <= ((((g_2 != ((safe_add_func_int8_t_s_s(g_3, ((safe_add_func_int16_t_s_s(p_69.f0, (safe_rshift_func_int8_t_s_u((g_3 | (safe_rshift_func_int16_t_s_s((248UL == 0x3FL), p_69.f3))), l_90)))) < g_154))) | 4294967295UL)) || g_3) <= l_94.f3) | 0xEE32L)) ^ l_94.f3) < g_154), 7)), 8)))), 7)) <= 4294967291UL), 9))) && g_3)))
            {
                int64_t l_180 = 5L;
                int32_t l_194 = 0x5350F159L;
                struct S0 l_214 = {0xAFF555B3L,1L,0x2AD0072B36A80461LL,1UL,0xE8L,1L,65535UL};
                uint32_t l_239 = 0x97D913FAL;
                for (l_94.f6 = (-21); (l_94.f6 != 20); l_94.f6++)
                {
                    uint32_t l_177 = 0xDA28E2A2L;
                    if ((((safe_mod_func_int8_t_s_s((p_68 && l_91), p_70)) == l_177) == 1L))
                    {
                        int64_t l_193 = (-8L);
                        g_154 = (safe_add_func_uint32_t_u_u(4294967295UL, p_69.f3));
                        g_192 &= (((0L < (g_3 > (l_180 <= g_154))) == ((g_2 ^ (safe_rshift_func_uint8_t_u_s((0x2D93L & l_90), 2))) < (safe_lshift_func_uint8_t_u_u((((safe_lshift_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_s((((((((safe_rshift_func_int16_t_s_u((g_3 ^ 0x09L), 13)) <= l_191) > l_155) & 0xFAE32FE6L) & p_69.f2) > p_69.f3) == g_154), 8)) != g_3), 0)) && 1L) & 0x57905800L), 2)))) | 0x96350F6EL);
                        g_196--;
                        p_69.f5 = ((0x46L & ((~((((safe_add_func_int16_t_s_s((safe_add_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(p_66, ((safe_lshift_func_uint16_t_u_s((2L >= p_69.f5), 2)) | (((l_208 >= g_154) && (safe_lshift_func_uint16_t_u_u(g_154, (g_2 >= ((safe_rshift_func_uint8_t_u_u(0x89L, 7)) || 0xE2A7L))))) < 0xA7L)))), g_2)), p_69.f0)) || l_177) ^ p_69.f6) & l_79)) || g_196)) && l_180);
                    }
                    else
                    {
                        l_214 = g_213;
                        g_216++;
                    }
                    p_69.f5 &= ((safe_lshift_func_uint8_t_u_u(((0x31387556L || (((((~(-1L)) | (!(((safe_rshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((+(p_69.f4 ^ (l_177 > (l_177 && l_228)))), (safe_lshift_func_int8_t_s_s(l_214.f4, 5)))), 9)) ^ (((~(1UL || (+0xCAL))) <= g_196) || g_213.f1)) || l_155))) == g_213.f4) && p_66) || 0x80988709L)) ^ 0xADL), 4)) && g_213.f4);
                    l_233 ^= g_3;
                }
                if (g_154)
                    break;
                l_208 = (safe_add_func_int16_t_s_s(0xB262L, (+(((safe_add_func_uint16_t_u_u((l_239 || p_70), ((p_69.f5 ^ g_216) != (safe_add_func_int16_t_s_s((~(safe_sub_func_int16_t_s_s((g_216 <= (safe_sub_func_int8_t_s_s((l_155 && ((((safe_rshift_func_uint16_t_u_u(g_213.f0, ((((safe_rshift_func_uint16_t_u_u(((safe_mod_func_int64_t_s_s((0L ^ p_69.f3), g_213.f3)) != p_68), g_3)) >= 0x7625L) & g_216) < g_3))) == l_155) & p_69.f4) | g_213.f5)), g_213.f2))), 4UL))), 0UL))))) | g_2) == 0xC3L))));
            }
            else
            {
                int16_t l_261 = (-1L);
                int32_t l_307 = 0x3EA2FF55L;
                int32_t l_313 = 0x501939D0L;
                for (p_69.f4 = (-19); (p_69.f4 <= 5); p_69.f4++)
                {
                    return p_69.f1;
                }
                if (((((safe_unary_minus_func_uint16_t_u(l_256)) >= g_195) < ((safe_rshift_func_int8_t_s_s(((safe_rshift_func_int16_t_s_s(l_261, 14)) < ((18446744073709551609UL ^ (safe_lshift_func_uint8_t_u_u(l_94.f4, 0))) <= (((safe_sub_func_uint16_t_u_u(((safe_unary_minus_func_int8_t_s((safe_mod_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((((safe_rshift_func_int8_t_s_s(((((safe_mod_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((safe_sub_func_int64_t_s_s((safe_unary_minus_func_uint32_t_u(((safe_lshift_func_int16_t_s_u((((((safe_add_func_int8_t_s_s(p_69.f3, (safe_unary_minus_func_uint8_t_u((safe_unary_minus_func_uint64_t_u(((safe_lshift_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_u((+((safe_sub_func_int32_t_s_s(1L, (((18446744073709551615UL & (safe_mod_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u(0x10F041E959A60E03LL, p_70)), p_69.f6))) < p_69.f2) | p_69.f2))) >= (-5L))), 0)) <= 0xD33DL), g_213.f1)), g_213.f0)) < g_192))))))) < l_215) || p_69.f0) && l_215) == 255UL), 9)) && g_3))), 18446744073709551613UL)), l_261)), p_69.f2)) && g_213.f3) || p_69.f6) != l_261), 4)) != l_94.f5) == p_69.f2), 1UL)), g_195)) || l_256), 0x89L)))) || 0x933B6CD9L), 0UL)) <= p_70) > (-7L)))), l_228)) || g_192)) < g_301))
                {
                    int32_t l_304 = 0x261E8159L;
                    int32_t l_306 = 8L;
                    int32_t l_308 = 0x1E85B112L;
                    ++g_310;
                    g_314--;
                    ++g_317;
                }
                else
                {
                    g_322 = (safe_rshift_func_int16_t_s_s(l_302, 2));
                }
            }
            l_323 = g_213;
            if ((safe_rshift_func_int16_t_s_s((((safe_mod_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(1L, (safe_add_func_int64_t_s_s((6L & (-4L)), (g_317 < (((!(safe_rshift_func_uint8_t_u_s(((((safe_add_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u(((((safe_mod_func_uint8_t_u_u(((-1L) <= g_213.f0), (safe_add_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((((((safe_sub_func_int64_t_s_s((l_351 == (safe_rshift_func_int8_t_s_u((p_69.f3 ^ (((safe_mod_func_uint16_t_u_u(p_69.f6, l_351)) > l_138) < g_213.f0)), g_2))), 1L)) || 8L) == l_323.f1) & g_192) || 0x37E61190L), 0x9BB4L)), 0xDCL)))) | g_213.f4) > p_70) == (-1L)), 6)), l_94.f6)), p_69.f5)) == p_69.f5) >= p_70) || l_323.f2), 4))) < p_69.f0) < 6UL)))))), 0xE0L)), p_69.f3)) > p_69.f0) | p_69.f6), g_301)))
            {
                uint64_t l_356 = 5UL;
                int32_t l_359 = 0xA912AE39L;
                g_213.f5 = p_69.f0;
                l_359 ^= (l_356 >= (safe_add_func_int8_t_s_s(0x82L, p_69.f1)));
                p_69.f1 &= g_213.f2;
            }
            else
            {
                g_301 = (safe_unary_minus_func_int32_t_s(g_213.f3));
                if (g_213.f6)
                    continue;
            }
        }
        for (l_91 = 26; (l_91 != (-12)); --l_91)
        {
            uint8_t l_368 = 0xAEL;
            g_154 ^= (+(safe_lshift_func_int8_t_s_s(g_322, 4)));
            g_154 |= (safe_lshift_func_int8_t_s_u((0x9881L >= (((g_3 || (l_368 || (((l_208 != (~((g_314 == (0xD411CF69L != 0xA6B8BF16L)) && ((1L & (safe_mod_func_int64_t_s_s((+(0x6E52BDFDL >= l_94.f0)), g_375))) || p_69.f4)))) | g_301) >= 0x7000L))) | 7L) <= l_376)), p_68));
            l_323 = p_69;
            g_213 = p_69;
        }
        g_383++;
    }
    for (g_216 = 0; (g_216 == 16); g_216++)
    {
        struct S0 l_390 = {0x42AE9B44L,0L,0xC048E1D8DCDD8640LL,0x70185C4AL,0x55L,0L,0x14ECL};
        for (p_69.f3 = 0; (p_69.f3 == 12); p_69.f3 = safe_add_func_int8_t_s_s(p_69.f3, 4))
        {
            l_390 = p_69;
        }
        g_379 = (safe_mod_func_int32_t_s_s((~(safe_add_func_uint32_t_u_u(p_69.f0, (((~((((safe_lshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(0x97L, ((0x717C3DF1L > ((safe_add_func_uint32_t_u_u(((l_79 >= (((p_66 || (safe_mod_func_int64_t_s_s(((safe_add_func_uint16_t_u_u(((safe_add_func_int32_t_s_s((0xE293BD1FL <= (safe_lshift_func_uint8_t_u_s(p_69.f5, 1))), (safe_add_func_int16_t_s_s(g_383, (l_376 & l_390.f0))))) & 1L), l_323.f3)) < g_317), 0x57C1A50624BA6F3BLL))) ^ p_66) > p_69.f5)) & p_69.f4), 4294967288UL)) != g_375)) | g_310))), 7)) ^ l_390.f4) == 0x1EL) && p_68)) && l_376) <= l_323.f0)))), 1L));
    }
    return g_213.f6;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_2;
    csmith_sink_ = g_3;
    csmith_sink_ = g_154;
    csmith_sink_ = g_192;
    csmith_sink_ = g_195;
    csmith_sink_ = g_196;
    csmith_sink_ = g_213.f0;
    csmith_sink_ = g_213.f1;
    csmith_sink_ = g_213.f2;
    csmith_sink_ = g_213.f3;
    csmith_sink_ = g_213.f4;
    csmith_sink_ = g_213.f5;
    csmith_sink_ = g_213.f6;
    csmith_sink_ = g_216;
    csmith_sink_ = g_301;
    csmith_sink_ = g_310;
    csmith_sink_ = g_314;
    csmith_sink_ = g_317;
    csmith_sink_ = g_322;
    csmith_sink_ = g_375;
    csmith_sink_ = g_379;
    csmith_sink_ = g_383;
    csmith_sink_ = g_451;
    csmith_sink_ = g_459;
    csmith_sink_ = g_534;
    csmith_sink_ = g_597;
    csmith_sink_ = g_599;
    csmith_sink_ = g_600;
    csmith_sink_ = g_601;
    csmith_sink_ = g_669;
    csmith_sink_ = g_867;
    csmith_sink_ = g_873;
    csmith_sink_ = g_874;
    csmith_sink_ = g_876;
    csmith_sink_ = g_973;
    csmith_sink_ = g_981;
    csmith_sink_ = g_982;
    csmith_sink_ = g_988;
    csmith_sink_ = g_990;
    csmith_sink_ = g_1031;
    platform_main_end(0,0);
    return 0;
}
