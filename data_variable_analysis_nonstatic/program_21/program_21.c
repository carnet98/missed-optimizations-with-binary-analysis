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
struct S0 {
   const uint32_t f0;
   uint8_t f1;
   uint8_t f2;
};
struct S1 {
   int64_t f0;
   int32_t f1;
   int32_t f2;
   int32_t f3;
   uint32_t f4;
   int32_t f5;
   int8_t f6;
   const uint32_t f7;
};
static uint32_t g_11 = 0x7084BC9CL;
static int32_t g_42 = 0x7C295A52L;
static int32_t *g_41 = &g_42;
static int32_t g_59 = (-1L);
static struct S0 g_82 = {0xFF578636L,1UL,0x74L};
static int16_t g_113 = 5L;
static int32_t *g_135 = &g_59;
static int32_t **g_157 = &g_41;
static int32_t ***g_156 = &g_157;
static int32_t g_199 = 0xF31C3D10L;
static struct S1 g_265 = {7L,0x518CAC00L,1L,1L,0UL,0L,0x21L,18446744073709551607UL};
static int32_t ****g_304 = &g_156;
static int32_t *****g_303 = &g_304;
static struct S0 g_523 = {1UL,255UL,0x0FL};
static const uint16_t g_534 = 0x83F5L;
static int32_t * const *g_734 = (void*)0;
static int32_t * const **g_733 = &g_734;
static int32_t * const ***g_732 = &g_733;
static int32_t * const *** const *g_731 = &g_732;
static int32_t *g_751 = &g_42;
static int8_t g_775 = 0L;
inline static uint32_t func_1(void);
static int32_t func_2(int32_t p_3, int32_t p_4, int32_t p_5, int32_t p_6, uint16_t p_7);
inline static int8_t func_12(uint64_t p_13, int8_t p_14, struct S1 p_15, const uint64_t p_16, uint64_t p_17);
inline static uint8_t func_20(uint32_t p_21, int32_t p_22);
static int32_t * func_30(int32_t p_31, int32_t * p_32);
static int32_t func_33(uint32_t p_34, int32_t * p_35, uint8_t p_36, uint32_t p_37, uint64_t p_38);
inline static int32_t * func_39(int32_t * p_40);
static uint8_t func_44(int32_t p_45, uint8_t p_46, uint8_t p_47, const int32_t * p_48);
inline static uint8_t func_49(uint32_t p_50);
inline static uint32_t func_51(struct S0 p_52, int8_t p_53);
inline static uint32_t func_1(void)
{
    int64_t l_8 = (-10L);
    int32_t l_23 = (-2L);
    int64_t l_29 = 0L;
    struct S1 l_736 = {0xB64325831930285CLL,0x2DEE4480L,6L,0L,4294967290UL,0x96AB468FL,0xB4L,7UL};
    int32_t *l_782 = &g_42;
    (*g_751) = func_2(l_8, l_8, l_8, (safe_lshift_func_uint8_t_u_s(((l_8 != ((g_11 | (g_11 >= func_12(g_11, (safe_sub_func_uint64_t_u_u(((((func_20(l_23, (~((((safe_rshift_func_int8_t_s_u(((safe_sub_func_uint16_t_u_u(g_11, (-1L))) , g_11), 6)) , g_11) <= l_8) & l_29))) , 0x76434EBA77229999LL) , g_11) >= g_265.f3) == l_29), g_265.f2)), l_736, l_736.f2, l_736.f7))) != l_736.f5)) , 0x2CL), 6)), g_113);
    for (g_113 = 0; (g_113 < (-10)); g_113 = safe_sub_func_int32_t_s_s(g_113, 2))
    {
        int32_t ***l_780 = &g_157;
        int32_t ****l_781 = &l_780;
        (*l_781) = l_780;
    }
    l_782 = l_782;
    return g_523.f0;
}
static int32_t func_2(int32_t p_3, int32_t p_4, int32_t p_5, int32_t p_6, uint16_t p_7)
{
    int32_t *l_744 = &g_265.f3;
    uint8_t l_768 = 2UL;
    for (g_199 = 12; (g_199 != 16); g_199++)
    {
        int32_t **l_745 = &g_41;
        int32_t l_756 = (-3L);
        (*l_745) = l_744;
        (*l_745) = (void*)0;
        (*g_751) = (g_42 | (((safe_lshift_func_uint16_t_u_u((((~(((((safe_rshift_func_int8_t_s_s((g_751 == &p_5), 2)) != ((((p_5 == ((safe_mod_func_int16_t_s_s(p_6, (safe_lshift_func_int16_t_s_u((p_4 && ((&g_304 != &g_304) ^ (p_7 != g_199))), l_756)))) , (*l_744))) <= p_4) || g_265.f4) != g_265.f2)) , 249UL) ^ p_6) ^ g_265.f0)) > (*g_135)) && p_4), (*l_744))) , g_265.f4) ^ 255UL));
    }
    l_744 = l_744;
    (*g_751) = (safe_add_func_int8_t_s_s((((safe_mul_func_uint8_t_u_u((&l_744 != ((!(safe_sub_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((safe_sub_func_uint32_t_u_u((((-1L) < ((-3L) != g_523.f2)) >= l_768), (safe_lshift_func_uint8_t_u_s((((((g_11 || ((safe_lshift_func_uint8_t_u_s((safe_rshift_func_uint16_t_u_u(((g_775 , &l_744) == &l_744), 8)), p_5)) && 0xF0E2L)) , (void*)0) == (void*)0) || p_3) , p_4), 5)))), 2)), 0x3A66L))) , &l_744)), g_265.f7)) != 0x52L) > 0xD3E2EB77L), p_5));
    for (g_775 = 17; (g_775 >= 26); g_775 = safe_add_func_uint8_t_u_u(g_775, 9))
    {
        (**g_732) = (void*)0;
        return p_5;
    }
    return p_4;
}
inline static int8_t func_12(uint64_t p_13, int8_t p_14, struct S1 p_15, const uint64_t p_16, uint64_t p_17)
{
    int32_t *l_740 = &g_42;
    int32_t **l_741 = &g_135;
    for (g_265.f1 = 0; (g_265.f1 <= (-20)); g_265.f1 = safe_sub_func_uint16_t_u_u(g_265.f1, 1))
    {
        int32_t **l_739 = &g_41;
        (*l_739) = (void*)0;
    }
    (*l_741) = l_740;
    return p_14;
}
inline static uint8_t func_20(uint32_t p_21, int32_t p_22)
{
    struct S1 l_54 = {-1L,0L,0x7BA7DA82L,0xC040C8E8L,1UL,0x54C3DC4DL,0xE3L,1UL};
    struct S0 l_55 = {0x399D012CL,252UL,0x83L};
    int16_t l_56 = 6L;
    int32_t *l_722 = &g_265.f2;
    int32_t **l_735 = &g_135;
    (*l_735) = func_30(func_33(g_11, func_39(g_41), func_44(p_21, func_49(func_51((((g_41 == (void*)0) ^ (((p_22 , (g_11 , l_54)) , p_22) || g_11)) , l_55), l_56)), g_11, &g_59), g_82.f0, p_22), l_722);
    return g_42;
}
static int32_t * func_30(int32_t p_31, int32_t * p_32)
{
    int32_t *l_723 = (void*)0;
    const struct S0 l_726 = {4294967295UL,0x65L,0x13L};
    int32_t * const *l_730 = &g_135;
    int32_t * const **l_729 = &l_730;
    int32_t * const ***l_728 = &l_729;
    int32_t * const *** const *l_727 = &l_728;
    l_723 = (void*)0;
    g_731 = ((safe_sub_func_int64_t_s_s(((g_42 | ((p_31 , &l_723) == (void*)0)) ^ p_31), (0xB2CEL && (g_265.f2 && (l_726 , (p_31 > g_199)))))) , l_727);
    return p_32;
}
static int32_t func_33(uint32_t p_34, int32_t * p_35, uint8_t p_36, uint32_t p_37, uint64_t p_38)
{
    int32_t ***l_167 = &g_157;
    struct S1 l_168 = {0L,0x941D4D58L,6L,-6L,4294967291UL,0x0C5E2D54L,0x45L,0x9C76149AL};
    int8_t l_179 = 0xD9L;
    int32_t ****l_212 = &g_156;
    int32_t l_228 = 0xE5BC4767L;
    uint64_t l_426 = 9UL;
    uint8_t l_634 = 7UL;
    int32_t l_642 = 0xD5BCF2F6L;
    uint64_t l_657 = 4UL;
    uint16_t l_658 = 0x13DBL;
    int8_t l_706 = 0x8EL;
    int32_t ****l_720 = &l_167;
    (*p_35) = (((safe_mod_func_uint8_t_u_u(((safe_sub_func_int64_t_s_s((-6L), ((((safe_rshift_func_int16_t_s_s((&p_35 == (void*)0), (safe_lshift_func_uint16_t_u_u((l_167 == (l_168 , l_167)), 4)))) == p_38) != 1L) >= (((safe_mod_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_s((safe_mod_func_int8_t_s_s((safe_sub_func_int32_t_s_s((((((safe_sub_func_uint64_t_u_u(((((l_168 , g_82) , (***l_167)) ^ g_82.f0) && (***l_167)), p_36)) < g_113) , 4L) || g_42) != (***l_167)), (-4L))), (-7L))), l_179)), g_113)) && g_11) , p_36)))) , 251UL), g_82.f2)) != (***l_167)) < (***l_167));
    if (((***l_167) ^ (((safe_lshift_func_int8_t_s_s(g_42, 7)) <= (((safe_rshift_func_int16_t_s_s((-10L), 5)) && (((***l_167) , (safe_lshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(g_113, (safe_rshift_func_uint16_t_u_u((safe_add_func_int64_t_s_s((p_34 >= (((safe_add_func_int64_t_s_s((safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((~((g_199 >= (safe_rshift_func_uint8_t_u_s(9UL, 0))) | ((safe_add_func_uint32_t_u_u(((safe_sub_func_int16_t_s_s(p_36, (***l_167))) , g_11), 0L)) , 0xDF1DL))), p_34)), 2)), p_38)) >= (***l_167)) >= (***g_156))), (-1L))), 15)))), 0))) >= g_82.f2)) || g_11)) < 0x2514L)))
    {
        uint32_t l_206 = 0x805C0E47L;
        int32_t *** const l_211 = &g_157;
        const uint32_t l_213 = 0x015A4A77L;
        int32_t *****l_214 = (void*)0;
        int32_t ****l_215 = &g_156;
        (***l_212) = func_39(((l_206 > ((g_82.f1 <= (*p_35)) ^ (safe_mul_func_int8_t_s_s((g_82.f0 , (safe_rshift_func_int16_t_s_u(((l_211 != ((((((((***l_211) ^ ((***l_167) < g_113)) , &l_211) == l_212) >= p_38) >= g_82.f1) <= p_36) , l_211)) <= (**g_157)), (***l_211)))), l_213)))) , (**l_211)));
        l_215 = &l_167;
        (*g_135) = ((g_82.f2 , &l_215) != (l_168 , &l_212));
    }
    else
    {
        int64_t l_224 = 4L;
        int16_t l_258 = 5L;
        int32_t ***l_270 = &g_157;
        uint64_t l_299 = 8UL;
        uint32_t l_322 = 4294967289UL;
        int32_t l_324 = 7L;
        int32_t *****l_349 = &g_304;
        uint8_t l_369 = 253UL;
        int16_t l_502 = 0x74E4L;
        uint32_t l_541 = 0xB074A68DL;
        struct S1 l_545 = {0x43B5A85652763322LL,0L,-1L,0xC586C547L,0UL,1L,0x16L,5UL};
        int32_t *l_625 = &l_545.f3;
        if ((p_34 > 18446744073709551615UL))
        {
            int8_t l_227 = 8L;
            int32_t l_229 = 0L;
            if ((safe_sub_func_int16_t_s_s((65528UL == p_38), (safe_add_func_uint64_t_u_u(((g_199 , g_59) , p_36), p_34)))))
            {
                (*g_41) = 0x0AD08EFBL;
                for (l_168.f1 = 0; (l_168.f1 < 15); ++l_168.f1)
                {
                    (**g_157) = 0x72CDDA9EL;
                    (**l_167) = (*g_157);
                }
                if (((((safe_rshift_func_uint8_t_u_s(g_82.f1, 0)) || ((***l_167) != (((*g_156) != (((247UL ^ p_37) <= l_224) , (*g_156))) != 0L))) || ((safe_mod_func_int8_t_s_s(0xB8L, l_227)) == g_82.f2)) ^ g_199))
                {
                    l_229 = l_228;
                    (**l_167) = func_39((*g_157));
                }
                else
                {
                    int16_t l_234 = (-1L);
                    for (l_168.f6 = 3; (l_168.f6 == (-8)); l_168.f6--)
                    {
                        (*p_35) = (*p_35);
                        if ((*g_135))
                            continue;
                        if ((*p_35))
                            break;
                        (*p_35) = ((safe_mul_func_int16_t_s_s(p_36, g_82.f2)) | g_42);
                    }
                    (*p_35) = l_234;
                    return p_37;
                }
                (***g_156) = (safe_mod_func_int8_t_s_s((0UL > (safe_add_func_uint64_t_u_u((safe_sub_func_int32_t_s_s(((g_82.f0 , g_113) > p_37), (*g_135))), (&g_156 != ((safe_sub_func_uint32_t_u_u(g_82.f0, (*p_35))) , &g_156))))), (***l_167)));
            }
            else
            {
                (****l_212) = (****l_212);
            }
        }
        else
        {
            int64_t l_243 = 1L;
            int32_t **l_244 = &g_41;
            int32_t *****l_256 = &l_212;
            uint32_t l_257 = 4294967289UL;
            uint16_t l_275 = 0x96B6L;
            struct S1 l_276 = {1L,9L,0L,0L,0x4213B5F9L,2L,0xA7L,0xC5E4DCB4L};
            if ((250UL != ((*g_156) != (void*)0)))
            {
                int64_t l_249 = 0x1E669F7C8D71842ALL;
                int32_t *l_279 = &g_42;
                int32_t ****l_300 = &g_156;
                if (l_243)
                {
                    (*p_35) = (((l_243 , (((l_244 == l_244) || ((safe_sub_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(1UL, ((**l_244) && (l_249 , 0xBB6FL)))), p_37)) == ((safe_add_func_uint32_t_u_u(((1L | g_113) ^ p_38), g_11)) != 0x9FL))) > 0x7DL)) | 0xC1BFL) <= g_82.f2);
                }
                else
                {
                    int32_t *****l_255 = &l_212;
                    (*p_35) = ((0x0F45062FL && ((((l_249 != p_36) < (((safe_unary_minus_func_uint8_t_u((0x558EA937L & (safe_add_func_uint16_t_u_u(((g_42 , l_255) != l_256), (((((1L & g_82.f0) != l_257) & 6UL) , (void*)0) == (*l_255))))))) , 0x52192DAD5565FF36LL) >= l_258)) ^ g_11) < p_36)) ^ (*g_135));
                    for (p_34 = 0; (p_34 == 9); p_34++)
                    {
                        (****l_255) = ((((safe_add_func_uint64_t_u_u(0x88EDF5FA7B2E72F2LL, p_37)) <= ((0x74L > (safe_lshift_func_uint8_t_u_u(((g_113 , g_265) , (safe_mod_func_uint32_t_u_u(((safe_add_func_int32_t_s_s((l_270 == &g_157), (((safe_add_func_int16_t_s_s(((safe_add_func_int8_t_s_s(0xA7L, (l_275 , (*****l_255)))) != 0x7F249F29L), p_36)) != p_34) == g_11))) , 0x02F86E1EL), 0x54B0218DL))), 0))) > g_265.f4)) , l_276) , (void*)0);
                        (**g_156) = p_35;
                    }
                }
                for (g_59 = 3; (g_59 >= 0); g_59 = safe_sub_func_int8_t_s_s(g_59, 7))
                {
                    p_35 = func_39(l_279);
                }
                (***g_156) = (safe_mod_func_int8_t_s_s(((safe_lshift_func_int16_t_s_u((((((((safe_mod_func_int32_t_s_s((***g_156), ((safe_sub_func_int64_t_s_s((~(safe_add_func_int64_t_s_s((safe_lshift_func_int8_t_s_u((safe_lshift_func_int8_t_s_s(((0UL >= 1L) , (***l_270)), (((((((*g_135) ^ (safe_lshift_func_uint16_t_u_s(0xC6D2L, 6))) == ((((****l_212) >= 0xC6923B6AL) >= (safe_add_func_int16_t_s_s(((((g_265 , (void*)0) == &l_212) != 0x1EL) > (*l_279)), p_37))) >= p_37)) > g_199) & p_37) & 9L) <= (*l_279)))), l_299)), p_34))), (****l_212))) ^ 1L))) || g_42) , (*l_279)) || 0x97B0L) , 0x0F9319D2E82F85C9LL) <= (*****l_256)) , 0x2E30L), g_265.f2)) == (***l_167)), p_34));
                if ((l_300 != (((safe_lshift_func_uint8_t_u_s(((p_34 , (g_303 == (g_265.f4 , &g_304))) <= g_265.f2), 6)) , 1L) , (*g_303))))
                {
                    int8_t l_305 = 1L;
                    (***l_270) = l_305;
                    for (p_37 = 0; (p_37 >= 32); p_37++)
                    {
                        (*l_244) = (void*)0;
                        (**l_270) = (***l_300);
                    }
                    if ((((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((safe_mul_func_uint16_t_u_u(((((p_35 == (void*)0) >= (*p_35)) == (safe_lshift_func_uint16_t_u_s((p_36 > (safe_mul_func_int8_t_s_s((g_199 , (1UL != ((safe_add_func_int16_t_s_s((safe_add_func_int8_t_s_s((g_199 | p_38), ((((***g_303) == &p_35) == 0x616BL) <= g_42))), g_82.f2)) || g_265.f0))), 0xF1L))), 0))) ^ (*l_279)), (-7L))), p_37)), g_113)) ^ p_36) , l_322))
                    {
                        return g_265.f1;
                    }
                    else
                    {
                        (*l_279) = (g_82.f1 ^ g_265.f3);
                        (*g_135) = 1L;
                        (**g_156) = (***l_300);
                    }
                }
                else
                {
                    int32_t l_325 = 0xA6B3445AL;
                    int32_t ** const *l_331 = &g_157;
                    int32_t ** const **l_330 = &l_331;
                    int32_t ** const ***l_329 = &l_330;
                    l_325 = (p_34 <= (p_36 , (~((l_324 | ((***l_270) || 18446744073709551608UL)) ^ 0xE0L))));
                    (*l_279) = (-1L);
                    (***g_156) = (g_265.f3 == (safe_sub_func_int32_t_s_s(((((***l_270) == (+(&l_300 == l_329))) != (((void*)0 == l_300) , ((((safe_add_func_uint32_t_u_u((((((safe_sub_func_uint32_t_u_u((safe_unary_minus_func_uint16_t_u((p_38 | 0x7FL))), ((g_42 & g_265.f4) && p_37))) != p_38) == p_36) != (***l_270)) > (***g_156)), 4294967295UL)) != p_36) ^ p_36) != g_82.f0))) < (*****l_256)), (*p_35))));
                }
            }
            else
            {
                int32_t *****l_341 = &g_304;
                for (l_168.f1 = (-4); (l_168.f1 < (-6)); l_168.f1--)
                {
                    int32_t ***l_344 = &l_244;
                    int32_t *****l_350 = &g_304;
                }
                (**l_256) = (void*)0;
            }
            (*g_135) = (safe_mul_func_int16_t_s_s((0xD4865413634BA4E0LL > (((safe_lshift_func_uint8_t_u_u(p_38, 1)) <= ((safe_add_func_uint64_t_u_u((((*l_349) != (*l_256)) & (!((p_36 && ((-1L) >= ((safe_unary_minus_func_int64_t_s(p_36)) , 0x3FL))) < g_82.f2))), g_82.f0)) , 1UL)) & (-8L))), p_34));
            return g_265.f5;
        }
        (*****g_303) = (((((safe_mul_func_int8_t_s_s(g_113, (safe_rshift_func_int8_t_s_s(((safe_unary_minus_func_uint32_t_u(((((**g_303) == (*g_304)) & 0x61086BC35C1B076CLL) <= ((*g_304) == ((((((*g_156) == (**g_304)) < ((((((safe_mod_func_int32_t_s_s((*g_41), (((((((((**l_349) != (void*)0) , (*p_35)) >= (*p_35)) >= (***l_270)) | 0x3CL) ^ (****g_304)) != p_36) , (***l_270)))) | p_38) != 0xF056L) , (****l_212)) && (*****l_349)) & 0xCF3447AFL)) != p_37) || (***l_270)) , (*l_212)))))) , (***l_167)), 7)))) == (***l_167)) && 0x6EL) >= g_82.f0) , l_369);
        (***l_167) = (!1L);
        if ((0x39L && ((0xF5C83813D3AF03E8LL ^ (safe_unary_minus_func_uint64_t_u(g_59))) , (safe_sub_func_int64_t_s_s(g_265.f4, 0UL)))))
        {
            int32_t ***l_380 = &g_157;
            const uint16_t l_491 = 9UL;
            if ((safe_mod_func_uint64_t_u_u((((safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_s(g_59, ((l_380 == ((g_265.f7 | (((safe_mul_func_int16_t_s_s(((((safe_mod_func_uint16_t_u_u(((safe_add_func_int32_t_s_s(((~(4294967289UL <= (g_265.f3 < (safe_add_func_uint16_t_u_u((safe_add_func_int8_t_s_s(((safe_mul_func_uint16_t_u_u(g_59, p_38)) ^ (safe_rshift_func_int8_t_s_u(0xB0L, ((safe_mod_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s((((**g_304) == (void*)0) == (*g_135)), p_38)), p_36)) ^ 18446744073709551615UL)))), p_36)), (****l_212)))))) , 0xDB230814L), p_37)) , 0x5346L), g_42)) || g_59) > (***l_380)) && p_34), 0xD943L)) , (****l_212)) , g_113)) , (**g_303))) < (***l_270)))), 7)) < p_37) == (***g_156)), 0x41BFAFFB6A515971LL)))
            {
                (***l_167) = (safe_lshift_func_int16_t_s_u((7UL != g_82.f1), g_82.f2));
                for (g_82.f2 = 6; (g_82.f2 <= 12); g_82.f2 = safe_add_func_int32_t_s_s(g_82.f2, 9))
                {
                    return g_82.f0;
                }
            }
            else
            {
                uint8_t l_411 = 255UL;
                int32_t l_416 = 0x4F0F0427L;
                int32_t *** const *l_462 = &l_167;
                (****l_212) = (safe_mod_func_int8_t_s_s((((safe_sub_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((!(g_265 , (p_38 & ((0x3E96B69F79CD59E5LL & p_34) || l_411)))), g_265.f4)), (safe_lshift_func_uint16_t_u_u((4294967295UL >= ((safe_lshift_func_uint16_t_u_s(0x371DL, 11)) | (g_265.f4 , l_411))), l_416)))) , g_265.f5) > p_34), g_265.f2));
                (*p_35) = (*g_41);
                (***l_270) = ((**l_212) == (**g_304));
                for (g_265.f4 = 0; (g_265.f4 <= 60); g_265.f4 = safe_add_func_int32_t_s_s(g_265.f4, 1))
                {
                    int32_t l_431 = 0x91B6409FL;
                    const int32_t *l_475 = &g_265.f3;
                    const int32_t **l_474 = &l_475;
                    const int32_t ***l_473 = &l_474;
                    const int32_t ****l_472 = &l_473;
                    const int32_t *****l_471 = &l_472;
                    (*p_35) = ((safe_rshift_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(1L, (((!((0x1E3CCB0F604BCCBFLL >= ((((safe_rshift_func_uint8_t_u_s(((l_426 & (-1L)) , ((((safe_add_func_uint16_t_u_u((((safe_lshift_func_int16_t_s_s((l_431 & (safe_mul_func_uint8_t_u_u(((void*)0 == (**l_380)), (safe_mod_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(g_42, (safe_unary_minus_func_uint64_t_u((safe_unary_minus_func_uint64_t_u(((safe_mul_func_int8_t_s_s((g_265.f4 | p_38), p_37)) || p_38))))))), 0x3677L))))), 7)) | l_416) & (*****l_349)), 0x843FL)) , (*p_35)) , (**g_303)) != (*g_304))), 6)) >= 0x09L) && 4L) & (-3L))) , (***l_167))) == l_411) > l_416))), 3)) >= 0x1A7B9ABF68952115LL);
                    if (((((((safe_sub_func_int16_t_s_s(p_38, (safe_mod_func_int32_t_s_s((0UL | 1UL), (**g_157))))) && (g_265.f0 == ((safe_mod_func_uint8_t_u_u(0x65L, 0xE9L)) <= p_37))) || g_265.f4) == (***l_167)) | g_82.f0) == p_36))
                    {
                        (***l_380) = ((0x6FL ^ (safe_mod_func_uint32_t_u_u(((safe_mul_func_int8_t_s_s(((l_431 || (-7L)) , g_265.f0), ((((0x18DDC099395FA12ALL >= (g_42 || (g_265.f4 == (g_265.f2 && (safe_sub_func_int32_t_s_s((((~(safe_unary_minus_func_int8_t_s(((void*)0 != (*g_156))))) <= p_37) , 1L), (***l_270))))))) , g_59) ^ 0x4E1FA5839F482893LL) != 0x41F2L))) , (***l_380)), 0xECCBE0E9L))) , (****l_212));
                        (*p_35) = (safe_sub_func_uint16_t_u_u(0UL, (safe_mul_func_int16_t_s_s(l_411, p_37))));
                        (**l_380) = func_39((**g_156));
                        if ((**g_157))
                            continue;
                    }
                    else
                    {
                        uint8_t l_482 = 0x8EL;
                        (*p_35) = (((***l_380) , (((safe_rshift_func_int8_t_s_s((((*g_303) == l_462) > g_113), ((safe_mul_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((((safe_sub_func_uint64_t_u_u(p_36, ((safe_lshift_func_uint16_t_u_u(((0xF129L | (l_471 != &g_304)) , (safe_lshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(((safe_rshift_func_int8_t_s_s((((-6L) >= 4294967295UL) || (***l_473)), p_38)) == (*l_475)), g_82.f0)), g_265.f3))), p_38)) & 0x1021AD2A60849B00LL))) , l_482) | 0x98E29903L), p_36)), 0xE7L)) == 0x47D4C15BA14C7D38LL))) , 18446744073709551615UL) > 0x9426AAB50528DDE3LL)) == 0L);
                        (*g_135) = (((0L && ((+0x4CE6D024CCF5BBFELL) > 0xD09BC50419C6E569LL)) >= (((safe_unary_minus_func_uint8_t_u(((((0L && (safe_mul_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s((&p_35 == (*l_473)), (l_491 ^ (safe_add_func_int64_t_s_s(((safe_rshift_func_uint8_t_u_s((safe_mod_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(l_482, (safe_rshift_func_int16_t_s_s((***l_380), l_502)))), 1UL)), (***l_473))) < p_36), g_82.f1))))), (*****l_349))), g_59))) && g_265.f5) <= 0xD1L) >= (***l_380)))) || p_36) , 8UL)) > g_265.f2);
                        (*p_35) = (safe_mod_func_int8_t_s_s((((g_265.f1 , ((((g_82.f2 & (safe_sub_func_int32_t_s_s(((safe_lshift_func_int8_t_s_u(g_265.f0, ((safe_mod_func_int8_t_s_s(((safe_add_func_int32_t_s_s(((((safe_lshift_func_uint16_t_u_s((+g_59), ((void*)0 == (*l_462)))) == ((255UL && (safe_mul_func_uint16_t_u_u((safe_add_func_int32_t_s_s(((((safe_sub_func_uint16_t_u_u((~g_11), (&l_472 != &l_212))) || 0x1840L) , (void*)0) == (*g_304)), (****l_212))), g_265.f7))) & g_199)) < (**g_157)) ^ (****l_462)), (*p_35))) == (*p_35)), l_482)) , (****l_462)))) <= 0UL), p_34))) | (-7L)) > p_34) , g_523)) , 0x61D223A280458CA9LL) , 0xD4L), p_37));
                    }
                }
            }
            (*****l_349) = (safe_rshift_func_uint8_t_u_s(((g_82.f1 ^ (0x688CL == (((***g_304) != (***g_304)) >= (((((safe_sub_func_uint32_t_u_u(((((safe_mul_func_int16_t_s_s((((((safe_mod_func_int64_t_s_s(1L, 0x4CC45CE519DEDD14LL)) == ((safe_rshift_func_uint16_t_u_s((***l_167), 13)) || ((void*)0 != (*g_156)))) > (-1L)) > g_11) || 0xAF5227B0L), g_265.f4)) , p_36) >= (-1L)) < p_38), g_534)) <= p_38) && 0xC3L) == g_82.f1) && g_265.f5)))) ^ g_82.f2), (****l_212)));
            (***g_304) = p_35;
        }
        else
        {
            uint16_t l_540 = 0xBE83L;
            struct S0 l_544 = {0x84D524F1L,0xA3L,0xDFL};
            int32_t ***l_618 = &g_157;
            int16_t l_633 = 1L;
            (*****g_303) = (((void*)0 == p_35) == (safe_mul_func_int16_t_s_s(p_36, g_11)));
            if (((void*)0 == (**g_304)))
            {
                for (g_265.f1 = 10; (g_265.f1 <= 0); --g_265.f1)
                {
                    if ((****l_212))
                    {
                        int32_t ****l_539 = &l_270;
                        (*g_303) = l_539;
                    }
                    else
                    {
                        (****l_349) = (****g_303);
                    }
                    if (l_540)
                        break;
                }
                return l_541;
            }
            else
            {
                struct S0 l_548 = {0x160FA78AL,1UL,0x91L};
                int32_t **l_569 = &g_135;
                int32_t **** const l_597 = &g_156;
                if ((safe_rshift_func_int8_t_s_u(((*l_212) != (*l_212)), (((((l_544 , l_168) , l_545) , (*g_304)) != (*l_212)) , ((((((***g_303) != &p_35) > g_59) || 1L) < p_37) | g_523.f1)))))
                {
                    uint32_t l_555 = 0x0E80A7A0L;
                    if ((*p_35))
                    {
                        (***l_167) = (safe_mul_func_int8_t_s_s(((((l_548 , ((((safe_add_func_int16_t_s_s((0xB848C472A42C80E6LL <= 0xF7A6DE3D14618E13LL), g_523.f2)) != (safe_sub_func_uint32_t_u_u((p_35 != (void*)0), l_548.f2))) > (((safe_rshift_func_int8_t_s_u(((((l_548.f0 != l_540) & g_82.f1) != 0xC7E0L) == p_36), 0)) != l_555) > 6UL)) == p_37)) <= g_265.f1) || l_548.f0) < 0x07DB0D48962ACFE7LL), (-1L)));
                    }
                    else
                    {
                        uint16_t l_568 = 0xF972L;
                        struct S0 l_598 = {0UL,255UL,0UL};
                        (***l_167) = ((safe_mod_func_uint64_t_u_u(((safe_rshift_func_int8_t_s_u((safe_sub_func_uint64_t_u_u(((((safe_sub_func_int8_t_s_s(((safe_lshift_func_int8_t_s_s(((safe_lshift_func_int8_t_s_u((((l_568 , (**g_304)) != l_569) ^ p_34), 7)) <= (safe_add_func_int32_t_s_s((safe_sub_func_int16_t_s_s(0xA440L, l_568)), ((safe_add_func_int16_t_s_s((-3L), ((p_34 || (safe_add_func_uint8_t_u_u((safe_unary_minus_func_uint32_t_u(((safe_unary_minus_func_uint64_t_u(((((**g_304) != &p_35) , (void*)0) != (void*)0))) != 0x3844L))), (****l_212)))) == 0UL))) == p_36)))), l_568)) >= g_523.f2), p_38)) <= g_523.f2) || 0x5AL) == 0x70061209L), 0xDA5AEA254722D623LL)), 2)) | (***l_270)), 0x17D30F8C35CB5F3DLL)) || 0x19FEEA5D783F69C2LL);
                        (***l_270) = ((+((void*)0 != &p_35)) , ((safe_mod_func_int8_t_s_s(((safe_mul_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((l_568 > p_37), 1L)), (safe_add_func_uint64_t_u_u((p_37 && (*****g_303)), ((((safe_mod_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((0x7D5AL ^ ((safe_lshift_func_int16_t_s_s((((((0UL ^ g_265.f0) ^ g_42) ^ 0xB20C2C47D8770A7ELL) , 0x60L) == p_34), g_265.f6)) | p_38)), 0x2AL)), p_37)) <= (****g_304)) , (*p_35)) , p_37))))) , g_265.f3), p_34)) , (*g_41)));
                        (***l_167) = ((g_113 ^ (***l_167)) | l_544.f2);
                        (***g_156) = (((((****l_212) & ((safe_add_func_uint16_t_u_u(0x1CF2L, (((&l_167 == l_597) , (void*)0) == (void*)0))) & ((l_598 , (((safe_sub_func_int8_t_s_s(1L, (p_36 >= 0x84L))) < p_36) && (**g_157))) & (*p_35)))) ^ (*p_35)) < g_265.f4) | (***l_270));
                    }
                }
                else
                {
                    int32_t *l_609 = &l_545.f2;
                    (***g_304) = func_39(p_35);
                    (**l_167) = (**l_167);
                    (****l_597) = (safe_mod_func_int64_t_s_s((g_59 & (-3L)), (safe_mul_func_uint8_t_u_u((g_534 <= ((void*)0 != &p_35)), g_265.f2))));
                    for (g_265.f0 = 0; (g_265.f0 != (-30)); g_265.f0 = safe_sub_func_int32_t_s_s(g_265.f0, 1))
                    {
                        (*l_569) = func_39(l_609);
                        return p_34;
                    }
                }
                (***l_212) = p_35;
                for (l_179 = 3; (l_179 >= (-30)); l_179 = safe_sub_func_uint64_t_u_u(l_179, 4))
                {
                    p_35 = func_39((****l_349));
                    (***l_270) = (*****l_349);
                    (**l_167) = (**l_167);
                }
                (****l_349) = p_35;
            }
            for (p_37 = 0; (p_37 != 12); p_37 = safe_add_func_int8_t_s_s(p_37, 6))
            {
                (**g_304) = &p_35;
                (*g_157) = (void*)0;
                (**l_270) = (**g_156);
            }
            (*g_41) = ((safe_rshift_func_uint8_t_u_u(p_37, (safe_sub_func_int8_t_s_s((l_618 == (void*)0), ((p_34 || (((((safe_sub_func_uint64_t_u_u(((safe_rshift_func_uint16_t_u_s((safe_mul_func_int16_t_s_s(((void*)0 != l_625), (safe_unary_minus_func_int64_t_s((safe_add_func_int64_t_s_s(p_34, (safe_mod_func_uint32_t_u_u(g_534, (safe_rshift_func_int8_t_s_u(l_633, 2)))))))))), l_634)) ^ g_82.f2), 0x5F5EA2E80AA86F4DLL)) , g_265.f0) < g_265.f7) & 0x46E0L) >= (*l_625))) != p_37))))) <= 1L);
        }
    }
    for (p_34 = 0; (p_34 > 35); p_34 = safe_add_func_uint32_t_u_u(p_34, 1))
    {
        int8_t l_639 = 1L;
        int32_t *l_643 = &l_168.f2;
        if (((safe_rshift_func_int16_t_s_s((g_265.f6 != ((l_639 ^ (g_265.f7 > (g_42 || 0x29L))) , l_639)), ((safe_mod_func_int16_t_s_s(((l_639 , (*g_304)) != (void*)0), l_639)) > p_38))) , l_642))
        {
            (***l_212) = (*g_157);
        }
        else
        {
            const int32_t *l_654 = &l_642;
            const int32_t **l_653 = &l_654;
            const int32_t ** const *l_652 = &l_653;
            const int32_t ** const **l_651 = &l_652;
            (***g_304) = func_39(func_39(l_643));
            (*g_135) = (safe_mul_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((((((*g_41) , (0xA7L && ((safe_sub_func_int32_t_s_s((*g_41), ((((p_36 != (((+p_36) , l_651) != (*g_303))) && ((((((safe_lshift_func_int16_t_s_s(0xFD7FL, 1)) && p_38) >= (**l_653)) && l_657) > (*l_654)) > (*l_643))) <= (*l_643)) != (**l_653)))) >= 0xFF3EL))) && 1UL) >= p_34) <= 0x4D06L), 0xB00EL)), g_42));
            (****g_303) = (**g_156);
        }
        return l_658;
    }
    if (((safe_mul_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u((g_199 , ((safe_sub_func_int16_t_s_s(((safe_mod_func_uint32_t_u_u(((p_34 , (safe_rshift_func_uint16_t_u_s(g_42, 2))) & 0xA0D6L), (safe_add_func_int64_t_s_s((safe_rshift_func_int8_t_s_s(((safe_mul_func_int8_t_s_s((safe_mod_func_int16_t_s_s(0x0EE0L, (safe_rshift_func_int8_t_s_s(0x4EL, 0)))), (safe_sub_func_int16_t_s_s(((((void*)0 == (*g_303)) < ((safe_rshift_func_uint16_t_u_u((g_82.f1 , 7UL), 12)) <= 0x91L)) >= 0xCD7AL), g_82.f2)))) < p_37), 1)), 0xA1689FA06F48A93DLL)))) > p_34), 1L)) , 0xD2271E9C7087AEA0LL)), p_34)), g_265.f6)) != l_168.f7))
    {
        int16_t l_686 = 1L;
        struct S1 l_689 = {0xFCB804B9B0143853LL,0x52CA9F39L,0xBD997242L,0xD82E470AL,0UL,4L,0x6CL,0x0A29E69DL};
        int32_t * const l_690 = &g_42;
        int32_t ***l_695 = &g_157;
        uint8_t l_705 = 0x8BL;
        int32_t * const *l_719 = &g_135;
        int32_t * const **l_718 = &l_719;
        int32_t * const ***l_717 = &l_718;
        int32_t * const ****l_716 = &l_717;
        if ((p_38 & ((&p_35 != (*g_156)) , ((safe_rshift_func_int16_t_s_u((!((l_686 > g_523.f2) , ((safe_add_func_uint8_t_u_u(((p_34 != (p_38 == (((l_689 , l_690) == (void*)0) < g_265.f4))) <= 0x5DL), p_38)) != 0xC4L))), g_42)) <= p_38))))
        {
            int32_t *l_691 = &g_59;
            (***l_212) = (void*)0;
            (***g_304) = (**l_167);
            (***g_304) = l_691;
            (**g_156) = (***g_304);
        }
        else
        {
            int32_t ***l_694 = &g_157;
            struct S0 l_702 = {0x386F5ECCL,0x91L,0xA3L};
            if (((((safe_lshift_func_uint16_t_u_u((l_694 == ((((l_695 != (*l_212)) ^ (safe_add_func_uint8_t_u_u(g_534, (p_37 >= (g_113 < ((((safe_lshift_func_uint8_t_u_s((safe_add_func_uint64_t_u_u((l_702 , (p_36 < (((safe_lshift_func_int8_t_s_u(0xD6L, l_705)) <= 0x38105CBFDC910C9BLL) , g_265.f2))), l_706)), 1)) > 1L) >= p_38) != g_523.f0)))))) < g_523.f2) , l_694)), g_534)) , (*l_212)) == (void*)0) , p_37))
            {
                int32_t ****l_713 = &l_695;
                (***l_718) = ((safe_add_func_int8_t_s_s((((((*g_156) == (**g_304)) == (safe_lshift_func_uint16_t_u_u((0xC8E15FFDL < (((void*)0 == l_713) == g_82.f1)), 7))) , ((((((((p_37 || ((0xEE241F77L && ((safe_add_func_int16_t_s_s(((((void*)0 == l_716) <= 4L) | 0xD66CL), 0xA834L)) > p_38)) <= (-6L))) || g_265.f4) || g_265.f7) < p_36) > g_113) || p_38) != 0UL) , p_38)) , g_59), (**l_719))) < (****l_717));
                return p_37;
            }
            else
            {
                (**g_156) = p_35;
            }
        }
        (**g_156) = (**g_156);
        (**l_719) = (p_34 || (l_720 != (*g_303)));
    }
    else
    {
        int32_t *l_721 = &g_42;
        (***g_304) = l_721;
        (*g_156) = (**g_304);
    }
    return p_34;
}
inline static int32_t * func_39(int32_t * p_40)
{
    int32_t *l_43 = (void*)0;
    (*p_40) = (*g_41);
    (*g_41) = (p_40 == l_43);
    (*g_41) = 1L;
    return p_40;
}
static uint8_t func_44(int32_t p_45, uint8_t p_46, uint8_t p_47, const int32_t * p_48)
{
    int32_t **l_62 = (void*)0;
    int32_t *l_64 = (void*)0;
    int32_t **l_63 = &l_64;
    struct S0 l_71 = {0x251CA2AEL,9UL,0xAAL};
    const struct S1 l_146 = {0x3820F02422DCD2DCLL,4L,-1L,-4L,4294967291UL,-10L,-6L,1UL};
    int32_t ****l_158 = &g_156;
    (*l_63) = (void*)0;
    if ((*p_48))
    {
        p_45 = ((p_47 , g_11) <= (!g_11));
    }
    else
    {
        struct S0 l_72 = {4UL,0x25L,0x6DL};
        int32_t *l_79 = &g_59;
        int32_t ***l_153 = &l_62;
        int32_t * const l_154 = &g_59;
        (*l_79) = (safe_sub_func_int32_t_s_s((~(safe_rshift_func_int16_t_s_u((((l_71 , (((g_59 | (((((l_72 , (*p_48)) && (safe_mul_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u((((((((safe_rshift_func_uint16_t_u_u(l_72.f2, 0)) , &g_41) == &p_48) | (-5L)) || (*p_48)) , (*l_63)) == (void*)0), p_47)), 0x962DL))) , l_72) , g_59) , l_72.f0)) , 0x9BB0L) , (void*)0)) != (void*)0) >= l_72.f2), 12))), 0L));
        if ((*l_79))
        {
            return g_59;
        }
        else
        {
            uint32_t l_85 = 0UL;
            int32_t **l_155 = &g_135;
            if ((safe_mod_func_int64_t_s_s(((void*)0 != &g_59), (g_82 , (+((&p_45 == (void*)0) ^ (+(l_85 || 6L))))))))
            {
                uint8_t l_88 = 251UL;
                for (l_71.f2 = 0; (l_71.f2 <= 20); l_71.f2 = safe_add_func_int64_t_s_s(l_71.f2, 6))
                {
                    if (l_88)
                        break;
                    return p_45;
                }
                (*l_63) = &g_59;
            }
            else
            {
                uint8_t l_104 = 0xFCL;
                if ((safe_rshift_func_uint16_t_u_u((((safe_mod_func_int8_t_s_s((((safe_mul_func_uint16_t_u_u((((safe_add_func_uint16_t_u_u(((*l_79) < g_82.f0), 0x1AF8L)) < 0x685AC0FEL) ^ (((((((safe_mul_func_uint8_t_u_u(((~(safe_mul_func_int16_t_s_s((&g_41 == &g_41), (0UL == 2L)))) | ((safe_sub_func_uint64_t_u_u(0xD674323298C05957LL, 0x2B653F56D1B7A171LL)) < 0xE16DL)), 2UL)) , (*l_79)) >= 1UL) , l_104) & p_45) > p_45) >= 5L)), l_85)) , p_46) == 0x24A0L), 0x9AL)) >= g_82.f2) , g_82.f1), g_82.f0)))
                {
                    for (p_45 = 0; (p_45 <= (-1)); p_45 = safe_sub_func_uint64_t_u_u(p_45, 6))
                    {
                        (*l_79) = 0x947660C9L;
                        (*l_63) = l_79;
                        (*l_63) = &p_45;
                        if ((*p_48))
                            break;
                    }
                }
                else
                {
                    int32_t * const *l_108 = &l_64;
                    int32_t **l_134 = (void*)0;
                    int32_t * const **l_136 = (void*)0;
                    const int32_t *l_139 = &g_59;
                    const int32_t **l_138 = &l_139;
                    const int32_t ***l_137 = &l_138;
                    if ((p_46 ^ ((+l_104) || (((0x0F14L ^ g_11) , ((p_46 , (void*)0) == l_108)) || (((((*p_48) <= (g_82.f0 | (*p_48))) >= p_45) , (void*)0) == &g_41)))))
                    {
                        uint32_t l_124 = 0xC2CC2217L;
                        int32_t *l_125 = &g_59;
                        (*l_79) = (safe_mod_func_uint64_t_u_u(p_45, (safe_rshift_func_int16_t_s_s(p_47, (6L && (((g_113 , (((safe_mod_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((safe_add_func_int8_t_s_s(l_104, ((safe_lshift_func_uint16_t_u_s(l_85, ((l_79 != (void*)0) && g_82.f0))) || 0xB29726E95652091CLL))), p_46)), 14)) > g_82.f0), g_11)) , l_124) < 0xB3L)) <= g_11) & 1UL))))));
                        (*l_63) = l_125;
                    }
                    else
                    {
                        (*l_79) = ((((safe_rshift_func_int16_t_s_u(0x2EC2L, 2)) >= g_11) != ((0x4DFAC948D72D2710LL == (((safe_sub_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((p_46 | (safe_lshift_func_int16_t_s_u((l_108 == &g_41), ((void*)0 != &p_45)))), 4294967287UL)), 0xBCL)) || g_113) != g_59)) <= g_82.f2)) ^ 0xE3L);
                    }
                    g_135 = (*l_108);
                    (*l_137) = (void*)0;
                    (*l_79) = (((*l_79) , (g_59 < ((safe_lshift_func_uint16_t_u_u((0x2F3CL && ((((safe_mul_func_int16_t_s_s((((((l_85 && (-1L)) && (safe_mul_func_uint16_t_u_u((g_82 , g_82.f0), p_47))) <= p_47) < p_47) >= g_59), g_82.f2)) && g_113) > p_47) <= 0xC91578ADDDDEF21ELL)), g_82.f1)) >= p_47))) <= 0x3D13L);
                }
            }
            (*l_79) = (l_146 , ((safe_unary_minus_func_uint16_t_u((safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(0xD3L, (l_85 != g_82.f2))), 7)))) > (!((l_153 == &l_62) | (0xE6F6L > g_11)))));
            (*l_155) = l_154;
        }
        return g_59;
    }
    (*l_158) = g_156;
    return g_82.f0;
}
inline static uint8_t func_49(uint32_t p_50)
{
    int32_t *l_60 = &g_59;
    int32_t **l_61 = &l_60;
    (*l_61) = l_60;
    (*l_61) = (*l_61);
    return g_59;
}
inline static uint32_t func_51(struct S0 p_52, int8_t p_53)
{
    const int32_t *l_58 = &g_59;
    const int32_t **l_57 = &l_58;
    l_57 = l_57;
    return (**l_57);
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    g_41 = 0;
    g_157 = 0;
    g_304 = 0;
    g_731 = 0;
    csmith_sink_ = g_11;
    csmith_sink_ = g_42;
    csmith_sink_ = g_59;
    csmith_sink_ = g_82.f0;
    csmith_sink_ = g_82.f1;
    csmith_sink_ = g_82.f2;
    csmith_sink_ = g_113;
    csmith_sink_ = g_199;
    csmith_sink_ = g_265.f0;
    csmith_sink_ = g_265.f1;
    csmith_sink_ = g_265.f2;
    csmith_sink_ = g_265.f3;
    csmith_sink_ = g_265.f4;
    csmith_sink_ = g_265.f5;
    csmith_sink_ = g_265.f6;
    csmith_sink_ = g_265.f7;
    csmith_sink_ = g_523.f0;
    csmith_sink_ = g_523.f1;
    csmith_sink_ = g_523.f2;
    csmith_sink_ = g_534;
    csmith_sink_ = g_775;
    platform_main_end(0,0);
    return 0;
}
