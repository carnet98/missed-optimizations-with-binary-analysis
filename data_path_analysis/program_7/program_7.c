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
static int32_t g_23 = 0x6C218E99L;
static int8_t g_51 = 4L;
static uint64_t g_66 = 18446744073709551609UL;
static uint16_t g_115 = 0xE570L;
static int32_t g_132 = 1L;
static int32_t **g_151 = (void*)0;
static uint32_t g_158 = 4294967293UL;
static int16_t g_175 = 0xDFC5L;
static uint64_t g_177 = 18446744073709551611UL;
static int32_t *g_178 = &g_132;
static int16_t g_186 = 0xBC7EL;
static int64_t g_277 = 0x1F50D1505295FBE9LL;
static uint32_t g_284 = 0xF18D0889L;
static uint8_t g_292 = 0x14L;
static int32_t g_305 = 0L;
static uint32_t g_319 = 0xBFDF1D08L;
static int32_t g_322 = 3L;
static uint8_t g_349 = 0x93L;
static uint16_t g_351 = 0xC215L;
static int64_t g_389 = 5L;
static uint32_t g_418 = 1UL;
static int32_t *g_471 = &g_322;
static int32_t ***g_480 = &g_151;
static int32_t ****g_479 = &g_480;
static int16_t *g_633 = &g_175;
static int16_t **g_632 = &g_633;
static int8_t *g_644 = &g_51;
static int8_t **g_643 = &g_644;
static int16_t g_701 = (-1L);
static uint32_t g_716 = 0x7D1F8EBCL;
static int64_t g_717 = 0L;
static uint16_t func_1(void);
static int32_t * func_2(int64_t p_3);
static int8_t func_11(uint64_t p_12, int32_t * p_13, uint32_t p_14, int32_t * p_15, int32_t * p_16);
static int32_t func_19(int32_t * p_20, int32_t p_21);
static int32_t func_24(uint32_t p_25, uint8_t p_26, int16_t p_27, int16_t p_28, int32_t * p_29);
static int16_t func_31(int32_t * p_32, int32_t p_33, uint32_t p_34, int32_t * p_35, int64_t p_36);
static int32_t * func_37(int32_t * p_38);
static int8_t func_39(int32_t * p_40, int32_t * p_41);
static int32_t * func_43(uint32_t p_44, int32_t * p_45, int8_t p_46, int32_t p_47, int32_t * p_48);
static int32_t * func_52(int32_t p_53, int32_t * p_54, int16_t p_55, uint32_t p_56);
static uint16_t func_1(void)
{
    uint32_t l_8 = 18446744073709551615UL;
    int32_t *l_22 = &g_23;
    int8_t *l_318 = &g_51;
    int32_t **l_320 = &l_22;
    int32_t *l_321 = &g_322;
    uint64_t *l_323 = &g_177;
    int32_t *l_324 = &g_322;
    int32_t *l_703 = &g_132;
    int32_t l_718 = 0x9A08F3B7L;
    uint64_t l_744 = 0xDA1DDBE43CFA8DEDLL;
    l_703 = func_2(((safe_mod_func_uint64_t_u_u((safe_rshift_func_int16_t_s_u(l_8, ((safe_mod_func_int16_t_s_s((l_8 != func_11(((*l_323) = (((safe_lshift_func_uint8_t_u_s((func_19(l_22, (*l_22)) && (-1L)), 7)) , ((*l_320) = ((g_277 = (safe_lshift_func_int8_t_s_s((g_319 = ((*l_318) = ((g_23 != 6UL) > (*l_22)))), 6))) , l_22))) == l_321)), &g_322, g_322, l_324, &g_322)), g_349)) & g_349))), g_349)) > g_349));
    ((void) sizeof ((g_471 == &g_322 || g_471 == &g_23 || g_471 == &g_132) ? 1 : 0), __extension__ ({ if (g_471 == &g_322 || g_471 == &g_23 || g_471 == &g_132) ; else __assert_fail ("g_471 == &g_322 || g_471 == &g_23 || g_471 == &g_132", "/tmp/tmpj286mq5r.c", 85, __extension__ __PRETTY_FUNCTION__); }));
    ((void) sizeof ((l_703 == &g_23 || l_703 == &g_322) ? 1 : 0), __extension__ ({ if (l_703 == &g_23 || l_703 == &g_322) ; else __assert_fail ("l_703 == &g_23 || l_703 == &g_322", "/tmp/tmpj286mq5r.c", 86, __extension__ __PRETTY_FUNCTION__); }));
    if ((l_324 == (((((((*g_471) = (*l_22)) >= (safe_sub_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(0UL, g_319)), (safe_mul_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_s((safe_mul_func_uint8_t_u_u((((((*l_323) = g_701) == (g_351 < g_349)) <= g_66) ^ g_305), (**g_643))), g_716)), g_717)), 0xD6L))))) != g_418) && (*g_633)) | l_718) , &g_284)))
    {
        int8_t l_733 = 0x55L;
        int32_t *l_747 = &g_132;
        uint32_t l_752 = 1UL;
        for (g_717 = 0; (g_717 > 8); ++g_717)
        {
            int32_t l_730 = 0x8C10EF60L;
            uint8_t *l_759 = &g_349;
            int8_t *l_762 = &l_733;
            for (g_177 = (-30); (g_177 < 24); ++g_177)
            {
                int32_t l_723 = 0x5C06E6E6L;
                uint8_t *l_724 = &g_292;
                uint32_t *l_743 = (void*)0;
                (*l_22) |= ((0xB1L & ((*l_724) = (l_723 && 0x71L))) ^ (((l_723 | (safe_mod_func_uint32_t_u_u(l_723, (safe_mul_func_int8_t_s_s(((+l_730) & (safe_sub_func_int32_t_s_s(((((*g_644) >= l_733) | (safe_mul_func_uint16_t_u_u(((((!(l_730 >= (*l_321))) , l_723) , 255UL) > (**g_643)), (**g_632)))) <= 1L), l_723))), (*g_644)))))) < 1UL) == (*g_633)));
                (*l_324) = ((((**g_632) = (safe_add_func_uint64_t_u_u((safe_sub_func_int64_t_s_s((((l_321 != (((safe_lshift_func_uint16_t_u_u(g_186, 9)) & ((void*)0 != &l_724)) , l_743)) ^ l_744) <= ((((safe_add_func_uint64_t_u_u(((g_717 , ((&g_480 == (void*)0) <= (*g_633))) <= l_730), g_175)) >= l_730) , 0x4684CC45CE519DEDLL) , 0xE9L)), l_723)), 2L))) , 7L) ^ l_730);
                (*l_320) = l_747;
                ((void) sizeof ((l_22 == &g_132) ? 1 : 0), __extension__ ({ if (l_22 == &g_132) ; else __assert_fail ("l_22 == &g_132", "/tmp/tmpj286mq5r.c", 106, __extension__ __PRETTY_FUNCTION__); }));
            }
            (**l_320) = ((*l_321) = (((g_51 == (((((*l_762) = ((safe_lshift_func_uint16_t_u_u(((0x51L < ((safe_lshift_func_int16_t_s_u((0x66L & l_752), ((safe_mul_func_uint16_t_u_u(g_66, ((safe_mod_func_uint8_t_u_u(0UL, (((l_730 & ((((((safe_lshift_func_int8_t_s_s((((*l_759)--) || g_51), (**g_643))) > (*l_747)) == (**g_643)) , l_730) , (*l_703)) | (*l_22))) >= 1L) && l_730))) , g_284))) <= (*l_747)))) , 0x8CL)) ^ l_730), 14)) & (*l_703))) != 255UL) >= g_51) == 1UL)) | 0x10L) ^ 65532UL));
        }
        ((void) sizeof ((l_22 == &g_132 || l_22 == &g_23) ? 1 : 0), __extension__ ({ if (l_22 == &g_132 || l_22 == &g_23) ; else __assert_fail ("l_22 == &g_132 || l_22 == &g_23", "/tmp/tmpj286mq5r.c", 111, __extension__ __PRETTY_FUNCTION__); }));
    }
    else
    {
        (*l_22) = 0xC6315FFAL;
    }
    ((void) sizeof ((l_22 == &g_132 || l_22 == &g_23) ? 1 : 0), __extension__ ({ if (l_22 == &g_132 || l_22 == &g_23) ; else __assert_fail ("l_22 == &g_132 || l_22 == &g_23", "/tmp/tmpj286mq5r.c", 118, __extension__ __PRETTY_FUNCTION__); }));
    return (*l_321);
}
static int32_t * func_2(int64_t p_3)
{
    int16_t l_354 = 0xFDF3L;
    int32_t l_358 = (-10L);
    int32_t l_376 = (-1L);
    int32_t l_377 = 0xF206085BL;
    int32_t l_379 = 0x9070625BL;
    int32_t l_381 = 0L;
    int32_t *l_430 = &g_305;
    uint8_t *l_463 = &g_292;
    uint8_t **l_462 = &l_463;
    int8_t *l_464 = &g_51;
    uint16_t *l_468 = &g_351;
    int16_t *l_470 = &g_186;
    int16_t **l_469 = &l_470;
    int32_t ***l_553 = &g_151;
    int32_t *l_557 = &l_358;
    int8_t l_581 = 1L;
    uint32_t l_594 = 18446744073709551611UL;
    uint32_t l_687 = 0x6E447777L;
    int32_t *l_691 = &g_23;
    if ((safe_mul_func_int16_t_s_s(g_277, l_354)))
    {
        int32_t *l_355 = (void*)0;
        int32_t **l_356 = &g_178;
        int32_t *l_357 = &g_23;
        int32_t *l_359 = (void*)0;
        int32_t *l_360 = &g_322;
        int32_t *l_361 = (void*)0;
        int32_t l_362 = (-4L);
        int32_t *l_363 = &g_23;
        int32_t l_364 = 0xAF48159CL;
        int32_t *l_365 = &l_362;
        int32_t *l_366 = &l_358;
        int32_t *l_367 = &g_322;
        int32_t *l_368 = (void*)0;
        int32_t *l_369 = &l_362;
        int32_t *l_370 = &l_362;
        int32_t *l_371 = (void*)0;
        int32_t *l_372 = &g_132;
        int32_t *l_373 = &l_364;
        int32_t *l_374 = &g_23;
        int32_t *l_375 = &g_322;
        int32_t *l_378 = &l_358;
        int32_t *l_380 = &l_364;
        int32_t *l_382 = &l_376;
        int32_t *l_383 = &g_322;
        int32_t *l_384 = (void*)0;
        int32_t *l_385 = &g_132;
        int32_t l_386 = 0x99573897L;
        int32_t *l_387 = (void*)0;
        int32_t l_388 = 0xC40DF291L;
        int32_t *l_390 = &g_23;
        int32_t *l_391 = &l_358;
        int32_t *l_392 = &l_388;
        int32_t *l_393 = &l_379;
        int32_t *l_394 = &l_386;
        int32_t *l_395 = &l_388;
        int32_t *l_396 = &l_379;
        int32_t *l_397 = &g_322;
        int32_t *l_398 = &l_379;
        int32_t *l_399 = &g_23;
        int32_t *l_400 = &l_376;
        int32_t *l_401 = &l_377;
        int32_t *l_402 = (void*)0;
        int32_t *l_403 = &g_132;
        int32_t *l_404 = &l_381;
        int32_t *l_405 = &l_358;
        int32_t *l_406 = &l_364;
        int32_t *l_407 = &l_386;
        int32_t *l_408 = &g_23;
        int32_t *l_409 = &l_379;
        int32_t *l_410 = (void*)0;
        int32_t *l_411 = (void*)0;
        int32_t *l_412 = &l_386;
        int32_t *l_413 = &g_132;
        int32_t *l_414 = &l_358;
        int32_t *l_415 = &l_386;
        int32_t *l_416 = &l_381;
        int32_t *l_417 = &l_364;
        int16_t l_423 = 0L;
        int16_t l_424 = 0xE8F5L;
        (*l_356) = l_355;
        ((void) sizeof ((g_178 == 0) ? 1 : 0), __extension__ ({ if (g_178 == 0) ; else __assert_fail ("g_178 == 0", "/tmp/tmpj286mq5r.c", 212, __extension__ __PRETTY_FUNCTION__); }));
        ++g_418;
        for (g_158 = 16; (g_158 > 29); g_158 = safe_add_func_int8_t_s_s(g_158, 6))
        {
            uint8_t l_425 = 255UL;
            uint8_t l_441 = 1UL;
            --l_425;
            (*l_391) = (((((safe_sub_func_int64_t_s_s(((p_3 != (l_430 != &g_305)) , ((safe_lshift_func_int8_t_s_u(((safe_rshift_func_int8_t_s_u(g_132, (safe_sub_func_int32_t_s_s(l_425, ((*l_412) = (safe_lshift_func_uint8_t_u_s(((safe_mod_func_int64_t_s_s((p_3 != l_441), ((250UL ^ (((l_354 , &l_423) == &l_354) | l_376)) | l_441))) & l_381), l_425))))))) || l_441), 5)) >= p_3)), 2L)) , 65530UL) >= p_3) , l_425) & g_158);
        }
    }
    else
    {
        int32_t l_442 = 6L;
        int8_t *l_443 = &g_51;
        int8_t **l_444 = &l_443;
        uint32_t *l_458 = &g_284;
        uint16_t *l_459 = &g_351;
        l_358 |= p_3;
        (*g_178) = p_3;
        l_442 &= (*g_178);
        (*g_178) = ((&g_51 != ((*l_444) = l_443)) , (safe_add_func_uint64_t_u_u((~(((((~(((!((p_3 > ((*l_459) = ((safe_add_func_int32_t_s_s((-1L), g_158)) != ((safe_add_func_uint8_t_u_u(((safe_unary_minus_func_uint32_t_u(p_3)) && ((*l_458) &= ((((!1UL) & (((safe_add_func_uint64_t_u_u(((void*)0 != &l_379), p_3)) , l_442) , g_351)) <= l_442) == p_3))), l_442)) | 9UL)))) <= 0x63D993A821AC2331LL)) , &g_51) != (void*)0)) == g_158) > g_349) , p_3) < g_51)), p_3)));
    }
    ((void) sizeof ((g_178 == &g_23 || g_178 == 0) ? 1 : 0), __extension__ ({ if (g_178 == &g_23 || g_178 == 0) ; else __assert_fail ("g_178 == &g_23 || g_178 == 0", "/tmp/tmpj286mq5r.c", 235, __extension__ __PRETTY_FUNCTION__); }));
    if ((0UL == (p_3 && (safe_sub_func_int8_t_s_s(((*l_464) &= ((((*l_462) = &g_292) != (void*)0) == p_3)), (((*l_468) = (((((safe_mod_func_int8_t_s_s(((+p_3) <= ((g_292 , (&l_354 == &l_354)) >= g_418)), (-1L))) ^ g_175) , l_358) & 0L) | g_349)) , p_3))))))
    {
        l_469 = l_469;
        return g_471;
    }
    else
    {
        uint32_t l_472 = 0x897B0590L;
        uint64_t *l_473 = &g_177;
        int32_t ****l_481 = &g_480;
        int8_t *l_490 = &g_51;
        int32_t l_550 = 0L;
        int32_t l_556 = 1L;
        uint8_t l_586 = 0x52L;
        int32_t l_685 = 0L;
        if ((l_472 , ((l_473 == l_473) , ((~(safe_mul_func_uint8_t_u_u(0x5DL, (safe_mod_func_uint16_t_u_u(((((l_472 , (void*)0) == (l_481 = g_479)) >= p_3) & (g_389 , g_132)), l_472))))) != l_358))))
        {
            uint32_t *l_487 = (void*)0;
            int32_t l_488 = 1L;
            int8_t **l_489 = &l_464;
            int32_t l_505 = 1L;
            int64_t *l_549 = &g_277;
            int32_t l_551 = 4L;
            uint32_t *l_552 = &g_284;
            uint64_t l_554 = 18446744073709551615UL;
            (*g_471) ^= ((~(18446744073709551613UL == (safe_mod_func_uint64_t_u_u((safe_add_func_uint32_t_u_u((l_488 ^= p_3), (((*l_489) = &g_51) != l_490))), l_376)))) || ((*l_468) = p_3));
            g_178 = func_52(p_3, func_52((safe_sub_func_uint32_t_u_u(((safe_mul_func_int16_t_s_s((g_175 = (l_488 && (~(safe_lshift_func_uint16_t_u_u(((safe_add_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(l_488, ((&l_490 == ((p_3 < ((p_3 != (+l_354)) & ((safe_sub_func_int8_t_s_s(((g_132 , ((void*)0 != &g_480)) <= p_3), l_488)) ^ g_292))) , &l_464)) , g_115))), g_115)) ^ l_505), g_322))))), 0x2876L)) , p_3), 0x8213D1F3L)), &l_488, l_505, g_132), p_3, g_158);
            ((void) sizeof ((g_178 == &g_23) ? 1 : 0), __extension__ ({ if (g_178 == &g_23) ; else __assert_fail ("g_178 == &g_23", "/tmp/tmpj286mq5r.c", 266, __extension__ __PRETTY_FUNCTION__); }));
            l_554 &= (!(l_354 > ((safe_rshift_func_int16_t_s_u((((((safe_add_func_int8_t_s_s((l_472 | (!(((safe_mul_func_int16_t_s_s((safe_mod_func_uint64_t_u_u((safe_add_func_uint32_t_u_u(((*l_552) = (!((((safe_add_func_int32_t_s_s((((safe_lshift_func_uint8_t_u_s((safe_rshift_func_uint16_t_u_s((g_23 <= p_3), l_379)), ((((((((safe_mul_func_int8_t_s_s(p_3, ((*l_463) = ((safe_sub_func_int8_t_s_s(((safe_add_func_int64_t_s_s((safe_mod_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(((((((((safe_rshift_func_int8_t_s_u((safe_mod_func_uint8_t_u_u(((g_322 & (((safe_rshift_func_int16_t_s_u(((((safe_sub_func_int16_t_s_s((g_389 || ((l_505 = ((*l_549) = (safe_add_func_int32_t_s_s(((((*l_473) = (safe_lshift_func_uint16_t_u_u((((((safe_rshift_func_int8_t_s_u((((((0xEEL & p_3) >= l_505) & p_3) , g_351) < p_3), 1)) , 0L) , l_488) >= p_3) , g_305), g_132))) ^ g_389) , 0x3B490FC0L), l_488)))) != g_351)), g_389)) >= 0xD78261ABL) == 0x9F70L) <= 0x79BD662EL), 0)) , p_3) == l_550)) & 0xE0E0L), g_418)), 3)) & 0xCEL) , p_3) > l_551) , 0x9FL) ^ g_418) , 0L) , p_3), p_3)), 253UL)), p_3)) & l_377), 0x3FL)) == p_3)))) || p_3) == 0x5CL) < g_115) , 0UL) ^ p_3) & 0xD3L) >= l_354))) , p_3) , p_3), 0x1256B1F6L)) , g_186) || l_505) <= l_488))), p_3)), l_488)), 1L)) == (*g_471)) , 0xDFL))), l_488)) , l_553) == (*g_479)) ^ g_23) , 0xCF76L), 5)) & p_3)));
        }
        else
        {
            int32_t *l_555 = &g_23;
            return l_555;
        }
        ((void) sizeof ((g_178 == &g_23) ? 1 : 0), __extension__ ({ if (g_178 == &g_23) ; else __assert_fail ("g_178 == &g_23", "/tmp/tmpj286mq5r.c", 277, __extension__ __PRETTY_FUNCTION__); }));
        (*g_471) = (l_556 |= (*g_178));
        (*g_178) = ((l_557 = func_37(&l_556)) != &l_381);
        ((void) sizeof ((l_557 == &l_556) ? 1 : 0), __extension__ ({ if (l_557 == &l_556) ; else __assert_fail ("l_557 == &l_556", "/tmp/tmpj286mq5r.c", 281, __extension__ __PRETTY_FUNCTION__); }));
        for (l_358 = 1; (l_358 == 0); l_358--)
        {
            uint32_t *l_574 = &g_158;
            uint32_t l_589 = 0x34EAD642L;
            int16_t l_684 = (-8L);
            uint64_t **l_686 = &l_473;
            int32_t l_688 = 0L;
            int32_t l_689 = 2L;
            if ((safe_mul_func_int16_t_s_s(((safe_sub_func_uint16_t_u_u((g_186 & ((safe_sub_func_int8_t_s_s((-1L), 1UL)) & ((*g_471) > 4294967295UL))), 0xD7EAL)) & ((safe_mul_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u((((safe_mul_func_int16_t_s_s(((safe_rshift_func_int16_t_s_s((((*l_574)--) , 0x4FA1L), 5)) < p_3), (safe_lshift_func_uint8_t_u_s(((safe_lshift_func_int8_t_s_s((((void*)0 == &g_305) >= 0L), p_3)) || l_581), p_3)))) | p_3) && 0xB81BL), 0xEEL)) <= p_3), 1UL)) <= g_277)), g_292)))
            {
                int32_t l_595 = 0x16C565AAL;
                (*g_178) &= (safe_lshift_func_uint8_t_u_s((safe_sub_func_uint8_t_u_u((((l_586 && (safe_rshift_func_int8_t_s_u(p_3, g_389))) & ((-1L) >= l_589)) | (*l_557)), (safe_rshift_func_uint8_t_u_s((g_389 , (safe_mod_func_int16_t_s_s(l_594, l_595))), g_66)))), l_589));
            }
            else
            {
                uint32_t l_601 = 0x02127C1FL;
                uint64_t l_642 = 1UL;
                if ((*g_178))
                {
                    int32_t **l_613 = &g_471;
                    int16_t ***l_631 = &l_469;
                    int64_t *l_638 = &g_389;
                    (*l_557) = (safe_rshift_func_int16_t_s_s((-1L), 6));
                    (*l_613) = func_43((safe_unary_minus_func_uint8_t_u((g_349 = p_3))), l_574, (safe_mul_func_int16_t_s_s(l_601, ((((safe_mul_func_int8_t_s_s((0xDD22L | (safe_rshift_func_int8_t_s_s(((!(((0xBDC5D14B4C910CA1LL < l_601) < (safe_add_func_int64_t_s_s((g_277 != (safe_mul_func_int8_t_s_s((((g_284 != (l_601 != l_601)) < p_3) , (-2L)), 0x59L))), l_601))) || 1UL)) == 1L), 4))), l_589)) , g_115) > 0x337E1C1FL) , 0x3810L))), l_589, &l_556);
                    ((void) sizeof ((g_471 == &g_23 || g_471 == &g_132) ? 1 : 0), __extension__ ({ if (g_471 == &g_23 || g_471 == &g_132) ; else __assert_fail ("g_471 == &g_23 || g_471 == &g_132", "/tmp/tmpj286mq5r.c", 307, __extension__ __PRETTY_FUNCTION__); }));
                    g_132 |= ((((((g_23 >= 0x9C8AL) >= (((safe_lshift_func_uint16_t_u_s((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(g_351, ((!(safe_mod_func_int64_t_s_s((safe_sub_func_int8_t_s_s(0x88L, p_3)), (safe_add_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(((safe_sub_func_int64_t_s_s(p_3, (((*l_631) = (void*)0) == g_632))) , ((((safe_rshift_func_uint8_t_u_u((((*l_638) = (((((safe_mod_func_uint32_t_u_u(1UL, (-9L))) , &g_292) == (void*)0) < 18446744073709551615UL) || 255UL)) | 0UL), 3)) >= g_158) , (-1L)) < p_3)), 1)), 0x0F60L))))) != 0UL))), g_177)), 11)) , (*l_557)) , l_589)) , (**l_481)) != (void*)0) <= (*l_557)) || p_3);
                    ((void) sizeof ((l_469 == 0) ? 1 : 0), __extension__ ({ if (l_469 == 0) ; else __assert_fail ("l_469 == 0", "/tmp/tmpj286mq5r.c", 310, __extension__ __PRETTY_FUNCTION__); }));
                    (*l_557) = (l_589 > (+((0xEEL && (p_3 <= l_589)) != (l_642 ^ ((((g_643 != (void*)0) , (*g_178)) <= p_3) <= g_177)))));
                }
                else
                {
                    int32_t *l_645 = &l_377;
                    int32_t **l_646 = (void*)0;
                    int32_t **l_647 = (void*)0;
                    int32_t **l_648 = &g_178;
                    int32_t *****l_649 = (void*)0;
                    (*l_648) = l_645;
                    ((void) sizeof ((g_178 == &l_377) ? 1 : 0), __extension__ ({ if (g_178 == &l_377) ; else __assert_fail ("g_178 == &l_377", "/tmp/tmpj286mq5r.c", 322, __extension__ __PRETTY_FUNCTION__); }));
                    l_649 = &g_479;
                    ((void) sizeof ((l_649 == &g_479) ? 1 : 0), __extension__ ({ if (l_649 == &g_479) ; else __assert_fail ("l_649 == &g_479", "/tmp/tmpj286mq5r.c", 325, __extension__ __PRETTY_FUNCTION__); }));
                }
            }
            l_689 = (safe_rshift_func_uint16_t_u_u((p_3 && ((safe_mul_func_uint8_t_u_u(g_115, (safe_mod_func_int64_t_s_s(((((safe_sub_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_u((l_688 = (((safe_mod_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s((((0x12FE5C71616FBDB8LL && ((((*l_686) = (((safe_mod_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((g_351 &= (safe_mul_func_uint16_t_u_u(((&l_550 != l_574) && (safe_sub_func_uint32_t_u_u((((0x30L && ((!(safe_lshift_func_int8_t_s_s((-1L), 7))) | (safe_rshift_func_uint16_t_u_u((((safe_sub_func_uint64_t_u_u(0xA3C9DEEEC245D851LL, (safe_sub_func_int64_t_s_s(((safe_sub_func_int8_t_s_s((~0xFD2FL), (*g_644))) , 0x0A1FF2559C4E1FA5LL), 1L)))) <= p_3) >= (**g_643)), l_684)))) ^ 5UL) ^ 0L), 0x442E5E93L))), 0xE8C0L))), 5)), l_685)) <= (-2L)) , (void*)0)) != &g_66) <= (*g_644))) & 6UL) >= 0x38F6L), p_3)), (*g_633))) > l_687) & 0xD394L)), 4)), g_175)) & (-4L)) <= (-1L)) > (**g_632)), l_589)))) , 0xE97A36D6L)), g_319));
            (*g_471) &= l_688;
        }
        ((void) sizeof ((g_178 == &l_377 || g_178 == &g_23) ? 1 : 0), __extension__ ({ if (g_178 == &l_377 || g_178 == &g_23) ; else __assert_fail ("g_178 == &l_377 || g_178 == &g_23", "/tmp/tmpj286mq5r.c", 332, __extension__ __PRETTY_FUNCTION__); }));
        ((void) sizeof ((l_469 == &l_470 || l_469 == 0) ? 1 : 0), __extension__ ({ if (l_469 == &l_470 || l_469 == 0) ; else __assert_fail ("l_469 == &l_470 || l_469 == 0", "/tmp/tmpj286mq5r.c", 333, __extension__ __PRETTY_FUNCTION__); }));
        ((void) sizeof ((g_471 == &g_322 || g_471 == &g_23 || g_471 == &g_132) ? 1 : 0), __extension__ ({ if (g_471 == &g_322 || g_471 == &g_23 || g_471 == &g_132) ; else __assert_fail ("g_471 == &g_322 || g_471 == &g_23 || g_471 == &g_132", "/tmp/tmpj286mq5r.c", 334, __extension__ __PRETTY_FUNCTION__); }));
        ((void) sizeof ((l_473 == &g_177 || l_473 == 0) ? 1 : 0), __extension__ ({ if (l_473 == &g_177 || l_473 == 0) ; else __assert_fail ("l_473 == &g_177 || l_473 == 0", "/tmp/tmpj286mq5r.c", 335, __extension__ __PRETTY_FUNCTION__); }));
    }
    ((void) sizeof ((g_178 == &l_377 || g_178 == &g_23) ? 1 : 0), __extension__ ({ if (g_178 == &l_377 || g_178 == &g_23) ; else __assert_fail ("g_178 == &l_377 || g_178 == &g_23", "/tmp/tmpj286mq5r.c", 338, __extension__ __PRETTY_FUNCTION__); }));
    ((void) sizeof ((l_469 == &l_470 || l_469 == 0) ? 1 : 0), __extension__ ({ if (l_469 == &l_470 || l_469 == 0) ; else __assert_fail ("l_469 == &l_470 || l_469 == 0", "/tmp/tmpj286mq5r.c", 339, __extension__ __PRETTY_FUNCTION__); }));
    ((void) sizeof ((g_471 == &g_322 || g_471 == &g_23 || g_471 == &g_132) ? 1 : 0), __extension__ ({ if (g_471 == &g_322 || g_471 == &g_23 || g_471 == &g_132) ; else __assert_fail ("g_471 == &g_322 || g_471 == &g_23 || g_471 == &g_132", "/tmp/tmpj286mq5r.c", 340, __extension__ __PRETTY_FUNCTION__); }));
    (*g_471) ^= l_594;
    if ((l_377 = ((*g_471) = (*g_471))))
    {
        int32_t *l_690 = &l_377;
        return l_691;
    }
    else
    {
        int64_t *l_700 = &g_389;
        int32_t l_702 = 1L;
        l_702 |= (safe_mod_func_uint64_t_u_u((safe_mod_func_uint64_t_u_u(((void*)0 == &l_581), (safe_rshift_func_int8_t_s_s((*l_691), (safe_sub_func_int32_t_s_s((0x62L & (g_349 &= (p_3 && ((((g_177 ^ ((*l_700) = g_319)) | (((*l_462) = (*l_462)) != ((p_3 >= 8L) , &g_349))) & g_292) && g_701)))), p_3)))))), 18446744073709551615UL));
    }
    return &g_322;
}
static int8_t func_11(uint64_t p_12, int32_t * p_13, uint32_t p_14, int32_t * p_15, int32_t * p_16)
{
    int32_t l_331 = (-4L);
    uint8_t *l_338 = &g_292;
    int32_t *l_339 = &g_322;
    uint8_t **l_346 = (void*)0;
    uint8_t *l_348 = &g_349;
    uint8_t **l_347 = &l_348;
    uint16_t *l_350 = &g_351;
    for (p_14 = 16; (p_14 <= 18); p_14 = safe_add_func_int8_t_s_s(p_14, 9))
    {
        (*p_15) &= (-3L);
    }
    l_331 = (safe_mul_func_uint8_t_u_u((((safe_sub_func_int8_t_s_s(((((l_331 > (safe_lshift_func_int16_t_s_u(g_115, ((*l_350) = (safe_sub_func_int16_t_s_s((((*g_178) ^= ((((((safe_sub_func_uint32_t_u_u(((l_338 = (void*)0) != ((*l_347) = (((p_13 != l_339) && (safe_add_func_uint64_t_u_u(((&l_331 != &l_331) <= (safe_lshift_func_uint16_t_u_s((g_132 > (g_292 = ((*l_339) = ((((((((safe_sub_func_uint8_t_u_u((g_115 | 0xD295D964L), 0xB9L)) == p_14) >= (*l_339)) ^ p_12) , 0x44L) >= g_66) , g_158) , p_12)))), 1))), g_66))) , (void*)0))), p_12)) , p_12) || p_12) | p_12) , p_14) >= p_12)) || 4294967293UL), p_12)))))) <= 0x12A9ED5AL) , g_305) <= g_66), 0x2EL)) > 0x2809C4DB89876BB3LL) < p_12), g_66));
    ((void) sizeof ((l_338 == 0) ? 1 : 0), __extension__ ({ if (l_338 == 0) ; else __assert_fail ("l_338 == 0", "/tmp/tmpj286mq5r.c", 384, __extension__ __PRETTY_FUNCTION__); }));
    ((void) sizeof ((l_348 == 0) ? 1 : 0), __extension__ ({ if (l_348 == 0) ; else __assert_fail ("l_348 == 0", "/tmp/tmpj286mq5r.c", 385, __extension__ __PRETTY_FUNCTION__); }));
    return g_284;
}
static int32_t func_19(int32_t * p_20, int32_t p_21)
{
    uint32_t l_179 = 0UL;
    int8_t l_180 = 0xCBL;
    int16_t *l_185 = &g_186;
    int32_t *l_187 = (void*)0;
    uint8_t l_290 = 0xCEL;
    uint8_t *l_291 = &g_292;
    uint8_t *l_293 = (void*)0;
    uint8_t *l_294 = &l_290;
    (*p_20) = func_24(((+((*l_294) = ((*l_291) ^= (p_21 > ((((func_31((g_178 = func_37(&g_23)), l_179, l_180, (((*l_185) = (safe_mod_func_uint64_t_u_u(l_180, ((safe_rshift_func_uint16_t_u_u(0UL, 11)) , p_21)))) , l_187), p_21) , l_290) & 65535UL) & g_277) != 5L))))) , g_186), l_180, p_21, l_180, l_187);
    ((void) sizeof ((g_178 == &g_23) ? 1 : 0), __extension__ ({ if (g_178 == &g_23) ; else __assert_fail ("g_178 == &g_23", "/tmp/tmpj286mq5r.c", 407, __extension__ __PRETTY_FUNCTION__); }));
    return (*p_20);
}
static int32_t func_24(uint32_t p_25, uint8_t p_26, int16_t p_27, int16_t p_28, int32_t * p_29)
{
    uint32_t l_295 = 9UL;
    int32_t *l_304 = &g_305;
    int32_t **l_306 = (void*)0;
    int32_t **l_307 = (void*)0;
    int32_t **l_308 = (void*)0;
    int32_t **l_309 = &g_178;
    (*l_309) = func_52(((((*l_304) = (p_27 < ((0x1D4D5885L != ((((((g_177 & (l_295 == (((l_295 , ((safe_add_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u(l_295, 5)), (safe_add_func_uint32_t_u_u(((safe_lshift_func_uint16_t_u_u((((*g_178) != (p_26 < l_295)) > g_177), 9)) , 7UL), 0xFBAD67FFL)))) | p_28)) || 0xFFE1L) == 0x7DDD3BA113A2588FLL))) , l_295) & l_295) , (-7L)) | l_295) < (-1L))) > g_51))) , 0xB9L) < g_186), l_304, p_26, p_27);
    (*g_178) = (p_26 , (((-1L) ^ ((*g_178) , (((safe_rshift_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((((3L ^ g_158) > g_305) >= (safe_sub_func_uint64_t_u_u((0xAC625639F120E9FELL & p_28), g_277))), g_115)), 8)) & (**l_309)) || p_27))) && p_27));
    return (*g_178);
}
static int16_t func_31(int32_t * p_32, int32_t p_33, uint32_t p_34, int32_t * p_35, int64_t p_36)
{
    int16_t l_188 = 0x18CBL;
    int32_t *l_189 = &g_132;
    int32_t *l_190 = &g_132;
    int32_t *l_191 = &g_23;
    int32_t *l_192 = &g_132;
    int32_t *l_193 = &g_23;
    int32_t *l_194 = &g_23;
    int32_t *l_195 = &g_132;
    int32_t l_196 = (-1L);
    int32_t *l_197 = &g_23;
    int32_t l_198 = 0xD09B3387L;
    int32_t *l_199 = &g_23;
    int32_t l_200 = 0x71FAF2A4L;
    int32_t *l_201 = &g_23;
    int32_t *l_202 = &g_23;
    int32_t *l_203 = (void*)0;
    int32_t *l_204 = &g_132;
    int32_t *l_205 = &g_132;
    int32_t *l_206 = &g_23;
    int32_t *l_207 = &g_132;
    int32_t *l_208 = &l_198;
    int32_t *l_209 = &l_198;
    int32_t *l_210 = (void*)0;
    int32_t *l_211 = &l_200;
    int32_t *l_212 = (void*)0;
    int32_t *l_213 = (void*)0;
    int32_t *l_214 = &g_23;
    int32_t *l_215 = (void*)0;
    int32_t *l_216 = &l_200;
    int32_t *l_217 = (void*)0;
    int32_t l_218 = 0xC9EDED60L;
    int32_t *l_219 = &l_198;
    int32_t *l_220 = &l_198;
    int32_t *l_221 = (void*)0;
    int32_t *l_222 = (void*)0;
    int32_t *l_223 = (void*)0;
    int32_t *l_224 = &l_196;
    int32_t *l_225 = &g_23;
    int32_t *l_226 = (void*)0;
    int32_t *l_227 = &l_198;
    int32_t *l_228 = &l_200;
    int32_t *l_229 = &g_132;
    int32_t *l_230 = (void*)0;
    int32_t *l_231 = (void*)0;
    int32_t *l_232 = &l_218;
    int32_t *l_233 = &l_196;
    int32_t *l_234 = (void*)0;
    int32_t *l_235 = (void*)0;
    int32_t *l_236 = (void*)0;
    int32_t l_237 = 7L;
    int32_t *l_238 = &l_218;
    int32_t *l_239 = (void*)0;
    int32_t *l_240 = (void*)0;
    int32_t *l_241 = (void*)0;
    int32_t *l_242 = &l_200;
    int32_t *l_243 = (void*)0;
    int32_t *l_244 = &l_196;
    int32_t l_245 = 0x27752A06L;
    int32_t *l_246 = &l_198;
    int32_t *l_247 = &l_218;
    int32_t *l_248 = &l_237;
    int32_t *l_249 = &l_237;
    int32_t *l_250 = &l_200;
    int32_t *l_251 = &l_245;
    int32_t *l_252 = &g_23;
    int32_t *l_253 = &l_200;
    int32_t *l_254 = &l_218;
    int32_t *l_255 = &l_218;
    int32_t *l_256 = (void*)0;
    int32_t *l_257 = (void*)0;
    int32_t *l_258 = (void*)0;
    int32_t *l_259 = &l_237;
    int32_t *l_260 = &g_132;
    int32_t *l_261 = &g_23;
    int32_t *l_262 = (void*)0;
    int32_t l_263 = (-10L);
    int32_t l_264 = 0x7FCA4635L;
    int32_t *l_265 = &l_245;
    int32_t *l_266 = &l_200;
    int32_t *l_267 = &l_196;
    int32_t *l_268 = &l_263;
    int32_t *l_269 = &l_218;
    int32_t *l_270 = &l_218;
    int32_t l_271 = (-1L);
    int32_t *l_272 = &l_198;
    int32_t l_273 = 0x36B98214L;
    int32_t *l_274 = (void*)0;
    int32_t *l_275 = &l_218;
    int32_t *l_276 = (void*)0;
    int32_t *l_278 = &l_200;
    int32_t *l_279 = (void*)0;
    int32_t *l_280 = &g_132;
    int32_t l_281 = 0xB8E489E7L;
    int32_t *l_282 = &l_271;
    int32_t *l_283 = (void*)0;
    int32_t ***l_287 = (void*)0;
    int32_t ****l_288 = (void*)0;
    uint16_t *l_289 = &g_115;
    g_284--;
    (*l_204) |= ((*l_224) |= (*l_214));
    l_287 = l_287;
    (*l_189) &= ((void*)0 == l_289);
    return g_115;
}
static int32_t * func_37(int32_t * p_38)
{
    int32_t *l_42 = &g_23;
    int8_t *l_50 = &g_51;
    uint64_t *l_65 = &g_66;
    int8_t l_67 = 0x65L;
    int64_t l_68 = 0xBA7DA828C040C8E8LL;
    int32_t *l_119 = &g_23;
    int32_t **l_118 = &l_119;
    int16_t *l_174 = &g_175;
    uint64_t *l_176 = &g_177;
    (*p_38) = (((g_23 | func_39(l_42, func_43(g_23, &g_23, ((*l_50) = (~g_23)), (*p_38), ((*l_118) = func_52(((((safe_rshift_func_int16_t_s_u(((((*l_65) = ((safe_lshift_func_uint8_t_u_s((((*l_42) ^ (safe_mul_func_uint8_t_u_u((safe_add_func_int8_t_s_s((-1L), ((*l_42) != (*l_42)))), 6UL))) , 255UL), 6)) == 0L)) | l_67) > (*p_38)), 7)) , 0x964071C1L) && (*l_42)) , g_23), l_42, l_68, (*l_42)))))) , (*l_42)) , (**l_118));
    (**l_118) = (((((*l_176) = (g_66 = (safe_sub_func_uint16_t_u_u((0x7FF4L <= (safe_mod_func_int32_t_s_s((safe_lshift_func_int16_t_s_u((g_132 == (((0x40F3L >= ((safe_sub_func_uint16_t_u_u(((safe_add_func_int16_t_s_s((+((*l_119) , ((g_51 | ((*l_42) ^ g_132)) ^ ((*l_174) = (safe_mul_func_uint16_t_u_u(((*l_42) <= (*l_42)), 0x296DL)))))), g_66)) <= (*l_42)), 65530UL)) >= (*l_119))) ^ (**l_118)) , (*l_119))), 12)), (*l_119)))), 6UL)))) , (*l_42)) , (void*)0) == l_176);
    return p_38;
}
static int8_t func_39(int32_t * p_40, int32_t * p_41)
{
    uint16_t *l_154 = (void*)0;
    int32_t l_155 = (-3L);
    int32_t l_156 = (-1L);
    uint32_t *l_157 = &g_158;
    int32_t l_159 = 1L;
    int32_t l_160 = 0xA29A6A91L;
    l_160 |= (safe_lshift_func_int16_t_s_s((((l_156 = (g_115 ^ (g_66 | (safe_unary_minus_func_uint8_t_u((!(safe_add_func_uint32_t_u_u((((void*)0 == g_151) < g_23), ((safe_mod_func_uint16_t_u_u((l_155 = (&p_40 == (void*)0)), (l_156 | (((*l_157) = l_156) | g_66)))) & 1UL))))))))) < 0xF0F5L) == l_159), 2));
    return l_156;
}
static int32_t * func_43(uint32_t p_44, int32_t * p_45, int8_t p_46, int32_t p_47, int32_t * p_48)
{
    int8_t *l_127 = &g_51;
    int32_t l_128 = (-1L);
    uint16_t l_140 = 0xE6F9L;
    int32_t **l_144 = (void*)0;
    if ((((p_46 >= (safe_mod_func_int8_t_s_s((safe_add_func_uint64_t_u_u(((((((&p_45 == (void*)0) >= (((~(*p_48)) != g_51) != (safe_rshift_func_int8_t_s_s(g_51, 3)))) <= (l_127 != &g_51)) == ((g_23 , l_128) != 0xB1L)) > g_51) == 0UL), (-8L))), g_66))) | (-10L)) , 2L))
    {
        int16_t l_133 = (-9L);
        for (g_115 = (-11); (g_115 > 33); g_115 = safe_add_func_int64_t_s_s(g_115, 6))
        {
            int32_t *l_131 = &g_132;
            (*l_131) = g_115;
        }
        l_133 = 0x4CC4390AL;
        return &g_132;
    }
    else
    {
        g_132 = (safe_add_func_uint32_t_u_u(4294967295UL, (safe_mul_func_int16_t_s_s(g_51, (safe_add_func_int8_t_s_s(l_140, ((&g_51 != ((safe_lshift_func_int8_t_s_s((safe_unary_minus_func_int8_t_s((((((l_144 == &p_45) | g_115) >= (*p_48)) > l_140) > g_23))), 7)) , &g_51)) , g_115)))))));
        g_132 |= 0x8B8566A4L;
        return &g_23;
    }
}
static int32_t * func_52(int32_t p_53, int32_t * p_54, int16_t p_55, uint32_t p_56)
{
    int16_t l_71 = (-1L);
    int32_t *l_72 = (void*)0;
    int32_t l_73 = 9L;
    int32_t *l_74 = &l_73;
    int32_t *l_75 = (void*)0;
    int32_t *l_76 = &l_73;
    int32_t *l_77 = &l_73;
    int32_t *l_78 = &l_73;
    int32_t *l_79 = &l_73;
    int32_t *l_80 = (void*)0;
    int32_t l_81 = 0x5F5AB95DL;
    int32_t *l_82 = &l_73;
    int32_t *l_83 = &l_81;
    int32_t l_84 = (-1L);
    int32_t *l_85 = &l_73;
    int32_t *l_86 = (void*)0;
    int32_t *l_87 = &l_73;
    int32_t *l_88 = &l_73;
    int32_t *l_89 = &l_84;
    int32_t *l_90 = &l_73;
    int32_t *l_91 = &l_73;
    int32_t *l_92 = &l_81;
    int32_t *l_93 = &l_81;
    int32_t *l_94 = &l_81;
    int32_t *l_95 = &l_81;
    int32_t *l_96 = &l_81;
    int32_t l_97 = 0xC0429090L;
    int32_t l_98 = 0xCF49CF94L;
    int32_t *l_99 = &l_84;
    int32_t *l_100 = &l_81;
    int32_t l_101 = 5L;
    int32_t *l_102 = &l_84;
    int32_t *l_103 = &l_73;
    int32_t l_104 = (-1L);
    int32_t l_105 = 1L;
    int32_t *l_106 = &l_104;
    int32_t l_107 = 0xBF6251CAL;
    int32_t *l_108 = &l_104;
    int32_t *l_109 = &l_105;
    int32_t *l_110 = (void*)0;
    int32_t *l_111 = &l_97;
    int32_t *l_112 = &l_98;
    int32_t l_113 = (-1L);
    int32_t *l_114 = &l_105;
    l_71 = (safe_lshift_func_uint8_t_u_s(0x91L, 0));
    --g_115;
    return &g_23;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    g_178 = 0;
    csmith_sink_ = g_23;
    csmith_sink_ = g_51;
    csmith_sink_ = g_66;
    csmith_sink_ = g_115;
    csmith_sink_ = g_132;
    csmith_sink_ = g_158;
    csmith_sink_ = g_175;
    csmith_sink_ = g_177;
    csmith_sink_ = g_186;
    csmith_sink_ = g_277;
    csmith_sink_ = g_284;
    csmith_sink_ = g_292;
    csmith_sink_ = g_305;
    csmith_sink_ = g_319;
    csmith_sink_ = g_322;
    csmith_sink_ = g_349;
    csmith_sink_ = g_351;
    csmith_sink_ = g_389;
    csmith_sink_ = g_418;
    csmith_sink_ = g_701;
    csmith_sink_ = g_716;
    csmith_sink_ = g_717;
    platform_main_end(0,0);
    return 0;
}
