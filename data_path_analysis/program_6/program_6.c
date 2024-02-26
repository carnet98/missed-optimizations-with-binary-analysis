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
static int32_t g_2 = (-7L);
static int32_t g_5 = 0xF2F4A8B1L;
static int32_t g_17 = 0x874B28EDL;
static int16_t g_21 = 0L;
static uint16_t g_70 = 65530UL;
static uint16_t g_81 = 0x791BL;
static uint16_t *g_80 = &g_81;
static int16_t g_87 = 0xB2A8L;
static int16_t *g_86 = &g_87;
static int32_t *g_89 = &g_2;
static int32_t **g_88 = &g_89;
static int32_t g_99 = 6L;
static uint8_t g_111 = 247UL;
static int32_t g_136 = 0xC79296E5L;
static int8_t g_148 = 0xE0L;
static uint8_t g_150 = 255UL;
static uint8_t *g_149 = &g_150;
static int32_t g_152 = 0L;
static int32_t g_154 = 0x8E544929L;
static uint32_t g_164 = 0x8E88EED3L;
static int8_t g_170 = 0xA4L;
static uint32_t g_191 = 0xDC1848BCL;
static int16_t g_230 = 1L;
static int8_t **g_232 = (void*)0;
static int32_t ***g_329 = (void*)0;
static int32_t ****g_328 = &g_329;
static int8_t g_368 = (-9L);
static int32_t *****g_389 = &g_328;
static uint32_t g_503 = 0xCCA2085EL;
static int8_t g_559 = 0xC2L;
static int8_t ***g_577 = (void*)0;
static int8_t ****g_576 = &g_577;
static int8_t *****g_575 = &g_576;
static uint32_t g_590 = 0xB6346545L;
static uint32_t g_794 = 18446744073709551609UL;
static uint32_t ***g_803 = (void*)0;
static int16_t **g_864 = (void*)0;
static uint8_t g_932 = 0x22L;
static int16_t g_1014 = 0x7D29L;
static int32_t *g_1019 = &g_154;
static uint16_t g_1062 = 0xD606L;
static int32_t **g_1088 = &g_89;
static int32_t g_1117 = 1L;
static uint8_t **g_1138 = (void*)0;
static uint8_t ***g_1137 = &g_1138;
static int8_t g_1321 = (-1L);
static uint16_t g_1336 = 65530UL;
static int32_t **g_1360 = &g_89;
static uint32_t *g_1400 = &g_191;
static uint32_t **g_1399 = &g_1400;
static int8_t g_1488 = 0L;
static uint16_t *g_1501 = &g_1062;
static uint32_t g_1523 = 0x398C4552L;
static uint32_t g_1525 = 4294967295UL;
static uint32_t func_1(void);
static int32_t * func_8(int32_t * p_9, int32_t * p_10, int32_t * p_11);
static int32_t * func_13(int32_t p_14, int32_t p_15, int32_t * p_16);
static uint8_t func_30(uint32_t p_31, int16_t * p_32, int16_t * p_33);
static int16_t * func_35(uint32_t p_36, int32_t * p_37, int32_t p_38, uint32_t p_39);
static uint32_t func_40(int8_t p_41, int32_t p_42, int32_t p_43);
static uint8_t func_55(int32_t p_56, int16_t p_57, int32_t ** p_58);
static int32_t * func_61(int16_t * p_62, uint32_t p_63, int32_t ** p_64);
static int16_t * func_65(uint16_t p_66, int16_t * p_67, uint32_t p_68);
static int16_t * func_71(uint8_t p_72, uint16_t p_73, uint32_t p_74, uint32_t p_75);
static uint32_t func_1(void)
{
    uint16_t l_34 = 0x4AF7L;
    int32_t *l_1215 = (void*)0;
    int32_t *l_1256 = (void*)0;
    uint32_t l_1300 = 0xD34A95D4L;
    int8_t *l_1340 = &g_559;
    int8_t **l_1339 = &l_1340;
    uint16_t l_1359 = 9UL;
    int32_t l_1384 = 1L;
    uint32_t *l_1397 = &l_1300;
    uint32_t **l_1396 = &l_1397;
    uint32_t l_1427 = 0x22AEA6BAL;
    uint32_t l_1435 = 4294967294UL;
    int8_t l_1487 = 0x75L;
    uint32_t l_1499 = 0x8BBFBFAEL;
    uint8_t **l_1534 = (void*)0;
    int32_t l_1553 = 0x364D9AECL;
    uint16_t l_1554 = 0xDE2BL;
    int16_t l_1555 = 0x03D5L;
    uint32_t l_1556 = 0xB9C4679AL;
    uint8_t l_1557 = 247UL;
    uint32_t l_1558 = 4294967292UL;
    int32_t l_1566 = (-3L);
    for (g_2 = (-18); (g_2 == 16); g_2++)
    {
        int32_t *l_494 = &g_5;
        uint16_t l_495 = 1UL;
        int16_t *l_1209 = &g_1014;
        int32_t *l_1257 = &g_152;
        int32_t l_1260 = 0x1B7A583CL;
        int32_t l_1306 = 0x0BEDE425L;
        int8_t *l_1338 = &g_148;
        int8_t **l_1337 = &l_1338;
        int32_t ***l_1345 = (void*)0;
        uint8_t ***l_1346 = (void*)0;
        int32_t l_1357 = (-1L);
        uint32_t l_1416 = 0x9E5F0D9EL;
        for (g_5 = (-26); (g_5 > 9); ++g_5)
        {
            int32_t *l_12 = &g_5;
            int16_t *l_20 = &g_21;
            uint32_t l_44 = 0x0336AE3DL;
            int32_t l_45 = 0xC4EB0A11L;
            int32_t **l_1255 = &l_494;
        }
        for (g_111 = 0; (g_111 >= 54); g_111 = safe_add_func_uint16_t_u_u(g_111, 1))
        {
            uint16_t l_1274 = 65530UL;
            int32_t *l_1284 = &g_152;
            int8_t *****l_1388 = &g_576;
            int32_t l_1401 = 0L;
            uint32_t l_1428 = 0UL;
            uint32_t ****l_1462 = (void*)0;
            uint32_t *****l_1461 = &l_1462;
            int8_t l_1474 = 0x13L;
            uint16_t l_1489 = 0xFE15L;
            int32_t *l_1526 = &l_1260;
        }
    }
    l_1215 = ((*g_1088) = l_1215);
    if ((l_34 | ((safe_lshift_func_uint8_t_u_s(0x00L, 3)) | ((4294967295UL >= ((safe_lshift_func_int8_t_s_u((safe_mod_func_uint16_t_u_u(((((safe_sub_func_int8_t_s_s(((*g_80) >= ((*g_86) < (((!((safe_mod_func_uint16_t_u_u(((+((g_368 , 0x87E1L) >= ((*g_1501) = (((((*l_1340) = ((*g_1019) & (((safe_add_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s((((safe_lshift_func_int8_t_s_s(l_1553, l_1554)) ^ (*g_86)) <= (*g_86)), g_70)), (**g_1399))) < 0x5AL) && l_1359))) , (*g_149)) || l_1555) > (*g_149))))) >= (-3L)), 0x5F08L)) ^ l_1556)) >= 0x7D98D913L) , 0x8E88L))), l_1557)) >= (*g_149)) & 0x2BE0L) != l_1558), (*g_86))), 1)) , (-10L))) < 0x97L))))
    {
        int32_t l_1565 = 3L;
        (*g_1019) = (safe_rshift_func_uint8_t_u_s((safe_mod_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s(l_1565, 7)), 0xD6L)), g_17));
        l_1566 = ((*g_1019) = l_1565);
    }
    else
    {
        uint32_t l_1581 = 1UL;
        int32_t l_1598 = 0xBAADFFA7L;
        int32_t l_1642 = 0L;
        int32_t *l_1643 = (void*)0;
        for (g_111 = (-27); (g_111 != 15); g_111 = safe_add_func_uint8_t_u_u(g_111, 2))
        {
            uint16_t l_1577 = 65529UL;
            int8_t *l_1582 = (void*)0;
            int8_t *l_1583 = &g_1321;
            uint32_t *l_1587 = (void*)0;
            int8_t l_1596 = 1L;
            uint32_t l_1597 = 0xAEDD0120L;
            int8_t ****l_1620 = (void*)0;
            int8_t l_1621 = 0x5BL;
            int32_t l_1622 = 0xF23E256DL;
            uint32_t l_1627 = 9UL;
            uint32_t l_1641 = 4294967295UL;
            (*g_88) = (*g_1088);
            if ((safe_mod_func_int32_t_s_s((((safe_lshift_func_uint16_t_u_s(((-1L) <= (-1L)), 1)) , (((**g_1399) & (((safe_rshift_func_int8_t_s_u(((safe_rshift_func_uint8_t_u_u(((((l_1577 > (((safe_mod_func_int32_t_s_s(1L, (((0x62L > ((*l_1583) = (safe_unary_minus_func_int8_t_s(((*l_1340) = l_1581))))) < (((((0L && (*g_1501)) <= (*g_1400)) >= l_1577) <= l_1581) < 0L)) , l_1577))) & l_1581) && (*g_86))) >= (*g_86)) || l_1581) | l_1581), 0)) , l_1581), 0)) , 0x08L) || 0L)) && l_1581)) < (*g_1501)), 1UL)))
            {
                int32_t **l_1584 = &l_1256;
                (*l_1584) = ((*g_88) = (*g_88));
                (*g_1019) = (((safe_sub_func_int16_t_s_s((((void*)0 == l_1587) , (l_1577 & ((l_1577 != ((safe_add_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(l_1577, 7)), ((((safe_rshift_func_uint8_t_u_s(1UL, 4)) && l_1581) | ((*g_149) = ((((*l_1583) = ((l_1596 < 0xB7A456A0L) | l_1597)) & l_1581) ^ l_1577))) >= 0L))) && l_1597)) > 0xC40CBF7FL))), l_1598)) & l_1577) != (*g_1019));
            }
            else
            {
                uint32_t l_1599 = 0x1E8AC445L;
                (*g_88) = l_1587;
                return l_1599;
            }
            for (g_1336 = (-20); (g_1336 == 42); g_1336++)
            {
                int32_t *l_1604 = &g_136;
                for (l_1566 = (-9); (l_1566 <= 1); l_1566 = safe_add_func_int8_t_s_s(l_1566, 1))
                {
                    int8_t l_1613 = 1L;
                    (*g_1088) = l_1604;
                    for (g_1117 = (-1); (g_1117 > 5); ++g_1117)
                    {
                        l_1622 = ((*g_1019) = ((*g_149) , (((*g_1501) < 0L) , (((**g_1360) = ((&g_86 != (void*)0) , ((safe_add_func_int8_t_s_s((safe_mod_func_uint8_t_u_u((5L && (((0L >= (safe_add_func_uint16_t_u_u(((((((*l_1397) = (((((l_1613 <= (safe_lshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_s(((safe_add_func_uint16_t_u_u((((*g_575) = l_1620) != (void*)0), (*g_80))) & l_1613), (*g_86))), 12))) <= (*l_1604)) , (*g_80)) || l_1613) && 0x5E249B5CL)) != l_1621) ^ (*g_149)) <= 1UL) | l_1596), (*g_86)))) < 0x9D7BL) >= (*l_1604))), (*l_1604))), 5L)) != 8UL))) || 0x7FA18C49L))));
                        return (*g_1400);
                    }
                }
                l_1642 = ((((safe_lshift_func_int16_t_s_u((safe_add_func_uint8_t_u_u(l_1627, (safe_sub_func_uint32_t_u_u(4294967295UL, (safe_rshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_u((-5L), 7)), ((*g_149) = ((~((safe_add_func_uint8_t_u_u(((safe_mod_func_int32_t_s_s(l_1577, (safe_add_func_int32_t_s_s(0x56FC7C30L, l_1598)))) && l_1577), (l_1581 || ((4294967286UL >= (-1L)) >= l_1641)))) != (*g_1501))) ^ l_1598)))))))), (*g_80))) ^ (*l_1604)) | l_1641) > (*l_1604));
                l_1643 = (*g_88);
            }
        }
    }
    return (**g_1399);
}
static int32_t * func_8(int32_t * p_9, int32_t * p_10, int32_t * p_11)
{
    uint32_t l_1239 = 4294967295UL;
    int32_t l_1251 = (-6L);
    int16_t **l_1252 = (void*)0;
    int16_t **l_1253 = &g_86;
    int32_t *l_1254 = &g_5;
    for (g_191 = (-17); (g_191 == 21); g_191 = safe_add_func_int8_t_s_s(g_191, 1))
    {
        return p_11;
    }
    p_11 = func_13(l_1239, ((safe_mod_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((((((((safe_mod_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((g_230 = ((l_1239 , (!((safe_sub_func_int8_t_s_s(0x41L, 0xFBL)) , (((l_1251 = (-7L)) != 6L) ^ (-1L))))) , ((((*l_1253) = func_71(l_1251, l_1239, g_87, l_1239)) != (void*)0) == (*g_80)))), (*g_80))), l_1239)) && 0xCCA369F9L) < (*g_80)) >= (*p_9)) <= l_1239) != (-9L)) == 0UL), 0)), l_1239)) | l_1239), l_1254);
    (*g_1019) = (l_1251 = (*p_10));
    return p_10;
}
static int32_t * func_13(int32_t p_14, int32_t p_15, int32_t * p_16)
{
    int32_t *****l_1216 = &g_328;
    int32_t l_1222 = 0L;
    uint8_t *l_1230 = &g_111;
    int32_t l_1234 = 0x6EA2B325L;
    int8_t *l_1235 = &g_148;
    int16_t l_1236 = 0xC466L;
    l_1216 = l_1216;
    p_15 = (safe_add_func_int8_t_s_s((safe_lshift_func_int16_t_s_u((((!p_15) , p_14) ^ (((l_1222 = (*g_149)) != (safe_mod_func_int32_t_s_s(((safe_add_func_uint8_t_u_u((+p_14), ((*l_1235) = ((((((safe_mod_func_uint32_t_u_u(0x30DF525BL, 0x60C73221L)) , l_1230) != (((l_1234 = (safe_mod_func_int16_t_s_s((~(*g_80)), 0x0B28L))) & p_14) , l_1230)) , p_14) || p_14) ^ (-1L))))) ^ p_14), p_15))) , l_1222)), 12)), l_1236));
    return &g_5;
}
static uint8_t func_30(uint32_t p_31, int16_t * p_32, int16_t * p_33)
{
    int16_t *l_1210 = &g_230;
    int32_t l_1213 = 1L;
    int32_t **l_1214 = &g_1019;
    (*l_1214) = (*l_1214);
    return p_31;
}
static int16_t * func_35(uint32_t p_36, int32_t * p_37, int32_t p_38, uint32_t p_39)
{
    int32_t *****l_496 = &g_328;
    int32_t l_507 = 3L;
    uint8_t *l_539 = (void*)0;
    int16_t *l_555 = &g_87;
    int8_t *l_589 = &g_148;
    int8_t **l_588 = &l_589;
    int32_t *l_643 = &g_136;
    uint8_t l_725 = 0xA0L;
    int32_t l_770 = 0x7FEACCD5L;
    uint16_t l_853 = 0x800CL;
    uint32_t ****l_854 = &g_803;
    int32_t l_862 = 0xE31AED64L;
    int32_t *l_885 = (void*)0;
    int8_t *****l_887 = &g_576;
    uint16_t **l_908 = &g_80;
    uint32_t l_911 = 0UL;
    int32_t ***l_938 = (void*)0;
    int32_t l_969 = 0xE524871CL;
    int32_t l_971 = 1L;
    int32_t l_974 = 0x99E4C199L;
    int32_t l_983 = 0x5F132239L;
    uint32_t l_998 = 0x801CD48BL;
    int32_t **l_1007 = &g_89;
    int16_t l_1034 = (-1L);
    uint16_t l_1085 = 1UL;
    int32_t l_1089 = 0xFB3F023FL;
    int32_t l_1204 = 0x43446B05L;
    if (((&g_328 == l_496) || p_36))
    {
        int32_t ***l_505 = &g_88;
        int32_t *l_506 = &g_154;
        int8_t *l_522 = &g_170;
        int8_t ***l_574 = &g_232;
        int8_t ****l_573 = &l_574;
        int8_t *****l_572 = &l_573;
        uint32_t l_629 = 0xEE57200DL;
        int32_t l_674 = 0x3FC8E663L;
        int32_t *****l_676 = &g_328;
        int16_t *l_688 = &g_230;
        int32_t **l_689 = &g_89;
        int32_t ***l_712 = &g_88;
        int32_t l_726 = 0xA7E1C27AL;
        int8_t l_748 = (-2L);
        for (g_99 = 0; (g_99 != 8); g_99 = safe_add_func_uint8_t_u_u(g_99, 4))
        {
            uint16_t l_499 = 65535UL;
            int32_t l_500 = (-6L);
            int32_t *l_504 = &g_136;
            l_500 = l_499;
            (*l_504) = (safe_sub_func_uint8_t_u_u(g_503, (0xBDL && 0x96L)));
        }
        l_506 = func_61(&g_87, g_81, ((*l_505) = &p_37));
        if (((*l_506) >= l_507))
        {
            int32_t *l_508 = &g_99;
            int32_t l_552 = 0x49A9A718L;
            uint32_t l_569 = 5UL;
            (**l_505) = l_508;
            if ((***l_505))
            {
                int32_t l_518 = 0x40FF2E7EL;
                int8_t *l_519 = &g_148;
                int8_t *l_521 = &g_170;
                int8_t **l_520 = &l_521;
                uint32_t *l_523 = (void*)0;
                int16_t *l_556 = &g_230;
                (*p_37) = ((safe_mod_func_int16_t_s_s((safe_add_func_uint8_t_u_u((((((((~(((*l_506) = ((((*p_37) , p_39) && ((*g_86) = p_36)) <= ((safe_mod_func_uint32_t_u_u(l_518, p_36)) != (l_519 == ((*l_520) = l_519))))) & (p_39 <= ((*l_519) = (((-1L) < (-8L)) || l_518))))) , l_522) == (void*)0) < g_99) | p_39) , &g_164) != l_523), 0x78L)), p_38)) ^ 249UL);
                for (p_36 = 0; (p_36 == 44); p_36 = safe_add_func_int16_t_s_s(p_36, 5))
                {
                    int16_t *l_526 = (void*)0;
                    int32_t l_533 = 1L;
                    if ((*p_37))
                        break;
                    if ((**g_88))
                        break;
                    (*g_88) = func_61(l_526, ((p_38 >= p_38) , ((((***l_505) <= ((safe_add_func_int32_t_s_s((~0x38L), (l_533 = (((*g_80) = (((*g_149) = ((((*g_80) >= (((~g_368) < ((((*l_519) = ((safe_add_func_int8_t_s_s(p_38, (((((*l_506) <= p_38) >= l_518) && (*g_86)) , (*l_506)))) < 1UL)) != (*g_149)) >= (**g_88))) && g_148)) <= 6L) != (*g_149))) < (*l_508))) && 65530UL)))) , l_533)) || l_518) != g_230)), &g_89);
                    for (g_150 = (-24); (g_150 < 20); ++g_150)
                    {
                        int32_t **l_538 = &g_89;
                        (*l_538) = ((**l_505) = ((g_191 = (((g_5 < ((void*)0 != l_523)) , g_111) != ((*l_508) , (safe_sub_func_uint16_t_u_u(65531UL, ((*g_80) = (((void*)0 != &g_232) & p_38))))))) , l_508));
                    }
                }
                (*p_37) = ((0x32L > g_136) , (((void*)0 == l_539) | p_38));
                (*l_506) = ((*p_37) | (l_518 && (safe_add_func_uint8_t_u_u(((((void*)0 != (*l_520)) , (((safe_lshift_func_uint16_t_u_u(((*l_508) , (1L == ((*g_149) = (safe_rshift_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint16_t_u_s(l_552, ((*l_556) = (safe_lshift_func_int16_t_s_s(((*g_86) = ((p_37 != (l_508 = (**l_505))) | p_38)), p_36))))), p_39)), 9)) , (*g_80)), p_39))))), 14)) & p_39) < (-10L))) != (*p_37)), p_39))));
            }
            else
            {
                int16_t *l_562 = &g_230;
                (**g_88) = (((safe_rshift_func_uint16_t_u_u(((*g_86) | ((*g_86) | (*g_86))), g_559)) >= (safe_rshift_func_uint16_t_u_s(1UL, ((*l_562) = p_39)))) > (safe_mod_func_int32_t_s_s(((safe_sub_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(0xE7371C81L, g_559)), ((*l_506) > p_38))) , (*l_508)), (***l_505))));
            }
            l_508 = l_508;
            (**g_88) = (l_569 <= ((0xE6L >= (safe_rshift_func_uint8_t_u_s((0L > (((p_38 == (*p_37)) & ((g_575 = l_572) != &l_573)) || p_38)), (*l_508)))) & (***l_505)));
        }
        else
        {
            uint16_t l_592 = 0xA24EL;
            int32_t ***l_721 = &g_88;
            uint16_t l_740 = 65526UL;
            int16_t l_782 = 0x9681L;
            for (g_503 = 25; (g_503 <= 5); g_503 = safe_sub_func_int8_t_s_s(g_503, 1))
            {
                (*l_506) = (p_36 || ((safe_add_func_uint32_t_u_u((((*g_80) = p_36) & ((((-7L) | (p_39 & (safe_rshift_func_int8_t_s_s((safe_mod_func_int16_t_s_s((0UL & (g_150 == ((3L == ((*l_522) = 0L)) > 65534UL))), p_38)), 4)))) , l_588) == &l_589)), g_590)) | 1L));
                (*l_505) = &p_37;
            }
            (*l_506) = ((+l_592) < (&g_88 == l_505));
            for (g_87 = 0; (g_87 <= 14); ++g_87)
            {
                int32_t *l_595 = (void*)0;
                uint8_t l_596 = 0x98L;
                int16_t *l_614 = &g_230;
                int32_t l_687 = 1L;
                int32_t ***l_722 = (void*)0;
            }
            if ((((p_38 | ((*l_506) , (safe_sub_func_int8_t_s_s((((*l_643) = (*l_643)) , ((safe_lshift_func_int16_t_s_s((*g_86), 5)) , p_39)), ((l_740 < (((((*l_506) = ((safe_mod_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(p_38, ((*l_688) = (safe_mod_func_uint32_t_u_u((safe_unary_minus_func_int32_t_s(0x856C4262L)), (-8L)))))), p_36)) && p_38)) & p_38) , 0x4B0CC6D1L) != 0x0AC08BE4L)) , (*g_149)))))) >= 0x9CA1L) != l_748))
            {
                int16_t l_753 = 0x2892L;
                int32_t *l_771 = &g_136;
                int8_t **l_775 = (void*)0;
                for (p_38 = 10; (p_38 >= (-16)); p_38--)
                {
                    uint32_t *l_754 = (void*)0;
                    uint32_t *l_755 = (void*)0;
                    uint32_t *l_756 = &l_629;
                    int32_t l_769 = 0x669A1899L;
                    for (g_99 = 0; (g_99 == 15); g_99 = safe_add_func_uint16_t_u_u(g_99, 5))
                    {
                        (**g_389) = (void*)0;
                        (*l_643) = p_36;
                        return &g_230;
                    }
                    (*l_506) = ((((*l_756) = l_753) | (((l_676 == &g_328) ^ ((safe_rshift_func_uint16_t_u_u((*g_80), (safe_mod_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(g_170, (~(+((*l_555) = (((((**l_588) = (safe_add_func_uint8_t_u_u((253UL >= ((p_38 , (((safe_mod_func_int16_t_s_s((*g_86), l_753)) > 0x290AL) , 0xA3L)) & (*g_149))), p_38))) <= (*g_149)) <= l_769) ^ p_36)))))), (*l_643))))) || l_770)) | p_38)) < (-1L));
                }
                (*l_689) = (p_37 = l_771);
                (***l_721) = ((0x21L >= ((((safe_sub_func_uint16_t_u_u((((**l_573) = (void*)0) == ((~((0x7732E736L <= 0x001DAEDEL) | ((*l_522) = ((*l_589) = 1L)))) , l_775)), (safe_mod_func_uint32_t_u_u((safe_mod_func_int16_t_s_s(((safe_add_func_uint32_t_u_u(((*g_149) < p_39), ((p_39 & p_39) == p_36))) | 1L), (*g_80))), (-1L))))) , p_39) , p_36) >= l_782)) || g_559);
            }
            else
            {
                int32_t *l_802 = &g_99;
                uint32_t ****l_807 = &g_803;
                if ((*l_643))
                {
                    uint8_t l_789 = 250UL;
                    int32_t *l_793 = (void*)0;
                    for (g_148 = 0; (g_148 != 9); g_148 = safe_add_func_uint8_t_u_u(g_148, 9))
                    {
                        int32_t *l_792 = (void*)0;
                        (*l_506) = (1UL > ((safe_sub_func_uint16_t_u_u(0xC3F9L, (*g_86))) != (l_789 >= (safe_rshift_func_uint16_t_u_s(p_39, p_39)))));
                        l_793 = l_792;
                        return l_688;
                    }
                    (*l_676) = (*l_496);
                    (*g_88) = (((((p_38 || (*g_86)) || ((*l_589) = ((*l_506) , p_38))) , ((*g_86) = ((g_794 != ((*l_643) = p_39)) , ((((safe_mod_func_uint8_t_u_u((safe_unary_minus_func_int16_t_s((((*l_506) = (safe_lshift_func_int8_t_s_u((((safe_rshift_func_uint16_t_u_u(1UL, 7)) < g_170) <= (*g_80)), 0))) , p_36))), p_36)) , (*g_86)) != p_36) ^ 0x83L)))) | g_70) , l_802);
                    if (((*g_80) && p_39))
                    {
                        (*l_689) = (void*)0;
                    }
                    else
                    {
                        uint32_t ****l_804 = &g_803;
                        (*g_88) = l_802;
                        (*l_804) = g_803;
                        g_389 = l_496;
                        (***l_505) = (*p_37);
                    }
                }
                else
                {
                    uint8_t l_814 = 5UL;
                    int32_t l_815 = (-10L);
                    uint8_t *l_816 = &l_725;
                    int32_t l_817 = (-1L);
                    (*l_802) = ((!((*l_816) = (((l_815 = (((*g_149) = ((((safe_unary_minus_func_int16_t_s(((l_807 == (void*)0) < (p_36 == (safe_mod_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u((-1L), (p_36 || (((((void*)0 == &l_725) > (l_814 = 0x31L)) , (p_39 , 0x421BEB7BL)) <= p_39)))), 9UL)) , p_38), p_39)))))) , p_39) == p_38) || (*g_80))) <= (-6L))) <= 0L) , p_39))) < l_817);
                }
            }
        }
    }
    else
    {
        uint16_t l_818 = 65527UL;
        int8_t *****l_825 = (void*)0;
        uint8_t *l_830 = &l_725;
        int32_t l_855 = (-4L);
        int16_t *l_866 = &g_87;
        if ((l_818 , ((*l_643) = ((safe_lshift_func_int8_t_s_u((+0UL), 3)) , ((((*l_830) = (((*p_37) <= (*l_643)) , (~((*p_37) != (4294967287UL && ((((((*g_149) = ((safe_rshift_func_int16_t_s_u(((l_825 != &g_576) == ((safe_lshift_func_int8_t_s_s((safe_mod_func_int16_t_s_s((*g_86), 0xB94CL)), p_36)) | p_39)), 5)) || (*g_86))) && 0x21L) , 6L) || 0xDB6E51BCL) , 0x632F9C2FL)))))) == (*l_643)) & l_818)))))
        {
            uint32_t l_836 = 0UL;
            for (p_36 = 0; (p_36 != 55); p_36 = safe_add_func_int8_t_s_s(p_36, 5))
            {
                for (g_794 = 24; (g_794 > 17); g_794 = safe_sub_func_uint8_t_u_u(g_794, 1))
                {
                    int16_t l_835 = 8L;
                    if (l_835)
                        break;
                }
            }
            l_836 = (*l_643);
            (*g_88) = p_37;
        }
        else
        {
            uint16_t l_852 = 65535UL;
            int8_t ***l_863 = &l_588;
            int32_t *l_865 = &l_855;
            (*l_643) = (((safe_sub_func_uint16_t_u_u((+(safe_rshift_func_uint16_t_u_u((p_36 ^ (safe_lshift_func_uint16_t_u_u((*g_80), (((safe_mod_func_uint32_t_u_u(l_818, p_39)) , 0x4159L) <= (((*p_37) || l_818) || 0xE776L))))), (l_855 = (~(safe_lshift_func_int16_t_s_s(((~((((((safe_mod_func_uint8_t_u_u((((**g_575) != (void*)0) > l_852), l_853)) , l_854) != (void*)0) & l_818) & 0xE368L) > l_852)) > 0x37F3L), (*l_643)))))))), 0x1658L)) && 0xC8L) != l_852);
            for (g_81 = 0; (g_81 >= 29); g_81++)
            {
                (*l_643) = (safe_rshift_func_uint8_t_u_s((safe_add_func_uint32_t_u_u(0x045DE342L, l_862)), 5));
                if ((*l_643))
                    continue;
                (**g_575) = l_863;
            }
            g_864 = &g_86;
            l_865 = &l_855;
        }
        (*g_88) = p_37;
        return l_866;
    }
    for (p_36 = 0; (p_36 == 10); p_36++)
    {
        int32_t l_869 = 0xD3F4E18CL;
        int8_t *l_872 = &g_559;
        int8_t *l_874 = (void*)0;
        int8_t **l_873 = &l_874;
        uint32_t *l_877 = (void*)0;
        uint32_t *l_878 = (void*)0;
        uint32_t *l_879 = &g_164;
        uint32_t *l_880 = &g_590;
        int8_t *l_883 = &g_148;
        int8_t l_884 = 0xD1L;
        int32_t **l_925 = &l_643;
        int32_t *****l_945 = (void*)0;
        int16_t *l_967 = &g_87;
        int32_t l_968 = 9L;
        int16_t *l_970 = &g_230;
        uint8_t *l_972 = &l_725;
        int32_t *l_979 = &l_971;
        uint32_t l_980 = 4294967295UL;
        (*l_643) = (l_869 = l_869);
        if (((safe_rshift_func_int16_t_s_s(0L, ((l_872 == ((*l_873) = ((*l_588) = l_872))) == (((safe_add_func_int8_t_s_s((((*l_880) = ((*l_879) = (0xF010L != ((*l_555) = 0xD885L)))) < ((void*)0 == &l_725)), ((safe_rshift_func_int8_t_s_u(((*l_883) = ((*l_872) = (l_869 || 0x8610L))), l_869)) == 1L))) > p_38) >= l_884)))) <= (*g_149)))
        {
            int32_t *l_886 = &l_869;
            int8_t *****l_888 = (void*)0;
            (*l_643) = (*l_643);
            l_886 = l_885;
            l_888 = l_887;
        }
        else
        {
            int8_t *l_895 = &g_559;
            int8_t *l_896 = &g_559;
            uint16_t **l_909 = &g_80;
            int32_t l_910 = 0xF299A700L;
            int32_t *l_926 = (void*)0;
            int32_t ***l_931 = (void*)0;
            uint16_t *l_933 = &g_70;
            l_869 = (safe_sub_func_uint32_t_u_u(((l_910 = (safe_lshift_func_int8_t_s_s(((((safe_add_func_uint16_t_u_u(((l_895 = (*l_873)) != l_896), (safe_add_func_uint16_t_u_u((~(safe_rshift_func_int8_t_s_u((p_39 | (safe_add_func_int32_t_s_s(((*l_643) = (safe_rshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s((*g_80), (l_908 != l_909))), 9))), ((&g_149 != (p_36 , &l_539)) <= p_39)))), 0))), p_36)))) || 0x02L) ^ l_869) || l_884), 6))) < l_884), l_911));
            l_926 = func_61(func_65((safe_lshift_func_uint8_t_u_u((((l_869 = (((**l_887) == (void*)0) ^ (safe_rshift_func_uint16_t_u_u(p_38, (safe_rshift_func_int8_t_s_u((((((safe_rshift_func_uint16_t_u_u((*g_80), ((safe_lshift_func_uint16_t_u_u((~(*g_149)), (safe_sub_func_int16_t_s_s((((0x83B84229L | ((void*)0 == &l_895)) , (void*)0) == &g_149), p_36)))) , 65526UL))) , l_884) && l_910) && 0xF399L) ^ 0x0563L), 5)))))) || 0x631047F6L) , 0UL), 1)), l_555, p_38), p_39, l_925);
            (*l_926) = ((*g_80) < ((*l_933) = (safe_rshift_func_uint8_t_u_s(((p_38 == (l_496 == (void*)0)) , (((((-4L) <= (((((*g_149) = (safe_sub_func_int16_t_s_s(((((((p_36 < 1UL) | 1UL) < 9UL) , p_37) == p_37) , p_39), (*g_80)))) , &l_925) == l_931) | l_884)) <= (*l_926)) & g_932) >= (*g_86))), 3))));
            (*l_926) = (*p_37);
        }
        (**l_887) = (((((safe_lshift_func_uint16_t_u_s(65535UL, 9)) || (safe_lshift_func_uint16_t_u_u(((((l_938 != (void*)0) | (((safe_sub_func_uint8_t_u_u(((*l_972) = ((safe_mod_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u((((*l_970) = ((l_945 = &g_328) != ((safe_mod_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((+(safe_lshift_func_uint16_t_u_u((g_70 , (~(((safe_lshift_func_uint16_t_u_s(((**l_908) = (*g_80)), ((*l_555) = (((((safe_rshift_func_uint16_t_u_u(g_170, 10)) && (((((((safe_add_func_int32_t_s_s((((safe_mod_func_uint16_t_u_u((~((*g_149) = (((*l_879) = (safe_lshift_func_uint8_t_u_u((((p_36 > (((safe_add_func_int16_t_s_s(((void*)0 != l_967), 0xE30CL)) , (*g_149)) == p_36)) || 0xAE96L) || (-5L)), l_968))) != 0xF8E5DCD8L))), g_154)) & 1L) , (-7L)), 0L)) >= 0L) != 0x2EE1L) > 0UL) , 0x3F1FL) > p_39) | 0x7A25L)) , p_39) | 0UL) == p_36)))) >= p_39) > l_969))), p_39))), 0)), 255UL)) , (void*)0))) && p_36), 2)), l_971)) & p_38)), 0x22L)) && g_5) | p_36)) & 0xBC75L) | 0xCF4CL), p_38))) , 252UL) < 1L) , (**l_887));
        (*l_925) = func_61(l_967, ((*l_879) = (((*l_979) = (g_136 = ((*g_80) , (l_770 = (((*l_880) = (((*g_149) = 0x55L) > (~(((void*)0 != &l_970) || (l_974 | ((safe_add_func_int8_t_s_s((safe_add_func_int8_t_s_s(p_39, (2UL > l_869))), p_39)) , p_38)))))) ^ 0x73B6427AL))))) | l_980)), &g_89);
    }
    if ((((safe_add_func_uint16_t_u_u((p_36 | l_983), (((p_38 = (((((safe_lshift_func_uint16_t_u_s((((void*)0 != &g_576) && (*g_80)), (0xA298L < (safe_lshift_func_int16_t_s_u((safe_add_func_int8_t_s_s(1L, (safe_sub_func_int16_t_s_s((p_38 >= ((safe_add_func_int16_t_s_s(((((safe_add_func_int16_t_s_s((((safe_rshift_func_int8_t_s_s((*l_643), 5)) >= 0x05EBL) | (*l_643)), l_998)) , 0x2AL) , p_36) <= g_164), p_38)) == 5UL)), p_39)))), 7))))) , p_38) ^ p_38) ^ 248UL) , 0xAA4DE77AL)) , 1L) || 0x41E1L))) <= p_36) | p_36))
    {
        uint32_t **l_1001 = (void*)0;
        uint32_t ***l_1000 = &l_1001;
        int32_t l_1012 = (-5L);
        int32_t **l_1025 = &g_89;
        int8_t *l_1032 = &g_559;
        if ((safe_unary_minus_func_int16_t_s(((((void*)0 == &l_555) , ((*l_854) = g_803)) == l_1000))))
        {
            int32_t *l_1002 = &g_2;
            (*g_88) = l_1002;
        }
        else
        {
            int16_t *l_1005 = &g_230;
            int32_t *l_1008 = &l_969;
            int32_t *****l_1013 = (void*)0;
            for (g_230 = 0; (g_230 <= (-23)); g_230 = safe_sub_func_int8_t_s_s(g_230, 7))
            {
                uint32_t *l_1006 = &g_164;
                (*g_88) = (void*)0;
                l_1008 = func_61(l_1005, ((*l_1006) = p_39), l_1007);
                l_1012 = (~((*g_80) >= (safe_lshift_func_uint16_t_u_u((*g_80), 6))));
                l_1013 = (l_496 = (void*)0);
            }
            if (((*l_1008) = (*l_1008)))
            {
                int32_t *l_1015 = (void*)0;
                p_37 = ((*l_1007) = &l_1012);
                if ((0x1B11CD16L < (g_1014 , (*p_37))))
                {
                    int16_t l_1016 = 0L;
                    if ((l_1012 > (*g_80)))
                    {
                        int16_t l_1017 = (-7L);
                        int32_t *l_1018 = (void*)0;
                        (*l_1007) = l_1015;
                        l_1017 = ((*l_643) = l_1016);
                        l_1018 = p_37;
                        p_37 = g_1019;
                    }
                    else
                    {
                        int8_t l_1022 = 0x7EL;
                        (*l_1007) = p_37;
                        (*g_1019) = ((safe_sub_func_uint32_t_u_u(((255UL && ((l_1022 , ((*g_149) = ((void*)0 != &g_577))) > ((safe_add_func_uint16_t_u_u(0xA75AL, 0x1EB4L)) < ((void*)0 != &l_539)))) <= (p_36 ^ (*g_1019))), 0L)) ^ (*g_80));
                    }
                }
                else
                {
                    int16_t *l_1026 = &g_1014;
                    (*g_88) = (void*)0;
                    (*l_1007) = func_61(&g_87, l_1012, l_1025);
                    return l_1026;
                }
            }
            else
            {
                int16_t *l_1027 = &g_87;
                int32_t l_1033 = 1L;
                uint32_t *l_1041 = &g_164;
                uint32_t **l_1040 = &l_1041;
                uint32_t ***l_1042 = &l_1040;
                uint32_t **l_1044 = &l_1041;
                uint32_t ***l_1043 = &l_1044;
                uint16_t *l_1057 = (void*)0;
                uint16_t *l_1058 = &l_853;
                uint16_t *l_1059 = (void*)0;
                uint16_t *l_1060 = &g_70;
                uint16_t *l_1061 = &g_1062;
                (*l_1007) = (g_111 , func_61(l_1027, (((**l_908) = ((safe_mod_func_int16_t_s_s(((*l_555) = (safe_rshift_func_int8_t_s_u(((((void*)0 == l_1032) && (*l_1008)) , (l_1033 == ((*g_80) && ((l_496 != (void*)0) >= l_1033)))), 7))), 0x0BC3L)) & l_1033)) , l_1034), l_1025));
                (*g_88) = (((*l_589) = ((safe_rshift_func_int16_t_s_s((safe_add_func_uint32_t_u_u(((*l_1041) = ((((+(0xDCC7BF68L | (p_39 ^ ((*l_1000) == ((*l_1043) = ((*l_1042) = l_1040)))))) , (((safe_sub_func_int32_t_s_s((~p_39), (**l_1007))) & ((((*g_80) <= ((*l_1027) = ((+(safe_lshift_func_uint16_t_u_s(((*l_1061) = ((((((*l_1060) = ((*l_1058) = (safe_rshift_func_int8_t_s_u(p_39, (safe_add_func_uint32_t_u_u(0xC746F246L, (*l_1008))))))) ^ p_36) == p_38) && l_1033) , p_36)), (*l_1008)))) <= (*p_37)))) | (*l_1008)) == (-1L))) | 0x7F2C4883L)) && (*g_80)) > (**l_1025))), 0L)), l_1033)) || 0UL)) , &l_1033);
            }
            (*l_1008) = (-1L);
        }
    }
    else
    {
        uint32_t l_1073 = 18446744073709551615UL;
        int8_t l_1086 = (-5L);
        uint32_t *l_1102 = &g_590;
        uint32_t **l_1101 = &l_1102;
        uint32_t ***l_1100 = &l_1101;
        int8_t **l_1134 = &l_589;
        int32_t **l_1159 = &g_89;
        int32_t **l_1202 = &g_89;
        for (g_70 = (-21); (g_70 < 41); g_70 = safe_add_func_int16_t_s_s(g_70, 5))
        {
            uint32_t *l_1065 = &g_191;
            int32_t l_1066 = (-1L);
            int8_t ***l_1084 = &g_232;
            int16_t *l_1087 = &g_87;
            (*g_88) = func_61((((((&p_39 != l_1065) < l_1066) & (((safe_add_func_int32_t_s_s(0L, (safe_rshift_func_uint16_t_u_s(p_36, 7)))) < 1L) != (((*g_80) = p_38) > ((*l_555) = (((safe_rshift_func_int16_t_s_u(((l_1073 , (safe_rshift_func_int16_t_s_u((+(safe_sub_func_int8_t_s_s((safe_mod_func_int32_t_s_s(((*g_1019) = ((*l_643) = (safe_mod_func_int16_t_s_s(((safe_unary_minus_func_int32_t_s(((*g_576) == l_1084))) == p_36), 0x60D7L)))), l_1085)), 0xEAL))), 1))) <= l_1066), 8)) , 1L) && 0x3984BEFFL))))) , l_1086) , l_1087), l_1066, g_1088);
            (*l_643) = (*g_1019);
            (*l_643) = l_1089;
        }
        for (l_1089 = 0; (l_1089 <= 17); l_1089 = safe_add_func_int8_t_s_s(l_1089, 8))
        {
            (*l_1007) = (void*)0;
        }
        if ((*g_1019))
        {
            uint16_t **l_1096 = (void*)0;
            int32_t l_1097 = (-1L);
            uint32_t ***l_1103 = (void*)0;
            uint32_t ****l_1104 = &l_1103;
            uint8_t *l_1109 = &g_932;
            int8_t ****l_1110 = &g_577;
            int32_t l_1118 = 4L;
            int8_t ***l_1133 = &g_232;
            uint8_t **l_1136 = &l_1109;
            uint8_t ***l_1135 = &l_1136;
            (*l_643) = ((safe_rshift_func_uint8_t_u_s(((*g_149) = ((safe_lshift_func_int8_t_s_s((((void*)0 != l_1096) ^ (((l_1097 != (((safe_lshift_func_uint8_t_u_u((*g_149), 2)) | (((l_1100 == (((*l_1109) = ((((*l_643) , ((g_803 == ((*l_1104) = l_1103)) || ((*g_1019) = ((safe_rshift_func_uint8_t_u_u(((safe_mod_func_uint16_t_u_u(((*g_1019) && l_1097), l_1097)) >= l_1073), p_38)) >= p_39)))) | (*g_149)) <= 0xD9L)) , g_803)) , p_38) & (*g_149))) ^ p_38)) , l_1110) == (void*)0)), 1)) && g_136)), 7)) == 0x158CDDD7L);
            (*l_643) = (p_39 || (safe_lshift_func_uint8_t_u_s(((safe_rshift_func_uint8_t_u_s(p_36, 1)) <= (((*g_149) = (((*g_149) , ((safe_mod_func_int32_t_s_s((g_1117 = (l_1097 = (0xFF25B865L ^ ((&g_70 != (void*)0) == ((((*l_1109) = l_1086) , &l_1086) != &l_1086))))), 1UL)) < g_503)) < p_38)) == 0x24L)), l_1118)));
            (*l_643) = (safe_rshift_func_uint16_t_u_u(0x3074L, ((safe_add_func_uint8_t_u_u((((-1L) <= ((*g_149) = l_1097)) == ((safe_sub_func_int16_t_s_s(((safe_lshift_func_int16_t_s_s(((((safe_sub_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(0x86L, (((void*)0 == &p_39) >= ((p_39 || (((*l_1133) = &l_589) == l_1134)) | 0x00L)))), 0x62L)) ^ 1L) != l_1086) & p_36), p_38)) > 0x322A8536L), p_36)) <= 1UL)), p_38)) ^ (*g_80))));
            g_1137 = l_1135;
        }
        else
        {
            int32_t *l_1139 = &l_974;
            int8_t *l_1166 = &g_368;
            uint32_t ****l_1197 = (void*)0;
            int32_t l_1200 = 0xBA3B8D15L;
            (*l_1007) = l_1139;
            if (p_38)
            {
                uint32_t l_1145 = 0x16EABDB0L;
                uint8_t ****l_1146 = &g_1137;
                int32_t ***l_1157 = &g_1088;
                int16_t *l_1158 = &g_87;
                (*g_88) = func_61(func_65(((safe_unary_minus_func_uint8_t_u(254UL)) & (((**l_908) = p_39) & (safe_mod_func_int16_t_s_s(((l_1086 , (l_1145 = (*g_149))) , (((((**l_1134) = ((((((*l_1146) = (void*)0) != ((((((((((*l_1139) ^ ((p_39 < (safe_lshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((((safe_rshift_func_uint16_t_u_s(((((safe_lshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(0x4994L, 14)), (*l_1139))) || g_99) && p_38) ^ l_1145), l_1145)) , p_39) , 0x85E5L), 15)), (*l_643)))) | 1L)) == 0L) , (*g_149)) || p_39) || (*g_149)) != (**g_1088)) != (**l_1007)) <= p_39) , &g_1138)) , l_1157) == (void*)0) && (*l_1139))) < (***l_1157)) <= l_1086) , (*l_1139))), 1UL)))), l_1158, p_39), p_38, l_1159);
                (*l_643) = (*p_37);
                (*l_1139) = ((((safe_sub_func_int16_t_s_s(((safe_add_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(0x9038L, 6)), 0x0475L)) , (((*l_643) , l_1166) != (*l_1134))), ((*l_1158) = (*g_86)))) | (safe_add_func_uint16_t_u_u((((*g_1019) = (safe_add_func_int16_t_s_s(((safe_add_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_u((((safe_lshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_s(((((*l_1134) != (void*)0) , (safe_lshift_func_int16_t_s_u(p_36, 8))) | p_38), (*l_1139))), p_39)) ^ (*l_1139)) , 1UL), 6)) && (*g_149)), p_38)) ^ (*l_1139)), p_36))) > (*l_1139)), 65535UL))) && 0x5DAA8A91L) & (*l_1139));
            }
            else
            {
                int32_t l_1181 = 0L;
                uint32_t *l_1184 = &l_1073;
                uint32_t *****l_1198 = &l_854;
                int32_t l_1199 = 3L;
                int32_t l_1201 = (-1L);
                if (((((p_38 >= p_39) , ((*l_1184) = (g_794 = (65532UL | ((l_1181 >= (p_39 & ((**l_1159) != ((0x9DL < 0x56L) && ((safe_lshift_func_uint16_t_u_u(p_38, (*l_1139))) & p_36))))) || (**g_1088)))))) , (void*)0) != (void*)0))
                {
                    int8_t l_1193 = 1L;
                    (**l_1159) = ((**l_1159) | p_39);
                    (*l_1159) = func_61((((*l_1184) = ((safe_add_func_int8_t_s_s(p_39, ((((~(!(0x95L != (((p_36 > (4294967295UL >= 0xFF3F4DCAL)) <= ((~((((l_1181 , &g_86) != (void*)0) < ((!(((*l_854) = (((safe_sub_func_int32_t_s_s(0xD4FE54A3L, (**g_1088))) & l_1193) , (void*)0)) != &l_1101)) != 251UL)) & p_38)) & p_36)) == (**l_1159))))) , l_1166) != (*l_588)) >= p_36))) >= (*g_86))) , (void*)0), g_590, &l_1139);
                }
                else
                {
                    int16_t *l_1194 = (void*)0;
                    return l_1194;
                }
                l_1201 = (l_1200 = ((*g_1019) = ((**l_1159) = (l_1199 = (safe_lshift_func_uint16_t_u_s((l_1197 == ((*l_1198) = &g_803)), (p_36 >= (&g_1137 != (void*)0))))))));
            }
            (*l_1007) = func_61(&g_87, p_36, l_1202);
        }
    }
    (*g_1019) = ((safe_unary_minus_func_int16_t_s((l_1204 <= (8L != (safe_lshift_func_uint8_t_u_s((p_36 != ((safe_add_func_int32_t_s_s((-2L), p_36)) != (p_36 || p_39))), 6)))))) , 0xD25BB60DL);
    return &g_87;
}
static uint32_t func_40(int8_t p_41, int32_t p_42, int32_t p_43)
{
    int8_t l_52 = 0xFCL;
    int32_t *l_78 = &g_2;
    uint16_t *l_79 = (void*)0;
    int32_t *l_395 = &g_2;
    int32_t **l_394 = &l_395;
    int32_t *****l_487 = &g_328;
    for (p_42 = 0; (p_42 < (-25)); --p_42)
    {
        int32_t *l_51 = &g_2;
        int32_t **l_50 = &l_51;
        (*l_50) = (g_5 , (void*)0);
        return l_52;
    }
    for (p_42 = 0; (p_42 <= (-3)); --p_42)
    {
        uint16_t *l_69 = &g_70;
        int32_t **l_392 = (void*)0;
        int32_t **l_393 = &g_89;
        int32_t *l_429 = &g_136;
        if (((*l_429) = (((func_55((safe_rshift_func_int8_t_s_u((&g_5 == (l_78 = func_61((g_86 = func_65(((*l_69) = g_2), func_71(l_52, ((safe_rshift_func_uint8_t_u_u(((l_78 != &g_5) , ((((*l_78) >= p_42) , l_79) == g_80)), 6)) , (*g_80)), p_42, g_2), g_2)), p_42, g_88))), p_42)), p_41, l_394) && (**l_394)) >= g_152) < p_42)))
        {
            int8_t l_449 = (-6L);
            uint16_t *l_469 = &g_70;
            int32_t *l_471 = &g_2;
            int32_t *****l_488 = &g_328;
            for (g_70 = (-9); (g_70 <= 23); g_70 = safe_add_func_int16_t_s_s(g_70, 6))
            {
                int32_t l_480 = 4L;
                int32_t *****l_489 = &g_328;
            }
            if (p_41)
                break;
        }
        else
        {
            return (*l_78);
        }
    }
    (**l_487) = &g_88;
    return g_150;
}
static uint8_t func_55(int32_t p_56, int16_t p_57, int32_t ** p_58)
{
    int32_t **l_400 = &g_89;
    int32_t ***l_402 = &g_88;
    int32_t ****l_401 = &l_402;
    int32_t ***l_404 = &l_400;
    int32_t ****l_403 = &l_404;
    int32_t *l_413 = &g_154;
    int32_t ****l_414 = (void*)0;
    uint8_t l_425 = 1UL;
    int8_t ****l_426 = (void*)0;
    int8_t *****l_427 = (void*)0;
    int8_t *****l_428 = &l_426;
    (*p_58) = ((((((*g_149) & p_57) , ((*g_86) = (((safe_rshift_func_int8_t_s_s((safe_mod_func_int16_t_s_s((((void*)0 != l_400) , (((*g_328) = &l_400) != (p_57 , ((*l_403) = ((*g_80) , ((*l_401) = &p_58)))))), (*g_86))), g_111)) >= p_57) >= (*g_86)))) == g_99) >= (*g_149)) , (**l_402));
    (*l_428) = ((safe_sub_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((g_170 < (((((*l_413) = (****l_401)) | ((*g_389) == l_414)) < (safe_rshift_func_int16_t_s_u((safe_add_func_int16_t_s_s((((safe_mod_func_int16_t_s_s(((safe_add_func_uint32_t_u_u((((0x00L && (*g_149)) , p_57) ^ ((safe_rshift_func_uint16_t_u_u(65535UL, ((*g_80) = ((****l_401) >= 0xA3L)))) , 0xD53BL)), (****l_401))) <= 0x6D12L), 0x3228L)) , 0xF591L) >= l_425), p_57)), g_152))) < (***l_404))), (***l_402))), (***l_404))), p_57)) , l_426);
    return (*g_149);
}
static int32_t * func_61(int16_t * p_62, uint32_t p_63, int32_t ** p_64)
{
    int32_t *l_90 = &g_5;
    uint16_t l_95 = 2UL;
    int8_t l_145 = 0xCDL;
    int32_t l_171 = 1L;
    uint32_t l_198 = 4294967295UL;
    uint8_t *l_244 = &g_111;
    uint32_t l_343 = 7UL;
    uint32_t l_367 = 0x4BCF00CCL;
    int32_t *l_391 = &g_152;
    (*g_88) = l_90;
    for (g_81 = 0; (g_81 >= 47); ++g_81)
    {
        int16_t l_97 = (-1L);
        int32_t l_106 = (-1L);
        int32_t *l_108 = &g_5;
        int8_t l_113 = 0x29L;
        int32_t l_334 = 0x248648EDL;
        uint16_t *l_338 = &g_70;
        int8_t l_378 = 1L;
    }
    (*p_64) = &l_171;
    return l_391;
}
static int16_t * func_65(uint16_t p_66, int16_t * p_67, uint32_t p_68)
{
    int32_t *l_85 = (void*)0;
    int32_t **l_84 = &l_85;
    (*l_84) = &g_5;
    return p_67;
}
static int16_t * func_71(uint8_t p_72, uint16_t p_73, uint32_t p_74, uint32_t p_75)
{
    int32_t *l_82 = &g_2;
    int32_t **l_83 = &l_82;
    (*l_83) = (g_5 , l_82);
    return g_80;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_2;
    csmith_sink_ = g_5;
    csmith_sink_ = g_17;
    csmith_sink_ = g_21;
    csmith_sink_ = g_70;
    csmith_sink_ = g_81;
    csmith_sink_ = g_87;
    csmith_sink_ = g_99;
    csmith_sink_ = g_111;
    csmith_sink_ = g_136;
    csmith_sink_ = g_148;
    csmith_sink_ = g_150;
    csmith_sink_ = g_152;
    csmith_sink_ = g_154;
    csmith_sink_ = g_164;
    csmith_sink_ = g_170;
    csmith_sink_ = g_191;
    csmith_sink_ = g_230;
    csmith_sink_ = g_368;
    csmith_sink_ = g_503;
    csmith_sink_ = g_559;
    csmith_sink_ = g_590;
    csmith_sink_ = g_794;
    csmith_sink_ = g_932;
    csmith_sink_ = g_1014;
    csmith_sink_ = g_1062;
    csmith_sink_ = g_1117;
    csmith_sink_ = g_1321;
    csmith_sink_ = g_1336;
    csmith_sink_ = g_1488;
    csmith_sink_ = g_1523;
    csmith_sink_ = g_1525;
    platform_main_end(0,0);
    return 0;
}
