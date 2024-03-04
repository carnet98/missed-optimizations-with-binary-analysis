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
static int8_t g_11 = 0xB4;
static uint16_t g_23 = 0x07C7;
static int32_t g_30 = 0xB5E49576;
static int16_t g_38 = 0xF39C;
static uint32_t g_67 = 0xADD33D73;
static uint16_t g_89 = 65530U;
static uint16_t *g_88 = &g_89;
static uint16_t g_138 = 0x2338;
static uint32_t g_148 = 0x2E9AD701;
static int32_t *g_172 = &g_30;
static int32_t **g_171 = &g_172;
static int32_t g_174 = 0x9556C6C4;
static int8_t g_193 = 3;
static uint16_t g_194 = 0U;
static uint8_t g_274 = 0x1C;
static uint8_t g_304 = 0U;
static uint32_t g_325 = 0x57CB99A6;
static uint32_t g_338 = 0xE28F3328;
static int32_t g_341 = (-3);
static uint32_t g_342 = 0xF5F0B503;
static int8_t g_379 = (-1);
static int32_t g_406 = (-1);
static int32_t g_418 = (-5);
static uint16_t g_429 = 1U;
static int32_t g_457 = 6;
static int32_t g_465 = 0x29B9E970;
static uint16_t **g_484 = (void*)0;
static uint16_t ***g_483 = &g_484;
static uint16_t ****g_482 = &g_483;
static uint8_t g_575 = 247U;
static int16_t g_638 = 0x35F5;
static uint32_t g_690 = 4294967292U;
static uint16_t *g_721 = &g_89;
static uint32_t g_723 = 0x7F4204E5;
static int8_t g_774 = 8;
static int32_t g_813 = 0xA887ACA5;
static uint16_t g_822 = 0x710B;
static uint16_t g_837 = 0U;
static uint8_t *g_862 = &g_304;
static uint8_t **g_861 = &g_862;
static int32_t **g_871 = (void*)0;
static uint8_t *****g_896 = (void*)0;
static uint32_t **g_914 = (void*)0;
static uint32_t *g_926 = &g_148;
static uint16_t *****g_933 = &g_482;
static int32_t g_990 = 0x8B9D4ABB;
static int32_t g_1024 = 0;
static uint32_t g_1035 = 0xFF40068B;
static uint8_t g_1059 = 0x0E;
static int32_t g_1068 = 0xCCFBAA46;
static uint8_t ****g_1121 = (void*)0;
static int8_t g_1291 = 0;
static int32_t g_1318 = 0x76C48EC6;
static uint32_t g_1334 = 0U;
static uint8_t func_1(void);
inline static int8_t func_17(int16_t p_18);
inline static int8_t func_20(uint16_t p_21);
static int32_t * func_26(uint32_t p_27);
inline static uint16_t * func_79(int16_t p_80, uint16_t p_81, uint16_t * p_82, uint16_t * p_83);
inline static uint16_t func_94(int32_t * p_95, uint32_t p_96, int32_t p_97);
static int32_t * func_98(int32_t p_99);
static int32_t func_141(uint16_t * p_142, int32_t p_143, uint8_t p_144);
static uint16_t * func_145(uint32_t p_146);
static int32_t * func_151(uint32_t * p_152, int16_t p_153, int32_t ** p_154, int32_t * p_155, uint16_t p_156);
static uint8_t func_1(void)
{
    uint8_t l_8 = 0xC3;
    int32_t l_12 = 7;
    uint16_t *l_22 = &g_23;
    uint32_t l_86 = 0xC114FF6A;
    uint16_t **l_835 = &g_721;
    uint16_t *l_836 = &g_837;
    int16_t *l_868 = &g_638;
    int32_t l_911 = 0xB1EDB388;
    uint8_t ***l_922 = &g_861;
    uint8_t l_1069 = 0xCD;
    uint32_t l_1083 = 0xC27E42F7;
    int32_t l_1090 = (-1);
    int32_t **l_1123 = &g_172;
    int8_t l_1171 = (-8);
    uint32_t l_1178 = 0x899C9ACE;
    int32_t l_1194 = (-1);
    int32_t l_1196 = 0x289FA6E6;
    int32_t l_1203 = 0xC1A8EC0E;
    int32_t l_1230 = 0x4373EFF8;
    int32_t l_1233 = 0xD8619237;
    int32_t l_1249 = 0xB0CB3A23;
    int32_t l_1264 = 0;
    int32_t l_1273 = (-1);
    int32_t l_1274 = 0;
    int32_t l_1305 = 0xEA2E0B0E;
    int32_t l_1306 = 0x29D7A392;
    int32_t l_1341 = 8;
    if ((safe_add_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_u((safe_mod_func_int16_t_s_s(((*l_868) ^= (l_8 < (safe_lshift_func_int16_t_s_u(((l_12 = g_11) >= (safe_lshift_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(l_8, g_11)), 5))), (func_17((~(func_20(((*l_22) &= g_11)) <= (safe_lshift_func_uint16_t_u_s((safe_div_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(l_8, (((*l_835) = func_79((safe_add_func_int16_t_s_s(g_30, l_86)), g_38, l_22, l_22)) == l_836))), l_8)), 10))))) && l_86))))), l_86)), l_8)) & 0xAADC), 0)))
    {
        uint32_t *l_869 = (void*)0;
        int32_t l_870 = 0x4FE9D939;
        uint32_t *l_880 = (void*)0;
        uint32_t *l_881 = (void*)0;
        uint32_t *l_882 = &g_325;
        uint32_t *l_885 = &g_690;
        uint32_t **l_889 = &l_869;
        uint32_t ***l_888 = &l_889;
        uint16_t *l_900 = &g_194;
        uint8_t ****l_908 = (void*)0;
        uint16_t *****l_932 = &g_482;
        int32_t l_1093 = (-1);
        int32_t *l_1094 = &g_1068;
        (*g_171) = &l_12;
        if (((safe_div_func_int32_t_s_s(((((safe_lshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((((void*)0 == g_896) != (+(safe_rshift_func_int8_t_s_u(((l_900 == (*l_835)) ^ ((((!0x81) ^ (((void*)0 == &g_861) > ((l_870 && (((*g_862)++) | ((safe_lshift_func_uint8_t_u_s((g_575 = (l_908 == l_908)), g_89)) ^ g_23))) > 8U))) || 0U) ^ 0xB1516EE5)), l_12)))), l_870)), l_8)) ^ g_174) & 0) || l_12), g_342)) == 0x37))
        {
            return l_870;
        }
        else
        {
            uint32_t ***l_915 = (void*)0;
            uint32_t **l_917 = (void*)0;
            uint32_t ***l_916 = &l_917;
            uint8_t ***l_920 = &g_861;
            uint8_t ****l_921 = &l_920;
            int8_t *l_923 = &g_379;
            int32_t l_927 = 3;
            (**g_171) = ((safe_sub_func_int8_t_s_s(l_911, (((((++(*g_862)) & 0) == (g_914 != ((*l_916) = g_914))) < ((safe_mod_func_uint32_t_u_u((g_325 & (((*l_923) = (((*l_921) = l_920) == l_922)) ^ g_67)), (safe_sub_func_uint16_t_u_u(((*g_88) = ((g_926 = (*l_889)) == &g_338)), g_774)))) & l_927)) <= g_341))) || 65532U);
            for (g_148 = (-15); (g_148 != 24); ++g_148)
            {
                int16_t l_1025 = 0x4913;
                int32_t l_1029 = (-1);
                for (g_193 = 0; (g_193 <= (-5)); --g_193)
                {
                    int32_t *l_934 = &g_465;
                    int32_t *l_935 = &l_911;
                    int32_t *l_936 = &l_927;
                    int32_t *l_937 = &l_911;
                    int32_t *l_938 = &l_870;
                    int32_t *l_939 = &l_870;
                    int32_t *l_940 = &g_813;
                    int32_t *l_941 = &l_911;
                    int32_t *l_942 = (void*)0;
                    int32_t l_943 = (-1);
                    int32_t *l_944 = (void*)0;
                    int32_t *l_945 = &l_927;
                    int32_t *l_946 = (void*)0;
                    int32_t *l_947 = &l_12;
                    int32_t *l_948 = &l_870;
                    int32_t *l_949 = &g_30;
                    int32_t *l_950 = &g_465;
                    int32_t *l_951 = &l_943;
                    int32_t *l_952 = &g_813;
                    int32_t *l_953 = &g_465;
                    int32_t *l_954 = &g_174;
                    int32_t *l_955 = &l_870;
                    int32_t *l_956 = &l_911;
                    int32_t *l_957 = &g_30;
                    int32_t *l_958 = &g_30;
                    int32_t *l_959 = &g_174;
                    int32_t *l_960 = &g_813;
                    int32_t *l_961 = (void*)0;
                    int32_t *l_962 = &l_870;
                    int32_t *l_963 = (void*)0;
                    int32_t *l_964 = &g_465;
                    int32_t *l_965 = &l_911;
                    int32_t *l_966 = &g_30;
                    int32_t *l_967 = &l_911;
                    int32_t *l_968 = &g_813;
                    int32_t *l_969 = &l_12;
                    int32_t *l_970 = &l_927;
                    int32_t *l_971 = (void*)0;
                    int32_t *l_972 = &g_813;
                    int32_t *l_973 = &g_813;
                    int32_t *l_974 = &g_174;
                    int32_t *l_975 = &l_911;
                    int32_t *l_976 = (void*)0;
                    int32_t *l_977 = (void*)0;
                    int32_t *l_978 = &l_911;
                    int32_t *l_979 = &g_813;
                    int32_t *l_980 = &g_465;
                    int32_t *l_981 = (void*)0;
                    int32_t *l_982 = &l_12;
                    int32_t *l_983 = &g_465;
                    int32_t *l_984 = &l_12;
                    int32_t *l_985 = &g_174;
                    int32_t l_986 = (-3);
                    int32_t *l_987 = &l_927;
                    int32_t l_988 = 0x74A25F69;
                    int32_t *l_989 = (void*)0;
                    int32_t *l_991 = &l_12;
                    int32_t *l_992 = &l_986;
                    int32_t *l_993 = &l_870;
                    int32_t *l_994 = &l_12;
                    int32_t *l_995 = &l_12;
                    int32_t *l_996 = &l_870;
                    int32_t *l_997 = &l_911;
                    int32_t *l_998 = &l_870;
                    int32_t *l_999 = &l_911;
                    int32_t *l_1000 = &l_988;
                    int32_t *l_1001 = &g_990;
                    int32_t *l_1002 = &g_174;
                    int32_t *l_1003 = &l_927;
                    int32_t *l_1004 = (void*)0;
                    int32_t *l_1005 = &l_988;
                    int32_t *l_1006 = &g_465;
                    int32_t *l_1007 = &l_927;
                    int32_t *l_1008 = &l_12;
                    int32_t *l_1009 = &l_927;
                    int32_t *l_1010 = &g_990;
                    int32_t *l_1011 = &l_12;
                    int32_t *l_1012 = &l_943;
                    int32_t *l_1013 = &g_990;
                    int32_t *l_1014 = &l_911;
                    int32_t *l_1015 = &l_943;
                    int32_t *l_1016 = &l_943;
                    int32_t *l_1017 = (void*)0;
                    int32_t *l_1018 = &g_174;
                    int32_t *l_1019 = &g_813;
                    int32_t *l_1020 = &g_30;
                    int32_t *l_1021 = &l_943;
                    int32_t *l_1022 = &g_30;
                    int32_t *l_1023 = &g_813;
                    int32_t *l_1026 = (void*)0;
                    int32_t *l_1027 = &g_174;
                    int32_t *l_1028 = &l_911;
                    int32_t *l_1030 = (void*)0;
                    int32_t *l_1031 = (void*)0;
                    int32_t *l_1032 = &g_465;
                    int32_t *l_1033 = &g_1024;
                    int32_t *l_1034 = &l_943;
                    g_933 = l_932;
                    ++g_1035;
                }
                for (l_911 = (-8); (l_911 < (-19)); l_911 = safe_sub_func_uint16_t_u_u(l_911, 4))
                {
                    int32_t *l_1060 = &g_174;
                    (*l_1060) ^= ((safe_div_func_int32_t_s_s((((*l_882) ^= g_342) >= (safe_mod_func_uint16_t_u_u(((l_1025 < (((*l_868) = ((*g_483) == (**g_482))) || (((l_927 & (safe_rshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((l_870 && (safe_lshift_func_uint8_t_u_u((~0xD3B6AD5C), (g_457 || (--(*l_885)))))), 0)), (safe_mod_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s(3U, g_338)), g_406)))), g_304))) != g_1059) >= 6))) <= l_1029), l_870))), (**g_171))) != (**g_171));
                }
            }
            (**g_171) = (safe_add_func_int8_t_s_s(((*l_923) = (((0xE1CB922E ^ (safe_rshift_func_int8_t_s_u(((safe_rshift_func_uint16_t_u_s(((**g_171) == 0xB40730A7), (65535U ^ (l_908 != (void*)0)))) | ((*l_882) = l_911)), 3))) < (safe_unary_minus_func_int16_t_s(((l_927 ^= l_870) <= (((*g_88) && g_338) || g_1068))))) < l_1069)), 255U));
        }
        l_1093 = ((*l_1094) &= (safe_mod_func_int16_t_s_s((safe_sub_func_int16_t_s_s((safe_div_func_int8_t_s_s(((!(safe_sub_func_uint32_t_u_u(((safe_rshift_func_uint8_t_u_s(((safe_sub_func_uint8_t_u_u((**g_861), g_379)) > l_1083), 3)) <= l_1083), ((*l_882) ^= (safe_lshift_func_uint8_t_u_s((~(((l_12 = ((((safe_add_func_int32_t_s_s((safe_unary_minus_func_int32_t_s((&g_638 == &g_638))), (l_870 = (l_1090 == ((safe_div_func_uint32_t_u_u(1U, 9U)) & l_870))))) ^ l_1093) >= 9U) < 7U)) && 0U) < l_1093)), g_194)))))) != l_1083), 250U)), l_1093)), l_86)));
        return (*g_862);
    }
    else
    {
        uint16_t *****l_1100 = (void*)0;
        int32_t l_1117 = 0;
        int16_t *l_1176 = &g_38;
        int8_t *l_1177 = &g_193;
        int32_t l_1179 = 0xCAB8D0AB;
        int32_t *l_1180 = &g_465;
        int32_t *l_1181 = &g_465;
        int32_t *l_1182 = &g_1068;
        int32_t *l_1183 = (void*)0;
        int32_t *l_1184 = (void*)0;
        int32_t *l_1185 = &l_911;
        int32_t *l_1186 = &l_1179;
        int32_t *l_1187 = &l_12;
        int32_t *l_1188 = &g_30;
        int32_t *l_1189 = &g_813;
        int32_t *l_1190 = (void*)0;
        int32_t *l_1191 = &l_1117;
        int32_t *l_1192 = (void*)0;
        int32_t *l_1193 = &g_990;
        int32_t *l_1195 = &g_1024;
        int32_t *l_1197 = &g_30;
        int32_t *l_1198 = (void*)0;
        int32_t *l_1199 = &l_1196;
        int32_t *l_1200 = &g_465;
        int32_t *l_1201 = &l_12;
        int32_t *l_1202 = &g_465;
        int32_t *l_1204 = &l_1117;
        int32_t *l_1205 = &l_1196;
        int32_t *l_1206 = &l_12;
        int32_t *l_1207 = (void*)0;
        int32_t *l_1208 = &l_1194;
        int32_t *l_1209 = &l_1117;
        int32_t *l_1210 = (void*)0;
        int32_t *l_1211 = &g_990;
        int32_t *l_1212 = &g_174;
        int32_t *l_1213 = &l_1203;
        int32_t *l_1214 = (void*)0;
        int32_t *l_1215 = &g_990;
        int32_t *l_1216 = (void*)0;
        int32_t *l_1217 = &l_1179;
        int32_t *l_1218 = &g_30;
        int32_t *l_1219 = (void*)0;
        int32_t *l_1220 = &l_1203;
        int32_t *l_1221 = (void*)0;
        int32_t *l_1222 = &l_911;
        int32_t *l_1223 = &l_1196;
        int32_t *l_1224 = &g_30;
        int32_t *l_1225 = &g_1068;
        int32_t *l_1226 = &l_911;
        int32_t *l_1227 = &g_30;
        int32_t *l_1228 = &g_465;
        int32_t *l_1229 = &l_1117;
        int32_t *l_1231 = &g_465;
        int32_t *l_1232 = &l_12;
        int32_t *l_1234 = &l_1230;
        int32_t *l_1235 = &l_1196;
        int32_t *l_1236 = &g_990;
        int32_t l_1237 = 0x7C6D8648;
        int32_t *l_1238 = &g_813;
        int32_t *l_1239 = &l_1203;
        int32_t *l_1240 = &l_1203;
        int32_t *l_1241 = &g_990;
        int32_t *l_1242 = &g_1024;
        int32_t *l_1243 = &l_1196;
        int32_t *l_1244 = (void*)0;
        int32_t *l_1245 = &l_1230;
        int32_t *l_1246 = &l_911;
        int32_t *l_1247 = &l_1179;
        int32_t *l_1248 = &g_1068;
        int32_t *l_1250 = &g_30;
        int32_t *l_1251 = &l_1233;
        int32_t *l_1252 = &l_1179;
        int32_t l_1253 = 0xB1BB9616;
        int32_t *l_1254 = (void*)0;
        int32_t *l_1255 = &l_1196;
        int32_t *l_1256 = &l_911;
        int32_t *l_1257 = &g_1024;
        int32_t *l_1258 = (void*)0;
        int32_t *l_1259 = &l_1179;
        int32_t *l_1260 = &l_1253;
        int32_t *l_1261 = &g_990;
        int32_t *l_1262 = &l_1179;
        int32_t *l_1263 = &l_1249;
        int32_t *l_1265 = &l_911;
        int32_t *l_1266 = &l_911;
        int32_t *l_1267 = &l_12;
        int32_t *l_1268 = &l_1253;
        int32_t *l_1269 = &l_1253;
        int32_t *l_1270 = &g_990;
        int32_t *l_1271 = &g_465;
        int32_t *l_1272 = (void*)0;
        int32_t *l_1275 = &l_1274;
        int32_t *l_1276 = &l_12;
        int32_t *l_1277 = &g_174;
        int32_t *l_1278 = &l_12;
        int32_t *l_1279 = &l_1273;
        int32_t *l_1280 = &g_174;
        int32_t *l_1281 = &l_1117;
        int32_t *l_1282 = &g_174;
        int32_t *l_1283 = &g_1068;
        int32_t *l_1284 = &l_1117;
        int32_t *l_1285 = &g_30;
        int32_t *l_1286 = &l_1196;
        int32_t *l_1287 = &l_1273;
        int32_t *l_1288 = &g_30;
        int32_t *l_1289 = &l_1196;
        int32_t *l_1290 = &l_12;
        int32_t *l_1292 = &g_813;
        int32_t *l_1293 = &l_1249;
        int32_t l_1294 = 0x70690EF1;
        int32_t *l_1295 = &l_1253;
        int32_t *l_1296 = &l_1237;
        int32_t *l_1297 = &l_1233;
        int32_t *l_1298 = &l_1194;
        int32_t *l_1299 = &l_1196;
        int32_t *l_1300 = &g_465;
        int32_t *l_1301 = &g_1024;
        int32_t *l_1302 = &l_1194;
        int32_t *l_1303 = &l_1196;
        int32_t *l_1304 = (void*)0;
        int32_t *l_1307 = &l_1306;
        int32_t *l_1308 = &l_1273;
        int32_t *l_1309 = &l_12;
        int32_t *l_1310 = (void*)0;
        int32_t *l_1311 = (void*)0;
        int32_t *l_1312 = &l_1230;
        int32_t *l_1313 = &g_1068;
        int32_t *l_1314 = &l_1274;
        int32_t *l_1315 = &g_990;
        int32_t *l_1316 = &l_1249;
        int32_t *l_1317 = (void*)0;
        int32_t *l_1319 = &g_174;
        int32_t *l_1320 = &l_1253;
        int32_t *l_1321 = &l_1203;
        int32_t *l_1322 = &l_1264;
        int32_t *l_1323 = &l_1233;
        int32_t *l_1324 = &l_1264;
        int32_t *l_1325 = &l_1194;
        int32_t *l_1326 = &l_1233;
        int32_t *l_1327 = &l_1305;
        int32_t *l_1328 = &g_1024;
        int32_t *l_1329 = &l_911;
        int32_t *l_1330 = &l_1264;
        int32_t *l_1331 = &l_1306;
        int32_t *l_1332 = &l_1249;
        int32_t *l_1333 = &l_1264;
        if ((safe_add_func_int16_t_s_s(0x354D, (l_1117 = (!(safe_mod_func_uint8_t_u_u(((l_1100 = &g_482) == &g_482), (safe_rshift_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((((safe_sub_func_uint16_t_u_u((((**g_861) = (safe_mod_func_uint8_t_u_u((l_911 > (safe_mod_func_int8_t_s_s(((-9) ^ (safe_sub_func_int8_t_s_s(((((l_1083 <= l_86) & (safe_add_func_uint32_t_u_u((safe_add_func_int8_t_s_s((-4), (*g_862))), l_86))) && 1U) | g_638), l_12))), (*g_862)))), 2))) != l_86), (*g_88))) <= 0x66) < l_1117), g_575)), (*g_88))))))))))
        {
            int32_t *l_1118 = &l_1117;
            uint32_t *l_1122 = &g_342;
            int16_t *l_1126 = (void*)0;
            int32_t *l_1129 = &l_12;
            (*g_171) = l_1118;
            (*l_1129) |= (((safe_sub_func_uint32_t_u_u(((*l_1122) = (g_1121 == (void*)0)), (l_1123 != &g_172))) || 0x89) <= (((safe_div_func_int32_t_s_s(((void*)0 == l_1126), (((l_1117 && ((safe_div_func_int32_t_s_s((**g_171), 4294967286U)) == (-2))) ^ (-9)) & l_1117))) < (*l_1118)) < l_1117));
        }
        else
        {
            int8_t l_1143 = (-2);
            for (g_379 = 18; (g_379 < (-8)); g_379 = safe_sub_func_uint32_t_u_u(g_379, 8))
            {
                uint32_t l_1146 = 4294967290U;
                uint16_t ***l_1153 = &l_835;
                int32_t l_1154 = 0x802AC4AC;
                for (l_1083 = 0; (l_1083 <= 16); l_1083 = safe_add_func_int16_t_s_s(l_1083, 2))
                {
                    int32_t l_1138 = 0x58A8E54D;
                    l_1138 = (safe_mod_func_int32_t_s_s((((*l_868) = ((safe_mod_func_int16_t_s_s(g_822, l_1117)) > (**l_1123))) & ((*g_88) &= 0xC33A)), g_1059));
                }
                l_1154 = (safe_add_func_uint32_t_u_u(((safe_mod_func_int32_t_s_s(0x777CCA38, (5U ^ g_1035))) < (l_1143 > (safe_sub_func_int32_t_s_s(((**g_171) = (**l_1123)), l_1146)))), (safe_div_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s((((*l_868) = (l_1143 < (((l_1143 < ((void*)0 != l_1153)) > l_1143) < 0xAC5A3CFD))) | (*g_88)), l_1146)), g_837))));
                return (**g_861);
            }
        }
        (*l_1180) ^= ((safe_add_func_uint32_t_u_u((((safe_unary_minus_func_uint8_t_u((safe_sub_func_int16_t_s_s(0x3893, 0x8588)))) < ((**l_1123) = (safe_sub_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((((*g_172) < (!(safe_add_func_int8_t_s_s(((*l_1177) = (safe_lshift_func_int16_t_s_u(9, (safe_rshift_func_uint16_t_u_s(((**l_1123) && (l_1171 > (-5))), (((safe_div_func_int16_t_s_s(((*l_868) ^= 6), ((*l_1176) = (safe_sub_func_int16_t_s_s(l_1117, g_274))))) <= g_822) == 0U)))))), 0x4D)))) <= l_1117), 4294967286U)), l_1178)))) <= 0x4C76), l_1179)) | (*g_88));
        g_1334++;
        for (g_148 = 19; (g_148 != 19); ++g_148)
        {
            uint32_t l_1339 = 0U;
            int32_t *l_1340 = &l_1203;
            (*l_1123) = (void*)0;
            (*g_171) = (*l_1123);
            if (l_1339)
            {
                (*l_1319) ^= 0;
            }
            else
            {
                (*l_1271) |= l_1339;
                (*g_171) = l_1340;
            }
        }
    }
    l_1233 |= (l_1341 ^ 0x8B2C);
    return (*g_862);
}
inline static int8_t func_17(int16_t p_18)
{
    uint8_t l_840 = 1U;
    int32_t *l_841 = &g_813;
    uint32_t *l_845 = &g_338;
    uint32_t **l_844 = &l_845;
    uint32_t ***l_843 = &l_844;
    int8_t *l_846 = (void*)0;
    int8_t *l_847 = &g_774;
    uint8_t ***l_863 = &g_861;
    uint8_t **l_864 = (void*)0;
    int16_t *l_867 = &g_38;
    (*l_841) = (safe_lshift_func_uint8_t_u_u(l_840, 5));
    (*g_171) = &g_174;
    (**g_171) ^= ((-1) < (~(((*l_867) = (((*l_847) = (l_843 != &l_844)) <= ((safe_rshift_func_uint16_t_u_s((safe_div_func_int8_t_s_s(0x11, (safe_unary_minus_func_uint16_t_u(((*g_88) = (safe_lshift_func_uint8_t_u_s((((!g_465) < (safe_div_func_int32_t_s_s(((safe_sub_func_uint32_t_u_u((!(((*g_862) = (((*l_863) = g_861) != l_864)) != (safe_add_func_int32_t_s_s(((*l_841) == (-10)), 0xF62A6155)))), (*l_841))) || 0U), 0xC486AF52))) != p_18), p_18))))))), 14)) & p_18))) || (*l_841))));
    return (*l_841);
}
inline static int8_t func_20(uint16_t p_21)
{
    int16_t l_72 = 1;
    for (p_21 = 0; (p_21 != 7); p_21++)
    {
        int32_t *l_71 = &g_30;
        int32_t **l_70 = &l_71;
        (*l_70) = func_26(p_21);
    }
    return l_72;
}
static int32_t * func_26(uint32_t p_27)
{
    int32_t *l_28 = (void*)0;
    int32_t *l_29 = &g_30;
    int32_t *l_31 = (void*)0;
    int32_t *l_32 = &g_30;
    int32_t *l_33 = &g_30;
    int32_t *l_34 = &g_30;
    int32_t *l_35 = &g_30;
    int32_t *l_36 = &g_30;
    int32_t *l_37 = &g_30;
    int32_t *l_39 = (void*)0;
    int32_t *l_40 = &g_30;
    int32_t *l_41 = &g_30;
    int32_t *l_42 = &g_30;
    int32_t *l_43 = &g_30;
    int32_t *l_44 = &g_30;
    int32_t *l_45 = &g_30;
    int32_t *l_46 = (void*)0;
    int32_t *l_47 = &g_30;
    int32_t *l_48 = &g_30;
    int32_t *l_49 = (void*)0;
    int32_t *l_50 = (void*)0;
    int32_t *l_51 = &g_30;
    int32_t *l_52 = &g_30;
    int32_t *l_53 = &g_30;
    int32_t *l_54 = &g_30;
    int32_t l_55 = 0;
    int32_t l_56 = 0x1636717B;
    int32_t *l_57 = &l_55;
    int32_t *l_58 = &l_55;
    int32_t *l_59 = &g_30;
    int32_t l_60 = 0x781B5F7A;
    int32_t *l_61 = &l_60;
    int32_t *l_62 = &l_60;
    int32_t *l_63 = &l_55;
    int32_t *l_64 = &l_56;
    int32_t *l_65 = &l_56;
    int32_t *l_66 = (void*)0;
    --g_67;
    return &g_30;
}
inline static uint16_t * func_79(int16_t p_80, uint16_t p_81, uint16_t * p_82, uint16_t * p_83)
{
    uint32_t l_87 = 0xE89C674F;
    uint16_t *l_435 = (void*)0;
    int32_t *l_476 = &g_174;
    uint8_t l_491 = 255U;
    int32_t l_500 = 0;
    int32_t l_559 = (-4);
    int32_t l_646 = 0x8553BB46;
    int32_t l_647 = 6;
    int32_t l_697 = (-1);
    uint8_t *l_711 = &g_575;
    uint8_t **l_710 = &l_711;
    uint8_t ***l_709 = &l_710;
    uint8_t ****l_708 = &l_709;
    uint16_t ****l_795 = &g_483;
    int16_t *l_828 = &g_38;
    uint32_t l_833 = 4294967295U;
    uint8_t *****l_834 = &l_708;
    if (((((l_87 != (g_88 == (void*)0)) || (((void*)0 == &g_30) && (safe_div_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(func_94(func_98(g_11), p_80, p_81), 4)), (-6))))) < l_87) ^ p_80))
    {
        for (l_87 = (-12); (l_87 > 19); ++l_87)
        {
            uint16_t *l_434 = &g_194;
            return l_434;
        }
        return l_435;
    }
    else
    {
        uint16_t l_442 = 0x0B85;
        int16_t *l_443 = (void*)0;
        int16_t *l_444 = &g_38;
        int32_t **l_463 = (void*)0;
        int32_t l_485 = 1;
        uint8_t *l_592 = &g_274;
        uint8_t **l_591 = &l_592;
        uint8_t ***l_590 = &l_591;
        int32_t l_616 = 0xDB8D7A7F;
        int32_t l_651 = (-2);
        int32_t l_686 = 0x79BB8560;
        uint32_t l_798 = 6U;
        int32_t *l_825 = &l_616;
        (**g_171) = p_81;
        if (((*g_172) = (safe_sub_func_int16_t_s_s((p_80 = (g_457 = ((1 | (safe_div_func_uint16_t_u_u(((*g_88)++), ((*l_444) |= l_442)))) >= (safe_add_func_int32_t_s_s((safe_rshift_func_int8_t_s_u((~(((safe_unary_minus_func_uint8_t_u(p_81)) <= ((8 >= (&p_83 != (void*)0)) >= 0x138E7317)) == (safe_sub_func_int32_t_s_s((((safe_sub_func_uint16_t_u_u((l_442 && 4294967289U), l_87)) < l_442) ^ 65528U), (**g_171))))), 1)), l_442))))), p_81))))
        {
            int16_t l_460 = 3;
            int32_t *l_464 = &g_465;
            uint32_t *l_469 = &l_87;
            uint32_t **l_468 = &l_469;
            uint32_t ***l_470 = (void*)0;
            uint32_t ***l_471 = &l_468;
            uint8_t *l_472 = &g_304;
            uint8_t *l_473 = &g_274;
            (*g_172) &= (safe_mod_func_uint8_t_u_u(((*l_473) = ((*l_472) &= ((l_460 < (safe_sub_func_uint8_t_u_u(((&p_82 != (void*)0) || ((((*l_468) = &g_338) == &g_338) > g_338)), p_81))) && 0))), p_80));
            for (g_138 = 2; (g_138 != 22); ++g_138)
            {
                (*g_171) = l_476;
                if ((*l_476))
                    break;
            }
        }
        else
        {
            int32_t l_481 = 0x7B5C9E14;
            int32_t l_528 = 0;
            int32_t l_547 = 0xD532AE1F;
            int32_t *l_578 = &l_528;
            for (g_193 = 2; (g_193 >= 22); g_193 = safe_add_func_uint16_t_u_u(g_193, 4))
            {
                uint8_t *l_488 = &g_304;
                int32_t l_492 = 0;
                uint32_t *l_585 = &l_87;
                int32_t *l_594 = &l_481;
                int32_t *l_595 = &l_485;
                int32_t *l_596 = &l_485;
                int32_t *l_597 = &g_30;
                int32_t *l_598 = &l_500;
                int32_t *l_599 = (void*)0;
                int32_t *l_600 = &g_465;
                int32_t *l_601 = &l_485;
                int32_t *l_602 = &l_481;
                int32_t *l_603 = &g_465;
                int32_t *l_604 = (void*)0;
                int32_t *l_605 = (void*)0;
                int32_t *l_606 = (void*)0;
                int32_t *l_607 = (void*)0;
                int32_t *l_608 = &l_481;
                int32_t *l_609 = &g_174;
                int32_t *l_610 = &l_528;
                int32_t *l_611 = &l_559;
                int32_t *l_612 = &l_485;
                int32_t *l_613 = &g_174;
                int32_t *l_614 = (void*)0;
                int32_t *l_615 = &g_465;
                int32_t *l_617 = &l_547;
                int32_t *l_618 = &l_528;
                int32_t l_619 = (-1);
                int32_t *l_620 = &g_465;
                int32_t *l_621 = &l_616;
                int32_t *l_622 = &l_492;
                int32_t *l_623 = &l_500;
                int32_t *l_624 = &g_174;
                int32_t *l_625 = &l_485;
                int32_t *l_626 = &l_547;
                int32_t *l_627 = &l_616;
                int32_t *l_628 = (void*)0;
                int32_t *l_629 = (void*)0;
                int32_t *l_630 = &g_174;
                int32_t *l_631 = &l_485;
                int32_t *l_632 = &l_492;
                int32_t *l_633 = &l_528;
                int32_t *l_634 = &l_547;
                int32_t *l_635 = &l_485;
                int32_t *l_636 = &g_174;
                int32_t *l_637 = &g_174;
                int32_t *l_639 = &l_500;
                int32_t *l_640 = &g_30;
                int32_t *l_641 = (void*)0;
                int32_t *l_642 = (void*)0;
                int32_t *l_643 = &l_559;
                int32_t *l_644 = &l_547;
                int32_t *l_645 = &l_619;
                int32_t *l_648 = &l_547;
                int32_t *l_649 = &l_619;
                int32_t *l_650 = &l_547;
                int32_t *l_652 = &l_647;
                int32_t *l_653 = &l_547;
                int32_t *l_654 = &g_465;
                int32_t *l_655 = (void*)0;
                int32_t *l_656 = &l_646;
                int32_t *l_657 = &l_485;
                int32_t *l_658 = &l_559;
                int32_t *l_659 = &g_30;
                int32_t *l_660 = &g_174;
                int32_t *l_661 = &l_485;
                int32_t *l_662 = &l_481;
                int32_t *l_663 = (void*)0;
                int32_t *l_664 = &g_465;
                int32_t l_665 = 0x0E697D69;
                int32_t *l_666 = &l_547;
                int32_t *l_667 = &l_485;
                int32_t *l_668 = &g_174;
                int32_t *l_669 = &g_174;
                int32_t *l_670 = &l_647;
                int32_t *l_671 = &g_465;
                int32_t *l_672 = &l_547;
                int32_t *l_673 = &l_547;
                int32_t *l_674 = &l_619;
                int32_t *l_675 = &l_647;
                int32_t *l_676 = &l_492;
                int32_t *l_677 = &g_30;
                int32_t *l_678 = &l_647;
                int32_t l_679 = 0xA817F4DE;
                int32_t *l_680 = &l_616;
                int32_t *l_681 = &l_646;
                int32_t *l_682 = (void*)0;
                int32_t *l_683 = &l_646;
                int32_t *l_684 = (void*)0;
                int32_t *l_685 = (void*)0;
                int32_t *l_687 = &l_547;
                int32_t *l_688 = &g_465;
                int32_t *l_689 = &l_481;
                uint32_t *l_730 = (void*)0;
                int8_t *l_759 = &g_379;
                uint16_t *l_760 = &g_429;
                int16_t *l_771 = (void*)0;
                int16_t *l_772 = &g_638;
                int8_t *l_773 = &g_774;
            }
        }
        if ((*l_476))
        {
            uint32_t l_775 = 0U;
            --l_775;
        }
        else
        {
            uint32_t l_790 = 0U;
            int32_t *l_799 = &l_485;
            int32_t *l_800 = &g_30;
            int32_t *l_801 = &l_500;
            int32_t *l_802 = &g_30;
            int32_t *l_803 = &l_500;
            int32_t *l_804 = &l_651;
            int32_t *l_805 = &g_30;
            int32_t *l_806 = &g_465;
            int32_t *l_807 = &l_646;
            int32_t *l_808 = (void*)0;
            int32_t *l_809 = &g_174;
            int32_t l_810 = (-7);
            int32_t *l_811 = &l_616;
            int32_t l_812 = (-3);
            int32_t *l_814 = (void*)0;
            int32_t *l_815 = &l_559;
            int32_t *l_816 = &l_647;
            int32_t *l_817 = &l_647;
            int32_t *l_818 = &l_651;
            int32_t *l_819 = &g_813;
            int32_t *l_820 = &l_646;
            int32_t *l_821 = &l_646;
            (*l_476) = (0x6EC9BEFE && ((safe_sub_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(((safe_div_func_uint16_t_u_u(((((*l_444) |= (*l_476)) >= g_342) ^ ((safe_rshift_func_uint8_t_u_u(((g_457 ^ ((((safe_rshift_func_int16_t_s_s((-3), (safe_div_func_uint8_t_u_u(l_790, (safe_div_func_uint8_t_u_u((safe_add_func_int16_t_s_s(((((((&g_483 != (l_795 = (void*)0)) > (safe_rshift_func_uint8_t_u_s(0xA8, g_274))) > (*l_476)) || p_81) > p_80) && p_81), 0xBDD6)), g_379)))))) < (*g_721)) && (*l_476)) || p_80)) & l_790), l_616)) < p_81)), (*l_476))) != (-1)), l_798)), (*l_476))) > 7U));
            g_822++;
            (*g_171) = l_825;
            (*l_815) = (*g_172);
        }
    }
    (*l_476) = (((safe_add_func_int32_t_s_s((1 == 2), 1U)) & ((*l_828) = 0xE9F5)) & (safe_add_func_int8_t_s_s((((0xBDE5 | (safe_rshift_func_int8_t_s_s((*l_476), 0))) & (g_723 < (l_833 && (((*l_834) = &l_709) != (void*)0)))) ^ g_89), p_81)));
    return l_435;
}
inline static uint16_t func_94(int32_t * p_95, uint32_t p_96, int32_t p_97)
{
    int32_t *l_358 = &g_174;
    int32_t *l_359 = &g_30;
    int32_t *l_360 = &g_174;
    int32_t *l_361 = &g_174;
    int32_t *l_362 = &g_30;
    int32_t *l_363 = (void*)0;
    int32_t *l_364 = (void*)0;
    int32_t *l_365 = &g_174;
    int32_t *l_366 = &g_30;
    int32_t *l_367 = &g_30;
    int32_t *l_368 = (void*)0;
    int32_t *l_369 = &g_30;
    int32_t *l_370 = &g_30;
    int32_t *l_371 = &g_174;
    int32_t *l_372 = &g_174;
    int32_t *l_373 = &g_30;
    int32_t *l_374 = &g_30;
    int32_t *l_375 = &g_174;
    int32_t *l_376 = (void*)0;
    int32_t *l_377 = (void*)0;
    int32_t *l_378 = &g_174;
    int32_t *l_380 = &g_174;
    int32_t *l_381 = &g_30;
    int32_t *l_382 = &g_30;
    int32_t *l_383 = &g_30;
    int32_t *l_384 = &g_30;
    int32_t *l_385 = &g_30;
    int32_t *l_386 = &g_30;
    int32_t l_387 = 0x0F9E0A5F;
    int32_t *l_388 = &l_387;
    int32_t *l_389 = &g_174;
    int32_t *l_390 = &l_387;
    int32_t *l_391 = &l_387;
    int32_t *l_392 = &g_30;
    int32_t *l_393 = &g_30;
    int32_t *l_394 = &g_174;
    int32_t *l_395 = &g_30;
    int32_t *l_396 = (void*)0;
    int32_t l_397 = 0xF25B8A72;
    int32_t *l_398 = &g_30;
    int32_t *l_399 = &g_30;
    int32_t *l_400 = (void*)0;
    int32_t *l_401 = &g_174;
    int32_t l_402 = 0xF3854348;
    int32_t *l_403 = &l_387;
    int32_t *l_404 = &g_174;
    int32_t l_405 = (-1);
    int32_t *l_407 = &l_397;
    int32_t *l_408 = (void*)0;
    int32_t *l_409 = &l_397;
    int32_t *l_410 = &g_30;
    int32_t *l_411 = &g_174;
    int32_t *l_412 = &g_174;
    int32_t *l_413 = &l_387;
    int32_t *l_414 = &l_387;
    int32_t *l_415 = (void*)0;
    int32_t *l_416 = &g_174;
    int32_t l_417 = 0x613173F1;
    int32_t *l_419 = &g_30;
    int32_t *l_420 = &l_405;
    int32_t *l_421 = (void*)0;
    int32_t *l_422 = &g_174;
    int32_t *l_423 = &l_387;
    int32_t *l_424 = &g_174;
    int32_t *l_425 = &l_405;
    int32_t *l_426 = &l_405;
    int32_t *l_427 = (void*)0;
    int32_t *l_428 = (void*)0;
    g_429--;
    return (*l_359);
}
static int32_t * func_98(int32_t p_99)
{
    int32_t *l_100 = &g_30;
    int32_t *l_101 = (void*)0;
    int32_t *l_102 = &g_30;
    int32_t *l_103 = &g_30;
    int32_t *l_104 = (void*)0;
    int32_t *l_105 = &g_30;
    int32_t *l_106 = &g_30;
    int32_t *l_107 = &g_30;
    int32_t *l_108 = (void*)0;
    int32_t *l_109 = &g_30;
    int32_t *l_110 = &g_30;
    int32_t *l_111 = (void*)0;
    int32_t *l_112 = &g_30;
    int32_t *l_113 = &g_30;
    int32_t *l_114 = &g_30;
    int32_t *l_115 = &g_30;
    int32_t l_116 = (-6);
    int32_t l_117 = (-4);
    int32_t *l_118 = &l_116;
    int32_t l_119 = (-1);
    int32_t *l_120 = &l_119;
    int32_t *l_121 = &l_119;
    int32_t *l_122 = (void*)0;
    int32_t *l_123 = &l_119;
    int32_t *l_124 = (void*)0;
    int32_t *l_125 = &g_30;
    int32_t *l_126 = &g_30;
    int32_t *l_127 = &l_116;
    int32_t *l_128 = &l_119;
    int32_t *l_129 = &l_117;
    int32_t *l_130 = &l_119;
    int32_t *l_131 = &l_119;
    int32_t *l_132 = &g_30;
    int32_t *l_133 = &g_30;
    int32_t *l_134 = &l_117;
    int32_t *l_135 = &l_119;
    int32_t *l_136 = &l_117;
    int32_t *l_137 = &g_30;
    uint32_t *l_147 = &g_148;
    uint8_t *l_273 = &g_274;
    uint8_t *l_316 = &g_304;
    uint8_t **l_315 = &l_316;
    uint8_t *l_317 = &g_274;
    int8_t l_357 = (-2);
    g_138++;
    p_99 = ((*l_137) = func_141(func_145((++(*l_147))), (*l_127), ((*l_273) = p_99)));
    if (((*l_132) && (safe_div_func_int16_t_s_s(((safe_sub_func_uint32_t_u_u((safe_add_func_int8_t_s_s(((l_273 != ((*l_315) = l_273)) != (*l_115)), ((l_317 == (void*)0) == (0x9A4F >= (safe_div_func_uint32_t_u_u(((safe_unary_minus_func_uint8_t_u(((safe_sub_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u(p_99, g_325)) >= 0xF5), p_99)) <= 4))) > (*l_105)), p_99)))))), p_99)) ^ p_99), p_99))))
    {
        int32_t l_330 = 0x5DAB0FEA;
        int32_t l_334 = 0x9BD9C482;
        uint32_t l_336 = 0xF1167A4C;
        int32_t l_337 = 0;
        l_337 &= ((safe_lshift_func_uint8_t_u_u((((l_330 = (--(*g_88))) && (0x36EB09B2 | p_99)) ^ ((safe_unary_minus_func_uint16_t_u((safe_add_func_uint8_t_u_u((l_334 > (!(g_38 <= g_11))), ((0xC4DC && g_38) | (0x5002 & p_99)))))) == l_336)), l_334)) != p_99);
        g_338--;
        g_342++;
    }
    else
    {
        uint8_t ***l_347 = &l_315;
        uint8_t **l_349 = &l_316;
        uint8_t ***l_348 = &l_349;
        (*l_134) ^= (((*g_88) = (safe_sub_func_int8_t_s_s(((p_99 < (*g_172)) && (((*g_88) > (((*l_347) = &l_316) != ((*l_348) = &l_317))) | ((*l_316) = (p_99 < (~((safe_rshift_func_uint16_t_u_s(65535U, 7)) > (safe_mod_func_uint16_t_u_u(((((safe_lshift_func_int8_t_s_u(g_342, l_357)) ^ p_99) ^ (*l_114)) ^ 0x96), 0xBA40)))))))), p_99))) || 0x32E4);
    }
    return (*g_171);
}
static int32_t func_141(uint16_t * p_142, int32_t p_143, uint8_t p_144)
{
    int32_t l_294 = 4;
    for (g_174 = (-1); (g_174 >= (-12)); g_174 = safe_sub_func_int8_t_s_s(g_174, 1))
    {
        uint16_t l_281 = 0xD979;
        for (g_148 = 0; (g_148 <= 14); ++g_148)
        {
            int8_t l_279 = (-2);
            uint8_t *l_282 = (void*)0;
            uint8_t *l_283 = &g_274;
            int8_t *l_293 = &g_193;
            int32_t l_295 = 9;
            int32_t *l_296 = &l_295;
            int32_t *l_297 = &l_294;
            int32_t *l_298 = (void*)0;
            int32_t *l_299 = &l_295;
            int32_t *l_300 = &g_30;
            int32_t *l_301 = &g_30;
            int32_t *l_302 = &g_30;
            int32_t *l_303 = &l_294;
            l_295 = ((*g_172) &= ((l_279 | ((safe_unary_minus_func_int8_t_s(g_148)) | ((*l_283) = (p_144 <= (l_281 ^ 0x59D7))))) & (safe_add_func_uint32_t_u_u(((*g_88) || ((g_11 | (((*l_293) &= ((safe_div_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(((((~l_279) >= (((safe_sub_func_uint16_t_u_u((0x0378A6B1 < 4294967286U), l_281)) <= (*g_88)) >= 0x6F0E2525)) | g_138) & p_143), 9)), p_143)) <= p_143)) != 0x05)) <= g_148)), l_294))));
            --g_304;
        }
        (**g_171) ^= l_281;
        return (*g_172);
    }
    for (g_174 = (-22); (g_174 != (-13)); g_174++)
    {
        (*g_171) = (*g_171);
    }
    return p_144;
}
static uint16_t * func_145(uint32_t p_146)
{
    uint16_t l_159 = 0U;
    uint32_t *l_166 = &g_148;
    uint32_t **l_165 = &l_166;
    int32_t *l_169 = &g_30;
    int32_t **l_168 = &l_169;
    int32_t *l_170 = &g_30;
    int16_t *l_272 = &g_38;
    (*g_171) = func_151(&g_148, ((g_138 | (p_146 || (safe_mod_func_uint16_t_u_u((((l_159 == (((safe_lshift_func_int8_t_s_u((!(safe_add_func_uint8_t_u_u((&p_146 != ((*l_165) = &p_146)), (~0U)))), 1)) <= (((*l_168) = &g_30) != l_170)) | 0)) && p_146) <= g_11), (-3))))) >= g_11), g_171, l_170, (*l_170));
    (*g_171) = func_151(&g_148, p_146, &l_169, (*g_171), (*g_88));
    (**l_168) = (((~((safe_div_func_int16_t_s_s((safe_sub_func_int16_t_s_s(g_148, (safe_add_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(5, (safe_rshift_func_int16_t_s_s(((*l_272) = ((safe_lshift_func_uint8_t_u_s((**l_168), ((**l_168) & ((safe_mod_func_int16_t_s_s(p_146, ((safe_div_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(0xEE68, 0x7568)), ((safe_add_func_int16_t_s_s((0xD186C8CC >= (safe_add_func_uint16_t_u_u((*l_169), g_174))), p_146)) | (*g_88)))) || (*g_88)))) | (*l_170))))) != p_146)), g_30)))), g_193)))), 0x2BA9)) && 0U)) <= p_146) >= g_148);
    (*g_172) ^= ((void*)0 != (*g_171));
    return &g_194;
}
static int32_t * func_151(uint32_t * p_152, int16_t p_153, int32_t ** p_154, int32_t * p_155, uint16_t p_156)
{
    uint8_t l_175 = 0xC7;
    int32_t l_197 = (-7);
    uint8_t l_207 = 6U;
    uint8_t l_234 = 0U;
    uint16_t **l_245 = &g_88;
    uint16_t ***l_244 = &l_245;
    uint16_t ****l_246 = (void*)0;
    uint16_t ****l_247 = (void*)0;
    uint16_t ****l_248 = &l_244;
    if ((**p_154))
    {
        int32_t *l_173 = &g_174;
        uint32_t *l_179 = &g_148;
        uint32_t **l_178 = &l_179;
        int8_t *l_192 = &g_193;
        uint8_t *l_195 = &l_175;
        int16_t l_196 = 0;
        (*l_173) ^= (*g_172);
        --l_175;
        (**p_154) = ((((*l_178) = (void*)0) != &g_148) ^ (g_89 >= (safe_div_func_uint32_t_u_u((safe_add_func_uint32_t_u_u(p_153, (safe_lshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((safe_sub_func_int32_t_s_s((l_196 &= (l_175 || ((*l_195) = (g_194 &= (((safe_add_func_int8_t_s_s(((*l_192) &= p_156), 0xFE)) == (g_38 >= g_148)) < (*p_155)))))), (*l_173))), 9)), l_197)))), (*l_173)))));
    }
    else
    {
        int32_t *l_201 = &g_174;
        int32_t *l_226 = (void*)0;
        int32_t *l_227 = (void*)0;
        int32_t *l_228 = &l_197;
        int32_t *l_229 = &l_197;
        int32_t *l_230 = (void*)0;
        int32_t *l_231 = &l_197;
        int32_t *l_232 = &g_30;
        int32_t *l_233 = &g_174;
        for (l_175 = 0; (l_175 != 48); l_175 = safe_add_func_int8_t_s_s(l_175, 4))
        {
            uint32_t l_200 = 9U;
            int16_t l_206 = (-4);
            int32_t l_221 = (-1);
            if (((((void*)0 == &p_156) | (l_200 != ((void*)0 == l_201))) && ((safe_lshift_func_int16_t_s_u(((((safe_lshift_func_int8_t_s_u((*l_201), (l_175 & p_156))) ^ (g_193 == l_206)) <= p_153) & l_207), 11)) != (*g_88))))
            {
                int32_t **l_218 = &l_201;
                int16_t *l_222 = &g_38;
                uint16_t ***l_223 = (void*)0;
                uint16_t **l_225 = (void*)0;
                uint16_t ***l_224 = &l_225;
                (**g_171) = (((*l_201) = (**p_154)) ^ (safe_sub_func_uint16_t_u_u((p_153 != ((*l_222) = (safe_sub_func_int32_t_s_s(((((safe_rshift_func_int16_t_s_u((safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((((*g_88) != ((void*)0 != l_218)) >= (safe_div_func_uint16_t_u_u((l_221 = p_156), (((p_156 <= (g_138 == p_156)) == g_194) && l_197)))), l_200)), l_197)), 15)) != g_148) & (*g_88)) < 0xED364FFC), 0)))), 0U)));
                (*p_154) = (*g_171);
                (*l_224) = (void*)0;
                return (*g_171);
            }
            else
            {
                return (*p_154);
            }
        }
        ++l_234;
        if ((*p_155))
        {
            uint32_t l_237 = 4294967295U;
            --l_237;
            (*g_171) = (*g_171);
        }
        else
        {
            int8_t l_241 = 0x77;
            (*l_229) = ((!l_241) && l_207);
            (*l_228) &= (safe_add_func_uint16_t_u_u((*g_88), 0xAA5B));
        }
        return (*p_154);
    }
    (*l_248) = l_244;
    return (*g_171);
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    g_172 = 0;
    csmith_sink_ = g_11;
    csmith_sink_ = g_23;
    csmith_sink_ = g_30;
    csmith_sink_ = g_38;
    csmith_sink_ = g_67;
    csmith_sink_ = g_89;
    csmith_sink_ = g_138;
    csmith_sink_ = g_148;
    csmith_sink_ = g_174;
    csmith_sink_ = g_193;
    csmith_sink_ = g_194;
    csmith_sink_ = g_274;
    csmith_sink_ = g_304;
    csmith_sink_ = g_325;
    csmith_sink_ = g_338;
    csmith_sink_ = g_341;
    csmith_sink_ = g_342;
    csmith_sink_ = g_379;
    csmith_sink_ = g_406;
    csmith_sink_ = g_418;
    csmith_sink_ = g_429;
    csmith_sink_ = g_457;
    csmith_sink_ = g_465;
    csmith_sink_ = g_575;
    csmith_sink_ = g_638;
    csmith_sink_ = g_690;
    csmith_sink_ = g_723;
    csmith_sink_ = g_774;
    csmith_sink_ = g_813;
    csmith_sink_ = g_822;
    csmith_sink_ = g_837;
    csmith_sink_ = g_990;
    csmith_sink_ = g_1024;
    csmith_sink_ = g_1035;
    csmith_sink_ = g_1059;
    csmith_sink_ = g_1068;
    csmith_sink_ = g_1291;
    csmith_sink_ = g_1318;
    csmith_sink_ = g_1334;
    platform_main_end(0,0);
    return 0;
}
