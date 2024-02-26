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
static int8_t g_27 = 0;
static int32_t g_65 = 0;
static uint32_t g_123 = 1U;
static int32_t g_125 = 0x52BC5335;
static int16_t g_191 = (-4);
static uint8_t g_370 = 0x5F;
static const int8_t g_705 = 0x38;
static int32_t g_765 = (-9);
static uint32_t func_1(void);
static int8_t func_9(uint32_t p_10, int16_t p_11, int8_t p_12, uint16_t p_13, int8_t p_14);
static uint8_t func_21(uint32_t p_22, int32_t p_23, int8_t p_24, const int16_t p_25, const int16_t p_26);
static const int8_t func_28(uint32_t p_29, uint32_t p_30, uint32_t p_31, int8_t p_32);
static int32_t func_34(int32_t p_35, const int8_t p_36, uint32_t p_37, uint32_t p_38);
static int8_t func_42(int32_t p_43, uint16_t p_44, uint32_t p_45, int8_t p_46, uint32_t p_47);
static uint16_t func_48(uint32_t p_49);
static uint32_t func_50(int16_t p_51, int32_t p_52, uint32_t p_53, uint8_t p_54, uint32_t p_55);
static int8_t func_60(uint32_t p_61);
static uint16_t func_68(uint32_t p_69, int32_t p_70, int8_t p_71, uint16_t p_72, uint16_t p_73);
static uint32_t func_1(void)
{
    const uint32_t l_8 = 4294967295U;
    uint32_t l_33 = 4U;
    int32_t l_768 = 8;
    l_768 = (safe_lshift_func_int16_t_s_u(((safe_add_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((l_8 != 0x4B666A75), l_8)), func_9(((safe_mul_func_uint8_t_u_u((safe_unary_minus_func_uint32_t_u((((safe_rshift_func_uint8_t_u_s((~l_8), (l_8 <= func_21(l_8, g_27, (0x50 && func_28(l_8, g_27, l_33, g_27)), g_705, g_705)))) < g_765) >= 0x7B6E))), 0)) | l_33), l_33, l_8, l_33, g_370))) , g_65), 14));
    return g_191;
}
static int8_t func_9(uint32_t p_10, int16_t p_11, int8_t p_12, uint16_t p_13, int8_t p_14)
{
    uint16_t l_767 = 0x64EB;
    l_767 = g_27;
    g_125 = g_125;
    return g_765;
}
static uint8_t func_21(uint32_t p_22, int32_t p_23, int8_t p_24, const int16_t p_25, const int16_t p_26)
{
    int32_t l_749 = 0;
    int32_t l_766 = 0x2332B999;
    g_65 = (safe_sub_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((((safe_lshift_func_uint8_t_u_s((safe_mod_func_uint8_t_u_u((((l_749 == (0x36 | (((p_22 , p_26) <= g_705) ^ ((safe_add_func_int32_t_s_s(l_749, (g_125 , 0x6853BB1E))) , g_370)))) != g_123) > 65535U), 7)), p_26)) ^ g_123) >= p_23), g_705)), l_749));
    g_65 = p_26;
    p_23 = l_749;
    l_766 = (l_749 > (safe_sub_func_int32_t_s_s(((safe_rshift_func_uint16_t_u_s((safe_sub_func_int16_t_s_s((+((p_22 != ((safe_lshift_func_uint16_t_u_u((((safe_sub_func_uint8_t_u_u(251U, (safe_rshift_func_uint16_t_u_s(((0x6C != g_370) , l_749), g_765)))) , (-4)) || (-8)), 8)) < g_705)) , 252U)), p_23)), l_749)) | p_22), g_27)));
    return p_25;
}
static const int8_t func_28(uint32_t p_29, uint32_t p_30, uint32_t p_31, int8_t p_32)
{
    uint32_t l_39 = 4294967293U;
    int16_t l_62 = (-1);
    uint32_t l_157 = 4294967294U;
    uint32_t l_158 = 0x71F1E863;
    int32_t l_282 = 6;
    int16_t l_360 = (-1);
    const uint32_t l_371 = 0xF184546C;
    const uint8_t l_402 = 0xB1;
    int32_t l_407 = 2;
    int32_t l_516 = 7;
    uint32_t l_740 = 4294967295U;
    if (((func_34(l_39, (0 & (func_42(l_39, (p_29 > p_32), (func_48(func_50((safe_rshift_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(0x652F093D, (func_60(l_62) , ((safe_rshift_func_uint8_t_u_s((safe_sub_func_int32_t_s_s((((safe_add_func_uint32_t_u_u(((+(l_39 & 0x3A0B)) ^ l_62), g_27)) && 0xAFE8) < p_29), l_39)), l_157)) | 0U)))), l_158)), l_39, l_158, l_62, g_27)) < p_32), p_29, g_27) == l_158)), p_32, g_27) > 0x0697B8A6) < p_29))
    {
        int32_t l_266 = 0x0B3B6191;
        uint32_t l_313 = 0x52C77892;
        int8_t l_361 = 0x1C;
        uint32_t l_401 = 9U;
        int32_t l_476 = 0x891C9501;
        for (p_32 = (-11); (p_32 <= (-6)); p_32 = safe_add_func_int16_t_s_s(p_32, 1))
        {
            int16_t l_281 = 0x1895;
            int32_t l_314 = 0;
            uint32_t l_338 = 0xD8B250B6;
            if ((((((safe_sub_func_int32_t_s_s((safe_mod_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u(255U, l_266)), (safe_add_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((((((((g_123 >= 0xA390666A) || (safe_rshift_func_int8_t_s_u(p_32, (safe_mod_func_int16_t_s_s((safe_mod_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((l_266 | (((g_65 || (((p_32 || (safe_mod_func_int16_t_s_s(1, g_123))) ^ g_123) || p_32)) && l_281) < g_125)), p_31)), p_32)), p_29))))) > g_65) < 0xE3) > (-1)) | l_281) >= g_191), l_281)), g_65)))), p_32)) | l_266) ^ p_30) && l_282) != g_191))
            {
                const uint8_t l_298 = 0x81;
                g_65 = (safe_lshift_func_uint16_t_u_s(((safe_add_func_int16_t_s_s(((((safe_add_func_int32_t_s_s((((safe_sub_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u(((safe_sub_func_int32_t_s_s(g_125, (~(((g_191 ^ (safe_sub_func_uint16_t_u_u(0x8741, (-2)))) != (5 < (((l_298 || (safe_lshift_func_int8_t_s_s(0xCF, 3))) & (p_32 & (-1))) < l_281))) ^ (-3))))) <= 0x94D6), g_27)), 0xE2DBC656)) == 0U) && l_282), p_31)) ^ 0U) == (-5)) , 1), p_29)) || 0x22DCEF06), 14));
                return l_266;
            }
            else
            {
                uint32_t l_312 = 0x7F3D4169;
                l_313 = (((safe_rshift_func_int8_t_s_s((((g_125 < (safe_sub_func_uint16_t_u_u(l_157, (g_123 ^ (l_266 <= l_282))))) >= ((safe_rshift_func_int8_t_s_u(((((safe_rshift_func_uint8_t_u_s((p_29 , (((l_281 == (safe_unary_minus_func_int16_t_s((p_32 != l_281)))) , l_157) , g_27)), 6)) < (-1)) != l_266) | 0x0211), l_312)) , 0x2DCF)) && g_27), l_62)) & p_31) , l_312);
            }
            l_314 = l_282;
            for (l_157 = 0; (l_157 != 9); l_157 = safe_add_func_int16_t_s_s(l_157, 3))
            {
                int32_t l_337 = 0;
                uint32_t l_508 = 4294967295U;
                uint32_t l_509 = 4294967291U;
                int16_t l_528 = 0x2FF3;
                uint32_t l_530 = 0x6551CF85;
                if ((safe_add_func_uint16_t_u_u((safe_add_func_int32_t_s_s(((safe_add_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(((l_313 <= ((safe_mod_func_int16_t_s_s((((safe_sub_func_int16_t_s_s((((((((safe_add_func_uint16_t_u_u(1U, 1U)) != (((safe_sub_func_uint32_t_u_u((0xDB0E1881 <= (p_30 , ((g_191 || (-4)) || (1U < ((safe_lshift_func_int16_t_s_s((safe_add_func_uint32_t_u_u(p_31, g_125)), p_29)) & g_123))))), 0xAE36C6A7)) , g_191) , p_30)) , g_27) ^ 0xC105) | l_337) <= 0x75D1) != l_338), g_27)) , p_31) != p_29), g_125)) , g_65)) <= 4294967286U), 0x72F9)), p_30)) >= p_32), 4294967295U)), l_266)))
                {
                    uint16_t l_359 = 0xF788;
                    for (l_314 = 15; (l_314 <= 14); l_314--)
                    {
                        l_266 = (l_62 <= l_337);
                    }
                    if ((g_125 ^ ((safe_mod_func_uint32_t_u_u(0x2D1EA1B7, (safe_lshift_func_int8_t_s_u(p_30, (((((safe_mod_func_uint8_t_u_u(((g_65 , (((0xA269 <= ((safe_mod_func_uint8_t_u_u(((safe_mod_func_uint8_t_u_u((1U ^ ((((safe_unary_minus_func_uint16_t_u((safe_rshift_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_u(((((((((((~(0xA5 & ((((((g_125 , (safe_add_func_uint32_t_u_u((4294967291U >= 0x1F8D497B), g_123))) ^ p_31) >= 0x03) , 9) & 0x753BC47F) || l_338))) < g_125) , g_191) > 0U) , 0xE048) < 0xDD2F) != 0xE5) != (-1)) , 1) < g_65), 13)) == l_338), g_191)))) != l_337) | 0x92) ^ l_359)), g_123)) , 0x6F), l_359)) != g_65)) >= 0U) == l_360)) <= g_27), l_266)) < p_32) , l_361) & g_65) > (-4)))))) <= 0)))
                    {
                        int32_t l_377 = 0x2444259C;
                        l_266 = (((safe_lshift_func_int8_t_s_u((((0x43 > 0xE5) , (g_191 ^ (((1 ^ (safe_add_func_uint8_t_u_u(((((safe_sub_func_uint16_t_u_u(((g_125 | ((g_123 ^ ((safe_mod_func_int32_t_s_s(p_32, g_65)) > ((((g_65 <= p_31) != 1) >= 2) == 0x49))) , p_29)) ^ 0x55E2), l_337)) && 0x08) && g_27) | 0x2BCE), g_191))) , g_125) > l_158))) || g_370), 6)) | l_266) < l_371);
                        l_337 = (((safe_rshift_func_int8_t_s_u(((((p_29 , (g_191 , (((safe_mod_func_uint8_t_u_u(((0x62D4 ^ (~0U)) | (p_30 ^ l_360)), l_377)) <= (safe_sub_func_uint8_t_u_u((p_29 < g_123), 1))) < l_360))) , l_157) >= 0xA11E) ^ g_65), g_191)) == l_282) & 0xF02E0370);
                    }
                    else
                    {
                        const int16_t l_382 = 0;
                        g_65 = (safe_mod_func_int16_t_s_s(((((p_29 , l_382) || g_370) <= l_382) ^ ((((safe_add_func_int8_t_s_s(p_32, (safe_mod_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((((p_30 | l_338) ^ (safe_sub_func_uint16_t_u_u((((safe_sub_func_int16_t_s_s(((safe_add_func_uint8_t_u_u(l_382, (((safe_mod_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s((safe_sub_func_int16_t_s_s((((0x2FDC && 0x1D72) <= l_266) ^ 0x5F), l_401)), 1)), p_32)) && g_191) && (-1)))) >= p_30), p_29)) | 4) == l_402), (-1)))) != 0x94B34C81), p_29)), g_191)))) > g_65) > l_371) < g_125)), 65532U));
                        g_65 = g_123;
                        return g_125;
                    }
                    if (g_65)
                        break;
                    if (p_29)
                    {
                        uint32_t l_419 = 3U;
                        l_407 = (2U >= (safe_sub_func_uint16_t_u_u(p_30, (safe_rshift_func_int16_t_s_u(p_32, 9)))));
                        g_125 = ((safe_mod_func_uint32_t_u_u(((~(safe_rshift_func_int16_t_s_u((p_30 ^ (((safe_add_func_uint32_t_u_u(((safe_rshift_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(g_123, ((((((l_419 <= p_31) > 0x9A) == (0xCEC7 != g_65)) || (g_27 && 1)) != l_314) != 0U))), l_337)) == p_31), p_29)) > g_125) >= l_337)), 8))) , 4294967295U), 1)) >= 65527U);
                    }
                    else
                    {
                        int16_t l_426 = (-4);
                        int32_t l_432 = 1;
                        l_432 = ((p_29 == (safe_sub_func_int8_t_s_s((g_125 == (((safe_mod_func_int32_t_s_s((((safe_mod_func_uint32_t_u_u(l_426, g_123)) < p_30) >= (l_158 & ((+(safe_add_func_int16_t_s_s(((((safe_sub_func_uint32_t_u_u(p_30, 8)) | p_32) != l_401) ^ 0x16), 0xB2B0))) < l_359))), p_31)) <= p_29) ^ p_32)), 0))) != l_281);
                    }
                }
                else
                {
                    uint32_t l_444 = 0x38343486;
                    for (l_266 = 29; (l_266 > (-25)); --l_266)
                    {
                        uint16_t l_441 = 65535U;
                        l_407 = (((((((safe_rshift_func_uint8_t_u_u((0x87 > g_191), (((p_31 & ((g_125 , (safe_lshift_func_int16_t_s_u((p_30 ^ 0U), (((safe_mod_func_uint32_t_u_u((l_441 ^ (safe_sub_func_uint16_t_u_u(0U, ((((((g_123 & 0U) & (-1)) , p_31) | l_371) , g_27) && 0x19D29158)))), g_125)) ^ 0xBBDB) & p_29)))) || 1U)) >= g_370) && 0U))) & 0U) <= g_65) | g_123) & l_337) != l_441) , g_125);
                    }
                    l_314 = l_444;
                    l_337 = ((3 < 0xBA) && (((0xDBEB != (p_32 ^ (safe_sub_func_uint32_t_u_u(g_65, (((((((~(safe_add_func_int8_t_s_s(((safe_rshift_func_int8_t_s_u((safe_mod_func_int16_t_s_s(l_338, l_338)), (safe_rshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((p_30 & ((safe_rshift_func_uint8_t_u_u(((p_29 != g_125) , 249U), 5)) , g_370)), 1)), l_444)))) & g_123), l_314))) > l_313) , (-10)) > l_314) & g_123) && p_31) && g_123))))) >= 9) && 0));
                    g_125 = 0;
                }
                l_476 = ((((safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_s(g_65, 11)), 5)) & 255U) < (((l_338 <= (safe_mod_func_int16_t_s_s(((safe_add_func_uint8_t_u_u(l_337, ((safe_lshift_func_uint16_t_u_s(p_32, 12)) < (((((p_31 && (safe_add_func_int16_t_s_s((((((safe_rshift_func_uint16_t_u_s((l_314 | (((3U < ((safe_add_func_int8_t_s_s((g_27 || g_370), 0xA1)) > (-1))) < p_30) , g_27)), l_338)) , g_191) != l_402) | l_337) == l_266), p_32))) <= g_65) && 251U) | 0x104DD7D9) , l_338)))) || l_337), p_30))) ^ (-1)) & l_476)) <= g_370);
                for (g_191 = 7; (g_191 < (-17)); g_191--)
                {
                    uint32_t l_510 = 0x51FDE669;
                    l_314 = p_30;
                    if (p_31)
                        break;
                    if ((((65535U >= p_31) <= (((((l_401 , (safe_lshift_func_uint16_t_u_s((((((((((safe_lshift_func_uint16_t_u_s(l_337, (+(safe_add_func_uint16_t_u_u((safe_add_func_int32_t_s_s(((safe_rshift_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_u(((safe_unary_minus_func_uint32_t_u((0xA2 <= (g_370 , l_313)))) || ((safe_sub_func_int32_t_s_s((safe_sub_func_uint8_t_u_u(0U, ((safe_mod_func_int32_t_s_s(((((((((((((safe_lshift_func_int16_t_s_s((+((safe_add_func_uint32_t_u_u((((safe_rshift_func_int16_t_s_s(l_337, g_370)) < 0x77881C60) , g_125), l_62)) && (-1))), g_370)) && l_361) ^ 0x9F76C228) >= 0U) | 0xC273DC26) , g_370) & 0x3C) != p_29) || g_191) , p_32) , p_30) | l_508), g_123)) != p_31))), 0x496C1127)) > l_314)), g_123)), 1)) , 0x6A), 4)) != g_125), l_509)), 0x3E04))))) ^ p_29) ^ 0xA1) , 0x039F) > 0xF094) , 0U) && (-3)) ^ g_370) , g_123), 4))) ^ 1U) < p_32) < l_510) ^ 255U)) ^ g_125))
                    {
                        uint16_t l_529 = 0x6931;
                        l_314 = (!l_314);
                        l_530 = (((safe_rshift_func_int16_t_s_s((safe_sub_func_int32_t_s_s((l_516 && ((+255U) && l_402)), p_31)), 3)) , ((((g_27 > (((l_371 && ((safe_mod_func_uint8_t_u_u(((safe_sub_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_s(((((((safe_add_func_uint32_t_u_u((((g_125 && (safe_rshift_func_int8_t_s_s(0x4A, 2))) , (l_281 , 4294967295U)) != g_370), l_510)) >= 0xD12B) | 0x815A) < l_528) , l_510) | l_314), 10)) , 0x0281), l_510)) , p_31), 0xA0)) , (-1))) , 0xED294866) , p_31)) > 4U) & l_338) <= g_125)) && l_529);
                    }
                    else
                    {
                        return g_370;
                    }
                }
            }
        }
    }
    else
    {
        uint32_t l_531 = 4U;
        int8_t l_544 = 0xE9;
        uint8_t l_574 = 0x23;
        uint16_t l_635 = 0xE9D1;
        uint32_t l_722 = 4294967292U;
        g_65 = l_531;
        if (p_29)
        {
            int16_t l_545 = 0xE4E0;
            g_65 = (g_370 != (((65535U <= g_65) || 0x8AEBA5A6) ^ (safe_sub_func_uint8_t_u_u((safe_add_func_int16_t_s_s((safe_mod_func_uint8_t_u_u((((((l_531 , (safe_rshift_func_int8_t_s_s(0x51, (((safe_add_func_int16_t_s_s((((safe_add_func_int16_t_s_s((0xE9C3CC93 >= 0xCDDFC541), ((g_27 <= g_370) > 0x3E))) != l_544) || p_31), g_125)) != l_545) <= 0xEC)))) < 6U) || p_30) <= l_545) & l_62), p_30)), p_29)), 0x8A))));
        }
        else
        {
            uint16_t l_558 = 0U;
            uint16_t l_575 = 0xC307;
            int32_t l_707 = 0xD82BBA5C;
            if ((!(((!((safe_lshift_func_int8_t_s_u((safe_mod_func_uint16_t_u_u(((safe_sub_func_uint32_t_u_u(4294967295U, ((((((((safe_sub_func_int16_t_s_s((((safe_sub_func_int16_t_s_s(((((0x0B300B62 >= l_402) ^ l_558) == l_158) & (!(safe_mod_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_s((0x47C92CC1 || ((safe_lshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((safe_mod_func_uint32_t_u_u(((p_31 , 9U) && (safe_rshift_func_int8_t_s_u((safe_mod_func_int32_t_s_s(p_31, g_27)), l_516))), 4294967290U)), 3)), 5)) != g_27)), g_191)), 7)))), 0x56E7)) && g_65) && l_158), l_407)) <= l_544) && l_544) || g_65) ^ l_574) == p_32) , 0x1F47291F) <= 0xE42CBC97))) >= 0xA1F2), l_371)), g_27)) , l_407)) <= 0U) , l_575)))
            {
                const uint32_t l_577 = 0xAF5AF13E;
                g_125 = (!((((g_65 || l_577) | ((p_29 >= l_574) || ((p_30 , (safe_unary_minus_func_uint8_t_u((((((safe_add_func_uint16_t_u_u(g_65, (((safe_sub_func_uint32_t_u_u((((safe_add_func_int32_t_s_s((((((0x63BEA127 & g_123) & (safe_rshift_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(((((((safe_add_func_uint32_t_u_u(((l_157 ^ g_65) , g_370), 0xCCA0AAD1)) , 2U) >= g_27) , 0x0730) | l_575) ^ 0xD7E1A42C), g_123)), 5))) == p_29) != 0x315C) != l_577), 0x96608AE7)) != p_30) | p_32), p_29)) , g_27) != 0x8F))) < g_125) , 0x103C6BBC) && g_123) & l_558)))) < g_191))) >= p_30) != (-1)));
            }
            else
            {
                int32_t l_611 = (-1);
                int32_t l_612 = 0xCEE95F5B;
                int16_t l_634 = 5;
                const int8_t l_636 = 3;
                int32_t l_725 = (-8);
                l_612 = (((safe_mod_func_uint8_t_u_u(p_31, l_407)) <= g_65) <= (!((safe_add_func_int16_t_s_s(0x53CF, (safe_unary_minus_func_uint16_t_u((p_30 > ((((safe_add_func_uint16_t_u_u((~(+(((safe_sub_func_uint8_t_u_u(((((safe_sub_func_uint32_t_u_u((((p_32 , (safe_mod_func_uint8_t_u_u((1 & (safe_lshift_func_uint16_t_u_s(g_125, ((g_123 , (-10)) != 0U)))), p_31))) > l_611) < l_574), l_157)) && 0xA2) && p_31) != l_574), 0x29)) < 2U) != g_191))), p_32)) > l_531) < (-1)) | p_31)))))) == p_32)));
                if ((safe_rshift_func_uint16_t_u_u(((((!((safe_lshift_func_int8_t_s_u((((-1) || (safe_add_func_int16_t_s_s(0, ((((((safe_rshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_s(g_123, (safe_mod_func_uint8_t_u_u((((((((p_29 , ((safe_unary_minus_func_uint8_t_u((safe_lshift_func_uint8_t_u_s(((((l_407 <= 9) , ((((safe_mod_func_uint32_t_u_u((p_32 > (((safe_lshift_func_uint8_t_u_u((!g_191), 0)) , (g_191 != l_575)) ^ l_634)), g_123)) & l_558) || g_370) , p_31)) , g_125) != g_65), l_634)))) == l_635)) , g_125) , p_30) >= l_575) >= p_30) ^ l_635) , g_123), (-1))))), g_27)) ^ g_27) && l_636) != p_30) ^ 0x3C0FBA9D) ^ 0x335C)))) && (-1)), p_32)) | 0x3216)) == g_27) >= l_544) ^ g_65), 15)))
                {
                    uint8_t l_653 = 0x8F;
                    if ((((safe_sub_func_uint8_t_u_u(g_191, (-10))) <= ((((((safe_lshift_func_int8_t_s_u(0x4B, ((p_31 & (safe_add_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s((g_370 & (safe_mod_func_uint8_t_u_u((((p_30 >= (safe_rshift_func_int16_t_s_s(p_30, (p_29 || (safe_sub_func_int16_t_s_s((((safe_rshift_func_uint16_t_u_u(p_30, 13)) ^ p_32) != l_636), 1)))))) || p_32) == p_30), 0x94))), 4)), 0xCD))) , g_370))) , 0x0DC0288F) , l_653) == 0x20CAC603) & l_634) == 4294967295U)) || g_191))
                    {
                        l_612 = g_65;
                        l_407 = (~0xF020);
                    }
                    else
                    {
                        uint32_t l_672 = 0x3080E2CB;
                        int32_t l_690 = 2;
                        g_65 = (safe_rshift_func_int16_t_s_u(p_32, ((l_402 <= (l_636 > (g_65 ^ (safe_lshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u((l_157 <= ((p_31 , (((((((p_29 && (+p_31)) != (-1)) || g_191) < p_29) && g_191) | p_30) < p_32)) > 246U)), l_653)) < g_123), g_123)), p_32))))) | 65535U)));
                        l_690 = ((p_29 == (safe_rshift_func_uint16_t_u_u(((g_123 ^ (safe_rshift_func_int8_t_s_s(((safe_add_func_uint32_t_u_u(((((safe_add_func_uint32_t_u_u(((l_672 > 1) & (safe_add_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((l_635 & (((((((((((((safe_lshift_func_uint16_t_u_u((safe_unary_minus_func_int32_t_s(p_32)), 3)) | ((safe_unary_minus_func_int32_t_s(((((l_558 == (safe_add_func_uint16_t_u_u(0xE114, (safe_lshift_func_int16_t_s_s(((safe_rshift_func_int8_t_s_s((+(((safe_lshift_func_int8_t_s_u((p_32 && p_29), g_370)) <= g_370) < g_125)), 3)) == g_123), 12))))) == 7U) <= p_32) , l_575))) <= g_125)) != (-9)) , p_31) ^ 1) < g_27) || p_29) || 1U) , p_31) || l_282) , 1) , 1) != p_29)), p_30)), g_123))), g_125)) != l_635) | 6) == p_29), (-1))) & g_123), g_370))) ^ 0xE2), l_672))) ^ 0x58AD98EB);
                        l_612 = 0xE41A86F6;
                    }
                }
                else
                {
                    uint32_t l_706 = 0x166B52D0;
                    uint32_t l_723 = 4294967292U;
                    if ((safe_lshift_func_int8_t_s_s((-10), ((safe_mod_func_int16_t_s_s((9U >= (safe_mod_func_uint8_t_u_u((l_634 > (safe_lshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_u((((safe_unary_minus_func_uint32_t_u(((((safe_lshift_func_int8_t_s_s(g_27, 0)) > (l_531 && ((1U >= (-4)) != (p_31 == (!l_39))))) ^ g_705) <= p_32))) > l_706) & l_360), 2)), l_636))), 1U))), p_32)) & 8U))))
                    {
                        l_707 = g_27;
                    }
                    else
                    {
                        g_125 = (l_706 ^ ((-1) | p_30));
                    }
                    for (l_612 = 0; (l_612 <= (-9)); --l_612)
                    {
                        int16_t l_724 = 0x7516;
                        l_725 = (safe_rshift_func_uint8_t_u_s((g_125 , (((safe_mod_func_int8_t_s_s(((((safe_rshift_func_int16_t_s_s((g_125 <= (safe_lshift_func_uint8_t_u_s(((((((safe_mod_func_uint32_t_u_u(((((l_635 < (0x52DD > 0xD6F2)) & (((0x81 <= ((safe_add_func_uint32_t_u_u(p_32, g_191)) , l_531)) != p_31) , 0xF6)) == p_31) ^ l_722), l_636)) | g_123) && g_65) > 65529U) ^ g_370) && 3U), l_707))), 12)) ^ l_723) <= p_30) & 6), g_65)) != l_722) < p_29)), l_724));
                        return p_32;
                    }
                    g_125 = (safe_mod_func_int8_t_s_s(((((safe_sub_func_uint16_t_u_u(((g_65 , (0xA6 & g_123)) && (((((~8U) | (safe_sub_func_uint32_t_u_u(g_705, 0))) <= ((safe_mod_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(((safe_unary_minus_func_int8_t_s((((((safe_add_func_int32_t_s_s((0U >= g_191), (((l_706 <= l_282) <= p_32) <= (-5)))) , g_705) < p_32) & 1) || l_740))) , p_31), 3)), p_30)) >= 0x867D08A5)) , p_31) | g_705)), 65526U)) >= g_65) ^ p_30) > g_65), g_191));
                }
                return l_722;
            }
        }
    }
    return g_125;
}
static int32_t func_34(int32_t p_35, const int8_t p_36, uint32_t p_37, uint32_t p_38)
{
    return g_123;
}
static int8_t func_42(int32_t p_43, uint16_t p_44, uint32_t p_45, int8_t p_46, uint32_t p_47)
{
    uint32_t l_249 = 0x4785C46A;
    int32_t l_254 = 4;
    int32_t l_257 = 7;
    l_257 = ((g_65 >= (safe_lshift_func_int16_t_s_s((safe_add_func_int32_t_s_s(p_47, (safe_add_func_uint8_t_u_u((l_249 && g_123), (1 <= (((safe_add_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((l_254 ^ ((-1) & p_45)), (safe_add_func_uint16_t_u_u(0xA436, p_47)))), p_47)) == 9U) || l_254)))))), 5))) ^ l_249);
    g_125 = 0xE0A59551;
    return g_191;
}
static uint16_t func_48(uint32_t p_49)
{
    int16_t l_204 = 0xCAD8;
    int32_t l_205 = (-1);
    int8_t l_238 = 0xB9;
    l_204 = p_49;
    l_205 = g_65;
    g_65 = (((safe_lshift_func_int16_t_s_u((safe_mod_func_uint8_t_u_u((((safe_lshift_func_int16_t_s_s(0x154B, 13)) == (safe_mod_func_int32_t_s_s((p_49 | (safe_lshift_func_uint8_t_u_u((0xC5 | (g_125 | ((0x14C0 <= (((safe_add_func_int32_t_s_s((safe_add_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_s((((safe_lshift_func_int16_t_s_u(p_49, ((safe_add_func_uint16_t_u_u(((safe_add_func_int32_t_s_s((g_125 | (((p_49 < (((((safe_sub_func_uint32_t_u_u((((((((safe_rshift_func_uint16_t_u_u(((safe_add_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u(g_123, p_49)), 0x8B824882)) , g_27), l_238)) >= 0x83F6) | 9) && l_204) != g_123) > l_238) < (-3)), 4294967295U)) || 0xBE125798) == (-1)) && g_123) && l_204)) < g_191) , p_49)), g_125)) != l_205), l_204)) || p_49))) && 1) ^ g_27), l_204)), 3)) ^ p_49), g_123)), l_204)) , l_204) & l_204)) == p_49))), l_204))), g_123))) && l_204), l_205)), 2)) , g_125) <= l_205);
    for (p_49 = 0; (p_49 > 9); p_49 = safe_add_func_int16_t_s_s(p_49, 5))
    {
        uint8_t l_242 = 0x21;
        l_205 = (!(0x7C837AE3 | g_123));
        l_242 = l_238;
    }
    return l_238;
}
static uint32_t func_50(int16_t p_51, int32_t p_52, uint32_t p_53, uint8_t p_54, uint32_t p_55)
{
    int32_t l_168 = 1;
    uint32_t l_173 = 0x5D9A7C64;
    g_125 = (((safe_lshift_func_int16_t_s_u((1U || g_123), 8)) && g_123) , ((safe_rshift_func_uint16_t_u_u(((((safe_lshift_func_int8_t_s_u((g_65 == ((safe_add_func_uint16_t_u_u((+(((l_168 < l_168) <= ((safe_rshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(l_173, 4)), 8)) && ((g_65 >= 65535U) & g_27))) , 0)), 0x68A7)) == g_65)), 6)) && g_125) > p_52) && p_52), 11)) , p_54));
    g_125 = (((safe_rshift_func_int8_t_s_s(g_65, 3)) > ((safe_add_func_uint8_t_u_u(g_27, l_173)) && l_173)) && (safe_add_func_int8_t_s_s((safe_add_func_uint8_t_u_u((0xD6 > ((!((g_123 != (safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_s((((((l_168 == (((safe_add_func_uint32_t_u_u((((safe_rshift_func_uint16_t_u_s(((g_123 > p_53) & l_168), 1)) | l_168) , 0xD885D17D), l_173)) < 0xF0) > (-5))) ^ 4294967295U) , g_65) <= 1) <= p_51), 4)), 9))) <= g_65)) && 0x98D0)), g_27)), 253U)));
    l_168 = (l_173 , (g_191 >= (safe_add_func_int8_t_s_s((safe_mod_func_int8_t_s_s((((l_168 == g_123) ^ (((((p_54 || (((safe_lshift_func_uint16_t_u_u((9 || (((safe_sub_func_uint8_t_u_u((l_168 <= ((l_173 == (safe_add_func_uint32_t_u_u((safe_add_func_int8_t_s_s((((p_52 == l_168) & 0x70D6C77F) < 0xCA6F), p_51)), p_52))) , g_125)), 0x51)) >= g_123) || l_173)), 9)) , g_65) && 0x25)) , l_173) & g_191) , l_173) , p_55)) & 0xD2CF), 1U)), p_52))));
    p_52 = 0xB30F1BED;
    return p_51;
}
static int8_t func_60(uint32_t p_61)
{
    int16_t l_134 = 0x8A63;
    int32_t l_149 = (-1);
    for (p_61 = (-11); (p_61 == 48); p_61++)
    {
        uint32_t l_76 = 0U;
        for (g_65 = 0; (g_65 <= (-10)); g_65--)
        {
            const int8_t l_85 = 0;
            uint16_t l_86 = 0x237D;
            int32_t l_126 = 0x825D0D30;
            int16_t l_129 = 2;
            g_125 = (func_68((g_65 > ((((safe_add_func_int16_t_s_s(l_76, (safe_add_func_int16_t_s_s(((p_61 >= (safe_mod_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((0x7067 ^ (safe_sub_func_uint32_t_u_u(0x92FE2CCF, p_61))), l_85)), p_61))) , g_27), g_65)))) >= l_76) , 0x014E) > l_85)), p_61, l_86, p_61, l_85) & 0x1CDA);
            l_126 = 0x7FFA3025;
            g_125 = ((g_27 || ((safe_mod_func_int32_t_s_s((l_129 < (((((p_61 | ((((((0x8F ^ (safe_unary_minus_func_int8_t_s(l_76))) == g_123) ^ 0x4FF7D934) && (g_125 == (+(g_27 & p_61)))) < 0x1B5FDDB2) ^ 0xF4)) && g_27) >= 0U) < 1U) >= p_61)), 0x3E796DA1)) & 0x5C13)) >= p_61);
        }
        l_134 = (safe_lshift_func_uint16_t_u_s(0U, (g_27 >= p_61)));
    }
    g_125 = (((safe_rshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_s(g_27, 2)), 3)) >= ((safe_add_func_uint16_t_u_u((((((p_61 , g_125) >= (((safe_mod_func_int16_t_s_s(((p_61 <= p_61) >= (0xDB ^ 255U)), (safe_rshift_func_uint16_t_u_u(0xE726, ((((safe_mod_func_int32_t_s_s(((g_123 , 6) <= g_65), 4294967295U)) > g_65) < 0x36E8D033) == 2))))) | g_125) , g_125)) & 0x9730) ^ p_61) <= g_65), p_61)) > 0)) <= p_61);
    g_65 = g_123;
    for (l_134 = 0; (l_134 <= (-2)); --l_134)
    {
        g_65 = (l_134 <= l_134);
        l_149 = p_61;
    }
    return p_61;
}
static uint16_t func_68(uint32_t p_69, int32_t p_70, int8_t p_71, uint16_t p_72, uint16_t p_73)
{
    int32_t l_93 = 0x9EFCF395;
    uint8_t l_98 = 255U;
    int32_t l_109 = 0x2910E9FB;
    int16_t l_121 = 0x1833;
    uint32_t l_122 = 0xAEF27357;
    uint32_t l_124 = 4294967288U;
    l_109 = ((safe_mod_func_uint32_t_u_u((safe_add_func_uint16_t_u_u((((safe_lshift_func_int16_t_s_s((l_93 || ((((safe_lshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s((((g_27 || l_98) , (0x6733 && (0U <= (((safe_rshift_func_uint8_t_u_s(((safe_rshift_func_int16_t_s_u((((((safe_lshift_func_uint16_t_u_s(((((safe_sub_func_uint8_t_u_u((l_98 < (p_70 & (((safe_rshift_func_int16_t_s_u((g_27 , g_65), 7)) != p_72) && 6))), l_93)) , (-10)) ^ 0x146F) , g_65), 9)) ^ g_27) , 1U) | 65532U) , l_93), 10)) <= 0x505A), l_93)) < l_93) >= g_65)))) || p_71), p_69)), g_65)) > (-4)) , 0xF5A29150) | (-1))), l_109)) <= g_27) <= p_73), (-1))), 0xBCA7AF0C)) || p_72);
    g_123 = (+((0x56B7 & (g_27 , (l_98 < ((safe_unary_minus_func_uint32_t_u(((l_98 != p_72) > ((safe_sub_func_uint8_t_u_u(((l_98 , (safe_mod_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((((safe_unary_minus_func_int8_t_s(p_71)) && ((safe_sub_func_int32_t_s_s((((((((0x810F1DDE == (g_65 != 0x06)) >= l_121) , l_98) <= g_65) > l_122) , p_72) & p_70), p_73)) == g_65)) , l_121), p_69)), 0x6DC0))) <= l_122), l_122)) ^ l_122)))) , l_93)))) | g_65));
    return l_124;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_27;
    csmith_sink_ = g_65;
    csmith_sink_ = g_123;
    csmith_sink_ = g_125;
    csmith_sink_ = g_191;
    csmith_sink_ = g_370;
    csmith_sink_ = g_705;
    csmith_sink_ = g_765;
    platform_main_end(0,0);
    return 0;
}
