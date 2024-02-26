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

volatile uint64_t csmith_sink_ = 0;
static long __undefined;
struct S0 {
   int8_t f0;
   uint64_t f1;
   int64_t f2;
};
static uint32_t g_3 = 18446744073709551615UL;
static int8_t g_19 = 1L;
static uint32_t g_42 = 18446744073709551609UL;
static int32_t g_75 = 0xAB83DCDCL;
static int32_t g_87 = (-1L);
static int32_t g_90 = 0xBC073022L;
static uint8_t g_91 = 1UL;
static uint32_t g_110 = 0UL;
static uint32_t g_111 = 0xD5AEB597L;
static int64_t g_123 = 0x263BB6FCE132E46ALL;
static int64_t g_124 = 0xFCC30D4DDF0F57B5LL;
static int16_t g_130 = 0x660CL;
static uint32_t g_131 = 0x0DA5F02BL;
static uint16_t g_136 = 0x3C64L;
static struct S0 g_138 = {0x68L,0x6AAB061D97AAA56DLL,0x42F441AF38FA3529LL};
static int32_t g_141 = 0x7D7DB6C6L;
static uint16_t g_142 = 0xA74CL;
static int16_t g_145 = 2L;
static uint32_t g_170 = 18446744073709551615UL;
static int32_t g_210 = (-6L);
static int8_t g_214 = (-1L);
static int32_t g_229 = 1L;
static int32_t g_279 = (-1L);
static int16_t g_300 = 0L;
static int64_t g_306 = 0xE8F57C2B75BE74CFLL;
static int32_t g_345 = 0xA200C977L;
static int8_t g_359 = 1L;
static int32_t g_379 = 0xAB7C3268L;
static uint32_t g_383 = 8UL;
static uint8_t g_391 = 0x60L;
static uint16_t g_403 = 0x63F5L;
static int8_t g_545 = 0x99L;
static uint8_t g_546 = 0x2FL;
static int32_t g_585 = 0xB7FE7ACBL;
static int8_t g_710 = 0xB9L;
static int32_t g_712 = 0x8A9DE29EL;
static uint32_t g_713 = 18446744073709551615UL;
static int32_t g_723 = 0x49B7FC4CL;
static uint32_t g_725 = 4294967292UL;
static struct S0 g_744 = {0x50L,8UL,1L};
static uint64_t g_752 = 18446744073709551613UL;
static uint8_t g_763 = 1UL;
static int32_t g_797 = 0L;
static int8_t g_798 = 0L;
static int32_t g_801 = 0x8BBE33EFL;
static int16_t g_803 = 0x2006L;
static int16_t g_805 = 0L;
static uint32_t g_806 = 0UL;
static int32_t g_823 = 9L;
static uint32_t g_857 = 0x87B755BCL;
static uint8_t g_889 = 0UL;
static uint64_t func_1(void);
static int16_t func_4(uint32_t p_5, int32_t p_6, uint32_t p_7, uint8_t p_8, int32_t p_9);
static int8_t func_10(int32_t p_11, int64_t p_12, int8_t p_13, int32_t p_14);
static int64_t func_15(uint32_t p_16, int8_t p_17, uint64_t p_18);
static uint16_t func_24(uint16_t p_25, int32_t p_26, int64_t p_27, uint16_t p_28, int32_t p_29);
static struct S0 func_30(int32_t p_31, int16_t p_32, int32_t p_33, int8_t p_34, int8_t p_35);
static uint8_t func_40(int32_t p_41);
static int32_t func_45(int8_t p_46, uint32_t p_47, int16_t p_48, int32_t p_49, uint32_t p_50);
static int16_t func_56(int32_t p_57, uint64_t p_58);
static int8_t func_62(uint16_t p_63, uint32_t p_64);
static uint64_t func_1(void)
{
    uint64_t l_2 = 18446744073709551612UL;
    uint32_t l_820 = 0x8CD05E4FL;
    int32_t l_821 = 0x8956B91CL;
    int32_t l_822 = 1L;
    uint32_t l_824 = 0xDE5CDD73L;
    int32_t l_891 = (-5L);
    g_3 = l_2;
    l_891 = ((l_2 < ((g_803 = func_4(((l_2 != l_2) ^ l_2), (func_10(g_3, func_15(((((g_19 = l_2) <= (((l_822 &= (safe_sub_func_int64_t_s_s(((((safe_add_func_int16_t_s_s((0xDA7209C3997B09B3LL > g_3), (l_821 = (l_820 ^= func_24(l_2, l_2, g_3, g_3, g_3))))) && 0x2E624F42L) <= 0xBE7DL) > g_710), 0x4BB6D4EFFE755516LL))) | g_229) ^ g_823)) > g_823) < g_801), l_824, g_141), g_823, g_723) > g_805), g_801, g_710, g_797)) != 0x5C21L)) | g_545);
    return g_889;
}
static int16_t func_4(uint32_t p_5, int32_t p_6, uint32_t p_7, uint8_t p_8, int32_t p_9)
{
    int8_t l_854 = 0L;
    int32_t l_865 = 0x09C5C101L;
    int32_t l_869 = 1L;
    if (l_854)
    {
        uint16_t l_862 = 65531UL;
        int32_t l_868 = 0x0B058504L;
        l_869 |= (g_19 == (safe_sub_func_int8_t_s_s(((g_857 ^ ((safe_add_func_int64_t_s_s(p_6, 0xCDED7C7988611E91LL)) >= (((safe_mod_func_uint64_t_u_u(((p_9 = ((l_862 >= (l_868 |= (g_744.f2 ^ (safe_add_func_int16_t_s_s(((l_865 &= (p_5 || p_5)) < (safe_mod_func_uint8_t_u_u(((g_131 && g_111) == 0xB79AFC043797CE3ALL), g_797))), l_854))))) >= 4UL)) ^ (-8L)), l_862)) & g_229) | 0x8800L))) | 2UL), g_123)));
        g_138 = g_138;
        l_869 = (-1L);
    }
    else
    {
        uint32_t l_876 = 0xAD6146F4L;
        int32_t l_890 = (-1L);
        p_9 = (safe_add_func_uint8_t_u_u(0xFEL, (((((safe_sub_func_uint16_t_u_u(p_6, ((0UL > p_5) >= l_854))) & (safe_lshift_func_int16_t_s_s((l_890 = (g_803 < ((l_876 >= (g_359 = (g_710 = 0xB6L))) & ((l_869 = (safe_lshift_func_uint16_t_u_u(((((safe_sub_func_int32_t_s_s((safe_sub_func_uint32_t_u_u(((safe_lshift_func_int16_t_s_s((safe_mod_func_int32_t_s_s(((safe_sub_func_int16_t_s_s((p_9 == l_869), g_379)) ^ 0x4B6C8AE2L), g_889)), 4)) && p_7), g_131)), g_857)) & l_876) == 65529UL) && 0UL), 3))) == l_876)))), l_876))) >= g_391) == 0L) & 65535UL)));
    }
    return p_6;
}
static int8_t func_10(int32_t p_11, int64_t p_12, int8_t p_13, int32_t p_14)
{
    uint8_t l_851 = 0x03L;
    --l_851;
    return g_124;
}
static int64_t func_15(uint32_t p_16, int8_t p_17, uint64_t p_18)
{
    int8_t l_834 = 0x52L;
    int32_t l_835 = 0x6AE98ED4L;
    int32_t l_850 = 0x0BD366DEL;
    g_379 |= (g_210 ^= (l_850 = ((((safe_sub_func_int64_t_s_s(p_18, 0x951E72DBE2B603D6LL)) && 0xD73F00CBL) != (safe_sub_func_uint8_t_u_u((~(p_17 > ((safe_lshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(((l_835 = (--g_744.f1)) && ((safe_lshift_func_uint16_t_u_s(((((l_835 = (((+(((safe_mod_func_uint16_t_u_u((p_18 & (safe_rshift_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(5L, (safe_add_func_uint64_t_u_u(l_834, ((0xA50C4C096AB468F8LL != (!(g_725 | g_725))) || 0x09D0L))))), l_835))), l_835)) && l_834) < l_834)) | 0x75L) && 0x46D326C5B8228276LL)) | 0x3CL) | g_42) > g_383), 0)) <= p_16)), 1)), 3)) || g_110))), 0xB0L))) ^ p_16)));
    return l_850;
}
static uint16_t func_24(uint16_t p_25, int32_t p_26, int64_t p_27, uint16_t p_28, int32_t p_29)
{
    uint32_t l_150 = 0x95E0419DL;
    int8_t l_153 = 0L;
    struct S0 l_819 = {1L,7UL,9L};
    l_819 = func_30(g_3, ((g_130 &= (safe_sub_func_uint16_t_u_u(g_3, (safe_add_func_uint8_t_u_u(0x53L, func_40(g_3)))))) ^ g_90), ((((safe_rshift_func_int8_t_s_s(((((4UL == (safe_lshift_func_uint16_t_u_s(l_150, 15))) > ((safe_rshift_func_int16_t_s_s(p_25, l_150)) != p_27)) >= 4294967295UL) | 18446744073709551615UL), 5)) < p_26) != 0x70AEDAF9L) == 65535UL), l_153, l_153);
    return l_819.f0;
}
static struct S0 func_30(int32_t p_31, int16_t p_32, int32_t p_33, int8_t p_34, int8_t p_35)
{
    uint64_t l_171 = 2UL;
    int32_t l_173 = 4L;
    int32_t l_194 = 0L;
    uint32_t l_326 = 0xFE98B080L;
    int32_t l_382 = 0x3597BFAFL;
    int32_t l_454 = 0x8C2794FBL;
    struct S0 l_477 = {0xC0L,2UL,3L};
    uint32_t l_495 = 0x5E0286AFL;
    uint64_t l_519 = 0x3F426D7295ACF06FLL;
    int32_t l_543 = 0x2B0EBEEAL;
    int32_t l_544 = 0xEBD9CC5EL;
    int32_t l_590 = (-1L);
    uint32_t l_607 = 0x60D448F3L;
    uint16_t l_635 = 0UL;
    uint32_t l_640 = 18446744073709551607UL;
    int8_t l_716 = 0x4EL;
    int32_t l_787 = 0x4BF2DDCFL;
    int32_t l_788 = (-1L);
    int32_t l_790 = 1L;
    int32_t l_792 = 0x9FD627E3L;
    int32_t l_794 = 0x233C4610L;
    int32_t l_799 = 0x105CBFDCL;
    int32_t l_800 = 0x0A1CA8C2L;
    int32_t l_802 = 0x8E110F41L;
    int32_t l_804 = 0xBF591591L;
    int32_t l_815 = 0x7EAAB5C7L;
    uint64_t l_816 = 0x32945B6AD69DD57CLL;
    int64_t l_817 = 0xA072CF99CCC1CF21LL;
    struct S0 l_818 = {0x7AL,0x34DFA2A91BA2B85ALL,-9L};
    for (g_136 = 0; (g_136 >= 37); g_136 = safe_add_func_uint16_t_u_u(g_136, 1))
    {
        int8_t l_156 = 0xF2L;
        int64_t l_172 = 0L;
        int32_t l_174 = 0L;
        int32_t l_193 = (-10L);
        uint16_t l_255 = 1UL;
        uint64_t l_398 = 0xC3C9290644564FD7LL;
        int32_t l_414 = (-1L);
        l_174 = (l_156 < (safe_add_func_uint16_t_u_u(((l_156 <= (l_173 ^= ((((~0x5F0EL) > ((safe_mod_func_int32_t_s_s((((safe_rshift_func_uint16_t_u_s(((safe_rshift_func_int16_t_s_s(g_111, (((((g_75 & (safe_lshift_func_int16_t_s_s(((((g_170 = (safe_lshift_func_int8_t_s_s(((g_136 >= 0x0CC6L) & ((g_42 & 0x40C6877BL) == l_156)), 1))) ^ 0UL) ^ 0x3721L) & p_32), g_90))) != 1UL) ^ p_31) & p_31) & 0xFC38D33B60DBC482LL))) > g_141), l_171)) >= l_156) > 0UL), 0xD19C5106L)) <= g_75)) || p_35) <= l_172))) > 0x5DL), g_138.f1)));
        if ((l_194 = (l_156 && (safe_add_func_int16_t_s_s((0L || ((safe_mod_func_int8_t_s_s((g_138.f0 ^= l_171), (((l_193 = (safe_mod_func_int32_t_s_s(((safe_sub_func_int16_t_s_s((((safe_mod_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(l_171, (1L > (((safe_mod_func_int16_t_s_s((l_173 = (p_32 = 0x95FBL)), (-10L))) & (((l_174 = (g_138.f2 && (((safe_rshift_func_int8_t_s_s((safe_add_func_int8_t_s_s(l_171, p_34)), l_156)) == 0L) || 246UL))) <= 0xBD87L) ^ p_34)) > g_141)))), 0xD0L)) <= p_33) < 0xEAL), l_172)) >= 255UL), g_87))) != 0xCEDAL) ^ g_138.f2))) && g_142)), l_172)))))
        {
            uint32_t l_195 = 2UL;
            --l_195;
        }
        else
        {
            uint64_t l_199 = 1UL;
            int32_t l_213 = 0L;
            int8_t l_257 = 0L;
            int32_t l_301 = (-7L);
            struct S0 l_320 = {-1L,18446744073709551615UL,0x18535F4C0952EE98LL};
            uint64_t l_328 = 0x4CD03F4EF0FF0162LL;
            int8_t l_381 = 1L;
            g_214 = ((safe_unary_minus_func_uint8_t_u(((((253UL ^ (l_199 = p_35)) & (((safe_sub_func_int16_t_s_s((0x54L & (safe_rshift_func_uint16_t_u_u((l_213 &= (((safe_rshift_func_int8_t_s_s(((safe_mod_func_uint64_t_u_u(l_173, 7UL)) & 1UL), (((++g_111) ^ (g_210 = p_34)) || (safe_sub_func_uint16_t_u_u((g_142 ^= (l_172 > 0x16L)), g_138.f2))))) & 0x318C5888L) || l_171)), 11))), p_32)) == p_34) <= 0x7DDDL)) ^ (-8L)) && g_124))) | 4294967295UL);
            if (g_3)
                break;
            if (((p_35 & (safe_rshift_func_uint8_t_u_s(l_173, (((safe_lshift_func_uint16_t_u_s(((safe_lshift_func_int8_t_s_s((-2L), (g_138.f0 = ((((l_193 |= l_199) || ((l_213 = (l_193 > l_199)) <= 4294967295UL)) == g_90) <= (safe_rshift_func_int16_t_s_s(((l_194 = (safe_lshift_func_int8_t_s_s((g_124 & 0x9FL), p_31))) == 1UL), g_210)))))) | p_31), g_170)) && g_145) && l_194)))) == g_90))
            {
                int64_t l_256 = 0xE0FA9FD3CF241C91LL;
                uint32_t l_307 = 0xF36FFF55L;
                int32_t l_321 = (-1L);
                int32_t l_389 = 0xD2B928BAL;
                if (p_31)
                {
                    uint32_t l_234 = 0UL;
                    int16_t l_303 = 0x558EL;
                    int32_t l_304 = (-1L);
                    int16_t l_305 = 1L;
                    uint32_t l_327 = 4294967295UL;
                    l_213 = ((++g_138.f1) == (0xD7A2F4DF6C7F8FBDLL <= ((safe_rshift_func_uint8_t_u_u(((((l_194 = (g_229 <= (safe_sub_func_int8_t_s_s(p_32, (safe_mod_func_uint8_t_u_u(l_234, (safe_add_func_int8_t_s_s(g_145, ((safe_rshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_s((g_3 & (!((((((((safe_lshift_func_int8_t_s_s(l_234, (safe_add_func_int32_t_s_s((safe_add_func_uint16_t_u_u(((safe_mod_func_int16_t_s_s(((+(safe_rshift_func_int16_t_s_s(((((g_111--) == 0x9FBB45EBL) ^ g_110) >= g_91), 14))) == 0L), p_35)) ^ g_138.f2), 0UL)), l_255)))) < g_145) < 9L) ^ p_32) == p_32) == 6UL) ^ g_229) && l_256))), 0)), 12)) <= l_255))))))))) > 0xE5L) >= p_31) | 0x94BD295D964B4B9CLL), 0)) < p_34)));
                    if (((l_257 &= l_256) != (0xD88BL >= g_141)))
                    {
                        int32_t l_280 = 0x63CD058DL;
                        int32_t l_302 = 0xD8925AE9L;
                        g_306 &= (((g_229 <= ((safe_add_func_int8_t_s_s(((g_124 &= (safe_sub_func_int32_t_s_s((safe_add_func_int32_t_s_s((safe_unary_minus_func_int8_t_s(((((safe_lshift_func_int16_t_s_s((l_213 = ((((safe_lshift_func_uint16_t_u_s((safe_rshift_func_int16_t_s_s((safe_sub_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((((safe_add_func_int32_t_s_s(((((p_32 = (g_279 <= (l_280 = p_33))) < 0xDC8FL) >= (safe_lshift_func_uint8_t_u_s((+((l_301 ^= (safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(((safe_rshift_func_uint8_t_u_u((0xF481L && (l_194 = (safe_mod_func_int64_t_s_s(p_34, ((((g_123 ^ l_194) < ((safe_sub_func_int8_t_s_s((safe_mod_func_int64_t_s_s((((((safe_mod_func_int64_t_s_s(((safe_mod_func_int16_t_s_s(g_3, g_300)) != p_34), 0xF72D5D3A580E2C16LL)) & g_110) && g_279) ^ g_279) & 18446744073709551615UL), g_210)), 2UL)) < 1L)) && 0xC8D71842L) && g_130))))), 4)) != p_34), l_213)), 6))) || g_300)), p_35))) != 0xF93EL), 0xE07D20D7L)) != p_35) || l_234), 1UL)), p_34)), 0x4506L)), g_214)), l_302)) != 0x9D19L) > 0x19F3L) == p_31)), l_303)) & g_111) | g_87) <= g_87))), p_33)), g_138.f0))) != l_171), l_304)) & l_302)) <= p_35) == l_305);
                        l_302 = g_131;
                        if (l_303)
                            break;
                        l_307 = 8L;
                    }
                    else
                    {
                        uint64_t l_308 = 1UL;
                        int32_t l_315 = (-1L);
                        int16_t l_319 = 0x6A9FL;
                        l_213 |= ((((l_308 ^ ((safe_add_func_uint64_t_u_u(l_234, ((safe_lshift_func_int8_t_s_u((4L < 0xF18DL), ((l_308 || l_172) < ((safe_rshift_func_uint8_t_u_s((l_315 ^= 7UL), 1)) && (safe_sub_func_uint16_t_u_u(1UL, (((~l_319) == g_111) <= 0x2346L))))))) > p_32))) < l_255)) & p_32) == g_214) || p_31);
                        l_320 = g_138;
                        l_321 = 0x62396B67L;
                        l_193 = (g_87 == (safe_rshift_func_int16_t_s_u((-3L), (l_327 = (((l_321 &= ((g_90 < (-3L)) > p_34)) & (0xEEL <= ((((((safe_add_func_int16_t_s_s(((((l_173 ^= g_131) ^ (g_142 | g_138.f2)) ^ l_308) < g_91), l_326)) == 6UL) != l_320.f0) || 4L) == p_31) < p_31))) >= l_315)))));
                    }
                    if (((l_328 = 0xD78E63D993A821ACLL) | ((p_32 ^ (((+(0x3595D045B5DB3819LL ^ ((safe_rshift_func_uint16_t_u_s(l_173, 2)) ^ (safe_lshift_func_int16_t_s_u(((g_345 |= (~((p_31 < (--g_142)) || ((safe_sub_func_int8_t_s_s(((g_111 ^= (l_301 = ((((-1L) != (safe_mod_func_uint64_t_u_u((g_138.f1 = ((safe_add_func_int32_t_s_s((p_31 | g_91), (safe_lshift_func_uint16_t_u_u((g_138.f0 ^ 0x9C1923D8L), 4)))) != g_210)), 9UL))) == g_279) >= 0xF9L))) & 0x85C9947EL), g_279)) <= l_174)))) && g_87), 9))))) | g_123) > g_145)) == p_34)))
                    {
                        uint16_t l_351 = 1UL;
                        int32_t l_378 = (-8L);
                        int32_t l_380 = 8L;
                        l_301 &= (!(~(safe_lshift_func_uint16_t_u_u(((((((l_213 = (safe_unary_minus_func_uint32_t_u(l_351))) <= (safe_rshift_func_uint8_t_u_u(((g_145 = 1L) >= ((l_256 != 1UL) != 0x383DFED9L)), (safe_rshift_func_int8_t_s_u(((safe_unary_minus_func_uint64_t_u(1UL)) | (-1L)), 1))))) | l_304) <= (g_359 = (safe_sub_func_uint32_t_u_u((l_173 & 8L), 0L)))) | 1L) ^ p_34), 5))));
                        l_194 |= (g_279 ^= ((safe_add_func_int32_t_s_s((-1L), (safe_lshift_func_uint8_t_u_u(g_90, 1)))) ^ (255UL | (g_130 <= (safe_sub_func_int8_t_s_s(((safe_mod_func_uint8_t_u_u((~(safe_lshift_func_int16_t_s_s((((p_35 >= ((~p_31) | (safe_add_func_uint32_t_u_u(((l_378 = ((safe_add_func_int64_t_s_s((0UL == p_33), (safe_sub_func_int64_t_s_s(0xF346CF623B8A31F7LL, p_32)))) ^ p_35)) < p_33), l_172)))) & 0x896354CBL) != g_3), g_136))), 0x99L)) ^ p_32), g_306))))));
                        g_383--;
                    }
                    else
                    {
                        return l_320;
                    }
                }
                else
                {
                    int64_t l_388 = 0xF492D8EAC32E7B3CLL;
                    int32_t l_390 = 0x41384D2EL;
                    struct S0 l_396 = {0xD5L,4UL,0xD188C2F3897FFBABLL};
                    for (g_359 = 0; (g_359 == 14); g_359++)
                    {
                        g_391--;
                    }
                    if (p_35)
                        continue;
                    for (p_34 = 17; (p_34 < 10); --p_34)
                    {
                        l_396 = l_320;
                    }
                }
            }
            else
            {
                int32_t l_397 = 0x3785568FL;
                l_397 |= (g_379 |= (0x6D9E332CBFD598AELL != 1UL));
            }
            l_398 &= g_111;
        }
        for (g_142 = 0; (g_142 >= 7); ++g_142)
        {
            for (g_111 = (-5); (g_111 < 2); g_111++)
            {
                g_210 = 0x3459CE88L;
            }
            if (p_33)
                break;
            g_403--;
        }
        l_414 = (g_210 &= (((((g_145 && (safe_add_func_uint64_t_u_u((g_138.f1 = (((!p_33) & 18446744073709551609UL) | (p_33 > (safe_add_func_int8_t_s_s((0L != ((g_75 >= (l_173 = ((safe_lshift_func_int8_t_s_s((safe_unary_minus_func_uint16_t_u(0x662EL)), 0)) <= (l_255 > p_34)))) > 65535UL)), p_34))))), l_414))) && 0x8E284A5FL) >= l_382) != 1L) | 0x1BL));
    }
    if ((((-6L) == (0xAC04L | g_403)) < (g_3 > (249UL != g_383))))
    {
        uint32_t l_433 = 18446744073709551615UL;
        int32_t l_434 = 0x93EB98A8L;
        int8_t l_443 = (-1L);
        int32_t l_444 = (-10L);
        int32_t l_445 = 1L;
        l_445 = ((safe_rshift_func_int16_t_s_u(p_32, 5)) | (l_444 = (l_382 = (safe_sub_func_int16_t_s_s((safe_add_func_int32_t_s_s(((safe_sub_func_uint16_t_u_u(((safe_add_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((((safe_lshift_func_int16_t_s_u((safe_mod_func_uint8_t_u_u(((g_87 || l_326) == (safe_lshift_func_uint8_t_u_u((((((l_434 = l_433) != 0x9DD93E933A933DB2LL) != 0L) ^ (safe_add_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(((safe_add_func_uint8_t_u_u((((((((g_138.f1 = ((((safe_mod_func_int32_t_s_s(l_433, p_33)) < (((0x2C7C98F0L <= l_433) && p_33) < p_31)) > g_141) >= p_31)) && g_359) < g_391) > l_173) < g_403) <= p_34) ^ 0x4FL), l_433)) ^ g_391), 0x81A7L)), p_32))) != 1UL), g_383))), p_32)), g_142)) || g_136) >= 1L), 2)), l_443)) == 255UL), l_194)) || 0xA197L), 0xA66A1822L)), l_433)))));
    }
    else
    {
        uint8_t l_455 = 247UL;
        int32_t l_456 = 0x03A89F36L;
        struct S0 l_484 = {0x78L,0x0615C79E42D54BD7LL,-1L};
        int32_t l_501 = 0L;
        int32_t l_528 = (-1L);
        int32_t l_530 = 0x178596C5L;
        uint16_t l_531 = 0x479CL;
        uint32_t l_598 = 0xFA506178L;
        if ((l_382 = (((((l_456 = (((4L || (g_403 != (~((l_455 = (safe_add_func_uint16_t_u_u((0x9A1E4A71L > (l_194 ^= ((safe_sub_func_uint16_t_u_u(p_33, 0x977FL)) != l_171))), ((((safe_mod_func_int8_t_s_s((p_31 == (!(p_33 ^ (-1L)))), g_210)) | p_32) > l_454) <= p_32)))) > (-1L))))) >= g_110) < g_75)) & g_131) & l_382) ^ 0x33L) || l_173)))
        {
            uint32_t l_457 = 0x5F72F857L;
            l_457 = 0x13A691C5L;
        }
        else
        {
            uint16_t l_496 = 65535UL;
            uint8_t l_497 = 0x4FL;
            int32_t l_506 = 0xC20E41F5L;
            int32_t l_524 = 0xBCD2E3A9L;
            int32_t l_529 = (-1L);
            if ((safe_mod_func_int16_t_s_s((safe_add_func_uint8_t_u_u(0x1BL, p_34)), (safe_mod_func_int8_t_s_s(g_145, (safe_lshift_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_s((safe_add_func_uint8_t_u_u(((((+g_110) == (((p_32 = l_456) & 0xFB6AL) || ((safe_add_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(l_194, (safe_lshift_func_int16_t_s_s(g_306, g_111)))), g_123)) > 0x8100L))) ^ p_35) & p_34), 0xE7L)), g_138.f2)) || 0xB86DL), 14)))))))
            {
                struct S0 l_478 = {-7L,18446744073709551615UL,-1L};
                l_478 = l_477;
                g_210 ^= p_33;
                for (g_130 = (-8); (g_130 == 28); ++g_130)
                {
                    uint32_t l_481 = 0x71D9B870L;
                    ++l_481;
                }
            }
            else
            {
                uint16_t l_500 = 0xFD7EL;
                int32_t l_507 = (-2L);
                g_138 = (l_484 = g_138);
                if ((((0x4CE5A61A39073941LL ^ (safe_mod_func_uint32_t_u_u(((g_136 |= ((1L < g_42) | (1UL < (safe_add_func_uint32_t_u_u((p_35 && (safe_lshift_func_uint8_t_u_s(255UL, 4))), ((((l_496 = ((safe_sub_func_uint8_t_u_u(p_32, (((safe_lshift_func_int8_t_s_u((0x41L ^ (((0x07BEE8ED091B6409LL == g_111) | l_495) != g_210)), 6)) >= l_484.f0) >= g_383))) >= p_32)) == 1UL) && l_497) || p_31)))))) == 0x41FFL), p_31))) | p_35) && 0L))
                {
                    g_279 &= (safe_add_func_int32_t_s_s(p_35, l_500));
                    return l_477;
                }
                else
                {
                    int32_t l_525 = 0x9DEEEC24L;
                    g_210 |= (((l_501 <= (safe_mod_func_uint32_t_u_u(p_35, g_87))) >= l_456) & ((safe_add_func_uint16_t_u_u((++g_142), (p_32 >= (~7L)))) != ((safe_sub_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(((l_506 |= (safe_rshift_func_int8_t_s_u((p_34 |= (safe_rshift_func_uint8_t_u_u((g_91 &= l_519), 6))), (((((safe_mod_func_uint16_t_u_u((--g_403), g_229)) > (((g_138.f1++) == (l_456 <= p_32)) <= g_300)) < g_123) <= 0xEEDA5436L) || g_138.f1)))) & 1UL), p_31)), 255UL)) < g_130)));
                    g_138 = g_138;
                    --l_531;
                }
                l_456 &= g_170;
                for (g_123 = 0; (g_123 < (-21)); g_123--)
                {
                    uint64_t l_536 = 9UL;
                    int32_t l_540 = 0x1EB192F1L;
                    l_530 &= (((++l_536) >= g_210) < ((-1L) != (((+(0x2D3943D29F545C8ELL != l_497)) < (++g_391)) < l_507)));
                    l_173 = p_32;
                }
            }
            g_546++;
            l_528 = ((safe_add_func_int16_t_s_s((((safe_rshift_func_int8_t_s_s((safe_add_func_int32_t_s_s((g_546 <= (safe_rshift_func_uint8_t_u_u((l_529 && (safe_sub_func_int32_t_s_s(g_170, ((safe_rshift_func_int16_t_s_u(((l_529 = p_32) && l_484.f1), (g_403 = (g_136++)))) != (safe_lshift_func_int16_t_s_u((((((safe_rshift_func_int16_t_s_u(((safe_lshift_func_int16_t_s_s(((((l_484.f0 == p_32) >= g_138.f2) > (safe_lshift_func_uint16_t_u_u((((safe_rshift_func_uint8_t_u_u(((l_477.f0 || p_31) > l_456), g_170)) <= 0x2F67L) > (-3L)), l_497))) > p_33), 6)) || p_33), l_194)) > (-1L)) ^ 0x75C6L) <= 0x5B732AD4L) >= g_170), 1)))))), g_111))), p_31)), g_391)) != 2UL) == g_383), p_35)) != l_194);
            l_529 = (safe_add_func_int32_t_s_s(l_495, (safe_sub_func_uint8_t_u_u((safe_add_func_int8_t_s_s(p_34, (safe_rshift_func_uint16_t_u_s((((safe_lshift_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(1UL, (g_130 = 0xAE46L))), 6)) & 0x28L) ^ (g_585 != (((65531UL & (((((((safe_mod_func_int64_t_s_s((g_383 | ((((safe_add_func_int32_t_s_s(l_590, l_484.f1)) & 0xC10EF601095B625FLL) < 0x935E3F12L) > g_145)), 0xE2155AAE28E93201LL)) == p_33) != g_145) | p_34) ^ l_528) != p_35) >= g_214)) & g_142) <= (-8L)))), 6)))), p_32))));
        }
        g_585 &= (l_528 ^ (g_300 & ((safe_rshift_func_uint8_t_u_s(p_34, 2)) & ((l_456 &= ((l_382 &= l_544) & ((safe_add_func_int16_t_s_s(1L, l_501)) && ((safe_sub_func_int16_t_s_s((g_379 <= (+((0xCFA8DEDEL > l_495) < l_598))), g_111)) | l_495)))) < g_110))));
        return l_477;
    }
    if ((((((safe_lshift_func_uint8_t_u_s(p_31, 3)) != ((safe_add_func_uint8_t_u_u(l_454, (0L & ((l_454 >= g_138.f1) <= 0xED29L)))) | (l_607 = (g_210 && ((safe_sub_func_uint64_t_u_u(((safe_add_func_uint32_t_u_u(0UL, (g_585 = g_359))) ^ l_544), g_142)) & 0L))))) || 0x0DD68ACB0BAA9BFFLL) ^ 0UL) ^ g_130))
    {
        int64_t l_631 = 0x32BECF8EA8647317LL;
        int32_t l_632 = (-1L);
        int32_t l_634 = (-1L);
        struct S0 l_647 = {9L,0xB136FE55A4685B68LL,-5L};
        int64_t l_676 = 0x11829AB1F02715E0LL;
        uint16_t l_679 = 1UL;
        int32_t l_721 = (-9L);
        int8_t l_737 = (-1L);
        int8_t l_745 = (-1L);
        int32_t l_761 = 1L;
        int32_t l_762 = (-10L);
        for (p_33 = 27; (p_33 != 4); --p_33)
        {
            uint32_t l_612 = 0UL;
            int32_t l_633 = 0x0DD1E963L;
            int32_t l_719 = 0x29461080L;
            int32_t l_720 = 1L;
            int32_t l_722 = 0x5BB62341L;
            if (g_585)
            {
                int16_t l_610 = 0xFD58L;
                int32_t l_611 = 1L;
                --l_612;
                g_379 = 0x88D1CBDAL;
            }
            else
            {
                int16_t l_619 = 0x6B42L;
                struct S0 l_649 = {0xF0L,0x897BB54BD6155307LL,1L};
                int32_t l_663 = 0L;
                int32_t l_687 = 1L;
                int32_t l_717 = 0x3F55F13AL;
                int32_t l_724 = 0xF2F64861L;
                uint32_t l_742 = 18446744073709551615UL;
                l_590 |= (safe_sub_func_uint32_t_u_u(p_31, ((safe_sub_func_int64_t_s_s(l_619, ((l_612 & (l_634 = (((((safe_mod_func_int64_t_s_s((g_142 || p_35), 0x86122984D524F12ALL)) >= ((g_138.f1 = (l_633 = ((safe_sub_func_uint64_t_u_u(g_210, (4UL ^ (~(l_632 |= (safe_rshift_func_uint16_t_u_s(((g_546++) | ((((((p_32 = (g_145 = (-1L))) != 0xFC3CL) || l_631) >= 0UL) ^ g_545) || g_359)), 1))))))) >= g_75))) | l_173)) & l_326) > g_130) & p_33))) < l_635))) || p_35)));
                if (((l_194 ^= p_33) >= (((1UL > ((safe_rshift_func_int8_t_s_s((l_173 |= (safe_add_func_uint32_t_u_u(((p_34 > g_142) == l_640), g_3))), ((((safe_add_func_uint8_t_u_u(g_300, (g_546++))) != g_90) ^ (((l_619 == l_519) <= 0x48L) >= 4294967295UL)) >= p_31))) && g_141)) < l_477.f0) < 0L)))
                {
                    struct S0 l_648 = {0x6BL,0xE1D867E3C8A00150LL,0xC4F258D09BE0D3AELL};
                    g_138 = g_138;
                    g_585 = g_145;
                    g_585 = (-8L);
                    for (l_495 = 0; (l_495 != 57); ++l_495)
                    {
                        int32_t l_658 = (-1L);
                        int32_t l_664 = (-1L);
                        l_648 = l_647;
                        g_138 = l_649;
                        g_379 |= ((-1L) < g_91);
                        l_664 &= ((safe_add_func_uint8_t_u_u(p_34, (((safe_rshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_s(g_111, 5)) >= l_658), 12)), (safe_sub_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(g_131, 6)), g_75)))) != ((g_130 ^ (4294967295UL == (((l_634 = ((-1L) && ((l_663 |= ((g_131 ^ g_87) & g_110)) <= l_649.f1))) <= p_31) < g_359))) && p_34)) & 5L))) ^ g_383);
                    }
                }
                else
                {
                    if (((safe_add_func_int32_t_s_s(((l_635 && (safe_rshift_func_int8_t_s_s((safe_add_func_uint64_t_u_u((~((((~(((safe_sub_func_uint8_t_u_u(((~((g_585 = g_123) || (l_676 ^ (p_32 & ((safe_add_func_uint32_t_u_u(0UL, l_649.f1)) & l_649.f0))))) < 0xD662FCB27B7E052ALL), g_306)) | 0x34E4L) != p_33)) & p_32) < g_359) < g_145)), (-1L))), 6))) < g_546), g_279)) == l_633))
                    {
                        l_633 |= (l_679 &= (-1L));
                        return l_647;
                    }
                    else
                    {
                        int32_t l_682 = 6L;
                        uint8_t l_692 = 0x0FL;
                        l_687 = ((g_383 = ((safe_add_func_uint16_t_u_u(l_676, l_682)) || ((safe_sub_func_uint16_t_u_u((g_136 &= (0x30F003FEL & (l_663 = (safe_sub_func_int64_t_s_s(g_141, (g_123 = (-1L))))))), p_34)) >= ((-1L) || g_111)))) != (((l_633 &= 0x215546F8L) | p_35) | g_214));
                        l_692 |= (safe_add_func_int8_t_s_s((-6L), (l_634 = (safe_add_func_uint8_t_u_u(l_612, g_210)))));
                        if (p_32)
                            continue;
                    }
                }
                for (l_194 = 0; (l_194 != 4); l_194 = safe_add_func_uint16_t_u_u(l_194, 1))
                {
                    int16_t l_698 = (-1L);
                    int32_t l_699 = (-1L);
                    int32_t l_718 = 0x6BAE004EL;
                    struct S0 l_743 = {0L,18446744073709551607UL,0xFAFF3E48AEC0CA38LL};
                    int32_t l_749 = (-8L);
                    int32_t l_750 = 9L;
                    if ((l_634 = ((g_136 < g_210) != ((((((+(((safe_lshift_func_uint16_t_u_u((((--g_546) & (safe_sub_func_int16_t_s_s((l_632 = (p_32 ^ (((p_33 > ((safe_add_func_uint32_t_u_u(g_170, 7L)) && g_403)) || (safe_mod_func_int16_t_s_s((g_130 &= (((0x3A269736L && (safe_sub_func_int64_t_s_s(0xB4259D565244B30BLL, 0L))) || p_33) == l_647.f0)), p_33))) == 0xD6EB4506L))), l_698))) < g_170), 15)) != 0xB7L) || g_3)) ^ 1L) >= g_403) < p_34) < l_679) == 0x0497L))))
                    {
                        l_699 |= (g_279 = g_123);
                        return g_138;
                    }
                    else
                    {
                        int32_t l_711 = (-1L);
                        --g_713;
                        ++g_725;
                        l_724 = (g_585 = (safe_sub_func_uint8_t_u_u(p_35, ((0xF292DE6B79C51BBELL <= 0xA5133EA072E6F373LL) > (!(((safe_sub_func_uint64_t_u_u((safe_lshift_func_int16_t_s_s(((g_710 >= l_719) || (l_722 = p_34)), (((l_633 = (safe_sub_func_uint8_t_u_u((g_391++), (g_306 < g_138.f2)))) & ((safe_add_func_uint8_t_u_u(p_35, 0UL)) & l_742)) < 0UL))), p_31)) ^ p_34) == 1L))))));
                        l_711 &= g_210;
                    }
                    g_744 = (g_138 = l_743);
                    l_718 ^= l_745;
                    for (l_663 = 0; (l_663 < (-15)); l_663 = safe_sub_func_uint32_t_u_u(l_663, 6))
                    {
                        int32_t l_748 = 6L;
                        int32_t l_751 = 8L;
                        g_752++;
                        l_751 = (l_698 != (l_722 |= (7L & (safe_sub_func_uint64_t_u_u((((safe_rshift_func_int16_t_s_s(p_32, g_752)) ^ (18446744073709551607UL >= (l_544 |= (p_34 <= (0x8A71A114L < (g_383 = g_75)))))) < ((((safe_rshift_func_int16_t_s_u(1L, g_214)) < 0xB3AC60C21575A922LL) >= p_33) <= l_751)), p_33)))));
                        l_634 &= g_712;
                        g_138 = l_647;
                    }
                }
            }
            ++g_763;
            l_761 &= g_744.f0;
            if (g_713)
                break;
        }
    }
    else
    {
        uint8_t l_772 = 0UL;
        uint32_t l_779 = 1UL;
        int32_t l_780 = 0xE55B9474L;
        int32_t l_781 = (-2L);
        int32_t l_782 = 1L;
        int32_t l_783 = (-10L);
        int32_t l_784 = 1L;
        int32_t l_785 = (-6L);
        int32_t l_786 = 0x881598E2L;
        int32_t l_789 = 0L;
        int32_t l_791 = (-4L);
        int32_t l_793 = 0xCF91CA3BL;
        int32_t l_795 = 0x005FBCEAL;
        int32_t l_796 = 0L;
        g_712 = (safe_sub_func_uint64_t_u_u((safe_mod_func_int32_t_s_s(((g_763 ^= (l_772 <= p_31)) != (l_772 == (((g_214 <= (((safe_rshift_func_uint8_t_u_u(((0xBE9CL < ((safe_add_func_int32_t_s_s(0x64DE1DA6L, ((1UL > (safe_sub_func_uint64_t_u_u((1UL || g_131), l_779))) >= 0x13606635E825FBA1LL))) && p_31)) && p_34), 7)) || g_136) && p_31)) || g_545) < l_194))), p_33)), p_35));
        g_806--;
    }
    l_173 &= ((safe_lshift_func_int8_t_s_s((g_585 || (6L > (1L != (((safe_add_func_int8_t_s_s((p_34 = 1L), p_33)) < (((((safe_lshift_func_int8_t_s_s(p_35, (p_35 | (l_716 > ((1UL >= l_815) || p_32))))) & 0xF246976AE7EE241FLL) < l_816) | l_544) < g_300)) > l_817)))), l_477.f0)) < 7L);
    return l_818;
}
static uint8_t func_40(int32_t p_41)
{
    int8_t l_61 = 0x63L;
    int8_t l_115 = 0xB1L;
    struct S0 l_137 = {0x34L,0x1CF63C109E68FEE3LL,2L};
    --g_42;
    g_136 = func_45((g_3 | (~(safe_rshift_func_int16_t_s_s((((((safe_lshift_func_int16_t_s_s(func_56((safe_mod_func_uint8_t_u_u(p_41, 0xF6L)), l_61), (safe_mod_func_int16_t_s_s(0xCDD1L, ((p_41 || (((1L == (0x68EB2A14L <= (-1L))) ^ 65531UL) < g_3)) | g_3))))) ^ g_42) < g_42) & l_61) < 0x3D90BC214255FA7FLL), l_115)))), g_90, p_41, l_61, g_90);
    g_138 = l_137;
    for (g_131 = (-16); (g_131 < 45); g_131 = safe_add_func_uint32_t_u_u(g_131, 4))
    {
        g_142--;
        g_145 &= g_138.f1;
        l_137 = g_138;
    }
    return p_41;
}
static int32_t func_45(int8_t p_46, uint32_t p_47, int16_t p_48, int32_t p_49, uint32_t p_50)
{
    uint8_t l_116 = 1UL;
    int32_t l_119 = 0L;
    int32_t l_120 = 0L;
    int32_t l_121 = (-1L);
    int32_t l_122 = 0xA541E781L;
    int32_t l_125 = (-6L);
    int32_t l_126 = 0xD6DA29A6L;
    int32_t l_127 = (-1L);
    int32_t l_128 = 0x81310918L;
    int32_t l_129 = 0xE82D738AL;
    l_120 ^= (l_119 ^= ((0xD3A0D674323298C0LL && 1UL) || (++l_116)));
    ++g_131;
    l_120 = (g_75 < ((safe_mod_func_uint8_t_u_u(l_116, 0x2CL)) != 1L));
    return g_124;
}
static int16_t func_56(int32_t p_57, uint64_t p_58)
{
    uint8_t l_65 = 249UL;
    int32_t l_104 = 0L;
    int32_t l_112 = (-2L);
    g_111 = (g_110 = (func_62(p_57, (++l_65)) != (safe_add_func_int8_t_s_s(((((0x6D3CL || (safe_add_func_int32_t_s_s(l_104, (+(safe_sub_func_int8_t_s_s((l_104 ^ g_3), (safe_rshift_func_int8_t_s_s(g_42, 4)))))))) && (0x4B39C2D96A127326LL < (l_104 || l_104))) > g_90) ^ g_42), g_90))));
    return l_112;
}
static int8_t func_62(uint16_t p_63, uint32_t p_64)
{
    uint64_t l_86 = 0UL;
    int32_t l_88 = 1L;
    int32_t l_89 = 1L;
    uint32_t l_99 = 4UL;
    l_89 = (safe_unary_minus_func_int64_t_s((l_88 &= (safe_rshift_func_uint16_t_u_s((p_63 = (p_63 | (safe_lshift_func_int8_t_s_u(g_3, (safe_rshift_func_uint8_t_u_s((g_75 = g_3), 5)))))), (safe_sub_func_int32_t_s_s(((((3L > (safe_rshift_func_uint16_t_u_s(1UL, 0))) | (((safe_add_func_int64_t_s_s(0x2EC28784865E5AB8LL, ((safe_add_func_uint16_t_u_u(((g_87 |= (((safe_mod_func_uint64_t_u_u((((-9L) && (p_64 > ((g_3 < p_64) < p_64))) != 0x406CCCE42BF6251CLL), p_64)) > l_86) < p_64)) | p_64), g_42)) ^ p_64))) & 0x5D48947DL) >= 0xE5L)) == l_86) & l_86), 0xDE7EBAC3L)))))));
    l_88 &= (((--g_91) >= (safe_mul_func_int16_t_s_s(p_63, (((safe_sub_func_int16_t_s_s(0xE909L, (safe_unary_minus_func_int16_t_s(l_99)))) < p_63) == 0x453F4779L)))) ^ l_89);
    return l_88;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_3;
    csmith_sink_ = g_19;
    csmith_sink_ = g_42;
    csmith_sink_ = g_75;
    csmith_sink_ = g_87;
    csmith_sink_ = g_90;
    csmith_sink_ = g_91;
    csmith_sink_ = g_110;
    csmith_sink_ = g_111;
    csmith_sink_ = g_123;
    csmith_sink_ = g_124;
    csmith_sink_ = g_130;
    csmith_sink_ = g_131;
    csmith_sink_ = g_136;
    csmith_sink_ = g_138.f0;
    csmith_sink_ = g_138.f1;
    csmith_sink_ = g_138.f2;
    csmith_sink_ = g_141;
    csmith_sink_ = g_142;
    csmith_sink_ = g_145;
    csmith_sink_ = g_170;
    csmith_sink_ = g_210;
    csmith_sink_ = g_214;
    csmith_sink_ = g_229;
    csmith_sink_ = g_279;
    csmith_sink_ = g_300;
    csmith_sink_ = g_306;
    csmith_sink_ = g_345;
    csmith_sink_ = g_359;
    csmith_sink_ = g_379;
    csmith_sink_ = g_383;
    csmith_sink_ = g_391;
    csmith_sink_ = g_403;
    csmith_sink_ = g_545;
    csmith_sink_ = g_546;
    csmith_sink_ = g_585;
    csmith_sink_ = g_710;
    csmith_sink_ = g_712;
    csmith_sink_ = g_713;
    csmith_sink_ = g_723;
    csmith_sink_ = g_725;
    csmith_sink_ = g_744.f0;
    csmith_sink_ = g_744.f1;
    csmith_sink_ = g_744.f2;
    csmith_sink_ = g_752;
    csmith_sink_ = g_763;
    csmith_sink_ = g_797;
    csmith_sink_ = g_798;
    csmith_sink_ = g_801;
    csmith_sink_ = g_803;
    csmith_sink_ = g_805;
    csmith_sink_ = g_806;
    csmith_sink_ = g_823;
    csmith_sink_ = g_857;
    csmith_sink_ = g_889;
    platform_main_end(0,0);
    return 0;
}
