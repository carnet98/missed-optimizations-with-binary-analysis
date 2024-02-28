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
static uint32_t g_2 = 0x99DADA43;
static uint16_t g_36 = 0x58AA;
static int32_t g_77 = 0;
static uint16_t g_78 = 0xFA23;
static uint32_t g_96 = 0xF1E0EF15;
static int32_t g_115 = 0;
static int8_t g_116 = (-8);
static uint16_t **g_117 = (void*)0;
static const int32_t g_181 = 0xF256DA86;
static const int32_t g_183 = 0x1F34F691;
static int16_t g_185 = 0xB462;
static const uint16_t ***g_193 = (void*)0;
static const uint16_t ****g_192 = &g_193;
static int32_t g_256 = 0x20279D62;
static uint32_t g_300 = 0U;
static int16_t g_338 = 7;
static int16_t g_340 = 0;
static uint32_t g_341 = 0x3B6CD964;
static int32_t *g_347 = &g_256;
static uint8_t g_369 = 255U;
static int32_t *g_372 = &g_256;
static int32_t **g_414 = &g_347;
static int32_t ***g_413 = &g_414;
static int16_t *g_425 = &g_185;
static int16_t **g_424 = &g_425;
static int32_t ****g_439 = (void*)0;
static int16_t ***g_445 = &g_424;
static int16_t ****g_444 = &g_445;
static uint32_t *g_511 = &g_341;
static uint32_t **g_510 = &g_511;
static uint8_t * const *g_573 = (void*)0;
static uint8_t **g_580 = (void*)0;
static uint16_t ** const *g_584 = &g_117;
static uint16_t ** const ** const g_583 = &g_584;
static uint16_t ** const ** const *g_582 = &g_583;
static int16_t *****g_600 = &g_444;
static uint8_t g_690 = 255U;
static uint16_t ***g_698 = &g_117;
static int16_t * const *g_723 = &g_425;
static int16_t * const **g_722 = &g_723;
static uint16_t *g_798 = &g_36;
static uint16_t * const *g_797 = &g_798;
static uint16_t * const **g_796 = &g_797;
static uint16_t * const ***g_795 = &g_796;
static int8_t *g_826 = &g_116;
static int8_t **g_825 = &g_826;
static uint32_t g_832 = 1U;
static const int32_t g_869 = 3;
static uint8_t * const **g_914 = (void*)0;
static uint8_t * const ***g_913 = &g_914;
static const int32_t *g_947 = &g_256;
static const int32_t **g_946 = &g_947;
static const int32_t ***g_945 = &g_946;
static const int32_t ****g_944 = &g_945;
static int16_t *** const *g_1010 = &g_445;
static int16_t *** const **g_1009 = &g_1010;
static uint32_t g_1040 = 2U;
static int32_t *****g_1084 = &g_439;
static const uint32_t *g_1137 = &g_1040;
static const uint32_t **g_1136 = &g_1137;
static const uint32_t ***g_1135 = &g_1136;
static uint32_t ***g_1148 = &g_510;
static uint32_t ****g_1147 = &g_1148;
static uint32_t *****g_1146 = &g_1147;
static int32_t func_1(void);
static int32_t func_5(uint16_t p_6, uint32_t p_7);
inline static uint16_t func_13(int16_t p_14);
inline static int16_t func_15(const int16_t p_16, int8_t p_17, const int8_t p_18);
inline static int8_t func_19(int16_t p_20, const int8_t p_21);
inline static int8_t func_22(uint32_t p_23, int32_t p_24);
inline static int32_t func_33(uint8_t p_34);
inline static uint32_t func_39(uint16_t * p_40, uint8_t p_41);
static uint16_t * func_42(uint16_t * p_43, uint16_t * p_44, const uint16_t * p_45, const uint16_t p_46, const uint32_t p_47);
static uint16_t * func_49(uint16_t * p_50, const int16_t p_51, int32_t p_52, uint16_t * p_53);
static int32_t func_1(void)
{
    uint32_t l_12 = 4294967290U;
    int32_t l_872 = 0x1F419A7F;
    int32_t l_1141 = (-1);
    uint16_t ****l_1209 = &g_698;
    const uint32_t l_1219 = 4294967287U;
    uint8_t l_1234 = 255U;
    uint8_t l_1238 = 6U;
    uint8_t **l_1241 = (void*)0;
    uint8_t l_1242 = 0U;
    if ((g_2 <= 1U))
    {
        uint32_t l_27 = 4294967295U;
        int32_t l_531 = 0x2A7E6A23;
        uint32_t ***l_1140 = &g_510;
        int32_t l_1145 = 0x16818E19;
        uint32_t *****l_1149 = (void*)0;
        int32_t ****l_1152 = &g_413;
        for (g_2 = 9; (g_2 == 58); g_2 = safe_add_func_int32_t_s_s(g_2, 3))
        {
            int8_t *l_530 = (void*)0;
            int32_t l_1119 = 0xBB189D0B;
            const uint32_t ****l_1138 = (void*)0;
            const uint32_t ****l_1139 = &g_1135;
            uint16_t *l_1142 = (void*)0;
            uint8_t *l_1143 = &g_369;
            int32_t l_1144 = 0xCE9CE325;
        }
    }
    else
    {
        int16_t l_1191 = 3;
        int32_t l_1192 = 0x071C77B7;
        for (g_77 = 0; (g_77 >= (-11)); --g_77)
        {
            int32_t l_1193 = 0;
            int32_t l_1194 = 0xBD02F03F;
            int32_t *l_1195 = &l_1192;
            (*l_1195) = (l_1141 = (safe_rshift_func_uint8_t_u_s((((safe_add_func_uint16_t_u_u((((4U | ((((((((safe_sub_func_int32_t_s_s(((***g_413) = ((*g_445) != (**g_1010))), (safe_mul_func_uint8_t_u_u(((safe_add_func_int32_t_s_s((((safe_sub_func_int8_t_s_s(0, 255U)) ^ (((((*g_1084) = (*g_1084)) != &g_413) < (((safe_rshift_func_int8_t_s_s(((l_1193 = (+(4294967293U && (safe_mul_func_int16_t_s_s(((((((safe_add_func_uint16_t_u_u((l_1191 = l_872), (****g_795))) || 0x01D50612) >= l_12) < (***g_1135)) >= 0x17E4) >= l_1192), (****g_444)))))) < 0x5EAC61DD), 3)) >= (*g_1137)) != 1U)) != l_1194)) <= 0xFF26F974), l_1194)) < l_1194), (-1))))) || l_1191) >= 0) == l_1192) <= (**g_1136)) || l_1192) || (**g_825)) < l_1192)) & l_1141) ^ (-9)), (**g_797))) == l_1194) != l_1194), 1)));
            (*l_1195) = (((safe_sub_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((*l_1195), 5)), ((void*)0 != &l_1191))) | (***g_1135)) < ((safe_mod_func_int8_t_s_s((safe_sub_func_int16_t_s_s((((safe_sub_func_int16_t_s_s((l_1191 != ((***g_413) = ((0xF35A9F8D && ((void*)0 == (*g_1084))) || l_1192))), (**g_797))) & 65527U) < l_12), l_1192)), (**g_825))) <= 65533U));
            l_1195 = (void*)0;
        }
        for (l_1192 = (-11); (l_1192 >= (-16)); --l_1192)
        {
            return (**g_414);
        }
    }
    if (((249U < (((*g_582) != (*g_582)) >= (**g_510))) >= (~(8U != (l_1141 <= ((l_1209 != (void*)0) > ((***g_796) != 0x004D)))))))
    {
        int8_t *l_1212 = &g_116;
        int8_t **l_1213 = &l_1212;
        int32_t l_1218 = 0x60961A66;
        (*g_372) = 0x97A6A1B9;
        (*g_372) = (((((l_12 ^ (safe_mul_func_int16_t_s_s((*****g_1009), 0x9CA3))) != (((*g_826) ^ (l_872 = l_872)) | ((*g_825) != ((*l_1213) = l_1212)))) | (((safe_sub_func_uint32_t_u_u(((safe_mod_func_uint8_t_u_u((l_1218 < (((((void*)0 == (*g_1010)) && l_12) >= (***g_796)) > l_1218)), 1U)) == l_1219), 0x4F5005C2)) | (*****g_1009)) | 6)) >= (**g_825)) >= (-10));
    }
    else
    {
        uint16_t l_1228 = 0xED73;
        uint32_t *l_1243 = (void*)0;
        uint32_t *l_1244 = (void*)0;
        int32_t *l_1245 = &g_77;
        for (g_2 = (-14); (g_2 >= 56); g_2++)
        {
            uint32_t l_1235 = 0x546BD911;
            (**g_414) = (((safe_mul_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(0x0A82, 2)), 0x4688)) | ((****g_1147) = (*g_511))) & (safe_mul_func_int8_t_s_s(l_1228, (safe_mul_func_uint16_t_u_u(l_12, ((safe_rshift_func_int8_t_s_s(((**g_825) = ((!l_1228) >= (l_1234 = 0x624A))), 0)) > l_1235))))));
            (**g_945) = (**g_945);
            return (****g_944);
        }
        (*l_1245) = ((safe_add_func_int8_t_s_s((((l_1141 = (***g_796)) && ((((*g_826) > l_1238) == ((safe_rshift_func_uint16_t_u_u(((*g_798) = (((*g_372) = ((((l_1241 == l_1241) >= (**g_510)) > l_1228) == l_1242)) ^ (g_96 = ((**g_825) == 2)))), l_1228)) != l_12)) | l_1238)) & l_872), l_1234)) || 1U);
        (**g_413) = l_1243;
    }
    return (*g_372);
}
static int32_t func_5(uint16_t p_6, uint32_t p_7)
{
    int8_t l_1113 = 1;
    int32_t *l_1118 = &g_256;
    for (g_300 = (-13); (g_300 < 56); ++g_300)
    {
        int32_t *l_1117 = &g_77;
        if (l_1113)
        {
            uint8_t l_1116 = 0x3D;
            for (g_116 = (-20); (g_116 >= (-28)); --g_116)
            {
                l_1116 = p_7;
            }
        }
        else
        {
            (*g_946) = l_1117;
            (*g_946) = l_1118;
        }
    }
    (*g_946) = (void*)0;
    return (*l_1118);
}
inline static uint16_t func_13(int16_t p_14)
{
    int8_t l_876 = 0xC1;
    int32_t **l_877 = (void*)0;
    int32_t *l_878 = &g_256;
    const int32_t ****l_948 = (void*)0;
    uint16_t **l_987 = &g_798;
    uint16_t *** const *l_999 = &g_698;
    uint16_t *** const **l_998 = &l_999;
    int16_t *l_1006 = &g_340;
    uint8_t ***l_1020 = &g_580;
    uint32_t **l_1077 = &g_511;
    uint8_t ****l_1092 = &l_1020;
    uint8_t *****l_1091 = &l_1092;
    uint16_t l_1110 = 0x03F2;
    if ((safe_add_func_int16_t_s_s((l_876 = p_14), (l_877 == ((*g_413) = l_877)))))
    {
        int32_t **l_879 = &g_372;
        (*l_879) = l_878;
    }
    else
    {
        int8_t l_889 = 0x83;
        int32_t l_896 = 0x10CD6EBC;
        int16_t l_909 = 0xA0A2;
        int8_t l_927 = 0xA8;
        uint32_t **l_949 = &g_511;
        int32_t l_983 = 0;
        int32_t *l_1008 = &g_256;
        const int16_t *****l_1012 = (void*)0;
        if ((safe_sub_func_uint8_t_u_u((safe_add_func_int16_t_s_s((~(l_909 = (safe_mod_func_uint32_t_u_u(((p_14 > ((***g_722) = ((void*)0 == &g_573))) ^ p_14), (safe_add_func_int16_t_s_s(l_889, (safe_add_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s((safe_mul_func_int16_t_s_s((l_896 = p_14), (safe_mod_func_int16_t_s_s(((*l_878) = ((l_889 < 0xFACA) <= (safe_mul_func_int8_t_s_s(((*g_826) = (safe_mul_func_uint8_t_u_u((safe_add_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s((((((*g_798) = (safe_mul_func_int16_t_s_s(0x3614, p_14))) >= 0x52E5) ^ p_14) <= p_14), 5)), (**g_510))), 0x27))), p_14)))), 0x4D94)))), l_889)), p_14)))))))), 1)), p_14)))
        {
            int32_t *l_910 = &g_77;
            int32_t l_967 = 6;
            uint16_t ****l_972 = (void*)0;
            l_910 = &l_896;
            for (g_115 = 0; (g_115 < 3); g_115 = safe_add_func_uint8_t_u_u(g_115, 1))
            {
                uint8_t * const ****l_915 = &g_913;
                (*l_915) = g_913;
            }
            if (((~(p_14 < ((**g_797) = ((((((0xAE != (safe_rshift_func_int16_t_s_u((((safe_lshift_func_uint8_t_u_u((*l_910), ((safe_mul_func_uint16_t_u_u(p_14, (-10))) <= (safe_mod_func_int32_t_s_s((safe_add_func_uint8_t_u_u((0x73 ^ p_14), ((*g_826) = (0xC3F3ACA3 <= (((**g_797) == p_14) <= l_927))))), 0x336BB670))))) & p_14) & 255U), p_14))) != (*l_878)) & (*l_910)) >= 1) < 0x07) <= l_889)))) && p_14))
            {
                const int32_t ****l_943 = (void*)0;
                const int32_t *****l_942 = &l_943;
                int16_t l_952 = 0xA1CD;
                if (((safe_add_func_uint32_t_u_u(((**l_949) = ((((safe_sub_func_int32_t_s_s(((safe_mod_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(((**g_825) = ((*l_910) <= (safe_rshift_func_uint16_t_u_s(((safe_add_func_int16_t_s_s(p_14, ((safe_add_func_uint8_t_u_u(p_14, (((*l_942) = (void*)0) != (l_948 = g_944)))) != ((void*)0 == l_949)))) > (safe_mod_func_int32_t_s_s(p_14, (l_952 ^ p_14)))), 5)))), p_14)), p_14)) == l_896), (**g_510))) < (*l_878)) & 9) <= 0x18F05971)), (***g_945))) & l_927))
                {
                    int32_t *l_953 = &g_77;
                    uint32_t l_960 = 4294967295U;
                    uint16_t ****l_963 = &g_698;
                    (*g_946) = l_953;
                    (*l_878) = ((safe_add_func_uint8_t_u_u((*l_953), ((void*)0 != (***l_948)))) || (safe_add_func_int8_t_s_s(((*l_910) == (safe_rshift_func_uint8_t_u_u((0x8D == (*l_953)), 2))), l_960)));
                    for (l_960 = (-20); (l_960 >= 40); ++l_960)
                    {
                        uint16_t *****l_964 = (void*)0;
                        uint16_t *****l_965 = (void*)0;
                        uint16_t *****l_966 = &l_963;
                        int32_t *l_968 = &g_115;
                        (**g_945) = l_910;
                        (*l_966) = l_963;
                        if (l_967)
                            continue;
                        (**g_945) = (l_968 = l_953);
                    }
                }
                else
                {
                    int8_t *l_981 = (void*)0;
                    int8_t *l_982 = &l_889;
                    l_983 = (1 & ((*l_878) = (((*l_878) <= (((**g_825) == ((*l_982) = ((((l_896 = ((*g_347) = p_14)) != ((safe_unary_minus_func_int16_t_s((safe_sub_func_int8_t_s_s(((void*)0 == l_972), ((safe_mul_func_int16_t_s_s((***g_722), (safe_mul_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(((l_967 = (((((0x2F < (safe_lshift_func_int16_t_s_u(l_889, 13))) || 0x26A47E8B) < (*g_826)) | 0) != p_14)) ^ 0xC2D84C48), (*g_425))), p_14)))) | 0U))))) || p_14)) != (**g_825)) >= 0xE0))) > 0U)) || (*l_910))));
                }
            }
            else
            {
                uint16_t l_984 = 0x536F;
                uint16_t **l_988 = &g_798;
                uint8_t *l_989 = &g_690;
                uint8_t *l_990 = &g_369;
                uint16_t *****l_997 = &l_972;
                const int32_t *l_1002 = &g_77;
                (*l_910) = (l_984 & (safe_sub_func_int8_t_s_s((((*l_990) = ((*l_989) = (((*g_698) = l_987) == l_988))) != (p_14 <= (((safe_mul_func_uint8_t_u_u(0U, ((safe_sub_func_uint8_t_u_u((p_14 >= l_889), (safe_mul_func_int16_t_s_s(((**g_723) = (l_997 != (l_998 = l_998))), (*l_878))))) == 0x34))) == l_889) != p_14))), p_14)));
                (*l_910) = 0x9AF3303B;
                for (g_690 = 0; (g_690 >= 42); g_690 = safe_add_func_uint16_t_u_u(g_690, 1))
                {
                    l_1002 = (***g_944);
                }
            }
        }
        else
        {
            int32_t *l_1005 = &g_115;
            for (g_369 = (-24); (g_369 != 45); g_369 = safe_add_func_uint8_t_u_u(g_369, 3))
            {
                l_1005 = l_1005;
                (*g_347) = l_889;
            }
        }
        (*g_372) = (-8);
        if (((*l_878) = (&p_14 == (l_1006 = &p_14))))
        {
            int32_t *l_1007 = &l_983;
            int16_t *** const **l_1011 = &g_1010;
            int8_t l_1019 = (-9);
            uint8_t *l_1029 = &g_369;
            l_1008 = l_1007;
            if (((((((l_1011 = g_1009) == l_1012) <= (*l_878)) > ((safe_lshift_func_int8_t_s_u((*l_878), 2)) < ((0x8DED5E04 | (safe_lshift_func_uint8_t_u_s((safe_mul_func_uint16_t_u_u(l_1019, ((**g_424) = (l_1020 == l_1020)))), 0))) || (safe_lshift_func_int16_t_s_u(((safe_mul_func_int16_t_s_s(((safe_sub_func_int32_t_s_s(((safe_add_func_uint32_t_u_u(((void*)0 != l_1029), p_14)) <= 1), p_14)) != (*l_878)), (***g_796))) || 0x609C), 14))))) == (*l_1007)) >= 1U))
            {
                int16_t **l_1044 = (void*)0;
                int32_t l_1059 = 0xBAD36AAE;
                (**g_945) = (***g_944);
                for (l_896 = 18; (l_896 >= 20); l_896 = safe_add_func_uint16_t_u_u(l_896, 4))
                {
                    int16_t l_1043 = (-10);
                    uint32_t ***l_1048 = &g_510;
                    int32_t *l_1049 = (void*)0;
                    (***g_944) = &l_896;
                    (*g_347) = (safe_lshift_func_uint16_t_u_s((safe_lshift_func_int16_t_s_u((safe_mod_func_uint32_t_u_u(((((*l_1007) = 0xAFC11402) | ((safe_mod_func_int16_t_s_s(p_14, g_1040)) < ((safe_add_func_uint8_t_u_u(l_1043, ((void*)0 == l_1044))) < (~((***g_945) && (safe_sub_func_int16_t_s_s((l_1048 == &g_510), l_1043))))))) | (**g_510)), (**g_510))), p_14)), (*g_425)));
                    (**g_945) = l_1049;
                    (*l_1008) = (safe_lshift_func_uint8_t_u_s(p_14, 6));
                }
                for (l_889 = 0; (l_889 > (-23)); --l_889)
                {
                    uint16_t l_1071 = 65531U;
                    int32_t *l_1072 = &l_1059;
                    int8_t *l_1093 = &l_876;
                    int8_t *l_1094 = &l_1019;
                    if ((safe_lshift_func_uint8_t_u_s((0x8441 >= (~(safe_mod_func_int8_t_s_s(l_1059, (safe_add_func_int16_t_s_s((l_1071 = (safe_sub_func_int8_t_s_s((0x0DCA0CD3 >= (((*l_1006) = ((*g_425) = ((safe_mul_func_uint8_t_u_u((safe_unary_minus_func_uint16_t_u(p_14)), 0x86)) | (safe_sub_func_int16_t_s_s((((*l_1007) < ((*l_878) = (p_14 == (**g_825)))) >= ((safe_mul_func_int16_t_s_s((**g_424), p_14)) <= (**g_510))), 0xBCB5))))) >= (*l_1008))), (*g_826)))), 0xA95F)))))), 6)))
                    {
                        return p_14;
                    }
                    else
                    {
                        (***g_944) = l_1072;
                        (*g_946) = &l_983;
                    }
                    (*l_1072) = ((safe_rshift_func_uint16_t_u_s((((5 || (65535U && ((((**g_825) != (p_14 == ((l_1077 = &g_511) == &g_511))) <= ((*l_1007) ^ (safe_rshift_func_int16_t_s_u(((safe_rshift_func_int8_t_s_s((0xDEA3 && ((*g_510) == (*g_510))), 2)) <= (*l_1008)), 10)))) != 65535U))) <= p_14) <= p_14), p_14)) >= (****g_944));
                    (*g_347) = ((((*l_1094) = (((*l_1093) = ((((safe_mod_func_int32_t_s_s(((g_1084 = &g_439) == &l_948), 0x84B6F2DE)) || (((safe_lshift_func_uint16_t_u_s(((((**g_825) = (*g_826)) >= (7U < (p_14 && ((~((safe_mul_func_int8_t_s_s((&g_439 == (void*)0), (((!((*l_1007) = ((l_1091 = (void*)0) != &g_913))) && (**g_510)) > 0xAE2D2712))) | (*g_425))) | 0x6BCD)))) && p_14), 14)) & p_14) ^ l_1059)) & 4294967295U) && (*l_1072))) == l_896)) < 0x9B) <= 0xED);
                    (***g_944) = &l_1059;
                }
            }
            else
            {
                (*g_946) = (*g_946);
                return p_14;
            }
        }
        else
        {
            int8_t ** const **l_1100 = (void*)0;
            int32_t l_1109 = 0xAC5536F4;
            for (g_256 = 0; (g_256 > (-7)); --g_256)
            {
                int32_t *l_1097 = &g_256;
                int8_t ** const *l_1099 = &g_825;
                int8_t ** const **l_1098 = &l_1099;
                (*g_946) = l_1097;
                l_1100 = l_1098;
            }
            for (l_983 = (-17); (l_983 <= (-14)); l_983 = safe_add_func_int8_t_s_s(l_983, 3))
            {
                const int32_t * const l_1105 = (void*)0;
                int32_t * const *l_1108 = (void*)0;
                int32_t * const **l_1107 = &l_1108;
                for (g_300 = 0; (g_300 == 35); ++g_300)
                {
                    const int32_t **l_1106 = &g_947;
                    (*l_1106) = l_1105;
                    l_1109 = (((p_14 == (*l_1008)) < (*g_511)) | ((void*)0 == l_1107));
                }
            }
        }
    }
    (*g_372) = l_1110;
    (**g_945) = l_878;
    return (*l_878);
}
inline static int16_t func_15(const int16_t p_16, int8_t p_17, const int8_t p_18)
{
    int32_t *l_873 = &g_115;
    (*g_414) = l_873;
    return p_18;
}
inline static int8_t func_19(int16_t p_20, const int8_t p_21)
{
    int32_t *l_532 = &g_77;
    int32_t *l_533 = &g_115;
    int32_t l_544 = (-1);
    uint16_t *l_548 = &g_78;
    uint8_t *l_549 = &g_369;
    int32_t *l_550 = &g_115;
    uint32_t **l_558 = &g_511;
    uint8_t * const **l_633 = &g_573;
    uint8_t l_643 = 0x27;
    int16_t *****l_702 = &g_444;
    uint16_t ***l_758 = &g_117;
    int16_t **l_805 = &g_425;
    l_533 = ((**g_413) = l_532);
    (*l_550) = ((*l_533) = ((safe_mul_func_int8_t_s_s(((safe_mul_func_int16_t_s_s(((safe_add_func_uint32_t_u_u(((safe_lshift_func_uint16_t_u_s(p_21, (*l_532))) < ((*l_549) = (((l_544 = (safe_add_func_uint32_t_u_u(p_20, (p_21 ^ 0xD976)))) <= (safe_sub_func_uint16_t_u_u((+(g_36 = (*l_532))), (((*l_548) = (*l_533)) & ((*g_425) = p_21))))) && p_21))), 0xB3ACD351)) > (*l_533)), (*l_532))) < 253U), 0x02)) >= p_21));
    for (l_544 = 0; (l_544 < 22); l_544++)
    {
        int16_t ** const *l_555 = &g_424;
        int16_t ** const * const *l_554 = &l_555;
        int16_t ** const * const **l_553 = &l_554;
        const uint16_t ****l_562 = &g_193;
        const uint16_t *****l_564 = &g_192;
        const int32_t l_579 = 1;
        int32_t l_609 = 0xE04766EC;
        uint8_t *l_651 = &g_369;
        int16_t ***l_652 = (void*)0;
        int32_t l_699 = 0x744FA6FA;
        uint8_t l_717 = 0U;
        uint32_t **l_742 = (void*)0;
        const uint16_t l_750 = 0xF471;
        (*l_553) = (void*)0;
    }
    if (((safe_rshift_func_int8_t_s_u((((safe_rshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((((*l_758) == (void*)0) && ((((-3) & (safe_add_func_int16_t_s_s(((**g_424) = ((((*g_600) != (*l_702)) ^ (safe_unary_minus_func_int8_t_s((&l_558 != &l_558)))) || ((safe_sub_func_int8_t_s_s((0x6C22D216 | (safe_mod_func_int16_t_s_s(((safe_mod_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(0xB5ECC560, (*g_511))), 0xAD)) == (-7)), (*l_532)))), p_20)) != (*l_550)))), (*l_550)))) < (*g_372)) == (*l_532))), (*l_532))), p_21)) & p_20) | (**g_510)), (*l_532))) < p_21))
    {
        (*g_414) = &l_544;
        for (g_300 = 0; (g_300 >= 59); g_300 = safe_add_func_int32_t_s_s(g_300, 5))
        {
            uint16_t * const *l_794 = &l_548;
            uint16_t * const **l_793 = &l_794;
            uint16_t * const ***l_792 = &l_793;
            for (g_116 = 0; (g_116 > (-8)); --g_116)
            {
                (*g_372) = (safe_sub_func_uint32_t_u_u(0U, 0x0C58EAFD));
            }
            g_795 = l_792;
        }
        (**g_413) = (**g_413);
    }
    else
    {
        int16_t **l_807 = &g_425;
        int32_t l_811 = 1;
        int8_t *l_855 = &g_116;
        uint32_t l_864 = 4294967291U;
        int32_t *l_871 = &l_544;
        (**g_413) = &l_544;
        for (g_690 = 0; (g_690 > 20); g_690++)
        {
            uint16_t l_828 = 0xDB3B;
            int32_t l_833 = 3;
            int16_t *l_870 = &g_338;
            for (g_369 = (-18); (g_369 < 38); g_369 = safe_add_func_int32_t_s_s(g_369, 5))
            {
                int16_t ***l_806 = &g_424;
                int32_t l_816 = 0x934648B2;
                int8_t ***l_827 = &g_825;
                uint8_t *l_829 = (void*)0;
                uint8_t *l_830 = (void*)0;
                uint8_t *l_831 = (void*)0;
                (**g_413) = (**g_413);
                (*g_372) = (safe_mul_func_uint8_t_u_u((((((*l_806) = l_805) == l_807) & (safe_unary_minus_func_int16_t_s((((safe_rshift_func_int16_t_s_u(l_811, (0xDA00 != (safe_lshift_func_uint16_t_u_s((p_21 < (g_832 = ((((safe_sub_func_int32_t_s_s((l_816 > ((safe_sub_func_int8_t_s_s(3, (((safe_lshift_func_int16_t_s_u(((**g_510) > (safe_add_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((((*l_827) = g_825) != &g_826), (*g_826))), 0xFC))), l_828)) < 7U) & p_20))) >= p_21)), 1)) < l_828) < (-2)) || (**g_825)))), 3))))) | p_21) && p_20)))) >= (***g_722)), l_833));
                for (g_256 = 0; (g_256 == (-2)); g_256 = safe_sub_func_int32_t_s_s(g_256, 5))
                {
                    uint8_t l_836 = 5U;
                    uint32_t *l_841 = &g_341;
                    if (l_836)
                    {
                        if (l_836)
                            break;
                        (*l_532) = (safe_lshift_func_int8_t_s_s((**g_825), 2));
                        (**g_414) = (safe_sub_func_int32_t_s_s((((*g_510) != l_841) ^ (((**g_414) || p_20) != (-10))), ((((**g_510) = ((safe_mul_func_int16_t_s_s((((+(((**g_510) != (((safe_mod_func_uint32_t_u_u(1U, p_20)) >= (*g_511)) & p_21)) && (**g_510))) == 0x36) & p_21), p_20)) || p_20)) & l_811) ^ 0x2B)));
                        (**g_413) = (**g_413);
                    }
                    else
                    {
                        (*l_533) = ((safe_mod_func_int8_t_s_s((*l_533), (-4))) == ((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(p_20, 9)), (safe_mul_func_int8_t_s_s((&p_21 == l_855), ((*l_855) = l_828))))) < l_828));
                        return l_836;
                    }
                }
            }
            (***g_413) = l_811;
            l_550 = ((*g_414) = &l_811);
            (*l_533) = ((safe_mod_func_int16_t_s_s(8, (l_811 = ((*l_870) = (safe_rshift_func_int8_t_s_s((((8 != (((*l_855) = (safe_rshift_func_int16_t_s_s((246U | (5 | (safe_sub_func_int32_t_s_s((l_811 != (l_864 & (safe_mul_func_uint16_t_u_u((((safe_mul_func_int16_t_s_s(((**g_424) = ((**g_510) ^ (0xDC && p_21))), l_811)) ^ l_811) > g_181), (*g_798))))), (**g_414))))), g_869))) <= l_833)) & 0xC6) & l_833), 6)))))) > p_21);
        }
        (**g_413) = (*g_414);
        l_871 = (void*)0;
    }
    return (*g_826);
}
inline static int8_t func_22(uint32_t p_23, int32_t p_24)
{
    int32_t l_28 = 0xD0F4F230;
    uint16_t *l_35 = &g_36;
    int8_t l_64 = (-7);
    int32_t *l_396 = &g_256;
    int32_t ***l_415 = &g_414;
    uint8_t *l_430 = &g_369;
    int32_t * const **l_455 = (void*)0;
    int16_t ****l_499 = &g_445;
    int16_t * const *l_527 = &g_425;
    if (((l_28 || (l_28 >= (safe_sub_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((func_33(g_2) >= (((*l_35) = 65533U) ^ (safe_mul_func_int16_t_s_s(0x6B37, (((func_33((g_2 != func_33(func_33(p_23)))) < p_23) <= (-5)) != 0x1E))))), 0x7E80)), 0xC6DD)))) < l_28))
    {
        uint16_t *l_48 = &g_36;
        int32_t l_71 = 0x7D231D57;
        uint16_t *l_373 = &g_78;
        int32_t *l_374 = &g_256;
        int16_t *l_388 = &g_340;
        int8_t *l_407 = &l_64;
        const int32_t *l_459 = &g_256;
        const int32_t **l_458 = &l_459;
        const int32_t ***l_457 = &l_458;
        uint8_t l_483 = 0x29;
        int16_t l_484 = 1;
        uint16_t ***l_486 = &g_117;
        uint16_t ****l_485 = &l_486;
        (*l_374) = (g_36 == (((*l_373) = (((4294967295U & func_39(func_42(&g_36, l_48, func_49(l_48, (safe_lshift_func_int8_t_s_s((safe_add_func_int16_t_s_s((safe_mod_func_int16_t_s_s((safe_mul_func_int16_t_s_s((((g_2 == (safe_mul_func_int16_t_s_s(l_64, ((safe_mod_func_int8_t_s_s(((~(((~(safe_add_func_int32_t_s_s((((&g_36 != &g_36) != g_36) > 0xFB11), p_23))) | p_23) & l_71)) && l_71), p_24)) ^ l_71)))) > l_28) && l_71), p_24)), 0x8336)), g_2)), 7)), p_23, &g_36), g_2, p_23), p_23)) && l_28) > 0x4C872E6D)) == 0x90DB));
        (*g_372) = (safe_mul_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_u(((safe_mod_func_uint32_t_u_u((safe_mod_func_int16_t_s_s((safe_mod_func_int16_t_s_s((safe_mul_func_int16_t_s_s(((*l_388) = (0x8DBA || (~0x6E2DC38A))), (safe_mod_func_int8_t_s_s((((((+l_64) != (*l_374)) != ((((*g_347) > ((safe_mod_func_int32_t_s_s(((*l_374) <= (*g_372)), p_23)) & (*l_374))) > l_64) >= (*l_374))) || 0x185AD0F7) && l_28), (*l_374))))), (-10))), 0x37E6)), (*g_372))) != (*l_374)), 11)) != 0xDCFA), (*l_374)));
        for (g_77 = (-17); (g_77 <= (-19)); g_77 = safe_sub_func_int16_t_s_s(g_77, 3))
        {
            uint8_t l_420 = 0x3F;
            uint32_t l_421 = 0x82FDE8DA;
            const int8_t *l_437 = &g_116;
            const int32_t *l_440 = (void*)0;
            const int32_t **l_441 = &l_440;
            l_396 = &p_24;
            if ((*g_347))
            {
                const int32_t *l_398 = &g_256;
                const int32_t **l_397 = &l_398;
                uint16_t ** const **l_400 = (void*)0;
                uint16_t ** const ***l_399 = &l_400;
                (*l_374) = p_24;
                (*l_397) = &g_181;
                (*l_399) = (void*)0;
                return p_24;
            }
            else
            {
                int8_t *l_406 = &l_64;
                int8_t **l_405 = &l_406;
                int32_t ****l_416 = &l_415;
                uint32_t *l_417 = &g_300;
                int32_t l_418 = 1;
                uint32_t *l_419 = &g_341;
                (*l_374) = ((0x0911 && (((((safe_lshift_func_uint8_t_u_s((((((*l_405) = &g_116) != l_407) == ((+((safe_rshift_func_int16_t_s_u((safe_add_func_uint8_t_u_u(((g_413 != ((*l_416) = l_415)) & (((*l_417) = (*l_374)) ^ ((*l_419) = ((&p_24 != (void*)0) < ((&l_35 != (void*)0) < l_418))))), g_96)), l_420)) && p_23)) == l_420)) == g_338), p_24)) <= p_24) | 4294967288U) || g_2) || (***g_413))) && 2);
                (**g_413) = &p_24;
                (*l_374) = ((***l_415) = l_421);
                for (g_96 = 0; (g_96 != 50); g_96 = safe_add_func_uint16_t_u_u(g_96, 5))
                {
                    int16_t ***l_426 = (void*)0;
                    int16_t ***l_427 = &g_424;
                    int32_t l_438 = 5;
                    (*l_427) = g_424;
                    (*l_396) = (safe_rshift_func_uint8_t_u_u((l_406 != l_430), ((*g_424) != (void*)0)));
                    (*l_374) = ((0xD9 | ((safe_mul_func_int8_t_s_s(g_115, ((void*)0 != l_35))) > (l_438 = (safe_add_func_uint32_t_u_u((safe_add_func_int16_t_s_s(0xDCDD, ((*l_48) = p_24))), (&l_64 != l_437)))))) > (p_24 | (*l_396)));
                    g_439 = &g_413;
                }
            }
            (*l_441) = l_440;
            if (p_23)
                continue;
        }
        for (l_71 = 0; (l_71 <= 23); l_71 = safe_add_func_uint32_t_u_u(l_71, 5))
        {
            int16_t *****l_446 = &g_444;
            int8_t *l_462 = &g_116;
            int32_t l_467 = 1;
            uint16_t *l_481 = &g_78;
            (*l_446) = g_444;
            for (g_185 = (-23); (g_185 == 2); g_185++)
            {
                (**l_415) = (**g_413);
                (**l_415) = (void*)0;
                (*g_414) = (**l_415);
                (*g_414) = (*g_414);
            }
            if (p_24)
            {
                int32_t * const ***l_456 = &l_455;
                (**g_413) = (void*)0;
                (*g_372) = ((safe_mul_func_int16_t_s_s((*l_374), ((safe_lshift_func_int8_t_s_s((*l_396), 5)) ^ (*l_396)))) | (safe_mul_func_int8_t_s_s((-9), (((((*l_456) = l_455) != l_457) == 0xD257C1A5) <= (safe_add_func_int32_t_s_s(((void*)0 == l_462), (-7)))))));
            }
            else
            {
                int16_t ***l_468 = &g_424;
                (**l_457) = (**l_457);
                (*l_396) = ((void*)0 != &g_116);
                for (g_256 = 0; (g_256 != 10); ++g_256)
                {
                    int32_t ****l_473 = &l_415;
                    int32_t l_482 = 0xD018CBE6;
                }
                (*l_374) = (l_485 == (void*)0);
            }
        }
    }
    else
    {
        int32_t *l_487 = &g_77;
        (*g_414) = &p_24;
        (**g_413) = l_487;
    }
    for (g_96 = 0; (g_96 <= 49); g_96 = safe_add_func_int16_t_s_s(g_96, 5))
    {
        int16_t ***l_490 = (void*)0;
        int32_t l_495 = (-7);
        uint16_t l_506 = 65535U;
        uint16_t l_507 = 65530U;
        int8_t *l_528 = (void*)0;
        int8_t *l_529 = &g_116;
        (**l_415) = (void*)0;
        (*l_396) = (((*g_444) = l_490) == (void*)0);
        if ((safe_mod_func_int16_t_s_s((**g_424), (safe_sub_func_uint16_t_u_u(((0x1B63 | (0x1B61 != ((*l_35) = (l_495 ^ (~l_495))))) >= (safe_rshift_func_int8_t_s_s((((l_499 != (void*)0) > (safe_lshift_func_uint16_t_u_s(0x7D3D, (safe_mul_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_u(p_23, p_23)) <= (*g_372)), l_506))))) && p_24), 5))), l_507)))))
        {
            uint32_t ***l_512 = &g_510;
            (*g_372) = (safe_mul_func_uint8_t_u_u(5U, p_23));
            (*g_372) = p_23;
            (*l_512) = g_510;
        }
        else
        {
            int32_t l_515 = (-1);
            l_515 = (safe_rshift_func_uint8_t_u_u(l_506, 3));
            if (p_24)
                continue;
            for (g_185 = 0; (g_185 != (-7)); g_185--)
            {
                (*g_372) = p_24;
            }
            if (l_507)
                break;
        }
        (*g_372) = (safe_rshift_func_uint16_t_u_u((p_24 > (p_24 || (safe_sub_func_int8_t_s_s((*l_396), ((safe_sub_func_int8_t_s_s(((g_369 <= (safe_rshift_func_uint16_t_u_s(l_506, (!((*g_511) = ((*l_499) != (*g_444))))))) == p_23), ((*l_529) = (l_527 == l_527)))) >= p_24))))), 7));
    }
    return g_78;
}
inline static int32_t func_33(uint8_t p_34)
{
    return g_2;
}
inline static uint32_t func_39(uint16_t * p_40, uint8_t p_41)
{
    int32_t **l_348 = (void*)0;
    int32_t **l_349 = &g_347;
    int32_t *l_351 = &g_256;
    int32_t **l_350 = &l_351;
    uint32_t *l_352 = (void*)0;
    uint32_t *l_353 = &g_96;
    uint16_t ***l_356 = &g_117;
    uint16_t ****l_355 = &l_356;
    uint16_t ***** const l_354 = &l_355;
    uint32_t *l_357 = (void*)0;
    int32_t **l_364 = &l_351;
    uint8_t *l_367 = (void*)0;
    uint8_t *l_368 = &g_369;
    (*l_350) = ((*l_349) = &g_77);
    (**l_350) = (((*l_353) = 0xFD501939) & (((g_341 = (g_300 = ((void*)0 == l_354))) <= (((*g_347) < (0x7D | ((*l_368) = ((safe_lshift_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_u((safe_mul_func_int16_t_s_s(((l_364 != &l_351) > ((safe_mod_func_uint8_t_u_u(0x59, (**l_350))) | 0x8AB4)), 0x7611)), 5)) & (**l_364)), 8)) | g_2)))) > (**l_364))) ^ (**l_350)));
    for (g_96 = (-27); (g_96 > 58); ++g_96)
    {
        g_347 = (*l_364);
        (*g_192) = (*g_192);
    }
    g_372 = &g_77;
    return g_341;
}
static uint16_t * func_42(uint16_t * p_43, uint16_t * p_44, const uint16_t * p_45, const uint16_t p_46, const uint32_t p_47)
{
    int32_t *l_119 = (void*)0;
    int32_t **l_120 = &l_119;
    uint16_t ***l_129 = &g_117;
    uint8_t l_146 = 1U;
    const int32_t *l_182 = &g_183;
    int8_t *l_244 = &g_116;
    uint16_t *** const *l_254 = &l_129;
    (*l_120) = l_119;
    for (g_96 = 0; (g_96 == 18); ++g_96)
    {
        int32_t l_123 = (-6);
        if (l_123)
        {
            uint16_t ***l_124 = &g_117;
            uint16_t ***l_125 = (void*)0;
            uint16_t *l_128 = &g_78;
            uint16_t **l_127 = &l_128;
            uint16_t ***l_126 = &l_127;
            uint16_t ****l_130 = &l_129;
            (*l_126) = ((*l_124) = g_117);
            if (p_47)
                continue;
            if (p_47)
                break;
            (*l_130) = l_129;
        }
        else
        {
            return p_43;
        }
    }
    for (g_115 = 0; (g_115 >= (-10)); --g_115)
    {
        int8_t l_133 = 1;
        int32_t l_145 = 0x41A119B8;
        int16_t *l_204 = &g_185;
        uint16_t l_318 = 8U;
        if (g_2)
            break;
    }
    return p_44;
}
static uint16_t * func_49(uint16_t * p_50, const int16_t p_51, int32_t p_52, uint16_t * p_53)
{
    int8_t l_72 = 0x03;
    int32_t *l_73 = (void*)0;
    int32_t *l_74 = (void*)0;
    int32_t l_75 = 0x779538E5;
    int32_t *l_76 = &g_77;
    uint16_t *l_113 = &g_36;
    (*l_76) = (l_75 = l_72);
    g_78 = ((*l_76) = (&g_36 == &g_36));
    for (g_78 = 0; (g_78 >= 38); ++g_78)
    {
        int32_t l_86 = (-1);
        for (g_77 = (-13); (g_77 > (-16)); g_77--)
        {
            uint32_t l_89 = 0xF9D3F58F;
            int32_t l_90 = (-1);
            int8_t l_97 = 0x9E;
            int32_t *l_98 = (void*)0;
            uint32_t l_114 = 4294967288U;
            uint16_t ***l_118 = &g_117;
            l_86 = (+(safe_add_func_uint32_t_u_u((&g_36 == &g_78), 0U)));
            for (l_75 = 0; (l_75 >= 3); l_75 = safe_add_func_int8_t_s_s(l_75, 5))
            {
                int32_t *l_91 = &l_86;
                (*l_91) = (l_90 = l_89);
                for (l_89 = 17; (l_89 >= 1); --l_89)
                {
                    int32_t **l_94 = (void*)0;
                    int32_t *l_95 = &l_90;
                    (*l_91) = ((-2) == 0x8FB8AAA8);
                    l_95 = &g_77;
                    g_96 = (*l_91);
                }
                if (l_97)
                    continue;
                l_98 = &g_77;
            }
            g_116 = (safe_sub_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((&l_75 == &l_86), (safe_add_func_int16_t_s_s(g_2, p_51)))), (safe_rshift_func_uint8_t_u_u(g_96, (g_115 = (safe_lshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_s((l_86 || p_51), (safe_mod_func_uint32_t_u_u(((p_53 != l_113) || (-1)), l_114)))), l_86)))))));
            (*l_118) = g_117;
        }
    }
    return p_53;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_2;
    csmith_sink_ = g_36;
    csmith_sink_ = g_77;
    csmith_sink_ = g_78;
    csmith_sink_ = g_96;
    csmith_sink_ = g_115;
    csmith_sink_ = g_116;
    csmith_sink_ = g_181;
    csmith_sink_ = g_183;
    csmith_sink_ = g_185;
    csmith_sink_ = g_256;
    csmith_sink_ = g_300;
    csmith_sink_ = g_338;
    csmith_sink_ = g_340;
    csmith_sink_ = g_341;
    csmith_sink_ = g_369;
    csmith_sink_ = g_690;
    csmith_sink_ = g_832;
    csmith_sink_ = g_869;
    csmith_sink_ = g_1040;
    platform_main_end(0,0);
    return 0;
}
