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
   int32_t f0;
   const int16_t f1;
   uint8_t f2;
   uint32_t f3;
   uint8_t f4;
   int32_t f5;
   uint32_t f6;
   int32_t f7;
   int8_t f8;
};
struct S1 {
   const uint16_t f0;
   int16_t f1;
   uint32_t f2;
   uint8_t f3;
   uint32_t f4;
   uint32_t f5;
   uint32_t f6;
};
static int32_t g_13 = 1L;
static int32_t g_28 = (-5L);
static int32_t *g_27 = &g_28;
static int32_t g_33 = (-1L);
static int32_t g_63 = (-10L);
static int32_t *g_70 = &g_33;
static int32_t **g_69 = &g_70;
static struct S0 g_96 = {0x4DCBD99AL,-1L,0x09L,0x03114314L,0UL,0x0BC21425L,18446744073709551608UL,-3L,-1L};
static struct S0 *g_95 = &g_96;
static const struct S1 g_144 = {0xBE9FL,-1L,4294967292UL,246UL,0xA8BA3176L,0xEEA7E5B6L,3UL};
static const struct S0 *g_155 = &g_96;
static const struct S0 **g_154 = &g_155;
static const struct S0 ***g_153 = &g_154;
static struct S1 g_168 = {0xF475L,0x2D44L,0x3B5975D7L,0x08L,0x94481F50L,0x1505295FL,0UL};
static int32_t **g_170 = &g_70;
static int32_t ***g_215 = &g_170;
static struct S1 *g_348 = &g_168;
static struct S1 **g_347 = &g_348;
static struct S1 ***g_355 = &g_347;
static int32_t ****g_465 = &g_215;
static int32_t ***** const g_464 = &g_465;
static int16_t g_500 = (-1L);
static int32_t ****g_515 = (void*)0;
static struct S1 **g_694 = &g_348;
static int16_t g_973 = 1L;
static struct S0 * const * const g_1119 = &g_95;
static int16_t g_1140 = (-1L);
static struct S0 g_1149 = {0x2338DA04L,1L,9UL,0x7E6D17B9L,7UL,0xBADABD41L,18446744073709551615UL,0x4257EF90L,0x40L};
static int32_t g_1178 = 0xA8F28303L;
static uint16_t g_1210 = 0x920EL;
static uint8_t g_1214 = 1UL;
static int32_t *g_1256 = &g_1149.f0;
static const struct S1 func_1(void);
static int32_t func_5(uint32_t p_6, uint32_t p_7, const uint32_t p_8, uint32_t p_9, int32_t p_10);
static int32_t * func_16(int32_t * p_17, int32_t * p_18);
static int32_t * func_19(const int32_t * p_20, uint32_t p_21, const uint16_t p_22, int32_t * p_23, int32_t * p_24);
static int32_t * func_25(uint32_t p_26);
static int32_t * func_34(const int32_t * p_35, const int32_t * p_36, int32_t * p_37);
static int32_t * func_38(uint8_t p_39, uint32_t p_40);
static int16_t func_41(int32_t * p_42, const uint8_t p_43, uint16_t p_44);
static uint8_t func_51(uint8_t p_52, uint32_t p_53, int32_t * p_54);
static int32_t * const * func_57(uint32_t p_58, int32_t p_59);
static const struct S1 func_1(void)
{
    uint32_t l_4 = 0xD0A7084BL;
    uint32_t l_11 = 0x68F98558L;
    uint32_t l_12 = 18446744073709551615UL;
    const struct S1 l_1268 = {0x7643L,0x5142L,0x6EF41F05L,1UL,4294967295UL,0x3298E7A3L,0UL};
    (**g_170) = (safe_add_func_uint32_t_u_u(l_4, func_5((0xB0B4L & (l_11 | ((-1L) ^ 0xB8L))), (0x68L == l_11), l_4, ((((0L >= l_12) | l_11) != g_13) || l_12), l_11)));
    for (g_168.f6 = (-25); (g_168.f6 == 31); g_168.f6++)
    {
        (*g_170) = (**g_215);
    }
    return l_1268;
}
static int32_t func_5(uint32_t p_6, uint32_t p_7, const uint32_t p_8, uint32_t p_9, int32_t p_10)
{
    int16_t l_30 = 0x221EL;
    for (p_6 = 0; (p_6 >= 45); p_6 = safe_add_func_uint8_t_u_u(p_6, 1))
    {
        const uint32_t l_31 = 2UL;
        int32_t *l_32 = &g_33;
    }
    return p_9;
}
static int32_t * func_16(int32_t * p_17, int32_t * p_18)
{
    int32_t *l_1257 = &g_63;
    struct S0 **l_1258 = &g_95;
    struct S0 ***l_1259 = &l_1258;
    (*g_170) = l_1257;
    (*l_1259) = l_1258;
    for (g_96.f5 = 21; (g_96.f5 == (-21)); g_96.f5--)
    {
        uint32_t l_1262 = 1UL;
        if ((*g_70))
            break;
        if (l_1262)
            continue;
    }
    (*****g_464) = (!(safe_sub_func_int32_t_s_s(0x3A6BD562L, ((&l_1258 == &l_1258) ^ (0xA2D5CE6EL <= (*l_1257))))));
    return p_17;
}
static int32_t * func_19(const int32_t * p_20, uint32_t p_21, const uint16_t p_22, int32_t * p_23, int32_t * p_24)
{
    const int32_t l_669 = 8L;
    const int32_t * const l_672 = &g_63;
    uint16_t l_689 = 0x264FL;
    uint32_t l_702 = 0xE980309AL;
    struct S1 *l_773 = (void*)0;
    struct S0 * const l_784 = (void*)0;
    uint8_t l_884 = 255UL;
    uint32_t l_896 = 0UL;
    int32_t *l_906 = &g_96.f0;
    struct S1 * const l_942 = (void*)0;
    uint16_t l_1038 = 0UL;
    const int8_t l_1039 = 0x93L;
    int32_t ***l_1065 = &g_170;
    struct S1 ***l_1083 = &g_694;
    uint32_t l_1100 = 6UL;
    int32_t *l_1255 = &g_28;
lbl_835:
    if (l_669)
    {
        int8_t l_688 = (-10L);
        for (g_96.f3 = 14; (g_96.f3 == 9); --g_96.f3)
        {
            const int32_t *l_674 = &g_28;
            const int32_t **l_673 = &l_674;
            (*l_673) = l_672;
        }
        for (g_96.f7 = 0; (g_96.f7 < 3); ++g_96.f7)
        {
            int32_t l_677 = 0x8E30B55CL;
            int32_t *l_678 = (void*)0;
            if (l_677)
                break;
            return l_678;
        }
        (****g_464) = p_23;
        (**g_69) = ((g_168.f2 && 1UL) | (safe_sub_func_int16_t_s_s((!((safe_mod_func_int32_t_s_s((((((0x682CF4E9L < (safe_mod_func_int32_t_s_s(((safe_lshift_func_int8_t_s_s((((*l_672) > (0x3638035FL >= 0x78B4259DL)) > (((l_688 | l_688) > p_21) & g_33)), l_688)) && g_96.f6), l_688))) || 1L) != (***g_215)) & g_96.f3) != 0x1AL), (**g_170))) == (*l_672))), l_689)));
    }
    else
    {
        const uint32_t l_693 = 18446744073709551615UL;
        (****g_464) = func_25(((~(g_13 >= (safe_rshift_func_int16_t_s_s(l_693, (g_694 != (*g_355)))))) == (safe_sub_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(((**g_153) == (void*)0), ((0x3F6AA859L != (g_96.f6 > ((safe_add_func_uint32_t_u_u(((!255UL) < l_702), p_22)) < g_96.f1))) >= 5UL))), p_22))));
    }
    p_20 = l_672;
    for (l_689 = (-11); (l_689 < 35); l_689 = safe_add_func_uint8_t_u_u(l_689, 1))
    {
        struct S1 ***l_724 = (void*)0;
        struct S0 ****l_725 = (void*)0;
        const int32_t *l_744 = &g_96.f0;
        int32_t l_775 = 3L;
        uint32_t l_792 = 0UL;
        int32_t * const *l_795 = &g_27;
        int32_t * const **l_794 = &l_795;
        int32_t * const ***l_793 = &l_794;
        int32_t l_951 = 0xC99A47A1L;
        (**g_170) = 0x0C9EE209L;
        for (g_500 = 0; (g_500 > 13); g_500++)
        {
            struct S1 * const *l_712 = (void*)0;
            struct S1 * const **l_711 = &l_712;
            int32_t l_719 = 0xF2367A98L;
            uint32_t l_743 = 1UL;
            int32_t *l_831 = &g_63;
        }
        if ((safe_rshift_func_int8_t_s_u(0L, g_168.f1)))
        {
            uint8_t l_854 = 0UL;
            struct S0 *l_874 = &g_96;
            struct S0 **l_954 = &g_95;
            struct S0 ***l_953 = &l_954;
            if (p_21)
                goto lbl_835;
            if ((safe_rshift_func_int8_t_s_s((((safe_add_func_int16_t_s_s(((void*)0 == (*g_464)), (0xC956EA87L & (safe_lshift_func_int16_t_s_s(((~(g_168.f3 & (safe_mod_func_uint16_t_u_u(((0x95A8A8EBL <= (safe_sub_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_u(((safe_sub_func_int32_t_s_s(((((safe_mod_func_uint8_t_u_u((+(l_854 > ((safe_add_func_uint32_t_u_u(4294967288UL, p_22)) ^ (((p_21 && (-5L)) | p_21) == 0L)))), p_22)) && l_854) ^ g_96.f8) >= 1UL), (*l_744))) != 0xA6L), 6)), 0x2F33E308L))) & 65530UL), 65535UL)))) == (****l_793)), 1))))) & g_13) | (****l_793)), 3)))
            {
                const uint8_t l_878 = 250UL;
                int32_t **** const *l_883 = &g_465;
                int32_t l_885 = 0x5C9B4DF6L;
                struct S1 *l_886 = &g_168;
                for (g_168.f1 = 5; (g_168.f1 != (-26)); --g_168.f1)
                {
                    uint32_t l_861 = 4294967294UL;
                    uint32_t l_869 = 0x2754F522L;
                    (***g_465) = p_23;
                    (***g_215) = (g_63 <= (((safe_rshift_func_uint8_t_u_u(((l_854 >= l_861) != ((g_144.f1 != ((((((((((safe_add_func_int16_t_s_s(g_96.f1, ((+(safe_rshift_func_uint16_t_u_s(((safe_lshift_func_int8_t_s_u((l_869 || (-1L)), 3)) || (safe_lshift_func_uint8_t_u_s(p_22, g_96.f6))), 5))) == g_96.f1))) && 0x48L) >= l_854) & 0xB6C8AE22L) | 0x68L) | (****g_465)) && g_33) || 0UL) || g_96.f5) < g_13)) != (*l_672))), g_96.f0)) >= g_144.f4) <= l_861));
                    (****l_793) = (safe_lshift_func_int16_t_s_u((l_874 == l_874), (safe_mod_func_int32_t_s_s((+((l_878 ^ (safe_rshift_func_uint16_t_u_u(p_22, l_869))) <= (((***g_215) != ((4294967295UL == (*****g_464)) || (safe_sub_func_int16_t_s_s(((((((void*)0 != l_883) | l_884) > l_854) < p_21) ^ g_168.f1), p_22)))) != 1UL))), (*****l_883)))));
                }
                l_885 = (****g_465);
                if ((*l_672))
                {
                    if (g_13)
                        goto lbl_835;
                }
                else
                {
                    int32_t l_895 = 0xF7765112L;
                    (*g_70) = ((4UL || (*****l_883)) && (((**g_355) != l_886) && (((safe_mod_func_int32_t_s_s((((safe_add_func_uint16_t_u_u((p_21 < ((void*)0 != &g_515)), (-1L))) <= (safe_rshift_func_int16_t_s_u((safe_sub_func_uint8_t_u_u(((void*)0 == (*g_347)), 0L)), 7))) && 0xBBCEC7ABL), l_895)) > 0L) | l_896)));
                    if ((((0UL == (((safe_rshift_func_uint16_t_u_s(((((*l_672) < (safe_mod_func_uint32_t_u_u(((((l_895 < ((&l_794 != (void*)0) < g_168.f0)) ^ ((void*)0 == l_672)) >= (safe_rshift_func_int16_t_s_u(1L, l_895))) <= p_21), (-1L)))) & 1UL) || l_895), p_21)) && g_33) || g_96.f0)) && p_21) > 65534UL))
                    {
                        int32_t l_905 = 0xCF562BCCL;
                        (**g_215) = func_25((***l_794));
                        (****g_465) = l_905;
                    }
                    else
                    {
                        return l_906;
                    }
                }
            }
            else
            {
                const uint32_t l_921 = 0x24EF3879L;
                struct S1 *l_943 = &g_168;
                if (((1UL != (g_144.f5 > ((0x44AD962EL != ((+(!((((safe_rshift_func_int16_t_s_u(0x0C7FL, ((safe_add_func_uint8_t_u_u(((safe_add_func_int16_t_s_s(g_168.f6, ((safe_rshift_func_uint16_t_u_u(((safe_sub_func_int16_t_s_s((*l_906), (l_854 <= (l_854 > (safe_lshift_func_int8_t_s_s(g_168.f3, 4)))))) <= 1L), 2)) != g_96.f4))) | 0x357BF20DL), 0x1CL)) != 0xEEA0L))) | (*l_906)) ^ 246UL) <= (***l_794)))) == l_921)) && 0L))) != p_21))
                {
                    const int32_t *l_922 = (void*)0;
                    int32_t *l_923 = (void*)0;
                    const int32_t **l_924 = &l_744;
                    (*l_924) = l_672;
                }
                else
                {
                    int32_t l_950 = (-9L);
                    (**g_170) = ((safe_add_func_int16_t_s_s((safe_mod_func_int32_t_s_s((((!(safe_sub_func_int8_t_s_s((0x8F935037L & 9L), (safe_rshift_func_int8_t_s_u((safe_add_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((((p_22 == (((((g_144.f1 & (p_21 >= (safe_lshift_func_int8_t_s_s((l_942 != l_943), 4)))) != ((p_22 <= ((safe_mod_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_s((safe_sub_func_int16_t_s_s((0x4BL < g_96.f8), 8UL)), 12)) <= g_63), 0x3EL)) && (*p_20))) <= l_950)) <= p_21) != l_854) & 65535UL)) || p_22) < p_21), 5)), l_951)), 0))))) | 9L) == g_33), l_854)), 0xD65BL)) <= (*****g_464));
                    (***l_794) = (((***l_794) != l_921) & (~(g_144.f3 || (l_953 != &g_154))));
                }
            }
            if ((**g_69))
                break;
            (*g_170) = p_23;
        }
        else
        {
            (***g_215) = 0x12ADB699L;
            for (g_96.f4 = 0; (g_96.f4 > 59); g_96.f4 = safe_add_func_uint8_t_u_u(g_96.f4, 5))
            {
                int32_t **l_957 = &g_70;
                (*g_355) = (*g_355);
                (*l_957) = (*l_795);
            }
        }
    }
    if ((safe_sub_func_int16_t_s_s(0x5836L, (((p_21 || g_96.f4) == ((((&l_672 == (*g_215)) != p_21) && 0xBB6F4404L) < (*l_672))) == (*g_27)))))
    {
        int8_t l_960 = 0xE5L;
        int32_t *l_977 = &g_96.f0;
        int32_t ****l_986 = &g_215;
        uint32_t l_1015 = 4294967295UL;
        uint8_t l_1016 = 0x54L;
        struct S1 *l_1134 = &g_168;
        if ((*p_20))
        {
            struct S0 * const *l_966 = (void*)0;
            int32_t ****l_985 = &g_215;
            uint8_t l_1112 = 255UL;
            if (((p_22 < (l_960 | (0x1C3EL <= p_21))) >= ((~((safe_lshift_func_uint16_t_u_s(((safe_add_func_uint16_t_u_u(((l_966 == &l_784) < (((safe_lshift_func_uint16_t_u_s((p_22 || (((safe_add_func_int32_t_s_s((*l_672), (((((safe_sub_func_int16_t_s_s((((-3L) ^ 0x1AE5C585L) < p_22), p_21)) == 0x5FL) < g_973) <= g_96.f4) & p_22))) > p_21) != l_960)), 8)) ^ p_21) <= p_21)), g_168.f6)) < p_21), g_168.f2)) || (-7L))) ^ g_168.f0)))
            {
lbl_982:
                (*g_27) = l_960;
                for (g_96.f2 = (-29); (g_96.f2 < 38); g_96.f2 = safe_add_func_int16_t_s_s(g_96.f2, 4))
                {
                    int32_t *l_976 = &g_28;
                    (**g_215) = l_976;
                }
                return l_977;
            }
            else
            {
                int32_t *l_983 = (void*)0;
                int32_t ** const * const l_992 = &g_170;
                int32_t ** const * const *l_991 = &l_992;
                for (g_96.f5 = 0; (g_96.f5 <= (-23)); --g_96.f5)
                {
                    if ((251UL ^ (((-9L) ^ (((g_500 && ((((6L < (*p_23)) != p_21) & (safe_sub_func_int16_t_s_s(((*l_977) == (p_22 && (p_21 && p_22))), g_96.f8))) <= p_21)) == 1L) | p_22)) | g_144.f0)))
                    {
                        if ((*l_977))
                            break;
                        if ((*p_23))
                            continue;
                    }
                    else
                    {
                        if (p_22)
                            goto lbl_982;
                        (*g_170) = l_983;
                    }
                    (*g_69) = (****g_464);
                    if ((*g_27))
                        continue;
                    return p_24;
                }
                (*l_977) = (((*l_672) <= (((g_96.f4 < (safe_unary_minus_func_uint8_t_u(((l_985 == l_986) | ((safe_rshift_func_uint8_t_u_u(g_168.f3, 5)) >= 2L))))) < (safe_mod_func_int8_t_s_s((g_13 != ((void*)0 == l_991)), 0xC3L))) <= g_96.f4)) ^ 0x1EED3894L);
            }
            if (((safe_add_func_int8_t_s_s((safe_add_func_uint16_t_u_u(g_168.f0, (((g_28 > (safe_add_func_int32_t_s_s((*l_977), (((safe_lshift_func_uint16_t_u_u(((((safe_sub_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((((((safe_sub_func_int16_t_s_s((p_22 & p_22), (((safe_add_func_uint8_t_u_u(g_33, p_22)) < 2UL) >= ((((safe_add_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(l_1015, g_168.f3)), l_1016)), g_28)) & 0xC2AEL) && p_22) > 1UL)))) | (*p_20)) & g_96.f5) > p_22) > g_33), p_22)), 0x2BL)) != (*g_27)) > 0xA3E4CC66L) & g_28), p_21)) < 0xFA5EL) ^ p_22)))) & (*p_23)) >= g_168.f2))), g_13)) <= (*l_906)))
            {
                return (*g_69);
            }
            else
            {
                uint8_t l_1029 = 0xF0L;
                struct S0 **l_1050 = &g_95;
                struct S0 ***l_1049 = &l_1050;
                struct S0 **** const l_1048 = &l_1049;
                int32_t ** const *l_1064 = &g_69;
                struct S1 ***l_1105 = &g_694;
                int16_t l_1124 = 1L;
                (*l_977) = (g_96.f7 != p_21);
                (*p_23) = ((((((((g_144.f0 ^ (safe_sub_func_uint8_t_u_u(((((*g_27) < (safe_rshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(0x5F8EL, 3)), (((0x0303EDFDL < (*l_906)) > (safe_lshift_func_uint8_t_u_s((safe_sub_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u((((l_1029 && (safe_rshift_func_int16_t_s_s(p_22, (safe_add_func_uint16_t_u_u((((safe_rshift_func_int16_t_s_s(((-1L) < (safe_mod_func_int32_t_s_s((l_1029 > 0xC6L), g_96.f1))), 2)) > g_168.f6) != 0UL), g_96.f8))))) == 4294967292UL) == 4294967295UL), g_28)), (*g_27))), 3))) != (-5L))))) >= (*l_977)) <= (*l_977)), p_21))) | (*l_977)) ^ p_22) & p_21) ^ g_168.f4) & l_1029) & 1L) ^ 1UL);
                if (g_168.f0)
                    goto lbl_1040;
                if (((void*)0 != &p_23))
                {
                    (*p_23) = (-1L);
                    if (l_1038)
                    {
                        (*p_23) = l_1039;
lbl_1040:
                        (**g_153) = (void*)0;
                        return (***g_465);
                    }
                    else
                    {
                        struct S0 ** const l_1047 = &g_95;
                        struct S0 ** const *l_1046 = &l_1047;
                        struct S0 ** const **l_1045 = &l_1046;
                        (*l_906) = (safe_mod_func_uint16_t_u_u((g_144.f0 < ((6L == ((p_21 > (g_96.f8 == (safe_sub_func_int32_t_s_s((((l_1045 == l_1048) > (((safe_add_func_int8_t_s_s(0x3AL, (((safe_mod_func_uint16_t_u_u((+l_1029), (*l_977))) > 0xC9371E6CL) <= 0L))) == g_168.f6) != p_21)) >= 0x6D75L), g_168.f5)))) && 0x7F88745EL)) != p_22)), p_22));
                        (*g_27) = (safe_lshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(g_168.f5, 5)), 7));
                    }
                }
                else
                {
                    uint32_t l_1082 = 4294967287UL;
                    struct S0 **l_1123 = &g_95;
                    int32_t *l_1125 = &g_96.f0;
                    if ((safe_add_func_uint32_t_u_u((safe_mod_func_int16_t_s_s((l_1064 == l_1065), ((safe_mod_func_uint32_t_u_u(((safe_add_func_int8_t_s_s((g_28 <= (((safe_add_func_uint8_t_u_u(((((*l_986) == (*g_465)) > (safe_sub_func_uint32_t_u_u(4294967287UL, (((safe_lshift_func_uint16_t_u_s(((safe_rshift_func_uint16_t_u_s(((g_168.f3 | 0x6FL) & ((safe_add_func_int8_t_s_s(0xA6L, g_168.f5)) > p_21)), p_22)) < g_13), p_22)) == (*l_906)) ^ l_1082)))) | g_144.f5), 1L)) != 0x4B0726E4L) && g_144.f4)), p_22)) & l_1082), l_1082)) ^ g_973))), (*p_23))))
                    {
                        (*p_23) = l_1082;
                        (*l_977) = ((void*)0 != l_1083);
                    }
                    else
                    {
                        uint32_t l_1099 = 0xEADC1B42L;
                        int32_t *l_1103 = &g_63;
                        struct S1 ***l_1104 = &g_347;
                        struct S0 * const **l_1120 = (void*)0;
                        struct S0 * const **l_1121 = &l_966;
                        (*l_906) = (((&g_154 == &g_154) < ((l_1065 == (*g_465)) <= (p_22 > g_96.f2))) || (safe_add_func_int32_t_s_s((((p_21 <= (!((((safe_rshift_func_int8_t_s_u((252UL == (safe_rshift_func_uint8_t_u_s((safe_sub_func_int8_t_s_s(((safe_rshift_func_int8_t_s_u(((safe_add_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u((l_1099 == 0x3BL), 8)), l_1100)) >= g_96.f0), p_21)) != p_22), p_22)), 3))), 1)) || 0xC41129B9L) ^ g_144.f6) || p_22))) && 0xEAL) | 0x41F19CA0L), g_144.f4)));
                        if (g_144.f0)
                            goto lbl_1122;
                        (*l_906) = ((safe_lshift_func_uint8_t_u_u((l_1103 == (void*)0), 0)) == ((l_1104 == l_1105) | ((((safe_sub_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(g_96.f1, 0xC0D5L)), ((p_21 && ((safe_mod_func_int16_t_s_s(l_1112, ((safe_rshift_func_int16_t_s_s((safe_sub_func_int32_t_s_s((safe_sub_func_uint8_t_u_u(g_96.f7, g_144.f3)), 9L)), 6)) | (*p_20)))) ^ g_973)) && g_96.f6))) != 0x76750EF6L) & g_96.f1) & (*p_23))));
