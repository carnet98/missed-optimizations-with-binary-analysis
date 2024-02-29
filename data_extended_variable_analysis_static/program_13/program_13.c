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
static const int32_t g_10 = 0;
static const int32_t *g_9 = &g_10;
static int32_t g_14 = 0xFF14EB4C;
static int16_t g_29 = 0x96A5;
static int16_t g_59 = 0x1EC6;
static int32_t g_77 = 0x34ECA669;
static uint16_t g_87 = 65527U;
static uint16_t *g_97 = (void*)0;
static uint32_t g_99 = 4294967295U;
static uint16_t g_107 = 0x987E;
static const int32_t *g_109 = &g_10;
static const int32_t **g_108 = &g_109;
static int16_t *g_142 = (void*)0;
static int32_t *g_148 = &g_14;
static int16_t g_198 = 0;
static const uint32_t *g_235 = &g_99;
static const uint32_t **g_234 = &g_235;
static uint8_t g_246 = 4U;
static int8_t g_307 = 0x69;
static int32_t * const *** const g_312 = (void*)0;
static int8_t g_344 = 0;
static int8_t *g_343 = &g_344;
static int16_t **g_372 = &g_142;
static uint32_t **g_381 = (void*)0;
static uint32_t ***g_380 = &g_381;
static uint32_t ****g_379 = &g_380;
static uint8_t *g_502 = &g_246;
static uint8_t **g_501 = &g_502;
static uint8_t **g_503 = &g_502;
static int32_t g_506 = 0xFC5A764A;
static uint8_t ** const *g_763 = &g_501;
static uint8_t ** const **g_762 = &g_763;
static uint8_t g_818 = 1U;
static int32_t g_835 = 0x40608B1C;
static int32_t ***g_1021 = (void*)0;
static int8_t **g_1050 = &g_343;
static int32_t g_1105 = 7;
static uint8_t ***g_1158 = &g_501;
static uint8_t ****g_1157 = &g_1158;
static int16_t func_1(void);
static int32_t * func_2(uint32_t p_3, const uint16_t p_4, int16_t p_5, uint16_t p_6);
static const int32_t func_15(uint32_t p_16);
static int32_t func_21(int32_t p_22, uint16_t p_23);
static int32_t func_39(uint16_t p_40, int32_t * p_41);
static int8_t func_70(uint8_t p_71, int16_t * p_72);
static int32_t * func_80(int16_t p_81, int8_t p_82, int32_t p_83, const uint32_t p_84);
static int32_t * func_101(uint16_t p_102);
static int32_t * func_119(int8_t p_120, int32_t p_121, uint32_t p_122, int16_t * p_123);
static int32_t func_131(const uint16_t p_132, int16_t * p_133, uint8_t p_134, int8_t p_135);
static int16_t func_1(void)
{
    int32_t *l_13 = &g_14;
    uint8_t ** const * const *l_1156 = &g_763;
    uint8_t *****l_1159 = &g_1157;
    uint8_t l_1160 = 0xFC;
    uint32_t *l_1161 = &g_99;
    uint8_t l_1162 = 0xE6;
    uint32_t l_1163 = 4294967287U;
    int32_t **l_1165 = &l_13;
    int8_t l_1168 = (-1);
    (*l_1165) = func_2((((*l_1161) = ((safe_rshift_func_uint8_t_u_s(((((void*)0 != g_9) == (safe_div_func_int32_t_s_s((&g_10 != l_13), g_10))) < func_15((*l_13))), (l_1160 = ((l_1156 != ((*l_1159) = g_1157)) || g_1105)))) && 0x06)) & l_1162), l_1162, l_1162, l_1163);
    (**l_1165) = (safe_sub_func_uint32_t_u_u(l_1168, (*l_13)));
    return (*l_13);
}
static int32_t * func_2(uint32_t p_3, const uint16_t p_4, int16_t p_5, uint16_t p_6)
{
    int32_t *l_1164 = &g_835;
    return l_1164;
}
static const int32_t func_15(uint32_t p_16)
{
    int16_t l_19 = 1;
    int32_t l_20 = 0x8F4F823A;
    int16_t *l_27 = (void*)0;
    int16_t *l_28 = &g_29;
    int16_t **l_32 = &l_28;
    uint32_t l_37 = 0x69C1477A;
    int32_t l_38 = 0xF3B06D9E;
    int32_t *l_727 = &l_20;
    int32_t **l_837 = &l_727;
    int16_t ***l_857 = &g_372;
    int16_t ****l_856 = &l_857;
    uint16_t l_884 = 65528U;
    int32_t ***l_897 = (void*)0;
    int32_t ****l_896 = &l_897;
    int32_t *****l_895 = &l_896;
    uint16_t **l_913 = &g_97;
    int16_t l_921 = 1;
    uint32_t ***l_926 = &g_381;
    int16_t l_954 = 5;
    uint8_t *l_960 = (void*)0;
    uint8_t ***l_980 = &g_503;
    uint8_t ****l_979 = &l_980;
    int32_t *l_1046 = &g_506;
    int32_t **l_1045 = &l_1046;
    int32_t ***l_1044 = &l_1045;
    uint16_t ***l_1054 = (void*)0;
    uint16_t ****l_1142 = (void*)0;
    uint16_t ****l_1143 = &l_1054;
    int8_t **l_1152 = &g_343;
    int8_t ***l_1153 = (void*)0;
    int8_t ***l_1154 = &l_1152;
    int8_t **l_1155 = &g_343;
    if (((l_20 = l_19) >= (func_21(l_19, ((safe_add_func_int16_t_s_s(g_14, p_16)) ^ (((*l_28) = (!p_16)) || (((l_38 = ((g_10 == (&g_29 != ((*l_32) = &g_29))) == (safe_add_func_uint16_t_u_u(((safe_sub_func_uint8_t_u_u(((g_29 && g_14) && (*g_9)), l_19)) != l_37), g_29)))) == 1U) >= 9)))) >= (*g_9))))
    {
        int32_t **l_680 = &g_148;
        const int16_t *l_682 = (void*)0;
        const int16_t **l_681 = &l_682;
        uint16_t l_700 = 0x6AEB;
        const int32_t * const * const l_721 = &g_109;
        const int32_t * const * const * const l_720 = &l_721;
        const int32_t * const * const * const *l_719 = &l_720;
        int16_t *l_726 = &g_29;
        int32_t *l_754 = &l_38;
        const int32_t * const *l_847 = (void*)0;
        const int32_t * const **l_846 = &l_847;
        int32_t l_886 = 0x680B1F56;
        int32_t *l_928 = &g_14;
        uint32_t *** const *l_932 = &l_926;
        uint8_t l_1028 = 0x94;
        int32_t ***l_1047 = &l_1045;
        int8_t **l_1049 = &g_343;
        (*l_680) = &l_38;
        if (((((*l_681) = (*g_372)) != (void*)0) | (safe_sub_func_int8_t_s_s(((*g_343) = p_16), (&l_680 == (void*)0)))))
        {
            uint8_t ***l_685 = &g_501;
            uint8_t ****l_686 = &l_685;
            int32_t *l_687 = (void*)0;
            const int32_t * const * const * const **l_722 = &l_719;
            const int8_t *l_723 = (void*)0;
            uint32_t l_724 = 0xF025628F;
            uint32_t *l_725 = &g_99;
            uint32_t * const *l_735 = &l_725;
            uint32_t * const **l_734 = &l_735;
            int16_t *l_750 = &g_29;
            int32_t *l_778 = &g_77;
            uint16_t **l_916 = &g_97;
            uint16_t l_922 = 0x86F6;
            uint8_t l_933 = 7U;
            int16_t *****l_938 = &l_856;
            int16_t *****l_939 = &l_856;
            (*g_148) = (((*l_686) = l_685) != &g_501);
            (*l_680) = l_687;
            (*l_680) = func_80(((**l_32) = ((0xB1 > ((safe_rshift_func_int8_t_s_s((0x14 == ((safe_rshift_func_uint8_t_u_u(p_16, 5)) <= ((safe_lshift_func_uint8_t_u_s((safe_add_func_int32_t_s_s((safe_div_func_int32_t_s_s(p_16, l_38)), (-5))), 3)) <= (p_16 ^ (((safe_add_func_int16_t_s_s(g_344, 0xDD43)) || p_16) > l_37))))), 0)) <= 0x52)) >= p_16)), p_16, l_700, l_37);
            if (((safe_div_func_uint32_t_u_u(((l_727 = (*l_680)) != (void*)0), (**g_234))) || (-1)))
            {
                uint32_t * const ***l_736 = &l_734;
                int32_t l_740 = 5;
                int16_t *l_753 = &g_59;
                (*l_727) = (((**l_32) = ((((safe_rshift_func_uint8_t_u_s((safe_mod_func_int8_t_s_s((*g_343), (safe_lshift_func_uint16_t_u_s((((p_16 | (p_16 ^ (((*l_736) = l_734) == (void*)0))) > (&g_307 == &g_307)) && p_16), 13)))), 1)) >= 0xCC93) != (**l_680)) == p_16)) <= g_198);
                for (l_38 = 0; (l_38 != (-5)); l_38--)
                {
                    if (p_16)
                    {
                        const uint8_t l_739 = 253U;
                        return l_739;
                    }
                    else
                    {
                        uint16_t *l_751 = &g_87;
                        int32_t l_752 = 0;
                        (*l_680) = l_754;
                        (*l_680) = &l_752;
                    }
                    return p_16;
                }
                for (g_198 = 0; (g_198 > (-26)); g_198--)
                {
                    for (l_740 = 0; (l_740 == 12); l_740++)
                    {
                        int32_t **l_759 = &l_727;
                        (*l_759) = (g_148 = &g_14);
                    }
                    return p_16;
                }
                for (g_14 = 0; (g_14 > (-25)); --g_14)
                {
                    uint8_t ** const ***l_764 = &g_762;
                    int32_t l_772 = 0x49E84E6D;
                    int32_t *l_773 = &g_506;
                    int32_t **l_774 = &l_773;
                    (*l_764) = g_762;
                    if ((((*l_753) = ((*l_750) = ((((safe_lshift_func_uint16_t_u_u((((*l_774) = l_773) == l_725), p_16)) >= l_740) || 0xCC) || (*g_343)))) | 0xA098))
                    {
                        (*l_727) = p_16;
                        if ((*l_727))
                            continue;
                        (*l_754) = (~(((*l_727) = (249U < (safe_div_func_int16_t_s_s(0x60EB, (*l_727))))) != ((*l_725) = 0xC17438A5)));
                        g_109 = l_778;
                    }
                    else
                    {
                        if ((**g_108))
                            break;
                        (*l_727) = (((*g_763) == (void*)0) && (((safe_mod_func_uint32_t_u_u((!0xC458), p_16)) & p_16) && (safe_mul_func_uint8_t_u_u((0x126F || (((**g_234) && (((*g_502) = (***g_763)) >= (-8))) | (*l_727))), p_16))));
                        (*g_148) = 0x228D9206;
                        (*l_754) = (((9 & (safe_mul_func_int16_t_s_s((safe_mod_func_uint32_t_u_u(((p_16 >= p_16) & (safe_lshift_func_uint16_t_u_s(p_16, ((safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_s((safe_mod_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((((*l_727) = (+5)) & (safe_add_func_int8_t_s_s(p_16, (255U == (**g_503))))), 1)), p_16)), 4)), 6)) || 0x45EE10D0)))), 4294967288U)), p_16))) & (*l_754)) == p_16);
                    }
                }
            }
            else
            {
                int32_t l_851 = 7;
                const int8_t *l_852 = &g_344;
                const int8_t *l_853 = (void*)0;
                uint16_t **l_917 = &g_97;
                uint32_t ***l_925 = &g_381;
                int32_t l_936 = 1;
                int16_t *****l_937 = &l_856;
                uint8_t *****l_952 = &l_686;
                for (g_246 = 0; (g_246 != 49); ++g_246)
                {
                    int8_t l_819 = 0xDF;
                    int32_t l_830 = 0xE0427C1C;
                    uint16_t *l_885 = &g_107;
                    uint32_t *****l_900 = &g_379;
                    uint32_t *****l_901 = &g_379;
                    int16_t *****l_902 = &l_856;
                    uint8_t *l_959 = &g_818;
                }
                (*g_148) = p_16;
            }
        }
        else
        {
            int8_t l_974 = 0xEA;
            uint8_t ****l_981 = (void*)0;
            int32_t l_1017 = 0;
            int32_t ***l_1048 = &l_1045;
            if ((+((**l_680) = p_16)))
            {
                uint32_t l_975 = 0xBA3CB1FA;
                int8_t **l_987 = &g_343;
                int32_t l_1019 = 4;
                int32_t ***l_1022 = &l_680;
                int16_t *l_1029 = &g_198;
                for (g_87 = 0; (g_87 != 25); g_87++)
                {
                    int32_t *l_971 = &g_506;
                    int16_t **l_972 = &l_726;
                    const int32_t l_997 = (-1);
                    int32_t ***l_1020 = (void*)0;
                    int8_t *l_1027 = &g_307;
                    (*g_148) = (l_971 == &g_506);
                    if ((l_972 != (void*)0))
                    {
                        int8_t l_973 = 0;
                        uint8_t ****l_976 = (void*)0;
                        uint8_t *****l_977 = &l_976;
                        uint8_t *****l_978 = (void*)0;
                        int8_t **l_988 = (void*)0;
                        (*l_837) = l_971;
                        (*l_837) = func_101(l_973);
                        (**l_680) = (l_974 || ((l_975 >= ((l_979 = ((*l_977) = l_976)) != l_981)) || ((*l_726) = ((safe_add_func_int8_t_s_s((safe_sub_func_int32_t_s_s(((((safe_unary_minus_func_int16_t_s(((l_988 = l_987) != l_987))) > p_16) < (safe_mul_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(l_974, (safe_mul_func_uint16_t_u_u((((safe_add_func_int16_t_s_s(((*g_503) != (void*)0), p_16)) != l_997) == p_16), l_974)))), p_16))) >= 0xABB5620F), (*g_235))), 9)) != (*l_727)))));
                    }
                    else
                    {
                        int16_t ***l_1016 = &l_32;
                        int32_t l_1018 = 0xA6FBE8A8;
                        (*l_928) = (safe_mod_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((g_14 | (**l_837)), (p_16 || l_974))), (g_107 = (safe_lshift_func_int8_t_s_u((*g_343), 1)))));
                        l_1019 = (safe_sub_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(p_16, ((((((((***g_763) = 0xDF) & ((+(0xEEFE >= (safe_lshift_func_uint8_t_u_s((l_1017 = (safe_add_func_int16_t_s_s(l_974, ((((&g_97 != &g_97) | ((!((void*)0 == l_1016)) == 0xD3DF)) == 0x57) | l_975)))), 5)))) <= p_16)) | p_16) >= l_997) ^ p_16) == 0xEF) && p_16))), l_1018));
                        g_1021 = l_1020;
                        (*l_837) = ((**l_1022) = (*l_837));
                    }
                }
                (*l_680) = (**l_1022);
            }
            else
            {
                int32_t * const l_1032 = &l_20;
                int32_t **l_1033 = (void*)0;
                int32_t **l_1034 = &g_148;
                (*g_148) = (safe_add_func_uint32_t_u_u(l_1017, 0x986CC69A));
                (*l_1034) = l_1032;
                for (l_700 = 0; (l_700 > 17); l_700 = safe_add_func_uint16_t_u_u(l_700, 9))
                {
                    int32_t *l_1037 = &g_835;
                    int16_t l_1051 = 0x143F;
                    l_1037 = l_1037;
                    (*l_754) = ((*l_1037) = ((safe_div_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_s((safe_mod_func_int8_t_s_s((p_16 ^ ((l_1044 != (l_1048 = l_1047)) | (&g_343 != (g_1050 = l_1049)))), ((p_16 | l_1051) ^ ((((void*)0 != l_1047) > 0x3D) >= 0U)))), p_16)) == 0x7274), (*l_1037))) || p_16));
                }
            }
        }
        return p_16;
    }
    else
    {
        int32_t l_1061 = 0x6FAB38D3;
        int8_t l_1084 = 0x6D;
        int32_t *l_1091 = &g_14;
        for (g_246 = 0; (g_246 <= 34); g_246++)
        {
            uint16_t l_1055 = 1U;
            uint16_t **l_1097 = (void*)0;
            int32_t *l_1133 = &l_38;
        }
    }
    (*l_727) = (0xAEEDB53D | ((p_16 >= p_16) != (p_16 <= p_16)));
    (*l_727) = 0x00BF5178;
    (*l_837) = (*l_837);
    return (*g_9);
}
static int32_t func_21(int32_t p_22, uint16_t p_23)
{
    int32_t *l_42 = &g_14;
    const int16_t * const l_271 = &g_29;
    const int16_t * const *l_270 = &l_271;
    uint16_t *l_285 = (void*)0;
    uint16_t *l_286 = &g_107;
    int32_t *** const l_392 = (void*)0;
    int8_t **l_404 = (void*)0;
    uint16_t l_430 = 0xBB11;
    int32_t *l_540 = (void*)0;
    const int32_t ***l_566 = &g_108;
    const int32_t ****l_565 = &l_566;
    const int32_t *****l_564 = &l_565;
    uint32_t *l_632 = &g_99;
    int32_t **l_673 = &l_540;
    const int32_t l_678 = 6;
    uint16_t l_679 = 0xA946;
    if (func_39(p_22, l_42))
    {
        int16_t **l_269 = &g_142;
        int16_t ***l_268 = &l_269;
        int32_t *l_296 = &g_14;
        uint32_t *l_315 = (void*)0;
        uint32_t **l_314 = &l_315;
        uint32_t ***l_313 = &l_314;
        const int8_t l_337 = 4;
        uint32_t l_374 = 0x6084136D;
        uint32_t * const *l_391 = &l_315;
        uint32_t * const **l_390 = &l_391;
        uint32_t * const ***l_389 = &l_390;
        uint32_t * const ****l_388 = &l_389;
        int8_t * const l_410 = (void*)0;
        int32_t *l_505 = &g_506;
        int32_t **l_507 = &g_148;
        if ((safe_mod_func_int16_t_s_s(((safe_mul_func_int16_t_s_s(((*l_42) = (-10)), ((safe_mul_func_int16_t_s_s((((*l_268) = &g_142) == l_270), 4U)) ^ ((safe_sub_func_uint32_t_u_u((((safe_add_func_uint32_t_u_u((**g_234), (safe_rshift_func_uint16_t_u_u((g_107 = ((safe_sub_func_uint16_t_u_u(0xA6F5, ((safe_mod_func_int8_t_s_s((+(*g_9)), (safe_add_func_int16_t_s_s(((l_285 = l_285) != (l_286 = &p_23)), g_107)))) != p_22))) & 0x8C)), 13)))) & g_99) != 0x112E05E1), 1U)) & g_29)))) && 3), 0x707C)))
        {
            int32_t * const l_287 = &g_77;
            int32_t **l_288 = &l_42;
            int32_t l_292 = 0x23137507;
            uint8_t * const l_340 = &g_246;
            uint8_t * const *l_339 = &l_340;
            const uint8_t l_431 = 251U;
            int8_t l_474 = 0x43;
            (*l_288) = l_287;
            if ((*l_42))
            {
                int32_t l_293 = 0;
                int32_t * const l_294 = (void*)0;
                if ((~1U))
                {
                    int32_t **l_295 = &l_42;
                    (*l_42) = (safe_sub_func_int8_t_s_s(l_292, g_77));
                    (*l_287) = l_293;
                    (*l_295) = l_294;
                    (*g_108) = l_296;
                }
                else
                {
                    for (g_99 = (-18); (g_99 != 21); g_99 = safe_add_func_uint32_t_u_u(g_99, 3))
                    {
                        (*g_108) = (*g_108);
                    }
                }
            }
            else
            {
                uint8_t *l_310 = &g_246;
                int32_t l_338 = 0xAE32BB30;
                const int16_t * const *l_373 = &l_271;
                int32_t l_375 = 0xD15D3D01;
                for (g_14 = 0; (g_14 == 14); g_14++)
                {
                    const int32_t l_301 = 0xC7E52D05;
                    int8_t *l_306 = &g_307;
                    uint8_t **l_311 = &l_310;
                    uint32_t * const *l_317 = &l_315;
                    uint32_t * const **l_316 = &l_317;
                    int32_t l_336 = 9;
                    (**l_288) = ((void*)0 == (*g_234));
                    if (l_301)
                        continue;
                    (**l_288) = (((safe_lshift_func_uint16_t_u_s(((safe_add_func_uint32_t_u_u(((*l_42) ^ ((*l_306) = (-1))), (safe_mul_func_uint8_t_u_u(l_301, ((((*l_311) = l_310) == (void*)0) ^ ((void*)0 != g_312)))))) < ((l_313 == l_316) && (*l_296))), 8)) != 1) >= p_22);
                    if (((safe_add_func_uint32_t_u_u((~(safe_add_func_uint16_t_u_u(l_301, ((1U | (safe_mul_func_uint8_t_u_u((*l_42), p_22))) | (safe_rshift_func_uint16_t_u_s(((safe_rshift_func_int8_t_s_s((((**l_288) ^ (safe_div_func_uint32_t_u_u(((safe_rshift_func_int16_t_s_u(((void*)0 != (**l_313)), (l_336 = ((*l_286) = ((+(safe_div_func_uint16_t_u_u((p_22 == ((void*)0 == &g_246)), 1))) | 0xACED))))) > 0xC6404DC0), l_337))) >= p_22), p_22)) & p_22), l_338)))))), (*g_235))) || 65526U))
                    {
                        int8_t **l_345 = &g_343;
                        int32_t *l_346 = (void*)0;
                        int32_t *l_376 = &l_336;
                        l_346 = func_119(((*l_306) = (**l_288)), g_246, (((void*)0 != l_339) < (safe_rshift_func_uint8_t_u_s((((*l_345) = g_343) != l_310), 2))), &g_59);
                        if (p_23)
                            break;
                        (*l_376) = (0xA8 >= (((l_338 ^ (p_23 ^ (((safe_lshift_func_int8_t_s_s((!(safe_mod_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_s(1, ((*l_306) = (safe_add_func_uint32_t_u_u(((safe_mul_func_uint8_t_u_u(((**l_339) = ((safe_add_func_uint16_t_u_u(((~((*l_42) = (((+(safe_lshift_func_int8_t_s_u((safe_unary_minus_func_int8_t_s((*g_343))), 5))) == ((safe_add_func_int32_t_s_s((safe_mul_func_int8_t_s_s((((**g_234) | (((*l_296) & (!(*l_42))) && (((safe_sub_func_int8_t_s_s((g_372 != l_373), l_374)) >= (*l_42)) != (*g_9)))) | (*g_235)), 0U)), 0xCAEAABA6)) != 0x5F)) >= (*l_42)))) && 0x2D0B), g_14)) || (*l_346))), (*g_343))) ^ (*g_235)), 0x5F3529B9))))) >= l_338), g_198))), 2)) && 4) & p_22))) <= l_375) <= (*l_296)));
                    }
                    else
                    {
                        (*l_288) = l_42;
                        if ((*g_9))
                            continue;
                    }
                }
                (*l_287) = 0xDE3D06CC;
                (*g_148) = p_22;
                for (g_29 = 29; (g_29 > 10); g_29 = safe_sub_func_uint32_t_u_u(g_29, 1))
                {
                    int32_t l_385 = 0x471ECD59;
                    int16_t *l_387 = &g_198;
                    int32_t l_439 = 0xDAFAEC72;
                    if (((l_375 > (p_22 | (**l_288))) && ((*l_387) = (((((void*)0 != g_379) && (((~((safe_add_func_uint16_t_u_u((l_385 < (((*g_343) && ((*g_343) = (**l_288))) < (~((p_22 <= 1) && 2U)))), 0U)) == g_14)) & p_22) | 0xC0DF)) > 0xC1CF038D) != 0U))))
                    {
                        int32_t ***l_393 = &l_288;
                        uint32_t *l_409 = &g_99;
                        l_388 = (void*)0;
                        (*l_288) = l_296;
                        l_393 = l_392;
                        l_338 = (safe_lshift_func_int16_t_s_u((safe_sub_func_uint8_t_u_u(((safe_sub_func_uint16_t_u_u((*l_296), ((safe_sub_func_int16_t_s_s(p_23, (*l_287))) || (l_404 == &g_343)))) >= ((void*)0 != &g_108)), (safe_rshift_func_int16_t_s_u((safe_mod_func_uint32_t_u_u(((*l_409) = ((p_22 == (*g_343)) ^ (*g_343))), (*l_296))), 5)))), 5));
                    }
                    else
                    {
                        int16_t l_414 = (-1);
                        int8_t *l_423 = &g_307;
                        uint32_t *l_432 = &g_99;
                        (*g_148) = ((*l_287) = ((((((l_410 != (void*)0) >= l_338) || 9) || (safe_sub_func_int8_t_s_s(0xF3, (-6)))) <= (!l_414)) ^ ((*l_423) = ((*g_343) = (safe_mod_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((safe_add_func_int32_t_s_s((((*l_387) = ((safe_add_func_int16_t_s_s((*l_296), (-7))) > p_23)) == p_23), l_385)), 4)), l_385))))));
                        (*l_288) = func_80(l_414, (((*l_432) = ((((p_22 & ((safe_div_func_uint32_t_u_u((((*g_343) >= (0x2AD8 ^ ((((*l_287) || ((safe_rshift_func_int8_t_s_u(0x0C, g_246)) > (safe_add_func_uint32_t_u_u((**g_234), (6 != p_23))))) && 0U) >= l_430))) <= l_431), p_23)) | 0x250D)) || (*l_296)) ^ g_107) > 65534U)) == l_375), (*l_296), g_246);
                    }
                    (*l_288) = &l_375;
                    for (l_430 = 0; (l_430 != 12); l_430 = safe_add_func_uint16_t_u_u(l_430, 2))
                    {
                        int32_t *l_435 = &l_338;
                        int32_t **l_436 = &g_148;
                        uint16_t *l_444 = &g_107;
                        uint8_t **l_449 = &l_310;
                        const uint8_t *l_451 = (void*)0;
                        const uint8_t **l_450 = &l_451;
                        const int32_t **l_454 = &g_109;
                        (*l_42) = l_385;
                        (*l_436) = ((*l_288) = l_435);
                        (*l_454) = (*g_108);
                    }
                    for (g_344 = 12; (g_344 >= 10); g_344 = safe_sub_func_uint32_t_u_u(g_344, 7))
                    {
                        uint32_t l_466 = 8U;
                        int8_t *l_471 = &g_307;
                        int32_t l_473 = (-4);
                        (*g_148) = ((safe_lshift_func_int16_t_s_s(((void*)0 == &l_375), ((safe_mod_func_uint8_t_u_u((((safe_unary_minus_func_int32_t_s((safe_sub_func_uint8_t_u_u((p_23 < p_22), ((*l_471) = (safe_lshift_func_int16_t_s_u(((*l_387) = 1), (((l_466 != ((safe_div_func_int32_t_s_s((safe_mod_func_int32_t_s_s((*l_287), p_23)), 4294967295U)) || p_22)) > p_23) ^ (**l_288))))))))) > g_14) || p_22), 0xA6)) || (-7)))) | l_375);
                        l_474 = (((!p_23) > (l_473 = ((*l_387) = p_22))) & g_77);
                        return (*g_9);
                    }
                }
            }
            for (g_87 = 0; (g_87 > 26); g_87 = safe_add_func_uint32_t_u_u(g_87, 7))
            {
                const uint16_t l_477 = 2U;
                if ((*l_287))
                    break;
                (*l_288) = func_101(p_23);
                if (l_477)
                    continue;
            }
        }
        else
        {
            const int32_t l_497 = 0xD2A15CC0;
            int32_t *l_504 = &g_77;
            (*l_504) = (((safe_div_func_int16_t_s_s(((p_23 = (safe_unary_minus_func_int8_t_s(((void*)0 == (***l_388))))) != (safe_mul_func_int8_t_s_s(((safe_rshift_func_int8_t_s_s((((safe_add_func_uint32_t_u_u(1U, (safe_add_func_int32_t_s_s(((*g_148) = (safe_div_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((((*l_296) <= (safe_rshift_func_uint8_t_u_s(((*g_502) = (l_497 != (p_22 <= ((g_59 == (!(safe_lshift_func_int8_t_s_u(0x19, (((g_501 != g_503) | p_22) | 8U))))) | (*g_343))))), 6))) != p_22), 0)), (*g_343)))), 4294967291U)))) & p_22) && 0x00), (*g_343))) ^ p_22), l_497))), l_497)) >= (*g_343)) >= l_497);
        }
        (*l_296) = p_23;
        (*l_507) = l_505;
    }
    else
    {
        int8_t l_516 = (-9);
        int16_t *l_517 = &g_198;
        int16_t l_561 = (-1);
        int32_t **l_607 = &l_42;
        int32_t ***l_606 = &l_607;
        int32_t ****l_605 = &l_606;
        int32_t l_617 = (-1);
        uint8_t l_666 = 246U;
        if (((safe_lshift_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(0U, (((*l_517) = ((*l_42) = (safe_sub_func_int32_t_s_s(((*g_379) == (*g_379)), (safe_rshift_func_uint16_t_u_s(l_516, 1)))))) && p_22))), 2)) <= (*g_343)))
        {
            uint8_t l_526 = 0x1D;
            int16_t **l_532 = &l_517;
            for (g_99 = 0; (g_99 >= 25); g_99++)
            {
                int16_t **l_531 = &g_142;
                int32_t *l_533 = &g_77;
                (*l_533) = (safe_div_func_uint32_t_u_u(((safe_rshift_func_uint16_t_u_s(((safe_sub_func_int32_t_s_s(((*g_148) = (**g_108)), l_526)) ^ (((l_516 >= ((*g_343) < (safe_add_func_uint8_t_u_u(p_22, (l_526 < (safe_rshift_func_int16_t_s_s(((l_531 == (l_532 = (void*)0)) <= ((((*g_372) = l_517) != (void*)0) && p_23)), 1))))))) && p_22) || p_23)), 15)) & p_23), (**g_108)));
            }
        }
        else
        {
            int16_t l_539 = 0xED77;
            int32_t l_558 = 4;
            int32_t l_562 = 0xEF301A20;
            int32_t ** const *l_601 = (void*)0;
            int32_t ** const **l_600 = &l_601;
            uint32_t l_633 = 0U;
            uint8_t * const *l_667 = &g_502;
            uint8_t **l_672 = (void*)0;
            for (g_307 = 0; (g_307 >= (-4)); g_307 = safe_sub_func_int32_t_s_s(g_307, 4))
            {
                uint16_t *l_552 = (void*)0;
                int8_t *l_563 = &g_307;
                for (g_14 = (-8); (g_14 <= 10); g_14++)
                {
                    int32_t *l_538 = &g_77;
                    const int32_t *** const l_547 = &g_108;
                    const int32_t ***l_548 = &g_108;
                    (*l_538) = (*g_148);
                    (*g_108) = l_538;
                    if (l_539)
                        continue;
                    if (((*l_538) = (*g_9)))
                    {
                        (*g_108) = l_540;
                        (*l_538) = (-1);
                    }
                    else
                    {
                        const int32_t ****l_549 = &l_548;
                        uint32_t ****l_553 = &g_380;
                        const uint32_t ***l_555 = (void*)0;
                        const uint32_t ****l_554 = &l_555;
                        const uint32_t *****l_556 = (void*)0;
                        const uint32_t *****l_557 = &l_554;
                        if ((*g_9))
                            break;
                        l_562 = (safe_lshift_func_int8_t_s_u((safe_mod_func_int16_t_s_s((safe_add_func_int32_t_s_s(p_23, ((l_547 == ((*l_549) = l_548)) > (safe_mod_func_int16_t_s_s((l_558 = (((void*)0 != l_552) && (l_553 == ((*l_557) = l_554)))), (safe_sub_func_uint16_t_u_u(65535U, l_561))))))), 0x8FFB)), 5));
                        (*l_538) = (l_563 == (void*)0);
                    }
                }
            }
            l_564 = l_564;
            for (g_107 = 0; (g_107 >= 49); ++g_107)
            {
                uint32_t ** const *l_569 = &g_381;
                uint32_t ** const **l_570 = &l_569;
                uint32_t * const **l_571 = (void*)0;
                uint32_t * const ***l_572 = &l_571;
                uint16_t l_612 = 0xDA9F;
                uint8_t **l_613 = &g_502;
                int32_t ****l_635 = &l_606;
                int8_t l_640 = 0x29;
                uint8_t * const **l_668 = (void*)0;
                uint8_t * const **l_669 = (void*)0;
                uint8_t * const l_671 = (void*)0;
                uint8_t * const *l_670 = &l_671;
                if ((((*l_570) = l_569) != ((*l_572) = l_571)))
                {
                    uint16_t *l_577 = &l_430;
                    int32_t ** const ***l_602 = &l_600;
                    int32_t ** const **l_604 = (void*)0;
                    int32_t ** const ***l_603 = &l_604;
                    int16_t *l_614 = &l_561;
                    uint32_t *l_615 = &g_99;
                    int32_t *l_616 = (void*)0;
                    int8_t l_634 = (-8);
                    (*g_148) = (0x2F != (safe_rshift_func_uint16_t_u_u(((*g_502) <= ((~0xA86A9014) || p_22)), (((+((*l_577) = p_23)) & (safe_mod_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(((*l_517) = 0xB9A9), 6)), (l_558 = (((*g_343) | (((safe_lshift_func_uint16_t_u_s(g_506, 6)) | (safe_rshift_func_int16_t_s_s(p_23, 3))) || p_23)) && (*l_42)))))) & (**g_503)))));
                    if ((l_617 = (safe_div_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u(((*l_615) = (safe_unary_minus_func_uint32_t_u(((safe_rshift_func_uint16_t_u_s(p_22, (((*l_614) = ((*l_517) = (((safe_unary_minus_func_int16_t_s((safe_lshift_func_uint16_t_u_s((((**g_501) = (safe_mul_func_int8_t_s_s((*g_343), (((*l_42) = ((safe_mul_func_uint16_t_u_u((((*l_603) = ((*l_602) = l_600)) != l_605), (((safe_rshift_func_int16_t_s_u((0xB063B3B1 > ((safe_sub_func_int16_t_s_s(l_612, (((((void*)0 == l_613) < (0x32876BD8 < 0x572DAFAD)) || 8U) == l_612))) <= 4294967287U)), 3)) ^ g_246) && p_22))) < p_23)) != 0x155B47B5)))) != (*g_343)), p_22)))) > 0x0BC74A59) >= l_612))) & (-1)))) != p_23)))), p_23)), p_22))))
                    {
                        int32_t l_621 = 0;
                        l_621 = (safe_div_func_uint8_t_u_u((safe_unary_minus_func_int16_t_s(p_23)), l_612));
                    }
                    else
                    {
                        (*g_108) = (**l_606);
                        l_562 = (safe_mod_func_int32_t_s_s(((safe_div_func_int32_t_s_s(((****l_605) = (((0xFDC0 & (((*l_614) = (safe_mod_func_uint8_t_u_u(((**l_613) = ((*g_343) != (((safe_div_func_int8_t_s_s(1, (safe_rshift_func_uint8_t_u_s((**l_607), (l_42 != l_632))))) < (*g_9)) && (***l_606)))), (((p_23 == 0U) & l_633) && l_612)))) & 0xBBBB)) || p_23) < 0x5A75)), l_634)) ^ p_22), 6U));
                    }
                }
                else
                {
                    int32_t **l_654 = &g_148;
                    (**l_607) = (((void*)0 == l_635) <= (safe_lshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_s(l_640, 3)), (safe_sub_func_uint8_t_u_u(((**l_613) = (safe_unary_minus_func_int8_t_s(((safe_lshift_func_int16_t_s_u((*l_42), p_23)) != 9U)))), ((safe_sub_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u((p_23 > p_22), (safe_mul_func_uint16_t_u_u((((l_654 == (void*)0) && p_22) == p_23), 0x3F3E)))) | (**l_654)), (****l_635))), 0x77F9)) ^ (****l_635)))))));
                    for (l_612 = 27; (l_612 > 26); l_612--)
                    {
                        int32_t *l_657 = &l_558;
                        (*g_108) = (**l_566);
                        (**l_566) = (*g_108);
                        (**l_654) = (-1);
                        (*g_108) = l_657;
                    }
                    return p_22;
                }
                for (l_558 = 20; (l_558 != (-26)); l_558--)
                {
                    const uint32_t *l_663 = &g_99;
                    uint32_t ****l_665 = &g_380;
                    uint32_t *****l_664 = &l_665;
                    (**l_566) = func_101(p_22);
                    (****l_635) = (!(safe_rshift_func_uint8_t_u_s(((l_663 == (void*)0) || (&g_380 != ((*l_664) = (g_379 = (void*)0)))), 3)));
                }
                (***l_606) = ((l_666 = p_22) | (0xBBBB0617 != ((l_670 = l_667) == l_672)));
                (***l_605) = (g_148 = &g_14);
            }
        }
        return (**l_607);
    }
    (*l_673) = (void*)0;
    (*g_148) = (safe_div_func_int32_t_s_s(((safe_lshift_func_int16_t_s_s(p_23, l_678)) <= 0x2F981BDB), p_23));
    return l_679;
}
static int32_t func_39(uint16_t p_40, int32_t * p_41)
{
    uint32_t l_57 = 1U;
    int32_t l_260 = 7;
    for (g_29 = 1; (g_29 != (-10)); --g_29)
    {
        int16_t *l_58 = &g_59;
        const int32_t l_75 = 1;
        uint32_t *l_258 = &g_99;
        uint16_t *l_259 = &g_107;
        int32_t *l_261 = &g_77;
    }
    return (**g_108);
}
static int8_t func_70(uint8_t p_71, int16_t * p_72)
{
    int32_t *l_110 = &g_77;
    uint32_t l_124 = 4294967295U;
    uint32_t l_146 = 0x8312ED85;
    if (p_71)
    {
        int32_t *l_76 = &g_77;
        int16_t *l_96 = &g_29;
        int16_t **l_95 = &l_96;
        int32_t l_118 = 0x0D3BD28F;
        uint32_t l_138 = 0xAB3286B0;
        uint16_t *l_139 = &g_87;
        int16_t *l_145 = &g_29;
        uint32_t l_153 = 4294967295U;
        (*l_76) = 0xA3C9199E;
        for (p_71 = (-5); (p_71 > 46); p_71 = safe_add_func_int32_t_s_s(p_71, 4))
        {
            int32_t l_85 = 0;
            uint16_t *l_86 = &g_87;
            uint32_t *l_98 = &g_99;
            l_110 = func_80(l_85, (p_71 >= ((*l_86) = g_77)), (0xD0 != ((!(g_29 | (safe_sub_func_int16_t_s_s((((*l_98) = (safe_mul_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_s(0xE6E2, 13)) & (((&p_72 == l_95) == (g_97 == g_97)) < (-1))), p_71))) == g_29), (-1))))) != l_85)), l_85);
            l_118 = ((*l_76) = (safe_sub_func_uint16_t_u_u((safe_unary_minus_func_int8_t_s((~(safe_add_func_int32_t_s_s(0, g_77))))), (+(-2)))));
            return p_71;
        }
        (*g_108) = &l_118;
        (*g_108) = func_119(l_124, (*l_110), ((safe_div_func_int32_t_s_s((safe_rshift_func_int8_t_s_s((safe_add_func_int32_t_s_s(func_131(((safe_sub_func_uint16_t_u_u(p_71, ((*l_139) = l_138))) ^ ((8U < (safe_mul_func_uint8_t_u_u(((g_142 = (void*)0) != &g_29), g_107))) | (safe_lshift_func_int16_t_s_u(1, 5)))), l_145, (*l_76), l_146), l_153)), 4)), (*g_9))) > g_29), &g_29);
    }
    else
    {
        uint32_t *l_161 = &g_99;
        uint32_t **l_162 = &l_161;
        int32_t l_165 = (-1);
        uint16_t *l_180 = &g_107;
        uint32_t l_183 = 4294967290U;
        int16_t *l_197 = &g_198;
        const int16_t *l_200 = &g_29;
        const int16_t **l_199 = &l_200;
        (*l_110) = ((safe_mul_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(((((*l_162) = l_161) != &l_146) >= (p_71 == (safe_sub_func_uint8_t_u_u(l_165, (l_165 ^ (safe_add_func_int16_t_s_s((safe_mul_func_int16_t_s_s((safe_add_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(65533U, (((p_71 >= (0x70 != (&g_87 == (void*)0))) < (-1)) ^ l_165))), 0xF4)), 0x1DBE)), 65535U))))))), 3)), 0xE3)) | p_71), g_10)) ^ g_77);
        (*l_110) = (*g_148);
        if ((l_165 < ((safe_sub_func_int8_t_s_s(p_71, (safe_mod_func_int8_t_s_s((((safe_div_func_uint32_t_u_u((((*l_180) = p_71) <= (safe_mod_func_uint8_t_u_u((l_183 != g_14), 0xF3))), (safe_unary_minus_func_uint16_t_u((((safe_unary_minus_func_int16_t_s((safe_div_func_uint16_t_u_u(((safe_sub_func_uint16_t_u_u((1U ^ (*l_110)), ((*l_197) = (safe_mod_func_uint16_t_u_u(((+(safe_lshift_func_uint8_t_u_s((safe_add_func_int8_t_s_s(g_29, l_183)), 0))) && p_71), (*p_72)))))) == 0x31), g_10)))) <= (*l_110)) >= g_99))))) != 1) != (-5)), p_71)))) && p_71)))
        {
            const int16_t ***l_201 = (void*)0;
            const int16_t ***l_202 = (void*)0;
            const int16_t ***l_203 = &l_199;
            const int32_t *l_206 = &g_77;
            (*l_110) = (((*l_203) = l_199) != &p_72);
            for (g_77 = 0; (g_77 != 27); g_77++)
            {
                (*g_108) = l_206;
                if ((**g_108))
                    continue;
            }
            return (*l_206);
        }
        else
        {
            uint32_t l_222 = 7U;
            uint32_t *** const l_223 = &l_162;
            uint32_t l_248 = 6U;
            (*l_110) = 5;
            (*g_108) = func_101(g_198);
            (*l_110) = (-7);
            if (((*l_110) = (g_107 ^ g_99)))
            {
                int32_t **l_217 = &l_110;
                uint32_t ***l_225 = &l_162;
                uint32_t ****l_224 = &l_225;
                const uint32_t ***l_236 = (void*)0;
                const uint32_t ***l_237 = &g_234;
                uint8_t *l_244 = (void*)0;
                uint8_t *l_245 = &g_246;
                (**l_217) = (safe_add_func_int8_t_s_s((safe_div_func_int8_t_s_s((safe_div_func_int8_t_s_s(p_71, ((safe_mod_func_int8_t_s_s(p_71, (p_71 || (safe_rshift_func_int16_t_s_s((((p_71 > ((void*)0 == l_217)) || ((0xAE13 == ((safe_rshift_func_int16_t_s_s(((g_107 && (safe_sub_func_uint32_t_u_u(((g_77 != p_71) ^ (-6)), l_183))) != l_222), l_183)) >= (*l_110))) | (**l_217))) < p_71), 0))))) & 9))), g_107)), g_14));
                (*l_224) = l_223;
                if ((((safe_div_func_int32_t_s_s(((p_71 || (((safe_lshift_func_int8_t_s_u((safe_mod_func_uint16_t_u_u((*l_110), p_71)), 7)) || (safe_rshift_func_int16_t_s_s(((((*l_237) = g_234) == &l_161) <= l_222), ((safe_lshift_func_uint8_t_u_u(((*l_245) = (safe_mod_func_uint8_t_u_u((g_14 > (((**l_217) != (safe_mul_func_uint16_t_u_u(p_71, (*p_72)))) < (**l_217))), l_222))), 5)) <= 0x6C)))) != 0x1F1C)) < (*p_72)), 4294967288U)) < (*g_235)) | 0x638C))
                {
                    return p_71;
                }
                else
                {
                    uint8_t l_247 = 255U;
                    l_247 = (*g_109);
                    return l_248;
                }
            }
            else
            {
                int16_t l_255 = 0x52D8;
                g_77 = ((safe_sub_func_uint32_t_u_u((&p_71 != (void*)0), ((safe_mod_func_int8_t_s_s(((safe_mul_func_uint16_t_u_u(l_255, ((*l_180) = 3U))) | (0x367A | (*p_72))), l_222)) ^ (safe_mul_func_int8_t_s_s((0xF7BBE786 != (0x9CC9 == 0x98D0)), 0U))))) | p_71);
                l_165 = (*g_148);
                (*g_108) = l_110;
            }
        }
    }
    return g_14;
}
static int32_t * func_80(int16_t p_81, int8_t p_82, int32_t p_83, const uint32_t p_84)
{
    int16_t l_100 = (-4);
    int32_t *l_104 = &g_77;
    int32_t *l_105 = &g_14;
    int32_t *l_106 = &g_77;
    l_100 = p_84;
    (*l_106) = ((l_104 = func_101(l_100)) == l_105);
    (*l_106) = g_107;
    g_108 = &g_9;
    return l_104;
}
static int32_t * func_101(uint16_t p_102)
{
    int32_t *l_103 = &g_77;
    (*l_103) = (*g_9);
    (*l_103) = p_102;
    (*l_103) = 0xC4505AF7;
    return l_103;
}
static int32_t * func_119(int8_t p_120, int32_t p_121, uint32_t p_122, int16_t * p_123)
{
    int32_t *l_154 = &g_77;
    (*l_154) = (4 != (p_121 && g_14));
    (*g_108) = (void*)0;
    return l_154;
}
static int32_t func_131(const uint16_t p_132, int16_t * p_133, uint8_t p_134, int8_t p_135)
{
    int32_t *l_147 = &g_77;
    int32_t **l_150 = &g_148;
    int32_t *** const l_149 = &l_150;
    int32_t ***l_152 = &l_150;
    int32_t ****l_151 = &l_152;
    (*g_108) = l_147;
    (*g_108) = g_148;
    (*l_151) = l_149;
    return (*l_147);
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    g_109 = 0;
    g_148 = 0;
    csmith_sink_ = g_10;
    csmith_sink_ = g_14;
    csmith_sink_ = g_29;
    csmith_sink_ = g_59;
    csmith_sink_ = g_77;
    csmith_sink_ = g_87;
    csmith_sink_ = g_99;
    csmith_sink_ = g_107;
    csmith_sink_ = g_198;
    csmith_sink_ = g_246;
    csmith_sink_ = g_307;
    csmith_sink_ = g_344;
    csmith_sink_ = g_506;
    csmith_sink_ = g_818;
    csmith_sink_ = g_835;
    csmith_sink_ = g_1105;
    platform_main_end(0,0);
    return 0;
}
