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
static int8_t g_8 = (-1);
static uint8_t g_16 = 0x0D;
static int8_t g_17 = 0xA7;
static uint32_t g_22 = 0x9040C3F3;
static uint8_t g_80 = 255U;
static int16_t g_136 = 1;
static const int32_t g_159 = 0xB46617F5;
static int16_t g_188 = 1;
static uint32_t g_297 = 0x00A65A28;
static uint16_t g_361 = 1U;
static uint16_t g_374 = 65535U;
static uint16_t g_391 = 65529U;
static uint32_t g_458 = 4294967295U;
static uint16_t g_510 = 0xD5A6;
static uint8_t g_535 = 255U;
static uint16_t g_568 = 65535U;
static uint32_t g_614 = 0xF0BA095C;
static uint16_t g_619 = 2U;
static uint32_t g_638 = 0x41E486DE;
static uint32_t g_678 = 0xA70AC51F;
static uint16_t g_679 = 0xF0B7;
static int32_t g_680 = 0xCC07B998;
static uint8_t g_681 = 0x32;
static uint32_t g_686 = 4294967289U;
static uint32_t g_739 = 4294967295U;
static uint16_t g_803 = 0U;
static int32_t g_816 = 3;
static uint16_t g_890 = 0U;
static int32_t g_894 = 1;
static uint32_t g_897 = 0xDCAB14CE;
static uint32_t func_1(void);
static uint32_t func_5(uint16_t p_6, int8_t p_7);
static int8_t func_29(int16_t p_30, const uint32_t p_31, uint32_t p_32);
static int16_t func_53(uint32_t p_54, int32_t p_55);
static int32_t func_56(int8_t p_57, uint32_t p_58);
static uint8_t func_63(uint32_t p_64);
static const int32_t func_65(uint8_t p_66, const int32_t p_67, uint32_t p_68);
static uint16_t func_90(int32_t p_91, int32_t p_92, const int32_t p_93, uint32_t p_94, uint32_t p_95);
static int32_t func_96(uint16_t p_97, int32_t p_98, int32_t p_99, int32_t p_100);
static int32_t func_137(int16_t p_138, uint8_t p_139, const uint32_t p_140, uint8_t p_141, const int16_t p_142);
static uint32_t func_1(void)
{
    int32_t l_4 = 0xB0647DC4;
    uint32_t l_15 = 0xAA32F3F6;
    int32_t l_18 = 0x94FF5452;
    int16_t l_840 = (-9);
    uint32_t l_887 = 0x3FABB4CE;
    int32_t l_889 = 0x3B098D43;
    int32_t l_893 = 5;
    int32_t l_895 = 0xFCA88E19;
    int32_t l_896 = 0x19D1906F;
    if (((safe_mul_func_uint16_t_u_u(l_4, 0xE126)) <= (func_5(((g_8 > g_8) ^ (l_4 , (safe_mod_func_int16_t_s_s((((l_4 | ((safe_rshift_func_int8_t_s_s(l_4, (((0x00 || ((safe_mod_func_uint8_t_u_u(1U, g_8)) , l_15)) != g_8) , l_15))) , l_4)) | g_8) <= l_15), l_15)))), g_8) , 0x05)))
    {
        int16_t l_19 = 1;
        int32_t l_20 = 8;
        int32_t l_21 = 1;
        g_16 = g_8;
        --g_22;
    }
    else
    {
        const uint32_t l_39 = 4294967286U;
        int8_t l_44 = 1;
        int32_t l_48 = 0xF32F520A;
        for (g_17 = 0; (g_17 != (-6)); --g_17)
        {
            int32_t l_47 = 0xC8F94914;
            uint16_t l_888 = 0xF3C3;
            if ((safe_sub_func_uint8_t_u_u(((func_29((safe_mul_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((l_18 >= (safe_div_func_uint8_t_u_u((((l_39 & (((safe_lshift_func_uint8_t_u_u(g_22, (l_39 != func_5((safe_div_func_int8_t_s_s(l_44, (65535U && (safe_lshift_func_int8_t_s_u(l_39, 7))))), g_16)))) == l_47) >= 1)) >= g_17) >= l_48), g_8))), 0x60A3B7DC)), 0x6B4A)), l_47, g_16) < l_39) , 1U), g_22)))
            {
                if (l_840)
                    break;
            }
            else
            {
                int32_t l_853 = 0xA9DFD21A;
                l_48 = (g_535 , ((safe_mul_func_uint8_t_u_u((((l_47 & (g_16 & ((((l_47 < (safe_mod_func_uint32_t_u_u(((safe_add_func_uint32_t_u_u((((l_4 <= ((safe_mul_func_int8_t_s_s((l_47 != ((((safe_lshift_func_uint8_t_u_s(0x5C, 4)) != g_686) , ((safe_unary_minus_func_int8_t_s((!(l_47 && l_47)))) >= g_739)) , g_22)), l_18)) || 0x021B58F3)) > 0x82F3) && l_48), l_47)) , 1U), g_568))) & g_22) < l_853) , 0xD50A))) , l_44) <= g_80), 0xAA)) > g_361));
            }
            l_48 = (safe_add_func_uint32_t_u_u((((safe_rshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_u((safe_mod_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s(l_39, 0)), ((g_686 <= ((safe_rshift_func_int8_t_s_s((g_510 | ((safe_mod_func_uint8_t_u_u((((safe_sub_func_uint32_t_u_u((((!((0x5620A8CE < (safe_rshift_func_uint8_t_u_s(((safe_mul_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(((l_48 != (safe_sub_func_uint16_t_u_u(((((g_136 , 0xB2A9) ^ (safe_mul_func_uint8_t_u_u(l_47, (safe_mul_func_int8_t_s_s((safe_div_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(g_80, l_44)), g_188)), l_18))))) == 0xCAA7) , l_48), l_18))) , 0x4756), 13)), g_678)) == l_18), l_47))) , l_48)) , l_18) == g_681), 0x63C43478)) < l_48) <= 0x009D), g_361)) <= l_39)), 7)) , g_638)) || g_188))), g_619)), l_48)) , l_840) | l_887), l_888));
        }
        --g_890;
    }
    ++g_897;
    return g_535;
}
static uint32_t func_5(uint16_t p_6, int8_t p_7)
{
    return p_7;
}
static int8_t func_29(int16_t p_30, const uint32_t p_31, uint32_t p_32)
{
    int32_t l_49 = 0x039C1D55;
    l_49 = l_49;
    for (g_16 = 0; (g_16 < 57); g_16 = safe_add_func_uint32_t_u_u(g_16, 5))
    {
        int32_t l_838 = 0xF10B0D00;
        int32_t l_839 = 0x30C3FC38;
        l_838 = (((!g_22) == func_53(g_22, func_56(func_5((1 & ((safe_mul_func_uint8_t_u_u((+(0U != (!(l_49 < g_16)))), ((g_22 , func_63(l_49)) && p_30))) <= p_32)), g_17), l_49))) & p_31);
        l_839 = 0x7A95B488;
    }
    return g_16;
}
static int16_t func_53(uint32_t p_54, int32_t p_55)
{
    int32_t l_837 = 1;
    p_55 = (-1);
    return l_837;
}
static int32_t func_56(int8_t p_57, uint32_t p_58)
{
    uint16_t l_693 = 0xE4DC;
    int32_t l_696 = 0x2860F0DB;
    int32_t l_697 = (-3);
    int32_t l_698 = (-10);
    int32_t l_700 = 0x05B87CE9;
    int32_t l_701 = 0;
    int32_t l_703 = (-2);
    int16_t l_735 = 0x9451;
    int8_t l_740 = 0x3D;
    int8_t l_770 = 0xCC;
    for (p_57 = (-8); (p_57 != (-26)); --p_57)
    {
        int16_t l_694 = 0xE0FB;
        int32_t l_695 = 0;
        int32_t l_699 = 1;
        int32_t l_702 = 0x9D772FBA;
        int32_t l_704 = 0xDF41CCB8;
        uint32_t l_705 = 0x39E35722;
        l_693 ^= 9;
        ++l_705;
        l_696 = ((l_703 ^ (l_703 && (safe_mul_func_uint8_t_u_u((((safe_sub_func_int16_t_s_s(g_22, ((((+(g_679 >= (safe_rshift_func_uint16_t_u_s(((safe_mod_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_u(p_57, 7)) == (((safe_lshift_func_uint8_t_u_s((safe_add_func_uint32_t_u_u((safe_mod_func_int32_t_s_s((((safe_add_func_uint32_t_u_u((safe_div_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s((p_57 > (p_57 >= (((safe_add_func_uint8_t_u_u((l_699 , 255U), p_57)) , 0x1C0306E1) > p_58))), 0)), 0x2F28)), (-5))) & l_693) , g_361), p_58)), 0xC01EA247)), 7)) <= p_57) <= 0x75)), l_699)) > g_8), 9)))) | 0x6DD2) == p_58) | l_735))) || p_57) != 0x94), 0xE3)))) , l_698);
        if (p_58)
            continue;
    }
    for (g_458 = 29; (g_458 >= 31); g_458++)
    {
        uint32_t l_738 = 0U;
        int32_t l_741 = 1;
        uint16_t l_769 = 0U;
        uint32_t l_790 = 0x8788B766;
        g_739 = (p_58 < l_738);
        l_741 ^= l_740;
        if (((safe_mul_func_uint16_t_u_u(((0x46FE == ((((((4 == (0xAAA2 && (safe_mul_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s((l_735 , (safe_rshift_func_int16_t_s_u((+(safe_lshift_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((g_361 , (safe_mod_func_uint16_t_u_u((p_58 >= ((safe_rshift_func_int16_t_s_s((safe_mul_func_int16_t_s_s((p_57 <= (g_374 < (safe_mul_func_int8_t_s_s(p_57, l_769)))), 0x7E14)), 8)) == p_57)), p_58))), 0xE325BD0D)), p_58))), l_697))), 5)), g_614)) ^ g_16), g_458)))) == p_58) >= l_741) > 0x91) < 0U) && l_770)) || g_686), g_374)) == l_697))
        {
            uint32_t l_771 = 4294967289U;
            int32_t l_817 = 0x2E5B7DD7;
            if (((l_771 , g_458) <= (((((safe_lshift_func_uint16_t_u_s(l_738, 4)) , (((+((((safe_rshift_func_uint8_t_u_u((((g_686 ^ (safe_add_func_int32_t_s_s((safe_mul_func_uint8_t_u_u((!((safe_add_func_uint8_t_u_u(l_693, (safe_mul_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(l_693, l_738)), (safe_sub_func_int32_t_s_s((((-1) > ((((l_738 <= p_57) >= l_771) < l_769) , g_458)) , p_58), 0U)))))) && p_58)), l_790)), g_678))) || 65535U) , 252U), g_136)) || g_159) > l_741) && l_771)) , l_701) , g_458)) >= l_700) | l_703) >= 7)))
            {
                int32_t l_791 = 8;
                int16_t l_802 = 0x6B3D;
                l_791 = p_58;
                g_803 |= (l_698 == ((safe_mul_func_int8_t_s_s(0, (safe_add_func_uint8_t_u_u(((g_391 != g_458) , (g_361 || (((p_57 == (g_681 == ((safe_rshift_func_int8_t_s_u(l_738, 4)) > ((((safe_sub_func_int16_t_s_s(g_678, l_802)) <= p_57) , 6U) < g_614)))) < p_57) <= g_739))), g_136)))) == p_57));
            }
            else
            {
                l_703 = (p_58 ^ (safe_add_func_int8_t_s_s(((((2U > (safe_mod_func_uint32_t_u_u((((((((g_16 | (safe_mod_func_int8_t_s_s((g_297 & (safe_mul_func_int8_t_s_s((((((safe_mod_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(0x7D, g_80)), p_57)) != p_57) >= ((p_58 & p_57) > p_57)) > p_58) & l_771), g_816))), g_680))) ^ g_80) ^ (-7)) == g_619) != l_817) | (-1)) == l_698), p_57))) ^ g_374) < l_738) == 0x8083F6B1), g_679)));
                if (g_638)
                    break;
            }
        }
        else
        {
            int32_t l_836 = (-6);
            l_741 = ((0x1E >= (safe_sub_func_int8_t_s_s(0x26, 0xA8))) & (((safe_mul_func_uint8_t_u_u((((safe_lshift_func_int8_t_s_s(0, (((p_58 <= (safe_rshift_func_uint16_t_u_s((((((safe_sub_func_uint16_t_u_u(g_739, (p_58 < ((safe_div_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(((safe_add_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u(((l_698 <= g_16) >= l_836), g_568)), (-1))) , g_374), p_57)), g_686)) || 0xA0)))) == 0x2375) || p_58) == g_619) <= p_58), 13))) != g_374) , l_836))) != (-1)) >= g_159), g_22)) >= 1) || l_738));
        }
    }
    return p_58;
}
static uint8_t func_63(uint32_t p_64)
{
    uint8_t l_261 = 0x27;
    int32_t l_275 = 8;
    const uint32_t l_288 = 4294967295U;
    const uint32_t l_295 = 4U;
    const int16_t l_296 = 0x57A5;
    uint32_t l_305 = 0U;
    const uint32_t l_333 = 0xD1D58CD3;
    uint8_t l_508 = 0xAF;
    uint32_t l_509 = 0xE59FF1F7;
    l_261 = func_65(func_5(p_64, p_64), g_22, g_17);
    l_275 = ((((0x4B >= ((p_64 > ((safe_mod_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((((g_159 ^ ((safe_mul_func_uint16_t_u_u(g_17, p_64)) < (g_22 | (((safe_unary_minus_func_uint32_t_u(0x656994F7)) , (safe_sub_func_uint32_t_u_u((l_261 & ((safe_div_func_int16_t_s_s((9U > 0x54A4), p_64)) ^ g_80)), g_188))) , l_261)))) != l_261) & g_17), g_16)), p_64)), g_17)) <= (-1))) != g_16)) == l_261) < g_80) , 0x68F5A85F);
    g_297 = (((((safe_mul_func_int16_t_s_s((((safe_div_func_int16_t_s_s((((g_188 , 0x52917B7F) && (safe_lshift_func_int8_t_s_u(((((safe_div_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s(((1 <= (p_64 && g_22)) && (safe_add_func_uint16_t_u_u(l_288, (safe_div_func_int16_t_s_s((p_64 && ((safe_sub_func_int32_t_s_s((g_188 | (safe_lshift_func_int16_t_s_s(p_64, p_64))), 1U)) != l_295)), g_159))))), 7)), p_64)) ^ p_64) >= g_136) > l_296), g_80))) | 0x67), g_8)) & 0xB5) & l_261), (-1))) , 0U) , 4294967295U) & 0x971AD179) | (-3));
    if ((safe_div_func_uint32_t_u_u((((0xB81C & (safe_rshift_func_uint8_t_u_s((+(safe_add_func_int8_t_s_s((g_159 & l_261), (l_305 == (safe_sub_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((!(p_64 >= l_261)), p_64)), ((safe_unary_minus_func_int16_t_s(((safe_sub_func_uint16_t_u_u(l_261, ((safe_rshift_func_uint8_t_u_u(255U, 4)) , 1))) ^ 253U))) || g_159))))))), 1))) , 0xE652) > (-1)), 0x7A10311E)))
    {
        int8_t l_316 = 0x3B;
        const uint32_t l_324 = 4294967295U;
        l_275 = ((((3 & p_64) ^ p_64) ^ l_316) >= 0xA17B);
        if ((safe_mul_func_uint8_t_u_u(g_17, (safe_div_func_int8_t_s_s(((safe_add_func_int16_t_s_s(p_64, (g_17 && ((~p_64) & ((((l_324 & (g_16 && ((safe_div_func_uint16_t_u_u((safe_add_func_int32_t_s_s(g_297, (l_316 || l_324))), g_297)) ^ g_297))) , 4294967293U) || p_64) , 0))))) > 7), g_16)))))
        {
            uint8_t l_337 = 0x32;
            int32_t l_346 = (-1);
            uint32_t l_372 = 0x871D96F4;
            int32_t l_373 = 0x5DA4C048;
            l_346 ^= ((safe_mul_func_uint16_t_u_u(g_297, ((((4294967294U > (safe_div_func_uint8_t_u_u(((l_333 <= l_261) < ((safe_rshift_func_int8_t_s_u(((((!l_295) , g_80) > l_337) | g_22), (safe_mul_func_uint8_t_u_u(((safe_mod_func_int8_t_s_s((safe_mod_func_int16_t_s_s((safe_mod_func_uint32_t_u_u(g_22, p_64)), 65535U)), 0xC6)) & 0xC29E), g_22)))) > 1U)), l_337))) > l_316) >= 0x32) , l_305))) ^ (-4));
            g_361 = (safe_mod_func_int16_t_s_s(l_288, (safe_lshift_func_uint8_t_u_s((p_64 == ((safe_lshift_func_uint8_t_u_s(((g_22 && (g_188 != 1U)) , ((safe_rshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(0x994F, ((safe_add_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_u(l_324, (0x8AD0 & 0))) , l_324), g_80)) && g_188))), 1)) , 0x7E)), 0)) | p_64)), 0))));
            l_373 |= (0xE5FB != (((l_305 < (safe_div_func_int8_t_s_s(p_64, ((safe_lshift_func_int8_t_s_u(0x97, (safe_add_func_int16_t_s_s((p_64 ^ ((l_316 | l_346) >= (0U | ((safe_sub_func_int16_t_s_s(p_64, l_372)) != 1U)))), g_159)))) , l_261)))) != g_80) < 0));
            g_374 = 1;
        }
        else
        {
            int8_t l_390 = 1;
            g_391 = (p_64 != (safe_rshift_func_int8_t_s_s(g_297, (p_64 > (safe_mod_func_uint32_t_u_u((p_64 == (safe_sub_func_uint16_t_u_u(l_324, (safe_rshift_func_int8_t_s_s(((safe_unary_minus_func_int16_t_s(p_64)) && (safe_mul_func_int32_t_s_s((safe_add_func_int16_t_s_s(g_361, (((((((0x60 == (safe_lshift_func_int8_t_s_s((l_390 ^ 0x0B), 1))) <= p_64) && g_17) < g_80) > g_374) && (-1)) > 0xBAE0D684))), 0U))), g_297))))), 0xD1F3727B))))));
        }
        l_275 = g_80;
    }
    else
    {
        uint16_t l_402 = 0U;
        uint32_t l_411 = 4294967295U;
        const int16_t l_424 = (-1);
        uint32_t l_438 = 0x7E578F98;
        int32_t l_450 = (-2);
        int32_t l_489 = 0;
        int32_t l_505 = 0xC6F29274;
        int32_t l_617 = 1;
        l_275 &= (~(+5U));
        l_275 = (safe_div_func_uint16_t_u_u(0x1A50, ((safe_rshift_func_uint16_t_u_s(((safe_add_func_int8_t_s_s((65535U >= l_295), (p_64 > ((((l_402 == (safe_div_func_uint32_t_u_u(((safe_sub_func_uint16_t_u_u(((g_8 , (0x7F && (safe_sub_func_int32_t_s_s(l_275, ((safe_mul_func_int16_t_s_s(p_64, p_64)) && l_411))))) , 4U), g_16)) != 1), l_402))) < g_8) , g_80) == l_411)))) <= 0xEA2ED9D6), g_361)) ^ l_411)));
        if ((safe_rshift_func_uint8_t_u_u(0xCC, 7)))
        {
            uint32_t l_425 = 0U;
            int32_t l_490 = 0x2B7DBCEE;
            int32_t l_534 = 0;
            uint16_t l_609 = 0U;
            l_425 &= (g_361 > (9 <= (safe_lshift_func_uint8_t_u_u(((safe_add_func_int16_t_s_s((0U >= (safe_rshift_func_uint16_t_u_s(l_295, (safe_mul_func_uint8_t_u_u(p_64, (safe_mod_func_int8_t_s_s(p_64, 0x30))))))), l_402)) <= (0xB3C18748 | l_424)), g_374))));
            l_438 = ((((((((0x31 < ((safe_mul_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((((safe_rshift_func_int8_t_s_u((0x872917E5 | (p_64 >= (l_288 ^ (safe_add_func_uint8_t_u_u((l_424 == 0x4F91D43B), 0x4B))))), ((safe_mul_func_int16_t_s_s(((g_80 , 0) <= g_17), l_402)) && g_16))) || p_64) , g_188), g_374)), g_361)), 0xE5)) < p_64)) <= g_188) >= p_64) != l_425) , 1U) | l_425) , l_305) <= p_64);
            for (g_391 = 0; (g_391 != 0); g_391 = safe_add_func_uint32_t_u_u(g_391, 9))
            {
                int32_t l_455 = 0;
                uint8_t l_487 = 0xA8;
                for (g_297 = (-20); (g_297 > 14); g_297 = safe_add_func_uint16_t_u_u(g_297, 3))
                {
                    uint32_t l_449 = 0U;
                    int8_t l_488 = (-5);
                    l_450 = ((((((safe_div_func_uint32_t_u_u(((255U | p_64) && (0x53AC ^ ((((safe_rshift_func_int8_t_s_u((p_64 && p_64), 1)) && (safe_rshift_func_uint16_t_u_s(((p_64 < (0 && g_80)) > l_425), g_159))) && 0x8DC0) > l_449))), p_64)) | g_136) && 4294967286U) & g_391) , 4294967287U) <= g_159);
                    g_458 &= (safe_sub_func_int8_t_s_s(0x85, (safe_div_func_uint16_t_u_u(l_455, (safe_sub_func_int16_t_s_s(p_64, 0xC729))))));
                    l_490 = ((safe_lshift_func_uint8_t_u_u(((l_275 ^ (g_22 || (((safe_add_func_uint8_t_u_u((4294967295U > 0x1E4A6710), ((safe_sub_func_int32_t_s_s(g_361, (safe_div_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(0x29, ((safe_rshift_func_int8_t_s_s((0x8BBA ^ (+(safe_sub_func_int8_t_s_s(((((((-1) & (safe_mul_func_uint16_t_u_u((safe_add_func_int32_t_s_s(((~((safe_rshift_func_uint16_t_u_s((((((safe_sub_func_uint8_t_u_u((safe_div_func_uint8_t_u_u(((l_425 < p_64) == l_487), p_64)), p_64)) | 0U) <= p_64) != l_487) > g_80), 5)) | 0x97)) >= 255U), l_488)), l_402))) == l_261) , 0x8A9AF497) , g_391) <= g_80), g_391)))), l_449)) == l_489))), g_22)), 0x194D7DD9)))) <= g_188))) | 251U) != l_455))) , g_159), g_136)) || 3);
                    g_510 &= ((safe_lshift_func_int8_t_s_u(((safe_mod_func_uint32_t_u_u(((safe_add_func_int16_t_s_s(((g_361 , ((safe_div_func_int32_t_s_s((safe_mod_func_uint16_t_u_u(((safe_mod_func_uint8_t_u_u(0U, 0xA7)) >= (g_17 | (p_64 | (safe_lshift_func_int8_t_s_s(g_136, 6))))), l_505)), (safe_rshift_func_int8_t_s_s((p_64 != g_361), p_64)))) > l_295)) && l_508), p_64)) == 1), 0x3E17F145)) || l_509), 4)) < p_64);
                }
                return l_296;
            }
            for (l_489 = (-1); (l_489 >= (-26)); l_489--)
            {
                uint32_t l_533 = 0x0C891353;
                int32_t l_567 = 1;
                int32_t l_615 = 0x5B090053;
                uint32_t l_669 = 4294967295U;
                for (l_438 = 23; (l_438 == 52); l_438++)
                {
                    int16_t l_536 = (-1);
                    g_535 = ((safe_add_func_int32_t_s_s(((safe_add_func_int32_t_s_s(((((l_490 >= ((safe_add_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(0x92B1, ((safe_add_func_uint32_t_u_u(g_159, (g_80 , ((safe_lshift_func_int8_t_s_u(((((safe_sub_func_int16_t_s_s(((safe_div_func_int32_t_s_s((safe_add_func_int8_t_s_s(l_425, p_64)), (-7))) == g_188), 65535U)) ^ p_64) && l_533) | g_22), 0)) >= p_64)))) != l_534))), g_80)) != 0x6A3A)) >= g_374) & l_490) | (-1)), 0x60658193)) && p_64), (-1))) , l_411);
                    l_536 &= (0x471B == p_64);
                    l_490 = (safe_rshift_func_uint16_t_u_s((g_391 == (safe_sub_func_uint8_t_u_u((((safe_div_func_int16_t_s_s(9, (g_535 | (safe_div_func_uint8_t_u_u(g_8, l_536))))) && ((((safe_unary_minus_func_uint32_t_u((safe_mul_func_int8_t_s_s((safe_add_func_int16_t_s_s((p_64 || g_535), 65535U)), g_136)))) > 1) != 0x67) , g_458)) <= g_510), g_16))), 12));
                }
                if ((!(safe_add_func_int8_t_s_s((safe_sub_func_int16_t_s_s(((l_533 , 4294967295U) < (safe_mod_func_int16_t_s_s(9, 65526U))), ((safe_mod_func_int8_t_s_s(0xED, ((((safe_mul_func_int8_t_s_s(((((safe_div_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((safe_mod_func_uint32_t_u_u(((p_64 , p_64) <= g_535), 4294967295U)), l_567)), 1)) || 255U) , 0x5481) & 0xD729), 8U)) , g_297) , g_16) , 0x34))) < p_64))), p_64))))
                {
                    uint32_t l_598 = 0x0D46969C;
                    int32_t l_618 = 0xB7AE38FB;
                    g_568++;
                    if ((9 && ((!(safe_div_func_int16_t_s_s((((safe_lshift_func_int8_t_s_s((safe_add_func_int16_t_s_s((safe_sub_func_int32_t_s_s(((safe_rshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s((p_64 != g_361), 7)), (safe_mod_func_uint8_t_u_u((l_425 < (safe_rshift_func_int16_t_s_s(((safe_mod_func_int16_t_s_s(((safe_mod_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s((safe_mod_func_uint16_t_u_u(0x0DF4, (safe_lshift_func_uint16_t_u_s(l_598, 8)))), 5)), (safe_sub_func_uint32_t_u_u((g_188 | (((g_535 & ((p_64 != g_391) & l_509)) != p_64) < l_402)), l_402)))) != l_534), l_288)) & g_458), g_391))), (-1))))) , g_22), g_80)), 1U)), 7)) , l_533) , p_64), 1U))) , 0x0A)))
                    {
                        int8_t l_616 = 1;
                        g_614 = (l_402 && (safe_mul_func_uint32_t_u_u(p_64, ((+((!(5U < 0x52)) , ((safe_mul_func_int8_t_s_s(p_64, (0x8D369A7C != (l_609 > (safe_div_func_int32_t_s_s(g_391, ((safe_add_func_int32_t_s_s(p_64, g_159)) || g_391))))))) && l_402))) == g_361))));
                        g_619--;
                        g_638 |= ((safe_mul_func_uint8_t_u_u(0xF3, (+(safe_add_func_uint16_t_u_u(4U, (l_490 <= (((safe_mod_func_int32_t_s_s(((l_534 , (safe_sub_func_int32_t_s_s((safe_div_func_int16_t_s_s(l_616, (safe_mul_func_uint16_t_u_u((((~(safe_rshift_func_uint16_t_u_u(5U, ((l_618 >= 0x96) <= (p_64 ^ l_534))))) <= p_64) == g_297), 0xBBF1)))), 0xFDA7249E))) | l_411), 1)) >= g_16) & p_64))))))) < g_297);
                        l_617 = ((safe_sub_func_int32_t_s_s((((g_136 ^ l_295) ^ (safe_mul_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_u(0x51, (0x43D8EA6D | (+(g_80 > (p_64 == (safe_mul_func_uint8_t_u_u((((g_374 | ((safe_div_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(3, (-1))), l_616)) > l_508)) , p_64) , g_159), g_614)))))))) < g_568), p_64))) >= (-4)), p_64)) & p_64);
                    }
                    else
                    {
                        return p_64;
                    }
                    g_678 = (safe_div_func_uint16_t_u_u(((p_64 , 65535U) | (((((safe_lshift_func_int16_t_s_s(0xC810, 9)) || (safe_mul_func_int8_t_s_s(((g_16 , ((safe_div_func_uint8_t_u_u(p_64, (safe_lshift_func_int16_t_s_u((~(safe_rshift_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((((l_669 > (safe_sub_func_uint32_t_u_u((((safe_add_func_uint8_t_u_u(g_8, ((((((safe_lshift_func_int8_t_s_s(g_159, 7)) || (((safe_lshift_func_uint8_t_u_u(((((g_619 , p_64) , p_64) , l_669) , g_391), l_615)) || l_609) ^ l_490)) || p_64) & 0x82) , l_489) | l_615))) == p_64) & l_609), l_508))) || l_490) | 0xD0), l_533)), 0xC4)), 12))), g_16)))) , g_535)) , p_64), l_305))) == 0x25C8B556) <= 0x4CF5EBA1) > g_188)), g_510));
                    g_679 = 0x922116FC;
                }
                else
                {
                    g_680 ^= 0x44B5EA75;
                    g_681--;
                }
                if ((l_534 != l_489))
                {
                    g_686 = (safe_rshift_func_uint16_t_u_s(g_159, 12));
                    l_450 |= ((safe_mod_func_uint16_t_u_u(65535U, (safe_rshift_func_uint8_t_u_u(p_64, 6)))) ^ ((((p_64 , g_686) || (l_617 | l_438)) & ((g_678 | l_402) && ((l_533 < p_64) , 0x0A))) >= g_361));
                }
                else
                {
                    l_275 ^= p_64;
                }
                l_617 = 0x2B68F0E9;
            }
        }
        else
        {
            l_489 = g_638;
        }
    }
    return g_681;
}
static const int32_t func_65(uint8_t p_66, const int32_t p_67, uint32_t p_68)
{
    const uint32_t l_69 = 0xFAB77C19;
    int16_t l_79 = 0xCA36;
    int32_t l_83 = 0xF168E5B4;
    int8_t l_102 = 0x63;
    uint8_t l_207 = 0x4E;
    int32_t l_238 = 0x1639E250;
    g_80 = (l_69 , (((safe_mul_func_int8_t_s_s(0x6C, ((safe_div_func_int16_t_s_s(((l_69 || ((((0x9D >= (0xE56F6324 > (((safe_div_func_uint16_t_u_u((g_16 , (!(p_66 >= g_16))), (0xEF ^ g_8))) | 65530U) <= g_17))) <= 0xF1E0EF15) < l_69) ^ g_8)) | 1U), g_22)) || g_22))) | g_8) ^ l_79));
    l_83 &= func_5(p_68, (safe_mod_func_uint16_t_u_u(0x9333, p_66)));
    l_83 = 0xE6D542D3;
    for (g_8 = (-7); (g_8 < (-16)); g_8--)
    {
        uint32_t l_101 = 1U;
        int32_t l_158 = 0x4EEAE813;
        uint32_t l_234 = 1U;
        for (p_66 = (-24); (p_66 == 36); ++p_66)
        {
            uint16_t l_109 = 0xE2C5;
            g_136 &= (safe_mod_func_uint16_t_u_u(func_90(func_96(l_101, l_102, g_16, p_68), p_68, (+(safe_sub_func_int16_t_s_s(((0x34 | 0) < (safe_rshift_func_uint8_t_u_u((l_83 & l_79), g_22))), l_109))), l_79, l_101), g_17));
        }
        l_83 = (((((func_137((((g_80 != ((safe_mod_func_uint32_t_u_u((g_22 != (((safe_div_func_uint32_t_u_u((((safe_rshift_func_int8_t_s_s(p_68, (!((safe_add_func_uint8_t_u_u(p_66, ((p_67 || (safe_div_func_int16_t_s_s((p_66 == (((p_68 , ((safe_mul_func_int8_t_s_s(g_22, ((g_136 , 4294967292U) || p_67))) >= l_102)) < p_68) <= p_66)), l_158))) , g_159))) != g_22)))) , 0x317E) || 0U), l_69)) <= p_66) == 0xEB29)), l_69)) | g_159)) , g_80) , (-10)), l_158, l_101, g_159, l_101) | p_68) >= 0x1A0B) || l_207) > l_69) , l_101);
        l_158 = (safe_add_func_int32_t_s_s((-9), (((((((((safe_mod_func_int16_t_s_s((g_22 , ((safe_add_func_int16_t_s_s(((((safe_lshift_func_int8_t_s_u(((safe_sub_func_uint16_t_u_u(0xA861, ((0x767B || (p_67 & (((safe_sub_func_int16_t_s_s(((safe_rshift_func_int8_t_s_s(0x7A, 5)) , g_17), g_136)) == (0 && l_101)) <= g_80))) > p_68))) | l_158), g_136)) <= g_159) > 4) != l_101), 0x831F)) && p_68)), 0x0988)) , 0xDC) != p_67) == l_83) || 4294967295U) & p_67) > g_8) | (-9)) < p_68)));
        for (l_83 = 0; (l_83 == 4); l_83 = safe_add_func_int32_t_s_s(l_83, 9))
        {
            const int16_t l_235 = 0xD141;
            l_238 |= (((safe_div_func_int16_t_s_s((p_66 , (safe_div_func_int16_t_s_s(((safe_div_func_uint32_t_u_u(0xBCC1DD9A, (safe_rshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(l_234, ((0x93C2 > (((((0xB1BC != (l_235 | (255U ^ p_67))) ^ (safe_mul_func_uint8_t_u_u((((((-1) & 4294967293U) >= l_235) > 0x2175B47A) <= p_66), 0x14))) , g_8) < 0xE1F836BF) , 65533U)) == 0x1D51))), 12)))) != 4), l_69))), 0x59C4)) && 0xF0311DD1) , p_67);
            l_238 ^= (safe_sub_func_uint16_t_u_u(l_158, (p_67 && ((safe_unary_minus_func_uint16_t_u(((safe_mul_func_int8_t_s_s((((safe_rshift_func_int16_t_s_s((253U >= (0xFF74A9DA == g_8)), (safe_rshift_func_int16_t_s_s((p_68 || p_66), (safe_mod_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s((((safe_add_func_int8_t_s_s((!(((safe_rshift_func_uint8_t_u_s(0U, 7)) < (((safe_sub_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(l_235, g_17)), l_235)) , 0x661D) != l_235)) && p_67)), l_235)) , (-1)) ^ g_80), g_22)), l_235)))))) != p_68) || g_16), g_17)) | l_235))) , 0U))));
            return l_235;
        }
    }
    return g_188;
}
static uint16_t func_90(int32_t p_91, int32_t p_92, const int32_t p_93, uint32_t p_94, uint32_t p_95)
{
    int32_t l_112 = 1;
    uint16_t l_125 = 7U;
    const int16_t l_126 = 0x77C9;
    int8_t l_127 = 0xFE;
    int32_t l_128 = 0x0FDB04FC;
    p_92 = ((safe_div_func_int8_t_s_s(func_5(l_112, func_96((safe_add_func_int16_t_s_s((func_96(func_5(g_80, (g_8 , (safe_rshift_func_int8_t_s_u(l_112, ((safe_mod_func_uint32_t_u_u((safe_mul_func_int16_t_s_s(g_17, ((safe_sub_func_int8_t_s_s(((l_112 > (safe_lshift_func_uint16_t_u_s(((((p_94 , (((4294967295U != (l_112 & g_22)) ^ g_8) , g_22)) && 8) , 5) <= l_112), l_125))) != p_91), g_22)) , g_17))), l_126)) || p_94))))), p_94, p_92, l_127) & l_128), g_22)), p_92, g_16, l_125)), l_126)) == 0x879C);
    l_112 = ((safe_sub_func_uint8_t_u_u((l_125 >= func_96(p_94, (p_94 && (!(safe_lshift_func_int16_t_s_s(((0xE5BA != ((0x26AE < l_126) >= (l_127 && p_92))) < (safe_mul_func_uint16_t_u_u(((1 >= 0x3B65DD65) == g_17), 5U))), 3)))), g_22, l_128)), 5)) , 0xE9F9EEF7);
    p_92 = g_8;
    return p_91;
}
static int32_t func_96(uint16_t p_97, int32_t p_98, int32_t p_99, int32_t p_100)
{
    int32_t l_103 = 0x018BFD1E;
    return l_103;
}
static int32_t func_137(int16_t p_138, uint8_t p_139, const uint32_t p_140, uint8_t p_141, const int16_t p_142)
{
    int32_t l_163 = (-4);
    g_188 = ((p_139 < g_8) || (safe_add_func_int32_t_s_s((~l_163), ((safe_rshift_func_int8_t_s_u((((g_17 != (((safe_sub_func_int8_t_s_s(l_163, (((safe_mod_func_int16_t_s_s((safe_add_func_int8_t_s_s(((safe_add_func_int16_t_s_s(((((((0xDE | (safe_add_func_uint16_t_u_u((((-1) & ((((safe_add_func_uint8_t_u_u((0x03 > ((safe_mul_func_uint8_t_u_u((((safe_lshift_func_uint8_t_u_u((((safe_div_func_int32_t_s_s((((safe_mul_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(0x01, 1)), p_139)) == p_141) , 0x998A83C5), 3)) > p_139) || p_139), g_80)) <= 0xCCF6) != 65535U), g_136)) , l_163)), 0x73)) , p_142) , g_8) < g_8)) > 255U), 0xBB92))) < p_142) == l_163) <= 0x1460D046) <= l_163) , 0xB4A2), l_163)) ^ l_163), l_163)), p_141)) > 0x6B5F) , g_17))) , l_163) ^ g_159)) & p_140) ^ p_139), l_163)) != l_163))));
    l_163 = (1 == (((safe_rshift_func_int16_t_s_s((((safe_div_func_int16_t_s_s(((safe_mod_func_uint16_t_u_u(l_163, (safe_sub_func_int8_t_s_s((safe_add_func_uint32_t_u_u(l_163, 0x0CC641CF)), (p_142 || ((safe_lshift_func_uint8_t_u_s(((safe_mul_func_uint16_t_u_u(((~(safe_lshift_func_uint16_t_u_s(l_163, (+(g_8 , p_140))))) && ((g_80 >= 0xF273) , l_163)), g_136)) || 0x7769F70A), 7)) && p_140)))))) , g_17), g_22)) , 4294967287U) > g_22), 3)) > p_142) & p_140));
    return l_163;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_8;
    csmith_sink_ = g_16;
    csmith_sink_ = g_17;
    csmith_sink_ = g_22;
    csmith_sink_ = g_80;
    csmith_sink_ = g_136;
    csmith_sink_ = g_159;
    csmith_sink_ = g_188;
    csmith_sink_ = g_297;
    csmith_sink_ = g_361;
    csmith_sink_ = g_374;
    csmith_sink_ = g_391;
    csmith_sink_ = g_458;
    csmith_sink_ = g_510;
    csmith_sink_ = g_535;
    csmith_sink_ = g_568;
    csmith_sink_ = g_614;
    csmith_sink_ = g_619;
    csmith_sink_ = g_638;
    csmith_sink_ = g_678;
    csmith_sink_ = g_679;
    csmith_sink_ = g_680;
    csmith_sink_ = g_681;
    csmith_sink_ = g_686;
    csmith_sink_ = g_739;
    csmith_sink_ = g_803;
    csmith_sink_ = g_816;
    csmith_sink_ = g_890;
    csmith_sink_ = g_894;
    csmith_sink_ = g_897;
    platform_main_end(0,0);
    return 0;
}
