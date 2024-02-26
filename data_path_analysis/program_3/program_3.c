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
static int32_t g_2 = (-2L);
static uint32_t g_25 = 0UL;
static uint32_t g_40 = 0UL;
static int32_t g_47 = (-10L);
static uint8_t g_48 = 255UL;
static int8_t g_49 = 7L;
static uint16_t g_50 = 0x20C3L;
static uint32_t g_103 = 1UL;
static uint16_t g_105 = 0UL;
static int8_t g_106 = 0L;
static int32_t g_107 = 1L;
static int32_t g_108 = (-1L);
static int8_t g_109 = (-1L);
static uint32_t g_110 = 0x0C6B665FL;
static int32_t g_125 = (-1L);
static int32_t g_129 = 0xB50B9A65L;
static uint32_t g_130 = 0xD267AFBDL;
static int32_t g_134 = 0x48C15133L;
static uint32_t g_135 = 0UL;
static uint32_t g_255 = 0xEA33B35AL;
static uint8_t g_337 = 1UL;
static int16_t g_362 = 0xA16BL;
static uint32_t g_365 = 0x9F1FA6DFL;
static uint16_t g_535 = 65535UL;
static int16_t g_560 = 0x15AAL;
static uint16_t g_561 = 0x4604L;
static uint16_t g_683 = 0UL;
static uint16_t g_708 = 1UL;
static uint32_t g_713 = 2UL;
static uint32_t g_820 = 0xBCAAC5A3L;
static int32_t g_884 = 0x7C3AB1BBL;
static uint16_t g_904 = 0UL;
static int32_t g_1043 = 0x33F77F96L;
static int32_t g_1123 = 8L;
static uint32_t g_1124 = 0xCA3521B6L;
static uint32_t g_1134 = 9UL;
static uint32_t func_1(void);
static int32_t func_5(int32_t p_6, uint16_t p_7, uint16_t p_8, int32_t p_9, uint32_t p_10);
static int8_t func_14(uint8_t p_15, int32_t p_16, int32_t p_17, uint16_t p_18, uint32_t p_19);
static int8_t func_35(uint8_t p_36, int16_t p_37, uint8_t p_38);
static uint32_t func_56(int8_t p_57, int32_t p_58, uint8_t p_59, int32_t p_60);
static uint16_t func_62(int8_t p_63, int16_t p_64, int16_t p_65, int32_t p_66, int32_t p_67);
static int16_t func_71(int32_t p_72, uint32_t p_73);
static uint8_t func_78(uint32_t p_79);
static int32_t func_81(int8_t p_82);
static uint8_t func_85(uint16_t p_86);
static uint32_t func_1(void)
{
    uint32_t l_13 = 0x1EB32A83L;
    int32_t l_1016 = 0x6BB040F6L;
    uint32_t l_1084 = 0x9D8FA7ECL;
    int16_t l_1090 = 4L;
    int32_t l_1119 = 0x8F934819L;
    uint32_t l_1180 = 8UL;
    uint16_t l_1189 = 1UL;
    for (g_2 = 13; (g_2 == 1); g_2--)
    {
        int32_t l_22 = 0x99333C7DL;
        int32_t l_1052 = 0xCE8DD2CFL;
        int32_t l_1055 = 0xC876DA54L;
        g_1043 ^= func_5((safe_rshift_func_int8_t_s_u((0xBEF7D651L & ((l_13 > 1UL) || (l_13 & (((((((-5L) != l_13) >= (l_1016 = func_14((safe_div_func_int16_t_s_s(g_2, l_22)), ((safe_rshift_func_uint8_t_u_u(g_2, g_2)) != g_2), g_2, l_13, l_22))) == g_884) != g_108) <= l_22) && 0x5AL)))), 0)), l_22, l_22, g_904, g_884);
        l_22 = (safe_rshift_func_uint16_t_u_s(l_13, (l_22 | (safe_rshift_func_uint8_t_u_u(255UL, (((((safe_sub_func_int16_t_s_s(l_22, (safe_mod_func_uint32_t_u_u(((l_1052 |= 9L) >= (l_22 == (g_106 > (((l_22 && (safe_mod_func_int16_t_s_s((l_1055 = (g_820 | 0x2374A32BL)), 0xE297L))) & g_49) && 0x49L)))), l_1016)))) || g_904) || l_13) >= l_13) > g_105))))));
    }
    if (((((safe_sub_func_int32_t_s_s(g_25, (safe_mod_func_int16_t_s_s(g_40, (g_535 |= (safe_lshift_func_uint8_t_u_s((((safe_rshift_func_uint16_t_u_s((safe_add_func_uint32_t_u_u((safe_mod_func_int32_t_s_s((250UL ^ l_1016), l_1016)), (65528UL < (g_560 &= (safe_add_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((((g_106 = (safe_mod_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u((g_48 ^= l_1084), 0)), 7)), 0)) >= (((safe_unary_minus_func_int32_t_s(((safe_mod_func_uint8_t_u_u(((-1L) < ((((safe_lshift_func_uint8_t_u_s((g_362 & l_1084), l_1016)) && 1UL) <= l_1090) && 1L)), 0x34L)) & l_1090))) > g_40) > g_107)), 0x0BL))) != g_109) == l_1090), 248UL)), 4)), g_1043)))))), g_49)) & g_135) | 3L), l_13))))))) == g_713) >= g_25) ^ l_13))
    {
        uint32_t l_1096 = 0x2F3AAB41L;
        int32_t l_1099 = 0x5FD071F8L;
        uint8_t l_1118 = 0xF3L;
        l_1119 ^= ((safe_unary_minus_func_int8_t_s((safe_mod_func_uint8_t_u_u(0UL, (l_1096 = (g_48++)))))) | (g_904 = (safe_add_func_uint16_t_u_u((l_1099 | (g_49 ^= ((safe_rshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(l_1099, 1)), ((safe_div_func_uint32_t_u_u((l_1016 = (((9UL < g_820) & ((safe_sub_func_uint8_t_u_u(0x22L, (safe_add_func_uint16_t_u_u(0xB7D0L, (safe_lshift_func_int8_t_s_u(l_1099, 3)))))) || ((safe_div_func_uint16_t_u_u(g_884, 1UL)) > l_1016))) & g_130)), l_1118)) ^ l_13))) < 0x29BE0319L), l_13)), l_1090)) != 0xE75DL))), g_25))));
        for (g_365 = 0; (g_365 != 30); g_365 = safe_add_func_int8_t_s_s(g_365, 5))
        {
            int32_t l_1122 = 1L;
            g_1124++;
        }
    }
    else
    {
        uint32_t l_1129 = 18446744073709551615UL;
        int32_t l_1130 = 0x94E97C2DL;
        g_134 = (safe_mod_func_int8_t_s_s(0x28L, ((g_106 = (((g_106 ^ g_106) & (l_1129 = (g_2 = g_130))) & l_1130)) ^ 248UL)));
        for (g_105 = (-21); (g_105 <= 33); g_105++)
        {
            int16_t l_1133 = 1L;
            int32_t l_1183 = 8L;
            int32_t l_1184 = 0xB97D8F6DL;
            int32_t l_1190 = 0L;
            ++g_1134;
            l_1130 = ((safe_mod_func_uint16_t_u_u(((safe_add_func_uint32_t_u_u(g_109, (safe_rshift_func_int16_t_s_u((l_1090 >= (~(safe_div_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_s((safe_add_func_uint16_t_u_u((safe_add_func_int32_t_s_s((safe_sub_func_int32_t_s_s((safe_add_func_int32_t_s_s((l_1119 = (-1L)), (safe_sub_func_uint16_t_u_u((l_1133 == (~(safe_mod_func_int32_t_s_s(((0x3AC707B4L < ((g_106 ^ (safe_sub_func_int16_t_s_s(0x45D7L, (+(0x2EL > (((g_337 == 0x6925L) >= l_1133) >= 65533UL)))))) && 0x07L)) >= l_1130), l_13)))), 7UL)))), 0x3E524871L)), 4294967291UL)), g_820)), l_1133)) > l_1090), g_1124)))), g_106)))) | 0xE815B61AL), l_1090)) < g_683);
            g_1043 &= ((safe_mod_func_int32_t_s_s(0L, g_1124)) || ((g_109 = (safe_sub_func_uint8_t_u_u((l_1016 |= ((safe_lshift_func_uint8_t_u_s((safe_sub_func_int8_t_s_s(((+((l_1190 = (safe_rshift_func_int8_t_s_s((-7L), (safe_lshift_func_int8_t_s_u(((((safe_lshift_func_int16_t_s_s(l_1129, ((safe_unary_minus_func_int16_t_s((l_1180 == l_1133))) ^ (safe_add_func_int16_t_s_s((l_1184 &= l_1183), ((((((safe_rshift_func_int8_t_s_u(5L, (safe_rshift_func_uint16_t_u_s(((((((0xE85AL == (-6L)) & g_560) < 0x1FF2L) != l_1119) == l_1090) > g_1123), g_103)))) < g_129) > g_560) && g_135) <= g_134) & l_1133)))))) & g_1124) >= g_1124) & l_1084), l_1189))))) != (-1L))) == 0L), g_2)), l_1130)) >= l_13)), (-5L)))) > g_820));
        }
        g_1043 = (g_2 |= g_1123);
    }
    return g_337;
}
static int32_t func_5(int32_t p_6, uint16_t p_7, uint16_t p_8, int32_t p_9, uint32_t p_10)
{
    uint32_t l_1023 = 0UL;
    int8_t l_1041 = (-1L);
    int32_t l_1042 = (-9L);
    l_1042 = (safe_sub_func_int32_t_s_s((((safe_lshift_func_int8_t_s_s((g_49 = ((safe_mod_func_uint32_t_u_u((0UL >= l_1023), (safe_mod_func_uint8_t_u_u(g_708, (safe_unary_minus_func_uint16_t_u(((safe_unary_minus_func_int32_t_s((safe_div_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(((g_109 = (safe_lshift_func_uint8_t_u_s((+((safe_sub_func_uint8_t_u_u(0xE0L, (((safe_rshift_func_uint16_t_u_u(g_47, (g_135 && (safe_sub_func_int32_t_s_s((g_134 = g_362), p_8))))) == g_535) | l_1023))) | p_8)), p_10))) & p_7), 0xEEL)), l_1041)))) >= 4294967295UL))))))) || g_103)), 2)) || g_105) && p_9), g_47));
    return p_10;
}
static int8_t func_14(uint8_t p_15, int32_t p_16, int32_t p_17, uint16_t p_18, uint32_t p_19)
{
    uint8_t l_28 = 0xA6L;
    int32_t l_39 = 0x781B5F7AL;
    int32_t l_721 = 3L;
    int32_t l_722 = 1L;
    int32_t l_723 = 0x298D81E2L;
    int8_t l_746 = (-1L);
    uint16_t l_775 = 8UL;
    int16_t l_799 = (-10L);
    uint32_t l_819 = 0xE7ED87EDL;
    int16_t l_983 = 0x4403L;
    l_723 = (l_722 = (l_721 = (((g_25 &= p_16) < (safe_lshift_func_uint16_t_u_s(65526UL, (252UL < (p_15 ^= l_28))))) != (safe_mod_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((safe_sub_func_int8_t_s_s(func_35(((++g_40) && (safe_div_func_uint16_t_u_u((g_40 > 4294967295UL), 0xBA8DL))), (g_48 = (p_18 ^ (safe_lshift_func_int8_t_s_s((g_47 &= (l_39 = (g_2 <= l_39))), 7)))), l_28), g_713)), p_16)), g_713)))));
    if (((+((((safe_rshift_func_uint8_t_u_s((g_103 >= (l_39 ^ ((safe_unary_minus_func_uint16_t_u(p_16)) == g_337))), (safe_div_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s((((+0x2D9A9B59L) <= ((g_109 = ((0x28L & ((((!((safe_rshift_func_int16_t_s_s((l_721 |= (safe_rshift_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_s((safe_sub_func_int8_t_s_s(((p_15 < (g_713 = ((l_722 = l_722) < ((safe_sub_func_int16_t_s_s((l_746 = 1L), g_105)) & l_723)))) > 0x1934L), 6L)), 9)) || l_39), 7))), g_560)) > p_18)) >= l_28) ^ p_15) & l_39)) < (-1L))) == l_28)) & l_39), p_18)), g_47)))) >= p_18) || l_722) || l_721)) >= 0xAF494B84L))
    {
        int32_t l_769 = 0L;
        int32_t l_772 = (-1L);
        int32_t l_773 = 0L;
        int32_t l_774 = 8L;
        l_773 |= ((safe_div_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(((safe_mod_func_int32_t_s_s((safe_mod_func_uint16_t_u_u((g_50 &= ((safe_rshift_func_uint16_t_u_s((safe_mod_func_int8_t_s_s(0xD1L, (safe_add_func_uint32_t_u_u(p_18, 0x33C63A25L)))), 12)) ^ (safe_rshift_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(((p_19 = ((safe_rshift_func_int8_t_s_s((-8L), (safe_lshift_func_int16_t_s_u((l_769 | ((p_17 | 0xB9L) ^ (safe_lshift_func_int16_t_s_s(((l_772 = 0x390E5CAAL) || 0x7EDA6159L), g_362)))), 14)))) | 0x4C1FL)) ^ p_18), 4294967295UL)), l_722)))), g_109)), g_47)) && g_713), 0xC9B48732L)), p_17)) ^ l_28);
        l_775++;
    }
    else
    {
        uint8_t l_790 = 2UL;
        uint32_t l_791 = 1UL;
        int32_t l_792 = 0x30D455A4L;
        int32_t l_793 = 6L;
        int16_t l_953 = (-8L);
        uint16_t l_984 = 65532UL;
        if ((g_107 = (((0x76L <= ((safe_mod_func_uint8_t_u_u((((safe_add_func_uint16_t_u_u(((safe_div_func_int8_t_s_s(((l_721 = (safe_rshift_func_int16_t_s_s(0x8278L, 13))) > ((((l_792 = ((((0xD15FL != ((--p_18) | (l_790 = (0x1C7CB924L >= ((safe_rshift_func_uint8_t_u_u(l_722, 6)) != 4294967288UL))))) & 2L) || ((((((l_790 && (g_105 = (g_561 = (l_791 = (((g_106 > l_722) > l_790) & p_19))))) && g_47) || 0x89B0380EL) || 0x217CL) < p_15) == g_109)) || l_28)) & 0L) && g_560) & l_793)), p_17)) != 0xEA57B90DL), p_16)) <= 0x4C6642B0L) == 0x75A79E59L), g_48)) || p_16)) || 0xA89E0568L) | 255UL)))
        {
            int32_t l_796 = (-1L);
            int32_t l_804 = 0x71AE0B60L;
            int32_t l_805 = 0xC8E663E4L;
            g_107 = (l_39 = ((safe_mod_func_int32_t_s_s(0xFB266415L, 0x9FB11BDFL)) | (l_796 || (p_15 < (safe_rshift_func_uint16_t_u_u(65535UL, l_799))))));
            for (g_105 = 0; (g_105 > 17); g_105++)
            {
                l_793 = (safe_lshift_func_uint8_t_u_u(0UL, 3));
                l_804 ^= (l_796 <= (0x5E33333AL != 1L));
            }
            l_721 = (1UL & p_17);
            l_819 = (l_805 > (p_19 = ((l_793 = (((((l_796 |= (1UL | (g_129 = l_792))) == ((safe_mod_func_uint16_t_u_u(p_17, (safe_unary_minus_func_int32_t_s(((safe_add_func_uint16_t_u_u(g_560, (safe_div_func_int16_t_s_s((safe_sub_func_int8_t_s_s(((((g_365 && ((((g_708--) > 5L) == (g_337 == (((safe_sub_func_uint32_t_u_u(((g_48 = ((p_16 ^ p_18) || g_50)) || 0x71L), (-1L))) != 0x07C6L) && g_40))) || g_109)) & g_362) || 0L) == l_791), g_125)), g_561)))) ^ p_16))))) == l_775)) & l_805) > 3UL) >= p_17)) >= g_107)));
        }
        else
        {
            int32_t l_839 = 1L;
            int32_t l_844 = 0xB9560BACL;
            int32_t l_845 = (-8L);
            int32_t l_869 = 0x23D5AF64L;
            int16_t l_883 = 0x3A23L;
            int16_t l_928 = (-1L);
            --g_820;
            g_129 = ((safe_rshift_func_int16_t_s_u(0xCC4EL, ((l_790 <= ((safe_mod_func_uint32_t_u_u(((p_18 || (safe_lshift_func_uint16_t_u_s((p_18 = (((safe_lshift_func_int16_t_s_s((l_792 = (((safe_add_func_int16_t_s_s((((safe_sub_func_int16_t_s_s((p_18 > (p_17 == ((safe_sub_func_int32_t_s_s(((safe_add_func_uint8_t_u_u((g_337 = (((l_839 | (p_15 != (safe_lshift_func_int16_t_s_s((l_844 = ((safe_lshift_func_uint16_t_u_s((g_560 || ((g_134 == (-2L)) | 5UL)), 4)) || 0UL)), 11)))) != p_17) <= g_109)), (-3L))) && (-9L)), l_791)) <= 3UL))), 0xE994L)) < 0x3CL) | l_845), p_17)) != g_683) & l_790)), l_746)) >= l_723) >= 0UL)), 14))) & 0x58C5L), l_793)) > (-1L))) < g_129))) ^ l_790);
            for (g_40 = 16; (g_40 == 8); --g_40)
            {
                int8_t l_862 = 6L;
                int32_t l_885 = 1L;
                if ((safe_mod_func_int32_t_s_s((safe_rshift_func_int16_t_s_u((l_844 | (safe_mod_func_int32_t_s_s(1L, (safe_mod_func_uint16_t_u_u((safe_add_func_int32_t_s_s(l_723, (!(~p_19)))), (safe_rshift_func_uint8_t_u_u(((((g_109 &= l_792) < (l_862 = 255UL)) >= (safe_sub_func_uint32_t_u_u((l_721 && l_39), (safe_mod_func_int16_t_s_s((safe_mod_func_int8_t_s_s(l_775, 0xAEL)), 6UL))))) <= p_19), l_869))))))), p_18)), g_106)))
                {
                    uint32_t l_886 = 0UL;
                    int32_t l_927 = 0xCF1C58CAL;
                    l_886 = (g_134 & ((0x5DL | (safe_lshift_func_int8_t_s_s((((1UL && (g_109 = (((!(g_134 | ((l_792 = (safe_mod_func_int8_t_s_s(((0xA4ADDCB0L == (g_40 | (safe_mod_func_uint16_t_u_u(p_15, p_19)))) & (safe_mod_func_uint8_t_u_u((l_885 = (safe_rshift_func_uint16_t_u_u((l_883 != 0x66L), g_884))), g_105))), l_862))) & 0x22L))) & g_109) >= p_16))) || g_365) > 0L), p_15))) ^ g_362));
                    if (p_19)
                    {
                        uint16_t l_893 = 65533UL;
                        int32_t l_894 = (-10L);
                        l_721 = (safe_rshift_func_uint8_t_u_u((((safe_lshift_func_uint8_t_u_u(((g_109 | p_15) < g_713), 3)) || (p_19 = ((((p_15 <= (p_19 ^ (((l_894 = l_893) >= g_535) ^ g_135))) | (+l_819)) | 0x349DL) <= l_862))) ^ p_17), g_49));
                        l_885 ^= p_15;
                        if (g_561)
                            continue;
                        l_885 = (safe_add_func_uint32_t_u_u((safe_add_func_int8_t_s_s(7L, p_15)), ((p_16 ^ l_862) ^ (((+(((-3L) | (((0xE629L > (l_746 | (+(-1L)))) < (g_904 == 1UL)) <= g_683)) && p_17)) == g_105) != g_560))));
                    }
                    else
                    {
                        l_792 = ((safe_add_func_uint8_t_u_u((g_337 = p_15), 1UL)) & (safe_add_func_int32_t_s_s(p_17, g_130)));
                    }
                    if (p_18)
                        break;
                    if (l_793)
                    {
                        if (l_885)
                            break;
                        return l_790;
                    }
                    else
                    {
                        uint32_t l_926 = 0x81F86937L;
                        l_844 = (safe_mod_func_uint8_t_u_u((l_790 || ((((((g_50 >= 4L) && ((((safe_add_func_uint8_t_u_u(0x94L, (((l_928 ^= (p_17 < (!(safe_mod_func_int32_t_s_s((l_927 = ((safe_rshift_func_int16_t_s_u((-9L), l_885)) & (safe_mod_func_int32_t_s_s((((-5L) == (((safe_sub_func_int16_t_s_s((l_722 = ((g_110 = (safe_add_func_int8_t_s_s((safe_mod_func_int16_t_s_s(0xECBBL, p_17)), g_47))) || 0x643CECD2L)), g_708)) <= p_16) & g_683)) > l_886), l_926)))), p_18))))) < 0xC3F98CBEL) >= 4294967291UL))) && l_926) & g_25) | l_799)) | g_713) > 65526UL) ^ g_561) == p_17)), p_18));
                    }
                }
                else
                {
                    int32_t l_929 = 0x512A6437L;
                    if (l_793)
                        break;
                    l_929 |= 0x93189D29L;
                    l_885 = (safe_add_func_int16_t_s_s((safe_add_func_int32_t_s_s((safe_add_func_uint8_t_u_u((safe_unary_minus_func_uint8_t_u((p_16 & (l_39 = 1L)))), l_799)), ((p_16 < ((0UL | (safe_div_func_uint16_t_u_u((l_791 | l_819), l_790))) || ((((safe_add_func_uint16_t_u_u(p_19, l_775)) <= g_535) ^ g_40) >= 65535UL))) != l_819))), l_799));
                    l_793 = g_683;
                }
                g_134 = ((~g_109) ^ (safe_mod_func_uint32_t_u_u((((0L >= 255UL) & (((0L == ((safe_sub_func_uint32_t_u_u((g_560 >= (0x0105L > (safe_add_func_int32_t_s_s(((safe_unary_minus_func_uint32_t_u((l_844 ^= (5UL != ((safe_sub_func_uint8_t_u_u((l_793 = (g_365 == (l_869 <= p_17))), (-5L))) == g_561))))) && 0x92D0L), 0x030D819EL)))), 0UL)) > (-9L))) >= l_928) >= g_708)) < 0x94AC2959L), 1L)));
            }
            g_129 ^= ((0x4AL <= (l_953 ^= p_18)) < 0x79FAL);
        }
        g_134 = ((safe_sub_func_uint32_t_u_u(g_337, (p_19--))) || ((safe_div_func_uint32_t_u_u(0xB160626DL, ((0L && (l_984 = (safe_mod_func_uint8_t_u_u(l_953, (safe_sub_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_u(((safe_mod_func_uint8_t_u_u((((((((safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_u((+(safe_div_func_uint8_t_u_u((g_47 & (safe_div_func_uint8_t_u_u((5UL & (safe_lshift_func_int16_t_s_u(p_17, ((safe_rshift_func_int8_t_s_u(1L, 0)) >= (g_365 |= ((((safe_div_func_uint8_t_u_u(p_16, l_953)) >= (-1L)) > l_819) > 0xAF96L)))))), 0x13L))), 0x69L))), l_983)), p_16)) == (-4L)) || 0x900FL) >= p_19) & g_47) ^ l_953) != g_884), l_39)) <= l_983), 1)) > 65526UL), l_723)))))) | l_28))) != 1UL));
    }
    l_722 &= (g_25 < (((safe_add_func_int8_t_s_s(0L, l_39)) ^ ((0x0516L < g_47) >= g_40)) < (((p_15 != (1UL ^ g_904)) || p_17) > g_103)));
    l_39 = ((g_48 == (((((safe_mod_func_uint32_t_u_u((((safe_lshift_func_uint8_t_u_u((g_125 > (p_16 >= (safe_mod_func_int32_t_s_s(((((safe_lshift_func_uint16_t_u_s((safe_mod_func_uint16_t_u_u(((+(safe_rshift_func_int8_t_s_s((safe_mod_func_uint32_t_u_u(((((safe_rshift_func_uint8_t_u_s(0x95L, (l_721 = ((safe_rshift_func_uint16_t_u_u(((safe_mod_func_uint16_t_u_u(l_723, (safe_add_func_uint16_t_u_u(65528UL, (safe_add_func_uint32_t_u_u((l_722 ^= (((l_721 && (safe_rshift_func_uint8_t_u_u(p_18, 6))) < 3L) > g_105)), p_18)))))) >= g_904), 5)) >= l_746)))) ^ 0xECL) & g_337) < 65535UL), p_18)), 2))) > p_19), g_49)), g_713)) | l_723) <= 0x27L) >= 1UL), l_39)))), p_18)) != g_362) >= p_16), p_16)) < p_15) ^ 0x37L) >= 0x7318L) != l_799)) > l_746);
    return p_16;
}
static int8_t func_35(uint8_t p_36, int16_t p_37, uint8_t p_38)
{
    int16_t l_55 = 0x48C0L;
    int8_t l_70 = 0x75L;
    int32_t l_720 = 1L;
    --g_50;
    l_720 = ((safe_lshift_func_uint16_t_u_u(l_55, 8)) & func_56((+func_62((0xDC1BL != g_47), (((safe_mod_func_uint16_t_u_u(l_70, l_55)) > func_71(l_70, p_38)) <= l_70), p_38, l_55, g_47)), g_108, l_55, p_37));
    return l_55;
}
static uint32_t func_56(int8_t p_57, int32_t p_58, uint8_t p_59, int32_t p_60)
{
    uint32_t l_596 = 0x60034FCFL;
    uint16_t l_645 = 1UL;
    int32_t l_652 = 1L;
    int32_t l_656 = 1L;
    ++l_596;
    for (g_362 = (-14); (g_362 > (-24)); g_362 = safe_sub_func_uint8_t_u_u(g_362, 8))
    {
        uint16_t l_603 = 65532UL;
        uint32_t l_632 = 18446744073709551610UL;
        int32_t l_644 = 0x2A2A2713L;
        int32_t l_678 = (-1L);
        uint8_t l_707 = 0x51L;
        g_129 = 0L;
        if ((safe_add_func_uint16_t_u_u(p_59, l_603)))
        {
            uint32_t l_631 = 18446744073709551615UL;
            int32_t l_655 = 0xE8ABC02DL;
            int32_t l_679 = (-5L);
            int32_t l_681 = 0xF7B63D27L;
            int32_t l_682 = (-1L);
            uint16_t l_688 = 0x0BDEL;
            if ((safe_sub_func_int32_t_s_s(0x5881A768L, (((0x71L <= (safe_lshift_func_uint16_t_u_u(1UL, 15))) && g_110) <= ((safe_rshift_func_int16_t_s_s((((0xC4057CCAL ^ (safe_rshift_func_int16_t_s_u((safe_mod_func_int8_t_s_s(((safe_mod_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((p_60 == (safe_sub_func_uint32_t_u_u(((((safe_div_func_int16_t_s_s((p_59 || (safe_rshift_func_uint8_t_u_u((((safe_lshift_func_int8_t_s_s(((g_2 ^ ((+((safe_sub_func_uint32_t_u_u((safe_add_func_uint8_t_u_u(((p_57 | l_631) ^ 0x37689F0EL), g_109)), p_58)) || g_561)) > l_596)) == p_60), g_47)) | g_105) || g_125), g_40))), 1L)) | l_632) <= g_50) <= 0x61L), 8L))), p_57)), g_560)) | p_60), l_631)), g_255))) || p_59) ^ l_596), g_109)) > l_603)))))
            {
                int32_t l_653 = 0x32D2EFFFL;
                int32_t l_654 = 0x08967C49L;
                l_656 = ((0L != (safe_unary_minus_func_uint8_t_u((l_655 ^= (9L && (safe_add_func_int8_t_s_s(((g_105 == (safe_add_func_int32_t_s_s((g_107 = ((l_654 = ((safe_sub_func_int32_t_s_s((l_653 |= ((p_60 <= ((safe_div_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s(p_59, 1)), ((1L == (l_645--)) ^ ((((safe_lshift_func_int16_t_s_u((safe_div_func_int8_t_s_s((0xE6L && (((l_631 == (1L >= l_652)) > 0x166AL) || g_365)), p_57)), 13)) && p_57) >= 0x9B29BD16L) || p_57)))) && g_109)) <= l_632)), g_134)) > l_652)) < 0L)), (-2L)))) == p_57), (-7L)))))))) || (-10L));
                l_656 &= (-6L);
            }
            else
            {
                uint32_t l_672 = 7UL;
                int32_t l_676 = 1L;
                int32_t l_680 = 0x0B632932L;
                if (l_596)
                {
                    int16_t l_659 = 0x574DL;
                    uint32_t l_664 = 0UL;
                    int32_t l_665 = 0xD34D6D19L;
                    int8_t l_673 = 3L;
                    int32_t l_677 = (-1L);
                    g_129 = (safe_mod_func_int8_t_s_s(((l_659 ^ (~(safe_add_func_int32_t_s_s((!((((l_665 = l_664) && (safe_sub_func_int16_t_s_s((((safe_rshift_func_int16_t_s_s((safe_add_func_uint32_t_u_u(((l_656 = p_60) | (l_672 = (4294967290UL <= 0x24088018L))), (l_673 != ((safe_add_func_int32_t_s_s((0x1508L != (l_676 ^= p_60)), ((l_665 |= (g_47 == p_58)) >= g_337))) && p_57)))), g_109)) <= l_631) ^ 4294967295UL), g_337))) && l_596) >= 0x1DED383BL)), 0x71C8160CL)))) & l_659), p_60));
                    g_683++;
                }
                else
                {
                    g_129 = (safe_mod_func_uint16_t_u_u((p_58 ^ 0xC6L), p_58));
                }
                p_60 = p_58;
            }
            l_688++;
            g_134 = 0x447C7C14L;
        }
        else
        {
            int16_t l_693 = 0xBD22L;
            l_656 = ((safe_mod_func_int32_t_s_s(((l_693 < (0x19L | (((p_57 = (g_106 ^ (((safe_lshift_func_uint8_t_u_u(l_693, 4)) <= (((safe_div_func_int8_t_s_s((((safe_lshift_func_uint8_t_u_u(p_60, 2)) || ((l_693 && ((safe_lshift_func_uint8_t_u_u(0xBFL, 0)) | (+(safe_sub_func_int8_t_s_s((g_49 = l_693), (0xBE786453L != g_683)))))) || 255UL)) & 65533UL), p_57)) == p_59) != 9UL)) && l_707))) == 1UL) < 4L))) ^ p_58), l_644)) || g_107);
            --g_708;
        }
        g_107 ^= (g_683 ^ ((l_656 ^= (((((l_644 = g_708) & (0L <= (safe_sub_func_uint8_t_u_u(g_713, (safe_mod_func_uint32_t_u_u((safe_sub_func_int16_t_s_s(0L, g_683)), (safe_rshift_func_uint8_t_u_s(g_713, p_57)))))))) <= p_57) == l_603) != p_59)) <= p_57));
    }
    return l_645;
}
static uint16_t func_62(int8_t p_63, int16_t p_64, int16_t p_65, int32_t p_66, int32_t p_67)
{
    uint32_t l_586 = 0x1580ADB6L;
    int32_t l_587 = 0L;
    int32_t l_592 = 0x00860358L;
    int32_t l_595 = (-4L);
    g_107 |= (safe_lshift_func_uint16_t_u_u(g_535, (safe_mod_func_uint16_t_u_u((l_587 |= l_586), (safe_sub_func_int32_t_s_s(0xDBEEDF3FL, ((safe_add_func_int32_t_s_s(g_108, l_586)) <= ((l_595 = ((((l_592 = 0x28L) <= (safe_lshift_func_uint8_t_u_u((g_362 < g_125), 0))) | (g_129 = (((0xFBDF4B2BL != p_64) != g_50) < l_586))) == 4294967286UL)) ^ 0L))))))));
    p_67 = 3L;
    return l_586;
}
static int16_t func_71(int32_t p_72, uint32_t p_73)
{
    uint32_t l_74 = 1UL;
    int32_t l_75 = 0xDC0AC77AL;
    int32_t l_80 = 0x21A16747L;
    int32_t l_208 = 0x527D319CL;
    int32_t l_286 = 0x47551151L;
    int32_t l_320 = 0L;
    int16_t l_428 = (-1L);
    int8_t l_451 = (-2L);
    uint32_t l_499 = 0x7BE2BC12L;
    int32_t l_574 = (-6L);
    int32_t l_581 = 0xBA4ABCE9L;
    l_75 = l_74;
    if ((safe_div_func_uint8_t_u_u(func_78(l_80), (safe_sub_func_uint8_t_u_u((g_47 == p_72), (safe_rshift_func_int16_t_s_u(((l_75 | (((safe_add_func_int16_t_s_s((l_74 < (safe_sub_func_uint8_t_u_u(((safe_unary_minus_func_int8_t_s(((g_125 = (!(((safe_sub_func_int32_t_s_s((l_80 <= l_74), g_49)) > p_72) == g_108))) != p_72))) && l_75), 0x4BL))), g_47)) <= 0xA474L) && 1UL)) > p_73), l_74)))))))
    {
        int16_t l_128 = 0xF133L;
        int32_t l_147 = 1L;
        uint32_t l_242 = 18446744073709551610UL;
        int32_t l_244 = 1L;
        int8_t l_324 = (-1L);
        int16_t l_374 = 0xABCBL;
        int32_t l_415 = 0xA66112EBL;
        for (g_106 = 0; (g_106 != 19); g_106++)
        {
            int16_t l_133 = 0xF6C9L;
            int32_t l_220 = 9L;
            uint8_t l_247 = 0xC4L;
            ++g_130;
            g_135++;
            if ((safe_rshift_func_uint8_t_u_u(((((p_72 <= l_133) == (((g_134 >= g_50) || g_107) > (((g_47 >= ((safe_rshift_func_uint16_t_u_s((safe_sub_func_uint16_t_u_u((~(-1L)), (p_72 > ((l_147 = (safe_mod_func_uint8_t_u_u(p_73, p_73))) >= g_47)))), 10)) && g_130)) & g_134) | 0xF1L))) == l_128) != g_47), g_2)))
            {
                int32_t l_167 = (-10L);
                int32_t l_176 = 0xE61BCAB2L;
                uint32_t l_219 = 0UL;
                for (l_128 = 0; (l_128 != 7); ++l_128)
                {
                    uint32_t l_163 = 0x93E3F5A7L;
                    int32_t l_164 = 0x54492987L;
                    p_72 = (safe_rshift_func_uint8_t_u_u((p_73 || ((((~(l_75 |= (((g_47 <= (safe_rshift_func_int8_t_s_s((safe_add_func_uint8_t_u_u(p_73, l_74)), 7))) || (safe_unary_minus_func_uint16_t_u((0x6F9336AEL <= ((safe_lshift_func_int8_t_s_u((safe_mod_func_uint32_t_u_u(((l_164 = ((2UL == g_103) < (!l_163))) & (p_73 > g_106)), g_135)), l_74)) & g_40))))) | (-1L)))) ^ g_134) & 4294967293UL) || 0xD487E53EL)), g_110));
                    p_72 = g_48;
                }
                p_72 = l_147;
                if ((safe_sub_func_int16_t_s_s((l_167 <= (p_72 >= (safe_lshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_u((((l_147 = g_103) ^ (safe_div_func_uint8_t_u_u((g_48 = (safe_lshift_func_int16_t_s_u(g_107, (4294967295UL == (l_176 = l_167))))), 2UL))) >= g_109), 3)), 9)))), (safe_div_func_int8_t_s_s((g_50 ^ 4294967295UL), 0x1DL)))))
                {
                    return p_72;
                }
                else
                {
                    uint32_t l_181 = 2UL;
                    for (l_74 = 0; (l_74 < 19); l_74 = safe_add_func_int32_t_s_s(l_74, 3))
                    {
                        --l_181;
                        l_75 = l_133;
                    }
                }
                l_220 |= ((safe_rshift_func_int8_t_s_u(((safe_unary_minus_func_int8_t_s((((safe_div_func_uint8_t_u_u(((((safe_mod_func_int16_t_s_s((g_48 < ((safe_unary_minus_func_int8_t_s((safe_div_func_uint32_t_u_u(((p_72 != 0x7960L) > (safe_mod_func_int8_t_s_s(((l_208 ^= (((l_75 = 3L) == (safe_rshift_func_int8_t_s_s((safe_div_func_int16_t_s_s(((safe_mod_func_int16_t_s_s((safe_rshift_func_int16_t_s_u((safe_mod_func_int16_t_s_s(g_103, (g_50--))), ((safe_sub_func_int16_t_s_s((l_74 || (safe_add_func_int8_t_s_s(1L, ((safe_add_func_int8_t_s_s((0xF12706A3L == ((safe_mod_func_int8_t_s_s(g_47, l_80)) && 0xD12DL)), l_219)) | l_133)))), l_133)) & l_167))), l_128)) || l_219), p_73)), 1))) && 0xC4L)) | p_73), g_105))), 0xB7A5A4E8L)))) == p_72)), p_73)) >= p_73) <= 0x01D1L) && 0x74L), g_105)) || 0x6B9C5361L) < 0xC709L))) || 0xD4L), 4)) && g_107);
            }
            else
            {
                uint32_t l_243 = 0xBBB90FA7L;
                int32_t l_268 = 0xD0A50024L;
                int32_t l_269 = 0x0D40F6A6L;
                if (((l_147 <= p_72) >= (safe_unary_minus_func_uint16_t_u(((safe_mod_func_int32_t_s_s((safe_div_func_int8_t_s_s((((l_244 |= (g_129 = ((-9L) != ((((0UL < (safe_rshift_func_int8_t_s_s(0L, 4))) || ((0L | (((((safe_lshift_func_int8_t_s_u(p_72, 2)) && (((((((safe_mod_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((-8L), (safe_lshift_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((((p_73 ^ g_49) <= 1UL) > p_72), p_73)), g_103)), 1L)), 2)))), l_147)) & l_133) & l_242) && p_72) | (-1L)) || l_243) & l_243)) < g_105) | l_220) == 0x99L)) | 0L)) < g_103) != p_72)))) < l_243) > p_73), 0x1AL)), l_243)) && p_72)))))
                {
                    uint8_t l_252 = 255UL;
                    for (p_73 = 0; (p_73 <= 20); p_73 = safe_add_func_int8_t_s_s(p_73, 3))
                    {
                        l_247--;
                    }
                    l_244 = (0x4FA5L > (p_73 <= (l_269 = (safe_add_func_int16_t_s_s(l_252, ((g_107 ^ (g_49 = ((safe_sub_func_int16_t_s_s(((g_255 = 0x3B87L) || (((l_268 = (safe_lshift_func_uint8_t_u_s(((l_247 == l_220) || (safe_lshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s((safe_div_func_uint16_t_u_u(((l_220 ^= (((g_49 | ((safe_lshift_func_int8_t_s_u(1L, 3)) != l_147)) & p_72) <= g_47)) && p_73), 1UL)), 5)), 4))), l_243))) == g_50) > p_72)), g_103)) | p_73))) ^ 0x75L))))));
                }
                else
                {
                    uint32_t l_270 = 0x09B231F3L;
                    return l_270;
                }
                g_134 = (g_106 && ((safe_div_func_int32_t_s_s((((-1L) < (safe_lshift_func_int8_t_s_u((l_147 = (safe_sub_func_int8_t_s_s(p_73, (((safe_mod_func_int16_t_s_s((0x71D432E6L >= (g_107 = (p_73 >= (safe_unary_minus_func_int16_t_s(g_105))))), (--g_50))) && (p_73 <= (((safe_sub_func_uint8_t_u_u((0x6FCCL ^ (0UL == l_242)), g_48)) <= g_110) && p_72))) >= l_75)))), 5))) >= 0xB4L), g_125)) < (-1L)));
            }
            p_72 ^= (safe_rshift_func_uint8_t_u_s(((-2L) > (p_73++)), 1));
        }
        if (g_135)
        {
            uint32_t l_319 = 0xAC39EC93L;
            int32_t l_501 = 0L;
            int32_t l_504 = (-1L);
            uint16_t l_532 = 1UL;
            if ((((safe_div_func_int32_t_s_s((p_72 <= (g_2 ^ g_125)), p_72)) | 0x40BFAE5DL) ^ (safe_mod_func_int16_t_s_s(((safe_div_func_int8_t_s_s((l_244 ^= ((p_73 <= (l_74 > (safe_sub_func_uint16_t_u_u((((g_105++) || l_80) <= (safe_sub_func_uint8_t_u_u((((safe_add_func_int8_t_s_s((((l_208 = (0xCEL == g_2)) == 8L) || 0x9BL), g_50)) <= 0x50234E0BL) && p_72), l_128))), g_134)))) ^ g_135)), 0x45L)) ^ (-1L)), 0xD6B2L))))
            {
                int32_t l_316 = 0x0E685772L;
                int32_t l_331 = (-8L);
                int32_t l_348 = 0xF1B08C51L;
                if (l_128)
                {
                    int8_t l_306 = 0x0CL;
                    if ((((((safe_mod_func_uint32_t_u_u((p_73 = 0UL), (safe_unary_minus_func_uint8_t_u((l_306 >= ((0x0C17DBC7L ^ ((((p_72 | (!((((safe_mod_func_int8_t_s_s((p_72 != (((safe_sub_func_int32_t_s_s((-1L), (0x513F4536L < (((safe_mod_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(l_316, (((safe_mod_func_int16_t_s_s(l_316, p_72)) != p_72) || l_319))), g_50)) <= p_72) | g_107)))) != p_72) | l_319)), l_80)) != 0xA1AFL) < p_72) || 0xD07945E1L))) || 0x2CL) > l_320) == 0UL)) ^ l_147)))))) == p_72) || l_244) > p_72) & l_319))
                    {
                        uint32_t l_321 = 4294967295UL;
                        int32_t l_336 = 0x4FBD2D9BL;
                        l_208 = (l_321 == (safe_sub_func_int16_t_s_s(p_73, (l_324 >= (safe_sub_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s((g_134 >= l_208), 0)), ((safe_sub_func_int8_t_s_s((l_331 = g_109), (l_336 ^= (safe_div_func_uint32_t_u_u((--g_110), g_2))))) < (((((g_337 ^= l_316) & (safe_rshift_func_uint16_t_u_u((safe_div_func_int32_t_s_s(((safe_sub_func_uint32_t_u_u((p_73 == 0UL), g_134)) != 0xA5L), g_130)), g_134))) ^ g_105) <= 0L) ^ 0x78B05629L))))))));
                        g_134 = g_105;
                        p_72 = ((l_336 &= g_109) < ((safe_rshift_func_uint8_t_u_u((((safe_rshift_func_int16_t_s_u((l_348 = (l_331 = g_47)), 10)) <= (+(safe_lshift_func_uint16_t_u_u((l_319 ^ ((safe_rshift_func_uint16_t_u_u(l_319, 5)) | (safe_unary_minus_func_uint16_t_u(g_255)))), 10)))) != ((safe_div_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(l_319, 0xB4L)), (0xCED4L & g_2))) & (-3L))), g_110)) > l_306));
                    }
                    else
                    {
                        return l_306;
                    }
                }
                else
                {
                    int32_t l_361 = 0x061F076CL;
                    p_72 = (((((safe_div_func_int16_t_s_s((g_362 = l_361), (safe_lshift_func_int16_t_s_s((g_365 ^= g_125), ((safe_div_func_uint8_t_u_u((((p_73 > (safe_mod_func_int8_t_s_s(((l_374 ^= (safe_mod_func_uint32_t_u_u(((g_105 ^= 1UL) ^ g_107), (g_255 | (g_135--))))) >= ((safe_rshift_func_uint16_t_u_s(0x4AC5L, ((0x0CL && 0x13L) ^ l_331))) < p_72)), p_73))) | p_73) && g_106), g_337)) == 0xC6L))))) != g_255) > l_361) | l_147) && l_374);
                }
            }
            else
            {
                uint8_t l_391 = 0x2FL;
                int32_t l_414 = 0xF4F9BA95L;
                int32_t l_429 = 0L;
                l_415 &= (safe_sub_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(((safe_rshift_func_uint8_t_u_s((l_147 = p_73), 2)) && (((safe_sub_func_uint16_t_u_u((safe_add_func_int16_t_s_s((safe_add_func_int8_t_s_s((safe_add_func_int8_t_s_s((((++l_391) > (((safe_sub_func_uint16_t_u_u((1L & (safe_add_func_uint8_t_u_u((l_414 = (safe_div_func_int32_t_s_s((((!0x5AL) ^ ((safe_add_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((safe_unary_minus_func_uint8_t_u(p_72)), g_40)), (safe_sub_func_uint16_t_u_u((g_50 = ((safe_div_func_uint16_t_u_u(l_244, ((g_48 | (safe_add_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((9L != p_72), (-3L))), p_72))) ^ p_72))) & p_73)), l_319)))) != 0xC1L)) >= p_72), l_244))), p_72))), l_319)) & (-1L)) == 0x8548L)) == 0xD532L), 0L)), g_2)), 65535UL)), g_49)) & g_130) | p_72)), g_105)), p_73));
                l_429 |= (safe_unary_minus_func_uint8_t_u((safe_lshift_func_uint8_t_u_s((g_105 <= p_72), (safe_mod_func_int8_t_s_s(((!g_362) & (l_414 = ((l_128 != (safe_add_func_uint16_t_u_u(0x4DDFL, (g_106 && ((safe_add_func_uint16_t_u_u((l_415 = (p_73 || ((safe_lshift_func_uint16_t_u_s((g_47 < 0L), 15)) & 0xF9L))), l_428)) >= 7UL))))) > g_40))), (-7L)))))));
                g_134 &= (p_72 != (p_73 > (l_242 ^ (safe_add_func_uint8_t_u_u(((safe_div_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u(((safe_rshift_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((0x1AC8A185L && (safe_lshift_func_uint8_t_u_s(((l_319 != ((l_414 | (((+(safe_div_func_uint16_t_u_u(l_319, 0x3706L))) == (safe_lshift_func_int8_t_s_u((safe_mod_func_uint8_t_u_u(p_72, p_73)), l_319))) & g_107)) == l_74)) <= l_451), g_365))), 0UL)), l_429)) >= p_73), g_103)), g_337)) <= g_47), g_135)))));
            }
            if ((safe_div_func_int32_t_s_s(((((safe_sub_func_int16_t_s_s(((((((safe_sub_func_int32_t_s_s(0L, (safe_add_func_uint32_t_u_u(l_128, ((((l_128 || (p_72 & ((safe_rshift_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_s(0x7C6BL, 5)), 5)), ((((l_319 && 4294967292UL) < ((g_109 = (safe_add_func_uint8_t_u_u((g_48 = ((safe_unary_minus_func_uint16_t_u((safe_rshift_func_int16_t_s_u(((-1L) <= (safe_mod_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((0UL ^ 0x909D75B0L), 12)), 0xC816L))), 11)))) > p_72)), 1UL))) ^ l_319)) >= l_415) | l_415))), p_73)), 9)) == l_451))) && l_451) >= p_72) < 4L))))) <= p_72) || 0UL) >= l_244) == g_106) & 0x8549FEF6L), 1L)) ^ 0UL) >= (-1L)) >= g_107), (-1L))))
            {
                uint32_t l_500 = 0x28EAB548L;
                int32_t l_533 = 0x4C1D7989L;
                if (((l_501 = ((safe_div_func_int32_t_s_s(1L, 1UL)) && (safe_add_func_uint8_t_u_u((safe_div_func_uint16_t_u_u((safe_add_func_int8_t_s_s((safe_add_func_uint8_t_u_u((((((safe_div_func_int16_t_s_s((((l_374 == ((((safe_lshift_func_uint8_t_u_s(((g_255 > g_109) && (g_50 = p_73)), 4)) & 0UL) == ((safe_sub_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(((g_129 = ((safe_add_func_uint16_t_u_u(0x814EL, (((((((p_72 > l_319) != g_365) < 0x11568D6CL) > 1L) < g_337) == g_130) | (-9L)))) > p_73)) != 0x4F2D4D63L), l_499)), 0xC077L)) <= 0x36L)) < g_365)) && l_319) > 0x8CF9L), l_500)) != l_324) < l_500) & l_451) != g_107), p_72)), 0x8FL)), l_242)), l_244)))) < 0xF9L))
                {
                    uint32_t l_505 = 0x1BACA6DEL;
                    int32_t l_516 = 0x17299EE6L;
                    for (l_75 = 0; (l_75 > (-11)); l_75 = safe_sub_func_uint32_t_u_u(l_75, 8))
                    {
                        --l_505;
                        g_134 = (safe_lshift_func_uint16_t_u_s(l_500, 15));
                    }
                    p_72 = ((0x3D4E59D6L == 4294967295UL) > (safe_sub_func_uint16_t_u_u((((((((g_49 = (p_72 || g_48)) <= p_72) | 0L) ^ (safe_lshift_func_uint8_t_u_u(g_255, 7))) < ((safe_rshift_func_uint8_t_u_u((l_516 |= (((p_73 & p_73) | 0x645BF232L) >= 0xC3L)), 3)) || g_255)) >= 0x6CL) != g_103), (-6L))));
                    g_107 = g_40;
                    g_134 |= (-6L);
                }
                else
                {
                    uint16_t l_531 = 0xBA0FL;
                    int32_t l_534 = 0x387373AFL;
                    uint32_t l_540 = 0x322E93CFL;
                    g_107 &= ((safe_lshift_func_int8_t_s_s(((safe_mod_func_uint16_t_u_u((g_50 = (safe_sub_func_int16_t_s_s((0x8C950F7EL < 0x795FE38EL), (~p_73)))), ((safe_unary_minus_func_int8_t_s(g_109)) && 0x7B6BB726L))) & (g_40 >= ((safe_sub_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(p_73, 3)), (((((p_72 & (1UL & g_130)) < l_531) ^ (-10L)) >= p_73) || 0xA5L))) == 0xB3L))), g_337)) >= l_532);
                    ++g_535;
                    for (l_319 = 0; (l_319 > 37); l_319++)
                    {
                        return l_531;
                    }
                    l_540--;
                }
                return g_108;
            }
            else
            {
                uint8_t l_556 = 0xE9L;
                g_129 &= (!(g_105 &= 0xD536L));
                for (l_451 = (-15); (l_451 == 5); l_451++)
                {
                    l_501 &= ((l_556 = (safe_rshift_func_int8_t_s_u(((safe_add_func_uint16_t_u_u(p_72, ((p_72 && (p_72 | (l_504 = (g_535 > p_72)))) & (safe_mod_func_uint8_t_u_u((safe_add_func_int8_t_s_s(0xD5L, (l_499 == (g_362 = (safe_rshift_func_uint8_t_u_u(((l_320 |= (248UL & p_72)) <= l_286), 7)))))), 251UL))))) ^ (-10L)), p_72))) != 0x52L);
                    l_504 ^= (g_535 ^ g_49);
                }
                g_134 = (p_72 |= 0xC9BEFE6AL);
            }
            l_415 = (0xBF0AL && p_72);
        }
        else
        {
            uint32_t l_557 = 1UL;
            g_129 &= l_415;
            l_557++;
        }
    }
    else
    {
        g_561++;
    }
    g_129 = ((safe_lshift_func_int16_t_s_u((safe_add_func_int16_t_s_s(g_130, (safe_div_func_uint16_t_u_u(((g_337 = 0x5BL) > (safe_mod_func_uint32_t_u_u((safe_mul_func_int32_t_s_s((l_208 = (l_574 = (g_134 = 1L))), (0x2B79L == (safe_div_func_int16_t_s_s((l_75 == (l_286 ^= ((p_72 < ((safe_div_func_uint32_t_u_u((((safe_rshift_func_int8_t_s_s(((l_581 == (p_72 >= l_74)) ^ g_103), 4)) < (-1L)) <= (-9L)), 0xDE635F22L)) <= g_110)) <= l_428))), g_40))))), p_73))), 0x859AL)))), 10)) == g_106);
    return l_320;
}
static uint8_t func_78(uint32_t p_79)
{
    uint16_t l_84 = 65535UL;
    int32_t l_90 = 0x88A0E7B2L;
    int32_t l_101 = 0xCEEEC855L;
    int8_t l_102 = 9L;
    g_105 = func_81(((safe_unary_minus_func_uint16_t_u(l_84)) < ((l_90 ^= func_85(p_79)) <= ((((g_103 ^= (safe_rshift_func_uint8_t_u_s(((safe_lshift_func_uint16_t_u_s((safe_add_func_int8_t_s_s((p_79 || p_79), ((((0x4638L < 8L) & (safe_sub_func_int16_t_s_s((l_101 = (safe_lshift_func_int8_t_s_u(g_2, 0))), l_102))) > 9L) == l_102))), 12)) == p_79), 2))) ^ g_48) | l_84) || p_79))));
    l_90 = 0x0E7AF825L;
    g_106 &= 0x10F657D2L;
    ++g_110;
    return l_102;
}
static int32_t func_81(int8_t p_82)
{
    int32_t l_104 = 0L;
    return l_104;
}
static uint8_t func_85(uint16_t p_86)
{
    for (g_50 = 0; (g_50 != 60); g_50 = safe_add_func_int16_t_s_s(g_50, 1))
    {
        int8_t l_89 = 0xCFL;
        l_89 ^= (-6L);
    }
    return g_2;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_2;
    csmith_sink_ = g_25;
    csmith_sink_ = g_40;
    csmith_sink_ = g_47;
    csmith_sink_ = g_48;
    csmith_sink_ = g_49;
    csmith_sink_ = g_50;
    csmith_sink_ = g_103;
    csmith_sink_ = g_105;
    csmith_sink_ = g_106;
    csmith_sink_ = g_107;
    csmith_sink_ = g_108;
    csmith_sink_ = g_109;
    csmith_sink_ = g_110;
    csmith_sink_ = g_125;
    csmith_sink_ = g_129;
    csmith_sink_ = g_130;
    csmith_sink_ = g_134;
    csmith_sink_ = g_135;
    csmith_sink_ = g_255;
    csmith_sink_ = g_337;
    csmith_sink_ = g_362;
    csmith_sink_ = g_365;
    csmith_sink_ = g_535;
    csmith_sink_ = g_560;
    csmith_sink_ = g_561;
    csmith_sink_ = g_683;
    csmith_sink_ = g_708;
    csmith_sink_ = g_713;
    csmith_sink_ = g_820;
    csmith_sink_ = g_884;
    csmith_sink_ = g_904;
    csmith_sink_ = g_1043;
    csmith_sink_ = g_1123;
    csmith_sink_ = g_1124;
    csmith_sink_ = g_1134;
    platform_main_end(0,0);
    return 0;
}
