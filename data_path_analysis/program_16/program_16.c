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
static int8_t g_12 = 0;
static uint32_t g_50[6][7] = {{0x811FFBE6,0x1D2DAFFA,8U,0x3846F263,0x3846F263,8U,0x1D2DAFFA},{1U,5U,7U,5U,1U,5U,7U},{0x3846F263,0x3846F263,8U,0x1D2DAFFA,0x811FFBE6,0x811FFBE6,0x1D2DAFFA},{4294967295U,0xC0689276,4294967295U,5U,4294967295U,0xC0689276,4294967295U},{0x3846F263,0x1D2DAFFA,0x1D2DAFFA,0x3846F263,0x811FFBE6,8U,8U},{1U,0xC0689276,7U,0xC0689276,1U,0xC0689276,7U}};
static int32_t g_56[3][1][5] = {{{0xF520A048,0xF520A048,0xF520A048,0xF520A048,0xF520A048}},{{0xF520A048,0xF520A048,0xF520A048,0xF520A048,0xF520A048}},{{0xF520A048,0xF520A048,0xF520A048,0xF520A048,0xF520A048}}};
static int32_t *g_55 = &g_56[2][0][0];
static int32_t g_77 = (-9);
static int32_t * const *g_99 = (void*)0;
static int32_t * const **g_98 = &g_99;
static int32_t g_115 = 0;
static int8_t g_153 = (-1);
static int32_t g_256 = 0;
static int32_t *g_255 = &g_256;
static uint16_t g_347[9][10] = {{0x7E57,9U,0xE701,0x7E57,0xEDC8,0x7E57,0xE701,9U,0x7E57,1U},{0xB247,9U,0xF378,0xB247,0xEDC8,0U,9U,9U,0U,0xEDC8},{0xB247,0xE701,0xE701,0xB247,1U,0x7E57,9U,0xE701,0x7E57,0xEDC8},{0x7E57,9U,0xE701,0x7E57,0xEDC8,0x7E57,0xE701,9U,0x7E57,1U},{0xB247,9U,0xF378,0xB247,0xEDC8,0U,9U,9U,0U,0xEDC8},{0xB247,0xE701,0xE701,0xB247,1U,0x7E57,9U,0xE701,0x7E57,0xEDC8},{0x7E57,9U,0xE701,0x7E57,0xEDC8,0x7E57,0xE701,9U,0x7E57,1U},{0xB247,9U,0xF378,0xB247,0xEDC8,0U,9U,9U,0U,0xEDC8},{0xB247,0xE701,0xE701,0xB247,1U,0x7E57,9U,0xE701,0x7E57,0xEDC8}};
static int32_t *g_420[10] = {&g_256,&g_256,&g_256,&g_256,&g_256,&g_256,&g_256,&g_256,&g_256,&g_256};
static int32_t **g_515 = &g_420[3];
static int32_t ***g_514 = &g_515;
static int32_t ****g_513 = &g_514;
static int32_t *****g_512 = &g_513;
static int32_t *g_526 = &g_56[1][0][2];
static int8_t g_605 = 2;
static const int32_t *g_852 = &g_256;
static int32_t func_1(void);
static uint8_t func_17(const int32_t p_18, uint32_t p_19, int16_t p_20, const uint8_t p_21);
static const uint16_t func_24(int8_t p_25, uint8_t p_26);
static uint16_t func_35(int8_t p_36, uint32_t p_37, int32_t p_38);
static uint8_t func_40(uint8_t p_41);
static uint8_t func_42(uint16_t p_43, uint8_t p_44, int16_t p_45, int32_t p_46);
static uint32_t func_51(const uint32_t p_52, int32_t p_53);
static int32_t * func_58(uint8_t p_59, uint16_t p_60, int32_t * p_61);
static uint8_t func_64(int32_t p_65, const int32_t * p_66, int32_t ** p_67, uint32_t p_68);
static int32_t ** func_69(uint32_t p_70, int16_t p_71, uint16_t p_72, int32_t * p_73);
static int32_t func_1(void)
{
    uint8_t l_6 = 0x3E;
    int16_t l_23 = (-8);
    uint32_t l_47 = 0xED23C5AD;
    int32_t l_954 = (-2);
    const int32_t l_990 = 0x12C8482C;
    int32_t ***l_991 = &g_515;
    int8_t l_1079 = 0x6B;
    (*g_526) = (safe_rshift_func_int16_t_s_u((3U | (safe_add_func_uint16_t_u_u(l_6, (!(safe_sub_func_uint32_t_u_u((((safe_rshift_func_int16_t_s_u((g_12 ^ (safe_mul_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_s((func_17(g_12, g_12, ((~l_23) == func_24((safe_sub_func_uint16_t_u_u(((((0xA130DFDD && ((((safe_div_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(func_35((~func_40(func_42(g_12, l_6, g_12, l_47))), l_6, (*g_255)), l_47)), l_23)), l_23)) || g_115) <= l_23) <= 65527U)) | l_47) == g_347[2][5]) || 0x34), l_23)), l_23)), l_23) != g_347[2][8]), 8)) == l_23), 0x5978))), g_347[6][7])) && g_115) || l_47), 0x5240FBF0)))))), 14));
    for (l_47 = 0; (l_47 <= 9); l_47 += 1)
    {
        int32_t ***l_946 = &g_515;
        int32_t **l_952 = &g_420[3];
        int32_t *****l_993[5][9] = {{&g_513,&g_513,&g_513,&g_513,&g_513,&g_513,&g_513,&g_513,&g_513},{&g_513,&g_513,(void*)0,&g_513,&g_513,&g_513,&g_513,(void*)0,&g_513},{&g_513,&g_513,(void*)0,(void*)0,&g_513,&g_513,&g_513,(void*)0,(void*)0},{&g_513,&g_513,&g_513,(void*)0,&g_513,&g_513,&g_513,&g_513,(void*)0},{&g_513,&g_513,&g_513,&g_513,&g_513,&g_513,&g_513,&g_513,&g_513}};
        int32_t *l_1064 = &g_256;
        int i, j;
        for (g_115 = 0; g_115 < 3; g_115 += 1)
        {
            for (l_6 = 0; l_6 < 1; l_6 += 1)
            {
                for (g_77 = 0; g_77 < 5; g_77 += 1)
                {
                    g_56[g_115][l_6][g_77] = 0;
                }
            }
        }
        for (g_605 = 0; (g_605 <= 9); g_605 += 1)
        {
            int i;
            if (l_6)
                break;
            if (l_47)
                continue;
        }
        for (l_6 = 0; (l_6 <= 8); l_6 += 1)
        {
            int32_t * const *l_953 = &g_420[3];
            int32_t ****l_965[8][4][1] = {{{&g_514},{&g_514},{&l_946},{&l_946}},{{&g_514},{&g_514},{&l_946},{(void*)0}},{{&l_946},{&g_514},{&g_514},{&l_946}},{{&l_946},{&g_514},{&g_514},{&g_514}},{{&l_946},{&l_946},{&g_514},{&g_514}},{{&l_946},{(void*)0},{&l_946},{&g_514}},{{&g_514},{&l_946},{&l_946},{&g_514}},{{&g_514},{&g_514},{&l_946},{&l_946}}};
            int i, j, k;
        }
    }
    (*g_255) = ((0x40 < (((((g_256 < (safe_rshift_func_uint16_t_u_u(g_50[3][4], 1))) || ((safe_rshift_func_int16_t_s_s(8, 11)) <= g_56[0][0][3])) || (safe_mod_func_int8_t_s_s((safe_add_func_uint16_t_u_u(g_153, ((+((((safe_mod_func_int8_t_s_s((g_56[2][0][0] < (safe_sub_func_uint16_t_u_u(0x61C1, ((safe_unary_minus_func_uint8_t_u(0xEF)) < g_115)))), g_347[6][7])) && g_605) && l_954) && 0xAC9E)) && l_954))), (-6)))) && 0x30) == g_347[6][7])) ^ l_47);
    return l_1079;
}
static uint8_t func_17(const int32_t p_18, uint32_t p_19, int16_t p_20, const uint8_t p_21)
{
    uint32_t l_808 = 4294967293U;
    int32_t *l_809[8] = {&g_256,&g_256,&g_256,&g_256,&g_256,&g_256,&g_256,&g_256};
    int32_t l_831[1];
    int32_t ** const *l_832 = &g_515;
    const int32_t *l_878 = (void*)0;
    const int32_t ****l_914 = (void*)0;
    const int32_t *****l_913 = &l_914;
    const int32_t * const l_915 = &g_56[2][0][0];
    int32_t *l_934 = &g_77;
    int i;
    for (i = 0; i < 1; i++)
        l_831[i] = 2;
    (**g_514) = func_58(l_808, g_153, l_809[3]);
    l_809[3] = l_809[5];
    if ((safe_mod_func_uint16_t_u_u((safe_add_func_int32_t_s_s((safe_div_func_int8_t_s_s(((safe_unary_minus_func_uint16_t_u((safe_mod_func_int16_t_s_s(g_256, ((safe_add_func_int32_t_s_s((g_50[1][4] <= (-6)), p_21)) && ((safe_sub_func_int8_t_s_s(p_18, (0xC7 & (safe_sub_func_int8_t_s_s((safe_mul_func_int16_t_s_s(((safe_mul_func_int8_t_s_s((((((safe_add_func_int8_t_s_s(g_347[3][4], ((void*)0 != l_809[3]))) <= p_19) > p_21) && g_605) == 0x55CB60B8), g_605)) >= 1U), p_20)), g_115))))) != 0x07D7)))))) & 0U), g_347[1][5])), p_18)), l_831[0])))
    {
        int32_t ** const **l_833 = (void*)0;
        int32_t ** const **l_834 = &l_832;
        (*l_834) = l_832;
    }
    else
    {
        uint16_t l_842[2][3][7] = {{{0U,0x7373,0x923C,0xFF30,0x923C,0x7373,0U},{0U,0x7373,0x923C,0xFF30,0x923C,0x7373,0U},{0U,0x7373,0x923C,0xFF30,0x923C,0x7373,0U}},{{0U,0x7373,0x923C,0xFF30,0x923C,0x7373,0U},{0U,0x7373,0x923C,0xFF30,0x923C,0x7373,0U},{0U,0x7373,0x923C,0xFF30,0x923C,0x7373,0U}}};
        const int32_t *l_850 = &g_56[2][0][0];
        int8_t l_867 = (-1);
        int32_t ***l_883 = &g_515;
        int32_t l_927[10][6][4] = {{{(-1),5,(-1),0x785EBF66},{0x60D38B1A,0xFF5E8C16,0,(-1)},{0,(-1),0x9FCFA535,0},{(-2),1,0x95D10590,0},{3,0,7,0},{0x07514770,4,0,1}},{{0x60F591D6,0xF83B1392,0x60D38B1A,1},{0,0xDD698DE0,0,0x916986B0},{0xD4D0D83B,3,(-1),(-4)},{0,0x2D069136,0,0},{0xB91C12F7,0xB91C12F7,3,(-3)},{0xF52C56CD,0x0D08317E,0x60F591D6,(-1)}},{{0x60D38B1A,(-1),0,0x60F591D6},{(-3),(-1),(-1),(-1)},{(-1),0x0D08317E,0x95D10590,(-3)},{0x07514770,0xB91C12F7,0,0},{(-1),0x2D069136,0xF52C56CD,(-4)},{0x60F591D6,3,0x9FCFA535,0x916986B0}},{{(-3),0xDD698DE0,(-3),1},{0x9FCFA535,0xF83B1392,(-1),1},{(-1),4,3,0},{0xAA16818E,0,(-1),0},{0xF52C56CD,1,(-1),0},{0xD4D0D83B,(-1),(-3),(-1)}},{{0,0xFF5E8C16,(-1),0x785EBF66},{(-2),5,0,(-3)},{(-1),0,0xAA16818E,3},{(-1),(-1),0,0x139001B9},{(-2),3,(-1),1},{0,(-1),(-3),0xEB6AFBCE}},{{0xD4D0D83B,0x07514770,(-1),1},{0xF52C56CD,0x2D069136,(-1),3},{0xAA16818E,0,3,0},{(-1),1,(-1),(-1)},{0x9FCFA535,0xFF5E8C16,(-3),(-1)},{(-3),(-2),0x9FCFA535,0xF83B1392}},{{0x31C03DBE,0xD4D0D83B,(-3),0},{7,0x916986B0,0x916986B0,7},{0,(-1),(-1),0xA94BAF0B},{0x5A92FDC0,0xB91C12F7,(-1),0xFF5E8C16},{(-1),(-4),0,0xFF5E8C16},{0x95D10590,0xB91C12F7,0x31C03DBE,0xA94BAF0B}},{{(-3),(-1),0xAA16818E,7},{1,0x916986B0,0,0},{0,0xD4D0D83B,(-1),0xF83B1392},{0,0xDD698DE0,0,(-1)},{0x785EBF66,0x0D551E49,0x95D10590,(-1)},{0x31C03DBE,0x60D38B1A,0,0x785EBF66}},{{0,0x916986B0,0,0xAA16818E},{0xAA16818E,0x07514770,(-1),0x0D08317E},{0xDD698DE0,0,0xF52C56CD,0xFF5E8C16},{0x785EBF66,0x25903C3C,0x785EBF66,0x60F591D6},{0x95D10590,0xAA16818E,0x5A92FDC0,0xA5FD7708},{0,(-1),0,0xAA16818E}},{{0x916986B0,0xDDD13931,0,0x2D069136},{0,0x9FCFA535,0x5A92FDC0,0xF83B1392},{0x95D10590,0x0D551E49,0x785EBF66,0x5A92FDC0},{0x785EBF66,0x5A92FDC0,0xF52C56CD,0},{0xDD698DE0,0x60D38B1A,(-1),0},{0xAA16818E,0xDDD13931,0,0}}};
        int i, j, k;
        for (p_19 = (-19); (p_19 >= 51); ++p_19)
        {
            int32_t ** const **l_837 = &l_832;
            int32_t **l_846 = &l_809[4];
            (*l_837) = l_832;
            (*g_526) = (***g_514);
            for (g_77 = 4; (g_77 >= 1); g_77 -= 1)
            {
                uint32_t l_849 = 7U;
                const int32_t **l_866[6][9] = {{&g_852,&l_850,&l_850,&l_850,&g_852,&l_850,&l_850,&g_852,&l_850},{(void*)0,&g_852,(void*)0,(void*)0,&l_850,&l_850,(void*)0,(void*)0,&g_852},{&l_850,&l_850,&l_850,&l_850,&l_850,&l_850,&l_850,&l_850,&l_850},{&l_850,&l_850,(void*)0,(void*)0,&l_850,&l_850,&l_850,&l_850,&l_850},{&l_850,&l_850,&l_850,&l_850,&l_850,&g_852,&l_850,&l_850,&l_850},{&g_852,&g_852,&l_850,&l_850,(void*)0,&l_850,&l_850,&g_852,&g_852}};
                int32_t l_884 = 0x3DACD918;
                int i, j;
                if (((safe_div_func_uint32_t_u_u((safe_sub_func_int32_t_s_s(l_842[0][1][0], (***l_832))), (+(safe_lshift_func_int16_t_s_s(((void*)0 == l_846), p_19))))) & (0x4A <= (safe_lshift_func_uint16_t_u_s(l_849, 15)))))
                {
                    const int32_t **l_851 = (void*)0;
                    (*l_846) = (**g_514);
                    g_852 = l_850;
                    if (((safe_lshift_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(((*l_832) != (void*)0), (safe_rshift_func_int8_t_s_s((safe_mul_func_int8_t_s_s(((safe_lshift_func_int8_t_s_s(l_849, (~p_19))) ^ (((p_19 >= ((void*)0 != (**l_837))) && (safe_add_func_int8_t_s_s((0x92 == (l_866[1][4] == (*g_514))), l_867))) <= g_115)), 0xDF)), 1)))), p_18)) == p_20))
                    {
                        int32_t *l_868 = &g_56[1][0][4];
                        (*l_846) = (**l_832);
                        (*g_515) = l_868;
                        (*g_526) = (&l_832 == (*g_512));
                    }
                    else
                    {
                        if (p_18)
                            break;
                    }
                    (*g_526) = ((safe_mod_func_int16_t_s_s(1, (p_21 & (g_347[6][7] != (safe_div_func_int16_t_s_s((((((g_50[2][4] && (safe_mod_func_uint32_t_u_u((g_115 && (**l_846)), (safe_sub_func_uint16_t_u_u(((****l_837) == (l_866[4][1] != l_866[1][4])), p_19))))) & 4U) || g_56[2][0][0]) | g_256) < 0x332C), p_20)))))) ^ p_21);
                }
                else
                {
                    const int32_t *l_877 = &g_77;
                    for (l_867 = 0; (l_867 <= 5); l_867 += 1)
                    {
                        (*g_512) = (void*)0;
                        (*g_526) = p_20;
                        (***l_837) = (**g_514);
                    }
                    for (l_867 = 0; (l_867 <= 0); l_867 += 1)
                    {
                        int i;
                        g_852 = l_877;
                        g_852 = l_850;
                        return l_831[l_867];
                    }
                    l_878 = l_877;
                    return (*l_850);
                }
                if ((safe_sub_func_uint8_t_u_u(((-1) & ((safe_mod_func_uint16_t_u_u((**l_846), p_20)) & ((**l_832) == l_850))), p_18)))
                {
                    const uint16_t l_900 = 65535U;
                    int32_t * const l_903 = &g_77;
                    if (((l_883 == (void*)0) | p_21))
                    {
                        int32_t **l_885 = &l_809[1];
                        l_884 = ((*g_512) == &l_832);
                        (*g_515) = (**l_832);
                        (*l_883) = l_885;
                        (*g_255) = ((**l_885) == (safe_sub_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(g_605, ((safe_rshift_func_uint16_t_u_s((safe_div_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u(((safe_lshift_func_uint8_t_u_s(((*l_850) || (((safe_rshift_func_uint16_t_u_u((((*g_526) >= l_900) == (safe_sub_func_int8_t_s_s(((void*)0 != &g_515), 0x81))), ((void*)0 != (**l_837)))) & p_19) | 0xAB41C934)), 0)) >= g_50[0][5]), (**l_846))), 2)), (**l_846))) ^ (****l_837)))), g_347[6][7])));
                    }
                    else
                    {
                        (*g_255) = (-6);
                    }
                    (**l_832) = l_903;
                    (*g_515) = (*l_846);
                    if (((safe_mul_func_int8_t_s_s(g_12, ((((g_605 == ((safe_lshift_func_uint16_t_u_s((((~(safe_mul_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_u(g_256, 4)) || (&l_837 == l_913)), ((void*)0 == (*l_837))))) & (l_837 != (void*)0)) == (*l_903)), (**l_846))) && p_21)) != 0x96EA7130) > (*g_255)) <= p_19))) == p_20))
                    {
                        const int32_t **l_916 = &l_850;
                        (*g_255) = p_19;
                        (*l_916) = l_915;
                        (*g_526) = (0 & g_12);
                    }
                    else
                    {
                        (*g_255) = (**g_515);
                        return g_153;
                    }
                }
                else
                {
                    int32_t *l_917[8][1];
                    int i, j;
                    for (i = 0; i < 8; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_917[i][j] = &g_77;
                    }
                    for (g_605 = 4; (g_605 >= 1); g_605 -= 1)
                    {
                        (***l_837) = (***l_837);
                        (**l_883) = (**l_883);
                        (*g_515) = l_917[0][0];
                    }
                    if (p_20)
                    {
                        const int32_t * const *l_926 = (void*)0;
                        (*g_255) = ((safe_rshift_func_int8_t_s_s(((safe_add_func_uint8_t_u_u(((g_115 || (safe_lshift_func_uint8_t_u_u((+((safe_unary_minus_func_uint16_t_u(1U)) && ((void*)0 == (*g_512)))), (l_866[1][4] != l_926)))) & ((void*)0 != l_917[0][0])), (1U < l_927[6][3][0]))) && 0x23), 7)) || g_347[6][7]);
                        l_927[6][3][0] = ((l_837 != (*g_512)) && p_21);
                        (*g_526) = (-1);
                    }
                    else
                    {
                        (**l_832) = (***l_837);
                        if ((***l_883))
                            continue;
                        if (p_21)
                            continue;
                    }
                }
                if ((*g_255))
                    break;
            }
            (****l_837) = ((safe_rshift_func_int16_t_s_u(g_256, 13)) == (safe_lshift_func_int16_t_s_u((g_77 || (safe_rshift_func_uint16_t_u_u(p_20, (0x3597BB8C <= (*g_852))))), (0U ^ g_605))));
        }
    }
    (**l_832) = l_934;
    return (*l_934);
}
static const uint16_t func_24(int8_t p_25, uint8_t p_26)
{
    int32_t ****l_807[3][6] = {{&g_514,(void*)0,(void*)0,&g_514,(void*)0,(void*)0},{&g_514,(void*)0,(void*)0,&g_514,(void*)0,(void*)0},{&g_514,(void*)0,(void*)0,&g_514,(void*)0,(void*)0}};
    int i, j;
    (*g_512) = l_807[1][5];
    return g_50[3][2];
}
static uint16_t func_35(int8_t p_36, uint32_t p_37, int32_t p_38)
{
    const int32_t l_530 = 1;
    uint32_t l_535 = 0xD84D2C88;
    int32_t **l_570[5] = {&g_420[3],&g_420[3],&g_420[3],&g_420[3],&g_420[3]};
    int8_t l_746[10][4] = {{0xEA,0xEA,0x6A,0xEA},{0xEA,(-9),(-9),0xEA},{(-9),0xEA,(-9),(-9)},{0xEA,0xEA,0x6A,0xEA},{0xEA,0x6A,0x6A,(-9)},{0x6A,(-9),0x6A,0x6A},{(-9),(-9),0xEA,(-9)},{(-9),0x6A,0x6A,(-9)},{0x6A,(-9),0x6A,0x6A},{(-9),(-9),0xEA,(-9)}};
    int32_t *l_774 = &g_256;
    int32_t *l_804[3];
    int i, j;
    for (i = 0; i < 3; i++)
        l_804[i] = (void*)0;
    (**g_515) = (*g_526);
    (*****g_512) = l_530;
    for (g_77 = (-9); (g_77 > (-4)); g_77 = safe_add_func_uint16_t_u_u(g_77, 1))
    {
        int32_t **l_539 = &g_526;
        int32_t l_552 = (-1);
        uint32_t l_553 = 0U;
        int16_t l_600 = (-8);
        int32_t **** const l_613 = &g_514;
    }
    for (p_37 = 19; (p_37 >= 54); p_37 = safe_add_func_uint32_t_u_u(p_37, 1))
    {
        int32_t **** const l_801 = (void*)0;
        int32_t ** const *l_803 = &l_570[3];
        int32_t ** const **l_802 = &l_803;
        for (g_153 = 7; (g_153 >= 1); g_153 -= 1)
        {
            uint16_t l_777 = 0xC7A2;
            int32_t ****l_800 = &g_514;
            int i;
            l_774 = g_420[(g_153 + 2)];
            (****l_800) = (((0xDCFF6E80 > (((((safe_add_func_uint8_t_u_u(p_36, (l_777 < ((((safe_sub_func_uint16_t_u_u(((void*)0 == &g_513), ((safe_mul_func_int8_t_s_s(((((safe_lshift_func_int8_t_s_u(p_38, 2)) | (g_56[0][0][2] <= g_12)) && (safe_lshift_func_uint16_t_u_u((safe_add_func_int8_t_s_s((((safe_rshift_func_uint8_t_u_s(((((((safe_add_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(((safe_div_func_int16_t_s_s(((safe_div_func_uint16_t_u_u(((l_800 != l_801) <= g_56[2][0][3]), (****l_800))) > (-1)), 0x1111)) <= g_153), g_153)), 0x6E)), p_37)) || 0U) < p_38) != p_36) != 0x8F) && (*l_774)), g_605)) || p_38) && (-1)), g_115)), 14))) || p_38), p_38)) && p_37))) | 4294967295U) != p_36) == 0U)))) >= 1) || 0x17BA) && g_256) | 0x30AA0AFE)) <= (*l_774)) | (*l_774));
        }
        (*g_515) = (**g_514);
        for (p_36 = (-10); (p_36 < 13); p_36 = safe_add_func_uint16_t_u_u(p_36, 9))
        {
            (****l_802) = (**g_515);
        }
    }
    return g_12;
}
static uint8_t func_40(uint8_t p_41)
{
    int32_t *l_529 = &g_56[0][0][1];
    (*g_515) = l_529;
    l_529 = l_529;
    return p_41;
}
static uint8_t func_42(uint16_t p_43, uint8_t p_44, int16_t p_45, int32_t p_46)
{
    int8_t l_369 = (-7);
    int32_t l_409 = (-1);
    int32_t *l_412 = &g_56[2][0][0];
    uint8_t l_429 = 0x19;
    uint8_t l_472 = 0x2F;
    for (p_43 = 0; (p_43 < 56); ++p_43)
    {
        int8_t l_370 = (-1);
        const int16_t l_371 = 8;
        int32_t l_438 = 0x0E271EE9;
        int16_t l_459[1][2][2];
        int16_t l_499[9] = {0x4426,(-1),(-1),0x4426,(-1),(-1),0x4426,(-1),(-1)};
        int32_t *****l_500 = (void*)0;
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 2; j++)
            {
                for (k = 0; k < 2; k++)
                    l_459[i][j][k] = 1;
            }
        }
        for (p_45 = 0; (p_45 <= 5); p_45 += 1)
        {
            int i, j;
            return g_50[p_45][p_45];
        }
    }
    return p_45;
}
static uint32_t func_51(const uint32_t p_52, int32_t p_53)
{
    int32_t **l_57 = &g_55;
    uint32_t l_74 = 0x5762CC68;
    (*l_57) = g_55;
    (*l_57) = func_58((safe_mod_func_uint8_t_u_u(func_64((**l_57), &g_56[2][0][2], func_69(l_74, (!(((*l_57) != (void*)0) & p_52)), g_12, (*l_57)), g_56[2][0][0]), g_153)), g_50[0][5], g_255);
    return g_347[6][7];
}
static int32_t * func_58(uint8_t p_59, uint16_t p_60, int32_t * p_61)
{
    int32_t l_275 = 0x5826BE53;
    int32_t l_313 = (-10);
    int32_t *l_314 = &l_275;
    int32_t **l_325[3][9] = {{&g_55,&g_255,&g_255,&g_55,&g_255,&g_255,&g_55,&g_255,&g_255},{&g_55,&g_255,&g_255,&g_55,&g_255,&g_255,&g_55,&g_255,&g_255},{&g_55,&g_255,&g_255,&g_55,&g_255,&g_255,&g_55,&g_255,&g_255}};
    int32_t ***l_324 = &l_325[2][7];
    int32_t *l_346 = &g_77;
    int i, j;
    for (g_256 = 8; (g_256 >= (-20)); --g_256)
    {
        const int32_t l_263[5][4][5] = {{{0xB94EEF04,0x7B79E97E,0xB94EEF04,0,1},{0x467D7227,0,(-3),0x0E696E2D,0xA52FFC3B},{0x678DBA8A,0,(-1),0x38A90558,0x678DBA8A},{0xA52FFC3B,(-3),(-3),0xA52FFC3B,0x467D7227}},{{1,0x38A90558,0xB94EEF04,(-1),0xB94EEF04},{0xA52FFC3B,0,(-8),(-3),(-1)},{0x678DBA8A,(-1),0x1A15CE65,(-1),0x678DBA8A},{0x467D7227,0x0E696E2D,1,0xA52FFC3B,0}},{{0xB94EEF04,(-1),0xB94EEF04,0x38A90558,1},{(-1),0,0x0E696E2D,0x0E696E2D,0},{0x678DBA8A,0x38A90558,(-1),0,0x678DBA8A},{0,(-3),0x0E696E2D,0xA52FFC3B,(-1)}},{{1,0,0xB94EEF04,0x7B79E97E,0xB94EEF04},{0,0,1,(-3),0x467D7227},{0x678DBA8A,0x7B79E97E,0x1A15CE65,0x7B79E97E,0x678DBA8A},{(-1),0x0E696E2D,(-8),0xA52FFC3B,0xA52FFC3B}},{{0xB94EEF04,0x7B79E97E,0xB94EEF04,0,1},{0x467D7227,0,(-3),0x0E696E2D,0xA52FFC3B},{0x678DBA8A,0,(-1),0x38A90558,0x678DBA8A},{0xA52FFC3B,(-3),(-3),0xA52FFC3B,0x467D7227}}};
        int32_t *l_278 = &g_56[0][0][0];
        int32_t **l_297 = &l_278;
        int i, j, k;
        if (((((safe_lshift_func_int8_t_s_u(0x37, 4)) & (safe_mod_func_uint16_t_u_u(l_263[4][3][4], 0x3937))) > (safe_mod_func_uint16_t_u_u(((((((!(-1)) != (safe_lshift_func_uint8_t_u_s((((0x3AD1F110 < 0xC175E5F0) == ((safe_mod_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(252U, ((*p_61) == (l_263[4][3][4] && 4294967287U)))), l_263[4][3][4])) | 0xC8DEDF79)) | 0x7D8B), p_60))) || p_60) > l_263[4][3][4]) & p_60) && 0x0E4E), 0x2529))) < p_59))
        {
            int32_t **l_273 = &g_255;
            int32_t ***l_274 = &l_273;
            (*l_273) = p_61;
            if ((*p_61))
                break;
            l_274 = &l_273;
        }
        else
        {
            int32_t *l_276 = &g_56[2][0][0];
            (*l_276) = ((*g_255) | l_275);
            for (l_275 = 5; (l_275 >= 0); l_275 -= 1)
            {
                int32_t **l_279 = &g_55;
                uint32_t l_319 = 1U;
                int i, j;
                for (g_115 = 0; (g_115 <= 0); g_115 += 1)
                {
                    int32_t **l_277[5][10][5] = {{{&g_55,(void*)0,&g_55,(void*)0,&g_55},{&g_55,&g_55,&g_55,&g_55,&g_55},{&g_55,(void*)0,&g_55,(void*)0,&g_55},{&g_55,&g_55,&g_55,&g_55,&g_55},{&g_55,(void*)0,&g_55,(void*)0,&g_55},{&g_55,&g_55,&g_55,&g_55,&g_55},{&g_55,(void*)0,&g_55,(void*)0,&g_55},{&g_55,&g_55,&g_55,&g_55,&g_55},{&g_55,(void*)0,&g_55,(void*)0,&g_55},{&g_55,&g_55,&g_55,&g_55,&g_55}},{{&g_55,(void*)0,&g_55,(void*)0,&g_55},{&g_55,&g_55,&g_55,&g_55,&g_55},{&g_55,(void*)0,&g_55,(void*)0,&g_55},{&g_55,&g_55,&g_55,&g_55,&g_55},{&g_55,(void*)0,&g_55,(void*)0,&g_55},{&g_55,&g_55,&g_55,&g_55,&g_55},{&g_55,(void*)0,&g_55,(void*)0,&g_55},{&g_55,&g_55,&g_55,&g_55,&g_55},{&g_55,(void*)0,&g_55,(void*)0,&g_55},{&g_55,&g_55,&g_55,&g_55,&g_55}},{{&g_55,(void*)0,&g_55,(void*)0,&g_55},{&g_55,&g_55,&g_55,&g_55,&g_55},{&g_55,(void*)0,&g_55,(void*)0,&g_55},{&g_55,&g_55,&g_55,&g_55,&g_55},{&g_55,(void*)0,&g_55,(void*)0,&g_55},{&g_55,&g_55,&g_55,&g_55,&g_55},{&g_55,(void*)0,&g_55,(void*)0,&g_55},{&g_55,&g_55,&g_55,&g_55,&g_55},{&g_55,(void*)0,&g_55,(void*)0,&g_55},{&g_55,&g_55,&g_55,&g_55,&g_55}},{{&g_55,(void*)0,&g_55,(void*)0,&g_55},{&g_55,&g_55,&g_55,&g_55,&g_55},{&g_55,(void*)0,&g_55,(void*)0,&g_55},{&g_55,&g_55,&g_55,&g_55,&g_55},{&g_55,(void*)0,&g_55,(void*)0,&g_55},{&g_55,&g_55,&g_55,&g_55,&g_55},{&g_55,(void*)0,&g_55,(void*)0,&g_55},{&g_55,&g_55,&g_55,&g_55,&g_55},{&g_55,(void*)0,&g_55,(void*)0,&g_55},{&g_55,&g_55,&g_55,&g_55,&g_55}},{{&g_55,(void*)0,&g_55,(void*)0,&g_55},{&g_55,&g_55,&g_55,&g_55,&g_55},{&g_55,(void*)0,&g_55,(void*)0,&g_55},{&g_55,&g_55,&g_55,&g_55,&g_55},{&g_55,(void*)0,&g_55,(void*)0,&g_55},{&g_55,&g_55,&g_55,&g_55,&g_55},{&g_55,(void*)0,&g_55,(void*)0,&g_55},{&g_55,&g_55,&g_55,&g_55,&g_55},{&g_55,(void*)0,&g_55,(void*)0,&g_55},{&g_55,&g_55,&g_55,&g_55,&g_55}}};
                    int i, j, k;
                    l_278 = &g_56[(g_115 + 1)][g_115][(g_115 + 3)];
                }
                (*l_276) = ((g_50[l_275][(l_275 + 1)] & (((g_50[l_275][l_275] != (((*l_278) > ((l_279 != (*g_98)) >= ((safe_add_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s(((((-9) == ((void*)0 != p_61)) <= (p_60 >= g_56[2][0][0])) > p_60), 6)), 4294967295U)) | g_56[2][0][0]))) == g_153)) | g_12) > p_60)) | g_153);
                for (g_77 = 0; (g_77 >= 0); g_77 -= 1)
                {
                    int i, j, k;
                    g_56[(g_77 + 2)][g_77][(g_77 + 4)] = ((safe_mul_func_int16_t_s_s(1, (safe_mul_func_uint8_t_u_u(255U, g_56[(g_77 + 2)][g_77][(g_77 + 2)])))) & (safe_mod_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_s((&g_56[(g_77 + 1)][g_77][(g_77 + 3)] == (*l_279)), 0)) | ((((&l_275 == (void*)0) < (l_275 >= ((safe_unary_minus_func_uint8_t_u((safe_mul_func_int8_t_s_s((p_60 < (*p_61)), p_59)))) | 0x5CE6))) & p_59) < (*g_255))), p_59)));
                    for (g_153 = 0; (g_153 <= 0); g_153 += 1)
                    {
                        int32_t *l_298[10][7] = {{(void*)0,&g_56[2][0][0],(void*)0,&g_77,(void*)0,&g_56[2][0][0],(void*)0},{&g_256,(void*)0,&g_56[2][0][3],&l_275,&g_77,&g_56[(g_77 + 2)][g_77][(g_77 + 4)],(void*)0},{&g_77,(void*)0,&l_275,&l_275,(void*)0,&g_77,&g_256},{&g_56[2][0][0],&l_275,&g_56[2][0][3],&g_256,(void*)0,&g_77,&g_77},{&l_275,(void*)0,(void*)0,(void*)0,&l_275,&g_56[(g_77 + 2)][g_77][(g_77 + 4)],&g_56[2][0][0]},{(void*)0,&l_275,&g_77,(void*)0,&l_275,&g_56[2][0][0],&l_275},{&g_56[2][0][0],(void*)0,(void*)0,&g_56[2][0][0],(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&g_56[2][0][0],(void*)0,(void*)0,&g_56[2][0][0]},{&l_275,&g_56[2][0][0],&l_275,(void*)0,&g_77,&l_275,(void*)0},{&g_56[2][0][0],&g_56[(g_77 + 2)][g_77][(g_77 + 4)],&l_275,(void*)0,(void*)0,(void*)0,&l_275}};
                        int i, j;
                        (*l_279) = &l_275;
                    }
                    g_56[(g_77 + 2)][g_77][(g_77 + 3)] = (*p_61);
                    if ((*p_61))
                        break;
                }
                for (p_60 = 0; (p_60 <= 0); p_60 += 1)
                {
                    int i, j, k;
                    g_56[p_60][p_60][(p_60 + 1)] = (g_56[1][0][3] || ((*g_98) != l_279));
                    for (g_153 = 5; (g_153 >= 0); g_153 -= 1)
                    {
                        int i, j;
                        l_313 = (safe_mod_func_uint32_t_u_u(g_50[(p_60 + 2)][(g_153 + 1)], (((g_12 == (safe_add_func_uint16_t_u_u((~(safe_div_func_int16_t_s_s(p_59, (~(safe_sub_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(g_50[(p_60 + 2)][(g_153 + 1)], 0xF3B49258)), g_115)))))), ((p_61 != p_61) < (safe_mod_func_int8_t_s_s(p_59, p_59)))))) | 0U) && (*p_61))));
                        (*l_278) = ((l_314 == (void*)0) ^ ((safe_rshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(((void*)0 == (*g_98)), 3)), 4)) > l_319));
                        (*l_278) = g_50[(p_60 + 2)][(g_153 + 1)];
                        (**l_297) = (p_61 == (*l_279));
                    }
                }
            }
            return &g_77;
        }
        (*l_297) = &l_313;
        for (l_313 = (-18); (l_313 >= 11); l_313 = safe_add_func_uint8_t_u_u(l_313, 1))
        {
            int32_t **l_332 = &g_55;
            int32_t l_339[6];
            int32_t ****l_345[4] = {&l_324,&l_324,&l_324,&l_324};
            int i;
            for (i = 0; i < 6; i++)
                l_339[i] = 0x7F6E2287;
            if ((safe_mul_func_int16_t_s_s((0U | (&g_99 != l_324)), (safe_add_func_uint32_t_u_u(((safe_add_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((((((**l_297) & ((l_332 != (*g_98)) >= (((void*)0 == &g_99) || (((safe_div_func_int32_t_s_s((safe_add_func_int16_t_s_s((safe_mul_func_int8_t_s_s(0x31, p_60)), 1U)), (*p_61))) | 0xD0) & g_12)))) && l_339[3]) != g_56[0][0][0]) > p_59), 0x92)), p_60)) | p_60), p_59)))))
            {
                (*l_332) = (*l_297);
            }
            else
            {
                int16_t l_340 = 0xE248;
                if (l_340)
                    break;
                for (l_275 = 0; (l_275 != (-6)); l_275 = safe_sub_func_uint16_t_u_u(l_275, 6))
                {
                    for (g_77 = 6; (g_77 >= 11); ++g_77)
                    {
                        l_345[2] = &l_324;
                    }
                }
            }
            return p_61;
        }
    }
    l_346 = p_61;
    return (**l_324);
}
static uint8_t func_64(int32_t p_65, const int32_t * p_66, int32_t ** p_67, uint32_t p_68)
{
    int32_t * const *l_81[6][2];
    int32_t * const **l_82 = &l_81[2][0];
    int32_t l_178 = 0x460D0465;
    int32_t l_201 = (-8);
    uint32_t l_243 = 0x10F041E9;
    int i, j;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 2; j++)
            l_81[i][j] = &g_55;
    }
    (*l_82) = l_81[4][0];
    (*g_55) = (safe_mul_func_uint16_t_u_u(p_68, (safe_sub_func_uint16_t_u_u(p_65, (0xB8 > (safe_add_func_int16_t_s_s((p_65 | (safe_add_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_u(p_65, 6)) ^ (safe_sub_func_int32_t_s_s(((p_68 > p_68) | (g_50[2][3] < p_65)), (***l_82)))), 7U))), (-1))))))));
    if ((0x26 || (+g_77)))
    {
        l_82 = g_98;
        (*p_67) = (*p_67);
    }
    else
    {
        int16_t l_100[7][8] = {{(-9),0x320E,0xBAE3,(-1),2,(-2),0xF345,0xBAE3},{0x5C99,2,(-6),0xF077,(-6),2,0x5C99,0xA51E},{(-10),0xA51E,0xF345,2,0,0x263D,(-1),(-6)},{0x320E,0x71D5,1,0xBAE3,0,0x320E,9,0xF077},{(-10),0x2257,2,(-6),(-6),2,0x2257,(-10)},{0x5C99,(-1),0xA206,0xF345,2,0xC3B1,(-6),0xA206},{(-9),2,0xA51E,1,0xF345,0xC3B1,0x5C99,0x320E}};
        int32_t *l_102 = (void*)0;
        uint32_t l_149 = 0x8DCBC2B7;
        int32_t l_150 = (-1);
        int32_t **l_172[3];
        int32_t ** const *l_171 = &l_172[1];
        uint32_t l_230 = 0x0AC7219E;
        int32_t l_244 = 0x56994F7F;
        uint32_t l_246 = 0xEE17F405;
        int i, j;
        for (i = 0; i < 3; i++)
            l_172[i] = (void*)0;
        (**p_67) = l_100[4][0];
        if ((*g_55))
        {
            int32_t *l_101 = &g_56[2][0][0];
            (*p_67) = (*p_67);
            (**p_67) = (**p_67);
            (*p_67) = l_101;
            (*p_67) = l_102;
        }
        else
        {
            int16_t l_103 = (-9);
            uint32_t l_125 = 4294967292U;
            if ((*p_66))
            {
                int16_t l_111 = 0;
                if (l_103)
                {
                    int32_t l_110 = 0xDD72F777;
                    if ((safe_lshift_func_int8_t_s_u(p_65, ((safe_sub_func_int16_t_s_s((safe_add_func_int8_t_s_s(((l_110 & l_111) || ((((!0x4D29) & 1U) || ((void*)0 == &p_66)) | (l_110 <= (safe_lshift_func_uint8_t_u_s((0xC4802A3E == (**p_67)), 7))))), 0xF9)), g_50[3][4])) > g_115))))
                    {
                        uint32_t l_122[10][7] = {{0x41A119B8,0xF77C9A86,8U,0x41A119B8,8U,0xF77C9A86,0x41A119B8},{0xC871CFEE,0x41A119B8,0xF77C9A86,8U,0x41A119B8,8U,0xF77C9A86},{0x41A119B8,0x41A119B8,0x2D78A3DA,0xBBA09B98,4294967287U,0x2D78A3DA,4294967287U},{0xBBA09B98,0xF77C9A86,0xF77C9A86,0xBBA09B98,8U,0xC871CFEE,0xBBA09B98},{0xC871CFEE,4294967287U,8U,8U,4294967287U,2U,0x2D78A3DA},{8U,0xF77C9A86,0x41A119B8,0xC871CFEE,0xC871CFEE,0x41A119B8,0xF77C9A86},{8U,0x2D78A3DA,2U,8U,4294967290U,4294967290U,8U},{2U,0xF77C9A86,2U,4294967290U,0xF77C9A86,0x2D78A3DA,0x2D78A3DA},{0xF77C9A86,8U,0x41A119B8,8U,0xF77C9A86,0x41A119B8,0xC871CFEE},{0xC871CFEE,0x2D78A3DA,4294967290U,0xC871CFEE,4294967290U,0x2D78A3DA,0xC871CFEE}};
                        int i, j;
                        (**p_67) = (-9);
                        (*g_55) = (((p_65 && (safe_lshift_func_int16_t_s_s((safe_mod_func_int8_t_s_s(g_77, (safe_mod_func_uint16_t_u_u(l_103, 8)))), 1))) || l_122[5][5]) != (safe_mul_func_uint8_t_u_u((l_125 >= g_56[2][0][2]), l_122[5][5])));
                    }
                    else
                    {
                        (*p_67) = (void*)0;
                    }
                }
                else
                {
                    int32_t *l_128 = &g_77;
                    for (g_115 = (-3); (g_115 >= (-1)); g_115++)
                    {
                        (*p_67) = l_128;
                    }
                    (**p_67) = (safe_lshift_func_uint8_t_u_u(p_65, (((safe_mod_func_int16_t_s_s((safe_mul_func_int16_t_s_s(g_12, ((safe_sub_func_uint32_t_u_u((!(safe_rshift_func_int8_t_s_u(((((p_65 <= (0U <= 0x34CB066D)) >= ((safe_sub_func_int32_t_s_s((**p_67), (*g_55))) >= l_111)) | 0xB1) || 1U), 6))), l_125)) >= g_77))), g_115)) <= 1) >= 0x85BF)));
                }
            }
            else
            {
                (*g_55) = (*p_66);
                return p_65;
            }
        }
        for (g_115 = 0; (g_115 != 23); g_115++)
        {
            uint8_t l_146 = 0xED;
            int32_t l_168[4][4];
            int32_t ***l_179[5][8][6] = {{{(void*)0,&l_172[1],(void*)0,&l_172[0],&l_172[2],&l_172[0]},{&l_172[1],&l_172[1],&l_172[1],&l_172[1],&l_172[1],&l_172[0]},{&l_172[2],&l_172[1],(void*)0,&l_172[1],(void*)0,&l_172[1]},{&l_172[1],&l_172[1],&l_172[0],&l_172[1],(void*)0,&l_172[1]},{&l_172[2],&l_172[1],&l_172[1],&l_172[1],&l_172[2],&l_172[1]},{&l_172[1],&l_172[1],&l_172[1],&l_172[0],(void*)0,&l_172[0]},{(void*)0,&l_172[1],(void*)0,&l_172[1],(void*)0,&l_172[0]},{(void*)0,&l_172[1],&l_172[1],&l_172[1],&l_172[1],&l_172[1]}},{{(void*)0,&l_172[1],&l_172[1],&l_172[1],&l_172[2],&l_172[1]},{(void*)0,&l_172[1],&l_172[0],&l_172[1],(void*)0,&l_172[1]},{(void*)0,&l_172[1],(void*)0,&l_172[0],&l_172[2],&l_172[0]},{&l_172[1],&l_172[1],&l_172[1],&l_172[1],&l_172[1],&l_172[0]},{&l_172[2],&l_172[1],(void*)0,&l_172[1],(void*)0,&l_172[1]},{&l_172[1],&l_172[1],&l_172[0],&l_172[1],(void*)0,&l_172[1]},{&l_172[2],&l_172[1],&l_172[1],&l_172[1],&l_172[2],&l_172[1]},{&l_172[1],&l_172[1],&l_172[1],&l_172[0],(void*)0,&l_172[0]}},{{(void*)0,&l_172[1],(void*)0,&l_172[1],(void*)0,&l_172[0]},{(void*)0,&l_172[1],&l_172[1],&l_172[1],&l_172[1],&l_172[1]},{(void*)0,&l_172[1],&l_172[1],&l_172[1],&l_172[2],&l_172[1]},{(void*)0,&l_172[1],&l_172[0],&l_172[1],(void*)0,&l_172[1]},{(void*)0,&l_172[1],(void*)0,&l_172[0],&l_172[2],&l_172[0]},{&l_172[1],&l_172[1],&l_172[1],&l_172[1],&l_172[1],&l_172[0]},{&l_172[2],&l_172[1],(void*)0,&l_172[1],(void*)0,&l_172[1]},{&l_172[1],&l_172[1],&l_172[0],&l_172[1],(void*)0,&l_172[1]}},{{&l_172[2],&l_172[1],&l_172[1],&l_172[1],&l_172[2],&l_172[1]},{&l_172[1],&l_172[1],&l_172[1],&l_172[0],(void*)0,&l_172[1]},{&l_172[1],&l_172[1],&l_172[1],&l_172[0],(void*)0,&l_172[1]},{&l_172[1],&l_172[1],&l_172[1],&l_172[1],&l_172[1],&l_172[1]},{(void*)0,&l_172[1],&l_172[2],&l_172[1],&l_172[2],&l_172[0]},{&l_172[1],&l_172[0],(void*)0,&l_172[0],&l_172[1],&l_172[1]},{&l_172[1],&l_172[0],(void*)0,&l_172[1],&l_172[2],&l_172[1]},{&l_172[0],&l_172[1],&l_172[0],&l_172[0],&l_172[1],&l_172[1]}},{{(void*)0,&l_172[1],(void*)0,&l_172[1],(void*)0,&l_172[1]},{&l_172[1],&l_172[1],(void*)0,&l_172[1],(void*)0,&l_172[0]},{(void*)0,&l_172[0],&l_172[2],&l_172[0],(void*)0,&l_172[1]},{&l_172[0],&l_172[0],&l_172[1],&l_172[1],(void*)0,&l_172[1]},{&l_172[1],&l_172[1],&l_172[1],&l_172[0],(void*)0,&l_172[1]},{&l_172[1],&l_172[1],&l_172[1],&l_172[1],&l_172[1],&l_172[1]},{(void*)0,&l_172[1],&l_172[2],&l_172[1],&l_172[2],&l_172[0]},{&l_172[1],&l_172[0],(void*)0,&l_172[0],&l_172[1],&l_172[1]}}};
            uint32_t l_200[8] = {0x104EED90,0x104EED90,0x104EED90,0x104EED90,0x104EED90,0x104EED90,0x104EED90,0x104EED90};
            int i, j, k;
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 4; j++)
                    l_168[i][j] = 0;
            }
            l_146 = 0x9EBDDF90;
            if (((safe_mod_func_int16_t_s_s((((0x9F <= (((l_149 != g_50[5][0]) ^ l_150) | l_146)) & (g_56[2][0][0] != ((0xA4A936FB ^ (p_65 ^ ((safe_mul_func_uint16_t_u_u(g_153, g_115)) && p_65))) != 0x55))) > p_65), l_146)) != l_146))
            {
                uint8_t l_154 = 3U;
                int32_t * const l_212[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int i;
                l_154 = 8;
                for (p_68 = 0; (p_68 <= 1); p_68 += 1)
                {
                    int32_t l_177 = 1;
                    int32_t **l_185 = &l_102;
                    int i, j;
                    l_168[3][1] = ((0x85 == ((-9) >= (safe_add_func_int8_t_s_s(g_153, p_65)))) < (((+((safe_add_func_int32_t_s_s((safe_mul_func_int16_t_s_s(1, (g_77 == (p_65 | (safe_lshift_func_uint8_t_u_u((safe_add_func_int8_t_s_s(((l_154 > (&p_66 == (void*)0)) >= l_154), p_68)), 2)))))), 0U)) > g_153)) != p_65) != p_68));
                    if ((*p_66))
                        continue;
                    if ((safe_lshift_func_int16_t_s_u(((((*g_98) == (void*)0) == ((&p_67 != &g_99) < ((void*)0 != &p_67))) != l_154), ((*g_98) == (void*)0))))
                    {
                        int32_t *l_176 = &g_56[0][0][4];
                        (*p_67) = l_102;
                        (*l_176) = (((l_171 != (void*)0) ^ (+(safe_div_func_uint32_t_u_u(((((0x16F78275 >= (((*g_98) == (void*)0) < (((4294967293U != ((void*)0 != l_176)) >= (-5)) || l_177))) || g_50[2][4]) | (*l_176)) >= p_68), l_178)))) > g_77);
                        (*l_176) = ((l_179[1][2][1] != &g_99) ^ (safe_sub_func_int32_t_s_s((safe_add_func_int8_t_s_s((+((((((*l_171) != l_185) != ((safe_add_func_uint32_t_u_u((g_153 <= g_12), (0x655B79E8 < ((safe_div_func_uint16_t_u_u((0x31CC || ((((safe_add_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(((((safe_lshift_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((g_77 || 1U), l_200[0])), p_65)) > 0U) & (-8)) > p_68), 2)), g_56[1][0][0])) | (*l_176)) > p_65) == l_154)), g_153)) > l_154)))) || l_154)) > l_154) == g_56[2][0][0]) | l_154)), l_201)), (*l_176))));
                        (*l_176) = (safe_mul_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u((((((g_56[2][0][0] > (safe_lshift_func_int16_t_s_s(g_153, 13))) < 0x0AC00048) && (g_153 ^ p_68)) > g_56[2][0][0]) ^ ((g_56[0][0][4] < ((safe_lshift_func_int8_t_s_u(((safe_rshift_func_int8_t_s_s(((l_212[3] == (void*)0) || 0U), 0)) <= (*l_176)), p_68)) != 3)) < 255U)), g_50[5][1])) != g_153), p_65));
                    }
                    else
                    {
                        return p_65;
                    }
                    g_56[2][0][0] = (safe_mul_func_uint16_t_u_u(((*p_67) == &g_56[2][0][0]), (((((g_56[2][0][0] >= (p_65 || (p_68 & (((g_153 && (safe_lshift_func_int16_t_s_s(g_56[2][0][0], (safe_lshift_func_uint16_t_u_s(((safe_rshift_func_uint16_t_u_u(((void*)0 != &p_67), p_68)) | g_12), p_68))))) & 0x35) ^ g_56[2][0][0])))) > (-7)) && g_50[5][6]) < p_65) ^ g_77)));
                    for (l_154 = 0; (l_154 <= 0); l_154 += 1)
                    {
                        int i, j, k;
                        (*p_67) = &g_56[l_154][l_154][(p_68 + 2)];
                        g_56[p_68][l_154][(l_154 + 4)] = 0x05D245C5;
                        g_56[l_154][l_154][p_68] = (*p_66);
                    }
                }
                if (g_56[2][0][3])
                    break;
            }
            else
            {
                uint32_t l_245 = 4294967295U;
                if ((0x4C >= ((safe_add_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((safe_add_func_int32_t_s_s((((!l_230) != 0x58D0) == ((p_65 & ((*p_66) < (safe_lshift_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_s((safe_div_func_uint16_t_u_u(6U, (safe_div_func_uint16_t_u_u((((((-1) & ((safe_add_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u(0x8D39, l_243)), p_65)) > p_65)) | 1) | p_68) || p_68), p_68)))), l_244)) ^ 0), p_68)))) == l_245)), l_246)), p_65)), (-1))), p_65)) || 0xAED0E2EE)))
                {
                    return p_65;
                }
                else
                {
                    int32_t **l_253 = (void*)0;
                    int32_t *l_254 = (void*)0;
                    g_56[2][0][0] = ((safe_mod_func_uint16_t_u_u(((safe_sub_func_uint8_t_u_u(4U, (safe_mod_func_uint16_t_u_u(p_68, p_68)))) | (0x5DDA6299 == (l_253 == &p_66))), 0x01AD)) <= ((void*)0 != l_254));
                    if ((*p_66))
                        break;
                }
                if ((*p_66))
                    break;
                g_77 = (0xB8B9 > p_65);
            }
            if ((*p_66))
                break;
        }
        g_56[0][0][0] = 1;
    }
    (*p_67) = (*p_67);
    return p_65;
}
static int32_t ** func_69(uint32_t p_70, int16_t p_71, uint16_t p_72, int32_t * p_73)
{
    int32_t *l_76[2][7][2] = {{{&g_77,&g_77},{&g_77,&g_77},{&g_77,&g_77},{&g_77,&g_77},{&g_77,&g_77},{&g_77,&g_77},{&g_77,&g_77}},{{&g_77,&g_77},{&g_77,&g_77},{&g_77,&g_77},{&g_77,&g_77},{&g_77,&g_77},{&g_77,&g_77},{&g_77,&g_77}}};
    int32_t **l_79[9] = {&g_55,&g_55,&g_55,&g_55,&g_55,&g_55,&g_55,&g_55,&g_55};
    int32_t ***l_78 = &l_79[7];
    int32_t **l_80 = &l_76[1][0][0];
    int i, j, k;
    g_77 = ((void*)0 != p_73);
    g_77 = (*g_55);
    l_78 = l_78;
    return &g_55;
}
int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    g_55 = 0;
    g_515 = 0;
    csmith_sink_ = g_12;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 7; j++)
        {
            csmith_sink_ = g_50[i][j];
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 5; k++)
            {
                csmith_sink_ = g_56[i][j][k];
            }
        }
    }
    csmith_sink_ = g_77;
    csmith_sink_ = g_115;
    csmith_sink_ = g_153;
    csmith_sink_ = g_256;
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 10; j++)
        {
            csmith_sink_ = g_347[i][j];
        }
    }
    csmith_sink_ = g_605;
    platform_main_end(0,0);
    return 0;
}
