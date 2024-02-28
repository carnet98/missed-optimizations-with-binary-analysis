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
static int32_t g_2 = 0x63185299;
static int32_t g_4 = 1;
static int32_t g_21 = (-2);
static uint8_t g_22 = 249U;
static int32_t g_48 = 0x0271DBCA;
static int32_t *g_80 = &g_4;
static int32_t g_85 = (-10);
static int8_t g_113 = 0;
static int32_t g_115 = (-4);
static int32_t g_137 = 0x3EDB7DE5;
static int32_t g_170 = 0xB1C03A75;
static uint32_t g_172 = 0x3D13389D;
static int32_t **g_195 = &g_80;
static int32_t ***g_194 = &g_195;
static uint8_t g_238 = 1U;
static int32_t *g_263 = (void*)0;
static uint8_t g_386 = 1U;
static uint16_t g_462 = 65531U;
static int32_t g_495 = 0;
static int8_t g_497 = 0xEB;
static int16_t g_518 = 0x2FFE;
static int16_t g_520 = 0;
static uint16_t g_583 = 1U;
static int8_t g_602 = 0x9C;
static int32_t g_604 = (-7);
static int32_t g_823 = 0x539AEC78;
static int32_t g_845 = 0x083F6B17;
static uint8_t g_868 = 0xBD;
static uint8_t g_963 = 0x9E;
static int16_t g_1010 = 0xF036;
static uint8_t g_1039 = 0U;
static int32_t g_1152 = 0x3F2F6242;
static int8_t g_1173 = (-4);
static uint16_t g_1179 = 1U;
static int32_t *** const *g_1190 = &g_194;
static int32_t **g_1202 = &g_263;
static int32_t g_1356 = (-1);
static uint16_t g_1512 = 0xCE29;
static uint32_t g_1582 = 0x9F7F8599;
static int32_t g_1622 = (-4);
static int8_t g_1687 = 0x8C;
static uint32_t g_1692 = 0xB4934260;
static int16_t g_1720 = 0x48DF;
static uint32_t g_1789 = 0xEBE362F3;
static int32_t g_1798 = 0x1103DFD8;
static uint32_t g_1895 = 0x7AFDA37C;
inline static int32_t func_1(void);
inline static int32_t func_32(int32_t * p_33, int32_t * p_34, uint8_t p_35, uint8_t p_36, int16_t p_37);
static int32_t * func_38(int32_t * p_39, int32_t * p_40, uint16_t p_41);
static int32_t * func_42(uint16_t p_43, int32_t p_44);
inline static int32_t func_56(uint32_t p_57, int32_t * p_58, int32_t * p_59, int32_t * p_60, int32_t * p_61);
static int16_t func_64(uint16_t p_65, uint8_t p_66, int32_t * p_67);
static uint8_t func_72(const int32_t p_73, uint32_t p_74, uint32_t p_75, int32_t * p_76);
static uint8_t func_83(int32_t p_84);
inline static int32_t func_86(uint32_t p_87, const int16_t p_88, uint16_t p_89);
inline static uint16_t func_93(int32_t * p_94, int32_t p_95);
inline static int32_t func_1(void)
{
    int32_t l_7 = 1;
    uint32_t l_16 = 0x8E418A52;
    const int32_t *l_1875 = &g_1622;
    const int32_t * const *l_1874 = &l_1875;
    int32_t l_1879 = 0x0C89AA39;
    int32_t l_1893 = 0xDB2AC470;
    if (g_2)
    {
        int32_t *l_3 = &g_4;
        int32_t *l_5 = (void*)0;
        int32_t *l_6 = (void*)0;
        int32_t *l_8 = &g_4;
        int32_t *l_9 = &g_4;
        int32_t *l_10 = &g_4;
        int32_t *l_11 = &g_4;
        int32_t *l_12 = &g_4;
        int32_t l_13 = (-1);
        int32_t *l_14 = &l_13;
        int32_t *l_15 = &l_13;
        int16_t l_46 = 1;
        ++l_16;
        for (g_4 = (-26); (g_4 == (-6)); g_4++)
        {
            int16_t l_45 = 0;
            const int32_t * const **l_1876 = &l_1874;
            g_21 |= l_16;
            g_22++;
            (*l_14) = (safe_mod_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(0, (safe_rshift_func_uint8_t_u_u(((+(g_2 > func_32(func_38(func_42(l_45, l_46), &g_4, ((((g_22 != ((~(safe_add_func_int32_t_s_s(l_16, ((g_2 , &g_4) != (void*)0)))) & g_21)) , g_22) >= l_45) && l_45)), (*g_195), g_462, g_868, l_45))) >= g_1179), 1)))), g_22));
            (*l_1876) = l_1874;
        }
    }
    else
    {
        int32_t l_1880 = 3;
        int32_t *l_1881 = &g_4;
        int32_t *l_1882 = &g_4;
        int32_t *l_1883 = &g_48;
        int32_t *l_1884 = &g_115;
        int32_t *l_1885 = &g_604;
        int32_t *l_1886 = &g_1622;
        int32_t *l_1887 = &g_823;
        int32_t *l_1888 = &g_115;
        int32_t *l_1889 = &g_1798;
        int32_t *l_1890 = &l_1879;
        int32_t *l_1891 = &l_1879;
        int32_t *l_1892 = &g_823;
        int32_t *l_1894 = &g_48;
        (***g_1190) = (**g_194);
        for (g_1039 = 0; (g_1039 < 12); g_1039 = safe_add_func_int8_t_s_s(g_1039, 1))
        {
            if ((***g_194))
                break;
        }
        g_1895++;
    }
    return (**g_195);
}
inline static int32_t func_32(int32_t * p_33, int32_t * p_34, uint8_t p_35, uint8_t p_36, int16_t p_37)
{
    int32_t *l_1790 = &g_48;
    int32_t *l_1791 = &g_115;
    int32_t *l_1792 = (void*)0;
    int32_t *l_1793 = &g_1622;
    int32_t *l_1794 = &g_1152;
    int32_t *l_1795 = &g_1622;
    int32_t *l_1796 = (void*)0;
    int32_t *l_1797 = (void*)0;
    int32_t l_1799 = 0x850EC48C;
    int32_t *l_1800 = (void*)0;
    int32_t *l_1801 = &g_115;
    int32_t l_1802 = 0x41765759;
    int32_t *l_1803 = &g_604;
    int32_t *l_1804 = &g_1622;
    int32_t l_1805 = 0x2E865901;
    int32_t l_1806 = 0x7D9B6A35;
    int32_t *l_1807 = &g_823;
    int32_t *l_1808 = &l_1806;
    int32_t *l_1809 = &l_1799;
    int32_t *l_1810 = &g_48;
    int32_t *l_1811 = &l_1802;
    int32_t *l_1812 = &g_1798;
    int32_t *l_1813 = &g_48;
    int32_t l_1814 = 1;
    int32_t *l_1815 = &l_1799;
    int32_t l_1816 = (-1);
    int32_t *l_1817 = &l_1814;
    int32_t *l_1818 = &l_1802;
    int32_t *l_1819 = (void*)0;
    int32_t *l_1820 = &g_48;
    int32_t *l_1821 = &g_1622;
    int32_t *l_1822 = (void*)0;
    int32_t *l_1823 = (void*)0;
    int32_t *l_1824 = (void*)0;
    int32_t *l_1825 = &l_1802;
    int32_t *l_1826 = &g_115;
    int32_t *l_1827 = &g_115;
    int32_t *l_1828 = &g_823;
    int32_t *l_1829 = &g_115;
    int32_t *l_1830 = &g_115;
    int32_t *l_1831 = &g_115;
    int32_t *l_1832 = (void*)0;
    int32_t *l_1833 = (void*)0;
    int32_t *l_1834 = &l_1814;
    int32_t *l_1835 = &l_1816;
    int32_t *l_1836 = &l_1802;
    int32_t *l_1837 = &l_1806;
    int32_t *l_1838 = &g_1622;
    int32_t l_1839 = (-8);
    int32_t *l_1840 = (void*)0;
    int32_t *l_1841 = &g_1798;
    int32_t *l_1842 = &g_823;
    int32_t *l_1843 = &g_1152;
    int32_t *l_1844 = &g_48;
    int32_t l_1845 = 0xAA4A9AE1;
    int32_t *l_1846 = &l_1814;
    int32_t *l_1847 = &l_1839;
    int32_t *l_1848 = &l_1802;
    int32_t *l_1849 = (void*)0;
    int32_t *l_1850 = &g_115;
    int32_t *l_1851 = &l_1816;
    int32_t *l_1852 = &l_1805;
    int32_t *l_1853 = &g_604;
    int32_t *l_1854 = (void*)0;
    int32_t *l_1855 = &g_1798;
    int32_t *l_1856 = (void*)0;
    int32_t l_1857 = 0x9E6FC04F;
    int32_t *l_1858 = &g_1798;
    int32_t *l_1859 = (void*)0;
    int32_t *l_1860 = &l_1802;
    int32_t l_1861 = 0;
    int32_t *l_1862 = (void*)0;
    int32_t *l_1863 = (void*)0;
    int32_t *l_1864 = (void*)0;
    uint32_t l_1865 = 4294967295U;
    l_1865--;
    (*l_1831) = (safe_rshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_s(((*g_80) < (safe_rshift_func_uint8_t_u_s(0x2E, 4))), 6)), p_37));
    return (*g_80);
}
static int32_t * func_38(int32_t * p_39, int32_t * p_40, uint16_t p_41)
{
    uint32_t l_54 = 3U;
    int32_t *l_1607 = &g_115;
    int32_t l_1646 = (-1);
    int32_t l_1658 = (-1);
    for (p_41 = (-16); (p_41 != 9); p_41 = safe_add_func_int8_t_s_s(p_41, 5))
    {
        const uint32_t l_77 = 0x82E70D5D;
        const uint16_t l_1623 = 0x08BD;
        int32_t l_1637 = 0xBB571E9F;
        int32_t l_1689 = 1;
        int32_t ****l_1713 = (void*)0;
        int32_t *****l_1712 = &l_1713;
    }
    return p_39;
}
static int32_t * func_42(uint16_t p_43, int32_t p_44)
{
    int32_t *l_47 = &g_48;
    (*l_47) = g_4;
    return l_47;
}
inline static int32_t func_56(uint32_t p_57, int32_t * p_58, int32_t * p_59, int32_t * p_60, int32_t * p_61)
{
    uint8_t l_1608 = 0x1B;
    const uint8_t l_1621 = 0xEC;
    l_1608 ^= (*p_61);
    for (g_1173 = 0; (g_1173 >= 18); g_1173 = safe_add_func_int32_t_s_s(g_1173, 2))
    {
        (*p_60) ^= l_1608;
    }
    (*p_58) = ((safe_mod_func_int16_t_s_s((l_1608 , p_57), (safe_add_func_int32_t_s_s(((l_1608 , ((((((255U >= (safe_mod_func_int8_t_s_s(p_57, (((+(safe_rshift_func_int8_t_s_s((0xB10A != (((((((l_1608 && (+l_1608)) , ((l_1608 < g_495) > 255U)) , (void*)0) == (**g_194)) == l_1608) | l_1621) > p_57)), g_1039))) , (-1)) || g_1622)))) & 0x7EFF) & 0x3D4E) > g_868) , p_57) | l_1621)) <= 0), (*p_61))))) != 0);
    return (*p_61);
}
static int16_t func_64(uint16_t p_65, uint8_t p_66, int32_t * p_67)
{
    int32_t *l_1281 = &g_823;
    uint16_t l_1288 = 3U;
    int8_t l_1438 = (-1);
    int32_t l_1473 = (-1);
    int32_t l_1475 = (-4);
    int32_t l_1485 = 0x2D74A654;
    int32_t l_1502 = 6;
    uint8_t l_1528 = 0xC9;
    uint8_t l_1552 = 0x52;
    l_1281 = p_67;
    ((void) sizeof ((l_1281 == &g_4) ? 1 : 0), __extension__ ({ if (l_1281 == &g_4) ; else __assert_fail ("l_1281 == &g_4", "/tmp/tmp2cvjczhy.c", 315, __extension__ __PRETTY_FUNCTION__); }));
    if (((((0x7F != g_1179) >= p_65) ^ (((g_85 , (safe_rshift_func_int8_t_s_s(((safe_mul_func_int8_t_s_s((((-4) <= ((0x24 != (((*g_194) != (*g_194)) > 1)) != p_65)) || (*l_1281)), (*l_1281))) < (*l_1281)), l_1288))) == (-1)) , p_65)) != (***g_194)))
    {
        int32_t *l_1291 = &g_4;
        int32_t ****l_1379 = &g_194;
        int32_t *l_1380 = &g_4;
        int32_t l_1519 = 0x9B56DB16;
        for (g_1152 = 17; (g_1152 == 24); g_1152 = safe_add_func_uint16_t_u_u(g_1152, 5))
        {
            int16_t l_1292 = (-5);
            int32_t l_1293 = (-1);
            l_1292 &= (l_1291 != l_1281);
            l_1293 = (*l_1281);
        }
        if ((safe_lshift_func_int8_t_s_s((*l_1281), ((&g_194 != (void*)0) , ((((((((safe_add_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_u((p_67 != (***g_1190)), (safe_add_func_int32_t_s_s(0, ((safe_mul_func_int16_t_s_s(p_66, (((*l_1281) == (safe_sub_func_uint32_t_u_u(0U, 4294967287U))) > 2U))) >= g_137))))) , g_85), g_602)) != (*l_1281)) <= (****g_1190)) != (***g_194)) , (*g_80)) | g_604) , p_66) ^ p_65)))))
        {
            uint8_t l_1320 = 0x70;
            const int8_t l_1321 = 1;
            int32_t l_1322 = 0x5D744FBF;
            int32_t **l_1332 = &g_80;
            int32_t ** const * const l_1334 = &g_195;
            int32_t ** const * const *l_1333 = &l_1334;
            int32_t l_1439 = 0x9512585D;
            int32_t l_1442 = 0;
            int32_t l_1505 = 0;
            l_1322 ^= (safe_rshift_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((((safe_add_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s(((safe_mul_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_s((safe_add_func_int8_t_s_s(l_1320, l_1320)), l_1320)) && l_1321), p_66)) <= (*l_1281)), 6)), (((((0x690C1FEA ^ (*l_1281)) >= (0xE3 ^ g_48)) , 1U) , 4294967295U) , (*l_1291)))) , 0x39) & 0xB1), g_845)), (*l_1281)));
            (*g_1202) = func_42(g_868, (((!(safe_add_func_uint32_t_u_u(0x59859F88, ((((g_823 & l_1321) , ((safe_add_func_uint16_t_u_u((((((safe_rshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_u((l_1332 != (*g_194)), 5)), (((void*)0 == &g_194) , ((g_137 >= 0x5FF14E1C) , 0xC2)))) < p_66) & p_66) < (*p_67)) && g_583), (**l_1332))) , (**l_1332))) || (*l_1281)) ^ g_963)))) , p_65) == p_65));
            ((void) sizeof ((g_263 == &g_48) ? 1 : 0), __extension__ ({ if (g_263 == &g_48) ; else __assert_fail ("g_263 == &g_48", "/tmp/tmp2cvjczhy.c", 343, __extension__ __PRETTY_FUNCTION__); }));
            (**g_1202) = 0x51546035;
            if ((l_1333 != &g_194))
            {
                uint8_t l_1337 = 250U;
                (*g_263) &= ((&g_194 != (void*)0) , (safe_mul_func_uint8_t_u_u(l_1337, (!(g_495 , ((safe_mul_func_uint16_t_u_u((p_66 > (((p_65 , (((safe_rshift_func_uint16_t_u_u((***l_1334), 4)) && ((((safe_lshift_func_uint8_t_u_s((((*g_1190) != (void*)0) >= g_22), 3)) < g_1039) & p_65) < 1U)) | p_66)) <= g_2) && (**g_195))), 0U)) || 0xA8AF))))));
                for (g_495 = 0; (g_495 < 11); ++g_495)
                {
                    return (*l_1281);
                }
                (**g_1202) = (((safe_lshift_func_int8_t_s_u(6, (((safe_mod_func_int8_t_s_s((~(((**g_1190) != &p_67) > (safe_sub_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(((((((p_65 == (g_1356 , ((~(p_65 & g_1039)) <= ((safe_mul_func_int8_t_s_s((1 > (((****l_1333) | (*g_80)) ^ (*l_1291))), 0x7E)) < (*l_1291))))) == 0x835C4BE5) , (-1)) ^ 0xEAC821C4) <= 0x5E28EF6C) , p_66), l_1337)), g_604)))), 1)) ^ (-9)) | g_1039))) ^ 9U) == g_1356);
            }
            else
            {
                uint8_t l_1378 = 0U;
                int32_t **l_1433 = &l_1281;
                int32_t ** const * const **l_1434 = (void*)0;
                int32_t l_1476 = 5;
                for (l_1288 = (-8); (l_1288 >= 21); ++l_1288)
                {
                    uint8_t l_1381 = 252U;
                    int32_t l_1382 = 0xED4F4B00;
                }
                if (((void*)0 != (*g_1202)))
                {
lbl_1435:
                    (*g_1202) = func_42((l_1379 == (void*)0), g_48);
                }
                else
                {
                    int16_t l_1422 = 0;
                    if (((**g_1190) == (**l_1379)))
                    {
                        int32_t ***l_1432 = &l_1332;
                        (**l_1334) = p_67;
                        (***l_1333) = func_42((safe_mod_func_int16_t_s_s(l_1422, p_66)), ((safe_rshift_func_uint8_t_u_u(p_65, l_1422)) , ((safe_mul_func_int8_t_s_s((+p_66), g_1152)) < (p_65 > (safe_lshift_func_int16_t_s_s((((safe_add_func_uint32_t_u_u(((l_1432 != (*l_1379)) >= (*l_1281)), p_65)) | 1U) && 0U), 6))))));
                        ((void) sizeof ((g_80 == &g_48) ? 1 : 0), __extension__ ({ if (g_80 == &g_48) ; else __assert_fail ("g_80 == &g_48", "/tmp/tmp2cvjczhy.c", 380, __extension__ __PRETTY_FUNCTION__); }));
                        (**l_1332) = (&p_67 != l_1433);
                        return g_4;
                    }
                    else
                    {
                        (*g_263) = ((****l_1333) || g_497);
                        (***l_1379) = func_42(p_65, p_65);
                        ((void) sizeof ((g_80 == &g_48) ? 1 : 0), __extension__ ({ if (g_80 == &g_48) ; else __assert_fail ("g_80 == &g_48", "/tmp/tmp2cvjczhy.c", 389, __extension__ __PRETTY_FUNCTION__); }));
                    }
                    ((void) sizeof ((g_80 == &g_48) ? 1 : 0), __extension__ ({ if (g_80 == &g_48) ; else __assert_fail ("g_80 == &g_48", "/tmp/tmp2cvjczhy.c", 392, __extension__ __PRETTY_FUNCTION__); }));
                    l_1434 = &l_1333;
                    ((void) sizeof ((l_1434 == &l_1333) ? 1 : 0), __extension__ ({ if (l_1434 == &l_1333) ; else __assert_fail ("l_1434 == &l_1333", "/tmp/tmp2cvjczhy.c", 395, __extension__ __PRETTY_FUNCTION__); }));
                    if (g_1356)
                        goto lbl_1435;
                }
                ((void) sizeof ((g_80 == &g_48 || g_80 == &g_4) ? 1 : 0), __extension__ ({ if (g_80 == &g_48 || g_80 == &g_4) ; else __assert_fail ("g_80 == &g_48 || g_80 == &g_4", "/tmp/tmp2cvjczhy.c", 400, __extension__ __PRETTY_FUNCTION__); }));
                ((void) sizeof ((l_1434 == &l_1333 || l_1434 == 0) ? 1 : 0), __extension__ ({ if (l_1434 == &l_1333 || l_1434 == 0) ; else __assert_fail ("l_1434 == &l_1333 || l_1434 == 0", "/tmp/tmp2cvjczhy.c", 401, __extension__ __PRETTY_FUNCTION__); }));
                for (g_1039 = 0; (g_1039 >= 12); g_1039 = safe_add_func_int32_t_s_s(g_1039, 2))
                {
                    int32_t *l_1440 = &g_115;
                    int32_t *l_1441 = &l_1322;
                    int32_t *l_1443 = &g_823;
                    int32_t *l_1444 = &g_1152;
                    int32_t *l_1445 = &g_115;
                    int32_t *l_1446 = &g_604;
                    int32_t *l_1447 = &g_823;
                    int32_t *l_1448 = &g_604;
                    int32_t *l_1449 = &g_1152;
                    int32_t *l_1450 = &g_1152;
                    int32_t *l_1451 = &g_48;
                    int32_t *l_1452 = &g_48;
                    int32_t *l_1453 = &g_48;
                    int32_t *l_1454 = &g_604;
                    int32_t *l_1455 = (void*)0;
                    int32_t *l_1456 = &g_823;
                    int32_t *l_1457 = (void*)0;
                    int32_t *l_1458 = &l_1322;
                    int32_t *l_1459 = &g_48;
                    int32_t *l_1460 = &g_115;
                    int32_t *l_1461 = &g_48;
                    int32_t *l_1462 = (void*)0;
                    int32_t *l_1463 = &g_604;
                    int32_t *l_1464 = (void*)0;
                    int32_t *l_1465 = (void*)0;
                    int32_t *l_1466 = (void*)0;
                    int32_t *l_1467 = &g_115;
                    int32_t *l_1468 = &l_1442;
                    int32_t *l_1469 = &g_823;
                    int32_t *l_1470 = &g_48;
                    int32_t *l_1471 = &g_823;
                    int32_t *l_1472 = &l_1442;
                    int32_t *l_1474 = &l_1322;
                    int32_t *l_1477 = &l_1322;
                    int32_t *l_1478 = &l_1439;
                    int32_t *l_1479 = &l_1442;
                    int32_t *l_1480 = &g_115;
                    int32_t *l_1481 = &l_1473;
                    int32_t l_1482 = 0xEE57EFF8;
                    int32_t *l_1483 = &l_1439;
                    int32_t *l_1484 = &l_1482;
                    int32_t *l_1486 = &g_115;
                    int32_t *l_1487 = (void*)0;
                    int32_t *l_1488 = &g_823;
                    int32_t *l_1489 = &l_1476;
                    int32_t l_1490 = 8;
                    int32_t *l_1491 = &l_1442;
                    int32_t *l_1492 = &l_1482;
                    int32_t *l_1493 = &g_48;
                    int32_t *l_1494 = &l_1490;
                    int32_t *l_1495 = (void*)0;
                    int32_t *l_1496 = (void*)0;
                    int32_t *l_1497 = &g_823;
                    int32_t *l_1498 = &g_1152;
                    int32_t *l_1499 = &l_1476;
                    int32_t *l_1500 = &l_1475;
                    int32_t *l_1501 = &l_1473;
                    int32_t *l_1503 = &l_1473;
                    int32_t *l_1504 = (void*)0;
                    int32_t *l_1506 = &l_1505;
                    int32_t *l_1507 = &l_1502;
                    int32_t *l_1508 = &l_1490;
                    int32_t *l_1509 = &l_1439;
                    int32_t *l_1510 = &g_1152;
                    int32_t *l_1511 = &g_1152;
                    g_1512--;
                    if ((*p_67))
                        continue;
                }
            }
            ((void) sizeof ((g_80 == &g_48 || g_80 == &g_4) ? 1 : 0), __extension__ ({ if (g_80 == &g_48 || g_80 == &g_4) ; else __assert_fail ("g_80 == &g_48 || g_80 == &g_4", "/tmp/tmp2cvjczhy.c", 475, __extension__ __PRETTY_FUNCTION__); }));
        }
        else
        {
            uint32_t l_1522 = 0U;
            int32_t *l_1523 = &g_48;
            int32_t *l_1524 = &l_1502;
            int32_t *l_1525 = &g_48;
            int32_t *l_1526 = &g_1152;
            int32_t *l_1527 = &l_1519;
            l_1475 &= (g_583 && p_65);
            (*l_1523) ^= (safe_sub_func_uint32_t_u_u(g_604, ((safe_add_func_int32_t_s_s(((void*)0 != &g_194), (((((l_1519 , &g_194) != (void*)0) == g_85) | (g_22 , (safe_sub_func_uint16_t_u_u(p_65, l_1522)))) < (*l_1291)))) , p_66)));
            --l_1528;
            (*l_1525) = 0x90BA106F;
        }
        ((void) sizeof ((g_80 == &g_48 || g_80 == &g_4) ? 1 : 0), __extension__ ({ if (g_80 == &g_48 || g_80 == &g_4) ; else __assert_fail ("g_80 == &g_48 || g_80 == &g_4", "/tmp/tmp2cvjczhy.c", 491, __extension__ __PRETTY_FUNCTION__); }));
        ((void) sizeof ((g_263 == 0 || g_263 == &g_48) ? 1 : 0), __extension__ ({ if (g_263 == 0 || g_263 == &g_48) ; else __assert_fail ("g_263 == 0 || g_263 == &g_48", "/tmp/tmp2cvjczhy.c", 492, __extension__ __PRETTY_FUNCTION__); }));
    }
    else
    {
        int32_t l_1533 = 0x1AEA7878;
        for (l_1438 = 0; (l_1438 > 9); ++l_1438)
        {
            l_1533 = 1;
        }
    }
    ((void) sizeof ((g_80 == &g_48 || g_80 == &g_4) ? 1 : 0), __extension__ ({ if (g_80 == &g_48 || g_80 == &g_4) ; else __assert_fail ("g_80 == &g_48 || g_80 == &g_4", "/tmp/tmp2cvjczhy.c", 503, __extension__ __PRETTY_FUNCTION__); }));
    ((void) sizeof ((g_263 == 0 || g_263 == &g_48) ? 1 : 0), __extension__ ({ if (g_263 == 0 || g_263 == &g_48) ; else __assert_fail ("g_263 == 0 || g_263 == &g_48", "/tmp/tmp2cvjczhy.c", 504, __extension__ __PRETTY_FUNCTION__); }));
    for (g_823 = 0; (g_823 >= 11); g_823++)
    {
        const int8_t l_1544 = 0x60;
        int32_t l_1567 = 0x2ABD31E9;
        if ((*p_67))
            break;
        for (g_1173 = 15; (g_1173 <= (-26)); g_1173 = safe_sub_func_int32_t_s_s(g_1173, 9))
        {
            int16_t l_1547 = (-7);
            int32_t l_1553 = 0x1EA9369D;
            for (g_604 = 0; (g_604 == 21); g_604++)
            {
                int32_t *l_1554 = (void*)0;
                int32_t *l_1555 = &g_1152;
                int32_t *l_1556 = &l_1473;
                int32_t *l_1557 = &l_1485;
                int32_t *l_1558 = &l_1475;
                int32_t *l_1559 = (void*)0;
                int32_t *l_1560 = &g_1152;
                int32_t *l_1561 = &l_1553;
                int32_t *l_1562 = &l_1475;
                int32_t *l_1563 = (void*)0;
                int32_t *l_1564 = &l_1475;
                int32_t *l_1565 = &g_48;
                int32_t *l_1566 = &g_1152;
                int32_t *l_1568 = &g_115;
                int32_t *l_1569 = &l_1485;
                int32_t *l_1570 = &l_1502;
                int32_t *l_1571 = &l_1475;
                int32_t *l_1572 = &g_1152;
                int32_t *l_1573 = &l_1567;
                int32_t *l_1574 = &l_1553;
                int32_t *l_1575 = &l_1553;
                int32_t *l_1576 = &g_1152;
                int32_t *l_1577 = &l_1502;
                int32_t *l_1578 = &g_115;
                int32_t *l_1579 = &l_1475;
                int32_t *l_1580 = &g_48;
                int32_t *l_1581 = &l_1502;
                if ((**g_195))
                    break;
                l_1553 = (((safe_sub_func_int8_t_s_s((((safe_mul_func_uint8_t_u_u(0x98, l_1544)) | (p_65 != (((((((safe_add_func_uint32_t_u_u((l_1547 || (((-3) == (g_48 , (safe_sub_func_uint8_t_u_u(((safe_add_func_uint8_t_u_u((*l_1281), 0x80)) | l_1552), g_520)))) , 0xCF29)), 9U)) , p_65) || (-6)) == p_65) > l_1544) , g_845) <= p_66))) ^ (*l_1281)), 253U)) , (*l_1281)) , (**g_195));
                --g_1582;
            }
            return g_1173;
        }
    }
    l_1281 = func_42(((safe_add_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((((safe_sub_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(p_66, (safe_lshift_func_uint8_t_u_u((((safe_lshift_func_int16_t_s_s(1, (*l_1281))) ^ (*l_1281)) || (safe_sub_func_int32_t_s_s(0, (*l_1281)))), (0x49DC15A8 < (safe_rshift_func_int8_t_s_u(((safe_rshift_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((((((p_65 == g_85) > g_386) , (void*)0) != (void*)0) | (*l_1281)), (*p_67))), p_65)) && g_386), p_65))))))), 15)), p_66)) >= 1U) & p_65), g_113)), p_65)) && 0xE1CB4B5E), p_65);
    ((void) sizeof ((l_1281 == &g_48) ? 1 : 0), __extension__ ({ if (l_1281 == &g_48) ; else __assert_fail ("l_1281 == &g_48", "/tmp/tmp2cvjczhy.c", 554, __extension__ __PRETTY_FUNCTION__); }));
    return p_66;
}
static uint8_t func_72(const int32_t p_73, uint32_t p_74, uint32_t p_75, int32_t * p_76)
{
    uint16_t l_1268 = 0x8C1B;
    int32_t l_1269 = 1;
    l_1269 |= ((safe_mul_func_uint16_t_u_u((2 & (g_80 != (((p_73 , 4294967287U) , (((safe_add_func_uint8_t_u_u(func_83(g_85), (safe_lshift_func_int16_t_s_s(0, 15)))) >= (-1)) & (1 & (*p_76)))) , (void*)0))), 0U)) , l_1268);
    l_1269 = ((p_73 || (+((((((((4294967287U == (safe_rshift_func_int8_t_s_u((safe_mul_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((&g_194 == &g_194), (g_170 >= (safe_mod_func_int16_t_s_s(0x0B5A, (safe_mul_func_int16_t_s_s(g_497, (((((l_1269 && (g_2 <= g_518)) && g_238) && p_75) , 0xECE631CF) > (*p_76))))))))), p_74)), l_1268))) != 0x217A7B13) == p_74) < l_1268) != (*p_76)) && l_1269) , g_868) == l_1269))) >= p_75);
    return g_1173;
}
static uint8_t func_83(int32_t p_84)
{
    int32_t l_90 = 1;
    int32_t ***l_566 = &g_195;
    int32_t l_635 = 4;
    int32_t *l_638 = &g_604;
    int32_t *l_664 = &g_4;
    uint32_t l_696 = 4294967286U;
    int32_t **l_705 = &g_263;
    int32_t *l_706 = &l_635;
    const int32_t * const **l_738 = (void*)0;
    uint16_t l_766 = 65531U;
    uint32_t l_982 = 0U;
    int32_t l_1150 = 6;
    uint8_t l_1265 = 0x44;
    return g_462;
}
inline static int32_t func_86(uint32_t p_87, const int16_t p_88, uint16_t p_89)
{
    int32_t *l_590 = &g_48;
    int32_t *l_597 = &g_115;
    for (p_87 = (-14); (p_87 != 14); p_87++)
    {
        int32_t l_569 = 0x7BEFE16E;
        int32_t *l_570 = &g_115;
        int32_t l_584 = 0;
        (*l_570) = l_569;
        for (g_462 = 8; (g_462 != 56); g_462 = safe_add_func_int32_t_s_s(g_462, 6))
        {
            int32_t l_573 = (-3);
            return l_573;
        }
        for (g_495 = 0; (g_495 < 23); g_495++)
        {
            int32_t ****l_576 = &g_194;
            uint32_t l_589 = 4294967291U;
            l_584 &= (((void*)0 == l_576) > (safe_rshift_func_int16_t_s_u((safe_mul_func_uint16_t_u_u((safe_add_func_int16_t_s_s(((*g_80) , g_583), g_495)), ((void*)0 == &g_195))), g_115)));
            if (p_88)
                continue;
            for (g_22 = 0; (g_22 != 46); ++g_22)
            {
                return (*l_570);
            }
            (*l_570) &= ((safe_rshift_func_int16_t_s_s(((0x23 & l_589) , (-1)), 9)) ^ p_88);
        }
    }
    l_590 = (*g_195);
    ((void) sizeof ((l_590 == &g_4) ? 1 : 0), __extension__ ({ if (l_590 == &g_4) ; else __assert_fail ("l_590 == &g_4", "/tmp/tmp2cvjczhy.c", 634, __extension__ __PRETTY_FUNCTION__); }));
    (*g_194) = (void*)0;
    ((void) sizeof ((g_195 == 0) ? 1 : 0), __extension__ ({ if (g_195 == 0) ; else __assert_fail ("g_195 == 0", "/tmp/tmp2cvjczhy.c", 637, __extension__ __PRETTY_FUNCTION__); }));
    (*l_597) = ((safe_mul_func_int8_t_s_s(0x9B, (0xD16D > (((0x0B && (safe_mul_func_uint16_t_u_u(0xEB08, g_48))) , (safe_mul_func_int16_t_s_s(((((*l_590) , ((l_590 == (void*)0) < (l_590 == (void*)0))) >= p_89) , g_238), 7U))) || g_21)))) > (*l_590));
    return p_88;
}
inline static uint16_t func_93(int32_t * p_94, int32_t p_95)
{
    const uint16_t l_111 = 0x95AE;
    int32_t l_143 = 0x7469BA6C;
    uint8_t l_186 = 0x3E;
    int32_t *l_231 = (void*)0;
    const int32_t * const **l_239 = (void*)0;
    int32_t l_374 = (-10);
    int32_t l_375 = 0xBAAA912A;
    for (g_48 = 6; (g_48 >= 6); --g_48)
    {
        int8_t l_106 = 6;
        uint32_t l_112 = 1U;
        int32_t *l_114 = &g_115;
        g_113 |= (((((((safe_mul_func_int8_t_s_s(((safe_lshift_func_int8_t_s_u((safe_sub_func_int8_t_s_s((safe_mul_func_int8_t_s_s((0xC4EF && (&p_95 != (p_95 , (void*)0))), p_95)), ((((0x16A1 != l_106) , (*g_80)) , ((safe_add_func_int8_t_s_s(((safe_lshift_func_int16_t_s_s(((((*p_94) < l_111) , l_112) < g_48), 2)) | (*g_80)), p_95)) , p_95)) >= g_21))), 6)) == g_2), g_2)) > l_112) || p_95) , l_112) && g_21) , p_95) >= (-1));
        (*l_114) |= 0xC0A206E7;
    }
    for (g_21 = (-1); (g_21 > (-27)); --g_21)
    {
        int32_t *l_125 = &g_48;
        int32_t l_148 = 0;
        int32_t l_158 = 0x3DA4F77C;
        int32_t l_159 = 1;
        int32_t l_230 = 9;
        uint16_t l_268 = 0xF031;
        int32_t * const *l_289 = &g_263;
        int32_t * const **l_288 = &l_289;
        uint32_t l_293 = 0x1EC8D397;
        int16_t l_370 = 0x17D8;
        uint16_t l_470 = 1U;
        if (((void*)0 != &g_115))
        {
            uint16_t l_128 = 7U;
            int32_t **l_129 = &l_125;
            (*l_125) = ((g_22 && l_111) , (~(safe_mul_func_int8_t_s_s(((void*)0 == &g_4), ((safe_add_func_uint16_t_u_u(((safe_sub_func_int32_t_s_s((l_125 == &g_48), (safe_add_func_int16_t_s_s((l_128 || p_95), g_115)))) , p_95), 0xC771)) & p_95)))));
            (*l_129) = &g_48;
        }
        else
        {
            int32_t *l_130 = &g_48;
            int32_t *l_131 = &g_115;
            int32_t *l_132 = (void*)0;
            int32_t *l_133 = &g_48;
            int32_t *l_134 = &g_115;
            int32_t *l_135 = &g_48;
            int32_t *l_136 = &g_48;
            int32_t *l_138 = &g_115;
            int32_t *l_139 = &g_48;
            int32_t *l_140 = (void*)0;
            int32_t *l_141 = &g_48;
            int32_t *l_142 = &g_115;
            int32_t *l_144 = &g_48;
            int32_t *l_145 = &g_48;
            int32_t *l_146 = &g_115;
            int32_t *l_147 = &g_115;
            int32_t *l_149 = &l_148;
            int32_t *l_150 = &g_48;
            int32_t *l_151 = &g_48;
            int32_t *l_152 = &g_115;
            int32_t *l_153 = &g_115;
            int32_t *l_154 = &g_115;
            int32_t *l_155 = &l_143;
            int32_t *l_156 = &g_48;
            int32_t *l_157 = (void*)0;
            int32_t *l_160 = (void*)0;
            int32_t *l_161 = &g_115;
            int32_t *l_162 = &g_48;
            int32_t *l_163 = &l_143;
            int32_t *l_164 = (void*)0;
            int32_t *l_165 = (void*)0;
            int32_t *l_166 = &l_158;
            int32_t *l_167 = &g_115;
            int32_t *l_168 = &g_48;
            int32_t *l_169 = &l_158;
            int32_t *l_171 = &l_159;
            int32_t **l_175 = &l_147;
            g_172++;
            if ((*g_80))
                break;
            (*l_175) = (void*)0;
            ((void) sizeof ((l_147 == 0) ? 1 : 0), __extension__ ({ if (l_147 == 0) ; else __assert_fail ("l_147 == 0", "/tmp/tmp2cvjczhy.c", 729, __extension__ __PRETTY_FUNCTION__); }));
        }
    }
    return g_386;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_2;
    csmith_sink_ = g_4;
    csmith_sink_ = g_21;
    csmith_sink_ = g_22;
    csmith_sink_ = g_48;
    csmith_sink_ = g_85;
    csmith_sink_ = g_113;
    csmith_sink_ = g_115;
    csmith_sink_ = g_137;
    csmith_sink_ = g_170;
    csmith_sink_ = g_172;
    csmith_sink_ = g_238;
    csmith_sink_ = g_386;
    csmith_sink_ = g_462;
    csmith_sink_ = g_495;
    csmith_sink_ = g_497;
    csmith_sink_ = g_518;
    csmith_sink_ = g_520;
    csmith_sink_ = g_583;
    csmith_sink_ = g_602;
    csmith_sink_ = g_604;
    csmith_sink_ = g_823;
    csmith_sink_ = g_845;
    csmith_sink_ = g_868;
    csmith_sink_ = g_963;
    csmith_sink_ = g_1010;
    csmith_sink_ = g_1039;
    csmith_sink_ = g_1152;
    csmith_sink_ = g_1173;
    csmith_sink_ = g_1179;
    csmith_sink_ = g_1356;
    csmith_sink_ = g_1512;
    csmith_sink_ = g_1582;
    csmith_sink_ = g_1622;
    csmith_sink_ = g_1687;
    csmith_sink_ = g_1692;
    csmith_sink_ = g_1720;
    csmith_sink_ = g_1789;
    csmith_sink_ = g_1798;
    csmith_sink_ = g_1895;
    platform_main_end(0,0);
    return 0;
}
