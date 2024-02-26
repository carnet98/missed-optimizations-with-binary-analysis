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
static uint32_t g_25 = 0x09CB0BEF;
static uint32_t g_26 = 4294967289U;
static int32_t g_61 = (-10);
static int32_t g_80 = 0;
static int32_t g_83 = 0x07B8A5F0;
static int8_t g_88 = 0x41;
static uint16_t g_89 = 6U;
static int8_t g_164 = 0xA1;
static uint32_t g_219 = 1U;
static uint8_t g_226 = 0U;
static uint8_t g_248 = 0x13;
static uint32_t g_272 = 4294967291U;
static int16_t g_286 = 2;
static uint16_t g_347 = 0xFF3E;
static uint32_t g_374 = 0x52AFE84F;
static uint8_t g_377 = 255U;
static uint32_t g_378 = 6U;
static uint32_t g_444 = 0x4546C99F;
static int16_t g_466 = 0x54CA;
static int8_t g_467 = 0xF4;
static uint16_t g_468 = 65535U;
static int32_t g_603 = 0xFD403C21;
static uint32_t g_604 = 0U;
static int8_t g_609 = 3;
static uint8_t g_614 = 0xC8;
static uint32_t g_711 = 0xBA3C89F3;
static uint32_t g_715 = 1U;
static uint32_t g_720 = 4U;
static int16_t g_784 = 0xAD06;
static uint16_t g_785 = 65535U;
static uint32_t g_825 = 0xECEEE7F7;
static uint32_t func_1(void);
inline static int16_t func_6(uint16_t p_7, int16_t p_8, const uint16_t p_9);
inline static int16_t func_14(int16_t p_15, int8_t p_16, uint32_t p_17);
inline static int32_t func_28(uint32_t p_29);
inline static int16_t func_34(uint32_t p_35, const int32_t p_36, int16_t p_37, int16_t p_38, uint8_t p_39);
inline static int16_t func_40(int16_t p_41, const uint16_t p_42, int8_t p_43, int16_t p_44);
inline static uint32_t func_45(uint16_t p_46, uint16_t p_47, uint32_t p_48, uint32_t p_49, uint32_t p_50);
inline static const int32_t func_62(uint8_t p_63);
inline static int16_t func_69(const int32_t p_70, int8_t p_71, uint8_t p_72, int8_t p_73);
inline static uint16_t func_75(const uint32_t p_76, const uint32_t p_77, uint16_t p_78, int32_t p_79);
static uint32_t func_1(void)
{
    int32_t l_18 = 0;
    int32_t l_27 = 0;
    int32_t l_60 = 0x298C245E;
    int32_t l_376 = (-1);
    int32_t l_822 = 0xA5FD0AF0;
    int32_t l_823 = (-8);
    int8_t l_824 = 0xB0;
    uint16_t l_826 = 1U;
    g_825 = (l_824 = ((safe_mod_func_uint8_t_u_u((l_823 &= (252U & (((safe_mul_func_int16_t_s_s((l_822 = func_6((safe_mod_func_int32_t_s_s((safe_lshift_func_int8_t_s_s((func_14((l_18 > ((safe_add_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(l_18, (l_27 = (g_26 = g_25)))), 6)) > (func_28((g_377 |= (safe_add_func_int16_t_s_s((l_376 = (safe_sub_func_uint8_t_u_u((func_34((g_248 = (0xA08B > func_40(g_25, ((func_45(l_18, (+((safe_lshift_func_int8_t_s_u((safe_div_func_int32_t_s_s((safe_mul_func_uint8_t_u_u(((g_61 = (l_60 = (safe_lshift_func_uint8_t_u_u(l_18, g_25)))) ^ l_18), l_18)), l_18)), l_18)) && g_25)), l_18, g_25, l_18) <= g_25) < g_25), g_88, l_18))), g_25, l_18, g_25, l_18) & g_88), 0x72))), 0x20F7)))) != 0xA7D87469)), g_88)) | 0xCC)), l_18, g_378) < l_18), l_18)), g_603)), l_18, l_18)), g_609)) & 0xA50D) & g_25))), 0x80)) >= g_711));
    return l_826;
}
inline static int16_t func_6(uint16_t p_7, int16_t p_8, const uint16_t p_9)
{
    int8_t l_729 = 1;
    int32_t l_732 = 0x79C30704;
    int32_t l_733 = (-5);
    int32_t l_734 = 0x76F203C2;
    l_733 |= (safe_sub_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_u(l_729, 6)), 6)), (safe_add_func_int32_t_s_s((-1), (l_734 = (g_219++))))));
    if ((safe_sub_func_int32_t_s_s((safe_mod_func_uint16_t_u_u((((((safe_mod_func_int32_t_s_s((~((p_8 & g_604) && (safe_mod_func_int32_t_s_s(0x136F0ECD, p_9)))), 0xA43EBCED)) && (safe_div_func_uint32_t_u_u((0xF6 && g_378), (safe_mod_func_uint32_t_u_u(((safe_add_func_uint16_t_u_u(0x93B3, l_729)) <= 0x6E86), p_9))))) == g_466) & 1U) == l_734), l_734)), p_8)))
    {
        int32_t l_752 = 0x6406CD2A;
        g_80 = (l_752 > l_729);
    }
    else
    {
        uint16_t l_768 = 0x31FD;
        uint32_t l_781 = 4294967292U;
        int32_t l_782 = 0x3C0790F9;
        int32_t l_783 = 1;
        for (g_83 = (-6); (g_83 > 25); g_83 = safe_add_func_uint32_t_u_u(g_83, 4))
        {
            int16_t l_759 = 0x26FB;
            l_734 = (safe_mod_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(g_377, l_759)), (safe_rshift_func_uint16_t_u_u(p_8, 4))));
            g_80 = ((--g_468) || ((safe_add_func_int32_t_s_s(((p_8 = (safe_mul_func_int8_t_s_s((l_768 != (+(((safe_rshift_func_int16_t_s_u((((safe_mod_func_uint32_t_u_u(((0x70CE4459 > (l_759 < 0x2417)) < (+((safe_div_func_uint8_t_u_u(p_9, (safe_lshift_func_int16_t_s_s((g_164 == ((0xB571 || g_25) ^ (((((((safe_mul_func_int16_t_s_s(((p_7 <= p_7) != p_9), p_7)) >= g_89) == p_7) < 0x1A11) && l_759) != g_219) | 0x0B71))), p_8)))) >= 0x4AFA983C))), p_8)) == 65535U) || g_614), l_781)) >= l_768) <= l_759))), 0xDF))) && l_781), 0x9E2E698B)) & l_733));
        }
        g_785--;
    }
    for (l_734 = (-7); (l_734 == (-11)); --l_734)
    {
        const uint8_t l_790 = 0x03;
        int32_t l_818 = 8;
        g_80 = (l_790 == (~((0x03BE7347 & p_7) && (g_785 >= (!((safe_mul_func_uint8_t_u_u((((l_733 = ((safe_sub_func_uint32_t_u_u(((safe_mod_func_uint16_t_u_u(((l_732 = ((((safe_rshift_func_int16_t_s_s((p_7 & (l_790 ^ (safe_add_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((g_377 = (safe_mul_func_int8_t_s_s((((safe_mod_func_uint32_t_u_u(((((safe_lshift_func_uint8_t_u_s(g_219, 3)) == (!p_8)) ^ ((safe_lshift_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(l_818, l_790)), 12)) != 7U)) ^ 3), p_9)) < g_88) == 1), l_729))), g_374)), g_720)))), p_9)) < p_7) | 1) ^ 0U)) >= l_733), g_347)) < 0xDEA4AFD8), 0x4A6B9152)) <= g_88)) | 0x8CED105A) && p_9), l_818)) < 0xBC))))));
    }
    for (g_378 = (-18); (g_378 < 12); g_378 = safe_add_func_int32_t_s_s(g_378, 3))
    {
        uint16_t l_821 = 1U;
        return l_821;
    }
    return l_734;
}
inline static int16_t func_14(int16_t p_15, int8_t p_16, uint32_t p_17)
{
    uint32_t l_381 = 1U;
    int32_t l_411 = 0x889EB8E4;
    uint16_t l_446 = 0U;
    int32_t l_594 = 1;
    int32_t l_610 = (-1);
    int32_t l_611 = (-10);
    int32_t l_612 = 0x2A946E74;
    uint32_t l_629 = 4294967289U;
    uint8_t l_691 = 246U;
    int32_t l_712 = 0x1E2F8527;
    int32_t l_718 = 0x6CCF4F49;
    int32_t l_719 = 0x7287F9EC;
    if (((l_381 &= (((0x4DEA == (-1)) ^ (safe_mul_func_int8_t_s_s(g_374, ((0x4BD023BC && p_17) > p_15)))) || 4294967287U)) <= ((safe_div_func_uint32_t_u_u((safe_div_func_int32_t_s_s(0x56860F10, (safe_add_func_uint16_t_u_u(g_89, 0xA874)))), 0xD3B933D1)) ^ p_17)))
    {
        int8_t l_410 = 0;
        int32_t l_417 = 0x62BF705E;
        int32_t l_461 = 4;
        uint32_t l_593 = 1U;
        int32_t l_607 = 0x092FE014;
        int32_t l_608 = 0x827ED631;
        uint16_t l_619 = 8U;
        if ((safe_rshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u(p_15, (p_16 = g_80))), (l_411 = ((safe_mod_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((l_381 || ((((safe_div_func_int8_t_s_s((((safe_rshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u((p_15 | (g_25 < ((5U == 0x371F) >= p_15))), ((safe_lshift_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s(((1 ^ 0x9F) || 0x2D), l_410)), l_381)), 0)) != 4))), 4)) > 0xD2FD) != 0x2D076111), p_15)) < l_381) == l_410) < g_89)), 0xB076)), 0x02)) != l_410)))), 5)))
        {
            int32_t l_463 = 0x417AA079;
            int8_t l_464 = 0xFD;
            int32_t l_492 = 0x15E0714F;
            int32_t l_602 = 0x4710C580;
            int32_t l_613 = 0x87055465;
            if (((safe_div_func_int32_t_s_s(g_286, (safe_sub_func_uint16_t_u_u(((g_83 == (0x57 != ((l_417 = (!p_15)) || 251U))) || (0xFE86 >= 0x8F6F)), ((safe_mod_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((-10), (1U > g_83))), 0x94)), 0x19)) >= 1))))) & g_61))
            {
                int32_t l_445 = 0x62337F8D;
                int32_t l_469 = 1;
                g_83 = (safe_mul_func_uint8_t_u_u((((safe_mul_func_uint16_t_u_u(p_17, (safe_div_func_uint16_t_u_u((!(safe_rshift_func_int16_t_s_u((g_88 || (safe_mod_func_uint16_t_u_u((l_410 == (safe_div_func_int16_t_s_s((safe_sub_func_int16_t_s_s(((l_381 == (g_374 |= g_25)) || (g_444 |= ((((safe_unary_minus_func_int32_t_s(p_17)) ^ ((p_17 <= g_272) | (safe_add_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(g_347, 0)), p_17)))) < 0x7D) | 0x0730E20B))), l_445)), g_25))), l_446))), 8))), p_16)))) & p_17) < l_410), g_89));
                for (g_164 = (-10); (g_164 <= 27); g_164++)
                {
                    uint32_t l_465 = 0x2D77ED77;
                    int32_t l_470 = 6;
                    int8_t l_480 = 5;
                    l_470 ^= ((++g_89) || (safe_mul_func_uint8_t_u_u(((g_89 = 0xA202) & (((((((l_469 = (0x3701D3A4 | (safe_mod_func_int16_t_s_s((((g_468 &= (((g_467 ^= (g_466 |= (4294967295U & ((p_16 >= (p_17 = l_445)) > (safe_lshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_u((((l_464 = ((1U == (safe_add_func_int8_t_s_s((g_88 = ((g_347 = l_461) > g_248)), (~(l_463 == p_16))))) || g_80)) ^ l_465) && g_164), g_444)), p_16)))))) < 254U) & (-1))) ^ p_15) ^ l_465), (-1))))) || p_17) ^ g_377) >= 9U) & g_25) < g_61) != p_15)), 1)));
                    g_80 = (~g_286);
                    g_83 = ((l_492 |= ((safe_mul_func_int8_t_s_s((-1), (safe_rshift_func_int16_t_s_s((((safe_sub_func_int32_t_s_s((((safe_sub_func_uint32_t_u_u(l_480, (safe_div_func_uint8_t_u_u((2U >= (+(safe_div_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(p_15, (g_248 == ((7 || p_17) == (safe_rshift_func_int16_t_s_u(((g_26 = (g_374 ^= 4294967289U)) || (((safe_add_func_int8_t_s_s(l_381, 4)) < 0x6318) | 0xDA20)), g_83)))))), g_272)))), 255U)))) > 1U) | l_461), p_17)) > g_444) && g_88), 14)))) <= l_463)) == g_467);
                }
                if ((safe_mul_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((0xA91AE63A | (7 > (safe_add_func_uint32_t_u_u((safe_mul_func_int16_t_s_s((safe_add_func_uint16_t_u_u((++g_89), (safe_lshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_s(1U, (l_411 >= g_219))), (safe_lshift_func_int8_t_s_s((((((0x66EDB2B0 ^ p_17) <= (safe_rshift_func_int8_t_s_u(((l_463 == (safe_lshift_func_uint16_t_u_u((g_25 && l_411), 5))) ^ g_286), l_411))) & 1) ^ p_16) > (-1)), g_466)))))), p_15)), l_461)))), 0U)), g_248)))
                {
                    uint32_t l_525 = 4294967295U;
                    int32_t l_526 = (-1);
                    l_469 = ((-6) >= 0x19AA14C0);
                    l_411 = ((safe_sub_func_int32_t_s_s(((g_89 = p_16) >= (safe_add_func_uint8_t_u_u((0x30AC && (g_466 = ((p_15 = 1) | g_377))), 0))), ((safe_mul_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s((((l_417 = p_16) & ((safe_rshift_func_uint16_t_u_s(((l_525 = (0 | 3)) > (p_17 |= (++g_26))), 15)) && (safe_mod_func_int16_t_s_s((safe_div_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_u((safe_add_func_int16_t_s_s((((safe_mul_func_uint16_t_u_u(g_272, l_410)) >= g_83) <= 0xCF9E425B), 0x83FF)), l_469)), 4)), l_526)), l_492)))) || g_248), l_446)) & l_469), p_16)) == p_16))) <= 0x5D193C58);
                }
                else
                {
                    uint32_t l_554 = 0xF307CFA4;
                    for (g_377 = 0; (g_377 != 26); ++g_377)
                    {
                        l_469 = (g_468 < (l_411 = (~g_248)));
                    }
                    l_492 = ((safe_mul_func_int16_t_s_s((g_286 = l_463), (l_469 >= (safe_mul_func_int8_t_s_s(2, (p_16 > ((g_88 & (safe_rshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(1, 4)), l_381))) >= (((l_554 = (safe_mul_func_int16_t_s_s(p_17, g_374))) ^ p_15) ^ g_83)))))))) == p_17);
                }
                for (p_16 = (-10); (p_16 != (-3)); p_16++)
                {
                    return g_377;
                }
            }
            else
            {
                uint32_t l_557 = 0xBB5579D3;
                int32_t l_600 = 1;
                int32_t l_601 = 6;
                l_557--;
                if ((safe_rshift_func_int8_t_s_u(((p_15 != ((safe_add_func_uint8_t_u_u((l_594 = ((safe_rshift_func_uint16_t_u_u((safe_div_func_int32_t_s_s((g_83 = 0x3ACD9655), (~(safe_lshift_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s((p_16 = (safe_rshift_func_int8_t_s_u(p_16, 3))), ((((0U && ((safe_rshift_func_int16_t_s_u(((safe_mod_func_int8_t_s_s(p_15, ((p_17 & (((safe_add_func_int32_t_s_s((l_463 = (safe_add_func_uint32_t_u_u(g_219, (l_411 = ((safe_mod_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_u(0xDB, (safe_add_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(((g_286 >= 3U) >= g_164), g_466)), p_17)), g_377)))) || g_374), l_593)) && l_410))))), g_219)) == p_15) > 4)) && l_557))) > l_464), p_15)) != p_15)) == 0) > (-1)) <= 0x45BC9DA0))) <= (-10)), 0))))), 8)) > 4294967290U)), 0x3E)) ^ p_17)) && 1U), l_446)))
                {
                    uint8_t l_596 = 255U;
                    l_417 |= (+l_596);
                }
                else
                {
                    int32_t l_599 = 0x8BBBB061;
                    g_80 = (safe_lshift_func_int16_t_s_s((-4), 5));
                    g_80 = l_599;
                    g_604++;
                    return p_15;
                }
            }
            --g_614;
        }
        else
        {
            const int8_t l_628 = 0xA5;
            l_611 = (safe_mod_func_int32_t_s_s(l_619, (safe_lshift_func_int16_t_s_u((safe_add_func_uint16_t_u_u(((0xC5 & ((safe_sub_func_uint16_t_u_u((((p_15 = (-5)) >= ((4294967295U || ((g_226 && (safe_sub_func_uint8_t_u_u(0x94, p_16))) > (g_444 <= (p_17 & p_16)))) && 0x0A)) ^ g_80), l_594)) >= l_628)) == l_629), l_608)), 7))));
        }
        for (g_83 = 0; (g_83 != 8); g_83++)
        {
            uint8_t l_665 = 255U;
            int32_t l_666 = (-1);
            g_80 ^= (((safe_mod_func_uint16_t_u_u(((l_594 = p_15) >= (l_417 |= ((safe_rshift_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(0xEB77BD81, (safe_mod_func_uint32_t_u_u((l_607 ^= ((safe_mul_func_uint8_t_u_u((l_611 = (safe_lshift_func_int16_t_s_s((l_665 = (safe_rshift_func_int16_t_s_s((safe_add_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint16_t_u_s((p_17 && (+1)), 13)), 0)), (4294967288U && (safe_add_func_uint32_t_u_u((safe_mul_func_int8_t_s_s((l_608 = ((g_374 && ((((safe_add_func_uint16_t_u_u((safe_div_func_uint16_t_u_u(g_61, (safe_add_func_uint16_t_u_u((g_468++), l_612)))), (-1))) >= l_629) < p_17) < g_25)) & 0x067EDE7A)), p_17)), 0x0FF02562))))), 15))), p_17))), g_286)) > 65528U)), 4294967289U)))), 5)) || 0x51))), p_16)) > l_666) > p_17);
            return g_61;
        }
        for (l_410 = 0; (l_410 == 27); l_410 = safe_add_func_int8_t_s_s(l_410, 5))
        {
            g_83 = (safe_lshift_func_uint8_t_u_s(l_381, 6));
            if (g_89)
                continue;
        }
    }
    else
    {
        uint16_t l_687 = 0xC121;
        int32_t l_688 = (-1);
        uint32_t l_698 = 4294967288U;
        int32_t l_713 = 7;
        int32_t l_714 = 1;
        g_83 = ((((p_16 || ((safe_rshift_func_int16_t_s_s((safe_add_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(0x3714, (safe_add_func_int8_t_s_s((((safe_rshift_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u(8U, (safe_add_func_uint16_t_u_u((l_411 ^ (l_688 &= (safe_lshift_func_int16_t_s_u(((l_612 |= g_26) | (l_687 || l_687)), p_15)))), (safe_lshift_func_int8_t_s_u(l_691, 6)))))) >= 0), 15)) <= l_594) >= p_16), g_61)))), l_611)), 8)) != p_15)) != g_89) == 0xB50E) <= 0xC8008902);
        g_80 |= ((safe_rshift_func_uint16_t_u_s((!g_374), 14)) < (+p_17));
        g_83 |= ((safe_lshift_func_int8_t_s_s((p_16 > p_16), ((g_468 &= l_698) && 0x9653))) || (((safe_mul_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((g_603 ^ (safe_rshift_func_uint8_t_u_u(l_688, 5))), g_468)), (((safe_rshift_func_uint8_t_u_u((l_698 | (safe_mod_func_int16_t_s_s((safe_mul_func_int8_t_s_s(p_17, p_16)), 0x150A))), 0)) == g_711) >= g_89))) < 0xB5) >= p_16));
        ++g_715;
    }
    g_720++;
    return g_466;
}
inline static int32_t func_28(uint32_t p_29)
{
    return p_29;
}
inline static int16_t func_34(uint32_t p_35, const int32_t p_36, int16_t p_37, int16_t p_38, uint8_t p_39)
{
    int16_t l_249 = 0x4311;
    int32_t l_256 = 1;
    int32_t l_257 = 0x4B7D5238;
    int32_t l_260 = 0;
    uint16_t l_271 = 0xD05F;
    int32_t l_289 = (-6);
    int32_t l_307 = 0x2E0697B8;
    int16_t l_308 = (-4);
    l_257 |= (g_61 > ((p_39--) > (safe_mod_func_int16_t_s_s(((g_219 = (((l_260 = (g_272 ^= (((safe_rshift_func_uint8_t_u_u((1U | (((g_89--) > l_260) < 0U)), (safe_lshift_func_uint8_t_u_u((((g_248--) <= g_226) >= (safe_sub_func_int16_t_s_s((((safe_mul_func_uint16_t_u_u(l_260, g_88)) == (((g_164 ^= (safe_mul_func_uint8_t_u_u(l_271, 0x8C))) & l_260) ^ 0xC490)) || 255U), l_271))), l_271)))) ^ g_88) != g_226))) >= p_38) == 0x62B2)) | (-5)), 65529U))));
    l_289 = (p_35 < (((!0x1A) != (((safe_mul_func_uint8_t_u_u((l_257 | (1U > (safe_add_func_int8_t_s_s((l_256 = (safe_lshift_func_uint8_t_u_s((0x23 >= ((((0x87 > (safe_rshift_func_uint16_t_u_u((((safe_add_func_uint32_t_u_u(g_89, ((safe_lshift_func_uint16_t_u_u((g_286 = 0xED31), 5)) < (safe_mul_func_uint8_t_u_u((l_260 |= (g_25 || 4294967290U)), p_36))))) > l_256) > g_164), 1))) == (-7)) < l_256) & g_83)), l_256))), g_219)))), g_89)) < g_80) && 0x289E)) || p_35));
    l_260 = 0x404DC0F1;
    if (((((safe_mod_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u((g_164 < 0x19E0), (((l_257 = (safe_add_func_uint8_t_u_u((safe_div_func_int32_t_s_s(((g_80 = ((((((((safe_rshift_func_uint16_t_u_u((0x3313 || 0x95C2), (((l_260 = ((l_308 = (safe_mod_func_uint8_t_u_u(((((safe_rshift_func_uint8_t_u_u((~(g_272 | (safe_add_func_uint32_t_u_u(((g_286 & ((p_37 = p_37) > g_25)) | g_89), p_36)))), l_307)) < p_35) & p_36) & g_219), p_39))) | p_35)) || 4294967286U) & g_25))) ^ g_248) != l_271) < 0xB4A69FF9) & l_307) < g_80) >= p_38) != 0x17E9)) & g_248), g_226)), p_35))) != 0xFB790910) != l_256))), p_36)) >= 0x52) | g_88) || l_289))
    {
        uint32_t l_320 = 1U;
        int32_t l_348 = (-9);
        if ((l_257 = (-4)))
        {
            uint32_t l_315 = 4294967290U;
            int32_t l_327 = 0x2DBC6560;
            g_83 &= ((((((1 == g_89) ^ (p_39 && ((safe_rshift_func_uint16_t_u_s((safe_mod_func_uint16_t_u_u(g_61, ((((8U > 0x4D15) & (-10)) > (safe_div_func_uint8_t_u_u(g_61, (g_226 = ((g_219 ^ p_39) && l_315))))) & g_286))), 14)) >= 0xCA))) <= 0x0548) ^ p_39) != g_80) & p_35);
            l_327 &= (((safe_mod_func_uint16_t_u_u((((safe_div_func_uint32_t_u_u((l_320 ^ (((-5) < ((((0x1361 < (safe_lshift_func_uint16_t_u_s((l_260 |= (safe_sub_func_uint16_t_u_u(0x471E, l_320))), 9))) || l_315) ^ 0xA7BF) <= ((safe_sub_func_int32_t_s_s((((p_38 > (g_164 >= g_219)) == g_286) != g_88), 4294967295U)) & g_83))) ^ l_257)), 0xDFE4C1CF)) != 0U) || g_89), 0x1C94)) > p_36) == 0x0E);
            return g_88;
        }
        else
        {
            uint32_t l_346 = 1U;
            l_348 = ((safe_unary_minus_func_uint16_t_u((((l_256 = (safe_mul_func_int16_t_s_s((safe_add_func_int32_t_s_s((safe_lshift_func_int8_t_s_u((p_36 < 1U), (safe_div_func_int32_t_s_s((0xDCFD ^ ((g_347 |= (safe_unary_minus_func_uint16_t_u((l_320 > (safe_div_func_uint32_t_u_u(0xA252AE98, (((((safe_rshift_func_int16_t_s_u((safe_mod_func_int32_t_s_s((l_320 ^ g_219), ((p_38 | g_226) ^ 0U))), l_346)) & g_286) ^ 0x2E57) & l_320) && g_89))))))) < p_36)), p_37)))), g_89)), (-1)))) && 0U) | l_320))) <= p_35);
            return g_89;
        }
    }
    else
    {
        uint32_t l_373 = 4294967291U;
        int32_t l_375 = 0xD91DCD4F;
        l_256 = (safe_rshift_func_int8_t_s_u((-5), 5));
        l_375 ^= (l_257 ^= (g_80 = (safe_add_func_uint8_t_u_u(((safe_add_func_int16_t_s_s((safe_mul_func_int16_t_s_s((p_37 = (p_38 = 0x4DBD)), p_35)), 0x849A)) != (((g_226 = (safe_sub_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(g_219, (g_347 || g_219))), (safe_rshift_func_uint16_t_u_s(((((safe_div_func_int16_t_s_s(((0x4E27A1FF < ((safe_mod_func_int16_t_s_s((safe_sub_func_int8_t_s_s((safe_div_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(p_39, (g_374 &= l_373))), 1U)), 8)), p_35)) < p_35)) >= 0x5A2E), g_25)) & l_289) ^ p_35) >= p_35), 6))))) ^ 1) && g_248)), l_373))));
    }
    return l_249;
}
inline static int16_t func_40(int16_t p_41, const uint16_t p_42, int8_t p_43, int16_t p_44)
{
    uint16_t l_169 = 0x2297;
    int32_t l_180 = 0x423A3813;
    int32_t l_182 = 5;
    int32_t l_183 = 0xACBBF453;
    int32_t l_184 = (-10);
    int32_t l_185 = 0xCA7B6579;
    int32_t l_233 = (-1);
    if (p_41)
    {
        int32_t l_170 = 0x1B6B7D2F;
        int32_t l_181 = (-9);
        g_80 &= ((safe_mod_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((l_169 |= p_42), (l_170 = 0x5BCF7219))), (safe_unary_minus_func_int32_t_s(((((~(((p_42 || g_88) >= (((safe_lshift_func_int16_t_s_u((safe_div_func_uint8_t_u_u(((((((safe_unary_minus_func_uint16_t_u((((((safe_sub_func_uint16_t_u_u(((g_25 ^ ((p_41 & (-7)) | 0x2897)) >= (((l_180 = g_83) || l_181) && 8U)), l_181)) ^ 0x111D) <= l_181) > g_83) & p_44))) ^ l_182) < p_44) & 6) != 1U) == l_181), 0xFB)), 15)) ^ p_42) && l_181)) < g_89)) || p_44) == l_181) & p_42))))) > g_88);
    }
    else
    {
        uint8_t l_186 = 0x69;
        l_186--;
        g_219 &= ((((safe_sub_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(g_89, 10)), (safe_lshift_func_uint8_t_u_s(g_83, 4)))) == ((safe_div_func_int16_t_s_s(0, (((safe_sub_func_uint8_t_u_u(((safe_div_func_int8_t_s_s(((safe_rshift_func_int16_t_s_u((safe_add_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(((((l_186 | ((safe_mod_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u(1U, 4)), (safe_add_func_uint16_t_u_u(g_80, ((safe_sub_func_int8_t_s_s((g_164 != (l_183 == (safe_mod_func_uint8_t_u_u(0x8B, g_88)))), g_25)) >= p_41))))), g_83)) | g_88)) || g_25) && (-1)) & p_43), 3U)), l_169)), 14)) || p_43), l_184)) & 1), l_185)) >= p_42) & l_186))) > 0x5C)) < p_42) ^ 0U);
    }
    if ((safe_mul_func_int16_t_s_s(p_41, l_185)))
    {
        int8_t l_222 = 0x62;
        int32_t l_223 = 0x8C0632B8;
        int32_t l_224 = 0x322E6197;
        int32_t l_225 = 0xA72EEF0E;
        g_226--;
        return g_83;
    }
    else
    {
        g_83 &= (safe_mul_func_uint16_t_u_u(0x8EA2, 0));
        g_80 ^= (l_183 = 0x2F35A271);
        g_83 ^= l_185;
        for (p_43 = 11; (p_43 < (-9)); p_43--)
        {
            return l_233;
        }
    }
    l_182 = (l_183 = ((safe_mul_func_uint16_t_u_u((((safe_sub_func_uint16_t_u_u((+(safe_sub_func_int8_t_s_s((safe_add_func_uint8_t_u_u(g_226, 1U)), g_88))), (l_184 = ((((+l_183) ^ (safe_add_func_int32_t_s_s((l_180 | g_61), 2U))) > ((((safe_sub_func_uint8_t_u_u(((((((((4294967286U ^ 0xB1117FE5) ^ p_42) | g_25) == l_182) <= 0x6D1A421F) >= p_43) == g_61) > g_89), 0x6C)) >= g_88) & g_226) || l_184)) && l_184)))) & g_219) ^ l_183), (-1))) ^ p_42));
    return l_233;
}
inline static uint32_t func_45(uint16_t p_46, uint16_t p_47, uint32_t p_48, uint32_t p_49, uint32_t p_50)
{
    uint8_t l_64 = 1U;
    int32_t l_133 = 0;
    int32_t l_160 = 0xD6DD5741;
    int32_t l_161 = 0x2E7910AB;
    int32_t l_162 = (-2);
    uint32_t l_163 = 4294967295U;
    l_133 &= func_62((l_64 = g_61));
    g_164 |= (safe_mod_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(1U, (safe_add_func_uint32_t_u_u((((1 & ((safe_mul_func_int16_t_s_s((l_163 = (safe_unary_minus_func_int32_t_s(((l_133 = (~5U)) < ((safe_div_func_uint32_t_u_u(((((safe_sub_func_int16_t_s_s((6U && (safe_sub_func_int16_t_s_s(g_88, (safe_sub_func_uint8_t_u_u((l_162 ^= (safe_sub_func_uint8_t_u_u(0x76, ((safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((((l_161 = ((safe_rshift_func_int16_t_s_u(((g_61 < ((l_160 = p_49) ^ 0x34)) || g_25), 2)) < l_64)) > p_50) & 0xB9), 12)), 3)) < p_49)))), g_83))))), g_89)) & 1) != 1) ^ 0x2A), g_80)) != p_49))))), l_64)) | l_64)) & 0) == 0xEE9A), 4294967288U)))), 0x37C3));
    return p_46;
}
inline static const int32_t func_62(uint8_t p_63)
{
    int32_t l_65 = 0xDA84B505;
    int32_t l_66 = (-1);
    int32_t l_74 = 4;
    int32_t l_132 = 0x2CFC9AAE;
    l_66 = (l_65 = g_61);
    l_132 = (((((safe_mul_func_int8_t_s_s(((func_69((l_74 = (l_66 = (-10))), (func_75((g_80 = l_65), l_65, g_61, p_63) < ((((l_65 == l_65) == ((((-4) != p_63) == g_25) || g_25)) != g_25) && p_63)), g_25, g_88) != p_63) >= (-1)), p_63)) || 0xBB7E) != p_63) ^ 0x0112) > 0xAC2F6E58);
    return l_65;
}
inline static int16_t func_69(const int32_t p_70, int8_t p_71, uint8_t p_72, int8_t p_73)
{
    uint32_t l_92 = 9U;
    int32_t l_96 = (-10);
    l_96 = ((l_92++) & (safe_unary_minus_func_int32_t_s((l_96 == (safe_div_func_int8_t_s_s(0x03, (safe_rshift_func_int16_t_s_s((safe_mul_func_int16_t_s_s((safe_sub_func_int32_t_s_s(l_96, (safe_mod_func_int8_t_s_s(((!(safe_rshift_func_uint8_t_u_u((0x8F ^ ((safe_mul_func_uint16_t_u_u((safe_add_func_int8_t_s_s((g_61 == (safe_mul_func_uint16_t_u_u((1U != (0xFF != (safe_mul_func_int16_t_s_s((safe_div_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(((safe_rshift_func_int16_t_s_s(0, (safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(((safe_add_func_uint32_t_u_u(p_70, 4294967295U)) == g_25), l_96)), 7)))) != g_80), l_96)), 7)), 0xC6EC2A3D)), l_96)))), l_96))), 5)), (-10))) > 4U)), 5))) != l_96), p_71)))), 65535U)), p_70))))))));
    return p_70;
}
inline static uint16_t func_75(const uint32_t p_76, const uint32_t p_77, uint16_t p_78, int32_t p_79)
{
    int32_t l_81 = 0x34ECA669;
    int32_t l_82 = 0x824FF242;
    int32_t l_84 = 0xBC8CA929;
    int32_t l_85 = 0;
    int32_t l_86 = 0x8ED3351F;
    int32_t l_87 = (-2);
    g_89++;
    g_83 = (p_79 & l_87);
    return p_79;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_25;
    csmith_sink_ = g_26;
    csmith_sink_ = g_61;
    csmith_sink_ = g_80;
    csmith_sink_ = g_83;
    csmith_sink_ = g_88;
    csmith_sink_ = g_89;
    csmith_sink_ = g_164;
    csmith_sink_ = g_219;
    csmith_sink_ = g_226;
    csmith_sink_ = g_248;
    csmith_sink_ = g_272;
    csmith_sink_ = g_286;
    csmith_sink_ = g_347;
    csmith_sink_ = g_374;
    csmith_sink_ = g_377;
    csmith_sink_ = g_378;
    csmith_sink_ = g_444;
    csmith_sink_ = g_466;
    csmith_sink_ = g_467;
    csmith_sink_ = g_468;
    csmith_sink_ = g_603;
    csmith_sink_ = g_604;
    csmith_sink_ = g_609;
    csmith_sink_ = g_614;
    csmith_sink_ = g_711;
    csmith_sink_ = g_715;
    csmith_sink_ = g_720;
    csmith_sink_ = g_784;
    csmith_sink_ = g_785;
    csmith_sink_ = g_825;
    platform_main_end(0,0);
    return 0;
}
