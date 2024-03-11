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
struct S0 {
   signed f0 : 26;
   signed f1 : 7;
   unsigned f2 : 13;
   signed f3 : 5;
   unsigned : 0;
   unsigned f4 : 23;
   signed f5 : 25;
   signed f6 : 10;
   uint8_t f7;
};
static int32_t g_2 = 0x08974B66;
static uint32_t g_15 = 1U;
static int32_t *g_54 = &g_2;
static int32_t **g_53 = &g_54;
static uint32_t g_61 = 0x8CD908FB;
static int32_t g_64 = (-6);
static int16_t g_80 = 0xDEEA;
static uint32_t g_88 = 0U;
static struct S0 g_91 = {-7269,-0,38,2,2294,4252,-12,0xA9};
static int8_t g_124 = 0;
static uint16_t g_129 = 0x0F1D;
static int16_t g_153 = 0xC61B;
static int8_t g_202 = (-1);
static int8_t g_233 = 0x87;
static struct S0 g_236 = {1410,4,49,1,1314,-172,9,6U};
static struct S0 g_239 = {-6901,-0,73,-3,2198,-922,-23,246U};
static uint32_t *g_262 = &g_61;
static uint32_t **g_261 = &g_262;
static uint16_t g_268 = 65535U;
static uint8_t *g_361 = (void*)0;
static int32_t g_371 = 3;
static int32_t ***g_422 = &g_53;
static uint8_t g_523 = 0xD9;
static uint32_t g_568 = 0U;
static int8_t ***g_683 = (void*)0;
static int8_t **g_686 = (void*)0;
static int8_t ***g_685 = &g_686;
static uint8_t **g_727 = &g_361;
static int32_t g_744 = 0x30DB0D56;
static int32_t g_757 = (-4);
static uint32_t g_817 = 0x7719AE2D;
static int16_t **g_839 = (void*)0;
static uint32_t ****g_880 = (void*)0;
static int8_t g_888 = 1;
static int8_t ****g_931 = &g_685;
static uint16_t *g_936 = (void*)0;
static uint16_t **g_935 = &g_936;
static int32_t func_1(void);
static uint16_t func_6(int16_t p_7, int32_t p_8, uint32_t p_9, int8_t p_10, int8_t p_11);
static int8_t func_16(uint32_t p_17, uint32_t p_18, uint32_t p_19);
static uint16_t func_21(int32_t p_22, int32_t p_23, uint8_t p_24, uint8_t p_25);
static int32_t * func_30(int32_t * p_31, int32_t * p_32);
static int32_t * func_33(uint8_t p_34, int8_t p_35, int32_t p_36, uint16_t p_37, int32_t p_38);
static int16_t func_39(int32_t * p_40, int32_t * p_41, int32_t * p_42, int32_t p_43);
static int32_t ** func_47(int32_t ** p_48);
static int32_t * func_56(int32_t * p_57, int32_t ** p_58);
static int32_t * func_67(int32_t p_68, uint8_t p_69, int32_t *** p_70, int32_t * p_71, int32_t p_72);
static int32_t func_1(void)
{
    uint16_t l_29 = 0U;
    struct S0 l_600 = {1844,-3,31,4,716,874,8,0U};
    int32_t *l_970 = &g_744;
    int8_t l_975 = 0x4F;
    uint32_t l_976 = 0x19DC15C9;
    uint32_t *l_977 = &g_817;
    int8_t l_978 = 0xD7;
    int16_t l_979 = 0xF87B;
    int16_t *l_980 = &g_80;
    for (g_2 = 0; (g_2 != (-24)); g_2 = safe_sub_func_uint16_t_u_u(g_2, 6))
    {
        int32_t l_20 = 0xC3DC99CD;
        struct S0 l_599 = {7323,5,44,2,1064,-841,19,1U};
        struct S0 *l_601 = &l_600;
        struct S0 *l_602 = &g_236;
        int8_t *l_889 = &g_124;
        if (((~g_2) != func_6(g_2, (+(safe_sub_func_int16_t_s_s((g_15 = 7), (((*l_889) = func_16(((((l_20 , ((*l_602) = ((*l_601) = ((func_21(g_2, g_2, ((2U ^ ((~(safe_lshift_func_uint8_t_u_u(0x7B, 4))) >= l_29)) && g_2), l_20) , l_599) , l_600)))) , g_236) , 4294967288U) , g_236.f2), l_29, l_599.f0)) != 1)))), g_2, l_29, l_599.f5)))
        {
            int32_t l_934 = (-8);
            for (g_91.f7 = (-6); (g_91.f7 == 29); g_91.f7++)
            {
                int8_t *****l_932 = &g_931;
                uint32_t *l_933 = &g_568;
                if ((***g_422))
                    break;
                (*l_932) = g_931;
                if ((*g_54))
                    break;
                l_934 = ((l_599.f7 < l_599.f4) >= ((*l_933) = 5U));
            }
            if (l_934)
                break;
        }
        else
        {
            uint16_t ***l_937 = &g_935;
            (*l_937) = g_935;
            (*g_53) = (*g_53);
        }
        for (g_817 = 6; (g_817 <= 48); ++g_817)
        {
            uint32_t l_940 = 4294967289U;
            int8_t *l_949 = &g_202;
            (*g_53) = func_33(l_940, ((*l_949) = ((*l_889) = (((l_940 ^ ((!((**g_53) > (l_599.f1 > l_600.f1))) , (-1))) != ((+(safe_add_func_uint8_t_u_u(0x6A, l_599.f2))) >= (safe_add_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_u(((0xA0 <= l_940) , 0xFC), l_599.f4)) & 0x8AA5), 0x3BC8A551)))) <= l_600.f2))), l_600.f4, l_600.f5, g_236.f6);
        }
    }
    ((void) sizeof ((g_262 == 0 || g_262 == &g_61 || g_262 == &g_2) ? 1 : 0), __extension__ ({ if (g_262 == 0 || g_262 == &g_61 || g_262 == &g_2) ; else __assert_fail ("g_262 == 0 || g_262 == &g_61 || g_262 == &g_2", "/tmp/tmplil3mr7o.c", 140, __extension__ __PRETTY_FUNCTION__); }));
    l_600.f1 = (safe_add_func_int32_t_s_s(((safe_rshift_func_int8_t_s_s((l_600.f3 = (safe_sub_func_uint32_t_u_u((l_600.f1 & (((l_600.f0 = ((*l_980) = (((l_600.f3 != (safe_add_func_int8_t_s_s((((**g_53) = ((((safe_add_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(((((0U >= ((*l_977) = (safe_rshift_func_uint16_t_u_s(((safe_sub_func_uint16_t_u_u((((safe_add_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u(((((*l_970) = g_233) , ((safe_rshift_func_uint16_t_u_s(((safe_rshift_func_int16_t_s_s(l_600.f7, 6)) == 0U), 12)) ^ l_600.f1)) | (*g_54)), (l_600.f0 || 1U))), g_239.f2)) != l_600.f0) , l_975), l_600.f4)) & l_976), l_976)))) >= 0x5B8B) , g_239.f3) | 0x341A), l_976)), l_978)) <= g_236.f1) < l_600.f5) & 0x0554)) , l_600.f0), 0x25))) > l_600.f1) | l_979))) || l_600.f6) , 0x8D)), 0U))), 2)) != l_600.f2), g_236.f2));
    return g_88;
}
static uint16_t func_6(int16_t p_7, int32_t p_8, uint32_t p_9, int8_t p_10, int8_t p_11)
{
    int8_t l_890 = 0x16;
    uint8_t ***l_919 = &g_727;
    uint8_t ****l_918 = &l_919;
    int32_t l_921 = 0xC090FD26;
    uint16_t l_926 = 0U;
    if (l_890)
    {
        return g_239.f0;
    }
    else
    {
        uint16_t *l_906 = &g_129;
        int32_t l_911 = (-1);
        int8_t *l_920 = &l_890;
        int32_t *l_927 = (void*)0;
        int32_t *l_928 = &l_921;
        p_8 = ((safe_sub_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_u((p_9 ^ (safe_lshift_func_int8_t_s_s((+(safe_add_func_int8_t_s_s(((*l_920) = (safe_mod_func_int16_t_s_s((p_7 = (safe_mod_func_int8_t_s_s(((l_890 ^ p_10) && (((*l_906) = (safe_lshift_func_uint8_t_u_s(0xD4, 1))) , (p_7 || (safe_mod_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u((l_911 , (((safe_rshift_func_uint8_t_u_u((l_911 , ((safe_rshift_func_int8_t_s_s(((l_890 , (((safe_lshift_func_int16_t_s_s(p_7, 5)) , (void*)0) != l_918)) != (*g_54)), 7)) , l_890)), p_9)) || p_7) != g_371)), l_890)) & 0x838DAD37), g_236.f4))))), g_239.f1))), 2))), g_757))), l_921))), 5)) ^ p_8), g_236.f6)) > (**g_53));
        (*l_928) = (safe_rshift_func_uint8_t_u_s((g_239.f7 = (((safe_sub_func_uint32_t_u_u((((p_7 != p_10) == p_11) == ((-9) < (0x0BF51782 ^ (l_890 != (l_921 == l_926))))), (p_8 = (((0x79 <= 0x76) != l_926) != l_890)))) >= 0x4A55) >= p_11)), 4));
        return p_7;
    }
}
static int8_t func_16(uint32_t p_17, uint32_t p_18, uint32_t p_19)
{
    uint8_t **l_603 = &g_361;
    uint8_t ***l_604 = &l_603;
    int32_t l_605 = 0x1F2D75E2;
    uint16_t *l_610 = &g_268;
    int32_t *l_615 = (void*)0;
    int8_t l_628 = (-4);
    int8_t *l_629 = &l_628;
    int16_t l_630 = 0xA103;
    int32_t *l_667 = (void*)0;
    int32_t ***l_708 = &g_53;
    int32_t *l_709 = &g_64;
    struct S0 l_730 = {2054,7,25,2,278,2446,0,255U};
    int32_t l_749 = 0x9FF7E0A4;
    int8_t l_866 = (-5);
    (*l_604) = l_603;
    l_605 = (l_605 , ((safe_sub_func_int8_t_s_s((1 <= ((safe_add_func_uint8_t_u_u(((l_610 != l_610) | (+((((l_605 <= (safe_lshift_func_int16_t_s_s(p_17, 2))) || ((((!l_605) <= 0x54) ^ p_17) || 0x0ECDB331)) | 0x43EB) , 0xCD0D))), l_605)) , p_17)), g_202)) < l_605));
    return g_888;
}
static uint16_t func_21(int32_t p_22, int32_t p_23, uint8_t p_24, uint8_t p_25)
{
    int32_t l_46 = 0x64548797;
    struct S0 l_270 = {7222,2,76,-1,420,2514,-11,255U};
    struct S0 *l_271 = &g_236;
    uint8_t *l_272 = &g_239.f7;
    int32_t *l_309 = &g_2;
    int32_t *l_598 = &l_46;
    (**g_422) = func_30(func_33(((*l_272) = (func_39(&g_2, &g_2, &g_2, (safe_rshift_func_int8_t_s_s(l_46, g_2))) && (((*l_271) = l_270) , g_233))), l_270.f7, p_22, g_2, g_2), l_309);
    (*l_598) = (*l_309);
    return p_22;
}
static int32_t * func_30(int32_t * p_31, int32_t * p_32)
{
    uint16_t l_320 = 0xF038;
    uint8_t *l_321 = &g_91.f7;
    int32_t *l_322 = &g_64;
    uint32_t l_358 = 0U;
    struct S0 l_402 = {-4222,3,6,1,1468,-599,-29,3U};
    uint32_t l_403 = 4294967295U;
    int32_t l_407 = 0x994A519D;
    int16_t *l_502 = &g_80;
    if (((*l_322) = (safe_sub_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_u(g_236.f1, (safe_mod_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(0x5C0E, (safe_rshift_func_uint8_t_u_s(((void*)0 != &g_262), 4)))), ((*l_321) = l_320))))) && 0x61F8), g_239.f2))))
    {
        int32_t **l_323 = &l_322;
        uint16_t *l_336 = &g_268;
        uint32_t *l_337 = &g_88;
        int8_t l_338 = 0x0A;
        uint32_t l_339 = 4294967295U;
        uint32_t **l_384 = &g_262;
        uint8_t l_458 = 0U;
        int8_t *l_491 = &g_124;
        int8_t **l_490 = &l_491;
        int16_t l_531 = 0x716D;
        uint16_t l_540 = 0U;
        struct S0 l_556 = {2759,-2,87,3,2801,-1814,-17,0xC2};
        int32_t ****l_587 = &g_422;
        (*l_323) = ((*g_53) = (*g_53));
        ((void) sizeof ((l_322 == &g_2) ? 1 : 0), __extension__ ({ if (l_322 == &g_2) ; else __assert_fail ("l_322 == &g_2", "/tmp/tmplil3mr7o.c", 254, __extension__ __PRETTY_FUNCTION__); }));
        if (((safe_rshift_func_uint8_t_u_s(((*l_321) = ((+((**l_323) >= ((g_239.f0 , ((safe_add_func_int16_t_s_s(0xF061, (((safe_add_func_uint32_t_u_u(((*l_337) = ((*p_31) ^ ((0xFDDA6023 != (g_236.f4 || ((*l_336) = (((safe_mod_func_int8_t_s_s(((safe_rshift_func_int16_t_s_u((+(*l_322)), (**l_323))) <= (-6)), 254U)) | 0x48) , 0xC05E)))) , (**l_323)))), l_338)) >= 0xC0) , (*l_322)))) == g_236.f4)) , (*g_54)))) < (**g_53))), 0)) > l_339))
        {
            int8_t l_363 = (-4);
            int32_t *l_421 = &l_407;
            int16_t *l_445 = &g_153;
            uint32_t l_524 = 4294967290U;
            int32_t *l_527 = (void*)0;
            uint32_t **l_546 = &g_262;
            for (g_202 = 0; (g_202 >= (-4)); g_202--)
            {
                int8_t l_346 = (-3);
                int32_t *l_368 = (void*)0;
                int32_t *l_369 = &g_64;
                int32_t *l_370 = &g_371;
                int16_t *l_378 = &g_153;
                int8_t *l_383 = &l_338;
                int32_t ***l_404 = (void*)0;
                for (g_153 = 0; (g_153 != (-8)); g_153 = safe_sub_func_uint8_t_u_u(g_153, 8))
                {
                    uint32_t l_351 = 0x71DD7EC6;
                    uint8_t **l_362 = &g_361;
                    int8_t *l_364 = &l_338;
                    int32_t *l_365 = (void*)0;
                    int32_t *l_366 = (void*)0;
                    int32_t *l_367 = &g_64;
                    (*l_367) = (safe_sub_func_uint32_t_u_u(((*l_337) = l_346), (safe_sub_func_int32_t_s_s((safe_sub_func_int8_t_s_s(((l_351 & (safe_sub_func_uint16_t_u_u((g_91.f6 >= 7), ((safe_mod_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(l_358, (safe_sub_func_uint16_t_u_u(((g_236.f1 > (g_239 , 255U)) > ((*l_364) = (((((*l_362) = g_361) != (void*)0) != l_363) <= g_236.f1))), l_351)))), g_91.f0)) || (**g_53))))) ^ l_351), 8)), (*g_54)))));
                }
                (*l_370) = ((*l_369) = ((*p_31) && g_236.f0));
                (*l_370) = ((safe_add_func_uint8_t_u_u((((*l_370) != ((safe_add_func_int8_t_s_s(((safe_sub_func_int16_t_s_s(g_236.f5, ((*l_378) = (&g_88 != &g_88)))) , (**l_323)), (safe_add_func_uint32_t_u_u((((g_236.f3 == ((safe_lshift_func_uint16_t_u_u(((*l_322) , ((((((((*l_383) = (*l_322)) ^ ((l_384 == (void*)0) >= 65535U)) == g_236.f7) <= 0) < 0x0335) | l_363) <= (*l_322))), (*l_370))) >= l_363)) > (*l_370)) , g_236.f7), 0x43D952B0)))) , (*l_322))) , (*l_369)), g_91.f6)) < (*g_54));
                l_322 = func_67((safe_mod_func_int8_t_s_s((((-1) || g_239.f0) == (safe_add_func_uint8_t_u_u(((*l_369) >= ((0x2CF2 | (safe_rshift_func_int16_t_s_u(((safe_rshift_func_uint16_t_u_s((safe_mod_func_int32_t_s_s((safe_sub_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(((~(**l_323)) >= ((*l_337) = (safe_rshift_func_uint16_t_u_u(((0x3A > ((((*l_321) = ((g_239.f3 != ((l_402 , &g_261) != &g_261)) ^ l_363)) == 0x5F) , 0x3E)) , 0xCBAC), (*l_369))))), (*l_322))), l_403)), 1U)), 8)) != l_363), 0))) ^ l_363)), (**l_323)))), g_239.f5)), l_363, l_404, (*g_53), (**l_323));
            }
            for (g_153 = (-6); (g_153 != 2); ++g_153)
            {
                if ((*l_322))
                    break;
                if ((*g_54))
                    break;
            }
            if ((((**l_323) > l_407) , (safe_sub_func_int8_t_s_s((safe_mod_func_int32_t_s_s((((g_88 = (safe_add_func_int32_t_s_s(((safe_sub_func_int32_t_s_s(((*l_421) = ((*l_322) && ((((*g_261) = func_67((g_64 | (((g_91 , 0xA6EA) , (safe_mod_func_int8_t_s_s((0xB6 == (safe_sub_func_uint16_t_u_u((+(l_421 == (*g_53))), 0xDA73))), (**l_323)))) , (*l_322))), g_64, g_422, (*g_53), (**l_323))) != p_32) && (*l_322)))), 0xD680730E)) == 247U), (*g_54)))) == 0U) & l_363), (**l_323))), (*l_322)))))
            {
                uint32_t l_424 = 0xD46D3101;
                int32_t *l_464 = &g_371;
                (**g_422) = (**g_422);
                if ((*g_54))
                {
                    uint8_t *l_428 = &g_236.f7;
                    int32_t l_429 = (-6);
                    if ((((*p_31) || (!(((l_424 && (g_91.f7 ^ g_2)) == (g_239.f6 <= (g_236.f5 < 1))) >= (0x25 ^ (((*l_428) = ((!(safe_lshift_func_int8_t_s_s(g_236.f4, 6))) != 0xE148245F)) < l_429))))) || g_80))
                    {
                        int32_t ****l_436 = &g_422;
                        uint16_t *l_438 = &g_129;
                        int16_t *l_439 = &g_80;
                        int16_t **l_446 = &l_439;
                        struct S0 l_447 = {596,9,25,2,2263,4896,23,0xBE};
                        struct S0 *l_448 = &l_402;
                        (*l_421) = ((safe_add_func_uint16_t_u_u((((*l_428) = ((-8) && (safe_mod_func_int16_t_s_s(((safe_sub_func_int32_t_s_s((((l_436 != (void*)0) , ((((safe_unary_minus_func_uint16_t_u(((*l_438) = ((*l_336) = g_202)))) > ((l_439 = l_438) == l_438)) == 0) , (((safe_add_func_uint32_t_u_u((((safe_lshift_func_int16_t_s_u(((((safe_unary_minus_func_uint8_t_u(1U)) ^ (*l_421)) , (void*)0) != (void*)0), 13)) & 5) != 0x875FBCA4), 0U)) > (**l_323)) , (****l_436)))) | 5), 0xC445802C)) & 4294967291U), g_91.f4)))) != (**l_323)), (****l_436))) || (**l_323));
                        ((void) sizeof ((l_439 == &g_80 || l_439 == &g_129) ? 1 : 0), __extension__ ({ if (l_439 == &g_80 || l_439 == &g_129) ; else __assert_fail ("l_439 == &g_80 || l_439 == &g_129", "/tmp/tmplil3mr7o.c", 312, __extension__ __PRETTY_FUNCTION__); }));
                        (*l_323) = func_33(((((*p_32) != (0U != (((*g_261) = (void*)0) == p_31))) >= ((l_424 , 0xDE) != 0xE4)) ^ ((l_445 == ((*l_446) = &g_153)) <= l_429)), g_236.f7, (*g_54), g_239.f4, (**l_323));
                        ((void) sizeof ((g_262 == 0) ? 1 : 0), __extension__ ({ if (g_262 == 0) ; else __assert_fail ("g_262 == 0", "/tmp/tmplil3mr7o.c", 315, __extension__ __PRETTY_FUNCTION__); }));
                        ((void) sizeof ((l_439 == &g_153) ? 1 : 0), __extension__ ({ if (l_439 == &g_153) ; else __assert_fail ("l_439 == &g_153", "/tmp/tmplil3mr7o.c", 316, __extension__ __PRETTY_FUNCTION__); }));
                        (*l_448) = (l_402 , l_447);
                        return (***l_436);
                    }
                    else
                    {
                        uint8_t l_449 = 0xA3;
                        struct S0 *l_450 = &g_91;
                        l_449 = (*p_31);
                        (*l_450) = g_239;
                    }
                    (**g_422) = (**g_422);
                    (*g_53) = p_32;
                }
                else
                {
                    uint8_t l_455 = 0x5F;
                    uint16_t *l_461 = &g_268;
                    if ((safe_mod_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u((**l_323), ((((l_455 || ((p_32 == ((*g_53) = (*l_323))) , ((**l_323) & (**l_323)))) ^ (g_236.f3 <= ((safe_add_func_int32_t_s_s(l_458, (safe_rshift_func_int8_t_s_u(((l_461 == &g_268) ^ g_239.f2), 4)))) & g_153))) || g_91.f6) & 3U))), 4U)))
                    {
                        int32_t **l_463 = (void*)0;
                        int32_t ***l_462 = &l_463;
                        (**g_422) = func_56(p_31, &l_421);
                        ((void) sizeof ((g_54 == &l_407 || g_54 == &g_2) ? 1 : 0), __extension__ ({ if (g_54 == &l_407 || g_54 == &g_2) ; else __assert_fail ("g_54 == &l_407 || g_54 == &g_2", "/tmp/tmplil3mr7o.c", 342, __extension__ __PRETTY_FUNCTION__); }));
                        (*l_421) = (***g_422);
                    }
                    else
                    {
                        (*l_323) = l_464;
                        ((void) sizeof ((l_322 == &g_371) ? 1 : 0), __extension__ ({ if (l_322 == &g_371) ; else __assert_fail ("l_322 == &g_371", "/tmp/tmplil3mr7o.c", 349, __extension__ __PRETTY_FUNCTION__); }));
                        (**l_323) = (safe_mod_func_int16_t_s_s((*l_464), l_455));
                        (*l_421) = (**l_323);
                    }
                    ((void) sizeof ((g_54 == &l_407 || g_54 == &g_2) ? 1 : 0), __extension__ ({ if (g_54 == &l_407 || g_54 == &g_2) ; else __assert_fail ("g_54 == &l_407 || g_54 == &g_2", "/tmp/tmplil3mr7o.c", 354, __extension__ __PRETTY_FUNCTION__); }));
                    ((void) sizeof ((l_322 == &g_371 || l_322 == &g_2) ? 1 : 0), __extension__ ({ if (l_322 == &g_371 || l_322 == &g_2) ; else __assert_fail ("l_322 == &g_371 || l_322 == &g_2", "/tmp/tmplil3mr7o.c", 355, __extension__ __PRETTY_FUNCTION__); }));
                }
                ((void) sizeof ((g_54 == &l_407 || g_54 == &g_2) ? 1 : 0), __extension__ ({ if (g_54 == &l_407 || g_54 == &g_2) ; else __assert_fail ("g_54 == &l_407 || g_54 == &g_2", "/tmp/tmplil3mr7o.c", 358, __extension__ __PRETTY_FUNCTION__); }));
                ((void) sizeof ((l_322 == &g_371 || l_322 == &g_2) ? 1 : 0), __extension__ ({ if (l_322 == &g_371 || l_322 == &g_2) ; else __assert_fail ("l_322 == &g_371 || l_322 == &g_2", "/tmp/tmplil3mr7o.c", 359, __extension__ __PRETTY_FUNCTION__); }));
            }
            else
            {
                (**g_422) = (**g_422);
            }
            ((void) sizeof ((g_54 == &l_407 || g_54 == &g_2) ? 1 : 0), __extension__ ({ if (g_54 == &l_407 || g_54 == &g_2) ; else __assert_fail ("g_54 == &l_407 || g_54 == &g_2", "/tmp/tmplil3mr7o.c", 366, __extension__ __PRETTY_FUNCTION__); }));
            ((void) sizeof ((l_322 == &g_371 || l_322 == &g_2) ? 1 : 0), __extension__ ({ if (l_322 == &g_371 || l_322 == &g_2) ; else __assert_fail ("l_322 == &g_371 || l_322 == &g_2", "/tmp/tmplil3mr7o.c", 367, __extension__ __PRETTY_FUNCTION__); }));
            for (g_88 = 0; (g_88 > 24); ++g_88)
            {
                uint32_t **l_478 = &g_262;
                uint16_t l_484 = 0x86B5;
                int32_t *l_489 = (void*)0;
                uint8_t l_538 = 0x93;
                int32_t l_539 = (-4);
            }
        }
        else
        {
            struct S0 *l_569 = &g_239;
            int32_t l_579 = 0;
            int32_t ****l_588 = &g_422;
            int32_t ****l_589 = &g_422;
            int8_t ***l_592 = &l_490;
            int8_t ****l_591 = &l_592;
            int8_t *****l_590 = &l_591;
            (*l_569) = l_556;
            g_239.f1 = ((((safe_rshift_func_int8_t_s_u(((**l_490) = (-1)), (safe_rshift_func_int16_t_s_s(((((*l_337) = (+(251U >= g_91.f0))) | ((safe_lshift_func_int16_t_s_u(((l_579 = (-6)) & (*p_32)), 0)) > 65531U)) <= ((safe_sub_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_u((+((*l_322) == ((l_588 = l_587) != l_589))), 2)) >= (****l_589)), (**l_323))), (-1))) > (*l_322))), (*l_322))))) & (****l_587)) > (**l_323)) <= 0x039D);
            (*l_590) = (void*)0;
            ((void) sizeof ((l_591 == 0) ? 1 : 0), __extension__ ({ if (l_591 == 0) ; else __assert_fail ("l_591 == 0", "/tmp/tmplil3mr7o.c", 390, __extension__ __PRETTY_FUNCTION__); }));
            (*g_53) = p_32;
        }
        ((void) sizeof ((g_54 == &l_407 || g_54 == &g_2) ? 1 : 0), __extension__ ({ if (g_54 == &l_407 || g_54 == &g_2) ; else __assert_fail ("g_54 == &l_407 || g_54 == &g_2", "/tmp/tmplil3mr7o.c", 394, __extension__ __PRETTY_FUNCTION__); }));
        ((void) sizeof ((l_322 == &g_371 || l_322 == &g_2) ? 1 : 0), __extension__ ({ if (l_322 == &g_371 || l_322 == &g_2) ; else __assert_fail ("l_322 == &g_371 || l_322 == &g_2", "/tmp/tmplil3mr7o.c", 395, __extension__ __PRETTY_FUNCTION__); }));
        (***l_587) = &l_407;
        ((void) sizeof ((g_54 == &l_407) ? 1 : 0), __extension__ ({ if (g_54 == &l_407) ; else __assert_fail ("g_54 == &l_407", "/tmp/tmplil3mr7o.c", 398, __extension__ __PRETTY_FUNCTION__); }));
    }
    else
    {
        struct S0 *l_593 = &g_236;
        uint32_t **l_595 = (void*)0;
        uint32_t ***l_594 = &l_595;
        uint32_t ****l_596 = (void*)0;
        uint32_t ****l_597 = &l_594;
        (*l_593) = g_91;
        (*g_53) = (**g_422);
        (*l_597) = l_594;
        (*g_53) = &l_407;
        ((void) sizeof ((g_54 == &l_407) ? 1 : 0), __extension__ ({ if (g_54 == &l_407) ; else __assert_fail ("g_54 == &l_407", "/tmp/tmplil3mr7o.c", 412, __extension__ __PRETTY_FUNCTION__); }));
    }
    ((void) sizeof ((g_54 == &l_407) ? 1 : 0), __extension__ ({ if (g_54 == &l_407) ; else __assert_fail ("g_54 == &l_407", "/tmp/tmplil3mr7o.c", 415, __extension__ __PRETTY_FUNCTION__); }));
    ((void) sizeof ((l_322 == &g_64 || l_322 == &g_371 || l_322 == &g_2) ? 1 : 0), __extension__ ({ if (l_322 == &g_64 || l_322 == &g_371 || l_322 == &g_2) ; else __assert_fail ("l_322 == &g_64 || l_322 == &g_371 || l_322 == &g_2", "/tmp/tmplil3mr7o.c", 416, __extension__ __PRETTY_FUNCTION__); }));
    return p_32;
}
static int32_t * func_33(uint8_t p_34, int8_t p_35, int32_t p_36, uint16_t p_37, int32_t p_38)
{
    int8_t l_273 = (-2);
    int8_t *l_278 = (void*)0;
    int8_t *l_279 = &g_124;
    uint32_t *l_284 = &g_88;
    int32_t l_285 = 0x1B95DFF0;
    uint8_t *l_298 = (void*)0;
    uint8_t *l_299 = (void*)0;
    uint8_t *l_300 = &g_236.f7;
    int16_t *l_303 = &g_153;
    struct S0 l_304 = {-7939,1,8,4,2093,4767,-11,0U};
    struct S0 *l_305 = (void*)0;
    struct S0 *l_306 = &l_304;
    struct S0 *l_308 = &g_91;
    l_285 = (((p_36 , 0) != (l_273 | ((g_91 , &g_236) == (void*)0))) | (safe_sub_func_uint32_t_u_u(((*l_284) = (safe_lshift_func_int8_t_s_s((((*l_279) = l_273) || (safe_rshift_func_int16_t_s_u((l_273 & (((safe_rshift_func_uint16_t_u_s(p_36, 0)) | p_36) >= g_233)), 11))), 3))), 1)));
    (*l_306) = ((safe_mod_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u((((safe_rshift_func_int8_t_s_s(g_236.f6, (safe_rshift_func_int16_t_s_s((p_38 < (safe_sub_func_uint8_t_u_u(((&p_35 == &g_124) == g_236.f5), 0U))), (((((p_36 = (safe_rshift_func_uint16_t_u_u(((((*l_300) = g_91.f0) < (((safe_sub_func_int16_t_s_s(((*l_303) = g_61), ((p_36 == 0U) == g_64))) && g_61) > 0x3D06)) || 0x6240), l_273))) , p_35) > 0xFDE6) | (-5)) | 0x9FDB))))) != g_239.f1) != p_38), g_239.f4)), g_239.f4)) , l_304);
    (*l_308) = ((safe_unary_minus_func_int8_t_s(g_268)) , ((*l_306) = (*l_306)));
    return (*g_53);
}
static int16_t func_39(int32_t * p_40, int32_t * p_41, int32_t * p_42, int32_t p_43)
{
    int32_t *l_50 = &g_2;
    int32_t **l_49 = &l_50;
    int32_t ***l_55 = &l_49;
    uint32_t *l_60 = &g_61;
    struct S0 l_243 = {-6744,3,84,-3,1574,2985,-16,0x34};
    struct S0 *l_245 = &l_243;
    struct S0 **l_244 = &l_245;
    uint32_t ***l_255 = (void*)0;
    uint32_t **l_257 = &l_60;
    uint32_t ***l_256 = &l_257;
    uint32_t ***l_258 = (void*)0;
    uint32_t **l_260 = &l_60;
    uint32_t ***l_259 = &l_260;
    uint32_t ***l_263 = &g_261;
    struct S0 *l_265 = &g_239;
    struct S0 **l_264 = &l_265;
    uint16_t *l_266 = &g_129;
    uint16_t *l_267 = &g_268;
    int32_t *l_269 = &g_64;
    (*l_55) = func_47(l_49);
    ((void) sizeof ((l_49 == &g_54) ? 1 : 0), __extension__ ({ if (l_49 == &g_54) ; else __assert_fail ("l_49 == &g_54", "/tmp/tmplil3mr7o.c", 481, __extension__ __PRETTY_FUNCTION__); }));
    (*g_53) = func_56((*g_53), (((*l_60) = (+1U)) , &p_41));
    (*l_269) = (safe_sub_func_uint8_t_u_u(((l_243 , ((&l_243 != ((*l_244) = &l_243)) >= g_124)) | ((*l_267) = (((*l_266) = (!(safe_rshift_func_int8_t_s_u((((safe_sub_func_uint8_t_u_u((g_88 != (safe_mod_func_int16_t_s_s((safe_add_func_uint8_t_u_u((((*l_259) = ((*l_256) = &l_60)) != ((*l_263) = g_261)), 0x1C)), (((((l_264 == (void*)0) , p_43) || g_91.f2) , p_43) , p_43)))), p_43)) <= (**l_49)) >= (**l_49)), 7)))) == 0xA1B3))), 0));
    return g_129;
}
static int32_t ** func_47(int32_t ** p_48)
{
    int32_t *l_52 = &g_2;
    int32_t **l_51 = &l_52;
    return g_53;
}
static int32_t * func_56(int32_t * p_57, int32_t ** p_58)
{
    int16_t l_93 = 0x9AB6;
    uint16_t l_184 = 0x0E71;
    int32_t l_203 = (-1);
    int32_t l_204 = (-2);
    int32_t l_207 = (-1);
lbl_240:
    for (g_61 = 0; (g_61 <= 34); g_61 = safe_add_func_int32_t_s_s(g_61, 3))
    {
        int32_t l_86 = 0xA3C9199E;
        int32_t l_95 = (-1);
        int32_t l_170 = 1;
        int32_t l_173 = 0xAA5E5C78;
        int32_t *l_185 = &l_95;
        int8_t *l_192 = &g_124;
        uint32_t *l_193 = (void*)0;
        uint32_t *l_194 = &g_88;
        uint16_t *l_200 = &g_129;
        int8_t *l_201 = &g_202;
        uint8_t *l_205 = &g_91.f7;
        uint8_t *l_206 = (void*)0;
        uint32_t *l_210 = &g_61;
        uint32_t **l_209 = &l_210;
        uint32_t ***l_208 = &l_209;
        uint32_t ****l_211 = &l_208;
        for (g_64 = 4; (g_64 == (-29)); g_64 = safe_sub_func_int16_t_s_s(g_64, 1))
        {
            uint16_t l_73 = 0xB270;
            int16_t *l_79 = &g_80;
            uint32_t *l_87 = &g_88;
            struct S0 *l_92 = &g_91;
            int32_t l_94 = (-1);
            (*g_53) = func_67(l_73, (safe_sub_func_uint8_t_u_u(((!((safe_add_func_int16_t_s_s(((*l_79) = l_73), ((safe_sub_func_int32_t_s_s((l_95 = ((safe_unary_minus_func_int8_t_s((l_94 = (safe_mod_func_uint16_t_u_u((0xD913 | (((((*l_87) = l_86) , (safe_mod_func_int32_t_s_s((*g_54), (-5)))) , l_73) , ((((*l_92) = g_91) , &p_58) != &g_53))), l_93))))) , l_93)), 0x000286F3)) >= 0x6E27DFDE))) , g_91.f1)) > l_86), 6)), &g_53, (*g_53), l_86);
        }
        for (g_80 = 0; (g_80 > 0); g_80++)
        {
            int16_t *l_152 = &g_153;
            int32_t ***l_159 = (void*)0;
            int32_t ****l_158 = &l_159;
            uint8_t *l_178 = &g_91.f7;
            if (((safe_sub_func_uint32_t_u_u((safe_add_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s(((((safe_mod_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(((((safe_sub_func_int32_t_s_s((safe_add_func_int32_t_s_s((+l_93), (safe_rshift_func_int8_t_s_u((((l_93 <= 0x7418) , ((((safe_add_func_uint32_t_u_u((0x4F57EB90 && (((*l_152) = 3) < 0xE843)), 0xBAA40D6D)) , (safe_rshift_func_uint16_t_u_s(g_129, (safe_lshift_func_uint8_t_u_u((((*l_158) = &p_58) == &p_58), l_93))))) == 0x9D248437) || l_93)) , g_153), l_93)))), l_86)) >= g_124) > l_93) , 1U), 6)), l_93)) == l_86) & 0x82) == 1), 14)), (**g_53))), (*g_54))) | 0x18))
            {
                uint16_t l_163 = 0x5AAB;
                int32_t *l_166 = (void*)0;
                int32_t *l_167 = &l_95;
                int8_t l_171 = 0x6C;
                uint32_t *l_172 = &g_88;
                l_173 = (((((((*l_172) = ((((((((***l_159) & (~(safe_mod_func_uint16_t_u_u((1U ^ (((l_163 , (((&g_91 == (void*)0) | ((((safe_lshift_func_uint8_t_u_u(((void*)0 != &g_124), 2)) , ((((*l_167) = (***l_159)) >= ((((((((((safe_sub_func_uint32_t_u_u((g_91.f2 = l_86), (-1))) , 0x9E) , (****l_158)) == 0U) , 0x065F) | g_88) & 0) == 0U) < l_170) | l_171)) >= l_170)) ^ (****l_158)) , 4294967295U)) ^ l_93)) ^ 0xAE7F) , (****l_158))), g_88)))) >= 255U) , (*g_54)) & 0x5BA722EB) != (-1)) | g_91.f3) < l_93)) <= 1U) ^ g_80) & g_61) , (***l_159)) , 0);
            }
            else
            {
                int32_t ****l_181 = &l_159;
                for (g_91.f7 = 6; (g_91.f7 != 34); g_91.f7 = safe_add_func_uint16_t_u_u(g_91.f7, 4))
                {
                    int32_t *l_179 = (void*)0;
                    int32_t *l_180 = &l_95;
                    (*l_180) = (safe_lshift_func_int16_t_s_u(((void*)0 == l_178), g_91.f2));
                    if ((*g_54))
                        break;
                    (*l_180) = ((void*)0 == l_181);
                }
            }
            ((void) sizeof ((l_159 == &p_58) ? 1 : 0), __extension__ ({ if (l_159 == &p_58) ; else __assert_fail ("l_159 == &p_58", "/tmp/tmplil3mr7o.c", 572, __extension__ __PRETTY_FUNCTION__); }));
            (*g_53) = ((***l_158) = (*p_58));
            l_185 = func_67(l_170, l_93, &g_53, (g_61 , (*g_53)), (safe_mod_func_uint8_t_u_u(((***l_159) >= (l_184 != ((*l_152) = (****l_158)))), (((((((***l_159) & g_91.f2) , 0x21F1) >= 65535U) > (-1)) | 0x99) , l_184))));
        }
        l_207 = (safe_mod_func_int8_t_s_s(0x56, ((*l_185) , ((*l_185) && (l_204 = ((*l_205) = (((safe_rshift_func_int8_t_s_s(((safe_add_func_int16_t_s_s(((((((*l_194) = ((((*l_192) = l_93) && g_91.f4) < l_184)) > 0xB2AD5794) , 0xCD) != (l_203 = (((((*l_201) = ((safe_unary_minus_func_uint32_t_u((((*l_200) = (((safe_mod_func_int8_t_s_s(((safe_rshift_func_int16_t_s_u((((l_93 , 0x71) > g_2) != g_61), 9)) | (*l_185)), l_93)) <= l_93) || 0xB2C92A46)) | (*l_185)))) | 0x9C)) > l_184) || 4294967295U) == l_184))) | 0x45), l_93)) >= 0x0F89493E), l_93)) < (*p_57)) ^ l_204)))))));
        (*l_211) = l_208;
    }
    for (l_207 = 0; (l_207 > 2); ++l_207)
    {
        uint32_t *l_216 = &g_88;
        uint32_t *l_224 = &g_61;
        uint32_t **l_223 = &l_224;
        struct S0 l_231 = {-6667,3,68,-2,1595,1531,27,0xD3};
        struct S0 *l_232 = &g_91;
        uint16_t *l_234 = (void*)0;
        uint16_t *l_235 = &l_184;
        if ((((((l_204 != (l_216 == p_57)) ^ (safe_rshift_func_int16_t_s_s((((*l_235) = (g_129 = ((safe_lshift_func_uint8_t_u_u(((safe_sub_func_uint16_t_u_u((l_203 && (g_233 = ((l_216 == ((*l_223) = p_57)) || (l_207 | (!((safe_add_func_int8_t_s_s((safe_unary_minus_func_uint16_t_u(l_207)), (safe_rshift_func_uint16_t_u_u(((((*l_232) = l_231) , &g_124) != &g_202), 3)))) == 0x0715)))))), g_80)) >= l_231.f6), l_231.f3)) <= 0xC5A9))) < l_231.f4), g_64))) > l_203) , 1) && l_231.f4))
        {
            struct S0 *l_237 = &l_231;
            struct S0 *l_238 = &g_239;
            (*l_238) = ((*l_237) = (g_236 = (g_91 = (*l_232))));
            if (l_231.f6)
                goto lbl_240;
        }
        else
        {
            (*g_53) = ((*p_58) = (*p_58));
        }
        return (*g_53);
    }
    return (*g_53);
}
static int32_t * func_67(int32_t p_68, uint8_t p_69, int32_t *** p_70, int32_t * p_71, int32_t p_72)
{
    int32_t l_105 = 0x880ABB00;
    uint32_t *l_110 = &g_61;
    uint32_t **l_111 = &l_110;
    int8_t *l_122 = (void*)0;
    int8_t *l_123 = &g_124;
    struct S0 l_125 = {-3821,4,29,2,552,1493,-8,6U};
    uint8_t *l_126 = &l_125.f7;
    int32_t l_127 = 0x0432CFC9;
    uint16_t *l_128 = &g_129;
    int32_t *l_130 = &l_127;
    (*l_130) = (g_91.f7 >= (!(safe_sub_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(((g_91.f1 == (((safe_mod_func_uint16_t_u_u(((safe_mod_func_uint8_t_u_u(p_69, (-2))) ^ l_105), ((*l_128) = (safe_rshift_func_int8_t_s_s((safe_mod_func_int32_t_s_s((((((*l_111) = l_110) != (void*)0) , ((safe_mod_func_uint32_t_u_u((((*l_126) = ((safe_rshift_func_int16_t_s_u(l_105, 5)) , ((((safe_rshift_func_int16_t_s_s((((*l_123) = (safe_add_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(((l_105 , 9U) , g_80), 12)), g_80))) >= p_72), g_80)) < l_105) , l_125) , 0xB5))) != 0xCD), (**g_53))) > g_91.f4)) < l_125.f0), l_125.f4)), l_127))))) != 1) & l_105)) <= l_125.f4), 0)), g_80))));
    g_91 = g_91;
    return (*g_53);
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_2;
    csmith_sink_ = g_15;
    csmith_sink_ = g_61;
    csmith_sink_ = g_64;
    csmith_sink_ = g_80;
    csmith_sink_ = g_88;
    csmith_sink_ = g_91.f0;
    csmith_sink_ = g_91.f1;
    csmith_sink_ = g_91.f2;
    csmith_sink_ = g_91.f3;
    csmith_sink_ = g_91.f4;
    csmith_sink_ = g_91.f5;
    csmith_sink_ = g_91.f6;
    csmith_sink_ = g_91.f7;
    csmith_sink_ = g_124;
    csmith_sink_ = g_129;
    csmith_sink_ = g_153;
    csmith_sink_ = g_202;
    csmith_sink_ = g_233;
    csmith_sink_ = g_236.f0;
    csmith_sink_ = g_236.f1;
    csmith_sink_ = g_236.f2;
    csmith_sink_ = g_236.f3;
    csmith_sink_ = g_236.f4;
    csmith_sink_ = g_236.f5;
    csmith_sink_ = g_236.f6;
    csmith_sink_ = g_236.f7;
    csmith_sink_ = g_239.f0;
    csmith_sink_ = g_239.f1;
    csmith_sink_ = g_239.f2;
    csmith_sink_ = g_239.f3;
    csmith_sink_ = g_239.f4;
    csmith_sink_ = g_239.f5;
    csmith_sink_ = g_239.f6;
    csmith_sink_ = g_239.f7;
    csmith_sink_ = g_268;
    csmith_sink_ = g_371;
    csmith_sink_ = g_523;
    csmith_sink_ = g_568;
    csmith_sink_ = g_744;
    csmith_sink_ = g_757;
    csmith_sink_ = g_817;
    csmith_sink_ = g_888;
    platform_main_end(0,0);
    return 0;
}
