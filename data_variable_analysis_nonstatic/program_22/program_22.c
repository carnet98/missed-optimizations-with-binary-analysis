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
   unsigned f0 : 10;
   unsigned f1 : 23;
   signed f2 : 29;
};
static int32_t g_4 = 0xADE2167F;
static int32_t g_8 = 2;
static uint32_t g_34 = 0x5300CE3D;
static int32_t *g_50 = &g_8;
static int32_t **g_49 = &g_50;
static int32_t g_51 = 0x5FF74F57;
static int32_t g_55 = 1;
static int32_t **g_153 = &g_50;
static int32_t ***g_172 = &g_49;
static int32_t ****g_171 = &g_172;
static struct S0 g_210 = {22,1161,-73};
static uint8_t g_232 = 0x64;
static struct S0 *g_384 = &g_210;
static struct S0 **g_383 = &g_384;
static int32_t *g_503 = &g_8;
static uint16_t g_582 = 65530U;
static uint16_t g_599 = 65535U;
static int32_t func_1(void);
inline static uint8_t func_21(int16_t p_22, int32_t * p_23);
static int32_t * func_24(int32_t ** p_25, uint32_t p_26);
inline static int32_t ** func_27(int32_t ** p_28, int32_t ** p_29);
static int32_t ** func_30(uint32_t p_31, uint32_t p_32, int32_t * p_33);
inline static int32_t * func_35(int32_t * p_36, int32_t ** p_37);
inline static uint8_t func_46(int32_t ** p_47, int32_t ** p_48);
static int32_t * func_57(int32_t ** p_58, int32_t * p_59, int32_t ** p_60);
inline static int32_t ** func_67(uint32_t p_68, uint8_t p_69);
static int32_t ** func_73(uint32_t p_74, int32_t ** p_75, int32_t p_76);
static int32_t func_1(void)
{
    int32_t *l_3 = &g_4;
    int32_t **l_2 = &l_3;
    int32_t l_736 = 0xE9FD986C;
    struct S0 l_737 = {15,1779,-16174};
    int32_t l_738 = 7;
    uint8_t l_774 = 0x6B;
    struct S0 l_775 = {25,1555,-22291};
    (*l_2) = (void*)0;
    ((void) sizeof ((l_3 == 0) ? 1 : 0), __extension__ ({ if (l_3 == 0) ; else __assert_fail ("l_3 == 0", "/tmp/tmp2r_czfa9.c", 76, __extension__ __PRETTY_FUNCTION__); }));
    for (g_4 = 18; (g_4 == (-4)); --g_4)
    {
        int32_t *l_7 = &g_8;
        uint16_t l_761 = 7U;
        (*l_7) = g_4;
    }
    (**g_153) = ((4294967295U >= (safe_mod_func_int8_t_s_s(g_8, (((safe_rshift_func_uint16_t_u_s(((safe_lshift_func_uint16_t_u_s((safe_sub_func_int16_t_s_s((((g_4 , g_210.f1) >= (g_599 | l_774)) < (((l_775 , (((void*)0 == &g_171) >= (**g_153))) != g_34) & 1)), g_55)), 13)) ^ 0x20), g_55)) ^ 0xDA789979) , g_210.f0)))) <= (-4));
    return (**g_49);
}
inline static uint8_t func_21(int16_t p_22, int32_t * p_23)
{
    int32_t *l_504 = &g_55;
    int8_t l_514 = (-8);
    int32_t ***l_521 = &g_153;
    int8_t l_554 = 0x05;
    struct S0 l_555 = {19,390,4761};
    int16_t l_580 = 0x14C0;
    int32_t l_581 = (-3);
    struct S0 **l_608 = &g_384;
    uint32_t l_647 = 0U;
    uint32_t l_659 = 0xD009DE20;
    uint32_t l_707 = 0x1AF444A9;
    int32_t l_716 = 0x952B61F2;
    uint32_t l_735 = 0x6A09FC66;
    if ((p_22 ^ (&g_171 != ((!(((safe_sub_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((g_503 == l_504), (safe_lshift_func_int8_t_s_u((g_8 , 0x8A), 0)))), (((safe_sub_func_int16_t_s_s((((safe_add_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((+l_514), (safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint16_t_u_u(p_22, (safe_add_func_int32_t_s_s((((1U <= p_22) , l_521) != (*g_171)), p_22)))), 7)))), g_210.f0)) & 0x212F) ^ g_210.f2), p_22)) <= g_34) , 65530U))) ^ 0x1E) <= p_22)) , &g_171))))
    {
        int8_t l_526 = 6;
        struct S0 *l_543 = (void*)0;
        (*g_153) = (**g_172);
        for (g_51 = 0; (g_51 < (-25)); g_51--)
        {
            (*l_504) = (safe_add_func_uint32_t_u_u(l_526, (((safe_sub_func_int16_t_s_s(g_8, 0x20E6)) , &g_384) == (void*)0)));
            (*l_504) = l_526;
        }
        (*l_504) = (safe_sub_func_uint32_t_u_u((~((+((((safe_lshift_func_int16_t_s_u(((safe_mod_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u((((((safe_rshift_func_uint16_t_u_s((0x0119565B && (safe_mod_func_uint32_t_u_u((((((void*)0 == l_543) , 0xA1A1) | (((void*)0 == (*l_521)) , ((1U || (((safe_lshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_u(((((((((((safe_sub_func_int8_t_s_s((((*g_503) != (safe_sub_func_int32_t_s_s(((((((safe_sub_func_int8_t_s_s(l_526, p_22)) < 0x23FD4F35) != 0xF47291F4) <= l_526) , (void*)0) != &g_171), p_22))) || p_22), g_210.f0)) || l_554) & l_526) == 255U) || p_22) ^ p_22) | 0xEB76F203) <= (*l_504)) , (**g_383)) , g_210.f0), 8)), l_526)) < l_526) && 0xF5)) != l_526))) , 4294967288U), 4294967295U))), p_22)) , p_22) , p_22) >= l_526) && g_51), 3)), g_8)) , g_51), g_55)) < p_22) && p_22) == 0x315A)) && p_22)), 0x60F63CC2));
        (*g_384) = l_555;
    }
    else
    {
        int32_t *l_556 = &g_51;
        (*g_49) = p_23;
        ((void) sizeof ((g_50 == &g_4 || g_50 == 0 || g_50 == &g_55 || g_50 == &g_8) ? 1 : 0), __extension__ ({ if (g_50 == &g_4 || g_50 == 0 || g_50 == &g_55 || g_50 == &g_8) ; else __assert_fail ("g_50 == &g_4 || g_50 == 0 || g_50 == &g_55 || g_50 == &g_8", "/tmp/tmp2r_czfa9.c", 126, __extension__ __PRETTY_FUNCTION__); }));
        l_556 = p_23;
        ((void) sizeof ((l_556 == &g_4 || l_556 == 0 || l_556 == &g_55 || l_556 == &g_8) ? 1 : 0), __extension__ ({ if (l_556 == &g_4 || l_556 == 0 || l_556 == &g_55 || l_556 == &g_8) ; else __assert_fail ("l_556 == &g_4 || l_556 == 0 || l_556 == &g_55 || l_556 == &g_8", "/tmp/tmp2r_czfa9.c", 129, __extension__ __PRETTY_FUNCTION__); }));
        (**l_521) = (*g_49);
    }
    ((void) sizeof ((g_50 == &g_4 || g_50 == 0 || g_50 == &g_55 || g_50 == &g_8) ? 1 : 0), __extension__ ({ if (g_50 == &g_4 || g_50 == 0 || g_50 == &g_55 || g_50 == &g_8) ; else __assert_fail ("g_50 == &g_4 || g_50 == 0 || g_50 == &g_55 || g_50 == &g_8", "/tmp/tmp2r_czfa9.c", 133, __extension__ __PRETTY_FUNCTION__); }));
    if ((safe_lshift_func_int16_t_s_u((safe_add_func_uint32_t_u_u(((0x74CCCD61 || ((safe_mod_func_uint32_t_u_u(((safe_mod_func_uint8_t_u_u((g_210.f2 , (safe_unary_minus_func_int8_t_s((g_4 < 0x4EBE45EE)))), 0xD0)) && (((((safe_lshift_func_int16_t_s_u((((0xF53E <= (((safe_lshift_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((safe_sub_func_int32_t_s_s(p_22, (safe_lshift_func_uint8_t_u_s(((((safe_rshift_func_int8_t_s_u((safe_mod_func_uint32_t_u_u(0xCE44594A, (*l_504))), p_22)) , l_555) , 255U) , g_34), p_22)))), 0x29531653)), g_210.f2)) > p_22) <= (*l_504))) <= l_580) , 0), 0)) || (*l_504)) , (-3)) , 0xB767BAFD) != 0x6E385824)), 3)) <= 0U)) || p_22), (*l_504))), 12)))
    {
        uint16_t l_583 = 0x8879;
        int32_t ***l_592 = &g_153;
        struct S0 **l_613 = &g_384;
        uint32_t l_614 = 7U;
        uint16_t l_696 = 0x4E59;
        if (((((((g_51 & p_22) | (l_581 , (((void*)0 == l_521) , ((((((2 >= g_582) && (g_210.f1 >= ((*l_504) , p_22))) | 0U) || g_210.f0) <= 65535U) | p_22)))) == (*l_504)) , g_210.f0) <= 65535U) > l_583))
        {
            uint32_t l_586 = 4294967286U;
            int32_t *****l_612 = &g_171;
            struct S0 l_644 = {15,2398,-691};
            if ((l_586 | ((safe_unary_minus_func_int32_t_s((((safe_lshift_func_int8_t_s_u(((safe_lshift_func_int16_t_s_u((*l_504), ((((*g_171) == (p_22 , l_592)) && g_8) > ((safe_rshift_func_uint8_t_u_s(1U, (((safe_mod_func_uint32_t_u_u(((((((safe_sub_func_uint32_t_u_u((p_22 > 0x68), (-1))) , p_22) >= p_22) > 0) <= g_210.f0) , 4294967295U), g_599)) && 9) & p_22))) , 6)))) > 0x3525), g_582)) == 0) > g_55))) < p_22)))
            {
                return p_22;
            }
            else
            {
                int32_t l_620 = 0xCBAB5EB8;
                int32_t ****l_639 = &g_172;
                int32_t l_640 = (-8);
                int16_t l_674 = 0x831D;
                struct S0 l_675 = {25,907,10331};
                (*g_171) = (*g_171);
lbl_615:
                if (l_583)
                {
                    (**g_383) = (**g_383);
                }
                else
                {
                    int16_t l_611 = 0x0B08;
                    (*l_504) = ((safe_rshift_func_int8_t_s_s(p_22, (g_232 , ((((safe_add_func_uint32_t_u_u((safe_sub_func_int32_t_s_s(((((safe_sub_func_int32_t_s_s((((-1) < 65527U) & (p_22 == (((((void*)0 != l_608) | ((safe_add_func_int32_t_s_s(l_611, ((((0x1237 && 0) | 0x9189) , l_612) != (void*)0))) | p_22)) , (void*)0) != l_613))), 0U)) , g_8) , g_210.f1) || l_611), (*g_503))), p_22)) , 0x379D) || l_614) != 0x04)))) >= p_22);
                    if (l_614)
                        goto lbl_615;
                }
                if ((g_8 | (safe_add_func_int16_t_s_s(((p_22 >= g_210.f0) & (safe_rshift_func_int16_t_s_s(g_210.f1, 4))), (l_620 | (safe_lshift_func_uint8_t_u_s(((safe_sub_func_int8_t_s_s((g_55 , (safe_lshift_func_uint8_t_u_u((g_210.f1 < 0), 1))), ((((safe_add_func_int32_t_s_s((~(p_22 | 0U)), g_4)) >= 4294967288U) , g_582) , (-9)))) , p_22), g_4)))))))
                {
                    uint8_t l_638 = 251U;
                    struct S0 l_641 = {28,2185,17525};
                    int32_t **l_643 = &l_504;
                    if ((((g_582 <= (p_22 > (*l_504))) , ((safe_mod_func_int16_t_s_s(3, ((((((safe_rshift_func_uint8_t_u_s((safe_add_func_int16_t_s_s((1 ^ (safe_sub_func_uint8_t_u_u(g_232, (((((((l_638 , &g_172) != l_639) || 5) <= l_620) ^ g_8) , 0x6E5963A6) , g_210.f1)))), 2)), l_640)) <= 4294967286U) <= p_22) == g_232) && p_22) || g_8))) , l_641)) , p_22))
                    {
                        (*g_49) = (*g_49);
                    }
                    else
                    {
                        int32_t **l_642 = (void*)0;
                        (**l_592) = (*g_153);
                        if (l_514)
                            goto lbl_650;
                    }
                    (*g_384) = l_644;
                    (*g_153) = ((&l_521 == (*l_612)) , (**l_521));
                }
                else
                {
                    for (g_34 = 27; (g_34 >= 4); g_34 = safe_sub_func_uint16_t_u_u(g_34, 9))
                    {
                        l_647 = 6;
                        (*l_504) = ((safe_lshift_func_int8_t_s_s(((**g_383) , 0), (*l_504))) < p_22);
                    }
lbl_650:
                    (**g_383) = (**l_608);
                    (**g_383) = (((void*)0 == &p_23) , (*g_384));
                }
                for (l_586 = 0; (l_586 > 41); l_586 = safe_add_func_uint8_t_u_u(l_586, 3))
                {
                    uint32_t l_673 = 0x6DED3273;
                    int32_t **l_684 = &g_50;
                    (**l_592) = func_24((***l_612), ((safe_rshift_func_uint8_t_u_u((((safe_rshift_func_uint8_t_u_s((((0xAB || (1U <= p_22)) , (safe_add_func_uint32_t_u_u(4294967295U, l_659))) & ((0xE5586AD2 < (safe_mod_func_int16_t_s_s(((+(safe_lshift_func_uint16_t_u_u(((g_210.f0 , (((safe_sub_func_uint32_t_u_u(((safe_add_func_int32_t_s_s(((safe_add_func_int8_t_s_s((safe_lshift_func_int16_t_s_u((((p_22 , l_673) , 0x12FC3BE6) > g_4), 6)), g_210.f2)) , p_22), 0xF1C86011)) , p_22), 0U)) , l_674) & p_22)) == g_210.f0), g_582))) && 0x4587C979), p_22))) > (-3))), g_4)) ^ p_22) | p_22), g_210.f1)) && g_232));
                    p_23 = (*g_153);
                    (**l_613) = ((g_34 < (g_599 ^ ((void*)0 != (**g_172)))) , l_675);
                    (*l_684) = (*g_153);
                }
            }
            (****l_612) = (*g_49);
            (****l_612) = (**l_521);
        }
        else
        {
            int32_t **l_695 = &g_503;
            (*l_592) = func_30(((((((safe_rshift_func_uint8_t_u_s((safe_mod_func_uint32_t_u_u(((((p_22 != ((safe_add_func_int32_t_s_s((g_34 || (safe_add_func_uint32_t_u_u(((void*)0 == &g_384), p_22))), ((safe_lshift_func_int16_t_s_s(((l_695 == &p_23) , ((*g_172) != (void*)0)), 12)) && (**l_695)))) >= 1)) > p_22) & 1) >= l_696), (*g_503))), g_599)) != p_22) <= p_22) || 0x66) ^ p_22) != 0U), g_232, (*l_695));
            ((void) sizeof ((g_50 == 0 || g_50 == &g_55) ? 1 : 0), __extension__ ({ if (g_50 == 0 || g_50 == &g_55) ; else __assert_fail ("g_50 == 0 || g_50 == &g_55", "/tmp/tmp2r_czfa9.c", 218, __extension__ __PRETTY_FUNCTION__); }));
            ((void) sizeof ((g_153 == 0) ? 1 : 0), __extension__ ({ if (g_153 == 0) ; else __assert_fail ("g_153 == 0", "/tmp/tmp2r_czfa9.c", 219, __extension__ __PRETTY_FUNCTION__); }));
            for (l_614 = (-7); (l_614 > 7); ++l_614)
            {
                int32_t *l_699 = &g_51;
            }
            (**l_613) = (((*l_504) | 0x55C389F0) , (*g_384));
        }
        ((void) sizeof ((g_153 == 0 || g_153 == &g_50) ? 1 : 0), __extension__ ({ if (g_153 == 0 || g_153 == &g_50) ; else __assert_fail ("g_153 == 0 || g_153 == &g_50", "/tmp/tmp2r_czfa9.c", 227, __extension__ __PRETTY_FUNCTION__); }));
    }
    else
    {
        uint8_t l_700 = 8U;
        struct S0 *l_715 = &l_555;
        l_700 = ((*g_383) != (void*)0);
        (*l_521) = ((((safe_sub_func_uint32_t_u_u(p_22, (((safe_sub_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s((((g_210.f0 != l_707) <= 0x838FFA18) , ((!(*l_504)) || ((safe_add_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(g_599, (safe_lshift_func_uint16_t_u_s((((*g_384) , ((void*)0 != l_715)) & g_4), l_700)))), l_716)) ^ (*l_504)))), 11)), (*l_504))) ^ g_4) || l_700))) , p_22) && 0x4F1F5F60) , &p_23);
        ((void) sizeof ((g_153 == &p_23) ? 1 : 0), __extension__ ({ if (g_153 == &p_23) ; else __assert_fail ("g_153 == &p_23", "/tmp/tmp2r_czfa9.c", 236, __extension__ __PRETTY_FUNCTION__); }));
        (*l_504) = ((safe_sub_func_uint16_t_u_u((p_22 != (65526U & p_22)), 0U)) , (*g_503));
    }
    ((void) sizeof ((g_153 == &p_23 || g_153 == 0 || g_153 == &g_50) ? 1 : 0), __extension__ ({ if (g_153 == &p_23 || g_153 == 0 || g_153 == &g_50) ; else __assert_fail ("g_153 == &p_23 || g_153 == 0 || g_153 == &g_50", "/tmp/tmp2r_czfa9.c", 240, __extension__ __PRETTY_FUNCTION__); }));
    (*l_504) = (safe_add_func_uint32_t_u_u((!(safe_sub_func_uint32_t_u_u(((safe_add_func_int32_t_s_s((safe_lshift_func_int8_t_s_s(((((safe_rshift_func_uint8_t_u_u((0x832A | g_210.f2), 6)) , (*g_383)) == ((+((void*)0 != (*l_608))) , (*l_608))) == ((p_23 != (**g_172)) || (safe_sub_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u(1U, p_22)), g_51)))), 4)), l_735)) || 0U), (*l_504)))), 0xF1F2BE47));
    return (*l_504);
}
static int32_t * func_24(int32_t ** p_25, uint32_t p_26)
{
    uint8_t l_310 = 1U;
    int32_t *l_325 = &g_4;
    int32_t ****l_327 = &g_172;
    int32_t l_334 = 1;
    struct S0 l_407 = {10,2737,13879};
    int16_t l_408 = 0xDBEB;
    uint8_t l_451 = 252U;
    int32_t *l_483 = &g_4;
    uint16_t l_495 = 0xB32B;
    int32_t *l_497 = &g_55;
    if ((l_310 >= (safe_lshift_func_int8_t_s_u((p_26 , (safe_mod_func_int16_t_s_s(((l_310 | ((l_310 != l_310) != (safe_add_func_int16_t_s_s((0xB098 < (safe_rshift_func_int8_t_s_u(l_310, 3))), (p_26 & p_26))))) == l_310), l_310))), p_26))))
    {
        uint8_t l_319 = 0xDD;
        l_319 = (p_26 , (0xA8 || (p_25 == (*g_172))));
    }
    else
    {
        int16_t l_320 = 0x9700;
        int32_t l_335 = 4;
        int32_t l_336 = 0xA1D27760;
        int32_t *****l_349 = &l_327;
        struct S0 *l_357 = &g_210;
        int16_t l_394 = 0x47EC;
        (*p_25) = (*g_49);
        g_55 = 0x2071430A;
        l_336 = ((l_320 <= (safe_mod_func_int32_t_s_s((((((safe_mod_func_int32_t_s_s(((((*p_25) == l_325) == ((!((void*)0 == l_327)) ^ p_26)) ^ ((safe_add_func_int16_t_s_s((g_34 <= ((safe_mod_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s((g_4 , (((((p_26 < g_210.f0) | g_34) == g_51) != g_34) || g_34)), l_334)), 0x49FB)) == g_55)), 65532U)) & 4294967293U)), l_320)) < 0) , g_210.f2) , g_8) ^ 250U), g_34))) && l_335);
        for (g_232 = (-13); (g_232 < 26); g_232++)
        {
            int32_t *****l_348 = (void*)0;
            int32_t *l_350 = &g_55;
            int32_t l_372 = 0x4B1E1DA7;
            struct S0 *l_411 = &g_210;
            (***g_171) = (*p_25);
            (*l_350) = (safe_add_func_int8_t_s_s((p_26 != (g_51 <= (safe_lshift_func_int16_t_s_s((1U | (((((void*)0 == &g_171) , (*g_171)) != (*g_171)) | ((l_335 != ((safe_rshift_func_int16_t_s_s((~(safe_sub_func_int16_t_s_s((l_348 != l_349), 65535U))), g_34)) && p_26)) != g_210.f1))), (*l_325))))), g_210.f2));
            if (l_320)
            {
                int32_t l_364 = 0xBEA12880;
                if (((void*)0 != (*g_171)))
                {
                    int8_t l_351 = 0x20;
                    if (l_351)
                        break;
                }
                else
                {
                    int32_t l_367 = 0xA984D779;
                    for (l_310 = 14; (l_310 < 43); l_310 = safe_add_func_int8_t_s_s(l_310, 9))
                    {
                        int16_t l_354 = 0xDE86;
                        (***l_327) = (***g_171);
                    }
                    (*l_350) = ((safe_sub_func_uint16_t_u_u((l_327 != &g_172), (l_357 == &g_210))) & (safe_rshift_func_int8_t_s_u((p_26 & g_51), (safe_lshift_func_int16_t_s_u(g_34, (safe_add_func_int32_t_s_s(l_364, (safe_sub_func_uint8_t_u_u((((((((g_232 | 1U) >= l_367) && l_367) ^ g_232) != 1) ^ p_26) , g_34), p_26)))))))));
                    (*l_350) = p_26;
                }
                for (g_55 = 5; (g_55 != 11); ++g_55)
                {
                    int32_t **l_377 = (void*)0;
                    int16_t l_380 = 0x3FEF;
                    struct S0 l_391 = {22,589,7763};
                    for (g_51 = 14; (g_51 != 2); g_51 = safe_sub_func_uint16_t_u_u(g_51, 1))
                    {
                        l_372 = 0x4C1C4458;
                    }
                    (*l_357) = ((((void*)0 == (*p_25)) < ((g_210.f0 < (((g_210 , ((safe_rshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((l_377 != l_377), p_26)), 5)) != (((safe_rshift_func_uint16_t_u_u(((0x73F3 > ((*l_350) <= (*l_350))) == l_380), 0)) | 0x0F) || p_26))) < (*l_350)) & (*l_325))) & p_26)) , (*l_357));
                    for (l_380 = 0; (l_380 > (-18)); l_380 = safe_sub_func_int32_t_s_s(l_380, 2))
                    {
                        struct S0 **l_385 = (void*)0;
                        int32_t l_387 = 0x7E3472C8;
                        int32_t ***l_388 = &g_49;
                        l_385 = g_383;
                        ((void) sizeof ((l_385 == &g_384) ? 1 : 0), __extension__ ({ if (l_385 == &g_384) ; else __assert_fail ("l_385 == &g_384", "/tmp/tmp2r_czfa9.c", 328, __extension__ __PRETTY_FUNCTION__); }));
                        (*g_384) = (((((!l_387) , l_388) == (((((p_26 & (safe_lshift_func_uint8_t_u_u(0x1A, (&g_172 == l_327)))) , l_391) , 0U) & ((*l_325) || g_55)) , (*l_327))) < 0x6E) , (*g_384));
                        l_387 = (g_210.f2 || ((((((safe_mod_func_int32_t_s_s(((((l_394 ^ g_232) , (l_364 && p_26)) , g_232) && (safe_sub_func_uint32_t_u_u((2 >= p_26), ((safe_sub_func_int16_t_s_s(0, g_8)) | p_26)))), (*l_350))) >= p_26) | g_4) >= (-1)) || 0x8383D205) , (-1)));
                    }
                    (*g_49) = (*p_25);
                }
            }
            else
            {
                uint32_t l_399 = 4294967295U;
                struct S0 **l_402 = &g_384;
                int32_t **l_403 = &g_50;
                int32_t *l_404 = (void*)0;
                l_404 = (*l_403);
                ((void) sizeof ((l_404 == 0 || l_404 == &g_55 || l_404 == &g_4 || l_404 == &g_8) ? 1 : 0), __extension__ ({ if (l_404 == 0 || l_404 == &g_55 || l_404 == &g_4 || l_404 == &g_8) ; else __assert_fail ("l_404 == 0 || l_404 == &g_55 || l_404 == &g_4 || l_404 == &g_8", "/tmp/tmp2r_czfa9.c", 343, __extension__ __PRETTY_FUNCTION__); }));
                (*l_357) = (*g_384);
                for (l_399 = 0; (l_399 != 38); ++l_399)
                {
                    l_336 = ((*l_403) == (void*)0);
                    (*l_357) = (g_210.f0 , l_407);
                }
            }
            if (((l_408 == (safe_lshift_func_uint8_t_u_s(5U, 5))) ^ ((((void*)0 != l_411) != (((**l_349) == (void*)0) <= ((safe_rshift_func_int8_t_s_u((&l_327 != &g_171), 2)) & 9))) == (*l_325))))
            {
                int8_t l_422 = 0;
                int32_t **l_448 = (void*)0;
                (*l_350) = (((safe_add_func_uint8_t_u_u(((((safe_lshift_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_s(((void*)0 == &g_172), 10)) || (safe_mod_func_uint8_t_u_u(((0U | l_422) , ((*p_25) == ((((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(((safe_unary_minus_func_int32_t_s(l_422)) && ((0x38 <= ((safe_rshift_func_uint8_t_u_s((safe_add_func_uint16_t_u_u(g_210.f1, (((safe_sub_func_int16_t_s_s(((safe_mod_func_uint32_t_u_u(p_26, g_210.f0)) ^ 0x237EF3F9), g_8)) < g_232) >= 0x32B89AA0))), 4)) , g_210.f1)) > l_422)), 5)), p_26)), 2)), 5)) , g_232) < 0xA5) , (void*)0))), g_8))), 9)) >= 0x0BF1E8D4) | g_210.f0) | g_51), 249U)) < p_26) > p_26);
                (*l_350) = (safe_sub_func_int32_t_s_s(((*l_325) & p_26), 0x8AEEBAF7));
                (*l_350) = ((((((g_210.f1 | (safe_rshift_func_uint16_t_u_s((((&p_25 == (void*)0) > (((4294967291U | ((safe_add_func_uint16_t_u_u((p_26 < (safe_lshift_func_int8_t_s_s((((**g_383) , ((*g_172) != l_448)) & ((safe_lshift_func_uint8_t_u_s((((*l_325) == (*l_325)) , 250U), 4)) > p_26)), 5))), p_26)) , (*l_325))) | 0x442A) < 0xC3A3)) || (*l_350)), (*l_350)))) > p_26) > (-7)) , g_210.f0) , l_451) | 0xB053);
            }
            else
            {
                int32_t *l_452 = &g_55;
                int32_t *****l_461 = &l_327;
                (*g_49) = l_452;
                ((void) sizeof ((g_50 == &g_55) ? 1 : 0), __extension__ ({ if (g_50 == &g_55) ; else __assert_fail ("g_50 == &g_55", "/tmp/tmp2r_czfa9.c", 365, __extension__ __PRETTY_FUNCTION__); }));
                (*g_171) = ((safe_add_func_uint32_t_u_u(p_26, (safe_sub_func_int16_t_s_s(((&g_172 != (void*)0) & (*l_350)), ((g_210.f0 , (**g_383)) , (safe_add_func_int32_t_s_s((safe_add_func_uint32_t_u_u((l_461 != (void*)0), (safe_add_func_uint8_t_u_u((*l_350), g_55)))), 0xF2563870))))))) , (*g_171));
            }
        }
    }
    for (l_310 = 0; (l_310 != 25); l_310 = safe_add_func_uint32_t_u_u(l_310, 1))
    {
        uint8_t l_484 = 0x7B;
        int32_t l_485 = 0xD62752A0;
        int32_t *l_486 = &l_334;
        for (l_334 = 26; (l_334 >= (-3)); l_334--)
        {
            int32_t l_474 = 3;
            (**g_383) = (((safe_add_func_int16_t_s_s(8, 2U)) | (safe_lshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u((l_474 , p_26), (safe_lshift_func_uint8_t_u_s((p_26 <= ((safe_sub_func_uint16_t_u_u((((safe_mod_func_int8_t_s_s(0x94, g_210.f1)) , (p_26 || (safe_rshift_func_int8_t_s_s(g_34, l_474)))) , g_8), 0x0A29)) , (-1))), g_51)))), 4))) , l_407);
            return l_483;
        }
        l_485 = l_484;
        (*l_486) = l_485;
    }
    if ((~(safe_rshift_func_uint16_t_u_u(((void*)0 != &g_172), 4))))
    {
        int32_t *l_490 = &l_334;
        (***g_171) = (p_26 , (*p_25));
        (*p_25) = (***g_171);
        (*g_153) = (**g_172);
    }
    else
    {
        (*g_49) = (***l_327);
    }
    (*l_497) = (((((((((safe_mod_func_int16_t_s_s(((((safe_rshift_func_uint8_t_u_u(l_495, ((*g_49) != (void*)0))) & ((safe_unary_minus_func_uint32_t_u(((*l_325) == ((*l_483) | g_210.f2)))) == (((*l_327) != &p_25) , 0xA2))) >= (-1)) , (-10)), g_210.f2)) , p_26) && 0x7EDE) == p_26) ^ (*l_325)) < 8) , (void*)0) == (void*)0) & g_210.f2);
    return (**g_172);
}
inline static int32_t ** func_27(int32_t ** p_28, int32_t ** p_29)
{
    struct S0 *l_284 = &g_210;
    int32_t l_287 = 0x78925770;
    int32_t *****l_308 = &g_171;
    int32_t ****l_309 = (void*)0;
    (*l_284) = g_210;
    g_210.f2 = (safe_mod_func_int32_t_s_s((((l_287 >= (((((((((void*)0 == l_284) & (safe_mod_func_int8_t_s_s(((l_287 ^ (safe_mod_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s((((((safe_unary_minus_func_int16_t_s((safe_rshift_func_uint16_t_u_s((safe_sub_func_int8_t_s_s(l_287, (safe_lshift_func_uint8_t_u_s((safe_add_func_uint16_t_u_u(((((+(((((safe_rshift_func_int16_t_s_u(((l_287 == l_287) , ((safe_sub_func_int32_t_s_s((**p_29), ((*p_29) != (**g_172)))) & l_287)), 15)) < 0xB1) > 1) > 0xF511DB53) && g_232)) , (*l_284)) , 0x57D3) , l_287), 0U)), 3)))), g_51)))) , (**p_29)) , l_308) == &g_171) <= g_51), g_210.f0)), 1))) | 4294967295U), g_8))) , (**g_171)) != (**g_171)) , l_309) == &g_172) , g_34) ^ 0xAF)) , g_232) ^ g_8), 5));
    return p_29;
}
static int32_t ** func_30(uint32_t p_31, uint32_t p_32, int32_t * p_33)
{
    struct S0 *l_235 = (void*)0;
    struct S0 *l_236 = &g_210;
    int32_t **l_243 = (void*)0;
    int32_t l_246 = 0xEAC38ED0;
    int32_t l_269 = 0x590174D8;
    (*l_236) = g_210;
    if ((safe_mod_func_int32_t_s_s((safe_rshift_func_int16_t_s_s((safe_add_func_uint16_t_u_u(((*g_172) != l_243), ((safe_mod_func_uint16_t_u_u(((l_246 > p_32) <= (((void*)0 == (***g_171)) > (safe_rshift_func_int8_t_s_u((safe_add_func_int32_t_s_s((*p_33), ((((safe_sub_func_uint8_t_u_u((safe_unary_minus_func_int8_t_s(((safe_rshift_func_int16_t_s_u(p_31, 13)) >= (safe_mod_func_uint16_t_u_u(((void*)0 != &g_210), p_31))))), p_31)) & p_31) > 0x5844) > g_210.f0))), g_51)))), p_32)) & 65526U))), g_210.f0)), 0x6DFE7475)))
    {
        int32_t *l_258 = &g_55;
        (*g_153) = l_258;
        ((void) sizeof ((g_50 == &g_55) ? 1 : 0), __extension__ ({ if (g_50 == &g_55) ; else __assert_fail ("g_50 == &g_55", "/tmp/tmp2r_czfa9.c", 443, __extension__ __PRETTY_FUNCTION__); }));
    }
    else
    {
        int32_t l_264 = (-7);
        int32_t *l_283 = (void*)0;
        l_246 = (safe_mod_func_int8_t_s_s(0x09, (((((((((0xD591 && (!l_264)) | (safe_lshift_func_int8_t_s_u(0x18, 7))) != (0xC18B > l_264)) > ((safe_rshift_func_int16_t_s_u(l_264, 9)) >= l_269)) || ((((safe_mod_func_uint16_t_u_u((((safe_rshift_func_int8_t_s_s(((safe_mod_func_uint8_t_u_u(((((+(safe_add_func_int16_t_s_s(((safe_sub_func_uint16_t_u_u((((safe_add_func_int8_t_s_s(((((*p_33) | 0x6C1B368D) > 0) || p_31), l_264)) & g_34) | 255U), p_31)) && p_32), l_246))) >= 4294967291U) >= 1) | 0x5C1140D0), 0x6D)) | (*p_33)), 2)) | p_32) < l_264), g_232)) <= p_32) , (void*)0) == (void*)0)) < 1U) , &g_172) != &g_172) ^ g_232)));
        (***g_171) = l_283;
        ((void) sizeof ((g_50 == 0) ? 1 : 0), __extension__ ({ if (g_50 == 0) ; else __assert_fail ("g_50 == 0", "/tmp/tmp2r_czfa9.c", 452, __extension__ __PRETTY_FUNCTION__); }));
    }
    ((void) sizeof ((g_50 == 0 || g_50 == &g_55) ? 1 : 0), __extension__ ({ if (g_50 == 0 || g_50 == &g_55) ; else __assert_fail ("g_50 == 0 || g_50 == &g_55", "/tmp/tmp2r_czfa9.c", 455, __extension__ __PRETTY_FUNCTION__); }));
    return l_243;
}
inline static int32_t * func_35(int32_t * p_36, int32_t ** p_37)
{
    int32_t **l_61 = &g_50;
    int32_t *l_234 = &g_8;
    (*g_153) = func_57(l_61, (*p_37), l_61);
    ((void) sizeof ((g_50 == 0 || g_50 == &g_8) ? 1 : 0), __extension__ ({ if (g_50 == 0 || g_50 == &g_8) ; else __assert_fail ("g_50 == 0 || g_50 == &g_8", "/tmp/tmp2r_czfa9.c", 473, __extension__ __PRETTY_FUNCTION__); }));
    (***g_171) = (*g_153);
    return l_234;
}
inline static uint8_t func_46(int32_t ** p_47, int32_t ** p_48)
{
    uint32_t l_56 = 1U;
    for (g_51 = 23; (g_51 != (-19)); g_51 = safe_sub_func_uint32_t_u_u(g_51, 3))
    {
        int32_t *l_54 = &g_55;
        (*l_54) = (**p_47);
    }
    return l_56;
}
static int32_t * func_57(int32_t ** p_58, int32_t * p_59, int32_t ** p_60)
{
    int32_t l_65 = 0;
    struct S0 l_201 = {13,1127,15960};
    int32_t *****l_208 = &g_171;
    int32_t *****l_209 = &g_171;
    uint32_t l_227 = 4294967290U;
    if (((+g_34) | (**p_60)))
    {
        uint16_t l_66 = 65528U;
        int32_t l_70 = 0x64A3A207;
        struct S0 *l_202 = &l_201;
        int32_t *l_211 = &l_70;
        (*l_202) = (((((safe_mod_func_uint8_t_u_u((l_65 || l_66), (l_66 || func_46((func_46((((&p_59 == (void*)0) ^ (&p_59 != (void*)0)) , func_67(l_65, ((**p_58) , l_70))), (*g_172)) , (**g_171)), (**g_171))))) || (**p_60)) , (-10)) ^ g_4) , l_201);
        for (l_65 = (-11); (l_65 > (-7)); ++l_65)
        {
            uint32_t l_207 = 4294967292U;
            (*l_202) = ((safe_lshift_func_uint16_t_u_s(0x0EB1, l_201.f0)) , (((l_207 , l_208) != l_209) , g_210));
            (****l_208) = (void*)0;
            ((void) sizeof ((g_50 == 0) ? 1 : 0), __extension__ ({ if (g_50 == 0) ; else __assert_fail ("g_50 == 0", "/tmp/tmp2r_czfa9.c", 523, __extension__ __PRETTY_FUNCTION__); }));
            if (l_70)
                continue;
            if ((*p_59))
                break;
        }
        ((void) sizeof ((g_50 == 0 || g_50 == &g_8) ? 1 : 0), __extension__ ({ if (g_50 == 0 || g_50 == &g_8) ; else __assert_fail ("g_50 == 0 || g_50 == &g_8", "/tmp/tmp2r_czfa9.c", 530, __extension__ __PRETTY_FUNCTION__); }));
        (*l_211) = (*p_59);
    }
    else
    {
        uint32_t l_217 = 0x94EBA6C6;
        int32_t *l_218 = &g_55;
        int32_t *****l_223 = &g_171;
        (***g_171) = (void*)0;
        ((void) sizeof ((g_50 == 0) ? 1 : 0), __extension__ ({ if (g_50 == 0) ; else __assert_fail ("g_50 == 0", "/tmp/tmp2r_czfa9.c", 540, __extension__ __PRETTY_FUNCTION__); }));
        (*l_218) = ((((((~((safe_lshift_func_int8_t_s_s((((((safe_sub_func_uint16_t_u_u(((((0 != g_210.f0) || (l_217 != ((void*)0 != l_218))) == (safe_sub_func_uint8_t_u_u((((safe_sub_func_int8_t_s_s((*l_218), ((l_223 == l_208) , ((safe_lshift_func_uint8_t_u_s((~(*p_59)), g_8)) || 0x1E08)))) & g_210.f2) >= g_34), 0x82))) , 1U), g_34)) < 3U) <= g_55) , g_210.f0) <= 65535U), 4)) || 0xED5A7014)) | (*l_218)) == l_227) >= 1) ^ l_201.f2) > 0U);
        (*l_218) = (safe_lshift_func_uint16_t_u_u(((((0x34AE | ((*l_218) >= ((*p_59) != (*p_59)))) , (*l_223)) == &g_172) & (safe_rshift_func_uint8_t_u_s(g_232, (safe_unary_minus_func_uint8_t_u((((****l_223) == (void*)0) != 4294967290U)))))), 0));
    }
    ((void) sizeof ((g_50 == 0 || g_50 == &g_8) ? 1 : 0), __extension__ ({ if (g_50 == 0 || g_50 == &g_8) ; else __assert_fail ("g_50 == 0 || g_50 == &g_8", "/tmp/tmp2r_czfa9.c", 545, __extension__ __PRETTY_FUNCTION__); }));
    return (*p_60);
}
inline static int32_t ** func_67(uint32_t p_68, uint8_t p_69)
{
    int32_t l_79 = 1;
    int32_t **l_87 = (void*)0;
    int32_t l_199 = 1;
    int32_t *l_200 = &g_55;
    (*l_200) = ((safe_mod_func_uint8_t_u_u(7U, func_46(func_73((safe_mod_func_uint16_t_u_u((((void*)0 == &g_50) && l_79), g_8)), &g_50, ((safe_sub_func_uint16_t_u_u(0x6DF4, (((+((safe_sub_func_int32_t_s_s((*g_50), (safe_mod_func_uint16_t_u_u((((((l_87 != l_87) | p_69) && g_4) ^ g_34) | g_51), 0x4C7B)))) , 1U)) | 1) , 0U))) > g_34)), l_87))) & l_199);
    (*g_153) = (***g_171);
    l_200 = (***g_171);
    ((void) sizeof ((l_200 == &g_8) ? 1 : 0), __extension__ ({ if (l_200 == &g_8) ; else __assert_fail ("l_200 == &g_8", "/tmp/tmp2r_czfa9.c", 567, __extension__ __PRETTY_FUNCTION__); }));
    (**g_172) = (*g_49);
    return (*g_172);
}
static int32_t ** func_73(uint32_t p_74, int32_t ** p_75, int32_t p_76)
{
    int16_t l_90 = 0x0ABB;
    int32_t *l_91 = &g_55;
    struct S0 l_92 = {8,2216,-15523};
    int32_t *l_95 = &g_55;
    uint32_t l_148 = 0U;
    int32_t ***l_151 = &g_49;
    int32_t ****l_164 = &l_151;
    (*l_91) = ((l_90 | (l_90 < 0x8D6F)) != g_55);
    return p_75;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_4;
    csmith_sink_ = g_8;
    csmith_sink_ = g_34;
    csmith_sink_ = g_51;
    csmith_sink_ = g_55;
    csmith_sink_ = g_210.f0;
    csmith_sink_ = g_210.f1;
    csmith_sink_ = g_210.f2;
    csmith_sink_ = g_232;
    csmith_sink_ = g_582;
    csmith_sink_ = g_599;
    platform_main_end(0,0);
    return 0;
}
