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

volatile uint32_t csmith_sink_ = 0;
static long __undefined;
static uint8_t g_14 = 0xF1L;
static int16_t g_63 = 0L;
static uint32_t g_87 = 0x9FB14BE5L;
static int16_t g_114 = 0x25A1L;
static int32_t g_115 = (-1L);
static int32_t g_121 = 8L;
static int32_t g_123 = 1L;
static uint32_t g_125 = 0x843D8BAAL;
static uint8_t g_128 = 0x02L;
static uint8_t g_162 = 0x99L;
static int8_t g_176 = 9L;
static uint16_t g_183 = 0x80E7L;
static int16_t g_232 = 0L;
static uint16_t g_233 = 65532UL;
static uint16_t g_238 = 0x0EB1L;
static int8_t g_293 = 0xE5L;
static uint32_t g_337 = 4294967295UL;
static int32_t g_371 = (-9L);
static uint32_t g_374 = 0xB62747BDL;
static int32_t g_393 = 0xAC12D3B9L;
static int16_t g_397 = 7L;
static uint32_t g_398 = 4294967289UL;
static int8_t g_626 = 0xF3L;
static uint32_t g_627 = 0x51C904A2L;
static uint8_t g_738 = 255UL;
static int8_t g_753 = (-8L);
static uint32_t g_754 = 0x30E582BBL;
static uint16_t g_893 = 1UL;
static uint32_t g_989 = 0xC9D11046L;
static uint32_t g_999 = 18446744073709551615UL;
static uint8_t g_1000 = 0x95L;
static uint8_t g_1002 = 0xE0L;
static uint16_t g_1018 = 65528UL;
static int8_t func_1(void);
inline static uint8_t func_3(uint8_t p_4, uint16_t p_5, uint16_t p_6);
inline static uint8_t func_10(int32_t p_11);
inline static int16_t func_15(int16_t p_16, uint8_t p_17, uint16_t p_18, int32_t p_19);
inline static uint16_t func_23(int8_t p_24, uint32_t p_25, uint32_t p_26, uint32_t p_27);
static int16_t func_36(int32_t p_37);
inline static uint16_t func_40(int16_t p_41, const int16_t p_42, uint32_t p_43, uint16_t p_44);
inline static const uint8_t func_58(uint32_t p_59, uint32_t p_60, uint8_t p_61, int16_t p_62);
static uint32_t func_68(uint8_t p_69, const uint8_t p_70, int32_t p_71);
inline static const int16_t func_72(uint8_t p_73, const uint32_t p_74, uint8_t p_75);
static int8_t func_1(void)
{
    int8_t l_2 = 0x59L;
    int32_t l_7 = (-1L);
    int32_t l_992 = (-1L);
    int32_t l_1001 = 0x79E00AD0L;
    int32_t l_1041 = 0xB6F01C8DL;
    int32_t l_1042 = (-9L);
    g_1018 &= (l_2 != ((func_3(l_7, (safe_sub_func_int32_t_s_s(((l_992 = func_10(l_7)) < (safe_div_func_uint32_t_u_u(g_753, (g_1002 = (l_2 , (l_1001 = (safe_sub_func_uint8_t_u_u((g_1000 = ((((g_999 ^= ((g_397 & (safe_mod_func_uint16_t_u_u((l_7 & (l_2 , l_7)), g_121))) , g_753)) ^ g_1000) & g_753) , l_2)), g_397)))))))), l_2)), g_397) ^ g_753) ^ 0UL));
    l_1042 ^= (safe_div_func_uint16_t_u_u((safe_unary_minus_func_uint16_t_u(((g_393 |= (g_374 & (g_114 = (safe_rshift_func_uint8_t_u_u(((((g_238 , (safe_mod_func_uint32_t_u_u(l_1001, (((l_7 = ((safe_mod_func_int32_t_s_s((g_115 = (safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_7, ((safe_rshift_func_int8_t_s_s(l_7, 7)) || (!((((2UL & (safe_add_func_uint8_t_u_u(l_7, (((g_753 &= (g_176 = ((l_1041 = ((safe_lshift_func_int8_t_s_u((l_992 &= g_293), (((safe_lshift_func_int16_t_s_u((g_233 == 0x7FF7L), g_87)) , g_121) || l_7))) >= 0x893BL)) > g_293))) <= l_7) < 0x8FBCE68FL)))) <= 0x8FD5L) , l_2) && l_992))))), g_989))), 0xB67D4128L)) , l_1001)) || 0x41711A6DL) & l_1001)))) == (-7L)) <= 0x6E00DDE8L) == l_1001), g_1000))))) < g_371))), 0x3ABFL));
    return l_992;
}
inline static uint8_t func_3(uint8_t p_4, uint16_t p_5, uint16_t p_6)
{
    uint32_t l_1012 = 0xF250B9BEL;
    int32_t l_1017 = 0L;
    l_1017 ^= (safe_div_func_uint16_t_u_u(((safe_add_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u((((safe_rshift_func_uint8_t_u_s(((safe_unary_minus_func_uint32_t_u((g_374 = g_989))) | g_162), 7)) || p_4) > l_1012), (((l_1012 , (0L == (safe_add_func_uint32_t_u_u(l_1012, (((safe_rshift_func_int8_t_s_s(((l_1012 != l_1012) != 0x8FE5L), 5)) >= l_1012) >= p_4))))) & l_1012) < 65531UL))), g_238)) && l_1012), g_1000));
    g_115 = g_989;
    g_115 = (g_232 == p_5);
    return p_4;
}
inline static uint8_t func_10(int32_t p_11)
{
    uint16_t l_20 = 0xCDF9L;
    uint32_t l_35 = 0x748BBE26L;
    int32_t l_781 = 0L;
    uint8_t l_782 = 0x50L;
    int32_t l_783 = 0x4C6B50D8L;
    int32_t l_784 = 0xB85EF31BL;
    int32_t l_810 = 0x60114124L;
    uint16_t l_838 = 0UL;
    int8_t l_846 = 1L;
    int8_t l_889 = 0x5AL;
    l_784 = ((l_783 = (safe_lshift_func_int16_t_s_u((g_14 , (l_781 = func_15((8UL & (((((((l_20++) > p_11) , (g_14 || func_23(((+((safe_mod_func_uint16_t_u_u((safe_add_func_int8_t_s_s(p_11, ((p_11 <= 4294967288UL) ^ (((safe_sub_func_uint16_t_u_u(l_20, l_20)) <= l_20) | l_35)))), g_14)) , l_20)) && p_11), g_14, g_14, p_11))) , 0x98E1L) || p_11) == 0x8CL) , g_374)), p_11, l_35, l_35))), l_782))) , 1L);
    l_781 = (safe_rshift_func_int8_t_s_s(((g_233 = ((g_63 = (safe_div_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s((p_11 || (safe_lshift_func_int8_t_s_u(((((p_11 > ((((l_783 = (g_176 |= g_238)) < 0xE3L) > (p_11 < (((g_626 |= (((p_11 & ((p_11 == ((g_398 , (l_20 && g_87)) || p_11)) && (-10L))) ^ g_374) | g_233)) || p_11) ^ 0xC66FAF08L))) == l_35)) & g_397) & p_11) , p_11), g_125))), l_35)), p_11))) && l_783)) >= p_11), 6));
    if (l_35)
        goto lbl_818;
