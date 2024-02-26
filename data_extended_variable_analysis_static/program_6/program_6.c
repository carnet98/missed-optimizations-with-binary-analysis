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
static uint8_t g_20 = 7U;
static uint16_t g_43 = 0xEBEF;
static int16_t g_76 = (-9);
static int32_t g_85 = 1;
static uint32_t g_86 = 0xF61094B9;
static uint32_t g_88 = 0x6DA6125F;
static uint32_t g_122 = 0xAED54F57;
static uint8_t g_161 = 5U;
static int8_t g_194 = 0;
static uint8_t g_199 = 0x0F;
static uint8_t g_223 = 0xD3;
static uint16_t g_260 = 2U;
static uint32_t g_284 = 0x390666A6;
static uint32_t g_326 = 0U;
static int8_t g_349 = 0x13;
static int8_t g_401 = (-6);
static uint32_t g_412 = 4294967286U;
static uint32_t g_413 = 0xB644DA49;
static uint32_t g_415 = 0x0FD3B0A5;
static int32_t g_417 = 0xD4A889A8;
static uint8_t g_506 = 0U;
static int8_t g_537 = 0xC6;
static uint32_t g_555 = 0x1D0092FE;
static int16_t g_582 = (-1);
static uint32_t g_602 = 0U;
static uint8_t g_624 = 0xF3;
static uint32_t g_625 = 0x4E96E200;
static uint32_t g_626 = 0U;
static uint32_t g_628 = 0x23FD4F35;
static int32_t g_648 = 0x45EE10D0;
static int32_t g_649 = (-9);
static int8_t g_784 = 0x97;
static uint8_t g_863 = 0U;
static uint32_t func_1(void);
static int32_t func_2(int16_t p_3, int8_t p_4, uint32_t p_5);
static uint16_t func_7(int32_t p_8, int8_t p_9, uint16_t p_10, int32_t p_11);
inline static uint8_t func_14(uint32_t p_15, uint8_t p_16, int32_t p_17, int16_t p_18, uint8_t p_19);
static uint8_t func_21(int16_t p_22, uint16_t p_23, uint16_t p_24, int32_t p_25, int8_t p_26);
static uint8_t func_31(int8_t p_32, uint16_t p_33);
inline static int16_t func_54(uint8_t p_55, int32_t p_56);
inline static uint8_t func_57(int16_t p_58);
static uint8_t func_64(int32_t p_65, uint8_t p_66, uint32_t p_67, uint16_t p_68, uint32_t p_69);
inline static int16_t func_94(int32_t p_95);
static uint32_t func_1(void)
{
    int8_t l_6 = (-2);
    int8_t l_34 = 1;
    int32_t l_414 = 2;
    uint8_t l_421 = 251U;
    uint32_t l_463 = 4U;
    uint32_t l_505 = 0xD305FA5C;
    int32_t l_512 = 0xB8693ED2;
    int16_t l_540 = (-10);
    int32_t l_599 = 7;
    uint32_t l_623 = 0x2F435481;
    int8_t l_777 = 0xD3;
    uint16_t l_808 = 0xE7CF;
    uint32_t l_819 = 0xAF0BABB5;
    int8_t l_861 = 0;
    if (func_2(l_6, ((func_7(((safe_lshift_func_uint8_t_u_u(((func_14(g_20, (((g_415 = (g_349 = ((l_414 = func_21((((-1) <= 0xC7) < ((((g_20 && g_20) | (safe_lshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_u(func_31(l_34, l_34), l_34)), l_6))) == 3) || g_88)), g_122, g_122, l_6, g_20)) <= l_34))) || l_414) & 0x76), l_34, g_20, g_122) == 255U) | 65528U), l_34)) && g_88), g_20, l_6, g_20) && 0x6465) , 0x2B), l_6))
    {
        uint32_t l_428 = 0xB4845BDF;
        int32_t l_450 = 0x71A939F9;
        uint32_t l_479 = 0U;
        int16_t l_504 = 0x4348;
        int32_t l_634 = 0x6F203C2E;
        uint16_t l_707 = 0xED53;
        int32_t l_775 = 0x9E98DE5A;
        uint32_t l_776 = 0x0A40659B;
        uint32_t l_816 = 0xD8CE4B60;
        l_421 = 0;
        if (g_194)
        {
            int16_t l_442 = 0x1D72;
            int32_t l_451 = 0x1F33E96E;
            int32_t l_503 = 0x7968EF91;
            for (l_6 = 14; (l_6 >= (-1)); l_6 = safe_sub_func_int16_t_s_s(l_6, 1))
            {
                uint16_t l_440 = 0x4218;
                int32_t l_441 = 0;
                int32_t l_443 = 0x4FFCF75B;
                int32_t l_609 = (-1);
                uint16_t l_695 = 4U;
                l_443 = (((g_20 = (safe_mod_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(((g_20 || (l_428 != (g_260 & ((safe_lshift_func_int16_t_s_s((-1), 6)) , ((((safe_sub_func_uint8_t_u_u(255U, ((safe_add_func_int8_t_s_s((((0x4DE86E1F >= ((l_441 = ((g_413 = ((((safe_mod_func_uint8_t_u_u((safe_unary_minus_func_int32_t_s((safe_add_func_uint16_t_u_u(l_440, (g_43 = ((((l_440 & (g_349 = g_86)) ^ g_86) , 1) && l_440)))))), g_223)) | g_194) < g_413) <= l_428)) , l_440)) , g_260)) < g_415) < l_440), g_161)) != 0x77968AAB))) <= l_414) , (-6)) < g_401))))) != g_20), l_428)), l_442))) && g_199) && 0x87);
                for (g_401 = (-30); (g_401 != (-30)); g_401 = safe_add_func_uint16_t_u_u(g_401, 8))
                {
                    uint32_t l_478 = 0x82E1A86A;
                    if ((l_450 = (safe_rshift_func_uint8_t_u_u((0x9B & (safe_lshift_func_uint8_t_u_u(g_122, 1))), 3))))
                    {
                        l_451 = g_284;
                    }
                    else
                    {
                        uint8_t l_462 = 0x30;
                        l_443 = (safe_rshift_func_int8_t_s_u(((((((g_412 = (g_284 < ((g_417 <= 1U) > (((safe_sub_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(((((safe_lshift_func_int16_t_s_s(((((g_401 != l_462) <= g_122) ^ l_463) , (safe_sub_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_s(((safe_add_func_int16_t_s_s(((l_34 > (safe_mod_func_uint16_t_u_u((((safe_lshift_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((safe_add_func_uint16_t_u_u(0x3472, g_413)), 0x96DA)), 0)) != 255U) ^ g_76), 1U))) && l_478), g_88)) , 0xDE), 2)) || g_199), l_462))), l_450)) & l_478) || 0x5A09A9EE) , 0), 11)), g_326)) | l_462) != g_161)))) && l_451) & l_463) , l_428) , l_463) != l_450), l_462));
                        g_506 = (((((((((-1) | ((((l_479 > l_441) , (safe_rshift_func_uint8_t_u_s(g_417, 5))) , ((((safe_rshift_func_uint8_t_u_s((((g_88 , (safe_mod_func_int16_t_s_s((g_122 > ((safe_add_func_uint16_t_u_u(l_451, (safe_rshift_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((((safe_rshift_func_uint16_t_u_s(((safe_mod_func_int8_t_s_s((l_503 = ((((safe_lshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((l_443 , (((safe_unary_minus_func_int8_t_s(l_414)) < l_441) || l_440)), 0)), g_417)), 5)) > l_34) & g_88) <= g_326)), 1)) ^ l_442), g_260)) >= g_260) && 1U), g_161)), 10)))) <= l_442)), l_478))) == l_504) < g_43), g_76)) != 1) != g_401) , g_415)) , g_88)) <= l_462) || l_505) && l_442) || 250U) < l_462) >= 0x03725270) , 0x48F00F30);
                    }
                }
                if ((safe_sub_func_int8_t_s_s(l_428, ((+((safe_add_func_uint16_t_u_u((((((l_512 ^ ((g_88 = l_442) == (safe_div_func_int8_t_s_s((0x0B | (((l_450 = (((safe_mod_func_uint32_t_u_u(g_85, ((safe_div_func_int32_t_s_s(((safe_rshift_func_uint16_t_u_s(((((+(safe_add_func_int16_t_s_s((((g_43 = 65535U) == (safe_mod_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((((-1) | (safe_add_func_uint8_t_u_u(((g_20 < (safe_mod_func_int16_t_s_s((((safe_lshift_func_int8_t_s_u(((safe_unary_minus_func_int32_t_s(((safe_lshift_func_uint16_t_u_u(((0 != l_451) , l_440), 5)) < 0x5A5A3F1F))) != l_512), 0)) == l_421) < g_260), g_417))) > g_161), g_85))) < g_415), 2)), 0x13))) == l_451), 0x55E9))) , l_451) || l_443) == 0xC234), l_504)) != 1), l_450)) , 5U))) , 0xDF) & 6)) , g_260) || 0xD3)), 6U)))) >= g_413) <= g_161) ^ l_441) >= (-1)), g_349)) , 0x31)) , g_284))))
                {
                    l_503 = 0x987AC3E4;
                    l_441 = 1;
                    g_537 = g_122;
                }
                else
                {
                    int16_t l_554 = 0x52F5;
                    g_555 = ((((safe_lshift_func_uint8_t_u_u(l_540, (safe_div_func_int32_t_s_s(0x2D70AFE8, (+((safe_lshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_s(((g_349 != l_443) | (safe_add_func_uint32_t_u_u(l_443, (g_506 || ((((safe_div_func_uint32_t_u_u(g_43, (safe_rshift_func_int8_t_s_s(g_223, ((((l_441 == l_554) , 0xF5E8) >= l_554) != g_413))))) > l_554) <= l_440) != l_463))))), g_284)), 2)) , l_451)))))) || g_88) && g_199) <= 1U);
                }
                for (l_34 = 0; (l_34 == 27); l_34 = safe_add_func_int32_t_s_s(l_34, 3))
                {
                    uint32_t l_573 = 0x114DF094;
                    int32_t l_601 = 2;
                    uint8_t l_615 = 254U;
                    uint16_t l_694 = 0x18F6;
                    l_512 = (safe_rshift_func_uint16_t_u_s(((g_43 = (safe_div_func_int8_t_s_s((0x0E || g_555), g_199))) > (safe_mod_func_uint16_t_u_u((!(((safe_add_func_int32_t_s_s(6, l_503)) != l_441) < ((safe_add_func_uint16_t_u_u(((safe_add_func_int8_t_s_s((0x80 ^ ((((((safe_div_func_uint8_t_u_u(g_85, (-4))) >= g_415) >= 0x749B941B) , g_76) || 255U) < l_573)), g_412)) | l_428), g_122)) < 65533U))), g_537))), 10));
                    if (l_441)
                        break;
                    for (g_401 = 0; (g_401 != (-11)); g_401 = safe_sub_func_uint16_t_u_u(g_401, 1))
                    {
                        uint16_t l_600 = 0xA3F1;
                        int32_t l_614 = 1;
                        g_602 = ((l_512 = (((g_415 = ((safe_lshift_func_int8_t_s_u(l_573, (safe_add_func_int8_t_s_s((l_601 = ((l_540 && 0x6486305D) >= ((g_349 = (safe_mul_func_int32_t_s_s((g_223 | (g_582 = 0xDD6B828A)), ((((safe_sub_func_int16_t_s_s((safe_add_func_int32_t_s_s((((((safe_mod_func_int16_t_s_s((safe_add_func_int32_t_s_s(((((g_43 = (safe_div_func_int32_t_s_s((((safe_rshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((g_415 ^ (g_20 >= g_412)), 1)), 7)) , ((safe_rshift_func_int16_t_s_s(0x904A, l_504)) && g_260)) == 0xFF025628), l_442))) <= l_599) & 0xC05423A4) & 0), g_199)), g_506)) ^ l_600) , l_6) | 0x13) && g_260), 4294967288U)), l_442)) & g_415) != g_412) != g_85)))) | l_463))), l_600)))) , g_20)) <= g_88) != l_450)) ^ g_86);
                        l_614 = (((((safe_rshift_func_uint8_t_u_s(l_451, 4)) < (safe_div_func_uint32_t_u_u(l_6, (safe_add_func_int8_t_s_s(g_161, ((((l_609 != g_582) <= (l_599 = 0x12F9)) > (l_609 > (((g_76 = g_199) , (safe_rshift_func_uint16_t_u_s((safe_div_func_uint32_t_u_u(0x4E0851EC, l_573)), 13))) , 7))) < (-1))))))) , l_450) , 0x8008) != 65531U);
                        g_626 = (((l_440 >= ((g_625 = (((l_615 ^ (safe_unary_minus_func_uint16_t_u(((l_614 & (safe_lshift_func_uint8_t_u_u((g_161 = g_223), 0))) && g_161)))) | (g_624 = (((1U > g_401) , l_504) && ((((safe_rshift_func_uint8_t_u_s((safe_div_func_int8_t_s_s((g_122 & l_451), l_623)), 0)) != g_194) == l_614) & 0xC89F)))) , 0xAF86F4B8)) > 0x998834DC)) <= 7) , g_223);
                    }
                    if ((((g_43 = (l_609 = ((((g_602 = l_450) ^ (g_555 ^ ((g_628 = (!g_260)) | ((safe_sub_func_int8_t_s_s(((((l_442 || ((safe_sub_func_int32_t_s_s(l_442, 0xEB540D96)) , ((g_194 = (l_634 = ((~l_615) >= 0x59))) == 1))) , l_615) , 0x26) , 0x29), 1U)) , g_194)))) , l_503) | g_415))) && 0xC08E) == g_412))
                    {
                        int32_t l_647 = 4;
                        uint8_t l_669 = 246U;
                        g_649 = (safe_add_func_int32_t_s_s((g_648 = ((g_401 && (safe_div_func_int16_t_s_s(g_194, ((g_555 != (safe_add_func_int32_t_s_s((l_599 = ((g_86 && l_451) < ((safe_add_func_int8_t_s_s((safe_add_func_uint32_t_u_u(((g_260 = g_413) , (safe_sub_func_int32_t_s_s((g_161 >= 0x087BEF1E), (2U ^ l_647)))), g_537)), 0U)) >= l_505))), 0U))) , g_602)))) & g_122)), l_442));
                        l_451 = g_624;
                        g_648 = (((safe_sub_func_uint16_t_u_u(65535U, l_647)) > 4294967289U) == (((l_609 | g_648) > (safe_sub_func_int32_t_s_s((+((g_649 = l_504) != (l_451 = l_442))), (((((((7U ^ (((safe_lshift_func_uint16_t_u_s((safe_div_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u((((safe_add_func_int32_t_s_s((((safe_sub_func_int32_t_s_s(0, 4294967294U)) == g_628) | g_85), g_648)) | 1U) != g_401), l_647)), 0x1609)), g_537)), g_415)) || 65535U) || 7)) , l_421) < g_648) , l_634) & g_625) || g_412) <= 0x91E9E2E6)))) & g_223));
                        g_649 = (((safe_rshift_func_int8_t_s_u(l_669, 3)) ^ ((safe_mod_func_uint8_t_u_u((~l_647), (safe_rshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(g_85, 13)), 0)))) || (safe_add_func_uint8_t_u_u((~(safe_sub_func_int32_t_s_s((safe_mod_func_uint8_t_u_u(g_649, (l_442 && l_442))), (((safe_rshift_func_uint8_t_u_s((((safe_sub_func_uint8_t_u_u(0x27, ((((l_647 = (l_669 >= ((safe_lshift_func_uint16_t_u_s((((safe_mod_func_uint8_t_u_u(((l_451 = (safe_sub_func_int32_t_s_s(l_34, l_647))) , g_122), 0xB2)) <= l_573) && 0), l_694)) && l_695))) , l_601) & 0x314EE94A) < 5U))) > l_503) == l_669), g_413)) || g_199) >= l_505)))), 0U)))) && l_450);
                    }
                    else
                    {
                        uint32_t l_700 = 8U;
                        int32_t l_708 = 2;
                        l_708 = ((((0x352537A5 < (l_694 < ((safe_add_func_int32_t_s_s(1, (g_649 = l_443))) , (0xCE60 != l_6)))) , (g_194 = (l_700 = (-1)))) == ((safe_add_func_int16_t_s_s(((0 ^ ((((safe_rshift_func_int8_t_s_u((safe_mod_func_uint8_t_u_u((g_625 <= 0x36B1BB04), 255U)), l_707)) && l_440) != l_615) , g_86)) >= l_601), 65535U)) , 0U)) , l_428);
                        l_451 = ((+(g_76 = g_194)) , (safe_rshift_func_uint8_t_u_u(((safe_sub_func_int16_t_s_s(l_623, g_260)) == (l_609 == (safe_add_func_int16_t_s_s(((l_599 & (((l_708 = (0 | ((safe_unary_minus_func_int32_t_s(g_626)) , ((l_609 <= ((safe_mod_func_int16_t_s_s((safe_sub_func_int16_t_s_s(0xF020, g_624)), l_700)) ^ 0x9337)) > g_161)))) , 0x9A9688F7) >= 7U)) && l_700), 0xF70E)))), l_451)));
                        g_648 = (g_223 | (g_88 ^ l_505));
                        return g_417;
                    }
                }
            }
        }
        else
        {
            int32_t l_771 = 0x8E814A99;
            int32_t l_774 = (-1);
            int32_t l_789 = (-1);
            int32_t l_813 = (-1);
            for (l_479 = (-7); (l_479 == 58); l_479 = safe_add_func_uint8_t_u_u(l_479, 4))
            {
                return g_413;
            }
            g_648 = (safe_add_func_int32_t_s_s((safe_div_func_int32_t_s_s((l_774 = ((((((((g_284 = 0x198E18C8) | (safe_mod_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(((g_260 = (g_625 , (g_43 = ((-9) < 0x4E49D378)))) && (((((l_414 = (safe_sub_func_int32_t_s_s((l_450 = (g_649 = (safe_add_func_int32_t_s_s((+((((((((safe_rshift_func_uint16_t_u_s(((safe_rshift_func_uint8_t_u_s(((safe_div_func_uint16_t_u_u(((((safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(((g_625 = l_450) & ((safe_div_func_int32_t_s_s((((((safe_sub_func_int16_t_s_s((safe_div_func_uint32_t_u_u(((l_771 = (safe_mod_func_int32_t_s_s((((~(safe_lshift_func_int16_t_s_u((g_76 = (g_582 = (safe_lshift_func_uint16_t_u_u((((safe_lshift_func_uint8_t_u_s(((safe_add_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_s(((((safe_add_func_uint8_t_u_u(((0xEC205DFD ^ ((((safe_lshift_func_int8_t_s_u(((safe_rshift_func_int16_t_s_u((l_771 > 0xF442B08D), (safe_sub_func_int16_t_s_s(g_86, 0x7044)))) <= g_413), 4)) && g_260) && l_623) ^ 0xBB17)) == l_428), 247U)) < g_413) == g_412) > 0x9C), 8)) , 65526U), l_771)) < g_412), g_122)) >= l_540) > g_194), g_506)))), l_771))) >= g_260) | g_88), (-1)))) <= l_774), 4)), 0xC246)) | l_479) , g_555) , g_413) < 0x9B), g_649)) > 0)), 6)), g_349)) , 0U) | 4294967295U) <= l_623), 0xA2E8)) || l_775), g_194)) > l_774), l_512)) , l_540) | g_401) < 0xE2) || l_776) != 0xD6) != g_161) > l_775)), 0xC051AD2F)))), (-1)))) , g_417) == l_428) ^ 0xC3BE) > g_648)), g_537)), g_349))) & g_648) , 0U) | l_512) <= 0x23) <= g_122) == l_504)), l_777)), (-1)));
            for (g_582 = 0; (g_582 < (-26)); g_582 = safe_sub_func_uint32_t_u_u(g_582, 3))
            {
                uint32_t l_787 = 4294967295U;
                int32_t l_788 = (-6);
                l_789 = ((g_648 = ((safe_lshift_func_uint8_t_u_s((((g_349 <= ((0x9C || (g_86 || (g_161 = l_450))) <= ((((l_788 = ((safe_sub_func_int32_t_s_s((g_86 | (1 && (-9))), g_784)) != ((safe_rshift_func_uint8_t_u_s(((0U | g_194) < g_284), g_537)) >= l_787))) <= 0x32866B4A) == 0xC32F80F0) == l_599))) , g_413) != (-1)), l_787)) || (-1))) < 0xA98F3611);
                l_634 = (((((!l_789) != (((safe_rshift_func_uint8_t_u_u(((safe_mod_func_uint8_t_u_u(((safe_sub_func_int32_t_s_s((safe_mod_func_int8_t_s_s((!(((safe_div_func_uint16_t_u_u(((-1) != (g_43 || (((-1) <= (g_76 = (0 && (safe_sub_func_uint8_t_u_u((((safe_lshift_func_int8_t_s_s(((((l_808 >= (safe_sub_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(((g_648 = (l_813 == (safe_lshift_func_uint16_t_u_u(0U, 15)))) ^ 0xBA3CB1FA), 65535U)), g_86))) & (-1)) & g_649) & g_349), l_414)) < l_6) , l_813), g_506))))) != (-8)))), g_649)) > g_537) <= g_326)), g_349)), g_624)) != 0xB1EF1FF3), (-9))) & l_450), l_505)) || l_816) ^ 0x00)) > l_774) > l_774) ^ l_775);
                g_648 = ((g_649 = (l_813 || (l_599 = g_88))) && ((safe_lshift_func_uint16_t_u_u(l_774, 6)) || (l_788 = l_819)));
            }
        }
    }
    else
    {
        uint16_t l_823 = 0xA683;
        int32_t l_824 = (-1);
        uint16_t l_862 = 0U;
        l_824 = ((l_819 ^ g_417) <= (safe_mod_func_int16_t_s_s(l_819, (+l_823))));
        l_512 = (l_599 = ((!((g_284 | (safe_div_func_uint8_t_u_u((((g_784 = l_540) == (~l_463)) || (l_824 < (((safe_add_func_uint32_t_u_u((~(((safe_sub_func_int32_t_s_s(((safe_mod_func_uint8_t_u_u(g_413, (safe_mod_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(((safe_sub_func_int32_t_s_s((((g_122 && ((l_34 | g_401) >= (g_648 = (4U != g_88)))) && l_823) && l_823), l_808)) , g_223), l_824)), (-3))))) != 248U), 0x27BA8782)) || (-1)) || g_199)), g_628)) , 0x9C) < 0x61))), 5))) == g_20)) | g_349));
        g_863 = (safe_lshift_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((g_260 = (((1U & (l_824 = (safe_lshift_func_uint16_t_u_s(((safe_add_func_int8_t_s_s(l_414, l_823)) >= g_349), (((-1) < 65535U) != (0 > (safe_lshift_func_uint16_t_u_u((g_43 = ((safe_rshift_func_uint8_t_u_s(((l_823 == ((g_412 = (!((safe_rshift_func_int16_t_s_s(((g_648 = (safe_rshift_func_int8_t_s_s((safe_mod_func_int8_t_s_s(((g_401 = (((g_649 = l_824) == l_824) >= g_284)) | l_861), l_463)), 4))) , 0), l_823)) , 0U))) || g_506)) & l_824), 3)) != g_784)), g_555)))))))) , l_777) && l_862)), l_862)), 0));
        g_648 = (g_649 = (safe_mod_func_int8_t_s_s((((safe_rshift_func_int16_t_s_s((g_284 ^ ((((safe_add_func_int8_t_s_s(l_463, (safe_div_func_int32_t_s_s(((((safe_mod_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(g_555, 1)), l_505)) , (safe_sub_func_uint32_t_u_u(g_86, (l_540 , (l_861 || (((safe_mod_func_int8_t_s_s((0xE2 <= l_823), g_199)) > g_349) <= 0xE1087EE6)))))) >= g_537) > (-8)), l_823)))) | g_417) < l_824) == g_624)), 9)) | g_628) , l_34), l_862)));
    }
    return l_540;
}
static int32_t func_2(int16_t p_3, int8_t p_4, uint32_t p_5)
{
    int8_t l_420 = (-7);
    l_420 = p_3;
    return g_199;
}
static uint16_t func_7(int32_t p_8, int8_t p_9, uint16_t p_10, int32_t p_11)
{
    uint8_t l_418 = 0x8B;
    int32_t l_419 = (-7);
    l_419 = l_418;
    return g_260;
}
inline static uint8_t func_14(uint32_t p_15, uint8_t p_16, int32_t p_17, int16_t p_18, uint8_t p_19)
{
    int8_t l_416 = 0x92;
    g_417 = (l_416 != (g_326 , p_19));
    return p_18;
}
static uint8_t func_21(int16_t p_22, uint16_t p_23, uint16_t p_24, int32_t p_25, int8_t p_26)
{
    uint32_t l_257 = 5U;
    int32_t l_321 = 0x827553D6;
    int32_t l_322 = (-1);
    int32_t l_325 = 0xA2915EF4;
    uint16_t l_354 = 0x8049;
    if ((p_25 = l_257))
    {
        uint32_t l_258 = 1U;
        return l_258;
    }
    else
    {
        int8_t l_259 = 0x19;
        int32_t l_301 = (-5);
        int32_t l_323 = 0xC1CF038D;
        int32_t l_324 = 1;
        uint32_t l_360 = 4294967295U;
        g_260 = l_259;
        g_284 = (l_259 > ((safe_add_func_uint8_t_u_u((g_199 = ((~((safe_add_func_int32_t_s_s((safe_div_func_uint8_t_u_u(((((safe_sub_func_int8_t_s_s(l_259, (safe_rshift_func_uint8_t_u_s(((safe_rshift_func_uint16_t_u_u(g_76, (((safe_div_func_int8_t_s_s((safe_mod_func_uint32_t_u_u(((0x4D & (((safe_sub_func_uint32_t_u_u(((1U ^ (safe_add_func_uint32_t_u_u(1U, (((l_257 | (((safe_rshift_func_uint8_t_u_s(0xA1, 3)) >= (p_23 & g_43)) && p_24)) || (-3)) > g_194)))) > p_22), g_161)) < l_257) != 0xA4)) || l_259), g_76)), g_88)) == 0xF0709E64) <= g_199))) , p_26), p_24)))) | p_24) && g_260) < l_259), p_24)), p_26)) , 1)) , p_25)), l_257)) , 0xC1B5C86E));
        if ((l_325 = ((safe_sub_func_uint32_t_u_u((safe_mod_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((p_24 = ((safe_lshift_func_uint8_t_u_s((safe_sub_func_uint16_t_u_u((safe_div_func_uint32_t_u_u((l_324 = (safe_lshift_func_int16_t_s_u((safe_sub_func_uint16_t_u_u(l_301, (safe_mod_func_uint16_t_u_u((l_323 = ((((safe_rshift_func_int16_t_s_u((l_322 = (((l_321 = (safe_div_func_int32_t_s_s(((0x83 ^ (safe_add_func_int16_t_s_s(((safe_add_func_uint16_t_u_u((+(safe_lshift_func_int16_t_s_u(p_23, ((safe_sub_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_u((((((p_26 >= 0xDE5451DF) ^ (((safe_div_func_int16_t_s_s(p_22, 4)) != 1) & (-8))) , g_43) && l_259) , 0xD0), l_301)) , l_259), p_23)) != g_260)))), g_88)) == g_161), l_301))) <= l_259), g_260))) >= 1) < 0xC6)), g_194)) , g_284) , 0) , 0U)), 65531U)))), 1))), 1)), p_25)), 4)) & 1U)), 0x0EBA)), (-1))), l_259)) & 9)))
        {
            g_326 = 0;
            for (g_86 = 20; (g_86 < 15); --g_86)
            {
                return g_20;
            }
        }
        else
        {
            uint32_t l_358 = 4294967291U;
            int32_t l_361 = 1;
            for (l_322 = 0; (l_322 <= 29); l_322 = safe_add_func_uint32_t_u_u(l_322, 1))
            {
                int32_t l_355 = 0;
                int32_t l_359 = 1;
                int8_t l_411 = 0xAF;
                l_361 = (safe_unary_minus_func_uint32_t_u((p_23 < (safe_div_func_uint32_t_u_u((((safe_div_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(((safe_div_func_int16_t_s_s((safe_add_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((!(safe_div_func_int16_t_s_s(((safe_lshift_func_int8_t_s_s(g_349, 2)) == (((((g_88 = 4294967295U) <= 7U) != (safe_rshift_func_int16_t_s_s(p_25, ((safe_mod_func_int16_t_s_s(((((l_354 , l_355) < p_25) , (safe_add_func_int8_t_s_s((l_358 < p_24), l_359))) , p_24), 9U)) , 0x75D8)))) > 0x38) && g_86)), l_358))), g_85)), g_43)), l_322)) & p_23), l_360)), p_23)) || p_25) == (-7)), g_161)))));
                if ((safe_lshift_func_uint16_t_u_s((safe_div_func_int16_t_s_s(((safe_sub_func_int32_t_s_s((((!(((p_24 = (p_25 , (((safe_add_func_int8_t_s_s(6, (((+(safe_add_func_int32_t_s_s((safe_sub_func_int32_t_s_s(l_358, (safe_mod_func_uint16_t_u_u(l_359, p_26)))), (((l_355 = l_325) , (~l_323)) , ((safe_div_func_int16_t_s_s(g_223, ((((~(g_88 ^ p_25)) && p_24) , p_25) , g_260))) || p_25))))) , p_22) <= g_284))) || g_349) || (-5)))) , 8U) ^ l_359)) < g_161) ^ l_354), 0xD87469C5)) , p_24), g_349)), 9)))
                {
                    uint8_t l_400 = 4U;
                    l_355 = ((g_401 = (safe_sub_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(((safe_sub_func_int16_t_s_s(((0x96 < l_360) != (safe_rshift_func_uint8_t_u_u(((1U | ((safe_sub_func_int16_t_s_s((((safe_lshift_func_uint16_t_u_s((p_23 != (safe_add_func_uint16_t_u_u(p_24, ((p_24 , (safe_mod_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(0xEE99, ((g_76 = g_88) || g_194))), l_355))) && p_25)))), l_400)) , 0) , p_25), g_88)) == 0x98)) , p_24), 4))), l_400)) | l_259), (-1))), l_361))) >= 0);
                    g_413 = (safe_lshift_func_int16_t_s_u((((((+(safe_add_func_int32_t_s_s((((((safe_sub_func_int16_t_s_s((g_326 | 0x22), (0x3A | ((l_361 = g_284) < g_401)))) > (g_412 = (l_358 >= (safe_rshift_func_int16_t_s_u((((p_26 >= (p_22 = g_20)) , ((((g_76 = ((l_411 , l_400) | 0x4659088A)) > p_24) != l_322) >= g_223)) & 4294967295U), g_43))))) , p_24) <= 65532U) <= p_24), 4294967286U))) || l_400) & p_25) < p_26) , p_25), l_257));
                }
                else
                {
                    return g_20;
                }
                return p_23;
            }
        }
    }
    l_322 = 0x074FC59C;
    p_25 = g_199;
    return g_85;
}
static uint8_t func_31(int8_t p_32, uint16_t p_33)
{
    int32_t l_42 = 0x169C1477;
    int32_t l_49 = 0xBE2FF5FF;
    int32_t l_59 = (-1);
    int32_t l_256 = 0xF27B7FA8;
    l_256 = ((((-10) | (safe_sub_func_int8_t_s_s(((safe_mod_func_int16_t_s_s(0x67A7, (+(((safe_add_func_uint8_t_u_u((g_43 = (l_42 = l_42)), (safe_rshift_func_uint16_t_u_s(((safe_sub_func_int32_t_s_s(((l_49 = (safe_unary_minus_func_int16_t_s((-10)))) , (safe_div_func_uint8_t_u_u((p_32 && 0x0525C7E4), 0xBB))), ((safe_sub_func_int16_t_s_s((l_59 = func_54(func_57(l_59), l_59)), l_256)) , l_59))) | g_122), g_122)))) == 0x24) , g_194)))) >= l_256), 0x99))) | p_33) != p_33);
    return p_33;
}
inline static int16_t func_54(uint8_t p_55, int32_t p_56)
{
    int8_t l_61 = 0x4B;
    int32_t l_63 = 0x60DEEA39;
    uint32_t l_255 = 0x036850D5;
    l_61 = g_20;
    l_63 = (((!((((((p_55 != p_56) == func_57(l_61)) < (g_20 , g_20)) , l_61) > 65535U) , l_61)) , p_56) > g_20);
    l_63 = (l_255 = (l_61 , ((func_57(l_61) , (((func_64(l_63, p_56, g_20, g_20, (safe_mod_func_int32_t_s_s((safe_mod_func_uint8_t_u_u((func_57(((g_20 ^ (0x51F4 || 0xB704)) < l_61)) , 0x47), g_20)), l_61))) < g_20) == g_20) & p_56)) && p_55)));
    return p_56;
}
inline static uint8_t func_57(int16_t p_58)
{
    uint32_t l_60 = 4294967295U;
    l_60 = g_20;
    return l_60;
}
static uint8_t func_64(int32_t p_65, uint8_t p_66, uint32_t p_67, uint16_t p_68, uint32_t p_69)
{
    int8_t l_82 = 0xCF;
    int32_t l_87 = 0xFFBA4BDA;
    int32_t l_89 = (-1);
    uint32_t l_105 = 0U;
    uint8_t l_121 = 0xCE;
    uint32_t l_162 = 0xFA79916B;
    int32_t l_191 = (-1);
    int32_t l_192 = 0xC0632B81;
    int32_t l_193 = (-1);
    if ((l_89 = (p_67 ^ (g_88 = (((safe_mod_func_uint8_t_u_u(((g_76 = (-8)) , (l_87 = (g_86 = (~((((safe_lshift_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(func_57(l_82), g_20)), g_76)) < (-1)) , (((g_85 = ((safe_lshift_func_uint8_t_u_u((l_82 ^ p_69), l_82)) || l_82)) , g_85) || g_85)) ^ p_66))))), l_82)) != p_69) && p_69)))))
    {
        int32_t l_119 = (-5);
        uint32_t l_120 = 4294967295U;
        g_161 = (safe_div_func_int16_t_s_s(func_57((g_76 = func_57((((safe_rshift_func_uint16_t_u_s((func_57(((g_76 , 246U) , func_94((safe_rshift_func_int16_t_s_u(((((0xF7D0 | (safe_mod_func_uint32_t_u_u((safe_add_func_uint8_t_u_u((safe_add_func_int16_t_s_s(((((+(((l_105 = p_67) < (l_87 = (safe_unary_minus_func_uint8_t_u(((l_89 = (safe_add_func_int16_t_s_s(0x03A7, (((safe_lshift_func_uint8_t_u_u(((((1U || (safe_sub_func_int16_t_s_s(((safe_mod_func_int8_t_s_s(g_86, p_67)) && (+((((((safe_sub_func_uint16_t_u_u(((safe_unary_minus_func_uint32_t_u((p_67 != l_119))) ^ l_120), l_119)) , l_87) >= p_65) < l_119) , l_121) || 3U))), p_69))) <= l_120) && 0x325A1CDA) | g_86), 5)) , l_120) && g_76)))) , p_66))))) >= 65531U)) == p_66) < g_85) & p_65), 0xFCBA)), 0x68)), g_122))) || p_69) < p_68) > p_69), 13))))) > g_76), p_66)) == 0x2C) || p_68)))), l_121));
        l_162 = l_120;
    }
    else
    {
        uint16_t l_166 = 0x0ABD;
        int32_t l_218 = 1;
        uint32_t l_224 = 4U;
        l_87 = ((+(safe_add_func_int32_t_s_s((0xB645FD3A | g_161), l_166))) != (safe_lshift_func_uint8_t_u_s(((safe_unary_minus_func_int32_t_s(((g_122 && g_76) & (safe_rshift_func_int16_t_s_u(((safe_lshift_func_uint16_t_u_u((g_88 || ((g_161 ^ (safe_lshift_func_int8_t_s_u(((l_166 < g_122) , p_65), l_166))) >= g_85)), g_76)) , 0), g_76))))) , g_20), 7)));
        if (((~((safe_add_func_int8_t_s_s((((safe_lshift_func_uint8_t_u_s((p_66 = (p_68 < (safe_add_func_uint16_t_u_u(l_166, g_161)))), 2)) <= l_87) | (((0x01610A32 & ((safe_mod_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(((g_88 && (((safe_unary_minus_func_uint8_t_u((((((safe_rshift_func_int8_t_s_s((l_193 = (0x289590F8 != (l_192 = ((((+(l_191 = ((l_89 = (g_76 >= (0 | p_65))) <= p_67))) < l_166) != g_122) , p_69)))), l_87)) && 0xEF0E) && g_85) , p_69) ^ 0x00))) | l_166) ^ 0U)) == l_121), g_86)), 0x71)) == g_88)) ^ g_20) && l_162)), l_166)) < 1)) > l_87))
        {
            p_65 = p_66;
            g_194 = 0x6F7BBE78;
            g_199 = (safe_mod_func_int16_t_s_s((g_20 <= (p_68 != (safe_add_func_uint8_t_u_u(0x45, l_166)))), 0xE63D));
            return g_199;
        }
        else
        {
            uint16_t l_219 = 65527U;
            int32_t l_220 = (-1);
            int32_t l_221 = 1;
            int32_t l_222 = (-3);
            uint8_t l_254 = 5U;
            l_224 = ((((((g_223 = (l_89 = (safe_lshift_func_uint8_t_u_s((l_222 = (safe_mod_func_int32_t_s_s(((((safe_rshift_func_uint8_t_u_s(p_67, 7)) , (((safe_add_func_uint8_t_u_u(p_67, ((safe_add_func_uint32_t_u_u((((((safe_div_func_uint32_t_u_u(p_65, (safe_div_func_int8_t_s_s(((l_218 = (safe_lshift_func_int8_t_s_u(p_68, 4))) | ((g_194 = ((l_192 > (l_166 & p_66)) <= l_219)) , (l_220 = g_161))), 0x72)))) , l_221) || 0U) == 4294967292U) == p_66), l_219)) && l_220))) > 4U) <= g_199)) , (-1)) & (-4)), g_86))), p_68)))) > p_66) , 0) ^ p_67) != (-10)) < 0x7CEF);
            p_65 = (safe_mod_func_int16_t_s_s(((safe_mod_func_uint32_t_u_u(4294967295U, p_65)) >= ((safe_mod_func_int8_t_s_s((((p_66 = ((-1) | ((safe_add_func_int32_t_s_s((g_88 > g_86), (g_122 >= (safe_div_func_uint8_t_u_u((+((p_68 = ((safe_lshift_func_int8_t_s_s(((safe_mod_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((safe_add_func_uint16_t_u_u(((safe_add_func_int8_t_s_s((safe_div_func_uint32_t_u_u((safe_div_func_int32_t_s_s(0xB3813AB9, (((safe_rshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_s((l_89 ^ 0x012D08A2), l_218)), 3)) , 0x5369) || p_66))), p_66)), l_105)) & 0xB35F8E2D), l_221)), g_122)), p_68)) , 0x92), 5)) , l_162)) , p_67)), l_166))))) && p_69))) ^ l_254) & l_121), 3)) <= p_65)), g_86));
        }
    }
    return p_65;
}
inline static int16_t func_94(int32_t p_95)
{
    int16_t l_125 = 0xD6DD;
    int32_t l_156 = 0x92485D13;
    uint32_t l_157 = 0x9A964D50;
    int32_t l_158 = 0x2099EBF9;
    uint32_t l_159 = 0xD6E93423;
    int32_t l_160 = 0xBD83D76C;
    l_160 = (safe_sub_func_uint32_t_u_u((g_20 , l_125), (safe_lshift_func_uint8_t_u_s((l_125 || (safe_add_func_int32_t_s_s(2, ((((l_158 = ((safe_div_func_int8_t_s_s(((safe_lshift_func_int8_t_s_s(((safe_mod_func_uint16_t_u_u(((safe_sub_func_int16_t_s_s((((((safe_add_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((l_156 = (((safe_mod_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(((l_125 | (p_95 != (((safe_rshift_func_int16_t_s_s(g_85, 8)) & ((0x1B | (safe_lshift_func_uint16_t_u_u(p_95, g_88))) >= 65529U)) & p_95))) && p_95), p_95)), 1)), g_85)) >= 65535U) , 253U)), 7)), 7)), l_157)) == p_95) >= l_157) > p_95) < (-2)), p_95)) , p_95), 65529U)) > l_157), g_122)) < 0U), g_122)) && 9U)) && 0xB7620606) , l_159) ^ g_20)))), l_159))));
    return p_95;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_20;
    csmith_sink_ = g_43;
    csmith_sink_ = g_76;
    csmith_sink_ = g_85;
    csmith_sink_ = g_86;
    csmith_sink_ = g_88;
    csmith_sink_ = g_122;
    csmith_sink_ = g_161;
    csmith_sink_ = g_194;
    csmith_sink_ = g_199;
    csmith_sink_ = g_223;
    csmith_sink_ = g_260;
    csmith_sink_ = g_284;
    csmith_sink_ = g_326;
    csmith_sink_ = g_349;
    csmith_sink_ = g_401;
    csmith_sink_ = g_412;
    csmith_sink_ = g_413;
    csmith_sink_ = g_415;
    csmith_sink_ = g_417;
    csmith_sink_ = g_506;
    csmith_sink_ = g_537;
    csmith_sink_ = g_555;
    csmith_sink_ = g_582;
    csmith_sink_ = g_602;
    csmith_sink_ = g_624;
    csmith_sink_ = g_625;
    csmith_sink_ = g_626;
    csmith_sink_ = g_628;
    csmith_sink_ = g_648;
    csmith_sink_ = g_649;
    csmith_sink_ = g_784;
    csmith_sink_ = g_863;
    platform_main_end(0,0);
    return 0;
}
