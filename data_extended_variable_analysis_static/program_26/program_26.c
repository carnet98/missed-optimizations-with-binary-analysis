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
static int32_t g_15 = 0x95AE649FL;
static uint8_t g_22 = 0UL;
static const int32_t g_24 = 0xFEBFB2C4L;
static uint32_t g_28 = 0UL;
static const uint32_t g_41 = 4294967295UL;
static int32_t g_51 = (-1L);
static int16_t g_53 = (-1L);
static uint8_t g_98 = 255UL;
static int16_t g_101 = 0xDACAL;
static uint16_t g_103 = 9UL;
static uint32_t *g_107 = (void*)0;
static uint32_t **g_106 = &g_107;
static uint32_t g_136 = 0x257628AEL;
static uint8_t *g_171 = &g_22;
static int8_t g_173 = 0x79L;
static int32_t g_178 = (-3L);
static int32_t *g_207 = &g_51;
static int32_t **g_206 = &g_207;
static int32_t g_229 = 0x6E003A77L;
static uint16_t g_286 = 0xE87FL;
static uint16_t g_293 = 65535UL;
static uint32_t * const *g_304 = (void*)0;
static uint32_t * const **g_303 = &g_304;
static uint32_t * const ***g_302 = &g_303;
static uint16_t g_366 = 9UL;
static int32_t g_384 = (-1L);
static uint32_t g_588 = 4294967291UL;
static uint32_t ***g_663 = &g_106;
static uint32_t ****g_662 = &g_663;
static uint32_t *****g_661 = &g_662;
static uint8_t g_668 = 248UL;
static uint8_t **g_703 = &g_171;
static uint8_t ***g_702 = &g_703;
static uint8_t g_785 = 255UL;
static const uint8_t *g_807 = &g_22;
static const uint8_t **g_806 = &g_807;
static const uint8_t ***g_805 = &g_806;
static const uint8_t ****g_804 = &g_805;
static uint16_t g_847 = 0x3EEEL;
static int32_t * const * const *g_891 = (void*)0;
static int32_t * const * const **g_890 = &g_891;
static uint16_t func_1(void);
static const int32_t func_2(const int8_t p_3, int32_t p_4, uint32_t p_5, uint32_t p_6);
static uint16_t func_7(int8_t p_8, int32_t p_9);
inline static uint32_t func_10(int8_t p_11);
inline static int8_t func_18(uint8_t p_19, uint8_t p_20, int8_t p_21);
inline static int16_t func_31(uint32_t * p_32, uint32_t p_33, uint16_t p_34);
static uint32_t * func_35(uint32_t * p_36, const uint32_t * p_37, uint32_t p_38);
static const uint8_t func_63(uint8_t p_64, uint8_t p_65, uint8_t p_66, int16_t p_67, uint16_t p_68);
inline static uint32_t ** func_71(uint32_t * p_72, int32_t * p_73);
static int32_t * func_74(uint32_t ** p_75, int32_t p_76, uint8_t p_77, int32_t p_78);
static uint16_t func_1(void)
{
    uint8_t l_14 = 255UL;
    uint8_t l_26 = 1UL;
    uint32_t *l_27 = &g_28;
    const uint32_t *l_40 = &g_41;
    const uint32_t **l_39 = &l_40;
    int32_t *l_892 = &g_384;
    (*l_892) = func_2((0x167FL >= func_7((func_10((safe_sub_func_uint8_t_u_u((g_15 = l_14), (((safe_lshift_func_int8_t_s_u(func_18(l_14, l_14, g_22), l_26)) == ((*l_27)--)) || func_18(((func_31(func_35(&g_28, ((*l_39) = &g_28), g_22), g_24, g_41) | l_26) == l_26), l_26, l_14))))) || l_14), l_26)), g_286, g_286, l_14);
    ((void) sizeof ((l_40 == &g_41 || l_40 == &g_28) ? 1 : 0), __extension__ ({ if (l_40 == &g_41 || l_40 == &g_28) ; else __assert_fail ("l_40 == &g_41 || l_40 == &g_28", "/tmp/tmpmmcl0g3o.c", 90, __extension__ __PRETTY_FUNCTION__); }));
    ((void) sizeof ((g_661 == 0 || g_661 == &g_662) ? 1 : 0), __extension__ ({ if (g_661 == 0 || g_661 == &g_662) ; else __assert_fail ("g_661 == 0 || g_661 == &g_662", "/tmp/tmpmmcl0g3o.c", 92, __extension__ __PRETTY_FUNCTION__); }));
    ((void) sizeof ((g_890 == 0 || g_890 == &g_891) ? 1 : 0), __extension__ ({ if (g_890 == 0 || g_890 == &g_891) ; else __assert_fail ("g_890 == 0 || g_890 == &g_891", "/tmp/tmpmmcl0g3o.c", 93, __extension__ __PRETTY_FUNCTION__); }));
    return (*l_892);
}
static const int32_t func_2(const int8_t p_3, int32_t p_4, uint32_t p_5, uint32_t p_6)
{
    uint32_t **l_593 = &g_107;
    int32_t *l_606 = &g_384;
    uint8_t **l_607 = &g_171;
    uint32_t l_665 = 0x24482857L;
    uint32_t l_685 = 9UL;
    uint32_t l_724 = 0x1F07B9D8L;
    uint32_t l_745 = 0x17F2254EL;
    int32_t l_774 = 8L;
    int32_t l_777 = 0x94AA813AL;
    int8_t *l_853 = &g_173;
    int8_t **l_852 = &l_853;
    uint32_t ***** const l_863 = &g_662;
    uint32_t *****l_864 = (void*)0;
lbl_813:
    (*g_206) = (void*)0;
    ((void) sizeof ((g_207 == 0) ? 1 : 0), __extension__ ({ if (g_207 == 0) ; else __assert_fail ("g_207 == 0", "/tmp/tmpmmcl0g3o.c", 121, __extension__ __PRETTY_FUNCTION__); }));
    for (g_293 = 2; (g_293 >= 60); g_293++)
    {
        uint32_t ***l_594 = (void*)0;
        int32_t l_595 = 1L;
        int32_t *l_599 = &g_384;
        int32_t **l_598 = &l_599;
        int32_t *l_601 = &g_15;
        int32_t **l_600 = &l_601;
        uint16_t *l_602 = (void*)0;
        uint16_t *l_603 = &g_286;
        uint8_t **l_608 = &g_171;
        int16_t *l_609 = (void*)0;
        int16_t *l_610 = &g_101;
        int16_t *l_611 = &g_53;
        int32_t *l_627 = (void*)0;
        uint32_t ****l_659 = &l_594;
        uint32_t *****l_658 = &l_659;
        uint8_t l_743 = 0x3EL;
        int8_t *l_790 = &g_173;
        uint8_t ****l_812 = (void*)0;
        int32_t l_829 = 0x75E25686L;
        int32_t * const * const **l_889 = (void*)0;
        (*l_600) = l_606;
        ((void) sizeof ((l_601 == &g_384) ? 1 : 0), __extension__ ({ if (l_601 == &g_384) ; else __assert_fail ("l_601 == &g_384", "/tmp/tmpmmcl0g3o.c", 146, __extension__ __PRETTY_FUNCTION__); }));
        if ((0UL | ((l_607 != l_608) == ((*l_611) = ((*l_610) ^= (0x42E5L || g_24))))))
        {
            uint16_t l_612 = 6UL;
            int8_t *l_626 = &g_173;
            const int32_t *l_678 = &g_24;
            const int32_t **l_677 = &l_678;
            const int32_t *** const l_676 = &l_677;
            uint32_t **l_704 = &g_107;
            int32_t l_705 = (-6L);
            if (((((l_612 || (safe_lshift_func_int16_t_s_u(((g_173 = (g_22 <= (safe_mod_func_uint32_t_u_u((safe_rshift_func_int8_t_s_s((g_229 == g_22), 6)), p_4)))) && (safe_add_func_uint16_t_u_u(((~g_51) | p_3), (safe_sub_func_uint32_t_u_u((((safe_mod_func_uint16_t_u_u((((*l_626) = (*l_606)) | g_24), p_4)) > l_612) >= l_612), p_6))))), 4))) & 1UL) <= 0xEAD5L) <= p_5))
            {
                int32_t l_628 = 0L;
                int32_t *l_629 = (void*)0;
                int32_t *l_630 = (void*)0;
                int32_t *l_631 = &g_51;
                uint32_t **l_636 = (void*)0;
                uint32_t *****l_660 = &l_659;
                (*l_600) = &l_628;
                ((void) sizeof ((l_601 == &l_628) ? 1 : 0), __extension__ ({ if (l_601 == &l_628) ; else __assert_fail ("l_601 == &l_628", "/tmp/tmpmmcl0g3o.c", 166, __extension__ __PRETTY_FUNCTION__); }));
                for (g_384 = 11; (g_384 == (-8)); g_384 = safe_sub_func_uint8_t_u_u(g_384, 8))
                {
                    int8_t l_664 = 0xA9L;
                    (*l_601) = (safe_lshift_func_uint16_t_u_s((g_103 = (safe_lshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(((*l_626) &= (safe_rshift_func_uint16_t_u_s((safe_mul_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(((safe_mul_func_uint8_t_u_u((p_5 & (safe_mul_func_uint16_t_u_u((((**l_598) & g_98) & (~(safe_lshift_func_int8_t_s_s(g_366, 3)))), ((*l_611) |= (p_4 > 0L))))), (((l_658 != (g_661 = (l_660 = (void*)0))) & (((void*)0 != (*g_662)) > p_5)) == p_6))) > p_3), l_664)), l_612)), g_103))), l_665)), p_6))), 4));
                    ((void) sizeof ((g_661 == 0) ? 1 : 0), __extension__ ({ if (g_661 == 0) ; else __assert_fail ("g_661 == 0", "/tmp/tmpmmcl0g3o.c", 172, __extension__ __PRETTY_FUNCTION__); }));
                    ((void) sizeof ((l_660 == 0) ? 1 : 0), __extension__ ({ if (l_660 == 0) ; else __assert_fail ("l_660 == 0", "/tmp/tmpmmcl0g3o.c", 173, __extension__ __PRETTY_FUNCTION__); }));
                }
                ((void) sizeof ((l_660 == 0 || l_660 == &l_659) ? 1 : 0), __extension__ ({ if (l_660 == 0 || l_660 == &l_659) ; else __assert_fail ("l_660 == 0 || l_660 == &l_659", "/tmp/tmpmmcl0g3o.c", 176, __extension__ __PRETTY_FUNCTION__); }));
                (*l_606) |= (0UL < ((safe_mod_func_int32_t_s_s(0x20B1F872L, 0xB826F6BBL)) ^ ((((0xD3B9400AL && ((g_668 = ((*l_626) |= 1L)) || ((*g_171) = 0x53L))) | (+p_6)) && (p_6 > ((void*)0 == l_606))) | 0xA8378290L)));
                (*l_677) = (*l_677);
            }
            else
            {
                return p_3;
            }
            (**l_598) = ((safe_mod_func_int32_t_s_s(((***l_676) & l_685), (~(safe_lshift_func_int16_t_s_u(((*l_611) = ((safe_sub_func_uint16_t_u_u(((***l_676) && (safe_unary_minus_func_uint32_t_u((l_705 = ((((safe_rshift_func_int16_t_s_u((g_103 < 0x5963L), 6)) == ((safe_add_func_int32_t_s_s((safe_mod_func_uint32_t_u_u((safe_mul_func_int16_t_s_s(((((*g_171) = (g_702 != &l_608)) == 0x29L) || (((**g_662) = l_593) != l_704)), p_3)), (***l_676))), p_6)) < 0UL)) && p_3) <= (-4L)))))), 0x288BL)) == p_6)), p_4))))) <= p_3);
        }
        else
        {
            int32_t **l_715 = (void*)0;
            uint8_t ****l_719 = &g_702;
            uint32_t l_723 = 0x6DD470F2L;
            for (g_28 = 0; (g_28 < 52); g_28++)
            {
                int32_t l_714 = 0L;
                int8_t *l_716 = &g_173;
                uint8_t ****l_720 = (void*)0;
                (*l_601) = (l_606 == (*g_206));
                (*l_606) ^= (((--(**g_703)) > (p_4 | ((*l_716) &= (safe_sub_func_int32_t_s_s(((safe_mul_func_uint8_t_u_u(1UL, 1UL)) < l_714), (&g_207 == l_715)))))) < ((safe_add_func_uint32_t_u_u((l_719 != l_720), (safe_mul_func_int16_t_s_s(g_24, l_723)))) < g_229));
            }
        }
        if (((l_724 ^= (*l_606)) > (!((*l_606) <= p_5))))
        {
            uint32_t l_732 = 0x69C7B3D9L;
            int32_t l_736 = (-1L);
            (*l_606) = p_3;
            for (p_4 = 0; (p_4 != (-23)); --p_4)
            {
                int8_t l_746 = (-3L);
                int32_t l_747 = 0x57D1DE01L;
                uint8_t ****l_809 = &g_702;
                const int8_t *l_855 = &g_173;
                const int8_t **l_854 = &l_855;
                int32_t *l_862 = &l_774;
                for (g_229 = (-30); (g_229 >= (-13)); g_229 = safe_add_func_uint8_t_u_u(g_229, 4))
                {
                    uint32_t l_737 = 4294967288UL;
                    int32_t *l_748 = &l_736;
                    int32_t *l_749 = &l_595;
                    int32_t *l_750 = &g_384;
                    int32_t *l_751 = (void*)0;
                    int32_t *l_752 = &l_747;
                    int32_t *l_753 = &g_51;
                    int32_t *l_754 = &l_747;
                    int32_t *l_755 = &g_51;
                    int32_t *l_756 = &l_595;
                    int32_t *l_757 = &g_384;
                    int32_t *l_758 = (void*)0;
                    int32_t *l_759 = &l_736;
                    int32_t *l_760 = (void*)0;
                    int32_t *l_761 = &g_15;
                    int32_t *l_762 = (void*)0;
                    int32_t *l_763 = &l_736;
                    int32_t *l_764 = (void*)0;
                    int32_t *l_765 = &l_595;
                    int32_t *l_766 = &l_595;
                    int32_t *l_767 = &g_15;
                    int32_t *l_768 = &g_15;
                    int32_t *l_769 = &g_384;
                    int32_t *l_770 = &l_595;
                    int32_t *l_771 = &g_384;
                    int32_t *l_772 = &g_51;
                    int32_t *l_773 = &l_747;
                    int32_t *l_775 = &g_51;
                    int32_t *l_776 = &g_15;
                    int32_t *l_778 = &l_747;
                    int32_t *l_779 = (void*)0;
                    int32_t *l_780 = &g_51;
                    int32_t *l_781 = &l_747;
                    int32_t *l_782 = &g_384;
                    int32_t *l_783 = &g_51;
                    int32_t *l_784 = &g_15;
                    int8_t **l_791 = &l_790;
                    const uint8_t *****l_808 = &g_804;
                    uint8_t *****l_810 = (void*)0;
                    uint8_t *****l_811 = &l_809;
                    int32_t *l_820 = &l_777;
                    (*l_598) = (*l_598);
                    --g_785;
                    if (p_3)
                        continue;
                    if ((safe_sub_func_uint8_t_u_u((((*l_791) = l_790) == (void*)0), (safe_rshift_func_uint8_t_u_s(((*g_171) = (safe_lshift_func_int8_t_s_u((safe_add_func_uint16_t_u_u(((0x893185EAL < (safe_mul_func_int16_t_s_s(((void*)0 == &l_627), ((((((safe_add_func_int32_t_s_s((*l_606), (safe_mul_func_uint16_t_u_u((((*l_808) = g_804) != (l_812 = ((*l_811) = l_809))), (*l_599))))) == g_24) >= g_51) <= (*l_782)) | (*l_606)) >= l_732)))) && 0x2DE46391L), (**l_598))), 7))), 1)))))
                    {
                        if (g_24)
                            goto lbl_813;
                        (*l_600) = l_820;
                        ((void) sizeof ((l_601 == &l_777) ? 1 : 0), __extension__ ({ if (l_601 == &l_777) ; else __assert_fail ("l_601 == &l_777", "/tmp/tmpmmcl0g3o.c", 272, __extension__ __PRETTY_FUNCTION__); }));
                        if ((*l_606))
                            break;
                    }
                    else
                    {
                        const uint32_t l_821 = 0x8150A40FL;
                        return l_821;
                    }
                    ((void) sizeof ((l_601 == &l_777) ? 1 : 0), __extension__ ({ if (l_601 == &l_777) ; else __assert_fail ("l_601 == &l_777", "/tmp/tmpmmcl0g3o.c", 284, __extension__ __PRETTY_FUNCTION__); }));
                    ((void) sizeof ((l_812 == &g_702) ? 1 : 0), __extension__ ({ if (l_812 == &g_702) ; else __assert_fail ("l_812 == &g_702", "/tmp/tmpmmcl0g3o.c", 285, __extension__ __PRETTY_FUNCTION__); }));
                }
                (*l_606) |= (4294967295UL < (4294967295UL <= l_746));
                if ((l_732 == ((*l_606) |= ((p_6 > ((*l_603) = 0xE51DL)) && p_5))))
                {
                    if ((*l_606))
                        break;
                }
                else
                {
                    int32_t *l_822 = &g_51;
                    int32_t *l_823 = &g_229;
                    int32_t *l_824 = (void*)0;
                    int32_t l_825 = 0x8B23FD4FL;
                    int32_t *l_826 = &g_384;
                    int32_t *l_827 = &g_15;
                    int32_t *l_828 = &g_229;
                    int32_t *l_830 = &g_51;
                    int32_t *l_831 = (void*)0;
                    int32_t *l_832 = (void*)0;
                    int32_t *l_833 = &l_774;
                    int32_t *l_834 = (void*)0;
                    int32_t *l_835 = (void*)0;
                    int32_t *l_836 = &l_825;
                    int32_t *l_837 = (void*)0;
                    int32_t *l_838 = &g_384;
                    int32_t *l_839 = (void*)0;
                    int32_t *l_840 = &l_829;
                    int32_t l_841 = 0x4826B729L;
                    int32_t *l_842 = &g_229;
                    int32_t *l_843 = &l_747;
                    int32_t *l_844 = &l_774;
                    int32_t l_845 = 0L;
                    int32_t *l_846 = &l_595;
                    (*g_206) = &l_777;
                    ((void) sizeof ((g_207 == &l_777) ? 1 : 0), __extension__ ({ if (g_207 == &l_777) ; else __assert_fail ("g_207 == &l_777", "/tmp/tmpmmcl0g3o.c", 321, __extension__ __PRETTY_FUNCTION__); }));
                    g_847++;
                }
                (*l_862) ^= (l_732 ^ ((((((l_747 ^= ((**l_608) = p_4)) <= (safe_mul_func_uint8_t_u_u((l_852 != l_854), (g_384 == ((safe_mul_func_int8_t_s_s((safe_add_func_int32_t_s_s((g_103 <= 0UL), ((safe_lshift_func_int16_t_s_s(((**g_302) == ((**g_662) = func_71(((***g_662) = (*l_593)), l_862))), p_6)) != l_732))), 0x3EL)) > 1UL))))) && 0xCDL) | 0UL) | p_6) > 0xFC3A3B31L));
            }
            ((void) sizeof ((l_812 == &g_702 || l_812 == 0) ? 1 : 0), __extension__ ({ if (l_812 == &g_702 || l_812 == 0) ; else __assert_fail ("l_812 == &g_702 || l_812 == 0", "/tmp/tmpmmcl0g3o.c", 328, __extension__ __PRETTY_FUNCTION__); }));
            l_864 = l_863;
            ((void) sizeof ((l_864 == &g_662) ? 1 : 0), __extension__ ({ if (l_864 == &g_662) ; else __assert_fail ("l_864 == &g_662", "/tmp/tmpmmcl0g3o.c", 331, __extension__ __PRETTY_FUNCTION__); }));
        }
        else
        {
            uint8_t l_884 = 251UL;
            for (g_103 = 0; (g_103 == 31); g_103 = safe_add_func_uint16_t_u_u(g_103, 6))
            {
                int32_t *l_867 = (void*)0;
                int32_t *l_868 = &g_51;
                int32_t *l_869 = (void*)0;
                int32_t *l_870 = &g_229;
                int32_t *l_871 = &l_829;
                int32_t *l_872 = &l_829;
                int32_t *l_873 = &g_51;
                int32_t l_874 = (-10L);
                int32_t *l_875 = (void*)0;
                int32_t *l_876 = (void*)0;
                int32_t *l_877 = &g_384;
                int32_t *l_878 = &l_777;
                int32_t *l_879 = &g_15;
                int32_t *l_880 = &l_874;
                int32_t *l_881 = &g_15;
                int32_t *l_882 = &l_595;
                int32_t *l_883 = &g_15;
                l_884++;
                for (g_53 = (-26); (g_53 < 25); g_53++)
                {
                    (*g_206) = (*g_206);
                }
                if (p_3)
                    break;
                return g_173;
            }
            if (p_5)
                break;
            g_890 = l_889;
            ((void) sizeof ((g_890 == 0) ? 1 : 0), __extension__ ({ if (g_890 == 0) ; else __assert_fail ("g_890 == 0", "/tmp/tmpmmcl0g3o.c", 370, __extension__ __PRETTY_FUNCTION__); }));
        }
        ((void) sizeof ((l_812 == &g_702 || l_812 == 0) ? 1 : 0), __extension__ ({ if (l_812 == &g_702 || l_812 == 0) ; else __assert_fail ("l_812 == &g_702 || l_812 == 0", "/tmp/tmpmmcl0g3o.c", 374, __extension__ __PRETTY_FUNCTION__); }));
    }
    ((void) sizeof ((g_207 == &l_777 || g_207 == 0) ? 1 : 0), __extension__ ({ if (g_207 == &l_777 || g_207 == 0) ; else __assert_fail ("g_207 == &l_777 || g_207 == 0", "/tmp/tmpmmcl0g3o.c", 377, __extension__ __PRETTY_FUNCTION__); }));
    return p_5;
}
static uint16_t func_7(int8_t p_8, int32_t p_9)
{
    uint32_t ***l_491 = &g_106;
    uint32_t ****l_490 = &l_491;
    uint32_t *****l_489 = &l_490;
    uint16_t *l_494 = &g_366;
    int32_t *l_495 = &g_384;
    int32_t *l_496 = &g_229;
    int32_t l_497 = 0L;
    int32_t l_498 = 0L;
    int32_t *l_499 = &g_384;
    int32_t l_500 = 0x84546C99L;
    int32_t *l_501 = (void*)0;
    int32_t *l_502 = &l_497;
    int32_t *l_503 = &g_51;
    int32_t *l_504 = &g_51;
    int32_t *l_505 = &g_229;
    int32_t *l_506 = &l_497;
    int32_t *l_507 = &l_500;
    int32_t *l_508 = (void*)0;
    int32_t *l_509 = &g_384;
    int32_t *l_510 = (void*)0;
    int32_t *l_511 = &g_229;
    int32_t *l_512 = &g_229;
    int32_t *l_513 = &g_51;
    int32_t *l_514 = &l_500;
    int32_t *l_515 = (void*)0;
    int32_t *l_516 = &l_498;
    int32_t l_517 = (-8L);
    int32_t *l_518 = (void*)0;
    int32_t l_519 = 4L;
    int32_t l_520 = 0x4AA25C52L;
    int32_t *l_521 = &l_517;
    int32_t *l_522 = &g_229;
    int32_t *l_523 = &l_517;
    int32_t *l_524 = (void*)0;
    int32_t *l_525 = &l_517;
    int32_t *l_526 = (void*)0;
    int32_t *l_527 = &l_497;
    int32_t *l_528 = &g_15;
    int32_t *l_529 = (void*)0;
    int32_t l_530 = 0x70907730L;
    int32_t *l_531 = &g_15;
    int32_t *l_532 = (void*)0;
    int32_t *l_533 = &l_519;
    int32_t *l_534 = &g_229;
    int32_t *l_535 = &l_519;
    int32_t *l_536 = &l_520;
    int32_t *l_537 = &l_500;
    int32_t *l_538 = &g_229;
    int32_t *l_539 = &g_15;
    int32_t *l_540 = &g_384;
    int32_t l_541 = 0xBEA12880L;
    int32_t *l_542 = (void*)0;
    int32_t *l_543 = (void*)0;
    int32_t *l_544 = &l_530;
    int32_t *l_545 = &l_498;
    int32_t *l_546 = &l_500;
    int32_t *l_547 = (void*)0;
    int32_t *l_548 = &g_51;
    int32_t *l_549 = &g_51;
    int32_t *l_550 = &g_15;
    int32_t *l_551 = (void*)0;
    int32_t *l_552 = &g_229;
    int32_t l_553 = 0L;
    int32_t *l_554 = &g_51;
    int32_t *l_555 = (void*)0;
    int32_t *l_556 = &l_530;
    int32_t *l_557 = &l_553;
    int32_t *l_558 = &l_497;
    int32_t *l_559 = &l_541;
    int32_t *l_560 = &g_384;
    int32_t *l_561 = &g_229;
    int32_t l_562 = 0xD77ED771L;
    int32_t *l_563 = &l_498;
    int32_t *l_564 = &g_384;
    int32_t *l_565 = (void*)0;
    int32_t l_566 = 0xCAF07905L;
    int32_t *l_567 = &l_541;
    int32_t *l_568 = &l_562;
    int32_t *l_569 = &l_517;
    int32_t *l_570 = &g_229;
    int32_t *l_571 = (void*)0;
    int32_t *l_572 = &l_517;
    int32_t *l_573 = (void*)0;
    int32_t *l_574 = (void*)0;
    int32_t l_575 = 1L;
    int32_t *l_576 = (void*)0;
    int32_t l_577 = 0x498CEFA6L;
    int32_t *l_578 = &l_530;
    int32_t l_579 = (-7L);
    int32_t *l_580 = &l_520;
    int32_t *l_581 = (void*)0;
    int32_t *l_582 = &l_577;
    int32_t *l_583 = &l_520;
    int32_t *l_584 = &l_575;
    int32_t *l_585 = &l_541;
    int32_t *l_586 = (void*)0;
    int32_t *l_587 = &l_500;
    (*l_495) |= (safe_lshift_func_uint16_t_u_u((l_489 != &g_302), (safe_mul_func_int8_t_s_s((l_494 == &g_103), p_8))));
    ++g_588;
    return (*l_570);
}
inline static uint32_t func_10(int8_t p_11)
{
    uint32_t **l_428 = &g_107;
    int32_t l_429 = 9L;
    uint8_t l_441 = 0xCDL;
    int16_t l_450 = 1L;
    uint16_t *l_451 = &g_286;
    int32_t *l_452 = &g_15;
    int32_t *l_453 = &g_229;
    int32_t *l_454 = &g_51;
    int32_t *l_455 = &g_51;
    int32_t *l_456 = &g_229;
    int32_t l_457 = 0x8844DFC3L;
    int32_t *l_458 = &g_229;
    int32_t l_459 = 0x138D61C2L;
    int32_t *l_460 = &g_15;
    int32_t *l_461 = &g_51;
    int32_t *l_462 = (void*)0;
    int32_t *l_463 = &g_15;
    int32_t *l_464 = &g_51;
    int32_t *l_465 = &g_384;
    int32_t l_466 = 0L;
    int32_t *l_467 = &g_51;
    int32_t *l_468 = &l_429;
    int32_t *l_469 = &l_466;
    int32_t *l_470 = &g_51;
    int32_t *l_471 = (void*)0;
    int32_t l_472 = (-9L);
    int32_t *l_473 = &l_429;
    int32_t *l_474 = &g_229;
    int32_t *l_475 = (void*)0;
    int32_t *l_476 = (void*)0;
    int32_t *l_477 = &g_384;
    int32_t *l_478 = &g_384;
    int32_t *l_479 = &l_429;
    int32_t *l_480 = &l_472;
    int32_t *l_481 = &g_15;
    int32_t l_482 = 0x917BC99AL;
    int32_t *l_483 = (void*)0;
    uint16_t l_484 = 65529UL;
    (*g_206) = &l_429;
    ((void) sizeof ((g_207 == &l_429) ? 1 : 0), __extension__ ({ if (g_207 == &l_429) ; else __assert_fail ("g_207 == &l_429", "/tmp/tmpmmcl0g3o.c", 541, __extension__ __PRETTY_FUNCTION__); }));
    (*g_206) = (*g_206);
    l_484--;
    return (*l_453);
}
inline static int8_t func_18(uint8_t p_19, uint8_t p_20, int8_t p_21)
{
    const int32_t *l_23 = &g_24;
    int32_t l_25 = 1L;
    l_23 = (void*)0;
    ((void) sizeof ((l_23 == 0) ? 1 : 0), __extension__ ({ if (l_23 == 0) ; else __assert_fail ("l_23 == 0", "/tmp/tmpmmcl0g3o.c", 561, __extension__ __PRETTY_FUNCTION__); }));
    l_25 &= p_19;
    return p_19;
}
inline static int16_t func_31(uint32_t * p_32, uint32_t p_33, uint16_t p_34)
{
    int32_t l_233 = (-4L);
    uint8_t l_235 = 0UL;
    int32_t * const **l_247 = (void*)0;
    int32_t *l_259 = &l_233;
    int8_t l_291 = 1L;
    int32_t l_294 = 4L;
    uint32_t **l_301 = &g_107;
    uint32_t ***l_300 = &l_301;
    uint32_t ****l_299 = &l_300;
    uint8_t **l_406 = &g_171;
    (*g_207) ^= (((-9L) != ((*g_171) = l_233)) >= ((((safe_unary_minus_func_uint16_t_u(g_136)) && g_101) & (p_33 || ((l_233 > ((((l_235 |= ((-7L) < l_233)) & g_41) ^ g_53) < l_233)) < g_41))) >= 0xA8L));
    if ((0xF3720B21L < l_235))
    {
        uint8_t **l_239 = (void*)0;
        uint8_t ***l_238 = &l_239;
        uint8_t **l_241 = &g_171;
        uint8_t ***l_240 = &l_241;
        int32_t l_251 = (-1L);
        int32_t *l_379 = (void*)0;
        for (g_103 = 0; (g_103 != 0); g_103 = safe_add_func_int8_t_s_s(g_103, 9))
        {
            return g_229;
        }
        if ((((*l_238) = &g_171) != ((*l_240) = &g_171)))
        {
            uint32_t *l_246 = &g_136;
            int32_t l_248 = (-3L);
            int8_t *l_252 = &g_173;
            int32_t *l_253 = &g_229;
lbl_254:
            (*l_253) = (g_229 & (((*l_252) ^= (safe_mul_func_int16_t_s_s(((p_33 || (safe_add_func_uint32_t_u_u(((*l_246) = (g_28 != 0x5D40L)), ((*g_207) = (((***l_240) &= (4UL | ((((void*)0 == l_247) != l_248) ^ ((((safe_mul_func_int16_t_s_s(g_101, l_248)) && l_251) & 0xD2D33707L) | 0xAEL)))) && l_251))))) == p_33), g_103))) || 1L));
            if ((*l_253))
            {
                (**g_206) &= 1L;
            }
            else
            {
                if (g_136)
                    goto lbl_254;
                return g_28;
            }
        }
        else
        {
            int16_t l_290 = 1L;
            int32_t *l_310 = &l_251;
            int32_t l_325 = (-1L);
            uint32_t * const **l_389 = &g_304;
            for (g_22 = (-11); (g_22 > 24); g_22++)
            {
                uint8_t l_276 = 0x0EL;
                uint32_t **l_295 = &g_107;
                uint8_t ***l_308 = &l_239;
                int32_t l_334 = (-1L);
                int32_t l_354 = (-1L);
                uint16_t l_371 = 0x8675L;
            }
            if ((*g_207))
            {
                int16_t *l_383 = &g_53;
                int8_t *l_385 = &l_291;
                const int32_t l_386 = 9L;
                (*l_310) = (safe_add_func_int8_t_s_s((+((*l_385) = (((*l_383) = 2L) <= g_384))), l_386));
                return l_386;
            }
            else
            {
                (*g_206) = &l_325;
                ((void) sizeof ((g_207 == &l_325) ? 1 : 0), __extension__ ({ if (g_207 == &l_325) ; else __assert_fail ("g_207 == &l_325", "/tmp/tmpmmcl0g3o.c", 643, __extension__ __PRETTY_FUNCTION__); }));
            }
            ((void) sizeof ((g_207 == &l_325) ? 1 : 0), __extension__ ({ if (g_207 == &l_325) ; else __assert_fail ("g_207 == &l_325", "/tmp/tmpmmcl0g3o.c", 646, __extension__ __PRETTY_FUNCTION__); }));
            (*g_206) = (*g_206);
        }
        ((void) sizeof ((l_239 == &g_171) ? 1 : 0), __extension__ ({ if (l_239 == &g_171) ; else __assert_fail ("l_239 == &g_171", "/tmp/tmpmmcl0g3o.c", 651, __extension__ __PRETTY_FUNCTION__); }));
        return g_384;
    }
    else
    {
        uint8_t **l_405 = (void*)0;
        uint8_t ***l_404 = &l_405;
        uint8_t **l_407 = &g_171;
        uint32_t l_410 = 8UL;
        int32_t l_411 = 0x69CB32DCL;
        uint32_t *l_414 = &g_28;
        (**g_206) &= (safe_mod_func_uint8_t_u_u(p_34, ((safe_lshift_func_uint8_t_u_s(p_34, 6)) || (safe_lshift_func_uint16_t_u_s((~(safe_mul_func_uint16_t_u_u(p_33, (+((*l_414) = ((safe_mul_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_u((((*l_404) = &g_171) != (l_407 = l_406)), (safe_mul_func_uint8_t_u_u((((p_34 < p_33) ^ (l_411 = ((*l_259) = l_410))) >= (safe_add_func_int32_t_s_s((0x97L | 255UL), 1L))), p_33)))) <= g_136), g_22)) >= 0xD7ECL)))))), p_34)))));
        ((void) sizeof ((l_405 == 0 || l_405 == &g_171) ? 1 : 0), __extension__ ({ if (l_405 == 0 || l_405 == &g_171) ; else __assert_fail ("l_405 == 0 || l_405 == &g_171", "/tmp/tmpmmcl0g3o.c", 664, __extension__ __PRETTY_FUNCTION__); }));
        (**g_206) = ((g_366 <= (safe_sub_func_uint16_t_u_u(1UL, (((*l_301) = (*g_106)) == (p_32 = &g_136))))) == ((*l_259) = (((l_411 ^= (safe_rshift_func_int8_t_s_s(((!((safe_mod_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((p_34 < ((*l_414) = ((safe_mod_func_uint8_t_u_u((((safe_lshift_func_uint16_t_u_s(l_410, 4)) == 3UL) != g_51), (((p_34 == (**g_206)) < g_41) ^ (*l_259)))) >= 0xECL))), 3)), l_410)) & p_34)) == l_410), g_384))) || 0L) == g_293)));
        ((void) sizeof ((p_32 == &g_136) ? 1 : 0), __extension__ ({ if (p_32 == &g_136) ; else __assert_fail ("p_32 == &g_136", "/tmp/tmpmmcl0g3o.c", 667, __extension__ __PRETTY_FUNCTION__); }));
    }
    ((void) sizeof ((p_32 == &g_136) ? 1 : 0), __extension__ ({ if (p_32 == &g_136) ; else __assert_fail ("p_32 == &g_136", "/tmp/tmpmmcl0g3o.c", 670, __extension__ __PRETTY_FUNCTION__); }));
    return p_34;
}
static uint32_t * func_35(uint32_t * p_36, const uint32_t * p_37, uint32_t p_38)
{
    uint16_t l_43 = 65535UL;
    uint32_t l_81 = 0xF497A847L;
    const int16_t *l_217 = &g_101;
    if (((func_18((safe_unary_minus_func_uint8_t_u(l_43)), l_43, g_41) | (func_18(l_43, p_38, l_43) | (l_43 != g_24))) >= g_22))
    {
        int32_t *l_50 = &g_51;
        const uint8_t l_52 = 0UL;
        uint32_t l_54 = 4294967288UL;
        int16_t l_55 = 0x499CL;
        int16_t *l_196 = &l_55;
        int32_t l_230 = (-1L);
        (*l_50) = (+((func_18(((safe_mul_func_int16_t_s_s((g_41 || ((((safe_mod_func_int32_t_s_s(((void*)0 != p_37), ((*l_50) = (+((l_50 != p_37) & (l_52 == p_38)))))) >= 0x84B505D0L) > g_53) == l_43)), l_54)) <= (*p_36)), p_38, p_38) ^ l_55) && 0L));
        if ((+0x911AL))
        {
            uint32_t *l_80 = &g_28;
            uint32_t **l_79 = &l_80;
            int32_t l_142 = 0x54F57EB9L;
            if ((l_43 < ((*l_50) = l_43)))
            {
                uint16_t l_82 = 0x0002L;
                const int32_t *l_202 = &l_142;
                const int32_t **l_203 = &l_202;
                int32_t ***l_208 = &g_206;
                for (g_22 = (-15); (g_22 >= 35); g_22 = safe_add_func_int16_t_s_s(g_22, 6))
                {
                    uint32_t ***l_141 = &g_106;
                    uint16_t *l_143 = &l_82;
                    int16_t *l_191 = &g_53;
                    if ((safe_rshift_func_uint16_t_u_u((((*l_191) = (safe_mod_func_uint8_t_u_u(func_63(g_22, p_38, g_53, p_38, ((*l_143) = (((safe_add_func_uint32_t_u_u((*p_36), (((*l_141) = func_71(p_36, func_74(l_79, (5UL > (p_38 <= l_81)), l_82, l_81))) == (void*)0))) != l_142) > l_142))), p_38))) ^ (-9L)), p_38)))
                    {
                        int16_t **l_197 = &l_196;
                        int32_t *l_200 = &l_142;
                        (*l_200) |= ((safe_mul_func_uint8_t_u_u((*g_171), (-7L))) && ((*l_50) = (safe_rshift_func_int16_t_s_s((((*l_197) = l_196) == l_191), (safe_mul_func_int8_t_s_s(0x6BL, 0xEFL))))));
                    }
                    else
                    {
                        (*l_50) &= (!g_101);
                        (*l_50) ^= l_142;
                        (*l_50) &= 0x1EA80313L;
                        l_202 = &g_24;
                        ((void) sizeof ((l_202 == &g_24) ? 1 : 0), __extension__ ({ if (l_202 == &g_24) ; else __assert_fail ("l_202 == &g_24", "/tmp/tmpmmcl0g3o.c", 723, __extension__ __PRETTY_FUNCTION__); }));
                    }
                }
                ((void) sizeof ((l_202 == &g_24 || l_202 == &l_142) ? 1 : 0), __extension__ ({ if (l_202 == &g_24 || l_202 == &l_142) ; else __assert_fail ("l_202 == &g_24 || l_202 == &l_142", "/tmp/tmpmmcl0g3o.c", 727, __extension__ __PRETTY_FUNCTION__); }));
                (*l_203) = &g_24;
                ((void) sizeof ((l_202 == &g_24) ? 1 : 0), __extension__ ({ if (l_202 == &g_24) ; else __assert_fail ("l_202 == &g_24", "/tmp/tmpmmcl0g3o.c", 730, __extension__ __PRETTY_FUNCTION__); }));
                (*g_207) &= (safe_sub_func_int16_t_s_s((((*l_208) = g_206) == (void*)0), l_43));
            }
            else
            {
                (*g_207) &= 0x880E7157L;
            }
        }
        else
        {
            int16_t **l_218 = &l_196;
            uint32_t *l_221 = &l_54;
            int32_t l_224 = (-1L);
            int16_t *l_225 = &g_101;
            uint32_t *l_226 = &g_136;
            uint8_t *l_227 = &g_98;
            int32_t *l_228 = &g_229;
            l_230 |= ((*l_228) &= (safe_lshift_func_uint8_t_u_u(((*l_227) |= (safe_lshift_func_uint16_t_u_s((safe_sub_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((*p_36), (3UL & (l_217 != ((*l_218) = (void*)0))))), ((*l_50) < (3UL > (safe_sub_func_uint8_t_u_u(((((*l_221) |= 0xD2C60FB4L) == ((*l_226) = (((*g_171) = (((((*l_225) = (safe_mod_func_int32_t_s_s((*g_207), (p_38 | l_224)))) < 65535UL) | p_38) != 250UL)) == p_38))) || (*l_50)), (-3L))))))), 14))), g_24)));
            ((void) sizeof ((l_196 == 0) ? 1 : 0), __extension__ ({ if (l_196 == 0) ; else __assert_fail ("l_196 == 0", "/tmp/tmpmmcl0g3o.c", 749, __extension__ __PRETTY_FUNCTION__); }));
            return p_36;
        }
    }
    else
    {
        const int32_t *l_232 = &g_51;
        const int32_t **l_231 = &l_232;
        (*l_231) = p_37;
        ((void) sizeof ((l_232 == &g_28) ? 1 : 0), __extension__ ({ if (l_232 == &g_28) ; else __assert_fail ("l_232 == &g_28", "/tmp/tmpmmcl0g3o.c", 761, __extension__ __PRETTY_FUNCTION__); }));
    }
    return (*g_106);
}
static const uint8_t func_63(uint8_t p_64, uint8_t p_65, uint8_t p_66, int16_t p_67, uint16_t p_68)
{
    uint32_t l_146 = 0UL;
    int32_t l_161 = (-5L);
    for (p_66 = 0; (p_66 != 18); p_66 = safe_add_func_int8_t_s_s(p_66, 6))
    {
        int32_t *l_147 = &g_51;
        uint8_t *l_152 = &g_98;
        uint8_t *l_159 = (void*)0;
        uint8_t *l_160 = (void*)0;
        int8_t *l_172 = &g_173;
        uint32_t *l_174 = (void*)0;
        uint32_t *l_175 = &l_146;
        uint32_t *l_176 = &g_28;
        int32_t l_177 = 0x4E21E3D0L;
        int32_t *l_179 = &l_177;
        uint32_t l_184 = 0x2C3A2209L;
        int16_t *l_189 = &g_101;
        const int8_t l_190 = 0L;
        (*l_147) |= l_146;
        (*l_179) = (g_178 = ((safe_mod_func_uint32_t_u_u(((*l_176) = ((*l_175) = (safe_mod_func_uint16_t_u_u(((++(*l_152)) < ((*l_172) = (safe_add_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((((*l_147) = (l_161 = p_67)) ^ (((safe_lshift_func_int16_t_s_s(((safe_mul_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(0L, 6)), ((!((g_136 = (((&g_107 == &g_107) != g_24) && (((0x21L != g_28) ^ (g_171 == &p_65)) != 0x0FB8DA5BL))) ^ 8UL)) | p_65))) != g_103), p_65)) ^ 4294967295UL) | g_53)), 13)), 0xECL)))), g_53)))), l_177)) & 1UL));
        (*l_179) = ((safe_lshift_func_uint8_t_u_u((((safe_rshift_func_int8_t_s_u(l_184, (*l_179))) < 5UL) && ((((4294967293UL ^ (safe_add_func_uint32_t_u_u(((safe_sub_func_int16_t_s_s((0x5598L != (*l_179)), (((*l_189) &= (&l_177 != (void*)0)) < 65535UL))) >= p_68), 0xFA79916BL))) <= l_161) & l_190) >= 1UL)), (*g_171))) == 0xC586F400L);
    }
    return l_161;
}
inline static uint32_t ** func_71(uint32_t * p_72, int32_t * p_73)
{
    return &g_107;
}
static int32_t * func_74(uint32_t ** p_75, int32_t p_76, uint8_t p_77, int32_t p_78)
{
    int32_t l_89 = 0L;
    uint32_t l_90 = 4294967290UL;
    int32_t l_118 = 0xD47B9DA0L;
    uint32_t *** const l_126 = &g_106;
    uint16_t l_132 = 1UL;
    int32_t *l_133 = &l_89;
    int32_t *l_134 = (void*)0;
    int32_t *l_135 = &l_89;
    const int32_t *l_140 = &l_118;
    const int32_t **l_139 = &l_140;
    for (p_76 = 0; (p_76 < 18); p_76++)
    {
        int32_t *l_91 = &g_51;
        uint8_t *l_96 = (void*)0;
        uint8_t *l_97 = &g_98;
        int16_t *l_99 = (void*)0;
        int16_t *l_100 = &g_101;
        int32_t *l_102 = (void*)0;
        uint32_t ***l_108 = &g_106;
        uint32_t **l_111 = &g_107;
        uint32_t ***l_110 = &l_111;
        uint32_t ****l_109 = &l_110;
        int32_t l_115 = (-4L);
        uint8_t **l_121 = &l_96;
        const uint32_t *l_125 = (void*)0;
        const uint32_t **l_124 = &l_125;
        const uint32_t ***l_123 = &l_124;
        const uint32_t ****l_122 = &l_123;
        int16_t *l_131 = &g_53;
        g_103 |= (((safe_sub_func_uint16_t_u_u(((safe_add_func_int8_t_s_s(l_89, ((((*l_91) = l_90) ^ 4UL) && g_41))) > ((*l_100) = (safe_mod_func_uint32_t_u_u(0x517D3E82L, (safe_add_func_uint8_t_u_u(((*l_97) = 0x64L), (&g_28 != (void*)0))))))), (0xDC4505AFL | 3L))) & 9L) >= p_77);
        g_51 &= (((safe_add_func_uint16_t_u_u((((*l_108) = g_106) == &g_107), ((((*l_109) = &p_75) != &p_75) && ((*l_97) = (0xD4L < p_77))))) || 65535UL) != ((safe_sub_func_int32_t_s_s((((safe_unary_minus_func_int16_t_s(l_115)) & (-2L)) <= 4L), (**p_75))) != p_77));
        ((void) sizeof ((l_110 == &p_75) ? 1 : 0), __extension__ ({ if (l_110 == &p_75) ; else __assert_fail ("l_110 == &p_75", "/tmp/tmpmmcl0g3o.c", 853, __extension__ __PRETTY_FUNCTION__); }));
        p_78 = (safe_mul_func_uint8_t_u_u(l_118, (0xB0FACDC9L | ((*l_91) = (safe_sub_func_int8_t_s_s(((l_132 &= ((((((*l_121) = &p_77) != &g_22) < (((*l_122) = (void*)0) != l_126)) < (l_100 != (void*)0)) | ((safe_mul_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(((void*)0 == l_131), l_90)), 0x49D9L)) >= g_24))) || g_53), 0x39L))))));
        ((void) sizeof ((l_96 == &p_77) ? 1 : 0), __extension__ ({ if (l_96 == &p_77) ; else __assert_fail ("l_96 == &p_77", "/tmp/tmpmmcl0g3o.c", 856, __extension__ __PRETTY_FUNCTION__); }));
        ((void) sizeof ((l_123 == 0) ? 1 : 0), __extension__ ({ if (l_123 == 0) ; else __assert_fail ("l_123 == 0", "/tmp/tmpmmcl0g3o.c", 857, __extension__ __PRETTY_FUNCTION__); }));
        if ((*l_91))
            continue;
    }
    g_136++;
    (*l_139) = &g_24;
    ((void) sizeof ((l_140 == &g_24) ? 1 : 0), __extension__ ({ if (l_140 == &g_24) ; else __assert_fail ("l_140 == &g_24", "/tmp/tmpmmcl0g3o.c", 864, __extension__ __PRETTY_FUNCTION__); }));
    return &g_51;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    g_207 = 0;
    csmith_sink_ = g_15;
    csmith_sink_ = g_22;
    csmith_sink_ = g_24;
    csmith_sink_ = g_28;
    csmith_sink_ = g_41;
    csmith_sink_ = g_51;
    csmith_sink_ = g_53;
    csmith_sink_ = g_98;
    csmith_sink_ = g_101;
    csmith_sink_ = g_103;
    csmith_sink_ = g_136;
    csmith_sink_ = g_173;
    csmith_sink_ = g_178;
    csmith_sink_ = g_229;
    csmith_sink_ = g_286;
    csmith_sink_ = g_293;
    csmith_sink_ = g_366;
    csmith_sink_ = g_384;
    csmith_sink_ = g_588;
    csmith_sink_ = g_668;
    csmith_sink_ = g_785;
    csmith_sink_ = g_847;
    platform_main_end(0,0);
    return 0;
}
