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
static uint8_t g_6 = 0x2DL;
static int16_t g_88 = 0x05E7L;
static int16_t g_144 = 0L;
static uint16_t g_165 = 6UL;
static uint32_t g_179 = 0x0A92FA66L;
static int32_t g_184 = 0x2AF93AE5L;
static int32_t g_185 = 0L;
static int32_t g_187 = 0x184C14C3L;
static int8_t g_189 = (-1L);
static uint8_t g_193 = 0x0BL;
static int32_t g_222 = 0xB35A5BBFL;
static int32_t g_234 = 1L;
static uint8_t g_235 = 0x39L;
static int32_t g_513 = 0L;
static int32_t g_515 = 0xB54AE55CL;
static uint32_t g_517 = 0x4D903703L;
static int32_t g_617 = 0x803E60E8L;
static uint32_t g_623 = 4294967292UL;
static uint16_t g_748 = 0x40E8L;
static uint8_t g_943 = 0xF4L;
static int16_t g_958 = (-5L);
static int32_t g_961 = 1L;
static uint32_t g_965 = 0x0C5EE152L;
static int32_t g_996 = 0x05E772B0L;
static int8_t g_1000 = 0x5CL;
static int32_t g_1002 = 0xD129D8FAL;
static uint16_t g_1003 = 2UL;
static int8_t func_1(void);
static uint8_t func_7(uint32_t p_8, uint8_t p_9, uint8_t p_10, int32_t p_11, uint16_t p_12);
static uint8_t func_23(int32_t p_24, int32_t p_25);
inline static int32_t func_26(uint32_t p_27);
static int16_t func_34(uint16_t p_35, int32_t p_36, int32_t p_37, int16_t p_38, int32_t p_39);
static int8_t func_42(uint8_t p_43);
inline static uint8_t func_44(uint32_t p_45, uint32_t p_46, int32_t p_47, uint8_t p_48, int16_t p_49);
inline static uint32_t func_50(int16_t p_51);
inline static uint16_t func_52(uint8_t p_53, int32_t p_54, int16_t p_55);
inline static uint16_t func_62(int32_t p_63, uint16_t p_64);
static int8_t func_1(void)
{
    int16_t l_28 = 0xC70AL;
    int32_t l_991 = 0xA700AF99L;
    int8_t l_992 = 0xC2L;
    int16_t l_993 = 1L;
    int32_t l_994 = 0x124EE664L;
    int32_t l_995 = 1L;
    int32_t l_997 = (-2L);
    int32_t l_998 = (-4L);
    int32_t l_999 = 0L;
    int32_t l_1001 = 0xF1FCDD3CL;
    l_991 = (safe_sub_func_int32_t_s_s(0xC96DD1E1L, ((safe_add_func_int8_t_s_s(g_6, 0xA6L)) && func_7(((safe_sub_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s(((safe_add_func_uint8_t_u_u(9UL, (safe_rshift_func_uint8_t_u_s((safe_add_func_int8_t_s_s(g_6, func_23(func_26(l_28), (((5L >= (safe_sub_func_int32_t_s_s((safe_lshift_func_int16_t_s_u(((safe_unary_minus_func_uint32_t_u(((l_28 & g_617) < l_28))) != 255UL), 4)), g_187))) | l_28) > g_961)))), g_617)))) != 0x4736L), 2)), l_28)) == g_187), l_28, l_28, l_28, l_28))));
    g_1003++;
    return g_189;
}
static uint8_t func_7(uint32_t p_8, uint8_t p_9, uint8_t p_10, int32_t p_11, uint16_t p_12)
{
    int32_t l_978 = (-1L);
    int32_t l_979 = 0L;
    int32_t l_980 = 0xAAF87441L;
    int32_t l_981 = (-10L);
    int32_t l_982 = 0x6A41F874L;
    int16_t l_983 = (-4L);
    int32_t l_984 = 0x31B93EDEL;
    int32_t l_985 = 0L;
    int32_t l_986 = 0x6B1D3010L;
    int32_t l_987 = 0x00DAED9DL;
    uint8_t l_988 = 9UL;
    l_988++;
    return l_978;
}
static uint8_t func_23(int32_t p_24, int32_t p_25)
{
    int8_t l_977 = 0xA3L;
    for (g_517 = 1; (g_517 > 9); g_517++)
    {
        l_977 ^= (0xD8BB3EF5L > (safe_mul_func_uint8_t_u_u(6UL, (0xE5A5L < 0x454FL))));
    }
    return l_977;
}
inline static int32_t func_26(uint32_t p_27)
{
    uint32_t l_31 = 4294967287UL;
    uint8_t l_57 = 0x7FL;
    uint8_t l_810 = 250UL;
    uint32_t l_904 = 0xD13B6E89L;
    int32_t l_905 = (-1L);
    int32_t l_947 = 1L;
    int32_t l_948 = 0x6653DB5CL;
    int32_t l_949 = 1L;
    int32_t l_951 = (-9L);
    int32_t l_954 = (-9L);
    int32_t l_956 = 0xF010CA23L;
    int32_t l_957 = 0L;
    int32_t l_959 = 5L;
    int32_t l_962 = 0xC35CDA4AL;
    int32_t l_963 = 0xCAAC2DDFL;
    l_905 = ((safe_mul_func_uint8_t_u_u(l_31, ((safe_rshift_func_int16_t_s_s(func_34(p_27, (safe_add_func_uint8_t_u_u((((((p_27 && ((func_42(func_44(func_50((((func_52(((((((~(2L >= l_57)) && 0xDF39F3C5L) && l_57) && (safe_add_func_int8_t_s_s((safe_add_func_uint16_t_u_u((p_27 != (func_62(l_57, g_6) & l_57)), l_31)), 1UL))) < g_6) != 0x96AD982FL), l_31, p_27) > 1UL) , l_57) , g_165)), p_27, l_57, l_31, g_187)) ^ g_222) || (-3L))) && l_31) || 0xCC21E10BL) , 0xABBAL) > 0x8BF3L), l_57)), l_810, l_31, g_6), 12)) > 0UL))) , l_904);
    for (p_27 = 1; (p_27 > 13); p_27 = safe_add_func_int16_t_s_s(p_27, 1))
    {
        uint8_t l_910 = 0x02L;
        uint32_t l_928 = 0x8E37F3EBL;
        uint16_t l_929 = 0x2651L;
        int32_t l_930 = 0x7AD83136L;
        if (g_222)
            break;
        l_930 = (safe_rshift_func_int16_t_s_u(l_910, ((p_27 >= g_748) | ((safe_sub_func_int16_t_s_s((safe_unary_minus_func_uint32_t_u(((((safe_add_func_uint32_t_u_u((g_193 & ((-2L) <= (safe_rshift_func_uint8_t_u_s(l_910, 0)))), (((((safe_mod_func_int16_t_s_s((safe_add_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s((g_88 | l_910), (((((safe_add_func_int16_t_s_s(((8L < 0x00C3L) , g_88), 0L)) && g_515) , 0x87L) == 9UL) | 0UL))), 8UL)), p_27)) & l_904) > p_27) > l_928) , l_929))) > 0xC8L) , p_27) & p_27))), g_513)) ^ g_187))));
        return l_31;
    }
    l_905 = (safe_mul_func_int8_t_s_s((0xE9A2L <= (((safe_rshift_func_uint16_t_u_s(65532UL, (246UL && l_57))) != (safe_mul_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_s((p_27 & l_904), 1)), (p_27 == (safe_lshift_func_int8_t_s_s(g_144, 2))))), ((g_234 != g_943) | l_31)))) , p_27)), p_27));
    for (l_905 = 13; (l_905 >= (-7)); l_905 = safe_sub_func_int32_t_s_s(l_905, 8))
    {
        int16_t l_946 = 0L;
        int32_t l_950 = 1L;
        int32_t l_952 = 0xBB5E3050L;
        int32_t l_953 = 0x298837D9L;
        int32_t l_955 = (-1L);
        int32_t l_960 = 0x4E9B5B0AL;
        int32_t l_964 = 0x02104276L;
        --g_965;
        if (g_189)
            break;
        l_950 = (l_950 , l_963);
    }
    return p_27;
}
static int16_t func_34(uint16_t p_35, int32_t p_36, int32_t p_37, int16_t p_38, int32_t p_39)
{
    uint16_t l_815 = 0xDA3EL;
    int32_t l_830 = (-1L);
    l_830 = (g_144 , ((safe_rshift_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_s((l_815 , ((safe_mod_func_int8_t_s_s((((safe_rshift_func_int16_t_s_s((safe_sub_func_int16_t_s_s((l_815 > (((0x21L ^ (safe_lshift_func_uint16_t_u_u(((p_35 , (l_815 | (p_38 & (safe_lshift_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((safe_mod_func_int32_t_s_s((p_39 , (p_35 | 0xAEDE6AF3L)), 1L)), l_815)), 4))))) , 65535UL), g_165))) | 0x5FCE418CL) && 0xAA00L)), g_515)), g_144)) < 248UL) >= l_815), 1L)) != 1L)), p_39)) && (-1L)), 1)) && p_37));
