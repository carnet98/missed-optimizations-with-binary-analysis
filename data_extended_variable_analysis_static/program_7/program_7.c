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
static int64_t g_6 = 0L;
static uint64_t g_7 = 18446744073709551615UL;
static uint8_t g_43 = 5UL;
static uint16_t g_44 = 0xFEC1L;
static uint64_t g_62 = 1UL;
static uint16_t g_65 = 0UL;
static uint32_t g_81 = 0x914D865EL;
static uint32_t g_87 = 3UL;
static uint64_t g_96 = 18446744073709551610UL;
static uint64_t g_99 = 0x4D42BE3C69BB0CEALL;
static uint16_t g_104 = 0xA864L;
static int32_t g_105 = 0x39C2D96AL;
static uint16_t g_130 = 0x9913L;
static uint8_t g_138 = 0xD9L;
static int8_t g_225 = 0xF1L;
static int32_t g_226 = 0L;
static int32_t g_249 = 0L;
static int16_t g_250 = 1L;
static uint32_t g_251 = 4294967293UL;
static int64_t g_332 = (-2L);
static int8_t g_345 = 0x8EL;
static int16_t g_401 = 9L;
static int16_t g_403 = 0xACF3L;
static int8_t g_404 = 0xBCL;
static uint32_t g_405 = 0xB9BCCF34L;
static uint16_t g_418 = 0x5C44L;
static int32_t g_429 = 1L;
static int16_t g_430 = 0x5F03L;
static int64_t g_431 = 1L;
static int8_t g_433 = (-1L);
static int64_t g_434 = 0x5E78A2021EEE7737LL;
static uint64_t g_436 = 1UL;
static uint64_t g_439 = 0xEC78794BD4010285LL;
static int32_t g_510 = 0x113E96B6L;
static uint32_t g_514 = 9UL;
static int16_t g_516 = 0x7651L;
static int64_t g_518 = 0xA3907394197A70FALL;
static uint32_t g_559 = 4UL;
static int64_t g_582 = (-1L);
static uint32_t g_583 = 0UL;
static int64_t g_593 = 0x0E6010BBA5B328EELL;
static uint8_t g_623 = 0xF6L;
static int8_t g_666 = (-1L);
static int64_t g_667 = 0x52EECA2CE9A02F5DLL;
static uint16_t g_668 = 1UL;
static uint32_t g_672 = 0x3126D1AAL;
static uint64_t g_698 = 0x6122984D524F12A3LL;
static int16_t g_699 = (-4L);
static uint8_t func_1(void);
static int64_t func_9(int32_t p_10, int32_t p_11, uint64_t p_12, uint16_t p_13);
static uint64_t func_16(uint8_t p_17, int32_t p_18);
static uint32_t func_22(int32_t p_23, uint32_t p_24);
static int32_t func_33(uint32_t p_34);
static int16_t func_40(uint32_t p_41);
static int64_t func_47(uint8_t p_48);
static int32_t func_51(int64_t p_52, int32_t p_53, uint32_t p_54, int8_t p_55, uint64_t p_56);
static uint8_t func_66(int64_t p_67, uint32_t p_68, uint32_t p_69, uint32_t p_70);
static int32_t func_75(uint8_t p_76, uint16_t p_77, int32_t p_78);
static uint8_t func_1(void)
{
    int64_t l_8 = (-1L);
    int32_t l_870 = 0xC0975891L;
    int32_t l_871 = 0x2A164DE1L;
    l_871 ^= (l_870 = (safe_lshift_func_int16_t_s_u(((safe_sub_func_int8_t_s_s((g_6 | (g_7 = g_6)), ((g_6 ^ l_8) ^ l_8))) || (func_9(g_7, ((safe_mod_func_uint64_t_u_u(func_16(g_7, l_8), g_249)) != g_593), g_249, g_429) == 1UL)), 11)));
    return g_403;
}
static int64_t func_9(int32_t p_10, int32_t p_11, uint64_t p_12, uint16_t p_13)
{
    uint8_t l_861 = 0UL;
    int32_t l_863 = (-1L);
    uint16_t l_868 = 65535UL;
    int32_t l_869 = (-3L);
    l_869 &= (+((g_404 & (p_12 = ((((safe_rshift_func_uint16_t_u_u(0UL, (safe_add_func_int64_t_s_s((safe_unary_minus_func_uint32_t_u(0x90645D82L)), ((safe_rshift_func_int16_t_s_s(l_861, 8)) & (g_433 ^ (safe_unary_minus_func_int16_t_s(((((l_863 = (l_861 & 255UL)) & (((safe_mod_func_uint64_t_u_u(p_13, (((safe_mod_func_int32_t_s_s(0L, p_13)) && l_861) ^ (-9L)))) ^ g_401) < g_623)) & l_861) | l_861))))))))) < l_868) >= l_861) && g_404))) >= p_11));
    return g_65;
}
static uint64_t func_16(uint8_t p_17, int32_t p_18)
{
    int64_t l_575 = 0xA4478303DC814CA0LL;
    int32_t l_626 = 0x94DB26A7L;
    uint32_t l_662 = 0xDDBE43CFL;
    int32_t l_793 = 5L;
    int32_t l_816 = 0x80E869EBL;
    int32_t l_850 = (-1L);
    int32_t l_851 = (-3L);
    if (p_17)
    {
        uint8_t l_21 = 255UL;
        uint64_t l_25 = 0x1FC42FF18C9A01C7LL;
        int32_t l_571 = (-8L);
        uint8_t l_594 = 0x98L;
        uint32_t l_661 = 4294967295UL;
        int32_t l_794 = (-6L);
        if (p_18)
        {
            uint16_t l_569 = 0x5CE1L;
            int32_t l_570 = 0x8D824F00L;
            l_570 = (l_569 = (((safe_sub_func_int16_t_s_s((l_21 = 0x1C58L), 0UL)) <= func_22((l_25 <= g_6), p_18)) & g_430));
        }
        else
        {
            int8_t l_574 = (-6L);
            int32_t l_592 = (-1L);
            int8_t l_636 = 1L;
            int8_t l_717 = 1L;
            int32_t l_745 = 0x09A928C2L;
            l_571 = p_18;
            l_575 = (0x9EFEEB15368788BCLL >= ((safe_div_func_int16_t_s_s(g_345, l_574)) <= ((l_574 <= p_18) >= 0UL)));
            for (g_250 = 0; (g_250 <= 27); g_250 = safe_add_func_int8_t_s_s(g_250, 1))
            {
                uint32_t l_610 = 0xCD342261L;
                int32_t l_635 = 0xE6E6B571L;
                int8_t l_663 = 0L;
                int32_t l_671 = 0x4CAF5227L;
                int8_t l_692 = 0x56L;
                for (g_104 = 0; (g_104 >= 47); g_104++)
                {
                    for (g_6 = 0; (g_6 <= 23); ++g_6)
                    {
                        g_583++;
                        l_592 = (safe_add_func_uint8_t_u_u((safe_div_func_int16_t_s_s(0x76DDL, g_429)), (p_17 = (safe_rshift_func_int8_t_s_u(0x8CL, g_104)))));
                        g_510 = (1UL || (p_17 = g_593));
                    }
                    if (l_594)
                        continue;
                }
                g_105 &= (-7L);
                if (((~(0xB47DL < (safe_lshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u(p_18, (l_592 ^ (-1L)))), p_17)))) && ((safe_lshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(g_87, g_430)), (safe_mod_func_uint16_t_u_u((+l_574), (254UL | 0xCFL))))) > g_104)))
                {
                    int8_t l_633 = 5L;
                    int64_t l_634 = (-3L);
                    int32_t l_664 = (-1L);
                    int32_t l_665 = 0L;
                    g_105 ^= ((safe_add_func_int32_t_s_s((!((l_610 = 0xEDL) ^ (safe_rshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_s(((((-8L) != (safe_div_func_uint8_t_u_u((l_635 ^= (safe_rshift_func_int16_t_s_s(((safe_add_func_int8_t_s_s((safe_add_func_uint16_t_u_u(((g_96 = g_583) != (l_626 = (g_623++))), ((0x46A7C776CF2D3BEELL == p_17) != 0x03L))), ((((safe_sub_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(((p_18 > (safe_rshift_func_int8_t_s_u(((g_43 = (((g_583 != 5UL) <= l_633) & l_575)) & 1L), 5))) >= 0xDE72L), 4)), l_634)) && p_18) <= l_594) && p_17))) | g_104), 13))), l_636))) > p_17) != 18446744073709551609UL), g_403)), 3)))), 0xCE12E4BFL)) ^ l_574);
                    l_635 = ((safe_mod_func_int32_t_s_s((l_634 == p_18), (safe_div_func_int32_t_s_s(0xD8B41040L, (safe_lshift_func_uint16_t_u_u((l_633 != (safe_mod_func_int16_t_s_s((safe_div_func_uint8_t_u_u((safe_div_func_int16_t_s_s((l_664 = (safe_lshift_func_int16_t_s_s(((l_663 = ((l_634 || (safe_lshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_u((safe_add_func_uint32_t_u_u(((g_434 ^= 0L) == ((safe_div_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s((g_582 == g_105), (0xECD1C5668845FD41LL | 0xD2180A96A3DB87A4LL))), l_661)) && 18446744073709551614UL)), g_436)), l_662)), l_571))) == g_559)) <= (-5L)), l_25))), g_582)), g_130)), l_626))), l_634)))))) & l_594);
                    g_668++;
                }
                else
                {
                    uint32_t l_706 = 0x85F8C4ACL;
                    int32_t l_718 = 0x682529E8L;
                    --g_672;
                    for (g_404 = 0; (g_404 != (-7)); g_404 = safe_sub_func_uint16_t_u_u(g_404, 7))
                    {
                        g_699 |= ((safe_mod_func_uint8_t_u_u((g_667 != (safe_unary_minus_func_int8_t_s(((0x77AAECDDL >= (((safe_sub_func_int8_t_s_s(((safe_div_func_uint64_t_u_u(1UL, 0x79286D6DA56A9231LL)) || (((g_431 = ((((~(safe_sub_func_int32_t_s_s(0xBFA716B4L, (+(safe_lshift_func_uint8_t_u_u(g_96, (safe_add_func_int64_t_s_s(l_692, (safe_rshift_func_int16_t_s_u((l_571 = ((+(safe_rshift_func_uint16_t_u_s(g_698, (g_345 || 4294967290UL)))) | 0UL)), 8)))))))))) != l_671) == 6UL) && g_105)) >= g_250) <= l_692)), g_81)) ^ 1L) >= 0xBE931AE1242CA710LL)) != 0x2A7C1728L)))), g_81)) == g_518);
                        l_718 = ((p_18 && ((safe_lshift_func_uint16_t_u_s((--g_44), 14)) > (safe_add_func_uint64_t_u_u(p_18, (l_706 = 0xDD1E963A6868F39CLL))))) || (safe_sub_func_int32_t_s_s(((safe_mod_func_int32_t_s_s(((((g_251 = (p_17 && (safe_add_func_int8_t_s_s((4294967287UL | l_592), g_623)))) || (safe_rshift_func_uint8_t_u_u((g_405 && (safe_add_func_uint64_t_u_u((g_510 != g_430), p_17))), 3))) <= p_18) > p_18), l_717)) || l_662), p_17)));
                        if (p_17)
                            continue;
                    }
                    if (((safe_add_func_uint64_t_u_u(l_717, (((safe_sub_func_int32_t_s_s(0x80A7A01AL, ((safe_lshift_func_uint16_t_u_u(l_706, 12)) > (l_574 ^ 0xB0D4L)))) <= p_17) ^ g_431))) < (p_18 & (((g_332 = (l_25 && 2L)) && 0x720638FEC1CD9760LL) & 255UL))))
                    {
                        return l_610;
                    }
                    else
                    {
                        uint64_t l_737 = 0xCCF32BF1DC6E4EA9LL;
                        l_626 |= ((l_635 = ((l_571 = p_17) != (g_430 = 0xD3AEL))) == (g_559 <= ((safe_lshift_func_int16_t_s_s((g_403 = ((safe_lshift_func_int16_t_s_u((l_594 > (p_18 ^ (safe_mod_func_int16_t_s_s((((safe_lshift_func_int16_t_s_u(((((safe_lshift_func_uint8_t_u_u(((((0xDD971EFDL < (((+((~(l_737 = p_17)) || (((p_18 || (0x54722D62L <= 0UL)) ^ 0x51L) && g_99))) && g_332) < g_130)) != 0xFEEA5D78L) & 0x20L) || 0x43A81B4C5373F0FCLL), g_99)) >= p_17) != 0x7CFBFDBFL) >= 18446744073709551611UL), 15)) <= (-5L)) | g_332), 0x639EL)))), 8)) != l_575)), p_17)) == g_401)));
                        return p_18;
                    }
                }
                l_592 &= (((safe_div_func_uint64_t_u_u((safe_unary_minus_func_uint32_t_u(((((7UL & ((safe_sub_func_int8_t_s_s((l_635 ^= (safe_mod_func_uint8_t_u_u(p_17, (g_138++)))), ((l_610 != 0UL) >= ((((l_571 |= (safe_mod_func_int64_t_s_s((((p_18 < ((g_514 ^ p_17) < 0x5FB41094L)) || (safe_add_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((((safe_rshift_func_uint16_t_u_s((safe_div_func_uint32_t_u_u(((safe_sub_func_uint8_t_u_u((((safe_lshift_func_uint8_t_u_u((((+g_332) & g_666) | 255UL), 0)) ^ l_661) ^ g_7), g_516)) != 0L), 0xF86DA8D5L)), l_745)) | g_87) && 4L), 8)), l_594))) < 0L), l_717))) && l_717) && g_332) || g_431)))) <= l_717)) > l_610) > p_18) != p_18))), g_251)) || p_18) & 5L);
            }
        }
        for (g_516 = 0; (g_516 < (-29)); g_516 = safe_sub_func_int16_t_s_s(g_516, 2))
        {
            uint64_t l_789 = 1UL;
            int32_t l_792 = 0xC37D6EB4L;
            g_510 = (safe_lshift_func_int16_t_s_s((g_699 = (-1L)), (safe_mod_func_int16_t_s_s((l_794 &= ((((l_571 = (((++g_559) <= ((safe_rshift_func_int8_t_s_u(0x66L, (g_43 ^= g_429))) | (l_626 = (g_345 & (safe_add_func_int8_t_s_s((-10L), l_575)))))) ^ ((safe_sub_func_int16_t_s_s((safe_add_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((p_17 = (safe_lshift_func_uint16_t_u_s((safe_sub_func_uint64_t_u_u(l_789, (safe_add_func_int8_t_s_s(((g_105 &= p_17) != (l_792 = 1L)), p_17)))), l_789))), g_510)), 6)) ^ g_434), l_793)), l_789)) ^ p_18))) | 0x4C7DB1264F068722LL) < g_405) || p_18)), p_18))));
        }
    }
    else
    {
        int32_t l_800 = 0x9A6D3F55L;
        uint8_t l_806 = 0x04L;
        uint32_t l_815 = 0x7A3E2A15L;
        int32_t l_848 = 1L;
        int32_t l_849 = 0x709B196BL;
        int32_t l_852 = 1L;
        l_816 = ((((l_662 != ((safe_mod_func_int64_t_s_s(((safe_mod_func_uint64_t_u_u((2UL ^ (((~l_800) || ((safe_div_func_uint32_t_u_u(((+(safe_add_func_uint8_t_u_u((((l_806 || p_18) >= ((safe_div_func_uint8_t_u_u((g_138++), g_436)) | (safe_sub_func_uint64_t_u_u(18446744073709551614UL, (safe_add_func_int16_t_s_s((l_626 = p_17), (l_662 | g_699))))))) || l_575), l_575))) < 0x292DE6B7L), 2L)) || 1UL)) <= 6L)), l_662)) || g_6), l_662)) != (-1L))) && g_516) > 65527UL) | l_815);
        l_852 &= (safe_add_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u((((safe_div_func_int64_t_s_s((l_851 = (((l_850 = (safe_add_func_int8_t_s_s((safe_mod_func_int8_t_s_s(((safe_add_func_uint64_t_u_u(((safe_div_func_uint16_t_u_u(0x9B28L, l_793)) > (l_849 = ((((l_816 = 5L) && (l_848 &= (safe_mod_func_uint32_t_u_u((safe_div_func_uint16_t_u_u((l_575 != ((l_800 = (safe_rshift_func_int8_t_s_u((!(-1L)), 5))) || l_815)), ((((l_626 &= g_668) < (p_17 && (safe_mod_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((safe_div_func_int64_t_s_s((safe_div_func_int64_t_s_s(((safe_rshift_func_uint16_t_u_s(((l_816 = p_17) & l_806), 13)) | g_345), g_668)), g_518)), 5)), (-5L))))) ^ 246UL) && 9L))), l_662)))) & l_575) | l_815))), p_18)) >= g_418), 8UL)), p_17))) >= g_249) != p_18)), l_793)) || p_18) > l_806), (-7L))), p_18));
        l_852 = l_793;
    }
    return g_404;
}
static uint32_t func_22(int32_t p_23, uint32_t p_24)
{
    int8_t l_499 = 1L;
    int32_t l_511 = 1L;
    int32_t l_512 = 0xCB7B7E35L;
    int32_t l_513 = (-6L);
    uint64_t l_519 = 18446744073709551611UL;
    int32_t l_549 = (-8L);
    uint16_t l_551 = 0xCEDBL;
    if (((safe_add_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_s((p_23 | (safe_unary_minus_func_int8_t_s((safe_div_func_int32_t_s_s(g_7, func_33(g_7)))))), (+l_499))) >= (g_514 = (l_513 = ((((l_512 = (safe_add_func_uint8_t_u_u((0xC2F7L != (l_511 |= (safe_mod_func_uint64_t_u_u(((safe_rshift_func_uint16_t_u_s(g_433, (safe_mod_func_uint64_t_u_u(((!((~p_23) || (g_510 = ((p_23 || l_499) < p_24)))) || p_23), 1UL)))) && g_434), 0xD2E638051BDCD488LL)))), (-1L)))) | p_24) ^ g_404) & l_499)))), l_499)) == p_23))
    {
        int8_t l_515 = 0x17L;
        int32_t l_517 = 0xD703F634L;
        ++l_519;
    }
    else
    {
        int8_t l_533 = 6L;
        int8_t l_548 = 0x77L;
        int32_t l_550 = (-1L);
        int32_t l_552 = 7L;
        g_510 &= (safe_div_func_uint16_t_u_u((l_552 = (l_511 = (((safe_div_func_uint16_t_u_u((safe_div_func_uint16_t_u_u(((+l_499) > ((safe_mod_func_int8_t_s_s((l_533 && (p_23 != ((((l_499 >= 5L) > 1UL) && (safe_mod_func_int32_t_s_s((((((safe_add_func_int64_t_s_s(((l_549 = (l_550 = (((safe_rshift_func_int16_t_s_s(((safe_div_func_int8_t_s_s((((safe_rshift_func_uint8_t_u_u(p_23, (safe_lshift_func_int8_t_s_u((safe_mod_func_uint8_t_u_u((p_24 > l_548), l_533)), 1)))) > 0x1843F403L) & p_23), g_514)) ^ l_549), g_345)) ^ p_24) == g_81))) != 0xABL), g_401)) == p_24) <= 9L) > 9L) != l_533), 4294967293UL))) < 255UL))), p_23)) > l_551)), 0x4374L)), p_23)) == g_62) && 0x5CL))), 0xC7BDL));
        p_23 = (g_430 & (p_23 & ((safe_div_func_uint32_t_u_u(0x7295ACF0L, (safe_div_func_int32_t_s_s((((((safe_sub_func_int16_t_s_s((((((g_559 ^ l_533) & p_24) ^ ((g_105 = ((p_23 || (safe_div_func_uint64_t_u_u((safe_div_func_int32_t_s_s(g_418, (safe_unary_minus_func_int16_t_s((safe_div_func_uint64_t_u_u((safe_mod_func_int64_t_s_s((l_512 <= g_510), 18446744073709551612UL)), l_548)))))), 5L))) <= 3UL)) <= (-4L))) | l_533) ^ g_434), (-4L))) && g_559) & p_23) <= g_249) != p_23), p_23)))) <= 1UL)));
    }
    return g_401;
}
static int32_t func_33(uint32_t p_34)
{
    int32_t l_35 = 0x6082F4E5L;
    int32_t l_42 = 8L;
    int32_t l_346 = 0x0D2587FEL;
    uint8_t l_373 = 0x99L;
    int32_t l_397 = 0L;
    int32_t l_428 = 0x64FD79D3L;
    int32_t l_432 = 8L;
    int32_t l_435 = 0xE92A9D97L;
    int64_t l_448 = 0L;
    int64_t l_495 = (-2L);
    int16_t l_496 = 3L;
    int32_t l_497 = 0x3B245BD9L;
    g_44 = (l_35 <= ((safe_mod_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s(func_40((l_42 = 0x104353EAL)), 1)), l_35)) || l_42));
    if (((l_42 = func_47(p_34)) || ((safe_rshift_func_uint16_t_u_u((0L | ((p_34 > (safe_lshift_func_uint8_t_u_u(((((safe_unary_minus_func_uint32_t_u((safe_add_func_int16_t_s_s((((l_35 = ((g_345 ^= ((18446744073709551615UL <= p_34) != (g_249 & (0x6DF76FEDL > (safe_lshift_func_uint8_t_u_s(p_34, p_34)))))) < (-1L))) ^ g_44) == g_249), p_34)))) < l_346) ^ g_7) == p_34), p_34))) != g_44)), p_34)) <= 0xBFL)))
    {
        int64_t l_351 = 0L;
        int32_t l_374 = 0L;
        int32_t l_375 = 5L;
        uint64_t l_392 = 8UL;
        int32_t l_398 = 1L;
        int32_t l_399 = 0L;
        int32_t l_400 = 0x2E8BEF14L;
        int8_t l_425 = 0x32L;
        l_375 ^= (safe_add_func_int8_t_s_s((((safe_lshift_func_uint16_t_u_s(l_351, 6)) >= (+(p_34 = ((safe_lshift_func_uint16_t_u_s((l_374 = (((safe_sub_func_int16_t_s_s((((-5L) && l_351) && ((((safe_sub_func_uint64_t_u_u(((safe_rshift_func_int8_t_s_s((l_346 == ((((safe_rshift_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_u(p_34, 3)), (safe_lshift_func_int8_t_s_s((3UL != (((((l_35 > l_351) <= (safe_mod_func_int64_t_s_s(g_249, (-2L)))) == g_250) & g_44) | l_373)), l_351)))), p_34)), 15)) == g_332) ^ 0x90F9319DL) != g_130)), 5)) >= g_44), g_249)) > p_34) >= p_34) & l_351)), l_351)) <= p_34) == g_81)), p_34)) <= g_44)))) >= g_99), 0x43L));
        if ((safe_rshift_func_uint16_t_u_u((((safe_div_func_int64_t_s_s((g_332 = ((l_346 <= 0x309A6BEFL) < (l_400 &= (l_399 &= (safe_div_func_int8_t_s_s((l_375 = g_44), (safe_div_func_uint16_t_u_u((((safe_mod_func_uint8_t_u_u(g_65, (l_398 ^= (safe_sub_func_uint8_t_u_u(p_34, ((safe_div_func_int32_t_s_s((l_35 = ((l_374 = (1L >= (safe_rshift_func_int16_t_s_u(l_392, ((safe_lshift_func_int8_t_s_u((safe_sub_func_uint8_t_u_u(g_138, 9L)), l_397)) > (-1L)))))) & l_351)), g_138)) >= g_225)))))) == g_43) ^ 0xCF4EL), l_346)))))))), p_34)) <= 0UL) ^ l_373), 11)))
        {
            int8_t l_402 = 5L;
            int32_t l_417 = 0L;
            uint32_t l_424 = 0x5BA16F0DL;
            ++g_405;
            l_425 = (safe_lshift_func_int8_t_s_s((l_402 <= g_96), ((l_375 = 0xA896L) | ((+((safe_rshift_func_int16_t_s_s((((safe_lshift_func_int16_t_s_u(0xB7C3L, (safe_rshift_func_uint16_t_u_s((--g_418), g_225)))) < ((0xE3L != (((safe_div_func_uint8_t_u_u(l_392, ((((+l_373) && (((((p_34 != p_34) ^ g_96) < l_402) && l_42) <= p_34)) < l_424) && 3UL))) | l_402) < 0x2FL)) > l_346)) | p_34), l_400)) == g_404)) && g_87))));
            l_417 = (-4L);
            for (g_225 = 0; (g_225 <= 7); g_225++)
            {
                if (g_249)
                    break;
            }
        }
        else
        {
            l_399 &= 0L;
        }
        --g_436;
    }
    else
    {
        uint16_t l_449 = 0x1363L;
        int32_t l_450 = 0xED354C98L;
        g_439--;
        l_450 ^= (((l_432 > g_81) > (((safe_lshift_func_uint16_t_u_u(7UL, (1UL != ((0x9BL > ((safe_add_func_uint32_t_u_u((p_34 ^ (g_104 & (((safe_rshift_func_uint8_t_u_u(p_34, 6)) | (p_34 || 0UL)) != l_448))), 0xACF3CD9FL)) & 0x7195CB3CL)) != 0x33FC1196L)))) >= 0UL) > l_449)) != g_130);
        l_35 = p_34;
        l_42 = p_34;
    }
    for (g_405 = 0; (g_405 >= 16); g_405++)
    {
        int16_t l_455 = 1L;
        int32_t l_456 = 0x41C65E76L;
        uint16_t l_466 = 0x82CEL;
        l_466 &= ((250UL ^ ((4L ^ ((((safe_div_func_uint8_t_u_u((l_456 = (l_455 < p_34)), (safe_add_func_uint16_t_u_u((safe_unary_minus_func_int64_t_s(g_226)), (safe_lshift_func_uint16_t_u_u(g_7, (safe_div_func_uint16_t_u_u((((g_99 | ((safe_div_func_int64_t_s_s(5L, (g_62 = l_455))) > 18446744073709551615UL)) == g_404) && 0x014CE8C8L), 0xAD55L)))))))) && p_34) > p_34) | 0x63L)) < p_34)) & g_418);
    }
    l_497 ^= (safe_div_func_int16_t_s_s(((l_428 ^= (!((safe_rshift_func_uint8_t_u_u((((safe_div_func_uint64_t_u_u((g_436 == ((g_65 &= p_34) & (safe_rshift_func_int8_t_s_s(((((safe_rshift_func_uint16_t_u_s((safe_div_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u((g_44 = 0UL), (((safe_add_func_uint32_t_u_u(((safe_sub_func_uint64_t_u_u((((g_429 | (18446744073709551608UL > ((((l_35 = ((l_42 = ((safe_sub_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_u(0xF03EL, 4)) == (l_495 = (safe_add_func_uint32_t_u_u((((((l_432 = p_34) | (safe_add_func_uint32_t_u_u((0xEAD64265CD057464LL && (l_346 = ((safe_unary_minus_func_int32_t_s(l_35)) & 0x1BL))), g_130))) <= g_436) < (-9L)) > 0x56L), g_436)))), 0x6206L)) != 1UL)) <= p_34)) != 0x1F02L) > 0x2958C2794FBEF737LL) == 1UL))) ^ (-4L)) & p_34), 0x3A89F36769E6BECDLL)) && g_345), g_105)) >= 0x5B6DD22A97E7C0EFLL) == (-8L)))), l_496)), 5)) > g_104) ^ 0L) | 18446744073709551615UL), 1)))), g_87)) > l_373) & 0xF4F9EC15FA3F5346LL), 4)) < l_435))) || p_34), g_81));
    return l_497;
}
static int16_t func_40(uint32_t p_41)
{
    g_43 &= 0x3BE41B0CL;
    return g_7;
}
static int64_t func_47(uint8_t p_48)
{
    int32_t l_74 = 0xCF2EC287L;
    int32_t l_174 = 0L;
    int64_t l_245 = 0x7CC862B96CBFF400LL;
    for (g_43 = 0; (g_43 >= 26); g_43++)
    {
        uint8_t l_63 = 0xAEL;
        int32_t l_64 = 0x95DD6864L;
        uint32_t l_157 = 0xFAC948D7L;
        uint8_t l_265 = 0UL;
        int32_t l_279 = 0x918DAC4CL;
        g_105 = func_51(((g_104 &= ((g_65 = (l_64 = ((!(safe_sub_func_int64_t_s_s(p_48, 1UL))) || ((g_62 = (safe_mod_func_uint8_t_u_u(0x7EL, 0x23L))) || l_63)))) & ((((func_66((!(g_43 == (safe_sub_func_uint16_t_u_u(l_63, p_48)))), (0x2705104EL <= g_6), g_43, l_74) & l_63) && l_63) & g_44) >= 0xC8L))) ^ g_7), g_105, p_48, l_63, p_48);
        g_105 |= (g_62 < g_43);
        for (l_63 = 0; (l_63 > 43); ++l_63)
        {
            uint32_t l_142 = 0x3ED55ED5L;
            if (g_43)
            {
                return g_6;
            }
            else
            {
                int64_t l_143 = 0xB9EEC2988D6DCB74LL;
                l_142 = 0xEE533B9EL;
                l_143 |= 1L;
            }
        }
        if (g_65)
        {
            return p_48;
        }
        else
        {
            uint64_t l_156 = 0x330C07BB3E8CBBEELL;
            int32_t l_185 = 0x82CB70C1L;
            l_64 = ((((l_157 = (safe_add_func_uint16_t_u_u(((safe_div_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u((safe_div_func_uint8_t_u_u((l_156 = ((safe_mod_func_int8_t_s_s((g_138 & 0x5359L), p_48)) != (safe_rshift_func_int8_t_s_u(l_74, g_62)))), (l_64 | (l_64 || (((-2L) > 0xE8F6EEC55A7B5E45LL) >= 0xC6319732EC2C21BELL))))), 3)), p_48)) > l_63), l_74))) <= 9UL) | p_48) || 18446744073709551615UL);
            if ((((safe_mod_func_int64_t_s_s((safe_sub_func_int64_t_s_s(((~p_48) & (safe_add_func_uint32_t_u_u(l_156, (g_87 == (safe_sub_func_uint32_t_u_u((~(safe_mod_func_uint16_t_u_u((~l_74), 0x83A0L))), (l_74 != ((safe_mod_func_uint64_t_u_u((~((l_64 ^= (1L & (l_174 = l_63))) != ((((((safe_div_func_uint8_t_u_u(0x3BL, p_48)) || 0x82L) | l_63) | g_7) > l_156) && g_81))), g_6)) > 0x62L)))))))), p_48)), p_48)) == 0L) | p_48))
            {
                uint8_t l_186 = 0x9EL;
                int8_t l_227 = (-1L);
                l_186 = ((0xBDD08413L > ((l_185 = ((l_174 = (0x91578ADDDDEF21ECLL != (((((safe_add_func_int32_t_s_s(p_48, (safe_rshift_func_uint16_t_u_u(p_48, 9)))) >= ((g_96 != p_48) <= (g_6 |= p_48))) < (safe_mod_func_uint64_t_u_u(g_81, (safe_mod_func_int8_t_s_s(g_130, 0x8FL))))) < 0x12D4483B5975D7C0LL) != g_81))) || 0x95L)) && 1L)) & l_157);
                g_105 = (l_227 = (p_48 | ((((g_81++) & l_74) >= 0UL) == (safe_sub_func_uint8_t_u_u(((safe_sub_func_int16_t_s_s((p_48 || (safe_sub_func_int8_t_s_s(((safe_div_func_int32_t_s_s(((((safe_mod_func_uint16_t_u_u(((safe_div_func_int32_t_s_s((safe_mod_func_int16_t_s_s((safe_mod_func_int16_t_s_s((l_185 | ((safe_lshift_func_int16_t_s_u(p_48, 9)) | (((safe_rshift_func_uint8_t_u_s((((safe_add_func_uint32_t_u_u((g_226 &= (safe_mod_func_int16_t_s_s((g_105 >= (g_225 = ((safe_rshift_func_uint8_t_u_s((l_174 & (safe_add_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_s(((((g_43 > g_130) <= g_105) & p_48) || 0x8454CA82L), l_74)) && g_6), p_48))), l_186)) == 0xECL))), g_44))), g_6)) ^ g_43) || g_104), g_44)) ^ 0x43EB6FFEL) != g_104))), 0xD3BAL)), g_44)), 0x588FA3BEL)) <= 0UL), g_44)) < p_48) <= 1UL) >= l_185), g_7)) >= p_48), 0x83L))), 0UL)) | l_186), 0x61L)))));
            }
            else
            {
                return p_48;
            }
            g_105 = ((0x83E9L ^ ((safe_lshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_s(((p_48 > ((safe_sub_func_uint8_t_u_u((((0x3397L < (((safe_sub_func_int8_t_s_s((p_48 >= l_63), ((safe_rshift_func_uint8_t_u_s(g_62, 7)) == (safe_sub_func_int8_t_s_s((((l_185 = p_48) < 0xDF31L) && (safe_div_func_int64_t_s_s((g_6 = (safe_rshift_func_int8_t_s_s(((!(g_225 ^= p_48)) && (-1L)), 6))), 6L))), 0L))))) && g_130) ^ 0x4BFDL)) == g_99) & l_245), g_81)) >= 255UL)) & 0xF8L), 5)), 6)) || p_48)) <= 0x683A1E9C1B1B48E1LL);
            if ((l_185 |= ((0x041843AEL > g_6) != (g_138 = g_226))))
            {
                g_105 = (g_65 | (safe_add_func_uint64_t_u_u((safe_unary_minus_func_int64_t_s(l_63)), 0x9B726C3776CDE9C4LL)));
                g_251--;
                return p_48;
            }
            else
            {
                uint64_t l_268 = 0x91009C59F809E697LL;
                int32_t l_275 = 0L;
                l_185 = (safe_sub_func_uint64_t_u_u((l_275 ^= ((safe_rshift_func_int8_t_s_u((((safe_add_func_int8_t_s_s((!(~1UL)), (~254UL))) ^ p_48) == (g_99 >= (safe_mod_func_uint64_t_u_u((l_64 &= (g_251 > ((l_265 && ((safe_rshift_func_uint16_t_u_u(l_268, ((safe_lshift_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_u((g_251 < (((safe_div_func_uint16_t_u_u((0xB16AD88BL & l_174), 0x5366L)) <= g_251) < 1UL)), 5)) && g_43), 10)) && l_156))) == l_174)) < p_48))), p_48)))), 3)) == p_48)), g_138));
                if ((g_105 = ((+(safe_sub_func_int16_t_s_s((((g_81 > (l_279 && (l_245 != (((0x3418026454160E17LL == (safe_sub_func_int64_t_s_s((safe_unary_minus_func_int8_t_s(((!(((g_87 || ((p_48 <= (l_174 = (l_268 & (g_99 = (safe_lshift_func_uint8_t_u_s(0x73L, 6)))))) < l_74)) | p_48) < p_48)) ^ l_64))), p_48))) && g_7) & g_7)))) <= 0xEB6DL) != l_279), (-2L)))) != 0x7462L)))
                {
                    int32_t l_306 = 0x62F4E5E3L;
                    l_174 = (safe_add_func_uint64_t_u_u(p_48, ((safe_mod_func_uint8_t_u_u((safe_unary_minus_func_int32_t_s((safe_mod_func_uint32_t_u_u((p_48 & (-1L)), ((((!((((((safe_div_func_int64_t_s_s(p_48, (safe_sub_func_uint64_t_u_u((g_104 ^ ((l_275 || (l_74 = (safe_lshift_func_int16_t_s_s(g_249, 6)))) == ((safe_lshift_func_uint8_t_u_s((g_138 ^= (((safe_div_func_int64_t_s_s(((l_185 |= 0x1BL) | (safe_rshift_func_int8_t_s_u((-1L), 5))), l_275)) | p_48) | l_306)), 6)) & 0xD714BD89L))), p_48)))) && l_245) < l_63) || g_138) ^ p_48) >= l_279)) > p_48) != p_48) || (-9L)))))), g_251)) != 5UL)));
                }
                else
                {
                    return g_65;
                }
                for (g_104 = 0; (g_104 == 51); ++g_104)
                {
                    int32_t l_331 = (-1L);
                    if (((p_48 = (safe_div_func_int64_t_s_s((((safe_unary_minus_func_uint64_t_u(l_245)) & g_105) && (safe_div_func_uint32_t_u_u((safe_rshift_func_int8_t_s_s(p_48, (safe_div_func_uint16_t_u_u((l_279 &= (((g_332 ^= (1UL > (((((safe_add_func_int64_t_s_s(0x83F161DF2DE5E56CLL, (safe_lshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_s((safe_mod_func_int16_t_s_s((g_250 ^= (!l_185)), (safe_mod_func_int64_t_s_s((1L == (g_87 ^ (g_6 = (safe_sub_func_int8_t_s_s(0xD1L, p_48))))), g_43)))), g_81)), g_249)))) > l_331) ^ 6UL) == 0x08D8L) || (-1L)))) || l_275) ^ 0L)), 0x16B0L)))), 0x56AE9782L))), g_81))) < l_331))
                    {
                        int8_t l_333 = 2L;
                        l_333 = l_275;
                        return p_48;
                    }
                    else
                    {
                        return g_65;
                    }
                }
            }
        }
    }
    g_105 = l_74;
    return p_48;
}
static int32_t func_51(int64_t p_52, int32_t p_53, uint32_t p_54, int8_t p_55, uint64_t p_56)
{
    uint32_t l_110 = 18446744073709551615UL;
    int32_t l_113 = 0xFC2FE0ECL;
    int32_t l_121 = (-2L);
    int32_t l_124 = 0x798ED4FFL;
    uint8_t l_125 = 0x32L;
    int32_t l_139 = 0x418DFC5AL;
    p_53 = ((safe_lshift_func_int16_t_s_u(((l_113 = (safe_add_func_uint32_t_u_u(l_110, (++p_54)))) < (p_55 &= (p_53 == (safe_rshift_func_uint16_t_u_u(l_110, (safe_lshift_func_int16_t_s_s(0xB0F8L, (~(l_110 > ((l_124 = (0x58F1L ^ ((((l_121 ^= 248UL) & (safe_lshift_func_int16_t_s_u(0x3D90L, 12))) <= p_52) > 1L))) || (-4L))))))))))), 2)) < l_110);
    l_124 &= ((l_125 = (l_110 > 0xADD0F33DL)) || (0x77EEL & (0xEAE4C08A2B653F56LL <= (l_121 = (g_43 >= l_113)))));
    l_139 ^= (((safe_mod_func_uint64_t_u_u((g_96 & p_54), 0x0D4DDF0F57B567EBLL)) <= ((((l_124 = g_44) < (p_53 && (safe_lshift_func_uint8_t_u_u(5UL, (g_130 = 0x47L))))) == ((safe_mod_func_uint64_t_u_u(((!(safe_mod_func_int16_t_s_s((l_121 = ((((safe_mod_func_uint64_t_u_u(18446744073709551615UL, (l_113 | g_87))) >= g_44) <= l_113) | l_125)), l_113))) != p_52), g_96)) ^ g_138)) < p_56)) > l_125);
    return l_125;
}
static uint8_t func_66(int64_t p_67, uint32_t p_68, uint32_t p_69, uint32_t p_70)
{
    int8_t l_95 = 0xBDL;
    int32_t l_102 = 0xE5D1C1BBL;
    int32_t l_103 = 0xAC79E06DL;
    l_102 ^= func_75((g_7 && (p_68 || ((((safe_rshift_func_int8_t_s_u(g_44, 2)) < (g_81 = 0x3567L)) && (g_96 ^= (safe_sub_func_uint8_t_u_u((+g_81), ((p_67 = ((g_87 = (p_70 <= (safe_rshift_func_int8_t_s_u(p_69, g_6)))) || (safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint16_t_u_s((safe_sub_func_uint64_t_u_u(((((+18446744073709551614UL) > 0xCF5EE2CBD03168F1LL) ^ 0UL) == 18446744073709551609UL), l_95)), l_95)), g_43)))) || l_95))))) == 0x86L))), l_95, g_7);
    return l_103;
}
static int32_t func_75(uint8_t p_76, uint16_t p_77, int32_t p_78)
{
    int64_t l_97 = (-1L);
    int32_t l_98 = 0x2DE1B453L;
    g_99++;
    return l_98;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_6;
    csmith_sink_ = g_7;
    csmith_sink_ = g_43;
    csmith_sink_ = g_44;
    csmith_sink_ = g_62;
    csmith_sink_ = g_65;
    csmith_sink_ = g_81;
    csmith_sink_ = g_87;
    csmith_sink_ = g_96;
    csmith_sink_ = g_99;
    csmith_sink_ = g_104;
    csmith_sink_ = g_105;
    csmith_sink_ = g_130;
    csmith_sink_ = g_138;
    csmith_sink_ = g_225;
    csmith_sink_ = g_226;
    csmith_sink_ = g_249;
    csmith_sink_ = g_250;
    csmith_sink_ = g_251;
    csmith_sink_ = g_332;
    csmith_sink_ = g_345;
    csmith_sink_ = g_401;
    csmith_sink_ = g_403;
    csmith_sink_ = g_404;
    csmith_sink_ = g_405;
    csmith_sink_ = g_418;
    csmith_sink_ = g_429;
    csmith_sink_ = g_430;
    csmith_sink_ = g_431;
    csmith_sink_ = g_433;
    csmith_sink_ = g_434;
    csmith_sink_ = g_436;
    csmith_sink_ = g_439;
    csmith_sink_ = g_510;
    csmith_sink_ = g_514;
    csmith_sink_ = g_516;
    csmith_sink_ = g_518;
    csmith_sink_ = g_559;
    csmith_sink_ = g_582;
    csmith_sink_ = g_583;
    csmith_sink_ = g_593;
    csmith_sink_ = g_623;
    csmith_sink_ = g_666;
    csmith_sink_ = g_667;
    csmith_sink_ = g_668;
    csmith_sink_ = g_672;
    csmith_sink_ = g_698;
    csmith_sink_ = g_699;
    platform_main_end(0,0);
    return 0;
}
