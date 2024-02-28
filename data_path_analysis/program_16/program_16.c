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
static uint32_t g_28 = 1U;
static int8_t g_46 = 0xF3;
static int8_t g_49 = 6;
static int32_t g_73 = 0x1EC8F949;
static int32_t *g_72 = &g_73;
static int16_t g_79 = 1;
static uint32_t g_85 = 4294967288U;
static int32_t *g_98 = (void*)0;
static int32_t **g_97 = &g_98;
static uint32_t g_127 = 0x9CB9CEB5;
static uint32_t g_137 = 0xE501E45A;
static int32_t g_140 = 6;
static int32_t *g_139 = &g_140;
static uint32_t g_155 = 4294967295U;
static uint32_t *g_154 = &g_155;
static uint8_t g_158 = 0xFC;
static uint8_t *g_180 = &g_158;
static int32_t ***g_195 = &g_97;
static int32_t ***g_196 = (void*)0;
static int32_t ****g_295 = &g_195;
static int32_t *****g_294 = &g_295;
static uint8_t g_296 = 1U;
static uint32_t *g_403 = (void*)0;
static int32_t g_406 = 5;
static int8_t g_416 = 0x17;
static uint32_t **g_477 = &g_154;
static uint32_t ***g_476 = &g_477;
static int32_t **g_480 = (void*)0;
static uint32_t g_483 = 8U;
static uint32_t g_503 = 1U;
static uint16_t g_537 = 0x9135;
static uint32_t g_590 = 0xCB4998A9;
static uint32_t g_594 = 4294967291U;
static int16_t *g_684 = (void*)0;
static int16_t **g_683 = &g_684;
static int32_t *g_724 = &g_73;
static int32_t ****g_749 = &g_195;
static int8_t g_811 = 0x4A;
static int16_t g_959 = 6;
static int8_t g_973 = (-1);
static uint32_t ****g_995 = &g_476;
static uint32_t *****g_994 = &g_995;
static int16_t g_1044 = 0x392D;
static int16_t **g_1051 = &g_684;
static uint8_t g_1172 = 0U;
static int16_t ***g_1180 = &g_1051;
static int8_t g_1289 = 0;
static int32_t *g_1411 = &g_406;
static uint32_t *g_1420 = &g_503;
static int32_t g_1485 = 0xE93C14E4;
static uint16_t g_1631 = 0x6C50;
static uint16_t g_1684 = 6U;
static int32_t ***g_1696 = (void*)0;
static int32_t ****g_1695 = &g_1696;
static uint16_t *g_1700 = &g_537;
static uint16_t **g_1699 = &g_1700;
static int32_t func_1(void);
static int32_t func_2(int16_t p_3, uint16_t p_4, int16_t p_5, uint32_t p_6);
static uint32_t func_8(uint32_t p_9, int8_t p_10, uint32_t p_11);
static uint32_t func_12(uint16_t p_13, uint32_t p_14);
static int8_t func_23(int32_t p_24, uint16_t p_25, uint16_t p_26, int8_t p_27);
static uint16_t func_30(uint32_t p_31, uint32_t p_32);
static uint8_t func_36(uint32_t p_37, int32_t p_38, int32_t p_39, uint32_t p_40);
static int32_t func_50(uint8_t p_51, int32_t p_52, int32_t * p_53);
static uint16_t func_61(int8_t * p_62, int32_t * p_63, int32_t * p_64, int32_t * p_65, uint16_t p_66);
static int8_t * func_67(int32_t * p_68, uint16_t p_69, uint32_t p_70, int8_t p_71);
static int32_t func_1(void)
{
    uint32_t l_29 = 1U;
    int8_t *l_45 = &g_46;
    int8_t *l_47 = (void*)0;
    int8_t *l_48 = &g_49;
    uint16_t *l_750 = &g_537;
    uint32_t *l_971 = (void*)0;
    uint32_t *l_972 = &g_590;
    int16_t **l_1392 = &g_684;
    int32_t l_1474 = 3;
    uint32_t l_1501 = 4294967295U;
    uint32_t l_1503 = 4294967295U;
    int32_t l_1553 = (-1);
    uint32_t ***l_1574 = &g_477;
    uint32_t l_1674 = 0U;
    int32_t *l_1708 = &g_140;
    int32_t l_1709 = 0x166EC292;
    if (func_2(((safe_unary_minus_func_uint32_t_u(func_8(((*l_972) = func_12(((safe_lshift_func_uint16_t_u_s((safe_sub_func_int32_t_s_s(((((safe_rshift_func_uint8_t_u_s((safe_add_func_int16_t_s_s(0xF80C, (((((func_23(g_28, l_29, ((*l_750) = func_30((~((safe_mod_func_int8_t_s_s((func_36(((((safe_add_func_int32_t_s_s((0x40C3 || g_28), (((*l_48) = (g_28 >= (safe_sub_func_int8_t_s_s(((*l_45) = g_28), 1)))) < 255U))) | 0xAD05) , g_28) , 1U), g_28, g_28, g_28) & g_28), l_29)) != 0x024A44AA)), g_28)), g_594) > l_29) & 0U) < 0x84) != l_29) >= l_29))), 1)) && l_29) , l_29) ^ 4294967295U), l_29)), 8)) , 0xFC5B), l_29)), g_973, l_29))) | g_1172), g_1044, g_1172, l_29))
    {
        int8_t l_1301 = 0;
        return l_1301;
    }
    else
    {
        uint16_t l_1304 = 0U;
        int16_t **l_1322 = &g_684;
        int32_t *l_1325 = &g_73;
        int32_t l_1330 = 0xAA0B7848;
        uint32_t l_1539 = 1U;
        int8_t l_1598 = 0;
        uint32_t **l_1663 = &g_1420;
        int16_t l_1679 = 0;
        for (g_28 = 10; (g_28 != 15); g_28 = safe_add_func_int8_t_s_s(g_28, 5))
        {
            uint32_t l_1321 = 0x18D44DA3;
            int32_t *l_1423 = &g_73;
            uint8_t l_1451 = 255U;
            l_1304 = 1;
            for (g_46 = 17; (g_46 >= (-18)); g_46 = safe_sub_func_int8_t_s_s(g_46, 7))
            {
                uint16_t l_1318 = 0x1969;
                uint32_t l_1363 = 0xAF5A6C62;
                uint16_t l_1380 = 1U;
                int32_t *l_1410 = (void*)0;
                uint32_t *l_1421 = &g_503;
                uint32_t l_1450 = 0xA9AC4F42;
                int32_t l_1452 = (-5);
                int32_t *l_1456 = (void*)0;
            }
        }
        for (g_85 = 13; (g_85 == 10); g_85 = safe_sub_func_int32_t_s_s(g_85, 1))
        {
            uint32_t l_1483 = 0U;
            uint16_t l_1484 = 65533U;
            uint16_t l_1486 = 0U;
            uint16_t *l_1487 = &l_1486;
            uint8_t l_1499 = 249U;
            int32_t l_1500 = 0;
            int32_t l_1502 = 0x9B5EBDB2;
            uint8_t *l_1517 = &l_1499;
            int16_t ***l_1554 = &g_1051;
            uint8_t l_1558 = 0x19;
            int32_t **l_1560 = &g_1411;
            int32_t ***l_1559 = &l_1560;
            uint8_t l_1599 = 255U;
            int8_t l_1602 = (-1);
            uint16_t l_1694 = 65535U;
        }
    }
    return l_1709;
}
static int32_t func_2(int16_t p_3, uint16_t p_4, int16_t p_5, uint32_t p_6)
{
    int32_t *l_1300 = (void*)0;
    l_1300 = (void*)0;
    return p_6;
}
static uint32_t func_8(uint32_t p_9, int8_t p_10, uint32_t p_11)
{
    int32_t *l_974 = (void*)0;
    int32_t *l_990 = (void*)0;
    uint32_t *****l_997 = &g_995;
    uint32_t *l_1021 = &g_85;
    int32_t l_1023 = 9;
    int32_t *****l_1046 = &g_295;
    uint32_t l_1074 = 0x15264404;
    uint32_t l_1135 = 9U;
    int16_t l_1264 = 0x7BA1;
    uint16_t *l_1267 = (void*)0;
    uint16_t **l_1266 = &l_1267;
    uint16_t ***l_1268 = &l_1266;
    int32_t l_1280 = 0x9405B68E;
    uint32_t l_1298 = 0x253FC9E7;
    uint16_t *l_1299 = (void*)0;
    l_974 = ((***g_749) = l_974);
    for (g_158 = 0; (g_158 < 14); g_158 = safe_add_func_int16_t_s_s(g_158, 4))
    {
        uint8_t *l_981 = &g_296;
        int32_t l_982 = 7;
        int16_t **l_987 = &g_684;
        int16_t ***l_988 = &g_683;
        int16_t *l_989 = &g_959;
        uint32_t *****l_996 = &g_995;
        int32_t l_1002 = 1;
        int8_t l_1003 = 0xED;
        int32_t *****l_1045 = &g_749;
        int32_t l_1087 = 0x3E00B2B2;
        uint16_t l_1160 = 0U;
        int32_t l_1222 = 0x9D1841F0;
        if (((safe_add_func_int8_t_s_s((safe_add_func_uint8_t_u_u(g_503, ((*l_981) = 9U))), (p_9 | ((*g_724) = (l_982 , ((safe_mul_func_int16_t_s_s(((*l_989) = (safe_sub_func_int16_t_s_s(0x0FE2, (&g_684 != ((*l_988) = l_987))))), (((***g_749) = l_974) != (l_990 = l_974)))) != 0xAE)))))) , 0xF408AD66))
        {
            int32_t *l_991 = (void*)0;
            int32_t *l_998 = &g_406;
            int32_t **l_1001 = &l_998;
            l_974 = ((**g_477) , l_991);
            (*g_97) = &l_982;
            l_1002 = (((l_982 = ((*l_989) = ((((safe_mod_func_uint8_t_u_u(0U, 0x51)) > ((((*l_998) = (g_994 == (l_997 = l_996))) , p_9) || ((safe_lshift_func_int8_t_s_u(((p_9 >= p_9) > p_11), ((((((*l_1001) = (void*)0) == l_974) != p_11) , &g_406) != &g_406))) , l_982))) && l_982) <= g_811))) || (-1)) || p_11);
            if (l_1003)
                break;
        }
        else
        {
            int32_t l_1022 = 1;
            uint32_t **l_1028 = &g_403;
            if (p_9)
                break;
            l_1023 = (safe_div_func_int32_t_s_s(((safe_div_func_uint8_t_u_u((safe_div_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(((((**g_994) != (**l_997)) & ((g_49 != 1) ^ (l_1002 = ((safe_lshift_func_uint16_t_u_u(0x53E1, 1)) , (safe_rshift_func_int8_t_s_u((!((safe_add_func_uint16_t_u_u((p_9 & (safe_mul_func_uint16_t_u_u(((0xBE55 | ((((((****l_996) = &p_11) != l_1021) || p_9) && 0x2E) , (-1))) & l_1003), l_1003))), p_9)) , l_1022)), p_10)))))) == p_11), g_959)), l_982)), l_1022)) , p_9), l_1003));
            if (p_10)
            {
                return p_11;
            }
            else
            {
                uint32_t l_1024 = 0x5AEF35CA;
                int32_t l_1025 = 0;
                (*g_72) = (l_1024 , (((l_1025 = p_10) , (safe_lshift_func_int8_t_s_u((p_11 , (l_1028 != (void*)0)), 3))) , l_1022));
            }
            (*g_995) = (**l_996);
        }
        (**g_195) = &l_1002;
    }
    (*l_1268) = l_1266;
    (***g_295) = (((*g_139) = (((safe_mul_func_int16_t_s_s((safe_div_func_uint32_t_u_u((((+(-1)) < (safe_mod_func_int32_t_s_s(((*g_724) = (safe_add_func_int32_t_s_s(9, (!((p_9 < (p_9 < ((~l_1280) >= (((safe_mul_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((safe_add_func_int8_t_s_s((safe_mul_func_int16_t_s_s(g_1289, (((((((safe_sub_func_uint32_t_u_u((safe_add_func_uint32_t_u_u(g_503, p_11)), (safe_div_func_int8_t_s_s(((g_537 = ((safe_mul_func_int8_t_s_s(l_1298, p_9)) >= p_9)) != p_10), (-3))))) == 9) >= p_11) , (void*)0) != &g_403) <= l_1298) <= p_9))), 8U)), p_10)), g_1289)) , (***l_997)) == (*g_476))))) == p_11))))), p_9))) && g_85), 0x6CC4F546)), 0)) <= p_10) , p_11)) , (void*)0);
    return p_11;
}
static uint32_t func_12(uint16_t p_13, uint32_t p_14)
{
    int32_t *l_948 = &g_73;
    int16_t *l_957 = &g_79;
    int16_t *l_958 = &g_959;
    int32_t l_960 = 0x4248B175;
    int8_t *l_969 = &g_46;
    uint8_t *l_970 = &g_158;
    (**g_195) = l_948;
    (*g_72) = (0xA9 && (g_49 = ((*l_948) , ((safe_sub_func_uint8_t_u_u((((safe_lshift_func_int8_t_s_s(0, 5)) > (safe_sub_func_int32_t_s_s(p_13, ((safe_rshift_func_uint8_t_u_s((((((*g_724) > ((l_960 = ((*l_958) = ((*l_957) = (*l_948)))) != (safe_rshift_func_uint16_t_u_u((safe_mod_func_int16_t_s_s(((void*)0 != &g_811), ((((*l_970) = (((*l_969) = ((safe_mod_func_uint16_t_u_u(((((safe_add_func_uint32_t_u_u(((&g_749 == (void*)0) == (-1)), 0x8D4E32D3)) < 0x47DE) || 1) == (*l_948)), (*l_948))) ^ (*l_948))) != (*l_948))) && (*l_948)) && p_14))), 15)))) | g_296) > 0x48) , 0xE1), 4)) && (*l_948))))) , p_13), (-1))) <= p_13))));
    (***g_749) = &l_960;
    return p_13;
}
static int8_t func_23(int32_t p_24, uint16_t p_25, uint16_t p_26, int8_t p_27)
{
    int32_t l_753 = 0x2E5B7DD7;
    int32_t ****l_768 = &g_195;
    uint32_t *l_777 = &g_85;
    uint32_t *l_778 = &g_127;
    uint32_t *l_805 = &g_503;
    uint32_t l_806 = 0x0DBDDA42;
    uint16_t *l_807 = (void*)0;
    uint16_t *l_808 = (void*)0;
    uint16_t *l_809 = &g_537;
    int8_t *l_810 = &g_46;
    uint8_t *l_812 = &g_296;
    uint16_t l_838 = 0x7751;
    int32_t l_896 = (-7);
    int16_t **l_928 = &g_684;
    int16_t l_947 = (-10);
    for (g_296 = 0; (g_296 >= 29); g_296 = safe_add_func_int32_t_s_s(g_296, 9))
    {
        return g_503;
    }
    (*g_139) = ((l_753 | (safe_lshift_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((safe_mul_func_int16_t_s_s(((safe_lshift_func_int16_t_s_u(((safe_add_func_uint8_t_u_u(l_753, ((safe_add_func_int32_t_s_s(p_27, ((p_27 > (safe_mul_func_uint8_t_u_u((((*l_778) = (((*g_294) == l_768) , ((safe_mod_func_int8_t_s_s((((*g_724) = ((((((safe_add_func_int8_t_s_s((g_85 || ((g_416 = (safe_sub_func_int32_t_s_s(((p_27 != ((((**g_476) = l_777) != (void*)0) <= p_24)) <= 0x9C57D891), l_753))) == g_85)), 0xF9)) == 0x0A) , 0U) , 0x13A0) >= 1U) | p_24)) <= p_24), p_27)) , p_26))) & p_26), p_25))) || p_27))) | l_753))) || p_27), 8)) | g_483), (-10))), g_503)), 1))) <= 0x30);
    if ((safe_add_func_uint8_t_u_u(((*l_812) = ((!(safe_div_func_int8_t_s_s(((((safe_mul_func_uint16_t_u_u((g_811 = (safe_mod_func_uint32_t_u_u((0x0285ECA3 > (((*l_810) = ((((((((*l_809) = ((safe_sub_func_int16_t_s_s(((((*l_778) = ((((((((+((safe_mul_func_int8_t_s_s(((*g_295) == ((((safe_sub_func_uint32_t_u_u(((safe_add_func_int8_t_s_s(g_416, (((((l_753 , p_24) >= ((safe_mod_func_int16_t_s_s(1, 0x18EC)) | 248U)) , ((*l_805) = ((*g_154) = (((safe_add_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u(((safe_add_func_uint16_t_u_u(l_753, p_27)) , p_26), 0x6B)), p_24)) != (-1)) ^ g_79)))) , p_26) | p_26))) != l_753), (*g_72))) ^ p_24) || l_806) , (void*)0)), 1U)) > p_24)) , p_26) <= 0x620FA5E4) <= l_753) || 0) == 0x502B) ^ p_27) & p_25)) < p_27) , 6), p_24)) == 0x9C85)) == 1U) && 0x1F6E45B6) || 0x7B43) , l_806) & 0xBE) != 0xEB)) >= g_49)), p_27))), p_26)) , (*g_749)) != (void*)0) <= 0x21F25EC1), 0x6D))) > p_27)), 0xE8)))
    {
        uint32_t ****l_815 = &g_476;
        int32_t l_834 = 1;
        int8_t *l_835 = &g_811;
        int16_t *l_845 = &g_79;
        for (g_85 = (-28); (g_85 != 50); g_85++)
        {
            uint32_t ****l_816 = &g_476;
            int16_t l_825 = 1;
            (*g_724) = (((l_815 = &g_476) != (l_816 = &g_476)) <= (safe_sub_func_int16_t_s_s((g_158 != ((p_24 && (!(+g_73))) , ((safe_mul_func_uint16_t_u_u(((((((p_25 && p_25) > (safe_div_func_int32_t_s_s((g_79 , l_825), 0x54198413))) <= g_416) != g_127) <= g_79) , g_73), 0x6705)) && l_825))), g_73)));
            (*g_724) = 0xCA88E190;
        }
        (*g_139) = ((((safe_mod_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(0xF6, (0xD5 > ((*l_835) = ((*l_810) = ((l_806 , l_834) != 7U)))))), (safe_lshift_func_int8_t_s_u(l_838, 2)))) < (p_26 = p_26)) ^ (((*l_845) = ((safe_sub_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s((safe_mul_func_uint8_t_u_u(((&g_477 == (void*)0) , p_24), g_537)), 7)), (*g_139))) || p_24)) > 0xAC97)) == 0U);
        for (g_85 = 0; (g_85 != 47); g_85 = safe_add_func_int16_t_s_s(g_85, 1))
        {
            int32_t ***l_850 = &g_480;
            int32_t **l_852 = &g_72;
            int32_t ***l_851 = &l_852;
            uint32_t *l_857 = &g_137;
            if (l_834)
                break;
            (*g_724) = ((safe_sub_func_uint16_t_u_u(((((*l_851) = ((*l_850) = ((*g_195) = (***g_294)))) != (void*)0) == ((p_26 , g_158) == (((p_24 > ((l_834 , (&g_137 == l_857)) > (safe_mul_func_uint8_t_u_u(((((safe_add_func_uint32_t_u_u(((safe_lshift_func_uint16_t_u_s((65529U || 0xE5C6), p_25)) & p_24), p_27)) != g_406) | 65534U) | g_85), p_25)))) || 0x55FB) <= l_834))), g_416)) > g_73);
        }
        (***g_749) = &l_834;
    }
    else
    {
        uint8_t l_867 = 3U;
        uint32_t l_897 = 4294967295U;
        int32_t l_911 = 0x4F46B2EE;
        uint8_t l_912 = 247U;
        for (g_140 = 0; (g_140 >= 9); g_140 = safe_add_func_int8_t_s_s(g_140, 8))
        {
            int32_t *l_866 = &g_73;
            int32_t **l_914 = (void*)0;
            int32_t **l_915 = &g_724;
            l_866 = (void*)0;
        }
        for (g_137 = (-9); (g_137 >= 53); g_137 = safe_add_func_uint32_t_u_u(g_137, 7))
        {
            uint32_t ****l_919 = &g_476;
            uint32_t *****l_918 = &l_919;
            int32_t l_946 = 0x3CE8A6AD;
            (*l_918) = (void*)0;
            for (g_503 = 0; (g_503 <= 31); g_503 = safe_add_func_uint16_t_u_u(g_503, 9))
            {
                uint8_t l_944 = 0x5C;
                uint32_t **l_945 = &g_403;
                for (g_296 = 0; (g_296 >= 51); ++g_296)
                {
                    uint32_t l_943 = 0x54FCFA58;
                    l_947 = (safe_rshift_func_int16_t_s_s(((((safe_add_func_int16_t_s_s((((0x3FF30ED7 | (((l_928 != ((((safe_div_func_uint8_t_u_u(l_897, ((*l_810) = (((&g_158 != &g_296) & (p_25 == (((+((*g_139) = 1)) == ((safe_unary_minus_func_int32_t_s((safe_sub_func_int32_t_s_s(((safe_sub_func_int8_t_s_s((((safe_mul_func_uint8_t_u_u((((safe_sub_func_int32_t_s_s((3U > (safe_mul_func_uint16_t_u_u(65535U, g_46))), p_26)) || p_24) <= g_296), g_296)) & g_503) , l_943), l_944)) <= p_25), p_25)))) & p_24)) < l_944))) , 0x51)))) != p_25) & g_503) , &g_684)) , l_945) == l_945)) , 0x45) & l_946), p_26)) == 1) == 0x8EB3C0CC) < l_944), 4));
                }
                (****g_294) = (void*)0;
            }
        }
        (***g_749) = &l_753;
    }
    return g_155;
}
static uint16_t func_30(uint32_t p_31, uint32_t p_32)
{
    uint8_t l_165 = 0xD2;
    int16_t l_178 = 0x4165;
    uint8_t *l_179 = (void*)0;
    int8_t *l_181 = (void*)0;
    int8_t *l_182 = &g_49;
    int32_t ***l_191 = &g_97;
    int32_t ***l_194 = &g_97;
    uint16_t l_204 = 0x7361;
    int32_t ****l_263 = &g_196;
    int32_t *****l_262 = &l_263;
    uint32_t l_280 = 1U;
    int32_t l_281 = 0x05220B7D;
    uint32_t ***l_317 = (void*)0;
    uint8_t l_465 = 249U;
    int32_t *l_487 = &g_73;
    int8_t l_579 = 0x38;
    int32_t **l_610 = &l_487;
    int16_t *l_620 = &l_178;
    uint16_t l_621 = 0x8522;
    uint32_t *l_622 = &g_85;
    int32_t l_650 = (-8);
    uint32_t *l_651 = (void*)0;
    int32_t l_680 = 0xE0D7F7A3;
    int8_t l_685 = 0x41;
    uint32_t l_722 = 0U;
    int32_t l_738 = 0xB3BF1309;
    if (((safe_lshift_func_int16_t_s_u((((safe_sub_func_uint32_t_u_u(g_46, (l_165 = 0x79B981B6))) && (p_32 == (((safe_lshift_func_int16_t_s_u((p_31 | ((*l_182) = ((safe_div_func_uint8_t_u_u((+(safe_rshift_func_uint16_t_u_s(((safe_mul_func_uint8_t_u_u(((!p_31) , l_178), 0xE8)) > (&l_165 != (g_180 = l_179))), 2))), l_165)) == 0xD86B4661))), l_178)) ^ 4294967293U) != l_178))) ^ l_178), 14)) > (*g_139)))
    {
        uint8_t *l_183 = (void*)0;
        int32_t l_202 = 0x91DEB0A8;
        int32_t l_224 = 4;
        int32_t l_233 = (-1);
        uint32_t *l_264 = &g_127;
        int32_t ***l_277 = &g_97;
        uint32_t **l_282 = &g_154;
        int32_t *l_304 = (void*)0;
        int32_t l_349 = 0;
        uint32_t l_458 = 0U;
        int32_t *l_462 = &l_281;
        int16_t l_576 = 0xFBE1;
        if ((l_183 == &l_165))
        {
            int32_t ****l_192 = (void*)0;
            int32_t ****l_193 = &l_191;
            int32_t ****l_197 = &l_194;
            uint32_t *l_198 = &g_127;
            int8_t *l_199 = &g_49;
            uint8_t *l_203 = &g_158;
            int16_t *l_225 = (void*)0;
            int16_t *l_226 = (void*)0;
            int16_t *l_227 = &g_79;
            int8_t *l_228 = &g_46;
            l_202 = (safe_add_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u(((!((safe_rshift_func_uint8_t_u_u((((*l_193) = l_191) == ((*l_197) = (g_196 = (g_195 = l_194)))), (&g_137 == l_198))) , (l_199 != (((((*l_203) = (safe_mul_func_uint16_t_u_u(((p_31 <= (l_202 >= 0)) ^ p_32), g_85))) || (-1)) < l_202) , l_183)))) ^ g_79), l_204)), l_165));
            l_202 = (safe_mod_func_int32_t_s_s(((((*l_199) = g_137) <= ((*l_228) = (safe_mul_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((l_202 , ((safe_div_func_int8_t_s_s(g_127, ((l_202 >= ((*l_203) = (safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(((*g_72) , 0xA5), ((~((safe_mod_func_int8_t_s_s((safe_mod_func_int16_t_s_s(5, (g_28 , ((((*l_227) = l_224) != p_32) | 0x15C4)))), p_32)) > l_202)) , 0xBF))), p_31)))) || l_202))) >= 0x4D6A5DCC)), l_202)), 0x891F)), g_140)))) , 0x106ED31E), g_155));
            return l_202;
        }
        else
        {
            int8_t l_248 = 0x92;
            int32_t l_249 = 0x02CFFAFF;
            int32_t ****l_259 = &g_195;
            int32_t *****l_258 = &l_259;
            int16_t *l_265 = &l_178;
            l_249 = (safe_add_func_uint32_t_u_u((0x42 == (safe_rshift_func_uint8_t_u_u((0U >= ((l_233 , (safe_sub_func_uint8_t_u_u(((safe_add_func_uint16_t_u_u(g_127, (safe_mod_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s(g_137, (3U & ((((((((safe_mul_func_int16_t_s_s(p_32, ((g_73 >= ((safe_mul_func_int8_t_s_s((safe_mul_func_int8_t_s_s(g_49, l_224)), l_202)) > p_31)) ^ p_32))) , (-1)) >= 0xA22E) || (-1)) <= g_49) | p_31) >= l_248) , 0xB1)))), (*g_72))))) , l_202), p_32))) >= 0x1C)), g_79))), (-1)));
            l_202 = ((((((((*l_182) = (-10)) >= (((*g_139) = ((((safe_add_func_int8_t_s_s(p_31, ((safe_rshift_func_uint16_t_u_u((p_31 & g_140), (((((safe_mod_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(((((*l_258) = &g_196) == (void*)0) || (safe_mod_func_int32_t_s_s((l_233 = ((((l_262 != ((1 | ((*g_72) = 9)) , &l_263)) , (void*)0) != l_264) == 9)), p_31))), p_32)), g_46)) > p_31) || 0x33) != p_32) , p_32))) >= p_32))) < 0x3F76) , g_155) || 0U)) > 0U)) , (void*)0) != l_265) ^ p_32) | l_202) && p_32);
        }
        for (g_127 = 0; (g_127 != 6); ++g_127)
        {
            uint8_t *l_318 = (void*)0;
            int32_t l_320 = 0xD36FC477;
            uint32_t ***l_366 = &l_282;
            uint32_t **l_456 = &g_403;
            uint32_t ****l_478 = (void*)0;
            uint32_t ****l_479 = (void*)0;
            int8_t l_534 = 1;
            uint32_t l_538 = 0xFAC8F366;
            int32_t l_556 = 0xDEE4A86C;
            if ((safe_add_func_int16_t_s_s(g_79, (safe_mul_func_uint8_t_u_u(((safe_add_func_int16_t_s_s(p_31, (safe_unary_minus_func_int32_t_s(((*g_72) = (g_158 < ((void*)0 == (*g_195)))))))) != g_140), (safe_mod_func_int8_t_s_s((l_277 == ((safe_mod_func_uint16_t_u_u(g_49, (l_280 = p_32))) , &g_97)), l_281)))))))
            {
                uint32_t ***l_283 = &l_282;
                (*l_283) = l_282;
                if (p_32)
                    break;
            }
            else
            {
                uint32_t l_301 = 4294967295U;
                int32_t l_321 = 1;
                int32_t l_325 = 0xBF33B006;
                (*g_139) = p_32;
                l_301 = (g_137 ^ (safe_add_func_int16_t_s_s((p_32 > (safe_rshift_func_uint16_t_u_u(g_85, (((safe_rshift_func_int8_t_s_u(((1 >= ((safe_mul_func_int8_t_s_s(((*l_182) = (((safe_lshift_func_int16_t_s_u(((((g_296 = (g_294 != &g_295)) | p_31) , ((safe_sub_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(0x30, g_158)), g_137)) , (void*)0)) == (void*)0), 8)) , g_49) || g_296)), 0x2A)) != p_32)) | 5), 5)) & (-4)) & g_46)))), g_127)));
                for (g_49 = 0; (g_49 > 2); g_49 = safe_add_func_int8_t_s_s(g_49, 7))
                {
                    int16_t *l_308 = &g_79;
                    int16_t **l_309 = (void*)0;
                    int16_t **l_310 = &l_308;
                    uint8_t *l_319 = &g_296;
                    int32_t l_322 = 0xEC8C7DFA;
                    (*g_97) = l_304;
                    l_322 = (((!((((p_31 , ((1 >= (p_32 < (((*l_310) = l_308) != &g_79))) , (((((&g_295 == (void*)0) >= (((((safe_div_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_u(((void*)0 != l_317), 0)), 11)), 1)) ^ p_31) ^ p_31) , l_301) , p_32)) | g_85) , (-9)) , l_318))) == l_319) >= l_320) , l_320)) <= p_32) & l_321);
                }
                l_325 = (safe_sub_func_int32_t_s_s(p_31, g_49));
            }
            if (l_320)
            {
                int32_t l_348 = (-5);
                uint32_t **l_350 = &g_154;
                int32_t l_367 = (-7);
                int16_t l_461 = 0x7FEA;
                for (g_155 = 0; (g_155 == 29); g_155 = safe_add_func_int16_t_s_s(g_155, 1))
                {
                    int16_t *l_344 = (void*)0;
                    int32_t l_347 = (-1);
                    uint32_t *l_381 = (void*)0;
                    int32_t ***l_437 = &g_97;
                    int32_t l_459 = 0xE397EF2E;
                    (*g_139) = (safe_mul_func_uint16_t_u_u((65532U || (safe_div_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s(((p_31 != (((p_32 <= (safe_rshift_func_int16_t_s_s((p_31 < (safe_rshift_func_uint8_t_u_s((safe_div_func_int8_t_s_s((((((+(+(1U & ((safe_div_func_uint8_t_u_u(((&l_178 != (l_344 = &g_79)) >= (g_49 | (safe_mul_func_int8_t_s_s((0xA467 ^ 0x2278), p_32)))), g_85)) < g_127)))) != l_347) , l_348) , p_31) , p_32), 255U)), p_31))), l_347))) <= g_73) >= p_31)) <= l_349), 4)), g_158))), g_137));
                    if ((((void*)0 != l_350) || ((+(g_46 || (~(safe_sub_func_int32_t_s_s((+((((l_348 , (safe_add_func_uint32_t_u_u((~p_32), (l_367 = (safe_div_func_uint8_t_u_u((l_348 == (((safe_add_func_int16_t_s_s((!((((l_347 = ((((safe_div_func_uint32_t_u_u(((((l_366 != (void*)0) , l_350) != &g_154) || g_137), (*g_139))) ^ l_347) && g_28) <= 0x9E29)) , (void*)0) == l_318) ^ l_320)), g_296)) == g_137) != p_31)), 5)))))) ^ l_320) ^ p_31) != p_32)), (*g_139)))))) || l_320)))
                    {
                        int32_t *l_368 = &l_281;
                        int8_t l_404 = 0x97;
                        uint32_t **l_405 = &g_403;
                        int8_t l_427 = 1;
                        (****g_294) = l_368;
                        l_367 = ((((safe_div_func_uint16_t_u_u(((((safe_sub_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_s((safe_mod_func_int16_t_s_s((safe_sub_func_int8_t_s_s((((safe_mod_func_uint32_t_u_u((l_381 != ((*l_405) = (((*l_282) != ((p_31 | (safe_lshift_func_uint8_t_u_s(((safe_div_func_int32_t_s_s(l_347, (safe_lshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_u(((safe_mod_func_uint16_t_u_u(p_31, ((+(p_31 , ((***l_277) = ((safe_div_func_int32_t_s_s(((*g_72) = ((((g_158 , (g_140 , (safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint16_t_u_u(((((safe_sub_func_int16_t_s_s((safe_add_func_int8_t_s_s((((g_403 != &g_127) | l_404) >= p_31), p_31)), l_320)) & 2U) < g_296) || p_31), 15)), g_49)))) & p_31) && p_32) > g_85)), 0xBFBD1E1D)) == g_137)))) , l_367))) && p_31), l_367)), p_31)))) ^ l_347), 1))) , (void*)0)) , (void*)0))), 0x434A2142)) == g_406) , 0x96), (-1))), l_348)), p_32)) , p_32), p_32)) <= p_32) < 0xD414) | p_31), 0xCEA3)) > 0x93BD) < 253U) < 0xFE0126B1);
                        l_202 = (+(1U < (safe_mul_func_uint16_t_u_u((((*****g_294) = (safe_sub_func_int8_t_s_s((-10), ((safe_mul_func_int8_t_s_s((-8), (safe_sub_func_uint32_t_u_u(g_416, ((safe_div_func_uint32_t_u_u((p_32 || (safe_div_func_int32_t_s_s(((-9) || p_31), (l_320 , (safe_sub_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((0x77E5 && g_46), l_427)), 4)), g_46)))))), p_32)) <= 1U))))) , p_32)))) && (***l_277)), p_31))));
                        if (p_31)
                            continue;
                    }
                    else
                    {
                        uint32_t l_436 = 0x3D993827;
                        uint8_t *l_444 = &g_158;
                        int32_t l_457 = 0x65C0EDC9;
                        int32_t l_460 = (-1);
                        l_347 = 0;
                        (*g_72) = (safe_sub_func_uint8_t_u_u((l_460 = (safe_mod_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(((((safe_add_func_int32_t_s_s(p_31, ((l_436 , (((*l_263) == (l_437 = l_277)) == (safe_div_func_uint8_t_u_u((l_458 = ((safe_div_func_uint32_t_u_u(6U, (l_457 = (((*l_444) = (safe_lshift_func_uint16_t_u_s((l_320 && 0x2390), 13))) | (safe_mul_func_int16_t_s_s(p_31, (safe_unary_minus_func_int16_t_s((((((safe_mul_func_int8_t_s_s((safe_mul_func_int16_t_s_s((l_347 = (safe_mod_func_int32_t_s_s((safe_mul_func_uint8_t_u_u(1U, g_296)), p_31))), 0xB451)), 0x0F)) <= 6U) < (-3)) , &l_264) == l_456))))))))) , 1U)), p_31)))) >= l_459))) || g_416) , 0xD4) == 0x47), p_32)), l_320))), l_461));
                        (**l_191) = &l_320;
                    }
                }
                (**l_277) = l_462;
                (*l_277) = (*l_277);
            }
            else
            {
                int32_t *l_466 = &g_140;
                int16_t *l_468 = &g_79;
                int16_t **l_467 = &l_468;
                for (g_416 = 0; (g_416 != (-15)); g_416--)
                {
                    l_465 = 0;
                    (*g_97) = l_466;
                    l_466 = ((**g_195) = (((*g_139) = (*l_466)) , (**g_195)));
                    (***g_195) = ((void*)0 == l_467);
                }
                (**l_194) = &l_320;
            }
            if (((g_28 & (((safe_add_func_int8_t_s_s(g_416, (!(safe_lshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((l_317 != (g_476 = g_476)), 3)), (p_32 , ((**g_295) == (g_480 = (void*)0)))))))) , (g_483 = (l_320 && (g_137 = ((((safe_sub_func_uint8_t_u_u(((p_32 && p_32) <= g_73), 0U)) , g_416) & (***l_191)) <= p_32))))) & (*l_462))) , 9))
            {
                uint8_t *l_484 = &l_165;
                int32_t l_500 = 0xBEFE16E3;
                int16_t *l_510 = &l_178;
                uint32_t *l_533 = (void*)0;
                uint16_t *l_535 = &l_204;
                uint16_t *l_536 = &g_537;
                uint8_t l_539 = 248U;
                (***l_277) = ((*g_139) = (((*l_484) = p_31) == (&p_31 == (void*)0)));
                for (g_406 = 0; (g_406 > (-8)); g_406 = safe_sub_func_int8_t_s_s(g_406, 8))
                {
                    (***l_277) = p_32;
                    (**l_191) = l_487;
                }
                (**g_97) = (safe_div_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((((safe_sub_func_uint32_t_u_u((g_296 != ((safe_div_func_uint8_t_u_u(p_32, (safe_mul_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_u(0U, (&g_403 == (void*)0))) == (((l_500 && (0U | (0 >= ((safe_mul_func_uint16_t_u_u((g_503 = ((4294967293U <= p_32) | g_155)), 0x9C7C)) <= (-1))))) , l_456) != &l_264)), (***l_277))))) , 4294967292U)), p_32)) && 0) <= 0x5DEE), p_32)), p_31));
                l_539 = ((((((safe_div_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((((*l_510) = 0xFB12) || (safe_mod_func_int8_t_s_s(((void*)0 == &g_476), (safe_mul_func_uint16_t_u_u(((safe_add_func_int8_t_s_s((((((safe_unary_minus_func_uint16_t_u(((*l_487) = ((*l_536) = ((*l_535) = ((g_416 ^ ((safe_div_func_uint32_t_u_u(((((safe_mod_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(((~((~((safe_sub_func_int32_t_s_s((g_406 == (((g_406 , l_487) != ((l_534 = (safe_mul_func_int16_t_s_s(p_32, ((safe_unary_minus_func_uint16_t_u((safe_lshift_func_uint16_t_u_s(g_503, 7)))) <= l_500)))) , &g_137)) || g_406)), p_32)) , g_483)) , 0x84)) >= p_31), 0x44)), 9U)) || g_73) > l_320) , 0x6C9B1D3D), 0xD9C6B668)) < (*l_487))) && p_31)))))) | 3) || 0x0B) == p_32) || p_32), (*l_462))) < l_500), l_538))))), g_137)), g_46)), 0xF0AF)) != l_500) || l_534) && (*l_462)) < g_49) || l_500);
            }
            else
            {
                int32_t *l_552 = &l_349;
                (*l_487) = ((p_32 , (safe_add_func_uint32_t_u_u(0xB9EC7BC6, ((safe_rshift_func_int16_t_s_u((&g_295 == (void*)0), 0)) || g_137)))) , (safe_div_func_uint8_t_u_u(((l_556 = (safe_add_func_int32_t_s_s((((*l_552) = (safe_lshift_func_int8_t_s_u(((***l_191) = (safe_add_func_int8_t_s_s(0xF8, ((*l_182) = (-7))))), 7))) , (safe_div_func_uint16_t_u_u((!1U), g_85))), p_32))) , p_32), g_155)));
            }
            for (g_296 = 0; (g_296 < 14); g_296++)
            {
                uint16_t l_566 = 0x595C;
                uint8_t *l_575 = &l_165;
                int8_t *l_591 = (void*)0;
                int8_t *l_592 = (void*)0;
                int8_t *l_593 = &l_534;
                l_320 = (safe_div_func_int16_t_s_s(((&g_79 == ((((*l_462) = p_31) & (((g_158 = (safe_sub_func_int32_t_s_s((safe_div_func_int8_t_s_s((!l_320), p_31)), ((((l_566 , (((safe_sub_func_int8_t_s_s((0 && (safe_mul_func_int16_t_s_s(0x8F8D, ((safe_mod_func_int16_t_s_s((((l_556 = ((((((*l_575) = (safe_rshift_func_uint16_t_u_s(0xCBE0, (l_566 >= (-5))))) , l_576) != g_79) > g_158) , p_31)) <= 0xD959476D) , 0xCA6D), p_32)) , l_566)))), g_155)) , &g_403) != &g_403)) ^ p_31) , l_566) & l_534)))) ^ 1U) , l_534)) , (void*)0)) | p_32), l_566));
                if (p_31)
                    break;
                (*l_462) = (safe_mod_func_uint16_t_u_u((((((*l_575) = l_579) || ((*l_593) = (l_320 = ((*l_182) = (safe_mod_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(p_31, (safe_sub_func_int8_t_s_s(l_566, (p_31 | (g_73 , (safe_sub_func_int32_t_s_s(((*g_139) == ((1 <= (safe_lshift_func_int8_t_s_s(0xCA, ((g_416 > 0x0404) == p_31)))) & g_590)), 0U)))))))), p_32)))))) , 0x18B436D3) , 0x6F63), g_594));
                (*g_139) = (***g_195);
            }
        }
        (*g_72) = (*g_72);
    }
    else
    {
        uint32_t l_597 = 1U;
        int32_t *l_598 = &g_140;
        (*g_72) = (safe_sub_func_int8_t_s_s((l_597 | ((void*)0 == &l_317)), l_597));
        (**l_194) = l_598;
        (**g_195) = (**l_191);
        return g_127;
    }
    (*g_139) = (safe_sub_func_uint32_t_u_u((safe_unary_minus_func_int16_t_s(((safe_div_func_uint32_t_u_u(((((*l_487) , ((safe_rshift_func_int16_t_s_s((safe_div_func_int32_t_s_s(((safe_mul_func_uint16_t_u_u(p_31, ((p_31 , ((*l_610) = &l_281)) == (void*)0))) >= (((*l_622) = ((safe_add_func_uint32_t_u_u(((safe_lshift_func_uint16_t_u_u(((((*l_263) != ((((safe_add_func_int32_t_s_s((safe_mul_func_int8_t_s_s(((*l_182) = ((((+(p_32 >= (g_296 , (((*l_620) = ((p_32 ^ 0x63) == p_32)) <= g_590)))) & 0U) , 0U) != p_31)), g_46)), p_32)) <= l_621) , g_79) , (**l_262))) , p_32) && g_296), p_32)) < 0), p_32)) && p_32)) , p_32)), 9U)), 0)) || 65530U)) , 5U) < p_32), p_31)) ^ 0xED8E))), 0x9ACBCEC4));
    if ((safe_lshift_func_uint8_t_u_s(g_85, p_32)))
    {
        uint16_t l_637 = 0x427D;
        uint32_t *l_638 = &g_137;
        uint32_t *l_639 = &g_590;
        int32_t l_640 = 0;
        uint16_t l_641 = 65526U;
        int16_t **l_682 = &l_620;
        l_640 = (p_32 , ((((4294967291U > ((safe_add_func_int32_t_s_s((p_32 != ((p_31 != (((*l_639) = ((*l_638) = (((safe_add_func_uint16_t_u_u(p_31, (safe_mod_func_uint32_t_u_u(((safe_add_func_uint16_t_u_u((((*g_139) = 0x4C9520C3) >= (7 <= (safe_mul_func_int8_t_s_s(((safe_add_func_int8_t_s_s(((p_31 >= (g_590 <= p_32)) != g_590), (-1))) < l_637), g_49)))), l_637)) && 0U), p_31)))) , (void*)0) != &l_465))) >= l_637)) & l_637)), p_31)) ^ p_32)) , 0x649FF226) & l_637) == 0xF4F744FA));
        if ((*g_139))
        {
            (**l_194) = &l_640;
        }
        else
        {
            (**g_195) = &l_640;
            return l_641;
        }
        for (g_73 = 0; (g_73 < 13); ++g_73)
        {
            int8_t l_667 = 0;
            int16_t l_679 = 0x43A7;
            int32_t l_700 = 0;
            int32_t l_720 = 7;
            uint32_t **l_725 = &l_622;
            int32_t **l_744 = &g_72;
        }
    }
    else
    {
        (**l_610) = (&g_403 == &g_403);
    }
    (*g_724) = (((*l_262) = (*g_294)) != (g_749 = (*g_294)));
    return g_158;
}
static uint8_t func_36(uint32_t p_37, int32_t p_38, int32_t p_39, uint32_t p_40)
{
    int32_t *l_75 = (void*)0;
    int16_t *l_78 = &g_79;
    int32_t l_80 = 0xB11082E7;
    (*g_97) = (func_50((safe_add_func_int32_t_s_s((safe_unary_minus_func_int8_t_s((safe_lshift_func_int8_t_s_u(g_46, ((g_46 <= (func_61(func_67(g_72, (((0 >= ((!((&p_38 == l_75) & (safe_mul_func_uint8_t_u_u(((((*l_78) = p_39) < ((p_37 , p_39) < g_73)) <= 0x5823), p_38)))) > 0U)) < l_80) , g_79), p_38, p_37), g_139, &l_80, &l_80, p_39) <= g_46)) <= p_38))))), (-7))), g_46, g_139) , &l_80);
    (*g_97) = &l_80;
    return g_46;
}
static int32_t func_50(uint8_t p_51, int32_t p_52, int32_t * p_53)
{
    int32_t l_159 = 0;
    int32_t *l_160 = (void*)0;
    (*g_98) = (*p_53);
    (*p_53) = l_159;
    (*g_97) = l_160;
    return (*p_53);
}
static uint16_t func_61(int8_t * p_62, int32_t * p_63, int32_t * p_64, int32_t * p_65, uint16_t p_66)
{
    uint32_t *l_149 = &g_85;
    int32_t l_150 = 0xF9311F6B;
    uint32_t *l_156 = &g_155;
    uint8_t *l_157 = &g_158;
    (*g_98) = (((*l_157) = ((safe_div_func_int32_t_s_s(((*g_139) = (safe_div_func_uint8_t_u_u((((*l_156) = (safe_mod_func_int8_t_s_s((((((*l_149) = 0x49816E07) , l_150) ^ (+g_73)) & ((safe_add_func_int32_t_s_s(((l_150 != (1U > 0xC905)) >= p_66), ((((l_149 == (g_154 = &g_28)) > g_46) >= 1) < p_66))) <= (*p_62))), (*p_62)))) , g_73), 7))), l_150)) && (-1))) != g_73);
    return l_150;
}
static int8_t * func_67(int32_t * p_68, uint16_t p_69, uint32_t p_70, int8_t p_71)
{
    int32_t l_92 = 0xA138DBEC;
    int32_t *l_95 = &g_73;
    int16_t *l_99 = &g_79;
    for (p_71 = 0; (p_71 > (-2)); p_71--)
    {
        int8_t *l_90 = (void*)0;
        int32_t **l_96 = &g_72;
        int16_t *l_100 = &g_79;
        int32_t l_115 = 9;
        if (((((safe_lshift_func_uint8_t_u_u(0x6D, 3)) != g_85) || (safe_mod_func_uint16_t_u_u((((safe_add_func_int8_t_s_s((0 != (g_49 = p_71)), ((~(l_92 ^ (safe_mul_func_int8_t_s_s((l_95 == ((*l_96) = &g_73)), (g_97 == (((((((((*g_97) = p_68) == p_68) ^ g_85) > 0x7D66) , &p_71) != (void*)0) == 6) , &l_95)))))) , (**l_96)))) , l_99) == l_100), 0xF155))) || (*l_95)))
        {
            int8_t *l_105 = &g_46;
            int32_t l_114 = 1;
            uint32_t *l_126 = &g_127;
            int8_t *l_136 = &g_49;
            (*p_68) = ((g_49 , ((safe_rshift_func_uint8_t_u_s((((*l_95) || (((void*)0 == l_105) != (safe_rshift_func_uint16_t_u_s(0x95AE, ((safe_mod_func_int8_t_s_s(((safe_add_func_uint32_t_u_u(p_70, g_49)) != (((l_114 && ((-1) ^ l_115)) & g_46) < g_46)), 2U)) , (*l_95)))))) , p_71), p_70)) | g_79)) > p_70);
            l_114 = ((safe_lshift_func_uint8_t_u_s(0xDC, (safe_div_func_uint32_t_u_u(g_85, (safe_div_func_int16_t_s_s(((((safe_mod_func_uint32_t_u_u((safe_mod_func_int32_t_s_s((((*l_126) = ((void*)0 != &g_79)) == (p_71 , (safe_div_func_uint32_t_u_u((safe_div_func_uint16_t_u_u((g_137 = ((safe_add_func_uint8_t_u_u(((safe_div_func_uint16_t_u_u(65531U, (g_49 && ((*l_136) = (&g_79 != (l_100 = ((&l_114 == (void*)0) , &g_79))))))) >= (-8)), 0x29)) && p_71)), p_71)), (*l_95))))), 4U)), l_114)) , (**l_96)) && 0x6CE2) <= (-5)), l_114)))))) == l_114);
        }
        else
        {
            int32_t ***l_138 = &l_96;
            (*g_97) = (g_46 , l_95);
            (*l_96) = (*g_97);
            (*l_138) = l_96;
        }
    }
    (*g_97) = p_68;
    return &g_46;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    g_154 = 0;
    csmith_sink_ = g_28;
    csmith_sink_ = g_46;
    csmith_sink_ = g_49;
    csmith_sink_ = g_73;
    csmith_sink_ = g_79;
    csmith_sink_ = g_85;
    csmith_sink_ = g_127;
    csmith_sink_ = g_137;
    csmith_sink_ = g_140;
    csmith_sink_ = g_155;
    csmith_sink_ = g_158;
    csmith_sink_ = g_296;
    csmith_sink_ = g_406;
    csmith_sink_ = g_416;
    csmith_sink_ = g_483;
    csmith_sink_ = g_503;
    csmith_sink_ = g_537;
    csmith_sink_ = g_590;
    csmith_sink_ = g_594;
    csmith_sink_ = g_811;
    csmith_sink_ = g_959;
    csmith_sink_ = g_973;
    csmith_sink_ = g_1044;
    csmith_sink_ = g_1172;
    csmith_sink_ = g_1289;
    csmith_sink_ = g_1485;
    csmith_sink_ = g_1631;
    csmith_sink_ = g_1684;
    platform_main_end(0,0);
    return 0;
}
