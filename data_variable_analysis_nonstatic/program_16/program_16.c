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
static int16_t g_13 = 0x7F5EL;
static int32_t g_21 = (-1L);
static uint32_t g_47 = 18446744073709551615UL;
static uint8_t g_68 = 0x9CL;
static uint8_t g_83 = 1UL;
static uint64_t g_85 = 18446744073709551615UL;
static uint16_t g_97 = 0UL;
static int16_t g_117 = 0L;
static int32_t g_126 = 0x0E9FB388L;
static int32_t *g_125 = &g_126;
static int8_t g_165 = 0L;
static int8_t g_167 = (-1L);
static uint8_t g_169 = 0x6AL;
static int16_t g_183 = 0xAA60L;
static int64_t g_185 = (-6L);
static uint8_t g_192 = 1UL;
static int32_t g_210 = 0L;
static int8_t g_215 = 1L;
static uint32_t g_224 = 18446744073709551615UL;
static int16_t g_241 = 0xABD0L;
static int32_t *g_245 = &g_126;
static uint16_t g_361 = 0x7D69L;
static int32_t g_377 = 0xDB4F27B7L;
static uint32_t g_389 = 4294967295UL;
static uint32_t g_542 = 1UL;
static int8_t g_576 = (-1L);
static int64_t g_612 = 0xB933D1B2EE99A634LL;
static int64_t g_613 = 0L;
static int32_t g_622 = 0xD0A81A91L;
static int32_t *g_621 = &g_622;
static uint8_t *g_648 = &g_192;
static uint8_t **g_647 = &g_648;
static uint16_t *g_717 = (void*)0;
static uint16_t **g_716 = &g_717;
static int32_t g_732 = 6L;
static int64_t g_742 = 0x86C695DF1CC407AALL;
static uint32_t g_744 = 1UL;
static int32_t ***g_802 = (void*)0;
inline static uint16_t func_1(void);
static uint16_t func_8(uint16_t p_9, int32_t p_10, uint32_t p_11, uint8_t p_12);
static int64_t func_17(uint32_t p_18);
static int32_t func_50(int32_t * const p_51, int32_t * const p_52, int32_t * p_53);
inline static int32_t * const func_54(int32_t * p_55, uint16_t p_56, int64_t p_57);
static int32_t * func_58(int32_t * p_59, int32_t * p_60, int16_t p_61, int32_t * p_62);
inline static int32_t * func_63(int8_t p_64, const int32_t * p_65, int32_t * p_66);
inline static const int32_t * func_71(uint32_t p_72, int32_t * p_73, uint8_t * p_74);
inline static uint8_t * func_75(uint8_t * p_76);
static uint8_t * func_77(int32_t p_78, const int64_t p_79, int64_t p_80, int32_t * p_81);
inline static uint16_t func_1(void)
{
    uint8_t l_14 = 0x00L;
    uint8_t l_19 = 0xB9L;
    uint32_t *l_743 = &g_744;
    int32_t **l_801 = &g_125;
    int32_t ***l_800 = &l_801;
    uint32_t l_821 = 18446744073709551615UL;
    const uint64_t *l_831 = (void*)0;
    const uint64_t **l_830 = &l_831;
    int8_t l_846 = 9L;
    int32_t l_866 = 0xA1468003L;
    if ((safe_mod_func_int8_t_s_s(((safe_rshift_func_int16_t_s_u((safe_mod_func_int16_t_s_s(0x70ADL, func_8(g_13, l_14, (safe_sub_func_int64_t_s_s(func_17(l_19), (l_14 <= ((((*l_743) = l_14) | (l_14 ^ 0UL)) >= 0x57L)))), l_19))), 14)) || l_19), l_14)))
    {
        int32_t l_804 = 0xCAE3DAA5L;
        int16_t *l_810 = &g_183;
        uint16_t l_854 = 0xC00EL;
        int16_t l_863 = 0x52B2L;
        int32_t *l_865 = &g_126;
        for (g_165 = (-5); (g_165 <= (-16)); --g_165)
        {
            uint8_t *l_796 = (void*)0;
            const int32_t l_816 = 0x3290B5A5L;
            uint8_t ***l_818 = &g_647;
            int32_t *l_856 = (void*)0;
            for (g_210 = 0; (g_210 == 27); g_210++)
            {
                int16_t l_799 = (-7L);
                const int32_t ** const *l_813 = (void*)0;
                for (g_612 = 0; (g_612 <= (-30)); --g_612)
                {
                    int32_t **l_791 = (void*)0;
                    int32_t ***l_790 = &l_791;
                    uint16_t *l_803 = &g_97;
                    uint64_t *l_817 = &g_85;
                    if ((*g_621))
                        break;
                    (*g_245) = (safe_mod_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s((safe_mod_func_int32_t_s_s((((*l_790) = &g_125) == (void*)0), (safe_add_func_int32_t_s_s((((void*)0 != l_796) <= ((safe_rshift_func_uint8_t_u_u((*g_648), 2)) != l_799)), (l_800 == g_802))))), ((*l_803) &= g_744))) || l_804), l_804));
                    (*g_621) = ((safe_sub_func_int64_t_s_s(((0UL != (((*l_817) = (safe_add_func_int16_t_s_s((((safe_unary_minus_func_int64_t_s((l_810 == (void*)0))) == (safe_rshift_func_uint16_t_u_u(65531UL, ((l_813 == (void*)0) & 0xDEF3ACD9L)))) == (safe_lshift_func_int16_t_s_s(l_804, (g_241 & g_183)))), l_816))) != 0xC9B049E0BF1E8D47LL)) < g_744), g_167)) > g_742);
                }
            }
            (*g_621) |= ((l_816 || (((*l_818) = &g_648) == &g_648)) != ((*g_648) || ((safe_sub_func_int8_t_s_s(8L, (*g_648))) <= g_389)));
            ++l_821;
            if ((safe_mul_func_uint16_t_u_u(((void*)0 == &g_245), (safe_rshift_func_uint16_t_u_u((l_743 != (void*)0), 3)))))
            {
                return l_804;
            }
            else
            {
                uint8_t ***l_838 = &g_647;
                int32_t l_847 = 4L;
                int8_t *l_852 = &l_846;
                uint32_t *l_853 = &g_542;
                int16_t *l_855 = &g_117;
                for (g_185 = 21; (g_185 <= 15); g_185 = safe_sub_func_uint16_t_u_u(g_185, 2))
                {
                    const uint64_t ***l_832 = &l_830;
                    (*l_832) = l_830;
                    (*g_621) = (*g_621);
                    for (g_613 = 0; (g_613 != 15); g_613 = safe_add_func_uint8_t_u_u(g_613, 1))
                    {
                        int32_t **l_835 = &g_245;
                        (*l_835) = ((**l_800) = &g_732);
                    }
                }
                if ((safe_rshift_func_uint16_t_u_s(l_816, ((*l_855) = ((((void*)0 != l_838) ^ 0x94L) ^ (((safe_sub_func_uint32_t_u_u(((*l_853) ^= ((*l_743) &= (safe_lshift_func_uint8_t_u_s(0UL, ((*l_852) = ((((((safe_mul_func_int16_t_s_s(((*l_810) = (+l_846)), l_847)) && (l_847 | (safe_mul_func_int8_t_s_s((((safe_sub_func_int8_t_s_s(g_85, l_816)) || 2UL) || g_377), (**g_647))))) < l_816) != 0x14L) & 1L) < 1UL)))))), g_622)) != l_854) > 0xF256L))))))
                {
                    return l_816;
                }
                else
                {
                    (**l_800) = func_58(l_856, l_856, ((safe_mod_func_int8_t_s_s(g_85, (safe_mod_func_uint8_t_u_u(l_863, (safe_unary_minus_func_uint8_t_u((g_117 | 0x059FE580B17C5CC1LL))))))) | (252UL > (((**l_838) = &l_14) == (void*)0))), l_865);
                }
            }
        }
        (*l_801) = l_865;
        return (***l_800);
    }
    else
    {
        return l_866;
    }
}
static uint16_t func_8(uint16_t p_9, int32_t p_10, uint32_t p_11, uint8_t p_12)
{
    int32_t *l_745 = &g_21;
    int32_t *l_746 = &g_732;
    int32_t *l_747 = &g_732;
    int32_t l_748 = 0x54409EFDL;
    int32_t *l_749 = &l_748;
    int32_t *l_750 = &g_21;
    int32_t *l_751 = &g_732;
    int32_t l_752 = (-2L);
    int32_t *l_753 = (void*)0;
    int32_t l_754 = 0L;
    int32_t *l_755 = (void*)0;
    int32_t *l_756 = &g_21;
    int32_t *l_757 = &g_21;
    int32_t *l_758 = &g_21;
    int32_t *l_759 = &g_210;
    int32_t *l_760 = (void*)0;
    int32_t *l_761 = (void*)0;
    int32_t *l_762 = &g_622;
    int32_t *l_763 = &g_21;
    int32_t *l_764 = &g_21;
    int32_t *l_765 = &g_210;
    int32_t l_766 = 0L;
    int32_t *l_767 = (void*)0;
    int32_t *l_768 = &l_752;
    int32_t *l_769 = &g_732;
    int32_t *l_770 = &g_732;
    int32_t l_771 = 0x5D0BC74AL;
    int32_t *l_772 = (void*)0;
    int32_t *l_773 = &l_754;
    int32_t *l_774 = &l_748;
    uint8_t l_775 = 0xA1L;
    --l_775;
    return p_12;
}
static int64_t func_17(uint32_t p_18)
{
    int32_t *l_20 = &g_21;
    int32_t *l_22 = (void*)0;
    int32_t *l_23 = &g_21;
    int32_t *l_24 = &g_21;
    int32_t *l_25 = &g_21;
    int32_t *l_26 = &g_21;
    int32_t *l_27 = (void*)0;
    int32_t *l_28 = &g_21;
    int32_t *l_29 = &g_21;
    int32_t *l_30 = &g_21;
    int32_t *l_31 = &g_21;
    int32_t *l_32 = &g_21;
    int32_t *l_33 = &g_21;
    int32_t *l_34 = &g_21;
    int32_t *l_35 = &g_21;
    int32_t *l_36 = &g_21;
    int32_t *l_37 = &g_21;
    int32_t *l_38 = &g_21;
    int32_t *l_39 = &g_21;
    int32_t *l_40 = &g_21;
    int32_t l_41 = (-1L);
    int32_t *l_42 = &g_21;
    int32_t *l_43 = &g_21;
    int32_t l_44 = (-9L);
    int32_t *l_45 = &l_44;
    int32_t *l_46 = &l_41;
    uint8_t *l_67 = &g_68;
    uint8_t *l_82 = &g_83;
    uint64_t *l_84 = &g_85;
    int32_t **l_620 = &l_36;
    g_47--;
    (*l_32) = func_50(&g_21, func_54(func_58(((*l_620) = func_63((((*l_67)++) && ((*l_67) = ((void*)0 != l_67))), func_71((*l_23), &l_41, func_75(func_77((((1UL == 1L) > (((*l_84) = (l_67 == (l_82 = l_67))) != 0x416DA84B505D01CDLL)) != 0xA1L), p_18, p_18, &g_21))), &l_44)), &l_44, g_13, g_621), p_18, g_613), &l_44);
    return g_742;
}
static int32_t func_50(int32_t * const p_51, int32_t * const p_52, int32_t * p_53)
{
    uint32_t l_668 = 0x337F8D43L;
    uint16_t * const l_683 = &g_361;
    int32_t l_692 = 0x92BA417AL;
    int32_t l_736 = 0xB7D956E6L;
    int8_t *l_741 = &g_167;
    for (g_167 = 11; (g_167 != (-21)); g_167 = safe_sub_func_int8_t_s_s(g_167, 8))
    {
        uint32_t l_667 = 0x6C99FC5AL;
        (*g_245) ^= (l_667 < l_668);
    }
    if (((*p_52) = (0xDBL <= (safe_add_func_uint8_t_u_u((l_668 && (*p_51)), g_126)))))
    {
        uint64_t *l_677 = (void*)0;
        (*p_53) = 8L;
        (*p_53) = ((l_668 >= (((safe_add_func_uint32_t_u_u(((safe_mod_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_s((l_677 != l_677), (safe_lshift_func_uint8_t_u_s((safe_add_func_int64_t_s_s(0x148245F02E03701DLL, 0x4CB9A50B5D90F709LL)), 7)))) && (g_576 = ((+(-1L)) & (((void*)0 == l_683) && 0x0DC1L)))), (*g_648))) & (*g_245)), 0x56E569AFL)) | g_83) > l_668)) >= 4294967293UL);
        for (g_47 = 0; (g_47 >= 11); ++g_47)
        {
            uint16_t **l_715 = (void*)0;
            int32_t l_722 = 0xB5BCDB70L;
            int8_t *l_723 = &g_167;
            int32_t **l_724 = &g_621;
            if ((*p_51))
                break;
            for (g_68 = 18; (g_68 > 6); --g_68)
            {
                int32_t *l_688 = &g_210;
                int32_t *l_689 = &g_21;
                int32_t *l_690 = (void*)0;
                int32_t *l_691 = (void*)0;
                int32_t *l_693 = &l_692;
                int32_t *l_694 = &g_126;
                int32_t *l_695 = (void*)0;
                int32_t *l_696 = &g_126;
                int32_t *l_697 = &g_21;
                int32_t *l_698 = &g_21;
                int32_t *l_699 = &g_210;
                int32_t *l_700 = &g_21;
                int32_t *l_701 = (void*)0;
                uint32_t l_702 = 0x79C0B1A5L;
                ++l_702;
                if ((*g_245))
                    break;
            }
            (*l_724) = func_63(((*l_723) = (1L != (((safe_mod_func_uint32_t_u_u(l_692, (safe_sub_func_uint16_t_u_u(g_224, ((((safe_lshift_func_int8_t_s_u((safe_mod_func_int32_t_s_s((safe_add_func_uint32_t_u_u(0x68F69760L, ((l_715 != g_716) & g_210))), (safe_rshift_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(0x553AL, l_722)), (*g_648))))), l_692)) <= 0x11C773F3L) != l_722) && l_722))))) ^ g_389) && 0x1CBAL))), &l_722, &g_126);
            if ((*p_52))
                continue;
        }
    }
    else
    {
        uint16_t *l_727 = &g_361;
        int32_t * const l_731 = &g_732;
        int32_t * const *l_730 = &l_731;
        int32_t **l_735 = &g_621;
        (*p_53) = ((safe_sub_func_uint32_t_u_u((l_683 != l_727), (safe_rshift_func_int16_t_s_u(((l_730 = &g_125) != (void*)0), 6)))) || ((((((g_576 == (*g_648)) & g_361) < l_692) == (!((((+6UL) & (*l_731)) || 7UL) ^ l_668))) ^ 1L) && (*l_731)));
        (*l_735) = &g_21;
    }
    (*g_245) = (l_736 != ((*l_741) = ((2UL <= 0x9C06BD83F23B7BDELL) | (safe_sub_func_int8_t_s_s(((((&l_692 == &l_692) < l_692) ^ (safe_sub_func_uint16_t_u_u((((p_51 == (void*)0) && (**g_647)) == 0xB6DF109158F80D54LL), l_692))) > 0x74L), 0x3DL)))));
    return l_736;
}
inline static int32_t * const func_54(int32_t * p_55, uint16_t p_56, int64_t p_57)
{
    int64_t l_624 = 0x71F8D497B3AE037BLL;
    int8_t *l_627 = (void*)0;
    uint64_t l_631 = 0x0F06ED0E048C7DDDLL;
    uint64_t *l_632 = &g_85;
    uint16_t *l_633 = &g_97;
    uint16_t *l_634 = &g_361;
    int32_t * const *l_639 = &g_621;
    int32_t * const **l_640 = &l_639;
    const uint8_t *l_646 = &g_83;
    const uint8_t **l_645 = &l_646;
    uint8_t **l_649 = &g_648;
    uint32_t *l_659 = &g_389;
    int8_t *l_664 = &g_165;
    (*g_621) = (((l_624 == l_624) == (safe_sub_func_int64_t_s_s(((((void*)0 != l_627) || (safe_mul_func_int16_t_s_s(((~((*l_632) |= l_631)) & (((*l_633) |= (p_56 = p_57)) < (l_633 == l_634))), ((safe_sub_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(((*l_634) ^= g_389), g_224)), 0UL)) == p_57)))) | g_576), 0L))) & 1L);
    (*p_55) = ((((*l_640) = l_639) != &g_621) != g_622);
    if ((*p_55))
    {
        int32_t **l_641 = &g_245;
        (*l_641) = p_55;
        return (*l_641);
    }
    else
    {
        uint16_t l_642 = 0x288DL;
        l_642--;
    }
    (*g_245) = (((((p_57 | (g_85 == ((void*)0 != &g_245))) >= (l_645 == (l_649 = g_647))) > (safe_unary_minus_func_int16_t_s(((g_21 > 3UL) | (safe_add_func_int64_t_s_s((safe_mod_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(((*l_664) = (safe_sub_func_uint32_t_u_u((++(*l_659)), (safe_mod_func_int16_t_s_s(((void*)0 == &l_646), g_185))))), g_13)), p_56)), (-1L))))))) < 7L) >= 0xB7L);
    return (**l_640);
}
static int32_t * func_58(int32_t * p_59, int32_t * p_60, int16_t p_61, int32_t * p_62)
{
    int32_t *l_623 = &g_622;
    (*g_245) = (&g_117 != (void*)0);
    return l_623;
}
inline static int32_t * func_63(int8_t p_64, const int32_t * p_65, int32_t * p_66)
{
    int32_t *l_545 = &g_126;
    int32_t *l_546 = &g_21;
    int32_t *l_547 = (void*)0;
    int32_t l_548 = 0x3F146284L;
    int32_t *l_549 = (void*)0;
    int32_t *l_550 = &g_21;
    int32_t *l_551 = (void*)0;
    int32_t l_552 = 0xB942CA0AL;
    int32_t *l_553 = &g_126;
    int32_t *l_554 = &l_548;
    int32_t *l_555 = (void*)0;
    int32_t *l_556 = &g_126;
    int32_t *l_557 = &g_21;
    int32_t l_558 = 0xB3DB0E18L;
    int32_t *l_559 = &g_126;
    int32_t *l_560 = &g_210;
    int32_t *l_561 = &l_558;
    int32_t *l_562 = &g_126;
    int32_t *l_563 = &g_21;
    int32_t *l_564 = &g_21;
    int32_t l_565 = (-4L);
    int32_t l_566 = 0xDAC0EC06L;
    int32_t *l_567 = (void*)0;
    int32_t l_568 = 0x52AFE84FL;
    int32_t *l_569 = &g_210;
    int32_t l_570 = 1L;
    int32_t l_571 = 1L;
    int32_t *l_572 = &g_126;
    int32_t *l_573 = &l_571;
    int32_t *l_574 = &g_210;
    int32_t *l_575 = &l_565;
    int32_t *l_577 = &l_571;
    int32_t *l_578 = &g_126;
    int32_t *l_579 = &l_568;
    int32_t *l_580 = &l_548;
    int32_t l_581 = 0x683CE644L;
    int32_t *l_582 = &l_566;
    int32_t *l_583 = &l_552;
    int32_t l_584 = 0x4C57F72FL;
    int32_t *l_585 = &g_21;
    int32_t l_586 = 0x20F7FBA5L;
    int32_t *l_587 = &l_552;
    int32_t *l_588 = &l_552;
    int32_t *l_589 = &l_558;
    int32_t *l_590 = (void*)0;
    int32_t *l_591 = &l_586;
    int32_t *l_592 = (void*)0;
    int32_t *l_593 = &g_21;
    int32_t *l_594 = &g_210;
    int32_t *l_595 = &l_584;
    int32_t *l_596 = &l_566;
    int32_t *l_597 = (void*)0;
    int32_t *l_598 = &g_210;
    int32_t l_599 = 0x6BBBC259L;
    int32_t l_600 = 0xFF827C71L;
    int32_t *l_601 = &l_586;
    int32_t *l_602 = (void*)0;
    int32_t *l_603 = &g_21;
    int32_t *l_604 = &l_599;
    int32_t *l_605 = &g_21;
    int32_t *l_606 = &l_586;
    int32_t *l_607 = &l_558;
    int32_t *l_608 = &l_568;
    int32_t *l_609 = &l_570;
    int32_t *l_610 = &l_599;
    int32_t *l_611 = (void*)0;
    int32_t *l_614 = &g_210;
    int32_t *l_615 = &l_581;
    int32_t l_616 = (-4L);
    uint32_t l_617 = 0x19608C04L;
    l_617--;
    return &g_126;
}
inline static const int32_t * func_71(uint32_t p_72, int32_t * p_73, uint8_t * p_74)
{
    int64_t l_198 = 0x685C1309E2023AE7LL;
    int32_t l_219 = 3L;
    int8_t l_238 = 0x98L;
    int32_t *l_273 = (void*)0;
    int32_t l_302 = 0xD1A421FDL;
    int16_t l_400 = (-1L);
    int16_t *l_402 = &g_13;
    int16_t **l_401 = &l_402;
    const int8_t l_403 = (-1L);
    int8_t *l_404 = &l_238;
    uint8_t l_405 = 250UL;
    int32_t *l_408 = &l_219;
    int32_t *l_409 = (void*)0;
    int32_t *l_410 = (void*)0;
    int32_t l_411 = 0x95DFF0F6L;
    int32_t *l_412 = &l_411;
    int32_t *l_413 = &l_219;
    int32_t l_414 = 0L;
    int32_t *l_415 = &g_126;
    int32_t *l_416 = &l_219;
    int32_t l_417 = 0L;
    int32_t *l_418 = &g_21;
    int32_t *l_419 = (void*)0;
    int32_t l_420 = 0x9CAEAABAL;
    int32_t *l_421 = &g_21;
    int32_t *l_422 = &g_126;
    int32_t *l_423 = &l_417;
    int32_t l_424 = 1L;
    int32_t *l_425 = (void*)0;
    int32_t *l_426 = &g_210;
    int32_t *l_427 = &g_210;
    int32_t *l_428 = &g_21;
    int32_t *l_429 = &l_417;
    int32_t *l_430 = &l_302;
    int32_t l_431 = 0x894A6382L;
    int32_t *l_432 = &l_411;
    int32_t *l_433 = &l_414;
    int32_t *l_434 = &g_21;
    int32_t *l_435 = &l_302;
    int32_t *l_436 = (void*)0;
    int32_t *l_437 = &l_411;
    int32_t *l_438 = &l_431;
    int32_t *l_439 = &l_424;
    int32_t *l_440 = &l_219;
    int32_t l_441 = (-1L);
    int32_t *l_442 = &g_21;
    int32_t *l_443 = &g_126;
    int32_t *l_444 = (void*)0;
    int32_t *l_445 = (void*)0;
    int32_t *l_446 = &l_219;
    int32_t *l_447 = &l_420;
    int32_t *l_448 = (void*)0;
    int32_t *l_449 = &l_411;
    int32_t *l_450 = &l_411;
    int32_t *l_451 = &l_411;
    int32_t *l_452 = &l_431;
    int32_t *l_453 = (void*)0;
    int32_t *l_454 = &l_219;
    int32_t *l_455 = (void*)0;
    int32_t *l_456 = &l_414;
    int32_t *l_457 = &l_424;
    int32_t *l_458 = (void*)0;
    int32_t *l_459 = &l_424;
    int32_t *l_460 = (void*)0;
    int32_t *l_461 = (void*)0;
    int32_t *l_462 = &g_210;
    int32_t *l_463 = &g_210;
    int32_t *l_464 = &g_126;
    int32_t l_465 = 0L;
    int32_t *l_466 = (void*)0;
    int32_t l_467 = 0xFD471ECDL;
    int32_t *l_468 = &l_411;
    int32_t l_469 = (-1L);
    int32_t *l_470 = &l_414;
    int32_t *l_471 = &g_21;
    int32_t *l_472 = &l_302;
    int32_t *l_473 = &l_420;
    int32_t *l_474 = &l_424;
    int32_t *l_475 = &g_21;
    int32_t *l_476 = &l_441;
    int32_t *l_477 = &l_467;
    int32_t *l_478 = &l_302;
    int32_t *l_479 = &g_126;
    int32_t *l_480 = (void*)0;
    int32_t *l_481 = &l_414;
    int32_t *l_482 = (void*)0;
    int32_t *l_483 = &l_467;
    int32_t *l_484 = &l_467;
    int32_t *l_485 = (void*)0;
    int32_t *l_486 = &l_411;
    int32_t *l_487 = &l_417;
    int32_t *l_488 = &l_414;
    int32_t *l_489 = &l_417;
    int32_t *l_490 = &l_424;
    int32_t *l_491 = &l_420;
    int32_t *l_492 = (void*)0;
    int32_t *l_493 = &l_420;
    int32_t *l_494 = &g_21;
    int32_t *l_495 = &l_420;
    int32_t *l_496 = (void*)0;
    int32_t *l_497 = &l_411;
    int32_t *l_498 = &g_210;
    int32_t *l_499 = &l_467;
    int32_t *l_500 = &l_411;
    int32_t *l_501 = &l_467;
    int32_t *l_502 = &l_424;
    int32_t *l_503 = &g_21;
    int32_t *l_504 = &l_424;
    int32_t *l_505 = (void*)0;
    int32_t *l_506 = &l_467;
    int32_t *l_507 = &l_465;
    int32_t *l_508 = (void*)0;
    int32_t l_509 = 0L;
    int32_t *l_510 = &l_424;
    int32_t *l_511 = (void*)0;
    int32_t l_512 = 0x8F465C11L;
    int32_t *l_513 = &l_431;
    int32_t *l_514 = &l_441;
    int32_t *l_515 = &g_126;
    int32_t *l_516 = (void*)0;
    int32_t *l_517 = &l_414;
    int32_t *l_518 = (void*)0;
    int32_t *l_519 = &l_441;
    int32_t *l_520 = (void*)0;
    int32_t *l_521 = &g_126;
    int32_t *l_522 = (void*)0;
    int32_t *l_523 = &l_467;
    int32_t *l_524 = &g_21;
    int32_t l_525 = 6L;
    int32_t *l_526 = (void*)0;
    int32_t *l_527 = &l_411;
    int32_t l_528 = 1L;
    int32_t l_529 = 3L;
    int32_t *l_530 = &l_441;
    int32_t l_531 = 0x4EFF3E88L;
    int32_t *l_532 = &l_219;
    int32_t *l_533 = &l_417;
    int32_t *l_534 = &l_531;
    int32_t *l_535 = &l_528;
    int32_t *l_536 = &l_528;
    int32_t *l_537 = &l_531;
    int32_t *l_538 = &l_431;
    int32_t *l_539 = &g_126;
    int32_t *l_540 = &l_417;
    int32_t *l_541 = &g_126;
lbl_407:
    for (g_183 = (-13); (g_183 <= 15); g_183 = safe_add_func_uint32_t_u_u(g_183, 4))
    {
        int32_t *l_199 = &g_21;
        int32_t *l_200 = &g_21;
        int32_t l_201 = 0x0A7086DEL;
        int32_t *l_202 = &g_126;
        int32_t *l_203 = &l_201;
        int32_t *l_204 = &l_201;
        int32_t *l_205 = &l_201;
        int32_t *l_206 = &g_21;
        int32_t *l_207 = &g_21;
        int32_t *l_208 = &l_201;
        int32_t *l_209 = &g_126;
        int32_t *l_211 = &g_210;
        int32_t l_212 = 0x37417BD2L;
        int32_t *l_213 = &g_21;
        int32_t *l_214 = &l_212;
        int32_t *l_216 = (void*)0;
        int32_t *l_217 = &g_21;
        int32_t *l_218 = &l_212;
        int32_t *l_220 = &g_21;
        int32_t *l_221 = (void*)0;
        int32_t *l_222 = &l_212;
        int32_t *l_223 = &l_212;
        int32_t **l_227 = (void*)0;
        uint16_t * const l_256 = (void*)0;
        uint16_t *l_257 = &g_97;
        int32_t l_329 = 1L;
        int32_t l_340 = 0x57C5A96FL;
        int16_t l_378 = 0xBD8FL;
        g_224++;
        g_125 = &g_21;
        if (l_219)
        {
            uint8_t l_235 = 0xAAL;
            int16_t *l_239 = &g_117;
            int16_t *l_240 = &g_241;
            uint16_t *l_242 = &g_97;
            int64_t l_295 = (-1L);
            int32_t l_308 = 0x7DC2514DL;
            int32_t l_313 = (-1L);
            int32_t l_316 = (-10L);
            if (((safe_mul_func_uint16_t_u_u(((*l_242) = (6UL ^ ((255UL > ((g_85 || (safe_add_func_int64_t_s_s(((((*l_240) = ((*l_239) = ((((g_185 == ((+((safe_mul_func_uint8_t_u_u(l_235, 0UL)) >= 3L)) == ((safe_sub_func_int64_t_s_s(p_72, ((0x6B1FL > p_72) >= l_238))) && 0x7022D3B1L))) < p_72) >= 9UL) | (-5L)))) & l_238) ^ p_72), 2L))) != (*g_125))) | l_219))), p_72)) <= 18446744073709551615UL))
            {
                return p_73;
            }
            else
            {
                int32_t **l_243 = (void*)0;
                int32_t **l_244 = (void*)0;
                int8_t *l_248 = &g_167;
                int8_t *l_249 = &g_215;
                g_245 = (g_125 = &g_126);
                (*g_125) &= (safe_sub_func_int8_t_s_s(((*l_249) ^= ((*l_248) = l_235)), (g_165 = 4L)));
                g_125 = (void*)0;
            }
            for (g_117 = 10; (g_117 != 10); g_117 = safe_add_func_uint8_t_u_u(g_117, 8))
            {
                uint16_t **l_258 = &l_257;
                (*l_217) = (safe_add_func_int64_t_s_s(0x4C857B7439DAF5B9LL, (safe_rshift_func_int16_t_s_u(0xE04AL, 7))));
                (*l_202) = (l_256 == ((*l_258) = l_257));
                if ((*p_73))
                    break;
            }
            (*p_73) = ((*g_245) = ((*p_73) && 0UL));
            for (g_117 = 0; (g_117 < 26); g_117 = safe_add_func_int64_t_s_s(g_117, 1))
            {
                int16_t l_296 = 6L;
                int32_t l_306 = 0xD6C77FDBL;
                int32_t l_314 = 1L;
                for (l_198 = 3; (l_198 > 15); l_198 = safe_add_func_int8_t_s_s(l_198, 2))
                {
                    int32_t l_272 = 0x79F58EA2L;
                    (*l_205) = (-3L);
                }
                if ((*p_73))
                    continue;
                for (g_126 = (-4); (g_126 != (-16)); g_126--)
                {
                    int32_t *l_278 = &g_21;
                    int32_t *l_279 = &l_219;
                    int32_t *l_280 = &g_210;
                    int32_t *l_281 = &l_201;
                    int32_t *l_282 = (void*)0;
                    int32_t *l_283 = &l_219;
                    int32_t *l_284 = &l_212;
                    int32_t *l_285 = &g_210;
                    int32_t *l_286 = &g_210;
                    int32_t *l_287 = (void*)0;
                    int32_t *l_288 = &l_212;
                    int32_t *l_289 = &g_210;
                    int32_t *l_290 = &l_201;
                    int32_t *l_291 = (void*)0;
                    int32_t *l_292 = (void*)0;
                    int32_t *l_293 = &l_219;
                    int32_t *l_294 = &l_219;
                    int32_t *l_297 = &l_212;
                    int32_t *l_298 = &l_219;
                    int32_t *l_299 = &l_212;
                    int32_t *l_300 = &l_212;
                    int32_t *l_301 = &l_212;
                    int32_t *l_303 = &l_201;
                    int32_t *l_304 = &l_201;
                    int32_t *l_305 = &g_21;
                    int32_t *l_307 = &l_306;
                    int32_t *l_309 = &l_201;
                    int32_t *l_310 = &l_212;
                    int32_t *l_311 = &l_306;
                    int32_t *l_312 = &l_212;
                    int32_t l_315 = 0x0A6EEA41L;
                    int32_t *l_317 = (void*)0;
                    int32_t *l_318 = &g_21;
                    int32_t *l_319 = &l_313;
                    int32_t *l_320 = &l_306;
                    int32_t *l_321 = &l_219;
                    int32_t *l_322 = &l_302;
                    int32_t *l_323 = (void*)0;
                    int32_t *l_324 = &l_316;
                    int32_t *l_325 = &g_21;
                    int32_t *l_326 = &l_313;
                    int32_t *l_327 = &l_212;
                    int32_t *l_328 = (void*)0;
                    int32_t *l_330 = &l_315;
                    int32_t *l_331 = &l_308;
                    int32_t *l_332 = &l_302;
                    int32_t *l_333 = &l_219;
                    int32_t *l_334 = &l_212;
                    int32_t *l_335 = &l_302;
                    int32_t *l_336 = (void*)0;
                    int32_t *l_337 = &l_329;
                    int32_t *l_338 = &l_308;
                    int32_t *l_339 = &l_306;
                    int32_t *l_341 = &l_329;
                    int32_t *l_342 = &g_21;
                    int32_t *l_343 = &l_212;
                    int32_t *l_344 = &l_201;
                    int32_t l_345 = 0x57027B00L;
                    int32_t *l_346 = &l_315;
                    int32_t *l_347 = &l_314;
                    int32_t *l_348 = &l_314;
                    int32_t *l_349 = (void*)0;
                    int32_t *l_350 = (void*)0;
                    int32_t *l_351 = &l_201;
                    int32_t *l_352 = &l_302;
                    int32_t *l_353 = &l_302;
                    int32_t *l_354 = (void*)0;
                    int32_t *l_355 = (void*)0;
                    int32_t *l_356 = &l_201;
                    int32_t *l_357 = &l_340;
                    int32_t *l_358 = &g_21;
                    int32_t *l_359 = (void*)0;
                    int32_t *l_360 = (void*)0;
                    g_361++;
                }
            }
        }
        else
        {
            const int32_t *l_367 = &g_126;
            const int32_t **l_366 = &l_367;
            int16_t *l_368 = &g_241;
            int32_t *l_375 = (void*)0;
            int32_t *l_376 = &g_377;
            uint8_t *l_380 = (void*)0;
            uint8_t **l_379 = &l_380;
            uint32_t *l_387 = (void*)0;
            uint32_t *l_388 = &g_389;
            (*l_200) &= 0x0B56FAF5L;
            (*l_207) = ((safe_lshift_func_int16_t_s_s((l_366 == &p_73), 9)) > ((((*l_368) = (*l_209)) == g_126) || (safe_rshift_func_int16_t_s_s((0x892F54D7D783D8B8LL <= p_72), (safe_mul_func_int16_t_s_s(((1L != (safe_mod_func_int32_t_s_s((((*l_257) = (((*l_379) = func_77(((*l_376) = (g_192 >= ((((void*)0 != p_74) < 0xD5L) > (*g_245)))), g_169, l_378, &g_21)) != (void*)0)) > g_21), (-10L)))) > g_185), g_185))))));
            (*l_204) = (1L != 0x89L);
            (*l_211) |= (safe_lshift_func_uint16_t_u_u(((*l_257) = 65530UL), (((*p_73) = (safe_add_func_uint8_t_u_u((*p_74), ((((-1L) || (*p_73)) ^ (((*l_367) ^ 0x4CL) || ((safe_rshift_func_int16_t_s_s((((*l_388) = p_72) <= (-6L)), 10)) <= 8L))) && g_361)))) | (*l_199))));
        }
        (*l_222) &= l_198;
    }
    if ((safe_add_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((safe_sub_func_int64_t_s_s(g_185, (((*l_404) &= ((safe_lshift_func_int16_t_s_u(g_13, p_72)) == ((safe_lshift_func_uint8_t_u_s(l_219, (p_72 < l_400))) | (((((((*l_401) = &l_400) == &l_400) || ((p_72 >= g_167) < p_72)) == p_72) == (*p_73)) == l_403)))) & g_210))), l_405)), (*p_74))))
    {
lbl_406:
        (*p_73) |= 3L;
    }
    else
    {
        if (g_126)
            goto lbl_406;
    }
    if (g_192)
        goto lbl_407;
    --g_542;
    return p_73;
}
inline static uint8_t * func_75(uint8_t * p_76)
{
    return &g_169;
}
static uint8_t * func_77(int32_t p_78, const int64_t p_79, int64_t p_80, int32_t * p_81)
{
    int8_t l_90 = 5L;
    uint16_t *l_96 = &g_97;
    int32_t l_112 = 0xA000286FL;
    uint8_t *l_135 = (void*)0;
    int32_t l_186 = 0xFF7D9343L;
    uint8_t *l_195 = &g_192;
    if ((safe_lshift_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s(p_79, l_90)) < ((safe_mul_func_uint16_t_u_u(l_90, (+(((l_112 = ((safe_mod_func_uint32_t_u_u((g_13 != (((*l_96)--) > (p_80 >= l_90))), (safe_mod_func_uint64_t_u_u((+4294967295UL), (safe_mul_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u((safe_add_func_int64_t_s_s(((!(g_13 | ((safe_mod_func_int64_t_s_s(p_80, l_90)) < (*p_81)))) != 0x70486D4DL), 0xC038D03D8E66C79ALL)), l_90)) != l_90), p_79)))))) < g_83)) > g_85) ^ g_21)))) <= 0x7DFDL)), 6)))
    {
        uint64_t l_115 = 0xE5697A12B2FE0738LL;
        int16_t *l_116 = &g_117;
        const uint32_t l_120 = 0xACABD119L;
        if ((safe_lshift_func_int16_t_s_s((l_90 == ((void*)0 != &g_83)), (l_112 ^ (l_115 >= (((((*l_116) = (g_47 >= l_115)) > g_85) | (((safe_rshift_func_int16_t_s_s(l_115, 15)) != l_120) || 0xD4DCL)) && 0xAFL))))))
        {
            uint64_t l_121 = 0xBD88186F270ADFF4LL;
            int32_t *l_123 = &l_112;
            int32_t **l_122 = &l_123;
            int32_t *l_124 = &l_112;
            l_121 |= 0x26DA6125L;
            (*l_122) = &g_21;
            (*l_124) = g_97;
            g_125 = (void*)0;
        }
        else
        {
            int32_t **l_127 = &g_125;
            (*l_127) = &g_126;
        }
        for (g_126 = 0; (g_126 == (-11)); g_126 = safe_sub_func_uint8_t_u_u(g_126, 9))
        {
            uint64_t l_130 = 0x0D3BD28F7D061DAELL;
            int32_t *l_133 = &l_112;
            int32_t **l_134 = &l_133;
            l_130++;
            (*l_133) = (-4L);
            (*l_134) = &g_126;
        }
        return l_135;
    }
    else
    {
        int32_t **l_136 = (void*)0;
        int32_t **l_137 = &g_125;
        (*l_137) = &g_126;
    }
    for (l_90 = 0; (l_90 == 17); l_90++)
    {
        int16_t *l_153 = &g_117;
        int16_t **l_154 = &l_153;
        int16_t **l_155 = (void*)0;
        int16_t *l_157 = &g_117;
        int16_t **l_156 = &l_157;
        int32_t l_160 = 8L;
        uint8_t *l_163 = (void*)0;
        int8_t *l_164 = &g_165;
        int8_t *l_166 = &g_167;
        uint8_t *l_168 = &g_169;
        int32_t *l_170 = &l_112;
        int32_t *l_171 = &g_126;
        int32_t *l_172 = (void*)0;
        int32_t *l_173 = &g_126;
        int32_t *l_174 = &l_160;
        int32_t *l_175 = (void*)0;
        int32_t *l_176 = &l_112;
        int32_t *l_177 = &l_112;
        int32_t *l_178 = &l_160;
        int32_t l_179 = 0x960B3385L;
        int32_t *l_180 = &l_112;
        int32_t *l_181 = &l_179;
        int32_t *l_182 = (void*)0;
        int32_t *l_184 = &l_112;
        int32_t *l_187 = &g_126;
        int32_t *l_188 = &l_186;
        int32_t *l_189 = &l_186;
        int32_t *l_190 = &l_179;
        int32_t *l_191 = &l_160;
        (*l_170) |= (safe_mod_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(g_126, (+(safe_mod_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(((*l_168) = ((safe_mul_func_uint8_t_u_u(((((*l_154) = l_153) != ((*l_156) = &g_117)) | p_78), (((*p_81) ^ g_97) && (safe_mod_func_uint8_t_u_u((7L >= l_160), ((*l_166) &= ((*l_164) = ((g_83 = (((safe_add_func_int8_t_s_s((-9L), p_78)) >= 0xFBL) | l_90)) || p_78)))))))) & 0xA016E985L)), p_79)), 0)), l_160))))), 0xBF9AL));
        ++g_192;
    }
    return l_195;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    g_648 = 0;
    csmith_sink_ = g_13;
    csmith_sink_ = g_21;
    csmith_sink_ = g_47;
    csmith_sink_ = g_68;
    csmith_sink_ = g_83;
    csmith_sink_ = g_85;
    csmith_sink_ = g_97;
    csmith_sink_ = g_117;
    csmith_sink_ = g_126;
    csmith_sink_ = g_165;
    csmith_sink_ = g_167;
    csmith_sink_ = g_169;
    csmith_sink_ = g_183;
    csmith_sink_ = g_185;
    csmith_sink_ = g_192;
    csmith_sink_ = g_210;
    csmith_sink_ = g_215;
    csmith_sink_ = g_224;
    csmith_sink_ = g_241;
    csmith_sink_ = g_361;
    csmith_sink_ = g_377;
    csmith_sink_ = g_389;
    csmith_sink_ = g_542;
    csmith_sink_ = g_576;
    csmith_sink_ = g_612;
    csmith_sink_ = g_613;
    csmith_sink_ = g_622;
    csmith_sink_ = g_732;
    csmith_sink_ = g_742;
    csmith_sink_ = g_744;
    platform_main_end(0,0);
    return 0;
}
