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
static uint32_t g_10 = 0xDE2BBEF7;
static uint16_t g_33[3][9] = {{0xBD48, 0x3398, 0xBD48, 0x3398, 0xBD48, 0x3398, 0xBD48, 0x3398, 0xBD48}, {0xBD48, 0x3398, 0xBD48, 0x3398, 0xBD48, 0x3398, 0xBD48, 0x3398, 0xBD48}, {0xBD48, 0x3398, 0xBD48, 0x3398, 0xBD48, 0x3398, 0xBD48, 0x3398, 0xBD48}};
static int32_t g_35 = 0xF39CEE24;
static uint32_t g_46 = 0x214F1636;
static uint32_t *g_45 = &g_46;
static uint32_t g_83 = 3U;
static uint32_t *g_88 = (void*)0;
static uint32_t **g_89 = (void*)0;
static int16_t g_118[5] = {0, 0, 0, 0, 0};
static uint32_t g_135 = 4U;
static int32_t *g_153 = &g_35;
static int32_t **g_152 = &g_153;
static int32_t **g_186 = (void*)0;
static int8_t g_213 = 0x3B;
static uint8_t g_235 = 0x34;
static uint8_t g_239 = 0x69;
static uint16_t g_253 = 3U;
static int8_t g_304 = 0xD2;
static int32_t g_305 = (-1);
static uint32_t g_306 = 0xFD59EA4E;
static int8_t *g_369[8] = {&g_213, &g_304, &g_213, &g_304, &g_213, &g_304, &g_213, &g_304};
static int8_t **g_374 = (void*)0;
static int32_t ***g_383[5][7] = {{&g_152, &g_152, &g_186, &g_152, &g_152, &g_152, &g_152}, {&g_152, &g_152, &g_186, &g_152, &g_152, &g_152, &g_152}, {&g_152, &g_152, &g_186, &g_152, &g_152, &g_152, &g_152}, {&g_152, &g_152, &g_186, &g_152, &g_152, &g_152, &g_152}, {&g_152, &g_152, &g_186, &g_152, &g_152, &g_152, &g_152}};
static int32_t ****g_382 = &g_383[2][2];
static uint16_t g_405[10] = {1U, 1U, 65535U, 1U, 1U, 65535U, 1U, 1U, 65535U, 1U};
static uint32_t **g_413[2][4] = {{(void*)0, &g_45, (void*)0, &g_45}, {(void*)0, &g_45, (void*)0, &g_45}};
static uint32_t ***g_412 = &g_413[1][1];
static uint32_t ****g_411 = &g_412;
static uint32_t *****g_410[10] = {&g_411, &g_411, &g_411, &g_411, &g_411, &g_411, &g_411, &g_411, &g_411, &g_411};
static int16_t g_436 = 0x8C95;
static int8_t **g_489[6] = {&g_369[3], &g_369[3], &g_369[3], &g_369[3], &g_369[3], &g_369[3]};
static int8_t g_531[10][4][6] = {{{1, 0xE1, 0x98, 0x25, 1, (-1)}, {1, 0xE1, 0x98, 0x25, 1, (-1)}, {1, 0xE1, 0x98, 0x25, 1, (-1)}, {1, 0xE1, 0x98, 0x25, 1, (-1)}}, {{1, 0xE1, 0x98, 0x25, 1, (-1)}, {1, 0xE1, 0x98, 0x25, 1, (-1)}, {1, 0xE1, 0x98, 0x25, 1, (-1)}, {1, 0xE1, 0x98, 0x25, 1, (-1)}}, {{1, 0xE1, 0x98, 0x25, 1, (-1)}, {1, 0xE1, 0x98, 0x25, 1, (-1)}, {1, 0xE1, 0x98, 0x25, 1, (-1)}, {1, 0xE1, 0x98, 0x25, 1, (-1)}}, {{1, 0xE1, 0x98, 0x25, 1, (-1)}, {1, 0xE1, 0x98, 0x25, 1, (-1)}, {1, 0xE1, 0x98, 0x25, 1, (-1)}, {1, 0xE1, 0x98, 0x25, 1, (-1)}}, {{1, 0xE1, 0x98, 0x25, 1, (-1)}, {1, 0xE1, 0x98, 0x25, 1, (-1)}, {1, 0xE1, 0x98, 0x25, 1, (-1)}, {1, 0xE1, 0x98, 0x25, 1, (-1)}}, {{1, 0xE1, 0x98, 0x25, 1, (-1)}, {1, 0xE1, 0x98, 0x25, 1, (-1)}, {1, 0xE1, 0x98, 0x25, 1, (-1)}, {1, 0xE1, 0x98, 0x25, 1, (-1)}}, {{1, 0xE1, 0x98, 0x25, 1, (-1)}, {1, 0xE1, 0x98, 0x25, 1, (-1)}, {1, 0xE1, 0x98, 0x25, 1, (-1)}, {1, 0xE1, 0x98, 0x25, 1, (-1)}}, {{1, 0xE1, 0x98, 0x25, 1, (-1)}, {1, 0xE1, 0x98, 0x25, 1, (-1)}, {1, 0xE1, 0x98, 0x25, 1, (-1)}, {1, 0xE1, 0x98, 0x25, 1, (-1)}}, {{1, 0xE1, 0x98, 0x25, 1, (-1)}, {1, 0xE1, 0x98, 0x25, 1, (-1)}, {1, 0xE1, 0x98, 0x25, 1, (-1)}, {1, 0xE1, 0x98, 0x25, 1, (-1)}}, {{1, 0xE1, 0x98, 0x25, 1, (-1)}, {1, 0xE1, 0x98, 0x25, 1, (-1)}, {1, 0xE1, 0x98, 0x25, 1, (-1)}, {1, 0xE1, 0x98, 0x25, 1, (-1)}}};
static int32_t g_614 = 0xE4A00392;
static int32_t g_615[1] = {0xCC876DA5};
static int8_t g_625 = (-10);
static int32_t ****g_667 = &g_383[2][2];
static int16_t *g_708 = &g_118[3];
static int32_t g_739 = 9;
static uint8_t g_741[10] = {0xDF, 0xDF, 0xBA, 0xDF, 0xDF, 0xBA, 0xDF, 0xDF, 0xBA, 0xDF};
static uint16_t g_753 = 0xE7FA;
static int16_t g_813 = 0x2AFE;
static int32_t ****g_896[8] = {(void*)0, &g_383[2][2], (void*)0, &g_383[2][2], (void*)0, &g_383[2][2], (void*)0, &g_383[2][2]};
static int32_t *****g_944 = &g_896[5];
static uint32_t g_1043 = 5U;
static uint32_t ***g_1069 = &g_89;
static uint32_t ****g_1068[8][9] = {{&g_1069, &g_1069, &g_1069, &g_1069, &g_1069, &g_1069, &g_1069, &g_1069, &g_1069}, {&g_1069, &g_1069, &g_1069, &g_1069, &g_1069, &g_1069, &g_1069, &g_1069, &g_1069}, {&g_1069, &g_1069, &g_1069, &g_1069, &g_1069, &g_1069, &g_1069, &g_1069, &g_1069}, {&g_1069, &g_1069, &g_1069, &g_1069, &g_1069, &g_1069, &g_1069, &g_1069, &g_1069}, {&g_1069, &g_1069, &g_1069, &g_1069, &g_1069, &g_1069, &g_1069, &g_1069, &g_1069}, {&g_1069, &g_1069, &g_1069, &g_1069, &g_1069, &g_1069, &g_1069, &g_1069, &g_1069}, {&g_1069, &g_1069, &g_1069, &g_1069, &g_1069, &g_1069, &g_1069, &g_1069, &g_1069}, {&g_1069, &g_1069, &g_1069, &g_1069, &g_1069, &g_1069, &g_1069, &g_1069, &g_1069}};
static int32_t g_1074 = (-3);
static uint32_t ***g_1076 = &g_413[1][2];
static int16_t **g_1124 = &g_708;
static int16_t ***g_1123[7][1] = {{&g_1124}, {&g_1124}, {&g_1124}, {&g_1124}, {&g_1124}, {&g_1124}, {&g_1124}};
static int8_t ***g_1191 = &g_489[1];
static int32_t g_1213 = 0x23BFD20A;
static int8_t ****g_1292[8][7][1] = {{{&g_1191}, {&g_1191}, {&g_1191}, {&g_1191}, {&g_1191}, {&g_1191}, {&g_1191}}, {{&g_1191}, {&g_1191}, {&g_1191}, {&g_1191}, {&g_1191}, {&g_1191}, {&g_1191}}, {{&g_1191}, {&g_1191}, {&g_1191}, {&g_1191}, {&g_1191}, {&g_1191}, {&g_1191}}, {{&g_1191}, {&g_1191}, {&g_1191}, {&g_1191}, {&g_1191}, {&g_1191}, {&g_1191}}, {{&g_1191}, {&g_1191}, {&g_1191}, {&g_1191}, {&g_1191}, {&g_1191}, {&g_1191}}, {{&g_1191}, {&g_1191}, {&g_1191}, {&g_1191}, {&g_1191}, {&g_1191}, {&g_1191}}, {{&g_1191}, {&g_1191}, {&g_1191}, {&g_1191}, {&g_1191}, {&g_1191}, {&g_1191}}, {{&g_1191}, {&g_1191}, {&g_1191}, {&g_1191}, {&g_1191}, {&g_1191}, {&g_1191}}};
static uint32_t g_1393 = 0xD7376191;
static int16_t g_1479 = 0x3932;
static uint16_t g_1714[5] = {65531U, 65531U, 65531U, 65531U, 65531U};
static int8_t ***g_1722[7] = {&g_489[1], &g_489[1], &g_489[5], &g_489[1], &g_489[1], &g_489[5], &g_489[1]};
static uint16_t func_1(void);
static int32_t func_2(int32_t p_3, uint16_t p_4, uint32_t p_5, uint32_t p_6, uint32_t p_7);
inline static uint8_t func_13(uint16_t p_14);
static uint16_t func_17(uint32_t p_18, uint8_t p_19, int16_t p_20);
inline static uint8_t func_28(int32_t p_29, uint32_t p_30, uint32_t * p_31, int16_t p_32);
static int32_t func_37(uint32_t * p_38, int32_t p_39, int32_t * p_40);
static uint32_t * func_41(uint32_t * p_42);
static uint32_t * func_43(uint32_t * p_44);
static uint32_t * func_58(uint32_t p_59, int32_t * p_60, int32_t * p_61, uint32_t * p_62, uint16_t p_63);
static uint32_t * func_66(int32_t * p_67, uint16_t p_68, uint32_t p_69, int16_t p_70, int16_t p_71);
static uint16_t func_1(void)
{
    int16_t l_8 = (-1);
    uint32_t *l_9 = &g_10;
    uint8_t l_21 = 0x05;
    int32_t l_22 = 0;
    int32_t l_1710[4];
    int i;
    for (i = 0; i < 4; i++)
        l_1710[i] = 0x6C5F6F20;
    l_1710[0] &= func_2(l_8, (l_8 | 1), ((*l_9)--), (func_13(((safe_lshift_func_int8_t_s_s(0xD2, 6)) >= func_17(l_8, l_21, l_22))) <= g_405[5]), l_21);
    for (g_10 = 0; (g_10 != 46); g_10 = safe_add_func_uint32_t_u_u(g_10, 1))
    {
        int32_t *l_1713 = &l_1710[3];
        g_1714[4]++;
        for (g_1393 = 0; (g_1393 >= 24); g_1393++)
        {
            int32_t *l_1724 = &g_739;
        }
        if (l_1710[2])
            break;
    }
    return l_8;
}
static int32_t func_2(int32_t p_3, uint16_t p_4, uint32_t p_5, uint32_t p_6, uint32_t p_7)
{
    uint8_t l_1672 = 0x13;
    uint32_t ***l_1700 = (void*)0;
    uint32_t ****l_1701 = &l_1700;
    uint32_t ****l_1702 = &g_1069;
    uint32_t ***l_1704 = &g_89;
    uint32_t ****l_1703 = &l_1704;
    uint32_t ***l_1705 = &g_89;
    int32_t *l_1706 = &g_739;
    int16_t l_1707 = 0x0272;
    uint16_t l_1708[8] = {3U, 3U, 0x2BF0, 3U, 3U, 0x2BF0, 3U, 3U};
    int8_t l_1709 = (-1);
    int i;
    if ((safe_mul_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s((((l_1708[1] = ((((**g_152) = l_1672) >= (0x390A || ((safe_sub_func_int32_t_s_s(7, (safe_sub_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(((safe_sub_func_int32_t_s_s((p_3 <= ((safe_rshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_s((((*l_1706) &= (((safe_sub_func_int8_t_s_s((safe_div_func_int16_t_s_s(1, p_3)), (safe_lshift_func_int8_t_s_u(((***g_1191) = (safe_rshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((!l_1672), (l_1672 != (safe_add_func_int32_t_s_s((((*l_1703) = ((*l_1702) = ((*l_1701) = l_1700))) == l_1705), 4294967295U))))), 15)), 8))), l_1672)))) && 0) && p_4)) != l_1707), p_7)), 1)) != p_6)), (-1))) & p_3), p_5)), 65535U)))) >= (*g_708)))) >= 9U)) || (*l_1706)) <= l_1709), 15)), p_4)))
    {
        return (*l_1706);
    }
    else
    {
        l_1706 = (void*)0;
    }
    return p_4;
}
inline static uint8_t func_13(uint16_t p_14)
{
    int32_t *l_1449 = &g_35;
    int32_t **l_1450 = &l_1449;
    uint32_t *****l_1475[10][8] = {{&g_411, &g_411, &g_411, (void*)0, &g_411, &g_411, &g_411, &g_411}, {&g_411, &g_411, &g_411, (void*)0, &g_411, &g_411, &g_411, &g_411}, {&g_411, &g_411, &g_411, (void*)0, &g_411, &g_411, &g_411, &g_411}, {&g_411, &g_411, &g_411, (void*)0, &g_411, &g_411, &g_411, &g_411}, {&g_411, &g_411, &g_411, (void*)0, &g_411, &g_411, &g_411, &g_411}, {&g_411, &g_411, &g_411, (void*)0, &g_411, &g_411, &g_411, &g_411}, {&g_411, &g_411, &g_411, (void*)0, &g_411, &g_411, &g_411, &g_411}, {&g_411, &g_411, &g_411, (void*)0, &g_411, &g_411, &g_411, &g_411}, {&g_411, &g_411, &g_411, (void*)0, &g_411, &g_411, &g_411, &g_411}, {&g_411, &g_411, &g_411, (void*)0, &g_411, &g_411, &g_411, &g_411}};
    uint8_t l_1476[6];
    int16_t l_1533 = 2;
    int32_t l_1540 = 7;
    int32_t l_1541[3][2][7] = {{{0x1EC63ECB, 0x1EC63ECB, 0x43C3003B, 0x1EC63ECB, 0x1EC63ECB, 0x43C3003B, 0x1EC63ECB}, {0x1EC63ECB, 0x1EC63ECB, 0x43C3003B, 0x1EC63ECB, 0x1EC63ECB, 0x43C3003B, 0x1EC63ECB}}, {{0x1EC63ECB, 0x1EC63ECB, 0x43C3003B, 0x1EC63ECB, 0x1EC63ECB, 0x43C3003B, 0x1EC63ECB}, {0x1EC63ECB, 0x1EC63ECB, 0x43C3003B, 0x1EC63ECB, 0x1EC63ECB, 0x43C3003B, 0x1EC63ECB}}, {{0x1EC63ECB, 0x1EC63ECB, 0x43C3003B, 0x1EC63ECB, 0x1EC63ECB, 0x43C3003B, 0x1EC63ECB}, {0x1EC63ECB, 0x1EC63ECB, 0x43C3003B, 0x1EC63ECB, 0x1EC63ECB, 0x43C3003B, 0x1EC63ECB}}};
    uint32_t l_1548 = 0xF3281BF2;
    int16_t ***l_1589 = &g_1124;
    uint8_t l_1595 = 0xBD;
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_1476[i] = 9U;
    for (g_213 = 0; (g_213 > 8); g_213++)
    {
        int32_t *l_1447 = &g_35;
        int32_t *l_1448 = &g_739;
        l_1447 = (void*)0;
        if (p_14)
            break;
        (*l_1448) = p_14;
    }
    (*l_1450) = ((*g_152) = l_1449);
    for (g_436 = 0; (g_436 > (-15)); g_436--)
    {
        int8_t **l_1455 = &g_369[4];
        int32_t *l_1458 = &g_35;
        int32_t **l_1459 = (void*)0;
        int32_t *l_1461 = &g_35;
        int32_t **l_1460 = &l_1461;
        uint16_t *l_1462 = (void*)0;
        uint16_t *l_1463 = &g_753;
        int8_t l_1470 = 0x8E;
        int16_t *l_1477 = &g_813;
        int16_t *l_1478 = &g_1479;
        int32_t l_1480[10] = {0xA315C0CD, 0xC30919BD, 0xA315C0CD, 0xC30919BD, 0xA315C0CD, 0xC30919BD, 0xA315C0CD, 0xC30919BD, 0xA315C0CD, 0xC30919BD};
        uint32_t ****l_1517[3];
        uint32_t ***l_1531[7] = {&g_89, &g_89, &g_89, &g_89, &g_89, &g_89, &g_89};
        int32_t l_1543[9][7] = {{0xFDA45D59, (-1), 0x9D4C0D05, (-1), 0xFDA45D59, 6, 0xFDA45D59}, {0xFDA45D59, (-1), 0x9D4C0D05, (-1), 0xFDA45D59, 6, 0xFDA45D59}, {0xFDA45D59, (-1), 0x9D4C0D05, (-1), 0xFDA45D59, 6, 0xFDA45D59}, {0xFDA45D59, (-1), 0x9D4C0D05, (-1), 0xFDA45D59, 6, 0xFDA45D59}, {0xFDA45D59, (-1), 0x9D4C0D05, (-1), 0xFDA45D59, 6, 0xFDA45D59}, {0xFDA45D59, (-1), 0x9D4C0D05, (-1), 0xFDA45D59, 6, 0xFDA45D59}, {0xFDA45D59, (-1), 0x9D4C0D05, (-1), 0xFDA45D59, 6, 0xFDA45D59}, {0xFDA45D59, (-1), 0x9D4C0D05, (-1), 0xFDA45D59, 6, 0xFDA45D59}, {0xFDA45D59, (-1), 0x9D4C0D05, (-1), 0xFDA45D59, 6, 0xFDA45D59}};
        int8_t **l_1658 = &g_369[2];
        int32_t *l_1667[9] = {&l_1541[1][1][5], &l_1541[0][0][4], &l_1541[1][1][5], &l_1541[0][0][4], &l_1541[1][1][5], &l_1541[0][0][4], &l_1541[1][1][5], &l_1541[0][0][4], &l_1541[1][1][5]};
        int i, j;
        for (i = 0; i < 3; i++)
            l_1517[i] = &g_412;
        if (((((safe_lshift_func_uint16_t_u_s(g_531[8][0][0], ((**g_1124) |= (l_1455 != (void*)0)))) <= ((**l_1455) ^= (((safe_add_func_uint16_t_u_u(((*l_1463) = (l_1458 != ((*l_1460) = ((*g_152) = ((*l_1450) = (*l_1450)))))), p_14)) == (safe_rshift_func_int8_t_s_s(((((safe_lshift_func_uint16_t_u_s((safe_div_func_uint32_t_u_u((0xE2F6 < ((*l_1478) = ((*l_1477) ^= (((l_1470 > (safe_add_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((l_1475[7][6] == (void*)0), 4294967290U)), 65533U))) ^ l_1476[5]) && p_14)))), p_14)), 0)) != p_14) & 0xD9A7) == (-1)), p_14))) ^ p_14))) > 247U) == 0xAB55))
        {
            uint8_t l_1484 = 0U;
            uint32_t **l_1497 = &g_45;
            int32_t l_1542 = 3;
            int32_t l_1546 = (-4);
            int32_t l_1547 = 0xAA89DDCB;
            for (g_239 = 0; (g_239 <= 7); g_239 += 1)
            {
                uint32_t **l_1496 = (void*)0;
                int8_t ***l_1502[7] = {&g_489[1], &g_374, &g_489[1], &g_374, &g_489[1], &g_374, &g_489[1]};
                int32_t l_1509 = 0x7C74DCF5;
                uint32_t ****l_1518 = &g_412;
                int32_t l_1532[3][5][10] = {{{0, (-8), 0x5C32292D, 0, 0x89E8A601, 0x288A7F16, 0x15356148, (-3), 0x15356148, 0x288A7F16}, {0, (-8), 0x5C32292D, 0, 0x89E8A601, 0x288A7F16, 0x15356148, (-3), 0x15356148, 0x288A7F16}, {0, (-8), 0x5C32292D, 0, 0x89E8A601, 0x288A7F16, 0x15356148, (-3), 0x15356148, 0x288A7F16}, {0, (-8), 0x5C32292D, 0, 0x89E8A601, 0x288A7F16, 0x15356148, (-3), 0x15356148, 0x288A7F16}, {0, (-8), 0x5C32292D, 0, 0x89E8A601, 0x288A7F16, 0x15356148, (-3), 0x15356148, 0x288A7F16}}, {{0, (-8), 0x5C32292D, 0, 0x89E8A601, 0x288A7F16, 0x15356148, (-3), 0x15356148, 0x288A7F16}, {0, (-8), 0x5C32292D, 0, 0x89E8A601, 0x288A7F16, 0x15356148, (-3), 0x15356148, 0x288A7F16}, {0, (-8), 0x5C32292D, 0, 0x89E8A601, 0x288A7F16, 0x15356148, (-3), 0x15356148, 0x288A7F16}, {0, (-8), 0x5C32292D, 0, 0x89E8A601, 0x288A7F16, 0x15356148, (-3), 0x15356148, 0x288A7F16}, {0, (-8), 0x5C32292D, 0, 0x89E8A601, 0x288A7F16, 0x15356148, (-3), 0x15356148, 0x288A7F16}}, {{0, (-8), 0x5C32292D, 0, 0x89E8A601, 0x288A7F16, 0x15356148, (-3), 0x15356148, 0x288A7F16}, {0, (-8), 0x5C32292D, 0, 0x89E8A601, 0x288A7F16, 0x15356148, (-3), 0x15356148, 0x288A7F16}, {0, (-8), 0x5C32292D, 0, 0x89E8A601, 0x288A7F16, 0x15356148, (-3), 0x15356148, 0x288A7F16}, {0, (-8), 0x5C32292D, 0, 0x89E8A601, 0x288A7F16, 0x15356148, (-3), 0x15356148, 0x288A7F16}, {0, (-8), 0x5C32292D, 0, 0x89E8A601, 0x288A7F16, 0x15356148, (-3), 0x15356148, 0x288A7F16}}};
                int i, j, k;
            }
        }
        else
        {
            uint32_t l_1551 = 0x958C24E3;
            return l_1551;
        }
        for (g_46 = 0; (g_46 < 26); ++g_46)
        {
            uint16_t *l_1559 = &g_33[1][7];
            int8_t l_1564 = 0x91;
            int16_t l_1637 = 2;
            uint8_t l_1650 = 1U;
            for (g_306 = 0; (g_306 < 19); ++g_306)
            {
                int32_t l_1565 = 0x49C8C652;
                int32_t l_1587[5][3] = {{0xCB536122, 0xCB536122, 0xF5634AD7}, {0xCB536122, 0xCB536122, 0xF5634AD7}, {0xCB536122, 0xCB536122, 0xF5634AD7}, {0xCB536122, 0xCB536122, 0xF5634AD7}, {0xCB536122, 0xCB536122, 0xF5634AD7}};
                uint32_t **l_1631 = &g_45;
                int i, j;
                if (((g_253 = (safe_sub_func_int8_t_s_s((safe_unary_minus_func_uint16_t_u((&g_405[6] != l_1559))), ((safe_add_func_int8_t_s_s((safe_sub_func_int8_t_s_s(0, (p_14 >= ((**g_152) = l_1564)))), l_1565)) <= ((safe_div_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s((safe_mod_func_uint32_t_u_u((l_1564 < 0x1A), (safe_mul_func_uint8_t_u_u((((void*)0 != &g_1124) != p_14), p_14)))), 3)), l_1565)) > 0x7431F1D2))))) == l_1564))
                {
                    int32_t l_1596[10] = {0, 1, 0xF70CBBD3, 0xF70CBBD3, 1, 0, 1, 0xF70CBBD3, 0xF70CBBD3, 1};
                    int32_t *l_1598 = &l_1565;
                    uint8_t l_1609 = 4U;
                    int32_t l_1616 = 0x8D51EDBE;
                    int i;
                    for (l_1548 = 4; (l_1548 != 27); l_1548++)
                    {
                        int16_t ***l_1588 = &g_1124;
                        uint8_t *l_1592 = &l_1476[5];
                        int32_t l_1597[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_1597[i] = (-1);
                        if ((**g_152))
                            break;
                        l_1598 = func_66(&l_1565, l_1565, (l_1596[8] = (p_14 | ((*g_153) = (safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s((safe_mul_func_int8_t_s_s((safe_div_func_uint32_t_u_u(((safe_lshift_func_uint16_t_u_u((~(l_1587[1][1] = p_14)), 10)) | (l_1588 == l_1589)), (safe_sub_func_uint8_t_u_u(((*l_1592) = g_46), (safe_div_func_uint16_t_u_u(65535U, p_14)))))), l_1595)), 1)), 0))))), l_1564, l_1597[2]);
                    }
                    (*l_1461) = ((safe_div_func_uint32_t_u_u(((safe_mod_func_int8_t_s_s((safe_div_func_int16_t_s_s(((safe_mod_func_uint32_t_u_u(p_14, ((safe_mod_func_uint32_t_u_u((&l_1450 == (void*)0), l_1609)) | (safe_div_func_uint8_t_u_u((1U != ((safe_sub_func_int16_t_s_s(l_1564, l_1616)) != (safe_mul_func_int16_t_s_s((((**l_1450) <= (safe_mod_func_uint32_t_u_u((**l_1460), 0x956C87E9))) < (*l_1458)), g_741[6])))), l_1564))))) == p_14), (*g_708))), p_14)) & p_14), 0xB915EF36)) && l_1565);
                    for (l_1595 = 0; (l_1595 <= 0); l_1595 += 1)
                    {
                        uint8_t *l_1623 = (void*)0;
                        uint8_t *l_1624 = &g_239;
                        (*l_1458) = (safe_rshift_func_uint8_t_u_s(p_14, 3));
                        (**l_1450) ^= ((--(*l_1624)) < (safe_mul_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((((**g_411) = l_1631) != (void*)0), (((***l_1589) = (safe_div_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(255U, 1U)), g_615[0]))) && p_14))), p_14)));
                    }
                    l_1540 |= (~(l_1587[1][1] &= ((0x596F4303 <= p_14) & ((l_1637 || (safe_add_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(p_14, p_14)), (+(p_14 <= 7U))))) != ((*l_1478) |= (safe_sub_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((~(0xB6AE75A5 && (safe_mul_func_int16_t_s_s(((-8) ^ g_741[6]), p_14)))), (*l_1461))), l_1650)))))));
                }
                else
                {
                    (**l_1460) = (p_14 | (-6));
                    for (l_1595 = 16; (l_1595 == 30); l_1595 = safe_add_func_int32_t_s_s(l_1595, 1))
                    {
                        int8_t l_1653 = 0x70;
                        l_1458 = ((*l_1460) = (*l_1450));
                        return l_1653;
                    }
                }
                return g_1213;
            }
        }
        l_1541[1][0][3] |= ((safe_add_func_uint32_t_u_u((p_14 ^ ((**l_1460) > ((void*)0 != l_1658))), (l_1480[4] &= (*l_1461)))) >= (safe_rshift_func_uint16_t_u_u(65535U, ((*l_1463) = ((**l_1450) >= (safe_mod_func_int8_t_s_s((safe_sub_func_int32_t_s_s((l_1540 &= (((**l_1460) | (safe_lshift_func_int16_t_s_u(p_14, (*l_1449)))) == p_14)), (**g_152))), p_14)))))));
    }
    return g_614;
}
static uint16_t func_17(uint32_t p_18, uint8_t p_19, int16_t p_20)
{
    uint32_t *l_36 = (void*)0;
    int8_t l_1440 = 0;
    int32_t l_1442 = 0xC17256D7;
    int32_t *l_1444[1];
    int i;
    for (i = 0; i < 1; i++)
        l_1444[i] = &g_739;
    for (p_19 = 0; (p_19 <= 5); p_19 = safe_add_func_int16_t_s_s(p_19, 1))
    {
        uint32_t *l_27 = (void*)0;
        int32_t *l_34 = &g_35;
        uint16_t *l_1439 = &g_405[9];
        uint16_t **l_1438 = &l_1439;
        uint32_t *l_1441 = &g_83;
        int32_t **l_1443[9][5][2] = {{{&l_34, &l_34}, {&l_34, &l_34}, {&l_34, &l_34}, {&l_34, &l_34}, {&l_34, &l_34}}, {{&l_34, &l_34}, {&l_34, &l_34}, {&l_34, &l_34}, {&l_34, &l_34}, {&l_34, &l_34}}, {{&l_34, &l_34}, {&l_34, &l_34}, {&l_34, &l_34}, {&l_34, &l_34}, {&l_34, &l_34}}, {{&l_34, &l_34}, {&l_34, &l_34}, {&l_34, &l_34}, {&l_34, &l_34}, {&l_34, &l_34}}, {{&l_34, &l_34}, {&l_34, &l_34}, {&l_34, &l_34}, {&l_34, &l_34}, {&l_34, &l_34}}, {{&l_34, &l_34}, {&l_34, &l_34}, {&l_34, &l_34}, {&l_34, &l_34}, {&l_34, &l_34}}, {{&l_34, &l_34}, {&l_34, &l_34}, {&l_34, &l_34}, {&l_34, &l_34}, {&l_34, &l_34}}, {{&l_34, &l_34}, {&l_34, &l_34}, {&l_34, &l_34}, {&l_34, &l_34}, {&l_34, &l_34}}, {{&l_34, &l_34}, {&l_34, &l_34}, {&l_34, &l_34}, {&l_34, &l_34}, {&l_34, &l_34}}};
        int i, j, k;
        l_1442 &= (safe_mul_func_uint16_t_u_u(((((void*)0 == l_27) <= func_28(((*l_34) = g_33[1][7]), g_33[2][0], l_36, p_19)) < ((*l_1441) |= ((safe_sub_func_int32_t_s_s(((((safe_mul_func_int16_t_s_s(p_18, (((*l_1438) = &g_253) == &g_405[6]))) < g_741[0]) != g_304) != p_18), l_1440)) != 0x974D1131))), 0xC754));
        (*g_152) = &l_1442;
    }
    (**g_152) = p_19;
    return g_213;
}
inline static uint8_t func_28(int32_t p_29, uint32_t p_30, uint32_t * p_31, int16_t p_32)
{
    int32_t l_855 = 0xCA3F104B;
    int32_t l_937[10][9] = {{(-1), 0xDCF88CDE, 1, (-1), 0xE5103515, (-1), 1, 0xDCF88CDE, (-1)}, {(-1), 0xDCF88CDE, 1, (-1), 0xE5103515, (-1), 1, 0xDCF88CDE, (-1)}, {(-1), 0xDCF88CDE, 1, (-1), 0xE5103515, (-1), 1, 0xDCF88CDE, (-1)}, {(-1), 0xDCF88CDE, 1, (-1), 0xE5103515, (-1), 1, 0xDCF88CDE, (-1)}, {(-1), 0xDCF88CDE, 1, (-1), 0xE5103515, (-1), 1, 0xDCF88CDE, (-1)}, {(-1), 0xDCF88CDE, 1, (-1), 0xE5103515, (-1), 1, 0xDCF88CDE, (-1)}, {(-1), 0xDCF88CDE, 1, (-1), 0xE5103515, (-1), 1, 0xDCF88CDE, (-1)}, {(-1), 0xDCF88CDE, 1, (-1), 0xE5103515, (-1), 1, 0xDCF88CDE, (-1)}, {(-1), 0xDCF88CDE, 1, (-1), 0xE5103515, (-1), 1, 0xDCF88CDE, (-1)}, {(-1), 0xDCF88CDE, 1, (-1), 0xE5103515, (-1), 1, 0xDCF88CDE, (-1)}};
    uint32_t *l_973 = &g_135;
    int16_t *l_1004 = &g_118[0];
    uint32_t l_1018 = 0xD47C253D;
    uint16_t *l_1062 = (void*)0;
    int32_t *l_1071 = &l_855;
    uint32_t *****l_1142 = &g_411;
    uint8_t l_1151 = 0xCD;
    uint16_t l_1181 = 0x9DC9;
    uint32_t ***l_1198 = &g_89;
    uint32_t ****l_1220 = &g_1076;
    uint32_t l_1263 = 8U;
    uint8_t l_1384 = 249U;
    uint16_t l_1431 = 65535U;
    int32_t l_1432 = 1;
    int8_t l_1433 = 0x5D;
    int i, j;
    if ((65526U && 0))
    {
        int32_t *l_859 = &g_739;
        uint32_t *l_907 = &g_83;
        uint32_t **l_906 = &l_907;
        int32_t l_936 = 9;
        int32_t l_938 = 0x8066DE33;
        int32_t *****l_943 = &g_896[5];
        int32_t l_970 = 5;
        for (p_29 = 2; (p_29 >= 0); p_29 -= 1)
        {
            uint16_t l_854 = 0x34A3;
            int16_t l_856[6][10][4] = {{{0x98FC, 0x7E62, (-1), (-1)}, {0x98FC, 0x7E62, (-1), (-1)}, {0x98FC, 0x7E62, (-1), (-1)}, {0x98FC, 0x7E62, (-1), (-1)}, {0x98FC, 0x7E62, (-1), (-1)}, {0x98FC, 0x7E62, (-1), (-1)}, {0x98FC, 0x7E62, (-1), (-1)}, {0x98FC, 0x7E62, (-1), (-1)}, {0x98FC, 0x7E62, (-1), (-1)}, {0x98FC, 0x7E62, (-1), (-1)}}, {{0x98FC, 0x7E62, (-1), (-1)}, {0x98FC, 0x7E62, (-1), (-1)}, {0x98FC, 0x7E62, (-1), (-1)}, {0x98FC, 0x7E62, (-1), (-1)}, {0x98FC, 0x7E62, (-1), (-1)}, {0x98FC, 0x7E62, (-1), (-1)}, {0x98FC, 0x7E62, (-1), (-1)}, {0x98FC, 0x7E62, (-1), (-1)}, {0x98FC, 0x7E62, (-1), (-1)}, {0x98FC, 0x7E62, (-1), (-1)}}, {{0x98FC, 0x7E62, (-1), (-1)}, {0x98FC, 0x7E62, (-1), (-1)}, {0x98FC, 0x7E62, (-1), (-1)}, {0x98FC, 0x7E62, (-1), (-1)}, {0x98FC, 0x7E62, (-1), (-1)}, {0x98FC, 0x7E62, (-1), (-1)}, {0x98FC, 0x7E62, (-1), (-1)}, {0x98FC, 0x7E62, (-1), (-1)}, {0x98FC, 0x7E62, (-1), (-1)}, {0x98FC, 0x7E62, (-1), (-1)}}, {{0x98FC, 0x7E62, (-1), (-1)}, {0x98FC, 0x7E62, (-1), (-1)}, {0x98FC, 0x7E62, (-1), (-1)}, {0x98FC, 0x7E62, (-1), (-1)}, {0x98FC, 0x7E62, (-1), (-1)}, {0x98FC, 0x7E62, (-1), (-1)}, {0x98FC, 0x7E62, (-1), (-1)}, {0x98FC, 0x7E62, (-1), (-1)}, {0x98FC, 0x7E62, (-1), (-1)}, {0x98FC, 0x7E62, (-1), (-1)}}, {{0x98FC, 0x7E62, (-1), (-1)}, {0x98FC, 0x7E62, (-1), (-1)}, {0x98FC, 0x7E62, (-1), (-1)}, {0x98FC, 0x7E62, (-1), (-1)}, {0x98FC, 0x7E62, (-1), (-1)}, {0x98FC, 0x7E62, (-1), (-1)}, {0x98FC, 0x7E62, (-1), (-1)}, {0x98FC, 0x7E62, (-1), (-1)}, {0x98FC, 0x7E62, (-1), (-1)}, {0x98FC, 0x7E62, (-1), (-1)}}, {{0x98FC, 0x7E62, (-1), (-1)}, {0x98FC, 0x7E62, (-1), (-1)}, {0x98FC, 0x7E62, (-1), (-1)}, {0x98FC, 0x7E62, (-1), (-1)}, {0x98FC, 0x7E62, (-1), (-1)}, {0x98FC, 0x7E62, (-1), (-1)}, {0x98FC, 0x7E62, (-1), (-1)}, {0x98FC, 0x7E62, (-1), (-1)}, {0x98FC, 0x7E62, (-1), (-1)}, {0x98FC, 0x7E62, (-1), (-1)}}};
            uint8_t *l_857 = (void*)0;
            uint8_t *l_858[9] = {&g_741[6], &g_741[7], &g_741[6], &g_741[7], &g_741[6], &g_741[7], &g_741[6], &g_741[7], &g_741[6]};
            int32_t l_904 = 0xD51E0F74;
            uint32_t ***l_905[5];
            uint32_t *l_918 = &g_46;
            int32_t l_939 = 7;
            uint16_t l_940 = 1U;
            int32_t l_968 = 0x9D5EA69B;
            int32_t *l_975[3];
            int8_t l_991 = 3;
            int i, j, k;
            for (i = 0; i < 5; i++)
                l_905[i] = &g_89;
            for (i = 0; i < 3; i++)
                l_975[i] = &l_939;
        }
        (*g_152) = &p_29;
    }
    else
    {
        int32_t l_999 = 0xA735BBF3;
        int32_t l_1000[7] = {0x64E08A6A, 0x6BA3EC2D, 0x64E08A6A, 0x6BA3EC2D, 0x64E08A6A, 0x6BA3EC2D, 0x64E08A6A};
        int16_t *l_1005 = (void*)0;
        uint32_t *l_1008 = &g_83;
        uint32_t **l_1007[4][9][7] = {{{(void*)0, &l_1008, &l_1008, &l_1008, &l_1008, (void*)0, &l_1008}, {(void*)0, &l_1008, &l_1008, &l_1008, &l_1008, (void*)0, &l_1008}, {(void*)0, &l_1008, &l_1008, &l_1008, &l_1008, (void*)0, &l_1008}, {(void*)0, &l_1008, &l_1008, &l_1008, &l_1008, (void*)0, &l_1008}, {(void*)0, &l_1008, &l_1008, &l_1008, &l_1008, (void*)0, &l_1008}, {(void*)0, &l_1008, &l_1008, &l_1008, &l_1008, (void*)0, &l_1008}, {(void*)0, &l_1008, &l_1008, &l_1008, &l_1008, (void*)0, &l_1008}, {(void*)0, &l_1008, &l_1008, &l_1008, &l_1008, (void*)0, &l_1008}, {(void*)0, &l_1008, &l_1008, &l_1008, &l_1008, (void*)0, &l_1008}}, {{(void*)0, &l_1008, &l_1008, &l_1008, &l_1008, (void*)0, &l_1008}, {(void*)0, &l_1008, &l_1008, &l_1008, &l_1008, (void*)0, &l_1008}, {(void*)0, &l_1008, &l_1008, &l_1008, &l_1008, (void*)0, &l_1008}, {(void*)0, &l_1008, &l_1008, &l_1008, &l_1008, (void*)0, &l_1008}, {(void*)0, &l_1008, &l_1008, &l_1008, &l_1008, (void*)0, &l_1008}, {(void*)0, &l_1008, &l_1008, &l_1008, &l_1008, (void*)0, &l_1008}, {(void*)0, &l_1008, &l_1008, &l_1008, &l_1008, (void*)0, &l_1008}, {(void*)0, &l_1008, &l_1008, &l_1008, &l_1008, (void*)0, &l_1008}, {(void*)0, &l_1008, &l_1008, &l_1008, &l_1008, (void*)0, &l_1008}}, {{(void*)0, &l_1008, &l_1008, &l_1008, &l_1008, (void*)0, &l_1008}, {(void*)0, &l_1008, &l_1008, &l_1008, &l_1008, (void*)0, &l_1008}, {(void*)0, &l_1008, &l_1008, &l_1008, &l_1008, (void*)0, &l_1008}, {(void*)0, &l_1008, &l_1008, &l_1008, &l_1008, (void*)0, &l_1008}, {(void*)0, &l_1008, &l_1008, &l_1008, &l_1008, (void*)0, &l_1008}, {(void*)0, &l_1008, &l_1008, &l_1008, &l_1008, (void*)0, &l_1008}, {(void*)0, &l_1008, &l_1008, &l_1008, &l_1008, (void*)0, &l_1008}, {(void*)0, &l_1008, &l_1008, &l_1008, &l_1008, (void*)0, &l_1008}, {(void*)0, &l_1008, &l_1008, &l_1008, &l_1008, (void*)0, &l_1008}}, {{(void*)0, &l_1008, &l_1008, &l_1008, &l_1008, (void*)0, &l_1008}, {(void*)0, &l_1008, &l_1008, &l_1008, &l_1008, (void*)0, &l_1008}, {(void*)0, &l_1008, &l_1008, &l_1008, &l_1008, (void*)0, &l_1008}, {(void*)0, &l_1008, &l_1008, &l_1008, &l_1008, (void*)0, &l_1008}, {(void*)0, &l_1008, &l_1008, &l_1008, &l_1008, (void*)0, &l_1008}, {(void*)0, &l_1008, &l_1008, &l_1008, &l_1008, (void*)0, &l_1008}, {(void*)0, &l_1008, &l_1008, &l_1008, &l_1008, (void*)0, &l_1008}, {(void*)0, &l_1008, &l_1008, &l_1008, &l_1008, (void*)0, &l_1008}, {(void*)0, &l_1008, &l_1008, &l_1008, &l_1008, (void*)0, &l_1008}}};
        uint32_t ***l_1054 = &g_89;
        uint32_t ****l_1053[4] = {&l_1054, &l_1054, &l_1054, &l_1054};
        uint32_t ***l_1075 = &g_413[1][1];
        int16_t ***l_1126 = (void*)0;
        uint8_t l_1132 = 0x9B;
        uint32_t *****l_1187 = (void*)0;
        uint32_t l_1207 = 4294967294U;
        uint32_t l_1261 = 0xE708D758;
        uint16_t l_1294[2];
        int8_t ***l_1311 = &g_489[1];
        uint16_t l_1400 = 0x1AA6;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_1294[i] = 0x7316;
        for (g_306 = 0; g_306 < 3; g_306 += 1)
        {
            for (g_35 = 0; g_35 < 9; g_35 += 1)
            {
                g_33[g_306][g_35] = 0x5793;
            }
        }
    }
    l_1432 ^= (((l_937[2][2] |= (safe_sub_func_int8_t_s_s((safe_sub_func_int16_t_s_s((((safe_lshift_func_int8_t_s_u(((safe_div_func_int32_t_s_s(((safe_div_func_uint32_t_u_u(((((safe_mul_func_int16_t_s_s(((**g_1124) = 0x6B18), 1)) & (p_30 < (*l_1071))) < p_29) & ((-4) | ((safe_lshift_func_uint16_t_u_s(((!(***g_1191)) | g_135), ((safe_mul_func_int8_t_s_s((safe_div_func_int16_t_s_s(((((*l_1071) == g_1213) || 0) == 0), 7)), p_29)) || 1))) <= p_32))), p_29)) >= 0xB02D), l_1431)) && p_32), (*l_1071))) > (*l_1071)) && (-9)), 9)), (*l_1071)))) | 0x35879D5F) < 0x924D34E6);
    return l_1433;
}
static int32_t func_37(uint32_t * p_38, int32_t p_39, int32_t * p_40)
{
    int32_t *l_860 = (void*)0;
    int32_t *l_861 = &g_739;
    int32_t *l_862 = (void*)0;
    int32_t *l_863 = &g_35;
    int32_t *l_864 = &g_35;
    int32_t *l_865 = (void*)0;
    int32_t l_866 = 0x7373891C;
    int32_t *l_867 = &g_35;
    int32_t *l_868 = &l_866;
    int32_t *l_869[5];
    uint32_t l_870 = 0xDD3DAEA0;
    uint32_t l_878 = 4294967295U;
    uint16_t l_901 = 65531U;
    int i;
    for (i = 0; i < 5; i++)
        l_869[i] = &l_866;
    ++l_870;
    for (g_436 = 0; (g_436 > 24); g_436 = safe_add_func_uint32_t_u_u(g_436, 1))
    {
        uint32_t l_877[8] = {6U, 0xC9BF7645, 6U, 0xC9BF7645, 6U, 0xC9BF7645, 6U, 0xC9BF7645};
        uint32_t l_883 = 1U;
        int32_t *l_903[1];
        int i;
        for (i = 0; i < 1; i++)
            l_903[i] = &g_739;
        for (p_39 = 0; (p_39 <= 18); ++p_39)
        {
            int16_t l_893 = 0x2E22;
            if (l_877[6])
                break;
            if (((*l_861) = (((*l_867) = (*p_40)) < l_878)))
            {
                int32_t *l_881 = &l_866;
                int8_t *l_882[5][1][5] = {{{(void*)0, &g_531[9][0][5], &g_531[8][0][0], (void*)0, &g_304}}, {{(void*)0, &g_531[9][0][5], &g_531[8][0][0], (void*)0, &g_304}}, {{(void*)0, &g_531[9][0][5], &g_531[8][0][0], (void*)0, &g_304}}, {{(void*)0, &g_531[9][0][5], &g_531[8][0][0], (void*)0, &g_304}}, {{(void*)0, &g_531[9][0][5], &g_531[8][0][0], (void*)0, &g_304}}};
                int16_t l_902[5] = {0x9715, (-1), 0x9715, (-1), 0x9715};
                int i, j, k;
                if ((safe_mod_func_uint8_t_u_u((((((l_883 = (l_881 != &p_39)) & (safe_lshift_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_s(0xBD, ((*p_40) | ((safe_add_func_uint32_t_u_u((((*p_40) && (~(((safe_div_func_uint32_t_u_u(l_893, (safe_div_func_int8_t_s_s((&g_383[1][1] == g_896[5]), (safe_div_func_int32_t_s_s(((safe_mul_func_uint8_t_u_u(l_893, l_901)) > (*g_708)), g_235)))))) <= p_39) != 6U))) && 4294967294U), (-1))) | 0x56CA)))) ^ l_877[6]), 4))) != 4294967295U) <= 0x32D3252A) <= p_39), l_902[4])))
                {
                    l_903[0] = &p_39;
                }
                else
                {
                    (*g_152) = l_903[0];
                }
            }
            else
            {
                g_410[1] = &g_411;
            }
        }
    }
    (*g_152) = &p_39;
    return (*l_867);
}
static uint32_t * func_41(uint32_t * p_42)
{
    int32_t *l_218 = &g_35;
    int32_t l_303 = 0;
    int8_t l_318 = 1;
    int32_t l_448 = 0xA2957471;
    int32_t l_451 = 0xE93CFB2F;
    int32_t l_459 = 0x122A5402;
    int32_t l_460 = 0xF93FCAF5;
    int32_t l_463 = 8;
    int32_t l_466 = 0;
    int32_t l_470[4] = {(-10), 0x256F05E9, (-10), 0x256F05E9};
    int16_t *l_706 = &g_118[0];
    int32_t l_714 = 9;
    uint32_t **l_722 = (void*)0;
    int32_t ****l_763 = &g_383[1][2];
    int32_t *l_779 = (void*)0;
    int32_t l_837 = 0xE9EF99B7;
    int i;
    for (g_46 = 0; (g_46 <= 2); g_46 += 1)
    {
        int8_t l_219[2];
        uint32_t *l_226 = &g_46;
        int i;
        for (i = 0; i < 2; i++)
            l_219[i] = 9;
        (*g_152) = l_218;
        for (g_135 = 0; (g_135 <= 4); g_135 += 1)
        {
            uint32_t **l_227 = &l_226;
            uint8_t *l_234 = &g_235;
            uint8_t *l_238 = &g_239;
            int8_t *l_240 = (void*)0;
            int8_t *l_241 = &g_213;
            int32_t **l_242 = &l_218;
            int i, j;
            (*l_242) = ((*g_152) = func_66(l_218, g_33[g_46][(g_46 + 3)], ((l_219[1] ^ (safe_div_func_int8_t_s_s(((safe_div_func_int32_t_s_s((safe_div_func_int8_t_s_s((&g_135 == ((*l_227) = l_226)), (safe_rshift_func_uint8_t_u_s(249U, ((*l_241) ^= (safe_sub_func_uint8_t_u_u((g_35 == ((++(*l_234)) >= 0x15)), ((*l_238) = (*l_218))))))))), (-4))) != l_219[1]), g_33[g_46][(g_46 + 3)]))) & 0xBA40), l_219[0], l_219[0]));
            for (g_83 = 0; g_83 < 2; g_83 += 1)
            {
                l_219[g_83] = 0xCD;
            }
        }
    }
    return p_42;
}
static uint32_t * func_43(uint32_t * p_44)
{
    int8_t l_50 = 0xD7;
    uint32_t *l_57 = (void*)0;
    uint32_t **l_72[2];
    uint32_t *l_74[6][3];
    int8_t *l_75 = &l_50;
    int32_t l_76[8];
    int32_t l_77 = 0;
    int32_t *l_93 = &g_35;
    uint32_t l_178 = 0xED04B031;
    uint32_t ***l_190 = &l_72[0];
    uint32_t ****l_189[8] = {&l_190, &l_190, &l_190, &l_190, &l_190, &l_190, &l_190, &l_190};
    int32_t *l_217 = &l_77;
    int i, j;
    for (i = 0; i < 2; i++)
        l_72[i] = &g_45;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 3; j++)
            l_74[i][j] = &g_46;
    }
    for (i = 0; i < 8; i++)
        l_76[i] = 0;
    for (g_46 = (-27); (g_46 == 33); g_46 = safe_add_func_int16_t_s_s(g_46, 7))
    {
        int32_t *l_49[9][2][4];
        int i, j, k;
        for (i = 0; i < 9; i++)
        {
            for (j = 0; j < 2; j++)
            {
                for (k = 0; k < 4; k++)
                    l_49[i][j][k] = &g_35;
            }
        }
        l_50 = 0xF63EEDA7;
    }
    if ((l_77 ^= (((safe_sub_func_int8_t_s_s(((*l_75) = (safe_div_func_int32_t_s_s(l_50, (((safe_mod_func_int16_t_s_s((0x96 > (l_50 <= (l_57 != (l_74[2][0] = func_58(((*p_44)++), l_57, p_44, (g_45 = func_66(&g_35, g_33[0][5], l_50, l_50, g_35)), l_50))))), l_50)) ^ 0x1E) ^ (-1))))), l_76[2])) > l_76[0]) < g_35)))
    {
        uint32_t l_87 = 0x9F139888;
        for (l_77 = (-13); (l_77 == (-22)); l_77 = safe_sub_func_uint16_t_u_u(l_77, 1))
        {
            uint32_t *l_82 = &g_83;
            int32_t *l_86[4] = {(void*)0, &l_76[0], (void*)0, &l_76[0]};
            int i;
            l_87 |= ((safe_sub_func_int16_t_s_s(g_46, g_46)) == (((*l_82)--) == (65529U >= 0x05D0)));
            for (l_50 = 0; (l_50 <= 7); l_50 += 1)
            {
                return g_88;
            }
        }
    }
    else
    {
        uint32_t ***l_90 = &g_89;
        int32_t l_96 = 0x9916A5C5;
        uint32_t *l_127 = &g_46;
        int16_t l_134 = 0x7782;
        uint32_t **l_139[10][8] = {{&l_74[2][0], &l_57, &l_74[2][0], &l_57, &l_74[2][0], &l_57, &l_74[2][0], &l_57}, {&l_74[2][0], &l_57, &l_74[2][0], &l_57, &l_74[2][0], &l_57, &l_74[2][0], &l_57}, {&l_74[2][0], &l_57, &l_74[2][0], &l_57, &l_74[2][0], &l_57, &l_74[2][0], &l_57}, {&l_74[2][0], &l_57, &l_74[2][0], &l_57, &l_74[2][0], &l_57, &l_74[2][0], &l_57}, {&l_74[2][0], &l_57, &l_74[2][0], &l_57, &l_74[2][0], &l_57, &l_74[2][0], &l_57}, {&l_74[2][0], &l_57, &l_74[2][0], &l_57, &l_74[2][0], &l_57, &l_74[2][0], &l_57}, {&l_74[2][0], &l_57, &l_74[2][0], &l_57, &l_74[2][0], &l_57, &l_74[2][0], &l_57}, {&l_74[2][0], &l_57, &l_74[2][0], &l_57, &l_74[2][0], &l_57, &l_74[2][0], &l_57}, {&l_74[2][0], &l_57, &l_74[2][0], &l_57, &l_74[2][0], &l_57, &l_74[2][0], &l_57}, {&l_74[2][0], &l_57, &l_74[2][0], &l_57, &l_74[2][0], &l_57, &l_74[2][0], &l_57}};
        uint32_t *l_140[2];
        uint8_t l_215[6] = {0xDE, 0xDE, 8U, 0xDE, 0xDE, 8U};
        int i, j;
        for (i = 0; i < 2; i++)
            l_140[i] = (void*)0;
        (*l_90) = g_89;
        for (g_83 = 0; (g_83 != 45); g_83 = safe_add_func_int8_t_s_s(g_83, 9))
        {
            uint8_t l_97 = 0x70;
            int32_t l_120 = 0xD6112DD2;
            uint32_t ***l_165 = (void*)0;
            uint32_t **l_170[9] = {&g_45, &g_45, &l_57, &g_45, &g_45, &l_57, &g_45, &g_45, &l_57};
            uint16_t l_216 = 0x5802;
            int i;
        }
    }
    (*l_217) |= ((*l_93) & 0x92380DBE);
    (*g_153) &= (*l_217);
    return p_44;
}
static uint32_t * func_58(uint32_t p_59, int32_t * p_60, int32_t * p_61, uint32_t * p_62, uint16_t p_63)
{
    uint32_t *l_73 = (void*)0;
    return l_73;
}
static uint32_t * func_66(int32_t * p_67, uint16_t p_68, uint32_t p_69, int16_t p_70, int16_t p_71)
{
    return g_45;
}
int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_10;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 9; j++)
        {
            csmith_sink_ = g_33[i][j];
        }
    }
    csmith_sink_ = g_35;
    csmith_sink_ = g_46;
    csmith_sink_ = g_83;
    for (i = 0; i < 5; i++)
    {
        csmith_sink_ = g_118[i];
    }
    csmith_sink_ = g_135;
    csmith_sink_ = g_213;
    csmith_sink_ = g_235;
    csmith_sink_ = g_239;
    csmith_sink_ = g_253;
    csmith_sink_ = g_304;
    csmith_sink_ = g_305;
    csmith_sink_ = g_306;
    for (i = 0; i < 10; i++)
    {
        csmith_sink_ = g_405[i];
    }
    csmith_sink_ = g_436;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 6; k++)
            {
                csmith_sink_ = g_531[i][j][k];
            }
        }
    }
    csmith_sink_ = g_614;
    for (i = 0; i < 1; i++)
    {
        csmith_sink_ = g_615[i];
    }
    csmith_sink_ = g_625;
    csmith_sink_ = g_739;
    for (i = 0; i < 10; i++)
    {
        csmith_sink_ = g_741[i];
    }
    csmith_sink_ = g_753;
    csmith_sink_ = g_813;
    csmith_sink_ = g_1043;
    csmith_sink_ = g_1074;
    csmith_sink_ = g_1213;
    csmith_sink_ = g_1393;
    csmith_sink_ = g_1479;
    for (i = 0; i < 5; i++)
    {
        csmith_sink_ = g_1714[i];
    }
    platform_main_end(0,0);
    return 0;
}
