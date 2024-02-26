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
static uint8_t g_2 = 5U;
static uint16_t g_42[4][9] = {{0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}};
static int32_t *g_49 = (void*)0;
static int32_t g_61 = (-1);
static int32_t g_74 = 9;
static int8_t g_76[4][3][8] = {{{0xB7, (-1), (-1), 0x47, (-8), 0x47, (-1), (-1)}, {0xB7, (-1), (-1), 0x47, (-8), 0x47, (-1), (-1)}, {0xB7, (-1), (-1), 0x47, (-8), 0x47, (-1), (-1)}}, {{0xB7, (-1), (-1), 0x47, (-8), 0x47, (-1), (-1)}, {0xB7, (-1), (-1), 0x47, (-8), 0x47, (-1), (-1)}, {0xB7, (-1), (-1), 0x47, (-8), 0x47, (-1), (-1)}}, {{0xB7, (-1), (-1), 0x47, (-8), 0x47, (-1), (-1)}, {0xB7, (-1), (-1), 0x47, (-8), 0x47, (-1), (-1)}, {0xB7, (-1), (-1), 0x47, (-8), 0x47, (-1), (-1)}}, {{0xB7, (-1), (-1), 0x47, (-8), 0x47, (-1), (-1)}, {0xB7, (-1), (-1), 0x47, (-8), 0x47, (-1), (-1)}, {0xB7, (-1), (-1), 0x47, (-8), 0x47, (-1), (-1)}}};
static int32_t ****g_81 = (void*)0;
static const int32_t *g_111[1] = {&g_74};
static const int32_t * const *g_110[6][4][2] = {{{(void*)0, &g_111[0]}, {(void*)0, &g_111[0]}, {(void*)0, &g_111[0]}, {(void*)0, &g_111[0]}}, {{(void*)0, &g_111[0]}, {(void*)0, &g_111[0]}, {(void*)0, &g_111[0]}, {(void*)0, &g_111[0]}}, {{(void*)0, &g_111[0]}, {(void*)0, &g_111[0]}, {(void*)0, &g_111[0]}, {(void*)0, &g_111[0]}}, {{(void*)0, &g_111[0]}, {(void*)0, &g_111[0]}, {(void*)0, &g_111[0]}, {(void*)0, &g_111[0]}}, {{(void*)0, &g_111[0]}, {(void*)0, &g_111[0]}, {(void*)0, &g_111[0]}, {(void*)0, &g_111[0]}}, {{(void*)0, &g_111[0]}, {(void*)0, &g_111[0]}, {(void*)0, &g_111[0]}, {(void*)0, &g_111[0]}}};
static const int32_t * const **g_109 = &g_110[0][1][0];
static int32_t g_355 = 0;
static uint16_t g_391 = 8U;
static uint32_t g_393[8] = {0xF06F11A5, 0xF06F11A5, 4294967295U, 0xF06F11A5, 0xF06F11A5, 4294967295U, 0xF06F11A5, 0xF06F11A5};
static uint32_t g_522 = 0x88064B3E;
static int32_t **g_624[1] = {(void*)0};
static int32_t ***g_647 = &g_624[0];
static int8_t func_1(void);
inline static int8_t func_3(uint32_t p_4, int8_t p_5);
static int32_t func_7(uint32_t p_8, uint8_t p_9, int8_t p_10);
inline static int8_t func_12(uint32_t p_13, uint16_t p_14, uint16_t p_15, uint32_t p_16, uint16_t p_17);
static const int8_t func_18(uint8_t p_19, uint8_t p_20, int8_t p_21, int32_t p_22, uint16_t p_23);
static uint8_t func_24(int32_t p_25);
static int16_t func_31(uint8_t p_32, uint32_t p_33);
inline static uint32_t func_34(int32_t p_35, uint32_t p_36, const int32_t p_37, int32_t p_38);
inline static const uint8_t func_39(uint32_t p_40, uint32_t p_41);
static int32_t * func_43(const uint8_t p_44, int32_t * p_45, int32_t * p_46, uint32_t p_47, uint16_t p_48);
static int8_t func_1(void)
{
    int32_t l_6 = 1;
    int32_t *l_489 = &g_74;
    const int32_t l_570[2] = {0xD029A9FE, 0xD029A9FE};
    uint32_t l_581 = 0x954239C4;
    int16_t l_635 = 0;
    const int32_t **l_643 = &g_111[0];
    const int32_t ***l_642 = &l_643;
    const int32_t ****l_641 = &l_642;
    int8_t l_644 = (-1);
    int32_t ***l_646 = &g_624[0];
    int32_t ****l_645[2];
    int i;
    for (i = 0; i < 2; i++)
        l_645[i] = &l_646;
    if (((g_2 || func_3(g_2, l_6)) ^ ((((safe_add_func_uint32_t_u_u((((safe_sub_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_s((l_6 < 1U), g_2)) & l_6), ((safe_lshift_func_uint16_t_u_s(l_6, 8)) == g_393[6]))) | 0x76D961DE) || 5), 0x86491656)) || (-10)) & 0U) >= l_6)))
    {
        int8_t l_487 = (-1);
        int32_t *l_488 = &g_74;
        for (g_2 = 0; (g_2 <= 1); g_2 += 1)
        {
            uint16_t l_484[9][6][4] = {{{0x9FEE, 0x83F6, 9U, 0x3585}, {0x9FEE, 0x83F6, 9U, 0x3585}, {0x9FEE, 0x83F6, 9U, 0x3585}, {0x9FEE, 0x83F6, 9U, 0x3585}, {0x9FEE, 0x83F6, 9U, 0x3585}, {0x9FEE, 0x83F6, 9U, 0x3585}}, {{0x9FEE, 0x83F6, 9U, 0x3585}, {0x9FEE, 0x83F6, 9U, 0x3585}, {0x9FEE, 0x83F6, 9U, 0x3585}, {0x9FEE, 0x83F6, 9U, 0x3585}, {0x9FEE, 0x83F6, 9U, 0x3585}, {0x9FEE, 0x83F6, 9U, 0x3585}}, {{0x9FEE, 0x83F6, 9U, 0x3585}, {0x9FEE, 0x83F6, 9U, 0x3585}, {0x9FEE, 0x83F6, 9U, 0x3585}, {0x9FEE, 0x83F6, 9U, 0x3585}, {0x9FEE, 0x83F6, 9U, 0x3585}, {0x9FEE, 0x83F6, 9U, 0x3585}}, {{0x9FEE, 0x83F6, 9U, 0x3585}, {0x9FEE, 0x83F6, 9U, 0x3585}, {0x9FEE, 0x83F6, 9U, 0x3585}, {0x9FEE, 0x83F6, 9U, 0x3585}, {0x9FEE, 0x83F6, 9U, 0x3585}, {0x9FEE, 0x83F6, 9U, 0x3585}}, {{0x9FEE, 0x83F6, 9U, 0x3585}, {0x9FEE, 0x83F6, 9U, 0x3585}, {0x9FEE, 0x83F6, 9U, 0x3585}, {0x9FEE, 0x83F6, 9U, 0x3585}, {0x9FEE, 0x83F6, 9U, 0x3585}, {0x9FEE, 0x83F6, 9U, 0x3585}}, {{0x9FEE, 0x83F6, 9U, 0x3585}, {0x9FEE, 0x83F6, 9U, 0x3585}, {0x9FEE, 0x83F6, 9U, 0x3585}, {0x9FEE, 0x83F6, 9U, 0x3585}, {0x9FEE, 0x83F6, 9U, 0x3585}, {0x9FEE, 0x83F6, 9U, 0x3585}}, {{0x9FEE, 0x83F6, 9U, 0x3585}, {0x9FEE, 0x83F6, 9U, 0x3585}, {0x9FEE, 0x83F6, 9U, 0x3585}, {0x9FEE, 0x83F6, 9U, 0x3585}, {0x9FEE, 0x83F6, 9U, 0x3585}, {0x9FEE, 0x83F6, 9U, 0x3585}}, {{0x9FEE, 0x83F6, 9U, 0x3585}, {0x9FEE, 0x83F6, 9U, 0x3585}, {0x9FEE, 0x83F6, 9U, 0x3585}, {0x9FEE, 0x83F6, 9U, 0x3585}, {0x9FEE, 0x83F6, 9U, 0x3585}, {0x9FEE, 0x83F6, 9U, 0x3585}}, {{0x9FEE, 0x83F6, 9U, 0x3585}, {0x9FEE, 0x83F6, 9U, 0x3585}, {0x9FEE, 0x83F6, 9U, 0x3585}, {0x9FEE, 0x83F6, 9U, 0x3585}, {0x9FEE, 0x83F6, 9U, 0x3585}, {0x9FEE, 0x83F6, 9U, 0x3585}}};
            int32_t **l_518 = &l_489;
            int32_t ***l_517 = &l_518;
            int32_t *l_567 = (void*)0;
            int i, j, k;
            (*l_488) = ((((safe_mod_func_int8_t_s_s((((safe_lshift_func_int8_t_s_s(((!0xB5E3FE5A) && (-1)), 0)) < 255U) ^ l_6), (0xEA254722 && l_484[3][0][2]))) & (safe_rshift_func_int8_t_s_s(l_487, 7))) < ((4294967289U != (l_488 == l_489)) >= 7U)) >= 0xC3D4);
            for (l_6 = 0; (l_6 <= 0); l_6 += 1)
            {
                int32_t **l_502 = (void*)0;
                int32_t ** const *l_501 = &l_502;
                int32_t ** const * const *l_500 = &l_501;
                int32_t ***l_548 = &l_518;
                int i;
                g_111[l_6] = g_111[l_6];
            }
        }
    }
    else
    {
        uint8_t l_576 = 255U;
        int32_t **l_578[10][9] = {{&g_49, &g_49, (void*)0, &g_49, &g_49, &g_49, (void*)0, &g_49, &g_49}, {&g_49, &g_49, (void*)0, &g_49, &g_49, &g_49, (void*)0, &g_49, &g_49}, {&g_49, &g_49, (void*)0, &g_49, &g_49, &g_49, (void*)0, &g_49, &g_49}, {&g_49, &g_49, (void*)0, &g_49, &g_49, &g_49, (void*)0, &g_49, &g_49}, {&g_49, &g_49, (void*)0, &g_49, &g_49, &g_49, (void*)0, &g_49, &g_49}, {&g_49, &g_49, (void*)0, &g_49, &g_49, &g_49, (void*)0, &g_49, &g_49}, {&g_49, &g_49, (void*)0, &g_49, &g_49, &g_49, (void*)0, &g_49, &g_49}, {&g_49, &g_49, (void*)0, &g_49, &g_49, &g_49, (void*)0, &g_49, &g_49}, {&g_49, &g_49, (void*)0, &g_49, &g_49, &g_49, (void*)0, &g_49, &g_49}, {&g_49, &g_49, (void*)0, &g_49, &g_49, &g_49, (void*)0, &g_49, &g_49}};
        int32_t ***l_577 = &l_578[8][3];
        int i, j;
        for (g_391 = 0; (g_391 <= 0); g_391 += 1)
        {
            int32_t *l_580 = &g_74;
            int32_t ***l_601[4][8] = {{&l_578[8][3], &l_578[8][3], &l_578[6][2], (void*)0, &l_578[8][3], &l_578[8][3], &l_578[8][3], (void*)0}, {&l_578[8][3], &l_578[8][3], &l_578[6][2], (void*)0, &l_578[8][3], &l_578[8][3], &l_578[8][3], (void*)0}, {&l_578[8][3], &l_578[8][3], &l_578[6][2], (void*)0, &l_578[8][3], &l_578[8][3], &l_578[8][3], (void*)0}, {&l_578[8][3], &l_578[8][3], &l_578[6][2], (void*)0, &l_578[8][3], &l_578[8][3], &l_578[8][3], (void*)0}};
            int i, j;
            for (l_6 = 0; (l_6 <= 0); l_6 += 1)
            {
                uint32_t l_579[5][7][4] = {{{4294967293U, 0xF87B7233, 4U, 0x21C4B697}, {4294967293U, 0xF87B7233, 4U, 0x21C4B697}, {4294967293U, 0xF87B7233, 4U, 0x21C4B697}, {4294967293U, 0xF87B7233, 4U, 0x21C4B697}, {4294967293U, 0xF87B7233, 4U, 0x21C4B697}, {4294967293U, 0xF87B7233, 4U, 0x21C4B697}, {4294967293U, 0xF87B7233, 4U, 0x21C4B697}}, {{4294967293U, 0xF87B7233, 4U, 0x21C4B697}, {4294967293U, 0xF87B7233, 4U, 0x21C4B697}, {4294967293U, 0xF87B7233, 4U, 0x21C4B697}, {4294967293U, 0xF87B7233, 4U, 0x21C4B697}, {4294967293U, 0xF87B7233, 4U, 0x21C4B697}, {4294967293U, 0xF87B7233, 4U, 0x21C4B697}, {4294967293U, 0xF87B7233, 4U, 0x21C4B697}}, {{4294967293U, 0xF87B7233, 4U, 0x21C4B697}, {4294967293U, 0xF87B7233, 4U, 0x21C4B697}, {4294967293U, 0xF87B7233, 4U, 0x21C4B697}, {4294967293U, 0xF87B7233, 4U, 0x21C4B697}, {4294967293U, 0xF87B7233, 4U, 0x21C4B697}, {4294967293U, 0xF87B7233, 4U, 0x21C4B697}, {4294967293U, 0xF87B7233, 4U, 0x21C4B697}}, {{4294967293U, 0xF87B7233, 4U, 0x21C4B697}, {4294967293U, 0xF87B7233, 4U, 0x21C4B697}, {4294967293U, 0xF87B7233, 4U, 0x21C4B697}, {4294967293U, 0xF87B7233, 4U, 0x21C4B697}, {4294967293U, 0xF87B7233, 4U, 0x21C4B697}, {4294967293U, 0xF87B7233, 4U, 0x21C4B697}, {4294967293U, 0xF87B7233, 4U, 0x21C4B697}}, {{4294967293U, 0xF87B7233, 4U, 0x21C4B697}, {4294967293U, 0xF87B7233, 4U, 0x21C4B697}, {4294967293U, 0xF87B7233, 4U, 0x21C4B697}, {4294967293U, 0xF87B7233, 4U, 0x21C4B697}, {4294967293U, 0xF87B7233, 4U, 0x21C4B697}, {4294967293U, 0xF87B7233, 4U, 0x21C4B697}, {4294967293U, 0xF87B7233, 4U, 0x21C4B697}}};
                int i, j, k;
                l_579[4][6][2] = (safe_sub_func_int32_t_s_s((+(safe_sub_func_uint32_t_u_u(g_76[0][1][1], l_576))), ((void*)0 == l_577)));
                if (l_579[4][6][2])
                    break;
                g_111[l_6] = l_580;
                l_489 = func_43(g_393[0], &g_74, l_489, l_581, (0x88 || ((safe_sub_func_uint8_t_u_u(g_74, (g_76[0][0][2] == ((*l_580) < (safe_add_func_uint8_t_u_u(((((&g_81 != &g_81) && g_61) <= 0xF2F15564) >= (-3)), 0x76)))))) > (*l_489))));
            }
            for (g_61 = 0; (g_61 <= 4); g_61 = safe_add_func_uint16_t_u_u(g_61, 2))
            {
                uint16_t l_594 = 0x91CE;
                int32_t *l_597 = (void*)0;
                int16_t l_622 = 0x797C;
                if (((g_2 || ((((((safe_add_func_uint16_t_u_u((0x8A07 > (~((!((safe_lshift_func_uint8_t_u_s((((*l_580) | (*l_580)) ^ ((&g_81 == (void*)0) < g_74)), 5)) < g_393[6])) && ((((0 > (*l_489)) <= 0x12) || (-1)) || l_594)))), (*l_580))) <= g_391) && (*l_489)) ^ 65529U) >= (-8)) > (*l_580))) <= g_522))
                {
                    const int32_t **l_598 = &g_111[0];
                    uint8_t l_621 = 1U;
                    const int32_t ** const l_623[1][8] = {{&g_111[0], &g_111[0], &g_111[0], &g_111[0], &g_111[0], &g_111[0], &g_111[0], &g_111[0]}};
                    int32_t l_625 = 0;
                    int i, j;
                    if ((*l_489))
                    {
                        int32_t l_595 = 0xE5CDD73C;
                        l_595 = ((void*)0 != &g_109);
                    }
                    else
                    {
                        int32_t *l_596[2][4] = {{&g_74, &g_61, &g_74, &g_61}, {&g_74, &g_61, &g_74, &g_61}};
                        int i, j;
                        (*l_580) = (l_596[0][3] != l_597);
                        (*l_580) = (*l_489);
                        l_489 = l_596[0][3];
                        g_111[0] = l_580;
                    }
                    (*l_598) = &l_570[1];
                    if (((0U <= (safe_lshift_func_int8_t_s_s((l_601[3][6] != &l_578[1][0]), (((safe_lshift_func_int16_t_s_s((safe_add_func_int32_t_s_s(((((g_61 >= (((safe_rshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_u(g_391, (safe_mod_func_uint32_t_u_u(((**l_598) | (safe_sub_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u((0xD2849B1D > g_74), (safe_rshift_func_uint8_t_u_s((0xB0BD366D < (-10)), 7)))), 65535U))), g_393[6])))), 7)) <= g_42[1][5]) | 1U)) <= g_76[2][1][1]) == (*l_580)) != (-1)), g_42[1][6])), g_61)) && g_76[1][0][0]) <= 5U)))) && 4294967287U))
                    {
                        int32_t * const *l_618[7] = {&g_49, &l_580, &g_49, &l_580, &g_49, &l_580, &g_49};
                        int i;
                        (*l_580) = ((*l_598) == l_597);
                        (*l_580) = ((l_618[2] != &l_489) > (safe_lshift_func_int8_t_s_s((g_522 == (l_621 > l_622)), (3U > (l_623[0][7] != g_624[0])))));
                    }
                    else
                    {
                        (*l_577) = &l_489;
                        l_625 = ((void*)0 != &g_81);
                    }
                    return (*l_489);
                }
                else
                {
                    int32_t l_634 = 6;
                    int32_t *l_636[6][3][8] = {{{&g_61, (void*)0, &g_61, &g_74, &g_74, &g_61, &g_61, &g_74}, {&g_61, (void*)0, &g_61, &g_74, &g_74, &g_61, &g_61, &g_74}, {&g_61, (void*)0, &g_61, &g_74, &g_74, &g_61, &g_61, &g_74}}, {{&g_61, (void*)0, &g_61, &g_74, &g_74, &g_61, &g_61, &g_74}, {&g_61, (void*)0, &g_61, &g_74, &g_74, &g_61, &g_61, &g_74}, {&g_61, (void*)0, &g_61, &g_74, &g_74, &g_61, &g_61, &g_74}}, {{&g_61, (void*)0, &g_61, &g_74, &g_74, &g_61, &g_61, &g_74}, {&g_61, (void*)0, &g_61, &g_74, &g_74, &g_61, &g_61, &g_74}, {&g_61, (void*)0, &g_61, &g_74, &g_74, &g_61, &g_61, &g_74}}, {{&g_61, (void*)0, &g_61, &g_74, &g_74, &g_61, &g_61, &g_74}, {&g_61, (void*)0, &g_61, &g_74, &g_74, &g_61, &g_61, &g_74}, {&g_61, (void*)0, &g_61, &g_74, &g_74, &g_61, &g_61, &g_74}}, {{&g_61, (void*)0, &g_61, &g_74, &g_74, &g_61, &g_61, &g_74}, {&g_61, (void*)0, &g_61, &g_74, &g_74, &g_61, &g_61, &g_74}, {&g_61, (void*)0, &g_61, &g_74, &g_74, &g_61, &g_61, &g_74}}, {{&g_61, (void*)0, &g_61, &g_74, &g_74, &g_61, &g_61, &g_74}, {&g_61, (void*)0, &g_61, &g_74, &g_74, &g_61, &g_61, &g_74}, {&g_61, (void*)0, &g_61, &g_74, &g_74, &g_61, &g_61, &g_74}}};
                    int i, j, k;
                    for (l_622 = 2; (l_622 <= 8); l_622 += 1)
                    {
                        int32_t *l_626 = &g_74;
                        l_626 = l_626;
                        (*l_580) = (safe_unary_minus_func_int16_t_s(1));
                    }
                    if ((((((safe_add_func_uint16_t_u_u(g_76[2][1][1], g_42[2][8])) || ((((void*)0 == (*g_109)) >= (safe_add_func_int16_t_s_s((1U & (safe_sub_func_uint16_t_u_u(((*l_489) != l_634), 65530U))), l_635))) >= (*l_489))) & l_634) ^ g_2) & g_522))
                    {
                        int32_t *l_637 = &g_74;
                        (*l_580) = (0x99C8A930 ^ g_393[6]);
                        l_637 = l_636[2][1][2];
                        l_597 = l_636[2][1][2];
                    }
                    else
                    {
                        int32_t l_638 = (-8);
                        if (l_638)
                            break;
                    }
                    return g_76[0][2][6];
                }
            }
        }
    }
    (*l_489) = (safe_add_func_int32_t_s_s(((((-8) || (-1)) != ((void*)0 != l_641)) >= ((((((&l_641 != &l_641) == (*l_489)) & 1) == l_644) ^ g_393[6]) | (-9))), 0x3B547085));
    g_647 = &g_624[0];
    return g_355;
}
inline static int8_t func_3(uint32_t p_4, int8_t p_5)
{
    uint32_t l_11 = 1U;
    int32_t l_82 = 0x8985BB29;
    int32_t l_468 = 0x1376DC1C;
    l_468 = func_7(l_11, ((((g_2 & func_12(p_5, (func_18(l_11, func_24((((safe_rshift_func_uint16_t_u_s((safe_add_func_uint16_t_u_u(1U, (+func_31(g_2, func_34((func_39(g_2, p_4) ^ g_42[0][0]), p_4, l_11, g_2))))), 11)) | g_2) & p_5)), g_42[1][1], l_82, g_2) < 0x3D), l_11, p_4, l_82)) == 1U) != p_5) & l_82), p_5);
    return p_4;
}
static int32_t func_7(uint32_t p_8, uint8_t p_9, int8_t p_10)
{
    int32_t l_213 = 0x96B67929;
    int32_t l_266[3];
    int32_t **l_282[6] = {&g_49, &g_49, &g_49, &g_49, &g_49, &g_49};
    int32_t ***l_281 = &l_282[3];
    const int8_t l_304 = 0x35;
    uint8_t l_320 = 0x10;
    uint8_t l_424 = 0x3B;
    uint16_t l_427 = 0U;
    int i;
    for (i = 0; i < 3; i++)
        l_266[i] = 9;
    if ((safe_rshift_func_int16_t_s_s((p_9 | (safe_add_func_uint32_t_u_u(4294967291U, 0xDF76A9F0))), 13)))
    {
        const int32_t **l_223 = &g_111[0];
        const int32_t *** const l_222[5] = {&l_223, &l_223, &l_223, &l_223, &l_223};
        int32_t *l_287[6] = {&g_61, &g_61, &l_266[2], &g_61, &g_61, &l_266[2]};
        int i;
        for (p_9 = 28; (p_9 != 35); p_9 = safe_add_func_uint32_t_u_u(p_9, 1))
        {
            uint8_t l_224 = 0xF7;
            int32_t ***l_283 = (void*)0;
        }
    }
    else
    {
        int16_t l_351[9][2] = {{0xCA1B, 0xC5D1}, {0xCA1B, 0xC5D1}, {0xCA1B, 0xC5D1}, {0xCA1B, 0xC5D1}, {0xCA1B, 0xC5D1}, {0xCA1B, 0xC5D1}, {0xCA1B, 0xC5D1}, {0xCA1B, 0xC5D1}, {0xCA1B, 0xC5D1}};
        int32_t **l_392 = (void*)0;
        int32_t l_421 = (-3);
        uint32_t l_446 = 0U;
        int32_t ** const **l_461 = (void*)0;
        int32_t *l_462 = &g_74;
        int i, j;
        for (l_213 = 0; (l_213 < (-13)); l_213 = safe_sub_func_int8_t_s_s(l_213, 9))
        {
            uint32_t l_319 = 0x07CFA1AE;
            int32_t *l_405 = (void*)0;
            int32_t l_422 = 0x042FC192;
            int32_t ***l_454[8];
            int32_t l_467 = 2;
            int i;
            for (i = 0; i < 8; i++)
                l_454[i] = (void*)0;
            if ((((((+(safe_mod_func_uint32_t_u_u((&g_109 == (void*)0), (safe_rshift_func_int16_t_s_u(g_2, (safe_lshift_func_uint16_t_u_s((safe_add_func_int16_t_s_s((!((l_319 < (1 | p_8)) ^ (g_76[3][1][4] ^ ((3U > (-1)) < p_10)))), g_42[0][8])), g_76[3][2][1]))))))) || p_10) != l_320) != p_10) || 0x34))
            {
                int32_t l_329 = (-1);
                g_74 = ((((safe_rshift_func_uint16_t_u_u((g_76[2][1][1] != (p_9 & 0xA0A1)), 7)) | 0) || (((safe_lshift_func_int8_t_s_s(((p_9 || (safe_sub_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s(((g_42[2][0] > p_9) == (&g_109 != &g_109)), g_76[1][2][4])), l_329))) && 0x4E), 5)) <= g_2) ^ p_8)) == 0x1829D1AC);
            }
            else
            {
                uint32_t l_330 = 1U;
                int32_t l_356[4][7][8] = {{{0xD86140C0, 0x6C8210BE, 0xE4DA2C61, 1, 0xE4DA2C61, 0x6C8210BE, 0xD86140C0, 0}, {0xD86140C0, 0x6C8210BE, 0xE4DA2C61, 1, 0xE4DA2C61, 0x6C8210BE, 0xD86140C0, 0}, {0xD86140C0, 0x6C8210BE, 0xE4DA2C61, 1, 0xE4DA2C61, 0x6C8210BE, 0xD86140C0, 0}, {0xD86140C0, 0x6C8210BE, 0xE4DA2C61, 1, 0xE4DA2C61, 0x6C8210BE, 0xD86140C0, 0}, {0xD86140C0, 0x6C8210BE, 0xE4DA2C61, 1, 0xE4DA2C61, 0x6C8210BE, 0xD86140C0, 0}, {0xD86140C0, 0x6C8210BE, 0xE4DA2C61, 1, 0xE4DA2C61, 0x6C8210BE, 0xD86140C0, 0}, {0xD86140C0, 0x6C8210BE, 0xE4DA2C61, 1, 0xE4DA2C61, 0x6C8210BE, 0xD86140C0, 0}}, {{0xD86140C0, 0x6C8210BE, 0xE4DA2C61, 1, 0xE4DA2C61, 0x6C8210BE, 0xD86140C0, 0}, {0xD86140C0, 0x6C8210BE, 0xE4DA2C61, 1, 0xE4DA2C61, 0x6C8210BE, 0xD86140C0, 0}, {0xD86140C0, 0x6C8210BE, 0xE4DA2C61, 1, 0xE4DA2C61, 0x6C8210BE, 0xD86140C0, 0}, {0xD86140C0, 0x6C8210BE, 0xE4DA2C61, 1, 0xE4DA2C61, 0x6C8210BE, 0xD86140C0, 0}, {0xD86140C0, 0x6C8210BE, 0xE4DA2C61, 1, 0xE4DA2C61, 0x6C8210BE, 0xD86140C0, 0}, {0xD86140C0, 0x6C8210BE, 0xE4DA2C61, 1, 0xE4DA2C61, 0x6C8210BE, 0xD86140C0, 0}, {0xD86140C0, 0x6C8210BE, 0xE4DA2C61, 1, 0xE4DA2C61, 0x6C8210BE, 0xD86140C0, 0}}, {{0xD86140C0, 0x6C8210BE, 0xE4DA2C61, 1, 0xE4DA2C61, 0x6C8210BE, 0xD86140C0, 0}, {0xD86140C0, 0x6C8210BE, 0xE4DA2C61, 1, 0xE4DA2C61, 0x6C8210BE, 0xD86140C0, 0}, {0xD86140C0, 0x6C8210BE, 0xE4DA2C61, 1, 0xE4DA2C61, 0x6C8210BE, 0xD86140C0, 0}, {0xD86140C0, 0x6C8210BE, 0xE4DA2C61, 1, 0xE4DA2C61, 0x6C8210BE, 0xD86140C0, 0}, {0xD86140C0, 0x6C8210BE, 0xE4DA2C61, 1, 0xE4DA2C61, 0x6C8210BE, 0xD86140C0, 0}, {0xD86140C0, 0x6C8210BE, 0xE4DA2C61, 1, 0xE4DA2C61, 0x6C8210BE, 0xD86140C0, 0}, {0xD86140C0, 0x6C8210BE, 0xE4DA2C61, 1, 0xE4DA2C61, 0x6C8210BE, 0xD86140C0, 0}}, {{0xD86140C0, 0x6C8210BE, 0xE4DA2C61, 1, 0xE4DA2C61, 0x6C8210BE, 0xD86140C0, 0}, {0xD86140C0, 0x6C8210BE, 0xE4DA2C61, 1, 0xE4DA2C61, 0x6C8210BE, 0xD86140C0, 0}, {0xD86140C0, 0x6C8210BE, 0xE4DA2C61, 1, 0xE4DA2C61, 0x6C8210BE, 0xD86140C0, 0}, {0xD86140C0, 0x6C8210BE, 0xE4DA2C61, 1, 0xE4DA2C61, 0x6C8210BE, 0xD86140C0, 0}, {0xD86140C0, 0x6C8210BE, 0xE4DA2C61, 1, 0xE4DA2C61, 0x6C8210BE, 0xD86140C0, 0}, {0xD86140C0, 0x6C8210BE, 0xE4DA2C61, 1, 0xE4DA2C61, 0x6C8210BE, 0xD86140C0, 0}, {0xD86140C0, 0x6C8210BE, 0xE4DA2C61, 1, 0xE4DA2C61, 0x6C8210BE, 0xD86140C0, 0}}};
                int i, j, k;
                l_356[2][5][3] = ((g_2 | (l_330 & (safe_add_func_int32_t_s_s((safe_mod_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(g_61, 3)), ((safe_rshift_func_uint8_t_u_u(p_8, (((safe_lshift_func_int16_t_s_s(((0x89 ^ ((safe_sub_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_s(((safe_rshift_func_uint8_t_u_u(g_42[1][3], l_351[1][0])) != p_8), (safe_rshift_func_int8_t_s_u(((safe_unary_minus_func_int16_t_s(p_9)) < 0x92C0D943), 2)))) >= g_74), g_355)), (-4))) ^ 0U)) != 0U), 4)) == g_76[3][2][3]) != 4294967295U))) || l_330))), l_330)))) < p_8);
            }
        }
        (*l_462) = (p_9 < ((&l_281 != (void*)0) < (p_8 == 0U)));
    }
    (**l_281) = (void*)0;
    return p_10;
}
inline static int8_t func_12(uint32_t p_13, uint16_t p_14, uint16_t p_15, uint32_t p_16, uint16_t p_17)
{
    uint32_t l_94 = 4294967295U;
    int32_t **l_98 = &g_49;
    int32_t ***l_97[8][6] = {{(void*)0, &l_98, (void*)0, &l_98, (void*)0, &l_98}, {(void*)0, &l_98, (void*)0, &l_98, (void*)0, &l_98}, {(void*)0, &l_98, (void*)0, &l_98, (void*)0, &l_98}, {(void*)0, &l_98, (void*)0, &l_98, (void*)0, &l_98}, {(void*)0, &l_98, (void*)0, &l_98, (void*)0, &l_98}, {(void*)0, &l_98, (void*)0, &l_98, (void*)0, &l_98}, {(void*)0, &l_98, (void*)0, &l_98, (void*)0, &l_98}, {(void*)0, &l_98, (void*)0, &l_98, (void*)0, &l_98}};
    int8_t l_190 = 0x15;
    int i, j;
lbl_137:
    (**l_98) = (safe_add_func_int8_t_s_s(((0U > ((((void*)0 != &g_74) ^ (safe_rshift_func_uint8_t_u_u(((l_94 > (((safe_rshift_func_uint16_t_u_u(p_16, 3)) || (((((0xC9299130 >= ((void*)0 == l_97[4][2])) && (0x59 || (-4))) < 0xBB395F0F) != p_16) | p_13)) == (-1))) != g_42[1][1]), (**l_98)))) && g_76[2][1][1])) != p_17), p_15));
    if (((safe_sub_func_int32_t_s_s(((safe_lshift_func_uint16_t_u_s((4 <= (safe_add_func_int16_t_s_s(((safe_sub_func_uint16_t_u_u(0x2A41, (safe_lshift_func_int16_t_s_s((&g_49 != &g_49), (((g_109 != &l_98) > (safe_sub_func_uint8_t_u_u((~p_14), 0xE7))) | (&l_97[3][2] == &l_97[7][0])))))) >= p_14), 0))), 5)) ^ p_16), p_15)) & (-1)))
    {
        uint8_t l_123 = 0xC6;
        int32_t ****l_124 = &l_97[4][2];
        int8_t l_131[7][9][1] = {{{0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}}, {{0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}}, {{0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}}, {{0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}}, {{0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}}, {{0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}}, {{0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}}};
        int32_t *l_132 = &g_61;
        int i, j, k;
        (**l_98) = ((safe_sub_func_int32_t_s_s(((0x05428794 == 1U) == (safe_lshift_func_int16_t_s_u((g_76[2][2][6] & p_16), (safe_mod_func_uint32_t_u_u(((safe_lshift_func_uint16_t_u_u(((l_123 <= p_13) || g_76[2][1][1]), 10)) < (((void*)0 == l_124) || (-1))), p_15))))), p_16)) & g_42[2][2]);
        (*g_49) = (-3);
        (*l_98) = func_43((((1 | g_74) | (((void*)0 == l_124) != (((0x06A2 < (((p_15 < (safe_sub_func_int8_t_s_s(g_76[2][2][3], (**l_98)))) == ((safe_lshift_func_uint8_t_u_u((safe_add_func_int16_t_s_s(((p_13 & l_131[0][5][0]) != 1U), 0)), 7)) | p_17)) > 0x19563820)) > p_15) > 0x2D))) | p_16), &g_74, l_132, g_76[2][1][1], g_42[0][4]);
    }
    else
    {
        int32_t l_134 = 0xD1505295;
        int32_t *l_138 = &g_61;
        (*g_49) = (+(l_134 | g_61));
        for (p_16 = 14; (p_16 != 34); ++p_16)
        {
            if (g_2)
                goto lbl_137;
            (**l_98) = (&l_98 == &l_98);
        }
        if ((l_138 == (*l_98)))
        {
            (**l_98) = 1;
            for (p_16 = 0; (p_16 != 20); p_16 = safe_add_func_uint32_t_u_u(p_16, 5))
            {
                int32_t *l_141 = &g_61;
                (*l_98) = l_141;
                if ((0xB0D4 != 0x63EA))
                {
                    for (p_15 = 7; (p_15 == 49); p_15++)
                    {
                        (**l_98) = p_16;
                        return p_15;
                    }
                    return p_13;
                }
                else
                {
                    for (g_74 = 14; (g_74 <= 14); g_74++)
                    {
                        (*g_49) = (0xC1E94944 && 0xD39519D2);
                    }
                    if ((*g_49))
                        break;
                    for (l_134 = 25; (l_134 > (-3)); l_134 = safe_sub_func_uint8_t_u_u(l_134, 2))
                    {
                        int32_t *l_148 = &g_61;
                        l_148 = l_138;
                    }
                }
                (*l_141) = (safe_add_func_int16_t_s_s(((void*)0 == &l_141), (p_17 <= (safe_unary_minus_func_uint32_t_u((0xFA69 != p_14))))));
            }
        }
        else
        {
            int32_t ** const l_154[5] = {&l_138, &l_138, &l_138, &l_138, &l_138};
            int32_t **l_167 = &g_49;
            uint8_t l_168 = 0U;
            int i;
            for (p_17 = 0; (p_17 < 49); p_17 = safe_add_func_int16_t_s_s(p_17, 7))
            {
                int32_t l_156[8][8][4] = {{{0x3B6AC625, (-1), 0x9F560096, (-1)}, {0x3B6AC625, (-1), 0x9F560096, (-1)}, {0x3B6AC625, (-1), 0x9F560096, (-1)}, {0x3B6AC625, (-1), 0x9F560096, (-1)}, {0x3B6AC625, (-1), 0x9F560096, (-1)}, {0x3B6AC625, (-1), 0x9F560096, (-1)}, {0x3B6AC625, (-1), 0x9F560096, (-1)}, {0x3B6AC625, (-1), 0x9F560096, (-1)}}, {{0x3B6AC625, (-1), 0x9F560096, (-1)}, {0x3B6AC625, (-1), 0x9F560096, (-1)}, {0x3B6AC625, (-1), 0x9F560096, (-1)}, {0x3B6AC625, (-1), 0x9F560096, (-1)}, {0x3B6AC625, (-1), 0x9F560096, (-1)}, {0x3B6AC625, (-1), 0x9F560096, (-1)}, {0x3B6AC625, (-1), 0x9F560096, (-1)}, {0x3B6AC625, (-1), 0x9F560096, (-1)}}, {{0x3B6AC625, (-1), 0x9F560096, (-1)}, {0x3B6AC625, (-1), 0x9F560096, (-1)}, {0x3B6AC625, (-1), 0x9F560096, (-1)}, {0x3B6AC625, (-1), 0x9F560096, (-1)}, {0x3B6AC625, (-1), 0x9F560096, (-1)}, {0x3B6AC625, (-1), 0x9F560096, (-1)}, {0x3B6AC625, (-1), 0x9F560096, (-1)}, {0x3B6AC625, (-1), 0x9F560096, (-1)}}, {{0x3B6AC625, (-1), 0x9F560096, (-1)}, {0x3B6AC625, (-1), 0x9F560096, (-1)}, {0x3B6AC625, (-1), 0x9F560096, (-1)}, {0x3B6AC625, (-1), 0x9F560096, (-1)}, {0x3B6AC625, (-1), 0x9F560096, (-1)}, {0x3B6AC625, (-1), 0x9F560096, (-1)}, {0x3B6AC625, (-1), 0x9F560096, (-1)}, {0x3B6AC625, (-1), 0x9F560096, (-1)}}, {{0x3B6AC625, (-1), 0x9F560096, (-1)}, {0x3B6AC625, (-1), 0x9F560096, (-1)}, {0x3B6AC625, (-1), 0x9F560096, (-1)}, {0x3B6AC625, (-1), 0x9F560096, (-1)}, {0x3B6AC625, (-1), 0x9F560096, (-1)}, {0x3B6AC625, (-1), 0x9F560096, (-1)}, {0x3B6AC625, (-1), 0x9F560096, (-1)}, {0x3B6AC625, (-1), 0x9F560096, (-1)}}, {{0x3B6AC625, (-1), 0x9F560096, (-1)}, {0x3B6AC625, (-1), 0x9F560096, (-1)}, {0x3B6AC625, (-1), 0x9F560096, (-1)}, {0x3B6AC625, (-1), 0x9F560096, (-1)}, {0x3B6AC625, (-1), 0x9F560096, (-1)}, {0x3B6AC625, (-1), 0x9F560096, (-1)}, {0x3B6AC625, (-1), 0x9F560096, (-1)}, {0x3B6AC625, (-1), 0x9F560096, (-1)}}, {{0x3B6AC625, (-1), 0x9F560096, (-1)}, {0x3B6AC625, (-1), 0x9F560096, (-1)}, {0x3B6AC625, (-1), 0x9F560096, (-1)}, {0x3B6AC625, (-1), 0x9F560096, (-1)}, {0x3B6AC625, (-1), 0x9F560096, (-1)}, {0x3B6AC625, (-1), 0x9F560096, (-1)}, {0x3B6AC625, (-1), 0x9F560096, (-1)}, {0x3B6AC625, (-1), 0x9F560096, (-1)}}, {{0x3B6AC625, (-1), 0x9F560096, (-1)}, {0x3B6AC625, (-1), 0x9F560096, (-1)}, {0x3B6AC625, (-1), 0x9F560096, (-1)}, {0x3B6AC625, (-1), 0x9F560096, (-1)}, {0x3B6AC625, (-1), 0x9F560096, (-1)}, {0x3B6AC625, (-1), 0x9F560096, (-1)}, {0x3B6AC625, (-1), 0x9F560096, (-1)}, {0x3B6AC625, (-1), 0x9F560096, (-1)}}};
                int32_t *l_169 = &g_61;
                int i, j, k;
                (*g_49) = (((*g_109) == l_154[3]) && (0 != ((**l_98) == (safe_unary_minus_func_uint16_t_u(0xC1B7)))));
                if (l_156[6][3][3])
                    continue;
                l_169 = func_43((((p_14 >= p_17) != (~g_76[0][2][2])) >= ((safe_sub_func_int8_t_s_s(((((0xDA46 || (((p_15 || p_14) | (((safe_rshift_func_uint16_t_u_s(((((safe_sub_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(p_17, 4)), ((safe_unary_minus_func_uint32_t_u(((0x6D7F8DAA & ((void*)0 != l_167)) <= p_17))) & l_156[3][4][1]))) & (*l_138)) == g_61) >= l_168), g_2)) != p_14) < p_17)) == p_16)) <= p_15) != g_61) == 1U), (*l_138))) >= 0x1AF6)), l_169, l_138, g_76[3][0][7], p_14);
            }
            for (g_74 = 4; (g_74 >= 0); g_74 -= 1)
            {
                int16_t l_191 = 0;
                (*l_138) = (safe_lshift_func_int8_t_s_s((g_2 && ((safe_lshift_func_uint8_t_u_s((g_76[0][2][3] == p_14), 4)) ^ 0)), (1U != (safe_mod_func_int16_t_s_s(0, ((((1 <= p_13) && (g_74 | g_42[0][7])) == p_17) | p_16))))));
                (*l_167) = (void*)0;
                for (p_17 = 0; (p_17 <= 5); p_17 += 1)
                {
                    int i, j;
                    l_138 = func_43((((void*)0 != (*g_109)) & ((safe_lshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_s(((p_16 != ((safe_mod_func_uint16_t_u_u(((((((safe_sub_func_uint8_t_u_u((safe_add_func_int32_t_s_s((&g_109 != (void*)0), (2 < (safe_lshift_func_uint8_t_u_s(p_15, g_61))))), (safe_add_func_int32_t_s_s(0x558EA937, p_14)))) | (-1)) <= g_76[2][1][1]) | 8) && p_13) == l_190), l_191)) & 7)) ^ 0U), p_16)), g_42[1][8])) <= 0xD75C)), &g_61, (*l_98), g_76[1][2][7], g_74);
                    return g_76[0][0][5];
                }
            }
        }
        (*l_138) = (((&l_138 != (*g_109)) != (safe_rshift_func_int8_t_s_u(0xDF, 7))) == ((!((*l_138) && (safe_unary_minus_func_int8_t_s(0xD1)))) != (safe_rshift_func_int8_t_s_s(p_13, (*l_138)))));
    }
    return p_13;
}
static const int8_t func_18(uint8_t p_19, uint8_t p_20, int8_t p_21, int32_t p_22, uint16_t p_23)
{
    int16_t l_83 = 0xFE42;
    int32_t *l_84 = &g_74;
    int32_t **l_85[5][4] = {{&l_84, &g_49, &g_49, &g_49}, {&l_84, &g_49, &g_49, &g_49}, {&l_84, &g_49, &g_49, &g_49}, {&l_84, &g_49, &g_49, &g_49}, {&l_84, &g_49, &g_49, &g_49}};
    int i, j;
    (*g_49) = l_83;
    (*g_49) = (*g_49);
    g_49 = func_43(g_42[2][2], &p_22, func_43(p_21, l_84, func_43(g_76[2][1][1], l_84, &g_61, g_74, (*l_84)), g_74, g_76[2][1][1]), g_42[0][3], g_74);
    for (p_19 = (-16); (p_19 <= 40); ++p_19)
    {
        if (p_23)
            break;
    }
    return p_19;
}
static uint8_t func_24(int32_t p_25)
{
    return p_25;
}
static int16_t func_31(uint8_t p_32, uint32_t p_33)
{
    return g_42[1][3];
}
inline static uint32_t func_34(int32_t p_35, uint32_t p_36, const int32_t p_37, int32_t p_38)
{
    int32_t **l_77 = &g_49;
    (*l_77) = &g_61;
    for (g_74 = (-21); (g_74 > (-14)); g_74++)
    {
        return p_37;
    }
    (*g_49) = (!(g_81 != (void*)0));
    return (**l_77);
}
inline static const uint8_t func_39(uint32_t p_40, uint32_t p_41)
{
    int32_t *l_50 = (void*)0;
    int32_t **l_65 = &l_50;
    int32_t ***l_64 = &l_65;
    int32_t * const *l_72 = &l_50;
    int32_t * const **l_71 = &l_72;
    for (p_40 = 0; (p_40 <= 3); p_40 += 1)
    {
        int32_t **l_63 = &l_50;
        (*l_63) = func_43(g_2, g_49, l_50, g_2, p_40);
        for (p_41 = 0; (p_41 <= 3); p_41 += 1)
        {
            g_49 = (*l_63);
            if ((*g_49))
                break;
            if ((**l_63))
                continue;
        }
    }
    (*l_64) = &l_50;
    for (g_61 = 3; (g_61 >= 0); g_61 -= 1)
    {
        int32_t *l_73 = (void*)0;
        for (p_40 = 0; (p_40 <= 3); p_40 += 1)
        {
            int32_t * const *l_67 = &l_50;
            int32_t * const **l_66[9] = {&l_67, &l_67, (void*)0, &l_67, &l_67, (void*)0, &l_67, &l_67, (void*)0};
            int32_t * const ***l_68 = (void*)0;
            int32_t * const ***l_69 = (void*)0;
            int32_t * const ***l_70[8][6] = {{&l_66[4], &l_66[8], &l_66[5], (void*)0, &l_66[5], (void*)0}, {&l_66[4], &l_66[8], &l_66[5], (void*)0, &l_66[5], (void*)0}, {&l_66[4], &l_66[8], &l_66[5], (void*)0, &l_66[5], (void*)0}, {&l_66[4], &l_66[8], &l_66[5], (void*)0, &l_66[5], (void*)0}, {&l_66[4], &l_66[8], &l_66[5], (void*)0, &l_66[5], (void*)0}, {&l_66[4], &l_66[8], &l_66[5], (void*)0, &l_66[5], (void*)0}, {&l_66[4], &l_66[8], &l_66[5], (void*)0, &l_66[5], (void*)0}, {&l_66[4], &l_66[8], &l_66[5], (void*)0, &l_66[5], (void*)0}};
            int i, j;
            (*l_65) = (void*)0;
            l_71 = l_66[5];
        }
        if (g_61)
            break;
        (**l_64) = l_73;
        g_49 = &g_61;
        for (p_41 = 0; (p_41 <= 3); p_41 += 1)
        {
            int i, j;
            if (g_42[p_41][(p_41 + 5)])
                break;
            for (p_40 = 0; (p_40 <= 3); p_40 += 1)
            {
                for (g_74 = 3; (g_74 >= 0); g_74 -= 1)
                {
                    int32_t *l_75 = &g_61;
                    int i, j;
                    g_76[2][1][1] = ((l_75 == &g_61) == 0x9DD5);
                    return g_42[g_74][p_41];
                }
            }
        }
    }
    return p_41;
}
static int32_t * func_43(const uint8_t p_44, int32_t * p_45, int32_t * p_46, uint32_t p_47, uint16_t p_48)
{
    uint16_t l_57 = 1U;
    int32_t l_58 = 0xCA727646;
    uint32_t l_59 = 4294967295U;
    int32_t *l_60 = &g_61;
    int32_t *l_62[5][10] = {{&g_61, &g_61, &g_61, &g_61, &g_61, &g_61, &g_61, &g_61, &g_61, &g_61}, {&g_61, &g_61, &g_61, &g_61, &g_61, &g_61, &g_61, &g_61, &g_61, &g_61}, {&g_61, &g_61, &g_61, &g_61, &g_61, &g_61, &g_61, &g_61, &g_61, &g_61}, {&g_61, &g_61, &g_61, &g_61, &g_61, &g_61, &g_61, &g_61, &g_61, &g_61}, {&g_61, &g_61, &g_61, &g_61, &g_61, &g_61, &g_61, &g_61, &g_61, &g_61}};
    int i, j;
    (*l_60) = (((g_42[3][1] > ((safe_rshift_func_int8_t_s_u(((safe_lshift_func_int16_t_s_u(((void*)0 != g_49), ((((((((0x90 || g_42[2][0]) & (3U != (safe_add_func_uint32_t_u_u(p_48, l_57)))) >= p_44) >= p_47) > p_47) < g_2) == 0U) | l_57))) < g_42[2][6]), l_57)) > l_57)) != l_58) == l_59);
    l_62[1][6] = p_45;
    return &g_61;
}
int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_2;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 9; j++)
        {
            csmith_sink_ = g_42[i][j];
        }
    }
    csmith_sink_ = g_61;
    csmith_sink_ = g_74;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 8; k++)
            {
                csmith_sink_ = g_76[i][j][k];
            }
        }
    }
    csmith_sink_ = g_355;
    csmith_sink_ = g_391;
    for (i = 0; i < 8; i++)
    {
        csmith_sink_ = g_393[i];
    }
    csmith_sink_ = g_522;
    platform_main_end(0,0);
    return 0;
}
