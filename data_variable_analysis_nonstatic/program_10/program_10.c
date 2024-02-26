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
struct S0 {
   const signed f0 : 18;
   const signed f1 : 31;
   int32_t f2;
   signed f3 : 29;
   signed f4 : 24;
   signed f5 : 15;
   signed f6 : 17;
};
static uint16_t g_15 = 1UL;
static struct S0 g_46 = {139,-28920,6L,21661,1900,6,213};
static uint16_t g_58 = 1UL;
static int8_t g_118 = 0x26L;
static uint8_t g_121 = 0UL;
static uint8_t g_127 = 0x5EL;
static uint32_t g_149[2] = {0x35A7B369L,0x35A7B369L};
static int8_t g_150 = (-8L);
static uint32_t g_163 = 0x2F12706AL;
static uint8_t g_187 = 0x78L;
static int32_t g_206 = 0xF7AEC48AL;
static uint32_t g_247 = 0x79E51952L;
static uint16_t g_313 = 0x87F0L;
static int32_t g_314[10][10][2] = {{{0x61F076C8L,8L},{0x8648EDA7L,0x3DBD2A67L},{0L,0x0498DF5BL},{0x3DBD2A67L,0x8A99E674L},{(-9L),0x29779F3CL},{1L,0L},{0x760C7681L,0x5B1CF151L},{0x85503AD8L,0x8648EDA7L},{0x5F64ED68L,0xDFF8256CL},{1L,8L}},{{0x0498DF5BL,(-1L)},{(-1L),0x5540F05BL},{0xCBBCD2E2L,0x2F047D99L},{0xA09870BFL,0x6E27D13AL},{1L,0x6E27D13AL},{0xA09870BFL,0x2F047D99L},{0xCBBCD2E2L,0x5540F05BL},{(-1L),(-1L)},{0x0498DF5BL,8L},{1L,0xDFF8256CL}},{{0x5F64ED68L,0x8648EDA7L},{0x85503AD8L,0x5B1CF151L},{0L,0x350917B7L},{7L,0L},{0x1F7B2A55L,1L},{0x2F047D99L,0x58D5EF94L},{0x25EF7269L,0x2F047D99L},{1L,0xD2DB29B3L},{1L,0x5B1CF151L},{0x25EF7269L,0xA547C4C6L}},{{0x5B1CF151L,1L},{0xD4DFEEEDL,0x5F64ED68L},{7L,0L},{0x350917B7L,0x0C1213BDL},{(-5L),0xE9A5C54AL},{0x2934A2F9L,1L},{0x765B23B5L,0xD2DB29B3L},{0xA547C4C6L,8L},{(-1L),0x765B23B5L},{8L,0x39926BE4L}},{{0x5F64ED68L,0x1F7B2A55L},{7L,1L},{0L,0x39926BE4L},{8L,0x17E0B46EL},{(-1L),0x089CFB0AL},{0x7F31CA42L,0xD2DB29B3L},{0x3EE57E15L,(-10L)},{0x2934A2F9L,1L},{1L,0x0C1213BDL},{7L,7L}},{{7L,(-1L)},{1L,1L},{0x8A99E674L,0x7F31CA42L},{0x25EF7269L,0x8A99E674L},{0xE9A5C54AL,0xD2DB29B3L},{0xE9A5C54AL,0x8A99E674L},{0x25EF7269L,0x7F31CA42L},{0x8A99E674L,1L},{1L,(-1L)},{7L,7L}},{{7L,0x0C1213BDL},{1L,1L},{0x2934A2F9L,(-10L)},{0x3EE57E15L,0xD2DB29B3L},{0x7F31CA42L,0x089CFB0AL},{(-1L),0x17E0B46EL},{8L,0x39926BE4L},{0L,1L},{7L,0x1F7B2A55L},{0x5F64ED68L,0x39926BE4L}},{{8L,0x765B23B5L},{(-1L),8L},{0xA547C4C6L,0xD2DB29B3L},{0x765B23B5L,1L},{0x2934A2F9L,0xE9A5C54AL},{(-5L),0x0C1213BDL},{0x350917B7L,0L},{7L,0x5F64ED68L},{0xD4DFEEEDL,1L},{0x5B1CF151L,0xA547C4C6L}},{{0x25EF7269L,0x5B1CF151L},{1L,0xD2DB29B3L},{1L,0x2F047D99L},{0x25EF7269L,0x58D5EF94L},{0x2F047D99L,1L},{0x1F7B2A55L,0L},{7L,0x350917B7L},{0L,0x0C1213BDL},{(-10L),1L},{0x2934A2F9L,(-5L)}},{{0x17E0B46EL,0xD2DB29B3L},{0x58D5EF94L,8L},{(-1L),0x3EE57E15L},{0x089CFB0AL,0x39926BE4L},{(-1L),0xD4DFEEEDL},{7L,0xD4DFEEEDL},{(-1L),0x39926BE4L},{0x089CFB0AL,0x3EE57E15L},{(-1L),8L},{0x58D5EF94L,0xD2DB29B3L}}};
static int16_t g_333 = 0x5EFDL;
static int16_t g_354 = 6L;
static int16_t g_356 = 0xA857L;
static int32_t g_357 = (-1L);
static uint32_t g_362 = 0xA3E8C22AL;
static int16_t g_392 = 0L;
static uint16_t g_434 = 1UL;
static uint8_t g_447 = 248UL;
static uint8_t g_450[8] = {0x51L,0x51L,0x51L,0x51L,0x51L,0x51L,0x51L,0x51L};
static int8_t g_453 = 0L;
static int32_t g_487 = 1L;
static uint32_t g_488 = 6UL;
static uint8_t g_571 = 1UL;
inline static const int8_t func_1(void);
inline static uint16_t func_11(const int32_t p_12, uint32_t p_13);
static const int16_t func_21(uint32_t p_22, uint32_t p_23, uint8_t p_24, uint16_t p_25);
inline static uint16_t func_40(uint32_t p_41, struct S0 p_42, int32_t p_43, int32_t p_44, int16_t p_45);
static int32_t func_50(uint32_t p_51, int32_t p_52, int32_t p_53);
static int32_t func_63(int8_t p_64, struct S0 p_65, uint32_t p_66);
inline static int32_t func_87(int8_t p_88, uint32_t p_89, struct S0 p_90);
static int8_t func_91(const int32_t p_92, struct S0 p_93, int32_t p_94);
static int16_t func_106(int8_t p_107);
inline static int32_t func_110(int8_t p_111, const uint16_t p_112, uint16_t p_113);
inline static const int8_t func_1(void)
{
    uint32_t l_2 = 0xEA6801FCL;
    const uint32_t l_14 = 0x96B779C6L;
    uint32_t l_26 = 4294967289UL;
    int32_t l_591[1];
    int i;
    for (i = 0; i < 1; i++)
        l_591[i] = 0L;
    l_2--;
    l_591[0] = (safe_sub_func_int16_t_s_s((!(safe_add_func_uint16_t_u_u((~(func_11(l_14, g_15) >= (safe_add_func_int8_t_s_s(l_14, (safe_sub_func_uint8_t_u_u((l_2 || func_21(l_14, l_14, l_26, l_26)), g_46.f0)))))), g_46.f6))), (-2L)));
    g_487 = g_15;
    return l_26;
}
inline static uint16_t func_11(const int32_t p_12, uint32_t p_13)
{
    uint32_t l_16 = 2UL;
    l_16 = p_12;
    return g_15;
}
static const int16_t func_21(uint32_t p_22, uint32_t p_23, uint8_t p_24, uint16_t p_25)
{
    uint32_t l_33 = 4294967295UL;
    int16_t l_572[8] = {7L,0xDC51L,7L,7L,0xDC51L,7L,7L,0xDC51L};
    uint32_t l_589 = 0x249774FCL;
    int32_t l_590 = (-6L);
    int i;
    l_33 = (~(((g_15 != 0xCD83L) > ((p_25 | 252UL) || func_11(g_15, p_22))) >= (!(((safe_mod_func_int16_t_s_s(g_15, p_23)) < 0x46B5L) <= 255UL))));
    l_590 ^= (safe_mod_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u((g_15 >= ((-9L) ^ (safe_lshift_func_uint16_t_u_s(func_40(g_15, g_46, ((safe_lshift_func_int16_t_s_u((func_11(g_46.f4, (~(func_11(func_50((0UL <= g_46.f0), l_33, (safe_lshift_func_uint8_t_u_u(((safe_add_func_uint16_t_u_u(func_11(l_33, g_46.f0), 0x8566L)) ^ l_33), g_15))), l_572[3]) <= l_572[3]))) && l_33), g_571)) > p_23), l_572[6], g_46.f0), l_589)))), g_453)), g_453));
    l_590 = 0L;
    return p_22;
}
inline static uint16_t func_40(uint32_t p_41, struct S0 p_42, int32_t p_43, int32_t p_44, int16_t p_45)
{
    const uint32_t l_577 = 0x80392FE5L;
    int32_t l_586 = 1L;
    l_586 = (((g_149[0] || (((safe_lshift_func_uint16_t_u_s(l_577, 10)) < (((safe_mod_func_uint16_t_u_u(((safe_sub_func_int8_t_s_s(p_43, (g_450[3] <= (65535UL && (safe_add_func_int16_t_s_s(l_577, ((l_577 == (safe_rshift_func_int16_t_s_s(((l_577 | l_577) < p_42.f1), 12))) <= 0xF4L))))))) >= 6L), g_118)) == p_42.f1) == 0x6CL)) == l_577)) != l_577) & (-8L));
    p_42.f6 = (safe_lshift_func_uint16_t_u_s(0xB401L, 11));
    return g_118;
}
static int32_t func_50(uint32_t p_51, int32_t p_52, int32_t p_53)
{
    int32_t l_69 = 0x1D005767L;
    int32_t l_514 = 0x7EEFC131L;
    int16_t l_548 = 0x2B90L;
    g_58--;
    for (p_51 = 7; (p_51 < 51); ++p_51)
    {
        int32_t l_82 = 0xA6B1F15FL;
        int8_t l_523 = 0xEBL;
        if (p_53)
            break;
        if (g_46.f5)
            continue;
        p_52 = func_63((func_11(p_52, (safe_add_func_int8_t_s_s(l_69, (p_53 > 5UL)))) != (safe_add_func_uint8_t_u_u((safe_add_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s(255UL, (4294967289UL && func_11((safe_sub_func_int16_t_s_s((((safe_rshift_func_int8_t_s_s(g_46.f5, (safe_add_func_uint8_t_u_u(0x6AL, 0x75L)))) | p_52) != p_52), l_82)), p_52)))), 0x90L)), l_82))), g_46, g_46.f3);
        l_82 = ((safe_add_func_int8_t_s_s((l_514 ^ (safe_mod_func_int8_t_s_s(p_51, 1UL))), ((safe_sub_func_int32_t_s_s(((safe_sub_func_uint32_t_u_u(((l_514 == (safe_lshift_func_int8_t_s_s(((l_523 || (safe_add_func_uint16_t_u_u(((((0xBC5BL <= ((safe_rshift_func_int16_t_s_u(p_53, (safe_sub_func_int16_t_s_s((safe_mod_func_uint8_t_u_u(p_51, (safe_unary_minus_func_int32_t_s(g_187)))), l_523)))) ^ l_523)) <= g_149[0]) && p_52) ^ 0x6383328BL), 0xAADCL))) != g_46.f3), p_51))) > l_523), g_163)) != 0L), 0x9E39DB4AL)) || p_53))) <= l_523);
    }
    g_487 = (safe_sub_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s((safe_add_func_int32_t_s_s((safe_add_func_uint16_t_u_u((safe_add_func_int32_t_s_s(((safe_mod_func_uint8_t_u_u(p_52, (~((safe_lshift_func_uint8_t_u_s(l_548, 4)) < (safe_lshift_func_int8_t_s_u(0xA7L, 6)))))) ^ (safe_mod_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(((l_514 < (+(safe_rshift_func_int8_t_s_u((safe_unary_minus_func_uint32_t_u(g_247)), l_514)))) < ((((safe_add_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((((p_53 & (safe_rshift_func_int16_t_s_u(g_149[0], 2))) ^ (((((g_571 == g_488) == g_450[5]) || p_51) && p_51) < g_127)) | 0x0FL), l_514)), 2)), 0x8ABCL)) == l_514) || g_46.f5) >= l_548)), 6)), p_52)), g_150)), l_69))), p_53)), p_51)), 0xB24F25B4L)), 6)), l_69));
    return g_392;
}
static int32_t func_63(int8_t p_64, struct S0 p_65, uint32_t p_66)
{
    uint32_t l_95 = 7UL;
    int8_t l_511 = 1L;
    for (g_58 = 0; (g_58 != 28); ++g_58)
    {
        uint32_t l_157 = 18446744073709551611UL;
        uint16_t l_510[5] = {1UL,1UL,1UL,1UL,1UL};
        int i;
        for (p_66 = 8; (p_66 == 56); p_66 = safe_add_func_uint8_t_u_u(p_66, 6))
        {
            struct S0 l_158 = {-505,38063,0x7822E2C5L,-11063,-38,-82,-276};
            g_487 = func_87(func_91(g_46.f2, g_46, l_95), ((g_46.f5 < (0x4B2AL > (((safe_lshift_func_uint8_t_u_s(((0xAB2BL == (safe_mod_func_uint8_t_u_u((p_65.f1 != (p_64 && l_157)), p_65.f1))) == g_46.f4), p_65.f3)) >= g_46.f1) >= g_46.f4))) <= 1UL), l_158);
        }
        g_487 = (l_95 ^ (g_450[5] != ((safe_lshift_func_int16_t_s_s(((safe_rshift_func_int8_t_s_u(((safe_rshift_func_uint8_t_u_s(((255UL ^ (safe_sub_func_int32_t_s_s(0xC84418ADL, (g_149[1] != (safe_mod_func_int16_t_s_s(((((safe_rshift_func_int16_t_s_s(l_95, (((l_157 | ((((((safe_mod_func_uint8_t_u_u((+(safe_mod_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(0UL, (((l_95 != 0xCBFBA795L) >= g_447) && 4294967295UL))), l_510[1]))), 0xEDL)) && l_95) && p_65.f3) ^ 1L) | 5UL) != g_362)) < 247UL) == g_149[0]))) & 0x7FE4AA0DL) != l_95) == p_65.f3), 7UL)))))) < p_65.f0), l_95)) != g_149[0]), l_95)) || l_95), g_149[0])) != g_206)));
    }
    g_487 = (g_333 == 0x50E2L);
    return l_511;
}
inline static int32_t func_87(int8_t p_88, uint32_t p_89, struct S0 p_90)
{
    int32_t l_159 = 0xC824337CL;
    int32_t l_160 = 0xD4F0C111L;
    int32_t l_161 = 0xF114FAD7L;
    int32_t l_162[5][6][6] = {{{1L,0xB85D1346L,0xA1EF9796L,0x12596962L,1L,1L},{1L,1L,0xA1EF9796L,1L,0x86C8CC70L,0xB85D1346L},{1L,1L,0x86C8CC70L,5L,0L,(-4L)},{5L,0L,(-4L),0x12596962L,0x97568C23L,0x12596962L},{0L,(-10L),0L,0xA1EF9796L,1L,0x27D319CEL},{1L,0x12596962L,1L,(-1L),(-5L),4L}},{{0L,1L,(-8L),(-1L),0x27D319CEL,0xA1EF9796L},{1L,1L,0x12596962L,0xA1EF9796L,0xB85D1346L,1L},{0L,0xABEDA80DL,0x90269B8FL,0x12596962L,0x04E31C67L,0x04E31C67L},{5L,0xB85D1346L,0xB85D1346L,5L,1L,0xC2E7BD33L},{(-10L),0xA1EF9796L,(-5L),0x90269B8FL,0L,1L},{0x86C8CC70L,(-4L),5L,0x04E31C67L,0L,(-8L)}},{{0x9C40DF3FL,0xA1EF9796L,0L,0xB0A51E9DL,1L,1L},{1L,0xB85D1346L,1L,(-8L),0x04E31C67L,0xB0A51E9DL},{0xB85D1346L,0xABEDA80DL,4L,0xABEDA80DL,0xB85D1346L,0L},{4L,1L,(-10L),0x86C8CC70L,0x27D319CEL,0xB85D1346L},{0xABEDA80DL,1L,0x97568C23L,1L,(-5L),0xB85D1346L},{(-1L),0x12596962L,(-10L),0x9C40DF3FL,1L,0L}},{{(-5L),(-10L),4L,(-4L),0x97568C23L,0xB0A51E9DL},{1L,0L,1L,1L,0L,1L},{0x27D319CEL,0x90269B8FL,0L,0L,1L,(-8L)},{0xB0A51E9DL,0x9C40DF3FL,5L,(-5L),0xABEDA80DL,1L},{0xB0A51E9DL,1L,(-5L),0L,(-4L),0xC2E7BD33L},{0x27D319CEL,1L,0xB85D1346L,1L,(-8L),0x04E31C67L}},{{1L,1L,0x90269B8FL,(-4L),0x90269B8FL,1L},{(-5L),0xB0A51E9DL,0x12596962L,0x9C40DF3FL,1L,0xA1EF9796L},{(-1L),4L,(-8L),1L,0xC2E7BD33L,4L},{0xABEDA80DL,4L,1L,0x86C8CC70L,1L,0x27D319CEL},{4L,0xB0A51E9DL,0L,0xABEDA80DL,0x90269B8FL,0x12596962L},{0xB85D1346L,1L,(-4L),(-8L),(-8L),(-4L)}}};
    int16_t l_358 = 0x61E5L;
    int i, j, k;
    l_159 = p_90.f2;
    g_163--;
    for (g_121 = 0; (g_121 <= 54); g_121++)
    {
        uint32_t l_223 = 0xF72682E1L;
        uint16_t l_245 = 0xE5BDL;
        int32_t l_264 = (-3L);
        int32_t l_288 = 0xAAE911EAL;
        int32_t l_367 = (-6L);
        if ((safe_rshift_func_uint16_t_u_s(7UL, 13)))
        {
            uint8_t l_232 = 0x0DL;
            for (l_159 = (-14); (l_159 == (-27)); l_159 = safe_sub_func_uint8_t_u_u(l_159, 3))
            {
                int8_t l_186 = (-9L);
                int32_t l_246 = 0xB4C5A253L;
                uint32_t l_315 = 0x45C7DD83L;
                for (p_88 = (-20); (p_88 == (-22)); p_88 = safe_sub_func_uint8_t_u_u(p_88, 2))
                {
                    int32_t l_190 = 0xFF17D062L;
                    int8_t l_272[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_272[i] = 0xAEL;
                    l_162[1][2][4] = (safe_mod_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((safe_add_func_int16_t_s_s(0xC9D1L, (0x4E873C8DL && (safe_mod_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_u(g_46.f1, 3)), (9L < ((8L == 0L) <= ((-6L) != (g_46.f4 & (l_186 <= g_46.f5))))))), 0x79EB048EL))))), g_121)), 65526UL));
                    if (g_46.f6)
                    {
                        g_187 = g_46.f1;
                        l_190 ^= (safe_lshift_func_int16_t_s_u(0xF3FAL, 8));
                    }
                    else
                    {
                        uint8_t l_205 = 0x0CL;
                        g_206 ^= (((((((((((safe_lshift_func_uint8_t_u_u(0x09L, (safe_mod_func_int8_t_s_s((((safe_mod_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_u(1UL, 8)) & (g_15 < p_90.f5)), (safe_rshift_func_uint8_t_u_u(1UL, 0)))) > ((safe_unary_minus_func_int32_t_s(l_190)) & p_90.f4)) && p_90.f5), (+(safe_add_func_uint32_t_u_u(l_205, p_88))))))) || 0x99FBD2CEL) ^ p_90.f3) || 1L) != g_121) > g_149[1]) & 0x6B76L) || 1L) < 65533UL) < 0x3999F76DL) | 8UL);
                        if (l_205)
                            continue;
                        p_90.f5 = ((((safe_rshift_func_uint8_t_u_s((g_149[0] && (1L | p_90.f4)), 5)) >= (safe_add_func_uint32_t_u_u((safe_add_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s((safe_mod_func_uint32_t_u_u(((safe_lshift_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(p_90.f3, 0x62C9L)), 9)) ^ p_90.f3), p_90.f1)), ((((safe_sub_func_int16_t_s_s((g_46.f6 <= (((l_223 >= l_190) ^ 0xBA27C460L) == l_223)), l_223)) || l_205) & 7UL) ^ l_190))), g_46.f6)), 0xCEAB9BFDL))) < l_186) && l_186);
                    }
                    for (g_127 = 0; (g_127 != 24); g_127++)
                    {
                        return g_150;
                    }
                    if ((((safe_sub_func_int8_t_s_s(((((g_150 != (((g_149[1] & (safe_lshift_func_int16_t_s_s((((safe_lshift_func_int8_t_s_u((l_232 & g_58), 2)) | (safe_add_func_uint8_t_u_u(g_121, (((safe_rshift_func_uint16_t_u_u(65535UL, g_46.f4)) < (((safe_add_func_uint32_t_u_u((((safe_add_func_uint32_t_u_u((((safe_add_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(g_206, 5)), 0xD4L)) || (-4L)) >= 0x0D6BL), (-9L))) | p_90.f0) != l_186), 1UL)) | g_118) == g_163)) >= 0x585BL)))) >= 0x16063313L), 6))) >= l_186) == l_245)) & 1UL) < 0xBA691A81L) != 0UL), l_232)) & p_90.f4) && 0xCB65B9F8L))
                    {
                        l_246 ^= p_90.f4;
                        --g_247;
                        if (p_90.f4)
                            break;
                        l_264 = ((((((safe_add_func_uint32_t_u_u((0x9602L <= (safe_mod_func_int16_t_s_s(0xA11CL, ((safe_unary_minus_func_int8_t_s(((safe_add_func_int32_t_s_s((g_46.f5 ^ 1L), (+(safe_lshift_func_int8_t_s_s(8L, ((0L >= ((safe_mod_func_int16_t_s_s(0x4C58L, (safe_sub_func_uint32_t_u_u(l_223, (0UL && g_149[1]))))) > g_187)) != l_232)))))) & p_90.f3))) || p_90.f1)))), l_232)) < g_149[0]) & g_121) > 0x9DF27BCFL) > p_89) ^ g_46.f5);
                    }
                    else
                    {
                        uint32_t l_294 = 0x81B2D838L;
                        p_90.f5 = (((safe_mod_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u((+0UL), (+(!((-1L) || l_272[0]))))) < l_232), g_127)) != 4UL) < (l_186 ^ (safe_rshift_func_uint16_t_u_s(((~((((((l_190 || (safe_sub_func_uint16_t_u_u((p_90.f6 & p_89), l_186))) <= g_46.f5) ^ p_90.f6) && l_232) > g_58) == 0xB3E919F6L)) && g_127), p_90.f5))));
                        p_90.f4 = ((safe_sub_func_int32_t_s_s((((safe_lshift_func_int16_t_s_s(((0xE2L & (safe_rshift_func_int8_t_s_s((-1L), ((safe_sub_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_u(g_163, 4)) | (l_288 ^ 5L)), ((safe_mod_func_uint32_t_u_u(((safe_unary_minus_func_uint16_t_u((p_90.f2 && ((((g_149[1] || (((safe_sub_func_uint32_t_u_u(4294967291UL, (((1UL <= g_15) & p_90.f0) || g_58))) && l_294) >= g_46.f0)) ^ 0xC9A4B138L) ^ l_245) && g_121)))) >= p_90.f4), p_90.f2)) <= p_90.f6))) || 1L)))) <= g_46.f2), 1)) < (-6L)) && 0x44FBL), p_90.f5)) && g_163);
                        p_90.f3 |= p_88;
                    }
                }
                g_313 = ((safe_lshift_func_uint8_t_u_s(((safe_lshift_func_uint8_t_u_u(246UL, ((safe_sub_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((((g_46.f1 == ((((((safe_lshift_func_uint8_t_u_s((0x9B32L >= l_186), (l_232 > (0x126A534EL <= (safe_sub_func_uint32_t_u_u(((g_46.f5 != (p_88 != (safe_sub_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(g_206, g_150)), l_160)))) < 0x2EL), p_90.f0)))))) ^ 0x5E5902A9L) || 0xE493L) || 1L) <= l_161) & 0x2E8AL)) ^ p_90.f5) < l_186), 7)), g_46.f0)) ^ g_15))) | 7L), g_46.f3)) < l_223);
                g_314[2][0][0] = 0x506700EAL;
                --l_315;
            }
        }
        else
        {
            int32_t l_330[9][4] = {{0x251C1011L,0xDB45C908L,0xDF8891E8L,(-6L)},{(-6L),0xDB45C908L,(-6L),0x7D10670AL},{0xDB45C908L,0xEBCB51DAL,0x49A5B31BL,0x00964AE8L},{0x00964AE8L,(-6L),0x251C1011L,0xEBCB51DAL},{0x81081BD6L,0x251C1011L,0x251C1011L,0x81081BD6L},{0x00964AE8L,0x7D10670AL,0x49A5B31BL,(-6L)},{0x00964AE8L,0x49A5B31BL,0xEBCB51DAL,0xDB45C908L},{0xEBCB51DAL,0xDB45C908L,0x593A6611L,0xDB45C908L},{0x81081BD6L,0x49A5B31BL,0xCCC0493FL,0xEBCB51DAL}};
            int32_t l_359 = 0xEA5CE5B9L;
            int32_t l_360 = 8L;
            int32_t l_361 = 0xACCCAD14L;
            int i, j;
            if ((safe_add_func_uint32_t_u_u((0L > ((0L && ((safe_sub_func_int8_t_s_s(g_46.f4, ((((safe_rshift_func_int16_t_s_s((safe_add_func_uint32_t_u_u((g_46.f4 | 65535UL), (0x1EL | (g_46.f5 == p_90.f2)))), ((safe_add_func_uint16_t_u_u(((safe_sub_func_uint16_t_u_u(g_206, p_90.f1)) || 0xE1FDL), l_264)) && l_330[7][3]))) == 0x58L) != (-2L)) > 6L))) | p_90.f0)) == g_46.f3)), g_314[2][0][0])))
            {
                uint16_t l_334 = 0xF746L;
                g_333 = (safe_sub_func_uint16_t_u_u((g_46.f3 <= p_89), 0x293EL));
                l_161 &= g_314[7][9][1];
                for (l_160 = 3; (l_160 >= 0); l_160 -= 1)
                {
                    uint32_t l_355[2][5][4] = {{{18446744073709551613UL,18446744073709551613UL,1UL,18446744073709551613UL},{18446744073709551613UL,8UL,8UL,18446744073709551613UL},{8UL,18446744073709551613UL,8UL,8UL},{18446744073709551613UL,18446744073709551613UL,1UL,18446744073709551613UL},{18446744073709551613UL,8UL,8UL,18446744073709551613UL}},{{8UL,18446744073709551613UL,8UL,8UL},{18446744073709551613UL,18446744073709551613UL,1UL,18446744073709551613UL},{18446744073709551613UL,8UL,8UL,18446744073709551613UL},{8UL,18446744073709551613UL,8UL,8UL},{18446744073709551613UL,18446744073709551613UL,1UL,18446744073709551613UL}}};
                    int i, j, k;
                    --l_334;
                    for (p_90.f2 = 1; (p_90.f2 >= 0); p_90.f2 -= 1)
                    {
                        int i, j, k;
                        l_162[l_160][(l_160 + 2)][(l_160 + 2)] = (1L || l_162[(p_90.f2 + 2)][(p_90.f2 + 2)][(l_160 + 1)]);
                        g_356 = ((((((((safe_rshift_func_int8_t_s_u(((l_162[(p_90.f2 + 2)][(l_160 + 2)][(p_90.f2 + 2)] == (g_149[p_90.f2] > ((safe_add_func_uint8_t_u_u((l_334 >= (((((safe_mod_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s(((safe_rshift_func_uint8_t_u_u((((((safe_add_func_int8_t_s_s((+((((0L && (((safe_lshift_func_int8_t_s_u((-3L), 2)) == (l_334 >= g_150)) ^ 7UL)) | ((p_88 | l_330[7][3]) > p_90.f3)) != 0x9743L) >= g_46.f0)), g_247)) || 0xB9L) != (-1L)) && l_334) && g_46.f2), g_46.f2)) || p_90.f6), p_90.f5)), 0x01L)) <= l_330[0][0]) ^ 0x7888L) <= g_127) > 0x380AL)), (-7L))) || g_46.f1))) >= g_46.f3), g_313)) < g_127) ^ g_354) ^ l_162[3][5][3]) & g_46.f4) ^ l_355[0][1][3]) == p_90.f2) || 6UL);
                        g_357 = 0xB460943DL;
                        l_358 = g_149[0];
                    }
                    l_359 |= l_330[3][3];
                }
            }
            else
            {
                int8_t l_391 = 1L;
                --g_362;
                l_161 = ((safe_add_func_uint16_t_u_u(l_367, g_15)) != (safe_lshift_func_int16_t_s_u((safe_mod_func_int8_t_s_s((((((((safe_lshift_func_int16_t_s_u(((safe_add_func_uint8_t_u_u(g_127, ((safe_mod_func_int16_t_s_s((g_121 <= (((((((safe_lshift_func_int8_t_s_u(p_90.f5, ((((safe_lshift_func_uint16_t_u_u((g_354 && ((safe_add_func_uint32_t_u_u((0xD031L <= (safe_lshift_func_int8_t_s_s((safe_sub_func_int8_t_s_s((~(safe_sub_func_uint16_t_u_u(l_159, (0xF65FF97EL | l_161)))), 0x74L)), 7))), l_391)) != g_354)), 1)) > 0xC4L) ^ g_313) & 0UL))) & 255UL) > 0x9CL) ^ p_90.f3) || 0x3BL) > 0x97L) != p_90.f0)), g_46.f5)) | p_90.f2))) >= 0L), p_90.f4)) == p_90.f2) != l_391) || p_90.f0) >= g_46.f6) || 0x64ECL) && 0L), l_330[3][3])), p_90.f5)));
            }
        }
        if ((1UL <= l_223))
        {
            uint32_t l_395 = 1UL;
            uint16_t l_418[6] = {65535UL,65535UL,65535UL,65535UL,65535UL,65535UL};
            uint16_t l_445 = 7UL;
            int i;
            g_392 = g_206;
            for (g_206 = 0; (g_206 >= 4); g_206 = safe_add_func_int8_t_s_s(g_206, 6))
            {
                int8_t l_419 = 0L;
                uint32_t l_454 = 0UL;
                l_162[3][5][3] |= l_395;
                p_90.f4 = (p_90.f5 >= g_118);
                if ((safe_mod_func_int8_t_s_s((((((+(safe_add_func_uint32_t_u_u((((safe_add_func_int32_t_s_s((safe_mod_func_int16_t_s_s(g_46.f2, (l_223 ^ (p_90.f5 != (safe_lshift_func_int8_t_s_u((g_118 <= (safe_add_func_uint16_t_u_u((g_127 != g_206), (((safe_add_func_uint8_t_u_u(l_160, l_395)) > (((safe_sub_func_uint16_t_u_u(((safe_unary_minus_func_uint16_t_u((((safe_mod_func_int32_t_s_s(0x677EC04DL, 4294967294UL)) != 0x2EC2L) != l_288))) != p_90.f5), 0x8DBCL)) || l_418[4]) >= p_90.f4)) && g_46.f4)))), p_90.f1)))))), p_88)) >= 0x8DL) && g_127), p_90.f4))) || l_395) < p_90.f0) >= 1UL) ^ g_356), l_288)))
                {
                    l_419 = 0x90EE6CEDL;
                    l_162[2][2][5] ^= p_88;
                    for (p_89 = 0; (p_89 != 2); p_89 = safe_add_func_int16_t_s_s(p_89, 1))
                    {
                        int8_t l_429 = 0x56L;
                        g_434 ^= ((246UL && l_288) < (safe_sub_func_int32_t_s_s((((safe_add_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((((+((((65526UL > (((0x24FFL && 0xD8DBL) <= (l_429 <= p_90.f2)) != (safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u(l_418[4], l_367)), 5)))) < 1UL) == l_429) & g_46.f4)) ^ g_356) ^ 0x84L), 0xDDFA5272L)), 0x89L)) == p_90.f2) & l_418[0]), l_419)));
                        if (p_90.f4)
                            break;
                    }
                }
                else
                {
                    uint32_t l_446 = 18446744073709551612UL;
                    g_447 = (safe_add_func_int16_t_s_s(((safe_add_func_uint16_t_u_u(l_161, ((safe_sub_func_uint8_t_u_u(246UL, l_367)) <= (safe_add_func_int32_t_s_s(p_90.f2, ((safe_add_func_int8_t_s_s(p_90.f5, (l_419 == g_187))) | g_354)))))) <= ((((l_445 < g_46.f0) < l_367) != 0UL) && 0x531E6C8DL)), l_446));
                    p_90.f6 = (safe_mod_func_int8_t_s_s(p_90.f3, 9L));
                    g_450[5]++;
                    if (g_46.f1)
                        continue;
                }
                l_454--;
            }
        }
        else
        {
            uint16_t l_485 = 65531UL;
            uint16_t l_486 = 0x51B6L;
            p_90.f4 = ((((((((((!((safe_mod_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u((0x72L <= (safe_mod_func_int32_t_s_s(((safe_lshift_func_uint16_t_u_u((safe_unary_minus_func_uint32_t_u((1L || (!((safe_lshift_func_uint16_t_u_u((((safe_rshift_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s((((((safe_rshift_func_int16_t_s_u((l_367 | (+((safe_sub_func_uint32_t_u_u(l_288, (5UL && l_159))) ^ (0UL ^ g_149[0])))), (((safe_sub_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_u(251UL, g_356)) != g_46.f1), 0x20L)) || p_88) | p_90.f4))) < g_356) ^ g_392) && l_485) || g_453), 4)), g_356)), l_160)) && p_90.f2) | g_149[0]), g_247)) == 1UL))))), l_486)) <= 3L), g_314[2][0][0]))), p_90.f2)), g_333)) < 0x5BL)) || 0x6F859AAAL) | 0x1DL) >= g_450[7]) <= g_392) <= p_90.f0) > g_127) ^ 0L) < 0x0FL) & p_90.f5);
        }
        g_488++;
    }
    return g_118;
}
static int8_t func_91(const int32_t p_92, struct S0 p_93, int32_t p_94)
{
    int32_t l_96 = 1L;
    int32_t l_152 = 4L;
    l_96 = 0x4CA6A668L;
    l_152 &= (func_11((((l_96 | (safe_sub_func_uint32_t_u_u(l_96, (~(safe_sub_func_int8_t_s_s((safe_add_func_int32_t_s_s(g_46.f2, 0xE27FCE2EL)), g_15)))))) >= (safe_rshift_func_int16_t_s_u(func_106((safe_add_func_int32_t_s_s(((g_46.f2 || g_46.f0) && func_11((func_110(p_93.f5, (((((l_96 & 0xA7E6L) < p_92) >= l_96) || g_58) >= l_96), l_96) < g_46.f2), l_96)), g_58))), g_46.f1))) < 1UL), g_149[1]) < 0x7FL);
    return p_93.f2;
}
static int16_t func_106(int8_t p_107)
{
    uint16_t l_124[9][6] = {{65531UL,0x1371L,0x5B88L,0x5B88L,0x1371L,65531UL},{0x5B88L,0x1371L,65531UL,0x9296L,65535UL,0xC909L},{0xC909L,65530UL,0xE06CL,65530UL,0xC909L,0x1371L},{0xC909L,0x5B88L,65530UL,0x9296L,0x3A74L,0x3A74L},{0x5B88L,65535UL,65535UL,0x5B88L,0xE06CL,0x3A74L},{65531UL,0x3A74L,65530UL,0x1371L,0x9296L,0x1371L},{0xE06CL,0xA026L,0xE06CL,65534UL,0x9296L,0xC909L},{65530UL,0x3A74L,65531UL,0xE06CL,0xE06CL,65531UL},{65535UL,65535UL,0x5B88L,0xE06CL,0x3A74L,65534UL}};
    int16_t l_136[5][3] = {{9L,9L,9L},{1L,1L,1L},{9L,9L,9L},{1L,1L,1L},{9L,9L,9L}};
    int32_t l_151 = 0x8E88EED3L;
    int i, j;
    for (p_107 = 5; (p_107 >= 0); p_107 -= 1)
    {
        return p_107;
    }
    for (g_118 = 11; (g_118 != (-2)); g_118 = safe_sub_func_uint8_t_u_u(g_118, 1))
    {
        ++g_127;
    }
    g_150 = ((p_107 | (p_107 & (safe_add_func_uint16_t_u_u(p_107, 9UL)))) || (g_46.f0 & ((safe_add_func_int8_t_s_s((((l_124[4][0] | ((safe_sub_func_int16_t_s_s((l_136[1][2] ^ (safe_add_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s((safe_sub_func_int32_t_s_s((safe_sub_func_uint32_t_u_u(((safe_rshift_func_uint16_t_u_s(((((safe_add_func_int8_t_s_s(((l_124[7][3] ^ g_46.f5) <= 0xA93EL), 8L)) < 0xA8L) >= l_136[3][1]) || p_107), 3)) == g_149[0]), l_136[1][2])), p_107)), p_107)), p_107))), 0L)) != l_136[1][2])) >= 0xD2L) == p_107), 0x53L)) ^ 0xA512L)));
    l_151 = (l_136[4][1] && p_107);
    return p_107;
}
inline static int32_t func_110(int8_t p_111, const uint16_t p_112, uint16_t p_113)
{
    int32_t l_116 = 0L;
    int32_t l_117 = 0L;
    int32_t l_119 = 0x6D3FBECFL;
    int32_t l_120[8] = {0x9CBFF9F6L,(-5L),(-5L),0x9CBFF9F6L,(-5L),(-5L),0x9CBFF9F6L,(-5L)};
    int i;
    l_117 = (safe_unary_minus_func_uint8_t_u(((1L && g_46.f1) & (~l_116))));
    g_121--;
    return g_46.f0;
}
int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_15;
    csmith_sink_ = g_46.f0;
    csmith_sink_ = g_46.f1;
    csmith_sink_ = g_46.f2;
    csmith_sink_ = g_46.f3;
    csmith_sink_ = g_46.f4;
    csmith_sink_ = g_46.f5;
    csmith_sink_ = g_46.f6;
    csmith_sink_ = g_58;
    csmith_sink_ = g_118;
    csmith_sink_ = g_121;
    csmith_sink_ = g_127;
    for (i = 0; i < 2; i++)
    {
        csmith_sink_ = g_149[i];
    }
    csmith_sink_ = g_150;
    csmith_sink_ = g_163;
    csmith_sink_ = g_187;
    csmith_sink_ = g_206;
    csmith_sink_ = g_247;
    csmith_sink_ = g_313;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 2; k++)
            {
                csmith_sink_ = g_314[i][j][k];
            }
        }
    }
    csmith_sink_ = g_333;
    csmith_sink_ = g_354;
    csmith_sink_ = g_356;
    csmith_sink_ = g_357;
    csmith_sink_ = g_362;
    csmith_sink_ = g_392;
    csmith_sink_ = g_434;
    csmith_sink_ = g_447;
    for (i = 0; i < 8; i++)
    {
        csmith_sink_ = g_450[i];
    }
    csmith_sink_ = g_453;
    csmith_sink_ = g_487;
    csmith_sink_ = g_488;
    csmith_sink_ = g_571;
    platform_main_end(0,0);
    return 0;
}
