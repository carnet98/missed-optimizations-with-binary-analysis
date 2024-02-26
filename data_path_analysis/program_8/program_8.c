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
   int64_t f0;
   uint8_t f1;
   int32_t f2;
   uint32_t f3;
   int32_t f4;
};
#pragma pack(pop)
struct S1 {
   int32_t f0;
   uint16_t f1;
   int32_t f2;
   int32_t f3;
};
static uint32_t g_7 = 0UL;
static int32_t g_29 = 0xDBB7A2E2L;
static int64_t g_38 = 0xC04840C2C6F73980LL;
static uint32_t g_39 = 0x067D5B44L;
static int16_t g_87 = 0x6FFBL;
static int8_t g_88 = 0xA2L;
static uint16_t g_94 = 0x2601L;
static int64_t g_100 = 0x330632420D6CD47BLL;
static int32_t g_101 = 1L;
static uint64_t g_105 = 1UL;
static struct S1 g_125 = {0xBA4BFF0AL,0x60CBL,-6L,-1L};
static struct S1 g_158 = {0xAA6A4DFBL,1UL,0L,0x9427022DL};
static struct S0 g_164 = {1L,255UL,0x6E0B1FDEL,0UL,1L};
static struct S0 g_165 = {1L,0UL,0xB30E8A79L,0xF8E2B3D6L,0x5D9A7C64L};
static uint8_t g_279 = 0xEBL;
static uint16_t g_312 = 65531UL;
static int32_t g_315 = (-1L);
static uint64_t g_334 = 0x97202116EFC71797LL;
static uint32_t g_412 = 0UL;
static int16_t g_444 = 0xD799L;
static int32_t g_445 = 0x9E7B897FL;
static int32_t g_446 = 9L;
static uint16_t g_447 = 0xD553L;
static uint16_t g_471 = 1UL;
static int8_t g_565 = (-1L);
static uint32_t g_673 = 18446744073709551615UL;
static uint32_t g_689 = 0x18CDA6E0L;
static int8_t g_712 = 0xC7L;
static uint16_t g_715 = 0x2607L;
static uint16_t g_771 = 0UL;
static int16_t g_772 = 0L;
static int32_t g_798 = 0x9BB500A7L;
static uint16_t g_820 = 0x64C9L;
static uint8_t g_843 = 0x83L;
static uint32_t func_1(void);
inline static int32_t func_3(uint64_t p_4, uint16_t p_5, struct S0 p_6);
static struct S0 func_8(uint8_t p_9, struct S0 p_10);
inline static struct S0 func_11(int32_t p_12, int8_t p_13, uint8_t p_14, struct S0 p_15);
inline static uint64_t func_16(struct S0 p_17, struct S0 p_18);
inline static struct S0 func_19(int8_t p_20, uint64_t p_21, int32_t p_22, uint64_t p_23, int32_t p_24);
inline static int8_t func_44(uint32_t p_45, int32_t p_46, int64_t p_47, int32_t p_48, int64_t p_49);
inline static uint32_t func_50(int16_t p_51);
static int16_t func_52(int64_t p_53, struct S1 p_54, uint32_t p_55, struct S1 p_56);
inline static uint8_t func_61(uint8_t p_62);
static uint32_t func_1(void)
{
    uint64_t l_2 = 1UL;
    int8_t l_25 = 8L;
    int8_t l_26 = 0L;
    uint64_t l_451 = 18446744073709551615UL;
    int32_t l_452 = 0xF36A349AL;
    int32_t l_453 = 0x8FFBA570L;
    struct S0 l_454 = {-5L,0x1CL,0xA1B39F6DL,0UL,0x3DC06B8AL};
    int8_t l_1126 = 0x77L;
    l_1126 = ((l_2 | l_2) >= func_3(g_7, g_7, (l_454 = func_8(g_7, func_11((l_453 = (l_452 = (func_16((g_164 = func_19(l_25, l_26, (g_29 = (safe_add_func_uint32_t_u_u(((0L < (g_7 > l_25)) ^ l_25), g_7))), g_7, l_26)), g_165) & l_451))), g_100, g_125.f2, l_454)))));
    l_453 = ((l_26 >= (safe_mul_func_int16_t_s_s(((g_87 ^= (safe_rshift_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_s(g_315, (g_772 = (-1L)))) != (l_454.f4 = l_453)), 8))) <= (l_454.f1 | (safe_lshift_func_uint16_t_u_u((0xAAL && (g_165.f1 = ((safe_add_func_uint64_t_u_u(((((safe_add_func_int32_t_s_s(0x73BE9CC1L, l_451)) > (++g_164.f1)) > l_454.f0) >= l_26), g_125.f1)) == 0UL))), 7)))), 0x91E0L))) <= l_1126);
    g_315 = (65528UL & 0L);
    g_165 = l_454;
    return g_158.f3;
}
inline static int32_t func_3(uint64_t p_4, uint16_t p_5, struct S0 p_6)
{
    return p_6.f2;
}
static struct S0 func_8(uint8_t p_9, struct S0 p_10)
{
    struct S0 l_908 = {0x1B0F525424842965LL,255UL,1L,0UL,1L};
    int32_t l_909 = 0xDD8ED809L;
    uint8_t l_910 = 0x47L;
    int16_t l_917 = (-1L);
    int32_t l_924 = (-1L);
    int32_t l_925 = 4L;
    int32_t l_927 = 3L;
    int32_t l_928 = 0xA31634B7L;
    int32_t l_932 = 4L;
    int32_t l_933 = (-1L);
    uint16_t l_1045 = 0xF364L;
    struct S1 l_1112 = {1L,0xF29DL,-1L,0L};
    l_908 = l_908;
    --l_910;
    g_164.f2 &= (~l_908.f1);
    if (l_908.f3)
    {
        int8_t l_922 = 0L;
        int32_t l_923 = 3L;
        int32_t l_929 = (-1L);
        int32_t l_930 = 0x2896CA02L;
        int32_t l_931 = 0x9FD986CCL;
        uint16_t l_1024 = 0x368AL;
        int8_t l_1028 = 0L;
        int64_t l_1060 = 0x2C088614224A557DLL;
        struct S1 l_1090 = {-3L,0x9AC6L,1L,2L};
        for (g_94 = (-26); (g_94 >= 47); g_94++)
        {
            int32_t l_916 = 0xF8AC3CF8L;
            int32_t l_918 = 0x3AC5B450L;
            int32_t l_919 = 0x45ADCE26L;
            int32_t l_920 = 0x76D18A17L;
            int32_t l_921 = 0x66C6BABEL;
            int32_t l_926 = 1L;
            uint32_t l_934 = 0xD1B9015AL;
            int64_t l_1089 = 0x56E1FADDD67FA6A8LL;
            struct S0 l_1092 = {0L,0xE5L,1L,18446744073709551609UL,0xF6443458L};
            ++l_934;
            if ((((safe_mul_func_int16_t_s_s(g_125.f3, (p_10.f1 == (safe_add_func_int8_t_s_s((l_908.f2 = ((1L ^ (-5L)) >= l_918)), (0x7CL < (safe_mul_func_int16_t_s_s((p_10.f1 >= (safe_div_func_int64_t_s_s((l_927 > (safe_div_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((p_10.f2 <= p_9), 4)), 2L))), g_158.f2))), g_164.f1)))))))) & l_923) < p_10.f1))
            {
                uint32_t l_955 = 8UL;
                if (l_934)
                    break;
                p_10.f2 &= ((safe_sub_func_uint64_t_u_u((safe_lshift_func_int8_t_s_u(l_955, 3)), l_955)) & ((((1L ^ p_9) ^ 9L) | ((safe_sub_func_int8_t_s_s((0x9088L == 0UL), (safe_mod_func_uint8_t_u_u((l_930 < (safe_lshift_func_uint8_t_u_s(((g_715 | l_955) <= l_908.f0), 5))), g_447)))) == 0x48L)) != 1UL));
                l_932 ^= (safe_div_func_uint64_t_u_u(0xCC8E1087EE62CEDALL, ((safe_mul_func_int16_t_s_s((l_918 = (g_444 = ((l_920 = (safe_add_func_uint64_t_u_u((g_125.f0 == ((safe_unary_minus_func_uint16_t_u((l_933 != ((g_164.f0 >= ((safe_add_func_uint16_t_u_u(((l_919 != ((safe_sub_func_int32_t_s_s(((l_921 = l_908.f2) <= g_444), (p_10.f4 = (safe_div_func_int8_t_s_s(l_955, (((safe_sub_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u((p_9--), (g_88 &= (((((safe_div_func_int32_t_s_s(1L, g_164.f4)) > 0xABL) && l_933) & p_10.f0) >= p_10.f1)))), p_10.f1)) <= g_334) && p_10.f4)))))) | l_920)) < g_673), l_955)) > g_279)) >= p_10.f2)))) != l_919)), l_955))) >= p_10.f0))), (-10L))) | g_689)));
                if (g_87)
                    continue;
            }
            else
            {
                int64_t l_1025 = 0xDDB7871B461BF991LL;
                int32_t l_1029 = 0L;
                struct S1 l_1111 = {3L,0UL,-9L,-1L};
                for (g_165.f1 = 0; (g_165.f1 != 37); g_165.f1 = safe_add_func_int64_t_s_s(g_165.f1, 1))
                {
                    int8_t l_1006 = 0xD0L;
                    int32_t l_1026 = (-1L);
                    uint64_t l_1027 = 18446744073709551611UL;
                    struct S1 l_1091 = {0x040975CCL,0x3BC1L,0x4A680D38L,1L};
                    l_1029 ^= ((safe_div_func_uint8_t_u_u(((safe_unary_minus_func_int64_t_s(((safe_lshift_func_uint16_t_u_s((g_447 = ((safe_mod_func_uint16_t_u_u(((l_1027 = (l_928 < ((((safe_rshift_func_int16_t_s_s((l_1026 ^= (safe_add_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((safe_div_func_int8_t_s_s((((safe_sub_func_uint16_t_u_u(l_934, 0x48BBL)) > 0xBAL) == (safe_mul_func_int8_t_s_s(l_1006, ((l_924 = (((safe_sub_func_uint32_t_u_u((safe_mul_func_int16_t_s_s((safe_add_func_int64_t_s_s(((safe_div_func_int8_t_s_s((safe_rshift_func_int8_t_s_u((safe_sub_func_int64_t_s_s(l_1006, (g_334--))), 5)), (l_921 &= (((!0x7403859B3E6019CDLL) >= (safe_div_func_uint64_t_u_u(((l_1006 && g_412) == 0L), l_1024))) || l_1025)))) > g_712), 0xD1741CA647AFC7F9LL)), l_934)), p_10.f0)) ^ l_934) || p_10.f0)) <= l_923)))), 0x0EL)), 0xE00EL)), p_10.f0))), 2)) | l_1006) || p_10.f0) < g_843))) >= p_10.f2), 1L)) < p_10.f1)), 6)) != g_158.f2))) > g_105), l_1028)) & 1L);
                    g_101 = l_908.f4;
                    for (g_164.f1 = 0; (g_164.f1 != 31); g_164.f1 = safe_add_func_uint8_t_u_u(g_164.f1, 1))
                    {
                        p_10.f2 = (p_10.f3 || (safe_lshift_func_uint8_t_u_s((safe_add_func_int64_t_s_s((-5L), p_10.f0)), (safe_mul_func_int8_t_s_s((l_931 = p_10.f0), (((l_1029 = ((((safe_mul_func_int8_t_s_s(p_10.f0, ((g_38 && p_10.f1) <= (((safe_unary_minus_func_uint32_t_u(l_1027)) == l_922) || 0x5EL)))) != 0L) >= 0L) == 0x9BF98FB9L)) <= l_1028) && l_922))))));
                        g_164.f4 = (safe_rshift_func_int8_t_s_u(((1L != (1UL < (safe_mod_func_int16_t_s_s(l_1045, (-5L))))) < (((safe_sub_func_uint8_t_u_u((0xCBAEL >= 0L), ((safe_sub_func_uint64_t_u_u((g_334 = p_10.f0), (safe_mul_func_uint16_t_u_u((((l_919 |= (l_926 = ((l_1028 <= (safe_add_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((l_1026 = (safe_div_func_uint16_t_u_u(((l_932 = p_10.f3) || l_926), g_88))), g_445)), 5)), l_927))) & l_1060))) && l_1027) != l_1025), l_1025)))) != 0x2E79C258L))) > p_10.f0) && 0x670D85F0L)), 4));
                    }
                    if ((((l_933 = (safe_div_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(p_9, 6)), (safe_add_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(0x3B0BL, l_1029)), (safe_lshift_func_int16_t_s_s(((g_88 = (safe_mod_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(((((g_7 && (safe_mod_func_int8_t_s_s((l_921 = (safe_div_func_int8_t_s_s(((((p_9 && (safe_add_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s((l_929 = ((safe_rshift_func_uint16_t_u_s(0xBFC2L, 10)) ^ ((safe_sub_func_int8_t_s_s((-5L), ((9UL || 18446744073709551615UL) ^ 1UL))) | 0L))), 4)), g_125.f2))) != 1L) >= l_908.f4) & 0x63DFL), l_1089))), p_10.f3))) & 4294967289UL) > l_934) ^ p_10.f1), g_94)), 1)), g_125.f1))) < g_164.f3), 7))))))) > 0x8271L) | g_312))
                    {
                        p_10 = (g_164 = p_10);
                        g_164 = p_10;
                        l_1091 = l_1090;
                    }
                    else
                    {
                        return l_1092;
                    }
                }
                l_931 ^= ((g_334 == g_158.f0) || ((safe_mod_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_u(0xABL, (safe_add_func_int32_t_s_s((safe_div_func_uint8_t_u_u((safe_div_func_uint32_t_u_u(p_10.f0, (safe_rshift_func_uint16_t_u_u((l_923 = p_10.f1), 13)))), (safe_div_func_int32_t_s_s((((safe_rshift_func_int8_t_s_u((p_10.f1 ^ p_10.f3), ((safe_div_func_int8_t_s_s((0x2897FD8CL == p_10.f2), g_158.f3)) < g_87))) < l_1024) != 0xBDL), p_10.f4)))), l_1060)))), g_471)) ^ 9L));
                l_1029 = 0xB2CB15D9L;
                l_1090 = l_1111;
            }
            p_10.f2 = g_87;
        }
        l_1112 = g_158;
        l_931 &= 0x10AEBB1AL;
    }
    else
    {
        uint32_t l_1121 = 4294967295UL;
        l_927 = (safe_mod_func_uint32_t_u_u(g_165.f2, (1UL ^ (safe_mul_func_uint8_t_u_u((1UL & (safe_mul_func_int16_t_s_s((safe_sub_func_int32_t_s_s((g_165.f4 |= (0UL < l_1121)), l_1121)), ((safe_rshift_func_uint16_t_u_u(0x5F73L, 8)) ^ (safe_rshift_func_int8_t_s_u(((0x17L ^ (p_10.f1 <= p_10.f2)) || g_158.f0), 0)))))), l_933)))));
    }
    return p_10;
}
inline static struct S0 func_11(int32_t p_12, int8_t p_13, uint8_t p_14, struct S0 p_15)
{
    uint64_t l_455 = 18446744073709551614UL;
    uint32_t l_472 = 4294967288UL;
    int32_t l_486 = (-2L);
    int32_t l_487 = 0L;
    int32_t l_507 = 0x03D7F307L;
    int32_t l_508 = 0xE6413676L;
    int32_t l_586 = (-5L);
    int32_t l_601 = 0x1DE4C37FL;
    uint32_t l_646 = 0x4EBD6CA1L;
    int8_t l_831 = (-9L);
    struct S0 l_847 = {1L,0xECL,0x61A0A4E6L,4UL,0x12EC648AL};
    int32_t l_862 = 0L;
    struct S1 l_907 = {1L,3UL,0xF1F5F602L,-5L};
    p_15.f4 = l_455;
    if ((p_15.f0 > ((((safe_lshift_func_uint16_t_u_u((--g_158.f1), 2)) && ((0x2E56490D080C8F7ELL & p_15.f2) != ((safe_add_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((p_15.f1 | (0xF085FD94092DDBB3LL ^ l_455)), g_165.f4)), ((safe_rshift_func_uint16_t_u_s((safe_mul_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s(((((+(((g_471 &= 1UL) & (g_88 = 0L)) <= p_12)) > g_125.f2) > 0L) | g_444), l_455)) | l_472), p_15.f2)), 2)) | g_94))) == g_125.f2))) > (-1L)) == 0x32293B63C9BB6DF1LL)))
    {
        uint64_t l_488 = 0xB51DFCB4B0FBFB27LL;
        int32_t l_489 = 0x4A5D0BC7L;
        int32_t l_490 = 0L;
        uint8_t l_491 = 0x3FL;
        uint32_t l_840 = 0x68BF4C4FL;
        uint64_t l_879 = 0x8248036C46F4F246LL;
        if ((safe_lshift_func_uint16_t_u_u(1UL, (l_491 &= ((g_105 && g_165.f2) > (safe_add_func_uint16_t_u_u(((((l_489 = (l_488 |= ((safe_rshift_func_int8_t_s_u((p_13 = (-2L)), 2)) | (g_7 != ((safe_sub_func_uint16_t_u_u(((safe_sub_func_uint64_t_u_u(g_447, (safe_unary_minus_func_uint64_t_u((~(!(((((l_486 &= 0x32D582BE5E30AFCALL) > p_15.f2) >= (((l_487 = (g_445 <= g_165.f4)) != l_472) ^ p_15.f2)) >= p_15.f0) > g_100))))))) == p_15.f4), 0x95F1L)) != g_158.f1))))) & p_15.f0) >= l_472) <= l_490), l_455)))))))
        {
            int32_t l_498 = 0xBA9D7E2DL;
            int32_t l_602 = 0x0F94A629L;
            uint64_t l_645 = 1UL;
            int32_t l_797 = (-9L);
            int16_t l_799 = (-1L);
            uint16_t l_802 = 1UL;
            g_164 = g_164;
            g_165.f2 |= g_447;
            if ((safe_sub_func_uint64_t_u_u(p_15.f2, (((l_508 ^= (l_507 ^= (safe_lshift_func_int16_t_s_s(l_487, (safe_rshift_func_int16_t_s_s((l_498 = 1L), ((p_12 = ((safe_sub_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s(((((safe_add_func_uint16_t_u_u(((((g_125.f2 < l_491) == l_488) | g_158.f0) <= (safe_rshift_func_int8_t_s_u(0L, 2))), l_472)) | p_15.f4) && 0x4D5FA84D3B9400A6LL) ^ 0xB061L), g_312)), p_14)) > 0x92L)) != p_15.f1))))))) || g_125.f1) == g_165.f2))))
            {
                int64_t l_527 = (-1L);
                struct S1 l_579 = {0x85D0A29AL,65535UL,1L,0x37C34580L};
                int32_t l_674 = 0x8198939BL;
                uint32_t l_711 = 0xE95F5B17L;
                struct S0 l_719 = {0x50E5571A8812CF31LL,0xEEL,-4L,0x6938A6EFL,0x8121BB18L};
                p_15.f4 |= (safe_div_func_int32_t_s_s((l_507 = (safe_mul_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u(p_14, 5)) == ((((safe_sub_func_uint32_t_u_u((safe_add_func_int16_t_s_s(0x8C24L, (safe_rshift_func_uint16_t_u_u((g_88 > (safe_mod_func_uint16_t_u_u(l_489, ((safe_rshift_func_int8_t_s_u((safe_mul_func_int8_t_s_s(g_164.f2, ((g_105 ^= (((++g_158.f1) != ((p_15.f1 ^ (safe_sub_func_uint32_t_u_u(1UL, (safe_rshift_func_uint16_t_u_s(65528UL, ((g_101 == p_14) != 4294967295UL)))))) > g_94)) > (-1L))) <= g_164.f0))), 7)) || g_87)))), 15)))), 0xC2346151L)) & g_471) || l_487) && 0x4DD7D93E56EBD7AALL)), l_487))), 0x7ED3F3E7L));
                if (p_12)
                {
                    uint32_t l_566 = 0x10C580E4L;
                    for (p_15.f4 = 14; (p_15.f4 != 19); ++p_15.f4)
                    {
                        l_489 = (safe_unary_minus_func_int16_t_s(((g_334 = ((safe_lshift_func_int8_t_s_s((l_455 > (safe_div_func_int16_t_s_s((g_164.f2 <= (safe_sub_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((safe_div_func_int32_t_s_s(l_490, p_13)), (g_88 ^= ((safe_add_func_uint64_t_u_u((((safe_sub_func_uint16_t_u_u((((safe_add_func_uint8_t_u_u(((safe_mod_func_uint32_t_u_u(0x40CC9025L, (g_125.f2 || l_498))) | ((safe_div_func_uint64_t_u_u((safe_mod_func_uint32_t_u_u((g_565 = (safe_mul_func_uint16_t_u_u((g_471 = (g_94 = (safe_add_func_int8_t_s_s(p_12, ((safe_mod_func_int32_t_s_s(l_527, p_13)) && l_498))))), (-1L)))), l_566)), l_527)) < 9UL)), p_15.f1)) < l_527) > 0x43L), l_527)) ^ p_15.f4) <= 0x149AL), p_15.f4)) >= l_490)))), l_488))), l_487))), l_455)) && 1L)) > p_14)));
                        if (g_164.f0)
                            continue;
                    }
                    g_165.f4 &= (safe_mod_func_int8_t_s_s(6L, (safe_mod_func_int64_t_s_s(((safe_sub_func_int64_t_s_s((0xDC26DD47L >= 0x29F923C5L), (g_334 = (((l_508 &= (((safe_add_func_uint16_t_u_u((safe_mod_func_int64_t_s_s(g_164.f4, p_13)), (p_14 | (safe_lshift_func_uint8_t_u_u(l_472, 3))))) ^ p_15.f2) > p_14)) != g_29) == 4294967291UL)))) && (-1L)), l_487))));
                    l_579 = g_125;
                }
                else
                {
                    uint64_t l_603 = 0xD12B6D85FC0F2815LL;
                    int32_t l_713 = 5L;
                    if (g_471)
                    {
                        int32_t l_604 = 0x93FC86E0L;
                        g_164.f2 &= (safe_mul_func_int16_t_s_s(((safe_mul_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((l_507 >= (l_586 = ((l_487 = (l_508 &= g_445)) & p_12))), (((((safe_lshift_func_int8_t_s_s((safe_add_func_uint16_t_u_u(((~(+1L)) < (safe_mod_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((safe_add_func_int8_t_s_s(p_13, (safe_div_func_int16_t_s_s(0x70C7L, 3UL)))), p_13)), ((((((l_602 = (l_601 ^= (p_15.f1 |= g_158.f3))) >= 0xB9L) >= l_498) | l_603) || g_94) && l_579.f2)))), g_334)), g_94)) && 0UL) ^ l_604) > 0L) >= g_279))), 0L)) >= 0xED294866EB6EA5EBLL), 65535UL));
                        return p_15;
                    }
                    else
                    {
                        uint16_t l_609 = 5UL;
                        g_164.f4 = ((((l_490 || (safe_add_func_uint16_t_u_u(g_158.f0, p_13))) <= l_498) & ((l_603 ^ (safe_lshift_func_uint16_t_u_u(p_15.f0, 9))) == l_491)) >= p_15.f3);
                        p_12 = 0x4A4F0EC5L;
                        l_609 = (-4L);
                    }
                    for (p_14 = 10; (p_14 != 60); p_14++)
                    {
                        return p_15;
                    }
                    if (((safe_mod_func_uint32_t_u_u((0xA079E201L && (safe_unary_minus_func_uint32_t_u((safe_sub_func_int8_t_s_s(p_14, 0x5CL))))), (safe_add_func_uint16_t_u_u((((safe_sub_func_uint8_t_u_u(9UL, ((safe_rshift_func_uint16_t_u_u(p_13, g_94)) & 0x87L))) <= 18446744073709551614UL) < (safe_add_func_uint8_t_u_u(((g_105 = (l_601 = 18446744073709551615UL)) >= l_602), g_164.f3))), p_15.f2)))) && l_603))
                    {
                        int16_t l_647 = 0xEBA1L;
                        l_647 = (g_445 |= (((l_601 = (safe_div_func_int16_t_s_s(((!(g_39 < p_14)) < (safe_mod_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_u((((p_12 <= p_15.f2) > (safe_lshift_func_uint8_t_u_s((safe_mul_func_int16_t_s_s(((safe_div_func_uint64_t_u_u((l_579.f1 <= l_527), (safe_sub_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u(g_101, l_603)), ((!(l_645 = (safe_div_func_uint32_t_u_u(g_88, 0xEE201195L)))) && p_15.f3))))) >= p_15.f1), 0x436AL)), l_646))) || l_603), 5)) & g_165.f2), p_13))), 0xC150L))) < 0x2F43L) || 18446744073709551615UL));
                        l_507 = (safe_lshift_func_uint16_t_u_s((l_674 ^= (l_490 = (l_586 = (safe_add_func_int64_t_s_s((safe_rshift_func_uint8_t_u_s(((g_334 ^= l_603) == (safe_lshift_func_int8_t_s_u(((safe_rshift_func_uint8_t_u_u(((((safe_mod_func_uint16_t_u_u((g_125.f1 | (((3L ^ (0xFE64C09CL < (0x4F35AACB7B1F4729LL <= ((g_673 = ((p_13 |= ((safe_rshift_func_uint16_t_u_u(l_647, 6)) | ((safe_sub_func_int16_t_s_s(((g_279 ^= (l_489 = ((((safe_div_func_uint16_t_u_u(((safe_add_func_int64_t_s_s(((safe_mod_func_int8_t_s_s((~0xB579325DL), (l_602 ^ l_647))) >= g_125.f0), g_38)) <= g_165.f3), p_15.f3)) != p_14) ^ (-1L)) | p_15.f0))) >= 1UL), g_158.f3)) >= p_15.f4))) ^ 0x84L)) < g_158.f3)))) & g_94) | p_15.f3)), g_447)) < g_88) >= g_565) <= g_165.f0), 2)) >= (-3L)), l_579.f2))), p_15.f2)), g_165.f0))))), 4));
                    }
                    else
                    {
                        int32_t l_694 = 8L;
                        p_15.f2 &= p_12;
                        g_315 = (safe_mod_func_int32_t_s_s((g_87 <= ((safe_mul_func_int8_t_s_s(0xB2L, p_15.f4)) <= (safe_div_func_int64_t_s_s(g_334, ((safe_rshift_func_int8_t_s_u(g_312, 4)) || (safe_sub_func_uint8_t_u_u(0x5CL, (safe_add_func_uint64_t_u_u((safe_add_func_uint32_t_u_u((++g_689), ((((l_694 ^= ((p_15.f3 == (safe_lshift_func_uint8_t_u_s(l_579.f0, 6))) & l_488)) | g_158.f1) & 1L) > (-1L)))), l_586))))))))), 1UL));
                        p_15.f4 |= (0xC54B03DBL && g_279);
                    }
                    if (((((p_13 ^ (((p_13 <= (g_312 < (l_674 |= (safe_add_func_uint16_t_u_u((l_602 ^ 0x14L), (safe_add_func_int8_t_s_s(l_603, (safe_div_func_int32_t_s_s((safe_sub_func_int16_t_s_s((g_444 = (safe_lshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_u(((g_712 = ((-10L) ^ (safe_mul_func_uint8_t_u_u(((g_471 <= ((safe_div_func_int32_t_s_s((p_15.f4 = ((0UL & g_164.f2) ^ 0UL)), p_15.f1)) < l_711)) | 9L), 0x32L)))) || l_602), l_488)), l_491))), p_15.f1)), 0x41801E37L))))))))) | g_565) <= g_565)) >= 9UL) != 0x545BL) >= 0xD42CL))
                    {
                        int64_t l_714 = 0xDFA885A27DE33565LL;
                        l_602 &= (l_713 = (p_15.f1 > (l_487 = 0UL)));
                        g_101 = (g_164.f4 &= (p_15.f2 = 0L));
                        g_715++;
                    }
                    else
                    {
                        struct S0 l_718 = {0x0F6BFB2496E7423ALL,0x82L,1L,18446744073709551611UL,0L};
                        uint64_t l_720 = 1UL;
                        l_719 = l_718;
                        l_720--;
                        p_12 = (safe_mod_func_uint64_t_u_u(((l_674 = (g_772 ^= (g_771 = (((0xC903L >= ((((g_88 = (safe_rshift_func_uint8_t_u_s(((safe_sub_func_int64_t_s_s(l_645, (((safe_mul_func_int8_t_s_s((safe_add_func_uint16_t_u_u(((((safe_sub_func_uint8_t_u_u(9UL, (g_279 = (1L == (safe_add_func_int64_t_s_s((g_164.f0 &= (2UL == ((safe_lshift_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((safe_add_func_int32_t_s_s((safe_sub_func_int8_t_s_s(((--g_447) | (++g_94)), (safe_mul_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((safe_add_func_uint64_t_u_u(((((safe_div_func_uint16_t_u_u(g_87, 65533UL)) > (safe_div_func_int16_t_s_s(((((safe_rshift_func_int8_t_s_u((safe_add_func_int32_t_s_s(((safe_rshift_func_int8_t_s_s((l_586 ^= (l_602 ^= (+(0x96941FA8L > (safe_mul_func_uint8_t_u_u((((safe_unary_minus_func_uint8_t_u((safe_sub_func_int32_t_s_s(((g_315 >= p_13) <= g_312), p_15.f4)))) > g_125.f1) > 18446744073709551606UL), l_719.f3)))))), 3)) || l_455), l_645)), 2)) != 5UL) <= p_15.f3) > p_15.f2), l_527))) ^ g_165.f2) != p_15.f0), 1L)), l_498)), g_88)))), g_125.f1)), 0xCB66L)), 2)) == l_579.f2))), g_312)))))) | g_29) <= p_15.f3) || 255UL), g_312)), 7L)) != 0L) & 0xCEL))) == g_315), l_490))) == p_15.f4) || g_164.f0) | l_488)) ^ p_15.f2) ^ p_14)))) < 0x7AFE2448L), l_498));
                    }
                }
                l_490 &= ((safe_sub_func_uint8_t_u_u(g_565, p_15.f4)) != (safe_mul_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((l_491 != (safe_mod_func_uint32_t_u_u(((l_498 ^ (safe_rshift_func_uint8_t_u_s((safe_sub_func_uint64_t_u_u((((safe_mod_func_uint8_t_u_u(((l_488 & (safe_lshift_func_int8_t_s_s((4L | ((safe_sub_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s((0x5963A6ACL && p_15.f1), (safe_div_func_int16_t_s_s((-6L), 0xDFCBL)))) > g_444), p_15.f0)) | g_39)), l_797))) < g_771), (-6L))) | p_15.f1) & g_798), 8L)), 5))) < g_105), p_12))), l_797)), (-1L))) & g_164.f4), (-8L))));
            }
            else
            {
                g_315 |= l_799;
                l_490 ^= g_715;
            }
            g_101 = ((((safe_mul_func_int8_t_s_s(l_802, (-3L))) | (safe_add_func_int8_t_s_s(((g_88 = 0x49L) >= ((((0L > (safe_lshift_func_int16_t_s_u((safe_unary_minus_func_int8_t_s((safe_sub_func_uint16_t_u_u((safe_div_func_int32_t_s_s((safe_unary_minus_func_uint32_t_u((g_820 = (1L != (l_489 && (+((safe_rshift_func_int8_t_s_s((safe_mod_func_uint8_t_u_u((0xC3L && ((g_712 = 0x42L) || (g_712 = (safe_mod_func_uint32_t_u_u(g_715, 8L))))), 1UL)), 6)) != g_164.f0))))))), l_799)), l_455)))), 2))) > 0xF7L) >= 0x3CE64919B0EFBBA0LL) == g_565)), 0x63L))) != (-8L)) >= g_38);
        }
        else
        {
            int32_t l_823 = 0L;
            uint64_t l_824 = 0xD166B52D0B4CBE2ELL;
            int32_t l_861 = (-1L);
            int16_t l_880 = 9L;
            int16_t l_906 = 0x45D9L;
            for (g_673 = (-15); (g_673 < 32); g_673 = safe_add_func_int16_t_s_s(g_673, 4))
            {
                l_824--;
                g_315 = (safe_mod_func_int8_t_s_s(0L, (safe_rshift_func_uint16_t_u_u(l_831, 2))));
                if (((safe_sub_func_uint16_t_u_u((g_164.f3 <= (safe_sub_func_int16_t_s_s(g_315, (g_444 ^= 6L)))), p_15.f0)) | (safe_lshift_func_int16_t_s_u((l_490 ^= ((g_412 < (safe_mod_func_uint8_t_u_u(l_840, (safe_rshift_func_uint16_t_u_s(g_165.f0, 14))))) == (l_508 = (g_843 = 0x582363DCL)))), 5))))
                {
                    uint8_t l_844 = 0xDDL;
                    l_844--;
                }
                else
                {
                    g_165 = l_847;
                    if (l_823)
                        break;
                }
            }
            if ((safe_rshift_func_uint16_t_u_u((((safe_sub_func_uint16_t_u_u((g_125.f3 > (l_847.f2 = (safe_add_func_uint8_t_u_u(0UL, p_15.f2)))), (safe_mod_func_uint64_t_u_u(l_488, l_823)))) != ((g_158.f0 || 0x93FE5E98L) | (((!(!(g_843 |= (safe_add_func_uint32_t_u_u((l_847.f3 == (!((((((l_861 = g_164.f3) ^ g_798) == g_334) >= l_489) >= p_15.f4) | 0xC5L))), g_820))))) & p_13) < l_586))) == l_862), l_490)))
            {
                int8_t l_881 = 0x51L;
                g_164.f4 = (!(safe_mul_func_uint8_t_u_u(l_840, (((l_881 = (((safe_mul_func_int8_t_s_s(g_88, ((safe_mod_func_int16_t_s_s((1L >= (l_486 > (+0x490F310D540DF4E5LL))), g_315)) <= (g_334 ^= (safe_rshift_func_uint8_t_u_s((--g_279), (((p_15.f2 = (l_880 = ((0x9CD9867DL != 0xA5304A82L) ^ (((safe_mul_func_uint16_t_u_u(((l_879 = (((((((safe_mod_func_uint16_t_u_u(0x1DF6L, 0x3CB1L)) < 0x6200C363L) >= 0x9A88L) | 4294967286UL) || 0xB630L) | p_15.f1) | g_165.f3)) && l_823), (-1L))) | 4L) | 0x368ADBAE2B226853LL)))) <= p_12) > l_861))))))) > 4294967286UL) >= g_712)) && l_847.f1) != p_14))));
            }
            else
            {
                int16_t l_905 = 1L;
                p_15.f4 |= ((safe_sub_func_uint32_t_u_u(l_824, (p_15.f2 & (safe_mod_func_uint16_t_u_u(((g_820 < (safe_sub_func_int16_t_s_s(((!(safe_mul_func_uint16_t_u_u((safe_div_func_int8_t_s_s(((((((p_15.f1 < (safe_mod_func_uint8_t_u_u(g_715, (safe_sub_func_int8_t_s_s((!g_447), (safe_add_func_uint32_t_u_u(((!(-8L)) <= (safe_sub_func_uint8_t_u_u(g_94, ((safe_sub_func_uint64_t_u_u((l_823 > l_905), p_12)) <= g_158.f2)))), 0L))))))) || g_412) != g_445) && 0x70B809DFE4C064EBLL) | g_88) < p_12), p_13)), l_906))) < 1L), g_125.f3))) != g_798), 0x440FL))))) < 1L);
            }
        }
    }
    else
    {
        return p_15;
    }
    g_158 = l_907;
    return g_165;
}
inline static uint64_t func_16(struct S0 p_17, struct S0 p_18)
{
    uint32_t l_176 = 4294967295UL;
    uint32_t l_189 = 0UL;
    int32_t l_190 = 0L;
    int16_t l_191 = 0L;
    struct S0 l_192 = {8L,0x35L,0x271B26D0L,0x2D8D885DL,0x7D95D16DL};
    int64_t l_223 = 0xFE1C8D4623137507LL;
    int16_t l_267 = 0x2BB3L;
    uint16_t l_335 = 65533UL;
    uint32_t l_339 = 4294967295UL;
    int32_t l_443 = 0xBB8A498CL;
    uint32_t l_450 = 0xB5BCDB70L;
    l_192 = func_19(g_165.f2, (+(l_191 = (safe_mul_func_uint16_t_u_u(0x58C3L, (((~(safe_add_func_uint16_t_u_u((safe_div_func_int8_t_s_s(g_105, (p_17.f1 & 0x05L))), ((safe_mul_func_uint16_t_u_u(l_176, (safe_add_func_int16_t_s_s((safe_add_func_uint8_t_u_u((((l_190 = (safe_add_func_int32_t_s_s(((safe_rshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_s(l_189, (g_87 | l_176))), 8)), 4)) >= l_176), g_105))) | l_176) < p_18.f1), 0xD0L)), p_18.f0)))) < p_18.f4)))) && p_18.f0) == 255UL))))), g_165.f1, g_88, g_125.f2);
    for (l_192.f3 = 29; (l_192.f3 >= 36); l_192.f3 = safe_add_func_int8_t_s_s(l_192.f3, 1))
    {
        int64_t l_195 = 0x409261988898D0BALL;
        int32_t l_196 = 0xC8820D8BL;
        int32_t l_272 = 0L;
        int32_t l_276 = 0xC314D703L;
        uint32_t l_318 = 4294967292UL;
        int32_t l_415 = 0L;
        uint8_t l_429 = 0x21L;
        l_195 = l_190;
        if ((0x3A45L || g_164.f4))
        {
            uint32_t l_197 = 8UL;
            int32_t l_274 = (-1L);
            int32_t l_277 = 0L;
            uint64_t l_354 = 0x17B4EDF28120CE1ALL;
            ++l_197;
            if ((safe_sub_func_uint16_t_u_u(((l_192.f2 = l_197) <= (safe_sub_func_uint8_t_u_u(255UL, ((((safe_rshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_s((safe_div_func_int32_t_s_s(g_125.f0, g_100)), (safe_add_func_uint64_t_u_u(((((((safe_lshift_func_int8_t_s_s(((safe_mul_func_int16_t_s_s(p_17.f0, p_18.f4)) && (safe_mod_func_uint64_t_u_u((0xDBCA6F5D40A597C7LL >= g_164.f4), (+((safe_mod_func_uint64_t_u_u(((safe_div_func_int16_t_s_s(((p_17.f0 > p_18.f0) >= 0x6EL), l_197)) == 0xF213L), 0xC49FD6B0DCD2CF26LL)) | 250UL))))), g_164.f4)) || g_165.f4) != 0x2BB3BD2D33707CADLL) | p_17.f2) ^ 0L) <= 0xD32AF4CE8BB6BBBDLL), g_39)))), 4)) && l_223) < l_190) > p_18.f1)))), l_195)))
            {
                g_101 = g_94;
            }
            else
            {
                for (g_165.f2 = (-22); (g_165.f2 <= (-21)); g_165.f2 = safe_add_func_uint8_t_u_u(g_165.f2, 3))
                {
                    if (g_165.f1)
                        break;
                }
            }
            for (g_125.f0 = (-14); (g_125.f0 != 17); g_125.f0++)
            {
                int16_t l_235 = 0xB97BL;
                int32_t l_241 = 1L;
                uint16_t l_269 = 1UL;
                int8_t l_356 = 0x10L;
                if ((((p_17.f0 != (g_125.f1 | (0x43L < (safe_add_func_uint16_t_u_u((g_158.f0 >= (((g_87 = (g_164.f4 && (safe_unary_minus_func_uint32_t_u((safe_mod_func_int8_t_s_s((0L < l_235), 0xD4L)))))) || (6UL <= g_125.f1)) <= g_94)), (-8L)))))) >= 4294967295UL) & g_158.f0))
                {
                    uint16_t l_261 = 0xF783L;
                    int32_t l_268 = 0L;
                    if (p_18.f1)
                    {
                        uint64_t l_238 = 0UL;
                        int32_t l_262 = (-1L);
                        g_164.f4 |= (((l_190 > (safe_mod_func_int16_t_s_s((l_238 > g_125.f3), (safe_add_func_int32_t_s_s((l_241 = g_158.f1), ((safe_add_func_int32_t_s_s((safe_rshift_func_int8_t_s_s(l_196, p_18.f4)), l_235)) > 0UL)))))) < 0x83F6A43EL) >= l_235);
                        l_192.f2 = (p_18.f4 &= (((safe_div_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(((g_87 = (l_196 = (safe_sub_func_int64_t_s_s(g_94, (safe_lshift_func_uint8_t_u_s(g_88, 3)))))) & ((!(safe_mul_func_uint16_t_u_u(g_164.f3, (safe_lshift_func_uint16_t_u_s((l_261 = 0xD024L), 1))))) | (p_18.f0 = (((((l_262 = l_195) || g_165.f4) ^ ((g_88 <= (safe_rshift_func_int8_t_s_s(((l_238 & (safe_mod_func_int16_t_s_s(g_101, g_164.f2))) || l_267), p_18.f1))) | l_268)) == l_269) && p_18.f2)))), g_125.f2)), p_17.f2)) & g_94) && 0xEC73L));
                    }
                    else
                    {
                        g_29 |= g_87;
                    }
                    for (g_165.f3 = 0; (g_165.f3 > 25); g_165.f3++)
                    {
                        int16_t l_273 = (-5L);
                        int8_t l_275 = 0x14L;
                        int32_t l_278 = 0x2D74585EL;
                        g_279++;
                        if (g_164.f1)
                            continue;
                        return g_87;
                    }
                    if ((g_29 = (safe_mul_func_uint16_t_u_u(0xCFE0L, (0UL ^ ((safe_mod_func_int32_t_s_s(((0x7BL >= ((safe_lshift_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((((g_100 < ((safe_rshift_func_int16_t_s_u(p_17.f4, 0)) ^ g_125.f2)) < l_176) ^ p_17.f1), ((safe_div_func_int32_t_s_s(((safe_sub_func_int8_t_s_s((safe_div_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(((safe_add_func_int8_t_s_s((g_279 | g_165.f3), g_164.f4)) >= l_195), p_18.f1)), 0xABA6L)), 5L)) <= 0x5207L), p_17.f3)) | g_164.f2))), 1)) && g_158.f3), p_17.f1)) == l_192.f2)) >= l_269), l_261)) & l_268))))))
                    {
                        l_268 = 0x3894A638L;
                        g_165 = g_165;
                    }
                    else
                    {
                        int64_t l_304 = 0x6830DA417DDE3D06LL;
                        g_29 = (p_18.f0 < (l_192.f4 && (l_304 &= (l_274 = 0xE1A71A3699C2ED7BLL))));
                        if (p_17.f0)
                            continue;
                    }
                }
                else
                {
                    p_17.f2 = ((+(safe_rshift_func_uint16_t_u_s(((safe_mul_func_int16_t_s_s(((g_312 = (g_101 ^ (safe_lshift_func_uint8_t_u_u(p_17.f1, 7)))) < (l_318 = (((safe_mul_func_int16_t_s_s((1UL ^ (((g_315 = 1UL) | g_125.f1) >= (((p_17.f3 < (g_164.f2 == (g_164.f1 != (safe_rshift_func_int8_t_s_u((((p_18.f0 &= l_192.f0) <= l_272) & 65532UL), p_18.f4))))) | l_192.f1) | l_277))), p_17.f4)) >= l_276) > 3UL))), 0x3BAEL)) > 0x4DL), p_17.f3))) == p_17.f3);
                }
                l_335 ^= (safe_mod_func_uint64_t_u_u(l_195, ((p_17.f1 = (((((g_334 = (safe_mul_func_int16_t_s_s((~(safe_div_func_int64_t_s_s(0x8C9A67DAFABD6D18LL, (g_105 |= (safe_mod_func_uint64_t_u_u(0xD36DCFDDA602393ELL, p_17.f2)))))), (safe_mul_func_int16_t_s_s(((l_241 = (65528UL < (safe_div_func_uint16_t_u_u(((p_17.f0 >= (safe_rshift_func_int16_t_s_s((((g_87 = 0x8373L) ^ l_197) > l_274), 1))) <= l_235), l_235)))) | l_274), (-1L)))))) != g_164.f0) < p_18.f0) ^ g_39) != l_235)) & p_17.f0)));
                for (g_279 = 24; (g_279 >= 22); g_279 = safe_sub_func_uint16_t_u_u(g_279, 1))
                {
                    int64_t l_338 = 0x1BC2A71DD7EC65E0LL;
                    l_339++;
                    g_315 = g_87;
                    if (l_338)
                        break;
                }
                g_164 = func_19((g_334 <= (safe_lshift_func_int16_t_s_u(0x2849L, (~((safe_mod_func_int16_t_s_s((l_241 = (p_18.f1 ^ (safe_mod_func_int32_t_s_s((g_29 = ((g_105 & ((safe_add_func_uint32_t_u_u(g_165.f2, (!(safe_sub_func_uint32_t_u_u(((l_354 && (((safe_unary_minus_func_int8_t_s(p_17.f0)) > (((p_17.f4 ^ (l_277 & 0xCF511DB535A2EF25LL)) >= p_17.f4) <= l_356)) | 255UL)) == g_334), l_272))))) || g_100)) & g_165.f2)), 0x0B62747BL)))), 0x0DBBL)) < 0x4F55L))))), p_18.f4, g_279, l_354, l_195);
            }
        }
        else
        {
            int64_t l_391 = 0x076AC9240290D0EALL;
            int32_t l_392 = 6L;
            int32_t l_409 = (-4L);
            int32_t l_410 = (-7L);
            int32_t l_411 = 7L;
            for (g_125.f1 = 0; (g_125.f1 != 28); g_125.f1++)
            {
                uint64_t l_359 = 0xCC9B7E9D353CF452LL;
                p_17.f2 = g_158.f2;
                if (l_359)
                    break;
                for (g_38 = 12; (g_38 == (-3)); g_38--)
                {
                    return l_191;
                }
                for (l_318 = (-14); (l_318 == 48); ++l_318)
                {
                    uint64_t l_366 = 18446744073709551613UL;
                    g_29 &= (p_17.f2 <= ((safe_unary_minus_func_uint16_t_u((~((l_366 = 0x23BCL) && ((safe_lshift_func_uint16_t_u_s((l_192.f4 &= ((safe_div_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u(((((l_392 |= ((safe_add_func_int32_t_s_s(((((((0UL || p_18.f1) <= (((p_17.f1 &= l_359) != (p_18.f3 == (safe_mod_func_uint8_t_u_u((((safe_div_func_uint16_t_u_u(((safe_mod_func_int32_t_s_s(((((safe_div_func_uint32_t_u_u((((safe_sub_func_int8_t_s_s(((l_196 = 0xDAL) > ((((safe_mul_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(((safe_sub_func_uint8_t_u_u((p_18.f3 == p_17.f0), l_191)) | 0x8CL), p_18.f2)), 4L)) != 0xD076111DL) == 0x84L) && 8L)), 0xB7L)) >= l_391) >= p_18.f2), 0xFAE5F79DL)) & p_17.f0) <= g_100) < p_18.f1), p_18.f2)) || l_366), p_18.f3)) || p_18.f2) >= g_165.f0), l_359)))) == 65535UL)) && 255UL) || p_18.f0) > 0x5921L) > g_125.f1), l_366)) >= l_366)) > g_158.f0) & 0x38L) <= p_17.f0), (-4L))), l_366)) >= l_195)), 14)) ^ p_18.f1))))) & p_17.f3));
                    for (g_279 = (-17); (g_279 > 51); ++g_279)
                    {
                        uint64_t l_395 = 4UL;
                        return l_395;
                    }
                    for (l_190 = 0; (l_190 >= 22); l_190 = safe_add_func_int64_t_s_s(l_190, 9))
                    {
                        int16_t l_408 = 0x46C9L;
                        g_315 = (((safe_rshift_func_uint16_t_u_u((l_192.f2 = (g_312 > ((safe_add_func_uint16_t_u_u(l_318, l_359)) < p_18.f3))), 9)) > (p_18.f0 == p_17.f1)) | (safe_mod_func_uint32_t_u_u(((safe_add_func_uint64_t_u_u((p_18.f0 > ((l_276 = ((p_18.f1 = p_17.f1) & p_17.f1)) <= p_17.f3)), 0UL)) == (-4L)), 3UL)));
                        p_18.f2 = (18446744073709551615UL && (safe_add_func_int64_t_s_s(l_408, (g_334 = l_272))));
                        --g_412;
                        p_18.f2 = ((l_415 > (safe_rshift_func_int8_t_s_s(g_158.f0, (l_392 || p_18.f1)))) > ((!(-1L)) ^ 4294967295UL));
                    }
                }
            }
            l_409 ^= (safe_sub_func_uint64_t_u_u((((safe_mul_func_int8_t_s_s((safe_sub_func_int16_t_s_s((((safe_rshift_func_int8_t_s_s((l_192.f4 = g_125.f3), ((safe_mul_func_int8_t_s_s((l_429 == ((((!(((safe_add_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(((safe_mod_func_uint8_t_u_u(l_189, (g_94 | (l_411 ^= (((18446744073709551615UL && (safe_mul_func_int16_t_s_s((0xAB93AFC0L ^ (safe_mod_func_int64_t_s_s(g_334, p_17.f4))), (safe_rshift_func_uint8_t_u_s(p_18.f2, p_17.f4))))) | 0UL) | g_158.f2))))) >= 0xD7L), p_17.f0)), 3L)) > 0x5FL) > g_125.f2)) || g_125.f0) <= 2L) != g_29)), p_17.f4)) && p_17.f1))) == l_410) & l_272), l_318)), g_101)) == l_192.f3) || 0x99L), 0xE1DA71A939F94B34LL));
            g_447--;
        }
    }
    return l_450;
}
inline static struct S0 func_19(int8_t p_20, uint64_t p_21, int32_t p_22, uint64_t p_23, int32_t p_24)
{
    int64_t l_32 = 0xCD908FBDEDBEC151LL;
    int32_t l_36 = 0xE2510A74L;
    int32_t l_37 = (-1L);
    struct S0 l_163 = {0x8C6B94EFEA996BB9LL,0xE4L,-4L,1UL,0xF3A6B8F9L};
    for (p_20 = 3; (p_20 < 5); ++p_20)
    {
        uint32_t l_33 = 0x416DA84BL;
        int64_t l_89 = 0xA2910E9FB3884E3ELL;
        int32_t l_90 = (-3L);
        struct S1 l_124 = {0xAA40D6DDL,1UL,7L,1L};
        uint16_t l_162 = 0x5692L;
        --l_33;
        g_39--;
        g_29 = (((safe_div_func_int8_t_s_s(func_44(func_50(func_52((safe_div_func_int8_t_s_s(((safe_rshift_func_int8_t_s_s(0x92L, 6)) >= (func_61((safe_mul_func_int8_t_s_s((safe_sub_func_int8_t_s_s(((l_90 = (((g_39 != ((g_88 |= ((safe_add_func_int16_t_s_s(l_33, (safe_mod_func_uint8_t_u_u((l_36 = ((-4L) < p_20)), l_33)))) | (safe_add_func_uint64_t_u_u((g_7 | (0x979D795BL | ((safe_div_func_uint8_t_u_u(((((safe_sub_func_int32_t_s_s((safe_rshift_func_int16_t_s_s(((safe_add_func_int16_t_s_s((g_87 &= (safe_lshift_func_int8_t_s_u((safe_lshift_func_int8_t_s_u((safe_mul_func_int8_t_s_s(0xD1L, l_33)), p_22)), 3))), l_33)) < 0xE2D4DC4505AF75FBLL), 2)), (-1L))) > g_29) == p_23) || (-1L)), l_33)) > l_32))), g_7)))) == g_38)) || g_88) != l_89)) != g_39), l_32)), 6UL))) == 0x2CL)), 0xE8L)), l_124, g_7, g_125)), p_23, p_22, l_32, l_32), 0x49L)) && l_36) != l_162);
    }
    g_29 = (p_23 != (g_88 = p_24));
    return l_163;
}
inline static int8_t func_44(uint32_t p_45, int32_t p_46, int64_t p_47, int32_t p_48, int64_t p_49)
{
    uint32_t l_159 = 4UL;
    l_159++;
    return p_48;
}
inline static uint32_t func_50(int16_t p_51)
{
    int32_t l_152 = 0x3D09CE06L;
    int32_t l_155 = 4L;
    struct S1 l_157 = {-8L,65529UL,0xAAE7FF6FL,0xD310D212L};
    l_155 = (((safe_mod_func_int32_t_s_s(1L, (safe_rshift_func_uint16_t_u_s((p_51 != (safe_mod_func_int64_t_s_s(p_51, ((safe_lshift_func_uint8_t_u_s(((safe_mul_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((g_100 | ((~((safe_add_func_int8_t_s_s(((((safe_lshift_func_uint16_t_u_u((((((p_51 && p_51) || (safe_sub_func_uint16_t_u_u((g_38 | (safe_mod_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((l_152 ^ (safe_mul_func_int8_t_s_s(g_38, g_39))), l_152)), g_105)), l_152))), g_125.f1))) > p_51) | p_51) < p_51), 5)) < g_125.f2) >= l_152) <= p_51), l_152)) >= g_100)) > g_38)), l_152)), l_152)) | p_51), l_152)) | p_51)))), 3)))) < p_51) && l_152);
    l_155 = (p_51 != (+3UL));
    g_158 = l_157;
    return g_105;
}
static int16_t func_52(int64_t p_53, struct S1 p_54, uint32_t p_55, struct S1 p_56)
{
    struct S1 l_126 = {0x2AC3227DL,1UL,0x31B5FDDBL,0x78982BF9L};
    l_126 = g_125;
    return l_126.f3;
}
inline static uint8_t func_61(uint8_t p_62)
{
    int16_t l_93 = 0xF746L;
    int32_t l_98 = (-10L);
    int32_t l_103 = (-1L);
    int32_t l_121 = 0x3439BF9AL;
    for (g_88 = (-30); (g_88 >= 7); g_88 = safe_add_func_uint32_t_u_u(g_88, 1))
    {
        int8_t l_97 = (-4L);
        int32_t l_99 = 0xD694BF01L;
        int32_t l_102 = 0xB0FACDC9L;
        int32_t l_104 = 0xF9F05BB7L;
        --g_94;
        g_105++;
    }
    l_121 = (safe_lshift_func_uint16_t_u_s((g_88 || (((+(l_98 |= (l_93 <= p_62))) && (l_98 = (safe_rshift_func_int16_t_s_u((g_88 | g_38), (l_93 && (((g_101 != (safe_div_func_uint64_t_u_u(0UL, (l_103 ^= (((safe_mul_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u(0UL, 0xE6L)) > g_88), p_62)) > g_39) | 0x852BC533L))))) | 0x0257628AL) < p_62)))))) | 0L)), 7));
    l_98 |= (-8L);
    l_121 |= (l_98 == (safe_lshift_func_int16_t_s_u((-4L), 5)));
    return g_101;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_7;
    csmith_sink_ = g_29;
    csmith_sink_ = g_38;
    csmith_sink_ = g_39;
    csmith_sink_ = g_87;
    csmith_sink_ = g_88;
    csmith_sink_ = g_94;
    csmith_sink_ = g_100;
    csmith_sink_ = g_101;
    csmith_sink_ = g_105;
    csmith_sink_ = g_125.f0;
    csmith_sink_ = g_125.f1;
    csmith_sink_ = g_125.f2;
    csmith_sink_ = g_125.f3;
    csmith_sink_ = g_158.f0;
    csmith_sink_ = g_158.f1;
    csmith_sink_ = g_158.f2;
    csmith_sink_ = g_158.f3;
    csmith_sink_ = g_164.f0;
    csmith_sink_ = g_164.f1;
    csmith_sink_ = g_164.f2;
    csmith_sink_ = g_164.f3;
    csmith_sink_ = g_164.f4;
    csmith_sink_ = g_165.f0;
    csmith_sink_ = g_165.f1;
    csmith_sink_ = g_165.f2;
    csmith_sink_ = g_165.f3;
    csmith_sink_ = g_165.f4;
    csmith_sink_ = g_279;
    csmith_sink_ = g_312;
    csmith_sink_ = g_315;
    csmith_sink_ = g_334;
    csmith_sink_ = g_412;
    csmith_sink_ = g_444;
    csmith_sink_ = g_445;
    csmith_sink_ = g_446;
    csmith_sink_ = g_447;
    csmith_sink_ = g_471;
    csmith_sink_ = g_565;
    csmith_sink_ = g_673;
    csmith_sink_ = g_689;
    csmith_sink_ = g_712;
    csmith_sink_ = g_715;
    csmith_sink_ = g_771;
    csmith_sink_ = g_772;
    csmith_sink_ = g_798;
    csmith_sink_ = g_820;
    csmith_sink_ = g_843;
    platform_main_end(0,0);
    return 0;
}
