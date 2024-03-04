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
static uint32_t g_38 = 4294967295UL;
static int32_t g_96 = 6L;
static uint8_t g_97 = 7UL;
static int64_t g_113 = (-1L);
static int16_t g_123 = 0xEA40L;
static int16_t g_124 = 1L;
static int8_t g_125 = 0L;
static int16_t g_131 = 0xCDC6L;
static int8_t g_132 = 0x2DL;
static int32_t g_167 = 1L;
static uint32_t g_168 = 0xD91EE60EL;
static uint16_t g_189 = 0xACCFL;
static int16_t g_191 = 1L;
static uint64_t g_239 = 0x5696D624557DD34DLL;
static int64_t g_278 = 8L;
static uint16_t g_279 = 3UL;
static int32_t g_311 = 0xF3EA2FF5L;
static uint32_t g_312 = 5UL;
static uint64_t g_341 = 18446744073709551613UL;
static uint32_t g_379 = 0x02ED9ACAL;
static int8_t g_380 = 0x3CL;
static int16_t g_398 = (-9L);
static int64_t g_417 = (-9L);
static uint16_t g_434 = 0x46FAL;
static uint32_t g_476 = 18446744073709551615UL;
static uint32_t g_477 = 0x25ECAED4L;
static uint8_t g_482 = 0x83L;
static uint64_t g_543 = 0x6FCDEE4A86C97D14LL;
static int32_t g_601 = 0L;
static uint32_t g_605 = 0xE3DE9200L;
static int32_t g_721 = (-1L);
static uint32_t g_747 = 0UL;
static uint16_t g_780 = 65534UL;
static uint32_t g_862 = 18446744073709551609UL;
static uint16_t g_880 = 0x2D31L;
static uint16_t g_883 = 0x620FL;
static int16_t func_1(void);
static uint16_t func_5(uint8_t p_6);
static int16_t func_7(uint32_t p_8, int32_t p_9, int32_t p_10, uint32_t p_11);
static uint32_t func_12(int16_t p_13, int16_t p_14, int32_t p_15, uint32_t p_16, int16_t p_17);
static int16_t func_18(uint32_t p_19, int32_t p_20);
static int32_t func_21(uint8_t p_22, int64_t p_23, int32_t p_24, uint16_t p_25);
static int64_t func_26(uint16_t p_27, uint8_t p_28, uint32_t p_29, int32_t p_30);
static int32_t func_41(int32_t p_42, int32_t p_43, int16_t p_44, int64_t p_45);
static uint64_t func_55(uint32_t p_56, uint8_t p_57);
static int16_t func_61(int16_t p_62, uint32_t p_63);
static int16_t func_1(void)
{
    uint8_t l_4 = 255UL;
    int32_t l_37 = 1L;
    uint16_t l_282 = 65535UL;
    uint16_t l_804 = 0xD21AL;
    int64_t l_805 = 0x0CA4558568ACF380LL;
    uint64_t l_859 = 18446744073709551613UL;
    int64_t l_860 = (-10L);
    int8_t l_861 = 1L;
    if (((safe_mod_func_int16_t_s_s(l_4, func_5((((func_7(func_12(l_4, func_18(l_4, func_21(l_4, ((0x00L < ((func_26((~(((1L && ((safe_div_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u(0xE974L, (safe_unary_minus_func_uint8_t_u((((l_37 | g_38) < g_38) <= g_38))))), 0x0B91EE4CL)) > g_38)) & 0UL) >= g_38)), l_4, l_37, l_4) && l_282) == l_4)) <= l_282), l_4, g_123)), g_311, g_417, l_37), l_282, l_37, l_282) , 0UL) || g_605) , g_398)))) <= 1L))
    {
        uint32_t l_781 = 18446744073709551606UL;
        uint8_t l_814 = 250UL;
        g_601 = l_781;
        g_601 = (((safe_div_func_uint8_t_u_u((g_278 == (((safe_mod_func_int16_t_s_s((((safe_unary_minus_func_uint32_t_u(((safe_rshift_func_int16_t_s_u((safe_sub_func_int16_t_s_s((((((safe_unary_minus_func_int8_t_s((safe_mod_func_uint8_t_u_u(g_96, (safe_add_func_uint64_t_u_u(g_747, g_721)))))) >= (safe_div_func_uint16_t_u_u((safe_add_func_int8_t_s_s(l_781, (l_4 && g_191))), (safe_sub_func_uint32_t_u_u((g_341 & (((((safe_rshift_func_uint16_t_u_s(((((g_543 != 0xD1L) && 0L) , g_379) >= g_189), 12)) && g_278) >= (-1L)) , l_781) , l_37)), 1UL))))) != l_282) > 0x28A4CDD3L) >= l_804), 1L)), 14)) >= 6L))) ^ l_781) , g_113), 65526UL)) ^ g_113) | g_543)), g_279)) | 0UL) > l_781);
        g_601 ^= ((l_805 & ((safe_sub_func_int32_t_s_s(l_781, 0xC67A710CL)) && (g_543 < (l_781 <= l_4)))) | (safe_lshift_func_uint16_t_u_s((l_4 , (((g_167 , (safe_add_func_int32_t_s_s(8L, g_311))) < 0xACD502BFL) , l_37)), l_814)));
        g_721 |= (safe_div_func_int8_t_s_s((safe_div_func_int16_t_s_s(((safe_sub_func_uint64_t_u_u((((safe_sub_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((g_278 , (safe_div_func_uint64_t_u_u((safe_mod_func_uint64_t_u_u((l_37 , (0x2DC9DB21FF5F84A0LL & (safe_mod_func_int32_t_s_s((safe_mod_func_int8_t_s_s((safe_sub_func_int16_t_s_s(l_781, ((safe_div_func_uint8_t_u_u(0x80L, (0x95AE8B41L | (safe_lshift_func_int8_t_s_s((1UL || ((l_814 , 0L) ^ 0x43478099L)), 2))))) <= 0x009D106A38E5EAA8LL))), 0xDCL)), 0x5547CAE0L)))), l_781)), (-1L)))), 0xF86749AFL)), g_605)) != g_380) > g_780), l_37)) || g_167), l_781)), g_380));
    }
    else
    {
        uint64_t l_858 = 18446744073709551609UL;
        if ((((safe_lshift_func_int16_t_s_s((((((safe_sub_func_int8_t_s_s(((((safe_lshift_func_uint8_t_u_u(((+(1L == 3UL)) ^ (((0x01L && (((-2L) < (safe_lshift_func_int16_t_s_s(((((safe_mod_func_int64_t_s_s(((g_38 , (safe_mod_func_int8_t_s_s(g_780, (safe_add_func_uint64_t_u_u((g_605 & (safe_mod_func_uint16_t_u_u((((((((((l_4 | ((((safe_add_func_int64_t_s_s((l_37 && 0x23D4L), (-7L))) != l_282) | (-1L)) , 0x7B9BA1CD3E25E155LL)) != l_805) == l_858) , 0x91C028FA47114449LL) , l_37) | 0xEE45E571L) <= l_858) < g_482) > l_858), l_282))), g_605))))) , g_417), l_4)) && 0UL) , l_282) >= l_858), g_132))) ^ 0UL)) | g_312) , 0x2A13701DL)), g_96)) > l_282) != l_858) < l_804), l_858)) >= g_191) <= l_805) >= l_859) && 0xFA24088F708C92BCLL), 12)) , l_860) == g_189))
        {
            ++g_862;
        }
        else
        {
            uint32_t l_879 = 0UL;
            int8_t l_890 = (-1L);
            int32_t l_910 = 1L;
            int8_t l_941 = (-1L);
            for (g_312 = 0; (g_312 < 59); ++g_312)
            {
                int32_t l_867 = 0x585C68C1L;
                int32_t l_881 = 0L;
                int32_t l_882 = 0L;
                g_601 = (l_867 || (((safe_sub_func_int16_t_s_s(((g_96 || g_601) | (((((((safe_sub_func_uint8_t_u_u((((((safe_mod_func_int64_t_s_s((0UL & (0x6AL || ((((((g_125 ^ (-7L)) & ((safe_unary_minus_func_uint64_t_u(g_780)) , (safe_rshift_func_int8_t_s_s(((((safe_add_func_int64_t_s_s((1UL | (-2L)), 3L)) <= l_37) , g_379) > 4294967292UL), 0)))) != g_721) ^ g_189) & l_879) || l_858))), 4UL)) & 0x524DB425F3536F28LL) ^ g_113) && g_605) && 0x1CA4A4E6L), l_804)) | 0UL) , g_96) && l_867) <= 1UL) ^ g_312) || 1UL)), g_880)) , 0UL) & 0xE46BL));
                --g_883;
                l_910 = ((safe_mod_func_uint64_t_u_u((safe_rshift_func_int16_t_s_s((((l_890 , (0x30F90AA0L & l_804)) > (((safe_unary_minus_func_int8_t_s((safe_div_func_uint32_t_u_u((safe_sub_func_int64_t_s_s((safe_sub_func_int8_t_s_s(((safe_div_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(0x48D2L, (g_96 ^ (safe_add_func_int8_t_s_s(0x3BL, (0xEB12A47669F8B115LL <= ((l_890 < ((((safe_sub_func_int16_t_s_s((safe_add_func_int8_t_s_s(((l_867 , l_858) != 4294967295UL), l_867)), 0x7C5DL)) || g_398) && 0xCB54L) >= 0x166DECCDC1A76C9ELL)) && 0UL))))))), 13)) && g_168), l_867)) , (-10L)), g_168)), l_858)), g_482)))) , l_882) , g_880)) & l_890), 9)), g_476)) == 0L);
                for (g_278 = 0; (g_278 > 10); g_278 = safe_add_func_int64_t_s_s(g_278, 3))
                {
                    g_601 = (0x92E6L & (safe_sub_func_int32_t_s_s((safe_add_func_int64_t_s_s(g_341, (((4294967295UL < (safe_div_func_int32_t_s_s((safe_sub_func_uint32_t_u_u((safe_div_func_uint32_t_u_u((safe_sub_func_uint64_t_u_u(0x789E923C09D82609LL, ((safe_add_func_int32_t_s_s(0xE02A17D2L, l_804)) , (safe_add_func_int32_t_s_s(l_910, 9UL))))), l_910)), g_311)), 4294967295UL))) && 1UL) , l_858))), 0x4BCEF905L)));
                    l_910 = (((0L & (((safe_add_func_int8_t_s_s(((safe_sub_func_uint64_t_u_u(((+(+(((l_867 < (((g_132 ^ l_882) , g_189) == (safe_sub_func_int64_t_s_s((-9L), (l_858 == (safe_rshift_func_int8_t_s_s((safe_sub_func_int8_t_s_s(((g_167 >= (l_858 && l_941)) <= l_858), g_601)), 7))))))) <= g_131) ^ l_858))) <= l_882), g_97)) >= 0xA1D78CFF22FEB58ELL), (-6L))) , g_398) > 4294967286UL)) == 248UL) & l_858);
                }
            }
            return g_132;
        }
    }
    return g_123;
}
static uint16_t func_5(uint8_t p_6)
{
    uint32_t l_685 = 0x47F7494FL;
    int64_t l_702 = (-1L);
    int64_t l_703 = 0L;
    int32_t l_739 = 1L;
    int32_t l_740 = 0x41CAD40FL;
    int32_t l_742 = (-10L);
    int32_t l_746 = 0xB505FA7FL;
    uint32_t l_779 = 0xF4206491L;
    if ((2L ^ ((g_124 , g_123) > ((safe_sub_func_uint8_t_u_u((l_685 > (((p_6 , (g_278 , (safe_mod_func_uint32_t_u_u(((((((g_482 || ((p_6 | ((p_6 < p_6) && (-1L))) | p_6)) || p_6) <= 1L) ^ p_6) != p_6) , 0x649451FEL), (-1L))))) ^ g_239) == p_6)), 253UL)) > p_6))))
    {
        return g_191;
    }
    else
    {
        int64_t l_697 = 0xAE41FBABFE3105CDLL;
        int32_t l_743 = 0xCF4EAA83L;
        if ((((((safe_add_func_uint64_t_u_u(((0x7890L > (((((g_124 , (safe_rshift_func_int8_t_s_u(((safe_mod_func_int16_t_s_s((safe_unary_minus_func_uint32_t_u(((((safe_rshift_func_int8_t_s_s(l_697, 2)) , (safe_rshift_func_uint8_t_u_s(l_685, (0x654FB5CBL || ((safe_mod_func_int64_t_s_s(((((p_6 >= g_168) < (l_702 < (l_703 || 0xDA34L))) && 1UL) && l_697), p_6)) || p_6))))) ^ g_125) == g_279))), l_697)) > 0x4A85L), 4))) & l_697) | 1L) <= g_38) , 1L)) ^ l_702), g_434)) < l_703) > g_341) <= 0x7537E989L) && (-9L)))
        {
            uint32_t l_706 = 18446744073709551614UL;
            for (g_398 = 0; (g_398 > (-8)); g_398 = safe_sub_func_int64_t_s_s(g_398, 6))
            {
                return l_706;
            }
            g_721 = ((safe_rshift_func_uint8_t_u_u(l_706, ((+(safe_lshift_func_int16_t_s_u(((p_6 >= ((((~((safe_mod_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(0x50L, 7)), (g_239 & (safe_div_func_int32_t_s_s(l_703, p_6))))) & l_706)) == p_6) < ((g_721 && (-9L)) == 9UL)) > l_706)) ^ l_685), 0))) ^ g_132))) , 0xB5ECC560L);
        }
        else
        {
            uint64_t l_725 = 2UL;
            int16_t l_736 = 1L;
            g_721 ^= (((safe_div_func_int32_t_s_s(((((~(4294967295UL && 1UL)) < p_6) >= l_725) < (safe_mod_func_uint32_t_u_u((((((((safe_div_func_int32_t_s_s((safe_div_func_uint32_t_u_u((safe_sub_func_uint64_t_u_u(l_725, (safe_sub_func_uint32_t_u_u((l_685 <= l_703), l_703)))), 0x12E8E31CL)), p_6)) > g_482) , g_434) & g_97) >= l_725) != l_736) == 0x87CB0138F2BE5FB2LL), 0x6DB067AFL))), 0x487429C6L)) && g_605) | l_697);
        }
        for (g_543 = 0; (g_543 != 54); g_543 = safe_add_func_uint64_t_u_u(g_543, 3))
        {
            int64_t l_741 = 4L;
            int32_t l_744 = 1L;
            int32_t l_745 = 9L;
            uint32_t l_750 = 0x6CD8C874L;
            uint8_t l_759 = 252UL;
            g_747++;
            g_721 |= (((((l_750 & 0x56L) & ((((((((((l_750 && (((((safe_sub_func_int8_t_s_s(0x85L, (((safe_add_func_int8_t_s_s((l_745 < l_744), l_697)) & (((p_6 != (safe_lshift_func_int8_t_s_u(((l_742 & (-1L)) >= g_279), 2))) || g_312) > p_6)) & 1UL))) , 0L) || l_745) && g_191) > l_746)) != 0L) > l_741) , 0x156A169BL) , g_398) <= 0x9645L) > 18446744073709551612UL) & p_6) || l_759) || 0xDD79B2770CD45CBELL)) != g_125) && l_759) , 0L);
        }
        for (g_131 = (-23); (g_131 == 1); ++g_131)
        {
            int32_t l_762 = 2L;
            l_762 = p_6;
        }
    }
    l_742 = ((safe_unary_minus_func_uint8_t_u(p_6)) != ((safe_mod_func_int32_t_s_s(p_6, p_6)) ^ (g_601 , ((((safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(((((safe_div_func_int32_t_s_s((((((safe_rshift_func_int16_t_s_s(((((!((l_685 == (safe_rshift_func_int16_t_s_u(p_6, 5))) && 0xF5L)) >= (6UL && p_6)) && g_434) , p_6), g_97)) != g_605) != g_97) , p_6) || l_703), g_191)) == l_685) && p_6) > l_779), 0x679EA7DEL)), 5)), p_6)) > g_482) & p_6) & p_6))));
    return g_780;
}
static int16_t func_7(uint32_t p_8, int32_t p_9, int32_t p_10, uint32_t p_11)
{
    uint8_t l_642 = 0UL;
    int32_t l_647 = 0x43528DA6L;
    uint32_t l_651 = 4294967286UL;
    g_601 |= (safe_lshift_func_int16_t_s_s(l_642, (safe_mod_func_uint8_t_u_u((0xB5EA7516BC8E85CCLL || ((safe_mod_func_uint8_t_u_u(0x21L, (l_642 && p_10))) | l_642)), ((l_642 , (p_10 , ((1UL != (-1L)) > 0x2F1AL))) , l_642)))));
    l_647 = 0xB9EB28B0L;
    g_601 = (safe_unary_minus_func_int8_t_s(((((safe_lshift_func_uint16_t_u_u(l_651, 3)) && ((safe_add_func_uint16_t_u_u((safe_add_func_uint64_t_u_u(l_647, ((safe_add_func_int32_t_s_s((safe_div_func_uint32_t_u_u((((!(((g_601 && (!((p_8 == (safe_mod_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(((safe_add_func_uint8_t_u_u((((safe_rshift_func_uint16_t_u_s((safe_div_func_uint16_t_u_u(0xB6D5L, ((safe_sub_func_int64_t_s_s((safe_lshift_func_int16_t_s_u(0x269AL, 10)), ((safe_sub_func_int64_t_s_s((safe_div_func_int8_t_s_s(((+((p_10 == 4294967295UL) , (((safe_add_func_uint8_t_u_u(l_651, 0xEBL)) || g_189) , 0x9EL))) ^ 0x22L), p_8)), 0xD8F9BD7691855961LL)) >= p_10))) & l_651))), p_8)) ^ l_642) & 0x201FL), p_9)) != 0x10141923634ABF20LL), 4)), g_113))) , g_239))) , g_476) > p_10)) ^ 9L) , p_11), p_11)), p_10)) , g_124))), g_124)) || p_8)) | g_131) > g_168)));
    return l_651;
}
static uint32_t func_12(int16_t p_13, int16_t p_14, int32_t p_15, uint32_t p_16, int16_t p_17)
{
    uint32_t l_512 = 0UL;
    int8_t l_513 = 0L;
    --g_477;
    for (g_132 = 0; (g_132 == (-8)); g_132--)
    {
        g_482++;
    }
    for (g_113 = (-9); (g_113 < (-10)); g_113--)
    {
        int16_t l_511 = 0x3E2DL;
        uint8_t l_539 = 0xF9L;
        uint64_t l_585 = 1UL;
        int32_t l_606 = 1L;
        uint8_t l_622 = 255UL;
        if (((p_14 != (safe_div_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_s(((((((((safe_lshift_func_int16_t_s_u(g_168, 7)) ^ (((((g_278 != (safe_sub_func_uint64_t_u_u((safe_div_func_int8_t_s_s((65531UL ^ ((safe_lshift_func_uint8_t_u_s((g_123 , (safe_add_func_uint8_t_u_u(((safe_div_func_uint8_t_u_u((p_13 , (safe_lshift_func_uint8_t_u_s(((safe_rshift_func_uint16_t_u_u((!((safe_sub_func_int16_t_s_s((g_379 >= g_167), ((((((((+p_16) && (-1L)) && g_189) , l_511) && p_14) ^ l_511) && p_16) ^ 9UL))) , g_97)), 4)) , p_13), l_511))), l_512)) >= 0x30E5366CL), l_513))), g_341)) && l_512)), 253UL)), 0UL))) == g_131) | 0L) || 0x3E17L) , p_14)) < 0UL) | g_167) | p_16) || p_17) , (-1L)) | 0xC005599FL), 3)) == g_123), g_132))) , g_191))
        {
            uint64_t l_524 = 0x1B261DA1847B696BLL;
            uint32_t l_600 = 1UL;
            uint8_t l_615 = 0xB8L;
            if (((((0L && ((l_512 == p_16) , (safe_div_func_int16_t_s_s(((((safe_div_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s((((l_524 < (((g_113 , 0x9B1D3D90L) >= ((safe_add_func_int64_t_s_s((safe_mod_func_int16_t_s_s(l_513, ((safe_lshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(((safe_sub_func_int8_t_s_s(l_511, (0x6A3AL > p_17))) , 2UL), p_15)), p_16)) , l_512))), g_398)) & 0xEA4F0AF4L)) < 0x4DL)) && 65532UL) ^ g_167), 6)), 9)), 4)), g_278)) || 4294967289UL) > p_15) || 65535UL), 0x9EC7L)))) && g_476) >= 0xDC9772731BEFFFF9LL) >= g_189))
            {
                int64_t l_572 = (-2L);
                int32_t l_624 = (-10L);
                if ((l_511 , (safe_sub_func_uint64_t_u_u(((safe_rshift_func_uint16_t_u_s((l_539 , (p_14 , (p_14 == 3L))), 1)) || l_511), g_124))))
                {
                    uint16_t l_542 = 65535UL;
                    for (p_14 = 0; (p_14 <= 14); p_14 = safe_add_func_uint32_t_u_u(p_14, 4))
                    {
                        return l_542;
                    }
                    g_543++;
                    if ((18446744073709551611UL <= (safe_mod_func_int8_t_s_s((((safe_add_func_int32_t_s_s((((safe_add_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(g_380, ((safe_add_func_int16_t_s_s((((safe_lshift_func_int8_t_s_s(g_278, l_539)) && (~(((((safe_add_func_int32_t_s_s((((((safe_rshift_func_int8_t_s_u(((!p_14) == g_434), 6)) , ((safe_rshift_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u((((((l_513 != ((safe_mod_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((0UL && (0x0B17C0A01B54EBC9LL != g_341)), g_113)), 0xDAEAL)) | 0x9594L)) , p_17) , g_168) == g_96) & g_168), l_572)), 8)) <= g_379)) , 9UL) <= p_15) <= l_572), l_572)) >= g_239) != p_15) , g_341) ^ p_16))) | l_539), g_417)) & p_15))), p_13)) & l_513) ^ p_14), l_524)) , 0xA17DCD40L) <= 4294967295UL), 247UL))))
                    {
                        int32_t l_581 = 0xD369A7CBL;
                        p_15 = ((((p_16 > l_524) != (safe_mul_func_uint64_t_u_u(p_13, (((safe_lshift_func_int16_t_s_s(((0UL & g_279) || (l_572 < p_13)), 1)) && ((0x63L != ((((safe_mod_func_int32_t_s_s((safe_mod_func_int32_t_s_s(l_581, g_482)), g_124)) , g_380) ^ g_311) == g_434)) || p_14)) > g_380)))) > l_513) > l_581);
                        g_601 = (~(safe_div_func_uint8_t_u_u(g_131, ((l_585 >= ((0x534BL > ((((((-1L) & (safe_lshift_func_int8_t_s_u(((0xDFD85F67L == (((g_543 == (l_581 | ((safe_div_func_uint64_t_u_u(((safe_add_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u(4294967294UL, (safe_sub_func_int16_t_s_s((((safe_div_func_uint32_t_u_u(g_341, p_17)) != 0UL) >= p_13), g_239)))), g_543)) , l_600), g_482)) && g_168))) < 1UL) || p_15)) > l_581), 2))) & 0xE6L) , 251UL) != l_513) & 0L)) , l_600)) , 8L))));
                        g_601 ^= ((safe_unary_minus_func_int16_t_s(l_511)) != (safe_rshift_func_uint16_t_u_u(g_482, 15)));
                        if (g_168)
                            continue;
                    }
                    else
                    {
                        return l_512;
                    }
                }
                else
                {
                    l_606 ^= g_605;
                    for (p_16 = (-10); (p_16 < 47); ++p_16)
                    {
                        int64_t l_623 = 0x834209ACBCEC4523LL;
                        l_624 = (((safe_add_func_uint64_t_u_u((((p_17 , 0x56FA1C93L) , (((((0L == ((!((+(((safe_add_func_uint64_t_u_u(l_615, p_17)) && g_434) & p_16)) >= ((((safe_div_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_u(((-1L) || l_572), 10)), 1)) && 8UL), p_14)) == 0xC57EL) < l_622) != p_16))) == g_239)) & p_15) | (-8L)) <= g_132) & l_623)) > 1UL), p_14)) == 0x5971CE6CL) == l_622);
                        p_15 = 0x78CE95AAL;
                    }
                }
                if (l_512)
                    break;
                return l_512;
            }
            else
            {
                for (g_279 = 0; (g_279 != 32); ++g_279)
                {
                    p_15 = 0x92E5A908L;
                }
                for (g_97 = 11; (g_97 < 36); ++g_97)
                {
                    for (l_539 = (-13); (l_539 >= 49); l_539 = safe_add_func_int16_t_s_s(l_539, 9))
                    {
                        return g_601;
                    }
                }
            }
        }
        else
        {
            uint32_t l_639 = 18446744073709551606UL;
            p_15 = (p_13 , (safe_div_func_uint32_t_u_u(g_482, ((g_312 < (p_17 <= (0xFF4DL < (((p_17 < (0x481AL ^ p_17)) ^ ((safe_rshift_func_int16_t_s_s(((safe_div_func_int8_t_s_s((safe_mod_func_int16_t_s_s(l_639, 0x642AL)), p_15)) < 0x7DL), p_17)) >= (-1L))) , g_279)))) | g_123))));
        }
    }
    return l_513;
}
static int16_t func_18(uint32_t p_19, int32_t p_20)
{
    uint16_t l_458 = 0x4BD4L;
    int16_t l_459 = (-1L);
    int32_t l_460 = 0x772DA2DBL;
    uint16_t l_471 = 1UL;
    int32_t l_472 = 0xE64348B5L;
    uint64_t l_475 = 0xF928291F7142EE29LL;
    l_460 &= (!((safe_sub_func_uint16_t_u_u((p_20 ^ (safe_add_func_int16_t_s_s(1L, ((((safe_sub_func_uint16_t_u_u((((g_417 > g_311) , g_123) , (((g_379 < (safe_div_func_uint32_t_u_u((safe_mod_func_int64_t_s_s((((safe_sub_func_int32_t_s_s((g_168 >= ((safe_lshift_func_uint16_t_u_u((g_38 || ((safe_lshift_func_int8_t_s_s(((safe_div_func_int64_t_s_s(((safe_mod_func_int16_t_s_s((-1L), 0xB1F1L)) & 0UL), 18446744073709551606UL)) != g_168), 6)) > g_239)), g_278)) , l_458)), l_458)) , 0xB7BD85AF14D8A2F0LL) ^ 0x051B6310204A1551LL), 0xBB21BB53ACB93F0ELL)), 0xBD04F5E9L))) ^ l_458) , 65534UL)), l_458)) != 0x89C4L) && 0x2DF2L) || g_341)))), l_459)) == 4294967294UL));
    g_476 = ((safe_sub_func_uint32_t_u_u(((((safe_add_func_uint32_t_u_u((safe_add_func_uint64_t_u_u(g_380, (p_20 ^ (p_20 > (((safe_lshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_u((l_471 == (p_20 ^ ((g_311 & ((l_472 ^ g_132) ^ ((safe_rshift_func_int16_t_s_s(l_458, g_379)) > l_475))) >= 0x29DE70FEE4B1F402LL))), 11)), 5)) , l_475) < l_459))))), 6L)) && l_475) <= 0xDFB4A65AL) , p_20), g_341)) <= l_458);
    return l_472;
}
static int32_t func_21(uint8_t p_22, int64_t p_23, int32_t p_24, uint16_t p_25)
{
    uint16_t l_290 = 65526UL;
    int16_t l_363 = 0xF71FL;
    uint16_t l_364 = 0xB3E2L;
    uint32_t l_365 = 3UL;
    uint32_t l_397 = 4294967292UL;
    int32_t l_399 = (-9L);
    int32_t l_433 = 1L;
    if ((p_22 ^ (((((safe_rshift_func_int8_t_s_u(g_189, 1)) & ((safe_unary_minus_func_int8_t_s((-1L))) | (((((safe_add_func_uint16_t_u_u(((safe_add_func_int8_t_s_s(0x17L, (p_22 || ((l_290 <= (g_189 | (l_290 , (p_24 >= l_290)))) , l_290)))) >= l_290), l_290)) != l_290) && p_25) >= 1L) != 0x18F8EAD33D034B4DLL))) < 4294967287UL) < g_124) & l_290)))
    {
        uint32_t l_323 = 0xD5596D2BL;
        int8_t l_340 = 0xBAL;
        g_312 = (safe_lshift_func_int16_t_s_s((g_239 >= (safe_lshift_func_int16_t_s_s(((safe_add_func_uint8_t_u_u(255UL, ((safe_lshift_func_int16_t_s_u((safe_rshift_func_uint8_t_u_s((safe_add_func_uint8_t_u_u(((((safe_add_func_uint32_t_u_u(p_24, (safe_div_func_int32_t_s_s(p_24, ((-6L) || ((safe_div_func_int16_t_s_s(0x3796L, (safe_add_func_int32_t_s_s(((0x3E52E987L >= (5UL <= ((g_97 > 1UL) & g_279))) , (-1L)), 0x6125EB5EL)))) , g_311)))))) < 0x6AC741E85B112714LL) < g_132) <= g_189), l_290)), 0)), 3)) != 4294967287UL))) | g_167), 9))), 1));
        p_24 = (+(g_131 <= g_312));
        g_341 ^= ((((safe_sub_func_uint32_t_u_u((g_279 != ((safe_lshift_func_uint16_t_u_u((((safe_lshift_func_int16_t_s_u(l_290, 14)) <= ((+l_323) <= p_24)) != ((safe_sub_func_uint32_t_u_u((safe_mod_func_int64_t_s_s((safe_add_func_int32_t_s_s((safe_sub_func_int16_t_s_s(((((safe_rshift_func_int8_t_s_u((((((safe_div_func_uint16_t_u_u(65535UL, g_123)) < (g_125 > (((((g_168 && ((safe_div_func_uint16_t_u_u(((safe_div_func_int8_t_s_s(((p_23 , 0L) >= p_25), l_323)) , 0x481DL), 0x0234L)) | l_323)) | g_124) ^ p_24) > l_290) <= l_290))) & p_25) | p_22) < g_124), l_323)) <= g_124) >= l_340) , 0x70E6L), g_38)), l_290)), 0x43BCCA17B01C23CCLL)), p_22)) >= 0x9BL)), g_113)) != 0x92FCL)), 0x6C543C7BL)) , 0x97L) == 0L) == g_113);
    }
    else
    {
        int16_t l_344 = 0L;
        l_365 = ((safe_lshift_func_int8_t_s_u(((l_344 , (safe_lshift_func_int16_t_s_s(((g_341 || ((!((((safe_rshift_func_int8_t_s_u((g_341 ^ ((((((safe_lshift_func_uint16_t_u_u((+p_24), 11)) && (safe_sub_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(p_22, 6)), (safe_add_func_int32_t_s_s(0x18106815L, ((safe_div_func_int8_t_s_s(0xC8L, (((safe_lshift_func_int16_t_s_u(l_344, (p_25 == 0xE4E3L))) , p_24) && g_189))) == l_344)))))) , l_363) ^ p_23) , l_364) || g_168)), g_168)) < p_23) < 0x025E57FDA3C6B0DCLL) , l_290)) & 0x04A9637FF1DA434BLL)) && g_341), l_344))) > g_239), l_344)) , p_24);
    }
    if (((((((+(((0xAC702A8841FF7031LL >= (-1L)) , ((l_365 , (((safe_add_func_int64_t_s_s((-6L), (safe_lshift_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((safe_div_func_int8_t_s_s((1UL >= (l_290 > 65534UL)), (-1L))), g_167)), l_364)))) && l_364) == p_24)) | g_312)) >= p_25)) , 0xFFF069DAL) | 7L) < g_113) | 0x76L) | g_38))
    {
        int16_t l_378 = 0x7D5EL;
        uint32_t l_389 = 18446744073709551609UL;
        if ((~(safe_sub_func_int64_t_s_s(l_378, 2UL))))
        {
            g_379 ^= l_378;
        }
        else
        {
            g_380 = g_341;
        }
        g_398 = (safe_div_func_uint64_t_u_u((((safe_mod_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_s(l_290, 7)) | ((((safe_mod_func_uint16_t_u_u(l_389, (g_380 | ((safe_rshift_func_int16_t_s_u((g_379 <= (+g_189)), 12)) , (g_311 , g_341))))) ^ ((253UL < (safe_add_func_int64_t_s_s((safe_mod_func_int64_t_s_s(g_167, g_96)), 1L))) ^ g_97)) != l_365) || (-1L))), l_397)) , 0x3447BCE47EAB302BLL) >= g_123), g_191));
    }
    else
    {
        int8_t l_402 = 0x17L;
        int32_t l_414 = 0xCC881307L;
        int32_t l_418 = 0xE59004A7L;
        l_399 = 0L;
        l_418 = (safe_add_func_int8_t_s_s(l_402, ((safe_lshift_func_uint16_t_u_s((g_191 > ((safe_mod_func_uint64_t_u_u(((!g_191) <= (((safe_add_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_s(0xD1F3L, (((safe_rshift_func_int8_t_s_s(l_414, 1)) && ((g_278 || p_23) || ((safe_lshift_func_uint8_t_u_s((l_402 != (-10L)), 2)) , p_22))) != g_379))) , g_113), 0UL)) , p_22) < l_402)), 0x1E8D3F0CE087C829LL)) < l_414)), 13)) , g_417)));
        l_433 |= ((l_365 < ((safe_sub_func_int64_t_s_s((safe_sub_func_uint64_t_u_u((((((safe_lshift_func_int8_t_s_s((0x4B41A18ECCDEC75FLL ^ (safe_mod_func_uint16_t_u_u(0xBAE2L, g_167))), 5)) == g_398) & (safe_add_func_uint16_t_u_u(((((((0x26L & 255UL) , ((((safe_lshift_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(g_38, ((((p_25 != 18446744073709551615UL) & p_25) <= l_418) || l_414))), g_312)) <= p_22) > l_399) | p_23)) , 0x8AL) <= p_24) && g_38) >= 4294967286UL), p_23))) | 0UL) ^ p_22), l_399)), g_38)) <= l_290)) > (-4L));
        ++g_434;
    }
    return l_363;
}
static int64_t func_26(uint16_t p_27, uint8_t p_28, uint32_t p_29, int32_t p_30)
{
    uint64_t l_50 = 0x34D71B36C93846F2LL;
    int32_t l_192 = (-4L);
    uint64_t l_249 = 18446744073709551610UL;
    int32_t l_256 = 9L;
    for (p_30 = 0; (p_30 > (-2)); p_30--)
    {
        uint64_t l_118 = 18446744073709551614UL;
        int32_t l_122 = 0x2BD54EFEL;
        int32_t l_238 = 0x1A0BB31FL;
        if (func_41(g_38, (((safe_rshift_func_int16_t_s_s(0L, 10)) && (l_50 >= 0x3933B839L)) || (safe_div_func_int32_t_s_s((safe_lshift_func_int8_t_s_s(p_28, (func_55(p_28, g_38) >= (safe_lshift_func_int8_t_s_u((p_28 && l_50), 1))))), l_118))), l_50, g_113))
        {
            uint16_t l_126 = 0UL;
            for (g_38 = 0; (g_38 != 13); g_38++)
            {
                int32_t l_137 = 0x74D26467L;
                l_126++;
                for (l_126 = 0; (l_126 == 58); l_126 = safe_add_func_int64_t_s_s(l_126, 3))
                {
                    g_131 = (0x3A75L || p_30);
                }
                l_137 = ((g_132 < (safe_add_func_uint8_t_u_u((g_123 , (safe_lshift_func_uint16_t_u_u(l_137, 2))), 0L))) && ((safe_rshift_func_int16_t_s_u(((safe_rshift_func_uint8_t_u_u(g_113, 1)) & p_28), 3)) || (safe_rshift_func_uint16_t_u_s(l_137, (((safe_mod_func_int16_t_s_s(((safe_add_func_uint64_t_u_u(((safe_lshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(((l_137 >= ((safe_unary_minus_func_int8_t_s(g_123)) > 0xABD61F34L)) , l_118), p_28)), 7)) , g_96), g_97)) , 0x0FE3L), g_131)) > p_28) || p_30)))));
            }
            return p_29;
        }
        else
        {
            int16_t l_176 = 7L;
            int32_t l_190 = (-5L);
            uint8_t l_193 = 255UL;
            uint8_t l_255 = 0x6BL;
            for (p_27 = 0; (p_27 > 39); p_27 = safe_add_func_int16_t_s_s(p_27, 1))
            {
                int16_t l_161 = 0x3366L;
                int32_t l_236 = 0x042A1733L;
                g_168 = (safe_sub_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(((l_50 > l_161) & (((((0x14779B98L >= (0xDD2F3D6CL <= 0x74EB91FBL)) || g_132) > (!p_30)) , g_113) == (safe_mod_func_int8_t_s_s((safe_sub_func_uint64_t_u_u(l_118, p_30)), 0xCAL)))), g_167)), p_28));
                for (g_124 = 0; (g_124 == 0); ++g_124)
                {
                    uint8_t l_237 = 0UL;
                    int32_t l_242 = 0x6573C08DL;
                    if ((safe_lshift_func_uint16_t_u_s((!(safe_add_func_int64_t_s_s((l_176 & ((safe_lshift_func_uint16_t_u_u(65531UL, 8)) & p_27)), ((p_28 > (p_27 | (safe_mod_func_int64_t_s_s((~((((safe_rshift_func_int8_t_s_u(g_132, ((((((g_96 , ((((safe_lshift_func_int16_t_s_s((g_113 || l_50), 10)) && g_125) <= g_131) && 1L)) < 65527UL) , 0x6355L) > p_30) == g_131) ^ p_30))) <= 0x9DF0L) , 0x55567A96L) , g_131)), l_50)))) == (-8L))))), l_50)))
                    {
                        g_189 = (g_167 , ((p_30 & (((p_30 > (p_27 , (+((((0x9AL & p_27) == (p_27 && ((safe_rshift_func_int16_t_s_s(((l_50 & (18446744073709551608UL == g_168)) >= p_30), p_30)) > l_50))) == g_97) && g_97)))) <= g_125) , 0x6350L)) > g_124));
                        l_190 &= l_122;
                    }
                    else
                    {
                        ++l_193;
                    }
                    g_239 = (safe_add_func_uint64_t_u_u(p_29, (safe_lshift_func_uint16_t_u_u((((safe_mod_func_uint64_t_u_u(((p_29 > (safe_rshift_func_uint16_t_u_s(p_27, 3))) < ((safe_mod_func_uint16_t_u_u(g_131, (safe_rshift_func_uint16_t_u_u((safe_div_func_int16_t_s_s(((((~(~(safe_sub_func_int8_t_s_s(((safe_add_func_uint64_t_u_u(((safe_mod_func_int16_t_s_s((safe_mod_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(l_118, 6)), (safe_rshift_func_int8_t_s_s(((((safe_add_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s((safe_add_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u((p_28 || ((safe_rshift_func_uint16_t_u_s(((-7L) || 4294967290UL), 2)) , (safe_add_func_int32_t_s_s(g_132, g_131)))), 2)), 1UL)), 7)), g_167)) , l_236) >= l_190) ^ 7L), 7)))), 9L)) , p_29), g_125)) == 0xAD00L), l_161)))) , p_27) > 0x865313BCL) , l_237), l_238)), 14)))) , p_29)), 0x0B106958104EED90LL)) != 0x70L) <= (-1L)), g_167))));
                    l_242 = (safe_rshift_func_int8_t_s_s(g_239, 0));
                }
            }
            l_256 &= ((((safe_div_func_int64_t_s_s(((g_124 > (((safe_add_func_uint32_t_u_u((0x9A86176E3802CFFALL != (safe_lshift_func_int8_t_s_u(9L, l_249))), (((l_176 && ((((~((safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_s(((l_193 || (l_255 > (p_29 , l_238))) , g_131), g_124)), g_132)) , g_168)) ^ l_118) , 0xC069BDD23608D486LL) & p_30)) && g_123) >= l_192))) | g_96) , l_122)) > l_118), g_189)) && l_190) || g_123) > g_125);
        }
        l_122 = (safe_sub_func_uint32_t_u_u((((safe_sub_func_uint16_t_u_u(0xFF28L, p_28)) != p_30) | ((0xCDCD6FD7L | ((g_167 < p_29) == (0x1733L == (safe_sub_func_int16_t_s_s((l_50 || (g_96 ^ 4294967291UL)), g_124))))) || 0x2C73AE872CB33821LL)), 6UL));
    }
    l_192 = ((safe_rshift_func_int8_t_s_s(((((p_30 != 1UL) != ((safe_div_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(((p_29 , (((safe_rshift_func_int8_t_s_u(p_27, (safe_rshift_func_int8_t_s_u(g_131, p_27)))) == (((safe_unary_minus_func_int32_t_s(((safe_lshift_func_int8_t_s_u(((p_29 < 0x5DL) == ((((safe_rshift_func_uint16_t_u_u(0xBE62L, p_27)) || l_256) <= g_167) & g_125)), g_38)) == g_131))) > g_131) && 0x5C51L)) != p_29)) , g_97), 6UL)), 1L)) | p_30)) , p_29) , l_50), 2)) , l_256);
    l_256 |= l_192;
    g_279++;
    return p_30;
}
static int32_t func_41(int32_t p_42, int32_t p_43, int16_t p_44, int64_t p_45)
{
    uint32_t l_119 = 2UL;
    p_43 = (g_38 , (p_42 > g_97));
    return l_119;
}
static uint64_t func_55(uint32_t p_56, uint8_t p_57)
{
    uint32_t l_58 = 0xBC01D4C3L;
    uint16_t l_78 = 65535UL;
    int64_t l_112 = 0xB5DC3D349FFB2EF7LL;
    uint32_t l_114 = 9UL;
    int32_t l_115 = 3L;
    g_97 = ((l_58 , (safe_lshift_func_int16_t_s_u(func_61((((((safe_mod_func_int8_t_s_s(((safe_div_func_int32_t_s_s(0L, (+(((-3L) < g_38) , (((g_38 > (safe_rshift_func_int16_t_s_u(((safe_unary_minus_func_uint8_t_u(l_58)) , ((l_58 == (!((65526UL == (+(safe_div_func_int64_t_s_s((((safe_lshift_func_int16_t_s_s(g_38, 14)) & p_57) > g_38), g_38)))) != g_38))) || 0x33686A8EL)), g_38))) >= l_58) , g_38))))) == p_56), 0xEDL)) == p_57) , 0x3236L) && p_57) ^ g_38), l_78), 13))) , (-5L));
    l_115 |= (safe_unary_minus_func_uint8_t_u(((g_96 >= (!0xCDB7CFF1L)) , ((safe_lshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(g_38, (safe_add_func_int64_t_s_s(l_58, (g_96 | (((p_56 , (safe_add_func_int64_t_s_s((safe_sub_func_int64_t_s_s((((((((2L <= (0x6A45L & ((((((((safe_rshift_func_int16_t_s_s(((((((((l_112 || g_96) , l_112) < g_97) || l_58) || p_56) , l_112) , l_78) > 0x8108B99CL), l_58)) | 0xADD72F777BDFF106LL) , g_113) < 0xE236B79BA4D29FB7LL) , p_56) < l_114) | 0UL) , 6UL))) & g_113) && l_112) == 6L) || 0xA3L) <= g_113) && l_78), 0x9E501E45A2DC96F0LL)), p_57))) ^ g_97) != p_57)))))), l_112)) < l_58))));
    return p_56;
}
static int16_t func_61(int16_t p_62, uint32_t p_63)
{
    uint64_t l_95 = 0UL;
    g_96 |= ((p_63 == p_62) & (((((g_38 && (p_63 , (safe_div_func_uint16_t_u_u((safe_add_func_int8_t_s_s((safe_add_func_uint8_t_u_u(((g_38 , ((safe_lshift_func_int16_t_s_u(p_63, 15)) || (((safe_lshift_func_uint8_t_u_s(((safe_rshift_func_int16_t_s_s(0xDF81L, 9)) > g_38), (safe_add_func_int16_t_s_s(0x56F6L, l_95)))) < g_38) < g_38))) , 0UL), (-8L))), 0x5BL)), g_38)))) >= (-4L)) , g_38) , p_63) >= 0UL));
    return p_62;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_38;
    csmith_sink_ = g_96;
    csmith_sink_ = g_97;
    csmith_sink_ = g_113;
    csmith_sink_ = g_123;
    csmith_sink_ = g_124;
    csmith_sink_ = g_125;
    csmith_sink_ = g_131;
    csmith_sink_ = g_132;
    csmith_sink_ = g_167;
    csmith_sink_ = g_168;
    csmith_sink_ = g_189;
    csmith_sink_ = g_191;
    csmith_sink_ = g_239;
    csmith_sink_ = g_278;
    csmith_sink_ = g_279;
    csmith_sink_ = g_311;
    csmith_sink_ = g_312;
    csmith_sink_ = g_341;
    csmith_sink_ = g_379;
    csmith_sink_ = g_380;
    csmith_sink_ = g_398;
    csmith_sink_ = g_417;
    csmith_sink_ = g_434;
    csmith_sink_ = g_476;
    csmith_sink_ = g_477;
    csmith_sink_ = g_482;
    csmith_sink_ = g_543;
    csmith_sink_ = g_601;
    csmith_sink_ = g_605;
    csmith_sink_ = g_721;
    csmith_sink_ = g_747;
    csmith_sink_ = g_780;
    csmith_sink_ = g_862;
    csmith_sink_ = g_880;
    csmith_sink_ = g_883;
    platform_main_end(0,0);
    return 0;
}
