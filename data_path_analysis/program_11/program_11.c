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
static int32_t g_18 = 1;
static uint32_t g_27 = 0x55FFF839;
static uint32_t g_42 = 4294967290U;
static uint8_t g_100 = 254U;
static int16_t g_151 = 0xEA40;
static uint32_t g_174 = 0xB75F9727;
static int8_t g_197 = 0xA9;
static uint32_t g_201 = 0x1F742CEB;
static uint8_t g_206 = 0xC0;
static int32_t g_286 = (-4);
static int16_t g_304 = 0x327C;
static int8_t g_339 = 5;
static uint32_t g_340 = 0x10234A52;
static int32_t g_345 = 0;
static uint32_t g_346 = 6U;
static uint16_t g_447 = 4U;
static uint8_t g_470 = 0U;
static int8_t g_518 = 0x77;
static uint8_t g_520 = 0x03;
static uint8_t g_575 = 0x44;
static int8_t g_583 = (-2);
static uint8_t g_584 = 0xA2;
static uint16_t g_640 = 0U;
static int8_t g_676 = (-1);
static int32_t g_703 = 0x75EEA743;
static uint32_t g_707 = 0x6B0DB3F9;
static uint32_t g_715 = 0xB91E947A;
static uint32_t g_718 = 0x3B61F78B;
static int32_t func_1(void);
static int32_t func_2(int8_t p_3);
static uint16_t func_9(uint16_t p_10, int32_t p_11, int32_t p_12, uint32_t p_13);
static int32_t func_24(uint8_t p_25);
static int32_t func_45(uint32_t p_46, int8_t p_47, int32_t p_48, uint32_t p_49, int8_t p_50);
static const uint8_t func_82(int32_t p_83, int32_t p_84);
static uint8_t func_86(int32_t p_87, int32_t p_88, int32_t p_89);
static uint32_t func_92(uint8_t p_93, int16_t p_94, int8_t p_95, int16_t p_96);
static int32_t func_102(int8_t p_103, uint32_t p_104, int16_t p_105, int32_t p_106, uint16_t p_107);
static uint16_t func_113(uint32_t p_114, int32_t p_115);
static int32_t func_1(void)
{
    uint32_t l_6 = 4294967288U;
    int32_t l_739 = (-1);
    int32_t l_755 = 0x5F819645;
    uint8_t l_756 = 1U;
    l_739 = (func_2(((safe_mod_func_int32_t_s_s(l_6, (safe_mul_func_uint16_t_u_u(65535U, func_9(((safe_lshift_func_int16_t_s_u((safe_add_func_int16_t_s_s(g_18, 0x418A)), (~(1 > (g_18 > (safe_sub_func_int8_t_s_s((l_6 & (l_6 || (func_24(l_6) >= 0xA898CBDB))), l_6))))))) , g_27), l_6, l_6, g_18))))) < 0x5BF8)) >= 0x01DEE14E);
    l_755 &= (safe_mul_func_uint8_t_u_u(0U, (((safe_rshift_func_uint8_t_u_u((l_739 <= (safe_sub_func_int8_t_s_s((g_584 , g_151), (safe_lshift_func_uint16_t_u_u((((safe_lshift_func_int8_t_s_u((g_346 == (((((g_197 > (65530U | g_304)) > (safe_mod_func_int8_t_s_s((((!((safe_mod_func_uint8_t_u_u((0x9011604B || g_718), 0xBB)) , l_739)) , 0x78) & g_197), l_6))) | 0x6C8D) , (-10)) >= l_739)), 3)) < l_739) ^ g_18), 6))))), 2)) < g_174) , g_174)));
    return l_756;
}
static int32_t func_2(int8_t p_3)
{
    int32_t l_58 = (-6);
    uint8_t l_78 = 0x31;
    int32_t l_81 = 0;
    uint8_t l_97 = 0x21;
    uint16_t l_101 = 0xF16C;
    int32_t l_580 = 1;
    int32_t l_675 = 5;
    uint32_t l_690 = 4294967295U;
lbl_514:
    g_18 = p_3;
    for (g_18 = (-8); (g_18 != 10); ++g_18)
    {
        uint8_t l_57 = 0U;
        int8_t l_79 = (-1);
        uint8_t l_80 = 255U;
        const uint16_t l_556 = 65527U;
        int32_t l_574 = 0x0A386366;
        int32_t l_581 = 0x40404426;
        int32_t l_582 = (-1);
        uint8_t l_636 = 7U;
        ++g_42;
        l_81 = func_45(g_27, (safe_lshift_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((safe_mod_func_int8_t_s_s((l_57 ^ (func_9((l_58 == func_9(((((safe_sub_func_int8_t_s_s((safe_lshift_func_int16_t_s_u((func_9((+func_9(g_27, (safe_sub_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((((safe_sub_func_uint16_t_u_u((func_9(l_58, func_9((l_57 || (safe_sub_func_int16_t_s_s((((safe_mul_func_uint8_t_u_u(g_18, ((-1) || (func_9((p_3 > 0x3236), g_18, p_3, g_18) != l_58)))) < 0x1885) > p_3), l_58))), g_27, l_57, p_3), p_3, g_42) , 0xAB77), 0U)) & g_42) <= l_57), g_18)), p_3)), 65532U)), p_3, l_78)), l_79, l_78, g_27) <= p_3), 13)), g_27)) , 0xCF56) , g_42) < g_18), l_79, g_42, l_78)), l_80, l_78, l_58) , p_3)), 0x2C)), p_3)), 3)), g_27, l_58, g_18);
        if ((func_82(p_3, (g_42 == (+(((func_86(l_78, (safe_sub_func_uint32_t_u_u((p_3 <= l_78), func_92(l_97, ((safe_mod_func_uint32_t_u_u(p_3, g_27)) != g_100), l_101, p_3))), l_97) > 0x8B) , 4294967295U) | 0xD1249285)))) && g_197))
        {
            int8_t l_508 = 0;
            uint16_t l_617 = 0xBFD7;
            int8_t l_635 = (-1);
            int32_t l_637 = (-9);
            uint32_t l_657 = 0x5768BBA0;
            uint32_t l_685 = 0U;
            if (((((safe_lshift_func_int16_t_s_u((-1), l_101)) || 6U) <= p_3) & ((safe_rshift_func_int16_t_s_u((p_3 > (safe_sub_func_uint32_t_u_u(((safe_rshift_func_uint8_t_u_s(((1U && (safe_lshift_func_uint8_t_u_u((((((((safe_mod_func_uint32_t_u_u(l_57, 0x4C40C3B2)) && ((safe_add_func_int32_t_s_s((safe_unary_minus_func_int16_t_s((l_78 != 3U))), 3U)) > l_79)) < g_27) | 0xDE) != g_286) & g_18) && 0x8C), 1))) != p_3), 0)) , g_345), p_3))), g_206)) != 8U)))
            {
                uint16_t l_497 = 0x9D72;
                int32_t l_511 = 3;
                l_81 = (((((1 > g_340) , (((((safe_mul_func_uint8_t_u_u(((((safe_unary_minus_func_uint32_t_u((safe_rshift_func_uint16_t_u_u(p_3, (((safe_sub_func_uint8_t_u_u(0x9C, 0x41)) & g_201) > 4294967294U))))) >= (l_497 || (safe_sub_func_int32_t_s_s((((safe_sub_func_int16_t_s_s((((safe_lshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((((l_80 < p_3) > 0x74E0) | g_174), (-1))), l_79)), l_497)) ^ p_3) | p_3), g_174)) > g_18) == (-9)), g_27)))) >= 4294967295U) && 0x9836), p_3)) >= 0xBAF1C74D) >= 1) & l_508) < p_3)) || 3) , l_508) ^ l_497);
                l_511 &= (safe_lshift_func_int8_t_s_u(g_42, 2));
            }
            else
            {
                int8_t l_517 = (-6);
                int32_t l_579 = 0x3DC5F1FE;
                for (g_174 = 0; (g_174 > 41); g_174++)
                {
                    if (g_27)
                        goto lbl_514;
                    for (g_340 = 25; (g_340 == 28); g_340 = safe_add_func_int8_t_s_s(g_340, 7))
                    {
                        int32_t l_519 = (-3);
                        int32_t l_537 = 0x374B03E8;
                        --g_520;
                        l_537 = ((((((((((g_345 > (safe_mod_func_int8_t_s_s((safe_sub_func_int16_t_s_s(0xD1B2, (0x69 || (safe_add_func_uint32_t_u_u((((safe_rshift_func_uint16_t_u_u(p_3, (safe_add_func_uint16_t_u_u(p_3, l_78)))) , (safe_rshift_func_int8_t_s_u((safe_sub_func_int8_t_s_s(((p_3 >= l_508) != l_101), p_3)), 5))) || 0x6C), p_3))))), g_201))) != p_3) && g_286) == 1U) | g_42) >= 65528U) || p_3) > l_519) == l_81) != g_346);
                        return g_286;
                    }
                }
                if ((safe_lshift_func_int8_t_s_u((l_508 , ((safe_sub_func_int8_t_s_s((g_340 & ((0xD179 > (safe_mod_func_int8_t_s_s(0x7C, (safe_sub_func_int32_t_s_s(((0x81D1 & l_508) , (safe_lshift_func_uint8_t_u_s(((p_3 < g_470) , ((l_79 != l_517) >= 0xA78AF177)), l_101))), g_520))))) ^ p_3)), g_470)) && p_3)), l_79)))
                {
                    uint16_t l_555 = 1U;
                    if ((g_286 || (safe_mul_func_int8_t_s_s((g_345 != (safe_unary_minus_func_int16_t_s(((safe_mul_func_uint8_t_u_u(l_517, (6 | (((((g_151 && (((((safe_unary_minus_func_int16_t_s(0)) != (~0x48)) & 3) == ((g_340 ^ 4294967290U) > p_3)) , p_3)) ^ 4294967295U) <= g_42) < l_555) != 7U)))) == 0x52DCBE07)))), l_556))))
                    {
                        uint32_t l_573 = 9U;
                        l_574 = ((safe_lshift_func_int8_t_s_u(l_555, 7)) < ((((l_101 >= ((-5) == l_508)) || (safe_lshift_func_uint8_t_u_s((((g_100 != (l_556 ^ (safe_rshift_func_int8_t_s_u((((safe_mul_func_int8_t_s_s(l_97, (safe_mul_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((safe_add_func_int32_t_s_s(((0x676639DB > ((safe_mod_func_int8_t_s_s((p_3 != p_3), l_555)) , g_304)) , l_81), l_555)), g_42)), 7U)))) , p_3) >= p_3), 7)))) || l_508) || p_3), p_3))) > l_573) , g_520));
                        g_575--;
                    }
                    else
                    {
                        int8_t l_578 = 0x1E;
                        return l_578;
                    }
                    ++g_584;
                }
                else
                {
                    uint16_t l_587 = 0U;
                    l_574 = ((l_587 <= p_3) , (((safe_sub_func_int8_t_s_s((((p_3 != (safe_unary_minus_func_int32_t_s((((safe_add_func_int16_t_s_s((((safe_rshift_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(0xDD, (safe_lshift_func_uint8_t_u_u((((safe_unary_minus_func_int32_t_s((((safe_sub_func_uint32_t_u_u(g_447, ((((g_518 > (p_3 > (safe_rshift_func_int8_t_s_s(((safe_sub_func_uint16_t_u_u(((((((!(safe_lshift_func_int8_t_s_s((safe_mod_func_int16_t_s_s(((safe_sub_func_int16_t_s_s((-7), (0x2A8CA749 != 0xC53AE2FD))) > l_517), l_580)), p_3))) < l_587) | 0xFE47) ^ g_575) & p_3) ^ g_583), 0x486D)) > g_27), g_584)))) , p_3) & g_575) < l_508))) <= 0x51245E3D) < g_583))) , p_3) ^ p_3), p_3)))), g_346)) , g_345) < p_3), l_508)) | p_3) > 1U)))) && p_3) , p_3), g_339)) | 0xA1) <= l_574));
                }
                return g_286;
            }
            l_81 = ((((safe_mod_func_int32_t_s_s((safe_sub_func_uint16_t_u_u(l_617, g_151)), l_508)) ^ ((((safe_lshift_func_uint8_t_u_s((safe_sub_func_int8_t_s_s((((((((safe_mul_func_int8_t_s_s(((((g_304 , (safe_rshift_func_int8_t_s_u(((((safe_lshift_func_int16_t_s_s(((((g_447 | (((((g_151 ^ ((!(safe_rshift_func_int8_t_s_s((((((safe_add_func_int16_t_s_s(p_3, (safe_add_func_int16_t_s_s((g_197 == l_617), 0xEE00)))) , p_3) != g_346) , 65528U) || 5U), 3))) | l_58)) > g_520) >= g_584) | g_345) , l_574)) , l_79) < 0x52) , l_97), g_197)) & (-4)) , l_635) , l_556), 5))) && 4294967295U) , 1U) , g_575), g_42)) | p_3) <= l_635) && g_201) > p_3) <= l_636) , 0xDA), l_637)), 3)) && p_3) <= p_3) & 0x5565)) < 0U) , 0xA1C66547);
            if ((safe_add_func_int8_t_s_s(((((g_339 , (((((7U > ((((g_640 == (safe_sub_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_s(((((l_101 < (safe_lshift_func_uint16_t_u_u(4U, 3))) > g_339) || (safe_lshift_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(((safe_mod_func_int32_t_s_s((!(((+g_42) <= (((((((0x10 | (g_518 , l_657)) , l_57) || 4294967295U) != l_581) | g_520) != 9) <= l_581)) , 0x79)), 1U)) && 0xD538), 1)), 6))) >= g_286), g_206)) , l_101), g_470))) >= 1U) <= 0x9FA0) & 0U)) ^ 0x9B) >= g_340) < g_151) , g_447)) ^ l_80) == g_583) , g_174), 0xF4)))
            {
                int8_t l_674 = (-4);
                g_676 |= (0xBF709E39 == ((g_201 & (((safe_sub_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s((safe_mul_func_uint8_t_u_u(g_345, l_101)), (safe_lshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(p_3, (safe_sub_func_int16_t_s_s(((l_657 , p_3) != ((((safe_rshift_func_int16_t_s_u((safe_mul_func_uint16_t_u_u(l_637, g_100)), g_583)) , l_635) < l_508) , l_674)), l_675)))), g_583)))), p_3)) , 0xF235) ^ p_3)) == 0xFA84));
                l_580 = (g_206 != (p_3 & ((g_676 && g_340) || (l_78 & (p_3 , (p_3 >= 0x2F289225))))));
            }
            else
            {
                uint32_t l_678 = 0x1E5470AF;
                g_345 = (((!((7 || ((l_678 , (((safe_lshift_func_int8_t_s_s(p_3, 6)) <= p_3) >= ((l_678 && ((0U != (((safe_mod_func_int32_t_s_s((((((((p_3 && (((safe_sub_func_uint8_t_u_u(((l_678 & (p_3 ^ l_97)) , 8U), g_286)) , 0x0EC1) | p_3)) ^ g_470) != l_675) || p_3) > l_685) , 7U) , g_346), p_3)) < p_3) <= l_635)) < l_582)) , g_583))) | p_3)) || g_640)) & l_78) & (-1));
                if (g_100)
                    continue;
            }
            return p_3;
        }
        else
        {
            int8_t l_702 = 0x90;
            int32_t l_706 = (-10);
            g_703 ^= ((safe_mul_func_uint8_t_u_u(((safe_sub_func_int8_t_s_s((g_583 >= l_690), ((~p_3) != (safe_sub_func_int32_t_s_s(0xD5F0B7E1, g_470))))) >= (g_583 ^ ((safe_lshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u(0xBDB8, (safe_rshift_func_uint8_t_u_s((((((((safe_add_func_int32_t_s_s(((((p_3 , g_340) , g_345) ^ 0x10) | p_3), l_101)) , g_286) ^ l_78) == 0x27) || l_702) ^ (-1)) >= g_18), g_583)))), p_3)) > p_3))), l_574)) != g_42);
            l_81 = (safe_rshift_func_int8_t_s_u(p_3, 3));
            g_707--;
            for (g_27 = (-29); (g_27 == 7); ++g_27)
            {
                uint32_t l_721 = 1U;
                for (g_703 = 0; (g_703 > 13); g_703 = safe_add_func_uint16_t_u_u(g_703, 5))
                {
                    int32_t l_714 = 0x6D73C981;
                    ++g_715;
                    ++g_718;
                    ++l_721;
                }
                if (p_3)
                    break;
                if (l_636)
                {
                    return p_3;
                }
                else
                {
                    int8_t l_738 = 0xE9;
                    g_345 = ((!(((safe_rshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_u(((1 || ((g_206 >= ((l_78 & (safe_mul_func_int8_t_s_s(0xA0, (safe_mod_func_int32_t_s_s(((g_703 , 2U) , 5), (g_197 && ((safe_mul_func_int16_t_s_s(((((safe_rshift_func_uint16_t_u_u((~l_738), p_3)) == g_174) | 1) >= g_304), g_346)) < p_3))))))) >= 0xAA836820)) > p_3)) & p_3), g_345)), p_3)) == 1) , 0x40F6)) && 4294967295U);
                }
            }
        }
    }
    return g_703;
}
static uint16_t func_9(uint16_t p_10, int32_t p_11, int32_t p_12, uint32_t p_13)
{
    return p_13;
}
static int32_t func_24(uint8_t p_25)
{
    int16_t l_26 = 0xD0F4;
    const int16_t l_38 = (-6);
    int32_t l_39 = 0xD37F4A1D;
    --g_27;
    l_39 = (((safe_sub_func_int32_t_s_s((l_26 < 0x45), ((safe_lshift_func_int16_t_s_s(0, 7)) && p_25))) || l_26) & (l_26 > ((safe_lshift_func_uint8_t_u_s((safe_add_func_uint8_t_u_u(g_27, (((0 >= 0x90) > l_38) ^ l_26))), 0)) , p_25)));
    return p_25;
}
static int32_t func_45(uint32_t p_46, int8_t p_47, int32_t p_48, uint32_t p_49, int8_t p_50)
{
    return p_46;
}
static const uint8_t func_82(int32_t p_83, int32_t p_84)
{
    int32_t l_465 = 0;
    int32_t l_466 = 0xDF9F01FB;
    int32_t l_467 = (-9);
    int32_t l_468 = 1;
    int32_t l_469 = 1;
    p_84 = l_465;
    --g_470;
    return l_465;
}
static uint8_t func_86(int32_t p_87, int32_t p_88, int32_t p_89)
{
    int16_t l_464 = 8;
    return l_464;
}
static uint32_t func_92(uint8_t p_93, int16_t p_94, int8_t p_95, int16_t p_96)
{
    int8_t l_108 = 0x8F;
    int32_t l_180 = 0x331A2D78;
    int32_t l_463 = 0;
    l_463 ^= func_102((0x354C | (p_95 , l_108)), func_9(g_100, (safe_lshift_func_int8_t_s_u(((9U == ((((safe_sub_func_uint8_t_u_u((func_113(l_108, g_100) , (safe_lshift_func_int8_t_s_s((safe_mod_func_int16_t_s_s((l_180 != l_180), p_94)), 7))), p_95)) > g_42) , g_174) <= g_42)) < p_94), 1)), g_42, l_108), g_18, p_95, p_96);
    return g_304;
}
static int32_t func_102(int8_t p_103, uint32_t p_104, int16_t p_105, int32_t p_106, uint16_t p_107)
{
    uint32_t l_181 = 0U;
    int32_t l_184 = 0x0EBFA9BD;
    int16_t l_185 = 0xA28E;
    int32_t l_198 = (-1);
    int32_t l_199 = (-8);
    uint16_t l_351 = 1U;
    int16_t l_421 = (-1);
lbl_450:
    l_181--;
    l_185 = (1U ^ ((((p_103 <= g_42) || ((l_181 , (((g_100 , g_174) && ((0x4E0FF389 <= (-8)) >= (l_184 , g_42))) <= p_106)) && 0xCE2574B0)) | l_181) | 0xC0AF));
    for (p_105 = 0; (p_105 < (-14)); p_105--)
    {
        int16_t l_188 = 1;
        uint32_t l_189 = 0x379FF8A6;
        int32_t l_196 = 1;
        int32_t l_200 = (-7);
        int32_t l_381 = 0x8D1871B9;
        l_188 = g_42;
        --l_189;
        for (l_189 = 0; (l_189 < 41); l_189 = safe_add_func_int16_t_s_s(l_189, 3))
        {
            int16_t l_221 = 0;
            int32_t l_260 = 0xFF28DE54;
            int32_t l_343 = 0x1A15CE65;
            int32_t l_344 = 0x7AC17A10;
            uint8_t l_369 = 0x9B;
            for (g_100 = 0; (g_100 > 15); g_100 = safe_add_func_int8_t_s_s(g_100, 6))
            {
                uint8_t l_250 = 2U;
                g_201--;
                g_206 &= (0xEB0A ^ ((((g_18 > p_105) , (safe_sub_func_int8_t_s_s(p_104, 0xAC))) || 0xE310A9C0) & p_105));
                if ((((safe_mul_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_s(((((safe_sub_func_uint8_t_u_u(((((((safe_add_func_int8_t_s_s((l_198 , (safe_sub_func_int16_t_s_s(p_103, (safe_sub_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((l_221 , l_221), (safe_sub_func_int8_t_s_s((((safe_mod_func_uint8_t_u_u(((0xD0 != (((safe_mul_func_uint16_t_u_u((((((l_221 > ((6U > (safe_unary_minus_func_uint16_t_u(((safe_rshift_func_int8_t_s_u(((safe_sub_func_int32_t_s_s((safe_mul_func_int8_t_s_s(0x1E, g_201)), l_189)) < 1), g_174)) && p_106)))) & (-1))) , 0xCE41FC7E) , l_221) , g_201) , l_221), 1U)) > l_221) , p_103)) ^ p_103), p_105)) <= 1) , l_184), p_106)))), l_221))))), 1)) == g_151) != p_105) & 65529U) | 3) != 1), 1U)) && l_198) <= l_221) | 0x5EF7775C), 6)) >= 0), 0x55B3)) ^ l_188) | p_106))
                {
                    int32_t l_241 = 5;
                    l_260 = (safe_mul_func_int16_t_s_s((((safe_rshift_func_int16_t_s_s((p_106 <= (safe_sub_func_uint8_t_u_u(((l_188 & l_241) && (safe_lshift_func_int16_t_s_s((safe_mod_func_int32_t_s_s((p_105 == ((safe_mod_func_int8_t_s_s((((safe_sub_func_int16_t_s_s(l_250, ((safe_mod_func_uint32_t_u_u((((((~(((safe_sub_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((l_241 == (safe_mul_func_uint8_t_u_u(((l_241 >= (((g_151 , (((((g_197 && g_42) , 0x7884) & g_18) ^ 0U) == p_107)) == g_174) ^ p_105)) > p_107), 0x43))), p_104)), g_151)) && p_105) > 0x6A)) <= p_107) > 0x93) < p_103) >= 0xD486), l_181)) < g_197))) != g_206) , g_18), g_100)) , g_18)), g_206)), l_196))), 0x7D))), 1)) & 0xAE4B) | 250U), 65535U));
                    g_286 ^= (safe_mod_func_int32_t_s_s((-1), (p_107 | ((((safe_add_func_uint32_t_u_u((safe_sub_func_int16_t_s_s(g_151, (!((safe_rshift_func_int8_t_s_s(((((l_241 > g_42) && ((safe_mul_func_int16_t_s_s(((0x33F7 && (safe_unary_minus_func_int32_t_s(1))) < (!(safe_sub_func_uint32_t_u_u((((safe_rshift_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((((+(safe_rshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_s(((!1U) || p_105), g_201)), 11))) , g_100) >= l_250), l_221)), 3)) >= 0xCF6C) && p_105), g_201)))), 1)) >= p_105)) ^ g_174) , l_198), p_103)) >= g_174)))), l_260)) , p_105) | g_18) & 0))));
                    g_304 = (((((safe_add_func_uint16_t_u_u((0xC51EAD67 <= (safe_sub_func_int8_t_s_s((safe_add_func_int8_t_s_s((~((safe_add_func_uint16_t_u_u(((safe_add_func_uint32_t_u_u((safe_add_func_int8_t_s_s(g_27, (~p_104))), (((+g_100) < g_206) <= (0x0661D1CE | l_188)))) && 7U), (safe_lshift_func_int8_t_s_s((l_198 == g_197), 3)))) ^ l_198)), g_18)), l_199))), 0)) != g_286) , l_241) > 0x2E) <= 0x6AF2F86A);
                    return l_250;
                }
                else
                {
                    l_196 = g_197;
                    l_260 = (safe_lshift_func_int8_t_s_u(((((safe_lshift_func_uint8_t_u_u(((((safe_mul_func_int16_t_s_s(((((((g_151 & (safe_lshift_func_uint16_t_u_s(0x4B4D, 10))) < p_104) < (l_184 && l_250)) , (safe_mod_func_uint8_t_u_u((((0x2D >= ((safe_add_func_int8_t_s_s((p_105 , (safe_lshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((safe_add_func_int32_t_s_s(g_42, ((p_103 != 0x33B6CD96) & g_286))), 4)), 7))), g_18)) > 9)) | p_106) , l_185), l_250))) == p_107) & p_106), 0x3E86)) & p_105) < l_189) , l_198), g_27)) > l_181) ^ l_250) >= l_221), l_250));
                }
            }
            if (((((((((l_196 | (safe_mod_func_int32_t_s_s((safe_mul_func_int8_t_s_s(p_105, (safe_mul_func_uint8_t_u_u(((safe_mod_func_int16_t_s_s((((safe_mod_func_uint32_t_u_u((0 & (safe_mul_func_uint8_t_u_u((((((((0xDA == (l_260 && l_200)) && ((l_185 && (g_42 > ((safe_mul_func_uint16_t_u_u((safe_add_func_int16_t_s_s(((((l_260 < l_181) && p_106) , p_104) , 0xB997), g_151)), p_106)) , g_174))) >= (-10))) | 0) , l_221) , g_174) , p_107) , l_221), l_184))), l_185)) < 65534U) >= p_104), 0x75A5)) & g_100), g_174)))), 0xD81AABCE))) > 6) == g_286) , 0xF0) <= g_286) > p_105) , (-1)) == g_100))
            {
                const uint8_t l_368 = 0x51;
                g_340++;
                g_346--;
                for (p_104 = 0; (p_104 > 10); p_104 = safe_add_func_uint32_t_u_u(p_104, 8))
                {
                    const int32_t l_365 = 0x372CC070;
                    int32_t l_370 = (-8);
                    l_351++;
                    l_370 = (safe_lshift_func_uint8_t_u_s(p_103, (((safe_add_func_int32_t_s_s((safe_sub_func_int16_t_s_s(((safe_sub_func_int32_t_s_s(g_174, (l_221 , (safe_rshift_func_uint8_t_u_u((((0xDDB6 != g_100) >= ((((safe_unary_minus_func_uint32_t_u(l_365)) > (safe_mul_func_int16_t_s_s((((((((g_27 <= 0xA924) <= (0U && l_344)) || g_18) , 1) > l_185) && g_100) == p_105), l_368))) && g_286) , g_206)) == 0U), g_304))))) >= l_369), l_368)), l_196)) & 0xE5AB) , g_286)));
                }
            }
            else
            {
                g_345 = 0x425CC560;
                return g_339;
            }
            if (((safe_sub_func_uint8_t_u_u(g_42, ((((safe_lshift_func_int16_t_s_u((((((safe_add_func_uint8_t_u_u(((safe_sub_func_int32_t_s_s(((safe_sub_func_int32_t_s_s(g_304, (((l_381 , p_106) == l_381) && ((l_381 <= (safe_rshift_func_uint8_t_u_u(1U, (safe_sub_func_int16_t_s_s((((0x2BDFDB65 < ((l_351 ^ p_104) >= l_184)) && g_151) <= p_106), p_105))))) && l_344)))) <= 0x7180), l_260)) || 0x0B61), g_201)) & g_339) , l_369) <= p_105) <= g_151), p_103)) == 1U) , l_200) < p_107))) & p_104))
            {
                int8_t l_399 = 3;
                if ((safe_mod_func_int16_t_s_s((g_27 ^ (safe_sub_func_int32_t_s_s(((safe_unary_minus_func_uint8_t_u(g_206)) > 0xAD2E39DC), (safe_rshift_func_uint8_t_u_u(((-1) & (safe_mul_func_uint8_t_u_u(1U, (p_104 | (safe_add_func_int16_t_s_s((safe_add_func_uint32_t_u_u(l_344, ((((((0x89C1 & ((0xC4 == p_103) <= g_197)) ^ 0x3D29) <= g_345) , l_399) <= l_188) || p_104))), p_103)))))), 7))))), 0xAB90)))
                {
                    g_345 = (((p_105 >= ((safe_sub_func_int8_t_s_s(0xBC, ((((+(safe_add_func_uint16_t_u_u((g_151 > 9U), (g_100 && (safe_add_func_int16_t_s_s(((safe_lshift_func_int16_t_s_s(((-2) && (!(0x3F4B >= 0x0D68))), g_206)) == g_174), g_304)))))) > p_106) | 0x9D4CCEA3) , (-7)))) || l_184)) > l_343) >= l_196);
                    l_343 = 0x4AFDD007;
                    l_196 = 3;
                }
                else
                {
                    if (p_107)
                        break;
                }
            }
            else
            {
                int32_t l_414 = 0xB01F7732;
                int32_t l_422 = 0xBEC82853;
                for (l_198 = (-25); (l_198 > (-15)); l_198++)
                {
                    if (l_185)
                        break;
                    l_200 |= (safe_sub_func_int16_t_s_s(g_151, ((0xB0C5A6CC != (g_27 == (p_103 || p_107))) < l_351)));
                    l_199 = ((l_414 | ((safe_sub_func_uint32_t_u_u((safe_sub_func_int32_t_s_s(0, l_414)), (((safe_sub_func_int32_t_s_s(0, l_198)) || 0x7FD6) == 1))) != l_196)) ^ (((l_421 , l_422) < l_221) == p_104));
                }
                for (l_200 = (-2); (l_200 < (-10)); l_200 = safe_sub_func_int8_t_s_s(l_200, 4))
                {
                    l_198 ^= (((safe_mod_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(((p_107 | (p_107 <= (safe_lshift_func_int8_t_s_u((safe_sub_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((((safe_lshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_u((safe_mod_func_int8_t_s_s(((g_206 <= 0) <= ((g_42 > (((safe_mul_func_uint8_t_u_u(0x31, l_260)) & p_107) ^ 0x2678A668)) || g_174)), p_106)), 1)), 4)) , l_422) < g_340), 6)), 0x0960)), g_345)), l_414)))) != 0x6893), g_304)), p_104)), g_339)) && 2) , l_414);
                    g_345 = (g_304 <= 0xDC);
                    g_447--;
                }
                if (p_104)
                {
                    l_198 ^= 1;
                    if (l_200)
                        goto lbl_450;
                }
                else
                {
                    return g_201;
                }
            }
            if (p_106)
                continue;
        }
    }
    l_199 = (((safe_lshift_func_uint16_t_u_u(((((safe_sub_func_uint16_t_u_u(l_351, (0x0EDC81BB == (safe_rshift_func_int16_t_s_u((g_345 & (((-1) | ((safe_add_func_int16_t_s_s(l_181, p_107)) , ((((safe_sub_func_int32_t_s_s((l_351 , (((p_104 && (safe_mul_func_int8_t_s_s(0x8F, 0x50))) || g_197) ^ 7U)), 4294967292U)) || p_105) , 0U) >= 0xD3D8))) , g_18)), 5))))) & 0U) , p_107) > 0xDA), 13)) ^ p_105) | p_103);
    return g_197;
}
static uint16_t func_113(uint32_t p_114, int32_t p_115)
{
    int8_t l_130 = 0x23;
    uint8_t l_150 = 0U;
    int8_t l_152 = (-1);
    int32_t l_153 = 0x2238E951;
    uint32_t l_175 = 4294967290U;
    l_153 = (safe_sub_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_u(p_114, 2)) < (safe_lshift_func_uint16_t_u_u(g_100, 12))), ((safe_add_func_int32_t_s_s((((safe_add_func_uint16_t_u_u((safe_add_func_int8_t_s_s(l_130, ((safe_lshift_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(((((safe_rshift_func_int16_t_s_u((~((safe_mul_func_int8_t_s_s((safe_sub_func_int16_t_s_s(((safe_lshift_func_int16_t_s_s(((p_115 & 0xFB) > 0xB33E), ((safe_rshift_func_int8_t_s_s(((safe_lshift_func_int16_t_s_u(p_115, 15)) != (safe_sub_func_int32_t_s_s(((0x39B2 < 0x4BBA) | l_130), l_130))), l_150)) && g_27))) ^ p_114), 0xF77C)), g_100)) < l_150)), 4)) , g_151) < 0xFC3DD168) , g_42), l_150)), 4)) , 0xC8))), g_151)) >= g_100) , 0), p_114)) ^ l_152))), l_150));
    g_174 = (0x27 != ((safe_sub_func_int16_t_s_s((safe_rshift_func_int8_t_s_u(((((safe_rshift_func_int8_t_s_u((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_u(((safe_sub_func_int32_t_s_s((safe_lshift_func_int16_t_s_u((g_42 <= 0xFC), g_151)), (0xF1 > (l_150 < ((safe_add_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_u((((g_100 != p_115) && g_100) <= g_18), 4)) & p_115), p_114)) < g_42))))) == g_27), 5)) || 4294967295U), 2)), 0xA9)), 2)) ^ p_114) > p_115) != g_100), l_153)), g_151)) <= l_130));
    p_115 = l_153;
    return l_175;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_18;
    csmith_sink_ = g_27;
    csmith_sink_ = g_42;
    csmith_sink_ = g_100;
    csmith_sink_ = g_151;
    csmith_sink_ = g_174;
    csmith_sink_ = g_197;
    csmith_sink_ = g_201;
    csmith_sink_ = g_206;
    csmith_sink_ = g_286;
    csmith_sink_ = g_304;
    csmith_sink_ = g_339;
    csmith_sink_ = g_340;
    csmith_sink_ = g_345;
    csmith_sink_ = g_346;
    csmith_sink_ = g_447;
    csmith_sink_ = g_470;
    csmith_sink_ = g_518;
    csmith_sink_ = g_520;
    csmith_sink_ = g_575;
    csmith_sink_ = g_583;
    csmith_sink_ = g_584;
    csmith_sink_ = g_640;
    csmith_sink_ = g_676;
    csmith_sink_ = g_703;
    csmith_sink_ = g_707;
    csmith_sink_ = g_715;
    csmith_sink_ = g_718;
    platform_main_end(0,0);
    return 0;
}
