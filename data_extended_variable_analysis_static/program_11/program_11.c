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
static uint32_t g_2 = 2U;
static int32_t g_41 = (-1);
static int32_t g_44 = (-2);
static int32_t g_172 = 0x67C2D953;
static uint8_t g_175 = 0xFE;
static uint32_t g_181 = 0U;
static int32_t g_184 = 0;
static int16_t g_208 = 0x602C;
static int16_t g_210 = (-1);
static int16_t g_212 = 0x114F;
static uint32_t g_213 = 0xA35A1EF9;
static uint16_t g_260 = 4U;
static int8_t g_393 = (-10);
static uint8_t g_437 = 1U;
static int16_t g_440 = 1;
static uint32_t g_441 = 9U;
static uint32_t g_460 = 1U;
static int8_t g_487 = 0xB6;
static int8_t g_674 = 0x40;
static uint16_t g_676 = 65534U;
static uint16_t g_779 = 0x5477;
static int16_t g_804 = 0xADAB;
static int32_t g_805 = 0;
static uint8_t g_806 = 3U;
static int16_t g_837 = 7;
static uint16_t func_1(void);
static int16_t func_20(int32_t p_21, uint32_t p_22, uint16_t p_23);
static uint8_t func_28(uint32_t p_29, int8_t p_30, uint16_t p_31, uint32_t p_32, uint8_t p_33);
static uint32_t func_34(uint8_t p_35);
static int32_t func_53(uint32_t p_54, int8_t p_55, uint16_t p_56, int8_t p_57);
static int32_t func_58(uint32_t p_59, int32_t p_60);
static int32_t func_62(uint32_t p_63, uint32_t p_64);
static int32_t func_71(int32_t p_72, int32_t p_73, uint16_t p_74, int32_t p_75, int8_t p_76);
static uint32_t func_83(uint8_t p_84, int32_t p_85, uint16_t p_86, int16_t p_87, uint8_t p_88);
static int16_t func_111(uint32_t p_112, uint16_t p_113, int32_t p_114, uint32_t p_115);
static uint16_t func_1(void)
{
    int32_t l_3 = 0xF8256A9E;
    int32_t l_4 = 4;
    uint32_t l_12 = 0xA4C924B5;
    int32_t l_906 = 0;
    uint8_t l_907 = 255U;
    g_2 &= 0xCFF0EA75;
    l_4 = l_3;
    l_907 = ((safe_rshift_func_int16_t_s_u(((safe_sub_func_int16_t_s_s(((safe_unary_minus_func_int16_t_s(((safe_rshift_func_uint16_t_u_s(l_4, 14)) < (((g_2 | (((g_2 != l_4) & l_4) != l_12)) | (safe_sub_func_uint8_t_u_u((+g_2), (((safe_lshift_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(func_20((safe_mod_func_int8_t_s_s((((safe_mod_func_uint16_t_u_u(((func_28(func_34(g_2), g_393, g_674, l_12, l_4) > g_393) > l_12), 0x1382)) | l_12) == l_4), g_208)), g_837, l_12), l_906)), 1)) > 0x86) && (-1))))) > 6)))) > 0x34), l_906)) == g_837), 12)) || l_12);
    return l_3;
}
static int16_t func_20(int32_t p_21, uint32_t p_22, uint16_t p_23)
{
    uint32_t l_881 = 1U;
    uint32_t l_886 = 4294967286U;
    g_184 = (safe_sub_func_int16_t_s_s(((((safe_lshift_func_uint16_t_u_s(p_22, (((((((l_881 && (safe_lshift_func_int8_t_s_u(l_881, 3))) >= (((p_22 != g_806) && ((l_881 != (((safe_mod_func_uint16_t_u_u(0x3927, (g_172 || (p_21 > g_181)))) && g_441) != l_886)) >= (-1))) < 0xAC91)) != (-1)) ^ p_23) ^ p_23) < 5U) == l_881))) ^ g_487) != p_23) < l_886), g_674));
    for (p_23 = 0; (p_23 >= 31); p_23++)
    {
        int32_t l_899 = 7;
        for (g_260 = 0; (g_260 > 56); g_260++)
        {
            uint16_t l_891 = 0xC057;
            uint16_t l_894 = 0xC925;
            l_891--;
            l_894 ^= l_886;
        }
        for (g_175 = 0; (g_175 <= 12); g_175++)
        {
            g_184 = p_23;
        }
        p_21 = (safe_add_func_int16_t_s_s(((p_21 > l_899) && ((((g_260 || p_22) == 1U) | (safe_add_func_int8_t_s_s((p_22 <= ((((((((safe_rshift_func_uint8_t_u_u(1U, (p_21 ^ (l_899 ^ (-6))))) > l_886) ^ 0xD2CC59CD) && 0x24D3) || 0x8C) | l_881) || p_21) == g_175)), l_899))) == p_22)), 65531U));
    }
    return p_22;
}
static uint8_t func_28(uint32_t p_29, int8_t p_30, uint16_t p_31, uint32_t p_32, uint8_t p_33)
{
    uint8_t l_797 = 255U;
    int32_t l_800 = 1;
    int32_t l_802 = 0x178339FF;
    int32_t l_809 = 0xED87ED30;
    int32_t l_810 = 0;
    int32_t l_811 = 0xB0700A40;
    int32_t l_814 = (-1);
    int32_t l_815 = 0x4ACEC410;
    int32_t l_874 = 0x323A6671;
    --l_797;
    if (((g_487 >= l_800) ^ g_440))
    {
        int16_t l_801 = 0x7307;
        int32_t l_803 = 0xE1C2398C;
        l_801 = p_29;
        g_806++;
    }
    else
    {
        int32_t l_812 = 0xA3CFD4E7;
        int32_t l_813 = 0x7129BBD2;
        int32_t l_816 = 1;
        uint32_t l_817 = 0x46EC1913;
        int32_t l_840 = (-6);
        l_817--;
        for (g_175 = 0; (g_175 < 11); ++g_175)
        {
            uint8_t l_824 = 0x46;
            int32_t l_870 = 1;
            uint16_t l_873 = 0xBB95;
            l_802 &= ((((safe_rshift_func_uint8_t_u_s((p_31 == (g_674 != l_824)), (l_811 > 0xEE3DA583))) == p_29) <= p_32) == (((safe_sub_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((((g_779 & (safe_add_func_uint32_t_u_u(((0x689A | 0x36EA) && l_810), p_30))) && l_810) ^ g_460), l_824)), g_805)) & 0xC9AC) <= p_31));
            for (l_816 = 0; (l_816 > (-27)); l_816 = safe_sub_func_uint8_t_u_u(l_816, 2))
            {
                uint16_t l_860 = 0x5B92;
                l_813 = (safe_rshift_func_uint16_t_u_s(0x1A2F, (g_437 < (g_804 > 7))));
                g_41 = ((((safe_sub_func_uint32_t_u_u(0xC02D3E01, g_837)) <= (((safe_sub_func_int8_t_s_s(l_840, g_393)) != 0U) | (safe_lshift_func_uint16_t_u_u(65535U, (((((safe_unary_minus_func_int32_t_s((safe_add_func_int8_t_s_s((((((safe_sub_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(((p_33 > 0x5810) != (safe_rshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(((((safe_lshift_func_uint16_t_u_s((1U ^ l_812), l_812)) ^ g_779) != 0) && g_460), p_30)), 0)), l_802)), l_817))), 0x4D)), 2)) && p_30) ^ l_860) != g_212) && 0x1A88), l_860)))) | l_860) > p_29) == p_30) <= g_184))))) < l_800) != 9U);
                l_809 = (4294967292U >= (+((safe_sub_func_int8_t_s_s((+((safe_rshift_func_uint8_t_u_u(l_824, (((safe_unary_minus_func_int16_t_s(((((safe_rshift_func_int8_t_s_u(((-1) < (((g_441 & ((((l_870 == (-10)) >= (safe_sub_func_uint16_t_u_u(p_33, l_873))) & (p_32 && p_30)) ^ l_860)) && g_676) <= p_31)), g_440)) >= l_809) & p_33) != p_33))) <= g_440) || l_860))) ^ l_874)), g_2)) > 0x067B)));
                g_805 = (safe_rshift_func_int16_t_s_u(l_860, 6));
            }
        }
    }
    return p_33;
}
static uint32_t func_34(uint8_t p_35)
{
    uint32_t l_69 = 1U;
    int32_t l_764 = (-8);
    int32_t l_775 = 0;
    int32_t l_776 = 6;
    int32_t l_777 = (-5);
    int32_t l_778 = (-1);
    int16_t l_795 = 0xF5AB;
    uint16_t l_796 = 0U;
    for (p_35 = 18; (p_35 >= 28); ++p_35)
    {
        int32_t l_38 = 0xE149CFF2;
        l_38 &= 0xC4EB0A11;
    }
    for (p_35 = 0; (p_35 >= 15); p_35++)
    {
        uint16_t l_47 = 0xCD6B;
        int16_t l_706 = 0xA1DB;
        for (g_41 = 0; (g_41 <= (-22)); g_41 = safe_sub_func_uint32_t_u_u(g_41, 1))
        {
            int32_t l_77 = 0;
            uint8_t l_82 = 0U;
            int32_t l_774 = (-3);
            for (g_44 = 25; (g_44 >= 27); ++g_44)
            {
                int32_t l_50 = 0;
                int32_t l_687 = 0xAD30C9E9;
                l_47 = (p_35 > g_41);
                for (l_47 = 11; (l_47 >= 39); l_47 = safe_add_func_uint32_t_u_u(l_47, 7))
                {
                    uint32_t l_51 = 0x80735653;
                    int32_t l_52 = (-1);
                    l_50 = 0x3C12D493;
                    l_52 = l_51;
                    if (p_35)
                        continue;
                }
                l_687 = func_53(p_35, (0x9D376396 && func_58((+(func_62((safe_rshift_func_uint16_t_u_s((safe_sub_func_int32_t_s_s(l_47, l_69)), (~(func_71((l_77 >= g_2), p_35, (safe_sub_func_int16_t_s_s(((safe_rshift_func_int8_t_s_s((2U < l_82), p_35)) > (-1)), 65535U)), g_44, p_35) >= g_2)))), l_69) <= p_35)), p_35)), g_44, g_44);
            }
            g_184 &= p_35;
            if ((((g_175 < ((((safe_add_func_uint32_t_u_u(g_181, ((g_2 >= ((((255U || ((safe_rshift_func_int8_t_s_u(l_82, 5)) != (~(0xAE <= ((safe_sub_func_uint32_t_u_u(2U, ((g_208 || (safe_unary_minus_func_uint16_t_u((safe_add_func_int32_t_s_s((safe_rshift_func_int8_t_s_u(((((safe_rshift_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(((((safe_add_func_int32_t_s_s(l_69, g_41)) == p_35) != (-1)) != 0xCAD9423A), 0)), 6)) == p_35) >= 0x7AC9) | p_35), 7)), p_35))))) || p_35))) | p_35))))) & l_69) < l_706) ^ p_35)) >= l_69))) & l_82) && (-5)) < p_35)) > 6) > 0x65BA99D9))
            {
                int32_t l_731 = 0;
                int16_t l_732 = 0x5A14;
                l_731 = ((safe_rshift_func_int16_t_s_s((((safe_lshift_func_uint16_t_u_s(((safe_mod_func_int16_t_s_s(0xEF32, (safe_sub_func_int32_t_s_s((safe_sub_func_uint8_t_u_u(((safe_add_func_int32_t_s_s((((p_35 != (safe_add_func_int16_t_s_s((-5), (safe_rshift_func_int16_t_s_s((safe_add_func_int16_t_s_s(((-1) >= l_69), 0xEC57)), (((safe_sub_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(((p_35 >= (safe_sub_func_uint16_t_u_u(p_35, 0x6193))) ^ l_731), 0)), 0x81F3)) <= 0x69) | l_69)))))) != g_441) | l_731), g_437)) ^ p_35), l_731)), l_731)))) != p_35), g_674)) | g_460) >= l_732), p_35)) >= g_393);
            }
            else
            {
                int32_t l_733 = 0;
                return l_733;
            }
            if (((((((safe_mod_func_uint16_t_u_u(((-1) | ((safe_sub_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(l_69, (~0xA2))), (g_676 && ((g_393 > ((g_184 ^ ((1 <= (safe_sub_func_uint8_t_u_u((safe_add_func_int16_t_s_s(((safe_unary_minus_func_int8_t_s((g_208 || (l_69 <= l_82)))) ^ 8), 0xB70D)), 0x47))) && g_44)) && 0x59)) >= l_69)))) ^ p_35)), l_706)) != p_35) > l_82) >= 0xBCFEC69B) == 5U) & p_35))
            {
                uint32_t l_763 = 0xF9493EB3;
                g_44 = l_82;
                l_764 = (!((1U | 0x6E1231F7) | ((safe_add_func_int8_t_s_s(0x02, (((safe_sub_func_int8_t_s_s((safe_add_func_int16_t_s_s((((+6) | ((0x1CB0 < p_35) <= ((safe_mod_func_int16_t_s_s((((!(((safe_sub_func_int16_t_s_s((l_47 != 255U), (safe_mod_func_uint32_t_u_u(l_69, l_82)))) > 0x086F864A) < 0x71183803)) & l_77) && l_77), 1)) ^ l_763))) && g_674), (-1))), 0x23)) ^ 0x7CB92451) && 0x58))) >= 4294967295U)));
                if (p_35)
                {
                    uint16_t l_767 = 0U;
                    int32_t l_768 = (-8);
                    l_768 |= (safe_rshift_func_uint8_t_u_s(l_767, 4));
                }
                else
                {
                    int32_t l_773 = 0xC6642B09;
                    g_184 = (safe_lshift_func_int8_t_s_u((((((p_35 ^ g_260) < (((-1) >= ((g_212 | (((l_764 >= ((0 >= (3U | ((((p_35 ^ g_260) >= l_77) ^ 7) == 1U))) && l_773)) == 1U) <= l_82)) >= 255U)) >= 7)) ^ l_764) && g_2) && g_184), 1));
                    l_773 &= (p_35 || l_47);
                }
            }
            else
            {
                if (l_774)
                    break;
                g_184 = l_774;
            }
        }
        return p_35;
    }
    g_779--;
    g_44 |= (safe_add_func_uint32_t_u_u((((((safe_rshift_func_uint8_t_u_s(g_437, 3)) | ((65535U && l_764) > (((0x02BA7AAB | (safe_sub_func_int16_t_s_s((255U >= (((((safe_add_func_uint16_t_u_u((((+(((p_35 > 4294967292U) & (safe_add_func_uint8_t_u_u(p_35, ((l_778 <= p_35) && g_213)))) || p_35)) == p_35) ^ p_35), 0x366D)) | 1U) && l_777) > 0xD8) < g_2)), l_777))) || 0) < 0x30D67B93))) < p_35) == 6U) & l_795), g_460));
    return l_796;
}
static int32_t func_53(uint32_t p_54, int8_t p_55, uint16_t p_56, int8_t p_57)
{
    return g_175;
}
static int32_t func_58(uint32_t p_59, int32_t p_60)
{
    uint8_t l_255 = 0x87;
    int32_t l_258 = 0xA2211D25;
    int32_t l_259 = 0xDF401086;
    uint32_t l_296 = 0x8D7D704A;
    uint16_t l_341 = 0xBEE5;
    uint32_t l_554 = 0x0AFAAC58;
    p_60 = l_255;
    for (g_213 = 28; (g_213 != 55); g_213++)
    {
        return g_44;
    }
    g_260--;
    if ((safe_add_func_int32_t_s_s(((safe_lshift_func_int8_t_s_s(0xD7, 5)) == (safe_mod_func_int8_t_s_s((((0xA72B <= (safe_lshift_func_int16_t_s_u(g_208, 6))) > (((safe_add_func_int32_t_s_s((safe_rshift_func_int16_t_s_u(0x069B, (~p_59))), ((safe_sub_func_uint32_t_u_u((((safe_add_func_uint8_t_u_u((safe_add_func_int8_t_s_s(p_60, g_2)), (((((safe_lshift_func_int16_t_s_s(((-1) && (g_44 >= p_59)), p_59)) & l_259) & p_59) >= 0x757C) < p_60))) >= 0x365D8EA3) >= 1), p_59)) < g_175))) >= 0x5BDECA5B) <= 1U)) && p_59), g_210))), 0xF467C7D0)))
    {
        int32_t l_290 = (-1);
        int32_t l_332 = 0xCD0D6B2C;
        uint16_t l_368 = 0x9DA1;
        int32_t l_369 = 0x30FC9DB4;
        uint32_t l_395 = 7U;
        int8_t l_434 = 0x06;
        int8_t l_526 = (-4);
        uint8_t l_577 = 0xB7;
        g_184 ^= p_60;
        if ((safe_lshift_func_uint16_t_u_s((safe_sub_func_uint16_t_u_u(((safe_sub_func_uint32_t_u_u(p_60, ((l_290 != l_255) != ((safe_mod_func_uint16_t_u_u(l_290, (safe_rshift_func_int8_t_s_s((p_59 < (g_208 || ((safe_unary_minus_func_uint8_t_u(((-1) != l_296))) > ((safe_add_func_uint8_t_u_u((0xC0D40F6A == g_2), g_175)) | l_290)))), l_258)))) >= 0xE7)))) & 0xB1D573E2), g_208)), 2)))
        {
            uint32_t l_315 = 0U;
            int32_t l_320 = (-7);
            int32_t l_327 = 0x68FBE2EC;
            uint32_t l_335 = 0xB04D1588;
            for (p_60 = 22; (p_60 > (-6)); p_60 = safe_sub_func_int16_t_s_s(p_60, 1))
            {
                uint32_t l_301 = 4294967287U;
                l_301 ^= (252U ^ (l_255 > 0xB010));
                for (p_59 = (-3); (p_59 <= 60); p_59 = safe_add_func_int8_t_s_s(p_59, 4))
                {
                    uint8_t l_336 = 1U;
                    l_320 = ((~(((g_44 & (safe_sub_func_int16_t_s_s((65530U != ((safe_sub_func_uint16_t_u_u(0U, (safe_add_func_uint16_t_u_u(p_60, ((safe_lshift_func_int16_t_s_s(p_59, (safe_add_func_int32_t_s_s(l_315, (-1))))) < (((((safe_sub_func_int32_t_s_s((((safe_add_func_uint16_t_u_u(((l_315 != ((l_290 || (-6)) ^ g_181)) | 0x3A), g_44)) && l_301) <= g_41), p_59)) ^ p_60) ^ p_59) && 2U) & p_59)))))) <= 0U)), 4))) >= g_41) < l_258)) > 0U);
                    l_332 = (p_60 | (safe_rshift_func_uint16_t_u_u(((safe_sub_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u(p_59, p_60)), 0xC580)) | (((l_327 || ((l_315 && (((safe_add_func_int16_t_s_s((0x4AA51502 && (-10)), (safe_sub_func_int8_t_s_s(l_315, (-10))))) & g_2) >= g_2)) <= l_290)) | 0) & 4294967295U)), 9)));
                    l_336 ^= (p_59 & (safe_sub_func_int8_t_s_s(l_335, g_44)));
                    l_259 = (l_296 && (safe_add_func_uint32_t_u_u((p_59 ^ 0x68), (g_2 == p_60))));
                }
                return l_335;
            }
        }
        else
        {
            int32_t l_394 = 0xADFF8256;
            int16_t l_396 = 4;
            uint16_t l_397 = 0U;
            int32_t l_436 = (-6);
            g_184 = (safe_rshift_func_uint16_t_u_u((((l_341 <= (g_208 >= (4U & ((p_59 > (safe_add_func_uint16_t_u_u(g_172, (((0x98E8 == (safe_sub_func_uint16_t_u_u((g_260 ^ g_41), (safe_rshift_func_uint8_t_u_u(p_60, 3))))) <= p_59) & 0x2622)))) >= g_208)))) >= g_44) <= g_184), 15));
            l_369 |= ((safe_add_func_uint16_t_u_u((((safe_lshift_func_uint8_t_u_u(p_59, 1)) | (safe_add_func_int32_t_s_s((l_296 ^ 255U), 0xBE9AB393))) ^ ((p_60 >= (l_332 || (safe_sub_func_int32_t_s_s((safe_sub_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((((safe_add_func_int8_t_s_s((((safe_rshift_func_uint8_t_u_u(9U, ((safe_mod_func_uint16_t_u_u((g_172 >= (((safe_lshift_func_int8_t_s_s(((((0U ^ 0x96) | 0) >= 1) > g_212), p_59)) < l_259) == g_212)), 0xA128)) == g_181))) >= g_181) || l_368), p_60)) && g_208) <= 0U), 11)), l_290)), g_2)))) && l_341)), (-9))) == g_212);
            for (p_60 = 0; (p_60 == (-29)); p_60 = safe_sub_func_uint16_t_u_u(p_60, 6))
            {
                int16_t l_416 = 0x5B2F;
                uint16_t l_419 = 0xD159;
                uint16_t l_420 = 65535U;
                uint8_t l_470 = 0xAD;
                int32_t l_481 = (-1);
                int8_t l_484 = 0xFF;
                l_258 ^= ((0x5076 >= (((safe_add_func_uint16_t_u_u((((safe_lshift_func_int16_t_s_s(((((safe_sub_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(((safe_mod_func_int16_t_s_s((g_175 ^ ((((safe_lshift_func_uint16_t_u_u(1U, 14)) <= ((((g_184 <= ((((l_255 | (!(p_59 < ((safe_lshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_s(l_369, (safe_mod_func_int32_t_s_s((((((((((p_60 > ((safe_add_func_int16_t_s_s(g_393, 0x04B4)) >= l_255)) != p_60) || g_260) != l_394) >= g_175) >= p_60) ^ 0x5540F05B) && p_59) != l_369), 1U)))), 5)) == g_181)))) & p_60) == 65535U) && p_60)) >= l_394) <= g_181) && l_341)) & 5) && g_213)), 65535U)) < g_2), 4294967287U)), l_395)) && l_332) <= 0x4D) >= 248U), g_208)) > l_290) ^ 0x3082), p_59)) | 1) <= 65529U)) < 0x00);
                l_258 = ((((l_396 && (p_59 | ((l_397 > g_260) && (((safe_lshift_func_int16_t_s_u((((safe_sub_func_int8_t_s_s(((safe_sub_func_int32_t_s_s(((safe_rshift_func_uint8_t_u_u((((safe_sub_func_uint16_t_u_u((safe_mod_func_int16_t_s_s(0x39C4, ((safe_add_func_uint16_t_u_u(((safe_sub_func_int16_t_s_s(((safe_rshift_func_int16_t_s_u((p_60 ^ 3), l_416)) > ((safe_rshift_func_uint8_t_u_u(0x59, p_59)) ^ (-10))), l_419)) < l_420), (-1))) | p_60))), g_213)) || g_393) != g_184), 4)) && g_184), l_396)) != p_59), g_393)) && g_260) != l_394), l_419)) >= l_332) || 0x1BB593A6)))) != (-1)) >= g_184) == 4294967295U);
                for (g_184 = 29; (g_184 < (-25)); g_184 = safe_sub_func_uint32_t_u_u(g_184, 7))
                {
                    int32_t l_435 = 0xD6ED3673;
                    uint32_t l_465 = 0xA5CE5B98;
                    if ((safe_mod_func_uint32_t_u_u((0x1011 < ((safe_add_func_int16_t_s_s((((((((safe_rshift_func_uint8_t_u_u((safe_unary_minus_func_uint16_t_u(g_44)), (((0xDF9D > 0x9705) >= ((((((p_60 != (safe_add_func_uint32_t_u_u((0 | 0x07), ((p_59 >= (safe_add_func_uint8_t_u_u(l_434, g_184))) == 0U)))) > g_172) <= 0xE90C) > l_435) && 0xE241) >= (-1))) < (-1)))) ^ g_175) <= 65535U) <= (-3)) & g_2) | 0x37) < 0), p_59)) | p_60)), 2U)))
                    {
                        l_436 = (-1);
                    }
                    else
                    {
                        int32_t l_459 = 0x30380A52;
                        g_437--;
                        g_440 = 0x5E94A68F;
                        g_441 = p_60;
                        g_460 = (safe_lshift_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(((l_435 < (safe_mod_func_int8_t_s_s(((safe_unary_minus_func_uint8_t_u((p_60 && 0U))) == (((safe_lshift_func_uint8_t_u_s(0xB3, ((((((1U & ((safe_mod_func_int16_t_s_s((0x35 != (safe_sub_func_uint32_t_u_u(l_255, (g_2 && ((g_41 < l_435) && p_60))))), p_59)) != l_459)) > g_440) ^ l_290) && g_172) >= g_44) ^ g_181))) ^ 0) ^ 0U)), p_60))) <= p_60), g_172)), 0x0C)), 12));
                    }
                    l_481 = ((((((safe_lshift_func_uint8_t_u_u(l_416, (safe_rshift_func_uint8_t_u_s(8U, 5)))) && (l_465 == (safe_sub_func_int16_t_s_s(((((safe_add_func_int8_t_s_s(p_59, l_470)) < (safe_mod_func_uint8_t_u_u(((safe_sub_func_int16_t_s_s(((l_434 && (safe_rshift_func_int16_t_s_u(((safe_rshift_func_uint16_t_u_u((p_60 && (g_208 && ((~(+g_181)) == g_210))), 1)) != 0x54), 15))) != 0x9AEA817F), p_59)) ^ l_368), g_181))) & p_60) ^ p_60), p_60)))) && 0U) ^ 0xBB85) & 0x9B) != (-7));
                    g_487 ^= (((safe_rshift_func_uint16_t_u_s(l_259, ((((6U | (l_465 != (l_484 | 0U))) < (0x77 < (~((0 <= (+7U)) && ((p_59 >= l_434) & g_41))))) || 65535U) || 4294967295U))) != 0x88) | g_181);
                }
            }
            l_332 = (1 != ((!((((safe_add_func_uint8_t_u_u((7U && (((safe_sub_func_int8_t_s_s(((~((4294967292U || p_59) == g_437)) | (safe_sub_func_uint32_t_u_u(7U, (safe_sub_func_int8_t_s_s(l_369, (~(g_175 >= (safe_add_func_uint32_t_u_u((safe_add_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(((safe_lshift_func_uint8_t_u_u(1U, 7)) & l_255), p_60)), p_59)), 0x12B43228))))))))), l_394)) & g_210) >= g_441)), g_260)) != 0x9F) != p_59) >= l_255)) ^ g_487));
        }
        if (((safe_add_func_uint32_t_u_u((safe_add_func_int8_t_s_s((((safe_rshift_func_uint8_t_u_u(((safe_mod_func_int16_t_s_s(p_59, p_59)) & (g_2 == g_393)), ((((g_208 == (safe_add_func_int16_t_s_s(g_172, (safe_rshift_func_uint16_t_u_u(((((!(safe_add_func_uint16_t_u_u(g_460, (1 == (+((safe_unary_minus_func_uint8_t_u((safe_add_func_uint32_t_u_u(0U, g_210)))) & 0x53)))))) <= p_60) && p_60) < l_258), 11))))) >= g_437) != l_259) ^ (-3)))) && l_526) == 1), (-7))), p_60)) > (-1)))
        {
            int32_t l_534 = 0x4D6B0D7B;
            uint32_t l_544 = 0U;
            uint16_t l_566 = 65533U;
            int32_t l_594 = 0xF9E5B101;
            g_184 |= (p_60 ^ g_260);
            for (g_260 = 0; (g_260 < 22); g_260 = safe_add_func_int8_t_s_s(g_260, 4))
            {
                uint16_t l_539 = 0U;
                int8_t l_576 = (-9);
                for (l_258 = 0; (l_258 <= 18); l_258 = safe_add_func_uint16_t_u_u(l_258, 8))
                {
                    uint32_t l_531 = 0x4E1D5794;
                    if (l_531)
                        break;
                    if ((0x50 != ((safe_sub_func_int8_t_s_s((p_59 == g_441), l_534)) || (((safe_mod_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(((l_539 <= 0x81675217) >= (((safe_mod_func_uint32_t_u_u((p_60 < 4294967294U), (safe_mod_func_int8_t_s_s(g_393, l_341)))) <= 0x1658) && 7U)), p_60)), g_440)) && l_544) >= p_60))))
                    {
                        uint16_t l_547 = 0x0E3D;
                        int32_t l_565 = 0x4B93AC51;
                        g_184 = (((6 >= (0xF3D9 == (((safe_add_func_int16_t_s_s(l_544, ((p_60 && l_547) && ((!(((safe_sub_func_int32_t_s_s(l_534, (!(l_259 | (g_212 >= (p_60 < p_60)))))) >= g_44) ^ 0x4D)) ^ p_59)))) ^ (-1)) | l_395))) || 0xAF88) & l_539);
                        l_554 = (safe_rshift_func_uint8_t_u_s(g_460, l_434));
                        g_184 = (safe_rshift_func_uint8_t_u_s((p_60 != (safe_lshift_func_uint8_t_u_s(l_395, ((0xAE7E >= (((p_59 || (safe_lshift_func_uint8_t_u_s((((((0xDBA9 & ((safe_add_func_uint32_t_u_u((((((safe_add_func_uint8_t_u_u((p_60 > 0x75), (((0 ^ g_181) == l_565) > p_59))) > l_566) >= p_60) && g_210) > 0xF67B714C), l_566)) == g_213)) & g_437) ^ (-1)) || 0xCA0DB158) > p_60), p_60))) > g_184) || l_531)) < g_440)))), 5));
                        if (g_44)
                            continue;
                    }
                    else
                    {
                        uint8_t l_571 = 0U;
                        g_184 = 1;
                        l_259 = (safe_mod_func_uint16_t_u_u((l_531 & ((safe_rshift_func_uint8_t_u_s(p_60, ((p_60 && (l_571 >= l_531)) == (p_60 || ((((safe_sub_func_uint8_t_u_u(l_576, ((g_208 > l_296) && l_577))) < p_59) || p_59) == g_212))))) != l_296)), 3));
                    }
                    l_534 = p_60;
                    l_594 &= (safe_sub_func_int16_t_s_s(((((safe_mod_func_uint32_t_u_u(((safe_lshift_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_s(((safe_rshift_func_uint16_t_u_u(((-1) ^ (safe_lshift_func_int8_t_s_s(p_59, ((1 & 0x35) <= g_175)))), ((safe_sub_func_int32_t_s_s(p_59, p_59)) ^ 0xAD))) | (safe_rshift_func_int16_t_s_u(l_296, g_393))), p_59)) || p_59), p_59)) == g_260), 0x7D1F2434)) | g_44) != 0U) > p_60), l_534));
                }
            }
        }
        else
        {
            int32_t l_602 = 0x484886A2;
            p_60 = (safe_add_func_uint8_t_u_u((g_437 ^ (safe_sub_func_uint16_t_u_u(((p_59 < 0xAD) <= (((0xB959 || (0xA7AA6315 > (g_440 ^ ((p_60 != (safe_unary_minus_func_uint8_t_u(0U))) < (safe_add_func_int16_t_s_s(p_60, l_526)))))) && l_602) != g_440)), g_175))), g_181));
        }
        g_184 = (-1);
    }
    else
    {
        int32_t l_603 = 0x4AA0D40F;
        int32_t l_626 = 0xEAFDA283;
        g_184 = (l_603 & (g_181 ^ (safe_sub_func_int8_t_s_s(g_208, (safe_lshift_func_uint8_t_u_s((0x3703 == (safe_sub_func_int32_t_s_s(g_2, (((0xE499 <= (safe_mod_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(((safe_sub_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((safe_sub_func_int8_t_s_s((-1), (safe_add_func_int8_t_s_s(p_59, ((safe_sub_func_uint16_t_u_u(((((safe_mod_func_uint32_t_u_u(g_441, p_60)) && 7) < g_460) < p_60), p_60)) & l_626))))), 0x256F05E9)), l_255)) || g_41), g_175)), 0x5B))) ^ g_208) <= g_460)))), l_258))))));
        if ((((p_60 | g_260) & (safe_unary_minus_func_uint32_t_u((~(-5))))) <= ((((g_441 < ((-5) == p_60)) && (g_393 >= ((0xC1 && g_437) && g_184))) & p_60) > 65535U)))
        {
            int32_t l_629 = 0x835956C4;
            l_629 &= (-2);
            p_60 ^= 0xBA36871C;
            for (l_626 = (-14); (l_626 < 10); l_626++)
            {
                uint32_t l_640 = 0x6DBF31B7;
                int32_t l_646 = 0x43605614;
                int32_t l_650 = 5;
                l_646 |= (safe_sub_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u(5U, (safe_lshift_func_uint16_t_u_u((255U >= ((safe_add_func_uint16_t_u_u(l_640, ((safe_mod_func_uint16_t_u_u((((((65530U || p_59) < 1) < (safe_unary_minus_func_int32_t_s(((safe_sub_func_int16_t_s_s(((((p_59 | (l_255 != ((((((-1) >= l_603) != g_172) != l_554) >= 0x02) ^ p_59))) == 0) >= l_603) || l_640), g_437)) || l_259)))) & 0) ^ (-1)), p_59)) < p_60))) <= 0x01)), l_603)))), p_60));
                g_184 |= (~(p_60 > (safe_add_func_uint8_t_u_u(((l_650 ^ 0x24B5A779) == (safe_sub_func_uint32_t_u_u((p_60 ^ l_640), (safe_rshift_func_int16_t_s_s((((((0xFCD12149 >= (safe_sub_func_uint8_t_u_u(0x86, g_393))) <= (l_603 | l_629)) > 1U) == 4U) & 1), g_460))))), 0xE0))));
            }
        }
        else
        {
            int8_t l_662 = 0x4B;
            int32_t l_675 = 0x9BACFFE4;
            for (g_212 = 28; (g_212 != (-24)); g_212 = safe_sub_func_int16_t_s_s(g_212, 2))
            {
                l_662 = (~(safe_add_func_int16_t_s_s(g_441, p_59)));
            }
            l_258 = (!(((safe_add_func_int8_t_s_s(l_296, g_260)) && (((safe_add_func_int8_t_s_s((((((0x44 >= (0xA7 >= (l_662 < 1U))) & (safe_add_func_uint32_t_u_u(0x017B7A4F, 4294967293U))) <= (safe_rshift_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u(0U, 0x70)), 2))) >= l_554) == p_60), 0xC6)) && 0x5A64) || p_60)) > l_341));
            g_676--;
            l_675 |= g_2;
        }
        g_184 = (((((p_60 ^ p_60) >= (!p_59)) <= (+(65535U | (safe_add_func_uint8_t_u_u(((l_554 & (p_59 | g_674)) < (safe_lshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_u((((((p_60 && (((0xBF == 0) | l_626) > l_255)) >= g_674) <= 0xDC) <= p_59) | 0x9B), 7)), 6))), 0))))) > p_59) & l_341);
    }
    return g_2;
}
static int32_t func_62(uint32_t p_63, uint32_t p_64)
{
    int32_t l_191 = 1;
    int32_t l_211 = 0x4F0C1114;
    g_181 ^= (-1);
    for (g_172 = 6; (g_172 >= (-14)); g_172 = safe_sub_func_uint16_t_u_u(g_172, 3))
    {
        g_184 = p_64;
        return p_64;
    }
    for (g_181 = (-17); (g_181 >= 32); g_181 = safe_add_func_int32_t_s_s(g_181, 2))
    {
        int8_t l_192 = 0;
        int32_t l_209 = 1;
        if (((p_63 == ((safe_sub_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(l_191, g_41)), l_192)) && (safe_lshift_func_int16_t_s_s(l_191, (+8U))))) & (safe_mod_func_int32_t_s_s((safe_sub_func_int16_t_s_s(((safe_sub_func_int8_t_s_s(((safe_add_func_int16_t_s_s((((p_64 > l_191) && (safe_add_func_uint32_t_u_u((l_192 & 1), g_172))) > p_63), g_41)) >= g_172), g_184)) >= p_64), g_2)), p_63))))
        {
            g_184 = (0x7E7A5B98 || ((0xFAA6 == 0x172F) & (safe_add_func_int8_t_s_s((l_192 || 3U), (p_64 & p_63)))));
            g_184 &= (1U == p_63);
            if (g_44)
                break;
        }
        else
        {
            uint32_t l_216 = 9U;
            ++g_213;
            l_216++;
            l_209 = (((safe_add_func_uint16_t_u_u(0xC26E, (p_63 ^ (0x08B9 >= (safe_lshift_func_uint16_t_u_s(l_216, (safe_sub_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(l_209, (l_192 >= (safe_sub_func_uint16_t_u_u(4U, ((((((65531U < l_192) | 0xF12706A3) & p_63) < 253U) >= l_192) | p_63)))))), 0x97)))))))) & 0xDC1848BC) > g_2);
        }
        l_209 = 0x2754ED04;
    }
    l_211 = ((safe_mod_func_int16_t_s_s(((g_175 | (safe_add_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s((safe_sub_func_uint32_t_u_u((safe_sub_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((0x44 ^ (safe_add_func_int32_t_s_s((safe_lshift_func_int8_t_s_u(l_191, 0)), p_63))), 5)), (p_63 != (safe_mod_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(p_63, (((!(safe_unary_minus_func_int8_t_s((((safe_mod_func_int16_t_s_s((((-4) >= p_64) && ((255U >= g_212) >= (-1))), l_191)) || 5U) | g_210)))) | l_211) < p_64))), 0xC3A4))))), 1)), 7)), g_210)) | 0xD9091441), g_44))) | 65527U), 65526U)) && 0U);
    return l_211;
}
static int32_t func_71(int32_t p_72, int32_t p_73, uint16_t p_74, int32_t p_75, int8_t p_76)
{
    int32_t l_89 = 0;
    int16_t l_102 = 0xF1D3;
    int16_t l_103 = 9;
    int8_t l_179 = 0;
    uint32_t l_180 = 0xEE60D347;
    p_73 |= (func_83(l_89, p_72, (safe_mod_func_uint16_t_u_u((p_75 & g_2), (safe_sub_func_int16_t_s_s(p_72, (0x88 < (safe_sub_func_int16_t_s_s((safe_add_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_u(1U, l_102)), p_75)), l_102)), 0xA247))))))), g_2, l_103) & p_75);
    l_179 ^= 1;
    p_73 ^= l_180;
    return g_175;
}
static uint32_t func_83(uint8_t p_84, int32_t p_85, uint16_t p_86, int16_t p_87, uint8_t p_88)
{
    int32_t l_107 = (-1);
    int32_t l_108 = 1;
    int32_t l_178 = 0;
    for (p_87 = 0; (p_87 < 21); p_87 = safe_add_func_int8_t_s_s(p_87, 6))
    {
        uint16_t l_106 = 0xAAE8;
        l_106 &= p_84;
    }
    l_108 = (0x0AA0 > l_107);
    l_178 |= ((safe_rshift_func_int16_t_s_u(func_111(g_41, p_88, g_44, (safe_rshift_func_int16_t_s_u(((safe_unary_minus_func_uint8_t_u(g_2)) != (g_41 < (((safe_lshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_s(((safe_mod_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(((((((safe_rshift_func_int16_t_s_s((l_107 | (safe_rshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(p_85, (l_107 && p_84))), p_86))), g_2)) & g_2) < 0x34) & 0x8EBACA85) == p_88) <= l_108), g_44)), l_108)) != 0x177E56D7), l_108)), 7)) & p_87) != 8U))), 14))), 10)) <= 255U);
    return p_87;
}
static int16_t func_111(uint32_t p_112, uint16_t p_113, int32_t p_114, uint32_t p_115)
{
    uint32_t l_152 = 0xE548C151;
    int32_t l_173 = (-1);
    for (p_112 = 0; (p_112 == 22); p_112++)
    {
        uint32_t l_165 = 0x3A7432CF;
        int8_t l_168 = 0xBF;
        int32_t l_169 = 1;
        l_169 = (safe_mod_func_int32_t_s_s((0x12 <= ((((safe_rshift_func_int16_t_s_u((safe_add_func_int8_t_s_s(((safe_add_func_uint8_t_u_u((safe_mod_func_int32_t_s_s((+(safe_rshift_func_uint16_t_u_s((0x816D >= (safe_rshift_func_uint8_t_u_u(g_44, (safe_sub_func_int32_t_s_s(l_152, (safe_rshift_func_uint8_t_u_s(0x73, (safe_rshift_func_int8_t_s_u((g_41 && (safe_sub_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((((safe_mod_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u((0x88 & l_165), 0)), (((safe_sub_func_int16_t_s_s(l_165, g_41)) != l_152) && p_114))) == l_152) >= 65535U), g_44)), (-1)))), g_2))))))))), g_2))), l_152)), 0x2C)) == 6U), g_44)), l_168)) != l_165) != l_168) == 0U)), l_165));
    }
    for (p_113 = 0; (p_113 > 2); ++p_113)
    {
        int32_t l_174 = 0;
        g_172 = 0x1577CD18;
        g_175++;
        return l_174;
    }
    return l_152;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_2;
    csmith_sink_ = g_41;
    csmith_sink_ = g_44;
    csmith_sink_ = g_172;
    csmith_sink_ = g_175;
    csmith_sink_ = g_181;
    csmith_sink_ = g_184;
    csmith_sink_ = g_208;
    csmith_sink_ = g_210;
    csmith_sink_ = g_212;
    csmith_sink_ = g_213;
    csmith_sink_ = g_260;
    csmith_sink_ = g_393;
    csmith_sink_ = g_437;
    csmith_sink_ = g_440;
    csmith_sink_ = g_441;
    csmith_sink_ = g_460;
    csmith_sink_ = g_487;
    csmith_sink_ = g_674;
    csmith_sink_ = g_676;
    csmith_sink_ = g_779;
    csmith_sink_ = g_804;
    csmith_sink_ = g_805;
    csmith_sink_ = g_806;
    csmith_sink_ = g_837;
    platform_main_end(0,0);
    return 0;
}
