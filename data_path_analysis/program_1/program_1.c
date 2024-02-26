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
static int32_t g_8 = 0xB6182EACL;
static int32_t *g_7 = &g_8;
static int32_t **g_53 = &g_7;
static uint16_t g_57 = 0x0DE2L;
static uint32_t g_59 = 0UL;
static int32_t g_82 = 0L;
static uint8_t g_98 = 0x70L;
static uint32_t g_126 = 0x63D90BC2L;
static uint8_t g_128 = 1UL;
static int32_t g_131 = (-1L);
static int32_t g_135 = 0x28131091L;
static int32_t g_209 = (-7L);
static uint8_t g_260 = 0x24L;
static uint16_t g_283 = 65535UL;
static uint32_t *g_291 = &g_126;
static uint32_t **g_290 = &g_291;
static uint32_t ***g_289 = &g_290;
static int16_t g_302 = 1L;
static uint32_t g_340 = 0x6200834EL;
static int32_t g_341 = (-3L);
static uint16_t g_412 = 0x577DL;
static uint8_t g_479 = 0xB3L;
static int16_t g_538 = 2L;
static int8_t g_549 = 0xEAL;
static uint32_t g_583 = 0x4C910CA1L;
static int16_t *g_591 = &g_302;
static int16_t **g_590 = &g_591;
static int32_t g_600 = 0xD86140C0L;
static int32_t ***g_605 = &g_53;
static int32_t ****g_604 = &g_605;
static uint32_t g_627 = 0xE39718DDL;
static int32_t **g_639 = (void*)0;
static int32_t *****g_682 = &g_604;
static uint32_t g_712 = 0x58F885F7L;
static int32_t g_776 = 5L;
static int16_t g_789 = 0x5359L;
static uint32_t g_801 = 0x62D02096L;
static uint16_t *g_809 = &g_283;
static uint16_t **g_808 = &g_809;
static uint32_t g_840 = 6UL;
static int32_t *g_920 = &g_82;
static int32_t g_1064 = (-9L);
static int32_t **g_1100 = &g_920;
static int32_t g_1174 = (-9L);
static int32_t g_1371 = 1L;
static int16_t g_1373 = 0x0768L;
static int32_t g_1376 = 8L;
static int32_t g_1387 = 0x7939BEBBL;
static uint32_t g_1392 = 4294967289UL;
static int32_t g_1697 = (-1L);
static uint16_t g_1699 = 0x6587L;
static int8_t g_1889 = 0x49L;
static uint8_t *g_1896 = &g_98;
static uint8_t **g_1895 = &g_1896;
static uint32_t ***g_2000 = &g_290;
static int32_t g_2143 = 0xCBF52574L;
static uint8_t g_2147 = 0x04L;
static int8_t *g_2192 = &g_1889;
static int8_t **g_2191 = &g_2192;
static int16_t g_2483 = (-1L);
static uint32_t g_2510 = 1UL;
static int32_t g_2795 = 0L;
static uint32_t g_2811 = 0x90AB0064L;
static int32_t *g_2879 = &g_1387;
static int32_t **g_2878 = &g_2879;
static int32_t g_2930 = 1L;
static uint16_t g_3174 = 2UL;
static int16_t g_3190 = 0x5B9EL;
static int32_t ****g_3347 = &g_605;
static uint8_t ***g_3565 = &g_1895;
static uint8_t ****g_3564 = &g_3565;
static int32_t g_3663 = 1L;
static int32_t g_3770 = 5L;
static uint32_t g_3921 = 0x9D3E782DL;
static int32_t **g_3944 = &g_7;
static int32_t *g_3953 = (void*)0;
static int8_t ***g_4111 = (void*)0;
static int8_t ****g_4110 = &g_4111;
static int8_t g_4313 = 2L;
static uint32_t g_4323 = 1UL;
static int16_t g_4465 = 9L;
static int32_t g_4494 = (-1L);
static uint32_t g_4861 = 18446744073709551607UL;
static int32_t g_4912 = 0xC3116D5CL;
static uint32_t g_4916 = 0xABA33F80L;
static uint16_t *g_4984 = (void*)0;
static uint32_t *g_5035 = &g_801;
static uint32_t **g_5034 = &g_5035;
static uint32_t ***g_5033 = &g_5034;
static int32_t g_5265 = 0xEFD13C66L;
static int32_t g_5273 = 9L;
static uint32_t g_5295 = 6UL;
static int16_t g_5337 = (-1L);
static int16_t g_5414 = 0L;
static uint16_t g_5555 = 7UL;
static int32_t *g_5568 = &g_2795;
static uint16_t g_5609 = 0xBD2FL;
static int8_t g_6014 = (-3L);
static uint8_t *****g_6039 = &g_3564;
static uint16_t func_1(void);
static int32_t * func_2(int32_t * p_3, int32_t * p_4, int8_t p_5, int32_t * p_6);
inline static int16_t func_11(int32_t * p_12, uint16_t p_13, int32_t p_14);
static int32_t func_20(uint16_t p_21, int32_t * p_22, uint32_t p_23, int8_t p_24, uint32_t p_25);
static int16_t func_30(int32_t * p_31, int32_t p_32);
inline static int32_t * func_33(int32_t * p_34, int16_t p_35, int32_t * p_36, uint32_t p_37, uint16_t p_38);
inline static int32_t func_42(int32_t * p_43, uint32_t p_44, int32_t p_45);
static int32_t * func_62(int32_t ** p_63, uint16_t * p_64, uint8_t p_65, int32_t ** p_66, uint16_t p_67);
inline static int32_t ** func_68(uint32_t * p_69, int32_t ** p_70, uint32_t * p_71, uint8_t p_72);
inline static int32_t ** func_73(uint16_t * p_74, int16_t p_75, uint32_t * p_76, int16_t p_77, int32_t ** p_78);
static uint16_t func_1(void)
{
    int32_t *l_15 = (void*)0;
    int32_t l_16 = 0x52F76EC7L;
    int32_t l_17 = 4L;
    uint16_t *l_6302 = &g_3174;
    uint16_t *l_6303 = &g_5609;
    (*g_1100) = func_2(g_7, &g_8, (safe_add_func_int16_t_s_s(func_11(l_15, l_16, l_17), (safe_add_func_uint16_t_u_u(((*l_6303) = ((safe_add_func_uint8_t_u_u((((*l_6302) = l_16) | g_341), (*g_1896))) & 255UL)), 65535UL)))), &l_16);
    return (**g_808);
}
static int32_t * func_2(int32_t * p_3, int32_t * p_4, int8_t p_5, int32_t * p_6)
{
    uint32_t **l_6304 = (void*)0;
    int32_t ***l_6305 = &g_2878;
    (**g_3944) &= ((void*)0 != l_6304);
    (*p_3) = (((*l_6305) = &g_2879) != (void*)0);
    return (*g_3944);
}
inline static int16_t func_11(int32_t * p_12, uint16_t p_13, int32_t p_14)
{
    int32_t l_1415 = 4L;
    int32_t l_1416 = (-1L);
    int32_t **l_5561 = &g_920;
    uint16_t *l_5562 = &g_57;
    int32_t *****l_5577 = &g_3347;
    int32_t l_5619 = 0xC7360C20L;
    uint32_t *l_5674 = (void*)0;
    int32_t l_5747 = 0L;
    int32_t l_5817 = 5L;
    int32_t l_5921 = 0L;
    int32_t l_5925 = 0xD5B4C30BL;
    int32_t l_5993 = 0L;
    int32_t l_6009 = 8L;
    uint16_t l_6016 = 65531UL;
    int8_t *l_6019 = &g_549;
    uint8_t *****l_6040 = (void*)0;
    int32_t l_6247 = 0xCC18D8CEL;
    uint16_t l_6265 = 1UL;
    uint32_t ****l_6283 = &g_289;
    int16_t *l_6294 = (void*)0;
    int16_t *l_6295 = &g_789;
    int16_t *l_6296 = (void*)0;
    int16_t *l_6297 = &g_4465;
    for (p_14 = 23; (p_14 == 26); p_14 = safe_add_func_uint8_t_u_u(p_14, 2))
    {
        int32_t *l_39 = &g_8;
        int8_t l_46 = 0xB4L;
        int32_t ****l_5567 = &g_605;
        uint32_t l_5570 = 0x9DAF100AL;
        uint32_t ****l_5595 = &g_289;
        uint8_t ****l_5618 = &g_3565;
        int32_t l_5636 = 1L;
        int8_t ****l_5697 = &g_4111;
        int32_t l_5712 = 0x1DDE5701L;
        int32_t l_5722 = 1L;
        int32_t l_5728 = 0xBD42B837L;
        int32_t l_5730 = 0x822DD07BL;
        int32_t l_5765 = (-1L);
        int32_t l_5820 = 5L;
        int32_t l_5849 = 0xDFBF561BL;
        int32_t l_5865 = 0xE69CE999L;
        int32_t l_5867 = 9L;
        int32_t l_5906 = 1L;
        int8_t l_5909 = 0xC4L;
        int32_t l_5926 = (-3L);
        int32_t l_5959 = 0x81947DF4L;
        int32_t l_5976 = 0x36C03C98L;
        int32_t l_6008 = (-9L);
        int32_t l_6015 = 9L;
        int8_t l_6274 = 0xDFL;
        if ((g_5555 = func_20((((void*)0 == &g_8) ^ (p_14 >= ((safe_sub_func_uint16_t_u_u((func_30(func_33(l_39, ((*g_591) = (safe_mod_func_uint16_t_u_u((((l_1415 &= (((*g_809) ^= (((g_8 != (func_42(l_39, ((l_46 , (&p_14 == l_39)) || g_8), (*g_7)) <= (*l_39))) < 0x9B9EL) > (*g_591))) && (*g_591))) , 0xD750L) | (*g_591)), l_1416))), &l_1416, (*l_39), p_14), l_1416) & 0x0126L), p_14)) && (*g_591)))), (****g_682), l_1416, l_1416, p_14)))
        {
            uint32_t **l_5556 = &g_5035;
            int32_t *l_5569 = &g_131;
            if ((0xBC05L != ((void*)0 != l_5556)))
            {
                int16_t l_5565 = 0xF4F0L;
                if ((*****g_682))
                    break;
                (*****g_682) = 0xFBB89C03L;
                for (g_2930 = 23; (g_2930 != 6); --g_2930)
                {
                    (**g_53) &= ((-7L) ^ ((*g_291)++));
                    (*l_5561) = func_62(l_5561, l_5562, (safe_lshift_func_uint8_t_u_s((l_5565 >= (+(****g_3564))), 3)), (**g_604), (**g_808));
                }
                (*g_682) = l_5567;
            }
            else
            {
                (*l_5561) = g_5568;
                (**g_53) = 0xED797AE9L;
            }
            (*l_5561) = (l_5569 = (*g_3944));
            if (p_14)
                break;
        }
        else
        {
            (*g_5568) |= ((0x403AL == l_5570) & (safe_mod_func_uint16_t_u_u(65526UL, (-2L))));
        }
        for (g_4912 = 0; (g_4912 != 29); ++g_4912)
        {
            int32_t l_5592 = 0x8355B21CL;
            int32_t l_5596 = 2L;
            for (g_5265 = 0; (g_5265 != 0); g_5265 = safe_add_func_uint8_t_u_u(g_5265, 3))
            {
                int16_t *l_5597 = (void*)0;
                int16_t *l_5598 = &g_4465;
                int32_t l_5599 = 4L;
                if ((****l_5567))
                    break;
                l_5577 = &g_604;
                l_5599 ^= (((safe_lshift_func_int16_t_s_u(0x4A0FL, 10)) <= (((***g_289) = (0x1CCBC5A4L || (247UL > (safe_add_func_int32_t_s_s((safe_mod_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_s((((*l_5598) ^= (safe_rshift_func_int16_t_s_u(((safe_lshift_func_int8_t_s_u((**g_2191), ((**g_3944) < (l_5596 ^= ((l_5592 , ((((((safe_unary_minus_func_int16_t_s((((+(&g_289 != (((((((*g_291) || 4294967288UL) <= (*g_591)) , (-5L)) , 0x73AB32B6L) , p_14) , l_5595))) < (**g_290)) >= (***g_2000)))) < p_14) == (**l_5561)) | p_14) , (**l_5561)) <= (**l_5561))) >= (*g_2192)))))) && 7UL), 0))) < 0UL), 7)) , 0UL), l_5592)), l_5592))))) == (***g_605))) >= l_5592);
                p_12 = (void*)0;
            }
        }
        for (g_1699 = 20; (g_1699 != 2); g_1699 = safe_sub_func_uint8_t_u_u(g_1699, 1))
        {
            uint32_t l_5602 = 0xF4E7C8D3L;
            uint8_t ****l_5617 = &g_3565;
            int8_t ****l_5651 = &g_4111;
            int32_t l_5660 = (-6L);
            int8_t l_5682 = 4L;
            uint16_t *l_5683 = &g_5609;
            int32_t l_5716 = (-1L);
            int32_t l_5787 = 0L;
            int32_t l_5792 = 0xE45CEBF8L;
            int32_t l_5823 = 0xF12B23C1L;
            int32_t l_5839 = 7L;
            int32_t l_5843 = 0x88357A01L;
            int32_t l_5858 = 9L;
            int32_t l_5877 = (-3L);
            int32_t l_5916 = 0x58548DE6L;
            int32_t l_5930 = (-1L);
            int32_t l_5939 = 0xF00BF07EL;
            int32_t l_6001 = (-1L);
            int32_t l_6007 = (-7L);
        }
        if (l_6274)
            break;
    }
    (*g_5568) = (safe_add_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u(0xD8L, 6)) | (((*l_6297) ^= ((*****l_5577) = (((safe_rshift_func_int8_t_s_u(((safe_lshift_func_uint8_t_u_u(0xCFL, ((p_13 > ((**g_590) ^= ((void*)0 != l_6283))) , (((safe_sub_func_int32_t_s_s((***g_605), (((*l_6019) = ((*****l_5577) | ((*l_6295) = ((!(((*g_5035) &= ((((((!((safe_add_func_uint32_t_u_u(((***g_2000) = p_13), (safe_rshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_s(((**g_590) = (*****l_5577)), 3)), (*****l_5577))))) , (-1L))) , 0x59B06E11L) == (**g_53)) != (*****l_5577)) == (**l_5561)) > 65526UL)) , p_13)) > 0x7F49E8FCL)))) | (*****l_5577)))) , p_12) != (void*)0)))) < (***g_605)), (***g_3565))) > (**l_5561)) >= p_13))) > 0L)), l_6247));
    return (*****l_5577);
}
static int32_t func_20(uint16_t p_21, int32_t * p_22, uint32_t p_23, int8_t p_24, uint32_t p_25)
{
    int8_t l_5554 = 0x77L;
    return l_5554;
}
static int16_t func_30(int32_t * p_31, int32_t p_32)
{
    uint32_t l_5526 = 0x7D5D2803L;
    int32_t *l_5527 = &g_135;
    int8_t l_5528 = 7L;
    int32_t **l_5529 = &l_5527;
    uint32_t l_5530 = 0x88A9712EL;
    int16_t *l_5535 = &g_1373;
    uint32_t **l_5542 = &g_5035;
    uint32_t *l_5551 = &g_1392;
    int32_t *l_5552 = &g_82;
    uint32_t l_5553 = 0x4ADB2FC6L;
    (*l_5529) = ((*g_1100) = func_33(((*g_1100) = ((safe_lshift_func_int8_t_s_s(((((((*g_2879) , (&g_590 != ((safe_add_func_int32_t_s_s((****g_3347), ((**g_290) ^= 0xB0C2484FL))) , &g_590))) >= l_5526) == (0xB75EL < (*g_591))) , ((l_5526 || l_5526) == l_5526)) ^ l_5526), 4)) , (void*)0)), (**g_590), l_5527, (*l_5527), l_5528));
    (*l_5527) = (((l_5530 < ((p_32 >= (safe_mod_func_int32_t_s_s(((***g_605) = ((safe_mod_func_int32_t_s_s(((0x315E37E8L & (((**g_290) <= ((((**l_5529) & (((((*g_590) == l_5535) <= (((~((safe_lshift_func_int8_t_s_s((!((safe_lshift_func_uint16_t_u_s(((p_32 ^ (((((*g_5033) = l_5542) != l_5542) & (**l_5529)) ^ (*g_1896))) , (**g_808)), (**l_5529))) > 1L)), p_32)) <= (*l_5527))) , (**l_5529)) != p_32)) , &p_32) == (*g_53))) , (***g_3565)) , 0L)) , (**l_5529))) , (*l_5527)), (*p_31))) == p_32)), 4UL))) <= 255UL)) || 9UL) >= 65535UL);
    l_5552 = ((*l_5529) = ((((safe_sub_func_int16_t_s_s((p_32 <= (safe_add_func_uint16_t_u_u(((((**g_290) |= 1UL) == (**l_5529)) == (*l_5527)), 0L))), (((*l_5535) = (safe_add_func_int32_t_s_s((((((void*)0 == &g_4111) , (((**l_5529) && (safe_sub_func_uint32_t_u_u(((*l_5551) = p_32), (*p_31)))) ^ p_32)) <= 0x3EL) != p_32), 0xBF47646FL))) | (*g_809)))) || (**l_5529)) > 0xC05AAE4AL) , (void*)0));
    return l_5553;
}
inline static int32_t * func_33(int32_t * p_34, int16_t p_35, int32_t * p_36, uint32_t p_37, uint16_t p_38)
{
    int32_t *l_1417 = &g_1371;
    int32_t l_1424 = 0L;
    int32_t l_1430 = 9L;
    int32_t l_1523 = 0x723AAB3FL;
    int32_t l_1525 = 0xF48808FEL;
    int32_t l_1597 = 7L;
    int32_t l_1605 = 0xBF4C2CF8L;
    int32_t l_1680 = 8L;
    int32_t ***l_1728 = (void*)0;
    int32_t l_1928 = 0L;
    uint16_t l_1971 = 0x2424L;
    uint8_t l_1974 = 9UL;
    uint16_t **l_1976 = (void*)0;
    int32_t **l_2018 = &l_1417;
    int16_t **l_2206 = (void*)0;
    uint32_t l_2211 = 0x626F3864L;
    int32_t l_2326 = 0xDBCDC619L;
    int32_t l_2341 = 2L;
    int32_t l_2351 = (-5L);
    int32_t l_2477 = 0xA839EBA6L;
    int32_t *l_2902 = &l_2477;
    int16_t **l_2910 = &g_591;
    int32_t l_2911 = (-9L);
    int16_t l_2985 = 0L;
    uint8_t **l_3254 = &g_1896;
    int8_t *l_3290 = (void*)0;
    int8_t **l_3535 = &l_3290;
    int8_t l_3540 = 0x36L;
    int8_t ***l_3932 = (void*)0;
    int8_t ****l_3931 = &l_3932;
    uint8_t l_3972 = 0xB6L;
    uint16_t l_4098 = 0x1184L;
    int32_t l_4234 = 0xFFA0FD05L;
    int32_t l_4263 = 0xAD69F3A7L;
    int32_t l_4272 = 0x629D17EDL;
    int32_t l_4278 = (-10L);
    int32_t l_4288 = 0L;
    int32_t l_4292 = (-10L);
    int32_t l_4306 = 0xB2BD5232L;
    int32_t l_4309 = 6L;
    int32_t *****l_4356 = &g_3347;
    uint32_t *l_4358 = (void*)0;
    uint32_t **l_4357 = &l_4358;
    uint32_t ****l_4398 = &g_289;
    int32_t l_4434 = 0xB6603B55L;
    int16_t l_4530 = 0xC316L;
    int8_t l_4813 = 0L;
    uint32_t l_4892 = 0x8493B940L;
    int16_t l_4911 = 0x0BBBL;
    int32_t *l_4918 = &g_1371;
    uint8_t l_4949 = 6UL;
    int32_t **l_4950 = &l_1417;
    uint8_t l_5434 = 0xC1L;
    uint32_t l_5519 = 4294967294UL;
    return p_36;
}
inline static int32_t func_42(int32_t * p_43, uint32_t p_44, int32_t p_45)
{
    int32_t *l_48 = &g_8;
    int32_t **l_47 = &l_48;
    uint16_t *l_56 = &g_57;
    uint32_t *l_58 = &g_59;
    uint16_t l_80 = 0x06F6L;
    int32_t l_1101 = 0x4D5E80FAL;
    int8_t l_1107 = 0xD8L;
    int32_t l_1169 = 0xCE18B881L;
    uint32_t l_1191 = 4294967294UL;
    int8_t l_1315 = (-1L);
    int32_t **l_1411 = &l_48;
    (*l_47) = (void*)0;
    p_45 = ((safe_add_func_int32_t_s_s((0xD370L == (p_45 , g_8)), ((*p_43) < ((*l_58) = (safe_sub_func_uint16_t_u_u((&l_48 != g_53), (((*l_56) |= (g_8 >= (safe_add_func_uint16_t_u_u(p_44, ((p_45 , g_8) , p_44))))) <= p_44))))))) == p_44);
    for (g_57 = 0; (g_57 <= 28); ++g_57)
    {
        uint16_t *l_79 = &g_57;
        int32_t *l_81 = &g_82;
        int16_t l_95 = 0xD357L;
        uint8_t *l_96 = (void*)0;
        uint8_t *l_97 = &g_98;
        uint16_t l_99 = 0x1253L;
        int32_t l_1074 = (-10L);
        uint32_t ***l_1086 = &g_290;
        int32_t **l_1095 = &l_48;
        int32_t l_1131 = (-3L);
        int32_t l_1166 = 1L;
    }
    return (*p_43);
}
static int32_t * func_62(int32_t ** p_63, uint16_t * p_64, uint8_t p_65, int32_t ** p_66, uint16_t p_67)
{
    int32_t *l_1078 = &g_209;
    for (g_412 = (-14); (g_412 != 2); g_412 = safe_add_func_int16_t_s_s(g_412, 8))
    {
        int32_t l_1077 = 1L;
        (*g_920) = l_1077;
    }
    return l_1078;
}
inline static int32_t ** func_68(uint32_t * p_69, int32_t ** p_70, uint32_t * p_71, uint8_t p_72)
{
    uint16_t l_625 = 0xA5ECL;
    int8_t l_626 = (-1L);
    int8_t l_628 = 0x82L;
    uint16_t *l_636 = (void*)0;
    uint16_t **l_635 = &l_636;
    int32_t ***l_637 = (void*)0;
    int32_t ***l_638 = &g_53;
    uint16_t *l_640 = &g_283;
    int32_t l_641 = 0L;
    int32_t l_715 = 0xCC45CE51L;
    uint16_t l_869 = 0x6F4DL;
    if ((safe_rshift_func_int8_t_s_s((l_625 && (((((g_627 = l_626) ^ ((((***g_289) && l_628) , (l_625 <= (((safe_rshift_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(p_72, (0L | ((*l_640) = (p_70 != (g_639 = p_70)))))), 0)) , (**g_639)) >= (**p_70)))) | (**g_590))) && g_8) | g_98) >= (**p_70))), 2)))
    {
lbl_844:
        l_641 ^= ((-7L) < (*g_7));
    }
    else
    {
        uint16_t l_644 = 0x05FFL;
        int32_t l_713 = 5L;
        int32_t l_716 = 4L;
        int8_t l_797 = (-1L);
        uint16_t **l_887 = &l_636;
        int32_t l_889 = 0x06845A19L;
        uint16_t l_918 = 0UL;
        int32_t l_919 = (-3L);
        int32_t *l_925 = (void*)0;
        int32_t l_935 = 0xAD649C54L;
        for (p_72 = (-5); (p_72 > 36); p_72 = safe_add_func_uint8_t_u_u(p_72, 9))
        {
            uint16_t *l_647 = &g_283;
            int32_t l_658 = 0xB00E6010L;
            int32_t *l_661 = &l_658;
            int32_t l_662 = 0xCE6D024CL;
            int32_t l_663 = (-1L);
            int8_t *l_670 = &l_628;
            int32_t *l_674 = (void*)0;
            int32_t *l_675 = &g_341;
            uint8_t *l_678 = (void*)0;
            uint8_t *l_679 = &g_260;
            uint32_t l_821 = 0xE6960AF9L;
            uint32_t *l_830 = &g_712;
            l_644--;
            l_663 &= ((l_647 == ((((((((((safe_sub_func_int32_t_s_s((l_662 = ((*l_661) = (safe_mod_func_uint8_t_u_u(255UL, (safe_mod_func_uint16_t_u_u(g_8, (((**p_70) <= (((void*)0 != &g_290) > (safe_lshift_func_uint8_t_u_s(((safe_lshift_func_uint16_t_u_s((l_658 , ((safe_mod_func_int8_t_s_s(((l_644 || (l_658 && (**p_70))) , g_209), g_59)) == 0x47D4C15BL)), 1)) > 0x18L), p_72)))) && l_644))))))), 9L)) & (**g_290)) | 0x50L) , (*g_591)) , l_661) == (void*)0) != 0x42L) ^ g_479) != (-1L)) , &l_644)) >= g_82);
        }
        for (g_627 = (-17); (g_627 <= 16); g_627++)
        {
            int16_t l_843 = 0xE77CL;
            int8_t *l_847 = &l_628;
            int8_t *l_848 = &g_549;
            int32_t *l_863 = (void*)0;
            int32_t l_864 = 0xB1264F06L;
            if (l_843)
                break;
            if (l_641)
                goto lbl_844;
            if ((**p_70))
                continue;
            l_864 = ((((safe_add_func_int16_t_s_s(((**g_590) ^= (((*l_848) = ((*l_847) = g_583)) < 0x55L)), (safe_add_func_uint32_t_u_u(((*p_71) = (safe_rshift_func_uint16_t_u_u(0x1593L, 15))), (safe_lshift_func_uint8_t_u_s(((--(*l_640)) == g_131), g_131)))))) != l_843) > p_72) , (safe_add_func_uint32_t_u_u(((((safe_rshift_func_int8_t_s_u((g_549 = ((((*g_809) = (&g_549 == (((safe_add_func_int32_t_s_s((**p_70), 0x378B4259L)) | (-9L)) , &l_797))) <= l_644) ^ p_72)), p_72)) <= (*p_71)) != g_627) < (**p_70)), l_797)));
        }
        for (g_340 = 0; (g_340 <= 11); g_340++)
        {
            int16_t l_876 = 0xCD43L;
            uint8_t *l_911 = &g_260;
            int32_t *l_914 = (void*)0;
            int32_t l_926 = 0x7E6CD3EAL;
            int32_t l_940 = 5L;
            int32_t l_958 = 0xF5ECCF91L;
            int32_t l_965 = 1L;
            int32_t ***l_1063 = &g_639;
        }
    }
    return p_70;
}
inline static int32_t ** func_73(uint16_t * p_74, int16_t p_75, uint32_t * p_76, int16_t p_77, int32_t ** p_78)
{
    uint32_t *l_116 = &g_59;
    int8_t l_133 = (-4L);
    uint16_t l_138 = 65526UL;
    int32_t l_139 = 0xA35DC676L;
    int32_t l_166 = 0x22A4178BL;
    int32_t l_175 = 0x235E97BCL;
    int32_t l_211 = 0x2BE9FDC9L;
    int32_t l_231 = 0x83E1B125L;
    int32_t *l_347 = &l_139;
    int16_t *l_376 = &g_302;
    uint16_t l_391 = 1UL;
    uint32_t ***l_392 = &g_290;
    for (g_82 = 0; (g_82 == (-8)); --g_82)
    {
        uint32_t **l_117 = &l_116;
        int32_t l_118 = 0L;
        int32_t l_123 = 0x427CCDDEL;
        uint8_t *l_124 = &g_98;
        int32_t l_125 = (-1L);
        uint8_t *l_127 = &g_128;
        int32_t *l_129 = &l_118;
        uint16_t *l_130 = (void*)0;
        uint16_t l_132 = 9UL;
        int32_t *l_134 = &g_135;
        int32_t l_176 = 0x0419DFFBL;
        int32_t l_177 = (-2L);
        int32_t l_229 = (-10L);
        int32_t l_259 = 0xF92F1956L;
        int32_t l_343 = 1L;
        int32_t l_438 = 0xF890D4C2L;
        int8_t l_480 = 1L;
        int16_t l_595 = 8L;
        (*l_134) ^= (((safe_add_func_int8_t_s_s((((!((safe_lshift_func_uint8_t_u_u((safe_add_func_int16_t_s_s((safe_add_func_int16_t_s_s(((((*p_74) ^ ((safe_rshift_func_uint16_t_u_s((g_131 = (((**p_78) ^ (((1L || ((*l_129) = ((!((*l_127) = ((((safe_add_func_uint8_t_u_u(((void*)0 == p_76), (((0x30262A88L & ((((*l_117) = l_116) == ((g_126 = (l_118 <= ((safe_add_func_uint16_t_u_u((((safe_mod_func_uint8_t_u_u(((*l_124) = (l_123 = ((l_123 || (-2L)) == p_75))), g_8)) | (**p_78)) , l_125), p_75)) <= g_57))) , p_76)) <= l_125)) , l_125) ^ 0xFFL))) ^ p_77) | l_118) , 0x73L))) > 0xA0D6L))) , (*g_53)) != &l_125)) != 0xC4L)), g_57)) > p_77)) < 0x3FE16D89L) & l_132), g_82)), l_133)), g_8)) && g_98)) || 0xD4L) > g_57), 0UL)) , 0x0BL) || 0xA6L);
        if ((safe_add_func_uint32_t_u_u(((**l_117) = l_138), ((p_77 , 0x2B52L) < g_135))))
        {
            int32_t *l_140 = &g_131;
            int32_t *l_141 = &l_125;
            int32_t *l_142 = &g_131;
            int32_t *l_143 = (void*)0;
            int32_t *l_144 = &l_139;
            int32_t *l_145 = &l_139;
            int32_t *l_146 = (void*)0;
            int32_t *l_147 = &l_125;
            int32_t *l_148 = &l_123;
            int32_t *l_149 = &l_139;
            int32_t *l_150 = &g_135;
            int32_t *l_151 = &l_118;
            int32_t *l_152 = &l_125;
            int32_t *l_153 = &g_131;
            int32_t *l_154 = &l_118;
            int32_t *l_155 = &l_123;
            int32_t *l_156 = &l_123;
            int32_t l_157 = 7L;
            int32_t *l_158 = &g_131;
            int32_t *l_159 = &g_135;
            int32_t *l_160 = &l_125;
            int32_t *l_161 = &l_139;
            int32_t *l_162 = &g_131;
            int32_t *l_163 = &g_131;
            int32_t *l_164 = &g_131;
            int32_t *l_165 = &g_131;
            int32_t *l_167 = &g_131;
            int32_t *l_168 = (void*)0;
            int32_t *l_169 = &l_139;
            int32_t *l_170 = &l_125;
            int32_t *l_171 = &g_135;
            int32_t *l_172 = &l_166;
            int32_t *l_173 = &g_135;
            int32_t *l_174 = &l_139;
            int32_t *l_178 = &g_135;
            int32_t *l_179 = &l_166;
            int32_t *l_180 = (void*)0;
            int32_t *l_181 = &g_131;
            int32_t *l_182 = (void*)0;
            int32_t *l_183 = &l_118;
            int32_t *l_184 = &l_177;
            int32_t *l_185 = &l_123;
            int32_t *l_186 = &g_131;
            int32_t *l_187 = (void*)0;
            int32_t *l_188 = &g_135;
            int32_t *l_189 = &l_177;
            int32_t *l_190 = &l_175;
            int32_t *l_191 = &l_166;
            int32_t *l_192 = &l_166;
            int32_t *l_193 = &l_175;
            int32_t *l_194 = &l_176;
            int32_t *l_195 = &l_175;
            int32_t *l_196 = &l_118;
            int32_t *l_197 = &l_175;
            int32_t *l_198 = &l_176;
            int32_t *l_199 = &l_176;
            int32_t *l_200 = &l_139;
            int32_t *l_201 = &l_177;
            int32_t *l_202 = (void*)0;
            int32_t *l_203 = &l_157;
            int32_t *l_204 = &l_166;
            int32_t *l_205 = &l_176;
            int32_t *l_206 = &l_166;
            int32_t *l_207 = (void*)0;
            int32_t *l_208 = (void*)0;
            int32_t *l_210 = &l_125;
            int32_t *l_212 = &l_177;
            int32_t *l_213 = &l_118;
            int32_t *l_214 = &g_135;
            int32_t *l_215 = &g_131;
            int32_t *l_216 = (void*)0;
            int32_t *l_217 = &l_157;
            int32_t *l_218 = &g_209;
            int32_t *l_219 = &l_139;
            int32_t *l_220 = &g_135;
            int32_t *l_221 = &l_118;
            int32_t *l_222 = &l_175;
            int32_t *l_223 = &g_131;
            int32_t *l_224 = &l_211;
            int32_t *l_225 = &l_176;
            int32_t *l_226 = &g_135;
            int32_t *l_227 = &l_166;
            int32_t *l_228 = &l_166;
            int32_t *l_230 = &l_166;
            int32_t *l_232 = &g_209;
            int32_t *l_233 = &l_123;
            int32_t *l_234 = &g_135;
            int32_t *l_235 = &l_125;
            int32_t *l_236 = &l_118;
            int32_t *l_237 = &g_135;
            int32_t *l_238 = &g_135;
            int32_t *l_239 = &l_118;
            int32_t *l_240 = &l_175;
            int32_t *l_241 = &l_175;
            int32_t *l_242 = &l_166;
            int32_t *l_243 = (void*)0;
            int32_t *l_244 = &g_131;
            int32_t *l_245 = &l_211;
            int32_t *l_246 = &g_131;
            int32_t *l_247 = (void*)0;
            int32_t *l_248 = &l_211;
            int32_t *l_249 = &l_231;
            int32_t *l_250 = &l_231;
            int32_t *l_251 = &g_135;
            int32_t *l_252 = (void*)0;
            int32_t *l_253 = &l_231;
            int32_t l_254 = 0x5CA0C00BL;
            int32_t *l_255 = (void*)0;
            int32_t *l_256 = &g_131;
            int32_t *l_257 = &l_125;
            int32_t *l_258 = (void*)0;
            uint32_t ***l_263 = &l_117;
            uint8_t *l_288 = (void*)0;
            uint8_t l_344 = 0x9FL;
            --g_260;
            (*l_263) = &p_76;
            (*l_185) = ((safe_unary_minus_func_uint8_t_u((safe_add_func_int32_t_s_s((safe_mod_func_uint8_t_u_u(((((((((((void*)0 != &l_254) == ((((safe_sub_func_int16_t_s_s((*l_134), (safe_mod_func_uint16_t_u_u((g_283 ^= (safe_rshift_func_uint8_t_u_s(((safe_sub_func_int8_t_s_s(g_126, 0x47L)) <= ((safe_add_func_uint8_t_u_u(((((*l_117) = (*l_117)) == ((safe_add_func_uint32_t_u_u((*l_129), ((*l_172) |= ((void*)0 != l_127)))) , &g_59)) , g_57), 0xDAL)) , 9L)), l_133))), (*p_74))))) , 8UL) , l_116) != &g_126)) > g_209) > l_231) && 0L) | p_77) || (*p_74)) , (*l_232)) != 0UL), p_77)), p_75)))) != g_57);
            if (((safe_rshift_func_int16_t_s_s(0x6C97L, 15)) != (g_283 = ((p_77 , (*l_165)) & (g_260 ^ (safe_rshift_func_uint8_t_u_s((0x5EL < g_126), (((*l_253) = 6L) <= l_133))))))))
            {
                (*l_218) &= (l_288 == &g_260);
                (*l_142) |= ((5UL != (((p_75 <= (*p_74)) , g_289) != (void*)0)) && (p_78 == &l_155));
                for (l_123 = 0; (l_123 <= (-3)); --l_123)
                {
                    uint32_t l_303 = 0x2B824888L;
                    if ((*g_7))
                        break;
                    for (l_259 = 15; (l_259 > (-1)); l_259--)
                    {
                        int32_t l_298 = 0x9E8BE2EBL;
                        int16_t *l_301 = &g_302;
                        l_303 = ((safe_lshift_func_uint16_t_u_u((l_166 , (*l_193)), 15)) && (((-1L) || ((p_75 , &g_290) == (((((*l_301) ^= (l_298 ^ ((((*g_291) = (((((void*)0 != &g_290) >= (((safe_add_func_int32_t_s_s((**p_78), l_166)) > (*g_7)) != 1L)) ^ 0x1BADL) , 0x902EFDF3L)) || (-1L)) ^ (**p_78)))) || 0x3BF2L) , p_77) , (void*)0))) >= 0xF6C7F8FBL));
                    }
                    return p_78;
                }
            }
            else
            {
                int32_t *l_316 = &l_175;
                if ((+((safe_mod_func_int32_t_s_s(((safe_rshift_func_int8_t_s_s(((safe_lshift_func_int8_t_s_u(((((~((0x35L ^ (safe_rshift_func_uint8_t_u_s(l_166, 6))) , (((*p_78) != ((++(*l_124)) , l_316)) , p_75))) , l_263) == (void*)0) < ((safe_lshift_func_uint8_t_u_s(((((*l_134) , &g_290) != l_263) , g_128), 2)) && (***g_289))), 0)) < (-9L)), 5)) == (*l_134)), (**g_290))) == g_260)))
                {
                    int32_t ***l_323 = &g_53;
                    if ((safe_add_func_int32_t_s_s((*g_7), (((safe_lshift_func_int8_t_s_u((&g_283 == (void*)0), 2)) > (((255UL & (((*l_323) = &l_134) != p_78)) < 3UL) , p_77)) && ((((*l_215) = (**p_78)) , p_76) != p_76)))))
                    {
                        (**l_323) = (*g_53);
                    }
                    else
                    {
                        uint16_t *l_339 = &l_138;
                        int8_t *l_342 = &l_133;
                        (*l_179) = (((safe_sub_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((***l_323), 11)), (((*l_342) &= ((g_131 && g_302) , (safe_add_func_int32_t_s_s(((safe_add_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(((safe_unary_minus_func_uint32_t_u((((g_341 = (g_340 = (g_283 &= ((((((**p_78) | (*l_316)) , (safe_unary_minus_func_uint32_t_u((+((*l_316) , (**p_78)))))) || 0xD5ACL) <= (safe_sub_func_uint16_t_u_u(((*l_339) = (1UL <= l_231)), (*l_316)))) | l_211)))) <= (*l_316)) | (**g_53)))) < 0x02L), 4L)), p_77)) != 65533UL), (*l_316))))) <= p_75))) == 65531UL) | g_98);
                        ++l_344;
                        l_347 = (*p_78);
                    }
                    return &g_7;
                }
                else
                {
                    return &g_7;
                }
            }
        }
        else
        {
            uint16_t l_359 = 0x1984L;
            int8_t *l_382 = &l_133;
            int32_t ***l_388 = &g_53;
            int32_t l_486 = 0x5C314755L;
            int32_t l_561 = 0L;
            for (l_211 = 21; (l_211 >= (-17)); l_211 = safe_sub_func_int8_t_s_s(l_211, 9))
            {
                int32_t l_356 = 0x7519BBCBL;
                int32_t **l_372 = &g_7;
                int16_t *l_375 = &g_302;
                int16_t **l_377 = &l_376;
                uint32_t l_397 = 0xCEF5FAAFL;
                int32_t *l_413 = &l_176;
                for (g_128 = (-20); (g_128 != 44); g_128 = safe_add_func_int32_t_s_s(g_128, 4))
                {
                    int16_t l_352 = (-9L);
                    if (l_352)
                    {
                        uint16_t *l_355 = &l_132;
                        int32_t l_366 = 0L;
                        int16_t *l_371 = &l_352;
                        (*l_129) ^= (safe_rshift_func_uint16_t_u_s(((*l_355) = 0UL), (l_356 = (((void*)0 == &p_76) && g_260))));
                        if ((**p_78))
                            continue;
                        (*l_129) = (safe_add_func_uint16_t_u_u((l_359 >= (g_98 != (((safe_rshift_func_int8_t_s_s((l_352 || ((safe_add_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((g_302 &= ((*l_371) ^= ((0x8F4AL && ((l_366 , ((*g_289) != (l_117 = (*g_289)))) && (g_209 == ((safe_sub_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((-9L), l_359)), (-1L))) >= p_75)))) , g_57))), 14)), 0xFC96L)) && p_75)), 1)) && (**p_78)) != (*l_347)))), (*p_74)));
                        return p_78;
                    }
                    else
                    {
                        return l_372;
                    }
                }
                if ((safe_mul_func_int16_t_s_s((*l_134), ((l_375 == ((*l_377) = l_376)) , (safe_lshift_func_uint16_t_u_s((safe_mod_func_uint16_t_u_u(((((-8L) & g_260) || (((g_260 < ((void*)0 == l_382)) <= ((*l_347) , 0xB903L)) , (*l_347))) == 0xD1E5L), 1L)), 3))))))
                {
                    int32_t ****l_389 = &l_388;
                    int32_t ***l_390 = &g_53;
                    uint8_t l_395 = 0x31L;
                    uint16_t *l_396 = &l_132;
                    (*l_129) &= (safe_add_func_uint32_t_u_u(0x2F24C6D4L, (((((*l_396) = (~(safe_rshift_func_int16_t_s_s(((((l_390 = ((*l_389) = l_388)) == &g_53) <= (((*l_134) && ((**p_78) == (l_391 >= g_8))) | (l_392 != (((safe_sub_func_int8_t_s_s((0xC095L ^ g_8), l_395)) || p_75) , l_392)))) != 0xD4L), 14)))) , l_397) | (*l_134)) , (*g_291))));
                }
                else
                {
                    uint32_t l_401 = 9UL;
                    for (l_397 = 0; (l_397 >= 9); l_397 = safe_add_func_int8_t_s_s(l_397, 9))
                    {
                        int32_t **l_400 = &l_134;
                        (*l_400) = (*g_53);
                        (*l_129) = ((*l_347) |= l_401);
                    }
                }
                (*l_413) ^= (safe_add_func_int8_t_s_s(((g_128 > ((((((***l_388) & (((*g_7) > ((***l_392) ^= ((*l_134) == (*g_7)))) != (((***l_388) != ((((safe_add_func_uint16_t_u_u(((((*l_375) = ((((((((p_77 , (safe_lshift_func_int8_t_s_u(((((&g_57 == ((((*l_382) |= ((***l_388) > 0x9F67L)) >= (*l_347)) , (void*)0)) >= p_77) | (*l_129)) | 0x36DBL), g_340))) , (*p_78)) == (*g_53)) & 0L) <= (***l_388)) | g_412) ^ 0x826348B1L) >= 1L)) ^ p_75) != 0x1923L), (**l_372))) && (**p_78)) , 0x590FL) >= 1UL)) || p_75))) > p_77) , 0xE1C72E30L) == 0L) == (*l_347))) & g_260), (*l_347)));
                for (l_259 = 0; (l_259 < (-7)); l_259 = safe_sub_func_int16_t_s_s(l_259, 8))
                {
                    (*l_347) = ((*l_413) = (**g_53));
                }
            }
            for (l_359 = 0; (l_359 <= 14); l_359 = safe_add_func_uint32_t_u_u(l_359, 9))
            {
                return (*l_388);
            }
            if ((safe_add_func_uint32_t_u_u(((0x56L > p_75) <= (safe_rshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_s((safe_sub_func_int32_t_s_s((((safe_add_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((0L & p_75), 12)), (safe_mod_func_uint32_t_u_u(0x54AB4E64L, ((g_260 | (safe_unary_minus_func_uint32_t_u((*l_134)))) || (((+(safe_add_func_uint32_t_u_u((*l_347), ((**g_290) = 0UL)))) == g_340) >= l_438)))))), g_82)) != (*p_74)) == (**p_78)), (*l_347))), 5)), 8))), (*l_347))))
            {
                return p_78;
            }
            else
            {
                uint8_t *l_449 = &g_128;
                int32_t l_468 = 0x924C3FCAL;
                int32_t l_510 = 5L;
                int32_t l_573 = 0x1FB03A89L;
                for (g_128 = (-4); (g_128 == 41); g_128 = safe_add_func_int16_t_s_s(g_128, 5))
                {
                    uint16_t *l_448 = &l_391;
                    uint16_t **l_454 = &l_448;
                    int32_t l_455 = 7L;
                    int32_t *l_481 = &l_229;
                    int32_t l_502 = 0xCC582CEDL;
                    int32_t l_514 = 0xF27435C9L;
                    int16_t **l_592 = (void*)0;
                    uint16_t *l_601 = &l_138;
                    int32_t ****l_606 = &l_388;
                    uint16_t l_612 = 2UL;
                    int32_t l_619 = (-1L);
                    l_455 = (((safe_lshift_func_int8_t_s_s(((((*p_74) ^ ((safe_mod_func_int32_t_s_s((((*p_74) && (~((*l_134) , ((((((*l_448) = ((*l_129) |= ((void*)0 == l_392))) , (l_449 != &g_128)) == 0UL) , ((*l_454) = (((*l_124) = (safe_mod_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s(((*g_291) ^ 8L), g_260)), (**g_290)))) , (void*)0))) != &g_283)))) , (**p_78)), (*g_291))) > g_340)) , 0L) == g_128), g_82)) == l_455) <= 0x24L);
                }
            }
        }
    }
    return (*g_605);
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_8;
    csmith_sink_ = g_57;
    csmith_sink_ = g_59;
    csmith_sink_ = g_82;
    csmith_sink_ = g_98;
    csmith_sink_ = g_126;
    csmith_sink_ = g_128;
    csmith_sink_ = g_131;
    csmith_sink_ = g_135;
    csmith_sink_ = g_209;
    csmith_sink_ = g_260;
    csmith_sink_ = g_283;
    csmith_sink_ = g_302;
    csmith_sink_ = g_340;
    csmith_sink_ = g_341;
    csmith_sink_ = g_412;
    csmith_sink_ = g_479;
    csmith_sink_ = g_538;
    csmith_sink_ = g_549;
    csmith_sink_ = g_583;
    csmith_sink_ = g_600;
    csmith_sink_ = g_627;
    csmith_sink_ = g_712;
    csmith_sink_ = g_776;
    csmith_sink_ = g_789;
    csmith_sink_ = g_801;
    csmith_sink_ = g_840;
    csmith_sink_ = g_1064;
    csmith_sink_ = g_1174;
    csmith_sink_ = g_1371;
    csmith_sink_ = g_1373;
    csmith_sink_ = g_1376;
    csmith_sink_ = g_1387;
    csmith_sink_ = g_1392;
    csmith_sink_ = g_1697;
    csmith_sink_ = g_1699;
    csmith_sink_ = g_1889;
    csmith_sink_ = g_2143;
    csmith_sink_ = g_2147;
    csmith_sink_ = g_2483;
    csmith_sink_ = g_2510;
    csmith_sink_ = g_2795;
    csmith_sink_ = g_2811;
    csmith_sink_ = g_2930;
    csmith_sink_ = g_3174;
    csmith_sink_ = g_3190;
    csmith_sink_ = g_3663;
    csmith_sink_ = g_3770;
    csmith_sink_ = g_3921;
    csmith_sink_ = g_4313;
    csmith_sink_ = g_4323;
    csmith_sink_ = g_4465;
    csmith_sink_ = g_4494;
    csmith_sink_ = g_4861;
    csmith_sink_ = g_4912;
    csmith_sink_ = g_4916;
    csmith_sink_ = g_5265;
    csmith_sink_ = g_5273;
    csmith_sink_ = g_5295;
    csmith_sink_ = g_5337;
    csmith_sink_ = g_5414;
    csmith_sink_ = g_5555;
    csmith_sink_ = g_5609;
    csmith_sink_ = g_6014;
    platform_main_end(0,0);
    return 0;
}
