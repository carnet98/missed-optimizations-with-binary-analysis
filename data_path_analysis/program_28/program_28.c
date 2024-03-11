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
#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint16_t f0;
   int64_t f1;
   int8_t f2;
   uint32_t f3;
   uint32_t f4;
};
#pragma pack(pop)
static uint32_t g_12 = 0x8F576C51L;
static int32_t g_41 = 0x5F93BE41L;
static struct S0 g_80[3][8][6] = {{{{0UL,0L,-1L,8UL,0x56116ABEL}, {65535UL,1L,-1L,4294967295UL,0x1B79E296L}, {9UL,1L,0L,4294967295UL,0UL}, {65535UL,0L,8L,0x85AC0FE8L,4294967295UL}, {65535UL,0xAAC79E06D3C1D260LL,-1L,4294967295UL,9UL}, {65535UL,1L,5L,1UL,0x2FE0EC92L}}, {{0UL,0L,-1L,8UL,0x56116ABEL}, {65535UL,1L,-1L,4294967295UL,0x1B79E296L}, {9UL,1L,0L,4294967295UL,0UL}, {65535UL,0L,8L,0x85AC0FE8L,4294967295UL}, {65535UL,0xAAC79E06D3C1D260LL,-1L,4294967295UL,9UL}, {65535UL,1L,5L,1UL,0x2FE0EC92L}}, {{0UL,0L,-1L,8UL,0x56116ABEL}, {65535UL,1L,-1L,4294967295UL,0x1B79E296L}, {9UL,1L,0L,4294967295UL,0UL}, {65535UL,0L,8L,0x85AC0FE8L,4294967295UL}, {65535UL,0xAAC79E06D3C1D260LL,-1L,4294967295UL,9UL}, {65535UL,1L,5L,1UL,0x2FE0EC92L}}, {{0UL,0L,-1L,8UL,0x56116ABEL}, {65535UL,1L,-1L,4294967295UL,0x1B79E296L}, {9UL,1L,0L,4294967295UL,0UL}, {65535UL,0L,8L,0x85AC0FE8L,4294967295UL}, {65535UL,0xAAC79E06D3C1D260LL,-1L,4294967295UL,9UL}, {65535UL,1L,5L,1UL,0x2FE0EC92L}}, {{0UL,0L,-1L,8UL,0x56116ABEL}, {65535UL,1L,-1L,4294967295UL,0x1B79E296L}, {9UL,1L,0L,4294967295UL,0UL}, {65535UL,0L,8L,0x85AC0FE8L,4294967295UL}, {65535UL,0xAAC79E06D3C1D260LL,-1L,4294967295UL,9UL}, {65535UL,1L,5L,1UL,0x2FE0EC92L}}, {{0UL,0L,-1L,8UL,0x56116ABEL}, {65535UL,1L,-1L,4294967295UL,0x1B79E296L}, {9UL,1L,0L,4294967295UL,0UL}, {65535UL,0L,8L,0x85AC0FE8L,4294967295UL}, {65535UL,0xAAC79E06D3C1D260LL,-1L,4294967295UL,9UL}, {65535UL,1L,5L,1UL,0x2FE0EC92L}}, {{0UL,0L,-1L,8UL,0x56116ABEL}, {65535UL,1L,-1L,4294967295UL,0x1B79E296L}, {9UL,1L,0L,4294967295UL,0UL}, {65535UL,0L,8L,0x85AC0FE8L,4294967295UL}, {65535UL,0xAAC79E06D3C1D260LL,-1L,4294967295UL,9UL}, {65535UL,1L,5L,1UL,0x2FE0EC92L}}, {{0UL,0L,-1L,8UL,0x56116ABEL}, {65535UL,1L,-1L,4294967295UL,0x1B79E296L}, {9UL,1L,0L,4294967295UL,0UL}, {65535UL,0L,8L,0x85AC0FE8L,4294967295UL}, {65535UL,0xAAC79E06D3C1D260LL,-1L,4294967295UL,9UL}, {65535UL,1L,5L,1UL,0x2FE0EC92L}}}, {{{0UL,0L,-1L,8UL,0x56116ABEL}, {65535UL,1L,-1L,4294967295UL,0x1B79E296L}, {9UL,1L,0L,4294967295UL,0UL}, {65535UL,0L,8L,0x85AC0FE8L,4294967295UL}, {65535UL,0xAAC79E06D3C1D260LL,-1L,4294967295UL,9UL}, {65535UL,1L,5L,1UL,0x2FE0EC92L}}, {{0UL,0L,-1L,8UL,0x56116ABEL}, {65535UL,1L,-1L,4294967295UL,0x1B79E296L}, {9UL,1L,0L,4294967295UL,0UL}, {65535UL,0L,8L,0x85AC0FE8L,4294967295UL}, {65535UL,0xAAC79E06D3C1D260LL,-1L,4294967295UL,9UL}, {65535UL,1L,5L,1UL,0x2FE0EC92L}}, {{0UL,0L,-1L,8UL,0x56116ABEL}, {65535UL,1L,-1L,4294967295UL,0x1B79E296L}, {9UL,1L,0L,4294967295UL,0UL}, {65535UL,0L,8L,0x85AC0FE8L,4294967295UL}, {65535UL,0xAAC79E06D3C1D260LL,-1L,4294967295UL,9UL}, {65535UL,1L,5L,1UL,0x2FE0EC92L}}, {{0UL,0L,-1L,8UL,0x56116ABEL}, {65535UL,1L,-1L,4294967295UL,0x1B79E296L}, {9UL,1L,0L,4294967295UL,0UL}, {65535UL,0L,8L,0x85AC0FE8L,4294967295UL}, {65535UL,0xAAC79E06D3C1D260LL,-1L,4294967295UL,9UL}, {65535UL,1L,5L,1UL,0x2FE0EC92L}}, {{0UL,0L,-1L,8UL,0x56116ABEL}, {65535UL,1L,-1L,4294967295UL,0x1B79E296L}, {9UL,1L,0L,4294967295UL,0UL}, {65535UL,0L,8L,0x85AC0FE8L,4294967295UL}, {65535UL,0xAAC79E06D3C1D260LL,-1L,4294967295UL,9UL}, {65535UL,1L,5L,1UL,0x2FE0EC92L}}, {{0UL,0L,-1L,8UL,0x56116ABEL}, {65535UL,1L,-1L,4294967295UL,0x1B79E296L}, {9UL,1L,0L,4294967295UL,0UL}, {65535UL,0L,8L,0x85AC0FE8L,4294967295UL}, {65535UL,0xAAC79E06D3C1D260LL,-1L,4294967295UL,9UL}, {65535UL,1L,5L,1UL,0x2FE0EC92L}}, {{0UL,0L,-1L,8UL,0x56116ABEL}, {65535UL,1L,-1L,4294967295UL,0x1B79E296L}, {9UL,1L,0L,4294967295UL,0UL}, {65535UL,0L,8L,0x85AC0FE8L,4294967295UL}, {65535UL,0xAAC79E06D3C1D260LL,-1L,4294967295UL,9UL}, {65535UL,1L,5L,1UL,0x2FE0EC92L}}, {{0UL,0L,-1L,8UL,0x56116ABEL}, {65535UL,1L,-1L,4294967295UL,0x1B79E296L}, {9UL,1L,0L,4294967295UL,0UL}, {65535UL,0L,8L,0x85AC0FE8L,4294967295UL}, {65535UL,0xAAC79E06D3C1D260LL,-1L,4294967295UL,9UL}, {65535UL,1L,5L,1UL,0x2FE0EC92L}}}, {{{0UL,0L,-1L,8UL,0x56116ABEL}, {65535UL,1L,-1L,4294967295UL,0x1B79E296L}, {9UL,1L,0L,4294967295UL,0UL}, {65535UL,0L,8L,0x85AC0FE8L,4294967295UL}, {65535UL,0xAAC79E06D3C1D260LL,-1L,4294967295UL,9UL}, {65535UL,1L,5L,1UL,0x2FE0EC92L}}, {{0UL,0L,-1L,8UL,0x56116ABEL}, {65535UL,1L,-1L,4294967295UL,0x1B79E296L}, {9UL,1L,0L,4294967295UL,0UL}, {65535UL,0L,8L,0x85AC0FE8L,4294967295UL}, {65535UL,0xAAC79E06D3C1D260LL,-1L,4294967295UL,9UL}, {65535UL,1L,5L,1UL,0x2FE0EC92L}}, {{0UL,0L,-1L,8UL,0x56116ABEL}, {65535UL,1L,-1L,4294967295UL,0x1B79E296L}, {9UL,1L,0L,4294967295UL,0UL}, {65535UL,0L,8L,0x85AC0FE8L,4294967295UL}, {65535UL,0xAAC79E06D3C1D260LL,-1L,4294967295UL,9UL}, {65535UL,1L,5L,1UL,0x2FE0EC92L}}, {{0UL,0L,-1L,8UL,0x56116ABEL}, {65535UL,1L,-1L,4294967295UL,0x1B79E296L}, {9UL,1L,0L,4294967295UL,0UL}, {65535UL,0L,8L,0x85AC0FE8L,4294967295UL}, {65535UL,0xAAC79E06D3C1D260LL,-1L,4294967295UL,9UL}, {65535UL,1L,5L,1UL,0x2FE0EC92L}}, {{0UL,0L,-1L,8UL,0x56116ABEL}, {65535UL,1L,-1L,4294967295UL,0x1B79E296L}, {9UL,1L,0L,4294967295UL,0UL}, {65535UL,0L,8L,0x85AC0FE8L,4294967295UL}, {65535UL,0xAAC79E06D3C1D260LL,-1L,4294967295UL,9UL}, {65535UL,1L,5L,1UL,0x2FE0EC92L}}, {{0UL,0L,-1L,8UL,0x56116ABEL}, {65535UL,1L,-1L,4294967295UL,0x1B79E296L}, {9UL,1L,0L,4294967295UL,0UL}, {65535UL,0L,8L,0x85AC0FE8L,4294967295UL}, {65535UL,0xAAC79E06D3C1D260LL,-1L,4294967295UL,9UL}, {65535UL,1L,5L,1UL,0x2FE0EC92L}}, {{0UL,0L,-1L,8UL,0x56116ABEL}, {65535UL,1L,-1L,4294967295UL,0x1B79E296L}, {9UL,1L,0L,4294967295UL,0UL}, {65535UL,0L,8L,0x85AC0FE8L,4294967295UL}, {65535UL,0xAAC79E06D3C1D260LL,-1L,4294967295UL,9UL}, {65535UL,1L,5L,1UL,0x2FE0EC92L}}, {{0UL,0L,-1L,8UL,0x56116ABEL}, {65535UL,1L,-1L,4294967295UL,0x1B79E296L}, {9UL,1L,0L,4294967295UL,0UL}, {65535UL,0L,8L,0x85AC0FE8L,4294967295UL}, {65535UL,0xAAC79E06D3C1D260LL,-1L,4294967295UL,9UL}, {65535UL,1L,5L,1UL,0x2FE0EC92L}}}};
static struct S0 ***g_124 = (void*)0;
static int32_t *g_139[1] = {&g_41};
static int32_t **g_138 = &g_139[0];
static int32_t ***g_159 = &g_138;
static uint32_t g_168 = 0UL;
static int8_t g_239 = 0x50L;
static uint64_t g_317[8] = {0x5F72F857729BDC5DLL, 0x5F72F857729BDC5DLL, 0x2A02113A691C5F55LL, 0x5F72F857729BDC5DLL, 0x5F72F857729BDC5DLL, 0x2A02113A691C5F55LL, 0x5F72F857729BDC5DLL, 0x5F72F857729BDC5DLL};
static struct S0 ****g_401[4] = {&g_124, &g_124, &g_124, &g_124};
static struct S0 *****g_400 = &g_401[0];
static uint16_t g_514 = 0x51C9L;
static int16_t g_589 = 0x8F8BL;
static uint8_t func_1(void);
inline static int32_t func_7(uint64_t p_8, uint32_t p_9, uint64_t p_10, uint32_t p_11);
static int16_t func_13(struct S0 p_14, int8_t p_15, int64_t p_16);
static int8_t func_18(int8_t p_19, uint64_t p_20, uint16_t p_21, uint16_t p_22, uint8_t p_23);
inline static int16_t func_35(struct S0 p_36, uint16_t p_37);
inline static struct S0 func_38(int16_t p_39);
static int32_t * func_45(uint64_t p_46, int32_t * p_47, int32_t * p_48);
inline static int32_t func_49(int32_t ** p_50, int16_t p_51, int32_t * p_52, uint32_t p_53);
static uint16_t func_56(int32_t p_57, int32_t p_58, int16_t p_59, uint16_t p_60);
static uint16_t func_70(int32_t ** p_71, int32_t * p_72, uint64_t p_73, int16_t p_74);
static uint8_t func_1(void)
{
    uint32_t l_2 = 0xC69AED23L;
    struct S0 l_17 = {65535UL,-1L,0x4BL,0xB4EF66B1L,0UL};
    if ((l_2 && (safe_rshift_func_int8_t_s_s((safe_sub_func_int32_t_s_s(func_7(g_12, ((0UL > (func_13(l_17, func_18(g_12, l_2, ((((0xDCL < (safe_rshift_func_int16_t_s_s((0x2268F62C4DF8E3BFLL == (safe_rshift_func_uint8_t_u_s((safe_mod_func_int64_t_s_s((safe_div_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((~func_35(func_38(g_12), g_41)), g_12)), g_168)), 0x09F750CC62C7827CLL)), 5))), l_17.f3))) != 0x6AF9661FED1FCF93LL) >= g_12) || l_17.f1), g_12, g_317[4]), l_17.f0) == 0UL)) || 0x355C7179L), g_239, l_17.f2), l_17.f4)), l_17.f2))))
    {
        int32_t *l_592 = &g_41;
        l_592 = l_592;
        return (*l_592);
    }
    else
    {
        return g_80[0][1][0].f0;
    }
}
inline static int32_t func_7(uint64_t p_8, uint32_t p_9, uint64_t p_10, uint32_t p_11)
{
    struct S0 *l_385 = &g_80[2][5][5];
    struct S0 **l_384[8] = {(void*)0, &l_385, (void*)0, &l_385, (void*)0, &l_385, (void*)0, &l_385};
    int32_t l_403 = 0xC45CE519L;
    uint8_t l_407 = 8UL;
    struct S0 *****l_437 = &g_401[0];
    uint8_t l_473 = 1UL;
    uint32_t l_484 = 18446744073709551615UL;
    int64_t l_516[3];
    int64_t l_532 = 0x747D367885347450LL;
    int i;
    for (i = 0; i < 3; i++)
        l_516[i] = 0x8D741ABFD7F1105FLL;
    for (p_11 = 0; (p_11 <= 0); p_11 += 1)
    {
        struct S0 *l_383[6] = {&g_80[0][1][0], &g_80[0][1][0], &g_80[0][1][0], &g_80[0][1][0], &g_80[0][1][0], &g_80[0][1][0]};
        struct S0 **l_382 = &l_383[3];
        int32_t ***l_406 = &g_138;
        struct S0 *****l_436 = &g_401[0];
        int i;
        l_384[2] = l_382;
        for (g_12 = 0; (g_12 <= 0); g_12 += 1)
        {
            struct S0 l_386 = {0xC77AL,0x9A3492D31B66011ELL,0x3AL,4294967288UL,4294967295UL};
            struct S0 **l_387 = &l_383[0];
            struct S0 *****l_402[7][8][4] = {{{&g_401[1], &g_401[0], &g_401[0], &g_401[0]}, {&g_401[1], &g_401[0], &g_401[0], &g_401[0]}, {&g_401[1], &g_401[0], &g_401[0], &g_401[0]}, {&g_401[1], &g_401[0], &g_401[0], &g_401[0]}, {&g_401[1], &g_401[0], &g_401[0], &g_401[0]}, {&g_401[1], &g_401[0], &g_401[0], &g_401[0]}, {&g_401[1], &g_401[0], &g_401[0], &g_401[0]}, {&g_401[1], &g_401[0], &g_401[0], &g_401[0]}}, {{&g_401[1], &g_401[0], &g_401[0], &g_401[0]}, {&g_401[1], &g_401[0], &g_401[0], &g_401[0]}, {&g_401[1], &g_401[0], &g_401[0], &g_401[0]}, {&g_401[1], &g_401[0], &g_401[0], &g_401[0]}, {&g_401[1], &g_401[0], &g_401[0], &g_401[0]}, {&g_401[1], &g_401[0], &g_401[0], &g_401[0]}, {&g_401[1], &g_401[0], &g_401[0], &g_401[0]}, {&g_401[1], &g_401[0], &g_401[0], &g_401[0]}}, {{&g_401[1], &g_401[0], &g_401[0], &g_401[0]}, {&g_401[1], &g_401[0], &g_401[0], &g_401[0]}, {&g_401[1], &g_401[0], &g_401[0], &g_401[0]}, {&g_401[1], &g_401[0], &g_401[0], &g_401[0]}, {&g_401[1], &g_401[0], &g_401[0], &g_401[0]}, {&g_401[1], &g_401[0], &g_401[0], &g_401[0]}, {&g_401[1], &g_401[0], &g_401[0], &g_401[0]}, {&g_401[1], &g_401[0], &g_401[0], &g_401[0]}}, {{&g_401[1], &g_401[0], &g_401[0], &g_401[0]}, {&g_401[1], &g_401[0], &g_401[0], &g_401[0]}, {&g_401[1], &g_401[0], &g_401[0], &g_401[0]}, {&g_401[1], &g_401[0], &g_401[0], &g_401[0]}, {&g_401[1], &g_401[0], &g_401[0], &g_401[0]}, {&g_401[1], &g_401[0], &g_401[0], &g_401[0]}, {&g_401[1], &g_401[0], &g_401[0], &g_401[0]}, {&g_401[1], &g_401[0], &g_401[0], &g_401[0]}}, {{&g_401[1], &g_401[0], &g_401[0], &g_401[0]}, {&g_401[1], &g_401[0], &g_401[0], &g_401[0]}, {&g_401[1], &g_401[0], &g_401[0], &g_401[0]}, {&g_401[1], &g_401[0], &g_401[0], &g_401[0]}, {&g_401[1], &g_401[0], &g_401[0], &g_401[0]}, {&g_401[1], &g_401[0], &g_401[0], &g_401[0]}, {&g_401[1], &g_401[0], &g_401[0], &g_401[0]}, {&g_401[1], &g_401[0], &g_401[0], &g_401[0]}}, {{&g_401[1], &g_401[0], &g_401[0], &g_401[0]}, {&g_401[1], &g_401[0], &g_401[0], &g_401[0]}, {&g_401[1], &g_401[0], &g_401[0], &g_401[0]}, {&g_401[1], &g_401[0], &g_401[0], &g_401[0]}, {&g_401[1], &g_401[0], &g_401[0], &g_401[0]}, {&g_401[1], &g_401[0], &g_401[0], &g_401[0]}, {&g_401[1], &g_401[0], &g_401[0], &g_401[0]}, {&g_401[1], &g_401[0], &g_401[0], &g_401[0]}}, {{&g_401[1], &g_401[0], &g_401[0], &g_401[0]}, {&g_401[1], &g_401[0], &g_401[0], &g_401[0]}, {&g_401[1], &g_401[0], &g_401[0], &g_401[0]}, {&g_401[1], &g_401[0], &g_401[0], &g_401[0]}, {&g_401[1], &g_401[0], &g_401[0], &g_401[0]}, {&g_401[1], &g_401[0], &g_401[0], &g_401[0]}, {&g_401[1], &g_401[0], &g_401[0], &g_401[0]}, {&g_401[1], &g_401[0], &g_401[0], &g_401[0]}}};
            int16_t l_426 = 0xC586L;
            int32_t l_439 = 0xCB2F88E1L;
            int32_t ***l_470[4] = {&g_138, &g_138, &g_138, &g_138};
            int i, j, k;
            (*l_385) = l_386;
        }
    }
    for (p_11 = 0; (p_11 <= 0); p_11 += 1)
    {
        int32_t ****l_478 = (void*)0;
        struct S0 **l_483 = &l_385;
        int32_t *l_487 = &g_41;
        g_159 = &g_138;
        (*l_487) = (safe_rshift_func_uint8_t_u_u((((1L == (safe_add_func_uint8_t_u_u(0UL, (l_483 == l_483)))) || (((l_484 ^ 0x61L) <= l_473) != 0L)) ^ (safe_div_func_uint32_t_u_u(((void*)0 == l_483), p_9))), 7));
        for (g_168 = 0; (g_168 <= 0); g_168 += 1)
        {
            struct S0 **l_488[6] = {&l_385, &l_385, &l_385, &l_385, &l_385, &l_385};
            struct S0 ***l_489 = &l_488[0];
            uint64_t l_494 = 4UL;
            int32_t *l_515 = (void*)0;
            uint32_t l_591 = 0xA48ACD95L;
            int i;
            (*l_489) = l_488[0];
            (*l_487) = ((void*)0 == (*l_483));
            for (g_41 = 0; (g_41 <= 0); g_41 += 1)
            {
                int i;
                (***l_489) = func_38((((g_317[(g_41 + 4)] && (safe_sub_func_uint64_t_u_u((p_11 < (p_11 || (safe_mod_func_uint16_t_u_u(p_10, g_41)))), ((((void*)0 == (*g_400)) == (((l_478 == (void*)0) >= g_80[0][1][0].f4) >= p_10)) & l_494)))) == 0UL) >= 0x3C049724C7DB1264LL));
                g_139[g_41] = func_45((safe_mod_func_int8_t_s_s((((((((void*)0 != &g_138) ^ ((safe_mod_func_int16_t_s_s(((safe_mod_func_int64_t_s_s(g_80[0][1][0].f0, (safe_mod_func_int32_t_s_s((((p_11 == ((safe_lshift_func_int16_t_s_u((safe_div_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((safe_add_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(p_8, (p_9 >= (~(0x36627E46L == (0x41F96CBDL | g_41)))))), l_473)), g_317[7])), 0xC360L)), g_80[0][1][0].f4)) || p_11)) & g_12) < 1L), 0x33EA072EL)))) ^ 0x3730L), l_494)) & g_80[0][1][0].f1)) == g_514) ^ p_11) || p_11) || 0xA152L), g_514)), l_515, &l_403);
                for (g_12 = 0; (g_12 <= 2); g_12 += 1)
                {
                    for (p_8 = 0; (p_8 <= 2); p_8 += 1)
                    {
                        return l_516[1];
                    }
                }
                for (l_473 = 0; (l_473 <= 2); l_473 += 1)
                {
                    (*g_138) = (void*)0;
                }
            }
            if ((safe_mod_func_int32_t_s_s(((((safe_add_func_int16_t_s_s((safe_div_func_int64_t_s_s((-1L), g_80[0][1][0].f2)), ((safe_mul_func_int32_t_s_s(((void*)0 == (*g_159)), ((safe_mod_func_int64_t_s_s(l_516[2], (safe_div_func_uint64_t_u_u(((((**g_400) == &l_488[0]) < ((!((safe_rshift_func_int16_t_s_s(l_532, 11)) >= (safe_lshift_func_int8_t_s_u((g_317[1] > p_10), 0)))) && 65535UL)) < 0xDFL), 0x6900822B6BC46E08LL)))) >= 0x20854440CDB6751ELL))) == g_80[0][1][0].f3))) != 0x8A205D57CAB776C8LL) ^ (*l_487)) != (-2L)), p_10)))
            {
                struct S0 l_535[2][9][5] = {{{{0x9A9FL,0x3F57EACDEB8F7A2ELL,0x85L,0UL,0x5881E825L}, {6UL,0xE634FCB804B9B014LL,3L,1UL,0UL}, {0xD9A4L,2L,0xFCL,4294967288UL,4294967289UL}, {0xEA48L,-1L,-1L,0x269E5A54L,0xA1689FA0L}, {1UL,0x45D8A37DDA709588LL,-5L,4294967295UL,0UL}}, {{0x9A9FL,0x3F57EACDEB8F7A2ELL,0x85L,0UL,0x5881E825L}, {6UL,0xE634FCB804B9B014LL,3L,1UL,0UL}, {0xD9A4L,2L,0xFCL,4294967288UL,4294967289UL}, {0xEA48L,-1L,-1L,0x269E5A54L,0xA1689FA0L}, {1UL,0x45D8A37DDA709588LL,-5L,4294967295UL,0UL}}, {{0x9A9FL,0x3F57EACDEB8F7A2ELL,0x85L,0UL,0x5881E825L}, {6UL,0xE634FCB804B9B014LL,3L,1UL,0UL}, {0xD9A4L,2L,0xFCL,4294967288UL,4294967289UL}, {0xEA48L,-1L,-1L,0x269E5A54L,0xA1689FA0L}, {1UL,0x45D8A37DDA709588LL,-5L,4294967295UL,0UL}}, {{0x9A9FL,0x3F57EACDEB8F7A2ELL,0x85L,0UL,0x5881E825L}, {6UL,0xE634FCB804B9B014LL,3L,1UL,0UL}, {0xD9A4L,2L,0xFCL,4294967288UL,4294967289UL}, {0xEA48L,-1L,-1L,0x269E5A54L,0xA1689FA0L}, {1UL,0x45D8A37DDA709588LL,-5L,4294967295UL,0UL}}, {{0x9A9FL,0x3F57EACDEB8F7A2ELL,0x85L,0UL,0x5881E825L}, {6UL,0xE634FCB804B9B014LL,3L,1UL,0UL}, {0xD9A4L,2L,0xFCL,4294967288UL,4294967289UL}, {0xEA48L,-1L,-1L,0x269E5A54L,0xA1689FA0L}, {1UL,0x45D8A37DDA709588LL,-5L,4294967295UL,0UL}}, {{0x9A9FL,0x3F57EACDEB8F7A2ELL,0x85L,0UL,0x5881E825L}, {6UL,0xE634FCB804B9B014LL,3L,1UL,0UL}, {0xD9A4L,2L,0xFCL,4294967288UL,4294967289UL}, {0xEA48L,-1L,-1L,0x269E5A54L,0xA1689FA0L}, {1UL,0x45D8A37DDA709588LL,-5L,4294967295UL,0UL}}, {{0x9A9FL,0x3F57EACDEB8F7A2ELL,0x85L,0UL,0x5881E825L}, {6UL,0xE634FCB804B9B014LL,3L,1UL,0UL}, {0xD9A4L,2L,0xFCL,4294967288UL,4294967289UL}, {0xEA48L,-1L,-1L,0x269E5A54L,0xA1689FA0L}, {1UL,0x45D8A37DDA709588LL,-5L,4294967295UL,0UL}}, {{0x9A9FL,0x3F57EACDEB8F7A2ELL,0x85L,0UL,0x5881E825L}, {6UL,0xE634FCB804B9B014LL,3L,1UL,0UL}, {0xD9A4L,2L,0xFCL,4294967288UL,4294967289UL}, {0xEA48L,-1L,-1L,0x269E5A54L,0xA1689FA0L}, {1UL,0x45D8A37DDA709588LL,-5L,4294967295UL,0UL}}, {{0x9A9FL,0x3F57EACDEB8F7A2ELL,0x85L,0UL,0x5881E825L}, {6UL,0xE634FCB804B9B014LL,3L,1UL,0UL}, {0xD9A4L,2L,0xFCL,4294967288UL,4294967289UL}, {0xEA48L,-1L,-1L,0x269E5A54L,0xA1689FA0L}, {1UL,0x45D8A37DDA709588LL,-5L,4294967295UL,0UL}}}, {{{0x9A9FL,0x3F57EACDEB8F7A2ELL,0x85L,0UL,0x5881E825L}, {6UL,0xE634FCB804B9B014LL,3L,1UL,0UL}, {0xD9A4L,2L,0xFCL,4294967288UL,4294967289UL}, {0xEA48L,-1L,-1L,0x269E5A54L,0xA1689FA0L}, {1UL,0x45D8A37DDA709588LL,-5L,4294967295UL,0UL}}, {{0x9A9FL,0x3F57EACDEB8F7A2ELL,0x85L,0UL,0x5881E825L}, {6UL,0xE634FCB804B9B014LL,3L,1UL,0UL}, {0xD9A4L,2L,0xFCL,4294967288UL,4294967289UL}, {0xEA48L,-1L,-1L,0x269E5A54L,0xA1689FA0L}, {1UL,0x45D8A37DDA709588LL,-5L,4294967295UL,0UL}}, {{0x9A9FL,0x3F57EACDEB8F7A2ELL,0x85L,0UL,0x5881E825L}, {6UL,0xE634FCB804B9B014LL,3L,1UL,0UL}, {0xD9A4L,2L,0xFCL,4294967288UL,4294967289UL}, {0xEA48L,-1L,-1L,0x269E5A54L,0xA1689FA0L}, {1UL,0x45D8A37DDA709588LL,-5L,4294967295UL,0UL}}, {{0x9A9FL,0x3F57EACDEB8F7A2ELL,0x85L,0UL,0x5881E825L}, {6UL,0xE634FCB804B9B014LL,3L,1UL,0UL}, {0xD9A4L,2L,0xFCL,4294967288UL,4294967289UL}, {0xEA48L,-1L,-1L,0x269E5A54L,0xA1689FA0L}, {1UL,0x45D8A37DDA709588LL,-5L,4294967295UL,0UL}}, {{0x9A9FL,0x3F57EACDEB8F7A2ELL,0x85L,0UL,0x5881E825L}, {6UL,0xE634FCB804B9B014LL,3L,1UL,0UL}, {0xD9A4L,2L,0xFCL,4294967288UL,4294967289UL}, {0xEA48L,-1L,-1L,0x269E5A54L,0xA1689FA0L}, {1UL,0x45D8A37DDA709588LL,-5L,4294967295UL,0UL}}, {{0x9A9FL,0x3F57EACDEB8F7A2ELL,0x85L,0UL,0x5881E825L}, {6UL,0xE634FCB804B9B014LL,3L,1UL,0UL}, {0xD9A4L,2L,0xFCL,4294967288UL,4294967289UL}, {0xEA48L,-1L,-1L,0x269E5A54L,0xA1689FA0L}, {1UL,0x45D8A37DDA709588LL,-5L,4294967295UL,0UL}}, {{0x9A9FL,0x3F57EACDEB8F7A2ELL,0x85L,0UL,0x5881E825L}, {6UL,0xE634FCB804B9B014LL,3L,1UL,0UL}, {0xD9A4L,2L,0xFCL,4294967288UL,4294967289UL}, {0xEA48L,-1L,-1L,0x269E5A54L,0xA1689FA0L}, {1UL,0x45D8A37DDA709588LL,-5L,4294967295UL,0UL}}, {{0x9A9FL,0x3F57EACDEB8F7A2ELL,0x85L,0UL,0x5881E825L}, {6UL,0xE634FCB804B9B014LL,3L,1UL,0UL}, {0xD9A4L,2L,0xFCL,4294967288UL,4294967289UL}, {0xEA48L,-1L,-1L,0x269E5A54L,0xA1689FA0L}, {1UL,0x45D8A37DDA709588LL,-5L,4294967295UL,0UL}}, {{0x9A9FL,0x3F57EACDEB8F7A2ELL,0x85L,0UL,0x5881E825L}, {6UL,0xE634FCB804B9B014LL,3L,1UL,0UL}, {0xD9A4L,2L,0xFCL,4294967288UL,4294967289UL}, {0xEA48L,-1L,-1L,0x269E5A54L,0xA1689FA0L}, {1UL,0x45D8A37DDA709588LL,-5L,4294967295UL,0UL}}}};
                int i, j, k;
                (*l_385) = l_535[1][2][2];
            }
            else
            {
                struct S0 **l_546 = &l_385;
                int32_t l_558 = 4L;
                (*l_487) = (((g_80[0][1][0].f0 | (((((safe_lshift_func_int16_t_s_s((safe_mod_func_uint64_t_u_u((g_80[0][1][0].f1 != (safe_mod_func_uint64_t_u_u((safe_mod_func_int16_t_s_s((safe_mod_func_int16_t_s_s((p_11 != (l_546 == (void*)0)), (safe_lshift_func_int8_t_s_s((+g_239), ((safe_div_func_uint32_t_u_u((safe_add_func_int64_t_s_s((-9L), (safe_sub_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((-1L), (g_317[4] > g_239))), 0x9AL)))), 0xA66C8E15L)) || l_558))))), p_10)), 0x7DB6F22ECC8F2F15LL))), 6L)), l_558)) < l_484) & p_9) == p_9) & p_10)) == l_494) | p_11);
            }
            for (p_9 = 0; (p_9 <= 2); p_9 += 1)
            {
                int32_t *l_566[2][9][2] = {{{&g_41, &l_403}, {&g_41, &l_403}, {&g_41, &l_403}, {&g_41, &l_403}, {&g_41, &l_403}, {&g_41, &l_403}, {&g_41, &l_403}, {&g_41, &l_403}, {&g_41, &l_403}}, {{&g_41, &l_403}, {&g_41, &l_403}, {&g_41, &l_403}, {&g_41, &l_403}, {&g_41, &l_403}, {&g_41, &l_403}, {&g_41, &l_403}, {&g_41, &l_403}, {&g_41, &l_403}}};
                struct S0 ****l_567 = (void*)0;
                int32_t *l_588 = &g_41;
                int i, j, k;
                (**g_159) = func_45(p_11, l_515, func_45(p_11, l_515, func_45((safe_sub_func_uint64_t_u_u((safe_div_func_int64_t_s_s((((((+g_80[0][1][0].f3) ^ (safe_add_func_uint32_t_u_u(4294967295UL, 4294967295UL))) <= g_80[0][1][0].f1) ^ (g_80[0][1][0].f4 & g_12)) < p_10), (*l_487))), p_8)), &l_403, l_566[0][3][0])));
                if (((((void*)0 != l_567) & (safe_div_func_uint8_t_u_u((safe_div_func_int32_t_s_s((+2L), (g_317[4] | (~(((g_317[2] && (~(safe_div_func_int64_t_s_s(0x2F575AABA56B32E0LL, (safe_sub_func_uint64_t_u_u(p_11, (((safe_lshift_func_int8_t_s_s(((((safe_rshift_func_int16_t_s_u(((safe_sub_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s((p_9 | (p_9 && 1L)), g_80[0][1][0].f1)), l_407)) < p_9), 1)) | 4L) != p_8) || 0xC26D6BB762B7A464LL), 5)) == p_9) || g_317[6]))))))) && (*l_487)) != (*l_487)))))), 0xCFL))) == g_80[0][1][0].f2))
                {
                    int32_t *l_587 = (void*)0;
                    (**g_159) = func_45(l_516[2], l_587, l_588);
                }
                else
                {
                    (***l_489) = func_38(g_589);
                }
                for (l_473 = 0; (l_473 <= 2); l_473 += 1)
                {
                    int32_t *l_590 = &l_403;
                    (*g_138) = l_590;
                    for (l_494 = 0; (l_494 <= 2); l_494 += 1)
                    {
                        (*l_588) = ((*l_590) & (0UL & p_9));
                        return p_8;
                    }
                    (*g_138) = l_566[1][8][0];
                }
                for (g_239 = 0; (g_239 <= 2); g_239 += 1)
                {
                    (*l_487) = (g_80[0][1][0].f0 > ((((*g_400) != (void*)0) & l_407) > p_10));
                    return p_9;
                }
                for (p_8 = 0; (p_8 <= 2); p_8 += 1)
                {
                    (**g_159) = func_45(l_591, l_566[0][3][0], l_515);
                }
            }
        }
    }
    (*g_138) = &l_403;
    (*g_138) = &l_403;
    return p_9;
}
static int16_t func_13(struct S0 p_14, int8_t p_15, int64_t p_16)
{
    int32_t l_354 = (-8L);
    int32_t ***l_359 = (void*)0;
    uint64_t l_360 = 0xEDA54368FA089E56LL;
    int32_t *l_363 = &l_354;
    struct S0 l_367 = {0x30E9L,0xA36D6CFD9D4A1178LL,0xB0L,0UL,4294967295UL};
    if (((safe_rshift_func_int16_t_s_s(((safe_add_func_int8_t_s_s((((3UL & (~l_354)) & ((l_354 >= (l_354 < ((void*)0 != g_124))) | (safe_div_func_int64_t_s_s(((18446744073709551615UL && (((safe_add_func_uint16_t_u_u(((((void*)0 != l_359) ^ l_360) <= 0xFF2559C4E1FA5839LL), g_168)) == 0x3DC6341F22137369LL) != l_354)) != 0xE0L), p_14.f0)))) < g_80[0][1][0].f3), p_16)) == 0x6B442E5EL), g_80[0][1][0].f1)) < g_317[5]))
    {
        struct S0 *l_361 = &g_80[0][1][0];
        (*l_361) = p_14;
        if (l_360)
            goto lbl_379;
    }
    else
    {
        int32_t *l_362 = &g_41;
        uint32_t l_366 = 4294967291UL;
        (*g_138) = l_362;
        (*g_138) = (void*)0;
        (*g_138) = func_45((p_14.f1 < 1UL), l_363, func_45((safe_add_func_uint32_t_u_u(g_41, (*l_363))), func_45(g_80[0][1][0].f3, func_45((((*l_363) == p_15) | l_366), &g_41, l_362), l_362), &l_354));
        l_367 = p_14;
    }
lbl_379:
    (*l_363) = ((safe_sub_func_uint64_t_u_u(g_12, p_14.f3)) < (0x502A305BL | ((+1UL) >= (safe_mod_func_int8_t_s_s(p_14.f0, (+(safe_lshift_func_int8_t_s_s((*l_363), (!(65534UL < g_80[0][1][0].f4))))))))));
    (*g_138) = &l_354;
    (*l_363) = (safe_rshift_func_uint16_t_u_s(g_41, 0));
    return p_14.f4;
}
static int8_t func_18(int8_t p_19, uint64_t p_20, uint16_t p_21, uint16_t p_22, uint8_t p_23)
{
    struct S0 ****l_344 = &g_124;
    struct S0 ****l_345 = &g_124;
    int32_t **l_346[4][2][6] = {{{&g_139[0], &g_139[0], &g_139[0], &g_139[0], &g_139[0], &g_139[0]}, {&g_139[0], &g_139[0], &g_139[0], &g_139[0], &g_139[0], &g_139[0]}}, {{&g_139[0], &g_139[0], &g_139[0], &g_139[0], &g_139[0], &g_139[0]}, {&g_139[0], &g_139[0], &g_139[0], &g_139[0], &g_139[0], &g_139[0]}}, {{&g_139[0], &g_139[0], &g_139[0], &g_139[0], &g_139[0], &g_139[0]}, {&g_139[0], &g_139[0], &g_139[0], &g_139[0], &g_139[0], &g_139[0]}}, {{&g_139[0], &g_139[0], &g_139[0], &g_139[0], &g_139[0], &g_139[0]}, {&g_139[0], &g_139[0], &g_139[0], &g_139[0], &g_139[0], &g_139[0]}}};
    int i, j, k;
    if ((((l_344 == (void*)0) == ((((void*)0 == l_345) >= (0x48E0L || (((l_346[3][0][1] == l_346[2][0][0]) == 1L) != (!g_12)))) >= g_12)) == g_317[3]))
    {
        int32_t l_348 = 0xE12FE5C7L;
        return l_348;
    }
    else
    {
        return g_317[7];
    }
}
inline static int16_t func_35(struct S0 p_36, uint16_t p_37)
{
    int32_t *l_55 = (void*)0;
    int32_t **l_54 = &l_55;
    uint8_t l_82 = 0x8DL;
    uint16_t l_166 = 0xD84FL;
    int32_t *l_343 = &g_41;
    (*l_54) = func_45((func_49(l_54, (func_56(p_36.f4, (safe_lshift_func_int8_t_s_s((!g_41), ((safe_mod_func_int16_t_s_s((safe_add_func_int8_t_s_s((((safe_rshift_func_uint8_t_u_s((func_70(&l_55, &g_41, g_12, (0x37461BCFL || ((safe_div_func_int32_t_s_s((g_41 > p_36.f3), g_12)) != 0x29L))) ^ p_36.f3), g_12)) == p_36.f4) == l_82), g_41)), p_36.f1)) >= g_41))), p_36.f2, g_41) || l_166), (*l_54), p_36.f3) == p_37), (*l_54), (*l_54));
    (*l_343) = 1L;
    (*g_138) = (*l_54);
    return g_80[0][1][0].f1;
}
inline static struct S0 func_38(int16_t p_39)
{
    int32_t *l_40 = &g_41;
    int32_t **l_42[5];
    int32_t *l_43 = &g_41;
    struct S0 l_44 = {65528UL,9L,0x09L,0x7736EAE1L,0x771B7056L};
    int i;
    for (i = 0; i < 5; i++)
        l_42[i] = &l_40;
    l_43 = l_40;
    return l_44;
}
static int32_t * func_45(uint64_t p_46, int32_t * p_47, int32_t * p_48)
{
    struct S0 *l_332 = &g_80[2][3][4];
    struct S0 **l_331 = &l_332;
    int32_t l_333 = 0L;
    int16_t l_341 = 0x9B8BL;
    uint16_t l_342 = 0xBDB9L;
    l_342 = ((((g_317[4] < (((safe_add_func_uint64_t_u_u((safe_div_func_int32_t_s_s((p_46 & (((safe_lshift_func_int8_t_s_s(((0xECA8A1A8L <= (0xFB6A515971137CEDLL || (~((safe_div_func_uint32_t_u_u((safe_add_func_uint64_t_u_u((0x23L || (((void*)0 == l_331) || l_333)), (((safe_rshift_func_int16_t_s_u(((((safe_lshift_func_int16_t_s_u((safe_div_func_int32_t_s_s(((+(p_46 ^ 0x7B7E35E3FC0619C7LL)) != p_46), 4294967294UL)), 13)) ^ (-8L)) < l_333) > l_341), g_80[0][1][0].f1)) == l_333) < g_80[0][1][0].f0))), l_333)) > p_46)))) ^ l_341), l_341)) ^ g_12) < 0x11629752L)), l_341)), 0x6593AE95290CF3E1LL)) | g_80[0][1][0].f4) <= 0xBCCBL)) == l_333) <= 0x41395B5183514E3ELL) & l_341);
    return p_48;
}
inline static int32_t func_49(int32_t ** p_50, int16_t p_51, int32_t * p_52, uint32_t p_53)
{
    int32_t l_167 = (-1L);
    struct S0 l_170 = {0UL,0x2737E1BAF48159CCLL,0L,0UL,4294967292UL};
    uint32_t l_195 = 0x0D1F882EL;
    int32_t l_232 = 0xA83E9DA6L;
    struct S0 l_269 = {65532UL,0xEA158747C4E963F5LL,2L,0UL,0x1EEE7737L};
    struct S0 ****l_304 = &g_124;
    l_167 = (-1L);
    return l_269.f3;
}
static uint16_t func_56(int32_t p_57, int32_t p_58, int16_t p_59, uint16_t p_60)
{
    int32_t l_87 = 0L;
    int32_t **l_142[6] = {&g_139[0], &g_139[0], &g_139[0], &g_139[0], &g_139[0], &g_139[0]};
    struct S0 *l_152 = &g_80[0][0][4];
    int i;
    for (p_59 = 25; (p_59 == 1); p_59--)
    {
        int32_t *l_85 = &g_41;
        int32_t **l_86 = &l_85;
        struct S0 *l_127[10][2] = {{&g_80[1][3][0], &g_80[0][1][0]}, {&g_80[1][3][0], &g_80[0][1][0]}, {&g_80[1][3][0], &g_80[0][1][0]}, {&g_80[1][3][0], &g_80[0][1][0]}, {&g_80[1][3][0], &g_80[0][1][0]}, {&g_80[1][3][0], &g_80[0][1][0]}, {&g_80[1][3][0], &g_80[0][1][0]}, {&g_80[1][3][0], &g_80[0][1][0]}, {&g_80[1][3][0], &g_80[0][1][0]}, {&g_80[1][3][0], &g_80[0][1][0]}};
        struct S0 **l_126 = &l_127[4][1];
        struct S0 ***l_125 = &l_126;
        int i, j;
        (*l_86) = l_85;
        if (l_87)
            continue;
        for (l_87 = 0; (l_87 <= 2); l_87 += 1)
        {
            uint8_t l_122 = 0xC1L;
            int32_t *l_133 = &l_87;
            for (g_41 = 2; (g_41 >= 0); g_41 -= 1)
            {
                struct S0 *l_89[7] = {&g_80[0][1][0], &g_80[1][4][1], &g_80[0][1][0], &g_80[1][4][1], &g_80[0][1][0], &g_80[1][4][1], &g_80[0][1][0]};
                struct S0 **l_88[5][4] = {{&l_89[6], &l_89[2], &l_89[6], &l_89[2]}, {&l_89[6], &l_89[2], &l_89[6], &l_89[2]}, {&l_89[6], &l_89[2], &l_89[6], &l_89[2]}, {&l_89[6], &l_89[2], &l_89[6], &l_89[2]}, {&l_89[6], &l_89[2], &l_89[6], &l_89[2]}};
                struct S0 ***l_90 = &l_88[4][0];
                uint8_t l_107 = 0x27L;
                int i, j;
                (*l_90) = l_88[1][3];
                for (p_57 = 2; (p_57 >= 0); p_57 -= 1)
                {
                    int32_t **l_110 = &l_85;
                    (*l_86) = &p_58;
                    if ((safe_mod_func_uint32_t_u_u(0xA31763EEL, ((safe_add_func_int64_t_s_s((!((((+g_80[0][1][0].f0) != p_58) || 0xF6L) | (safe_div_func_int16_t_s_s(g_41, ((g_41 < (((safe_div_func_int32_t_s_s((((void*)0 == &g_80[0][1][0]) & (!(safe_mod_func_uint32_t_u_u(((((safe_sub_func_uint8_t_u_u((+(*l_85)), l_87)) ^ g_41) > g_80[0][1][0].f1) >= l_107), 4294967295UL)))), l_107)) & g_12) && 0x10L)) & 0xBFL))))), (-7L))) | p_57))))
                    {
                        int32_t l_123 = (-4L);
                        (**l_110) = (p_58 ^ ((safe_add_func_int64_t_s_s(((l_110 != l_110) | (((0x356B4AE7L == ((+(safe_add_func_int16_t_s_s(g_12, (((safe_lshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_u((safe_rshift_func_int16_t_s_s(((((-1L) == (((l_122 ^ (l_87 != ((((&g_80[2][5][5] == (void*)0) < p_59) != (*l_85)) > g_80[0][1][0].f3))) ^ 0x89L) < p_57)) != g_12) <= p_60), 13)), 3)), 2)) <= g_80[0][1][0].f0) >= (-1L))))) >= g_12)) <= p_59) == l_123)), g_12)) <= g_80[0][1][0].f0));
                    }
                    else
                    {
                        (*l_86) = &g_41;
                        if (l_122)
                            break;
                    }
                    if (g_80[0][1][0].f2)
                        break;
                    if ((&p_58 != &g_41))
                    {
                        return p_60;
                    }
                    else
                    {
                        return p_60;
                    }
                }
                l_125 = g_124;
            }
            for (p_58 = 2; (p_58 >= 0); p_58 -= 1)
            {
                uint16_t l_132 = 65528UL;
                if ((safe_sub_func_uint32_t_u_u((safe_mod_func_int8_t_s_s((-1L), l_132)), p_58)))
                {
                    int i, j, k;
                    for (p_60 = 0; (p_60 <= 2); p_60 += 1)
                    {
                        (*l_86) = l_133;
                        (*l_86) = &p_58;
                    }
                    g_80[p_58][(l_87 + 5)][(l_87 + 3)] = g_80[0][1][0];
                    (*l_86) = &l_87;
                }
                else
                {
                    for (p_60 = 0; (p_60 == 45); p_60++)
                    {
                        (*l_86) = (void*)0;
                        return g_80[0][1][0].f2;
                    }
                    (*l_86) = (*l_86);
                    if (g_80[0][1][0].f0)
                        break;
                }
            }
        }
    }
    for (p_60 = 0; (p_60 <= 2); p_60 += 1)
    {
        int32_t **l_143[6] = {&g_139[0], &g_139[0], &g_139[0], &g_139[0], &g_139[0], &g_139[0]};
        uint32_t l_155[9];
        uint16_t l_157 = 8UL;
        struct S0 *l_160 = &g_80[0][1][0];
        int16_t l_165 = 1L;
        int i;
        for (i = 0; i < 9; i++)
            l_155[i] = 4294967295UL;
        if (((g_12 && (safe_sub_func_uint8_t_u_u(((void*)0 == g_138), (safe_div_func_int8_t_s_s((l_142[1] != l_143[0]), (safe_div_func_uint32_t_u_u((((((safe_sub_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_u((((((void*)0 != l_152) > (safe_mod_func_int16_t_s_s(l_155[0], (+g_80[0][1][0].f3)))) <= p_57) || p_57), g_80[0][1][0].f0)), 10)) < g_41), g_80[0][1][0].f1)) >= 0L) != 18446744073709551615UL) ^ g_80[0][1][0].f1) & 0xEEL), l_157))))))) > p_58))
        {
            return p_60;
        }
        else
        {
            int32_t ***l_158 = &l_143[2];
            g_159 = l_158;
            if (p_60)
                continue;
            (**l_158) = (**g_159);
            (**g_138) = (l_160 != l_160);
        }
        (*g_138) = &p_58;
        (**g_138) = (safe_sub_func_uint16_t_u_u(((((p_58 && p_60) | (p_57 <= 4294967295UL)) == g_80[0][1][0].f2) == 1UL), (g_80[0][1][0].f1 | (safe_add_func_int64_t_s_s(((*g_138) != (*g_138)), l_165)))));
        for (p_57 = 0; p_57 < 3; p_57 += 1)
        {
            for (l_165 = 0; l_165 < 8; l_165 += 1)
            {
                for (p_59 = 0; p_59 < 6; p_59 += 1)
                {
                    struct S0 tmp = {0x354FL,0L,0L,4294967294UL,2UL};
                    g_80[p_57][l_165][p_59] = tmp;
                }
            }
        }
        for (p_58 = 2; (p_58 >= 0); p_58 -= 1)
        {
            (**g_159) = (**g_159);
            for (g_41 = 0; (g_41 <= 2); g_41 += 1)
            {
                return p_59;
            }
        }
    }
    (*g_138) = &p_58;
    return p_59;
}
static uint16_t func_70(int32_t ** p_71, int32_t * p_72, uint64_t p_73, int16_t p_74)
{
    struct S0 *l_77 = (void*)0;
    struct S0 *l_78 = (void*)0;
    struct S0 *l_79 = &g_80[0][1][0];
    int32_t l_81 = 0xE22A4178L;
    (*l_79) = func_38(p_73);
    return l_81;
}
int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_12;
    csmith_sink_ = g_41;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 6; k++)
            {
            }
        }
    }
    csmith_sink_ = g_168;
    csmith_sink_ = g_239;
    for (i = 0; i < 8; i++)
    {
        csmith_sink_ = g_317[i];
    }
    csmith_sink_ = g_514;
    csmith_sink_ = g_589;
    platform_main_end(0,0);
    return 0;
}
