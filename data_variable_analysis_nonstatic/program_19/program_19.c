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
static uint32_t g_12 = 4294967291U;
static int8_t g_13 = 1;
static int32_t g_25 = 0x985589B5;
static int32_t g_41 = 0;
static uint32_t g_75 = 0x290900DD;
static int32_t g_77 = 1;
static uint32_t **g_78 = (void*)0;
static int8_t g_89 = 0xCC;
static int32_t *g_120 = &g_25;
static int32_t **g_119 = &g_120;
static uint8_t g_131 = 6U;
static uint16_t g_147 = 0xFEE3;
static int32_t g_169 = 0xC2C33A66;
static uint32_t g_197 = 4294967290U;
static int32_t ***g_230 = &g_119;
static int32_t ****g_229 = &g_230;
static int16_t g_233 = 0xD123;
static uint32_t ***g_248 = &g_78;
static uint32_t ***g_249 = &g_78;
static int32_t g_321 = 0;
static uint8_t g_423 = 6U;
static int32_t g_428 = 0xFBF26F05;
static uint32_t ****g_508 = &g_249;
static uint32_t *****g_507 = &g_508;
static int16_t g_575 = (-1);
static uint16_t g_613 = 0x4DB0;
static uint16_t g_614 = 4U;
static uint32_t g_615 = 0x4F12A3BD;
static uint32_t g_667 = 1U;
static int32_t *g_712 = &g_169;
static int16_t *g_808 = &g_575;
static int16_t **g_807 = &g_808;
static uint16_t g_857 = 1U;
static uint16_t *g_887 = &g_857;
static uint16_t **g_886 = &g_887;
static int32_t *g_999 = &g_321;
static int32_t **g_998 = &g_999;
static int16_t g_1151 = (-2);
static uint32_t **g_1207 = (void*)0;
static int16_t **g_1225 = &g_808;
static int32_t g_1266 = (-3);
static int16_t g_1281 = 0x10C1;
static int32_t g_1294 = (-1);
static uint16_t func_1(void);
inline static int32_t * func_2(int32_t p_3, int32_t p_4, int8_t p_5, int32_t p_6);
inline static int32_t * func_14(int32_t * p_15);
static int32_t * func_16(int32_t * p_17, int32_t * p_18, int8_t p_19, int32_t * p_20);
static int32_t * func_21(int32_t * p_22, int32_t p_23);
static int8_t func_28(uint32_t p_29);
static int16_t func_32(int32_t * p_33, int16_t p_34, int16_t p_35);
static int32_t * func_42(uint32_t p_43, int32_t * p_44, uint32_t p_45, int8_t p_46, int32_t p_47);
inline static int32_t * func_48(uint32_t p_49, uint8_t p_50);
static uint32_t func_56(int16_t p_57, int32_t p_58, int32_t p_59, uint32_t p_60);
static uint16_t func_1(void)
{
    uint32_t l_11 = 0x72226312;
    int32_t *l_24 = &g_25;
    int32_t *l_427 = &g_428;
    int16_t *l_1267 = &g_233;
    int32_t ****l_1284 = (void*)0;
    int32_t ****l_1285 = (void*)0;
    int32_t ***l_1287 = (void*)0;
    int32_t ****l_1286 = &l_1287;
    int8_t l_1293 = (-2);
    uint32_t l_1295 = 0U;
    int32_t l_1296 = 0x9052BB73;
    l_24 = func_2((safe_lshift_func_uint16_t_u_s(((g_12 = l_11) ^ ((*l_1267) = ((((g_13 == 4294967295U) , func_14(func_16(((***g_229) = ((l_11 , 0x934B0B4E) , func_21(l_24, ((*l_427) = (g_321 = (safe_mod_func_uint32_t_u_u(((func_28((safe_div_func_uint16_t_u_u(0U, func_32(l_24, ((*l_24) > g_13), g_25)))) > g_197) >= g_131), l_11))))))), l_427, g_423, l_427))) != l_24) < g_1266))), g_1266)), g_1266, g_1266, l_11);
    (**g_230) = (((safe_rshift_func_uint8_t_u_s(0xBD, 7)) || (((safe_sub_func_int32_t_s_s((safe_div_func_int16_t_s_s((safe_mod_func_int16_t_s_s(l_11, ((safe_mul_func_uint16_t_u_u(3U, (+g_1281))) , ((*g_887) = (safe_div_func_int32_t_s_s(((*g_229) == ((*l_1286) = (*g_229))), (~((safe_rshift_func_int8_t_s_s((1 >= (safe_rshift_func_int16_t_s_u(((void*)0 != &g_998), (**g_886)))), 5)) , l_1293)))))))), g_1294)), l_1295)) , g_667) != g_321)) , (**g_230));
    return l_1296;
}
inline static int32_t * func_2(int32_t p_3, int32_t p_4, int8_t p_5, int32_t p_6)
{
    uint16_t ***l_1268 = &g_886;
    uint16_t ****l_1269 = &l_1268;
    (*l_1269) = l_1268;
    return (***g_229);
}
inline static int32_t * func_14(int32_t * p_15)
{
    uint32_t l_548 = 4294967295U;
    uint32_t l_571 = 1U;
    int16_t *l_572 = &g_233;
    uint16_t l_573 = 5U;
    int16_t *l_574 = &g_575;
    uint16_t *l_588 = &l_573;
    int32_t l_591 = 0xDAB08D28;
    int32_t *l_592 = &g_428;
    uint16_t l_839 = 65527U;
    int8_t l_867 = (-6);
    int32_t ****l_952 = &g_230;
    uint8_t *l_986 = &g_423;
    uint8_t *l_987 = &g_131;
    uint32_t *l_997 = &l_571;
    uint32_t l_1016 = 0x46C1D31B;
    uint32_t l_1152 = 9U;
    int32_t *l_1155 = &g_41;
    uint16_t ***l_1219 = &g_886;
    (*g_119) = (((((*l_574) = (safe_div_func_int8_t_s_s(l_548, (safe_rshift_func_uint8_t_u_s(((safe_add_func_uint8_t_u_u((((safe_div_func_uint8_t_u_u(l_548, ((safe_mul_func_uint8_t_u_u(l_548, (safe_lshift_func_int16_t_s_s(0x7F95, 15)))) && 0x2F67))) == ((*l_572) = (safe_mul_func_int16_t_s_s((0x6011 == ((safe_mod_func_uint16_t_u_u((l_548 , (safe_mod_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(((((g_131 != (safe_mod_func_uint32_t_u_u(((safe_rshift_func_uint8_t_u_u(247U, 3)) ^ l_548), l_571))) == 0) , 0U) , (*p_15)), (***g_230))), l_571))), l_548)) || (*g_120))), 0x139D)))) ^ 4294967288U), l_573)) <= l_573), 5))))) ^ 0U) <= 0x869D) , (void*)0);
    for (l_573 = 29; (l_573 < 38); ++l_573)
    {
        uint32_t l_578 = 0xB842AC23;
        int32_t l_579 = 0x2A935E3F;
        l_579 = (((((*p_15) , l_578) < ((l_578 <= 0) | l_548)) != l_578) , (g_147 || (g_75 <= (l_579 & l_579))));
    }
    if ((safe_mul_func_uint16_t_u_u((((safe_add_func_int32_t_s_s(((g_147 == (safe_lshift_func_int16_t_s_u(((safe_add_func_uint16_t_u_u(g_75, ((*l_588) = 0x54FD))) == (safe_sub_func_int16_t_s_s(0x060B, (l_591 = l_548)))), 1))) < (65535U && 0xF0F9)), (&g_131 != (((*l_592) = 0x23A28045) , &g_131)))) | l_571) , l_571), 65527U)))
    {
        uint32_t *l_607 = &g_197;
        int32_t l_610 = 0x88D1CBDA;
        int32_t l_618 = (-1);
        int32_t ****l_655 = &g_230;
        int16_t **l_672 = &l_572;
        uint16_t l_687 = 65529U;
        uint16_t **l_709 = &l_588;
        uint8_t *l_760 = (void*)0;
        int8_t l_809 = 0x86;
        int32_t **l_821 = &l_592;
        uint32_t ****l_831 = &g_248;
        uint8_t l_841 = 0U;
        for (g_25 = 0; (g_25 != 28); g_25++)
        {
            uint16_t l_611 = 0xA76D;
            uint32_t *l_612 = &l_571;
            int32_t *****l_616 = (void*)0;
            int32_t *****l_617 = &g_229;
            uint16_t l_626 = 0x9801;
            int8_t l_669 = (-1);
        }
        for (g_169 = 0; (g_169 >= (-21)); g_169 = safe_sub_func_uint32_t_u_u(g_169, 4))
        {
            int32_t l_679 = (-4);
            uint8_t *l_690 = &g_131;
            int32_t *l_691 = &l_610;
            (*l_691) = (l_573 <= (safe_mul_func_uint8_t_u_u(g_233, (safe_add_func_uint16_t_u_u(l_573, (l_679 < ((((safe_add_func_int8_t_s_s((((((safe_mul_func_int8_t_s_s((safe_lshift_func_int16_t_s_u((((safe_unary_minus_func_int8_t_s(0x1E)) != g_89) ^ ((l_687 < ((*p_15) = ((safe_lshift_func_uint8_t_u_u((((g_147 & ((*l_690) = g_75)) > g_147) | 0x153B), 7)) >= l_571))) ^ l_679)), 9)), g_575)) != 1) , 0x27) > g_77) ^ l_548), l_618)) ^ 252U) & l_610) | l_618)))))));
        }
        if ((safe_sub_func_uint16_t_u_u(((l_618 <= l_571) , 0x1FBF), (safe_mul_func_int16_t_s_s(g_75, (+((((safe_mul_func_int8_t_s_s(g_233, ((0x0BE0A8AA != (((~((~g_197) ^ (1U >= ((safe_mul_func_int16_t_s_s((safe_mod_func_int16_t_s_s((((((safe_lshift_func_int16_t_s_s(g_77, 9)) <= 0x0DB643D5) || 0U) == g_575) & 0xDB), l_591)), g_89)) , g_131)))) | l_610) && g_41)) < g_613))) || l_591) , (*p_15)) ^ l_571)))))))
        {
            int8_t *l_731 = (void*)0;
            int8_t *l_732 = &g_13;
            int8_t *l_733 = (void*)0;
            int8_t *l_734 = &g_89;
            int32_t l_739 = 1;
            g_712 = ((***l_655) = p_15);
            (***g_229) = ((((safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((safe_add_func_int8_t_s_s(g_423, (l_571 <= (****l_655)))), 13)), 0)) || ((((safe_mod_func_uint16_t_u_u((safe_add_func_int8_t_s_s(((((safe_div_func_int16_t_s_s(((safe_sub_func_int32_t_s_s((safe_add_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(((((*l_734) = ((*l_732) = ((-1) == g_575))) ^ (safe_sub_func_int8_t_s_s((((****l_655) == (safe_rshift_func_uint16_t_u_s(0x9EE2, 9))) <= (&g_230 == ((****l_655) , &g_230))), l_739))) <= l_739), g_147)), 1U)), (*p_15))) >= (-6)), 0xAA72)) > l_739) >= l_571) , l_739), 0x52)), 0x9068)) ^ (****l_655)) >= 1) & g_575)) == l_739) , (***g_229));
            return p_15;
        }
        else
        {
            uint16_t l_747 = 65535U;
            uint8_t *l_759 = &g_423;
            uint32_t l_781 = 0x9B014385;
            uint32_t ***l_805 = &g_78;
            int32_t l_810 = (-10);
            int16_t **l_825 = &l_572;
            int32_t *l_828 = (void*)0;
            int16_t l_840 = 3;
            int32_t *l_842 = &g_77;
            int8_t *l_858 = &g_89;
            int8_t *l_868 = &l_867;
            for (g_89 = (-26); (g_89 != 15); g_89++)
            {
                uint32_t l_764 = 0xA0D642B2;
                uint16_t **l_776 = &l_588;
                int16_t **l_792 = &l_574;
                if ((safe_add_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(((*l_572) = l_548), 3)), (!(0x28 > l_747)))))
                {
                    uint32_t l_748 = 0x7CA8EC19;
                    int32_t **l_771 = &g_120;
                    int8_t *l_782 = &g_13;
                    (*g_712) = l_748;
                    (*g_712) = ((*p_15) = ((g_13 = (safe_sub_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(((&l_672 == ((((safe_add_func_int16_t_s_s(((safe_mod_func_int8_t_s_s(((l_759 != l_760) < g_613), 1)) , 0x3AFD), 0x1F03)) <= ((safe_mod_func_int16_t_s_s(((safe_unary_minus_func_uint32_t_u(((l_764 | (g_147 != g_13)) != l_748))) > l_747), l_748)) , l_747)) & l_748) , (void*)0)) <= l_764), l_764)), g_321)), 0x08))) , (*g_712)));
                    (*g_119) = func_48(((safe_lshift_func_uint8_t_u_u((safe_div_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(((*l_782) = (((((l_771 = (**g_229)) == (**g_229)) >= (((safe_lshift_func_int16_t_s_s(((((*l_572) = (l_776 == l_709)) && l_748) >= (l_760 != &g_423)), 6)) & (g_131 = (((safe_sub_func_int32_t_s_s(((0xA2 < (safe_div_func_int32_t_s_s(((*p_15) = (*p_15)), l_571))) > g_615), l_747)) & 0x1694FD9A) > g_615))) > 0x2F9845E6)) , l_781) < l_747)), 0x9B)), l_571)), g_89)) , l_764), l_573);
                    (*g_712) = ((safe_mul_func_int16_t_s_s(((safe_div_func_int16_t_s_s((l_747 || g_89), 1U)) < ((*l_759) = (****l_655))), ((*l_574) = (g_613 < (safe_div_func_int16_t_s_s((((*l_607) = (****l_655)) <= (l_760 != (void*)0)), g_25)))))) != (****l_655));
                }
                else
                {
                    uint8_t l_789 = 2U;
                    int32_t **l_793 = (void*)0;
                    int32_t **l_794 = &l_592;
                    int8_t *l_795 = &g_13;
                    int32_t *l_824 = (void*)0;
                    (*p_15) = ((l_789 ^ ((((*p_15) <= (safe_lshift_func_uint8_t_u_s(((1U | ((void*)0 != l_792)) == (((((*l_574) = ((&g_321 == ((*l_794) = func_48(l_789, (l_591 != (*p_15))))) ^ 0x19)) == 0x1F48) >= 1U) & g_613)), g_197))) & l_571) || l_789)) & l_591);
                    if ((((*l_795) = l_764) != (safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_u((l_810 = (safe_mod_func_uint16_t_u_u((((*l_588) = (safe_rshift_func_uint16_t_u_u((l_809 = (((safe_unary_minus_func_uint32_t_u((((((**g_507) = l_805) != (void*)0) != (*p_15)) <= (((safe_unary_minus_func_uint8_t_u(((*l_759) = ((g_807 = g_807) != (void*)0)))) , ((l_764 , l_764) && 0)) < l_789)))) != 255U) >= l_789)), 6))) || 0x5FFD), (*g_808)))), 2)), 6))))
                    {
                        return p_15;
                    }
                    else
                    {
                        uint16_t l_820 = 2U;
                        int32_t **l_822 = &l_592;
                        int32_t ***l_823 = &l_821;
                        (*g_119) = func_48((safe_unary_minus_func_uint16_t_u((9 <= ((safe_mul_func_int16_t_s_s((g_615 | (((*l_759) = (safe_mul_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_u((safe_add_func_uint32_t_u_u((0xDBBF && ((((l_820 > (((*l_823) = (l_822 = l_821)) != &l_592)) , (l_764 <= ((l_789 & (l_820 >= l_591)) > (*g_808)))) , l_789) , 65533U)), (*p_15))), 8)) & l_789), l_820))) || g_233)), 0xB299)) < g_41)))), l_764);
                        (***g_229) = l_824;
                    }
                    (*p_15) = ((l_792 != l_825) , (safe_mul_func_uint16_t_u_u(l_789, 65534U)));
                    l_828 = ((***l_655) = func_21((***l_655), g_321));
                }
            }
            (*l_842) = ((((safe_mul_func_int8_t_s_s((((void*)0 != l_831) & 0x2E), (g_423 = (safe_sub_func_uint32_t_u_u(((safe_rshift_func_uint8_t_u_s(((g_613 = (((void*)0 == &g_229) > (((((l_573 , g_615) > ((((!(0x9417D865 ^ (((*g_712) = (((*p_15) = ((safe_mod_func_uint32_t_u_u(((9 > l_839) , 2U), l_840)) || l_571)) != l_571)) ^ l_809))) && l_841) ^ (-10)) < g_89)) == l_548) != 0xD3) | g_428))) > (*g_808)), g_197)) < l_571), l_747))))) || (**g_807)) && (*g_808)) <= 65535U);
            (*g_712) = (((*l_588) = (!(*l_842))) != (safe_rshift_func_uint8_t_u_s((safe_sub_func_int8_t_s_s((safe_add_func_int8_t_s_s(((((*l_868) = (safe_div_func_int16_t_s_s((safe_sub_func_int8_t_s_s((safe_unary_minus_func_int32_t_s((*p_15))), ((l_839 && (safe_rshift_func_uint16_t_u_s(l_548, 9))) & (((6 || ((l_591 = g_857) | ((*l_858) = l_841))) | (safe_lshift_func_int16_t_s_u(((safe_sub_func_int8_t_s_s((l_548 >= ((safe_mod_func_int8_t_s_s(((5U < l_867) != (*l_842)), g_13)) == l_867)), 0x97)) >= (*l_842)), g_428))) >= (**g_807))))), (-6)))) >= g_613) != 6U), l_839)), (*l_842))), 6)));
        }
    }
    else
    {
        uint32_t l_869 = 0xE427F4D5;
        uint8_t *l_876 = &g_131;
        int32_t l_903 = 0x93B9F63C;
        int32_t l_904 = 0x3B484452;
        int32_t *****l_933 = (void*)0;
        int32_t l_938 = 0x930F560C;
        uint32_t ****l_939 = (void*)0;
        uint16_t **l_960 = &g_887;
        uint16_t l_966 = 0x1E98;
        uint8_t l_969 = 0U;
        if (l_869)
        {
            int16_t *l_877 = &g_575;
            int8_t *l_878 = &g_89;
            int32_t l_881 = 0;
            (*p_15) = (safe_mul_func_int8_t_s_s((g_75 != (0x92 ^ g_13)), (safe_mul_func_uint8_t_u_u(0U, ((*l_878) = ((safe_mul_func_int8_t_s_s(g_423, (((l_876 = &g_131) == ((l_591 ^ ((l_867 , ((*g_807) = (*g_807))) != l_877)) , &g_131)) & g_131))) >= 0x1A6E6F95))))));
            if ((*p_15))
            {
                (*g_712) = (safe_mul_func_int8_t_s_s(g_428, l_881));
                (***g_229) = (*g_119);
                for (g_857 = 0; (g_857 <= 32); g_857 = safe_add_func_int8_t_s_s(g_857, 6))
                {
                    for (g_147 = 0; (g_147 < 59); g_147 = safe_add_func_uint32_t_u_u(g_147, 1))
                    {
                        uint16_t ***l_888 = &g_886;
                        (*l_888) = g_886;
                        return p_15;
                    }
                }
            }
            else
            {
                uint32_t l_902 = 4294967288U;
                l_904 = ((*g_712) = (safe_add_func_int32_t_s_s((0xDF < ((((*p_15) = (safe_mul_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((((((*g_808) = (safe_lshift_func_int16_t_s_u((((safe_lshift_func_uint8_t_u_s(0U, 0)) >= l_867) <= 0x2194), ((l_903 = (safe_mod_func_int16_t_s_s((((*p_15) , g_41) & ((!l_902) == (((*l_876) = l_881) >= (0xA6963455 == 0x7472D0E3)))), (*g_887)))) || 0x5E)))) && (*g_887)) , l_902) | 4294967287U), l_839)), l_869))) , 0x955C9B4D) > 0x49FE2B46)), l_902)));
                return (*g_119);
            }
            (**g_230) = p_15;
            return (*g_119);
        }
        else
        {
            int32_t ****l_920 = &g_230;
            int32_t l_922 = 2;
            int8_t l_964 = (-3);
            int32_t l_980 = 1;
            int32_t l_981 = 1;
            if ((safe_add_func_uint32_t_u_u(l_573, 0xEE59684A)))
            {
                uint32_t l_919 = 1U;
                int32_t *****l_921 = &l_920;
                uint8_t l_923 = 1U;
                int32_t *l_924 = &l_903;
                uint32_t ****l_940 = &g_248;
                for (g_614 = 0; (g_614 != 48); g_614 = safe_add_func_uint8_t_u_u(g_614, 4))
                {
                    (***g_229) = (***g_229);
                }
                (*p_15) = (safe_div_func_int16_t_s_s((*g_808), (*g_808)));
                p_15 = ((((4294967295U ^ 0x85D1173F) | (safe_add_func_uint32_t_u_u((((safe_add_func_int16_t_s_s((*g_808), (safe_mod_func_uint8_t_u_u(l_869, (((((safe_mod_func_int32_t_s_s(0x2B79D30D, ((l_919 , (*p_15)) , ((((*l_921) = l_920) == &g_230) , l_903)))) & 1U) > l_922) & (**g_886)) , l_869))))) | l_922) , l_923), l_903))) || 8) , l_924);
                (*l_924) = ((safe_mul_func_int8_t_s_s((((*g_712) || (!((((*l_876) = (l_548 >= (safe_rshift_func_uint16_t_u_u(((**g_886) = 0x5BB5), (((safe_mul_func_uint16_t_u_u(6U, (((+g_667) | (((void*)0 == l_933) , (((safe_mul_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(l_867, (((((*g_712) = (l_938 & 0x7A56)) <= 6U) ^ g_89) , 0x55087ADE))), (**g_807))) , &g_423) != (void*)0))) <= g_25))) , l_939) == l_940))))) || (*l_924)) == (*p_15)))) , 2), (*l_924))) & l_591);
            }
            else
            {
                uint32_t l_950 = 1U;
                uint32_t l_957 = 1U;
                uint32_t *l_963 = &g_615;
                uint32_t l_965 = 0x7E02ACC9;
                l_904 = (~(safe_mod_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(((l_950 && (!((l_952 != &g_230) , ((l_964 = (((*l_963) = ((safe_mod_func_uint16_t_u_u(((&g_230 != &g_230) & ((safe_sub_func_int16_t_s_s((l_957 , (((((safe_mul_func_int16_t_s_s(((l_960 != ((safe_sub_func_uint16_t_u_u(l_922, (((*l_588) = l_957) ^ (**g_807)))) , &g_887)) ^ (*p_15)), l_950)) & 1) == 4294967295U) <= g_77) | 3)), (**g_807))) , l_957)), (**g_807))) || 0x39)) , 1U)) | l_965)))) , 4294967288U), l_957)), g_25)), l_950)) > l_966), 0xB26D)));
                (*g_712) = ((safe_sub_func_int32_t_s_s(l_869, l_969)) <= ((**g_886) | (safe_mul_func_int16_t_s_s(((((((safe_div_func_int8_t_s_s((-1), l_957)) > ((((safe_add_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(((*l_588) = (**g_886)), l_950)), 0xE7)) && (safe_sub_func_uint16_t_u_u((*g_887), l_980))) == 0U) < 2)) == 0U) | (*p_15)) == 1U) >= l_950), l_981))));
            }
        }
    }
    if (((((*l_997) = (((safe_add_func_uint16_t_u_u((((*g_887) = ((safe_mul_func_uint8_t_u_u(((*l_986) = g_233), (((*l_987) = g_667) , 0U))) != (&g_887 == (l_571 , &g_887)))) || ((safe_sub_func_int32_t_s_s((safe_mul_func_uint16_t_u_u((&g_615 == (void*)0), (safe_mod_func_uint16_t_u_u(((((!(safe_sub_func_int8_t_s_s(g_89, l_548))) | 0x48B536A7) , l_591) || g_75), 0xC879)))), l_591)) >= l_867)), 0)) > 0x195E) & l_839)) , g_998) == &g_999))
    {
        uint8_t l_1000 = 0U;
        int32_t **l_1007 = &g_999;
        int32_t l_1053 = 1;
        int32_t *****l_1054 = &l_952;
        int32_t l_1071 = 0x41F9F7A9;
        int8_t *l_1077 = &g_89;
        int8_t l_1150 = 1;
        uint32_t *****l_1192 = (void*)0;
        uint32_t **l_1206 = (void*)0;
        int32_t l_1236 = 8;
        int16_t l_1241 = (-1);
        int32_t ***l_1246 = &l_1007;
        int16_t **l_1247 = &l_574;
        if (l_1000)
        {
            int32_t ***l_1008 = &l_1007;
            int32_t l_1011 = 1;
            int32_t l_1051 = 0x18BFE896;
            uint32_t ****l_1063 = &g_248;
            int16_t ***l_1096 = &g_807;
            if ((g_428 && ((5U < ((((*g_712) = ((((safe_rshift_func_uint16_t_u_s((safe_div_func_int32_t_s_s(l_1000, (l_1000 , 0x89D32B67))), 5)) > (((((*l_1008) = l_1007) == (void*)0) , (*g_712)) & ((((safe_mod_func_int8_t_s_s((65526U != 0xDCC1), l_1011)) | 0xE1) & l_1011) && 0U))) >= (-9)) & (*g_808))) == l_1000) >= l_1011)) != l_1011)))
            {
                int8_t l_1027 = 0xE8;
                uint32_t l_1038 = 0x52D98043;
                for (g_13 = 4; (g_13 > 12); g_13 = safe_add_func_uint32_t_u_u(g_13, 6))
                {
                    uint8_t l_1036 = 0x19;
                    int32_t l_1037 = 0xA8E7BE43;
                }
                l_1054 = (void*)0;
            }
            else
            {
                int32_t l_1060 = 0xBEF04FE4;
                (**g_230) = (void*)0;
                (*g_712) = (safe_div_func_uint32_t_u_u((l_1051 && (!0x6DBE5769)), ((*l_997) = l_1060)));
                for (g_169 = (-1); (g_169 > 26); g_169 = safe_add_func_uint8_t_u_u(g_169, 3))
                {
                    (**g_230) = (void*)0;
                }
                (*g_507) = l_1063;
            }
            for (l_867 = 0; (l_867 > (-4)); l_867--)
            {
                int32_t l_1066 = 0xB9A5AA14;
                int8_t l_1076 = 0x93;
                int32_t **l_1113 = (void*)0;
                int8_t l_1117 = 1;
                int16_t l_1118 = 2;
                int32_t *****l_1119 = &g_229;
                uint32_t *****l_1120 = &l_1063;
                l_1066 = ((((l_1066 , (((((((*g_887) , (0xC0AE ^ (safe_div_func_uint8_t_u_u((((safe_div_func_uint16_t_u_u((*g_887), (g_613 , ((*g_808) = l_1071)))) | (safe_mod_func_int32_t_s_s(l_1011, l_1066))) > ((((*l_588) = (safe_sub_func_int32_t_s_s(l_1066, l_1051))) < l_1066) , l_1011)), (-1))))) & 0x7417D4E1) >= g_613) & 65535U) <= l_1076) && g_321)) , 1U) , &g_89) != l_1077);
                if (l_1066)
                {
                    int16_t l_1082 = 0x13FB;
                    uint16_t **l_1093 = &l_588;
                    (*g_712) = 1;
                    (*g_712) = (safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_u((l_1082 , (safe_lshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_s((&g_615 != &g_615), 12)), g_667))), g_857)), (((-7) | ((l_1051 & (safe_mod_func_uint32_t_u_u((((((safe_sub_func_int16_t_s_s(0x8874, (safe_div_func_uint16_t_u_u(((*l_588) = (((*l_574) = (l_1093 == (void*)0)) & l_1011)), l_1011)))) == 0x4587FF6B) < l_1082) , (*g_712)) > (*g_712)), l_1066))) == l_1082)) , g_575)));
                    for (g_423 = 0; (g_423 >= 38); ++g_423)
                    {
                        int16_t ****l_1097 = &l_1096;
                        (*g_712) = l_1076;
                        (*l_1097) = l_1096;
                    }
                    (**g_230) = (**g_230);
                }
                else
                {
                    int32_t *l_1098 = &l_591;
                    int32_t l_1106 = 0x5015A888;
                    l_1098 = (***g_229);
                    for (l_1076 = (-20); (l_1076 < (-29)); --l_1076)
                    {
                        uint8_t l_1105 = 3U;
                        int32_t l_1114 = 0xBF0FF08D;
                        int32_t *l_1115 = &l_591;
                        int16_t l_1116 = 1;
                        (***g_229) = (***g_229);
                        if (l_1051)
                            continue;
                        g_507 = (((((safe_mul_func_int16_t_s_s(((safe_mod_func_uint16_t_u_u(((l_1105 = (**g_807)) >= ((((l_1106 , (**g_807)) && ((safe_mul_func_uint8_t_u_u((&g_615 != (((safe_mod_func_uint8_t_u_u((((*g_999) = (safe_sub_func_uint16_t_u_u((((((l_1076 != (((((*l_1115) = ((*g_712) = ((((((void*)0 != l_1113) || (((l_1114 , l_1066) ^ l_1066) || 0x62)) <= l_1071) <= (-8)) < l_1011))) | l_1051) , l_1116) || (-1))) < l_1066) , (**g_886)) , (*g_808)) && l_1117), (**g_886)))) , 0xEA), g_25)) , (-1)) , l_1098)), 247U)) == l_1076)) != l_1118) ^ 0x5F)), 0xCA0C)) < l_1051), (**g_807))) , l_1119) != &g_229) , l_1051) , l_1120);
                        (*l_1115) = (safe_mod_func_uint8_t_u_u((*l_1115), (safe_sub_func_uint8_t_u_u(g_41, 253U))));
                    }
                    (***l_952) = (*g_119);
                    return (*g_119);
                }
            }
            (*g_712) = l_1011;
        }
        else
        {
            uint32_t **l_1147 = (void*)0;
            uint32_t *l_1149 = &g_615;
            uint32_t **l_1148 = &l_1149;
            int32_t l_1153 = 0xA7DEBCE3;
            uint16_t *l_1154 = &g_857;
            int32_t l_1181 = (-1);
            uint8_t l_1197 = 2U;
            int32_t ***l_1226 = &g_119;
            if (((safe_div_func_uint8_t_u_u((safe_div_func_uint8_t_u_u((safe_add_func_int8_t_s_s((((**g_886) & (((-4) && (((**g_886) <= (4294967295U != ((((((*g_712) == ((safe_rshift_func_uint8_t_u_u((~l_867), 7)) ^ (safe_sub_func_uint32_t_u_u(((safe_mul_func_uint8_t_u_u(((((((safe_rshift_func_int16_t_s_s(((((safe_sub_func_uint16_t_u_u((safe_add_func_int8_t_s_s(((((safe_unary_minus_func_uint8_t_u((((((*l_1148) = l_997) == l_592) , ((*l_588) = l_571)) | (**g_807)))) , l_1150) , g_1151) , 0x60), l_1152)), l_1153)) && l_1153) > 1U) >= 0x77), l_1016)) , l_1154) != &l_839) < l_591) , (*g_249)) == (void*)0), l_1000)) ^ (**g_886)), 0x8A28A8C8)))) < g_428) | g_75) > 0x3094) == 0x79))) > l_1153)) , l_1071)) , l_1153), 0x22)), 0x89)), (-1))) | l_1153))
            {
                (***l_952) = (**g_230);
                p_15 = ((*g_119) = func_21(((***g_229) = l_1155), (~g_321)));
                return (***l_952);
            }
            else
            {
                int32_t l_1182 = 0x889A0245;
                uint32_t *****l_1191 = &g_508;
                int16_t l_1193 = 0;
                int32_t *l_1208 = &l_1053;
                int16_t **l_1224 = &l_572;
                for (g_1151 = 0; (g_1151 > 23); ++g_1151)
                {
                    uint32_t l_1169 = 0xABEB7AF0;
                    int8_t l_1190 = 0xA3;
                    int32_t l_1194 = 0;
                    if ((*g_712))
                    {
                        uint32_t l_1172 = 4294967287U;
                        int32_t l_1183 = 0x949A19C7;
                        l_1183 = (safe_mod_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(((((safe_rshift_func_uint16_t_u_s((((safe_lshift_func_uint8_t_u_s((safe_add_func_int8_t_s_s(l_1169, (safe_sub_func_int32_t_s_s((l_1153 = l_1172), l_1169)))), 1)) != ((**g_886) = (safe_add_func_int16_t_s_s(0xE159, (safe_add_func_int16_t_s_s((safe_sub_func_int16_t_s_s((((safe_lshift_func_uint8_t_u_u(255U, l_1172)) >= ((g_169 == l_1181) , ((l_1182 & (-3)) & l_1169))) != 0), l_1169)), l_1169)))))) , l_1169), 1)) & (**g_807)) == l_1169) ^ 0U), l_1182)), 0x0ECA));
                        (*g_712) = 0xC21679C5;
                        (****l_1054) = (**g_230);
                        (*g_712) = l_1182;
                    }
                    else
                    {
                        (*l_1155) = (((safe_mod_func_uint8_t_u_u(((safe_div_func_int8_t_s_s((((**g_886) = ((((safe_rshift_func_uint16_t_u_s(((-1) >= l_1190), (**g_807))) || (&g_807 == (void*)0)) > 1) , ((l_1191 = &g_508) != l_1192))) || (*g_887)), l_1181)) >= g_131), g_75)) < l_1181) & l_1193);
                        if (l_1153)
                            break;
                        l_1194 = (*g_712);
                    }
                    return (***g_229);
                }
                (**g_230) = l_1208;
                for (g_667 = 0; (g_667 > 42); g_667 = safe_add_func_uint16_t_u_u(g_667, 7))
                {
                    uint16_t l_1211 = 0x7B5F;
                    uint32_t ****l_1216 = &g_249;
                    (**l_1054) = ((((l_1211 == (((((*l_1208) = (((*l_997) = (((((safe_div_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u(((void*)0 == l_1216), ((*g_120) && ((void*)0 != l_1219)))), (safe_rshift_func_uint8_t_u_u(((((((((((*g_712) = ((*l_1208) > (safe_mul_func_uint16_t_u_u(((***g_230) | (*l_1208)), 0x224F)))) > 0) != (*l_1155)) , (void*)0) == (void*)0) && 0U) >= (****l_952)) == (*****l_1054)) | (****g_229)), 1)))) >= (*g_887)) != 0x9FF3071A) , (*l_1216)) != (*l_1216))) | 0x25F36D9F)) != g_131) , l_1224) == g_1225)) & 0x5D1222B4) && l_1211) , l_1226);
                }
            }
            (***g_230) = ((((((*l_1007) = (void*)0) != &g_428) || (***l_1226)) | (&l_572 == ((((!((safe_mod_func_int16_t_s_s((safe_div_func_uint8_t_u_u((safe_add_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(l_1236, (safe_div_func_uint32_t_u_u(((((safe_lshift_func_int8_t_s_s(l_1241, ((safe_add_func_int16_t_s_s((**g_1225), (safe_add_func_uint16_t_u_u((*g_887), (((((*l_1155) , (**g_119)) , (*g_887)) , l_1246) == (void*)0))))) ^ (****l_952)))) ^ (*****l_1054)) || 0U) , (*****l_1054)), (***g_230))))), 0xF3)), (***l_1226))), (*****l_1054))) != 255U)) > (**g_886)) ^ (****l_952)) , l_1247))) , (*****l_1054));
            (***l_952) = func_48(((***l_1226) ^ (safe_add_func_uint8_t_u_u((*****l_1054), (safe_lshift_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((safe_div_func_uint8_t_u_u((((((**g_119) >= (**g_119)) | (****l_952)) | ((*l_1077) = (safe_rshift_func_int16_t_s_s(((*g_808) = (****l_952)), 6)))) && ((safe_mod_func_int16_t_s_s(((*g_808) = (((*l_1077) = ((*g_887) | (((*l_588) = (65535U || (((((safe_sub_func_uint16_t_u_u((*g_887), (****l_952))) == (****l_952)) , (*g_887)) > 65535U) ^ (*g_120)))) ^ (***l_1226)))) || (*l_1155))), (-1))) <= (-1))), (*****l_1054))), 15)), 8)), g_13)) < 1), (****l_952)))))), (***l_1226));
        }
        (**g_230) = (void*)0;
        return (***l_952);
    }
    else
    {
        return (*g_119);
    }
}
static int32_t * func_16(int32_t * p_17, int32_t * p_18, int8_t p_19, int32_t * p_20)
{
    int32_t *****l_537 = &g_229;
    uint32_t *l_541 = &g_75;
    uint32_t **l_540 = &l_541;
    uint32_t l_542 = 0x2B28E3F9;
    uint32_t *l_543 = &l_542;
    l_537 = l_537;
    (*****l_537) = (safe_rshift_func_uint8_t_u_u((((g_75 || 0xD7) > (((0xCA || (((*g_248) == l_540) & ((((*l_543) = l_542) | ((safe_add_func_uint8_t_u_u((*****l_537), g_89)) >= 0x14C7D381)) , (*****l_537)))) == 0x52) == (-1))) & p_19), 6));
    return (****l_537);
}
static int32_t * func_21(int32_t * p_22, int32_t p_23)
{
    uint16_t l_452 = 0x1086;
    int32_t l_453 = 0x82958C27;
    int32_t ****l_535 = (void*)0;
    int32_t *****l_536 = (void*)0;
    for (g_25 = 0; (g_25 <= (-2)); --g_25)
    {
        uint16_t *l_450 = &g_147;
        int32_t l_459 = 0xBDC5D14B;
        int32_t l_533 = 0x206E4477;
    }
    l_535 = l_535;
    (*g_119) = (*g_119);
    return p_22;
}
static int8_t func_28(uint32_t p_29)
{
    uint16_t l_426 = 1U;
    return l_426;
}
static int16_t func_32(int32_t * p_33, int16_t p_34, int16_t p_35)
{
    int32_t l_53 = 0xC5F93BE4;
    int16_t l_62 = 0xC3DC;
    int32_t **l_112 = (void*)0;
    int32_t *l_114 = &g_77;
    int32_t **l_113 = &l_114;
    uint32_t *l_124 = &g_75;
    uint32_t **l_123 = &l_124;
    int32_t l_125 = (-1);
    int32_t l_231 = 0xFB4805B9;
    int8_t l_287 = 0x58;
    uint32_t l_296 = 4294967291U;
    int32_t l_341 = 1;
    for (p_34 = (-7); (p_34 != 13); ++p_34)
    {
        uint32_t l_61 = 0x7DA828C0;
        for (g_25 = 0; (g_25 <= 22); ++g_25)
        {
            int32_t *l_40 = &g_41;
            int32_t **l_111 = &l_40;
            (*l_40) = ((void*)0 != p_33);
            (*l_111) = func_42(g_41, func_48(g_25, (safe_sub_func_int8_t_s_s((l_53 > (safe_rshift_func_uint16_t_u_s((g_41 , ((((g_41 ^ ((*p_33) <= g_25)) & (((((func_56(g_41, (g_13 , 1), (*p_33), p_34) , p_35) && l_61) > l_62) != l_61) >= 0x17005583)) , 1) , 0U)), p_35))), 0x2C))), l_61, g_13, p_35);
        }
        if (l_61)
            continue;
    }
    (*l_113) = &g_41;
    (*l_113) = (void*)0;
    for (l_53 = 0; (l_53 > (-12)); l_53 = safe_sub_func_int8_t_s_s(l_53, 2))
    {
        uint32_t *l_126 = &g_75;
        int32_t l_129 = (-3);
        uint8_t *l_130 = &g_131;
        int32_t ***l_132 = &l_112;
        int32_t l_149 = 0;
        int32_t l_195 = 1;
        int32_t ***l_210 = &l_113;
        uint32_t l_289 = 4294967295U;
        int16_t *l_315 = &l_62;
        uint16_t l_343 = 1U;
        uint16_t l_356 = 0U;
        uint32_t ****l_357 = &g_249;
        int32_t l_419 = (-5);
        int32_t *****l_425 = &g_229;
    }
    return g_147;
}
static int32_t * func_42(uint32_t p_43, int32_t * p_44, uint32_t p_45, int8_t p_46, int32_t p_47)
{
    int32_t **l_80 = (void*)0;
    int32_t *l_82 = (void*)0;
    int32_t **l_81 = &l_82;
    int8_t *l_85 = &g_13;
    int8_t *l_88 = &g_89;
    uint32_t *l_90 = (void*)0;
    uint32_t *l_91 = &g_75;
    uint32_t ***l_95 = &g_78;
    int32_t l_96 = 0xC79E06D3;
    (*l_81) = (void*)0;
    (*l_81) = func_48(p_45, (((safe_mod_func_uint16_t_u_u(((p_46 <= ((*l_85) = p_47)) < ((safe_rshift_func_int8_t_s_u(((*l_88) = g_25), 2)) || p_45)), 0x492B)) & ((*l_91) = p_47)) , ((safe_unary_minus_func_uint16_t_u((safe_add_func_int32_t_s_s((((void*)0 != l_95) && 0xF543), (-1))))) & l_96)));
    (*l_95) = g_78;
    (*p_44) = (((0U || 0x36BC8474) & 0xA864) && (safe_sub_func_int32_t_s_s((safe_sub_func_int8_t_s_s(0x9C, ((*l_88) = (safe_sub_func_int32_t_s_s((-1), (!((safe_div_func_int16_t_s_s((safe_mod_func_int8_t_s_s(g_89, (+(p_45 == (p_45 || (((safe_div_func_int16_t_s_s(p_45, 0xCF63)) <= (**l_81)) ^ p_47)))))), 0x0F83)) != g_89))))))), (*p_44))));
    return p_44;
}
inline static int32_t * func_48(uint32_t p_49, uint8_t p_50)
{
    int32_t *l_68 = (void*)0;
    int32_t **l_71 = (void*)0;
    int32_t *l_73 = &g_41;
    int32_t **l_72 = &l_73;
    uint32_t *l_74 = &g_75;
    int32_t *l_76 = &g_77;
    uint32_t ***l_79 = &g_78;
    (*l_76) = ((safe_rshift_func_int16_t_s_s((g_25 , (!(((p_50 = 0x5F) <= ((safe_mod_func_int32_t_s_s(0x39980A6F, (((l_68 != ((safe_mul_func_uint8_t_u_u(p_49, p_49)) , ((*l_72) = (void*)0))) , ((((*l_74) = 0xF1DB06D6) && (2U < g_41)) , 0x564F)) ^ g_41))) == (-1))) | p_49))), g_41)) , p_50);
    (*l_79) = g_78;
    return &g_77;
}
static uint32_t func_56(int16_t p_57, int32_t p_58, int32_t p_59, uint32_t p_60)
{
    return g_13;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    g_507 = 0;
    csmith_sink_ = g_12;
    csmith_sink_ = g_13;
    csmith_sink_ = g_25;
    csmith_sink_ = g_41;
    csmith_sink_ = g_75;
    csmith_sink_ = g_77;
    csmith_sink_ = g_89;
    csmith_sink_ = g_131;
    csmith_sink_ = g_147;
    csmith_sink_ = g_169;
    csmith_sink_ = g_197;
    csmith_sink_ = g_233;
    csmith_sink_ = g_321;
    csmith_sink_ = g_423;
    csmith_sink_ = g_428;
    csmith_sink_ = g_575;
    csmith_sink_ = g_613;
    csmith_sink_ = g_614;
    csmith_sink_ = g_615;
    csmith_sink_ = g_667;
    csmith_sink_ = g_857;
    csmith_sink_ = g_1151;
    csmith_sink_ = g_1266;
    csmith_sink_ = g_1281;
    csmith_sink_ = g_1294;
    platform_main_end(0,0);
    return 0;
}
