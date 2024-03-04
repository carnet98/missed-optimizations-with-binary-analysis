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
static int8_t g_10 = 0xC4L;
static int8_t g_85 = 0x5EL;
static uint16_t g_112 = 65531UL;
static int16_t g_114 = 0xFFF3L;
static uint32_t g_117 = 0x556116ABL;
static uint32_t g_145 = 0x462F1125L;
static uint8_t g_161 = 0UL;
static uint16_t g_166 = 0xDD91L;
static int32_t g_189 = (-5L);
static uint32_t g_193 = 18446744073709551615UL;
static uint32_t g_194 = 1UL;
static uint32_t g_203 = 0x2F48C2FEL;
static uint16_t g_273 = 0x809EL;
static int32_t g_311 = 0L;
static int8_t g_369 = 1L;
static uint16_t g_802 = 0x1E1FL;
static uint8_t g_822 = 0x2CL;
static int32_t g_871 = 0x0CDB6751L;
static int32_t g_886 = (-6L);
static uint32_t g_891 = 0xEA872D6CL;
static uint16_t g_898 = 0UL;
static uint8_t g_904 = 1UL;
static uint16_t func_1(void);
static int32_t func_2(uint16_t p_3, int32_t p_4, int32_t p_5, uint16_t p_6, uint16_t p_7);
static int8_t func_18(uint16_t p_19, int32_t p_20, int16_t p_21, int32_t p_22, int32_t p_23);
static int16_t func_24(uint8_t p_25, int32_t p_26, uint32_t p_27, uint32_t p_28);
static uint32_t func_31(uint16_t p_32);
static uint16_t func_33(int16_t p_34, int32_t p_35, int16_t p_36);
static int32_t func_39(int32_t p_40, int32_t p_41, uint16_t p_42);
static uint16_t func_44(int32_t p_45, uint8_t p_46, uint8_t p_47);
static int32_t func_48(uint8_t p_49, int32_t p_50, int8_t p_51);
static uint8_t func_52(int32_t p_53, int32_t p_54);
static uint16_t func_1(void)
{
    uint32_t l_11 = 0UL;
    int8_t l_894 = 5L;
    uint8_t l_901 = 0x69L;
    int32_t l_930 = 0xF87DB6F2L;
    l_930 = func_2((safe_rshift_func_int16_t_s_s(g_10, (l_11 < (safe_rshift_func_uint8_t_u_s((g_10 == 0L), (safe_add_func_int32_t_s_s((safe_lshift_func_int8_t_s_s(g_10, func_18(l_11, (((func_24(l_11, l_11, l_11, l_11) >= g_822) & l_11) & l_11), l_894, g_871, g_10))), l_901))))))), g_822, g_822, g_10, g_10);
    return l_11;
}
static int32_t func_2(uint16_t p_3, int32_t p_4, int32_t p_5, uint16_t p_6, uint16_t p_7)
{
    int32_t l_902 = 0L;
    int32_t l_903 = (-1L);
    uint32_t l_923 = 4294967295UL;
    p_4 = 0xB1360663L;
    g_904++;
    g_311 = ((-1L) < (safe_mod_func_uint16_t_u_u((safe_add_func_int8_t_s_s(p_4, ((((safe_add_func_uint16_t_u_u(l_903, g_161)) || (safe_div_func_int16_t_s_s((((((p_3 | 0x0654L) || (safe_sub_func_uint8_t_u_u((((safe_rshift_func_uint8_t_u_s(((safe_mod_func_int8_t_s_s(l_923, (safe_sub_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((((((g_802 || ((((safe_sub_func_int8_t_s_s(l_923, g_112)) && 0xC208L) & 9L) == l_903)) && 0xA83E8E11L) == g_898) <= 0x00L) || g_114), 1)), 0x91L)))) < g_10), l_923)) > 0x1FC064E0L) > 0L), l_903))) && l_903) >= 0x0CC5L) ^ l_902), p_3))) || 4294967293UL) | 0x5A62C9E1L))), 5L)));
    g_886 = (g_161 <= 0xE15FFD9BL);
    return p_3;
}
static int8_t func_18(uint16_t p_19, int32_t p_20, int16_t p_21, int32_t p_22, int32_t p_23)
{
    int32_t l_895 = 0xBE9C0975L;
    int32_t l_896 = 0xD2A164DEL;
    int32_t l_897 = 3L;
    g_898++;
    return l_896;
}
static int16_t func_24(uint8_t p_25, int32_t p_26, uint32_t p_27, uint32_t p_28)
{
    uint32_t l_43 = 0UL;
    for (p_28 = 0; (p_28 == 60); p_28++)
    {
        int32_t l_55 = 0xD0336D06L;
        int32_t l_66 = 7L;
        g_886 = (func_31(func_33(p_28, (((safe_sub_func_uint32_t_u_u((p_27 || 0xF118L), func_39(g_10, l_43, func_44(func_48(func_52(l_55, (((((safe_sub_func_uint16_t_u_u(0xC5F9L, (safe_add_func_int8_t_s_s((safe_add_func_int16_t_s_s(((safe_lshift_func_int16_t_s_s((((safe_sub_func_int32_t_s_s(l_43, ((((((((l_55 == l_43) | 0x071CL) && g_10) > l_55) || l_55) || 0x0DE2L) || 0x7BL) >= g_10))) && 0x0C8E82B3L) != 0xDC4D7E3CL), p_25)) <= p_28), g_10)), p_27)))) < l_55) > g_10) > l_55) > l_66)), g_10, g_10), l_55, g_10)))) > l_43) & 0x23L), g_10)) || p_26);
        for (g_193 = 0; (g_193 != 31); ++g_193)
        {
            g_886 ^= ((0x34FCL && p_25) || p_26);
        }
        l_66 = (safe_rshift_func_int16_t_s_s(g_117, 11));
    }
    g_891--;
    return p_27;
}
static uint32_t func_31(uint16_t p_32)
{
    int8_t l_451 = 2L;
    int32_t l_485 = 7L;
    uint8_t l_546 = 0x43L;
    uint16_t l_637 = 65532UL;
    int32_t l_639 = 0L;
    uint16_t l_689 = 65531UL;
    int32_t l_711 = 1L;
    int8_t l_717 = 0x3BL;
    int16_t l_842 = 0xE460L;
    for (g_189 = 0; (g_189 >= (-25)); g_189 = safe_sub_func_uint8_t_u_u(g_189, 1))
    {
        int16_t l_442 = 0L;
        int32_t l_461 = 0xCB3C5C33L;
        for (p_32 = (-1); (p_32 < 30); ++p_32)
        {
            g_311 &= ((safe_mod_func_int16_t_s_s((~p_32), g_166)) >= (safe_lshift_func_uint8_t_u_s(((-1L) > l_442), 3)));
            return p_32;
        }
        l_461 = (((-1L) >= ((((safe_sub_func_int32_t_s_s((safe_add_func_uint16_t_u_u((((((l_451 & 0x963F5E78L) > ((safe_sub_func_int8_t_s_s(0x64L, l_451)) < 7L)) < p_32) >= (((((safe_add_func_int16_t_s_s(((safe_sub_func_uint32_t_u_u(l_442, ((safe_add_func_int8_t_s_s((((((safe_unary_minus_func_uint8_t_u((((0x2E90L == 0xCDEEL) > l_451) & g_112))) >= 0xC5AEL) == l_451) > g_369) > 0x36L), l_451)) != g_369))) ^ 0L), 65535UL)) == 0xFA19L) || l_442) ^ (-2L)) | l_451)) ^ p_32), g_193)), 5L)) || p_32) > 0UL) > p_32)) || g_311);
        g_311 = l_451;
    }
    if ((safe_lshift_func_uint8_t_u_u((((safe_add_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_u(l_451, 5)) == (g_85 | (p_32 <= 1UL))), ((p_32 == l_451) | (safe_rshift_func_uint16_t_u_u((g_112 && (safe_mod_func_uint32_t_u_u(((safe_sub_func_int8_t_s_s(g_166, (safe_lshift_func_uint16_t_u_u(p_32, 5)))) == g_194), l_451))), 8))))) > (-1L)) > 0x66C3L), g_189)))
    {
        uint8_t l_479 = 0x3AL;
        for (g_85 = (-28); (g_85 >= (-11)); g_85 = safe_add_func_uint16_t_u_u(g_85, 3))
        {
            l_479 = (+p_32);
        }
        g_311 = p_32;
        for (g_161 = 0; (g_161 > 45); g_161 = safe_add_func_uint16_t_u_u(g_161, 5))
        {
            int32_t l_484 = 0xAD557342L;
            l_485 = (safe_mod_func_int16_t_s_s((p_32 && 0x01L), l_484));
        }
        l_485 = (safe_div_func_int16_t_s_s(p_32, 0x84D5L));
    }
    else
    {
        int16_t l_496 = 7L;
        int32_t l_510 = 0x7FC4C111L;
        uint32_t l_584 = 1UL;
        int32_t l_812 = 0x5C7C47C6L;
        uint32_t l_841 = 18446744073709551615UL;
        int32_t l_843 = (-9L);
        if (((safe_sub_func_int8_t_s_s((((0L < (safe_rshift_func_int8_t_s_u((safe_mod_func_int8_t_s_s(p_32, ((safe_div_func_uint32_t_u_u(g_145, (((l_496 != (((safe_unary_minus_func_uint8_t_u((1L > g_273))) != (safe_lshift_func_uint16_t_u_u((((safe_lshift_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_u(p_32, ((l_485 || 0xBBL) || p_32))) & (-2L)), g_194)) > g_311) & p_32), g_166))) && 0x7C8AL)) != p_32) ^ 1L))) ^ 0x813DL))), l_485))) >= l_496) <= l_451), 0x96L)) | 4294967294UL))
        {
            int32_t l_518 = 0xDB6F072EL;
            for (g_369 = 0; (g_369 == 21); g_369 = safe_add_func_uint32_t_u_u(g_369, 9))
            {
                l_510 = (((safe_rshift_func_int16_t_s_s((l_496 && (safe_add_func_uint16_t_u_u(l_496, 0xAC3DL))), 11)) && 0x1BL) <= 6L);
            }
            if ((l_451 || ((((safe_div_func_uint8_t_u_u(((l_485 <= (safe_unary_minus_func_uint32_t_u((1UL < ((0x4999L | g_10) < ((safe_rshift_func_int8_t_s_s((l_518 == 0x35B6DD22L), 1)) & (l_518 <= 0x02L))))))) != 0x1C5FL), g_166)) ^ 0x72F8L) & 0x29BDC5D1L) >= g_114)))
            {
                uint32_t l_532 = 0x6B69F79CL;
                g_311 = (safe_mod_func_int32_t_s_s((0UL | ((safe_mod_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_u(251UL, (((((safe_sub_func_int32_t_s_s((safe_mod_func_uint32_t_u_u(g_112, ((g_166 && (((safe_sub_func_int32_t_s_s((p_32 & (246UL >= ((((~(l_451 != (((0x4FC5A9C8L || l_532) > g_10) != l_518))) >= 0UL) >= g_166) | p_32))), g_161)) != g_161) >= p_32)) && 9UL))), 0xD488DD11L)) > p_32) || l_510) > 0x7CB7B7E3L) || p_32))) & g_369), 0x7830L)) != 0x5C79L)), p_32));
                l_485 &= ((+0xD9B8L) > ((safe_div_func_int8_t_s_s((safe_sub_func_int32_t_s_s(l_510, ((!l_496) & ((safe_rshift_func_int8_t_s_u((p_32 >= 0x81L), (safe_sub_func_uint8_t_u_u((g_10 == p_32), (safe_lshift_func_int16_t_s_u(l_518, 9)))))) ^ (((((!(((g_161 < 0x2B84L) < 4294967293UL) >= p_32)) != l_510) || l_546) < 0xE2L) != 1L))))), l_518)) != 0x5B07L));
            }
            else
            {
                int8_t l_567 = 0L;
                int32_t l_641 = 0x869DE729L;
                for (g_112 = 0; (g_112 < 53); g_112 = safe_add_func_int16_t_s_s(g_112, 1))
                {
                    uint32_t l_552 = 0x4F34E5C4L;
                    int16_t l_638 = 0L;
                    int32_t l_640 = 0x6C228723L;
                    for (p_32 = 0; (p_32 == 33); p_32 = safe_add_func_int16_t_s_s(p_32, 1))
                    {
                        uint16_t l_551 = 0x02A2L;
                        if (p_32)
                            break;
                        l_510 = ((p_32 & 4294967291UL) < l_551);
                        l_552 = (p_32 <= p_32);
                        l_510 = 1L;
                    }
                    g_311 = ((0x63L | (((safe_mod_func_int16_t_s_s((safe_div_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u(l_518, (safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(0x541AL, 11)), 2)))), (((safe_div_func_uint8_t_u_u((safe_add_func_int8_t_s_s((2UL >= (g_145 || (((-1L) < p_32) >= l_567))), (safe_rshift_func_int16_t_s_u(((0UL && l_567) | 0UL), l_567)))), 252UL)) || 1L) || g_112))), l_518)) < l_518) ^ p_32)) && g_194);
                    g_311 ^= (((((safe_mod_func_uint16_t_u_u(g_273, (safe_lshift_func_uint16_t_u_u(p_32, 12)))) >= (safe_sub_func_int32_t_s_s(((p_32 >= ((safe_sub_func_int32_t_s_s((safe_div_func_uint32_t_u_u((((safe_mod_func_int16_t_s_s((safe_div_func_uint16_t_u_u(l_584, ((0x2559L & ((safe_div_func_int32_t_s_s(((safe_add_func_uint32_t_u_u((safe_add_func_uint8_t_u_u((65530UL | g_114), (safe_sub_func_uint32_t_u_u(0xB442E5E9L, ((l_567 > g_112) >= g_273))))), 0UL)) ^ p_32), g_189)) == g_145)) && p_32))), p_32)) != g_189) | p_32), l_567)), g_194)) & 9UL)) && 0x03E69EFEL), g_145))) && p_32) == p_32) && g_193);
                    l_640 &= ((safe_mod_func_int8_t_s_s(0xF6L, (safe_rshift_func_int16_t_s_u((safe_sub_func_uint16_t_u_u((~(0x30L && ((safe_add_func_int16_t_s_s((((safe_rshift_func_uint16_t_u_s((safe_add_func_int8_t_s_s((0x9B0F3FEBL | 0xCC5EBACDL), ((safe_sub_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u(((safe_sub_func_int16_t_s_s(((safe_add_func_uint8_t_u_u(((((safe_div_func_int32_t_s_s((+(safe_div_func_int32_t_s_s((safe_add_func_int32_t_s_s(l_510, (safe_add_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((((safe_mod_func_uint8_t_u_u(((safe_mod_func_uint32_t_u_u((((!(((safe_rshift_func_uint16_t_u_s((safe_div_func_uint8_t_u_u(0x55L, (safe_unary_minus_func_int16_t_s((((g_369 != (safe_add_func_uint16_t_u_u((((((l_637 | l_518) || p_32) <= 0x26L) & l_485) < g_117), g_85))) == 8L) && 65535UL))))), l_451)) | p_32) || l_567)) >= g_189) && l_637), l_546)) ^ l_638), p_32)) > 0x961EA5B7L) ^ 2L), l_510)), g_85)))), 1L))), l_518)) < 0xA7L) ^ (-1L)) ^ l_496), p_32)) < g_112), 0x9927L)) && (-8L)), (-5L))), g_10)) | l_518))), p_32)) || 0x832D1D7DL) <= g_311), p_32)) & g_117))), 0x9113L)), l_639)))) & l_518);
                }
                l_510 = (0UL || (p_32 < l_567));
                l_641 &= l_518;
                g_311 = ((safe_lshift_func_int16_t_s_s((safe_sub_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(g_112, (g_369 < ((safe_lshift_func_int8_t_s_u((safe_mod_func_uint32_t_u_u(((8L >= (p_32 <= (g_161 | (safe_add_func_uint32_t_u_u((safe_div_func_int32_t_s_s(((((safe_mod_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(((1L & (((((safe_add_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s((0x6162333DL ^ (p_32 & (safe_lshift_func_uint8_t_u_u((((safe_sub_func_uint32_t_u_u(((safe_sub_func_uint8_t_u_u(0UL, p_32)) ^ l_637), g_203)) ^ l_637) ^ p_32), 6)))), g_203)), 4294967295UL)) == 0x87L) <= g_311) | g_166) != p_32)) != 0xD166L), g_369)), g_145)) > 4294967289UL) ^ 1UL) >= l_510), 0x9EBBD710L)), p_32))))) < l_518), 0x1A15D77CL)), 2)) & 0xA879L)))), g_369)), 7)) && 8L);
            }
            l_689 = (g_203 <= (safe_mod_func_int16_t_s_s((+(safe_div_func_int8_t_s_s(g_311, (safe_add_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_s(0x452EL, 12)), 2)), (safe_add_func_int16_t_s_s(((safe_unary_minus_func_int16_t_s(0xC47DL)) <= (safe_sub_func_uint32_t_u_u(1UL, (+5L)))), (safe_rshift_func_uint16_t_u_u(g_311, 1))))))))), 0xD1AAL)));
        }
        else
        {
            uint8_t l_698 = 1UL;
            int32_t l_713 = 6L;
            uint32_t l_789 = 0xF69C20DDL;
            l_510 &= 3L;
            g_311 = l_496;
            for (g_145 = (-16); (g_145 >= 41); g_145 = safe_add_func_uint32_t_u_u(g_145, 1))
            {
                uint8_t l_699 = 0x85L;
                int32_t l_790 = 0x2715E0B2L;
                if (p_32)
                {
                    int16_t l_710 = 0x41E3L;
                    int32_t l_712 = (-1L);
                    for (l_639 = 0; (l_639 >= (-25)); l_639--)
                    {
                        uint8_t l_714 = 0x2AL;
                        l_711 ^= ((safe_mod_func_uint32_t_u_u((((safe_sub_func_uint16_t_u_u(0x0A79L, l_698)) || l_699) && g_369), (safe_lshift_func_int8_t_s_s((safe_sub_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(255UL, 2)), 65535UL)), (safe_lshift_func_int8_t_s_u((((safe_lshift_func_int8_t_s_u(l_485, l_710)) == g_117) & g_114), 0)))))) > 0L);
                        ++l_714;
                        l_713 = (l_717 != l_712);
                    }
                }
                else
                {
                    uint8_t l_718 = 0UL;
                    int32_t l_752 = 1L;
                    --l_718;
                    if (((safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((safe_mod_func_int32_t_s_s(p_32, g_273)), 5)), 0)) || (safe_lshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(0UL, (((~((safe_sub_func_int32_t_s_s((((safe_mod_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_u(0x16BDL, 10)) >= (((((safe_lshift_func_uint8_t_u_s(((((safe_div_func_int8_t_s_s((0x0FA7L == ((p_32 && 0L) & ((g_145 && (safe_add_func_uint16_t_u_u((((safe_mod_func_uint32_t_u_u(((((p_32 <= g_10) ^ 0xC437ABDAL) ^ 0x545F5720L) ^ p_32), p_32)) < g_203) == p_32), p_32))) <= l_718))), p_32)) && g_112) || g_145) <= p_32), 2)) < 0L) && (-10L)) | 0xC89E2B7CL) < g_112)), 0xE6L)) <= g_161) == l_510), 1L)) <= (-7L))) && (-8L)) || p_32))), g_112))))
                    {
                        l_752 = p_32;
                    }
                    else
                    {
                        uint32_t l_759 = 0x1376DC1CL;
                        uint32_t l_799 = 18446744073709551615UL;
                        int32_t l_811 = (-1L);
                        l_790 = (((safe_rshift_func_uint16_t_u_u(((safe_sub_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u(l_759, (safe_rshift_func_uint16_t_u_s((g_117 != ((((0x8107CF97L == (1UL ^ (safe_add_func_uint8_t_u_u((safe_unary_minus_func_uint16_t_u((safe_add_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((((((safe_lshift_func_int16_t_s_s(((~(safe_div_func_uint32_t_u_u((l_699 & 252UL), (((((safe_add_func_int32_t_s_s(g_189, ((((safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_s((l_759 != (safe_rshift_func_uint8_t_u_s(((safe_unary_minus_func_uint8_t_u((safe_lshift_func_int16_t_s_s((l_718 < p_32), g_193)))) != g_114), l_699))), l_699)), l_789)), l_759)) || l_759) < 0x0FL) ^ 0L))) == (-2L)) | l_759) > l_699) && g_193)))) || (-1L)), 0)) != p_32) & 0L) > g_161) | 0x8FB84443L), p_32)), 65526UL)))), p_32)))) != l_759) != 0x8B0D4BBEL) <= g_189)), l_789)))), g_117)) <= g_117), 8)) > 0xFCL) != l_759);
                        g_311 = (safe_div_func_int32_t_s_s(((g_273 <= (0x2FCBL | (((((g_85 != ((safe_div_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u(g_203, ((safe_div_func_int16_t_s_s(((1L != (p_32 == ((l_799 == (safe_sub_func_int8_t_s_s(((g_802 < (safe_mod_func_uint8_t_u_u((safe_div_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_s(l_485, p_32)) & l_698), p_32)), 1UL)), 6L))) <= p_32), l_790))) >= 1L))) ^ 0x48A9DC16L), l_718)) >= l_752))) | l_799), 0x50F4L)) && (-7L))) >= 0xE538EF27L) <= p_32) <= 0xE77CB048L) >= 1L))) && 0x6DCCF661L), g_273));
                        l_811 = p_32;
                        l_713 = (g_369 > g_112);
                    }
                    if (l_812)
                        break;
                    l_713 |= (-1L);
                }
            }
        }
        l_843 = ((l_496 && (!l_637)) | ((65531UL > (safe_rshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_u((g_822 & ((safe_rshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u((((((safe_lshift_func_int8_t_s_s(((((+(safe_lshift_func_uint16_t_u_u(l_812, (((((((safe_lshift_func_uint16_t_u_s(g_822, ((safe_div_func_int8_t_s_s(l_510, (((safe_sub_func_int16_t_s_s((((!g_85) != ((safe_sub_func_uint16_t_u_u(g_114, 0x0248L)) ^ 0xE29EL)) != p_32), l_510)) >= l_639) && 0xDAL))) ^ 0x34L))) != 65530UL) >= (-8L)) && g_85) || 0x85L) & p_32) || (-1L))))) >= l_584) & l_841) == p_32), 5)) <= p_32) < l_637) | g_166) != p_32), g_114)), 14)) > 5L)), l_842)) <= g_802), l_717)), 7))) < l_584));
    }
    g_311 = ((safe_div_func_int32_t_s_s(p_32, ((safe_sub_func_uint32_t_u_u(0x46FEBEEFL, (!((safe_mod_func_int16_t_s_s(((safe_sub_func_int8_t_s_s(0xAAL, l_637)) < (p_32 >= ((safe_div_func_int32_t_s_s(((((safe_div_func_int16_t_s_s(p_32, ((safe_add_func_int16_t_s_s((((safe_lshift_func_uint16_t_u_u(((l_546 & (safe_mod_func_uint32_t_u_u((((((0UL >= (((((safe_add_func_int32_t_s_s(((l_711 & p_32) >= 2L), p_32)) < l_637) && l_485) <= g_203) >= 0x8588B505L)) | g_311) == l_637) ^ l_711) | 0xB8L), g_114))) ^ 0x33L), 15)) <= (-1L)) > (-1L)), p_32)) || 0xDC0E57D9L))) | p_32) < g_85) && 3L), p_32)) | p_32))), g_311)) && l_717)))) & 0x7885L))) & (-9L));
    g_311 = (safe_add_func_int16_t_s_s(l_689, ((((safe_sub_func_int16_t_s_s(((g_871 & ((((safe_div_func_uint8_t_u_u(g_117, (((safe_add_func_uint16_t_u_u(0xB97BL, (safe_mod_func_uint8_t_u_u(g_871, (safe_sub_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_s(l_637, 15)), ((safe_rshift_func_uint16_t_u_s(0x7BF9L, 13)) ^ (safe_lshift_func_int8_t_s_s(((g_822 || 0x1575A922L) > 0x5D82A794L), p_32))))))))) & p_32) && p_32))) != 0UL) != p_32) | l_689)) <= p_32), p_32)) > 0UL) & 0L) || 0UL)));
    return g_311;
}
static uint16_t func_33(int16_t p_34, int32_t p_35, int16_t p_36)
{
    int32_t l_394 = 1L;
    uint16_t l_413 = 0x2CCAL;
    int32_t l_414 = 0xA31F7803L;
    if ((l_394 | ((0L != (safe_div_func_int16_t_s_s((((safe_lshift_func_int16_t_s_u((-9L), 7)) != (((safe_mod_func_uint32_t_u_u((((((g_166 || (safe_lshift_func_int16_t_s_u(((((safe_lshift_func_int16_t_s_s(1L, ((((((safe_rshift_func_uint8_t_u_s(((((safe_mod_func_uint16_t_u_u(p_35, l_394)) >= (safe_mod_func_int16_t_s_s(((((((safe_mul_func_uint32_t_u_u(0UL, (g_311 <= p_36))) > l_413) < g_369) & p_36) <= l_413) & 0xECL), g_85))) != (-9L)) >= 0xD6L), p_36)) <= g_369) >= p_35) != (-1L)) || g_112) | g_166))) != l_394) <= l_413) <= l_413), 9))) | l_394) < l_394) == p_35) == p_35), 0x3D1F3DB4L)) || p_34) >= g_117)) | p_35), l_413))) || p_34)))
    {
        uint32_t l_415 = 0xE9F9F4B5L;
        --l_415;
    }
    else
    {
        int8_t l_424 = (-1L);
        p_35 = ((g_194 == ((safe_sub_func_int32_t_s_s(((safe_add_func_uint16_t_u_u(l_424, g_117)) == ((+(safe_rshift_func_uint8_t_u_u((!251UL), (safe_rshift_func_uint16_t_u_s((l_394 > g_10), 14))))) != (p_35 != ((((((g_369 & 6UL) >= (-4L)) > l_424) >= 1UL) < l_424) >= (-10L))))), l_413)) < l_424)) > p_34);
        p_35 |= (safe_lshift_func_uint8_t_u_s(p_36, 2));
    }
    return g_166;
}
static int32_t func_39(int32_t p_40, int32_t p_41, uint16_t p_42)
{
    uint8_t l_377 = 250UL;
    int32_t l_388 = 0x52E694BAL;
    int32_t l_393 = 0x8B1DD971L;
    l_393 ^= ((safe_mod_func_uint16_t_u_u(l_377, (safe_lshift_func_uint16_t_u_u(((safe_add_func_uint32_t_u_u(p_40, (l_377 > l_377))) >= (safe_sub_func_int16_t_s_s((250UL == ((safe_sub_func_int16_t_s_s((safe_div_func_int32_t_s_s(g_189, l_388)), (p_42 == (safe_add_func_int32_t_s_s(((safe_div_func_uint16_t_u_u((l_377 ^ g_85), g_10)) != l_377), 0x21EBF779L))))) & 0xC31EL)), l_377))), g_85)))) & g_145);
    return p_41;
}
static uint16_t func_44(int32_t p_45, uint8_t p_46, uint8_t p_47)
{
    int16_t l_373 = 1L;
    int32_t l_374 = 0L;
    l_374 ^= (g_369 || (safe_div_func_int8_t_s_s(((0x9984L > (safe_unary_minus_func_int16_t_s(p_45))) & l_373), g_112)));
    return p_45;
}
static int32_t func_48(uint8_t p_49, int32_t p_50, int8_t p_51)
{
    int32_t l_320 = 0x86A66762L;
    int32_t l_339 = 0xD4E311F9L;
    int32_t l_368 = 0x34429F38L;
    for (g_193 = 0; (g_193 >= 49); ++g_193)
    {
        g_311 ^= (-3L);
    }
    for (g_166 = 0; (g_166 <= 9); g_166 = safe_add_func_uint32_t_u_u(g_166, 1))
    {
        int16_t l_316 = 0xB735L;
        p_50 = (safe_add_func_uint16_t_u_u(((-1L) == (0xD3A580E2L && (65533UL <= (l_316 || p_49)))), (safe_add_func_uint32_t_u_u(((safe_unary_minus_func_int8_t_s(((l_320 >= g_273) > (2L && 0x9CL)))) != p_51), 0xD79F787DL))));
        return p_50;
    }
    l_339 ^= (0x89B6L != ((safe_sub_func_uint32_t_u_u(4294967295UL, (g_194 | (g_145 ^ (safe_div_func_int16_t_s_s(g_189, (safe_add_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(((safe_mod_func_int32_t_s_s((~(((((safe_sub_func_int32_t_s_s((((65531UL < (((1L || ((~((0x6C84C521L >= g_203) && g_161)) & 5UL)) || p_50) > 0x06404F57L)) | l_320) != p_49), g_189)) < g_166) < 0x58L) && (-1L)) < (-1L))), 4294967295UL)) <= p_49), 11)), 8)) < p_51), l_320)))))))) != g_311));
    p_50 = (safe_rshift_func_uint8_t_u_s((g_273 < (((((safe_sub_func_int8_t_s_s(((safe_rshift_func_int8_t_s_s((0x43169765L == p_49), (safe_div_func_uint16_t_u_u(p_49, g_194)))) & (safe_sub_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((((+p_49) >= ((safe_unary_minus_func_uint32_t_u((safe_div_func_int8_t_s_s((0x2EL && (safe_div_func_uint16_t_u_u(((g_273 == (safe_sub_func_int32_t_s_s((safe_mod_func_int16_t_s_s(((safe_sub_func_uint32_t_u_u((safe_sub_func_int32_t_s_s((((p_50 | g_311) <= g_273) ^ l_368), g_10)), p_50)) || g_311), g_85)), g_311))) || 0xDCB4L), 5UL))), g_194)))) > 0x4744A534L)) && g_194), g_112)), l_368))), g_114)) < g_194) & 0x2AB83D35L) ^ 7L) <= 4L)), 0));
    return l_368;
}
static uint8_t func_52(int32_t p_53, int32_t p_54)
{
    int32_t l_71 = 0x42EF3998L;
    int32_t l_199 = 0xEBD87E6FL;
    int32_t l_200 = 0x2447E691L;
    int32_t l_201 = 1L;
    uint16_t l_222 = 0x9FBBL;
    uint16_t l_256 = 65535UL;
    int16_t l_257 = 2L;
    uint8_t l_308 = 255UL;
    if (((safe_lshift_func_uint8_t_u_s((safe_sub_func_uint8_t_u_u(((l_71 >= g_10) >= ((safe_unary_minus_func_int16_t_s(0x45F0L)) == (safe_mod_func_uint32_t_u_u(((safe_mod_func_uint32_t_u_u(0xF6EC3746L, (g_10 && (safe_add_func_uint32_t_u_u((safe_add_func_int16_t_s_s((((safe_div_func_int8_t_s_s(((((g_10 & ((safe_lshift_func_uint16_t_u_s(l_71, 2)) > g_85)) || g_85) < g_85) >= (-2L)), 0xC4L)) > p_53) > (-4L)), 0xB9AAL)), 0x7DCCC76BL))))) > p_53), 0x93517891L)))), g_85)), 5)) < l_71))
    {
        int32_t l_107 = 0L;
        int8_t l_109 = (-3L);
        int32_t l_113 = 0L;
        int32_t l_134 = 0xA6A910B1L;
        int32_t l_164 = 7L;
        int32_t l_187 = (-1L);
        uint16_t l_188 = 0x7DB9L;
        for (g_85 = (-4); (g_85 < 7); ++g_85)
        {
            int16_t l_108 = 0x0EC9L;
            uint8_t l_110 = 0xBBL;
            for (p_53 = 2; (p_53 <= 6); p_53 = safe_add_func_uint16_t_u_u(p_53, 5))
            {
                uint32_t l_100 = 4294967290UL;
                for (p_54 = 17; (p_54 < 3); p_54 = safe_sub_func_int16_t_s_s(p_54, 3))
                {
                    uint16_t l_94 = 0UL;
                    int32_t l_95 = 0x77CCB2DCL;
                    uint32_t l_111 = 0UL;
                    l_95 = (safe_lshift_func_int8_t_s_s(l_94, 5));
                    if ((g_85 != ((((safe_lshift_func_int16_t_s_s(l_71, 2)) > ((l_100 < (safe_add_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(((l_71 & (g_10 | (((safe_mod_func_int16_t_s_s(l_107, ((((0xB39CL == ((((((p_53 != l_107) == 0L) != p_53) || l_94) != l_108) <= g_10)) <= l_109) < l_110) | g_85))) ^ 1UL) && l_111))) > 0L), 6)), g_85))) == p_54)) >= 0x5E685AC0L) && g_10)))
                    {
                        g_112 = 0L;
                        l_113 |= g_10;
                    }
                    else
                    {
                        g_114 = g_85;
                        g_117 = (safe_rshift_func_int16_t_s_s(p_54, p_53));
                    }
                    for (l_94 = 0; (l_94 != 42); l_94 = safe_add_func_int8_t_s_s(l_94, 6))
                    {
                        l_95 = (l_71 && (p_53 <= l_113));
                    }
                    for (l_108 = 0; (l_108 >= 16); l_108 = safe_add_func_int8_t_s_s(l_108, 3))
                    {
                        return g_10;
                    }
                }
                l_113 ^= g_10;
                g_145 = ((safe_mod_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_s((1UL & ((safe_sub_func_uint8_t_u_u((safe_add_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_u(l_134, (((safe_sub_func_int32_t_s_s((l_100 ^ ((((safe_lshift_func_int16_t_s_s(0xE742L, 2)) | 0xD0CEL) && (safe_lshift_func_int8_t_s_u((safe_add_func_uint32_t_u_u(g_112, (((l_71 <= (((safe_mod_func_uint32_t_u_u(l_71, 5UL)) >= l_134) ^ p_54)) & l_110) || 0x9BB0L))), l_109))) & 0xAAL)), p_53)) >= p_53) <= g_117))) > p_54), 0xECL)), p_54)) < 248UL)), 5)) >= l_100), 6L)) == l_71);
            }
        }
        p_53 = (!(((p_54 < 0UL) == p_54) || ((l_134 != (safe_div_func_uint8_t_u_u(((g_112 <= (safe_rshift_func_int8_t_s_s((3L == 255UL), 4))) >= ((safe_lshift_func_uint16_t_u_s(g_145, (((safe_add_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_s(((((safe_lshift_func_int8_t_s_s(1L, 3)) < 0xBEL) < p_53) > g_114), 2)), 0x34A3FD71L)) <= (-4L)) >= g_10))) ^ 4UL)), p_54))) != (-1L))));
        for (l_71 = 0; (l_71 < 10); l_71 = safe_add_func_int32_t_s_s(l_71, 7))
        {
            int32_t l_165 = 0x5428794FL;
            g_161++;
            g_166++;
        }
        g_189 = ((((0UL != (((l_164 | (((((safe_lshift_func_int8_t_s_u((safe_div_func_int8_t_s_s((-9L), (safe_mod_func_int32_t_s_s((safe_sub_func_int32_t_s_s(((p_53 || (safe_mod_func_uint16_t_u_u((safe_div_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(l_164, (((safe_div_func_int16_t_s_s(p_53, (g_166 && (((safe_mod_func_int32_t_s_s((p_53 && ((p_54 > g_166) || l_187)), 4294967288UL)) != g_145) > 0x730F596BL)))) < l_188) >= g_161))), l_71)), p_54))) || (-1L)), 0xA0C00B44L)), p_54)))), 2)) >= 4L) ^ l_71) || l_71) < l_71)) || g_85) | p_54)) && g_161) >= l_71) & g_117);
    }
    else
    {
        int32_t l_196 = 0xE489E7F0L;
        int32_t l_198 = (-1L);
        int32_t l_202 = 0x879D1BA2L;
        for (g_161 = (-4); (g_161 > 2); g_161 = safe_add_func_int16_t_s_s(g_161, 1))
        {
            uint16_t l_195 = 0x726BL;
            int32_t l_258 = (-9L);
            if (l_71)
                break;
            if (p_53)
            {
                int8_t l_192 = 1L;
                int32_t l_197 = 0x0311020BL;
                g_193 = l_192;
                if (g_145)
                {
                    if (p_54)
                        break;
                    g_194 = (p_54 != p_54);
                }
                else
                {
                    if (l_195)
                        break;
                    return p_53;
                }
                ++g_203;
                l_200 = (((safe_sub_func_int32_t_s_s(p_54, (g_161 <= 0x5373L))) && l_200) <= ((safe_mod_func_int16_t_s_s((((safe_lshift_func_uint16_t_u_s(((safe_add_func_uint16_t_u_u(((safe_mod_func_int32_t_s_s((((safe_rshift_func_int8_t_s_s(l_197, ((((-9L) != ((safe_sub_func_int8_t_s_s((safe_add_func_uint8_t_u_u(l_198, (p_53 || g_193))), p_54)) < p_54)) ^ 0x65B9L) != p_54))) || p_53) > l_195), g_112)) && g_10), p_53)) > g_85), g_145)) == 255UL) >= p_53), p_54)) ^ l_222));
            }
            else
            {
                int8_t l_272 = 0x62L;
                int32_t l_276 = 1L;
                int32_t l_277 = (-7L);
                l_258 = (safe_add_func_uint16_t_u_u((!((g_203 == (safe_rshift_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_s(0UL, 2)), 15)), ((~(((g_85 ^ 1L) >= (((((safe_rshift_func_int16_t_s_s(((0xAAL ^ (((((safe_mod_func_int16_t_s_s((safe_div_func_int32_t_s_s(p_53, (((safe_div_func_int16_t_s_s((~((safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_u(g_10, 7)), (safe_sub_func_int32_t_s_s((+(safe_sub_func_int32_t_s_s(((safe_lshift_func_uint16_t_u_s((~(0xC3BF28D7L < 0xF4DF6C7FL)), p_53)) && p_53), l_256))), l_257)))) ^ l_195)), p_53)) < (-7L)) ^ g_189))), 0x2B96L)) == g_193) < p_54) < p_53) >= 1UL)) ^ g_189), 2)) <= 0x4E944683L) && 65535UL) <= p_53) > 0xC0L)) >= 0UL)) >= l_195))), 0))) > l_198)), p_53));
                if ((p_54 > (safe_div_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_u((safe_unary_minus_func_uint32_t_u((250UL | g_112))), (65535UL ^ (safe_mod_func_uint32_t_u_u(((safe_sub_func_uint8_t_u_u((((safe_lshift_func_int8_t_s_s(l_198, 1)) && (p_54 != 0x9FBBL)) <= (safe_div_func_uint16_t_u_u(2UL, (((p_53 <= l_196) && l_257) | g_194)))), 0L)) && l_272), p_54))))) >= g_203), g_112))))
                {
                    p_53 = g_114;
                }
                else
                {
                    p_54 = g_114;
                    if (g_203)
                    {
                        uint32_t l_278 = 0xB4B9CE0AL;
                        ++g_273;
                        l_278--;
                        p_53 = (safe_sub_func_int8_t_s_s((safe_sub_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_u(0xD88BL, p_54)) && (safe_unary_minus_func_uint16_t_u((safe_add_func_int32_t_s_s(((safe_add_func_uint16_t_u_u(((((p_54 ^ (((safe_add_func_uint8_t_u_u(((safe_div_func_uint16_t_u_u(g_114, (safe_div_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(0x2E49L, (safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(((g_114 && 0x4C18L) > ((((((l_198 && ((safe_add_func_uint16_t_u_u((g_112 ^ g_166), 0xD1CDL)) ^ p_54)) && p_53) > l_198) > l_258) > 0x4E93L) ^ p_53)), 1)), 6)))), p_54)))) <= g_193), g_194)) && p_54) || p_54)) == g_189) <= p_54) > 0L), g_145)) > 0xC3L), p_54))))), 1UL)), g_112));
                    }
                    else
                    {
                        p_54 |= g_161;
                    }
                }
            }
        }
        return l_308;
    }
    return l_71;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_10;
    csmith_sink_ = g_85;
    csmith_sink_ = g_112;
    csmith_sink_ = g_114;
    csmith_sink_ = g_117;
    csmith_sink_ = g_145;
    csmith_sink_ = g_161;
    csmith_sink_ = g_166;
    csmith_sink_ = g_189;
    csmith_sink_ = g_193;
    csmith_sink_ = g_194;
    csmith_sink_ = g_203;
    csmith_sink_ = g_273;
    csmith_sink_ = g_311;
    csmith_sink_ = g_369;
    csmith_sink_ = g_802;
    csmith_sink_ = g_822;
    csmith_sink_ = g_871;
    csmith_sink_ = g_886;
    csmith_sink_ = g_891;
    csmith_sink_ = g_898;
    csmith_sink_ = g_904;
    platform_main_end(0,0);
    return 0;
}