lbl_818:
    l_810 = (l_783 ^= ((l_782 ^ (safe_lshift_func_uint16_t_u_u(g_238, (((((p_11 > ((safe_rshift_func_int8_t_s_s((g_87 , (safe_rshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_u((((safe_sub_func_int16_t_s_s(((((safe_add_func_int16_t_s_s((safe_div_func_uint32_t_u_u(l_35, p_11)), ((safe_lshift_func_int16_t_s_u((safe_unary_minus_func_uint8_t_u((g_738++))), 4)) > p_11))) & (-1L)) < (safe_sub_func_uint32_t_u_u((safe_add_func_int8_t_s_s((!(((p_11 > l_35) & p_11) < 5L)), p_11)), g_753))) , p_11), 0xA0A4L)) | l_35) != p_11), 4)), 10))), 3)) && 0x91L)) >= l_20) , g_183) < 0xDDL) > p_11)))) , p_11));
    for (g_371 = (-13); (g_371 == 5); g_371++)
    {
        int32_t l_828 = 0x4C8077C0L;
        int32_t l_839 = 5L;
        uint32_t l_840 = 18446744073709551614UL;
        int32_t l_887 = 5L;
        int32_t l_888 = 0xB1AF444AL;
        int32_t l_930 = 0xDCCA552DL;
        int16_t l_984 = (-1L);
        l_839 = ((l_781 |= 9L) > ((~(((l_810 &= (safe_rshift_func_int8_t_s_s((((safe_mod_func_uint32_t_u_u((safe_div_func_int32_t_s_s(p_11, ((((((((l_828 &= g_738) && ((safe_sub_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((p_11 < 0x28L), ((safe_mod_func_uint8_t_u_u(0x34L, (safe_unary_minus_func_uint32_t_u(l_828)))) < (l_782 & (safe_lshift_func_int8_t_s_u(g_232, l_838)))))), 0x5D27L)) > g_183)) > p_11) & g_123) , 0xCA392003L) , l_828) != l_839) , l_840))), (-4L))) & p_11) , p_11), l_782))) , g_754) & 3UL)) && p_11));
        if (g_337)
        {
            uint16_t l_865 = 0x7943L;
            int32_t l_890 = 0x7B6E0C44L;
            int32_t l_891 = 0x306DEE12L;
            int32_t l_892 = (-2L);
            g_115 = (safe_add_func_int8_t_s_s(p_11, (p_11 ^ (0x43857577L == (!(safe_mod_func_int16_t_s_s((g_63 &= (l_846 = 0L)), (safe_add_func_int8_t_s_s((g_738 != (safe_sub_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_u((((safe_div_func_uint16_t_u_u(((p_11 | (g_753 && (safe_rshift_func_int16_t_s_u((safe_div_func_uint32_t_u_u((l_840 == ((l_810 &= g_114) != 0UL)), g_125)), p_11)))) || 1L), g_293)) , p_11) || 1UL), 0)), g_238))), g_238)))))))));
            if (l_838)
                break;
            l_889 = (l_839 || ((safe_lshift_func_uint8_t_u_u((safe_div_func_int16_t_s_s(((safe_div_func_uint8_t_u_u((g_128 = (65534UL ^ l_865)), (safe_div_func_int16_t_s_s(p_11, (safe_lshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((safe_div_func_int16_t_s_s((safe_mod_func_int16_t_s_s(((safe_add_func_uint32_t_u_u(g_232, (l_887 = (safe_div_func_uint16_t_u_u(((g_14 != (safe_lshift_func_int16_t_s_u((p_11 & (l_839 = p_11)), 15))) , ((safe_sub_func_int32_t_s_s((+g_374), l_839)) == g_14)), l_828))))) , l_783), 6UL)), g_63)), p_11)), l_865)), g_232)))))) , l_888), g_125)), g_87)) | g_371));
            ++g_893;
        }
        else
        {
            uint32_t l_929 = 4294967295UL;
            int32_t l_932 = 0x45F8745CL;
            int32_t l_985 = 0x37A56C9AL;
            int32_t l_986 = 0xC0D09565L;
            int32_t l_987 = (-5L);
            int32_t l_988 = 6L;
            for (l_20 = 0; (l_20 < 55); l_20++)
            {
                uint8_t l_916 = 0x3AL;
                const int32_t l_931 = (-6L);
                int32_t l_952 = 9L;
                uint8_t l_957 = 0UL;
                uint8_t l_983 = 255UL;
                if ((safe_div_func_int32_t_s_s(p_11, (safe_add_func_int16_t_s_s(((l_783 = (safe_div_func_int16_t_s_s(p_11, (safe_sub_func_int8_t_s_s(((g_753 >= (((safe_lshift_func_uint16_t_u_s(l_840, 7)) && (safe_mod_func_int16_t_s_s(0x18F1L, (safe_sub_func_int8_t_s_s(((safe_div_func_uint32_t_u_u((((((safe_div_func_uint32_t_u_u((((((((l_916++) | (safe_sub_func_int32_t_s_s(((((safe_rshift_func_int8_t_s_s((((safe_mod_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u((safe_mod_func_int8_t_s_s(((((0UL || g_123) || (g_233 , ((((((0x042BL < g_397) == g_125) > (-1L)) < g_738) < l_929) != 0UL))) == p_11) != 9L), (-1L))), 0x042896CAL)), p_11)) | 0x0EL) & g_626), p_11)) == g_893) , p_11) <= g_63), g_754))) ^ p_11) ^ 0x2EL) <= 0xB99F0B12L) & p_11) ^ g_293), l_930)) , p_11) , p_11) ^ p_11) || p_11), g_293)) || l_916), g_125))))) ^ p_11)) == l_828), l_931))))) < g_374), 0xE92DL)))))
                {
                    int16_t l_933 = 0x07CAL;
                    l_933 &= (l_932 = (g_232 ^ (g_162 ^ 1UL)));
                    g_115 &= ((safe_add_func_uint8_t_u_u((l_932 &= (g_738 ^= (safe_lshift_func_uint8_t_u_s((((p_11 , (l_839 |= (((safe_unary_minus_func_int8_t_s((((p_11 | ((safe_sub_func_uint32_t_u_u((((safe_add_func_int32_t_s_s((((g_14 ^ (safe_add_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((safe_div_func_uint32_t_u_u((6UL | ((safe_add_func_int8_t_s_s(g_125, (g_232 != (g_233 , ((((+(((l_952 = g_123) != (!((g_893 = (safe_div_func_uint8_t_u_u((!(g_754 = 0UL)), l_957))) <= 65535UL))) ^ g_87)) > g_176) && p_11) , 0x79L))))) && l_929)), l_840)), 11)), 0xA6L))) , g_63) > p_11), g_753)) & g_162) , g_233), 0xEF8C594EL)) < 0x66L)) & 0L) , p_11))) & l_931) == g_393))) || g_63) , 9UL), 0)))), g_63)) > p_11);
                }
                else
                {
                    uint32_t l_982 = 1UL;
                    if (l_930)
                        break;
                    g_115 = ((safe_lshift_func_int8_t_s_u(p_11, (safe_add_func_int8_t_s_s(g_121, ((+(l_784 ^ g_238)) < (((g_393 ^= (safe_div_func_int32_t_s_s(((-2L) && (safe_mod_func_int32_t_s_s((+(((safe_div_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(((l_930 &= (safe_div_func_uint16_t_u_u(l_932, (((p_11 >= 0x7FD3L) ^ (((safe_sub_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_u((((safe_lshift_func_uint16_t_u_s((safe_div_func_uint32_t_u_u(l_982, p_11)), 11)) | l_983) == p_11), l_828)) >= l_887), 1UL)) ^ p_11) , g_627)) , (-1L))))) , p_11), 7)), p_11)) != p_11) >= g_893)), 0x8C77D938L))), l_828))) || 0x859B3E60L) , p_11)))))) & p_11);
                }
            }
            if (p_11)
                continue;
            l_984 = 0L;
            --g_989;
        }
    }
    return l_784;
}
inline static int16_t func_15(int16_t p_16, uint8_t p_17, uint16_t p_18, int32_t p_19)
{
    int8_t l_767 = 0x35L;
    int8_t l_780 = 0xBAL;
    l_780 |= (((safe_sub_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(2UL, (0L >= g_738))), l_767)) <= (g_87 , ((((safe_sub_func_uint8_t_u_u(((safe_sub_func_int32_t_s_s(0xDCFF2DC4L, ((safe_lshift_func_uint8_t_u_u(((safe_div_func_int32_t_s_s(((safe_mod_func_uint32_t_u_u(((safe_rshift_func_int16_t_s_u(((p_17 = l_767) < l_767), (((l_767 <= l_767) == g_115) <= g_293))) >= 0UL), (-2L))) >= l_767), g_626)) <= 1UL), 0)) , 0x9373BE72L))) , 0x63L), (-10L))) | 4294967295UL) < 4294967290UL) && 0UL))) & 255UL);
    return g_87;
}
inline static uint16_t func_23(int8_t p_24, uint32_t p_25, uint32_t p_26, uint32_t p_27)
{
    uint32_t l_51 = 0x315BFEB1L;
    uint32_t l_64 = 0xE8824086L;
    int32_t l_297 = 8L;
    int32_t l_339 = (-1L);
    int32_t l_340 = 0x8B88E978L;
    uint16_t l_757 = 0x0D86L;
    int32_t l_758 = 0x4F24ECEEL;
    l_758 = ((l_757 = ((p_24 ^ ((func_36(((0x7BL > (safe_sub_func_int32_t_s_s(((g_14 || (l_340 = ((l_339 &= (func_40((safe_rshift_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(((3UL == (safe_rshift_func_int8_t_s_u((l_297 ^= ((l_51 , ((safe_rshift_func_int16_t_s_u((((safe_div_func_uint32_t_u_u((safe_div_func_uint8_t_u_u(func_58((((g_63 = 0xDD145601L) ^ l_51) == g_14), l_64, l_51, g_14), l_64)), 0x58F1CD69L)) , p_25) > l_64), 1)) != g_14)) == l_64)), p_26))) , 0xC2EDL), 65529UL)), g_121)), g_121, l_64, l_64) == 1L)) , g_114))) != p_24), 1L))) , 0x39972021L)) & 1UL) < 4294967295UL)) && l_340)) > p_26);
    l_339 = (l_297 & (((p_25 == (safe_sub_func_int8_t_s_s((p_24 = (g_293 , (((((l_758 = ((p_24 , (((g_63 < (((((l_64 >= 0x9AL) & (g_115 , ((0UL <= 0xD1L) , l_757))) <= 0x4AL) == l_64) != g_293)) >= 0xF45EL) & p_27)) <= 0x8ECBAB5EL)) , g_14) , 0UL) <= l_64) != 0x834AL))), l_297))) && 0x62C4EECAL) | 0x126FL));
    return p_26;
}
static int16_t func_36(int32_t p_37)
{
    int16_t l_351 = 0x66DFL;
    int32_t l_366 = (-5L);
    int32_t l_367 = 0xF3BBD960L;
    uint16_t l_392 = 0UL;
    int32_t l_395 = 0L;
    int32_t l_396 = 0xAAFB5A1BL;
    uint32_t l_403 = 4UL;
    uint32_t l_425 = 9UL;
    uint32_t l_426 = 0xD3B0A5F7L;
    int32_t l_450 = 4L;
    int32_t l_460 = 0xE0484801L;
    uint32_t l_471 = 0xE97BB8A4L;
    uint32_t l_484 = 7UL;
    uint32_t l_501 = 0x714F085FL;
    int32_t l_502 = 0xEEB9A91AL;
    int32_t l_503 = (-1L);
    int8_t l_504 = 1L;
    uint32_t l_515 = 0x5B47B51DL;
    uint8_t l_523 = 0UL;
    int32_t l_535 = 0L;
    int16_t l_537 = 0x6F6BL;
    int32_t l_539 = 0L;
    uint16_t l_552 = 65535UL;
    uint32_t l_566 = 0UL;
    uint8_t l_567 = 3UL;
    int8_t l_569 = (-3L);
    uint32_t l_570 = 0x699D0825L;
    int8_t l_575 = 0x03L;
    int32_t l_600 = (-1L);
    uint16_t l_621 = 0x0429L;
    int32_t l_633 = 7L;
    int32_t l_634 = (-1L);
    uint32_t l_637 = 18446744073709551606UL;
    uint16_t l_643 = 0x212FL;
    uint8_t l_648 = 255UL;
    int8_t l_684 = 5L;
    uint32_t l_703 = 0xDC54B03DL;
    int32_t l_704 = 0x98F1A599L;
    uint32_t l_736 = 0x854D8CF6L;
    uint16_t l_745 = 65535UL;
    if (((l_367 = (safe_mod_func_int16_t_s_s((safe_sub_func_int8_t_s_s(((safe_div_func_int8_t_s_s((safe_sub_func_int32_t_s_s((l_366 = (safe_add_func_int8_t_s_s((l_351 >= (safe_unary_minus_func_uint16_t_u(p_37))), (safe_div_func_int32_t_s_s(((((p_37 && ((safe_sub_func_int16_t_s_s((l_351 | (safe_sub_func_int16_t_s_s(0x3F14L, (((g_128 && (safe_unary_minus_func_uint16_t_u((safe_mod_func_int16_t_s_s((safe_div_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(g_115, p_37)), g_162)), 3L))))) == 1UL) , 65528UL)))), 65526UL)) & g_233)) > p_37) != p_37) || g_87), 0x14E27A1FL))))), p_37)), g_63)) | 0x7C98E5AEL), 0xDAL)), g_14))) > l_351))
    {
        int32_t l_368 = 0xC6A78CF5L;
        int16_t l_369 = 0xEF25L;
        int32_t l_370 = (-2L);
        int32_t l_372 = 1L;
        int32_t l_373 = 0x2C63C90DL;
        g_374++;
        l_373 = l_366;
        l_396 |= (safe_sub_func_int8_t_s_s((l_368 = (l_370 = (l_395 |= (+(p_37 || ((safe_div_func_int32_t_s_s((safe_lshift_func_int16_t_s_s((safe_sub_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u((1UL > (((((4L >= (((l_369 < (g_162 <= (((l_366 ^= (((safe_sub_func_int16_t_s_s(((safe_sub_func_int32_t_s_s((l_392 ^ (g_393 > p_37)), (~g_63))) != 0x43D9L), 0xB098L)) , 0x44L) ^ g_293)) == g_123) > g_337))) | 0x96L) < p_37)) >= l_368) , g_128) , g_293) > 0x8067L)), 0xA8L)) || (-1L)), g_337)), l_367)), g_374)) , g_183)))))), g_14));
    }
    else
    {
        uint16_t l_411 = 0xDDD2L;
        ++g_398;
        for (l_351 = 0; (l_351 <= (-1)); l_351 = safe_sub_func_int32_t_s_s(l_351, 4))
        {
            --l_403;
            return p_37;
        }
        for (g_398 = 0; (g_398 == 53); ++g_398)
        {
            uint16_t l_408 = 7UL;
            int32_t l_427 = 0xA917BC99L;
            l_408++;
            l_367 = (l_411 || (safe_mod_func_uint16_t_u_u((((l_427 = ((safe_div_func_uint16_t_u_u(((p_37 , (l_408 | ((0x6FL && ((~(0xCCA4L && (safe_add_func_int16_t_s_s((g_232 = (safe_mod_func_uint16_t_u_u(0x3357L, ((((safe_sub_func_int32_t_s_s((p_37 = ((l_395 = 1L) == (((l_396 ^= 2L) , p_37) , g_14))), l_367)) <= g_371) >= l_411) | (-9L))))), l_425)))) > l_426)) | 0L))) > l_392), l_408)) , p_37)) && l_427) > g_123), g_371)));
            g_393 |= 0x4A889A83L;
            p_37 = g_125;
        }
    }
    if (g_162)
        goto lbl_464;
    if ((safe_mod_func_uint16_t_u_u(((((safe_sub_func_uint8_t_u_u(((l_367 & (safe_div_func_int8_t_s_s(((safe_add_func_uint32_t_u_u((--g_125), g_176)) != ((+l_367) ^ (247UL & (((safe_div_func_int32_t_s_s((((((((safe_div_func_int16_t_s_s((g_63 = (g_232 = (safe_rshift_func_int8_t_s_s(((p_37 > ((~(safe_sub_func_uint16_t_u_u((safe_div_func_uint16_t_u_u((--g_238), g_121)), (((p_37 < (l_396 |= (safe_mod_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s((~((((g_393 = (safe_rshift_func_uint8_t_u_u(0x3AL, (l_450 || l_460)))) >= p_37) , l_351) && p_37)), l_460)), (-3L))))) != g_398) < 4294967288UL)))) || p_37)) , l_395), 1)))), l_366)) > 0x4B54537DL) , g_397) || p_37) ^ 0x3BL) > (-1L)) && 0x84D77968L), p_37)) < p_37) , g_115)))), p_37))) < g_337), l_395)) | g_14) <= l_351) , 0x1D72L), g_371)))
    {
lbl_464:
        for (g_398 = (-8); (g_398 >= 37); g_398 = safe_add_func_int16_t_s_s(g_398, 7))
        {
            uint16_t l_463 = 0UL;
            if (l_450)
                break;
            return l_463;
        }
        if ((safe_lshift_func_int8_t_s_u((g_176 &= ((((p_37 == (safe_lshift_func_uint16_t_u_s(((l_471 > ((((1UL | (safe_add_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((((((((p_37 | 0x5D9B5BCDL) >= ((safe_rshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_s(((l_502 = (safe_lshift_func_int16_t_s_u((safe_div_func_int16_t_s_s(((((l_484 <= (safe_add_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s(((safe_sub_func_uint16_t_u_u(p_37, (safe_lshift_func_uint16_t_u_u(((((l_501 ^= ((safe_sub_func_int32_t_s_s((safe_add_func_int8_t_s_s(((-9L) ^ (safe_mod_func_uint32_t_u_u(((((g_121 | 1UL) < g_397) == p_37) > (-3L)), g_87))), p_37)), g_115)) != p_37)) == p_37) > 0UL) <= l_502), 6)))) , l_366), p_37)), l_425)) & l_503), g_121))) , 65533UL) | 0UL) && 0xBD83F23BL), 0xDDB4L)), 9))) ^ g_397), p_37)), g_114)) || p_37)) || g_393) & g_293) & g_14) > 0UL) , p_37), 0)), 65527UL))) , 5UL) || g_63) <= 0xDF109158L)) || g_397), 15))) , p_37) > g_393) < p_37)), l_504)))
        {
            const uint32_t l_509 = 18446744073709551615UL;
            int32_t l_514 = 1L;
            int32_t l_516 = 0x2D333834L;
            l_516 ^= (safe_mod_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u((l_509 && ((((l_515 &= ((g_337 = (((5UL && p_37) , (((safe_div_func_int16_t_s_s((0x54409EFDL < l_351), ((g_233 |= p_37) || g_183))) , (safe_lshift_func_uint8_t_u_u((((0x21E3L || (l_514 = (((g_183 = g_371) < g_233) == l_509))) && p_37) != l_460), g_114))) == l_509)) && p_37)) | 0UL)) || g_398) , 65535UL) , p_37)), g_115)), l_509));
        }
        else
        {
            uint8_t l_520 = 0UL;
            int32_t l_538 = 1L;
            int32_t l_551 = 1L;
            uint32_t l_666 = 0x81968356L;
            for (l_515 = 0; (l_515 != 8); l_515 = safe_add_func_uint8_t_u_u(l_515, 4))
            {
                uint32_t l_519 = 0UL;
                int32_t l_536 = (-7L);
                int32_t l_568 = 0xF9DD4E99L;
                l_520 = l_519;
                g_393 &= (safe_mod_func_uint32_t_u_u((l_523 == (safe_add_func_int32_t_s_s((safe_sub_func_int16_t_s_s(((((l_551 = ((safe_sub_func_uint32_t_u_u(p_37, (((p_37 | 246UL) <= (safe_unary_minus_func_int16_t_s((safe_sub_func_int16_t_s_s(l_520, (((l_538 ^= ((safe_div_func_uint16_t_u_u((g_233--), 0x214DL)) <= ((safe_add_func_uint8_t_u_u(l_395, ((safe_mod_func_uint32_t_u_u(((g_14 |= ((!(p_37 == ((safe_add_func_int32_t_s_s((((safe_rshift_func_uint8_t_u_u(0UL, g_176)) , p_37) , p_37), 0xABBBB557L)) , 0x75L))) , l_519)) <= l_520), 0x1B24D9D2L)) , g_337))) & l_519))) != p_37) <= 0x98L)))))) < l_536))) == p_37)) , 0x237EL) < l_552) || 0x89AAL), 0x3454L)), 0xB85252EDL))), p_37));
                l_570 = (((safe_div_func_uint16_t_u_u((safe_unary_minus_func_uint16_t_u(p_37)), (safe_div_func_int32_t_s_s(l_471, g_374)))) ^ (safe_sub_func_uint32_t_u_u(1UL, g_398))) ^ (((safe_add_func_uint8_t_u_u((l_568 = (((safe_add_func_uint32_t_u_u(l_396, ((g_125 > (l_536 = p_37)) >= ((safe_rshift_func_int16_t_s_s((l_566 > g_337), p_37)) | g_183)))) & l_567) , 0x50L)), l_569)) < l_520) < p_37));
            }
lbl_737:
            for (g_293 = (-2); (g_293 != (-7)); g_293--)
            {
                uint8_t l_613 = 0x0AL;
                int32_t l_625 = 0x2815A318L;
                uint16_t l_632 = 0xED29L;
                int32_t l_651 = 1L;
                for (l_426 = 28; (l_426 >= 15); l_426 = safe_sub_func_uint8_t_u_u(l_426, 9))
                {
                    int32_t l_601 = 0xD1D736AFL;
                    int32_t l_623 = 1L;
                    if ((l_575 = 0x4796A68EL))
                    {
                        int16_t l_622 = 0x151BL;
                        g_115 = (g_337 ^ (-10L));
                        g_393 = (l_601 = ((safe_sub_func_int16_t_s_s((!(((safe_rshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((~((safe_add_func_uint32_t_u_u(((((p_37 == p_37) < (((safe_sub_func_uint16_t_u_u(0xF4C5L, (g_233 | ((g_337 , (safe_mod_func_int8_t_s_s((0UL | g_114), 0xDBL))) || ((safe_rshift_func_int8_t_s_u((((((safe_lshift_func_uint16_t_u_s((((safe_rshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(p_37, 7)), p_37)) ^ l_504) >= p_37), g_374)) , 0x5465E16EL) , 0x442AL) , p_37) , l_567), 2)) > l_600))))) , l_551) < g_398)) && 1UL) > l_396), p_37)) != g_14)), g_337)), 3)), p_37)) == 0xEEF9L) <= p_37)), 0L)) && p_37));
                        l_538 = ((((0xBFL <= (l_551 = (((g_374 != (safe_rshift_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(((((safe_lshift_func_uint16_t_u_s((((l_601 = ((safe_sub_func_uint32_t_u_u((p_37 ^ (safe_unary_minus_func_int8_t_s(l_613))), 0x04C0E27DL)) >= (safe_mod_func_int32_t_s_s((safe_lshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((l_621 |= (+(p_37 > ((l_551 != g_63) > (g_183 = 0UL))))), 4)), p_37)), l_622)))) != (-6L)) | g_374), 14)) == p_37) < g_233) == g_162), l_623)), p_37)), 6))) | p_37) != 1UL))) == 0xB32BL) , g_233) != p_37);
                    }
                    else
                    {
                        uint32_t l_624 = 4294967288UL;
                        p_37 |= l_624;
                        if (l_621)
                            goto lbl_737;
                    }
                }
                g_627--;
                p_37 = (((l_634 = (safe_mod_func_int32_t_s_s((p_37 == ((l_632 | (l_633 = g_238)) || p_37)), 0x454D9FA6L))) , (safe_lshift_func_uint16_t_u_s(((l_637 | 0x76L) != ((((l_538 | p_37) | p_37) && 0x98L) < p_37)), g_337))) != g_123);
                if ((g_371 >= ((safe_sub_func_uint32_t_u_u(((0L <= (((g_162 < l_460) != (l_538 = (((l_613 < g_626) > (~((safe_rshift_func_uint16_t_u_u(((l_643 >= (safe_add_func_uint32_t_u_u(((((safe_sub_func_uint8_t_u_u((l_625 = (g_114 && (((0xD6L | g_63) , p_37) != 0x44FCL))), l_648)) , 0xE602L) && g_293) >= g_162), 0xA76D8221L))) != g_398), p_37)) == l_613))) , l_625))) || p_37)) == 4294967295UL), p_37)) || g_374)))
                {
                    uint32_t l_658 = 0xF4B8EAC1L;
                    if (((g_114 = ((safe_mod_func_uint32_t_u_u(((0x19565B0BL ^ l_613) ^ 4294967292UL), ((-1L) && p_37))) , 0xF7C6L)) ^ (((g_183 = 1UL) != ((l_651 = p_37) , (l_625 = (safe_sub_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u(l_538, l_658)), g_121)), 246UL))))) & 1L)))
                    {
                        int32_t l_671 = 0xB23FD4F3L;
                        int32_t l_698 = 0xFDA103C6L;
                        int32_t l_705 = (-3L);
                        g_393 = (safe_rshift_func_int8_t_s_u((safe_mod_func_uint16_t_u_u((g_238 = (safe_add_func_uint8_t_u_u(((!l_666) || ((safe_mod_func_int32_t_s_s((((g_626 = ((l_658 != (safe_lshift_func_int8_t_s_u(l_671, 2))) != (((((safe_mod_func_uint8_t_u_u(((safe_mod_func_uint8_t_u_u((g_14 , (((~((!(safe_add_func_uint32_t_u_u((g_125 = (((safe_mod_func_uint8_t_u_u(((((l_684 >= (0xA7EAL != l_658)) > (6L <= ((~l_539) < p_37))) > 255UL) , l_671), l_366)) , p_37) <= l_632)), 0xC60F63CCL))) < 0xB8L)) && 0x42L) != l_632)), p_37)) >= g_123), l_537)) == g_397) >= g_232) , p_37) , 1L))) < (-8L)) , g_397), p_37)) , 0x719EL)), p_37))), p_37)), g_183));
                        g_115 = l_658;
                        l_705 ^= (safe_add_func_uint32_t_u_u((safe_add_func_uint8_t_u_u((p_37 >= (safe_add_func_uint32_t_u_u((((~(p_37 <= (safe_mod_func_uint32_t_u_u(((g_14 | (safe_rshift_func_uint16_t_u_u(((0x4BL ^ (+(p_37 < ((l_698 |= g_114) > l_666)))) || (l_625 = (safe_lshift_func_int8_t_s_s((l_703 |= (((safe_div_func_uint32_t_u_u((g_337 && 0xAF42L), l_520)) || 0xA08369C1L) , 0x75L)), 6)))), p_37))) & l_704), 0x571E8849L)))) <= p_37) <= g_232), p_37))), 0xA5L)), g_238));
                    }
                    else
                    {
                        l_551 = (-9L);
                    }
                    if (l_538)
                        goto lbl_737;
                }
                else
                {
                    int8_t l_710 = 8L;
                    int32_t l_735 = 0x6938A6EFL;
                    l_710 ^= (safe_div_func_uint8_t_u_u(8UL, (safe_lshift_func_uint16_t_u_u(g_123, 6))));
                    for (l_710 = (-25); (l_710 <= 23); l_710 = safe_add_func_int16_t_s_s(l_710, 2))
                    {
                        uint16_t l_733 = 0xA885L;
                        int32_t l_734 = 0L;
                        l_735 = (safe_add_func_int8_t_s_s(((safe_add_func_uint16_t_u_u((l_734 = (safe_div_func_int8_t_s_s(((safe_sub_func_int16_t_s_s(g_87, (p_37 > ((((g_626 != ((l_502 = (((((((1UL <= (safe_lshift_func_uint16_t_u_u(((safe_mod_func_int8_t_s_s(5L, p_37)) , (g_183--)), p_37))) < (safe_rshift_func_uint16_t_u_s((l_551 = (safe_rshift_func_uint8_t_u_u((p_37 > ((safe_lshift_func_int8_t_s_s(((((g_626 & g_125) , l_733) != l_625) & l_503), g_398)) > p_37)), l_520))), 12))) >= g_121) && 0xE3D26074L) | g_293) & g_397) | g_87)) >= 0UL)) == p_37) & g_337) != g_233)))) , 1L), g_374))), g_374)) >= l_634), g_397));
                    }
                    g_115 = (l_736 = g_626);
                }
            }
            if (l_501)
                goto lbl_464;
            --g_738;
        }
    }
    else
    {
        int16_t l_741 = 0L;
        int32_t l_742 = 0L;
        int32_t l_743 = 0x036A0335L;
        int32_t l_744 = 0L;
        int32_t l_748 = 7L;
        int32_t l_749 = 0x24AF6CA7L;
        int32_t l_750 = (-8L);
        int32_t l_751 = (-1L);
        int32_t l_752 = 0L;
        l_745++;
        --g_754;
        return g_754;
    }
    return l_539;
}
inline static uint16_t func_40(int16_t p_41, const int16_t p_42, uint32_t p_43, uint16_t p_44)
{
    const int32_t l_300 = (-10L);
    int32_t l_335 = 0x431C94D6L;
    int32_t l_336 = 0x87565C97L;
    int32_t l_338 = 0x57F93D7CL;
    l_338 = (g_337 ^= (safe_add_func_int8_t_s_s((l_300 , (safe_mod_func_uint16_t_u_u((safe_div_func_int16_t_s_s(g_162, (safe_div_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_s((7UL || ((safe_lshift_func_int16_t_s_s((g_114 = ((safe_mod_func_int8_t_s_s((((((+(safe_add_func_int16_t_s_s(g_63, (((safe_rshift_func_int16_t_s_u(((((safe_sub_func_int32_t_s_s((safe_add_func_int32_t_s_s((l_300 > (safe_lshift_func_uint16_t_u_u(((g_232 = ((safe_lshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_u((((safe_lshift_func_int8_t_s_s((safe_unary_minus_func_uint8_t_u(((safe_rshift_func_int16_t_s_u(p_43, 15)) <= p_42))), (l_335 |= p_44))) && (g_238 <= l_300)) || p_42), 4)), 5)) || p_43)) == p_41), 4))), l_336)), l_300)) < g_238) >= l_336) != 1L), g_176)) != 0x7DAFABD6L) || 0x8A21L)))) | p_41) > l_336) , 4294967288UL) ^ p_43), g_14)) == g_293)), g_293)) , g_115)), 3)), 2)), g_63)))), 65535UL))), 0xCDL)));
    return p_42;
}
inline static const uint8_t func_58(uint32_t p_59, uint32_t p_60, uint8_t p_61, int16_t p_62)
{
    uint32_t l_65 = 0xA6696B49L;
    uint16_t l_76 = 0UL;
    int32_t l_90 = 1L;
    int32_t l_91 = 2L;
    int32_t l_173 = 0x3A6B8F9AL;
    int32_t l_174 = (-5L);
    int32_t l_175 = (-5L);
    int32_t l_180 = 0L;
    int32_t l_181 = 0x0D59BCE1L;
    uint8_t l_210 = 7UL;
    int8_t l_230 = (-10L);
    int8_t l_256 = 0xE1L;
    uint32_t l_257 = 18446744073709551606UL;
    uint32_t l_294 = 18446744073709551606UL;
    if ((l_65 <= (safe_add_func_uint32_t_u_u(func_68(((func_72(l_76, l_76, (safe_div_func_int32_t_s_s(((((((((safe_add_func_int32_t_s_s(0x7E08A84AL, ((safe_add_func_uint32_t_u_u((4294967295UL ^ (safe_div_func_int8_t_s_s((safe_add_func_uint8_t_u_u(((p_62 |= (((g_87 = g_63) == (safe_add_func_uint32_t_u_u(l_76, (-1L)))) && (l_90 = 0L))) == p_59), 0x35L)), l_65))), l_76)) & (-1L)))) & p_60) >= l_91) , p_62) | (-1L)) < p_59) < g_63) , l_76), g_14))) == g_14) & g_123), g_114, g_121), 0x784999CAL))))
    {
        const int8_t l_167 = (-1L);
        return l_167;
    }
    else
    {
        int32_t l_168 = 1L;
        int32_t l_169 = 0x8AE1307CL;
        int32_t l_170 = 0x1F08C6B9L;
        int32_t l_171 = (-1L);
        int32_t l_172 = 0L;
        int32_t l_177 = 1L;
        int32_t l_178 = 0x57B7439DL;
        int32_t l_179 = (-8L);
        int32_t l_182 = 0x5208590EL;
        g_183++;
        l_168 &= (safe_rshift_func_int16_t_s_u(((p_62 && l_180) | l_182), ((safe_mul_func_int16_t_s_s(l_169, ((l_170 < (safe_add_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint16_t_u_u((((safe_rshift_func_int16_t_s_u(((~g_115) ^ ((((((+((safe_sub_func_int16_t_s_s(7L, (safe_lshift_func_uint16_t_u_u(((((safe_mod_func_uint8_t_u_u(l_177, (((((safe_div_func_int16_t_s_s((g_123 , p_60), 1L)) >= (-1L)) && p_61) , 0x821A72EEL) , l_210))) > l_182) , l_174) == p_59), l_175)))) | 1UL)) > g_128) , g_162) ^ 0UL) , g_125) , l_179)), p_59)) ^ g_176) >= 0L), 4)), p_59)), p_59)), g_63))) == l_90))) == g_176)));
        for (g_123 = 0; (g_123 != 20); g_123 = safe_add_func_int16_t_s_s(g_123, 4))
        {
            uint32_t l_229 = 0x2D32AF4CL;
            int32_t l_236 = 0L;
            int32_t l_237 = 0x2D788D99L;
            for (l_179 = 16; (l_179 <= (-6)); l_179 = safe_sub_func_uint32_t_u_u(l_179, 9))
            {
                uint16_t l_228 = 65532UL;
                int32_t l_231 = (-1L);
                int32_t l_234 = 0xEF2C4904L;
                g_115 = 0x3A6EC57CL;
                l_234 = (p_61 & ((((l_174 && (safe_unary_minus_func_uint16_t_u((g_233 |= (0xFD88L < ((safe_lshift_func_int16_t_s_s(((p_62 , ((((((p_60 != (safe_lshift_func_uint8_t_u_s(0UL, l_179))) || (((((1L && (((safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(((l_230 |= ((safe_div_func_int16_t_s_s(((((safe_sub_func_int8_t_s_s((l_168 = (((l_91 < g_125) > p_59) == g_183)), 0UL)) != l_228) <= l_229) == l_228), l_91)) || 0xEF4FL)) || g_115), p_59)), g_183)) || 3UL) < (-3L))) , l_231) > p_60) ^ g_232) && 5L)) >= g_162) , 0xA486L) || p_59) , 0xA0L)) | 0x4FL), g_114)) , l_170)))))) , g_87) > 0L) < l_90));
                g_115 = ((l_229 & (g_123 && l_231)) != (safe_unary_minus_func_uint16_t_u(l_229)));
            }
            g_115 = 0L;
            ++g_238;
        }
        l_173 = p_62;
    }
    l_90 &= (safe_unary_minus_func_uint16_t_u((((l_175 = ((g_115 &= (-5L)) != ((g_123 , (safe_add_func_uint8_t_u_u(((p_61 > g_123) || (safe_lshift_func_int8_t_s_u(l_180, p_61))), (((safe_mod_func_uint8_t_u_u((safe_div_func_int16_t_s_s(((g_176 = (p_59 > (safe_sub_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((l_210 , (safe_rshift_func_int8_t_s_s(((l_173 , 0xB7C7E5BDL) , l_65), l_175))), p_62)), p_59)))) > 0xFBL), g_183)), l_256)) | l_174) || g_162)))) == l_257))) == l_174) ^ 0xBA6CL)));
    for (g_232 = 0; (g_232 != (-19)); --g_232)
    {
        uint32_t l_264 = 0xAFF72D6AL;
        int32_t l_267 = 0x4C7829F0L;
        int32_t l_280 = 0x5F34AE07L;
        g_115 = p_59;
        l_174 = ((g_115 == (safe_rshift_func_uint16_t_u_u(g_14, 2))) == (((safe_lshift_func_int8_t_s_u(0x6CL, l_264)) <= g_238) & ((safe_sub_func_uint8_t_u_u((--p_61), (g_162++))) || ((safe_mod_func_int16_t_s_s((((((l_267 = (safe_lshift_func_int16_t_s_u(l_264, 3))) != (p_59 , (safe_sub_func_int32_t_s_s(((l_280 = ((safe_mod_func_int8_t_s_s((((-3L) ^ g_128) && g_115), l_175)) , l_264)) >= 0x2FL), 0L)))) , 0xDCF2L) != g_125) >= p_61), p_59)) & 3L))));
        if (g_128)
            continue;
        g_293 &= ((safe_add_func_uint32_t_u_u(g_162, ((l_267 ^ (safe_div_func_uint8_t_u_u((p_59 & (((safe_div_func_uint32_t_u_u(((safe_mod_func_uint8_t_u_u((0x61L > ((safe_unary_minus_func_uint16_t_u(l_267)) && ((~(safe_mod_func_int32_t_s_s(1L, p_60))) & (g_115 , ((l_174 = (p_61 <= p_61)) , g_233))))), l_280)) == 0x2DL), 1L)) || 4294967290UL) , l_280)), l_76))) < 0xFAL))) , p_61);
    }
    l_294--;
    return l_257;
}
static uint32_t func_68(uint8_t p_69, const uint8_t p_70, int32_t p_71)
{
    uint32_t l_165 = 0xFE8A4A7EL;
    int32_t l_166 = 0xBF453DDAL;
    l_166 = (safe_rshift_func_int8_t_s_s(l_165, p_70));
    return p_70;
}
inline static const int16_t func_72(uint8_t p_73, const uint32_t p_74, uint8_t p_75)
{
    uint32_t l_105 = 0x20EAC2F6L;
    int32_t l_107 = 0x2ED8564FL;
    int32_t l_108 = 0x7357609EL;
    int32_t l_112 = 0x082E2804L;
    int32_t l_113 = 0x739A15FBL;
    int32_t l_116 = 0x3350B76AL;
    int32_t l_118 = 0x825D0D30L;
    int32_t l_119 = 0x13439BF9L;
    int32_t l_120 = 2L;
    int32_t l_122 = 0xED54F57EL;
    int32_t l_124 = 0x1110172CL;
    int16_t l_149 = (-1L);
    for (p_73 = 0; (p_73 <= 20); p_73++)
    {
        int16_t l_106 = 1L;
        int32_t l_109 = 0x7B8CEE11L;
        int32_t l_110 = 0xE41AB876L;
        int32_t l_111 = 0x9D9BB22BL;
        int32_t l_117 = 1L;
        l_107 |= (((safe_rshift_func_uint8_t_u_u(0UL, (((g_63 && ((((safe_unary_minus_func_uint32_t_u(((g_14 == (g_63 = ((((safe_add_func_uint8_t_u_u(p_75, (safe_mod_func_int16_t_s_s((p_75 && g_63), ((((safe_add_func_int8_t_s_s((0x2A3D91D6L & 1L), ((((safe_lshift_func_uint16_t_u_s(65527UL, 11)) <= 5UL) >= 0L) || 0xF6DEL))) > g_63) != g_14) & l_105))))) | g_87) | (-1L)) && 0xCFL))) & p_74))) != 6UL) , l_105) , p_75)) | 0L) , p_74))) != l_106) ^ g_87);
        g_125--;
    }
    l_112 = l_119;
    g_128--;
    g_115 ^= (((((((g_14 | (p_73 | (safe_sub_func_uint16_t_u_u((((l_116 , (safe_mod_func_uint32_t_u_u((((safe_div_func_int32_t_s_s((safe_lshift_func_int8_t_s_s((safe_div_func_int32_t_s_s((((safe_sub_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(((safe_rshift_func_uint16_t_u_u(p_74, (safe_mod_func_uint16_t_u_u(p_73, (l_149 , (p_73 && (l_124 = ((((safe_rshift_func_uint8_t_u_s((~(((safe_div_func_uint8_t_u_u(((g_162 = ((l_112 ^ (safe_lshift_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u(((safe_mod_func_uint32_t_u_u(((safe_unary_minus_func_int16_t_s(((((g_87 = l_149) , g_114) == 2L) | 1UL))) , 0x49878E73L), p_73)) && g_14), p_74)), 7))) && 0x2CL)) > g_114), (-3L))) == 0x75DB7620L) && g_121)), 6)) > p_74) || 0x23A3813EL) && 1L)))))))) != g_121), p_74)), 0x11D5L)) & l_119) == (-2L)), 0x077EAAE7L)), 7)), l_118)) || l_118) && l_119), p_74))) ^ g_123) ^ p_75), 0xB29FL)))) && p_73) || p_73) != 0xAAL) >= l_119) != 0x98C0L) < g_121);
    return p_73;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_14;
    csmith_sink_ = g_63;
    csmith_sink_ = g_87;
    csmith_sink_ = g_114;
    csmith_sink_ = g_115;
    csmith_sink_ = g_121;
    csmith_sink_ = g_123;
    csmith_sink_ = g_125;
    csmith_sink_ = g_128;
    csmith_sink_ = g_162;
    csmith_sink_ = g_176;
    csmith_sink_ = g_183;
    csmith_sink_ = g_232;
    csmith_sink_ = g_233;
    csmith_sink_ = g_238;
    csmith_sink_ = g_293;
    csmith_sink_ = g_337;
    csmith_sink_ = g_371;
    csmith_sink_ = g_374;
    csmith_sink_ = g_393;
    csmith_sink_ = g_397;
    csmith_sink_ = g_398;
    csmith_sink_ = g_626;
    csmith_sink_ = g_627;
    csmith_sink_ = g_738;
    csmith_sink_ = g_753;
    csmith_sink_ = g_754;
    csmith_sink_ = g_893;
    csmith_sink_ = g_989;
    csmith_sink_ = g_999;
    csmith_sink_ = g_1000;
    csmith_sink_ = g_1002;
    csmith_sink_ = g_1018;
    platform_main_end(0,0);
    return 0;
}
