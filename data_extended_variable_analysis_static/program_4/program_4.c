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
static int32_t g_5 = 7;
static int32_t *g_4 = &g_5;
static uint32_t g_18 = 0xAD38DC53;
static uint32_t g_30 = 0xE856DFC9;
static int32_t *g_48 = (void*)0;
static int16_t g_66 = (-1);
static uint32_t g_67 = 0xB1EC6C04;
static int8_t g_90 = 1;
static int32_t g_101 = 0xDC21833D;
static int8_t g_111 = 0x53;
static uint16_t g_117 = 0x70A8;
static uint16_t g_149 = 65535U;
static int32_t g_163 = 0x7C177FA4;
static int32_t g_172 = 1;
static uint32_t **g_182 = (void*)0;
static uint32_t g_196 = 0xBF02E390;
static int16_t g_202 = (-6);
static uint32_t ****g_204 = (void*)0;
static int32_t ***g_205 = (void*)0;
static int8_t g_259 = (-10);
static int8_t *g_258 = &g_259;
static uint8_t *g_315 = (void*)0;
static uint8_t **g_314 = &g_315;
static uint32_t *g_416 = &g_30;
static uint32_t **g_415 = &g_416;
static uint32_t ***g_414 = &g_415;
static int32_t ****g_437 = (void*)0;
static uint16_t *g_495 = &g_149;
static uint16_t **g_494 = &g_495;
static uint32_t g_516 = 4294967295U;
static uint16_t g_589 = 1U;
static int8_t g_590 = 0x0E;
static uint32_t g_592 = 1U;
static int32_t *g_716 = &g_5;
static uint16_t g_732 = 65530U;
static int16_t *g_753 = &g_202;
static int16_t **g_752 = &g_753;
static uint32_t ***g_776 = &g_182;
static int8_t g_796 = 9;
static int16_t func_1(void);
inline static int32_t * func_2(int32_t p_3);
inline static uint32_t func_6(int32_t * p_7, int32_t * p_8, int32_t p_9);
inline static int32_t * func_11(int8_t p_12, uint32_t p_13, uint32_t p_14, int32_t * p_15, int32_t * p_16);
static int32_t * func_19(uint32_t * p_20);
static uint32_t * func_21(int32_t p_22, int8_t p_23, int32_t p_24, int32_t * p_25);
static int32_t * func_26(int32_t p_27, uint32_t * p_28);
static int32_t * func_32(int32_t * p_33, uint32_t p_34, uint32_t * p_35, int32_t p_36, uint32_t p_37);
inline static uint32_t * func_38(int32_t p_39, uint8_t p_40, int8_t p_41);
static int32_t * func_43(int32_t * p_44, uint32_t ** p_45, int8_t p_46);
static int16_t func_1(void)
{
    int32_t *l_10 = &g_5;
    uint32_t *l_17 = &g_18;
    int32_t *l_660 = &g_163;
    int32_t **l_717 = (void*)0;
    int32_t **l_718 = (void*)0;
    int32_t **l_719 = &g_716;
    (*l_719) = func_2((((g_4 != ((g_5 > func_6(l_10, ((*l_719) = func_11((*l_10), (*l_10), ((*l_17) = (*l_10)), &g_5, (l_660 = func_19(func_21((*l_10), (*l_10), (*l_10), &g_5))))), g_590)) , (*l_719))) || 0) > 0x46FC));
    (*l_719) = &g_5;
    return (**l_719);
}
inline static int32_t * func_2(int32_t p_3)
{
    uint16_t l_775 = 0xA38C;
    int32_t **l_781 = (void*)0;
    int32_t **l_782 = &g_4;
    uint8_t **l_789 = &g_315;
    uint32_t *****l_791 = &g_204;
    int32_t *l_797 = &g_101;
    int32_t *l_798 = &g_5;
    for (g_18 = 22; (g_18 > 19); g_18 = safe_sub_func_uint32_t_u_u(g_18, 7))
    {
        uint32_t l_777 = 0xD660DD4A;
        int32_t *l_778 = (void*)0;
        int32_t *l_779 = (void*)0;
        int32_t *l_780 = &g_163;
        (*l_780) = (safe_mod_func_int8_t_s_s((((*g_753) & (!((p_3 || ((((safe_rshift_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u((safe_unary_minus_func_int32_t_s((((*g_495) , (safe_mod_func_uint16_t_u_u(0x586A, (l_775 || ((void*)0 == g_776))))) == ((p_3 | ((*g_4) = l_777)) || 0x051AD2F5)))), 1)) == (*g_258)), 6)) < (-1)), l_777)) >= p_3) > 0xFC3BE621) <= p_3)) , 0x52C69E44))) ^ l_775), p_3));
    }
    (*l_782) = &p_3;
    l_798 = (((**g_752) = ((**g_752) > (safe_mod_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((l_789 != ((safe_unary_minus_func_int8_t_s((((l_791 = l_791) == (void*)0) ^ (((safe_sub_func_int32_t_s_s(8, (p_3 >= 0xADB2A017))) ^ (safe_mul_func_int8_t_s_s(p_3, g_796))) , p_3)))) , l_789)), p_3)), 8)), (**l_782))))) , l_797);
    return &g_163;
}
inline static uint32_t func_6(int32_t * p_7, int32_t * p_8, int32_t p_9)
{
    uint8_t l_720 = 1U;
    int32_t *l_721 = (void*)0;
    int32_t *****l_724 = &g_437;
    int16_t *l_751 = &g_202;
    int16_t **l_750 = &l_751;
    int8_t l_758 = 0xC5;
    if (l_720)
    {
        uint32_t **l_722 = &g_416;
        int32_t *****l_723 = &g_437;
        uint16_t ***l_727 = &g_494;
        uint32_t l_730 = 0xE2CB6419;
        int32_t **l_731 = &g_716;
        (*l_731) = func_43(l_721, l_722, (((((l_723 = l_723) != ((*g_4) , l_724)) >= (safe_sub_func_uint32_t_u_u(((void*)0 != l_727), (((safe_sub_func_uint32_t_u_u(l_730, 0U)) < 1) , 4294967292U)))) >= p_9) , (*g_258)));
        (*l_731) = l_721;
    }
    else
    {
        int16_t l_733 = 1;
        int32_t **l_734 = &g_48;
        int16_t *l_756 = &l_733;
        int32_t *l_757 = &g_163;
        (*l_734) = p_7;
        (*l_757) = ((safe_mod_func_uint8_t_u_u(((*p_8) <= (((safe_mul_func_uint16_t_u_u((**l_734), (safe_lshift_func_uint8_t_u_s(1U, 0)))) > ((safe_mul_func_int16_t_s_s((!(safe_div_func_int8_t_s_s(p_9, (safe_div_func_uint16_t_u_u(0xC1B8, (safe_div_func_int16_t_s_s(((**g_752) = (l_750 != g_752)), ((*l_756) = (safe_mod_func_int8_t_s_s(((**l_734) < ((0xC8 != 8U) ^ p_9)), 9)))))))))), 0U)) || 0x8F4E)) ^ p_9)), p_9)) ^ p_9);
        (*l_734) = (void*)0;
    }
    return l_758;
}
inline static int32_t * func_11(int8_t p_12, uint32_t p_13, uint32_t p_14, int32_t * p_15, int32_t * p_16)
{
    int32_t *l_661 = &g_163;
    int32_t **l_662 = (void*)0;
    int32_t **l_663 = &g_48;
    uint32_t ***l_705 = &g_415;
    int32_t l_714 = (-1);
    (*l_663) = l_661;
    for (g_202 = 9; (g_202 >= 13); g_202 = safe_add_func_int16_t_s_s(g_202, 1))
    {
        int8_t l_670 = 0x5D;
        uint32_t ***l_704 = (void*)0;
        for (g_592 = 22; (g_592 < 10); --g_592)
        {
            uint32_t *l_688 = &g_67;
            int32_t l_689 = 0xF652E9D1;
            int16_t *l_690 = &g_66;
            int32_t l_710 = 0x7A7C4793;
            (*g_48) = (safe_lshift_func_uint16_t_u_s(l_670, (1 || ((p_12 , 0) < ((safe_sub_func_uint16_t_u_u(((+(safe_unary_minus_func_uint32_t_u(((safe_rshift_func_int16_t_s_s(g_117, ((*l_690) = (((((**g_494) = ((safe_add_func_uint16_t_u_u((0xA4E3D260 || 1U), (safe_mod_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(((*g_258) = (((((((-7) > (!(safe_rshift_func_uint16_t_u_s((safe_sub_func_uint32_t_u_u(((*l_688) = l_670), 0x6938A6EF)), 8)))) & p_13) , (-1)) & l_689) , 4294967287U) < 0x97999371)), l_670)), p_14)))) >= (*l_661))) && 2) >= (-1)) & (*l_661))))) | 1U)))) >= g_592), p_12)) & 0xA0)))));
            if ((*g_48))
            {
                int32_t *l_706 = &l_689;
                uint32_t **l_711 = &l_688;
                uint32_t ***l_712 = &g_182;
                uint32_t ***l_713 = &l_711;
                int32_t *l_715 = &l_714;
                (*l_706) = ((*g_48) = (safe_lshift_func_uint16_t_u_u((*g_495), ((((safe_rshift_func_uint8_t_u_u(((~(safe_lshift_func_uint8_t_u_s(0x10, 2))) != (safe_rshift_func_uint8_t_u_s(((g_66 = (p_12 <= (safe_sub_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(((*p_16) && (p_12 , 7)), p_13)), (*g_258))))) , (l_704 == (void*)0)), p_13))), p_14)) , l_705) != (void*)0) & (*p_15)))));
                (*l_715) = ((**l_663) = (((0xD9AA <= ((((*g_258) & (safe_mul_func_int8_t_s_s(6, ((*g_4) != (*g_48))))) >= (l_710 = ((*l_706) = (safe_unary_minus_func_int16_t_s(5))))) & (((*l_713) = l_711) != &l_688))) > l_670) != l_714));
                (*l_706) = (*p_16);
            }
            else
            {
                (*l_661) = (*l_661);
            }
            (*l_663) = (*l_663);
        }
    }
    return g_716;
}
static int32_t * func_19(uint32_t * p_20)
{
    uint32_t *l_658 = &g_196;
    uint32_t **l_657 = &l_658;
    uint32_t ***l_659 = &g_182;
    (*l_659) = l_657;
    return p_20;
}
static uint32_t * func_21(int32_t p_22, int8_t p_23, int32_t p_24, int32_t * p_25)
{
    uint32_t *l_29 = &g_30;
    uint32_t **l_31 = &l_29;
    int32_t **l_656 = &g_48;
    (*l_656) = func_26((*g_4), ((*l_31) = l_29));
    (*l_656) = (*l_656);
    return p_25;
}
static int32_t * func_26(int32_t p_27, uint32_t * p_28)
{
    uint8_t l_42 = 9U;
    int32_t **l_115 = &g_48;
    uint16_t *l_124 = &g_117;
    int16_t *l_125 = &g_66;
    int32_t l_148 = 0x9EBF9289;
    int32_t l_150 = 0;
    uint32_t l_155 = 1U;
    uint8_t *l_175 = &l_42;
    uint32_t *l_269 = &g_30;
    uint32_t **l_280 = &l_269;
    uint32_t ***l_279 = &l_280;
    uint32_t ****l_278 = &l_279;
    int32_t l_377 = (-3);
    uint16_t l_436 = 0xD779;
    uint16_t **l_441 = (void*)0;
    uint16_t ***l_440 = &l_441;
    int32_t ****l_464 = &g_205;
    uint32_t *****l_474 = &l_278;
    int32_t *l_534 = &g_163;
    uint16_t l_591 = 65535U;
    int16_t l_606 = 0x681D;
    int32_t l_613 = 6;
    int8_t l_651 = 0;
    int16_t l_655 = 0x210B;
    (*l_115) = func_32(&g_5, p_27, func_38(p_27, p_27, l_42), (((safe_mod_func_int16_t_s_s((safe_mod_func_int8_t_s_s((0x14 ^ p_27), l_42)), l_42)) <= (*g_4)) , g_5), g_30);
    g_117 = (+0x0B8F);
    if ((safe_sub_func_int8_t_s_s(0x8B, ((safe_mod_func_uint16_t_u_u(((*g_48) != 0), ((*l_125) = (safe_div_func_int32_t_s_s((((*l_124) = (**l_115)) & (0x1D & (((g_90 , p_27) != 251U) , p_27))), g_66))))) , 0x9E))))
    {
        uint16_t *l_137 = &g_117;
        int32_t **l_139 = &g_48;
        int32_t ***l_138 = &l_139;
        uint32_t *l_151 = &g_67;
        uint8_t *l_152 = &l_42;
        uint32_t l_158 = 4U;
        uint8_t *l_173 = &l_42;
        int16_t *l_201 = &g_202;
        uint32_t ****l_203 = (void*)0;
        int8_t l_264 = 0;
        uint32_t ***l_275 = &g_182;
        uint32_t l_334 = 4294967295U;
        uint32_t *****l_336 = &g_204;
        uint16_t l_482 = 0xD604;
        int32_t l_597 = 0;
        uint8_t l_614 = 1U;
        if (((((*l_152) = (((safe_add_func_int32_t_s_s((safe_sub_func_uint32_t_u_u(((*l_151) = (safe_mod_func_uint16_t_u_u((((((((safe_add_func_uint16_t_u_u((((safe_mul_func_int16_t_s_s((-1), (g_149 = ((safe_unary_minus_func_uint16_t_u((l_148 = ((l_137 != (void*)0) > ((l_115 == ((*l_138) = &g_4)) , (safe_lshift_func_uint16_t_u_s(((*l_124) = ((safe_lshift_func_int8_t_s_s((g_117 || p_27), 3)) <= (safe_mod_func_int32_t_s_s((-3), ((safe_sub_func_int16_t_s_s((**l_115), 0x53E3)) && 0x33))))), 4))))))) & 1)))) >= (**l_115)) || g_30), p_27)) && (-9)) , (**l_139)) , (**l_115)) , 1U) && 4294967295U) <= p_27), l_150))), 0x121A4FEC)), 0xB29FA799)) != p_27) ^ (-1))) && p_27) >= (*g_4)))
        {
            int16_t *l_170 = &g_66;
            int32_t *l_171 = &g_172;
            uint8_t **l_174 = &l_152;
            int16_t l_178 = 0x8959;
            for (l_150 = 0; (l_150 < (-29)); l_150--)
            {
                uint16_t **l_156 = &l_137;
                uint16_t ***l_157 = &l_156;
                int32_t l_167 = 1;
                (*l_157) = (((*l_152) = l_155) , l_156);
                if ((*g_48))
                    continue;
                if (l_158)
                    continue;
                for (g_30 = 26; (g_30 != 9); --g_30)
                {
                    if ((**l_115))
                        break;
                    if ((*g_4))
                    {
                        int32_t *l_164 = &l_150;
                        p_27 = (safe_sub_func_int16_t_s_s(0x6370, g_163));
                        (*l_115) = l_164;
                    }
                    else
                    {
                        int32_t *l_168 = (void*)0;
                        int32_t *l_169 = &g_101;
                        (*l_169) = ((safe_lshift_func_uint8_t_u_u(l_167, 5)) != l_167);
                        (*l_115) = &g_5;
                        p_27 = 0x0B1FDE04;
                    }
                }
            }
            (*l_115) = &p_27;
            for (g_163 = (-12); (g_163 > 23); g_163 = safe_add_func_int8_t_s_s(g_163, 1))
            {
                uint8_t l_181 = 254U;
                (*g_48) = l_181;
            }
        }
        else
        {
            uint32_t ***l_183 = &g_182;
            uint32_t **l_185 = (void*)0;
            uint32_t ***l_184 = &l_185;
            (*l_184) = ((*l_183) = g_182);
        }
        if ((safe_mod_func_int16_t_s_s(((*l_201) = ((*l_125) = ((safe_add_func_uint16_t_u_u(g_149, ((**l_139) & (safe_mod_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((((((g_196 = (safe_add_func_int16_t_s_s(((65527U <= g_117) ^ (***l_138)), (**l_139)))) | ((*l_175) = (+(!(((void*)0 == l_151) , (safe_add_func_uint8_t_u_u(((p_27 || (**l_139)) <= g_149), p_27))))))) != g_5) <= 0U) >= 0x0F), p_27)), (**l_139)))))) , 1))), g_101)))
        {
            g_204 = l_203;
        }
        else
        {
            int32_t *l_206 = &g_172;
            int32_t l_211 = (-1);
            uint32_t l_231 = 0x4866C570;
            int32_t l_233 = 0xB2ED70B5;
            uint32_t ****l_282 = &l_279;
            uint32_t l_289 = 0x364A4C9F;
            int32_t l_299 = 0x2736123B;
            uint32_t **l_305 = &l_151;
            uint8_t **l_369 = &l_173;
            int16_t *l_399 = &g_66;
            uint32_t l_406 = 1U;
            int32_t *l_499 = &g_163;
            uint32_t l_576 = 4294967295U;
            if ((g_205 != (((*l_206) = (-10)) , (void*)0)))
            {
                uint8_t *l_226 = (void*)0;
                int32_t l_229 = 0x3C3F1057;
                uint32_t ***l_230 = (void*)0;
                uint32_t *****l_281 = &l_278;
                int32_t l_304 = (-1);
                int16_t *l_401 = &g_202;
                int8_t l_435 = 0x73;
                uint16_t l_512 = 0xCAE3;
                for (g_202 = (-12); (g_202 > 23); g_202 = safe_add_func_uint32_t_u_u(g_202, 5))
                {
                    int8_t *l_227 = &g_90;
                    int32_t l_228 = 0x238762AC;
                    int32_t l_232 = 4;
                    uint16_t l_234 = 0x88D9;
                    int8_t *l_241 = &g_111;
                    uint32_t *l_246 = &l_231;
                    uint32_t *l_248 = &l_231;
                    uint32_t **l_247 = &l_248;
                    int16_t l_257 = 0x9B7C;
                    int32_t *l_260 = (void*)0;
                    int32_t *l_261 = &l_211;
                    int32_t *l_262 = (void*)0;
                    int32_t *l_263 = &l_233;
                    l_233 = ((safe_sub_func_int16_t_s_s(((l_211 = (g_111 & 8U)) && (safe_div_func_uint8_t_u_u((1U || (!(g_66 = l_211))), (safe_mod_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((safe_add_func_int8_t_s_s((((((safe_add_func_int16_t_s_s(((((((((~((*l_124) = (((((safe_sub_func_uint8_t_u_u((l_226 != (void*)0), (g_149 <= 249U))) >= ((((*l_227) = p_27) < p_27) , l_228)) == p_27) , g_196) == l_229))) , &g_182) != l_230) && l_231) == 0xA6) == (**l_139)) , l_228) <= 5U), p_27)) | g_30) == p_27) & l_232) != 0x87D8), g_30)), p_27)), p_27))))), (**l_115))) < (-1));
                    p_27 = ((l_234 && ((l_264 = ((safe_div_func_int16_t_s_s(((safe_mul_func_int8_t_s_s(((*l_241) = ((*l_227) = l_229)), ((*g_258) = (safe_add_func_uint16_t_u_u(((void*)0 == &l_155), (((1U != (l_228 = (l_246 != ((*l_247) = l_246)))) != g_202) && (safe_div_func_int8_t_s_s((safe_mod_func_int32_t_s_s(((*l_263) = ((*l_261) = ((safe_mul_func_uint16_t_u_u(((safe_div_func_uint16_t_u_u(((l_257 , (void*)0) != g_258), p_27)) < p_27), g_149)) , 0))), p_27)), (*g_258))))))))) & 0), g_149)) != (**l_115))) & (-5))) == (*g_48));
                    for (l_229 = 19; (l_229 > (-17)); l_229--)
                    {
                        (*l_261) = p_27;
                    }
                    (*l_263) = (safe_lshift_func_uint16_t_u_u(((void*)0 == l_269), 14));
                }
                (*l_115) = ((~(safe_add_func_uint8_t_u_u(p_27, ((safe_sub_func_int16_t_s_s(((*l_201) = ((l_275 == &g_182) , (safe_sub_func_int8_t_s_s((((*l_281) = l_278) == l_282), (&l_203 != (void*)0))))), g_67)) == (safe_div_func_int32_t_s_s((((g_196 = (safe_mul_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u(((-5) == 1), p_27)), 1U))) , l_289) >= (***l_138)), 4294967287U)))))) , &g_5);
                if ((((safe_mul_func_int8_t_s_s((p_27 >= (safe_div_func_uint8_t_u_u(p_27, p_27))), (((*l_206) = (**l_115)) , ((*l_173) = (+(safe_div_func_uint8_t_u_u(((0xDFFA3906 ^ (((((void*)0 == (***l_281)) > (safe_div_func_int8_t_s_s((((3U && ((p_27 , g_149) || l_231)) ^ l_299) | p_27), (***l_138)))) <= l_229) <= 254U)) <= 247U), 0xA7))))))) > 1U) == l_299))
                {
                    int8_t *l_309 = &g_111;
                    int32_t l_333 = 0x7548C9A6;
                    int32_t *l_335 = &l_150;
                    uint8_t ***l_370 = &g_314;
                    int32_t *l_391 = &l_150;
                    if (((*g_258) <= (p_27 > (((l_148 = ((safe_sub_func_uint16_t_u_u(((g_30 | (l_304 = 65535U)) & (l_229 & ((void*)0 != l_305))), (!((safe_div_func_int8_t_s_s(((*l_309) = (-1)), (safe_lshift_func_int16_t_s_s((**l_139), (**l_115))))) > g_149)))) , g_202)) == p_27) <= 0x11529E7C))))
                    {
                        uint8_t ***l_316 = &g_314;
                        l_211 = ((((safe_sub_func_uint16_t_u_u(((g_149 = ((&l_175 == ((*l_316) = g_314)) && (safe_rshift_func_int8_t_s_u((safe_sub_func_int32_t_s_s((safe_mod_func_uint16_t_u_u((safe_div_func_int8_t_s_s((l_304 < (0xBA93 > ((*l_137) = ((l_299 = ((*l_152) = (safe_unary_minus_func_uint32_t_u(4294967295U)))) != p_27)))), ((**l_115) , (safe_mul_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((+((safe_lshift_func_int8_t_s_s(0, (*g_258))) , l_333)), (*g_4))), (**l_139)))))), p_27)), l_334)), p_27)))) != g_66), (-1))) <= (**l_139)) , 0U) || 1U);
                        l_335 = (void*)0;
                        l_335 = func_43(&g_5, (*l_279), (*g_258));
                    }
                    else
                    {
                        int32_t l_341 = 0x25770ADE;
                        int32_t *l_368 = &l_148;
                        l_336 = &g_204;
                        (*l_335) = (((safe_add_func_int16_t_s_s((0xF4C4EFF3 | p_27), (safe_mod_func_int8_t_s_s((l_341 && ((**l_305) = ((safe_div_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_u(p_27, (!(safe_lshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_s(((l_226 == l_226) , ((safe_rshift_func_int16_t_s_u((safe_mul_func_uint16_t_u_u((safe_div_func_uint16_t_u_u((l_304 | ((((g_314 = ((safe_lshift_func_int16_t_s_u((l_341 || (-8)), 6)) , (void*)0)) != &l_226) , (*g_258)) , 0xAB)), 0x8812)), g_111)), (*l_335))) ^ p_27)), 1)), 1))))) != 1), g_66)) > 0U))), (**l_115))))) & 5U) == 0xF0752AFE);
                        (*l_335) = (0U <= 65528U);
                        (*l_115) = func_38((*g_4), p_27, (((*l_173) = (safe_unary_minus_func_uint8_t_u(0U))) == (safe_div_func_uint16_t_u_u((((p_27 == (p_27 > (((((p_27 , (safe_mul_func_int16_t_s_s((safe_mul_func_int16_t_s_s(((*l_201) = (&g_149 == (void*)0)), (((safe_div_func_uint8_t_u_u(((((*l_115) = l_368) != &l_304) , 0x23), l_304)) || g_117) | 1))), g_66))) , (**l_115)) >= p_27) > p_27) & g_172))) , 0xE939) , 0xDBA2), 65535U))));
                    }
                    (*l_370) = l_369;
                    if (((*l_391) = (((safe_div_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(p_27, 2)), (safe_mul_func_int16_t_s_s(g_117, l_377)))) != (safe_unary_minus_func_uint32_t_u(((*l_151) = (((safe_mul_func_uint16_t_u_u((p_27 || ((*l_309) = (p_27 || (255U ^ (safe_add_func_uint8_t_u_u(l_211, (((safe_rshift_func_uint8_t_u_s(((safe_mod_func_uint8_t_u_u((((safe_mod_func_uint32_t_u_u((((safe_div_func_int32_t_s_s((*g_48), p_27)) ^ 4) != 0x2DFD), 0xA03A67FC)) || p_27) && (*l_335)), (-5))) , 0xF9), 5)) && p_27) , p_27))))))), p_27)) , (*g_258)) != (**g_314)))))) == (**l_139))))
                    {
                        int16_t **l_400 = &l_125;
                        int32_t l_405 = 0xA15CC063;
                        (*l_115) = (void*)0;
                        (*l_391) = (((safe_mul_func_int8_t_s_s(((safe_sub_func_int16_t_s_s((l_304 , (safe_add_func_uint8_t_u_u(((**l_369) = 0xD5), (0x47 == ((((p_27 = (*g_4)) <= l_289) == (safe_unary_minus_func_uint32_t_u(l_233))) & (((*l_400) = l_399) == l_401)))))), ((~(safe_div_func_uint8_t_u_u((((*l_137) = l_211) == l_405), l_406))) && (*g_4)))) | (***l_138)), (***l_138))) ^ l_289) ^ l_405);
                    }
                    else
                    {
                        uint32_t l_409 = 0x84E41F5C;
                        g_48 = (((!((g_259 ^ (((-1) < (~(-1))) ^ l_409)) , p_27)) && (safe_sub_func_int8_t_s_s((**l_115), 0xC8))) , &l_333);
                        (**l_115) = l_304;
                    }
                }
                else
                {
                    int32_t *l_423 = &g_163;
                    (*l_423) = (1U & (((safe_sub_func_int16_t_s_s(0xF4E3, (((((void*)0 == g_414) >= ((0x0D & (safe_div_func_int8_t_s_s((safe_add_func_uint32_t_u_u((l_233 & (safe_rshift_func_int16_t_s_s(g_117, ((p_27 ^ ((p_27 >= (**l_115)) != 0)) == 1U)))), (*g_48))), p_27))) ^ 0x04AA)) , l_233) && 0x2A))) || p_27) > 8U));
                    if (((safe_rshift_func_int16_t_s_u(((safe_mod_func_uint8_t_u_u((((safe_unary_minus_func_uint8_t_u(2U)) < (((safe_mod_func_int16_t_s_s((**l_115), 0x767E)) , &l_423) != (void*)0)) != p_27), p_27)) >= (safe_rshift_func_uint16_t_u_u(p_27, (safe_rshift_func_uint8_t_u_u(((0x09A3 > 0U) | p_27), (***l_138)))))), l_435)) & l_436))
                    {
                        g_437 = &l_138;
                        (*l_115) = &p_27;
                        (*l_115) = (***g_437);
                    }
                    else
                    {
                        uint16_t **l_439 = &l_137;
                        uint16_t ***l_438 = &l_439;
                        uint32_t l_450 = 0xDC34B03E;
                        int8_t l_455 = 1;
                        (*l_115) = func_38((((****l_278) = (g_202 <= (((l_438 != l_440) , (safe_sub_func_uint32_t_u_u(p_27, 0x9BEE199B))) <= ((safe_sub_func_uint16_t_u_u(((*l_124) = p_27), ((**l_115) > (safe_div_func_int8_t_s_s((((*l_423) = ((safe_rshift_func_uint8_t_u_u((l_450 < (safe_lshift_func_uint8_t_u_s(((((safe_mul_func_int8_t_s_s((l_455 < l_450), l_435)) <= g_202) >= 4294967292U) >= g_5), (**l_115)))), 6)) | l_229)) <= g_67), l_450))))) , 8)))) , (-1)), p_27, (*g_258));
                        (*l_423) = (((safe_lshift_func_int8_t_s_u((l_455 & ((safe_rshift_func_int16_t_s_s(p_27, p_27)) ^ (p_27 != ((0 < ((safe_sub_func_int16_t_s_s((safe_mod_func_int8_t_s_s(((void*)0 == l_464), (safe_add_func_int16_t_s_s((safe_mul_func_uint32_t_u_u(0x5E0714F0, (((safe_div_func_uint8_t_u_u(0x9E, 0xA9)) | (**l_115)) >= p_27))), 0U)))), (**l_139))) ^ 4294967292U)) != 0U)))), 7)) != 0x6CDA) < 1U);
                        (*l_115) = &p_27;
                        (**l_115) = (*g_48);
                    }
                    for (l_155 = 14; (l_155 != 31); ++l_155)
                    {
                        uint32_t *****l_473 = &l_278;
                        l_474 = l_473;
                        (*l_115) = &l_229;
                    }
                }
                for (g_101 = (-21); (g_101 != 27); g_101++)
                {
                    int32_t *l_493 = &l_304;
                    int32_t ****l_526 = (void*)0;
                    int32_t ****l_527 = &g_205;
                    int32_t *****l_528 = &l_464;
                    for (l_211 = 0; (l_211 >= (-19)); l_211--)
                    {
                        int32_t *l_479 = &l_299;
                        (*l_479) = (*g_4);
                    }
                    p_27 = (7 | (safe_mul_func_uint16_t_u_u(l_482, ((safe_add_func_int16_t_s_s((-3), p_27)) , (safe_div_func_int32_t_s_s(((((((((safe_rshift_func_int16_t_s_u((safe_mul_func_uint16_t_u_u(l_299, p_27)), p_27)) >= (safe_rshift_func_uint16_t_u_s(((*l_137) = (l_299 >= ((*l_493) = p_27))), p_27))) <= (**l_139)) ^ p_27) , g_494) == &l_137) <= (**g_494)) || 1U), (***l_138)))))));
                    for (l_231 = (-21); (l_231 > 21); l_231 = safe_add_func_uint16_t_u_u(l_231, 5))
                    {
                        int32_t l_498 = 0x6198F1B2;
                        (*l_115) = &p_27;
                        (*l_115) = (l_498 , func_43(l_499, (***l_281), (safe_mod_func_uint16_t_u_u(((**g_494) = (((*l_175) = ((safe_mod_func_int32_t_s_s((((safe_lshift_func_uint8_t_u_u((((((-1) >= (((safe_mod_func_uint16_t_u_u(1U, 0x2527)) != ((safe_rshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(p_27, 5)), (p_27 ^ ((p_27 , l_304) ^ 0x91)))) , (*l_499))) | 0U)) != p_27) ^ l_304) && g_202), (***l_138))) > 0x4D3B) || p_27), l_304)) || l_512)) ^ p_27)), p_27))));
                    }
                    (*l_115) = func_38(((safe_mod_func_int32_t_s_s(((((((safe_unary_minus_func_int16_t_s(((1 != ((g_66 < (p_27 <= ((*l_173) = (((g_516 = (g_202 = p_27)) && (255U >= (safe_mul_func_int16_t_s_s((!((safe_div_func_uint32_t_u_u((((safe_add_func_uint16_t_u_u(((safe_sub_func_int16_t_s_s((l_526 != ((*l_528) = l_527)), 0xB813)) ^ (**g_494)), p_27)) && p_27) & 0x35), (-1))) < g_117)), (*g_495))))) | (*g_258))))) < 0U)) || 0x5C))) > g_101) , &l_304) != (void*)0) , p_27) & p_27), p_27)) & (*g_258)), p_27, l_377);
                }
            }
            else
            {
                uint8_t l_532 = 0x00;
                int32_t *l_554 = &g_101;
                int16_t l_581 = 0;
                int8_t l_588 = 0x65;
                int16_t **l_594 = &l_125;
                int16_t ***l_593 = &l_594;
                if (p_27)
                {
                    int32_t *l_529 = &l_211;
                    int32_t *l_533 = &l_148;
                    l_529 = &l_233;
                    if ((p_27 = (**l_115)))
                    {
                        (*l_529) = ((safe_mul_func_uint16_t_u_u(l_532, (*l_529))) < l_532);
                        l_336 = &l_203;
                        l_499 = l_529;
                    }
                    else
                    {
                        (*l_336) = l_282;
                        l_533 = l_529;
                    }
                    (*l_115) = func_32(l_534, g_202, l_529, g_67, (safe_rshift_func_uint8_t_u_u(l_532, 7)));
                }
                else
                {
                    uint32_t l_552 = 0x76C518BF;
                    int32_t *l_553 = &l_233;
                    if (((*l_499) = (*g_4)))
                    {
                        (*l_115) = &p_27;
                        (*g_414) = &p_28;
                        (*l_499) = 0x6D39890C;
                    }
                    else
                    {
                        (*l_115) = &p_27;
                    }
                    (*g_48) = (((*g_495) , (-6)) || (safe_rshift_func_uint16_t_u_u((~(+p_27)), 10)));
                    for (p_27 = 3; (p_27 < (-15)); p_27 = safe_sub_func_int16_t_s_s(p_27, 3))
                    {
                        uint32_t **l_545 = (void*)0;
                        uint32_t *l_547 = &g_196;
                        uint32_t **l_546 = &l_547;
                        (*l_499) = (((&g_437 != &g_437) && (((safe_div_func_int32_t_s_s((((*l_305) = (*l_305)) != ((*l_546) = func_38(l_532, (**l_115), (*g_258)))), (((safe_sub_func_uint32_t_u_u((***l_138), (safe_add_func_uint8_t_u_u(252U, p_27)))) <= p_27) ^ l_552))) , p_27) < g_90)) >= 0xE5);
                        return l_554;
                    }
                }
                for (g_196 = 8; (g_196 >= 59); g_196++)
                {
                    int32_t l_570 = 0;
                    int32_t *l_571 = &g_101;
                    int32_t ***l_587 = &l_115;
                }
                (*l_593) = &l_399;
                (*l_115) = (*l_139);
            }
            (*l_115) = &p_27;
            (*l_115) = func_38(p_27, (*l_534), (safe_div_func_int8_t_s_s((l_597 > (**l_139)), p_27)));
        }
        for (g_589 = 0; (g_589 > 21); g_589++)
        {
            uint32_t l_607 = 0U;
            int8_t *l_618 = &g_90;
            int8_t **l_619 = &l_618;
            int32_t l_620 = (-5);
            (*l_115) = ((((safe_rshift_func_int16_t_s_s(((safe_mul_func_int8_t_s_s(((((safe_add_func_uint8_t_u_u((p_27 < ((*l_534) = 0x15896220)), ((((l_606 > (((((l_607 , ((((*l_124) = ((0U > (safe_add_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(((*g_258) = (~(0xE8 > ((((l_613 && p_27) <= (l_607 , 0x4815)) >= p_27) & 0xEB)))), p_27)), (*g_495)))) <= p_27)) == g_592) != (***l_138))) == (*g_495)) > 6U) ^ p_27) , 0x88)) , l_614) < g_66) == g_5))) , (**l_115)) , g_590) >= 0xF49C), g_196)) >= (**l_115)), 12)) < 0x77663CFE) || l_607) , (**l_138));
            l_620 = ((safe_add_func_int8_t_s_s((safe_unary_minus_func_int8_t_s((l_175 == ((*l_619) = l_618)))), 249U)) >= p_27);
        }
    }
    else
    {
        int32_t *l_623 = &l_148;
        int32_t *l_650 = &l_377;
        uint32_t *l_652 = (void*)0;
        uint32_t *l_653 = &l_155;
        int8_t *l_654 = &l_651;
        (*l_534) = 0xF203C2EC;
        for (g_90 = 22; (g_90 < (-17)); --g_90)
        {
            int32_t *l_624 = &g_101;
            return l_624;
        }
        for (g_516 = 0; (g_516 != 10); g_516 = safe_add_func_uint8_t_u_u(g_516, 5))
        {
            int32_t *l_627 = &g_101;
            l_627 = &p_27;
            (*l_115) = (((void*)0 == (*g_494)) , (void*)0);
        }
        (*l_623) = ((safe_lshift_func_int16_t_s_u((safe_mod_func_int32_t_s_s((*l_623), ((((void*)0 != (*g_494)) , (((((safe_rshift_func_uint8_t_u_u(p_27, 4)) , (safe_mul_func_uint16_t_u_u(((((*l_125) = ((((**g_494) = (**g_494)) , ((*l_534) = (((*l_534) <= (((p_27 = (safe_lshift_func_int8_t_s_s(((safe_mod_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_s((*g_258), ((*l_654) = (safe_lshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(((~(((g_67 = ((*l_623) != ((*l_653) = (safe_mod_func_uint8_t_u_u((((*l_650) = ((safe_unary_minus_func_int8_t_s(((((*p_28) , g_590) , 0xBC) <= 0U))) <= (-1))) , 251U), l_651))))) < g_117) && 0x3C)) & (*l_623)), p_27)), (*l_623)))))) , (*l_623)), p_27)) | (*l_623)), p_27))) , 0x9ED32115) | (*l_534))) & (*l_623)))) == (*l_623))) , 0xA054) | (*l_623)), (*l_623)))) ^ (*l_623)) != l_655) != (*l_623))) & 0xFA))), 8)) <= (*l_623));
    }
    return &g_5;
}
static int32_t * func_32(int32_t * p_33, uint32_t p_34, uint32_t * p_35, int32_t p_36, uint32_t p_37)
{
    uint32_t *l_81 = &g_30;
    uint32_t **l_80 = &l_81;
    int32_t l_82 = 0x9D795BCD;
    uint32_t *l_85 = (void*)0;
    uint32_t **l_84 = &l_85;
    uint32_t ***l_83 = &l_84;
    int32_t **l_89 = &g_48;
    int8_t *l_94 = &g_90;
    int32_t **l_95 = &g_48;
    int32_t **l_96 = &g_48;
    int32_t **l_97 = &g_48;
    int32_t **l_98 = &g_48;
    int32_t **l_99 = &g_48;
    int32_t *l_100 = &g_101;
    int8_t *l_110 = &g_111;
    uint32_t l_112 = 0x628AE825;
    int16_t l_113 = 0x54D5;
    int16_t *l_114 = &l_113;
    g_90 = (((((p_36 >= (safe_rshift_func_int8_t_s_s(((safe_add_func_int32_t_s_s((((*l_80) = &g_30) == ((l_82 , (g_30 = (((((*l_83) = (void*)0) != (void*)0) , (~(0xCEB0 < ((((((l_82 ^ (((((*p_33) > (safe_mod_func_int16_t_s_s(((((&g_48 == l_89) , 0xE839) < 0xDF5A) & p_36), 0xFFC4))) , 0xEE) == p_36) <= g_66)) | p_37) , p_33) != &l_82) || g_30) < g_67)))) > p_37))) , &g_30)), 0x8B8AFECA)) || g_66), p_37))) , 0xE56B) > 0xAF74) | g_66) ^ g_5);
    p_33 = func_38((((((((**l_80) = (p_34 < (l_82 <= (((*l_114) = (((~(((((*l_94) = ((l_89 = l_89) == (void*)0)) , ((&g_5 == (l_100 = p_33)) | g_30)) , &p_35) != ((*l_83) = ((safe_sub_func_uint32_t_u_u((safe_div_func_int32_t_s_s(((safe_div_func_int16_t_s_s((g_66 = (safe_sub_func_int32_t_s_s((((*l_110) = ((((g_101 = (*p_33)) , 0xA15FBE5B) < (*p_33)) , 0x6E)) , (*g_4)), l_112))), g_67)) , (-1)), 0x9AB2FCBA)), g_30)) , &p_35)))) , l_113) != 0x1101)) , 0)))) , p_36) ^ g_5) != p_36) > 0x3856) , (*g_4)), g_5, p_37);
    return &g_5;
}
inline static uint32_t * func_38(int32_t p_39, uint8_t p_40, int8_t p_41)
{
    int32_t **l_47 = (void*)0;
    uint32_t *l_50 = &g_30;
    uint32_t **l_49 = &l_50;
    int32_t l_55 = 0x093D7F28;
    int16_t *l_65 = &g_66;
    int32_t **l_69 = &g_48;
    (*l_69) = func_43((g_48 = &p_39), l_49, (safe_add_func_uint16_t_u_u((((p_41 | (((safe_add_func_uint32_t_u_u(l_55, (((g_67 = (((safe_div_func_int16_t_s_s(((void*)0 == (*l_49)), 0xE255)) | (*g_4)) && ((*l_65) = (safe_add_func_uint16_t_u_u((safe_unary_minus_func_uint8_t_u((((safe_rshift_func_int16_t_s_u((safe_mul_func_int16_t_s_s(0x1A93, p_41)), g_5)) < g_5) >= 0U))), l_55))))) | p_39) != p_41))) > p_40) == g_30)) > 0x192FE2CC) != g_30), p_41)));
    (**l_69) = (((*l_65) = ((g_30 && (**l_69)) < ((void*)0 == (*l_49)))) == (((safe_sub_func_uint8_t_u_u(((*l_49) != (*l_49)), p_41)) != (**l_69)) && ((*g_4) > (*g_48))));
    return &g_30;
}
static int32_t * func_43(int32_t * p_44, uint32_t ** p_45, int8_t p_46)
{
    int32_t **l_68 = &g_48;
    (*l_68) = &g_5;
    return p_44;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_5;
    csmith_sink_ = g_18;
    csmith_sink_ = g_30;
    csmith_sink_ = g_66;
    csmith_sink_ = g_67;
    csmith_sink_ = g_90;
    csmith_sink_ = g_101;
    csmith_sink_ = g_111;
    csmith_sink_ = g_117;
    csmith_sink_ = g_149;
    csmith_sink_ = g_163;
    csmith_sink_ = g_172;
    csmith_sink_ = g_196;
    csmith_sink_ = g_202;
    csmith_sink_ = g_259;
    csmith_sink_ = g_516;
    csmith_sink_ = g_589;
    csmith_sink_ = g_590;
    csmith_sink_ = g_592;
    csmith_sink_ = g_732;
    csmith_sink_ = g_796;
    platform_main_end(0,0);
    return 0;
}
