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
static int64_t g_28 = 1L;
static int32_t g_44 = (-1L);
static int32_t g_50 = 0xD0336D06L;
static int32_t *g_49 = &g_50;
static int64_t g_54 = 0L;
static int8_t g_61 = 0x73L;
static int64_t *g_67 = &g_54;
static int64_t **g_66 = &g_67;
static const int64_t *g_70 = &g_54;
static const int64_t **g_69 = &g_70;
static int64_t g_81 = 0xAB95DFEA44E0C42ELL;
static uint8_t g_89 = 0x28L;
static int16_t g_91 = 3L;
static int32_t g_125 = 0xB8760324L;
static uint8_t *g_142 = (void*)0;
static int64_t g_163 = 0x5F0EF6F4DFAC948DLL;
static int8_t g_165 = (-4L);
static uint64_t g_178 = 0xF4E952D19C51062BLL;
static uint32_t g_217 = 0UL;
static int8_t g_230 = 0x39L;
static uint16_t g_232 = 65528UL;
static uint8_t g_280 = 1UL;
static int16_t g_325 = 0x3F4EL;
static int16_t g_340 = 0L;
static int16_t g_347 = 0x3A59L;
static int32_t g_350 = 0xA6D7309AL;
static uint64_t g_372 = 0x953CCBC9E5EE9B9BLL;
static uint32_t g_390 = 0x05B78468L;
static uint8_t g_416 = 0x75L;
static const uint8_t *g_564 = &g_280;
static const uint8_t **g_563 = &g_564;
static const uint8_t ***g_562 = &g_563;
static int64_t g_565 = 0x38F014C9FEDD757BLL;
static int16_t g_588 = 1L;
static uint8_t **g_608 = (void*)0;
static uint8_t ***g_607 = &g_608;
static int16_t *g_655 = &g_340;
static int16_t **g_654 = &g_655;
static int16_t ***g_653 = &g_654;
static const uint8_t g_676 = 0x1EL;
static int64_t ***g_690 = &g_66;
static int64_t ****g_689 = &g_690;
static int64_t *****g_688 = &g_689;
static uint32_t *g_726 = (void*)0;
static uint32_t **g_725 = &g_726;
static uint16_t g_839 = 0x9BF8L;
static uint16_t * const g_838 = &g_839;
static uint16_t * const *g_837 = &g_838;
static const int64_t func_1(void);
static int32_t func_2(uint16_t p_3, int32_t p_4, int64_t p_5);
static uint16_t func_6(int16_t p_7);
static uint8_t func_10(uint32_t p_11, int16_t p_12, uint8_t p_13, uint64_t p_14, uint32_t p_15);
static int32_t func_17(uint32_t p_18, uint32_t p_19);
static uint32_t func_22(int32_t p_23, int8_t p_24, const uint8_t p_25, uint32_t p_26, uint32_t p_27);
static int32_t func_31(uint16_t p_32, uint32_t p_33);
static uint64_t func_36(int64_t * p_37, const int64_t * p_38);
static int32_t * func_40(int32_t p_41, int32_t * p_42, const uint32_t p_43);
static int32_t * func_45(int64_t * p_46, int8_t p_47, const int64_t * p_48);
static const int64_t func_1(void)
{
    int16_t l_16 = 0xA956L;
    int16_t *l_346 = &g_347;
    uint16_t l_934 = 0x0735L;
    int32_t *l_1017 = &g_50;
    int32_t **l_1018 = (void*)0;
    (*l_1017) = func_2(func_6((safe_mod_func_uint8_t_u_u(func_10(l_16, (((*l_346) = ((func_17((safe_add_func_uint32_t_u_u(func_22(g_28, g_28, l_16, (safe_rshift_func_int8_t_s_u(1L, 3)), g_28), (((safe_rshift_func_int16_t_s_u(((*l_346) = 0x334FL), 1)) & (safe_rshift_func_uint16_t_u_s(l_16, 12))) > g_350))), g_350) > l_16) && 0xD97A7B51L)) <= 0x9392L), l_16, l_16, l_16), l_16))), g_588, l_934);
    g_49 = l_1017;
    return (*l_1017);
}
static int32_t func_2(uint16_t p_3, int32_t p_4, int64_t p_5)
{
    const uint16_t l_935 = 0xCB4FL;
    int32_t l_936 = 4L;
    uint32_t *l_937 = &g_217;
    int8_t l_940 = 0xB9L;
    const int64_t *l_945 = &g_81;
    int8_t *l_957 = &g_61;
    int8_t **l_956 = &l_957;
    int64_t l_968 = (-1L);
    int16_t ***l_1003 = &g_654;
    int64_t l_1004 = (-1L);
    int32_t *l_1005 = &l_936;
    const int32_t l_1007 = 0xA8AF2646L;
    uint8_t ****l_1013 = &g_607;
    uint8_t ****l_1015 = &g_607;
    uint8_t *****l_1014 = &l_1015;
    uint8_t l_1016 = 0UL;
    l_936 = l_935;
    if ((l_937 == ((*g_725) = (*g_725))))
    {
        int64_t *l_941 = (void*)0;
        int8_t *l_944 = &l_940;
        int32_t *l_946 = (void*)0;
        int32_t **l_947 = &l_946;
        int8_t **l_955 = (void*)0;
        int8_t ***l_954 = &l_955;
        int8_t **l_959 = &l_944;
        int8_t ***l_958 = &l_959;
        int64_t **l_976 = &l_941;
        (*l_947) = l_946;
        (*l_947) = &l_936;
        l_936 = (&l_945 == ((***g_688) = &l_941));
        if (p_3)
        {
            int32_t *l_971 = &l_936;
            uint8_t *l_979 = &g_280;
            int32_t l_983 = 0x3140D3DDL;
            int64_t **l_989 = &g_67;
            for (g_230 = (-30); (g_230 > 16); g_230++)
            {
                if ((**l_947))
                    break;
                l_971 = &l_936;
                return p_5;
            }
            l_983 = (safe_mod_func_int8_t_s_s(((((*l_971) = ((*l_979) = (safe_add_func_uint8_t_u_u((((**g_689) = l_976) == &l_941), ((p_3 | (safe_lshift_func_uint8_t_u_s(l_936, 4))) >= 0x1EL))))) && (((~(((*l_979) = (safe_rshift_func_uint8_t_u_u((*l_971), 1))) ^ p_3)) ^ l_968) | (p_5 & 0xC1264B4BL))) < l_968), p_3));
            for (l_983 = (-24); (l_983 <= (-13)); ++l_983)
            {
                uint16_t l_986 = 0x99A4L;
                if (l_986)
                    break;
                for (g_232 = (-12); (g_232 <= 9); g_232 = safe_add_func_int8_t_s_s(g_232, 4))
                {
                    (**l_947) = p_3;
                    (*l_946) = l_940;
                }
            }
            (*g_690) = l_989;
        }
        else
        {
            int16_t l_990 = 0xF64AL;
            int64_t **l_999 = &g_67;
            int32_t l_1002 = 0L;
            (**l_947) = l_990;
            (**l_947) = p_4;
            (*l_946) = ((safe_mod_func_uint16_t_u_u((~(safe_sub_func_uint8_t_u_u((!0x975FD721L), (((***l_1003) = (safe_rshift_func_int16_t_s_u((l_968 >= 0x4611DA44L), (((*g_838) = (((((**g_690) = (***g_689)) == ((*l_999) = &p_5)) ^ 0xE7F72F8BL) ^ (safe_rshift_func_uint8_t_u_u(((l_1002 = l_935) || ((l_1002 | ((void*)0 == l_1003)) & g_28)), 6)))) >= l_1004)))) && p_5)))), 0x3A91L)) & 0x99F79059L);
        }
    }
    else
    {
        int32_t **l_1006 = (void*)0;
        g_69 = &l_945;
        g_49 = l_1005;
    }
    (*l_1005) = (l_1007 && ((((safe_lshift_func_int16_t_s_u((*g_655), 9)) || (*l_1005)) > g_588) & ((safe_rshift_func_int16_t_s_u(0xC865L, (+(l_1013 != ((*l_1014) = l_1013))))) > (*l_1005))));
    return l_1016;
}
static uint16_t func_6(int16_t p_7)
{
    uint8_t * const *l_882 = (void*)0;
    uint8_t * const **l_881 = &l_882;
    uint8_t * const ***l_880 = &l_881;
    int64_t **l_883 = (void*)0;
    uint8_t ****l_885 = &g_607;
    int64_t **l_888 = &g_67;
    int32_t l_889 = (-1L);
    uint32_t *l_890 = &g_217;
    int8_t *l_891 = &g_165;
    int32_t *l_892 = &l_889;
    int32_t l_895 = 0x8A29F5A4L;
    uint32_t l_909 = 0x72303308L;
    int32_t *l_910 = &g_50;
    uint8_t l_924 = 255UL;
    uint32_t l_929 = 0x21F77651L;
    uint32_t l_930 = 0x55DFAFFEL;
    uint32_t l_931 = 0x2036B83BL;
    int64_t l_932 = 0xC30A39973BEFACACLL;
    int32_t *l_933 = &l_895;
    (*l_892) = ((+p_7) >= ((*l_891) = (((((((l_880 != &l_881) != (((*g_690) = (**g_689)) == l_883)) ^ (((*l_890) = ((~(((*l_885) = (void*)0) == (void*)0)) < ((safe_add_func_int16_t_s_s((((void*)0 != l_888) > l_889), p_7)) == p_7))) && 0x9562A23AL)) | l_889) && p_7) || (**g_69)) != l_889)));
    (*l_910) = ((safe_add_func_uint16_t_u_u((l_895 != (safe_sub_func_uint64_t_u_u((safe_mod_func_int32_t_s_s((0xDDL && (safe_add_func_uint64_t_u_u(p_7, p_7))), (safe_lshift_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_u(p_7, p_7)) >= ((+(p_7 < 0x190351AB4A65F3DBLL)) != (safe_add_func_uint8_t_u_u(((*l_892) = ((**g_654) >= p_7)), l_909)))), p_7)))), 0x20BF55FC96901122LL))), 8L)) >= p_7);
    (*l_933) = (((safe_sub_func_int32_t_s_s(((*l_910) = ((p_7 | ((*l_910) ^ ((safe_sub_func_uint8_t_u_u((0UL < (*l_910)), (safe_rshift_func_uint16_t_u_u(((*l_892) && (((((safe_rshift_func_uint16_t_u_u((((*l_892) = (((((l_930 = ((safe_mod_func_int16_t_s_s(((*l_910) || (!(safe_rshift_func_uint16_t_u_s((((l_924 ^ (safe_lshift_func_int8_t_s_s(((safe_mod_func_uint16_t_u_u((&g_726 != (void*)0), (*l_892))) & l_929), 2))) && p_7) <= (*l_892)), 4)))), (*g_655))) & (*l_910))) & l_931) < 65535UL) >= g_178) >= p_7)) >= (*l_910)), (*l_910))) == l_932) == (*l_910)) == p_7) && (*g_838))), 5)))) <= p_7))) < (*l_910))), 0x27BB095DL)) >= 0x6CABFB45L) >= (***g_653));
    return (*l_910);
}
static uint8_t func_10(uint32_t p_11, int16_t p_12, uint8_t p_13, uint64_t p_14, uint32_t p_15)
{
    int32_t **l_405 = &g_49;
    uint8_t *l_408 = &g_89;
    uint8_t *l_409 = &g_280;
    int32_t l_410 = 0xCE72C066L;
    uint32_t * const l_413 = &g_217;
    uint8_t *l_414 = (void*)0;
    uint8_t *l_415 = &g_416;
    int32_t l_417 = 6L;
    uint8_t *l_418 = (void*)0;
    int32_t l_419 = (-6L);
    uint64_t l_450 = 0UL;
    uint8_t l_474 = 252UL;
    int64_t ***l_492 = &g_66;
    int32_t l_508 = 1L;
    int32_t *l_526 = &l_419;
    uint8_t * const *l_561 = (void*)0;
    uint8_t * const **l_560 = &l_561;
    const int8_t *l_628 = &g_230;
    const int8_t **l_627 = &l_628;
    uint32_t *l_724 = (void*)0;
    uint32_t **l_723 = &l_724;
    uint16_t *l_762 = &g_232;
    int32_t l_783 = 0x72D6C60AL;
    const uint32_t l_878 = 0UL;
    (*l_405) = &g_50;
    if (((safe_lshift_func_uint8_t_u_s((p_11 & (l_419 = ((((*g_49) = ((((*l_408) = (**l_405)) >= (p_11 > ((l_410 = (((void*)0 != &g_50) | (p_13 = ((*l_409) = p_15)))) | (safe_lshift_func_uint8_t_u_s(((*l_415) = (((void*)0 == l_413) != 0xB1AD04E0L)), p_15))))) != g_217)) >= l_417) & l_417))), p_15)) || (**l_405)))
    {
        uint8_t l_420 = 7UL;
        uint8_t **l_441 = (void*)0;
        int64_t *l_447 = &g_54;
        int32_t *l_452 = (void*)0;
        uint16_t *l_484 = &g_232;
        int8_t l_485 = 6L;
        int32_t *l_486 = &g_125;
        if (((l_420 = (*g_67)) <= g_325))
        {
            for (g_280 = 0; (g_280 != 58); g_280++)
            {
                return p_12;
            }
        }
        else
        {
            int16_t *l_431 = &g_347;
            int16_t **l_430 = &l_431;
            int16_t *l_432 = (void*)0;
            int16_t *l_433 = (void*)0;
            int8_t *l_434 = (void*)0;
            int8_t *l_435 = &g_61;
            int32_t *l_436 = &l_419;
            uint8_t ***l_442 = (void*)0;
            uint8_t **l_444 = &l_409;
            uint8_t ***l_443 = &l_444;
            uint64_t *l_451 = &l_450;
            int32_t **l_453 = &l_452;
            (*l_436) = (((*l_405) = &g_125) != &g_50);
            g_49 = (*l_405);
            (*l_436) = (*g_49);
            (*l_453) = (g_49 = &g_50);
        }
        for (p_14 = 13; (p_14 < 33); p_14++)
        {
            uint64_t l_470 = 0UL;
            int32_t *l_471 = (void*)0;
            (*l_405) = (*l_405);
            (*l_405) = &g_50;
        }
        (*l_405) = &g_50;
        (*l_486) = ((((**l_405) = (safe_mod_func_int64_t_s_s((l_474 & (7L < 0UL)), (**g_69)))) & 0x77L) ^ (((safe_mod_func_uint64_t_u_u((((((((+(-6L)) & p_12) > (((*l_484) = (1UL & (safe_lshift_func_int8_t_s_u((safe_add_func_int64_t_s_s(((((safe_mod_func_int16_t_s_s(p_14, p_15)) == 0xA70FA912836B3A9FLL) >= 0x11629752L) <= 18446744073709551614UL), g_340)), p_14)))) && g_350)) == p_11) ^ g_217) || 1UL) && 0xBFL), 18446744073709551615UL)) >= g_165) > l_485));
    }
    else
    {
        int8_t *l_496 = &g_61;
        int8_t **l_495 = &l_496;
        int8_t * const l_497 = &g_230;
        int32_t l_499 = 0x959EE6ECL;
        int64_t * const *l_505 = &g_67;
        int64_t * const **l_504 = &l_505;
        int64_t * const ***l_503 = &l_504;
        uint32_t l_509 = 0xC7BDA490L;
        uint32_t *l_527 = &g_390;
        int64_t *l_553 = (void*)0;
        int16_t *l_559 = &g_347;
        int16_t **l_558 = &l_559;
        int16_t ***l_557 = &l_558;
        int8_t l_611 = 4L;
        const int16_t *l_651 = (void*)0;
        const int16_t **l_650 = &l_651;
        const int16_t ***l_649 = &l_650;
        uint32_t * const l_708 = &g_390;
        int32_t l_763 = (-1L);
        int16_t *l_797 = &g_347;
        uint32_t ***l_844 = &l_723;
        int64_t ** const *l_849 = (void*)0;
        int64_t ** const **l_848 = &l_849;
        int64_t ** const ***l_847 = &l_848;
        uint8_t l_850 = 0x2BL;
        for (l_474 = (-30); (l_474 >= 53); l_474 = safe_add_func_uint16_t_u_u(l_474, 7))
        {
            (**l_405) = ((p_11 > (+((**l_405) & ((g_178 = (safe_add_func_int32_t_s_s(0x91B6409FL, p_15))) | ((void*)0 == l_492))))) || p_14);
        }
        (*g_49) = ((-7L) && (**l_405));
        if ((((safe_add_func_int8_t_s_s((((((*l_495) = &g_230) == l_497) ^ (((+l_499) >= g_28) != ((l_499 < ((~((void*)0 != l_503)) >= (safe_sub_func_int64_t_s_s(l_508, ((((255UL ^ g_50) < l_509) < 1L) || 18446744073709551610UL))))) || 0x4515674DFA43F426LL))) & 6UL), (**l_405))) <= 0UL) >= 0xB67642432746AA76LL))
        {
            int32_t *l_511 = &l_410;
            int32_t **l_510 = &l_511;
            const int64_t *l_529 = &g_54;
            int64_t *l_554 = &g_54;
            uint8_t ***l_605 = (void*)0;
            (*l_405) = &l_499;
            (*g_49) = ((p_13 <= 1L) || 18446744073709551611UL);
            (*l_510) = ((*l_405) = (*l_405));
            for (l_509 = 0; (l_509 != 35); l_509++)
            {
                uint16_t l_518 = 0x9E56L;
                int64_t *l_528 = &g_163;
                int32_t * const l_541 = &l_419;
                int64_t l_589 = 0x55AAE28E93201184LL;
                (*l_526) = ((safe_rshift_func_uint8_t_u_u((p_15 && p_13), ((safe_add_func_uint32_t_u_u(l_518, (safe_sub_func_uint16_t_u_u((+(*g_49)), (safe_lshift_func_uint8_t_u_s(((**l_405) > ((g_325 <= ((*l_497) = (g_217 < ((l_527 = &g_217) == &l_509)))) != (**l_405))), 7)))))) && (**l_405)))) || g_390);
                (*l_405) = &g_50;
                if ((safe_add_func_uint32_t_u_u(g_178, (safe_lshift_func_uint16_t_u_s((((g_390 = ((*l_413) = (safe_rshift_func_int8_t_s_u(g_28, 0)))) >= (**l_510)) >= g_44), (!l_518))))))
                {
                    uint16_t *l_539 = &g_232;
                    int64_t *l_540 = (void*)0;
                    int32_t *l_542 = (void*)0;
                    l_542 = l_541;
                }
                else
                {
                    int64_t ****l_544 = &l_492;
                    int64_t *****l_543 = &l_544;
                    (*l_543) = &l_492;
                    if ((*g_49))
                        break;
                    for (g_350 = (-25); (g_350 == (-17)); ++g_350)
                    {
                        if ((*l_511))
                            break;
                    }
                }
                for (g_372 = 0; (g_372 == 17); ++g_372)
                {
                    const uint32_t l_566 = 0xFFD2F679L;
                }
            }
        }
        else
        {
            const uint32_t l_625 = 0xFD580A79L;
            int32_t l_631 = 2L;
            uint8_t l_664 = 250UL;
            const uint16_t *l_683 = &g_232;
            uint16_t l_698 = 0x8F1EL;
            int64_t **l_714 = &g_67;
            int32_t l_742 = 0xEEF292DEL;
            uint32_t **l_754 = &l_724;
            int16_t l_789 = 0xB373L;
            int32_t **l_796 = (void*)0;
            if (((*g_49) = (l_499 = (safe_rshift_func_int8_t_s_u(4L, 2)))))
            {
                const int64_t ***l_614 = &g_69;
                int32_t l_622 = 1L;
                int8_t **l_626 = &l_496;
                uint16_t *l_629 = &g_232;
                uint64_t *l_630 = &g_178;
                const int16_t ****l_652 = &l_649;
                const int16_t **l_701 = &l_651;
                int16_t * const l_717 = &g_588;
                uint64_t l_751 = 0xD189D026C83002A9LL;
                uint32_t **l_755 = &l_724;
                (*l_614) = &g_70;
                (*l_526) = (((((*l_630) = (safe_add_func_int16_t_s_s(((!(*l_526)) > (safe_rshift_func_uint8_t_u_u(0x52L, 7))), ((*l_629) = (safe_rshift_func_uint16_t_u_u((((l_622 <= (***g_562)) <= (((safe_lshift_func_int16_t_s_s((l_625 || ((l_626 == l_627) >= g_350)), (*l_526))) | (*g_70)) || g_61)) < l_622), g_588)))))) == p_14) >= l_631) & p_13);
                (*g_49) = (((safe_sub_func_uint8_t_u_u(((p_12 == (safe_rshift_func_int8_t_s_u((safe_sub_func_int16_t_s_s(7L, (safe_sub_func_int64_t_s_s((((((void*)0 != &g_372) ^ ((safe_rshift_func_uint16_t_u_u(0UL, 7)) || (safe_sub_func_uint64_t_u_u((((safe_add_func_uint32_t_u_u((g_350 & ((*g_49) == (((**l_626) = ((**l_614) == (*l_505))) >= (*l_526)))), p_14)) ^ l_622) || l_622), 0x8EA864731757C944LL)))) <= l_499) || 0x37F816B1L), 0xFAA104E273E50713LL)))), p_11))) > g_565), g_28)) <= l_499) || 0x014085F8C4AC007FLL);
                if ((((((0xBC237A82L != (safe_rshift_func_int16_t_s_u((((void*)0 == &l_499) ^ l_625), 15))) != (p_15 || ((!(((*l_652) = l_649) != g_653)) || (safe_add_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((l_622 = p_13), p_12)), p_15))))) && p_13) < p_12) != 0xCF7FC1C7L))
                {
                    int64_t l_693 = (-1L);
                    uint32_t ***l_722 = (void*)0;
                    int32_t l_729 = 0x25E02E9BL;
                    if ((safe_rshift_func_int8_t_s_s((safe_sub_func_int32_t_s_s((l_664 ^ ((&g_178 != (void*)0) | (0xD489L ^ (!(safe_rshift_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_u((((safe_rshift_func_int8_t_s_u(((safe_add_func_int8_t_s_s(((&g_562 == (void*)0) >= 0x7E3CL), (safe_add_func_uint8_t_u_u(1UL, (&g_607 == &g_562))))) || 0L), 7)) ^ 0x25A535950E51FD21LL) >= g_165), 5)) & l_611), l_631)))))), 4294967286UL)), 6)))
                    {
                        (*l_526) = (p_13 || (**g_654));
                        (*l_405) = &l_622;
                        (*l_614) = &g_70;
                        return l_509;
                    }
                    else
                    {
                        const uint16_t **l_684 = &l_683;
                        int32_t l_696 = (-1L);
                        int32_t *l_697 = &g_125;
                        (*l_526) = (((*l_629) = (g_676 || ((safe_sub_func_uint64_t_u_u((+(+l_622)), (4294967287UL == l_622))) < ((((*l_684) = l_683) == (void*)0) < ((**g_562) == (void*)0))))) < (safe_mod_func_int32_t_s_s((((*l_495) = &g_61) != (void*)0), 0xF3D00703L)));
                        (*g_49) = (*g_49);
                        (*l_697) = (l_499 = (safe_unary_minus_func_int8_t_s(((((g_688 == &l_503) && ((**l_405) = (safe_lshift_func_uint16_t_u_s((4294967292UL < (((l_625 | (((0x5A098B0DL < (((*g_67) = ((l_693 | ((safe_sub_func_int16_t_s_s((6UL == ((*l_527) = l_622)), ((((*l_526) = (((*l_497) = (((((**l_495) = 8L) != 7L) != (**l_405)) == (*g_49))) || l_693)) & (-1L)) || l_611))) & l_696)) == l_696)) || p_12)) & g_28) < p_12)) > (**g_563)) && l_664)), 9)))) >= p_12) || p_13))));
                        (**l_405) = ((*l_526) = l_698);
                    }
                    if (((*g_49) = (*g_49)))
                    {
                        (*l_405) = (void*)0;
                    }
                    else
                    {
                        uint32_t **l_707 = &l_527;
                        (**l_405) = (((*l_497) = l_622) >= ((p_13 = (safe_rshift_func_uint8_t_u_u(((((*g_653) != l_701) == ((*l_526) = (**l_405))) || ((!(safe_rshift_func_int16_t_s_s((((safe_sub_func_uint32_t_u_u((((*l_630) = (((*l_707) = (void*)0) != l_708)) || (((0xC8L ^ ((safe_rshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_u(((**l_558) = ((*g_655) = (*g_655))), 11)), 0)) | (!0UL))) ^ g_165) <= l_611)), 0UL)) ^ l_625) & (-9L)), 5))) < 0x750B0FD6895669C6LL)), 1))) > l_693));
                        (***g_688) = l_714;
                    }
                    if ((safe_lshift_func_int16_t_s_u(((l_717 == (void*)0) | (((((safe_add_func_uint64_t_u_u(((l_625 <= (safe_unary_minus_func_int32_t_s(l_611))) >= 4UL), (+(**g_563)))) != ((l_723 = &l_527) == g_725)) == ((*l_630) = ((safe_rshift_func_uint8_t_u_u(l_622, l_729)) >= g_61))) | g_91) || (*l_526))), 8)))
                    {
                        int32_t **l_730 = &l_526;
                        int64_t *l_731 = &g_163;
                        (*l_730) = ((*l_405) = (*l_405));
                        (*l_405) = (*l_730);
                        return l_664;
                    }
                    else
                    {
                        int64_t *l_748 = &g_54;
                        int16_t **l_749 = &g_655;
                        g_50 = (safe_lshift_func_int8_t_s_u(g_89, 1));
                        (*l_526) = (safe_mod_func_int16_t_s_s((**g_654), (safe_unary_minus_func_int16_t_s((l_748 != &l_693)))));
                        (*l_526) = ((*g_653) == l_749);
                    }
                }
                else
                {
                    int32_t *l_750 = &l_419;
                    (**l_405) = p_14;
                    (*l_405) = &g_125;
                    (*l_405) = l_750;
                    (*l_405) = &l_622;
                }
            }
            else
            {
                int64_t *l_775 = (void*)0;
                int32_t *l_786 = (void*)0;
                int32_t l_809 = (-1L);
                (*l_405) = (void*)0;
                for (g_54 = 0; (g_54 < (-8)); --g_54)
                {
                    int64_t *l_774 = (void*)0;
                    int32_t l_782 = 0x0EFC14EFL;
                    int8_t *l_784 = (void*)0;
                    int8_t *l_785 = &g_61;
                    const uint16_t l_791 = 65535UL;
                    int16_t *l_798 = &g_588;
                    int64_t l_812 = 4L;
                    if ((((*l_785) = ((safe_mod_func_int8_t_s_s((((**g_654) = ((safe_rshift_func_int16_t_s_s((((safe_lshift_func_int8_t_s_u(((safe_sub_func_uint8_t_u_u((0x71E9L == (p_11 != ((*l_708) = (((*l_714) = l_774) == l_775)))), (g_230 = (&g_654 != &g_654)))) || p_14), 1)) >= (((*l_413) = (safe_add_func_uint32_t_u_u(((safe_add_func_int32_t_s_s((safe_rshift_func_int8_t_s_s((-8L), ((-1L) ^ l_664))), 0xB080BAFBL)) & p_15), l_782))) == l_782)) != 65533UL), 5)) | (*l_526))) & l_763), (*l_526))) || l_783)) >= p_11))
                    {
                        int32_t *l_790 = &g_50;
                        (*l_405) = l_786;
                        (*l_405) = &l_782;
                        (**l_405) = (safe_add_func_int64_t_s_s((safe_sub_func_int16_t_s_s((**g_654), ((l_796 != &g_49) && ((l_797 = &p_12) != l_798)))), (((*l_714) = (void*)0) == (void*)0)));
                    }
                    else
                    {
                        (*l_526) = p_14;
                        if (p_13)
                            break;
                        (*l_405) = l_786;
                    }
                    (*l_526) = ((safe_mod_func_int32_t_s_s((((safe_mod_func_int8_t_s_s(((((*l_497) = g_178) > l_809) == ((*l_415) = (0x239CL > 1L))), 0x58L)) >= g_390) != p_12), (p_15 | (safe_lshift_func_uint8_t_u_s(2UL, 2))))) == 0x5AL);
                    l_499 = l_812;
                    for (l_763 = (-1); (l_763 >= (-29)); l_763 = safe_sub_func_uint16_t_u_u(l_763, 3))
                    {
                        l_499 = (p_12 != p_13);
                        return (*g_564);
                    }
                }
                (*l_405) = &g_50;
            }
            for (g_163 = 0; (g_163 > (-27)); g_163 = safe_sub_func_uint32_t_u_u(g_163, 6))
            {
                uint64_t l_817 = 0x76AE7EE241F77DABLL;
                uint16_t * const *l_834 = &l_762;
                uint16_t * const **l_835 = &l_834;
                uint16_t * const **l_836 = (void*)0;
                (*l_526) = (((*l_409) = ((l_817 & ((safe_sub_func_int32_t_s_s(l_509, (((g_390 >= ((g_325 || (safe_sub_func_uint32_t_u_u((l_499 = (safe_sub_func_uint8_t_u_u(((((safe_sub_func_int32_t_s_s(l_611, (safe_add_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(g_89, (safe_add_func_int64_t_s_s((safe_rshift_func_uint16_t_u_s((*l_526), 3)), ((((*l_835) = l_834) == (g_837 = &l_762)) == p_13))))), p_14)))) || p_11) | 1L) > (-1L)), p_15))), 0UL))) == p_13)) && l_817) < (*g_838)))) >= (-8L))) <= 1L)) || 5L);
                return p_14;
            }
        }
        if (((-4L) == (safe_lshift_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(((0x07L != ((*l_408) = (&g_726 == &g_726))) | (((((&l_413 == ((*l_844) = (void*)0)) == (safe_lshift_func_int16_t_s_s((-1L), ((*l_526) == (((l_499 = (((*l_847) = (void*)0) == (void*)0)) >= (***g_653)) < p_11))))) & 0x8653L) >= p_15) <= (*g_838))), l_850)), (*l_526)))))
        {
            return l_509;
        }
        else
        {
            int64_t l_852 = 0xA94C51FBAE2CF603LL;
            int32_t *l_853 = &g_50;
            uint32_t **l_876 = &l_724;
            int32_t l_877 = (-1L);
            l_852 = (~p_14);
            (*l_405) = l_853;
            (*l_405) = &g_125;
        }
    }
    return (**l_405);
}
static int32_t func_17(uint32_t p_18, uint32_t p_19)
{
    int32_t * const l_351 = (void*)0;
    int32_t **l_352 = &g_49;
    const uint8_t *l_357 = &g_280;
    const uint8_t **l_358 = &l_357;
    uint8_t *l_359 = &g_280;
    uint64_t *l_360 = &g_178;
    int32_t l_370 = (-3L);
    uint64_t *l_371 = &g_372;
    int64_t ***l_381 = &g_66;
    int64_t *** const *l_380 = &l_381;
    int32_t l_387 = 0x2B7A4138L;
    const int32_t l_400 = 0xE3640A0DL;
    int32_t l_403 = 0x5E78A202L;
    (*l_352) = l_351;
    l_370 = (((0xD8CBC5EB3F9A5F5DLL ^ (p_18 && (safe_sub_func_int32_t_s_s((safe_mod_func_uint64_t_u_u(((*l_360) = ((((*l_358) = l_357) != l_359) || (-6L))), ((*l_371) = (safe_rshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(g_325, ((((safe_add_func_uint16_t_u_u((((g_217 >= (-4L)) < (~(p_18 > l_370))) > g_125), p_18)) >= 0x213DL) & 0x3DL) & g_163))), 2)), 15))))), 0x346CF623L)))) >= (*g_67)) & (-6L));
    for (g_217 = 0; (g_217 != 42); g_217 = safe_add_func_int64_t_s_s(g_217, 3))
    {
        int64_t ****l_379 = (void*)0;
        int64_t *** const **l_382 = &l_380;
        int32_t l_383 = 0x6207B4A4L;
        int16_t *l_384 = &g_347;
        uint32_t *l_388 = (void*)0;
        uint32_t *l_389 = &g_390;
        (*l_352) = &g_50;
        (*g_49) = (safe_lshift_func_int16_t_s_s(((*l_384) = (p_19 > (((5UL | 0x2685L) >= g_217) || (safe_lshift_func_uint8_t_u_s(((l_379 == ((*l_382) = l_380)) | l_383), 1))))), ((safe_lshift_func_uint8_t_u_u(((l_387 & ((*l_389) = 0UL)) || g_61), (**l_352))) & p_18)));
    }
    for (g_61 = (-29); (g_61 == 6); g_61++)
    {
        uint32_t l_396 = 0UL;
        int32_t l_404 = (-10L);
        l_404 = ((~(p_19 > ((g_44 == ((safe_mod_func_uint16_t_u_u((l_396 >= l_396), (l_396 & (safe_add_func_int16_t_s_s((+((l_400 >= p_19) | (safe_add_func_int8_t_s_s(0x84L, p_19)))), p_18))))) != p_18)) >= p_19))) >= l_403);
    }
    return p_18;
}
static uint32_t func_22(int32_t p_23, int8_t p_24, const uint8_t p_25, uint32_t p_26, uint32_t p_27)
{
    int64_t *l_35 = &g_28;
    uint64_t *l_177 = &g_178;
    int32_t *l_291 = (void*)0;
    int32_t *l_292 = &g_125;
    uint32_t l_305 = 0xBB388EDFL;
    int32_t *l_319 = &g_125;
    uint64_t l_321 = 0x25979984349FD6D7LL;
    (*l_292) = func_31((0x9B58L > (+(((((*l_35) = (-1L)) <= func_36(l_35, l_35)) || ((safe_mod_func_int32_t_s_s(0x5583E1B1L, p_26)) >= (((*l_177) = ((((safe_mod_func_uint64_t_u_u((&g_49 == &g_49), 18446744073709551612UL)) == 0x62L) >= (-5L)) > g_91)) || g_91))) || 0x3730L))), p_24);
    g_49 = l_292;
    for (p_27 = (-29); (p_27 >= 53); ++p_27)
    {
        int64_t l_308 = 0x94BA52184DD8C9BALL;
        int32_t l_326 = 0x38199B37L;
        uint16_t l_342 = 0x13B3L;
        if (((safe_add_func_uint32_t_u_u(((p_27 <= ((((safe_add_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(p_24, ((((*l_292) & (safe_sub_func_int32_t_s_s((-1L), p_24))) > (((safe_add_func_uint16_t_u_u(4UL, l_305)) > ((0xE311F925L <= (((*l_177) = ((safe_mod_func_uint8_t_u_u(((l_308 ^ g_165) == 0L), (*l_292))) & (-1L))) != 0xF76A9F0FD8509223LL)) && 1L)) >= 1L)) && g_81))), 0x34L)) ^ l_308) <= 0x0FA6L) || p_26)) >= 0x8535L), p_24)) && 0x2DA7L))
        {
            return p_27;
        }
        else
        {
            int32_t *l_309 = &g_50;
            int32_t **l_310 = &g_49;
            (*l_310) = (l_309 = l_292);
            for (g_91 = 0; (g_91 == 12); g_91 = safe_add_func_uint32_t_u_u(g_91, 7))
            {
                uint16_t l_318 = 65535UL;
                uint8_t *l_322 = &g_280;
                int16_t *l_323 = (void*)0;
                int16_t *l_324 = &g_325;
                int16_t *l_339 = &g_340;
                int8_t *l_341 = &g_230;
                int32_t l_343 = 0L;
                if (((l_326 = (0x75L == (+((*l_309) > (safe_add_func_uint8_t_u_u(1UL, (((safe_rshift_func_uint8_t_u_u(((0L ^ l_318) == (((((void*)0 != l_319) | ((!((*l_324) = (p_27 | ((((*l_322) = (((g_44 < p_27) < (-1L)) > l_321)) ^ (*l_309)) > p_27)))) > 0x162682172DE9098ELL)) == 0UL) ^ g_61)), 5)) <= 0xF1D9F503L) == 0UL))))))) == 0xADA181322219A26BLL))
                {
                    (*l_310) = &g_50;
                    (*l_310) = &g_125;
                }
                else
                {
                    (*g_49) = (*g_49);
                    if ((**l_310))
                        continue;
                    (*l_310) = (void*)0;
                }
                l_343 = (safe_add_func_uint8_t_u_u((((safe_mod_func_int16_t_s_s((p_24 > (((g_325 <= (!p_23)) | g_54) != 9L)), 1L)) < (safe_mod_func_uint32_t_u_u((p_23 != ((safe_lshift_func_int16_t_s_s((((*l_341) = (safe_sub_func_uint16_t_u_u((+l_326), ((*l_339) = (*l_309))))) && (-3L)), 14)) <= p_26)), l_308))) <= l_342), (*l_309)));
                return g_325;
            }
        }
    }
    return g_81;
}
static int32_t func_31(uint16_t p_32, uint32_t p_33)
{
    int32_t **l_179 = &g_49;
    int16_t l_186 = 0xF92FL;
    int64_t **l_189 = (void*)0;
    int64_t ***l_190 = &g_66;
    int16_t *l_203 = &l_186;
    int16_t **l_202 = &l_203;
    int16_t ***l_201 = &l_202;
    const uint32_t l_204 = 0x5FEEA2D5L;
    int16_t *l_205 = &g_91;
    int32_t l_215 = (-9L);
    uint8_t *l_222 = &g_89;
    (*l_179) = (void*)0;
    (*l_179) = (*l_179);
    if ((safe_sub_func_uint16_t_u_u((((safe_rshift_func_int8_t_s_s(((safe_add_func_uint8_t_u_u((l_186 >= ((safe_add_func_int32_t_s_s((0xDBD15610L || ((l_189 == ((*l_190) = l_189)) & ((safe_sub_func_int16_t_s_s((safe_add_func_uint64_t_u_u(0x9E82CB70C1D3726BLL, (((*l_205) = (l_186 == (safe_sub_func_uint64_t_u_u((safe_add_func_uint16_t_u_u(p_32, ((safe_mod_func_uint32_t_u_u((0x67040F24L | ((l_201 != &l_202) < l_204)), p_32)) == p_32))), 0x73E3C2ACCF6335B1LL)))) <= p_33))), 2L)) < p_33))), p_32)) || p_33)), p_33)) && 0x29D4CF23L), 4)) == p_32) <= 0L), g_89)))
    {
        int64_t l_206 = 0x858CDCFD110C5E2DLL;
        uint32_t *l_216 = &g_217;
        uint8_t **l_223 = &g_142;
        uint64_t l_224 = 0x386943B6AC625639LL;
        int32_t l_229 = 1L;
        uint16_t *l_231 = &g_232;
        int32_t *l_233 = &g_50;
        g_50 = (l_206 < (safe_mod_func_int16_t_s_s((safe_sub_func_int32_t_s_s(((g_163 && (((safe_sub_func_int8_t_s_s((((*g_67) = 0L) || ((safe_rshift_func_int8_t_s_u(g_50, 4)) != (((((*l_216) = (p_33 & (l_215 = p_32))) < g_178) ^ (~l_206)) == (((~(safe_add_func_int64_t_s_s(l_206, l_206))) ^ l_206) < p_32)))), 0x4AL)) != 0L) || g_44)) > p_32), g_178)), p_33)));
        (*l_233) = (((((((&g_70 == ((*l_190) = (*l_190))) < (((*l_223) = l_222) != (void*)0)) <= ((g_61 | ((*g_67) = (((l_224 = l_206) > 0x20E9FE6BL) & ((*l_231) = (g_230 = (l_229 = (safe_sub_func_uint16_t_u_u((p_32 = (safe_sub_func_uint64_t_u_u(0UL, (**g_69)))), p_33)))))))) || 0xF28D7A2FL)) == p_33) != l_206) || p_32) == 2L);
        for (l_206 = (-30); (l_206 != (-19)); ++l_206)
        {
            const uint32_t l_237 = 0UL;
            if (((+l_237) <= 0x5996908100F8154ELL))
            {
                return g_61;
            }
            else
            {
                if (l_237)
                    break;
            }
        }
    }
    else
    {
        uint32_t l_238 = 7UL;
        int16_t *l_239 = &l_186;
        int32_t *l_256 = &g_125;
        if (l_238)
        {
            uint32_t l_242 = 0xF002BF45L;
            const int64_t *l_255 = &g_28;
            (*l_179) = &g_125;
            if ((p_33 | (safe_add_func_int8_t_s_s((safe_sub_func_int64_t_s_s((safe_lshift_func_int16_t_s_s((**l_179), 2)), (&g_91 != (void*)0))), (+(((void*)0 != &g_142) >= (((0xD295L < l_238) != (safe_sub_func_int32_t_s_s((*g_49), (*g_49)))) ^ p_32)))))))
            {
                int64_t l_254 = (-1L);
                for (g_61 = 0; (g_61 >= 6); g_61++)
                {
                    l_254 = p_33;
                }
            }
            else
            {
                uint16_t *l_259 = &g_232;
                uint8_t **l_260 = &g_142;
                (*l_179) = l_256;
                (**l_179) = (safe_add_func_uint16_t_u_u(((*l_259) = p_32), (((*l_260) = &g_89) != l_222)));
            }
            (*l_179) = l_256;
            (*l_179) = (*l_179);
        }
        else
        {
            int32_t *l_262 = (void*)0;
            (*l_256) = ((+(&g_91 == (void*)0)) != 0x9C4DL);
            (*l_179) = (l_262 = l_256);
        }
        for (g_44 = 0; (g_44 >= 18); g_44 = safe_add_func_uint64_t_u_u(g_44, 8))
        {
            int16_t *l_274 = (void*)0;
            int32_t l_279 = (-1L);
            int32_t *l_281 = &l_279;
        }
    }
    return p_32;
}
static uint64_t func_36(int64_t * p_37, const int64_t * p_38)
{
    uint64_t l_39 = 18446744073709551615UL;
    int64_t *l_53 = &g_54;
    int32_t l_59 = 0x771B7056L;
    if (l_39)
    {
        int64_t **l_55 = (void*)0;
        int64_t **l_56 = (void*)0;
        int64_t **l_57 = &l_53;
        int32_t l_58 = 1L;
        int8_t *l_60 = &g_61;
        int32_t *l_145 = &l_59;
        uint8_t *l_156 = (void*)0;
        int16_t *l_161 = (void*)0;
        uint64_t *l_164 = (void*)0;
        uint64_t l_166 = 1UL;
        l_145 = func_40(g_44, func_45(p_37, ((*l_60) = (0x4236L != (((g_49 == (void*)0) & (safe_lshift_func_uint16_t_u_u((((*l_57) = l_53) == &g_54), 14))) && ((l_58 == ((l_59 = (g_54 | g_50)) != g_50)) <= 6L)))), &g_54), g_44);
        (*l_145) = (((*l_145) ^ ((safe_rshift_func_int16_t_s_u((safe_add_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_u(((safe_mod_func_int16_t_s_s((safe_add_func_uint32_t_u_u((g_44 != ((l_156 = (void*)0) == l_60)), 0L)), (safe_lshift_func_int8_t_s_s(((g_165 = ((safe_add_func_int32_t_s_s(((*l_145) || ((void*)0 == l_161)), (!(g_163 = g_81)))) ^ 0x27105428794F9328LL)) > g_50), (*l_145))))) && 0x2BE9L), g_91)) & l_59), (*l_145))), 7)) != l_59)) > l_166);
    }
    else
    {
        uint32_t l_167 = 0xEE9F7D83L;
        int16_t *l_170 = (void*)0;
        int16_t **l_169 = &l_170;
        int16_t ***l_168 = &l_169;
        int32_t *l_171 = &g_125;
        int32_t **l_172 = &g_49;
        (*g_49) = l_167;
        (*l_168) = (void*)0;
        (*l_172) = l_171;
        (**l_172) = ((void*)0 == &g_91);
    }
    return l_59;
}
static int32_t * func_40(int32_t p_41, int32_t * p_42, const uint32_t p_43)
{
    int16_t *l_123 = &g_91;
    int32_t *l_124 = &g_125;
    int64_t l_130 = 0xD738A40F947660C9LL;
    int64_t *l_134 = &g_81;
    int32_t l_137 = (-7L);
    (*l_124) = ((*p_42) = (0L | (g_44 || ((*l_123) = p_41))));
    for (g_89 = 0; (g_89 == 18); g_89 = safe_add_func_int16_t_s_s(g_89, 4))
    {
        int64_t **l_131 = &g_67;
        int64_t ***l_132 = (void*)0;
        int64_t ***l_133 = &l_131;
        (*p_42) = ((safe_add_func_uint8_t_u_u(l_130, p_43)) <= (((*l_133) = l_131) != (void*)0));
    }
    (*l_124) = ((*p_42) = ((*l_124) <= ((&l_130 != ((*g_66) = l_134)) >= (p_41 & (safe_mod_func_int32_t_s_s(((l_137 > (((safe_add_func_uint16_t_u_u((safe_add_func_int8_t_s_s((((g_142 = &g_89) != &g_89) == (*l_124)), (safe_mod_func_int16_t_s_s((((((p_41 || p_43) & (*l_124)) == 9L) <= 0L) | g_50), p_41)))), g_50)) ^ p_41) < 0xEEL)) >= (*l_124)), 0x96171667L))))));
    p_42 = &p_41;
    return &g_125;
}
static int32_t * func_45(int64_t * p_46, int8_t p_47, const int64_t * p_48)
{
    const int32_t *l_62 = (void*)0;
    const int32_t **l_63 = &l_62;
    int64_t ***l_68 = &g_66;
    const int64_t **l_71 = (void*)0;
    int32_t l_76 = (-1L);
    uint16_t *l_79 = (void*)0;
    uint16_t *l_80 = (void*)0;
    int32_t l_82 = 0xF85D55A9L;
    uint8_t l_85 = 0x51L;
    uint8_t *l_86 = &l_85;
    int8_t *l_87 = &g_61;
    uint8_t *l_88 = &g_89;
    int16_t *l_90 = &g_91;
    (*l_63) = l_62;
    if (((safe_mod_func_int16_t_s_s((((*l_90) = (((*l_88) = ((((*l_68) = g_66) == (l_71 = g_69)) & ((safe_add_func_uint8_t_u_u((((*l_86) = (safe_add_func_int32_t_s_s(((l_76 = g_44) > (safe_sub_func_uint16_t_u_u((l_82 = (g_81 = 1UL)), p_47))), (safe_mod_func_int8_t_s_s(l_85, 0xE0L))))) > 0L), ((*l_87) = p_47))) ^ g_44))) != p_47)) || g_81), p_47)) >= g_44))
    {
        int64_t *** const l_106 = &g_66;
        int64_t ****l_107 = &l_68;
        int32_t l_113 = 0x9B16E5D1L;
        (*g_49) = (safe_rshift_func_uint8_t_u_s(((safe_lshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_s((safe_sub_func_int64_t_s_s((254UL == (g_61 = (((safe_rshift_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_u((((0x1789L ^ ((p_47 != (safe_lshift_func_int16_t_s_s(((l_106 == ((*l_107) = &g_66)) || (safe_lshift_func_uint8_t_u_u(((((((((**l_68) != (**l_68)) == (safe_unary_minus_func_int8_t_s((safe_add_func_int16_t_s_s(0L, (p_47 <= g_81)))))) <= 0x2BE3L) != p_47) ^ l_113) <= p_47) == l_113), 6))), 6))) <= g_54)) < g_61) ^ g_44), 8)) & g_61), g_44)) || p_47) | 0x74L))), g_50)), 10)), g_91)) || g_50), g_50));
    }
    else
    {
        int32_t *l_122 = &l_76;
        for (p_47 = 0; (p_47 != (-23)); --p_47)
        {
            int32_t *l_116 = &l_82;
            if ((*g_49))
            {
                return &g_50;
            }
            else
            {
                int32_t l_121 = 1L;
                for (g_54 = 0; (g_54 < (-14)); g_54 = safe_sub_func_int32_t_s_s(g_54, 3))
                {
                    (*l_63) = &g_50;
                    (*l_63) = (*l_63);
                    (*l_116) = ((*g_66) == p_48);
                }
                (*g_49) = (safe_lshift_func_int16_t_s_s(((l_121 != g_44) || 0x3AL), 7));
            }
        }
        (*l_68) = (*l_68);
        (*l_63) = l_122;
        (*g_49) = p_47;
    }
    (*g_49) = (&l_71 != &l_71);
    (*g_49) = (p_47 < (((((*p_48) | 0x20B1A556116ABE3FLL) && g_91) && ((*p_48) | (l_76 <= (0x0595L != ((l_79 != l_90) & p_47))))) == 0xE16DL));
    return &g_50;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    g_67 = 0;
    g_66 = 0;
    g_69 = 0;
    g_837 = 0;
    csmith_sink_ = g_28;
    csmith_sink_ = g_44;
    csmith_sink_ = g_50;
    csmith_sink_ = g_54;
    csmith_sink_ = g_61;
    csmith_sink_ = g_81;
    csmith_sink_ = g_89;
    csmith_sink_ = g_91;
    csmith_sink_ = g_125;
    csmith_sink_ = g_163;
    csmith_sink_ = g_165;
    csmith_sink_ = g_178;
    csmith_sink_ = g_217;
    csmith_sink_ = g_230;
    csmith_sink_ = g_232;
    csmith_sink_ = g_280;
    csmith_sink_ = g_325;
    csmith_sink_ = g_340;
    csmith_sink_ = g_347;
    csmith_sink_ = g_350;
    csmith_sink_ = g_372;
    csmith_sink_ = g_390;
    csmith_sink_ = g_416;
    csmith_sink_ = g_565;
    csmith_sink_ = g_588;
    csmith_sink_ = g_676;
    csmith_sink_ = g_839;
    platform_main_end(0,0);
    return 0;
}
