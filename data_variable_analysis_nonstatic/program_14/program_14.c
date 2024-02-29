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
static int16_t g_9 = 0x756A;
static uint8_t g_58 = 1U;
static int32_t g_61 = 9;
static int16_t g_122 = 0x38BB;
static uint8_t g_129 = 0U;
static uint8_t ***g_130 = (void*)0;
static int8_t g_140 = 0x4D;
static int32_t *g_161 = &g_61;
static uint16_t g_180 = 0x99EB;
static uint32_t g_183 = 0x598A95DA;
static int32_t g_208 = 1;
static int32_t g_211 = 0xD91451F1;
static uint32_t *g_226 = (void*)0;
static int16_t *g_239 = &g_122;
static int16_t **g_238 = &g_239;
static int32_t *g_245 = &g_211;
static uint32_t g_268 = 4294967295U;
static uint16_t g_294 = 0x5808;
static int16_t g_341 = 0x9D35;
static int32_t **g_369 = &g_245;
static int32_t ***g_368 = &g_369;
static int32_t ****g_367 = &g_368;
static int32_t *****g_366 = &g_367;
static uint32_t g_418 = 0x2071430A;
static int8_t *g_432 = &g_140;
static int8_t **g_431 = &g_432;
static int32_t g_518 = 7;
static uint8_t **g_537 = (void*)0;
static uint8_t ***g_536 = &g_537;
static int16_t g_540 = (-1);
static uint16_t **g_630 = (void*)0;
static uint16_t ***g_629 = &g_630;
static uint32_t g_642 = 1U;
static int32_t g_687 = 0xCCCD61FA;
static int8_t ***g_747 = &g_431;
static int8_t ****g_746 = &g_747;
static int16_t g_845 = (-7);
static int32_t g_846 = 0x92003D50;
static int16_t ***g_915 = (void*)0;
static int16_t ****g_914 = &g_915;
static uint32_t g_933 = 4294967286U;
static uint32_t **g_1073 = (void*)0;
static uint32_t func_1(void);
static int8_t func_14(uint16_t p_15, int32_t p_16);
static int16_t func_21(uint8_t p_22);
static int16_t func_30(uint16_t p_31, int8_t p_32, int16_t p_33, int16_t p_34, int32_t p_35);
static int8_t func_50(int32_t p_51);
static int32_t func_52(int32_t p_53, uint8_t p_54, int32_t p_55, uint8_t p_56);
static int32_t func_64(uint16_t p_65, int8_t p_66, int32_t p_67, int16_t p_68, int32_t * p_69);
static uint8_t func_71(uint32_t p_72, int8_t p_73, int32_t ** p_74);
static int32_t ** func_76(int32_t * p_77, int8_t p_78, int32_t p_79, uint8_t * p_80);
static int32_t * func_81(int8_t p_82);
static uint32_t func_1(void)
{
    uint32_t l_4 = 2U;
    int32_t l_1228 = 1;
    int32_t l_1242 = 0x74EAA668;
    l_1242 = (safe_lshift_func_int16_t_s_u(l_4, (safe_rshift_func_int16_t_s_u((+((!g_9) > l_4)), ((safe_lshift_func_int16_t_s_u(g_9, 12)) && (((l_4 != func_14(((safe_rshift_func_uint8_t_u_s(l_4, (safe_lshift_func_uint16_t_u_s(g_9, (l_4 != func_21(l_4)))))) <= 0x8D3C), l_1228)) ^ (-9)) <= 0xF0419111))))));
    ((void) sizeof ((g_161 == &g_61 || g_161 == 0) ? 1 : 0), __extension__ ({ if (g_161 == &g_61 || g_161 == 0) ; else __assert_fail ("g_161 == &g_61 || g_161 == 0", "/tmp/tmpb6qjivzw.c", 91, __extension__ __PRETTY_FUNCTION__); }));
    ((void) sizeof ((g_914 == &g_915 || g_914 == 0) ? 1 : 0), __extension__ ({ if (g_914 == &g_915 || g_914 == 0) ; else __assert_fail ("g_914 == &g_915 || g_914 == 0", "/tmp/tmpb6qjivzw.c", 93, __extension__ __PRETTY_FUNCTION__); }));
    return l_1228;
}
static int8_t func_14(uint16_t p_15, int32_t p_16)
{
    uint32_t **l_1235 = &g_226;
    int32_t l_1238 = 0x43CC19C5;
    int32_t l_1239 = (-6);
    int32_t *l_1240 = (void*)0;
    int32_t *l_1241 = &g_687;
    (*l_1241) = (safe_lshift_func_int8_t_s_u((safe_rshift_func_int16_t_s_s((((safe_lshift_func_uint8_t_u_s((0xDABD78C7 != (248U != (l_1235 != &g_226))), (((safe_div_func_int16_t_s_s(((0x24EBC8FF ^ ((0x34BAB3B3 >= (l_1238 = p_16)) >= (p_16 < p_15))) < 4294967290U), p_15)) <= l_1239) < l_1239))) > p_16) > p_15), 4)), 6));
    return (*g_432);
}
static int16_t func_21(uint8_t p_22)
{
    uint32_t l_23 = 0U;
    uint8_t *l_57 = &g_58;
    uint16_t *l_1004 = &g_294;
    int32_t l_1144 = 0x116C4911;
    int32_t ***l_1153 = &g_369;
    int32_t l_1171 = 0;
    int32_t l_1174 = 0x7B8621C1;
    uint32_t l_1195 = 0xBE0DCA53;
    uint32_t *l_1196 = &g_268;
    int8_t *****l_1200 = &g_746;
    int8_t l_1225 = (-5);
    l_1144 = ((l_23 | 0xEFCD) || (safe_sub_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(l_23, ((**g_238) = (safe_lshift_func_int16_t_s_s(func_30(l_23, (safe_lshift_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_s((safe_add_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_s(((*l_1004) = (safe_add_func_int32_t_s_s((-1), (safe_div_func_int8_t_s_s(func_50((9U != func_52(l_23, ((*l_57) = 249U), (0x72 < l_23), g_9))), 7U))))), 12)) < p_22), l_23)), p_22)), l_23)), p_22)), l_23, p_22, g_642), 3))))), p_22)));
    ((void) sizeof ((g_161 == &g_61 || g_161 == 0) ? 1 : 0), __extension__ ({ if (g_161 == &g_61 || g_161 == 0) ; else __assert_fail ("g_161 == &g_61 || g_161 == 0", "/tmp/tmpb6qjivzw.c", 135, __extension__ __PRETTY_FUNCTION__); }));
    ((void) sizeof ((g_914 == &g_915 || g_914 == 0) ? 1 : 0), __extension__ ({ if (g_914 == &g_915 || g_914 == 0) ; else __assert_fail ("g_914 == &g_915 || g_914 == 0", "/tmp/tmpb6qjivzw.c", 137, __extension__ __PRETTY_FUNCTION__); }));
    for (l_23 = 20; (l_23 > 46); ++l_23)
    {
        int8_t l_1167 = (-1);
        int32_t l_1168 = 6;
        int16_t l_1172 = 7;
        int32_t *l_1173 = &g_61;
        int32_t l_1175 = 0x2B474F36;
        uint32_t *l_1176 = (void*)0;
        uint32_t *l_1177 = &g_933;
        int32_t *l_1178 = &l_1174;
        if (l_1144)
            break;
        (*l_1178) = (safe_rshift_func_int16_t_s_u((((((((*l_1177) = (safe_mod_func_uint8_t_u_u(((((void*)0 == l_1153) <= ((4U >= (l_1175 = ((safe_add_func_int32_t_s_s(((*l_1173) = (safe_rshift_func_int16_t_s_u(((safe_lshift_func_int16_t_s_u((((((safe_sub_func_uint16_t_u_u((safe_unary_minus_func_int16_t_s((l_1168 = (p_22 != ((safe_sub_func_uint16_t_u_u(0xBD50, p_22)) && (safe_add_func_int32_t_s_s(p_22, l_1167))))))), (((safe_rshift_func_int16_t_s_s(0x5853, l_1144)) == 1U) | l_1171))) > p_22) | 9U) & p_22) <= p_22), p_22)) > p_22), l_1172))), l_1174)) < 0xC6))) < p_22)) || 0x63586F2C), p_22))) >= 4294967294U) | p_22) ^ 0x7E8D400A) >= (****g_746)) != p_22), 15));
        (***g_367) = &l_1175;
        ((void) sizeof ((g_245 == &l_1175) ? 1 : 0), __extension__ ({ if (g_245 == &l_1175) ; else __assert_fail ("g_245 == &l_1175", "/tmp/tmpb6qjivzw.c", 153, __extension__ __PRETTY_FUNCTION__); }));
        (***g_368) = p_22;
    }
    for (g_208 = (-30); (g_208 == (-26)); ++g_208)
    {
        int16_t ***l_1181 = &g_238;
        int32_t *l_1182 = &g_687;
        (*l_1182) = (l_1181 == l_1181);
        for (g_211 = 27; (g_211 <= (-28)); g_211 = safe_sub_func_int32_t_s_s(g_211, 3))
        {
            return (*g_239);
        }
    }
    if ((((*l_1196) = (0x87AC3EE4 || ((safe_lshift_func_uint16_t_u_u(((((*g_536) = (void*)0) == (void*)0) != ((safe_rshift_func_int8_t_s_u((*g_432), (safe_rshift_func_uint8_t_u_u((1U || (***g_747)), p_22)))) ^ 0x4805BA93)), (safe_add_func_int32_t_s_s((safe_mod_func_uint32_t_u_u((0xE6B4 & (-3)), l_1195)), 4294967295U)))) & p_22))) >= 0U))
    {
        int32_t *l_1197 = &g_687;
        (**l_1153) = l_1197;
        ((void) sizeof ((g_245 == &g_687) ? 1 : 0), __extension__ ({ if (g_245 == &g_687) ; else __assert_fail ("g_245 == &g_687", "/tmp/tmpb6qjivzw.c", 171, __extension__ __PRETTY_FUNCTION__); }));
    }
    else
    {
        int8_t *****l_1201 = &g_746;
        uint8_t l_1217 = 254U;
        int32_t l_1224 = 0;
        int32_t l_1226 = (-1);
        int32_t *l_1227 = &g_211;
        (*l_1227) = (safe_rshift_func_uint16_t_u_s(((l_1200 == l_1201) <= (safe_sub_func_uint8_t_u_u(0xE5, ((safe_lshift_func_int8_t_s_s((p_22 | p_22), (~(safe_div_func_int32_t_s_s((safe_add_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s((safe_add_func_int16_t_s_s((**g_238), p_22)), ((l_1217 = (safe_lshift_func_uint8_t_u_s((g_58 = 0x84), 1))) | ((safe_div_func_int32_t_s_s((l_1224 = ((safe_lshift_func_uint8_t_u_s(((safe_lshift_func_int8_t_s_s((l_57 != (void*)0), (*g_432))) && p_22), 6)) != l_1224)), p_22)) & 0x5092579D)))), p_22)), l_1225))))) >= l_1226)))), l_1226));
        (*l_1227) = 0;
    }
    return p_22;
}
static int16_t func_30(uint16_t p_31, int8_t p_32, int16_t p_33, int16_t p_34, int32_t p_35)
{
    int8_t l_1015 = 1;
    int32_t l_1022 = 0xDA42E79C;
    uint32_t **l_1038 = &g_226;
    int32_t *l_1040 = &g_208;
    int16_t ****l_1047 = (void*)0;
    int16_t *****l_1048 = &g_914;
    int16_t l_1087 = 0x80F7;
    uint16_t *l_1092 = &g_294;
    uint16_t **l_1091 = &l_1092;
    uint32_t *l_1103 = (void*)0;
    uint32_t *l_1104 = (void*)0;
    uint32_t *l_1105 = &g_642;
    int32_t l_1106 = 1;
    uint32_t l_1107 = 0x9FE6F563;
    uint32_t l_1112 = 0xC826BD69;
    int32_t l_1130 = 0xCA28B797;
    int32_t **l_1131 = &g_245;
    int32_t **l_1132 = &g_245;
    int32_t **l_1133 = (void*)0;
    int32_t **l_1134 = &g_245;
    int32_t **l_1135 = &l_1040;
    int32_t **l_1136 = &g_245;
    int32_t **l_1137 = &g_245;
    int32_t *l_1138 = &g_687;
    int32_t l_1141 = 1;
    int8_t l_1142 = 0xD9;
    if (p_32)
    {
        int32_t l_1031 = (-3);
        uint16_t *l_1033 = (void*)0;
        uint16_t **l_1032 = &l_1033;
        uint32_t *l_1034 = &g_268;
        uint32_t *l_1035 = &g_183;
        int32_t l_1036 = 1;
        int32_t l_1037 = (-1);
        uint32_t ***l_1039 = &l_1038;
        l_1037 = (((*l_1035) = (safe_rshift_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(0U, g_122)), (safe_rshift_func_uint8_t_u_u(((safe_add_func_uint32_t_u_u((safe_div_func_uint16_t_u_u(l_1015, ((p_31 = (safe_rshift_func_uint8_t_u_s(((safe_mod_func_uint32_t_u_u((((safe_add_func_uint16_t_u_u(l_1022, 65535U)) || (****g_746)) == p_35), ((*l_1034) = (safe_div_func_int8_t_s_s(((safe_sub_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_u(((safe_div_func_uint32_t_u_u((l_1031 > ((((*l_1032) = &p_31) == &g_180) || l_1031)), 1U)) < (*g_239)), p_31)) && (**g_238)), l_1022)) != 0x84), 0x75))))) & l_1022), 7))) ^ l_1031))), p_32)) ^ (-1)), p_33))))) < l_1036);
        ((void) sizeof ((l_1033 == &p_31) ? 1 : 0), __extension__ ({ if (l_1033 == &p_31) ; else __assert_fail ("l_1033 == &p_31", "/tmp/tmpb6qjivzw.c", 234, __extension__ __PRETTY_FUNCTION__); }));
        (*l_1039) = l_1038;
    }
    else
    {
        (*g_369) = l_1040;
        ((void) sizeof ((g_245 == &g_208) ? 1 : 0), __extension__ ({ if (g_245 == &g_208) ; else __assert_fail ("g_245 == &g_208", "/tmp/tmpb6qjivzw.c", 241, __extension__ __PRETTY_FUNCTION__); }));
        (**g_368) = (*g_369);
        for (p_35 = 0; (p_35 >= (-27)); p_35--)
        {
            uint8_t *l_1044 = &g_58;
            uint8_t **l_1043 = &l_1044;
        }
    }
    if ((4294967295U | (safe_sub_func_uint8_t_u_u((((*g_239) = (((((*l_1048) = l_1047) != (void*)0) <= ((safe_add_func_int32_t_s_s((*l_1040), (g_687 = ((void*)0 != &g_537)))) ^ (safe_mod_func_uint8_t_u_u((p_34 & ((((*l_1040) && ((safe_mod_func_int8_t_s_s((251U >= p_33), (**g_431))) & p_31)) == (-7)) <= p_31)), (*l_1040))))) < g_180)) && (*l_1040)), (-1)))))
    {
        uint8_t l_1062 = 0U;
        int16_t *****l_1067 = (void*)0;
        uint32_t **l_1070 = (void*)0;
        uint32_t ***l_1071 = (void*)0;
        uint32_t ***l_1072 = &l_1070;
        uint32_t *l_1074 = &g_268;
        (*l_1040) = ((*l_1040) ^ ((safe_sub_func_uint16_t_u_u(((~(safe_sub_func_uint32_t_u_u((*l_1040), (l_1062 < 0xA726)))) == (safe_rshift_func_int16_t_s_u(p_35, (safe_sub_func_int16_t_s_s((((&g_914 != l_1067) && ((*l_1074) = (safe_rshift_func_uint8_t_u_u((p_34 || (((*l_1072) = l_1070) == g_1073)), 7)))) || 0xD942), (*l_1040)))))), p_35)) == p_34));
    }
    else
    {
        uint32_t l_1083 = 0x4324E57C;
        int32_t l_1084 = 1;
        uint16_t *l_1086 = &g_294;
        int32_t *l_1088 = &g_687;
        (*l_1088) = ((safe_mod_func_int16_t_s_s(0xC25D, p_32)) < (((safe_lshift_func_int16_t_s_u((p_34 = ((safe_sub_func_uint8_t_u_u(((-5) || (safe_rshift_func_int8_t_s_u((l_1083 || (l_1084 = l_1083)), 6))), (safe_unary_minus_func_int8_t_s((((void*)0 == l_1086) >= p_31))))) | ((*l_1040) = (***g_747)))), l_1087)) | 4U) | 8));
    }
    ((void) sizeof ((g_914 == 0) ? 1 : 0), __extension__ ({ if (g_914 == 0) ; else __assert_fail ("g_914 == 0", "/tmp/tmpb6qjivzw.c", 270, __extension__ __PRETTY_FUNCTION__); }));
    l_1040 = func_81(((safe_mod_func_uint32_t_u_u(((l_1091 = (*g_629)) == (*g_629)), (((*l_1092) = (((*l_1040) < ((*g_432) = 0x4C)) < 1U)) || 0xDA93))) || ((safe_add_func_uint8_t_u_u((0x51 && ((safe_div_func_int16_t_s_s((-1), (safe_div_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u(((*l_1105) = ((safe_mod_func_uint8_t_u_u(0U, 0x27)) > (*l_1040))), (*l_1040))), l_1106)))) < p_31)), (***g_747))) > l_1107)));
    ((void) sizeof ((l_1040 == 0) ? 1 : 0), __extension__ ({ if (l_1040 == 0) ; else __assert_fail ("l_1040 == 0", "/tmp/tmpb6qjivzw.c", 273, __extension__ __PRETTY_FUNCTION__); }));
    ((void) sizeof ((l_1091 == 0) ? 1 : 0), __extension__ ({ if (l_1091 == 0) ; else __assert_fail ("l_1091 == 0", "/tmp/tmpb6qjivzw.c", 274, __extension__ __PRETTY_FUNCTION__); }));
    if (((safe_sub_func_uint8_t_u_u((p_33 | ((safe_add_func_int32_t_s_s((l_1112 || (safe_lshift_func_uint8_t_u_s((l_1106 != (safe_add_func_int32_t_s_s(((safe_add_func_uint32_t_u_u((safe_sub_func_int32_t_s_s(((safe_add_func_int16_t_s_s((((l_1087 || (safe_mod_func_uint8_t_u_u((safe_unary_minus_func_uint8_t_u(((safe_sub_func_int16_t_s_s((safe_div_func_int32_t_s_s(l_1015, l_1130)), ((((*l_1135) = l_1103) != (l_1138 = (void*)0)) && (safe_lshift_func_int8_t_s_u((***g_747), 0))))) | (**g_238)))), p_32))) >= p_31) > p_31), p_34)) && p_33), p_35)), 8)) && p_35), l_1141))), l_1142))), p_35)) | p_31)), (-1))) == 246U))
    {
        return (**g_238);
    }
    else
    {
        int32_t *l_1143 = &g_61;
        (*l_1143) = 0x35F30225;
    }
    ((void) sizeof ((l_1138 == &g_687 || l_1138 == 0) ? 1 : 0), __extension__ ({ if (l_1138 == &g_687 || l_1138 == 0) ; else __assert_fail ("l_1138 == &g_687 || l_1138 == 0", "/tmp/tmpb6qjivzw.c", 285, __extension__ __PRETTY_FUNCTION__); }));
    return (**g_238);
}
static int8_t func_50(int32_t p_51)
{
    int8_t l_1001 = 1;
    int32_t *l_1003 = &g_61;
    (*l_1003) = (((l_1001 = (safe_lshift_func_uint16_t_u_u(p_51, 15))) & (safe_unary_minus_func_uint32_t_u(4294967292U))) < 1);
    return (*l_1003);
}
static int32_t func_52(int32_t p_53, uint8_t p_54, int32_t p_55, uint8_t p_56)
{
    int8_t l_70 = (-9);
    uint8_t *l_97 = &g_58;
    uint8_t **l_96 = &l_97;
    uint8_t ***l_95 = &l_96;
    int16_t *l_657 = &g_122;
    int16_t *l_658 = &g_341;
    int32_t ****l_695 = &g_368;
    int16_t ***l_871 = &g_238;
    int32_t *****l_896 = &l_695;
    uint16_t ****l_901 = &g_629;
    uint16_t *****l_900 = &l_901;
    int8_t **l_905 = &g_432;
    int32_t l_908 = 1;
    uint8_t l_972 = 248U;
    int16_t *****l_998 = &g_914;
    if (p_54)
    {
        int32_t *l_60 = &g_61;
        int32_t **l_59 = &l_60;
        uint16_t l_75 = 0xDA84;
        uint8_t ***l_98 = &l_96;
        int32_t *l_544 = &g_211;
        uint16_t ****l_669 = &g_629;
        int32_t *****l_678 = (void*)0;
        uint32_t l_806 = 0xE8CEB5E5;
        int32_t l_855 = (-2);
        int32_t l_867 = 1;
        int16_t ***l_870 = (void*)0;
        uint16_t *****l_902 = (void*)0;
        int32_t l_969 = 0xD990DF81;
        int8_t l_971 = 0;
        uint8_t ****l_993 = &g_536;
        (*l_59) = (void*)0;
        ((void) sizeof ((l_60 == 0) ? 1 : 0), __extension__ ({ if (l_60 == 0) ; else __assert_fail ("l_60 == 0", "/tmp/tmpb6qjivzw.c", 345, __extension__ __PRETTY_FUNCTION__); }));
        for (p_54 = 2; (p_54 >= 3); p_54 = safe_add_func_int16_t_s_s(p_54, 4))
        {
            uint8_t *l_94 = (void*)0;
            uint8_t **l_93 = &l_94;
            uint8_t ***l_92 = &l_93;
            int32_t l_543 = 9;
            int32_t *****l_679 = &g_367;
            uint8_t ****l_683 = &g_130;
            int32_t **l_731 = &g_161;
            uint16_t l_769 = 0x4D6B;
            p_53 = func_64((l_70 && func_71(l_75, p_53, func_76(func_81(p_53), (safe_rshift_func_uint16_t_u_u(0xE2CC, (safe_unary_minus_func_int16_t_s((safe_add_func_int16_t_s_s((l_92 != l_95), ((void*)0 == l_98))))))), g_58, &g_58))), l_543, p_54, p_55, l_544);
        }
        ((void) sizeof ((g_161 == &g_61 || g_161 == 0) ? 1 : 0), __extension__ ({ if (g_161 == &g_61 || g_161 == 0) ; else __assert_fail ("g_161 == &g_61 || g_161 == 0", "/tmp/tmpb6qjivzw.c", 359, __extension__ __PRETTY_FUNCTION__); }));
        ((void) sizeof ((g_245 == &g_211 || g_245 == 0) ? 1 : 0), __extension__ ({ if (g_245 == &g_211 || g_245 == 0) ; else __assert_fail ("g_245 == &g_211 || g_245 == 0", "/tmp/tmpb6qjivzw.c", 360, __extension__ __PRETTY_FUNCTION__); }));
        for (g_183 = 0; (g_183 <= 49); g_183 = safe_add_func_uint32_t_u_u(g_183, 9))
        {
            int32_t ****l_895 = &g_368;
            int8_t *l_897 = &l_70;
            int32_t l_898 = 0xC75D746C;
            int32_t *l_899 = &g_518;
            (**g_368) = func_81((*l_544));
            ((void) sizeof ((g_245 == 0) ? 1 : 0), __extension__ ({ if (g_245 == 0) ; else __assert_fail ("g_245 == 0", "/tmp/tmpb6qjivzw.c", 369, __extension__ __PRETTY_FUNCTION__); }));
            for (g_518 = (-3); (g_518 != 5); g_518 = safe_add_func_int8_t_s_s(g_518, 1))
            {
                (**g_368) = (void*)0;
                (*l_544) = 0x306DEE12;
            }
            (*l_899) = ((safe_mod_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((safe_sub_func_int32_t_s_s((safe_lshift_func_int8_t_s_s(((p_53 = ((*l_544) = (safe_rshift_func_int8_t_s_s(((****g_746) ^ ((*g_432) != ((safe_add_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_s((((*g_366) = (*g_366)) == l_895), (&l_695 != (l_896 = (l_678 = l_678))))), (p_56 >= ((p_55 & (l_898 = (((*l_897) = 0x95) ^ (*l_544)))) < 0x288C)))), (***g_747))) <= 0xDAEF8AC3))), 0)))) == p_56), p_56)), 4294967295U)), (*g_239))), (***g_747))) == p_54);
            ((void) sizeof ((l_896 == 0) ? 1 : 0), __extension__ ({ if (l_896 == 0) ; else __assert_fail ("l_896 == 0", "/tmp/tmpb6qjivzw.c", 377, __extension__ __PRETTY_FUNCTION__); }));
            l_902 = l_900;
            ((void) sizeof ((l_902 == &l_901) ? 1 : 0), __extension__ ({ if (l_902 == &l_901) ; else __assert_fail ("l_902 == &l_901", "/tmp/tmpb6qjivzw.c", 380, __extension__ __PRETTY_FUNCTION__); }));
        }
        ((void) sizeof ((l_896 == 0 || l_896 == &l_695) ? 1 : 0), __extension__ ({ if (l_896 == 0 || l_896 == &l_695) ; else __assert_fail ("l_896 == 0 || l_896 == &l_695", "/tmp/tmpb6qjivzw.c", 383, __extension__ __PRETTY_FUNCTION__); }));
        ((void) sizeof ((l_902 == &l_901 || l_902 == 0) ? 1 : 0), __extension__ ({ if (l_902 == &l_901 || l_902 == 0) ; else __assert_fail ("l_902 == &l_901 || l_902 == 0", "/tmp/tmpb6qjivzw.c", 384, __extension__ __PRETTY_FUNCTION__); }));
        if ((safe_rshift_func_int8_t_s_u((l_905 == (void*)0), 7)))
        {
            uint8_t l_911 = 0x9A;
            int32_t *l_939 = (void*)0;
            for (g_211 = 0; (g_211 > (-4)); g_211--)
            {
                int16_t ****l_916 = &l_871;
                int32_t l_934 = 0x610F67D2;
                int32_t l_951 = 0x8AB5C1C1;
                if ((l_908 || (((void*)0 == &g_747) || (safe_sub_func_int16_t_s_s(l_911, (p_53 > 5U))))))
                {
                    uint16_t l_927 = 0x027E;
                    for (g_61 = 0; (g_61 == (-16)); g_61 = safe_sub_func_int8_t_s_s(g_61, 3))
                    {
                        (*g_369) = (*g_369);
                        l_916 = g_914;
                        ((void) sizeof ((l_916 == &g_915) ? 1 : 0), __extension__ ({ if (l_916 == &g_915) ; else __assert_fail ("l_916 == &g_915", "/tmp/tmpb6qjivzw.c", 402, __extension__ __PRETTY_FUNCTION__); }));
                    }
                    ((void) sizeof ((l_916 == &g_915 || l_916 == &l_871) ? 1 : 0), __extension__ ({ if (l_916 == &g_915 || l_916 == &l_871) ; else __assert_fail ("l_916 == &g_915 || l_916 == &l_871", "/tmp/tmpb6qjivzw.c", 405, __extension__ __PRETTY_FUNCTION__); }));
                    for (g_61 = 0; (g_61 <= 0); ++g_61)
                    {
                        uint16_t l_930 = 1U;
                        int32_t *l_935 = (void*)0;
                        int32_t *l_936 = (void*)0;
                        int32_t *l_937 = (void*)0;
                        int32_t *l_938 = &l_934;
                        l_934 = (safe_add_func_int16_t_s_s(((((*g_369) != &p_53) >= 1U) == ((safe_unary_minus_func_int32_t_s((((***l_871) = (~(0xCA6B39A7 >= ((safe_sub_func_int16_t_s_s((l_927 | 0), (safe_sub_func_uint8_t_u_u(1U, l_930)))) != ((safe_lshift_func_int16_t_s_u(((*l_658) = (-7)), p_53)) <= g_933))))) & 0x2BCF))) && p_53)), p_55));
                        (*l_938) = ((-4) < l_927);
                        (**g_368) = l_939;
                        ((void) sizeof ((g_245 == 0) ? 1 : 0), __extension__ ({ if (g_245 == 0) ; else __assert_fail ("g_245 == 0", "/tmp/tmpb6qjivzw.c", 417, __extension__ __PRETTY_FUNCTION__); }));
                        p_53 = (-1);
                    }
                }
                else
                {
                    int8_t ***l_940 = &l_905;
                    uint16_t *l_941 = &g_294;
                    p_53 = ((((void*)0 != l_940) < (((*l_941) = p_55) & p_55)) | ((safe_div_func_int32_t_s_s((safe_add_func_int16_t_s_s(0x2E18, ((*l_658) = ((****l_916) = (!((safe_add_func_int16_t_s_s((&l_871 == (void*)0), ((l_911 < p_55) & 0))) || p_56)))))), 0x244467C4)) | p_53));
                    for (g_61 = 0; (g_61 >= 19); g_61++)
                    {
                        return l_951;
                    }
                }
                ((void) sizeof ((l_916 == &g_915 || l_916 == &l_871) ? 1 : 0), __extension__ ({ if (l_916 == &g_915 || l_916 == &l_871) ; else __assert_fail ("l_916 == &g_915 || l_916 == &l_871", "/tmp/tmpb6qjivzw.c", 432, __extension__ __PRETTY_FUNCTION__); }));
            }
            (***l_695) = &p_53;
            ((void) sizeof ((g_245 == &p_53) ? 1 : 0), __extension__ ({ if (g_245 == &p_53) ; else __assert_fail ("g_245 == &p_53", "/tmp/tmpb6qjivzw.c", 436, __extension__ __PRETTY_FUNCTION__); }));
        }
        else
        {
            uint32_t *l_961 = &g_642;
            int32_t l_970 = 7;
            int8_t **l_973 = &g_432;
            int32_t *l_977 = (void*)0;
            int8_t ****l_994 = &g_747;
            (****g_366) = func_81((*g_432));
            ((void) sizeof ((g_245 == 0) ? 1 : 0), __extension__ ({ if (g_245 == 0) ; else __assert_fail ("g_245 == 0", "/tmp/tmpb6qjivzw.c", 447, __extension__ __PRETTY_FUNCTION__); }));
            if ((((***l_871) = ((safe_lshift_func_uint8_t_u_s((safe_sub_func_uint32_t_u_u(0x8B18A243, 0x40EE2C81)), ((+(((*g_746) == (void*)0) ^ (safe_mod_func_int32_t_s_s(((l_971 = ((safe_rshift_func_int8_t_s_u(((&l_806 != l_961) && ((safe_div_func_int8_t_s_s((safe_sub_func_int16_t_s_s((+p_54), (safe_div_func_int8_t_s_s((**g_431), p_56)))), (****g_746))) > l_969)), l_970)) | p_56)) ^ (-5)), (-1))))) >= l_972))) == 0xAC8E)) < 0x3E05))
            {
                int32_t *l_974 = (void*)0;
                (**g_746) = l_973;
                (*g_369) = (**g_368);
                l_970 = ((*l_544) = 0xEA9A539B);
                for (l_75 = 0; (l_75 >= 24); l_75 = safe_add_func_int32_t_s_s(l_75, 5))
                {
                    (***g_367) = &p_53;
                    ((void) sizeof ((g_245 == &p_53) ? 1 : 0), __extension__ ({ if (g_245 == &p_53) ; else __assert_fail ("g_245 == &p_53", "/tmp/tmpb6qjivzw.c", 458, __extension__ __PRETTY_FUNCTION__); }));
                    l_977 = func_81((***g_747));
                }
                ((void) sizeof ((g_245 == &p_53 || g_245 == 0) ? 1 : 0), __extension__ ({ if (g_245 == &p_53 || g_245 == 0) ; else __assert_fail ("g_245 == &p_53 || g_245 == 0", "/tmp/tmpb6qjivzw.c", 462, __extension__ __PRETTY_FUNCTION__); }));
            }
            else
            {
                uint8_t ***l_980 = &g_537;
                for (g_180 = (-5); (g_180 >= 36); ++g_180)
                {
                    uint8_t ****l_981 = &l_98;
                    uint8_t ****l_982 = (void*)0;
                    uint8_t ****l_983 = &l_95;
                    int32_t l_990 = (-9);
                    int8_t *****l_995 = (void*)0;
                    int8_t *****l_996 = &l_994;
                    (***l_695) = func_81(((((*l_981) = l_980) != ((*l_983) = l_980)) <= (safe_lshift_func_uint8_t_u_s(((+p_55) == (safe_unary_minus_func_uint32_t_u(((safe_add_func_int8_t_s_s(0x90, (4294967286U > p_55))) || (*l_544))))), 3))));
                    ((void) sizeof ((l_95 == &g_537) ? 1 : 0), __extension__ ({ if (l_95 == &g_537) ; else __assert_fail ("l_95 == &g_537", "/tmp/tmpb6qjivzw.c", 477, __extension__ __PRETTY_FUNCTION__); }));
                    ((void) sizeof ((l_98 == &g_537) ? 1 : 0), __extension__ ({ if (l_98 == &g_537) ; else __assert_fail ("l_98 == &g_537", "/tmp/tmpb6qjivzw.c", 478, __extension__ __PRETTY_FUNCTION__); }));
                    ((void) sizeof ((g_245 == 0) ? 1 : 0), __extension__ ({ if (g_245 == 0) ; else __assert_fail ("g_245 == 0", "/tmp/tmpb6qjivzw.c", 479, __extension__ __PRETTY_FUNCTION__); }));
                    (*l_544) = l_990;
                    if ((safe_sub_func_uint32_t_u_u((&l_980 == (l_993 = &l_95)), (l_983 == &l_98))))
                    {
                        return p_54;
                    }
                    else
                    {
                        (****g_366) = &p_53;
                        ((void) sizeof ((g_245 == &p_53) ? 1 : 0), __extension__ ({ if (g_245 == &p_53) ; else __assert_fail ("g_245 == &p_53", "/tmp/tmpb6qjivzw.c", 489, __extension__ __PRETTY_FUNCTION__); }));
                    }
                    ((void) sizeof ((g_245 == &p_53) ? 1 : 0), __extension__ ({ if (g_245 == &p_53) ; else __assert_fail ("g_245 == &p_53", "/tmp/tmpb6qjivzw.c", 492, __extension__ __PRETTY_FUNCTION__); }));
                    ((void) sizeof ((l_993 == &l_95) ? 1 : 0), __extension__ ({ if (l_993 == &l_95) ; else __assert_fail ("l_993 == &l_95", "/tmp/tmpb6qjivzw.c", 493, __extension__ __PRETTY_FUNCTION__); }));
                    (*l_996) = l_994;
                }
                ((void) sizeof ((l_95 == &g_537 || l_95 == &l_96) ? 1 : 0), __extension__ ({ if (l_95 == &g_537 || l_95 == &l_96) ; else __assert_fail ("l_95 == &g_537 || l_95 == &l_96", "/tmp/tmpb6qjivzw.c", 497, __extension__ __PRETTY_FUNCTION__); }));
                ((void) sizeof ((l_98 == &g_537 || l_98 == &l_96) ? 1 : 0), __extension__ ({ if (l_98 == &g_537 || l_98 == &l_96) ; else __assert_fail ("l_98 == &g_537 || l_98 == &l_96", "/tmp/tmpb6qjivzw.c", 498, __extension__ __PRETTY_FUNCTION__); }));
                ((void) sizeof ((g_245 == &p_53 || g_245 == 0) ? 1 : 0), __extension__ ({ if (g_245 == &p_53 || g_245 == 0) ; else __assert_fail ("g_245 == &p_53 || g_245 == 0", "/tmp/tmpb6qjivzw.c", 499, __extension__ __PRETTY_FUNCTION__); }));
                ((void) sizeof ((l_993 == &l_95 || l_993 == &g_536) ? 1 : 0), __extension__ ({ if (l_993 == &l_95 || l_993 == &g_536) ; else __assert_fail ("l_993 == &l_95 || l_993 == &g_536", "/tmp/tmpb6qjivzw.c", 500, __extension__ __PRETTY_FUNCTION__); }));
            }
            ((void) sizeof ((l_95 == &g_537 || l_95 == &l_96) ? 1 : 0), __extension__ ({ if (l_95 == &g_537 || l_95 == &l_96) ; else __assert_fail ("l_95 == &g_537 || l_95 == &l_96", "/tmp/tmpb6qjivzw.c", 503, __extension__ __PRETTY_FUNCTION__); }));
            ((void) sizeof ((l_98 == &g_537 || l_98 == &l_96) ? 1 : 0), __extension__ ({ if (l_98 == &g_537 || l_98 == &l_96) ; else __assert_fail ("l_98 == &g_537 || l_98 == &l_96", "/tmp/tmpb6qjivzw.c", 504, __extension__ __PRETTY_FUNCTION__); }));
            ((void) sizeof ((g_245 == &p_53 || g_245 == 0) ? 1 : 0), __extension__ ({ if (g_245 == &p_53 || g_245 == 0) ; else __assert_fail ("g_245 == &p_53 || g_245 == 0", "/tmp/tmpb6qjivzw.c", 505, __extension__ __PRETTY_FUNCTION__); }));
            ((void) sizeof ((l_993 == &l_95 || l_993 == &g_536) ? 1 : 0), __extension__ ({ if (l_993 == &l_95 || l_993 == &g_536) ; else __assert_fail ("l_993 == &l_95 || l_993 == &g_536", "/tmp/tmpb6qjivzw.c", 506, __extension__ __PRETTY_FUNCTION__); }));
            if ((p_53 = p_53))
            {
                int32_t *l_997 = &l_970;
                (***g_367) = l_997;
                ((void) sizeof ((g_245 == &l_970) ? 1 : 0), __extension__ ({ if (g_245 == &l_970) ; else __assert_fail ("g_245 == &l_970", "/tmp/tmpb6qjivzw.c", 512, __extension__ __PRETTY_FUNCTION__); }));
            }
            else
            {
                p_53 = (0xA6204510 < ((*l_544) = 0xC6D30612));
                (*l_544) = 0x65EC8D8F;
            }
            ((void) sizeof ((g_245 == &p_53 || g_245 == 0 || g_245 == &l_970) ? 1 : 0), __extension__ ({ if (g_245 == &p_53 || g_245 == 0 || g_245 == &l_970) ; else __assert_fail ("g_245 == &p_53 || g_245 == 0 || g_245 == &l_970", "/tmp/tmpb6qjivzw.c", 520, __extension__ __PRETTY_FUNCTION__); }));
            l_977 = func_81(p_54);
        }
        ((void) sizeof ((l_95 == &g_537 || l_95 == &l_96) ? 1 : 0), __extension__ ({ if (l_95 == &g_537 || l_95 == &l_96) ; else __assert_fail ("l_95 == &g_537 || l_95 == &l_96", "/tmp/tmpb6qjivzw.c", 524, __extension__ __PRETTY_FUNCTION__); }));
        ((void) sizeof ((l_98 == &g_537 || l_98 == &l_96) ? 1 : 0), __extension__ ({ if (l_98 == &g_537 || l_98 == &l_96) ; else __assert_fail ("l_98 == &g_537 || l_98 == &l_96", "/tmp/tmpb6qjivzw.c", 525, __extension__ __PRETTY_FUNCTION__); }));
        ((void) sizeof ((l_993 == &l_95 || l_993 == &g_536) ? 1 : 0), __extension__ ({ if (l_993 == &l_95 || l_993 == &g_536) ; else __assert_fail ("l_993 == &l_95 || l_993 == &g_536", "/tmp/tmpb6qjivzw.c", 527, __extension__ __PRETTY_FUNCTION__); }));
    }
    else
    {
        (*g_369) = (***g_367);
    }
    ((void) sizeof ((l_95 == &g_537 || l_95 == &l_96) ? 1 : 0), __extension__ ({ if (l_95 == &g_537 || l_95 == &l_96) ; else __assert_fail ("l_95 == &g_537 || l_95 == &l_96", "/tmp/tmpb6qjivzw.c", 534, __extension__ __PRETTY_FUNCTION__); }));
    ((void) sizeof ((g_161 == &g_61 || g_161 == 0) ? 1 : 0), __extension__ ({ if (g_161 == &g_61 || g_161 == 0) ; else __assert_fail ("g_161 == &g_61 || g_161 == 0", "/tmp/tmpb6qjivzw.c", 535, __extension__ __PRETTY_FUNCTION__); }));
    ((void) sizeof ((l_896 == 0 || l_896 == &l_695) ? 1 : 0), __extension__ ({ if (l_896 == 0 || l_896 == &l_695) ; else __assert_fail ("l_896 == 0 || l_896 == &l_695", "/tmp/tmpb6qjivzw.c", 537, __extension__ __PRETTY_FUNCTION__); }));
    (*g_369) = &p_53;
    ((void) sizeof ((g_245 == &p_53) ? 1 : 0), __extension__ ({ if (g_245 == &p_53) ; else __assert_fail ("g_245 == &p_53", "/tmp/tmpb6qjivzw.c", 540, __extension__ __PRETTY_FUNCTION__); }));
    (***g_368) = 1;
    l_998 = l_998;
    return p_53;
}
static int32_t func_64(uint16_t p_65, int8_t p_66, int32_t p_67, int16_t p_68, int32_t * p_69)
{
    uint32_t l_547 = 0x4482857D;
    uint16_t *l_576 = (void*)0;
    int32_t l_585 = 0x51896748;
    int32_t l_593 = 0;
    uint8_t *l_597 = &g_58;
    uint32_t l_600 = 0xDAF827ED;
    uint8_t ****l_603 = &g_130;
    int32_t **l_611 = (void*)0;
    int32_t ****l_616 = &g_368;
    uint16_t **l_620 = &l_576;
    uint16_t ***l_619 = &l_620;
    int32_t l_643 = 0x17459A9C;
    if ((*p_69))
    {
        int16_t l_583 = 4;
        for (g_211 = (-1); (g_211 <= 26); g_211++)
        {
            uint8_t *l_554 = &g_129;
            int32_t l_557 = 0x4D3B9400;
            uint16_t l_567 = 65532U;
            uint8_t ****l_604 = &g_536;
            uint32_t l_613 = 1U;
            if ((p_65 == (l_547 > (safe_sub_func_int16_t_s_s(0x2722, (((safe_mod_func_int16_t_s_s(((*g_239) = (safe_rshift_func_uint8_t_u_u((((*l_554) = (p_65 <= 0)) == (safe_lshift_func_int8_t_s_u((l_557 < l_557), 4))), 3))), (g_540 & (((255U & 4U) != g_518) != l_547)))) || (**g_431)) > 0x5A83))))))
            {
                int32_t l_584 = 0xBA86876B;
                int32_t **l_598 = (void*)0;
                int32_t *l_599 = &l_593;
                (**g_368) = func_81((safe_mod_func_int16_t_s_s((!g_294), (safe_sub_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u((l_567 == 0), p_67)), ((safe_div_func_uint8_t_u_u((((safe_rshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_s((l_547 && (p_67 >= (+(l_585 = ((+((void*)0 != l_576)) & (+((l_557 = (safe_unary_minus_func_uint8_t_u(((safe_sub_func_uint32_t_u_u((safe_add_func_int8_t_s_s((*g_432), l_583)), 0xB6D9E034)) != l_584)))) > p_65))))))), 6)), p_66)) | l_583) >= 0x93E5), 1)) && 1))), 65529U)))));
                ((void) sizeof ((g_245 == 0) ? 1 : 0), __extension__ ({ if (g_245 == 0) ; else __assert_fail ("g_245 == 0", "/tmp/tmpb6qjivzw.c", 585, __extension__ __PRETTY_FUNCTION__); }));
                (*g_369) = func_81((l_557 >= (safe_div_func_uint16_t_u_u(g_341, 0x7F9D))));
                (*l_599) = ((((safe_rshift_func_int16_t_s_u((l_583 ^ (0xD38C == ((safe_unary_minus_func_int32_t_s((safe_lshift_func_int16_t_s_s(0x200F, 4)))) | (l_593 | (((((((0U | ((***g_366) != (l_598 = func_76(&l_557, (safe_mod_func_uint8_t_u_u(((~((*g_239) <= l_567)) < (*g_239)), (**g_431))), p_67, l_597)))) <= l_557) > 0) != 0xC580E44C) <= 0x40) | l_584) | 0xE7))))), 1)) | l_583) ^ p_66) > g_211);
                ((void) sizeof ((l_598 == &g_161) ? 1 : 0), __extension__ ({ if (l_598 == &g_161) ; else __assert_fail ("l_598 == &g_161", "/tmp/tmpb6qjivzw.c", 589, __extension__ __PRETTY_FUNCTION__); }));
                p_67 = l_600;
            }
            else
            {
                uint16_t l_612 = 5U;
                p_67 = ((((safe_rshift_func_uint16_t_u_u((l_603 != l_604), (((1 ^ (safe_lshift_func_uint8_t_u_u(0x8B, l_547))) && (safe_rshift_func_uint8_t_u_s(((((((((l_583 >= (((*g_432) = (safe_sub_func_uint32_t_u_u(l_600, (l_547 < (((l_611 == (void*)0) || (-1)) > 0x866A51FD))))) < p_66)) | 65535U) > (*p_69)) >= (*p_69)) != 1U) < 1U) == l_557) & p_68), p_66))) & l_612))) || 0x76) && p_68) ^ (*p_69));
                l_613 = (*p_69);
            }
            g_518 = (safe_mod_func_int32_t_s_s((*p_69), 0x0BBA0361));
        }
    }
    else
    {
        uint16_t ***l_622 = &l_620;
        uint16_t ****l_621 = &l_622;
        int32_t l_633 = 1;
        (*g_366) = l_616;
        l_633 = ((safe_div_func_uint8_t_u_u((l_619 == ((*l_621) = &l_620)), ((safe_lshift_func_uint16_t_u_s(((safe_rshift_func_uint16_t_u_u((((&p_67 != (void*)0) < ((safe_rshift_func_int16_t_s_u((g_629 == (void*)0), 14)) && 0x5479)) > ((*g_432) | ((safe_unary_minus_func_int16_t_s((!(*p_69)))) != 0))), l_633)) | (*p_69)), l_633)) || (*g_432)))) || l_633);
    }
    l_643 = (0x0EE6 && ((safe_sub_func_uint32_t_u_u(p_67, ((safe_rshift_func_int8_t_s_s((((((safe_rshift_func_int8_t_s_u(0, (((((l_619 = &l_620) == (g_629 = &g_630)) || (safe_mod_func_uint16_t_u_u(((*p_69) & p_66), p_66))) >= p_67) & p_65))) ^ 65528U) || 0xC1212F90) > p_68) || (**g_431)), (**g_431))) >= (**g_238)))) > g_642));
    return (*p_69);
}
static uint8_t func_71(uint32_t p_72, int8_t p_73, int32_t ** p_74)
{
    uint8_t *l_205 = &g_129;
    uint8_t **l_204 = &l_205;
    int32_t l_249 = 0x8305FE1C;
    uint16_t l_306 = 0x2D74;
    int16_t **l_317 = &g_239;
    int32_t ***l_375 = &g_369;
    uint8_t l_384 = 0xC6;
    int32_t *****l_443 = (void*)0;
    uint32_t l_517 = 8U;
    int16_t l_542 = 7;
    for (g_61 = 0; (g_61 >= (-20)); g_61--)
    {
        uint8_t l_206 = 0xE5;
        int32_t *l_220 = &g_61;
        int32_t l_296 = 0x6404DC0F;
        int16_t ***l_305 = &g_238;
        int32_t ***l_373 = &g_369;
        int8_t *l_389 = &g_140;
        uint8_t ***l_534 = (void*)0;
        uint8_t ****l_535 = &g_130;
        int16_t *l_541 = &g_540;
    }
    (****g_366) = ((*p_74) = func_81((*g_432)));
    ((void) sizeof ((g_161 == 0) ? 1 : 0), __extension__ ({ if (g_161 == 0) ; else __assert_fail ("g_161 == 0", "/tmp/tmpb6qjivzw.c", 645, __extension__ __PRETTY_FUNCTION__); }));
    ((void) sizeof ((g_245 == 0) ? 1 : 0), __extension__ ({ if (g_245 == 0) ; else __assert_fail ("g_245 == 0", "/tmp/tmpb6qjivzw.c", 646, __extension__ __PRETTY_FUNCTION__); }));
    return p_73;
}
static int32_t ** func_76(int32_t * p_77, int8_t p_78, int32_t p_79, uint8_t * p_80)
{
    int32_t l_120 = 1;
    uint8_t *l_133 = &g_129;
    uint8_t **l_132 = &l_133;
    uint8_t ***l_131 = &l_132;
    int16_t l_160 = 0;
    int32_t l_170 = 0xDA5B5AAB;
    int32_t *l_195 = &g_61;
    uint8_t *l_196 = &g_129;
    int8_t *l_200 = (void*)0;
    int8_t *l_201 = (void*)0;
    if (g_58)
    {
        for (g_58 = 21; (g_58 < 13); g_58 = safe_sub_func_uint16_t_u_u(g_58, 1))
        {
            int32_t *l_102 = (void*)0;
            int32_t **l_101 = &l_102;
            int32_t *l_104 = &g_61;
            int32_t **l_103 = &l_104;
            (*l_103) = ((*l_101) = p_77);
        }
    }
    else
    {
        uint8_t *l_117 = &g_58;
        uint8_t **l_116 = &l_117;
        int32_t *l_118 = &g_61;
        int32_t **l_119 = &l_118;
        int16_t *l_121 = &g_122;
        int32_t *l_123 = &g_61;
        uint8_t l_143 = 0x98;
        (*l_123) = (0x9EFCF395 || ((safe_unary_minus_func_int16_t_s(((*l_121) = (((safe_rshift_func_int8_t_s_s(((((((((safe_rshift_func_uint8_t_u_s(g_9, 2)) >= (safe_rshift_func_int16_t_s_u(0xE6E2, (((safe_add_func_uint8_t_u_u(g_9, (safe_lshift_func_int16_t_s_u(0, 9)))) == p_78) != ((((*l_116) = &g_58) == p_80) && ((((*l_119) = l_118) == &g_61) <= l_120)))))) && g_61) == p_79) >= 0U) != g_61) > 0) | p_78), p_79)) == 65533U) > g_58)))) >= g_61));
        for (p_78 = 0; (p_78 == 14); p_78++)
        {
            uint8_t **l_127 = &l_117;
            uint8_t *l_128 = &g_129;
            int32_t l_134 = 0xCD47B9DA;
            uint16_t *l_179 = &g_180;
            uint32_t *l_181 = (void*)0;
            uint32_t *l_182 = &g_183;
        }
        for (g_61 = 0; (g_61 > 8); g_61 = safe_add_func_int16_t_s_s(g_61, 6))
        {
            uint32_t l_186 = 0x1C7E41B6;
            int32_t l_187 = 1;
            int32_t *l_188 = (void*)0;
            int32_t *l_189 = &l_170;
            (*l_189) = (l_187 = l_186);
        }
        for (g_183 = 0; (g_183 >= 55); g_183++)
        {
            int32_t *l_194 = &l_170;
            for (l_120 = 0; (l_120 > (-28)); l_120--)
            {
                g_161 = func_81(g_129);
                ((void) sizeof ((g_161 == 0) ? 1 : 0), __extension__ ({ if (g_161 == 0) ; else __assert_fail ("g_161 == 0", "/tmp/tmpb6qjivzw.c", 716, __extension__ __PRETTY_FUNCTION__); }));
                (*l_118) = ((**l_119) | l_170);
            }
            (*l_194) = ((*l_118) = (-1));
        }
    }
    p_77 = func_81((g_140 = ((((*p_80) < (0U == ((((*l_195) = l_160) || (((*l_132) = (void*)0) == (l_196 = &g_58))) <= (((((safe_sub_func_uint32_t_u_u(l_120, (4294967295U | ((!g_9) <= (p_78 = (-5)))))) != (*p_80)) && 0x9064) ^ p_79) >= g_140)))) == 65535U) != 4294967294U)));
    ((void) sizeof ((p_77 == 0) ? 1 : 0), __extension__ ({ if (p_77 == 0) ; else __assert_fail ("p_77 == 0", "/tmp/tmpb6qjivzw.c", 724, __extension__ __PRETTY_FUNCTION__); }));
    ((void) sizeof ((l_133 == &g_129 || l_133 == 0) ? 1 : 0), __extension__ ({ if (l_133 == &g_129 || l_133 == 0) ; else __assert_fail ("l_133 == &g_129 || l_133 == 0", "/tmp/tmpb6qjivzw.c", 725, __extension__ __PRETTY_FUNCTION__); }));
    ((void) sizeof ((l_196 == &g_129 || l_196 == &g_58) ? 1 : 0), __extension__ ({ if (l_196 == &g_129 || l_196 == &g_58) ; else __assert_fail ("l_196 == &g_129 || l_196 == &g_58", "/tmp/tmpb6qjivzw.c", 726, __extension__ __PRETTY_FUNCTION__); }));
    (*l_195) = (*l_195);
    return &g_161;
}
static int32_t * func_81(int8_t p_82)
{
    uint8_t *l_84 = &g_58;
    uint8_t **l_83 = &l_84;
    uint8_t ***l_85 = &l_83;
    int32_t *l_86 = (void*)0;
    (*l_85) = l_83;
    return l_86;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    g_245 = 0;
    csmith_sink_ = g_9;
    csmith_sink_ = g_58;
    csmith_sink_ = g_61;
    csmith_sink_ = g_122;
    csmith_sink_ = g_129;
    csmith_sink_ = g_140;
    csmith_sink_ = g_180;
    csmith_sink_ = g_183;
    csmith_sink_ = g_208;
    csmith_sink_ = g_211;
    csmith_sink_ = g_268;
    csmith_sink_ = g_294;
    csmith_sink_ = g_341;
    csmith_sink_ = g_418;
    csmith_sink_ = g_518;
    csmith_sink_ = g_540;
    csmith_sink_ = g_642;
    csmith_sink_ = g_687;
    csmith_sink_ = g_845;
    csmith_sink_ = g_846;
    csmith_sink_ = g_933;
    platform_main_end(0,0);
    return 0;
}
