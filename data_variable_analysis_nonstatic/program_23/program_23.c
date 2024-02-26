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
static int32_t g_11[8][7] = {{0L,0xA7FE64FDL,0L,0xE418A527L,0xA7FE64FDL,0x0C4307E4L,0x0C4307E4L},{(-6L),(-1L),0xA1245C81L,(-1L),(-6L),0xA1245C81L,0x50707DFEL},{0xE17C1097L,0x0C4307E4L,0xE418A527L,0xE17C1097L,0xE418A527L,0x0C4307E4L,0xE17C1097L},{(-5L),0x50707DFEL,(-7L),(-3L),0x50707DFEL,(-3L),(-7L)},{0xE17C1097L,0xE17C1097L,1L,0xA7FE64FDL,0xB9AE77ABL,1L,0xB9AE77ABL},{(-6L),(-7L),(-7L),(-6L),(-3L),(-5L),(-6L)},{0L,0xB9AE77ABL,0xE418A527L,0xE418A527L,0xE418A527L,0x2F80C341L,1L},{(-3L),(-7L),0x50707DFEL,(-5L),(-5L),0x50707DFEL,(-7L)}};
static int32_t *g_10[8] = {&g_11[7][3],&g_11[0][5],&g_11[0][5],&g_11[7][3],&g_11[0][5],&g_11[0][5],&g_11[7][3],&g_11[0][5]};
static uint16_t g_17[9] = {65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL};
static uint16_t *g_23 = (void*)0;
static uint32_t g_26 = 4294967295UL;
static int32_t g_75 = (-4L);
static uint32_t g_76 = 0x47D66A43L;
static uint32_t *g_82 = &g_76;
static uint32_t **g_81 = &g_82;
static uint32_t g_89 = 5UL;
static int32_t *g_111 = &g_11[0][5];
static uint32_t ***g_129 = (void*)0;
static int8_t g_131 = 1L;
static uint16_t g_171 = 0x4F5BL;
static uint32_t ****g_180 = &g_129;
static uint32_t *****g_179[10][4][6] = {{{&g_180,&g_180,&g_180,(void*)0,&g_180,(void*)0},{&g_180,&g_180,&g_180,&g_180,&g_180,&g_180},{(void*)0,&g_180,(void*)0,&g_180,&g_180,&g_180},{&g_180,&g_180,&g_180,(void*)0,&g_180,&g_180}},{{&g_180,(void*)0,&g_180,&g_180,&g_180,&g_180},{&g_180,&g_180,&g_180,&g_180,(void*)0,&g_180},{&g_180,&g_180,&g_180,&g_180,&g_180,(void*)0},{(void*)0,(void*)0,&g_180,&g_180,&g_180,&g_180}},{{(void*)0,&g_180,&g_180,&g_180,&g_180,(void*)0},{&g_180,&g_180,(void*)0,&g_180,&g_180,&g_180},{(void*)0,&g_180,&g_180,&g_180,&g_180,&g_180},{(void*)0,&g_180,&g_180,&g_180,(void*)0,(void*)0}},{{&g_180,&g_180,(void*)0,&g_180,&g_180,&g_180},{(void*)0,&g_180,&g_180,&g_180,(void*)0,&g_180},{(void*)0,&g_180,(void*)0,&g_180,&g_180,&g_180},{&g_180,(void*)0,(void*)0,&g_180,&g_180,&g_180}},{{&g_180,&g_180,(void*)0,&g_180,(void*)0,&g_180},{&g_180,&g_180,&g_180,(void*)0,&g_180,&g_180},{&g_180,(void*)0,(void*)0,&g_180,&g_180,(void*)0},{(void*)0,&g_180,&g_180,&g_180,&g_180,&g_180}},{{&g_180,&g_180,&g_180,(void*)0,&g_180,&g_180},{&g_180,&g_180,(void*)0,&g_180,&g_180,(void*)0},{&g_180,(void*)0,&g_180,&g_180,&g_180,&g_180},{&g_180,&g_180,&g_180,&g_180,(void*)0,(void*)0}},{{&g_180,&g_180,&g_180,(void*)0,&g_180,&g_180},{(void*)0,(void*)0,&g_180,(void*)0,&g_180,&g_180},{&g_180,&g_180,&g_180,&g_180,(void*)0,&g_180},{&g_180,&g_180,&g_180,&g_180,&g_180,&g_180}},{{&g_180,&g_180,(void*)0,&g_180,&g_180,(void*)0},{(void*)0,&g_180,&g_180,&g_180,&g_180,(void*)0},{&g_180,(void*)0,&g_180,&g_180,&g_180,(void*)0},{&g_180,&g_180,(void*)0,&g_180,&g_180,&g_180}},{{&g_180,&g_180,&g_180,&g_180,&g_180,&g_180},{&g_180,&g_180,&g_180,(void*)0,(void*)0,&g_180},{(void*)0,&g_180,&g_180,&g_180,(void*)0,&g_180},{&g_180,&g_180,(void*)0,(void*)0,(void*)0,&g_180}},{{&g_180,&g_180,&g_180,(void*)0,&g_180,&g_180},{(void*)0,&g_180,&g_180,&g_180,&g_180,(void*)0},{&g_180,&g_180,&g_180,&g_180,&g_180,(void*)0},{(void*)0,(void*)0,(void*)0,&g_180,&g_180,&g_180}}};
static uint16_t g_236 = 65528UL;
static uint16_t g_240 = 65533UL;
static uint32_t g_248 = 4294967291UL;
static uint8_t g_253 = 0xCFL;
static uint16_t g_255 = 0xAD97L;
static int8_t g_285 = 0x11L;
static int32_t g_286 = 0x59BE378BL;
static uint32_t g_287 = 4294967292UL;
static uint8_t g_291 = 1UL;
static uint8_t g_293 = 0xE4L;
static uint16_t *g_295 = &g_236;
static int16_t g_312 = 1L;
static int32_t g_314[1][9] = {{0x592381AEL,0x592381AEL,(-7L),0x592381AEL,0x592381AEL,(-7L),0x592381AEL,0x592381AEL,(-7L)}};
static int8_t *g_323[9] = {&g_131,&g_131,&g_131,&g_131,&g_131,&g_131,&g_131,&g_131,&g_131};
static int8_t **g_322 = &g_323[0];
static int32_t **g_326 = (void*)0;
static int32_t ***g_325 = &g_326;
static uint8_t g_393[7][7][5] = {{{246UL,255UL,0xB3L,0x02L,255UL},{0UL,254UL,250UL,0x5CL,0x96L},{254UL,0UL,250UL,1UL,250UL},{0x96L,0x96L,0xB3L,0x93L,246UL},{0x1AL,246UL,0x36L,0UL,0x93L},{0x93L,0xBFL,0UL,1UL,0UL},{246UL,246UL,1UL,255UL,0UL}},{{0UL,0x96L,0x1BL,0UL,0x93L},{0xF0L,0UL,0x1AL,0UL,3UL},{0xF0L,254UL,1UL,254UL,0xF0L},{0UL,255UL,0x36L,0UL,0x96L},{246UL,0x5CL,0UL,0x02L,0x5CL},{0x93L,254UL,0xECL,255UL,0x96L},{0x1AL,0x02L,250UL,0x3DL,0xF0L}},{{0x96L,0x1BL,0UL,0x93L,3UL},{254UL,246UL,0x6FL,0x93L,0x93L},{0UL,1UL,0UL,0x3DL,0UL},{246UL,3UL,0x1AL,255UL,0UL},{0x02L,0x96L,0UL,0x02L,0x93L},{250UL,0x1BL,1UL,1UL,250UL},{0x36L,1UL,0x4DL,0xBFL,0x6FL}},{{0x1BL,0UL,0x93L,3UL,0x3DL},{1UL,0UL,0UL,0UL,0UL},{0x5CL,1UL,0x6FL,0UL,247UL},{0xBFL,0x1BL,246UL,0x1AL,0x36L},{247UL,0x3DL,0UL,0x4DL,250UL},{0xBFL,0xECL,1UL,0x5CL,0x4DL},{0x5CL,0UL,255UL,0x1AL,3UL}},{{1UL,250UL,1UL,0xB3L,3UL},{0x1BL,247UL,247UL,0x1BL,0x4DL},{0x36L,0x1BL,1UL,3UL,250UL},{0x6FL,0xBFL,0x4DL,1UL,0x36L},{0x1BL,0xB3L,1UL,3UL,247UL},{0UL,0UL,0x96L,0x1BL,0UL},{0x4DL,0xBFL,0x6FL,0xB3L,0x3DL}},{{0xBFL,0UL,0x6FL,0x1AL,0x6FL},{0x3DL,0x3DL,0x96L,0x5CL,250UL},{1UL,250UL,1UL,0x4DL,0x5CL},{0x5CL,255UL,0x4DL,0x1AL,1UL},{0UL,250UL,1UL,0UL,3UL},{0UL,0x3DL,247UL,0UL,0x5CL},{0x36L,0UL,1UL,3UL,0xECL}},{{0x36L,0xBFL,255UL,0xBFL,0x36L},{0UL,0UL,1UL,1UL,0x3DL},{0UL,0xB3L,0UL,0x1BL,0xB3L},{0x5CL,0xBFL,246UL,0UL,0x3DL},{1UL,0x1BL,0x6FL,1UL,0x36L},{0x3DL,247UL,0UL,0x5CL,0xECL},{0xBFL,250UL,0x93L,0x5CL,0x5CL}}};
static uint32_t ***g_449[8][7] = {{&g_81,&g_81,&g_81,&g_81,&g_81,&g_81,&g_81},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_81,&g_81,&g_81,&g_81,&g_81,&g_81,&g_81},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_81,&g_81,&g_81,&g_81,&g_81,&g_81,&g_81},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_81,&g_81,&g_81,&g_81,&g_81,&g_81,&g_81},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
static uint16_t func_1(void);
static int32_t * func_2(int32_t * p_3, int16_t p_4, uint32_t p_5);
static int32_t * func_6(int32_t * p_7, int32_t * p_8, uint32_t p_9);
static uint32_t func_27(uint32_t p_28, int32_t * p_29, int16_t p_30, int8_t p_31, int32_t p_32);
static uint32_t ** func_33(uint16_t p_34, int32_t p_35, int8_t p_36, uint32_t * p_37);
static uint32_t func_42(int32_t p_43, int32_t p_44);
static int32_t func_52(int32_t * p_53);
static int32_t * func_58(int32_t p_59);
static int32_t func_60(uint32_t p_61, int32_t ** p_62, int32_t p_63);
static int32_t * func_65(int32_t * p_66, uint16_t * p_67, int16_t p_68);
static uint16_t func_1(void)
{
    int8_t l_15 = 0x39L;
    uint16_t *l_16 = &g_17[0];
    uint32_t *l_24 = (void*)0;
    uint32_t *l_25 = &g_26;
    int8_t l_354 = (-1L);
    uint32_t *l_355 = &g_89;
    uint16_t l_362[6][9][4] = {{{7UL,65535UL,3UL,7UL},{65527UL,0UL,0x79C8L,1UL},{1UL,0x55A8L,65529UL,0UL},{7UL,0x2971L,1UL,65532UL},{0x60C4L,0UL,0x60C4L,1UL},{7UL,4UL,0x445DL,6UL},{0xFAA0L,65535UL,0UL,4UL},{3UL,0x55A8L,0UL,0x79C8L},{0xFAA0L,0x0CF0L,0x445DL,0x9B59L}},{{7UL,0UL,0x60C4L,0UL},{0x60C4L,0UL,1UL,0xAB90L},{7UL,1UL,65529UL,4UL},{1UL,0UL,0x79C8L,65532UL},{65527UL,0xFAA0L,3UL,0x79C8L},{7UL,0UL,65527UL,1UL},{7UL,65535UL,65535UL,7UL},{65527UL,1UL,0UL,1UL},{4UL,0x5315L,65529UL,0x9B59L}},{{0x0CF0L,0x2971L,3UL,0x9B59L},{0x60C4L,0x5315L,0xAB90L,1UL},{6UL,1UL,0x445DL,7UL},{7UL,65535UL,0x79C8L,1UL},{3UL,0UL,0x5C4AL,0x79C8L},{0x0CF0L,0xFAA0L,0x445DL,65532UL},{7UL,0UL,65534UL,4UL},{0x60C4L,1UL,65535UL,0xAB90L},{0xFAA0L,0UL,65529UL,0UL}},{{0UL,0UL,0x5C4AL,0x9B59L},{65527UL,0x0CF0L,1UL,0x79C8L},{6UL,0x55A8L,65527UL,4UL},{6UL,65535UL,1UL,6UL},{65527UL,4UL,0x5C4AL,1UL},{0UL,0UL,65529UL,65532UL},{0xFAA0L,0x2971L,65535UL,0UL},{0x60C4L,0x55A8L,65534UL,1UL},{7UL,0UL,0x445DL,7UL}},{{0x0CF0L,65535UL,0x5C4AL,0UL},{3UL,0x5315L,0x79C8L,0x79C8L},{7UL,7UL,0x445DL,0UL},{6UL,0UL,0xAB90L,1UL},{0x60C4L,4UL,3UL,0xAB90L},{0x0CF0L,4UL,65529UL,1UL},{4UL,0UL,0UL,0UL},{65527UL,7UL,65535UL,0x79C8L},{7UL,0xDD86L,65532UL,0xAB90L}},{{0x79C8L,65527UL,0UL,0x79C8L},{0UL,0xAB90L,0x1D8DL,65535UL},{0x60C4L,65527UL,0x55A8L,0UL},{3UL,0x445DL,65535UL,0xA442L},{0xC520L,0x2971L,0xC520L,65535UL},{0x79C8L,65534UL,6UL,0x5C4AL},{65535UL,65527UL,1UL,65534UL},{0UL,65527UL,1UL,0x1D8DL},{65535UL,1UL,6UL,65535UL}}};
    int32_t **l_456 = &g_10[6];
    uint32_t **l_457 = &l_355;
    int32_t *l_459[6][8] = {{&g_11[0][4],&g_11[0][5],&g_11[3][0],&g_11[0][5],&g_11[3][0],&g_11[0][5],&g_11[0][4],&g_11[0][5]},{&g_75,&g_11[3][0],(void*)0,&g_11[0][4],&g_11[6][6],&g_11[0][5],&g_11[0][5],&g_75},{&g_11[0][5],&g_11[2][1],&g_75,&g_11[6][6],&g_11[6][6],&g_75,&g_11[2][1],&g_11[0][5]},{&g_75,&g_11[0][5],&g_11[0][5],&g_75,&g_11[3][0],&g_11[2][1],(void*)0,(void*)0},{&g_11[0][4],&g_11[0][5],(void*)0,&g_11[2][1],&g_75,&g_11[2][1],(void*)0,&g_11[0][5]},{&g_11[0][5],&g_11[0][5],(void*)0,&g_11[6][1],&g_75,&g_75,&g_11[3][0],(void*)0}};
    int i, j, k;
    (*l_456) = func_2(func_6(g_10[6], &g_11[0][5], ((*l_355) = (~(((safe_mul_func_int8_t_s_s(l_15, ((l_354 = ((*g_295) = (((*l_16) = 0xDDAEL) != ((safe_mul_func_int16_t_s_s((+0xAE07L), (safe_sub_func_uint32_t_u_u(((*l_25) = (g_23 == (void*)0)), func_27(l_15, &g_11[7][2], g_11[5][1], g_11[0][5], g_11[5][6]))))) | (-1L))))) <= g_314[0][2]))) | g_314[0][8]) || (-1L))))), l_15, l_362[3][6][2]);
    (*g_111) = ((&g_89 == ((*l_457) = &g_89)) >= (~0x0AL));
    (*l_456) = l_459[1][7];
    return (*g_295);
}
static int32_t * func_2(int32_t * p_3, int16_t p_4, uint32_t p_5)
{
    uint32_t l_369 = 0xE61717C3L;
    int8_t ***l_370 = (void*)0;
    int8_t ****l_371 = &l_370;
    int32_t ****l_373 = &g_325;
    int32_t *****l_372 = &l_373;
    uint16_t l_379 = 0xCBC3L;
    uint32_t *****l_407[3];
    uint32_t ***l_443[6];
    uint32_t ***l_448 = (void*)0;
    uint32_t ***l_450 = &g_81;
    uint32_t ***l_451 = (void*)0;
    int8_t *l_452 = (void*)0;
    int8_t *l_453 = &g_131;
    int8_t *l_454 = &g_285;
    int32_t l_455 = 0x7B763514L;
    int i;
    for (i = 0; i < 3; i++)
        l_407[i] = &g_180;
    for (i = 0; i < 6; i++)
        l_443[i] = &g_81;
    (*g_111) = (((safe_sub_func_uint8_t_u_u((safe_add_func_int32_t_s_s(((l_369 < (((*l_371) = l_370) != &g_322)) | (p_4 != (p_5 | (((void*)0 != l_372) && ((safe_div_func_int16_t_s_s((0x0FE0126BL || (((~p_4) & 0x9B6EL) != (-1L))), g_287)) && p_4))))), l_379)), g_314[0][8])) && (*p_3)) >= 0x81E8L);
    for (g_285 = (-18); (g_285 >= (-29)); g_285--)
    {
        uint16_t l_389[7] = {0xECCDL,65530UL,65530UL,0xECCDL,65530UL,65530UL,0xECCDL};
        uint32_t *****l_406 = &g_180;
        uint16_t **l_411 = (void*)0;
        uint16_t ***l_410[7];
        int32_t l_428 = 0x8DFCECC1L;
        int32_t *l_432 = &g_75;
        int i;
        for (i = 0; i < 7; i++)
            l_410[i] = &l_411;
        for (g_248 = 7; (g_248 >= 42); g_248 = safe_add_func_int8_t_s_s(g_248, 9))
        {
            int32_t **l_384 = &g_111;
            uint16_t *l_416 = &g_255;
            uint32_t *l_427 = (void*)0;
            int32_t l_429 = 0x4C931D84L;
            (*l_384) = p_3;
            for (g_236 = 1; (g_236 >= 46); g_236 = safe_add_func_uint16_t_u_u(g_236, 4))
            {
                uint32_t *l_394[7][5][1] = {{{&g_89},{&g_89},{&l_369},{&l_369},{&g_89}},{{&l_369},{&l_369},{&g_89},{&g_89},{&l_369}},{{&l_369},{&g_89},{&g_89},{&l_369},{&l_369}},{{&g_89},{&l_369},{&l_369},{&g_89},{&g_89}},{{&l_369},{&l_369},{&g_89},{&g_89},{&l_369}},{{&l_369},{&g_89},{&l_369},{&l_369},{&g_89}},{{&g_89},{&l_369},{&l_369},{&g_89},{&g_89}}};
                int32_t l_395 = 0x66B5C593L;
                uint16_t *l_397 = &l_389[1];
                int32_t *l_399 = &g_11[3][3];
                uint32_t *****l_405 = &g_180;
                uint8_t *l_430 = &g_253;
                int i, j, k;
                for (g_312 = (-6); (g_312 != 1); g_312++)
                {
                    int16_t *l_392[6][8][1] = {{{&g_312},{&g_312},{&g_312},{&g_312},{(void*)0},{&g_312},{&g_312},{&g_312}},{{&g_312},{&g_312},{(void*)0},{&g_312},{&g_312},{&g_312},{&g_312},{&g_312}},{{(void*)0},{&g_312},{&g_312},{&g_312},{&g_312},{&g_312},{(void*)0},{&g_312}},{{&g_312},{&g_312},{&g_312},{&g_312},{(void*)0},{&g_312},{&g_312},{&g_312}},{{&g_312},{&g_312},{(void*)0},{&g_312},{&g_312},{&g_312},{&g_312},{&g_312}},{{(void*)0},{&g_312},{&g_312},{&g_312},{&g_312},{&g_312},{(void*)0},{&g_312}}};
                    int32_t *l_396 = &g_11[0][5];
                    uint8_t *l_412[5];
                    int8_t *l_413 = &g_131;
                    int i, j, k;
                    for (i = 0; i < 5; i++)
                        l_412[i] = &g_291;
                    if ((((g_393[0][3][1] = (l_389[1] <= (safe_lshift_func_int16_t_s_u(g_17[6], 12)))) >= p_5) && (l_395 = (l_394[0][2][0] != &g_89))))
                    {
                        (*l_384) = p_3;
                        l_396 = p_3;
                    }
                    else
                    {
                        uint16_t *l_398 = (void*)0;
                        l_399 = func_65((p_3 = func_65(((*l_384) = l_396), l_397, (((*p_3) = (*p_3)) < 0x89346247L))), l_398, g_291);
                    }
                }
                (*l_384) = func_65(p_3, &g_17[6], (safe_lshift_func_uint8_t_u_u(((*l_430) = (((+(safe_rshift_func_int8_t_s_u((safe_mul_func_uint8_t_u_u(p_4, ((l_428 = (~((~(p_3 == (*l_384))) > (p_5 = (((**g_81) = (&p_5 == l_427)) > (p_4 == ((((*l_399) || 65535UL) ^ (*g_295)) ^ (*g_295)))))))) >= p_4))), 4))) | l_429) ^ (*l_399))), g_17[0])));
                return p_3;
            }
            return (*l_384);
        }
        for (g_76 = 0; (g_76 <= 0); g_76 += 1)
        {
            int32_t *l_431[7] = {&g_11[0][5],&g_11[0][5],&g_11[0][5],&g_11[0][5],&g_11[0][5],&g_11[0][5],&g_11[0][5]};
            int i;
            l_432 = l_431[6];
        }
    }
    l_455 = (safe_mod_func_int32_t_s_s(((*p_3) = (safe_mod_func_int16_t_s_s(6L, (safe_sub_func_int8_t_s_s((safe_sub_func_int8_t_s_s(((*l_454) = ((safe_lshift_func_uint16_t_u_u(((l_443[2] == ((*g_180) = (*g_180))) <= (safe_lshift_func_uint8_t_u_u((safe_div_func_int8_t_s_s(((*l_453) = ((*g_111) <= (((g_449[6][0] = l_448) != (l_451 = (l_450 = (void*)0))) <= (*p_3)))), 9L)), (0xA1L == p_4)))), (*g_295))) == 0x1A79A1D3L)), 0x06L)), 0x3BL))))), 0x2BE5E475L));
    return p_3;
}
static int32_t * func_6(int32_t * p_7, int32_t * p_8, uint32_t p_9)
{
    int32_t *l_356[3];
    int32_t *l_357[6];
    int32_t **l_358 = &l_356[2];
    uint16_t *l_359 = (void*)0;
    uint32_t *l_360 = (void*)0;
    uint32_t *l_361 = &g_248;
    int i;
    for (i = 0; i < 3; i++)
        l_356[i] = &g_11[7][1];
    for (i = 0; i < 6; i++)
        l_357[i] = &g_11[3][2];
    l_356[2] = p_8;
    p_7 = l_357[2];
    (*l_358) = p_8;
    (*l_358) = func_65(func_65(((*l_358) = p_7), l_359, g_253), &g_171, (((*l_361) = p_9) | ((&l_358 == &g_326) == ((void*)0 == &g_312))));
    return &g_11[0][5];
}
static uint32_t func_27(uint32_t p_28, int32_t * p_29, int16_t p_30, int8_t p_31, int32_t p_32)
{
    int32_t l_38 = 6L;
    uint32_t **l_324 = &g_82;
    int32_t ***l_328 = &g_326;
    uint16_t **l_343 = &g_295;
    uint16_t l_349 = 0x37FFL;
    int16_t l_351[10] = {3L,4L,3L,3L,4L,3L,3L,3L,(-1L),(-1L)};
    int i;
    (*p_29) = (*p_29);
    l_324 = func_33(p_32, l_38, p_31, g_10[6]);
    if ((*p_29))
    {
        int32_t ****l_327[1];
        int i;
        for (i = 0; i < 1; i++)
            l_327[i] = &g_325;
        l_328 = g_325;
    }
    else
    {
        int32_t ****l_338 = &l_328;
        int32_t ****l_340[8][8] = {{&l_328,&l_328,&l_328,&l_328,&l_328,&l_328,&l_328,&l_328},{&l_328,&l_328,&g_325,&l_328,&l_328,&l_328,&g_325,&l_328},{&l_328,&g_325,&l_328,&l_328,&l_328,&l_328,&l_328,&l_328},{&l_328,&l_328,&l_328,&l_328,&l_328,&l_328,&l_328,&l_328},{&l_328,&l_328,&l_328,&l_328,&l_328,&g_325,&g_325,&l_328},{&l_328,&g_325,&g_325,&l_328,&l_328,&l_328,&l_328,&l_328},{&l_328,&l_328,&l_328,&l_328,&l_328,&l_328,&l_328,&l_328},{&l_328,&l_328,&l_328,&l_328,&l_328,&l_328,&g_325,&l_328}};
        int32_t *****l_339 = &l_340[6][0];
        uint16_t **l_346 = &g_295;
        int8_t *l_350 = &g_131;
        int32_t *l_352 = (void*)0;
        int32_t *l_353 = &g_75;
        int i, j;
        (*l_353) = ((safe_lshift_func_int8_t_s_u(((0x5EL >= ((safe_add_func_uint16_t_u_u(((+(safe_rshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_s((l_338 != ((*l_339) = l_338)), 4)), 3))) == ((safe_mod_func_int32_t_s_s(((*p_29) = ((void*)0 == l_343)), (safe_lshift_func_uint8_t_u_s((&g_295 == l_346), ((*l_350) = (0UL <= (safe_sub_func_int8_t_s_s(0x0DL, l_349)))))))) < g_76)), g_286)) & (*g_295))) == (*g_295)), l_351[1])) && 4294967291UL);
    }
    return p_32;
}
static uint32_t ** func_33(uint16_t p_34, int32_t p_35, int8_t p_36, uint32_t * p_37)
{
    int32_t l_41[9][7][1] = {{{0x905F4D0CL},{0x905F4D0CL},{0x0B2811FFL},{0x9FF93F8DL},{0x0B2811FFL},{0x905F4D0CL},{0x905F4D0CL}},{{0x0B2811FFL},{0x9FF93F8DL},{0x0B2811FFL},{0x905F4D0CL},{0x905F4D0CL},{0x0B2811FFL},{0x9FF93F8DL}},{{0x0B2811FFL},{0x905F4D0CL},{0x905F4D0CL},{0x0B2811FFL},{0x9FF93F8DL},{0x0B2811FFL},{0x905F4D0CL}},{{0x905F4D0CL},{0x0B2811FFL},{0x9FF93F8DL},{0x0B2811FFL},{0x905F4D0CL},{0x905F4D0CL},{0x0B2811FFL}},{{0x9FF93F8DL},{0x0B2811FFL},{0x905F4D0CL},{0x905F4D0CL},{0x0B2811FFL},{0x9FF93F8DL},{0x0B2811FFL}},{{0x905F4D0CL},{0x905F4D0CL},{0x0B2811FFL},{0x9FF93F8DL},{0x0B2811FFL},{0x905F4D0CL},{0x905F4D0CL}},{{0x0B2811FFL},{0x9FF93F8DL},{0x0B2811FFL},{0x905F4D0CL},{0x905F4D0CL},{0x0B2811FFL},{0x9FF93F8DL}},{{0x0B2811FFL},{0x905F4D0CL},{0x905F4D0CL},{0x0B2811FFL},{0x9FF93F8DL},{0x0B2811FFL},{0x905F4D0CL}},{{0x905F4D0CL},{0x0B2811FFL},{0x9FF93F8DL},{0x0B2811FFL},{0x905F4D0CL},{0x905F4D0CL},{0x0B2811FFL}}};
    uint8_t *l_290 = &g_291;
    uint8_t *l_292 = &g_293;
    uint32_t **l_308 = (void*)0;
    int32_t **l_318 = &g_111;
    int8_t *l_320[6];
    int8_t **l_319 = &l_320[0];
    int8_t ***l_321[7] = {&l_319,&l_319,&l_319,&l_319,&l_319,&l_319,&l_319};
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_320[i] = &g_131;
    if ((safe_div_func_uint8_t_u_u((l_41[2][4][0] ^ func_42(p_34, l_41[2][4][0])), ((*l_292) = ((*l_290) = g_248)))))
    {
        int32_t **l_294 = &g_111;
        (*l_294) = (void*)0;
    }
    else
    {
        int16_t *l_311 = &g_312;
        int32_t l_313[4][3];
        int32_t **l_315 = &g_111;
        int i, j;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 3; j++)
                l_313[i][j] = 1L;
        }
        (*l_315) = func_65(&l_41[0][0][0], g_295, ((safe_mod_func_int8_t_s_s((!((safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((((safe_mod_func_int32_t_s_s(1L, (safe_div_func_int16_t_s_s(((*l_311) = ((-1L) != (+((((((void*)0 == l_308) < (safe_rshift_func_int8_t_s_s(p_36, g_285))) | ((*g_295) == 0L)) == 65529UL) || g_76)))), l_313[2][1])))) >= g_314[0][8]) ^ p_36), 7)), l_313[2][1])) == l_313[2][2])), 6L)) && p_34));
        (**l_315) = (safe_add_func_uint32_t_u_u((&g_293 == l_290), p_34));
    }
    (*l_318) = &g_11[0][5];
    (*l_318) = (*l_318);
    g_322 = l_319;
    return l_308;
}
static uint32_t func_42(int32_t p_43, int32_t p_44)
{
    uint32_t l_47 = 0xF520A048L;
    int32_t *l_54 = &g_11[3][4];
    uint32_t *l_247[7] = {&g_248,&g_248,&g_248,&g_248,&g_248,&g_248,&g_248};
    uint32_t *l_249 = &g_248;
    uint8_t *l_252 = &g_253;
    int16_t *l_254[3];
    int8_t *l_256 = (void*)0;
    int8_t *l_257 = &g_131;
    int32_t ***l_259 = (void*)0;
    int32_t ****l_258[4];
    int32_t *****l_260 = &l_258[1];
    int8_t l_276[7][1];
    int8_t *l_283 = (void*)0;
    int8_t *l_284 = &g_285;
    int32_t l_288 = 0xD913343AL;
    uint32_t l_289[6][6][7] = {{{0x7F45CD96L,0UL,18446744073709551607UL,0xFD501939L,0x5E7ADD06L,0x09D160D3L,0x6A5DDA62L},{0xB01F2DFDL,0x7F5F9C35L,18446744073709551614UL,0x5E7ADD06L,0x7F0F52E0L,0x7F0F52E0L,0x5E7ADD06L},{0x1910C96EL,5UL,0x1910C96EL,18446744073709551615UL,0x1AD261E8L,18446744073709551615UL,0x7F5F9C35L},{0x2FF55C6AL,0xFD501939L,0UL,0x9C3933B6L,0x6A5DDA62L,0x54A4C857L,0xB01F2DFDL},{0xB01F2DFDL,1UL,0x71B67568L,0x4D7E94F4L,1UL,18446744073709551615UL,0x3E7D4AAAL},{1UL,0x5E7ADD06L,0x2714A00EL,0x71B67568L,1UL,0x7F0F52E0L,1UL}},{{0x987CD8EAL,0xB01F2DFDL,0x132B8B98L,0x9C3933B6L,9UL,0xB01F2DFDL,18446744073709551614UL},{0x9C88E312L,0xAED0E2EEL,0x09D160D3L,1UL,18446744073709551607UL,0xD964B614L,18446744073709551614UL},{18446744073709551611UL,0x2714A00EL,18446744073709551609UL,0xAED0E2EEL,18446744073709551614UL,0x54A4C857L,0x54A4C857L},{0x1910C96EL,9UL,0UL,9UL,0x1910C96EL,0x987CD8EAL,0x7F0F52E0L},{18446744073709551615UL,0x09D160D3L,18446744073709551615UL,18446744073709551615UL,0UL,18446744073709551611UL,18446744073709551608UL},{0xC87A73CAL,18446744073709551615UL,18446744073709551609UL,18446744073709551611UL,0x71B67568L,18446744073709551609UL,0UL}},{{18446744073709551615UL,18446744073709551615UL,0x9C3933B6L,0x7F0F52E0L,0x2714A00EL,0x7F45CD96L,0x9C88E312L},{0x1910C96EL,0xD964B614L,0x741E85B1L,8UL,0x132B8B98L,18446744073709551611UL,0x71452917L},{18446744073709551611UL,0x71452917L,0x132B8B98L,18446744073709551611UL,18446744073709551615UL,0xAED0E2EEL,18446744073709551615UL},{0x9C88E312L,0x71452917L,0x2FF55C6AL,0x71B67568L,18446744073709551615UL,5UL,9UL},{8UL,0xD964B614L,0xAED0E2EEL,18446744073709551615UL,0xAED0E2EEL,0xD964B614L,8UL},{0x405F90CAL,18446744073709551615UL,0xD964B614L,0UL,0x9C88E312L,0UL,0x132B8B98L}},{{18446744073709551608UL,18446744073709551615UL,0x4D7E94F4L,0x9C88E312L,18446744073709551615UL,0x68498C81L,0x9C88E312L},{1UL,0x09D160D3L,0xD964B614L,1UL,0x54A4C857L,0xC6D6B7A5L,18446744073709551615UL},{0xD964B614L,9UL,0xAED0E2EEL,0UL,0x71452917L,0x09D160D3L,0xC6D6B7A5L},{18446744073709551608UL,0x2714A00EL,0x2FF55C6AL,0x1910C96EL,0x2714A00EL,0xFD501939L,0x7F0F52E0L},{0x2714A00EL,0xAED0E2EEL,0x132B8B98L,0x1910C96EL,18446744073709551611UL,18446744073709551613UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551608UL,0x741E85B1L,0UL,9UL,0UL,0x741E85B1L}},{{0x9C88E312L,0x9C88E312L,0x9C3933B6L,1UL,0x1910C96EL,0x1AD261E8L,18446744073709551614UL},{0x7F0F52E0L,0x405F90CAL,18446744073709551609UL,0x9C88E312L,0x741E85B1L,0x54A4C857L,18446744073709551615UL},{18446744073709551607UL,9UL,18446744073709551615UL,0UL,0x1910C96EL,0xAED0E2EEL,18446744073709551611UL},{18446744073709551615UL,0x7F5F9C35L,0UL,18446744073709551615UL,9UL,0x4D7E94F4L,18446744073709551608UL},{18446744073709551615UL,0UL,18446744073709551609UL,0x71B67568L,18446744073709551611UL,18446744073709551609UL,18446744073709551615UL},{18446744073709551613UL,18446744073709551615UL,0x09D160D3L,18446744073709551611UL,0x2714A00EL,18446744073709551609UL,0xAED0E2EEL}},{{0x1910C96EL,1UL,1UL,8UL,0x71452917L,0x4D7E94F4L,0x71452917L},{0x7F0F52E0L,0x132B8B98L,0x132B8B98L,0x7F0F52E0L,0x54A4C857L,0xAED0E2EEL,8UL},{0xAED0E2EEL,0x71452917L,18446744073709551607UL,18446744073709551611UL,18446744073709551615UL,0x54A4C857L,0UL},{8UL,1UL,0x987CD8EAL,18446744073709551615UL,0x9C88E312L,0x1AD261E8L,0xC87A73CAL},{0x132B8B98L,9UL,5UL,0xAED0E2EEL,0UL,0xFD501939L,0x741E85B1L},{0x5E7ADD06L,0xC6D6B7A5L,0x2FF55C6AL,0UL,18446744073709551609UL,0x7F45CD96L,0UL}}};
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_254[i] = (void*)0;
    for (i = 0; i < 4; i++)
        l_258[i] = &l_259;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
            l_276[i][j] = (-1L);
    }
    (*l_54) = ((safe_sub_func_int8_t_s_s(((*l_257) = (l_47 | (safe_mul_func_int16_t_s_s((func_52(l_54) != (l_247[4] == (l_249 = (*g_81)))), (g_255 = (0x9BL ^ ((*l_252) = (((safe_rshift_func_int16_t_s_u((-4L), ((g_248 == (0x21B4F9A3L <= (-1L))) | g_248))) >= 65530UL) <= 0xCCL)))))))), p_44)) != 0xF793L);
    (*l_260) = l_258[1];
    g_111 = &g_11[0][5];
    l_288 = (((safe_div_func_int32_t_s_s((safe_sub_func_uint8_t_u_u((0xD64D038AL & p_43), (((+p_43) > ((safe_rshift_func_int8_t_s_u(p_44, 0)) < ((g_287 = ((*l_54) = (g_286 = (safe_sub_func_int16_t_s_s(p_43, (((*l_284) = (safe_add_func_int32_t_s_s(((l_276[5][0] = (safe_mod_func_int16_t_s_s(p_43, (safe_mul_func_int8_t_s_s(((*l_257) = p_44), g_253))))) ^ (safe_add_func_int8_t_s_s(((safe_mod_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(p_43, 3)), 0xE276L)) & 1UL), p_43))), (*g_111)))) <= p_43)))))) ^ 0x7ABFL))) && 4294967291UL))), 0x30936126L)) < g_89) || g_131);
    return l_289[4][3][3];
}
static int32_t func_52(int32_t * p_53)
{
    uint32_t *l_55 = (void*)0;
    int32_t *l_57[10][1][2] = {{{&g_11[2][3],&g_11[3][1]}},{{&g_11[2][3],&g_11[2][3]}},{{&g_11[2][3],&g_11[3][1]}},{{&g_11[2][3],&g_11[2][3]}},{{&g_11[2][3],&g_11[3][1]}},{{&g_11[2][3],&g_11[2][3]}},{{&g_11[2][3],&g_11[3][1]}},{{&g_11[2][3],&g_11[2][3]}},{{&g_11[2][3],&g_11[3][1]}},{{&g_11[2][3],&g_11[2][3]}}};
    int32_t **l_56 = &l_57[9][0][0];
    int i, j, k;
    (*p_53) = ((l_55 != p_53) > 0xAFL);
    (*l_56) = (void*)0;
    (*l_56) = func_58((&p_53 != &p_53));
    return (*p_53);
}
static int32_t * func_58(int32_t p_59)
{
    uint8_t l_64 = 0x37L;
    int32_t l_112 = 7L;
    uint32_t ***l_127 = &g_81;
    uint32_t ****l_128 = &l_127;
    int8_t *l_130[8] = {&g_131,&g_131,&g_131,&g_131,&g_131,&g_131,&g_131,&g_131};
    int32_t *l_201 = &l_112;
    uint32_t *****l_214 = (void*)0;
    int32_t *l_243 = &l_112;
    uint16_t *l_244 = &g_240;
    int32_t **l_245 = &l_201;
    int32_t **l_246 = &l_243;
    int i;
    l_112 = func_60(p_59, &g_10[6], l_64);
    if (((4UL | 0xB981L) <= (((+(safe_mod_func_int16_t_s_s(((safe_add_func_uint16_t_u_u((p_59 == (safe_rshift_func_uint16_t_u_s(l_112, (~(((*g_111) = ((&g_11[4][6] != &g_11[0][5]) || ((safe_mod_func_int8_t_s_s((g_131 = (safe_mod_func_int32_t_s_s((safe_add_func_int8_t_s_s((((*l_128) = l_127) == (g_129 = &g_81)), 255UL)), (*g_111)))), 0x57L)) | 0L))) || (*g_82)))))), l_64)) ^ l_64), (-9L)))) < p_59) ^ 6L)))
    {
        uint32_t ****l_136 = &g_129;
        int32_t **l_152[4];
        int i;
        for (i = 0; i < 4; i++)
            l_152[i] = &g_10[6];
        for (g_76 = 0; (g_76 <= 42); g_76++)
        {
            int32_t l_169[4][7] = {{(-1L),(-1L),0x3EBDD5AFL,(-4L),0x3EBDD5AFL,(-1L),(-1L)},{(-1L),0x3EBDD5AFL,(-4L),0x3EBDD5AFL,(-1L),(-1L),0x3EBDD5AFL},{(-3L),0x2B9FEB66L,(-3L),0x3EBDD5AFL,0x3EBDD5AFL,(-3L),0x2B9FEB66L},{0x3EBDD5AFL,0x2B9FEB66L,(-4L),(-4L),0x2B9FEB66L,0x3EBDD5AFL,0x2B9FEB66L}};
            int32_t l_173 = 0L;
            uint32_t *****l_178 = &l_136;
            int32_t *l_200[4][1];
            int i, j;
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 1; j++)
                    l_200[i][j] = &g_11[0][5];
            }
            for (p_59 = 7; (p_59 < (-8)); --p_59)
            {
                uint32_t *****l_137 = (void*)0;
                int32_t l_172 = 0L;
                uint32_t l_185 = 18446744073709551613UL;
                uint16_t *l_186 = &g_171;
                l_128 = l_136;
                for (g_75 = 0; (g_75 == (-25)); g_75 = safe_sub_func_int16_t_s_s(g_75, 9))
                {
                    int32_t **l_142 = (void*)0;
                    int32_t *l_143 = (void*)0;
                    uint16_t *l_170[5][4] = {{&g_171,&g_171,&g_171,&g_171},{(void*)0,&g_171,&g_171,&g_171},{&g_171,&g_171,&g_171,&g_171},{&g_171,&g_171,&g_171,&g_171},{&g_171,&g_171,&g_171,(void*)0}};
                    int i, j;
                    for (l_112 = 0; (l_112 != 8); l_112++)
                    {
                        return &g_11[7][6];
                    }
                    l_143 = &g_11[3][1];
                    if ((l_173 = (safe_lshift_func_int16_t_s_s((safe_mul_func_int16_t_s_s((5L != (safe_lshift_func_int16_t_s_u(l_112, (l_172 = (((g_75 | ((l_152[2] == &g_10[6]) || ((safe_sub_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_s((safe_mul_func_int8_t_s_s((safe_unary_minus_func_int32_t_s((&g_11[0][5] == (void*)0))), (safe_unary_minus_func_uint32_t_u((safe_add_func_int32_t_s_s((*g_111), ((safe_add_func_int16_t_s_s((*l_143), p_59)) <= l_169[0][4]))))))), 2)) != p_59), 0)), 8L)), 1UL)) >= 9L))) != g_11[0][5]) ^ 8UL))))), 0x290BL)), 8))))
                    {
                        if (p_59)
                            break;
                    }
                    else
                    {
                        int32_t ***l_181 = &l_152[1];
                        int32_t ***l_182 = &l_142;
                        uint16_t **l_187 = &l_186;
                        (*g_111) = (safe_add_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_u(((g_179[0][0][5] = l_178) != (void*)0), 4)) < (((*l_181) = (void*)0) != ((*l_182) = (void*)0))), p_59));
                        (*l_143) = (safe_mul_func_int16_t_s_s(((l_185 < (((*l_187) = l_186) == (void*)0)) < (l_112 > ((safe_add_func_int8_t_s_s(((void*)0 == l_136), ((safe_mod_func_uint16_t_u_u((l_172 = ((safe_lshift_func_uint8_t_u_s(l_64, (p_59 < ((safe_mul_func_uint16_t_u_u((safe_div_func_int32_t_s_s((safe_mul_func_uint16_t_u_u(0x8001L, 0UL)), p_59)), 0xF6E1L)) & p_59)))) && p_59)), l_64)) > p_59))) < (*l_143)))), 3UL));
                    }
                }
            }
            l_201 = l_200[2][0];
        }
    }
    else
    {
        int16_t l_238 = 0x6036L;
        for (g_171 = 0; (g_171 != 31); ++g_171)
        {
            uint32_t *****l_213 = &g_180;
            uint16_t *l_235 = &g_236;
            int32_t l_237 = 0x1E436573L;
            uint16_t *l_239 = &g_240;
            int32_t l_241 = 0x493250C1L;
            int32_t *l_242 = &g_75;
            (*l_242) = ((*g_111) = (safe_mod_func_uint32_t_u_u(((((65531UL == (+((((**g_81) <= (safe_div_func_int8_t_s_s((safe_div_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(((-2L) <= ((&l_128 != (l_214 = l_213)) ^ (((-10L) || ((((g_131 = (safe_mul_func_uint8_t_u_u(((!p_59) > ((*l_239) = (safe_sub_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(((safe_sub_func_int16_t_s_s(((safe_div_func_int16_t_s_s((safe_div_func_int32_t_s_s((((!((+((*l_235) = ((safe_rshift_func_uint8_t_u_u((((*l_201) = 0UL) ^ ((safe_unary_minus_func_uint8_t_u(255UL)) | 0x10L)), p_59)) != 0x889BL))) ^ 3UL)) == p_59) <= p_59), p_59)), g_131)) && l_237), p_59)) < l_238), p_59)), 253UL)), p_59)))), 0x5FL))) ^ 0xB1L) >= (-8L)) & (-8L))) | 4294967286UL))), l_237)), l_241)), l_238))) || p_59) == l_238))) <= g_89) != (-3L)) && l_238), p_59)));
        }
    }
    (*l_246) = ((*l_245) = func_65(l_243, l_244, (*l_243)));
    return &g_11[0][5];
}
static int32_t func_60(uint32_t p_61, int32_t ** p_62, int32_t p_63)
{
    uint16_t *l_69[3];
    int32_t *l_110 = &g_75;
    int32_t **l_109[6][5][1] = {{{&l_110},{&l_110},{&l_110},{&l_110},{&l_110}},{{&l_110},{&l_110},{&l_110},{&l_110},{&l_110}},{{&l_110},{&l_110},{&l_110},{&l_110},{&l_110}},{{&l_110},{&l_110},{&l_110},{&l_110},{&l_110}},{{&l_110},{&l_110},{&l_110},{&l_110},{&l_110}},{{&l_110},{&l_110},{&l_110},{&l_110},{&l_110}}};
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_69[i] = (void*)0;
    g_111 = func_65(&g_11[0][5], l_69[1], g_11[2][4]);
    return (*l_110);
}
static int32_t * func_65(int32_t * p_66, uint16_t * p_67, int16_t p_68)
{
    int32_t *l_70 = &g_11[3][2];
    int32_t **l_71 = &l_70;
    uint32_t l_74[4] = {0x2E3BD65BL,0x2E3BD65BL,0x2E3BD65BL,0x2E3BD65BL};
    uint32_t ***l_99 = &g_81;
    int32_t l_100 = 9L;
    int i;
    (*l_71) = l_70;
    for (p_68 = 2; (p_68 <= 6); p_68 += 1)
    {
        uint32_t ***l_98 = &g_81;
        (*p_66) = (((safe_mod_func_int32_t_s_s((*p_66), (*p_66))) <= l_74[2]) != p_68);
        if (((**l_71) = (*p_66)))
        {
            (**l_71) = (*p_66);
            for (g_75 = 5; (g_75 >= 0); g_75 -= 1)
            {
                int i, j;
                if (g_11[(p_68 + 1)][(g_75 + 1)])
                    break;
                (*l_71) = p_66;
            }
        }
        else
        {
            if (g_76)
                break;
        }
        for (g_76 = 2; (g_76 <= 6); g_76 += 1)
        {
            uint32_t l_88 = 1UL;
            uint16_t **l_91 = (void*)0;
            uint16_t ***l_90 = &l_91;
            uint32_t ***l_97 = &g_81;
            uint32_t ****l_96[1][7];
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 7; j++)
                    l_96[i][j] = &l_97;
            }
            for (g_75 = 0; (g_75 <= 3); g_75 += 1)
            {
                uint32_t *l_78[3][4][10] = {{{(void*)0,&l_74[2],&l_74[2],&l_74[2],&l_74[0],(void*)0,&l_74[2],&g_76,&l_74[2],&l_74[2]},{(void*)0,&l_74[2],&g_76,&l_74[2],&l_74[2],&l_74[1],&l_74[2],&l_74[1],&l_74[2],&l_74[2]},{&l_74[2],&l_74[2],&l_74[2],&g_76,&l_74[3],&g_76,&l_74[1],&l_74[0],&l_74[2],&g_76},{(void*)0,&l_74[2],&l_74[1],&l_74[2],&g_76,&l_74[2],(void*)0,&l_74[0],&l_74[2],&g_76}},{{&l_74[2],(void*)0,&l_74[2],&l_74[2],&l_74[2],&l_74[3],&l_74[2],&l_74[1],&l_74[2],&g_76},{(void*)0,&l_74[3],&g_76,&l_74[0],(void*)0,(void*)0,&l_74[0],&g_76,&l_74[3],(void*)0},{&l_74[1],&g_76,&l_74[2],&l_74[2],&g_76,&g_76,&g_76,&l_74[2],&l_74[2],&g_76},{&l_74[2],&l_74[2],&g_76,(void*)0,(void*)0,&l_74[2],&l_74[2],(void*)0,&g_76,&g_76}},{{(void*)0,&g_76,&g_76,&l_74[2],&l_74[2],(void*)0,&l_74[2],(void*)0,&l_74[2],(void*)0},{&l_74[2],&l_74[2],&g_76,&g_76,&g_76,&l_74[2],&l_74[2],(void*)0,&l_74[2],&l_74[1]},{&l_74[0],&g_76,(void*)0,&l_74[0],&l_74[2],&l_74[2],&l_74[2],&l_74[3],&l_74[2],(void*)0},{&g_76,&g_76,&l_74[2],&g_76,&l_74[2],&g_76,&l_74[2],&l_74[1],(void*)0,(void*)0}}};
                uint32_t **l_77 = &l_78[1][3][8];
                uint32_t ***l_79 = (void*)0;
                uint32_t ***l_80 = &l_77;
                int i, j, k;
                g_11[(g_76 + 1)][(g_75 + 1)] = ((g_89 = (((((((*l_80) = l_77) != g_81) != ((safe_mul_func_int8_t_s_s(0x44L, (g_11[(g_76 + 1)][g_75] <= (safe_add_func_int32_t_s_s((!(0x016C6A45L & l_74[g_75])), (l_88 >= ((void*)0 != &g_82))))))) || g_11[(g_76 + 1)][g_75])) && 0x63L) > l_74[g_75]) & p_68)) ^ g_11[3][6]);
            }
            (*l_71) = p_66;
            (*l_90) = &p_67;
            l_100 = (safe_add_func_int8_t_s_s(l_88, ((g_11[g_76][g_76] = 0xD079270DL) != ((l_98 = &g_81) != (l_99 = &g_81)))));
        }
    }
    for (l_100 = (-28); (l_100 != (-26)); ++l_100)
    {
        uint32_t ****l_103 = &l_99;
        uint32_t *****l_104 = &l_103;
        uint32_t ****l_105 = &l_99;
        int32_t *l_108 = &g_11[0][5];
        (*l_71) = p_66;
        l_105 = ((*l_104) = l_103);
        for (g_89 = 2; (g_89 < 5); ++g_89)
        {
            l_108 = &g_11[0][5];
            (*l_71) = (void*)0;
        }
    }
    return p_66;
}
int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 7; j++)
        {
            csmith_sink_ = g_11[i][j];
        }
    }
    for (i = 0; i < 9; i++)
    {
        csmith_sink_ = g_17[i];
    }
    csmith_sink_ = g_26;
    csmith_sink_ = g_75;
    csmith_sink_ = g_76;
    csmith_sink_ = g_89;
    csmith_sink_ = g_131;
    csmith_sink_ = g_171;
    csmith_sink_ = g_236;
    csmith_sink_ = g_240;
    csmith_sink_ = g_248;
    csmith_sink_ = g_253;
    csmith_sink_ = g_255;
    csmith_sink_ = g_285;
    csmith_sink_ = g_286;
    csmith_sink_ = g_287;
    csmith_sink_ = g_291;
    csmith_sink_ = g_293;
    csmith_sink_ = g_312;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 9; j++)
        {
            csmith_sink_ = g_314[i][j];
        }
    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 5; k++)
            {
                csmith_sink_ = g_393[i][j][k];
            }
        }
    }
    platform_main_end(0,0);
    return 0;
}
