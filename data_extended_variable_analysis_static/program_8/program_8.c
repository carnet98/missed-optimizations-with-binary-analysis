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
static uint16_t g_2 = 0x6318L;
static uint32_t g_18 = 4294967289UL;
static uint8_t g_44 = 0x7EL;
static int32_t g_89 = 0x8FB8AAA8L;
static int8_t g_93 = 0x08L;
static int32_t g_111 = 0x71D51AD8L;
static uint32_t g_119 = 0x9CEB5183L;
static uint32_t g_145 = 6UL;
static int32_t g_161 = (-10L);
static uint32_t g_162 = 0x652714D0L;
static uint32_t g_171 = 9UL;
static int8_t g_194 = 0x47L;
static uint32_t g_201 = 4294967292UL;
static int64_t g_226 = 0xEA22E85F59071E43LL;
static uint64_t g_229 = 5UL;
static uint32_t g_232 = 0x6177B4B0L;
static uint64_t g_233 = 3UL;
static uint16_t g_252 = 0x872CL;
static uint32_t g_253 = 0x9D2B88D7L;
static uint32_t g_273 = 18446744073709551615UL;
static uint32_t g_343 = 0x1C3217EFL;
static int8_t g_346 = 0x21L;
static uint32_t g_348 = 1UL;
static int8_t g_354 = 0x0AL;
static uint8_t g_373 = 0UL;
static int32_t g_388 = 0x315CE64BL;
static uint64_t g_389 = 18446744073709551615UL;
static uint8_t g_421 = 0xD1L;
static int16_t g_503 = 0x9497L;
static uint8_t g_611 = 0xD2L;
static uint16_t g_798 = 65535UL;
static uint64_t g_874 = 3UL;
static uint32_t g_877 = 4294967292UL;
static uint32_t g_945 = 0x43081936L;
inline static uint64_t func_1(void);
static uint32_t func_11(uint32_t p_12, uint64_t p_13);
inline static uint16_t func_23(int32_t p_24, int64_t p_25, uint64_t p_26);
inline static int32_t func_32(int32_t p_33, uint32_t p_34, int16_t p_35, int32_t p_36);
static int32_t func_37(uint16_t p_38, uint16_t p_39, int8_t p_40, int16_t p_41, int32_t p_42);
inline static uint32_t func_47(int32_t p_48, int32_t p_49, uint32_t p_50, uint64_t p_51, int32_t p_52);
static uint16_t func_55(int32_t p_56, uint16_t p_57);
inline static uint16_t func_64(uint8_t p_65, uint8_t p_66, int32_t p_67, uint64_t p_68);
static int64_t func_82(int8_t p_83, uint8_t p_84, int16_t p_85);
static int8_t func_97(uint64_t p_98, uint8_t p_99, int32_t p_100, uint16_t p_101);
inline static uint64_t func_1(void)
{
    int32_t l_5 = 0xAB3E90A6L;
    int32_t l_892 = (-1L);
    uint32_t l_955 = 0x58EB3C0CL;
    int32_t l_981 = 1L;
    int32_t l_987 = 0xA1AE2D27L;
    int32_t l_990 = 0L;
    uint8_t l_1171 = 1UL;
    if (g_2)
    {
        int16_t l_14 = 0xC67EL;
        int32_t l_19 = 1L;
        uint32_t l_906 = 0UL;
        uint8_t l_921 = 253UL;
        int16_t l_1056 = 0x03DBL;
        int16_t l_1064 = (-1L);
        int16_t l_1065 = 1L;
        int16_t l_1090 = 0x9AA5L;
        int64_t l_1112 = 0x2DEF77FA1E043D83LL;
        if ((safe_lshift_func_int16_t_s_s((l_5 < (safe_lshift_func_int16_t_s_u(l_5, ((+(g_2 <= ((safe_rshift_func_uint16_t_u_s((func_11(((((0L || 0x90L) <= l_14) && (safe_lshift_func_uint8_t_u_u((((+(g_18 &= 0x55L)) >= ((g_2 || (l_19 = g_2)) | l_14)) >= g_2), g_2))) && g_2), g_2) || g_93), 0)) & l_14))) | 0x52D2EA41L)))), 9)))
        {
            int32_t l_851 = (-6L);
            l_5 = ((+(g_161 &= (-9L))) || (((0xE7AA64407A79DDECLL != (l_851 > (0x7C68L != (safe_mod_func_uint32_t_u_u((g_343 != l_5), (safe_rshift_func_uint16_t_u_u((g_2 = l_14), 12))))))) > (safe_mod_func_int64_t_s_s(0xAC97FF5235337B9BLL, (safe_lshift_func_uint16_t_u_u(((safe_add_func_int64_t_s_s(0x5BD87D7519951991LL, l_851)) | 1UL), 4))))) < 0L));
            l_5 = 0x5E57118FL;
            for (g_2 = 21; (g_2 == 43); g_2 = safe_add_func_uint16_t_u_u(g_2, 8))
            {
                uint64_t l_866 = 0xC25CABDD607CB69ELL;
                int32_t l_873 = 0L;
                l_873 = (safe_lshift_func_uint8_t_u_u(((l_866 || ((-7L) || (((safe_add_func_int32_t_s_s(l_866, (g_44 || l_851))) ^ (g_226 = ((safe_sub_func_int8_t_s_s(l_851, (((safe_lshift_func_uint16_t_u_u(l_5, g_348)) || ((g_389 | 0x7C20L) && 65535UL)) != g_93))) == 0x88F7L))) == l_5))) && g_273), 4));
                g_161 = (l_5 = g_194);
                ++g_874;
                l_851 ^= (-1L);
            }
        }
        else
        {
            int32_t l_886 = 0xE994D2E5L;
            int32_t l_932 = 0L;
            uint16_t l_954 = 0UL;
            int32_t l_959 = 0x15B850EAL;
            uint32_t l_971 = 4294967294UL;
            int32_t l_991 = 0xC61D6EBAL;
            uint8_t l_1032 = 0UL;
            int16_t l_1083 = 0xB8CBL;
            uint8_t l_1089 = 252UL;
            uint32_t l_1139 = 0x29C35713L;
lbl_922:
            ++g_877;
            if ((((safe_lshift_func_uint8_t_u_s(l_5, (g_93 = (l_19 = (safe_rshift_func_int16_t_s_s(((((((safe_unary_minus_func_int32_t_s(((+l_886) || g_145))) >= (g_226 = 0xBB0323B244EAF84ALL)) ^ (safe_sub_func_uint32_t_u_u((safe_unary_minus_func_int32_t_s(g_421)), (g_44 && (((safe_add_func_int64_t_s_s((l_892 &= (l_5 <= g_194)), ((safe_add_func_int64_t_s_s((g_44 || 0x07L), l_886)) != 0UL))) > l_14) & l_886))))) > g_388) > l_886) || g_171), g_503)))))) < 0x10L) || 0x8FD17BA15CE5BAE4LL))
            {
                int32_t l_907 = 0x7B73748AL;
                int32_t l_914 = 0L;
                int32_t l_919 = (-1L);
                uint32_t l_992 = 18446744073709551615UL;
                int32_t l_1031 = 6L;
                for (g_201 = (-20); (g_201 > 13); g_201++)
                {
                    uint32_t l_897 = 0xD81486F0L;
                    int8_t l_920 = 0L;
                    int32_t l_940 = 0x7DCF79EFL;
                    l_897++;
                    for (g_2 = 0; (g_2 != 28); g_2++)
                    {
                        uint8_t l_904 = 1UL;
                        int32_t l_939 = 0x42C2BDD7L;
                        g_111 ^= ((safe_mul_func_int64_t_s_s(l_904, ((~((g_89 > g_343) <= (l_906 < (l_907 < (safe_add_func_uint32_t_u_u((0xDEL == ((g_252--) == (l_907 <= (l_914 ^= l_907)))), (((safe_sub_func_uint32_t_u_u((safe_mod_func_uint64_t_u_u((l_919 = (0x4001578B5FB882C1LL < g_194)), g_162)), l_897)) && l_906) >= 0UL))))))) >= l_920))) <= l_921);
                        if (g_388)
                            goto lbl_922;
                        l_940 = (((safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(((safe_lshift_func_int16_t_s_s((l_897 < (((g_346 &= (l_19 &= (safe_mod_func_int16_t_s_s(((1L && (g_111 &= ((safe_unary_minus_func_int64_t_s(((((--g_611) == ((g_421 != (safe_mod_func_uint8_t_u_u(l_932, (1L ^ (((~(safe_unary_minus_func_uint16_t_u(((l_914 != (g_161 = g_354)) <= (l_892 | ((l_939 ^= g_421) < l_904)))))) != g_273) & l_897))))) && g_389)) || 4L) & l_904))) && g_389))) != g_233), g_253)))) >= g_229) <= l_892)), g_252)) | g_343), l_886)), 12)) && l_932) | 3L);
                        g_111 &= ((((safe_add_func_int16_t_s_s(l_5, ((((l_19 ^= 0x2385L) && 1UL) >= ((0x0C5D6087L != l_907) >= (l_955 = ((safe_rshift_func_int8_t_s_s(((g_945 == ((safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u(((l_940 = ((-1L) | (((safe_add_func_uint16_t_u_u(g_945, (safe_mod_func_uint16_t_u_u(g_874, l_954)))) != (-1L)) || l_919))) & g_252), 4)), 6)) <= g_798)) == 0xE8A6L), g_93)) || l_5)))) | g_252))) != g_162) & g_877) && g_161);
                    }
                    if ((g_798 & (safe_mod_func_uint8_t_u_u(((g_226 | (g_877 & ((0xBB1D7C1D2E2FC2EDLL >= l_954) > (g_229 || (safe_unary_minus_func_uint64_t_u(((0UL | g_343) | 0x3195L))))))) < l_955), g_201))))
                    {
                        uint8_t l_962 = 0xE1L;
                        uint32_t l_972 = 0x32D33D47L;
                        g_111 = ((((((l_959 && (safe_sub_func_int64_t_s_s((g_226 &= (l_962 ^ ((l_19 = (safe_sub_func_uint64_t_u_u((g_389 &= l_954), g_119))) == (((l_914 = 0x8B175244L) ^ ((safe_rshift_func_uint8_t_u_s(g_93, g_233)) >= ((l_940 = (safe_lshift_func_uint8_t_u_u((((((0L || (safe_rshift_func_uint16_t_u_u(((l_971 = g_273) || 0xA5D76EAFL), l_972))) > 0xA344AF3BL) & g_232) == g_233) | 0xE21D2142A8469030LL), 1))) >= 0x95BC93694FDF2B2CLL))) && g_611)))), g_232))) | l_954) > l_897) != g_503) >= 1UL) && l_920);
                        l_932 |= (safe_rshift_func_uint8_t_u_s((g_111 == 252UL), 4));
                    }
                    else
                    {
                        l_992 &= (!((safe_add_func_uint32_t_u_u((l_5 = (l_892 = l_914)), ((((!((l_981 = (safe_mod_func_int8_t_s_s(l_955, l_921))) >= g_232)) ^ g_421) | (safe_unary_minus_func_uint16_t_u((((g_373 ^ ((((g_119 < (((((safe_sub_func_uint16_t_u_u((g_798 = (safe_mod_func_int64_t_s_s((l_987 |= g_226), (l_990 ^= (safe_add_func_uint32_t_u_u(0UL, g_201)))))), 0L)) && g_253) <= 18446744073709551612UL) != l_907) >= l_991)) || 18446744073709551612UL) & 0xF42DCEDCL) | 1UL)) && g_945) != l_954)))) >= g_877))) ^ l_921));
                        if (g_388)
                            break;
                    }
                    g_161 = (((safe_sub_func_int16_t_s_s((safe_add_func_uint64_t_u_u(g_354, ((safe_rshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_u(((safe_mod_func_uint8_t_u_u(((safe_sub_func_int64_t_s_s((l_897 < (safe_rshift_func_int8_t_s_s(((l_940 = ((g_945 = 1UL) & ((!(safe_unary_minus_func_int32_t_s((safe_rshift_func_int16_t_s_s((safe_sub_func_int16_t_s_s((safe_add_func_uint32_t_u_u((((safe_add_func_uint16_t_u_u((g_2 &= 65532UL), (safe_sub_func_uint16_t_u_u((l_19 = (++g_252)), (g_503 = ((safe_mod_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u((l_906 >= g_119), 12)), (g_111 &= 0xB4300DF2L))) > ((((safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_s((((g_798 > (safe_mod_func_uint64_t_u_u(l_971, 0x9952CC96A9598130LL))) <= l_914) != l_897), 12)), 6)) > g_421) & l_921) | l_920))))))) < (-1L)) && g_229), 0x0377DE0AL)), g_389)), 5))))) >= 0x20A8L))) ^ g_421), l_1031))), (-6L))) <= g_421), l_1032)) || 0x0062281C74188F6FLL), 0)), 13)) < l_914))), l_1031)) == (-2L)) | g_273);
                }
                for (l_954 = 0; (l_954 != 28); l_954 = safe_add_func_int8_t_s_s(l_954, 1))
                {
                    int32_t l_1066 = 1L;
                    l_981 = (((((safe_add_func_uint16_t_u_u((safe_mod_func_int16_t_s_s(0x027AL, (safe_sub_func_int8_t_s_s((~g_229), (safe_sub_func_uint8_t_u_u((~l_907), (safe_sub_func_uint32_t_u_u((g_89 | (g_171 >= (+(g_252 = (safe_lshift_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((safe_sub_func_int16_t_s_s(((l_1056 ^= g_145) ^ (~(safe_sub_func_uint16_t_u_u((g_2 |= (g_798 &= l_19)), (((safe_add_func_int32_t_s_s(0x8E195D10L, (safe_sub_func_uint64_t_u_u(g_373, 0xFCFA535F60F591D6LL)))) || l_1064) | g_161))))), 1L)), l_14)), l_1065)))))), l_906)))))))), l_1066)) || g_252) >= (-1L)) | l_907) > 65535UL);
                    for (l_990 = (-2); (l_990 <= (-18)); l_990--)
                    {
                        uint64_t l_1071 = 18446744073709551606UL;
                        l_987 ^= ((-10L) < (g_226 = (safe_sub_func_int64_t_s_s(g_171, 3UL))));
                        l_1071 = l_1066;
                    }
                }
            }
            else
            {
                uint32_t l_1088 = 0UL;
                int32_t l_1111 = 0L;
                g_161 |= (g_111 = (((g_226 = (safe_unary_minus_func_int16_t_s((l_1089 &= (l_991 ^= (safe_lshift_func_uint16_t_u_s(((safe_sub_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u((safe_add_func_int16_t_s_s(((g_89 & (safe_mod_func_uint8_t_u_u(5UL, ((l_1083 & (safe_sub_func_uint16_t_u_u(g_877, 0x57B9L))) ^ 0x225BD84CF5F3CE70LL)))) > ((g_798 > l_987) <= (safe_sub_func_uint8_t_u_u(l_971, l_1088)))), g_388)), l_971)), g_119)) == l_14), 8))))))) < l_1090) ^ g_354));
                l_1112 = (l_959 ^ (safe_rshift_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u(((g_346 ^= (!((safe_mod_func_int16_t_s_s((l_1111 &= (safe_lshift_func_uint8_t_u_u(((g_161 < (g_798--)) <= (l_981 = ((g_389 || (g_389 > 0x36CB20C6AF1AD3B7LL)) ^ (+(((g_2 = (g_252 ^= (safe_sub_func_int8_t_s_s(l_955, ((safe_lshift_func_int16_t_s_s(g_343, (g_503 &= ((safe_lshift_func_int8_t_s_u(((3UL != (safe_mod_func_int8_t_s_s(((0x9FL & 0xCEL) || l_14), g_201))) == l_954), g_226)) || g_877)))) && (-1L)))))) <= l_1088) || l_1032))))), 5))), l_892)) <= l_1089))) && (-2L)), 0UL)) & 0x61L), 10)));
                l_1111 = ((safe_lshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_u(((((g_346 >= (g_2 ^ g_145)) != (safe_rshift_func_int16_t_s_u(((g_798 = g_89) & (safe_mod_func_uint32_t_u_u(((l_886 == (safe_mod_func_int8_t_s_s(l_990, ((!(safe_rshift_func_int16_t_s_s(2L, 0))) && ((g_343 < l_981) <= l_1088))))) < l_1112), g_161))), g_388))) < g_162) > g_232), 3)), g_162)) ^ l_981);
            }
            for (l_987 = 26; (l_987 < 19); --l_987)
            {
                uint16_t l_1144 = 1UL;
                l_19 = (-3L);
                g_161 = (g_2 > ((safe_mod_func_uint8_t_u_u((((((0x987EL | (~((safe_sub_func_uint32_t_u_u(g_421, (-1L))) < l_954))) <= ((9UL | ((safe_sub_func_int8_t_s_s((g_93 |= l_987), ((safe_lshift_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_s((0x9A59603DL != 0L), 2)) & 8UL), l_1139)) != 0x609B8167L))) || l_14)) != g_273)) || g_111) >= g_354) <= g_229), g_877)) == 6L));
                g_111 = ((safe_lshift_func_uint16_t_u_u(((safe_mod_func_int64_t_s_s(l_1144, (safe_add_func_uint64_t_u_u(((safe_mod_func_uint32_t_u_u(((safe_rshift_func_int8_t_s_u(g_252, (((l_1144 || l_1144) | (!(safe_lshift_func_uint8_t_u_s(255UL, 1)))) | (safe_sub_func_uint64_t_u_u((l_981 = (0x0550E373L == l_1144)), l_1144))))) >= (safe_lshift_func_int16_t_s_s((safe_add_func_int64_t_s_s(((safe_unary_minus_func_int16_t_s(l_14)) != 0x60F7L), 0x46853C848B0DD09BLL)), g_89))), g_346)) >= g_343), g_119)))) ^ (-8L)), 3)) | l_1144);
            }
        }
        for (g_145 = 0; (g_145 < 27); g_145 = safe_add_func_int16_t_s_s(g_145, 1))
        {
            return g_226;
        }
    }
    else
    {
        uint32_t l_1163 = 0x41BF96E4L;
        l_1163 |= g_343;
        l_5 = (((g_354 && ((1L >= (~(safe_add_func_int16_t_s_s((safe_sub_func_int16_t_s_s(((g_171 & g_145) == (safe_mod_func_uint16_t_u_u((l_1171 = g_232), (safe_mod_func_uint8_t_u_u((((((safe_lshift_func_int16_t_s_s(((0xE40FA7B87D98E64CLL | (--g_874)) != (safe_add_func_uint64_t_u_u((!(safe_mod_func_int32_t_s_s((g_226 != (g_93 = (g_354 = (-1L)))), l_1163))), g_252))), g_161)) < g_194) & 5L) == g_18) != g_877), l_1163))))), g_348)), l_955)))) >= l_990)) & 0UL) && g_232);
    }
    return g_354;
}
static uint32_t func_11(uint32_t p_12, uint64_t p_13)
{
    uint64_t l_27 = 0x31EA0627E80A7C6DLL;
    int32_t l_794 = 0xC741F419L;
    int32_t l_797 = (-5L);
    int8_t l_811 = 1L;
    if ((g_2 | ((safe_add_func_int16_t_s_s(0xC7C4L, (safe_unary_minus_func_uint8_t_u(g_2)))) >= func_23(l_27, (((safe_add_func_uint32_t_u_u(((safe_mod_func_int32_t_s_s(((1UL <= func_32(g_18, g_18, p_12, g_2)) == 0UL), l_27)) > g_2), g_2)) <= g_2) & 0L), p_13))))
    {
        int32_t l_795 = 0x44D12640L;
        int32_t l_796 = 1L;
        g_798--;
        l_794 = (safe_sub_func_int32_t_s_s(p_12, (~(safe_lshift_func_uint16_t_u_u((safe_add_func_int32_t_s_s(l_795, p_12)), 2)))));
        l_797 = 0L;
    }
    else
    {
        uint16_t l_808 = 0x50A2L;
        int32_t l_832 = 0xEBD60AD7L;
        int16_t l_838 = 8L;
lbl_833:
        ++l_808;
        if (l_811)
        {
            int8_t l_825 = 0x21L;
            int32_t l_826 = (-5L);
            int32_t l_827 = (-1L);
            l_832 &= (safe_lshift_func_int8_t_s_u((0x58A1L ^ (((l_797 = (safe_lshift_func_int16_t_s_s(((((safe_sub_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(((safe_sub_func_uint8_t_u_u((+(18446744073709551607UL < g_119)), (3UL <= (l_826 = l_825)))) == (l_827 |= l_808)), (safe_rshift_func_int16_t_s_s((0x1562L < p_12), (((safe_sub_func_int16_t_s_s(l_808, l_797)) == 4294967295UL) <= p_13))))), l_808)), g_798)) == p_13) == l_808) > 0x5E57L), l_808))) & 0xA94C3E1F6E45B62ALL) < l_27)), g_162));
            if (g_2)
                goto lbl_834;
            return p_12;
        }
        else
        {
lbl_834:
            if (g_93)
                goto lbl_833;
            l_797 |= ((p_13 < 0x5EC1L) && ((g_354 ^= ((+(safe_sub_func_int16_t_s_s(((g_373 | 6UL) ^ l_838), ((safe_add_func_uint64_t_u_u((safe_unary_minus_func_int16_t_s(((((((0x916B2097L != ((safe_add_func_int64_t_s_s(l_811, (safe_lshift_func_int16_t_s_u(((l_832 = (safe_lshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_u(p_13, 2)), 1))) != (((((1UL || 0x1382L) != 6UL) == 18446744073709551615UL) > l_794) | p_13)), l_838)))) || p_12)) >= g_373) != p_13) <= 0x06F7607DL) >= 0xCAB14CE9L) ^ g_93))), l_811)) && l_808)))) && 0xBEL)) < 0UL));
        }
    }
    return p_12;
}
inline static uint16_t func_23(int32_t p_24, int64_t p_25, uint64_t p_26)
{
    uint32_t l_793 = 0x2A8D5DF4L;
    g_161 = (p_24 &= (-1L));
    return l_793;
}
inline static int32_t func_32(int32_t p_33, uint32_t p_34, int16_t p_35, int32_t p_36)
{
    int64_t l_43 = 1L;
    int32_t l_62 = 0x30B54543L;
    uint32_t l_614 = 0xDC753CE2L;
    int32_t l_648 = 0x1CCB8855L;
    int32_t l_649 = 0x141089C8L;
    int32_t l_650 = (-8L);
    int64_t l_658 = 0xDA1600E4EE1541A4LL;
    uint64_t l_660 = 18446744073709551615UL;
    int32_t l_726 = 0x046CC358L;
    int16_t l_777 = 1L;
    g_611 = func_37(l_43, (g_44 &= p_34), l_43, l_43, (p_33 = ((safe_rshift_func_uint16_t_u_u(l_43, (((0L != func_47((safe_rshift_func_int8_t_s_u((l_43 < (l_62 = func_55((0L >= (safe_rshift_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((l_43 >= l_62), p_34)), 5))), l_43))), p_34)), p_33, g_226, l_43, l_43)) == 65530UL) < p_33))) && p_33)));
    p_33 = (((g_421 != (safe_rshift_func_int8_t_s_u(l_43, 2))) != l_614) < ((((l_62 = (safe_mod_func_uint8_t_u_u(((safe_unary_minus_func_int64_t_s((safe_rshift_func_uint16_t_u_u((((((((l_614 > ((safe_add_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u((((safe_lshift_func_uint16_t_u_s(l_62, 4)) != ((((g_611 = (p_36 != (g_233 = (safe_unary_minus_func_uint64_t_u(l_62))))) <= (((safe_add_func_uint8_t_u_u(255UL, (-8L))) | 0x48L) ^ p_34)) && p_34) > 0xD05D88306CF942CELL)) == 0xD46DL), 1)), 0x9CDA6642L)) <= g_388)) & g_389) ^ 0xF5EBA1C6L) <= g_201) && l_62) || 0UL) >= p_36), g_503)))) ^ g_162), l_614))) & g_93) >= p_35) & l_43));
    if ((((3L && ((l_650 = ((g_233 >= (safe_lshift_func_int16_t_s_s((g_503 &= (l_649 |= (p_35 != (safe_sub_func_uint64_t_u_u((l_62 = (((l_648 |= (0x43L & (safe_add_func_uint16_t_u_u((g_252 = ((~((g_226 = ((((((safe_add_func_uint16_t_u_u(p_35, ((safe_rshift_func_int16_t_s_u((safe_sub_func_uint64_t_u_u(0x9AA10C5DAC79A2B3LL, (safe_add_func_uint32_t_u_u(((g_346 &= (((l_62 || g_388) != (safe_lshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_u(l_62, 0)), g_201))) & p_35)) >= p_34), p_33)))), l_43)) <= l_43))) == (-8L)) <= g_343) >= l_43) | 1L) | 0x90L)) | l_43)) >= l_614)), g_273)))) & 0x6BF709E3L) <= g_18)), 0xBD7691855961EB2ELL))))), 0))) | 0x2488F7222C98856ALL)) | l_43)) == p_33) | g_145))
    {
        int64_t l_657 = 0x94364CBF23521C5DLL;
        uint64_t l_659 = 0UL;
        for (g_119 = 0; (g_119 == 29); g_119 = safe_add_func_uint64_t_u_u(g_119, 3))
        {
            if (p_34)
                break;
        }
        g_111 = g_373;
        g_111 = (safe_lshift_func_int8_t_s_u((g_161 > ((safe_mod_func_int64_t_s_s((((l_62 = (l_657 || g_611)) ^ (g_2 >= (l_648 && l_658))) && ((((-10L) ^ (0x082F2892L && (l_659 == 0x9CE9L))) ^ g_162) <= 18446744073709551610UL)), l_649)) < (-1L))), g_89));
    }
    else
    {
        uint32_t l_676 = 18446744073709551615UL;
        uint8_t l_681 = 1UL;
        int32_t l_782 = 0x277B6C02L;
        l_660--;
        for (g_388 = 0; (g_388 >= (-26)); g_388 = safe_sub_func_int8_t_s_s(g_388, 5))
        {
            int32_t l_671 = (-1L);
            int32_t l_672 = 0L;
            int16_t l_675 = 0xDB8FL;
            l_649 = ((safe_lshift_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_s((safe_add_func_int8_t_s_s(0xC7L, (l_671 ^= (p_35 | 0x9869L)))), l_660)) == l_672), 5)) <= (safe_add_func_int8_t_s_s(0x1FL, l_675)));
            p_33 &= 1L;
            l_676--;
            if ((l_676 && g_346))
            {
                uint64_t l_752 = 0xB7A54E828D17BC6ALL;
                int32_t l_769 = (-5L);
                p_33 = (((((safe_lshift_func_int16_t_s_s(l_681, ((safe_rshift_func_uint8_t_u_s(246UL, p_33)) == (g_503 = ((safe_add_func_int16_t_s_s((l_650 = (p_34 <= (safe_rshift_func_uint16_t_u_u((p_34 < (g_161 &= (safe_mod_func_int8_t_s_s(0L, (safe_rshift_func_int16_t_s_u((0xFAA5EABDL || g_201), p_35)))))), 15)))), p_34)) & g_373))))) || g_389) < 0x66L) & l_681) <= l_676);
                for (l_648 = 22; (l_648 < (-23)); --l_648)
                {
                    int8_t l_707 = 0x4EL;
                    int32_t l_720 = 0x857043FEL;
                    int8_t l_721 = 2L;
                    p_33 = (safe_sub_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_s((safe_sub_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(p_35, (l_720 = (p_36 != (safe_rshift_func_int8_t_s_u((g_145 >= (+(l_707 == (safe_unary_minus_func_uint8_t_u((~(g_252 |= (g_611 && ((safe_sub_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u((((0x84L | (((safe_lshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u((g_346 <= ((((l_707 & (safe_add_func_int8_t_s_s((((0L < p_36) <= 0UL) < 0x7CL), g_373))) || g_354) <= g_343) && g_229)), p_35)), g_111)) > l_658) ^ g_226)) <= g_18) != 0x5D03L), l_707)), (-1L))) & p_35))))))))), g_145)))))), p_34)), 7)) && l_681), l_721)), g_346));
                    if (((((l_62 | (safe_mod_func_uint8_t_u_u((+g_171), ((p_36 <= (+((((l_672 <= ((g_161 = (((((p_34 && g_44) | 0x40FDL) || (p_33 && 0x4206B83DL)) >= g_389) != g_233)) || g_346)) <= 1UL) | g_388) == p_34))) ^ g_346)))) || l_681) < p_34) < 0x875EL))
                    {
                        return l_726;
                    }
                    else
                    {
                        return l_726;
                    }
                }
                for (g_162 = 0; (g_162 != 12); g_162++)
                {
                    uint16_t l_729 = 0xDAD8L;
                    int8_t l_751 = 0L;
                    int32_t l_768 = 4L;
                    l_729++;
                    g_161 = (((safe_lshift_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(((safe_mod_func_int64_t_s_s((safe_rshift_func_int16_t_s_s(g_145, (safe_add_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(0x85L, 3)), (l_752 = (safe_sub_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(((l_676 == 5UL) && (+((g_145 | (safe_rshift_func_uint8_t_u_u((((((0L != p_36) != p_33) >= p_34) > l_751) ^ 0xDC25C0CCE68AC021LL), 6))) <= l_751))), g_503)), p_36))))))), p_35)) || g_229), 0x7EL)), 2)) > p_36) >= g_44);
                    l_769 ^= (l_768 ^= (safe_add_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u(((g_89 <= ((safe_sub_func_int32_t_s_s((safe_mod_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u((((safe_rshift_func_int8_t_s_s((~(safe_rshift_func_int16_t_s_u((p_35 = g_44), ((l_752 && 1L) | (g_89 || l_726))))), 2)) > p_33) & p_34), l_751)), p_36)), g_44)) || 0xFB84L)) | 0x8D10BD94162B7BD7LL), g_2)), 65535UL)));
                    g_161 &= ((g_252--) ^ p_35);
                }
            }
            else
            {
                int64_t l_776 = 0x891E4445486C4828LL;
                int32_t l_789 = 0xC3FC3822L;
                int32_t l_792 = 2L;
                l_672 = (safe_mod_func_int16_t_s_s((safe_mod_func_uint8_t_u_u(l_776, l_777)), (safe_rshift_func_uint8_t_u_u(0xF9L, (0x01L || (((((l_650 |= ((safe_sub_func_int16_t_s_s(((l_782 = 0x58AE40B88A21464ALL) | ((safe_rshift_func_uint8_t_u_u(l_681, (l_792 = (safe_add_func_uint16_t_u_u(((safe_sub_func_int32_t_s_s(p_36, (l_789 = p_34))) > ((((safe_rshift_func_uint16_t_u_u((0xF5L | p_33), g_201)) | 0xF092L) > g_343) || g_229)), g_389))))) & p_36)), l_681)) && p_36)) || 0x60C1L) > g_373) >= g_233) && p_35))))));
            }
        }
    }
    return g_421;
}
static int32_t func_37(uint16_t p_38, uint16_t p_39, int8_t p_40, int16_t p_41, int32_t p_42)
{
    int16_t l_351 = 9L;
    int32_t l_355 = (-4L);
    int32_t l_362 = 0xBEB1CB8AL;
    int32_t l_561 = 0x79B07E79L;
    uint16_t l_608 = 0xAB95L;
    g_111 &= l_351;
    for (p_42 = 0; (p_42 >= 23); p_42++)
    {
        int8_t l_360 = 0L;
        int32_t l_361 = 4L;
        if (l_351)
            break;
        l_362 = ((((l_355 ^= ((g_354 <= g_111) >= p_42)) ^ l_351) || (safe_add_func_uint64_t_u_u(g_232, p_40))) ^ (safe_sub_func_int64_t_s_s((l_360 | l_361), ((p_39 ^= p_42) ^ p_42))));
        if ((2L && (g_93 = ((((safe_rshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_u((l_362 > g_2), (safe_mod_func_int64_t_s_s((safe_sub_func_uint16_t_u_u((++g_252), (l_355 = (--g_373)))), l_362)))), 3)) || (((safe_mod_func_int16_t_s_s(0L, (p_42 || (safe_rshift_func_int16_t_s_u(((safe_mod_func_int16_t_s_s(((safe_mod_func_int32_t_s_s((+0x6F4DL), 0xD7926888L)) && 0L), 0xC520L)) != g_93), 10))))) == p_42) ^ l_360)) <= 18446744073709551615UL) >= g_194))))
        {
            return l_351;
        }
        else
        {
            if (l_360)
            {
                int32_t l_387 = (-8L);
                for (p_40 = 24; (p_40 <= (-14)); --p_40)
                {
                    return l_387;
                }
                if (l_355)
                    break;
            }
            else
            {
                return p_42;
            }
            if (g_93)
                continue;
            g_389--;
        }
    }
    if ((!p_39))
    {
        uint64_t l_395 = 3UL;
        int32_t l_402 = (-3L);
        int8_t l_422 = (-10L);
        uint8_t l_423 = 254UL;
        int32_t l_424 = 0x00C48DCCL;
        int32_t l_441 = 2L;
        int32_t l_442 = (-1L);
        for (g_389 = 0; (g_389 >= 51); g_389 = safe_add_func_int16_t_s_s(g_389, 7))
        {
            --l_395;
        }
        p_42 = (((safe_mod_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s(((65530UL || (l_402 = 0xBD20L)) || (l_423 = ((safe_rshift_func_int8_t_s_u((18446744073709551615UL != ((((safe_mod_func_uint32_t_u_u((0x42E3L || (p_38 == (safe_mod_func_uint32_t_u_u(((safe_lshift_func_uint8_t_u_u(((safe_mod_func_int8_t_s_s((l_362 = (safe_sub_func_int64_t_s_s(((g_421 = (((p_41 = (safe_add_func_uint32_t_u_u(g_229, (p_41 ^ (safe_mod_func_int32_t_s_s(((safe_add_func_int64_t_s_s((255UL > (p_40 <= 0x3FL)), l_355)) || g_346), g_194)))))) & p_40) || l_395)) || g_2), 0xB01F773235E0E7B4LL))), 9UL)) >= 0xE93B77E516BBA437LL), p_38)) ^ l_355), 4294967291UL)))), l_422)) <= 18446744073709551607UL) || g_253) & (-7L))), 5)) != g_354))), 0)), l_424)) ^ l_351) || l_362);
        g_161 = (safe_mod_func_uint64_t_u_u((safe_sub_func_uint32_t_u_u((safe_add_func_int64_t_s_s((l_442 |= ((g_273 == l_424) <= ((((safe_rshift_func_uint16_t_u_s((p_38 != (0x874894D46530D641LL ^ ((!0x9E10L) == (safe_rshift_func_uint16_t_u_u((((p_42 ^ (safe_rshift_func_int16_t_s_u((((safe_add_func_int16_t_s_s((+((g_421 | p_39) & ((((l_402 ^= ((0x812CA253L || l_441) <= l_355)) & 7L) >= l_422) != g_89))), 0L)) > (-8L)) == g_253), p_41))) | l_362) > 0x97EF2E56L), 12))))), p_39)) >= l_362) && p_40) | g_354))), l_362)), l_423)), p_40));
    }
    else
    {
        int64_t l_463 = 6L;
        int32_t l_468 = 0xE8B8BF44L;
        int16_t l_476 = 0xCE66L;
        uint32_t l_477 = 18446744073709551606UL;
        if (p_38)
        {
            uint32_t l_475 = 0x3A1E4A67L;
            uint16_t l_518 = 0UL;
            int32_t l_554 = 0x156664ACL;
            for (g_89 = 0; (g_89 >= 3); g_89 = safe_add_func_uint64_t_u_u(g_89, 9))
            {
                int32_t l_447 = 0xED6FE85BL;
                int32_t l_462 = 0xC5D144D0L;
                int32_t l_474 = 0x092F00DDL;
                g_111 = (safe_add_func_int64_t_s_s((l_447 || ((l_355 = (safe_sub_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(p_39, p_39)), 4UL))) == p_39)), p_40));
                p_42 = (safe_sub_func_uint64_t_u_u((p_41 < ((safe_add_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((safe_add_func_int8_t_s_s((((l_462 = 0x58F5251EB5ED7D3DLL) >= (l_463 = g_232)) != 0UL), ((safe_rshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s(p_42, 7)), l_468)) != (safe_lshift_func_int16_t_s_s(((l_474 = ((safe_unary_minus_func_int32_t_s((safe_lshift_func_int16_t_s_s((p_40 < p_41), 1)))) || p_38)) <= (-1L)), 10))))), 7)), l_468)), 0xCCL)) | p_40)), p_38));
                l_475 = 7L;
            }
            ++l_477;
            l_362 = (((+(~0UL)) == (0xB5B278B60CCDDFB4LL | (l_355 = (((safe_mod_func_int8_t_s_s(((g_373 | ((p_42 = (l_355 > g_346)) <= (safe_add_func_int8_t_s_s((g_354 = (0x924B5834L && g_89)), p_40)))) ^ (((safe_add_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s((l_475 >= g_233), g_373)), 255UL)) >= 0x2A01L) > p_40)), p_40)) ^ g_2) <= 0L)))) >= g_253);
            for (g_233 = 0; (g_233 == 19); g_233++)
            {
                uint64_t l_513 = 0UL;
                uint32_t l_514 = 0x6FEEA5F8L;
                int32_t l_544 = (-4L);
                p_42 = (((p_40 ^ (-6L)) & (safe_sub_func_int16_t_s_s((((((g_171 ^ (l_475 < (g_503 = (((p_40 ^ (safe_lshift_func_int8_t_s_s(g_232, (g_2 <= (!(((g_389 || (safe_mod_func_int16_t_s_s(((p_41 ^ 0x27C93727L) && 0x9DL), p_42))) || g_171) & l_475)))))) != g_89) > l_351)))) ^ g_162) < 4294967295UL) == l_475) >= 0xFB127619L), l_362))) < 0x6C52A4E9850E9C84LL);
                for (g_226 = 0; (g_226 >= 12); ++g_226)
                {
                    uint32_t l_517 = 0x18198BDFL;
                    g_111 = p_40;
                    l_518 ^= ((((!(g_162 = ((l_517 |= ((g_229 = ((p_41 = 0x0055L) < ((safe_add_func_int64_t_s_s((0x48E914F0L < ((safe_mod_func_int8_t_s_s(p_42, ((safe_add_func_uint16_t_u_u((l_513 = 0x03D2L), l_514)) ^ (l_514 && (safe_lshift_func_int8_t_s_s(p_42, g_389)))))) && 0x9A0BE3B217493E90LL)), p_39)) ^ l_475))) != p_39)) >= g_226))) != l_475) && l_517) ^ p_42);
                    if (g_194)
                        break;
                }
                for (g_229 = (-18); (g_229 == 21); g_229++)
                {
                    int32_t l_535 = 0x81D166E6L;
                    int32_t l_552 = (-8L);
                    for (l_351 = 0; (l_351 <= 0); l_351++)
                    {
                        l_468 = (safe_add_func_int8_t_s_s((0xD5C8L == (safe_add_func_int32_t_s_s((0UL <= ((g_162 = ((l_476 || ((safe_sub_func_uint16_t_u_u((p_38 = p_39), ((safe_rshift_func_uint8_t_u_s(p_39, (safe_sub_func_uint32_t_u_u(((l_475 && (p_42 < g_253)) ^ (safe_sub_func_int8_t_s_s((0xBC6D4CECL && 0x9772731BL), p_42))), p_40)))) && l_513))) | l_514)) > p_39)) <= l_535)), g_252))), g_346));
                    }
                    for (g_273 = 0; (g_273 >= 23); g_273++)
                    {
                        uint8_t l_538 = 255UL;
                        int32_t l_553 = 1L;
                        l_538++;
                        p_42 = (0UL <= ((l_544 = (((+p_39) ^ (g_252++)) != 6L)) && (((l_477 ^ ((safe_rshift_func_int8_t_s_s((p_40 ^= g_229), ((255UL && ((l_554 = ((+((safe_add_func_uint64_t_u_u(g_119, (l_553 = ((safe_lshift_func_int16_t_s_s((-1L), 10)) & (l_552 = 0xB1F90554811B1D72LL))))) != p_41)) & p_42)) <= g_89)) != l_351))) && g_111)) <= p_41) < l_513)));
                    }
                    g_161 &= (((g_111 == (l_561 &= (safe_lshift_func_uint8_t_u_s((((l_475 > (safe_add_func_uint64_t_u_u(((safe_sub_func_uint16_t_u_u(((0xE32CL || p_38) < (l_477 != ((-1L) <= g_145))), (-1L))) == p_38), l_475))) | p_41) | 0x78L), 6)))) ^ p_40) >= l_468);
                    g_111 ^= (l_535 == p_42);
                }
                g_111 = 0x5A17DCD4L;
            }
        }
        else
        {
            uint8_t l_580 = 0UL;
            int32_t l_584 = 0xD67096F6L;
            for (g_229 = 28; (g_229 != 25); g_229--)
            {
                uint16_t l_566 = 0x409CL;
                l_584 = (safe_sub_func_uint32_t_u_u(l_566, ((safe_lshift_func_int16_t_s_u((p_41 = ((safe_add_func_uint16_t_u_u(0x299FL, ((safe_sub_func_int8_t_s_s((~((+p_41) | 4294967295UL)), ((p_40 = (safe_unary_minus_func_int16_t_s((safe_mod_func_int32_t_s_s((p_41 == (safe_rshift_func_int8_t_s_u(l_580, p_40))), 4294967289UL))))) | (!(safe_rshift_func_int8_t_s_s(p_38, g_194)))))) & l_580))) && l_561)), p_38)) != l_561)));
                p_42 = (((((safe_sub_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s(((safe_unary_minus_func_uint8_t_u(g_252)) >= g_44), (g_93 = ((((0x7248L ^ ((((safe_lshift_func_int8_t_s_u((safe_mod_func_int16_t_s_s((-1L), (safe_mod_func_int8_t_s_s((0x5FDF3245BCAAE953LL != ((safe_lshift_func_int16_t_s_u(((!((((((((safe_unary_minus_func_uint32_t_u((((safe_add_func_int32_t_s_s((safe_add_func_int64_t_s_s((((l_476 || (g_389 = (safe_sub_func_int64_t_s_s((-1L), (l_566 <= (safe_lshift_func_int8_t_s_u((p_42 <= g_194), g_194))))))) == g_354) >= g_373), 0L)), g_346)) <= 0x20L) > 0x26CEL))) != 0x46E4AA0FAB284F15LL) & p_40) && g_93) & 0x848BL) >= p_40) >= l_584) || p_40)) && g_161), 12)) != (-7L))), 0x03L)))), 1)) && p_39) != l_608) & g_145)) && l_477) && g_373) && 0xFDL)))), p_40)) && l_580) >= (-6L)) && 2UL) <= g_273);
                g_111 = g_145;
            }
        }
    }
    g_161 = (safe_rshift_func_uint8_t_u_s((g_93 != (65535UL && p_41)), 1));
    return g_201;
}
inline static uint32_t func_47(int32_t p_48, int32_t p_49, uint32_t p_50, uint64_t p_51, int32_t p_52)
{
    int32_t l_301 = 0xE85B1127L;
    uint8_t l_323 = 0xB9L;
    int32_t l_337 = 0xA6C8DEDFL;
    int32_t l_338 = 0x8BD1D58CL;
    int32_t l_340 = 2L;
    if ((safe_lshift_func_uint16_t_u_s(l_301, p_52)))
    {
        return g_229;
    }
    else
    {
        uint32_t l_310 = 0x8C7DFA00L;
        int8_t l_321 = (-8L);
        int32_t l_336 = 0xFF81F1C5L;
        int32_t l_339 = (-1L);
        int32_t l_347 = 3L;
        for (g_89 = 10; (g_89 != (-10)); --g_89)
        {
            int16_t l_313 = 0L;
            uint32_t l_322 = 4UL;
            uint16_t l_334 = 0xB91CL;
            int32_t l_335 = 0xC6787789L;
            int32_t l_341 = 6L;
            int64_t l_342 = 0x39DF6DFC4E5ABEBFLL;
            g_111 |= ((((((safe_add_func_uint64_t_u_u((((((safe_mod_func_uint32_t_u_u(((safe_add_func_int16_t_s_s((l_310 == (safe_rshift_func_int16_t_s_s((((((((((l_313 = p_49) && (l_313 && l_301)) || (((safe_rshift_func_int16_t_s_s((l_313 & ((l_301 < (+((safe_mod_func_uint64_t_u_u((((l_301 <= (0x9E38342FEDE261F0LL && ((safe_rshift_func_int8_t_s_u(g_162, l_301)) <= g_194))) <= g_161) && p_51), 0x52FFC3B98C0DEAB1LL)) > l_321))) <= 255UL)), l_313)) < p_51) <= p_52)) ^ l_322) ^ g_89) && g_145) | g_273) != p_50) && 0x1C23L), l_322))), l_322)) < 0x0492L), 0x4D6C543CL)) >= 65527UL) ^ l_301) | l_323) & 0L), g_119)) == 0L) ^ p_52) == g_232) || l_301) == g_93);
            p_49 = (safe_sub_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(0x7610L, (l_321 | (g_162 != (safe_rshift_func_int8_t_s_u(l_323, 1)))))), (safe_mod_func_int8_t_s_s((g_194 = (3L < p_50)), (l_335 = (safe_add_func_uint16_t_u_u(l_313, l_334)))))));
            g_343++;
            ++g_348;
        }
    }
    return l_337;
}
static uint16_t func_55(int32_t p_56, uint16_t p_57)
{
    int32_t l_63 = 0x3686A8E7L;
    int32_t l_79 = 0x446CA37EL;
    int32_t l_80 = 0xA26B1312L;
    uint8_t l_204 = 2UL;
    p_56 = ((p_57 || 250UL) <= (l_63 < (func_64(p_57, (((safe_add_func_int16_t_s_s((safe_add_func_int8_t_s_s(((-1L) && (safe_rshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_s((l_80 = (l_63 > (l_79 = (safe_add_func_uint32_t_u_u(g_18, l_63))))), 14)), (safe_unary_minus_func_uint16_t_u(((func_82(((safe_lshift_func_int16_t_s_s(0xBE56L, p_56)) >= g_18), g_2, p_56) || 0xE1C95C5D00D04547LL) || 0UL)))))), 0UL)), l_63)) || p_56) < p_56), p_57, l_204) == p_57)));
    return g_253;
}
inline static uint16_t func_64(uint8_t p_65, uint8_t p_66, int32_t p_67, uint64_t p_68)
{
    int32_t l_207 = (-1L);
    int32_t l_222 = 0x0889BAE7L;
    int32_t l_225 = 6L;
    int32_t l_227 = 1L;
    int32_t l_228 = 0x41016036L;
    int32_t l_234 = 0x0C375795L;
    int32_t l_251 = 0xAD141778L;
    uint16_t l_267 = 1UL;
    uint32_t l_272 = 0xAECDC9E8L;
    g_111 = (0x1E0CC641L && 4294967293UL);
    l_234 = (safe_mod_func_int64_t_s_s(((l_207 < ((safe_add_func_uint32_t_u_u((safe_sub_func_int8_t_s_s(((safe_mod_func_uint8_t_u_u(0x42L, (safe_sub_func_uint8_t_u_u((18446744073709551608UL > ((l_227 ^= ((g_233 = (p_67 ^ ((l_225 ^= (l_228 = (g_171 <= ((safe_add_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_s(p_65, (safe_add_func_int64_t_s_s((((l_222 = g_18) < (p_66 | (safe_rshift_func_uint8_t_u_s((g_229++), (((g_232 |= 65528UL) >= g_171) == p_67))))) ^ l_207), 2UL)))) | 4294967289UL), 9L)) | l_207)))) != 1UL))) ^ g_171)) ^ (-1L))), 0L)))) != l_207), 249UL)), l_207)) == 6L)) != l_207), p_68));
    g_253 ^= (safe_mod_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(((safe_sub_func_int8_t_s_s(l_222, 0xE1L)) & ((safe_rshift_func_int16_t_s_s(0x1CCEL, (((0L && ((g_161 |= (safe_rshift_func_int8_t_s_u(((l_234 = g_232) != (safe_add_func_uint16_t_u_u(l_222, p_67))), 3))) || (l_251 ^= (g_111 = ((((g_226 || (safe_lshift_func_uint8_t_u_u((safe_add_func_int8_t_s_s((g_93 == l_207), g_2)), l_234))) || l_222) >= 0x98L) >= p_68))))) & l_228) != g_252))) != p_66)), g_252)), 0x1EL));
    if (((g_232 & ((g_273 |= ((safe_sub_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((p_65--), (p_67 > ((g_18 == (safe_rshift_func_uint16_t_u_u(l_234, (~(safe_rshift_func_int8_t_s_s((((safe_add_func_int8_t_s_s((l_228 &= (((l_222 &= g_145) <= l_267) || (safe_rshift_func_int8_t_s_s(((-1L) == ((l_225 = (((((safe_add_func_int32_t_s_s(p_68, 0x2405D245L)) | p_68) | 0x6C11A0814C53010FLL) == l_227) || l_267)) > g_233)), p_67)))), g_111)) <= p_67) > g_18), g_119)))))) == l_272)))), g_229)) == 0x757BED90L)) >= p_67)) != 1L))
    {
        uint32_t l_282 = 18446744073709551611UL;
        int32_t l_287 = 0L;
        int32_t l_298 = 3L;
        l_228 = ((safe_lshift_func_uint8_t_u_u((((0xE292L == (!(safe_add_func_int64_t_s_s((-1L), (safe_rshift_func_uint16_t_u_u((safe_unary_minus_func_uint32_t_u((l_282 &= 4294967295UL))), 3)))))) == (((((safe_rshift_func_uint8_t_u_s(g_171, 7)) != (safe_lshift_func_int8_t_s_u(l_287, g_194))) & ((safe_add_func_uint32_t_u_u(((((safe_add_func_int64_t_s_s(((safe_rshift_func_int16_t_s_u((safe_sub_func_uint16_t_u_u(((0xD913343AL > (g_232 | ((safe_lshift_func_uint8_t_u_u(((-1L) == l_287), 0)) ^ p_65))) <= 1UL), g_145)), 14)) || 0x3933L), g_232)) == 0x4BL) >= l_287) < l_298), g_253)) <= 4294967295UL)) >= l_228) & g_93)) ^ (-8L)), 1)) ^ l_287);
    }
    else
    {
        g_161 = g_201;
    }
    return p_67;
}
static int64_t func_82(int8_t p_83, uint8_t p_84, int16_t p_85)
{
    uint32_t l_88 = 8UL;
    int32_t l_96 = 0L;
    int16_t l_117 = 0xE010L;
    int32_t l_118 = 0x76030DEEL;
    int32_t l_141 = 0xDC6F3D13L;
    int32_t l_142 = 0x238E951FL;
    int32_t l_143 = 0xCCA7CC92L;
    int32_t l_144 = 0L;
    uint32_t l_152 = 0x3FC1E9F9L;
    uint64_t l_196 = 0x59D8DA1D736160A4LL;
    g_89 = (l_88 &= g_18);
    for (l_88 = 0; (l_88 < 42); l_88 = safe_add_func_int64_t_s_s(l_88, 1))
    {
        int64_t l_92 = 0xDC3C1A33FE8F1E0ELL;
        uint32_t l_120 = 0xFF1065C7L;
        int32_t l_139 = (-1L);
        if (l_92)
            break;
        g_93 |= p_85;
        l_96 = (safe_sub_func_int32_t_s_s(p_83, 0x93CDB7CFL));
        if ((func_97(((0xAEL >= 0L) || (l_88 >= (g_119 |= (((safe_add_func_uint8_t_u_u((+(safe_add_func_int8_t_s_s(g_2, ((0x29AFL == (safe_lshift_func_int8_t_s_u((l_92 || ((g_111 || (safe_sub_func_uint32_t_u_u(((safe_mod_func_uint8_t_u_u(g_93, (~(l_117 | 0x3A1293870B5DC3D3LL)))) >= g_18), l_96))) > 0x2E06L)), 2))) >= g_93)))), l_118)) >= g_2) > 0x08L)))), p_84, l_120, g_89) >= p_84))
        {
            return l_88;
        }
        else
        {
            uint32_t l_140 = 4UL;
            g_111 = ((((safe_rshift_func_uint8_t_u_s((safe_add_func_int8_t_s_s((safe_sub_func_int64_t_s_s(g_2, g_18)), (safe_sub_func_int16_t_s_s((g_89 ^ (((safe_rshift_func_uint8_t_u_s(l_92, 4)) > (l_96 = (((~p_84) > (safe_add_func_int8_t_s_s((l_140 = ((((l_139 = (safe_sub_func_int16_t_s_s((g_89 && 0xB02C871CFEE841A1LL), (5UL <= 1UL)))) > 0xAFA2L) & g_2) >= 6UL)), l_92))) <= p_85))) && l_140)), 1UL)))), g_119)) >= p_83) == 250UL) <= 0UL);
            l_139 = p_84;
            if (g_89)
                break;
            g_145--;
        }
    }
    if ((l_143 &= p_84))
    {
        int16_t l_150 = 8L;
        int32_t l_151 = (-5L);
        int32_t l_180 = 0xF23DC045L;
        int64_t l_190 = 0L;
        l_150 |= ((p_83 &= (g_145 && l_117)) == (safe_lshift_func_int16_t_s_u(l_141, 0)));
        if ((l_151 = 0xDD65D987L))
        {
            return l_96;
        }
        else
        {
            int8_t l_155 = 0x65L;
            int32_t l_160 = 0xDA819422L;
            int32_t l_181 = 0xF16DAB53L;
            int32_t l_182 = 9L;
            l_152--;
            l_155 ^= g_119;
            g_161 = (safe_sub_func_int8_t_s_s((g_93 = (safe_add_func_int16_t_s_s((((((g_162++) || (safe_add_func_uint32_t_u_u(p_84, (((safe_sub_func_int64_t_s_s((safe_sub_func_uint16_t_u_u((++g_171), (l_182 = ((safe_mod_func_uint32_t_u_u((g_18 | (1UL == (l_181 |= ((l_160 = (((((g_145 == ((((safe_add_func_uint32_t_u_u(p_84, ((safe_lshift_func_uint8_t_u_s((((g_111 & l_180) & 1L) && ((-10L) == p_83)), g_111)) || l_151))) || 18446744073709551610UL) != l_155) > l_155)) != g_2) ^ l_155) < 65535UL) || (-8L))) | p_85)))), g_18)) >= g_93)))), p_85)) == (-1L)) >= l_142)))) > 0xDA28L) <= g_89) ^ g_93), l_143))), p_83));
        }
        for (l_117 = 0; (l_117 >= 19); l_117 = safe_add_func_uint32_t_u_u(l_117, 7))
        {
            int64_t l_191 = 0x91DEB0A878ACAA54LL;
            int32_t l_197 = 3L;
            uint32_t l_200 = 18446744073709551615UL;
            l_197 = ((((l_96 = (safe_mod_func_uint8_t_u_u(0x31L, p_84))) >= (((safe_rshift_func_int8_t_s_s(((!p_84) < (g_194 ^= ((l_191 = l_190) != (safe_rshift_func_uint16_t_u_s(g_93, 14))))), ((~(7UL & ((l_151 || (l_196 = g_18)) >= (((g_171 >= 0xC016F7827581F2D6LL) ^ 0x998A83C5L) != 0x9058001A0E296350LL)))) >= g_2))) | l_190) > p_83)) & (-9L)) || p_83);
            g_161 = ((safe_add_func_int64_t_s_s(g_171, ((p_84 == 0x5C65EB6223421460LL) > ((g_93 & (l_197 |= (0x4C051F80L >= p_84))) != p_85)))) ^ 0x6B5FL);
            l_144 = (l_200 ^= l_151);
        }
        ++g_201;
    }
    else
    {
        return g_201;
    }
    return l_88;
}
static int8_t func_97(uint64_t p_98, uint8_t p_99, int32_t p_100, uint16_t p_101)
{
    uint64_t l_121 = 18446744073709551615UL;
    g_111 = (g_18 && l_121);
    return l_121;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_2;
    csmith_sink_ = g_18;
    csmith_sink_ = g_44;
    csmith_sink_ = g_89;
    csmith_sink_ = g_93;
    csmith_sink_ = g_111;
    csmith_sink_ = g_119;
    csmith_sink_ = g_145;
    csmith_sink_ = g_161;
    csmith_sink_ = g_162;
    csmith_sink_ = g_171;
    csmith_sink_ = g_194;
    csmith_sink_ = g_201;
    csmith_sink_ = g_226;
    csmith_sink_ = g_229;
    csmith_sink_ = g_232;
    csmith_sink_ = g_233;
    csmith_sink_ = g_252;
    csmith_sink_ = g_253;
    csmith_sink_ = g_273;
    csmith_sink_ = g_343;
    csmith_sink_ = g_346;
    csmith_sink_ = g_348;
    csmith_sink_ = g_354;
    csmith_sink_ = g_373;
    csmith_sink_ = g_388;
    csmith_sink_ = g_389;
    csmith_sink_ = g_421;
    csmith_sink_ = g_503;
    csmith_sink_ = g_611;
    csmith_sink_ = g_798;
    csmith_sink_ = g_874;
    csmith_sink_ = g_877;
    csmith_sink_ = g_945;
    platform_main_end(0,0);
    return 0;
}
