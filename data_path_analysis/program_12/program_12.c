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
static uint32_t g_4[7] = {0xBEB0647D,0xBEB0647D,0xBEB0647D,0xBEB0647D,0xBEB0647D,0xBEB0647D,0xBEB0647D};
static int32_t g_65 = (-8);
static int32_t *g_68 = (void*)0;
static int16_t g_69 = 0xEF15;
static int16_t g_70 = (-1);
static int32_t g_72 = (-1);
static int8_t g_73 = 9;
static uint8_t g_74 = 3U;
static uint8_t g_125 = 0x54;
static int32_t ***g_142 = (void*)0;
static int8_t g_167 = (-1);
static uint32_t g_179[10] = {0U,0x9271733C,0U,0x9271733C,0U,0x9271733C,0U,0x9271733C,0U,0x9271733C};
static int32_t g_207 = 0x12714A00;
static int32_t g_208 = 1;
static int8_t g_211 = 1;
static int16_t g_253 = 0xFE71;
static uint16_t g_254 = 0x6D66;
static int32_t g_257[6][10][4] = {{{0xD116E590,3,0x3C2C29D2,(-10)},{3,0xB19A00E8,0x7FD64A67,(-9)},{0xD3F0CE08,0x0B3FAD78,(-7),0xD3F0CE08},{0xD3F0CE08,0x4375D102,0x7FD64A67,(-6)},{3,0xD3F0CE08,0x3C2C29D2,0xA8A9666F},{0xD116E590,(-1),1,0x31A032CA},{(-1),9,3,(-6)},{0x7FD64A67,9,(-7),(-7)},{0xA8A9666F,0xA8A9666F,0x0B3FAD78,0x4375D102},{(-9),0,0x317F4E93,9}},{{(-1),0,0xBA6F3B49,0x317F4E93},{0x4375D102,0,1,9},{0,0,1,0x4375D102},{(-7),0xA8A9666F,0x749363B6,(-7)},{0x3235E0E7,9,0xD116E590,5},{0,(-7),(-1),3},{0xBA6F3B49,0,0xBA6F3B49,1},{0x7FD64A67,0x3235E0E7,(-1),5},{(-9),1,(-7),0x3235E0E7},{0x749363B6,0xA8A9666F,(-7),0xBA6F3B49}},{{(-9),0x3C2C29D2,(-1),9},{0x7FD64A67,0x317F4E93,0xBA6F3B49,0},{0xBA6F3B49,0,(-1),1},{0,0x3C2C29D2,0xD116E590,0x4375D102},{0x3235E0E7,0x749363B6,0x749363B6,0x3235E0E7},{(-7),9,1,0x9E785CDD},{0,0x3235E0E7,1,3},{0x4375D102,(-8),0xBA6F3B49,3},{(-1),0x3235E0E7,0x317F4E93,0x9E785CDD},{(-9),9,0x0B3FAD78,0x3235E0E7}},{{0xA8A9666F,0x749363B6,(-7),0x4375D102},{1,0x3C2C29D2,0x317F4E93,1},{0x7FD64A67,0,(-10),0},{0x4375D102,0x317F4E93,(-1),9},{0x317F4E93,0x3C2C29D2,1,0xBA6F3B49},{0x3235E0E7,0xA8A9666F,0x31A032CA,0x3235E0E7},{0x3235E0E7,1,1,5},{0x317F4E93,0x3235E0E7,(-1),1},{0x4375D102,0,(-10),3},{0x7FD64A67,(-7),0x317F4E93,5}},{{1,9,(-7),(-7)},{0xA8A9666F,0xA8A9666F,0x0B3FAD78,0x4375D102},{(-9),0,0x317F4E93,9},{(-1),0,0xBA6F3B49,0x317F4E93},{0x4375D102,0,1,9},{0,0,1,0x4375D102},{(-7),0xA8A9666F,0x749363B6,(-7)},{0x3235E0E7,9,0xD116E590,5},{0,(-7),(-1),3},{0xBA6F3B49,0,0xBA6F3B49,1}},{{0x7FD64A67,0x3235E0E7,(-1),5},{(-9),1,(-7),0x3235E0E7},{0x749363B6,0xA8A9666F,(-7),0xBA6F3B49},{(-9),0x3C2C29D2,(-1),9},{0x7FD64A67,0x317F4E93,0xBA6F3B49,0},{0xD3F0CE08,(-8),0xD116E590,0x0B3FAD78},{(-8),(-1),0x4375D102,1},{0x749363B6,(-1),(-1),0x749363B6},{0x31A032CA,(-7),(-10),(-1)},{(-8),0x749363B6,(-9),0x317F4E93}}};
static int8_t g_259[8] = {0x4D,(-1),(-1),0x4D,(-1),(-1),0x4D,(-1)};
static uint32_t g_260 = 0xFDE94F91;
static int32_t *g_263 = (void*)0;
static uint32_t g_284 = 0x2DBFFCE8;
static uint8_t g_296[6][9] = {{248U,248U,248U,248U,248U,248U,248U,248U,248U},{248U,248U,248U,248U,248U,248U,248U,248U,248U},{248U,248U,248U,248U,248U,248U,248U,248U,248U},{248U,248U,248U,248U,248U,248U,248U,248U,248U},{248U,248U,248U,248U,248U,248U,248U,248U,248U},{248U,248U,248U,248U,248U,248U,248U,248U,248U}};
static int32_t ****g_371 = &g_142;
static int32_t *****g_370 = &g_371;
static uint32_t g_407 = 0x2D0E156F;
static int32_t g_449 = 0xF6F830DA;
static int32_t g_450 = (-6);
static uint16_t g_451 = 0xE154;
static uint16_t func_1(void);
static int32_t func_2(int8_t p_3);
static int8_t func_5(uint8_t p_6, uint32_t p_7, uint8_t p_8, uint32_t p_9);
static uint8_t func_10(int8_t p_11, int32_t p_12, uint8_t p_13, int32_t p_14, uint32_t p_15);
static uint32_t func_19(uint8_t p_20);
static int8_t func_23(int16_t p_24, int8_t p_25, uint32_t p_26);
static int8_t func_31(int32_t p_32, uint32_t p_33, int32_t p_34, uint32_t p_35);
static int32_t func_41(uint16_t p_42, int16_t p_43);
static uint16_t func_48(uint16_t p_49, uint32_t p_50, uint16_t p_51);
static uint16_t func_53(int16_t p_54);
static uint16_t func_1(void)
{
    int32_t l_18 = 0xB58E17C1;
    uint16_t l_446 = 0xC80D;
    int32_t l_519 = 0x40D9131F;
    l_519 = func_2((g_4[0] , ((func_5((g_4[0] , g_4[6]), (func_10((safe_rshift_func_int8_t_s_s((l_18 == ((((((l_18 , func_19(((((((safe_sub_func_uint8_t_u_u(0xE0, func_23(((safe_sub_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((func_31(l_18, g_4[0], g_4[3], g_4[0]) || 9U), g_4[0])), 1U)) > g_4[0]), l_18, g_4[0]))) & g_4[0]) , 0x97EF) && 0x7A1F) , 0xF3A99ED4) , g_73))) < l_18) >= l_18) , g_4[0]) != l_446) <= 0x8F)), 2)), l_446, l_446, l_18, g_257[1][9][1]) ^ g_257[0][2][2]), g_259[4], l_446) , 0) > 0)));
    return l_18;
}
static int32_t func_2(int8_t p_3)
{
    uint32_t l_487 = 0xA57ED389;
    int32_t l_498 = 0xE52BF2B7;
    uint16_t l_499[3][2][2] = {{{0U,0x46CD},{0U,0x46CD}},{{0U,0x46CD},{0U,0x46CD}},{{0U,0x46CD},{0U,0x46CD}}};
    int32_t ****l_506 = (void*)0;
    int32_t l_518 = (-3);
    int i, j, k;
    if ((0 >= (((((p_3 >= ((+((((((safe_rshift_func_int8_t_s_u(p_3, (safe_add_func_int16_t_s_s((safe_add_func_int8_t_s_s(0xF5, ((l_487 , (((+(p_3 == p_3)) != ((((((safe_mod_func_int16_t_s_s(((safe_rshift_func_int16_t_s_s((safe_mod_func_uint8_t_u_u((!((((1U >= (safe_mod_func_uint32_t_u_u((((g_257[5][1][2] > l_498) , l_487) , 0x7BC6A34E), p_3))) > p_3) , p_3) , l_498)), g_211)), 7)) , g_259[7]), 0xE326)) & l_487) == p_3) > l_499[2][0][1]) && g_4[2]) && g_65)) , l_487)) , 9))), l_498)))) , (-1)) ^ 0x13F74C42) , &g_371) != &g_371) >= p_3)) | 0x41)) ^ p_3) > l_487) , (-6)) != l_499[1][1][0])))
    {
        int32_t **l_504[10] = {&g_263,&g_263,&g_263,&g_263,&g_263,&g_263,&g_263,&g_263,&g_263,&g_263};
        int32_t ****l_512 = &g_142;
        uint32_t l_517 = 0x4978B0F9;
        int i;
        g_450 = ((((safe_lshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_s((l_504[6] == ((p_3 < ((+(((void*)0 != l_506) && (safe_lshift_func_int8_t_s_u((((((p_3 , ((safe_sub_func_int8_t_s_s((((+((((((void*)0 != l_512) > (((safe_sub_func_uint16_t_u_u(p_3, (safe_lshift_func_int16_t_s_s(g_257[0][5][0], p_3)))) , 0x6484) , 0xC2C58EDD)) < l_498) , p_3) != p_3)) , (*g_370)) != l_512), g_253)) , l_517)) , g_179[3]) , g_253) <= 0xAD) && g_449), l_518)))) != p_3)) , &g_68)), p_3)), 4)) >= 0x66) < p_3) ^ g_449);
    }
    else
    {
        return p_3;
    }
    return l_499[2][0][0];
}
static int8_t func_5(uint8_t p_6, uint32_t p_7, uint8_t p_8, uint32_t p_9)
{
    int8_t l_467[3];
    int32_t *l_472 = (void*)0;
    uint32_t l_475 = 3U;
    int32_t ****l_476 = (void*)0;
    int32_t *l_477 = &g_72;
    int i;
    for (i = 0; i < 3; i++)
        l_467[i] = 0xA1;
    (*l_477) ^= (((((p_6 <= (((0xB0 < (safe_mod_func_uint16_t_u_u((safe_add_func_int32_t_s_s(((!l_467[1]) == (((safe_sub_func_uint16_t_u_u(((p_9 >= 0x03B6) | (safe_mod_func_int8_t_s_s(((((((((l_472 != (void*)0) & ((((safe_mul_func_uint8_t_u_u(p_6, l_467[1])) , p_8) , p_7) >= g_284)) <= l_467[1]) == l_475) , p_6) & p_9) , p_7) < p_8), g_296[5][4]))), p_9)) > 1) && 0x8C)), l_467[1])), p_9))) , p_8) < p_8)) || g_211) , l_476) == l_476) >= 0xF4EAA836);
    l_472 = l_477;
    for (g_69 = 0; (g_69 < 12); g_69 = safe_add_func_int8_t_s_s(g_69, 1))
    {
        if ((*l_472))
            break;
    }
    return (*l_477);
}
static uint8_t func_10(int8_t p_11, int32_t p_12, uint8_t p_13, int32_t p_14, uint32_t p_15)
{
    int8_t l_447 = (-6);
    int32_t *l_448[2];
    int i;
    for (i = 0; i < 2; i++)
        l_448[i] = &g_65;
    g_451++;
    for (g_211 = 9; (g_211 >= 0); g_211 -= 1)
    {
        int32_t l_454 = 0xF20157C3;
        int32_t **l_455 = (void*)0;
        int i;
        if (g_179[g_211])
        {
            l_454 |= p_14;
        }
        else
        {
            uint8_t l_460 = 0x0B;
            int32_t l_461[8][1][3] = {{{0x387DD2C9,0x85C336B4,0x85C336B4}},{{0x5CAA13EC,0x52486B05,0x52486B05}},{{0x387DD2C9,0x85C336B4,0x85C336B4}},{{0x5CAA13EC,0x52486B05,0x52486B05}},{{0x387DD2C9,0x85C336B4,0x85C336B4}},{{0x5CAA13EC,0x52486B05,0x52486B05}},{{0x387DD2C9,0x85C336B4,0x85C336B4}},{{0x5CAA13EC,0x52486B05,0x52486B05}}};
            int i, j, k;
            l_448[0] = &l_454;
            for (g_449 = 0; (g_449 <= 9); g_449 += 1)
            {
                int i;
                l_461[1][0][0] |= ((((((((((((g_179[g_211] , ((l_455 == &g_68) | (((((l_455 == (void*)0) && ((((((((*g_371) == ((((safe_mul_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_u((-9), 12)) > ((void*)0 != (*g_370))), p_11)) != 8) | g_211) , (void*)0)) == p_15) | p_15) & 0x347022D9) > (-1)) ^ 0x7B) > g_70)) || l_460) ^ 7) , g_260))) , p_13) & g_179[g_211]) == p_15) , 0xC4527BDB) < p_13) < g_179[g_211]) <= p_15) && p_12) && 0x1860) <= 0) & p_13);
            }
        }
        return p_14;
    }
    g_450 &= 0x74D990A1;
    return g_259[0];
}
static uint32_t func_19(uint8_t p_20)
{
    int32_t l_276[2][1];
    int32_t ****l_314 = &g_142;
    int32_t *****l_313 = &l_314;
    uint16_t l_372 = 0x2458;
    int32_t *l_383[1];
    uint32_t l_429[10];
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_276[i][j] = 0xA1551B61;
    }
    for (i = 0; i < 1; i++)
        l_383[i] = &l_276[0][0];
    for (i = 0; i < 10; i++)
        l_429[i] = 5U;
    for (g_207 = (-23); (g_207 <= 14); ++g_207)
    {
        int32_t *l_278 = &g_65;
        for (g_72 = 0; (g_72 == (-23)); g_72 = safe_sub_func_int16_t_s_s(g_72, 5))
        {
            int32_t *l_277 = (void*)0;
            for (g_125 = (-1); (g_125 >= 9); g_125 = safe_add_func_int16_t_s_s(g_125, 6))
            {
                int8_t l_274 = 0x14;
                for (g_260 = 2; (g_260 != 5); g_260++)
                {
                    uint32_t l_287 = 0xA4F41078;
                    for (g_167 = (-9); (g_167 < (-6)); g_167++)
                    {
                        int32_t *l_275 = (void*)0;
                        int32_t *l_279 = &l_276[0][0];
                        int32_t *l_280 = &l_276[0][0];
                        int32_t *l_281 = &g_65;
                        int32_t *l_282 = &l_276[1][0];
                        int32_t *l_283[4][2] = {{&g_72,&g_72},{&g_72,&g_72},{&g_72,&g_72},{&g_72,&g_72}};
                        int i, j;
                        l_276[1][0] = l_274;
                        l_278 = l_277;
                        ++g_284;
                        l_287++;
                    }
                    return g_167;
                }
            }
            if ((*l_278))
                break;
            (*l_278) = p_20;
            if (p_20)
                continue;
        }
    }
    for (g_207 = 0; (g_207 >= (-21)); g_207 = safe_sub_func_int8_t_s_s(g_207, 7))
    {
        int32_t *l_292 = (void*)0;
        int32_t *l_293 = &g_72;
        int32_t *l_294[4];
        int32_t l_295[5] = {0x928291F7,0x928291F7,0x928291F7,0x928291F7,0x928291F7};
        int32_t **l_312[5] = {&l_294[0],&l_294[0],&l_294[0],&l_294[0],&l_294[0]};
        int32_t ***l_311 = &l_312[2];
        int32_t *****l_315 = &l_314;
        int32_t *****l_369 = &l_314;
        int8_t l_376 = 0x5A;
        uint8_t l_432 = 0x70;
        int i;
        for (i = 0; i < 4; i++)
            l_294[i] = &l_276[0][0];
        ++g_296[2][1];
        if ((safe_rshift_func_int16_t_s_u((~p_20), (safe_sub_func_uint8_t_u_u((0x0C > g_284), (-4))))))
        {
            int32_t *l_306 = &g_72;
            uint8_t l_324 = 255U;
            uint32_t l_325[7] = {4294967295U,0x4E30E536,0x4E30E536,4294967295U,0x4E30E536,0x4E30E536,4294967295U};
            int32_t ****l_346 = (void*)0;
            int16_t l_360 = 0x14C6;
            int i;
            g_65 ^= ((safe_mod_func_int8_t_s_s(((void*)0 == l_306), (safe_mul_func_uint16_t_u_u(((void*)0 == &g_142), (((((safe_sub_func_int16_t_s_s((l_311 != g_142), (&l_306 != (void*)0))) , l_313) == l_315) , g_167) , 0xC736))))) && (*l_306));
            for (g_260 = 0; (g_260 <= 5); g_260 += 1)
            {
                int32_t ***l_320 = &l_312[0];
                int32_t *****l_321 = (void*)0;
                g_65 ^= ((safe_mul_func_uint16_t_u_u(g_74, ((((((((0x71 & 255U) , l_320) != (void*)0) > 0x84) ^ ((void*)0 != l_321)) , ((((safe_mul_func_int8_t_s_s((l_324 & p_20), p_20)) , 0x7F5ED74E) < p_20) , 0x94970F5A)) , (*l_306)) && 0x3BFB))) < l_325[6]);
                g_65 |= ((((safe_sub_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((p_20 == (((void*)0 != (**l_320)) != 1)), ((safe_add_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_u(((safe_rshift_func_int16_t_s_u((0xF872 == (!(safe_lshift_func_uint16_t_u_s(p_20, 0)))), ((+((p_20 != p_20) , (safe_rshift_func_uint16_t_u_s((safe_mod_func_uint32_t_u_u((((((*l_306) , g_70) , (**l_320)) == (**l_320)) , p_20), 6U)), p_20)))) > 0xAFFCAD72))) == g_125), p_20)) > g_125), (-1))), 0x4B)) >= g_253))), (-1))) , l_346) == (void*)0) != g_259[0]);
                for (g_125 = 0; (g_125 <= 5); g_125 += 1)
                {
                    uint32_t l_348 = 6U;
                    for (p_20 = 0; (p_20 <= 4); p_20 += 1)
                    {
                        int32_t ****l_347 = &g_142;
                        int32_t ***l_359 = &l_312[p_20];
                        int32_t *l_368 = &g_65;
                        int i, j;
                        l_348 |= ((void*)0 != l_347);
                        g_65 = ((g_296[g_125][(g_125 + 3)] > p_20) < (0x1DC9 > (((0x3D08090F > (l_312[p_20] != (void*)0)) , ((((((safe_add_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((+p_20), (0xDF48 && (((((p_20 == p_20) || g_74) != p_20) | l_348) > g_259[4])))), l_348)) , p_20) , g_296[4][3]) , p_20) & g_179[5]) , 0xFB86B1F9)) == p_20)));
                        (*l_368) = (safe_mod_func_int16_t_s_s(g_257[4][0][3], ((((safe_sub_func_int16_t_s_s((+(l_359 == (l_360 , g_142))), g_260)) || (safe_lshift_func_int8_t_s_u((+((((safe_add_func_int32_t_s_s(0, (safe_sub_func_uint32_t_u_u(l_348, (((((((void*)0 == l_368) <= 3) == 0xFE7D) , l_369) == g_370) , g_296[4][7]))))) > 253U) < g_259[0]) > p_20)), 6))) , 0xB5) , 0xDCD4)));
                        ++l_372;
                    }
                    if (p_20)
                        break;
                    for (l_360 = 0; (l_360 <= 5); l_360 += 1)
                    {
                        return p_20;
                    }
                }
            }
            if (p_20)
                break;
        }
        else
        {
            int32_t **l_375 = &l_294[1];
            l_383[0] = ((l_375 != (l_376 , (((p_20 <= (g_208 , (safe_lshift_func_int8_t_s_u((safe_sub_func_uint32_t_u_u((((1 && 0xF3) < ((p_20 < (((p_20 || ((safe_mul_func_uint16_t_u_u((p_20 <= g_70), (**l_375))) , 1)) , p_20) ^ p_20)) || 0x5581)) && p_20), g_260)), p_20)))) ^ p_20) , l_375))) , (*l_375));
            for (g_72 = 0; (g_72 <= 4); g_72 += 1)
            {
                uint8_t l_430 = 0x29;
                int32_t l_433 = 0x7DA97F44;
                if ((((safe_rshift_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(0x62D3, (0x2A8CA749 || ((safe_sub_func_uint8_t_u_u((((((safe_add_func_int32_t_s_s((safe_lshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_s(0xE486, 14)), 3)), g_72)) && (~((safe_sub_func_uint8_t_u_u((((safe_lshift_func_uint8_t_u_s(0U, p_20)) , ((((((safe_sub_func_int32_t_s_s((safe_rshift_func_int8_t_s_s(0xFD, g_407)), ((**l_375) && g_69))) > (**l_375)) | g_254) <= 0x7A) != 0) & (**l_375))) > p_20), p_20)) && 7))) , 246U) , (void*)0) != (*g_371)), 5U)) >= g_4[3])))), p_20)) >= g_167) & (**l_375)))
                {
                    int32_t *l_428 = &l_276[1][0];
                    int32_t l_431 = 0x8B5565A1;
                    (*l_428) = ((((safe_lshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_u((p_20 < (safe_sub_func_int32_t_s_s((safe_mod_func_uint32_t_u_u(((((safe_unary_minus_func_int16_t_s((safe_rshift_func_uint8_t_u_s(((**l_375) & (safe_sub_func_int8_t_s_s(p_20, (p_20 < (safe_lshift_func_int8_t_s_s(g_125, 4)))))), 4)))) ^ (!(((safe_lshift_func_uint8_t_u_s((safe_mul_func_uint16_t_u_u((l_428 == (void*)0), ((*l_369) == (*g_370)))), l_429[3])) , 1U) & p_20))) | p_20) < g_257[4][0][3]), p_20)), g_208))), g_73)), 6)) || (*l_428)) || 1U) <= 0x33);
                    if (l_430)
                        continue;
                    for (g_73 = 3; (g_73 >= 0); g_73 -= 1)
                    {
                        l_431 &= (**l_375);
                        (**l_311) = (*l_375);
                        if (l_432)
                            break;
                        l_433 = p_20;
                    }
                }
                else
                {
                    int32_t *l_434 = &g_72;
                    for (p_20 = 0; (p_20 <= 3); p_20 += 1)
                    {
                        (**l_311) = l_434;
                    }
                    for (g_70 = 0; (g_70 >= 0); g_70 -= 1)
                    {
                        int32_t l_445 = 0x03838D0C;
                        int i, j;
                        l_433 ^= ((safe_unary_minus_func_uint8_t_u((safe_add_func_uint8_t_u_u(((l_276[(g_70 + 1)][g_70] & (g_407 , l_430)) ^ ((0U | (safe_unary_minus_func_int8_t_s((safe_add_func_int8_t_s_s((safe_add_func_uint32_t_u_u((((((safe_mul_func_uint8_t_u_u((((p_20 <= ((void*)0 != &l_434)) == ((**l_375) != (6U & p_20))) && l_445), (**l_375))) , p_20) & (**l_375)) >= (**l_375)) > (**l_375)), 0)), p_20))))) | p_20)), p_20)))) && g_253);
                    }
                }
                return g_4[0];
            }
        }
        g_65 ^= p_20;
    }
    return g_179[6];
}
static int8_t func_23(int16_t p_24, int8_t p_25, uint32_t p_26)
{
    uint32_t l_61 = 0x037D9CC1;
    int32_t *l_227 = &g_72;
    int32_t l_245 = 0x9881E042;
    uint32_t l_246 = 0x7A0AEBC0;
    int32_t l_251 = 0;
    int32_t l_252 = 1;
    int32_t l_258 = 0x09EBA8E9;
    if ((safe_mod_func_int32_t_s_s(g_4[0], ((p_25 < (!(p_26 > 4294967290U))) , p_26))))
    {
        int32_t l_52 = (-9);
        int32_t *l_176 = &g_72;
        (*l_176) = func_41((((safe_sub_func_int32_t_s_s(func_31(((safe_add_func_uint16_t_u_u(func_48(l_52, (((0x2CC6 | func_53(((safe_sub_func_uint8_t_u_u((((safe_rshift_func_int8_t_s_s(0, 6)) > l_52) == (-9)), p_25)) != (safe_rshift_func_int8_t_s_u(l_61, 2))))) <= (safe_sub_func_uint32_t_u_u((((p_24 & 0xDE) | p_24) | 0x9F), p_24))) || 0xBDEFAB77), g_4[0]), 0x22E3)) ^ g_4[0]), g_4[0], g_4[5], l_61), 1U)) , p_26) >= (-8)), l_52);
    }
    else
    {
        uint16_t l_193 = 0x50C7;
        int32_t *l_194 = &g_72;
        uint32_t l_195 = 4294967295U;
        int32_t **l_201[9][1][10] = {{{&l_194,&l_194,&l_194,&g_68,&g_68,(void*)0,&l_194,(void*)0,&g_68,&g_68}},{{&g_68,&l_194,&g_68,(void*)0,(void*)0,&l_194,&l_194,&l_194,&l_194,(void*)0}},{{&l_194,&l_194,&l_194,&l_194,&g_68,&g_68,(void*)0,&l_194,(void*)0,&g_68}},{{&l_194,&g_68,&g_68,&g_68,&l_194,&g_68,&l_194,&g_68,&g_68,(void*)0}},{{&g_68,&l_194,&l_194,&l_194,&l_194,&g_68,&g_68,(void*)0,&l_194,(void*)0}},{{&l_194,&l_194,&l_194,&g_68,&l_194,&l_194,&l_194,&g_68,&l_194,&l_194}},{{&l_194,&l_194,&g_68,&g_68,&g_68,&g_68,&l_194,&l_194,&l_194,&g_68}},{{&g_68,&l_194,&l_194,&l_194,&g_68,&l_194,&l_194,&l_194,&g_68,&g_68}},{{&l_194,&l_194,&l_194,&g_68,&l_194,&l_194,&g_68,&l_194,&l_194,&l_194}}};
        int32_t ***l_200 = &l_201[7][0][4];
        uint32_t l_202 = 0x7ABF410F;
        int32_t l_250 = 7;
        int i, j, k;
        if ((p_26 & (0x37 | (l_61 > (safe_lshift_func_int16_t_s_s(p_26, 1))))))
        {
            int32_t *l_180 = (void*)0;
            int32_t **l_199 = &l_180;
            int32_t ***l_198 = &l_199;
            for (p_24 = 0; p_24 < 10; p_24 += 1)
            {
                g_179[p_24] = 4294967294U;
            }
            (*l_194) = (l_180 == (((((((g_74 , (safe_lshift_func_uint16_t_u_u(g_70, 0))) ^ (((((safe_add_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(((safe_lshift_func_int16_t_s_s(((((p_26 | ((-1) | (((!((g_179[0] < (safe_lshift_func_uint8_t_u_s(l_61, 4))) < ((!l_193) != 7))) || p_25) | p_25))) || g_167) | p_24) , 0x4A9D), 0)) && p_25), g_70)), g_125)) ^ l_193) ^ 1U) > 0x524C4902) != g_4[0])) < p_26) , p_24) && p_24) | 0x59) , l_194));
            (*l_194) = (0x0661D1CE | ((l_195 <= ((((safe_add_func_uint16_t_u_u((l_198 == l_200), l_202)) >= (((&l_201[7][0][4] == g_142) , (*l_198)) != (*l_200))) != (-3)) < l_61)) < g_65));
            return p_25;
        }
        else
        {
            uint16_t l_212 = 0U;
            int32_t l_244 = 0x25E57FDA;
            int32_t l_249[4][2][6] = {{{0,0x314FEBEB,(-2),(-5),3,0x643B3FE9},{0x643B3FE9,0xE20B6152,0,0xE20B6152,0x643B3FE9,0x314FEBEB}},{{0x643B3FE9,0,0xE20B6152,(-5),0x812E3678,0x812E3678},{0,3,3,0,0,0x812E3678}},{{(-2),0x812E3678,0xE20B6152,0x314FEBEB,(-5),0x314FEBEB},{0,(-1),0,0xBBC7000D,(-5),0x643B3FE9}},{{0xE20B6152,0x812E3678,(-2),0,0,(-2)},{3,3,0,0,0x812E3678,0xBBC7000D}}};
            int i, j, k;
            for (l_61 = 0; (l_61 == 27); l_61 = safe_add_func_uint16_t_u_u(l_61, 3))
            {
                int16_t l_205 = 0x54A4;
                int32_t l_206 = 5;
                int32_t l_209 = 0xB9C88E31;
                int32_t l_210 = 3;
                l_212--;
                if ((((+(safe_rshift_func_int16_t_s_s(p_25, ((safe_mul_func_uint16_t_u_u(4U, (p_25 | (g_4[0] < ((((safe_lshift_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((((safe_unary_minus_func_int16_t_s((((safe_lshift_func_uint16_t_u_u((((p_24 != 0xB4817761) > (-9)) <= 0x0424), 8)) , (l_227 != &g_72)) >= (*l_227)))) ^ g_207) < (-1)), l_212)), p_26)) , 0xBCE9) , 0x2FEDE261) , g_4[0]))))) && 0x872E)))) ^ p_26) <= g_72))
                {
                    return p_25;
                }
                else
                {
                    int32_t *l_232[6][2][4];
                    int32_t ****l_243 = (void*)0;
                    int32_t *****l_242 = &l_243;
                    int i, j, k;
                    for (i = 0; i < 6; i++)
                    {
                        for (j = 0; j < 2; j++)
                        {
                            for (k = 0; k < 4; k++)
                                l_232[i][j][k] = &g_65;
                        }
                    }
                    (*l_194) = 0xD7C481DA;
                    (*l_242) = (((g_211 | (0xF7AC17A1 && (safe_lshift_func_int8_t_s_u((p_24 >= (((((((1 | (l_232[2][1][2] == (void*)0)) < p_25) | (((safe_lshift_func_uint16_t_u_u(((safe_mod_func_uint8_t_u_u((((((!((65531U ^ (safe_mod_func_uint8_t_u_u(((+(+(1 <= 9U))) >= p_26), 0xAA))) & p_24)) , g_208) | 0xC175) , &l_206) == (void*)0), p_25)) | g_69), p_24)) & p_25) >= l_206)) < 0x06) , 253U) , 7) > p_26)), 2)))) , g_125) , (void*)0);
                    if (g_4[0])
                        continue;
                    l_246--;
                }
                ++g_254;
                --g_260;
            }
            g_263 = g_263;
            return g_4[0];
        }
    }
    return (*l_227);
}
static int8_t func_31(int32_t p_32, uint32_t p_33, int32_t p_34, uint32_t p_35)
{
    uint32_t l_36[9] = {4294967295U,4294967295U,4294967295U,4294967295U,4294967295U,4294967295U,4294967295U,4294967295U,4294967295U};
    int32_t l_37[8][8] = {{0x81606DC0,0,0xDE905F4D,0xDB62B2FA,1,0x9634D71B,0,0x89276496},{0x9634D71B,0,0x627E80A7,(-4),0xBEBF3B8C,0xDB62B2FA,0x6DD3ED23,0x5AD058BB},{0x6DD3ED23,(-7),1,1,0xB839BF5B,1,1,(-7)},{0,0xDB62B2FA,(-2),0xB839BF5B,0xD0BD2F23,0x6DD3ED23,0xD2DAFFA8,0xDE905F4D},{1,(-10),0xDB62B2FA,0,0,(-4),0xD2DAFFA8,0x627E80A7},{0x811FFBE6,0,(-2),0x6DD3ED23,(-10),(-1),1,1},{(-10),(-1),1,1,(-1),(-10),0x6DD3ED23,(-2)},{(-7),0x5AD058BB,0x627E80A7,0xD2DAFFA8,(-4),0,0,0xDB62B2FA}};
    int i, j;
    l_37[5][3] = l_36[4];
    return l_36[4];
}
static int32_t func_41(uint16_t p_42, int16_t p_43)
{
    int32_t *l_66 = &g_65;
    int32_t **l_67[3];
    int16_t l_71 = 0xE133;
    int32_t ***l_77 = &l_67[2];
    int i;
    for (i = 0; i < 3; i++)
        l_67[i] = &l_66;
    g_68 = (g_4[0] , l_66);
    g_74++;
    (*l_77) = &l_66;
    for (g_70 = 2; (g_70 >= 0); g_70 -= 1)
    {
        int16_t l_92[3][9][7] = {{{0x7BB5,0xC480,0x9270,(-1),(-9),0,8},{7,(-1),0x2E21,0x4C62,0,0x71C7,1},{0x8BAC,0x108B,(-7),0xEFCB,0x4A9C,(-1),0x9CEB},{0x71C7,0,(-7),0x4B85,0x8280,0x2E06,1},{(-1),0x8BAC,(-7),0xC480,0,6,6},{0,0x87DF,5,0x87DF,0,(-1),0x71C7},{0,0x9CEB,0x1E45,(-1),(-1),0,7},{5,0x6E0D,0xE2C5,0,(-1),0xC5D0,0x4F77},{0,(-1),0x3511,9,(-7),0,0x93F2}},{{0,(-1),(-1),1,0x3E74,0x2255,1},{(-1),0,0,0,7,0,0x9270},{0x71C7,0x2255,0x4F77,0x2E06,1,1,0x2E06},{0x9819,(-9),0x9819,0,(-1),0x8BFC,9},{0xEE84,1,0xDD72,0xF9B9,0,0,0x2255},{9,5,0x4556,(-7),(-1),0x8BFC,0xDEF6},{0x4C62,0,0xE236,0xEE84,0xB2EF,1,(-1)},{0x8A3D,9,0x9270,3,8,0,(-7)},{(-1),7,(-1),1,0xF9B9,0x2255,(-10)}},{{3,0x871C,0,5,5,0,0x871C},{0xDD72,0,0x8280,0xE236,0x852D,0xC5D0,0},{0,1,0x8BAC,0x1E45,0x9819,0,(-7)},{0x2255,6,7,0xE236,0xFF10,(-1),(-2)},{0,(-7),1,5,0x9270,6,0x1E45},{0xBA10,0xDD72,(-2),1,0x2255,0x2E06,0},{1,0x9270,0x8A3D,3,0x108B,(-1),0x777B},{1,1,0xEE84,0xEE84,1,1,0x87DF},{0xC480,0x4A9C,0x8BFC,(-7),(-1),(-2),(-1)}}};
        int32_t l_124 = 0xB54A4BB2;
        uint16_t l_143 = 65535U;
        int32_t l_152 = 0xA209B0CD;
        uint32_t l_175[6] = {0xEE316606,0xEE316606,0x393C069B,0xEE316606,0xEE316606,0x393C069B};
        int i, j, k;
        if ((((safe_lshift_func_int8_t_s_s(g_4[0], ((*g_68) , p_42))) && (safe_add_func_uint32_t_u_u(p_42, ((*g_68) == (safe_mul_func_uint8_t_u_u(6U, (safe_add_func_int32_t_s_s(((safe_add_func_uint32_t_u_u(((safe_rshift_func_uint8_t_u_u(0x68, 4)) , (safe_sub_func_int16_t_s_s(0x4559, (&g_72 != (void*)0)))), p_43)) > 5), l_92[2][1][2])))))))) , 0xD54EFE8F))
        {
            uint32_t l_126[8][10] = {{4294967294U,4294967294U,4294967291U,4294967294U,4294967294U,4294967291U,4294967294U,4294967294U,4294967291U,4294967294U},{4294967294U,0x9711EE92,0x9711EE92,0x9711EE92,4294967291U,4294967291U,0x9711EE92,4294967291U,4294967291U,0x9711EE92},{4294967291U,0x9711EE92,4294967291U,4294967291U,0x9711EE92,4294967291U,4294967291U,0x9711EE92,4294967291U,4294967291U},{0x9711EE92,0x9711EE92,4294967294U,0x9711EE92,0x9711EE92,4294967294U,0x9711EE92,0x9711EE92,4294967294U,0x9711EE92},{0x9711EE92,4294967291U,4294967291U,0x9711EE92,4294967291U,4294967291U,0x9711EE92,4294967291U,4294967291U,0x9711EE92},{4294967291U,0x9711EE92,4294967291U,4294967291U,0x9711EE92,4294967291U,4294967291U,0x9711EE92,4294967291U,4294967291U},{0x9711EE92,0x9711EE92,4294967294U,0x9711EE92,0x9711EE92,4294967294U,0x9711EE92,0x9711EE92,4294967294U,0x9711EE92},{0x9711EE92,4294967291U,4294967291U,0x9711EE92,4294967291U,4294967291U,0x9711EE92,4294967291U,4294967291U,0x9711EE92}};
            int i, j;
            (*g_68) = ((*g_68) , 0x04FC3DD1);
            g_72 ^= (((safe_lshift_func_int8_t_s_u(((((safe_add_func_uint32_t_u_u((((safe_mul_func_int16_t_s_s((g_65 , ((safe_sub_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s((safe_sub_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_s(((safe_add_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((((safe_lshift_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(((((((safe_sub_func_uint32_t_u_u((0xF1 || ((&g_65 == (void*)0) && g_73)), (((((!(safe_sub_func_uint16_t_u_u((((safe_add_func_int32_t_s_s((((&g_72 != (void*)0) && 4U) , (safe_add_func_int32_t_s_s((((***l_77) > 0x1A8D) <= g_70), p_42))), 0xD2F3D6CD)) == 0xEB91FBA6) || 0x67E7C572), 0x98DC))) , g_69) == p_43) , l_124) != g_125))) < 1) & (*g_68)) , l_67[g_70]) == l_67[g_70]) , (***l_77)), g_65)), 3)) ^ p_42) || g_73), g_69)), p_43)) > 65534U), 3)) != l_126[3][4]), g_125)), p_42)), l_126[3][4])) == (*g_68))), 0xDDAF)) , l_67[g_70]) != (void*)0), 1)) | 0x252E) <= 0x57C61DA5) <= p_42), p_43)) ^ p_43) <= p_43);
            (***l_77) = (safe_lshift_func_uint8_t_u_u(g_65, 0));
            (*l_66) = ((safe_sub_func_uint32_t_u_u((safe_add_func_uint16_t_u_u(g_125, ((p_43 == (safe_unary_minus_func_int16_t_s((&l_67[g_70] == &l_67[g_70])))) || 0x359DE98D))), ((safe_add_func_int16_t_s_s(((((((g_65 >= (safe_sub_func_uint8_t_u_u(255U, ((safe_unary_minus_func_int16_t_s((~((safe_sub_func_uint32_t_u_u((g_142 != &l_67[0]), 0xF2D68B99)) <= p_42)))) , l_143)))) != p_42) != g_65) , 0xCCF6E19B) != g_4[0]) || g_125), p_43)) , l_126[6][9]))) & 254U);
        }
        else
        {
            uint32_t l_144 = 0x8D08F60D;
            --l_144;
            if (((void*)0 == &l_67[0]))
            {
                (***l_77) &= p_43;
            }
            else
            {
                for (g_69 = (-14); (g_69 == 10); g_69 = safe_add_func_uint16_t_u_u(g_69, 2))
                {
                    for (l_144 = 10; (l_144 < 28); l_144++)
                    {
                        return (*g_68);
                    }
                    return p_43;
                }
                return p_42;
            }
            (***l_77) ^= (+g_70);
        }
        g_167 |= (l_152 , (safe_add_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u(((~(!((((safe_mod_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(((0U >= (((safe_add_func_int8_t_s_s((g_142 != &l_67[2]), (g_142 == (void*)0))) && g_73) || (((**l_77) == (void*)0) <= g_72))) | (*g_68)), 5)), 0x04)) , p_43) || p_42) , g_4[0]))) && (*g_68)), 0U)), (*g_68))));
        l_152 ^= (~(((void*)0 == l_67[g_70]) == (((safe_mod_func_int32_t_s_s((*l_66), 1U)) & (((((g_72 & 0x598F) >= (safe_unary_minus_func_uint8_t_u(p_42))) < ((+((((*l_66) , ((safe_mod_func_uint16_t_u_u((((***l_77) , (*g_68)) <= p_43), p_43)) && g_74)) <= 0x8098) <= (-1))) <= (-9))) >= l_175[4]) , 0x0CB2)) < 0x68CB1CE7)));
        (**l_77) = (**l_77);
    }
    return p_42;
}
static uint16_t func_48(uint16_t p_49, uint32_t p_50, uint16_t p_51)
{
    int32_t *l_64[3];
    int i;
    for (i = 0; i < 3; i++)
        l_64[i] = &g_65;
    g_65 = p_51;
    return g_65;
}
static uint16_t func_53(int16_t p_54)
{
    return g_4[0];
}
int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    for (i = 0; i < 7; i++)
    {
        csmith_sink_ = g_4[i];
    }
    csmith_sink_ = g_65;
    csmith_sink_ = g_69;
    csmith_sink_ = g_70;
    csmith_sink_ = g_72;
    csmith_sink_ = g_73;
    csmith_sink_ = g_74;
    csmith_sink_ = g_125;
    csmith_sink_ = g_167;
    for (i = 0; i < 10; i++)
    {
        csmith_sink_ = g_179[i];
    }
    csmith_sink_ = g_207;
    csmith_sink_ = g_208;
    csmith_sink_ = g_211;
    csmith_sink_ = g_253;
    csmith_sink_ = g_254;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 4; k++)
            {
                csmith_sink_ = g_257[i][j][k];
            }
        }
    }
    for (i = 0; i < 8; i++)
    {
        csmith_sink_ = g_259[i];
    }
    csmith_sink_ = g_260;
    csmith_sink_ = g_284;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 9; j++)
        {
            csmith_sink_ = g_296[i][j];
        }
    }
    csmith_sink_ = g_407;
    csmith_sink_ = g_449;
    csmith_sink_ = g_450;
    csmith_sink_ = g_451;
    platform_main_end(0,0);
    return 0;
}
