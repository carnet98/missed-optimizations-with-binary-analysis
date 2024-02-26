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
static uint32_t g_2 = 3UL;
static int16_t g_5 = 1L;
static int32_t g_52 = 0L;
static uint32_t g_54 = 0x761E7FF5L;
static int16_t g_151 = 0x61DEL;
static int8_t g_160 = 0x60L;
static int32_t g_161 = 0x2F3D6CDBL;
static uint32_t g_162 = 4294967292UL;
static uint8_t g_219 = 0x46L;
static int32_t g_239 = 0xAE77DE15L;
static uint16_t g_270 = 65535UL;
static int32_t g_296 = 0x78E8836BL;
static int32_t g_297 = 0L;
static uint32_t g_300 = 0xFBF69327L;
static int8_t g_325 = 0x26L;
static int32_t g_368 = 0x0960BBCDL;
static uint32_t g_457 = 0xAB2BB56AL;
static uint32_t g_478 = 1UL;
static uint32_t g_560 = 0xD72166DEL;
static int32_t g_610 = 5L;
static uint8_t g_612 = 0xDBL;
static uint16_t g_619 = 0x6931L;
static uint32_t g_874 = 18446744073709551615UL;
static uint32_t g_997 = 0x8625CBCBL;
static int8_t g_1004 = (-3L);
static uint32_t g_1005 = 0xFB9E7C4BL;
static uint8_t g_1069 = 5UL;
static uint16_t g_1092 = 65529UL;
static uint32_t g_1098 = 0x2838331EL;
static uint8_t g_1109 = 250UL;
inline static int32_t func_1(void);
static uint16_t func_8(uint16_t p_9, int16_t p_10, int16_t p_11);
static const uint16_t func_12(int32_t p_13, uint8_t p_14, int8_t p_15);
inline static int32_t func_23(int32_t p_24, int8_t p_25);
inline static int8_t func_26(uint32_t p_27, uint8_t p_28, int8_t p_29);
static int32_t func_37(int16_t p_38, int32_t p_39, uint32_t p_40);
inline static int8_t func_45(int32_t p_46);
static uint16_t func_57(int32_t p_58, uint8_t p_59, uint8_t p_60, uint8_t p_61);
static int32_t func_62(uint32_t p_63, uint32_t p_64);
inline static uint16_t func_75(uint32_t p_76, const uint32_t p_77, uint16_t p_78);
inline static int32_t func_1(void)
{
    int32_t l_21 = 0xFFF839E0L;
    int32_t l_901 = 0L;
    int16_t l_915 = 0x3ACAL;
    const int16_t l_991 = (-4L);
    uint32_t l_999 = 0x923C09D8L;
    int32_t l_1002 = 0x6888AB08L;
    int32_t l_1003 = 6L;
    const uint8_t l_1067 = 255UL;
    uint32_t l_1090 = 1UL;
    uint32_t l_1152 = 0x532B8F9AL;
    if (g_2)
    {
        int8_t l_22 = 0xC9L;
        int32_t l_917 = 0x36BB6705L;
        uint8_t l_959 = 0xECL;
        int16_t l_965 = 0xA877L;
        for (g_2 = 0; (g_2 >= 31); ++g_2)
        {
            uint16_t l_16 = 6UL;
            g_5 = g_2;
            l_901 = (safe_add_func_int16_t_s_s((func_8(((func_12(l_16, ((safe_lshift_func_uint8_t_u_u(((g_2 & 0x10DD013DL) < (safe_add_func_uint8_t_u_u(l_21, 1L))), l_22)) && func_23(g_2, func_26(((safe_rshift_func_int8_t_s_u((safe_add_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((g_2 != (safe_unary_minus_func_uint8_t_u((g_2 < l_16)))), 249UL)), 2UL)), 1)) & l_16), g_5, g_2))), g_2) ^ g_219) < g_219), g_296, g_160) != 0x6DD3L), g_619));
        }
        if ((!(safe_unary_minus_func_int32_t_s((safe_mod_func_uint8_t_u_u((0x8E1DF076L > (((l_21 > l_901) == (((+g_325) && (!l_22)) != ((safe_mul_func_int8_t_s_s((safe_mod_func_uint8_t_u_u((g_52 <= ((~l_22) <= l_22)), l_22)), 0x4CL)) == 0x1588L))) | l_21)), l_915))))))
        {
            int32_t l_937 = (-7L);
            int8_t l_958 = (-1L);
            uint32_t l_962 = 4294967295UL;
            uint32_t l_973 = 0UL;
            l_901 &= (~g_619);
            g_52 = 0x41984138L;
            l_917 = g_270;
            if ((safe_rshift_func_uint8_t_u_s(l_901, 4)))
            {
                int32_t l_938 = 0x643DCFF6L;
                for (l_917 = (-17); (l_917 > (-29)); l_917--)
                {
                    int32_t l_924 = 0x52D2EA41L;
                    g_161 = (((safe_rshift_func_uint8_t_u_u((1L != ((1L ^ (l_924 & ((((safe_mod_func_int16_t_s_s(l_924, (g_162 ^ g_610))) || (((safe_sub_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((l_917 < 1UL), (((safe_lshift_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((((((l_924 < l_937) == 0x5BD8L) >= l_21) <= l_917) & l_937), g_160)), 0UL)), l_924)) ^ 0xEE45E571L) ^ g_160))), 1L)) & 4UL) && g_52)) && g_5) == 0xD3491409L))) & 65534UL)), g_300)) || l_938) & g_54);
                }
                l_959 = ((safe_add_func_int8_t_s_s(g_2, (safe_lshift_func_uint8_t_u_s(l_937, (((safe_rshift_func_uint16_t_u_s(((g_54 || (l_22 > (((g_297 & (l_901 != (+((safe_add_func_uint8_t_u_u((((((safe_sub_func_int32_t_s_s(0L, (safe_mul_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u((safe_sub_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((g_560 || ((-4L) | g_239)), g_619)), g_610)), 1)), l_938)))) | 0xCA1713C1L) != 0xDA9BL) == l_958) & g_54), l_901)) & g_2)))) && 1L) & (-4L)))) > l_21), l_901)) & g_162) <= g_300))))) != g_610);
                l_917 = g_874;
            }
            else
            {
                const int32_t l_975 = 0x73748A15L;
                for (l_901 = 0; (l_901 <= 12); l_901 = safe_add_func_int32_t_s_s(l_901, 2))
                {
                    const int32_t l_974 = 1L;
                    l_937 = ((((l_962 <= (safe_add_func_uint8_t_u_u(l_958, (l_965 <= (safe_mul_func_uint8_t_u_u(0xDDL, ((+l_901) != (((g_160 == (g_239 ^ ((safe_mul_func_int16_t_s_s((safe_mod_func_int16_t_s_s((l_973 < (((0x6A34E9C0L != l_974) != g_478) != 6UL)), 65535UL)), 0x4686L)) <= l_901))) != 0xA00AL) & g_612)))))))) && l_975) <= l_975) != g_610);
                }
                if ((safe_mod_func_int16_t_s_s(((((safe_sub_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((((((safe_sub_func_int8_t_s_s(g_612, ((1L < g_161) >= g_54))) != (safe_lshift_func_uint16_t_u_s(g_2, 12))) & ((((g_368 || ((((safe_unary_minus_func_int32_t_s(0x669F8B11L)) != l_975) > (((((safe_rshift_func_int16_t_s_s(((safe_mod_func_int8_t_s_s((g_151 | l_975), 0xB8L)) || g_239), 8)) | l_901) > g_300) | l_937) >= g_270)) & 0xF7C5L)) == g_368) < 4UL) != l_973)) & l_959) >= l_991), l_991)), l_991)) != g_219) <= l_991) ^ 3UL), g_368)))
                {
                    if ((g_560 || g_296))
                    {
                        g_297 &= ((+(safe_rshift_func_uint8_t_u_u(l_22, 7))) <= l_901);
                    }
                    else
                    {
                        g_368 = (safe_add_func_uint8_t_u_u(g_619, g_2));
                        return l_901;
                    }
                }
                else
                {
                    g_52 &= (0x86AFL <= 0x7EFBL);
                    g_997 = (l_959 <= g_52);
                    return g_612;
                }
            }
        }
        else
        {
            int32_t l_998 = 0xD35B6A63L;
            int32_t l_1040 = (-9L);
            uint8_t l_1041 = 0xDEL;
            l_999--;
            l_917 |= g_612;
            --g_1005;
            for (l_965 = 0; (l_965 <= (-14)); l_965--)
            {
                int16_t l_1020 = (-1L);
                uint32_t l_1024 = 0x92581B31L;
                uint32_t l_1042 = 1UL;
                g_297 = (safe_mod_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((safe_add_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s((g_619 || ((safe_mod_func_int8_t_s_s((((l_1020 && (((safe_add_func_uint8_t_u_u((0x93L == ((safe_unary_minus_func_uint16_t_u(g_5)) || (l_1024 && (safe_rshift_func_int16_t_s_s((l_959 & ((safe_sub_func_uint8_t_u_u((((((safe_rshift_func_int8_t_s_u((safe_mod_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u(g_610, (safe_mul_func_uint16_t_u_u((l_22 > (+(safe_sub_func_int8_t_s_s(g_325, l_901)))), g_619)))), 0xBAD36AAEL)), 3)) && 0x0C2732C7L) | l_1020) > l_1040) & g_52), l_1041)) || 0xF864L)), l_1042))))), l_917)) | (-7L)) == (-8L))) || g_619) & 0xA9L), l_1040)) | l_991)), l_1002)), 1L)), 65535UL)), 0x5727L));
                return l_917;
            }
        }
        l_901 ^= (-6L);
    }
    else
    {
        uint32_t l_1043 = 0x19EFBEEDL;
        int32_t l_1068 = 0xCD3F2AFDL;
        l_1043 = g_160;
        if ((safe_rshift_func_uint8_t_u_s(((safe_lshift_func_uint16_t_u_s(((((safe_rshift_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((safe_mul_func_int16_t_s_s((safe_mod_func_int32_t_s_s(g_874, (((safe_add_func_uint32_t_u_u(((~(safe_rshift_func_int16_t_s_u(g_297, 11))) & (safe_lshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((((65535UL ^ (-10L)) != ((((safe_lshift_func_uint16_t_u_s((l_1043 <= ((l_1043 == (g_270 != l_915)) > g_239)), l_1067)) >= g_610) != l_1043) > g_560)) != g_52), 6)), 0))), l_1002)) > 0xC0L) && l_1068))), 0x920CL)), 2UL)), l_991)) && g_2) < 0xF5C3L) >= g_478), g_1069)) < 0xDCL), 7)))
        {
            uint16_t l_1089 = 0x046AL;
            uint8_t l_1091 = 8UL;
            g_368 = (safe_sub_func_int8_t_s_s(8L, (safe_lshift_func_int16_t_s_u(((safe_mod_func_int8_t_s_s(8L, ((g_874 ^ ((((safe_mul_func_uint32_t_u_u((g_161 | (!((8UL ^ (safe_sub_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(7L, (0x95L < (0xA1L == (safe_lshift_func_uint16_t_u_s((g_160 || g_368), g_619)))))), g_612)), l_1089)), l_1090))) != l_1043))), 0UL)) >= 0L) >= l_1003) ^ g_619)) || g_219))) && l_1043), 9))));
            l_1091 = 0xDC0E3282L;
        }
        else
        {
            uint8_t l_1119 = 0x13L;
            uint8_t l_1149 = 0x76L;
            if (g_296)
            {
                return g_1092;
            }
            else
            {
                uint32_t l_1097 = 0x52DE7AC6L;
                if ((safe_lshift_func_int8_t_s_u((((safe_sub_func_uint16_t_u_u(l_1068, g_161)) >= l_1097) < g_297), 5)))
                {
                    int8_t l_1118 = (-1L);
                    int32_t l_1151 = 0x80BF7646L;
                    g_52 = 0L;
                    g_1098++;
                    if ((safe_add_func_uint8_t_u_u((((((((((((safe_mul_func_uint16_t_u_u(g_1004, g_219)) == (l_1068 == ((safe_mul_func_uint8_t_u_u((g_619 > g_612), (safe_rshift_func_uint8_t_u_u(0xAEL, 3)))) ^ g_1109))) <= (safe_mul_func_int16_t_s_s(((safe_mod_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(((0x9A25L | (((-5L) ^ l_1118) > l_1119)) < l_901), 11)), l_1119)) < g_5), g_297)) < 5L), 1UL))) && 247UL) ^ g_5) >= 65535UL) >= 0x90L) || g_1109) & 0x568EAC41L) <= l_1043) | g_300), l_1097)))
                    {
                        const int8_t l_1135 = 3L;
                        uint32_t l_1136 = 0x535F60F5L;
                        l_1003 = (g_1098 || ((g_1092 < (0x43E1L | ((l_1118 || (safe_sub_func_int16_t_s_s(((safe_add_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_u((l_1118 && l_1118), (safe_rshift_func_uint16_t_u_s((((safe_lshift_func_uint8_t_u_u((((~(0L != (l_1118 <= (safe_mul_func_uint8_t_u_u((((safe_mod_func_int16_t_s_s(l_1097, l_1119)) && l_1097) >= l_1119), g_297))))) | g_997) > l_1135), 5)) != l_21) | l_1043), l_1043)))) > l_1097), 0x59L)) >= l_1097), g_296))) == l_1136))) ^ l_1043));
                        return l_1135;
                    }
                    else
                    {
                        uint32_t l_1150 = 7UL;
                        l_1151 &= (((((l_1119 <= ((((((safe_lshift_func_int16_t_s_u((g_239 || g_325), (safe_mul_func_int16_t_s_s(((0x3BL & ((((safe_lshift_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(0L, (l_1097 > ((safe_unary_minus_func_int16_t_s((!(safe_sub_func_uint16_t_u_u(5UL, (l_999 != (-7L))))))) && g_5)))), g_219)) < l_1118) <= (-2L)) <= l_1149)) <= g_1004), g_478)))) > l_1043) <= g_997) <= g_874) ^ 0x22L) >= l_1150)) >= l_1118) ^ 0x77L) | l_1119) <= l_1118);
                        g_297 = g_2;
                    }
                }
                else
                {
                    return g_610;
                }
                return g_270;
            }
        }
        g_52 = (g_457 & g_1092);
        --l_1152;
    }
    return l_999;
}
static uint16_t func_8(uint16_t p_9, int16_t p_10, int16_t p_11)
{
    uint32_t l_883 = 0x9AD78DBAL;
    int16_t l_896 = 9L;
    int32_t l_897 = 0x292DC9DBL;
    l_897 = (safe_add_func_int8_t_s_s((((((safe_mod_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(l_883, 0)), 0x77A0L)) > ((((safe_add_func_uint8_t_u_u(((l_883 != ((~((safe_add_func_int8_t_s_s(0x32L, ((safe_mul_func_int8_t_s_s(((safe_add_func_uint32_t_u_u((0x13L || g_478), (safe_unary_minus_func_int16_t_s(((l_883 >= (0x62L <= ((safe_sub_func_int16_t_s_s((l_883 || (-1L)), l_883)) > 8L))) || (-1L)))))) && g_239), g_162)) | g_478))) >= 0x5695L)) > p_10)) > 0UL), p_9)) & 0x72L) < p_9) ^ 65535UL)) & l_896) > g_874) < 255UL), g_219));
    for (g_52 = 0; (g_52 != 24); g_52 = safe_add_func_uint32_t_u_u(g_52, 4))
    {
        uint8_t l_900 = 1UL;
        l_900 = 0L;
    }
    return l_896;
}
static const uint16_t func_12(int32_t p_13, uint8_t p_14, int8_t p_15)
{
    int8_t l_872 = (-9L);
    int32_t l_873 = 8L;
    g_52 = ((0x41L ^ g_478) < p_15);
    --g_874;
    return l_873;
}
inline static int32_t func_23(int32_t p_24, int8_t p_25)
{
    int32_t l_841 = 1L;
    int32_t l_854 = (-4L);
    uint16_t l_855 = 0UL;
    l_855 = (safe_rshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((l_841 || (safe_sub_func_int32_t_s_s((((((((safe_sub_func_int32_t_s_s(l_841, (safe_lshift_func_int16_t_s_u((safe_add_func_uint32_t_u_u(((g_325 != (safe_add_func_uint8_t_u_u(((l_841 | g_239) | (l_841 == ((5L | (g_160 <= l_854)) <= 3UL))), (-1L)))) > g_560), 0x445486C4L)), l_854)))) < l_854) >= p_24) <= p_24) && 5UL) <= l_841) != g_54), g_270))), 7)), 14));
    g_52 = (safe_mul_func_uint16_t_u_u(l_855, (safe_sub_func_int32_t_s_s((safe_sub_func_int32_t_s_s(p_24, (safe_rshift_func_uint8_t_u_u((l_855 & (safe_rshift_func_int8_t_s_s(l_854, (((g_610 & (g_457 & p_24)) < l_855) || ((p_24 & 1UL) != g_239))))), 7)))), l_854))));
    l_854 ^= g_162;
    l_854 = ((p_24 ^ ((safe_lshift_func_uint8_t_u_s(l_855, 4)) <= (((safe_mul_func_int16_t_s_s(p_25, (g_162 == g_151))) && ((((safe_mod_func_uint16_t_u_u(65534UL, (g_612 | g_612))) == g_325) > (-1L)) < 1UL)) && p_25))) | g_161);
    return p_25;
}
inline static int8_t func_26(uint32_t p_27, uint8_t p_28, int8_t p_29)
{
    uint32_t l_44 = 0UL;
    int8_t l_742 = 0x52L;
    int32_t l_770 = 5L;
    uint32_t l_801 = 0x7AF0D64DL;
    int32_t l_813 = (-1L);
    int32_t l_814 = (-1L);
    l_770 |= func_37(((safe_lshift_func_uint16_t_u_s((g_5 || ((+(l_44 > func_45(p_27))) ^ 1UL)), 5)) && (((safe_mul_func_int16_t_s_s((l_44 > (safe_rshift_func_uint8_t_u_u(0x89L, 0))), ((safe_rshift_func_uint8_t_u_u((+p_29), (safe_sub_func_int8_t_s_s((safe_mod_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_u(g_5, g_610)) >= g_612), (-9L))), p_27)))) | g_610))) ^ l_44) <= 0xF8L)), p_28, l_742);
    g_368 = ((safe_add_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s(((safe_sub_func_uint16_t_u_u((g_151 > (-2L)), l_770)) > (0x82716A4BL || (safe_sub_func_uint8_t_u_u((l_44 | (((safe_add_func_int16_t_s_s(((safe_mod_func_uint8_t_u_u(l_742, (((((safe_mod_func_uint32_t_u_u(8UL, l_770)) ^ g_270) ^ g_239) == 0x866D73C9L) & p_27))) | 0UL), l_742)) <= 0UL) | 0x208DL)), p_29)))), g_457)) && p_29), g_325)) < g_161);
    l_814 |= (safe_sub_func_int8_t_s_s(l_770, ((safe_mod_func_int8_t_s_s(((0x77902ADEL & ((safe_mod_func_uint16_t_u_u(((safe_sub_func_uint8_t_u_u(((safe_sub_func_int8_t_s_s(((safe_sub_func_uint16_t_u_u(0x5DC0L, (safe_mod_func_int32_t_s_s(l_44, l_801)))) < ((safe_mul_func_int8_t_s_s(0xDBL, ((safe_mul_func_int8_t_s_s((((safe_sub_func_uint16_t_u_u((+(safe_mul_func_int16_t_s_s(((safe_rshift_func_int8_t_s_u(l_742, g_560)) ^ (g_300 <= l_801)), l_813))), (-9L))) > g_162) != g_300), 0L)) & p_29))) >= g_160)), p_29)) > 0xEE14E410L), l_801)) != g_2), g_560)) ^ l_801)) != p_28), 0xCDL)) > p_29)));
    g_52 ^= (safe_mod_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((((safe_rshift_func_uint16_t_u_u((safe_add_func_int8_t_s_s((!(safe_sub_func_int16_t_s_s(((safe_sub_func_int32_t_s_s((((0x15L ^ (safe_mod_func_uint8_t_u_u(((safe_mod_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(((p_28 & 0xFEL) & ((g_160 <= ((g_161 < g_300) == (p_29 == (~(safe_rshift_func_int8_t_s_s(((-1L) | (((6L && (-1L)) > p_27) | p_27)), p_27)))))) == p_28)), 14)), g_560)) != p_29), g_457))) >= (-1L)) | p_28), g_239)) | l_814), 0xB7DDL))), g_2)), 7)) || g_5) ^ p_27), p_28)), p_27));
    return p_28;
}
static int32_t func_37(int16_t p_38, int32_t p_39, uint32_t p_40)
{
    uint32_t l_755 = 3UL;
    int32_t l_769 = 0x87DD2C94L;
    l_769 = (safe_rshift_func_int16_t_s_u(((safe_mul_func_int8_t_s_s((safe_mod_func_int32_t_s_s((safe_sub_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(p_38, (safe_mod_func_uint16_t_u_u(l_755, g_610)))), (((~7UL) != (safe_sub_func_int32_t_s_s(((safe_sub_func_uint16_t_u_u((safe_mod_func_int16_t_s_s(((safe_sub_func_int8_t_s_s(g_52, (l_755 != (((0xD9L > (((p_39 < ((safe_mul_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(((l_755 != g_151) | l_755), 5)), 255UL)) > p_40)) < l_755) | l_755)) & (-10L)) || l_755)))) && l_755), 2L)), p_39)) ^ p_40), 0xB16D0730L))) && g_239))), g_612)), g_2)) < p_39), 7));
    return g_160;
}
inline static int8_t func_45(int32_t p_46)
{
    uint32_t l_47 = 0x2699FF93L;
    int32_t l_50 = (-2L);
    int32_t l_51 = 0L;
    int32_t l_53 = 0xF121F205L;
    uint32_t l_724 = 0x0306E1B2L;
    l_47++;
    g_54++;
    l_51 = (func_57(func_62(l_53, p_46), (safe_mod_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(g_325, ((safe_mul_func_uint16_t_u_u((~((0x71L && ((safe_rshift_func_uint8_t_u_s((p_46 && g_325), 6)) | ((g_160 < (safe_mod_func_uint32_t_u_u(((((1L != 65531UL) > g_160) | (-1L)) & g_296), l_50))) > (-5L)))) != 0x85L)), l_47)) ^ (-1L)))), g_325)), p_46, p_46) ^ l_53);
    l_50 = (g_2 >= (l_50 || (safe_rshift_func_uint16_t_u_s(1UL, ((safe_add_func_uint32_t_u_u(((safe_sub_func_uint32_t_u_u(l_51, ((safe_mod_func_int8_t_s_s((safe_add_func_int8_t_s_s(l_724, (+g_619))), g_300)) || (safe_rshift_func_int16_t_s_u((p_46 && ((((!l_47) ^ 1UL) >= 8UL) || p_46)), p_46))))) < 1UL), l_51)) != l_50)))));
    return g_5;
}
static uint16_t func_57(int32_t p_58, uint8_t p_59, uint8_t p_60, uint8_t p_61)
{
    uint8_t l_360 = 0x1CL;
    int32_t l_369 = (-9L);
    int32_t l_382 = 0L;
    const int32_t l_383 = 1L;
    uint16_t l_592 = 0x595CL;
    int32_t l_608 = 6L;
    l_369 = (safe_lshift_func_uint16_t_u_s((0x0C55L < ((((safe_mod_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u((safe_mul_func_int8_t_s_s(8L, ((0xF0A9A4EBL != ((safe_add_func_int32_t_s_s(((3UL >= (safe_add_func_int16_t_s_s(p_60, (safe_mod_func_int32_t_s_s((safe_sub_func_int16_t_s_s((((((g_239 >= ((safe_lshift_func_uint16_t_u_s((safe_mul_func_int16_t_s_s((((safe_rshift_func_uint16_t_u_s(1UL, 1)) & l_360) | (+((safe_lshift_func_int8_t_s_u((safe_sub_func_int16_t_s_s(((safe_add_func_int32_t_s_s(0x519DB94EL, p_58)) <= g_297), 8L)), g_5)) <= p_61))), l_360)), 3)) && l_360)) > 255UL) < 247UL) == g_54) && g_296), g_161)), 0xCC0702C4L))))) && g_368), l_360)) <= p_61)) < l_360))), l_360)), p_58)) ^ g_160) || p_61) | 1L)), p_61));
    if ((safe_add_func_uint8_t_u_u((0UL <= (((0x6C8DL >= p_61) <= (((((0x29L & ((!(!l_360)) < p_61)) && ((safe_sub_func_int16_t_s_s(p_60, (((safe_mul_func_int16_t_s_s(((safe_add_func_uint8_t_u_u((g_297 < ((((safe_sub_func_int32_t_s_s((l_360 == 0UL), g_160)) < 0UL) != p_61) || 7UL)), l_382)) >= g_270), g_2)) | g_2) > 8L))) & l_360)) >= l_382) == g_160) >= l_383)) || 65535UL)), g_368)))
    {
        uint16_t l_402 = 0UL;
        int8_t l_403 = (-1L);
        int8_t l_455 = 0xF7L;
        int32_t l_456 = 9L;
        uint8_t l_503 = 0UL;
        uint32_t l_639 = 0UL;
        p_58 = g_5;
        g_52 = (safe_mul_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s(g_239, (safe_mod_func_uint32_t_u_u((((safe_rshift_func_int16_t_s_u((((safe_add_func_int32_t_s_s((safe_mul_func_int8_t_s_s((g_219 == p_60), ((g_300 <= (l_383 == p_60)) <= ((safe_add_func_int16_t_s_s(((0x47L ^ (safe_lshift_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(0xA435L, g_300)), 14))) <= l_382), p_60)) ^ (-10L))))), 0x17FD7715L)) | l_369) | g_270), p_60)) ^ (-10L)) == g_296), g_2)))) || g_151), l_402));
        if (l_403)
        {
            uint32_t l_404 = 1UL;
            int32_t l_405 = (-1L);
            int32_t l_558 = 0L;
            l_405 ^= l_404;
            l_369 |= 0x9B40CF0CL;
            if ((l_369 || ((safe_rshift_func_uint16_t_u_s((safe_mod_func_int16_t_s_s(g_151, g_54)), 9)) <= (safe_mul_func_int16_t_s_s((safe_add_func_int16_t_s_s((((~(((((g_161 > p_58) & ((l_405 >= (0x34A2L && 0x248CL)) > ((safe_add_func_uint16_t_u_u((p_60 >= 65535UL), p_59)) ^ g_52))) && l_405) & g_300) ^ p_60)) ^ (-8L)) | 0xCCL), 65535UL)), (-1L))))))
            {
                uint16_t l_420 = 0x9D25L;
                int16_t l_427 = 0x87C8L;
                int32_t l_428 = 1L;
                uint32_t l_466 = 18446744073709551613UL;
                int32_t l_572 = 0x7BC6D4CEL;
                int16_t l_591 = 0xFE3BL;
                int32_t l_594 = 1L;
                uint8_t l_602 = 1UL;
                if (p_60)
                {
                    uint16_t l_417 = 65530UL;
                    l_369 = g_325;
                    ++l_417;
                    --l_420;
                }
                else
                {
                    l_428 = ((safe_mod_func_uint16_t_u_u(0x5A31L, (safe_mul_func_int8_t_s_s(0x3AL, 1L)))) || ((g_5 | l_427) & 4294967295UL));
                    l_405 = ((-1L) != g_161);
                }
                g_52 = (4294967290UL ^ l_420);
                if (((safe_sub_func_uint32_t_u_u(((safe_mul_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((((g_296 && (6UL ^ (safe_lshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(p_60, (((((safe_add_func_int32_t_s_s((4294967289UL || ((safe_rshift_func_uint8_t_u_s((((safe_sub_func_uint32_t_u_u(((safe_sub_func_int32_t_s_s(0xB74264F0L, (safe_lshift_func_uint8_t_u_s(l_404, 5)))) == ((safe_mod_func_uint8_t_u_u((p_60 || ((safe_sub_func_uint8_t_u_u((((safe_mod_func_int8_t_s_s((255UL & (l_427 != l_405)), l_403)) != 1L) & p_60), 0xD2L)) | g_219)), g_219)) || 0x46L)), p_59)) & p_60) != l_383), l_455)) != 2UL)), 3L)) || 0x89L) > 0UL) && p_59) & p_60))), 0)))) >= g_151) <= g_151), 11)), g_162)) | p_59), g_52)) > l_360))
                {
                    uint8_t l_488 = 0xFCL;
                    --g_457;
                    for (p_61 = 0; (p_61 <= 29); p_61++)
                    {
                        int16_t l_481 = 1L;
                        g_161 = ((((safe_sub_func_uint8_t_u_u(0x13L, (p_58 > (safe_sub_func_int32_t_s_s(l_466, g_325))))) | (safe_lshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(6UL, 12)), (safe_unary_minus_func_int32_t_s((((safe_sub_func_int16_t_s_s((safe_add_func_int32_t_s_s(g_478, 0L)), (safe_lshift_func_uint16_t_u_s(l_481, ((safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(l_369, (-2L))), p_60)), g_270)) >= p_60))))) & p_61) || 0x51EBL))))), g_300))) | p_61) < l_488);
                        l_369 = l_456;
                        g_368 ^= (safe_unary_minus_func_uint32_t_u(((l_360 || 0xBF441BDDL) && (safe_mul_func_uint8_t_u_u(((((-9L) == p_61) || ((safe_sub_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_u(g_151, (~(1L > ((+((((g_325 & g_300) == (~(l_456 && l_455))) >= p_59) && p_58)) || g_297))))) || p_60), p_59)) | l_481)) != g_161), g_162)))));
                        if (p_59)
                            continue;
                    }
                }
                else
                {
                    int8_t l_518 = 0xA0L;
                    int32_t l_555 = (-2L);
                    int32_t l_556 = 1L;
                    int32_t l_569 = 0x6597471BL;
                    p_58 = 0xD40B09B5L;
                    p_58 = (safe_sub_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(((l_503 && (safe_add_func_uint8_t_u_u(((0x5EL ^ l_405) || (safe_lshift_func_int8_t_s_u((g_270 | (((safe_lshift_func_int16_t_s_s(((safe_mod_func_int16_t_s_s(0x5302L, (safe_add_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s(((safe_mul_func_uint8_t_u_u(l_518, (safe_rshift_func_int16_t_s_u((((safe_mod_func_int16_t_s_s(l_403, (0x11L | ((l_456 && p_60) | 0UL)))) < g_478) <= 8UL), 11)))) >= 0xE5L), 2)), p_59)))) <= p_60), 0)) & l_382) > g_239)), 5))), p_60))) < 0UL), 4294967295UL)), p_58));
                    l_405 = (safe_add_func_int16_t_s_s((((g_219 >= (-5L)) >= (((safe_sub_func_uint8_t_u_u((+((safe_mod_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(0x4202L, 2)), (((safe_lshift_func_uint8_t_u_s((safe_unary_minus_func_int16_t_s((((safe_rshift_func_int16_t_s_s((((safe_add_func_uint16_t_u_u(((g_161 & (safe_rshift_func_uint8_t_u_u(0x85L, 6))) > (safe_mul_func_uint8_t_u_u((0x6CBAL & ((+0x9BL) ^ (safe_lshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((((((safe_mul_func_uint16_t_u_u((((l_402 || (safe_mul_func_uint8_t_u_u(((l_369 | g_296) ^ 0x6EL), (-1L)))) == p_58) == p_61), 0xBC73L)) > l_503) & p_60) ^ p_60) != p_61), g_368)), l_403)))), 1L))), g_300)) != g_2) != p_60), 11)) == p_59) & l_518))), l_405)) <= g_162) | p_59))) ^ p_61)), l_503)) & 1UL) || g_457)) == l_383), g_325));
                    for (l_428 = 29; (l_428 > (-2)); l_428 = safe_sub_func_uint8_t_u_u(l_428, 3))
                    {
                        int16_t l_554 = 1L;
                        int32_t l_557 = 1L;
                        int32_t l_559 = 0xB6C9FC6AL;
                        --g_560;
                        l_569 = (safe_mul_func_int16_t_s_s((l_427 >= (+(safe_mod_func_int32_t_s_s(l_420, (safe_unary_minus_func_int32_t_s(8L)))))), l_518));
                        l_572 ^= (safe_add_func_int32_t_s_s((0xCF543E30L | 1L), p_60));
                    }
                }
                for (p_60 = 0; (p_60 < 18); ++p_60)
                {
                    const uint32_t l_593 = 7UL;
                    int32_t l_605 = (-1L);
                    int32_t l_606 = (-6L);
                    int32_t l_607 = (-6L);
                    int32_t l_609 = 0xC7886EC4L;
                    int32_t l_611 = 0x9FD8B6E1L;
                    g_368 &= 9L;
                    l_382 = (safe_mul_func_uint8_t_u_u(l_402, (g_478 | ((safe_rshift_func_uint16_t_u_u(2UL, ((((-8L) || 0xDA99L) | (safe_sub_func_int16_t_s_s((((safe_mod_func_uint32_t_u_u(((((g_219 >= l_420) ^ ((safe_lshift_func_uint8_t_u_s(g_160, 5)) < (safe_sub_func_int8_t_s_s((safe_lshift_func_int16_t_s_u((safe_add_func_int32_t_s_s((p_59 == g_368), 0UL)), 11)), p_58)))) == 0x43A8L) > 0xEFECL), l_591)) ^ l_592) || (-6L)), l_593))) >= p_59))) & (-5L)))));
                    if (p_60)
                    {
                        l_594 &= (1UL > 0x0A34L);
                        if (g_54)
                            continue;
                        l_405 ^= (safe_add_func_int16_t_s_s((safe_mod_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((0x5A76L >= (!0x07L)), g_560)), (g_297 & (0xD0B1L != (0xBC97L < 0x9BFBL))))), p_58));
                    }
                    else
                    {
                        l_602++;
                        l_382 ^= g_300;
                        ++g_612;
                        l_405 = 0xA8E6CCFFL;
                    }
                    g_297 = (g_52 == (safe_sub_func_int32_t_s_s((safe_mul_func_int16_t_s_s((g_296 == ((g_619 & (safe_mod_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(((+(safe_rshift_func_uint16_t_u_s((+(safe_mul_func_uint8_t_u_u((safe_unary_minus_func_uint16_t_u(l_558)), ((((g_300 != 1UL) | ((((l_404 < (safe_add_func_int16_t_s_s((((safe_mul_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((p_58 && (safe_add_func_int16_t_s_s((-1L), 0x6385L))), l_558)), g_161)) < 0x9D329C4FL) < g_457), p_58))) && p_61) && p_60) != 0xD8L)) & l_605) == 0xEAE1L)))), 1))) != g_560), l_427)), p_59))) >= p_60)), 65531UL)), 0xCF34C46EL)));
                }
            }
            else
            {
                l_639 = g_160;
            }
            return g_5;
        }
        else
        {
            p_58 = (p_58 | 0x9CL);
        }
        l_456 |= ((~(safe_sub_func_int32_t_s_s((safe_mul_func_int16_t_s_s(g_239, (safe_sub_func_uint16_t_u_u(((((safe_mul_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((((safe_sub_func_int16_t_s_s((safe_add_func_int8_t_s_s(l_592, (safe_mul_func_uint16_t_u_u((g_160 >= g_610), (safe_sub_func_int32_t_s_s(0xA7249E89L, (0xE2L == (l_503 ^ l_592)))))))), 5UL)) < g_368) == p_60), 4UL)), p_61)) >= p_61) > p_58) || l_403), g_219)))), p_60))) | g_219);
    }
    else
    {
        uint16_t l_662 = 5UL;
        int32_t l_686 = 0L;
        p_58 = p_61;
        if ((safe_rshift_func_uint8_t_u_s((((g_296 < (l_608 <= (safe_unary_minus_func_int32_t_s((((l_662 ^ (1UL > ((safe_add_func_int32_t_s_s(p_61, p_58)) | g_219))) || ((safe_mul_func_int8_t_s_s(g_296, (safe_mul_func_int8_t_s_s(((safe_rshift_func_int8_t_s_u(p_59, 3)) != p_59), p_61)))) == p_59)) == l_662))))) >= p_58) > g_239), l_360)))
        {
            int32_t l_685 = (-2L);
            int32_t l_708 = (-9L);
            l_686 = ((4294967288UL > 7L) <= (((safe_add_func_uint16_t_u_u((l_369 == ((-6L) == l_662)), ((((g_270 && (safe_mul_func_uint16_t_u_u((l_592 > (g_239 & (safe_rshift_func_int8_t_s_u((((((safe_lshift_func_int16_t_s_u((safe_add_func_int32_t_s_s((safe_mod_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((l_662 ^ l_383), l_685)), p_59)), p_58)), 0)) <= 0UL) != l_685) && p_59) != p_58), 2)))), g_619))) > l_592) || l_662) < p_58))) & g_619) && g_161));
            g_297 = (~(safe_mul_func_uint8_t_u_u(0x4CL, ((0x42A46128L > (-1L)) ^ (((((p_61 > (g_160 < ((safe_mul_func_uint16_t_u_u(((safe_sub_func_uint16_t_u_u((0x85L == ((safe_add_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(p_58, (((safe_mod_func_int32_t_s_s(((l_608 || ((safe_lshift_func_int16_t_s_s(((safe_mod_func_int8_t_s_s((((safe_mod_func_int8_t_s_s((l_686 & 0xE5L), 0x0CL)) ^ 0xB372L) || 2L), 249UL)) && p_59), l_686)) | l_383)) > 0xCCL), l_708)) == g_270) & 0xA1L))), g_619)) > 0xAA10L)), 4L)) > l_592), 0x3838L)) & g_270))) & g_619) > 0x0DEDAFEBL) <= 0x7032L) < 0x04L)))));
        }
        else
        {
            uint32_t l_709 = 0xABE2860FL;
            l_608 = ((l_709 > (safe_mul_func_uint16_t_u_u((g_612 ^ (((((0L && ((l_686 & (((0x9E35L == l_686) >= g_52) || ((safe_mod_func_int8_t_s_s((2L <= ((((g_5 | g_478) <= g_300) & 0x01L) || g_612)), g_161)) <= l_686))) && l_382)) ^ p_60) >= l_686) <= p_60) > p_60)), (-1L)))) <= g_619);
        }
    }
    return l_608;
}
static int32_t func_62(uint32_t p_63, uint32_t p_64)
{
    uint8_t l_79 = 1UL;
    int32_t l_326 = (-6L);
    for (p_64 = 0; (p_64 >= 33); p_64++)
    {
        int32_t l_70 = 0xE98D7E94L;
        l_326 = (safe_unary_minus_func_uint32_t_u(((safe_mul_func_int8_t_s_s(g_2, l_70)) || (safe_mod_func_uint32_t_u_u(((safe_mul_func_int16_t_s_s((func_75(l_79, (safe_lshift_func_int16_t_s_u(((safe_mod_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(((safe_sub_func_uint16_t_u_u(g_54, 0x4A0FL)) & (+0x2303L)), (safe_mul_func_uint8_t_u_u((((l_70 && ((safe_add_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s((g_52 > (p_63 > 1UL)), 4)), 4)) || 248UL), g_2)) & 0x26B1L)) | p_63) > p_64), p_63)))), g_2)) == l_79), p_64)), g_5) ^ g_325), p_63)) | g_2), 0x81BC87A7L)))));
    }
    return g_160;
}
inline static uint16_t func_75(uint32_t p_76, const uint32_t p_77, uint16_t p_78)
{
    const uint32_t l_111 = 0xE6D59493L;
    const uint16_t l_114 = 0x947EL;
    int32_t l_115 = 0x0B5DC3D3L;
    int32_t l_136 = 0L;
    uint32_t l_218 = 4294967294UL;
    int16_t l_226 = 0xBCAEL;
    if (((((p_77 ^ (safe_mul_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(g_54, (safe_mod_func_int8_t_s_s(((safe_sub_func_uint8_t_u_u((((g_2 == (((safe_mod_func_int32_t_s_s((safe_mod_func_uint16_t_u_u((((((p_77 && ((safe_mul_func_uint8_t_u_u(l_111, (((-1L) ^ ((safe_mul_func_int8_t_s_s(((g_5 != 1L) >= (g_52 < g_54)), 253UL)) || g_54)) & l_111))) <= p_77)) != 0UL) && 4294967288UL) && 2L) & p_78), p_76)), g_52)) <= l_111) <= g_2)) <= l_111) <= g_5), g_5)) | (-1L)), g_52)))), l_114))) > p_77) >= l_115) <= p_76))
    {
        const int16_t l_135 = 1L;
        g_52 = (safe_add_func_int32_t_s_s(p_77, (((safe_sub_func_uint8_t_u_u(0x60L, (((((safe_lshift_func_uint8_t_u_u(0xCAL, 5)) > (safe_lshift_func_uint16_t_u_u(g_5, (safe_lshift_func_int16_t_s_u(((g_52 >= (((~((safe_mod_func_int32_t_s_s((safe_add_func_int16_t_s_s((((safe_rshift_func_uint8_t_u_s(((safe_sub_func_uint16_t_u_u((p_78 && l_115), (-5L))) || 1L), 1)) | 0x4FL) ^ p_76), 0x3E74L)), 0xA6CE2C69L)) == p_77)) > l_135) ^ p_76)) || 0x83L), 14))))) < 0x12L) >= p_76) <= l_135))) == p_76) <= 0x09L)));
        l_136 ^= (l_115 == p_77);
        for (g_52 = 10; (g_52 >= (-22)); g_52 = safe_sub_func_int16_t_s_s(g_52, 9))
        {
            uint8_t l_148 = 0UL;
            int32_t l_156 = (-1L);
            if (g_54)
                break;
            g_151 |= (((0x54EFE8F3L < (safe_rshift_func_uint8_t_u_s((g_5 < g_2), 0))) <= (l_114 < (safe_sub_func_int8_t_s_s((+(((((safe_lshift_func_uint8_t_u_u((((safe_rshift_func_int16_t_s_s(((((p_77 >= l_148) > (((0xFC4CL <= (g_2 > (safe_mod_func_int16_t_s_s((p_77 <= l_148), l_111)))) && 0L) | l_114)) && 4294967288UL) != g_5), g_2)) == 0xF9EEL) | g_54), l_148)) | l_111) && p_76) != 0L) != 0xB4620FE3L)), l_135)))) > l_135);
            if (p_77)
                continue;
            for (g_54 = 0; (g_54 > 47); g_54 = safe_add_func_uint16_t_u_u(g_54, 4))
            {
                uint32_t l_154 = 18446744073709551606UL;
                int32_t l_157 = 9L;
                int32_t l_158 = 0xA8DCBC2BL;
                int32_t l_159 = 0x7A2C1477L;
                l_154 = (-8L);
                l_156 = (+249UL);
                ++g_162;
                if (g_52)
                    continue;
            }
        }
    }
    else
    {
        uint16_t l_179 = 0x9BDDL;
        int32_t l_293 = 0x2A7757BEL;
        int32_t l_295 = 0x458D0565L;
        int32_t l_298 = 0x9C927E87L;
        int32_t l_299 = 0x292E266AL;
        for (g_161 = (-7); (g_161 > (-16)); g_161 = safe_sub_func_uint32_t_u_u(g_161, 3))
        {
            int16_t l_175 = 0xC045L;
            int32_t l_180 = 0L;
            int8_t l_224 = (-4L);
            int32_t l_294 = 0xD1CEF0ACL;
            for (g_162 = 0; (g_162 < 15); ++g_162)
            {
                int32_t l_178 = 0xE8EB2946L;
                l_180 = ((safe_sub_func_int16_t_s_s((p_76 || p_78), ((safe_sub_func_uint32_t_u_u(0x17541656L, (((safe_sub_func_int16_t_s_s((l_175 >= l_175), l_175)) || (safe_sub_func_uint32_t_u_u((0UL <= g_160), ((-5L) || l_178)))) < l_114))) & 0xEE9290BCL))) == l_179);
            }
            for (g_5 = 0; (g_5 > 23); ++g_5)
            {
                int32_t l_238 = 0x6A80461CL;
                int32_t l_256 = 0xD11E1809L;
                if (p_78)
                    break;
                l_180 = ((safe_mod_func_int32_t_s_s((((safe_add_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_u(l_115, (safe_lshift_func_int8_t_s_u((((safe_mod_func_int16_t_s_s(l_175, (~(((+(safe_rshift_func_int8_t_s_s(0x2BL, (((((safe_sub_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((((safe_add_func_uint8_t_u_u(l_179, (!4UL))) | ((safe_add_func_int8_t_s_s(p_77, (safe_rshift_func_int16_t_s_s(((safe_mod_func_int16_t_s_s(((safe_sub_func_uint32_t_u_u(l_115, g_162)) ^ ((safe_lshift_func_uint8_t_u_u(l_218, g_162)) == g_52)), p_78)) && g_2), g_2)))) > 0x1A0EL)) & p_76), 0x0F6EL)), (-2L))) != 0L) & p_77) || g_161) ^ p_77)))) != g_162) > p_78)))) > 65529UL) && l_114), 7)))) ^ g_151), p_77)), g_161)) | p_76), g_52)) > (-5L)) != p_76), g_219)) > g_151);
                for (l_115 = 13; (l_115 != 16); ++l_115)
                {
                    uint32_t l_242 = 1UL;
                    int32_t l_243 = 0xC08D31AFL;
                    g_239 ^= (safe_sub_func_uint8_t_u_u(g_52, (l_224 || (((safe_unary_minus_func_int32_t_s(1L)) | (((l_226 ^ (((safe_sub_func_int8_t_s_s((((((((safe_unary_minus_func_uint16_t_u((p_77 ^ (safe_mul_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((((safe_add_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((((l_224 <= p_76) ^ ((p_76 ^ (g_160 >= (-1L))) >= p_78)) && l_179), 0x3EL)), p_76)) < g_160) ^ p_77), l_238)), g_219))))) != 0x3BL) != p_76) ^ l_226) & g_219) || 4294967287UL) & l_238), 2L)) & g_151) || g_162)) > g_5) != l_114)) ^ g_5))));
                    l_180 = (safe_lshift_func_uint8_t_u_u(l_242, 7));
                    l_243 = 0x5F59071EL;
                    if ((safe_mod_func_uint32_t_u_u((((((safe_sub_func_uint32_t_u_u(g_5, l_175)) || (l_238 ^ (((safe_lshift_func_int16_t_s_s(l_179, 7)) < l_238) && p_76))) == p_78) != ((safe_add_func_int16_t_s_s(((((safe_add_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(p_76, (0L || g_2))), l_218)) | g_52) || (-10L)) || g_239), p_76)) || l_136)) | 65529UL), g_2)))
                    {
                        l_256 = p_77;
                        g_270 ^= ((safe_mul_func_uint8_t_u_u((~p_76), (((g_2 || g_219) > ((((safe_sub_func_int8_t_s_s((safe_lshift_func_int16_t_s_u((g_219 < (safe_sub_func_int16_t_s_s(l_238, p_76))), ((safe_lshift_func_uint8_t_u_u(((safe_sub_func_uint16_t_u_u(0x4C97L, 0L)) < (((g_52 && g_151) > 0x2CL) && (-4L))), g_162)) && 2UL))), l_179)) < 3UL) || 9L) || p_78)) ^ g_151))) | 3UL);
                        return p_78;
                    }
                    else
                    {
                        l_256 &= g_52;
                        l_136 = l_175;
                    }
                }
                l_115 |= (safe_add_func_int16_t_s_s(((((+((safe_rshift_func_int8_t_s_u((p_78 ^ g_219), 1)) ^ (safe_rshift_func_uint8_t_u_u(0x46L, 2)))) != ((safe_mod_func_int8_t_s_s(0xF0L, (safe_lshift_func_uint16_t_u_u(65534UL, (((((~((safe_mod_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u((safe_add_func_uint32_t_u_u(g_160, ((safe_sub_func_int8_t_s_s((g_5 > (l_179 ^ l_111)), (-1L))) & p_77))), g_162)), l_175)) == 0xA6C11A08L)) && g_219) > p_78) | g_162) == p_78))))) < 0x05L)) ^ p_78) && p_78), 0x0BC6L));
            }
            for (g_54 = 0; (g_54 == 20); g_54 = safe_add_func_int8_t_s_s(g_54, 6))
            {
                return p_77;
            }
            g_300--;
        }
        for (l_136 = 0; (l_136 < (-22)); --l_136)
        {
            return g_160;
        }
    }
    l_115 = (safe_add_func_uint8_t_u_u(((((safe_sub_func_uint32_t_u_u((((safe_mod_func_int32_t_s_s((((safe_rshift_func_int8_t_s_u((g_54 | ((safe_lshift_func_uint16_t_u_u(p_78, 3)) | (((safe_mod_func_uint16_t_u_u((p_77 | (l_226 == p_78)), p_76)) <= p_76) == ((safe_add_func_uint8_t_u_u((g_160 < (safe_lshift_func_int8_t_s_u(((((safe_rshift_func_uint8_t_u_u((g_296 | 0x568F5A85L), g_161)) <= p_76) >= g_239) == g_296), g_2))), p_78)) && 0xE52EL)))), 0)) >= p_77) <= (-1L)), (-9L))) & g_325) != 0xF45CL), p_76)) && 0x5EL) > p_77) == l_115), (-5L)));
    return g_270;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_2;
    csmith_sink_ = g_5;
    csmith_sink_ = g_52;
    csmith_sink_ = g_54;
    csmith_sink_ = g_151;
    csmith_sink_ = g_160;
    csmith_sink_ = g_161;
    csmith_sink_ = g_162;
    csmith_sink_ = g_219;
    csmith_sink_ = g_239;
    csmith_sink_ = g_270;
    csmith_sink_ = g_296;
    csmith_sink_ = g_297;
    csmith_sink_ = g_300;
    csmith_sink_ = g_325;
    csmith_sink_ = g_368;
    csmith_sink_ = g_457;
    csmith_sink_ = g_478;
    csmith_sink_ = g_560;
    csmith_sink_ = g_610;
    csmith_sink_ = g_612;
    csmith_sink_ = g_619;
    csmith_sink_ = g_874;
    csmith_sink_ = g_997;
    csmith_sink_ = g_1004;
    csmith_sink_ = g_1005;
    csmith_sink_ = g_1069;
    csmith_sink_ = g_1092;
    csmith_sink_ = g_1098;
    csmith_sink_ = g_1109;
    platform_main_end(0,0);
    return 0;
}