lbl_858:
    l_830 ^= (safe_lshift_func_uint16_t_u_s(((safe_rshift_func_uint16_t_u_u(g_513, 4)) < ((((safe_unary_minus_func_uint16_t_u(((safe_sub_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((((p_36 != ((safe_rshift_func_int8_t_s_s(g_185, 0)) <= ((safe_mod_func_uint16_t_u_u(((((safe_lshift_func_uint8_t_u_u(0x59L, (g_6 == (0x37311783L ^ (1UL == (safe_unary_minus_func_uint8_t_u((safe_sub_func_int8_t_s_s((((~g_517) , (((((g_187 != 3L) , p_37) || l_815) , p_35) != g_179)) <= g_6), 0L))))))))) || p_38) , l_815) & 0x5F3DL), g_189)) <= p_38))) <= g_515) && 0UL), 5)), 0)), g_235)) && p_35))) == p_36) >= g_235) > p_39)), g_179));
    for (p_38 = 0; (p_38 == 19); p_38 = safe_add_func_uint8_t_u_u(p_38, 7))
    {
        uint32_t l_881 = 0x690F0FE4L;
        int32_t l_903 = 0x6306212DL;
        for (g_515 = (-22); (g_515 != (-22)); g_515 = safe_add_func_int8_t_s_s(g_515, 3))
        {
            uint8_t l_882 = 0x60L;
            uint8_t l_883 = 255UL;
            if (p_35)
                goto lbl_858;
            g_184 ^= (safe_mul_func_int32_t_s_s((safe_rshift_func_int16_t_s_s(0xFFAFL, ((safe_lshift_func_uint16_t_u_s((safe_add_func_int32_t_s_s((safe_lshift_func_int8_t_s_u(((safe_mul_func_uint8_t_u_u((254UL & (g_6 >= ((safe_mod_func_int16_t_s_s(((((l_815 ^ g_185) || ((-1L) <= 1L)) , (safe_mul_func_uint16_t_u_u((((safe_mod_func_int8_t_s_s(g_515, (safe_lshift_func_int8_t_s_s(((((safe_add_func_uint32_t_u_u(l_815, 0x723B05B0L)) , 0x71B48606L) , g_623) || 0xF9L), g_748)))) && 0xD62AL) , 0xEF62L), l_881))) >= g_144), g_88)) ^ g_515))), (-8L))) & g_222), 2)), l_882)), g_234)) <= l_883))), 0L));
        }
        for (g_235 = 0; (g_235 != 39); g_235 = safe_add_func_int16_t_s_s(g_235, 3))
        {
            g_184 = (-1L);
        }
        for (p_39 = 18; (p_39 < (-1)); --p_39)
        {
            return l_881;
        }
        l_903 |= (((0L > (safe_mod_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(((+(p_35 , 0x1AL)) ^ (safe_add_func_uint32_t_u_u(((((((l_815 , (safe_sub_func_uint32_t_u_u(l_815, p_35))) | (((((g_193 | (((safe_sub_func_int8_t_s_s(((((safe_lshift_func_int8_t_s_s(((65526UL == (safe_sub_func_int32_t_s_s(p_36, p_38))) ^ 0xE5L), p_39)) >= 0x9CL) < g_748) > g_184), l_830)) | 0xCCL) , 0x1D42L)) < 8L) <= g_179) | p_38) && 65535UL)) | (-1L)) || p_36) & l_815) >= g_189), g_748))), 0)), l_881))) || l_830) != p_39);
    }
    return l_830;
}
static int8_t func_42(uint8_t p_43)
{
    uint16_t l_803 = 65535UL;
    g_515 = ((((((safe_add_func_uint32_t_u_u(((safe_mul_func_uint8_t_u_u((((safe_sub_func_uint8_t_u_u((+l_803), g_144)) != l_803) && g_748), (safe_sub_func_uint32_t_u_u(p_43, l_803)))) , (((((((((safe_mul_func_uint16_t_u_u(((((((safe_rshift_func_uint16_t_u_u((g_234 >= g_517), ((p_43 && 0xB0L) | 1L))) & p_43) <= l_803) , g_6) & g_623) == 0x11A4L), g_179)) && l_803) == 1L) < g_193) == p_43) > (-6L)) || p_43) | l_803) , 4294967295UL)), 0xCBDE489CL)) | 1UL) , p_43) || p_43) > g_165) , g_617);
    return p_43;
}
inline static uint8_t func_44(uint32_t p_45, uint32_t p_46, int32_t p_47, uint8_t p_48, int16_t p_49)
{
    int32_t l_523 = (-1L);
    int32_t l_524 = 1L;
    uint32_t l_525 = 0UL;
    uint32_t l_574 = 0x5743E36CL;
    uint32_t l_575 = 18446744073709551615UL;
    uint32_t l_598 = 0UL;
    int32_t l_795 = (-1L);
    l_524 = l_523;
    l_524 = l_525;
    g_234 = ((0x82L <= ((((((((safe_sub_func_uint16_t_u_u((((p_46 & (safe_mod_func_uint16_t_u_u(g_515, 0x2A61L))) ^ ((((safe_sub_func_uint16_t_u_u((((safe_sub_func_uint32_t_u_u((safe_mul_func_int16_t_s_s(((-2L) < (safe_sub_func_uint16_t_u_u(((!(1UL | 1L)) , (safe_lshift_func_int16_t_s_u((safe_mul_func_uint16_t_u_u(g_187, g_193)), p_48))), 0x399EL))), p_47)), 0x15DDF595L)) < l_523) <= 0xEEL), g_235)) & p_46) && (-1L)) > 0x73BA3687L)) < 0xA10CL), 0L)) >= l_524) & 4294967291UL) == 1L) , p_49) , 0x0FL) ^ (-1L)) > 0x77BCL)) == 0UL);
    if (((safe_sub_func_uint8_t_u_u(p_48, (safe_lshift_func_int8_t_s_u((safe_mod_func_uint32_t_u_u((safe_mod_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((+l_525), (((safe_add_func_uint32_t_u_u((safe_sub_func_int32_t_s_s(((~(safe_lshift_func_uint16_t_u_u((g_6 == ((-5L) >= ((safe_mod_func_int8_t_s_s(0x54L, (safe_rshift_func_uint8_t_u_s(255UL, (!l_524))))) >= ((safe_lshift_func_int16_t_s_s(((((safe_mod_func_uint32_t_u_u((((((safe_mod_func_uint16_t_u_u(((p_46 < 0UL) < g_185), p_46)) < 0x89L) > p_48) | l_524) , g_513), g_515)) & 0x05614B44L) | p_48) & g_513), l_523)) <= g_184)))), p_46))) > g_222), 0xA7793DC5L)), 0UL)) != p_47) <= l_574))), p_48)), l_575)), p_45)))) != l_523))
    {
        g_234 = p_47;
lbl_655:
        g_234 = ((+0UL) > ((!(p_45 | ((((((safe_unary_minus_func_int16_t_s((safe_add_func_uint32_t_u_u(7UL, (safe_mul_func_uint16_t_u_u(0UL, (4294967293UL <= 1UL))))))) >= p_47) >= ((0x8991DED3L >= (p_49 , 0xE7371C81L)) , g_144)) && p_49) , 0x63L) || 8UL))) | l_525));
    }
    else
    {
        uint32_t l_588 = 1UL;
        int32_t l_622 = (-1L);
        int16_t l_634 = (-4L);
        int32_t l_651 = 0x16202968L;
        uint16_t l_692 = 6UL;
        uint32_t l_769 = 0x29B41913L;
        if ((safe_add_func_int16_t_s_s(0x796CL, (p_48 ^ (safe_rshift_func_int8_t_s_u((((~l_525) >= (l_588 || ((((p_49 != (safe_lshift_func_int8_t_s_s((+(safe_add_func_uint16_t_u_u(g_185, p_48))), 4))) , (safe_mod_func_int8_t_s_s((-1L), (safe_add_func_int16_t_s_s((g_517 , p_49), g_517))))) != g_144) & g_517))) <= l_598), 2))))))
        {
            uint32_t l_616 = 1UL;
            int32_t l_618 = (-9L);
            int32_t l_619 = 0x168DD87AL;
            uint32_t l_644 = 7UL;
            for (g_179 = 0; (g_179 != 0); g_179 = safe_add_func_uint16_t_u_u(g_179, 9))
            {
                uint32_t l_602 = 0UL;
                int32_t l_620 = 0x96509101L;
                int32_t l_621 = 0xE45A2E24L;
                l_524 = (((+(l_523 && l_602)) != (safe_unary_minus_func_int32_t_s((safe_mod_func_int32_t_s_s((safe_add_func_int8_t_s_s((l_602 == (safe_mul_func_uint8_t_u_u(g_222, (safe_rshift_func_uint16_t_u_u(p_49, ((((p_48 && 1L) && (l_588 && ((((safe_rshift_func_int8_t_s_s((((safe_mul_func_uint16_t_u_u((g_234 & g_235), l_616)) , p_48) , g_513), 0)) >= g_515) > l_523) < 8UL))) ^ g_184) >= g_179)))))), g_617)), p_47))))) & p_45);
                --g_623;
                l_618 = ((g_184 , (safe_sub_func_uint8_t_u_u((((safe_mod_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s(((safe_add_func_int16_t_s_s(((l_634 , (g_88 | ((safe_mul_func_int16_t_s_s((((g_235 & ((!((((65533UL >= (safe_mod_func_uint8_t_u_u((((l_634 & ((((((safe_add_func_int16_t_s_s(p_49, (l_575 , ((safe_rshift_func_int8_t_s_u(((p_48 < l_634) > p_45), 0)) > p_45)))) | g_222) == (-6L)) > 0xDCB8L) == 0x53FEF327L) || g_165)) <= p_47) || l_588), p_46))) | l_644) < 0x0FF4L) || g_517)) ^ p_45)) > 255UL) , p_45), p_49)) && p_47))) & (-4L)), 65535UL)) ^ p_47), 11)), 6L)) & 0L) > l_621), g_185))) > l_618);
                l_619 = (safe_mod_func_uint32_t_u_u(((((safe_mul_func_int8_t_s_s(g_234, 0xA6L)) | l_620) ^ (0x80L | (p_49 == ((safe_add_func_uint16_t_u_u(((l_618 >= (l_598 != p_46)) | g_6), 1UL)) , p_47)))) , l_616), l_616));
            }
        }
        else
        {
            uint32_t l_667 = 6UL;
            int32_t l_732 = 0x7D527129L;
            int32_t l_747 = 0L;
            l_651 &= p_48;
            l_524 |= (safe_mul_func_uint8_t_u_u(((p_49 < (~0x7AF8L)) || p_48), (249UL ^ g_517)));
            if ((l_524 & 3UL))
            {
                if (l_525)
                    goto lbl_655;
            }
            else
            {
                int32_t l_680 = 0L;
                int32_t l_729 = 0xC66BFC1AL;
                int32_t l_774 = 0x0878BC4DL;
                g_515 = ((safe_lshift_func_int8_t_s_s((((safe_rshift_func_uint16_t_u_u(0x922EL, 8)) || (((!((p_45 <= (safe_add_func_int8_t_s_s((p_45 <= (safe_add_func_uint16_t_u_u(((safe_mod_func_int16_t_s_s((((1UL ^ 0x70DC5047L) > (0xFD52L || 1UL)) , (l_574 , l_622)), p_45)) | l_667), 0xFCBCL))), 255UL))) == 0xC9L)) >= 0x32156418L) ^ g_513)) != l_634), 1)) <= g_234);
                g_515 = (safe_add_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(((safe_add_func_int16_t_s_s((g_513 != ((safe_sub_func_uint32_t_u_u(((safe_add_func_uint32_t_u_u((((((safe_lshift_func_uint16_t_u_s((((((((((((l_680 && p_48) >= (safe_lshift_func_int8_t_s_u((safe_add_func_int32_t_s_s(0x7F3574D1L, (((safe_rshift_func_uint16_t_u_s((safe_unary_minus_func_int32_t_s(0L)), (0x8548L | g_515))) != ((safe_add_func_uint32_t_u_u(((((safe_rshift_func_uint8_t_u_u(0UL, (((-9L) > l_680) ^ p_45))) || p_46) & l_667) , 0x1BBF3470L), p_46)) || (-6L))) >= g_189))), 5))) > l_692) >= 0UL) & g_184) , g_234) ^ 0x701CL) >= l_692) , 1L) >= g_617) < l_680), 3)) & 0UL) != l_680) != 0xF3L) <= g_6), l_680)) | 9UL), g_623)) > g_165)), g_184)) , g_222), 2)), l_667));
                for (g_623 = (-20); (g_623 <= 11); g_623++)
                {
                    uint16_t l_703 = 65529UL;
                    int32_t l_746 = 8L;
                    g_184 = (safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(((((l_703 == l_680) , ((safe_sub_func_uint16_t_u_u(g_234, (((safe_mul_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((((g_179 <= (safe_rshift_func_int8_t_s_s(((safe_unary_minus_func_int16_t_s((safe_sub_func_int16_t_s_s((safe_add_func_uint32_t_u_u((~(~(((((safe_mul_func_uint16_t_u_u(g_235, l_680)) , ((safe_mod_func_uint32_t_u_u((((p_46 ^ (((((((safe_lshift_func_uint8_t_u_s(((safe_unary_minus_func_uint16_t_u(((safe_unary_minus_func_uint8_t_u((((safe_sub_func_uint16_t_u_u(l_525, 1L)) & 3UL) < 0x8C6C41D8L))) || 0xFBFCL))) , l_651), g_184)) , 0UL) | p_49) & g_193) | l_703) & 0L) > 8L)) == 0x9AL) != g_517), 0x284FCCE6L)) != 4294967295UL)) <= 0xBBFA046AL) || 0x86F40106L) != p_45))), p_49)), g_88)))) > 0xA3805354L), 4))) ^ g_184) ^ l_729), 4294967295UL)), 0UL)) || g_184) | g_165))) & g_179)) || g_6) ^ p_45), g_144)), 13)) , g_184), g_515)), g_179));
                    g_515 = (p_49 != (0x301CL ^ (((p_45 <= l_732) != (p_49 <= (safe_mul_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((4294967295UL != (g_222 > ((((((((safe_lshift_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((+6UL), l_703)), p_47)) && l_703) , 0x5B6C2B04L) | 4294967295UL) | p_47) || g_222) , p_45) > 7L))), g_189)), 246UL)))) && 0x0AL)));
                    for (l_574 = (-21); (l_574 > 26); l_574++)
                    {
                        l_524 = (safe_rshift_func_int16_t_s_u(0L, g_6));
                        g_748--;
                        return l_747;
                    }
                }
                l_774 = ((g_517 , ((safe_mod_func_int8_t_s_s(((safe_unary_minus_func_uint32_t_u(((9L == (0UL & (!(safe_add_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(((0x02L | (safe_add_func_uint8_t_u_u(g_185, (safe_sub_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((p_46 | (safe_mul_func_int16_t_s_s((l_769 <= ((safe_mod_func_int32_t_s_s(((safe_mul_func_uint8_t_u_u(l_524, 0xD8L)) || 1L), l_747)) ^ 5UL)), 0x1A8EL))), g_193)), g_515))))) || g_184), 0x1750L)), l_575))))) != 0UL))) > g_189), g_235)) , p_48)) <= 1L);
            }
            return g_185;
        }
        for (g_165 = 0; (g_165 < 6); g_165++)
        {
            l_524 |= l_634;
            l_622 = (safe_lshift_func_int8_t_s_s((((safe_lshift_func_int16_t_s_s((0xAB8DE30CL | 8L), (((((!0xB4L) != (safe_add_func_int8_t_s_s(g_179, ((l_769 ^ (((~(g_513 || (safe_lshift_func_int16_t_s_s((safe_unary_minus_func_int8_t_s(((((safe_add_func_int32_t_s_s((safe_unary_minus_func_uint8_t_u(0xDFL)), l_598)) ^ (safe_rshift_func_int16_t_s_s(0xFF7BL, 5))) <= g_144) < l_598))), 4)))) | 1L) , g_617)) == l_525)))) , g_513) , g_193) == g_623))) , 0UL) & p_49), 7));
            if (l_588)
                break;
            g_184 = (safe_mod_func_int16_t_s_s(0x62E8L, p_47));
        }
        l_795 = l_574;
    }
    return p_45;
}
inline static uint32_t func_50(int16_t p_51)
{
    int32_t l_251 = 0L;
    int8_t l_252 = 0x6AL;
    int8_t l_258 = 1L;
    int32_t l_313 = 0x106D26DCL;
    int32_t l_496 = 1L;
    uint32_t l_510 = 0xC1BB2893L;
    if (((safe_rshift_func_int16_t_s_s((g_189 | (p_51 > (safe_rshift_func_int16_t_s_s(((!g_193) > (1L <= (safe_add_func_uint32_t_u_u((((safe_rshift_func_uint16_t_u_s((safe_mul_func_uint8_t_u_u((((p_51 , (safe_unary_minus_func_uint8_t_u((!0x51L)))) < ((l_251 > l_251) | ((g_187 <= p_51) != l_251))) , p_51), l_251)), l_252)) == g_187) >= 0x0BF26BA3L), 1L)))), l_252)))), 9)) , l_251))
    {
        int8_t l_267 = 0xE9L;
        int8_t l_287 = (-5L);
        int32_t l_310 = 0x009A4825L;
        int16_t l_433 = 0L;
        if (((((((((g_185 , g_179) , 65532UL) > ((l_251 & (g_184 != ((safe_add_func_int32_t_s_s((((((safe_rshift_func_int8_t_s_s((safe_unary_minus_func_uint16_t_u(l_258)), (((((safe_mul_func_int16_t_s_s((0x26D6L != (safe_add_func_int32_t_s_s((-1L), (((safe_mul_func_uint8_t_u_u((((safe_mod_func_int8_t_s_s((-3L), 1UL)) > 0x4547L) , 3UL), p_51)) | 0x0CL) & 0xC78BEF38L)))), g_185)) && g_88) , p_51) == p_51) , p_51))) == g_189) > p_51) || g_165) > p_51), 0x4F4B611BL)) & p_51))) | g_165)) == p_51) , 65529UL) != p_51) , l_267) < l_258))
        {
            uint32_t l_318 = 1UL;
            int32_t l_350 = 0x52C17340L;
            uint32_t l_418 = 7UL;
            for (g_179 = 0; (g_179 > 5); ++g_179)
            {
                uint32_t l_284 = 0x945D7D14L;
                int32_t l_288 = 0x5BBA5569L;
                uint32_t l_307 = 0xBBCD2E24L;
                l_288 = (0x73F1L | (safe_mul_func_uint8_t_u_u((g_235 != (((((l_267 <= (250UL | (((safe_sub_func_int8_t_s_s(((((safe_sub_func_uint8_t_u_u(((safe_add_func_int16_t_s_s((((p_51 & ((safe_sub_func_uint16_t_u_u(((((safe_lshift_func_int16_t_s_s((safe_sub_func_int32_t_s_s(0x4A65F372L, ((((((g_179 > (l_284 && (safe_rshift_func_uint16_t_u_s(((3L || 4294967295UL) < g_179), 1)))) < 65535UL) >= 247UL) , 0x8AA52840L) | p_51) > g_144))), 9)) && l_267) == p_51) < p_51), 0x0C0BL)) & g_185)) , 7L) == p_51), p_51)) || p_51), l_258)) , 0x146DL) , (-1L)) < g_6), g_193)) >= g_165) <= p_51))) || g_187) ^ p_51) > l_287) ^ 0x4EL)), p_51)));
                if (((safe_sub_func_int16_t_s_s((((((((((((safe_mul_func_uint8_t_u_u((l_287 > (safe_mod_func_int8_t_s_s((safe_mod_func_uint8_t_u_u((0UL & (((g_187 == (l_267 >= (safe_mod_func_uint16_t_u_u(65535UL, (((((((safe_sub_func_uint32_t_u_u(((safe_rshift_func_int16_t_s_s((((safe_mul_func_int8_t_s_s(((((((safe_add_func_uint32_t_u_u(l_287, l_288)) >= 65533UL) & ((0xE4L >= l_288) && 4294967295UL)) > l_267) || p_51) ^ g_222), 0xF7L)) != l_288) & g_187), l_288)) | 1UL), g_179)) ^ g_189) & 0UL) < 0xF05BL) | 1L) , g_234) | 0UL))))) >= l_252) & l_287)), l_307)), 0xE9L))), l_258)) , 0x53L) & 6UL) ^ 4294967293UL) >= 3UL) && 2UL) & 0x97L) , l_287) ^ 0x1CA4L) != 0x4DFEL) , g_179), 0x7D13L)) != p_51))
                {
                    uint32_t l_335 = 0x0964AE88L;
                    int32_t l_363 = 4L;
                    int8_t l_364 = 1L;
                    l_310 = (safe_mod_func_int16_t_s_s(l_287, l_287));
                    for (l_251 = 0; (l_251 < (-4)); --l_251)
                    {
                        uint8_t l_347 = 0x99L;
                        l_313 = (65529UL <= p_51);
                        g_184 = ((((safe_add_func_int32_t_s_s((((safe_add_func_int16_t_s_s(((l_318 , 0x0498DF5BL) | p_51), (((safe_sub_func_uint8_t_u_u((((safe_mul_func_int8_t_s_s((safe_add_func_int8_t_s_s((g_184 == ((((safe_lshift_func_int16_t_s_u(((((safe_mod_func_uint32_t_u_u(((l_287 , (!(l_288 , (safe_mod_func_uint32_t_u_u(l_318, (safe_rshift_func_int16_t_s_s(((((safe_unary_minus_func_int8_t_s(0x1EL)) | p_51) , g_234) && g_234), 9))))))) , p_51), g_144)) > p_51) <= p_51) >= 0xB1L), 2)) <= p_51) <= 0UL) != 4294967295UL)), g_185)), g_165)) == l_267) & p_51), g_88)) | g_222) != g_185))) == l_284) < l_335), 4294967295UL)) , 4294967295UL) == l_252) <= l_318);
                        l_350 = (((((0x92L & g_88) & ((safe_add_func_int8_t_s_s(((safe_rshift_func_int8_t_s_u((g_6 == (((safe_add_func_int16_t_s_s(0xF970L, (((safe_sub_func_uint8_t_u_u(g_193, p_51)) == (((((p_51 >= (((safe_unary_minus_func_uint16_t_u(((((safe_lshift_func_int8_t_s_u(l_347, (((safe_sub_func_int16_t_s_s(((((1UL <= g_179) , l_288) == 7UL) , l_318), (-1L))) , p_51) < p_51))) || g_187) != l_318) != g_184))) ^ (-1L)) | (-10L))) , 0UL) , g_187) != 5UL) > 1L)) ^ 0x9B05E94AL))) , 0xF8D69C6DL) < p_51)), 7)) , 0L), g_234)) > p_51)) >= l_252) != l_287) <= l_347);
                        l_363 &= (safe_add_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(((l_335 >= ((p_51 , 1L) , ((safe_sub_func_int32_t_s_s((safe_rshift_func_int16_t_s_s(p_51, (p_51 , (safe_lshift_func_uint16_t_u_u(p_51, 15))))), g_6)) , (((((((safe_mul_func_int16_t_s_s(0x0012L, ((g_144 | 4L) , p_51))) && 6L) , g_144) >= g_235) ^ 0x58A4408CL) , p_51) >= 0x888E8DD6L)))) & 0x4303L), 1UL)), l_258));
                    }
                    if ((p_51 || l_364))
                    {
                        int8_t l_367 = 0L;
                        l_363 = (l_288 == (safe_mod_func_int16_t_s_s(g_222, g_235)));
                        l_310 = (((l_367 , ((((p_51 > ((((((safe_add_func_int32_t_s_s(((safe_rshift_func_int8_t_s_s(((((safe_mul_func_uint8_t_u_u(g_189, (safe_lshift_func_uint8_t_u_s(((safe_sub_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(g_184, ((l_364 && (safe_mod_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((((safe_rshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_s(p_51, 7)), g_6)) && g_235) ^ ((safe_add_func_int8_t_s_s((l_251 <= p_51), g_185)) , g_179)), l_367)), g_222))) , (-1L)))), l_310)) | 0x1812B45DL), 6)))) < p_51) <= l_364) < p_51), 3)) ^ p_51), 0xB07C8B32L)) <= 1L) , l_367) , 0UL) ^ 0UL) & l_367)) != 0x81L) != g_193) & 0x9549L)) | p_51) && l_367);
                    }
                    else
                    {
                        uint32_t l_402 = 0xBC409158L;
                        l_363 = ((safe_lshift_func_uint8_t_u_s(((safe_sub_func_uint16_t_u_u(((((safe_rshift_func_int8_t_s_u((safe_rshift_func_int16_t_s_u((safe_mul_func_uint16_t_u_u(p_51, 0x952FL)), l_402)), (safe_mod_func_uint32_t_u_u((0L ^ (((((((safe_add_func_uint8_t_u_u(g_6, (~(g_222 < (g_185 | (0x85L == ((((0x4411L & g_185) == 0x7BL) , 0xC12E71CDL) & p_51))))))) , p_51) & 0xBF0036B7L) & p_51) , g_234) != 4294967295UL) != p_51)), g_193)))) ^ 255UL) | 0xAA31F853L) != p_51), p_51)) < (-1L)), g_193)) , g_165);
                        l_363 = ((safe_sub_func_int32_t_s_s(p_51, (safe_add_func_uint16_t_u_u((0x11L != (safe_mul_func_uint16_t_u_u((8L == l_267), (safe_add_func_uint32_t_u_u(((0x40L | ((safe_rshift_func_int16_t_s_u(((l_418 <= (((((safe_mod_func_int8_t_s_s((safe_sub_func_int16_t_s_s((!((safe_sub_func_uint8_t_u_u(((safe_sub_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u(((l_258 && (safe_rshift_func_int16_t_s_s((((!0xEDL) >= g_165) || p_51), l_433))) | g_88), p_51)), (-8L))) < 0xA38CAB49L), p_51)) > 0xEDL)), 0x625DL)), p_51)) ^ l_318) && g_88) > 0xD0L) && g_88)) != g_6), 6)) <= 4294967289UL)) < 1UL), p_51))))), (-3L))))) == g_185);
                        g_234 = p_51;
                    }
                }
                else
                {
                    g_184 = l_418;
                    if (g_193)
                        break;
                }
                g_184 = ((-6L) >= (0x8321L > 0x8646L));
            }
        }
        else
        {
            uint32_t l_434 = 0UL;
            g_234 |= (-1L);
            l_434++;
        }
        g_184 = (safe_add_func_int8_t_s_s((p_51 | (safe_mul_func_int16_t_s_s((safe_sub_func_int16_t_s_s((~(((safe_lshift_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(l_252, (((safe_mul_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((~65528UL), (p_51 , (((((safe_sub_func_uint32_t_u_u(0x9EA2F4C1L, ((l_287 && (safe_mul_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(((p_51 > (l_433 , ((~(safe_sub_func_int16_t_s_s(1L, l_313))) == p_51))) <= p_51), (-9L))), 0x93CFL))) & 0x62L))) < g_193) <= l_267) , g_88) >= l_252)))), g_185)) || p_51) || 0xC8L))), g_187)) || 0x05C5DCF1L) && 7L)), p_51)), g_189))), p_51));
    }
    else
    {
        uint8_t l_484 = 255UL;
        int32_t l_512 = 0x69E62C40L;
        int32_t l_514 = (-8L);
        uint16_t l_520 = 0xF4D4L;
        for (g_144 = 0; (g_144 != 25); ++g_144)
        {
            int16_t l_483 = 8L;
            int32_t l_511 = 9L;
            if (((((((9UL < (safe_rshift_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((0xFA0DL <= (-8L)), (safe_rshift_func_int16_t_s_u(((((safe_sub_func_int32_t_s_s((((safe_add_func_uint8_t_u_u((((safe_mod_func_uint16_t_u_u(0xDBA9L, (((safe_unary_minus_func_int32_t_s((safe_rshift_func_int16_t_s_s(p_51, (safe_lshift_func_uint16_t_u_s(((safe_rshift_func_uint16_t_u_s(((((g_185 , ((((((l_313 ^ 0xCAL) ^ p_51) & 0x3F51F510L) <= 0L) < 0x67B714C4L) & l_483)) && l_483) > g_234) , l_313), 5)) >= p_51), 11)))))) || p_51) | g_222))) == p_51) , l_258), 0xA5L)) <= 252UL) ^ 0x20L), 0xB0E293E5L)) , p_51) <= 0x2BDD61A8L) || 0x32L), p_51)))), 3))) , g_6) && p_51) || l_484) , l_251) > p_51))
            {
                int32_t l_509 = 4L;
                g_184 = ((!((((((safe_lshift_func_int16_t_s_u((safe_sub_func_uint16_t_u_u((l_484 < ((safe_lshift_func_uint16_t_u_s((l_484 == (safe_mod_func_int32_t_s_s(((((((safe_mod_func_int8_t_s_s((l_496 > (g_193 == ((safe_add_func_int8_t_s_s(l_483, (safe_sub_func_uint8_t_u_u(((((safe_mul_func_uint8_t_u_u(0x41L, ((safe_add_func_int8_t_s_s(g_88, 0x5EL)) || ((safe_lshift_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((((l_509 , g_184) && g_144) , 65535UL), l_510)), 13)) , 0xEBDE517DL)))) & l_509) ^ g_6) & g_189), 0x4AL)))) > g_189))), g_165)) >= (-1L)) | g_193) && g_193) < l_484) <= 65535UL), l_509))), 10)) , l_252)), g_144)), 15)) != (-6L)) >= l_483) || 4294967295UL) & l_484) >= g_88)) > 0UL);
                g_184 = (-4L);
            }
            else
            {
                int32_t l_516 = 0xAB4DA3A7L;
                --g_517;
                ++l_520;
                return l_516;
            }
            l_511 = p_51;
        }
    }
    l_496 = l_258;
    return g_179;
}
inline static uint16_t func_52(uint8_t p_53, int32_t p_54, int16_t p_55)
{
    int32_t l_70 = 0x8EF5D3CCL;
    int32_t l_87 = 0L;
    int16_t l_115 = 1L;
    uint32_t l_142 = 1UL;
    int32_t l_158 = 0x226F77E7L;
    g_88 = (((safe_lshift_func_uint8_t_u_s(l_70, (((safe_lshift_func_uint8_t_u_s((safe_sub_func_int8_t_s_s(g_6, ((safe_rshift_func_uint16_t_u_s(((0x55L <= ((g_6 > ((safe_mod_func_int8_t_s_s((+(0xB4L > l_70)), (g_6 ^ ((safe_sub_func_uint16_t_u_u(((safe_add_func_int32_t_s_s(((((((1L & (((((~((safe_lshift_func_int8_t_s_s(g_6, 6)) & l_70)) < l_70) & p_55) > l_87) , 1UL)) == 0x6AF5L) == 1UL) | 0x88L) <= 0x6B1F15F1L) < g_6), g_6)) , g_6), 0xDE1FL)) || l_70)))) && l_70)) & p_54)) <= 4294967295UL), 8)) , 0xCFL))), 2)) & p_54) >= l_70))) != p_53) , 0x233887E9L);
    p_54 = g_6;
    for (p_55 = 19; (p_55 > 27); p_55++)
    {
        uint32_t l_114 = 0x4C54CFDDL;
        uint32_t l_116 = 0x9F6C9230L;
        uint32_t l_141 = 1UL;
        int32_t l_143 = 0x7FA911A9L;
        int32_t l_186 = 0x908BEF20L;
        int32_t l_188 = 0xE7F336F0L;
        int32_t l_190 = (-6L);
        int32_t l_192 = 0x105832D0L;
        l_87 &= p_54;
        if (((safe_mul_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(((g_88 == 0x19D8D777L) > (safe_rshift_func_uint8_t_u_u(((safe_sub_func_int16_t_s_s((((((safe_mod_func_uint32_t_u_u(((p_54 < (((((safe_sub_func_uint32_t_u_u((((((safe_mul_func_uint16_t_u_u(g_6, (safe_mod_func_int32_t_s_s(((safe_add_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(((0x5EL & ((g_88 && ((((p_54 < (!((((l_87 >= (safe_sub_func_int8_t_s_s((-3L), 0x09L))) != l_114) | 0x02L) , g_6))) == p_55) && p_53) & g_88)) , l_115)) , 8UL), 0xDD26L)), 1L)) > 0xD3FBL), l_114)))) ^ l_116) > 0xFE548C15L) || p_54) & 9UL), p_54)) , p_53) < g_88) <= l_116) , p_53)) , g_88), g_88)) >= 0x289EL) ^ g_88) <= g_88) , g_6), l_116)) , 0UL), g_6))), g_88)), l_114)) < g_88))
        {
            int32_t l_139 = 0L;
            for (p_53 = (-27); (p_53 == 10); p_53 = safe_add_func_uint32_t_u_u(p_53, 6))
            {
                int8_t l_159 = 0xA9L;
                for (l_114 = 19; (l_114 != 23); l_114 = safe_add_func_uint8_t_u_u(l_114, 2))
                {
                    uint8_t l_140 = 0x26L;
                    uint32_t l_177 = 18446744073709551615UL;
                    int32_t l_178 = 0xA309C989L;
                    l_143 = ((safe_lshift_func_uint16_t_u_s((safe_sub_func_uint8_t_u_u(((((1UL | 0x1E83L) || (((safe_mod_func_int16_t_s_s(p_55, 0x3778L)) == (safe_mul_func_int16_t_s_s(((safe_add_func_int8_t_s_s((safe_sub_func_int16_t_s_s((g_88 , (safe_add_func_uint8_t_u_u(g_88, 0L))), (8UL >= (((safe_lshift_func_int8_t_s_u(((safe_mod_func_int32_t_s_s(1L, p_54)) , l_139), 0)) & g_6) > p_55)))), l_140)) >= g_6), p_54))) >= p_53)) , p_54) >= l_141), 0xBDL)), g_88)) >= l_142);
                    if (g_6)
                        break;
                    if (((g_88 & (g_88 >= (0x35L == p_54))) > p_54))
                    {
                        int8_t l_157 = 0x10L;
                        int32_t l_160 = (-3L);
                        g_144 = 0x70EF1A53L;
                        l_159 = ((((safe_rshift_func_int16_t_s_u(((((safe_mul_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s((((safe_mod_func_int16_t_s_s((0xEDL <= g_88), (safe_mod_func_int32_t_s_s(g_6, g_144)))) == p_53) , 0x57FFL), (0L >= (((p_53 >= (safe_rshift_func_int8_t_s_u((p_54 > l_142), 5))) , 0L) && 0x75E61BCAL)))), p_55)) , g_6) == p_53) >= p_53), g_144)) , l_157) , p_53) == l_158);
                        l_160 = l_140;
                    }
                    else
                    {
                        int32_t l_168 = 0xD33CEA4AL;
                        l_143 = (((g_88 != p_54) && g_6) && (safe_mod_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(((((l_140 , l_139) >= g_165) | (((g_165 == (safe_sub_func_int32_t_s_s((((p_55 && ((((4294967295UL <= g_88) > l_141) < g_144) , g_144)) || 0L) , g_88), 0xB9B0A51EL))) >= l_168) || l_116)) <= p_54), l_139)), 0x23FBL)));
                        l_178 |= ((65526UL & g_6) > (+((p_55 || ((safe_add_func_uint16_t_u_u((g_165 && (safe_add_func_int8_t_s_s((g_88 & (((+(((1L != (((safe_add_func_uint8_t_u_u((((l_159 && p_53) ^ (l_140 , l_158)) >= 0xD187L), p_55)) ^ p_54) == p_55)) , 247UL) ^ 0xD4L)) <= (-1L)) && l_177)), g_6))), g_144)) & g_165)) == g_165)));
                        if (g_144)
                            break;
                    }
                    ++g_179;
                }
            }
        }
        else
        {
            int16_t l_196 = 6L;
            p_54 = (safe_mod_func_uint16_t_u_u(0xFAF8L, l_114));
            if ((l_114 > p_55))
            {
                return g_88;
            }
            else
            {
                int8_t l_191 = (-1L);
                int8_t l_204 = (-1L);
                int16_t l_207 = 0x4B6FL;
                g_193++;
                l_196 = (-8L);
                p_54 = ((safe_add_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u(l_196, (0UL != l_114))), 1L)) <= (253UL & ((((safe_lshift_func_int8_t_s_s(((~(l_204 || p_53)) ^ 0x23BBL), (safe_rshift_func_int16_t_s_s((l_207 < g_179), 5)))) , 4294967287UL) || g_193) , g_193)));
            }
            g_184 = (safe_lshift_func_int16_t_s_s(p_55, (((safe_sub_func_uint8_t_u_u(p_55, ((p_55 , (safe_unary_minus_func_uint8_t_u((((safe_sub_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(g_179, l_87)), g_187)) < (safe_sub_func_int16_t_s_s((((((p_55 >= (~(safe_rshift_func_int16_t_s_s(((g_222 > (((safe_mod_func_int32_t_s_s((+(((((((safe_mul_func_int16_t_s_s((safe_rshift_func_int8_t_s_u((((((((((safe_mul_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(g_222, 5)), 0UL)) ^ p_55) , g_185) > 1UL) ^ 0UL) , g_184) , l_115) | 0xF1167A4CL) > 65532UL), l_196)), l_142)) | 0L) || 5UL) != p_54) , 246UL) || p_53) < p_55)), l_192)) <= p_55) < 0xA5F00511L)) && p_53), l_87)))) == l_143) < 4294967295UL) || g_6) | 1L), 0x3BD7L))) , 0x1DL)))) , g_189))) > 0xB7L) && g_189)));
        }
        g_184 = p_53;
    }
    g_235--;
    return g_6;
}
inline static uint16_t func_62(int32_t p_63, uint16_t p_64)
{
    uint32_t l_65 = 3UL;
    l_65++;
    return p_63;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_6;
    csmith_sink_ = g_88;
    csmith_sink_ = g_144;
    csmith_sink_ = g_165;
    csmith_sink_ = g_179;
    csmith_sink_ = g_184;
    csmith_sink_ = g_185;
    csmith_sink_ = g_187;
    csmith_sink_ = g_189;
    csmith_sink_ = g_193;
    csmith_sink_ = g_222;
    csmith_sink_ = g_234;
    csmith_sink_ = g_235;
    csmith_sink_ = g_513;
    csmith_sink_ = g_515;
    csmith_sink_ = g_517;
    csmith_sink_ = g_617;
    csmith_sink_ = g_623;
    csmith_sink_ = g_748;
    csmith_sink_ = g_943;
    csmith_sink_ = g_958;
    csmith_sink_ = g_961;
    csmith_sink_ = g_965;
    csmith_sink_ = g_996;
    csmith_sink_ = g_1000;
    csmith_sink_ = g_1002;
    csmith_sink_ = g_1003;
    platform_main_end(0,0);
    return 0;
}
