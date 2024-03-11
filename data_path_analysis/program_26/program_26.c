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
   int32_t f0;
   int32_t f1;
   int16_t f2;
};
static int32_t g_3 = (-1);
static uint32_t g_11 = 0x80FC3A06;
static uint16_t g_13 = 0U;
static struct S0 g_44 = {-4,0x34C2E397,0};
static uint32_t g_47 = 1U;
static uint16_t g_89[10] = {65530U,65530U,65530U,65530U,65530U,65530U,65530U,65530U,65530U,65530U};
static struct S0 g_97 = {-10,1,0x2B77};
static int16_t g_150[8][10] = {{0,0x0EC6,0xEC57,0xEDEF,0xEDEF,0xEC57,0x0EC6,0,0x0EC6,0xEC57},{(-7),0x735A,0xEDEF,0x735A,(-7),0xEC57,0xEC57,(-7),0x735A,0xEDEF},{0,0,0xEDEF,(-7),7,(-7),0xEDEF,0,0,0xEDEF},{0x735A,(-7),0xEC57,0xEC57,(-7),0x735A,0,0x0EC6,0xEC57,0xEDEF},{(-7),7,(-7),0xEDEF,0,0,0xEDEF,(-7),7,(-7)},{(-7),0x0EC6,7,0xEC57,7,0x0EC6,(-7),(-7),0x0EC6,7},{0x0EC6,(-7),(-7),0x0EC6,7,0xEC57,7,0x0EC6,(-7),(-7)},{7,(-7),0xEDEF,0,0,0xEDEF,(-7),7,(-7),0xEDEF}};
static int32_t g_274 = 0x7575D801;
static int8_t g_352 = 1;
static uint32_t g_569[10] = {4294967295U,4294967295U,4294967295U,4294967295U,4294967295U,4294967295U,4294967295U,4294967295U,4294967295U,4294967295U};
static int16_t g_582 = 0;
static uint32_t g_595 = 3U;
static int32_t g_698 = (-8);
static int32_t g_700 = 0xB1DE2523;
static uint32_t g_750 = 1U;
inline static uint16_t func_1(void);
inline static int32_t func_4(uint16_t p_5, uint16_t p_6);
inline static uint16_t func_15(uint32_t p_16, struct S0 p_17, int16_t p_18, int32_t p_19, uint16_t p_20);
inline static int8_t func_21(struct S0 p_22, uint8_t p_23, int16_t p_24);
inline static uint8_t func_30(uint32_t p_31, uint32_t p_32, uint32_t p_33, int8_t p_34);
static int32_t func_36(int32_t p_37, int32_t p_38, struct S0 p_39);
static uint16_t func_40(int8_t p_41, int16_t p_42, uint32_t p_43);
static int32_t func_51(int32_t p_52, uint16_t p_53, int32_t p_54, uint32_t p_55);
static int32_t func_69(uint16_t p_70);
inline static int16_t func_77(uint8_t p_78, int32_t p_79, int32_t p_80, uint16_t p_81);
inline static uint16_t func_1(void)
{
    int32_t l_2[8][8][4];
    struct S0 l_425 = {-1,-1,0x405D};
    uint8_t l_440 = 0x86;
    int16_t l_451 = 0xC4C5;
    int8_t l_459 = 0x2C;
    int16_t l_549[1][9] = {{0x348A,0x348A,9,0x348A,0x348A,9,0x348A,0x348A,9}};
    struct S0 l_627[4][7] = {{{9,0x37144B47,0},{9,0x37144B47,0},{9,0x37144B47,0},{9,0x37144B47,0},{9,0x37144B47,0},{9,0x37144B47,0},{9,0x37144B47,0}},{{-10,0,1},{-10,0,1},{-10,0,1},{-10,0,1},{-10,0,1},{-10,0,1},{-10,0,1}},{{9,0x37144B47,0},{9,0x37144B47,0},{9,0x37144B47,0},{9,0x37144B47,0},{9,0x37144B47,0},{9,0x37144B47,0},{9,0x37144B47,0}},{{-10,0,1},{-10,0,1},{-10,0,1},{-10,0,1},{-10,0,1},{-10,0,1},{-10,0,1}}};
    uint32_t l_749 = 0xF1FF3757;
    int i, j, k;
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 4; k++)
                l_2[i][j][k] = 0x0F57A7C2;
        }
    }
    for (g_3 = 3; (g_3 >= 0); g_3 -= 1)
    {
        struct S0 l_14 = {5,-8,0x5308};
        struct S0 l_25[2][1][7] = {{{{4,-3,7},{-10,0x2BE2FF5F,-2},{4,-3,7},{-10,0x2BE2FF5F,-2},{4,-3,7},{-10,0x2BE2FF5F,-2},{4,-3,7}}},{{{-10,-1,0},{-10,-1,0},{-10,-1,0},{-10,-1,0},{-10,-1,0},{-10,-1,0},{-10,-1,0}}}};
        int32_t l_26[6][10] = {{(-10),(-1),0,1,0x5493A50E,0x505D01CD,0xB1D4416D,2,9,0x2FE2CCF5},{0,0x74126315,0x1460DEEA,(-1),0x5493A50E,(-1),3,(-1),0x5493A50E,(-1)},{0x5493A50E,0xB1D4416D,0x5493A50E,(-10),0xC6F73980,1,0x2FE2CCF5,0x1460DEEA,0x1081B270,1},{0xB1D4416D,0xC6F73980,3,0,0x2FE2CCF5,0xD911ACA8,0,0x1460DEEA,0x1460DEEA,0},{9,0x1081B270,0x5493A50E,0x5493A50E,0x1081B270,9,0x1460DEEA,(-1),0x99C77E21,3},{0x74126315,0x3A1E2510,0x1460DEEA,0xB1D4416D,0xBEC151D1,0x1081B270,0xD911ACA8,2,0x505D01CD,0}};
        int32_t l_365 = 0;
        uint32_t l_366 = 0U;
        int16_t l_421 = 0;
        int i, j, k;
        if (func_4(((((safe_sub_func_int32_t_s_s(((safe_sub_func_int32_t_s_s((((l_365 = (l_26[2][1] = (((((g_11 = g_3) != (((((safe_unary_minus_func_int16_t_s((g_13 = (-1)))) != g_3) <= ((((l_14 = l_14) , func_15(((l_2[3][0][0] != ((g_3 | 0x97) , (g_3 ^ func_21((l_14 = (l_25[1][0][3] = l_25[1][0][0])), l_26[0][6], g_3)))) == g_3), g_97, g_97.f0, g_97.f0, l_26[0][6])) <= g_3) && g_89[7])) < g_3) ^ l_2[5][6][1])) , l_2[3][6][2]) && 8) | g_352))) <= l_2[5][7][1]) ^ g_3), 0xB54537DB)) , l_366), 0U)) ^ g_352) , l_2[0][0][1]) , 65535U), l_2[7][1][0]))
        {
            int32_t l_406 = 0x6C695DF1;
            l_26[0][6] = (safe_add_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u((g_150[4][9] <= l_406), (((safe_rshift_func_uint8_t_u_s((safe_sub_func_uint8_t_u_u(((((g_47 , ((g_89[1] , g_3) ^ (0x9C < (6 >= ((safe_add_func_int32_t_s_s(((safe_add_func_uint16_t_u_u(((0xA1F2281E <= g_44.f0) > 7U), g_89[4])) || l_2[4][7][2]), 0)) == l_406))))) < 0xB5572DAF) & 0xF6FA15BB) > l_406), l_406)), g_352)) , g_3) | g_11))), g_44.f1));
        }
        else
        {
            return l_2[4][3][0];
        }
        if (g_97.f2)
            continue;
        l_421 = (safe_mul_func_int16_t_s_s(l_14.f2, (safe_lshift_func_int16_t_s_s((-1), 8))));
        g_97.f1 = (safe_unary_minus_func_uint32_t_u((safe_rshift_func_uint8_t_u_s(g_352, 7))));
        for (l_14.f0 = 0; (l_14.f0 <= 3); l_14.f0 += 1)
        {
            g_97 = (g_44 = g_97);
            if (g_44.f0)
                continue;
            l_425 = l_25[1][0][0];
            if (g_97.f0)
                continue;
            for (g_44.f1 = 3; (g_44.f1 >= 0); g_44.f1 -= 1)
            {
                int i, j, k;
                if ((l_2[(g_44.f1 + 2)][(g_44.f1 + 4)][g_3] <= 8))
                {
                    g_97 = ((((safe_mod_func_int16_t_s_s((((-5) && l_14.f0) || (!(g_274 || ((safe_rshift_func_uint16_t_u_u(g_352, 9)) & 4U)))), l_425.f2)) >= ((-10) || (2U ^ g_150[3][8]))) , l_366) , g_44);
                }
                else
                {
                    return l_366;
                }
            }
        }
    }
    if ((safe_lshift_func_int16_t_s_s((safe_sub_func_int8_t_s_s((~((l_2[2][2][1] = (safe_add_func_uint8_t_u_u((((safe_mul_func_int16_t_s_s(l_440, g_97.f1)) >= ((safe_lshift_func_uint16_t_u_s((safe_sub_func_int8_t_s_s(g_44.f0, (((((g_3 = ((safe_sub_func_int16_t_s_s((l_425.f1 = ((safe_sub_func_int32_t_s_s((((safe_rshift_func_int8_t_s_u((l_451 = 0x59), 3)) == ((safe_sub_func_int32_t_s_s(l_2[3][1][1], ((safe_lshift_func_int16_t_s_u((((~g_89[1]) != (g_44.f1 = (0x49E0 == (((safe_mul_func_uint8_t_u_u(g_13, g_44.f2)) , g_44.f0) & g_150[2][5])))) != 1), 9)) ^ g_44.f2))) <= 0xA868)) || 0), l_459)) , 0x4615)), 0U)) , g_97.f0)) != l_2[5][5][1]) , l_451) && 9) != l_425.f2))), l_459)) | g_150[4][0])) , l_425.f1), g_352))) , l_425.f0)), g_89[1])), g_47)))
    {
        uint8_t l_460[1];
        int i;
        for (i = 0; i < 1; i++)
            l_460[i] = 0xD0;
        return l_460[0];
    }
    else
    {
        int32_t l_471 = 4;
        int16_t l_486 = (-5);
        uint16_t l_551 = 0x2FF1;
        int8_t l_553[4] = {0xE8,0xE8,0xE8,0xE8};
        struct S0 l_597[6] = {{-10,0,-7},{-10,0,-7},{-10,0,-7},{-10,0,-7},{-10,0,-7},{-10,0,-7}};
        uint32_t l_606 = 0x4594A083;
        uint32_t l_664 = 0x3A482379;
        int8_t l_665 = (-10);
        uint16_t l_701 = 0x98EB;
        uint8_t l_752[8] = {0U,255U,255U,0U,255U,255U,0U,255U};
        int i;
        g_97.f1 = (safe_rshift_func_uint16_t_u_u((safe_mod_func_int16_t_s_s(((safe_mod_func_uint32_t_u_u(((safe_add_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u((l_471 & (safe_mul_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((safe_add_func_int16_t_s_s((246U ^ ((safe_mul_func_uint16_t_u_u((g_352 , (safe_mul_func_int32_t_s_s(((((g_97.f2 = (l_471 && (safe_mod_func_uint32_t_u_u((g_47 = 7U), (g_97.f0 || (g_97.f1 | ((g_13 , (((safe_lshift_func_int8_t_s_u(l_486, g_274)) && l_2[2][5][3]) <= 0xC2)) , g_44.f0))))))) == l_440) , 6U) & g_89[1]), 0U))), l_425.f1)) , l_486)), l_471)), g_44.f1)), g_150[5][8]))), l_471)), (-2))) == (-6)), g_44.f0)) && 0x81C60C0C), l_425.f2)), 4));
        for (g_44.f0 = 0; (g_44.f0 < (-9)); g_44.f0 = safe_sub_func_int16_t_s_s(g_44.f0, 1))
        {
            int32_t l_494 = 0;
            int32_t l_516 = 0xB77BD81F;
            int32_t l_517 = 0x1B116B15;
            uint32_t l_518 = 7U;
            g_97.f1 = (((safe_rshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_s((((safe_unary_minus_func_uint8_t_u(l_494)) | ((l_494 > (g_44.f1 && (l_440 || (safe_mul_func_int8_t_s_s((+((0x5BDC | (((safe_rshift_func_int8_t_s_s(((l_517 = (l_486 && ((safe_sub_func_int32_t_s_s((g_3 == 1), (safe_mul_func_uint16_t_u_u((safe_unary_minus_func_uint32_t_u(((((safe_lshift_func_int16_t_s_u(((g_44.f2 = ((safe_lshift_func_int16_t_s_s((safe_add_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((l_516 = ((safe_unary_minus_func_uint32_t_u(((safe_add_func_int32_t_s_s((-3), g_274)) || l_494))) | g_150[6][1])), l_494)), g_47)), 0)) < l_471)) & 0x0BBA), g_13)) < l_471) , 0x42) , g_89[5]))), g_150[4][9])))) == g_274))) , (-10)), l_518)) ^ l_451) == 9)) == g_3)), g_352))))) > 0x1DE4)) && l_2[1][0][0]), 0)), 7)) | l_471) && 7U);
            g_44.f1 = l_471;
            for (l_440 = 0; (l_440 == 32); l_440++)
            {
                uint32_t l_550 = 0U;
                uint16_t l_552 = 0U;
                g_97 = l_425;
                l_2[7][6][1] = (0 == (safe_lshift_func_uint8_t_u_u((safe_add_func_int32_t_s_s((safe_add_func_uint16_t_u_u(l_440, (safe_lshift_func_int16_t_s_s(l_2[3][0][3], ((safe_add_func_uint32_t_u_u(g_97.f1, (((safe_lshift_func_int16_t_s_s((g_97.f0 , (safe_lshift_func_int16_t_s_u((safe_mul_func_int8_t_s_s((((safe_add_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s((safe_add_func_int32_t_s_s(((g_47 == (safe_mod_func_int32_t_s_s((0x4A4F == (0x01 > (((l_549[0][1] & 0x48) & l_471) <= g_13))), l_494))) != 3U), 0x165C4EDA)), g_44.f1)), l_549[0][1])), g_97.f2)), l_550)) | l_2[2][5][3]) | 0xF2), g_3)), 14))), l_551)) >= 0x4D93) , l_516))) | (-10)))))), l_552)), 0)));
                l_471 = g_150[0][6];
            }
        }
        if ((l_553[2] || 0x00))
        {
            struct S0 l_563 = {1,0xB8BD8121,-3};
            uint32_t l_570 = 4294967288U;
            int32_t l_594[5][3] = {{8,8,(-1)},{0x96F67719,0x96F67719,0x3BEA1271},{8,8,8},{0x0F2087BE,0x0F2087BE,0x96F67719},{0x257B2B4F,0x257B2B4F,8}};
            int i, j;
            for (l_425.f0 = 0; (l_425.f0 != (-9)); l_425.f0 = safe_sub_func_int32_t_s_s(l_425.f0, 9))
            {
                int32_t l_560 = (-4);
                g_44.f1 = (l_570 = ((safe_add_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(l_560, ((safe_mul_func_uint8_t_u_u(((l_563 , (l_560 & ((g_13 == (((6U ^ (!((safe_rshift_func_uint8_t_u_s((g_569[1] = (g_11 < (safe_sub_func_int16_t_s_s((l_563.f0 || (l_553[2] , (l_563.f2 >= g_97.f1))), 0xBA3C)))), g_3)) ^ l_563.f2))) , g_352) , l_549[0][1])) && g_274))) != 0x1D2E), 255U)) >= (-1)))), l_563.f2)) & l_471));
                g_3 = g_97.f1;
                l_2[2][5][3] = (safe_rshift_func_int16_t_s_s((!g_150[7][2]), (+(safe_rshift_func_uint16_t_u_s((g_13 = (0 < ((g_3 != ((safe_mod_func_int32_t_s_s(g_150[0][1], (((g_97.f1 = (~(g_582 = 1U))) <= (l_560 = l_549[0][1])) | (((l_563.f1 = ((safe_add_func_uint8_t_u_u(((g_89[1] = 0U) > g_97.f0), (safe_rshift_func_uint8_t_u_u(((g_44.f2 = ((l_594[2][0] = (safe_add_func_int32_t_s_s((((safe_sub_func_uint16_t_u_u((+((safe_lshift_func_uint8_t_u_u((g_44.f1 , g_569[7]), g_44.f1)) ^ 4)), 8)) >= g_352) | g_97.f2), 0))) < g_569[1])) >= g_569[1]), 1)))) , l_549[0][1])) & 0xCA) >= 1U)))) > g_569[1])) & 0U))), g_595)))));
            }
        }
        else
        {
            struct S0 l_596 = {0x8AE73E58,6,0};
            uint32_t l_628 = 1U;
            uint16_t l_629[9] = {4U,4U,4U,4U,4U,4U,4U,4U,4U};
            int32_t l_630 = 0xB2496E74;
            int32_t l_631 = 0x27C97FB5;
            int i;
            g_3 = l_551;
            l_597[3] = l_596;
            l_631 = (safe_lshift_func_uint8_t_u_u(((safe_sub_func_int32_t_s_s((l_630 = ((safe_mul_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(l_606, (safe_sub_func_int32_t_s_s((safe_mod_func_int16_t_s_s((g_44.f2 = g_150[4][9]), 1U)), ((((l_596.f1 = ((safe_sub_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u((l_627[2][2].f1 = ((safe_mul_func_int16_t_s_s((0x1DA51213 >= (safe_rshift_func_uint8_t_u_u((g_569[1] < g_569[1]), 2))), (l_549[0][1] ^ ((((safe_lshift_func_int16_t_s_s(0x1609, ((safe_add_func_int8_t_s_s((((((safe_add_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s((((((l_627[2][2] , l_596.f0) | l_596.f2) & g_569[1]) < g_47) , g_47), g_97.f2)), g_274)) >= l_596.f1) & l_471) == g_97.f0) , g_150[4][9]), 0x7A)) >= l_597[3].f1))) != l_549[0][3]) >= 0x9E850AB1) > l_628)))) >= g_595)), l_553[2])), 0x5CD2)) >= g_150[4][9])) != g_44.f0) == l_628) < g_44.f0))))), g_44.f0)) , l_629[7])), 4294967289U)) , l_627[2][2].f0), l_597[3].f0));
        }
        for (l_425.f0 = (-9); (l_425.f0 < 24); ++l_425.f0)
        {
            int8_t l_653 = 0x19;
            int32_t l_663 = 0x1ACD9AAD;
            int32_t l_708 = 0x12468BF4;
            l_2[0][0][3] = ((safe_mod_func_int16_t_s_s((safe_add_func_uint16_t_u_u((((safe_sub_func_int16_t_s_s(((((~g_150[4][9]) > (safe_add_func_int32_t_s_s((safe_add_func_uint8_t_u_u(l_553[0], (((safe_mul_func_int8_t_s_s(g_44.f2, (safe_mod_func_uint32_t_u_u((l_663 = (safe_rshift_func_uint16_t_u_s((((((safe_add_func_int8_t_s_s(((g_569[1] = ((l_653 = (g_47 = 0x4C814A6B)) | 3U)) | ((((0x7A < ((0x0430 || g_150[4][9]) != (safe_mod_func_uint8_t_u_u(((safe_unary_minus_func_int16_t_s(((safe_rshift_func_int8_t_s_s((((safe_rshift_func_uint16_t_u_u((safe_add_func_int32_t_s_s(l_451, g_274)), 9)) <= g_97.f2) > 2), g_352)) || g_352))) , 2U), 0x23)))) < l_627[2][2].f2) == l_486) <= l_663)), (-2))) < g_89[9]) , l_451) >= 0x94) , 0x6038), l_664))), l_665)))) < l_553[2]) , g_97.f2))), l_459))) != g_595) , g_97.f2), (-9))) && 0xF70E) | g_97.f2), g_150[4][9])), g_3)) < l_664);
            for (g_47 = 0; (g_47 < 53); g_47++)
            {
                int16_t l_681 = 0x187A;
                int32_t l_699[1][5][6] = {{{(-1),0,(-1),0,0xBAEB1C24,0xBAEB1C24},{0x2367ABED,(-1),(-1),0x2367ABED,0,5},{5,0x2367ABED,0xBAEB1C24,0x2367ABED,5,0},{0x2367ABED,5,0,0,5,0x2367ABED},{(-1),0x2367ABED,0,5,0,0x2367ABED}}};
                int i, j, k;
                g_3 = ((g_700 = ((g_13 = ((safe_sub_func_uint32_t_u_u(g_44.f1, ((g_150[6][2] , (safe_mod_func_uint32_t_u_u((((0x46 & (((safe_mod_func_int32_t_s_s((safe_rshift_func_int16_t_s_u(((!(0U && (safe_mul_func_int8_t_s_s(l_653, (safe_sub_func_uint16_t_u_u(l_681, ((g_150[6][7] & (((safe_sub_func_uint16_t_u_u((((safe_mul_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((safe_add_func_int32_t_s_s(((l_425.f1 = ((((safe_mod_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s(((safe_sub_func_int8_t_s_s(((l_699[0][2][2] = (g_44.f0 || (g_698 = (((g_97.f2 = g_44.f0) && 0U) , l_681)))) && l_425.f2), 1U)) <= l_653), 0x500A)) | g_582), 65527U)) <= l_681) , l_653) || l_653)) == g_13), g_352)), g_89[2])), 5)) < l_664), g_3)) || l_597[3].f0) < g_89[1]), (-2))) && g_595) <= g_11)) , 0x28CE))))))) != l_627[2][2].f1), 14)), l_486)) || l_699[0][2][2]) != l_664)) <= l_551) || 4), g_89[1]))) != l_681))) ^ l_663)) & g_569[1])) == l_701);
                g_44.f1 = l_653;
            }
            if (((safe_rshift_func_uint16_t_u_u((((l_663 = 0x38F8) != (0xD2B475C6 & ((l_627[2][2].f1 = (g_89[5] = ((g_13 = ((safe_add_func_int8_t_s_s(((g_352 = ((0xCE64919B > ((l_653 != (l_425.f1 = (g_150[4][9] = ((((((safe_add_func_uint32_t_u_u((((l_2[5][7][1] = g_44.f0) || (0x3DD166B5 > ((0xF7E0 <= (l_664 & ((0xBD < l_653) , l_653))) ^ 0x2F569349))) , 0xE336C1B1), l_425.f1)) != l_425.f1) || 0U) | g_97.f2) , 0xC3) >= 0x92)))) >= l_551)) != l_708)) <= g_97.f0), g_44.f0)) != g_569[8])) ^ g_44.f0))) , g_44.f0))) && l_459), l_665)) , l_451))
            {
                uint16_t l_714 = 0x516A;
                g_44 = ((l_471 = 2) , ((l_653 , g_274) , (g_595 , (g_97 , g_44))));
                g_97.f1 = (l_701 && (0xCD5B && (safe_rshift_func_uint16_t_u_s(0x1251, (((safe_mul_func_uint8_t_u_u((g_44 , (g_3 != ((g_13 = (((g_44.f1 = (g_150[4][9] ^ ((l_425.f1 = g_595) != (!l_627[2][2].f0)))) , (l_440 < g_150[1][9])) , l_627[2][2].f2)) <= l_714))), l_665)) || 0xF368) != g_352)))));
            }
            else
            {
                int32_t l_715 = 0x4AD9BC32;
                int32_t l_751 = (-10);
                if (l_715)
                    break;
                g_44 = ((((((safe_rshift_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u(((((safe_rshift_func_uint8_t_u_u((l_715 = (safe_lshift_func_uint16_t_u_u((g_89[1] = (((g_11 = ((0U > ((safe_sub_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(((safe_add_func_int8_t_s_s(((g_750 = (g_97.f0 && (((safe_mod_func_uint32_t_u_u((safe_mul_func_int8_t_s_s((safe_mul_func_int16_t_s_s((0xAD5C977F | ((((safe_rshift_func_int8_t_s_s((((l_471 = g_97.f1) <= (safe_mod_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_s((safe_mod_func_int16_t_s_s((((((safe_add_func_int32_t_s_s((+(1U && (0x3CB1FA36 ^ (safe_mul_func_int16_t_s_s((((g_97 , 0x0BACC384) , l_664) || 0x38), l_459))))), g_150[1][2])) ^ 0x2EEF) , l_715) , l_486) < g_595), l_749)), g_97.f1)) == l_606), l_440))) >= g_47), 7)) < 0x94) ^ 1U) , (-9))), g_97.f1)), g_582)), l_701)) || g_89[1]) < l_597[3].f1))) || 0), g_595)) ^ 4294967291U), 14)), l_751)) || g_274)) && (-5))) , g_97.f1) <= 6)), 5))), l_553[3])) < g_150[7][2]) && 2U) , l_551), l_553[2])) <= l_663), l_752[6])) != 0) < 0xEA) > g_150[3][1]) , g_700) , g_97);
            }
        }
    }
    return g_698;
}
inline static int32_t func_4(uint16_t p_5, uint16_t p_6)
{
    uint16_t l_367[4][1];
    int32_t l_368 = (-1);
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
            l_367[i][j] = 1U;
    }
    l_368 = (l_367[0][0] = (g_3 == g_150[6][1]));
    g_97.f1 = ((((safe_lshift_func_uint16_t_u_s(0xB1A5, (safe_mul_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(((g_3 , ((l_367[0][0] , (l_368 = ((((p_5 > ((safe_lshift_func_int8_t_s_s((-2), 6)) > ((safe_rshift_func_int8_t_s_u(p_6, (safe_add_func_int8_t_s_s(((safe_mul_func_int8_t_s_s(((65533U && p_6) >= g_89[0]), 0x4A)) != 3), 1)))) < l_367[1][0]))) >= p_5) < 4294967295U) == 65535U))) || 0x36A349A6)) , 1), p_5)), p_5)))) , 0xB3) | (-1)) > p_5);
    g_44.f1 = p_6;
    g_44.f1 = ((safe_lshift_func_int16_t_s_u(0xAAE5, ((safe_mod_func_uint8_t_u_u((((safe_add_func_int16_t_s_s(g_150[4][9], (((safe_sub_func_uint16_t_u_u((((p_5 = 0U) || ((0x5FE5F782 <= p_5) & (!g_352))) != (safe_rshift_func_int16_t_s_s((((((safe_mul_func_int16_t_s_s(((g_97.f1 <= (+((safe_rshift_func_int8_t_s_u((safe_unary_minus_func_uint32_t_u(((safe_rshift_func_uint16_t_u_u(0x6E6C, ((l_368 = l_367[2][0]) > l_367[0][0]))) & g_150[4][9]))), 5)) && 7))) == l_367[0][0]), p_6)) >= 1U) , g_97.f1) != l_367[0][0]) , 0x201F), 3))), 0x6277)) == 0x166EDB2B) == 0x65))) | l_367[1][0]) >= l_367[0][0]), 255U)) | p_6))) >= l_367[0][0]);
    return g_274;
}
inline static uint16_t func_15(uint32_t p_16, struct S0 p_17, int16_t p_18, int32_t p_19, uint16_t p_20)
{
    int32_t l_110 = 0x722EB29F;
    int8_t l_120 = 0;
    uint32_t l_148 = 4294967294U;
    uint32_t l_160 = 0x9AD12C72;
    int32_t l_228[3][5] = {{0xEAE226BE,0xEAE226BE,0xE38C59D0,0xEAE226BE,0xEAE226BE},{(-5),1,(-5),(-5),1},{0xEAE226BE,1,1,0xEAE226BE,1}};
    uint16_t l_238[7][7][5] = {{{1U,0xA71A,9U,0x529B,0x529B},{4U,0U,4U,0xFFA3,0xA71A},{65533U,0xAABA,0x94A6,0xBCB1,4U},{0xA71A,8U,0x8F1C,0x529B,8U},{0x42DE,0x072D,0x94A6,4U,65532U},{0U,0xE5D3,4U,0xA4D1,65531U},{0x458F,8U,9U,0x458F,0xA4D1}},{{65531U,0x529B,0x6123,3U,0xA4D1},{8U,65531U,65531U,0xA71A,65531U},{0xA71A,0xA71A,0xFF72,1U,65532U},{0xD05F,0xBCB1,4U,0x69E2,8U},{0xA1EA,4U,65531U,0xA4D1,4U},{1U,0xBCB1,0xAC38,0xA1EA,0xA71A},{3U,0xA71A,0x42DE,0xAABA,0x529B}},{{0xA1EA,65531U,4U,0xBCB1,0x94A6},{65533U,0x529B,0xB164,0xBCB1,0xA1EA},{0x94A6,8U,0xAABA,0xAABA,8U},{8U,0xE5D3,0x94A6,0xA1EA,0x6123},{0U,0x072D,0x1895,0xA4D1,9U},{0x69E2,8U,0x42DE,0x69E2,0xA4D1},{0U,0xAABA,0x6123,1U,4U}},{{8U,0U,65535U,0xA71A,9U},{0x94A6,0xA71A,4U,3U,65532U},{65533U,0xFFA3,4U,0x458F,0x42DE},{0xA1EA,0xA4D1,65535U,0xA4D1,0xA1EA},{3U,0xBCB1,0x6123,4U,4U},{0xFFA3,0xFF72,0xCDFA,0x42DE,9U},{0xAABA,3U,0x529B,0xE5D3,4U}},{{0x1895,0x42DE,0xFF72,4U,0xAABA},{4U,0xCDFA,9U,0x42DE,0xCDFA},{0x69E2,0x6123,0xA4D1,0xAABA,65531U},{0xD3D0,0x6123,0x8F1C,0U,0xD05F},{0x94A6,0xCDFA,0xCDFA,0x94A6,0U},{3U,0x42DE,9U,0xFFA3,65531U},{0xCDFA,3U,1U,0xFF72,0xD05F}},{{4U,0xFF72,0U,0xFFA3,65535U},{4U,0xE5D3,0U,0x94A6,0x69E2},{0x8F1C,65531U,1U,0U,0xAABA},{0xFFA3,4U,65535U,0xAABA,0xFF72},{0xFFA3,4U,0x458F,0x42DE,0x42DE},{0x8F1C,3U,0x8F1C,4U,4U},{4U,9U,0xFF72,0xE5D3,0x8F1C}},{{4U,0x69E2,8U,0x42DE,0x69E2},{0xCDFA,0x6123,0xFF72,0x8F1C,65531U},{3U,0xAC38,0x8F1C,65531U,1U},{0x94A6,0x69E2,0x458F,0x94A6,65531U},{0xD3D0,0x42DE,65535U,1U,65531U},{0x69E2,0xD3D0,1U,4U,1U},{4U,4U,0U,0xFFA3,65531U}}};
    struct S0 l_257 = {-1,0x061EBB8F,2};
    uint8_t l_363 = 0xA5;
    int32_t l_364 = 7;
    int i, j, k;
    if (((safe_mod_func_uint8_t_u_u((!(p_20 = (g_89[0] = (+(((0x23A3 | (safe_rshift_func_uint8_t_u_s((safe_add_func_uint16_t_u_u(((((((safe_mul_func_uint16_t_u_u(p_17.f2, (safe_add_func_int8_t_s_s(l_110, (l_110 >= (((p_16 = ((safe_lshift_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((((p_16 >= ((0xBF453DDA <= (((l_110 && (safe_mod_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(((!(g_97.f2 = g_97.f2)) && (l_110 ^ g_89[1])), g_97.f0)), p_20))) || p_20) , g_97.f0)) != g_44.f1)) < l_110) == p_19), l_120)), p_18)) != p_19)) , 0xDAF5B914) != 0xE0B1FDE0)))))) <= l_120) | p_18) , (-1)) | 1U) || 0x8590), 65535U)), p_17.f1))) | g_89[1]) < l_120))))), 0x35)) , p_16))
    {
        g_44.f1 = g_97.f1;
    }
    else
    {
        int8_t l_149 = 0xAE;
        struct S0 l_187[5] = {{0x3BB3813A,9,-6},{0x3BB3813A,9,-6},{0x3BB3813A,9,-6},{0x3BB3813A,9,-6},{0x3BB3813A,9,-6}};
        int32_t l_245 = 0x9A9337A3;
        int i;
        for (p_16 = 28; (p_16 < 8); p_16--)
        {
            uint16_t l_127 = 65535U;
            int32_t l_151 = 0xD1A421FD;
            l_151 = ((p_17.f1 = (safe_add_func_int32_t_s_s(g_97.f2, ((safe_rshift_func_int8_t_s_u(0xF9, 3)) | ((((l_110 = ((l_127 > (g_47 = ((g_47 , g_44) , (safe_sub_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(((safe_rshift_func_int8_t_s_u(((safe_sub_func_uint8_t_u_u(((((safe_add_func_int16_t_s_s(p_16, ((safe_mul_func_uint8_t_u_u(((p_17.f1 ^ (g_44.f2 = (safe_mod_func_int32_t_s_s((safe_mod_func_int32_t_s_s(((safe_sub_func_int8_t_s_s(0, (((((!(((safe_unary_minus_func_int16_t_s((-1))) < g_47) > 4294967295U)) | g_3) & g_44.f0) >= 4294967294U) , 0x78))) & l_148), 0x0BA58DE8)), l_127)))) < l_149), g_97.f2)) | l_148))) == 0xADC2) > 4294967295U) != l_149), 251U)) != g_150[4][9]), 5)) >= 255U), 4)), p_16))))) == g_89[1])) <= g_97.f0) , p_17) , l_149))))) ^ l_120);
        }
        for (l_120 = 0; (l_120 >= 20); l_120 = safe_add_func_uint32_t_u_u(l_120, 4))
        {
            uint32_t l_182 = 0x7C5A96FC;
            struct S0 l_188 = {0,-2,-4};
            int32_t l_308 = 0x3D1B2EE9;
            int16_t l_338 = 0x4384;
            if (((safe_rshift_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((((safe_sub_func_uint8_t_u_u((l_160 ^ (safe_sub_func_int32_t_s_s((safe_sub_func_int16_t_s_s((safe_mul_func_int16_t_s_s(l_149, (safe_add_func_uint16_t_u_u((6U >= 0x9FD6B0DC), (p_20 = (safe_add_func_int16_t_s_s(p_18, (safe_mod_func_int32_t_s_s(g_97.f1, (safe_unary_minus_func_int8_t_s((((safe_sub_func_uint16_t_u_u((5U ^ (safe_mod_func_int16_t_s_s(((safe_rshift_func_int8_t_s_s(((((safe_sub_func_int16_t_s_s((p_19 >= p_19), p_16)) ^ 0xE6) & 0x3A) == l_182), 0)) ^ l_110), 1U))), g_44.f2)) , 0x27) , p_17.f2)))))))))))), l_149)), 0x33844FDB))), p_19)) , p_17.f0) > g_47), 0x2695)), 2)) < g_89[4]))
            {
                uint8_t l_191[7] = {0U,0U,0U,0U,0U,0U,0U};
                int32_t l_209 = 0xED721E8A;
                int i;
                for (p_17.f1 = 7; (p_17.f1 <= (-10)); p_17.f1 = safe_sub_func_int16_t_s_s(p_17.f1, 7))
                {
                    int16_t l_199 = (-1);
                    int32_t l_210 = 0x994EBA6C;
                    int32_t l_211 = (-1);
                    l_211 = (((l_188 = l_187[2]) , 0) != ((l_210 = ((l_209 = ((safe_rshift_func_int16_t_s_u(l_191[5], 5)) ^ (safe_sub_func_int16_t_s_s((safe_mul_func_int16_t_s_s(((+((65527U > (safe_mul_func_int16_t_s_s(l_199, (safe_sub_func_uint16_t_u_u((((safe_sub_func_int32_t_s_s(g_44.f2, (g_97.f0 == (safe_unary_minus_func_int8_t_s((l_110 = (safe_add_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(((((g_150[4][1] = 0) <= (0xB7 | g_89[1])) , 0x6D) < 4U), 14)), 0)))))))) , p_18) <= 1U), g_47))))) & g_97.f2)) , 0), g_97.f1)), p_17.f0)))) < 7)) < g_44.f0));
                    for (l_209 = 1; (l_209 <= 7); l_209 += 1)
                    {
                        int i, j;
                        g_44.f1 = (safe_lshift_func_int8_t_s_u(g_150[l_209][(l_209 + 2)], 4));
                        l_187[2].f1 = (!g_150[1][7]);
                    }
                }
                if ((safe_mod_func_int32_t_s_s((((safe_lshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_s(65533U, 9)), ((g_89[1] || (((((l_187[2].f1 = ((g_97.f1 < (0 > g_150[4][9])) && ((safe_mul_func_int16_t_s_s((l_110 = g_97.f0), (safe_sub_func_int8_t_s_s((((safe_mul_func_uint8_t_u_u((l_209 = (l_228[0][2] = (safe_unary_minus_func_int8_t_s(l_187[2].f1)))), (safe_rshift_func_uint16_t_u_s((g_89[8] = ((safe_sub_func_uint8_t_u_u((0xCDCF | (safe_mod_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_s((((((~0xC9) , p_18) == l_187[2].f0) & p_16) != l_191[5]), 4)) != g_44.f0), g_97.f0))), l_191[3])) >= 0x9C)), l_188.f1)))) < l_191[4]) != p_17.f2), g_97.f0)))) != g_44.f1))) , 1U) == l_238[1][4][0]) , g_97.f2) <= p_16)) , g_47))) > g_150[4][9]) && l_228[0][1]), p_17.f0)))
                {
                    return g_150[3][8];
                }
                else
                {
                    uint32_t l_255 = 0U;
                    struct S0 l_256 = {0x9AE2DBC6,0x60A787AC,0x0EF3};
                    for (p_17.f2 = 9; (p_17.f2 == 27); p_17.f2++)
                    {
                        int32_t l_248 = 0x71ECD591;
                        l_256 = ((safe_mod_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((4294967295U < (((p_17.f0 && (0U != l_245)) | (p_20 == (g_44.f1 = (safe_rshift_func_uint16_t_u_s(9U, 1))))) < (l_248 > (safe_sub_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(((l_255 = ((((((safe_sub_func_int8_t_s_s(p_19, (4294967286U & l_191[5]))) || 0x4A45) | 0xD8FE) , l_248) , p_19) , p_18)) == p_20), p_18)), p_17.f1))))), p_17.f2)), p_20)) , p_17);
                        l_257 = g_97;
                    }
                    return g_97.f1;
                }
            }
            else
            {
                for (p_18 = 0; (p_18 >= (-10)); --p_18)
                {
                    return g_89[8];
                }
                l_257 = p_17;
            }
            for (l_257.f1 = 0; (l_257.f1 <= 2); l_257.f1 += 1)
            {
                int i, j;
                l_110 = (l_228[l_257.f1][l_257.f1] = ((!0x40) & ((safe_mul_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_s(l_228[l_257.f1][(l_257.f1 + 1)], 14)) <= (l_228[l_257.f1][(l_257.f1 + 1)] ^ 7)), (safe_mul_func_int16_t_s_s((((g_274 = (((safe_sub_func_int16_t_s_s(l_182, (safe_rshift_func_int8_t_s_u((((((p_17.f2 ^ (-1)) < 0x97) < ((!(safe_lshift_func_uint16_t_u_s(l_228[l_257.f1][(l_257.f1 + 1)], 8))) & p_17.f1)) , 1U) == g_47), l_188.f1)))) < p_17.f0) > 1U)) & 0x38) > g_44.f1), g_150[6][9])))) == l_188.f0)));
                for (l_257.f2 = (-27); (l_257.f2 != (-18)); l_257.f2++)
                {
                    int32_t l_287 = 0xF3BBD960;
                    g_97.f1 = p_20;
                    g_44.f1 = 0x91489F91;
                    g_44.f1 = (safe_add_func_int32_t_s_s(((1U | (safe_add_func_int16_t_s_s((l_188.f2 ^ 0xBE), (l_257.f0 || (safe_sub_func_uint32_t_u_u((((safe_mod_func_uint16_t_u_u((p_16 | (g_97.f0 , (((safe_mod_func_int32_t_s_s(l_287, 3)) > g_47) == l_245))), 9)) ^ l_238[5][1][4]) >= l_120), g_89[0])))))) , g_97.f2), 0xC78C1057));
                }
                p_17 = l_257;
                for (g_44.f1 = 0; (g_44.f1 < (-1)); g_44.f1 = safe_sub_func_int8_t_s_s(g_44.f1, 1))
                {
                    int32_t l_337 = (-1);
                    for (l_257.f0 = (-12); (l_257.f0 < 1); ++l_257.f0)
                    {
                        p_17 = p_17;
                        g_97 = (p_17 = l_187[0]);
                        l_187[2].f1 = g_89[1];
                    }
                    p_17.f1 = (safe_lshift_func_int16_t_s_s(l_188.f1, ((0x353CF452 & (safe_mul_func_int8_t_s_s((p_18 < (((safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_s((l_182 <= (p_20 <= g_89[1])), ((safe_mul_func_int8_t_s_s(g_150[4][9], (safe_mul_func_int16_t_s_s((p_16 >= (safe_sub_func_uint16_t_u_u(((l_308 = (safe_mul_func_uint8_t_u_u((l_228[l_257.f1][(l_257.f1 + 1)] != (-1)), (-8)))) & 0x43D9), p_17.f2))), l_228[l_257.f1][l_257.f1])))) == 65532U))), 4)) != (-1)) , l_187[2].f2)), l_257.f1))) ^ 7U)));
                    l_308 = p_20;
                    g_97.f1 = ((((safe_add_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u((l_228[l_257.f1][l_257.f1] ^ (l_110 = (safe_lshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((g_97.f2 = (safe_add_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((((safe_add_func_int16_t_s_s((0xA67FCE75 > (p_17.f1 = l_228[l_257.f1][(l_257.f1 + 1)])), ((safe_lshift_func_uint8_t_u_u((p_18 , (p_18 , 1U)), (((((safe_sub_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u((p_19 , ((p_20 = ((safe_rshift_func_int16_t_s_s((l_337 <= (l_187[2].f1 = g_274)), p_20)) > g_89[0])) < 0x99CC)), p_17.f0)), l_245)) >= p_16) || (-1)) , g_97.f1) , 0x07))) && g_47))) , p_16) == g_44.f0), g_44.f0)), 3U))), 4)), l_338)), l_149)), 4)))), p_16)), p_16)) , p_18), l_182)) < 0xCD) >= g_44.f0) != g_150[3][3]);
                }
            }
            return l_188.f2;
        }
    }
    g_97.f1 = ((l_364 = (safe_lshift_func_uint16_t_u_s(((safe_sub_func_int32_t_s_s((safe_unary_minus_func_uint8_t_u(0U)), (safe_rshift_func_int16_t_s_s(0xB920, 0)))) & ((((safe_mod_func_int32_t_s_s(((((g_89[7] == ((0x00 > (safe_sub_func_int32_t_s_s(((((safe_mul_func_uint8_t_u_u((g_352 || ((safe_mod_func_int8_t_s_s((g_97 , (safe_sub_func_uint8_t_u_u(2U, (((safe_mul_func_uint8_t_u_u(((p_16 ^ (safe_rshift_func_int16_t_s_s((safe_add_func_uint32_t_u_u(l_363, 0)), g_44.f2))) ^ p_20), (-1))) < l_120) || l_363)))), 4U)) & g_3)), l_257.f0)) < 1) <= l_363) | g_274), l_148))) <= 0U)) || 65527U) , 0xDE86) < l_228[0][2]), g_3)) | p_18) , l_120) != g_47)), p_18))) >= p_19);
    return g_47;
}
inline static int8_t func_21(struct S0 p_22, uint8_t p_23, int16_t p_24)
{
    uint8_t l_27 = 254U;
    int32_t l_35 = 0xED3351F4;
    int32_t l_45 = 0xFB14BE56;
    int32_t l_96 = 1;
    l_96 = (((0xD913 > l_27) > ((((safe_mul_func_int8_t_s_s(((p_22.f1 = ((func_30((l_35 = p_23), g_3, (func_36(g_3, g_3, ((((g_47 = (func_40(((p_24 > ((g_44 = g_44) , (l_45 = 9U))) ^ 0x2FE07384), p_23, l_27) == g_3)) | p_24) > 3) , p_22)) , p_22.f1), g_3) != g_3) , l_35)) != g_3), g_3)) ^ g_3) ^ g_3) , g_3)) , g_89[1]);
    return g_3;
}
inline static uint8_t func_30(uint32_t p_31, uint32_t p_32, uint32_t p_33, int8_t p_34)
{
    int32_t l_93 = 0x33FD7079;
    int32_t l_94 = 0;
    uint32_t l_95 = 7U;
    l_94 = l_93;
    return l_95;
}
static int32_t func_36(int32_t p_37, int32_t p_38, struct S0 p_39)
{
    uint16_t l_59 = 1U;
    for (p_39.f2 = 24; (p_39.f2 == (-9)); --p_39.f2)
    {
        int32_t l_50 = 1;
        return l_50;
    }
    p_39.f1 = (p_38 = func_51(((safe_unary_minus_func_uint32_t_u((safe_lshift_func_int8_t_s_u(l_59, 0)))) , l_59), ((((l_59 , (5U >= (safe_add_func_uint32_t_u_u(p_38, (safe_mod_func_uint8_t_u_u(l_59, p_39.f1)))))) || l_59) ^ func_40(p_39.f2, p_37, g_44.f1)) , 0xCD28), p_37, l_59));
    return g_89[1];
}
static uint16_t func_40(int8_t p_41, int16_t p_42, uint32_t p_43)
{
    int16_t l_46[8][10] = {{(-9),(-1),(-9),(-9),(-1),(-9),(-9),(-1),(-9),(-9)},{(-1),(-1),(-1),(-1),(-1),(-1),(-1),(-1),(-1),(-1)},{(-1),(-9),(-9),(-1),(-9),(-9),(-1),(-9),(-9),(-1)},{(-9),(-1),(-9),(-9),(-1),(-9),(-9),(-1),(-9),(-9)},{(-1),(-1),(-1),(-1),(-1),(-1),(-1),(-1),(-1),(-1)},{(-1),(-9),(-9),(-1),(-9),(-9),(-1),(-9),(-9),(-1)},{(-9),(-1),(-9),(-1),(-9),(-1),(-1),(-9),(-1),(-1)},{(-9),(-9),(-1),(-9),(-9),(-1),(-9),(-9),(-1),(-9)}};
    int i, j;
    for (p_43 = 2; (p_43 <= 7); p_43 += 1)
    {
        return p_42;
    }
    return g_44.f0;
}
static int32_t func_51(int32_t p_52, uint16_t p_53, int32_t p_54, uint32_t p_55)
{
    uint32_t l_66 = 0x32420D6C;
    int32_t l_67 = 0xDA0115B5;
    uint32_t l_68 = 0U;
    l_68 = ((safe_rshift_func_uint16_t_u_s((8U || (l_67 = l_66)), 3)) == 249U);
    l_67 = func_69(l_66);
    for (p_54 = 0; (p_54 <= 9); p_54 += 1)
    {
        int i;
        if (g_89[p_54])
            break;
    }
    l_67 = (-7);
    return p_55;
}
static int32_t func_69(uint16_t p_70)
{
    int32_t l_74 = (-6);
    int32_t l_88 = 1;
    int32_t l_91 = (-4);
    struct S0 l_92 = {-2,0x8A635569,6};
    l_91 = ((!g_44.f2) | (safe_lshift_func_int8_t_s_s(((((l_74 = func_40(g_47, g_3, (p_70 , (g_3 && (l_74 <= ((safe_sub_func_int16_t_s_s(func_77((safe_lshift_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_u(p_70, (safe_mul_func_uint8_t_u_u((l_74 , (g_89[1] = (l_88 = (((((p_70 , p_70) > 0) , 0) , 0xFA302576) & g_47)))), g_47)))) == 5U), g_44.f0)), g_44.f2, g_44.f1, l_74), p_70)) >= l_74)))))) == g_44.f1) < 1) > g_47), g_44.f1)));
    g_44 = g_44;
    l_92 = (l_92 , l_92);
    return p_70;
}
inline static int16_t func_77(uint8_t p_78, int32_t p_79, int32_t p_80, uint16_t p_81)
{
    int16_t l_90[10][10] = {{0,4,0x42B8,6,0x54D2,0,9,(-3),(-3),9},{6,9,0x9DFF,0x9DFF,9,6,0x776C,0xF7D9,(-6),0},{9,(-1),9,0x776C,6,0xDD57,0xC0B8,4,1,(-1)},{9,7,0x27D8,0,7,6,(-1),0,0xA8D4,0},{6,(-1),0,0xA8D4,0,0,4,0x99D2,6,0x99D2},{0,0x8437,0xF631,0,0xF631,0x8437,0,0xA8D4,0x2789,4},{0,0,0xA40D,(-1),0x5FDD,0xFF0A,0,0x1E93,4,0xA8D4},{7,0,(-5),0,(-1),0x2789,0,4,0x42B8,6},{0x776C,0x8437,7,(-1),0,0xF631,4,6,0x27D8,0x27D8},{0xDD57,(-1),4,0xA40D,0xA40D,4,(-1),0xDD57,0x5FDD,0x8450}};
    int i, j;
    return l_90[0][7];
}
int main (void)
{
    int i, j;
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_3;
    csmith_sink_ = g_11;
    csmith_sink_ = g_13;
    csmith_sink_ = g_44.f0;
    csmith_sink_ = g_44.f1;
    csmith_sink_ = g_44.f2;
    csmith_sink_ = g_47;
    for (i = 0; i < 10; i++)
    {
        csmith_sink_ = g_89[i];
    }
    csmith_sink_ = g_97.f0;
    csmith_sink_ = g_97.f1;
    csmith_sink_ = g_97.f2;
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 10; j++)
        {
            csmith_sink_ = g_150[i][j];
        }
    }
    csmith_sink_ = g_274;
    csmith_sink_ = g_352;
    for (i = 0; i < 10; i++)
    {
        csmith_sink_ = g_569[i];
    }
    csmith_sink_ = g_582;
    csmith_sink_ = g_595;
    csmith_sink_ = g_698;
    csmith_sink_ = g_700;
    csmith_sink_ = g_750;
    platform_main_end(0,0);
    return 0;
}
