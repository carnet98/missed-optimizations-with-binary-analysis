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
static int32_t g_2 = 0x60477862L;
static int32_t g_5 = 4L;
static int32_t g_12 = (-1L);
static int32_t g_15 = 0L;
static uint8_t g_36 = 0UL;
static int32_t g_39 = (-9L);
static int32_t *g_64 = &g_12;
static int32_t **g_63 = &g_64;
static int32_t g_81 = (-1L);
static int32_t g_103 = 0L;
static uint32_t g_105 = 6UL;
static uint8_t *g_139 = &g_36;
static uint8_t **g_138 = &g_139;
static uint64_t g_142 = 0x1120EAC2F6E5819CLL;
static uint32_t g_151 = 0x37717E41L;
static uint32_t g_169 = 1UL;
static uint8_t ***g_171 = (void*)0;
static uint8_t g_175 = 4UL;
static int8_t g_177 = (-10L);
static int8_t g_237 = 1L;
static uint64_t g_271 = 0xB91B04C5D88C5394LL;
static uint16_t g_287 = 0x92A4L;
static uint32_t g_288 = 0UL;
static uint16_t g_294 = 0xCCC0L;
static int16_t g_307 = 0xF4F5L;
static uint32_t g_309 = 0x7154B7D5L;
static int32_t *g_313 = (void*)0;
static int32_t **g_312 = &g_313;
static int64_t g_374 = 0x9CF0709E64E21255LL;
static uint32_t *g_487 = &g_169;
static uint32_t **g_486 = &g_487;
static uint32_t g_528 = 0xF6875FBCL;
static uint8_t g_628 = 0UL;
static uint16_t *g_637 = &g_287;
static uint16_t **g_636 = &g_637;
static uint16_t ***g_635 = &g_636;
static int64_t g_665 = (-7L);
static uint32_t g_667 = 4294967290UL;
static uint16_t g_727 = 65531UL;
static uint32_t g_760 = 0xE92FE9CAL;
static uint8_t g_885 = 249UL;
static uint32_t ***g_898 = (void*)0;
static uint32_t ****g_897 = &g_898;
static uint8_t g_922 = 0xDEL;
static uint32_t g_955 = 0x5AD44C66L;
static int16_t g_1038 = (-1L);
static int32_t g_1058 = 0xF27723C1L;
static int64_t g_1063 = 0xD5C2B32C39CD9867LL;
static uint8_t g_1071 = 254UL;
static uint32_t g_1163 = 4UL;
static uint32_t g_1218 = 4UL;
static int64_t g_1260 = 6L;
static uint8_t g_1280 = 0x30L;
static int8_t g_1336 = 0x40L;
static uint8_t g_1349 = 0x6AL;
static int32_t g_1365 = 0xB040975CL;
static uint32_t g_1371 = 18446744073709551611UL;
static uint32_t *****g_1414 = &g_897;
inline static uint8_t func_1(void);
static uint32_t func_18(uint64_t p_19);
inline static uint16_t func_26(int32_t ** p_27, int32_t * p_28, int8_t p_29);
inline static int32_t * func_32(int32_t * p_33);
static uint64_t func_42(int32_t * p_43, int32_t ** p_44, int32_t p_45, int8_t p_46, int32_t * p_47);
inline static int32_t * func_48(uint16_t p_49, int16_t p_50, uint8_t * p_51);
static uint8_t * func_54(int32_t * p_55, int32_t * p_56, uint8_t * p_57, uint8_t * p_58);
inline static int32_t * func_59(int32_t ** p_60, uint8_t * p_61, uint8_t * p_62);
static int32_t * func_66(int8_t p_67, int32_t * p_68, int32_t * p_69, uint8_t p_70);
inline static int32_t * func_71(int64_t p_72, int64_t p_73, int32_t ** p_74, uint64_t p_75, int64_t p_76);
inline static uint8_t func_1(void)
{
    uint16_t l_1378 = 0UL;
    int32_t l_1380 = 1L;
    int32_t l_1404 = 3L;
    for (g_2 = 0; (g_2 > (-1)); --g_2)
    {
        uint64_t l_1408 = 18446744073709551614UL;
        int32_t *l_1411 = &l_1404;
        for (g_5 = (-19); (g_5 > (-25)); g_5--)
        {
            int32_t *l_9 = &g_5;
            int32_t **l_8 = &l_9;
            int32_t *l_11 = &g_5;
            int32_t **l_10 = &l_11;
            int32_t l_1379 = 0xCC477717L;
            (*l_10) = ((*l_8) = &g_2);
            ((void) sizeof ((l_9 == &g_2) ? 1 : 0), __extension__ ({ if (l_9 == &g_2) ; else __assert_fail ("l_9 == &g_2", "/tmp/tmp6hkk_tas.c", 115, __extension__ __PRETTY_FUNCTION__); }));
            ((void) sizeof ((l_11 == &g_2) ? 1 : 0), __extension__ ({ if (l_11 == &g_2) ; else __assert_fail ("l_11 == &g_2", "/tmp/tmp6hkk_tas.c", 116, __extension__ __PRETTY_FUNCTION__); }));
            for (g_12 = 0; (g_12 > 26); g_12 = safe_add_func_uint8_t_u_u(g_12, 6))
            {
                int64_t l_1377 = 0x3AFA3103D0AC58D3LL;
                int32_t l_1381 = 0xF7EAED6EL;
                int32_t *l_1382 = &l_1380;
                int32_t *l_1383 = &l_1381;
                int32_t *l_1384 = &g_15;
                int32_t *l_1385 = (void*)0;
                int32_t *l_1386 = (void*)0;
                int32_t *l_1387 = &l_1381;
                int32_t *l_1388 = &g_39;
                int32_t l_1389 = 0x5E2909C9L;
                int32_t *l_1390 = &l_1380;
                int32_t *l_1391 = &l_1389;
                int32_t *l_1392 = &g_39;
                int32_t *l_1393 = &g_15;
                int32_t *l_1394 = (void*)0;
                int32_t *l_1395 = (void*)0;
                int32_t *l_1396 = &l_1381;
                int32_t *l_1397 = (void*)0;
                int32_t *l_1398 = &g_81;
                int32_t *l_1399 = &g_1058;
                int32_t *l_1400 = &l_1389;
                int32_t *l_1401 = &g_81;
                int32_t *l_1402 = &g_39;
                int32_t *l_1403 = (void*)0;
                int32_t *l_1405 = &l_1404;
                int32_t *l_1406 = &g_39;
                int32_t *l_1407 = &l_1389;
                for (g_15 = (-1); (g_15 != (-28)); g_15 = safe_sub_func_uint64_t_u_u(g_15, 3))
                {
                    int64_t l_1374 = (-8L);
                    int32_t *l_1375 = (void*)0;
                    int32_t *l_1376 = &g_81;
                }
                if (l_1379)
                    break;
                if ((*g_64))
                    break;
                ++l_1408;
            }
            (**g_63) &= 0x25DF29D7L;
            if (l_1408)
                continue;
        }
        (*l_1411) = ((**g_63) = l_1380);
        if ((*l_1411))
            break;
        for (g_237 = (-20); (g_237 < (-13)); g_237++)
        {
            g_1414 = &g_897;
        }
    }
    (*g_63) = (*g_63);
    return l_1378;
}
static uint32_t func_18(uint64_t p_19)
{
    uint32_t l_24 = 0x6FEBFB2CL;
    int32_t *l_31 = &g_15;
    int32_t **l_30 = &l_31;
    uint8_t *l_174 = &g_175;
    uint8_t **l_173 = &l_174;
    uint8_t ***l_172 = &l_173;
    int8_t *l_176 = &g_177;
    uint64_t l_906 = 18446744073709551615UL;
    uint8_t l_1074 = 0x33L;
    int32_t *l_1078 = &g_2;
    int32_t l_1122 = 0x98B08106L;
    int32_t l_1151 = 0xEFD34D95L;
    int32_t l_1154 = 0xB0E94A83L;
    int32_t l_1172 = 0L;
    if ((safe_mod_func_int8_t_s_s((safe_lshift_func_int16_t_s_u((l_24 > (+65534UL)), (((func_26(l_30, func_32((*l_30)), ((*l_176) |= (g_171 != l_172))) >= ((p_19 | 0xAAD0L) || l_906)) == 5L) && g_142))), 2UL)))
    {
        int32_t *l_907 = &g_39;
        (*g_312) = l_907;
        ((void) sizeof ((g_313 == &g_39) ? 1 : 0), __extension__ ({ if (g_313 == &g_39) ; else __assert_fail ("g_313 == &g_39", "/tmp/tmp6hkk_tas.c", 201, __extension__ __PRETTY_FUNCTION__); }));
    }
    else
    {
        int8_t l_908 = 6L;
        int32_t *l_909 = &g_39;
        uint16_t ****l_913 = &g_635;
        uint32_t ****l_929 = &g_898;
        int32_t *l_946 = &g_15;
        int32_t l_1027 = 0xA470DBA1L;
        uint8_t **l_1100 = &l_174;
        uint16_t ****l_1115 = &g_635;
        int64_t *l_1120 = &g_665;
        int64_t **l_1119 = &l_1120;
        (*l_909) ^= l_908;
        for (l_24 = 28; (l_24 < 27); l_24--)
        {
            uint64_t l_928 = 0x869FFA67853DA0F1LL;
            uint32_t *****l_930 = (void*)0;
            uint32_t *****l_931 = &l_929;
            uint8_t l_932 = 253UL;
            int32_t *l_933 = &g_39;
            int32_t l_945 = 0L;
            int8_t l_1087 = 1L;
            int64_t **l_1093 = (void*)0;
            int64_t ***l_1092 = &l_1093;
            uint8_t **l_1101 = &g_139;
            int32_t l_1117 = 0x896CA024L;
            int32_t l_1195 = (-7L);
            int32_t l_1215 = (-1L);
            if ((((g_105 >= (safe_unary_minus_func_uint8_t_u(((((*l_174) = (p_19 ^ ((void*)0 != l_913))) & ((0x2CL == p_19) == (safe_add_func_uint64_t_u_u(g_36, ((*l_909) && (safe_mod_func_uint8_t_u_u((((g_177 = 0x62L) == (-3L)) | p_19), p_19))))))) != (-10L))))) == p_19) != (*l_909)))
            {
                return (**g_486);
            }
            else
            {
                uint32_t l_925 = 0x89DCFF2DL;
                for (g_103 = 20; (g_103 == 19); g_103--)
                {
                    int8_t l_923 = 1L;
                    int32_t *l_924 = (void*)0;
                    for (g_294 = 0; (g_294 <= 46); g_294 = safe_add_func_uint64_t_u_u(g_294, 4))
                    {
                        l_923 ^= g_922;
                        (*g_63) = l_924;
                        ((void) sizeof ((g_64 == 0) ? 1 : 0), __extension__ ({ if (g_64 == 0) ; else __assert_fail ("g_64 == 0", "/tmp/tmp6hkk_tas.c", 247, __extension__ __PRETTY_FUNCTION__); }));
                        l_925++;
                        if (l_928)
                            break;
                    }
                }
            }
            (*l_931) = l_929;
            (*l_909) = (l_928 ^ 0UL);
        }
    }
    ((void) sizeof ((g_139 == 0 || g_139 == &g_36) ? 1 : 0), __extension__ ({ if (g_139 == 0 || g_139 == &g_36) ; else __assert_fail ("g_139 == 0 || g_139 == &g_36", "/tmp/tmp6hkk_tas.c", 261, __extension__ __PRETTY_FUNCTION__); }));
    return p_19;
}
inline static uint16_t func_26(int32_t ** p_27, int32_t * p_28, int8_t p_29)
{
    int32_t **l_178 = &g_64;
    int32_t ***l_179 = &g_63;
    int32_t l_181 = 0xC4852B1BL;
    uint8_t ****l_182 = (void*)0;
    int8_t l_194 = 0xD9L;
    int16_t l_204 = 8L;
    int32_t l_231 = 0xDAA5E5C7L;
    int32_t l_308 = (-8L);
    uint32_t *l_351 = &g_169;
    uint32_t **l_350 = &l_351;
    uint16_t *l_440 = &g_294;
    int64_t l_527 = 0x72FDCEC06D11D72DLL;
    int8_t *l_561 = &g_237;
    int64_t l_591 = 0xEA0C654F21E32876LL;
    int32_t l_772 = 0x75343D12L;
    uint32_t l_801 = 0UL;
    uint64_t *l_824 = &g_142;
    int64_t l_835 = 0x4C93C08E044B3EEELL;
    uint16_t ***l_869 = &g_636;
    uint32_t ***l_896 = &g_486;
    uint32_t ****l_895 = &l_896;
    int16_t *l_899 = &l_204;
    uint32_t l_902 = 0x74F990B0L;
    uint64_t l_903 = 18446744073709551608UL;
    int32_t *l_904 = (void*)0;
    int32_t *l_905 = &g_39;
    if ((((*l_179) = l_178) != (void*)0))
    {
        int32_t l_180 = 0x685C1309L;
        uint8_t ****l_183 = &g_171;
        uint32_t *l_186 = (void*)0;
        uint32_t *l_187 = (void*)0;
        uint32_t *l_188 = &g_169;
        int32_t *l_191 = &l_180;
        int32_t l_225 = (-3L);
        int32_t l_259 = 0x0E8A79AFL;
        int32_t **l_318 = &l_191;
        uint8_t *l_319 = &g_175;
        l_181 = l_180;
        g_81 = ((l_182 == l_183) <= ((*l_191) = (safe_sub_func_uint32_t_u_u(((*l_188)++), l_180))));
        for (p_29 = 0; (p_29 <= 11); ++p_29)
        {
            uint32_t l_195 = 0x21E3D09CL;
            int32_t *l_196 = (void*)0;
            int32_t *l_197 = (void*)0;
            int32_t *l_198 = &g_81;
            int32_t *l_199 = &l_181;
            int32_t *l_200 = &l_180;
            int32_t *l_201 = (void*)0;
            int32_t *l_202 = (void*)0;
            int32_t l_203 = 0x9EBF9289L;
            int32_t *l_205 = (void*)0;
            int32_t *l_206 = &l_203;
            int32_t *l_207 = &l_180;
            int32_t *l_208 = &g_81;
            int32_t *l_209 = (void*)0;
            int32_t *l_210 = &l_203;
            int32_t *l_211 = &l_203;
            int32_t *l_212 = &g_81;
            int32_t *l_213 = (void*)0;
            int32_t l_214 = 0xCA710607L;
            int32_t *l_215 = &l_181;
            int32_t l_216 = 0x10D2121AL;
            int32_t *l_217 = &l_214;
            int32_t *l_218 = (void*)0;
            int32_t *l_219 = &l_180;
            int32_t *l_220 = &g_39;
            int32_t *l_221 = &g_81;
            int32_t *l_222 = &l_180;
            int32_t *l_223 = (void*)0;
            int32_t *l_224 = (void*)0;
            int32_t *l_226 = &l_225;
            int32_t *l_227 = &l_180;
            int32_t *l_228 = &l_181;
            int32_t *l_229 = (void*)0;
            int32_t *l_230 = (void*)0;
            int32_t *l_232 = &l_180;
            int32_t *l_233 = &l_231;
            int32_t *l_234 = (void*)0;
            int32_t *l_235 = &l_225;
            int32_t *l_236 = &l_214;
            int32_t *l_238 = (void*)0;
            int32_t *l_239 = &l_214;
            int32_t *l_240 = (void*)0;
            int32_t *l_241 = &l_203;
            int32_t *l_242 = &l_216;
            int32_t l_243 = 0xA6B8F9ADL;
            int32_t *l_244 = &l_180;
            int32_t *l_245 = &l_243;
            int32_t *l_246 = &l_231;
            int32_t *l_247 = (void*)0;
            int32_t *l_248 = &g_81;
            int32_t l_249 = 0L;
            int32_t *l_250 = &l_216;
            int32_t *l_251 = &l_214;
            int32_t l_252 = 0xE04AB730L;
            int32_t *l_253 = (void*)0;
            int32_t *l_254 = &l_243;
            int32_t *l_255 = (void*)0;
            int32_t *l_256 = &l_216;
            int32_t *l_257 = &l_181;
            int32_t *l_258 = &l_225;
            int32_t *l_260 = &l_203;
            int32_t *l_261 = &l_216;
            int32_t *l_262 = &l_249;
            int32_t *l_263 = &l_181;
            int32_t l_264 = 1L;
            int32_t *l_265 = &l_225;
            int32_t *l_266 = &l_214;
            int32_t *l_267 = &l_231;
            int32_t *l_268 = &l_259;
            int32_t *l_269 = &l_252;
            int32_t *l_270 = &l_225;
            uint8_t *l_314 = &g_175;
            uint8_t *l_315 = (void*)0;
            uint32_t **l_316 = &l_186;
            (*l_191) = (p_29 != (l_194 | ((p_29 || p_29) & l_195)));
            ++g_271;
            if (((*l_257) = 0x3F2D2C60L))
            {
                uint8_t l_285 = 0xF0L;
                uint16_t *l_286 = &g_287;
                uint16_t *l_293 = &g_294;
                uint64_t *l_299 = &g_142;
                (*l_260) = (((p_29 && (g_288 = ((*l_188) = ((safe_mod_func_uint16_t_u_u((*l_269), (((0UL <= (safe_rshift_func_int16_t_s_u((((-1L) == (2UL || (0xE619775E7F41821ALL && ((!((*l_286) ^= ((**p_27) | (safe_lshift_func_uint16_t_u_u(((((*l_248) || (0xD8L != (*l_191))) >= l_285) || 0L), (*l_191)))))) < 9L)))) && g_12), g_5))) ^ p_29) | g_177))) < (*l_228))))) <= g_15) >= (**p_27));
                (*l_261) = ((*l_222) = (safe_mod_func_uint64_t_u_u(((safe_sub_func_int16_t_s_s((((*l_286) = 1UL) || 0xAA86L), ((*l_293) = (((void*)0 == &g_177) >= (*l_191))))) <= ((((safe_mod_func_uint64_t_u_u(p_29, (safe_lshift_func_int16_t_s_s(g_237, 14)))) > ((*l_299) = ((**p_27) != 0L))) && (*p_28)) > p_29)), p_29)));
                (**l_179) = (void*)0;
            }
            else
            {
                int8_t *l_304 = &g_177;
                int32_t l_305 = 0L;
                int32_t l_306 = (-7L);
                (*l_258) &= (safe_rshift_func_uint8_t_u_s(p_29, ((*l_304) = ((++g_36) && (*l_191)))));
                if ((*p_28))
                    continue;
                ++g_309;
            }
            if ((p_28 == ((*l_316) = func_32(func_66((*l_191), func_32((*g_63)), func_59(g_312, (l_314 = l_314), l_315), ((void*)0 != &g_312))))))
            {
                return p_29;
            }
            else
            {
                int32_t *l_317 = &g_5;
                uint8_t *l_320 = &g_175;
                (*p_27) = l_317;
                (*p_27) = func_59(l_318, l_319, l_320);
            }
            ((void) sizeof ((l_186 == &g_15) ? 1 : 0), __extension__ ({ if (l_186 == &g_15) ; else __assert_fail ("l_186 == &g_15", "/tmp/tmp6hkk_tas.c", 429, __extension__ __PRETTY_FUNCTION__); }));
        }
        ((void) sizeof ((l_186 == &g_15 || l_186 == 0) ? 1 : 0), __extension__ ({ if (l_186 == &g_15 || l_186 == 0) ; else __assert_fail ("l_186 == &g_15 || l_186 == 0", "/tmp/tmp6hkk_tas.c", 433, __extension__ __PRETTY_FUNCTION__); }));
    }
    else
    {
        uint32_t l_323 = 0x2D08A2D7L;
        uint8_t ***l_324 = &g_138;
        int32_t *l_327 = &l_231;
        uint32_t **l_349 = (void*)0;
        uint32_t l_365 = 0UL;
        int64_t l_423 = 1L;
        int32_t ***l_463 = (void*)0;
        int8_t l_485 = 0x8DL;
        int32_t l_512 = 0xC43BF655L;
        int32_t l_521 = 1L;
        int32_t l_526 = 8L;
        int64_t l_533 = (-8L);
        int16_t *l_549 = &l_204;
        int16_t *l_550 = &g_307;
        int8_t *l_556 = (void*)0;
        int8_t *l_557 = &l_194;
        uint8_t *l_558 = &g_175;
        uint16_t **l_598 = &l_440;
        int32_t *l_804 = &g_5;
        uint64_t *l_826 = &g_271;
        int64_t l_834 = 0L;
        (*l_327) = (((0x97BF4D477D6962B2LL ^ ((safe_lshift_func_int16_t_s_u(l_323, 8)) < (g_177 == ((((void*)0 == l_324) && (-1L)) <= (g_307 >= ((0UL <= (safe_lshift_func_int8_t_s_u(0x88L, 3))) && p_29)))))) == g_271) ^ p_29);
        for (g_307 = 0; (g_307 <= 0); g_307 = safe_add_func_int64_t_s_s(g_307, 3))
        {
            int8_t *l_338 = &g_177;
            uint16_t *l_341 = (void*)0;
            uint16_t **l_342 = &l_341;
            uint8_t *l_343 = (void*)0;
            uint8_t *l_344 = &g_36;
            uint64_t l_345 = 18446744073709551612UL;
            int32_t l_372 = 0x5F2DE2ACL;
            int32_t l_379 = 0xA9CAEAABL;
            int32_t l_389 = 1L;
            int32_t l_390 = 0x894A6382L;
            int32_t *l_500 = &l_231;
            int32_t *l_501 = &g_39;
            int32_t *l_502 = &l_181;
            int32_t *l_503 = &g_39;
            int32_t *l_504 = &l_379;
            int32_t *l_505 = (void*)0;
            int32_t *l_506 = &g_81;
            int32_t *l_507 = (void*)0;
            int32_t *l_508 = &g_81;
            int32_t *l_509 = &l_181;
            int32_t *l_510 = &l_379;
            int32_t *l_511 = &g_39;
            int32_t *l_513 = &l_379;
            int32_t *l_514 = &l_231;
            int32_t *l_515 = (void*)0;
            int32_t *l_516 = &l_231;
            int32_t *l_517 = (void*)0;
            int32_t *l_518 = &l_512;
            int32_t *l_519 = &l_308;
            int32_t *l_520 = &g_39;
            int32_t *l_522 = (void*)0;
            int32_t *l_523 = &g_81;
            int32_t *l_524 = &l_390;
            int32_t *l_525 = &l_231;
        }
        if (((((*l_561) = (((safe_rshift_func_int16_t_s_u((~(safe_sub_func_int8_t_s_s((safe_add_func_int16_t_s_s(((*l_550) = (g_36 || ((*l_549) ^= p_29))), (safe_sub_func_int8_t_s_s((*l_327), (((**g_486) > (safe_add_func_uint64_t_u_u(18446744073709551615UL, (*l_327)))) == ((*l_557) = (!g_294))))))), (--(*l_558))))), p_29)) >= (l_561 != &g_237)) > 1L)) && 7UL) | 7UL))
        {
            uint16_t l_589 = 1UL;
            uint32_t l_595 = 0UL;
            int32_t l_616 = 1L;
            int32_t l_657 = 4L;
            for (g_142 = 0; (g_142 == 33); ++g_142)
            {
                uint64_t *l_569 = &g_142;
                uint64_t **l_568 = &l_569;
                int32_t l_590 = (-1L);
                int32_t *l_592 = &g_81;
                uint8_t **l_601 = &l_558;
                int32_t l_622 = 0x62375A83L;
                uint16_t ****l_632 = (void*)0;
                uint16_t ***l_634 = &l_598;
                uint16_t ****l_633 = &l_634;
                uint16_t ****l_638 = (void*)0;
                uint16_t ****l_639 = (void*)0;
                uint16_t ****l_640 = &g_635;
                int64_t *l_641 = &l_591;
                int64_t *l_642 = &g_374;
                int64_t *l_643 = &l_423;
            }
            for (g_175 = 0; (g_175 < 30); g_175 = safe_add_func_int64_t_s_s(g_175, 7))
            {
                int64_t l_666 = (-4L);
                int32_t l_670 = 6L;
                if ((safe_add_func_int8_t_s_s((((*l_178) = (*p_27)) != (*g_312)), g_294)))
                {
                    int32_t *l_648 = (void*)0;
                    int32_t l_649 = 0xF32C2346L;
                    int32_t *l_650 = &l_521;
                    int32_t *l_651 = (void*)0;
                    int32_t *l_652 = &l_181;
                    int32_t *l_653 = &l_521;
                    int32_t *l_654 = &l_181;
                    int32_t l_655 = 0L;
                    int32_t *l_656 = &l_521;
                    int32_t *l_658 = &l_521;
                    int32_t *l_659 = &l_231;
                    int32_t *l_660 = &l_512;
                    int32_t *l_661 = (void*)0;
                    int32_t *l_662 = &l_521;
                    int32_t *l_663 = &g_39;
                    int32_t *l_664 = &g_81;
                    g_667++;
                    l_670 = (**g_63);
                }
                else
                {
                    uint32_t l_673 = 18446744073709551608UL;
                    if ((*p_28))
                        break;
                    (*g_63) = &l_670;
                    ((void) sizeof ((g_64 == &l_670) ? 1 : 0), __extension__ ({ if (g_64 == &l_670) ; else __assert_fail ("g_64 == &l_670", "/tmp/tmp6hkk_tas.c", 552, __extension__ __PRETTY_FUNCTION__); }));
                    for (g_103 = 0; (g_103 <= (-6)); g_103 = safe_sub_func_int64_t_s_s(g_103, 1))
                    {
                        l_673++;
                        if (l_666)
                            break;
                    }
                }
                ((void) sizeof ((g_64 == &l_670 || g_64 == &g_15) ? 1 : 0), __extension__ ({ if (g_64 == &l_670 || g_64 == &g_15) ; else __assert_fail ("g_64 == &l_670 || g_64 == &g_15", "/tmp/tmp6hkk_tas.c", 561, __extension__ __PRETTY_FUNCTION__); }));
                if (l_589)
                    continue;
            }
        }
        else
        {
            int8_t l_676 = 2L;
            int32_t *l_677 = &l_526;
            int32_t *l_678 = &l_181;
            int32_t *l_679 = (void*)0;
            int32_t *l_680 = (void*)0;
            int32_t *l_681 = &l_308;
            int32_t *l_682 = (void*)0;
            int32_t *l_683 = &l_181;
            int32_t *l_684 = &l_512;
            int32_t *l_685 = &l_526;
            int32_t *l_686 = &l_231;
            int32_t *l_687 = (void*)0;
            int32_t *l_688 = &l_181;
            int32_t *l_689 = &g_81;
            int32_t *l_690 = &l_526;
            int32_t l_691 = 0xB0531F4CL;
            int32_t *l_692 = &l_181;
            int32_t l_693 = (-2L);
            int32_t *l_694 = &l_693;
            int32_t *l_695 = &l_512;
            int32_t *l_696 = (void*)0;
            int32_t *l_697 = &l_231;
            int32_t *l_698 = &l_181;
            int32_t *l_699 = &l_693;
            int32_t *l_700 = &l_693;
            int32_t *l_701 = &g_81;
            int32_t *l_702 = &l_521;
            int32_t *l_703 = (void*)0;
            int32_t *l_704 = (void*)0;
            int32_t *l_705 = &l_181;
            int32_t *l_706 = &l_693;
            int32_t *l_707 = (void*)0;
            int32_t *l_708 = (void*)0;
            int32_t *l_709 = &l_512;
            int32_t *l_710 = &l_521;
            int32_t *l_711 = &g_39;
            int32_t *l_712 = &g_39;
            int32_t *l_713 = &l_308;
            int32_t *l_714 = &l_691;
            int32_t *l_715 = &l_308;
            int32_t *l_716 = &l_521;
            int32_t l_717 = 6L;
            int32_t *l_718 = &g_81;
            int32_t *l_719 = (void*)0;
            int32_t *l_720 = (void*)0;
            int32_t *l_721 = &g_39;
            int32_t *l_722 = (void*)0;
            int32_t *l_723 = &g_39;
            int32_t *l_724 = &l_521;
            int32_t *l_725 = &l_526;
            int32_t *l_726 = &l_512;
            uint64_t *l_800 = &g_142;
            uint8_t *l_803 = &g_628;
            int8_t l_860 = 1L;
            g_727++;
            if ((*l_327))
            {
                uint16_t l_759 = 65532UL;
                uint16_t ***l_792 = &g_636;
                uint16_t ****l_793 = &l_792;
                uint16_t ****l_794 = &g_635;
                uint16_t ***l_796 = &g_636;
                uint16_t ****l_795 = &l_796;
                uint64_t *l_799 = &g_271;
                int32_t *l_802 = &l_231;
                if ((**p_27))
                {
                    for (g_103 = 17; (g_103 >= (-14)); g_103 = safe_sub_func_int16_t_s_s(g_103, 8))
                    {
                        int32_t *l_732 = &g_12;
                        (*p_27) = ((*l_178) = l_732);
                        ((void) sizeof ((g_64 == &g_12) ? 1 : 0), __extension__ ({ if (g_64 == &g_12) ; else __assert_fail ("g_64 == &g_12", "/tmp/tmp6hkk_tas.c", 643, __extension__ __PRETTY_FUNCTION__); }));
                        (*l_677) &= (safe_sub_func_int8_t_s_s((*l_715), g_142));
                        if ((**p_27))
                            continue;
                        if ((**p_27))
                            break;
                    }
                    ((void) sizeof ((g_64 == &g_12 || g_64 == 0) ? 1 : 0), __extension__ ({ if (g_64 == &g_12 || g_64 == 0) ; else __assert_fail ("g_64 == &g_12 || g_64 == 0", "/tmp/tmp6hkk_tas.c", 652, __extension__ __PRETTY_FUNCTION__); }));
                    for (l_527 = (-6); (l_527 < 26); l_527 = safe_add_func_int16_t_s_s(l_527, 3))
                    {
                        if ((**p_27))
                            break;
                    }
                }
                else
                {
                    int8_t l_741 = 0x66L;
                    uint64_t *l_754 = &g_142;
                    int32_t *l_771 = &l_693;
                    int32_t ***l_773 = &l_178;
                    for (g_294 = (-2); (g_294 > 59); ++g_294)
                    {
                        return p_29;
                    }
                    if ((((**g_486) = (safe_rshift_func_int8_t_s_s(l_741, (p_29 ^ (safe_lshift_func_uint16_t_u_s((safe_sub_func_int32_t_s_s(((*l_702) |= (18446744073709551615UL >= (((safe_add_func_int16_t_s_s(((((1UL | ((safe_mod_func_int64_t_s_s((safe_lshift_func_int16_t_s_s((safe_mod_func_int8_t_s_s((((*l_754)++) == ((safe_add_func_uint64_t_u_u(((void*)0 == (*g_138)), 0L)) || (&p_28 == &g_313))), 0xF0L)), 6)), p_29)) || g_142)) ^ l_759) >= 0x0BD1DE4CL) < 0x2BL), 0xF94AL)) && (*l_327)) >= g_760))), (*p_28))), (*l_686))))))) != (**p_27)))
                    {
                        return (**g_636);
                    }
                    else
                    {
                        int32_t ***l_778 = (void*)0;
                        int32_t ****l_779 = (void*)0;
                        int32_t ****l_780 = &l_179;
                        (*l_692) = (safe_add_func_uint16_t_u_u(((!((safe_add_func_uint64_t_u_u(((safe_add_func_uint8_t_u_u((safe_unary_minus_func_int32_t_s((-1L))), p_29)) && (**g_486)), (((*g_636) = (**g_635)) != (void*)0))) != (0xCF85L ^ 0UL))) | (safe_lshift_func_int16_t_s_u((((((*l_350) = (*g_486)) == (*g_486)) || p_29) & p_29), 9))), 1L));
                        (*g_312) = l_771;
                        ((void) sizeof ((g_313 == &l_693) ? 1 : 0), __extension__ ({ if (g_313 == &l_693) ; else __assert_fail ("g_313 == &l_693", "/tmp/tmp6hkk_tas.c", 682, __extension__ __PRETTY_FUNCTION__); }));
                        (*l_686) = (**p_27);
                        (*p_27) = func_71(l_772, (((*l_327) & (&g_63 != l_773)) == (safe_sub_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(((*l_771) = ((((*l_440) ^= ((**g_636) = 0xC541L)) > g_528) == (((*l_780) = l_778) == &p_27))), ((0xBDFCL | 8UL) & p_29))), g_177))), (*l_773), p_29, (*l_327));
                        ((void) sizeof ((g_64 == &g_39) ? 1 : 0), __extension__ ({ if (g_64 == &g_39) ; else __assert_fail ("g_64 == &g_39", "/tmp/tmp6hkk_tas.c", 686, __extension__ __PRETTY_FUNCTION__); }));
                        ((void) sizeof ((l_179 == 0) ? 1 : 0), __extension__ ({ if (l_179 == 0) ; else __assert_fail ("l_179 == 0", "/tmp/tmp6hkk_tas.c", 688, __extension__ __PRETTY_FUNCTION__); }));
                    }
                    ((void) sizeof ((g_64 == &g_39) ? 1 : 0), __extension__ ({ if (g_64 == &g_39) ; else __assert_fail ("g_64 == &g_39", "/tmp/tmp6hkk_tas.c", 691, __extension__ __PRETTY_FUNCTION__); }));
                    ((void) sizeof ((l_179 == 0) ? 1 : 0), __extension__ ({ if (l_179 == 0) ; else __assert_fail ("l_179 == 0", "/tmp/tmp6hkk_tas.c", 693, __extension__ __PRETTY_FUNCTION__); }));
                    ((void) sizeof ((g_313 == &l_693) ? 1 : 0), __extension__ ({ if (g_313 == &l_693) ; else __assert_fail ("g_313 == &l_693", "/tmp/tmp6hkk_tas.c", 694, __extension__ __PRETTY_FUNCTION__); }));
                }
                ((void) sizeof ((g_64 == &g_39 || g_64 == &g_12 || g_64 == 0) ? 1 : 0), __extension__ ({ if (g_64 == &g_39 || g_64 == &g_12 || g_64 == 0) ; else __assert_fail ("g_64 == &g_39 || g_64 == &g_12 || g_64 == 0", "/tmp/tmp6hkk_tas.c", 697, __extension__ __PRETTY_FUNCTION__); }));
                ((void) sizeof ((l_179 == 0 || l_179 == &g_63) ? 1 : 0), __extension__ ({ if (l_179 == 0 || l_179 == &g_63) ; else __assert_fail ("l_179 == 0 || l_179 == &g_63", "/tmp/tmp6hkk_tas.c", 699, __extension__ __PRETTY_FUNCTION__); }));
                ((void) sizeof ((g_313 == &l_693 || g_313 == 0) ? 1 : 0), __extension__ ({ if (g_313 == &l_693 || g_313 == 0) ; else __assert_fail ("g_313 == &l_693 || g_313 == 0", "/tmp/tmp6hkk_tas.c", 700, __extension__ __PRETTY_FUNCTION__); }));
                (*g_63) = func_66((safe_unary_minus_func_int8_t_s(((safe_mod_func_int8_t_s_s(0x02L, (((safe_add_func_uint8_t_u_u(((*l_725) = (!(*g_487))), (+((0x3C681DB7756A15EELL < (safe_lshift_func_uint16_t_u_u((((safe_rshift_func_uint16_t_u_s((((((*l_795) = ((*l_794) = ((*l_793) = l_792))) == (void*)0) || ((*l_549) = (safe_sub_func_uint8_t_u_u((l_799 != l_800), (*l_726))))) != p_29), 2)) > l_801) ^ 18446744073709551613UL), 3))) >= p_29)))) || l_759) | p_29))) <= g_760))), l_802, &l_691, p_29);
                ((void) sizeof ((g_64 == &g_12) ? 1 : 0), __extension__ ({ if (g_64 == &g_12) ; else __assert_fail ("g_64 == &g_12", "/tmp/tmp6hkk_tas.c", 703, __extension__ __PRETTY_FUNCTION__); }));
                (*g_63) = func_66(p_29, func_59(&g_64, l_803, (**l_324)), l_804, p_29);
            }
            else
            {
                return (**g_636);
            }
            ((void) sizeof ((g_64 == &g_12) ? 1 : 0), __extension__ ({ if (g_64 == &g_12) ; else __assert_fail ("g_64 == &g_12", "/tmp/tmp6hkk_tas.c", 711, __extension__ __PRETTY_FUNCTION__); }));
            ((void) sizeof ((l_179 == 0 || l_179 == &g_63) ? 1 : 0), __extension__ ({ if (l_179 == 0 || l_179 == &g_63) ; else __assert_fail ("l_179 == 0 || l_179 == &g_63", "/tmp/tmp6hkk_tas.c", 713, __extension__ __PRETTY_FUNCTION__); }));
            ((void) sizeof ((g_313 == &l_693 || g_313 == 0) ? 1 : 0), __extension__ ({ if (g_313 == &l_693 || g_313 == 0) ; else __assert_fail ("g_313 == &l_693 || g_313 == 0", "/tmp/tmp6hkk_tas.c", 714, __extension__ __PRETTY_FUNCTION__); }));
            if (((*l_724) &= (**p_27)))
            {
                uint64_t **l_825 = &l_824;
                int64_t *l_831 = &l_527;
                int64_t *l_833 = &l_527;
                int64_t **l_832 = &l_833;
                int32_t l_838 = 0L;
                uint8_t **l_842 = (void*)0;
                if (((safe_mod_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u(((*l_558)--), p_29)), 5UL)) & (safe_mod_func_int16_t_s_s((safe_add_func_uint64_t_u_u((((void*)0 == &g_307) == ((*l_715) = (safe_mod_func_int8_t_s_s((~(safe_sub_func_int8_t_s_s((safe_sub_func_int64_t_s_s(p_29, (**l_178))), (safe_add_func_uint8_t_u_u((((*l_825) = l_824) == l_826), (safe_lshift_func_int16_t_s_u(((*l_549) = (((*g_487)--) && (((*l_832) = (l_831 = l_831)) != (void*)0))), 5))))))), l_834)))), l_835)), 65535UL))))
                {
                    uint16_t **l_841 = &g_637;
                    int32_t l_845 = 0x8CFC2AD7L;
                    int64_t l_861 = 6L;
                    if (((*l_695) |= ((((safe_lshift_func_int8_t_s_s(l_838, 3)) < ((*l_561) ^= 0x42L)) && (((-1L) & (safe_add_func_int32_t_s_s((l_841 == (void*)0), ((void*)0 == l_842)))) & (safe_lshift_func_int16_t_s_u(p_29, 1)))) != (((*g_487) < 0x4074CCCDL) && p_29))))
                    {
                        return (**l_178);
                    }
                    else
                    {
                        uint8_t *l_862 = (void*)0;
                        (*p_27) = (*g_312);
                    }
                    for (l_512 = 0; (l_512 == 8); l_512 = safe_add_func_int16_t_s_s(l_512, 9))
                    {
                        uint32_t ***l_868 = &l_350;
                        uint32_t ****l_867 = &l_868;
                        (*l_725) ^= (*l_327);
                        (*g_312) = func_66(p_29, (*p_27), ((*g_312) = (*p_27)), ((safe_rshift_func_uint8_t_u_u(p_29, 7)) ^ (&g_271 != &g_271)));
                        ((void) sizeof ((g_64 == &g_39) ? 1 : 0), __extension__ ({ if (g_64 == &g_39) ; else __assert_fail ("g_64 == &g_39", "/tmp/tmp6hkk_tas.c", 750, __extension__ __PRETTY_FUNCTION__); }));
                        ((void) sizeof ((g_313 == &g_12) ? 1 : 0), __extension__ ({ if (g_313 == &g_12) ; else __assert_fail ("g_313 == &g_12", "/tmp/tmp6hkk_tas.c", 751, __extension__ __PRETTY_FUNCTION__); }));
                        (*l_867) = &g_486;
                        ((void) sizeof ((l_868 == &g_486) ? 1 : 0), __extension__ ({ if (l_868 == &g_486) ; else __assert_fail ("l_868 == &g_486", "/tmp/tmp6hkk_tas.c", 754, __extension__ __PRETTY_FUNCTION__); }));
                    }
                    ((void) sizeof ((g_64 == &g_39 || g_64 == &g_12) ? 1 : 0), __extension__ ({ if (g_64 == &g_39 || g_64 == &g_12) ; else __assert_fail ("g_64 == &g_39 || g_64 == &g_12", "/tmp/tmp6hkk_tas.c", 757, __extension__ __PRETTY_FUNCTION__); }));
                    ((void) sizeof ((g_313 == &g_12 || g_313 == &l_693 || g_313 == 0) ? 1 : 0), __extension__ ({ if (g_313 == &g_12 || g_313 == &l_693 || g_313 == 0) ; else __assert_fail ("g_313 == &g_12 || g_313 == &l_693 || g_313 == 0", "/tmp/tmp6hkk_tas.c", 758, __extension__ __PRETTY_FUNCTION__); }));
                }
                else
                {
                    uint16_t ****l_870 = &g_635;
                    int64_t ***l_871 = &l_832;
                    (*l_870) = l_869;
                    (*l_871) = &l_833;
                    (*l_700) ^= (*p_28);
                }
                ((void) sizeof ((g_64 == &g_39 || g_64 == &g_12) ? 1 : 0), __extension__ ({ if (g_64 == &g_39 || g_64 == &g_12) ; else __assert_fail ("g_64 == &g_39 || g_64 == &g_12", "/tmp/tmp6hkk_tas.c", 769, __extension__ __PRETTY_FUNCTION__); }));
                ((void) sizeof ((g_313 == &g_12 || g_313 == &l_693 || g_313 == 0) ? 1 : 0), __extension__ ({ if (g_313 == &g_12 || g_313 == &l_693 || g_313 == 0) ; else __assert_fail ("g_313 == &g_12 || g_313 == &l_693 || g_313 == 0", "/tmp/tmp6hkk_tas.c", 771, __extension__ __PRETTY_FUNCTION__); }));
            }
            else
            {
                uint16_t l_877 = 0x5CD2L;
                int32_t l_886 = (-1L);
                for (l_772 = 0; (l_772 >= 3); ++l_772)
                {
                    int16_t l_876 = 1L;
                    int64_t *l_884 = &l_591;
                    int64_t **l_883 = &l_884;
                    for (g_288 = 8; (g_288 <= 37); ++g_288)
                    {
                        l_877--;
                    }
                    l_886 &= ((!(p_29 ^ (safe_add_func_int8_t_s_s(g_151, ((((*l_883) = &g_374) != l_800) <= g_885))))) >= ((*g_63) != (*g_312)));
                    ((void) sizeof ((l_884 == &g_374) ? 1 : 0), __extension__ ({ if (l_884 == &g_374) ; else __assert_fail ("l_884 == &g_374", "/tmp/tmp6hkk_tas.c", 788, __extension__ __PRETTY_FUNCTION__); }));
                    return (*g_637);
                }
            }
            ((void) sizeof ((g_64 == &g_39 || g_64 == &g_12) ? 1 : 0), __extension__ ({ if (g_64 == &g_39 || g_64 == &g_12) ; else __assert_fail ("g_64 == &g_39 || g_64 == &g_12", "/tmp/tmp6hkk_tas.c", 795, __extension__ __PRETTY_FUNCTION__); }));
            ((void) sizeof ((g_313 == &g_12 || g_313 == &l_693 || g_313 == 0) ? 1 : 0), __extension__ ({ if (g_313 == &g_12 || g_313 == &l_693 || g_313 == 0) ; else __assert_fail ("g_313 == &g_12 || g_313 == &l_693 || g_313 == 0", "/tmp/tmp6hkk_tas.c", 797, __extension__ __PRETTY_FUNCTION__); }));
        }
        ((void) sizeof ((l_179 == 0 || l_179 == &g_63) ? 1 : 0), __extension__ ({ if (l_179 == 0 || l_179 == &g_63) ; else __assert_fail ("l_179 == 0 || l_179 == &g_63", "/tmp/tmp6hkk_tas.c", 802, __extension__ __PRETTY_FUNCTION__); }));
    }
    ((void) sizeof ((l_179 == 0 || l_179 == &g_63) ? 1 : 0), __extension__ ({ if (l_179 == 0 || l_179 == &g_63) ; else __assert_fail ("l_179 == 0 || l_179 == &g_63", "/tmp/tmp6hkk_tas.c", 808, __extension__ __PRETTY_FUNCTION__); }));
    (*l_905) &= (0xA881L || ((((void*)0 != (**g_635)) || (safe_mod_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(((((*l_824) |= g_36) ^ (safe_sub_func_uint64_t_u_u(((((safe_rshift_func_uint8_t_u_u(((l_895 != g_897) && (0L > (((*l_899) = p_29) < ((safe_add_func_int32_t_s_s(((g_665 = (65535UL < (***g_635))) ^ p_29), p_29)) <= p_29)))), p_29)) != g_528) & 6L) < (**g_486)), 0x1003AA5FD0AF045ALL))) && 0x51528A50L), g_288)), l_902))) >= l_903));
    return (*l_905);
}
inline static int32_t * func_32(int32_t * p_33)
{
    uint32_t l_34 = 0xAC3A6081L;
    uint8_t *l_35 = &g_36;
    int32_t *l_37 = (void*)0;
    int32_t *l_38 = &g_39;
    uint32_t l_53 = 0x7B4D2C29L;
    int32_t l_77 = 0x6F739807L;
    uint64_t l_78 = 0xCCF58D911ACA8B14LL;
    uint8_t **l_115 = &l_35;
    uint32_t l_168 = 0xBA4BFF0AL;
    int32_t *l_170 = &g_15;
    (*l_38) ^= (l_34 ^ ((*l_35) = l_34));
    (*l_38) = g_15;
    g_169 &= ((safe_lshift_func_int16_t_s_s(4L, (((func_42(((*g_63) = func_48((!(*l_38)), l_53, ((*l_115) = func_54(func_59(g_63, l_35, l_35), func_66(g_36, func_71(l_77, (*l_38), &l_38, (*l_38), l_78), p_33, (*l_38)), l_35, l_35)))), g_63, g_36, g_15, p_33) & g_5) & 1L) <= l_168))) | g_12);
    ((void) sizeof ((g_64 == 0) ? 1 : 0), __extension__ ({ if (g_64 == 0) ; else __assert_fail ("g_64 == 0", "/tmp/tmp6hkk_tas.c", 836, __extension__ __PRETTY_FUNCTION__); }));
    return l_170;
}
static uint64_t func_42(int32_t * p_43, int32_t ** p_44, int32_t p_45, int8_t p_46, int32_t * p_47)
{
    int32_t *l_125 = &g_39;
    int32_t *l_126 = (void*)0;
    int32_t *l_127 = &g_81;
    int32_t *l_128 = &g_39;
    int32_t *l_129 = (void*)0;
    int32_t *l_130 = &g_39;
    int32_t *l_131 = &g_81;
    int32_t *l_132 = &g_81;
    int32_t *l_133 = &g_81;
    int32_t *l_134 = &g_39;
    uint16_t l_135 = 1UL;
    uint8_t ***l_140 = &g_138;
    uint32_t *l_141 = (void*)0;
    uint8_t **l_167 = (void*)0;
    uint8_t ***l_166 = &l_167;
    l_135++;
    if (((g_142 = (((*l_140) = g_138) == &g_139)) | (safe_lshift_func_int8_t_s_s((+(*l_131)), 2))))
    {
        int32_t *l_146 = &g_81;
        l_146 = l_146;
        return (*l_128);
    }
    else
    {
        uint8_t *l_164 = (void*)0;
        (*l_134) |= 0L;
        for (l_135 = 11; (l_135 < 20); l_135 = safe_add_func_uint16_t_u_u(l_135, 3))
        {
            uint8_t *l_156 = (void*)0;
            int32_t l_159 = 0x1CDA016EL;
            uint64_t *l_160 = &g_142;
            uint8_t ****l_165 = &l_140;
            (*l_133) &= (((safe_lshift_func_uint16_t_u_s((g_36 & ((--g_151) > (safe_sub_func_int8_t_s_s((((*g_138) = l_156) != (void*)0), (safe_sub_func_uint32_t_u_u((((*l_160) = l_159) ^ p_45), ((safe_lshift_func_int8_t_s_s((0x25D0D300L != (safe_unary_minus_func_int16_t_s((l_164 != (void*)0)))), ((l_166 = ((*l_165) = l_140)) == &g_138))) >= (-1L)))))))), 8)) == p_45) | p_46);
            ((void) sizeof ((g_139 == 0) ? 1 : 0), __extension__ ({ if (g_139 == 0) ; else __assert_fail ("g_139 == 0", "/tmp/tmp6hkk_tas.c", 884, __extension__ __PRETTY_FUNCTION__); }));
            ((void) sizeof ((l_166 == &g_138) ? 1 : 0), __extension__ ({ if (l_166 == &g_138) ; else __assert_fail ("l_166 == &g_138", "/tmp/tmp6hkk_tas.c", 885, __extension__ __PRETTY_FUNCTION__); }));
        }
        ((void) sizeof ((l_166 == &g_138 || l_166 == &l_167) ? 1 : 0), __extension__ ({ if (l_166 == &g_138 || l_166 == &l_167) ; else __assert_fail ("l_166 == &g_138 || l_166 == &l_167", "/tmp/tmp6hkk_tas.c", 888, __extension__ __PRETTY_FUNCTION__); }));
    }
    ((void) sizeof ((l_166 == &g_138 || l_166 == &l_167) ? 1 : 0), __extension__ ({ if (l_166 == &g_138 || l_166 == &l_167) ; else __assert_fail ("l_166 == &g_138 || l_166 == &l_167", "/tmp/tmp6hkk_tas.c", 891, __extension__ __PRETTY_FUNCTION__); }));
    return g_39;
}
inline static int32_t * func_48(uint16_t p_49, int16_t p_50, uint8_t * p_51)
{
    uint64_t l_116 = 0UL;
    uint32_t l_123 = 0xFB3884E3L;
    int32_t *l_124 = (void*)0;
    (**g_63) = ((l_116 && ((0xBBL | ((((safe_lshift_func_int16_t_s_s(p_49, l_116)) & l_116) == 5L) < ((safe_lshift_func_int8_t_s_u(((((safe_sub_func_uint64_t_u_u(0UL, g_36)) < (*p_51)) >= 4L) < g_81), l_116)) == l_123))) < 65529UL)) && 0L);
    return l_124;
}
static uint8_t * func_54(int32_t * p_55, int32_t * p_56, uint8_t * p_57, uint8_t * p_58)
{
    int32_t *l_113 = &g_81;
    uint8_t *l_114 = &g_36;
    (*l_113) |= (safe_rshift_func_int16_t_s_s((0x5918CD8B12ACF192LL ^ 1UL), (g_12 <= 65533UL)));
    return l_114;
}
inline static int32_t * func_59(int32_t ** p_60, uint8_t * p_61, uint8_t * p_62)
{
    int32_t *l_65 = &g_39;
    return l_65;
}
static int32_t * func_66(int8_t p_67, int32_t * p_68, int32_t * p_69, uint8_t p_70)
{
    int32_t *l_110 = &g_12;
    (*g_63) = func_59(&g_64, &g_36, &g_36);
    ((void) sizeof ((g_64 == &g_39 || g_64 == &g_2) ? 1 : 0), __extension__ ({ if (g_64 == &g_39 || g_64 == &g_2) ; else __assert_fail ("g_64 == &g_39 || g_64 == &g_2", "/tmp/tmp6hkk_tas.c", 953, __extension__ __PRETTY_FUNCTION__); }));
    return l_110;
}
inline static int32_t * func_71(int64_t p_72, int64_t p_73, int32_t ** p_74, uint64_t p_75, int64_t p_76)
{
    uint8_t *l_79 = &g_36;
    int32_t *l_80 = &g_81;
    int32_t *l_82 = &g_81;
    int32_t *l_83 = &g_81;
    int32_t *l_84 = (void*)0;
    int32_t *l_85 = &g_81;
    int32_t *l_86 = &g_81;
    int32_t *l_87 = &g_81;
    int32_t *l_88 = &g_81;
    int32_t *l_89 = &g_81;
    int32_t *l_90 = &g_81;
    int32_t *l_91 = &g_81;
    int32_t *l_92 = &g_81;
    int32_t *l_93 = (void*)0;
    int32_t *l_94 = &g_81;
    int32_t *l_95 = &g_81;
    int32_t *l_96 = &g_81;
    int32_t *l_97 = &g_81;
    int32_t *l_98 = (void*)0;
    int32_t *l_99 = &g_81;
    int32_t *l_100 = &g_81;
    int32_t *l_101 = &g_81;
    int32_t *l_102 = &g_81;
    int32_t *l_104 = (void*)0;
    (*g_63) = func_59(&g_64, l_79, &g_36);
    ((void) sizeof ((g_64 == &g_39 || g_64 == &g_2) ? 1 : 0), __extension__ ({ if (g_64 == &g_39 || g_64 == &g_2) ; else __assert_fail ("g_64 == &g_39 || g_64 == &g_2", "/tmp/tmp6hkk_tas.c", 993, __extension__ __PRETTY_FUNCTION__); }));
    ++g_105;
    (*l_97) = (safe_rshift_func_uint16_t_u_s((p_74 == (void*)0), 9));
    return l_95;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_2;
    csmith_sink_ = g_5;
    csmith_sink_ = g_12;
    csmith_sink_ = g_15;
    csmith_sink_ = g_36;
    csmith_sink_ = g_39;
    csmith_sink_ = g_81;
    csmith_sink_ = g_103;
    csmith_sink_ = g_105;
    csmith_sink_ = g_142;
    csmith_sink_ = g_151;
    csmith_sink_ = g_169;
    csmith_sink_ = g_175;
    csmith_sink_ = g_177;
    csmith_sink_ = g_237;
    csmith_sink_ = g_271;
    csmith_sink_ = g_287;
    csmith_sink_ = g_288;
    csmith_sink_ = g_294;
    csmith_sink_ = g_307;
    csmith_sink_ = g_309;
    csmith_sink_ = g_374;
    csmith_sink_ = g_528;
    csmith_sink_ = g_628;
    csmith_sink_ = g_665;
    csmith_sink_ = g_667;
    csmith_sink_ = g_727;
    csmith_sink_ = g_760;
    csmith_sink_ = g_885;
    csmith_sink_ = g_922;
    csmith_sink_ = g_955;
    csmith_sink_ = g_1038;
    csmith_sink_ = g_1058;
    csmith_sink_ = g_1063;
    csmith_sink_ = g_1071;
    csmith_sink_ = g_1163;
    csmith_sink_ = g_1218;
    csmith_sink_ = g_1260;
    csmith_sink_ = g_1280;
    csmith_sink_ = g_1336;
    csmith_sink_ = g_1349;
    csmith_sink_ = g_1365;
    csmith_sink_ = g_1371;
    platform_main_end(0,0);
    return 0;
}
