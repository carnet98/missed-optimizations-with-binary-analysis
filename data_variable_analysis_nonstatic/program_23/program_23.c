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
static const uint16_t g_9[5] = {1U,1U,1U,1U,1U};
static int32_t g_15 = 1;
static int32_t *g_14 = &g_15;
static int16_t g_85 = (-6);
static uint32_t g_101 = 0x1AAE879C;
static int32_t **g_133 = &g_14;
static int32_t ***g_132 = &g_133;
static int32_t * const * const g_139 = &g_14;
static int32_t * const * const *g_138 = &g_139;
static int32_t *****g_143 = (void*)0;
static uint8_t g_217 = 247U;
static uint32_t g_228 = 0U;
static uint16_t g_469[6][2][6] = {{{0U,3U,0x82F0,0U,3U,0x544A},{1U,0x544A,0x0EA1,0U,0x0EA1,0x544A}},{{65535U,65535U,0x82F0,0x5F82,3U,0x82F0},{65535U,0x0EA1,3U,0U,65533U,3U}},{{1U,0x0EA1,65535U,0U,3U,3U},{0U,65535U,65535U,0U,0x0EA1,3U}},{{0U,0x544A,3U,0U,3U,0xE45F},{65535U,0x60A4,0xE45F,3U,0x60A4,0xDF3F}},{{3U,0xDF3F,65535U,0x82F0,65535U,0xDF3F},{65533U,0x6FD1,0xE45F,0x0EA1,0x5FBA,0xE45F}},{{65533U,65535U,0x5FBA,0x82F0,0U,0x60A4},{3U,65535U,0x6FD1,3U,0x5FBA,0x5FBA}}};
static int32_t g_557[2] = {1,1};
static int32_t g_567 = 1;
static uint32_t g_702 = 0x62284AD1;
static uint8_t g_722 = 0x21;
static uint16_t g_769[5][6][4] = {{{0x3189,4U,0U,1U},{0xBFB7,4U,0x1751,0x3189},{4U,0x4877,0x52A4,0x4877},{2U,0U,0x7E2B,0xE128},{0x52A4,0x8E82,0x5D9E,0x3F98},{0xE128,0x5D9E,4U,0x7E2B}},{{0xE128,65535U,0x5D9E,0x8CA0},{0x52A4,0x7E2B,0x7E2B,0x52A4},{2U,0x3189,0x52A4,65533U},{4U,0x8CA0,0x1751,4U},{0xBFB7,0x3F98,0U,4U},{0x3189,0x8CA0,1U,65533U}},{{65535U,0x3189,65535U,0x52A4},{0U,0x7E2B,0xE128,0x8CA0},{4U,65535U,65533U,0x7E2B},{0x4877,0x5D9E,65533U,0x3F98},{4U,0x8E82,0xE128,0xE128},{0U,0U,65535U,0x4877}},{{65535U,0x4877,1U,0x3189},{0x3189,4U,0U,1U},{0xBFB7,4U,0x1751,0x3189},{4U,0x4877,0x52A4,0x4877},{2U,0U,0x7E2B,0xE128},{0x52A4,0x8E82,0x5D9E,0x3F98}},{{0xE128,0x5D9E,4U,0x7E2B},{0xE128,65535U,0x5D9E,0x8CA0},{0x52A4,0x7E2B,0x7E2B,0x52A4},{2U,0x3189,0x52A4,65533U},{4U,0x8CA0,0x1751,4U},{0xBFB7,0x3F98,0U,4U}}};
static int8_t func_1(void);
static int32_t * func_2(int32_t p_3, const int32_t p_4, int32_t * p_5, uint32_t p_6, int32_t * p_7);
static int32_t * func_10(uint32_t p_11, int16_t p_12);
static int32_t ** func_20(int32_t p_21);
static int32_t * const func_22(int32_t * p_23, int32_t p_24, int16_t p_25);
static uint16_t func_31(int32_t * p_32);
static int32_t ** func_36(uint16_t p_37, int32_t * p_38, uint16_t p_39, int32_t ** p_40);
static uint16_t func_41(int32_t * p_42);
static uint16_t func_51(int32_t p_52, int8_t p_53, int32_t * const * p_54, int8_t p_55, int32_t * const * const p_56);
static const uint8_t func_71(int32_t p_72, uint8_t p_73, int32_t p_74, int32_t ** p_75, int32_t ** p_76);
static int8_t func_1(void)
{
    int16_t l_8 = (-2);
    int32_t **l_903 = &g_14;
    (*l_903) = func_2(l_8, g_9[0], func_10(l_8, l_8), g_9[0], g_14);
    return (**l_903);
}
static int32_t * func_2(int32_t p_3, const int32_t p_4, int32_t * p_5, uint32_t p_6, int32_t * p_7)
{
    int16_t l_19[10] = {1,1,0,0xDBBE,0,1,1,0,0xDBBE,0};
    int32_t ****l_823[4] = {&g_132,&g_132,&g_132,&g_132};
    int32_t *****l_822 = &l_823[1];
    uint8_t l_835[1];
    int i;
    for (i = 0; i < 1; i++)
        l_835[i] = 0x89;
    for (p_3 = 0; (p_3 <= (-4)); --p_3)
    {
        int32_t l_18 = 0x5CE96B77;
        int32_t ***l_884 = (void*)0;
        if (l_18)
            break;
        if (l_19[4])
            continue;
        if ((*g_14))
        {
            (*g_132) = func_20((*p_7));
        }
        else
        {
            uint32_t l_838 = 0xAD9F0D7A;
            int32_t *l_839 = &g_567;
            for (l_18 = 0; (l_18 <= (-18)); --l_18)
            {
                int8_t l_837 = (-5);
                int32_t **l_876 = (void*)0;
            }
        }
    }
    (*****l_822) = (***g_138);
    (**g_133) = ((void*)0 != (**l_822));
    return (**g_132);
}
static int32_t * func_10(uint32_t p_11, int16_t p_12)
{
    int32_t *l_13 = (void*)0;
    return l_13;
}
static int32_t ** func_20(int32_t p_21)
{
    uint32_t l_26 = 0U;
    int32_t **l_783 = &g_14;
    int32_t **l_798 = &g_14;
    int32_t **** const l_810 = (void*)0;
    uint32_t l_813[9][2] = {{0x632F9C2F,0x632F9C2F},{0x632F9C2F,0x632F9C2F},{0x632F9C2F,0x632F9C2F},{0x632F9C2F,0x632F9C2F},{0x632F9C2F,0x632F9C2F},{0x632F9C2F,0x632F9C2F},{0x632F9C2F,0x632F9C2F},{0x632F9C2F,0x632F9C2F},{0x632F9C2F,0x632F9C2F}};
    int8_t l_814 = (-6);
    int i, j;
    (*l_783) = func_22(&g_15, (*g_14), (l_26 && (safe_add_func_uint32_t_u_u(g_15, (safe_mul_func_uint16_t_u_u(func_31(&g_15), p_21))))));
    for (g_85 = 5; (g_85 > (-1)); g_85 = safe_sub_func_int32_t_s_s(g_85, 1))
    {
        int32_t *l_797 = &g_15;
    }
    (*l_798) = func_22((*l_783), ((void*)0 != l_783), p_21);
    p_21 = (safe_div_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u((safe_div_func_int32_t_s_s((!((**l_783) && (safe_div_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s((((*g_133) != (void*)0) ^ ((l_810 == &g_138) | ((safe_mod_func_int32_t_s_s(l_813[0][0], p_21)) < (g_702 | (p_21 >= (**l_783)))))), l_814)), (***g_132))))), g_9[3])), (**l_783))) | 4294967295U), g_469[4][1][0]));
    return l_798;
}
static int32_t * const func_22(int32_t * p_23, int32_t p_24, int16_t p_25)
{
    uint32_t l_35[9];
    int32_t *l_43 = &g_15;
    uint32_t l_770 = 0x4CCDD1B2;
    int32_t * const l_771 = &g_15;
    uint16_t l_772 = 5U;
    int16_t l_777 = 0x980F;
    int i;
    for (i = 0; i < 9; i++)
        l_35[i] = 0x9B4AF7BD;
    for (p_25 = (-1); (p_25 >= 14); p_25 = safe_add_func_uint32_t_u_u(p_25, 3))
    {
        const uint32_t l_576[2][5][7] = {{{1U,1U,4294967294U,0x92D11FC3,1U,7U,0x00C165BA},{2U,1U,1U,1U,2U,0U,0x00C165BA},{4294967294U,1U,4294967294U,1U,0x00C165BA,0x92D11FC3,1U},{4294967294U,0U,7U,9U,0U,2U,0U},{4294967294U,1U,0xC8A32952,0U,0xC8A32952,1U,4294967294U}},{{2U,1U,0U,0x00C165BA,1U,4294967294U,1U},{1U,0U,0x9A9B5964,0U,0U,1U,1U},{7U,1U,0U,0xDCB8FE28,1U,0xDCB8FE28,0U},{1U,1U,0xC8A32952,0xDCB8FE28,0x2E9CEC52,4294967294U,0U},{1U,0x2E9CEC52,7U,0U,1U,1U,0U}}};
        int32_t l_577 = 0x6B0D0AC6;
        int i, j, k;
        for (p_24 = 0; (p_24 <= 8); p_24 += 1)
        {
            (*p_23) = 0xB0881DDA;
            if ((*g_14))
                break;
            if ((*g_14))
                break;
            if ((*g_14))
                continue;
        }
        if ((*p_23))
        {
            return &g_15;
        }
        else
        {
            int32_t *l_566 = &g_567;
            int32_t ***l_578 = &g_133;
            (*l_578) = func_36(func_41(l_43), l_566, (safe_sub_func_uint8_t_u_u(((safe_add_func_int8_t_s_s((g_469[0][0][0] != (safe_rshift_func_uint16_t_u_s(((safe_rshift_func_int16_t_s_s((l_576[0][3][1] ^ l_577), 2)) | 0x53), 10))), (&g_133 != l_578))) && 0x90), p_25)), &l_43);
            if (l_770)
                break;
            return l_771;
        }
    }
    (*l_771) = ((p_24 && (l_772 >= (safe_lshift_func_int8_t_s_u((((-1) <= g_769[0][0][3]) <= (*l_43)), 6)))) ^ ((safe_sub_func_uint16_t_u_u((*l_771), l_777)) < (!(((*l_771) || ((safe_div_func_uint8_t_u_u((g_9[0] ^ 0), g_85)) != g_469[4][1][0])) & 0x171B))));
    return l_771;
}
static uint16_t func_31(int32_t * p_32)
{
    return g_15;
}
static int32_t ** func_36(uint16_t p_37, int32_t * p_38, uint16_t p_39, int32_t ** p_40)
{
    int32_t **l_582 = (void*)0;
    uint32_t l_601 = 4294967295U;
    uint32_t l_631 = 0x7E8873B0;
    int32_t ****l_766 = &g_132;
    int32_t *****l_765[8];
    int i;
    for (i = 0; i < 8; i++)
        l_765[i] = &l_766;
    for (g_101 = 0; (g_101 <= 1); g_101 += 1)
    {
        int32_t * const l_606 = &g_567;
        int16_t l_607 = (-2);
        int32_t *l_633[4][1][4] = {{{&g_567,&g_567,(void*)0,&g_567}},{{&g_567,&g_15,&g_15,&g_567}},{{&g_15,&g_567,&g_15,&g_15}},{{&g_567,&g_567,(void*)0,&g_567}}};
        uint32_t l_660[2][8][3] = {{{9U,9U,0x936C8588},{1U,4294967295U,9U},{0x13867332,9U,0x13867332},{0x13867332,1U,9U},{1U,0x13867332,0x13867332},{9U,0x13867332,9U},{4294967295U,1U,0x936C8588},{9U,9U,0x936C8588}},{{1U,4294967295U,9U},{0x13867332,9U,0x13867332},{0x13867332,1U,9U},{1U,0x13867332,0x13867332},{9U,0x13867332,9U},{4294967295U,1U,0x936C8588},{9U,9U,0x936C8588},{1U,4294967295U,9U}}};
        int32_t *l_708 = &g_567;
        int32_t ***l_715 = &g_133;
        int i, j, k;
        for (g_15 = 1; (g_15 >= 0); g_15 -= 1)
        {
            int32_t ****l_585[3][3][8] = {{{&g_132,&g_132,&g_132,&g_132,&g_132,&g_132,&g_132,&g_132},{&g_132,&g_132,&g_132,&g_132,&g_132,&g_132,&g_132,&g_132},{&g_132,&g_132,&g_132,&g_132,&g_132,&g_132,&g_132,&g_132}},{{&g_132,&g_132,&g_132,&g_132,&g_132,&g_132,&g_132,&g_132},{&g_132,&g_132,&g_132,&g_132,&g_132,&g_132,&g_132,&g_132},{&g_132,&g_132,&g_132,&g_132,&g_132,&g_132,&g_132,&g_132}},{{&g_132,&g_132,&g_132,&g_132,&g_132,&g_132,&g_132,&g_132},{&g_132,&g_132,(void*)0,&g_132,&g_132,&g_132,&g_132,&g_132},{&g_132,&g_132,&g_132,&g_132,&g_132,&g_132,&g_132,&g_132}}};
            uint32_t l_609 = 0x46E8EC02;
            uint32_t l_619 = 4294967295U;
            int32_t l_632 = 1;
            int i, j, k;
        }
        for (l_601 = 0; (l_601 <= 1); l_601 += 1)
        {
            uint16_t l_663[7];
            int32_t ***l_675 = &g_133;
            int i;
            for (i = 0; i < 7; i++)
                l_663[i] = 0x7F68;
            (*l_606) = (l_663[4] != 0x3165EE85);
            (*p_38) = (p_37 == 0xE1BC);
            for (p_37 = 0; (p_37 <= 1); p_37 += 1)
            {
                const int32_t l_664 = 1;
                for (g_228 = 0; (g_228 <= 1); g_228 += 1)
                {
                    int32_t **l_700 = &g_14;
                    int i, j, k;
                }
                if ((*p_38))
                    continue;
            }
            (**p_40) = ((void*)0 == &g_133);
            for (g_228 = 0; (g_228 <= 1); g_228 += 1)
            {
                int32_t *l_705 = (void*)0;
                int32_t **l_706 = (void*)0;
                int32_t **l_707[6] = {&l_633[1][0][3],&l_633[1][0][3],&l_633[1][0][3],&l_633[1][0][3],&l_633[1][0][3],&l_633[1][0][3]};
                const int8_t l_721 = 0x63;
                int i;
                (**l_675) = l_705;
                ((void) sizeof ((g_14 == 0) ? 1 : 0), __extension__ ({ if (g_14 == 0) ; else __assert_fail ("g_14 == 0", "/tmp/tmp8jyjg0u2.c", 288, __extension__ __PRETTY_FUNCTION__); }));
                l_708 = l_606;
                if ((safe_mul_func_uint8_t_u_u(((p_37 == (safe_sub_func_uint8_t_u_u(0x9D, (((2U && (*l_708)) != g_567) | (safe_mod_func_uint32_t_u_u((((void*)0 != l_715) != ((p_37 < ((+(safe_lshift_func_int8_t_s_s((safe_div_func_uint8_t_u_u(l_721, p_37)), p_37))) <= g_228)) | g_722)), (*p_38))))))) != p_39), 0x11)))
                {
                    (**p_40) = (**p_40);
                    return (*g_132);
                }
                else
                {
                    int32_t l_723 = (-1);
                    l_723 = (*p_38);
                }
            }
        }
    }
    for (g_228 = 0; g_228 < 2; g_228 += 1)
    {
        g_557[g_228] = 9;
    }
    if (((0xB131 > (safe_mul_func_uint8_t_u_u((safe_unary_minus_func_uint16_t_u(((void*)0 == &p_38))), ((~(safe_mod_func_uint16_t_u_u(g_469[4][0][2], p_39))) ^ g_722)))) <= g_557[1]))
    {
        (*p_40) = (*p_40);
    }
    else
    {
        int32_t **l_732 = &g_14;
        int32_t * const *l_764 = &g_14;
        int32_t * const **l_763 = &l_764;
        int32_t * const ***l_762 = &l_763;
        int32_t * const ****l_761 = &l_762;
        (**p_40) = (safe_rshift_func_int8_t_s_u((((void*)0 != l_732) > ((safe_sub_func_uint32_t_u_u(((safe_div_func_int32_t_s_s(((safe_add_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s((safe_sub_func_int32_t_s_s(l_601, (safe_sub_func_int16_t_s_s((safe_mul_func_int8_t_s_s(((safe_add_func_uint8_t_u_u(p_37, ((safe_lshift_func_uint16_t_u_s(((safe_add_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((safe_rshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s((l_761 != l_765[2]), 7)), (safe_lshift_func_int8_t_s_s(g_557[1], 6)))), (g_769[0][0][3] | ((void*)0 != (*l_761))))), p_37)), p_37)) & p_39), p_39)) || 0xEE43AF47))) ^ p_37), g_85)), (-1))))), 5)), g_469[1][0][5])) != (**p_40)), p_37)) == p_37), (-1))) == 0xCD)), 0));
        (*p_40) = (*p_40);
    }
    (**p_40) = ((void*)0 != &g_132);
    return (**l_766);
}
static uint16_t func_41(int32_t * p_42)
{
    uint32_t l_46 = 4U;
    const int32_t *l_60[3];
    const int32_t ** const l_59 = &l_60[2];
    int8_t l_62[7][2];
    uint16_t l_497 = 0xD5E6;
    int32_t * const *l_532 = &g_14;
    int32_t * const **l_531 = &l_532;
    int32_t * const ***l_530[4][6];
    int32_t *l_536 = (void*)0;
    uint32_t l_547[10] = {0x138500FC,0x138500FC,0x138500FC,0x138500FC,0x138500FC,0x138500FC,0x138500FC,0x138500FC,0x138500FC,0x138500FC};
    int i, j;
    for (i = 0; i < 3; i++)
        l_60[i] = &g_15;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
            l_62[i][j] = (-5);
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 6; j++)
            l_530[i][j] = &l_531;
    }
    for (g_15 = 0; (g_15 >= 1); ++g_15)
    {
        int32_t l_61 = 0xA52B3395;
        l_46 = (*p_42);
        if (((safe_mul_func_uint16_t_u_u((safe_div_func_int16_t_s_s((func_51((safe_rshift_func_uint8_t_u_s(((void*)0 == l_59), 4)), l_61, &g_14, (l_62[6][0] != g_15), &g_14) || (safe_lshift_func_int16_t_s_u((l_61 < g_9[0]), g_85))), l_61)), l_61)) ^ 0x05E9FD72))
        {
            uint32_t l_500[7][7][5] = {{{0x84FE9D93,0xCF1C28F1,1U,0x209B29BD,1U},{0x8ADEA07B,0x2712D644,0x6A020E8A,0x63E62D63,0x8EF656F2},{0xFC9665A1,0x319B38F6,0x597A77BC,1U,1U},{0xC15DDF59,0xFB510B97,0xC15DDF59,0x5FECDD40,0U},{0x2712D644,0xA12C75C9,0U,0xC15DDF59,0x0D7487A0},{4294967295U,0x2E1B9E65,0x9DB4A787,4294967291U,0x319B38F6},{0xC2B7958A,4294967287U,0U,0x0D7487A0,4294967295U}},{{0U,1U,0xC15DDF59,0x8EE43EF6,4294967295U},{9U,1U,0x597A77BC,1U,0x6A020E8A},{1U,8U,0x6A020E8A,0x2A2A2713,0x2712D644},{0xA12C75C9,0x8EF656F2,1U,4294967287U,0x8DCAB2CD},{0x63E62D63,0xF73BA368,2U,4294967295U,0x8DCAB2CD},{4294967295U,4294967294U,1U,4294967294U,0x2712D644},{8U,4294967294U,9U,4294967295U,0x6A020E8A}},{{1U,0U,4294967295U,6U,4294967295U},{1U,1U,0x8EF656F2,0xCA7BEFD9,4294967295U},{0xF73BA368,0x0D7487A0,1U,0x3E49E086,0x319B38F6},{1U,0x84FE9D93,0xBDEDD947,0x54AD161C,0x0D7487A0},{0xCF218528,0x0D7487A0,0x84FE9D93,2U,0U},{0x2E1B9E65,1U,4294967291U,0xF73BA368,1U},{0x3E49E086,0U,0U,4294967295U,0x8EF656F2}},{{0x8EF656F2,4294967294U,0x8EE43EF6,0x2E1B9E65,1U},{0xBDEDD947,4294967294U,0x8ADEA07B,0x6A020E8A,0x835956C4},{0xCA7BEFD9,0xF73BA368,6U,0x6A020E8A,0U},{1U,0x8EF656F2,0U,0x2E1B9E65,0U},{0x0D7487A0,8U,0x54AD161C,4294967295U,0xA12C75C9},{0xCF1C28F1,1U,0xF73BA368,0xF73BA368,1U},{0x319B38F6,1U,0x2712D644,2U,0x54AD161C}},{{0xF31B740E,4294967287U,0xFC9665A1,0x54AD161C,0x2A2A2713},{2U,0x2E1B9E65,0xCF1C28F1,0x3E49E086,0xFC9665A1},{0xF31B740E,0xA12C75C9,0xF7AADC6A,0xCA7BEFD9,2U},{0x319B38F6,0xFB510B97,4294967291U,6U,4294967294U},{0xCF1C28F1,0x319B38F6,0x2A2A2713,4294967295U,0x9DB4A787},{0x835956C4,0xA12C75C9,0U,0xCF218528,0x6A020E8A},{1U,4294967294U,0x54AD161C,1U,1U}},{{0xA7614259,0x0D7487A0,0x54AD161C,0xBDEDD947,0x84FE9D93},{0xFC9665A1,4294967295U,0U,0x0D7487A0,0x5FECDD40},{0xCA7BEFD9,0x8DCAB2CD,0x0D7487A0,0x2A2A2713,0xF7AADC6A},{4294967295U,0x84FE9D93,0x3E49E086,0x84FE9D93,4294967295U},{1U,0xF7AADC6A,0U,0x835956C4,4294967291U},{0xFB510B97,0x2A2A2713,4294967294U,0x3E49E086,0xBDEDD947},{0xC2B7958A,0x597A77BC,6U,0xF7AADC6A,4294967291U}},{{0x9DB4A787,0x3E49E086,0xA12C75C9,1U,4294967295U},{4294967291U,0x209B29BD,0x9DB4A787,4294967287U,0xF7AADC6A},{8U,0xA7614259,0x2E1B9E65,0xF31B740E,0x5FECDD40},{0xF73BA368,0x319B38F6,0xD1166AE4,4294967295U,0x84FE9D93},{1U,0xD1166AE4,0U,0x597A77BC,1U},{0xF31B740E,0xD1166AE4,1U,0xFC9665A1,0x6A020E8A},{0U,0x319B38F6,0x84FE9D93,0U,0x0A026383}}};
            int i, j, k;
            (**g_132) = &l_61;
            ((void) sizeof ((g_14 == &l_61) ? 1 : 0), __extension__ ({ if (g_14 == &l_61) ; else __assert_fail ("g_14 == &l_61", "/tmp/tmp8jyjg0u2.c", 372, __extension__ __PRETTY_FUNCTION__); }));
            (***g_138) = ((!(safe_mod_func_uint16_t_u_u((l_497 & (safe_mul_func_int16_t_s_s(g_469[4][0][2], g_217))), l_500[5][3][0]))) <= (l_61 <= ((safe_mod_func_int32_t_s_s(((safe_add_func_uint8_t_u_u(248U, (l_61 >= l_500[5][3][1]))) ^ l_500[1][6][0]), g_228)) || l_500[5][3][0])));
            for (g_228 = 17; (g_228 == 18); ++g_228)
            {
                int8_t l_511[9] = {0x8B,0x8B,0x8B,0x8B,0x8B,0x8B,0x8B,0x8B,0x8B};
                int i;
                (*g_14) = (safe_div_func_int16_t_s_s((safe_div_func_uint16_t_u_u(l_61, (l_511[1] && ((safe_mul_func_int8_t_s_s(g_469[5][0][5], l_511[1])) <= l_61)))), (l_61 || 0x33)));
                if (l_61)
                    continue;
            }
        }
        else
        {
            uint8_t l_514 = 2U;
            l_514 = 0x3E36C680;
            return l_514;
        }
        ((void) sizeof ((g_14 == &l_61) ? 1 : 0), __extension__ ({ if (g_14 == &l_61) ; else __assert_fail ("g_14 == &l_61", "/tmp/tmp8jyjg0u2.c", 390, __extension__ __PRETTY_FUNCTION__); }));
        if ((**g_133))
            break;
    }
    for (g_85 = 0; (g_85 < (-25)); --g_85)
    {
        int32_t ***l_525 = &g_133;
        int32_t l_526 = 0x7C76657B;
        int32_t ****l_529 = &g_132;
        for (l_46 = 0; l_46 < 3; l_46 += 1)
        {
            l_60[l_46] = (void*)0;
        }
        for (l_46 = 0; (l_46 != 6); l_46 = safe_add_func_uint8_t_u_u(l_46, 6))
        {
            uint32_t l_533 = 0x17B7A4F7;
            for (g_228 = 15; (g_228 <= 50); ++g_228)
            {
                return g_9[0];
            }
            (*p_42) = ((7U <= ((!((!4U) >= (l_525 != l_525))) >= (((l_526 || (safe_mul_func_int8_t_s_s(((0x7371C816 < (l_529 != l_530[0][5])) >= g_101), 1U))) < l_533) >= l_533))) | g_15);
        }
    }
    if (((((*p_42) | 4294967290U) <= g_85) || (((safe_rshift_func_int8_t_s_u(((void*)0 == l_536), 7)) && (safe_add_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((safe_unary_minus_func_int16_t_s((!((g_9[0] || g_9[0]) ^ (((safe_rshift_func_int16_t_s_u(g_9[0], (safe_div_func_int32_t_s_s((0xB02D | (-7)), 0x8CD4982F)))) | l_547[8]) <= 0x72FAF3B4))))), g_9[0])), 4))) < g_85)))
    {
        uint8_t l_560 = 0U;
        int32_t l_562[6] = {(-1),(-1),(-1),(-1),(-1),(-1)};
        int i;
        for (g_15 = 7; (g_15 >= 20); g_15 = safe_add_func_uint16_t_u_u(g_15, 9))
        {
            int32_t ****l_556 = (void*)0;
            int32_t l_561 = 9;
            l_562[3] = (safe_mul_func_uint8_t_u_u((0x0DCC9AE7 < ((((g_9[4] > (*p_42)) > (0x0C9E96CA | (safe_sub_func_int32_t_s_s(((safe_add_func_uint8_t_u_u(g_101, ((l_556 == &l_531) < g_557[0]))) >= ((safe_mul_func_uint16_t_u_u(g_469[0][1][4], 0x6C8F)) && 0x724E)), (*p_42))))) > l_560) && l_561)), g_557[0]));
        }
        (*g_133) = p_42;
        ((void) sizeof ((g_14 == &g_15) ? 1 : 0), __extension__ ({ if (g_14 == &g_15) ; else __assert_fail ("g_14 == &g_15", "/tmp/tmp8jyjg0u2.c", 431, __extension__ __PRETTY_FUNCTION__); }));
    }
    else
    {
        uint8_t l_563 = 0xC3;
        int32_t *l_564 = &g_15;
        int16_t l_565[10] = {0xA116,0x3347,0xA116,0x3347,0xA116,0x3347,0xA116,0x3347,0xA116,0x3347};
        int i;
        (*p_42) = l_563;
        (*g_133) = l_564;
        ((void) sizeof ((g_14 == &g_15) ? 1 : 0), __extension__ ({ if (g_14 == &g_15) ; else __assert_fail ("g_14 == &g_15", "/tmp/tmp8jyjg0u2.c", 442, __extension__ __PRETTY_FUNCTION__); }));
        l_565[6] = (*l_564);
    }
    ((void) sizeof ((g_14 == &g_15) ? 1 : 0), __extension__ ({ if (g_14 == &g_15) ; else __assert_fail ("g_14 == &g_15", "/tmp/tmp8jyjg0u2.c", 446, __extension__ __PRETTY_FUNCTION__); }));
    return g_228;
}
static uint16_t func_51(int32_t p_52, int8_t p_53, int32_t * const * p_54, int8_t p_55, int32_t * const * const p_56)
{
    int32_t *l_65 = (void*)0;
    int32_t l_66 = 9;
    const uint16_t l_387 = 4U;
    int32_t *l_394 = &l_66;
    int32_t ****l_404 = &g_132;
    int8_t l_424 = (-10);
    l_66 = (safe_mod_func_int8_t_s_s(p_53, g_15));
    return g_228;
}
static const uint8_t func_71(int32_t p_72, uint8_t p_73, int32_t p_74, int32_t ** p_75, int32_t ** p_76)
{
    uint16_t l_120[9][5][1] = {{{65528U},{0x7566},{0U},{0x2E64},{0xBA90}},{{0U},{0xBA90},{0x2E64},{0U},{0x7566}},{{65528U},{0xA2B5},{0U},{1U},{65530U}},{{65530U},{1U},{0U},{0xA2B5},{65528U}},{{0x7566},{0U},{0x2E64},{0xBA90},{0U}},{{0xBA90},{0x2E64},{0U},{0x7566},{65528U}},{{0xA2B5},{0U},{1U},{65530U},{65530U}},{{1U},{0U},{0xA2B5},{65528U},{0x7566}},{{0U},{0x2E64},{0xBA90},{0U},{0xBA90}}};
    int32_t *l_128 = &g_15;
    uint8_t l_157 = 0xD2;
    const int32_t *l_182[8][9][3] = {{{&g_15,(void*)0,&g_15},{&g_15,(void*)0,&g_15},{(void*)0,&g_15,&g_15},{&g_15,(void*)0,&g_15},{(void*)0,&g_15,&g_15},{&g_15,(void*)0,&g_15},{&g_15,&g_15,&g_15},{&g_15,&g_15,&g_15},{&g_15,&g_15,(void*)0}},{{(void*)0,&g_15,&g_15},{&g_15,(void*)0,&g_15},{(void*)0,&g_15,&g_15},{(void*)0,(void*)0,(void*)0},{&g_15,(void*)0,&g_15},{&g_15,(void*)0,&g_15},{(void*)0,(void*)0,&g_15},{(void*)0,(void*)0,&g_15},{(void*)0,&g_15,&g_15}},{{&g_15,&g_15,&g_15},{&g_15,&g_15,&g_15},{&g_15,&g_15,&g_15},{(void*)0,&g_15,&g_15},{&g_15,(void*)0,&g_15},{&g_15,&g_15,(void*)0},{&g_15,&g_15,&g_15},{&g_15,&g_15,(void*)0},{&g_15,&g_15,(void*)0}},{{&g_15,&g_15,&g_15},{(void*)0,(void*)0,&g_15},{&g_15,(void*)0,&g_15},{&g_15,(void*)0,&g_15},{&g_15,&g_15,&g_15},{(void*)0,&g_15,&g_15},{&g_15,&g_15,&g_15},{&g_15,&g_15,&g_15},{(void*)0,(void*)0,&g_15}},{{&g_15,&g_15,&g_15},{&g_15,(void*)0,&g_15},{&g_15,&g_15,&g_15},{&g_15,&g_15,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&g_15},{(void*)0,&g_15,(void*)0},{&g_15,&g_15,&g_15},{&g_15,&g_15,&g_15}},{{&g_15,&g_15,&g_15},{(void*)0,&g_15,&g_15},{(void*)0,&g_15,&g_15},{(void*)0,(void*)0,&g_15},{&g_15,&g_15,&g_15},{&g_15,&g_15,&g_15},{&g_15,&g_15,&g_15},{&g_15,(void*)0,&g_15},{(void*)0,&g_15,&g_15}},{{&g_15,(void*)0,&g_15},{&g_15,(void*)0,&g_15},{(void*)0,&g_15,&g_15},{&g_15,(void*)0,&g_15},{&g_15,&g_15,&g_15},{&g_15,&g_15,&g_15},{(void*)0,&g_15,&g_15},{&g_15,(void*)0,&g_15},{&g_15,&g_15,(void*)0}},{{&g_15,&g_15,&g_15},{&g_15,&g_15,&g_15},{&g_15,&g_15,&g_15},{&g_15,&g_15,&g_15},{(void*)0,&g_15,&g_15},{&g_15,(void*)0,(void*)0},{&g_15,(void*)0,&g_15},{&g_15,&g_15,&g_15},{(void*)0,&g_15,&g_15}}};
    const int32_t **l_181 = &l_182[4][3][1];
    const int32_t ***l_180 = &l_181;
    const int32_t ****l_179 = &l_180;
    const int32_t *****l_178 = &l_179;
    int32_t l_233[6] = {0x01A31BCC,0x01A31BCC,0x01A31BCC,0x01A31BCC,0x01A31BCC,0x01A31BCC};
    uint32_t l_262[6] = {0x7AF27645,0x7AF27645,0x7AF27645,0x7AF27645,0x7AF27645,0x7AF27645};
    int32_t *l_366 = &l_233[3];
    int16_t l_371 = (-1);
    int i, j, k;
lbl_320:
    if ((+(safe_mul_func_int8_t_s_s(p_72, 0xF3))))
    {
        int32_t **l_84 = &g_14;
        g_85 = (&g_14 != l_84);
    }
    else
    {
        int16_t l_93 = 3;
        uint32_t l_100 = 4294967287U;
        int32_t ** const l_121 = (void*)0;
        int32_t l_122[5][6][2] = {{{0x50DEC7D6,0xF95C78ED},{0x50DEC7D6,0x50DEC7D6},{0x50DEC7D6,0xF95C78ED},{0x50DEC7D6,0x50DEC7D6},{0x50DEC7D6,0xF95C78ED},{0x50DEC7D6,0x50DEC7D6}},{{0x50DEC7D6,0xF95C78ED},{0x50DEC7D6,0x50DEC7D6},{0x50DEC7D6,0xF95C78ED},{0x50DEC7D6,0x50DEC7D6},{0x50DEC7D6,0xF95C78ED},{0x50DEC7D6,0x50DEC7D6}},{{0x50DEC7D6,0xF95C78ED},{0x50DEC7D6,0x50DEC7D6},{0x50DEC7D6,0xF95C78ED},{0x50DEC7D6,0x50DEC7D6},{0x50DEC7D6,0xF95C78ED},{0x50DEC7D6,0x50DEC7D6}},{{0x50DEC7D6,0xF95C78ED},{0x50DEC7D6,0x50DEC7D6},{0x50DEC7D6,0xF95C78ED},{0x50DEC7D6,0x50DEC7D6},{0x50DEC7D6,0xF95C78ED},{0x50DEC7D6,0x50DEC7D6}},{{0x50DEC7D6,0xF95C78ED},{0x50DEC7D6,0x50DEC7D6},{0x50DEC7D6,0xF95C78ED},{0x50DEC7D6,0x50DEC7D6},{0x50DEC7D6,0xF95C78ED},{0x50DEC7D6,0x50DEC7D6}}};
        int32_t * const **l_177[5];
        int32_t * const ***l_176 = &l_177[4];
        int32_t * const *** const *l_175 = &l_176;
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_177[i] = (void*)0;
        g_101 = (safe_rshift_func_uint8_t_u_s((((safe_add_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((~(l_93 && (safe_rshift_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(0U, (255U != g_15))), (p_75 != (void*)0))))), g_9[0])), ((1 >= (safe_div_func_uint8_t_u_u(l_100, l_100))) > l_100))) && p_72) ^ l_93), p_74));
        l_122[4][2][1] = (((p_72 < (safe_add_func_int8_t_s_s(((0x07 && (((g_9[0] != g_101) <= (safe_sub_func_int16_t_s_s(((safe_div_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((!((safe_sub_func_uint32_t_u_u((safe_mod_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((!(safe_lshift_func_int16_t_s_s(3, 2))), (((((-1) == l_120[1][0][0]) && (l_121 == &g_14)) < (*g_14)) && (-1)))), g_9[2])), 8)) == 0x107178D3)), 7)), g_15)) || l_120[6][1][0]), g_101))) ^ 0x68CBA474)) || l_120[0][0][0]), (-5)))) & l_120[8][4][0]) && (*g_14));
        for (p_72 = 0; (p_72 <= 0); p_72 += 1)
        {
            int16_t l_151 = 0xBFC9;
            int32_t *l_158 = &l_122[4][2][1];
            int32_t l_173 = 0x3CEA4A79;
            int32_t ****l_189 = &g_132;
            for (p_73 = 0; (p_73 <= 0); p_73 += 1)
            {
                return g_85;
            }
            if (((safe_lshift_func_uint16_t_u_u(0xD736, 3)) < (safe_unary_minus_func_int32_t_s((&g_14 != l_121)))))
            {
                return p_74;
            }
            else
            {
                uint32_t l_135 = 0x3BB0DECA;
                int16_t l_196 = 1;
                int32_t l_216 = 0x57F069B6;
                for (p_73 = 0; (p_73 <= 0); p_73 += 1)
                {
                    uint32_t l_129 = 0x79296E56;
                }
                l_158 = func_10(p_72, p_74);
                ((void) sizeof ((l_158 == 0) ? 1 : 0), __extension__ ({ if (l_158 == 0) ; else __assert_fail ("l_158 == 0", "/tmp/tmp8jyjg0u2.c", 534, __extension__ __PRETTY_FUNCTION__); }));
                if (((g_85 < ((safe_mul_func_uint16_t_u_u(((g_9[0] > 0x9E3D) == ((0x995DD102 > (p_75 != (void*)0)) <= (((*g_133) != (*p_76)) < ((safe_mod_func_uint32_t_u_u(p_73, l_135)) < p_74)))), 1)) != (*l_128))) == 0xAA5B))
                {
                    int32_t *l_167 = (void*)0;
                    int32_t *l_168 = &l_122[4][2][1];
                    int32_t *****l_190 = &l_189;
                    (*l_168) = (safe_div_func_uint16_t_u_u(0xB283, g_85));
                    for (l_93 = 0; (l_93 <= 1); l_93 += 1)
                    {
                        (*l_168) = ((&l_121 == (void*)0) && (*g_14));
                        (*p_75) = (void*)0;
                    }
                    (*l_168) = (safe_rshift_func_uint8_t_u_s(l_135, (safe_rshift_func_uint16_t_u_u(((l_173 || (+((g_101 == (l_175 != l_178)) <= (safe_rshift_func_int16_t_s_s((-2), 15))))) < (safe_div_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(((((*l_178) == l_189) ^ 0x045A3BC6) <= 65535U), g_101)), p_74))), 9))));
                    l_190 = &l_189;
                }
                else
                {
                    int16_t l_221[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_221[i] = 0;
                    if ((0x4359 | ((safe_rshift_func_int8_t_s_u((safe_add_func_int32_t_s_s((*l_128), (****l_189))), 4)) != (!((***g_138) <= l_135)))))
                    {
                        (*g_133) = (*p_75);
                        ((void) sizeof ((g_14 == 0) ? 1 : 0), __extension__ ({ if (g_14 == 0) ; else __assert_fail ("g_14 == 0", "/tmp/tmp8jyjg0u2.c", 559, __extension__ __PRETTY_FUNCTION__); }));
                    }
                    else
                    {
                        int32_t *l_199 = &g_15;
                        (*p_75) = (*g_133);
                        p_74 = (l_196 && (safe_mod_func_uint16_t_u_u((((*p_76) != l_199) < 65535U), 0xCE7F)));
                        (*p_75) = func_10(p_74, (safe_mul_func_uint16_t_u_u(((safe_sub_func_uint32_t_u_u(p_73, ((safe_add_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u(l_135, (safe_add_func_uint32_t_u_u(g_101, p_73)))), (((safe_lshift_func_uint8_t_u_u(1U, p_74)) || (~g_9[0])) != (!65535U)))) && g_9[1]))) & (*l_199)), p_73)));
                        (*p_75) = func_10((1 || (0x6923BBB9 < ((65535U != 0) == (safe_mod_func_uint32_t_u_u(g_101, l_216))))), g_85);
                    }
                    ((void) sizeof ((g_14 == &g_15 || g_14 == 0) ? 1 : 0), __extension__ ({ if (g_14 == &g_15 || g_14 == 0) ; else __assert_fail ("g_14 == &g_15 || g_14 == 0", "/tmp/tmp8jyjg0u2.c", 574, __extension__ __PRETTY_FUNCTION__); }));
                    for (l_216 = 0; (l_216 <= 1); l_216 += 1)
                    {
                        int32_t ***l_220 = &g_133;
                        g_217 = ((void*)0 != (**g_138));
                        p_74 = (safe_mul_func_int16_t_s_s(p_73, ((((**l_178) != l_220) <= g_15) && (l_221[0] > (((((safe_sub_func_int8_t_s_s(((((0x8F7BE493 < (((safe_rshift_func_int16_t_s_s((0xCB || (-7)), (safe_mul_func_int16_t_s_s(p_73, p_72)))) || g_228) & p_74)) | g_15) && 0x58D7) > l_196), p_74)) & g_9[0]) <= (-7)) | l_221[0]) <= g_85)))));
                        return p_73;
                    }
                    return l_216;
                }
                return l_196;
            }
        }
    }
    if ((safe_sub_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(l_233[5], 0)), (p_73 ^ p_73))))
    {
        int32_t *l_238 = &l_233[5];
        int32_t *** const **l_259 = (void*)0;
        int16_t l_263 = 0x8F25;
        (*l_238) = (safe_lshift_func_int16_t_s_s((g_101 <= (safe_rshift_func_int8_t_s_s(g_15, p_73))), (&p_76 != &p_76)));
        for (g_228 = (-16); (g_228 <= 47); g_228 = safe_add_func_uint32_t_u_u(g_228, 4))
        {
            int32_t *l_248[1];
            int i;
            for (i = 0; i < 1; i++)
                l_248[i] = &l_233[5];
            (*l_238) = (*l_238);
            for (p_73 = (-22); (p_73 == 48); ++p_73)
            {
                for (p_72 = 0; (p_72 >= 18); p_72 = safe_add_func_int32_t_s_s(p_72, 8))
                {
                    uint32_t l_245 = 0U;
                    (*l_238) = (*l_238);
                    if (l_245)
                        continue;
                }
                for (g_85 = 0; (g_85 <= 1); g_85 = safe_add_func_uint32_t_u_u(g_85, 9))
                {
                    (**l_180) = l_248[0];
                }
            }
            (*l_238) = (safe_sub_func_int32_t_s_s((*l_238), 0x091520A1));
            if ((**g_133))
                continue;
        }
        if ((safe_lshift_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(p_74, ((((safe_lshift_func_uint8_t_u_u(((void*)0 == l_259), 3)) && (((*l_238) || (((((void*)0 != p_76) != ((*l_238) | 0U)) > (safe_div_func_uint8_t_u_u(((l_262[0] & g_9[0]) != (*l_238)), 0x6D))) ^ p_73)) || g_217)) < p_74) && g_9[3]))), p_73)) <= p_74), l_263)))
        {
            uint32_t l_283 = 4294967295U;
            int32_t l_284[1][2];
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 2; j++)
                    l_284[i][j] = 0;
            }
