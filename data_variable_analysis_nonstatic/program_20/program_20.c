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
   uint16_t f0;
};
struct S1 {
   uint32_t f0;
   const uint16_t f1;
   uint32_t f2;
   uint8_t f3;
   uint8_t f4;
   uint32_t f5;
};
static int32_t g_4 = 0x950707DF;
static uint32_t g_43 = 0xF58A4122;
static int16_t g_44 = 0x5435;
static struct S0 g_48 = {0x8C68};
static int8_t g_65 = 0xA4;
static int16_t g_118 = 0xF334;
static struct S1 g_204 = {4294967290U,1U,0xE77DE156,255U,0x56,4294967295U};
static uint16_t g_256 = 0x5945;
static uint32_t g_298 = 0xE2178750;
static int8_t g_390 = 0x9E;
static uint8_t g_436 = 0xAD;
static int32_t g_465 = 0x01E9A5BD;
static uint8_t g_760 = 255U;
static const uint32_t g_1032 = 4294967290U;
static uint32_t g_1033 = 0x590008BB;
static int32_t g_1059 = 0xFD5449E6;
static uint32_t func_1(void);
inline static const uint16_t func_7(const uint32_t p_8);
inline static uint32_t func_9(uint32_t p_10);
static int32_t func_13(uint32_t p_14, uint8_t p_15);
static int8_t func_23(uint32_t p_24, uint16_t p_25, const uint16_t p_26, int16_t p_27, int16_t p_28);
static uint8_t func_29(int32_t p_30, int32_t p_31, int32_t p_32, uint16_t p_33, int32_t p_34);
inline static uint8_t func_36(int32_t p_37, int16_t p_38);
static int8_t func_50(int32_t p_51, uint32_t p_52, const int32_t p_53, uint32_t p_54, const int8_t p_55);
static int16_t func_60(uint32_t p_61, int16_t p_62, uint32_t p_63, uint8_t p_64);
static int32_t func_68(uint16_t p_69, uint8_t p_70, int8_t p_71, uint32_t p_72, const uint8_t p_73);
static uint32_t func_1(void)
{
    int16_t l_2 = 0xA624;
    int32_t l_3 = 5;
    int32_t l_16 = 1;
    struct S1 l_797 = {4294967295U,8U,4294967286U,0x38,0x83,0x7329E1C7};
    int8_t l_798 = 0x1F;
    struct S0 l_822 = {0U};
    const uint32_t l_823 = 0xEAF6B0E7;
    uint32_t l_892 = 4294967287U;
    int32_t l_942 = 0x7BF07249;
    uint16_t l_969 = 65535U;
    int32_t l_990 = 0xB33B52DE;
    uint8_t l_1031 = 0x14;
    int32_t l_1089 = 1;
    uint32_t l_1115 = 0xDBBE6E4E;
    struct S0 l_1129 = {1U};
lbl_848:
    l_3 = (l_2 & 0xB8FAAAEB);
    if ((g_4 < (safe_mul_func_int16_t_s_s((((((g_4 && func_7(((func_9((safe_sub_func_int32_t_s_s((g_4 , func_13(l_16, g_4)), ((safe_sub_func_uint8_t_u_u(l_2, (safe_mod_func_uint16_t_u_u(0x6A06, (((safe_rshift_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((((safe_div_func_int32_t_s_s((safe_unary_minus_func_int8_t_s((g_204.f3 != 0U))), 0x34209ACB)) , l_3) || 0xB92CAF59), l_2)), g_204.f2)) != l_2) || 0xA4))))) != g_204.f4)))) , l_3) , 0x8553EB6B))) , l_797) , g_43) != g_204.f0) < g_204.f2), l_798))))
    {
        uint32_t l_808 = 0x8EEBD60A;
        uint32_t l_824 = 0U;
        uint32_t l_825 = 7U;
        int32_t l_826 = 1;
        struct S0 l_827 = {1U};
        l_826 = (g_204.f4 , ((safe_mod_func_int32_t_s_s((0x8CE9FACD == g_48.f0), ((((((((((!(((safe_div_func_uint8_t_u_u((l_798 && (safe_mod_func_uint8_t_u_u(((safe_add_func_int32_t_s_s((l_808 <= (safe_rshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_s((((safe_add_func_uint16_t_u_u((((((((((safe_sub_func_int32_t_s_s((safe_sub_func_uint16_t_u_u(0x0763, ((g_43 || ((safe_rshift_func_int8_t_s_s((!(l_797.f0 ^ ((l_822 , l_823) > g_48.f0))), l_808)) >= g_256)) < l_824))), 0xCA325603)) != g_204.f1) > 1) > l_797.f4) && g_256) | l_823) | g_65) >= l_825) >= l_825), g_465)) == l_825) != g_760), 9)), 4))), l_797.f2)) > g_204.f5), 247U))), g_118)) <= g_436) , l_823)) , g_204.f4) , 0x52D2) > 0x69E3) > 0xAC) <= g_204.f5) , g_48) , l_797.f1) > g_43) , l_824))) <= g_204.f4));
        g_48 = l_827;
        l_822 = g_48;
    }
    else
    {
        int16_t l_835 = 0x155D;
        uint32_t l_875 = 4294967295U;
        struct S1 l_890 = {0xF6B03414,0x0157,4294967291U,0xB8,0x2C,0x216FB59A};
        struct S0 l_916 = {0U};
        int16_t l_917 = (-8);
        uint32_t l_1030 = 0x62281C74;
        if ((safe_rshift_func_uint8_t_u_s(((g_65 && l_798) != (safe_lshift_func_uint16_t_u_u(((((safe_lshift_func_int8_t_s_u(((~(l_835 , l_797.f3)) >= (safe_rshift_func_uint16_t_u_s((safe_mul_func_uint16_t_u_u(l_835, (safe_sub_func_uint8_t_u_u(((((((safe_mul_func_uint16_t_u_u(((((safe_mod_func_uint32_t_u_u(((safe_lshift_func_uint8_t_u_s(1U, 2)) , (g_760 <= 0xFE)), g_256)) != 1U) && l_835) < 0U), l_823)) & g_204.f2) >= 0x79A0) != l_798) < g_204.f0) || l_822.f0), 246U)))), 15))), 6)) & 4294967290U) && 0x7A2E5936) ^ g_43), l_835))), 6)))
        {
            int32_t l_859 = 0x3C54A41F;
            uint16_t l_891 = 65534U;
            int32_t l_893 = 0xF008899D;
            int32_t l_907 = 1;
            int16_t l_928 = 0;
            uint16_t l_958 = 0xB92E;
            if (g_204.f0)
                goto lbl_848;
            g_465 = ((g_204.f1 < (((safe_mul_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(((((-2) < (safe_add_func_int8_t_s_s(0x8F, 0x3D))) , (safe_lshift_func_int16_t_s_u(g_48.f0, ((safe_div_func_uint32_t_u_u(((l_859 | ((((((safe_div_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(((~(((safe_sub_func_int16_t_s_s(0x2E51, ((safe_div_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u(((g_48 , l_859) , 255U), l_835)), l_859)) | 0x1111))) & g_118) , 0x32)) <= g_390), l_835)), g_298)) == l_797.f5) ^ g_48.f0) != l_859) != g_44) >= g_4)) | l_859), l_859)) ^ g_204.f5)))) , g_204.f4), l_835)), l_2)) , g_204) , 0x94)) || l_835);
            l_893 = (safe_add_func_int32_t_s_s((((l_859 >= ((3U >= ((g_298 & (g_204 , (l_823 ^ ((safe_mod_func_int32_t_s_s((((l_875 && g_204.f0) || (safe_mul_func_int8_t_s_s((((safe_rshift_func_int16_t_s_s((((safe_add_func_uint8_t_u_u(((!(!(safe_mul_func_int8_t_s_s((((safe_mul_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((g_43 ^ 0x7B53E52C), g_4)), g_204.f0)) , l_890) , g_48.f0), 0)))) >= (-1)), l_891)) > l_890.f0) < g_256), 11)) != g_204.f4) , 0x58), l_890.f1))) , 0x748CBF1F), g_204.f2)) & l_892)))) & g_204.f0)) & g_4)) | l_859) != l_859), l_823));
            for (l_797.f3 = 0; (l_797.f3 >= 51); ++l_797.f3)
            {
                const uint8_t l_912 = 0x86;
                struct S0 l_945 = {0x4E37};
                if ((safe_rshift_func_uint8_t_u_s(2U, 1)))
                {
                    uint8_t l_898 = 1U;
                    int32_t l_913 = (-1);
                    g_465 = (l_898 || ((((1U || ((safe_rshift_func_uint8_t_u_u((safe_div_func_int8_t_s_s(((safe_add_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u((l_907 , g_118), g_43)), (((safe_sub_func_uint32_t_u_u((safe_mul_func_int8_t_s_s((((l_912 , (((l_890.f0 || 4U) < l_891) == g_204.f2)) > l_859) <= l_890.f0), l_893)), g_204.f0)) , g_390) ^ l_913))) != g_760), g_4)), l_859)) < l_912)) >= g_298) || g_44) & 0xC55F6002));
                }
                else
                {
                    for (l_797.f0 = 1; (l_797.f0 <= 12); l_797.f0++)
                    {
                        g_465 = (g_204.f2 || g_204.f2);
                        g_48 = l_916;
                        l_917 = (-1);
                    }
                }
                g_465 = (((safe_mul_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((g_204.f1 , ((safe_mul_func_uint8_t_u_u((((safe_mul_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(l_928, 0)), ((((g_204.f3 , l_822) , (~(safe_add_func_uint16_t_u_u((((safe_div_func_int32_t_s_s(((safe_div_func_uint32_t_u_u(((safe_rshift_func_int8_t_s_u((((safe_mul_func_int16_t_s_s(g_44, (safe_sub_func_int8_t_s_s((l_912 && ((g_465 < (g_48 , l_942)) || g_43)), g_4)))) || 0xB1) & g_43), l_890.f2)) || 1), 6)) && 0x1953), 7)) || g_44) ^ g_760), l_912)))) > l_890.f1) < l_892))) > g_204.f4) >= 0xF3DD), 0x27)) == l_3)), g_256)), l_797.f1)) & g_436) | g_204.f4);
                if (g_204.f5)
                    break;
                for (g_43 = 14; (g_43 >= 31); g_43++)
                {
                    const struct S1 l_948 = {1U,0x6C6F,0x16EA5022,0x0B,253U,4294967295U};
                    g_48 = l_945;
                    g_465 = (((l_948 , (l_893 == l_797.f0)) <= (g_298 <= (0x4E14 & (((safe_add_func_int16_t_s_s((-1), ((safe_add_func_int8_t_s_s((0xDEA3 ^ (((((safe_unary_minus_func_uint8_t_u((safe_mul_func_int16_t_s_s((safe_add_func_uint16_t_u_u(g_465, (l_890.f1 || 0x1EA64895))), g_204.f5)))) & l_892) && l_907) < g_204.f4) > 0xAF0EF3DC)), g_760)) & g_256))) || g_465) == g_390)))) != l_958);
                    g_465 = g_256;
                }
            }
        }
        else
        {
            uint8_t l_989 = 255U;
            struct S0 l_995 = {3U};
lbl_998:
            g_465 = ((safe_div_func_int16_t_s_s(0xF991, (safe_mul_func_int16_t_s_s(l_890.f2, ((((safe_rshift_func_int8_t_s_s((l_797.f1 > ((((safe_add_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(l_969, g_436)), ((safe_mul_func_int8_t_s_s(((safe_div_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((safe_div_func_uint8_t_u_u((0U < 0xAFC1), ((safe_div_func_int16_t_s_s((l_797 , ((safe_unary_minus_func_int8_t_s(((((safe_rshift_func_uint8_t_u_u(((safe_mod_func_int32_t_s_s(((safe_div_func_int32_t_s_s(g_118, g_465)) >= g_44), l_890.f2)) , 246U), 5)) || l_989) ^ 1) || l_989))) <= l_989)), g_204.f0)) | l_797.f3))), l_797.f4)), l_916.f0)), l_797.f5)) , g_204.f4), l_990)) , 0x6C68))) & (-1)) && 65535U) , 1)), l_822.f0)) != 0x848D) , l_890) , 0x1E36))))) > 0xF02AC3C2);
            for (l_890.f5 = (-21); (l_890.f5 >= 52); l_890.f5 = safe_add_func_int8_t_s_s(l_890.f5, 1))
            {
                struct S0 l_994 = {0x1611};
                uint32_t l_1034 = 0x2FDC03B2;
                uint16_t l_1052 = 0x3B91;
                int32_t l_1088 = (-4);
                l_822 = ((+g_44) , l_994);
                if (g_204.f1)
                    goto lbl_848;
                l_995 = l_822;
                for (g_44 = 20; (g_44 > 0); --g_44)
                {
                    uint32_t l_1025 = 4294967295U;
                    uint16_t l_1060 = 7U;
                    if (l_994.f0)
                        goto lbl_998;
                    g_465 = ((safe_sub_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(g_256, ((safe_sub_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(g_204.f0, 13)), ((safe_mod_func_int8_t_s_s((safe_div_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((safe_sub_func_uint32_t_u_u(((((g_760 , (-1)) >= (safe_mod_func_uint16_t_u_u((((safe_lshift_func_uint16_t_u_s((safe_add_func_uint16_t_u_u((l_1025 & ((0x933B4376 > (((((safe_div_func_int32_t_s_s((-1), (safe_mod_func_uint8_t_u_u(((g_4 == 2U) >= g_118), l_1030)))) , 3U) , g_48.f0) && g_204.f0) , l_994.f0)) != 0x9BCC4B21)), 65528U)), 1)) ^ g_4) <= 0), l_1031))) >= g_1032) ^ 0x0EE5), 4294967294U)), g_1033)), l_16)), (-1))), l_1034)) ^ l_890.f3))) , l_994.f0))), g_204.f1)), g_1032)) , g_204.f3);
                    for (l_1031 = (-12); (l_1031 >= 9); l_1031 = safe_add_func_uint32_t_u_u(l_1031, 3))
                    {
                        int8_t l_1049 = 0;
                        const uint32_t l_1087 = 1U;
                        g_48 = l_916;
                        l_990 = ((safe_lshift_func_int8_t_s_u((((g_256 | (safe_mul_func_uint8_t_u_u((safe_div_func_int32_t_s_s((3U > ((safe_sub_func_uint32_t_u_u((((((safe_lshift_func_uint16_t_u_u((g_204 , ((8U <= (((safe_sub_func_uint8_t_u_u(l_1049, (safe_lshift_func_uint16_t_u_s(l_1052, ((safe_add_func_uint32_t_u_u(l_1034, (safe_add_func_int8_t_s_s((g_204.f4 & (safe_div_func_int16_t_s_s((((((((g_1032 > 1U) | g_298) >= g_1059) >= l_1049) > 0xEA69) == 0x4235) | l_989), 0x5F04))), 0x46)))) | g_1033))))) , g_1033) < l_1034)) < l_823)), l_989)) || g_204.f2) | g_43) , g_65) == l_1025), l_1034)) != 2)), g_256)), g_1033))) >= g_118) < g_204.f5), l_989)) != l_1060);
                        l_1088 = ((0x33EACB2B != (7U != (+(((((safe_mul_func_int16_t_s_s(g_118, g_760)) == (safe_sub_func_uint8_t_u_u(0x39, (5 & (~(safe_div_func_int32_t_s_s((0x8F250081 > (safe_rshift_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u(0x9152, (safe_rshift_func_uint8_t_u_s((safe_mod_func_int16_t_s_s((((safe_mod_func_int32_t_s_s((((((safe_div_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(247U, 0x40)), (-1))) == l_1052) < g_1059) == l_995.f0) ^ l_1087), l_969)) <= 0xE3AA4F68) , 9), l_1052)), l_1034)))), g_204.f3)), l_875))), l_989))))))) == l_1034) , l_989) || 0xD70725E1)))) <= 0x19);
                    }
                    g_1059 = l_989;
                }
            }
        }
        return l_1089;
    }
    if (((l_3 <= ((safe_sub_func_uint16_t_u_u((safe_unary_minus_func_int16_t_s((safe_mod_func_int32_t_s_s(l_823, g_204.f2)))), ((safe_div_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s((g_65 != (l_822.f0 , (safe_div_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u((0U & (g_204 , ((!(safe_rshift_func_uint8_t_u_s(0x18, 0))) != (safe_rshift_func_int16_t_s_u((-1), 13))))), g_204.f3)), 0x201AA002)))), 5)), l_2)) & g_43))) , g_1059)) || g_4))
    {
        struct S0 l_1108 = {4U};
        int32_t l_1139 = 6;
        uint8_t l_1198 = 1U;
        l_1108 = g_48;
        for (l_16 = 11; (l_16 <= (-14)); --l_16)
        {
            const int8_t l_1111 = 0x55;
            int32_t l_1112 = 0xF1E536DF;
            uint32_t l_1116 = 0xA0312D22;
            struct S0 l_1117 = {0x9B81};
            int16_t l_1190 = 4;
            l_1117 = (((l_1111 , ((l_1111 , g_4) <= (0x93 | (((l_1112 , (g_1033 >= g_1059)) & (safe_add_func_uint32_t_u_u(((((((0x966A == l_1108.f0) >= g_65) , l_1115) || g_204.f0) == 0) >= l_1108.f0), 8))) < l_1116)))) > l_797.f4) , l_1117);
            if ((safe_add_func_int8_t_s_s(l_797.f3, ((safe_lshift_func_int8_t_s_s((safe_mod_func_int32_t_s_s((g_118 , (l_969 >= ((~g_760) == (safe_lshift_func_int8_t_s_s((safe_div_func_int16_t_s_s(((l_1129 , (safe_add_func_uint8_t_u_u((safe_div_func_int32_t_s_s((((+l_969) ^ (safe_sub_func_uint8_t_u_u(l_1112, (l_797.f5 , (safe_div_func_int32_t_s_s(0xEE28AC2A, 1U)))))) , 0), l_1108.f0)), g_204.f1))) != l_1139), l_1116)), g_465))))), 1U)), l_797.f2)) ^ 0x9400))))
            {
                uint8_t l_1146 = 251U;
                int32_t l_1163 = 0xA3F79865;
                struct S0 l_1200 = {0x2FB3};
                g_48 = (g_436 , l_1108);
                l_1112 = ((safe_add_func_uint8_t_u_u(((0x89 & (((~(safe_mod_func_int8_t_s_s(g_65, (safe_unary_minus_func_uint8_t_u(g_118))))) || l_1146) && (safe_rshift_func_uint16_t_u_s(((safe_div_func_uint16_t_u_u(0x1BF9, (l_1111 | (((safe_lshift_func_int8_t_s_u((safe_mul_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((safe_div_func_uint16_t_u_u(((!l_1146) && (+((safe_mul_func_uint8_t_u_u(g_43, g_298)) , l_1163))), g_118)), 7)), 7U)), 2)) & 0x283C) & (-1))))) && l_1163), 4)))) >= 0x3A584C31), g_465)) , (-1));
                for (g_298 = 0; (g_298 >= 56); ++g_298)
                {
                    int16_t l_1191 = 0xEDBE;
                    l_1139 = (safe_mul_func_int8_t_s_s((safe_add_func_int32_t_s_s((l_823 , ((safe_rshift_func_int8_t_s_s((((-9) >= (safe_sub_func_int16_t_s_s(l_822.f0, ((((safe_sub_func_uint32_t_u_u(l_1163, ((4294967293U > ((safe_add_func_int16_t_s_s((safe_sub_func_int16_t_s_s((((+((((safe_rshift_func_uint16_t_u_s((0x0B07A79F != g_118), (safe_lshift_func_uint8_t_u_s(((g_1059 , ((safe_mod_func_uint32_t_u_u((((safe_unary_minus_func_uint16_t_u(l_1190)) > 1U) , 4294967295U), g_436)) && l_1191)) && 255U), 4)))) >= g_204.f1) < l_1117.f0) || g_48.f0)) , 0xB9) > g_204.f5), l_1112)), l_1191)) | l_1163)) ^ 0U))) || g_1059) , 0xD4F63AFF) < l_1139)))) <= l_797.f4), 5)) , l_1146)), 0x4EF3FDA0)), 0xDD));
                    for (l_798 = 0; (l_798 >= (-26)); l_798 = safe_sub_func_int16_t_s_s(l_798, 1))
                    {
                        uint32_t l_1199 = 0U;
                        l_1198 = ((g_1032 <= (safe_sub_func_int16_t_s_s(g_760, 0x40C9))) <= (safe_add_func_int8_t_s_s(l_1191, 0U)));
                        g_465 = (l_1146 ^ (l_1199 || l_990));
                    }
                }
                g_48 = l_1200;
            }
            else
            {
                l_1117 = g_48;
            }
            if (((g_44 == (l_990 >= g_465)) , 1))
            {
                g_1059 = (safe_lshift_func_uint8_t_u_s((l_16 ^ g_1033), 6));
            }
            else
            {
                if (l_1108.f0)
                    goto lbl_848;
            }
        }
    }
    else
    {
        const struct S0 l_1203 = {1U};
        struct S0 l_1210 = {65528U};
        g_48 = l_1203;
        g_1059 = (0x00 | ((1U & ((-6) <= ((g_4 == (((0x94 < 0x88) & 0xEB) , ((((safe_lshift_func_uint16_t_u_s(((safe_mod_func_uint8_t_u_u(l_1203.f0, ((safe_add_func_uint8_t_u_u(248U, 0x06)) | 252U))) || l_1203.f0), g_4)) >= g_204.f1) , g_1059) , l_2))) & 255U))) == l_1129.f0));
        g_48 = (l_1203.f0 , l_822);
        l_1210 = g_48;
    }
    return g_65;
}
inline static const uint16_t func_7(const uint32_t p_8)
{
    int32_t l_665 = 1;
    struct S0 l_732 = {9U};
    struct S1 l_752 = {0x57CF4CA5,0xED38,4294967295U,5U,0x44,1U};
    int32_t l_762 = 0;
    l_665 = (0x8C6AFB6D ^ 4294967295U);
    if ((g_204 , (p_8 > (+g_436))))
    {
        struct S0 l_677 = {5U};
        uint32_t l_710 = 0x16D0730C;
        int32_t l_713 = (-1);
        int32_t l_782 = 0x816F8B90;
        if ((((((safe_add_func_int16_t_s_s(((safe_sub_func_uint16_t_u_u((((((((safe_mul_func_int8_t_s_s((g_204.f5 , (((safe_mod_func_int32_t_s_s((((safe_sub_func_int16_t_s_s(((l_665 > 0x6DA284B8) >= ((3U >= 255U) , 0xE1)), (l_677 , (safe_mul_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_u(((((safe_mul_func_int8_t_s_s((safe_sub_func_int8_t_s_s(g_204.f4, (((safe_mod_func_int16_t_s_s(((safe_lshift_func_int16_t_s_u((safe_div_func_int8_t_s_s(g_44, p_8)), p_8)) > 0xBB), g_4)) , g_436) & l_665))), 0xDA)) > 0x0EF6) ^ p_8) < 0xC7AD0581), 6)) | p_8), 0))))) || 0x8F471FAD) && p_8), l_677.f0)) != p_8) < l_677.f0)), 0x2C)) < g_48.f0) || 0x58D3) != 255U) ^ g_65) > l_677.f0) == g_204.f5), p_8)) | g_204.f3), l_677.f0)) , g_204) , g_204.f4) < p_8) == 0xDAAA27C9))
        {
            int32_t l_711 = (-3);
            for (g_204.f4 = 27; (g_204.f4 != 27); g_204.f4 = safe_add_func_uint8_t_u_u(g_204.f4, 7))
            {
                uint32_t l_706 = 0xB8A11640;
                uint16_t l_759 = 0x08BE;
                int32_t l_761 = 0x402D9BB6;
                for (g_298 = 0; (g_298 != 56); g_298 = safe_add_func_int8_t_s_s(g_298, 1))
                {
                    g_48 = g_48;
                }
                for (g_43 = (-4); (g_43 == 48); g_43 = safe_add_func_int8_t_s_s(g_43, 1))
                {
                    int32_t l_712 = 0xA4CF50FF;
                    struct S0 l_733 = {0xEAA8};
                    l_713 = ((((1U || (safe_sub_func_int32_t_s_s((safe_sub_func_int16_t_s_s(0xBDA3, (safe_add_func_uint16_t_u_u((((((safe_lshift_func_int8_t_s_s((((g_48.f0 == l_706) <= ((safe_div_func_uint32_t_u_u((g_204 , (+l_710)), 0xBD2ECE52)) >= (p_8 == ((l_677.f0 | g_256) > g_43)))) != l_665), 4)) < l_711) < p_8) <= g_204.f5) ^ 0x99), l_706)))), l_712))) <= 0x16) >= g_204.f2) != 3U);
                    l_711 = (-1);
                    if (g_44)
                        continue;
                    if (((((((((((safe_add_func_int16_t_s_s(((safe_div_func_int16_t_s_s((safe_add_func_uint16_t_u_u(((-5) > (l_711 && 0xADE2)), (safe_lshift_func_uint16_t_u_u(((g_65 == (((safe_mod_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u(0xC896, ((safe_mul_func_uint8_t_u_u((0xADEF || (p_8 < p_8)), (((safe_div_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(7U, g_4)), p_8)) > 0xB6) & 1U))) , p_8))), l_677.f0)) || g_4) || 1)) , p_8), 15)))), l_711)) || g_204.f5), g_390)) | g_390) != l_665) && p_8) , 0x75E5447E) , (-10)) & 1) & g_43) < 0x6CE941CA) != p_8))
                    {
                        return l_665;
                    }
                    else
                    {
                        l_733 = l_732;
                        l_761 = ((safe_sub_func_uint16_t_u_u((((((((safe_add_func_int8_t_s_s(g_465, p_8)) || (safe_sub_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s((((safe_mod_func_int8_t_s_s(((p_8 <= (safe_lshift_func_int8_t_s_s(((((safe_rshift_func_int16_t_s_u(l_733.f0, g_48.f0)) == (((p_8 | (safe_div_func_int16_t_s_s(((safe_div_func_uint16_t_u_u((l_752 , ((((safe_mul_func_int8_t_s_s((p_8 , (((safe_mod_func_int8_t_s_s((+(((((((+g_204.f1) > g_44) , g_298) < l_733.f0) != l_710) && 0xE828) ^ 0)), 0xA3)) && 0x75B7E220) >= 0U)), 0xDD)) & g_436) , g_43) | l_733.f0)), l_712)) >= g_204.f0), (-2)))) | 0x8083) >= l_706)) ^ g_436) , l_759), g_760))) , 0x43), 0xC1)) & l_711) , 1U), g_390)), g_4))) < g_4) , l_706) & g_436) > 0x6AC7) < g_436), g_4)) < g_298);
                    }
                }
            }
        }
        else
        {
            const uint16_t l_767 = 3U;
            int32_t l_781 = 0;
            l_762 = 0xBFB84A22;
            g_48 = ((safe_div_func_int32_t_s_s((((safe_sub_func_int8_t_s_s((g_204.f5 != l_767), (safe_rshift_func_uint8_t_u_u((((+(!p_8)) < (((!(g_390 == (safe_mul_func_uint8_t_u_u(((4294967295U | ((g_204 , ((-4) || (((safe_sub_func_int32_t_s_s((safe_mod_func_uint16_t_u_u((l_767 ^ ((safe_rshift_func_int8_t_s_u((((((((g_204.f2 , p_8) , l_767) & g_390) != 0x8D9D) ^ l_752.f0) || l_781) >= g_204.f1), 0)) < g_4)), 7U)), 0xC2F76559)) == (-4)) > (-8)))) > 0)) == p_8), g_204.f0)))) | 1U) , g_4)) && l_732.f0), 4)))) > 249U) < l_665), l_782)) , g_48);
            l_677 = l_677;
        }
    }
    else
    {
        return g_204.f2;
    }
    l_762 = (safe_mod_func_uint8_t_u_u(p_8, (((safe_mul_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u(p_8, (safe_add_func_uint32_t_u_u((p_8 != (0U | g_760)), ((p_8 || ((((l_732.f0 == ((safe_add_func_int32_t_s_s((safe_mul_func_int16_t_s_s((g_204.f4 && (0x118ECD50 && l_752.f0)), l_752.f2)), p_8)) & p_8)) != l_665) >= g_44) , p_8)) <= l_665))))), 0xF6245630)), p_8)) == g_204.f5) & l_752.f4)));
    l_762 = p_8;
    return p_8;
}
inline static uint32_t func_9(uint32_t p_10)
{
    struct S0 l_617 = {0U};
    int32_t l_644 = 0x3D84D2C8;
    uint32_t l_648 = 3U;
    uint16_t l_664 = 1U;
    g_48 = l_617;
    if ((g_65 > 0x821E2B53))
    {
        uint32_t l_629 = 0x2AA15B89;
        const uint32_t l_638 = 0xF44B5EA7;
        int32_t l_639 = (-1);
        for (g_118 = 0; (g_118 == (-21)); g_118--)
        {
            uint32_t l_630 = 0x942CE0C4;
            const struct S0 l_637 = {0U};
            uint32_t l_642 = 0x649FF226;
            l_639 = (safe_div_func_uint32_t_u_u(g_43, (((((safe_sub_func_uint16_t_u_u(p_10, (safe_mod_func_int16_t_s_s(((!((safe_lshift_func_int16_t_s_u(((((g_44 == (l_629 , p_10)) , l_630) , (safe_add_func_uint16_t_u_u(g_436, g_204.f5))) <= (safe_rshift_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u(0x55, l_617.f0)) <= p_10), 5))), l_629)) > l_629)) > l_629), p_10)))) >= l_630) != 0xFBB9) , l_637) , l_638)));
            l_642 = (safe_mod_func_int32_t_s_s((-3), p_10));
        }
    }
    else
    {
        uint16_t l_643 = 65535U;
        l_644 = l_643;
    }
    g_465 = (safe_rshift_func_int16_t_s_s(p_10, (!l_648)));
    g_465 = (safe_mod_func_uint8_t_u_u(((~(safe_add_func_uint8_t_u_u(l_648, (((g_43 || ((((g_4 >= (l_644 != (safe_sub_func_uint8_t_u_u((((0xC8 || (((safe_sub_func_uint8_t_u_u((!(safe_sub_func_int8_t_s_s(((((l_648 >= l_644) == g_65) >= (safe_unary_minus_func_uint32_t_u(g_390))) == g_204.f5), p_10))), p_10)) != p_10) || l_644)) , l_648) != l_664), 0)))) , p_10) , (-1)) , p_10)) == g_48.f0) >= (-7))))) < p_10), 255U));
    return l_644;
}
static int32_t func_13(uint32_t p_14, uint8_t p_15)
{
    uint16_t l_35 = 0xDBCA;
    for (p_15 = 0; (p_15 <= 30); p_15 = safe_add_func_uint8_t_u_u(p_15, 4))
    {
        uint8_t l_39 = 0x62;
        int32_t l_542 = (-1);
        uint8_t l_562 = 1U;
        int16_t l_563 = (-9);
        uint8_t l_604 = 254U;
        l_542 = ((safe_mod_func_uint16_t_u_u(0xD7AF, ((safe_mod_func_int8_t_s_s(5, func_23((func_29(g_4, (l_35 | func_36(l_39, p_14)), l_39, g_4, l_35) <= (-9)), l_39, p_14, g_4, g_4))) && 65526U))) ^ l_35);
        if (((safe_div_func_int32_t_s_s((-7), l_35)) && (safe_div_func_uint8_t_u_u(p_14, (g_43 & ((safe_mul_func_int8_t_s_s(((safe_sub_func_int8_t_s_s((safe_div_func_uint8_t_u_u(((safe_sub_func_uint8_t_u_u((l_35 == (safe_lshift_func_uint8_t_u_u(1U, 5))), l_35)) != (((!(safe_mod_func_int8_t_s_s(g_204.f2, (safe_div_func_uint32_t_u_u(0x27A9BD7B, l_35))))) >= 252U) || l_35)), l_35)), l_562)) <= 0x80), g_204.f4)) , l_563))))))
        {
            l_542 = (p_14 <= (l_35 ^ p_14));
        }
        else
        {
            if (g_48.f0)
                break;
            for (l_542 = (-16); (l_542 <= 14); l_542 = safe_add_func_int16_t_s_s(l_542, 8))
            {
                for (g_48.f0 = 2; (g_48.f0 >= 45); g_48.f0++)
                {
                    return g_465;
                }
                return p_14;
            }
            if (g_44)
                continue;
        }
        for (g_204.f5 = 0; (g_204.f5 == 31); ++g_204.f5)
        {
            uint16_t l_571 = 0x6724;
            uint32_t l_603 = 0xE3DE9200;
            int32_t l_605 = (-7);
            l_571 = (((~0xEF5B) || g_204.f1) , p_14);
            if (p_15)
                break;
            l_605 = (g_118 <= (((((((-2) || (safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_s((safe_sub_func_int16_t_s_s((((safe_add_func_int32_t_s_s((((safe_add_func_int32_t_s_s(0xD1187817, ((((safe_rshift_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_s((((safe_div_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((safe_div_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((safe_add_func_uint32_t_u_u(0xA5B36698, (-2))), (safe_unary_minus_func_int16_t_s((safe_mod_func_int8_t_s_s(((safe_div_func_uint16_t_u_u((255U | l_542), l_603)) && ((0xB2 <= p_14) != g_65)), g_204.f3)))))), g_65)), 4294967295U)), 1U)) != l_35) > 0U), 5)) && p_15), l_571)) <= 0x53) , 4294967294U) , p_14))) > g_256) | g_204.f2), 0xD730CA24)) , p_15) != l_603), l_35)), 2)), l_603))) > l_604) > p_14) <= l_35) < p_14) & g_390));
        }
        if (g_298)
            break;
    }
    return l_35;
}
static int8_t func_23(uint32_t p_24, uint16_t p_25, const uint16_t p_26, int16_t p_27, int16_t p_28)
{
    uint8_t l_41 = 0U;
    int8_t l_42 = 1;
    struct S0 l_49 = {65526U};
    int32_t l_66 = 0x841158A3;
    g_44 = (l_41 && (((0x8DE9 >= p_28) == (((p_24 != (func_36((g_4 | (((g_4 <= p_24) >= (((func_29(g_4, l_41, p_25, l_42, p_24) || 4) == p_28) , g_4)) < g_43)), g_43) | 0)) , 0x42FA) <= l_42)) >= (-1)));
    for (l_42 = (-4); (l_42 <= 13); l_42++)
    {
        int32_t l_47 = 0;
        l_47 = (0xDD || 1);
    }
    l_49 = g_48;
    l_66 = func_29(((p_27 & (((func_50(((((safe_lshift_func_uint8_t_u_s((safe_unary_minus_func_uint32_t_u((func_29(l_41, l_41, (((!0) | (func_36((((0U != p_28) , ((func_60(func_29(l_41, func_36(g_4, g_65), l_41, p_26, l_41), g_48.f0, l_66, g_65) & l_41) && g_48.f0)) == 255U), p_27) , g_43)) , p_27), p_27, g_4) && l_66))), g_4)) , l_49) , g_204) , g_44), g_204.f1, l_49.f0, g_43, l_41) , g_256) | (-10)) > p_24)) , l_41), p_25, l_66, l_49.f0, l_66);
    return p_28;
}
static uint8_t func_29(int32_t p_30, int32_t p_31, int32_t p_32, uint16_t p_33, int32_t p_34)
{
    return p_31;
}
inline static uint8_t func_36(int32_t p_37, int16_t p_38)
{
    struct S0 l_40 = {0xF4A1};
    if ((0xC5AD >= 5U))
    {
        return g_4;
    }
    else
    {
        l_40 = l_40;
    }
    return l_40.f0;
}
static int8_t func_50(int32_t p_51, uint32_t p_52, const int32_t p_53, uint32_t p_54, const int8_t p_55)
{
    const uint32_t l_207 = 0U;
    uint32_t l_222 = 0x18098870;
    uint32_t l_223 = 0xB2961493;
    int32_t l_224 = 0xF7C57EFD;
    struct S1 l_319 = {0x678DBA8A,0x0E69,0xE2DC38A9,255U,0x41,4294967293U};
    struct S0 l_345 = {65533U};
    int32_t l_541 = (-1);
    l_224 = (safe_lshift_func_int8_t_s_s(0, (((l_207 == (safe_add_func_uint32_t_u_u(g_204.f1, (0x802CFFAF != l_207)))) | ((((((safe_mod_func_int32_t_s_s((safe_div_func_uint32_t_u_u((((safe_add_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s((p_51 , (safe_sub_func_int16_t_s_s(l_207, p_52))), (safe_div_func_int32_t_s_s(l_207, g_204.f0)))) != g_204.f1), l_222)) || l_223) < g_118), l_222)), p_54)) | p_55) >= p_55) == (-5)) >= p_53) & p_53)) >= p_51)));
    for (g_204.f5 = (-2); (g_204.f5 == 6); g_204.f5 = safe_add_func_uint32_t_u_u(g_204.f5, 1))
    {
        uint8_t l_229 = 0xFE;
        l_224 = (safe_add_func_int16_t_s_s(l_229, p_51));
        g_256 = (safe_lshift_func_uint8_t_u_s((((safe_sub_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((((((safe_sub_func_uint8_t_u_u(g_204.f1, (safe_sub_func_uint8_t_u_u(g_4, (safe_mul_func_int8_t_s_s(((((((l_207 , ((safe_mul_func_int16_t_s_s(((g_204.f1 , 0x5D64) == (safe_mod_func_uint32_t_u_u((((((safe_add_func_int8_t_s_s(((((((safe_mul_func_int8_t_s_s(((g_204.f2 != ((safe_lshift_func_int8_t_s_u((safe_mul_func_int16_t_s_s((-2), (p_53 == g_204.f0))), 2)) , 0x6DD82FEA)) ^ g_4), g_118)) <= l_207) > l_223) , l_222) >= 0xB0C7BE27) > p_52), l_229)) & l_229) > p_51) > 0U) == 1U), 0x0814C530))), 65535U)) , 8U)) > g_204.f0) , p_52) <= 1) & p_55) >= 0xB7), 0xA8)))))) < 0x6D34CFEF) && 0x83) > l_229) > 0xC908), g_48.f0)), l_229)), p_52)) , g_204.f1) || p_53), l_229));
        if (l_229)
            continue;
    }
    if ((((-3) > g_204.f5) && (((((safe_add_func_int32_t_s_s(((((g_204.f5 > (safe_lshift_func_uint8_t_u_s(l_224, g_256))) < (p_52 == (safe_add_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_u(l_207, (safe_div_func_int32_t_s_s(((safe_add_func_int32_t_s_s(g_44, ((safe_sub_func_uint32_t_u_u(p_54, l_207)) >= 0xA8))) ^ g_4), p_51)))) < 1), p_53)))) <= 0) && g_204.f3), l_222)) != g_204.f3) ^ g_65) <= l_222) , g_118)))
    {
        int8_t l_282 = (-2);
        struct S1 l_283 = {0x17B7F45C,65532U,4294967295U,0x5E,0x5E,0xADD0621B};
        uint8_t l_297 = 253U;
        g_298 = ((safe_lshift_func_uint8_t_u_u((safe_add_func_int32_t_s_s(((p_52 | (safe_mod_func_int32_t_s_s(((0xB614 < ((((safe_sub_func_int16_t_s_s(((l_222 == (!l_282)) ^ (((((l_283 , (+((safe_mod_func_int8_t_s_s(l_283.f3, (safe_sub_func_uint32_t_u_u((g_65 || (safe_mod_func_uint16_t_u_u(((safe_add_func_uint32_t_u_u((((g_204.f4 < ((safe_lshift_func_int8_t_s_u((safe_mul_func_uint16_t_u_u(l_297, g_204.f1)), p_55)) && 0x9E95)) >= 0x5DD0) > (-1)), 0x2019D559)) <= l_224), 0x72F3))), p_51)))) == p_52))) | g_118) > p_52) >= g_43) != p_55)), 1)) == l_222) && 2) | g_204.f1)) < g_118), p_52))) , l_283.f2), 0x575A53CB)), 6)) < p_52);
    }
    else
    {
        uint8_t l_333 = 0x60;
        int32_t l_334 = 0x3C6B0DC2;
        const struct S0 l_344 = {1U};
        if (((safe_div_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_u((safe_add_func_int8_t_s_s((safe_add_func_uint8_t_u_u((p_55 || (safe_mod_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u(1U, (((((safe_sub_func_int8_t_s_s((((safe_lshift_func_int8_t_s_u((l_319 , (((safe_sub_func_uint32_t_u_u(((safe_sub_func_uint16_t_u_u(0xEF04, ((safe_rshift_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_u(255U, 3)) | (0xB37185AD | (safe_add_func_int8_t_s_s((safe_div_func_int32_t_s_s(((safe_unary_minus_func_uint32_t_u((2U && ((0x6DCFAA13 <= 0x1F110CBC) , 0xF06EB511)))) && p_54), 1U)), 2)))), 7)) || g_298))) == p_52), 0x815FF81F)) , (-7)) < 0xC8)), 6)) , 0U) ^ g_204.f5), 0x58)) != g_4) == g_65) ^ g_204.f5) , 0x912AE39D))), l_319.f4)), g_204.f0)), p_53))), l_333)), 0U)), l_319.f3)), l_333)) >= l_222))
        {
            int16_t l_339 = 0x871B;
            struct S0 l_365 = {0xE71A};
            l_334 = (-9);
            l_345 = ((((((((p_51 <= (safe_add_func_int32_t_s_s(l_222, (safe_mul_func_int8_t_s_s(g_44, (-3)))))) > l_339) <= (((l_339 != (g_4 && (safe_add_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(0x994F, g_256)), g_43)))) < l_339) || g_204.f5)) < 0xDF) | 0x66) , (-7)) , l_344) , g_48);
            if ((safe_sub_func_int32_t_s_s(0x7EB04718, g_204.f4)))
            {
                l_365 = (g_44 , ((safe_add_func_uint8_t_u_u((0xDE >= (l_344 , (safe_unary_minus_func_uint16_t_u((safe_add_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(((((g_204.f1 == l_319.f3) <= (safe_sub_func_int32_t_s_s((safe_div_func_uint32_t_u_u(((g_204.f1 , ((((g_48.f0 > (safe_mul_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(((((safe_mul_func_int8_t_s_s(0xDA, g_298)) != l_334) > p_53) <= 254U), p_54)), g_204.f2))) < p_55) <= 0) > p_51)) < g_204.f2), p_53)), l_333))) > g_118) , g_43), g_65)), p_52)))))), g_298)) , l_344));
            }
            else
            {
                struct S0 l_389 = {2U};
                int32_t l_393 = 0x5E0E7B48;
                for (l_319.f4 = 0; (l_319.f4 != 56); l_319.f4++)
                {
                    uint32_t l_388 = 4294967295U;
                    for (l_319.f0 = 0; (l_319.f0 != 54); l_319.f0++)
                    {
                        l_389 = ((((safe_rshift_func_int8_t_s_u((((safe_div_func_uint8_t_u_u(g_48.f0, p_52)) ^ (safe_rshift_func_uint8_t_u_s((safe_sub_func_int16_t_s_s(((g_65 & (safe_rshift_func_int8_t_s_s((0x92A9 != p_54), 4))) | (p_52 <= p_55)), (-7))), (safe_sub_func_int8_t_s_s((safe_mod_func_int32_t_s_s(((((((safe_sub_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s(g_4, g_43)), (-1))) & l_345.f0) < 6U) >= p_52) , g_48.f0) & p_53), p_52)), g_204.f5))))) == l_333), g_44)) || l_388) <= 0x5A6CC17C) , l_345);
                        g_390 = g_256;
                    }
                    for (l_319.f2 = 22; (l_319.f2 != 42); l_319.f2++)
                    {
                        return l_388;
                    }
                    l_393 = g_298;
                    for (l_333 = 9; (l_333 > 50); l_333++)
                    {
                        return l_319.f4;
                    }
                }
                return l_333;
            }
            l_334 = (safe_div_func_int32_t_s_s(((safe_mod_func_int16_t_s_s(0xA675, (l_319 , 6))) & (g_118 & (l_319 , ((safe_mul_func_uint16_t_u_u(0x3FAD, (safe_mul_func_uint8_t_u_u(((+p_55) || (safe_rshift_func_int16_t_s_s((~(safe_add_func_uint16_t_u_u(((((safe_sub_func_uint32_t_u_u(((((safe_div_func_int16_t_s_s((safe_mul_func_int16_t_s_s((((((((l_365.f0 , ((safe_add_func_uint8_t_u_u(0x92, p_53)) <= g_204.f3)) < 1U) & p_54) >= g_256) && g_44) > (-8)) | g_118), l_365.f0)), (-1))) ^ p_54) && l_339) >= l_223), g_204.f2)) < 0U) <= g_48.f0) <= l_345.f0), 0U))), 9))), 0xE5)))) >= p_52)))), l_339));
        }
        else
        {
            uint32_t l_433 = 4294967295U;
            uint16_t l_445 = 1U;
            g_436 = (safe_div_func_int32_t_s_s(((((safe_lshift_func_int16_t_s_s((safe_mod_func_int8_t_s_s(((((safe_add_func_uint32_t_u_u((p_51 <= (((safe_mod_func_int8_t_s_s((g_204.f3 && (safe_mod_func_int8_t_s_s((!(safe_mul_func_int32_t_s_s(p_51, (l_433 < (0x37 & (((safe_rshift_func_uint8_t_u_u(g_65, ((l_222 , (((p_55 && ((g_44 , 1) | (-1))) && l_334) , 0x4A15)) || g_4))) | 5) <= g_298)))))), l_224))), l_334)) != p_51) == 65535U)), g_118)) < 1) < 0xEB5E) , g_44), l_433)), 10)) > p_51) >= 0xDB) & l_319.f4), l_319.f4));
            l_334 = ((safe_mod_func_int8_t_s_s((g_204.f1 & l_334), ((safe_mul_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(((((p_55 <= (safe_sub_func_int8_t_s_s(g_48.f0, l_445))) >= 0x50BB737A) ^ (+(l_334 , (p_51 == ((safe_mod_func_int8_t_s_s(p_54, 0x5F)) && g_204.f4))))) , p_54), l_345.f0)), 65532U)) , p_52))) | 0x92);
        }
        g_465 = ((safe_div_func_int8_t_s_s(((((l_344.f0 & (p_51 & p_53)) == 0xA11A75C4) ^ (safe_mul_func_int8_t_s_s((safe_add_func_uint32_t_u_u((safe_add_func_int32_t_s_s((l_319.f4 | 255U), (safe_add_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(l_344.f0, (safe_rshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(p_54, ((247U >= l_333) >= p_52))), 14)))), g_204.f4)))), 4)), l_319.f1))) <= g_48.f0), l_319.f0)) < 0xB1);
    }
    for (l_319.f2 = 0; (l_319.f2 != 48); l_319.f2 = safe_add_func_uint16_t_u_u(l_319.f2, 2))
    {
        uint32_t l_494 = 0x777C7878;
        uint8_t l_497 = 0xD2;
        g_48 = g_48;
        if (((g_204.f3 && ((safe_mod_func_int8_t_s_s(((((safe_sub_func_int16_t_s_s((((safe_mod_func_int32_t_s_s((safe_sub_func_int32_t_s_s((safe_sub_func_int16_t_s_s(p_53, (((safe_div_func_int8_t_s_s(p_52, (safe_lshift_func_uint16_t_u_u(0xB809, 7)))) || (p_55 != (1 < (l_207 && (safe_sub_func_uint8_t_u_u((1U >= (g_204.f3 & p_54)), g_298)))))) == 0))), p_54)), g_48.f0)) && 0x9D1F99BF) == 5), p_55)) | (-1)) , (-1)) <= 0xF694), l_319.f2)) & p_52)) && p_52))
        {
            uint8_t l_498 = 0x7E;
            int32_t l_499 = 0x261DA184;
            l_499 = ((safe_mod_func_uint16_t_u_u(((((safe_mod_func_int32_t_s_s(p_55, ((65535U == ((safe_lshift_func_int16_t_s_s(((safe_div_func_int32_t_s_s(((safe_sub_func_int16_t_s_s((((g_204.f2 & g_204.f4) ^ (((l_223 != g_65) > p_54) | ((l_494 == (safe_div_func_uint16_t_u_u(l_497, 65533U))) ^ p_54))) & l_498), g_48.f0)) , 3), g_436)) < (-1)), p_51)) <= p_54)) ^ 0))) | g_204.f2) & g_390) <= p_54), g_256)) ^ l_497);
            g_465 = ((((safe_div_func_uint16_t_u_u(65531U, ((safe_rshift_func_int8_t_s_s(g_204.f0, 1)) | (((safe_mod_func_int8_t_s_s((safe_mod_func_uint8_t_u_u((p_55 , 0U), (safe_rshift_func_int8_t_s_u(((safe_div_func_uint32_t_u_u((~p_51), (((safe_add_func_uint32_t_u_u(0U, g_118)) > (0x8A != (((((!(((safe_div_func_uint8_t_u_u(l_494, g_204.f3)) > g_204.f3) == p_52)) & 0) ^ 8) == g_43) >= 9U))) | g_436))) < g_390), p_51)))), l_494)) ^ g_390) == g_204.f4)))) != l_494) <= l_494) < g_65);
            l_224 = p_54;
        }
        else
        {
            int16_t l_519 = 0xD080;
            int32_t l_540 = (-10);
            l_345 = ((safe_unary_minus_func_uint16_t_u(l_519)) , g_48);
            for (l_345.f0 = 0; (l_345.f0 >= 22); ++l_345.f0)
            {
                struct S0 l_522 = {65534U};
                l_522 = g_48;
            }
            l_224 = 0x1E6B41BF;
            l_540 = (((((0x64 != (+(((l_494 && (((+p_51) & ((safe_div_func_int8_t_s_s((-1), (safe_mod_func_int8_t_s_s((((g_204 , (!((safe_sub_func_int8_t_s_s((safe_mul_func_int8_t_s_s(g_204.f1, ((safe_lshift_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(((((safe_div_func_uint16_t_u_u(p_52, (l_345.f0 | p_54))) | l_494) ^ 0x14C6) , 0x0B17), p_51)), 4)) >= p_54))), g_4)) > 0x61B7))) > g_204.f2) ^ (-1)), g_204.f4)))) & g_204.f3)) > 0)) && l_497) == l_497))) <= g_204.f2) > p_52) ^ 0x438B) >= g_390);
        }
    }
    return l_541;
}
static int16_t func_60(uint32_t p_61, int16_t p_62, uint32_t p_63, uint8_t p_64)
{
    struct S0 l_67 = {0x155D};
    uint32_t l_85 = 0x559F947E;
    int32_t l_203 = 0x75CB63E7;
    l_203 = (func_36(((l_67 , 0x949E) , 0x93F16A1E), ((func_68((((safe_div_func_int32_t_s_s(((safe_div_func_uint8_t_u_u((((safe_sub_func_uint32_t_u_u(l_67.f0, (p_64 >= (safe_rshift_func_int8_t_s_u((+(-1)), 7))))) , l_67) , ((((safe_add_func_int8_t_s_s(l_67.f0, g_65)) , l_67.f0) || p_63) , p_63)), g_43)) <= 7U), p_64)) && p_64) <= l_67.f0), g_44, p_63, l_85, g_44) & (-1)) == (-8))) != p_63);
    return g_44;
}
static int32_t func_68(uint16_t p_69, uint8_t p_70, int8_t p_71, uint32_t p_72, const uint8_t p_73)
{
    struct S0 l_90 = {65535U};
    int32_t l_91 = 0x6030DEE2;
    uint32_t l_129 = 0xEEF7B85B;
    int16_t l_149 = 0x31A2;
    uint8_t l_154 = 0xEE;
    for (g_44 = 0; (g_44 != (-21)); --g_44)
    {
        int32_t l_116 = 0x81905554;
        const uint8_t l_117 = 2U;
        for (g_65 = 0; (g_65 != 7); ++g_65)
        {
            return g_44;
        }
        l_90 = g_48;
        l_91 = p_70;
        for (p_71 = (-15); (p_71 <= 19); p_71 = safe_add_func_int8_t_s_s(p_71, 4))
        {
            int8_t l_115 = (-1);
            g_118 = (safe_add_func_int16_t_s_s((safe_add_func_uint32_t_u_u((safe_add_func_uint16_t_u_u(p_70, (safe_mod_func_int16_t_s_s((-4), p_69)))), ((safe_div_func_int32_t_s_s((g_65 && (safe_rshift_func_uint8_t_u_s((safe_div_func_int16_t_s_s(((safe_mul_func_int8_t_s_s(((p_70 < (safe_mul_func_int16_t_s_s((((((safe_lshift_func_uint8_t_u_s((!0x69BA6CE2), l_115)) && (g_4 ^ g_44)) <= l_115) | g_48.f0) != (-1)), l_116))) ^ l_91), 0)) | g_65), 0x119B)), l_115))), 1U)) && l_117))), g_65));
        }
    }
    l_90 = ((l_90.f0 , (+(safe_rshift_func_int16_t_s_s((l_90.f0 && (((((safe_sub_func_uint16_t_u_u((safe_div_func_uint32_t_u_u((1 <= (safe_add_func_uint16_t_u_u(((g_118 , g_118) | ((~(-4)) && (((g_65 , p_72) >= (0x2FC4CEA7 > p_70)) | (-1)))), l_90.f0))), g_48.f0)), l_91)) | l_90.f0) <= g_43) || p_69) | l_129)), 1)))) , g_48);
    if ((((p_72 == (((safe_sub_func_int16_t_s_s((safe_add_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u(((safe_mod_func_uint16_t_u_u((safe_div_func_uint16_t_u_u((p_69 < ((safe_sub_func_int8_t_s_s((~(safe_lshift_func_uint16_t_u_s(g_48.f0, (p_69 , g_44)))), (((safe_div_func_int8_t_s_s(((((safe_sub_func_int32_t_s_s(g_4, l_149)) ^ (safe_mul_func_int8_t_s_s(l_91, (safe_lshift_func_uint16_t_u_s(((p_71 != g_43) & l_154), 11))))) > 0xA361) <= 4294967292U), g_118)) < g_118) && g_48.f0))) & 1U)), (-8))), 0x6617)) || l_154), 8)), 0xA89317E4)), p_71)) ^ l_149) | p_73)) | g_118) ^ l_154))
    {
        int32_t l_155 = 0x8DDD0EBF;
        struct S0 l_188 = {65531U};
        g_48 = ((l_155 , (g_43 && (safe_sub_func_uint16_t_u_u(g_48.f0, (safe_mul_func_int8_t_s_s((((safe_sub_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u((0xA2 && ((~(safe_sub_func_int8_t_s_s(((safe_div_func_int16_t_s_s(((safe_add_func_int32_t_s_s(((safe_mul_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s((safe_mod_func_uint16_t_u_u(g_118, (safe_lshift_func_uint16_t_u_s(l_129, p_70)))), (((+(safe_rshift_func_int16_t_s_s(((((((safe_mul_func_int16_t_s_s((((g_48.f0 <= p_70) | g_48.f0) | l_149), 0U)) > 0U) != 9) || 0x8091) < 7) >= g_43), 7))) & 0x0A) , l_154))), g_65)) & g_4), 1U)) < p_71), 6)) && 65535U), l_154))) == l_155)), p_71)) & p_73), 0x9635)) >= g_4) , 0xC8), p_72)))))) , l_188);
    }
    else
    {
        uint8_t l_201 = 247U;
        uint8_t l_202 = 0x09;
        g_48 = ((g_48.f0 , (safe_add_func_int32_t_s_s((safe_mod_func_uint16_t_u_u(g_43, (l_149 , (safe_sub_func_int8_t_s_s(((((((7U || p_69) || (safe_div_func_uint8_t_u_u(((p_70 >= ((((p_72 ^ (safe_div_func_int8_t_s_s((((p_69 | (((safe_sub_func_uint16_t_u_u((((5 != 65535U) , p_70) | l_201), 7)) , p_70) && g_118)) , l_149) <= p_70), l_202))) , 3) && l_91) > g_48.f0)) , 0U), g_43))) && l_149) || l_202) || g_118) > p_69), p_72))))), (-1)))) , l_90);
    }
    return g_43;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_4;
    csmith_sink_ = g_43;
    csmith_sink_ = g_44;
    csmith_sink_ = g_48.f0;
    csmith_sink_ = g_65;
    csmith_sink_ = g_118;
    csmith_sink_ = g_204.f0;
    csmith_sink_ = g_204.f1;
    csmith_sink_ = g_204.f2;
    csmith_sink_ = g_204.f3;
    csmith_sink_ = g_204.f4;
    csmith_sink_ = g_204.f5;
    csmith_sink_ = g_256;
    csmith_sink_ = g_298;
    csmith_sink_ = g_390;
    csmith_sink_ = g_436;
    csmith_sink_ = g_465;
    csmith_sink_ = g_760;
    csmith_sink_ = g_1032;
    csmith_sink_ = g_1033;
    csmith_sink_ = g_1059;
    platform_main_end(0,0);
    return 0;
}
