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
static uint16_t g_10 = 65528U;
static int16_t g_17 = 0;
static uint16_t g_25 = 0xFB2C;
static uint16_t *g_24 = &g_25;
static int32_t g_39 = 0xDAA08BBD;
static int32_t g_88 = (-1);
static uint16_t g_94 = 0xAF34;
static uint8_t g_107 = 1U;
static int8_t g_128 = 0x1D;
static uint32_t g_130 = 1U;
static uint32_t g_132 = 0x7357609E;
static int16_t g_134 = (-6);
static int32_t g_157 = 3;
static int16_t g_162 = 0x6EF1;
static int8_t g_189 = 0x19;
static uint16_t g_198 = 0x33FD;
static int16_t g_249 = 0x390C;
static uint16_t g_250 = 0x5DBA;
static uint16_t * const *g_269 = &g_24;
static uint16_t * const ** const g_268 = &g_269;
static uint32_t g_270 = 4294967291U;
static int32_t g_273 = 0x4B7D5238;
static uint8_t g_274 = 0xF3;
static int32_t *g_282 = &g_88;
static int32_t g_301 = 0x0D33459E;
static int32_t g_319 = 0x27AFECD8;
static const int32_t *g_330 = &g_88;
static const int32_t * const *g_329 = &g_330;
static const int32_t * const **g_328 = &g_329;
static const int32_t * const ***g_327 = &g_328;
static const int32_t * const ****g_326 = &g_327;
static uint32_t g_360 = 0xDEA13161;
static uint32_t g_403 = 0x5A2EF250;
static uint32_t g_406 = 0xD91DCD4F;
static uint16_t g_413 = 0x2AD3;
static int16_t *g_486 = &g_134;
static int16_t **g_485 = &g_486;
static uint8_t *g_492 = &g_107;
static uint8_t **g_491 = &g_492;
static int8_t g_542 = 0xC2;
static uint32_t g_543 = 4294967295U;
static uint8_t g_551 = 0xBD;
static uint32_t g_616 = 4294967289U;
static uint16_t g_686 = 0xED14;
static int32_t g_791 = 2;
static int32_t g_793 = (-4);
static uint32_t g_807 = 0x28EED969;
static uint32_t g_813 = 0xFB38248E;
static int32_t *g_825 = &g_301;
static uint16_t *g_827 = &g_250;
static uint16_t **g_826 = &g_827;
static uint16_t g_926 = 65529U;
static uint8_t ***g_960 = (void*)0;
static uint8_t **** const g_959 = &g_960;
static int32_t g_1100 = (-1);
static int32_t g_1103 = 0xB1AAA6B9;
static uint16_t g_1108 = 0U;
static int16_t g_1212 = (-1);
static uint16_t g_1225 = 0x4EFE;
static int32_t **g_1249 = &g_282;
static int32_t ***g_1248 = &g_1249;
static uint32_t func_1(void);
static int32_t func_2(uint16_t p_3, const int32_t p_4, uint32_t p_5, uint32_t p_6, int16_t p_7);
static int16_t func_11(int16_t p_12, int32_t p_13, uint16_t * p_14, int32_t p_15, uint16_t * p_16);
static const uint32_t func_28(uint32_t p_29);
static int32_t func_30(uint16_t * p_31, int32_t p_32);
static uint16_t * func_64(int16_t p_65, const int32_t p_66, const uint32_t p_67);
static int32_t * func_69(int32_t * p_70, int32_t p_71, int32_t * p_72, int8_t p_73, const uint32_t p_74);
static int32_t * func_75(int32_t * p_76, uint16_t ** p_77, uint16_t * p_78, const int32_t p_79);
static int16_t func_81(int16_t p_82);
static uint16_t * func_84(uint16_t * const p_85);
static uint32_t func_1(void)
{
    uint8_t l_8 = 0xFA;
    uint16_t *l_9 = &g_10;
    uint16_t *l_34 = &g_25;
    uint16_t **l_33 = &l_34;
    uint8_t l_1114 = 255U;
    int8_t l_1115 = (-2);
    int32_t *l_1254 = &g_88;
    (*l_1254) = func_2((l_8 , ((*l_9) &= l_8)), l_8, ((func_11(g_17, (safe_mul_func_uint8_t_u_u((0xB4C8 != 0xD071), ((*g_492) = ((((safe_mul_func_int8_t_s_s((safe_sub_func_int16_t_s_s((g_24 == (void*)0), (safe_lshift_func_int16_t_s_s(((*g_486) = (((func_28((func_30(((*l_33) = (void*)0), l_8) | 0U)) , 0x3811) && 6U) && l_1114)), 10)))), g_273)) , 0U) || g_926) , l_1115)))), (*g_826), l_1115, l_9) ^ l_1115) , g_25), l_1115, l_8);
    return g_198;
}
static int32_t func_2(uint16_t p_3, const int32_t p_4, uint32_t p_5, uint32_t p_6, int16_t p_7)
{
    uint16_t l_1235 = 0xD3B0;
    uint16_t **l_1244 = &g_827;
    uint16_t ***l_1245 = &l_1244;
    int32_t ***l_1250 = &g_1249;
    const uint16_t **l_1251 = (void*)0;
    const uint16_t ***l_1252 = &l_1251;
    int32_t *l_1253 = &g_793;
    (*l_1253) = (((*l_1252) = (((9 | (255U && (safe_mod_func_int32_t_s_s((((*g_486) = (l_1235 || p_6)) == (safe_add_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((safe_add_func_int32_t_s_s((safe_mul_func_uint8_t_u_u((((((*l_1245) = l_1244) != (*g_268)) && 5U) | (safe_div_func_uint16_t_u_u(((((l_1250 = g_1248) == (void*)0) < l_1235) , (*g_24)), (-1)))), p_7)), 0)), 0x8F8E5A8F)), g_270))), 0xD4128460)))) ^ 0x58) , l_1251)) != (*g_268));
    return p_5;
}
static int16_t func_11(int16_t p_12, int32_t p_13, uint16_t * p_14, int32_t p_15, uint16_t * p_16)
{
    int32_t *l_1116 = &g_301;
    int32_t *l_1117 = &g_39;
    int32_t l_1118 = 0x92C43E47;
    int32_t *l_1119 = &g_793;
    int32_t *l_1120 = (void*)0;
    int32_t *l_1121 = &g_88;
    int32_t *l_1122 = &g_301;
    int32_t *l_1123 = (void*)0;
    int32_t *l_1124 = &g_793;
    int32_t *l_1125 = &l_1118;
    int32_t *l_1126 = &l_1118;
    int32_t *l_1127 = &g_88;
    int32_t *l_1128 = &g_1100;
    int32_t *l_1129 = &g_1100;
    int32_t l_1130 = (-1);
    int32_t *l_1131 = &g_301;
    int32_t *l_1132 = &g_793;
    int32_t *l_1133 = &g_39;
    int32_t l_1134 = (-1);
    int32_t *l_1135 = (void*)0;
    int32_t l_1136 = 0xFBF31C47;
    int32_t *l_1137 = &l_1118;
    int32_t *l_1138 = &l_1134;
    int32_t *l_1139 = &g_793;
    int32_t *l_1140 = &g_39;
    int32_t *l_1141 = &g_39;
    int32_t *l_1142 = &l_1134;
    int32_t *l_1143 = &g_88;
    int32_t *l_1144 = &g_39;
    int32_t *l_1145 = &g_39;
    int32_t *l_1146 = &g_1100;
    int32_t *l_1147 = &g_793;
    int32_t *l_1148 = &l_1134;
    int32_t *l_1149 = &g_88;
    int32_t *l_1150 = &g_301;
    int32_t *l_1151 = &g_793;
    int32_t *l_1152 = (void*)0;
    int32_t *l_1153 = &g_1100;
    int32_t l_1154 = (-2);
    int32_t *l_1155 = &g_793;
    int32_t *l_1156 = &l_1154;
    int32_t *l_1157 = &l_1118;
    int32_t *l_1158 = &l_1130;
    int32_t *l_1159 = &l_1134;
    int32_t *l_1160 = &l_1130;
    int32_t *l_1161 = (void*)0;
    int32_t *l_1162 = (void*)0;
    int32_t *l_1163 = &l_1118;
    int32_t *l_1164 = &l_1134;
    int32_t *l_1165 = &l_1118;
    int32_t *l_1166 = &l_1134;
    int32_t *l_1167 = &g_39;
    int32_t *l_1168 = &l_1134;
    int32_t *l_1169 = &l_1118;
    int32_t l_1170 = 0x58368AC0;
    int32_t *l_1171 = &l_1136;
    int32_t *l_1172 = &l_1170;
    int32_t *l_1173 = &l_1118;
    int32_t *l_1174 = &l_1130;
    int32_t l_1175 = 0x1741CA64;
    int32_t *l_1176 = &l_1154;
    int32_t l_1177 = 0x11046165;
    int32_t *l_1178 = (void*)0;
    int32_t *l_1179 = &l_1170;
    int32_t *l_1180 = &g_39;
    int32_t *l_1181 = &l_1136;
    int32_t *l_1182 = &g_301;
    int32_t *l_1183 = &l_1136;
    int32_t *l_1184 = &g_793;
    int32_t *l_1185 = &l_1118;
    int32_t *l_1186 = &l_1175;
    int32_t *l_1187 = (void*)0;
    int32_t *l_1188 = (void*)0;
    int32_t *l_1189 = &l_1118;
    int32_t *l_1190 = &l_1175;
    int32_t *l_1191 = &g_1100;
    int32_t *l_1192 = (void*)0;
    int32_t l_1193 = 0xF3F89BC4;
    int32_t *l_1194 = &l_1134;
    int32_t *l_1195 = &l_1170;
    int32_t *l_1196 = &l_1193;
    int32_t *l_1197 = &g_1100;
    int32_t *l_1198 = &g_301;
    int32_t l_1199 = (-1);
    int32_t *l_1200 = &l_1199;
    int32_t *l_1201 = &g_1100;
    int32_t *l_1202 = &l_1130;
    int32_t *l_1203 = (void*)0;
    int32_t *l_1204 = &l_1170;
    int32_t *l_1205 = (void*)0;
    int32_t *l_1206 = &l_1199;
    int32_t *l_1207 = &l_1175;
    int32_t *l_1208 = &g_793;
    int32_t *l_1209 = (void*)0;
    int32_t *l_1210 = (void*)0;
    int32_t l_1211 = 8;
    int32_t *l_1213 = &g_39;
    int32_t *l_1214 = &l_1211;
    int32_t *l_1215 = (void*)0;
    int32_t *l_1216 = &l_1193;
    int32_t *l_1217 = &g_88;
    int32_t *l_1218 = (void*)0;
    int32_t l_1219 = 9;
    int32_t *l_1220 = &l_1154;
    int32_t *l_1221 = (void*)0;
    int32_t *l_1222 = &l_1199;
    int32_t *l_1223 = &l_1136;
    int32_t *l_1224 = &l_1219;
    uint8_t * const l_1230 = &g_274;
    uint16_t **l_1231 = &g_827;
    int32_t **l_1232 = &l_1117;
    (*g_282) &= 0x9371F043;
    --g_1225;
    (*l_1232) = func_75(func_75(&g_301, &g_827, (*g_826), p_13), l_1231, p_16, p_15);
    return (**g_485);
}
static const uint32_t func_28(uint32_t p_29)
{
    uint32_t l_63 = 0x6DA84B50;
    int32_t l_849 = 0x50D89CF8;
    int32_t l_879 = 0x50F65B8B;
    int32_t l_890 = 0x9888401F;
    int32_t l_896 = 1;
    int32_t l_925 = 0x1412468B;
    uint16_t * const l_929 = (void*)0;
    uint8_t ****l_1006 = &g_960;
    uint8_t *****l_1005 = &l_1006;
    int32_t *l_1018 = &l_890;
    uint32_t *l_1019 = (void*)0;
    uint32_t *l_1020 = &g_807;
    int8_t *l_1039 = &g_189;
    int8_t **l_1038 = &l_1039;
    int32_t **l_1040 = &l_1018;
    int32_t *l_1041 = &g_793;
    int32_t *l_1042 = &l_849;
    int32_t *l_1043 = &l_925;
    int32_t *l_1044 = &l_879;
    int32_t *l_1045 = &l_879;
    int32_t *l_1046 = &l_925;
    int32_t *l_1047 = &g_88;
    int32_t *l_1048 = &g_301;
    int32_t *l_1049 = &l_890;
    int32_t *l_1050 = &g_793;
    int32_t *l_1051 = &l_896;
    int32_t *l_1052 = &g_88;
    int32_t *l_1053 = &l_879;
    int32_t *l_1054 = &l_849;
    int32_t *l_1055 = (void*)0;
    int32_t *l_1056 = &l_925;
    int32_t *l_1057 = &g_301;
    int32_t *l_1058 = (void*)0;
    int32_t *l_1059 = &l_890;
    int32_t *l_1060 = &g_793;
    int32_t *l_1061 = (void*)0;
    int32_t *l_1062 = (void*)0;
    int32_t *l_1063 = &l_890;
    int32_t *l_1064 = &l_896;
    int32_t *l_1065 = &g_793;
    int32_t *l_1066 = &l_879;
    int32_t *l_1067 = &g_793;
    int32_t *l_1068 = &l_849;
    int32_t *l_1069 = &l_925;
    int32_t *l_1070 = &g_88;
    int32_t *l_1071 = &l_925;
    int32_t *l_1072 = &g_301;
    int32_t *l_1073 = &l_879;
    int32_t *l_1074 = (void*)0;
    int32_t *l_1075 = &l_849;
    int32_t *l_1076 = &g_793;
    int32_t *l_1077 = &l_896;
    int32_t *l_1078 = &l_925;
    int32_t *l_1079 = &l_879;
    int32_t *l_1080 = &l_896;
    int32_t *l_1081 = &g_793;
    int32_t *l_1082 = &l_849;
    int32_t *l_1083 = &l_896;
    int32_t *l_1084 = &g_793;
    int32_t *l_1085 = (void*)0;
    int32_t *l_1086 = &l_849;
    int32_t *l_1087 = &l_849;
    int32_t *l_1088 = (void*)0;
    int32_t *l_1089 = &l_879;
    int32_t *l_1090 = (void*)0;
    int32_t *l_1091 = (void*)0;
    int32_t *l_1092 = &l_890;
    int32_t *l_1093 = &l_896;
    int32_t *l_1094 = &l_890;
    int32_t *l_1095 = &g_793;
    int32_t *l_1096 = &g_88;
    int32_t *l_1097 = &g_39;
    int32_t *l_1098 = &g_793;
    int32_t *l_1099 = (void*)0;
    int32_t *l_1101 = &g_39;
    int32_t *l_1102 = (void*)0;
    int32_t *l_1104 = &g_1100;
    int32_t *l_1105 = &l_879;
    int32_t *l_1106 = &g_88;
    int32_t *l_1107 = &g_793;
    int32_t ** const *l_1113 = &l_1040;
    int32_t ** const **l_1112 = &l_1113;
    int32_t ** const ***l_1111 = &l_1112;
    if (p_29)
    {
        uint8_t l_46 = 255U;
        uint16_t *l_68 = &g_25;
        int32_t l_834 = 0xD095FF20;
        int32_t l_854 = (-1);
        int32_t l_859 = 0x3E33728C;
        int32_t l_874 = 0x9B1DE252;
        uint8_t ****l_961 = (void*)0;
        const uint16_t l_971 = 0U;
        const uint32_t l_997 = 4294967295U;
        int16_t *l_998 = &g_162;
        int16_t l_999 = 1;
        int8_t *l_1000 = &g_189;
        uint8_t *l_1001 = &g_274;
        int32_t **l_1002 = (void*)0;
        int32_t **l_1003 = &g_825;
        for (g_25 = 0; (g_25 < 60); g_25 = safe_add_func_int16_t_s_s(g_25, 2))
        {
            int32_t *l_38 = &g_39;
            int32_t l_40 = 0;
            int32_t *l_41 = (void*)0;
            int32_t *l_42 = &l_40;
            int32_t *l_43 = &l_40;
            int32_t *l_44 = &g_39;
            int32_t *l_45 = &g_39;
            uint16_t l_53 = 1U;
            uint8_t *l_54 = &l_46;
            uint32_t *l_835 = (void*)0;
            uint32_t *l_836 = &g_813;
            uint32_t *l_837 = (void*)0;
            uint32_t *l_838 = &g_543;
            int32_t l_893 = (-9);
            int32_t l_915 = 7;
            ++l_46;
        }
        (*g_282) = (safe_div_func_int32_t_s_s((safe_div_func_int8_t_s_s(7, (safe_rshift_func_uint8_t_u_u((g_543 <= ((*l_1001) = ((g_319 & (safe_add_func_int8_t_s_s(((*l_1000) = ((safe_unary_minus_func_uint16_t_u((safe_sub_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u((p_29 <= l_896), (((((((safe_div_func_uint32_t_u_u(g_793, (safe_sub_func_uint32_t_u_u((safe_div_func_uint32_t_u_u((l_859 , p_29), (safe_mul_func_uint8_t_u_u(((*g_492) &= (safe_sub_func_int16_t_s_s(((*l_998) = ((**g_485) &= (l_854 = (safe_sub_func_int8_t_s_s(g_162, l_997))))), p_29))), l_971)))), p_29)))) ^ p_29) & l_46) , 1) & 6U) ^ l_999) , l_971))) >= g_128), (**g_269))))) != 1U)), p_29))) & p_29))), l_999)))), 0xDA1FE423));
        (*l_1003) = &l_849;
    }
    else
    {
        const uint8_t l_1009 = 0x62;
        uint8_t *l_1016 = &g_551;
        int32_t l_1017 = 8;
        (*g_282) &= (+((l_1017 &= (((((((void*)0 == l_1005) > (p_29 & ((safe_div_func_uint16_t_u_u(((*g_827) |= ((l_896 = (g_791 <= g_17)) >= ((l_1009 < l_1009) , (safe_mul_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((l_849 = ((***g_268) = p_29)), (safe_add_func_int16_t_s_s(((g_301 , (void*)0) != (void*)0), 65531U)))), (**g_485)))))), 65532U)) & 0x218F))) , (*g_491)) == l_1016) && (*g_24)) != p_29)) < l_925));
        (*g_825) |= p_29;
    }
    (*l_1040) = func_69(&l_849, l_879, l_1018, ((--(*l_1020)) >= (((**l_1038) = (((~((safe_rshift_func_int8_t_s_u(((safe_add_func_uint32_t_u_u((safe_add_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((((safe_sub_func_uint32_t_u_u(((safe_mul_func_uint8_t_u_u(((((void*)0 == l_1038) > (*l_1018)) , (*l_1018)), ((*l_1018) > ((((((*l_1018) <= 1U) < g_813) , (*l_1018)) ^ (*g_486)) || 9)))) != g_360), (*g_282))) > (*l_1018)) < 0x86CC), (-1))), 1)) <= (**g_491)), (*l_1018))), 0x9F0B12B1)) != p_29), 6)) != 1U)) ^ p_29) , 0xB0)) && p_29)), (*l_1018));
    g_1108--;
    (*l_1089) &= ((*l_1092) = ((void*)0 != l_1111));
    return p_29;
}
static int32_t func_30(uint16_t * p_31, int32_t p_32)
{
    int8_t l_35 = (-10);
    return l_35;
}
static uint16_t * func_64(int16_t p_65, const int32_t p_66, const uint32_t p_67)
{
    uint16_t **l_80 = &g_24;
    int32_t l_83 = 6;
    int32_t *l_619 = (void*)0;
    int32_t *l_620 = (void*)0;
    int32_t *l_621 = &g_319;
    int32_t l_822 = (-1);
    int32_t **l_824 = &g_282;
    int8_t l_830 = 1;
    const int32_t **l_833 = &g_330;
    (*l_824) = func_69(func_75(((g_17 == ((((l_80 != &g_24) , ((((((0x29 ^ g_39) , (((*l_621) = (((func_81((l_83 , (func_30(func_84((*l_80)), (((safe_div_func_uint32_t_u_u((safe_add_func_uint32_t_u_u((p_65 >= p_67), p_65)), (-2))) <= 0x00E2) || p_65)) , (-7)))) && (*g_486)) , g_94) , p_65)) , (*g_492))) & g_301) != l_83) , 255U) < p_66)) || l_83) <= l_83)) , &l_83), l_80, (*l_80), p_67), l_822, &l_822, g_551, g_807);
    (*l_824) = (*l_824);
    (*l_833) = (*g_329);
    return (*l_80);
}
static int32_t * func_69(int32_t * p_70, int32_t p_71, int32_t * p_72, int8_t p_73, const uint32_t p_74)
{
    int32_t *l_823 = (void*)0;
    return l_823;
}
static int32_t * func_75(int32_t * p_76, uint16_t ** p_77, uint16_t * p_78, const int32_t p_79)
{
    int8_t *l_634 = &g_189;
    int8_t *l_637 = &g_542;
    int16_t l_642 = (-6);
    int32_t l_646 = 0x6C489C0E;
    uint16_t * const *l_658 = (void*)0;
    int32_t l_680 = 0x51D2ECAC;
    int32_t l_683 = 4;
    int32_t **l_820 = &g_282;
    int32_t *l_821 = &l_646;
    for (g_274 = 0; (g_274 != 57); g_274 = safe_add_func_uint32_t_u_u(g_274, 1))
    {
        int16_t l_624 = 0x828A;
        int8_t *l_636 = &g_542;
        uint16_t * const *l_659 = (void*)0;
        uint16_t l_663 = 65534U;
        int32_t l_810 = (-1);
        int32_t l_811 = 0x7BCF869D;
        int32_t l_812 = 0xF70ECD12;
    }
    (*p_76) = (safe_lshift_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(p_79, ((*g_492) = (**g_491)))), 3));
    (*l_820) = &l_680;
    (*l_820) = (*l_820);
    return p_76;
}
static int16_t func_81(int16_t p_82)
{
    int32_t *l_588 = &g_88;
    int32_t *l_589 = (void*)0;
    int32_t l_590 = 0x4FFE9F76;
    int32_t l_591 = 0x877A6F6C;
    int32_t l_592 = 0x6DD470F2;
    int32_t l_593 = (-4);
    int32_t *l_594 = (void*)0;
    int32_t *l_595 = (void*)0;
    int32_t *l_596 = (void*)0;
    int32_t *l_597 = &l_593;
    int32_t *l_598 = &l_591;
    int32_t l_599 = 8;
    int32_t *l_600 = (void*)0;
    int32_t *l_601 = (void*)0;
    int32_t *l_602 = &l_592;
    int32_t *l_603 = &l_590;
    int32_t *l_604 = &l_592;
    int32_t *l_605 = &g_88;
    int32_t l_606 = (-1);
    int32_t l_607 = (-4);
    int32_t *l_608 = &l_593;
    int32_t *l_609 = &l_593;
    int32_t *l_610 = &l_591;
    int32_t l_611 = 2;
    int32_t *l_612 = &l_593;
    int32_t *l_613 = &l_611;
    int32_t *l_614 = &g_301;
    int32_t *l_615 = (void*)0;
    ++g_616;
    return p_82;
}
static uint16_t * func_84(uint16_t * const p_85)
{
    int32_t **l_86 = (void*)0;
    int32_t *l_87 = &g_88;
    uint16_t *l_93 = &g_94;
    int32_t **l_102 = &l_87;
    int32_t l_103 = 0;
    const uint16_t l_105 = 65535U;
    uint8_t *l_106 = &g_107;
    int32_t *l_108 = &g_88;
    uint16_t **l_121 = &l_93;
    uint16_t ***l_120 = &l_121;
    uint32_t l_125 = 1U;
    int8_t *l_126 = (void*)0;
    int8_t *l_127 = &g_128;
    uint32_t *l_129 = &g_130;
    uint32_t *l_131 = &g_132;
    int16_t *l_133 = &g_134;
    int32_t l_193 = 0xB8DA5B5A;
    int32_t l_243 = 0xBE924755;
    int16_t l_244 = 0xE662;
    uint32_t l_318 = 4294967295U;
    int32_t ***l_449 = &l_86;
    int32_t ****l_448 = &l_449;
    int32_t *****l_447 = &l_448;
    int32_t l_462 = 0x701D3A4C;
    const int32_t *** const **l_576 = (void*)0;
    uint32_t l_579 = 0x0CC90252;
    l_87 = (void*)0;
    (*l_108) = (safe_lshift_func_int8_t_s_s((((((safe_mul_func_uint16_t_u_u(((*l_93) = (*g_24)), (safe_lshift_func_int16_t_s_s(((safe_rshift_func_int8_t_s_u((!((*l_106) = (safe_mul_func_int16_t_s_s((&l_87 != l_102), ((-7) & (((l_103 < g_88) ^ (~0x4B98)) && l_105)))))), 5)) > (((void*)0 == p_85) || 0x38BB)), 8)))) , (*g_24)) , l_103) || g_25) <= g_88), g_17));
    if ((((g_25 ^ ((*l_133) |= (((*l_131) &= ((*l_129) |= (safe_mod_func_int8_t_s_s(((safe_unary_minus_func_int32_t_s(((void*)0 == &l_108))) , ((((*l_108) = g_39) <= (safe_div_func_int8_t_s_s(g_39, ((safe_rshift_func_int16_t_s_s((safe_mod_func_int8_t_s_s(((*l_127) = ((safe_mod_func_int8_t_s_s((((*l_120) = &l_93) != &l_93), ((safe_unary_minus_func_uint32_t_u((safe_lshift_func_uint8_t_u_u(l_103, (l_125 , 1U))))) , 255U))) , g_94)), g_39)), g_25)) , g_25)))) && (*l_108))), 1U)))) || g_39))) <= g_25) , g_94))
    {
        int32_t *l_135 = &g_88;
        int32_t *l_136 = &g_88;
        int32_t *l_137 = &g_88;
        int32_t *l_138 = &g_88;
        int32_t *l_139 = &l_103;
        int32_t *l_140 = &l_103;
        int32_t *l_141 = &l_103;
        int32_t *l_142 = (void*)0;
        int32_t *l_143 = &l_103;
        int32_t *l_144 = (void*)0;
        int32_t *l_145 = &g_88;
        int32_t *l_146 = (void*)0;
        int32_t *l_147 = &g_88;
        int32_t *l_148 = &l_103;
        int32_t *l_149 = &g_88;
        int32_t *l_150 = &g_88;
        int32_t *l_151 = &l_103;
        int32_t *l_152 = &l_103;
        int32_t *l_153 = (void*)0;
        int32_t *l_154 = &l_103;
        int32_t *l_155 = &l_103;
        int32_t *l_156 = &l_103;
        int32_t *l_158 = &l_103;
        int32_t *l_159 = &l_103;
        int32_t l_160 = (-4);
        int32_t *l_161 = (void*)0;
        int32_t *l_163 = &g_88;
        int32_t *l_164 = &g_88;
        int32_t *l_165 = (void*)0;
        int32_t l_166 = 0x8F99D248;
        int32_t *l_167 = &l_160;
        int32_t l_168 = 0x34358B78;
        int32_t *l_169 = &l_166;
        int32_t l_170 = 0x3227D8CF;
        int32_t *l_171 = &l_168;
        int32_t *l_172 = &g_88;
        int32_t *l_173 = (void*)0;
        int32_t *l_174 = &l_170;
        int32_t *l_175 = &l_166;
        int32_t *l_176 = &l_166;
        int32_t *l_177 = &l_160;
        int32_t *l_178 = &g_88;
        int32_t *l_179 = (void*)0;
        int32_t *l_180 = (void*)0;
        int32_t *l_181 = &l_170;
        int32_t *l_182 = &l_168;
        int32_t *l_183 = (void*)0;
        int32_t l_184 = 0xB1FA0A70;
        int32_t l_185 = 0x808A6355;
        int32_t *l_186 = &l_103;
        int32_t *l_187 = &l_103;
        int32_t *l_188 = &l_103;
        int32_t *l_190 = (void*)0;
        int32_t *l_191 = &l_103;
        int32_t *l_192 = (void*)0;
        int32_t *l_194 = &l_166;
        int32_t *l_195 = &l_168;
        int32_t l_196 = 0x17F86792;
        int32_t *l_197 = &l_168;
        uint16_t *l_216 = &g_198;
        uint16_t ** const *l_253 = &l_121;
        uint16_t l_271 = 0x262F;
        int16_t l_357 = 7;
        int32_t *l_428 = &g_88;
        int32_t l_433 = 0;
        int32_t ***l_507 = &l_86;
        uint8_t *l_527 = &g_107;
        uint32_t l_532 = 0x96D40372;
        g_198--;
        for (l_196 = 0; (l_196 == (-19)); --l_196)
        {
            const uint32_t l_207 = 5U;
            uint16_t *l_210 = (void*)0;
            int32_t l_215 = 0xA4FECFE7;
            (*l_176) = (safe_lshift_func_int16_t_s_u((65533U <= ((((((g_107 = ((((safe_lshift_func_int8_t_s_u((-9), l_207)) & (g_39 >= (((safe_mod_func_int16_t_s_s((((((g_94 != (l_210 != ((l_215 |= (0U == (safe_mod_func_uint8_t_u_u(l_207, (safe_sub_func_uint32_t_u_u(0U, l_207)))))) , (void*)0))) , g_39) ^ (*g_24)) <= 0xFF0A) , g_88), 65530U)) , (*g_24)) == 65535U))) ^ g_128) <= l_207)) > 1) < (*l_108)) < g_157) >= g_128) >= l_207)), (*l_137)));
            (*l_102) = &l_168;
        }
        (*l_186) &= (0xE863 & (((*g_24) , p_85) != l_216));
        if (((!(safe_sub_func_int32_t_s_s(((safe_add_func_uint8_t_u_u((~(safe_lshift_func_uint8_t_u_s(((*l_106)--), 3))), ((((~((*l_191) != 1U)) , (safe_mul_func_uint16_t_u_u(((safe_unary_minus_func_int8_t_s(((safe_mul_func_int16_t_s_s((((safe_rshift_func_int16_t_s_u(g_198, ((safe_sub_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((*p_85), (safe_mod_func_uint16_t_u_u((*p_85), ((g_88 || ((*l_93) = (g_88 || (((safe_rshift_func_int16_t_s_u(((*l_133) = (((*l_102) = &g_88) == &l_196)), 12)) , g_162) > g_132)))) | (*l_175)))))), (*l_135))) | l_243))) < (*l_108)) == (*l_164)), 0x2A3A)) < g_198))) , (*p_85)), (*g_24)))) != 0x45) || l_244))) > 0U), (-7)))) , g_107))
        {
            int32_t **l_247 = &l_178;
            uint16_t * const *l_255 = &l_216;
            uint16_t * const **l_254 = &l_255;
            int32_t l_272 = (-8);
            int32_t ***l_279 = &l_102;
            int32_t **** const l_278 = &l_279;
            uint8_t *l_302 = (void*)0;
            if ((safe_rshift_func_int16_t_s_u(3, 7)))
            {
                int32_t ***l_248 = &l_247;
                uint16_t * const ***l_256 = (void*)0;
                uint16_t * const ***l_257 = &l_254;
                (*l_248) = l_247;
                g_250--;
                (*l_178) = (((((l_253 != ((*l_257) = l_254)) ^ (0xF3720B21 > ((*l_171) = (safe_mod_func_uint8_t_u_u(0x5F, (*l_108)))))) & ((safe_sub_func_int32_t_s_s((***l_248), ((*l_177) = (((safe_rshift_func_int8_t_s_s(((g_270 |= ((safe_add_func_int8_t_s_s((((***l_248) >= (0x31D69C6C >= (safe_add_func_int8_t_s_s((g_268 != &g_269), (*l_163))))) != g_39), (*l_174))) & (**l_247))) > (***l_248)), 4)) , l_271) , 0x2E05E156)))) == (*l_155))) < (**g_269)) , (-7));
                g_274++;
            }
            else
            {
                int8_t l_277 = (-1);
                int32_t ***l_314 = &l_102;
                uint32_t l_317 = 4294967295U;
                int32_t *l_429 = &l_243;
                uint16_t **l_442 = &g_24;
                int32_t ****l_446 = &l_279;
                int32_t *****l_445 = &l_446;
                uint8_t l_493 = 0xC8;
                if (l_277)
                {
                    int32_t ****l_281 = &l_279;
                    int32_t *****l_280 = &l_281;
                    (*l_280) = l_278;
                    g_282 = ((*l_102) = &g_39);
                    for (l_244 = (-26); (l_244 == (-12)); l_244 = safe_add_func_int8_t_s_s(l_244, 7))
                    {
                        int32_t *l_289 = &g_273;
                        uint8_t **l_292 = &l_106;
                        int32_t * const l_300 = &g_301;
                        int32_t * const *l_299 = &l_300;
                        int32_t * const **l_298 = &l_299;
                        (*l_169) = (safe_mul_func_uint8_t_u_u(251U, (**l_247)));
                        (*l_151) ^= (**l_102);
                        if ((*g_282))
                            break;
                        (*l_152) |= (((**l_247) , (safe_mod_func_uint32_t_u_u((((*l_289) |= ((*l_121) == p_85)) , (safe_mul_func_int16_t_s_s(((((*l_292) = &g_274) != (((((safe_rshift_func_int16_t_s_u((((safe_lshift_func_int8_t_s_s(0xB9, 4)) != ((l_126 == &g_274) > g_130)) > (~(((*l_298) = &g_282) == &g_282))), 9)) && 0xE8) != g_39) <= 0xA44D) , l_302)) || (*l_108)), (*p_85)))), (*g_282)))) < 65532U);
                    }
                    (*l_155) = ((g_319 = (g_274 , ((safe_rshift_func_uint16_t_u_u(((0x02 != (safe_mul_func_int8_t_s_s((g_130 > (safe_lshift_func_int16_t_s_s((((safe_mul_func_uint16_t_u_u((2 || (&g_268 == &l_120)), ((+((((safe_sub_func_uint8_t_u_u(((((*l_106) = ((((*l_281) = l_314) != l_314) || ((safe_sub_func_uint8_t_u_u(0xFF, (***l_314))) , g_130))) < l_317) ^ g_17), g_162)) & (*p_85)) , (void*)0) != (void*)0)) | (**l_247)))) & (*g_282)) > l_318), g_134))), (***l_314)))) > (*l_87)), (***g_268))) >= (*l_87)))) > (*l_147));
                }
                else
                {
                    int32_t ***l_322 = (void*)0;
                    int32_t ****l_323 = &l_314;
                    int32_t l_359 = 0xF7CC2139;
                    uint16_t l_378 = 9U;
                    int32_t l_379 = (-7);
                    int32_t l_390 = (-1);
                    uint16_t **l_432 = &g_24;
                    int32_t l_488 = 2;
                    if ((0x5E > (safe_rshift_func_uint8_t_u_s((((*l_323) = ((*l_278) = l_322)) != (void*)0), ((safe_add_func_uint8_t_u_u((((void*)0 == l_150) ^ ((void*)0 != g_326)), ((*l_127) ^= (safe_add_func_uint32_t_u_u(((*l_131) |= (*l_108)), ((*g_330) == g_17)))))) == (*l_167))))))
                    {
                        uint8_t l_347 = 255U;
                        int32_t l_356 = 3;
                        (*l_174) |= (safe_mod_func_int32_t_s_s(0x17E9C426, (safe_rshift_func_int16_t_s_u((safe_sub_func_int32_t_s_s((g_189 , (safe_sub_func_int16_t_s_s((((((safe_lshift_func_int8_t_s_s((safe_add_func_int8_t_s_s(((safe_add_func_int32_t_s_s((l_347 = 0x58F5FF72), (0U > (g_157 == ((((g_134 , ((safe_rshift_func_uint16_t_u_u(1U, ((safe_div_func_int32_t_s_s(((1 <= (safe_mod_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u(0x699C, l_356)), 3U))) != g_274), (-10))) == (*l_152)))) || g_274)) <= 0xF59C59D2) && (-1)) & 0x09))))) , (*l_108)), (**l_247))), l_357)) , (***g_268)) != (**g_269)) & g_39) < (-7)), 65526U))), 0xCC735A51)), 6))));
                        (*l_156) = (safe_unary_minus_func_int8_t_s(0xFD));
                        --g_360;
                    }
                    else
                    {
                        int16_t l_364 = 0;
                        int32_t l_380 = 0x79D91489;
                        int32_t *l_381 = &l_184;
                        int32_t *l_382 = &l_196;
                        int32_t *l_383 = (void*)0;
                        int32_t *l_384 = &l_185;
                        int32_t *l_385 = &g_301;
                        int32_t *l_386 = (void*)0;
                        int32_t *l_387 = &l_243;
                        int32_t *l_388 = &l_103;
                        int32_t *l_389 = &g_301;
                        int32_t *l_391 = &l_193;
                        int32_t *l_392 = &l_184;
                        int32_t *l_393 = (void*)0;
                        int32_t *l_394 = (void*)0;
                        int32_t *l_395 = (void*)0;
                        int32_t *l_396 = &l_193;
                        int32_t *l_397 = &l_160;
                        int32_t *l_398 = &l_379;
                        int32_t *l_399 = &g_301;
                        int32_t *l_400 = &l_359;
                        int32_t *l_401 = &l_103;
                        int32_t *l_402 = &l_359;
                        (*l_139) = ((*l_136) = (((5U && (0xBC6560A7 || (!g_134))) && ((-5) <= l_364)) > (safe_mod_func_uint32_t_u_u((l_364 | (safe_div_func_int16_t_s_s((safe_div_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((safe_div_func_int8_t_s_s(((65529U < (((((safe_add_func_uint16_t_u_u(((+((*l_187) , g_88)) || (*g_24)), 0x5EB8)) < 0x35) , (***g_328)) != 3U) == g_17)) >= l_364), 0x78)), g_249)), 0x2DF5)), l_378))), g_25))));
                        g_403--;
                        ++g_406;
                        (*l_143) ^= (safe_lshift_func_uint16_t_u_s(((*l_216)++), 2));
                    }
                    ++g_413;
                    if (((safe_rshift_func_uint16_t_u_s(((g_39 & (((safe_sub_func_int16_t_s_s(g_25, ((safe_sub_func_int32_t_s_s(0x4BD023BC, 0U)) >= g_301))) , ((((((((***g_328) != (safe_rshift_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_u((l_277 && (l_428 != (((*l_158) = ((g_107 = ((g_128 , (void*)0) != (void*)0)) && g_162)) , (void*)0))), 5)) <= (*l_108)), 3)) <= 0xD18A), (*l_145)))) , 0x66) == g_249) != g_134) & 0U) | (*l_108)) > 6U)) != (*p_85))) < 0x2DFDF003), 8)) , (***g_328)))
                    {
                        const int32_t l_436 = 6;
                        int32_t ***l_439 = &l_86;
                        (*l_247) = (l_429 = (*l_247));
                        (*l_186) &= (**g_329);
                        (*l_154) &= ((safe_mul_func_int16_t_s_s((((*l_254) = (void*)0) != ((*l_120) = l_432)), l_433)) || (safe_add_func_int16_t_s_s(((l_436 , p_85) != p_85), 0xCCA4)));
                        (*l_177) |= (((*l_106) |= 0x33) <= ((safe_lshift_func_uint8_t_u_s((&l_108 == ((*l_439) = &g_282)), 7)) , ((*l_254) != ((safe_mod_func_int8_t_s_s(((*l_127) = ((((*l_158) , ((void*)0 != l_442)) , ((safe_div_func_int8_t_s_s(((l_447 = l_445) == (void*)0), (***l_439))) == (*l_164))) ^ 0x3B)), (*l_140))) , (*g_268)))));
                    }
                    else
                    {
                        int32_t l_450 = 4;
                        int8_t l_457 = (-4);
                        int16_t *l_458 = (void*)0;
                        int16_t *l_459 = &g_162;
                        uint8_t **l_463 = &l_106;
                        int16_t **l_470 = &l_459;
                        int32_t **** const *l_477 = &l_323;
                        (*l_195) ^= l_450;
                        (*l_171) = ((*g_282) = (****g_327));
                        (*l_429) |= ((((((((((((*l_129) = ((((((0xC5A7 & ((*l_459) ^= ((safe_lshift_func_uint8_t_u_s(l_450, 4)) , ((*l_133) = (safe_sub_func_int16_t_s_s(0, (safe_lshift_func_int8_t_s_s(g_189, l_457)))))))) && (g_250 == (((((safe_add_func_int16_t_s_s((g_270 >= (*l_178)), (&g_319 != (void*)0))) , g_403) <= 0x34) < 0x6E1F) , l_462))) < g_94) , (*l_323)) != (*l_323)) > l_450)) != g_270) && 6) != (*l_135)) ^ g_273) , (void*)0) == l_463) == (*l_152)) && 255U) , 0x80A36DBC) , (****g_327));
                        (*l_156) = (((((safe_mod_func_int8_t_s_s((safe_sub_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u((&l_244 == ((*l_470) = l_458)), (((*l_127) = ((safe_mul_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_s(((safe_sub_func_int16_t_s_s((&g_327 != l_477), (safe_mul_func_int16_t_s_s((safe_div_func_int8_t_s_s(((((((safe_unary_minus_func_int16_t_s((*l_154))) != (safe_lshift_func_int16_t_s_s(((*l_150) , (g_485 != ((+(l_488 , (((((safe_mul_func_uint8_t_u_u((*l_187), 0xB7)) | 0x7A) , g_491) != (void*)0) != (*p_85)))) , &l_458))), 8))) , (*g_486)) , 5U) , (*g_24)) < (*p_85)), g_134)), 65533U)))) && l_450), 6)) <= (**g_329)), 9U)) | (*p_85))) , 255U))), 0x9381F147)), 0x7C)) > l_493) <= 0) > (*g_24)) != 0x2F);
                    }
                }
                (*l_182) &= (*l_163);
            }
        }
        else
        {
            int32_t l_496 = 0x6EFF648C;
            int32_t l_497 = 0x5A605346;
            int32_t l_498 = (-1);
            int16_t * const * const l_526 = &l_133;
            for (l_185 = (-2); (l_185 > (-22)); --l_185)
            {
                uint32_t l_499 = 4294967295U;
                uint32_t *l_515 = &g_406;
                int32_t *l_524 = (void*)0;
                int32_t *l_525 = &g_273;
                uint32_t *l_541 = &g_360;
                l_499++;
                (*l_151) = (((((*l_147) = (((((((**g_485) <= (safe_sub_func_uint8_t_u_u((+(safe_add_func_uint16_t_u_u(((***l_253) = (*g_24)), (l_507 != ((safe_div_func_int32_t_s_s((+(((*****g_326) > ((*l_515) = (safe_div_func_uint16_t_u_u(((*l_216) = (safe_mul_func_uint8_t_u_u(0x63, (((l_515 == ((safe_mod_func_int16_t_s_s((((*l_525) ^= (((-9) ^ ((safe_mul_func_int16_t_s_s(l_497, (safe_lshift_func_uint8_t_u_s(((void*)0 != (*g_326)), l_499)))) != (*l_178))) > (*g_492))) , 0x0DC7), (*l_151))) , (void*)0)) > 9U) == g_250)))), (*g_24))))) , 0xC74A)), 2U)) , (void*)0))))), l_497))) , l_526) != (void*)0) & 0xBA) , l_527) != l_527)) >= 0) < 0xB43E) && 8);
                if ((safe_sub_func_uint16_t_u_u(((((*l_541) = (safe_mul_func_uint8_t_u_u(l_532, (safe_add_func_uint8_t_u_u(((*g_492) || 246U), ((safe_sub_func_uint16_t_u_u((&g_273 != &g_319), ((*l_93) &= (safe_mul_func_int8_t_s_s(((**g_485) >= (safe_mod_func_uint32_t_u_u(((*l_129) = (((((((*l_515) = ((*l_131) |= g_17)) && 0x84D3B940) <= (*g_282)) || 0) >= (*p_85)) , 7U)), g_25))), 1U))))) != 0)))))) , (void*)0) != (void*)0), 0)))
                {
                    uint8_t * const **l_546 = (void*)0;
                    uint8_t * const **l_547 = (void*)0;
                    uint8_t * const l_550 = &g_551;
                    uint8_t * const *l_549 = &l_550;
                    uint8_t * const **l_548 = &l_549;
                    int32_t l_565 = 0x7ED3F3E7;
                    g_543--;
                    (*l_155) = (((*l_548) = &g_492) != &g_492);
                    l_565 = ((*l_177) = (safe_lshift_func_int8_t_s_s(0xF3, ((*g_486) ^ (safe_rshift_func_int16_t_s_u((safe_div_func_int16_t_s_s(((void*)0 != l_106), (((**l_121) = ((*l_216) = 0xD471)) ^ (((safe_lshift_func_int8_t_s_u((safe_add_func_int8_t_s_s(l_498, ((0x645FABA8 | (*l_181)) <= (safe_mul_func_int8_t_s_s((safe_unary_minus_func_int32_t_s(((*l_148) ^= (&g_268 == &l_120)))), (*g_492)))))), (**g_491))) >= 0x56EBD7AA) < (***g_328))))), 5))))));
                }
                else
                {
                    const int32_t **l_566 = &g_330;
                    (*l_566) = (**g_328);
                }
            }
        }
    }
    else
    {
        int32_t l_573 = 0x8253E9C7;
        const int32_t *** const *l_575 = (void*)0;
        const int32_t *** const **l_574 = &l_575;
        uint8_t *l_582 = (void*)0;
        if ((safe_div_func_uint16_t_u_u((((safe_div_func_uint16_t_u_u(((safe_add_func_int8_t_s_s(l_573, ((((l_576 = l_574) != ((safe_sub_func_int32_t_s_s(0xF886292D, (((((l_579 == (((safe_rshift_func_int16_t_s_u((**g_485), (*p_85))) , l_106) == l_582)) != (-2)) , 2) && 0) > g_551))) , (void*)0)) , 0xD398) || (**g_269)))) >= 0x4933A01B), 0x4C52)) && (*l_108)) && g_189), (-1))))
        {
            uint16_t *l_583 = &g_250;
            return l_583;
        }
        else
        {
            (*l_102) = ((**g_269) , (void*)0);
        }
    }
    return &g_250;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_10;
    csmith_sink_ = g_17;
    csmith_sink_ = g_25;
    csmith_sink_ = g_39;
    csmith_sink_ = g_88;
    csmith_sink_ = g_94;
    csmith_sink_ = g_107;
    csmith_sink_ = g_128;
    csmith_sink_ = g_130;
    csmith_sink_ = g_132;
    csmith_sink_ = g_134;
    csmith_sink_ = g_157;
    csmith_sink_ = g_162;
    csmith_sink_ = g_189;
    csmith_sink_ = g_198;
    csmith_sink_ = g_249;
    csmith_sink_ = g_250;
    csmith_sink_ = g_270;
    csmith_sink_ = g_273;
    csmith_sink_ = g_274;
    csmith_sink_ = g_301;
    csmith_sink_ = g_319;
    csmith_sink_ = g_360;
    csmith_sink_ = g_403;
    csmith_sink_ = g_406;
    csmith_sink_ = g_413;
    csmith_sink_ = g_542;
    csmith_sink_ = g_543;
    csmith_sink_ = g_551;
    csmith_sink_ = g_616;
    csmith_sink_ = g_686;
    csmith_sink_ = g_791;
    csmith_sink_ = g_793;
    csmith_sink_ = g_807;
    csmith_sink_ = g_813;
    csmith_sink_ = g_926;
    csmith_sink_ = g_1100;
    csmith_sink_ = g_1103;
    csmith_sink_ = g_1108;
    csmith_sink_ = g_1212;
    csmith_sink_ = g_1225;
    platform_main_end(0,0);
    return 0;
}
