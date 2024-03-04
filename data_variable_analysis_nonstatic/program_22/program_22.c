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
static uint8_t g_4 = 0x1E;
static int32_t g_7 = 0xF8256A9E;
static uint32_t g_59 = 0U;
static int8_t g_60 = 0x36;
static int32_t g_84 = 0x67A065BB;
static int32_t *g_88 = &g_7;
static int8_t *g_99 = &g_60;
static int8_t **g_98 = &g_99;
static uint32_t g_106 = 4294967291U;
static uint32_t g_108 = 4294967287U;
static uint8_t g_171 = 0xAA;
static int8_t ***g_202 = (void*)0;
static int8_t ****g_201 = &g_202;
static uint32_t *g_213 = &g_108;
static int16_t g_215 = 0xC709;
static int16_t **g_266 = (void*)0;
static uint16_t g_323 = 0x8D20;
static int32_t g_361 = 0x49030FC9;
static uint8_t g_367 = 255U;
static uint32_t *g_471 = &g_108;
static int8_t g_481 = 1;
static uint16_t g_583 = 0x5BBA;
static int32_t **g_622 = (void*)0;
static uint8_t g_669 = 0U;
static uint16_t *g_675 = &g_583;
static uint16_t **g_674 = &g_675;
static uint16_t ***g_673 = &g_674;
static uint16_t g_682 = 0x4EFB;
static uint16_t g_707 = 0U;
static int16_t ***g_788 = &g_266;
static uint32_t g_790 = 0xBE39338C;
static uint16_t func_1(void);
static int32_t * func_8(int32_t * p_9, int8_t p_10, int32_t p_11, int32_t p_12, int32_t * p_13);
static int32_t * func_14(int32_t p_15, int16_t p_16, uint32_t p_17, uint32_t p_18, uint32_t p_19);
static uint32_t func_20(int32_t p_21, uint32_t p_22, int8_t p_23, int32_t p_24);
static uint32_t func_25(uint32_t p_26);
static int32_t func_27(int32_t * p_28, int32_t p_29, int32_t p_30, int8_t p_31);
static int32_t func_32(int32_t * p_33, int32_t * p_34, uint32_t p_35, int8_t p_36, int32_t * p_37);
static int32_t * func_38(int8_t p_39);
static int32_t * func_41(int32_t * p_42);
static uint32_t func_52(uint32_t p_53, uint32_t p_54);
static uint16_t func_1(void)
{
    int32_t *l_5 = (void*)0;
    int32_t *l_6 = &g_7;
    int32_t **l_255 = &g_88;
    int16_t *l_258 = (void*)0;
    int16_t *l_259 = (void*)0;
    int16_t *l_260 = &g_215;
    int16_t l_261 = 0x448C;
    int32_t l_263 = 1;
    int8_t l_842 = 0x34;
    uint8_t l_851 = 0xC1;
    (*l_6) = (safe_lshift_func_int16_t_s_s(g_4, 7));
    (*l_255) = func_8(func_14((func_20(g_4, ((*g_471) = ((func_25((func_27(l_6, func_32(((*l_255) = func_38(g_7)), l_6, g_106, (((safe_div_func_int16_t_s_s(((*l_260) = (0x03 != ((void*)0 == &g_106))), 0xDAB0)) < 0xE4936EB0) > l_261), l_6), l_261, l_263) != 0xC18CA032)) && (*g_471)) <= g_4)), l_263, g_790) && (*l_6)), g_4, l_842, l_842, g_790), l_851, g_106, g_106, g_213);
    ((void) sizeof ((g_88 == &g_84) ? 1 : 0), __extension__ ({ if (g_88 == &g_84) ; else __assert_fail ("g_88 == &g_84", "/tmp/tmp1htdq842.c", 88, __extension__ __PRETTY_FUNCTION__); }));
    ((void) sizeof ((g_622 == 0 || g_622 == &g_88) ? 1 : 0), __extension__ ({ if (g_622 == 0 || g_622 == &g_88) ; else __assert_fail ("g_622 == 0 || g_622 == &g_88", "/tmp/tmp1htdq842.c", 90, __extension__ __PRETTY_FUNCTION__); }));
    return (*g_675);
}
static int32_t * func_8(int32_t * p_9, int8_t p_10, int32_t p_11, int32_t p_12, int32_t * p_13)
{
    uint16_t ****l_853 = &g_673;
    uint16_t *****l_852 = &l_853;
    int32_t l_863 = 1;
    int32_t l_883 = 1;
    int32_t *l_887 = &l_883;
    int32_t *l_888 = &g_84;
    if ((&g_88 != &g_88))
    {
        uint8_t *l_854 = &g_171;
        int32_t l_855 = (-1);
        int32_t l_856 = 0x41F11E86;
        l_856 = ((l_855 = ((*****l_852) = (p_12 && (252U <= ((*l_854) = ((void*)0 != l_852)))))) != (p_10 <= p_10));
    }
    else
    {
        uint16_t l_882 = 0x58B9;
        uint8_t *l_884 = &g_669;
        int32_t **l_885 = (void*)0;
        int32_t *l_886 = &g_361;
        l_886 = func_14(g_215, (safe_mod_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(((*g_99) = l_863), ((void*)0 != p_9))), ((*l_884) = (safe_rshift_func_int8_t_s_s((((safe_lshift_func_uint16_t_u_u((~((safe_rshift_func_int8_t_s_u(((safe_sub_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u(((((*p_9) = ((-3) | (-1))) ^ (*g_213)) <= (l_883 = (safe_mul_func_uint16_t_u_u((safe_unary_minus_func_uint32_t_u((~(+(safe_div_func_int32_t_s_s((0x5369 != l_882), 0x175030C4)))))), g_682)))), (**g_674))), l_863)) && 0xBF), 3)) == 0xEE3C)), p_12)) | 0) ^ p_12), p_10))))), 0xA2)), p_10, p_11, p_12);
        ((void) sizeof ((l_886 == &g_84) ? 1 : 0), __extension__ ({ if (l_886 == &g_84) ; else __assert_fail ("l_886 == &g_84", "/tmp/tmp1htdq842.c", 123, __extension__ __PRETTY_FUNCTION__); }));
        return &g_84;
    }
    (*g_788) = (void*)0;
    ((void) sizeof ((g_266 == 0) ? 1 : 0), __extension__ ({ if (g_266 == 0) ; else __assert_fail ("g_266 == 0", "/tmp/tmp1htdq842.c", 130, __extension__ __PRETTY_FUNCTION__); }));
    return l_888;
}
static int32_t * func_14(int32_t p_15, int16_t p_16, uint32_t p_17, uint32_t p_18, uint32_t p_19)
{
    int32_t l_845 = 0xF2BB46EC;
    int32_t l_848 = 0x45B6C2B0;
    int32_t l_849 = 1;
    int32_t *l_850 = &g_361;
    l_849 = (((*g_471) = ((*g_675) >= ((**g_98) == (safe_mul_func_int8_t_s_s(((l_845 == ((-1) ^ l_845)) ^ ((safe_add_func_int8_t_s_s((l_848 = (0x537F < (0U <= p_16))), l_845)) && (*g_99))), 1))))) <= 0x3DA583C4);
    l_850 = &l_848;
    ((void) sizeof ((l_850 == &l_848) ? 1 : 0), __extension__ ({ if (l_850 == &l_848) ; else __assert_fail ("l_850 == &l_848", "/tmp/tmp1htdq842.c", 151, __extension__ __PRETTY_FUNCTION__); }));
    return &g_84;
}
static uint32_t func_20(int32_t p_21, uint32_t p_22, int8_t p_23, int32_t p_24)
{
    int32_t *l_840 = &g_7;
    int32_t **l_841 = &g_88;
    l_840 = func_41(l_840);
    p_24 = ((*l_840) < (*l_840));
    (*l_841) = &p_24;
    ((void) sizeof ((g_88 == &p_24) ? 1 : 0), __extension__ ({ if (g_88 == &p_24) ; else __assert_fail ("g_88 == &p_24", "/tmp/tmp1htdq842.c", 171, __extension__ __PRETTY_FUNCTION__); }));
    (*l_840) = p_24;
    return p_22;
}
static uint32_t func_25(uint32_t p_26)
{
    int16_t l_285 = 0x60B7;
    int32_t l_307 = (-5);
    int32_t l_309 = 1;
    int32_t l_310 = 1;
    int16_t *l_312 = &g_215;
    int16_t **l_311 = &l_312;
    int8_t ***l_328 = &g_98;
    uint32_t l_331 = 0xCD07D77F;
    int8_t *****l_359 = &g_201;
    uint8_t l_360 = 1U;
    uint32_t l_382 = 0x1FA6DF7B;
    uint16_t *l_406 = &g_323;
    uint16_t **l_405 = &l_406;
    uint16_t ***l_404 = &l_405;
    int32_t **l_417 = (void*)0;
    uint32_t *l_592 = &g_59;
    int32_t *l_684 = &g_7;
    uint8_t l_758 = 1U;
    uint16_t l_797 = 0xB0A5;
    int32_t *l_800 = (void*)0;
    int8_t l_813 = (-2);
    if (p_26)
    {
        int16_t *l_276 = &g_215;
        int32_t l_286 = 0;
        int16_t l_304 = 1;
        int16_t *l_305 = (void*)0;
        int16_t *l_306 = &l_304;
        int32_t l_308 = (-1);
        int16_t ***l_313 = &g_266;
        int16_t ***l_314 = (void*)0;
        int16_t ***l_315 = (void*)0;
        int16_t ***l_316 = &g_266;
        int16_t ***l_317 = &g_266;
        int16_t ***l_318 = &g_266;
        int16_t ***l_319 = &g_266;
        int16_t **l_320 = &l_305;
        uint16_t *l_321 = (void*)0;
        uint16_t *l_322 = &g_323;
        int8_t l_334 = 0x5E;
        uint16_t ****l_407 = &l_404;
        l_310 = ((safe_sub_func_int32_t_s_s(0x3B09B231, ((l_309 = ((safe_sub_func_uint16_t_u_u((safe_unary_minus_func_uint32_t_u((safe_lshift_func_uint8_t_u_s(((((safe_rshift_func_int16_t_s_u(((*l_276) = 1), (safe_rshift_func_uint16_t_u_s((65529U ^ (safe_mod_func_int16_t_s_s(((((l_307 = (safe_lshift_func_uint8_t_u_s(((l_286 = (safe_mod_func_int16_t_s_s((l_285 == ((((*g_99) = (l_286 | (safe_mul_func_int16_t_s_s((safe_add_func_uint32_t_u_u((safe_sub_func_int16_t_s_s((safe_mul_func_int16_t_s_s(((((*l_306) = (((p_26 >= ((safe_mul_func_int8_t_s_s((!(g_4 <= (p_26 < (((*g_213) = (safe_mul_func_uint16_t_u_u((((((safe_mod_func_uint16_t_u_u((g_84 < p_26), l_286)) || 0x5DCD) > 4294967292U) ^ l_304) == l_285), 65535U))) > 3U)))), l_285)) && g_108)) | l_285) || p_26)) >= 0x6808) & 0xFB), 0x4F0A)), 0x8032)), p_26)), l_286)))) | 0x0D) > l_285)), l_286))) > p_26), 2))) ^ g_4) <= p_26) || 0x8BC2CC7A), l_285))), l_308)))) > 255U) < 0) < p_26), 7)))), 0xD76B)) & p_26)) & 0x9D7B))) == p_26);
        if ((0x54 > (((l_311 != (l_320 = &l_276)) <= ((*l_322) = (l_304 > ((**g_98) = 0)))) <= (l_308 = (safe_sub_func_int8_t_s_s((safe_sub_func_int16_t_s_s(((l_328 != (void*)0) && (safe_rshift_func_uint8_t_u_s((((l_331 = p_26) > ((((safe_sub_func_int8_t_s_s(((g_84 | l_309) || l_304), 0x6D)) <= p_26) | l_304) >= (*g_213))) && (*g_213)), 1))), l_334)), g_108))))))
        {
            int32_t **l_335 = &g_88;
            int32_t l_377 = 0xECEB42AD;
            (*l_335) = &g_84;
            ((void) sizeof ((g_88 == &g_84) ? 1 : 0), __extension__ ({ if (g_88 == &g_84) ; else __assert_fail ("g_88 == &g_84", "/tmp/tmp1htdq842.c", 234, __extension__ __PRETTY_FUNCTION__); }));
            for (l_309 = 0; (l_309 >= 2); l_309 = safe_add_func_int16_t_s_s(l_309, 4))
            {
                int8_t *****l_358 = &g_201;
                int32_t l_381 = (-1);
                int32_t l_384 = 0x934A2F95;
                uint16_t **l_399 = &l_322;
                for (g_171 = (-25); (g_171 > 45); g_171++)
                {
                    uint8_t l_370 = 255U;
                    int8_t **l_380 = (void*)0;
                }
                l_384 = (l_381 = 0x57E15355);
                (*g_88) = (safe_mod_func_int16_t_s_s((safe_add_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s(((safe_rshift_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_u(p_26, (safe_add_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(p_26, (l_276 == ((*l_399) = &g_323)))), ((**l_335) || (p_26 == ((**l_311) = (l_335 != l_335)))))))) >= ((void*)0 == &g_266)), (**l_335))) || (-3)), l_334)), p_26)), 65535U));
            }
        }
        else
        {
            int16_t l_402 = (-3);
            int32_t *l_403 = &l_309;
            (*l_403) = (((void*)0 != &l_334) | (safe_mod_func_int8_t_s_s(l_402, l_331)));
        }
        ((void) sizeof ((g_88 == 0 || g_88 == &g_84) ? 1 : 0), __extension__ ({ if (g_88 == 0 || g_88 == &g_84) ; else __assert_fail ("g_88 == 0 || g_88 == &g_84", "/tmp/tmp1htdq842.c", 257, __extension__ __PRETTY_FUNCTION__); }));
        ((void) sizeof ((l_320 == &l_276) ? 1 : 0), __extension__ ({ if (l_320 == &l_276) ; else __assert_fail ("l_320 == &l_276", "/tmp/tmp1htdq842.c", 258, __extension__ __PRETTY_FUNCTION__); }));
        (*l_407) = l_404;
    }
    else
    {
        uint8_t l_427 = 0xCB;
        int32_t l_428 = 0x493F1009;
        uint32_t l_431 = 0xDB553EA4;
        uint32_t l_504 = 4294967295U;
        int8_t ***l_506 = &g_98;
        uint16_t ****l_517 = (void*)0;
        uint32_t l_618 = 4294967292U;
        int16_t l_621 = 0;
        int32_t l_658 = 1;
        int32_t *l_659 = (void*)0;
        int32_t *l_660 = &l_658;
        int32_t l_663 = 0;
        uint32_t l_731 = 1U;
        if ((safe_rshift_func_int8_t_s_u(l_331, l_307)))
        {
            int32_t **l_416 = (void*)0;
            int32_t ***l_418 = &l_417;
            int32_t *l_425 = (void*)0;
            int32_t *l_426 = &g_361;
            g_7 = (safe_rshift_func_int8_t_s_s((p_26 >= ((safe_add_func_uint16_t_u_u(p_26, ((safe_sub_func_uint8_t_u_u(((l_416 = (void*)0) == ((*l_418) = l_417)), g_361)) || p_26))) || ((**l_311) = (((safe_sub_func_uint8_t_u_u((safe_div_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((((0U < (l_427 = (((*l_426) = (l_307 = (((((l_360 > (p_26 != p_26)) || g_323) || p_26) ^ p_26) == p_26))) <= p_26))) > (*g_99)) == 3U), l_428)), l_331)), p_26)) > p_26) > (-1))))), 4));
            l_431 = (safe_rshift_func_int16_t_s_s((g_60 && ((*l_406) = 0U)), 10));
        }
        else
        {
            int32_t *l_432 = &l_428;
            int32_t **l_433 = &g_88;
            int8_t l_436 = 0x68;
            int16_t l_502 = 0x8B32;
            uint16_t *l_555 = &g_323;
            int32_t l_564 = 1;
            uint32_t l_584 = 4294967294U;
            uint8_t *l_623 = &l_427;
            uint8_t *l_635 = &g_367;
            int32_t *l_636 = &g_7;
            int32_t l_657 = 1;
            (*l_433) = func_41(l_432);
            ((void) sizeof ((g_88 == &l_428 || g_88 == &g_7) ? 1 : 0), __extension__ ({ if (g_88 == &l_428 || g_88 == &g_7) ; else __assert_fail ("g_88 == &l_428 || g_88 == &g_7", "/tmp/tmp1htdq842.c", 300, __extension__ __PRETTY_FUNCTION__); }));
            if (((*g_88) = (((safe_div_func_int16_t_s_s(l_436, (**l_433))) == (*g_88)) || (safe_lshift_func_int8_t_s_u(((+(p_26 & (0x4D117C2A < (safe_sub_func_int16_t_s_s(((g_367 = p_26) ^ ((safe_sub_func_uint16_t_u_u(((-1) == 7), (safe_sub_func_uint16_t_u_u((safe_div_func_uint32_t_u_u((**l_433), p_26)), 0U)))) > 255U)), l_427))))) & (**l_433)), 0)))))
            {
                int16_t **l_464 = &l_312;
                int32_t l_484 = 0x22EA5CE5;
                int32_t l_503 = 1;
                uint16_t *l_512 = &g_323;
                uint16_t ****l_516 = &l_404;
                uint16_t l_518 = 0x12B4;
                int8_t *****l_526 = (void*)0;
                (*l_432) = (-1);
                for (l_360 = 16; (l_360 != 46); l_360 = safe_add_func_int16_t_s_s(l_360, 3))
                {
                    uint16_t l_489 = 1U;
                    uint16_t l_505 = 1U;
                    int8_t ***l_507 = &g_98;
                    for (g_171 = 12; (g_171 != 25); g_171 = safe_add_func_int8_t_s_s(g_171, 1))
                    {
                        int16_t ***l_465 = (void*)0;
                        int16_t ***l_466 = (void*)0;
                        int16_t ***l_467 = &l_311;
                        uint8_t *l_468 = &g_367;
                        int32_t l_476 = 0x73E1BCF0;
                        int32_t **l_482 = &g_88;
                        g_361 = (((safe_lshift_func_uint16_t_u_u((((*g_213) = ((safe_add_func_uint16_t_u_u((safe_add_func_int32_t_s_s(0x60E0F07E, ((**l_433) = ((safe_add_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_s(0x0C, 5)) ^ ((*g_99) = (&l_312 == ((*l_467) = l_464)))), 255U)) == (((*l_468) = 249U) && (safe_add_func_int16_t_s_s((((&g_108 == g_471) == (safe_sub_func_uint32_t_u_u((safe_add_func_uint32_t_u_u((*g_471), l_428)), (-4)))) || p_26), p_26))))))), l_476)) >= p_26)) <= p_26), 7)) != 0x8E) || 0xAA6D);
                        if ((*g_88))
                            continue;
                        (*g_88) = (safe_sub_func_uint32_t_u_u(5U, (safe_mod_func_uint32_t_u_u((g_481 ^ (((l_482 = &g_88) == &g_88) || p_26)), 5U))));
                        g_361 = ((+(((((g_59 || (l_484 <= (safe_div_func_int16_t_s_s((((((*g_88) = p_26) != (((safe_div_func_int32_t_s_s(l_489, (g_367 || (safe_sub_func_uint8_t_u_u((((***l_467) = p_26) <= (((safe_sub_func_uint16_t_u_u(((**l_405) = ((safe_add_func_uint8_t_u_u(((p_26 <= ((((safe_rshift_func_uint16_t_u_u((p_26 || ((safe_mod_func_int32_t_s_s((((safe_lshift_func_int8_t_s_s((l_431 || p_26), l_427)) > l_502) <= p_26), l_503)) ^ l_489)), 0)) <= g_171) <= 0x2C) >= p_26)) & (*g_213)), 0x1C)) & 0x1C)), l_431)) || p_26) != 0xFA)), l_504))))) == 1U) | 0x747FD3BF)) <= p_26) > g_84), l_504)))) && l_505) < g_171) != g_481) != p_26)) || (*g_88));
                    }
                    l_507 = l_506;
                }
                for (l_503 = 0; (l_503 < 24); ++l_503)
                {
                    uint16_t ****l_515 = &l_404;
                    int32_t **l_522 = (void*)0;
                    uint32_t *l_527 = &l_331;
                }
            }
            else
            {
                int32_t l_582 = (-1);
                int32_t *l_585 = &l_310;
                int32_t *l_586 = &l_309;
                (*l_586) = ((0xB3 == (safe_mod_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(p_26, ((safe_mod_func_uint32_t_u_u((((*l_585) = ((**l_433) = ((safe_add_func_int32_t_s_s((((void*)0 != &g_266) > (safe_mul_func_uint16_t_u_u(((g_583 = (safe_sub_func_int16_t_s_s((((**l_405) = (~(((*g_98) != (void*)0) && 0x2F))) == ((safe_rshift_func_int8_t_s_s((l_582 == (&l_428 == (void*)0)), 4)) > 0xABF6)), p_26))) > g_367), 1))), l_584)) && (-1)))) != (*g_213)), p_26)) && (**g_98)))), g_4))) & 0x79605CF9);
                (*l_433) = func_41(l_585);
                ((void) sizeof ((g_88 == &l_310 || g_88 == &g_7) ? 1 : 0), __extension__ ({ if (g_88 == &l_310 || g_88 == &g_7) ; else __assert_fail ("g_88 == &l_310 || g_88 == &g_7", "/tmp/tmp1htdq842.c", 347, __extension__ __PRETTY_FUNCTION__); }));
                (*l_586) = ((*l_585) = (*g_88));
                for (l_331 = (-22); (l_331 <= 34); ++l_331)
                {
                    int32_t *l_593 = &l_564;
                    int16_t **l_594 = &l_312;
                    int32_t *l_597 = &g_7;
                    for (l_382 = 20; (l_382 >= 60); l_382 = safe_add_func_int32_t_s_s(l_382, 3))
                    {
                        int32_t *l_591 = &l_307;
                        l_585 = l_591;
                        ((void) sizeof ((l_585 == &l_307) ? 1 : 0), __extension__ ({ if (l_585 == &l_307) ; else __assert_fail ("l_585 == &l_307", "/tmp/tmp1htdq842.c", 359, __extension__ __PRETTY_FUNCTION__); }));
                        (*l_433) = l_593;
                        ((void) sizeof ((g_88 == &l_564) ? 1 : 0), __extension__ ({ if (g_88 == &l_564) ; else __assert_fail ("g_88 == &l_564", "/tmp/tmp1htdq842.c", 362, __extension__ __PRETTY_FUNCTION__); }));
                        (*l_433) = (*l_433);
                        (*l_585) = (0x6111 ^ ((*l_312) = (0xAA96 == (&l_312 != l_594))));
                    }
                    ((void) sizeof ((g_88 == &l_564 || g_88 == &l_310 || g_88 == &g_7) ? 1 : 0), __extension__ ({ if (g_88 == &l_564 || g_88 == &l_310 || g_88 == &g_7) ; else __assert_fail ("g_88 == &l_564 || g_88 == &l_310 || g_88 == &g_7", "/tmp/tmp1htdq842.c", 367, __extension__ __PRETTY_FUNCTION__); }));
                    for (l_504 = (-7); (l_504 != 18); ++l_504)
                    {
                        uint32_t l_599 = 0xFDA832B1;
                        (*l_433) = func_41(l_597);
                        ((void) sizeof ((g_88 == &g_7) ? 1 : 0), __extension__ ({ if (g_88 == &g_7) ; else __assert_fail ("g_88 == &g_7", "/tmp/tmp1htdq842.c", 373, __extension__ __PRETTY_FUNCTION__); }));
                        (*l_433) = func_41(&g_361);
                        ((void) sizeof ((g_88 == &g_361 || g_88 == &g_7) ? 1 : 0), __extension__ ({ if (g_88 == &g_361 || g_88 == &g_7) ; else __assert_fail ("g_88 == &g_361 || g_88 == &g_7", "/tmp/tmp1htdq842.c", 376, __extension__ __PRETTY_FUNCTION__); }));
                        if (l_428)
                            break;
                        (*l_586) = ((0U & g_84) & ((((safe_unary_minus_func_uint8_t_u(l_599)) < (*g_99)) > (&g_88 != &l_593)) < (safe_add_func_int16_t_s_s(p_26, (safe_sub_func_int16_t_s_s((safe_div_func_int16_t_s_s((safe_mul_func_int16_t_s_s(((void*)0 == l_432), p_26)), 0x0F9E)), 65530U))))));
                    }
                    ((void) sizeof ((g_88 == &g_361 || g_88 == &g_7 || g_88 == &l_564 || g_88 == &l_310) ? 1 : 0), __extension__ ({ if (g_88 == &g_361 || g_88 == &g_7 || g_88 == &l_564 || g_88 == &l_310) ; else __assert_fail ("g_88 == &g_361 || g_88 == &g_7 || g_88 == &l_564 || g_88 == &l_310", "/tmp/tmp1htdq842.c", 382, __extension__ __PRETTY_FUNCTION__); }));
                    (*l_433) = &g_7;
                    ((void) sizeof ((g_88 == &g_7) ? 1 : 0), __extension__ ({ if (g_88 == &g_7) ; else __assert_fail ("g_88 == &g_7", "/tmp/tmp1htdq842.c", 385, __extension__ __PRETTY_FUNCTION__); }));
                }
                ((void) sizeof ((l_585 == &l_307 || l_585 == &l_310) ? 1 : 0), __extension__ ({ if (l_585 == &l_307 || l_585 == &l_310) ; else __assert_fail ("l_585 == &l_307 || l_585 == &l_310", "/tmp/tmp1htdq842.c", 388, __extension__ __PRETTY_FUNCTION__); }));
            }
            ((void) sizeof ((g_88 == &l_310 || g_88 == &g_7 || g_88 == &l_428) ? 1 : 0), __extension__ ({ if (g_88 == &l_310 || g_88 == &g_7 || g_88 == &l_428) ; else __assert_fail ("g_88 == &l_310 || g_88 == &g_7 || g_88 == &l_428", "/tmp/tmp1htdq842.c", 391, __extension__ __PRETTY_FUNCTION__); }));
            (*l_636) = (((*l_555) = (safe_mod_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(((*l_312) = ((l_431 || p_26) <= (safe_rshift_func_uint16_t_u_u(((safe_div_func_int8_t_s_s(l_618, (safe_lshift_func_int16_t_s_s(p_26, 6)))) && (l_621 == ((*l_623) = ((g_622 = &g_88) == l_417)))), 14)))), 8)), ((safe_mod_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((safe_mul_func_int8_t_s_s((!((*l_432) = ((((((*l_635) = ((safe_mul_func_uint16_t_u_u(p_26, (((void*)0 == &l_621) < 0x49))) < 255U)) || p_26) > l_431) || g_84) <= g_323))), p_26)), 4294967290U)), g_4)), g_361)) || p_26))), 0xBC))) ^ p_26);
            ((void) sizeof ((g_622 == 0 || g_622 == &g_88) ? 1 : 0), __extension__ ({ if (g_622 == 0 || g_622 == &g_88) ; else __assert_fail ("g_622 == 0 || g_622 == &g_88", "/tmp/tmp1htdq842.c", 394, __extension__ __PRETTY_FUNCTION__); }));
            for (l_382 = (-5); (l_382 >= 17); l_382++)
            {
                int32_t *l_639 = &g_361;
                int8_t *l_654 = (void*)0;
                int8_t *l_655 = &g_481;
                int32_t *l_656 = &l_564;
                l_639 = (*l_433);
                ((void) sizeof ((l_639 == &l_310 || l_639 == &g_7 || l_639 == &l_428) ? 1 : 0), __extension__ ({ if (l_639 == &l_310 || l_639 == &g_7 || l_639 == &l_428) ; else __assert_fail ("l_639 == &l_310 || l_639 == &g_7 || l_639 == &l_428", "/tmp/tmp1htdq842.c", 403, __extension__ __PRETTY_FUNCTION__); }));
                (*l_636) = ((safe_mul_func_int8_t_s_s(((***l_328) = (*g_99)), ((g_361 = (l_657 = (p_26 & ((((1 & p_26) || (safe_mul_func_int8_t_s_s(((*l_636) < (((*l_656) = ((((safe_lshift_func_int8_t_s_s(((*l_655) = (((((*l_432) = ((p_26 & ((-10) < (safe_div_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((((*l_555) = (safe_mod_func_int32_t_s_s((l_639 == (void*)0), (*g_213)))) < 0), p_26)), g_171)), 0x3DB18A09)))) < l_504)) ^ p_26) && l_427) < 0xFC96)), (*l_636))) && 1) & p_26) & 4U)) != (*g_213))), p_26))) == p_26) & (*g_471))))) < 8))) >= p_26);
                if (p_26)
                    continue;
                l_658 = ((*l_639) = 2);
            }
        }
        ((void) sizeof ((g_88 == &l_310 || g_88 == &g_7 || g_88 == &l_428 || g_88 == 0) ? 1 : 0), __extension__ ({ if (g_88 == &l_310 || g_88 == &g_7 || g_88 == &l_428 || g_88 == 0) ; else __assert_fail ("g_88 == &l_310 || g_88 == &g_7 || g_88 == &l_428 || g_88 == 0", "/tmp/tmp1htdq842.c", 411, __extension__ __PRETTY_FUNCTION__); }));
        ((void) sizeof ((g_622 == 0 || g_622 == &g_88) ? 1 : 0), __extension__ ({ if (g_622 == 0 || g_622 == &g_88) ; else __assert_fail ("g_622 == 0 || g_622 == &g_88", "/tmp/tmp1htdq842.c", 412, __extension__ __PRETTY_FUNCTION__); }));
        (*l_660) = l_427;
        for (g_323 = (-19); (g_323 > 34); g_323 = safe_add_func_uint32_t_u_u(g_323, 8))
        {
            uint16_t l_687 = 0x3D27;
            int32_t l_706 = 0x279B66DC;
            if (l_331)
            {
                return p_26;
            }
            else
            {
                uint32_t l_676 = 0U;
                int32_t *l_683 = &l_309;
                if (l_663)
                    break;
                if ((p_26 == (safe_lshift_func_int8_t_s_u((-1), 7))))
                {
                    int32_t *l_666 = &g_84;
                    (*l_660) = p_26;
                    if (p_26)
                        continue;
                    l_666 = func_41(l_666);
                    ((void) sizeof ((l_666 == &g_84 || l_666 == &g_7) ? 1 : 0), __extension__ ({ if (l_666 == &g_84 || l_666 == &g_7) ; else __assert_fail ("l_666 == &g_84 || l_666 == &g_7", "/tmp/tmp1htdq842.c", 438, __extension__ __PRETTY_FUNCTION__); }));
                }
                else
                {
                    uint16_t *l_681 = &g_682;
                    (*l_660) = (0x64 & (safe_lshift_func_uint8_t_u_u((((*l_681) = ((**g_674) = (p_26 & ((***l_328) = (p_26 != (g_669 < (safe_rshift_func_uint16_t_u_s((!(((l_676 = ((g_673 == (void*)0) || 0xD665)) && (((safe_div_func_uint8_t_u_u(g_106, (safe_add_func_uint16_t_u_u((*g_675), p_26)))) & p_26) == (*l_660))) & p_26)), 8)))))))) & 0x4C63), 6)));
                    l_684 = l_683;
                    ((void) sizeof ((l_684 == &l_309) ? 1 : 0), __extension__ ({ if (l_684 == &l_309) ; else __assert_fail ("l_684 == &l_309", "/tmp/tmp1htdq842.c", 446, __extension__ __PRETTY_FUNCTION__); }));
                }
            }
            for (l_309 = 2; (l_309 < (-16)); l_309 = safe_sub_func_int32_t_s_s(l_309, 5))
            {
                uint8_t *l_690 = &g_669;
                int32_t l_705 = 1;
                uint16_t ***l_722 = &l_405;
                uint32_t l_730 = 0x26FB6D02;
                int32_t **l_732 = (void*)0;
                int32_t **l_733 = &g_88;
                (*l_660) = l_687;
                g_707 = (safe_sub_func_uint32_t_u_u(((((*l_690) = g_108) > l_687) || (safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_s(((safe_lshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_s((((**g_98) = p_26) < p_26), (l_706 = (((**l_506) != (**l_506)) < (((g_59 < (safe_rshift_func_uint8_t_u_s((+((-2) ^ (((*l_690) = (~(safe_lshift_func_int8_t_s_s(l_705, p_26)))) == 0xB4))), l_705))) != p_26) > l_687))))), p_26)) >= p_26), l_705)), 0))), (*g_213)));
                (*l_660) = (safe_mod_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_s((safe_sub_func_uint8_t_u_u(p_26, ((((-10) != (0x51A8EE53 ^ (safe_sub_func_int32_t_s_s(l_705, ((safe_rshift_func_int16_t_s_s((safe_sub_func_int16_t_s_s(((void*)0 == &g_202), ((void*)0 != l_722))), 3)) || (safe_rshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_s((safe_add_func_int16_t_s_s(((*l_312) = ((+0x59) <= 0x3B8D)), (*g_675))), (**g_98))), l_706))))))) ^ l_730) ^ l_731))), 6)), p_26)), (*l_660)));
                (*l_733) = &l_705;
                ((void) sizeof ((g_88 == &l_705) ? 1 : 0), __extension__ ({ if (g_88 == &l_705) ; else __assert_fail ("g_88 == &l_705", "/tmp/tmp1htdq842.c", 462, __extension__ __PRETTY_FUNCTION__); }));
            }
        }
        ((void) sizeof ((l_684 == &l_309 || l_684 == &g_7) ? 1 : 0), __extension__ ({ if (l_684 == &l_309 || l_684 == &g_7) ; else __assert_fail ("l_684 == &l_309 || l_684 == &g_7", "/tmp/tmp1htdq842.c", 467, __extension__ __PRETTY_FUNCTION__); }));
    }
    ((void) sizeof ((g_622 == 0 || g_622 == &g_88) ? 1 : 0), __extension__ ({ if (g_622 == 0 || g_622 == &g_88) ; else __assert_fail ("g_622 == 0 || g_622 == &g_88", "/tmp/tmp1htdq842.c", 471, __extension__ __PRETTY_FUNCTION__); }));
    ((void) sizeof ((l_684 == &l_309 || l_684 == &g_7) ? 1 : 0), __extension__ ({ if (l_684 == &l_309 || l_684 == &g_7) ; else __assert_fail ("l_684 == &l_309 || l_684 == &g_7", "/tmp/tmp1htdq842.c", 472, __extension__ __PRETTY_FUNCTION__); }));
    if (((*l_684) = (+((safe_lshift_func_int16_t_s_s(((&g_673 == (void*)0) < 0xAF846CCD), 12)) < (safe_sub_func_uint8_t_u_u(((*l_684) | (*l_684)), (((**g_674) = ((**g_674) | (((*g_675) > ((safe_div_func_uint32_t_u_u(p_26, p_26)) > 2)) < 0))) || (*g_675))))))))
    {
        uint16_t **l_756 = &l_406;
        int8_t l_757 = 0x08;
        if (p_26)
        {
            return (*g_471);
        }
        else
        {
            int32_t *l_741 = &g_7;
            l_741 = l_741;
            (*l_741) = 0xF3275490;
        }
        (*l_684) = (safe_add_func_uint16_t_u_u(((*g_675) = (safe_div_func_int8_t_s_s(0x98, ((safe_rshift_func_uint8_t_u_u((65531U <= (safe_sub_func_int32_t_s_s((safe_sub_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((((*l_312) = ((*g_99) || ((**g_98) & (((*g_471) = ((*g_471) & 0x8B4661D7)) <= (p_26 >= (*g_675)))))) != (safe_div_func_int32_t_s_s(((*g_673) != l_756), l_757))), (*g_675))), p_26)), p_26))), 3)) & (*g_99))))), 0xBCF2));
        l_758 = 0x00F16202;
    }
    else
    {
        uint32_t l_767 = 0xC8E80394;
        uint32_t l_776 = 4294967287U;
        (*l_684) = (safe_div_func_int8_t_s_s((((*g_471) = ((safe_div_func_int32_t_s_s((safe_mul_func_uint16_t_u_u(((***l_404) = p_26), (**g_674))), (safe_lshift_func_uint8_t_u_u(g_669, (l_767 >= (safe_mod_func_int32_t_s_s((safe_mul_func_uint8_t_u_u(p_26, ((~p_26) != l_767))), p_26))))))) >= ((~((safe_rshift_func_int16_t_s_s(p_26, p_26)) == l_776)) < l_767))) == p_26), 0xB0));
    }
    for (g_171 = 0; (g_171 != 10); ++g_171)
    {
        int16_t l_779 = 0x1BF9;
        uint16_t ****l_792 = &g_673;
        uint16_t *****l_791 = &l_792;
        uint32_t l_795 = 0U;
        int32_t l_802 = (-9);
        int16_t **l_828 = &l_312;
    }
    return (*g_471);
}
static int32_t func_27(int32_t * p_28, int32_t p_29, int32_t p_30, int8_t p_31)
{
    int16_t *l_265 = &g_215;
    int16_t **l_264 = &l_265;
    g_266 = l_264;
    ((void) sizeof ((g_266 == &l_265) ? 1 : 0), __extension__ ({ if (g_266 == &l_265) ; else __assert_fail ("g_266 == &l_265", "/tmp/tmp1htdq842.c", 524, __extension__ __PRETTY_FUNCTION__); }));
    return (*p_28);
}
static int32_t func_32(int32_t * p_33, int32_t * p_34, uint32_t p_35, int8_t p_36, int32_t * p_37)
{
    int8_t **l_262 = &g_99;
    l_262 = l_262;
    return (*p_37);
}
static int32_t * func_38(int8_t p_39)
{
    int32_t *l_40 = &g_7;
    int32_t **l_90 = &g_88;
    int8_t **l_216 = &g_99;
    int8_t **l_218 = &g_99;
    int16_t *l_249 = (void*)0;
    int32_t *l_254 = (void*)0;
    (*l_40) = 1;
    (*l_90) = func_41(&g_7);
    ((void) sizeof ((g_88 == &g_7) ? 1 : 0), __extension__ ({ if (g_88 == &g_7) ; else __assert_fail ("g_88 == &g_7", "/tmp/tmp1htdq842.c", 560, __extension__ __PRETTY_FUNCTION__); }));
    for (g_59 = 0; (g_59 >= 51); g_59 = safe_add_func_uint32_t_u_u(g_59, 1))
    {
        uint32_t l_96 = 0x3C53D173;
        int32_t *l_117 = &g_84;
        int8_t l_149 = 1;
        int32_t l_172 = (-1);
        int32_t l_186 = 0x76FD32FA;
        for (g_7 = 0; (g_7 > 12); g_7 = safe_add_func_uint8_t_u_u(g_7, 3))
        {
            int32_t *l_97 = &g_84;
            int8_t ***l_100 = &g_98;
            (*l_97) = (safe_unary_minus_func_int16_t_s(l_96));
            (*l_100) = g_98;
        }
        for (l_96 = 16; (l_96 < 3); l_96--)
        {
            uint32_t l_144 = 3U;
            int32_t *l_173 = &g_7;
            int32_t *l_237 = &l_172;
        }
        for (l_149 = 9; (l_149 == 17); ++l_149)
        {
            int16_t *l_250 = &g_215;
            int32_t ***l_251 = &l_90;
        }
        (*l_90) = &l_186;
        ((void) sizeof ((g_88 == &l_186) ? 1 : 0), __extension__ ({ if (g_88 == &l_186) ; else __assert_fail ("g_88 == &l_186", "/tmp/tmp1htdq842.c", 588, __extension__ __PRETTY_FUNCTION__); }));
    }
    return l_254;
}
static int32_t * func_41(int32_t * p_42)
{
    int16_t l_43 = 0x24B2;
    int32_t *l_51 = &g_7;
    (*p_42) = (l_43 | (safe_sub_func_int16_t_s_s((+l_43), 65534U)));
    for (l_43 = 0; (l_43 < (-26)); --l_43)
    {
        int32_t *l_57 = &g_7;
        uint32_t *l_58 = &g_59;
        for (g_7 = (-6); (g_7 < (-30)); g_7 = safe_sub_func_int8_t_s_s(g_7, 9))
        {
            return l_51;
        }
        (*l_57) = (func_52(((g_60 = (4294967289U == (0x3ECD > (1 == ((*l_51) == (safe_mul_func_int16_t_s_s((0xC5A4 < (-1)), (0xD4 <= ((*l_51) > ((*l_58) = (l_57 == &g_7))))))))))) || (*l_57)), (*l_57)) < g_4);
        ((void) sizeof ((g_88 == &g_84) ? 1 : 0), __extension__ ({ if (g_88 == &g_84) ; else __assert_fail ("g_88 == &g_84", "/tmp/tmp1htdq842.c", 620, __extension__ __PRETTY_FUNCTION__); }));
    }
    p_42 = p_42;
    return p_42;
}
static uint32_t func_52(uint32_t p_53, uint32_t p_54)
{
    int32_t *l_61 = &g_7;
    uint16_t l_82 = 65527U;
    int32_t *l_83 = &g_84;
    int8_t *l_85 = &g_60;
    int32_t **l_86 = (void*)0;
    int32_t **l_87 = &l_83;
    int32_t l_89 = (-6);
    l_61 = &g_7;
    (*l_61) = (((*l_85) = (safe_mul_func_int16_t_s_s((g_7 == 0x763964E4), (safe_mul_func_uint8_t_u_u(((*l_61) > (g_7 & ((safe_mod_func_int32_t_s_s((~p_54), ((safe_sub_func_uint32_t_u_u(((safe_add_func_int32_t_s_s(((*l_83) = (0xCDE8 == (g_4 > ((~(safe_mul_func_int16_t_s_s((safe_mul_func_int8_t_s_s((safe_sub_func_int16_t_s_s(((void*)0 != l_61), g_4)), 0x78)), l_82))) ^ p_54)))), p_54)) != 1), p_53)) || (*l_83)))) | g_4))), g_59))))) < (*l_61));
    (*l_87) = &g_84;
    g_88 = ((*l_87) = &g_84);
    ((void) sizeof ((g_88 == &g_84) ? 1 : 0), __extension__ ({ if (g_88 == &g_84) ; else __assert_fail ("g_88 == &g_84", "/tmp/tmp1htdq842.c", 648, __extension__ __PRETTY_FUNCTION__); }));
    return l_89;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    g_266 = 0;
    csmith_sink_ = g_4;
    csmith_sink_ = g_7;
    csmith_sink_ = g_59;
    csmith_sink_ = g_60;
    csmith_sink_ = g_84;
    csmith_sink_ = g_106;
    csmith_sink_ = g_108;
    csmith_sink_ = g_171;
    csmith_sink_ = g_215;
    csmith_sink_ = g_323;
    csmith_sink_ = g_361;
    csmith_sink_ = g_367;
    csmith_sink_ = g_481;
    csmith_sink_ = g_583;
    csmith_sink_ = g_669;
    csmith_sink_ = g_682;
    csmith_sink_ = g_707;
    csmith_sink_ = g_790;
    platform_main_end(0,0);
    return 0;
}
