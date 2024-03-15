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
   uint32_t f0;
   uint32_t f1;
   int8_t f2;
   int32_t f3;
   uint16_t f4;
};
struct S1 {
   uint8_t f0;
   uint32_t f1;
   int8_t f2;
   struct S0 f3;
   int16_t f4;
};
struct S2 {
   struct S0 f0;
};
static int32_t g_3 = 0x63126FF2;
static uint32_t g_66 = 4294967295U;
static uint32_t g_109 = 0x58F1AF85;
static int8_t g_111[9][2] = {{0x43, 0x43}, {0x43, 0x43}, {0x43, 0x43}, {0x43, 0x43}, {0x43, 0x43}, {0x43, 0x43}, {0x43, 0x43}, {0x43, 0x43}, {0x43, 0x43}};
static int32_t g_112 = 0xFA7FFF35;
static int8_t g_113 = 0;
static struct S1 g_118 = {251U,0xE82D738A,1,{0x47660C92,0x9130DA5F,0x2B,-6,0xFF41},-4};
static int32_t g_128 = 0x061D97AA;
static int32_t g_172 = 0xFC91578A;
static struct S2 g_226 = {{0x1842AC9B,4294967295U,0,0x2626586A,0x6762}};
static int8_t g_279 = 0;
static uint8_t g_303[8] = {0U, 0U, 0x73, 0U, 0U, 0x73, 0U, 0U};
static int32_t g_307 = 0xC3D0FC66;
static int8_t g_617 = 0x79;
static int16_t g_662 = 0xA56B;
inline static uint32_t func_1(void);
inline static struct S2 func_4(int32_t p_5, uint16_t p_6, uint8_t p_7, uint16_t p_8, int32_t p_9);
static uint16_t func_16(int32_t p_17, uint32_t p_18, uint32_t p_19);
inline static struct S2 func_20(uint8_t p_21);
inline static uint16_t func_34(int8_t p_35, int8_t p_36);
inline static struct S2 func_39(uint32_t p_40, int32_t p_41);
static uint8_t func_44(int32_t p_45, uint32_t p_46, uint16_t p_47);
static uint32_t func_50(int16_t p_51, int32_t p_52, uint32_t p_53, int32_t p_54);
static struct S0 func_57(int16_t p_58);
inline static int32_t func_59(uint32_t p_60, uint32_t p_61, int32_t p_62, uint16_t p_63, uint16_t p_64);
inline static uint32_t func_1(void)
{
    uint32_t l_2[6];
    struct S0 l_631 = {4294967295U,0xBC958F3F,0xE4,0,3U};
    int32_t l_637 = 0;
    int32_t l_673[5][4];
    uint16_t l_674 = 0x28D6;
    int i, j;
    for (i = 0; i < 6; i++)
        l_2[i] = 4294967286U;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
            l_673[i][j] = (-1);
    }
    for (g_3 = 5; (g_3 >= 1); g_3 -= 1)
    {
        int32_t l_14 = (-3);
        int32_t l_15 = 0;
        int8_t l_636 = 0;
        struct S2 l_648 = {{4294967290U,4294967291U,0xBC,0x67712ECB,0x477E}};
        int i;
        l_648 = func_4(l_2[g_3], l_2[g_3], (g_303[1] = ((((safe_mul_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(((l_15 = (l_14 = l_2[g_3])) >= func_16(((l_637 = ((((func_20((l_2[g_3] >= 0x477AE271)) , (((g_617 = ((l_2[g_3] , ((safe_unary_minus_func_int16_t_s((safe_add_func_uint8_t_u_u((((l_631 , ((safe_mod_func_uint8_t_u_u((g_118.f0 = ((safe_mod_func_int8_t_s_s(l_631.f0, g_118.f0)) || l_2[g_3])), (-6))) & g_3)) <= 9) != g_226.f0.f3), 0x5E)))) , 1U)) != g_279)) != 9) , g_226.f0.f2)) >= l_636) , l_631.f0) || g_113)) | 0xE8B0EA1C), g_3, g_118.f2)), 0xE33E)), 4)) || l_2[g_3]) > g_3) ^ g_118.f2)), l_2[g_3], l_2[g_3]);
    }
    l_673[2][1] = ((safe_div_func_int32_t_s_s((safe_unary_minus_func_int32_t_s(g_226.f0.f3)), 0x0065254F)) , (((safe_add_func_uint32_t_u_u((safe_sub_func_int32_t_s_s(0x8007F804, ((safe_add_func_uint8_t_u_u((!((+l_631.f4) == ((safe_div_func_int16_t_s_s(g_662, (((safe_mod_func_uint32_t_u_u((l_631.f3 == (safe_add_func_int8_t_s_s((l_637 = (safe_rshift_func_int16_t_s_s((((safe_unary_minus_func_uint32_t_u((safe_lshift_func_uint16_t_u_u(((!(g_662 ^ (l_631.f2 || (l_637 == g_112)))) && 0x9417D865), 3)))) , l_631.f2) | 0x6D6B), 7))), 6))), l_673[3][3])) >= 0x4C51FBAE) || g_226.f0.f4))) <= g_128))), g_118.f2)) & l_631.f4))), 4294967286U)) > l_674) || 0x816420FF));
    l_637 = l_674;
    return g_226.f0.f1;
}
inline static struct S2 func_4(int32_t p_5, uint16_t p_6, uint8_t p_7, uint16_t p_8, int32_t p_9)
{
    struct S1 l_639 = {0x95,0x239C461F,0x06,{0xE08858FF,4294967295U,0xE6,0,0x694A},0x5DA6};
    int16_t l_647 = 0x14B4;
    l_639 = l_639;
    l_647 = (p_6 == ((((g_226 , 0) != ((g_118 = g_118) , (((safe_mul_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((!l_639.f1), ((((safe_unary_minus_func_uint16_t_u((safe_unary_minus_func_uint16_t_u((0x69DD57C6 & 0xCF83B5D3))))) != (l_639 , (((p_8 | 0U) != (-1)) | p_5))) , l_639.f3.f0) | p_6))), p_7)) || 5U) | l_639.f3.f0))) | g_279) | (-8)));
    return g_226;
}
static uint16_t func_16(int32_t p_17, uint32_t p_18, uint32_t p_19)
{
    int32_t l_638 = 0xA8C2080D;
    l_638 = g_3;
    return g_303[0];
}
inline static struct S2 func_20(uint8_t p_21)
{
    int16_t l_520 = 6;
    int32_t l_556 = 0x4B3E79E4;
    int32_t l_557 = (-1);
    uint32_t l_622 = 5U;
    struct S2 l_627 = {{0xC4B697E6,0xD3EA2A0F,5,7,1U}};
    for (p_21 = 0; (p_21 < 35); p_21 = safe_add_func_uint8_t_u_u(p_21, 4))
    {
        uint32_t l_521 = 4294967286U;
        int32_t l_560[6];
        int32_t l_561 = 0x264F0687;
        int32_t l_562 = 0x2E80AA86;
        struct S0 l_565 = {4294967292U,1U,3,0xF6AA859A,0xD3F5};
        int32_t l_624 = 1;
        int i;
        for (i = 0; i < 6; i++)
            l_560[i] = (-6);
        if ((safe_mod_func_uint16_t_u_u(1U, (safe_lshift_func_uint16_t_u_u(g_3, (((safe_div_func_int32_t_s_s((safe_mod_func_uint32_t_u_u(((l_562 = (l_561 = (safe_mod_func_uint16_t_u_u(0x30B1, (l_560[4] = func_34(((l_557 = ((l_556 = ((p_21 & ((func_39(((((safe_rshift_func_uint8_t_u_s(func_44(((safe_add_func_uint32_t_u_u(func_50(p_21, g_3, (safe_mod_func_int8_t_s_s((l_520 = (func_57(g_3) , 1)), l_521)), g_118.f2), l_521)) , 1), g_3, p_21), 4)) ^ l_556) || 0xC6) < 2), g_3) , 0x5250DB64) <= g_3)) ^ 0x93B1CDB3)) & (-1))) || (-3)), l_521)))))) > l_521), g_118.f2)), 0x54AD4844)) ^ 3) && l_560[4]))))))
        {
            g_112 = l_562;
        }
        else
        {
            uint16_t l_573[7] = {65535U, 65535U, 0xDB5E, 65535U, 65535U, 0xDB5E, 65535U};
            struct S2 l_575 = {{0xDE999B76,4294967291U,-2,0x14DF5019,65526U}};
            int32_t l_623 = 0x53552CA9;
            int32_t l_625 = 1;
            int32_t l_626 = 1;
            int i;
            l_557 = (g_172 = (safe_mul_func_uint8_t_u_u((l_565 , (safe_lshift_func_uint16_t_u_u(g_226.f0.f1, 4))), ((~(((safe_sub_func_uint32_t_u_u((g_226.f0 , ((safe_add_func_uint32_t_u_u(g_118.f3.f1, ((((l_573[0] > (l_573[0] ^ ((((~g_226.f0.f2) >= l_520) >= 0xA7) , g_109))) < p_21) != g_66) > p_21))) && 65532U)), 4)) > p_21) , l_565.f3)) > 1))));
            g_226 = l_575;
            l_557 = (safe_mod_func_uint32_t_u_u(0xC19B957F, (g_226.f0.f1 | ((((l_560[4] < (safe_sub_func_uint32_t_u_u((safe_mod_func_int32_t_s_s((safe_mod_func_uint8_t_u_u(g_113, (0xB00E & ((safe_add_func_int16_t_s_s((safe_add_func_int16_t_s_s((l_565 , ((safe_add_func_uint32_t_u_u(g_226.f0.f4, (safe_rshift_func_uint16_t_u_s((~((safe_mul_func_int8_t_s_s((~((l_565.f4 ^ g_118.f2) , 0x3258)), 0x69)) , 0xA7FE)), g_118.f3.f4)))) && g_118.f3.f2)), 0xD642)), 1U)) > 0x88)))), 6U)), l_520))) , g_109) && p_21) != g_118.f1))));
            l_626 = ((safe_lshift_func_int16_t_s_s((((((l_625 = ((l_556 = (~((((+((safe_unary_minus_func_uint32_t_u(((safe_rshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint16_t_u_s((l_623 = (safe_lshift_func_int8_t_s_s((0U != ((safe_lshift_func_uint16_t_u_s(((safe_rshift_func_uint8_t_u_s(((((safe_lshift_func_uint8_t_u_s(g_617, l_575.f0.f2)) && ((-9) == (g_226.f0.f4 && (safe_sub_func_uint16_t_u_u(p_21, (0xACDE >= ((l_573[2] ^ (safe_rshift_func_int8_t_s_u((l_557 = (-1)), p_21))) ^ p_21))))))) | g_226.f0.f4) , l_557), g_617)) | 1), g_118.f1)) >= l_622)), 3))), 3)), l_565.f2)), g_118.f3.f3)) <= 65533U))) , 0U)) ^ 0xC6) & 0xE69DEA82) != 1U))) > l_624)) || 0x64) , l_624) || p_21) & 4294967295U), 6)) > 65532U);
        }
        return l_627;
    }
    return l_627;
}
inline static uint16_t func_34(int8_t p_35, int8_t p_36)
{
    struct S0 l_558 = {0x2121FF85,4294967287U,0x3C,-5,0xE9E2};
    int32_t l_559 = 0x87671A74;
    l_558 = l_558;
    l_559 = p_36;
    return l_558.f0;
}
inline static struct S2 func_39(uint32_t p_40, int32_t p_41)
{
    return g_226;
}
static uint8_t func_44(int32_t p_45, uint32_t p_46, uint16_t p_47)
{
    struct S0 l_538[4] = {{4294967295U,5U,0x2B,0,0xA51B}, {4294967288U,8U,0,5,0x5A80}, {4294967295U,5U,0x2B,0,0xA51B}, {4294967288U,8U,0,5,0x5A80}};
    int32_t l_545[1][10][5] = {{{0x91CCB318, 0x3D4229B6, (-1), 0x3D4229B6, 0x91CCB318}, {0x91CCB318, 0x3D4229B6, (-1), 0x3D4229B6, 0x91CCB318}, {0x91CCB318, 0x3D4229B6, (-1), 0x3D4229B6, 0x91CCB318}, {0x91CCB318, 0x3D4229B6, (-1), 0x3D4229B6, 0x91CCB318}, {0x91CCB318, 0x3D4229B6, (-1), 0x3D4229B6, 0x91CCB318}, {0x91CCB318, 0x3D4229B6, (-1), 0x3D4229B6, 0x91CCB318}, {0x91CCB318, 0x3D4229B6, (-1), 0x3D4229B6, 0x91CCB318}, {0x91CCB318, 0x3D4229B6, (-1), 0x3D4229B6, 0x91CCB318}, {0x91CCB318, 0x3D4229B6, (-1), 0x3D4229B6, 0x91CCB318}, {0x91CCB318, 0x3D4229B6, (-1), 0x3D4229B6, 0x91CCB318}}};
    uint32_t l_546 = 0x34E4AA5A;
    int32_t l_547 = 0xDCF31961;
    int32_t l_548[6] = {0x7F0320AD, 0x7F0320AD, (-1), 0x7F0320AD, 0x7F0320AD, (-1)};
    struct S2 l_555[8][5] = {{{{4294967295U,0x1FBFD6DC,0,0x1B9C6BC0,0x6521}}, {{4294967295U,0x1FBFD6DC,0,0x1B9C6BC0,0x6521}}, {{4294967295U,0x1FBFD6DC,0,0x1B9C6BC0,0x6521}}, {{4294967295U,0x1FBFD6DC,0,0x1B9C6BC0,0x6521}}, {{4294967295U,0x1FBFD6DC,0,0x1B9C6BC0,0x6521}}}, {{{4294967295U,0x1FBFD6DC,0,0x1B9C6BC0,0x6521}}, {{4294967295U,0x1FBFD6DC,0,0x1B9C6BC0,0x6521}}, {{4294967295U,0x1FBFD6DC,0,0x1B9C6BC0,0x6521}}, {{4294967295U,0x1FBFD6DC,0,0x1B9C6BC0,0x6521}}, {{4294967295U,0x1FBFD6DC,0,0x1B9C6BC0,0x6521}}}, {{{4294967295U,0x1FBFD6DC,0,0x1B9C6BC0,0x6521}}, {{4294967295U,0x1FBFD6DC,0,0x1B9C6BC0,0x6521}}, {{4294967295U,0x1FBFD6DC,0,0x1B9C6BC0,0x6521}}, {{4294967295U,0x1FBFD6DC,0,0x1B9C6BC0,0x6521}}, {{4294967295U,0x1FBFD6DC,0,0x1B9C6BC0,0x6521}}}, {{{4294967295U,0x1FBFD6DC,0,0x1B9C6BC0,0x6521}}, {{4294967295U,0x1FBFD6DC,0,0x1B9C6BC0,0x6521}}, {{4294967295U,0x1FBFD6DC,0,0x1B9C6BC0,0x6521}}, {{4294967295U,0x1FBFD6DC,0,0x1B9C6BC0,0x6521}}, {{4294967295U,0x1FBFD6DC,0,0x1B9C6BC0,0x6521}}}, {{{4294967295U,0x1FBFD6DC,0,0x1B9C6BC0,0x6521}}, {{4294967295U,0x1FBFD6DC,0,0x1B9C6BC0,0x6521}}, {{4294967295U,0x1FBFD6DC,0,0x1B9C6BC0,0x6521}}, {{4294967295U,0x1FBFD6DC,0,0x1B9C6BC0,0x6521}}, {{4294967295U,0x1FBFD6DC,0,0x1B9C6BC0,0x6521}}}, {{{4294967295U,0x1FBFD6DC,0,0x1B9C6BC0,0x6521}}, {{4294967295U,0x1FBFD6DC,0,0x1B9C6BC0,0x6521}}, {{4294967295U,0x1FBFD6DC,0,0x1B9C6BC0,0x6521}}, {{4294967295U,0x1FBFD6DC,0,0x1B9C6BC0,0x6521}}, {{4294967295U,0x1FBFD6DC,0,0x1B9C6BC0,0x6521}}}, {{{4294967295U,0x1FBFD6DC,0,0x1B9C6BC0,0x6521}}, {{4294967295U,0x1FBFD6DC,0,0x1B9C6BC0,0x6521}}, {{4294967295U,0x1FBFD6DC,0,0x1B9C6BC0,0x6521}}, {{4294967295U,0x1FBFD6DC,0,0x1B9C6BC0,0x6521}}, {{4294967295U,0x1FBFD6DC,0,0x1B9C6BC0,0x6521}}}, {{{4294967295U,0x1FBFD6DC,0,0x1B9C6BC0,0x6521}}, {{4294967295U,0x1FBFD6DC,0,0x1B9C6BC0,0x6521}}, {{4294967295U,0x1FBFD6DC,0,0x1B9C6BC0,0x6521}}, {{4294967295U,0x1FBFD6DC,0,0x1B9C6BC0,0x6521}}, {{4294967295U,0x1FBFD6DC,0,0x1B9C6BC0,0x6521}}}};
    int i, j, k;
    l_548[5] = ((l_547 = ((safe_div_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_s(p_45, 6)), ((safe_sub_func_uint8_t_u_u((~((+(safe_lshift_func_int8_t_s_s(((safe_add_func_int32_t_s_s(((((((safe_sub_func_uint8_t_u_u((l_538[1] , (((((((l_545[0][9][2] = ((safe_mul_func_uint8_t_u_u(0xCF, ((l_538[1].f2 >= (safe_rshift_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((func_57((g_118.f3.f1 > p_46)) , 2), g_3)), 0))) > l_538[1].f3))) >= 1)) <= l_538[1].f3) >= g_3) != p_45) >= p_46) == g_3) <= 65535U)), 0x27)) || l_546) == p_47) || p_46) != 9U) && 0xEBB8), 0x3853B71C)) ^ 0), 5))) , p_47)), 0xB2)) , 0xD77D4290))) == p_47)) >= l_538[1].f1);
    l_555[2][2] = ((safe_div_func_uint32_t_u_u(((safe_rshift_func_uint16_t_u_u((l_538[1].f0 == (p_45 || (safe_mul_func_uint32_t_u_u((((g_226.f0.f4 = l_538[1].f3) < 0) || (((l_538[1].f0 != g_172) != p_47) <= 0x3E)), (l_538[1].f0 , 0U))))), 14)) != 0x7A36D73A), 6U)) , g_226);
    return g_118.f3.f0;
}
static uint32_t func_50(int16_t p_51, int32_t p_52, uint32_t p_53, int32_t p_54)
{
    struct S1 l_522 = {1U,0x55A4685B,0x83,{0xD4720638,0xEC1CD976,-1,0x76DC1C52,6U},0x1D86};
    uint32_t l_523 = 0xD6155307;
    l_522 = g_118;
    l_522.f3 = l_522.f3;
    return l_523;
}
static struct S0 func_57(int16_t p_58)
{
    int32_t l_65 = 0x5E5AB8BF;
    int32_t l_411[8] = {0x1843F403, 0x19A541FF, 0x1843F403, 0x19A541FF, 0x1843F403, 0x19A541FF, 0x1843F403, 0x19A541FF};
    int32_t l_431 = (-1);
    struct S2 l_440 = {{4294967295U,4294967291U,-7,0xEDB4FB30,0x97A3}};
    struct S1 l_481[2][4] = {{{0x98,0x9B810DFB,-1,{0x88CF6836,0U,3,5,0x43CF},0x8DED}, {0x01,4294967295U,0xD5,{0x0B8E471C,4294967292U,0x4C,1,3U},-5}, {0x98,0x9B810DFB,-1,{0x88CF6836,0U,3,5,0x43CF},0x8DED}, {0x01,4294967295U,0xD5,{0x0B8E471C,4294967292U,0x4C,1,3U},-5}}, {{0x98,0x9B810DFB,-1,{0x88CF6836,0U,3,5,0x43CF},0x8DED}, {0x01,4294967295U,0xD5,{0x0B8E471C,4294967292U,0x4C,1,3U},-5}, {0x98,0x9B810DFB,-1,{0x88CF6836,0U,3,5,0x43CF},0x8DED}, {0x01,4294967295U,0xD5,{0x0B8E471C,4294967292U,0x4C,1,3U},-5}}};
    int i, j;
    l_411[6] = func_59(p_58, g_3, l_65, g_3, (g_66 = p_58));
    for (g_226.f0.f1 = 0; (g_226.f0.f1 <= 7); g_226.f0.f1 += 1)
    {
        struct S0 l_412 = {4294967291U,0x39541A7B,0,0x68952115,0xF3AB};
        int32_t l_427 = 0;
        int32_t l_441[3][8];
        struct S2 l_442[6] = {{{0x7B47D4C1,4294967288U,-6,1,0x188D}}, {{0x7B47D4C1,4294967288U,-6,1,0x188D}}, {{0x05BE12F4,0xC11021AD,0xA6,0x849B00E6,65535U}}, {{0x7B47D4C1,4294967288U,-6,1,0x188D}}, {{0x7B47D4C1,4294967288U,-6,1,0x188D}}, {{0x05BE12F4,0xC11021AD,0xA6,0x849B00E6,65535U}}};
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 8; j++)
                l_441[i][j] = 0xF2135F33;
        }
        for (g_172 = 0; (g_172 <= 1); g_172 += 1)
        {
            return l_412;
        }
        for (g_118.f3.f1 = 0; (g_118.f3.f1 <= 7); g_118.f3.f1 += 1)
        {
            int8_t l_426[1];
            int i;
            for (i = 0; i < 1; i++)
                l_426[i] = 7;
            for (l_412.f4 = 0; (l_412.f4 <= 1); l_412.f4 += 1)
            {
                int i, j;
                l_427 = (1U ^ (((safe_rshift_func_uint8_t_u_u((((l_411[g_226.f0.f1] = (safe_add_func_int32_t_s_s((safe_rshift_func_int16_t_s_s(((g_303[(l_412.f4 + 2)] != (-1)) < ((g_111[g_226.f0.f1][l_412.f4] ^ (safe_div_func_uint8_t_u_u((!((l_411[g_226.f0.f1] , g_226.f0) , ((safe_add_func_int16_t_s_s((l_411[g_226.f0.f1] , (((0x9DEEEC24 ^ ((safe_sub_func_uint16_t_u_u((0xFD ^ p_58), l_411[g_226.f0.f1])) >= 9)) ^ g_118.f2) >= l_426[0])), l_426[0])) == p_58))), p_58))) ^ l_411[3])), 1)), g_226.f0.f0))) && 1) != 0), g_111[g_226.f0.f1][l_412.f4])) != g_118.f0) || g_113));
                return l_412;
            }
            for (g_307 = 1; (g_307 >= 0); g_307 -= 1)
            {
                uint32_t l_430 = 0xF50C885C;
                int32_t l_439[7];
                int i;
                for (i = 0; i < 7; i++)
                    l_439[i] = 0x2F1295B1;
                l_441[0][4] = ((l_411[1] & (l_431 = (safe_rshift_func_int16_t_s_u(l_430, 1)))) ^ (((safe_mul_func_int16_t_s_s(((l_439[2] = ((p_58 | (safe_mul_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((l_427 = (+p_58)), l_426[0])), l_412.f4))) != l_411[6])) == g_111[1][0]), (l_440 , g_111[2][0]))) >= p_58) >= 4294967295U));
            }
        }
        l_442[0] = l_442[0];
        for (g_118.f3.f2 = 7; (g_118.f3.f2 >= 0); g_118.f3.f2 -= 1)
        {
            int32_t l_443[2][3];
            uint32_t l_450 = 4294967292U;
            uint16_t l_457 = 65535U;
            struct S0 l_489 = {0xF845BFBE,4294967289U,0xA7,0x6B42B074,65526U};
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 3; j++)
                    l_443[i][j] = (-3);
            }
            l_443[0][0] = g_303[g_226.f0.f1];
            for (l_427 = 7; (l_427 >= 1); l_427 -= 1)
            {
                struct S1 l_482 = {0x1A,0x99E74794,-1,{4294967289U,0x521F7CC3,-1,0,1U},0x60D4};
                int32_t l_503 = 0x2BDF2BCA;
                int i;
                if (((safe_lshift_func_uint16_t_u_u((l_457 = (((safe_rshift_func_int8_t_s_s(g_303[g_226.f0.f1], g_172)) > (g_118.f3.f1 || (safe_div_func_uint8_t_u_u((p_58 <= (l_450 <= (safe_lshift_func_int16_t_s_u((safe_div_func_uint8_t_u_u(1U, 1U)), 2)))), 0x75)))) >= (safe_rshift_func_int8_t_s_s(l_427, 4)))), 2)) | p_58))
                {
                    struct S1 l_475 = {0U,1U,-1,{5U,0xCE12E4BF,0x30,-1,1U},0x422A};
                    l_442[0] = g_226;
                    g_112 = (safe_sub_func_int16_t_s_s((safe_div_func_int32_t_s_s((safe_sub_func_uint32_t_u_u((safe_div_func_uint8_t_u_u(g_113, (((+l_440.f0.f2) >= (safe_rshift_func_int8_t_s_u((safe_div_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((((g_111[2][1] != ((g_118.f4 = p_58) <= (safe_rshift_func_int16_t_s_s(((l_431 && (((g_118.f3.f1 , ((l_475 , (safe_unary_minus_func_uint8_t_u((safe_mul_func_int16_t_s_s((safe_add_func_int16_t_s_s(((4 & (l_475.f3 , (-2))) == g_118.f3.f1), l_440.f0.f4)), g_118.f3.f0))))) && g_118.f3.f2)) , p_58) || 1)) || (-1)), g_112)))) < 8) <= 4), 0)), g_118.f0)), 2))) ^ p_58))), p_58)), g_118.f2)), (-1)));
                    if (g_118.f3.f0)
                        continue;
                }
                else
                {
                    int32_t l_502 = (-4);
                    int8_t l_504 = 0x78;
                    l_482 = l_481[0][1];
                    l_503 = (safe_div_func_uint32_t_u_u((((safe_add_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((((((l_440.f0 = l_489) , g_118.f3.f1) , (l_411[4] = (((safe_mod_func_int32_t_s_s((safe_add_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s(p_58, (safe_rshift_func_uint8_t_u_s(g_118.f0, (((safe_sub_func_uint32_t_u_u((l_442[0].f0.f4 | p_58), (((0x36 & g_226.f0.f3) == (safe_mul_func_uint16_t_u_u(g_118.f4, (-1)))) <= g_118.f3.f1))) ^ l_489.f4) | 8U))))), 0xA8647317)), l_502)) | l_502) || l_502))) || p_58) < p_58), p_58)), 1)) != 2) , 4294967295U), l_482.f3.f1));
                    if (l_504)
                        continue;
                    g_172 = (safe_rshift_func_int8_t_s_s(1, 2));
                }
                for (l_489.f2 = 1; (l_489.f2 >= 0); l_489.f2 -= 1)
                {
                    int i, j;
                    if (g_111[(g_118.f3.f2 + 1)][l_489.f2])
                        break;
                    return l_440.f0;
                }
                g_128 = (0xC4 > (safe_mul_func_int8_t_s_s(p_58, (!(l_503 = (((safe_rshift_func_uint16_t_u_s((safe_div_func_int32_t_s_s(((safe_div_func_uint16_t_u_u((g_118.f3.f4 = (safe_add_func_int16_t_s_s((l_411[6] = (p_58 < l_481[0][1].f1)), g_226.f0.f1))), 0x29E8)) >= 0xC669), (g_118.f1 = (safe_lshift_func_int8_t_s_u((248U < 255U), 0))))), l_457)) >= 0xAD) | 0))))));
            }
        }
    }
    l_411[6] = 0xA3FA1461;
    return g_226.f0;
}
inline static int32_t func_59(uint32_t p_60, uint32_t p_61, int32_t p_62, uint16_t p_63, uint16_t p_64)
{
    uint16_t l_75 = 0x251C;
    int32_t l_90 = 0x0C99D02B;
    int32_t l_114 = 0x8A2B653F;
    struct S2 l_117 = {{0xBB6FCE13,0xE46A4E19,9,0,0xD4DD}};
    uint32_t l_146 = 4294967289U;
    uint16_t l_147 = 0xFD71;
    uint8_t l_148 = 9U;
    int32_t l_149 = (-1);
    struct S1 l_186[1] = {{0x8D,0x708B61AE,1,{0x16E3D7E2,4294967295U,-2,0x4419D395,0x9D29},-1}};
    uint32_t l_208[6] = {8U, 0x9474E044, 8U, 0x9474E044, 8U, 0x9474E044};
    int i;
    for (p_60 = (-22); (p_60 >= 27); p_60 = safe_add_func_int8_t_s_s(p_60, 9))
    {
        int16_t l_106[10][10][2] = {{{4, 1}, {4, 1}, {4, 1}, {4, 1}, {4, 1}, {4, 1}, {4, 1}, {4, 1}, {4, 1}, {4, 1}}, {{4, 1}, {4, 1}, {4, 1}, {4, 1}, {4, 1}, {4, 1}, {4, 1}, {4, 1}, {4, 1}, {4, 1}}, {{4, 1}, {4, 1}, {4, 1}, {4, 1}, {4, 1}, {4, 1}, {4, 1}, {4, 1}, {4, 1}, {4, 1}}, {{4, 1}, {4, 1}, {4, 1}, {4, 1}, {4, 1}, {4, 1}, {4, 1}, {4, 1}, {4, 1}, {4, 1}}, {{4, 1}, {4, 1}, {4, 1}, {4, 1}, {4, 1}, {4, 1}, {4, 1}, {4, 1}, {4, 1}, {4, 1}}, {{4, 1}, {4, 1}, {4, 1}, {4, 1}, {4, 1}, {4, 1}, {4, 1}, {4, 1}, {4, 1}, {4, 1}}, {{4, 1}, {4, 1}, {4, 1}, {4, 1}, {4, 1}, {4, 1}, {4, 1}, {4, 1}, {4, 1}, {4, 1}}, {{4, 1}, {4, 1}, {4, 1}, {4, 1}, {4, 1}, {4, 1}, {4, 1}, {4, 1}, {4, 1}, {4, 1}}, {{4, 1}, {4, 1}, {4, 1}, {4, 1}, {4, 1}, {4, 1}, {4, 1}, {4, 1}, {4, 1}, {4, 1}}, {{4, 1}, {4, 1}, {4, 1}, {4, 1}, {4, 1}, {4, 1}, {4, 1}, {4, 1}, {4, 1}, {4, 1}}};
        int8_t l_107 = 0xD1;
        int32_t l_108 = 0x7FE427CC;
        int32_t l_110 = 1;
        int i, j, k;
        l_114 = ((safe_rshift_func_int8_t_s_s((((g_3 > (safe_add_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u((g_113 = ((l_75 != (safe_add_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u(((safe_mod_func_int32_t_s_s(((safe_lshift_func_int16_t_s_u((g_112 = ((g_111[1][0] = (((safe_div_func_int32_t_s_s(p_62, (5 | 0xA7))) ^ (safe_mod_func_uint8_t_u_u(((g_109 = (((l_90 = g_66) , (l_90 = (l_108 = ((safe_add_func_uint16_t_u_u(((p_61 = g_3) ^ ((safe_mod_func_int16_t_s_s((safe_div_func_int16_t_s_s((p_60 || (safe_mul_func_uint16_t_u_u((safe_unary_minus_func_int32_t_s((safe_add_func_int8_t_s_s((safe_add_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(((g_3 || g_66) && g_3), p_60)), l_106[2][6][1])), p_62)))), l_107))), p_64)), 5)) && g_66)), 0xD54B)) > 0xC1)))) && 1)) > (-10)), p_63))) > l_110)) ^ g_3)), g_3)) & 0U), p_64)) , 251U), 0)) > l_110), (-2)))) != 9U)), 7)), 0x32))) ^ 4294967292U) != g_3), 3)) != (-1));
        g_112 = l_75;
    }
    l_149 = (safe_lshift_func_int8_t_s_u((((l_117 , g_118) , (safe_unary_minus_func_uint8_t_u(l_117.f0.f4))) == (safe_lshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((l_114 = (safe_lshift_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_s((g_128 = l_75), l_117.f0.f1)) == ((((safe_sub_func_int32_t_s_s((!((((safe_mul_func_uint16_t_u_u((((g_112 = (safe_mul_func_int16_t_s_s((p_63 , ((safe_sub_func_uint8_t_u_u(0xD7, (safe_sub_func_int32_t_s_s((((safe_mod_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(((((safe_add_func_int8_t_s_s((((l_90 = (((g_66 = g_112) != p_60) == p_61)) < 0x6520) , l_114), l_146)) != 0) >= 5U) != (-1)), 0x3E8CBBEE)), l_117.f0.f0)) , g_118.f2) <= l_147), p_62)))) == g_118.f3.f2)), l_114))) && 1) < l_117.f0.f4), l_117.f0.f0)) == p_64) ^ 0) | l_148)), g_118.f4)) | g_118.f3.f0) | 0x0542) <= 4294967293U)), 8))), p_60)), 6))), l_117.f0.f1));
    for (g_118.f4 = 7; (g_118.f4 >= (-27)); g_118.f4 = safe_sub_func_int32_t_s_s(g_118.f4, 1))
    {
        int32_t l_154 = 0xD50E3CEE;
        int32_t l_171 = 0xE8EBDD08;
        struct S1 l_185 = {0xE6,0x1350E289,0xD0,{0xDBD879D1,0xA22EFFBD,0xF4,1,0xE74D},0xDCD5};
        struct S2 l_328 = {{0xF793924C,0xFCAEC787,0x4B,-1,65535U}};
        struct S1 l_343 = {0U,0xD323A33D,0x2E,{0x5B3812A1,0x56B1F67A,0xDE,0x4C6F2978,65533U},7};
        if (((p_61 < (safe_add_func_uint8_t_u_u((l_154 = 0x09), (0x7201B9F6 > (safe_sub_func_int16_t_s_s((g_172 = (safe_add_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u(l_90, (p_64 = ((~(safe_unary_minus_func_uint8_t_u((safe_div_func_uint16_t_u_u((p_64 , 0xDBDA), (((safe_lshift_func_uint16_t_u_s(p_61, ((g_66 & (safe_rshift_func_uint8_t_u_s(g_118.f3.f3, 5))) != 0U))) | 6U) ^ 0xD19C)))))) <= l_171)))) <= g_118.f1), 1)) >= 0U), p_61))), g_112)))))) , 0))
        {
            struct S0 l_177 = {0x8BE24636,0x982148F4,-5,-2,1U};
            int32_t l_200[4] = {0, 0x00F8154E, 0, 0x00F8154E};
            struct S1 l_222 = {0xD8,0xF3E29101,-8,{4294967295U,0x87AE741E,-7,-3,0x6AFE},1};
            struct S2 l_225[6][10][2] = {{{{{4294967286U,4294967295U,1,4,0U}}, {{4294967295U,4294967295U,0xE6,0,0x6085}}}, {{{4294967286U,4294967295U,1,4,0U}}, {{4294967295U,4294967295U,0xE6,0,0x6085}}}, {{{4294967286U,4294967295U,1,4,0U}}, {{4294967295U,4294967295U,0xE6,0,0x6085}}}, {{{4294967286U,4294967295U,1,4,0U}}, {{4294967295U,4294967295U,0xE6,0,0x6085}}}, {{{4294967286U,4294967295U,1,4,0U}}, {{4294967295U,4294967295U,0xE6,0,0x6085}}}, {{{4294967286U,4294967295U,1,4,0U}}, {{4294967295U,4294967295U,0xE6,0,0x6085}}}, {{{4294967286U,4294967295U,1,4,0U}}, {{4294967295U,4294967295U,0xE6,0,0x6085}}}, {{{4294967286U,4294967295U,1,4,0U}}, {{4294967295U,4294967295U,0xE6,0,0x6085}}}, {{{4294967286U,4294967295U,1,4,0U}}, {{4294967295U,4294967295U,0xE6,0,0x6085}}}, {{{4294967286U,4294967295U,1,4,0U}}, {{4294967295U,4294967295U,0xE6,0,0x6085}}}}, {{{{4294967286U,4294967295U,1,4,0U}}, {{4294967295U,4294967295U,0xE6,0,0x6085}}}, {{{4294967286U,4294967295U,1,4,0U}}, {{4294967295U,4294967295U,0xE6,0,0x6085}}}, {{{4294967286U,4294967295U,1,4,0U}}, {{4294967295U,4294967295U,0xE6,0,0x6085}}}, {{{4294967286U,4294967295U,1,4,0U}}, {{4294967295U,4294967295U,0xE6,0,0x6085}}}, {{{4294967286U,4294967295U,1,4,0U}}, {{4294967295U,4294967295U,0xE6,0,0x6085}}}, {{{4294967286U,4294967295U,1,4,0U}}, {{4294967295U,4294967295U,0xE6,0,0x6085}}}, {{{4294967286U,4294967295U,1,4,0U}}, {{4294967295U,4294967295U,0xE6,0,0x6085}}}, {{{4294967286U,4294967295U,1,4,0U}}, {{4294967295U,4294967295U,0xE6,0,0x6085}}}, {{{4294967286U,4294967295U,1,4,0U}}, {{4294967295U,4294967295U,0xE6,0,0x6085}}}, {{{4294967286U,4294967295U,1,4,0U}}, {{4294967295U,4294967295U,0xE6,0,0x6085}}}}, {{{{4294967286U,4294967295U,1,4,0U}}, {{4294967295U,4294967295U,0xE6,0,0x6085}}}, {{{4294967286U,4294967295U,1,4,0U}}, {{4294967295U,4294967295U,0xE6,0,0x6085}}}, {{{4294967286U,4294967295U,1,4,0U}}, {{4294967295U,4294967295U,0xE6,0,0x6085}}}, {{{4294967286U,4294967295U,1,4,0U}}, {{4294967295U,4294967295U,0xE6,0,0x6085}}}, {{{4294967286U,4294967295U,1,4,0U}}, {{4294967295U,4294967295U,0xE6,0,0x6085}}}, {{{4294967286U,4294967295U,1,4,0U}}, {{4294967295U,4294967295U,0xE6,0,0x6085}}}, {{{4294967286U,4294967295U,1,4,0U}}, {{4294967295U,4294967295U,0xE6,0,0x6085}}}, {{{4294967286U,4294967295U,1,4,0U}}, {{4294967295U,4294967295U,0xE6,0,0x6085}}}, {{{4294967286U,4294967295U,1,4,0U}}, {{4294967295U,4294967295U,0xE6,0,0x6085}}}, {{{4294967286U,4294967295U,1,4,0U}}, {{4294967295U,4294967295U,0xE6,0,0x6085}}}}, {{{{4294967286U,4294967295U,1,4,0U}}, {{4294967295U,4294967295U,0xE6,0,0x6085}}}, {{{4294967286U,4294967295U,1,4,0U}}, {{4294967295U,4294967295U,0xE6,0,0x6085}}}, {{{4294967286U,4294967295U,1,4,0U}}, {{4294967295U,4294967295U,0xE6,0,0x6085}}}, {{{4294967286U,4294967295U,1,4,0U}}, {{4294967295U,4294967295U,0xE6,0,0x6085}}}, {{{4294967286U,4294967295U,1,4,0U}}, {{4294967295U,4294967295U,0xE6,0,0x6085}}}, {{{4294967286U,4294967295U,1,4,0U}}, {{4294967295U,4294967295U,0xE6,0,0x6085}}}, {{{4294967286U,4294967295U,1,4,0U}}, {{4294967295U,4294967295U,0xE6,0,0x6085}}}, {{{4294967286U,4294967295U,1,4,0U}}, {{4294967295U,4294967295U,0xE6,0,0x6085}}}, {{{4294967286U,4294967295U,1,4,0U}}, {{4294967295U,4294967295U,0xE6,0,0x6085}}}, {{{4294967286U,4294967295U,1,4,0U}}, {{4294967295U,4294967295U,0xE6,0,0x6085}}}}, {{{{4294967286U,4294967295U,1,4,0U}}, {{4294967295U,4294967295U,0xE6,0,0x6085}}}, {{{4294967286U,4294967295U,1,4,0U}}, {{4294967295U,4294967295U,0xE6,0,0x6085}}}, {{{4294967286U,4294967295U,1,4,0U}}, {{4294967295U,4294967295U,0xE6,0,0x6085}}}, {{{4294967286U,4294967295U,1,4,0U}}, {{4294967295U,4294967295U,0xE6,0,0x6085}}}, {{{4294967286U,4294967295U,1,4,0U}}, {{4294967295U,4294967295U,0xE6,0,0x6085}}}, {{{4294967286U,4294967295U,1,4,0U}}, {{4294967295U,4294967295U,0xE6,0,0x6085}}}, {{{4294967286U,4294967295U,1,4,0U}}, {{4294967295U,4294967295U,0xE6,0,0x6085}}}, {{{4294967286U,4294967295U,1,4,0U}}, {{4294967295U,4294967295U,0xE6,0,0x6085}}}, {{{4294967286U,4294967295U,1,4,0U}}, {{4294967295U,4294967295U,0xE6,0,0x6085}}}, {{{4294967286U,4294967295U,1,4,0U}}, {{4294967295U,4294967295U,0xE6,0,0x6085}}}}, {{{{4294967286U,4294967295U,1,4,0U}}, {{4294967295U,4294967295U,0xE6,0,0x6085}}}, {{{4294967286U,4294967295U,1,4,0U}}, {{4294967295U,4294967295U,0xE6,0,0x6085}}}, {{{4294967286U,4294967295U,1,4,0U}}, {{4294967295U,4294967295U,0xE6,0,0x6085}}}, {{{4294967286U,4294967295U,1,4,0U}}, {{4294967295U,4294967295U,0xE6,0,0x6085}}}, {{{4294967286U,4294967295U,1,4,0U}}, {{4294967295U,4294967295U,0xE6,0,0x6085}}}, {{{4294967286U,4294967295U,1,4,0U}}, {{4294967295U,4294967295U,0xE6,0,0x6085}}}, {{{4294967286U,4294967295U,1,4,0U}}, {{4294967295U,4294967295U,0xE6,0,0x6085}}}, {{{4294967286U,4294967295U,1,4,0U}}, {{4294967295U,4294967295U,0xE6,0,0x6085}}}, {{{4294967286U,4294967295U,1,4,0U}}, {{4294967295U,4294967295U,0xE6,0,0x6085}}}, {{{4294967286U,4294967295U,1,4,0U}}, {{4294967295U,4294967295U,0xE6,0,0x6085}}}}};
            uint32_t l_245[4];
            int i, j, k;
            for (i = 0; i < 4; i++)
                l_245[i] = 0U;
            if ((g_172 = (((safe_rshift_func_int16_t_s_u((l_149 = (((g_118.f4 > (safe_rshift_func_int8_t_s_u(((((((l_177 , (safe_div_func_int32_t_s_s((0xD3 < (safe_lshift_func_int8_t_s_u(((((((safe_lshift_func_uint8_t_u_u((((!((l_186[0] = l_185) , (0 < (p_64 && (((g_118.f3.f4 = (safe_div_func_int8_t_s_s((l_171 = (((safe_sub_func_int8_t_s_s(((safe_mul_func_int16_t_s_s(l_186[0].f1, (safe_div_func_int32_t_s_s((safe_sub_func_int16_t_s_s((l_90 = p_64), l_177.f1)), 0xBA113A25)))) ^ l_186[0].f3.f2), p_60)) == l_114) , g_112)), l_177.f0))) || 0x3B97) , p_63))))) <= g_118.f3.f2) & g_128), 4)) | g_118.f4) == l_185.f2) , g_118.f3.f4) && l_185.f3.f1) != g_3), 5))), p_60))) <= l_177.f4) , 7U) > p_63) != g_118.f3.f0) , 0), l_185.f3.f4))) & p_61) && g_118.f2)), 11)) && p_61) <= 4)))
            {
                struct S0 l_199[5] = {{4294967291U,0U,-9,1,0x2E68}, {0xC625639F,4294967290U,0x9F,0x6B08A477,0x7779}, {4294967291U,0U,-9,1,0x2E68}, {0xC625639F,4294967290U,0x9F,0x6B08A477,0x7779}, {4294967291U,0U,-9,1,0x2E68}};
                struct S1 l_205 = {0xE0,4294967295U,0x6F,{1U,0U,0x75,-3,0x9033},1};
                int i;
                for (l_75 = 11; (l_75 > 32); l_75++)
                {
                    int32_t l_209 = 0x29F115A3;
                    l_177 = l_199[2];
                    l_209 = (((p_63 < (g_118.f0 && ((l_200[0] != (safe_div_func_int32_t_s_s((safe_lshift_func_int8_t_s_u(((p_60 <= 255U) >= ((l_205 , 0x4545E75F) , ((safe_mod_func_uint16_t_u_u(g_111[0][0], (l_208[3] = (g_66 && l_146)))) == 0x15A4))), 7)), p_62))) , g_118.f1))) | l_185.f3.f2) != p_60);
                    if (p_63)
                        continue;
                    if ((g_172 | (safe_mod_func_int32_t_s_s(p_60, 0x4FE0FA9F))))
                    {
                        l_200[0] = g_118.f2;
                        if (p_63)
                            break;
                    }
                    else
                    {
                        g_172 = (~(p_64 > (safe_mul_func_uint16_t_u_u((((+((safe_add_func_uint8_t_u_u(0U, (((safe_mul_func_int16_t_s_s((((((safe_mod_func_int32_t_s_s((l_222 , (p_60 != (((safe_mod_func_uint32_t_u_u((g_111[1][0] , l_209), (((g_118.f3 , g_113) ^ (p_61 >= (-9))) || l_209))) == g_118.f3.f3) || p_62))), l_209)) >= p_61) <= l_185.f1) != g_172) < g_118.f3.f1), 0x36BA)) ^ p_63) > g_118.f3.f0))) != p_64)) | (-1)) , g_118.f3.f3), p_60))));
                    }
                }
                g_226 = l_225[3][5][1];
                if (p_62)
                    break;
                if ((safe_div_func_int16_t_s_s(p_61, (safe_mul_func_uint16_t_u_u((((safe_mod_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(((((safe_lshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_s((safe_div_func_uint32_t_u_u(l_185.f0, 0x6F2558EA)), (safe_rshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_u(l_186[0].f0, ((p_62 < (0x42314006 < (((g_112 >= (p_64 = (l_245[3] = p_60))) , (p_60 && g_226.f0.f4)) != 7U))) == g_226.f0.f2))), 14)))), g_172)) , p_64) && p_63) >= p_63), g_226.f0.f2)), 0xDF)) <= g_118.f1) <= g_226.f0.f1), l_185.f3.f0)))))
                {
                    if (g_226.f0.f4)
                        break;
                    l_171 = p_61;
                }
                else
                {
                    g_112 = (l_200[3] = (!(safe_div_func_uint32_t_u_u(g_118.f0, (((((safe_mul_func_int8_t_s_s((g_226 , ((safe_add_func_int32_t_s_s((safe_lshift_func_int16_t_s_s(g_226.f0.f3, (!(safe_lshift_func_uint8_t_u_u(0x52, (safe_unary_minus_func_uint8_t_u((g_279 = (safe_rshift_func_int8_t_s_u(p_63, (safe_div_func_int8_t_s_s(0x69, ((safe_mod_func_int8_t_s_s((l_171 = (((1 && (safe_unary_minus_func_uint8_t_u((safe_div_func_int8_t_s_s(((!((safe_sub_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_s(((safe_div_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(((((0U && 0x962C) , l_205.f3) , g_172) , 0xB466), 1U)), 1)), 1)) < 0xA54B0218), 13)) | g_226.f0.f3), g_226.f0.f3)) > 0x42EEB042)) ^ l_185.f0), 0xC1))))) != 0x5E) , (-1))), g_172)) ^ p_63))))))))))))), g_118.f3.f3)) >= l_185.f2)), l_177.f1)) > p_60) , p_60) <= g_226.f0.f2) , l_245[1])))));
                    l_200[1] = g_118.f3.f1;
                }
            }
            else
            {
                struct S0 l_280 = {0x6E99181E,4294967293U,-1,1,0x69A0};
                l_280 = (l_117.f0 , (l_186[0].f3 , l_117.f0));
            }
        }
        else
        {
            struct S0 l_281 = {0x72DE9098,0x09D77097,0x4D,0xBFBD02E4,0x5657};
            int32_t l_284 = 0;
            int32_t l_287[1];
            struct S1 l_326 = {5U,4294967295U,9,{0x92906445,4294967295U,0x79,1,65535U},-1};
            int i;
            for (i = 0; i < 1; i++)
                l_287[i] = (-5);
            l_287[0] = (((0x4E & ((l_281 , l_186[0].f1) , ((g_128 = ((safe_mul_func_uint16_t_u_u(p_60, p_64)) == (g_118.f0 = (l_284 = g_118.f2)))) || 4294967295U))) || 0xF67F) == ((safe_rshift_func_uint16_t_u_u(((p_63 = l_281.f1) == 1U), 6)) != g_118.f3.f3));
            if (p_63)
            {
                uint8_t l_308[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_308[i] = 0x73;
                if (l_117.f0.f2)
                {
                    struct S0 l_290 = {0U,1U,0x82,-1,0xB1DD};
                    for (g_118.f3.f4 = 8; (g_118.f3.f4 != 44); g_118.f3.f4 = safe_add_func_int16_t_s_s(g_118.f3.f4, 9))
                    {
                        uint8_t l_306[8][4][8] = {{{252U, 0x7C, 0xC8, 6U, 0x4C, 246U, 0xF5, 0x23}, {252U, 0x7C, 0xC8, 6U, 0x4C, 246U, 0xF5, 0x23}, {252U, 0x7C, 0xC8, 6U, 0x4C, 246U, 0xF5, 0x23}, {252U, 0x7C, 0xC8, 6U, 0x4C, 246U, 0xF5, 0x23}}, {{252U, 0x7C, 0xC8, 6U, 0x4C, 246U, 0xF5, 0x23}, {252U, 0x7C, 0xC8, 6U, 0x4C, 246U, 0xF5, 0x23}, {252U, 0x7C, 0xC8, 6U, 0x4C, 246U, 0xF5, 0x23}, {252U, 0x7C, 0xC8, 6U, 0x4C, 246U, 0xF5, 0x23}}, {{252U, 0x7C, 0xC8, 6U, 0x4C, 246U, 0xF5, 0x23}, {252U, 0x7C, 0xC8, 6U, 0x4C, 246U, 0xF5, 0x23}, {252U, 0x7C, 0xC8, 6U, 0x4C, 246U, 0xF5, 0x23}, {252U, 0x7C, 0xC8, 6U, 0x4C, 246U, 0xF5, 0x23}}, {{252U, 0x7C, 0xC8, 6U, 0x4C, 246U, 0xF5, 0x23}, {252U, 0x7C, 0xC8, 6U, 0x4C, 246U, 0xF5, 0x23}, {252U, 0x7C, 0xC8, 6U, 0x4C, 246U, 0xF5, 0x23}, {252U, 0x7C, 0xC8, 6U, 0x4C, 246U, 0xF5, 0x23}}, {{252U, 0x7C, 0xC8, 6U, 0x4C, 246U, 0xF5, 0x23}, {252U, 0x7C, 0xC8, 6U, 0x4C, 246U, 0xF5, 0x23}, {252U, 0x7C, 0xC8, 6U, 0x4C, 246U, 0xF5, 0x23}, {252U, 0x7C, 0xC8, 6U, 0x4C, 246U, 0xF5, 0x23}}, {{252U, 0x7C, 0xC8, 6U, 0x4C, 246U, 0xF5, 0x23}, {252U, 0x7C, 0xC8, 6U, 0x4C, 246U, 0xF5, 0x23}, {252U, 0x7C, 0xC8, 6U, 0x4C, 246U, 0xF5, 0x23}, {252U, 0x7C, 0xC8, 6U, 0x4C, 246U, 0xF5, 0x23}}, {{252U, 0x7C, 0xC8, 6U, 0x4C, 246U, 0xF5, 0x23}, {252U, 0x7C, 0xC8, 6U, 0x4C, 246U, 0xF5, 0x23}, {252U, 0x7C, 0xC8, 6U, 0x4C, 246U, 0xF5, 0x23}, {252U, 0x7C, 0xC8, 6U, 0x4C, 246U, 0xF5, 0x23}}, {{252U, 0x7C, 0xC8, 6U, 0x4C, 246U, 0xF5, 0x23}, {252U, 0x7C, 0xC8, 6U, 0x4C, 246U, 0xF5, 0x23}, {252U, 0x7C, 0xC8, 6U, 0x4C, 246U, 0xF5, 0x23}, {252U, 0x7C, 0xC8, 6U, 0x4C, 246U, 0xF5, 0x23}}};
                        int i, j, k;
                        g_226.f0 = l_290;
                        l_171 = p_61;
                        g_172 = (safe_mod_func_int16_t_s_s(((safe_add_func_int16_t_s_s((g_118.f3.f2 >= (safe_lshift_func_int8_t_s_u(((safe_sub_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(l_117.f0.f4, g_118.f1)), ((p_62 , ((((0x88 != ((g_303[7] = (g_226.f0.f4 = ((safe_lshift_func_int8_t_s_u((g_226.f0.f2 = p_61), 3)) < g_128))) & ((safe_rshift_func_int16_t_s_u((l_306[1][1][7] | ((g_307 = g_118.f1) ^ g_226.f0.f0)), 2)) >= 0x6F))) , g_118.f3.f0) == 0xF3DB) < l_308[1])) ^ 0xC9E5EE9B))) && p_63), 7))), g_172)) < p_63), p_64));
                    }
                }
                else
                {
                    uint32_t l_322 = 3U;
                    int32_t l_323[7][2] = {{0x7B1ACB9F, (-1)}, {0x7B1ACB9F, (-1)}, {0x7B1ACB9F, (-1)}, {0x7B1ACB9F, (-1)}, {0x7B1ACB9F, (-1)}, {0x7B1ACB9F, (-1)}, {0x7B1ACB9F, (-1)}};
                    int i, j;
                    l_322 = (((safe_mul_func_int16_t_s_s((l_171 = (safe_rshift_func_uint8_t_u_s((safe_div_func_uint16_t_u_u((l_185.f3 , (g_303[7] >= l_185.f3.f2)), (l_287[0] = ((l_281.f0 >= (safe_mod_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((!0xA7), p_64)), (safe_mul_func_int16_t_s_s((((p_64 ^ ((l_281.f0 <= (g_226.f0.f2 == p_60)) & 0xEAC3)) | g_226.f0.f1) > p_63), l_186[0].f1))))) && 1)))), g_112))), 0x7846)) >= l_281.f0) , l_281.f2);
                    l_323[0][1] = p_62;
                }
            }
            else
            {
                int16_t l_327 = 0xA464;
                uint32_t l_360 = 0xAC1A0D15;
                uint32_t l_387[3];
                int32_t l_410 = 1;
                int i;
                for (i = 0; i < 3; i++)
                    l_387[i] = 0xD880C366;
                l_171 = (0xEB >= (safe_div_func_int8_t_s_s((l_326 , l_327), p_62)));
                g_226 = l_328;
                for (l_117.f0.f3 = 0; (l_117.f0.f3 < 3); l_117.f0.f3++)
                {
                    uint16_t l_346[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_346[i] = 0x35C1;
                    for (l_326.f4 = 11; (l_326.f4 < (-16)); --l_326.f4)
                    {
                        l_287[0] = p_61;
                        return l_281.f1;
                    }
                    l_287[0] = ((safe_div_func_uint8_t_u_u((safe_add_func_int32_t_s_s((((g_112 || (g_226.f0.f4 = (~(((safe_sub_func_int8_t_s_s((safe_sub_func_int32_t_s_s(l_281.f4, (g_112 | ((p_64 | ((+(g_113 = ((l_327 || 0xBA) & (l_343 , (p_64 <= (safe_add_func_int16_t_s_s(((l_185 , g_118.f3.f3) , l_75), g_118.f1))))))) , g_303[5])) && g_118.f2)))), g_3)) | 0xC29DD93E) | g_112)))) == g_66) , 0x860BB8B3), p_64)), l_346[2])) < p_64);
                }
                for (l_185.f3.f4 = 0; (l_185.f3.f4 <= 10); l_185.f3.f4++)
                {
                    int32_t l_366 = 0xB81B9BB4;
                    int32_t l_409 = 4;
                    for (l_343.f3.f3 = 0; (l_343.f3.f3 != 13); l_343.f3.f3 = safe_add_func_uint16_t_u_u(l_343.f3.f3, 1))
                    {
                        uint8_t l_367 = 246U;
                        l_367 = (safe_unary_minus_func_uint16_t_u((p_64 = (safe_mul_func_int16_t_s_s((p_63 == ((safe_mod_func_uint32_t_u_u((safe_div_func_uint32_t_u_u(g_118.f3.f1, (safe_add_func_int32_t_s_s(((l_360 = 2) > (((g_226.f0.f2 = g_118.f3.f1) , 0xC9) & ((((+(g_172 , (safe_sub_func_int8_t_s_s(((g_172 , 0x50104BB7) > ((((safe_lshift_func_uint16_t_u_u((g_118.f3.f1 , l_366), 14)) || 1U) == g_128) & 1)), g_118.f3.f3)))) , g_226.f0.f4) && l_287[0]) & 0xDBD0332F))), g_279)))), p_61)) && p_63)), 7)))));
                        g_118.f3 = (l_186[0].f3 , g_118.f3);
                        l_171 = (safe_add_func_int32_t_s_s(((safe_sub_func_int32_t_s_s((l_90 = p_63), ((safe_unary_minus_func_int8_t_s((l_186[0].f1 & l_327))) || p_63))) , (safe_rshift_func_int16_t_s_u(((safe_add_func_int32_t_s_s(((g_112 , ((p_61 , ((((((((l_149 = (safe_lshift_func_uint16_t_u_u(((+(safe_rshift_func_uint8_t_u_s((g_118.f3.f3 && (!(p_64 , (((l_387[0] = (safe_mul_func_int8_t_s_s(((safe_mul_func_int16_t_s_s(((((255U == (-1)) ^ 1) | g_118.f3.f2) >= g_226.f0.f3), g_303[7])) <= l_326.f3.f3), g_118.f3.f1))) && g_118.f2) >= g_111[1][0])))), 5))) < p_63), 12))) || p_63) && l_366) ^ 1U) , p_61) || g_111[3][1]) , g_118.f2) < 0xD7)) == p_61)) == g_303[5]), l_327)) >= p_61), l_154))), 0x14E7A1AF));
                        l_114 = (safe_sub_func_int8_t_s_s(((safe_rshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(l_326.f3.f1, (g_226 , (((((safe_lshift_func_int16_t_s_s((safe_unary_minus_func_uint16_t_u((((((+((safe_add_func_uint8_t_u_u((l_186[0].f3.f3 , (g_303[7] = 0xC0)), ((safe_div_func_uint32_t_u_u((p_62 == ((g_226 , (safe_rshift_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((+p_64), p_62)), ((safe_rshift_func_uint16_t_u_u((((((l_185 , 0x752A) && 0x9D5F) ^ 0x44909103) == l_387[0]) & l_366), 12)) >= p_63)))) , g_109)), 6)) >= g_118.f3.f0))) && p_61)) == 0xE3EE) | g_226.f0.f0) , g_303[7]) || 0x82B8))), p_62)) < g_111[0][0]) && p_60) >= 3) & g_118.f2)))), l_366)) == g_118.f0), l_327));
                    }
                    if ((((p_63 = g_118.f2) & g_226.f0.f2) || l_366))
                    {
                        l_409 = (l_366 & 0x6A);
                        return g_226.f0.f4;
                    }
                    else
                    {
                        g_112 = (l_410 = l_326.f4);
                    }
                    l_409 = p_64;
                }
            }
        }
    }
    l_114 = l_90;
    return g_111[1][0];
}
int main (void)
{
    int i, j;
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_3;
    csmith_sink_ = g_66;
    csmith_sink_ = g_109;
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 2; j++)
        {
            csmith_sink_ = g_111[i][j];
        }
    }
    csmith_sink_ = g_112;
    csmith_sink_ = g_113;
    csmith_sink_ = g_118.f0;
    csmith_sink_ = g_118.f1;
    csmith_sink_ = g_118.f2;
    csmith_sink_ = g_118.f3.f0;
    csmith_sink_ = g_118.f3.f1;
    csmith_sink_ = g_118.f3.f2;
    csmith_sink_ = g_118.f3.f3;
    csmith_sink_ = g_118.f3.f4;
    csmith_sink_ = g_118.f4;
    csmith_sink_ = g_128;
    csmith_sink_ = g_172;
    csmith_sink_ = g_226.f0.f0;
    csmith_sink_ = g_226.f0.f1;
    csmith_sink_ = g_226.f0.f2;
    csmith_sink_ = g_226.f0.f3;
    csmith_sink_ = g_226.f0.f4;
    csmith_sink_ = g_279;
    for (i = 0; i < 8; i++)
    {
        csmith_sink_ = g_303[i];
    }
    csmith_sink_ = g_307;
    csmith_sink_ = g_617;
    csmith_sink_ = g_662;
    platform_main_end(0,0);
    return 0;
}
