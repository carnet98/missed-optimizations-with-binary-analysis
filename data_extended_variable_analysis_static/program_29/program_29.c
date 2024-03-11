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
static int32_t g_2 = 0xA48BBCA6;
static int8_t g_6 = 0;
static int8_t g_35 = 0;
static int32_t g_85 = 0;
static int32_t g_106 = 7;
static int16_t g_136 = 1;
static int8_t g_137 = 1;
static int16_t g_139 = (-1);
static int16_t g_140 = 0xEEA4;
static int16_t g_143 = (-10);
static uint32_t g_278 = 0x793C2613;
static uint32_t g_362 = 0xF33B0065;
static int32_t g_462 = 0xA0DD309E;
static int8_t g_884 = 3;
static uint16_t g_885 = 65528U;
static uint32_t g_916 = 1U;
static uint32_t g_929 = 6U;
static uint32_t g_949 = 0x969868C8;
static int16_t g_985 = (-6);
static int8_t g_1008 = 0x42;
static int16_t g_1025 = 0xDF8F;
static uint32_t g_1047 = 0xD599FB76;
static int8_t g_1050 = 0x84;
static int8_t g_1052 = (-9);
static int16_t g_1053 = 0;
static uint32_t g_1055 = 0U;
static int8_t func_1(void);
static int32_t func_7(uint32_t p_8);
inline static uint8_t func_12(int8_t p_13, int16_t p_14, uint32_t p_15, uint32_t p_16, uint32_t p_17);
inline static uint8_t func_20(uint32_t p_21, int32_t p_22, int32_t p_23, uint32_t p_24);
static uint32_t func_25(int32_t p_26, int32_t p_27, uint8_t p_28, uint16_t p_29);
inline static uint8_t func_36(uint32_t p_37);
static uint16_t func_50(uint16_t p_51);
inline static int16_t func_53(uint32_t p_54, int8_t p_55, int32_t p_56);
static uint8_t func_59(int16_t p_60, int16_t p_61, int32_t p_62);
static int16_t func_69(uint16_t p_70, int16_t p_71, int8_t p_72, int32_t p_73, int32_t p_74);
static int8_t func_1(void)
{
    int32_t l_886 = 0x25EC14DC;
    uint32_t l_942 = 0x63D3A7DF;
    int32_t l_962 = 1;
    int32_t l_1051 = 0x0DE9C7AC;
    int32_t l_1054 = 1;
    for (g_2 = (-1); (g_2 != 18); g_2++)
    {
        uint8_t l_5 = 0x9A;
        uint32_t l_891 = 1U;
        int32_t l_918 = (-1);
        int32_t l_933 = 0xC72A1370;
        int32_t l_1045 = 0xEDE97DFF;
        int16_t l_1046 = 0xC9DF;
        g_6 = (0U > (l_5 < l_5));
        l_886 = func_7(g_6);
        for (g_884 = 0; (g_884 <= 6); g_884 = safe_add_func_uint8_t_u_u(g_884, 1))
        {
            uint8_t l_889 = 8U;
            int32_t l_890 = (-2);
            int8_t l_1018 = (-2);
            uint32_t l_1019 = 4294967295U;
            if (l_889)
            {
                --l_891;
            }
            else
            {
                uint32_t l_899 = 4294967294U;
                int32_t l_986 = 0x409DCF4C;
                if (l_890)
                {
                    uint8_t l_896 = 0U;
                    uint16_t l_917 = 0x307A;
                    for (g_136 = 4; (g_136 == 21); g_136 = safe_add_func_uint32_t_u_u(g_136, 9))
                    {
                        g_106 = ((g_462 & ((l_896 | (safe_sub_func_int16_t_s_s((-1), ((l_899 <= (safe_mod_func_int16_t_s_s((((253U != ((safe_add_func_int32_t_s_s((((safe_div_func_uint8_t_u_u(((safe_add_func_uint8_t_u_u((safe_mod_func_int32_t_s_s((safe_div_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((g_35 ^ l_899), 0xBF)), (safe_mod_func_int16_t_s_s(((l_886 >= l_896) ^ l_891), l_886)))), l_889)), g_916)) != l_886), g_462)) & 1U) == (-5)), g_35)) < l_917)) ^ 0x63D41280) == g_2), l_891))) > g_85)))) != g_2)) ^ 255U);
                        l_918 = g_139;
                    }
                    return l_889;
                }
                else
                {
                    int16_t l_921 = 3;
                    uint32_t l_964 = 1U;
                    int16_t l_976 = 0x15FD;
                    g_106 = g_916;
                    if ((((safe_lshift_func_int8_t_s_u(0x86, 4)) < ((l_921 != 8) || l_899)) == (((safe_mod_func_uint32_t_u_u(((safe_add_func_uint8_t_u_u(0U, 0x87)) ^ (safe_unary_minus_func_int16_t_s(l_921))), g_462)) > ((safe_sub_func_uint32_t_u_u((l_891 || (-1)), l_899)) > g_362)) ^ 0xA219)))
                    {
                        uint8_t l_930 = 0xA6;
                        int32_t l_948 = 0;
                        if (l_899)
                            break;
                        if (g_929)
                            continue;
                        l_930++;
                        l_948 &= ((0xDCFF6E80 | ((g_136 ^ l_933) && ((((((0xE5 && (safe_lshift_func_uint16_t_u_u((g_2 & (0x088F708C | (safe_mod_func_uint32_t_u_u((safe_add_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s(((l_886 && l_942) > (!(safe_lshift_func_uint8_t_u_u(((safe_mod_func_uint8_t_u_u(254U, l_886)) && g_139), 4)))), 3)), 4U)), g_929)))), 1))) && g_136) < 0x3A460195) <= l_5) ^ (-1)) >= g_140))) >= l_933);
                    }
                    else
                    {
                        int16_t l_958 = 0;
                        int32_t l_961 = (-1);
                        int32_t l_963 = (-1);
                        g_949--;
                        l_890 ^= (g_885 < ((safe_add_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((safe_div_func_uint32_t_u_u(l_886, ((g_106 < l_958) | g_362))), ((l_889 && (safe_add_func_uint32_t_u_u(4294967295U, (l_921 <= (l_5 >= g_362))))) <= 2U))), l_921)) & g_916));
                        l_964++;
                    }
                    l_986 = (((safe_unary_minus_func_int16_t_s((!(safe_mod_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u((g_85 || g_462), 0x4E)) | (safe_add_func_int32_t_s_s(((0xFE49 <= (!g_140)) & (((0x63454881 > l_976) ^ (safe_rshift_func_int16_t_s_s((safe_mod_func_int16_t_s_s(((safe_sub_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_u(5U, 7)) != (l_921 >= g_985)), 4U)) != l_5), (-9))), 8))) & g_6)), 5U))), l_933))))) && g_35) > 0);
                    g_1008 &= (safe_div_func_uint8_t_u_u(((safe_add_func_int16_t_s_s((safe_add_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_u(g_916, 6)) ^ l_886), g_143)), ((+((0x9D <= l_976) ^ ((safe_rshift_func_int8_t_s_s((0xBB6B || (((safe_lshift_func_int8_t_s_s((((safe_rshift_func_uint8_t_u_s(l_986, 2)) < 0xCB) > ((safe_add_func_uint8_t_u_u((((safe_div_func_int16_t_s_s((safe_mod_func_int8_t_s_s(g_985, (-1))), g_35)) <= g_85) > 0x2A6021E6), g_106)) == g_85)), 5)) | (-6)) > g_6)), l_899)) > 0xFB8E))) == 0xE7CF))) <= 0x7C), g_139));
                }
                for (l_5 = 3; (l_5 >= 18); l_5 = safe_add_func_int32_t_s_s(l_5, 6))
                {
                    int32_t l_1017 = (-3);
                    l_1019 ^= (g_136 || (((((((!g_1008) || l_890) && (((!((l_986 >= g_137) != ((safe_rshift_func_int8_t_s_s(1, 7)) != g_949))) != (safe_mod_func_int8_t_s_s(0x55, g_1008))) > l_1017)) != g_929) || l_1018) && g_2) & g_462));
                }
                g_106 |= (((!(-7)) == 0) | (safe_add_func_uint8_t_u_u((g_1025 & 0x8B), (g_85 < l_986))));
            }
        }
        for (g_1008 = 0; (g_1008 <= (-26)); --g_1008)
        {
            int16_t l_1038 = 0x01E9;
            int8_t l_1041 = 0xFF;
            if ((safe_lshift_func_uint16_t_u_s(((safe_sub_func_uint32_t_u_u((safe_div_func_int32_t_s_s((safe_sub_func_int8_t_s_s(g_140, 253U)), (safe_add_func_uint16_t_u_u(((l_1038 > (l_1038 | l_5)) <= 7U), ((((safe_add_func_uint32_t_u_u(l_1041, 0xFEB58EB3)) || (safe_add_func_int16_t_s_s(g_278, g_106))) <= g_6) >= l_1041))))), 0xAAE43666)) == (-8)), 3)))
            {
                int16_t l_1044 = 0xD7FC;
                g_106 = l_1044;
                if (g_140)
                    continue;
                if (l_1045)
                    break;
            }
            else
            {
                --g_1047;
            }
        }
    }
    --g_1055;
    return l_942;
}
static int32_t func_7(uint32_t p_8)
{
    int32_t l_11 = 0x4B58E17C;
    uint32_t l_30 = 0U;
    int16_t l_33 = 6;
    int16_t l_883 = 0xBD60;
    g_884 ^= ((safe_rshift_func_int16_t_s_u(((l_11 ^ func_12(p_8, g_6, (safe_lshift_func_uint8_t_u_u(func_20(func_25(p_8, g_2, l_30, l_30), (safe_div_func_int8_t_s_s(g_6, 1U)), g_6, l_33), 1)), g_140, l_11)) || l_33), l_883)) >= 0x92);
    g_885 = l_33;
    return p_8;
}
inline static uint8_t func_12(int8_t p_13, int16_t p_14, uint32_t p_15, uint32_t p_16, uint32_t p_17)
{
    uint32_t l_611 = 9U;
    uint32_t l_620 = 1U;
    int16_t l_644 = 0x48E6;
    uint32_t l_667 = 1U;
    int32_t l_678 = 0xDAAF38A7;
    int32_t l_697 = 0x0E0C538D;
    int8_t l_755 = (-5);
    int32_t l_756 = 0x5EABDA34;
    if ((~(0x7D > (safe_rshift_func_int16_t_s_u((safe_add_func_int16_t_s_s(0xC788, (safe_rshift_func_uint8_t_u_u((p_15 && 4294967295U), 5)))), (safe_lshift_func_int16_t_s_s(((0xFF && ((g_362 | ((l_611 < (safe_div_func_int32_t_s_s(((safe_add_func_int8_t_s_s(((safe_div_func_int8_t_s_s((safe_add_func_uint16_t_u_u(((p_15 ^ ((0xD632 != l_620) && l_611)) == l_611), 0x5F1F)), g_278)) ^ l_611), l_620)) & l_620), p_17))) ^ 6)) == 252U)) != 7U), p_15)))))))
    {
        uint32_t l_621 = 0x96F6385F;
        uint32_t l_643 = 0U;
        g_106 = ((((l_621 && (((~(9 ^ ((safe_lshift_func_int16_t_s_s(0x556B, 4)) | (l_621 & (safe_mod_func_uint16_t_u_u((((safe_lshift_func_uint8_t_u_u(((((0x134D > g_6) & (((safe_rshift_func_int16_t_s_u(g_140, 3)) == ((((safe_lshift_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(((((((safe_mod_func_uint8_t_u_u(((safe_mod_func_int32_t_s_s(((((safe_sub_func_int16_t_s_s(((((safe_mod_func_uint32_t_u_u((0x82638BED > p_16), 7U)) > p_16) != p_13) <= g_139), 65529U)) | p_15) <= 65535U) < g_35), 4)) & l_621), l_621)) && 0) == l_621) == g_140) && g_136) < g_139), g_2)), 13)) | l_643) | 0xD0E156FA) && (-2))) || p_13)) & g_462) && l_620), g_139)) >= 5) && p_17), l_644)))))) == l_643) & l_643)) != p_15) != 0x97BFD730) && l_611);
    }
    else
    {
        int32_t l_647 = 1;
        l_647 |= (safe_lshift_func_uint8_t_u_u(l_611, 3));
        l_647 = ((g_139 & (0 & (g_106 | ((safe_lshift_func_uint8_t_u_u((!g_462), (safe_mod_func_uint32_t_u_u(g_137, (safe_lshift_func_int8_t_s_u((safe_mod_func_int32_t_s_s((safe_add_func_uint32_t_u_u(0x9D2D7FA0, (p_14 < l_647))), (safe_rshift_func_uint8_t_u_s((safe_div_func_int16_t_s_s(g_136, g_106)), 4)))), 4)))))) && g_140)))) | 0xA0B92CAF);
        for (g_362 = 0; (g_362 > 35); g_362 = safe_add_func_int16_t_s_s(g_362, 3))
        {
            g_106 = (g_137 <= (safe_add_func_uint16_t_u_u(((0xEE00 & (0 ^ (0xF2C1 | (l_667 >= p_16)))) | ((safe_lshift_func_int16_t_s_s((g_137 > l_647), (0x63 && g_6))) != (-3))), 1)));
        }
    }
    l_678 = (g_136 >= (g_143 && ((safe_rshift_func_uint16_t_u_u((0 > ((l_620 > (safe_add_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((0x642A | 0U), 10)), (safe_div_func_int32_t_s_s(g_362, (-1)))))) & p_17)), 12)) != 0xBA1C6654)));
    if ((safe_sub_func_uint16_t_u_u((safe_div_func_int16_t_s_s(((65535U || l_678) > (g_278 | ((safe_lshift_func_int8_t_s_u(((safe_div_func_uint32_t_u_u(4294967291U, ((safe_rshift_func_uint16_t_u_u(g_136, 12)) || (~(safe_rshift_func_uint16_t_u_s((+65527U), 5)))))) <= l_667), ((((safe_mod_func_int8_t_s_s((l_678 != 3), g_136)) | (-1)) || p_16) <= g_2))) & g_143))), 1U)), l_620)))
    {
        for (p_13 = (-3); (p_13 <= (-6)); p_13 = safe_sub_func_uint8_t_u_u(p_13, 9))
        {
            l_697 ^= l_611;
        }
        return g_137;
    }
    else
    {
        uint32_t l_706 = 0U;
        int32_t l_714 = 0;
        int32_t l_876 = (-1);
        l_714 = (safe_lshift_func_uint16_t_u_s((((253U > g_2) | ((~(((+(safe_div_func_uint32_t_u_u(p_17, (safe_sub_func_uint8_t_u_u(((1U & l_706) > p_14), (safe_mod_func_int8_t_s_s((safe_mod_func_int8_t_s_s((!(g_106 <= (safe_div_func_uint8_t_u_u((p_13 && 4294967295U), g_85)))), g_2)), (-1)))))))) <= l_706) == g_85)) >= g_137)) < l_706), 7));
        for (g_137 = 0; (g_137 > (-13)); g_137 = safe_sub_func_int8_t_s_s(g_137, 3))
        {
            int8_t l_749 = (-9);
            int32_t l_752 = 0x954E6C62;
            for (g_35 = 0; (g_35 < 15); g_35 = safe_add_func_int16_t_s_s(g_35, 2))
            {
                int32_t l_723 = 5;
                int32_t l_730 = 0x3ABB5D24;
                int32_t l_823 = 0xCE8CAD33;
                if (((-2) < (((safe_add_func_uint32_t_u_u(((safe_rshift_func_uint16_t_u_u(((l_723 | (((safe_lshift_func_int8_t_s_u((safe_div_func_uint8_t_u_u(g_362, (safe_rshift_func_int8_t_s_s(g_137, 0)))), ((l_730 ^ (safe_div_func_uint8_t_u_u((p_16 == (safe_lshift_func_uint8_t_u_s(((safe_add_func_uint16_t_u_u((l_706 || (((safe_div_func_int8_t_s_s(0xF6, l_730)) || p_16) & 1)), l_644)) && p_16), p_17))), g_106))) & 65532U))) | g_137) != (-1))) >= 0x9CE98F53), 5)) && g_139), p_13)) < 2U) && 4294967289U)))
                {
                    uint8_t l_757 = 1U;
                    int32_t l_788 = (-1);
                    l_752 = (((0xB5CFA8EB <= (safe_rshift_func_uint16_t_u_u(65534U, 9))) & ((safe_sub_func_uint16_t_u_u((((1 ^ (safe_sub_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(0x01, 0x8F)), (safe_lshift_func_uint16_t_u_s((((((l_749 == (g_140 <= (safe_lshift_func_uint16_t_u_s(((1U > ((l_620 > p_17) >= l_706)) ^ p_15), g_106)))) != 0xA4D6) == 2) != p_14) > p_14), 14))))) < p_15) | l_706), 65534U)) | 0x1F)) & 1U);
                    for (l_697 = 0; (l_697 <= (-28)); l_697 = safe_sub_func_int8_t_s_s(l_697, 4))
                    {
                        l_757++;
                    }
                    if (((0x17 & 7) == 0x0B7E))
                    {
                        uint16_t l_768 = 65530U;
                        if (l_697)
                            break;
                        g_106 = (safe_div_func_int16_t_s_s(((safe_div_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_s(((((0x47F2B78B <= (((safe_add_func_uint32_t_u_u(p_17, ((l_768 & 0x6B) || (safe_rshift_func_uint16_t_u_u((((l_752 || (5U && p_15)) | (((4294967295U < 0x6A4B8121) != g_136) & l_757)) != p_13), 6))))) && l_723) || 0x22)) && 4294967295U) & 0) || l_714), p_13)) <= 0xB3), p_13)) | p_13), (-9)));
                    }
                    else
                    {
                        int32_t l_777 = 0xAE477902;
                        g_106 = ((g_35 > p_15) <= l_723);
                        if (g_106)
                            break;
                        l_788 = (l_752 && (safe_mod_func_int16_t_s_s(l_714, ((g_106 ^ ((safe_rshift_func_uint16_t_u_s((g_35 | (safe_div_func_uint8_t_u_u(l_777, 1U))), 11)) && (safe_sub_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(((safe_sub_func_int8_t_s_s(l_723, ((safe_add_func_uint16_t_u_u((((safe_lshift_func_int8_t_s_s(l_788, 7)) >= (safe_mod_func_int8_t_s_s(((safe_sub_func_uint8_t_u_u(((((+((g_139 || p_14) | p_16)) < p_14) ^ 0xCA) >= g_137), l_697)) >= 0x2B4206B8), p_17))) && g_362), 0)) && 0x3B))) < l_752), 5)), 9U)))) | p_13))));
                    }
                    return l_697;
                }
                else
                {
                    l_823 &= (1 | ((safe_mod_func_uint16_t_u_u(g_136, ((safe_rshift_func_int8_t_s_u(l_749, 5)) & l_706))) < (l_706 >= (safe_lshift_func_uint8_t_u_s((safe_mod_func_uint32_t_u_u(((g_85 <= ((safe_lshift_func_int8_t_s_u((safe_unary_minus_func_uint8_t_u(((1U < (safe_sub_func_uint16_t_u_u((((((l_730 <= (safe_add_func_int8_t_s_s((safe_sub_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u((safe_div_func_int16_t_s_s(((((safe_div_func_uint8_t_u_u((safe_add_func_int32_t_s_s(((safe_rshift_func_uint8_t_u_u((1U > p_16), g_2)) < 0x0CCE), l_749)), 1U)) | l_723) >= g_462) >= 1U), g_278)), 14)), 1U)), 0xE8))) <= p_13) | g_6) ^ g_136) == p_16), 1U))) | 0x0CD4))), 4)) <= p_16)) && g_35), (-1))), l_611)))));
                }
            }
            g_106 = (p_16 < (((((safe_add_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u(((safe_add_func_int32_t_s_s((p_14 || (safe_add_func_int32_t_s_s(2, ((0xA6E7BFB8 && 0x22FA0518) >= (safe_sub_func_uint8_t_u_u((!((l_749 > ((((safe_div_func_uint32_t_u_u((((p_13 <= (safe_sub_func_uint8_t_u_u(l_706, p_16))) | g_143) <= l_749), 5U)) && 4294967294U) & p_13) >= l_706)) == l_752)), p_14)))))), p_13)) ^ p_15), l_714)), l_678)) && 0x64) & 0x1679EA7D) < g_362) & g_362));
        }
        if (g_143)
        {
            g_106 &= (g_85 <= (+0x77B6));
        }
        else
        {
            uint16_t l_854 = 0U;
            int32_t l_878 = 1;
            l_854 = ((+(safe_div_func_int32_t_s_s(((((+p_13) <= (1 && (safe_lshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((((l_714 < (p_17 < ((p_16 ^ (safe_mod_func_uint8_t_u_u((((-10) == (safe_rshift_func_int16_t_s_u(0x307C, 12))) < g_278), (safe_sub_func_uint8_t_u_u((0x0A > 0x6F), g_143))))) == 0x5779))) ^ 65535U) && p_13), g_6)), 15)))) || l_755) == p_15), g_2))) || (-1));
            l_876 ^= ((((+(((safe_add_func_uint16_t_u_u(p_17, (safe_sub_func_uint16_t_u_u((((safe_mod_func_int16_t_s_s(((1U >= (safe_rshift_func_int16_t_s_u(0xA2F1, (((g_139 == (safe_mod_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s((1 & l_714), (safe_rshift_func_int8_t_s_u((((safe_add_func_uint8_t_u_u(p_15, l_706)) != (safe_add_func_int32_t_s_s((l_706 ^ g_35), 0x10CD6EBC))) & 0U), g_143)))) && 1U), 0x4217))) | g_139) < p_14)))) && g_136), g_6)) & p_13) != p_17), 0xE82A)))) != l_755) || l_706)) || l_644) <= l_644) | 65531U);
            l_878 |= ((!(l_854 && 0x5A29)) >= g_143);
        }
    }
    l_697 = (safe_add_func_uint16_t_u_u(0xAF27, (safe_sub_func_uint32_t_u_u(0x4C3E1F6E, g_85))));
    return l_667;
}
inline static uint8_t func_20(uint32_t p_21, int32_t p_22, int32_t p_23, uint32_t p_24)
{
    int32_t l_34 = 0x9040C3F3;
    uint32_t l_310 = 0x0C7B6A19;
    uint8_t l_356 = 1U;
    int32_t l_360 = 0x7E5DD029;
    int32_t l_361 = 0x019D5596;
    uint8_t l_387 = 0U;
    uint8_t l_463 = 0x3C;
    int32_t l_485 = (-9);
    int16_t l_519 = 0;
    uint32_t l_576 = 0xFEFB1DB1;
    uint16_t l_599 = 65533U;
lbl_404:
    g_35 = l_34;
    if ((func_36(((func_25(p_21, ((-1) != (g_35 > (g_35 < 0))), ((+p_23) ^ g_35), g_35) != g_35) || g_2)) & p_23))
    {
        uint8_t l_247 = 255U;
        int32_t l_288 = 1;
        uint32_t l_390 = 4294967293U;
        l_247++;
        g_106 = (safe_add_func_uint16_t_u_u((safe_div_func_int32_t_s_s(0x60B61569, 1)), ((safe_mod_func_int8_t_s_s(l_34, (((safe_rshift_func_uint16_t_u_u(65529U, (safe_add_func_int32_t_s_s(p_24, (safe_sub_func_int32_t_s_s(((3U >= (!((7U == ((((safe_rshift_func_uint8_t_u_s(((((safe_div_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((p_23 && (safe_sub_func_uint8_t_u_u((p_22 || 0xC0), p_21))), l_34)), 0x5795)) == 65534U) && p_21) >= g_137), p_22)) ^ g_6) || p_24) == 0)) == l_34))) < g_143), 0xBDD23608)))))) == l_34) || g_35))) | l_247)));
        p_23 = g_2;
        for (p_24 = 0; (p_24 <= 21); ++p_24)
        {
            uint32_t l_318 = 4294967291U;
            int32_t l_403 = 0x1AB3E258;
            int32_t l_459 = (-7);
            if (p_23)
            {
                uint8_t l_289 = 0xEA;
                p_23 |= 0;
                for (g_137 = 0; (g_137 >= (-15)); g_137 = safe_sub_func_int8_t_s_s(g_137, 7))
                {
                    int32_t l_287 = 0xDF52C73A;
                    for (g_136 = 0; (g_136 <= 6); g_136 = safe_add_func_int8_t_s_s(g_136, 9))
                    {
                        int8_t l_277 = (-2);
                        l_277 = (l_34 ^ 0x5EF4);
                    }
                    p_23 |= 6;
                    ++g_278;
                    for (p_23 = 0; (p_23 < (-12)); p_23 = safe_sub_func_uint8_t_u_u(p_23, 3))
                    {
                        uint32_t l_283 = 0xCFC68CC6;
                        int32_t l_286 = 0;
                        l_283++;
                        ++l_289;
                    }
                }
                for (p_21 = 0; (p_21 != 3); p_21++)
                {
                    return g_2;
                }
            }
            else
            {
                p_23 = 0;
            }
            p_23 = ((safe_sub_func_int16_t_s_s((safe_add_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s(l_288, ((p_22 | (g_85 || (safe_add_func_uint8_t_u_u(((((safe_add_func_uint16_t_u_u(g_85, p_24)) > ((safe_mod_func_int32_t_s_s((g_139 | ((safe_rshift_func_uint8_t_u_s(l_310, ((!((safe_rshift_func_int8_t_s_u((l_288 & ((((safe_add_func_int32_t_s_s((safe_add_func_int8_t_s_s(l_247, g_139)), 1U)) <= g_137) ^ l_247) <= p_23)), p_21)) == g_106)) <= p_21))) >= 0x359BE378)), g_6)) >= g_2)) | p_24) ^ g_140), p_22)))) <= (-1)))), (-2))), 0U)) > g_143);
            if (l_318)
            {
                uint16_t l_319 = 0x6BE3;
                if (l_319)
                    break;
            }
            else
            {
                int32_t l_336 = 0x857A1910;
                uint32_t l_358 = 0x7BE777DD;
                uint16_t l_442 = 0x9D4C;
                if (g_278)
                {
                    int32_t l_340 = 0x0E2EEFEA;
                    int16_t l_389 = 0xE57F;
                    int32_t l_461 = 6;
                    if ((p_24 > (~g_35)))
                    {
                        uint8_t l_335 = 9U;
                        uint16_t l_357 = 0xD09D;
                        int32_t l_359 = 0x0B79E957;
                        l_336 = (((safe_lshift_func_int8_t_s_s(g_85, ((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(0x17, (safe_lshift_func_int16_t_s_u(((!((~(1U && ((safe_rshift_func_int16_t_s_s((l_310 & p_21), l_310)) == (65528U <= (safe_sub_func_uint8_t_u_u(0U, 0x26)))))) & p_21)) ^ l_247), 0)))), l_34)) <= p_24))) || g_35) && l_335);
                        l_340 = (~(safe_sub_func_int32_t_s_s((l_340 == (8U && ((safe_lshift_func_int16_t_s_s((g_106 > ((safe_lshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_s(((2 != ((safe_div_func_int16_t_s_s((l_34 ^ (safe_div_func_uint16_t_u_u(l_318, (1 | (!(p_21 && (safe_lshift_func_int16_t_s_u(((safe_sub_func_int16_t_s_s(l_356, g_85)) <= l_247), l_357)))))))), g_85)) || l_247)) <= g_136), p_24)), l_336)) <= g_85)), g_143)) == 0U))), l_358)));
                        g_362++;
                    }
                    else
                    {
                        uint32_t l_388 = 0U;
                        p_23 = (l_360 == (safe_lshift_func_int16_t_s_u(((((safe_sub_func_uint32_t_u_u(g_35, (((((p_22 <= 9U) || (safe_div_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u((((safe_mod_func_int8_t_s_s((safe_div_func_int32_t_s_s(((safe_div_func_int32_t_s_s((safe_lshift_func_int8_t_s_u((safe_mod_func_int16_t_s_s(0x81AE, (((g_2 & (((((l_318 | (p_24 | ((safe_lshift_func_int8_t_s_u((safe_div_func_uint8_t_u_u(0xA8, l_387)), l_318)) & l_388))) <= g_106) && l_356) && l_388) == g_278)) | g_139) && 0xC4))), 6)), l_389)) ^ p_22), g_278)), g_140)) > p_23) <= l_390), l_288)), p_24))) < g_35) < 65534U) && p_21))) != 4294967286U) == p_21) || g_139), g_106)));
                        l_403 = (safe_rshift_func_int16_t_s_u(((((safe_lshift_func_uint16_t_u_s(((safe_add_func_int8_t_s_s(g_85, 0x1B)) >= 0xA9), ((p_21 && g_106) > (g_143 < (safe_lshift_func_int8_t_s_u((((safe_add_func_uint32_t_u_u(g_139, (safe_sub_func_uint16_t_u_u(((65527U < (g_278 <= g_143)) || 0x912A), g_6)))) > l_340) && l_358), p_24)))))) >= p_23) | p_22) != 251U), 12));
                        g_106 = l_358;
                        if (l_336)
                            goto lbl_404;
                    }
                    if ((((((safe_rshift_func_uint16_t_u_s(5U, p_23)) != ((p_23 > p_23) <= (+(safe_lshift_func_uint16_t_u_s((g_140 >= g_35), (p_22 <= g_106)))))) != p_24) & l_340) & p_22))
                    {
                        uint8_t l_425 = 252U;
                        if (g_137)
                            goto lbl_404;
                        g_106 = (safe_sub_func_uint32_t_u_u(g_140, ((safe_rshift_func_int8_t_s_u((safe_div_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_s((((safe_rshift_func_uint16_t_u_u(((~(safe_rshift_func_uint16_t_u_s(((safe_sub_func_int16_t_s_s((l_389 | ((l_425 <= (safe_lshift_func_int8_t_s_s(0, ((((safe_mod_func_int8_t_s_s(p_21, (safe_add_func_uint16_t_u_u(((((safe_sub_func_uint32_t_u_u(((0x4A < (safe_lshift_func_int8_t_s_u((0 || ((safe_mod_func_uint16_t_u_u((((safe_add_func_uint8_t_u_u((((((safe_sub_func_uint16_t_u_u(g_143, 0x4097)) != l_389) != p_22) != g_136) && p_21), (-1))) <= 0xC4) & l_336), p_22)) >= g_85)), g_139))) >= l_340), l_356)) != p_23) && g_35) != 0x9B59), (-1))))) < p_23) > g_2) | 0x416D6613)))) & g_278)), p_23)) && p_24), p_21))) > p_24), l_34)) > 1U) | g_35), g_2)) <= l_340), g_137)), 7)) & (-10))));
                    }
                    else
                    {
                        int16_t l_458 = (-7);
                        int32_t l_460 = 0x3827F1B1;
                        ++l_442;
                        g_106 |= (((((((safe_rshift_func_uint16_t_u_u((0x29 < (safe_sub_func_int32_t_s_s(((safe_sub_func_int32_t_s_s((((safe_sub_func_uint32_t_u_u(0x2C9B0C5A, (((g_85 && ((((((((safe_lshift_func_int8_t_s_u(9, 6)) == (~0x6BBA4375)) >= 4U) >= (safe_lshift_func_int16_t_s_u(0, 14))) <= l_458) < 0x64A6) <= (-1)) >= p_22)) <= g_136) >= l_358))) > 0xADB9BABA) | l_459), 0x00C48DCC)) <= l_361), p_23))), g_362)) == g_6) > p_24) < p_24) | (-8)) || l_247) | l_361);
                        l_463++;
                    }
                }
                else
                {
                    uint8_t l_481 = 252U;
                    for (l_310 = (-18); (l_310 > 26); l_310 = safe_add_func_int8_t_s_s(l_310, 7))
                    {
                        g_106 = (((((safe_lshift_func_uint8_t_u_s(g_143, 1)) <= (g_35 != (safe_div_func_uint16_t_u_u((g_462 | 0x4D), (safe_add_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_u((!((0x6E22 <= ((safe_sub_func_uint8_t_u_u((safe_add_func_int16_t_s_s(l_481, p_24)), (251U > ((~((safe_div_func_uint8_t_u_u((g_136 > p_23), 0x32)) <= g_140)) > g_35)))) == p_21)) ^ p_24)), 3)) || l_485), p_23)))))) != g_85) != p_23) < (-7));
                    }
                    l_336 ^= (safe_add_func_uint16_t_u_u(((((safe_lshift_func_uint16_t_u_u(g_106, (g_278 >= (p_21 || p_24)))) > (safe_rshift_func_int16_t_s_s((((safe_mod_func_int8_t_s_s((((((safe_div_func_uint8_t_u_u(p_22, (safe_div_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint16_t_u_s((~((g_362 & (safe_sub_func_uint32_t_u_u(l_356, p_23))) && (252U > l_481))), 1)), 3)) > 249U), l_34)))) ^ l_481) | 5) | 4294967295U) | (-3)), p_23)) && l_485) != g_278), 14))) >= g_85) || p_24), 0));
                    if (p_21)
                        break;
                    return g_85;
                }
                if (g_462)
                    goto lbl_404;
                g_106 = (safe_mod_func_int8_t_s_s((g_35 || (safe_add_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((0x91 && ((~((((g_278 | (safe_sub_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_u((((((249U == p_21) < ((p_21 || (safe_sub_func_uint8_t_u_u(l_459, g_35))) != ((((safe_unary_minus_func_int16_t_s(l_519)) ^ g_278) >= 0x1A) <= g_106))) <= 4U) && 0xCA65) > (-1)), 5)) != 0x8629A8D4), g_2))) > 0x693293BC) >= l_463) && p_22)) >= g_85)), 0)), g_278))), 0x84));
            }
            if ((0 > (!l_288)))
            {
                int32_t l_529 = (-10);
                if (l_288)
                    break;
                l_529 = (p_21 | (g_137 <= (g_136 != (((((0xBF128C11 | p_21) < 0xE7) || (0x38 || (safe_sub_func_uint32_t_u_u((safe_add_func_int32_t_s_s(p_24, p_21)), 0)))) | g_278) == g_136))));
                l_403 = (safe_div_func_int32_t_s_s((g_2 < (safe_sub_func_int8_t_s_s(g_143, (0x3C41 >= (((g_462 < 0U) & (4 & (p_21 && p_23))) || p_23))))), p_21));
            }
            else
            {
                p_23 = (safe_mod_func_int16_t_s_s(l_318, (safe_div_func_int32_t_s_s(l_485, p_21))));
                p_23 = g_362;
            }
        }
    }
    else
    {
        uint16_t l_542 = 0x274E;
        int32_t l_560 = 0x18FB1C91;
        int16_t l_571 = (-1);
        g_106 = 0;
        l_560 = (1 == (((safe_sub_func_int16_t_s_s(0x0988, p_23)) <= (safe_sub_func_uint16_t_u_u(l_542, l_463))) && (l_542 <= ((safe_mod_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u(p_23, (safe_lshift_func_uint16_t_u_s((((safe_unary_minus_func_int16_t_s(((safe_rshift_func_uint16_t_u_s(((safe_sub_func_int32_t_s_s((safe_rshift_func_int8_t_s_u((safe_div_func_int16_t_s_s(((safe_sub_func_int16_t_s_s(g_140, ((1 > p_23) ^ p_21))) > p_23), 0xC35F)), 1)), p_24)) < l_542), 12)) > 0))) != p_23) || 0x2BC7), 3)))), p_23)) != g_143))));
        l_34 &= ((p_22 | 0x9099) || ((g_139 ^ (safe_unary_minus_func_int8_t_s(((((((safe_add_func_uint16_t_u_u((g_362 > (((safe_div_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_s((!(p_21 != ((p_23 & ((g_136 > p_24) | (safe_sub_func_uint16_t_u_u(((8 <= 0U) < g_362), 0U)))) < l_519))), l_571)) && 0x2A), 4U)) <= 65535U) < 251U)), g_137)) <= p_23) || 0xC6) < l_560) > p_24) || 5U)))) && 1));
    }
    l_485 &= (safe_add_func_int8_t_s_s((((safe_sub_func_uint32_t_u_u(l_576, (p_23 > ((safe_mod_func_uint16_t_u_u((((0x97 < (safe_lshift_func_int8_t_s_s((((((0xDF48 || (p_21 == ((0x04 & p_23) == (safe_lshift_func_int8_t_s_u((safe_add_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((((safe_add_func_uint8_t_u_u(((((safe_sub_func_uint8_t_u_u((safe_add_func_int32_t_s_s(g_278, (safe_add_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(((l_576 && 0xD0A3) ^ l_361), 2)), (-5))))), 246U)) > g_139) != 0x7B) & g_140), g_140)) != p_23) < l_387), p_23)), 1)), 6))))) > 255U) >= p_22) < l_599) > p_22), g_140))) & p_21) | 7), (-10))) <= 0x476D)))) && g_137) < l_360), p_22));
    return g_6;
}
static uint32_t func_25(int32_t p_26, int32_t p_27, uint8_t p_28, uint16_t p_29)
{
    return p_27;
}
inline static uint8_t func_36(uint32_t p_37)
{
    int32_t l_174 = 0x5AF98DCA;
    uint32_t l_244 = 0xF7775CB6;
    int32_t l_245 = 0x9D622751;
lbl_246:
    for (g_35 = 0; (g_35 < (-7)); g_35--)
    {
        int32_t l_52 = 0x515ED761;
        int32_t l_194 = 0xCC42B59B;
        for (p_37 = (-19); (p_37 <= 46); ++p_37)
        {
            int16_t l_45 = 0;
            int32_t l_175 = 0xD91EE60E;
            int8_t l_214 = (-6);
            l_175 = ((l_45 > g_6) | (safe_add_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(func_50(l_52), 14)), (safe_sub_func_int16_t_s_s(((0x9422B6A9 == (0x1F82 == (safe_sub_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(((~(((safe_sub_func_int8_t_s_s(((0U | (-7)) | (p_37 & g_85)), g_35)) >= g_85) && g_6)) ^ g_139), l_174)), g_35)))) < l_174), p_37)))));
            l_194 &= (((safe_rshift_func_int16_t_s_s(g_35, (safe_lshift_func_uint16_t_u_s(0xB662, ((0 && (1U ^ ((((safe_sub_func_int16_t_s_s(0xCA38, (((g_140 <= (safe_lshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(((p_37 == ((((safe_mod_func_uint8_t_u_u(1U, (safe_add_func_uint8_t_u_u(g_35, 4)))) <= g_85) < l_174) == g_35)) & 0), 4)), g_136))) == 0x8A606355) | 0xB87D))) & g_139) ^ p_37) ^ 4294967288U))) & l_175))))) && 0x55567A96) ^ g_35);
            g_106 = ((safe_mod_func_int32_t_s_s((safe_div_func_uint32_t_u_u(((l_174 < (safe_div_func_uint8_t_u_u(l_174, (safe_div_func_uint16_t_u_u((((safe_rshift_func_int8_t_s_u(l_174, 1)) > (g_85 || ((((l_174 > (safe_add_func_uint8_t_u_u((0U >= 0x2FE6), (safe_unary_minus_func_uint8_t_u(((0x81F2D68B > (safe_mod_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((safe_add_func_uint16_t_u_u(0U, p_37)), 7)), 0x7A))) && g_85)))))) || p_37) >= l_214) < p_37))) || l_52), g_143))))) != 65535U), 0xFC58545D)), l_174)) == g_143);
        }
        g_106 = (-1);
        for (g_137 = 9; (g_137 < (-2)); g_137--)
        {
            return p_37;
        }
        for (g_137 = 0; (g_137 == (-3)); g_137 = safe_sub_func_uint16_t_u_u(g_137, 6))
        {
            uint16_t l_219 = 1U;
            g_106 |= l_219;
        }
    }
    l_245 = ((safe_div_func_int32_t_s_s((((safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((+(safe_sub_func_uint8_t_u_u((~(((l_174 >= p_37) <= g_6) < ((safe_add_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(0xFE, (safe_sub_func_int32_t_s_s((safe_rshift_func_int16_t_s_s(g_143, 14)), 0x6ED31E0C)))), (-1))) >= ((safe_lshift_func_int16_t_s_u(((((safe_add_func_uint16_t_u_u((safe_div_func_uint8_t_u_u((0xB79E8ABC != 0x1993B904), g_137)), p_37)) < p_37) > g_139) != l_244), 14)) ^ g_106)))), l_244))), l_244)), l_174)) | p_37) <= p_37), p_37)) < 0U);
    if (g_35)
        goto lbl_246;
    g_106 ^= l_244;
    return p_37;
}
static uint16_t func_50(uint16_t p_51)
{
    uint8_t l_77 = 0xDD;
    int16_t l_84 = 0xC8B2;
    int32_t l_86 = (-1);
    uint8_t l_107 = 0xA0;
    uint32_t l_132 = 7U;
    int32_t l_149 = 0;
    l_149 &= (func_53((safe_rshift_func_int16_t_s_s(((0 & 0xDC) == func_59(g_2, (safe_rshift_func_int8_t_s_s(g_6, (((safe_mod_func_int16_t_s_s((safe_mod_func_int32_t_s_s((func_69(p_51, (safe_add_func_uint16_t_u_u(l_77, ((((safe_add_func_int32_t_s_s((l_77 < ((safe_mod_func_int8_t_s_s(((0U | ((((safe_mod_func_uint8_t_u_u(g_6, g_2)) ^ 0) > g_35) == 0x7FF9)) || l_77), (-1))) > p_51)), l_84)) < g_85) != g_6) != 0U))), l_86, g_6, g_2) & g_2), g_35)), 0x1D51)) || l_84) != p_51))), l_107)), g_6)), l_132, l_132) & 0x89D4);
    for (g_136 = 0; (g_136 != (-12)); g_136 = safe_sub_func_int8_t_s_s(g_136, 3))
    {
        int8_t l_161 = 9;
        int32_t l_164 = 0x8C915773;
        l_164 = (((safe_lshift_func_uint16_t_u_u(((safe_sub_func_uint32_t_u_u(p_51, (safe_mod_func_uint16_t_u_u(((safe_unary_minus_func_uint32_t_u((safe_mod_func_int16_t_s_s((g_35 & (1U > p_51)), 0xB65D)))) || l_161), 3)))) != l_149), (safe_lshift_func_int16_t_s_s((p_51 == 0U), g_139)))) >= 1U) == l_107);
    }
    g_106 = (-2);
    return p_51;
}
inline static int16_t func_53(uint32_t p_54, int8_t p_55, int32_t p_56)
{
    int8_t l_133 = 0x2C;
    int32_t l_134 = (-5);
    int32_t l_135 = (-8);
    int32_t l_138 = 6;
    int32_t l_141 = 0xFC3DD168;
    int32_t l_142 = 0xC1833B1D;
    int32_t l_144 = 0x49816E07;
    int32_t l_145 = 1;
    uint32_t l_146 = 7U;
    l_146--;
    return l_142;
}
static uint8_t func_59(int16_t p_60, int16_t p_61, int32_t p_62)
{
    int16_t l_127 = 0xA104;
    int32_t l_131 = 0xE52A12E2;
    g_106 = (safe_div_func_int16_t_s_s((((safe_div_func_int8_t_s_s(((safe_sub_func_uint32_t_u_u((g_2 != g_2), 4294967295U)) & p_60), (safe_add_func_int16_t_s_s(g_35, 0U)))) | (safe_lshift_func_uint8_t_u_u((((safe_add_func_int8_t_s_s((((safe_sub_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(g_6, (0x2D || (safe_div_func_uint32_t_u_u((safe_unary_minus_func_int32_t_s((0xFC022558 >= g_2))), l_127))))), (-8))) ^ 0xC633F4C6) && g_6), l_127)) < g_35) >= g_6), 3))) == p_61), p_62));
    for (g_106 = 0; (g_106 < (-21)); --g_106)
    {
        p_62 |= ((!g_85) > p_60);
        l_131 = ((0U == p_62) == p_62);
    }
    return p_61;
}
static int16_t func_69(uint16_t p_70, int16_t p_71, int8_t p_72, int32_t p_73, int32_t p_74)
{
    uint32_t l_101 = 4294967295U;
    g_106 &= (safe_add_func_int32_t_s_s((p_71 && ((safe_add_func_int16_t_s_s(p_71, ((g_85 >= (safe_mod_func_int8_t_s_s(g_85, 1U))) == (0x4358B9E0 || ((safe_mod_func_uint8_t_u_u((1U & ((safe_sub_func_int8_t_s_s((((safe_mod_func_int16_t_s_s((l_101 ^ ((((safe_rshift_func_int8_t_s_u((((((safe_add_func_int8_t_s_s(0x68, 0x9E)) ^ l_101) < g_35) && p_71) >= 1), g_85)) >= g_85) >= l_101) != 4294967294U)), 65532U)) > l_101) <= l_101), l_101)) >= 0U)), l_101)) ^ 1U))))) ^ (-1))), 1));
    return g_6;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_2;
    csmith_sink_ = g_6;
    csmith_sink_ = g_35;
    csmith_sink_ = g_85;
    csmith_sink_ = g_106;
    csmith_sink_ = g_136;
    csmith_sink_ = g_137;
    csmith_sink_ = g_139;
    csmith_sink_ = g_140;
    csmith_sink_ = g_143;
    csmith_sink_ = g_278;
    csmith_sink_ = g_362;
    csmith_sink_ = g_462;
    csmith_sink_ = g_884;
    csmith_sink_ = g_885;
    csmith_sink_ = g_916;
    csmith_sink_ = g_929;
    csmith_sink_ = g_949;
    csmith_sink_ = g_985;
    csmith_sink_ = g_1008;
    csmith_sink_ = g_1025;
    csmith_sink_ = g_1047;
    csmith_sink_ = g_1050;
    csmith_sink_ = g_1052;
    csmith_sink_ = g_1053;
    csmith_sink_ = g_1055;
    platform_main_end(0,0);
    return 0;
}
