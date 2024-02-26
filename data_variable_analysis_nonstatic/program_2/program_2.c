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
struct S0 {
   int32_t f0;
   int8_t f1;
   uint32_t f2;
   uint32_t f3;
   uint8_t f4;
   int32_t f5;
   uint32_t f6;
};
static uint32_t g_4 = 0xDED68044;
static uint32_t g_12 = 0x0F4F2301;
static uint32_t g_16 = 4294967293U;
static uint32_t g_19 = 1U;
static int16_t g_21 = 0x31EA;
static struct S0 g_28 = {-7,1,0xE65FBC01,0U,255U,0x1F205951,7U};
static uint32_t g_91 = 0x16C3B14A;
static struct S0 g_92 = {0xEA20016C,0xA4,0xD3122576,0U,0U,0x54C0A206,0x71D51AD8};
static int32_t g_120 = 0x835E52A1;
static int8_t g_159 = 1;
static uint32_t g_189 = 0U;
static uint16_t g_232 = 0x6768;
static uint32_t g_249 = 4294967295U;
static uint8_t g_250 = 2U;
static uint32_t g_383 = 0xE7B4870F;
static int32_t g_407 = 0xE980E34B;
static int8_t g_423 = 1;
static int32_t g_428 = 0;
static uint32_t g_430 = 4294967295U;
static int32_t g_488 = 0xE04766EC;
static uint32_t g_492 = 7U;
static uint32_t g_546 = 0x990C8106;
static uint32_t g_581 = 4294967295U;
static uint16_t g_709 = 0x4201;
static uint32_t g_789 = 0x1FF5F84A;
static int32_t g_793 = 0x2AF86749;
static int32_t g_795 = 0;
static uint32_t g_823 = 4294967295U;
static int32_t g_875 = 7;
static uint32_t g_877 = 0x12748CBF;
static uint16_t g_908 = 0x01E9;
static struct S0 g_911 = {-1,0xA1,4294967294U,0xFF22FEB5,255U,0xC0CCDA50,0x14384419};
static int32_t func_1(void);
static int32_t func_17(int32_t p_18);
inline static int32_t func_29(int16_t p_30, int8_t p_31, int8_t p_32, int32_t p_33);
static uint16_t func_54(uint32_t p_55, uint8_t p_56, uint8_t p_57, uint32_t p_58, uint32_t p_59);
inline static int16_t func_60(uint16_t p_61, int8_t p_62, uint32_t p_63, uint8_t p_64);
static uint8_t func_71(uint32_t p_72, int32_t p_73);
inline static int16_t func_74(int8_t p_75, int32_t p_76, int16_t p_77, uint32_t p_78);
static uint32_t func_81(int32_t p_82, uint16_t p_83, int16_t p_84, int16_t p_85, int8_t p_86);
static uint8_t func_98(int16_t p_99, uint16_t p_100, uint32_t p_101, int32_t p_102, uint8_t p_103);
static int32_t func_111(uint8_t p_112);
static int32_t func_1(void)
{
    uint8_t l_5 = 251U;
    int8_t l_13 = (-1);
    int32_t l_22 = 0x80A7C6DD;
    uint16_t l_25 = 0x36C9;
    uint32_t l_26 = 0x1606DC06;
    int16_t l_27 = 0xF8DE;
    int16_t l_34 = (-1);
    int16_t l_41 = (-5);
    int32_t l_650 = 0xE9A8134E;
    uint32_t l_652 = 0xDA347022;
    int32_t l_755 = (-2);
    int32_t l_790 = 0x8CAA78DE;
    int32_t l_851 = 0x2FFAA111;
    if ((safe_lshift_func_uint8_t_u_s((0xA624CDB8 >= (g_4 <= (g_4 >= (((((g_4 ^ g_4) | l_5) || (l_5 < (safe_lshift_func_int16_t_s_u(((l_5 || (safe_lshift_func_uint8_t_u_u((l_13 = (safe_sub_func_int16_t_s_s(g_12, g_12))), 7))) == g_4), l_5)))) <= 0x94FF) && l_5)))), 1)))
    {
        g_16 &= (safe_lshift_func_int16_t_s_u(l_5, g_4));
        if (g_16)
            goto lbl_20;
    }
    else
    {
lbl_20:
        g_19 = func_17(g_16);
lbl_803:
        l_22 = (g_21 = 0xBEBF3B8C);
        l_27 = ((g_21 <= func_17(g_21)) & (safe_sub_func_uint8_t_u_u(func_17((l_25 != (g_19 == l_26))), (0xB2811FFB < g_21))));
        g_28 = g_28;
    }
    if (func_29(l_27, l_27, l_34, (safe_sub_func_int32_t_s_s((safe_add_func_int8_t_s_s((g_28.f1 = g_28.f4), (safe_mod_func_int16_t_s_s(((l_41 | ((safe_add_func_int16_t_s_s((l_34 ^ (0x82E7 != (func_17(l_41) && g_28.f3))), 0U)) <= g_28.f6)) >= 0xE7E6), l_22)))), l_5))))
    {
        uint32_t l_610 = 4294967288U;
        int32_t l_620 = 0x4F684B74;
        int32_t l_641 = 0xDDB8F9B5;
        int32_t l_642 = 0xDEA58A81;
        if ((safe_add_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_s((safe_mod_func_uint32_t_u_u((safe_add_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(g_92.f2, (safe_mod_func_uint16_t_u_u((((((4294967293U && ((((safe_rshift_func_uint8_t_u_s((~(g_159 < ((safe_sub_func_uint16_t_u_u(((((l_610 ^= (g_189 & (-1))) & (safe_sub_func_int16_t_s_s(l_41, (safe_rshift_func_uint16_t_u_u(4U, 4))))) ^ g_546) != (safe_add_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((!((g_21 ^= l_25) < g_28.f0)), 10)), l_34))), g_430)) > 65531U))), g_92.f6)) < 6U) >= g_488) < g_120)) <= 3U) && 0U) <= 7U) > 1U), 65535U)))), 65535U)), g_488)), g_91)) >= l_13), l_620)))
        {
            uint16_t l_630 = 65529U;
            g_28.f0 &= (~(safe_add_func_int16_t_s_s((safe_mod_func_int8_t_s_s((safe_mod_func_int32_t_s_s(((safe_lshift_func_uint16_t_u_s((l_630 < (l_41 <= (0x0830 | ((((safe_rshift_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((safe_sub_func_int32_t_s_s(g_12, l_13)), l_5)), ((safe_add_func_int16_t_s_s(0xE4C7, (g_92.f1 | 0U))) <= l_630))), g_28.f3)) & l_610) > g_28.f3) ^ g_189)))), g_19)) ^ 7), l_641)), 0x76)), 0x5804)));
        }
        else
        {
            g_28.f0 ^= (g_21 <= l_41);
        }
        l_642 ^= l_620;
        return g_92.f0;
    }
    else
    {
        int32_t l_673 = 0xAD875EEA;
        int32_t l_678 = 0x8DBDDD7B;
        int32_t l_797 = 1;
        int16_t l_853 = 0x0F8A;
        int8_t l_899 = 0xBB;
        uint32_t l_920 = 0xF80D1554;
        int8_t l_982 = (-5);
        if (g_92.f1)
        {
            int32_t l_647 = 0x8E3EDC70;
            int32_t l_648 = 0x1F78447B;
            int32_t l_649 = (-4);
            int32_t l_651 = 1;
            for (l_41 = 0; (l_41 > (-15)); l_41 = safe_sub_func_uint32_t_u_u(l_41, 7))
            {
                return g_28.f1;
            }
            l_647 = (l_22 ^ (safe_sub_func_int16_t_s_s(1, g_4)));
            l_652++;
        }
        else
        {
            uint32_t l_667 = 4294967292U;
            uint8_t l_674 = 0U;
            int32_t l_675 = 0;
            int32_t l_708 = 0x839A9A97;
            struct S0 l_828 = {0xB69E34FE,-5,4294967294U,6U,0U,0x8088D5B3,4294967295U};
            int32_t l_852 = 0x8815894D;
            int32_t l_930 = 0x3C7C0536;
            int32_t l_962 = 0xAC3C29EC;
lbl_901:
            for (g_28.f5 = 0; (g_28.f5 == 25); g_28.f5 = safe_add_func_int16_t_s_s(g_28.f5, 4))
            {
                int16_t l_669 = 0x9194;
                int32_t l_670 = 0x8AF9D683;
                l_675 ^= (safe_lshift_func_int16_t_s_u((safe_sub_func_uint16_t_u_u((g_492 && (((safe_add_func_uint8_t_u_u((((((safe_add_func_int32_t_s_s(g_189, (g_92.f6 = (((((safe_rshift_func_int8_t_s_u((g_28.f1 = ((l_669 = (l_667 != (!0x6B))) || ((g_4--) >= (l_22 = (g_92.f0 = l_667))))), l_673)) < (g_250 < (-8))) ^ l_670) | l_674) | 1)))) <= l_670) < 3U) != l_670) > l_670), l_674)) | l_652) <= 8)), (-9))), 15));
            }
lbl_834:
            for (g_12 = 0; (g_12 <= 37); ++g_12)
            {
                uint32_t l_701 = 1U;
                uint8_t l_702 = 0x4E;
                int32_t l_707 = 0x67B505FA;
                int8_t l_756 = (-1);
                uint8_t l_788 = 0x3E;
                l_678 = l_673;
                if ((safe_lshift_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((safe_add_func_int8_t_s_s((!(-1)), (g_92.f1 = (((g_28.f1 = (safe_add_func_int8_t_s_s((((safe_sub_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_s((safe_add_func_uint8_t_u_u(0x12, (l_673 > (g_92.f4 = (l_22 = (g_250--)))))), (((safe_add_func_int16_t_s_s((-10), (~(l_650 &= (g_21 = (safe_rshift_func_uint16_t_u_u((g_232 = l_701), 15))))))) <= (l_702 == (((((safe_mod_func_int32_t_s_s(g_91, 0xD4F4CF4E)) && (l_707 = (l_702 != l_678))) <= 0) < g_428) == l_702))) | l_667))) && (-1)), l_673)) >= g_28.f1) != 0xF16C), l_41))) != (-1)) > l_678)))), g_92.f2)), g_12)))
                {
                    uint8_t l_732 = 0xEF;
                    ++g_709;
                    g_428 = (g_28.f0 = g_250);
                    l_675 = g_28.f5;
                    if ((safe_rshift_func_uint8_t_u_s(((g_4 == (safe_add_func_int8_t_s_s((safe_sub_func_int8_t_s_s((g_92.f2 >= 0xEC), (g_28.f2 || (((safe_add_func_uint32_t_u_u((((0 && g_28.f2) && ((--g_232) >= 65535U)) != ((g_92.f6 < (l_707 ^ 0xE220D12E)) && l_674)), l_707)) > l_674) && l_652)))), l_675))) > g_92.f3), g_709)))
                    {
                        uint32_t l_731 = 4294967295U;
                        l_708 = (((-1) ^ g_19) ^ (safe_mod_func_int16_t_s_s((((safe_lshift_func_int8_t_s_s((1U > (((safe_rshift_func_uint8_t_u_u((g_92.f4 &= ((l_650 &= (!(((safe_rshift_func_uint8_t_u_u(l_731, 6)) <= (0xFA0518D1 == l_678)) & (0x7F2B < ((0x31D18E0C || g_12) && l_732))))) < l_678)), 2)) ^ g_232) != g_407)), l_26)) || g_92.f0) & (-8)), g_12)));
                        if (l_732)
                            continue;
                        g_428 = l_731;
                        if (g_4)
                            goto lbl_834;
                    }
                    else
                    {
                        if (g_19)
                            break;
                        g_428 = (safe_lshift_func_int8_t_s_u((g_250 != 9U), 6));
                        if (g_28.f0)
                            continue;
                        if (g_19)
                            break;
                    }
                }
                else
                {
                    uint16_t l_763 = 65534U;
                    int32_t l_794 = 4;
                    int32_t l_796 = (-1);
                    uint16_t l_810 = 65526U;
                    int32_t l_819 = 0xC91FEF62;
                    if ((g_28.f6 ^ ((safe_add_func_uint16_t_u_u(((((safe_rshift_func_uint8_t_u_s((((safe_add_func_uint16_t_u_u((--g_232), g_92.f3)) <= (l_707 = (safe_sub_func_int32_t_s_s(l_707, 4294967295U)))) <= ((safe_lshift_func_int8_t_s_u((((l_650 &= g_92.f4) != 5) & ((!0x5E) > (safe_mod_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u((((l_673 |= (safe_sub_func_int8_t_s_s(0x81, ((!l_674) && 0xDE5779E1)))) | g_21) == l_701), g_28.f4)), l_5)))), l_755)) && g_16)), l_702)) < g_92.f1) != l_667) | l_708), g_16)) != l_756)))
                    {
                        return g_12;
                    }
                    else
                    {
                        uint8_t l_786 = 1U;
                        int32_t l_791 = 0x80991AD8;
                        int32_t l_792 = 0;
                        uint32_t l_798 = 0xE98A9931;
                        l_792 ^= (g_428 = (l_791 = ((g_232 |= (l_41 & (safe_rshift_func_uint8_t_u_s(((((safe_sub_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(l_763, 9)), ((safe_rshift_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_s(g_249, (((safe_add_func_uint8_t_u_u((g_789 = (safe_mod_func_uint8_t_u_u(((safe_add_func_int8_t_s_s((((g_709 = g_16) & (safe_add_func_uint8_t_u_u(((safe_mod_func_int8_t_s_s((safe_add_func_uint16_t_u_u((((g_92.f4 &= (safe_add_func_int32_t_s_s((g_383 >= ((l_755 || l_708) < (safe_add_func_int16_t_s_s((l_786 == (+g_28.f3)), 2)))), g_28.f1))) ^ g_12) <= g_28.f4), l_667)), g_16)) & l_788), g_250))) <= l_786), g_250)) == g_28.f1), g_249))), l_790)) >= l_652) == (-9)))), g_21)) | l_667), 7)) && 0xE8B4))) <= l_763) >= 1U) & 0x50), g_28.f3)))) < 1U)));
                        l_798--;
                        g_428 = g_581;
                    }
                    for (l_26 = 0; (l_26 <= 57); l_26 = safe_add_func_int32_t_s_s(l_26, 1))
                    {
                        if (g_21)
                            goto lbl_803;
                    }
                    if ((safe_add_func_uint16_t_u_u(0x9841, ((((safe_rshift_func_uint8_t_u_s(l_650, (((g_159 |= (0x6F76 >= ((safe_rshift_func_uint16_t_u_s(l_810, (l_796 &= (l_763 || (safe_lshift_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_s(g_92.f5, ((((l_701 <= (safe_lshift_func_int16_t_s_u((safe_add_func_int8_t_s_s(g_428, (-4))), g_21))) & l_763) == l_756) | g_28.f4))) != 0x00), 4)))))) & g_428))) || g_4) == l_708))) && l_819) <= l_673) >= 1U))))
                    {
                        int32_t l_820 = 0x66AC97FF;
                        int32_t l_821 = 1;
                        int32_t l_822 = 0xD5BD87D7;
                        g_823--;
                        g_488 &= ((safe_rshift_func_int8_t_s_u(l_673, 6)) >= ((g_21 = 7) && g_709));
                        return g_19;
                    }
                    else
                    {
                        uint32_t l_829 = 4294967286U;
                        g_92 = g_28;
                        l_828 = (g_92 = g_92);
                        l_829--;
                    }
                    for (g_92.f0 = (-30); (g_92.f0 == (-15)); g_92.f0 = safe_add_func_uint16_t_u_u(g_92.f0, 7))
                    {
                        l_708 = g_249;
                        return l_701;
                    }
                }
            }
            g_795 = (((l_852 = (safe_lshift_func_uint16_t_u_s((l_708 = (safe_sub_func_uint32_t_u_u((l_675 = ((-2) && (safe_sub_func_int16_t_s_s((safe_mod_func_int16_t_s_s(((l_650 = (((l_797 ^ 0x5C) != (safe_lshift_func_uint16_t_u_u(((((0xD81C != (safe_lshift_func_int8_t_s_s((0xDA9B | (safe_rshift_func_uint16_t_u_u((l_22 |= g_92.f4), 9))), (l_678 < (g_709 = (l_828.f0 &= ((g_423 >= (safe_mod_func_uint16_t_u_u((l_851 = (l_667 > l_673)), l_652))) && 6))))))) & l_673) != l_678) && l_828.f4), 10))) != (-2))) & g_92.f4), g_488)), l_652)))), 0xA05E043C))), 12))) <= 248U) & l_853);
            for (g_92.f2 = 0; (g_92.f2 != 59); g_92.f2++)
            {
                uint32_t l_867 = 4294967286U;
                int32_t l_874 = 0x9CB12409;
                uint16_t l_900 = 0U;
                for (g_28.f1 = (-12); (g_28.f1 == (-8)); g_28.f1 = safe_add_func_int32_t_s_s(g_28.f1, 9))
                {
                    int32_t l_859 = 0xF3AE75A7;
                    int32_t l_876 = 0x69F8B115;
                    int16_t l_888 = (-1);
                    int32_t l_898 = (-1);
                    int32_t l_914 = 0xB847C9DF;
                    int32_t l_981 = (-1);
                    if ((l_708 = (g_492 < 0xD814)))
                    {
                        int8_t l_873 = 9;
                        l_873 = ((g_709 = (safe_unary_minus_func_uint32_t_u(((l_859 & ((1 <= (!(g_28.f3 < (safe_add_func_int32_t_s_s((safe_add_func_int8_t_s_s((safe_add_func_int8_t_s_s(l_867, 0x60)), (g_92.f2 ^ (safe_sub_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(g_91, ((~g_823) & (8 >= 0x2451)))), g_546))))), 3))))) && 0x0341)) < g_92.f6)))) >= 0xC121);
                        ++g_877;
                        g_428 = ((l_650 = 5) > ((l_900 = (g_21 = (((((safe_sub_func_uint8_t_u_u((g_92.f4 = ((((safe_sub_func_int32_t_s_s(((safe_mod_func_uint8_t_u_u(0x76, 0xE6)) < ((g_249 != (safe_add_func_int32_t_s_s(g_383, (l_888 & 0xCB22A602)))) > (safe_add_func_uint8_t_u_u(l_859, (((safe_rshift_func_uint16_t_u_u((l_852 = (!(((l_876 = (((safe_add_func_uint16_t_u_u(((g_232++) < (g_709 = ((((g_28.f1 && 0) != 0x0E) & 4294967291U) < l_867))), l_873)) <= l_41) > g_28.f3)) <= l_898) < g_21))), l_899)) & l_859) || l_873))))), l_873)) >= 0xF9050520) || (-8)) < g_793)), g_28.f2)) ^ g_16) > l_790) || 4U) && g_92.f3))) >= g_159));
                    }
                    else
                    {
                        if (g_92.f1)
                            goto lbl_901;
                        l_874 |= (l_828.f5 | (((l_867 < (safe_mod_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(l_898, 0U)), 6)), l_828.f5))) ^ g_709) ^ g_709));
                        g_908--;
                    }
                    if ((l_852 > 0xA1DD))
                    {
                        g_911 = (l_828 = g_28);
                    }
                    else
                    {
                        uint32_t l_912 = 1U;
                        l_912 |= g_430;
                        g_911.f0 &= (((~(-1)) < (((l_914 <= ((safe_sub_func_uint32_t_u_u(((((g_428 = 8) ^ (+((((g_232 = (safe_sub_func_int32_t_s_s((l_920 = (l_874 == l_708)), g_488))) && ((safe_rshift_func_uint8_t_u_s(((safe_rshift_func_uint8_t_u_s((safe_unary_minus_func_uint8_t_u((((0U != 0x9D46) > (safe_sub_func_int32_t_s_s((safe_add_func_uint8_t_u_u(l_828.f2, g_875)), g_4))) & 0x18E4))), 3)) < g_92.f6), 0)) >= g_581)) | g_249) <= 0xFB))) ^ g_911.f6) <= 5U), g_21)) & l_888)) && l_930) >= 0x2604)) <= 0xA5);
                        g_120 ^= ((safe_add_func_uint32_t_u_u(g_159, (((+(((safe_mod_func_int8_t_s_s((l_652 != (l_675 = (safe_sub_func_int16_t_s_s(((0x4E & ((g_28.f4 = g_16) & (safe_rshift_func_int16_t_s_u((safe_unary_minus_func_uint32_t_u((safe_rshift_func_int8_t_s_u((((safe_rshift_func_int8_t_s_u((((((safe_rshift_func_uint16_t_u_u(((g_908 | 255U) == (l_652 <= ((l_852 = ((safe_lshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((safe_add_func_int8_t_s_s(((~(safe_lshift_func_uint8_t_u_u(((l_914 |= (0x060F & (safe_lshift_func_uint16_t_u_s((safe_add_func_int8_t_s_s((((((l_797 = (safe_sub_func_uint16_t_u_u((((g_91 != g_875) <= l_678) && l_900), 0))) >= g_423) > l_898) > 0x20) && 1U), g_28.f2)), 0)))) < 0x5866), 6))) == 1U), l_912)), 4)), 1)) < g_4)) < g_28.f5))), 1)) & g_911.f4) & l_912) != l_876) > l_874), 2)) <= l_678) & 0U), 1)))), 5)))) <= l_920), l_25)))), g_249)) != g_92.f5) | l_900)) ^ 0x2FA3450C) | 1U))) < 0x141B5128);
                        if (l_962)
                            continue;
                    }
                    l_982 = (l_853 ^ (l_859 != ((safe_lshift_func_uint16_t_u_s((0x3010B4AC & l_650), (safe_rshift_func_int8_t_s_s((safe_mod_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(g_28.f1, 7)), (safe_add_func_int8_t_s_s(((safe_mod_func_int8_t_s_s((6U < (l_981 = (safe_mod_func_uint32_t_u_u((0 < 1U), (safe_rshift_func_uint8_t_u_u(l_859, 5)))))), g_407)) < 0x096EA713), g_4)))), l_828.f4)))) != g_232)));
                    return l_982;
                }
            }
        }
    }
    l_22 = ((safe_add_func_int16_t_s_s(((((l_5 > ((((safe_rshift_func_int16_t_s_s(g_92.f2, (safe_rshift_func_uint16_t_u_u(0xB437, g_911.f6)))) & g_430) > (~l_22)) ^ (2 || (safe_lshift_func_uint16_t_u_s(l_650, 12))))) <= 0xCF) <= g_407) <= 0x087F), g_492)) > g_488);
    return g_795;
}
static int32_t func_17(int32_t p_18)
{
    return p_18;
}
inline static int32_t func_29(int16_t p_30, int8_t p_31, int8_t p_32, int32_t p_33)
{
    uint8_t l_44 = 0x03;
    int32_t l_79 = 0x3CDB7CFF;
    int32_t l_80 = 0xA36B4E13;
    uint16_t l_90 = 0xE340;
    int32_t l_571 = 6;
    int32_t l_576 = 0xD37360B3;
    int32_t l_578 = 1;
    int32_t l_579 = 0x26440F52;
    uint16_t l_591 = 0x0DED;
    ++l_44;
lbl_586:
    for (g_28.f0 = 15; (g_28.f0 > 1); g_28.f0 = safe_sub_func_int8_t_s_s(g_28.f0, 6))
    {
        int16_t l_89 = 0x0F3E;
        int32_t l_572 = 0x5E52DE21;
        int32_t l_573 = 0x8B0D6005;
        int32_t l_574 = 0;
        int32_t l_575 = 0x4E8433C7;
        int32_t l_577 = (-4);
        int32_t l_580 = 8;
        for (g_28.f5 = (-7); (g_28.f5 == 18); g_28.f5 = safe_add_func_uint16_t_u_u(g_28.f5, 6))
        {
            uint16_t l_53 = 0xC8E4;
            int32_t l_177 = 0;
            l_571 &= (((l_53 = (safe_sub_func_uint32_t_u_u(0xFF9BDEFA, ((-1) == (g_21 = l_44))))) > l_44) || (func_54((g_28.f0 == func_60(g_12, ((safe_sub_func_uint8_t_u_u(((--g_28.f4) > ((safe_lshift_func_uint8_t_u_u(((p_32 = 0x84) <= func_71((func_74((p_31 |= (l_80 = (l_79 |= (-1)))), (func_81((safe_mod_func_int32_t_s_s(0x542D3F7C, l_89)), l_90, l_53, p_30, g_91) >= g_28.f3), g_92.f1, l_90) < l_177), l_89)), l_89)) != p_33)), 0xE3)) || 0x7CFD9A5C), p_33, g_28.f6)), l_90, g_407, l_89, g_423) || 0xFA6F));
        }
        g_581++;
        return g_12;
    }
    l_79 &= l_90;
    for (p_31 = 0; (p_31 > 15); p_31 = safe_add_func_int16_t_s_s(p_31, 1))
    {
        uint8_t l_592 = 250U;
        if (g_28.f4)
            goto lbl_586;
        if (l_579)
            break;
        l_592 = (safe_rshift_func_int8_t_s_s((g_92.f1 |= (safe_rshift_func_int16_t_s_s(l_591, 15))), 2));
    }
    return p_30;
}
static uint16_t func_54(uint32_t p_55, uint8_t p_56, uint8_t p_57, uint32_t p_58, uint32_t p_59)
{
    int32_t l_551 = 9;
    int32_t l_560 = (-1);
    int32_t l_561 = (-1);
    int8_t l_568 = 0x59;
    int32_t l_569 = 0x5E024383;
    uint32_t l_570 = 7U;
    l_570 |= (l_569 &= (((safe_sub_func_int16_t_s_s((0x0A ^ l_551), ((((l_551 & (safe_lshift_func_int16_t_s_s(((p_55++) | (safe_sub_func_int16_t_s_s((-10), (1 > ((0 >= (safe_add_func_uint16_t_u_u(((l_561 = (l_560 = (-6))) >= (((safe_mod_func_int32_t_s_s(l_551, (((((safe_add_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(l_568, 0x42)), p_57)) && p_57) == l_568) > 0xCF5EBA1C) ^ 0x54))) || p_59) == 1U)), l_568))) & 0x1C))))), 6))) >= g_91) > 1) <= l_568))) ^ p_56) >= l_568));
    l_569 ^= (-6);
    return g_91;
}
inline static int16_t func_60(uint16_t p_61, int8_t p_62, uint32_t p_63, uint8_t p_64)
{
    struct S0 l_178 = {0x7D859D8D,0x1D,0U,0x60A43F84,0x5B,-8,0x2FE6CD9D};
    struct S0 l_179 = {0x57905800,-1,0x296350F6,0x7EF8C87A,0xCF,-1,0xBD86A01D};
    int32_t l_180 = (-1);
    int32_t l_181 = 0x21460D04;
    int32_t l_182 = 0;
    uint16_t l_183 = 65535U;
    int32_t l_186 = 0x14961C1C;
    int32_t l_187 = 0xD915A15C;
    int32_t l_188 = (-7);
    uint32_t l_201 = 4294967295U;
    int32_t l_210 = 0x22751AD0;
    uint32_t l_320 = 0x24DFF55E;
    uint32_t l_456 = 4294967295U;
    uint32_t l_509 = 0xBE0F0034;
    int32_t l_548 = 0x3CE2FE9E;
    l_179 = l_178;
lbl_293:
    ++l_183;
lbl_301:
    --g_189;
    if ((((l_178.f0 = ((((safe_rshift_func_uint16_t_u_u(g_159, (0x1FE2E2A7 ^ (p_63 = (p_64 || (safe_add_func_uint16_t_u_u((l_182 = (+l_180)), ((safe_add_func_uint8_t_u_u((((((safe_mod_func_uint32_t_u_u(l_201, l_183)) && (safe_add_func_int8_t_s_s((-4), (p_64 |= ((((safe_mod_func_int32_t_s_s(((safe_lshift_func_uint16_t_u_s(l_181, 0)) || (safe_lshift_func_int8_t_s_s(p_63, 4))), p_61)) | l_210) >= p_63) < l_178.f4))))) & p_63) == g_189) <= l_179.f0), (-1))) < l_180)))))))) || 5) >= 0xE156) & g_16)) != g_92.f1) != 0x7DD34D88))
    {
        uint8_t l_227 = 0xF2;
        int32_t l_248 = 0xCCA3F031;
        int32_t l_263 = 1;
        struct S0 l_303 = {1,1,2U,1U,0x61,0x234A52FF,4294967295U};
        struct S0 l_333 = {0x4DC4D792,6,0U,0U,254U,0,0xA442AE9B};
        int32_t l_425 = 0xFCE30931;
        int32_t l_426 = 0xFDB41F92;
        int32_t l_429 = 8;
        uint16_t l_455 = 0x6420;
        uint16_t l_501 = 1U;
        for (g_92.f2 = 0; (g_92.f2 > 49); g_92.f2 = safe_add_func_uint8_t_u_u(g_92.f2, 6))
        {
            uint32_t l_213 = 0x8D31AF41;
            int32_t l_216 = 1;
            uint32_t l_290 = 0U;
            struct S0 l_304 = {0x72278139,1,0xCEEFD678,0xBA8A70E6,0x6E,0xDC38A905,0x84143BCC};
            uint32_t l_319 = 0xDC29E298;
            int32_t l_325 = (-1);
            uint16_t l_386 = 1U;
            ++l_213;
            l_216 = g_16;
            if ((65529U >= p_63))
            {
                uint32_t l_224 = 0U;
                int32_t l_226 = 0x268CB1CE;
                l_188 &= (safe_sub_func_int32_t_s_s(1, g_92.f3));
                l_216 = ((l_227 = ((((g_28.f1 = (((((p_64 < (((g_92.f3 || ((+(7U & g_28.f5)) != l_188)) == 0xA0) > (g_120 = (l_226 ^= (((7 >= (l_224 |= (g_92.f0 = (safe_lshift_func_uint16_t_u_s(l_213, 2))))) == ((safe_unary_minus_func_uint8_t_u(0U)) >= l_213)) & p_62))))) > 0U) ^ 0x3818) >= 0x21B4F9A3) > g_159)) || p_64) > 0x14CE) || 0xC1)) == l_179.f2);
            }
            else
            {
                int16_t l_259 = (-4);
                uint32_t l_291 = 0x741E85B1;
                int32_t l_292 = (-10);
                int32_t l_317 = 2;
                l_216 = (safe_add_func_uint8_t_u_u((0x35 != ((((-7) ^ 1) && (safe_mod_func_uint16_t_u_u((g_232 &= p_64), (g_250 = (safe_lshift_func_uint16_t_u_u(((l_213 && (safe_mod_func_int16_t_s_s(3, (safe_mod_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s((0x4D03 ^ (l_179.f0 = (g_249 |= (safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((g_92.f4 = (safe_unary_minus_func_int8_t_s((l_248 = (0U & ((safe_lshift_func_uint16_t_u_u(65533U, p_62)) ^ l_178.f2)))))), g_91)), 4))))), l_213)), p_63))))) <= p_64), 5)))))) > l_182)), 0x82));
                for (l_180 = (-22); (l_180 <= 2); l_180 = safe_add_func_uint16_t_u_u(l_180, 2))
                {
                    for (l_187 = 0; (l_187 == 24); l_187++)
                    {
                        l_188 = (g_120 = (g_28.f5 | g_21));
                        return g_12;
                    }
                    return l_179.f0;
                }
                g_120 &= (safe_add_func_uint32_t_u_u(l_216, (safe_sub_func_uint8_t_u_u((l_259 < (((l_263 = (p_61 != ((((0 ^ (!(((-1) || p_61) | p_62))) > g_249) ^ (l_248 = 7)) < l_259))) && 1) || g_28.f2)), l_179.f3))));
                for (l_180 = 0; (l_180 == (-11)); l_180 = safe_sub_func_uint32_t_u_u(l_180, 9))
                {
                    uint8_t l_289 = 248U;
                    int32_t l_318 = 0x826BE533;
                    uint32_t l_327 = 4294967289U;
                    uint32_t l_385 = 0xBAE2EA2E;
                    for (g_92.f6 = 0; (g_92.f6 == 36); g_92.f6++)
                    {
                        uint16_t l_270 = 65531U;
                        g_92.f0 = ((l_292 = (((g_28.f4 ^= (((((l_263 = (safe_sub_func_int8_t_s_s(0, ((((p_62 ^= (l_270 = g_19)) <= (safe_unary_minus_func_int8_t_s((safe_rshift_func_uint16_t_u_s(((safe_mod_func_uint16_t_u_u(((g_21 = p_61) ^ p_64), (safe_sub_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_u(((safe_unary_minus_func_uint32_t_u((safe_sub_func_int16_t_s_s(l_213, ((safe_sub_func_int32_t_s_s((p_64 && (safe_sub_func_int32_t_s_s((((l_216 = (((safe_lshift_func_int8_t_s_u(((0xFD01 && (g_92.f6 < (-1))) || l_289), 7)) != g_249) || l_259)) == 0x59171452) < l_290), l_259))), g_232)) ^ l_291))))) >= (-8)), 8)) ^ l_259), 0x73CA)))) >= 4U), 1))))) != l_263) ^ g_120)))) <= 0x32B8) && 0xDF) == l_291) == p_63)) <= 0x51) == p_63)) != 0x52);
                        if (l_210)
                            goto lbl_293;
                        return g_92.f1;
                    }
                    if ((((safe_rshift_func_int8_t_s_s(((l_263 = (safe_mod_func_uint32_t_u_u(0x9D5596D2, p_64))) && 65535U), 6)) & l_289) | p_64))
                    {
                        uint8_t l_298 = 1U;
                        l_298--;
                        l_292 = l_289;
                        if (l_210)
                            goto lbl_301;
                        if (p_64)
                            break;
                    }
                    else
                    {
                        struct S0 l_302 = {0,-5,0x5A53CB9E,0xFED7957F,1U,0x8750D81A,0U};
                        l_304 = (l_303 = (l_179 = (l_302 = g_28)));
                    }
                    if ((g_28.f4 >= g_92.f0))
                    {
                        l_178 = (l_179 = l_179);
                        l_248 |= (safe_rshift_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_s((0x37185AD0 >= ((((safe_sub_func_int32_t_s_s(l_292, ((safe_lshift_func_uint16_t_u_s((p_61 = ((l_318 = (safe_mod_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((4U | ((g_232 = ((l_317 ^ (0xC5D3 && p_62)) && ((p_62 >= (l_210 = (l_303.f2 | ((l_303.f6 != 0x12AE39DF) & p_63)))) & l_292))) >= p_61)), l_292)), 0x1A))) == 0)), 4)) == l_319))) > p_63) | l_320) > 0xAE)), 4)) | 0x55), 15));
                    }
                    else
                    {
                        struct S0 l_332 = {0xD7D5E941,0x47,1U,4294967295U,5U,0x02ED9ACA,0U};
                        uint32_t l_384 = 0U;
                        int32_t l_387 = 0xDA117F8C;
                        g_92.f0 = ((+(safe_lshift_func_int8_t_s_s((-3), (safe_unary_minus_func_int32_t_s(((g_249 < (l_325 <= (((safe_unary_minus_func_uint32_t_u((l_327 || 0x9079))) ^ 0x14FE) == ((0x00 > ((safe_rshift_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(((p_63 <= (g_92.f5 & (-8))) != g_21), 0xFFF0)), 9)) != p_62)) | 1U)))) < p_62)))))) >= 1U);
                        l_333 = (l_332 = l_304);
                        l_387 &= (safe_unary_minus_func_uint8_t_u((((safe_mod_func_int8_t_s_s((g_28.f1 &= (g_92.f1 = (safe_mod_func_int8_t_s_s(p_63, (safe_lshift_func_uint16_t_u_s((safe_mod_func_int32_t_s_s((((safe_mod_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((((((safe_sub_func_uint8_t_u_u((((safe_add_func_int8_t_s_s((safe_sub_func_int8_t_s_s((safe_mod_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(l_263, 1)), 11)), g_28.f2)), 0U)), 0x24)) ^ (((g_232 &= (((((safe_sub_func_int8_t_s_s(((safe_mod_func_int8_t_s_s((((safe_lshift_func_uint8_t_u_u(0x01, ((((p_64 = (safe_lshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((safe_unary_minus_func_uint8_t_u(l_259)), ((g_91 || (safe_rshift_func_int8_t_s_s(((((safe_add_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((g_383 ^= (l_332.f0 &= (+(safe_add_func_uint16_t_u_u(l_179.f1, p_61))))), g_21)), 0x7F)), p_64)), l_303.f6)) == 0x6BBA4375) < l_384) < 1U), l_317))) || l_179.f6))), p_61))) ^ l_213) != 0U) && l_385))) >= p_61) == 249U), g_92.f0)) && p_61), l_386)) != p_61) == l_303.f4) < p_63) == p_61)) < p_63) | l_327)) || g_120), l_385)) && 65535U) != l_332.f6) | 65535U) | p_62), 4294967287U)), 0x936A)) != l_303.f2) | g_159), g_249)), 3)))))), g_92.f0)) < 0x0025E17D) >= 1)));
                    }
                }
            }
            if (p_64)
                break;
        }
        if (((((safe_add_func_int16_t_s_s(l_179.f4, ((safe_add_func_int16_t_s_s((p_64 || (safe_rshift_func_uint16_t_u_s(p_63, g_28.f3))), l_333.f3)) || (safe_rshift_func_uint16_t_u_u((((0x346247B4 | (g_92.f0 &= (+(safe_sub_func_int16_t_s_s(l_263, ((safe_rshift_func_uint8_t_u_s(p_61, 1)) > ((safe_mod_func_uint8_t_u_u((((safe_mod_func_int8_t_s_s(((-1) | g_21), g_28.f2)) >= g_28.f6) ^ g_12), l_181)) == l_303.f0))))))) < 4294967295U) && l_263), 7))))) == 0x3F37) >= 0xE578) || l_181))
        {
            uint16_t l_405 = 0xEAD8;
            struct S0 l_406 = {0x7E304C94,0xD6,4294967290U,0xBEE4BD4B,1U,8,0x7BD85AF1};
            uint16_t l_408 = 65526U;
            l_405 = p_64;
            l_406 = l_303;
            l_408--;
            l_406 = l_406;
        }
        else
        {
            uint8_t l_421 = 255U;
            int32_t l_422 = 0xCF273237;
            int32_t l_424 = (-1);
            int32_t l_427 = 6;
            int8_t l_471 = 0xA2;
            uint32_t l_474 = 0x8F366065;
            int32_t l_489 = (-7);
            int32_t l_490 = 0x78E7992D;
            int32_t l_491 = 0xCACBAFCE;
            g_120 = (safe_rshift_func_uint16_t_u_s((l_179.f4 != (((0x2DBFFCE8 || 0x023EAC5F) >= ((safe_sub_func_uint8_t_u_u(6U, (((safe_sub_func_uint16_t_u_u((++p_61), 65533U)) <= (safe_lshift_func_int8_t_s_s((1U > l_421), g_28.f1))) < g_92.f6))) <= g_28.f4)) == 255U)), g_92.f0));
lbl_454:
            g_430--;
            if ((+(((safe_rshift_func_uint8_t_u_s((p_62 | ((safe_rshift_func_int8_t_s_u(g_28.f1, 7)) >= p_64)), (l_179.f0 & (((5 & ((!((safe_lshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((l_210 = l_421), 13)), (safe_lshift_func_uint16_t_u_u((((safe_lshift_func_uint8_t_u_u((g_250 = (((safe_mod_func_int16_t_s_s((-4), (p_61 = ((!((safe_lshift_func_uint8_t_u_s(0x11, 0)) >= (safe_lshift_func_int8_t_s_s((((0U || g_28.f0) > l_263) | l_424), p_61)))) && 1)))) && p_64) <= l_429)), 5)) | 0xA7) & l_333.f1), l_421)))) ^ g_28.f0)) != 0)) > l_179.f6) & 0x9D72B7DB)))) >= l_179.f6) || 0x08)))
            {
                if (l_178.f2)
                    goto lbl_454;
            }
            else
            {
                uint8_t l_459 = 0x45;
                int32_t l_472 = (-1);
                if (p_61)
                {
                    int32_t l_458 = 0x19C6F292;
                    g_120 ^= ((l_455 | l_456) ^ p_64);
                    if ((((safe_unary_minus_func_uint8_t_u((g_16 | (p_61 == g_16)))) & ((l_458 = 1U) < ((l_429 & p_61) & (((0x4D21 > (l_459 || (p_64 > g_92.f1))) ^ g_92.f0) <= p_62)))) && 0x3D))
                    {
                        l_422 = ((safe_lshift_func_int16_t_s_s(9, 5)) > ((p_64 == ((safe_sub_func_uint16_t_u_u((g_232 = (+(p_61 ^ ((safe_lshift_func_int16_t_s_u((g_28.f5 | p_63), 14)) != ((l_424 = (g_430 = (safe_rshift_func_uint8_t_u_s((p_64 <= (safe_add_func_int32_t_s_s(3, (l_471 = (-10))))), 4)))) < (p_64 < 0xDA)))))), p_63)) | 0x38)) && 0x44));
                        l_472 = l_303.f3;
                    }
                    else
                    {
                        struct S0 l_473 = {0x30C89135,0x10,4294967295U,4294967287U,0x97,9,4294967295U};
                        l_473 = (g_92 = g_28);
                        return l_474;
                    }
                    for (p_61 = 0; (p_61 < 24); p_61 = safe_add_func_int32_t_s_s(p_61, 2))
                    {
                        l_472 = ((-1) ^ 4294967290U);
                    }
                    g_92 = g_92;
                }
                else
                {
                    uint16_t l_487 = 0xCBFC;
                    g_428 = (safe_sub_func_int32_t_s_s(((l_333.f2 | ((safe_add_func_int16_t_s_s(0xDC97, ((-3) == 0xBD179C09))) ^ (safe_add_func_int8_t_s_s(p_63, (safe_rshift_func_int8_t_s_s((l_487 = ((safe_rshift_func_int8_t_s_u(p_62, 2)) ^ (p_63 != (g_28.f1 = ((((g_12 == g_91) < 0xAF17) > (-8)) && 0xC97D))))), 6)))))) ^ l_425), l_459));
                }
            }
            g_492++;
        }
        g_488 |= (g_120 = ((0x811B == (p_64 <= ((((p_63 = (((g_383 < g_492) & (safe_lshift_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((g_4 = l_303.f4), (0x77 & l_501))), 1))) && (((p_61 && (l_210 = g_16)) <= l_178.f4) != p_62))) && p_63) | p_62) > 0x1B4E))) == l_456));
    }
    else
    {
        uint16_t l_506 = 9U;
        int32_t l_547 = (-1);
        for (l_179.f6 = 0; (l_179.f6 >= 58); l_179.f6++)
        {
            int32_t l_517 = 8;
            uint8_t l_518 = 0x47;
            l_182 = (safe_rshift_func_uint16_t_u_s(l_506, ((l_509 = (safe_mod_func_uint16_t_u_u(0x529F, 0xB6E1))) < (((safe_sub_func_int16_t_s_s(p_61, (((g_250 &= ((l_180 = (safe_sub_func_uint8_t_u_u(((((((p_63 = ((((+(l_188 = (g_488 & (0x1A75E040 != (safe_sub_func_int16_t_s_s((0xD7BBCC50 >= (((((-1) <= (l_517 || p_64)) >= p_63) >= g_428) || p_62)), l_506)))))) < (-2)) | g_28.f3) >= g_92.f1)) & (-1)) || 0) ^ l_506) <= g_120) >= p_62), p_62))) | 0x04EF)) || l_517) <= g_423))) | p_61) != l_320))));
            l_178 = l_179;
            l_518--;
        }
        l_547 ^= ((((safe_rshift_func_uint8_t_u_u(((g_546 &= (safe_mod_func_uint32_t_u_u(((safe_lshift_func_uint16_t_u_s(((safe_mod_func_int16_t_s_s((l_506 >= ((!(((l_182 |= (safe_sub_func_int32_t_s_s((((safe_mod_func_int8_t_s_s(((safe_add_func_uint32_t_u_u(((g_92.f3 != g_232) && (-1)), (safe_mod_func_uint8_t_u_u(l_178.f5, l_506)))) && ((((g_21 ^= 0xDE92) | (safe_add_func_int32_t_s_s((safe_add_func_uint32_t_u_u(((l_186 = (l_509 >= ((((((safe_rshift_func_int16_t_s_u(p_61, 9)) != 0x33) & 0x8637) || 0xD48E) < l_506) <= g_28.f4))) || 65529U), 1)), 0))) > l_506) >= p_61)), 0x24)) < g_249) == p_62), l_179.f4))) < 0) & p_62)) <= p_63)), g_92.f1)) < l_506), l_506)) == g_28.f0), g_4))) >= p_62), g_407)) < p_62) ^ 0x05) ^ 1);
    }
    return l_548;
}
static uint8_t func_71(uint32_t p_72, int32_t p_73)
{
    return p_72;
}
inline static int16_t func_74(int8_t p_75, int32_t p_76, int16_t p_77, uint32_t p_78)
{
    uint8_t l_174 = 0x13;
    int8_t l_175 = 0x05;
    struct S0 l_176 = {0xB7419DF0,1,0x567A964C,0xD4284883,0xC4,7,4294967292U};
    g_92.f0 = (safe_rshift_func_uint8_t_u_s((p_77 != (((safe_sub_func_int32_t_s_s(p_76, (-5))) && ((safe_sub_func_uint32_t_u_u((g_19 |= ((safe_sub_func_uint32_t_u_u((((g_120 = (((safe_rshift_func_int16_t_s_u((safe_sub_func_int8_t_s_s(((!p_76) && (((safe_rshift_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(g_159, 0x6527)), ((safe_lshift_func_uint8_t_u_s(((g_12 && (((safe_sub_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s(((((((((safe_lshift_func_uint8_t_u_u((((safe_add_func_uint16_t_u_u(((g_159 ^ (safe_rshift_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_u(((g_21 = (p_77 != g_28.f1)) <= p_77), 5)) != l_174), g_92.f3))) == g_4), g_91)) ^ g_92.f4) != p_76), l_175)) >= l_174) & l_174) != l_174) || p_77) | g_92.f4) & l_174) ^ p_78), l_174)), 0)) < 0xD0B6939A) > g_92.f6)) <= 0xAB5352CA), l_175)) <= p_75))) <= l_175) & l_174)), 248U)), 2)) | g_28.f3) ^ g_92.f5)) | l_174) != 65535U), g_28.f6)) != 248U)), l_174)) == g_28.f3)) == (-2))), 1));
    g_120 = l_175;
    g_92 = l_176;
    return l_176.f6;
}
static uint32_t func_81(int32_t p_82, uint16_t p_83, int16_t p_84, int16_t p_85, int8_t p_86)
{
    struct S0 l_93 = {0,0x10,9U,0x1293870B,0xDC,1,0x9FFB2EF7};
    int32_t l_141 = 0x467E2B5F;
    l_93 = g_92;
    l_141 = ((safe_rshift_func_uint8_t_u_u(l_93.f2, (g_92.f4 = (safe_lshift_func_uint8_t_u_s(func_98(g_21, ((((safe_rshift_func_uint16_t_u_u((p_83 = 65533U), 14)) < (((safe_rshift_func_uint8_t_u_u((!(safe_lshift_func_int16_t_s_s((-3), 2))), l_93.f3)) >= func_111((l_93.f0 |= g_92.f1))) && (safe_lshift_func_uint8_t_u_u(p_82, (0x9816E076 | l_93.f2))))) || g_91) >= g_28.f3), l_93.f5, p_86, l_93.f4), g_92.f6))))) >= l_93.f4);
    return g_120;
}
static uint8_t func_98(int16_t p_99, uint16_t p_100, uint32_t p_101, int32_t p_102, uint8_t p_103)
{
    uint8_t l_137 = 0xE9;
    int8_t l_140 = 0;
    l_137--;
    return l_140;
}
static int32_t func_111(uint8_t p_112)
{
    uint8_t l_113 = 1U;
    int32_t l_121 = (-1);
    int32_t l_134 = 0x8C87B4EC;
    l_113++;
    l_134 = (safe_rshift_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(((l_121 = (g_120 = g_92.f2)) > (0 ^ l_113)), (safe_rshift_func_int8_t_s_u((safe_lshift_func_int8_t_s_s(l_113, 7)), 6)))), ((safe_lshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_s(g_28.f6, 12)), (safe_sub_func_int8_t_s_s((g_28.f1 = (safe_rshift_func_int8_t_s_u(1, 6))), g_28.f2)))) ^ 2)));
    return g_28.f6;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_4;
    csmith_sink_ = g_12;
    csmith_sink_ = g_16;
    csmith_sink_ = g_19;
    csmith_sink_ = g_21;
    csmith_sink_ = g_28.f0;
    csmith_sink_ = g_28.f1;
    csmith_sink_ = g_28.f2;
    csmith_sink_ = g_28.f3;
    csmith_sink_ = g_28.f4;
    csmith_sink_ = g_28.f5;
    csmith_sink_ = g_28.f6;
    csmith_sink_ = g_91;
    csmith_sink_ = g_92.f0;
    csmith_sink_ = g_92.f1;
    csmith_sink_ = g_92.f2;
    csmith_sink_ = g_92.f3;
    csmith_sink_ = g_92.f4;
    csmith_sink_ = g_92.f5;
    csmith_sink_ = g_92.f6;
    csmith_sink_ = g_120;
    csmith_sink_ = g_159;
    csmith_sink_ = g_189;
    csmith_sink_ = g_232;
    csmith_sink_ = g_249;
    csmith_sink_ = g_250;
    csmith_sink_ = g_383;
    csmith_sink_ = g_407;
    csmith_sink_ = g_423;
    csmith_sink_ = g_428;
    csmith_sink_ = g_430;
    csmith_sink_ = g_488;
    csmith_sink_ = g_492;
    csmith_sink_ = g_546;
    csmith_sink_ = g_581;
    csmith_sink_ = g_709;
    csmith_sink_ = g_789;
    csmith_sink_ = g_793;
    csmith_sink_ = g_795;
    csmith_sink_ = g_823;
    csmith_sink_ = g_875;
    csmith_sink_ = g_877;
    csmith_sink_ = g_908;
    csmith_sink_ = g_911.f0;
    csmith_sink_ = g_911.f1;
    csmith_sink_ = g_911.f2;
    csmith_sink_ = g_911.f3;
    csmith_sink_ = g_911.f4;
    csmith_sink_ = g_911.f5;
    csmith_sink_ = g_911.f6;
    platform_main_end(0,0);
    return 0;
}