lbl_282:
            for (g_217 = 28; (g_217 >= 42); g_217++)
            {
                uint32_t l_276 = 4294967292U;
                int32_t ** const l_277 = &l_128;
                int32_t **l_280[9] = {&l_128,&l_238,&l_128,&l_128,&l_238,&l_128,&l_128,&l_238,&l_128};
                int32_t **l_281 = &g_14;
                int i;
                (*l_238) = (g_15 & ((**g_139) != (safe_add_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(((safe_add_func_int8_t_s_s((safe_mul_func_int16_t_s_s(((safe_rshift_func_int16_t_s_u(g_101, g_101)) <= 0U), p_74)), l_276)) == ((*g_138) == l_277)), 3)), p_72))));
                for (g_101 = 0; (g_101 != 42); g_101++)
                {
                    return g_101;
                }
                if (g_101)
                    goto lbl_282;
                (*l_281) = (**g_138);
            }
            l_284[0][0] = l_283;
            (*l_238) = (safe_div_func_int32_t_s_s((*g_14), p_74));
            (*l_238) = ((safe_mul_func_uint16_t_u_u(1U, (((safe_div_func_int8_t_s_s((safe_div_func_uint8_t_u_u(((safe_unary_minus_func_int16_t_s(((*l_238) > (((safe_rshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_s((2 && (**g_133)), 6)), 3)) >= ((p_74 > (safe_sub_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((~0x8BB56DCD), (~(((safe_sub_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s((safe_add_func_int8_t_s_s((safe_mod_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(p_74, 5)), (safe_mod_func_uint16_t_u_u(((0 >= 0xBA2F) == l_284[0][0]), 0x637E)))), g_217)), g_217)), g_85)) & (*l_128)) > p_73)))), 0xB44E)), p_73))) >= g_9[0])) ^ (**g_139))))) >= p_72), 0xD1)), g_9[0])) || l_284[0][1]) && p_72))) && g_9[0]);
        }
        else
        {
            int32_t ****l_321 = &g_132;
            for (g_85 = 0; (g_85 <= 5); g_85 += 1)
            {
                int32_t ** const *l_318 = (void*)0;
                int32_t ** const **l_319 = &l_318;
                (*l_319) = l_318;
                if (g_217)
                    goto lbl_320;
                for (g_101 = 0; (g_101 <= 5); g_101 += 1)
                {
                    int i;
                    return l_262[g_85];
                }
            }
        }
    }
    else
    {
        for (p_72 = 0; (p_72 <= (-22)); p_72 = safe_sub_func_int16_t_s_s(p_72, 2))
        {
            int16_t l_377 = 1;
            for (g_101 = 23; (g_101 != 36); ++g_101)
            {
                (*p_76) = l_366;
            }
            if ((**g_133))
                break;
            if ((**g_139))
            {
                for (p_74 = 0; p_74 < 8; p_74 += 1)
                {
                    for (g_217 = 0; g_217 < 9; g_217 += 1)
                    {
                        for (g_85 = 0; g_85 < 3; g_85 += 1)
                        {
                            l_182[p_74][g_217][g_85] = &g_15;
                        }
                    }
                }
                (***l_179) = func_10((safe_lshift_func_uint8_t_u_u(g_228, 1)), (p_73 > (safe_add_func_int16_t_s_s(((((void*)0 == &p_76) < (l_371 || (safe_add_func_int8_t_s_s(g_217, ((((+((-1) == (-8))) & ((g_9[4] || 0x8A) >= l_377)) > (*l_128)) != 0x15))))) | 0xB6BF4324), 65531U))));
            }
            else
            {
                int8_t l_378[5];
                int i;
                for (i = 0; i < 5; i++)
                    l_378[i] = 1;
                for (l_371 = 0; (l_371 <= 0); l_371 += 1)
                {
                    if (l_378[0])
                        break;
                    return l_377;
                }
            }
        }
    }
    (***l_179) = (*l_181);
    (*l_366) = 0xD69C6D1A;
    return (*l_128);
}
int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    for (i = 0; i < 5; i++)
    {
        csmith_sink_ = g_9[i];
    }
    csmith_sink_ = g_15;
    csmith_sink_ = g_85;
    csmith_sink_ = g_101;
    csmith_sink_ = g_217;
    csmith_sink_ = g_228;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 6; k++)
            {
                csmith_sink_ = g_469[i][j][k];
            }
        }
    }
    for (i = 0; i < 2; i++)
    {
        csmith_sink_ = g_557[i];
    }
    csmith_sink_ = g_567;
    csmith_sink_ = g_702;
    csmith_sink_ = g_722;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 4; k++)
            {
                csmith_sink_ = g_769[i][j][k];
            }
        }
    }
    platform_main_end(0,0);
    return 0;
}
