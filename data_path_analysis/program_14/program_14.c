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
static int8_t g_21 = 0x9A;
static int32_t g_24 = 1;
static int32_t g_25 = 0x6B17B722;
static int8_t g_34 = 1;
static uint16_t g_44 = 65535U;
static int16_t g_53 = 0x7056;
static int8_t g_54 = 0xDB;
static int32_t g_60 = (-2);
static uint8_t g_64 = 0x7B;
static int16_t g_123 = 0xB2DC;
static uint8_t g_126 = 0x9D;
static int16_t g_151 = (-10);
static uint8_t g_226 = 1U;
static int32_t *g_239 = &g_24;
static int32_t g_260 = 1;
static int32_t ****g_283 = (void*)0;
static const uint8_t *g_292 = &g_226;
static const uint8_t g_294 = 255U;
static uint16_t g_299 = 0x6A1E;
static uint32_t g_367 = 0x26C3776C;
static int8_t *g_420 = &g_54;
static int8_t **g_419 = &g_420;
static int16_t g_491 = 0x1DD9;
static uint32_t g_541 = 1U;
static uint32_t *g_570 = &g_367;
static uint32_t **g_569 = &g_570;
static int8_t g_577 = 0xEF;
static int16_t g_578 = 0xCE88;
static uint16_t g_579 = 0x8FBC;
static int32_t g_612 = 0xAB624D7E;
static int8_t g_614 = 1;
static int32_t g_616 = (-5);
static uint8_t g_634 = 0x4E;
static const int32_t g_741 = 0;
static int32_t g_781 = 0x2042FC19;
static uint16_t g_851 = 1U;
static int32_t * const g_865 = &g_260;
static uint16_t g_919 = 0xDDB6;
static uint32_t g_1008 = 0x6DAC0E38;
static uint16_t func_1(void);
static int32_t func_72(uint16_t p_73);
static int32_t ** const func_75(uint32_t p_76);
static int32_t * const func_87(uint8_t p_88);
static uint8_t func_161(int16_t p_162, int32_t ** p_163, uint32_t p_164, int32_t * p_165, uint32_t p_166);
static const uint8_t func_167(int32_t * p_168, uint32_t p_169, int8_t p_170, uint32_t p_171);
static uint32_t func_173(int32_t p_174, uint32_t p_175, uint32_t p_176);
static uint8_t func_181(int32_t ** p_182, uint32_t p_183, int32_t p_184, int32_t ** p_185, uint32_t p_186);
static int32_t ** func_187(int32_t * p_188);
static int32_t * func_189(uint8_t p_190);
static uint16_t func_1(void)
{
    int32_t l_2 = (-4);
    int32_t *l_3 = &l_2;
    int32_t *l_4 = &l_2;
    int32_t *l_5 = &l_2;
    int32_t *l_6 = (void*)0;
    int32_t *l_7 = &l_2;
    int32_t *l_8 = &l_2;
    int32_t *l_9 = &l_2;
    int32_t l_10 = (-3);
    int32_t *l_11 = &l_10;
    int32_t *l_12 = (void*)0;
    int32_t *l_13 = (void*)0;
    int32_t *l_14 = &l_10;
    int32_t *l_15 = (void*)0;
    int32_t l_16 = (-1);
    int32_t *l_17 = (void*)0;
    int32_t *l_18 = &l_10;
    int32_t *l_19 = (void*)0;
    int32_t l_20 = 0xC3D069F4;
    int32_t *l_22 = &l_2;
    int32_t *l_23 = &l_2;
    int32_t *l_26 = (void*)0;
    int32_t *l_27 = (void*)0;
    int32_t *l_28 = &g_24;
    int32_t *l_29 = &l_2;
    int32_t *l_30 = &l_16;
    int32_t *l_31 = (void*)0;
    int32_t *l_32 = &l_20;
    int32_t *l_33 = (void*)0;
    int32_t l_35 = 0xFC42FF18;
    int32_t *l_36 = &l_2;
    int32_t l_37 = 0x209C3997;
    int32_t *l_38 = &l_10;
    int32_t *l_39 = (void*)0;
    int32_t *l_40 = &l_37;
    int32_t *l_41 = &g_24;
    int32_t *l_42 = &l_37;
    int32_t *l_43 = &g_24;
    int32_t l_1011 = 0xD5A098B0;
    ++g_44;
    for (l_35 = 0; (l_35 != (-29)); --l_35)
    {
        uint16_t l_49 = 65535U;
        int32_t l_52 = 0x137D3709;
        int32_t *l_55 = (void*)0;
        int32_t *l_56 = &l_16;
        int32_t *l_57 = &l_2;
        int32_t *l_58 = &l_37;
        int32_t *l_59 = &g_24;
        int32_t *l_61 = (void*)0;
        int32_t *l_62 = &l_2;
        int32_t *l_63 = &l_52;
        uint32_t l_71 = 0xAED5EBAE;
        l_49++;
        ++g_64;
        for (g_64 = 0; (g_64 == 45); g_64 = safe_add_func_int16_t_s_s(g_64, 8))
        {
            (*l_8) |= (safe_sub_func_uint8_t_u_u(l_71, g_24));
        }
    }
    (*l_8) &= func_72(g_54);
    return l_1011;
}
static int32_t func_72(uint16_t p_73)
{
    int32_t *l_74 = &g_24;
    int32_t **l_975 = &g_239;
    int32_t l_978 = 7;
    int32_t l_1002 = (-1);
    (*l_74) = (-10);
    l_975 = func_75((*l_74));
    for (g_541 = (-17); (g_541 >= 58); g_541 = safe_add_func_uint16_t_u_u(g_541, 7))
    {
        int32_t *l_979 = (void*)0;
        int32_t *l_980 = &g_24;
        int32_t *l_981 = &g_260;
        int32_t *l_982 = &g_781;
        int32_t *l_983 = &g_781;
        int32_t *l_984 = &g_24;
        int32_t *l_985 = &l_978;
        int32_t *l_986 = (void*)0;
        int32_t *l_987 = (void*)0;
        int32_t *l_988 = &g_781;
        int32_t *l_989 = &g_24;
        int32_t *l_990 = &l_978;
        int32_t *l_991 = &l_978;
        int32_t *l_992 = (void*)0;
        int32_t *l_993 = (void*)0;
        int32_t *l_994 = &l_978;
        int32_t *l_995 = (void*)0;
        int32_t *l_996 = (void*)0;
        int32_t *l_997 = &l_978;
        int32_t *l_998 = &g_781;
        int32_t *l_999 = &g_260;
        int32_t *l_1000 = &g_260;
        int32_t *l_1001 = &g_781;
        int32_t *l_1003 = &l_1002;
        int32_t *l_1004 = &g_260;
        int32_t *l_1005 = (void*)0;
        int32_t *l_1006 = &l_1002;
        int32_t *l_1007 = &g_260;
        g_1008--;
    }
    return p_73;
}
static int32_t ** const func_75(uint32_t p_76)
{
    int16_t l_89 = 0xE4A9;
    int32_t l_133 = 1;
    int32_t ** const l_974 = &g_239;
    for (p_76 = 0; (p_76 <= 31); p_76++)
    {
        int32_t *l_160 = (void*)0;
        int32_t *l_172 = &l_133;
        for (g_21 = 25; (g_21 >= 1); g_21--)
        {
            uint8_t l_154 = 0xD4;
            int8_t *l_204 = &g_34;
            int32_t **l_649 = &l_160;
            int32_t ***l_648 = &l_649;
            int32_t **l_869 = &l_160;
            int32_t l_933 = 0xA6DE3D14;
            uint8_t l_949 = 0x7A;
            for (g_34 = 0; (g_34 > 3); g_34 = safe_add_func_int8_t_s_s(g_34, 2))
            {
                int32_t *l_85 = &g_24;
                int32_t **l_129 = (void*)0;
                int32_t **l_130 = &l_85;
                for (g_24 = 0; (g_24 != (-18)); g_24 = safe_sub_func_int32_t_s_s(g_24, 9))
                {
                    int32_t **l_86 = &l_85;
                    (*l_86) = l_85;
                }
                (*l_130) = func_87(l_89);
                for (g_53 = 0; (g_53 <= (-3)); g_53 = safe_sub_func_int16_t_s_s(g_53, 1))
                {
                    int32_t *l_134 = &g_24;
                    int32_t *l_135 = &l_133;
                    int32_t *l_136 = &l_133;
                    int32_t *l_137 = (void*)0;
                    int32_t *l_138 = &l_133;
                    int32_t *l_139 = &g_24;
                    int32_t *l_140 = (void*)0;
                    int32_t *l_141 = &l_133;
                    int32_t *l_142 = &l_133;
                    int32_t *l_143 = &g_24;
                    int32_t *l_144 = &l_133;
                    int32_t *l_145 = &l_133;
                    int32_t *l_146 = &l_133;
                    int32_t *l_147 = (void*)0;
                    int32_t *l_148 = &l_133;
                    int32_t *l_149 = &l_133;
                    int32_t *l_150 = &l_133;
                    int32_t *l_152 = &l_133;
                    int32_t *l_153 = &l_133;
                    l_154--;
                    (*l_130) = (void*)0;
                    for (g_54 = 0; (g_54 != (-17)); g_54--)
                    {
                        int32_t **l_159 = (void*)0;
                        l_150 = func_87(p_76);
                        if (p_76)
                            continue;
                        if (l_154)
                            break;
                    }
                    l_160 = &g_24;
                }
            }
            if (((((g_25 <= func_161(((func_167(l_172, func_173(g_25, (safe_sub_func_uint32_t_u_u(((safe_rshift_func_int8_t_s_u(p_76, func_181(((*l_648) = func_187(func_189((safe_lshift_func_uint16_t_u_s(((safe_rshift_func_int16_t_s_u((!p_76), 1)) && (0 & (safe_mul_func_uint8_t_u_u((p_76 & ((((*l_204) ^= (safe_add_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(((safe_rshift_func_int16_t_s_s(p_76, g_53)) ^ 0x82D7), 8)), g_151))) & l_133) == g_60)), g_126)))), 2))))), p_76, g_60, &l_172, p_76))) <= l_89), p_76)), g_612), p_76, g_614) != g_25) > p_76), l_869, l_89, l_172, l_89)) | 8) || 9) == p_76))
            {
                int16_t l_945 = 1;
                (*g_239) |= (safe_rshift_func_uint8_t_u_u((*g_292), 4));
                for (g_44 = 0; (g_44 > 5); g_44 = safe_add_func_uint8_t_u_u(g_44, 9))
                {
                    int8_t l_941 = (-2);
                    uint8_t *l_961 = &g_64;
                    const int32_t l_964 = (-1);
                }
            }
            else
            {
                (*l_869) = func_189((*g_292));
            }
        }
    }
    return l_974;
}
static int32_t * const func_87(uint8_t p_88)
{
    int32_t *l_92 = (void*)0;
    int32_t *l_93 = &g_24;
    int32_t *l_94 = &g_24;
    int32_t *l_95 = &g_24;
    int32_t *l_96 = &g_24;
    int32_t *l_97 = &g_24;
    int32_t *l_98 = &g_24;
    int32_t *l_99 = &g_24;
    int32_t *l_100 = &g_24;
    int32_t *l_101 = &g_24;
    int32_t *l_102 = &g_24;
    int32_t *l_103 = (void*)0;
    int32_t *l_104 = &g_24;
    int32_t *l_105 = &g_24;
    int32_t *l_106 = &g_24;
    int32_t *l_107 = &g_24;
    int32_t *l_108 = (void*)0;
    int32_t *l_109 = &g_24;
    int32_t *l_110 = &g_24;
    int32_t *l_111 = &g_24;
    int32_t *l_112 = (void*)0;
    int32_t *l_113 = (void*)0;
    int32_t *l_114 = (void*)0;
    int32_t *l_115 = &g_24;
    int32_t *l_116 = &g_24;
    int32_t l_117 = (-1);
    int32_t *l_118 = &l_117;
    int32_t *l_119 = &g_24;
    int32_t *l_120 = &l_117;
    int32_t *l_121 = &l_117;
    int32_t l_122 = (-10);
    int32_t *l_124 = &l_117;
    int32_t *l_125 = &l_122;
    (*l_93) ^= (safe_lshift_func_uint8_t_u_u((g_64 = ((&g_24 != (void*)0) < p_88)), 7));
    g_126--;
    return &g_24;
}
static uint8_t func_161(int16_t p_162, int32_t ** p_163, uint32_t p_164, int32_t * p_165, uint32_t p_166)
{
    int32_t l_870 = 0;
    int32_t *l_871 = (void*)0;
    int32_t *l_872 = (void*)0;
    int32_t *l_873 = (void*)0;
    int32_t *l_874 = &g_260;
    int32_t *l_875 = &g_24;
    int32_t l_876 = 0x6D6DA56A;
    int32_t *l_877 = &g_781;
    int32_t *l_878 = (void*)0;
    int32_t *l_879 = (void*)0;
    int32_t *l_880 = &g_260;
    int32_t *l_881 = &g_24;
    int32_t *l_882 = &l_876;
    int32_t *l_883 = (void*)0;
    int32_t l_884 = 1;
    int32_t *l_885 = (void*)0;
    int32_t *l_886 = &g_260;
    int32_t *l_887 = &g_781;
    int32_t *l_888 = &g_781;
    int32_t *l_889 = &l_876;
    int32_t *l_890 = &l_876;
    int32_t *l_891 = &g_24;
    int32_t *l_892 = &l_884;
    int32_t *l_893 = &g_781;
    int32_t *l_894 = &l_876;
    int32_t l_895 = 0x86122984;
    int32_t *l_896 = &l_884;
    int32_t *l_897 = &g_24;
    int32_t *l_898 = &l_884;
    int32_t *l_899 = (void*)0;
    int32_t *l_900 = &g_24;
    int32_t *l_901 = &l_895;
    int32_t *l_902 = &g_781;
    int32_t l_903 = 0x6C547EFB;
    int32_t *l_904 = &g_260;
    int32_t *l_905 = &g_781;
    int32_t l_906 = 0;
    int32_t *l_907 = &l_895;
    int32_t *l_908 = &l_903;
    int32_t *l_909 = &g_781;
    int32_t *l_910 = &g_24;
    int32_t *l_911 = &l_884;
    int32_t *l_912 = &g_24;
    int32_t *l_913 = &g_24;
    int32_t *l_914 = (void*)0;
    int32_t *l_915 = &l_906;
    int32_t *l_916 = &l_903;
    int32_t *l_917 = &l_903;
    int32_t l_918 = (-6);
    --g_919;
    return p_162;
}
static const uint8_t func_167(int32_t * p_168, uint32_t p_169, int8_t p_170, uint32_t p_171)
{
    int16_t l_711 = 0x566E;
    int32_t l_751 = 0x03DC814C;
    int8_t *l_757 = (void*)0;
    int8_t l_759 = (-1);
    uint32_t l_867 = 4294967295U;
    int16_t *l_868 = &g_151;
    for (g_54 = 0; (g_54 <= 11); g_54 = safe_add_func_int32_t_s_s(g_54, 2))
    {
        uint8_t *l_716 = &g_634;
        uint8_t **l_715 = &l_716;
        int8_t ***l_724 = (void*)0;
        int8_t ***l_725 = &g_419;
        int8_t *l_734 = &g_577;
        int16_t l_750 = 0x5368;
        const int32_t *l_774 = &g_260;
        const int32_t **l_773 = &l_774;
        int32_t l_827 = (-5);
        for (g_226 = 0; (g_226 == 40); g_226 = safe_add_func_int32_t_s_s(g_226, 1))
        {
            uint16_t l_712 = 0x6451;
            uint8_t ***l_717 = (void*)0;
            uint8_t ***l_718 = &l_715;
            int32_t **l_721 = &g_239;
            for (g_634 = (-5); (g_634 >= 55); g_634++)
            {
                l_711 |= (*p_168);
            }
            ++l_712;
            (*l_718) = l_715;
            (*l_721) = func_87((safe_lshift_func_int8_t_s_s(l_712, 6)));
        }
        if (((safe_sub_func_int32_t_s_s((l_724 != l_725), (((((*g_239) || ((((safe_mul_func_int16_t_s_s((-3), (safe_mul_func_int16_t_s_s((safe_mul_func_int16_t_s_s(((safe_lshift_func_int8_t_s_s(((*l_734) = (*g_420)), (safe_lshift_func_uint16_t_u_u((p_170 < (safe_lshift_func_int16_t_s_u((safe_sub_func_int8_t_s_s(g_741, (safe_mul_func_uint8_t_u_u(0U, (safe_mul_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(0xA31E, 7)), p_169)), 0xD8)))))), 4))), 0)))) <= l_711), l_711)), g_741)))) && 0x1750) < l_750) <= l_711)) > 0xC2) || (*g_239)) <= l_750))) || 0xE8))
        {
            uint32_t l_754 = 4294967295U;
            int32_t *l_777 = (void*)0;
            int32_t l_791 = (-1);
            int32_t l_814 = 1;
            if (((*p_168) &= (0x81EB != g_25)))
            {
                int32_t *l_752 = &l_751;
                int32_t *l_753 = &g_24;
                int8_t **l_758 = &l_734;
                --l_754;
                if (l_750)
                    break;
                (*g_239) |= (0U != (((l_757 = &p_170) != ((*l_758) = &p_170)) >= l_759));
            }
            else
            {
                int32_t l_812 = 0;
                int32_t l_818 = 9;
                int32_t l_838 = 0x76162333;
                int32_t l_845 = 0xFF3D06E8;
                for (g_123 = 0; (g_123 == (-2)); --g_123)
                {
                    const int32_t ****l_764 = (void*)0;
                }
                (*l_773) = (void*)0;
                return (*g_292);
            }
        }
        else
        {
            if ((*p_168))
                break;
            for (g_634 = 0; (g_634 == 44); ++g_634)
            {
                const uint32_t l_858 = 1U;
                (*g_239) = 0;
                for (g_260 = (-6); (g_260 == (-15)); g_260 = safe_sub_func_int32_t_s_s(g_260, 5))
                {
                    return l_858;
                }
            }
            return l_711;
        }
    }
    (*g_239) |= (((g_21 > ((*l_868) = ((248U || (safe_mod_func_int16_t_s_s((((safe_sub_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((p_169 & ((void*)0 == g_865)), 0xEC)), (+l_759))) == (**g_569)) == (l_759 && p_169)), l_759))) <= l_867))) & 0x9733126D) > p_170);
    return l_751;
}
static uint32_t func_173(int32_t p_174, uint32_t p_175, uint32_t p_176)
{
    int32_t **l_671 = &g_239;
    uint8_t *l_672 = &g_64;
    uint32_t * const *l_673 = &g_570;
    if ((safe_add_func_int8_t_s_s(((p_176 | 0xE3) >= ((*l_672) = ((((void*)0 != l_671) & p_174) || (**l_671)))), (l_673 == &g_570))))
    {
        int32_t *l_674 = &g_260;
        (*l_674) ^= (**l_671);
        (**l_671) ^= (safe_unary_minus_func_uint16_t_u(((safe_add_func_uint32_t_u_u((safe_sub_func_int16_t_s_s(p_175, g_491)), 0U)) && (safe_sub_func_uint8_t_u_u(0x49, p_176)))));
    }
    else
    {
        uint32_t l_688 = 0x07BEE8ED;
        uint16_t l_689 = 5U;
        uint16_t *l_703 = (void*)0;
        uint16_t *l_704 = &g_579;
        g_239 = (*l_671);
        (**l_671) = (((*l_672) = ((((safe_lshift_func_uint8_t_u_u(6U, 5)) >= (0x84 < ((*g_420) = (((safe_rshift_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(((*g_570) || (l_688 & (*g_239))), l_689)), 2)) >= (!((safe_rshift_func_uint16_t_u_u((l_689 > ((*l_704) = (safe_lshift_func_uint8_t_u_s(((safe_mod_func_int8_t_s_s((safe_add_func_uint32_t_u_u((safe_add_func_uint8_t_u_u((4294967295U || (((safe_lshift_func_uint8_t_u_s(p_176, 0)) > g_614) >= (**l_671))), l_689)), l_689)), (*g_292))) > (**l_671)), 1)))), 0)) <= p_175))) == 0x9539)))) & l_689) & 0xBF689521)) & g_612);
    }
    return p_176;
}
static uint8_t func_181(int32_t ** p_182, uint32_t p_183, int32_t p_184, int32_t ** p_185, uint32_t p_186)
{
    int8_t **l_657 = (void*)0;
    int32_t l_668 = 0x432794FC;
    for (g_123 = 15; (g_123 <= 18); g_123 = safe_add_func_int8_t_s_s(g_123, 1))
    {
        int32_t **l_662 = (void*)0;
        int32_t ***l_661 = &l_662;
        int32_t ****l_660 = &l_661;
        uint16_t *l_663 = &g_44;
        (*g_239) = ((+(safe_sub_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((l_657 == &g_420), 5)), ((*l_663) = (safe_mul_func_int8_t_s_s((l_660 != (void*)0), (g_614 == 65535U))))))) == ((*g_420) >= (((safe_sub_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(p_183, p_184)), (*g_420))) || 0U) && (*g_420))));
        (**p_185) = l_668;
        (**p_185) = (p_184 && 0xB6D1);
    }
    return l_668;
}
static int32_t ** func_187(int32_t * p_188)
{
    uint32_t l_255 = 4294967291U;
    uint8_t *l_291 = &g_64;
    int32_t l_330 = (-7);
    int32_t l_434 = 0;
    int8_t l_453 = 5;
    int32_t l_454 = 0x6FED9153;
    int32_t l_458 = (-1);
    uint8_t l_483 = 0U;
    int16_t *l_547 = &g_491;
    int32_t l_615 = (-9);
    int32_t l_617 = 0x3447AFBA;
    int32_t l_618 = 0xCBC03DAD;
    int32_t l_619 = 0x6C2EF98C;
    int32_t l_621 = 0;
    const int8_t *l_642 = &l_453;
    const int8_t **l_641 = &l_642;
    for (g_151 = (-23); (g_151 != (-22)); ++g_151)
    {
        int32_t **l_234 = (void*)0;
        int32_t ***l_233 = &l_234;
        int32_t ****l_232 = &l_233;
        int8_t *l_360 = (void*)0;
        uint32_t *l_366 = &g_367;
        uint16_t *l_376 = &g_299;
        int32_t *l_435 = &l_434;
        int32_t *l_436 = (void*)0;
        int32_t *l_437 = &g_260;
        int32_t *l_438 = &l_330;
        int32_t *l_439 = (void*)0;
        int32_t *l_440 = &g_260;
        int32_t *l_441 = &l_434;
        int32_t *l_442 = &l_434;
        int32_t *l_443 = &g_260;
        int32_t l_444 = 0x46675EF0;
        int32_t *l_445 = &g_260;
        int32_t *l_446 = &l_444;
        int32_t *l_447 = &l_434;
        int32_t *l_448 = &l_434;
        int32_t *l_449 = &l_434;
        int32_t *l_450 = (void*)0;
        int32_t *l_451 = (void*)0;
        int32_t *l_452 = &l_330;
        int32_t *l_455 = &l_444;
        int32_t *l_456 = &l_454;
        int32_t *l_457 = &g_260;
        int32_t *l_459 = (void*)0;
        int32_t *l_460 = &l_444;
        int32_t *l_461 = &l_454;
        int32_t *l_462 = &l_330;
        int32_t *l_463 = &l_454;
        int32_t *l_464 = (void*)0;
        int32_t *l_465 = &l_454;
        int32_t l_466 = (-2);
        int32_t *l_467 = &g_260;
        int32_t *l_468 = &l_466;
        int32_t *l_469 = &l_466;
        int32_t *l_470 = &l_454;
        int32_t *l_471 = &l_434;
        int32_t *l_472 = &l_466;
        int32_t *l_473 = &l_458;
        int32_t *l_474 = &g_260;
        int32_t *l_475 = &l_330;
        int32_t *l_476 = &g_260;
        int32_t *l_477 = (void*)0;
        int32_t *l_478 = &g_260;
        int32_t *l_479 = &l_458;
        int32_t *l_480 = &g_24;
        int32_t *l_481 = (void*)0;
        int32_t *l_482 = &l_466;
        int32_t l_533 = 0xD7EAA556;
        (*l_232) = (void*)0;
        for (g_44 = 0; (g_44 == 43); g_44++)
        {
            const int32_t ***l_242 = (void*)0;
            int16_t *l_308 = &g_53;
            int8_t *l_359 = (void*)0;
            int8_t l_380 = 0xAE;
            uint32_t *l_403 = &g_367;
            int32_t l_408 = 1;
            if ((safe_mod_func_int16_t_s_s(g_151, g_226)))
            {
                int32_t *l_241 = &g_24;
                int32_t **l_240 = &l_241;
                const int32_t ****l_243 = &l_242;
                (*l_240) = (g_239 = &g_24);
                (*l_243) = l_242;
                for (g_64 = 24; (g_64 < 21); --g_64)
                {
                    return &g_239;
                }
            }
            else
            {
                uint32_t l_248 = 0x35E3CEA8;
                int32_t l_267 = 4;
                int16_t *l_273 = &g_123;
                const uint8_t *l_293 = &g_294;
                uint32_t *l_368 = (void*)0;
                int32_t l_421 = 0;
                int32_t l_430 = (-1);
                int32_t **l_431 = &g_239;
                if ((safe_mod_func_int16_t_s_s(l_248, 0xB163)))
                {
                    uint32_t l_284 = 0x78ADDDDE;
                    for (g_34 = (-2); (g_34 != (-22)); g_34 = safe_sub_func_int32_t_s_s(g_34, 5))
                    {
                        int32_t *l_251 = &g_24;
                        int16_t *l_256 = &g_53;
                        int32_t *l_259 = &g_260;
                        p_188 = l_251;
                        (*l_259) &= (((g_126 && (*l_251)) != (((+g_21) > ((((*l_256) = ((-1) & l_255)) > (!g_25)) > ((+(*l_251)) == (g_24 == ((((*l_251) && 0x5196) & 4294967292U) & 8))))) == 0xC9ED)) && 0xA317);
                    }
                    for (g_123 = 0; (g_123 >= (-18)); g_123 = safe_sub_func_uint16_t_u_u(g_123, 7))
                    {
                        uint8_t *l_268 = &g_126;
                        int32_t l_280 = (-6);
                        int8_t *l_285 = &g_34;
                        uint8_t *l_286 = &g_64;
                        (*p_188) = (safe_lshift_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(((((*l_268)++) || ((*l_286) &= ((safe_add_func_int16_t_s_s(((-1) >= (l_273 != (void*)0)), (safe_lshift_func_uint8_t_u_s(g_151, ((*l_285) = (0x3B >= (safe_unary_minus_func_int8_t_s((!(safe_add_func_uint16_t_u_u(((1U <= l_280) >= (safe_lshift_func_uint16_t_u_s(0xD19C, ((g_283 != &l_233) <= g_21)))), l_284))))))))))) < g_126))) && g_25), l_255)), l_280));
                    }
                }
                else
                {
                    int16_t *l_300 = &g_53;
                    int32_t *l_307 = &g_24;
                    int32_t **l_372 = &g_239;
                    (*g_239) = (*p_188);
                    (*p_188) &= ((((g_226 != (l_255 <= (safe_rshift_func_uint8_t_u_s(0U, 3)))) != ((-1) < (l_291 == (l_293 = g_292)))) & l_255) >= l_267);
                    if ((safe_sub_func_uint8_t_u_u((((*l_273) = l_248) < ((safe_sub_func_uint16_t_u_u(g_299, l_255)) == ((g_64 || (((void*)0 != l_300) && (safe_mul_func_int8_t_s_s(l_248, (*g_292))))) == (safe_mul_func_uint16_t_u_u(g_126, l_248))))), g_44)))
                    {
                        uint32_t *l_309 = &l_248;
                        l_307 = func_189(((*l_291) = (safe_rshift_func_int16_t_s_u(l_248, 12))));
                        (*g_239) |= l_248;
                        (*g_239) = (((*l_309) &= (g_44 & ((l_308 = &g_123) != (void*)0))) && (-1));
                    }
                    else
                    {
                        int32_t **l_335 = &g_239;
                        int32_t ***l_336 = &l_335;
                        uint16_t *l_345 = &g_299;
                        int32_t **l_349 = (void*)0;
                        int32_t **l_350 = &l_307;
                        int8_t *l_361 = (void*)0;
                        int8_t *l_362 = (void*)0;
                        int8_t *l_363 = &g_54;
                        int32_t *l_369 = &g_260;
                        (*l_335) = func_87((safe_mul_func_uint8_t_u_u((l_300 != &g_123), (safe_rshift_func_int8_t_s_u(((!(safe_add_func_uint16_t_u_u((l_267 ^= ((*p_188) ^ (safe_mul_func_int16_t_s_s((l_308 != &g_123), ((safe_unary_minus_func_int32_t_s((*p_188))) >= (safe_mul_func_uint8_t_u_u(((*g_292) != (safe_mul_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((safe_add_func_uint32_t_u_u(((safe_sub_func_int8_t_s_s((((*l_291)++) && 0), (g_126 = (safe_sub_func_int16_t_s_s(((void*)0 == &g_239), g_60))))) ^ 0), (*g_239))), g_44)), g_151))), g_53))))))), g_60))) < g_294), l_255)))));
                        (*l_350) = func_87((((*g_292) ^ ((((*l_336) = l_335) != &p_188) == (g_123 = (safe_rshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(g_226, (safe_rshift_func_int16_t_s_u(7, (l_267 ^ ((safe_mod_func_uint16_t_u_u(((*l_345) = 5U), (safe_add_func_int16_t_s_s((!(0x77 < ((*g_292) >= l_267))), g_226)))) ^ (*l_307))))))), 13))))) != (*g_292)));
                        (*l_369) |= (((safe_add_func_uint8_t_u_u(((safe_add_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s(((*l_307) ^ (safe_add_func_uint16_t_u_u(((l_360 = l_359) == l_361), g_25))), 1)), (g_24 < ((((*l_363) &= l_248) & 1) & ((safe_lshift_func_int8_t_s_s((((l_368 = l_366) == &g_367) ^ 0x056D), g_53)) > (*g_292)))))) < 0xD57F1B4A), g_44)) || 0U) ^ (***l_336));
                        if ((*p_188))
                            continue;
                    }
                    if ((safe_rshift_func_uint8_t_u_u(((*l_307) != g_226), (*g_292))))
                    {
                        return l_372;
                    }
                    else
                    {
                        int32_t *l_373 = &g_260;
                        g_260 |= (*g_239);
                        (*l_373) &= (*p_188);
                    }
                }
                for (g_260 = (-6); (g_260 >= 18); ++g_260)
                {
                    int8_t l_405 = 1;
                    int32_t l_409 = (-2);
                    (*p_188) = (((void*)0 != l_376) ^ (1 >= ((l_359 == &g_64) > (g_299 > (safe_rshift_func_int16_t_s_s(((*p_188) <= (!8U)), 8))))));
                    if (((*g_239) = (l_380 ^ (safe_add_func_int8_t_s_s(((1 & l_330) < (((safe_mod_func_int32_t_s_s(0xE4992809, l_255)) | (((void*)0 != p_188) > ((-2) >= g_44))) || 0xF2620083)), 246U)))))
                    {
                        int8_t **l_395 = &l_359;
                        int8_t l_400 = 0;
                        uint32_t **l_404 = &l_403;
                        (*p_188) = (safe_mod_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(((*l_308) = (((safe_mod_func_uint32_t_u_u(((*g_292) && g_151), (safe_add_func_uint8_t_u_u(l_255, ((safe_sub_func_uint8_t_u_u((((*l_395) = (void*)0) == l_293), g_25)) > ((((safe_mod_func_uint32_t_u_u(((safe_sub_func_uint8_t_u_u((g_64 = ((l_330 >= (0x96 || 253U)) ^ (-4))), g_123)) == g_294), (*p_188))) | l_255) == l_267) || 0x22959070)))))) && g_151) | l_400)), 0x80E2)), g_34));
                        l_409 = ((*p_188) = (((safe_rshift_func_int16_t_s_s(l_400, 6)) <= (((((*l_291) |= ((p_188 != ((*l_404) = l_403)) & (((l_405 ^ (l_408 = ((((0xF2DE == (0x25AE > l_330)) != 0U) >= (safe_mod_func_uint16_t_u_u(g_54, l_405))) && (*p_188)))) < l_405) || l_400))) != g_126) < 0x86) | 1)) && g_226));
                        if ((*g_239))
                            break;
                        (*p_188) = l_267;
                    }
                    else
                    {
                        int8_t ***l_416 = (void*)0;
                        int8_t **l_418 = (void*)0;
                        int8_t ***l_417 = &l_418;
                        int32_t *l_428 = (void*)0;
                        int32_t *l_429 = (void*)0;
                        l_430 |= (safe_lshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((safe_mod_func_int16_t_s_s((((((*l_417) = &l_359) != (g_419 = &l_360)) > (l_421 == (l_330 = (((*l_366) = 0x1B903DA8) != 0)))) <= ((*l_291) ^= (safe_sub_func_uint8_t_u_u(249U, (4U >= (l_267 > (safe_sub_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(((l_308 != &g_151) < (*g_420)), 0)), 0)))))))), g_24)), (*g_292))), 0));
                    }
                }
                return l_431;
            }
            (*p_188) ^= (safe_rshift_func_uint16_t_u_u(((&l_242 == g_283) >= l_434), 9));
        }
        --l_483;
        if ((*p_188))
        {
            int16_t l_486 = 0;
            int32_t l_487 = 0x94BA9F67;
            int32_t l_488 = 0;
            int32_t l_489 = 0xBE4DEC8A;
            int32_t l_490 = 4;
            int32_t *l_492 = &g_24;
            int32_t *l_493 = &l_466;
            int32_t *l_494 = (void*)0;
            int32_t *l_495 = &l_489;
            int32_t *l_496 = &g_260;
            int32_t *l_497 = &l_488;
            int32_t *l_498 = &l_458;
            int32_t l_499 = 0x9E35B24F;
            int32_t *l_500 = &l_466;
            int32_t *l_501 = &l_330;
            int32_t *l_502 = (void*)0;
            int32_t *l_503 = &l_444;
            int32_t *l_504 = &l_487;
            int32_t l_505 = 0x53EDEECB;
            int32_t *l_506 = &l_466;
            int32_t *l_507 = (void*)0;
            int32_t *l_508 = &l_489;
            int32_t *l_509 = &l_458;
            int32_t *l_510 = &l_466;
            int32_t *l_511 = &l_434;
            int32_t *l_512 = &l_489;
            int32_t *l_513 = &l_505;
            int32_t *l_514 = (void*)0;
            int32_t *l_515 = &l_487;
            int32_t *l_516 = (void*)0;
            int32_t *l_517 = &l_444;
            int32_t *l_518 = &l_434;
            int32_t *l_519 = &g_260;
            int32_t *l_520 = &l_505;
            int32_t *l_521 = &l_454;
            int32_t *l_522 = &l_454;
            int32_t *l_523 = &l_489;
            int32_t l_524 = 0xCBC5EB3F;
            int32_t *l_525 = &l_487;
            int32_t *l_526 = (void*)0;
            int32_t *l_527 = &l_489;
            int32_t *l_528 = &g_24;
            int32_t *l_529 = &g_260;
            int32_t *l_530 = &l_505;
            int32_t *l_531 = &l_499;
            int32_t *l_532 = &l_466;
            int32_t *l_534 = &g_260;
            int32_t *l_535 = &l_490;
            int32_t *l_536 = &g_24;
            int32_t *l_537 = (void*)0;
            int32_t *l_538 = (void*)0;
            int32_t l_539 = 0xCCD52C48;
            int32_t *l_540 = &l_524;
            uint32_t * const *l_571 = &g_570;
            int8_t **l_643 = &l_360;
            g_541--;
            for (l_330 = 0; (l_330 == 18); ++l_330)
            {
                int32_t l_572 = 0x2E7B3C1A;
                int32_t l_575 = 0xF87B1ACB;
                int32_t l_611 = 0x507F084D;
                int32_t l_613 = 0;
                if ((*l_523))
                {
                    uint16_t *l_552 = &g_44;
                    int32_t l_573 = 2;
                    if (((((~((*l_376) = (l_376 == l_547))) != (((safe_sub_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_u((++(*l_552)), (safe_sub_func_int8_t_s_s((-6), ((*l_291)--))))) == ((safe_mod_func_uint16_t_u_u((l_454 || (safe_sub_func_int16_t_s_s(((*l_547) = ((safe_mul_func_int8_t_s_s(((~(*p_188)) == ((safe_sub_func_uint16_t_u_u((+(g_569 == l_571)), ((g_260 && 0xF387) || (*g_239)))) && 0x5588)), (*g_292))) < (*g_420))), 0x3E62))), l_453)) | 0xF4)), l_572)) < 0xA15E) <= (*g_570))) <= l_573) != (*g_420)))
                    {
                        int8_t l_574 = (-9);
                        int32_t l_576 = 0xD9E332CB;
                        g_579--;
                        if (l_458)
                            break;
                        (*l_504) = (~((safe_mul_func_int16_t_s_s((safe_sub_func_int8_t_s_s((safe_mod_func_int16_t_s_s((((*l_506) ^ (l_576 & (((!4294967288U) > ((g_299 = g_226) | g_60)) & (*g_292)))) | (**g_569)), g_294)), (*g_420))), g_226)) && 0x02D78261));
                    }
                    else
                    {
                        uint32_t l_590 = 1U;
                        if (l_572)
                            break;
                        --l_590;
                    }
                    (*l_437) = (safe_sub_func_uint8_t_u_u((((((*l_291) = (*l_437)) != (*g_420)) & (*l_463)) <= ((safe_rshift_func_uint8_t_u_s((l_453 & (safe_add_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_u(((safe_mod_func_int16_t_s_s((safe_mod_func_int8_t_s_s(((((((safe_unary_minus_func_int32_t_s((((safe_lshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(l_573, 9)), (*g_292))) | (**g_569)) >= g_44))) && (l_573 || l_575)) || (**g_569)) <= 0xB8C41C65) <= (*p_188)) ^ (*g_239)), l_573)), g_491)) && g_123), 5)) >= 0x78), l_573))), 1)) & 0xB9)), (*g_292)));
                }
                else
                {
                    int32_t l_610 = 0;
                    int32_t l_620 = 0x1B9BB46E;
                    int32_t *l_622 = &l_524;
                    int32_t *l_623 = &l_499;
                    int32_t *l_624 = &g_260;
                    int32_t *l_625 = &l_505;
                    int32_t l_626 = 5;
                    int32_t *l_627 = (void*)0;
                    int32_t *l_628 = &l_611;
                    int32_t *l_629 = &g_24;
                    int32_t *l_630 = (void*)0;
                    int32_t *l_631 = &g_24;
                    int32_t *l_632 = &l_444;
                    int32_t *l_633 = &l_487;
                    --g_634;
                    for (g_367 = 0; (g_367 != 51); g_367++)
                    {
                        int8_t ***l_644 = &g_419;
                        (*p_188) |= (*l_633);
                        (*l_500) = (~((*l_291) &= (((safe_unary_minus_func_uint16_t_u((l_641 != ((*l_644) = l_643)))) == (g_367 == 0x9612)) > ((*g_292) >= 255U))));
                    }
                    if ((*g_239))
                        continue;
                }
            }
        }
        else
        {
            uint32_t l_645 = 0x22A97E7C;
            ++l_645;
        }
    }
    return &g_239;
}
static int32_t * func_189(uint8_t p_190)
{
    int32_t *l_205 = &g_24;
    int32_t *l_206 = &g_24;
    int32_t *l_207 = &g_24;
    int32_t *l_208 = &g_24;
    int32_t *l_209 = (void*)0;
    int32_t *l_210 = &g_24;
    int32_t *l_211 = &g_24;
    int32_t *l_212 = &g_24;
    int32_t *l_213 = &g_24;
    int32_t *l_214 = &g_24;
    int32_t *l_215 = &g_24;
    int32_t *l_216 = &g_24;
    int32_t *l_217 = &g_24;
    int32_t *l_218 = (void*)0;
    int32_t *l_219 = &g_24;
    int32_t *l_220 = (void*)0;
    int32_t *l_221 = &g_24;
    int32_t *l_222 = (void*)0;
    int32_t *l_223 = &g_24;
    int32_t *l_224 = &g_24;
    int32_t l_225 = (-2);
    int32_t *l_229 = &g_24;
    ++g_226;
    return l_229;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_21;
    csmith_sink_ = g_24;
    csmith_sink_ = g_25;
    csmith_sink_ = g_34;
    csmith_sink_ = g_44;
    csmith_sink_ = g_53;
    csmith_sink_ = g_54;
    csmith_sink_ = g_60;
    csmith_sink_ = g_64;
    csmith_sink_ = g_123;
    csmith_sink_ = g_126;
    csmith_sink_ = g_151;
    csmith_sink_ = g_226;
    csmith_sink_ = g_260;
    csmith_sink_ = g_294;
    csmith_sink_ = g_299;
    csmith_sink_ = g_367;
    csmith_sink_ = g_491;
    csmith_sink_ = g_541;
    csmith_sink_ = g_577;
    csmith_sink_ = g_578;
    csmith_sink_ = g_579;
    csmith_sink_ = g_612;
    csmith_sink_ = g_614;
    csmith_sink_ = g_616;
    csmith_sink_ = g_634;
    csmith_sink_ = g_741;
    csmith_sink_ = g_781;
    csmith_sink_ = g_851;
    csmith_sink_ = g_919;
    csmith_sink_ = g_1008;
    platform_main_end(0,0);
    return 0;
}
