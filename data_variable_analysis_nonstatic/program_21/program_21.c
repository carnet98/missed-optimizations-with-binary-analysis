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
static uint16_t g_8 = 1UL;
static uint8_t g_89 = 255UL;
static int16_t g_92 = 0x7AF0L;
static uint32_t g_143 = 4294967291UL;
static uint8_t g_235 = 246UL;
static uint64_t g_266[4] = {1UL,1UL,1UL,1UL};
static int32_t g_391 = 0L;
static int8_t g_509 = (-2L);
static uint16_t func_1(void);
static uint8_t func_2(uint32_t p_3, int16_t p_4, uint32_t p_5, const int64_t p_6, uint8_t p_7);
static int64_t func_10(int8_t p_11, uint32_t p_12, int32_t p_13);
static int8_t func_14(uint16_t p_15, int32_t p_16, int32_t p_17, const int32_t p_18, int8_t p_19);
static int16_t func_20(uint16_t p_21, uint16_t p_22, int8_t p_23, uint16_t p_24, int32_t p_25);
static uint16_t func_26(int64_t p_27, uint8_t p_28);
static uint32_t func_29(int8_t p_30, uint16_t p_31);
static int8_t func_33(uint8_t p_34, uint64_t p_35, uint64_t p_36);
static int32_t func_37(int32_t p_38);
static const int16_t func_47(uint32_t p_48, uint64_t p_49, uint8_t p_50, int8_t p_51, int32_t p_52);
static uint16_t func_1(void)
{
    uint32_t l_9 = 18446744073709551609UL;
    int16_t l_638[8] = {(-2L),(-2L),0x4436L,(-2L),(-2L),0x4436L,(-2L),(-2L)};
    int32_t l_647 = 0xD4F35AACL;
    int i;
    l_647 = ((6UL != (((func_2(g_8, g_8, (l_9 <= func_10(func_14((func_20(l_9, ((0L | 0xC9L) > l_9), (func_26(((func_29(l_9, g_8) < l_9) || g_509), l_9) && 0x8862L), l_9, l_9) | 0xD2B8L), l_9, g_509, l_9, g_509), l_9, g_509)), g_8, l_638[7]) >= 0x87L) >= 1UL) | l_638[7])) > l_638[7]);
    return g_266[3];
}
static uint8_t func_2(uint32_t p_3, int16_t p_4, uint32_t p_5, const int64_t p_6, uint8_t p_7)
{
    int16_t l_639 = 0xC150L;
    int32_t l_646 = 0xCF4F49C8L;
    l_646 = (((l_639 < ((safe_sub_func_int16_t_s_s(g_509, ((((safe_rshift_func_int8_t_s_s(0x4BL, g_509)) && l_639) == l_639) > (l_639 != (safe_mul_func_uint16_t_u_u(g_8, ((p_7 < l_639) || 0xDCCEL))))))) || g_391)) | 0x66DC8196L) <= 65535UL);
    return l_646;
}
static int64_t func_10(int8_t p_11, uint32_t p_12, int32_t p_13)
{
    uint16_t l_637 = 0xEE20L;
    l_637 = 0L;
    return p_13;
}
static int8_t func_14(uint16_t p_15, int32_t p_16, int32_t p_17, const int32_t p_18, int8_t p_19)
{
    int64_t l_636 = 0x31D2784A4188C375LL;
    return l_636;
}
static int16_t func_20(uint16_t p_21, uint16_t p_22, int8_t p_23, uint16_t p_24, int32_t p_25)
{
    uint16_t l_551 = 3UL;
    const int16_t l_569 = 0x9ADDL;
    int32_t l_570 = 6L;
    uint32_t l_584 = 18446744073709551608UL;
    l_570 = (safe_lshift_func_uint8_t_u_s((((safe_mul_func_int16_t_s_s((l_551 && l_551), (+6L))) && (g_509 < (safe_mul_func_uint16_t_u_u(((safe_add_func_int64_t_s_s(((safe_mul_func_uint8_t_u_u((l_551 != l_551), (safe_mod_func_uint16_t_u_u((safe_add_func_int8_t_s_s((-8L), (((safe_sub_func_uint16_t_u_u(l_551, (safe_rshift_func_int16_t_s_u(((safe_lshift_func_int8_t_s_u(p_23, 7)) < g_143), 4)))) == p_22) || l_551))), 65528UL)))) && (-5L)), p_23)) || l_551), l_569)))) < p_23), 5));
    if ((~(((safe_mul_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_s((((0xF4L != (safe_rshift_func_uint16_t_u_s(65526UL, 2))) ^ ((safe_mul_func_uint16_t_u_u((((g_89 || (safe_mul_func_int8_t_s_s((safe_sub_func_int8_t_s_s(0L, (7L | (p_24 && g_235)))), ((((((l_584 >= (safe_mod_func_int64_t_s_s((((((safe_rshift_func_int16_t_s_u((safe_unary_minus_func_uint64_t_u((safe_add_func_int16_t_s_s((g_235 && l_569), 1UL)))), p_21)) >= l_584) >= p_21) & p_24) != 0x62L), p_23))) > p_21) || p_21) > g_235) ^ p_23) || (-1L))))) ^ 4294967286UL) >= p_21), l_551)) & l_570)) ^ p_24), g_266[3])) != l_570), p_24)) && l_584) && l_551)))
    {
        l_570 = (-8L);
        for (g_391 = 0; (g_391 != 9); g_391 = safe_add_func_uint32_t_u_u(g_391, 3))
        {
            uint16_t l_596 = 0x4FD4L;
            if (l_584)
                break;
            p_25 = ((safe_lshift_func_int16_t_s_u(l_596, ((safe_sub_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((~(((!p_25) && (safe_rshift_func_uint8_t_u_u(255UL, ((safe_rshift_func_uint8_t_u_s((+0x844047B9L), (safe_lshift_func_uint16_t_u_u(0UL, (g_391 || 0x5AL))))) <= g_92)))) >= ((safe_sub_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(((((g_92 ^ p_22) <= l_569) && 0xFF025628F38741EELL) || 1L), p_21)), g_391)) ^ l_596))), g_92)), g_391)) ^ p_24))) >= p_23);
            p_25 = (safe_rshift_func_uint16_t_u_u((p_21 & (safe_sub_func_int32_t_s_s((safe_sub_func_uint8_t_u_u(l_596, (8UL < p_23))), 0x1359E93BL))), 12));
        }
    }
    else
    {
        uint64_t l_620 = 0UL;
        l_620 = 5L;
    }
    l_570 = ((((safe_mod_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u((safe_add_func_int8_t_s_s((((((l_569 || (l_569 == (safe_rshift_func_uint16_t_u_s(p_23, ((safe_sub_func_uint64_t_u_u(l_570, ((l_584 == (safe_add_func_uint8_t_u_u((!((safe_add_func_uint8_t_u_u((l_570 | g_92), ((0x5E59L ^ (((p_21 <= 3UL) ^ l_569) & 0x539D9E66D17459A9LL)) ^ l_584))) < g_8)), 255UL))) < (-1L)))) != g_266[1]))))) == p_23) <= (-4L)) | l_570) || 8L), p_25)), p_21)) & 1UL), g_266[1])) < 4294967295UL) & 0x63C681DBL) > g_235);
    return g_89;
}
static uint16_t func_26(int64_t p_27, uint8_t p_28)
{
    int8_t l_543 = 0xD3L;
    int32_t l_545 = 0xD7324796L;
    uint8_t l_546 = 247UL;
    for (g_235 = 8; (g_235 <= 10); g_235 = safe_add_func_uint8_t_u_u(g_235, 8))
    {
        int16_t l_525 = (-1L);
        uint32_t l_542[4][5][8] = {{{0x9F32C234L,0x15189674L,0UL,0xDD7D93E5L,0x15189674L,0xDD7D93E5L,0UL,0x15189674L},{18446744073709551612UL,0UL,0x9F32C234L,18446744073709551612UL,0xDD7D93E5L,0xDD7D93E5L,18446744073709551612UL,0x9F32C234L},{0x15189674L,0x15189674L,0UL,0x7427DB5CL,18446744073709551612UL,0UL,18446744073709551612UL,0x7427DB5CL},{0x9F32C234L,0x7427DB5CL,0x9F32C234L,0xDD7D93E5L,0x7427DB5CL,0UL,0UL,0x7427DB5CL},{0x7427DB5CL,0UL,0UL,0UL,0UL,0xEEBAF709L,0UL,0xEEBAF709L}},{{0UL,0xDD7D93E5L,0x15189674L,0xDD7D93E5L,0UL,0x15189674L,0x9F32C234L,0x9F32C234L},{0xEEBAF709L,0xDD7D93E5L,0UL,0UL,0xDD7D93E5L,0xEEBAF709L,0UL,0xDD7D93E5L},{0x9F32C234L,0UL,0UL,0x9F32C234L,0UL,0UL,0x9F32C234L,0xEEBAF709L},{0xDD7D93E5L,0UL,0x15189674L,0x9F32C234L,0x9F32C234L,0x15189674L,0UL,0xDD7D93E5L},{0xEEBAF709L,0x9F32C234L,0UL,0UL,0x9F32C234L,0UL,0UL,0x9F32C234L}},{{0xDD7D93E5L,0UL,0xEEBAF709L,0xDD7D93E5L,0UL,0UL,0xDD7D93E5L,0xEEBAF709L},{0x9F32C234L,0x9F32C234L,0x15189674L,0UL,0xDD7D93E5L,0x15189674L,0xDD7D93E5L,0UL},{0xEEBAF709L,0UL,0xEEBAF709L,0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0xEEBAF709L,0UL,0xEEBAF709L},{0UL,0xDD7D93E5L,0x15189674L,0xDD7D93E5L,0UL,0x15189674L,0x9F32C234L,0x9F32C234L}},{{0xEEBAF709L,0xDD7D93E5L,0UL,0UL,0xDD7D93E5L,0xEEBAF709L,0UL,0xDD7D93E5L},{0x9F32C234L,0UL,0UL,0x9F32C234L,0UL,0UL,0x9F32C234L,0xEEBAF709L},{0xDD7D93E5L,0UL,0x15189674L,0x9F32C234L,0x9F32C234L,0x15189674L,0UL,0xDD7D93E5L},{0xEEBAF709L,0x9F32C234L,0UL,0UL,0x9F32C234L,0UL,0UL,0x9F32C234L},{0xDD7D93E5L,0UL,0xEEBAF709L,0xDD7D93E5L,0UL,0UL,0xDD7D93E5L,0xEEBAF709L}}};
        int i, j, k;
        for (g_92 = 0; (g_92 < 6); g_92 = safe_add_func_int16_t_s_s(g_92, 9))
        {
            int8_t l_536 = 0xFCL;
            int32_t l_544 = 0x536657B7L;
            l_543 = ((((((((((g_509 | (safe_mod_func_int32_t_s_s(g_509, g_266[0]))) || (((((safe_mod_func_int32_t_s_s((((safe_mod_func_int64_t_s_s((safe_sub_func_uint8_t_u_u((!l_525), ((safe_sub_func_int64_t_s_s((safe_sub_func_int8_t_s_s((safe_mod_func_int16_t_s_s((safe_sub_func_int8_t_s_s(0L, (((safe_mod_func_uint64_t_u_u(g_235, l_536)) != (safe_rshift_func_int8_t_s_s(((safe_lshift_func_int16_t_s_s((!g_266[0]), 3)) || 1L), 5))) & g_266[1]))), 5UL)), p_27)), 2UL)) & 0L))), l_542[2][0][3])) && l_536) == l_525), g_509)) & l_542[2][0][3]) <= 0x0D12L) & g_266[0]) >= p_28)) && g_391) > (-1L)) ^ 7UL) || 0x163221E9L) < 0L) >= l_525) < 0x99L) ^ 252UL);
            l_544 = l_536;
        }
        l_545 = l_543;
    }
    return l_546;
}
static uint32_t func_29(int8_t p_30, uint16_t p_31)
{
    int32_t l_142 = 0xA51DBEEEL;
    const int8_t l_446 = 0xE6L;
    uint8_t l_505 = 0x1DL;
    if ((1UL != p_30))
    {
        int8_t l_32[4];
        int32_t l_124 = 0x776C5754L;
        int i;
        for (i = 0; i < 4; i++)
            l_32[i] = 1L;
        l_124 = (((l_32[3] > (((func_33(((func_37(g_8) < (safe_mul_func_int8_t_s_s((-10L), 1L))) == (((safe_add_func_int64_t_s_s(((0xDEE1L < (g_8 != 0x8CL)) & (safe_mod_func_uint16_t_u_u((0x19E2F9DBC3306324LL != g_8), 0xB9DAL))), g_8)) ^ p_31) != g_8)), p_31, l_32[3]) < g_8) >= l_32[3]) || p_31)) & 0x68E4F1A1E6DEAED5LL) != g_8);
    }
    else
    {
        int16_t l_131 = 3L;
        int32_t l_159 = 0xFE75BA72L;
        g_143 = (((safe_mul_func_int8_t_s_s((18446744073709551615UL == (((safe_add_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u(((l_131 & (safe_mul_func_int8_t_s_s(l_131, l_131))) | (safe_sub_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_u((safe_sub_func_int64_t_s_s((p_31 == (65529UL <= (l_142 == l_131))), 0x885E37C3E796DA17LL)), l_142)) < g_89), p_30))), l_131)), g_8)) & l_142) >= g_8)), 0x6FL)) && p_30) >= 0x5BL);
        l_159 = (~(safe_lshift_func_int16_t_s_s(((((((p_31 != (l_131 == (safe_add_func_int16_t_s_s((g_143 ^ g_92), ((safe_mul_func_int16_t_s_s(((((safe_lshift_func_uint16_t_u_s((safe_add_func_int32_t_s_s((-1L), p_30)), 0)) <= (6UL > ((safe_rshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u((p_31 | (0x0335754DL & (-4L))), 2)), p_31)) == g_143))) && 0x6065F2B7L) < l_142), l_131)) | l_131))))) > l_131) != 0x4986CBD83D76CE61LL) && p_31) & g_143) != 2UL), p_31)));
    }
    if (((safe_sub_func_uint64_t_u_u((((safe_mul_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(((l_142 == (255UL & (safe_add_func_int32_t_s_s(((safe_rshift_func_uint8_t_u_s(((p_30 ^ g_89) != ((l_142 == ((safe_mul_func_int8_t_s_s((safe_add_func_uint64_t_u_u(((((-4L) != (safe_rshift_func_uint8_t_u_u(((safe_mod_func_int32_t_s_s(g_92, (safe_sub_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s(((-6L) & (safe_mod_func_int16_t_s_s((safe_sub_func_int64_t_s_s((g_89 > (-8L)), 2L)), g_8))), 5)), 0xE1111236L)))) == l_142), l_142))) ^ 0L) > l_142), g_143)), p_30)) != 1UL)) == g_8)), 3)) <= (-1L)), l_142)))) >= l_142), p_31)), 0xA5L)) | 2L) & 65527UL), 18446744073709551615UL)) == 1UL))
    {
        int32_t l_197 = 0x0FB40517L;
        uint16_t l_214[2][10] = {{0x92A4L,0x92A4L,0x92A4L,0x92A4L,0x92A4L,0x92A4L,0x92A4L,0x92A4L,0x92A4L,0x92A4L},{0x92A4L,0x92A4L,0x92A4L,0x92A4L,0x92A4L,0x92A4L,0x92A4L,0x92A4L,0x92A4L,0x92A4L}};
        int16_t l_215 = 1L;
        int16_t l_228 = 2L;
        int i, j;
        l_142 = (safe_unary_minus_func_uint32_t_u((safe_lshift_func_uint16_t_u_s((safe_mod_func_uint64_t_u_u((safe_lshift_func_int8_t_s_u(g_89, ((safe_add_func_uint16_t_u_u(l_197, ((safe_rshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_s(l_197, ((p_30 < ((l_142 <= g_8) && (safe_add_func_uint64_t_u_u(((((p_30 | ((((safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(1UL, (safe_rshift_func_int16_t_s_u((((((((safe_mul_func_uint16_t_u_u((65531UL | l_197), g_89)) ^ l_142) | 9L) && p_31) || l_214[0][7]) < g_89) || l_214[1][8]), p_30)))), l_197)) | 0xE8A0DB83A45DBAEALL) && l_215) & l_142)) > l_142) == l_142) <= 8UL), g_92)))) <= g_8))), p_30)), l_142)) >= l_142))) | p_31))), l_142)), p_31))));
        l_142 = (p_30 ^ (((safe_sub_func_uint64_t_u_u(g_8, p_31)) > (((safe_lshift_func_int8_t_s_s(((safe_lshift_func_int16_t_s_s((((safe_rshift_func_int16_t_s_s(p_31, 8)) <= (safe_mod_func_int64_t_s_s((p_31 < (((safe_lshift_func_uint8_t_u_u(p_31, g_143)) >= (((l_228 < (safe_lshift_func_uint16_t_u_u(((safe_sub_func_int32_t_s_s(0x40A6EEA4L, p_31)) > g_143), p_31))) || g_143) >= g_92)) != g_92)), 0x3112E05E15677DB3LL))) != p_30), l_142)) == 0xD87FAE0A69A7D356LL), g_92)) ^ l_214[0][7]) | 4294967294UL)) == p_31));
        g_235 = (0x8D462313L < ((p_30 | l_142) | (g_143 != (safe_mul_func_uint8_t_u_u(p_31, g_143)))));
    }
    else
    {
        const int16_t l_251 = (-5L);
        int32_t l_295 = 0xE0A59551L;
        int8_t l_333 = 2L;
        const uint64_t l_389 = 0xEC2600E6A5700196LL;
        g_266[3] = (~(safe_rshift_func_int8_t_s_u(((safe_mod_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u(0UL, ((safe_sub_func_uint16_t_u_u((((safe_rshift_func_int8_t_s_u((((safe_sub_func_int64_t_s_s((safe_rshift_func_uint8_t_u_s((((255UL != l_251) || (((l_142 | (((safe_rshift_func_int8_t_s_s(0L, ((safe_add_func_int16_t_s_s((-1L), (safe_add_func_uint32_t_u_u((safe_rshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u((((g_92 | (safe_lshift_func_int8_t_s_s(((safe_sub_func_uint64_t_u_u(l_142, l_142)) | 0x4A69D0D33459E8EBLL), 1))) != g_8) >= 0x43E87FF4ED39A44DLL), 6)), g_89)), l_251)))) && g_8))) || 0x243ED317036850D5LL) | p_31)) >= l_142) || g_89)) >= l_251), p_30)), (-3L))) >= g_143) < g_143), 0)) > l_142) != g_8), p_30)) >= 0x15L))), 1L)) >= p_31), 5)));
        l_295 = (safe_sub_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((l_142 ^ (safe_mod_func_uint16_t_u_u(((((safe_mod_func_uint8_t_u_u(0xA2L, ((safe_sub_func_uint64_t_u_u(p_30, (4L & (safe_mul_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s(((g_8 >= l_142) < l_142), (safe_rshift_func_int8_t_s_u((safe_rshift_func_int16_t_s_s(p_31, (((safe_mul_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_u(((safe_lshift_func_uint16_t_u_s(((safe_lshift_func_int16_t_s_s((p_30 < l_142), l_142)) || 0x1215L), g_266[3])) != l_142), 4)) >= l_251), p_30)), g_89)) & l_251) <= p_31))), 3)))), l_142))))) & p_30))) >= p_30) || 255UL) > l_251), g_266[3]))), l_142)), 0UL));
        for (g_235 = 19; (g_235 != 51); g_235 = safe_add_func_int8_t_s_s(g_235, 2))
        {
            int16_t l_321 = 9L;
            int16_t l_364[9][2] = {{0x544DL,(-2L)},{(-2L),(-8L)},{5L,(-8L)},{0x544DL,5L},{(-8L),(-8L)},{(-8L),5L},{0x544DL,(-8L)},{5L,(-8L)},{(-2L),(-2L)}};
            int32_t l_390 = 0x8411FD18L;
            int i, j;
            l_295 = ((safe_add_func_uint32_t_u_u((l_295 || ((safe_mod_func_uint64_t_u_u(l_251, (safe_rshift_func_uint8_t_u_s((1L ^ ((safe_mod_func_uint16_t_u_u(((safe_mod_func_int64_t_s_s((1UL | (((safe_add_func_uint32_t_u_u((safe_add_func_uint64_t_u_u((g_143 ^ (((g_266[3] ^ l_295) > (safe_mod_func_int32_t_s_s(((((safe_mul_func_uint16_t_u_u(l_142, (~(((safe_rshift_func_int16_t_s_u(g_8, l_295)) | g_266[3]) ^ (-3L))))) != p_30) < g_266[3]) ^ l_295), l_321))) ^ 0x9273L)), p_31)), p_30)) < 4UL) || (-1L))), l_295)) & 0x9524L), 0x699CL)) < l_295)), p_30)))) != p_31)), 1UL)) && 0xD0L);
            for (l_321 = 3; (l_321 >= 0); l_321 -= 1)
            {
                int i;
                l_142 = ((safe_sub_func_int16_t_s_s(((safe_unary_minus_func_uint64_t_u((g_266[l_321] > (safe_mod_func_int64_t_s_s((safe_mod_func_int16_t_s_s(((g_8 <= ((g_266[2] | (l_295 == (safe_sub_func_uint16_t_u_u(l_142, 0x4839L)))) && 0xCC73L)) >= (((safe_rshift_func_int16_t_s_s(0x5FD4L, (((g_92 | p_31) == 0x68L) == g_8))) >= 0x553DL) > 1L)), p_31)), 0x153CC6216E46704DLL))))) | l_333), g_89)) == g_143);
                l_295 = ((p_30 >= ((p_30 ^ (safe_lshift_func_int16_t_s_u(g_266[3], 10))) == (~0x94D6678A5AF4F0EBLL))) || (safe_mod_func_int64_t_s_s((safe_mul_func_uint8_t_u_u(l_142, (p_30 | ((!((((p_31 > (safe_mod_func_int32_t_s_s(0xAFABD6D1L, ((l_333 && l_142) | g_266[l_321])))) || 0x92349764L) != 0x252AL) <= p_31)) > 18446744073709551609UL)))), g_266[l_321])));
                for (p_31 = 0; (p_31 <= 3); p_31 += 1)
                {
                    uint8_t l_357 = 0UL;
                    l_357 = (((safe_lshift_func_int16_t_s_u(l_321, l_321)) && 9L) ^ ((p_31 >= (safe_sub_func_uint32_t_u_u(((((safe_mod_func_uint32_t_u_u((~(safe_sub_func_uint8_t_u_u((~(18446744073709551611UL == (safe_unary_minus_func_int8_t_s((((0x9DBDL > ((3UL ^ g_266[l_321]) && (safe_add_func_uint64_t_u_u((((l_142 || g_89) != p_31) < g_92), 0x3F1462849A9B351DLL)))) ^ 0L) && g_266[l_321]))))), p_31))), g_235)) > 0x2CL) >= l_333) && 3UL), 1UL))) & l_333));
                }
            }
            for (g_143 = 0; (g_143 != 14); g_143 = safe_add_func_int8_t_s_s(g_143, 7))
            {
                uint32_t l_386[10][3] = {{0xC71321D4L,18446744073709551615UL,0xD1B2EE99L},{0x35DBA269L,18446744073709551615UL,0x35DBA269L},{0x598EF82AL,1UL,0xD1B2EE99L},{0x598EF82AL,0xE9391A50L,0xC71321D4L},{0x35DBA269L,1UL,0xC71321D4L},{0xC71321D4L,18446744073709551615UL,0xD1B2EE99L},{0x35DBA269L,18446744073709551615UL,0x35DBA269L},{0x598EF82AL,1UL,0xD1B2EE99L},{0x598EF82AL,0xE9391A50L,0xC71321D4L},{0x31C0F092L,0x35DBA269L,0xC12D3B93L}};
                uint32_t l_424 = 0x4E3BD7D6L;
                int i, j;
                for (p_30 = 0; (p_30 > 6); p_30 = safe_add_func_uint32_t_u_u(p_30, 2))
                {
                    uint16_t l_383 = 0x9D35L;
                    int32_t l_405 = (-1L);
                    for (g_92 = 0; (g_92 <= (-19)); g_92--)
                    {
                        l_364[7][0] = 0L;
                        if (p_31)
                            break;
                    }
                    if (p_30)
                    {
                        l_390 = ((safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u(((((safe_mod_func_int32_t_s_s((((safe_lshift_func_uint8_t_u_s(((safe_sub_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((safe_add_func_uint64_t_u_u(0x21220F7FBA5C353FLL, 0xBA7A7D87469C53B7LL)), 8)), l_383)) ^ g_235), ((safe_rshift_func_int8_t_s_u((-1L), 2)) | (l_142 || (((l_386[2][0] || (safe_rshift_func_int16_t_s_s((l_142 | l_389), 8))) != p_31) || g_8))))) != l_383) == p_30), p_30)) > l_142) > 0x0AL) | p_31), l_321)), p_30)), 10)), g_92)) & p_30);
                        g_391 = (-1L);
                        l_405 = (safe_lshift_func_int16_t_s_u((((0x79DAD9700F0D2922LL != 0UL) && (0x7FCE753BC47F2C3CLL <= (safe_sub_func_uint32_t_u_u(4294967293UL, g_89)))) >= (safe_mul_func_int16_t_s_s((safe_add_func_int16_t_s_s((+(0x8EE52D076111D3FELL > (safe_add_func_int16_t_s_s(g_266[1], 0x5E65L)))), (g_89 | g_92))), 0xEAF7L))), p_30));
                    }
                    else
                    {
                        g_391 = g_92;
                    }
                    g_391 = (((safe_unary_minus_func_int8_t_s((((safe_mod_func_int64_t_s_s(((((safe_rshift_func_int8_t_s_s((((safe_mod_func_int32_t_s_s(((((0xDA49FBC8L ^ ((l_142 & (((safe_rshift_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(((!((safe_sub_func_uint8_t_u_u(9UL, (((safe_rshift_func_int16_t_s_s(g_266[3], 15)) ^ ((0x06231FCB92070D6DLL || (safe_sub_func_uint8_t_u_u((0x57676AEAL > p_30), (p_30 <= p_31)))) && 0x789D02CC804988C3LL)) > l_386[6][0]))) & l_142)) | l_386[2][0]), g_266[2])), 3)) < 0x4652L) <= g_235)) | l_386[8][2])) & g_89) >= l_424) <= 1L), l_142)) != 65535UL) ^ g_89), l_364[7][0])) < g_143) == 3L) > p_30), l_364[5][0])) & g_8) == l_405))) != p_31) ^ p_30);
                }
            }
        }
    }
    l_142 = (((((+(((((safe_sub_func_uint64_t_u_u(g_92, ((safe_lshift_func_uint8_t_u_u((((-1L) | (safe_mul_func_int8_t_s_s((((((((~((0x55DAE04848015E7CLL == (l_142 == (((((-8L) ^ (g_266[3] >= (-1L))) ^ ((safe_add_func_int64_t_s_s((safe_mod_func_int64_t_s_s((safe_mod_func_int16_t_s_s((safe_sub_func_int32_t_s_s(l_142, ((safe_mod_func_int64_t_s_s((safe_mul_func_int16_t_s_s(((~l_142) && p_31), l_142)), p_30)) == g_89))), 0xFC08L)), l_142)), l_142)) != 0x758B9927L)) < (-1L)) ^ g_266[0]))) | 254UL)) | p_31) & l_142) == 0x6875FBCAL) & 0UL) == l_142) | p_31), g_235))) & 0x07905F4BL), 0)) < l_142))) != g_266[0]) > l_142) | l_142) < l_446)) && l_446) < l_142) & 0xF9L) != (-2L));
    for (p_30 = (-30); (p_30 < (-17)); p_30 = safe_add_func_uint16_t_u_u(p_30, 8))
    {
        uint32_t l_451 = 18446744073709551610UL;
        int32_t l_506 = 0L;
        g_391 = (safe_rshift_func_int8_t_s_s(((g_391 < 0UL) != (1UL >= p_30)), (p_31 >= 0x999DE05E4159E7B8LL)));
        for (l_142 = 3; (l_142 >= 0); l_142 -= 1)
        {
            int i;
            l_451 = (g_266[l_142] < (g_92 | g_266[2]));
            for (l_451 = 0; (l_451 <= 36); l_451 = safe_add_func_int64_t_s_s(l_451, 1))
            {
                int64_t l_504[4] = {0xB4B0FBFB27927304LL,0xB4B0FBFB27927304LL,0xB4B0FBFB27927304LL,0xB4B0FBFB27927304LL};
                int i;
                g_391 = (p_31 == (safe_mul_func_uint8_t_u_u(0UL, (safe_sub_func_uint16_t_u_u(((l_142 <= ((l_451 == (((safe_mul_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u(((safe_lshift_func_uint16_t_u_s(p_30, 7)) & (safe_rshift_func_int8_t_s_s(0x17L, 3))), 7)), (g_266[3] <= (-9L)))) > 0x318096DAL) >= 0xE2F93242L)) || g_8)) ^ g_235), p_31)))));
                l_506 = (~(safe_add_func_int32_t_s_s((((safe_sub_func_uint16_t_u_u(((safe_sub_func_uint16_t_u_u(((((safe_mod_func_uint64_t_u_u(((safe_rshift_func_uint8_t_u_s(((((((((safe_rshift_func_int8_t_s_s((((!((safe_lshift_func_int8_t_s_s((65535UL != ((safe_sub_func_int64_t_s_s(g_89, (g_266[l_142] > ((safe_lshift_func_uint16_t_u_s(((((((((safe_rshift_func_uint16_t_u_s((safe_sub_func_uint8_t_u_u(((((((safe_add_func_int32_t_s_s((-1L), ((safe_sub_func_uint32_t_u_u((safe_mul_func_int8_t_s_s(g_143, (((l_142 && ((safe_lshift_func_int8_t_s_u((safe_sub_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((p_31 & p_31), 0x7DE32D58L)), p_30)), 0)) | (-1L))) == g_89) | 65534UL))), p_30)) && 0xC6L))) <= 1L) < p_31) & g_89) && 0xAD3BD019D29158F6LL) > g_266[3]), 7UL)), p_31)) & (-1L)) & p_30) >= l_504[3]) && p_31) | g_8) | l_505) > g_266[3]), 2)) < l_504[3])))) || g_92)), 2)) <= 0xA78029EAL)) < p_31) >= 0xD85DBEB43ED56C7ALL), 7)) & l_504[1]) ^ (-5L)) >= p_31) <= p_31) ^ g_8) <= 0x9BA9D7E2L) >= 0x6DL), 0)) ^ 0x252700F4L), g_8)) == 0x0F302B24L) != 9L) || 0L), g_266[l_142])) != p_31), g_8)) | p_31) < 0x5DL), l_451)));
            }
        }
        for (l_451 = (-24); (l_451 < 37); ++l_451)
        {
            if (l_505)
                break;
            g_391 = 0x693ED229L;
        }
    }
    return g_235;
}
static int8_t func_33(uint8_t p_34, uint64_t p_35, uint64_t p_36)
{
    int64_t l_113 = 1L;
    int32_t l_123 = 0L;
    l_123 = ((safe_sub_func_int64_t_s_s(g_8, (safe_rshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_s((safe_mul_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(((p_35 | g_89) && (safe_rshift_func_uint16_t_u_u((l_113 || g_89), 7))), 3)), 13)), (safe_mod_func_int16_t_s_s(g_89, (safe_rshift_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_s(((!(((safe_sub_func_uint32_t_u_u(((l_113 ^ g_8) <= ((0UL & l_113) != 0xB5L)), 0x325A1CDAL)) >= p_35) <= (-3L))) >= (-7L)), g_92)) && p_35), 0)))))), 5)), g_89)))) & p_36);
    return g_8;
}
static int32_t func_37(int32_t p_38)
{
    int32_t l_39[10] = {0xEF9F3B06L,0xEF9F3B06L,0xEF9F3B06L,0xEF9F3B06L,0xEF9F3B06L,0xEF9F3B06L,0xEF9F3B06L,0xEF9F3B06L,0xEF9F3B06L,0xEF9F3B06L};
    int8_t l_61[8][8] = {{(-4L),(-3L),(-10L),(-4L),0xA3L,0xA3L,(-4L),(-10L)},{0x91L,0x91L,0L,0x46L,(-4L),0L,(-4L),0x46L},{(-10L),0x46L,(-10L),0xA3L,0x46L,(-3L),(-3L),0x46L},{0x46L,(-3L),(-3L),0x46L,0xA3L,(-10L),0x46L,(-10L)},{0x46L,(-4L),0L,(-4L),0x46L,0L,0x91L,0x91L},{(-10L),(-4L),0xA3L,0xA3L,(-4L),(-10L),(-3L),(-4L)},{0x91L,(-3L),0xA3L,0x91L,0xA3L,(-3L),0x91L,(-10L)},{(-4L),0x46L,0L,0x91L,0x91L,0L,0x46L,(-4L)}};
    int i, j;
    g_89 = (l_39[0] && (safe_add_func_int16_t_s_s((l_39[0] || (safe_sub_func_uint64_t_u_u((~(safe_add_func_int16_t_s_s(func_47(l_39[0], g_8, (((p_38 & ((safe_sub_func_uint16_t_u_u((p_38 | l_39[0]), ((safe_lshift_func_int8_t_s_u((((((0x84L || (safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(0UL, 7)), 5))) >= l_61[3][2]) < p_38) && 0x6BA8A7E8L) > 65527UL), l_39[0])) | g_8))) & 1L)) != 1UL) == l_61[2][3]), p_38, g_8), 5UL))), g_8))), g_8)));
    g_92 = (((safe_mul_func_int16_t_s_s(p_38, g_89)) > p_38) == g_89);
    return l_39[8];
}
static const int16_t func_47(uint32_t p_48, uint64_t p_49, uint8_t p_50, int8_t p_51, int32_t p_52)
{
    uint32_t l_69 = 0xCF39588DL;
    int32_t l_88 = 0x3987EDF5L;
    l_88 = (((safe_add_func_uint32_t_u_u((~(safe_mod_func_int64_t_s_s(0x264A3A207B8A5F03LL, (safe_mul_func_uint8_t_u_u(l_69, ((safe_sub_func_int32_t_s_s((safe_sub_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_s((g_8 == ((safe_lshift_func_uint16_t_u_s((p_49 != (safe_rshift_func_uint8_t_u_u((p_51 < l_69), ((g_8 ^ (((safe_lshift_func_int8_t_s_u((safe_mod_func_int8_t_s_s(l_69, (safe_lshift_func_int16_t_s_u((((safe_mul_func_uint8_t_u_u((((-1L) == 0xB934CEB0392260F1LL) >= g_8), (-2L))) < 4294967289UL) >= g_8), p_52)))), 0)) & g_8) < 0x8880ABB00F61094BLL)) & 5L)))), p_49)) || p_49)), 5)) >= p_51), p_52)), g_8)) || p_48)))))), p_51)) & 0x8186L) > 0xADFFL);
    return l_88;
}
int main (void)
{
    int i;
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_8;
    csmith_sink_ = g_89;
    csmith_sink_ = g_92;
    csmith_sink_ = g_143;
    csmith_sink_ = g_235;
    for (i = 0; i < 4; i++)
    {
        csmith_sink_ = g_266[i];
    }
    csmith_sink_ = g_391;
    csmith_sink_ = g_509;
    platform_main_end(0,0);
    return 0;
}
