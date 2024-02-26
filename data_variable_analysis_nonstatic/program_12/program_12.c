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
static int32_t g_9 = 0x3C39BA09L;
static int32_t g_57 = 0L;
static uint32_t g_66 = 0x71081B27L;
static int8_t g_84 = 0x9EL;
static int32_t g_108 = 0L;
static int16_t g_115 = (-7L);
static int32_t g_118 = 5L;
static int32_t *g_123 = &g_118;
static int32_t ***g_136 = (void*)0;
static int32_t g_231 = (-1L);
static int32_t ****g_281 = &g_136;
static int32_t *****g_280 = &g_281;
static int8_t g_422 = 1L;
static uint8_t g_629 = 0x52L;
static int32_t **g_898 = &g_123;
static int32_t *g_980 = (void*)0;
static uint16_t func_1(void);
static int32_t * func_2(int8_t p_3, int32_t * p_4, int32_t * p_5);
static uint16_t func_12(int32_t * p_13, int32_t * p_14, uint32_t p_15, int32_t p_16, int8_t p_17);
inline static int16_t func_23(uint8_t p_24, int32_t p_25);
static int32_t * func_26(int32_t p_27, int32_t * p_28, uint8_t p_29, int32_t p_30, int32_t * p_31);
inline static int16_t func_32(int32_t p_33, uint32_t p_34, uint8_t p_35);
inline static int8_t func_45(int32_t * p_46);
static int32_t * func_47(int32_t p_48, int32_t * p_49, uint16_t p_50);
inline static int32_t * func_52(int32_t * p_53, int32_t p_54);
static uint8_t func_61(int8_t p_62, int32_t * p_63, uint32_t p_64, int32_t * p_65);
static uint16_t func_1(void)
{
    int32_t *l_8 = &g_9;
    int32_t *l_18 = (void*)0;
    int16_t l_481 = 1L;
    uint16_t l_482 = 0x2EA7L;
    (*g_898) = func_2((safe_mul_func_int8_t_s_s((((65535UL < ((void*)0 == l_8)) < (((safe_sub_func_int8_t_s_s(((*l_8) <= func_12(l_18, l_18, (*l_8), (safe_rshift_func_int16_t_s_u(((safe_mod_func_int8_t_s_s((func_23(g_9, g_9) | (-1L)), g_84)) != 0L), g_66)), (*l_8))), g_115)) == l_481) && 0x358C5A75L)) ^ l_482), (*l_8))), l_18, l_8);
    ((void) sizeof ((g_123 == &g_9) ? 1 : 0), __extension__ ({ if (g_123 == &g_9) ; else __assert_fail ("g_123 == &g_9", "/tmp/tmpp80jue4_.c", 63, __extension__ __PRETTY_FUNCTION__); }));
    return g_118;
}
static int32_t * func_2(int8_t p_3, int32_t * p_4, int32_t * p_5)
{
    int32_t ****l_487 = &g_136;
    uint32_t l_496 = 1UL;
    int32_t *l_513 = (void*)0;
    uint32_t l_617 = 0xF75CD230L;
    int32_t *****l_646 = &g_281;
    uint8_t l_678 = 0x50L;
    int8_t l_704 = (-1L);
    uint16_t l_733 = 0x50ECL;
    int32_t *****l_835 = (void*)0;
    uint8_t l_839 = 0x26L;
    int32_t *l_860 = (void*)0;
    int32_t *l_891 = (void*)0;
    int32_t l_960 = 0xCAADE1D5L;
    int32_t l_979 = 1L;
    int16_t l_992 = 0L;
    uint16_t l_1010 = 0xF87AL;
    int32_t *l_1013 = &g_231;
    int32_t l_1044 = 0x05F8611EL;
    uint8_t l_1046 = 0xF8L;
    int8_t l_1193 = 1L;
    int8_t l_1291 = 1L;
    int32_t *l_1292 = &l_960;
    return p_5;
}
static uint16_t func_12(int32_t * p_13, int32_t * p_14, uint32_t p_15, int32_t p_16, int8_t p_17)
{
    int32_t *l_479 = &g_231;
    int32_t **l_480 = &l_479;
    (*l_480) = l_479;
    return g_84;
}
inline static int16_t func_23(uint8_t p_24, int32_t p_25)
{
    int32_t l_42 = 0x1477A14AL;
    int16_t l_51 = 0xB4D2L;
    int32_t *l_457 = &g_9;
    int32_t **l_468 = &g_123;
    int32_t *l_478 = &g_231;
    (*l_468) = func_26(((func_32(((safe_lshift_func_int16_t_s_u(((safe_rshift_func_uint16_t_u_s((((safe_lshift_func_uint8_t_u_u((&p_25 == (void*)0), 1)) == l_42) == (g_9 & (safe_lshift_func_int8_t_s_s(0L, func_45(func_47(l_51, func_52(&g_9, g_9), g_66)))))), 10)) < p_24), 10)) ^ l_42), l_42, g_66) != l_42) ^ 0xA930L), l_457, g_115, (*l_457), l_457);
    (*l_468) = func_47(((~(safe_mod_func_int32_t_s_s(p_24, p_24))) || ((0x02L & ((&l_457 != &l_457) <= (*l_457))) != (safe_sub_func_int32_t_s_s(((safe_rshift_func_int8_t_s_s((p_24 ^ ((safe_lshift_func_uint8_t_u_u(((**l_468) < g_108), (*l_457))) >= 0x4DL)), 7)) < (**l_468)), g_118)))), l_478, g_118);
    (*l_468) = &p_25;
    ((void) sizeof ((g_123 == &p_25) ? 1 : 0), __extension__ ({ if (g_123 == &p_25) ; else __assert_fail ("g_123 == &p_25", "/tmp/tmpp80jue4_.c", 133, __extension__ __PRETTY_FUNCTION__); }));
    return g_9;
}
static int32_t * func_26(int32_t p_27, int32_t * p_28, uint8_t p_29, int32_t p_30, int32_t * p_31)
{
    uint8_t l_460 = 0UL;
    int32_t *****l_461 = &g_281;
    int32_t *l_467 = &g_231;
    p_31 = (void*)0;
    ((void) sizeof ((p_31 == 0) ? 1 : 0), __extension__ ({ if (p_31 == 0) ; else __assert_fail ("p_31 == 0", "/tmp/tmpp80jue4_.c", 152, __extension__ __PRETTY_FUNCTION__); }));
    (*l_467) = ((((safe_add_func_uint8_t_u_u(255UL, (l_460 == (l_461 != (void*)0)))) <= ((safe_rshift_func_uint8_t_u_s((((&p_31 == &p_31) || p_30) | (safe_sub_func_int8_t_s_s((p_30 > ((~((void*)0 == (**l_461))) || p_30)), 255UL))), 4)) && p_30)) <= p_29) && p_29);
    return &g_118;
}
inline static int16_t func_32(int32_t p_33, uint32_t p_34, uint8_t p_35)
{
    int32_t **l_456 = &g_123;
    (*l_456) = &p_33;
    ((void) sizeof ((g_123 == &p_33) ? 1 : 0), __extension__ ({ if (g_123 == &p_33) ; else __assert_fail ("g_123 == &p_33", "/tmp/tmpp80jue4_.c", 170, __extension__ __PRETTY_FUNCTION__); }));
    return p_34;
}
inline static int8_t func_45(int32_t * p_46)
{
    uint32_t l_455 = 0xB064C719L;
    (*p_46) = (0x15386C69L == (safe_lshift_func_uint8_t_u_u(g_115, 5)));
    return l_455;
}
static int32_t * func_47(int32_t p_48, int32_t * p_49, uint16_t p_50)
{
    uint8_t l_450 = 0x39L;
    int16_t l_451 = 0x9BB6L;
    int32_t **l_452 = &g_123;
    (*g_123) = (p_50 >= (l_450 & l_451));
    (*l_452) = &p_48;
    ((void) sizeof ((g_123 == &p_48) ? 1 : 0), __extension__ ({ if (g_123 == &p_48) ; else __assert_fail ("g_123 == &p_48", "/tmp/tmpp80jue4_.c", 203, __extension__ __PRETTY_FUNCTION__); }));
    return &g_118;
}
inline static int32_t * func_52(int32_t * p_53, int32_t p_54)
{
    int32_t ****l_399 = &g_136;
    int32_t *l_403 = (void*)0;
    int32_t *l_404 = &g_57;
    int32_t ***l_407 = (void*)0;
    for (p_54 = (-7); (p_54 == (-19)); p_54--)
    {
        int32_t *l_71 = (void*)0;
        int32_t l_393 = 0x89D02CC8L;
        int32_t ***l_398 = (void*)0;
        uint32_t l_400 = 0xF262337FL;
        for (g_57 = 0; (g_57 < (-14)); --g_57)
        {
            uint32_t l_60 = 18446744073709551615UL;
            int32_t **l_385 = &l_71;
            int8_t l_390 = 3L;
            int32_t l_401 = 0L;
            int32_t *l_402 = &l_401;
        }
        l_404 = l_403;
        ((void) sizeof ((l_404 == 0) ? 1 : 0), __extension__ ({ if (l_404 == 0) ; else __assert_fail ("l_404 == 0", "/tmp/tmpp80jue4_.c", 238, __extension__ __PRETTY_FUNCTION__); }));
    }
    ((void) sizeof ((l_404 == 0 || l_404 == &g_57) ? 1 : 0), __extension__ ({ if (l_404 == 0 || l_404 == &g_57) ; else __assert_fail ("l_404 == 0 || l_404 == &g_57", "/tmp/tmpp80jue4_.c", 241, __extension__ __PRETTY_FUNCTION__); }));
    if (((safe_mod_func_int8_t_s_s((p_54 <= 0x3E5D3A11L), g_84)) < (*p_53)))
    {
        int32_t **l_421 = &l_403;
        int32_t l_425 = 0L;
        uint32_t l_436 = 0UL;
        (*g_123) = (*p_53);
        if ((((l_407 != (void*)0) <= 0xFF4218CAL) && p_54))
        {
            int32_t **l_420 = &g_123;
            int32_t l_423 = 0x21F33E96L;
            int32_t l_424 = 0xEEA668F6L;
            (**l_420) = (((safe_lshift_func_uint16_t_u_s(((safe_lshift_func_int16_t_s_u(((g_108 || (safe_add_func_int32_t_s_s((g_118 | ((((((void*)0 != (**g_280)) > ((g_66 | ((safe_mul_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(g_115, ((p_54 == (((((p_54 >= (l_420 != l_421)) < g_66) | (-5L)) | p_54) | 1UL)) == 65531UL))), p_54)) == g_422)) > g_108)) ^ l_423) >= 0UL) > l_424)), (*p_53)))) || (-1L)), l_425)) < (-1L)), 14)) <= g_118) >= p_54);
            p_53 = (void*)0;
            ((void) sizeof ((p_53 == 0) ? 1 : 0), __extension__ ({ if (p_53 == 0) ; else __assert_fail ("p_53 == 0", "/tmp/tmpp80jue4_.c", 256, __extension__ __PRETTY_FUNCTION__); }));
        }
        else
        {
            int32_t *l_432 = &l_425;
            for (g_108 = 6; (g_108 <= 27); g_108 = safe_add_func_int16_t_s_s(g_108, 4))
            {
                for (g_118 = 23; (g_118 >= 3); --g_118)
                {
                    int32_t *l_433 = &g_9;
                    (*l_421) = (*l_421);
                    for (g_57 = (-16); (g_57 <= 9); ++g_57)
                    {
                        return l_433;
                    }
                }
                (*g_123) = 0x06B8AFC5L;
                (*g_123) = ((safe_lshift_func_uint16_t_u_u(g_108, ((*p_53) >= 0xB0CEC7D1L))) | l_436);
            }
            (*l_432) = (*p_53);
        }
        ((void) sizeof ((p_53 == &g_9 || p_53 == 0) ? 1 : 0), __extension__ ({ if (p_53 == &g_9 || p_53 == 0) ; else __assert_fail ("p_53 == &g_9 || p_53 == 0", "/tmp/tmpp80jue4_.c", 280, __extension__ __PRETTY_FUNCTION__); }));
        (*l_421) = &p_54;
        ((void) sizeof ((l_403 == &p_54) ? 1 : 0), __extension__ ({ if (l_403 == &p_54) ; else __assert_fail ("l_403 == &p_54", "/tmp/tmpp80jue4_.c", 283, __extension__ __PRETTY_FUNCTION__); }));
        return &g_57;
    }
    else
    {
        int32_t l_447 = (-8L);
        (*g_123) = (safe_lshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(((safe_mul_func_int8_t_s_s(g_84, (((void*)0 == &p_54) | (p_54 ^ (safe_lshift_func_int8_t_s_s(p_54, ((*p_53) > ((safe_mod_func_uint32_t_u_u((l_447 ^ (safe_mul_func_uint16_t_u_u(4UL, (&l_447 == &p_54)))), l_447)) != 0xB469A38AL)))))))) < l_447), 4)), 14));
    }
    return l_404;
}
static uint8_t func_61(int8_t p_62, int32_t * p_63, uint32_t p_64, int32_t * p_65)
{
    uint16_t l_74 = 9UL;
    int32_t *l_79 = &g_57;
    int32_t *l_99 = &g_9;
    int8_t l_172 = (-6L);
    uint32_t l_174 = 0xBC11C586L;
    int32_t ****l_251 = (void*)0;
    int32_t *****l_250 = &l_251;
    int32_t *l_330 = &g_118;
    int32_t *l_339 = &g_118;
    int16_t l_379 = (-1L);
    if ((safe_add_func_uint16_t_u_u((l_74 & (safe_mod_func_uint8_t_u_u(p_62, p_62))), (g_57 <= (&g_9 != (void*)0)))))
    {
        uint8_t l_81 = 8UL;
        int32_t *l_107 = (void*)0;
        int32_t **l_237 = &l_107;
        int32_t ***l_236 = &l_237;
        int32_t **l_308 = (void*)0;
        int32_t **l_326 = &l_107;
        if (((l_79 != &g_9) != (((((&g_9 == p_63) < 0xF497L) && (((!(0xDFDEEAF7L & ((((-1L) > 0UL) ^ g_9) && p_64))) <= g_57) >= (-7L))) <= l_81) <= (-1L))))
        {
            int16_t l_100 = 9L;
            int32_t l_134 = (-5L);
            int32_t ****l_160 = &g_136;
            int32_t **l_198 = (void*)0;
            int32_t **l_199 = (void*)0;
            if (((-1L) & ((*l_79) > 0x8F8FL)))
            {
lbl_120:
                g_84 = (safe_add_func_int16_t_s_s(g_66, ((g_57 || 0x98F8D6FFL) || p_62)));
            }
            else
            {
                int32_t *l_116 = &g_57;
                int32_t ****l_159 = &g_136;
                int32_t l_181 = (-8L);
                if ((safe_add_func_int16_t_s_s(1L, (safe_mul_func_int16_t_s_s((((safe_lshift_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(p_62, (safe_sub_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s((&g_9 == l_99), 7)), ((l_100 && (safe_mul_func_int8_t_s_s(p_62, (safe_mod_func_uint16_t_u_u(((safe_sub_func_int32_t_s_s(0xAE56B76AL, 4L)) | (l_100 & 0x558EF108L)), 0x3D91L))))) != 0x4BF019E2L))))), g_9)) & 0L) < g_9), p_64)))))
                {
                    g_108 = (p_64 > ((&g_57 != &g_57) ^ ((void*)0 != l_107)));
                    for (l_81 = 0; (l_81 >= 29); l_81 = safe_add_func_int32_t_s_s(l_81, 6))
                    {
                        int32_t *l_117 = &g_118;
                        int32_t **l_119 = &l_117;
                        g_115 = (safe_lshift_func_uint8_t_u_u(((p_64 & g_84) >= g_57), (safe_lshift_func_uint16_t_u_s(p_64, 3))));
                        (*l_117) = (l_116 == &g_57);
                        (*l_119) = p_63;
                    }
                    return (*l_99);
                }
                else
                {
                    uint32_t l_173 = 1UL;
                    if (g_57)
                        goto lbl_120;
                    for (l_100 = 0; (l_100 > 2); l_100 = safe_add_func_uint32_t_u_u(l_100, 4))
                    {
                        int32_t **l_125 = &l_79;
                        int32_t ***l_124 = &l_125;
                        g_123 = &g_118;
                        (*l_124) = &p_63;
                        ((void) sizeof ((l_125 == &p_63) ? 1 : 0), __extension__ ({ if (l_125 == &p_63) ; else __assert_fail ("l_125 == &p_63", "/tmp/tmpp80jue4_.c", 368, __extension__ __PRETTY_FUNCTION__); }));
                    }
                    if ((safe_lshift_func_int8_t_s_s(0x6AL, (safe_lshift_func_uint16_t_u_u(p_62, 10)))))
                    {
                        int32_t **l_135 = &l_107;
                        l_134 = (safe_rshift_func_int8_t_s_s(((&p_65 == &p_63) == (p_62 > p_62)), (safe_lshift_func_int8_t_s_u((0x10L != g_66), 6))));
                        (*l_135) = p_65;
                        ((void) sizeof ((l_107 == &g_57) ? 1 : 0), __extension__ ({ if (l_107 == &g_57) ; else __assert_fail ("l_107 == &g_57", "/tmp/tmpp80jue4_.c", 376, __extension__ __PRETTY_FUNCTION__); }));
                        return g_57;
                    }
                    else
                    {
                        int32_t ****l_147 = &g_136;
                        (*g_123) = (((void*)0 == g_136) < (safe_add_func_uint8_t_u_u((g_9 || ((safe_sub_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(g_84, p_64)), (&l_79 != &l_116))) > p_64)), (safe_sub_func_uint32_t_u_u((((((safe_rshift_func_int8_t_s_s((p_64 || p_64), 0)) ^ 0x9E2023AEL) <= l_100) <= p_64) & g_118), 1UL)))));
                        (*l_147) = g_136;
                    }
                    for (g_66 = 0; (g_66 == 40); g_66 = safe_add_func_uint16_t_u_u(g_66, 9))
                    {
                        uint32_t l_152 = 4294967295UL;
                        (*g_123) = (safe_sub_func_int32_t_s_s((g_57 && 0xA1L), g_108));
                        (*g_123) = (p_62 > (l_152 | (safe_sub_func_int16_t_s_s(l_152, ((safe_lshift_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_s((*l_79), ((l_159 != l_160) == (safe_add_func_uint8_t_u_u(0xDDL, (safe_unary_minus_func_int8_t_s(((safe_mul_func_int16_t_s_s((p_62 >= (safe_lshift_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s((safe_mod_func_int32_t_s_s(((((((p_64 & l_172) | 9L) && g_108) <= 0L) == g_57) & p_62), p_62)), l_173)) || 0x6A4DL), 3))), p_62)) | g_118)))))))) != l_174), 4)) <= (*l_99))))));
                    }
                }
                (*g_123) = 9L;
                for (g_115 = (-2); (g_115 <= 8); g_115 = safe_add_func_uint16_t_u_u(g_115, 8))
                {
                    int32_t ****l_189 = (void*)0;
                    for (l_172 = 0; (l_172 < (-1)); l_172 = safe_sub_func_uint32_t_u_u(l_172, 8))
                    {
                        int32_t *l_179 = (void*)0;
                        int32_t l_193 = 0xD2B34E31L;
                        l_79 = l_179;
                        ((void) sizeof ((l_79 == 0) ? 1 : 0), __extension__ ({ if (l_79 == 0) ; else __assert_fail ("l_79 == 0", "/tmp/tmpp80jue4_.c", 402, __extension__ __PRETTY_FUNCTION__); }));
                    }
                    g_123 = l_107;
                    ((void) sizeof ((g_123 == 0) ? 1 : 0), __extension__ ({ if (g_123 == 0) ; else __assert_fail ("g_123 == 0", "/tmp/tmpp80jue4_.c", 406, __extension__ __PRETTY_FUNCTION__); }));
                    for (l_172 = 0; (l_172 == 19); l_172++)
                    {
                        int32_t **l_197 = (void*)0;
                        int32_t ***l_196 = &l_197;
                        l_181 = (-8L);
                    }
                }
                ((void) sizeof ((l_79 == 0 || l_79 == &g_57) ? 1 : 0), __extension__ ({ if (l_79 == 0 || l_79 == &g_57) ; else __assert_fail ("l_79 == 0 || l_79 == &g_57", "/tmp/tmpp80jue4_.c", 415, __extension__ __PRETTY_FUNCTION__); }));
                ((void) sizeof ((g_123 == 0 || g_123 == &g_118) ? 1 : 0), __extension__ ({ if (g_123 == 0 || g_123 == &g_118) ; else __assert_fail ("g_123 == 0 || g_123 == &g_118", "/tmp/tmpp80jue4_.c", 416, __extension__ __PRETTY_FUNCTION__); }));
            }
            ((void) sizeof ((l_79 == 0 || l_79 == &g_57) ? 1 : 0), __extension__ ({ if (l_79 == 0 || l_79 == &g_57) ; else __assert_fail ("l_79 == 0 || l_79 == &g_57", "/tmp/tmpp80jue4_.c", 419, __extension__ __PRETTY_FUNCTION__); }));
            ((void) sizeof ((g_123 == 0 || g_123 == &g_118) ? 1 : 0), __extension__ ({ if (g_123 == 0 || g_123 == &g_118) ; else __assert_fail ("g_123 == 0 || g_123 == &g_118", "/tmp/tmpp80jue4_.c", 420, __extension__ __PRETTY_FUNCTION__); }));
            p_65 = &g_9;
            ((void) sizeof ((p_65 == &g_9) ? 1 : 0), __extension__ ({ if (p_65 == &g_9) ; else __assert_fail ("p_65 == &g_9", "/tmp/tmpp80jue4_.c", 423, __extension__ __PRETTY_FUNCTION__); }));
            p_65 = (void*)0;
            ((void) sizeof ((p_65 == 0) ? 1 : 0), __extension__ ({ if (p_65 == 0) ; else __assert_fail ("p_65 == 0", "/tmp/tmpp80jue4_.c", 426, __extension__ __PRETTY_FUNCTION__); }));
        }
        else
        {
            int32_t *l_209 = &g_57;
            int32_t l_253 = 0x1ED2F5AEL;
            uint32_t l_309 = 4294967292UL;
            for (g_118 = 7; (g_118 != (-12)); --g_118)
            {
                int32_t *l_214 = &g_118;
                int32_t ***l_238 = &l_237;
                int32_t *****l_279 = (void*)0;
                uint16_t l_304 = 0xD591L;
                for (g_115 = 0; (g_115 == (-14)); g_115--)
                {
                    int32_t **l_204 = (void*)0;
                    int32_t **l_205 = (void*)0;
                    int32_t **l_206 = (void*)0;
                    int32_t **l_207 = (void*)0;
                    int32_t **l_208 = &l_79;
                    int32_t ****l_221 = &g_136;
                    int32_t *****l_252 = (void*)0;
                    (*l_208) = l_79;
                    if ((l_209 == (void*)0))
                    {
                        int32_t ***l_210 = &l_208;
                        int32_t l_213 = (-9L);
                        l_107 = l_209;
                        ((void) sizeof ((l_107 == &g_118 || l_107 == &g_57) ? 1 : 0), __extension__ ({ if (l_107 == &g_118 || l_107 == &g_57) ; else __assert_fail ("l_107 == &g_118 || l_107 == &g_57", "/tmp/tmpp80jue4_.c", 455, __extension__ __PRETTY_FUNCTION__); }));
                        if ((*l_107))
                            continue;
                        l_213 = ((p_62 & (((void*)0 == l_210) & (safe_mod_func_uint16_t_u_u((((((0x69CCL == g_84) & ((*g_123) <= (&g_136 == &g_136))) >= (0xD69C6CBEL | (*g_123))) == (*l_107)) | (*g_123)), 0xD40AL)))) || (*l_99));
                    }
                    else
                    {
                        uint32_t l_229 = 1UL;
                        int32_t *l_230 = &g_231;
                        l_209 = l_214;
                        ((void) sizeof ((l_209 == &g_118) ? 1 : 0), __extension__ ({ if (l_209 == &g_118) ; else __assert_fail ("l_209 == &g_118", "/tmp/tmpp80jue4_.c", 466, __extension__ __PRETTY_FUNCTION__); }));
                        (*l_230) = (((safe_lshift_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(0xFDF43112L, ((((safe_lshift_func_uint8_t_u_u((*l_209), (((0xCE8BB6BBL ^ 6L) | (*l_214)) <= (((void*)0 != l_221) | ((((safe_mod_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((~(3L || (0x6FL && (*l_79)))), l_229)), 0x59L)) <= (*g_123)) ^ 0L) != (**l_208)))))) == (*p_65)) >= g_9) < 1UL))), 7)) & (*l_209)) | p_62);
                    }
                    if ((safe_sub_func_uint16_t_u_u((safe_add_func_int32_t_s_s((l_236 != l_238), (**l_208))), (safe_lshift_func_uint16_t_u_u((((safe_add_func_int32_t_s_s((*p_65), (safe_mul_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_s((-1L), (safe_add_func_uint8_t_u_u((g_118 < (~(g_84 <= ((void*)0 == &g_136)))), p_64)))) | 0xFFB3L), g_57)))) == p_62) ^ p_62), 2)))))
                    {
                        (*l_237) = p_63;
                        (**l_238) = l_209;
                        ((void) sizeof ((l_107 == &g_118 || l_107 == &g_57) ? 1 : 0), __extension__ ({ if (l_107 == &g_118 || l_107 == &g_57) ; else __assert_fail ("l_107 == &g_118 || l_107 == &g_57", "/tmp/tmpp80jue4_.c", 476, __extension__ __PRETTY_FUNCTION__); }));
                    }
                    else
                    {
                        l_252 = l_250;
                        ((void) sizeof ((l_252 == &l_251) ? 1 : 0), __extension__ ({ if (l_252 == &l_251) ; else __assert_fail ("l_252 == &l_251", "/tmp/tmpp80jue4_.c", 482, __extension__ __PRETTY_FUNCTION__); }));
                    }
                    ((void) sizeof ((l_252 == &l_251 || l_252 == 0) ? 1 : 0), __extension__ ({ if (l_252 == &l_251 || l_252 == 0) ; else __assert_fail ("l_252 == &l_251 || l_252 == 0", "/tmp/tmpp80jue4_.c", 485, __extension__ __PRETTY_FUNCTION__); }));
                }
                l_253 = (*g_123);
                for (g_231 = 1; (g_231 >= 23); g_231 = safe_add_func_uint32_t_u_u(g_231, 9))
                {
                    int32_t *****l_256 = &l_251;
                    int32_t *l_310 = &l_253;
                    if ((l_256 == (void*)0))
                    {
                        p_63 = p_63;
                    }
                    else
                    {
                        int32_t *l_273 = &l_253;
                        (*l_273) = (safe_lshift_func_uint8_t_u_s((safe_mod_func_int32_t_s_s((p_64 ^ (((safe_sub_func_uint8_t_u_u(p_62, p_64)) > (safe_sub_func_int8_t_s_s(((*l_214) || ((*g_123) | (+((safe_mod_func_uint8_t_u_u(((safe_sub_func_uint8_t_u_u(0x5CL, (safe_add_func_int16_t_s_s((!0x3313L), (-9L))))) ^ (p_62 >= p_62)), p_62)) & g_108)))), 255UL))) & 65535UL)), (-5L))), (*l_209)));
                        (*l_273) = (-1L);
                        (**l_238) = (**l_238);
                    }
                    if ((((-5L) != ((safe_lshift_func_uint16_t_u_s((+0xF036L), (*l_209))) >= (l_279 == g_280))) != (*p_65)))
                    {
                        uint32_t l_282 = 0x09106084L;
                        int32_t l_305 = (-1L);
                        l_305 = ((l_282 | ((safe_add_func_uint8_t_u_u(((safe_sub_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((((((0xEAL >= (safe_rshift_func_uint16_t_u_s((safe_rshift_func_int16_t_s_s(((p_63 != p_63) <= (((safe_mul_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((&l_236 == (void*)0), (((4294967289UL | (!(safe_mul_func_uint8_t_u_u((2UL ^ ((safe_mul_func_int8_t_s_s((g_9 ^ 1UL), p_62)) || (*l_214))), (*l_209))))) >= g_84) ^ (*l_214)))), g_108)) > 65535UL) > (*p_65))), g_231)), p_64))) < g_66) | 0x3339974AL) || 0x6CC735A5L) & 0UL), 1L)), (*l_209))), l_304)) >= 4294967295UL), (*l_209))) | g_231)) > (*p_63));
                    }
                    else
                    {
                        (**l_236) = p_63;
                        l_253 = (0xFEL <= ((&l_209 == l_308) != (0x3431C94DL > 0x78A5AF4FL)));
                        l_309 = (*g_123);
                    }
                    (*l_310) = (*p_63);
                }
            }
            ((void) sizeof ((l_209 == &g_118 || l_209 == &g_57) ? 1 : 0), __extension__ ({ if (l_209 == &g_118 || l_209 == &g_57) ; else __assert_fail ("l_209 == &g_118 || l_209 == &g_57", "/tmp/tmpp80jue4_.c", 522, __extension__ __PRETTY_FUNCTION__); }));
            if (((safe_sub_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(((((&l_209 != &p_65) < ((safe_lshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_u((safe_sub_func_int32_t_s_s(((+((safe_mod_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u((g_115 & (l_326 != &l_209)), 0x71DDL)), p_62)) || 0UL)) | ((*l_79) > p_64)), g_118)), 12)), 5)) ^ 0x2D4DC24DL)) == (*p_65)) || g_57), 1)), p_64)) <= g_231))
            {
                for (p_64 = 0; (p_64 < 29); ++p_64)
                {
                    (**l_236) = p_63;
                    if ((*p_63))
                        break;
                }
                (*l_250) = (*g_280);
                ((void) sizeof ((l_251 == &g_136) ? 1 : 0), __extension__ ({ if (l_251 == &g_136) ; else __assert_fail ("l_251 == &g_136", "/tmp/tmpp80jue4_.c", 535, __extension__ __PRETTY_FUNCTION__); }));
            }
            else
            {
                int8_t l_329 = 0x18L;
                l_209 = p_63;
                l_329 = 1L;
                p_65 = &l_253;
                ((void) sizeof ((p_65 == &l_253) ? 1 : 0), __extension__ ({ if (p_65 == &l_253) ; else __assert_fail ("p_65 == &l_253", "/tmp/tmpp80jue4_.c", 546, __extension__ __PRETTY_FUNCTION__); }));
            }
            ((void) sizeof ((p_65 == &l_253 || p_65 == &g_57) ? 1 : 0), __extension__ ({ if (p_65 == &l_253 || p_65 == &g_57) ; else __assert_fail ("p_65 == &l_253 || p_65 == &g_57", "/tmp/tmpp80jue4_.c", 549, __extension__ __PRETTY_FUNCTION__); }));
            ((void) sizeof ((l_251 == 0 || l_251 == &g_136) ? 1 : 0), __extension__ ({ if (l_251 == 0 || l_251 == &g_136) ; else __assert_fail ("l_251 == 0 || l_251 == &g_136", "/tmp/tmpp80jue4_.c", 551, __extension__ __PRETTY_FUNCTION__); }));
        }
        ((void) sizeof ((l_79 == 0 || l_79 == &g_57) ? 1 : 0), __extension__ ({ if (l_79 == 0 || l_79 == &g_57) ; else __assert_fail ("l_79 == 0 || l_79 == &g_57", "/tmp/tmpp80jue4_.c", 555, __extension__ __PRETTY_FUNCTION__); }));
        ((void) sizeof ((g_123 == 0 || g_123 == &g_118) ? 1 : 0), __extension__ ({ if (g_123 == 0 || g_123 == &g_118) ; else __assert_fail ("g_123 == 0 || g_123 == &g_118", "/tmp/tmpp80jue4_.c", 557, __extension__ __PRETTY_FUNCTION__); }));
        ((void) sizeof ((l_251 == 0 || l_251 == &g_136) ? 1 : 0), __extension__ ({ if (l_251 == 0 || l_251 == &g_136) ; else __assert_fail ("l_251 == 0 || l_251 == &g_136", "/tmp/tmpp80jue4_.c", 558, __extension__ __PRETTY_FUNCTION__); }));
        (*l_326) = (*l_237);
        (*l_326) = l_330;
        ((void) sizeof ((l_107 == &g_118) ? 1 : 0), __extension__ ({ if (l_107 == &g_118) ; else __assert_fail ("l_107 == &g_118", "/tmp/tmpp80jue4_.c", 562, __extension__ __PRETTY_FUNCTION__); }));
        if ((~(safe_rshift_func_int8_t_s_s(p_64, (*l_99)))))
        {
            int8_t l_334 = 0xDBL;
            return l_334;
        }
        else
        {
            (**l_326) = (safe_rshift_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u(1UL, 0xBF49L)) == (p_62 == (-1L))), 13));
            (**l_236) = l_339;
        }
    }
    else
    {
        int32_t **l_342 = &l_330;
        for (l_172 = 0; (l_172 >= 26); l_172++)
        {
            l_342 = &p_63;
            ((void) sizeof ((l_342 == &p_63) ? 1 : 0), __extension__ ({ if (l_342 == &p_63) ; else __assert_fail ("l_342 == &p_63", "/tmp/tmpp80jue4_.c", 581, __extension__ __PRETTY_FUNCTION__); }));
            (*g_123) = 0x7FBA5C35L;
        }
        ((void) sizeof ((l_342 == &p_63 || l_342 == &l_330) ? 1 : 0), __extension__ ({ if (l_342 == &p_63 || l_342 == &l_330) ; else __assert_fail ("l_342 == &p_63 || l_342 == &l_330", "/tmp/tmpp80jue4_.c", 585, __extension__ __PRETTY_FUNCTION__); }));
        (*l_342) = (*l_342);
    }
    ((void) sizeof ((l_79 == 0 || l_79 == &g_57) ? 1 : 0), __extension__ ({ if (l_79 == 0 || l_79 == &g_57) ; else __assert_fail ("l_79 == 0 || l_79 == &g_57", "/tmp/tmpp80jue4_.c", 594, __extension__ __PRETTY_FUNCTION__); }));
    ((void) sizeof ((g_123 == 0 || g_123 == &g_118) ? 1 : 0), __extension__ ({ if (g_123 == 0 || g_123 == &g_118) ; else __assert_fail ("g_123 == 0 || g_123 == &g_118", "/tmp/tmpp80jue4_.c", 595, __extension__ __PRETTY_FUNCTION__); }));
    ((void) sizeof ((l_251 == 0 || l_251 == &g_136) ? 1 : 0), __extension__ ({ if (l_251 == 0 || l_251 == &g_136) ; else __assert_fail ("l_251 == 0 || l_251 == &g_136", "/tmp/tmpp80jue4_.c", 596, __extension__ __PRETTY_FUNCTION__); }));
    if ((+((((**g_280) != (void*)0) & (*p_63)) | 5L)))
    {
        for (l_174 = 0; (l_174 != 32); l_174 = safe_add_func_uint8_t_u_u(l_174, 4))
        {
            int32_t *l_346 = (void*)0;
            int32_t **l_347 = (void*)0;
            g_123 = l_346;
            ((void) sizeof ((g_123 == 0) ? 1 : 0), __extension__ ({ if (g_123 == 0) ; else __assert_fail ("g_123 == 0", "/tmp/tmpp80jue4_.c", 606, __extension__ __PRETTY_FUNCTION__); }));
            if ((*p_63))
                break;
            if ((safe_lshift_func_int16_t_s_s(((safe_mod_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(0xF1L, (safe_unary_minus_func_int32_t_s((p_62 != p_62))))), (safe_sub_func_int16_t_s_s(((safe_mod_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(((safe_mul_func_uint16_t_u_u(((((safe_sub_func_uint16_t_u_u(p_64, 0x0C53L)) || (&g_9 != p_63)) || ((&p_63 != (void*)0) == g_9)) <= (*l_330)), g_84)) == g_115), p_64)), p_64)) >= g_231), g_66)))) != p_62), 15)))
            {
                int32_t *l_365 = &g_118;
                l_365 = l_365;
            }
            else
            {
                return g_84;
            }
        }
    }
    else
    {
        (*l_339) = (!((p_62 != (safe_mod_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((g_115 | (((safe_lshift_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((0xEAL <= (-1L)), 6)), (safe_mul_func_uint16_t_u_u(l_379, g_231)))), (g_66 != (safe_rshift_func_int8_t_s_s(((void*)0 != &p_63), 7))))) | (-5L)) ^ 0xA64BL)), g_57)), 0x38L))) || g_66));
    }
    return (*l_339);
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_9;
    csmith_sink_ = g_57;
    csmith_sink_ = g_66;
    csmith_sink_ = g_84;
    csmith_sink_ = g_108;
    csmith_sink_ = g_115;
    csmith_sink_ = g_118;
    csmith_sink_ = g_231;
    csmith_sink_ = g_422;
    csmith_sink_ = g_629;
    platform_main_end(0,0);
    return 0;
}
