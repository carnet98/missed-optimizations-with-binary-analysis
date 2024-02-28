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
static int32_t g_3 = (-1L);
static int32_t g_6 = 9L;
static uint32_t g_7 = 0xAC488899L;
static int32_t g_40 = (-10L);
static uint8_t g_103 = 0xF8L;
static int32_t g_108 = (-1L);
static uint8_t g_111 = 0UL;
static int32_t g_118 = 1L;
static int32_t g_139 = 0x2C76476FL;
static int8_t g_140 = 0xF9L;
static uint16_t g_141 = 0UL;
static int32_t * const g_213 = &g_40;
static uint32_t g_240 = 1UL;
static int8_t g_293 = 0x7FL;
static int16_t g_303 = 7L;
static uint32_t g_304 = 0xA381081BL;
static int32_t **g_370 = (void*)0;
static int32_t ***g_369 = &g_370;
static uint16_t g_438 = 65526UL;
static uint32_t g_479 = 18446744073709551611UL;
static int32_t g_569 = 0x3FEF3275L;
static int32_t g_570 = 4L;
static uint32_t g_572 = 18446744073709551615UL;
static int32_t ****g_605 = &g_369;
static int32_t *****g_604 = &g_605;
static int32_t *g_645 = &g_118;
static int16_t g_684[10] = {(-1L),0x9AA0L,(-10L),(-10L),0x9AA0L,(-1L),0x9AA0L,(-10L),(-10L),0x9AA0L};
static uint8_t g_685 = 0x08L;
static uint32_t g_696 = 1UL;
static int32_t g_758 = 0x35C15D29L;
static int16_t g_766[6][1][6] = {{{(-5L),(-5L),0L,(-5L),(-5L),0L}},{{(-5L),(-5L),0L,(-5L),(-5L),0L}},{{(-5L),(-5L),0L,(-5L),(-5L),0L}},{{(-5L),(-5L),0L,(-5L),(-5L),0L}},{{(-5L),(-5L),0L,(-5L),(-5L),0L}},{{(-5L),(-5L),0L,(-5L),(-5L),0L}}};
static uint32_t g_767[4][3] = {{4294967294UL,4294967294UL,4294967294UL},{0xDCBAC6DFL,6UL,0xDCBAC6DFL},{4294967294UL,4294967294UL,4294967294UL},{0xDCBAC6DFL,6UL,0xDCBAC6DFL}};
static int32_t g_807 = 6L;
static uint32_t g_810 = 0xB45766A9L;
static int32_t g_837[7] = {1L,1L,0x33BBC554L,1L,1L,0x33BBC554L,1L};
static uint32_t func_1(void);
static uint32_t func_10(int32_t * p_11, uint8_t p_12, int32_t p_13, int32_t * p_14, int8_t p_15);
static int32_t * func_16(int32_t p_17);
static int32_t func_18(int32_t p_19, int32_t * p_20, uint8_t p_21);
static uint16_t func_29(uint8_t p_30, int32_t * p_31, int32_t p_32, int32_t * p_33, int32_t p_34);
static int8_t func_44(int32_t * p_45, uint32_t p_46, int8_t p_47, uint32_t p_48, int32_t * p_49);
static const int16_t func_53(int32_t * p_54, const int8_t p_55, int32_t * p_56, uint16_t p_57, int32_t * p_58);
static int32_t * func_59(int16_t p_60, uint32_t p_61, int32_t * p_62, uint16_t p_63);
static int32_t func_66(uint8_t p_67, uint32_t p_68, int32_t * p_69, int32_t * p_70);
static uint8_t func_71(int32_t p_72, int32_t * p_73, const uint32_t p_74, int32_t * p_75);
static uint32_t func_1(void)
{
    int32_t *l_2 = &g_3;
    int32_t *l_4 = &g_3;
    int32_t *l_5[4];
    int8_t l_26 = 0x57L;
    int i;
    for (i = 0; i < 4; i++)
        l_5[i] = (void*)0;
    g_7--;
    (*g_213) = (func_10(func_16(g_3), g_6, func_18(((safe_sub_func_int8_t_s_s(((l_26 > ((g_3 && g_6) == (safe_div_func_uint16_t_u_u(func_29((g_7 == (safe_sub_func_int8_t_s_s((g_3 != (&g_6 == &g_3)), 1L))), l_5[3], g_6, l_4, g_7), (*l_4))))) == 0x7B954877L), g_438)) <= 0x782D04C3L), l_5[3], (*l_2)), l_2, g_684[6]) || 0x21135C19L);
    return g_837[5];
}
static uint32_t func_10(int32_t * p_11, uint8_t p_12, int32_t p_13, int32_t * p_14, int8_t p_15)
{
    int16_t l_703[9][6] = {{1L,0x08F0L,(-1L),0xA5E6L,(-10L),(-10L)},{0x66A4L,0xD5CFL,0xD5CFL,0x66A4L,0x78CBL,0L},{0x5039L,0xD5CFL,0x78CBL,0xBD23L,(-10L),0x08F0L},{0xA5E6L,0x08F0L,(-6L),(-2L),(-10L),(-10L)},{0xD670L,0xD5CFL,(-10L),0xD670L,0x78CBL,(-1L)},{0x5846L,0xD5CFL,(-10L),0x5039L,(-10L),0xD5CFL},{(-2L),0x08F0L,0L,1L,(-10L),0x78CBL},{0x3D49L,0xD5CFL,0x08F0L,0x3D49L,0x78CBL,(-6L)},{0xBD23L,0xD5CFL,(-10L),0x5846L,(-10L),(-10L)}};
    int32_t l_709 = 1L;
    int32_t l_710[9] = {0xE412D0BEL,1L,1L,0xE412D0BEL,1L,1L,0xE412D0BEL,1L,1L};
    int32_t **l_735 = &g_645;
    int32_t l_744 = (-10L);
    int32_t l_751 = 0x89405C42L;
    int32_t *****l_846[8][3][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{&g_605,&g_605},{&g_605,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{&g_605,&g_605}},{{&g_605,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{&g_605,&g_605},{&g_605,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{&g_605,&g_605},{&g_605,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{&g_605,&g_605}}};
    uint16_t l_872 = 0x82C1L;
    int i, j, k;
    for (g_479 = 0; (g_479 == 47); g_479 = safe_add_func_int8_t_s_s(g_479, 2))
    {
        int32_t l_708 = 0x9B218900L;
        uint32_t l_711 = 0x7B0EFC52L;
        const int32_t *l_743 = &l_709;
        int32_t l_753 = (-9L);
        int32_t l_754 = (-1L);
        int32_t l_755 = 0L;
        int32_t l_756 = 0L;
        int32_t l_757 = 0L;
        int32_t l_759 = 0x98B5824DL;
        int32_t l_762 = 0x6265E684L;
        int32_t l_764 = 3L;
        int32_t l_765 = 9L;
        for (p_13 = (-22); (p_13 != (-14)); p_13 = safe_add_func_int8_t_s_s(p_13, 8))
        {
            int32_t *l_704 = &g_108;
            int32_t *l_705 = &g_139;
            int32_t *l_706 = &g_569;
            int32_t *l_707[7][10] = {{&g_108,&g_40,(void*)0,(void*)0,&g_569,&g_569,&g_569,(void*)0,(void*)0,&g_40},{&g_40,(void*)0,&g_40,&g_569,&g_139,&g_139,&g_108,&g_569,&g_6,&g_6},{&g_6,&g_3,&g_569,&g_40,&g_139,&g_139,&g_40,&g_569,&g_3,&g_6},{&g_40,&g_40,&g_139,&g_569,(void*)0,&g_569,&g_40,&g_3,(void*)0,&g_118},{&g_108,&g_118,&g_6,&g_40,(void*)0,&g_40,&g_6,&g_118,&g_108,&g_6},{(void*)0,&g_40,&g_569,&g_139,&g_139,&g_108,&g_569,&g_6,&g_6,&g_6},{&g_569,&g_40,(void*)0,&g_40,&g_40,(void*)0,&g_40,&g_139,&g_118,&g_6}};
            int i, j;
            l_711--;
            if ((*g_645))
            {
                int32_t * const *l_734 = (void*)0;
                for (g_438 = 26; (g_438 < 48); ++g_438)
                {
                    (*p_14) = 0L;
                }
                (*l_735) = func_16((p_12 > ((p_15 != (safe_div_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s((safe_sub_func_int8_t_s_s(((!(((safe_add_func_int32_t_s_s((safe_sub_func_int8_t_s_s((+((safe_sub_func_int32_t_s_s((safe_rshift_func_int8_t_s_u(p_13, 4)), (safe_div_func_int16_t_s_s(((l_734 != l_735) < p_12), 0x0BF8L)))) || (safe_sub_func_int32_t_s_s((safe_sub_func_uint32_t_u_u((7UL == (((((safe_lshift_func_int16_t_s_u((safe_unary_minus_func_int8_t_s(((void*)0 == l_743))), (*l_743))) | p_12) <= (*p_11)) < g_240) > p_15)), p_12)), p_15)))), g_570)), (*p_14))) & g_103) == l_744)) || g_139), p_15)), 14)), (**l_735)))) == p_12)));
                if ((*p_14))
                    continue;
                (**g_605) = &g_645;
            }
            else
            {
                int32_t **l_745[3][9] = {{&l_707[3][1],&l_707[3][1],&l_707[3][1],&l_707[3][1],&l_707[3][1],&l_707[3][1],&l_707[3][1],&l_707[3][1],&l_707[3][1]},{&l_706,&l_706,&l_706,&l_706,&l_706,&l_706,&l_706,&l_706,&l_706},{&l_707[3][1],&l_707[3][1],&l_707[3][1],&l_707[3][1],&l_707[3][1],&l_707[3][1],&l_707[3][1],&l_707[3][1],&l_707[3][1]}};
                int i, j;
                (**g_605) = l_745[2][1];
                for (g_103 = 0; (g_103 <= 5); g_103 += 1)
                {
                    int32_t l_746 = (-2L);
                    int32_t l_747 = 0x1C35CDA4L;
                    int32_t l_752 = 0x706D2075L;
                    int32_t l_760 = 0x383B8422L;
                    int32_t l_761 = 0x5FD50563L;
                    int32_t l_763 = 8L;
                    int i;
                    (*l_706) &= l_710[(g_103 + 3)];
                    for (g_6 = 6; (g_6 >= 2); g_6 -= 1)
                    {
                        uint16_t l_748 = 65527UL;
                        int i;
                        if (g_684[(g_103 + 2)])
                            break;
                        l_748++;
                    }
                    --g_767[0][0];
                    if ((*l_704))
                        continue;
                }
            }
            (*p_14) = ((safe_add_func_int32_t_s_s((*p_11), 0x31031B5CL)) | 1UL);
        }
    }
    for (g_304 = 2; (g_304 <= 9); g_304 += 1)
    {
        const int32_t l_772[7][8] = {{2L,0x6B3BCEE7L,0xCE8679DBL,(-1L),0x6B3BCEE7L,(-1L),0xCE8679DBL,0x6B3BCEE7L},{0L,0xCE8679DBL,2L,0L,(-1L),(-1L),0L,2L},{0x6B3BCEE7L,0x6B3BCEE7L,0xDBA602EAL,0xFC0F8F93L,0L,0xDBA602EAL,0L,0xFC0F8F93L},{2L,0xFC0F8F93L,2L,(-1L),0xFC0F8F93L,0xCE8679DBL,0xCE8679DBL,0xFC0F8F93L},{0xFC0F8F93L,0xCE8679DBL,0xCE8679DBL,0xFC0F8F93L,(-1L),2L,0xFC0F8F93L,2L},{0xFC0F8F93L,0L,0xDBA602EAL,0L,0xFC0F8F93L,0xDBA602EAL,0x6B3BCEE7L,0x6B3BCEE7L},{2L,0L,(-1L),(-1L),0L,2L,0xCE8679DBL,0L}};
        int32_t l_799 = (-1L);
        int32_t l_801 = 0x89123336L;
        int32_t l_806 = 0x08A14C96L;
        int32_t l_808[3];
        int i, j;
        for (i = 0; i < 3; i++)
            l_808[i] = 8L;
        for (g_140 = 9; (g_140 >= 0); g_140 -= 1)
        {
            for (l_751 = 0; (l_751 <= 9); l_751 += 1)
            {
                (*g_645) &= (l_772[2][4] != p_12);
                (*g_645) |= ((void*)0 == &g_605);
            }
        }
        for (p_12 = 0; (p_12 <= 5); p_12 += 1)
        {
            int16_t l_802 = 0x2472L;
            int32_t l_805[3];
            int32_t *****l_847 = &g_605;
            uint32_t l_861 = 1UL;
            int16_t l_871 = (-1L);
            int i;
            for (i = 0; i < 3; i++)
                l_805[i] = 0xABC0BA0FL;
            for (g_3 = 0; (g_3 <= 9); g_3 += 1)
            {
                int32_t ***l_776 = &l_735;
                int32_t l_790 = 1L;
                int32_t l_803 = 1L;
                int32_t l_804 = 0xA13259DAL;
                int32_t l_809 = 0x919035D8L;
                uint8_t l_824 = 0xB6L;
                int32_t **** const *l_866 = &g_605;
                int16_t l_870 = 0xCD11L;
                for (g_118 = 5; (g_118 >= 0); g_118 -= 1)
                {
                    uint8_t l_787 = 0x7EL;
                    int32_t *l_791 = (void*)0;
                    int32_t *l_792 = &g_40;
                    int32_t *l_793 = &l_790;
                    int32_t *l_794 = &l_744;
                    int32_t *l_795 = &l_709;
                    int32_t *l_796 = &g_108;
                    int32_t *l_797 = &l_710[2];
                    int32_t *l_798 = &l_710[2];
                    int32_t *l_800[9][6][4] = {{{&g_569,(void*)0,(void*)0,&l_799},{&l_710[8],&l_799,&l_751,&g_40},{&g_6,(void*)0,&g_139,&g_6},{&l_744,&l_709,&l_710[2],&g_569},{&l_751,&g_108,&g_569,&l_709},{&g_108,&l_751,&g_6,&g_139}},{{&g_3,(void*)0,&l_751,&l_710[2]},{&g_3,&g_3,&l_744,&g_3},{(void*)0,&l_710[1],&g_758,&l_710[2]},{&l_710[2],&l_744,(void*)0,&g_40},{&l_710[2],&g_40,&l_710[2],&l_790},{&l_710[2],&g_6,(void*)0,&l_751}},{{&l_710[2],&l_790,&g_758,&l_709},{(void*)0,&l_751,&l_744,(void*)0},{&g_3,(void*)0,&l_751,&g_40},{&g_3,&l_710[8],&g_6,&l_710[6]},{&g_108,(void*)0,&g_569,&l_799},{&l_751,&l_751,&l_710[2],&l_710[8]}},{{&l_744,&g_3,&g_139,&g_139},{&g_6,&g_139,&l_751,(void*)0},{&l_710[8],&l_710[2],(void*)0,(void*)0},{&g_569,&g_139,&g_40,&l_710[7]},{&g_108,&l_751,&g_40,&g_118},{&l_744,&l_710[5],&g_40,&g_6}},{{(void*)0,&l_710[8],&l_710[8],&g_108},{&l_710[8],&g_108,&g_108,(void*)0},{&l_709,&l_710[2],&g_139,&l_709},{&g_108,&g_139,&g_118,(void*)0},{(void*)0,&l_751,&l_751,&l_710[1]},{&g_40,&l_709,(void*)0,(void*)0}},{{&g_139,&g_139,&l_751,&g_6},{&l_710[2],&g_3,&g_139,&g_3},{&l_751,&g_108,&g_139,&g_139},{(void*)0,&g_108,&l_744,&g_3},{&g_108,&g_3,&g_40,&g_6},{&l_710[2],&g_139,&l_709,(void*)0}},{{&l_790,&l_709,&l_744,&l_710[1]},{&l_709,&l_751,&l_710[2],(void*)0},{&g_3,&g_139,&l_709,&l_709},{&l_744,&l_710[2],(void*)0,(void*)0},{&g_118,&g_108,&l_790,&g_108},{&l_710[6],&l_709,&g_118,&g_139}},{{&g_40,&l_710[2],(void*)0,&g_40},{&g_40,(void*)0,(void*)0,&g_40},{&g_40,(void*)0,(void*)0,(void*)0},{(void*)0,&g_569,&g_758,&g_40},{&l_751,&l_710[2],(void*)0,(void*)0},{&g_139,&l_710[7],&l_710[2],&l_709}},{{&l_710[2],&g_118,&g_569,&l_710[8]},{&g_569,(void*)0,&l_751,&l_710[8]},{&g_6,&l_790,&g_139,&l_744},{&l_751,&g_108,&l_751,&g_139},{&l_744,&l_744,&l_744,(void*)0},{&g_758,&l_710[2],&l_790,(void*)0}}};
                    int i, j, k;
                    for (g_293 = 9; (g_293 >= 0); g_293 -= 1)
                    {
                        int32_t *l_773 = &l_709;
                        int32_t * const *l_775[3][9] = {{&g_213,(void*)0,&g_213,(void*)0,&g_213,&l_773,&l_773,&g_213,(void*)0},{(void*)0,&g_645,(void*)0,&l_773,&g_213,&g_213,&l_773,(void*)0,&g_645},{&g_645,(void*)0,&l_773,&g_213,&g_213,&l_773,(void*)0,&g_645,(void*)0}};
                        int32_t * const **l_774 = &l_775[1][7];
                        int i, j;
                        (*l_735) = func_16(l_703[(g_118 + 2)][p_12]);
                        (**g_604) = (*g_605);
                        l_773 = func_16(g_767[3][1]);
                        (*g_213) = (l_774 == l_776);
                    }
                    for (g_6 = 1; (g_6 <= 9); g_6 += 1)
                    {
                        int32_t *l_777 = &l_709;
                        int32_t *l_778 = &l_710[2];
                        int32_t *l_779 = (void*)0;
                        int32_t *l_780 = (void*)0;
                        int32_t *l_781 = &l_744;
                        int32_t *l_782 = (void*)0;
                        int32_t *l_783 = &g_108;
                        int32_t *l_784 = &l_744;
                        int32_t *l_785 = &g_139;
                        int32_t *l_786[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_786[i] = &l_710[2];
                        (*g_213) = (-1L);
                        (*g_213) = 0x48A2ABB0L;
                        --l_787;
                    }
                    g_810++;
                    if (l_703[p_12][p_12])
                        break;
                }
                if ((((safe_sub_func_int16_t_s_s(8L, (safe_add_func_uint8_t_u_u((((((0UL <= (((g_103 & (((g_766[5][0][4] & (((**l_735) != (((safe_sub_func_uint32_t_u_u(((safe_mod_func_int32_t_s_s((***l_776), (safe_rshift_func_uint8_t_u_u((((g_810 > g_304) ^ ((!(0xF2L > 1L)) & p_15)) == l_802), p_12)))) ^ l_802), (**l_735))) != p_12) && 1UL)) | p_12)) <= 0x2931L) != g_572)) <= l_805[0]) >= 0L)) != l_808[2]) ^ p_13) <= l_801) > (*p_14)), (***l_776))))) == p_15) | l_824))
                {
                    (*g_213) = (((p_11 == &l_805[0]) | (safe_mod_func_int8_t_s_s((1L && (((g_6 >= ((((safe_lshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(0xF4ACL, ((safe_sub_func_int16_t_s_s((((safe_rshift_func_int8_t_s_u(((0x42DBDA68L >= g_303) ^ (safe_mod_func_uint32_t_u_u(((((void*)0 != p_11) > p_15) >= p_12), (*p_11)))), (***l_776))) == 4294967295UL) < l_808[2]), g_766[5][0][4])) || (**l_735)))), 4)) & g_837[5]) <= 0xF0L) || p_13)) & g_684[6]) || l_802)), 0x2FL))) != (**l_735));
                    (*g_213) &= (safe_lshift_func_int8_t_s_u((***l_776), 3));
                }
                else
                {
                    int32_t l_852 = 6L;
                    uint32_t l_859 = 4294967291UL;
                    int32_t * const ** const **l_869 = (void*)0;
                    l_806 |= ((safe_add_func_uint16_t_u_u((((!(+(safe_lshift_func_int8_t_s_u(p_15, 4)))) != g_40) <= (l_846[6][0][1] == l_847)), (safe_sub_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(l_852, (safe_add_func_uint16_t_u_u(g_570, ((safe_mod_func_int16_t_s_s(((safe_add_func_uint32_t_u_u(g_293, (p_12 || ((**l_735) != l_859)))) && (*g_645)), g_570)) ^ l_799))))), 0x7DL)))) == g_139);
                    if ((***l_776))
                        continue;
                    l_861 = ((***l_776) <= ((safe_unary_minus_func_uint16_t_u(l_852)) > (*p_14)));
                    l_805[0] &= (safe_mod_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_s(((void*)0 != l_866), 6)) != (g_140 | (((((g_304 | ((g_766[5][0][4] | (l_869 != l_846[6][0][1])) | p_12)) >= (((**l_735) || l_808[2]) != g_40)) | 65531UL) < 255UL) & (*p_11)))), p_15));
                }
                l_872--;
            }
        }
    }
    return g_766[4][0][4];
}
static int32_t * func_16(int32_t p_17)
{
    return &g_3;
}
static int32_t func_18(int32_t p_19, int32_t * p_20, uint8_t p_21)
{
    uint8_t l_694[8] = {255UL,255UL,255UL,255UL,255UL,255UL,255UL,255UL};
    int32_t *l_695[2][10] = {{&g_3,&g_40,(void*)0,(void*)0,(void*)0,(void*)0,&g_40,&g_3,(void*)0,&g_3},{(void*)0,&g_6,&g_139,(void*)0,&g_139,&g_6,(void*)0,&g_40,&g_40,(void*)0}};
    int i, j;
    l_694[4] = (3L <= 0x28L);
    l_695[0][6] = &p_19;
    g_696--;
    (*g_645) = 0x710BCD2DL;
    return p_21;
}
static uint16_t func_29(uint8_t p_30, int32_t * p_31, int32_t p_32, int32_t * p_33, int32_t p_34)
{
    int32_t *l_39 = &g_40;
    int32_t l_50 = 0L;
    int32_t *l_389 = &g_3;
    int32_t *l_682[6][8] = {{(void*)0,&g_108,&g_569,&g_569,&g_108,(void*)0,&g_569,(void*)0},{&g_108,(void*)0,&g_569,(void*)0,&g_108,&g_569,&g_569,&g_108},{(void*)0,&g_139,&g_108,&g_139,&g_139,&g_569,&g_139,&g_139},{&g_108,&g_139,&g_108,&g_569,&g_118,&g_118,&g_569,&g_108},{&g_139,&g_139,&g_118,&g_569,(void*)0,&g_569,&g_118,&g_139},{&g_139,&g_108,&g_569,&g_118,&g_118,&g_569,&g_108,&g_139}};
    int32_t l_683 = (-2L);
    int32_t *****l_693 = &g_605;
    int i, j;
    (*l_39) ^= g_7;
    (*g_213) = ((p_34 <= (!(-1L))) > (((safe_lshift_func_uint16_t_u_s((func_44(l_39, ((*l_39) == 0x4A10L), ((l_50 > ((safe_div_func_int32_t_s_s(((((func_53(func_59(((void*)0 == &g_3), (*l_39), &g_6, g_40), (*l_39), &g_3, g_111, l_389) >= 0xD6B8L) && 0x4297AA09L) && p_34) == (*l_39)), (*g_213))) & (*l_39))) < 0x96L), (*l_39), &l_50) > g_103), g_6)) && 0xBBE02532L) && (*l_39)));
    g_685--;
    for (g_570 = 9; (g_570 >= 0); g_570 -= 1)
    {
        int i;
        (*g_645) = (safe_unary_minus_func_int8_t_s((((safe_div_func_uint32_t_u_u((g_684[g_570] <= g_569), g_139)) & 249UL) != (safe_lshift_func_uint16_t_u_u(p_30, ((void*)0 == (*g_605)))))));
        l_693 = &g_605;
    }
    return p_30;
}
static int8_t func_44(int32_t * p_45, uint32_t p_46, int8_t p_47, uint32_t p_48, int32_t * p_49)
{
    int32_t ***l_403 = &g_370;
    int32_t *l_413 = (void*)0;
    int32_t ****l_419 = &l_403;
    int32_t * const l_429 = &g_6;
    int32_t l_466[4];
    int32_t l_472 = 0xAADC6A7CL;
    int16_t l_556 = 0xAF9DL;
    uint32_t l_577 = 0xA6571AFBL;
    int32_t l_597[5][3] = {{0x09A93390L,(-4L),0x09A93390L},{0xA47B9C66L,0x5CAA1B70L,0xA47B9C66L},{0x09A93390L,(-4L),0x09A93390L},{0xA47B9C66L,0x5CAA1B70L,0xA47B9C66L},{0x09A93390L,(-4L),0x09A93390L}};
    uint8_t l_600[5][8][5] = {{{0xEDL,0x31L,0xEDL,0x29L,255UL},{0UL,0x58L,0x93L,0x38L,0xA9L},{1UL,0x31L,254UL,0xE3L,255UL},{0x93L,0x0FL,0x93L,0xA9L,0x38L},{1UL,0xEAL,0xEDL,0xE3L,0x42L},{0UL,0x0FL,0xD4L,0x38L,0x38L},{0xEDL,0x31L,0xEDL,0x29L,255UL},{0UL,0x58L,0x93L,0x38L,0xA9L}},{{1UL,0x31L,254UL,0xE3L,255UL},{0x93L,0x0FL,0x93L,0xA9L,0x38L},{1UL,0xEAL,0xEDL,0xE3L,0x42L},{0UL,0x0FL,0xD4L,0x38L,0x38L},{0xEDL,0x31L,0xEDL,0x29L,255UL},{0UL,0x58L,0x93L,0x38L,0xA9L},{1UL,0x31L,254UL,0xE3L,255UL},{0x93L,0x0FL,0x93L,0xA9L,0x38L}},{{1UL,0xEAL,0xEDL,0xE3L,0x42L},{0UL,0x0FL,0xD4L,0x38L,0x38L},{0xEDL,0x31L,0xEDL,0x29L,255UL},{0UL,0x58L,0x93L,0x38L,0xA9L},{1UL,0x31L,254UL,0xE3L,255UL},{0x93L,0x0FL,0x93L,0xA9L,0x38L},{1UL,0xEAL,0xEDL,0xE3L,0x42L},{0UL,0x0FL,0xD4L,0x38L,0x38L}},{{0xEDL,0x31L,0xEDL,0x29L,255UL},{0UL,0x58L,0x93L,0x38L,0xA9L},{1UL,0x31L,254UL,0xE3L,255UL},{0x93L,0x0FL,0x93L,0xA9L,0x38L},{1UL,0xEAL,0xEDL,0xE3L,0x42L},{0UL,1UL,0xDAL,0x93L,0x93L},{3UL,0UL,3UL,0UL,0xEDL},{8UL,0x7BL,0xF6L,0x93L,0xD4L}},{{0x1CL,0UL,0xCCL,0xC2L,0xEDL},{0xF6L,1UL,0xF6L,0xD4L,0x93L},{0x1CL,255UL,3UL,0xC2L,254UL},{8UL,1UL,0xDAL,0x93L,0x93L},{3UL,0UL,3UL,0UL,0xEDL},{8UL,0x7BL,0xF6L,0x93L,0xD4L},{0x1CL,0UL,0xCCL,0xC2L,0xEDL},{0xF6L,1UL,0xF6L,0xD4L,0x93L}}};
    int8_t l_650 = 0xCEL;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_466[i] = 9L;
    for (g_141 = 0; (g_141 > 43); g_141 = safe_add_func_int16_t_s_s(g_141, 7))
    {
        int16_t l_412 = (-8L);
        int32_t *l_417[3];
        int i;
        for (i = 0; i < 3; i++)
            l_417[i] = &g_139;
        for (g_111 = 0; (g_111 != 30); g_111 = safe_add_func_int16_t_s_s(g_111, 5))
        {
            uint16_t l_399[4][5] = {{0x8C2DL,0x7373L,0x8C2DL,0x7373L,0x8C2DL},{0xD957L,0xD957L,0xD957L,0xD957L,0xD957L},{0x8C2DL,0x7373L,0x8C2DL,0x7373L,0x8C2DL},{0xD957L,0xD957L,0xD957L,0xD957L,0xD957L}};
            int32_t *l_415 = &g_6;
            int32_t **l_416[3];
            int i, j;
            for (i = 0; i < 3; i++)
                l_416[i] = &l_415;
            for (g_40 = 0; (g_40 > (-27)); g_40 = safe_sub_func_uint16_t_u_u(g_40, 5))
            {
                int32_t l_402[6][9] = {{0x162D6F5CL,0xD5363CB6L,0x162D6F5CL,1L,1L,0x162D6F5CL,0xD5363CB6L,0x162D6F5CL,1L},{0x162D6F5CL,1L,1L,0x162D6F5CL,0xD5363CB6L,0x162D6F5CL,1L,1L,0x162D6F5CL},{0xDE4F27F6L,1L,(-1L),1L,0xDE4F27F6L,0xDE4F27F6L,1L,(-1L),1L},{1L,0xD5363CB6L,(-1L),(-1L),0xD5363CB6L,1L,0xD5363CB6L,(-1L),(-1L)},{0xDE4F27F6L,0xDE4F27F6L,1L,(-1L),1L,0xDE4F27F6L,0xDE4F27F6L,1L,(-1L)},{0x162D6F5CL,0xD5363CB6L,0x162D6F5CL,1L,1L,0x162D6F5CL,0xD5363CB6L,0x162D6F5CL,1L}};
                uint32_t l_414 = 0x3333DDF1L;
                int i, j;
                for (p_47 = (-3); (p_47 == (-2)); p_47 = safe_add_func_uint8_t_u_u(p_47, 7))
                {
                    int32_t *l_401 = (void*)0;
                    int32_t **l_400 = &l_401;
                    for (g_139 = 3; (g_139 >= 0); g_139 -= 1)
                    {
                        int i, j;
                        (*g_369) = l_400;
                        (**g_369) = func_16(l_399[g_139][(g_139 + 1)]);
                    }
                    (*p_49) = (l_402[5][8] != ((((((((g_139 < ((l_403 == &l_400) & (((safe_lshift_func_uint16_t_u_s((((0x0DL != (l_399[2][1] < (safe_lshift_func_uint8_t_u_u(((p_47 || (l_412 == ((void*)0 != l_413))) != (*g_213)), l_399[1][1])))) || (*p_49)) ^ 0xC5EAL), 15)) == l_412) >= g_139))) < l_414) <= 0x2FD4L) == 0x0CFA7A62L) < l_412) && g_304) | (*p_45)) <= p_46));
                }
                (*p_49) = ((l_412 && l_414) & g_304);
            }
            l_417[1] = l_415;
            (*p_45) = (safe_unary_minus_func_int32_t_s((*g_213)));
            if ((*p_49))
                break;
        }
    }
    (*l_419) = l_403;
    for (g_141 = 0; (g_141 == 2); g_141 = safe_add_func_uint16_t_u_u(g_141, 3))
    {
        int16_t l_426[8] = {0L,0L,0L,0L,0L,0L,0L,0L};
        int32_t *l_430[7][4];
        int32_t l_437[3][3][8] = {{{0xB2BD2B96L,(-1L),(-1L),0x2E06FD1DL,0x2E06FD1DL,(-1L),(-1L),0xB2BD2B96L},{(-6L),0x60358341L,(-1L),0x18ADAD0AL,(-1L),0x48CD3415L,(-1L),0x18ADAD0AL},{0x2E06FD1DL,0L,0x2E06FD1DL,0xFDA832B1L,0x18ADAD0AL,0x48CD3415L,(-1L),(-1L)}},{{(-1L),0x60358341L,(-6L),(-6L),0x60358341L,(-1L),0x18ADAD0AL,(-1L)},{(-1L),(-1L),0xB2BD2B96L,0x60358341L,0x18ADAD0AL,0x60358341L,0xB2BD2B96L,(-1L)},{0x2E06FD1DL,0xB2BD2B96L,0x48CD3415L,0x60358341L,(-1L),0xFDA832B1L,0xFDA832B1L,(-1L)}},{{(-6L),(-1L),(-1L),(-6L),0x2E06FD1DL,(-1L),0xFDA832B1L,0x2E06FD1DL},{0L,(-1L),(-1L),0xB2BD2B96L,(-1L),(-1L),0L,(-1L)},{(-1L),(-1L),0L,(-1L),0x48CD3415L,0x48CD3415L,(-1L),0L}}};
        const int32_t *l_567 = &l_472;
        const int32_t **l_566[5] = {&l_567,&l_567,&l_567,&l_567,&l_567};
        const int32_t ***l_565 = &l_566[2];
        const int32_t ****l_564[10] = {&l_565,&l_565,&l_565,&l_565,(void*)0,&l_565,&l_565,&l_565,&l_565,(void*)0};
        const int32_t *****l_603[2][8][10] = {{{&l_564[0],&l_564[2],&l_564[8],&l_564[8],&l_564[7],&l_564[8],&l_564[5],&l_564[9],(void*)0,&l_564[9]},{&l_564[6],&l_564[8],&l_564[8],(void*)0,&l_564[0],&l_564[8],&l_564[8],&l_564[8],&l_564[0],&l_564[8]},{&l_564[2],&l_564[8],&l_564[8],&l_564[8],&l_564[6],&l_564[8],&l_564[8],&l_564[8],&l_564[2],&l_564[6]},{&l_564[8],&l_564[3],&l_564[8],&l_564[8],&l_564[1],&l_564[8],&l_564[2],&l_564[8],&l_564[9],&l_564[0]},{&l_564[8],&l_564[1],&l_564[9],&l_564[8],&l_564[0],&l_564[4],&l_564[8],&l_564[8],&l_564[2],&l_564[8]},{&l_564[6],&l_564[8],&l_564[8],&l_564[8],&l_564[8],&l_564[8],&l_564[3],(void*)0,&l_564[0],&l_564[6]},{(void*)0,(void*)0,&l_564[6],(void*)0,&l_564[0],&l_564[0],(void*)0,&l_564[6],(void*)0,(void*)0},{&l_564[4],&l_564[8],&l_564[8],&l_564[8],&l_564[8],&l_564[7],&l_564[8],&l_564[3],&l_564[4],&l_564[8]}},{{&l_564[8],&l_564[8],&l_564[8],&l_564[8],&l_564[8],(void*)0,&l_564[0],&l_564[8],&l_564[7],(void*)0},{&l_564[8],&l_564[8],&l_564[8],&l_564[9],&l_564[0],&l_564[8],&l_564[8],&l_564[6],&l_564[8],&l_564[6]},{&l_564[0],&l_564[8],&l_564[4],&l_564[1],&l_564[8],&l_564[7],&l_564[8],&l_564[1],&l_564[4],&l_564[8]},{&l_564[7],&l_564[4],&l_564[8],&l_564[9],&l_564[0],&l_564[3],&l_564[8],&l_564[0],&l_564[8],&l_564[0]},{&l_564[0],&l_564[7],&l_564[8],&l_564[2],&l_564[1],&l_564[3],&l_564[8],(void*)0,&l_564[8],&l_564[6]},{&l_564[7],&l_564[9],&l_564[8],(void*)0,&l_564[6],&l_564[7],&l_564[9],&l_564[3],&l_564[8],&l_564[8]},{&l_564[0],&l_564[8],&l_564[9],&l_564[8],&l_564[0],&l_564[8],&l_564[8],&l_564[0],&l_564[8],&l_564[9]},{&l_564[8],&l_564[8],&l_564[9],&l_564[4],&l_564[7],(void*)0,(void*)0,&l_564[0],&l_564[5],&l_564[8]}}};
        uint32_t l_678 = 0xA3BA4B14L;
        int i, j, k;
        for (i = 0; i < 7; i++)
        {
            for (j = 0; j < 4; j++)
                l_430[i][j] = &g_118;
        }
    }
    return p_48;
}
static const int16_t func_53(int32_t * p_54, const int8_t p_55, int32_t * p_56, uint16_t p_57, int32_t * p_58)
{
    uint32_t l_390[3][4][5] = {{{0UL,0UL,0x2A1438EBL,0xFF3AD8DBL,0UL},{1UL,0x39EF4DCCL,0x39EF4DCCL,1UL,0x8A954B93L},{4UL,0xFF3AD8DBL,18446744073709551613UL,18446744073709551613UL,0xFF3AD8DBL},{0x8A954B93L,0x39EF4DCCL,0xB3921B82L,0xA8646D64L,0xA8646D64L}},{{1UL,0UL,1UL,18446744073709551613UL,0x2A1438EBL},{0xD7B6BB72L,1UL,0xA8646D64L,1UL,0xD7B6BB72L},{1UL,4UL,0UL,0xFF3AD8DBL,0UL},{0x8A954B93L,0x8A954B93L,0xA8646D64L,0xD7B6BB72L,0x5217F3F5L}},{{4UL,1UL,1UL,4UL,0UL},{1UL,0xD7B6BB72L,0xB3921B82L,0xB3921B82L,0xD7B6BB72L},{0UL,1UL,18446744073709551613UL,0x2A1438EBL,0x2A1438EBL},{0x39EF4DCCL,0x8A954B93L,0x39EF4DCCL,0xB3921B82L,0xA8646D64L}}};
    int i, j, k;
    l_390[0][3][3] ^= (*p_54);
    return g_103;
}
static int32_t * func_59(int16_t p_60, uint32_t p_61, int32_t * p_62, uint16_t p_63)
{
    uint16_t l_76 = 65528UL;
    int32_t *l_238[1];
    int32_t **l_237 = &l_238[0];
    int8_t l_294 = 0xFBL;
    int32_t *l_376 = &g_6;
    int32_t **l_381 = &l_238[0];
    int i;
    for (i = 0; i < 1; i++)
        l_238[i] = &g_118;
    for (g_7 = (-1); (g_7 != 37); ++g_7)
    {
        const int8_t l_77 = 0x62L;
        int32_t *l_157 = (void*)0;
        int16_t l_295[6][2][8] = {{{0x61F0L,0x608CL,0xA547L,8L,(-5L),(-1L),(-1L),(-1L)},{0x8030L,(-1L),0L,0L,(-1L),0x8030L,0xE4A1L,(-6L)}},{{(-1L),(-5L),8L,0xA547L,0x608CL,0x61F0L,(-5L),(-10L)},{(-3L),0x8030L,(-6L),0xA547L,1L,(-1L),0x608CL,(-6L)}},{{1L,1L,0xF9F1L,0L,0xF9F1L,1L,1L,(-1L)},{(-10L),(-1L),0x608CL,8L,0xE4A1L,9L,0xA547L,0xF9F1L}},{{0x8030L,(-2L),1L,(-6L),0xE4A1L,0x8030L,(-1L),0L},{(-10L),0x5C9EL,8L,0xF9F1L,0xF9F1L,8L,0x5C9EL,(-10L)}},{{1L,0xA547L,1L,0x608CL,1L,0xB0A5L,0xF9F1L,1L},{(-3L),1L,(-1L),1L,0x608CL,0xB0A5L,1L,0x8030L}},{{(-1L),0xA547L,0x8030L,8L,(-1L),8L,0x8030L,0xA547L},{0x8030L,0x5C9EL,0x6C89L,1L,(-5L),0x8030L,(-2L),1L}}};
        int32_t l_301 = (-7L);
        uint32_t l_336 = 4294967289UL;
        int16_t l_363 = (-1L);
        int i, j, k;
    }
    if ((safe_unary_minus_func_uint32_t_u(((0xF2L && (safe_unary_minus_func_uint8_t_u(((g_369 != (void*)0) ^ ((safe_lshift_func_int16_t_s_u((safe_sub_func_int16_t_s_s(p_60, (!(**l_237)))), (&g_370 == (void*)0))) >= ((l_376 != p_62) & p_61)))))) & p_60))))
    {
        for (g_141 = 0; (g_141 <= 48); ++g_141)
        {
            uint32_t l_379 = 0xA71BACA6L;
            int32_t **l_380 = (void*)0;
            (**l_237) = (*p_62);
            l_379 = 0L;
            for (p_60 = 0; p_60 < 1; p_60 += 1)
            {
                l_238[p_60] = &g_108;
            }
            (**l_237) ^= (l_380 == l_381);
        }
    }
    else
    {
        uint16_t l_382 = 0x1219L;
        ++l_382;
        for (p_63 = 0; (p_63 <= 0); p_63 += 1)
        {
            uint32_t l_386 = 0UL;
            int i;
            l_238[p_63] = l_238[p_63];
            (**l_237) ^= (((void*)0 == &g_370) == (l_238[p_63] == (void*)0));
            for (l_382 = 0; (l_382 <= 0); l_382 += 1)
            {
                int i;
                (**l_381) = (*p_62);
                for (g_139 = 0; (g_139 >= 0); g_139 -= 1)
                {
                    int32_t l_385[5];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_385[i] = 3L;
                    l_386--;
                }
            }
        }
    }
    return p_62;
}
static int32_t func_66(uint8_t p_67, uint32_t p_68, int32_t * p_69, int32_t * p_70)
{
    int32_t *l_158 = &g_139;
    int16_t l_187 = 0x4E33L;
    (*l_158) = ((((p_70 == l_158) || (*l_158)) < (safe_lshift_func_int8_t_s_s((((((~g_6) | (safe_rshift_func_uint16_t_u_u((+(((void*)0 != &g_139) ^ (p_69 != (void*)0))), 4))) | 0xDA7943A2L) == p_67) <= 0UL), 2))) ^ p_67);
    (*l_158) = ((((((safe_rshift_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(p_67, (safe_unary_minus_func_uint8_t_u(((void*)0 == l_158))))), 2)) >= g_108) & 0x062AD804L) == (*l_158)) > 0x72L) && (safe_sub_func_int16_t_s_s(0xF93AL, ((safe_sub_func_int16_t_s_s((((void*)0 != l_158) ^ 0x84C1L), (*l_158))) >= (-1L)))));
    if (((safe_sub_func_uint16_t_u_u((((*l_158) == (safe_rshift_func_uint16_t_u_s((safe_div_func_int32_t_s_s(((safe_sub_func_uint32_t_u_u(p_68, (g_139 < ((safe_div_func_int8_t_s_s((((((safe_add_func_int32_t_s_s((0x9656720CL < 0xFA83A99FL), g_6)) ^ (~((void*)0 != p_69))) != ((*l_158) && p_68)) && (*l_158)) || (*l_158)), l_187)) < 0xE1L)))) == g_3), (*l_158))), g_140))) & 0x6BL), p_67)) & (*l_158)))
    {
        uint32_t l_204 = 0xE12F5BDEL;
        int32_t *l_205 = &g_139;
        g_108 ^= (((safe_rshift_func_uint16_t_u_s((safe_div_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s(0x82L, 1)), (safe_rshift_func_int8_t_s_u(p_68, ((4L != (1UL ^ 3UL)) | p_67))))), (safe_mod_func_int16_t_s_s((safe_div_func_uint32_t_u_u((p_67 != (safe_div_func_uint32_t_u_u((safe_div_func_int16_t_s_s((*l_158), (p_67 | 0xD8EAL))), g_103))), g_6)), g_3)))) == l_204) | 0xA2L);
        l_205 = &g_139;
    }
    else
    {
        int32_t *l_214 = &g_40;
        (*l_158) = (safe_rshift_func_int16_t_s_u((safe_unary_minus_func_uint32_t_u((safe_lshift_func_uint8_t_u_s(((safe_rshift_func_int8_t_s_s((5L >= (g_213 != l_214)), 3)) < (0x0EL ^ (g_139 == (&g_6 == &g_139)))), ((p_69 != &g_3) & 5L))))), 7));
    }
    for (g_140 = 0; (g_140 <= (-4)); g_140 = safe_sub_func_int32_t_s_s(g_140, 4))
    {
        int32_t *l_217[8] = {&g_139,&g_139,&g_139,&g_139,&g_139,&g_139,&g_139,&g_139};
        int32_t **l_218 = &l_217[5];
        int i;
        (*l_158) |= (-8L);
        (*l_218) = l_217[5];
        (*l_158) = (0xD573L || g_139);
    }
    return (*g_213);
}
static uint8_t func_71(int32_t p_72, int32_t * p_73, const uint32_t p_74, int32_t * p_75)
{
    int32_t l_86[1][2];
    int32_t *l_104 = &g_40;
    int32_t l_109 = 0xB35A07F5L;
    int32_t l_110 = 3L;
    int32_t l_156 = 0L;
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
            l_86[i][j] = 0x888A0E7BL;
    }
    if (((0xEFBBL > 6UL) == (safe_lshift_func_uint16_t_u_u((l_86[0][0] && ((l_86[0][0] ^ (l_86[0][0] || (safe_unary_minus_func_int16_t_s((safe_div_func_int16_t_s_s(p_74, (safe_rshift_func_int16_t_s_u((safe_sub_func_uint16_t_u_u(l_86[0][0], 0x6DE1L)), 2)))))))) > (safe_add_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(((safe_mod_func_int8_t_s_s((0xB60AL < g_40), (-1L))) != l_86[0][0]), 3)), p_74)))), 7))))
    {
        for (p_72 = 0; (p_72 >= 0); p_72 -= 1)
        {
            return g_3;
        }
    }
    else
    {
        uint8_t l_102 = 0x70L;
        g_103 = (safe_sub_func_int16_t_s_s(l_102, 0xB033L));
        return l_102;
    }
    p_72 = (l_104 != (void*)0);
    for (g_103 = 0; (g_103 != 58); g_103++)
    {
        int32_t *l_107[9][10][2] = {{{&g_40,&g_3},{&g_3,&g_40},{&g_3,&g_3},{&g_40,&g_3},{&g_3,&g_40},{&g_3,&g_3},{&g_40,&g_3},{&g_3,&g_40},{&g_3,&g_3},{&g_40,&g_3}},{{&g_3,&g_40},{&g_3,&g_3},{&g_40,&g_40},{&g_40,&g_108},{&g_40,&g_40},{&g_108,&g_40},{&g_40,&g_108},{&g_40,&g_40},{&g_108,&g_40},{&g_40,&g_108}},{{&g_40,&g_40},{&g_108,&g_40},{&g_40,&g_108},{&g_40,&g_40},{&g_108,&g_40},{&g_40,&g_108},{&g_40,&g_40},{&g_108,&g_40},{&g_40,&g_108},{&g_40,&g_40}},{{&g_108,&g_40},{&g_40,&g_108},{&g_40,&g_40},{&g_108,&g_40},{&g_40,&g_108},{&g_40,&g_40},{&g_108,&g_40},{&g_40,&g_108},{&g_40,&g_40},{&g_108,&g_40}},{{&g_40,&g_108},{&g_40,&g_40},{&g_108,&g_40},{&g_40,&g_108},{&g_40,&g_40},{&g_108,&g_40},{&g_40,&g_108},{&g_40,&g_40},{&g_108,&g_40},{&g_40,&g_108}},{{&g_40,&g_40},{&g_108,&g_40},{&g_40,&g_108},{&g_40,&g_40},{&g_108,&g_40},{&g_40,&g_108},{&g_40,&g_40},{&g_108,&g_40},{&g_40,&g_108},{&g_40,&g_40}},{{&g_108,&g_40},{&g_40,&g_108},{&g_40,&g_40},{&g_108,&g_40},{&g_40,&g_108},{&g_40,&g_40},{&g_108,&g_40},{&g_40,&g_108},{&g_40,&g_40},{&g_108,&g_40}},{{&g_40,&g_108},{&g_40,&g_40},{&g_108,&g_40},{&g_40,&g_108},{&g_40,&g_40},{&g_108,&g_40},{&g_40,&g_108},{&g_40,&g_40},{&g_108,&g_40},{&g_40,&g_108}},{{&g_40,&g_40},{&g_108,&g_40},{&g_40,&g_108},{&g_40,&g_40},{&g_108,&g_40},{&g_40,&g_108},{&g_40,&g_40},{&g_108,&g_40},{&g_40,&g_108},{&g_40,&g_40}}};
        int32_t l_125 = 0xCE71E83BL;
        uint16_t l_146 = 0x3469L;
        int i, j, k;
        ++g_111;
        if (((*p_75) == ((((0x4168L <= (&g_6 == &g_6)) > (safe_add_func_uint8_t_u_u((*l_104), ((&l_110 == &p_72) || ((&p_72 == (void*)0) | (*l_104)))))) != 9L) >= p_74)))
        {
            int32_t *l_131[1];
            int i;
            for (i = 0; i < 1; i++)
                l_131[i] = (void*)0;
            for (g_108 = 9; (g_108 == (-19)); --g_108)
            {
                g_118 = (g_103 <= p_74);
            }
            for (g_118 = (-23); (g_118 <= (-28)); g_118--)
            {
                uint32_t l_126 = 0UL;
                int32_t l_135 = 0xBE6058BBL;
                uint16_t l_136[10] = {65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL};
                int i;
                l_125 = (((((void*)0 == &g_108) >= (safe_lshift_func_int8_t_s_s((0xB137L > g_40), 7))) | 0x2CFE06C7L) <= ((*p_75) != (safe_lshift_func_int8_t_s_s((g_6 <= g_103), 0))));
                g_108 = ((*p_73) & l_126);
                g_108 = (safe_div_func_int32_t_s_s(((((safe_rshift_func_int16_t_s_u(((p_72 >= (l_131[0] == &p_72)) & 65529UL), (g_111 | ((((safe_add_func_int16_t_s_s((p_74 > (!((p_72 || (((*p_73) > 0x47FA911AL) ^ g_40)) != g_118))), 1UL)) != g_7) <= g_103) | 0x8730L)))) ^ p_74) >= (-1L)) > 0xF35AL), 0xCA9F70EFL));
                --l_136[6];
            }
            g_141++;
            for (g_111 = 0; (g_111 != 51); g_111++)
            {
                g_108 &= 0L;
            }
        }
        else
        {
            --l_146;
        }
    }
    for (g_111 = 0; (g_111 != 32); g_111 = safe_add_func_uint8_t_u_u(g_111, 4))
    {
        for (g_118 = 0; (g_118 < 18); g_118 = safe_add_func_int32_t_s_s(g_118, 7))
        {
            for (l_109 = (-5); (l_109 != 29); l_109++)
            {
                uint8_t l_155 = 0x51L;
                return l_155;
            }
        }
    }
    return l_156;
}
int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_3;
    csmith_sink_ = g_6;
    csmith_sink_ = g_7;
    csmith_sink_ = g_40;
    csmith_sink_ = g_103;
    csmith_sink_ = g_108;
    csmith_sink_ = g_111;
    csmith_sink_ = g_118;
    csmith_sink_ = g_139;
    csmith_sink_ = g_140;
    csmith_sink_ = g_141;
    csmith_sink_ = g_240;
    csmith_sink_ = g_293;
    csmith_sink_ = g_303;
    csmith_sink_ = g_304;
    csmith_sink_ = g_438;
    csmith_sink_ = g_479;
    csmith_sink_ = g_569;
    csmith_sink_ = g_570;
    csmith_sink_ = g_572;
    for (i = 0; i < 10; i++)
    {
        csmith_sink_ = g_684[i];
    }
    csmith_sink_ = g_685;
    csmith_sink_ = g_696;
    csmith_sink_ = g_758;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 6; k++)
            {
                csmith_sink_ = g_766[i][j][k];
            }
        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            csmith_sink_ = g_767[i][j];
        }
    }
    csmith_sink_ = g_807;
    csmith_sink_ = g_810;
    for (i = 0; i < 7; i++)
    {
        csmith_sink_ = g_837[i];
    }
    platform_main_end(0,0);
    return 0;
}
