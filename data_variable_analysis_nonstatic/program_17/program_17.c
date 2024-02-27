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
static int32_t g_2 = (-1L);
static uint32_t g_98 = 0x5FFFC42EL;
static int32_t g_135 = 0x9A964D50L;
static int16_t g_238 = 0x99D9L;
static int32_t g_498 = 0xE98533E3L;
static int32_t g_570 = 0L;
static int8_t g_583 = 0x8AL;
static int8_t func_1(void);
static uint16_t func_10(const uint32_t p_11, int32_t p_12, int16_t p_13);
static uint32_t func_15(int32_t p_16);
static int32_t func_18(int32_t p_19);
static int32_t func_22(uint32_t p_23, uint32_t p_24);
static int8_t func_30(uint32_t p_31, uint16_t p_32, int16_t p_33, int8_t p_34);
static uint32_t func_35(int32_t p_36, uint32_t p_37, int16_t p_38, uint32_t p_39);
static const uint16_t func_40(uint8_t p_41, uint8_t p_42);
static uint8_t func_43(int16_t p_44);
static int16_t func_45(int32_t p_46, uint16_t p_47, uint32_t p_48, uint16_t p_49, uint32_t p_50);
static int8_t func_1(void)
{
    int8_t l_14 = 0xBAL;
    int16_t l_584 = 0xA2C6L;
    uint8_t l_629 = 0x60L;
    uint8_t l_666 = 0x40L;
    int32_t l_720 = 0x2D28EED9L;
    int32_t l_729 = 0x38248ECBL;
    int8_t l_792 = (-1L);
    uint32_t l_843 = 0x42344F43L;
    uint32_t l_844 = 0UL;
    int32_t l_862 = 0xAFFBA6FBL;
    int32_t l_898 = 0xF17262FBL;
    int8_t l_934 = 0xFFL;
    int8_t l_1066 = 0xE2L;
    int8_t l_1076 = 0x52L;
    int8_t l_1082 = (-10L);
    int32_t l_1094 = 0x6933FE3DL;
lbl_822:
    for (g_2 = 0; (g_2 >= 9); ++g_2)
    {
        int32_t l_562 = (-1L);
        uint32_t l_667 = 1UL;
        int32_t l_782 = (-5L);
        int32_t l_787 = 0x69E44E88L;
        if ((g_2 == g_2))
        {
            uint8_t l_563 = 0xFBL;
            l_562 = ((safe_mod_func_int8_t_s_s((!(safe_mod_func_uint16_t_u_u(65532UL, func_10(g_2, l_14, (func_15(g_2) >= (0x49B941B2L > (0x2AL != g_2))))))), l_562)) > l_563);
            return g_238;
        }
        else
        {
            uint8_t l_581 = 0x02L;
            int16_t l_582 = (-1L);
            int16_t l_628 = 0xFE64L;
            int16_t l_639 = 4L;
            const int32_t l_718 = (-9L);
            const uint16_t l_719 = 2UL;
            if ((l_14 >= (((safe_sub_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((((safe_sub_func_int16_t_s_s(g_570, (safe_mod_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_s((safe_add_func_int8_t_s_s(((safe_rshift_func_int8_t_s_u((((safe_add_func_uint8_t_u_u(l_562, g_570)) != (((l_581 > l_562) >= ((((l_582 ^ (g_583 < l_562)) == g_498) || 4UL) || g_238)) <= l_581)) & l_562), l_582)) ^ g_238), l_562)), 3)) | l_584), 0x8A51L)))) | l_14) & g_498), 13)), 0x79L)) <= l_582) && 2UL)))
            {
                const uint8_t l_603 = 0xC4L;
                int32_t l_649 = 4L;
                int32_t l_739 = 0x826F0A6FL;
                int16_t l_762 = 0x3728L;
                if ((safe_mod_func_uint32_t_u_u(((g_583 & (((((((((safe_sub_func_int32_t_s_s(l_582, l_562)) ^ (safe_sub_func_uint8_t_u_u((0xB6BEL == ((((l_562 | 0UL) == ((~(safe_rshift_func_int8_t_s_s(((safe_sub_func_uint32_t_u_u((safe_add_func_uint32_t_u_u((safe_add_func_uint16_t_u_u(g_98, (safe_rshift_func_uint16_t_u_s(((((~g_2) != (g_570 | l_562)) || g_570) >= l_562), g_98)))), 0xB0071A63L)), g_498)) & 0xA418L), 4))) <= 0x55L)) != l_562) != g_2)), g_238))) || g_2) < g_570) >= 1L) == g_98) == 0xB62B6FBFL) && g_135) >= g_570)) & l_603), g_570)))
                {
                    uint32_t l_630 = 0x76F203C2L;
                    if (((safe_lshift_func_int8_t_s_u((safe_rshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_u((safe_rshift_func_uint8_t_u_s(l_581, (((((safe_rshift_func_uint8_t_u_s(0xE9L, 6)) && (((!(~(safe_rshift_func_int16_t_s_u((safe_mod_func_uint16_t_u_u((safe_add_func_int32_t_s_s(((safe_add_func_int32_t_s_s(((!(+(safe_mod_func_uint16_t_u_u(((l_628 == (g_238 <= (((l_584 & (l_629 || (g_498 <= g_238))) | (((l_630 == 6L) ^ g_570) == g_2)) == 7UL))) && g_135), g_135)))) ^ g_238), g_498)) < g_135), l_582)), g_583)), 13)))) >= l_603) != l_582)) <= g_498) > g_570) & 0xC93C08E0L))), g_498)), l_582)), 0)) ^ l_581))
                    {
                        const uint16_t l_644 = 4UL;
                        l_649 = ((l_603 <= (safe_mod_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u(g_570, 2)), (safe_sub_func_uint16_t_u_u(g_2, (l_639 | g_135))))), l_14))) > (g_498 <= (((safe_mod_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(((((l_644 && (safe_mod_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((0x45EE10D0L <= g_498), l_630)), l_639))) || l_603) && 6L) | l_14), 1)), 0x53ECL)) ^ l_644) ^ l_644)));
                        l_667 = ((g_238 == 250UL) >= (((safe_rshift_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((safe_unary_minus_func_uint32_t_u((~(l_584 & (((l_644 || g_498) < ((((1L <= ((safe_mod_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u((0xFBCAL || (((safe_rshift_func_uint8_t_u_u(l_644, 7)) <= ((g_583 > g_135) > l_639)) < l_582)), l_584)), l_666)) <= l_644)) || l_14) | l_562) == (-8L))) && 0x49B4L))))), 2)), 6)), 5)) != 1L), l_629)) | g_498) && 65535UL));
                        return g_135;
                    }
                    else
                    {
                        uint8_t l_687 = 1UL;
                        g_570 = ((g_2 & (safe_rshift_func_uint8_t_u_s(((safe_lshift_func_uint8_t_u_u(255UL, 1)) >= (-1L)), 1))) || (safe_rshift_func_uint16_t_u_s((((((safe_add_func_int32_t_s_s((safe_rshift_func_int8_t_s_u((safe_sub_func_int8_t_s_s((safe_mod_func_int16_t_s_s(((0x4FL & ((~g_583) >= ((~0xDFL) | (+(safe_mod_func_int16_t_s_s(3L, l_649)))))) || (0xC6DEL || l_603)), (-3L))), g_238)), g_2)), l_581)) == l_687) && 0x1AA630F6L) <= l_628) ^ g_498), 14)));
                    }
                    return l_562;
                }
                else
                {
                    int32_t l_706 = 0xFBA9DEC9L;
                    int32_t l_761 = 0x446ED020L;
                    g_135 = (safe_add_func_uint8_t_u_u(255UL, 0xFBL));
                    for (l_629 = 12; (l_629 > 33); ++l_629)
                    {
                        uint32_t l_717 = 4294967295UL;
                        l_720 = (safe_add_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(((((safe_lshift_func_uint8_t_u_s((safe_mod_func_int8_t_s_s(g_498, (safe_rshift_func_uint16_t_u_s(1UL, ((((safe_sub_func_uint8_t_u_u(l_706, ((safe_lshift_func_int16_t_s_s(g_498, (safe_mod_func_int16_t_s_s(8L, (((((safe_add_func_int16_t_s_s(((((1UL < (2UL & (safe_lshift_func_int16_t_s_u((safe_mod_func_int16_t_s_s((0x0430L == ((l_717 < g_135) & l_603)), l_562)), l_717)))) >= g_570) ^ 6L) | g_98), g_2)) | g_135) && g_570) != 0xE7L) || g_238))))) || g_498))) >= 1UL) | l_718) >= 0UL))))), l_649)) ^ g_98) & 0xC0288F14L) <= g_135), l_719)), g_98));
                        return g_98;
                    }
                    l_649 = (safe_lshift_func_uint8_t_u_u(((0UL > l_718) && (safe_rshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((((!(((((!((l_729 > (-8L)) || (safe_unary_minus_func_int16_t_s((safe_sub_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_u(0xF5L, g_238)) == ((safe_lshift_func_int16_t_s_u((safe_add_func_int8_t_s_s(g_98, l_562)), 12)) >= ((((0x68CED126L != 0x2441B4D5L) && l_706) | 4L) <= g_135))), g_2)))))) ^ l_706) <= l_739) != g_135) || 0xAEL)) <= l_719) && 0xE33CL), g_98)), l_629))), 3));
                    if ((safe_lshift_func_int16_t_s_s(l_584, g_498)))
                    {
                        uint8_t l_760 = 255UL;
                        l_761 = ((((0xB8L && l_649) && (!0x41L)) <= ((!(safe_rshift_func_int8_t_s_u(g_238, l_739))) ^ l_720)) <= (((safe_sub_func_uint32_t_u_u((((((g_135 || (safe_sub_func_uint8_t_u_u(g_2, (((((safe_add_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u(((!(safe_lshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_u((+l_667), 5)), 10))) && 0x1042804EL), g_238)), l_581)) != 0x0D89L) || l_706) <= 0UL) && l_649)))) < 1UL) == l_760) >= g_135) != l_760), l_562)) || 250UL) == 0x15L));
                        return l_762;
                    }
                    else
                    {
                        l_649 = l_729;
                    }
                }
            }
            else
            {
                const int32_t l_780 = 4L;
                const uint8_t l_781 = 0UL;
                l_562 = (safe_unary_minus_func_uint8_t_u(((safe_sub_func_int16_t_s_s(((((safe_mod_func_int8_t_s_s((((safe_sub_func_uint8_t_u_u(g_135, g_570)) > 65526UL) >= (g_583 >= (safe_add_func_uint32_t_u_u(g_238, (((safe_rshift_func_int16_t_s_u(g_135, 11)) != ((g_2 || (safe_lshift_func_int8_t_s_s(((safe_rshift_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_u(l_780, (((0UL & l_781) != 0xEFL) & 0xA0L))) < 0x83L), g_570)) > g_570), l_667))) > 0x3AL)) != g_2))))), g_583)) || 252UL) & g_570) >= 1UL), l_782)) < 1L)));
            }
            l_562 = (safe_mod_func_int32_t_s_s(0L, g_2));
        }
        g_570 = (((safe_lshift_func_uint16_t_u_s((g_135 & (0x739BL != l_584)), 15)) >= (l_787 < g_238)) > ((safe_add_func_int8_t_s_s(((g_98 == l_14) == ((safe_sub_func_uint8_t_u_u(0xA7L, (l_792 == 255UL))) <= g_583)), l_584)) == 0x4E32ECB6L));
    }
    if ((g_583 && 1L))
    {
        int32_t l_796 = 0L;
        if (l_629)
        {
            uint8_t l_810 = 251UL;
            l_729 = ((safe_unary_minus_func_uint8_t_u((safe_lshift_func_uint16_t_u_s(((l_796 & (safe_rshift_func_int8_t_s_s(((l_666 ^ (safe_mod_func_uint8_t_u_u((((((9UL == ((g_498 && (l_796 && (!g_238))) > 0x1A8DL)) == (+(safe_lshift_func_int16_t_s_u(((((safe_sub_func_uint32_t_u_u(((1L > (g_98 ^ 0x4C55D694L)) != l_720), g_583)) ^ l_729) > 0x10386AC8L) | 0x5DL), 7)))) && (-3L)) & l_14) == l_796), g_570))) == g_570), 4))) != 0xA6L), g_98)))) && g_498);
            g_135 = (safe_unary_minus_func_int8_t_s((g_570 != g_498)));
            l_729 = l_810;
            g_498 = (g_570 ^ ((l_792 < (0x06L | (safe_rshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(((safe_unary_minus_func_uint16_t_u(l_810)) & (((((l_796 < ((0xAF27L <= l_14) >= g_570)) > (safe_mod_func_int16_t_s_s((-4L), g_583))) < 0UL) || g_583) > 0xD7L)), 0L)), g_2)), g_583)))) != g_238));
        }
        else
        {
            if (l_729)
                goto lbl_822;
            g_2 = (0x6200C363L & (safe_rshift_func_int8_t_s_u((safe_mod_func_int32_t_s_s(g_498, (+g_98))), 3)));
        }
        for (l_629 = 0; (l_629 != 18); l_629 = safe_add_func_uint32_t_u_u(l_629, 6))
        {
            uint16_t l_842 = 65535UL;
            int32_t l_845 = 0x2B1AF444L;
            l_845 = (((safe_add_func_uint32_t_u_u(((1UL != g_238) && (((safe_add_func_uint8_t_u_u((g_238 == (safe_sub_func_int16_t_s_s(g_135, (safe_rshift_func_uint16_t_u_u(g_570, 5))))), l_796)) ^ (g_583 || (((g_98 >= (safe_add_func_int32_t_s_s((((safe_add_func_int32_t_s_s((g_238 || g_498), l_842)) != l_843) ^ g_570), g_570))) >= l_844) == g_135))) > l_796)), l_796)) == l_729) && l_842);
            l_796 = (safe_mod_func_uint32_t_u_u((((safe_add_func_int32_t_s_s(g_498, l_845)) < g_498) | 1UL), (safe_sub_func_int16_t_s_s(0x6DEEL, ((g_98 > 0x7C534B82L) < g_135)))));
        }
        l_729 = (g_570 != (safe_add_func_int32_t_s_s(((((safe_add_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((l_796 > ((((g_498 < (((6UL && (safe_lshift_func_uint16_t_u_s((g_498 < (safe_mod_func_int32_t_s_s(l_862, g_238))), ((safe_mod_func_int32_t_s_s(g_2, 0xDDDD8ED8L)) && 9UL)))) == l_629) && g_98)) > (-1L)) & g_2) || g_238)), l_862)), g_135)) ^ 0x8C4BL) > l_720) & 0x6C1AC0F8L), g_135)));
    }
    else
    {
        int8_t l_865 = (-10L);
        int32_t l_1028 = 0x992549ACL;
        uint32_t l_1041 = 18446744073709551609UL;
        int16_t l_1065 = 1L;
        int32_t l_1120 = 0x167514AEL;
        if ((g_2 && l_865))
        {
            uint16_t l_875 = 65535UL;
            const uint32_t l_881 = 4294967295UL;
            int8_t l_897 = (-5L);
            g_498 = ((l_865 | (((safe_sub_func_int16_t_s_s(1L, (l_729 < 0x6CL))) <= (((((((safe_add_func_uint16_t_u_u((((l_865 | (safe_add_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(((+l_875) >= (safe_lshift_func_int8_t_s_s(((safe_sub_func_int8_t_s_s((((l_666 || (+3L)) && ((-8L) >= 65535UL)) > 0x27CFL), l_584)) | 0UL), 6))), g_570)), 65535UL))) != l_881) != l_843), 65531UL)) <= l_666) < 4294967293UL) ^ 4294967293UL) || 8UL) > l_865) > l_881)) > l_875)) < g_498);
            l_898 = (((safe_sub_func_uint8_t_u_u(l_865, g_238)) == (((safe_lshift_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(g_570, ((+(l_843 & ((safe_mod_func_uint16_t_u_u((g_135 ^ ((l_14 || (~(safe_add_func_int16_t_s_s(l_865, ((((((+l_584) < (((((safe_rshift_func_int8_t_s_u((-10L), 6)) <= g_583) ^ (-6L)) < l_897) || g_2)) > 0x8B85L) || l_897) < 0x71C2L) ^ g_583))))) > 0x5EL)), l_666)) != g_583))) > l_875))), 1)) > 9UL) != g_583)) && l_843);
            l_720 = (((g_583 && (safe_add_func_int32_t_s_s(0L, (safe_add_func_int16_t_s_s(g_2, 0x525FL))))) && (((safe_sub_func_int8_t_s_s(((-3L) | ((safe_lshift_func_int16_t_s_u(((safe_lshift_func_uint8_t_u_u(l_881, (((((1L && ((safe_lshift_func_uint8_t_u_s(255UL, 6)) && (safe_rshift_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u((0x6737L <= 1L), 15)), g_98)), 3)) & g_135), 0)))) != 0x310BL) >= g_2) & g_2) ^ l_897))) & l_865), 5)) <= 0x4D7FL)), 2L)) | g_2) <= 0xE31D9B47L)) & g_498);
        }
        else
        {
            int32_t l_946 = 0L;
            uint8_t l_1008 = 0x83L;
            int32_t l_1032 = 0x93D4EF9FL;
            uint16_t l_1067 = 0xD2B5L;
            uint32_t l_1095 = 4294967295UL;
            g_2 = (safe_sub_func_uint32_t_u_u(((safe_lshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_s(l_898, (((safe_add_func_int32_t_s_s((safe_mod_func_uint8_t_u_u(((~4UL) != ((g_583 <= (l_865 <= (4294967294UL <= (((g_135 < (0UL == ((safe_rshift_func_int16_t_s_s(0xBB42L, (safe_lshift_func_int8_t_s_u(0L, l_934)))) >= l_666))) != l_865) && g_238)))) < 252UL)), g_238)), 0x8AC0D095L)) || g_570) < g_238))), l_584)) && 0L), g_98));
            for (g_135 = (-7); (g_135 != (-23)); g_135 = safe_sub_func_uint32_t_u_u(g_135, 4))
            {
                int16_t l_942 = 0x4F73L;
                int16_t l_1009 = 0L;
                int32_t l_1029 = 0x4324E57CL;
                uint32_t l_1033 = 0x380AD833L;
                uint32_t l_1049 = 4294967289UL;
                if (((((4294967295UL && 0xFFE8300AL) == (g_98 || (+((((safe_rshift_func_int16_t_s_u((((1L == ((safe_sub_func_uint8_t_u_u(l_942, (l_792 >= ((safe_mod_func_int8_t_s_s(((((~l_946) & (g_583 <= ((((((safe_add_func_int8_t_s_s((((safe_add_func_uint8_t_u_u(((safe_mod_func_uint32_t_u_u(((g_583 >= (-2L)) != 1UL), 0x889FBE6BL)) && 0UL), 0x92L)) & l_862) < l_946), 0L)) >= g_98) & 0xD7L) || g_135) ^ 0xBE9AL) || g_135))) || 0xB55DF994L) == g_98), g_498)) & g_135)))) == 0xCEL)) & 1L) < g_498), g_98)) || g_498) > g_238) ^ 0x417FL)))) > g_135) < l_865))
                {
                    uint8_t l_953 = 0xEDL;
                    g_570 = (l_953 <= (safe_lshift_func_int8_t_s_u((((g_498 != (safe_lshift_func_int8_t_s_s(l_862, (safe_mod_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((((safe_add_func_int32_t_s_s(((l_953 || (((safe_lshift_func_int16_t_s_u((-6L), (safe_lshift_func_int16_t_s_s((((l_946 || (safe_rshift_func_uint16_t_u_s(l_942, 14))) == (safe_lshift_func_int8_t_s_s((((g_135 == (g_2 | 0x1CL)) < g_98) == 249UL), l_729))) == 0x9152L), l_865)))) & l_953) >= 0x28L)) == l_792), g_135)) & l_934) <= g_583), g_583)), 0x40L))))) | l_942) || l_953), 4)));
                    g_570 = (((safe_lshift_func_uint8_t_u_s((safe_add_func_uint32_t_u_u((((((safe_sub_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(0x00L, g_2)), l_942)), (safe_mod_func_uint32_t_u_u(((l_720 && ((((!(g_238 ^ 0x13A8L)) || (safe_rshift_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u((safe_add_func_int32_t_s_s(((safe_rshift_func_int16_t_s_s(((((safe_sub_func_uint8_t_u_u((safe_unary_minus_func_uint32_t_u(((safe_lshift_func_int16_t_s_u((l_942 ^ (l_946 > (safe_add_func_int32_t_s_s(0x569E5F4AL, 1L)))), 15)) <= g_98))), g_238)) ^ 3L) | 0x66EEL) && g_2), 13)) > l_953), 0x40975CC4L)), l_862)) < l_1008), 13)), l_953)), l_865)), g_238))) ^ g_98) ^ l_942)) <= l_953), l_1009)))) >= 0x49D5A127L) >= g_498) && l_953) < g_498), l_865)), 0)) < 0UL) ^ l_865);
                    l_1029 = (g_135 != ((g_135 > (safe_rshift_func_int16_t_s_s((((g_135 != 1L) && (((1UL <= (safe_unary_minus_func_uint8_t_u((~((safe_lshift_func_int8_t_s_u((g_2 && ((((safe_add_func_uint32_t_u_u((safe_mod_func_int32_t_s_s(((safe_rshift_func_int8_t_s_u(0x3FL, 3)) || (((safe_lshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(l_1009, 2)), 9)) ^ ((safe_add_func_uint16_t_u_u(l_953, 1L)) == 0x911DL)) | 65531UL)), l_942)), g_98)) && 0x5DF2L) >= g_98) >= l_1028)), l_946)) == l_844))))) & 252UL) < l_953)) == (-3L)), 7))) ^ 0xEFL));
                }
                else
                {
                    l_1032 = (1UL || (safe_lshift_func_int16_t_s_s(g_98, 0)));
                    g_2 = ((l_1033 || ((!(l_1008 ^ (l_1028 || g_570))) & (((((safe_mod_func_uint16_t_u_u(g_2, ((g_583 && (safe_sub_func_uint8_t_u_u((l_865 < l_1029), (((safe_rshift_func_int8_t_s_u(0x42L, l_1008)) < g_498) | l_1008)))) | l_865))) ^ g_583) != g_570) <= 1L) || l_1041))) < (-4L));
                }
                l_1032 = ((!g_2) >= (((safe_add_func_int8_t_s_s((safe_add_func_int16_t_s_s(((0L == 0x9610B8F5L) || ((safe_sub_func_int16_t_s_s(l_1049, ((safe_add_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s((255UL | 0x5AL), 5)), (l_1008 <= (5L & (((l_942 < g_135) >= g_135) >= l_1028))))) < 0x4E6B84BAL))) != 0x0CL)), g_2)), 0x3DL)) >= 0xDB826403L) != 0xC2706D54L));
                return g_498;
            }
