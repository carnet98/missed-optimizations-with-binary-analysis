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
static int32_t g_3 = 0xADA439BE;
static int32_t g_43 = 0x11FFBE62;
static int32_t *g_53 = &g_43;
static int32_t **g_52 = &g_53;
static int32_t g_113[6][8] = {{0x714D024A,0xF9043A1F,0xF9043A1F,0x714D024A,0x4F691D68,1,0x4F691D68,0x714D024A},{0xF9043A1F,0x4F691D68,0xF9043A1F,0x4620FE39,0xA99605DB,0xA99605DB,0x4620FE39,0xF9043A1F},{0x4F691D68,0x4F691D68,0xA99605DB,1,1,1,0xA99605DB,0x4F691D68},{0x4F691D68,0xF9043A1F,0x4620FE39,0xA99605DB,0xA99605DB,0x4620FE39,0xF9043A1F,0x4F691D68},{0xF9043A1F,0x714D024A,0x4F691D68,1,0x4F691D68,0x714D024A,0xF9043A1F,0xF9043A1F},{0x714D024A,1,0x4620FE39,0x4620FE39,1,0x714D024A,0x4F691D68,0xF9043A1F}};
static int32_t ***g_120 = &g_52;
static int32_t ****g_119 = &g_120;
static int32_t *g_140 = &g_3;
static int32_t **g_372 = (void*)0;
static uint16_t g_428 = 0xC565;
static uint16_t g_539[4][3] = {{1U,1U,1U},{0x29E1,0x29E1,0x29E1},{1U,1U,1U},{0x29E1,0x29E1,0x29E1}};
static int32_t g_614[7][7][5] = {{{(-1),1,0,0xE9A13F37,5},{(-1),3,0x23C2ED7B,0xCAFC1140,1},{0x6888AB08,(-1),0x3DC789E9,(-1),5},{1,0x64308193,(-1),(-1),0x64308193},{(-1),0x464F2319,(-1),4,(-1)},{4,5,0x3DC789E9,0xA75E02A1,(-1)},{0x2BEBB7DC,1,0x23C2ED7B,(-1),0x64308193}},{{4,1,0,0xCAFC1140,3},{(-1),5,0x1DD413C5,0xCAFC1140,0x16DFC5B8},{1,(-1),0,(-1),5},{0x6888AB08,4,(-1),0xA75E02A1,4},{(-1),(-1),0x66D1E0C2,4,(-1)},{(-1),5,0,(-1),(-1)},{0x7C1D2E2F,1,0x23C2ED7B,(-1),4}},{{4,1,(-10),0xCAFC1140,5},{1,5,0x23C2ED7B,0xE9A13F37,0x16DFC5B8},{0x6888AB08,0x464F2319,0,(-1),3},{0x6888AB08,0x64308193,0x66D1E0C2,0xA75E02A1,0x64308193},{1,(-1),(-1),0x23C2ED7B,(-1)},{4,3,0,0xA75E02A1,(-1)},{0x7C1D2E2F,1,0x1DD413C5,(-1),0x64308193}},{{(-1),1,0,0xE9A13F37,5},{(-1),3,0x23C2ED7B,0xCAFC1140,1},{0x6888AB08,(-1),0x3DC789E9,(-1),5},{1,0x64308193,(-1),(-1),0x64308193},{(-1),0x464F2319,(-1),4,(-1)},{4,5,0x3DC789E9,0xA75E02A1,(-1)},{0x2BEBB7DC,1,0x23C2ED7B,(-1),0x64308193}},{{4,1,0,0xCAFC1140,3},{(-1),5,0x1DD413C5,0xCAFC1140,0x16DFC5B8},{1,(-1),0,(-1),5},{0x6888AB08,4,(-1),0xA75E02A1,4},{(-1),(-1),0x66D1E0C2,4,(-1)},{(-1),5,0,(-1),(-1)},{0x7C1D2E2F,1,0x23C2ED7B,(-1),4}},{{4,1,0x16DFC5B8,3,0xA837DD74},{0x5C47C55F,0xA837DD74,0xF22FEB58,0,(-1)},{0xB92581B3,0x782385E0,4,0x464F2319,(-2)},{0xB92581B3,1,(-1),(-1),1},{0x5C47C55F,(-1),0x97FD7FC0,0xF22FEB58,0x4D6B52E8},{0xBEDF8FAB,(-2),4,(-1),0},{0x20361A2B,0x2E29693F,5,0x464F2319,1}},{{0x92F88AC6,0x2E29693F,0x4B1DBB0C,0,0xA837DD74},{(-1),(-2),0xF22FEB58,3,3},{0xB92581B3,(-1),0x64308193,0x464F2319,0xA837DD74},{0x2EDE97DF,1,0x97FD7FC0,0x97FD7FC0,1},{(-1),0x782385E0,0x97FD7FC0,3,0},{0xBEDF8FAB,0xA837DD74,0x64308193,(-1),0x4D6B52E8},{0x1DF8B250,0x2E29693F,0xF22FEB58,(-1),1}}};
static uint32_t func_1(void);
static uint32_t func_4(uint32_t p_5);
static int32_t func_6(int16_t p_7);
inline static int16_t func_8(int32_t p_9, int32_t p_10, int32_t p_11, uint8_t p_12);
inline static int8_t func_18(int32_t p_19);
static int32_t * func_20(int32_t * p_21, int16_t p_22);
inline static int32_t * func_23(uint16_t p_24, int32_t p_25);
inline static int32_t func_27(uint32_t p_28, int32_t p_29, uint32_t p_30);
inline static int32_t * func_37(uint32_t p_38);
static int32_t ** func_44(int32_t p_45, int32_t p_46, uint32_t p_47, uint16_t p_48, uint32_t p_49);
static uint32_t func_1(void)
{
    int16_t l_2[7][2][2];
    uint16_t l_495 = 0xD347;
    int32_t *****l_507 = &g_119;
    uint32_t l_586 = 0x6A58FD17;
    int32_t l_587 = 0x3536F28B;
    int8_t l_615 = 0x8A;
    uint16_t l_621 = 0x1640;
    uint32_t l_627 = 4294967295U;
    int16_t l_629 = 0x6ABE;
    int32_t l_632 = 0x8E99B17F;
    int32_t *****l_647[7][9] = {{(void*)0,(void*)0,(void*)0,&g_119,(void*)0,(void*)0,(void*)0,&g_119,(void*)0},{&g_119,(void*)0,&g_119,(void*)0,&g_119,&g_119,&g_119,&g_119,(void*)0},{(void*)0,(void*)0,&g_119,&g_119,&g_119,&g_119,&g_119,&g_119,(void*)0},{&g_119,&g_119,&g_119,&g_119,&g_119,&g_119,(void*)0,(void*)0,&g_119},{(void*)0,&g_119,&g_119,&g_119,&g_119,(void*)0,&g_119,(void*)0,&g_119},{(void*)0,&g_119,&g_119,(void*)0,(void*)0,&g_119,&g_119,(void*)0,&g_119},{&g_119,(void*)0,&g_119,&g_119,&g_119,&g_119,&g_119,(void*)0,(void*)0}};
    int16_t l_671 = (-5);
    uint32_t l_672 = 4294967288U;
    int16_t l_699 = 1;
    int i, j, k;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
                l_2[i][j][k] = 6;
        }
    }
    for (g_3 = 1; (g_3 >= 0); g_3 -= 1)
    {
        uint16_t l_506 = 0x7ABE;
        uint8_t l_541[10][1];
        int16_t l_554 = 1;
        uint32_t l_557 = 0x2EA4169E;
        int32_t l_588 = 0xE75A78FB;
        int32_t **l_596 = &g_140;
        int32_t ****l_626 = &g_120;
        int16_t l_653[9] = {0xB91C,0xB91C,0xB91C,0xB91C,0xB91C,0xB91C,0xB91C,0xB91C,0xB91C};
        int32_t *l_673[4];
        int32_t l_691 = 0x8B657539;
        int i, j;
        for (i = 0; i < 10; i++)
        {
            for (j = 0; j < 1; j++)
                l_541[i][j] = 1U;
        }
        for (i = 0; i < 4; i++)
            l_673[i] = &g_43;
    }
    return l_699;
}
static uint32_t func_4(uint32_t p_5)
{
    int32_t l_13[3];
    int32_t **l_183 = &g_53;
    uint16_t l_187[10][3][6] = {{{0xDD82,65526U,65531U,0U,65531U,65526U},{0xDD82,0U,0xA455,0x11DD,65535U,0U},{1U,0U,0xDD82,0xA198,65530U,65526U}},{{0xA455,0U,0xB80F,0U,65535U,0xA198},{65530U,0U,4U,0x3BC7,65531U,0x3BC7},{4U,65526U,4U,0U,0xA455,0xA198}},{{0x5CF6,0U,0xB80F,0xBEE0,0xDD82,65526U},{1U,65526U,0xDD82,0xBEE0,0xB80F,0U},{0x5CF6,0xA198,0xB80F,0U,65530U,0U}},{{65530U,65526U,0x5CF6,65526U,65530U,0U},{1U,65526U,65531U,0U,65530U,0x3BC7},{0xB80F,0xBEE0,0xDD82,65526U,1U,0x3BC7}},{{0xA088,0U,65531U,0xA198,0xB80F,0U},{1U,0U,0x5CF6,0x3BC7,0x5CF6,0U},{1U,0U,0xB80F,0xA198,65531U,0U}},{{0xA088,0x3BC7,1U,65526U,0xDD82,0xBEE0},{0xB80F,0x3BC7,65530U,0U,65531U,65526U},{1U,0U,65530U,65526U,0x5CF6,65526U}},{{65530U,0U,65530U,0U,0xB80F,65526U},{4U,0U,65530U,0U,1U,0xBEE0},{0xA455,0xBEE0,1U,0U,65530U,0U}},{{4U,65526U,0xB80F,0U,65530U,0U},{65530U,65526U,0x5CF6,65526U,65530U,0U},{1U,65526U,65531U,0U,65530U,0x3BC7}},{{0xB80F,0xBEE0,0xDD82,65526U,1U,0x3BC7},{0xA088,0U,65531U,0xA198,0xB80F,0U},{1U,0U,0x5CF6,0x3BC7,0x5CF6,0U}},{{1U,0U,0xB80F,0xA198,65531U,0U},{0xA088,0x3BC7,1U,65526U,0xDD82,0xBEE0},{0xB80F,0x3BC7,65530U,0U,65531U,65526U}}};
    int8_t l_195 = (-2);
    int32_t l_198 = (-8);
    int8_t l_282 = 0;
    int32_t ***l_286 = &l_183;
    uint32_t l_314 = 0xBD41997E;
    uint16_t l_324 = 0x4C93;
    uint16_t l_329[9];
    uint32_t l_348 = 0x6CA5DC35;
    int16_t l_485 = 0xB7E2;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_13[i] = 0x9E2A8D3A;
    for (i = 0; i < 9; i++)
        l_329[i] = 65530U;
    if (p_5)
    {
        int32_t l_14 = 0xB58E17C1;
        int32_t l_182 = 0x9D2C2FFD;
        uint32_t l_196 = 1U;
        uint8_t l_197 = 252U;
        int32_t ***l_287 = &l_183;
        int8_t l_347 = 1;
        int32_t l_355 = 0x0E271EE9;
        int32_t *l_370 = &l_355;
        if (func_6(func_8(l_13[1], (l_14 & ((safe_unary_minus_func_int8_t_s(2)) != (((p_5 == (((safe_sub_func_int8_t_s_s(func_18(g_3), g_113[4][6])) || g_43) != (safe_lshift_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(((-1) > 1), l_14)), p_5)))) || g_113[2][2]) == 8))), l_13[1], p_5)))
        {
            int32_t **l_184 = (void*)0;
            int32_t *l_205 = &g_43;
            (***g_119) = (**g_120);
            l_182 = (7U >= (1U & l_13[1]));
            l_198 = ((((((l_183 == l_184) & ((g_43 <= ((safe_sub_func_uint32_t_u_u(l_187[1][2][5], (l_182 ^ 65535U))) <= (safe_lshift_func_int8_t_s_s((g_3 & (safe_add_func_uint8_t_u_u(((((safe_lshift_func_int16_t_s_s((!g_3), (8U ^ l_195))) <= p_5) && p_5) == p_5), l_196))), l_197)))) && l_187[1][2][5])) ^ p_5) < g_43) > p_5) <= p_5);
            (*l_183) = func_23((safe_rshift_func_int16_t_s_s(g_3, ((+(safe_rshift_func_uint8_t_u_s(((safe_unary_minus_func_uint32_t_u(((p_5 || 1) == (((**g_120) == l_205) || (&l_205 != (**g_119)))))) != 0x01F2DFD3), g_3))) == g_43))), g_113[1][0]);
        }
        else
        {
            int16_t l_215 = 0xA7C6;
            int32_t *l_220[8][7][1] = {{{&g_43},{&g_43},{&g_43},{&l_198},{&g_43},{&l_198},{&g_43}},{{&g_43},{&g_43},{&g_43},{&g_43},{&l_198},{&g_43},{&l_198}},{{&g_43},{&g_43},{&g_43},{&g_43},{&g_43},{&l_198},{&g_43}},{{&l_198},{&g_43},{&g_43},{&g_43},{&g_43},{&g_43},{&l_198}},{{&g_43},{&l_198},{&g_43},{&g_43},{&g_43},{&g_43},{&g_43}},{{&l_198},{&g_43},{&l_198},{&g_43},{&g_43},{&g_43},{&g_43}},{{&g_43},{&l_198},{&g_43},{&l_198},{&g_43},{&g_43},{&g_43}},{{&g_43},{&g_43},{&l_198},{&g_43},{&l_198},{&g_43},{&g_43}}};
            int32_t *l_251 = &g_43;
            uint32_t l_252 = 6U;
            int32_t ***l_290 = &l_183;
            int i, j, k;
            for (l_195 = (-7); (l_195 == (-19)); l_195--)
            {
                int32_t ****l_212 = (void*)0;
                uint32_t l_236 = 0xEEF04CFC;
                int32_t l_246 = 0x01F38D18;
                (*l_183) = func_37(((safe_rshift_func_uint8_t_u_u((((l_212 == &g_120) <= (((safe_mod_func_uint16_t_u_u((l_215 > (l_197 >= (((safe_lshift_func_uint16_t_u_s((((0x0621BF3E == g_113[3][5]) && (safe_rshift_func_int8_t_s_s(p_5, p_5))) == ((void*)0 != l_220[6][2][0])), 1)) > p_5) >= p_5))), 0x4A13)) > 0xB985607D) == g_3)) | p_5), l_14)) != p_5));
                ((void) sizeof ((g_53 == &g_3) ? 1 : 0), __extension__ ({ if (g_53 == &g_3) ; else __assert_fail ("g_53 == &g_3", "/tmp/tmp7lgtz91b.c", 162, __extension__ __PRETTY_FUNCTION__); }));
                if ((((safe_mod_func_int16_t_s_s(p_5, (2 || l_196))) && p_5) <= (*g_140)))
                {
                    int32_t l_225[2];
                    int32_t ****l_234 = &g_120;
                    int32_t ***l_235[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    int i;
                    for (i = 0; i < 2; i++)
                        l_225[i] = 0x9042488E;
                    if ((safe_mod_func_int32_t_s_s(((**g_119) != (**g_119)), p_5)))
                    {
                        l_225[0] = 0x00657D72;
                        l_198 = ((safe_unary_minus_func_uint8_t_u(((~0x575A) || (((*g_119) == (*g_119)) > g_113[4][3])))) == ((8 && (safe_rshift_func_int8_t_s_s((0x2381 < ((((l_234 != (void*)0) & (((void*)0 != l_235[3]) >= 0x8A70)) && 6U) & p_5)), 5))) > 9));
                        if (l_236)
                            continue;
                    }
                    else
                    {
                        return p_5;
                    }
                    for (l_182 = 0; (l_182 <= 6); l_182 += 1)
                    {
                        int32_t l_239[6][8] = {{0xA13AD1F1,0,0,0xA13AD1F1,0x58B7C678,(-6),(-6),0x58B7C678},{0xA13AD1F1,0,0,0xA13AD1F1,0x58B7C678,(-6),(-6),0x58B7C678},{0xA13AD1F1,0,0,0xA13AD1F1,0x58B7C678,(-6),(-6),0x58B7C678},{0xA13AD1F1,0,0,0xA13AD1F1,0x58B7C678,(-6),(-6),0x58B7C678},{0xA13AD1F1,0,0,0xA13AD1F1,0x58B7C678,(-6),(-6),0x58B7C678},{0xA13AD1F1,0,0,0xA13AD1F1,0x58B7C678,(-6),(-6),0x58B7C678}};
                        int32_t **l_241 = &l_220[6][2][0];
                        int32_t l_245 = 1;
                        int i, j;
                        l_245 = (safe_lshift_func_int16_t_s_u((((l_239[5][4] || ((-10) && (safe_unary_minus_func_int16_t_s(((*g_120) != l_241))))) > p_5) & ((safe_lshift_func_uint16_t_u_u((((~p_5) >= ((p_5 && p_5) && p_5)) & g_43), g_3)) <= g_3)), p_5));
                        l_246 = (*g_140);
                    }
                    (*l_251) = ((p_5 >= (g_43 > ((l_183 == (void*)0) < ((p_5 != (safe_lshift_func_uint16_t_u_u(p_5, g_43))) && (((((safe_lshift_func_int8_t_s_s((l_220[2][4][0] != l_251), 0)) ^ p_5) ^ 0x9DA9D151) && l_252) < p_5))))) < 1);
                }
                else
                {
                    int32_t **l_259 = &l_251;
                    l_182 = l_196;
                    l_182 = (***g_120);
                    if ((safe_rshift_func_uint8_t_u_u((p_5 | (l_183 == (void*)0)), (~(0x92 <= (+(p_5 >= ((safe_add_func_int16_t_s_s((l_259 != l_183), ((safe_mod_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(((**l_183) != (&l_183 != (void*)0)), p_5)), p_5)) < g_3))) <= 0xE64B5874))))))))
                    {
                        return p_5;
                    }
                    else
                    {
                        uint16_t l_277 = 0xC28A;
                        int32_t l_283[4][6];
                        int i, j;
                        for (i = 0; i < 4; i++)
                        {
                            for (j = 0; j < 6; j++)
                                l_283[i][j] = 0x4A499266;
                        }
                        (**g_119) = (*g_120);
                        l_283[3][0] = ((l_277 | ((((((**l_259) == ((((((((void*)0 != (*g_119)) ^ ((void*)0 == l_183)) <= (safe_mod_func_uint32_t_u_u((safe_add_func_uint8_t_u_u((((g_113[0][4] && ((p_5 > l_282) ^ (**g_52))) > g_3) == (*g_53)), p_5)), p_5))) || g_3) && g_3) != (**l_259)) || 0)) && g_113[3][6]) >= 0xAD78BCD1) & g_43) > p_5)) && (**l_183));
                    }
                }
            }
            if ((((safe_add_func_uint8_t_u_u(0xCE, 255U)) || (((l_286 != l_287) || (safe_rshift_func_uint8_t_u_s(1U, ((((((void*)0 != l_290) != g_113[4][6]) < ((-1) == g_3)) > p_5) >= p_5)))) && 0x84D2)) && p_5))
            {
                uint16_t l_304 = 4U;
                int32_t l_305 = (-1);
                (*l_251) = ((((+(safe_rshift_func_uint16_t_u_s(0x6E22, ((safe_rshift_func_int8_t_s_u(p_5, 3)) >= p_5)))) <= (safe_rshift_func_int8_t_s_s((0xE80F | 0x94F9), 5))) ^ ((((((((safe_rshift_func_int16_t_s_s((p_5 <= (safe_lshift_func_uint16_t_u_s(4U, ((safe_mul_func_uint32_t_u_u(g_43, ((*l_286) != (**g_119)))) != 0U)))), p_5)) != g_3) <= 1U) & p_5) ^ 0) || p_5) != p_5) < g_3)) <= g_43);
                (**l_290) = func_23(l_304, g_113[3][0]);
                l_305 = p_5;
            }
            else
            {
                for (l_182 = 0; (l_182 <= 5); l_182 += 1)
                {
                    (**l_286) = func_20((**l_287), (&l_287 != &l_287));
                    return g_3;
                }
                return p_5;
            }
            (*l_251) = (safe_rshift_func_int8_t_s_u(g_113[4][4], ((l_290 == (*g_119)) || ((safe_lshift_func_uint8_t_u_s(((**l_290) != (**g_120)), ((safe_add_func_uint32_t_u_u(g_3, ((safe_rshift_func_uint16_t_u_u(65529U, 7)) || 0U))) ^ g_113[0][3]))) > g_113[2][1]))));
        }
        ((void) sizeof ((g_53 == 0 || g_53 == &g_43 || g_53 == &g_3) ? 1 : 0), __extension__ ({ if (g_53 == 0 || g_53 == &g_43 || g_53 == &g_3) ; else __assert_fail ("g_53 == 0 || g_53 == &g_43 || g_53 == &g_3", "/tmp/tmp7lgtz91b.c", 237, __extension__ __PRETTY_FUNCTION__); }));
        l_198 = l_314;
        if ((l_14 != (*g_140)))
        {
            int32_t ****l_317 = &l_287;
            int32_t *l_330 = (void*)0;
            int32_t *l_331 = &l_198;
            (**l_286) = func_23(g_3, g_43);
            l_182 = ((safe_lshift_func_uint8_t_u_s((l_317 != &g_120), (0xCE66 | 0xB41F))) == ((***g_119) == (***l_317)));
            (**l_287) = (***l_317);
            (*l_331) = (safe_add_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s(((((+(((+(((*g_119) == (void*)0) || l_324)) <= ((**l_317) == (void*)0)) == ((safe_lshift_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_u(l_329[7], 3)) == 1), 10)) <= p_5))) | (p_5 > 0x0EC0)) != p_5) & 0x367FBF12), p_5)), p_5));
        }
        else
        {
            int32_t ***l_332 = &g_52;
            l_198 = (l_332 != l_287);
            l_182 = (((((((void*)0 == &g_120) | ((((+(safe_add_func_int16_t_s_s((((void*)0 != (**l_287)) == (+(((safe_lshift_func_uint16_t_u_u(p_5, 5)) == (((safe_add_func_uint32_t_u_u(((((safe_sub_func_uint32_t_u_u(((void*)0 != &g_120), (safe_lshift_func_int8_t_s_u(0x85, (safe_rshift_func_int8_t_s_u(g_113[3][6], g_3)))))) | l_347) == 0x5D) | p_5), g_3)) || p_5) ^ p_5)) & p_5))), p_5))) > g_43) >= 0xF8) ^ p_5)) == (-3)) > 0xD6B748E9) & l_348) | p_5);
            for (l_314 = 2; (l_314 < 60); l_314 = safe_add_func_uint16_t_u_u(l_314, 7))
            {
                uint32_t l_356 = 0xB03E8A2A;
                int32_t **l_357 = &g_53;
                uint8_t l_366 = 0xE9;
                l_355 = ((((safe_sub_func_uint32_t_u_u(((((((void*)0 != &g_120) != ((safe_mod_func_uint8_t_u_u(246U, p_5)) >= 0x746F688C)) <= (0xBD9C > ((((g_43 == p_5) > (5 & g_113[2][1])) == g_43) <= p_5))) & 4294967295U) | 0), g_3)) ^ p_5) == g_113[3][7]) < g_113[5][0]);
                if (l_356)
                    continue;
                if ((*g_140))
                    break;
                (**g_119) = (*l_286);
            }
        }
        (*l_370) = (((p_5 || (0xE22FE3B4 <= ((9U != g_43) | (0x1F | (safe_mod_func_uint16_t_u_u(((((-2) && g_3) | ((((+p_5) | ((*g_120) == (*l_286))) <= g_113[5][6]) && p_5)) | g_113[1][7]), g_113[2][3])))))) <= p_5) <= p_5);
    }
    else
    {
        int32_t **l_371 = &g_53;
        int32_t ****l_385 = (void*)0;
        uint16_t l_430 = 0x0533;
        int32_t ***l_487 = (void*)0;
        (***l_286) = ((l_371 == g_372) ^ ((safe_rshift_func_uint8_t_u_u(((**l_183) && (safe_unary_minus_func_uint32_t_u(0x886EC41A))), ((((safe_add_func_uint16_t_u_u(1U, g_43)) && p_5) >= (g_3 < ((**l_183) == (**l_371)))) ^ p_5))) || 7));
        (*g_119) = (*g_119);
        for (l_348 = (-3); (l_348 != 5); ++l_348)
        {
            int32_t *l_380 = &g_3;
            (***g_119) = func_20(l_380, (safe_mod_func_uint32_t_u_u(((+(+(((l_385 != &g_120) > ((((*l_371) == l_380) != ((*g_119) == (*g_119))) == (~(p_5 != p_5)))) <= (*l_380)))) & 0x2D3B), p_5)));
        }
        ((void) sizeof ((g_53 == &g_3 || g_53 == &g_43) ? 1 : 0), __extension__ ({ if (g_53 == &g_3 || g_53 == &g_43) ; else __assert_fail ("g_53 == &g_3 || g_53 == &g_43", "/tmp/tmp7lgtz91b.c", 283, __extension__ __PRETTY_FUNCTION__); }));
        if ((p_5 >= ((((254U < (0xB0 <= p_5)) ^ ((((safe_add_func_uint16_t_u_u((((&g_120 == l_385) > ((((((safe_rshift_func_uint16_t_u_s((((((safe_sub_func_uint32_t_u_u(g_43, (((safe_rshift_func_int16_t_s_s((p_5 > (-1)), 10)) >= g_3) ^ g_3))) < (**l_183)) > 0xE962D3FB) & (**l_183)) >= g_3), 12)) != 9) < g_113[1][4]) < 0xAE2F) < g_43) || p_5)) == (**l_371)), (-8))) && p_5) || 0x86DE) || 0x1855)) >= 0xB40BA595) < g_3)))
        {
            for (g_43 = 0; (g_43 > 9); ++g_43)
            {
                int32_t *l_403 = &l_198;
                int32_t ***l_404[4][4][7] = {{{&g_52,(void*)0,&l_371,&l_371,(void*)0,&l_183,&g_52},{(void*)0,&l_183,&g_372,(void*)0,&l_371,&l_371,(void*)0},{&l_371,&l_183,&l_371,(void*)0,&l_183,(void*)0,&l_183},{&l_371,&l_371,(void*)0,&l_183,&g_52,&l_183,(void*)0}},{{(void*)0,&g_52,&l_183,&l_183,&g_52,(void*)0,&g_52},{&g_52,(void*)0,&g_52,&l_183,&g_372,&l_371,&l_183},{&l_371,(void*)0,&g_52,&l_183,&l_371,&l_183,&g_52},{(void*)0,(void*)0,&l_183,(void*)0,&l_183,&l_371,&g_52}},{{&g_52,&g_52,(void*)0,(void*)0,&g_52,&l_183,&l_183},{&l_183,&l_371,&l_371,&l_371,&l_183,(void*)0,&g_52},{&l_371,&l_183,&l_371,(void*)0,&l_371,&g_372,(void*)0},{(void*)0,&l_183,(void*)0,&g_372,&g_372,(void*)0,&l_183}},{{&l_371,(void*)0,&l_183,&g_52,&g_52,(void*)0,(void*)0},{&l_183,&l_371,&g_52,&l_371,&g_52,&g_372,&g_52},{&g_52,&g_52,&g_52,&g_52,&l_183,(void*)0,&l_371},{(void*)0,&g_52,&l_183,&g_372,&l_371,&l_183,&l_371}}};
                int i, j, k;
                (*l_403) = (safe_rshift_func_int8_t_s_u(((safe_rshift_func_uint8_t_u_s(g_113[4][0], 7)) < (0x43D8EA6D <= g_3)), p_5));
                (*g_119) = l_404[3][3][4];
            }
            ((void) sizeof ((g_120 == &g_52 || g_120 == &g_372 || g_120 == &l_371 || g_120 == &l_183 || g_120 == 0) ? 1 : 0), __extension__ ({ if (g_120 == &g_52 || g_120 == &g_372 || g_120 == &l_371 || g_120 == &l_183 || g_120 == 0) ; else __assert_fail ("g_120 == &g_52 || g_120 == &g_372 || g_120 == &l_371 || g_120 == &l_183 || g_120 == 0", "/tmp/tmp7lgtz91b.c", 295, __extension__ __PRETTY_FUNCTION__); }));
            for (l_195 = 0; (l_195 < (-2)); --l_195)
            {
                (*l_183) = (*l_183);
            }
        }
        else
        {
            int32_t *l_407 = &l_198;
            int32_t *****l_438 = (void*)0;
            for (g_43 = 0; g_43 < 9; g_43 += 1)
            {
                l_329[g_43] = 0x216D;
            }
            (*l_407) = p_5;
            if ((****g_119))
            {
                int32_t **l_416[3][10] = {{&g_140,&g_140,&g_140,&g_140,&g_140,&g_140,&g_140,&g_140,&g_140,&g_140},{&g_140,&g_140,&g_140,&g_140,&g_140,&g_140,&g_140,&g_140,&g_140,&g_140},{&g_140,&g_140,&g_140,&g_140,&g_140,&g_140,&g_140,&g_140,&g_140,&g_140}};
                int i, j;
                for (p_5 = (-29); (p_5 != (-1)); p_5 = safe_add_func_uint8_t_u_u(p_5, 7))
                {
                    int32_t l_425[3];
                    int32_t **l_432 = &g_53;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_425[i] = 0x335F981D;
                    for (l_324 = 0; (l_324 == 42); ++l_324)
                    {
                        int32_t *l_429[5][9][5] = {{{&l_425[2],&l_425[0],&l_425[0],&l_425[0],&l_425[0]},{&l_425[1],&l_425[0],&g_3,&g_3,&l_425[1]},{&l_425[2],&l_425[2],&g_3,&l_425[0],&g_43},{&g_43,&g_43,&g_3,(void*)0,&l_198},{&l_425[2],&l_425[0],&g_3,&l_198,&l_425[2]},{&l_425[1],(void*)0,&g_3,&l_425[0],&l_198},{&l_425[2],&l_425[1],&g_3,&g_43,&l_425[2]},{&l_425[0],&l_198,&g_3,&g_3,&l_198},{&g_43,&l_425[1],&l_425[0],(void*)0,&g_43}},{{&l_425[2],(void*)0,&g_43,&g_3,&l_425[1]},{&g_43,&l_425[0],(void*)0,&g_43,&l_425[0]},{&l_425[2],&g_43,&g_43,&l_425[0],(void*)0},{&g_43,&l_425[2],(void*)0,&l_198,(void*)0},{&l_425[0],&l_425[0],&g_43,(void*)0,(void*)0},{&l_425[2],&l_425[0],&l_425[0],&l_425[0],&l_425[0]},{&l_425[1],&l_425[0],&g_3,&g_3,&l_425[1]},{&l_425[2],&l_425[2],&g_3,&l_425[0],&g_43},{&g_43,&g_43,&g_3,(void*)0,&l_198}},{{&l_425[2],&l_425[0],&g_3,&l_198,&l_425[2]},{&l_425[1],(void*)0,&g_3,&l_425[0],&l_198},{&l_425[2],&l_425[1],&g_3,&g_43,&l_425[2]},{&l_425[0],&l_198,&g_3,&g_3,&l_198},{&g_43,&l_425[1],&l_425[0],(void*)0,&g_43},{&l_425[2],(void*)0,&g_43,&g_3,&l_425[1]},{&g_43,&l_425[0],(void*)0,&g_43,&l_425[0]},{&l_425[2],&g_43,&g_43,&l_425[0],(void*)0},{&g_43,&l_425[2],(void*)0,&l_198,(void*)0}},{{&l_425[0],&l_425[0],&g_43,(void*)0,(void*)0},{&l_425[2],&l_425[0],&l_425[0],&l_425[0],&l_425[0]},{&l_425[1],&l_425[0],&g_3,&g_3,&l_425[1]},{&l_425[2],&l_425[2],&g_3,&l_425[0],&g_43},{&g_43,&g_43,&g_3,(void*)0,&l_198},{&l_425[2],&l_425[0],&g_3,&l_198,&l_425[2]},{&l_425[1],(void*)0,&g_3,&l_425[0],&l_198},{&l_425[2],&l_425[1],&g_3,&g_43,&l_425[2]},{&l_425[0],&l_198,&g_3,&g_3,&l_198}},{{&g_43,&l_425[1],&l_425[0],(void*)0,&g_43},{&l_425[2],(void*)0,&g_43,&g_3,&l_425[1]},{&l_198,&g_3,&l_425[2],&l_425[1],(void*)0},{&g_3,&l_425[0],&l_198,&g_3,&l_198},{&g_43,&g_43,&l_425[2],&g_3,(void*)0},{&g_3,&g_3,&l_198,&l_425[0],&l_198},{&l_425[1],(void*)0,&g_43,&g_43,(void*)0},{&g_3,&g_3,&l_425[1],(void*)0,&l_425[2]},{&g_43,&g_43,&l_425[0],&g_43,&g_43}}};
                        int i, j, k;
                    }
                    if (l_430)
                        continue;
                    if ((!(0x3C96 <= ((((void*)0 != l_407) & ((*g_120) != l_432)) == p_5))))
                    {
                        return p_5;
                    }
                    else
                    {
                        int32_t *****l_433 = &g_119;
                        (*l_433) = &g_120;
                        if ((****g_119))
                            break;
                        (*l_407) = (safe_add_func_int32_t_s_s(p_5, ((safe_rshift_func_int16_t_s_s((((&l_385 != l_438) & p_5) > 4294967295U), (0x98 <= ((**l_183) & g_3)))) == p_5)));
                    }
                }
                for (l_324 = 0; (l_324 <= 5); l_324 += 1)
                {
                    int32_t l_449[9][6][4] = {{{0x56B59CE9,(-1),1,1},{0x2CA4086E,0x2CA4086E,0xAFF039BE,(-1)},{0xADA1600E,(-1),0x2B729CE9,0x4CBF2352},{(-1),1,0xA2476F20,0x2B729CE9},{0x6E1B25E8,1,0x89D8E4C7,0x4CBF2352},{1,(-1),(-3),(-1)}},{{0,0x2CA4086E,0x0001A53E,1},{1,(-1),0xADA1600E,(-6)},{0x2B729CE9,0xAFF039BE,0x16BDAA4C,(-10)},{0x6E1B25E8,(-1),(-1),0x9451FE82},{0x16BDAA4C,(-10),0x2CE0D3E0,0},{4,0x813685B2,0xAFF039BE,1}},{{0xF2892254,0,1,0xA2476F20},{0xADA1600E,0x0B986970,1,0x94F684B7},{0,1,(-1),1},{0xA2476F20,(-2),0x89D8E4C7,0},{0x5D249943,0xFA8EB076,0x56B59CE9,(-1)},{1,0,0xF2892254,0xAFF039BE}},{{1,0x4CBF2352,0x56B59CE9,1},{0x5D249943,0xAFF039BE,0x89D8E4C7,0x9451FE82},{0xA2476F20,(-6),(-1),(-1)},{0,0,1,0},{0xADA1600E,(-1),1,0xAFF039BE},{0xF2892254,0x0001A53E,0xAFF039BE,0xBFE5494D}},{{4,0x0B986970,0x2CE0D3E0,0x4CBF2352},{0x16BDAA4C,(-2),(-1),0x2CE0D3E0},{0x6E1B25E8,0x5D249943,0x16BDAA4C,0},{0x2B729CE9,(-1),0xADA1600E,0xA2476F20},{1,0x0001A53E,0x0001A53E,1},{0,0x4CBF2352,(-3),(-6)}},{{1,(-10),0x89D8E4C7,(-1)},{0x6E1B25E8,0x7531E547,0xA2476F20,(-1)},{(-1),(-10),0x2B729CE9,(-6)},{0xADA1600E,0x4CBF2352,0xAFF039BE,1},{0x2CA4086E,0x0001A53E,1,0xA2476F20},{0x56B59CE9,(-1),0x2CE0D3E0,0}},{{0,0x5D249943,0xA2476F20,0x2CE0D3E0},{0xBFE5494D,(-2),(-1),0x4CBF2352},{0x2B729CE9,0x0B986970,0x56B59CE9,0},{0x0001A53E,(-10),0xA3F41C03,0xF2892254},{0xF2892254,0,0x016EAE04,(-1)},{(-1),0x0001A53E,0xADA1600E,(-2)}},{{0,0xD6DA284B,0,0x2B729CE9},{(-3),0xF2892254,(-5),(-5)},{0xA2476F20,1,0,0xF2892254},{(-10),(-1),0,(-1)},{0xA2476F20,0x16BDAA4C,(-5),(-10)},{(-3),0x7531E547,0,(-5)}},{{0,(-5),0xADA1600E,1},{(-1),(-1),0x016EAE04,0x94F684B7},{0xF2892254,(-1),0xA3F41C03,0},{0x0001A53E,0xAFF039BE,0xBFE5494D,(-1)},{(-8),0x2CA4086E,(-3),0x2B729CE9},{0,1,0x94F684B7,0x2CE0D3E0}}};
                    int32_t l_465[4][8][6] = {{{0xA1866D73,0,0,0x83A84A4C,5,0xA1866D73},{0x3F94299B,0xBC6C22D2,0x0085C452,0xF0B7E14A,4,3},{0x2D1547B9,0x10385C33,0xDD2C94EF,(-8),(-8),0xDD2C94EF},{0xB0507409,0xB0507409,(-8),4,(-10),5},{0xB61F78BA,4,(-4),0,1,(-8)},{0xA1866D73,0xB61F78BA,(-4),0xBC6C22D2,0xB0507409,5},{0xF0B7E14A,0xBC6C22D2,(-8),3,0x3F68DA2B,0xDD2C94EF},{3,0x3F68DA2B,0xDD2C94EF,0x83A84A4C,0,3}},{{5,0xA1866D73,0x0085C452,4,0x0085C452,0xA1866D73},{0x0085C452,0x10385C33,0,(-1),1,0x83A84A4C},{0xB0507409,0x0085C452,(-1),0,(-1),5},{0x3F94299B,0x0085C452,0xB61F78BA,0xDD2C94EF,1,0xD875EEA7},{3,0x10385C33,0x3F94299B,0xBC6C22D2,0x0085C452,0xF0B7E14A},{5,0xA1866D73,(-8),0x0730CCCB,0,0xFC633036},{0xBC6C22D2,0x3F68DA2B,0,0,0x3F68DA2B,0xBC6C22D2},{5,0xBC6C22D2,1,0,0xB0507409,0xA1866D73}},{{0x2D1547B9,0xB61F78BA,0x83A84A4C,0xD875EEA7,1,0xDD2C94EF},{0x2D1547B9,4,0xD875EEA7,0,(-10),0xF0B7E14A},{5,0xB0507409,0xB61F78BA,0,(-8),0},{0xBC6C22D2,0x10385C33,(-4),0x0730CCCB,4,0},{5,0xBC6C22D2,(-1),0xBC6C22D2,5,0xFC633036},{3,0,0x83A84A4C,0xDD2C94EF,0xFC633036,(-4)},{4,5,1,0xDD2C94EF,(-4),(-4)},{(-10),0,0xD875EEA7,4,0x2D1547B9,(-8)}},{{(-4),(-1),4,0x8DBDDD7B,0xA1866D73,0xDD2C94EF},{0,(-4),0x3F68DA2B,0xD875EEA7,0x0085C452,0x0085C452},{(-4),0xF0B7E14A,0xF0B7E14A,(-4),(-1),0},{0,5,1,0x3F94299B,0xDD2C94EF,(-1)},{0xB61F78BA,0x83A84A4C,0xD875EEA7,1,0xDD2C94EF,0xB61F78BA},{0xF0B7E14A,5,(-1),0x8DBDDD7B,(-1),0x3F94299B},{(-10),0xF0B7E14A,1,0x2D1547B9,0x0085C452,(-8)},{1,(-4),0x2D1547B9,0,0xA1866D73,0}}};
                    int32_t ****l_480 = &g_120;
                    int i, j, k;
                    (*l_407) = p_5;
                }
            }
            else
            {
                (*l_371) = func_20((*l_371), ((safe_rshift_func_int8_t_s_u(p_5, 0)) == ((**l_371) >= ((safe_rshift_func_uint8_t_u_s(251U, 2)) & ((void*)0 == (*g_119))))));
                (*l_407) = (*g_140);
                for (g_43 = 0; (g_43 <= 8); g_43 += 1)
                {
                    int8_t l_486 = 1;
                    if (l_485)
                        break;
                    return l_486;
                }
            }
            (*g_119) = l_487;
            ((void) sizeof ((g_120 == 0) ? 1 : 0), __extension__ ({ if (g_120 == 0) ; else __assert_fail ("g_120 == 0", "/tmp/tmp7lgtz91b.c", 364, __extension__ __PRETTY_FUNCTION__); }));
        }
        ((void) sizeof ((g_120 == &g_52 || g_120 == &g_372 || g_120 == &l_371 || g_120 == &l_183 || g_120 == 0) ? 1 : 0), __extension__ ({ if (g_120 == &g_52 || g_120 == &g_372 || g_120 == &l_371 || g_120 == &l_183 || g_120 == 0) ; else __assert_fail ("g_120 == &g_52 || g_120 == &g_372 || g_120 == &l_371 || g_120 == &l_183 || g_120 == 0", "/tmp/tmp7lgtz91b.c", 367, __extension__ __PRETTY_FUNCTION__); }));
    }
    ((void) sizeof ((g_53 == 0 || g_53 == &g_43 || g_53 == &g_3) ? 1 : 0), __extension__ ({ if (g_53 == 0 || g_53 == &g_43 || g_53 == &g_3) ; else __assert_fail ("g_53 == 0 || g_53 == &g_43 || g_53 == &g_3", "/tmp/tmp7lgtz91b.c", 370, __extension__ __PRETTY_FUNCTION__); }));
    for (l_314 = 0; (l_314 > 41); ++l_314)
    {
        int32_t l_490 = 0x46CD1033;
        if (l_490)
            break;
    }
    for (l_314 = (-14); (l_314 > 50); l_314 = safe_add_func_int32_t_s_s(l_314, 4))
    {
        return p_5;
    }
    return p_5;
}
static int32_t func_6(int16_t p_7)
{
    int32_t *l_169 = &g_3;
    int32_t *l_175 = &g_43;
    (*l_175) = ((((l_169 == l_169) ^ (l_169 == l_169)) <= (safe_mod_func_uint32_t_u_u((*l_169), p_7))) < ((safe_mod_func_uint16_t_u_u((l_169 != l_169), (safe_unary_minus_func_uint16_t_u(p_7)))) & g_113[4][2]));
    (**g_120) = func_23((((void*)0 != (*g_120)) && 0U), (safe_mod_func_uint32_t_u_u((((void*)0 != &l_169) & ((safe_rshift_func_int8_t_s_s((((*l_175) <= (-7)) & ((((((safe_lshift_func_int16_t_s_s(g_3, 14)) > ((*l_169) <= g_3)) == (*l_169)) <= 0x5E) && (*l_175)) >= g_43)), g_43)) != (*l_175))), 0x535DF793)));
    ((void) sizeof ((g_53 == 0 || g_53 == &g_43 || g_53 == &g_3) ? 1 : 0), __extension__ ({ if (g_53 == 0 || g_53 == &g_43 || g_53 == &g_3) ; else __assert_fail ("g_53 == 0 || g_53 == &g_43 || g_53 == &g_3", "/tmp/tmp7lgtz91b.c", 402, __extension__ __PRETTY_FUNCTION__); }));
    return p_7;
}
inline static int16_t func_8(int32_t p_9, int32_t p_10, int32_t p_11, uint8_t p_12)
{
    int16_t l_134 = 0x8AA2;
    int32_t **l_143 = &g_53;
    for (p_10 = 5; (p_10 >= 0); p_10 -= 1)
    {
        int32_t l_137[8] = {(-3),0,(-3),(-3),0,(-3),(-3),0};
        int32_t *l_141 = &g_43;
        int i;
        p_11 = (((p_11 > ((safe_lshift_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(l_134, (safe_sub_func_int8_t_s_s((l_137[4] >= (safe_lshift_func_uint16_t_u_u(0xA861, (((g_113[3][0] | ((&g_120 != (void*)0) <= (g_140 != (*g_52)))) && l_134) | p_12)))), p_9)))), 0)) && l_137[4])) < (-1)) <= (-1));
        (*l_141) = l_137[4];
        if (l_134)
            continue;
        if ((~((*l_141) >= ((((void*)0 != l_143) == (l_143 == (void*)0)) != ((((safe_rshift_func_uint8_t_u_u(g_3, (safe_add_func_int32_t_s_s((safe_sub_func_int8_t_s_s(((safe_rshift_func_int8_t_s_s((g_3 <= ((0xE694 >= (safe_unary_minus_func_int8_t_s((p_12 ^ (*l_141))))) != l_134)), (*l_141))) && 0xABECF346), p_10)), p_9)))) & p_9) != 6) == g_43)))))
        {
            (*g_52) = &p_10;
            ((void) sizeof ((g_53 == &p_10) ? 1 : 0), __extension__ ({ if (g_53 == &p_10) ; else __assert_fail ("g_53 == &p_10", "/tmp/tmp7lgtz91b.c", 429, __extension__ __PRETTY_FUNCTION__); }));
            if (p_9)
                break;
            return p_9;
        }
        else
        {
            (**g_120) = &p_11;
            ((void) sizeof ((g_53 == &p_11) ? 1 : 0), __extension__ ({ if (g_53 == &p_11) ; else __assert_fail ("g_53 == &p_11", "/tmp/tmp7lgtz91b.c", 440, __extension__ __PRETTY_FUNCTION__); }));
        }
        ((void) sizeof ((g_53 == &p_11) ? 1 : 0), __extension__ ({ if (g_53 == &p_11) ; else __assert_fail ("g_53 == &p_11", "/tmp/tmp7lgtz91b.c", 443, __extension__ __PRETTY_FUNCTION__); }));
        for (p_11 = 0; (p_11 <= 5); p_11 += 1)
        {
            int i, j;
            (**g_120) = func_20((*l_143), g_113[p_10][(p_11 + 2)]);
        }
        ((void) sizeof ((g_53 == &p_11 || g_53 == &g_43) ? 1 : 0), __extension__ ({ if (g_53 == &p_11 || g_53 == &g_43) ; else __assert_fail ("g_53 == &p_11 || g_53 == &g_43", "/tmp/tmp7lgtz91b.c", 450, __extension__ __PRETTY_FUNCTION__); }));
    }
    ((void) sizeof ((g_53 == &p_10 || g_53 == &p_11 || g_53 == &g_43 || g_53 == 0 || g_53 == &g_3) ? 1 : 0), __extension__ ({ if (g_53 == &p_10 || g_53 == &p_11 || g_53 == &g_43 || g_53 == 0 || g_53 == &g_3) ; else __assert_fail ("g_53 == &p_10 || g_53 == &p_11 || g_53 == &g_43 || g_53 == 0 || g_53 == &g_3", "/tmp/tmp7lgtz91b.c", 453, __extension__ __PRETTY_FUNCTION__); }));
    (***g_119) = (***g_119);
    (*g_52) = func_23(((0x1C <= p_12) ^ ((*g_120) == (void*)0)), l_134);
    ((void) sizeof ((g_53 == 0 || g_53 == &g_43 || g_53 == &g_3) ? 1 : 0), __extension__ ({ if (g_53 == 0 || g_53 == &g_43 || g_53 == &g_3) ; else __assert_fail ("g_53 == 0 || g_53 == &g_43 || g_53 == &g_3", "/tmp/tmp7lgtz91b.c", 457, __extension__ __PRETTY_FUNCTION__); }));
    g_43 = (((safe_mod_func_uint32_t_u_u(((*g_119) == (void*)0), ((((safe_lshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u((((void*)0 != &l_143) <= (safe_rshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u((+(!(p_9 || ((safe_lshift_func_int16_t_s_s(l_134, 6)) >= (((safe_sub_func_uint16_t_u_u(p_9, ((-2) == (g_43 >= g_43)))) < (-8)) && g_43))))), g_113[2][3])), 5))), l_134)), 4)) >= l_134) ^ 0x56) || g_113[3][7]))) ^ g_43) != g_3);
    return l_134;
}
inline static int8_t func_18(int32_t p_19)
{
    int32_t l_26 = 0;
    int32_t *l_36 = &g_3;
    (***g_119) = func_20(func_23(l_26, func_27((((((l_26 || 0x44D9) & p_19) >= p_19) <= g_3) ^ (safe_lshift_func_int8_t_s_u((safe_sub_func_uint8_t_u_u(g_3, (!((void*)0 != l_36)))), 5))), g_3, (*l_36))), (*l_36));
    ((void) sizeof ((g_53 == 0 || g_53 == &g_43 || g_53 == &g_3) ? 1 : 0), __extension__ ({ if (g_53 == 0 || g_53 == &g_43 || g_53 == &g_3) ; else __assert_fail ("g_53 == 0 || g_53 == &g_43 || g_53 == &g_3", "/tmp/tmp7lgtz91b.c", 474, __extension__ __PRETTY_FUNCTION__); }));
    return g_3;
}
static int32_t * func_20(int32_t * p_21, int16_t p_22)
{
    int32_t ***l_115 = &g_52;
    int32_t ****l_116 = &l_115;
    int32_t *l_121 = &g_43;
    (*l_116) = l_115;
    (*l_121) = (safe_lshift_func_int8_t_s_s(((g_119 != &g_120) || g_113[3][5]), 5));
    (***g_119) = l_121;
    ((void) sizeof ((g_53 == &g_43) ? 1 : 0), __extension__ ({ if (g_53 == &g_43) ; else __assert_fail ("g_53 == &g_43", "/tmp/tmp7lgtz91b.c", 493, __extension__ __PRETTY_FUNCTION__); }));
    for (g_43 = 0; (g_43 != 18); g_43 = safe_add_func_uint8_t_u_u(g_43, 3))
    {
        for (p_22 = 0; (p_22 > 29); ++p_22)
        {
            (**g_120) = (*g_52);
            p_21 = func_37(g_43);
            ((void) sizeof ((p_21 == &g_3) ? 1 : 0), __extension__ ({ if (p_21 == &g_3) ; else __assert_fail ("p_21 == &g_3", "/tmp/tmp7lgtz91b.c", 501, __extension__ __PRETTY_FUNCTION__); }));
            return (**g_120);
        }
        return p_21;
    }
    return p_21;
}
inline static int32_t * func_23(uint16_t p_24, int32_t p_25)
{
    int32_t *l_110 = &g_3;
    for (p_24 = (-27); (p_24 != 24); ++p_24)
    {
        (*g_52) = l_110;
        ((void) sizeof ((g_53 == &g_3) ? 1 : 0), __extension__ ({ if (g_53 == &g_3) ; else __assert_fail ("g_53 == &g_3", "/tmp/tmp7lgtz91b.c", 528, __extension__ __PRETTY_FUNCTION__); }));
    }
    for (p_24 = 0; (p_24 >= 10); p_24 = safe_add_func_int8_t_s_s(p_24, 9))
    {
        return &g_3;
    }
    for (p_25 = 5; (p_25 >= 0); p_25 -= 1)
    {
        int32_t *l_114[8][4][4] = {{{&g_43,&g_3,(void*)0,&g_3},{&g_43,&g_43,&g_43,(void*)0},{&g_43,&g_43,(void*)0,&g_43},{&g_43,(void*)0,&g_43,&g_43}},{{&g_43,&g_3,(void*)0,&g_3},{&g_43,&g_43,&g_43,(void*)0},{&g_43,&g_43,(void*)0,&g_43},{&g_43,(void*)0,&g_43,&g_43}},{{&g_43,&g_3,(void*)0,&g_3},{&g_43,&g_43,&g_43,(void*)0},{&g_43,&g_43,(void*)0,&g_43},{&g_43,(void*)0,&g_43,&g_43}},{{&g_43,&g_3,(void*)0,&g_3},{&g_43,&g_43,&g_43,(void*)0},{&g_43,&g_43,(void*)0,&g_43},{&g_43,(void*)0,&g_43,&g_43}},{{&g_43,&g_3,(void*)0,&g_3},{&g_43,&g_43,&g_43,(void*)0},{&g_43,&g_43,(void*)0,&g_43},{&g_43,(void*)0,&g_43,&g_43}},{{&g_43,&g_3,(void*)0,&g_3},{&g_43,&g_43,&g_43,(void*)0},{&g_43,&g_43,(void*)0,&g_43},{&g_43,(void*)0,&g_43,&g_43}},{{&g_43,&g_3,(void*)0,&g_3},{&g_43,&g_43,&g_43,(void*)0},{&g_43,&g_43,(void*)0,&g_43},{&g_43,(void*)0,&g_43,&g_43}},{{&g_43,&g_3,(void*)0,&g_3},{&g_43,&g_43,&g_43,(void*)0},{&g_43,&g_43,(void*)0,&g_43},{&g_43,(void*)0,&g_43,&g_43}}};
        int i, j, k;
        for (p_24 = 1; (p_24 <= 5); p_24 += 1)
        {
            return l_114[3][1][2];
        }
        (*g_52) = &g_43;
        ((void) sizeof ((g_53 == &g_43) ? 1 : 0), __extension__ ({ if (g_53 == &g_43) ; else __assert_fail ("g_53 == &g_43", "/tmp/tmp7lgtz91b.c", 548, __extension__ __PRETTY_FUNCTION__); }));
        return l_110;
    }
    return l_110;
}
inline static int32_t func_27(uint32_t p_28, int32_t p_29, uint32_t p_30)
{
    int32_t *l_42 = &g_43;
    int32_t **l_107[8][8][4] = {{{&l_42,&g_53,&g_53,&l_42},{&g_53,(void*)0,&l_42,&g_53},{&l_42,(void*)0,(void*)0,&g_53},{(void*)0,&l_42,(void*)0,(void*)0},{(void*)0,&g_53,&l_42,(void*)0},{(void*)0,&g_53,&l_42,&g_53},{(void*)0,(void*)0,&l_42,&g_53},{(void*)0,&g_53,&l_42,&g_53}},{{(void*)0,(void*)0,(void*)0,&g_53},{(void*)0,&g_53,(void*)0,&l_42},{&l_42,(void*)0,&l_42,(void*)0},{&g_53,(void*)0,&g_53,(void*)0},{&l_42,&g_53,(void*)0,&l_42},{&g_53,&g_53,&g_53,&g_53},{&l_42,&l_42,(void*)0,(void*)0},{&l_42,&g_53,(void*)0,&g_53}},{{&g_53,(void*)0,&l_42,&g_53},{(void*)0,&g_53,(void*)0,(void*)0},{(void*)0,&l_42,&l_42,&g_53},{&l_42,&g_53,(void*)0,&l_42},{(void*)0,&g_53,&g_53,(void*)0},{&g_53,(void*)0,&g_53,(void*)0},{&g_53,(void*)0,(void*)0,&l_42},{&g_53,&g_53,(void*)0,&g_53}},{{&l_42,(void*)0,&g_53,&g_53},{&g_53,&g_53,&l_42,&g_53},{&l_42,(void*)0,&l_42,&g_53},{&l_42,&g_53,&l_42,(void*)0},{&g_53,&g_53,&g_53,(void*)0},{&l_42,&l_42,(void*)0,&g_53},{&g_53,(void*)0,(void*)0,&g_53},{&g_53,(void*)0,&g_53,&l_42}},{{&g_53,&g_53,&g_53,&g_53},{(void*)0,(void*)0,(void*)0,(void*)0},{&l_42,&l_42,&l_42,&l_42},{(void*)0,(void*)0,(void*)0,&l_42},{(void*)0,&l_42,&l_42,(void*)0},{&g_53,&l_42,(void*)0,&l_42},{&l_42,(void*)0,(void*)0,&l_42},{&l_42,&l_42,&g_53,(void*)0}},{{&g_53,(void*)0,(void*)0,&g_53},{&l_42,&g_53,&g_53,&l_42},{&g_53,(void*)0,&l_42,&g_53},{&l_42,(void*)0,(void*)0,&g_53},{(void*)0,&l_42,(void*)0,(void*)0},{(void*)0,&g_53,&l_42,(void*)0},{(void*)0,&g_53,(void*)0,&g_53},{&l_42,&g_53,(void*)0,(void*)0}},{{(void*)0,(void*)0,&l_42,&l_42},{(void*)0,(void*)0,&l_42,&g_53},{&l_42,&g_53,&l_42,(void*)0},{&l_42,(void*)0,&l_42,(void*)0},{(void*)0,&g_53,&l_42,(void*)0},{&l_42,(void*)0,(void*)0,(void*)0},{(void*)0,&g_53,&g_53,(void*)0},{&l_42,&l_42,&g_53,(void*)0}},{{&g_53,(void*)0,(void*)0,&g_53},{&g_53,&l_42,(void*)0,&g_53},{(void*)0,(void*)0,&g_53,(void*)0},{(void*)0,&l_42,&l_42,(void*)0},{&l_42,&g_53,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{&g_53,&g_53,&g_53,(void*)0},{(void*)0,(void*)0,&g_53,(void*)0}}};
    int i, j, k;
    l_42 = func_37((safe_rshift_func_uint16_t_u_u((g_3 && ((&g_3 != &g_3) > g_3)), 6)));
    ((void) sizeof ((l_42 == &g_3) ? 1 : 0), __extension__ ({ if (l_42 == &g_3) ; else __assert_fail ("l_42 == &g_3", "/tmp/tmp7lgtz91b.c", 571, __extension__ __PRETTY_FUNCTION__); }));
    l_107[5][5][1] = func_44((safe_lshift_func_uint16_t_u_u((g_52 != (void*)0), (safe_mod_func_int8_t_s_s(p_29, 7U)))), (g_3 == ((l_42 == (*g_52)) >= (l_42 == (void*)0))), g_3, p_29, p_28);
    return p_30;
}
inline static int32_t * func_37(uint32_t p_38)
{
    int32_t *l_41 = &g_3;
    return l_41;
}
static int32_t ** func_44(int32_t p_45, int32_t p_46, uint32_t p_47, uint16_t p_48, uint32_t p_49)
{
    int32_t **l_60 = &g_53;
    int32_t l_72[2][6] = {{1,0x26181089,1,0x26181089,1,0x26181089},{1,0x26181089,1,0x26181089,1,0x26181089}};
    uint8_t l_73 = 1U;
    uint16_t l_85[5];
    int i, j;
    for (i = 0; i < 5; i++)
        l_85[i] = 0x20EC;
    if (p_49)
    {
        int32_t **l_64 = &g_53;
        int32_t l_71 = 0x8A35CCC4;
        for (p_47 = 0; (p_47 >= 7); p_47++)
        {
            int32_t **l_61 = &g_53;
            int32_t **l_70[4];
            int i;
            for (i = 0; i < 4; i++)
                l_70[i] = &g_53;
            (**l_60) = (((((((((((*g_52) != &p_45) == (safe_rshift_func_int16_t_s_u((((l_60 == l_61) < (safe_add_func_uint32_t_u_u((**l_60), 0x037D9CC1))) != (((void*)0 != l_64) & ((**l_60) < p_47))), 10))) == p_47) == (**l_60)) <= (**l_61)) == 0xDEFA) == g_3) ^ (-6)) <= 0x4CEC8E44) >= g_3);
            (**l_61) = ((~((safe_add_func_int8_t_s_s((((l_60 != (void*)0) == (((safe_rshift_func_uint8_t_u_u(0xC8, 3)) > (l_61 == l_70[0])) >= (l_71 != 2))) | (l_72[0][0] == 0)), g_43)) ^ l_73)) == p_48);
        }
        (**l_64) = (safe_sub_func_int16_t_s_s((**l_64), (safe_add_func_uint32_t_u_u((safe_unary_minus_func_int8_t_s((safe_rshift_func_uint8_t_u_s(((safe_sub_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((**l_64), 1)), l_85[4])) & (!0x16C3)), 1)))), p_48))));
        for (p_47 = 0; (p_47 <= 1); p_47 += 1)
        {
            int32_t **l_89[2][6] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
            int i, j;
            (*g_52) = &p_45;
            ((void) sizeof ((g_53 == &p_45) ? 1 : 0), __extension__ ({ if (g_53 == &p_45) ; else __assert_fail ("g_53 == &p_45", "/tmp/tmp7lgtz91b.c", 628, __extension__ __PRETTY_FUNCTION__); }));
            for (p_46 = 4; (p_46 >= 0); p_46 -= 1)
            {
                int i;
                if ((safe_lshift_func_int16_t_s_u(l_85[p_46], 15)))
                {
                    return &g_53;
                }
                else
                {
                    return &g_53;
                }
            }
        }
        ((void) sizeof ((g_53 == &p_45 || g_53 == &g_43) ? 1 : 0), __extension__ ({ if (g_53 == &p_45 || g_53 == &g_43) ; else __assert_fail ("g_53 == &p_45 || g_53 == &g_43", "/tmp/tmp7lgtz91b.c", 649, __extension__ __PRETTY_FUNCTION__); }));
    }
    else
    {
        uint16_t l_95 = 1U;
        for (p_49 = 12; (p_49 <= 57); p_49++)
        {
            int32_t **l_92[6][5] = {{&g_53,&g_53,(void*)0,(void*)0,(void*)0},{&g_53,&g_53,&g_53,&g_53,&g_53},{(void*)0,(void*)0,(void*)0,&g_53,&g_53},{&g_53,&g_53,&g_53,&g_53,&g_53},{&g_53,(void*)0,&g_53,(void*)0,&g_53},{&g_53,&g_53,&g_53,&g_53,&g_53}};
            int32_t *l_96 = &g_43;
            int i, j;
            l_96 = func_37((g_43 | (((0x76CAF445 > (l_60 != l_92[2][0])) >= (safe_mod_func_int16_t_s_s((-1), ((((&p_45 != (void*)0) == (**l_60)) || (((((l_95 ^ g_43) != p_45) == 0x4802A3ED) >= (*g_53)) <= 1)) ^ (**l_60))))) != 0x09)));
            ((void) sizeof ((l_96 == &g_3) ? 1 : 0), __extension__ ({ if (l_96 == &g_3) ; else __assert_fail ("l_96 == &g_3", "/tmp/tmp7lgtz91b.c", 661, __extension__ __PRETTY_FUNCTION__); }));
            if (p_48)
                break;
        }
    }
    ((void) sizeof ((g_53 == &p_45 || g_53 == &g_43) ? 1 : 0), __extension__ ({ if (g_53 == &p_45 || g_53 == &g_43) ; else __assert_fail ("g_53 == &p_45 || g_53 == &g_43", "/tmp/tmp7lgtz91b.c", 667, __extension__ __PRETTY_FUNCTION__); }));
    (**g_52) = (((1 || 0x7D) <= ((safe_lshift_func_int8_t_s_u((p_49 && (safe_lshift_func_uint16_t_u_s((safe_add_func_int16_t_s_s((safe_add_func_uint16_t_u_u(((0 > (6 == (l_60 != (void*)0))) || (safe_mod_func_uint16_t_u_u(((-1) || (4294967295U == 0x4FC3DD16)), p_48))), (-1))), (**l_60))), g_3))), 3)) & (-1))) >= 0x9816E076);
    return &g_53;
}
int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_3;
    csmith_sink_ = g_43;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 8; j++)
        {
            csmith_sink_ = g_113[i][j];
        }
    }
    csmith_sink_ = g_428;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            csmith_sink_ = g_539[i][j];
        }
    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 5; k++)
            {
                csmith_sink_ = g_614[i][j][k];
            }
        }
    }
    platform_main_end(0,0);
    return 0;
}
