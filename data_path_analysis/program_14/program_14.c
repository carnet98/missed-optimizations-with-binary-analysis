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
static int32_t g_8 = 0x2167FA5C;
static int32_t g_50 = 0xF402BE2F;
static int16_t g_62 = (-9);
static int32_t g_76 = 7;
static int16_t *g_80 = (void*)0;
static uint8_t g_86 = 0x47;
static uint16_t g_97 = 65528U;
static int8_t g_100 = 0;
static int32_t *g_119 = &g_76;
static int32_t **g_118 = &g_119;
static uint16_t *g_127 = &g_97;
static uint16_t **g_126 = &g_127;
static int32_t g_164 = 0xA41F08C6;
static uint16_t ***g_168 = &g_126;
static int32_t g_178 = 7;
static uint8_t g_185 = 0x5B;
static uint32_t g_194 = 4294967292U;
static uint32_t g_250 = 4294967286U;
static int8_t g_259 = 1;
static int32_t g_264 = (-1);
static int8_t **g_284 = (void*)0;
static int8_t ***g_283 = &g_284;
static int32_t ***g_420 = &g_118;
static uint16_t ****g_460 = (void*)0;
static uint16_t *****g_459 = &g_460;
static uint32_t *g_510 = &g_194;
static uint32_t **g_509 = &g_510;
static const uint16_t * const g_535 = &g_97;
static const uint16_t * const *g_534 = &g_535;
static int32_t g_579 = 0x98B23FD4;
static uint32_t ***g_607 = &g_509;
static uint32_t ****g_606 = &g_607;
static int32_t **** const *g_611 = (void*)0;
static const uint32_t g_624 = 4294967286U;
static uint16_t g_634 = 65535U;
static int8_t g_638 = (-1);
static int8_t *** const *g_676 = (void*)0;
static int8_t *** const **g_675 = &g_676;
static int32_t ****g_726 = &g_420;
static int32_t g_769 = 0x85DC7832;
static int8_t g_827 = 1;
static const int32_t *g_935 = &g_579;
static const int32_t **g_934 = &g_935;
static const int32_t ***g_933 = &g_934;
static uint32_t g_946 = 0x609D3E92;
static int32_t g_1013 = 0;
static int16_t g_1051 = (-7);
static const int16_t ***g_1064 = (void*)0;
static int16_t **g_1101 = &g_80;
static int16_t ***g_1100 = &g_1101;
static int32_t *g_1240 = &g_50;
static const int32_t func_1(void);
static int32_t * func_2(uint16_t p_3, int8_t p_4, uint8_t p_5, const int16_t p_6, uint8_t p_7);
static int32_t func_13(int32_t * p_14, int8_t p_15, int32_t * p_16);
static int32_t func_18(int32_t * p_19, int32_t * p_20, uint32_t p_21);
static uint8_t func_24(uint8_t p_25, int32_t * p_26, uint32_t p_27, int32_t * p_28);
static int8_t func_29(int32_t * p_30, int16_t p_31, int16_t p_32, int32_t * p_33);
static int8_t func_38(int16_t p_39, uint32_t p_40, int32_t * p_41, uint16_t p_42);
static int16_t func_45(int16_t p_46, int32_t * p_47);
static int16_t func_51(int32_t * p_52, const int32_t * p_53, int32_t * p_54);
static int32_t * func_55(uint16_t p_56, uint16_t p_57, int8_t p_58);
static const int32_t func_1(void)
{
    int32_t *l_12 = &g_8;
    int32_t **l_1241 = &g_1240;
    (*l_1241) = func_2(g_8, ((!9U) != (safe_add_func_int32_t_s_s((l_12 == (void*)0), func_13(&g_8, (*l_12), ((safe_unary_minus_func_int32_t_s(func_18(((((safe_add_func_uint8_t_u_u(func_24(g_8, l_12, (func_29(((safe_rshift_func_int8_t_s_s(((*l_12) | 7U), (*l_12))) , &g_8), (*l_12), g_8, &g_8) , 0x29A0D023), l_12), 0xD9)) , 0x7E1CDA56) , (-8)) , l_12), l_12, (*l_12)))) , (void*)0))))), (*l_12), g_164, g_634);
    return (**l_1241);
}
static int32_t * func_2(uint16_t p_3, int8_t p_4, uint8_t p_5, const int16_t p_6, uint8_t p_7)
{
    uint32_t l_901 = 0U;
    uint32_t **l_912 = (void*)0;
    int32_t l_921 = 0x7537EE17;
    int32_t *l_923 = &g_50;
    int32_t l_931 = (-1);
    int16_t l_932 = 0;
    uint32_t l_949 = 0x1A682D99;
    int16_t **l_954 = &g_80;
    int8_t l_963 = 0x22;
    uint32_t l_973 = 0x85B1825F;
    uint16_t ***l_985 = &g_126;
    int8_t ****l_1018 = &g_283;
    int8_t *****l_1017 = &l_1018;
    uint8_t l_1030 = 0xFE;
    int32_t *l_1168 = (void*)0;
    int32_t **l_1167 = &l_1168;
    int32_t *l_1213 = &g_50;
    uint32_t l_1221 = 0x2D0CC254;
    uint16_t l_1222 = 65526U;
    int8_t l_1238 = 1;
    if (l_901)
    {
        int8_t l_908 = 0x91;
        int16_t *l_909 = &g_62;
        int32_t l_916 = 1;
        uint32_t ****l_917 = &g_607;
        uint32_t *l_945 = &g_946;
        int8_t *l_950 = (void*)0;
        int8_t *l_951 = &g_100;
        int32_t l_971 = 0x7C408F1A;
        int32_t l_1031 = 0x9EC834BA;
        const uint32_t l_1106 = 0x67189DCB;
        int16_t l_1107 = 1;
        int32_t *l_1112 = &g_769;
        int16_t l_1184 = 8;
        int32_t *l_1205 = &l_916;
        if ((((safe_lshift_func_uint16_t_u_s((((safe_sub_func_int32_t_s_s((((safe_div_func_uint16_t_u_u((p_7 || ((*l_909) = l_908)), 0x5C2C)) ^ (safe_lshift_func_int8_t_s_u(((((((**g_606) = (*g_607)) != l_912) & (!(l_908 == (safe_rshift_func_uint16_t_u_s(p_6, (((l_916 = 3U) <= 2U) , l_916)))))) , &g_607) == l_917), 6))) < p_5), p_7)) > p_3) ^ 1), 3)) || p_6) && l_916))
        {
            int32_t *l_919 = &g_50;
            uint32_t *l_922 = &g_250;
            uint8_t *l_930 = &g_86;
            int32_t **l_937 = (void*)0;
            int32_t ***l_936 = &l_937;
            (*l_919) = (+0U);
            (*l_919) = p_6;
            l_931 = ((+(((*l_922) = l_921) , ((l_919 = l_923) != (void*)0))) , ((((5U <= ((((void*)0 == (*l_917)) != ((*l_919) = ((((p_5 && ((((safe_add_func_uint8_t_u_u(((*l_930) = ((((safe_add_func_uint16_t_u_u(((((**g_126) & (safe_rshift_func_int8_t_s_u(((void*)0 != &g_606), (*l_919)))) | p_5) | l_908), p_5)) == 0xEC2BF287) != g_827) & p_7)), l_931)) | l_908) <= l_932) && (-1))) , (*l_919)) , p_7) | (*l_923)))) <= g_178)) || (*l_919)) , g_933) != l_936));
        }
        else
        {
            int32_t *l_938 = &l_916;
            return &g_76;
        }
        if ((((*l_923) = (((*l_951) = ((((*l_923) <= (safe_add_func_uint32_t_u_u(((l_931 = p_5) , (safe_mod_func_int16_t_s_s(((*l_923) >= l_916), (safe_rshift_func_uint16_t_u_s((1 | (((-1) ^ ((*l_945) = ((****l_917) = 4294967295U))) , (((((safe_rshift_func_uint8_t_u_s((*l_923), l_916)) == l_908) <= 0xA48A82FD) && l_949) | (*l_923)))), p_4))))), (*l_923)))) , p_4) < (*g_127))) , 0x45CF32CD)) , (*l_923)))
        {
            int32_t *l_972 = &g_164;
            int32_t *l_974 = &g_76;
            (*g_118) = ((safe_sub_func_uint16_t_u_u((l_916 || ((void*)0 == l_954)), ((safe_mod_func_int8_t_s_s((((((safe_lshift_func_uint16_t_u_s(((((safe_sub_func_int8_t_s_s(0xB3, ((safe_add_func_int32_t_s_s(((*l_974) = ((p_3 = l_963) ^ (safe_div_func_uint8_t_u_u(((((!((*l_951) = ((*l_923) = ((p_4 = p_6) , ((((safe_mod_func_uint32_t_u_u(l_916, (((safe_rshift_func_uint16_t_u_s(((0U != (((*l_972) = ((((l_971 = 0) < 0x40E2) || 0xAA) == (**g_534))) , (-5))) | l_916), 0)) != 0) | 1U))) & 7U) != 0x9942) && p_7))))) < l_916) != l_973) != l_916), (-1))))), p_7)) , l_908))) >= (-2)) >= p_5) , 0U), l_908)) >= p_7) , (void*)0) != l_909) < l_916), p_5)) == (-1)))) , l_974);
            return l_974;
        }
        else
        {
            const uint16_t l_988 = 0x2BB5;
            int32_t l_992 = 0;
            int16_t **l_1034 = &l_909;
            int8_t ****l_1036 = (void*)0;
            int32_t l_1058 = 0x1D059969;
            int32_t *l_1092 = (void*)0;
            int32_t * const *l_1211 = &l_1168;
            int32_t * const **l_1210 = &l_1211;
            int32_t * const ***l_1212 = &l_1210;
            if ((safe_lshift_func_int16_t_s_u(((safe_sub_func_uint16_t_u_u(((~((safe_unary_minus_func_int8_t_s((safe_mod_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((&g_126 == l_985), p_6)), (safe_rshift_func_int16_t_s_s((p_3 && (l_992 = (l_988 ^ ((safe_add_func_int8_t_s_s(((l_988 != (+(l_988 < (l_988 ^ (l_988 & p_5))))) != 255U), p_4)) > 4)))), 6)))))) , p_4)) | l_971), g_769)) && 0x866E0124), 12)))
            {
                int32_t **l_993 = (void*)0;
                int32_t l_994 = 1;
                int32_t l_1012 = (-9);
                uint32_t l_1029 = 4294967287U;
                const int32_t *l_1111 = &g_769;
                if ((l_994 = (l_971 = ((*g_933) == l_993))))
                {
                    uint16_t l_995 = 0x6BE0;
                    int32_t l_1019 = 2;
                    uint16_t *** const l_1026 = &g_126;
                    int8_t ****l_1035 = &g_283;
                    int32_t l_1059 = 0x8B81A260;
                    int32_t **l_1062 = &l_923;
                    if (l_995)
                    {
                        int32_t *l_996 = &l_931;
                        (*g_118) = &l_931;
                        (*g_118) = (l_996 = &l_916);
                    }
                    else
                    {
                        const int16_t l_1003 = 1;
                        uint16_t *****l_1023 = &g_460;
                        l_992 = ((safe_sub_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((g_1013 = (safe_rshift_func_int8_t_s_s(((((((l_1003 || (0xEAE7 <= (((l_1003 , (safe_lshift_func_uint16_t_u_u((*l_923), 11))) || l_994) < p_5))) == 1) , ((safe_add_func_int16_t_s_s(((****g_606) , (safe_sub_func_int16_t_s_s((((*l_951) = l_992) ^ l_1012), 2))), g_62)) <= 0x0A54)) <= l_908) ^ l_1003) || (-8)), 6))), 1U)), l_1003)) <= p_3);
                        (**g_420) = &l_994;
                        (***g_726) = func_55(p_4, p_7, ((((!(safe_div_func_uint32_t_u_u(p_7, l_1012))) != ((void*)0 != l_1023)) != (safe_lshift_func_int16_t_s_s((l_1031 = ((l_1026 == &g_534) , ((*l_909) = (safe_rshift_func_int16_t_s_s((l_1029 == p_5), l_1030))))), (*l_923)))) != (***g_168)));
                    }
                    for (l_963 = 0; (l_963 > 29); l_963 = safe_add_func_uint32_t_u_u(l_963, 6))
                    {
                        int8_t *****l_1037 = &l_1036;
                        (*l_923) = (l_1034 == (void*)0);
                        (***g_726) = &l_931;
                        (*g_119) = (((*l_1017) = l_1035) != ((*l_1037) = l_1036));
                    }
                    (*g_118) = &l_992;
                    for (g_164 = 14; (g_164 != 8); g_164 = safe_sub_func_uint32_t_u_u(g_164, 3))
                    {
                        const int16_t ****l_1063 = (void*)0;
                        const int16_t *l_1068 = &l_932;
                        const int16_t **l_1067 = &l_1068;
                        const int16_t ***l_1066 = &l_1067;
                        const int16_t ****l_1065 = &l_1066;
                        int32_t l_1088 = (-10);
                        (*g_420) = l_1062;
                        if ((*l_923))
                            continue;
                        (*l_1065) = (g_1064 = (void*)0);
                        l_1092 = (((+(safe_rshift_func_uint8_t_u_s(((p_7 && (safe_mul_func_int32_t_s_s(0x858850F1, ((((safe_sub_func_int32_t_s_s(((*g_119) = (safe_rshift_func_int16_t_s_u((safe_mod_func_uint8_t_u_u(((((((safe_lshift_func_int8_t_s_s(((safe_div_func_uint16_t_u_u(0x7A68, (((***g_420) = (safe_div_func_uint8_t_u_u((safe_add_func_int8_t_s_s(l_1088, (safe_sub_func_uint32_t_u_u((**l_1062), (safe_unary_minus_func_int16_t_s(l_1088)))))), g_827))) , ((*l_923) && ((l_916 || 0x3B659D40) , g_250))))) > g_185), 0)) >= (*g_127)) <= p_4) & (*g_535)) ^ p_6) == 0x84), 0x68)), p_4))), p_7)) , 3) & 0x46) <= 0x8095)))) , p_4), p_6))) & p_3) , &l_916);
                    }
                }
                else
                {
                    int32_t l_1095 = 0;
                    (***g_726) = &l_931;
                    l_1095 = ((safe_rshift_func_uint8_t_u_s(g_194, 5)) , p_6);
                    (*l_923) = ((((*l_951) = (((safe_mod_func_uint8_t_u_u((safe_div_func_int8_t_s_s(((p_4 , &l_954) == (g_1100 = (void*)0)), (((safe_rshift_func_int8_t_s_s((l_971 && (safe_sub_func_uint8_t_u_u(p_7, ((((((*g_119) && ((**g_118) = (((0 < 0x59) > (l_994 , 0xABD6)) < l_1095))) , l_1106) , 5U) , l_1107) ^ 0xF6)))), 4)) | (-2)) || p_4))), g_194)) || l_994) <= g_8)) ^ g_50) <= (*l_923));
                }
                (***g_726) = (*g_118);
                for (g_185 = 0; (g_185 != 2); ++g_185)
                {
                    const int32_t *l_1110 = &g_50;
                    (**g_420) = &l_994;
                    l_1111 = l_1110;
                    (***g_726) = l_1112;
                }
            }
            else
            {
                uint8_t l_1119 = 0xD8;
                uint8_t l_1144 = 0x38;
                int32_t *l_1145 = &g_164;
                int8_t **l_1151 = (void*)0;
                int32_t l_1158 = 0xB74B8EE0;
                int8_t *****l_1176 = &l_1036;
                int32_t *l_1209 = &g_76;
                if (((g_185 = (p_4 <= (safe_rshift_func_uint16_t_u_u((((*l_1145) = ((!(p_3 , (((((!(safe_lshift_func_uint16_t_u_u(l_1119, 11))) , p_7) , &p_4) == (((((safe_rshift_func_int8_t_s_s((((+((safe_lshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_u(((*l_1112) = p_5), (p_5 | (safe_add_func_uint32_t_u_u(((((safe_div_func_uint16_t_u_u(((((*g_127) = (***g_168)) != (safe_rshift_func_int16_t_s_u(((safe_unary_minus_func_int16_t_s((safe_sub_func_int8_t_s_s((safe_add_func_uint32_t_u_u(((((safe_add_func_int8_t_s_s((((safe_div_func_int16_t_s_s((((*g_510) = (safe_rshift_func_int16_t_s_s((l_1092 == &l_949), l_1144))) , 2), p_3)) >= p_3) < l_1119), 3U)) , p_3) , (*l_917)) == (void*)0), p_7)), 0x32)))) >= 0x55BE8ECA), p_3))) , 4U), p_6)) & l_1144) | p_5) > (*l_923)), p_3))))), l_1144)) , l_1144)) >= p_3) && p_5), p_6)) , 7U) , 0x5E3D99CB) , p_4) , &p_4)) < p_6))) < 0x54)) , l_1119), l_1144)))) != (-7)))
                {
                    int32_t *l_1146 = &l_931;
                    (*g_118) = l_1146;
                }
                else
                {
                    const uint32_t l_1157 = 4294967294U;
                    uint8_t *l_1159 = &g_86;
                    (*l_923) = ((*l_1112) = ((((*l_1159) = ((l_1144 ^ ((safe_mod_func_int16_t_s_s(((((safe_rshift_func_int8_t_s_u(2, 7)) | p_6) , (((((*g_283) != (l_1151 = l_1151)) , (safe_div_func_int32_t_s_s((safe_div_func_uint8_t_u_u(((0xE265 == (((safe_unary_minus_func_int16_t_s(0)) == (p_5 > p_7)) , 65528U)) != l_1157), g_164)), p_5))) != l_1158) <= 4294967286U)) || p_4), p_7)) , p_7)) & (*l_923))) < p_6) | l_1157));
                    (*l_923) = (p_3 , ((*g_535) ^ ((~0U) & (safe_mod_func_uint32_t_u_u(((*l_945) = (((safe_lshift_func_uint8_t_u_u(l_1144, 4)) != (((*g_933) = (void*)0) == l_1167)) , (+(safe_mod_func_int8_t_s_s(((p_4 == ((((safe_div_func_int8_t_s_s((&g_676 == ((safe_div_func_int32_t_s_s(p_5, (****g_606))) , l_1176)), p_3)) < l_1144) , (*l_923)) , p_6)) ^ (*l_1112)), 1))))), (*l_923))))));
                }
                for (g_50 = (-13); (g_50 > 17); ++g_50)
                {
                    int8_t *l_1181 = &g_100;
                    int32_t *** const l_1200 = (void*)0;
                    int32_t * const *l_1202 = &l_923;
                    int32_t * const **l_1201 = &l_1202;
                    int32_t * const ***l_1203 = &l_1201;
                    int32_t *l_1207 = &l_992;
                    int32_t *l_1208 = &l_1158;
                    for (l_963 = 0; (l_963 == (-19)); --l_963)
                    {
                        (**g_420) = &l_1158;
                    }
                    if ((((*l_1112) = ((l_1181 = &p_4) != (void*)0)) != ((safe_add_func_int16_t_s_s((l_1184 || ((safe_div_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_u(((0x55 == (safe_sub_func_int8_t_s_s((p_4 = ((safe_sub_func_uint8_t_u_u((l_1119 >= (safe_lshift_func_int16_t_s_s(((+(safe_mod_func_uint16_t_u_u((g_185 != (safe_div_func_uint8_t_u_u(g_250, ((l_1200 != ((*l_1203) = l_1201)) | 9)))), (*l_923)))) | g_634), 0))), p_3)) >= (*l_923))), p_7))) > 252U), 10)) || (****l_1203)), (*l_923))) == (*l_923))), (**l_1202))) > 0)))
                    {
                        int32_t **l_1204 = &l_1092;
                        (*l_1112) = p_5;
                        (*l_1204) = ((***g_726) = (void*)0);
                        if (l_1144)
                            continue;
                    }
                    else
                    {
                        int32_t *l_1206 = &l_931;
                        return l_1209;
                    }
                }
            }
            (*l_1212) = l_1210;
        }
        return l_1213;
    }
    else
    {
        int32_t *l_1214 = &g_8;
        int32_t **l_1217 = &g_119;
        int32_t **l_1218 = &l_1214;
        uint32_t * const **l_1236 = (void*)0;
        uint32_t * const ***l_1235 = &l_1236;
        (**g_420) = (p_6 , ((*l_1213) , ((l_1214 == (void*)0) , &l_931)));
        for (g_634 = 22; (g_634 == 55); ++g_634)
        {
            int8_t l_1237 = 9;
            uint16_t l_1239 = 0x24BE;
            (*l_1214) = (safe_sub_func_int8_t_s_s(p_7, (((((**g_606) = ((safe_add_func_uint32_t_u_u(((((((**g_118) = (safe_sub_func_uint16_t_u_u((p_6 != (p_3 == ((l_1239 = ((p_7 || 246U) != (((0x7D <= (safe_div_func_uint16_t_u_u((((&g_607 == l_1235) , ((*l_1213) = ((-1) >= 1))) , p_7), l_1237))) || p_6) > l_1238))) ^ p_4))), l_1237))) < 0x8FC2E7CA) > (**g_126)) && (***g_420)) , 0x6BDB0F4F), (*g_510))) , (void*)0)) != (void*)0) , &p_3) == (void*)0)));
            (*l_1214) = 0;
        }
        (*g_118) = &l_931;
    }
    return g_1240;
}
static int32_t func_13(int32_t * p_14, int8_t p_15, int32_t * p_16)
{
    int32_t l_833 = 8;
    uint8_t *l_834 = &g_185;
    int32_t l_835 = 0xA56C9A58;
    int32_t *l_838 = (void*)0;
    int32_t *l_839 = &g_178;
    int32_t *l_840 = (void*)0;
    int32_t *l_841 = &g_579;
    uint16_t *l_842 = &g_97;
    int16_t *l_843 = &g_62;
    uint16_t ***l_844 = &g_126;
    int32_t l_868 = 0xC613D382;
    uint32_t *** const *l_887 = &g_607;
    uint32_t *** const **l_886 = &l_887;
    (**g_420) = (**g_420);
    if ((l_835 , ((void*)0 != l_844)))
    {
        g_76 = (*p_14);
    }
    else
    {
        const uint32_t l_845 = 0x9A6F006B;
        uint16_t ***l_855 = &g_126;
        uint16_t l_858 = 5U;
        int32_t l_867 = 0xBF33D6B8;
        int32_t *l_869 = &g_76;
        int32_t **l_881 = &l_839;
        int32_t ***l_880 = &l_881;
        if ((((*l_869) = (l_868 = (l_845 , ((safe_mod_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_u(((l_833 != ((((safe_rshift_func_uint8_t_u_s(((safe_div_func_uint8_t_u_u((~(l_867 = ((l_855 == (((((safe_sub_func_int32_t_s_s(l_858, (p_15 | l_835))) <= ((-1) != (((safe_lshift_func_int8_t_s_s((safe_mod_func_int8_t_s_s((safe_add_func_int8_t_s_s(((safe_div_func_uint16_t_u_u((l_845 >= l_858), p_15)) ^ 0U), p_15)), (-8))), 3)) , &g_607) != &g_607))) >= p_15) , 0xD4E68237) , l_855)) || 0x033CE03A))), l_845)) , 0x10), 3)) | p_15) , 0xF000) && p_15)) <= 0x9E), l_833)) | 0x42AB), 1U)) , l_833)))) <= l_833))
        {
            return l_835;
        }
        else
        {
            uint32_t l_872 = 4294967295U;
            int8_t *** const *l_873 = &g_283;
            (**g_420) = p_16;
            (*g_118) = &l_868;
            (**g_118) = (safe_div_func_int16_t_s_s((4294967295U && (g_178 , ((safe_rshift_func_int8_t_s_u(((l_835 || ((((safe_rshift_func_uint8_t_u_u(p_15, 4)) != (((*p_14) > (((*l_843) = ((**g_607) == ((0 ^ ((**g_606) != (**g_606))) , (**g_607)))) || p_15)) ^ 3U)) >= 252U) || p_15)) , p_15), g_250)) & (**g_118)))), (*l_869)));
        }
        (*l_880) = &l_841;
        for (g_178 = 0; (g_178 <= (-25)); g_178 = safe_sub_func_uint8_t_u_u(g_178, 7))
        {
            uint8_t l_888 = 0xAA;
            uint32_t l_898 = 0x49D5A127;
            uint32_t l_900 = 4294967295U;
            for (g_97 = 0; (g_97 < 20); g_97 = safe_add_func_uint32_t_u_u(g_97, 6))
            {
                l_886 = ((*l_869) , (void*)0);
                if (l_888)
                    break;
            }
        }
    }
    return (*p_14);
}
static int32_t func_18(int32_t * p_19, int32_t * p_20, uint32_t p_21)
{
    int32_t *l_830 = (void*)0;
    (***g_726) = l_830;
    g_76 = (safe_mod_func_int16_t_s_s((&g_420 == ((p_21 <= p_21) , &g_420)), g_259));
    (**g_420) = (***g_726);
    return (*p_20);
}
static uint8_t func_24(uint8_t p_25, int32_t * p_26, uint32_t p_27, int32_t * p_28)
{
    int32_t l_268 = 0x62B63680;
    uint16_t *l_269 = (void*)0;
    int8_t ****l_325 = &g_283;
    uint16_t ****l_395 = &g_168;
    int16_t l_417 = 0xD9B5;
    uint8_t l_488 = 4U;
    int8_t *l_489 = (void*)0;
    int8_t *l_490 = &g_259;
    uint8_t l_491 = 0x4F;
    uint32_t * const *l_511 = &g_510;
    uint32_t l_512 = 1U;
    int16_t l_514 = 0;
    int32_t l_539 = 1;
    int8_t l_540 = 0x59;
    uint32_t l_557 = 4294967295U;
    int32_t ****l_610 = &g_420;
    int32_t **** const *l_609 = &l_610;
    uint32_t ***l_786 = &g_509;
    const int32_t *l_811 = &g_76;
    const uint32_t l_826 = 0U;
    for (g_178 = 0; (g_178 >= 26); g_178 = safe_add_func_int16_t_s_s(g_178, 2))
    {
        int32_t l_270 = 1;
        const int32_t l_280 = 0x57F93D7C;
        uint16_t l_304 = 65528U;
        const int8_t *l_324 = (void*)0;
        const int8_t ** const l_323 = &l_324;
        const int8_t ** const *l_322 = &l_323;
        const int8_t ** const **l_321 = &l_322;
        const uint32_t l_326 = 0U;
        int16_t *l_327 = &g_62;
        int32_t ***l_343 = &g_118;
        uint16_t * const * const *l_359 = (void*)0;
        int32_t *l_472 = &l_270;
    }
    if ((((safe_div_func_int8_t_s_s((((safe_sub_func_int8_t_s_s((safe_add_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(p_25, 10)), p_25)), ((((((((((*l_490) = ((((0x4876 > (((safe_unary_minus_func_uint8_t_u((((safe_div_func_int32_t_s_s(2, g_76)) != ((((1U || ((*p_28) , (*p_26))) | (((safe_sub_func_int32_t_s_s((safe_mod_func_uint32_t_u_u(g_194, p_25)), l_268)) == 4294967291U) <= p_27)) || l_488) , p_25)) , 246U))) , 7U) ^ 0x8E759515)) , l_488) ^ l_417) < (*p_28))) & 0x43) && l_268) ^ (*p_26)) < 0x940CC902) == 1) , l_491) & l_417) , p_27))) >= p_27) ^ 0xCBCCF0C6), 0x88)) || g_76) ^ p_25))
    {
        int32_t l_492 = 2;
        int32_t l_500 = 0xF827ED63;
        int32_t *l_505 = (void*)0;
        int32_t *l_506 = &g_76;
        int16_t *l_513 = &g_62;
        const uint16_t * const **l_536 = &g_534;
        const uint16_t *l_538 = &g_97;
        const uint16_t **l_537 = &l_538;
        uint8_t *l_541 = &l_491;
        uint16_t * const *l_556 = &g_127;
        uint16_t * const **l_555 = &l_556;
        uint16_t * const ***l_554 = &l_555;
        uint16_t * const ****l_553 = &l_554;
        const int8_t *l_560 = &g_100;
        const int8_t **l_559 = &l_560;
        const int8_t ***l_558 = &l_559;
        int32_t l_588 = 0x60F63CC2;
        uint32_t ** const l_635 = &g_510;
        uint8_t l_636 = 0x6B;
        int32_t l_651 = 0x0382D28E;
        int8_t l_654 = 0x8F;
        uint16_t l_656 = 0xEB85;
        int16_t l_670 = 0x7E33;
        uint32_t l_729 = 0x3D50E7F0;
        int32_t l_747 = (-1);
        int32_t ***l_821 = &g_118;
        l_268 = ((l_492 & (~65528U)) , (safe_sub_func_uint8_t_u_u((g_62 ^ l_268), (safe_lshift_func_int8_t_s_u(((*l_490) = ((safe_lshift_func_int8_t_s_s(((((l_491 , ((l_500 = p_25) , ((l_500 != (l_500 , ((safe_rshift_func_int8_t_s_s(l_417, 6)) || p_25))) < g_50))) || (*p_26)) <= g_178) , p_25), 6)) == l_417)), p_27)))));
        g_50 = (safe_add_func_int16_t_s_s((((246U || (l_268 = ((((-5) >= ((*l_506) = 0x11273016)) & l_268) <= ((((p_25 != (g_509 != l_511)) >= (((*l_513) = (((**l_325) == (*g_283)) || l_512)) > l_268)) && p_25) ^ (**g_509))))) ^ l_514) >= 4294967288U), l_491));
        if ((safe_mod_func_int8_t_s_s((!(safe_div_func_int16_t_s_s((safe_add_func_uint16_t_u_u(((****l_395) = ((safe_rshift_func_int8_t_s_s((p_25 <= (0x90 <= (safe_add_func_int8_t_s_s(((*l_490) = (((*l_541) = ((4294967288U | (l_539 = (safe_sub_func_uint16_t_u_u((((l_268 = 1) ^ (safe_div_func_int32_t_s_s(((((*p_26) != 4294967295U) && (safe_mod_func_uint16_t_u_u(((((((*l_536) = g_534) == l_537) || (g_185 = (0x9E0FF025 && (*g_510)))) , (**l_395)) != (void*)0), p_27))) , 0x9316ED79), 6U))) > l_491), 0xC2D7)))) ^ l_540)) | l_514)), g_250)))), (*l_506))) || 0xA94A)), p_25)), p_27))), (*l_506))))
        {
            int16_t l_546 = (-1);
            uint16_t ** const ** const *l_580 = (void*)0;
            const uint16_t **l_633 = &l_538;
            int16_t * const * const l_643 = &l_513;
            int32_t ****l_644 = &g_420;
            uint32_t ***l_653 = &g_509;
            uint32_t l_655 = 0xC9541F70;
            int32_t *l_700 = &g_76;
            uint32_t l_736 = 0x867D08A5;
            uint16_t l_780 = 0x0479;
            if ((safe_rshift_func_uint16_t_u_u((((safe_mod_func_uint8_t_u_u(((g_97 , (l_546 || p_25)) , (safe_mod_func_int8_t_s_s((g_62 ^ (6 | (((*l_506) = 0xAC7AD3C1) == (((safe_mod_func_int16_t_s_s(p_27, ((safe_div_func_uint16_t_u_u((((((((p_27 != g_194) <= p_25) | 0x8B) , l_553) != (void*)0) , (*l_555)) == (*g_168)), g_97)) & l_557))) && 7) <= 0x66)))), p_25))), p_25)) != (*p_26)) & (**g_509)), (*g_127))))
            {
                uint16_t *** const **l_564 = (void*)0;
                int32_t l_577 = (-6);
                uint32_t *l_578 = (void*)0;
                int8_t *l_581 = &g_100;
                int8_t *l_582 = &l_540;
                int32_t l_583 = 0xCAC37D0D;
                const uint32_t *l_623 = &g_624;
                const uint32_t **l_622 = &l_623;
                int8_t *l_637 = &g_638;
                uint16_t l_639 = 8U;
                int8_t **l_758 = &l_582;
                if ((l_583 = ((*l_506) = (((*g_510) = (l_558 == (void*)0)) != (!(safe_div_func_uint16_t_u_u((((&g_460 == l_564) | ((0xC92CC150 >= ((l_577 = (((*l_582) = ((*l_581) = (safe_add_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u(((safe_mod_func_int8_t_s_s(((((g_579 = (247U & (safe_lshift_func_int8_t_s_s(((*l_490) = (l_557 < ((((safe_mod_func_int32_t_s_s((safe_div_func_int8_t_s_s((-4), 0x13)), p_25)) || l_577) , 4294967290U) && l_546))), 7)))) , g_250) , (void*)0) == l_580), g_50)) > 0U), (*p_28))) || l_539), p_25)))) != l_546)) , l_557)) & p_25)) >= (*p_28)), p_27)))))))
                {
                    (*g_420) = (*g_420);
                }
                else
                {
                    int16_t *l_608 = &l_417;
                    (**g_420) = p_28;
                }
                g_611 = (p_27 , l_609);
                if ((((((((safe_mod_func_int32_t_s_s(((((safe_mod_func_int8_t_s_s(((*l_637) = (((safe_lshift_func_uint8_t_u_s(g_185, (g_259 = (((*l_582) = 0xAF) <= (((((((safe_add_func_uint16_t_u_u((safe_div_func_int32_t_s_s(((*l_506) = (((&g_284 == (void*)0) > (p_27 >= ((*l_581) = (&p_27 == ((*l_622) = (void*)0))))) | (~(!(safe_unary_minus_func_int16_t_s(((g_624 , (safe_sub_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(((((~(l_633 != (**l_554))) && g_264) < (*p_28)) > g_634), (*l_506))), g_97))) > 5U))))))), (*p_26))), p_27)) || l_583) , l_511) != l_635) && l_636) || 0x23) == (*g_510)))))) == (****g_606)) , p_27)), l_546)) > p_27) || (*g_510)) || p_27), p_27)) != p_25) != p_27) , g_264) , 0xDB34) ^ (*g_127)) , l_639))
                {
                    int8_t *****l_645 = &l_325;
                    int32_t l_648 = 2;
                    (*l_506) = (((safe_add_func_uint8_t_u_u(((((*l_506) < l_577) && (safe_unary_minus_func_int8_t_s((((**g_509) , &l_513) != l_643)))) , p_25), (((*l_582) = 3) && (((*g_420) = (***g_611)) == (void*)0)))) , p_25) <= (***g_607));
                    l_644 = (*g_611);
                    (*l_506) = (((((*l_645) = &g_283) == (((*l_506) != ((safe_add_func_int8_t_s_s(l_648, (l_648 <= (((*g_127) = ((((((safe_add_func_int32_t_s_s((g_178 < ((((*l_637) = l_651) , (*g_606)) == ((~((0 == (*g_127)) != (*p_26))) , l_653))), l_654)) && l_655) <= 0xB1A2) || 65530U) > p_27) ^ p_27)) == l_656)))) || (**g_509))) , &g_283)) && 0x7048) != 0x680B);
                }
                else
                {
                    uint8_t l_681 = 0xDF;
                    int32_t *l_699 = &l_500;
                    int32_t ****l_727 = &g_420;
                    l_539 = l_577;
                    for (l_492 = 8; (l_492 != 29); ++l_492)
                    {
                        uint8_t l_674 = 0xA5;
                        (*l_506) = (safe_rshift_func_int16_t_s_u((safe_sub_func_uint32_t_u_u(((safe_mod_func_int32_t_s_s(((((safe_mod_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((~((l_670 || ((safe_mod_func_int32_t_s_s(((!(((((((*p_28) ^ (g_611 == &l_644)) & l_674) < (&l_325 != (g_50 , g_675))) & (safe_rshift_func_uint16_t_u_u(((safe_div_func_int16_t_s_s(((**l_643) = (((l_639 & l_674) , 4294967295U) || p_25)), 3U)) , p_25), 10))) != 0xDDFB) && g_8)) ^ p_27), 0x00104280)) || p_25)) , l_674)), l_674)), p_27)) >= (*p_28)) , l_681) , l_639), (*g_510))) | (**g_534)), (*p_26))), 0));
                        if ((*p_28))
                            break;
                        if ((*p_26))
                            break;
                    }
                    (*l_506) = (safe_rshift_func_uint8_t_u_s(p_27, 7));
                    for (g_178 = 0; (g_178 < (-14)); g_178 = safe_sub_func_int16_t_s_s(g_178, 1))
                    {
                        int16_t l_692 = 0x8AD9;
                        uint16_t *****l_713 = &l_395;
                        uint32_t *l_719 = &l_512;
                        uint32_t *l_728 = &l_557;
                        (*l_506) = ((-1) ^ (safe_mod_func_int8_t_s_s((safe_div_func_int8_t_s_s((safe_sub_func_int16_t_s_s((p_27 && ((l_692 > (p_25 && ((((((safe_mod_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((g_8 ^ ((**l_643) = ((((~((safe_unary_minus_func_int8_t_s((p_27 , ((0xB0EF || (((****l_609) = &l_651) == (l_700 = l_699))) < 0x29E98DE5)))) & p_27)) | (*l_506)) , 0U) > 0x4CBE))), (*p_28))), p_25)) < 0xC6) != g_8) && 0xCEE3) < p_27) || 253U))) < p_27)), p_25)), p_27)), p_25)));
                        if ((*l_699))
                            continue;
                        (*l_506) = (((((safe_div_func_uint16_t_u_u(((safe_mod_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(l_692, (((safe_rshift_func_uint8_t_u_s(((*g_459) != ((*l_713) = (*g_459))), (safe_sub_func_int32_t_s_s((((safe_mod_func_uint32_t_u_u((**g_509), (safe_unary_minus_func_uint16_t_u((((*l_699) || p_27) | ((((*l_719) = ((*g_510) && (***g_607))) > (safe_sub_func_uint32_t_u_u(((*l_728) = (safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_s(((g_726 = &g_420) != l_727), 8)), 8))), (*p_28)))) > (*l_700))))))) & (*p_26)) && 0xD9BC), (*p_26))))) ^ p_25) ^ p_27))), 0)) || 0xF4), p_25)), g_50)) | (****g_606)), p_25)) ^ p_27) | l_729) , 1U) < 5U);
                        (***l_610) = (p_25 , (***l_644));
                    }
                }
                if ((*p_28))
                {
                    uint32_t l_748 = 0xEEF90B66;
                    int32_t *l_749 = &l_577;
                    (***l_644) = (void*)0;
                    for (l_500 = 4; (l_500 <= (-2)); l_500--)
                    {
                        if ((*p_26))
                            break;
                        (****g_611) = p_26;
                    }
                    (***l_610) = l_749;
                }
                else
                {
                    int16_t l_759 = 0;
                    const int32_t l_762 = 0xC064EB7C;
                    uint8_t *l_763 = &l_488;
                    g_50 = ((safe_sub_func_uint8_t_u_u(((*l_763) = (((g_8 | (((*p_28) <= ((l_577 < (***g_168)) != ((safe_rshift_func_uint16_t_u_s(((safe_mod_func_int8_t_s_s((l_759 = ((*l_700) = (g_100 > ((***g_607) > (((**l_325) = (**l_325)) != l_758))))), (safe_mod_func_int8_t_s_s((((*l_541) = g_164) , p_25), p_27)))) >= l_762), 3)) & p_27))) <= p_25)) , 0x952B61F2) || (****g_606))), 0x82)) < 0xDF81);
                }
            }
            else
            {
                uint32_t ***l_785 = (void*)0;
                uint32_t l_804 = 0xE8DED2B7;
                int32_t *l_810 = (void*)0;
                for (g_62 = 19; (g_62 <= 26); g_62 = safe_add_func_int16_t_s_s(g_62, 1))
                {
                    int16_t *l_768 = (void*)0;
                    int32_t l_779 = 7;
                    (***l_644) = p_28;
                    (*l_506) = (safe_mod_func_int16_t_s_s((&g_62 == (((***g_607) = ((*l_700) == (((*g_283) = (*g_283)) != (void*)0))) , ((p_25 | (****l_644)) , l_768))), (g_769 = p_25)));
                    if (((*l_700) = (safe_add_func_int16_t_s_s((safe_mod_func_uint8_t_u_u(((!0x3C) != ((safe_add_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(l_779, l_780)), (safe_add_func_int32_t_s_s((**g_118), (*p_26))))) != (*l_700))), ((*l_490) = (safe_lshift_func_int16_t_s_s(p_25, 9))))), (l_785 == l_786)))))
                    {
                        if ((*p_28))
                            break;
                        (*l_700) = (*****l_609);
                        return g_8;
                    }
                    else
                    {
                        int32_t l_809 = (-1);
                        if ((***g_420))
                            break;
                        (***l_644) = &l_779;
                        (**g_420) = l_810;
                    }
                    if ((*l_506))
                        continue;
                }
                (*l_506) = 0;
            }
            l_811 = l_811;
            (****l_609) = &l_500;
            (***g_420) = (safe_add_func_uint8_t_u_u((*****l_609), (~(((((safe_sub_func_int32_t_s_s((safe_div_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_s(p_25, ((*l_490) = ((p_27 >= ((*l_541) = ((p_28 != l_505) & (4294967295U ^ (((l_821 = l_821) == (*l_610)) & (((((safe_sub_func_int32_t_s_s(((safe_mod_func_int8_t_s_s((&l_655 != p_26), 0x52)) ^ 7U), 1U)) || p_27) <= g_579) != p_27) >= (****l_610))))))) , 0x98)))) || (-7)), l_826)), (**g_509))) ^ g_769) || 0) < g_827) <= 1))));
        }
        else
        {
            int32_t *****l_828 = &g_726;
            int16_t *l_829 = &l_417;
            (*l_506) = (g_264 , ((***l_610) == (void*)0));
            l_610 = ((*l_828) = &g_420);
            (*g_118) = p_26;
        }
        return g_827;
    }
    else
    {
        (**g_420) = (void*)0;
        return p_25;
    }
}
static int8_t func_29(int32_t * p_30, int16_t p_31, int16_t p_32, int32_t * p_33)
{
    int32_t *l_48 = &g_8;
    int32_t *l_49 = &g_50;
    int16_t *l_61 = &g_62;
    uint32_t *l_249 = &g_250;
    int32_t *l_251 = &g_8;
    (*l_49) = (((((*g_127) = (safe_lshift_func_int8_t_s_s(func_38((p_33 == p_30), ((*l_249) = ((safe_add_func_int32_t_s_s(((((func_45((((*l_49) = ((void*)0 != l_48)) , func_51(l_49, &g_50, func_55(g_50, (safe_add_func_int16_t_s_s(((*l_61) = (((0x90 | (g_50 && 1)) ^ p_32) & (*l_49))), p_31)), g_50))), l_49) && p_32) , p_31) > g_178) , (*l_49)), g_178)) && 0U)), l_251, p_31), 1))) != g_264) == 1U) && p_32);
    return (*l_48);
}
static int8_t func_38(int16_t p_39, uint32_t p_40, int32_t * p_41, uint16_t p_42)
{
    int32_t l_254 = 0xA6458F5F;
    int16_t l_255 = 0x124B;
    uint32_t *l_261 = &g_194;
    uint32_t **l_260 = &l_261;
    int32_t l_265 = (-9);
    l_255 = (safe_sub_func_int32_t_s_s(l_254, l_254));
    l_265 = (0xC38E >= (((!p_42) != (l_254 ^ (-1))) && (safe_rshift_func_uint16_t_u_u(((0 ^ ((((g_259 , l_260) != &l_261) && ((((safe_sub_func_int32_t_s_s((((*g_127) = l_254) , l_254), l_255)) & g_264) < l_265) > p_42)) >= p_42)) >= p_39), 13))));
    return g_50;
}
static int16_t func_45(int16_t p_46, int32_t * p_47)
{
    return g_164;
}
static int16_t func_51(int32_t * p_52, const int32_t * p_53, int32_t * p_54)
{
    uint32_t l_192 = 0x97C7DC25;
    uint32_t *l_193 = &g_194;
    uint16_t ****l_197 = &g_168;
    int32_t l_198 = 0x6BBBDF83;
    uint8_t *l_199 = (void*)0;
    uint8_t *l_200 = &g_86;
    int32_t l_205 = 1;
    int8_t *l_212 = (void*)0;
    int8_t *l_213 = &g_100;
    int32_t l_216 = 0xBBA012D0;
    uint32_t **l_219 = &l_193;
    int16_t *l_222 = (void*)0;
    int16_t *l_223 = &g_62;
    int16_t **l_224 = &l_223;
    uint32_t l_244 = 0xA95C22D9;
    const int32_t *l_248 = &l_198;
    const int32_t **l_247 = &l_248;
    const int32_t ***l_246 = &l_247;
    const int32_t ****l_245 = &l_246;
    (*p_52) = ((((safe_rshift_func_int16_t_s_u(((safe_add_func_int16_t_s_s(((g_8 , ((l_192 >= (((*l_193) = (0x6A | l_192)) < l_192)) & ((safe_lshift_func_int8_t_s_u(((-8) && 0xB15C3DA0), ((*l_200) = (((l_198 = (((((l_192 == 1) , l_197) == &g_168) , l_192) | 1U)) && 9U) < (***g_168))))) || l_198))) & l_192), l_192)) && 0xE6), 8)) >= (*p_52)) & 0xCC) && 0x43B8F344);
    (*p_52) = (((safe_mod_func_int8_t_s_s(((safe_mod_func_int8_t_s_s((&g_194 != ((*l_219) = ((l_205 <= (-1)) , l_193))), l_192)) , 0x88), 0xD0)) , (*p_53)) || 0x8EBB9B1E);
    (*p_52) = ((((((((((((*l_213) = (safe_div_func_uint8_t_u_u((((*l_223) = 0x4D2A) , ((((((*l_224) = l_222) != &g_62) , (safe_add_func_uint32_t_u_u((safe_sub_func_int16_t_s_s(((safe_sub_func_uint16_t_u_u((((***g_168) = (*g_127)) & (((l_205 = l_205) <= ((((*p_53) == (safe_sub_func_uint32_t_u_u((l_198 , (safe_mod_func_int32_t_s_s((safe_sub_func_uint8_t_u_u((((*l_200) = (safe_rshift_func_int16_t_s_s(((safe_sub_func_uint32_t_u_u(((safe_mod_func_uint32_t_u_u((safe_unary_minus_func_int8_t_s(((*p_53) > ((((*l_224) != &g_62) , 0x82) <= 0x8B)))), 2)) , l_216), l_198)) != (-5)), l_244))) != l_198), (-1))), 4294967295U))), (*p_52)))) , l_244) || 0x44F27AFE)) & l_198)), l_192)) == l_216), l_216)), l_216))) | (-1)) && g_164)), g_50))) == 0xE0) != g_185) , 0x4AE07AD3) <= 0xFB7984CD) && 0x69) , (void*)0) == l_245) , (*l_248)) > (*l_248)) < g_194);
    (***l_245) = ((*g_118) = (*g_118));
    return g_194;
}
static int32_t * func_55(uint16_t p_56, uint16_t p_57, int8_t p_58)
{
    int32_t l_63 = 0xBFEB1EC6;
    int32_t *l_64 = &g_50;
    int32_t * const l_75 = &g_76;
    int32_t * const *l_74 = &l_75;
    int16_t *l_79 = &g_62;
    int32_t *l_113 = &l_63;
    uint32_t l_125 = 0xAB2FCBA4;
    uint32_t l_140 = 0xD2F3BE12;
    int8_t l_163 = 1;
    uint16_t ***l_167 = &g_126;
    int32_t ***l_179 = &g_118;
    l_63 = l_63;
    if (((*l_64) = (l_63 = p_58)))
    {
        const int32_t *l_66 = &g_8;
        const int32_t **l_65 = &l_66;
        int32_t **l_84 = &l_64;
        uint8_t *l_85 = &g_86;
        uint32_t l_124 = 1U;
        uint16_t l_131 = 0xD8CF;
        uint16_t **l_176 = &g_127;
        const int32_t l_177 = 0x96D93F2D;
        int8_t *l_182 = &l_163;
        (*l_65) = (void*)0;
        if ((g_8 < (((safe_unary_minus_func_uint16_t_u((safe_rshift_func_uint16_t_u_s(g_8, (safe_lshift_func_int16_t_s_s((safe_add_func_int32_t_s_s(((((&l_66 != (l_74 = (void*)0)) ^ ((p_57 >= ((safe_rshift_func_uint16_t_u_u(((g_80 = l_79) != (((*l_85) = ((~(((void*)0 != &g_50) | ((safe_sub_func_int8_t_s_s(((((*l_84) = &g_8) != &g_8) , 1), g_62)) >= 0x7338))) , g_76)) , (void*)0)), g_62)) , g_50)) && p_58)) ^ 0) <= p_56), 0x95BCD591)), g_76)))))) , g_76) , 5U)))
        {
            int32_t *l_89 = &l_63;
            uint16_t *l_96 = &g_97;
            uint16_t l_98 = 0x61DA;
            int8_t *l_99 = &g_100;
            int8_t l_101 = (-3);
            (*l_65) = ((*l_84) = &g_50);
            (**l_84) = (safe_lshift_func_uint8_t_u_s(((l_89 != (void*)0) | (safe_div_func_int8_t_s_s(((p_57 | (g_86 = 255U)) == ((safe_div_func_int16_t_s_s(((safe_sub_func_int8_t_s_s(((*l_99) = ((((*l_66) >= (((p_58 || (p_58 ^ ((*l_96) = 0x10E9))) && ((p_57 , p_56) > p_58)) | 0xFECA8008)) ^ p_57) == l_98)), p_56)) , (-4)), p_57)) && l_101)), (-8)))), 4));
            for (l_98 = 0; (l_98 == 54); l_98 = safe_add_func_int16_t_s_s(l_98, 6))
            {
                int32_t **l_121 = (void*)0;
                int32_t ***l_120 = &l_121;
                int32_t **l_123 = &l_89;
                int32_t ***l_122 = &l_123;
                uint32_t *l_162 = &l_140;
            }
        }
        else
        {
            uint16_t ***l_166 = &g_126;
            uint16_t ****l_165 = &l_166;
            int32_t ****l_180 = &l_179;
            int32_t ***l_181 = &l_84;
            int8_t **l_183 = &l_182;
            uint8_t *l_184 = &g_185;
            int32_t l_186 = (-1);
            (*g_119) = ((((((*l_165) = &g_126) == (p_56 , (g_168 = l_167))) > (safe_lshift_func_int16_t_s_u((+65534U), p_57))) == (safe_sub_func_uint32_t_u_u(p_57, (((((((-6) > (((((safe_mod_func_int16_t_s_s(((p_57 , (*l_167)) == l_176), p_58)) , (-6)) ^ l_177) < g_178) < 0xAFEB)) == (*g_119)) , p_56) , (*g_119)) <= (**g_118)) && (*l_113))))) || p_58);
            l_186 = (((((*l_180) = l_179) == l_181) || (&l_167 == (((((((((*l_184) = ((((****l_180) = ((((*l_85) = (((((65535U | 65526U) | ((((*l_183) = l_182) == (((void*)0 == (*l_179)) , (void*)0)) < g_86)) >= (***l_179)) > (**g_118)) < (*g_80))) < (***l_181)) && 1U)) & 0xF89493EA) & (*g_80))) , p_56) || (-3)) || (****l_180)) , 0x0EC6) == 0x86CC) == 0xD71EDEFA) , (void*)0))) & (-5));
            (***l_180) = (**l_179);
        }
        return (**l_179);
    }
    else
    {
        int32_t *l_187 = (void*)0;
        (**l_179) = l_187;
        return l_187;
    }
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_8;
    csmith_sink_ = g_50;
    csmith_sink_ = g_62;
    csmith_sink_ = g_76;
    csmith_sink_ = g_86;
    csmith_sink_ = g_97;
    csmith_sink_ = g_100;
    csmith_sink_ = g_164;
    csmith_sink_ = g_178;
    csmith_sink_ = g_185;
    csmith_sink_ = g_194;
    csmith_sink_ = g_250;
    csmith_sink_ = g_259;
    csmith_sink_ = g_264;
    csmith_sink_ = g_579;
    csmith_sink_ = g_624;
    csmith_sink_ = g_634;
    csmith_sink_ = g_638;
    csmith_sink_ = g_769;
    csmith_sink_ = g_827;
    csmith_sink_ = g_946;
    csmith_sink_ = g_1013;
    csmith_sink_ = g_1051;
    platform_main_end(0,0);
    return 0;
}