lbl_1122:
                        (*l_1121) = g_1119;
                        return p_24;
                    }
                    (*l_1123) = l_784;
                    (***g_465) = (***l_986);
                }
            }
            (*p_23) = ((safe_unary_minus_func_int32_t_s((*g_27))) && 0xCFA0L);
        }
        else
        {
            struct S0 **l_1129 = (void*)0;
            struct S0 **l_1130 = &g_95;
            for (g_973 = 4; (g_973 <= 26); g_973++)
            {
                (**g_215) = (void*)0;
                if ((*p_23))
                    break;
                return p_24;
            }
            (**g_355) = (**g_355);
            (***l_986) = (void*)0;
            (*l_1130) = l_784;
        }
        (*p_23) = (((*l_672) <= (((g_144.f0 || (safe_sub_func_int16_t_s_s((~(l_1134 != (void*)0)), ((-1L) & (((void*)0 == l_1134) ^ ((!((safe_sub_func_uint32_t_u_u((((safe_rshift_func_uint8_t_u_s(((*g_355) != &l_1134), 7)) || (*l_977)) == (*l_977)), 0x1CBD91BEL)) <= 5L)) <= (*l_906))))))) >= p_21) || (*l_672))) && g_1140);
        (****g_464) = p_23;
        (*p_23) = (safe_rshift_func_int8_t_s_s((0xC020L != ((void*)0 == (*g_154))), 4));
    }
    else
    {
        int32_t l_1147 = 0x2E159407L;
        struct S1 ***l_1193 = &g_347;
        int16_t l_1221 = 0L;
        struct S0 **l_1223 = (void*)0;
        struct S0 ***l_1222 = &l_1223;
        int32_t ***l_1239 = &g_69;
        uint16_t l_1240 = 0UL;
lbl_1253:
        (*g_170) = (***g_465);
        if ((p_21 > ((safe_rshift_func_int16_t_s_u((safe_add_func_int8_t_s_s(l_1147, 0x37L)), 13)) || (*p_20))))
        {
            struct S0 *l_1148 = &g_1149;
            int32_t l_1163 = 0x92197F00L;
            uint16_t l_1173 = 1UL;
            struct S1 *l_1198 = &g_168;
            struct S0 ** const * const l_1243 = &l_1223;
lbl_1252:
            l_1148 = (*g_1119);
            for (g_96.f5 = (-18); (g_96.f5 >= (-16)); g_96.f5 = safe_add_func_uint8_t_u_u(g_96.f5, 7))
            {
                int32_t *l_1182 = &l_1163;
                struct S0 ***l_1224 = &l_1223;
                struct S1 *l_1248 = &g_168;
                int32_t ***l_1251 = &g_170;
                for (g_1149.f6 = 19; (g_1149.f6 < 50); g_1149.f6 = safe_add_func_int16_t_s_s(g_1149.f6, 3))
                {
                    struct S0 * const * const **l_1154 = (void*)0;
                    struct S0 * const * const *l_1156 = &g_1119;
                    struct S0 * const * const **l_1155 = &l_1156;
                    const int32_t **l_1164 = (void*)0;
                    int32_t *l_1174 = &l_1163;
                    (*l_1155) = &g_1119;
                }
                (****g_465) = (l_1222 == l_1224);
                for (l_689 = (-26); (l_689 != 30); l_689 = safe_add_func_int32_t_s_s(l_689, 8))
                {
                    int16_t l_1234 = 1L;
                    const struct S1 *l_1247 = &g_144;
                    for (g_1178 = 0; (g_1178 > 15); g_1178++)
                    {
                        int16_t l_1231 = (-10L);
                        (****g_464) = (*g_69);
                        if ((*p_23))
                            break;
                        (***l_1065) = ((((l_1239 == (void*)0) ^ ((void*)0 != (*l_1224))) >= (l_1240 < (safe_mod_func_uint32_t_u_u((l_1243 == (void*)0), ((+l_1173) ^ ((safe_sub_func_uint32_t_u_u(g_96.f2, p_21)) >= 0x1C2FL)))))) == g_33);
                    }
                    if ((&l_1223 == &l_1223))
                    {
                        if (g_28)
                            goto lbl_835;
                        (***l_1065) = ((***l_1065) <= (l_1247 != l_1248));
                    }
                    else
                    {
                        (*g_27) = (***l_1239);
                        (**l_1239) = (*g_170);
                        (****g_465) = (safe_unary_minus_func_int8_t_s((!(l_1251 != l_1251))));
                    }
                    if (l_669)
                        goto lbl_1252;
                }
                if ((**g_170))
                    continue;
            }
        }
        else
        {
            uint32_t l_1254 = 0xB3395B6EL;
            (**g_69) = 0xED546A1BL;
            if (g_1149.f6)
                goto lbl_1253;
            (**l_1239) = func_25((l_1254 >= 1L));
        }
        (****g_464) = (void*)0;
    }
    return l_1255;
}
static int32_t * func_25(uint32_t p_26)
{
    int32_t *l_29 = &g_28;
    (*g_27) = (g_27 != &g_28);
    return l_29;
}
static int32_t * func_34(const int32_t * p_35, const int32_t * p_36, int32_t * p_37)
{
    uint32_t l_385 = 0xA7767F09L;
    struct S0 *l_400 = &g_96;
    const int32_t l_439 = 0x691C5F55L;
    const int32_t ****l_499 = (void*)0;
    const int32_t *****l_498 = &l_499;
    const struct S1 *l_636 = &g_168;
    int32_t *l_668 = &g_63;
    if ((*p_35))
    {
        int32_t ****l_378 = (void*)0;
        int32_t *****l_377 = &l_378;
        int16_t l_423 = 0xD642L;
        uint16_t l_451 = 0UL;
        int16_t l_466 = 0L;
        (*l_377) = &g_215;
        for (g_168.f4 = 0; (g_168.f4 <= 24); ++g_168.f4)
        {
            int32_t *****l_392 = &l_378;
            uint16_t l_399 = 65535UL;
            int32_t l_452 = 0xCD488DD1L;
            struct S1 ***l_480 = &g_347;
            const struct S0 ***l_481 = &g_154;
        }
    }
    else
    {
        int32_t ***l_529 = &g_170;
        int32_t *****l_534 = &g_515;
        const struct S0 ****l_635 = &g_153;
        for (g_168.f3 = 0; (g_168.f3 != 30); g_168.f3 = safe_add_func_int32_t_s_s(g_168.f3, 6))
        {
            int32_t *l_513 = &g_33;
            int32_t *****l_535 = &g_515;
            const struct S0 ***l_575 = &g_154;
            struct S1 **l_583 = (void*)0;
            uint16_t l_589 = 65533UL;
            for (g_96.f2 = (-9); (g_96.f2 >= 32); g_96.f2 = safe_add_func_uint8_t_u_u(g_96.f2, 2))
            {
                uint32_t l_518 = 18446744073709551615UL;
                int32_t **** const *l_530 = &g_515;
                l_513 = p_37;
                if (((((+((g_515 != (void*)0) && g_168.f5)) >= (safe_add_func_uint16_t_u_u(l_518, g_96.f3))) < ((safe_mod_func_int32_t_s_s((**g_69), g_96.f6)) | (safe_sub_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(g_144.f5, 6)), (safe_sub_func_uint8_t_u_u((((safe_mod_func_uint32_t_u_u((((((*g_465) == l_529) > l_518) > (-1L)) || g_168.f1), (*p_36))) || (*l_513)) >= (***l_529)), g_96.f4)))))) < (*l_513)))
                {
                    int8_t l_536 = 0L;
                    if ((0x8C67L >= (&g_347 != (void*)0)))
                    {
                        (*g_69) = func_38(l_518, l_518);
                    }
                    else
                    {
                        int32_t l_533 = 0x475C6A7CL;
                        (**g_170) = ((((l_530 == &g_465) && (safe_lshift_func_uint16_t_u_u(((((*g_464) == (void*)0) != (((***l_529) || l_533) ^ (***l_529))) | ((l_534 == &g_515) || g_96.f2)), 2))) & 1L) || (*l_513));
                        l_535 = &g_465;
                        (****g_465) = (((***l_529) ^ l_536) != ((((safe_mod_func_int8_t_s_s(8L, l_536)) && l_536) | (((-6L) != ((((safe_rshift_func_uint16_t_u_u((l_533 == ((safe_lshift_func_int16_t_s_s(((((*l_513) & 0x571FL) | l_533) == 0x23A9L), 3)) == 0x03L)), 0)) < (-9L)) < g_96.f2) | 0x30DAA9E5L)) <= 0L)) ^ 0x60L));
                        (**g_355) = (**g_355);
                    }
                    for (g_63 = (-29); (g_63 != (-9)); g_63 = safe_add_func_int32_t_s_s(g_63, 5))
                    {
                        const uint32_t l_545 = 0x84098E15L;
                        (*l_513) = (*p_37);
                        if (l_545)
                            continue;
                        (***g_215) = ((((*g_154) == (void*)0) ^ ((g_168.f3 ^ (((void*)0 == (*l_530)) < (safe_add_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((safe_add_func_int16_t_s_s(l_545, (safe_add_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_s((-9L), 6)) <= ((((+(safe_mod_func_uint16_t_u_u((l_518 == (safe_mod_func_uint8_t_u_u(g_168.f2, 1L))), 0x43CFL))) != g_96.f7) != g_144.f0) ^ 65530UL)), 1)), (***l_529))))), 0)), g_144.f1)), 0L)))) > g_144.f5)) | 0xC41DL);
                        if ((*p_35))
                            continue;
                    }
                    (***g_465) = func_38((((safe_lshift_func_uint16_t_u_s(2UL, 4)) > (1UL <= ((((0x0AD4L || (0x47D63294L | (-1L))) != (safe_rshift_func_uint16_t_u_s(l_536, ((safe_lshift_func_int16_t_s_u((g_33 <= l_536), 4)) ^ (g_33 | (*l_513)))))) | g_63) | g_144.f2))) > l_536), l_536);
                }
                else
                {
                    const struct S0 ****l_576 = &l_575;
                    (*l_576) = l_575;
                }
            }
            (***l_529) = (*p_36);
            (***l_529) = ((*l_513) <= g_168.f4);
            for (g_96.f8 = 0; (g_96.f8 >= (-14)); g_96.f8--)
            {
                int16_t l_588 = 0xBA20L;
                (*p_37) = ((*p_37) & (safe_sub_func_int32_t_s_s((safe_sub_func_int8_t_s_s(((g_96.f4 | (l_583 != (*g_355))) || (((**g_69) ^ (safe_rshift_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_u((((0xE43BL || (l_588 > (0xFBL != ((l_589 | 1UL) > (**g_69))))) != (*l_513)) == g_96.f3), 4)) == l_588), 0))) <= (*p_37))), g_96.f3)), l_588)));
                return p_37;
            }
        }
        if ((((((0x3E507135L == (safe_lshift_func_int16_t_s_u(4L, 10))) | ((**g_215) == p_35)) != (l_439 & (**g_69))) < (((l_400 == (void*)0) | ((8L < g_168.f6) || l_385)) & g_96.f7)) | (***l_529)))
        {
            uint8_t l_610 = 0x52L;
            if (((safe_mod_func_int16_t_s_s(((*p_36) == (((!0x268CL) == (!((safe_sub_func_uint32_t_u_u(((g_96.f8 == (safe_add_func_int8_t_s_s((safe_mod_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_u((((**g_355) != (**g_355)) <= (safe_mod_func_int8_t_s_s((((safe_sub_func_uint32_t_u_u(((void*)0 != &p_37), 6UL)) > ((safe_lshift_func_int8_t_s_u((-6L), g_96.f2)) == g_168.f4)) == g_144.f4), g_144.f6))), 4)) && 1UL), l_610)), 0x0EL))) < (****g_465)), 4294967295UL)) <= 0x25L))) || l_610)), l_610)) > g_96.f1))
            {
                int32_t *l_611 = (void*)0;
                (*g_170) = l_611;
                if (g_96.f3)
                    goto lbl_612;
lbl_612:
                (*p_37) = (*p_35);
                return (***g_465);
            }
            else
            {
                (**g_355) = (**g_355);
            }
            (**l_529) = (void*)0;
            if ((safe_add_func_uint16_t_u_u(((!(safe_add_func_int32_t_s_s((*p_37), (safe_add_func_int32_t_s_s((g_96.f0 | (safe_sub_func_uint8_t_u_u(((g_144.f4 != ((safe_add_func_int8_t_s_s(((-4L) == ((((safe_rshift_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(0x20L, (+((*p_37) >= g_96.f2)))), 11)) <= (safe_rshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((l_635 == (void*)0), 7L)), g_96.f5)), 15))) > 1L) & (-6L))), 0xF3L)) & 0L)) | 0xF7CFL), l_610))), 0xF7A3F036L))))) == g_168.f1), l_385)))
            {
                return (*g_69);
            }
            else
            {
                const struct S1 **l_637 = &l_636;
                (*l_637) = l_636;
            }
        }
        else
        {
            struct S0 * const *l_657 = &g_95;
            struct S0 * const **l_656 = &l_657;
            struct S0 * const ** const *l_655 = &l_656;
            uint32_t l_660 = 0x90EE5FB4L;
            for (g_168.f4 = 12; (g_168.f4 >= 33); ++g_168.f4)
            {
                struct S0 *l_661 = &g_96;
                int32_t l_667 = 0x3BA7BF27L;
            }
        }
    }
    return l_668;
}
static int32_t * func_38(uint8_t p_39, uint32_t p_40)
{
    int32_t *l_376 = &g_63;
    l_376 = (**g_215);
    (***g_215) = (**g_69);
    return (**g_215);
}
static int16_t func_41(int32_t * p_42, const uint8_t p_43, uint16_t p_44)
{
    int32_t *l_56 = &g_33;
    struct S0 **l_279 = &g_95;
    struct S0 *** const l_278 = &l_279;
    for (p_44 = 0; (p_44 >= 21); p_44++)
    {
        int16_t l_55 = 0x54C3L;
        int32_t l_343 = 0x113C8478L;
        int32_t ****l_345 = &g_215;
        struct S0 *l_375 = &g_96;
        for (g_33 = 0; (g_33 == (-25)); g_33 = safe_sub_func_int8_t_s_s(g_33, 9))
        {
            const int32_t *l_237 = &g_33;
            const int32_t **l_236 = &l_237;
            struct S0 **l_261 = &g_95;
            int32_t l_310 = (-6L);
        }
        (***g_215) = (((g_144.f4 <= ((0x8A20L != g_168.f5) >= g_96.f6)) || g_96.f6) < (safe_mod_func_int32_t_s_s(((g_96.f4 > p_44) >= ((((void*)0 == l_375) < (*l_56)) == 0x90FC01C5L)), (-9L))));
    }
    return p_43;
}
static uint8_t func_51(uint8_t p_52, uint32_t p_53, int32_t * p_54)
{
    uint32_t l_60 = 0x8647D02CL;
    int32_t *l_65 = (void*)0;
    int32_t * const *l_64 = &l_65;
    uint32_t l_71 = 1UL;
    uint8_t l_90 = 248UL;
    struct S0 *l_99 = &g_96;
    uint32_t l_100 = 1UL;
    struct S0 *l_159 = &g_96;
    const int8_t l_198 = 1L;
    struct S0 * const *l_217 = &g_95;
    struct S0 * const **l_216 = &l_217;
    l_64 = func_57(g_33, l_60);
    if ((*p_54))
    {
        int32_t **l_66 = &l_65;
        (*l_66) = &g_63;
        (*l_65) = ((&l_65 != (void*)0) == ((((safe_add_func_int8_t_s_s(((**l_66) >= (((*l_66) != (*l_66)) && 1UL)), ((**l_66) & ((0x6723L | 65535UL) >= 0xD865L)))) < 0x29L) & g_33) != 0xC46406CCL));
    }
    else
    {
        uint16_t l_72 = 0x7DE6L;
        struct S0 **l_118 = (void*)0;
        struct S1 *l_169 = (void*)0;
        uint16_t l_197 = 65532UL;
        g_69 = &g_27;
        l_72 = (l_71 && p_53);
    }
    return g_144.f3;
}
static int32_t * const * func_57(uint32_t p_58, int32_t p_59)
{
    uint32_t l_61 = 0UL;
    int32_t *l_62 = &g_63;
    l_61 = (&g_27 != (void*)0);
    (*l_62) = p_58;
    return &g_27;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_13;
    csmith_sink_ = g_28;
    csmith_sink_ = g_33;
    csmith_sink_ = g_63;
    csmith_sink_ = g_96.f0;
    csmith_sink_ = g_96.f1;
    csmith_sink_ = g_96.f2;
    csmith_sink_ = g_96.f3;
    csmith_sink_ = g_96.f4;
    csmith_sink_ = g_96.f5;
    csmith_sink_ = g_96.f6;
    csmith_sink_ = g_96.f7;
    csmith_sink_ = g_96.f8;
    csmith_sink_ = g_144.f0;
    csmith_sink_ = g_144.f1;
    csmith_sink_ = g_144.f2;
    csmith_sink_ = g_144.f3;
    csmith_sink_ = g_144.f4;
    csmith_sink_ = g_144.f5;
    csmith_sink_ = g_144.f6;
    csmith_sink_ = g_168.f0;
    csmith_sink_ = g_168.f1;
    csmith_sink_ = g_168.f2;
    csmith_sink_ = g_168.f3;
    csmith_sink_ = g_168.f4;
    csmith_sink_ = g_168.f5;
    csmith_sink_ = g_168.f6;
    csmith_sink_ = g_500;
    csmith_sink_ = g_973;
    csmith_sink_ = g_1140;
    csmith_sink_ = g_1149.f0;
    csmith_sink_ = g_1149.f1;
    csmith_sink_ = g_1149.f2;
    csmith_sink_ = g_1149.f3;
    csmith_sink_ = g_1149.f4;
    csmith_sink_ = g_1149.f5;
    csmith_sink_ = g_1149.f6;
    csmith_sink_ = g_1149.f7;
    csmith_sink_ = g_1149.f8;
    csmith_sink_ = g_1178;
    csmith_sink_ = g_1210;
    csmith_sink_ = g_1214;
    platform_main_end(0,0);
    return 0;
}
