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
static uint32_t g_15 = 1UL;
static int32_t g_74 = 0x59018101L;
static int32_t *g_137 = &g_74;
static int32_t g_177 = 0x696208B9L;
static int32_t **g_210 = &g_137;
static int32_t ***g_209 = &g_210;
static int32_t *** const *g_208 = &g_209;
static const int8_t g_253 = 1L;
static uint16_t g_262 = 65526UL;
static const int32_t *g_269 = &g_177;
static const int8_t g_318 = 0L;
static int32_t g_326 = 5L;
static int32_t g_342 = 0x2F3691EAL;
static int32_t func_1(void);
static int64_t func_4(uint8_t p_5, int64_t p_6, int32_t p_7);
static int16_t func_18(int64_t p_19, uint32_t p_20, int16_t p_21, uint32_t p_22, int32_t p_23);
static uint16_t func_25(uint8_t p_26);
static int16_t func_30(int32_t p_31, int32_t p_32, uint32_t p_33, int32_t p_34);
inline static int64_t func_35(uint32_t p_36, int8_t p_37, uint32_t p_38, uint64_t p_39);
inline static int16_t func_44(uint8_t p_45, uint32_t p_46, uint8_t p_47);
inline static int32_t * const func_54(int64_t p_55, int32_t * p_56, uint32_t p_57, int32_t * p_58, uint32_t p_59);
inline static int32_t * func_63(uint32_t p_64);
static uint16_t func_77(const int32_t * p_78, uint32_t p_79, uint8_t p_80);
static int32_t func_1(void)
{
    uint64_t l_8 = 2UL;
    int32_t l_24 = 0L;
    int32_t *l_861 = (void*)0;
    int32_t **** const l_928 = &g_209;
    if ((0xA75C96DD1E1E87DFLL < ((safe_lshift_func_uint16_t_u_u((((func_4(l_8, (safe_lshift_func_int8_t_s_u((l_8 <= ((safe_rshift_func_uint8_t_u_u((0UL && (0x90C5L && (-1L))), 4)) < ((safe_mul_func_uint16_t_u_u(g_15, 0x4C92L)) | (safe_sub_func_int16_t_s_s((func_18(g_15, g_15, l_24, l_8, g_15) >= l_8), l_24))))), l_8)), g_15) && l_8) > l_8) == (-4L)), 8)) & l_24)))
    {
        int32_t *l_860 = &g_74;
        (*l_860) = (-1L);
    }
    else
    {
        uint16_t l_883 = 0x8C77L;
        int32_t ***l_923 = &g_210;
        (***g_208) = l_861;
        for (g_177 = 0; (g_177 > (-29)); g_177 = safe_sub_func_uint8_t_u_u(g_177, 7))
        {
            uint64_t l_871 = 1UL;
            const int32_t *l_874 = &g_326;
            const uint64_t l_888 = 0UL;
            uint32_t l_889 = 0UL;
            uint32_t l_931 = 0x336632F9L;
            for (g_15 = 0; (g_15 < 31); ++g_15)
            {
                if ((g_342 || (((g_262 != (((safe_mod_func_int64_t_s_s(g_177, (safe_add_func_uint32_t_u_u((+l_871), ((safe_lshift_func_uint8_t_u_u(((void*)0 == l_874), 6)) == (safe_rshift_func_int8_t_s_s(((((safe_sub_func_int8_t_s_s(((5L ^ g_318) && (*l_874)), g_253)) == g_15) >= 0UL) & g_318), g_318))))))) || 4294967295UL) > (*l_874))) & (-6L)) | g_342)))
                {
                    int32_t * const * const l_907 = (void*)0;
                    for (l_8 = 0; (l_8 <= 29); l_8 = safe_add_func_uint8_t_u_u(l_8, 9))
                    {
                        int32_t *l_890 = &g_74;
                        (*g_210) = (***g_208);
                        (*l_890) = ((((*l_874) & 0x3DL) > ((safe_rshift_func_int16_t_s_u(l_883, 14)) || (safe_mod_func_uint64_t_u_u(l_883, ((safe_sub_func_uint16_t_u_u((0xC0F3538AL && ((l_883 || 0x41C0L) | ((0L | (((((g_253 || g_15) ^ g_253) & g_342) <= l_888) | l_889)) | 0xA0L))), l_883)) || l_883))))) != (*l_874));
                        (*l_890) = (safe_mul_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s((safe_mul_func_uint8_t_u_u((l_890 != (**g_209)), (safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u(1UL, (safe_mul_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_u(8UL, 3)), ((*l_874) == ((*g_209) == l_907)))), 0x90L)))), 0)))), 14)), ((0UL ^ 0xFAEA7337421BEB7BLL) & l_883)));
                    }
                }
                else
                {
                    return l_24;
                }
                return (*l_874);
            }
            for (l_8 = 0; (l_8 <= 16); l_8 = safe_add_func_int8_t_s_s(l_8, 2))
            {
                uint64_t l_924 = 0UL;
                for (g_15 = (-28); (g_15 != 50); g_15 = safe_add_func_int8_t_s_s(g_15, 1))
                {
                    int32_t **l_918 = (void*)0;
                    int32_t *l_925 = &g_326;
                    (*l_925) = (safe_lshift_func_int8_t_s_s((((g_253 == (safe_sub_func_int64_t_s_s((safe_lshift_func_uint8_t_u_u(((void*)0 == l_918), 5)), ((((((safe_sub_func_uint32_t_u_u((safe_mul_func_int8_t_s_s((g_262 <= g_262), (*l_874))), ((void*)0 != l_923))) == (0xEEL && g_262)) < 0x3FL) | g_262) >= g_177) != g_74)))) > (*l_874)) > l_924), g_74));
                }
                for (l_889 = 0; (l_889 >= 16); l_889 = safe_add_func_uint32_t_u_u(l_889, 1))
                {
                    int32_t ****l_930 = &g_209;
                    int32_t *****l_929 = &l_930;
                    (*l_929) = l_928;
                }
                if (l_931)
                    continue;
            }
            (***l_928) = (void*)0;
        }
    }
    (***l_928) = (**g_209);
    return l_8;
}
static int64_t func_4(uint8_t p_5, int64_t p_6, int32_t p_7)
{
    int64_t l_854 = 0L;
    int32_t *l_856 = &g_177;
    for (g_177 = (-11); (g_177 > (-17)); g_177 = safe_sub_func_uint32_t_u_u(g_177, 8))
    {
        uint64_t l_853 = 1UL;
        int32_t l_859 = 0L;
        for (p_7 = 26; (p_7 <= (-21)); --p_7)
        {
            int32_t ****l_843 = &g_209;
            int32_t *****l_842 = &l_843;
            int8_t l_848 = 0xC0L;
            int32_t *l_855 = &g_326;
            l_854 = ((safe_mod_func_uint64_t_u_u((((((void*)0 != &g_208) != 0x06478B8BL) || 0UL) <= (((((safe_sub_func_int64_t_s_s((safe_add_func_uint64_t_u_u(((void*)0 == l_842), (safe_mod_func_int8_t_s_s((safe_mul_func_int8_t_s_s(l_848, (safe_lshift_func_uint8_t_u_u(p_5, (safe_mul_func_uint8_t_u_u((p_5 & p_5), 0x9FL)))))), 0x07L)))), g_253)) >= p_6) == 65535UL) <= 1UL) <= l_853)), 1UL)) ^ (-1L));
            (*l_855) = l_853;
            (***l_843) = (**g_209);
        }
        (*g_210) = l_856;
        for (p_7 = 0; (p_7 == (-8)); p_7--)
        {
            l_859 = (((void*)0 == &g_208) || p_5);
            if ((*l_856))
                break;
        }
    }
    return g_253;
}
static int16_t func_18(int64_t p_19, uint32_t p_20, int16_t p_21, uint32_t p_22, int32_t p_23)
{
    int32_t l_29 = 3L;
    int32_t l_51 = 0x5CB296ADL;
    int32_t l_733 = (-8L);
    int32_t *l_825 = &g_177;
    int32_t * const ****l_829 = (void*)0;
    (*l_825) = (func_25(((safe_mul_func_int8_t_s_s(((l_29 && (func_30(l_29, l_29, ((g_15 != func_35(((safe_rshift_func_int8_t_s_u(((((g_15 & 1L) && ((l_29 || ((((safe_mod_func_int16_t_s_s(func_44((l_29 < (safe_lshift_func_int16_t_s_s((!g_15), l_29))), l_29, l_51), 0x0A40L)) ^ 65535UL) && 4L) | 0x3EL)) == (-2L))) || g_318) >= p_23), 2)) && p_19), g_262, p_19, g_262)) == l_51), l_733) || l_733)) | g_253), 5UL)) && p_22)) > 0x418BL);
    (**g_209) = (*g_210);
    return g_15;
}
static uint16_t func_25(uint8_t p_26)
{
    uint32_t l_746 = 0x6FBF1BFBL;
    int32_t *l_747 = &g_326;
    int32_t *** const *l_750 = &g_209;
    uint32_t l_753 = 0UL;
    uint32_t l_775 = 18446744073709551614UL;
    (***g_208) = (**g_209);
    l_746 = 0xF3FC8E66L;
    if ((g_326 & (((*g_210) == l_747) < (0x7326L | ((safe_lshift_func_int16_t_s_u(g_15, ((((((p_26 & (((((void*)0 != l_750) ^ p_26) && 4UL) >= (*l_747))) > 0x58L) > p_26) ^ 0xBFA0L) && p_26) <= 0x09L))) || 0x1177L)))))
    {
        int32_t ****l_755 = &g_209;
        int16_t l_776 = 0x6BBEL;
        int32_t l_788 = 0L;
        (*l_747) = (safe_lshift_func_int8_t_s_u((l_753 & (!((l_755 != &g_209) & (+p_26)))), (safe_mul_func_int16_t_s_s(g_342, ((0x34D6L > (safe_mod_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u(g_253, g_177)), ((safe_mul_func_int8_t_s_s(((void*)0 == (*l_755)), 0xE7L)) ^ 0xC57D527129BBD25CLL)))) | 65529UL)))));
        (***l_755) = (***g_208);
        (*l_747) = ((safe_sub_func_int16_t_s_s((safe_unary_minus_func_uint32_t_u((~((~((safe_sub_func_uint16_t_u_u((safe_add_func_int16_t_s_s(2L, g_326)), (((g_15 <= (*l_747)) ^ g_74) && 0x3C5144DAL))) != (((safe_mul_func_int16_t_s_s(p_26, (0L ^ (4294967295UL | p_26)))) ^ 0UL) ^ (*l_747)))) && p_26)))), (*l_747))) < 255UL);
        l_788 = 1L;
    }
    else
    {
        int32_t **l_789 = &l_747;
        int32_t *** const *l_810 = &g_209;
        int32_t ****l_823 = &g_209;
        int32_t *****l_822 = &l_823;
        uint64_t l_824 = 0xFDFE501726925991LL;
        if (((**l_750) == l_789))
        {
            (*l_747) = ((void*)0 == &g_209);
        }
        else
        {
            uint64_t l_809 = 0UL;
            (*l_747) = (safe_add_func_uint8_t_u_u(((safe_unary_minus_func_int32_t_s((safe_mul_func_uint8_t_u_u(p_26, (safe_mod_func_uint64_t_u_u(((p_26 != ((void*)0 != &g_208)) >= (safe_rshift_func_int8_t_s_u(((safe_mul_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u((**l_789), ((g_253 || ((void*)0 != (**l_750))) & (0xF802DCEDD759CC1BLL != g_326)))) != l_809), 7)), 1)), 1L)) < 0x85L), p_26))), l_809)))))) == p_26), (-1L)));
        }
        (*l_789) = (***l_810);
        l_824 = (!(safe_mul_func_int8_t_s_s((((void*)0 != &g_209) >= (g_342 > ((-10L) && ((safe_mod_func_int16_t_s_s(((void*)0 != (**l_810)), p_26)) ^ (safe_add_func_uint32_t_u_u((((((safe_rshift_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((l_822 == &l_750), 0x9CA1L)), 5)) ^ 0x3AL) && p_26) >= g_326) || (-3L)), g_326)))))), 0xAEL)));
    }
    return p_26;
}
static int16_t func_30(int32_t p_31, int32_t p_32, uint32_t p_33, int32_t p_34)
{
    int32_t ***l_738 = (void*)0;
    uint32_t l_745 = 0UL;
    (*g_137) = ((safe_mul_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(p_32, 8)), g_253)) <= (l_738 != l_738));
    (***g_209) = ((g_253 > p_31) != (safe_add_func_int64_t_s_s((safe_mod_func_int32_t_s_s((((((-1L) == g_262) > (252UL < p_34)) <= (safe_sub_func_uint64_t_u_u(l_745, 0x3EC9178BEB2042D6LL))) > 0x9C85L), p_33)), 1L)));
    (***g_208) = (void*)0;
    return g_177;
}
inline static int64_t func_35(uint32_t p_36, int8_t p_37, uint32_t p_38, uint64_t p_39)
{
    uint8_t l_387 = 0xA3L;
    int32_t ***** const l_412 = (void*)0;
    int64_t l_487 = 0x4FE40A83970FA0D3LL;
    int32_t ****l_515 = &g_209;
    const int8_t l_522 = (-1L);
    uint16_t l_543 = 0x6A21L;
    int32_t *** const **l_651 = &g_208;
    if ((**g_210))
    {
        uint32_t l_388 = 0UL;
        const int32_t *l_440 = &g_177;
        int32_t ****l_474 = &g_209;
        int32_t *****l_473 = &l_474;
        int32_t *** const **l_477 = &g_208;
        int32_t * const l_503 = &g_74;
        int8_t l_506 = (-1L);
        int32_t l_544 = 0x40FF2E7EL;
        for (g_342 = 0; (g_342 >= (-2)); --g_342)
        {
            uint64_t l_379 = 0xDB34CF7A4B4D117CLL;
            int32_t l_413 = 0x61B3A266L;
            int32_t ***l_468 = &g_210;
            uint32_t l_470 = 0xA36D6B82L;
            int32_t ****l_472 = &l_468;
            int32_t *****l_471 = &l_472;
            if ((safe_sub_func_int8_t_s_s(((safe_sub_func_uint8_t_u_u(0UL, l_379)) && ((~65530UL) >= ((safe_sub_func_int8_t_s_s(((0UL > (((safe_rshift_func_int16_t_s_u(p_37, (p_38 <= (((((&g_208 != &g_208) <= l_379) & g_262) | (-10L)) > l_379)))) >= l_379) && 0xDFA2EC370606D169LL)) > l_387), l_388)) ^ p_38))), p_38)))
            {
                int32_t l_407 = 0x0158A440L;
                (**g_210) = (4294967289UL || (safe_rshift_func_uint8_t_u_s((safe_mod_func_int8_t_s_s(((safe_mod_func_uint8_t_u_u(((p_37 == ((safe_add_func_uint64_t_u_u(5UL, (l_387 & 1UL))) ^ ((p_39 >= ((((safe_sub_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_u(0xA8L, (safe_rshift_func_int8_t_s_u(p_36, 1)))) >= ((safe_lshift_func_int16_t_s_s(g_177, 2)) == g_326)), l_407)) | p_36) <= 1L) | l_387)) | p_38))) && l_388), 0x33L)) & p_36), p_38)), p_38)));
                return g_326;
            }
            else
            {
                uint32_t l_437 = 8UL;
                const int32_t *l_438 = &g_74;
                if (((((safe_add_func_uint8_t_u_u((0xD2FEL <= (g_342 ^ 0x5CB8CD81L)), (4294967286UL | (g_74 > ((((safe_rshift_func_uint16_t_u_s(g_253, 0)) < (((p_37 != ((void*)0 == l_412)) != g_177) >= (*g_137))) > p_38) < l_413))))) <= 0UL) == p_37) ^ g_342))
                {
                    const uint32_t l_433 = 18446744073709551615UL;
                    for (l_388 = (-23); (l_388 == 48); l_388 = safe_add_func_int32_t_s_s(l_388, 3))
                    {
                        int32_t *****l_434 = (void*)0;
                        const int32_t **l_439 = &g_269;
                        (***g_209) = ((((safe_rshift_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(((safe_add_func_int64_t_s_s((!(***g_209)), (((safe_mul_func_int8_t_s_s(((safe_mul_func_uint16_t_u_u((((safe_sub_func_uint16_t_u_u((g_177 && ((l_413 == (l_433 | (((void*)0 != l_434) || (((((((((safe_lshift_func_int16_t_s_s(((0xC3L < ((void*)0 != (*g_208))) > p_36), p_38)) || 0x96952F921B171C3BLL) | l_433) && 0xA97BB61EL) & 1L) != (-1L)) & g_15) && 252UL) >= 0x07L)))) ^ p_36)), 0x4BC3L)) && 0xD6A342CFCF3885F1LL) >= g_15), p_37)) && p_39), l_437)) && g_326) || 0xF185DDB2L))) > 251UL), l_433)), p_37)), 1L)), 11)) & 0xE2L) <= l_437) && l_388);
                        (*l_439) = l_438;
                    }
                }
                else
                {
                    const int32_t **l_441 = &g_269;
                    (*l_441) = l_440;
                    if ((**g_210))
                    {
                        (*l_441) = l_438;
                    }
                    else
                    {
                        (***g_208) = (**g_209);
                        (*l_441) = (*l_441);
                        (****g_208) = p_38;
                        if ((**l_441))
                            break;
                    }
                    (*l_441) = (void*)0;
                }
                for (p_39 = (-5); (p_39 > 48); p_39++)
                {
                    (**g_210) = ((*g_208) == (*g_208));
                }
                for (g_326 = 16; (g_326 >= 21); g_326++)
                {
                    int8_t l_447 = 1L;
                    int32_t **l_463 = &g_137;
                    if ((&g_209 != (void*)0))
                    {
                        int32_t *l_446 = &g_74;
                        (**g_209) = l_446;
                        (**g_209) = func_63(l_447);
                        return g_177;
                    }
                    else
                    {
                        int32_t l_448 = (-2L);
                        (***g_209) = ((l_448 && (((&g_208 != (void*)0) & ((*l_440) < p_38)) && (safe_rshift_func_int16_t_s_u(l_447, (safe_rshift_func_int16_t_s_u(((l_379 >= (safe_rshift_func_uint16_t_u_s((safe_sub_func_uint8_t_u_u(255UL, ((safe_lshift_func_int8_t_s_s(((g_262 || 1UL) || p_39), 3)) < 0UL))), p_38))) <= 7L), 3)))))) & (*l_438));
                    }
                    (*g_137) = ((safe_add_func_int64_t_s_s(((((*l_440) > ((**g_208) == l_463)) < ((safe_rshift_func_uint16_t_u_u(0UL, ((safe_sub_func_int64_t_s_s((g_318 ^ (((p_38 & ((void*)0 != l_468)) || (safe_unary_minus_func_uint64_t_u(l_470))) != (*l_440))), g_177)) || g_74))) || (*l_440))) <= p_36), g_326)) && g_262);
                    l_473 = l_471;
                    (***l_468) = (***g_209);
                }
                (****l_474) = (****l_474);
            }
            (**g_210) = (safe_mul_func_int8_t_s_s(0xE0L, (1L > (*****l_471))));
            l_477 = &g_208;
        }
        (****l_515) = ((safe_mod_func_uint8_t_u_u((*****l_477), (((safe_mul_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((&g_209 != l_515), p_36)), (safe_add_func_int8_t_s_s((l_515 == (*l_477)), (((safe_sub_func_uint16_t_u_u((((((&g_209 == (void*)0) < (safe_lshift_func_int8_t_s_s(g_326, 5))) ^ g_177) & g_177) & (****l_515)), g_15)) > p_37) ^ 255UL))))) > g_177) & (***g_209)))) < g_177);
        if (l_522)
        {
            const int32_t ****l_532 = (void*)0;
            (***g_208) = func_63((~p_39));
            if ((safe_sub_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(g_262, ((***g_209) && (*l_503)))), ((((safe_lshift_func_int16_t_s_u((l_532 != l_532), 10)) < (safe_rshift_func_int16_t_s_s((safe_mod_func_int64_t_s_s(((safe_add_func_int8_t_s_s((1UL | ((safe_add_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_s(((g_262 && (****l_515)) ^ (g_74 <= g_15)), (*l_503))) && g_74), p_37)) > g_15)), l_543)) == (****l_515)), p_36)), 8))) && 0L) <= p_36))) <= l_544), p_39)))
            {
                int32_t *l_570 = (void*)0;
                (***g_208) = (***l_515);
                (**g_210) = ((((safe_add_func_uint64_t_u_u(((safe_mod_func_int8_t_s_s(1L, p_39)) || (****l_474)), (safe_rshift_func_int8_t_s_s(((0x3F1183D3L && p_36) || ((g_177 | p_36) >= (safe_lshift_func_int8_t_s_u((safe_mul_func_int8_t_s_s((safe_lshift_func_int16_t_s_u((l_532 != (void*)0), 2)), 0xF4L)), 4)))), g_253)))) < 0UL) >= g_15) >= 8UL);
                for (g_262 = (-20); (g_262 == 47); ++g_262)
                {
                    uint32_t l_569 = 1UL;
                    int32_t *****l_571 = &l_515;
                    int32_t l_576 = (-7L);
                    const int8_t l_595 = 2L;
                    if ((g_177 | (((safe_rshift_func_uint16_t_u_u(((*g_137) & (safe_add_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((g_74 | (((+(~(****g_208))) & g_342) <= (safe_lshift_func_uint16_t_u_u((l_569 & ((l_569 ^ (l_570 != (void*)0)) <= (*l_503))), 9)))), (*l_440))), 0xA787L))), 12)) | p_39) == (****l_474))))
                    {
                        if (p_38)
                            break;
                        if (p_38)
                            break;
                        if ((**g_210))
                            break;
                    }
                    else
                    {
                        (****l_474) = ((**l_515) == (**g_208));
                    }
                    (*****l_477) = ((void*)0 != l_571);
                    if ((safe_sub_func_int16_t_s_s(((g_342 ^ (safe_sub_func_uint16_t_u_u(0x2A2AL, (*l_440)))) == (18446744073709551609UL | (l_576 < ((safe_mul_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((safe_mul_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_s(0xE1B9L, 6)) & (safe_mul_func_uint16_t_u_u(g_342, p_36))), (safe_sub_func_int16_t_s_s(((safe_mod_func_uint64_t_u_u((((*l_477) != (void*)0) ^ 0x9EL), g_326)) >= p_37), (-1L))))), (****g_208))), p_38)) ^ p_36)))), p_39)))
                    {
                        (**g_209) = (*g_210);
                    }
                    else
                    {
                        int64_t l_602 = 0x4A03D86024088018LL;
                        (*****l_571) = ((safe_sub_func_int64_t_s_s((safe_rshift_func_uint8_t_u_s(254UL, 5)), (((0xD8122440L | l_595) & (((7UL != (0xD22448B24F25B496LL && p_37)) != 5UL) || ((safe_mod_func_uint64_t_u_u(((safe_sub_func_uint8_t_u_u(0x34L, (((safe_lshift_func_uint8_t_u_s(p_36, p_36)) | 0x908C5E04DB1516EELL) ^ g_342))) > l_602), (*l_440))) < 0x99D0L))) ^ g_326))) || l_602);
                        if (l_602)
                            break;
                    }
                    (*****l_571) = (safe_add_func_uint16_t_u_u((p_38 || ((***l_571) != (**l_474))), 0xEB4EL));
                }
                (**g_210) = (safe_mod_func_uint32_t_u_u(0x3509A934L, (safe_mul_func_int8_t_s_s(((((void*)0 != (**g_209)) || (safe_add_func_int64_t_s_s(p_37, 3L))) <= p_38), ((safe_add_func_int8_t_s_s(p_38, p_39)) && ((g_74 != (*l_503)) > 0xD2L))))));
            }
            else
            {
                uint8_t l_627 = 6UL;
                int32_t l_628 = 0x6EC48142L;
                const uint64_t l_629 = 18446744073709551612UL;
                (**g_210) = (((-6L) && ((safe_lshift_func_int16_t_s_s(((safe_add_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_s(p_37, 7)), g_262)) != ((safe_mod_func_uint8_t_u_u((0x0BC5L != ((safe_mul_func_int16_t_s_s(((p_36 >= (g_326 <= (safe_mod_func_int64_t_s_s(0xACFFE447C7C14065LL, l_627)))) != p_38), l_628)) < l_629)), (****l_515))) & g_326)), g_262)) & 1L)) == 0L);
            }
        }
        else
        {
            (***l_515) = (***l_515);
        }
        for (p_39 = (-29); (p_39 <= 16); p_39++)
        {
            uint8_t l_646 = 0x7AL;
            uint8_t l_647 = 1UL;
            int32_t ****l_659 = (void*)0;
            if ((p_39 >= ((safe_sub_func_int16_t_s_s(0x500FL, ((-1L) && p_38))) < ((safe_mul_func_uint16_t_u_u((((safe_rshift_func_uint8_t_u_s(g_318, (p_36 & ((!((safe_mod_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(((((~0xAD30C9E96CAA051ALL) && (safe_lshift_func_uint8_t_u_s(((void*)0 != (***l_477)), (****l_515)))) ^ 0L) & (*l_440)), l_646)), 0xF367L)) < 65527UL)) < l_647)))) && p_36) == 8L), g_262)) ^ l_647))))
            {
                int32_t * const l_650 = &g_74;
                for (l_487 = 0; (l_487 != (-12)); l_487--)
                {
                    (**g_209) = l_650;
                }
                l_651 = &g_208;
                (****l_515) = ((void*)0 == &g_208);
            }
            else
            {
                int32_t *** const ** const l_654 = &g_208;
                for (l_646 = 26; (l_646 >= 36); l_646++)
                {
                    if ((***g_209))
                        break;
                    if ((**g_210))
                        break;
                }
                (***l_474) = (***g_208);
                if ((((void*)0 != l_654) <= 6UL))
                {
                    uint16_t l_662 = 0x38B5L;
                    (**g_209) = func_63(((safe_sub_func_int64_t_s_s((((p_38 <= (l_659 == (void*)0)) & (1L && (safe_sub_func_int32_t_s_s(l_662, 0x161F151CL)))) >= (*l_440)), 0xDBCD4537710792D1LL)) == ((safe_rshift_func_uint16_t_u_s(g_74, 13)) > g_262)));
                    (*g_137) = (safe_mul_func_int16_t_s_s(((((((safe_mod_func_uint16_t_u_u((0x901EEE6B0D0AC692LL ^ (safe_sub_func_uint64_t_u_u(((safe_unary_minus_func_int64_t_s((safe_add_func_int64_t_s_s((-1L), (safe_add_func_int64_t_s_s((((safe_lshift_func_int16_t_s_u(0L, 10)) == g_342) ^ (safe_mod_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_u((safe_unary_minus_func_uint16_t_u((safe_add_func_uint64_t_u_u((safe_mod_func_int16_t_s_s((((safe_rshift_func_uint8_t_u_s((safe_sub_func_int8_t_s_s((1UL == (safe_lshift_func_int8_t_s_s((safe_sub_func_int64_t_s_s(0xD7081F3FBCB82769LL, (*l_503))), 4))), 0x08L)), (((*l_477) != (*l_654)) == 0xB36FBCF2L))) && p_36) ^ p_36), (*****l_654))), g_177)))), g_15)) || p_38), p_38))), (-9L))))))) && p_39), g_74))), (****l_515))) || p_38) <= p_38) != (*l_440)) || g_74) > g_326), g_318));
                    (***l_474) = func_63((p_39 < l_662));
                    (****l_515) = (&g_208 != &g_208);
                }
                else
                {
                    int32_t *l_713 = &g_177;
                    (*g_210) = func_63((g_342 == (safe_rshift_func_int8_t_s_u((****l_515), 2))));
                    if (p_37)
                        break;
                    (***g_209) = (((((*****l_654) >= (0x1B02E67EL >= ((****l_474) >= 65529UL))) | (*****l_654)) ^ (-3L)) && (p_38 <= (((safe_rshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_s((p_36 & (*****l_654)), p_39)), p_38)) >= p_36) != 1L)));
                    (**g_210) = ((safe_sub_func_uint32_t_u_u(((safe_lshift_func_uint8_t_u_u(((&g_208 == l_654) > (((****l_515) <= 0UL) | ((((*g_210) == (void*)0) == ((g_74 | ((safe_sub_func_uint64_t_u_u((((safe_mul_func_uint16_t_u_u(((**g_209) == l_713), (-8L))) >= 1L) <= 65527UL), (****l_474))) || 2UL)) > 0x6FL)) || 0x3574D15FL))), g_74)) < 0x84L), 1UL)) >= p_38);
                }
            }
        }
    }
    else
    {
        for (g_342 = 0; (g_342 > (-6)); g_342--)
        {
            const int32_t *l_716 = &g_177;
            const int32_t **l_717 = &l_716;
            (*l_717) = l_716;
        }
    }
    for (p_39 = (-8); (p_39 > 33); p_39++)
    {
        uint8_t l_724 = 0x1BL;
        int32_t **l_728 = &g_137;
        (*g_137) = (safe_add_func_int16_t_s_s(((((safe_mul_func_int8_t_s_s(l_724, ((safe_lshift_func_int8_t_s_s(p_39, 7)) <= ((safe_unary_minus_func_int16_t_s(0x8645L)) & ((***l_651) != l_728))))) > (safe_add_func_uint32_t_u_u(0x8873B0ACL, (****l_515)))) > ((g_74 || (**l_728)) <= (****l_515))) == g_15), g_177));
        for (g_74 = 0; (g_74 == (-12)); g_74 = safe_sub_func_uint16_t_u_u(g_74, 4))
        {
            (****l_651) = (**g_209);
        }
    }
    (*g_210) = (****l_651);
    return p_36;
}
inline static int16_t func_44(uint8_t p_45, uint32_t p_46, uint8_t p_47)
{
    uint32_t l_68 = 2UL;
    int32_t ****l_324 = &g_209;
    int32_t ***** const l_323 = &l_324;
    int8_t l_372 = 0x90L;
    for (p_47 = 0; (p_47 <= 13); p_47 = safe_add_func_uint64_t_u_u(p_47, 6))
    {
        int8_t l_62 = 0x42L;
        uint16_t l_67 = 0x9CDEL;
        int32_t *l_325 = &g_326;
        l_325 = func_54((safe_mod_func_uint32_t_u_u(4294967290UL, l_62)), func_63(((safe_add_func_uint64_t_u_u(l_67, l_68)) & 1UL)), (safe_sub_func_int32_t_s_s(((((safe_add_func_uint16_t_u_u(((((((void*)0 != l_323) ^ (0xE05BL != g_262)) != g_15) >= l_62) || p_45), 0xC1FEL)) && 0UL) == g_262) || g_253), g_15)), l_325, g_15);
        return g_253;
    }
    (****l_324) = ((safe_lshift_func_int16_t_s_s((safe_mod_func_int8_t_s_s(((**g_208) == (void*)0), (safe_sub_func_int64_t_s_s((p_46 == 0x2D85L), (*****l_323))))), 5)) ^ ((safe_sub_func_uint8_t_u_u((0x7D10L > (((safe_sub_func_int64_t_s_s(0x6112EBCB51DA3810LL, (safe_lshift_func_uint8_t_u_u((safe_add_func_int64_t_s_s((((*g_208) == (*l_324)) == 0x8C251C10L), l_372)), 6)))) == p_45) < (*****l_323))), p_46)) || g_15));
    return (****l_324);
}
inline static int32_t * const func_54(int64_t p_55, int32_t * p_56, uint32_t p_57, int32_t * p_58, uint32_t p_59)
{
    uint64_t l_327 = 0xD63081A09870BFBDLL;
    int32_t **l_332 = (void*)0;
    uint32_t l_337 = 0xFDFD5089L;
    (***g_208) = func_63(l_327);
    (****g_208) = (l_327 >= ((safe_mul_func_int8_t_s_s((safe_add_func_uint32_t_u_u((((((void*)0 == l_332) < ((g_74 | ((safe_sub_func_int16_t_s_s(g_326, (safe_lshift_func_uint16_t_u_u(((g_74 ^ l_337) > (safe_rshift_func_uint8_t_u_u(((((safe_rshift_func_uint16_t_u_u(g_262, 12)) & p_55) == 0xD95B1CF1L) | (*p_58)), p_57))), g_326)))) | 0xEEEDL)) || g_342)) | 1L) & (***g_209)), 0xEF7269C6L)), g_74)) & 0xF3L));
    (**g_210) = ((safe_sub_func_int64_t_s_s((((+(0x1E878FDA2760C768LL != (g_15 && 0xD9953DBD2A67AD85LL))) == (safe_sub_func_int16_t_s_s(p_59, ((safe_lshift_func_uint16_t_u_u((g_318 >= p_59), 13)) && 0xEAFCL)))) & g_74), g_326)) || 0xC853L);
    if ((*g_137))
    {
        return (***g_208);
    }
    else
    {
        (*p_58) = (safe_lshift_func_uint16_t_u_u((safe_add_func_uint64_t_u_u(18446744073709551607UL, (safe_sub_func_int64_t_s_s(((void*)0 != &p_56), (-9L))))), (p_59 >= (safe_add_func_uint64_t_u_u(p_55, ((0xB5C4B6020A752726LL == g_326) > 0x3FL))))));
    }
    return (*g_210);
}
inline static int32_t * func_63(uint32_t p_64)
{
    int32_t *l_73 = &g_74;
    uint16_t l_309 = 65527UL;
    (*l_73) = (safe_add_func_uint32_t_u_u((safe_mul_func_int16_t_s_s(g_15, p_64)), g_15));
    if ((((safe_mod_func_uint32_t_u_u((func_77(l_73, (*l_73), (((~(*l_73)) > (*l_73)) & (safe_mul_func_int8_t_s_s(0x58L, (safe_mod_func_uint8_t_u_u(1UL, g_74)))))) > p_64), l_309)) != g_253) < g_253))
    {
        int32_t * const ***l_316 = (void*)0;
        (**g_210) = (g_262 && (((safe_lshift_func_int8_t_s_u(0xBDL, 5)) ^ ((safe_sub_func_uint64_t_u_u(((((***g_209) == ((safe_sub_func_int64_t_s_s((l_316 != (void*)0), (+((((g_318 < g_318) == ((void*)0 != (*g_209))) | p_64) != p_64)))) && p_64)) > 0xD253L) < g_253), (-3L))) > g_74)) | g_253));
    }
    else
    {
        (*g_210) = (*g_210);
    }
    return l_73;
}
static uint16_t func_77(const int32_t * p_78, uint32_t p_79, uint8_t p_80)
{
    int32_t *l_88 = &g_74;
    int32_t l_205 = (-1L);
    int32_t ***l_235 = &g_210;
    int32_t ****l_277 = &g_209;
    int32_t *****l_276 = &l_277;
    const int32_t **l_307 = (void*)0;
    const int32_t **l_308 = &g_269;
    g_74 = (safe_mod_func_uint64_t_u_u(((*p_78) > (p_78 == l_88)), (g_74 & 0xE6AF5756L)));
    if (((-1L) == ((l_88 == &g_74) == (l_88 == &g_74))))
    {
        int64_t l_109 = 0x3B00C6B665F1F474LL;
        (*l_88) = (0xF29AL < (safe_add_func_int64_t_s_s((g_15 ^ (((safe_lshift_func_int8_t_s_s(5L, 7)) & (safe_lshift_func_uint8_t_u_s(255UL, (safe_mod_func_uint32_t_u_u(((((safe_mul_func_int16_t_s_s(((safe_sub_func_int32_t_s_s(((safe_mul_func_uint16_t_u_u((g_15 >= (safe_rshift_func_uint8_t_u_u(0x77L, 0))), 9L)) > (safe_mod_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_u(((l_109 < 0x2BB1L) <= p_79), 0)) == p_79), g_15))), (*l_88))) <= (*l_88)), 0xE952L)) && 0UL) ^ g_15) != g_15), l_109))))) >= g_15)), p_79)));
        p_78 = p_78;
    }
    else
    {
        int16_t l_119 = 2L;
        int32_t *l_131 = &g_74;
        uint64_t l_157 = 0x5A7B369A1ECA9F70LL;
        int32_t **l_163 = &l_131;
        const int32_t l_166 = 0L;
        int32_t ****l_211 = &g_209;
        if (((g_74 || 0UL) <= g_15))
        {
            uint64_t l_112 = 0xD7CB4F9107178D33LL;
            int32_t *l_132 = &g_74;
            int64_t l_133 = 1L;
            if ((safe_add_func_int16_t_s_s(1L, ((l_112 <= (safe_lshift_func_int8_t_s_s(((safe_add_func_uint32_t_u_u(g_15, (((((safe_lshift_func_int8_t_s_u(l_119, (safe_add_func_int32_t_s_s((safe_lshift_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u((g_15 || (safe_mul_func_int16_t_s_s(0x816DL, (((((safe_add_func_int16_t_s_s(((((-1L) != (l_112 & (~(l_131 == l_132)))) >= 0xDFEA0260L) & 1L), l_133)) | g_74) >= g_15) & p_79) <= p_80)))), g_74)) & p_79), p_80)), p_80)))) <= p_79) || g_74) || (*l_131)) ^ g_74))) || (-6L)), 3))) && g_74))))
            {
                int32_t *l_140 = (void*)0;
                (*l_88) = (safe_unary_minus_func_uint16_t_u((safe_rshift_func_uint8_t_u_s(0x1EL, 3))));
                g_137 = &g_74;
                for (l_119 = 14; (l_119 < (-16)); l_119--)
                {
                    uint32_t l_144 = 0UL;
                    int32_t **l_158 = &l_88;
                    if ((&g_74 == l_131))
                    {
                        int32_t **l_141 = &l_140;
                        int32_t ***l_142 = (void*)0;
                        int32_t ***l_143 = &l_141;
                        (*l_141) = l_140;
                        if ((*g_137))
                            continue;
                        (*l_143) = (void*)0;
                    }
                    else
                    {
                        (*g_137) = l_144;
                        (*g_137) = (&g_137 == (void*)0);
                    }
                    (*g_137) = (0x49B816A8L <= ((safe_mod_func_int16_t_s_s(p_79, (~(safe_rshift_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((!(0x4AL ^ (safe_sub_func_int32_t_s_s((0x911A91DCBA93E3F5LL ^ (safe_sub_func_int32_t_s_s(((p_80 >= l_157) <= (&g_137 != (void*)0)), (((((*l_131) || (*g_137)) && 0x5D86L) <= 0xEDL) == 0x1F153C6A96B58146LL)))), (*l_132))))), p_79)), 7))))) & 18446744073709551609UL));
                    if ((*g_137))
                        continue;
                    (*l_158) = &g_74;
                }
            }
            else
            {
                int32_t ***l_164 = (void*)0;
                int32_t ***l_165 = &l_163;
                (*l_132) = (*g_137);
                (*l_131) = (safe_rshift_func_int16_t_s_s(((safe_sub_func_int64_t_s_s(g_74, p_79)) < (p_78 != &g_74)), 11));
                (*g_137) = ((g_74 > 1UL) & 4294967295UL);
                (*l_165) = l_163;
            }
        }
        else
        {
            (**l_163) = l_166;
            (*l_88) = (*p_78);
        }
        for (g_74 = 0; (g_74 <= (-28)); g_74 = safe_sub_func_int8_t_s_s(g_74, 5))
        {
            int32_t ***l_171 = &l_163;
            int32_t l_271 = 0x00E73475L;
            int32_t *****l_272 = &l_211;
            int32_t l_302 = (-4L);
            for (p_80 = (-13); (p_80 < 39); p_80++)
            {
                int32_t *l_176 = &g_177;
                int32_t l_303 = 3L;
                (*l_176) = (((void*)0 == l_171) && (safe_mul_func_int16_t_s_s((0xECL || g_74), ((p_80 != (safe_sub_func_int32_t_s_s(((void*)0 == &p_78), ((0x3EL | ((((g_15 ^ 0x49FFL) ^ p_80) == 65535UL) || 0x6211L)) && 4UL)))) ^ (***l_171)))));
                for (g_177 = (-17); (g_177 < 11); g_177 = safe_add_func_int32_t_s_s(g_177, 1))
                {
                    uint8_t l_191 = 247UL;
                    if ((*g_137))
                        break;
                    for (p_79 = 0; (p_79 == 55); p_79 = safe_add_func_uint16_t_u_u(p_79, 1))
                    {
                        int32_t ****l_206 = (void*)0;
                        int32_t ****l_207 = &l_171;
                        (*l_163) = l_176;
                        l_205 = (((safe_mul_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((((safe_unary_minus_func_int32_t_s((safe_mul_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(0x2FL, 2)), l_191)))) || ((safe_add_func_uint16_t_u_u((p_80 == (safe_mod_func_uint16_t_u_u(((safe_add_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((~((safe_lshift_func_int8_t_s_s((((**l_163) < (safe_sub_func_uint32_t_u_u((p_78 == (void*)0), 7L))) | g_177), 2)) || (*l_176))), 0x1D187037L)), 0x04L)) | l_191), p_80))), g_74)) >= g_177)) || p_80), g_177)), g_177)) & g_74) ^ 0x6DA7L);
                        p_78 = p_78;
                        (*l_207) = (void*)0;
                    }
                    return g_74;
                }
                if (((g_208 != (void*)0) || ((void*)0 != l_211)))
                {
                    uint32_t l_236 = 9UL;
                    const int32_t *l_267 = (void*)0;
                    const int32_t **l_266 = &l_267;
                    if ((!((safe_lshift_func_int16_t_s_s(((((*l_88) && (safe_lshift_func_int16_t_s_u((safe_sub_func_uint64_t_u_u(((safe_sub_func_int8_t_s_s((safe_add_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((&p_78 == (void*)0), (safe_add_func_uint8_t_u_u(((*l_211) != (*g_208)), ((-1L) > ((safe_rshift_func_int16_t_s_s(((safe_add_func_int64_t_s_s((safe_mul_func_int16_t_s_s((****l_211), 8L)), (safe_lshift_func_int16_t_s_s(((void*)0 == l_235), 7)))) && g_74), 14)) != 0x48L)))))), 6UL)), 0xB7L)) || 0UL), l_236)), 7))) && 65530UL) >= g_74), 7)) > 1L)))
                    {
                        uint32_t l_241 = 0xD5C82D1FL;
                        int32_t l_246 = (-1L);
                        l_246 = (safe_lshift_func_int8_t_s_s((((void*)0 == &l_171) >= (p_79 || ((safe_add_func_uint16_t_u_u(g_74, l_241)) | ((safe_rshift_func_uint16_t_u_s((*l_88), ((p_79 <= ((1L == (safe_lshift_func_uint8_t_u_s((g_177 == g_15), 0))) >= (-5L))) ^ (****g_208)))) < p_79)))), g_15));
                        p_78 = (**l_171);
                        (*l_176) = (0x50F72682E12F5BDELL > ((**g_209) == (**g_209)));
                    }
                    else
                    {
                        const uint8_t l_263 = 0xCEL;
                        int32_t l_264 = 0x706A571DL;
                        int32_t *****l_265 = &l_211;
                        l_264 = (safe_sub_func_uint16_t_u_u(p_80, ((safe_rshift_func_uint16_t_u_s(((g_15 && (safe_mul_func_int8_t_s_s((g_253 > 0L), ((((((p_80 <= (safe_mul_func_uint16_t_u_u((!((!p_79) != ((*p_78) & g_74))), ((safe_rshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_u(((((**l_163) >= (*l_176)) || g_253) < p_79), 10)), 5)) || (**l_163))))) < 0x27L) <= g_253) > g_15) >= g_262) ^ 9L)))) & (***g_209)), l_263)) > 0x101AL)));
                        (*l_265) = &l_235;
                        (*l_176) = (((0xC2E1585BL || (-1L)) <= (***l_235)) | 3UL);
                        (*g_210) = (**g_209);
                    }
                    (*l_266) = p_78;
                    return g_253;
                }
                else
                {
                    if ((*p_78))
                    {
                        (***g_208) = (***l_211);
                    }
                    else
                    {
                        int32_t *l_268 = &g_74;
                        (***l_211) = l_268;
                        g_269 = p_78;
                        (*l_163) = l_268;
                        (**g_209) = (***g_208);
                    }
                    l_271 = (safe_unary_minus_func_uint16_t_u((p_79 & p_79)));
                }
            }
            l_205 = (*p_78);
        }
    }
    (*l_308) = p_78;
    return g_74;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_15;
    csmith_sink_ = g_74;
    csmith_sink_ = g_177;
    csmith_sink_ = g_253;
    csmith_sink_ = g_262;
    csmith_sink_ = g_318;
    csmith_sink_ = g_326;
    csmith_sink_ = g_342;
    platform_main_end(0,0);
    return 0;
}
