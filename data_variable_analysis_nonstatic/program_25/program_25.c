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
static uint32_t g_2 = 1U;
static int32_t g_4 = 9;
static int32_t g_49 = 0x690B2811;
static uint8_t g_56 = 0x48;
static int32_t g_80 = 1;
static int32_t g_85 = 0xA36B4E13;
static int32_t **g_112 = (void*)0;
static int32_t ***g_111 = &g_112;
static uint32_t g_144 = 0xD1E39FD5;
static int32_t g_196[2][5][5] = {{{(-1), 0, (-1), 0, (-1)}, {(-1), 0, (-1), 0, (-1)}, {(-1), 0, (-1), 0, (-1)}, {(-1), 0, (-1), 0, (-1)}, {(-1), 0, (-1), 0, (-1)}}, {{(-1), 0, (-1), 0, (-1)}, {(-1), 0, (-1), 0, (-1)}, {(-1), 0, (-1), 0, (-1)}, {(-1), 0, (-1), 0, (-1)}, {(-1), 0, (-1), 0, (-1)}}};
static int8_t g_264 = 1;
static int16_t g_309 = 0x3827;
static uint32_t g_348 = 0xFB127619;
static int32_t g_403 = (-1);
static int32_t g_536 = (-2);
static int8_t g_706 = 5;
static uint8_t g_847 = 0x03;
static int32_t *g_857[2] = {(void*)0, (void*)0};
static int8_t g_904 = 9;
static int16_t g_934 = 0x236C;
static uint8_t func_1(void);
inline static int32_t func_7(int32_t * p_8, int32_t p_9, int32_t * p_10, uint32_t p_11, int32_t * p_12);
static int32_t * func_13(int32_t * p_14, uint8_t p_15, uint32_t p_16);
static int32_t * func_17(int16_t p_18, uint8_t p_19, int32_t p_20, int16_t p_21);
inline static uint32_t func_37(int32_t ** p_38);
static int32_t ** func_39(uint32_t p_40, int32_t * p_41, int32_t * p_42, int32_t ** p_43);
static uint32_t func_44(uint8_t p_45, int32_t *** p_46);
inline static int32_t func_59(int32_t p_60, uint8_t p_61, int32_t *** p_62, int8_t p_63);
static int16_t func_66(uint32_t p_67, int16_t p_68);
inline static uint32_t func_90(int32_t p_91, int32_t * p_92, int32_t *** p_93, uint32_t p_94);
static uint8_t func_1(void)
{
    int32_t *l_3[7][2][7] = {{{&g_4, &g_4, &g_4, &g_4, &g_4, &g_4, &g_4}, {&g_4, &g_4, &g_4, &g_4, &g_4, &g_4, &g_4}}, {{&g_4, &g_4, &g_4, &g_4, &g_4, &g_4, &g_4}, {&g_4, &g_4, &g_4, &g_4, &g_4, &g_4, &g_4}}, {{&g_4, &g_4, &g_4, &g_4, &g_4, &g_4, &g_4}, {&g_4, &g_4, &g_4, &g_4, &g_4, &g_4, &g_4}}, {{&g_4, &g_4, &g_4, &g_4, &g_4, &g_4, &g_4}, {&g_4, &g_4, &g_4, &g_4, &g_4, &g_4, &g_4}}, {{&g_4, &g_4, &g_4, &g_4, &g_4, &g_4, &g_4}, {&g_4, &g_4, &g_4, &g_4, &g_4, &g_4, &g_4}}, {{&g_4, &g_4, &g_4, &g_4, &g_4, &g_4, &g_4}, {&g_4, &g_4, &g_4, &g_4, &g_4, &g_4, &g_4}}, {{&g_4, &g_4, &g_4, &g_4, &g_4, &g_4, &g_4}, {&g_4, &g_4, &g_4, &g_4, &g_4, &g_4, &g_4}}};
    uint32_t l_26 = 0x974CA779;
    int8_t l_737 = (-2);
    uint16_t l_738 = 65528U;
    int8_t l_739 = 0x17;
    uint8_t l_763 = 0x48;
    int32_t ***l_920 = &g_112;
    int32_t l_952 = 0x8C2EC8CE;
    int16_t l_957 = 0x5252;
    uint8_t l_982 = 0x5F;
    int i, j, k;
    g_4 = (g_2 < g_2);
    if ((((safe_sub_func_int32_t_s_s(func_7(func_13(func_17(g_2, g_4, (safe_add_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u(l_26, 4)), 0x894FF545)), g_2), (safe_lshift_func_int16_t_s_s((g_264 ^ ((safe_lshift_func_int16_t_s_s((g_264 , (safe_sub_func_uint8_t_u_u(((safe_add_func_int32_t_s_s((safe_rshift_func_int8_t_s_u(l_737, g_264)), g_403)) & l_738), l_739))), g_144)) >= g_264)), g_348)), g_309), g_309, l_3[2][1][5], l_763, l_3[3][0][1]), g_904)) , &g_85) == l_3[6][0][3]))
    {
        uint32_t l_911 = 5U;
        uint8_t l_940 = 0x9A;
        int32_t l_941 = (-7);
        uint16_t l_960 = 1U;
        if ((+(safe_rshift_func_int8_t_s_u(g_2, (safe_rshift_func_uint16_t_u_u((l_911 == (safe_mod_func_uint16_t_u_u(((safe_div_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u((l_911 & l_911), ((((g_80 >= 4294967295U) == (((safe_sub_func_uint32_t_u_u((l_911 , ((-1) | ((void*)0 != l_920))), l_911)) <= g_49) & 1)) != (-6)) ^ g_904))), (-7))) , g_56), 1))), g_847))))))
        {
            int16_t l_942 = 1;
            int32_t l_946 = (-2);
            int32_t l_947[7][8] = {{(-5), (-2), 9, 0xBDE5CD80, 0x5B532775, 4, 0x5B532775, 0xBDE5CD80}, {(-5), (-2), 9, 0xBDE5CD80, 0x5B532775, 4, 0x5B532775, 0xBDE5CD80}, {(-5), (-2), 9, 0xBDE5CD80, 0x5B532775, 4, 0x5B532775, 0xBDE5CD80}, {(-5), (-2), 9, 0xBDE5CD80, 0x5B532775, 4, 0x5B532775, 0xBDE5CD80}, {(-5), (-2), 9, 0xBDE5CD80, 0x5B532775, 4, 0x5B532775, 0xBDE5CD80}, {(-5), (-2), 9, 0xBDE5CD80, 0x5B532775, 4, 0x5B532775, 0xBDE5CD80}, {(-5), (-2), 9, 0xBDE5CD80, 0x5B532775, 4, 0x5B532775, 0xBDE5CD80}};
            int16_t l_948[1][1];
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 1; j++)
                    l_948[i][j] = 0xFDFA;
            }
            l_941 |= (safe_mod_func_int32_t_s_s(0xBDEF6FC6, (safe_rshift_func_uint16_t_u_s(((+(safe_lshift_func_int8_t_s_s(l_911, ((((safe_mod_func_uint8_t_u_u(0x91, ((safe_sub_func_int16_t_s_s((((-1) == ((((safe_lshift_func_uint16_t_u_s(((g_847 & g_934) , g_934), (~(((((safe_div_func_uint8_t_u_u(((safe_mod_func_int8_t_s_s(((void*)0 == (*l_920)), l_911)) ^ 0), g_264)) <= g_80) != 253U) , g_80) | 4294967295U)))) == 1) , &g_112) != &g_112)) < g_847), l_940)) , 0x14))) != 0x4015) != 0xA9) ^ 0x42A2)))) , g_80), g_144))));
            l_941 = (l_942 || ((((!(((safe_lshift_func_int16_t_s_u((((*l_920) != (void*)0) , l_946), g_144)) != l_947[1][2]) ^ (((((l_911 , ((((65532U | ((((0x7C84 > l_946) | g_2) <= 4294967287U) | l_911)) <= 0U) && g_847) & l_942)) ^ g_144) != 4294967288U) < l_948[0][0]) , 7))) , (void*)0) != &l_941) , (-1)));
        }
        else
        {
            int32_t l_949[3][9] = {{(-7), 0xF6F057B7, 7, 0xF6F057B7, (-7), 0x5BAD79A5, (-7), 0xF6F057B7, 7}, {(-7), 0xF6F057B7, 7, 0xF6F057B7, (-7), 0x5BAD79A5, (-7), 0xF6F057B7, 7}, {(-7), 0xF6F057B7, 7, 0xF6F057B7, (-7), 0x5BAD79A5, (-7), 0xF6F057B7, 7}};
            int i, j;
            l_941 = l_949[2][3];
        }
        l_960 |= (safe_add_func_int16_t_s_s(l_952, ((&g_80 != (g_309 , (void*)0)) == (((safe_lshift_func_uint16_t_u_u(((safe_mod_func_uint32_t_u_u(l_957, ((g_85 , (((safe_rshift_func_int16_t_s_s((g_264 <= ((void*)0 != &g_112)), g_264)) <= 0U) , l_941)) ^ g_2))) < 65535U), l_940)) , l_941) < 0x773A3302))));
        l_941 = ((((((((l_941 <= (((*g_111) == (void*)0) != (((&g_112 != &g_112) , (void*)0) != (void*)0))) >= ((((g_904 , (l_960 || l_941)) <= l_940) < g_536) && g_403)) != 255U) ^ g_847) < l_941) ^ 254U) | g_847) ^ g_403);
    }
    else
    {
        int32_t l_977[3][7][7] = {{{7, 8, 1, (-1), 8, 0xDBD1F981, 8}, {7, 8, 1, (-1), 8, 0xDBD1F981, 8}, {7, 8, 1, (-1), 8, 0xDBD1F981, 8}, {7, 8, 1, (-1), 8, 0xDBD1F981, 8}, {7, 8, 1, (-1), 8, 0xDBD1F981, 8}, {7, 8, 1, (-1), 8, 0xDBD1F981, 8}, {7, 8, 1, (-1), 8, 0xDBD1F981, 8}}, {{7, 8, 1, (-1), 8, 0xDBD1F981, 8}, {7, 8, 1, (-1), 8, 0xDBD1F981, 8}, {7, 8, 1, (-1), 8, 0xDBD1F981, 8}, {7, 8, 1, (-1), 8, 0xDBD1F981, 8}, {7, 8, 1, (-1), 8, 0xDBD1F981, 8}, {7, 8, 1, (-1), 8, 0xDBD1F981, 8}, {7, 8, 1, (-1), 8, 0xDBD1F981, 8}}, {{7, 8, 1, (-1), 8, 0xDBD1F981, 8}, {7, 8, 1, (-1), 8, 0xDBD1F981, 8}, {7, 8, 1, (-1), 8, 0xDBD1F981, 8}, {7, 8, 1, (-1), 8, 0xDBD1F981, 8}, {7, 8, 1, (-1), 8, 0xDBD1F981, 8}, {7, 8, 1, (-1), 8, 0xDBD1F981, 8}, {7, 8, 1, (-1), 8, 0xDBD1F981, 8}}};
        int32_t ***l_980 = &g_112;
        int32_t l_981 = 0x51644D4D;
        int i, j, k;
        l_982 = (l_920 != (((g_144 && (((safe_add_func_uint16_t_u_u((((safe_lshift_func_uint8_t_u_u((0xC2286A1C | ((safe_div_func_int32_t_s_s(((+g_934) | (((safe_add_func_uint8_t_u_u((safe_add_func_int32_t_s_s(0x2CBA714C, (((((+(safe_add_func_uint16_t_u_u((((((l_977[1][1][4] , ((safe_add_func_uint16_t_u_u(g_348, (((void*)0 != l_980) <= 0x07))) | 0x4045)) , l_981) != 0x89) < g_348) ^ 0xBA), g_348))) , g_264) , g_49) != g_2) , l_977[2][3][3]))), 1)) , g_2) != l_981)), g_934)) , l_977[1][1][4])), g_4)) | l_977[1][1][4]) , g_309), g_934)) && g_144) , 0U)) || 0xFFF3) , &g_112));
    }
    return g_144;
}
inline static int32_t func_7(int32_t * p_8, int32_t p_9, int32_t * p_10, uint32_t p_11, int32_t * p_12)
{
    int32_t l_782 = 0;
    int32_t l_804 = (-8);
    int8_t l_809 = 1;
    int32_t l_810 = 0x6540C192;
    int32_t l_811 = 0x1196C244;
    int32_t l_813 = (-1);
    int32_t l_877 = 0;
    int32_t l_888[1][4][5] = {{{0xC3F9D8FD, 0xC3F9D8FD, 0, 0xC3F9D8FD, 0xC3F9D8FD}, {0xC3F9D8FD, 0xC3F9D8FD, 0, 0xC3F9D8FD, 0xC3F9D8FD}, {0xC3F9D8FD, 0xC3F9D8FD, 0, 0xC3F9D8FD, 0xC3F9D8FD}, {0xC3F9D8FD, 0xC3F9D8FD, 0, 0xC3F9D8FD, 0xC3F9D8FD}}};
    int32_t l_889 = (-1);
    int8_t l_890 = 0xEF;
    int32_t **l_905 = &g_857[1];
    int i, j, k;
    for (g_403 = 9; (g_403 != 22); g_403++)
    {
        uint32_t l_768[3];
        int32_t ***l_775[7];
        uint32_t l_796 = 4294967295U;
        uint32_t l_814[2][4];
        int32_t l_852 = 0xDD4C8963;
        int8_t l_870 = 0x64;
        int16_t l_891 = 0;
        uint32_t l_892 = 4294967295U;
        int i, j;
        for (i = 0; i < 3; i++)
            l_768[i] = 0x57F83EEE;
        for (i = 0; i < 7; i++)
            l_775[i] = &g_112;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 4; j++)
                l_814[i][j] = 0xF791B6AA;
        }
        if ((safe_sub_func_uint8_t_u_u(l_768[1], (safe_add_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(0x635D, 0x29B3)), (g_196[0][4][2] & (safe_add_func_uint16_t_u_u(((&g_112 == l_775[2]) <= (safe_rshift_func_uint8_t_u_s((((void*)0 != &g_49) , (((safe_rshift_func_uint8_t_u_s((((((safe_add_func_uint16_t_u_u((1 >= 5), p_9)) , (-9)) >= l_782) == l_782) < l_782), 6)) <= l_782) , g_49)), 7))), l_782))))))))
        {
            for (g_4 = (-6); (g_4 < (-12)); --g_4)
            {
                uint8_t l_797 = 0x8A;
                g_536 |= (safe_sub_func_uint32_t_u_u((safe_div_func_int32_t_s_s(((0x9169 > ((+(safe_add_func_uint32_t_u_u(0x7B4FEE64, (safe_div_func_int32_t_s_s(((-5) && ((safe_div_func_int8_t_s_s(l_796, (((l_797 , (safe_add_func_uint32_t_u_u((g_80 >= (l_782 == ((safe_lshift_func_uint16_t_u_u(0xAA3C, 1)) != 0xE1A86BFC))), 2))) && 0U) , p_9))) >= g_85)), (*p_8)))))) , 0U)) <= (-5)), 4294967293U)), g_706));
            }
            for (g_56 = 0; (g_56 < 24); g_56 = safe_add_func_int32_t_s_s(g_56, 5))
            {
                (*p_8) = (4294967295U && (0x710497A0 < 0x690EEB0F));
            }
            if ((*p_8))
                continue;
        }
        else
        {
            int8_t l_805[5][7][7] = {{{0xF2, 0xB8, 1, 1, 0xD9, 8, 0xA7}, {0xF2, 0xB8, 1, 1, 0xD9, 8, 0xA7}, {0xF2, 0xB8, 1, 1, 0xD9, 8, 0xA7}, {0xF2, 0xB8, 1, 1, 0xD9, 8, 0xA7}, {0xF2, 0xB8, 1, 1, 0xD9, 8, 0xA7}, {0xF2, 0xB8, 1, 1, 0xD9, 8, 0xA7}, {0xF2, 0xB8, 1, 1, 0xD9, 8, 0xA7}}, {{0xF2, 0xB8, 1, 1, 0xD9, 8, 0xA7}, {0xF2, 0xB8, 1, 1, 0xD9, 8, 0xA7}, {0xF2, 0xB8, 1, 1, 0xD9, 8, 0xA7}, {0xF2, 0xB8, 1, 1, 0xD9, 8, 0xA7}, {0xF2, 0xB8, 1, 1, 0xD9, 8, 0xA7}, {0xF2, 0xB8, 1, 1, 0xD9, 8, 0xA7}, {0xF2, 0xB8, 1, 1, 0xD9, 8, 0xA7}}, {{0xF2, 0xB8, 1, 1, 0xD9, 8, 0xA7}, {0xF2, 0xB8, 1, 1, 0xD9, 8, 0xA7}, {0xF2, 0xB8, 1, 1, 0xD9, 8, 0xA7}, {0xF2, 0xB8, 1, 1, 0xD9, 8, 0xA7}, {0xF2, 0xB8, 1, 1, 0xD9, 8, 0xA7}, {0xF2, 0xB8, 1, 1, 0xD9, 8, 0xA7}, {0xF2, 0xB8, 1, 1, 0xD9, 8, 0xA7}}, {{0xF2, 0xB8, 1, 1, 0xD9, 8, 0xA7}, {0xF2, 0xB8, 1, 1, 0xD9, 8, 0xA7}, {0xF2, 0xB8, 1, 1, 0xD9, 8, 0xA7}, {0xF2, 0xB8, 1, 1, 0xD9, 8, 0xA7}, {0xF2, 0xB8, 1, 1, 0xD9, 8, 0xA7}, {0xF2, 0xB8, 1, 1, 0xD9, 8, 0xA7}, {0xF2, 0xB8, 1, 1, 0xD9, 8, 0xA7}}, {{0xF2, 0xB8, 1, 1, 0xD9, 8, 0xA7}, {0xF2, 0xB8, 1, 1, 0xD9, 8, 0xA7}, {0xF2, 0xB8, 1, 1, 0xD9, 8, 0xA7}, {0xF2, 0xB8, 1, 1, 0xD9, 8, 0xA7}, {0xF2, 0xB8, 1, 1, 0xD9, 8, 0xA7}, {0xF2, 0xB8, 1, 1, 0xD9, 8, 0xA7}, {0xF2, 0xB8, 1, 1, 0xD9, 8, 0xA7}}};
            int32_t l_806 = 0xC9B14EFC;
            int32_t l_807 = 0x5A3D0C8A;
            int32_t l_808 = (-8);
            int32_t l_812 = 0x465DD647;
            int8_t l_829 = 0xB4;
            int32_t l_831 = (-1);
            int32_t *l_873[10] = {&l_807, &l_807, &l_804, &l_807, &l_807, &l_804, &l_807, &l_807, &l_804, &l_807};
            uint32_t l_885 = 1U;
            int i, j, k;
            l_814[1][1]++;
            for (p_11 = 0; (p_11 <= 2); p_11 += 1)
            {
                int32_t l_819 = (-1);
                int32_t l_820 = 0xC818409A;
                int32_t l_824[10] = {0xB200073D, 0xB200073D, 8, 0xB200073D, 0xB200073D, 8, 0xB200073D, 0xB200073D, 8, 0xB200073D};
                int i;
                if ((l_768[p_11] , 0))
                {
                    int32_t l_823 = 0;
                    int8_t l_825 = (-9);
                    int32_t l_827 = 0xCBED9CA6;
                    int32_t l_828 = 0xD33D2075;
                    int32_t l_830 = 0xF24E422F;
                    int32_t l_832 = 0x80AFEC4E;
                    int32_t l_834 = 1;
                    int32_t l_835[3][7] = {{0xD9F1DE2E, 4, 0, (-6), (-6), 0, 4}, {0xD9F1DE2E, 4, 0, (-6), (-6), 0, 4}, {0xD9F1DE2E, 4, 0, (-6), (-6), 0, 4}};
                    int i, j;
                    p_12 = p_8;
                    if (l_768[p_11])
                    {
                        int i;
                        return l_768[p_11];
                    }
                    else
                    {
                        (*p_8) = (*p_12);
                        if ((*p_12))
                            continue;
                    }
                    for (g_264 = (-1); (g_264 > 4); g_264 = safe_add_func_uint8_t_u_u(g_264, 6))
                    {
                        int32_t l_821 = 0x6C629E31;
                        int32_t l_822 = 0x12BBB2E3;
                        int32_t l_826 = 0x82580CFA;
                        int32_t l_833 = 1;
                        int32_t l_836 = (-4);
                        uint8_t l_837 = 0x2F;
                        --l_837;
                        (*p_8) = ((&l_811 != p_10) & (~0x0EA1B0C6));
                        return l_821;
                    }
                }
                else
                {
                    int32_t l_853 = 1;
                    int32_t l_863 = 0x3CBBAB10;
                    for (l_829 = 28; (l_829 != 23); --l_829)
                    {
                        (*p_8) ^= ((safe_rshift_func_uint8_t_u_u((safe_div_func_int16_t_s_s(((((*g_111) == (*g_111)) == ((g_847 > 0U) == (safe_div_func_int32_t_s_s((-4), (g_536 , 0x0A842721))))) , (safe_mod_func_int8_t_s_s(((&p_10 != (void*)0) && 0U), g_403))), g_144)), p_9)) != p_11);
                        (*p_8) = (-1);
                        if ((*p_8))
                            break;
                        if (l_813)
                            continue;
                    }
                    if ((*p_8))
                    {
                        uint32_t l_854[7][5][7] = {{{0xFD8DF908, 8U, 4294967295U, 4294967295U, 1U, 0xDE33A296, 4294967295U}, {0xFD8DF908, 8U, 4294967295U, 4294967295U, 1U, 0xDE33A296, 4294967295U}, {0xFD8DF908, 8U, 4294967295U, 4294967295U, 1U, 0xDE33A296, 4294967295U}, {0xFD8DF908, 8U, 4294967295U, 4294967295U, 1U, 0xDE33A296, 4294967295U}, {0xFD8DF908, 8U, 4294967295U, 4294967295U, 1U, 0xDE33A296, 4294967295U}}, {{0xFD8DF908, 8U, 4294967295U, 4294967295U, 1U, 0xDE33A296, 4294967295U}, {0xFD8DF908, 8U, 4294967295U, 4294967295U, 1U, 0xDE33A296, 4294967295U}, {0xFD8DF908, 8U, 4294967295U, 4294967295U, 1U, 0xDE33A296, 4294967295U}, {0xFD8DF908, 8U, 4294967295U, 4294967295U, 1U, 0xDE33A296, 4294967295U}, {0xFD8DF908, 8U, 4294967295U, 4294967295U, 1U, 0xDE33A296, 4294967295U}}, {{0xFD8DF908, 8U, 4294967295U, 4294967295U, 1U, 0xDE33A296, 4294967295U}, {0xFD8DF908, 8U, 4294967295U, 4294967295U, 1U, 0xDE33A296, 4294967295U}, {0xFD8DF908, 8U, 4294967295U, 4294967295U, 1U, 0xDE33A296, 4294967295U}, {0xFD8DF908, 8U, 4294967295U, 4294967295U, 1U, 0xDE33A296, 4294967295U}, {0xFD8DF908, 8U, 4294967295U, 4294967295U, 1U, 0xDE33A296, 4294967295U}}, {{0xFD8DF908, 8U, 4294967295U, 4294967295U, 1U, 0xDE33A296, 4294967295U}, {0xFD8DF908, 8U, 4294967295U, 4294967295U, 1U, 0xDE33A296, 4294967295U}, {0xFD8DF908, 8U, 4294967295U, 4294967295U, 1U, 0xDE33A296, 4294967295U}, {0xFD8DF908, 8U, 4294967295U, 4294967295U, 1U, 0xDE33A296, 4294967295U}, {0xFD8DF908, 8U, 4294967295U, 4294967295U, 1U, 0xDE33A296, 4294967295U}}, {{0xFD8DF908, 8U, 4294967295U, 4294967295U, 1U, 0xDE33A296, 4294967295U}, {0xFD8DF908, 8U, 4294967295U, 4294967295U, 1U, 0xDE33A296, 4294967295U}, {0xFD8DF908, 8U, 4294967295U, 4294967295U, 1U, 0xDE33A296, 4294967295U}, {0xFD8DF908, 8U, 4294967295U, 4294967295U, 1U, 0xDE33A296, 4294967295U}, {0xFD8DF908, 8U, 4294967295U, 4294967295U, 1U, 0xDE33A296, 4294967295U}}, {{0xFD8DF908, 8U, 4294967295U, 4294967295U, 1U, 0xDE33A296, 4294967295U}, {0xFD8DF908, 8U, 4294967295U, 4294967295U, 1U, 0xDE33A296, 4294967295U}, {0xFD8DF908, 8U, 4294967295U, 4294967295U, 1U, 0xDE33A296, 4294967295U}, {0xFD8DF908, 8U, 4294967295U, 4294967295U, 1U, 0xDE33A296, 4294967295U}, {0xFD8DF908, 8U, 4294967295U, 4294967295U, 1U, 0xDE33A296, 4294967295U}}, {{0xFD8DF908, 8U, 4294967295U, 4294967295U, 1U, 0xDE33A296, 4294967295U}, {0xFD8DF908, 8U, 4294967295U, 4294967295U, 1U, 0xDE33A296, 4294967295U}, {0xFD8DF908, 8U, 4294967295U, 4294967295U, 1U, 0xDE33A296, 4294967295U}, {0xFD8DF908, 8U, 4294967295U, 4294967295U, 1U, 0xDE33A296, 4294967295U}, {0xFD8DF908, 8U, 4294967295U, 4294967295U, 1U, 0xDE33A296, 4294967295U}}};
                        int i, j, k;
                        p_8 = (void*)0;
                        l_854[3][4][2]++;
                    }
                    else
                    {
                        g_857[1] = p_8;
                    }
                    for (g_2 = (-18); (g_2 != 31); ++g_2)
                    {
                        uint16_t l_860 = 0U;
                        if (l_805[3][0][5])
                            break;
                        ++l_860;
                        l_863 = 1;
                        p_12 = p_12;
                    }
                    l_873[8] = func_13((((-1) && ((safe_sub_func_uint8_t_u_u(((p_9 && (g_80 >= (safe_mod_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(2, (l_853 & l_870))), (safe_mod_func_uint8_t_u_u((2 && ((void*)0 != &p_12)), 0xE4)))))) < g_144), p_11)) && 5)) , (void*)0), l_824[9], g_4);
                }
                l_820 &= ((p_9 >= l_824[5]) >= (g_403 | (safe_add_func_int8_t_s_s((1 | ((!l_877) && ((safe_add_func_int32_t_s_s(l_819, l_824[2])) == 0x24EE))), ((safe_unary_minus_func_int8_t_s(0x0A)) <= g_80)))));
                return l_820;
            }
            for (l_796 = 0; (l_796 > 15); l_796++)
            {
                l_813 &= (((*g_111) != (void*)0) , (p_11 > (safe_add_func_uint8_t_u_u(((l_885 >= ((-1) >= ((safe_rshift_func_int8_t_s_s((((*p_8) & ((((g_4 > (((0x53E7A4FD ^ ((4 || 0xC275) && 1)) ^ 0x2F77) < l_877)) && 0xCF) || g_56) > g_264)) , 0x40), g_144)) | 0x8DAC27C1))) >= 0x36), (-7)))));
            }
        }
        --l_892;
        for (g_85 = (-11); (g_85 != 1); g_85++)
        {
            return l_782;
        }
    }
    l_888[0][1][2] = 0;
    l_889 = (0xE4 ^ p_11);
    (*l_905) = (((((void*)0 == p_10) && ((((safe_mod_func_int32_t_s_s((p_10 != (void*)0), (safe_rshift_func_uint16_t_u_u((((&l_813 == (((l_877 || ((&p_8 == (void*)0) == (safe_rshift_func_uint16_t_u_s((((~(p_10 != (void*)0)) < g_2) , p_9), 5)))) ^ 0) , (void*)0)) <= g_904) || l_811), g_144)))) , l_888[0][1][1]) , 0x0C1A) || g_196[1][1][4])) & (-1)) , &l_811);
    return (*p_8);
}
static int32_t * func_13(int32_t * p_14, uint8_t p_15, uint32_t p_16)
{
    uint16_t l_742 = 0U;
    int32_t *l_745 = &g_4;
    (*l_745) &= (((((safe_add_func_uint16_t_u_u(g_264, ((((g_49 & (l_742 >= ((1U && ((safe_sub_func_uint8_t_u_u(((l_742 || l_742) ^ p_16), l_742)) , (l_742 > 0x90FC))) , p_15))) & p_16) < g_2) , g_706))) >= 6U) , l_742) == g_196[0][4][1]) , 0x4292E7D2);
    for (p_16 = 0; (p_16 >= 2); ++p_16)
    {
        uint8_t l_755 = 0x1C;
        uint16_t l_762 = 0U;
        for (g_264 = (-23); (g_264 == 15); g_264++)
        {
            int32_t l_750[3][8];
            int i, j;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 8; j++)
                    l_750[i][j] = 0x937AB5CD;
            }
            if (l_750[2][1])
                break;
        }
        (*l_745) = (((p_16 ^ (g_706 & (*l_745))) ^ (p_14 == (void*)0)) || ((((*l_745) , (safe_lshift_func_int16_t_s_u(((((safe_mod_func_int32_t_s_s((l_755 & (((safe_lshift_func_uint8_t_u_s((safe_div_func_uint32_t_u_u(p_15, (((safe_mod_func_int16_t_s_s((1 || l_755), 0xCAD7)) < p_15) , l_755))), p_15)) | g_85) >= g_85)), p_15)) & g_144) < 1U) , 0), 12))) == l_762) | 0x0418));
    }
    return &g_196[1][2][1];
}
static int32_t * func_17(int16_t p_18, uint8_t p_19, int32_t p_20, int16_t p_21)
{
    int32_t *l_657 = (void*)0;
    for (p_18 = (-29); (p_18 != 19); p_18++)
    {
        int32_t *l_31 = &g_4;
        int32_t **l_30 = &l_31;
        int32_t ***l_29 = &l_30;
        int32_t l_726 = 0x5E28EF6C;
        (*l_29) = (void*)0;
        for (p_20 = 23; (p_20 < 4); p_20--)
        {
            int32_t *l_705[2];
            int i;
            for (i = 0; i < 2; i++)
                l_705[i] = &g_536;
            for (g_4 = 0; (g_4 == (-17)); g_4--)
            {
                uint32_t l_36 = 9U;
                l_36 &= g_2;
                g_706 |= (((((func_37(func_39(func_44(p_20, &l_30), l_657, &g_4, &l_657)) , l_705[1]) != l_705[1]) , (-1)) != p_21) , 0);
            }
        }
        for (g_536 = 22; (g_536 <= 7); --g_536)
        {
            int32_t *l_725[1][9][3] = {{{&g_49, &g_196[0][4][0], &g_49}, {&g_49, &g_196[0][4][0], &g_49}, {&g_49, &g_196[0][4][0], &g_49}, {&g_49, &g_196[0][4][0], &g_49}, {&g_49, &g_196[0][4][0], &g_49}, {&g_49, &g_196[0][4][0], &g_49}, {&g_49, &g_196[0][4][0], &g_49}, {&g_49, &g_196[0][4][0], &g_49}, {&g_49, &g_196[0][4][0], &g_49}}};
            int i, j, k;
            l_726 |= ((safe_add_func_uint32_t_u_u(((p_19 > (safe_rshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s((safe_add_func_uint16_t_u_u(p_20, (safe_sub_func_int8_t_s_s(((g_264 == g_49) == ((safe_lshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_u(((l_725[0][6][0] == &p_20) || (l_725[0][5][0] == l_725[0][6][2])), g_4)), 0)) , p_20)), 0x5D)))), 4)), 1))) | 0x0C), p_18)) || p_19);
            (*l_31) = 0xFD067236;
            if (p_20)
                break;
        }
        l_29 = &g_112;
    }
    return l_657;
}
inline static uint32_t func_37(int32_t ** p_38)
{
    int16_t l_692[8][7][2] = {{{(-5), (-1)}, {(-5), (-1)}, {(-5), (-1)}, {(-5), (-1)}, {(-5), (-1)}, {(-5), (-1)}, {(-5), (-1)}}, {{(-5), (-1)}, {(-5), (-1)}, {(-5), (-1)}, {(-5), (-1)}, {(-5), (-1)}, {(-5), (-1)}, {(-5), (-1)}}, {{(-5), (-1)}, {(-5), (-1)}, {(-5), (-1)}, {(-5), (-1)}, {(-5), (-1)}, {(-5), (-1)}, {(-5), (-1)}}, {{(-5), (-1)}, {(-5), (-1)}, {(-5), (-1)}, {(-5), (-1)}, {(-5), (-1)}, {(-5), (-1)}, {(-5), (-1)}}, {{(-5), (-1)}, {(-5), (-1)}, {(-5), (-1)}, {(-5), (-1)}, {(-5), (-1)}, {(-5), (-1)}, {(-5), (-1)}}, {{(-5), (-1)}, {(-5), (-1)}, {(-5), (-1)}, {(-5), (-1)}, {(-5), (-1)}, {(-5), (-1)}, {(-5), (-1)}}, {{(-5), (-1)}, {(-5), (-1)}, {(-5), (-1)}, {(-5), (-1)}, {(-5), (-1)}, {(-5), (-1)}, {(-5), (-1)}}, {{(-5), (-1)}, {(-5), (-1)}, {(-5), (-1)}, {(-5), (-1)}, {(-5), (-1)}, {(-5), (-1)}, {(-5), (-1)}}};
    uint32_t l_701 = 1U;
    uint16_t l_702 = 0xF9F4;
    int32_t *l_703 = (void*)0;
    int32_t *l_704 = &g_49;
    int i, j, k;
    (*l_704) = (((safe_mod_func_uint32_t_u_u(((safe_lshift_func_int16_t_s_s(((&p_38 != &g_112) >= ((safe_rshift_func_int8_t_s_s(l_692[6][4][0], (0 != (safe_sub_func_int32_t_s_s(l_692[4][0][1], ((safe_add_func_uint8_t_u_u(l_692[6][4][0], ((safe_sub_func_int8_t_s_s(l_692[6][6][1], ((safe_rshift_func_int16_t_s_s(((((0x4DFB || 0xBADB) , l_692[6][5][0]) <= 0x5B1FD73C) & l_692[2][4][1]), l_692[0][2][0])) >= g_309))) <= l_701))) == 0x2D)))))) & g_85)), 0)) | l_692[6][4][0]), l_702)) && l_692[6][4][0]) | l_692[1][3][1]);
    return (*l_704);
}
static int32_t ** func_39(uint32_t p_40, int32_t * p_41, int32_t * p_42, int32_t ** p_43)
{
    int16_t l_658 = (-2);
    int32_t l_670[5] = {0x603D51E2, (-1), 0x603D51E2, (-1), 0x603D51E2};
    int32_t l_677 = (-3);
    int32_t *l_678 = &l_670[3];
    int8_t l_679 = 0xD1;
    int32_t *l_680 = (void*)0;
    int32_t *l_681 = &g_196[1][3][2];
    int32_t *l_682[6][2] = {{(void*)0, &l_677}, {(void*)0, &l_677}, {(void*)0, &l_677}, {(void*)0, &l_677}, {(void*)0, &l_677}, {(void*)0, &l_677}};
    uint32_t l_683[8][9][3] = {{{4294967294U, 4294967286U, 0x7F3835ED}, {4294967294U, 4294967286U, 0x7F3835ED}, {4294967294U, 4294967286U, 0x7F3835ED}, {4294967294U, 4294967286U, 0x7F3835ED}, {4294967294U, 4294967286U, 0x7F3835ED}, {4294967294U, 4294967286U, 0x7F3835ED}, {4294967294U, 4294967286U, 0x7F3835ED}, {4294967294U, 4294967286U, 0x7F3835ED}, {4294967294U, 4294967286U, 0x7F3835ED}}, {{4294967294U, 4294967286U, 0x7F3835ED}, {4294967294U, 4294967286U, 0x7F3835ED}, {4294967294U, 4294967286U, 0x7F3835ED}, {4294967294U, 4294967286U, 0x7F3835ED}, {4294967294U, 4294967286U, 0x7F3835ED}, {4294967294U, 4294967286U, 0x7F3835ED}, {4294967294U, 4294967286U, 0x7F3835ED}, {4294967294U, 4294967286U, 0x7F3835ED}, {4294967294U, 4294967286U, 0x7F3835ED}}, {{4294967294U, 4294967286U, 0x7F3835ED}, {4294967294U, 4294967286U, 0x7F3835ED}, {4294967294U, 4294967286U, 0x7F3835ED}, {4294967294U, 4294967286U, 0x7F3835ED}, {4294967294U, 4294967286U, 0x7F3835ED}, {4294967294U, 4294967286U, 0x7F3835ED}, {4294967294U, 4294967286U, 0x7F3835ED}, {4294967294U, 4294967286U, 0x7F3835ED}, {4294967294U, 4294967286U, 0x7F3835ED}}, {{4294967294U, 4294967286U, 0x7F3835ED}, {4294967294U, 4294967286U, 0x7F3835ED}, {4294967294U, 4294967286U, 0x7F3835ED}, {4294967294U, 4294967286U, 0x7F3835ED}, {4294967294U, 4294967286U, 0x7F3835ED}, {4294967294U, 4294967286U, 0x7F3835ED}, {4294967294U, 4294967286U, 0x7F3835ED}, {4294967294U, 4294967286U, 0x7F3835ED}, {4294967294U, 4294967286U, 0x7F3835ED}}, {{4294967294U, 4294967286U, 0x7F3835ED}, {4294967294U, 4294967286U, 0x7F3835ED}, {4294967294U, 4294967286U, 0x7F3835ED}, {4294967294U, 4294967286U, 0x7F3835ED}, {4294967294U, 4294967286U, 0x7F3835ED}, {4294967294U, 4294967286U, 0x7F3835ED}, {4294967294U, 4294967286U, 0x7F3835ED}, {4294967294U, 4294967286U, 0x7F3835ED}, {4294967294U, 4294967286U, 0x7F3835ED}}, {{4294967294U, 4294967286U, 0x7F3835ED}, {4294967294U, 4294967286U, 0x7F3835ED}, {4294967294U, 4294967286U, 0x7F3835ED}, {4294967294U, 4294967286U, 0x7F3835ED}, {4294967294U, 4294967286U, 0x7F3835ED}, {4294967294U, 4294967286U, 0x7F3835ED}, {4294967294U, 4294967286U, 0x7F3835ED}, {4294967294U, 4294967286U, 0x7F3835ED}, {4294967294U, 4294967286U, 0x7F3835ED}}, {{4294967294U, 4294967286U, 0x7F3835ED}, {4294967294U, 4294967286U, 0x7F3835ED}, {4294967294U, 4294967286U, 0x7F3835ED}, {4294967294U, 4294967286U, 0x7F3835ED}, {4294967294U, 4294967286U, 0x7F3835ED}, {4294967294U, 4294967286U, 0x7F3835ED}, {4294967294U, 4294967286U, 0x7F3835ED}, {4294967294U, 4294967286U, 0x7F3835ED}, {4294967294U, 4294967286U, 0x7F3835ED}}, {{4294967294U, 4294967286U, 0x7F3835ED}, {4294967294U, 4294967286U, 0x7F3835ED}, {4294967294U, 4294967286U, 0x7F3835ED}, {4294967294U, 4294967286U, 0x7F3835ED}, {4294967294U, 4294967286U, 0x7F3835ED}, {4294967294U, 4294967286U, 0x7F3835ED}, {4294967294U, 4294967286U, 0x7F3835ED}, {4294967294U, 4294967286U, 0x7F3835ED}, {4294967294U, 4294967286U, 0x7F3835ED}}};
    int i, j, k;
    l_670[3] ^= ((l_658 & ((p_40 == p_40) , (safe_lshift_func_int16_t_s_s(1, 0)))) ^ (((safe_mod_func_uint32_t_u_u((&p_42 == (void*)0), g_536)) != ((+(safe_add_func_int8_t_s_s(l_658, ((safe_sub_func_uint32_t_u_u(((((safe_mod_func_uint16_t_u_u((&g_112 == (void*)0), (-6))) && l_658) | 0x39) ^ 4294967295U), g_196[0][4][1])) != p_40)))) & p_40)) >= 0xE6E4));
    l_677 ^= (((l_670[3] | (255U | (((*p_43) == ((safe_div_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(((safe_add_func_int16_t_s_s(l_670[4], ((0x9842 != ((l_658 == g_264) < p_40)) == (g_85 , l_658)))) < l_670[3]), 0x92)), l_670[2])) , (void*)0)) , g_536))) || 0xB1E06E54) ^ l_670[4]);
    l_683[7][3][0]++;
    return (*g_111);
}
static uint32_t func_44(uint8_t p_45, int32_t *** p_46)
{
    int32_t *l_47 = (void*)0;
    int32_t *l_48 = &g_49;
    int32_t l_52 = 0xC3F121F2;
    int32_t l_74 = 0;
    int32_t ***l_652 = &g_112;
    int32_t *l_655 = (void*)0;
    int32_t *l_656 = &l_52;
    (*l_48) ^= ((void*)0 == &g_4);
    for (p_45 = 4; (p_45 == 27); ++p_45)
    {
        int32_t *l_53 = &g_49;
        int32_t *l_54 = (void*)0;
        int32_t *l_55[5];
        int i;
        for (i = 0; i < 5; i++)
            l_55[i] = &g_49;
        (*l_48) = g_2;
        g_56++;
    }
    (*l_48) |= 0xA3B7DC4B;
    (*l_656) ^= func_59(((*p_46) == (void*)0), p_45, ((safe_mod_func_uint32_t_u_u(((p_45 , ((*l_48) < (0 != func_66(((g_49 == g_2) ^ (+(safe_add_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s(p_45, l_74)), g_56)))), g_4)))) , 0xB5A4EA86), 0x1C77B783)) , l_652), p_45);
    return g_49;
}
inline static int32_t func_59(int32_t p_60, uint8_t p_61, int32_t *** p_62, int8_t p_63)
{
    int32_t l_653 = 0xDE30A775;
    int32_t *l_654 = &g_536;
    (*l_654) |= l_653;
    return (*l_654);
}
static int16_t func_66(uint32_t p_67, int16_t p_68)
{
    int16_t l_81[4][3][9] = {{{0xAD94, 0, (-1), 0xD5C0, 9, 0x7D66, 0, (-1), 0x444F}, {0xAD94, 0, (-1), 0xD5C0, 9, 0x7D66, 0, (-1), 0x444F}, {0xAD94, 0, (-1), 0xD5C0, 9, 0x7D66, 0, (-1), 0x444F}}, {{0xAD94, 0, (-1), 0xD5C0, 9, 0x7D66, 0, (-1), 0x444F}, {0xAD94, 0, (-1), 0xD5C0, 9, 0x7D66, 0, (-1), 0x444F}, {0xAD94, 0, (-1), 0xD5C0, 9, 0x7D66, 0, (-1), 0x444F}}, {{0xAD94, 0, (-1), 0xD5C0, 9, 0x7D66, 0, (-1), 0x444F}, {0xAD94, 0, (-1), 0xD5C0, 9, 0x7D66, 0, (-1), 0x444F}, {0xAD94, 0, (-1), 0xD5C0, 9, 0x7D66, 0, (-1), 0x444F}}, {{0xAD94, 0, (-1), 0xD5C0, 9, 0x7D66, 0, (-1), 0x444F}, {0xAD94, 0, (-1), 0xD5C0, 9, 0x7D66, 0, (-1), 0x444F}, {0xAD94, 0, (-1), 0xD5C0, 9, 0x7D66, 0, (-1), 0x444F}}};
    int32_t **l_492 = (void*)0;
    int32_t l_512 = 0xFD019FCF;
    int32_t l_537 = 0x46BE6345;
    int32_t l_540 = (-1);
    int32_t l_541 = 1;
    int32_t l_542 = 0;
    int32_t l_543 = (-1);
    int32_t l_544[7] = {1, 1, 0x254CB22A, 1, 1, 0x254CB22A, 1};
    uint32_t l_545 = 0x5573BDD2;
    uint32_t l_567 = 0xA8BE30B3;
    uint32_t l_628 = 0x2BBF3CBF;
    int8_t l_645 = 0xB7;
    int32_t *l_647 = &g_85;
    int32_t *l_648[1][9];
    uint8_t l_649 = 1U;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 9; j++)
            l_648[i][j] = &l_541;
    }
    for (g_2 = 13; (g_2 <= 10); g_2 = safe_sub_func_int16_t_s_s(g_2, 6))
    {
        int32_t *l_79 = &g_80;
        (*l_79) = (safe_sub_func_uint8_t_u_u(p_68, g_2));
        return l_81[0][0][1];
    }
    for (g_2 = 0; (g_2 < 54); g_2++)
    {
        uint32_t l_87 = 0U;
        int32_t *l_491 = &g_4;
        int32_t **l_490 = &l_491;
        int32_t *l_499 = &g_4;
        int32_t l_533[8][5][4] = {{{0xC3C25CAB, 0x951991C0, 0xCFF6E808, 0}, {0xC3C25CAB, 0x951991C0, 0xCFF6E808, 0}, {0xC3C25CAB, 0x951991C0, 0xCFF6E808, 0}, {0xC3C25CAB, 0x951991C0, 0xCFF6E808, 0}, {0xC3C25CAB, 0x951991C0, 0xCFF6E808, 0}}, {{0xC3C25CAB, 0x951991C0, 0xCFF6E808, 0}, {0xC3C25CAB, 0x951991C0, 0xCFF6E808, 0}, {0xC3C25CAB, 0x951991C0, 0xCFF6E808, 0}, {0xC3C25CAB, 0x951991C0, 0xCFF6E808, 0}, {0xC3C25CAB, 0x951991C0, 0xCFF6E808, 0}}, {{0xC3C25CAB, 0x951991C0, 0xCFF6E808, 0}, {0xC3C25CAB, 0x951991C0, 0xCFF6E808, 0}, {0xC3C25CAB, 0x951991C0, 0xCFF6E808, 0}, {0xC3C25CAB, 0x951991C0, 0xCFF6E808, 0}, {0xC3C25CAB, 0x951991C0, 0xCFF6E808, 0}}, {{0xC3C25CAB, 0x951991C0, 0xCFF6E808, 0}, {0xC3C25CAB, 0x951991C0, 0xCFF6E808, 0}, {0xC3C25CAB, 0x951991C0, 0xCFF6E808, 0}, {0xC3C25CAB, 0x951991C0, 0xCFF6E808, 0}, {0xC3C25CAB, 0x951991C0, 0xCFF6E808, 0}}, {{0xC3C25CAB, 0x951991C0, 0xCFF6E808, 0}, {0xC3C25CAB, 0x951991C0, 0xCFF6E808, 0}, {0xC3C25CAB, 0x951991C0, 0xCFF6E808, 0}, {0xC3C25CAB, 0x951991C0, 0xCFF6E808, 0}, {0xC3C25CAB, 0x951991C0, 0xCFF6E808, 0}}, {{0xC3C25CAB, 0x951991C0, 0xCFF6E808, 0}, {0xC3C25CAB, 0x951991C0, 0xCFF6E808, 0}, {0xC3C25CAB, 0x951991C0, 0xCFF6E808, 0}, {0xC3C25CAB, 0x951991C0, 0xCFF6E808, 0}, {0xC3C25CAB, 0x951991C0, 0xCFF6E808, 0}}, {{0xC3C25CAB, 0x951991C0, 0xCFF6E808, 0}, {0xC3C25CAB, 0x951991C0, 0xCFF6E808, 0}, {0xC3C25CAB, 0x951991C0, 0xCFF6E808, 0}, {0xC3C25CAB, 0x951991C0, 0xCFF6E808, 0}, {0xC3C25CAB, 0x951991C0, 0xCFF6E808, 0}}, {{0xC3C25CAB, 0x951991C0, 0xCFF6E808, 0}, {0xC3C25CAB, 0x951991C0, 0xCFF6E808, 0}, {0xC3C25CAB, 0x951991C0, 0xCFF6E808, 0}, {0xC3C25CAB, 0x951991C0, 0xCFF6E808, 0}, {0xC3C25CAB, 0x951991C0, 0xCFF6E808, 0}}};
        uint32_t l_568 = 0U;
        int i, j, k;
        for (g_80 = 0; (g_80 <= 2); g_80 += 1)
        {
            int32_t *l_95 = (void*)0;
            int32_t **l_97 = &l_95;
            int32_t ***l_96 = &l_97;
            int32_t l_529 = 0x9D77513A;
            int32_t l_535 = 0xAFEF2452;
            int32_t l_538 = (-8);
            int32_t l_539 = 0x49893CB8;
            int32_t *l_607 = &l_533[5][0][2];
            int32_t *l_608 = &g_196[1][4][2];
            int32_t *l_609 = &l_529;
            int32_t *l_610 = &l_542;
            int32_t *l_611 = (void*)0;
            int32_t *l_612 = &l_512;
            int32_t *l_613 = &l_540;
            int32_t *l_614 = &g_85;
            int32_t *l_615 = &l_541;
            int32_t *l_616 = &l_544[6];
            int32_t *l_617 = &l_541;
            int32_t *l_618 = &l_538;
            int32_t *l_619 = &l_543;
            int32_t *l_620 = (void*)0;
            int32_t *l_621 = &l_541;
            int32_t *l_622 = &l_544[0];
            int32_t *l_623 = &l_540;
            int32_t *l_624 = &g_85;
            int32_t *l_625 = &l_542;
            int32_t *l_626 = &l_533[4][1][0];
            int32_t *l_627[8] = {&l_542, &g_85, &l_542, &g_85, &l_542, &g_85, &l_542, &g_85};
            int i;
            for (p_67 = 0; (p_67 <= 2); p_67 += 1)
            {
                uint32_t l_489[7] = {0x58EDD333, 0x58EDD333, 0x64842B0C, 0x58EDD333, 0x58EDD333, 0x64842B0C, 0x58EDD333};
                int32_t l_493[9][8][3] = {{{1, (-7), (-6)}, {1, (-7), (-6)}, {1, (-7), (-6)}, {1, (-7), (-6)}, {1, (-7), (-6)}, {1, (-7), (-6)}, {1, (-7), (-6)}, {1, (-7), (-6)}}, {{1, (-7), (-6)}, {1, (-7), (-6)}, {1, (-7), (-6)}, {1, (-7), (-6)}, {1, (-7), (-6)}, {1, (-7), (-6)}, {1, (-7), (-6)}, {1, (-7), (-6)}}, {{1, (-7), (-6)}, {1, (-7), (-6)}, {1, (-7), (-6)}, {1, (-7), (-6)}, {1, (-7), (-6)}, {1, (-7), (-6)}, {1, (-7), (-6)}, {1, (-7), (-6)}}, {{1, (-7), (-6)}, {1, (-7), (-6)}, {1, (-7), (-6)}, {1, (-7), (-6)}, {1, (-7), (-6)}, {1, (-7), (-6)}, {1, (-7), (-6)}, {1, (-7), (-6)}}, {{1, (-7), (-6)}, {1, (-7), (-6)}, {1, (-7), (-6)}, {1, (-7), (-6)}, {1, (-7), (-6)}, {1, (-7), (-6)}, {1, (-7), (-6)}, {1, (-7), (-6)}}, {{1, (-7), (-6)}, {1, (-7), (-6)}, {1, (-7), (-6)}, {1, (-7), (-6)}, {1, (-7), (-6)}, {1, (-7), (-6)}, {1, (-7), (-6)}, {1, (-7), (-6)}}, {{1, (-7), (-6)}, {1, (-7), (-6)}, {1, (-7), (-6)}, {1, (-7), (-6)}, {1, (-7), (-6)}, {1, (-7), (-6)}, {1, (-7), (-6)}, {1, (-7), (-6)}}, {{1, (-7), (-6)}, {1, (-7), (-6)}, {1, (-7), (-6)}, {1, (-7), (-6)}, {1, (-7), (-6)}, {1, (-7), (-6)}, {1, (-7), (-6)}, {1, (-7), (-6)}}, {{1, (-7), (-6)}, {1, (-7), (-6)}, {1, (-7), (-6)}, {1, (-7), (-6)}, {1, (-7), (-6)}, {1, (-7), (-6)}, {1, (-7), (-6)}, {1, (-7), (-6)}}};
                int32_t l_534[6][9][1] = {{{0x868C86DA}, {0x868C86DA}, {0x868C86DA}, {0x868C86DA}, {0x868C86DA}, {0x868C86DA}, {0x868C86DA}, {0x868C86DA}, {0x868C86DA}}, {{0x868C86DA}, {0x868C86DA}, {0x868C86DA}, {0x868C86DA}, {0x868C86DA}, {0x868C86DA}, {0x868C86DA}, {0x868C86DA}, {0x868C86DA}}, {{0x868C86DA}, {0x868C86DA}, {0x868C86DA}, {0x868C86DA}, {0x868C86DA}, {0x868C86DA}, {0x868C86DA}, {0x868C86DA}, {0x868C86DA}}, {{0x868C86DA}, {0x868C86DA}, {0x868C86DA}, {0x868C86DA}, {0x868C86DA}, {0x868C86DA}, {0x868C86DA}, {0x868C86DA}, {0x868C86DA}}, {{0x868C86DA}, {0x868C86DA}, {0x868C86DA}, {0x868C86DA}, {0x868C86DA}, {0x868C86DA}, {0x868C86DA}, {0x868C86DA}, {0x868C86DA}}, {{0x868C86DA}, {0x868C86DA}, {0x868C86DA}, {0x868C86DA}, {0x868C86DA}, {0x868C86DA}, {0x868C86DA}, {0x868C86DA}, {0x868C86DA}}};
                int i, j, k;
                for (p_68 = 2; (p_68 >= 0); p_68 -= 1)
                {
                    int32_t *l_84 = &g_85;
                    int32_t *l_86[8];
                    int i, j, k;
                    for (i = 0; i < 8; i++)
                        l_86[i] = (void*)0;
                    l_87++;
                    (*l_84) ^= (func_90(l_81[p_67][g_80][(g_80 + 6)], l_95, l_96, l_81[g_80][p_67][(p_68 + 5)]) , (safe_div_func_int16_t_s_s(((void*)0 != (*g_111)), ((safe_add_func_uint8_t_u_u(((5U < ((safe_sub_func_uint16_t_u_u(0x74C4, g_56)) ^ 65531U)) , 6U), g_4)) , g_49))));
                }
                if (p_68)
                    break;
            }
            --l_628;
            (*l_490) = (*l_490);
            for (g_56 = 0; (g_56 <= 2); g_56 += 1)
            {
                int32_t *l_646 = &g_80;
                int i, j, k;
                (*l_608) = (safe_unary_minus_func_int8_t_s(((((0xEE < ((safe_sub_func_uint8_t_u_u(l_81[(g_56 + 1)][g_80][(g_56 + 3)], (((safe_lshift_func_uint16_t_u_s((((safe_rshift_func_uint8_t_u_u(((((safe_div_func_uint32_t_u_u(4294967290U, (safe_mod_func_int32_t_s_s(l_81[(g_56 + 1)][g_80][(g_56 + 3)], (safe_lshift_func_int8_t_s_s(p_68, (0x2CEA || (l_81[(g_56 + 1)][g_80][(g_56 + 3)] & ((+0x6057) | ((p_67 <= p_67) | p_67)))))))))) , p_67) <= 0xB058) != g_403), p_68)) <= 0xF1) , l_81[(g_56 + 1)][g_80][(g_56 + 3)]), g_80)) | l_645) ^ g_85))) || 0)) & g_309) == p_67) , 0xD3)));
                (*l_97) = l_646;
            }
        }
    }
    l_649--;
    return p_68;
}
inline static uint32_t func_90(int32_t p_91, int32_t * p_92, int32_t *** p_93, uint32_t p_94)
{
    int32_t *l_138 = &g_80;
    int32_t **l_137 = &l_138;
    int32_t l_160 = (-7);
    int32_t l_229 = 0x0C4DA91A;
    uint8_t l_305[9] = {0xCD, 0x53, 0xCD, 0x53, 0xCD, 0x53, 0xCD, 0x53, 0xCD};
    int32_t l_322 = 0xDC4105BA;
    int32_t l_325 = 0;
    int32_t l_331 = (-1);
    int32_t l_333 = 1;
    int32_t l_340 = (-3);
    int32_t l_341 = 0x931D84D6;
    uint32_t l_373[5] = {0x8DA0556B, 4294967295U, 0x8DA0556B, 4294967295U, 0x8DA0556B};
    int32_t l_420[6][2][3] = {{{0x86950EF6, (-1), 0x07649451}, {0x86950EF6, (-1), 0x07649451}}, {{0x86950EF6, (-1), 0x07649451}, {0x86950EF6, (-1), 0x07649451}}, {{0x86950EF6, (-1), 0x07649451}, {0x86950EF6, (-1), 0x07649451}}, {{0x86950EF6, (-1), 0x07649451}, {0x86950EF6, (-1), 0x07649451}}, {{0x86950EF6, (-1), 0x07649451}, {0x86950EF6, (-1), 0x07649451}}, {{0x86950EF6, (-1), 0x07649451}, {0x86950EF6, (-1), 0x07649451}}};
    int i, j, k;
    for (p_91 = 0; (p_91 == 12); p_91++)
    {
        int8_t l_105 = 0x27;
        int32_t **l_124 = (void*)0;
        int32_t l_125 = (-2);
        int32_t l_157 = 0x32AA6773;
        int32_t l_230[1][8] = {{0x1467E5DD, 0x8B52019D, 0x1467E5DD, 0x8B52019D, 0x1467E5DD, 0x8B52019D, 0x1467E5DD, 0x8B52019D}};
        int i, j;
    }
    for (l_160 = 0; (l_160 <= 1); l_160 = safe_add_func_uint8_t_u_u(l_160, 8))
    {
        int16_t l_281 = (-3);
        int32_t l_320 = 0x7E80FDE9;
        int32_t l_323 = 1;
        int32_t l_326 = 1;
        int32_t l_328 = 1;
        int32_t l_332 = (-6);
        int32_t l_334 = (-1);
        int32_t l_335 = 0x45E64348;
        int32_t l_336 = 0x1F928291;
        int32_t l_337 = 0xE290AA29;
        int32_t l_338 = 0xE4B1F402;
        int32_t l_342 = 0xEC0A1D04;
        int32_t **l_376 = (void*)0;
    }
    for (l_333 = 1; (l_333 >= 0); l_333 -= 1)
    {
        int32_t l_413 = 9;
        int32_t l_414 = 0x79EE0FBF;
        int32_t l_415 = 1;
        int32_t l_419 = 0;
        int32_t l_422 = 0x62ADCFAA;
        int i;
        if (l_305[l_333])
            break;
    }
    return p_91;
}
int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_2;
    csmith_sink_ = g_4;
    csmith_sink_ = g_49;
    csmith_sink_ = g_56;
    csmith_sink_ = g_80;
    csmith_sink_ = g_85;
    csmith_sink_ = g_144;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 5; k++)
            {
                csmith_sink_ = g_196[i][j][k];
            }
        }
    }
    csmith_sink_ = g_264;
    csmith_sink_ = g_309;
    csmith_sink_ = g_348;
    csmith_sink_ = g_403;
    csmith_sink_ = g_536;
    csmith_sink_ = g_706;
    csmith_sink_ = g_847;
    csmith_sink_ = g_904;
    csmith_sink_ = g_934;
    platform_main_end(0,0);
    return 0;
}
