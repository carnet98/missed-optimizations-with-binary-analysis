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
   uint32_t f0;
   uint64_t f1;
   uint8_t f2;
   uint64_t f3;
   int32_t f4;
   int64_t f5;
   int64_t f6;
};
#pragma pack(pop)
static uint32_t g_6 = 0UL;
static struct S0 g_52 = {4294967295UL,6UL,0x91L,0x167519BA600AC80ELL,0xBF554C62L,0x41911659018101BCLL,0x42EE1E3C1DC0AC77LL};
static int16_t g_59 = (-1L);
static uint32_t g_66 = 18446744073709551615UL;
static int64_t g_69 = 0x2E9AD701FB033500LL;
static int32_t g_70 = 1L;
static int16_t g_71 = 0L;
static struct S0 g_77 = {0x6B665F1FL,0x74372BB1342F2784LL,0x30L,18446744073709551615UL,0x20880F5CL,0x85B35A07F58E9526LL,1L};
static int64_t g_90 = 5L;
static uint32_t g_302 = 18446744073709551607UL;
static int8_t g_339 = 0x72L;
static int8_t g_422 = 6L;
static uint16_t g_423 = 0UL;
static uint16_t g_428 = 0xE293L;
static int32_t g_469 = 0x5A1C0EE6L;
static uint32_t g_470 = 4294967295UL;
static uint32_t g_545 = 0xFE2853FEL;
static uint32_t g_549 = 1UL;
static int16_t g_671 = 0x54AEL;
static int16_t g_750 = 0x3FC2L;
static uint64_t g_836 = 7UL;
static uint32_t g_852 = 9UL;
static int64_t g_916 = (-8L);
static int64_t g_917 = 6L;
static int32_t g_918 = (-1L);
static int64_t g_920 = 0L;
static int64_t g_922 = 0x6F89FBE7244F6F6FLL;
static int8_t g_925 = (-8L);
static uint32_t g_927 = 18446744073709551612UL;
static int32_t g_930 = 0L;
static int8_t g_932 = 0x20L;
static int8_t g_933 = 1L;
static int32_t g_934 = (-1L);
static int64_t g_935 = (-10L);
static uint64_t g_936 = 18446744073709551615UL;
static int8_t func_1(void);
static int16_t func_2(uint8_t p_3, int16_t p_4, int32_t p_5);
inline static int8_t func_12(int32_t p_13, int32_t p_14, uint64_t p_15, int32_t p_16);
inline static uint64_t func_17(int64_t p_18, struct S0 p_19, int8_t p_20, uint32_t p_21);
inline static uint32_t func_24(int32_t p_25, uint32_t p_26, uint16_t p_27);
inline static int8_t func_28(uint64_t p_29);
inline static int32_t func_34(uint16_t p_35, uint16_t p_36, uint8_t p_37, struct S0 p_38, uint32_t p_39);
inline static int64_t func_41(uint32_t p_42, int64_t p_43, uint8_t p_44, uint8_t p_45);
inline static struct S0 func_46(int16_t p_47);
static uint16_t func_54(int16_t p_55, int8_t p_56);
static int8_t func_1(void)
{
    int8_t l_7 = 0x12L;
    int32_t l_371 = 1L;
    int32_t l_548 = 0L;
    int32_t l_577 = 5L;
    uint32_t l_596 = 18446744073709551615UL;
    uint16_t l_611 = 0x333AL;
    uint16_t l_612 = 0xA846L;
    int8_t l_628 = 0x7BL;
    int16_t l_677 = 0xAF42L;
    uint64_t l_681 = 0xDC857C6D8648EC4CLL;
    uint16_t l_709 = 0UL;
    uint16_t l_730 = 1UL;
    int64_t l_732 = 1L;
    uint8_t l_786 = 255UL;
    struct S0 l_787 = {4UL,18446744073709551611UL,0x3FL,3UL,0xCE937119L,0x6BBA0BE7359FC942LL,1L};
    l_548 = (func_2(g_6, l_7, (safe_rshift_func_uint16_t_u_u((g_6 || 0x21F1EB32A831D26ELL), (((((((safe_mod_func_int8_t_s_s(func_12((func_17((((safe_lshift_func_uint8_t_u_s(g_6, 0)) , ((func_24(g_6, ((0x0EF2L || l_7) >= func_28(g_6)), l_7) , g_52.f5) >= l_7)) && g_71), g_77, g_71, l_7) , g_52.f3), l_371, l_7, g_77.f5), 0xDAL)) <= g_69) || l_371) >= 0xA183L) , g_77.f4) >= 0x974138C1L) <= 4294967295UL)))) && g_52.f0);
    g_70 = (((0x068B44D2C27210B4LL == g_549) <= g_77.f1) , ((safe_add_func_int32_t_s_s(0x1AFBA164L, l_7)) < g_69));
    if (g_470)
    {
        int8_t l_554 = 0xC9L;
        uint32_t l_574 = 0x9147FA53L;
        int32_t l_597 = 0x10690400L;
        uint16_t l_619 = 65535UL;
        l_548 = 0L;
        g_77 = g_77;
        for (g_77.f2 = 11; (g_77.f2 < 4); g_77.f2 = safe_sub_func_uint64_t_u_u(g_77.f2, 4))
        {
            int32_t l_573 = 0xBFD52D8BL;
            int32_t l_575 = 0xB4873215L;
            uint16_t l_576 = 0x946EL;
            struct S0 l_578 = {0xF6CEA1F4L,0xBE39338CB86D0A33LL,255UL,0UL,7L,9L,0x92988B22D758278CLL};
            int64_t l_639 = 0x1CE74B0700A405B1LL;
            int32_t l_640 = (-5L);
            g_70 = ((((l_7 != (l_554 >= (safe_mod_func_int16_t_s_s(((safe_add_func_uint8_t_u_u((((((safe_add_func_int64_t_s_s((((g_422 < g_66) < g_422) <= (((safe_sub_func_int8_t_s_s((safe_add_func_uint32_t_u_u(g_77.f6, (((safe_mod_func_int64_t_s_s(((safe_add_func_int64_t_s_s(l_548, (safe_add_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(((g_52.f3 < (((((0x6165A788L < 0x907EB407L) >= 0xA7747AF41F73D86DLL) >= (-2L)) | 1UL) ^ g_90)) != 0x09A93390L), g_77.f6)), l_573)))) < l_574), g_339)) , l_7) && g_52.f3))), 1UL)) == l_573) || l_575)), g_549)) || g_77.f0) < l_548) | l_576) ^ g_52.f4), g_77.f4)) == 0x02L), l_577)))) || 1L) != (-4L)) | g_52.f1);
            l_597 = ((((g_52 , (l_578 , ((!((safe_sub_func_int8_t_s_s(((((((safe_mod_func_uint32_t_u_u(0UL, (safe_rshift_func_int8_t_s_u(((g_52.f0 || (((safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(l_574, (l_574 && g_422))), (safe_lshift_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((((safe_sub_func_uint8_t_u_u(l_596, (g_71 == g_77.f2))) , (-8L)) == l_578.f2), g_52.f0)), 7)))) < g_52.f5) & l_371)) || g_59), g_52.f0)))) && 255UL) | g_428) >= l_554) == g_52.f5) >= l_574), l_548)) & l_554)) & 0xACL))) && g_77.f5) , l_548) == 0xEA4C6642B09AE775LL);
            g_52 = (((safe_add_func_uint64_t_u_u(((0x6F36FBE982C6C15BLL || ((safe_add_func_int64_t_s_s(0x66415629FB11BDF6LL, ((((!0L) || (g_6 && ((safe_lshift_func_int8_t_s_u((g_70 > (safe_sub_func_int32_t_s_s((safe_sub_func_int32_t_s_s(l_574, ((safe_sub_func_uint16_t_u_u(5UL, 0x2042L)) | (l_611 > l_578.f5)))), 0xAE0B602EL))), 0)) , l_597))) > 0x5EL) || l_612))) || l_611)) || g_77.f1), 0x63E495C154F1D85ALL)) <= g_77.f6) , g_77);
            l_640 |= (((safe_add_func_int8_t_s_s((safe_sub_func_int64_t_s_s((((safe_add_func_uint16_t_u_u((l_619 & l_578.f1), (safe_rshift_func_uint8_t_u_s(g_77.f5, 5)))) || (safe_rshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_u(l_578.f1, 0)), (safe_add_func_uint8_t_u_u(l_628, (((-1L) == ((((safe_rshift_func_uint16_t_u_u(((safe_mod_func_int32_t_s_s((safe_mod_func_uint8_t_u_u(((safe_mod_func_uint8_t_u_u(((safe_sub_func_uint8_t_u_u((g_52.f4 >= l_576), (0x71C1L != g_470))) , l_578.f3), l_7)) <= g_52.f4), g_52.f2)), g_549)) == l_371), 15)) , 0xBCF43DDE1C2398CALL) ^ 18446744073709551615UL) == g_77.f0)) , l_619)))))) & 0x99D34D6E846C920ELL), l_573)), l_639)) <= 0UL) < (-1L));
        }
        for (l_371 = 0; (l_371 < 26); ++l_371)
        {
            uint32_t l_657 = 0UL;
            l_597 = (safe_rshift_func_int16_t_s_s(((((((safe_sub_func_uint64_t_u_u((2UL & g_6), (l_619 >= 0x2A60463D6DD0E25ALL))) && g_469) , g_77.f0) || (((safe_lshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(((safe_mod_func_int16_t_s_s((safe_mod_func_uint8_t_u_u(((1UL || (safe_sub_func_int32_t_s_s(((-8L) == l_657), g_52.f2))) >= 0xCE565BAFL), 0xA7L)), l_612)) != g_90), l_548)), l_371)) & g_77.f1) == l_554)) | 0x76D250B9L) >= 0x0BACAB8DL), l_371));
        }
    }
    else
    {
        struct S0 l_665 = {0x45D30380L,0UL,255UL,7UL,0x629B4191L,0xD0C929B7E36B687FLL,0xF6ED807253A289FALL};
        for (g_545 = 0; (g_545 > 9); ++g_545)
        {
            uint8_t l_660 = 0xA0L;
            int8_t l_676 = 0xCAL;
            int32_t l_680 = 6L;
            g_52 = func_46((l_660 == g_545));
            for (g_302 = 0; (g_302 > 14); g_302++)
            {
                uint8_t l_666 = 0UL;
                int16_t l_679 = (-1L);
                for (g_339 = 0; (g_339 == (-8)); --g_339)
                {
                    int64_t l_678 = (-2L);
                    l_665 = ((65527UL & g_90) , func_46(g_66));
                    if (g_469)
                        break;
                    l_680 ^= (0x12653692L != (((g_77.f1 <= (0xF853297BL > l_666)) || (safe_lshift_func_uint8_t_u_s((((3L > ((g_671 , (safe_lshift_func_uint8_t_u_s((((safe_mod_func_int32_t_s_s((l_676 & g_339), (l_677 || l_678))) <= l_666) == g_77.f4), 7))) , 0L)) , g_77.f1) < 0x636DL), l_679))) ^ l_660));
                }
                if (l_681)
                    break;
            }
        }
    }
    for (l_577 = 0; (l_577 != (-7)); l_577 = safe_sub_func_int8_t_s_s(l_577, 1))
    {
        struct S0 l_686 = {0UL,1UL,3UL,18446744073709551612UL,0x5802DB8CL,0x0AC4414BB0CB3A23LL,0xAF2506619627AFC8LL};
        uint64_t l_706 = 5UL;
        int8_t l_731 = 0xC5L;
        int32_t l_733 = 1L;
        int8_t l_775 = 0x69L;
        int32_t l_837 = 0x7F87BA3BL;
        int8_t l_851 = 6L;
        uint16_t l_906 = 0x468FL;
        uint64_t l_907 = 9UL;
        int32_t l_931 = (-1L);
        uint64_t l_949 = 0UL;
        g_70 = (safe_lshift_func_uint8_t_u_s((((l_686 , (safe_sub_func_int8_t_s_s(((((safe_rshift_func_int16_t_s_s((l_686.f0 ^ ((safe_lshift_func_int8_t_s_u(((((((safe_rshift_func_int8_t_s_u(((g_71 || (((safe_mod_func_uint64_t_u_u(l_628, ((((safe_sub_func_int64_t_s_s((l_677 > (((safe_sub_func_uint64_t_u_u((((!(safe_add_func_uint8_t_u_u((((safe_sub_func_int64_t_s_s((l_706 , ((safe_sub_func_int16_t_s_s(((0xD4EA37ED070690EFLL || (-6L)) <= g_52.f3), l_611)) >= l_611)), 0x71033A2C4CC19F7ELL)) < 0xBCC7L) || l_709), g_77.f5))) == g_52.f6) && l_686.f5), g_52.f3)) | g_70) >= 1L)), 18446744073709551615UL)) < l_612) , l_371) , l_706))) == 0xBA3111D284B06478LL) , l_686.f5)) || l_681), g_77.f3)) != l_686.f5) != g_77.f5) < 4294967289UL) != 0x1576C48EC63F4DBCLL) < l_686.f5), 1)) != 0x76127FEACCD51DA3LL)), 9)) , g_428) && 0x59L) <= g_549), l_706))) && g_470) , g_423), g_77.f5));
        for (g_69 = (-25); (g_69 <= (-6)); g_69++)
        {
            uint32_t l_718 = 0x7F6882E3L;
            uint32_t l_749 = 0x1C4FED9CL;
            struct S0 l_751 = {0UL,18446744073709551612UL,0UL,6UL,9L,-3L,0x710BCD2D6704D1C6LL};
            int8_t l_799 = 0L;
            int32_t l_804 = 0x47BAD13FL;
            uint32_t l_904 = 18446744073709551606UL;
            int32_t l_923 = (-1L);
            if (((safe_sub_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(g_52.f4, (safe_sub_func_uint32_t_u_u((((((l_718 < (((safe_lshift_func_int16_t_s_s(l_686.f6, 2)) < (safe_add_func_uint64_t_u_u((!0x0650L), ((safe_rshift_func_int8_t_s_s(0x4FL, ((g_52.f5 < ((((safe_rshift_func_int8_t_s_s(((((((((((safe_sub_func_int32_t_s_s(((7UL < 0xE590L) || ((g_70 , 0x9681L) & l_686.f1)), g_545)) , l_730) ^ l_731) , l_706) , l_686.f5) | l_731) || g_77.f5) & g_52.f6) && l_628) | l_686.f4), l_686.f6)) < g_52.f4) , 2L) <= l_718)) , g_77.f0))) >= l_718)))) & g_69)) && l_730) || l_686.f3) ^ g_77.f4) ^ (-8L)), l_732)))), 0x5D9EL)) >= g_423))
            {
                struct S0 l_734 = {3UL,0x04689516464A7C74LL,2UL,2UL,0xAF478584L,0x59BCF93FCC60565ALL,-1L};
                l_733 &= g_77.f4;
                l_734 = l_686;
                g_52 = ((l_628 ^ (safe_sub_func_uint64_t_u_u((((g_52 , ((g_422 | (safe_add_func_uint32_t_u_u(l_686.f3, (((g_77.f6 , (safe_add_func_int16_t_s_s(((((safe_lshift_func_uint8_t_u_s((safe_add_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(l_706, ((safe_add_func_uint8_t_u_u(l_734.f3, (g_77.f2 <= ((((g_469 , l_749) > g_549) || g_750) < l_734.f2)))) & g_77.f2))), g_750)), g_6)) != g_6) || g_671) , 5L), g_77.f2))) , l_734.f6) , g_77.f0)))) != 0xB512L)) != 0xCA69L) && l_734.f4), 1L))) , l_751);
            }
            else
            {
                int16_t l_758 = 0L;
                uint8_t l_808 = 0x0CL;
                int32_t l_905 = 9L;
                int64_t l_915 = 0xD42A03F1FFF5D747LL;
                int32_t l_921 = 0x05B1BF3BL;
                int32_t l_924 = 0x5B58A31FL;
                int32_t l_926 = 1L;
                l_733 |= ((((safe_mod_func_int16_t_s_s(g_77.f6, (g_77.f4 || ((safe_rshift_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_s(l_751.f0, 4)) > (l_758 != ((((safe_sub_func_int32_t_s_s((((safe_rshift_func_int8_t_s_u((safe_mod_func_uint32_t_u_u(g_52.f0, ((l_596 && (((safe_rshift_func_uint8_t_u_s((((safe_rshift_func_uint16_t_u_u((l_7 | (safe_rshift_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u(((safe_add_func_uint32_t_u_u(l_775, (((safe_mod_func_int16_t_s_s((safe_mod_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(((((safe_lshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_u(65535UL, 4)), l_681)) & 0x3CCE0A81L) >= g_302) || 255UL), 6)), l_758)), g_77.f1)) == l_7) , g_549))) ^ l_758), l_786)) >= l_758), 13))), 3)) > g_52.f6) ^ g_70), l_686.f4)) && 255UL) & 0x675D974DL)) , l_751.f2))), 2)) , l_787) , 0xF553F7ABL), l_718)) , g_77.f2) , 0x88604D18A0A315A2LL) > 0x4FA2331ED8499E37LL))), 12)) , 0x95L)))) != l_758) || 18446744073709551610UL) != g_77.f2);
                if (((65528UL & 0x00C3L) >= 0x688258646DB6870BLL))
                {
                    if (g_52.f5)
                        break;
                }
                else
                {
                    return g_423;
                }
                if (l_686.f1)
                    continue;
                if ((g_90 > (l_758 , l_787.f0)))
                {
                    int32_t l_805 = 0L;
                    l_799 ^= ((safe_rshift_func_int8_t_s_u((safe_mod_func_int64_t_s_s(((safe_rshift_func_int16_t_s_u(0x44D1L, 10)) | ((l_686.f2 != (l_577 & ((((l_611 || g_69) & ((safe_rshift_func_uint8_t_u_s(((safe_mod_func_int32_t_s_s((-2L), (safe_unary_minus_func_uint64_t_u((g_71 == 0xB12C8FA3L))))) != (g_428 , 1L)), l_751.f6)) , l_733)) | l_628) & 0UL))) == l_686.f6)), l_751.f6)), g_339)) != g_52.f5);
                    for (g_428 = 0; (g_428 <= 1); g_428 = safe_add_func_uint8_t_u_u(g_428, 1))
                    {
                        l_804 = (4L == (safe_lshift_func_uint8_t_u_u(l_686.f6, ((g_423 , g_90) != 0xDB5C6E0AL))));
                        g_77 = func_46(g_77.f0);
                    }
                    if (l_805)
                        continue;
                    l_837 = ((((safe_lshift_func_uint8_t_u_s(l_808, 2)) > (+(safe_mod_func_uint16_t_u_u(((((((((safe_mod_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u((+((l_733 ^ ((((safe_mod_func_uint8_t_u_u(1UL, (safe_rshift_func_uint16_t_u_s((safe_sub_func_int16_t_s_s(((safe_lshift_func_int16_t_s_s((!(safe_mod_func_int16_t_s_s(l_371, ((((l_787.f0 || (((l_751.f5 || ((safe_rshift_func_int8_t_s_s(l_730, 7)) && (safe_lshift_func_uint16_t_u_s(g_423, (safe_sub_func_uint8_t_u_u(((((((l_805 || g_52.f5) | l_751.f1) , l_686.f3) <= g_66) >= 0x4A32L) || 65535UL), g_52.f5)))))) | g_71) >= 8UL)) != (-4L)) == g_70) || l_805)))), 9)) & l_730), 0x6A41L)), g_77.f4)))) | l_804) & l_733) && g_52.f3)) || (-4L))), 7)), 3L)), g_836)) <= 1UL) != 0xD9DCL) && g_77.f3) ^ (-7L)) <= l_681) < 8L) , 65535UL), (-1L))))) == g_428) ^ l_805);
                }
                else
                {
                    uint8_t l_848 = 0x5CL;
                    int32_t l_919 = 0x1716123BL;
                    if ((safe_lshift_func_uint8_t_u_u(((g_6 > ((l_749 >= ((((safe_sub_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_s((255UL & (g_545 , (safe_add_func_uint16_t_u_u((l_848 != (((0xD0L || ((safe_rshift_func_uint16_t_u_u((l_848 | l_775), 6)) != g_77.f5)) | g_428) != 1L)), g_77.f2)))), 3)) | g_750), l_751.f1)) == g_52.f3) || l_848) ^ g_6)) == g_66)) & g_422), l_808)))
                    {
                        g_70 ^= l_848;
                        ++g_852;
                        g_77 = g_52;
                        g_70 = 0xD44DE931L;
                    }
                    else
                    {
                        l_804 ^= ((((safe_lshift_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((safe_unary_minus_func_uint64_t_u(0x5D303E9793A439D5LL)), (g_52.f0 >= (((safe_sub_func_uint64_t_u_u(((safe_add_func_uint64_t_u_u((((safe_add_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_u(((~(((safe_lshift_func_int16_t_s_s((!(safe_rshift_func_uint16_t_u_s(((safe_rshift_func_uint16_t_u_u(l_686.f2, 15)) , 0UL), 15))), 0)) ^ (((safe_sub_func_int32_t_s_s((safe_mod_func_uint8_t_u_u((!(!(safe_mod_func_int64_t_s_s((safe_sub_func_int64_t_s_s((safe_add_func_uint64_t_u_u(((g_302 , (g_852 , ((safe_rshift_func_uint8_t_u_s((safe_add_func_uint8_t_u_u(255UL, (((safe_add_func_uint16_t_u_u(1UL, ((safe_rshift_func_uint8_t_u_u(((safe_sub_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((safe_sub_func_uint64_t_u_u((safe_lshift_func_int16_t_s_u((((-6L) == l_808) != 0x4D48066EEEBB116CLL), 6)), g_70)), 13)), 0L)) , g_90), l_686.f5)) == l_904))) | g_77.f6) == g_836))), 4)) || g_671))) , g_470), g_77.f5)), 4L)), 18446744073709551613UL)))), l_848)), 4294967293UL)) & l_905) >= 0UL)) | 65530UL)) & g_423), 1)), g_302)) ^ 4294967291UL) ^ g_469), 4L)) ^ g_52.f3), l_906)) , g_69) ^ g_70)))), 9)) || g_549) || 7L) , l_907);
                    }
                    l_804 ^= l_808;
                    l_733 = (((safe_rshift_func_uint16_t_u_u((((g_71 < (safe_sub_func_int8_t_s_s(g_6, (g_852 < (l_751.f3 || ((((g_6 <= (+(safe_mod_func_int32_t_s_s(l_611, 0x9AE965FAL)))) , ((0xB7L & ((func_46(g_90) , l_848) == 0xE8L)) || 0xC707L)) && g_77.f2) , 0x1EL)))))) || l_804) , 0x645DL), g_77.f1)) >= l_686.f4) | l_915);
                    g_927++;
                }
            }
            if (l_787.f6)
                continue;
        }
        g_936--;
        g_70 &= (safe_mod_func_uint32_t_u_u(((l_787.f1 , ((0x72918BD7B8AADCD4LL > (((l_686.f3 > (0x2CL || (((safe_sub_func_int32_t_s_s(l_907, (safe_mod_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u(((g_77 , (((g_77 , func_46(l_949)) , g_77.f3) == g_77.f4)) ^ l_787.f1), l_371)), g_77.f6)), l_787.f5)))) , g_66) | g_852))) , 1L) < 0UL)) > 0xC8D5C547L)) && 0xFF2A2821L), l_787.f3));
    }
    return l_787.f6;
}
static int16_t func_2(uint8_t p_3, int16_t p_4, int32_t p_5)
{
    int32_t l_426 = 0xA5402AA8L;
    int32_t l_427 = 0x01D12309L;
    int64_t l_439 = (-5L);
    struct S0 l_461 = {1UL,0x3FF35097E2631EB6LL,1UL,0xDB755E30A0263833LL,0x8BE9F7AAL,0xC6A7CF218528CA12LL,0x75C99B3F84FE9D93LL};
    uint16_t l_544 = 0x280BL;
    ++g_428;
    g_52 = func_46(((safe_rshift_func_uint8_t_u_u(((((safe_mod_func_int16_t_s_s(((((((l_427 != (l_426 ^ ((l_427 | 0x1D894BFFL) && ((((g_59 < (safe_lshift_func_uint8_t_u_u(((safe_mod_func_int32_t_s_s(l_427, p_4)) >= ((g_77.f3 , g_77.f4) == l_427)), l_439))) >= 1L) <= g_77.f0) > 1UL)))) >= p_3) > 0UL) | l_439) ^ p_4) | 0x00860358341387CFLL), g_422)) && l_427) < g_6) <= 0UL), 0)) <= 0x085EC7FBL));
    if ((safe_sub_func_uint16_t_u_u(p_3, l_426)))
    {
        uint64_t l_453 = 0xD903703908D176D0LL;
        int32_t l_454 = 0x31C93AB6L;
        uint64_t l_455 = 18446744073709551615UL;
        int8_t l_466 = (-9L);
        l_427 = ((((g_77 , (safe_lshift_func_int16_t_s_u(((7L == ((safe_unary_minus_func_uint64_t_u((((-1L) != (((((safe_mod_func_uint16_t_u_u(((0xFBA795881A7689C1LL ^ (((p_5 == (1L <= (0x48L ^ (safe_add_func_int32_t_s_s(g_70, ((safe_lshift_func_int16_t_s_s(((safe_add_func_uint32_t_u_u(((p_3 <= 0UL) == p_5), p_3)) < 254UL), 10)) ^ l_453)))))) < p_4) <= p_3)) >= 1L), 1UL)) > g_52.f2) ^ p_3) <= 0x27C3F1183D354823LL) < l_454)) && l_453))) || l_455)) ^ p_4), 5))) != p_4) & 255UL) , g_77.f1);
        g_70 ^= ((g_52.f0 && 0xD975L) | (safe_sub_func_int64_t_s_s(((((((safe_unary_minus_func_int32_t_s(((1L && (p_3 >= (safe_rshift_func_uint16_t_u_s(g_90, 1)))) , ((((l_461 , (safe_rshift_func_int8_t_s_u(((l_454 ^ 0xB3L) , (safe_sub_func_uint32_t_u_u(l_461.f4, g_52.f6))), 1))) & g_6) , l_455) , l_454)))) == p_3) & l_466) <= 0L) ^ g_66) == p_3), 0L)));
        for (g_59 = 6; (g_59 == (-16)); g_59 = safe_sub_func_uint16_t_u_u(g_59, 5))
        {
            int8_t l_473 = 0xBDL;
            ++g_470;
            l_461 = l_461;
            return l_473;
        }
    }
    else
    {
        uint64_t l_500 = 18446744073709551611UL;
        int32_t l_501 = (-9L);
        int32_t l_516 = 0x0C41B480L;
        int32_t l_521 = 0xA3C741E7L;
        for (g_6 = 0; (g_6 >= 17); g_6++)
        {
            int16_t l_488 = (-5L);
            uint8_t l_491 = 250UL;
            l_426 = (p_3 , ((0x54L <= ((safe_mod_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u(g_77.f3, (g_52.f5 ^ ((p_4 | (((-1L) >= ((safe_mod_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s(p_4, 6)), ((((safe_mod_func_int32_t_s_s((safe_mod_func_int32_t_s_s(0x6E4C0148L, p_4)), 0xA89D8122L)) > 0xB90DL) && p_3) && 0xF9743605L))) , l_488)) , p_4)) , p_3)))), l_461.f4)) && 0x6D997A0FL)) , l_426));
            l_501 = (safe_lshift_func_uint16_t_u_s(l_461.f0, (0x1933L ^ ((p_5 && (p_5 , ((((l_491 || (((g_52.f4 , (0xEB19L < ((safe_add_func_uint16_t_u_u((((safe_add_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_s(((g_52.f5 , (((((safe_add_func_uint64_t_u_u(18446744073709551615UL, g_69)) && p_4) ^ p_4) || l_500) != 0x83L)) ^ p_5), p_5)) == 5L), p_3)) != l_500) > 0xD2F6CF41L), l_500)) != p_5))) && g_52.f0) <= p_4)) <= g_52.f6) != l_426) && p_5))) == 0x7B7A4F7B63D270E7LL))));
        }
        l_427 = (((((safe_rshift_func_uint16_t_u_u(1UL, 2)) > ((safe_lshift_func_uint8_t_u_s((safe_mod_func_uint64_t_u_u(((l_501 , 0xBDE6F79BL) < ((l_500 < (((safe_mod_func_uint64_t_u_u(((1L & (p_4 || (((safe_add_func_uint8_t_u_u(0xC4L, ((safe_lshift_func_int16_t_s_s((((safe_mod_func_int64_t_s_s((p_4 >= g_52.f3), g_77.f6)) | p_4) < g_66), l_501)) , p_4))) < 18446744073709551611UL) , p_4))) || 0xC9L), l_500)) >= 4UL) | l_516)) && (-8L))), l_461.f2)), p_5)) , p_3)) && g_71) != g_77.f3) , 0x7A78EF36L);
        if (((-1L) <= (safe_add_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(0x1B3BL, 7)), p_3))))
        {
            l_426 &= 0L;
        }
        else
        {
            int64_t l_528 = (-2L);
            l_427 = ((l_521 , ((g_52.f4 , (((safe_add_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((safe_mod_func_int64_t_s_s((((l_528 < (safe_add_func_uint64_t_u_u((safe_lshift_func_int8_t_s_u(0x47L, g_470)), (0x36L != g_423)))) <= (((safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_u((((safe_lshift_func_int8_t_s_u(p_4, 2)) & (safe_lshift_func_int16_t_s_u(((~((((safe_rshift_func_int8_t_s_u((p_5 , p_4), l_544)) != 18446744073709551615UL) > 255UL) < 1L)) != p_5), 4))) && 9UL), g_422)), p_5)) >= g_52.f2) < l_439)) != p_3), g_77.f4)), l_439)), l_501)) && p_3) || 0x9A9B5964L)) > 0x42L)) , p_5);
            g_545++;
            return p_3;
        }
    }
    return g_428;
}
inline static int8_t func_12(int32_t p_13, int32_t p_14, uint64_t p_15, int32_t p_16)
{
    int32_t l_386 = 2L;
    int16_t l_395 = (-10L);
    if (((safe_rshift_func_uint8_t_u_u(9UL, ((safe_mod_func_uint8_t_u_u((+(safe_add_func_uint16_t_u_u(g_77.f2, ((safe_rshift_func_uint8_t_u_s(((safe_unary_minus_func_int8_t_s(0x85L)) & (safe_add_func_int8_t_s_s(((safe_mod_func_int32_t_s_s((l_386 > (l_386 >= 0x225EL)), (safe_sub_func_uint64_t_u_u((0x8EC4F91229C48321LL >= (safe_add_func_int16_t_s_s((safe_add_func_uint16_t_u_u(0x6BB7L, (safe_lshift_func_int16_t_s_u(((((l_395 || g_77.f6) != g_77.f3) && 0x3F56BA5DL) <= l_386), g_66)))), p_15))), (-1L))))) || l_386), g_52.f2))), g_59)) > l_395)))), p_14)) == l_386))) == g_52.f2))
    {
        uint16_t l_398 = 0xEA2FL;
        uint64_t l_415 = 8UL;
        g_70 = ((safe_rshift_func_uint16_t_u_u((l_398 > (safe_sub_func_uint8_t_u_u((+l_398), ((~((1L >= ((l_398 & ((~(safe_unary_minus_func_int32_t_s((g_90 , (safe_lshift_func_int8_t_s_u(((safe_lshift_func_uint16_t_u_s((~(safe_mod_func_int32_t_s_s(((~(safe_lshift_func_uint8_t_u_u(((func_46(p_13) , l_395) >= g_77.f5), l_398))) , (-1L)), p_13))), p_13)) != p_16), 5)))))) | 0L)) != l_395)) > 0L)) && l_386)))), 15)) == l_415);
        g_70 = (p_15 & 0x0CD5L);
        g_70 = (((((((4294967293UL < (g_77.f0 || (((safe_lshift_func_int8_t_s_u((-1L), (+(func_46((p_13 , l_386)) , (g_77.f6 >= (0x8F472CE6EC9BEFE6LL & 0x3987274B98C5EABFLL)))))) && g_59) , 0x18020ED5610DBB6BLL))) || l_415) , l_398) ^ 0xB0CFL) , 0x4CE8A4B9L) & 0L) >= p_13);
    }
    else
    {
        int8_t l_419 = (-3L);
        int32_t l_420 = 0x51EDD1ABL;
        int32_t l_421 = 0x4C4D434EL;
        g_70 &= 0xAC793CACL;
        --g_423;
    }
    return g_52.f0;
}
inline static uint64_t func_17(int64_t p_18, struct S0 p_19, int8_t p_20, uint32_t p_21)
{
    int32_t l_353 = 0x91B0979CL;
    int32_t l_354 = 0L;
    int64_t l_361 = 1L;
    uint64_t l_370 = 0xE6E452DE9F1D2E8DLL;
    l_354 = (g_69 || ((p_19.f1 | ((safe_mod_func_uint64_t_u_u(((p_19.f4 & p_19.f6) && ((func_46((safe_add_func_int8_t_s_s((safe_add_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((3UL == (0x48E30274L < g_77.f0)), g_302)), 2)), ((0xB586L <= p_20) , 0xE6L))), g_77.f2))) , l_353) >= l_353)), l_353)) != 0xCFA4L)) , p_19.f6));
    g_70 = ((safe_rshift_func_uint8_t_u_s(l_354, (safe_add_func_uint32_t_u_u((safe_add_func_uint8_t_u_u(p_19.f6, (l_361 == 65535UL))), (safe_rshift_func_uint8_t_u_u(((g_52.f6 && (safe_add_func_int32_t_s_s((safe_sub_func_uint8_t_u_u(p_20, (safe_sub_func_int32_t_s_s(p_19.f6, (0x6EB2L ^ (0xD9L == l_354)))))), l_370))) != 0x4204L), 5)))))) == l_370);
    return l_361;
}
inline static uint32_t func_24(int32_t p_25, uint32_t p_26, uint16_t p_27)
{
    int8_t l_133 = 0L;
    int32_t l_147 = 0x94359D76L;
    struct S0 l_186 = {0UL,0UL,0UL,0x936EB09B283B4B79LL,0xDF4D21E7L,0L,-6L};
    int64_t l_190 = 0xB5B7701A7DC5F5F0LL;
    int32_t l_193 = 0xD2694479L;
    uint16_t l_194 = 0xF224L;
    int32_t l_202 = 5L;
    uint32_t l_212 = 0x02E520C1L;
    int32_t l_238 = 0x48867B80L;
    int16_t l_325 = (-1L);
    l_133 = g_77.f0;
    l_147 &= ((~((((((p_26 | (safe_rshift_func_int16_t_s_s(l_133, (!g_77.f2)))) >= (4L | g_90)) , (1UL && l_133)) | (safe_mod_func_uint16_t_u_u(((p_26 > ((safe_rshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_u((safe_mod_func_int64_t_s_s(((safe_unary_minus_func_int64_t_s(((l_133 || g_77.f2) , 0x1B7A5A4E873C8D9FLL))) >= p_25), g_69)), 3)), l_133)) & l_133)) != p_26), g_52.f2))) || 0x943A2B23C0CBE003LL) & g_6)) ^ 4294967295UL);
    if ((~(safe_add_func_uint32_t_u_u((~((safe_lshift_func_uint16_t_u_s(0x7C90L, 9)) ^ (((((((safe_rshift_func_int16_t_s_u((((safe_add_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_s((g_77.f0 <= ((safe_lshift_func_int16_t_s_s((-4L), l_133)) == (!((l_147 >= (((((safe_add_func_int16_t_s_s(g_90, (safe_lshift_func_uint16_t_u_u(g_77.f5, 11)))) , 1UL) <= (((safe_mod_func_uint64_t_u_u((safe_lshift_func_int16_t_s_u((((g_77.f5 != g_59) && 0x65L) == 0xA83A99FBL), 2)), p_26)) > g_77.f4) & g_77.f5)) != g_77.f5) , g_77.f4)) | 0xD736L)))), 7)) >= 0xB90FL), l_147)) && l_147) < g_70), 6)) != g_77.f0) > l_147) < g_6) ^ p_26) | 2UL) != g_52.f2))), p_27))))
    {
        int32_t l_182 = 0x2F5BDECAL;
        struct S0 l_187 = {0x7A4C18CAL,0x32275AA4AC0D40F6LL,0x6AL,0x0F502B33B09B231FLL,0x7C5CFF5EL,0xEA3A65F83DE727DBLL,-1L};
        int64_t l_191 = 0xE2CB60F77C65B12CLL;
        int32_t l_192 = 0L;
        l_147 = (((((safe_sub_func_uint32_t_u_u((((((((((((safe_rshift_func_uint16_t_u_s(((0UL && (safe_rshift_func_uint8_t_u_u((!((((safe_lshift_func_uint16_t_u_s((safe_sub_func_uint64_t_u_u(p_27, l_182)), 11)) | ((safe_lshift_func_int16_t_s_u(((g_77.f6 , (+((l_182 ^ (l_186 , ((p_27 <= (l_187 , (safe_add_func_uint64_t_u_u(l_186.f2, g_59)))) < g_77.f5))) & 0x7913BD70L))) & g_71), l_190)) & g_66)) || p_25) >= l_191)), p_27))) > g_77.f2), 13)) , g_6) , g_77.f1) < l_133) | l_186.f4) || g_52.f0) && p_25) <= l_182) , g_77.f2) || g_77.f1) | l_186.f3), 9UL)) || g_52.f0) | g_52.f2) > 0x6D35079E51952070LL) || 0x8AC69C4AB7F0B09DLL);
        l_194--;
    }
    else
    {
        int64_t l_197 = 0x1C632E4EC8C54879LL;
        int16_t l_297 = (-9L);
        int32_t l_298 = 0x734024CBL;
        int16_t l_299 = (-1L);
        int32_t l_300 = 0xEBF453BBL;
        uint64_t l_305 = 4UL;
        struct S0 l_310 = {0x00120B93L,1UL,0x1FL,0xFEFE262E621D1AF2LL,0L,0L,0x4F73E1BCF0158A44LL};
        uint8_t l_340 = 250UL;
        l_212 = (l_197 , (safe_lshift_func_uint16_t_u_s(((safe_add_func_uint32_t_u_u(l_202, (safe_rshift_func_int8_t_s_u(((0x1684L >= (((l_197 < (g_59 < ((((safe_add_func_uint16_t_u_u((((g_52.f4 == ((((safe_add_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(l_202, 4)), (safe_unary_minus_func_int16_t_s((l_186.f0 , ((l_197 , l_197) && p_26)))))) , p_27) == 4294967295UL) == g_52.f6)) == g_52.f0) >= 4294967289UL), l_197)) == 0x5802L) , p_26) && l_186.f6))) || l_186.f0) & p_27)) <= 0x76L), p_27)))) == l_186.f1), g_59)));
        if ((((0L <= (+((((safe_add_func_uint16_t_u_u((g_77 , ((safe_rshift_func_uint16_t_u_s(p_25, (safe_mod_func_uint16_t_u_u(1UL, 0x3E91L)))) , (func_46(((p_26 , (((safe_mod_func_uint16_t_u_u((((safe_sub_func_int16_t_s_s((p_25 | ((!(l_186.f1 || 0x32ECD07DL)) || g_77.f4)), (-2L))) != 0x5FAB9AC39EC935B3LL) && 0x4B06L), 0xBDA1L)) == 1L) > 0UL)) < g_77.f1)) , g_77.f0))), l_197)) & p_26) < g_59) , 8UL))) > 0xBFB3L) , p_26))
        {
            int8_t l_237 = (-9L);
            int32_t l_239 = 0x27235E59L;
            l_239 ^= (((safe_sub_func_uint32_t_u_u(4294967295UL, ((p_25 == (safe_mod_func_int16_t_s_s((g_77.f5 ^ (((safe_lshift_func_int16_t_s_s((g_77.f5 | (((g_52.f0 == ((safe_rshift_func_int16_t_s_s(((((((safe_lshift_func_int8_t_s_s((((safe_mod_func_int16_t_s_s(((g_71 & (((g_77.f0 , g_90) | p_26) | l_212)) & g_77.f1), 0x0AFDL)) && 0x5E15L) && l_237), 3)) && 0L) >= l_197) >= p_27) || p_26) && l_237), l_186.f2)) < g_71)) || 0x265BCB941C5EEF02LL) || (-1L))), 6)) | l_238) | p_26)), l_237))) < l_237))) > 0UL) , p_25);
            if (((((safe_add_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s(g_90, (p_25 != (safe_mod_func_uint64_t_u_u(((safe_add_func_int8_t_s_s(((p_27 , (safe_sub_func_int64_t_s_s((safe_add_func_uint8_t_u_u((g_52.f1 , ((((1UL < (0x48030061L | (safe_add_func_uint16_t_u_u((g_59 || ((safe_sub_func_uint32_t_u_u(((((safe_lshift_func_uint8_t_u_s(0x7BL, ((((safe_sub_func_uint64_t_u_u(((safe_mod_func_uint32_t_u_u(p_25, g_77.f4)) <= g_6), l_197)) >= g_52.f1) , 0xDFL) > g_77.f1))) > l_186.f6) | 0UL) | g_52.f2), g_52.f5)) >= l_194)), l_202)))) | 0xA0C1L) && 0x19C0L) != 9L)), l_237)), 0x6D4DFEEED56E27D1LL))) != g_90), g_52.f0)) && 1L), l_197))))), l_237)) == l_237) , l_147) || p_25))
            {
                int32_t l_266 = 0xCC524864L;
                struct S0 l_267 = {0xA2760C76L,1UL,0UL,0UL,0x4E2F047DL,-1L,0xDBD2A67AD8558D5ELL};
                int32_t l_301 = 8L;
                for (g_52.f1 = 4; (g_52.f1 == 2); g_52.f1 = safe_sub_func_int64_t_s_s(g_52.f1, 6))
                {
                    uint32_t l_268 = 0xF131FA9AL;
                    for (g_52.f3 = (-15); (g_52.f3 > 59); g_52.f3 = safe_add_func_uint64_t_u_u(g_52.f3, 1))
                    {
                        l_266 = g_52.f2;
                        return g_77.f1;
                    }
                    l_267 = l_186;
                    g_70 &= (((((((l_268 , (((((func_46((safe_mod_func_int64_t_s_s(l_268, (safe_rshift_func_int16_t_s_s((g_77.f2 == 0xB6L), 2))))) , (g_52.f6 & (((safe_add_func_int32_t_s_s((-10L), 0x1ED15957L)) == g_77.f2) < 0xBA95C358AB34EFDBLL))) == l_239) < (-1L)) ^ l_239) ^ l_267.f0)) >= l_147) | 6UL) || 0L) < g_90) && 4UL) & 0xCB51L);
                    l_298 ^= (+(safe_add_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(p_26, (((safe_add_func_int8_t_s_s(((((safe_lshift_func_uint16_t_u_s((((safe_sub_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(((g_59 | ((!(0xA8F9L >= (((safe_add_func_uint64_t_u_u((((((l_197 == ((l_266 , (safe_mod_func_uint64_t_u_u(g_52.f2, (((safe_sub_func_uint8_t_u_u((g_66 > ((safe_rshift_func_uint8_t_u_s(((g_77.f6 , ((0x95B76E90L > l_186.f0) > g_69)) < p_26), 2)) | p_25)), g_77.f1)) , l_186.f3) & l_268)))) != 65531UL)) >= 0xD7F1L) >= g_52.f2) | l_197) > 0UL), g_77.f5)) > 1UL) , p_26))) >= g_70)) , 0x70L), l_237)), l_197)) | l_297) , g_52.f3), 7)) || g_77.f6) < p_26) && g_52.f3), 0xDFL)) != 0xEAL) , g_52.f2))), g_71)));
                }
                l_299 = (-6L);
                g_302++;
            }
            else
            {
                l_300 = (-10L);
                return p_25;
            }
        }
        else
        {
            int16_t l_328 = 0xDE12L;
            ++l_305;
            for (l_298 = 0; (l_298 < (-9)); l_298 = safe_sub_func_uint64_t_u_u(l_298, 1))
            {
                uint16_t l_311 = 0x790CL;
                g_52 = l_310;
                l_311++;
            }
            l_238 = (safe_rshift_func_uint16_t_u_s((safe_mod_func_uint64_t_u_u((((((safe_rshift_func_uint8_t_u_s((((g_77.f3 , p_26) > (l_310.f6 ^ (((safe_lshift_func_uint16_t_u_u((+g_52.f5), 9)) , g_52) , (l_197 , (((safe_sub_func_uint64_t_u_u(0x8A3E8C22AD4DA4AELL, (((l_325 & ((((safe_sub_func_uint8_t_u_u(l_186.f4, 0x8FL)) || p_26) <= l_300) <= g_77.f6)) >= l_310.f6) , g_77.f1))) < l_190) ^ g_66))))) ^ g_59), g_52.f5)) <= g_52.f5) <= g_302) , 5L) | g_52.f4), l_328)), 13));
        }
        g_70 |= ((safe_add_func_int64_t_s_s(0xD21812B45DF68B05LL, ((p_27 > (((g_6 ^ ((safe_rshift_func_int8_t_s_s((9L ^ ((p_25 && (((safe_rshift_func_int8_t_s_u((1UL ^ ((((safe_rshift_func_uint8_t_u_s((p_27 && g_52.f5), 4)) == (l_310.f6 && p_26)) > 0xA484L) ^ p_26)), g_77.f2)) | p_27) == 5L)) <= p_26)), 7)) == g_52.f3)) ^ 0x1C3BL) & 4294967291UL)) , g_52.f2))) & 4294967295UL);
        ++l_340;
    }
    return l_186.f2;
}
inline static int8_t func_28(uint64_t p_29)
{
    int16_t l_33 = (-1L);
    struct S0 l_116 = {0x5AA8E544L,18446744073709551615UL,0UL,0x52D3D223BFC9F35ALL,0xB369A1ECL,-3L,0x0EF1A53783AD51ACLL};
    int32_t l_130 = 0x64EF7B2EL;
    if ((safe_mod_func_int32_t_s_s((safe_unary_minus_func_uint64_t_u(l_33)), 4294967295UL)))
    {
        int64_t l_76 = 0x29F8D9E2CD2A1986LL;
        g_70 |= func_34((!((-4L) && func_41(p_29, p_29, l_33, (func_46(g_6) , (func_54(p_29, p_29) != (-1L)))))), l_76, p_29, g_77, l_76);
        g_70 |= p_29;
    }
    else
    {
        uint32_t l_111 = 1UL;
        if ((safe_add_func_int32_t_s_s(p_29, l_111)))
        {
            uint16_t l_112 = 1UL;
            struct S0 l_115 = {1UL,0UL,0UL,0xF9336AE2794C0DA3LL,0x397282F8L,1L,1L};
            l_112++;
            l_116 = l_115;
        }
        else
        {
            uint8_t l_121 = 0xD7L;
            int32_t l_124 = 3L;
            struct S0 l_125 = {4294967295UL,0UL,0x94L,18446744073709551612UL,1L,-7L,1L};
            l_125 = func_46(((((l_111 && p_29) == ((~l_111) | (((p_29 >= (+1UL)) | ((safe_add_func_uint16_t_u_u(l_121, l_111)) > 0UL)) ^ ((((((((safe_rshift_func_int16_t_s_u((0x8FF6L <= g_52.f6), p_29)) && p_29) | 0x476FD32FL) , g_77.f3) && l_111) <= 0UL) || p_29) && p_29)))) , l_124) || l_124));
        }
        g_70 = (safe_sub_func_uint64_t_u_u(l_111, (safe_mod_func_int16_t_s_s(g_6, g_52.f5))));
    }
    l_130 |= p_29;
    l_130 = (safe_rshift_func_int8_t_s_u((-2L), g_66));
    return g_69;
}
inline static int32_t func_34(uint16_t p_35, uint16_t p_36, uint8_t p_37, struct S0 p_38, uint32_t p_39)
{
    int32_t l_82 = 0x9A8624A7L;
    uint32_t l_107 = 1UL;
    uint8_t l_108 = 0x7EL;
    l_82 = (p_38.f3 <= ((((p_38.f3 == (safe_add_func_uint16_t_u_u(((((safe_sub_func_uint64_t_u_u(l_82, (safe_add_func_uint8_t_u_u(p_38.f5, 0x1AL)))) , (safe_rshift_func_int8_t_s_u((safe_unary_minus_func_uint32_t_u(((p_38.f3 , (safe_sub_func_int8_t_s_s(((((g_90 >= (safe_lshift_func_uint16_t_u_u(((((((safe_add_func_uint64_t_u_u((((safe_lshift_func_uint8_t_u_u(l_82, 0)) | ((safe_sub_func_int64_t_s_s(((safe_sub_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((safe_mod_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(((g_6 && p_38.f2) == 0xAD585B88FC9099BCLL), 1)), g_6)), g_77.f4)), p_36)) , p_36), 0xF6318FFE4DFDC5D4LL)) <= p_38.f4)) & p_38.f5), p_38.f3)) == g_66) >= l_82) && g_52.f1) == g_77.f2) < 6UL), 3))) , l_82) & p_36) || p_38.f1), g_59))) | l_82))), 0))) >= l_107) , g_52.f5), l_82))) , p_38.f6) == l_108) , p_36));
    return l_107;
}
inline static int64_t func_41(uint32_t p_42, int64_t p_43, uint8_t p_44, uint8_t p_45)
{
    uint32_t l_73 = 1UL;
    for (g_52.f2 = 0; (g_52.f2 > 48); g_52.f2++)
    {
        int64_t l_72 = (-1L);
        ++g_66;
        l_73--;
    }
    return g_52.f0;
}
inline static struct S0 func_46(int16_t p_47)
{
    uint64_t l_50 = 0x5662B132DC1B2D86LL;
    int32_t l_51 = 1L;
    struct S0 l_53 = {0xB058B506L,0xE4F120B252307D3ELL,9UL,0x3DF123EFBB05D094LL,4L,7L,0xC1F20CF68020C288LL};
    l_51 = (((0x4E48C0C84A4E7FB1LL ^ 0xF98093AF8EF5D3CCLL) ^ 0x4FF6A91AL) & (safe_mod_func_int8_t_s_s(g_6, l_50)));
    l_53 = (g_6 , g_52);
    return l_53;
}
static uint16_t func_54(int16_t p_55, int8_t p_56)
{
    uint32_t l_63 = 1UL;
    for (p_56 = (-3); (p_56 > 19); p_56 = safe_add_func_uint32_t_u_u(p_56, 4))
    {
        uint64_t l_60 = 0xEEC8559CE7900082LL;
        --l_60;
    }
    return l_63;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_6;
    csmith_sink_ = g_52.f0;
    csmith_sink_ = g_52.f1;
    csmith_sink_ = g_52.f2;
    csmith_sink_ = g_52.f3;
    csmith_sink_ = g_52.f4;
    csmith_sink_ = g_52.f5;
    csmith_sink_ = g_52.f6;
    csmith_sink_ = g_59;
    csmith_sink_ = g_66;
    csmith_sink_ = g_69;
    csmith_sink_ = g_70;
    csmith_sink_ = g_71;
    csmith_sink_ = g_77.f0;
    csmith_sink_ = g_77.f1;
    csmith_sink_ = g_77.f2;
    csmith_sink_ = g_77.f3;
    csmith_sink_ = g_77.f4;
    csmith_sink_ = g_77.f5;
    csmith_sink_ = g_77.f6;
    csmith_sink_ = g_90;
    csmith_sink_ = g_302;
    csmith_sink_ = g_339;
    csmith_sink_ = g_422;
    csmith_sink_ = g_423;
    csmith_sink_ = g_428;
    csmith_sink_ = g_469;
    csmith_sink_ = g_470;
    csmith_sink_ = g_545;
    csmith_sink_ = g_549;
    csmith_sink_ = g_671;
    csmith_sink_ = g_750;
    csmith_sink_ = g_836;
    csmith_sink_ = g_852;
    csmith_sink_ = g_916;
    csmith_sink_ = g_917;
    csmith_sink_ = g_918;
    csmith_sink_ = g_920;
    csmith_sink_ = g_922;
    csmith_sink_ = g_925;
    csmith_sink_ = g_927;
    csmith_sink_ = g_930;
    csmith_sink_ = g_932;
    csmith_sink_ = g_933;
    csmith_sink_ = g_934;
    csmith_sink_ = g_935;
    csmith_sink_ = g_936;
    platform_main_end(0,0);
    return 0;
}
