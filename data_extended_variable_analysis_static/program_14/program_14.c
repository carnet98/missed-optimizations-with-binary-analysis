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
static int32_t g_4 = 0L;
static uint16_t g_188 = 1UL;
static uint32_t g_189 = 4294967295UL;
static uint64_t g_225 = 0x07CAD87FAE0A69A7LL;
static int64_t g_232 = 1L;
static int32_t g_266 = (-2L);
static int32_t g_339 = 0xB4DBD819L;
static uint8_t g_421 = 8UL;
static int32_t g_429 = 0x3701D3A4L;
static int16_t g_431 = 0x55DAL;
static int32_t g_432 = 0L;
static uint32_t g_435 = 7UL;
static int64_t g_461 = (-6L);
static int16_t g_506 = 4L;
static int32_t g_516 = (-9L);
static int32_t g_520 = 0xA84D3B94L;
static int32_t g_521 = 2L;
static uint64_t g_522 = 0x4DAA309246CAE3DALL;
static uint64_t g_547 = 18446744073709551615UL;
static int32_t g_564 = 1L;
static uint32_t g_638 = 4294967290UL;
static int8_t g_785 = 1L;
static int64_t g_786 = 0xEB1C24B5813945DALL;
static uint16_t g_787 = 0x2804L;
static int32_t g_847 = 0x510BCC59L;
static uint32_t func_1(void);
static int32_t func_6(uint16_t p_7, uint64_t p_8, uint32_t p_9, uint64_t p_10);
static int8_t func_22(int8_t p_23, uint8_t p_24);
static uint8_t func_28(uint32_t p_29, int32_t p_30);
static uint8_t func_37(uint32_t p_38, uint64_t p_39, int32_t p_40, int64_t p_41);
static int64_t func_42(int16_t p_43);
static uint16_t func_47(uint64_t p_48, uint16_t p_49);
static uint8_t func_52(uint32_t p_53, int64_t p_54, int8_t p_55, int32_t p_56, uint32_t p_57);
static uint16_t func_61(int32_t p_62, uint32_t p_63, uint64_t p_64);
static int8_t func_65(int32_t p_66, int64_t p_67, uint32_t p_68, int32_t p_69, int32_t p_70);
static uint32_t func_1(void)
{
    int32_t l_5 = 0L;
    int16_t l_25 = 1L;
    l_5 = (safe_div_func_int32_t_s_s(g_4, 0x0F57A7C2L));
    g_847 &= func_6((0UL >= (safe_mul_func_uint8_t_u_u(g_4, (safe_add_func_uint64_t_u_u(0x95A97963BA20B95ALL, (safe_div_func_int8_t_s_s((safe_add_func_int64_t_s_s((safe_mul_func_uint8_t_u_u((safe_unary_minus_func_uint64_t_u(0xAD38DC5336DE0184LL)), ((((0xBFB66FEBL & (func_22((l_25 && 0L), ((safe_mul_func_uint8_t_u_u(func_28((safe_rshift_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((l_5 , (0L | g_4)), g_4)), 15)), l_25), l_5)) <= l_5)) || l_5)) , g_638) <= l_5) & l_25))), 0x5B6891CE7B11EB4DLL)), l_5))))))), g_461, g_638, l_25);
    return g_432;
}
static int32_t func_6(uint16_t p_7, uint64_t p_8, uint32_t p_9, uint64_t p_10)
{
    int64_t l_840 = 0xB1B406C6EFE49206LL;
    g_339 = (g_4 ^ (((((0x7B7E6508L && ((((safe_sub_func_int64_t_s_s(((safe_mul_func_uint16_t_u_u((!(-4L)), l_840)) & (!g_547)), (~p_8))) , l_840) , ((safe_sub_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(l_840, 4)), (p_10 && 5UL))) , l_840)) | 0L)) || g_435) != l_840) != l_840) > g_421));
    return g_266;
}
static int8_t func_22(int8_t p_23, uint8_t p_24)
{
    int8_t l_780 = 0x37L;
    int32_t l_781 = (-8L);
    int32_t l_782 = 0L;
    int32_t l_783 = 0xD9D4AC89L;
    int32_t l_784 = 0x2367ABEDL;
lbl_792:
    ++g_787;
    for (g_547 = (-22); (g_547 > 8); g_547++)
    {
        uint16_t l_809 = 1UL;
        if (g_787)
            goto lbl_792;
        l_781 &= ((safe_mod_func_int32_t_s_s((((safe_sub_func_uint32_t_u_u(((safe_sub_func_uint64_t_u_u(18446744073709551613UL, ((safe_mod_func_uint32_t_u_u(((((safe_sub_func_uint32_t_u_u((safe_add_func_int32_t_s_s((safe_add_func_int8_t_s_s(((safe_sub_func_int8_t_s_s((l_809 <= ((safe_rshift_func_int16_t_s_u(p_24, (((-9L) | p_24) | (~((p_24 == (safe_mod_func_uint16_t_u_u((1UL == ((safe_div_func_uint64_t_u_u((safe_mul_func_int8_t_s_s(p_23, (safe_div_func_int32_t_s_s((0xC978B894L > 0x882C8D39L), l_782)))), l_780)) > 4294967286UL)), l_809))) != 0x9AL))))) && p_24)), 0x44L)) < 0xAFL), p_23)), l_809)), p_23)) == p_24) <= 1UL) == 65535UL), (-1L))) && g_431))) <= 1L), p_24)) , g_785) != 0x63B01BE40D009DE2LL), g_506)) > 0x2EL);
        if (l_809)
            break;
        g_564 = (safe_add_func_int16_t_s_s((((p_24 > (g_432 | (((safe_rshift_func_uint8_t_u_s(g_521, 5)) | (safe_add_func_uint32_t_u_u((safe_add_func_int16_t_s_s((l_809 || ((0x766CEE336C1B1146LL | ((((safe_mul_func_uint8_t_u_u((safe_div_func_uint8_t_u_u((0xE8891A6DL < (-9L)), l_781)), (safe_div_func_int32_t_s_s(l_809, g_232)))) == l_780) == l_809) , g_432)) & g_429)), g_266)), 4294967295UL))) , (-7L)))) != g_522) & p_23), 0x37DDL));
    }
    return p_24;
}
static uint8_t func_28(uint32_t p_29, int32_t p_30)
{
    int16_t l_77 = 0x2E88L;
    uint16_t l_759 = 65528UL;
    int32_t l_777 = 0x88A32F22L;
    for (p_29 = 0; (p_29 >= 14); p_29++)
    {
        int8_t l_58 = 0x74L;
        int32_t l_342 = (-1L);
        p_30 = (g_4 || func_37(g_4, p_29, p_30, func_42((safe_div_func_int32_t_s_s(((+func_47((safe_mod_func_uint8_t_u_u(func_52(l_58, ((safe_lshift_func_uint8_t_u_s(((((((-1L) | (0x8CD9L == func_61(((func_65((safe_sub_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_s(((((((safe_lshift_func_int16_t_s_u(p_30, (((p_30 , p_29) || 0xBA8AL) && l_58))) | l_58) > p_29) > 3UL) , l_58) >= l_77), 4)) < p_29), l_58)), l_58, g_4, p_30, g_4) >= l_77) == 0xD146L), p_29, p_29))) & g_4) < g_188) && g_232) != 0x3B0CL), g_189)) >= 0L), p_29, p_29, p_30), l_58)), p_30)) >= l_342), p_30)))));
    }
    g_564 = (l_759 ^ (l_759 > (safe_rshift_func_uint16_t_u_u(g_522, 0))));
    l_777 = (((((2L ^ (l_759 > ((g_461 && (0xA834ACB6692462DFLL < ((safe_mul_func_int8_t_s_s(l_759, (!(!p_30)))) , 0xFFD2F16D198E18C8LL))) && ((safe_add_func_int32_t_s_s(((((((safe_div_func_uint16_t_u_u((+(safe_div_func_int32_t_s_s((safe_mod_func_int32_t_s_s(((safe_mod_func_int64_t_s_s((((g_516 & p_29) , (-1L)) == 3UL), g_461)) > 0x7D330289L), l_759)), g_266))), p_29)) , p_29) == (-2L)) , p_29) && g_461) <= g_520), g_429)) < g_461)))) >= p_29) != l_759) & g_522) , 0x2E01F926L);
    p_30 &= (safe_mod_func_uint64_t_u_u(l_77, 0x20CE95772E4B62A3LL));
    return l_777;
}
static uint8_t func_37(uint32_t p_38, uint64_t p_39, int32_t p_40, int64_t p_41)
{
    uint8_t l_477 = 8UL;
    uint8_t l_488 = 0xB0L;
    uint32_t l_493 = 1UL;
    int16_t l_513 = (-1L);
    int32_t l_519 = (-6L);
    int32_t l_606 = 0xA0BBEADEL;
    for (g_188 = 16; (g_188 < 43); g_188 = safe_add_func_uint16_t_u_u(g_188, 3))
    {
        uint16_t l_470 = 65528UL;
        int32_t l_518 = 0x229A9F4BL;
        uint8_t l_626 = 0x9AL;
        for (p_41 = 0; (p_41 != (-24)); p_41 = safe_sub_func_uint64_t_u_u(p_41, 2))
        {
            uint32_t l_446 = 0x8F403BA6L;
            if (g_429)
            {
                int8_t l_455 = 0xD0L;
                for (g_339 = 0; (g_339 >= (-12)); g_339 = safe_sub_func_int16_t_s_s(g_339, 5))
                {
                    if (((safe_lshift_func_uint8_t_u_s((g_225 > l_446), 4)) == (safe_rshift_func_int16_t_s_s((safe_add_func_uint64_t_u_u((safe_mod_func_uint8_t_u_u(((safe_add_func_uint8_t_u_u((l_455 == g_339), ((safe_lshift_func_int8_t_s_s(l_446, 1)) | l_455))) | 0x7ED7L), l_446)), ((~(((safe_rshift_func_uint8_t_u_s(((g_461 & g_429) , l_455), p_40)) >= l_446) | g_435)) > (-1L)))), p_38))))
                    {
                        if (p_41)
                            break;
                        return p_39;
                    }
                    else
                    {
                        return g_4;
                    }
                }
                return g_339;
            }
            else
            {
                uint32_t l_469 = 18446744073709551608UL;
                g_339 |= (safe_div_func_int32_t_s_s(((((safe_mod_func_int64_t_s_s(0xE5E2BCA4747B00D7LL, p_39)) > ((safe_rshift_func_uint8_t_u_s(((((0xA083L && (g_4 | ((((p_38 | g_188) ^ (((+0xEF301A20L) >= (((6L != (l_469 , 1L)) ^ 0xB5E4L) && g_461)) ^ 0xC7D19381F1477639LL)) | p_41) != 0x216DL))) != g_232) , p_39) , p_39), 3)) != p_41)) , g_432) , l_470), l_470));
            }
            p_40 = (g_431 <= ((!((safe_lshift_func_uint16_t_u_u((5L >= 0L), 5)) && (safe_unary_minus_func_int16_t_s(((l_477 < g_188) , (((0UL & (safe_mul_func_uint16_t_u_u(((safe_mod_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((l_446 < (((((safe_mul_func_uint8_t_u_u(((safe_mod_func_int32_t_s_s(((l_488 > (0x46557EADL < (-7L))) & g_339), 0xB6DF1091L)) && l_446), l_470)) || 6UL) >= l_470) > l_470) , g_429)), 0)), p_39)) , 0xCC40L), p_40))) | p_41) == 0x89F1L)))))) & 0x64C7L));
            p_40 &= 0xC0BA9720L;
        }
        g_339 = (((((-1L) > l_488) > (((safe_div_func_int64_t_s_s(l_493, (safe_mod_func_int64_t_s_s((((0xCAL > l_488) , (((!((((safe_mul_func_int8_t_s_s((((g_339 >= p_39) , (safe_rshift_func_uint16_t_u_s((((safe_mod_func_uint32_t_u_u(((+(((safe_lshift_func_uint8_t_u_s(g_461, 7)) ^ (-1L)) != g_4)) >= g_432), (-3L))) ^ l_488) , 1UL), g_461))) >= 0x2A1DFCF9L), l_470)) < 0UL) , g_188) < 3L)) != 3L) || g_506)) <= g_431), 0x3ED56C7AF7ED305FLL)))) || 0L) == g_188)) | g_266) <= 0x3C588D4D5479BA9DLL);
        if ((safe_div_func_int64_t_s_s((safe_add_func_uint8_t_u_u(g_266, 0x8FL)), l_470)))
        {
            uint32_t l_548 = 0UL;
            int32_t l_549 = (-2L);
            int32_t l_605 = 1L;
            p_40 = p_38;
            for (g_506 = 0; (g_506 >= 23); g_506 = safe_add_func_uint64_t_u_u(g_506, 1))
            {
                int32_t l_514 = (-1L);
                int32_t l_515 = 0x91841853L;
                int32_t l_517 = 0xB826F6BBL;
                --g_522;
                l_517 = p_41;
                l_518 &= ((safe_mul_func_int8_t_s_s((+(g_506 == 0xA837L)), 0x90L)) || (0x533E3FD7L & ((safe_sub_func_int8_t_s_s(((((safe_add_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(g_516, ((safe_mod_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u(((p_38 && (safe_mod_func_int8_t_s_s((safe_div_func_int64_t_s_s((p_39 <= ((safe_unary_minus_func_int8_t_s(((safe_mul_func_int16_t_s_s(l_477, (((((p_40 || 4294967288UL) || g_432) & g_547) & (-8L)) != 0xE034L))) >= 0xF645FABAL))) & 0xAEEBAF70949F32C2LL)), 1UL)), 0x48L))) >= g_461), l_513)) ^ l_548), g_421)) && 0L))), l_548)), 0x16L)) ^ g_522) || 6UL) , l_549), p_38)) >= g_232)));
            }
            l_549 = ((safe_sub_func_uint64_t_u_u((safe_add_func_int64_t_s_s((g_225 , g_522), g_225)), (l_519 == p_40))) <= ((safe_lshift_func_int8_t_s_s((((0x2D7324796A68E759LL <= l_470) , (0x92L || ((safe_mod_func_int8_t_s_s((safe_add_func_int64_t_s_s(0x880E8BD0BC9B0F47LL, p_39)), g_432)) != g_506))) < g_189), p_38)) == p_40));
            g_339 = (safe_lshift_func_uint16_t_u_u(g_564, (~(safe_sub_func_uint64_t_u_u((safe_rshift_func_int8_t_s_u(((!((safe_mul_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(g_506, (safe_mod_func_uint32_t_u_u(((((safe_mul_func_uint8_t_u_u((((((safe_div_func_int8_t_s_s(g_188, (((safe_sub_func_uint16_t_u_u((safe_div_func_int32_t_s_s((safe_div_func_uint16_t_u_u((((((((((safe_rshift_func_int8_t_s_u((safe_div_func_uint8_t_u_u(((safe_add_func_uint8_t_u_u(254UL, (safe_mod_func_int64_t_s_s((((safe_lshift_func_uint16_t_u_s(((((l_470 & 0x18BFL) , ((safe_rshift_func_int16_t_s_s(l_548, ((((g_516 , (safe_mod_func_int16_t_s_s((safe_add_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s((l_605 , p_40), l_470)) > p_39), 0x39L)), (-1L)))) != 7L) <= l_470) >= 0xFA59L))) < p_41)) ^ g_232) >= g_522), 11)) ^ 0x866A51FDE669C7B3LL) > p_39), l_606)))) == g_564), l_470)), l_549)) & g_188) , l_488) >= l_513) >= l_605) || g_4) || g_461) , l_519) || 1L), 9L)), g_435)), l_518)) | g_522) && 0x8AEB0BBA03617F22LL))) & l_518) == l_470) , 0xD4L) > 250UL), 255UL)) != p_39) ^ g_225) || g_522), 3L)))), p_39)) >= l_513)) & g_435), 2)), l_549)))));
        }
        else
        {
            uint32_t l_618 = 0x628F3874L;
            p_40 = ((safe_mul_func_uint8_t_u_u((+((g_435 , (((safe_mod_func_int32_t_s_s((g_232 && (safe_mod_func_int32_t_s_s((g_435 == ((((1UL == ((safe_mul_func_int8_t_s_s((safe_sub_func_int32_t_s_s((l_618 && (!(safe_rshift_func_uint16_t_u_u((0x454D9FA6L < g_188), 14)))), (((safe_sub_func_int8_t_s_s(((((l_618 >= ((safe_rshift_func_uint16_t_u_u(l_518, 6)) >= 0x80EE69BFL)) < 18446744073709551608UL) == 0xA67771A9L) | g_4), l_518)) >= 0xC16CL) , 0xE86B153DL))), 0x75L)) ^ g_516)) || 0x4A2C6023L) <= p_39) >= l_470)), l_626))), 0x893185EAL)) , 18446744073709551615UL) , 0xE8L)) <= 5UL)), 0xACL)) , 0x3C1E511FL);
        }
    }
    g_564 = l_488;
    for (g_516 = 0; (g_516 < 23); ++g_516)
    {
        uint32_t l_631 = 0x4E0851ECL;
        int32_t l_671 = (-8L);
        for (l_493 = 11; (l_493 < 32); l_493 = safe_add_func_int16_t_s_s(l_493, 2))
        {
            --l_631;
            return l_606;
        }
        g_339 = (safe_sub_func_uint16_t_u_u(((g_638 || (((p_39 , (((((0x6D82L < l_513) >= ((safe_div_func_uint64_t_u_u((safe_sub_func_int64_t_s_s((-1L), ((((l_631 <= g_189) == (l_631 < (((((safe_mod_func_int8_t_s_s((safe_sub_func_int64_t_s_s((((0x84L | l_519) >= 0UL) , g_522), l_631)), 0x5AL)) ^ l_488) , p_38) | g_435) <= g_225))) >= 0x150A40FFL) & g_435))), g_225)) || g_4)) > 0UL) == l_631) <= (-7L))) < l_631) != 0x00L)) & l_631), p_39));
        if ((((safe_sub_func_int8_t_s_s((((safe_add_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s((safe_add_func_int32_t_s_s(((safe_add_func_uint32_t_u_u((~p_38), (p_41 ^ 1UL))) , ((((safe_rshift_func_uint16_t_u_s((((((((safe_mul_func_uint8_t_u_u((p_39 , (safe_div_func_uint64_t_u_u(0xB6C17438A579C307LL, 1UL))), (safe_sub_func_uint64_t_u_u(((+(safe_sub_func_int64_t_s_s((((g_266 & (safe_div_func_int32_t_s_s((g_421 && 5UL), l_631))) , p_39) , g_4), p_39))) ^ l_631), p_40)))) > l_477) >= l_631) <= 0xC93C08E0L) ^ p_41) < l_519) , g_421), 2)) && 0x13L) & 9UL) ^ g_225)), p_40)), l_631)), g_521)) <= 1UL) >= l_519), p_39)) ^ 0x66L) , g_432))
        {
            int32_t l_672 = 3L;
            int64_t l_700 = (-7L);
            int8_t l_701 = 6L;
            l_671 |= (-6L);
            l_672 = g_189;
            for (g_431 = 23; (g_431 > (-26)); --g_431)
            {
                uint8_t l_695 = 0UL;
                int32_t l_702 = 9L;
                l_702 &= (((((~(((safe_sub_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(((safe_unary_minus_func_uint8_t_u(((safe_rshift_func_uint8_t_u_u((((((safe_add_func_int32_t_s_s(l_672, (l_672 ^ (safe_sub_func_int16_t_s_s(((safe_add_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(((g_421 == (safe_sub_func_int32_t_s_s(g_516, ((safe_rshift_func_int8_t_s_u((((p_40 == l_695) <= (((safe_rshift_func_uint8_t_u_u((l_695 , (0x4AL || (safe_mod_func_int16_t_s_s(g_432, g_516)))), g_564)) >= 0UL) , l_700)) || 0xBFF9L), 7)) , p_39)))) < 0xE8849ED3L), g_432)), p_41)) || 9L), 7L))))) >= g_266) != g_266) >= g_232) || l_701), 6)) < 5L))) , 4294967287UL), l_701)), 0UL)) || l_631) && (-1L))) , g_421) >= g_232) < 0x83C523A5L) <= g_520);
                p_40 = p_38;
                l_671 = (((safe_rshift_func_uint8_t_u_u(((!(safe_add_func_uint32_t_u_u(l_631, (-1L)))) == (safe_sub_func_uint64_t_u_u((((l_702 == l_701) <= 0x1BL) , p_41), 0x06411087EC5F8097LL))), (7UL <= (p_41 ^ l_701)))) | 0xB6L) | l_513);
            }
            l_672 = (((((safe_mul_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((safe_mod_func_uint64_t_u_u((((safe_unary_minus_func_uint32_t_u(p_39)) & (l_672 != (safe_lshift_func_int16_t_s_u(((safe_rshift_func_uint16_t_u_s(p_39, 0)) , (-5L)), 13)))) , ((safe_lshift_func_uint8_t_u_s(g_638, 2)) | (safe_mod_func_uint8_t_u_u((safe_unary_minus_func_int64_t_s(((((safe_div_func_int16_t_s_s((safe_sub_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s((g_435 | ((l_606 , (0xF27C97FB50E5571ALL >= l_519)) > 0L)), 4)), (-1L))), g_225)) >= p_38) >= p_41) ^ (-1L)))), l_672)))), l_671)), 5)), g_461)) >= 0x37L) != 0x03L) < l_631) ^ 7UL);
        }
        else
        {
            int32_t l_732 = 2L;
            p_40 = ((l_732 && (safe_div_func_int16_t_s_s(p_40, (((l_488 , ((safe_rshift_func_uint8_t_u_s((((safe_mod_func_int16_t_s_s(((safe_mul_func_int16_t_s_s((safe_mod_func_int8_t_s_s((((~g_232) & (safe_add_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(l_732, ((((~(safe_add_func_uint16_t_u_u(((l_631 ^ (!(((safe_mul_func_int8_t_s_s(p_40, ((safe_div_func_int16_t_s_s(((safe_add_func_uint32_t_u_u(((safe_unary_minus_func_int64_t_s((g_521 != (p_39 , l_631)))) | 0xA664L), 8L)) && 0xF7BDFC59L), p_38)) , 1UL))) < l_732) < 8UL))) || g_435), 0x1ACDL))) & g_435) > p_38) >= 0x288F1469L))), 0x4A8FL))) != p_39), l_493)), 0x9120L)) <= 0x382D28EEL), g_232)) ^ 0xA871L) != p_40), 0)) == l_732)) , 1L) , p_41)))) && g_225);
            if (g_461)
                break;
        }
    }
    return g_4;
}
static int64_t func_42(int16_t p_43)
{
    uint32_t l_351 = 0x4DAC0EC0L;
    int32_t l_369 = 1L;
    uint16_t l_381 = 65528UL;
    uint32_t l_404 = 0UL;
    int64_t l_410 = 0xB9206231FCB92070LL;
    int32_t l_423 = 0L;
    int32_t l_424 = 0xC52C26C8L;
    int32_t l_426 = 0xA11EBBABL;
    int32_t l_428 = (-6L);
    l_369 = ((safe_div_func_int32_t_s_s(((((p_43 || ((safe_mul_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_s((safe_mod_func_int64_t_s_s((l_351 != ((0xAFE84FE09BB11AE3LL != g_339) >= ((~(safe_mod_func_int16_t_s_s(((safe_lshift_func_int16_t_s_s((~((safe_sub_func_uint16_t_u_u((!(p_43 || (safe_mul_func_uint8_t_u_u(0xD2L, (safe_mul_func_uint8_t_u_u(((((safe_mul_func_int16_t_s_s((safe_mod_func_uint64_t_u_u(7UL, ((p_43 , (-5L)) ^ g_4))), 0x7469L)) != l_351) > g_339) <= 0xF452AD3A7C03D4C3LL), g_4)))))), p_43)) ^ p_43)), 12)) != l_351), 0xA1B7L))) & l_351))), p_43)), 1)) | p_43), p_43)) | l_351)) ^ g_232) & g_339) <= p_43), g_188)) <= 0xC0F0L);
    l_369 = (safe_div_func_int64_t_s_s((safe_lshift_func_uint16_t_u_s(((((safe_mod_func_int8_t_s_s(((((safe_mul_func_int16_t_s_s((g_232 ^ ((l_369 != g_225) & ((-1L) < g_339))), ((p_43 , (-1L)) <= (!((g_4 , ((safe_lshift_func_int8_t_s_u(0x70L, l_369)) & p_43)) > (-1L)))))) && g_339) , p_43) , (-1L)), l_381)) || 1L) < l_369) || p_43), 5)), 0x5371F8D497B3AE03LL));
    l_404 = (((4294967288UL > ((safe_lshift_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(((safe_sub_func_int16_t_s_s((0x79L >= (safe_mul_func_int16_t_s_s(0x048CL, ((safe_div_func_int8_t_s_s((((safe_mul_func_int16_t_s_s(l_351, (safe_add_func_int64_t_s_s((safe_add_func_int32_t_s_s((safe_mul_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((l_351 & (g_189 < (((g_188 , 0xA4D006B9L) & l_351) == p_43))), 0x72L)), g_4)), g_232)), g_339)))) > (-1L)) != p_43), l_351)) , g_4)))), 0x1628L)) == 4294967295UL), g_232)), 4)) , p_43)) != l_369) || l_381);
    for (g_339 = 0; (g_339 == (-21)); g_339--)
    {
        int16_t l_409 = 0L;
        uint8_t l_422 = 0x9EL;
        int32_t l_425 = 8L;
        int32_t l_427 = 0L;
        int32_t l_430 = 0xB5D90F70L;
        int32_t l_433 = 0xFF4218CAL;
        int32_t l_434 = 0x8FE824BAL;
        l_422 = ((safe_lshift_func_uint16_t_u_u(((((l_409 || l_410) && ((((l_369 , ((((l_404 && (safe_div_func_int8_t_s_s((((~(safe_sub_func_int64_t_s_s((-1L), (safe_mod_func_uint32_t_u_u(((safe_mod_func_int32_t_s_s(((l_409 < (((l_369 < (!l_404)) > g_232) ^ 0x5F26L)) , (-2L)), p_43)) ^ (-8L)), p_43))))) != l_351) <= l_409), l_404))) == 0x5ADCCE1AL) || p_43) > 0x5CE96DD3L)) == p_43) > 5UL) || g_225)) > g_421) < p_43), 5)) == p_43);
        if (g_232)
            continue;
        l_369 |= 6L;
        --g_435;
    }
    return l_410;
}
static uint16_t func_47(uint64_t p_48, uint16_t p_49)
{
    int32_t l_310 = (-5L);
    uint32_t l_337 = 0xA1BC2A71L;
    int32_t l_341 = 0x91F7C5DDL;
    l_310 = p_49;
    for (g_266 = (-1); (g_266 >= (-3)); --g_266)
    {
        int8_t l_315 = 0x21L;
        uint32_t l_331 = 8UL;
        uint16_t l_338 = 6UL;
        int32_t l_340 = 0L;
        l_331 = (((safe_rshift_func_int16_t_s_s(((g_188 || ((l_315 >= (+p_49)) == ((safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((p_49 < (safe_sub_func_uint8_t_u_u(4UL, (safe_div_func_int64_t_s_s((l_315 < (g_266 != (((safe_rshift_func_uint16_t_u_u(g_189, ((g_266 | 0UL) && 0UL))) , 7UL) == g_189))), 1L))))), g_188)), 4)), g_4)) ^ p_49))) | l_315), 6)) && 0x1EC6C1B368D36DCFLL) , (-6L));
        l_340 = ((p_49 | (safe_add_func_int8_t_s_s((((((((g_266 == ((((((g_189 , (g_232 != (safe_rshift_func_int16_t_s_u(((((~p_49) < l_331) > ((0xF3L >= p_48) | l_310)) || l_310), 9)))) , 1L) > l_331) && l_337) , 0xEC65L) >= 65533UL)) && 1L) || l_338) , g_4) & l_315) , g_339) > l_315), l_310))) & l_331);
    }
    return l_341;
}
static uint8_t func_52(uint32_t p_53, int64_t p_54, int8_t p_55, int32_t p_56, uint32_t p_57)
{
    int64_t l_296 = (-1L);
    int16_t l_308 = (-8L);
    int32_t l_309 = 0x39974A84L;
    l_309 = ((safe_lshift_func_uint16_t_u_u(((g_266 ^ 0x41BDL) == 0xCBL), 14)) <= (safe_rshift_func_int8_t_s_u((((safe_div_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_u((((safe_rshift_func_int8_t_s_u((safe_unary_minus_func_uint32_t_u((l_296 ^ l_296))), 1)) == ((safe_mod_func_int16_t_s_s((!(safe_add_func_int64_t_s_s((4UL < p_56), 0L))), (safe_mod_func_int32_t_s_s(((safe_mod_func_int64_t_s_s((safe_sub_func_uint8_t_u_u((g_4 , 3UL), p_53)), p_53)) >= l_308), p_57)))) & p_55)) != (-1L)), 5)) == p_56), g_188)) == g_4) && p_54), 3)));
    return g_266;
}
static uint16_t func_61(int32_t p_62, uint32_t p_63, uint64_t p_64)
{
    int32_t l_100 = 0xD119E2D4L;
    int16_t l_122 = 0xB001L;
    uint64_t l_125 = 18446744073709551615UL;
    int32_t l_176 = 0x114C857BL;
    int64_t l_220 = 0x8E13ECE3592EE31DLL;
    for (p_62 = 0; (p_62 < 21); ++p_62)
    {
        l_100 = g_4;
        for (p_64 = (-29); (p_64 != 55); p_64 = safe_add_func_int32_t_s_s(p_64, 3))
        {
            uint16_t l_103 = 65528UL;
            int32_t l_106 = 0L;
            l_106 = ((l_103 , (p_62 < (safe_sub_func_uint32_t_u_u(p_63, g_4)))) > 1UL);
            if (g_4)
                break;
        }
    }
    if (((safe_rshift_func_int16_t_s_s((18446744073709551612UL == (safe_div_func_int64_t_s_s(((safe_mul_func_uint8_t_u_u(l_100, (((p_62 < ((safe_add_func_int64_t_s_s((((l_100 > (safe_mod_func_uint64_t_u_u(((((0xBF019E2FL ^ (((((g_4 <= (safe_add_func_int64_t_s_s(p_63, (safe_lshift_func_uint16_t_u_u((~(l_122 , ((((safe_mul_func_int8_t_s_s(l_125, p_62)) , 0xF1DDL) | 0xE4C4L) & 0x8A71D4F0L))), g_4))))) ^ 0x21833D8312ED8564LL) <= l_122) || 0xEF27L) & g_4)) < l_125) , (-1L)) | g_4), p_63))) , 4294967288UL) | l_125), l_122)) == g_4)) & g_4) , l_125))) | 0L), 2L))), 14)) && p_62))
    {
        uint64_t l_152 = 0x4590BACEAEEF4A51LL;
        uint16_t l_153 = 65535UL;
        uint16_t l_174 = 0x996BL;
        int8_t l_175 = 1L;
        int32_t l_190 = 0x51F1CBD1L;
        p_62 = ((((safe_mod_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(((safe_div_func_int16_t_s_s((250UL ^ ((safe_div_func_int64_t_s_s(0xE4F1A1E6DEAED54FLL, ((((safe_mod_func_uint64_t_u_u(0xE843D8BAA40D6DD5LL, (safe_rshift_func_int8_t_s_u(((((safe_add_func_int16_t_s_s((safe_sub_func_uint64_t_u_u(g_4, ((safe_lshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(0xD4L, (safe_lshift_func_uint16_t_u_u(p_62, (safe_div_func_uint8_t_u_u(g_4, p_62)))))), g_4)) < g_4))), g_4)) & l_152) & 0xEEE9A18863885E37LL) & l_152), g_4)))) > g_4) > l_152) | 0xBBE26AF1C4852B1BLL))) >= (-1L))), p_64)) < 4294967295UL), l_153)), 15)), g_4)) <= p_63) == p_62) >= 0x21954321B6B7D2F2LL);
        l_176 = (safe_div_func_uint32_t_u_u(((((g_4 <= (((safe_rshift_func_int16_t_s_u((p_62 >= (((p_64 , (((((g_4 < (((((safe_sub_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_s(((((safe_rshift_func_uint16_t_u_u(3UL, (safe_div_func_int64_t_s_s(6L, 0xEBF9289730A75DB7LL)))) == ((safe_div_func_int64_t_s_s(((((safe_sub_func_int16_t_s_s((((((safe_add_func_uint32_t_u_u(l_122, (safe_rshift_func_int16_t_s_u(g_4, 13)))) >= l_100) & 0xEB29L) , g_4) | 8UL), 0xFBEFL)) <= l_153) == 0x7022D3B1C7E41B64LL) != p_62), p_63)) < 0L)) != l_122) , g_4), 6)) < p_64), 0xCBL)) && l_153) & p_64) , l_152) , 1UL)) | l_152) != g_4) && 4294967295UL) <= g_4)) >= p_64) <= l_174)), 9)) || 0x4AE6L) != 0x67F3A6B8L)) == l_175) , p_63) <= l_175), g_4));
        l_190 |= ((((safe_sub_func_int16_t_s_s((((((safe_mul_func_int8_t_s_s(l_176, (((~3L) >= (((((safe_mul_func_uint8_t_u_u(0x10L, 0UL)) || ((g_4 > g_4) , (((-1L) != (safe_mod_func_uint8_t_u_u(((safe_mod_func_int8_t_s_s((65530UL > (g_4 <= g_4)), p_62)) , 0x2DL), 6UL))) ^ 1L))) & g_4) , l_152) , l_125)) || p_63))) & g_188) , g_189) >= l_100) , p_63), (-3L))) | l_174) != 255UL) & p_63);
    }
    else
    {
        uint32_t l_191 = 0x8C0632B8L;
        ++l_191;
        if ((((safe_sub_func_int64_t_s_s((safe_mul_func_uint8_t_u_u((0L & ((((((g_189 ^ ((g_189 == (((safe_mul_func_uint8_t_u_u((0x4BL | ((((safe_mul_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((0x5409261988898D0BLL == (((safe_add_func_uint32_t_u_u((safe_mul_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(l_122, ((safe_div_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(((((safe_sub_func_int32_t_s_s(g_188, g_4)) & (((safe_sub_func_int64_t_s_s((p_63 | g_188), l_191)) & 4UL) > l_191)) , 0x8805FBE3L) , 0xAB33L), l_122)), l_191)) != 4294967295UL))), l_100)), l_220)) < 0xC6L) == 4294967294UL)), p_62)), p_63)) ^ l_191) , 0xDC25L) , 0xAAL)), g_188)) == p_63) | l_191)) > l_191)) && p_62) < 0x44A3L) != g_4) , g_189) >= 0UL)), g_189)), 0x213F8C49FD6B0DCDLL)) <= l_220) , 0xDF43112EL))
        {
            g_225 = (safe_lshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(g_189, 3)), 5));
        }
        else
        {
            g_232 = ((((g_225 , g_188) == (g_188 | (((safe_mul_func_uint8_t_u_u((0x6381L | 1L), (~(p_64 || (l_191 < (((+0x6CL) >= (safe_mod_func_uint8_t_u_u(p_63, l_176))) & g_225)))))) >= 1L) ^ g_188))) >= p_64) < 0x98L);
            return g_4;
        }
    }
    if ((((safe_add_func_uint8_t_u_u((((safe_div_func_uint64_t_u_u((p_62 < (0x97BF4D477D6962B2LL ^ (((p_64 == ((safe_mod_func_uint16_t_u_u((safe_div_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(((g_189 > g_188) <= l_220), 65535UL)), 7L)), (safe_div_func_int64_t_s_s((((safe_mul_func_uint8_t_u_u((l_100 , l_220), g_188)) & g_225) ^ 0xA69DL), 0x9E8EBB9B1E83F6A4LL)))) == p_62)) , l_100) != l_176))), p_64)) ^ g_189) || 4L), l_100)) != 0x7036L) != g_189))
    {
        int16_t l_247 = 0xADB4L;
        p_62 = l_247;
        g_266 = (0x5BL | ((l_247 , (safe_mul_func_uint16_t_u_u(9UL, 0x8381L))) ^ ((safe_lshift_func_uint16_t_u_u(65533UL, (((safe_lshift_func_int16_t_s_u((safe_mul_func_int16_t_s_s((p_64 != ((safe_lshift_func_uint8_t_u_u(l_122, 4)) < ((safe_div_func_uint64_t_u_u((0x2BL ^ (safe_rshift_func_int8_t_s_s(0x7AL, 3))), l_220)) || g_188))), p_62)), 2)) > p_63) <= 0UL))) < l_247)));
    }
    else
    {
        uint16_t l_269 = 0x8BABL;
        int8_t l_283 = 0x69L;
        int32_t l_284 = (-3L);
        p_62 = 0xFF72D6A1L;
        l_284 = (((safe_div_func_int32_t_s_s(l_269, (safe_mul_func_int16_t_s_s((safe_sub_func_int8_t_s_s((+((safe_rshift_func_int16_t_s_s((((+(!p_64)) | 0x215010C314D7034ALL) && (p_64 < 0x1682D74585E3A436LL)), 13)) == ((p_64 & 0xB25FE38C59D00192LL) <= ((safe_lshift_func_uint16_t_u_s((safe_mul_func_int8_t_s_s(((g_266 >= (((((0xDCBC0DA51562CACFLL || l_269) || p_63) , 255UL) ^ g_266) >= l_283)) , g_266), l_269)), p_62)) <= g_266)))), g_188)), g_225)))) <= 0UL) > l_283);
    }
    l_176 = p_62;
    return g_266;
}
static int8_t func_65(int32_t p_66, int64_t p_67, uint32_t p_68, int32_t p_69, int32_t p_70)
{
    int16_t l_91 = 0x581CL;
    p_69 = ((safe_unary_minus_func_uint64_t_u(((safe_add_func_int64_t_s_s((safe_mul_func_uint8_t_u_u((+((safe_add_func_int64_t_s_s((safe_add_func_int16_t_s_s((+0x88DFEF28ED3351F4LL), 1UL)), ((g_4 >= 2UL) & (safe_add_func_uint8_t_u_u((((l_91 >= 18446744073709551606UL) && 0xF497A847L) || (safe_add_func_int32_t_s_s((g_4 < (safe_rshift_func_uint16_t_u_s((safe_mod_func_uint64_t_u_u((((g_4 , p_67) >= 0xCD5918CD8B12ACF1LL) > g_4), g_4)), 7))), l_91))), 1UL))))) , l_91)), 1L)), (-3L))) , 0x60F1475AC3517D3ELL))) , p_70);
    return p_69;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_4;
    csmith_sink_ = g_188;
    csmith_sink_ = g_189;
    csmith_sink_ = g_225;
    csmith_sink_ = g_232;
    csmith_sink_ = g_266;
    csmith_sink_ = g_339;
    csmith_sink_ = g_421;
    csmith_sink_ = g_429;
    csmith_sink_ = g_431;
    csmith_sink_ = g_432;
    csmith_sink_ = g_435;
    csmith_sink_ = g_461;
    csmith_sink_ = g_506;
    csmith_sink_ = g_516;
    csmith_sink_ = g_520;
    csmith_sink_ = g_521;
    csmith_sink_ = g_522;
    csmith_sink_ = g_547;
    csmith_sink_ = g_564;
    csmith_sink_ = g_638;
    csmith_sink_ = g_785;
    csmith_sink_ = g_786;
    csmith_sink_ = g_787;
    csmith_sink_ = g_847;
    platform_main_end(0,0);
    return 0;
}
