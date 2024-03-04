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
static uint8_t g_14 = 0U;
static int16_t g_62 = (-1);
static uint32_t g_65 = 1U;
static int16_t g_90 = 0x8636;
static int16_t g_136 = (-5);
static uint8_t g_153 = 246U;
static int16_t g_155 = 1;
static uint32_t g_160 = 1U;
static int32_t g_181 = 3;
static int32_t g_341 = (-1);
static int8_t g_404 = 0xB2;
static int32_t g_409 = 1;
static int32_t g_410 = 0xC397C8A8;
static int16_t g_413 = (-10);
static int8_t g_414 = 0;
static int32_t g_416 = 8;
static uint32_t g_418 = 1U;
static uint32_t g_425 = 0x4C1116C5;
static uint32_t g_585 = 4294967295U;
static uint32_t g_620 = 1U;
static int16_t g_735 = 1;
static int16_t g_736 = 0x341F;
static int32_t g_737 = (-10);
static int32_t g_738 = 0x0D5BCF2F;
static int32_t g_739 = 0x6FD0C9EE;
static int16_t g_742 = 0x4FA4;
static int32_t g_745 = 0x33EA072E;
static int16_t g_792 = 0xDD02;
static int16_t g_841 = 1;
static int8_t g_851 = 0xC7;
static uint16_t g_853 = 0U;
static int8_t g_1016 = 0xB3;
static uint32_t g_1017 = 0x2D75FF80;
static uint8_t func_1(void);
static int32_t func_4(uint16_t p_5, const uint16_t p_6, uint16_t p_7, uint32_t p_8, uint8_t p_9);
static uint16_t func_10(int32_t p_11, int16_t p_12, uint8_t p_13);
static uint32_t func_16(const uint32_t p_17);
static int32_t func_32(int8_t p_33, uint32_t p_34);
static uint8_t func_35(uint8_t p_36);
static int16_t func_41(uint32_t p_42, int16_t p_43, uint32_t p_44);
static uint32_t func_45(int32_t p_46, uint32_t p_47, int8_t p_48);
static uint32_t func_49(int8_t p_50, int16_t p_51, int32_t p_52, int8_t p_53, uint8_t p_54);
static uint8_t func_85(int8_t p_86, uint8_t p_87, int32_t p_88, uint32_t p_89);
static uint8_t func_1(void)
{
    uint32_t l_15 = 0xB1A9565E;
    int32_t l_992 = 1;
    int32_t l_1013 = 0xFD9D7DA4;
    int32_t l_1014 = (-1);
    int32_t l_1015 = (-4);
    l_992 = (safe_sub_func_int32_t_s_s(func_4(func_10(g_14, l_15, (g_14 , 1U)), (l_992 != (safe_add_func_int32_t_s_s(((safe_sub_func_uint8_t_u_u(0U, 1U)) & ((safe_rshift_func_int8_t_s_s(((safe_mod_func_uint8_t_u_u(((((0x6264B1AF && l_15) <= g_739) | l_15) , l_15), g_14)) , 0x21), 3)) <= 0x1583)), l_15))), g_792, l_992, l_15), l_15));
    g_1017++;
    return l_992;
}
static int32_t func_4(uint16_t p_5, const uint16_t p_6, uint16_t p_7, uint32_t p_8, uint8_t p_9)
{
    int32_t l_1011 = 0x9E67C7FC;
    int32_t l_1012 = 0x5821C327;
    l_1012 = ((g_160 || (g_341 <= (safe_add_func_int32_t_s_s(p_7, (((safe_mod_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s((safe_sub_func_uint32_t_u_u(((safe_rshift_func_int8_t_s_s(g_739, 1)) | ((p_9 , (4 >= ((0U < (((((g_416 , l_1011) && 0x6D267BD4) ^ 0x570C6671) || p_8) & p_9)) && g_738))) & l_1011)), p_9)), 7)), g_742)) == 0x7F9ED6D2) <= g_737))))) ^ g_62);
    return p_7;
}
static uint16_t func_10(int32_t p_11, int16_t p_12, uint8_t p_13)
{
    uint32_t l_22 = 0x89BDD777;
    const uint32_t l_27 = 0xCC511EC1;
    int32_t l_991 = 0x4E2E0DF6;
    l_991 = (((func_16(((safe_mod_func_int8_t_s_s((p_11 == (safe_mod_func_uint8_t_u_u((((((((-2) || l_22) <= 0x168F) , (((safe_sub_func_int32_t_s_s((safe_mod_func_int16_t_s_s(g_14, (-5))), p_12)) != (0 >= l_22)) >= l_22)) | 0x02268F62) <= l_22) <= g_14), g_14))), l_27)) < p_11)) || p_12) & 0U) ^ 1U);
    l_991 = l_22;
    return l_991;
}
static uint32_t func_16(const uint32_t p_17)
{
    uint16_t l_37 = 0x9773;
    int32_t l_761 = (-7);
    uint8_t l_800 = 0U;
    int32_t l_827 = 1;
    int32_t l_828 = 0xF216ECE1;
    int32_t l_840 = 0xFA29BF89;
    int32_t l_847 = 0xCFCF372A;
    int32_t l_848 = 0;
    uint16_t l_956 = 0xACCA;
    l_761 &= (safe_sub_func_int8_t_s_s(((g_14 == (0xE55B65AB != (safe_mod_func_int32_t_s_s(func_32((g_14 | ((0xE41B & ((func_35((0xFE || l_37)) , ((l_37 , ((p_17 && 0x0C) && g_425)) , 0)) || g_410)) || l_37)), l_37), l_37)))) , g_181), 0x14));
    for (g_62 = (-29); (g_62 == 25); g_62++)
    {
        int8_t l_776 = 0x57;
        const int32_t l_793 = (-1);
        int32_t l_826 = 3;
        int32_t l_829 = 0x99078D1F;
        int32_t l_833 = 0x6182E7B2;
        int32_t l_837 = (-1);
        int32_t l_838 = 1;
        int32_t l_844 = 0x7D6B0006;
        int32_t l_845 = 0xBB6D4EFF;
        int32_t l_846 = 1;
        int32_t l_852 = (-10);
        uint16_t l_873 = 0U;
        if (p_17)
        {
            int16_t l_794 = 8;
            g_181 = ((safe_rshift_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((safe_mod_func_int16_t_s_s(g_160, (((safe_rshift_func_uint8_t_u_s((((g_739 , (safe_add_func_int8_t_s_s((-1), (l_776 <= (g_414 == (safe_rshift_func_int8_t_s_u(g_410, (g_418 & (safe_rshift_func_uint8_t_u_s((safe_add_func_uint8_t_u_u((safe_unary_minus_func_uint16_t_u(((((safe_sub_func_uint32_t_u_u(((((p_17 && ((safe_add_func_int8_t_s_s(((safe_add_func_int16_t_s_s(((((safe_lshift_func_int16_t_s_u((g_181 || g_792), p_17)) ^ 4294967286U) <= p_17) ^ g_738), 0xD629)) ^ l_776), g_739)) , l_793)) > l_794) >= l_37) & p_17), p_17)) <= 0x45E6) || 0) <= g_418))), 0x35)), p_17)))))))))) > g_792) == p_17), 1)) | 0U) , g_65))), 4)), 0)), g_585)) , 4);
            g_181 ^= ((safe_add_func_uint32_t_u_u(((g_155 != 0x0D) != ((~(g_14 > 65527U)) != ((((((((safe_lshift_func_int8_t_s_u(p_17, (0x0663 > (0x54153A97 ^ l_794)))) <= l_37) | g_90) ^ 0x422F056A) , 0x49C5) && 65535U) > g_341) < (-1)))), g_620)) , 0xF31D2603);
        }
        else
        {
            uint8_t l_810 = 8U;
            int32_t l_811 = 0;
            int8_t l_831 = 0x2B;
            int32_t l_832 = 0x8F45BC19;
            int32_t l_834 = 0x355E8F43;
            int32_t l_835 = 1;
            int32_t l_836 = 0x5477E608;
            int32_t l_842 = 1;
            int32_t l_849 = 0x4E0D5435;
            int32_t l_850 = (-1);
            int16_t l_943 = 0x5F49;
            l_811 = (((((((l_800 > (safe_lshift_func_uint8_t_u_s(p_17, 2))) , l_776) , ((g_585 || (~0xA81F)) | ((safe_sub_func_uint8_t_u_u((((safe_lshift_func_int8_t_s_u((g_738 == g_792), (((safe_sub_func_int32_t_s_s((0x7B4B | l_810), g_620)) && (-7)) & (-1)))) | p_17) <= g_585), l_810)) != l_776))) >= g_90) , 65526U) , l_810) <= 7U);
            if ((safe_rshift_func_int16_t_s_u((0x5918 ^ (g_413 || ((+(safe_rshift_func_int8_t_s_u((g_742 != p_17), 1))) | ((safe_mod_func_int8_t_s_s(((safe_add_func_int16_t_s_s(l_776, p_17)) & g_425), (((9 < ((safe_lshift_func_int8_t_s_s(((safe_mod_func_uint8_t_u_u((((((1 || p_17) >= p_17) != p_17) | l_810) , p_17), 0x4A)) != 65535U), 2)) || g_792)) != 5U) && g_153))) , p_17)))), p_17)))
            {
                int16_t l_825 = 0x50F5;
                int32_t l_830 = (-9);
                int32_t l_839 = (-2);
                int32_t l_843 = 8;
                --g_853;
                if ((8 ^ g_404))
                {
                    int32_t l_858 = 0xD0D4E049;
                    int32_t l_874 = 0;
                    for (g_585 = (-20); (g_585 > 33); ++g_585)
                    {
                        uint16_t l_859 = 0x7F29;
                        l_859++;
                        return g_738;
                    }
                    l_874 = ((g_160 && (~0x29F9B49B)) >= (safe_sub_func_int16_t_s_s(((0x0E04 | (0x5A6D & ((((safe_mod_func_uint32_t_u_u((safe_mod_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s((l_843 ^ (0x4A94 <= g_737)), 11)), 0x2CF60341)), ((((safe_mod_func_uint32_t_u_u((p_17 != (-4)), 0x8F8B428D)) == 0) , 0) | l_873))) || g_413) & g_745) , p_17))) < p_17), 5U)));
                    for (l_852 = (-18); (l_852 >= (-21)); --l_852)
                    {
                        const int32_t l_906 = 0x43018C0B;
                        l_849 = ((safe_lshift_func_int8_t_s_s(((((l_858 | (safe_add_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_s((safe_lshift_func_int16_t_s_u(((p_17 <= ((safe_rshift_func_uint8_t_u_u(g_414, 6)) , (safe_add_func_int16_t_s_s(0x2882, ((safe_unary_minus_func_int8_t_s(((safe_sub_func_uint8_t_u_u(g_853, ((safe_add_func_int16_t_s_s((safe_add_func_uint16_t_u_u(((safe_add_func_int32_t_s_s(((safe_mod_func_uint8_t_u_u((((((((((p_17 > p_17) > (safe_mod_func_int16_t_s_s(((safe_add_func_uint32_t_u_u(l_793, (safe_mod_func_int32_t_s_s(g_65, 2)))) , l_906), 0x5639))) < g_160) || l_825) <= p_17) > g_745) & g_735) , p_17) && p_17), 0x8B)) != 255U), l_825)) && g_14), 2)), 0xC7CE)) , p_17))) ^ g_853))) < g_735))))) ^ 0x00), 1)), g_416)) , l_834), l_825))) ^ p_17) <= p_17) | 0x18B9ABAA), l_833)) , p_17);
                    }
                }
                else
                {
                    if ((safe_add_func_int32_t_s_s((safe_add_func_uint8_t_u_u((g_62 ^ (safe_unary_minus_func_uint8_t_u((((0xC4 | 0) & (((safe_rshift_func_uint8_t_u_s((g_341 <= p_17), 5)) , (safe_lshift_func_uint8_t_u_u((((((((1U || ((safe_add_func_int16_t_s_s(p_17, (((p_17 <= (safe_add_func_int32_t_s_s(((p_17 && g_62) < 4294967292U), g_409))) , g_414) == g_181))) >= p_17)) , p_17) | 0x4B6C8AE2) && 4294967295U) ^ l_837) == 0xA1E1B71E) != 6), 5))) ^ l_833)) & 7U)))), 0x36)), g_14)))
                    {
                        int8_t l_942 = 0x84;
                        l_830 = p_17;
                        g_738 = (safe_sub_func_uint16_t_u_u(((((safe_lshift_func_int8_t_s_s(((safe_sub_func_int32_t_s_s((p_17 != ((((g_414 && ((safe_lshift_func_uint8_t_u_s((l_843 <= (safe_lshift_func_int8_t_s_s((p_17 ^ (safe_add_func_int16_t_s_s(l_844, p_17))), (safe_sub_func_int8_t_s_s((((safe_add_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((safe_mod_func_int16_t_s_s(l_839, ((safe_lshift_func_int8_t_s_u((l_942 < 0x955C), 3)) & 0x65CD))), p_17)), g_742)) , p_17) ^ p_17), g_153))))), 2)) != 0xD063B484)) , g_745) <= 7U) , l_37)), g_841)) ^ 1U), g_841)) || 1U) && p_17) | l_832), 0x1B8E));
                    }
                    else
                    {
                        g_181 = 3;
                        return l_943;
                    }
                    if (p_17)
                        break;
                }
            }
            else
            {
                uint32_t l_955 = 0U;
                l_847 = (safe_lshift_func_uint8_t_u_s((0 != (l_846 ^ (safe_sub_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((((safe_unary_minus_func_int8_t_s(((safe_lshift_func_int8_t_s_u(((((l_842 || 0U) >= (safe_mod_func_int32_t_s_s(l_955, p_17))) > ((((g_737 , (l_838 | (g_745 < 0x99))) < l_956) == l_793) >= g_416)) || g_155), 2)) == 1U))) ^ 4294967290U) > l_800), 0)), p_17)))), 5));
                g_416 = (safe_add_func_int32_t_s_s(((0xFA | (((safe_mod_func_int16_t_s_s((-1), ((safe_rshift_func_uint8_t_u_u(((-1) ^ (p_17 > (safe_add_func_int32_t_s_s(((safe_rshift_func_int16_t_s_u((safe_add_func_int8_t_s_s((l_955 , (p_17 , (((((l_840 == (safe_add_func_int32_t_s_s((+p_17), (safe_sub_func_int8_t_s_s(((l_828 & 0x05EA) <= g_413), (-2)))))) ^ p_17) >= g_735) && g_620) || l_800))), p_17)), 5)) , p_17), g_414)))), 5)) , 0xB550))) , p_17) && 0)) <= g_841), l_955));
                for (g_745 = 0; (g_745 < 19); g_745 = safe_add_func_int32_t_s_s(g_745, 8))
                {
                    uint32_t l_990 = 1U;
                    g_416 = ((safe_rshift_func_int16_t_s_u((g_425 || (((g_90 >= (safe_rshift_func_uint16_t_u_s(65535U, 10))) , (0xFE15 == ((((((safe_lshift_func_uint8_t_u_s(((((((safe_mod_func_int8_t_s_s((((((((safe_add_func_int32_t_s_s((l_943 != 0), (((safe_lshift_func_int16_t_s_s(((-1) < (((((((0 == 0U) || 7) ^ g_62) == 255U) < g_738) != l_955) != l_835)), 6)) != p_17) & g_737))) , g_14) != g_341) & g_136) && p_17) , g_851) , l_827), p_17)) <= 0x96BE) || g_65) || 0x24) & p_17) <= g_585), g_181)) > p_17) && l_990) >= 0x2C11) , g_414) != g_410))) <= l_832)), 8)) <= (-3));
                }
            }
            l_832 = l_850;
        }
    }
    return l_956;
}
static int32_t func_32(int8_t p_33, uint32_t p_34)
{
    int16_t l_760 = (-1);
    g_416 |= (0x2F != (safe_lshift_func_int8_t_s_s((p_34 >= g_90), 2)));
    l_760 = (0 <= p_33);
    return g_160;
}
static uint8_t func_35(uint8_t p_36)
{
    int32_t l_38 = (-8);
    uint8_t l_55 = 0U;
    int8_t l_331 = (-1);
    int32_t l_412 = 0;
    int32_t l_417 = 0xB5FE0EA1;
    int16_t l_439 = 0xDD22;
    int8_t l_502 = 0x07;
    int8_t l_522 = 0x30;
    uint8_t l_607 = 0x12;
    int32_t l_635 = 4;
    int32_t l_743 = 0xEF292DE6;
    int32_t l_746 = 0xC2AA728D;
    l_38 = ((l_38 != ((safe_lshift_func_int8_t_s_s(((0xFE96 && func_41(func_45(p_36, (((func_49(l_55, ((3 || (safe_sub_func_uint16_t_u_u((((safe_rshift_func_int8_t_s_u(0x83, 4)) > l_55) == p_36), ((safe_add_func_int32_t_s_s(l_55, 0x5D55A9D4)) ^ l_38)))) , p_36), l_55, l_38, p_36) & g_14) || 0xC0) , 0U), g_62), g_62, g_62)) && l_55), 2)) , 0x1A)) , p_36);
    g_181 = g_181;
    for (g_90 = (-13); (g_90 > 1); g_90 = safe_add_func_uint16_t_u_u(g_90, 2))
    {
        int16_t l_298 = 0xE405;
        uint32_t l_329 = 0x3DFED907;
        const int32_t l_330 = (-1);
        int32_t l_520 = 0x3E69EFEE;
        int32_t l_740 = (-1);
        int32_t l_741 = (-1);
        int32_t l_744 = 5;
        uint8_t l_755 = 0x9D;
        if (g_181)
        {
            uint32_t l_299 = 4294967295U;
            int32_t l_342 = 0;
            --l_299;
            for (l_298 = 19; (l_298 >= (-9)); l_298--)
            {
                int8_t l_309 = 0x82;
                l_38 = (0 || (((safe_add_func_uint32_t_u_u((l_299 && (((0x3B6AD0AE & (safe_lshift_func_uint8_t_u_u(((((((safe_unary_minus_func_uint16_t_u(((l_309 <= (safe_lshift_func_uint16_t_u_u((g_160 ^ (((g_155 >= ((safe_lshift_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(((9 & (safe_sub_func_uint32_t_u_u((((safe_mod_func_int16_t_s_s(0x890B, ((safe_sub_func_uint16_t_u_u((((((safe_lshift_func_int8_t_s_u((+(safe_lshift_func_int16_t_s_s((((safe_rshift_func_int8_t_s_u(0x96, 6)) == g_181) & p_36), g_62))), 6)) & l_329) > l_309) & l_309) < 0x3F9A), l_298)) && p_36))) || g_181) , l_299), p_36))) , 0xA6), 0xAB)), g_160)) , g_160)) >= g_155) , 0xC54C5F1A)), 0))) ^ g_62))) < 255U) != p_36) <= g_14) == l_330) & 0x054550EC), 1))) == l_331) || 6U)), p_36)) >= p_36) , g_62));
            }
            l_342 &= (safe_add_func_uint16_t_u_u(0x6B5A, (safe_sub_func_int32_t_s_s(((((((((safe_lshift_func_uint8_t_u_s((4294967294U > g_181), p_36)) && ((g_65 , (l_299 < (0U >= ((safe_unary_minus_func_int16_t_s(((safe_rshift_func_uint16_t_u_s(((((p_36 || (g_90 >= p_36)) >= g_65) & p_36) & p_36), l_331)) | g_341))) | l_55)))) , g_153)) || g_341) <= p_36) >= p_36) | l_331) ^ l_38) && g_65), g_181))));
            if (l_299)
                break;
        }
        else
        {
            uint32_t l_343 = 4294967294U;
            int32_t l_405 = 0x98C2746B;
            int32_t l_421 = 0x746449A1;
            int16_t l_552 = 0x5990;
            int32_t l_584 = 0xA1DDBE43;
            int32_t l_747 = 0x51C9EA3F;
            uint32_t l_748 = 0xE2A152F6;
            if (l_343)
            {
                int16_t l_358 = 0x86F3;
                int32_t l_403 = 0xBC03DAD8;
                int32_t l_422 = 1;
                int32_t l_423 = (-1);
                int32_t l_424 = 4;
                int32_t l_428 = 0;
                if ((safe_rshift_func_uint8_t_u_s(((((((safe_mod_func_int16_t_s_s((((safe_add_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_u((safe_mod_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(l_358, 0)), (safe_sub_func_int8_t_s_s(((((((safe_sub_func_int16_t_s_s((g_90 && l_38), ((safe_rshift_func_uint8_t_u_u((g_160 , (p_36 | ((((((((safe_rshift_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(p_36, g_14)), 1)) && ((((((safe_rshift_func_uint16_t_u_s(l_330, (l_343 && 0U))) < 0xC3) != l_38) < 0x855B) , l_343) , l_343)) & 0xF3) , g_90) , l_331) > l_55) <= 0xFF8A4D87) , g_341))), l_298)) , p_36))) > g_90) != g_14) <= 0x179B) && g_14) && p_36), g_153)))), 2)) & p_36), g_181)), g_90)) || p_36) , 1), l_55)) || g_160) < l_331) | 0xE6AA0FA1) > g_62) <= 0xF09A), l_343)))
                {
                    int32_t l_371 = 0xD9F60875;
                    if (l_371)
                        break;
                }
                else
                {
                    const int32_t l_381 = 0xF04F6DF0;
                    int32_t l_382 = 0x3979143F;
                    if ((safe_sub_func_uint8_t_u_u((((+((safe_lshift_func_uint8_t_u_u((((safe_sub_func_uint32_t_u_u(g_90, 0x98D323A3)) | g_136) & ((g_341 | (safe_rshift_func_int8_t_s_s(0x6F, 1))) == p_36)), l_298)) , g_14)) , l_343) ^ l_331), (-1))))
                    {
                        uint32_t l_393 = 4U;
                        l_382 = l_381;
                        g_181 |= ((g_65 || (safe_sub_func_uint8_t_u_u((((safe_add_func_int16_t_s_s(l_298, ((p_36 && ((safe_mod_func_int8_t_s_s((safe_add_func_uint16_t_u_u((((safe_sub_func_int8_t_s_s(g_160, ((l_393 || (+g_341)) && (((((safe_add_func_uint32_t_u_u(((((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(((l_381 , (safe_mod_func_int32_t_s_s(l_55, p_36))) >= 1U), 2)), g_153)) ^ 0x07) , p_36) >= p_36), l_393)) > p_36) >= l_343) , g_136) , 0x53B0)))) <= g_62) , p_36), l_329)), p_36)) , 3)) | l_343))) || p_36) , l_393), g_160))) <= l_382);
                        if (l_382)
                            continue;
                        g_181 = (p_36 , 0x7613CF34);
                    }
                    else
                    {
                        int16_t l_406 = (-4);
                        int32_t l_407 = 8;
                        int32_t l_408 = (-2);
                        int32_t l_411 = 0xDBD0332F;
                        int32_t l_415 = 1;
                        --g_418;
                        return p_36;
                    }
                    --g_425;
                    if (l_55)
                        continue;
                }
                if (p_36)
                {
                    uint8_t l_466 = 7U;
                    uint32_t l_486 = 0xFED1FCF9;
                    uint32_t l_521 = 0x81EB192F;
                    int32_t l_559 = 1;
                    if (l_428)
                    {
                        g_181 = (-9);
                        return p_36;
                    }
                    else
                    {
                        if (p_36)
                            break;
                    }
                    if (((safe_lshift_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_u((((safe_lshift_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(((((safe_rshift_func_uint8_t_u_s(l_439, 1)) == (safe_mod_func_int8_t_s_s(((l_439 <= ((p_36 && (safe_lshift_func_int8_t_s_s((safe_add_func_uint16_t_u_u(((+(((safe_add_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((safe_sub_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(g_341, ((safe_unary_minus_func_uint32_t_u(g_136)) < (safe_sub_func_int8_t_s_s((((safe_sub_func_uint16_t_u_u((((safe_rshift_func_uint8_t_u_u(g_414, p_36)) , ((safe_mod_func_int32_t_s_s(g_153, (p_36 && p_36))) , p_36)) & l_330), p_36)) >= 0xAFC6B86D) >= 0xA2C6), g_14))))), 0x10)), 6)), 0xE432)), l_329)) > 0xA9C8) , 9)) > l_405), 0U)), 1))) < p_36)) & (-1)), 0x35))) | l_466) , g_416), p_36)), l_403)) ^ g_425) < (-9)), 3)) && p_36), 12)) ^ p_36))
                    {
                        int16_t l_474 = (-1);
                        g_181 ^= ((safe_mod_func_uint32_t_u_u((safe_sub_func_int8_t_s_s(l_38, ((((~((p_36 < (((safe_add_func_int32_t_s_s((0xC1B61811 ^ l_474), (safe_sub_func_int8_t_s_s((-5), (l_329 , g_416))))) > l_428) <= ((safe_mod_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s((safe_add_func_int8_t_s_s(((safe_sub_func_int16_t_s_s((!g_341), 0)) <= 0x8041), 0x01)), 3)), 0x98)) || g_416))) >= 1)) > (-1)) > 9) , 0x2B))), l_298)) >= l_466);
                        l_38 = (0xED091B64 <= (p_36 > l_358));
                        l_486--;
                        g_416 |= (((p_36 & (l_474 & l_486)) | (!(-1))) || 1);
                    }
                    else
                    {
                        l_502 = ((((safe_mod_func_int8_t_s_s(p_36, p_36)) || (safe_mod_func_int16_t_s_s((((((p_36 & l_412) > (0xB5808187 >= (safe_add_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((safe_add_func_uint16_t_u_u(65535U, ((((((safe_lshift_func_uint8_t_u_s((l_422 <= (0 && (((((g_136 >= g_14) <= 0xA5EC) , l_329) , l_331) <= g_418))), 2)) , g_410) >= g_409) ^ g_65) < g_14) && 0U))), 1)), g_413)))) == 7) != p_36) < l_423), p_36))) != g_155) | l_417);
                        l_421 = 0x2E3A9FBF;
                    }
                    if ((g_425 < (safe_add_func_int16_t_s_s((0xDFD1 != (safe_sub_func_int32_t_s_s((safe_sub_func_uint32_t_u_u(((safe_rshift_func_uint8_t_u_s(((p_36 ^ l_502) ^ (((l_466 , g_410) <= (((safe_lshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(((safe_rshift_func_int8_t_s_s((l_421 < (((((safe_rshift_func_uint16_t_u_s(l_405, 8)) && (~1)) | 0x0B) | l_520) > 0)), l_405)) != 0x3943D29F), p_36)), 6)) & l_521) > g_181)) >= 0x78)), g_414)) , l_343), p_36)), l_405))), l_522))))
                    {
                        const uint8_t l_547 = 0xB6;
                        uint32_t l_558 = 0x6E8A7337;
                        int8_t l_583 = 1;
                        g_416 |= ((safe_add_func_uint8_t_u_u((((safe_mod_func_uint32_t_u_u(((safe_sub_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u(((safe_sub_func_int16_t_s_s(p_36, l_329)) <= (safe_rshift_func_uint8_t_u_s((safe_add_func_int8_t_s_s((safe_sub_func_int32_t_s_s((g_341 == (safe_rshift_func_uint16_t_u_s((safe_add_func_int8_t_s_s(((l_417 < (g_153 & (safe_add_func_int8_t_s_s(((l_520 > ((l_298 , 9) != (safe_rshift_func_uint8_t_u_s(0x8D, p_36)))) != p_36), 0x50)))) < g_62), l_421)), g_155))), p_36)), p_36)), 0))), p_36)), 1U)) && p_36), g_414)) != 0) | 0x4CCF5BBF), p_36)) || l_547);
                        l_559 = ((safe_sub_func_uint32_t_u_u(g_62, l_502)) != ((((((safe_lshift_func_int16_t_s_s((-1), 0)) & l_552) == ((safe_mod_func_uint8_t_u_u(((p_36 <= g_160) >= (!l_558)), l_422)) | g_425)) == 1U) , l_330) ^ l_502));
                        l_412 = (((+0xB90D) != (safe_sub_func_uint32_t_u_u((l_502 == (safe_add_func_int16_t_s_s((safe_sub_func_int32_t_s_s(0x6B561A88, ((((((safe_unary_minus_func_uint8_t_u(((safe_mod_func_int16_t_s_s((l_423 == ((((safe_lshift_func_uint8_t_u_u((!(((7 <= p_36) , ((((((((safe_lshift_func_int8_t_s_s((p_36 ^ (g_410 & ((safe_lshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(((((((((safe_mod_func_uint32_t_u_u(((safe_sub_func_int32_t_s_s(((((-1) > l_583) == 0U) || g_418), 4U)) , g_155), l_558)) & p_36) ^ l_521) <= 1U) <= p_36) <= 0xEF04) , 0x0458) > g_341), l_329)), 5)) >= g_160))), 1)) | 1) & p_36) , l_330) == l_439) , 0U) , 0x99B8) | p_36)) , p_36)), l_584)) <= 0xDE) , p_36) , 1U)), g_14)) && 0x81))) | (-7)) != l_358) <= 0) & g_585) || 4294967295U))), g_414))), l_486))) > p_36);
                    }
                    else
                    {
                        uint16_t l_596 = 0xFA71;
                        l_596 &= (((((+(((p_36 > (safe_mod_func_int16_t_s_s(7, (-9)))) <= (safe_sub_func_int32_t_s_s((((g_181 , l_330) ^ (((~(safe_add_func_int16_t_s_s((((safe_add_func_uint8_t_u_u(0xA9, l_403)) | ((9 > (p_36 && 6)) > 1U)) <= l_520), p_36))) ^ 0x3163A038) > l_405)) < g_585), g_160))) <= l_403)) > g_181) || g_410) <= g_585) & g_62);
                    }
                    l_412 = (safe_mod_func_int8_t_s_s(((safe_add_func_int8_t_s_s(g_585, (safe_sub_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u((((safe_rshift_func_int8_t_s_u(g_404, l_607)) & (p_36 < ((safe_add_func_int8_t_s_s(((safe_mod_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(((-1) & ((safe_rshift_func_uint16_t_u_s(65528U, (safe_add_func_uint32_t_u_u(0x87853086, (p_36 == ((safe_lshift_func_int8_t_s_s((p_36 <= l_421), 4)) != 0U)))))) && p_36)), l_330)), l_403)) & g_160), l_38)) ^ 0xF816B16B))) < p_36), p_36)), p_36)))) != l_403), g_155));
                }
                else
                {
                    uint16_t l_623 = 0U;
                    ++g_620;
                    if (l_623)
                        break;
                }
                for (l_607 = 0; (l_607 != 29); ++l_607)
                {
                    int16_t l_630 = 0x8C47;
                    l_38 |= (((((safe_lshift_func_uint8_t_u_s((((safe_mod_func_int16_t_s_s(p_36, (l_630 | (safe_rshift_func_uint8_t_u_s(((safe_lshift_func_uint8_t_u_s((((((7 > (g_585 , l_421)) < l_439) == (l_635 == (safe_mod_func_uint8_t_u_u(g_418, (l_552 , 6U))))) < g_155) & g_65), g_14)) < p_36), p_36))))) || l_330) , 0x8E), g_65)) ^ 0xFA146107) > l_630) >= 254U) , p_36);
                    l_405 = (((((safe_add_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((+(safe_mod_func_uint16_t_u_u((((g_418 >= ((safe_add_func_uint32_t_u_u((g_409 != p_36), ((safe_sub_func_uint8_t_u_u(((((safe_unary_minus_func_int16_t_s(g_409)) >= ((safe_lshift_func_int16_t_s_u((safe_mod_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(l_635, (safe_lshift_func_uint16_t_u_s((p_36 < (safe_unary_minus_func_int8_t_s(p_36))), (safe_unary_minus_func_int32_t_s(p_36)))))), (safe_mod_func_uint32_t_u_u(((((safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s(p_36, 1)), 7)) <= 4294967295U) , p_36) ^ 0x844ACF88), (-9))))), g_416)), p_36)) && 0xF1DC)) > g_418) > p_36), g_414)) < 0x5A))) , 0x47)) ^ g_341) == 0x35), 65535U))), 0x0F)), p_36)) <= p_36) ^ g_425) , 0x19FE) == l_428);
                }
            }
            else
            {
                int32_t l_668 = 0x3F0FC6BA;
                int32_t l_687 = 0x84D06275;
                if ((l_668 | (safe_mod_func_uint8_t_u_u((safe_add_func_int16_t_s_s((l_405 ^ l_55), g_425)), 0x61))))
                {
                    int32_t l_673 = 0;
                    l_673 = (-6);
                }
                else
                {
                    int32_t l_686 = 1;
                    int32_t l_690 = 0x863BA7BF;
                    int32_t l_691 = 0x73A02E53;
                    g_181 = (safe_lshift_func_uint8_t_u_u(l_343, 2));
                    l_687 &= (safe_lshift_func_int8_t_s_u((((safe_sub_func_uint16_t_u_u(((((safe_add_func_uint16_t_u_u(g_341, ((g_62 || (safe_lshift_func_int16_t_s_u(((l_668 && (p_36 < (p_36 & ((((safe_mod_func_int32_t_s_s(((((((p_36 , l_329) ^ (l_686 <= (((((l_439 | p_36) >= g_414) & l_668) | l_584) || p_36))) , 6) , l_298) < 4294967290U) ^ p_36), g_410)) <= p_36) <= 7) && p_36)))) >= 0), 6))) > g_418))) != p_36) ^ 4294967295U) == 0x53B8FED2), 1)) <= g_155) == 0), g_410));
                    for (g_620 = 29; (g_620 == 25); --g_620)
                    {
                        uint32_t l_692 = 1U;
                        int8_t l_695 = 0xFD;
                        --l_692;
                        l_695 = l_343;
                    }
                    if ((safe_sub_func_int16_t_s_s((((((l_690 | (-6)) <= (((g_136 , g_418) , (safe_rshift_func_int8_t_s_s(p_36, (p_36 | (safe_sub_func_int16_t_s_s(p_36, ((((safe_mod_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(((safe_mod_func_uint32_t_u_u(l_668, (safe_mod_func_int8_t_s_s((safe_mod_func_uint32_t_u_u(g_404, l_691)), l_343)))) < g_413), 6)), 0x2DF6)) || p_36) >= p_36) > 1))))))) , g_414)) > l_421) || l_687) <= p_36), l_520)))
                    {
                        uint32_t l_726 = 0x0687225E;
                        l_405 ^= (((safe_sub_func_int32_t_s_s(g_90, (safe_add_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((safe_add_func_int16_t_s_s(l_298, (safe_mod_func_uint8_t_u_u((((safe_add_func_int8_t_s_s((((p_36 > l_417) , (safe_rshift_func_uint8_t_u_s((l_726 && (p_36 ^ (safe_add_func_int16_t_s_s((safe_mod_func_int8_t_s_s(1, ((((safe_add_func_int32_t_s_s(p_36, (safe_sub_func_int8_t_s_s(l_584, l_668)))) , p_36) , 0xD249) , g_620))), g_409)))), 2))) , p_36), p_36)) < l_691) && p_36), 0x85)))), p_36)), p_36)))) , 0x13) < l_686);
                    }
                    else
                    {
                        return l_38;
                    }
                }
                g_181 = g_585;
            }
            --l_748;
            l_744 |= (0x0684 && ((safe_mod_func_uint32_t_u_u(((l_607 | 0U) & ((l_747 && (g_736 > 0U)) ^ (l_607 && (safe_add_func_int8_t_s_s((g_404 ^ (l_584 ^ p_36)), p_36))))), g_62)) == p_36));
        }
        l_755--;
    }
    return l_417;
}
static int16_t func_41(uint32_t p_42, int16_t p_43, uint32_t p_44)
{
    uint32_t l_69 = 6U;
    uint8_t l_151 = 0x2D;
    const uint32_t l_152 = 0x66BA4606;
    int32_t l_154 = 0x65527752;
    int32_t l_156 = 0;
    int32_t l_157 = (-8);
    int32_t l_158 = 1;
    int32_t l_159 = 0x17702E8E;
    int8_t l_179 = 0x8C;
    int32_t l_214 = 0x4F9474E0;
    uint32_t l_215 = 6U;
    uint32_t l_250 = 0U;
    int8_t l_251 = 0x25;
    int16_t l_292 = 0x6FED;
    uint16_t l_295 = 9U;
    if ((l_69 < (l_69 || ((((~(func_49(func_45((l_69 == (safe_rshift_func_int16_t_s_s(((safe_sub_func_int16_t_s_s(l_69, ((safe_sub_func_int8_t_s_s((safe_add_func_int8_t_s_s(((safe_sub_func_int16_t_s_s((-1), ((func_45(g_14, (((safe_sub_func_int16_t_s_s(((((safe_sub_func_int16_t_s_s((1U > (0x94 >= func_45((func_85((0 <= p_42), p_44, l_69, p_42) != g_65), l_151, g_65))), l_151)) , p_43) < 0x3BB2) <= g_65), l_69)) , g_136) , l_151), l_151) && p_44) && l_151))) & 0x3CEE), g_65)), p_43)) || g_62))) ^ p_42), l_152))), p_44, l_69), p_42, p_43, p_44, g_14) >= l_69)) , l_152) != l_152) && 0x1B12))))
    {
        g_153 = (p_44 && g_62);
        l_154 = 0x60DBC482;
    }
    else
    {
        int32_t l_180 = 4;
        int16_t l_208 = 5;
        int32_t l_233 = 0;
        g_160++;
        if ((((1U & ((((((g_62 & ((((safe_mod_func_int32_t_s_s((((l_156 <= (p_43 == (((safe_lshift_func_uint16_t_u_u((((((safe_sub_func_uint32_t_u_u((p_43 , ((((safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((((safe_add_func_int8_t_s_s((g_155 & (-6)), ((safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(7U, 11)), 2)) & (1 ^ 7)))) > g_65) >= l_179), 13)), p_42)) != 5U) ^ l_180) && g_181)), 0x9D39519D)) ^ 0xF23647BC) <= 0x807E) >= g_136) ^ 8), 4)) != l_180) <= l_180))) > 0x0C5E) | 0U), (-2))) >= g_65) || l_151) <= p_42)) == g_155) , p_42) <= p_44) < p_43) | 2U)) < p_44) >= 8U))
        {
            g_181 = (g_136 < (safe_add_func_int16_t_s_s(0xF160, p_44)));
        }
        else
        {
            uint8_t l_193 = 255U;
            int16_t l_199 = 3;
            int32_t l_200 = (-1);
            l_200 ^= (g_153 , (safe_mod_func_uint32_t_u_u((((((((safe_rshift_func_uint16_t_u_s(l_152, ((!(((safe_rshift_func_int16_t_s_u((((((1 || (g_14 == (safe_rshift_func_uint16_t_u_s(((p_44 , ((l_193 ^ g_136) == (safe_rshift_func_uint8_t_u_s((safe_add_func_int8_t_s_s(((~l_199) , g_181), p_42)), 0)))) , g_90), g_62)))) && 0xD7A9) && g_90) > 1U) , 0xC625), 3)) > g_136) , 7)) < p_44))) >= 0U) , l_199) > p_44) != 0xEF38) , g_153) ^ g_181), g_90)));
            g_181 = (((((-1) != ((((g_14 < ((((((((safe_add_func_uint16_t_u_u(((((((safe_add_func_int8_t_s_s((safe_add_func_int8_t_s_s((g_90 ^ (!((l_208 | ((!(g_14 > (safe_sub_func_int16_t_s_s((((((((safe_lshift_func_uint16_t_u_u(((l_214 && g_136) , g_160), (l_199 < 0x7D))) , l_152) ^ l_200) ^ g_181) , l_180) <= l_208) >= l_200), l_193)))) ^ p_44)) != (-8)))), p_43)), l_180)) < 0) | l_193) || 255U) > p_42) == p_44), 0x64E5)) < p_43) | l_199) & g_62) , l_215) <= 0x5953) ^ l_152) == 0x16)) ^ l_208) || g_153) & p_42)) > 0x93ED) <= p_44) < 4294967295U);
        }
        l_233 &= ((+((l_69 && (safe_sub_func_uint32_t_u_u(g_160, ((safe_rshift_func_int16_t_s_u(g_62, 8)) == (safe_rshift_func_uint16_t_u_u((l_179 || ((((safe_lshift_func_int16_t_s_s((((safe_add_func_uint8_t_u_u(((l_180 != ((((((((g_153 | (safe_add_func_uint32_t_u_u(p_42, ((safe_add_func_int8_t_s_s(3, ((((((safe_sub_func_int32_t_s_s((g_62 != p_43), g_62)) <= 0xB8) & g_90) , p_43) <= g_181) & 0xF0))) || p_44)))) & p_42) | g_181) == g_155) , l_214) , g_65) , 0x1F) & l_154)) , l_180), p_43)) ^ g_65) == 0x8B81), 14)) >= g_153) ^ g_136) >= 0xB838FA55)), 2)))))) ^ p_42)) != p_43);
    }
    l_251 |= (((safe_add_func_uint8_t_u_u((p_43 == (p_44 == 0x5B)), (safe_rshift_func_int8_t_s_s((((safe_lshift_func_int8_t_s_u((safe_add_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(((safe_mod_func_int32_t_s_s((-8), ((l_214 && ((safe_lshift_func_int16_t_s_s((0 && (safe_sub_func_int16_t_s_s((g_136 == 0x552EA11B), g_155))), 1)) | l_151)) || g_181))) ^ l_250), g_155)), l_151)), p_42)) , l_69) , g_181), 5)))) | g_136) > g_160);
    for (g_160 = (-4); (g_160 != 58); ++g_160)
    {
        uint32_t l_263 = 0xFF9A101D;
        l_157 = (6 && (safe_mod_func_int8_t_s_s((safe_mod_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u((+(p_44 | p_42)), 14)), (safe_lshift_func_uint8_t_u_u((((l_263 <= ((g_181 , (safe_add_func_int32_t_s_s((safe_lshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(((0x56C9CEF6 ^ ((safe_add_func_int16_t_s_s((((-3) | ((p_44 <= (safe_lshift_func_uint16_t_u_u((safe_add_func_int8_t_s_s((g_90 == l_263), 0x9A)), g_155))) >= 0x15CD3094)) | 0), l_158)) || 0xD8BC)) <= g_65), p_42)), 7)), 0x1DF76A9F))) >= g_90)) & g_62) >= p_43), l_263)))), l_263)));
        return g_90;
    }
    l_154 = ((safe_mod_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(((((safe_sub_func_int16_t_s_s((safe_sub_func_int16_t_s_s(0x6EDA, (((((safe_sub_func_int8_t_s_s(p_42, p_43)) , (p_44 || 0U)) != ((2 > (safe_sub_func_int8_t_s_s(((((65535U <= ((safe_mod_func_uint8_t_u_u(l_292, (safe_sub_func_int32_t_s_s(0x8C4744A5, 0x0CDF28E5)))) < (-1))) , l_157) < g_153) , 1), p_43))) < p_42)) , 0xBF90D258) | l_295))), g_160)) ^ l_251) || 0x81E83345) >= l_157), 65528U)), l_250)) || l_157);
    return p_43;
}
static uint32_t func_45(int32_t p_46, uint32_t p_47, int8_t p_48)
{
    int16_t l_68 = 1;
    l_68 = 0x83564F69;
    return g_62;
}
static uint32_t func_49(int8_t p_50, int16_t p_51, int32_t p_52, int8_t p_53, uint8_t p_54)
{
    int32_t l_63 = (-1);
    int32_t l_64 = 0x5AB8BF51;
    --g_65;
    return l_64;
}
static uint8_t func_85(int8_t p_86, uint8_t p_87, int32_t p_88, uint32_t p_89)
{
    int8_t l_99 = 5;
    int16_t l_148 = 0x0543;
    int32_t l_150 = 0x4DFAC948;
    g_90 = g_65;
    for (g_62 = (-10); (g_62 == 29); g_62++)
    {
        const uint32_t l_116 = 0x748AADD0;
        int32_t l_117 = 0x918DDDCD;
        l_117 ^= ((((p_86 < ((safe_rshift_func_int16_t_s_u((((safe_lshift_func_uint16_t_u_s(((safe_sub_func_int8_t_s_s(l_99, ((safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint16_t_u_u(((((safe_mod_func_uint16_t_u_u(((0x85E6 ^ 0xAC0F) <= (~(0xA0A0 <= ((safe_sub_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_s((!0x98ED), p_87)) , ((safe_lshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_u(((l_116 , g_90) , 0U), g_90)), g_14)) < p_88)), 0xBB7C)) != l_99)))), l_99)) & l_116) ^ 0U) < 0xD896), l_99)), 3)) > 4))) & 1), l_116)) <= g_62) || 65535U), g_14)) != l_99)) && g_62) >= (-1)) >= p_88);
        return g_14;
    }
    g_136 = ((safe_rshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((((safe_add_func_uint32_t_u_u(((safe_lshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((~(((((safe_rshift_func_uint16_t_u_u(65527U, 7)) < (l_99 >= 0x5C76)) | 0x6A) && (l_99 < (((((+0xEC) && (((safe_lshift_func_int16_t_s_u(l_99, (p_86 || (1U == g_65)))) == 1) & l_99)) > g_90) , l_99) | 1))) >= p_89)), 0)), 3)), 3)) != p_88), g_65)) < l_99) || p_88), l_99)), 13)) < l_99);
    l_150 = (((safe_sub_func_int16_t_s_s(p_87, (safe_rshift_func_int16_t_s_u((g_90 || ((safe_unary_minus_func_uint8_t_u((((safe_add_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s(p_86, 0)), 0xB3)) != 0xCBBE) && (safe_sub_func_int16_t_s_s(l_148, p_89))))) || ((p_86 != ((safe_unary_minus_func_uint32_t_u(p_87)) <= 0xC6319732)) >= g_90))), 7)))) | 9) >= p_89);
    return g_65;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_14;
    csmith_sink_ = g_62;
    csmith_sink_ = g_65;
    csmith_sink_ = g_90;
    csmith_sink_ = g_136;
    csmith_sink_ = g_153;
    csmith_sink_ = g_155;
    csmith_sink_ = g_160;
    csmith_sink_ = g_181;
    csmith_sink_ = g_341;
    csmith_sink_ = g_404;
    csmith_sink_ = g_409;
    csmith_sink_ = g_410;
    csmith_sink_ = g_413;
    csmith_sink_ = g_414;
    csmith_sink_ = g_416;
    csmith_sink_ = g_418;
    csmith_sink_ = g_425;
    csmith_sink_ = g_585;
    csmith_sink_ = g_620;
    csmith_sink_ = g_735;
    csmith_sink_ = g_736;
    csmith_sink_ = g_737;
    csmith_sink_ = g_738;
    csmith_sink_ = g_739;
    csmith_sink_ = g_742;
    csmith_sink_ = g_745;
    csmith_sink_ = g_792;
    csmith_sink_ = g_841;
    csmith_sink_ = g_851;
    csmith_sink_ = g_853;
    csmith_sink_ = g_1016;
    csmith_sink_ = g_1017;
    platform_main_end(0,0);
    return 0;
}
