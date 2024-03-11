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

volatile uint64_t csmith_sink_ = 0;
static long __undefined;
static uint64_t g_5 = 18446744073709551615UL;
static int32_t g_31 = 0xFD522803L;
static int32_t *g_67 = &g_31;
static int32_t **g_66 = &g_67;
static int32_t g_92[9] = {0x59916A5CL,0x59916A5CL,0x59916A5CL,0x59916A5CL,0x59916A5CL,0x59916A5CL,0x59916A5CL,0x59916A5CL,0x59916A5CL};
static uint16_t g_208 = 1UL;
static int32_t ***g_219 = (void*)0;
static int32_t ****g_228 = &g_219;
static int32_t *****g_227[6] = {&g_228,&g_228,&g_228,&g_228,&g_228,&g_228};
static uint16_t g_549[10][3][7] = {{{0xC1A8L,65534UL,65531UL,0xCBF8L,65535UL,65535UL,3UL},{0x8B9AL,65527UL,0x6ED8L,0UL,0xD154L,65535UL,0xD06EL},{0x394EL,3UL,0x0CAAL,65535UL,0x7087L,0x1040L,1UL}},{{0x9834L,65533UL,0xC22FL,65528UL,65531UL,0xAD96L,65534UL},{0xD06EL,6UL,0xAF42L,0x393CL,3UL,0xEDD7L,65535UL},{0UL,0UL,9UL,0x9834L,0x2107L,65533UL,0x514BL}},{{0x9B7EL,0x6B68L,0x6D20L,0UL,0x0CAAL,3UL,8UL},{0xC1A8L,65535UL,0x3D5AL,0UL,65527UL,1UL,0x97BEL},{65534UL,8UL,65535UL,3UL,0UL,0UL,1UL}},{{65535UL,65528UL,0UL,0UL,65528UL,65535UL,1UL},{0x1C27L,65535UL,0x3D5AL,0x0C40L,65535UL,0xD154L,0xAD96L},{0x393CL,6UL,0x1750L,0x818BL,0xFA6EL,9UL,65531UL}},{{0x5E1CL,65535UL,0x9B7EL,65531UL,3UL,65535UL,0UL},{65535UL,65528UL,0xEDD7L,65527UL,65534UL,65534UL,65535UL},{0xC22FL,8UL,0x2107L,0xC22FL,1UL,0x6ED8L,0x514BL}},{{0x5E1CL,65535UL,1UL,1UL,0UL,0UL,0x6ED8L},{0UL,0x6B68L,65534UL,0UL,0xCBF8L,0x3809L,0x818BL},{3UL,0UL,0x6D20L,0x1A88L,9UL,0x5314L,65534UL}},{{65535UL,0x1040L,0UL,3UL,65527UL,0x5314L,0UL},{0xCBF8L,65534UL,8UL,0UL,65535UL,0x3809L,1UL},{65531UL,65535UL,1UL,0x7087L,3UL,0UL,65527UL}},{{0x9B7EL,65535UL,0x5E1CL,0xFA6EL,65535UL,0x6ED8L,1UL},{3UL,1UL,65535UL,0x818BL,0xAD96L,65534UL,0xC1A8L},{0x6B68L,65535UL,9UL,0x514BL,9UL,65535UL,0x6B68L}},{{1UL,0x9834L,1UL,0xFA6EL,65535UL,9UL,8UL},{0xC22FL,65535UL,0UL,65535UL,0x393CL,0xD154L,0x818BL},{0x1A88L,0x6ED8L,1UL,3UL,1UL,65535UL,65535UL}},{{0x1750L,0x97BEL,9UL,3UL,0xCBF8L,0UL,65533UL},{0x1C27L,0x1A88L,65535UL,0x6B68L,0x0CAAL,1UL,65534UL},{65531UL,0x6ED8L,0x5E1CL,65528UL,0xFA6EL,3UL,0x97BEL}}};
static int8_t g_626[4] = {0xEEL,0xEEL,0xEEL,0xEEL};
static int32_t *g_642 = &g_92[7];
static int32_t ***g_664 = &g_66;
inline static int64_t func_1(void);
static uint64_t func_15(uint64_t p_16, int32_t p_17, int8_t p_18, int32_t p_19);
static int16_t func_21(int32_t p_22, int8_t p_23, uint32_t p_24, int32_t p_25, uint8_t p_26);
static uint64_t func_40(int32_t * p_41);
inline static int32_t * func_42(int32_t * p_43, int32_t * p_44, uint16_t p_45, int32_t ** p_46, int32_t ** p_47);
static int32_t * func_48(int32_t * p_49, int32_t p_50);
inline static int32_t * func_51(uint16_t p_52, int32_t ** p_53, int32_t ** p_54);
static uint16_t func_55(int32_t * p_56, int32_t ** p_57, int32_t p_58);
inline static int32_t ** func_59(uint8_t p_60, int32_t ** p_61, uint32_t p_62, int32_t * p_63);
inline static int32_t func_78(int32_t p_79);
inline static int64_t func_1(void)
{
    int64_t l_20 = (-1L);
    uint32_t l_34 = 1UL;
    int32_t *l_35[1];
    int32_t l_36 = 0x104ACD6BL;
    int32_t **l_251 = &g_67;
    int32_t ****l_819 = &g_664;
    int i;
    for (i = 0; i < 1; i++)
        l_35[i] = &g_31;
    l_36 = (~(((safe_add_func_uint16_t_u_u(g_5, (g_5 >= ((safe_sub_func_int64_t_s_s(((65526UL && ((safe_lshift_func_int8_t_s_u((safe_add_func_int16_t_s_s((+g_5), (g_5 == 0x858F9C25B054DBBELL))), (safe_mod_func_uint8_t_u_u((0xA55F07C7L == (func_15(l_20, (func_21(l_20, g_5, g_5, g_5, l_20) & l_20), l_20, l_20) || l_34)), g_5)))) || g_31)) & l_34), g_5)) >= l_20)))) || 0xECDCL) != g_5));
    for (l_20 = 0; (l_20 >= 0); l_20 -= 1)
    {
        uint16_t l_37 = 8UL;
        int8_t l_841 = (-1L);
        int i;
        (*g_642) = func_21(l_37, g_31, g_5, (safe_add_func_int64_t_s_s(g_31, (func_40(func_42(func_48(func_51(func_55(l_35[l_20], func_59(g_5, &l_35[0], (safe_mod_func_uint8_t_u_u(((g_66 != &g_67) < 0x11L), g_5)), (*g_66)), g_208), &l_35[l_20], &g_67), (*g_67)), l_35[l_20], g_31, l_251, &g_67)) ^ g_31))), g_549[1][0][2]);
        (*g_67) = 0x433317F0L;
        for (g_31 = 0; (g_31 <= 8); g_31 += 1)
        {
            int64_t l_799[7];
            int32_t l_822[3];
            int i;
            for (i = 0; i < 7; i++)
                l_799[i] = 0x6C2BA31C17D51852LL;
            for (i = 0; i < 3; i++)
                l_822[i] = 0xD1E77B36L;
            for (l_37 = 0; (l_37 <= 8); l_37 += 1)
            {
                int i;
                (*g_642) = g_92[(l_20 + 3)];
            }
            for (g_5 = 0; (g_5 <= 8); g_5 += 1)
            {
                int32_t *****l_823 = &l_819;
                int32_t l_825 = 0L;
                int32_t l_826 = (-1L);
                int32_t l_827 = 4L;
                if ((~253UL))
                {
                    uint64_t l_800 = 5UL;
                    --l_800;
                }
                else
                {
                    uint32_t l_815 = 0xC5F34C44L;
                    int32_t ****l_818[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_818[i] = (void*)0;
                    for (g_208 = 0; (g_208 <= 0); g_208 += 1)
                    {
                        int32_t l_824 = (-1L);
                        uint64_t l_828 = 18446744073709551614UL;
                        int i;
                        l_822[2] &= (safe_mod_func_uint32_t_u_u(((safe_add_func_int32_t_s_s(g_92[g_31], (safe_lshift_func_uint8_t_u_s((((safe_rshift_func_int8_t_s_u((safe_lshift_func_int8_t_s_u(((0x7192CA94L || l_815) != (!0x00B934CC451011D9LL)), 3)), 3)) || g_92[7]) ^ (safe_unary_minus_func_uint64_t_u(((l_818[0] == l_819) <= (safe_add_func_uint32_t_u_u((((*g_664) == (void*)0) == 0x87L), l_799[0])))))), g_5)))) <= 0x407D2BD7L), 1UL));
                        g_227[0] = l_823;
                        ++l_828;
                        if ((*g_67))
                            continue;
                    }
                }
                (*g_642) = (((&l_35[l_20] == (**l_819)) == (g_92[3] ^ 0xA7BAF27AL)) == (((+g_208) | ((((safe_unary_minus_func_uint16_t_u(g_5)) >= (safe_lshift_func_int8_t_s_u((((((*****l_823) >= (**l_251)) != (safe_lshift_func_int16_t_s_u(((safe_lshift_func_int8_t_s_u((safe_sub_func_int8_t_s_s(0xF0L, g_31)), g_549[1][2][6])) > 0x50L), 5))) > g_549[1][0][2]) <= g_5), 5))) == g_92[7]) || l_841)) || g_5));
            }
        }
    }
    return g_92[3];
}
static uint64_t func_15(uint64_t p_16, int32_t p_17, int8_t p_18, int32_t p_19)
{
    int32_t *l_32[1];
    int32_t **l_33 = &l_32[0];
    int i;
    for (i = 0; i < 1; i++)
        l_32[i] = &g_31;
    (*l_33) = l_32[0];
    return (**l_33);
}
static int16_t func_21(int32_t p_22, int8_t p_23, uint32_t p_24, int32_t p_25, uint8_t p_26)
{
    uint32_t l_27 = 0xCEE24B2EL;
    int32_t *l_28 = (void*)0;
    int32_t *l_29 = (void*)0;
    int32_t *l_30 = &g_31;
    (*l_30) &= (l_27 <= p_23);
    return p_22;
}
static uint64_t func_40(int32_t * p_41)
{
    int32_t *****l_288 = &g_228;
    int32_t l_289 = (-1L);
    int32_t l_297 = 3L;
    uint32_t l_332 = 3UL;
    uint32_t l_334 = 1UL;
    int32_t **l_336[6];
    uint8_t l_360 = 255UL;
    int64_t l_398 = (-2L);
    int32_t l_399 = 0x21CE6FC1L;
    int32_t l_400 = 1L;
    uint64_t l_416 = 8UL;
    uint32_t l_443 = 0xC635E429L;
    int16_t l_451 = (-1L);
    uint16_t l_455 = 0x3BE7L;
    int32_t l_482[10][6] = {{(-4L),(-4L),0x16C547C9L,(-4L),(-4L),0x16C547C9L},{(-4L),(-4L),(-4L),(-1L),(-1L),(-4L)},{(-1L),(-1L),(-4L),(-1L),(-1L),(-4L)},{(-1L),(-1L),(-4L),(-1L),(-1L),(-4L)},{(-1L),(-1L),(-4L),(-1L),(-1L),(-4L)},{(-1L),(-1L),(-4L),(-1L),(-1L),(-4L)},{(-1L),(-1L),(-4L),(-1L),(-1L),(-4L)},{(-1L),(-1L),(-4L),(-1L),(-1L),(-4L)},{(-1L),(-1L),(-4L),(-1L),(-1L),(-4L)},{(-1L),(-1L),(-4L),(-1L),(-1L),(-4L)}};
    uint32_t l_493 = 0x6418BE28L;
    uint16_t l_494 = 0x207FL;
    int8_t l_608 = 0L;
    uint16_t l_621 = 0xF87BL;
    int32_t l_628[8][6] = {{7L,7L,6L,7L,7L,(-1L)},{7L,7L,6L,7L,7L,(-1L)},{7L,7L,6L,7L,7L,(-1L)},{7L,7L,6L,7L,7L,(-1L)},{7L,7L,6L,7L,7L,(-1L)},{7L,7L,6L,7L,7L,(-1L)},{7L,7L,6L,7L,7L,(-1L)},{7L,7L,6L,7L,7L,(-1L)}};
    uint32_t l_629 = 0x2918BD7BL;
    int64_t l_735 = 8L;
    int8_t l_756 = 5L;
    int32_t l_757[1];
    int32_t l_759 = 0x070ECACEL;
    int64_t l_788[1];
    uint16_t l_794[4][4] = {{3UL,3UL,0x153DL,3UL},{3UL,1UL,1UL,3UL},{1UL,3UL,1UL,1UL},{3UL,3UL,0x153DL,3UL}};
    int i, j;
    for (i = 0; i < 6; i++)
        l_336[i] = &g_67;
    for (i = 0; i < 1; i++)
        l_757[i] = 0xAC0CBE27L;
    for (i = 0; i < 1; i++)
        l_788[i] = (-9L);
    if ((((((((&g_228 == l_288) & (g_31 & l_289)) || ((((-8L) ^ ((safe_mod_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_s((+((g_92[4] ^ (l_288 == (void*)0)) & ((safe_add_func_int16_t_s_s(((void*)0 == p_41), g_31)) >= 0x9BL))), g_208)) && 0x6DL), g_31)) >= l_289)) & 9L) > (*p_41))) & l_297) | l_297) > (*p_41)) | l_289))
    {
        int32_t ****l_307 = &g_219;
        int32_t l_308[2];
        int32_t *l_309 = &l_289;
        int i;
        for (i = 0; i < 2; i++)
            l_308[i] = 0x46925B1CL;
        (*g_66) = p_41;
        (*l_309) = (safe_add_func_uint32_t_u_u((safe_sub_func_int64_t_s_s(0x7D6875B382D7FBB2LL, (((safe_lshift_func_uint16_t_u_u(((0x97431A8FL > (((((safe_unary_minus_func_uint16_t_u((safe_rshift_func_uint8_t_u_u((l_307 != (*l_288)), (l_288 != &l_307))))) <= ((l_289 <= 0x5E659536371DD7C6LL) <= (((((l_307 != l_307) || g_92[7]) ^ g_208) & g_92[7]) ^ l_308[0]))) | 0L) && g_208) <= l_297)) & g_208), l_308[1])) == 2UL) | l_308[0]))), g_31));
    }
    else
    {
        uint16_t l_314 = 0x8A68L;
        int32_t *****l_315 = &g_228;
        uint8_t l_333 = 0x54L;
        int32_t l_352 = 3L;
        for (l_297 = (-14); (l_297 < 26); l_297 = safe_add_func_uint32_t_u_u(l_297, 2))
        {
            uint32_t l_323 = 0x0C5FF1E0L;
            int32_t **l_331[1];
            int i;
            for (i = 0; i < 1; i++)
                l_331[i] = &g_67;
            for (g_208 = 0; (g_208 <= 5); g_208 += 1)
            {
                int8_t l_322 = (-1L);
                int32_t l_326 = (-2L);
                int32_t ***l_341 = &l_331[0];
                if ((safe_sub_func_int64_t_s_s((l_314 <= ((void*)0 != l_315)), ((safe_rshift_func_uint16_t_u_s(l_297, 12)) && ((((void*)0 == &g_228) && (safe_rshift_func_uint16_t_u_s((safe_add_func_uint64_t_u_u(((g_92[7] >= 0x82BE534CL) & ((g_92[7] | l_322) >= 1UL)), 0xB29BC3DCDBF535D0LL)), l_323))) & 0x31L)))))
                {
                    uint32_t l_324 = 1UL;
                    int32_t ****l_327 = &g_219;
                    uint32_t l_335 = 0x3228F538L;
                    for (l_289 = 1; (l_289 <= 5); l_289 += 1)
                    {
                        l_324 = (g_92[7] ^ 0L);
                    }
                    l_326 = (safe_unary_minus_func_int16_t_s(l_324));
                    (*l_288) = l_327;
                    for (l_324 = 0; (l_324 <= 5); l_324 += 1)
                    {
                        int i;
                        l_336[1] = func_59(g_92[(l_324 + 1)], &p_41, (((~(safe_mod_func_int16_t_s_s(g_92[(g_208 + 1)], (((((((&p_41 != l_331[0]) ^ l_324) != (g_92[7] | l_332)) <= (((0x94FFB7BE2BC12E71LL == 0x07732DF8BF0036B7LL) > 0xB892A878L) ^ l_326)) & l_333) <= 0x274D757702AA31F8LL) | l_334)))) | l_335) & (**g_66)), p_41);
                        p_41 = p_41;
                    }
                }
                else
                {
                    uint16_t l_337 = 0x9CB6L;
                    l_337 |= (*p_41);
                }
                for (l_334 = 0; (l_334 <= 5); l_334 += 1)
                {
                    int64_t l_338 = 0L;
                    for (l_332 = 0; (l_332 <= 5); l_332 += 1)
                    {
                        int32_t ***l_342[10][3][8] = {{{(void*)0,&l_331[0],&l_331[0],&l_331[0],&g_66,(void*)0,&l_331[0],&l_331[0]},{&l_331[0],&l_331[0],&g_66,&l_331[0],&l_331[0],&l_336[0],&l_331[0],(void*)0},{&l_331[0],&l_331[0],&l_331[0],(void*)0,&l_331[0],(void*)0,(void*)0,&l_331[0]}},{{&l_336[1],&g_66,&g_66,&l_336[1],&l_336[2],&l_331[0],&l_331[0],&l_331[0]},{&l_331[0],&l_331[0],&g_66,&l_336[5],&l_336[1],&l_336[1],&g_66,&l_331[0]},{&l_331[0],&l_331[0],(void*)0,&g_66,&l_331[0],&l_331[0],&l_331[0],(void*)0}},{{&l_331[0],&g_66,(void*)0,&l_331[0],&l_336[1],(void*)0,&l_331[0],&l_336[4]},{&l_331[0],&l_331[0],&l_336[1],&l_331[0],&l_331[0],&l_336[0],&l_331[0],&l_331[0]},{&l_331[0],&l_331[0],&g_66,(void*)0,&g_66,(void*)0,&g_66,&l_331[0]}},{{&l_331[0],&l_331[0],&l_331[0],&l_336[2],&g_66,&l_331[0],&l_336[1],&l_331[0]},{&l_336[4],&l_331[0],&l_331[0],(void*)0,(void*)0,&l_331[0],&l_336[1],(void*)0},{(void*)0,(void*)0,&l_331[0],&l_331[0],&g_66,&l_336[1],&g_66,&l_331[0]}},{{&g_66,&l_336[1],&g_66,&l_331[0],&l_331[0],(void*)0,&g_66,&l_331[0]},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_331[0],&l_331[0],&l_331[0]},{&l_331[0],&l_336[1],&l_331[0],&l_331[0],&l_336[1],&l_331[0],&l_336[0],&l_336[2]}},{{&l_336[4],&l_336[0],&l_331[0],&l_331[0],&l_331[0],&g_66,&l_331[0],&l_336[1]},{&g_66,(void*)0,&g_66,&l_331[0],&l_331[0],&l_331[0],(void*)0,&l_336[2]},{(void*)0,&l_331[0],&g_66,&l_331[0],&l_331[0],&l_331[0],&l_336[1],&l_331[0]}},{{(void*)0,&g_66,&l_331[0],(void*)0,&g_66,&l_331[0],(void*)0,&l_331[0]},{&l_331[0],&l_331[0],&g_66,&l_331[0],&l_336[1],(void*)0,&l_336[1],&l_331[0]},{&l_336[1],(void*)0,&l_336[1],&l_331[0],(void*)0,&g_66,&l_336[0],(void*)0}},{{&g_66,&g_66,&l_336[5],(void*)0,&l_331[0],(void*)0,(void*)0,&l_331[0]},{&g_66,&g_66,(void*)0,&l_336[2],(void*)0,&l_331[0],&l_331[0],&l_331[0]},{&l_336[1],(void*)0,&l_331[0],&l_331[0],&l_336[1],&l_336[1],&g_66,(void*)0}},{{&l_331[0],&l_336[0],&l_331[0],&l_331[0],&g_66,&g_66,&l_331[0],&l_331[0]},{(void*)0,(void*)0,&l_331[0],&l_331[0],&l_331[0],&l_331[0],(void*)0,(void*)0},{(void*)0,&l_331[0],&l_336[5],&l_331[0],&l_331[0],&l_331[0],&g_66,&l_331[0]}},{{&g_66,&l_336[1],&l_331[0],&l_336[2],&l_331[0],&l_331[0],&g_66,&l_331[0]},{&l_336[4],&l_331[0],(void*)0,(void*)0,&l_336[1],&l_331[0],(void*)0,(void*)0},{&l_331[0],(void*)0,&l_331[0],&l_331[0],(void*)0,&g_66,&l_336[0],&l_331[0]}}};
                        int32_t l_343[9][10] = {{0x56BA5D0AL,0x97AA096EL,0x284EDC7AL,0xFA52725BL,0L,(-1L),0x97AA096EL,0x58915A19L,1L,0x942D0C8CL},{(-1L),0xB439EF4DL,0x284EDC7AL,0L,0x675217F3L,0x58915A19L,0xB439EF4DL,0x58915A19L,0x675217F3L,0L},{0x284EDC7AL,0xF4C1D798L,0x284EDC7AL,1L,0xFA52725BL,0x6D6B8274L,0x04499DD3L,0x07E729D3L,0x284EDC7AL,0x56BA5D0AL},{0L,(-6L),0x6BA0FE35L,0x56BA5D0AL,(-1L),0xE06719EAL,(-6L),0x07E729D3L,0x58915A19L,0x58915A19L},{0x07E729D3L,7L,0x6BA0FE35L,0x284EDC7AL,0x284EDC7AL,0x6BA0FE35L,7L,0x07E729D3L,(-1L),(-1L)},{0x6D6B8274L,(-1L),0x6BA0FE35L,0x58915A19L,(-1L),0L,(-1L),0x07E729D3L,(-1L),0x284EDC7AL},{0xE06719EAL,6L,0x6BA0FE35L,(-1L),0x56BA5D0AL,0x07E729D3L,6L,0x07E729D3L,0x56BA5D0AL,(-1L)},{0x6BA0FE35L,0x04499DD3L,0x6BA0FE35L,(-1L),0x58915A19L,0x6D6B8274L,0x04499DD3L,0x07E729D3L,0x284EDC7AL,0x56BA5D0AL},{0L,(-6L),0x6BA0FE35L,0x56BA5D0AL,(-1L),0xE06719EAL,(-6L),0x07E729D3L,0x58915A19L,0x58915A19L}};
                        int i, j, k;
                        p_41 = p_41;
                        l_343[5][2] = ((g_92[7] ^ 0x9C78L) && ((((1L >= l_338) | 0x677EC04DL) == ((((-1L) == ((g_31 | g_92[8]) | (safe_rshift_func_int8_t_s_s((l_341 == l_342[7][0][2]), g_31)))) < g_31) & g_92[7])) && g_208));
                    }
                }
                for (l_333 = 0; (l_333 <= 5); l_333 += 1)
                {
                    int64_t l_353 = 0x4FE40A83970FA0D3LL;
                    int32_t ***l_354[7][4][9] = {{{&l_331[0],(void*)0,&l_336[1],&l_331[0],&l_331[0],&l_336[1],&l_331[0],&l_336[1],&l_331[0]},{&l_331[0],(void*)0,(void*)0,&l_331[0],&g_66,(void*)0,&l_331[0],&l_331[0],&l_336[1]},{&l_331[0],&l_331[0],(void*)0,&l_331[0],&l_331[0],(void*)0,(void*)0,&l_336[1],&g_66},{&l_336[5],&l_331[0],&l_336[1],&l_331[0],&g_66,&l_331[0],(void*)0,&g_66,&l_336[1]}},{{&l_331[0],&g_66,&g_66,&l_331[0],&l_331[0],&l_331[0],&l_331[0],&g_66,&g_66},{&l_331[0],&g_66,&g_66,(void*)0,&g_66,&g_66,&l_331[0],(void*)0,&l_336[1]},{&l_331[0],&l_331[0],&l_331[0],&l_331[0],&g_66,&g_66,&l_331[0],(void*)0,&l_331[0]},{(void*)0,&l_331[0],&g_66,&l_331[0],&l_336[1],&l_331[0],&l_336[5],(void*)0,&g_66}},{{(void*)0,(void*)0,&l_331[0],&l_331[0],(void*)0,&l_331[0],&l_331[0],&g_66,&l_336[1]},{&l_331[0],(void*)0,&g_66,&l_331[0],(void*)0,(void*)0,&l_331[0],&g_66,(void*)0},{&l_331[0],&l_336[1],&l_331[0],&l_331[0],&l_336[1],(void*)0,&l_331[0],&l_336[1],(void*)0},{&l_331[0],&g_66,&g_66,&g_66,&g_66,&l_336[1],&l_336[5],&l_331[0],&l_336[1]}},{{&l_336[5],&l_336[1],&g_66,&g_66,&g_66,&g_66,&l_331[0],&l_336[1],&g_66},{&l_331[0],(void*)0,&l_336[1],&l_331[0],&l_331[0],&l_336[1],&l_331[0],&l_336[1],&l_331[0]},{&l_331[0],&g_66,&g_66,&l_331[0],&g_66,&g_66,&g_66,&l_331[0],&l_331[0]},{(void*)0,&l_331[0],&g_66,(void*)0,&g_66,&g_66,&g_66,(void*)0,&l_336[4]}},{{&l_336[1],&g_66,&l_331[0],(void*)0,&g_66,&l_331[0],&g_66,&g_66,(void*)0},{&l_331[0],&l_336[1],&g_66,&l_336[1],&l_331[0],&g_66,&g_66,&l_336[4],&l_336[4]},{&l_336[1],&l_336[1],&l_336[4],&g_66,&l_336[4],&l_336[1],&l_336[1],&l_331[0],&l_331[0]},{&g_66,&g_66,&l_331[0],&l_336[1],&g_66,&l_336[1],&l_331[0],&g_66,&l_331[0]}},{{&g_66,&l_331[0],&g_66,(void*)0,&l_331[0],&g_66,&l_336[1],&l_331[0],&l_336[1]},{&g_66,&g_66,&g_66,(void*)0,&g_66,&l_331[0],(void*)0,&l_336[4],&l_336[1]},{&g_66,&g_66,&g_66,&l_331[0],&g_66,&g_66,&l_331[0],&g_66,&g_66},{&l_336[1],(void*)0,&l_331[0],&l_331[0],&l_331[0],&g_66,(void*)0,(void*)0,&g_66}},{{&l_331[0],&g_66,&l_336[4],&g_66,&g_66,(void*)0,&l_336[1],&l_331[0],&l_336[1]},{&l_336[1],(void*)0,&g_66,&g_66,&l_336[4],&g_66,&l_331[0],(void*)0,&l_336[1]},{(void*)0,&g_66,&l_331[0],&l_331[0],&l_331[0],(void*)0,&l_336[1],(void*)0,&l_331[0]},{&l_331[0],&g_66,&g_66,&l_331[0],&g_66,&g_66,&g_66,&l_331[0],&l_331[0]}}};
                    int i, j, k;
                    l_353 = (safe_unary_minus_func_int8_t_s((safe_rshift_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((((((***l_341) < ((*p_41) > 0UL)) ^ g_208) <= (&l_336[1] == l_341)) ^ l_314), ((g_208 || (((safe_add_func_int32_t_s_s((+(g_92[7] == l_352)), (*p_41))) >= g_31) || g_5)) | 6UL))), 12))));
                    l_326 = (((l_354[5][0][3] != (void*)0) & (g_92[4] > (safe_unary_minus_func_int16_t_s((((safe_sub_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u((((***l_341) != ((3L ^ (((l_360 ^ (safe_sub_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((0x5F3CF5ADL || (safe_lshift_func_int16_t_s_s(((***l_341) | (+((l_354[1][0][4] != l_341) && g_92[8]))), (***l_341)))), g_92[7])), 1UL))) && g_31) & 65527UL)) && g_208)) ^ g_92[7]), (***l_341))), (*p_41))) != g_92[2]) & 0xDD5C3C14L))))) > 0x89EAL);
                }
            }
        }
    }
    if ((0xFBL <= g_92[2]))
    {
        int32_t l_377 = 0L;
        int32_t ***l_378 = &l_336[4];
        int32_t ****l_395 = (void*)0;
        if ((safe_rshift_func_uint16_t_u_s((!(safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((l_377 & (&l_336[3] != l_378)), 2)), 0))), ((safe_lshift_func_int16_t_s_u(0L, 15)) == ((safe_sub_func_uint64_t_u_u(((((g_92[7] | ((safe_rshift_func_int16_t_s_s((safe_sub_func_int16_t_s_s(((safe_add_func_int8_t_s_s(g_5, ((safe_lshift_func_int8_t_s_u(((safe_lshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_s((((void*)0 == l_395) <= (safe_rshift_func_int16_t_s_s((l_398 >= l_399), g_208))), 5)), 4)) || 3L), g_208)) | (-1L)))) < l_400), (***l_378))), 14)) >= (***l_378))) > g_208) != g_208) || g_92[3]), (***l_378))) != (***l_378))))))
        {
            for (l_400 = 0; (l_400 <= 1); l_400 = safe_add_func_int16_t_s_s(l_400, 5))
            {
                uint32_t l_403 = 0xAB68C037L;
                l_403++;
            }
        }
        else
        {
            uint32_t l_408 = 7UL;
            int32_t ***l_413 = &l_336[2];
            int32_t l_436 = 0xD01EAA86L;
            for (l_289 = (-2); (l_289 == (-28)); l_289 = safe_sub_func_uint64_t_u_u(l_289, 4))
            {
                int64_t l_409 = 0xE2D9756EE14F3B51LL;
                int32_t l_419 = 0x778ADEA0L;
                int32_t l_422 = 0xED1166AEL;
                int32_t ***l_452 = (void*)0;
                uint64_t l_453 = 8UL;
                int64_t l_454[10] = {(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L)};
                int i;
            }
        }
        l_455 &= (*p_41);
        (*g_66) = p_41;
    }
    else
    {
        uint8_t l_462 = 255UL;
        int32_t ***l_479[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        uint16_t l_480 = 0x3E16L;
        int32_t l_481[2];
        int i;
        for (i = 0; i < 2; i++)
            l_481[i] = 0x600C165BL;
        l_482[6][1] ^= (safe_mod_func_int16_t_s_s(((((safe_lshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_s(l_462, l_462)), 2)) || (safe_add_func_uint8_t_u_u((((safe_mod_func_int64_t_s_s((safe_add_func_int8_t_s_s(((void*)0 != &g_228), g_5)), (safe_mod_func_uint16_t_u_u(((safe_add_func_int64_t_s_s((g_208 < l_462), (safe_mod_func_int64_t_s_s(((safe_sub_func_int16_t_s_s(l_462, (safe_sub_func_uint32_t_u_u(((l_479[0] != l_479[0]) < 0x46CCL), (**g_66))))) || (-5L)), g_31)))) ^ l_480), l_481[1])))) > 0xC4L) || g_31), g_5))) ^ 0x30734205D212E9CELL) == g_92[7]), 0xEEE6L));
    }
    l_494 = ((((safe_sub_func_uint16_t_u_u(g_31, ((safe_add_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_u(255UL, ((((((g_92[2] || ((safe_sub_func_int32_t_s_s((((0x7B9CL != g_92[3]) == ((p_41 != p_41) >= (safe_add_func_int16_t_s_s((0x9147L > 5UL), g_92[2])))) == g_92[2]), g_92[3])) ^ l_493)) == g_92[7]) < g_92[7]) < 0x4BA9E946E8EC02EDLL) && g_92[3]) == 0xCCF562C2L))) & g_208), g_5)) > g_5))) || 0xD26FAC27E42F7637LL) > g_208) | 0UL);
    if ((((-1L) != (g_208 < g_92[7])) != g_92[7]))
    {
        uint64_t l_508[9][7] = {{0x32E502DC4C73AF5BLL,0x32E502DC4C73AF5BLL,0xBE982C6C15BF0AE7LL,0xEB9FB266415629FBLL,0x2E3A02C0E1772EF0LL,18446744073709551609UL,0UL},{0xEB9FB266415629FBLL,0x32E502DC4C73AF5BLL,0x1890F276ACC0AECCLL,18446744073709551609UL,18446744073709551609UL,0x1890F276ACC0AECCLL,0x32E502DC4C73AF5BLL},{0x1890F276ACC0AECCLL,1UL,0x32E502DC4C73AF5BLL,0UL,0x2E3A02C0E1772EF0LL,0x15477A54CFC564CFLL,0xEB9FB266415629FBLL},{0x1890F276ACC0AECCLL,0UL,18446744073709551615UL,0x32E502DC4C73AF5BLL,18446744073709551615UL,0UL,0x1890F276ACC0AECCLL},{0xEB9FB266415629FBLL,0x15477A54CFC564CFLL,0x2E3A02C0E1772EF0LL,0UL,0x32E502DC4C73AF5BLL,1UL,0x1890F276ACC0AECCLL},{0x32E502DC4C73AF5BLL,0x1890F276ACC0AECCLL,18446744073709551609UL,18446744073709551609UL,0x1890F276ACC0AECCLL,0x32E502DC4C73AF5BLL,0xEB9FB266415629FBLL},{0UL,18446744073709551609UL,0x2E3A02C0E1772EF0LL,0xEB9FB266415629FBLL,0UL,0xBE982C6C15BF0AE7LL,0xBE982C6C15BF0AE7LL},{18446744073709551609UL,0UL,18446744073709551611UL,0UL,18446744073709551609UL,0x2E3A02C0E1772EF0LL,0xEB9FB266415629FBLL},{0UL,0x1890F276ACC0AECCLL,0xBE982C6C15BF0AE7LL,1UL,18446744073709551609UL,0xEB9FB266415629FBLL,18446744073709551609UL}};
        int32_t l_523[9][2][2] = {{{(-1L),6L},{(-1L),0xBB263864L}},{{(-1L),6L},{(-1L),(-1L)}},{{6L,0xBB263864L},{1L,1L}},{{(-1L),1L},{1L,0xBB263864L}},{{6L,(-1L)},{(-1L),6L}},{{(-1L),0xBB263864L},{(-1L),6L}},{{(-1L),(-1L)},{6L,0xBB263864L}},{{1L,1L},{(-1L),1L}},{{1L,0xBB263864L},{6L,(-1L)}}};
        int32_t *****l_545 = &g_228;
        int32_t *l_567 = &g_31;
        int32_t l_650 = 3L;
        uint8_t l_658 = 0x7EL;
        int32_t l_694 = (-1L);
        int32_t ***l_733 = &g_66;
        uint32_t l_743 = 0UL;
        int32_t **l_745 = (void*)0;
        int64_t l_751 = 0x34FB280C31FD2B11LL;
        int16_t l_754 = 0xB518L;
        int32_t l_755 = 0x3A7AA7B2L;
        int32_t l_758 = 9L;
        uint32_t l_760[8][3][8] = {{{0x1D3A349BL,0UL,0xC676B507L,0UL,0x0FA94516L,0x80C35969L,0x3E64AEEBL,0x976BB91FL},{0x09121634L,0x8CDEA8E7L,0x3A683A96L,0UL,3UL,0x1D3A349BL,0UL,0x1D3A349BL},{4294967288UL,0UL,4294967292UL,0UL,4294967288UL,4294967295UL,0xBE1594E1L,0x42CE4570L}},{{0x816ED022L,0xD70ECBE3L,0xCC9757E6L,1UL,0xB659FB67L,0UL,0x44FB7EEFL,0UL},{4294967286UL,1UL,0xCC9757E6L,0xEA0429C0L,0xC92DD13AL,9UL,0xBE1594E1L,3UL},{0xB659FB67L,0xE4B31F6EL,4294967292UL,0x42CE4570L,0xC508A2FCL,4294967292UL,0UL,4294967295UL}},{{0UL,0xBE1594E1L,0x3A683A96L,0xFE1BDE9FL,0xEA0429C0L,0UL,0x3E64AEEBL,4294967286UL},{0UL,0x80C35969L,0xC676B507L,0xB659FB67L,0xFE1BDE9FL,8UL,0xD70ECBE3L,0x0C8D799DL},{1UL,1UL,4294967295UL,0xE4B31F6EL,0xCFD81CD4L,4294967292UL,7UL,0UL}},{{0x0C8D799DL,0UL,0x816ED022L,0UL,0UL,0UL,1UL,0x09121634L},{0x976BB91FL,1UL,0x44FB7EEFL,0x0FA94516L,3UL,0x12901C45L,0UL,0x816ED022L},{0x0FA94516L,0xB659FB67L,0xF4D5E0FCL,1UL,0UL,4294967295UL,7UL,7UL}},{{0x0C8D799DL,7UL,0xC92DD13AL,0xC92DD13AL,7UL,0x0C8D799DL,0x44FB7EEFL,7UL},{0xC508A2FCL,0x8CDEA8E7L,0UL,4294967286UL,0xFE1BDE9FL,0x87F71961L,0x42CE4570L,3UL},{0xCFD81CD4L,0UL,4UL,4294967286UL,7UL,0xF4D5E0FCL,0x0FA94516L,7UL}},{{0UL,7UL,0x3E64AEEBL,0xC92DD13AL,1UL,1UL,0x8CDEA8E7L,7UL},{0xD70ECBE3L,0x80C35969L,0UL,1UL,0xC92DD13AL,1UL,1UL,0x816ED022L},{0xBE1594E1L,0UL,0x42CE4570L,0x44FB7EEFL,1UL,4294967286UL,3UL,1UL}},{{0x35196968L,0x44FB7EEFL,0x8E591FB2L,0x96D92199L,0x3A683A96L,4294967294UL,0x6DEE5DCFL,0x3A683A96L},{9UL,4294967289UL,4294967294UL,9UL,0x5E8066DEL,0x8E591FB2L,0x87F71961L,4294967289UL},{0x3E64AEEBL,1UL,4294967286UL,0xC92DD13AL,0x80C35969L,0x42CE4570L,0xEDE3DC19L,0x816ED022L}},{{4294967295UL,3UL,0UL,4294967292UL,1UL,8UL,4294967292UL,0xFE1BDE9FL},{0UL,4294967289UL,0x8B4A023FL,3UL,0x8B4A023FL,4294967289UL,0UL,0x57EC0316L},{3UL,0x80C35969L,1UL,0UL,0x0C8D799DL,4294967286UL,1UL,0xCC9757E6L}}};
        uint32_t l_787[9][4] = {{0x1DDA11A1L,8UL,0UL,8UL},{0UL,8UL,0x1DDA11A1L,0xC8EDE02BL},{8UL,0UL,18446744073709551607UL,0UL},{1UL,0x67333062L,0x67333062L,1UL},{1UL,0xC8EDE02BL,18446744073709551607UL,1UL},{8UL,1UL,0x1DDA11A1L,0UL},{0UL,18446744073709551615UL,0UL,0UL},{0x1DDA11A1L,1UL,8UL,1UL},{18446744073709551607UL,0xC8EDE02BL,1UL,1UL}};
        int i, j, k;
        for (l_451 = 0; (l_451 <= (-26)); l_451 = safe_sub_func_int32_t_s_s(l_451, 4))
        {
            int32_t *l_503 = &g_92[5];
            int8_t l_507[3];
            uint8_t l_511 = 1UL;
            int32_t ****l_522 = &g_219;
            int32_t *****l_563 = (void*)0;
            int32_t l_594 = 0L;
            int32_t l_600 = 0xF6A70738L;
            int32_t l_601 = 4L;
            int16_t l_603 = 4L;
            int32_t l_606 = (-1L);
            int32_t l_607 = 0L;
            int32_t l_609[5][8][1];
            int32_t ***l_639[6] = {&l_336[1],&l_336[1],&l_336[1],&l_336[1],&l_336[1],&l_336[1]};
            int32_t l_649[9] = {(-2L),1L,(-2L),(-2L),1L,(-2L),(-2L),1L,(-2L)};
            uint16_t l_695 = 0x60ABL;
            uint16_t l_706[10][8][3] = {{{0x48D5L,1UL,0UL},{5UL,65529UL,8UL},{0UL,1UL,0x5320L},{3UL,0x159DL,1UL},{1UL,0xDCB9L,1UL},{5UL,0x2C7DL,65529UL},{0xBC17L,0UL,1UL},{1UL,0UL,1UL}},{{1UL,1UL,0x5320L},{9UL,1UL,8UL},{65527UL,0UL,0UL},{3UL,0xFF51L,0x2AB0L},{65527UL,0xDCB9L,0x7912L},{9UL,0x51E6L,65529UL},{1UL,1UL,0xDCB9L},{1UL,0xE186L,0x2AB0L}},{{0xBC17L,1UL,0x007CL},{5UL,0xE186L,8UL},{1UL,1UL,0x8995L},{3UL,0x51E6L,1UL},{0UL,0xDCB9L,65535UL},{5UL,0xFF51L,65529UL},{0x48D5L,0UL,65535UL},{1UL,1UL,1UL}},{{65526UL,1UL,0x8995L},{9UL,0UL,8UL},{6UL,0UL,0x007CL},{3UL,0x2C7DL,0x2AB0L},{6UL,0xDCB9L,0xDCB9L},{9UL,0x159DL,65529UL},{65526UL,1UL,0x7912L},{1UL,65529UL,0x2AB0L}},{{0x48D5L,1UL,0UL},{5UL,65529UL,8UL},{0UL,1UL,0x5320L},{3UL,0x159DL,1UL},{1UL,0xDCB9L,1UL},{5UL,0x2C7DL,65529UL},{0xBC17L,0UL,1UL},{1UL,0UL,1UL}},{{1UL,1UL,0x5320L},{9UL,1UL,8UL},{65527UL,0UL,0UL},{3UL,0xFF51L,0x2AB0L},{65527UL,0xDCB9L,0x7912L},{9UL,0x51E6L,65529UL},{1UL,1UL,0xDCB9L},{1UL,0xE186L,0x2AB0L}},{{0xBC17L,1UL,0x007CL},{5UL,0xE186L,8UL},{1UL,1UL,0x8995L},{3UL,0x51E6L,1UL},{0UL,0xDCB9L,65535UL},{5UL,0xFF51L,65529UL},{0x48D5L,0UL,65535UL},{1UL,1UL,1UL}},{{65526UL,1UL,0x8995L},{9UL,0UL,8UL},{6UL,0UL,0x007CL},{3UL,0x2C7DL,0x2AB0L},{6UL,0xDCB9L,0xDCB9L},{9UL,0x159DL,65529UL},{65526UL,1UL,0x7912L},{1UL,65529UL,0x2AB0L}},{{0x48D5L,1UL,0UL},{5UL,65529UL,8UL},{0UL,1UL,0x5320L},{3UL,0x159DL,1UL},{1UL,0xDCB9L,1UL},{5UL,0x2C7DL,65529UL},{0xBC17L,0UL,1UL},{1UL,0UL,1UL}},{{1UL,1UL,0x5320L},{9UL,1UL,8UL},{65527UL,0UL,0UL},{3UL,0xFF51L,0x2AB0L},{65527UL,0xDCB9L,0x7912L},{9UL,0x51E6L,65529UL},{1UL,1UL,0xDCB9L},{1UL,0xE186L,0x2AB0L}}};
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_507[i] = 0xFAL;
            for (i = 0; i < 5; i++)
            {
                for (j = 0; j < 8; j++)
                {
                    for (k = 0; k < 1; k++)
                        l_609[i][j][k] = 0x01736E31L;
                }
            }
        }
        l_754 &= (((g_31 != (((!(l_745 != &p_41)) <= ((*l_545) == (void*)0)) < (((+(((safe_sub_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(l_751, (safe_lshift_func_int16_t_s_u((((((0xA7AB0D4EL & (-2L)) && 0xC617L) ^ 0xC7E5FFA7L) < (***l_733)) && g_626[0]), g_549[3][0][2])))), (*l_567))) < 1UL) < g_92[7])) | (***l_733)) < g_626[3]))) & (*p_41)) && g_626[3]);
        l_760[0][2][0]--;
        for (l_399 = 0; (l_399 == (-19)); --l_399)
        {
            int32_t ****l_767[7];
            int i;
            for (i = 0; i < 7; i++)
                l_767[i] = (void*)0;
        }
    }
    else
    {
        uint8_t l_795 = 5UL;
        (*g_642) |= l_794[0][1];
        --l_795;
    }
    return g_208;
}
inline static int32_t * func_42(int32_t * p_43, int32_t * p_44, uint16_t p_45, int32_t ** p_46, int32_t ** p_47)
{
    int32_t ****l_268 = &g_219;
    int32_t l_271 = (-6L);
    int32_t *l_272 = &l_271;
    int32_t l_282 = 0xC251C101L;
    int32_t l_283 = 0x0921904DL;
    int32_t l_284 = 0xD293EE43L;
    uint64_t l_285 = 0xDF9DBF9705C1F3B2LL;
    (*l_272) = (safe_lshift_func_uint16_t_u_u(((safe_add_func_int64_t_s_s((safe_sub_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s((safe_add_func_int32_t_s_s(((((safe_add_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_u(((l_268 != l_268) && (&p_47 == (void*)0)), 12)) > ((((safe_sub_func_int64_t_s_s(p_45, g_5)) >= (g_31 <= ((l_268 != (void*)0) > g_92[1]))) <= g_31) >= p_45)), g_208)) & g_31) != 0x4BDBL) >= (-1L)), (*g_67))), g_31)), l_271)), p_45)) == p_45), 2));
    (*l_272) = 0x1ED15957L;
    for (l_271 = 0; (l_271 != (-7)); l_271 = safe_sub_func_uint32_t_u_u(l_271, 7))
    {
        int32_t l_275 = 1L;
        int32_t *l_276 = &l_275;
        int32_t *l_277 = &l_275;
        int32_t *l_278 = (void*)0;
        int32_t *l_279 = &g_92[0];
        int32_t *l_280 = (void*)0;
        int32_t *l_281[9] = {&l_275,&l_275,&l_275,&l_275,&l_275,&l_275,&l_275,&l_275,&l_275};
        int i;
        if (l_275)
            break;
        --l_285;
    }
    return (*p_47);
}
static int32_t * func_48(int32_t * p_49, int32_t p_50)
{
    int32_t *l_229[10] = {&g_92[2],(void*)0,&g_92[2],(void*)0,&g_92[2],(void*)0,&g_92[2],(void*)0,&g_92[2],(void*)0};
    int i;
    p_50 = (*p_49);
    for (p_50 = 0; (p_50 == (-19)); p_50 = safe_sub_func_uint16_t_u_u(p_50, 1))
    {
        uint32_t l_232 = 0x5BE54755L;
        ++l_232;
    }
    for (p_50 = 8; (p_50 >= 0); p_50 -= 1)
    {
        int32_t l_247 = 4L;
        int32_t l_248 = 0x917B79CEL;
        int16_t l_250 = 0xA428L;
        int i;
        l_248 ^= (safe_rshift_func_uint16_t_u_u((g_92[p_50] > 0x9CL), (0xF4506700L > (safe_lshift_func_uint16_t_u_u((((safe_rshift_func_int16_t_s_s(4L, (g_92[p_50] == (g_92[p_50] != ((safe_lshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((((safe_sub_func_int32_t_s_s(g_92[p_50], ((void*)0 != &p_49))) != p_50) && l_247), g_92[5])), p_50)) && g_92[7]))))) == g_31) && p_50), 0)))));
        for (g_208 = 1; (g_208 <= 5); g_208 += 1)
        {
            int32_t l_249 = (-1L);
            int i;
            l_250 ^= l_249;
        }
    }
    return l_229[2];
}
inline static int32_t * func_51(uint16_t p_52, int32_t ** p_53, int32_t ** p_54)
{
    return (*p_54);
}
static uint16_t func_55(int32_t * p_56, int32_t ** p_57, int32_t p_58)
{
    for (p_58 = 5; (p_58 <= (-6)); p_58 = safe_sub_func_uint32_t_u_u(p_58, 9))
    {
        return p_58;
    }
    g_227[0] = g_227[0];
    return p_58;
}
inline static int32_t ** func_59(uint8_t p_60, int32_t ** p_61, uint32_t p_62, int32_t * p_63)
{
    int32_t l_68 = 0xC2B2A8F3L;
    int32_t l_213[5][1][9] = {{{0L,0x502B33B0L,0xAC0D40F6L,0xAC0D40F6L,0x502B33B0L,0L,0x502B33B0L,0xAC0D40F6L,0xAC0D40F6L}},{{0xB231F37CL,0xB231F37CL,0L,0xAC0D40F6L,0L,0xB231F37CL,0xB231F37CL,0L,0x502B33B0L}},{{0xAC0D40F6L,0xB231F37CL,0xAC0D40F6L,0x5E1EA3A6L,0x5E1EA3A6L,0xAC0D40F6L,0xB231F37CL,0xAC0D40F6L,0x5E1EA3A6L}},{{0xAC0D40F6L,0x5E1EA3A6L,0x5E1EA3A6L,0xAC0D40F6L,0xB231F37CL,0xAC0D40F6L,0x5E1EA3A6L,0x5E1EA3A6L,0xAC0D40F6L}},{{0L,0x5E1EA3A6L,0x502B33B0L,0x5E1EA3A6L,0L,0L,0x5E1EA3A6L,0x502B33B0L,0x5E1EA3A6L}}};
    int32_t **l_224[7];
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_224[i] = &g_67;
    l_68 |= (**p_61);
    for (p_60 = 13; (p_60 != 33); p_60 = safe_add_func_int8_t_s_s(p_60, 2))
    {
        uint32_t l_71 = 0x05767A06L;
        int32_t *l_212 = &g_92[3];
        l_71++;
        (*l_212) = ((safe_sub_func_uint16_t_u_u(((safe_mod_func_int8_t_s_s(g_5, 247UL)) <= ((func_78(((~(safe_add_func_int32_t_s_s((safe_mod_func_uint64_t_u_u((0xAF575662L == (&p_63 == &p_63)), p_62)), ((safe_lshift_func_int16_t_s_s(((safe_lshift_func_int16_t_s_u(l_71, 3)) & ((-4L) || ((+l_68) & g_31))), 11)) >= g_5)))) || l_71)) > (*g_67)) == 0L)), 65531UL)) | g_31);
        l_213[2][0][1] |= l_68;
    }
    for (p_60 = 0; (p_60 == 52); p_60++)
    {
        int32_t ****l_216 = (void*)0;
        int32_t ***l_218 = &g_66;
        int32_t ****l_217[6] = {&l_218,&l_218,&l_218,&l_218,&l_218,&l_218};
        int8_t l_220 = 0x1DL;
        uint32_t l_221[1];
        int i;
        for (i = 0; i < 1; i++)
            l_221[i] = 18446744073709551609UL;
        g_219 = &p_61;
        ((void) sizeof ((g_219 == &p_61) ? 1 : 0), __extension__ ({ if (g_219 == &p_61) ; else __assert_fail ("g_219 == &p_61", "/tmp/tmp9seisx7p.c", 524, __extension__ __PRETTY_FUNCTION__); }));
        l_221[0]--;
        l_213[0][0][1] &= (&g_66 == &g_66);
    }
    return l_224[6];
}
inline static int32_t func_78(int32_t p_79)
{
    uint32_t l_90[1];
    int32_t *l_91 = &g_92[7];
    int8_t l_99 = 1L;
    uint32_t l_102 = 0UL;
    int64_t l_122 = 0x03F0CD8B2F8DC5A2LL;
    int32_t ***l_211 = &g_66;
    int i;
    for (i = 0; i < 1; i++)
        l_90[i] = 0x78C3FCEEL;
    for (p_79 = 0; (p_79 <= 0); p_79 += 1)
    {
        int i;
        return l_90[p_79];
    }
    (*l_91) = (g_5 | g_31);
    (*l_91) = (((((safe_sub_func_uint8_t_u_u((((safe_lshift_func_int8_t_s_u((*l_91), p_79)) >= ((*l_91) < ((safe_mod_func_uint64_t_u_u((0x1F474372L != ((((p_79 < l_99) != (safe_sub_func_uint64_t_u_u(p_79, ((((p_79 | (&l_91 != &l_91)) || 0x34BB8EBAL) <= 1UL) < l_102)))) || (*l_91)) | 0x872454177E56D7CBLL)), p_79)) != (*l_91)))) ^ g_92[4]), p_79)) & g_92[5]) || 0xA7E6L) || (-1L)) >= g_92[4]);
    for (l_102 = 5; (l_102 >= 21); l_102++)
    {
        uint8_t l_105 = 0xBDL;
        int32_t **l_113 = &g_67;
        int8_t l_123 = (-1L);
        uint64_t l_146 = 0x2D6D4F0C11142F3ELL;
        (*l_91) ^= ((p_79 <= p_79) & (((0x0BL | (&l_91 == &g_67)) || l_105) < (safe_lshift_func_uint8_t_u_u(255UL, 6))));
        for (l_99 = 0; (l_99 != 13); l_99 = safe_add_func_int32_t_s_s(l_99, 1))
        {
            int32_t l_110 = 0x77380A6AL;
            int32_t *l_141 = &g_92[7];
        }
    }
    return p_79;
}
int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_5;
    csmith_sink_ = g_31;
    for (i = 0; i < 9; i++)
    {
        csmith_sink_ = g_92[i];
    }
    csmith_sink_ = g_208;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 7; k++)
            {
                csmith_sink_ = g_549[i][j][k];
            }
        }
    }
    for (i = 0; i < 4; i++)
    {
        csmith_sink_ = g_626[i];
    }
    platform_main_end(0,0);
    return 0;
}
