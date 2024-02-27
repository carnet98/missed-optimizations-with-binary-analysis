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
   const int8_t f0;
   const uint8_t f1;
   int32_t f2;
   int8_t f3;
   const uint32_t f4;
};
struct S1 {
   uint8_t f0;
   int16_t f1;
   const int32_t f2;
   const int8_t f3;
   const struct S0 f4;
   const struct S0 f5;
};
struct S2 {
   const int32_t f0;
   uint8_t f1;
   int32_t f2;
   const int8_t f3;
   uint16_t f4;
   struct S0 f5;
   uint8_t f6;
   struct S1 f7;
   const int32_t f8;
};
struct S3 {
   uint8_t f0;
   const uint8_t f1;
   const uint32_t f2;
   uint16_t f3;
   uint8_t f4;
   const uint8_t f5;
};
static const int32_t g_2 = 0x831D26ECL;
static struct S1 g_91 = {0xD8L,0xE6AFL,0L,1L,{0xF1L,0x9FL,-5L,0x88L,1UL},{0xC4L,0x6BL,-1L,0xF1L,1UL}};
static int16_t g_193 = 1L;
static const struct S2 g_241 = {0L,9UL,0x506700EAL,-10L,0xEDF7L,{0L,0x48L,0x63081A09L,0x70L,1UL},0x2DL,{0UL,-8L,0xA95D1FD8L,-7L,{2L,0x00L,9L,0x76L,0x89BE4A16L},{1L,0x7DL,1L,0xFAL,0xA99E674FL}},0xF1FA6DF7L};
static uint32_t g_251 = 0x58D5EF94L;
static int32_t g_265 = 8L;
static uint8_t g_389 = 0xE6L;
static int32_t g_513 = 0x53FEF327L;
static const struct S3 g_534 = {0xCAL,0x2FL,0xA066165AL,0x88E1L,0x90L,0xEBL};
static uint16_t g_669 = 0x7ACEL;
static int16_t g_692 = (-1L);
inline static uint32_t func_1(void);
static int16_t func_3(uint32_t p_4, int16_t p_5, const int8_t p_6, int32_t p_7, int16_t p_8);
inline static struct S3 func_11(int8_t p_12, int32_t p_13, uint32_t p_14, uint8_t p_15);
inline static int8_t func_16(int32_t p_17, int16_t p_18, int16_t p_19, int32_t p_20);
static uint16_t func_23(int8_t p_24, int16_t p_25, int32_t p_26, uint16_t p_27, int16_t p_28);
static uint16_t func_49(int32_t p_50, const int32_t p_51, const int32_t p_52, uint8_t p_53, int8_t p_54);
static int32_t func_55(uint32_t p_56, int32_t p_57, int8_t p_58);
inline static int32_t func_62(int16_t p_63, uint32_t p_64);
static const struct S0 func_67(uint8_t p_68, uint8_t p_69);
static int32_t func_75(int32_t p_76, int16_t p_77, int16_t p_78, const uint32_t p_79, uint16_t p_80);
inline static uint32_t func_1(void)
{
    int16_t l_38 = 0x214FL;
    int32_t l_852 = (-2L);
    if (g_2)
    {
        int8_t l_843 = 0x0AL;
        l_852 = (func_3((safe_rshift_func_int8_t_s_s(g_2, (func_11(func_16((safe_add_func_int8_t_s_s(0x11L, (func_23(g_2, g_2, (((safe_mod_func_uint8_t_u_u(g_2, (safe_add_func_int16_t_s_s((((safe_rshift_func_int16_t_s_u((safe_sub_func_int8_t_s_s((!g_2), (g_2 < 0x0A117216L))), 0)) < l_38) , 0x3671L), g_2)))) , g_2) | g_2), g_2, l_38) != 0x290DL))), l_38, g_91.f4.f4, l_38), l_843, l_38, g_241.f8) , 1L))), l_843, l_38, g_241.f1, g_241.f7.f0) ^ 4UL);
        g_265 = (safe_lshift_func_uint16_t_u_s(g_91.f4.f0, (safe_mod_func_uint8_t_u_u(((((safe_lshift_func_int8_t_s_u(g_241.f7.f4.f4, ((((g_241.f7.f4.f0 >= (l_843 , 0x80L)) | (safe_rshift_func_uint16_t_u_u(g_241.f7.f0, (+(safe_sub_func_uint32_t_u_u(((~0xAD137BDFL) >= (l_38 <= l_843)), l_843)))))) > g_91.f4.f4) && l_843))) < l_852) != g_91.f4.f3) ^ l_843), g_241.f4))));
    }
    else
    {
        g_265 = 7L;
    }
    l_852 = g_241.f5.f4;
    return g_2;
}
static int16_t func_3(uint32_t p_4, int16_t p_5, const int8_t p_6, int32_t p_7, int16_t p_8)
{
    for (g_91.f0 = 0; (g_91.f0 == 17); g_91.f0 = safe_add_func_int8_t_s_s(g_91.f0, 1))
    {
        struct S1 l_849 = {0x74L,0x1FF2L,0x28210E46L,0x19L,{1L,255UL,7L,1L,18446744073709551613UL},{0x9EL,0x3CL,0L,0xAEL,0UL}};
        g_265 = (((l_849 , 0xBDL) <= 0x6AL) | (0x239AL & (((g_389 > (p_8 && ((p_6 , g_241.f7.f4.f2) ^ ((safe_sub_func_uint32_t_u_u(g_389, p_6)) || 0x32B6D922L)))) ^ 6L) > 0xF3EF30D3L)));
    }
    return p_8;
}
inline static struct S3 func_11(int8_t p_12, int32_t p_13, uint32_t p_14, uint8_t p_15)
{
    int8_t l_844 = 1L;
    int32_t l_845 = 1L;
    struct S3 l_846 = {250UL,0x34L,4294967295UL,0UL,0UL,1UL};
    l_845 = l_844;
    return l_846;
}
inline static int8_t func_16(int32_t p_17, int16_t p_18, int16_t p_19, int32_t p_20)
{
    uint32_t l_842 = 7UL;
    g_265 = 0xB3B11B21L;
    return l_842;
}
static uint16_t func_23(int8_t p_24, int16_t p_25, int32_t p_26, uint16_t p_27, int16_t p_28)
{
    uint32_t l_39 = 4294967295UL;
    uint8_t l_59 = 0x5DL;
    int32_t l_72 = 0x42EE1E3CL;
    uint8_t l_812 = 1UL;
    p_26 = l_39;
    p_26 = ((safe_lshift_func_int8_t_s_s(((((~(p_27 && (safe_sub_func_int32_t_s_s(0L, (safe_lshift_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(l_39, g_2)), func_49(func_55(((l_59 <= (((safe_lshift_func_int16_t_s_u((func_62((safe_lshift_func_uint16_t_u_s((func_67(((((safe_div_func_uint16_t_u_u(l_72, g_2)) , ((safe_sub_func_uint8_t_u_u((4294967286UL ^ func_75((safe_add_func_uint8_t_u_u(((safe_add_func_uint8_t_u_u(p_27, 2UL)) > 0xF1L), 0x25L)), p_24, g_2, g_2, g_2)), l_59)) > p_25)) >= 1L) , 1UL), g_241.f5.f0) , 4UL), 4)), l_59) >= g_91.f4.f0), g_241.f7.f4.f3)) == l_59) && p_25)) <= g_241.f5.f1), l_812, p_24), p_26, l_39, p_24, l_39))))))) , l_812) >= g_2) || l_39), 3)) >= (-1L));
    return g_241.f3;
}
static uint16_t func_49(int32_t p_50, const int32_t p_51, const int32_t p_52, uint8_t p_53, int8_t p_54)
{
    int32_t l_813 = 0x36FB10EBL;
    struct S1 l_827 = {1UL,0x0E04L,0x1296843FL,0x46L,{-6L,1UL,-1L,0xBEL,0x8A522DD0L},{-1L,0xEFL,-8L,-1L,0UL}};
    int16_t l_830 = 0L;
    const int32_t l_840 = 0x1829392EL;
    uint8_t l_841 = 255UL;
    l_813 = 0x459FE723L;
    l_813 = (p_53 ^ (safe_sub_func_int32_t_s_s(((safe_lshift_func_uint16_t_u_u((+(g_241 , p_53)), ((+(((!((((safe_rshift_func_uint8_t_u_u(p_51, 5)) , 0x60L) < (g_91.f5.f3 ^ ((safe_sub_func_int8_t_s_s((((((0xB116CA6AL != (safe_lshift_func_int8_t_s_s((((l_827 , (((safe_add_func_int32_t_s_s((((p_54 || 254UL) , p_52) & 0UL), 0x0AE35E17L)) < 0x86D2L) <= l_827.f4.f0)) || p_53) || g_241.f7.f4.f2), 4))) >= 1L) | g_241.f4) == g_91.f4.f4) ^ 0UL), g_241.f5.f4)) , 0x59L))) < p_52)) , p_52) , 7UL)) ^ (-4L)))) > g_91.f5.f1), 4294967294UL)));
    g_265 = (((l_813 | (l_827.f0 | ((l_827.f5 , l_827) , (0x2DL & p_53)))) | l_830) < g_91.f4.f3);
    if (((safe_unary_minus_func_int16_t_s(((-2L) & ((((safe_div_func_uint32_t_u_u(p_52, (l_827.f5 , g_241.f7.f4.f1))) && ((0x9FBE7244L || (safe_mod_func_uint8_t_u_u((((safe_div_func_uint8_t_u_u(l_827.f4.f0, (((((safe_lshift_func_uint8_t_u_s(0x5BL, 0)) & l_827.f4.f2) , (-4L)) | l_813) , g_241.f1))) > p_54) < p_52), l_840))) ^ l_841)) | p_53) != p_50)))) ^ l_827.f5.f4))
    {
        g_265 = g_91.f4.f0;
        return p_53;
    }
    else
    {
        return g_91.f4.f3;
    }
}
static int32_t func_55(uint32_t p_56, int32_t p_57, int8_t p_58)
{
    return p_58;
}
inline static int32_t func_62(int16_t p_63, uint32_t p_64)
{
    uint32_t l_811 = 5UL;
    l_811 = (((safe_div_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(g_241.f5.f1, (safe_div_func_uint16_t_u_u(0xD4A4L, g_389)))), g_241.f8)) , 0UL) > g_241.f7.f4.f4);
    return g_241.f3;
}
static const struct S0 func_67(uint8_t p_68, uint8_t p_69)
{
    int8_t l_311 = 4L;
    int32_t l_312 = 0L;
    struct S3 l_340 = {0xD7L,0x77L,4294967295UL,1UL,255UL,0UL};
    uint32_t l_443 = 6UL;
    struct S0 l_499 = {1L,255UL,2L,0L,2UL};
    uint32_t l_500 = 0UL;
    uint8_t l_554 = 1UL;
    int32_t l_578 = (-5L);
    uint16_t l_631 = 2UL;
    int32_t l_727 = (-1L);
    struct S2 l_737 = {-1L,255UL,0L,-10L,0xADB3L,{1L,0x4FL,0x51B05162L,-6L,0x212DB133L},2UL,{247UL,0L,0xC8B0D13BL,-1L,{1L,0x41L,0L,1L,18446744073709551615UL},{0xA8L,255UL,0xD974D5EDL,9L,0x1DDEC8ABL}},0x2DE412D0L};
    uint32_t l_785 = 0xA1671531L;
    l_312 = (safe_rshift_func_uint8_t_u_u(p_69, ((+p_68) != l_311)));
    for (l_311 = 0; (l_311 == (-9)); l_311--)
    {
        uint8_t l_320 = 1UL;
        int32_t l_335 = 1L;
        int32_t l_337 = 1L;
        if ((safe_lshift_func_int16_t_s_s(1L, 8)))
        {
            int16_t l_336 = (-1L);
            if (p_68)
                break;
            l_337 = (safe_unary_minus_func_int32_t_s((safe_mod_func_int32_t_s_s(((g_91.f5.f4 ^ (l_320 , 0xBF14L)) ^ p_69), (safe_mod_func_uint8_t_u_u((((safe_rshift_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(((safe_div_func_uint16_t_u_u(((((((safe_sub_func_int8_t_s_s(p_69, (safe_lshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_s(((p_68 <= (0x2CFCF388L < g_241.f7.f4.f3)) , g_241.f1), 6)), 5)))) >= p_69) < p_68) < (-1L)) , 0L) != l_335), 1UL)) & 4294967295UL), 0xF8A4L)), g_193)) == 0x99L) > l_336), l_311))))));
        }
        else
        {
            l_337 = p_68;
        }
    }
    g_265 = (!((safe_unary_minus_func_int32_t_s(l_312)) , l_311));
    if ((l_340 , (safe_add_func_int16_t_s_s(l_340.f4, (((safe_mod_func_uint8_t_u_u((safe_div_func_uint32_t_u_u(g_91.f4.f0, ((((((p_68 , ((-10L) == l_340.f5)) <= ((safe_div_func_int8_t_s_s(((safe_add_func_uint8_t_u_u(0x05L, (safe_rshift_func_uint16_t_u_s(p_69, (p_69 == l_311))))) || p_69), l_311)) , l_312)) | l_340.f1) <= p_69) <= p_69) , l_340.f4))), (-1L))) , p_69) == g_91.f3)))))
    {
        uint32_t l_372 = 0x7261D153L;
        int32_t l_416 = (-3L);
        struct S1 l_444 = {0UL,0xFF00L,4L,-2L,{0L,248UL,0L,1L,0x7ADEB0F8L},{0xDCL,0UL,-8L,0xC4L,18446744073709551615UL}};
        struct S2 l_484 = {1L,2UL,-9L,-1L,0x0AA9L,{3L,0x08L,0xB1EE37CEL,0x4EL,0UL},0UL,{255UL,0xD665L,0xA303509AL,0x34L,{0xB1L,253UL,-10L,0x92L,0xB95AF0C2L},{1L,9UL,1L,0L,18446744073709551615UL}},0x7C76657BL};
        const uint32_t l_527 = 9UL;
        uint32_t l_632 = 4294967288UL;
        const int32_t l_671 = (-1L);
        uint32_t l_684 = 0x4CC3B4C0L;
        int8_t l_766 = 0x86L;
        l_312 = p_68;
        for (l_312 = 0; (l_312 != 24); l_312 = safe_add_func_uint8_t_u_u(l_312, 6))
        {
            uint16_t l_367 = 1UL;
            uint32_t l_388 = 0UL;
            if (g_241.f8)
                break;
            if ((safe_add_func_uint8_t_u_u(249UL, (~(((((safe_rshift_func_uint8_t_u_u((((((!((((safe_sub_func_int16_t_s_s(((+(!(l_367 ^ (p_68 >= (safe_mod_func_uint32_t_u_u(((((((safe_lshift_func_uint8_t_u_u(((l_372 || g_91.f3) ^ g_251), ((safe_div_func_int16_t_s_s((g_241.f7.f4.f3 <= (safe_div_func_uint8_t_u_u((((!(safe_add_func_uint8_t_u_u((safe_add_func_int32_t_s_s((safe_rshift_func_int16_t_s_u((((((safe_mod_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(p_69, (p_69 != l_372))), p_69)) | 0x3BL) <= 0x0854F1E0L) < p_69) != g_241.f7.f4.f0), 4)), g_91.f1)), p_69))) == g_241.f7.f4.f0) || 0xB8C2L), 0x2DL))), g_241.f3)) ^ l_367))) < g_241.f5.f2) > p_69) ^ (-1L)) & l_340.f5) && g_241.f5.f4), l_388)))))) | 5L), p_68)) > 1UL) >= p_68) && p_69)) <= g_241.f7.f0) <= g_241.f7.f1) | l_372) ^ g_241.f7.f1), 5)) > g_389) && p_69) > 3UL) && g_241.f8)))))
            {
                for (l_340.f3 = 9; (l_340.f3 >= 43); ++l_340.f3)
                {
                    return g_241.f7.f4;
                }
                if (p_69)
                    break;
            }
            else
            {
                return g_91.f5;
            }
            l_416 = (safe_mod_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s((((g_241.f7.f4.f0 & (safe_lshift_func_int8_t_s_s(0xD5L, ((((((((safe_sub_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((((((safe_lshift_func_int8_t_s_s(l_340.f0, ((((safe_add_func_uint32_t_u_u(((((safe_rshift_func_int16_t_s_s(0xBF0AL, 8)) | ((l_340.f1 | (safe_div_func_int16_t_s_s((p_69 & g_241.f3), (safe_mod_func_int8_t_s_s((((safe_add_func_int32_t_s_s(((safe_lshift_func_int8_t_s_s(0xA3L, l_372)) > l_372), g_91.f4.f3)) , 0UL) != g_91.f5.f2), p_69))))) & l_367)) & 0xBCE3L) & l_340.f1), g_241.f7.f4.f4)) ^ g_241.f7.f4.f3) | p_68) & p_69))) < 4294967293UL) | 0xA1L) && 0x2BL) < (-6L)), 1)), l_388)) | l_312) && g_241.f7.f5.f1) == l_311) != p_68) , 0x201D1230L) , g_91.f4.f3) < p_69)))) && p_69) >= l_367), 2)), l_340.f5));
        }
        if ((safe_mod_func_int16_t_s_s((((((-10L) <= p_69) && (safe_sub_func_int32_t_s_s((safe_sub_func_uint16_t_u_u(((safe_add_func_int16_t_s_s(((((((safe_rshift_func_int16_t_s_u(((g_251 > (g_389 | (safe_unary_minus_func_uint16_t_u((((g_241.f7.f1 < (safe_rshift_func_int8_t_s_u((safe_add_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s((((safe_mod_func_int16_t_s_s(((safe_rshift_func_int16_t_s_s(((((p_68 || (+p_69)) >= (safe_div_func_uint8_t_u_u((l_340.f0 == ((safe_add_func_int8_t_s_s((0xB2BDL >= 0xFA25L), l_372)) <= 248UL)), (-1L)))) > 7L) >= g_241.f5.f3), l_340.f2)) , l_372), l_372)) < l_372) >= l_416), 6)), p_68)), 4))) != 65534UL) | p_68))))) , (-1L)), l_372)) && 1UL) , l_372) > 0UL) >= l_372) | l_372), p_69)) ^ l_443), p_69)), g_91.f5.f3))) , l_444) , l_443), g_251)))
        {
            struct S2 l_449 = {0x99C5781CL,0xD5L,0x2A12572DL,0xF8L,1UL,{1L,255UL,0xA9931376L,-3L,8UL},0xD9L,{1UL,0xE14FL,3L,-7L,{-1L,0x23L,-4L,4L,1UL},{0x62L,0x6FL,0x5E9FD722L,0xDDL,1UL}},0x2A6155CBL};
            l_449.f5.f2 = ((((safe_mod_func_uint16_t_u_u(0x7EEFL, (safe_div_func_uint32_t_u_u((((l_449 , g_241.f7.f4.f2) | (g_241.f7.f0 && (((0x18C2L > ((((safe_mod_func_uint32_t_u_u((safe_add_func_uint16_t_u_u(0x1C28L, ((p_69 || g_91.f5.f3) > (l_340.f1 != g_241.f7.f5.f0)))), p_68)) > g_389) , p_69) < l_443)) && 8UL) < 0xDD94L))) != (-6L)), 0x958AED11L)))) >= l_449.f2) , 0xC54AD161L) > g_241.f7.f5.f2);
        }
        else
        {
            int32_t l_454 = 0x866E1379L;
            int8_t l_481 = (-1L);
            struct S1 l_573 = {3UL,5L,-1L,-2L,{-1L,9UL,0x380E9B21L,0xCDL,0x3B27E887L},{0xB0L,0UL,-1L,-1L,0x30D455A4L}};
            int32_t l_582 = (-1L);
            struct S2 l_618 = {1L,255UL,0x846C920EL,0L,0UL,{1L,0x9FL,0x3441F030L,0xCEL,1UL},0x70L,{0xA4L,1L,0L,0xAAL,{1L,0UL,0x4E70A3C5L,0xD5L,7UL},{0x9BL,255UL,-2L,-8L,18446744073709551609UL}},8L};
            uint16_t l_670 = 0xE025L;
            int16_t l_730 = (-4L);
            int32_t l_767 = 0L;
            l_312 = l_454;
            l_454 = (safe_add_func_int32_t_s_s((!((safe_add_func_uint8_t_u_u(((safe_add_func_int32_t_s_s((safe_sub_func_int16_t_s_s(6L, g_241.f7.f4.f4)), (safe_lshift_func_int16_t_s_s((g_91 , ((safe_add_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(((g_241 , (g_241.f7.f5.f3 , (safe_mod_func_int32_t_s_s(g_241.f3, g_91.f4.f1)))) | 0x6FL), 7)), (safe_rshift_func_int16_t_s_s(((safe_div_func_int8_t_s_s(g_241.f7.f4.f3, p_68)) < p_69), 4)))) <= 65531UL)), 13)))) | p_69), 0x82L)) & l_443)), 0L));
            if ((safe_unary_minus_func_uint16_t_u(((safe_rshift_func_int8_t_s_u((safe_mod_func_int8_t_s_s(((l_481 , (0UL != (((((p_69 > 3L) , p_68) && g_241.f5.f3) , 0x8AL) && (safe_add_func_int16_t_s_s((l_484 , 6L), 0x0F71L))))) || g_241.f7.f4.f0), g_241.f0)), 2)) >= l_454))))
            {
                struct S1 l_489 = {0x7AL,3L,0xADE0E863L,-1L,{8L,0x38L,-1L,-1L,0xB02DF14BL},{-1L,255UL,1L,0xD1L,0xB63FE7A8L}};
                struct S3 l_587 = {255UL,248UL,0UL,0x8BEBL,255UL,1UL};
                int8_t l_672 = 1L;
                int32_t l_722 = 0x670621BFL;
                g_265 = ((((safe_lshift_func_uint16_t_u_u((safe_add_func_int32_t_s_s((l_489 , ((((((((safe_sub_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(0xA8L, (safe_div_func_uint8_t_u_u(((g_241.f0 & (!((p_69 < (p_68 != 0x9168L)) || ((safe_lshift_func_uint16_t_u_u((l_489.f4.f3 , (g_91 , ((l_499 , l_340.f0) != l_500))), 15)) >= 0xA4L)))) | l_489.f5.f1), p_69)))), p_69)) >= p_68) ^ p_69) >= g_193) >= g_2) == l_489.f4.f2) < l_340.f4) & 0x7DL)), 0L)), 4)) | g_91.f4.f4) ^ p_69) & 0x47DF2BA1L);
                if (((safe_add_func_int8_t_s_s((((safe_rshift_func_uint8_t_u_s(g_91.f5.f3, (safe_lshift_func_uint8_t_u_s((((0xA4FDL >= p_69) > (safe_rshift_func_int8_t_s_s((p_69 > (4L >= 0xCD45L)), ((safe_lshift_func_int8_t_s_u(((0UL < 5L) ^ 65529UL), l_484.f7.f5.f2)) >= 6L)))) , 0x30L), 3)))) < p_68) == 0xE9CEL), 250UL)) && g_513))
                {
                    const struct S0 l_528 = {0x96L,0xCAL,0x494B84DCL,1L,18446744073709551608UL};
                    l_484.f5.f2 = ((((((~0UL) < 0UL) >= (safe_sub_func_uint32_t_u_u(((p_69 | g_91.f5.f4) <= ((safe_div_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(1L, 6)), (safe_lshift_func_int16_t_s_u(l_489.f1, g_265)))) , ((p_69 | ((safe_lshift_func_int16_t_s_u((((((safe_rshift_func_int16_t_s_u(((p_69 >= g_241.f7.f1) >= (-1L)), 2)) >= (-6L)) , 65535UL) | 0UL) , g_91.f4.f4), 8)) <= l_527)) ^ g_241.f2))), g_241.f7.f5.f2))) , p_69) , p_69) || p_68);
                    return l_528;
                }
                else
                {
                    int8_t l_553 = 0x42L;
                    g_265 = ((safe_unary_minus_func_uint8_t_u(((p_69 > ((safe_add_func_uint8_t_u_u(((p_69 < ((safe_add_func_int8_t_s_s((((g_534 , (safe_sub_func_int32_t_s_s((safe_mod_func_uint16_t_u_u(((((safe_rshift_func_uint16_t_u_s(((!((safe_sub_func_uint16_t_u_u((((safe_lshift_func_int16_t_s_u(((safe_rshift_func_int8_t_s_s((g_241.f7.f4.f4 == ((g_241.f2 == (l_443 == 0x41L)) , ((((l_499.f2 || ((safe_lshift_func_int16_t_s_s((safe_mod_func_int8_t_s_s((+l_553), (-1L))), 9)) ^ g_534.f1)) > l_554) >= 0x1A81L) & g_534.f0))), p_68)) && l_553), g_534.f5)) >= p_69) | (-3L)), g_534.f2)) , g_91.f0)) >= 250UL), 4)) > 0x65DBL) || p_69) | l_489.f5.f3), p_68)), g_513))) , 0xD8L) <= p_68), 0x0DL)) >= g_534.f3)) != g_241.f7.f5.f1), g_241.f8)) >= (-10L))) == g_241.f7.f4.f1))) ^ g_241.f4);
                    l_499.f2 = l_340.f0;
                    g_265 = (((safe_sub_func_int16_t_s_s(((~l_553) || (safe_mod_func_int8_t_s_s((l_454 & (safe_mod_func_int32_t_s_s(p_68, p_68))), (0x24E8B0A5L & (((safe_sub_func_uint8_t_u_u(((~(~(~(safe_lshift_func_int8_t_s_s((p_68 && (safe_sub_func_uint32_t_u_u(((safe_sub_func_int8_t_s_s(l_484.f6, (l_573 , (safe_sub_func_int16_t_s_s((safe_div_func_int8_t_s_s(g_91.f5.f4, g_241.f3)), 0x1FB2L))))) == 8UL), l_578))), p_69))))) ^ 5L), p_68)) | 0x29FBL) || g_241.f5.f0))))), p_69)) <= g_91.f5.f0) <= l_489.f2);
                }
                if ((safe_div_func_int32_t_s_s(((!l_582) && (safe_sub_func_int32_t_s_s((safe_add_func_uint32_t_u_u(4294967295UL, 4294967289UL)), ((l_587 , ((l_489.f5.f3 < 253UL) == (((safe_rshift_func_int16_t_s_u(((safe_sub_func_uint8_t_u_u((l_340.f3 < (safe_lshift_func_int16_t_s_s((p_69 , (safe_div_func_uint32_t_u_u(4294967295UL, p_68))), l_499.f4))), l_484.f7.f5.f3)) != l_573.f5.f2), 14)) == 0x654EL) , l_587.f1))) <= g_241.f7.f4.f3)))), p_68)))
                {
                    const uint32_t l_619 = 0xBEB5401AL;
                    g_265 = (safe_div_func_uint16_t_u_u(((safe_mod_func_uint8_t_u_u(0UL, (((((safe_mod_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((safe_sub_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(0x64A8D575L, (g_91.f1 >= (g_251 , 0x33A7L)))), ((((((safe_rshift_func_int8_t_s_u((safe_sub_func_int8_t_s_s((((safe_sub_func_uint16_t_u_u(((((g_265 , g_241.f3) < (((((safe_rshift_func_uint16_t_u_s((l_573.f2 == (l_618 , p_69)), g_241.f7.f5.f3)) < l_340.f2) && (-9L)) && l_340.f5) == 250UL)) , g_91.f0) <= l_489.f0), 1UL)) < g_241.f7.f5.f2) ^ p_68), l_499.f1)), l_619)) || 9L) ^ l_573.f4.f0) & l_340.f1) & p_69) <= p_69))), l_573.f2)), 3)), g_241.f0)) == l_618.f7.f5.f4) > 2L) > p_69) , p_68))) , g_241.f7.f4.f0), l_527));
                    l_618.f2 = ((safe_lshift_func_uint16_t_u_s(g_265, ((l_618.f7.f4 , (safe_rshift_func_uint8_t_u_s(((safe_unary_minus_func_int16_t_s(1L)) > (safe_lshift_func_int16_t_s_s((((((safe_sub_func_uint8_t_u_u((g_534 , (safe_lshift_func_int8_t_s_s((g_241.f7.f4 , (p_68 < (((l_500 ^ (p_68 ^ (((((((p_68 || 0x8532L) < l_499.f3) & l_631) , 0x3CL) | p_69) & g_389) , 0L))) >= g_241.f1) && 0x54AEL))), l_444.f4.f1))), 0x8BL)) , 0x40CAL) , g_241.f1) || l_632) & l_484.f7.f5.f3), 4))), 2))) , 0L))) & l_311);
                    l_618.f2 = (+(safe_add_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s(l_573.f4.f2, l_416)), (safe_mod_func_int32_t_s_s((safe_div_func_int8_t_s_s(((safe_sub_func_uint32_t_u_u(((safe_sub_func_uint16_t_u_u((6UL == (safe_rshift_func_int8_t_s_u((safe_sub_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((((g_241.f1 != (g_534.f1 && (safe_add_func_int8_t_s_s((safe_mod_func_int8_t_s_s((l_619 >= ((safe_rshift_func_int16_t_s_s(g_241.f0, (safe_lshift_func_int8_t_s_s(((l_618.f1 || ((+(safe_div_func_uint32_t_u_u((safe_mod_func_int8_t_s_s(((((((safe_rshift_func_uint16_t_u_s(p_68, l_311)) | 0x73EB8324L) , 0x0CC6D13AL) == l_619) == g_669) && g_241.f5.f2), p_68)), l_670))) != 4UL)) < g_534.f4), 1)))) < p_69)), l_671)), 0x59L)))) ^ 0x41L) , l_672), g_669)), (-6L))), 6))), 0xB558L)) ^ p_68), 0xDF922892L)) != g_241.f7.f5.f0), p_69)), l_340.f0)))));
                }
                else
                {
                    const uint8_t l_673 = 0x01L;
                    int32_t l_674 = 0L;
                    const struct S2 l_702 = {9L,0xE4L,0x8CE9AA00L,0xC3L,0x061CL,{1L,0x52L,0x7024B470L,1L,0x4870A34DL},0x0EL,{0xBBL,-10L,-9L,-1L,{1L,246UL,0L,0L,1UL},{6L,0xCEL,0xD2546AE9L,-1L,0UL}},0x59029FE2L};
                    l_674 = l_673;
                    if (((!0L) | ((((safe_rshift_func_uint16_t_u_s((safe_add_func_int8_t_s_s((0x2976CABCL == (g_251 , (safe_rshift_func_int8_t_s_s((l_444 , (l_489.f4.f4 == ((safe_div_func_int16_t_s_s(l_631, 1UL)) , (0x1EL || (1L < p_69))))), 1)))), p_68)), l_684)) , g_241.f0) < 0x10L) >= 0x66L)))
                    {
                        const int16_t l_685 = 0xD51DL;
                        g_265 = (((((l_685 > ((safe_lshift_func_int8_t_s_s((p_69 ^ p_69), 2)) == ((safe_div_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(g_692, ((((safe_sub_func_int16_t_s_s(l_444.f5.f1, (p_68 > (((((((safe_div_func_uint32_t_u_u(((safe_unary_minus_func_int32_t_s(((safe_add_func_int32_t_s_s((l_674 > ((safe_rshift_func_int16_t_s_s((g_91.f5.f2 != ((l_702 , p_68) ^ g_91.f3)), l_311)) | l_685)), 0x60565A3FL)) <= g_241.f3))) & l_573.f1), l_573.f4.f1)) > p_68) <= p_68) != 0xD574L) || l_587.f5) , 0xC581L) < g_241.f7.f1)))) , 0x48L) > g_241.f7.f4.f1) , g_241.f7.f1))), l_573.f1)) >= 0x7DL))) == g_241.f7.f1) >= g_91.f5.f4) < g_91.f1) | p_68);
                        l_416 = (g_241.f7.f4 , p_68);
                    }
                    else
                    {
                        uint16_t l_703 = 0x8AF6L;
                        l_703 = l_484.f7.f3;
                        g_265 = (p_68 , (g_241.f7.f2 & g_241.f5.f2));
                    }
                }
                l_722 = ((0L | (safe_lshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_u((l_573.f5.f3 != (((((((((safe_add_func_uint32_t_u_u(((p_68 > (7L || (l_489 , (safe_div_func_uint8_t_u_u(l_484.f7.f4.f3, (1L && (((safe_add_func_int8_t_s_s(g_513, ((((((safe_add_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u((safe_mod_func_int32_t_s_s((p_68 < g_692), (-7L))), 4)) & 0xBEB7B710L), g_241.f7.f4.f2)) ^ 0L) > p_68) != 2UL) , 0xADL) != p_68))) , g_265) ^ l_484.f6))))))) != l_631), l_444.f4.f4)) , l_489.f5) , 65535UL) ^ l_573.f4.f4) && g_241.f7.f5.f0) != l_484.f5.f3) < g_91.f5.f0) ^ g_91.f4.f4) < g_241.f7.f4.f1)), 0)), 3)), p_68))) < 4294967287UL);
            }
            else
            {
                l_618.f5.f2 = (((((safe_add_func_int16_t_s_s((safe_div_func_uint32_t_u_u((l_727 >= ((g_2 || ((l_484.f7.f3 , g_91.f4.f0) & (((p_69 == (g_534.f0 >= 0xCFD6L)) , g_241.f5.f0) | (safe_div_func_uint8_t_u_u((l_730 == g_265), 0x69L))))) == g_241.f7.f5.f4)), p_68)), p_69)) & g_241.f5.f0) | l_340.f4) != 0x702CEAE1L) , g_91.f4.f0);
                g_265 = ((0xE9L > (safe_add_func_uint8_t_u_u((safe_div_func_int32_t_s_s((g_241.f7.f5.f4 | (((g_91.f4.f4 <= (l_737 , (safe_lshift_func_uint8_t_u_u((((g_2 >= ((g_534 , p_68) & (safe_lshift_func_int8_t_s_s((safe_mod_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(0xD7ADL, g_534.f0)), p_68)), p_68)))) & 0L) && g_241.f5.f1), 4)))) >= p_68) >= g_241.f0)), l_444.f4.f0)), g_241.f7.f4.f4))) || 0xED64L);
            }
            for (l_737.f1 = 0; (l_737.f1 <= 9); l_737.f1++)
            {
                int32_t l_765 = (-1L);
                l_767 = ((g_534.f2 <= ((safe_add_func_uint16_t_u_u((safe_add_func_int16_t_s_s((0x711CL >= (safe_div_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(g_91.f5.f3, ((safe_rshift_func_uint8_t_u_u(((((0UL || ((!0x6B8D71E0L) > ((248UL >= (safe_div_func_int32_t_s_s((safe_div_func_uint16_t_u_u((l_765 <= ((((((((1L & (((l_484.f0 ^ p_68) < p_69) & p_68)) != 0x0A51A2FEL) <= l_444.f5.f2) > g_241.f7.f5.f2) , g_91.f0) > l_737.f7.f3) ^ l_766) > g_241.f7.f5.f2)), g_241.f4)), 0x52CA6F14L))) != l_484.f7.f1))) >= l_444.f5.f2) == 65535UL) ^ p_69), 5)) & p_68))), 0xD1L))), 0xEE33L)), g_241.f7.f4.f2)) || g_241.f7.f0)) & 0x91A7L);
            }
        }
        return l_737.f7.f5;
    }
    else
    {
        uint32_t l_770 = 0xA007346EL;
        const int32_t l_777 = 0x56036D64L;
        int32_t l_792 = (-1L);
        struct S1 l_799 = {0x49L,1L,-6L,0xB0L,{5L,248UL,0x6C50B85CL,0x3AL,2UL},{-1L,0xDDL,0xCDA1487EL,1L,0x9D8FA7ECL}};
        const struct S0 l_804 = {0x6CL,0xE5L,0xC5C25D91L,-1L,0x411B74B9L};
        for (l_737.f1 = 0; (l_737.f1 == 45); l_737.f1++)
        {
            struct S0 l_780 = {0xAEL,0xC9L,0x2374A32BL,1L,0xCC876DA5L};
            g_265 = (l_770 > 0x06D2075DL);
            l_792 = ((safe_lshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_s(0x0CL, (p_69 < p_69))), (safe_lshift_func_int8_t_s_u((1L <= l_777), 3)))) <= (safe_mod_func_uint32_t_u_u((l_780 , (safe_sub_func_int32_t_s_s((((safe_div_func_uint8_t_u_u((0L & l_785), (safe_add_func_uint32_t_u_u(((safe_rshift_func_uint16_t_u_s((safe_div_func_uint16_t_u_u((g_692 >= p_69), 0xC574L)), 13)) | l_780.f4), g_241.f7.f1)))) ^ 1L) || p_68), l_499.f3))), p_69)));
            g_265 = ((safe_div_func_uint32_t_u_u(l_737.f4, ((safe_mul_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u(l_780.f4, (l_799 , p_69))), 0UL)) || ((g_91 , (0xED63L && (0UL > ((((safe_rshift_func_int16_t_s_s((safe_add_func_uint16_t_u_u(g_91.f5.f3, l_799.f1)), 1)) & 0x71L) >= 0xC7L) >= g_241.f4)))) && p_69)))) | (-1L));
        }
        return l_804;
    }
}
static int32_t func_75(int32_t p_76, int16_t p_77, int16_t p_78, const uint32_t p_79, uint16_t p_80)
{
    int32_t l_92 = 0x0705E773L;
    const uint32_t l_111 = 4294967287UL;
    struct S2 l_112 = {1L,0x3FL,0x23BA0E38L,0x99L,0x8624L,{0x7EL,0xD0L,1L,0L,0x41A24168L},1UL,{6UL,0x2260L,1L,-1L,{0xC6L,254UL,0L,1L,18446744073709551615UL},{0x2FL,0x5CL,0x8ED0E11BL,0x3BL,0xBF13354AL}},0x0BB50B9AL};
    int32_t l_122 = 0xDFDC5FA4L;
    uint32_t l_124 = 0x61BCAB2BL;
    int32_t l_143 = (-8L);
    struct S3 l_144 = {255UL,1UL,4294967294UL,1UL,255UL,9UL};
    uint16_t l_189 = 0x0B50L;
    uint32_t l_244 = 4294967295UL;
    int32_t l_263 = 0x4621DE0EL;
    const uint16_t l_270 = 0x0C99L;
    uint16_t l_274 = 0x17C2L;
    uint16_t l_281 = 0xBDFAL;
    int32_t l_294 = (-7L);
    if ((safe_mod_func_int8_t_s_s(((safe_lshift_func_int16_t_s_u(((safe_rshift_func_uint8_t_u_u((g_91 , (l_92 && (safe_lshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((((safe_sub_func_int8_t_s_s(((safe_unary_minus_func_int32_t_s(((safe_add_func_uint8_t_u_u(p_76, ((safe_div_func_int8_t_s_s(((((+(safe_lshift_func_uint16_t_u_u((((g_91.f5.f1 , (l_92 != ((((g_91.f3 < ((8UL ^ (l_92 < (safe_lshift_func_int16_t_s_u(((safe_rshift_func_int8_t_s_s((-5L), 1)) >= p_80), 8)))) <= l_92)) < 0xCAL) , l_111) & g_91.f1))) > 5UL) | g_91.f4.f2), 5))) | g_91.f4.f3) , l_112) , p_77), 0xE8L)) < 8L))) & 0x3EL))) < g_2), g_91.f1)) >= p_77) == g_91.f4.f4), p_76)), 0)))), 7)) <= l_112.f7.f4.f1), 15)) && p_76), 1UL)))
    {
        struct S3 l_119 = {252UL,253UL,4294967295UL,0xE544L,0x29L,0x73L};
        int32_t l_123 = 0xEA8E8ED7L;
        l_123 = ((p_80 < (safe_mod_func_uint32_t_u_u(((safe_lshift_func_uint16_t_u_s(g_91.f5.f1, 15)) != ((((5L != ((p_76 ^ ((l_112.f4 <= ((safe_sub_func_uint32_t_u_u((p_79 , (l_119 , ((((l_112.f7.f4.f1 > (((safe_add_func_int16_t_s_s((g_91.f2 , p_77), 0xFAEDL)) , p_79) , (-1L))) < l_111) && p_79) ^ p_79))), 0xEED364FFL)) ^ l_112.f7.f5.f4)) || g_91.f5.f2)) , p_76)) == p_78) & g_91.f4.f3) <= l_122)), 0x8116371AL))) , l_112.f7.f5.f2);
    }
    else
    {
        return l_124;
    }
    if (((!(safe_sub_func_int8_t_s_s(1L, (((((((safe_div_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u((p_76 > (l_112.f1 || ((safe_mod_func_uint16_t_u_u(((safe_add_func_uint8_t_u_u((0UL | ((safe_sub_func_int16_t_s_s((l_112.f7.f4 , (safe_sub_func_uint32_t_u_u((((safe_sub_func_uint16_t_u_u((!g_91.f5.f2), (((((((((((l_143 <= ((0x6208L > ((l_144 , g_91.f4.f2) != l_112.f5.f0)) ^ g_91.f5.f0)) < g_91.f5.f0) >= 0xCC70L) && 0x9DL) || p_79) && l_112.f7.f0) , 0x02F1L) != g_91.f5.f0) && p_79) , l_144.f2) ^ p_78))) < g_91.f4.f3) < g_91.f4.f1), g_91.f4.f2))), g_91.f2)) == 4294967289UL)), p_80)) ^ 1L), l_144.f2)) , p_77))), p_79)), p_80)) == g_2) < l_112.f7.f0) , p_78) | 0x31938C4DL) == (-1L)) <= g_91.f1)))) != 0x87L))
    {
        int32_t l_150 = 4L;
        struct S2 l_151 = {0x19CD9794L,0x59L,0x76EEABB7L,0xEBL,0x48EBL,{-10L,255UL,-5L,0xAAL,0xE91FFD6FL},0xC9L,{255UL,0xFA66L,0x8658A414L,-1L,{0x1FL,8UL,-8L,0x88L,0x2FF17D06L},{0L,254UL,0x53C472D6L,0L,3UL}},0xAF93AE58L};
        int32_t l_239 = 0xB9E970FDL;
        struct S3 l_282 = {0x01L,0xC2L,0x9155A29DL,65535UL,0xBFL,1UL};
        uint32_t l_304 = 0UL;
        for (l_144.f0 = 0; (l_144.f0 != 34); l_144.f0++)
        {
            int32_t l_147 = 0L;
            uint32_t l_178 = 0UL;
            int32_t l_240 = 0L;
            int32_t l_243 = 0x79F3C657L;
            p_76 = (p_80 < ((l_147 & ((safe_sub_func_uint16_t_u_u(0xA2B2L, l_150)) < (l_151 , p_76))) && ((safe_unary_minus_func_int8_t_s((safe_mul_func_uint16_t_u_u(0x8D73L, (l_112.f7.f2 <= p_78))))) && l_147)));
            for (l_150 = (-23); (l_150 == 25); ++l_150)
            {
                const uint32_t l_161 = 0x4FA59ADAL;
                uint32_t l_222 = 4294967295UL;
                struct S3 l_257 = {0x5BL,2UL,3UL,65527UL,253UL,0x8BL};
                p_76 = (((((safe_mod_func_int16_t_s_s(l_151.f7.f1, ((~(~0x2E7DL)) , ((l_151.f5.f0 || (0x4B4CL <= 65535UL)) , l_161)))) , ((safe_sub_func_int32_t_s_s((g_91.f4.f3 != (safe_sub_func_int16_t_s_s((-4L), p_79))), l_161)) || p_77)) & 1UL) & g_91.f2) || l_147);
                if (((g_91.f4.f1 == (safe_lshift_func_int8_t_s_s((g_91.f5.f4 | (l_147 & (((9L != (~((safe_div_func_uint16_t_u_u(((((safe_rshift_func_int8_t_s_s((l_151.f7.f5.f4 & (+g_91.f5.f1)), 6)) && (safe_add_func_int8_t_s_s(((l_112.f8 == (g_91 , l_178)) <= g_91.f4.f2), p_78))) != p_80) ^ 0x1D0AL), l_147)) || g_91.f4.f2))) ^ 0xD704L) <= p_77))), p_80))) == 65535UL))
                {
                    int32_t l_190 = 0xE2CB60F7L;
                    l_190 = (((safe_div_func_uint32_t_u_u((safe_div_func_uint16_t_u_u((l_112.f7.f5.f2 >= 0x83DE727DL), (safe_sub_func_int32_t_s_s(p_80, 0x289A5802L)))), p_78)) | (0x36C12986L > ((safe_div_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(((-1L) == (((g_91.f4.f0 != 0x5B77L) == l_189) , l_151.f4)), 0)), 0xBCL)) > g_91.f5.f3))) ^ l_112.f7.f4.f1);
                }
                else
                {
                    struct S2 l_196 = {0xB9F8BE0DL,247UL,0xC5815B4CL,0xA2L,0x3C7AL,{0L,254UL,-1L,0x4FL,0UL},0UL,{251UL,0x9520L,0x0758AC69L,-1L,{0x7FL,0UL,0xD0800E73L,0x75L,0x1151F3E8L},{-8L,0xA7L,1L,1L,18446744073709551607UL}},0x3A0161F2L};
                    for (l_92 = 0; (l_92 >= (-27)); l_92 = safe_sub_func_uint16_t_u_u(l_92, 8))
                    {
                        g_193 = p_76;
                        p_76 = (safe_lshift_func_int16_t_s_u((l_196 , ((p_80 <= ((+(~(safe_div_func_uint32_t_u_u(g_91.f5.f1, (((((safe_rshift_func_uint8_t_u_u((0L ^ (((((((safe_mod_func_uint16_t_u_u(0xC17DL, (safe_add_func_uint8_t_u_u((g_91.f4.f2 , (p_79 >= ((safe_sub_func_uint32_t_u_u(0x1774F4B6L, p_77)) == g_193))), l_196.f7.f2)))) <= p_77) == g_91.f4.f1) || 0x16ECL) != p_79) | 0x3B3EL) != p_80)), g_91.f5.f1)) == p_76) || l_151.f7.f4.f4) == g_91.f5.f3) || 0L))))) | p_77)) == 0UL)), 1));
                    }
                    for (l_151.f5.f2 = 0; (l_151.f5.f2 >= 26); l_151.f5.f2 = safe_add_func_uint32_t_u_u(l_151.f5.f2, 2))
                    {
                        int32_t l_215 = (-1L);
                        p_76 = (safe_div_func_uint8_t_u_u((((safe_rshift_func_int8_t_s_s((l_215 && (0x9EC935B3L & (safe_rshift_func_int8_t_s_u((p_80 ^ (0x911EA6DDL < ((((((0x2C59D5B5L > 1L) >= (p_80 > (-5L))) | (safe_div_func_uint32_t_u_u(p_80, 0xF372E633L))) , 0xB8L) | p_80) , 0L))), l_222)))), 2)) || g_91.f5.f3) <= (-2L)), p_76));
                        l_151.f2 = (((0xA4B1L == (0x8BB56DCDL && (l_151.f7 , l_147))) != (safe_rshift_func_int16_t_s_s((((safe_rshift_func_uint8_t_u_u(((((safe_div_func_int8_t_s_s(0L, (safe_mod_func_int16_t_s_s((g_91.f5.f0 > ((safe_div_func_uint32_t_u_u(((safe_sub_func_int16_t_s_s(0L, (safe_div_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u(((((((((g_91.f4.f3 & l_239) < g_193) > g_91.f4.f3) & 1UL) == l_161) , p_77) < l_151.f7.f4.f2) == p_77), 1UL)), p_78)))) || 0x48867B80L), 0x62A19D67L)) ^ p_80)), 0xD41FL)))) & p_78) == 0xEAA54678L) < l_150), l_161)) > 65529UL) & 0x4E49L), 11))) == 0x5BE5L);
                        l_240 = p_76;
                    }
                    g_251 = (g_91.f5.f1 & ((0xCED4L < (g_241 , (safe_unary_minus_func_int32_t_s(((((-1L) && (l_243 >= ((l_244 , (safe_mod_func_uint8_t_u_u(l_161, (+1L)))) <= (safe_unary_minus_func_uint8_t_u((safe_sub_func_uint32_t_u_u(g_241.f1, l_112.f7.f5.f4))))))) && 0xE4E2F047L) >= l_178))))) || 0xA6L));
                    for (l_151.f4 = 0; (l_151.f4 == 50); ++l_151.f4)
                    {
                        p_76 = (((((safe_lshift_func_int8_t_s_u((safe_unary_minus_func_uint8_t_u((0UL | (0xA296F131L & ((l_243 > (0L <= p_80)) <= (l_257 , (safe_lshift_func_int16_t_s_u(l_151.f7.f5.f3, (safe_div_func_uint16_t_u_u((((+(p_80 & 1L)) >= p_77) ^ g_241.f8), g_241.f7.f4.f0)))))))))), 6)) , 0L) && g_241.f7.f5.f2) ^ l_263) == g_241.f7.f5.f1);
                    }
                }
                if (p_78)
                {
                    int32_t l_264 = (-7L);
                    p_76 = (p_77 == (0x6611L == l_264));
                }
                else
                {
                    return l_257.f3;
                }
                g_265 = 0x0493F100L;
            }
        }
        p_76 = (((safe_lshift_func_uint8_t_u_s(((((((((safe_mod_func_int16_t_s_s(l_270, (safe_mod_func_int8_t_s_s((((l_112.f5.f1 != (((((-1L) < 65529UL) , (((l_151 , g_251) != (~l_274)) > (safe_sub_func_uint16_t_u_u(((l_144 , ((safe_mod_func_int16_t_s_s((((safe_div_func_uint32_t_u_u(p_76, p_77)) <= 0L) == g_193), (-7L))) <= 255UL)) == l_144.f4), p_79)))) ^ g_91.f5.f2) | g_251)) , 5UL) > l_281), g_241.f3)))) >= l_151.f5.f0) || p_78) || p_77) < g_91.f4.f4) , p_80) ^ p_76) || l_144.f5), 0)) & g_265) == g_241.f7.f0);
        p_76 = ((l_112 , p_76) == (((-1L) & ((l_282 , (g_91.f4.f0 ^ (((safe_div_func_uint32_t_u_u(((((safe_add_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(((g_265 != (safe_add_func_uint16_t_u_u(((safe_sub_func_uint32_t_u_u((((+p_79) >= l_294) & 0x88E8L), l_112.f2)) || p_79), g_91.f4.f0))) , p_78), g_265)), p_76)) >= 0xAAL) >= p_79) | p_76), 0xA5E65953L)) == 0x7CL) , 0x35F5L))) == l_282.f1)) , p_80));
        g_265 = (l_112.f5 , (l_151.f7.f5.f2 || ((((p_80 | (!(safe_mod_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((safe_add_func_uint16_t_u_u((safe_add_func_int16_t_s_s(1L, (g_241 , 0x22EAL))), l_304)), 0)), 0x75L)))) , l_112.f5.f3) > l_151.f7.f4.f3) | g_241.f7.f4.f4)));
    }
    else
    {
        const uint8_t l_305 = 3UL;
        struct S0 l_307 = {0xF0L,2UL,1L,0x0AL,0xF108549FL};
        p_76 = ((l_111 && ((p_76 | p_76) <= ((l_305 & ((((+((l_112.f5.f3 && g_241.f7.f5.f1) && 1L)) & ((l_307 , g_91.f4.f2) >= p_76)) || g_265) || 0x82BEL)) , g_241.f7.f2))) && (-6L));
    }
    return g_91.f4.f1;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_2;
    csmith_sink_ = g_91.f0;
    csmith_sink_ = g_91.f1;
    csmith_sink_ = g_91.f2;
    csmith_sink_ = g_91.f3;
    csmith_sink_ = g_91.f4.f0;
    csmith_sink_ = g_91.f4.f1;
    csmith_sink_ = g_91.f4.f2;
    csmith_sink_ = g_91.f4.f3;
    csmith_sink_ = g_91.f4.f4;
    csmith_sink_ = g_91.f5.f0;
    csmith_sink_ = g_91.f5.f1;
    csmith_sink_ = g_91.f5.f2;
    csmith_sink_ = g_91.f5.f3;
    csmith_sink_ = g_91.f5.f4;
    csmith_sink_ = g_193;
    csmith_sink_ = g_241.f0;
    csmith_sink_ = g_241.f1;
    csmith_sink_ = g_241.f2;
    csmith_sink_ = g_241.f3;
    csmith_sink_ = g_241.f4;
    csmith_sink_ = g_241.f5.f0;
    csmith_sink_ = g_241.f5.f1;
    csmith_sink_ = g_241.f5.f2;
    csmith_sink_ = g_241.f5.f3;
    csmith_sink_ = g_241.f5.f4;
    csmith_sink_ = g_241.f6;
    csmith_sink_ = g_241.f7.f0;
    csmith_sink_ = g_241.f7.f1;
    csmith_sink_ = g_241.f7.f2;
    csmith_sink_ = g_241.f7.f3;
    csmith_sink_ = g_241.f7.f4.f0;
    csmith_sink_ = g_241.f7.f4.f1;
    csmith_sink_ = g_241.f7.f4.f2;
    csmith_sink_ = g_241.f7.f4.f3;
    csmith_sink_ = g_241.f7.f4.f4;
    csmith_sink_ = g_241.f7.f5.f0;
    csmith_sink_ = g_241.f7.f5.f1;
    csmith_sink_ = g_241.f7.f5.f2;
    csmith_sink_ = g_241.f7.f5.f3;
    csmith_sink_ = g_241.f7.f5.f4;
    csmith_sink_ = g_241.f8;
    csmith_sink_ = g_251;
    csmith_sink_ = g_265;
    csmith_sink_ = g_389;
    csmith_sink_ = g_513;
    csmith_sink_ = g_534.f0;
    csmith_sink_ = g_534.f1;
    csmith_sink_ = g_534.f2;
    csmith_sink_ = g_534.f3;
    csmith_sink_ = g_534.f4;
    csmith_sink_ = g_534.f5;
    csmith_sink_ = g_669;
    csmith_sink_ = g_692;
    platform_main_end(0,0);
    return 0;
}