lbl_1112:
            l_1067 = ((((((2UL != ((((safe_sub_func_int8_t_s_s((safe_sub_func_int8_t_s_s((-3L), (((safe_add_func_int8_t_s_s(((((+0UL) != (((255UL < g_498) >= (safe_add_func_int16_t_s_s((0x02B9L != ((safe_rshift_func_int8_t_s_s((0UL || (0xC0D3L != g_498)), g_583)) || 4294967291UL)), l_865))) && l_1028)) != l_1065) > g_570), (-1L))) && l_1008) > g_135))), 1UL)) & l_1066) >= l_865) != l_1032)) != l_1065) == g_238) >= g_238) == 0xCDL) != g_498);
            for (l_865 = 28; (l_865 == (-10)); l_865--)
            {
                int32_t l_1079 = 2L;
                for (g_583 = 24; (g_583 != (-15)); --g_583)
                {
                    uint32_t l_1081 = 0x6405D4DCL;
                    uint16_t l_1096 = 0x73F0L;
                    for (l_666 = (-2); (l_666 <= 59); l_666 = safe_add_func_uint8_t_u_u(l_666, 1))
                    {
                        g_570 = ((0UL & (safe_add_func_uint32_t_u_u((l_1076 <= ((safe_sub_func_uint32_t_u_u((l_729 <= ((l_1079 <= (safe_unary_minus_func_uint8_t_u((l_1081 && ((l_1076 < (g_135 ^ (l_1082 || (((0xD239L <= l_865) | g_98) | g_135)))) >= 0xBD5004E2L))))) | g_2)), g_498)) ^ 0x54L)), g_2))) || g_583);
                        g_498 = (((((safe_add_func_int32_t_s_s(((safe_add_func_uint32_t_u_u(l_1008, (safe_rshift_func_int16_t_s_u((((g_2 | (safe_lshift_func_uint8_t_u_u(0UL, (g_135 >= l_1081)))) | ((safe_rshift_func_int16_t_s_u((+g_135), 12)) > 1UL)) != l_1094), l_1095)))) || g_98), 0xDD8D6358L)) == 0x4502L) ^ l_1096) ^ g_2) > (-1L));
                        if (g_583)
                            break;
                        g_498 = 1L;
                    }
                    for (l_1082 = (-11); (l_1082 > 20); l_1082 = safe_add_func_uint32_t_u_u(l_1082, 7))
                    {
                        int32_t l_1109 = 0x1CC18E5FL;
                        g_498 = (~(safe_lshift_func_int8_t_s_s(((+(g_583 | g_583)) && (g_2 >= (-3L))), (safe_rshift_func_int8_t_s_s(l_1096, ((safe_lshift_func_int8_t_s_s((!l_1081), (((0xFB35L < (safe_unary_minus_func_int8_t_s(l_1109))) || (safe_mod_func_int32_t_s_s((0xE5ABL || g_570), g_2))) == 0x0CB6L))) ^ l_1032))))));
                        return l_1079;
                    }
                }
                if (l_898)
                    goto lbl_1112;
            }
        }
        g_135 = (safe_mod_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(((!(safe_mod_func_uint8_t_u_u((l_1094 == l_1120), (safe_rshift_func_int8_t_s_s((((safe_add_func_uint16_t_u_u(0x06ADL, (safe_add_func_int32_t_s_s((safe_sub_func_uint16_t_u_u(g_570, 65535UL)), g_98)))) | (safe_sub_func_int8_t_s_s(0x71L, ((safe_lshift_func_uint8_t_u_u(1UL, (safe_mod_func_int8_t_s_s(l_898, g_498)))) >= g_498)))) >= g_498), 4))))) <= 0x63L), g_238)), 0xB3L));
    }
    return g_238;
}
static uint16_t func_10(const uint32_t p_11, int32_t p_12, int16_t p_13)
{
    int32_t l_557 = 0x8B90AEB0L;
    g_135 = (safe_lshift_func_uint16_t_u_s(((safe_mod_func_uint16_t_u_u(g_135, 0x9703L)) | (safe_rshift_func_uint8_t_u_s(((((((((((l_557 != p_13) & 0UL) | l_557) >= (((safe_add_func_uint32_t_u_u(((0xAEB9L | 1L) || ((safe_add_func_int32_t_s_s(g_98, l_557)) == p_12)), g_98)) != p_13) ^ 0x4113L)) != p_13) == 0xB116B153L) && p_12) == p_13) || p_12) >= 0x1DE0L), 2))), l_557));
    return p_12;
}
static uint32_t func_15(int32_t p_16)
{
    int32_t l_27 = (-1L);
    int32_t l_491 = 0xBF22C214L;
    l_491 = ((g_2 <= (!func_18((safe_lshift_func_uint16_t_u_u(((func_22(((safe_add_func_int8_t_s_s(0L, l_27)) & ((safe_mod_func_int8_t_s_s(func_30(func_35(((func_40(func_43(((func_45(g_2, ((p_16 < 0x7A14L) ^ (safe_lshift_func_uint16_t_u_u((((safe_sub_func_uint32_t_u_u(((((p_16 | (-7L)) <= (safe_mod_func_int16_t_s_s((p_16 >= g_2), l_27))) > p_16) == g_2), g_2)) | 252UL) <= g_2), 11))), g_2, l_27, p_16) <= p_16) ^ 1L)), g_2) || 65535UL) & (-1L)), p_16, g_2, p_16), l_27, p_16, l_27), l_27)) | l_27)), p_16) == g_2) < p_16), g_2))))) || g_238);
    for (g_135 = 0; (g_135 > 28); ++g_135)
    {
        uint32_t l_506 = 1UL;
        g_498 = (((p_16 <= ((g_135 || 9UL) ^ (safe_mod_func_int16_t_s_s(l_491, (safe_add_func_int32_t_s_s((g_498 == 0x7AL), (safe_sub_func_int16_t_s_s(((((safe_rshift_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(((g_98 || p_16) <= ((safe_unary_minus_func_int8_t_s(g_2)) | g_2)), p_16)), 1)) && l_506) || g_498) || g_2), l_506)))))))) | 4294967295UL) > g_498);
    }
    if ((safe_mod_func_uint32_t_u_u((0x6329L | (safe_mod_func_int16_t_s_s((((safe_unary_minus_func_uint16_t_u((safe_sub_func_int32_t_s_s((safe_mod_func_int8_t_s_s((-1L), g_498)), (((safe_sub_func_int8_t_s_s(((p_16 < (safe_sub_func_uint8_t_u_u(((0x46L | p_16) == p_16), (0x1B7427DBL < (g_2 > g_135))))) >= p_16), l_491)) < 0L) <= g_98))))) ^ g_98) & 0xE70D1222L), 65535UL))), p_16)))
    {
        int8_t l_530 = 0x43L;
        int32_t l_531 = 0x4C1C6834L;
        l_491 = (((65535UL && (safe_add_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(p_16, (safe_sub_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(p_16, (((((-1L) != l_491) >= g_135) < g_498) | ((p_16 <= g_2) == p_16)))), l_27)))), l_530))) && l_27) && 0x20BAL);
        l_531 = g_98;
    }
    else
    {
        int16_t l_546 = 0L;
        uint8_t l_547 = 0UL;
        int32_t l_548 = 1L;
        l_548 = ((safe_rshift_func_int16_t_s_u((l_491 >= ((((safe_sub_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(((safe_sub_func_uint8_t_u_u((g_98 ^ (p_16 == (g_238 && (((safe_rshift_func_int16_t_s_s(((0L ^ (safe_sub_func_int32_t_s_s((safe_mod_func_int32_t_s_s((g_98 >= l_491), g_2)), (((((((0x38705546L && g_238) || g_498) < l_546) >= l_546) == l_491) != p_16) < 0x26DD470FL)))) >= l_547), 4)) < 0x76L) < p_16)))), p_16)) ^ l_546), p_16)), l_547)) <= 5UL) || 255UL) > g_238)), 13)) < 0xAF4BL);
    }
    return l_27;
}
static int32_t func_18(int32_t p_19)
{
    uint32_t l_489 = 0x6C820B1FL;
    int32_t l_490 = 0xBB8693EDL;
    l_490 = (safe_add_func_uint16_t_u_u(l_489, 0x285BL));
    return p_19;
}
static int32_t func_22(uint32_t p_23, uint32_t p_24)
{
    uint32_t l_469 = 0x09EFDA9FL;
    g_135 = ((((safe_add_func_int16_t_s_s((((!p_23) && (((safe_rshift_func_uint8_t_u_s((g_238 >= (safe_add_func_int32_t_s_s((safe_sub_func_int8_t_s_s(((safe_sub_func_int32_t_s_s((safe_add_func_uint16_t_u_u(((((g_238 > (safe_sub_func_int8_t_s_s((0x593EL >= (safe_unary_minus_func_int8_t_s((safe_sub_func_int8_t_s_s(((((safe_rshift_func_uint16_t_u_s(p_23, (safe_lshift_func_uint16_t_u_u(65533UL, 9)))) <= ((safe_sub_func_uint32_t_u_u(((g_98 == g_98) <= 65532UL), (-6L))) || 0xB3B1L)) < 0xAC77B250L) > l_469), 0x2DL))))), p_24))) > p_23) >= g_135) || g_2), l_469)), l_469)) != g_2), p_23)), p_24))), 0)) && g_2) || 0xB5L)) < 0xD3BDL), p_23)) || l_469) < g_135) <= 65529UL);
    g_135 = ((safe_add_func_int8_t_s_s(0xF1L, l_469)) || (g_98 && ((safe_rshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s(p_24, 3)), g_238)), ((((safe_sub_func_uint32_t_u_u(g_98, (l_469 & ((safe_lshift_func_int16_t_s_u((((!l_469) == (safe_lshift_func_uint16_t_u_s(((l_469 ^ 1L) || p_24), 13))) | p_24), 2)) & p_23)))) > g_238) | 0x4482L) & 7L))), 7)) != (-7L))));
    return g_98;
}
static int8_t func_30(uint32_t p_31, uint16_t p_32, int16_t p_33, int8_t p_34)
{
    uint32_t l_213 = 0x7507154BL;
    uint32_t l_224 = 0UL;
    uint8_t l_237 = 252UL;
    int32_t l_306 = 0x7AC00EF3L;
    const uint32_t l_323 = 4294967286UL;
    int32_t l_444 = 6L;
    l_213 = (safe_mod_func_uint16_t_u_u(p_32, p_32));
    g_135 = (255UL & l_213);
    if (((safe_mod_func_int8_t_s_s(((safe_mod_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_s(((safe_sub_func_int8_t_s_s((safe_add_func_uint32_t_u_u((0L >= l_213), ((((p_34 < p_33) != l_224) & ((g_98 != (!0xD8L)) < l_224)) > g_98))), l_224)) || 0x77D6962BL), 14)) & 0x6FL), 0x53L)) != g_135), g_2)) < g_98))
    {
        int32_t l_228 = (-1L);
        g_135 = ((safe_rshift_func_int8_t_s_u((((l_228 <= (g_98 ^ l_228)) || (safe_add_func_uint16_t_u_u(((p_34 && ((safe_rshift_func_uint16_t_u_u(((((0x39L || ((l_228 ^ ((safe_mod_func_int32_t_s_s(0xE1257983L, (safe_sub_func_uint8_t_u_u(p_31, ((l_224 || l_237) & l_228))))) > p_34)) >= g_98)) != g_2) != g_238) == g_98), p_33)) & l_237)) <= l_213), 0xE97AL))) & l_237), g_2)) >= g_98);
        if (((l_228 < (((safe_add_func_int32_t_s_s((-9L), (((safe_add_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(((p_32 >= (safe_rshift_func_uint16_t_u_s(((safe_rshift_func_uint16_t_u_s((p_31 == (((((((l_237 & g_135) && l_228) > 0x33L) || (safe_add_func_int8_t_s_s((g_135 && 1UL), p_31))) != p_33) & p_32) | 0x14D7L)), g_2)) == 0xECD8L), l_228))) <= 0L), g_238)), p_33)) >= 252UL) >= 0x26B7B25FL))) ^ 0x9D00192FL) | 0x0A595513L)) != 0xF34AE07AL))
        {
            const int32_t l_269 = (-1L);
            g_135 = ((((safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_u(((safe_add_func_int32_t_s_s((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s((p_34 ^ l_213), 6)), (safe_lshift_func_int16_t_s_u(g_98, 15)))), 0L)) & (safe_add_func_uint32_t_u_u(g_2, (1L < (g_238 <= (4294967295UL | (safe_mod_func_int32_t_s_s((safe_lshift_func_int16_t_s_s((0x36L & l_269), 11)), p_32)))))))), 5)), g_135)) && 255UL) ^ 1UL) >= p_34);
            g_135 = (((safe_lshift_func_int8_t_s_u((l_269 <= (safe_lshift_func_uint16_t_u_s(l_269, 4))), 2)) ^ (4UL > ((safe_add_func_int32_t_s_s(l_213, (safe_lshift_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(0xDA4DL, p_32)), 13)))) == 0xE5L))) & ((g_135 != (l_237 <= p_33)) == l_269));
        }
        else
        {
            uint32_t l_290 = 0xA84839B6L;
            uint8_t l_315 = 250UL;
            int32_t l_329 = 0L;
            uint32_t l_354 = 0x50B62747L;
            int8_t l_404 = 7L;
            for (p_32 = 0; (p_32 >= 45); p_32 = safe_add_func_uint32_t_u_u(p_32, 1))
            {
                int8_t l_303 = 0x65L;
                if ((safe_rshift_func_uint8_t_u_u(g_98, 0)))
                {
                    const int32_t l_286 = 5L;
                    g_135 = ((((((safe_rshift_func_int8_t_s_s(l_286, 1)) != g_238) != 1UL) && (safe_add_func_int16_t_s_s(g_238, p_33))) && ((safe_unary_minus_func_int16_t_s(0x99A9L)) != l_290)) == (safe_lshift_func_int16_t_s_u(0x6129L, 9)));
                }
                else
                {
                    uint32_t l_320 = 0UL;
                    l_306 = (((safe_sub_func_int32_t_s_s((5UL < ((l_290 && (safe_rshift_func_int16_t_s_s(0L, ((safe_sub_func_int8_t_s_s((safe_add_func_uint32_t_u_u(0x4D332DDEL, ((safe_add_func_int16_t_s_s(l_303, p_32)) >= ((safe_add_func_int16_t_s_s(1L, (p_34 | (g_238 ^ g_98)))) ^ l_237)))), 0x78L)) == l_303)))) != g_238)), g_238)) == p_33) ^ g_98);
                    l_228 = (safe_rshift_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_u((((safe_sub_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s(p_33, l_315)), ((((((l_290 >= (l_224 || p_32)) || (safe_add_func_int8_t_s_s((safe_lshift_func_int16_t_s_u(l_290, l_320)), ((((safe_add_func_int32_t_s_s((l_306 | 9L), 0UL)) || l_306) != g_238) && g_238)))) ^ p_34) ^ g_135) > l_303) != p_32))) != 0xD4L) <= l_323), p_33)) == g_238), 8));
                }
            }
            if (l_315)
            {
                int8_t l_334 = 0xC5L;
                int32_t l_360 = 0x1B2EE99AL;
                if ((((~g_135) > (g_238 < g_135)) == (safe_add_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_u(l_290, 6)) != g_135), l_228))))
                {
                    l_329 = p_32;
                }
                else
                {
                    l_334 = (safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((g_2 & (l_315 == 2L)), 12)), 0));
                    if (g_135)
                    {
                        uint32_t l_343 = 0UL;
                        l_306 = l_334;
                        g_135 = ((safe_rshift_func_uint8_t_u_u(l_228, 2)) >= (safe_lshift_func_uint16_t_u_u(((((safe_add_func_uint32_t_u_u((safe_add_func_int16_t_s_s(l_343, l_329)), (safe_sub_func_int16_t_s_s((g_238 & (p_33 > (((safe_mod_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(g_135, (((safe_add_func_uint16_t_u_u(l_334, 0xDBF4L)) ^ (safe_lshift_func_uint16_t_u_u(p_33, l_354))) < l_329))), 255UL)) == 4294967295UL) <= 0x1DCD4F55L))), p_32)))) != g_135) > g_135) || p_34), 15)));
                    }
                    else
                    {
                        uint32_t l_359 = 18446744073709551615UL;
                        l_329 = (1UL < (safe_unary_minus_func_uint16_t_u((((g_135 >= 5UL) && 0x3D4CL) == ((safe_rshift_func_uint16_t_u_s(((p_32 | 248UL) | ((((((g_238 & g_135) | (safe_unary_minus_func_uint8_t_u(l_359))) > g_98) && p_31) ^ p_33) < p_32)), 8)) & p_31)))));
                        l_360 = (-9L);
                    }
                }
                for (p_33 = (-3); (p_33 <= (-1)); p_33 = safe_add_func_uint16_t_u_u(p_33, 1))
                {
                    l_306 = (4UL == (safe_rshift_func_uint16_t_u_u((0L < g_98), (safe_rshift_func_uint16_t_u_s((((safe_mod_func_int16_t_s_s((+(+(safe_add_func_uint8_t_u_u((((safe_sub_func_int8_t_s_s(((l_228 && (p_33 > 5UL)) >= (safe_lshift_func_int16_t_s_s(((p_34 | (safe_mod_func_uint8_t_u_u((safe_add_func_int32_t_s_s(g_98, ((p_34 >= 0x47F2C3C5L) >= p_33))), g_238))) == g_238), l_306))), 0L)) >= g_2) < 2L), l_360)))), g_98)) > g_98) <= 1L), 1)))));
                    for (l_334 = 14; (l_334 > (-26)); l_334--)
                    {
                        int32_t l_383 = 3L;
                        l_383 = 0x6AC92402L;
                        g_135 = (0x6FL ^ l_360);
                    }
                    g_135 = 1L;
                }
                l_228 = (safe_sub_func_int8_t_s_s((g_98 | ((((((safe_add_func_uint8_t_u_u(1UL, (safe_mod_func_int32_t_s_s((safe_rshift_func_int8_t_s_s(2L, 6)), p_33)))) || ((+(l_334 != p_31)) || ((l_315 < (safe_lshift_func_uint16_t_u_s(0x519DL, 2))) && ((l_290 | g_2) < l_360)))) == l_360) <= l_306) || 0x3A1DL) ^ 0x0FL)), l_224));
            }
            else
            {
                g_135 = g_238;
                g_135 = 3L;
            }
            l_228 = (((safe_mod_func_uint8_t_u_u(((((((((l_290 || p_33) & (safe_lshift_func_int8_t_s_s(((0x22BB7B0CL < (g_98 < (((!(safe_add_func_uint8_t_u_u(255UL, p_31))) <= 0x6C99L) | (l_228 && p_34)))) <= (-2L)), g_2))) | 1L) && l_329) > g_2) < 0xAD39L) | 0xC6A5EF5CL) >= l_404), 0xD4L)) >= g_98) <= 65526UL);
        }
    }
    else
    {
        const int8_t l_430 = 1L;
        int32_t l_431 = 4L;
        g_135 = ((safe_add_func_uint32_t_u_u(4294967295UL, g_2)) & 0x87A202B6L);
        l_431 = (safe_mod_func_uint32_t_u_u((safe_sub_func_int32_t_s_s((l_213 != (safe_rshift_func_uint8_t_u_u(((((safe_rshift_func_int16_t_s_s((p_34 == p_31), 7)) & (safe_sub_func_uint32_t_u_u(((((((((((safe_rshift_func_uint16_t_u_s(((safe_mod_func_int32_t_s_s((((safe_lshift_func_uint8_t_u_s((((((p_31 || (g_98 ^ (safe_mod_func_uint16_t_u_u((safe_add_func_int8_t_s_s((!((((p_34 & (l_430 >= ((l_430 == (g_238 && p_32)) > p_33))) && g_98) > p_34) > l_323)), g_2)), 0xE9BEL)))) >= g_98) && 0L) | g_98) | p_32), 1)) < g_135) <= l_430), g_238)) <= g_98), 0)) ^ 0xF33E96E9L) || 0xB8L) >= l_306) != g_238) && 0L) && l_306) || l_430) < 0x0DL) <= g_238), p_33))) < l_323) || g_2), g_135))), p_32)), l_430));
    }
    g_135 = ((((0x5CL > ((safe_mod_func_uint8_t_u_u((0x6FL && (((l_224 ^ (((p_34 <= (safe_rshift_func_int16_t_s_u((safe_mod_func_int16_t_s_s(((((0xA0L == (safe_mod_func_int8_t_s_s((p_34 >= (safe_rshift_func_int8_t_s_u((0xC8L >= p_32), ((((safe_lshift_func_int16_t_s_s(p_31, g_135)) || l_306) >= 1UL) & g_135)))), g_135))) != l_237) > l_444) ^ 0x8AL), l_306)), p_32))) >= 1UL) == 1UL)) == g_2) || l_224)), l_237)) < 0L)) ^ g_98) >= 0x6EL) || l_323);
    return l_237;
}
static uint32_t func_35(int32_t p_36, uint32_t p_37, int16_t p_38, uint32_t p_39)
{
    uint16_t l_184 = 1UL;
    int32_t l_185 = 0x86692AA9L;
    int32_t l_210 = (-1L);
    l_185 = (l_184 == (p_36 != g_135));
    l_210 = ((l_184 > (safe_add_func_uint32_t_u_u(0x1EDEFA84L, (safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_u((-6L), 12)), ((0xE1AB3331L == (((safe_lshift_func_uint16_t_u_s(0x69CCL, 14)) & (safe_mod_func_uint8_t_u_u(0x86L, (safe_add_func_int16_t_s_s((((safe_unary_minus_func_int32_t_s(p_38)) == ((p_39 && (safe_mod_func_uint16_t_u_u((~(((((safe_mod_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_s(((safe_sub_func_int8_t_s_s(p_38, (-1L))) == g_98), 15)), 1UL)) | 0L) <= l_185) == g_98) < 0xBEL)), g_135))) | l_185)) & g_2), 0x07CAL))))) == l_184)) > g_135))), 3))))) || l_185);
    return g_135;
}
static const uint16_t func_40(uint8_t p_41, uint8_t p_42)
{
    int8_t l_170 = 0x22L;
lbl_183:
    g_135 = (safe_add_func_int8_t_s_s((((g_2 != ((p_42 ^ ((249UL == l_170) || 0x19775E7FL)) <= (safe_add_func_int32_t_s_s(0xF0ED02C9L, (safe_lshift_func_uint8_t_u_s(((-8L) & (safe_mod_func_uint16_t_u_u(((safe_add_func_int16_t_s_s((g_98 && 0x8D885D17L), 0UL)) != 0xD180L), 0xBF02L))), 3)))))) ^ p_41) != 0xC9L), l_170));
    for (g_135 = 0; (g_135 <= 12); g_135++)
    {
        for (p_41 = 0; (p_41 != 53); p_41++)
        {
            if (g_135)
                goto lbl_183;
        }
    }
    return g_98;
}
static uint8_t func_43(int16_t p_44)
{
    int16_t l_167 = 0xE314L;
    g_135 = g_98;
    l_167 = g_2;
    g_135 = l_167;
    return g_135;
}
static int16_t func_45(int32_t p_46, uint16_t p_47, uint32_t p_48, uint16_t p_49, uint32_t p_50)
{
    uint32_t l_67 = 1UL;
    int32_t l_70 = 0xEFC71010L;
lbl_136:
    l_70 = (safe_add_func_int8_t_s_s(((safe_mod_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(p_46, ((((safe_add_func_int16_t_s_s((g_2 <= (l_67 <= (p_48 > 0x44L))), (l_67 > 0x2CCF58D9L))) >= l_67) || (safe_lshift_func_int8_t_s_s(p_48, p_49))) && g_2))), p_48)), l_67)) || l_67), 0x14L));
    for (l_67 = (-27); (l_67 < 14); l_67 = safe_add_func_int8_t_s_s(l_67, 5))
    {
        uint32_t l_77 = 0x036206CBL;
        uint32_t l_97 = 4294967295UL;
        uint32_t l_112 = 18446744073709551610UL;
        int32_t l_115 = 0x09E5B736L;
        g_98 = (((safe_mod_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u(((l_77 || (safe_rshift_func_int16_t_s_s(g_2, ((safe_rshift_func_int16_t_s_s(((~g_2) >= (safe_unary_minus_func_int8_t_s((((safe_mod_func_uint32_t_u_u((0x3BB579ABL | (((safe_sub_func_uint8_t_u_u(g_2, (((safe_mod_func_uint32_t_u_u(g_2, (safe_mod_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(249UL, ((safe_unary_minus_func_uint16_t_u((0xD8B1L == ((safe_sub_func_uint16_t_u_u((((g_2 >= 2L) & p_46) < 0x0F14L), 0L)) ^ l_67)))) || g_2))), 0x146FL)))) <= g_2) <= l_67))) > p_49) > l_97)), l_97)) & p_48) > p_49)))), 5)) ^ (-4L))))) & g_2), 5L)) != 3L), (-1L))) && l_77) && l_77);
        l_115 = ((((g_2 <= ((safe_sub_func_uint8_t_u_u(((g_2 >= l_77) >= (((((l_97 || p_48) < ((safe_mod_func_uint32_t_u_u((l_70 || (~((safe_mod_func_uint8_t_u_u(((safe_add_func_int16_t_s_s((safe_mod_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(0UL, 6)), l_112)), (((safe_add_func_uint32_t_u_u(l_70, l_67)) < l_70) && p_48))) & 0x0FL), l_67)) | 246UL))), l_70)) && l_112)) > 0xF0658699L) == g_98) | g_98)), 1UL)) | 9UL)) > g_98) & l_97) <= 0xAEF2L);
        if ((safe_rshift_func_uint16_t_u_u((~(248UL | ((l_115 & (safe_mod_func_uint8_t_u_u((safe_add_func_int16_t_s_s(p_49, ((((!p_48) || ((((0x0741L >= (safe_unary_minus_func_uint8_t_u(g_98))) <= g_2) >= l_77) ^ (safe_sub_func_int32_t_s_s(((p_48 || p_47) <= g_2), p_47)))) == 0xE843D8BAL) >= l_67))), p_47))) < 65526UL))), l_70)))
        {
            int8_t l_129 = 0x8BL;
            g_135 = (safe_sub_func_uint32_t_u_u((1UL >= ((l_67 != l_129) <= ((safe_add_func_int32_t_s_s(l_67, 4294967290UL)) && 0UL))), ((((0xA51DBEEEL & (((((+(((g_98 && (((((safe_mod_func_uint8_t_u_u((p_49 >= l_129), l_97)) == 0x06DCL) | g_2) & l_115) & 8UL)) && (-6L)) && 0x86792DBFL)) && 0x5D92L) && l_115) ^ 2L) <= 0xCBL)) != l_67) || 1L) | g_98)));
            if (l_97)
                goto lbl_136;
        }
        else
        {
            const int16_t l_141 = 0xD649L;
            uint32_t l_142 = 8UL;
            uint32_t l_165 = 0UL;
            int32_t l_166 = 1L;
            g_135 = (((g_135 & (safe_lshift_func_uint8_t_u_s(((safe_mod_func_uint16_t_u_u(l_141, p_49)) > l_142), ((g_135 < (g_135 ^ (!(-4L)))) > ((safe_mod_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((safe_unary_minus_func_uint32_t_u((((l_112 | ((((safe_sub_func_uint32_t_u_u(((safe_mod_func_int16_t_s_s(((0xB29FA799L == l_97) != (-9L)), 1UL)) == g_98), g_135)) || 2L) ^ g_2) | l_141)) && g_2) || l_141))), g_98)), 1UL)) || l_142))))) != g_2) | 250UL);
            l_115 = ((0x692BL != ((((safe_lshift_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((~(safe_lshift_func_int8_t_s_s((l_70 || (safe_unary_minus_func_int32_t_s(g_135))), 0))), (safe_rshift_func_uint16_t_u_s(l_142, 9)))), p_46)) || (p_48 == (((safe_add_func_uint16_t_u_u((((g_135 < (((((0x8E2BL & 0x635DL) <= 0xC643L) && l_77) & l_165) != l_67)) ^ 2L) != 1UL), l_166)) & p_48) || (-6L)))) ^ 65535UL) & l_142)) >= 0xC539L);
        }
    }
    return l_70;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_2;
    csmith_sink_ = g_98;
    csmith_sink_ = g_135;
    csmith_sink_ = g_238;
    csmith_sink_ = g_498;
    csmith_sink_ = g_570;
    csmith_sink_ = g_583;
    platform_main_end(0,0);
    return 0;
}
