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
static int32_t g_23 = 0x4B0B4EF6;
static int32_t g_57 = 0xB137D370;
static int32_t *g_56 = &g_57;
static int32_t ***g_219 = (void*)0;
static uint8_t g_285 = 0x4D;
static int32_t g_359 = (-5);
static const int16_t g_489 = 0xC50F;
static int32_t ****g_496 = &g_219;
static int32_t *****g_495 = &g_496;
static int32_t g_638 = 0x6895669C;
static int32_t **g_652 = &g_56;
static int32_t ***g_656 = &g_652;
static int32_t g_698 = 0;
static int32_t g_721 = 0;
static uint8_t func_1(void);
inline static uint16_t func_2(uint32_t p_3);
static int16_t func_8(uint32_t p_9);
static uint32_t func_10(uint16_t p_11, uint32_t p_12, int32_t p_13, int8_t p_14, uint32_t p_15);
inline static int32_t func_16(uint16_t p_17, uint16_t p_18, int32_t p_19, uint8_t p_20);
static const int32_t func_24(uint16_t p_25, int8_t p_26);
static int32_t func_28(int32_t p_29, int16_t p_30, uint8_t p_31);
static int32_t * func_42(int16_t p_43, int32_t p_44, uint16_t p_45, int32_t p_46, int32_t * p_47);
static int16_t func_48(int32_t p_49, int32_t p_50);
static int32_t func_51(int32_t * p_52, int16_t p_53, int32_t * p_54, int32_t * p_55);
static uint8_t func_1(void)
{
    int32_t l_4 = 1;
    uint16_t l_696 = 3U;
    const int32_t *l_697 = &g_698;
    int32_t * const l_699 = &g_698;
    uint8_t l_716 = 0x48;
    uint16_t l_736 = 0xF400;
    int32_t l_737 = 0;
    uint8_t l_770 = 255U;
    const uint8_t l_771 = 0x22;
    (*l_699) = ((func_2(l_4) <= (l_4 == g_489)) > ((safe_sub_func_int32_t_s_s((((~l_4) < (((l_4 > (((safe_lshift_func_int8_t_s_s((((safe_add_func_int8_t_s_s(((((safe_lshift_func_int16_t_s_u(((safe_mod_func_uint32_t_u_u((g_489 || (safe_add_func_int16_t_s_s(0x5A92, ((0x7761 < g_638) == 4)))), 0x25F05322)) , g_638), g_285)) , l_4) >= g_285) != g_489), (-9))) >= l_4) == g_285), l_4)) && 65534U) & l_696)) , l_697) == l_699)) == g_285), 1)) || g_698));
    for (g_359 = 27; (g_359 > 8); g_359 = safe_sub_func_uint16_t_u_u(g_359, 3))
    {
        int32_t *l_703 = (void*)0;
        int32_t l_704 = 1;
        int32_t ****l_717 = &g_656;
        int32_t l_720 = 1;
        uint32_t l_735 = 0x9527B9E8;
        int8_t l_745 = 0x67;
        int32_t ****l_752 = &g_219;
        l_703 = (((*l_697) < (!(*l_697))) , l_703);
        if (l_704)
            break;
        if (((*l_699) , (safe_add_func_uint16_t_u_u((*l_697), ((safe_add_func_int8_t_s_s(g_359, ((safe_mod_func_uint32_t_u_u(0xC4B697E6, (safe_rshift_func_uint8_t_u_s(((~((safe_sub_func_int32_t_s_s(((((l_716 < (l_717 != (*g_495))) ^ g_23) | (safe_lshift_func_uint8_t_u_s(0x82, g_285))) == 1U), (*l_699))) ^ 0x78)) < l_720), 2)))) >= g_721))) ^ g_285)))))
        {
            uint32_t l_730 = 4294967295U;
            int32_t ** const * const l_734 = &g_652;
            (*l_699) = (((safe_mod_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((g_721 , (((g_359 , (g_489 , (safe_rshift_func_int16_t_s_u(((g_698 & l_730) || (((safe_sub_func_int8_t_s_s((((((+(((*l_699) != ((((1 ^ (l_734 == (*g_496))) > g_721) , 252U) , g_698)) ^ l_704)) , 0U) , l_730) , 0xE1) || l_735), 0x76)) > (*l_697)) <= l_736)), 1)))) >= l_737) & 0xEAAB5C72)), 1)), 2)), 0xF246976A)) && g_721) && (*l_699));
            (***l_717) = (void*)0;
            for (l_4 = 0; (l_4 >= 5); l_4 = safe_add_func_int16_t_s_s(l_4, 9))
            {
                int8_t l_742 = 0x1F;
                for (g_698 = (-22); (g_698 < 5); ++g_698)
                {
                    return g_698;
                }
                g_57 = (l_742 <= ((void*)0 != (*g_495)));
            }
        }
        else
        {
            int32_t *l_768 = &l_737;
            int8_t l_769 = 1;
            (***l_717) = &l_737;
            if ((safe_mod_func_int16_t_s_s(l_745, (safe_add_func_int16_t_s_s(((safe_sub_func_int32_t_s_s(((safe_add_func_uint16_t_u_u(0xCD05, ((((****l_717) , (l_752 == (*g_495))) > (safe_sub_func_int32_t_s_s(((safe_rshift_func_uint8_t_u_s((((((safe_add_func_uint8_t_u_u((safe_add_func_int32_t_s_s((0xC74C && (((~(0xBA56 & (safe_rshift_func_int16_t_s_u(g_698, ((safe_rshift_func_uint16_t_u_s((((safe_mod_func_uint8_t_u_u((((((l_768 != (void*)0) >= l_769) , (-9)) || 0x40) <= g_698), g_57)) ^ 0x38BA) == g_698), 7)) , (*l_699)))))) >= g_698) || g_285)), 0x34EBA772)), g_489)) , (**l_717)) == &l_768) != l_770) , (*l_699)), g_698)) >= (****l_717)), 1U))) <= 252U))) && (****l_717)), 4294967295U)) <= (-8)), (*l_699))))))
            {
                (*g_495) = (void*)0;
                return g_57;
            }
            else
            {
                (*l_699) = (-10);
            }
            (**g_495) = (*l_717);
        }
        (*l_699) = (l_771 < (safe_mod_func_uint8_t_u_u((0xBDBE7A03 ^ (safe_rshift_func_int8_t_s_u((((+((safe_mod_func_int32_t_s_s(((g_359 | ((safe_rshift_func_uint16_t_u_s(0x76C1, (&l_697 != (((((safe_lshift_func_int16_t_s_s(((*l_697) , (safe_unary_minus_func_uint32_t_u((((*l_699) , ((safe_mod_func_uint32_t_u_u(((safe_rshift_func_int16_t_s_s((-1), 8)) , (g_638 & 8)), 1)) , (void*)0)) != &g_496)))), g_359)) , 0) || 0) == g_57) , (*g_656))))) > g_489)) == g_23), 0x0BB32C38)) , 1)) , g_285) && g_721), 6))), 0xB1)));
    }
    return g_359;
}
inline static uint16_t func_2(uint32_t p_3)
{
    uint32_t l_5 = 0U;
    int32_t l_565 = (-10);
    int32_t l_615 = (-1);
    int16_t l_651 = (-7);
    l_565 = (l_5 | (safe_sub_func_uint16_t_u_u(l_5, (((func_8(func_10(l_5, p_3, func_16(p_3, (safe_lshift_func_int8_t_s_s(g_23, 3)), (func_24((((~func_28((safe_lshift_func_uint8_t_u_s(p_3, (safe_lshift_func_uint16_t_u_s((p_3 , (safe_mod_func_int8_t_s_s(((((safe_mod_func_int32_t_s_s(0xDF8E3BF1, p_3)) > p_3) != l_5) == 0x4779D44F), p_3))), g_23)))), g_23, p_3)) | l_5) , g_359), l_565) , l_565), l_615), l_651, l_565)) == g_638) <= g_285) , 0x2B4E))));
    (**g_656) = &l_565;
    return p_3;
}
static int16_t func_8(uint32_t p_9)
{
    int8_t l_655 = 0xFF;
    int32_t ***l_657 = &g_652;
    int8_t l_666 = 5;
    int32_t l_667 = 0xAA728D90;
    int32_t *****l_672 = &g_496;
    uint32_t l_680 = 0U;
    uint32_t l_681 = 4294967295U;
    int32_t l_682 = 5;
    l_667 = (((p_9 == p_9) ^ ((l_655 > (g_656 != l_657)) <= (safe_add_func_int8_t_s_s((((safe_rshift_func_uint8_t_u_s(l_655, (p_9 , ((0x5BCF2F64 < (safe_rshift_func_int8_t_s_u((safe_mod_func_int32_t_s_s(p_9, 0xACDB5E24)), 2))) ^ 0x44)))) & p_9) ^ p_9), p_9)))) , l_666);
    l_667 = p_9;
    l_682 = (safe_mod_func_uint16_t_u_u((((safe_rshift_func_int16_t_s_u((l_672 == l_672), (safe_add_func_uint8_t_u_u((g_285 != (((((safe_mod_func_int32_t_s_s((p_9 < (0xCA8EC19B >= (((((((!(g_489 | (safe_rshift_func_uint8_t_u_s(0x4A, 5)))) != ((l_672 != &g_496) == p_9)) > l_680) >= p_9) >= p_9) , p_9) >= p_9))), 7)) & (-7)) , g_23) | p_9) >= l_666)), p_9)))) ^ g_23) > l_681), g_489));
    return p_9;
}
static uint32_t func_10(uint16_t p_11, uint32_t p_12, int32_t p_13, int8_t p_14, uint32_t p_15)
{
    int32_t **l_653 = (void*)0;
    int32_t *****l_654 = &g_496;
    l_653 = g_652;
    l_654 = &g_496;
    return g_359;
}
inline static int32_t func_16(uint16_t p_17, uint16_t p_18, int32_t p_19, uint8_t p_20)
{
    int8_t l_626 = 0x58;
    int32_t **l_634 = &g_56;
    int32_t l_648 = 0;
    int32_t ** const **l_650 = (void*)0;
    int32_t ** const ***l_649 = &l_650;
    for (p_18 = (-8); (p_18 != 35); ++p_18)
    {
        int8_t l_631 = 0x87;
        int32_t l_635 = 0x16A3E06B;
        int32_t *****l_636 = &g_496;
        int32_t l_637 = 0x5FFDEF3D;
        int32_t *l_644 = (void*)0;
        uint32_t l_645 = 4294967295U;
        for (g_23 = 15; (g_23 <= 16); g_23 = safe_add_func_int32_t_s_s(g_23, 5))
        {
            int32_t l_632 = 1;
            int32_t *l_639 = &l_635;
            l_635 = (safe_add_func_int32_t_s_s((safe_lshift_func_int8_t_s_s(((safe_add_func_int8_t_s_s(l_626, p_19)) > ((safe_mod_func_int8_t_s_s(p_17, (safe_mod_func_int32_t_s_s(l_631, p_18)))) & (l_632 && (!((void*)0 == l_634))))), 7)), ((g_359 > p_20) | p_19)));
            l_639 = func_42(l_632, (((&g_496 == (void*)0) >= (0xCA >= (((((void*)0 == l_636) == g_23) , l_634) != ((((((1 & l_637) && l_626) && p_20) <= 1) >= g_638) , (void*)0)))) | l_632), g_23, p_19, &l_632);
        }
        g_359 = (safe_rshift_func_uint8_t_u_u(p_19, (((g_489 == (safe_sub_func_uint16_t_u_u((p_17 > g_489), 0x9736))) , (**l_636)) == (void*)0)));
        if (l_645)
            break;
    }
    for (l_626 = (-4); (l_626 != 26); l_626 = safe_add_func_uint16_t_u_u(l_626, 6))
    {
        return g_489;
    }
    l_648 = p_17;
    (*l_634) = (*l_634);
    return p_20;
}
static const int32_t func_24(uint16_t p_25, int8_t p_26)
{
    uint32_t l_566 = 4294967292U;
    const int32_t *l_567 = (void*)0;
    int32_t ** const **l_570 = (void*)0;
    int32_t *l_571 = &g_57;
    int32_t *****l_574 = &g_496;
    int32_t l_583 = 0x2A0C3088;
    int32_t *l_586 = (void*)0;
    int8_t l_600 = (-1);
    uint32_t l_607 = 9U;
    uint32_t l_613 = 0xAFF12191;
    (*l_571) = ((l_566 || ((l_567 == l_567) , (0x8EA86473 > (((safe_sub_func_uint16_t_u_u(((l_570 == (g_359 , (*g_495))) , p_25), g_23)) <= p_26) && g_285)))) >= (-1));
    for (g_359 = (-25); (g_359 <= (-14)); g_359 = safe_add_func_uint32_t_u_u(g_359, 1))
    {
        l_574 = (void*)0;
    }
    for (p_26 = 0; (p_26 < (-20)); p_26--)
    {
        const int32_t **l_585 = &l_567;
        const int32_t ***l_584 = &l_585;
        (*l_585) = (*l_585);
    }
    for (p_26 = 0; (p_26 != (-18)); --p_26)
    {
        uint32_t l_597 = 0x3DA4405A;
        if ((safe_add_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_s(0xD8, 7)) , 0xC8A0), (safe_rshift_func_uint8_t_u_s((g_57 != (p_26 != (((safe_lshift_func_int16_t_s_u(((2 ^ (l_597 | g_359)) >= ((((-5) <= ((safe_rshift_func_int8_t_s_s(p_26, 6)) > l_597)) & g_23) > p_26)), p_25)) == p_25) , l_600))), 2)))))
        {
            int32_t *l_603 = &g_359;
            for (l_583 = 0; (l_583 >= 22); ++l_583)
            {
                int32_t *l_604 = &g_359;
                l_604 = l_603;
            }
        }
        else
        {
            uint32_t l_612 = 8U;
            int32_t *l_614 = &g_359;
            l_614 = func_42(((((p_26 && (g_285 && (((((safe_sub_func_int32_t_s_s(l_597, p_26)) > (((p_25 && (l_607 , ((g_23 || (((safe_sub_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(l_612, 0)), (l_612 , p_26))) & 4294967293U) >= p_25)) < 0xD4BBE3C3))) | l_613) > 0xB3)) & p_26) >= l_612) ^ 255U))) && 0x715E0B20) , 0U) <= p_25), p_25, g_359, l_597, l_614);
            l_614 = l_614;
        }
    }
    return p_25;
}
static int32_t func_28(int32_t p_29, int16_t p_30, uint8_t p_31)
{
    int32_t * const *l_368 = &g_56;
    int32_t * const * const *l_367 = &l_368;
    int32_t * const * const **l_366 = &l_367;
    int16_t l_371 = 0x21EE;
    uint32_t l_377 = 0x60C5AEF0;
    uint8_t l_452 = 0x34;
    int32_t *l_453 = &g_359;
    int32_t l_460 = 0x7DB43E41;
    uint32_t l_469 = 0x63802CE8;
    int32_t l_504 = 0;
    uint32_t l_509 = 0U;
    uint32_t l_530 = 0x46A76162;
    int32_t *l_548 = (void*)0;
    int32_t **l_549 = &g_56;
    int32_t **l_550 = &l_548;
    int32_t l_560 = 0xCC87DAEB;
    if (p_30)
    {
        int32_t l_79 = 0x5AB95DFE;
        const uint32_t l_80 = 0x73C04290;
        int32_t *l_358 = &g_359;
        int32_t **l_382 = (void*)0;
        int32_t **l_383 = &l_358;
        uint32_t l_404 = 0x8A8C29DD;
        int32_t *l_407 = &g_57;
        const int32_t **l_418 = (void*)0;
        const int32_t ***l_417 = &l_418;
        const int32_t ****l_416 = &l_417;
        const int16_t l_451 = (-1);
        for (p_29 = 14; (p_29 != 14); p_29 = safe_add_func_int8_t_s_s(p_29, 4))
        {
            int8_t l_58 = 0;
            int32_t **l_362 = (void*)0;
            int32_t **l_363 = &l_358;
            const int8_t l_370 = (-1);
        }
        (*l_383) = (*l_368);
        for (g_57 = 0; (g_57 >= (-26)); --g_57)
        {
            int32_t *l_406 = (void*)0;
            int32_t l_428 = 1;
            uint32_t l_438 = 4294967286U;
            if (((void*)0 != &l_358))
            {
                int8_t l_405 = 1;
                const int32_t ****l_419 = &l_417;
                int32_t l_429 = 7;
                (*l_383) = l_407;
                l_429 = (safe_add_func_uint8_t_u_u(1U, ((safe_unary_minus_func_uint8_t_u((g_359 , ((g_57 , ((g_285 , (safe_add_func_uint16_t_u_u((p_31 < (((((+((safe_sub_func_int8_t_s_s((l_416 != l_419), (safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s((safe_mul_func_int8_t_s_s(g_285, (((safe_rshift_func_int16_t_s_u(0x32F5, g_359)) < p_29) < g_23))), 2)), g_285)))) > 0xFA)) | 0U) && l_428) , 5U) && 0xE1)), 0xB34E))) & (**l_383))) > (-1))))) >= g_359)));
                l_429 = ((((safe_add_func_int8_t_s_s(((safe_add_func_int8_t_s_s((*l_407), g_285)) >= (safe_sub_func_uint16_t_u_u(((**l_368) == (!(!l_438))), (((*g_56) , (safe_sub_func_uint8_t_u_u((((((g_285 && (g_57 > l_438)) , (((p_30 <= p_30) | p_29) & 3)) & (*g_56)) < 0U) > 4294967295U), 0x34))) , p_31)))), p_31)) && 0x36692C0D) && g_285) < g_359);
            }
            else
            {
                uint32_t l_447 = 0U;
                int32_t *l_456 = (void*)0;
                int32_t *l_457 = &g_359;
                l_453 = (*l_383);
                (*l_457) = (safe_rshift_func_uint16_t_u_u(1U, 6));
                if (p_30)
                    break;
            }
        }
    }
    else
    {
        const uint8_t l_461 = 1U;
        int32_t **l_462 = &l_453;
        uint8_t l_477 = 0U;
        int16_t l_478 = 1;
        int32_t ****l_481 = &g_219;
        int32_t ***** const l_480 = &l_481;
        uint16_t l_503 = 0x2A60;
        uint32_t l_510 = 4294967294U;
        (***l_367) = ((safe_rshift_func_int8_t_s_s(((((l_460 <= g_285) ^ (l_461 | ((***l_366) != (***l_366)))) , l_462) != (void*)0), 7)) | ((((p_29 , (*l_462)) == &g_57) == 0x0DF232AE) ^ 5));
        if ((safe_sub_func_uint32_t_u_u(p_29, ((safe_mod_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(((l_469 && (safe_rshift_func_int16_t_s_s(((safe_mod_func_int16_t_s_s((-1), (*l_453))) & (((safe_mod_func_uint32_t_u_u(4294967295U, (((((p_30 <= (((!0U) == g_359) > (l_477 & g_285))) , p_30) ^ (-10)) ^ (**l_462)) | (**l_462)))) , (**l_462)) ^ 1U)), g_285))) >= 255U), g_23)), (*l_453))) & l_478))))
        {
            int32_t * const **l_479 = &l_368;
            (*l_479) = (**l_366);
            (***l_367) = (p_31 >= (l_480 != &l_366));
            (**l_462) = ((p_30 ^ (((safe_sub_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s(g_23, 6)), 1U)) && ((((l_479 == g_219) , (*l_366)) == (void*)0) & ((+(safe_rshift_func_int16_t_s_s((((void*)0 == (**l_367)) < (***l_479)), (*l_453)))) , g_489))) && p_30)) , (*g_56));
            (**l_368) = 6;
        }
        else
        {
            int16_t l_494 = (-5);
            (*l_462) = func_42(g_23, p_31, (((&l_481 != (((safe_sub_func_int32_t_s_s((((safe_add_func_uint8_t_u_u((((g_57 >= (l_494 < ((g_495 == ((((safe_rshift_func_uint16_t_u_u((((safe_mod_func_int16_t_s_s(((((&l_367 != (void*)0) , (((safe_sub_func_uint32_t_u_u(((((p_31 , g_23) <= p_30) != l_503) ^ p_31), (**l_462))) < (-1)) && (**l_368))) , 0x2B) , (*l_453)), l_504)) >= g_285) == 0x32), 1)) || (**l_462)) > p_29) , (void*)0)) , (*l_453)))) , p_31) , 1U), p_29)) | (***l_367)) >= 0xB073), l_494)) >= (***l_367)) , (void*)0)) ^ g_359) < 0U), (*l_453), &l_504);
            (*l_453) = ((((void*)0 == &g_496) && ((*l_366) != (*l_366))) < ((0xA225 != ((safe_rshift_func_int16_t_s_s(0, 6)) && ((safe_sub_func_int32_t_s_s((l_509 == l_510), (((safe_mod_func_int32_t_s_s(((p_29 == 0x794DB26A) || g_285), p_31)) == l_494) != 4294967291U))) != 1U))) && g_23));
            (*l_480) = (*g_495);
            (*l_462) = func_42(g_57, ((((l_494 ^ (!(0x6C228723 < p_29))) , 0xD9A0) != (((safe_add_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(0x5E, (safe_add_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((safe_mod_func_int32_t_s_s((((((((safe_sub_func_int16_t_s_s((((safe_lshift_func_uint8_t_u_s(((safe_add_func_int8_t_s_s((((void*)0 != (*l_480)) || p_31), 0xEF)) >= 4294967293U), 2)) == p_29) <= (**l_462)), p_31)) && p_30) , (***l_367)) < p_29) | (**l_462)) & 250U) ^ p_29), l_494)), 6)), l_494)))), 253U)) | 1U) == l_530)) , 0xBCA81243), p_30, p_30, &g_57);
        }
    }
    (*l_549) = (*l_368);
    (*l_550) = (**l_367);
    (*l_549) = ((((safe_sub_func_uint32_t_u_u((((g_23 >= ((((safe_lshift_func_int16_t_s_s(((safe_sub_func_uint32_t_u_u(((safe_mod_func_int16_t_s_s(0, 0x52EB)) >= (((+0xD76F845B) , (*l_367)) == (**l_366))), ((-9) != l_560))) > ((safe_rshift_func_uint8_t_u_s((g_359 | 0U), (***l_367))) | g_57)), 3)) , 4294967287U) <= g_489) | g_57)) | (*g_56)) && 5), p_31)) > p_31) || (-8)) , (void*)0);
    return (**l_550);
}
static int32_t * func_42(int16_t p_43, int32_t p_44, uint16_t p_45, int32_t p_46, int32_t * p_47)
{
    int32_t **l_361 = &g_56;
    int32_t ***l_360 = &l_361;
    (*p_47) = ((void*)0 == l_360);
    return (**l_360);
}
static int16_t func_48(int32_t p_49, int32_t p_50)
{
    uint32_t l_301 = 0x229B2597;
    int32_t *l_309 = &g_57;
    int32_t *** const *l_317 = &g_219;
    int32_t *** const **l_316 = &l_317;
    if ((1U ^ 0x0D2587FE))
    {
        int32_t * const l_320 = &g_57;
        int32_t l_325 = (-1);
        int32_t **l_330 = &l_309;
        int32_t **l_352 = &l_309;
        if (((~0x8F8A4C05) , (((l_301 == (safe_add_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_u((safe_add_func_uint16_t_u_u(p_50, (safe_unary_minus_func_uint8_t_u(p_49)))), 7)) | l_301), (l_309 == &p_49)))) <= (safe_lshift_func_uint8_t_u_u(p_49, 5))) < 0)))
        {
            int32_t *** const **l_318 = &l_317;
            int32_t *l_319 = &g_57;
            int32_t *l_351 = &g_57;
            for (l_301 = (-18); (l_301 >= 40); l_301 = safe_add_func_uint8_t_u_u(l_301, 5))
            {
                int32_t ***l_346 = &l_330;
                int32_t ****l_347 = (void*)0;
                int32_t ****l_348 = &g_219;
                for (g_285 = 13; (g_285 >= 16); ++g_285)
                {
                    int8_t l_322 = (-1);
                    int16_t l_344 = 0x7228;
                    l_318 = l_316;
                    g_56 = l_319;
                    if ((*l_319))
                    {
                        int32_t **l_321 = &l_309;
                        int32_t * const *l_329 = &l_319;
                        (*l_321) = l_320;
                        if (l_322)
                            break;
                        p_49 = (safe_add_func_int32_t_s_s(((&p_49 != (*l_321)) >= l_325), (safe_mod_func_uint8_t_u_u(((!((((l_329 != &g_56) > (*l_320)) , l_330) == l_329)) | ((&l_320 != (void*)0) | (*l_319))), 1U))));
                    }
                    else
                    {
                        uint32_t l_331 = 0x36394302;
                        int32_t *l_345 = &g_57;
                        (*l_309) = l_331;
                        (*l_330) = &p_49;
                        (*l_320) = (((((((p_50 > p_50) || (g_57 ^ g_23)) , ((((((*g_56) , (safe_sub_func_uint8_t_u_u((p_49 > (safe_add_func_uint16_t_u_u((((safe_rshift_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(((((((safe_lshift_func_int8_t_s_u((safe_add_func_uint8_t_u_u(p_49, g_23)), 4)) != ((p_50 || 0x50EC) , p_49)) > l_322) ^ 0U) != g_57) | 0x65D4), g_57)), (*l_320))) <= p_49) != p_49), 3U))), p_50))) >= g_57) | g_23) > (*l_320)) & l_344)) >= g_57) <= (*l_320)) != p_50) == g_57);
                        (*l_330) = l_345;
                    }
                }
                (*l_348) = l_346;
            }
            for (g_285 = 0; (g_285 != 42); g_285++)
            {
                int32_t ***l_353 = &l_330;
                (*l_330) = l_351;
                (*l_330) = (*l_330);
                (*l_353) = l_352;
                p_49 = (*l_309);
            }
        }
        else
        {
            uint16_t l_354 = 4U;
            return l_354;
        }
        (*l_330) = (*l_352);
    }
    else
    {
        uint16_t l_357 = 0U;
        for (l_301 = 0; (l_301 <= 8); l_301 = safe_add_func_int8_t_s_s(l_301, 2))
        {
            return l_357;
        }
    }
    (*l_316) = (*l_316);
    return g_23;
}
static int32_t func_51(int32_t * p_52, int16_t p_53, int32_t * p_54, int32_t * p_55)
{
    uint32_t l_81 = 0x23FF4914;
    int32_t *l_94 = &g_57;
    const uint32_t l_151 = 0x55A7B5E4;
    int32_t *l_174 = &g_57;
    const int32_t *l_222 = &g_57;
    const int32_t **l_221 = &l_222;
    const int32_t *** const l_220 = &l_221;
    const int8_t l_296 = 3;
    (*g_56) = (*p_54);
    if (l_81)
    {
        int32_t **l_82 = &g_56;
        const int32_t l_155 = (-2);
        int32_t ** const *l_210 = &l_82;
        int32_t ** const **l_209 = &l_210;
        const int8_t l_223 = 0xBA;
        uint32_t l_267 = 0x2AC9BB6F;
        (*l_82) = p_55;
        if ((safe_rshift_func_int8_t_s_s(((*g_56) || (&g_57 != &g_57)), (0xCCC7 || ((((safe_sub_func_uint32_t_u_u(p_53, (((0x7EBAC3F4 < ((((~(safe_rshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((l_94 != ((safe_lshift_func_int8_t_s_s(((p_53 || p_53) & (-1)), g_23)) , l_94)), (-8))), p_53)), (*l_94)))) ^ g_23) < 0x3C1D2601) | 0x5D)) && (**l_82)) && p_53))) | 9U) && 65534U) < (*l_94))))))
        {
            const uint16_t l_101 = 0x1CF6;
            int32_t * const l_121 = (void*)0;
            uint32_t l_173 = 0x20038BE2;
            uint8_t l_180 = 0xD0;
            (*l_82) = (((0x90 != g_57) , (&g_57 != p_52)) , p_54);
            if ((*p_52))
            {
                const int8_t l_118 = (-1);
                (*l_82) = (void*)0;
                (*p_55) = (safe_add_func_int32_t_s_s(0x114ABDC4, (((safe_add_func_uint16_t_u_u((0xC9289037 ^ l_101), (((safe_mod_func_int16_t_s_s((-1), (safe_lshift_func_uint8_t_u_s((((safe_lshift_func_uint16_t_u_u(((*l_94) && (safe_add_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_s(((0xBC21 != ((safe_mod_func_uint16_t_u_u((safe_add_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(p_53, (&g_56 != (void*)0))), p_53)), p_53)) , 0U)) <= (*l_94)), 2)) < 0xD3A0), p_53))), 9)) & (*p_55)) <= (*p_55)), p_53)))) && l_118) != 0x13))) || g_57) < 3U)));
                for (p_53 = (-7); (p_53 == 3); p_53++)
                {
                    int32_t **l_122 = &l_94;
                    (*l_82) = &g_57;
                    (*l_122) = l_121;
                    for (l_81 = 0; (l_81 < 44); ++l_81)
                    {
                        (*p_52) = (!((-9) | ((((void*)0 == &g_57) , g_23) < ((safe_lshift_func_uint8_t_u_s(((p_53 , ((safe_rshift_func_uint16_t_u_u(((safe_add_func_uint8_t_u_u((((~(0U & (safe_sub_func_int8_t_s_s(((~(safe_add_func_uint32_t_u_u((safe_unary_minus_func_uint8_t_u(l_118)), (((((0x7AAA ^ 2U) ^ (*p_54)) && l_118) & 0) , (-9))))) | p_53), g_57)))) , (**l_82)) || 0xD7DB), p_53)) <= g_23), 3)) | 1)) >= (**l_82)), 6)) , p_53))));
                    }
                }
            }
            else
            {
                int32_t l_141 = 0x6DCB7496;
                for (g_57 = (-8); (g_57 != 7); g_57++)
                {
                    return l_141;
                }
                return (*g_56);
            }
            if ((*p_55))
            {
                uint32_t l_154 = 0x0EF6F4DF;
                const int32_t *l_166 = &g_57;
                (*p_52) = (0x520ED3B4 && p_53);
                (*p_55) = (((p_53 ^ ((safe_sub_func_int16_t_s_s((safe_add_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u(((g_57 & (((safe_add_func_int8_t_s_s(((0xBBEE733D | (p_53 >= (((*p_54) , ((+g_23) , l_151)) == (((safe_sub_func_int32_t_s_s((*p_52), p_53)) , l_154) , 0x7105)))) ^ g_57), (-1))) || p_53) ^ p_53)) || p_53), p_53)), l_154)), p_53)) >= l_155)) , (*p_55)) > (*p_54));
                if ((safe_sub_func_uint8_t_u_u(0x26, (~(l_94 != (void*)0)))))
                {
                    (*p_52) = (safe_lshift_func_int16_t_s_s((((+(p_53 == (safe_rshift_func_uint16_t_u_u(p_53, 0)))) >= ((((0x583E | 0x125E) != ((((safe_mod_func_int32_t_s_s(0xBC482750, ((l_166 == (void*)0) || p_53))) , &g_56) != &g_56) | g_23)) & g_57) | g_57)) , p_53), p_53));
                    return (*p_54);
                }
                else
                {
                    for (g_57 = (-13); (g_57 <= 1); g_57++)
                    {
                        (*l_82) = &g_57;
                        if ((*p_54))
                            break;
                    }
                    return (*l_166);
                }
            }
            else
            {
                int16_t l_185 = 0x2ACC;
                int32_t ***l_192 = &l_82;
                if (g_23)
                {
                    int16_t l_190 = 0xD7E2;
                    for (l_81 = 16; (l_81 <= 14); l_81 = safe_sub_func_int16_t_s_s(l_81, 6))
                    {
                        (*p_52) = (safe_rshift_func_uint16_t_u_u(((g_57 < (&p_55 != &l_94)) > l_173), ((p_53 | p_53) && 0x3B5975D7)));
                        (*p_55) = (*p_55);
                        g_56 = (*l_82);
                        (*l_82) = (*l_82);
                    }
                    (*l_82) = l_174;
                    (*l_82) = p_54;
                    if ((safe_lshift_func_int16_t_s_u((((void*)0 == p_54) ^ (g_57 || ((~(((((safe_lshift_func_uint16_t_u_u(l_180, 12)) , p_53) , (safe_add_func_uint16_t_u_u(((safe_sub_func_uint32_t_u_u(((l_185 <= 0U) || (safe_mod_func_int32_t_s_s((*p_55), ((safe_sub_func_int32_t_s_s(l_190, l_185)) , 1U)))), (*g_56))) & p_53), g_23))) != 1U) || g_23)) != (*l_174)))), 13)))
                    {
                        int32_t *l_191 = &g_57;
                        int32_t ****l_193 = &l_192;
                        (*l_82) = l_191;
                        (*l_193) = l_192;
                    }
                    else
                    {
                        (*g_56) = (*p_54);
                        (*g_56) = (safe_lshift_func_int16_t_s_s((*l_174), 9));
                    }
                }
                else
                {
                    int32_t l_198 = 4;
                    for (l_185 = 0; (l_185 < 15); l_185 = safe_add_func_int32_t_s_s(l_185, 7))
                    {
                        (*l_82) = (void*)0;
                        if (l_198)
                            break;
                        (*p_54) = (-1);
                    }
                }
                for (l_173 = 19; (l_173 <= 7); --l_173)
                {
                    int32_t l_228 = 0;
                    int32_t ****l_264 = (void*)0;
                    if ((safe_mod_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(((249U && (((((g_23 <= l_155) && (-1)) && (safe_lshift_func_int8_t_s_s(((safe_lshift_func_int16_t_s_s(p_53, g_23)) , (l_209 == (void*)0)), 5))) , ((safe_rshift_func_int8_t_s_u((safe_rshift_func_int16_t_s_u(((void*)0 == &p_52), p_53)), 3)) , l_174)) != (void*)0)) & 8), 5)), 0x96)))
                    {
                        uint8_t l_229 = 1U;
                        (*l_174) = ((p_53 <= ((safe_sub_func_uint16_t_u_u(65534U, ((safe_lshift_func_uint8_t_u_u((((9U == (g_219 == l_220)) | l_223) || (((4U | (safe_mod_func_uint32_t_u_u((safe_mod_func_int16_t_s_s((p_53 | (l_228 || 0x00)), g_23)), g_23))) >= l_228) && l_229)), 3)) , 0x9690))) , 0U)) , (**l_221));
                    }
                    else
                    {
                        int32_t l_232 = 0;
                        (*p_54) = (safe_lshift_func_int16_t_s_u((((l_232 , (safe_unary_minus_func_uint8_t_u((((((g_57 > ((l_232 > (((p_53 , ((((safe_mod_func_uint32_t_u_u(((p_53 < ((safe_sub_func_int8_t_s_s(((safe_rshift_func_int8_t_s_u((~l_232), (((&p_52 != (void*)0) ^ (safe_sub_func_int8_t_s_s((p_53 , 0x0A), g_23))) >= p_53))) >= 8), (-1))) > g_57)) | p_53), p_53)) && l_228) , 0) == g_23)) > p_53) , p_53)) ^ p_53)) == 0x17) | g_57) || 0x9CE0) , p_53)))) || 0xB34F) & (-2)), 2));
                        (*p_55) = (safe_lshift_func_int16_t_s_s(((safe_add_func_int32_t_s_s(l_101, (0xD5964E55 < ((**l_192) != (***l_209))))) <= (safe_sub_func_uint16_t_u_u(g_23, ((((((l_121 != ((safe_mod_func_int8_t_s_s((safe_add_func_int32_t_s_s((-5), 0)), l_228)) , p_55)) | g_57) != p_53) , p_53) <= 7U) , (*l_222))))), g_57));
                        (**l_210) = p_54;
                    }
                    if ((***l_220))
                        break;
                    (*p_55) = (255U & (((((~(safe_sub_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s(g_23, ((*l_221) != (***l_209)))), (safe_sub_func_int32_t_s_s((0xCCD5 == (((void*)0 == &g_219) | ((((p_53 != (safe_sub_func_int32_t_s_s(0x405B1F0B, 4294967290U))) , g_23) , g_57) > 1))), 0x68F20608))))) , 0x38) < g_57) , l_264) == &g_219));
                    (*p_55) = (((p_53 == ((*l_220) == ((safe_mod_func_int32_t_s_s(((l_267 , ((safe_rshift_func_int16_t_s_s((g_57 < (((((((p_53 , ((safe_sub_func_uint32_t_u_u((safe_add_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((g_23 & (((g_23 && (p_53 > (safe_lshift_func_int8_t_s_u(((g_57 <= (*l_222)) , g_57), g_23)))) && (-5)) | (***l_220))), g_23)), 0U)), 1U)) && g_57)) >= p_53) > p_53) && 0x77AC) , p_53) , 1) , 0x74CFF9A1)), 1)) , p_53)) < (*p_54)), (*p_54))) , &l_121))) <= g_57) | (-3));
                }
                (*p_54) = ((safe_lshift_func_uint8_t_u_u((~(safe_rshift_func_uint16_t_u_s((g_23 & 0xBB), 8))), g_57)) < p_53);
            }
        }
        else
        {
            (*g_56) = (g_23 >= 0xD1F8);
            (**l_82) = (*g_56);
            for (p_53 = 5; (p_53 <= 12); ++p_53)
            {
                (*l_82) = (**l_210);
            }
            return g_285;
        }
    }
    else
    {
        return (*l_222);
    }
    (*p_54) = (safe_mod_func_uint16_t_u_u(((void*)0 == (*l_220)), ((((((((safe_rshift_func_int16_t_s_u((safe_mod_func_uint32_t_u_u((0x5F >= (((*p_55) || (0U | (safe_lshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_s(g_23, l_296)), ((+((safe_lshift_func_uint8_t_u_u((g_219 != g_219), g_285)) == p_53)) & (**l_221)))))) | 1U)), (*l_222))), 3)) > (*l_174)) || g_57) || (**l_221)) <= g_285) || 0x31) >= 0x34BA0CDF) & 0xAF)));
    return (**l_221);
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_23;
    csmith_sink_ = g_57;
    csmith_sink_ = g_285;
    csmith_sink_ = g_359;
    csmith_sink_ = g_489;
    csmith_sink_ = g_638;
    csmith_sink_ = g_698;
    csmith_sink_ = g_721;
    platform_main_end(0,0);
    return 0;
}
