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
static int8_t g_7 = 2L;
static int32_t g_51 = 0x26954EB8L;
static uint8_t g_59 = 0UL;
static int8_t g_90 = 0x5CL;
static uint8_t g_96 = 0x08L;
static int8_t g_111 = 0x16L;
static int8_t g_159 = 0xD6L;
static int32_t g_160 = 0xBA02A555L;
static int8_t g_202 = 0xCCL;
static int16_t g_203 = 7L;
static int8_t g_204 = 0xD8L;
static uint32_t g_253 = 0x37579580L;
static uint32_t g_293 = 0x45D63032L;
static uint8_t g_304 = 0x7FL;
static int16_t g_323 = 0x019DL;
static uint32_t g_355 = 0x75E5F06EL;
static int8_t g_373 = 0L;
static int32_t g_382 = 0x750434D6L;
static int8_t g_388 = 0x78L;
static int8_t g_389 = 1L;
static int8_t g_390 = 0L;
static int32_t g_391 = 3L;
static int32_t g_394 = 0x8E1D8DCDL;
static uint16_t g_395 = 0x185CL;
static uint8_t g_491 = 0xE3L;
static uint32_t g_510 = 0x08D93545L;
static uint8_t g_580 = 1UL;
static uint16_t g_615 = 4UL;
static int32_t g_696 = 0xD120D47AL;
static uint32_t g_697 = 4294967292UL;
static int32_t g_737 = 0x81208BEEL;
static int32_t g_782 = 0xAD8954F0L;
static int8_t g_783 = 9L;
static uint16_t g_924 = 0UL;
static int32_t g_940 = (-6L);
inline static int16_t func_1(void);
inline static uint16_t func_9(uint32_t p_10, int8_t p_11);
inline static uint32_t func_20(uint32_t p_21, int16_t p_22, uint16_t p_23, int8_t p_24, int8_t p_25);
inline static uint32_t func_26(uint32_t p_27, int16_t p_28);
inline static uint32_t func_34(int32_t p_35, int16_t p_36, int8_t p_37, int8_t p_38, int8_t p_39);
static int32_t func_40(uint8_t p_41, uint16_t p_42);
inline static int8_t func_46(uint16_t p_47);
inline static uint8_t func_64(uint32_t p_65, uint16_t p_66, uint16_t p_67, uint16_t p_68);
static uint32_t func_69(uint32_t p_70, int32_t p_71, int32_t p_72, uint32_t p_73);
inline static uint32_t func_76(int16_t p_77, uint16_t p_78, int8_t p_79, int32_t p_80, uint8_t p_81);
inline static int16_t func_1(void)
{
    int32_t l_2 = 0xE90A624CL;
    int32_t l_8 = 0L;
    uint32_t l_736 = 0xE32688C6L;
    uint16_t l_781 = 1UL;
    int32_t l_851 = 0xD459E581L;
    uint32_t l_921 = 0xB7C2618EL;
    int16_t l_943 = 0L;
    uint32_t l_953 = 1UL;
    if (((((l_2 ^ (safe_mod_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(g_7, 4)), (g_7 , 0x707DL)))) != (l_8 == func_9(((l_8 == (g_7 != ((l_8 > (g_7 > l_2)) , g_7))) != l_8), l_8))) < 0L) != g_394))
    {
        uint32_t l_583 = 0xDE831855L;
        int32_t l_596 = (-7L);
        for (g_51 = 3; (g_51 >= 17); g_51 = safe_add_func_uint8_t_u_u(g_51, 5))
        {
            int32_t l_591 = 0x7F4B2D63L;
            int32_t l_595 = 4L;
            if (((l_583 <= ((0x9706343AL > (0x245EL > l_8)) <= l_2)) >= ((!0L) < (safe_sub_func_int32_t_s_s((safe_sub_func_uint32_t_u_u((safe_sub_func_int32_t_s_s(((l_591 , 0x0E156FA1L) , (((0x7888637AL >= 1UL) & g_159) < l_2)), l_583)), g_373)), l_2)))))
            {
                return l_591;
            }
            else
            {
                int8_t l_594 = (-1L);
                for (g_204 = 0; (g_204 <= 21); g_204 = safe_add_func_int16_t_s_s(g_204, 4))
                {
                    l_594 = l_591;
                    l_595 &= l_594;
                    g_382 = (g_90 == 0x79A9L);
                }
                return l_596;
            }
        }
        g_615 = ((safe_mod_func_uint16_t_u_u((((safe_unary_minus_func_int16_t_s((((l_2 > 1UL) > l_596) || (((safe_add_func_uint32_t_u_u((g_323 != ((0x78L < (safe_add_func_uint16_t_u_u(l_2, l_2))) != 1L)), (safe_add_func_uint16_t_u_u((!(safe_lshift_func_int8_t_s_u((safe_sub_func_uint8_t_u_u(((safe_mod_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u(g_388, 0x0DL)), 0x10L)) >= g_510), g_491)), l_8))), g_7)))) || l_596) , l_8)))) ^ g_580) && g_202), g_159)) < (-8L));
        if ((((safe_rshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_u(l_596, ((safe_add_func_int16_t_s_s((safe_sub_func_int32_t_s_s(g_293, ((0UL & g_7) < (0xF5EBL || g_96)))), (((safe_unary_minus_func_uint32_t_u((((((g_90 <= (8UL >= ((safe_sub_func_int8_t_s_s(6L, l_583)) & 0x77L))) && g_373) != l_2) ^ g_204) ^ 0UL))) | l_596) , 6UL))) , g_580))), 14)) , 0x0AB75D08L) ^ g_293))
        {
            int16_t l_631 = 1L;
            uint32_t l_646 = 0x87CE9BD0L;
            int32_t l_647 = 1L;
            int16_t l_673 = 1L;
            l_647 = (safe_sub_func_uint16_t_u_u(((((safe_rshift_func_uint16_t_u_s(g_51, 4)) <= l_631) , 0xE70CL) != g_90), (((safe_rshift_func_int8_t_s_u((((l_2 , (((safe_lshift_func_int16_t_s_u((((g_390 || (safe_add_func_uint16_t_u_u(l_583, (safe_rshift_func_int16_t_s_u((safe_sub_func_uint16_t_u_u((((((safe_mod_func_int8_t_s_s((((safe_add_func_int8_t_s_s(((g_203 , 0x79L) & g_253), 0x8BL)) == g_160) != g_615), g_580)) & 0x0DL) , l_8) != g_390) , l_646), 1L)), g_304))))) <= g_253) < l_596), 15)) , l_2) , g_253)) >= 0x09L) , 0x57L), 2)) == l_631) , g_388)));
            g_382 ^= ((g_323 , (safe_lshift_func_int8_t_s_u(((l_631 <= (g_355 , (g_491 != g_491))) & (1UL ^ (g_491 , (safe_mod_func_uint8_t_u_u(l_2, (safe_sub_func_int32_t_s_s(((safe_unary_minus_func_int8_t_s((g_204 , 0L))) || 0L), (-1L)))))))), l_631))) >= g_388);
            l_647 = (0x23L > (((l_596 <= ((((safe_lshift_func_int8_t_s_u(0xEEL, 5)) && (((safe_add_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(((g_51 & l_646) < ((safe_add_func_uint32_t_u_u(((((((safe_lshift_func_uint16_t_u_u((((safe_add_func_int16_t_s_s((((safe_rshift_func_int8_t_s_u((((g_388 ^ ((g_202 , g_51) | l_2)) & g_111) , l_2), l_647)) > l_631) < 4294967288UL), g_389)) == l_673) , l_8), 1)) > l_596) || g_7) <= l_596) == 0UL) < 0L), g_382)) == g_59)), g_204)), l_673)), l_8)) | g_388) , 0x82L)) , l_2) < (-1L))) >= (-7L)) < g_7));
        }
        else
        {
            int16_t l_676 = 0x939FL;
            g_382 = (safe_sub_func_uint8_t_u_u(g_395, ((((l_583 && g_96) | g_323) < g_615) < ((((l_676 , (safe_sub_func_uint16_t_u_u((255UL | (safe_add_func_int16_t_s_s((g_491 >= ((safe_add_func_int8_t_s_s(g_323, g_51)) <= g_304)), l_2))), g_204))) & g_293) <= 0L) | l_583))));
        }
    }
    else
    {
        int16_t l_688 = 0x5CAAL;
        int32_t l_695 = 0x79697BE9L;
        uint32_t l_754 = 6UL;
        uint16_t l_850 = 65527UL;
        if ((0x47F2B78BL & ((safe_lshift_func_int8_t_s_s(((safe_rshift_func_int8_t_s_s((l_8 && (!(l_688 , ((((l_8 ^ (safe_sub_func_int16_t_s_s((0x83A8L && g_390), (((safe_add_func_uint8_t_u_u((l_688 <= ((g_59 < ((safe_add_func_int16_t_s_s((l_688 ^ 0x03L), g_389)) != 0x4299L)) & g_90)), g_580)) & g_253) || 0x18L)))) ^ 0x3C98L) , g_323) , g_59)))), g_202)) != l_2), g_90)) <= l_688)))
        {
            int32_t l_719 = (-1L);
            if ((l_688 == l_695))
            {
                --g_697;
            }
            else
            {
                int16_t l_707 = 0L;
                int8_t l_718 = 1L;
                int32_t l_748 = 0xB80AF941L;
                int32_t l_769 = 0L;
                g_382 = 0xB30765A5L;
                g_382 = ((+((safe_sub_func_uint32_t_u_u(((safe_lshift_func_int8_t_s_u(l_8, (safe_rshift_func_int8_t_s_s((l_707 , (((((safe_lshift_func_int8_t_s_u(l_2, 5)) ^ (-1L)) && ((g_160 > ((((safe_rshift_func_int8_t_s_s(((((g_395 != (safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s((((-1L) >= (l_718 < ((l_688 < g_390) , g_580))) >= l_718), g_580)), 0x74ED5640L))) || l_8) , g_510) , l_719), 6)) , 0x8CL) != 0xBDL) , g_388)) >= 0UL)) != 0xE1FBEB08L) > 0x77L)), 7)))) ^ g_615), l_688)) || l_718)) < g_355);
                g_382 &= g_204;
                if (((safe_mod_func_int16_t_s_s(((((safe_rshift_func_uint8_t_u_u((((0x4B60L && l_718) ^ (safe_mod_func_int32_t_s_s(g_160, (safe_rshift_func_uint8_t_u_s((l_2 , 5UL), 4))))) == (g_580 , ((g_159 < ((safe_add_func_uint8_t_u_u((safe_add_func_int32_t_s_s(((((-10L) > ((safe_lshift_func_int16_t_s_s((g_580 || l_707), l_719)) == g_355)) ^ l_736) | 1UL), 0xCE98083FL)), g_737)) || g_253)) & g_7))), 3)) , g_510) && g_7) || g_160), l_736)) | 0x47A7L))
                {
                    int16_t l_738 = (-1L);
                    l_695 = ((l_719 != g_382) >= l_738);
                    for (g_390 = 0; (g_390 < 29); ++g_390)
                    {
                        int16_t l_741 = (-1L);
                        int32_t l_755 = 5L;
                        if (g_510)
                            break;
                        if (l_741)
                            break;
                        g_382 = ((((safe_lshift_func_int16_t_s_u(l_707, 6)) && (safe_lshift_func_uint8_t_u_u((l_738 & ((((g_394 , (((safe_add_func_uint16_t_u_u(((l_736 < 0x94L) == g_202), l_748)) ^ ((((safe_sub_func_int32_t_s_s(((safe_lshift_func_uint16_t_u_s(((g_389 & (safe_unary_minus_func_int8_t_s(0L))) & 65535UL), g_696)) || l_736), l_754)) & l_741) && g_111) == g_696)) >= g_159)) , 0x69B5330CL) >= 0xB8D68D9DL) , g_355)), g_395))) || 1UL) != l_754);
                        l_755 = l_718;
                    }
                    g_382 = (((safe_mod_func_int8_t_s_s((l_695 < (((safe_rshift_func_int8_t_s_u((g_510 <= (((g_615 != ((4294967290UL <= (safe_mod_func_int32_t_s_s((safe_unary_minus_func_int32_t_s((-3L))), (g_253 ^ (safe_mod_func_uint32_t_u_u((7L && (((safe_add_func_uint16_t_u_u(((2UL <= (l_748 != g_159)) > 4294967295UL), g_111)) != l_2) ^ g_395)), l_736)))))) , l_688)) & 0x24E8L) && 0xDFD2L)), l_8)) != g_388) || 0x04L)), 0xE1L)) || 0xD78DBAA0L) & 1L);
                }
                else
                {
                    for (g_696 = 0; (g_696 <= 13); g_696++)
                    {
                        return g_382;
                    }
                    l_769 = l_748;
                }
            }
        }
        else
        {
            uint16_t l_774 = 0xA6CFL;
            uint16_t l_784 = 0xC37AL;
            int32_t l_894 = 0L;
            int32_t l_923 = 1L;
            if (((((g_390 == (safe_add_func_uint16_t_u_u(l_695, (0x710CD6EBL & l_688)))) || ((safe_lshift_func_uint8_t_u_s((l_774 ^ (((!l_8) <= (g_510 >= g_394)) < (g_202 || l_754))), g_202)) == 7UL)) == g_510) | g_391))
            {
                int32_t l_778 = 0xF84A0A23L;
                uint32_t l_819 = 0x88D5B3A1L;
                int32_t l_830 = 0x455FB4FCL;
                l_778 = ((l_688 , ((safe_mod_func_int32_t_s_s(1L, g_90)) && (l_774 < (g_253 <= (((l_778 && (safe_add_func_int8_t_s_s((g_111 == (l_2 , (65535UL | g_7))), l_781))) != 0x41FEL) > g_160))))) > g_491);
                if (l_754)
                    goto lbl_787;
lbl_787:
                ++l_784;
                if (g_203)
                {
                    uint32_t l_805 = 0x87F6EF56L;
                    uint8_t l_806 = 0UL;
                    uint32_t l_849 = 18446744073709551611UL;
                    if ((((safe_mod_func_int16_t_s_s((!(safe_sub_func_uint8_t_u_u((l_774 | (safe_mod_func_uint8_t_u_u(g_394, (safe_rshift_func_int8_t_s_u(g_388, 1))))), (((g_202 ^ l_778) != ((safe_unary_minus_func_uint8_t_u(((safe_lshift_func_int8_t_s_s((g_696 || (~(safe_add_func_int32_t_s_s(g_202, l_754)))), (safe_lshift_func_int8_t_s_u(g_160, g_783)))) , g_160))) , l_774)) ^ 0xABL)))), l_774)) , l_805) > 0xD5L))
                    {
                        int16_t l_807 = (-1L);
                        l_8 ^= (((l_806 || 0x07ACL) == l_807) , (((((safe_rshift_func_uint8_t_u_u(((safe_add_func_int16_t_s_s(0xECCEL, (+l_806))) < 1L), 7)) > (l_2 || (((safe_unary_minus_func_uint32_t_u(g_395)) & (l_774 | l_805)) & 0UL))) , 65535UL) > 0x2353L) , g_382));
                        g_737 ^= (l_754 >= (safe_sub_func_int32_t_s_s(g_697, g_159)));
                        l_8 = (((0x20BCL > (l_781 != (((+l_688) == 0UL) , (((safe_mod_func_uint8_t_u_u((l_2 > l_819), (safe_sub_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_u((((g_304 ^ (safe_rshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((l_8 == (safe_lshift_func_uint16_t_u_u(l_819, l_774))), 7)), 2))) && l_688) >= g_293), g_373)), g_696)))) <= l_830) && l_805)))) && 0xFB09L) == l_830);
                    }
                    else
                    {
                        int32_t l_844 = 0xBC910BC7L;
                        l_830 = (safe_lshift_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(((((((((0x5BL <= g_390) >= ((safe_lshift_func_int16_t_s_u(l_819, (safe_sub_func_int32_t_s_s((l_688 , (((((((+((safe_mod_func_int32_t_s_s(l_8, (safe_lshift_func_int8_t_s_s(((l_844 || ((((((0xCE0703CAL <= (safe_rshift_func_int8_t_s_s(l_844, (((safe_rshift_func_int8_t_s_u(g_304, g_510)) ^ l_8) == l_806)))) || l_8) != 0x5BAE4D30L) > g_202) == g_510) , 0x5FL)) && 4294967292UL), l_849)))) & g_59)) , 0x1CA4A4E6L) ^ 1L) >= l_830) <= g_111) || l_850) < 0x9486CDA0L)), g_510)))) && 255UL)) >= l_781) , 250UL) , g_59) <= l_851) && l_695) == l_781), g_304)), 4));
                        l_844 = (((safe_lshift_func_int16_t_s_u(((((((g_510 , 9L) & (safe_sub_func_int8_t_s_s(0L, ((((safe_add_func_uint16_t_u_u(((safe_sub_func_uint8_t_u_u(((safe_mod_func_uint16_t_u_u(((+((safe_add_func_int16_t_s_s(((((9L || (((safe_lshift_func_int8_t_s_s((safe_unary_minus_func_int8_t_s((safe_lshift_func_uint8_t_u_u((g_373 >= ((safe_mod_func_uint8_t_u_u((((1UL < ((safe_add_func_uint8_t_u_u(0x23L, (safe_mod_func_uint16_t_u_u((((((0x1D95L || (safe_rshift_func_uint8_t_u_u(l_688, g_159))) , g_373) < g_783) | g_293) , g_783), 0x958DL)))) && 0L)) == l_774) != g_390), l_754)) | g_253)), g_783)))), l_806)) == 1L) , l_695)) | l_850) || g_615) <= 0xBB5068E5L), g_355)) != g_159)) , g_388), 65527UL)) , g_737), 0x06L)) ^ 0L), l_851)) == l_774) < l_850) == 9L)))) || 0x9EL) | g_203) , g_373) ^ g_7), 7)) >= g_159) & 1UL);
                        l_894 |= (l_849 < (((((~(((0x5CAFC114L | (0L && (((safe_mod_func_int16_t_s_s((g_373 > g_491), (safe_rshift_func_int8_t_s_s(0xD6L, (safe_rshift_func_int16_t_s_u(((safe_unary_minus_func_int32_t_s((safe_lshift_func_uint16_t_u_u(g_203, ((g_395 != (safe_rshift_func_uint16_t_u_s((safe_lshift_func_int16_t_s_u(g_580, 12)), g_737))) > l_844))))) & l_806), l_844)))))) >= 255UL) <= g_373))) && 0UL) > l_819)) != l_844) <= g_203) != g_159) || g_293));
                    }
                    return g_293;
                }
                else
                {
                    return l_695;
                }
            }
            else
            {
                uint16_t l_911 = 0xA5F3L;
                uint8_t l_922 = 255UL;
                g_382 &= (((!(safe_sub_func_int16_t_s_s(l_2, (((((safe_rshift_func_int8_t_s_s((((((safe_rshift_func_int8_t_s_u((((g_391 != ((g_204 < ((safe_mod_func_int8_t_s_s(((safe_rshift_func_int16_t_s_s(((~(safe_add_func_uint16_t_u_u(((((safe_sub_func_int16_t_s_s((((l_911 >= 65529UL) , ((safe_lshift_func_uint16_t_u_u(l_894, (((safe_rshift_func_int16_t_s_u(((safe_sub_func_int16_t_s_s(g_7, (~(+((((((!l_851) < (((g_59 && g_696) || (-1L)) != l_851)) && l_921) ^ l_784) & 0UL) || l_8))))) == g_737), 2)) | g_388) , g_304))) != g_203)) && 1UL), l_894)) <= g_390) , l_911) < l_911), 0xFA72L))) & g_389), 7)) != l_688), g_783)) >= g_204)) | l_922)) == 3L) | g_253), g_160)) > 0x1CL) , l_923) ^ l_922) != l_911), g_696)) != g_390) && g_737) | 0xD8L) >= g_388)))) & l_921) , (-4L));
            }
        }
        --g_924;
        g_382 = (((g_924 == (0x727493DAL & (((safe_rshift_func_uint16_t_u_s(((l_695 && ((g_304 || ((((+l_688) >= ((((~(!g_782)) , l_2) && l_688) & (safe_add_func_uint32_t_u_u(((g_510 , 0xC61DL) ^ g_390), 1L)))) <= l_695) > g_293)) , 0xA58668E9L)) & g_90), 14)) | l_2) > l_754))) | 255UL) != l_2);
        for (g_51 = 0; (g_51 >= 29); g_51 = safe_add_func_uint8_t_u_u(g_51, 1))
        {
            uint32_t l_939 = 4294967295UL;
            l_939 = (~((l_754 | (safe_sub_func_uint16_t_u_u(l_8, 0x6C68L))) ^ (g_7 , g_615)));
            return g_940;
        }
    }
    l_953 = (g_389 | (((safe_rshift_func_uint16_t_u_u(((l_943 <= (safe_lshift_func_uint16_t_u_u(g_159, ((((!g_159) > ((((safe_rshift_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((l_851 || (g_253 , ((g_390 == l_8) != ((l_921 || g_491) < g_90)))), 0xB4L)), l_8)) <= g_111) , g_389) < 248UL)) ^ 0x927D9FCDL) || l_851)))) , 65527UL), 10)) != g_388) ^ l_781));
    return l_921;
}
inline static uint16_t func_9(uint32_t p_10, int8_t p_11)
{
    uint32_t l_17 = 4294967287UL;
    for (p_11 = 13; (p_11 < (-27)); p_11 = safe_sub_func_uint16_t_u_u(p_11, 3))
    {
        uint32_t l_16 = 4294967295UL;
        uint32_t l_328 = 0x00A65A28L;
        l_17 = (safe_sub_func_uint8_t_u_u((((g_7 & (g_7 == 0UL)) >= g_7) , (4294967288UL || l_16)), (0x1EL < 255UL)));
        g_580 = (safe_rshift_func_int16_t_s_s(((func_20(func_26((safe_add_func_uint8_t_u_u((!(safe_sub_func_uint16_t_u_u((func_34(func_40(l_16, (!(safe_sub_func_uint32_t_u_u((1L == (func_46(l_16) ^ p_11)), (safe_sub_func_uint8_t_u_u(0x4BL, (((safe_add_func_int8_t_s_s(((((safe_sub_func_uint8_t_u_u(((((safe_add_func_int16_t_s_s(g_159, (g_51 & 1L))) <= g_7) < g_159) | p_11), p_11)) <= l_16) & g_203) < 5L), (-1L))) , p_11) & 3L))))))), g_51, l_16, l_328, p_10) < g_203), g_203))), g_391)), l_17), l_17, p_10, p_11, l_16) , (-3L)) == l_17), 3));
    }
    return p_10;
}
inline static uint32_t func_20(uint32_t p_21, int16_t p_22, uint16_t p_23, int8_t p_24, int8_t p_25)
{
    int8_t l_556 = 0x09L;
    uint16_t l_575 = 0UL;
    int16_t l_576 = 0xD329L;
    uint16_t l_577 = 65535UL;
    uint16_t l_578 = 1UL;
    int32_t l_579 = 0x6B1E962DL;
    l_579 = ((((((safe_lshift_func_int8_t_s_s((((safe_mod_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_u((!(safe_add_func_uint8_t_u_u((p_23 , (p_25 == (((p_23 & l_556) && ((((safe_lshift_func_int16_t_s_u((((safe_lshift_func_int16_t_s_s(p_25, l_556)) , (((safe_mod_func_int8_t_s_s((((safe_rshift_func_uint16_t_u_s((((g_96 == (safe_rshift_func_int16_t_s_u(((safe_add_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((((((safe_sub_func_uint32_t_u_u(((safe_rshift_func_int16_t_s_u(((l_556 == l_575) < g_159), g_160)) && g_355), (-10L))) != l_576) | l_556) | g_304) & p_24), l_577)), l_577)) && 5L), 0))) <= l_575) < 0x8CL), g_96)) && 0xC4L) , p_24), (-4L))) >= 4294967290UL) | g_395)) < l_575), p_24)) != 0x65L) , p_25) == p_24)) , 9UL))), 0L))), 11)), 7)) || p_23), 252UL)) || 0UL) || g_7), 1)) ^ 0x89L) | g_389) >= p_22) <= g_323) | l_578);
    return l_575;
}
inline static uint32_t func_26(uint32_t p_27, int16_t p_28)
{
    int16_t l_533 = 0x090FL;
    uint8_t l_544 = 0UL;
    g_382 = (safe_lshift_func_uint16_t_u_s((safe_lshift_func_int16_t_s_s((((l_533 , (((((safe_lshift_func_uint16_t_u_u(p_28, l_533)) | (((0xF9E9E735L == (((l_533 | (safe_rshift_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_s(((safe_add_func_uint32_t_u_u((((safe_add_func_uint8_t_u_u((l_544 , p_28), (((0x86B1L >= ((g_204 | 4294967295UL) | (-2L))) && 4294967287UL) || (-4L)))) , 251UL) < 0x11L), l_544)) <= g_323), 7)) || 0L), 5))) <= p_28) >= l_533)) ^ 5L) , 0x4C69L)) != l_544) >= g_96) , 255UL)) , g_59) & l_533), p_27)), p_28));
    return p_28;
}
inline static uint32_t func_34(int32_t p_35, int16_t p_36, int8_t p_37, int8_t p_38, int8_t p_39)
{
    uint32_t l_329 = 18446744073709551607UL;
    uint32_t l_439 = 0x025E17D8L;
    int32_t l_445 = (-1L);
    if (l_329)
    {
        int16_t l_352 = 4L;
        int8_t l_381 = 0x15L;
        int32_t l_383 = 0x047791FEL;
        int32_t l_384 = 0x2ED9ACA4L;
        int32_t l_385 = 7L;
        int32_t l_386 = 0xCB8E0561L;
        int32_t l_392 = 6L;
        for (p_39 = 0; (p_39 == (-2)); p_39 = safe_sub_func_uint8_t_u_u(p_39, 4))
        {
            int8_t l_353 = 1L;
            int32_t l_387 = 9L;
            int32_t l_393 = (-2L);
            for (g_159 = 0; (g_159 < 19); g_159 = safe_add_func_int8_t_s_s(g_159, 7))
            {
                int32_t l_354 = 0x0823372CL;
                g_355 = ((g_59 || (safe_unary_minus_func_int32_t_s(((safe_add_func_uint8_t_u_u((((safe_mod_func_int8_t_s_s(((((65535UL > ((9L >= ((!((safe_rshift_func_int8_t_s_s((((safe_mod_func_int16_t_s_s((safe_sub_func_int16_t_s_s((safe_sub_func_int32_t_s_s(((safe_lshift_func_int8_t_s_s((l_329 & (safe_lshift_func_uint8_t_u_u(g_96, 4))), ((p_36 , (l_352 <= p_39)) >= l_329))) , 1L), 0x7FE76519L)), 0xCFCCL)), l_353)) > p_35) == 0xB6L), g_96)) >= l_352)) == l_354)) & 0x702CL)) | g_159) & g_159) > g_204), p_35)) | g_293) > l_354), g_159)) <= 0xA1L)))) <= 65535UL);
                for (g_160 = 3; (g_160 == (-23)); g_160 = safe_sub_func_uint16_t_u_u(g_160, 8))
                {
                    int32_t l_361 = 0x252909BAL;
                    g_373 |= ((((0L <= l_353) && (((!((safe_lshift_func_uint16_t_u_u(((l_361 ^ (safe_lshift_func_uint16_t_u_s((safe_sub_func_uint32_t_u_u((~((l_352 && (safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint16_t_u_u(g_159, 14)), p_36))) <= (g_96 == (0xC6B0L || (g_323 , 2L))))), p_39)), l_353))) >= 0x5E27L), p_39)) , g_111)) < p_37) , 0x1491AB50L)) == p_36) == l_353);
                    if (l_353)
                        break;
                }
            }
            g_382 = (((0x6BL > ((safe_lshift_func_uint8_t_u_u(0UL, 7)) > ((safe_lshift_func_int16_t_s_u(((g_323 ^ 0x6643L) && 0xFE907973L), 4)) | 0UL))) , ((l_353 != (~((0L & ((safe_lshift_func_int8_t_s_s((l_352 > g_304), l_381)) <= l_353)) | 65535UL))) , l_329)) < l_381);
            if (p_35)
                break;
            g_395++;
        }
    }
    else
    {
        uint8_t l_416 = 0x04L;
        int32_t l_417 = 0x235E0E7BL;
        uint32_t l_474 = 18446744073709551611UL;
        int32_t l_475 = 0x0FEE4B1FL;
        l_417 |= (safe_mod_func_int32_t_s_s((((safe_rshift_func_int8_t_s_u(((safe_lshift_func_uint16_t_u_u((0x79L > ((safe_mod_func_uint8_t_u_u((((((safe_sub_func_int32_t_s_s(((safe_sub_func_uint8_t_u_u(((65529UL & (((p_35 < (((l_329 | (p_39 & l_329)) >= (p_35 || (safe_unary_minus_func_int16_t_s((~(((safe_add_func_int8_t_s_s(g_323, ((((safe_add_func_int8_t_s_s(((p_38 == 9L) ^ (-8L)), g_394)) ^ 4294967294UL) , g_111) , 1UL))) >= p_39) <= 0x6EA8F3C2L)))))) && 0x57L)) || p_37) || 0x4BA6F3B4L)) , 0UL), 3L)) > g_204), 0x2CACBC3AL)) == (-1L)) | 0x0C5AL) <= 0x17CFA881L) & g_391), g_7)) > g_202)), g_202)) , l_329), g_304)) < 0L) | l_416), 6L));
        for (g_204 = 10; (g_204 >= 9); g_204--)
        {
            int32_t l_444 = 7L;
            int32_t l_493 = 2L;
            for (p_36 = 0; (p_36 <= 28); p_36 = safe_add_func_uint16_t_u_u(p_36, 1))
            {
                uint16_t l_424 = 1UL;
                l_445 = (((safe_lshift_func_int8_t_s_u((l_424 ^ ((((!(safe_lshift_func_uint8_t_u_s(0x85L, 1))) == ((((safe_mod_func_int8_t_s_s((safe_sub_func_int32_t_s_s(g_203, (safe_add_func_int8_t_s_s(((((+4UL) > (safe_sub_func_int16_t_s_s((((((safe_lshift_func_uint8_t_u_u((l_424 || ((((l_439 >= ((g_304 > (((l_329 && ((safe_lshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_s(l_424, 10)), 6)) >= 0L)) , l_417) > p_36)) , g_323)) , g_202) == 0L) || l_444)), 7)) <= 4294967295UL) > g_160) & g_203) & (-1L)), g_51))) & p_35) ^ g_51), p_36)))), p_37)) || p_36) , 254UL) && 0x24L)) , 0x592BL) != g_390)), 3)) ^ 65526UL) == 8UL);
            }
            for (g_90 = 14; (g_90 >= (-26)); g_90--)
            {
                uint16_t l_464 = 0x58F5L;
                p_35 = (safe_sub_func_uint32_t_u_u((safe_add_func_uint32_t_u_u(((safe_sub_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u(p_35, 4)), (p_39 == g_96))) != (g_7 ^ (g_382 | ((((((-1L) > (safe_sub_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_s(g_388, g_304)) == p_35), 0x1051L))) , l_416) <= (-1L)) <= 0xB6L) <= g_204)))), p_39)), g_90));
                l_475 &= (((safe_mod_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_s((g_7 , (l_464 < ((((safe_add_func_uint32_t_u_u(g_388, ((+p_39) > (safe_rshift_func_uint8_t_u_s((g_355 <= p_38), ((((((safe_rshift_func_int8_t_s_s(((((safe_sub_func_int32_t_s_s(l_474, g_389)) ^ 0x7AE78DEAL) >= 0x898CL) == l_444), g_59)) ^ p_35) < p_37) | 0x48B5L) ^ 0x0FL) <= p_38)))))) ^ 0x4AL) | l_445) | 0x3133L))), 14)) == l_464), l_417)) & g_388) == l_444);
                if (g_204)
                    break;
            }
            g_382 ^= 9L;
            if ((l_439 ^ l_475))
            {
                uint32_t l_492 = 0x5AA21F6FL;
                for (l_445 = 0; (l_445 > (-2)); l_445 = safe_sub_func_int16_t_s_s(l_445, 9))
                {
                    int32_t l_494 = (-6L);
                    l_493 &= (safe_sub_func_int32_t_s_s(((safe_rshift_func_uint16_t_u_s(g_7, ((safe_add_func_int32_t_s_s((safe_sub_func_int8_t_s_s((safe_add_func_uint32_t_u_u((((((+((g_51 > 0xE4L) , ((((((l_444 || (safe_lshift_func_uint16_t_u_u(((1L > l_439) != p_38), (l_439 || p_36)))) || 1UL) , p_37) | g_59) ^ p_39) < g_491))) != p_39) >= g_90) >= l_492) != l_329), l_474)), 1UL)), 0xE194D7DDL)) >= l_439))) ^ p_36), l_492));
                    return l_494;
                }
                if (l_492)
                    break;
                g_382 = ((safe_lshift_func_uint16_t_u_u(((l_416 <= ((g_391 == (p_36 , (6UL < ((((((safe_rshift_func_uint16_t_u_u((((safe_mod_func_uint32_t_u_u((((safe_sub_func_uint16_t_u_u(l_493, ((!g_395) ^ l_439))) > (safe_add_func_uint16_t_u_u((safe_add_func_int8_t_s_s(g_389, ((((safe_lshift_func_uint16_t_u_u((g_382 | g_391), l_475)) >= p_36) < 1L) || g_510))), l_492))) && p_39), 0x30F8F43FL)) || g_388) | l_445), 14)) > 8L) != 0xC35F6177L) || g_253) & 0x8CL) , p_36)))) == 0x303DL)) < l_492), 2)) != (-1L));
            }
            else
            {
                uint32_t l_518 = 0xD5C85C97L;
                uint32_t l_528 = 0xB90CB7C8L;
                p_35 = (safe_add_func_uint8_t_u_u((0xE92B18FBL >= (((((((((((p_36 ^ ((((safe_rshift_func_uint16_t_u_u(l_417, 11)) & g_7) , g_491) & ((safe_mod_func_int8_t_s_s((+l_518), (safe_mod_func_int32_t_s_s(((safe_mod_func_uint32_t_u_u(((safe_sub_func_uint32_t_u_u((9UL ^ (+g_304)), (safe_add_func_uint16_t_u_u((p_37 || p_37), 0x81EEL)))) , 0UL), 0x71EE9765L)) == l_518), l_518)))) < p_36))) <= g_390) , g_160) , 0x81L) == p_39) , g_293) | l_439) < l_493) == l_518) && 0x731BEFFFL) && p_37)), l_528));
                return p_37;
            }
        }
        g_382 |= g_59;
        return p_39;
    }
    return g_7;
}
static int32_t func_40(uint8_t p_41, uint16_t p_42)
{
    uint8_t l_311 = 252UL;
    int8_t l_322 = 2L;
    int32_t l_324 = 0L;
    g_304 ^= g_253;
    if (g_253)
        goto lbl_325;
    g_323 = (safe_lshift_func_uint16_t_u_u((((p_42 & ((safe_add_func_uint16_t_u_u(((((safe_sub_func_int16_t_s_s((l_311 >= 0x3E52E987L), ((((safe_lshift_func_int16_t_s_u(((((safe_unary_minus_func_int16_t_s(((~(safe_lshift_func_int8_t_s_s((4294967287UL >= ((safe_rshift_func_int16_t_s_s(((safe_sub_func_int16_t_s_s(1L, g_293)) | 1L), 1)) ^ g_304)), 0))) | p_42))) && g_111) >= l_311) && l_322), l_322)) > p_41) && 0x5135L) != l_311))) || 7L) > l_311) > 1L), 0UL)) , g_111)) < g_204) < 0L), 3));
lbl_325:
    l_324 ^= g_111;
    l_324 = (safe_rshift_func_uint8_t_u_u(g_204, 6));
    return p_42;
}
inline static int8_t func_46(uint16_t p_47)
{
    int32_t l_48 = 0x21F20595L;
    int32_t l_49 = 0x1E7FF518L;
    int32_t l_50 = 0x8F949145L;
    int32_t l_52 = 0xF32F520AL;
    int32_t l_53 = 0x060A3B7DL;
    int32_t l_54 = 0x5F6B4AB1L;
    int32_t l_55 = 0x0BB265D6L;
    int32_t l_56 = 0x9C1D55E0L;
    int32_t l_57 = 0x4122E7DFL;
    int32_t l_58 = 0x942FAFECL;
    g_59--;
    l_57 = 0x0B545435L;
    g_253 ^= (safe_add_func_uint8_t_u_u(func_64((func_69((g_59 == g_59), g_7, g_59, l_58) != (((p_47 && (safe_sub_func_uint8_t_u_u(255UL, (((g_90 >= g_7) & 0x3421460DL) && 0xB4L)))) , l_48) && 1L)), l_57, p_47, p_47), (-10L)));
    for (g_90 = 0; (g_90 < 2); g_90 = safe_add_func_int8_t_s_s(g_90, 6))
    {
        int8_t l_267 = 9L;
        int32_t l_275 = 0x9E250035L;
        int32_t l_289 = 0x3201CB5AL;
        int32_t l_290 = 0xC927E87AL;
        int32_t l_292 = 0xAFBF6932L;
        l_275 = (~((safe_mod_func_uint8_t_u_u(((1L < (safe_mod_func_uint16_t_u_u((((safe_add_func_uint32_t_u_u(((safe_add_func_uint32_t_u_u(((((safe_add_func_uint16_t_u_u(g_204, ((l_267 > (((((safe_add_func_int8_t_s_s((((g_51 ^ 0x93C2L) < (-1L)) && g_90), (safe_mod_func_uint8_t_u_u((((((safe_lshift_func_int16_t_s_s(0x1778L, (+(p_47 >= p_47)))) , p_47) >= p_47) > (-1L)) == p_47), g_253)))) & p_47) >= 0x03L) < g_204) & g_111)) || 255UL))) == 0x8721L) , p_47) < g_111), g_111)) < 1L), p_47)) != p_47) || g_111), l_53))) | 0xA3F0311DL), g_90)) > 3L));
        l_275 = ((0x760C5D1EL >= 0xDD82FEA0L) | (((((g_253 <= g_7) != (safe_mod_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((safe_sub_func_int16_t_s_s((safe_add_func_int16_t_s_s(g_202, (safe_sub_func_uint16_t_u_u(((g_51 ^ g_204) < (g_96 > (l_275 , 0UL))), p_47)))), g_7)), 4)), 255UL))) , g_7) && p_47) & g_159));
        for (g_202 = (-14); (g_202 <= 24); g_202 = safe_add_func_uint32_t_u_u(g_202, 9))
        {
            int32_t l_288 = 0x5407581BL;
            int32_t l_291 = (-1L);
            l_275 = g_203;
            g_293++;
        }
    }
    return l_56;
}
inline static uint8_t func_64(uint32_t p_65, uint16_t p_66, uint16_t p_67, uint16_t p_68)
{
    uint16_t l_220 = 0x60D6L;
    uint16_t l_252 = 65535UL;
    l_220 = (safe_sub_func_int32_t_s_s((safe_unary_minus_func_int8_t_s(0x5BL)), ((safe_sub_func_uint32_t_u_u(p_68, p_67)) == g_203)));
    l_252 = (safe_mod_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u(p_66, (g_202 , (safe_sub_func_int16_t_s_s((((safe_rshift_func_uint16_t_u_u(((l_220 & ((((((((safe_add_func_uint32_t_u_u((safe_add_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((safe_add_func_int32_t_s_s(((safe_lshift_func_int8_t_s_s((p_66 , (safe_add_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((((safe_sub_func_int32_t_s_s(p_68, ((!(safe_lshift_func_int8_t_s_s(0x61L, (((~0x2751L) <= ((~((safe_lshift_func_int8_t_s_u(((((4UL == (0x6245L == p_66)) != g_111) == l_220) > l_220), 7)) | l_220)) , 0x1AF41016L)) < l_220)))) == l_220))) >= g_203) ^ g_90), p_68)), p_66))), 2)) | g_204), 0x4B0E1CB3L)), 2)), p_66)), l_220)) < p_66) && 0x802CFFAFL) != 0x3839C749L) >= l_220) >= g_59) || g_203) ^ 5L)) <= g_111), 14)) != g_160) > 0x05L), 65529UL))))), 7L));
    return g_160;
}
static uint32_t func_69(uint32_t p_70, int32_t p_71, int32_t p_72, uint32_t p_73)
{
    int32_t l_88 = 0xA37EAD94L;
    int32_t l_200 = 0x478C99DDL;
    int32_t l_201 = 0x10A9C07CL;
    if ((safe_sub_func_int32_t_s_s(g_59, func_76(((((safe_lshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_s(((((safe_mod_func_uint32_t_u_u(l_88, p_72)) || l_88) <= (((l_88 == (+(0x019DL >= 0x01CFL))) > ((-10L) || 0x9D3FL)) , p_72)) , l_88), 7)), 7)) & g_59) | g_7) && 4294967295UL), p_73, g_59, p_73, g_7))))
    {
        uint32_t l_199 = 18446744073709551615UL;
        for (g_111 = 0; (g_111 != 20); g_111 = safe_add_func_uint32_t_u_u(g_111, 4))
        {
            int16_t l_184 = (-5L);
            l_200 |= (!((safe_lshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_s(p_73, (safe_sub_func_uint8_t_u_u((((safe_mod_func_int16_t_s_s((g_59 != 0L), ((safe_rshift_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(g_159, (safe_sub_func_uint32_t_u_u(0x2CE8EB29L, (safe_add_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s((l_184 > (safe_lshift_func_uint16_t_u_u(p_72, 5))), 5)), 12)), (((safe_add_func_uint8_t_u_u(((g_160 , ((safe_add_func_uint32_t_u_u((+(safe_unary_minus_func_int16_t_s(((safe_sub_func_uint32_t_u_u(((safe_sub_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((g_51 == l_199), p_70)), 0x56L)) ^ l_184), 6UL)) , p_73)))), p_73)) , l_88)) > g_90), 0x1CL)) ^ l_88) != l_184))))))), 6)) , g_96))) == g_51) , g_7), g_96)))), g_90)) > (-1L)));
        }
        g_202 = l_201;
    }
    else
    {
        uint32_t l_205 = 0x60A43F84L;
        l_205--;
    }
    l_200 = (((safe_lshift_func_int8_t_s_u(((~p_70) >= 0x5579L), 5)) >= l_88) <= g_51);
    for (p_70 = 9; (p_70 == 31); p_70++)
    {
        return g_159;
    }
    return l_200;
}
inline static uint32_t func_76(int16_t p_77, uint16_t p_78, int8_t p_79, int32_t p_80, uint8_t p_81)
{
    uint8_t l_91 = 9UL;
    int32_t l_94 = (-8L);
    int32_t l_95 = 0x1E0EF155L;
    uint16_t l_158 = 0x731BL;
    ++l_91;
    ++g_96;
    for (l_91 = (-27); (l_91 != 23); l_91 = safe_add_func_uint32_t_u_u(l_91, 5))
    {
        uint32_t l_101 = 0xCC5CA36BL;
        int32_t l_107 = (-1L);
        int32_t l_130 = 0x7DF3DEF6L;
        if (l_101)
            break;
        if (p_77)
        {
            if (g_7)
                break;
            return l_101;
        }
        else
        {
            int32_t l_106 = 0x5AE89E6DL;
            l_107 ^= ((safe_lshift_func_int8_t_s_u((safe_mod_func_int8_t_s_s(l_106, g_51)), 3)) | g_51);
            for (g_96 = 14; (g_96 == 32); g_96 = safe_add_func_uint32_t_u_u(g_96, 9))
            {
                int32_t l_110 = 1L;
                int32_t l_131 = 0L;
                g_111 = l_110;
                l_131 = (safe_mod_func_uint32_t_u_u(((l_106 != 7L) <= ((((safe_rshift_func_uint16_t_u_s(0x1AD8L, ((p_77 >= ((safe_rshift_func_uint16_t_u_u((((p_77 < ((safe_add_func_uint8_t_u_u(9UL, (safe_mod_func_uint8_t_u_u(((((0L || (safe_add_func_uint8_t_u_u(((((safe_sub_func_uint32_t_u_u(((safe_sub_func_uint32_t_u_u(0x77BDFF10L, ((safe_rshift_func_int8_t_s_s(((-3L) ^ g_111), p_79)) > 0x7A8BL))) <= g_96), g_111)) , l_106) <= 255UL) ^ (-9L)), p_81))) == 0x4CL) != 2L) & g_96), g_59)))) == l_110)) , 0UL) ^ l_101), p_77)) , 0x4FBAEB33L)) >= p_77))) == l_106) , p_77) > 0x4174L)), l_130));
                l_107 = (g_111 <= (l_110 >= g_111));
                g_160 = (((safe_sub_func_int8_t_s_s(((((((safe_add_func_int32_t_s_s((-1L), ((safe_rshift_func_uint8_t_u_u((((safe_sub_func_uint8_t_u_u(0xB1L, ((p_78 > ((((safe_lshift_func_uint16_t_u_u((g_59 && (safe_mod_func_int16_t_s_s((safe_add_func_int32_t_s_s(((safe_lshift_func_int16_t_s_u((g_111 ^ ((((safe_sub_func_int8_t_s_s((g_51 == (safe_lshift_func_int8_t_s_s(((p_80 , (safe_rshift_func_int16_t_s_u(((((safe_lshift_func_uint16_t_u_s(p_79, 1)) != (((safe_mod_func_uint16_t_u_u(0x7F25L, l_94)) >= g_7) && l_158)) | p_78) != 0x46L), g_111))) & g_7), g_59))), g_7)) >= p_81) < p_77) , 0xBDL)), g_90)) || g_7), g_90)), g_96))), 3)) == p_77) <= 1L) > 9UL)) == p_81))) < 0x97L) == (-8L)), 1)) , g_111))) >= g_159) , l_130) , l_95) | (-4L)) | l_106), 1UL)) != 5L) | 0xAF98DCA0L);
            }
        }
    }
    return g_51;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_7;
    csmith_sink_ = g_51;
    csmith_sink_ = g_59;
    csmith_sink_ = g_90;
    csmith_sink_ = g_96;
    csmith_sink_ = g_111;
    csmith_sink_ = g_159;
    csmith_sink_ = g_160;
    csmith_sink_ = g_202;
    csmith_sink_ = g_203;
    csmith_sink_ = g_204;
    csmith_sink_ = g_253;
    csmith_sink_ = g_293;
    csmith_sink_ = g_304;
    csmith_sink_ = g_323;
    csmith_sink_ = g_355;
    csmith_sink_ = g_373;
    csmith_sink_ = g_382;
    csmith_sink_ = g_388;
    csmith_sink_ = g_389;
    csmith_sink_ = g_390;
    csmith_sink_ = g_391;
    csmith_sink_ = g_394;
    csmith_sink_ = g_395;
    csmith_sink_ = g_491;
    csmith_sink_ = g_510;
    csmith_sink_ = g_580;
    csmith_sink_ = g_615;
    csmith_sink_ = g_696;
    csmith_sink_ = g_697;
    csmith_sink_ = g_737;
    csmith_sink_ = g_782;
    csmith_sink_ = g_783;
    csmith_sink_ = g_924;
    csmith_sink_ = g_940;
    platform_main_end(0,0);
    return 0;
}
