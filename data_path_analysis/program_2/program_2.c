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
static int32_t g_7 = (-8);
static int8_t g_29 = 9;
static int8_t *g_80 = &g_29;
static int8_t **g_79 = &g_80;
static int16_t g_90 = 0x767A;
static int32_t g_93 = 4;
static uint32_t g_108 = 4294967295U;
static int8_t g_111 = 0;
static int32_t *g_144 = (void*)0;
static uint16_t g_192 = 0x96B5;
static int32_t g_205 = (-3);
static uint8_t g_232 = 255U;
static int16_t g_297 = 0;
static int32_t ***g_299 = (void*)0;
static int32_t ****g_298 = &g_299;
static int32_t *****g_305 = &g_298;
static int16_t g_379 = 2;
static uint16_t *g_418 = &g_192;
static uint16_t **g_417 = &g_418;
static int8_t ***g_514 = (void*)0;
static uint16_t g_540 = 65535U;
static int8_t ****g_556 = &g_514;
static int8_t *****g_555 = &g_556;
static int16_t *g_566 = (void*)0;
static int16_t **g_565 = &g_566;
static int16_t ***g_564 = &g_565;
static uint16_t g_584 = 0U;
static uint32_t g_585 = 4294967295U;
static int32_t *g_725 = (void*)0;
static int16_t ****g_726 = &g_564;
static int8_t g_748 = 0xC1;
static uint32_t g_750 = 1U;
static uint32_t g_760 = 0xEC8E8039;
static int32_t *g_774 = &g_93;
static uint32_t g_776 = 0xB86D0A33;
static int32_t *g_890 = &g_93;
static uint16_t ***g_924 = &g_417;
static uint8_t *g_968 = &g_232;
static uint8_t ***g_1043 = (void*)0;
static int16_t g_1074 = 0x65D1;
static int32_t **g_1131 = &g_774;
static int32_t ***g_1130 = &g_1131;
static int16_t func_1(void);
static int8_t func_12(uint32_t p_13, int16_t p_14, int16_t p_15);
static int16_t func_25(int8_t p_26);
static uint16_t func_32(uint32_t p_33, int16_t p_34, uint16_t p_35);
static uint32_t func_39(uint16_t p_40, uint16_t p_41, uint32_t p_42);
static uint16_t func_45(int16_t p_46, uint32_t p_47, uint32_t p_48);
static int8_t ** func_56(int32_t p_57, int8_t * p_58, uint32_t p_59, int8_t ** p_60);
static uint16_t func_61(int8_t * p_62, int8_t * p_63);
static int8_t * func_65(int8_t * p_66, int8_t * p_67, int32_t p_68, int8_t ** p_69);
static int8_t * func_70(int8_t ** p_71);
static int16_t func_1(void)
{
    int32_t l_8 = 0xAC488899;
    int16_t l_27 = 0x5741;
    int8_t *l_28 = &g_29;
    uint32_t l_1095 = 5U;
    int32_t l_1107 = 0xEBB116CA;
    int16_t l_1108 = 1;
    int8_t ***l_1116 = &g_79;
    int32_t **l_1127 = (void*)0;
    int32_t ***l_1126 = &l_1127;
    int8_t l_1162 = 1;
    int8_t l_1163 = (-1);
    int32_t **l_1164 = (void*)0;
    int32_t **l_1165 = &g_725;
    int32_t l_1166 = 0xC1365AE4;
    if ((!(safe_mod_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((g_7 < 0xEF72D4EA), ((l_8 == (l_8 ^ ((safe_unary_minus_func_int32_t_s(((*g_890) = (safe_lshift_func_int8_t_s_s(func_12(((~(safe_sub_func_uint8_t_u_u((safe_add_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(g_7, (safe_div_func_uint32_t_u_u(1U, l_8)))), g_7)), (func_25(((*l_28) = ((g_7 == g_7) >= l_27))) >= l_27)))) <= g_750), l_8, l_8), 7))))) == g_7))) >= 0x4B3B9826))), l_8))))
    {
        int32_t l_1094 = 0x224536FB;
        uint32_t l_1096 = 0xD2D553DE;
        uint16_t *l_1109 = &g_540;
        int32_t l_1110 = 0xB662A772;
        uint32_t *l_1113 = &g_750;
        int32_t l_1121 = (-5);
        int8_t *****l_1125 = &g_556;
        int32_t ****l_1128 = &g_299;
        int32_t ****l_1129 = &l_1126;
        int32_t ****l_1132 = (void*)0;
        int32_t ***l_1133 = &g_1131;
        int32_t *l_1134 = &l_1094;
        (*g_890) = (safe_rshift_func_uint16_t_u_s((((safe_add_func_int8_t_s_s(l_1094, ((l_1095 == l_1096) | (safe_add_func_uint16_t_u_u(l_1096, ((safe_rshift_func_uint8_t_u_s(5U, 5)) || ((*l_1109) = (l_1095 >= (safe_add_func_uint32_t_u_u((0x86 <= ((-8) <= (safe_add_func_int32_t_s_s((((safe_sub_func_uint8_t_u_u((l_1096 ^ l_1107), 0x3F)) == 0U) >= l_1096), l_1108)))), 0xF1296843)))))))))) && 0xA8BE) ^ l_1110), 0));
        (*g_890) = (safe_sub_func_int8_t_s_s((((*l_1113) = g_7) || (safe_lshift_func_uint16_t_u_u(((void*)0 != l_1116), 6))), ((safe_lshift_func_int16_t_s_s(l_1096, (safe_add_func_uint16_t_u_u(l_1121, l_1108)))) | ((+((*l_28) = l_1110)) || (l_8 || ((l_1094 & 4294967287U) <= 0x21BF6022))))));
        (*l_1134) = ((*g_890) = (safe_lshift_func_int8_t_s_u(((g_555 = l_1125) != (void*)0), (((*l_1129) = ((*l_1128) = l_1126)) != (l_1133 = g_1130)))));
        (*g_556) = l_1116;
    }
    else
    {
        uint16_t l_1159 = 0x7291;
        for (g_232 = (-4); (g_232 > 27); ++g_232)
        {
            uint32_t l_1139 = 0x44F6F6FA;
            uint16_t **l_1160 = (void*)0;
            int32_t l_1161 = 0xD4712CEB;
        }
    }
    (*l_1165) = ((**g_1130) = (**g_1130));
    return l_1166;
}
static int8_t func_12(uint32_t p_13, int16_t p_14, int16_t p_15)
{
    int32_t *****l_914 = &g_298;
    uint16_t ***l_919 = &g_417;
    uint8_t *l_936 = &g_232;
    uint8_t **l_935 = &l_936;
    int32_t *****l_943 = &g_298;
    int32_t *l_956 = &g_93;
    uint16_t l_1088 = 1U;
    uint32_t l_1089 = 4294967295U;
    if (((-6) ^ ((*g_80) = ((void*)0 == l_914))))
    {
        uint16_t ***l_922 = (void*)0;
        uint8_t **l_937 = (void*)0;
        int32_t *****l_942 = &g_298;
        int32_t l_952 = 0x5E73F747;
        int32_t *l_1008 = &l_952;
        int16_t ****l_1050 = &g_564;
        int8_t l_1087 = 0x51;
        for (g_108 = 0; (g_108 < 56); g_108 = safe_add_func_uint32_t_u_u(g_108, 8))
        {
            uint16_t ***l_917 = &g_417;
            uint16_t ****l_918 = &l_917;
            uint16_t ****l_920 = (void*)0;
            uint16_t ****l_921 = (void*)0;
            uint16_t ****l_923 = (void*)0;
            uint8_t *l_932 = (void*)0;
            uint8_t **l_931 = &l_932;
            uint8_t ***l_933 = (void*)0;
            uint8_t ***l_934 = &l_931;
            int32_t l_951 = 8;
            int32_t *l_957 = &l_952;
            int32_t l_985 = 1;
            int8_t ***l_996 = &g_79;
            int32_t *l_1025 = &g_205;
            int16_t *l_1026 = (void*)0;
            int16_t *l_1027 = &g_297;
            int32_t *****l_1072 = &g_298;
            int32_t *****l_1073 = (void*)0;
        }
        (*g_890) = (((safe_rshift_func_int8_t_s_u(0, 5)) ^ 1U) && (safe_add_func_int32_t_s_s((((safe_lshift_func_uint8_t_u_u((((*l_1050) != (void*)0) == ((*l_936) = (*g_968))), 5)) < (safe_div_func_uint32_t_u_u(p_15, (safe_sub_func_uint16_t_u_u(l_1087, (0U > 0x1F)))))) ^ 0x41), l_1088)));
    }
    else
    {
        (*g_726) = (*g_726);
    }
    return l_1089;
}
static int16_t func_25(int8_t p_26)
{
    int32_t l_36 = 0x35900B08;
    int32_t l_53 = 0xA8DAD4F6;
    uint8_t l_391 = 255U;
    uint16_t *l_416 = &g_192;
    uint16_t **l_415 = &l_416;
    int8_t **l_471 = (void*)0;
    int32_t *l_498 = &l_53;
    int8_t *****l_557 = &g_556;
    int16_t ****l_572 = &g_564;
    int8_t l_613 = (-2);
    int32_t *l_621 = &g_205;
    int16_t l_641 = 0x3362;
    int16_t l_642 = (-2);
    int32_t l_685 = 0x56CEB197;
    int8_t ***l_770 = &l_471;
    int32_t *l_775 = &l_53;
    int8_t ***l_837 = &g_79;
    if ((safe_add_func_int32_t_s_s(((65535U >= func_32(g_29, (l_36 < l_36), (safe_sub_func_int8_t_s_s((g_29 ^ func_39(l_36, (safe_sub_func_uint16_t_u_u((0xF29C != g_7), func_45(((safe_sub_func_int16_t_s_s((safe_sub_func_int32_t_s_s(((g_29 ^ g_29) || p_26), l_53)), l_36)) || l_53), g_7, l_36))), l_53)), g_7)))) > 0U), p_26)))
    {
        int32_t *l_394 = (void*)0;
        int8_t ***l_404 = &g_79;
        int32_t *l_412 = (void*)0;
        uint16_t *l_476 = &g_192;
        int32_t ****l_516 = &g_299;
        int32_t *l_558 = &l_53;
        int32_t **l_568 = (void*)0;
        uint16_t ***l_575 = &l_415;
        uint16_t ***l_576 = &l_415;
        uint16_t *l_579 = (void*)0;
        uint16_t *l_580 = &g_540;
        uint16_t *l_581 = (void*)0;
        uint16_t *l_582 = (void*)0;
        uint16_t *l_583 = &g_584;
        int32_t l_597 = 0x3C14E789;
        int32_t **l_622 = &l_558;
        if ((safe_sub_func_int32_t_s_s((l_36 = (p_26 | 0)), l_391)))
        {
            int32_t ***l_397 = (void*)0;
            int32_t ***l_398 = (void*)0;
            int8_t **l_403 = &g_80;
            uint16_t *l_405 = &g_192;
            uint16_t l_554 = 1U;
            int32_t **l_561 = &l_498;
            for (g_90 = 0; (g_90 <= (-1)); g_90 = safe_sub_func_uint8_t_u_u(g_90, 4))
            {
                int32_t **l_395 = &g_144;
                (*l_395) = l_394;
                return g_297;
            }
            if (((g_93 = (+((l_397 = l_397) != l_398))) || ((safe_lshift_func_uint16_t_u_u((((((**g_79) = 4) ^ (p_26 > (((void*)0 == l_403) & (((l_404 == &g_79) && ((((*l_405) = p_26) ^ 0x69C6) | p_26)) | p_26)))) || 0) < p_26), g_90)) ^ 0xB31E70AF)))
            {
                uint32_t *l_408 = (void*)0;
                int16_t *l_409 = (void*)0;
                int16_t *l_410 = &g_90;
                int32_t l_425 = 0x96293FC5;
                if ((safe_add_func_uint8_t_u_u(((((g_192 & g_93) >= p_26) >= (p_26 != (((*l_410) = ((void*)0 == l_408)) == g_7))) != l_53), (safe_unary_minus_func_uint16_t_u(l_36)))))
                {
                    uint16_t ***l_419 = &g_417;
                    int32_t l_437 = 0xC249A5B3;
                    int16_t **l_459 = &l_409;
                    int16_t *l_460 = &g_297;
                    int16_t **l_461 = &l_460;
                    l_394 = l_412;
                    l_36 = (safe_div_func_int16_t_s_s(((l_415 == ((*l_419) = g_417)) <= ((*l_416) = (!(safe_div_func_uint8_t_u_u(((safe_div_func_int8_t_s_s(((**g_79) && (l_391 <= l_425)), (safe_add_func_int32_t_s_s((safe_div_func_int8_t_s_s((p_26 = ((safe_mod_func_uint16_t_u_u((safe_div_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((l_391 <= (safe_unary_minus_func_uint16_t_u(p_26))), g_90)), 0xBBD5)), l_425)) >= g_29)), 0x10)), l_437)))) ^ 0), l_425))))), 1U));
                    l_437 = (safe_mod_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u((((l_425 && (safe_sub_func_uint32_t_u_u(0x05820921, ((safe_add_func_uint8_t_u_u(0x08, (!((l_36 = (safe_add_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((p_26 ^ ((8U || ((**g_417) && ((((safe_add_func_int16_t_s_s(((*l_410) = l_437), (((safe_sub_func_int8_t_s_s((((safe_add_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u(((((*l_459) = (void*)0) != ((*l_461) = l_460)) <= p_26), p_26)), 0xC8)) == p_26) > p_26), l_36)) & 0x06CED180) == (**g_417)))) > l_425) | l_437) >= l_425))) != p_26)), 5)), g_93))) | g_297)))) && p_26)))) || p_26) ^ p_26), l_425)), p_26));
                    l_425 = (!255U);
                }
                else
                {
                    uint8_t *l_477 = &l_391;
                    uint8_t *l_478 = &g_232;
                    int32_t l_493 = 0xA4AE4061;
                    int32_t l_494 = (-7);
                    int32_t *l_495 = (void*)0;
                    int32_t **l_496 = &l_412;
                    if ((!((*l_410) = g_379)))
                    {
                        int32_t *l_464 = &g_93;
                        int8_t **l_470 = &g_80;
                        int32_t **l_472 = &l_412;
                        (*l_464) = 0xC1734024;
                        (*l_464) = p_26;
                        (*l_464) = ((safe_mod_func_uint8_t_u_u(0U, (safe_rshift_func_int8_t_s_u((**g_79), 3)))) | (safe_unary_minus_func_uint32_t_u(((l_471 = l_470) != (*l_404)))));
                        (*l_472) = l_464;
                    }
                    else
                    {
                        int32_t **l_473 = &l_394;
                        (*l_473) = l_412;
                        return p_26;
                    }
                    g_93 = (safe_mod_func_uint8_t_u_u(((*l_478) = (0x6A || (((*l_477) = (((*g_417) = (void*)0) != ((*l_415) = l_476))) && g_108))), p_26));
                    (*l_412) = (safe_lshift_func_int16_t_s_u(((safe_mod_func_uint32_t_u_u(p_26, (safe_div_func_uint8_t_u_u((((safe_sub_func_int8_t_s_s((((safe_add_func_int8_t_s_s((((void*)0 != (*g_79)) || g_111), (g_7 >= ((safe_lshift_func_int8_t_s_s((&g_298 == &g_298), (safe_lshift_func_uint8_t_u_s(p_26, l_493)))) >= l_494)))) & p_26) <= 0x3323BC56), 0x9C)) || (*g_80)) >= p_26), 1U)))) >= (**g_79)), 1));
                    (*l_496) = l_495;
                }
            }
            else
            {
                int32_t *l_497 = &l_36;
                int32_t ***l_525 = (void*)0;
lbl_499:
                l_498 = l_497;
                if (p_26)
                {
                    uint32_t l_504 = 0x0FD7342C;
                    int32_t *l_508 = &l_36;
                    int32_t ****l_515 = &g_299;
                    if (p_26)
                        goto lbl_499;
                    if (((+(((void*)0 != &g_298) && ((*l_498) && ((**g_79) = (safe_unary_minus_func_uint8_t_u(p_26)))))) & (safe_add_func_int8_t_s_s((((void*)0 == &l_498) == (-1)), ((((**l_415) = (p_26 == (&g_108 == (void*)0))) || g_379) <= l_504)))))
                    {
                        int32_t *l_507 = &l_53;
                        (*l_497) = 9;
                        (*l_507) = (safe_mod_func_int16_t_s_s(((*l_498) = ((*g_80) < p_26)), p_26));
                        g_144 = l_497;
                        l_498 = l_412;
                    }
                    else
                    {
                        int32_t *l_509 = (void*)0;
                        l_509 = (l_508 = l_497);
                        (*l_497) = (safe_lshift_func_int16_t_s_s((safe_mod_func_uint8_t_u_u(((((*l_403) = func_70(l_403)) == (void*)0) <= (g_514 == g_514)), p_26)), 15));
                        (*l_498) = p_26;
                        l_498 = l_497;
                    }
                    l_516 = l_515;
                }
                else
                {
                    int16_t l_519 = 1;
                    l_519 = ((safe_mod_func_int32_t_s_s((*l_497), p_26)) || (**g_417));
                }
                for (g_192 = (-5); (g_192 == 20); g_192 = safe_add_func_uint16_t_u_u(g_192, 6))
                {
                    uint16_t ***l_534 = &l_415;
                    int32_t l_537 = 0xC05553CE;
                    int32_t l_538 = 0x299EE653;
                    uint16_t *l_539 = &g_540;
                    int8_t ****l_541 = &g_514;
                    int32_t *****l_544 = &g_298;
                    uint8_t *l_549 = &l_391;
                    uint16_t l_553 = 0x9D33;
                    int32_t ***l_560 = (void*)0;
                    (*l_497) = ((safe_unary_minus_func_uint16_t_u((l_53 = ((*l_539) = (safe_mod_func_int8_t_s_s((((l_525 == (*l_516)) | (((safe_add_func_int16_t_s_s(((*g_80) && (safe_div_func_int8_t_s_s(l_36, (safe_add_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((g_232 && (((*l_534) = &l_405) == &g_418)), 6)), (safe_rshift_func_int16_t_s_u(p_26, ((l_537 = 2) == 4294967286U)))))))), 0x7CF6)) < 7U) > g_7)) ^ l_538), 0xAB)))))) ^ 1U);
                    (*l_541) = &l_471;
                    if ((g_205 = ((&l_538 != &l_53) == (safe_mod_func_int32_t_s_s(((((*l_497) = ((*l_539) = (((l_544 == l_544) > (safe_rshift_func_int16_t_s_s(p_26, 4))) > (safe_sub_func_uint8_t_u_u(((*l_549) = g_205), g_192))))) <= (((**g_79) = (~((**g_79) & ((0x5891 & l_553) != (-6))))) <= g_111)) >= p_26), l_554)))))
                    {
                        l_557 = g_555;
                    }
                    else
                    {
                        int32_t *l_559 = &g_205;
                        l_559 = l_558;
                        g_144 = &l_537;
                        (*l_558) = (((void*)0 == l_560) & ((l_561 = &l_559) == (void*)0));
                    }
                    for (p_26 = 0; (p_26 == (-30)); p_26--)
                    {
                        int16_t ****l_567 = &g_564;
                        (*l_567) = g_564;
                        l_568 = &l_498;
                    }
                }
            }
            return p_26;
        }
        else
        {
            int32_t **l_569 = &l_498;
            (*l_569) = &l_36;
            (*l_569) = (void*)0;
        }
        if ((safe_rshift_func_uint16_t_u_u((l_572 != (void*)0), (safe_sub_func_int16_t_s_s((-1), (g_585 = ((*l_583) = ((*l_580) = ((l_575 != l_576) && ((*g_418) = (safe_mod_func_int8_t_s_s((p_26 != (p_26 != 0xC793CACA)), (p_26 && p_26)))))))))))))
        {
            uint16_t l_590 = 1U;
            int32_t l_601 = (-3);
            int32_t **l_602 = &g_144;
            int32_t **l_603 = &l_394;
            (*l_558) = (safe_sub_func_uint16_t_u_u(((*l_476) = 7U), (safe_mod_func_int16_t_s_s(l_590, (safe_add_func_uint32_t_u_u((safe_mod_func_int32_t_s_s(p_26, (safe_lshift_func_uint8_t_u_s((((p_26 > (((p_26 || l_597) > 1) == (safe_sub_func_uint8_t_u_u((((~l_590) & ((l_601 = p_26) ^ p_26)) || 0x45A12C6D), p_26)))) ^ (-1)) & 0x98), 7)))), 0))))));
            (*l_603) = ((*l_602) = &l_36);
            return l_53;
        }
        else
        {
            uint32_t l_608 = 0x1F243447;
            for (g_93 = 0; (g_93 == (-26)); g_93 = safe_sub_func_int8_t_s_s(g_93, 2))
            {
                uint8_t *l_614 = &l_391;
                int32_t l_615 = 0x7D60034F;
                int16_t **l_620 = (void*)0;
                (*l_558) = (p_26 <= (safe_div_func_int32_t_s_s((l_608 ^ (-2)), (safe_sub_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_u(((*l_614) = l_613), l_615)) == 0x984D), (0x5C8B4A97 <= (safe_lshift_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(((&g_298 != (void*)0) > p_26), (-10))), 1))))))));
                (*g_564) = l_620;
                if (l_615)
                    break;
            }
        }
        (*l_622) = (l_621 = &l_36);
        (*l_621) = ((safe_lshift_func_uint16_t_u_s((0x0F & (0x54AE55CF == (safe_sub_func_uint32_t_u_u((g_7 || (((safe_div_func_int8_t_s_s(((1 & ((safe_mod_func_int16_t_s_s((safe_div_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((p_26 != (0x3AB6 >= (safe_lshift_func_int8_t_s_u(((((l_622 = &g_144) == &l_412) ^ (safe_lshift_func_int16_t_s_u((safe_rshift_func_uint8_t_u_s(1U, 5)), (**g_417)))) ^ l_641), 6)))), p_26)), g_29)), 0x62A6)) == l_642)) && p_26), 4U)) < 0) && 0x3F)), (*l_621))))), p_26)) || 0x1EB68D2C);
    }
    else
    {
        int32_t l_647 = 0;
        int32_t l_648 = (-1);
        uint16_t **l_663 = &l_416;
        int32_t l_670 = (-1);
        int8_t **l_673 = &g_80;
        int32_t *l_690 = &g_205;
        uint16_t l_721 = 65528U;
        int8_t l_735 = 0xFC;
        int32_t ****l_746 = &g_299;
        uint8_t *l_762 = &g_232;
        uint8_t l_805 = 0x77;
        int16_t ****l_835 = &g_564;
        l_648 = (safe_mod_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((*l_498), l_647)), (*l_621)));
    }
    return p_26;
}
static uint16_t func_32(uint32_t p_33, int16_t p_34, uint16_t p_35)
{
    int32_t ****l_385 = (void*)0;
    int32_t *****l_386 = &l_385;
    (*l_386) = ((*g_305) = l_385);
    return p_35;
}
static uint32_t func_39(uint16_t p_40, uint16_t p_41, uint32_t p_42)
{
    uint16_t *l_260 = &g_192;
    int32_t l_279 = 0xD9C54822;
    int32_t *****l_333 = (void*)0;
    uint16_t l_336 = 0xFCD0;
    if ((g_192 <= (safe_add_func_int8_t_s_s(((safe_div_func_uint8_t_u_u(g_7, (safe_lshift_func_uint16_t_u_s(p_42, p_42)))) ^ ((safe_lshift_func_int8_t_s_u(p_42, 0)) != ((void*)0 == l_260))), (g_192 != 1)))))
    {
        uint32_t l_278 = 0x5342E7D5;
        int32_t l_335 = 0x984B9C5F;
        int32_t **l_366 = &g_144;
        uint16_t *l_377 = &l_336;
        if (g_7)
        {
            int8_t l_263 = 0x0E;
            int32_t *l_268 = &g_205;
            uint8_t *l_345 = &g_232;
            if ((safe_lshift_func_int8_t_s_s(l_263, 1)))
            {
                int32_t *l_265 = &g_93;
                int32_t *l_266 = (void*)0;
                int32_t *l_267 = &g_205;
                int32_t **l_269 = &l_266;
                int32_t **l_270 = &l_268;
                int32_t **l_271 = &l_265;
                (*l_265) = (((void*)0 == &g_232) > (!p_42));
                (*l_267) = ((*l_265) = p_42);
                (*l_271) = ((*l_270) = ((*l_269) = l_268));
            }
            else
            {
                uint16_t l_292 = 2U;
                int32_t l_322 = 7;
                int32_t **l_337 = &l_268;
                int32_t **l_338 = &g_144;
                uint16_t *l_344 = &l_336;
                uint8_t **l_346 = (void*)0;
                uint8_t **l_347 = &l_345;
                int16_t *l_348 = &g_297;
                uint16_t **l_378 = &l_377;
                for (g_192 = 0; (g_192 != 36); g_192++)
                {
                    uint8_t l_295 = 0x7B;
                    int32_t *l_301 = &g_93;
                    int32_t *****l_320 = &g_298;
                    for (p_40 = 0; (p_40 <= 58); p_40 = safe_add_func_int32_t_s_s(p_40, 6))
                    {
                        uint16_t l_276 = 0U;
                        int32_t **l_277 = &g_144;
                        (*l_268) = l_276;
                        (*l_277) = l_268;
                        if (p_41)
                            continue;
                    }
                }
                (*l_338) = ((*l_337) = l_268);
                if (((g_192 > ((*l_348) = (!(((0 != ((safe_add_func_uint16_t_u_u(((*l_344) = (((void*)0 == (*g_298)) || (safe_add_func_uint16_t_u_u(2U, (p_41 = (p_40 = l_278)))))), (((*l_347) = l_345) == (void*)0))) ^ (*l_268))) > g_205) != g_93)))) || g_93))
                {
                    int32_t l_349 = 0x2E214262;
                    int32_t *l_350 = &g_93;
                    l_349 = 0xD40E6857;
                    l_350 = &l_335;
                    (*l_337) = (*l_337);
                    (**l_338) = (**l_338);
                }
                else
                {
                    uint32_t l_355 = 0x07945E16;
                    int32_t *l_356 = &g_93;
                    int32_t ***l_367 = &l_337;
                    uint32_t *l_368 = &l_355;
                    (**l_338) = p_40;
                    for (g_297 = 0; (g_297 > (-13)); g_297--)
                    {
                        (*l_268) = ((safe_rshift_func_int8_t_s_u(p_40, 3)) & l_355);
                        if ((*g_144))
                            continue;
                    }
                    (**l_338) = ((void*)0 == l_356);
                    (*l_268) = (((*l_368) = (safe_unary_minus_func_int8_t_s(((safe_lshift_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(p_42, (safe_sub_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(g_90, ((((*l_367) = l_366) == &l_268) < (((**g_79) > ((p_42 || ((void*)0 == &p_42)) && 0x0C0B13E4)) > (**g_79))))), 0xE9)))), p_42)) == 0x146D75CF)))) >= 0xA2F377F4);
                }
                (*g_144) = ((safe_mod_func_int16_t_s_s(((((safe_lshift_func_int16_t_s_u(((safe_add_func_int16_t_s_s(0x9FC5, 0x61ED)) >= (safe_sub_func_uint16_t_u_u(g_192, (((*l_378) = l_377) == &p_40)))), 11)) || (**l_366)) <= g_192) >= g_379), (*l_268))) == 0x4EDE);
            }
        }
        else
        {
            for (g_192 = 26; (g_192 <= 7); --g_192)
            {
                int32_t *l_383 = &g_205;
                int32_t **l_382 = &l_383;
                (*l_382) = ((*l_366) = &l_279);
                if (p_41)
                    break;
            }
            (*l_366) = &l_279;
            return g_111;
        }
        (*l_366) = &l_335;
    }
    else
    {
        int32_t *l_384 = &l_279;
        l_384 = &l_279;
    }
    return g_7;
}
static uint16_t func_45(int16_t p_46, uint32_t p_47, uint32_t p_48)
{
    int8_t *l_73 = &g_29;
    int8_t **l_72 = &l_73;
    int32_t l_183 = 0;
    int32_t l_243 = 0xE91FFD6F;
    int32_t **l_249 = &g_144;
    for (p_48 = (-5); (p_48 <= 32); p_48++)
    {
        int8_t *l_64 = &g_29;
        int8_t *l_110 = &g_111;
        int8_t *l_112 = &g_29;
        int32_t l_182 = 8;
        int8_t ***l_236 = &l_72;
        uint8_t *l_244 = (void*)0;
        uint8_t *l_245 = &g_232;
        (*l_236) = func_56((l_183 = (func_61(l_64, func_65((l_110 = func_70(l_72)), l_112, g_7, &g_80)) > ((l_182 = (safe_add_func_int8_t_s_s(p_46, 0x3B))) >= 0x9A))), &g_29, g_7, &l_112);
        if ((0x5A3BC6B9 && (0xDC & (((g_7 | (g_90 > (l_183 = (-1)))) <= ((safe_lshift_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_u((safe_div_func_int8_t_s_s(l_182, ((*l_245) = l_243))), 2)) <= 1U), (p_48 != 0U))) && p_47)) & 0x7D06))))
        {
            return p_47;
        }
        else
        {
            int32_t *l_248 = (void*)0;
            g_144 = l_248;
        }
        return l_182;
    }
    (*l_249) = &l_243;
    return p_47;
}
static int8_t ** func_56(int32_t p_57, int8_t * p_58, uint32_t p_59, int8_t ** p_60)
{
    uint32_t l_202 = 0U;
    int16_t l_209 = 0x4891;
    int32_t l_210 = 0x9F227602;
    uint32_t *l_229 = &g_108;
    int32_t l_230 = 0xC0DD118E;
    uint8_t *l_231 = &g_232;
    int8_t l_233 = (-1);
    int32_t l_234 = 0x3C8D9F3E;
    int8_t **l_235 = &g_80;
    for (g_90 = 0; (g_90 <= (-17)); --g_90)
    {
        int8_t l_186 = 0x51;
        uint16_t *l_191 = &g_192;
        uint8_t l_197 = 0x06;
        uint32_t *l_198 = &g_108;
        int8_t *l_201 = &g_111;
        int32_t *l_203 = &g_93;
        int32_t *l_204 = &g_205;
        (*l_204) = ((*l_203) = (l_186 > (safe_mod_func_uint8_t_u_u(g_29, (safe_div_func_uint16_t_u_u(((*l_191) = l_186), (safe_rshift_func_uint8_t_u_u(((safe_add_func_int32_t_s_s(l_186, ((*l_198) = (0U ^ l_197)))) == (((-1) == ((((*l_201) = (safe_sub_func_uint32_t_u_u(0xE8ED7A3F, (p_57 = l_186)))) | (**p_60)) || l_202)) & 4294967288U)), g_7))))))));
        for (g_108 = 0; (g_108 < 38); ++g_108)
        {
            uint16_t *l_208 = &g_192;
            (*l_203) = (l_208 != (void*)0);
        }
        if (l_209)
            continue;
    }
    l_234 = ((((l_210 = (*g_80)) | (p_57 < (safe_add_func_int16_t_s_s(((+(safe_sub_func_int16_t_s_s((safe_add_func_int16_t_s_s(((!0) == (safe_rshift_func_uint8_t_u_u(5U, 7))), (((*l_231) = ((l_230 = (safe_sub_func_int16_t_s_s(((safe_add_func_int32_t_s_s((8U == l_209), ((*l_229) = ((p_57 != (g_7 || (safe_lshift_func_uint16_t_u_s((((((safe_sub_func_int32_t_s_s(p_57, l_209)) >= g_111) < (*p_58)) || 65531U) > 0x1270), 10)))) < g_108)))) || g_29), 0x2BA9))) != g_90)) == 0x04))), 0))) == (-1)), l_233)))) <= 0xDB1C9D1C) | 1);
    return l_235;
}
static uint16_t func_61(int8_t * p_62, int8_t * p_63)
{
    uint8_t l_164 = 0xFE;
    uint32_t l_174 = 8U;
    int32_t l_175 = (-1);
    int32_t l_176 = 1;
    uint8_t *l_177 = (void*)0;
    uint8_t *l_178 = &l_164;
    int32_t *l_179 = &g_93;
    (*l_179) = (((*l_178) = (((((l_164 <= (~((l_164 && ((g_93 && (l_176 = (((l_175 = ((0 & (safe_rshift_func_int16_t_s_s((g_90 ^ (safe_sub_func_int32_t_s_s(l_164, (g_7 > ((((safe_lshift_func_int16_t_s_s(l_164, 0)) == (g_7 == g_7)) | l_174) > g_111))))), 0))) <= l_175)) != l_164) <= l_164))) == 4U)) > 0x08))) <= l_164) == l_164) <= (*p_62)) | g_93)) && l_176);
    return g_7;
}
static int8_t * func_65(int8_t * p_66, int8_t * p_67, int32_t p_68, int8_t ** p_69)
{
    uint32_t l_113 = 0U;
    int32_t l_114 = 0x07078C3F;
    int32_t *l_115 = &g_93;
    int32_t **l_152 = &l_115;
    int32_t ***l_151 = &l_152;
    int32_t *l_155 = &l_114;
    int8_t *l_163 = (void*)0;
    if (((*l_115) = ((l_114 = l_113) <= l_113)))
    {
        int8_t l_120 = 3;
        int32_t l_121 = 0x8D27FD73;
        uint32_t *l_133 = (void*)0;
        for (g_90 = 8; (g_90 <= 5); --g_90)
        {
            int8_t ***l_126 = &g_79;
            uint32_t *l_142 = &g_108;
            int32_t **l_143 = (void*)0;
            (*l_115) = (safe_div_func_int32_t_s_s(((l_121 = l_120) < ((safe_mod_func_int8_t_s_s((g_90 < ((((safe_lshift_func_int8_t_s_s(((*p_67) || ((void*)0 == l_126)), 4)) | ((safe_rshift_func_int16_t_s_u((safe_sub_func_uint8_t_u_u(((((void*)0 != l_133) && (((*l_142) = ((safe_rshift_func_uint16_t_u_s((safe_mod_func_uint32_t_u_u((safe_div_func_int16_t_s_s((g_111 <= ((safe_rshift_func_int16_t_s_u((*l_115), 8)) != (**g_79))), l_120)), g_7)), g_93)) <= (-7))) >= g_7)) & p_68), 1U)), 15)) < g_7)) != 9U) ^ p_68)), p_68)) && (*l_115))), 0xE6D0914B));
            if (l_113)
                goto lbl_156;
            g_144 = &p_68;
        }
        for (g_108 = 12; (g_108 != 30); g_108 = safe_add_func_int8_t_s_s(g_108, 9))
        {
            int32_t *l_147 = &l_121;
            int32_t **l_148 = &g_144;
            int32_t **l_149 = &l_147;
            (*l_149) = ((*l_148) = l_147);
        }
    }
    else
    {
        uint8_t l_150 = 0xEC;
        int32_t ****l_153 = (void*)0;
        int32_t ****l_154 = &l_151;
        (*l_115) = g_93;
        (*l_115) = l_150;
        (*l_154) = l_151;
        (***l_154) = l_155;
    }
lbl_156:
    (**l_151) = &g_93;
    for (g_111 = 5; (g_111 < (-26)); --g_111)
    {
        for (g_93 = 0; (g_93 != 17); ++g_93)
        {
            int32_t *l_161 = &l_114;
            int8_t *l_162 = &g_29;
            (**l_151) = l_161;
            (**l_151) = &g_93;
            return l_162;
        }
        return (*g_79);
    }
    return l_163;
}
static int8_t * func_70(int8_t ** p_71)
{
    uint32_t l_76 = 4294967295U;
    int8_t ***l_81 = &g_79;
    int8_t ***l_82 = (void*)0;
    int8_t **l_84 = &g_80;
    int8_t ***l_83 = &l_84;
    int16_t *l_87 = (void*)0;
    int16_t *l_88 = (void*)0;
    int16_t *l_89 = &g_90;
    int32_t l_91 = 0x923F8C0E;
    int32_t *l_92 = &g_93;
    int32_t **l_94 = (void*)0;
    int32_t **l_95 = (void*)0;
    int32_t **l_96 = &l_92;
    uint16_t l_99 = 65535U;
    uint32_t l_102 = 0x888327BC;
    uint32_t *l_107 = &g_108;
    int16_t l_109 = 1;
    (*l_92) = ((safe_rshift_func_int8_t_s_u(4, 2)) ^ ((0x02F603F5 & l_76) || (safe_sub_func_uint16_t_u_u((((*l_81) = g_79) == ((*l_83) = p_71)), ((l_91 = ((*l_89) = (((void*)0 == (*p_71)) < (safe_rshift_func_uint8_t_u_u(g_29, l_76))))) < 0xCF48)))));
    (*l_96) = (void*)0;
    l_109 = (safe_mod_func_int8_t_s_s(l_99, (safe_mod_func_uint32_t_u_u(g_29, ((*l_107) = (l_102 | (safe_div_func_uint16_t_u_u(g_29, (safe_lshift_func_uint16_t_u_u(g_29, 3))))))))));
    return (*g_79);
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_7;
    csmith_sink_ = g_29;
    csmith_sink_ = g_90;
    csmith_sink_ = g_93;
    csmith_sink_ = g_108;
    csmith_sink_ = g_111;
    csmith_sink_ = g_192;
    csmith_sink_ = g_205;
    csmith_sink_ = g_232;
    csmith_sink_ = g_297;
    csmith_sink_ = g_379;
    csmith_sink_ = g_540;
    csmith_sink_ = g_584;
    csmith_sink_ = g_585;
    csmith_sink_ = g_748;
    csmith_sink_ = g_750;
    csmith_sink_ = g_760;
    csmith_sink_ = g_776;
    csmith_sink_ = g_1074;
    platform_main_end(0,0);
    return 0;
}
