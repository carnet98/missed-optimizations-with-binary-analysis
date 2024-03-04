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
static int8_t g_2 = (-1L);
static int32_t g_39 = (-1L);
static int32_t g_42 = 0x5B65AB4DL;
static int32_t g_73 = 0x9980A6F8L;
static int32_t *g_97 = &g_73;
static int32_t **g_139 = (void*)0;
static uint32_t g_225 = 0xAB640BF3L;
static int32_t g_379 = (-3L);
static int32_t g_409 = (-1L);
static int32_t ***** const g_416 = (void*)0;
static const int32_t *g_435 = &g_379;
static const int32_t **g_434 = &g_435;
static int32_t g_452 = 0x4C6F2978L;
static int32_t ***g_547 = &g_139;
static int32_t ****g_546 = &g_547;
static int32_t *****g_609 = &g_546;
static int32_t *****g_610 = &g_546;
static int32_t **** const *g_612 = (void*)0;
static int32_t g_701 = 0x606B654FL;
static int32_t *g_770 = (void*)0;
static int32_t *g_796 = &g_42;
static uint8_t g_858 = 251UL;
static const int32_t g_1000 = 0xB3CBFE7FL;
static uint8_t g_1144 = 0x9CL;
static int16_t g_1151 = 0x1B56L;
static uint32_t func_1(void);
inline static const uint8_t func_6(int32_t p_7, int32_t p_8, uint32_t p_9, uint32_t p_10, int8_t p_11);
static int32_t func_12(int32_t p_13, int8_t p_14, uint8_t p_15, uint32_t p_16, uint32_t p_17);
static uint32_t func_21(uint32_t p_22, int8_t p_23, const int8_t p_24);
inline static uint32_t func_25(uint16_t p_26, uint8_t p_27, int32_t p_28, uint16_t p_29, uint32_t p_30);
inline static int32_t * func_31(int8_t p_32, uint32_t p_33, int32_t * p_34, uint16_t p_35);
inline static uint32_t func_36(const uint16_t p_37);
static const int32_t ** func_45(int32_t ** p_46, int32_t ** p_47);
inline static int32_t ** func_48(const int32_t p_49, int32_t * p_50, int16_t p_51, int32_t ** p_52, uint8_t p_53);
static uint16_t func_55(uint16_t p_56, int32_t * p_57, int32_t ** p_58, int32_t * p_59, int8_t p_60);
static uint32_t func_1(void)
{
    int8_t l_3 = 0L;
    const int16_t l_20 = 5L;
    int32_t l_1164 = 0x115EDC41L;
    l_1164 = ((((g_2 || l_3) == (safe_lshift_func_uint8_t_u_s(func_6(func_12(g_2, l_3, (safe_add_func_int32_t_s_s(l_20, l_20)), g_2, func_21(func_25(l_3, (g_2 & l_3), g_2, g_2, l_20), g_225, l_3)), g_2, g_225, g_858, g_2), 4))) & l_20) != g_2);
    return l_1164;
}
inline static const uint8_t func_6(int32_t p_7, int32_t p_8, uint32_t p_9, uint32_t p_10, int8_t p_11)
{
    int32_t *****l_893 = (void*)0;
    int32_t l_894 = 0x3A666ED2L;
    uint32_t l_901 = 1UL;
    int32_t * const *l_922 = &g_97;
    int32_t *l_1013 = &g_379;
    int32_t ****l_1034 = &g_547;
    uint16_t l_1076 = 0x336EL;
    const uint32_t l_1131 = 0x0E4EADC1L;
    const uint8_t l_1145 = 0UL;
    g_42 = 1L;
    l_894 = ((safe_add_func_uint32_t_u_u((l_893 == l_893), 5UL)) == p_9);
    for (p_11 = 0; (p_11 == (-19)); p_11--)
    {
        int16_t l_904 = 0xDD43L;
        int32_t *l_906 = &g_42;
        if ((safe_mul_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u(l_901, 249UL)) & (safe_mod_func_int16_t_s_s((g_452 != p_8), 0xE416L))), l_904)))
        {
            uint8_t l_905 = 0UL;
            l_905 = (p_7 <= 0xCA5064F8L);
            l_906 = l_906;
            p_7 = ((safe_mod_func_uint16_t_u_u(0x6146L, ((safe_add_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(p_10, l_905)), g_379)) || (safe_rshift_func_uint16_t_u_s(9UL, 13))))) | ((safe_mul_func_int16_t_s_s((((void*)0 != &p_7) < p_8), (safe_lshift_func_int16_t_s_s(0x6A5BL, 3)))) < p_7));
        }
        else
        {
            int32_t *l_919 = &g_42;
            (*g_434) = l_919;
        }
    }
    if ((safe_rshift_func_uint8_t_u_u(((((p_9 && p_11) < (p_8 < (((l_922 != (void*)0) != (g_42 && (safe_mul_func_int16_t_s_s((p_9 > (safe_mod_func_int16_t_s_s(((void*)0 != l_893), 0x6EB2L))), p_11)))) != p_10))) != 6L) < 0UL), 4)))
    {
        int32_t *****l_927 = &g_546;
        int32_t **l_944 = &g_796;
        int32_t l_957 = 1L;
        uint16_t l_992 = 0x0866L;
        l_927 = l_927;
        l_894 = p_9;
        if ((safe_lshift_func_int8_t_s_s(2L, (((safe_add_func_int16_t_s_s(((safe_mod_func_uint32_t_u_u((l_922 == (void*)0), (((((safe_add_func_int16_t_s_s(((safe_sub_func_uint32_t_u_u(((safe_rshift_func_int8_t_s_u(((safe_mod_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(((void*)0 == l_944), (safe_mod_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(((0UL >= ((safe_sub_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(p_10, 0x97L)), 4)), (safe_rshift_func_int16_t_s_s(p_10, 15)))) ^ g_701)) != p_7), g_39)), p_7)))), p_8)) <= g_225), 1)) | g_39), 0x62BBA4FCL)) <= p_7), 0L)) >= p_11) > 0UL) || (-1L)) && 0xE4E759E6L))) <= 0UL), g_379)) | p_11) | l_957))))
        {
            uint32_t l_968 = 0xE1C757A3L;
            int32_t *l_969 = (void*)0;
            int32_t *l_970 = &g_42;
            (*l_970) = ((safe_sub_func_int32_t_s_s((safe_mul_func_int16_t_s_s(((safe_sub_func_int8_t_s_s(g_701, ((p_11 <= ((safe_add_func_uint16_t_u_u((safe_add_func_int16_t_s_s((-1L), p_9)), g_452)) | (1L <= g_73))) & 1L))) || g_225), g_42)), l_968)) && 3L);
        }
        else
        {
            uint32_t l_973 = 0x560C3E7AL;
            int32_t *l_980 = &g_409;
            (*g_434) = (*g_434);
            (*l_980) = (safe_add_func_uint16_t_u_u((l_973 != ((g_379 >= (((0xA8L | ((safe_lshift_func_uint16_t_u_u((&p_7 != &p_7), 0)) & (safe_sub_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u(g_409, ((void*)0 != l_980))), (&l_980 == &l_980))))) && 4294967293UL) || 0x1573L)) ^ 0xCF6DL)), g_2));
        }
        p_7 = ((l_893 == l_893) || (((g_42 == ((!(safe_rshift_func_uint16_t_u_s((((g_2 && (safe_add_func_uint32_t_u_u(((safe_add_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(((((1UL <= ((((((-1L) == (safe_mul_func_int16_t_s_s(((g_701 && (((l_992 == (safe_lshift_func_uint8_t_u_s((((l_922 == (void*)0) ^ p_10) ^ 0x0DE402C1L), g_225))) == 0L) & p_9)) && p_8), 0xE7C7L))) < (-8L)) != (-4L)) != p_10) | p_7)) & p_9) < 4L) && g_452), (-9L))), g_409)) | g_701), p_8))) >= g_409) != p_8), 14))) != (-10L))) != p_8) || g_701));
    }
    else
    {
        int32_t l_1011 = 1L;
        int32_t *l_1012 = &g_73;
        int32_t ** const *l_1019 = &g_139;
        int32_t ** const **l_1018 = &l_1019;
        uint16_t l_1020 = 4UL;
        uint16_t l_1030 = 6UL;
        int32_t *l_1101 = &g_452;
        int32_t *l_1109 = &g_409;
        int32_t ** const *l_1112 = &g_139;
        int16_t l_1115 = 0xE7D1L;
        l_1012 = &p_7;
        l_1013 = &l_1011;
        for (p_11 = 0; (p_11 >= 16); p_11 = safe_add_func_int32_t_s_s(p_11, 1))
        {
            int32_t *l_1021 = &g_409;
            int32_t *l_1022 = &g_42;
            int32_t * const **l_1023 = &l_922;
            l_1022 = &p_7;
            (*g_434) = &p_7;
            (*l_1012) = (p_10 != (((l_1023 == l_1023) > (g_73 & ((p_8 || (safe_mod_func_int16_t_s_s((0xBBL | ((safe_mod_func_uint8_t_u_u(p_9, 0xD1L)) >= ((safe_rshift_func_uint16_t_u_s((((*g_610) != (void*)0) == (*l_1021)), 6)) > l_1030))), g_225))) && 0x2E10L))) | 1L));
        }
        if (p_9)
        {
            int32_t *l_1032 = &g_42;
            uint32_t l_1033 = 18446744073709551612UL;
            if ((&l_1013 != (void*)0))
            {
                return g_225;
            }
            else
            {
                int32_t *l_1031 = (void*)0;
                l_1031 = &p_7;
            }
            l_1032 = &p_7;
            (*g_434) = &p_7;
            (*l_1032) = (safe_rshift_func_int8_t_s_s((0xE7BEL || 0xA84EL), 7));
        }
        else
        {
            int32_t **** const *l_1047 = &l_1034;
            uint32_t l_1058 = 0UL;
            int32_t *l_1102 = &g_73;
            int8_t l_1146 = 0x74L;
            if (((safe_mod_func_int32_t_s_s((((safe_rshift_func_int8_t_s_u(((void*)0 == &l_1019), (safe_rshift_func_int16_t_s_u((((safe_mul_func_int16_t_s_s((safe_mod_func_int32_t_s_s(0x29101CE6L, (*l_1012))), ((l_1047 == &l_1018) == (safe_sub_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_u((((*l_1012) > ((safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((0x8CB50BDDL != (((p_9 > g_225) <= (-2L)) == p_10)), 9)), 9)) == g_452)) | g_379), 7)) || 0UL), p_11)) <= g_42), 6L))))) >= p_8) < 0xE8F94FF3L), 0)))) ^ g_225) != p_7), l_1058)) | 0UL))
            {
                int32_t *l_1059 = &g_379;
                (*g_434) = l_1059;
                for (l_1011 = 0; (l_1011 <= 18); ++l_1011)
                {
                    const uint32_t l_1074 = 18446744073709551610UL;
                    uint8_t l_1075 = 0xA4L;
                    int32_t *****l_1083 = &l_1034;
                    (*l_1012) = ((safe_mul_func_int8_t_s_s(((((safe_sub_func_int16_t_s_s(((g_379 && (safe_lshift_func_int16_t_s_s((*l_1059), 10))) == (((safe_lshift_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(3UL, (-2L))), (safe_lshift_func_uint16_t_u_s(((g_42 <= ((g_42 == l_1074) != (*l_1059))) < (l_1075 || 0UL)), 2)))) ^ l_1075) || l_1076)), g_2)) && 0x2DL) & 5L) ^ g_858), p_11)) > l_1075);
                    (*l_1059) = ((((((-9L) == g_42) >= (safe_add_func_int32_t_s_s(p_11, l_1075))) == (safe_mod_func_uint32_t_u_u(0x80C4BD6FL, (g_1000 || (safe_add_func_uint32_t_u_u((l_1083 == &g_546), ((safe_add_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint16_t_u_s((p_8 & p_11), 1)), 6)), 0x024AL)) | g_2))))))) || p_9) & 0xA97EL);
                    (*l_1083) = (void*)0;
                    p_7 = p_10;
                }
                l_1059 = l_1102;
            }
            else
            {
                uint32_t l_1103 = 7UL;
                int32_t **l_1106 = &l_1013;
                int32_t ***l_1120 = (void*)0;
                const int32_t *** const l_1154 = &g_434;
                (*g_434) = &p_7;
                (*l_1013) = l_1103;
                if (((safe_mod_func_int8_t_s_s((g_379 < (p_9 | (p_11 && ((((l_1106 != l_1106) || (-1L)) || (**l_1106)) <= (9L | ((safe_add_func_uint8_t_u_u(((l_1109 == &p_7) < 0x6F48L), (*l_1013))) || 2L)))))), g_1000)) >= g_73))
                {
                    int32_t l_1113 = 0x726E4FEAL;
                    int32_t ***l_1119 = &l_1106;
                    if ((safe_mod_func_uint8_t_u_u((l_1112 != (void*)0), l_1113)))
                    {
                        int32_t ****l_1114 = (void*)0;
                        l_1115 = ((void*)0 == l_1114);
                        (*l_1013) = (safe_rshift_func_int16_t_s_s(0x17C1L, (~p_8)));
                    }
                    else
                    {
                        l_1120 = l_1119;
                        (*l_1101) = (p_10 != (safe_add_func_int8_t_s_s(((***l_1119) < (***l_1119)), (safe_sub_func_uint32_t_u_u(0x32C6022DL, (safe_mod_func_uint8_t_u_u((((void*)0 != &l_1019) ^ (safe_rshift_func_uint8_t_u_s(((safe_mod_func_int16_t_s_s((p_7 == ((-8L) > ((8L ^ 0L) | 65535UL))), p_7)) & (-1L)), 1))), g_858)))))));
                        (*l_1018) = (*l_1018);
                    }
                    return l_1131;
                }
                else
                {
                    uint32_t l_1141 = 0xE568B51CL;
                    int32_t *l_1147 = (void*)0;
                    if ((((safe_lshift_func_uint8_t_u_u(((((((~(&l_1019 != (void*)0)) ^ ((((1L != ((safe_sub_func_uint8_t_u_u(0x07L, ((((safe_sub_func_uint32_t_u_u((((safe_add_func_int8_t_s_s(p_9, p_9)) & (p_7 || l_1141)) == ((safe_add_func_int32_t_s_s(((-5L) || 4294967286UL), (*l_1102))) < p_11)), p_8)) != g_1144) == p_8) ^ l_1145))) > 0L)) > 1UL) || (-3L)) & g_1144)) | p_9) ^ 0xADF1L) < g_379) <= 0xE8BDB022L), g_379)) == g_701) <= l_1146))
                    {
                        (*l_1102) = p_10;
                    }
                    else
                    {
                        l_1147 = &p_7;
                    }
                    (*l_1106) = (void*)0;
                    (*l_1012) = 1L;
                    (*l_1102) = (safe_add_func_uint32_t_u_u((!((g_1151 >= ((safe_lshift_func_uint8_t_u_s(((l_1154 == (**g_610)) || (~(0L || ((*l_1101) && (safe_add_func_int8_t_s_s((((void*)0 == &p_7) > (safe_rshift_func_int8_t_s_u((safe_sub_func_int16_t_s_s(p_8, (safe_sub_func_int8_t_s_s((p_10 == p_10), p_11)))), g_2))), p_11)))))), p_9)) == p_11)) <= p_10)), (*l_1012)));
                }
            }
            (*l_1102) = (*l_1109);
        }
    }
    return g_39;
}
static int32_t func_12(int32_t p_13, int8_t p_14, uint8_t p_15, uint32_t p_16, uint32_t p_17)
{
    uint16_t l_890 = 0xF03DL;
    return l_890;
}
static uint32_t func_21(uint32_t p_22, int8_t p_23, const int8_t p_24)
{
    int32_t *****l_841 = (void*)0;
    int32_t l_849 = (-5L);
    uint16_t l_871 = 0x50C4L;
    uint32_t l_872 = 0x68CB4E78L;
    int32_t *l_873 = &g_42;
    int32_t l_889 = 0x14F3DB6DL;
    for (p_23 = 0; (p_23 > 6); p_23 = safe_add_func_int16_t_s_s(p_23, 1))
    {
        int32_t *l_839 = &g_379;
        for (g_39 = 13; (g_39 >= (-6)); --g_39)
        {
            int32_t *l_838 = (void*)0;
            int32_t l_840 = 2L;
            if (p_22)
                break;
            l_839 = l_838;
            l_840 = p_23;
        }
        g_612 = l_841;
        if (p_24)
            continue;
        if (p_22)
            continue;
    }
    l_849 = (p_23 != (safe_sub_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((!p_24), ((0x6DL && p_22) | ((p_24 & (l_849 <= (safe_lshift_func_uint16_t_u_u(0xDE5CL, 13)))) | l_849)))), (0xA7L < g_379))), 5UL)));
    l_873 = l_873;
    (*l_873) = (safe_mul_func_uint8_t_u_u((p_24 >= ((safe_unary_minus_func_int8_t_s(((p_22 > (((+(+0xD2F073DCL)) < (safe_add_func_int8_t_s_s((safe_rshift_func_int8_t_s_s(g_452, 0)), (((void*)0 != &l_849) < ((safe_sub_func_int8_t_s_s((safe_sub_func_int8_t_s_s((p_24 ^ 0UL), (safe_sub_func_int8_t_s_s(0xE7L, (-4L))))), 0xECL)) != l_889))))) || p_24)) && p_24))) == 9L)), 0L));
    return (*l_873);
}
inline static uint32_t func_25(uint16_t p_26, uint8_t p_27, int32_t p_28, uint16_t p_29, uint32_t p_30)
{
    int32_t *l_674 = &g_452;
    int32_t ***l_675 = (void*)0;
    int32_t * const l_827 = &g_379;
    int32_t **l_828 = &g_796;
    const int32_t ***l_833 = (void*)0;
    const int32_t ****l_832 = &l_833;
    const int32_t *****l_831 = &l_832;
    (*g_434) = func_31(p_26, func_36(g_2), l_674, ((void*)0 != l_675));
    (*l_828) = l_827;
    (*l_828) = &p_28;
    (*l_674) = ((**l_828) == (safe_lshift_func_uint8_t_u_u((l_831 != &l_832), 1)));
    return g_39;
}
inline static int32_t * func_31(int8_t p_32, uint32_t p_33, int32_t * p_34, uint16_t p_35)
{
    uint8_t l_705 = 0UL;
    int32_t l_729 = 1L;
    uint32_t l_731 = 0x61B9C6BCL;
    int32_t ****l_738 = &g_547;
    int32_t *l_751 = &g_452;
    int32_t *l_820 = &g_73;
    int32_t *l_824 = &l_729;
    for (g_73 = 25; (g_73 >= (-2)); --g_73)
    {
        int32_t l_679 = 0xE0D3AE83L;
        int32_t * const * const ***l_682 = (void*)0;
        int32_t *l_730 = &g_409;
        int32_t ***l_748 = &g_139;
        (*p_34) = ((!(&g_546 == &g_546)) <= l_679);
        if ((safe_lshift_func_uint16_t_u_u((&g_546 != l_682), (safe_sub_func_uint16_t_u_u((g_42 > p_32), p_33)))))
        {
            int8_t l_710 = 1L;
            int32_t l_739 = 0L;
            if ((safe_lshift_func_int8_t_s_u(g_379, 5)))
            {
                return p_34;
            }
            else
            {
                uint32_t l_711 = 0xC511829AL;
                int32_t ****l_724 = &g_547;
                if ((*p_34))
                    break;
                (*g_434) = p_34;
                for (l_679 = (-15); (l_679 <= 14); l_679 = safe_add_func_int32_t_s_s(l_679, 2))
                {
                    int32_t *****l_702 = &g_546;
                    int32_t l_712 = (-2L);
                    if ((safe_lshift_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(((safe_mul_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((safe_mul_func_uint16_t_u_u((g_701 && g_452), (l_682 != l_702))), 3)), (safe_sub_func_int16_t_s_s(l_705, (((void*)0 != l_682) == 0xCF8AA51BL))))) != ((((((safe_mod_func_int8_t_s_s((safe_mul_func_int8_t_s_s(((((((g_225 ^ p_33) < 0L) || g_379) ^ 0L) < g_39) && l_710), p_35)), g_701)) | g_379) || 255UL) <= g_73) ^ l_711) & p_35)), l_712)), (-10L))), 7)))
                    {
                        p_34 = p_34;
                    }
                    else
                    {
                        int8_t l_725 = 1L;
                        (*g_434) = p_34;
                        (*p_34) = ((!(safe_mod_func_int16_t_s_s(((safe_add_func_uint8_t_u_u(g_42, l_710)) ^ 0L), (g_2 & (((safe_sub_func_int16_t_s_s(((void*)0 != &p_34), (p_33 > (safe_lshift_func_int16_t_s_s((safe_add_func_uint32_t_u_u(((*l_702) != l_724), (*p_34))), 9))))) <= (*p_34)) == (*g_435)))))) & 4294967289UL);
                        l_725 = (1UL || l_710);
                    }
                    l_729 = ((g_42 <= l_705) <= (safe_lshift_func_int8_t_s_u(g_73, (safe_unary_minus_func_int8_t_s(g_225)))));
                    l_730 = p_34;
                }
                if ((*p_34))
                    break;
            }
            if (l_731)
                break;
            if ((safe_mod_func_uint16_t_u_u(g_452, (safe_unary_minus_func_uint32_t_u((+((safe_rshift_func_uint8_t_u_u(l_710, ((void*)0 != l_738))) <= l_710)))))))
            {
                l_730 = (void*)0;
            }
            else
            {
                l_739 = 7L;
            }
            if ((*p_34))
                continue;
        }
        else
        {
            int32_t *** const l_747 = &g_139;
            int32_t *****l_769 = &l_738;
            if ((safe_add_func_int32_t_s_s(((safe_add_func_uint8_t_u_u(((+((-1L) <= (l_747 == l_748))) <= (safe_sub_func_uint8_t_u_u(1UL, ((l_751 != p_34) != (p_32 != (+(safe_add_func_uint32_t_u_u(((((void*)0 == &g_546) < 0x04L) || g_409), p_35)))))))), p_32)) & 0L), (*p_34))))
            {
                uint32_t l_755 = 0x0D7091ECL;
                if ((*p_34))
                    break;
                l_755 = ((((-1L) <= ((*g_610) != l_738)) == p_35) | g_379);
                (*p_34) = (safe_lshift_func_uint16_t_u_u(((p_35 < (((safe_lshift_func_uint16_t_u_u(0UL, (((safe_mod_func_uint8_t_u_u(((-6L) <= ((g_409 ^ (*l_751)) <= ((((*p_34) | ((safe_mul_func_int8_t_s_s(6L, ((*p_34) < (((+1UL) ^ p_32) & 0UL)))) == 0xEEL)) == 9L) == 0xA5133EA0L))), g_42)) & 8UL) | 1L))) | g_379) >= g_701)) || (*p_34)), p_32));
            }
            else
            {
                g_609 = l_769;
            }
            if ((*p_34))
            {
                p_34 = p_34;
                return g_770;
            }
            else
            {
                uint16_t l_787 = 0xB196L;
                int32_t l_797 = 0L;
                (*p_34) = ((p_33 <= (safe_sub_func_uint8_t_u_u((g_2 <= (((*l_751) < (safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(3UL, (((safe_rshift_func_uint8_t_u_s((((*l_751) <= (((safe_add_func_uint16_t_u_u(p_35, (-1L))) >= (((((safe_mod_func_int32_t_s_s((((safe_mul_func_uint16_t_u_u((g_2 >= g_73), p_33)) > 4L) <= p_35), 0x21747D36L)) && g_379) | 0UL) > g_379) != l_787)) >= 65535UL)) | 0UL), p_33)) || g_225) > 4294967288UL))), 7)), p_32))) ^ g_39)), l_787))) == (*l_730));
                p_34 = p_34;
                for (g_701 = (-13); (g_701 <= 11); g_701 = safe_add_func_int8_t_s_s(g_701, 9))
                {
                    const int32_t ***l_790 = &g_434;
                    const int32_t ****l_791 = &l_790;
                    (*l_791) = l_790;
                }
                if ((5UL != (0x2271L < ((safe_mul_func_uint16_t_u_u(((0x22C9L > (255UL <= (safe_sub_func_int8_t_s_s((((((&l_738 != &g_546) > ((p_34 != g_796) & g_2)) & (*p_34)) <= (*p_34)) || 0x94FDL), l_797)))) >= (*p_34)), (*l_751))) == 0x804B9B01L))))
                {
                    (*g_434) = p_34;
                }
                else
                {
                    (*l_751) = (3UL != ((safe_add_func_uint16_t_u_u(g_379, p_33)) != ((-5L) >= g_701)));
                    for (p_33 = 0; (p_33 <= 14); ++p_33)
                    {
                        uint8_t l_802 = 249UL;
                        int32_t ** const *l_816 = &g_139;
                        int32_t ** const **l_815 = &l_816;
                        int32_t ** const ***l_814 = &l_815;
                        (*p_34) = ((l_802 || (safe_mod_func_int8_t_s_s(((-1L) ^ (!(safe_unary_minus_func_int8_t_s(7L)))), (safe_add_func_int16_t_s_s((((((safe_add_func_int32_t_s_s(((g_42 == ((safe_mul_func_uint8_t_u_u(l_797, ((!(l_814 == l_769)) != g_225))) ^ (safe_add_func_uint16_t_u_u((~g_409), g_701)))) <= 0xDDCF4268L), p_32)) | 0x814AL) && (*p_34)) <= (*l_751)) > l_797), g_225))))) | p_33);
                    }
                    (*g_434) = p_34;
                }
            }
        }
    }
    (*g_434) = l_820;
    for (p_32 = 20; (p_32 <= (-2)); p_32--)
    {
        int32_t *l_823 = &l_729;
        (*g_547) = func_48((g_452 >= (*l_751)), l_823, p_35, func_48(((g_39 != (g_452 || (g_39 ^ (g_701 == p_35)))) || g_225), l_823, p_35, (**l_738), (*l_820)), g_42);
        (***g_610) = &p_34;
    }
    l_824 = (void*)0;
    return p_34;
}
inline static uint32_t func_36(const uint16_t p_37)
{
    int32_t *l_71 = (void*)0;
    uint16_t l_530 = 1UL;
    int32_t l_531 = 0x0E0E7673L;
    int16_t l_558 = 0xB0F3L;
    int32_t **** const *l_611 = (void*)0;
    if (p_37)
    {
        int32_t *l_38 = (void*)0;
        int32_t l_573 = (-8L);
        g_39 = 0xCC8AF953L;
        for (g_39 = 0; (g_39 >= 18); g_39 = safe_add_func_int8_t_s_s(g_39, 6))
        {
            int8_t l_54 = (-4L);
            int32_t **l_70 = &l_38;
            const int32_t ***l_579 = &g_434;
            const int32_t ****l_578 = &l_579;
            for (g_42 = 0; (g_42 > (-17)); g_42 = safe_sub_func_int8_t_s_s(g_42, 6))
            {
                int32_t l_69 = 0xDC630DE2L;
                int32_t *l_317 = &g_42;
                const int32_t ***l_510 = (void*)0;
                const int32_t ***l_511 = (void*)0;
                const int32_t ***l_512 = &g_434;
                int8_t l_551 = (-1L);
                int32_t *l_563 = &g_409;
                if (p_37)
                    break;
            }
            for (l_531 = 5; (l_531 > 13); l_531++)
            {
                int32_t **l_588 = (void*)0;
                int32_t l_608 = 0L;
                l_573 = (safe_rshift_func_uint16_t_u_u(0x81E7L, (safe_unary_minus_func_uint8_t_u(((((4L ^ 0xB505L) | (((*g_97) != (0x7179L & ((safe_lshift_func_uint8_t_u_s((g_73 ^ (safe_mul_func_int8_t_s_s(g_225, g_379))), 3)) == ((p_37 ^ p_37) | (-6L))))) > g_452)) <= p_37) ^ 0x7BL)))));
                (*l_70) = (*l_70);
            }
            g_610 = g_609;
        }
    }
    else
    {
        uint32_t l_634 = 0x923163A0L;
        int32_t ***l_643 = &g_139;
        int8_t l_673 = (-1L);
        (*g_434) = &l_531;
        g_612 = l_611;
        for (g_379 = 0; (g_379 == 11); g_379 = safe_add_func_int32_t_s_s(g_379, 9))
        {
            uint32_t l_621 = 0x403DDED2L;
            int32_t ****l_630 = &g_547;
            if ((safe_mul_func_int32_t_s_s((p_37 || 3L), 0UL)))
            {
                int32_t l_633 = (-7L);
                int32_t l_635 = 0xA052EB0FL;
                if (p_37)
                    break;
                for (l_530 = 0; (l_530 < 55); l_530++)
                {
                    int16_t l_622 = 0L;
                    l_635 = (safe_lshift_func_uint16_t_u_u(((l_621 < l_622) ^ (safe_mod_func_uint16_t_u_u(g_42, 0x227BL))), ((safe_lshift_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_s((safe_unary_minus_func_int16_t_s((((*g_610) != l_630) != (0x17C7L | ((-5L) >= l_633))))), g_452)) > p_37), l_622)) || l_634)));
                }
            }
            else
            {
                int32_t * const *l_642 = &g_97;
                int32_t * const **l_641 = &l_642;
                int32_t **l_649 = &g_97;
                if ((!(safe_sub_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u(((((((l_641 == l_643) | (safe_add_func_int8_t_s_s((!g_42), (safe_rshift_func_int16_t_s_s(((void*)0 != l_649), (safe_sub_func_uint8_t_u_u((safe_add_func_int16_t_s_s(p_37, (&l_643 == (void*)0))), ((safe_mul_func_int8_t_s_s(((((~(safe_sub_func_int8_t_s_s(p_37, 0xC3L))) & g_39) <= p_37) > p_37), g_73)) > 1L)))))))) >= 4294967295UL) != (***l_641)) ^ 1L) & p_37), 1L)), p_37))))
                {
                    uint8_t l_661 = 5UL;
                    int32_t ***l_664 = &l_649;
                    (*g_97) = p_37;
                    (**l_649) = (((g_2 != ((**l_649) & 0x7FL)) && (safe_rshift_func_int8_t_s_u(l_661, 7))) && g_409);
                    (***l_664) = ((1UL == (safe_add_func_uint8_t_u_u(((**g_610) == l_664), 0x8CL))) > (((safe_sub_func_uint8_t_u_u(0x8EL, ((safe_mul_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((safe_sub_func_uint16_t_u_u(g_225, p_37)), 4294967295UL)), ((((*g_546) == (void*)0) || g_409) || (***l_664)))) != (***l_664)))) <= g_39) & 255UL));
                }
                else
                {
                    (*l_649) = &l_531;
                    (*g_97) = l_673;
                }
                (*g_434) = (void*)0;
            }
        }
    }
    return g_2;
}
static const int32_t ** func_45(int32_t ** p_46, int32_t ** p_47)
{
    int8_t l_332 = 0xBAL;
    int32_t *l_352 = &g_73;
    int32_t l_429 = 1L;
    const int32_t *l_433 = (void*)0;
    const int32_t **l_432 = &l_433;
    int32_t *l_448 = &l_429;
    int16_t l_503 = 0xC8A4L;
    (*l_352) = ((safe_lshift_func_uint8_t_u_s((safe_mul_func_uint8_t_u_u(l_332, (g_2 <= (l_332 & (((0xF0FD8509L == (g_73 < (safe_mod_func_uint32_t_u_u(((l_332 || l_332) || (((((safe_mul_func_uint16_t_u_u((safe_add_func_int32_t_s_s(((((!((safe_mul_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(((0xEF053202L == (!(safe_sub_func_int8_t_s_s((+(safe_add_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(0xB442L, l_332)), l_332))), (-6L))))) ^ l_332), l_332)), g_39)) != 4294967287UL)) && 0x8C47L) != l_332) && g_225), l_332)), l_332)) && (-9L)) > g_73) && l_332) != l_332)), g_2)))) ^ 0x80ABBFA4L) ^ 0xF8A4L))))), g_225)) & 0x99181E83L);
    (*p_47) = (*p_47);
    for (l_332 = 0; (l_332 < 10); l_332++)
    {
        int32_t ***l_355 = &g_139;
        int32_t l_437 = (-2L);
        int32_t *l_444 = &g_379;
        int32_t *l_447 = &l_429;
        int32_t *l_449 = &l_429;
        uint32_t l_467 = 18446744073709551615UL;
        const int32_t *l_470 = &g_409;
        const uint16_t l_482 = 0x6C56L;
        int32_t l_493 = 0xEC15FA3FL;
        const int32_t **l_509 = (void*)0;
        (*l_355) = &l_352;
    }
    return &g_435;
}
inline static int32_t ** func_48(const int32_t p_49, int32_t * p_50, int16_t p_51, int32_t ** p_52, uint8_t p_53)
{
    uint8_t l_320 = 0x0DL;
    int32_t *l_327 = &g_73;
    (*l_327) = (((safe_add_func_int8_t_s_s(l_320, ((&p_52 == &p_52) ^ (&g_139 == (void*)0)))) >= 7UL) >= ((l_320 == l_320) <= ((safe_add_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u((safe_mod_func_int16_t_s_s((p_53 && g_225), l_320)), p_53)), (*p_50))) ^ p_49)));
    return &g_97;
}
static uint16_t func_55(uint16_t p_56, int32_t * p_57, int32_t ** p_58, int32_t * p_59, int8_t p_60)
{
    int32_t l_78 = 0xC37461BCL;
    int32_t * const l_81 = &g_42;
    int32_t * const * const l_80 = &l_81;
    int32_t ***l_142 = &g_139;
    int8_t l_170 = 0x51L;
    int8_t l_236 = 0x12L;
    int16_t l_293 = 0x8C96L;
    if ((*p_57))
    {
        int32_t l_72 = 0xFEA44E0CL;
        g_73 = l_72;
        (*p_57) = ((safe_add_func_uint32_t_u_u((safe_mul_func_int16_t_s_s((l_78 < ((*p_58) == (void*)0)), (g_2 < (!((void*)0 != l_80))))), ((safe_mod_func_int16_t_s_s(p_60, ((**l_80) && (p_60 == g_39)))) ^ (**l_80)))) | p_60);
    }
    else
    {
        int16_t l_90 = 1L;
        int32_t l_136 = 0x0F3C6490L;
        if (((g_39 <= (safe_add_func_uint16_t_u_u(((&g_73 != (*l_80)) < p_60), p_60))) < (safe_lshift_func_uint16_t_u_u(p_60, (safe_lshift_func_uint8_t_u_s((l_90 < g_73), 5))))))
        {
            int32_t *l_92 = &g_42;
            int32_t **l_91 = &l_92;
            (*l_91) = (*l_80);
            for (p_60 = 0; (p_60 != (-8)); p_60 = safe_sub_func_uint16_t_u_u(p_60, 8))
            {
                if (g_39)
                    break;
                (*p_58) = (*l_91);
                if ((safe_sub_func_uint32_t_u_u(p_56, l_90)))
                {
                    (*p_57) = g_2;
                    (*p_57) = 0x50754B49L;
                }
                else
                {
                    int32_t *l_98 = &g_73;
                    g_97 = (*p_58);
                    (*p_58) = l_98;
                }
            }
            (*l_91) = (*p_58);
        }
        else
        {
            uint8_t l_118 = 2UL;
            uint32_t l_119 = 0x214255FAL;
            (*p_58) = (*p_58);
            if (((((-1L) <= (safe_mod_func_int8_t_s_s(((safe_add_func_int8_t_s_s((safe_sub_func_int16_t_s_s(g_73, p_56)), (((!((-1L) < (((safe_add_func_int8_t_s_s(((safe_mul_func_int16_t_s_s((safe_add_func_int32_t_s_s((*l_81), (*l_81))), (safe_add_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u(1UL, ((((safe_sub_func_int8_t_s_s(p_56, (0xB0F8L == 0L))) && 9UL) == p_56) != 0xCCL))) != l_90), (-1L))))) != g_42), g_2)) > l_90) <= 0xAC0FL))) && (**l_80)) >= g_2))) & l_118), l_119))) | g_73) == 0xFF94L))
            {
                g_97 = (*p_58);
                return g_39;
            }
            else
            {
                int32_t *l_120 = &g_42;
                (*p_58) = l_120;
                (*p_58) = (*p_58);
            }
            (*g_97) = ((((**l_80) != ((safe_sub_func_uint32_t_u_u(l_90, l_118)) < (safe_lshift_func_uint16_t_u_u((&l_81 != &l_81), 5)))) >= l_90) || (g_42 && p_60));
            (*p_58) = &g_42;
        }
        (*p_58) = (*p_58);
        l_136 = (safe_sub_func_int8_t_s_s(0x7BL, (((0x10B13A75L == ((&g_42 != &g_42) < (safe_lshift_func_uint8_t_u_u(p_56, 1)))) <= 0xDA5FL) & (safe_sub_func_int8_t_s_s(((!g_42) < ((void*)0 == &g_73)), l_90)))));
        (*p_57) = ((&p_59 != (void*)0) <= ((&p_57 != &g_97) >= (safe_mod_func_int16_t_s_s((((void*)0 != g_139) != ((safe_rshift_func_uint16_t_u_s((*l_81), ((void*)0 == (*p_58)))) & g_42)), p_56))));
    }
    (*l_142) = &p_59;
    for (l_78 = 0; (l_78 < 11); l_78 = safe_add_func_int32_t_s_s(l_78, 8))
    {
        int32_t l_147 = 0x49617166L;
        int32_t *l_226 = &g_42;
        int32_t l_246 = 9L;
        int32_t ***l_254 = (void*)0;
        for (p_60 = 23; (p_60 != (-13)); p_60--)
        {
            int8_t l_222 = 0xD4L;
            uint32_t l_229 = 0x3BA113A2L;
            int32_t ***l_230 = &g_139;
            l_147 = (*l_81);
            for (g_73 = 10; (g_73 >= (-21)); g_73 = safe_sub_func_int8_t_s_s(g_73, 9))
            {
                uint32_t l_154 = 0x5718CB29L;
                int16_t l_171 = 0xA3BBL;
                int32_t *l_227 = &g_73;
                for (l_147 = (-26); (l_147 != (-8)); l_147 = safe_add_func_int16_t_s_s(l_147, 6))
                {
                    uint32_t l_157 = 1UL;
                    if (((safe_lshift_func_uint8_t_u_u(l_154, (safe_sub_func_uint16_t_u_u((l_157 | (p_56 >= g_2)), (safe_mul_func_uint8_t_u_u((l_147 == g_73), (g_73 > ((((((((safe_lshift_func_uint16_t_u_s((safe_mul_func_uint8_t_u_u(l_147, (~(safe_rshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((+(*g_97)), 5)), 2))))), 7)) | g_73) != l_170) == 65535UL) & l_171) & p_56) ^ p_60) >= p_56)))))))) > g_73))
                    {
                        (*l_142) = (void*)0;
                        return g_73;
                    }
                    else
                    {
                        (*p_57) = ((safe_rshift_func_uint8_t_u_u(((g_39 >= 255UL) != (0x9FL | (safe_add_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s(((l_147 || (safe_lshift_func_uint8_t_u_u((0x72L && (safe_lshift_func_int16_t_s_s((65533UL | (((void*)0 == (*l_142)) <= (safe_mul_func_int16_t_s_s(g_73, g_42)))), 7))), p_56))) > g_42), 255UL)) | l_157), 0xCFL)))), 7)) && p_60);
                        (*p_57) = (safe_mul_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_u((safe_mul_func_int16_t_s_s((safe_mul_func_int16_t_s_s(((safe_sub_func_uint16_t_u_u((((&p_58 == (void*)0) >= ((!((((+(((safe_mod_func_uint16_t_u_u(((safe_mod_func_int32_t_s_s((safe_mul_func_uint8_t_u_u(((*p_58) == (void*)0), (((safe_add_func_int32_t_s_s((safe_mod_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_s((((safe_rshift_func_int16_t_s_u((((safe_rshift_func_int8_t_s_u(l_154, 5)) | (safe_mul_func_int8_t_s_s(p_60, ((l_154 <= (safe_lshift_func_uint16_t_u_s((safe_add_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s((((void*)0 == &g_139) > 0xABL), 2)), l_157)), 5))) >= g_42)))) && 0x3C2ACCF6L), g_73)) ^ g_42) > p_56), 8)) && p_60), 0xEBL)), l_157)) && 65535UL) | p_60))), (*g_97))) || p_60), p_60)) ^ 0xF5L) | g_2)) < (*l_81)) && p_56) != 0x77A3L)) && l_222)) <= 0L), p_60)) <= l_222), l_147)), g_42)), p_56)), l_147)), p_56));
                        (*g_139) = (*g_139);
                    }
                    for (l_154 = 6; (l_154 != 60); l_154 = safe_add_func_int16_t_s_s(l_154, 6))
                    {
                        g_225 = (250UL || l_222);
                        (*p_58) = l_226;
                    }
                    (*p_58) = (*g_139);
                }
                (**l_142) = l_227;
                return g_42;
            }
            if (((~l_229) | (l_230 != (void*)0)))
            {
                uint16_t l_234 = 0xE1E5L;
                (*p_58) = (*g_139);
                (**l_142) = (*g_139);
                if (((safe_mul_func_uint16_t_u_u((g_73 >= 0UL), (*l_81))) || 65534UL))
                {
                    uint16_t l_233 = 0x326FL;
                    return l_233;
                }
                else
                {
                    if (l_234)
                        break;
                    (**l_142) = (*g_139);
                    if ((*l_226))
                        continue;
                    if ((*p_57))
                    {
                        if ((**l_80))
                            break;
                    }
                    else
                    {
                        int32_t l_235 = 0xB927C989L;
                        return l_235;
                    }
                }
            }
            else
            {
                l_236 = (*p_57);
                for (l_222 = 25; (l_222 > 29); ++l_222)
                {
                    (*p_57) = ((safe_sub_func_int32_t_s_s((*g_97), (safe_lshift_func_uint16_t_u_u((!(safe_rshift_func_int16_t_s_u(p_60, g_73))), 4)))) == l_246);
                    if (((safe_rshift_func_uint8_t_u_u(g_2, 2)) != (((g_73 < p_56) || ((void*)0 != (*g_139))) || (~(safe_mod_func_int32_t_s_s((safe_mod_func_int8_t_s_s(((l_254 != &p_58) != (safe_lshift_func_uint8_t_u_u((0xB48EL < (safe_sub_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_s((((**l_80) && g_39) & 0L), 1)), 4)) != p_60), 0x1F519B72L))), 4))), p_60)), (*g_97)))))))
                    {
                        (**l_142) = (*g_139);
                        (*p_57) = (g_2 >= (&g_97 != &g_97));
                    }
                    else
                    {
                        uint32_t l_272 = 0UL;
                        (*p_57) = (0xAE9BL == ((((safe_sub_func_uint16_t_u_u((((safe_unary_minus_func_uint8_t_u((safe_add_func_uint16_t_u_u((((&g_97 == (void*)0) <= ((**l_230) != (*g_139))) != g_73), (safe_sub_func_int16_t_s_s((safe_add_func_int16_t_s_s(0x3CF2L, ((&g_97 != (*l_230)) ^ (-1L)))), g_42)))))) & p_56) & 0xFBL), 0UL)) <= g_2) != l_272) == (-6L)));
                        return g_73;
                    }
                    (**l_230) = (*p_58);
                    (*p_58) = (void*)0;
                }
                (*g_139) = (*g_139);
            }
            for (l_222 = 0; (l_222 == 22); l_222 = safe_add_func_int8_t_s_s(l_222, 4))
            {
                int32_t *l_290 = (void*)0;
                (*p_57) = (safe_sub_func_uint32_t_u_u(((-5L) & ((!(((*l_226) ^ ((safe_rshift_func_uint8_t_u_s((safe_mul_func_int8_t_s_s((((*g_97) != ((safe_lshift_func_uint8_t_u_u(p_56, ((*p_58) == (*g_139)))) < (safe_mul_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((safe_add_func_int32_t_s_s(((*p_57) > 0xFFDF3651L), (*p_57))), g_39)), p_60)))) & (*l_81)), 1UL)), 4)) && g_225)) < g_73)) ^ 3UL)), 0x24E93014L));
                (*p_57) = (-1L);
                (**l_142) = l_290;
                (*p_57) = (&g_97 != &g_97);
            }
        }
        g_73 = (safe_mul_func_uint16_t_u_u((l_293 | g_39), (safe_add_func_uint8_t_u_u((((safe_mul_func_uint16_t_u_u((p_56 & ((safe_unary_minus_func_uint32_t_u((((safe_sub_func_uint32_t_u_u((g_39 <= ((safe_sub_func_uint8_t_u_u((*l_81), (safe_sub_func_int8_t_s_s(g_2, (safe_rshift_func_int16_t_s_s((safe_mod_func_int32_t_s_s((((*g_97) <= (safe_rshift_func_int16_t_s_s(((safe_mul_func_int8_t_s_s((safe_add_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(7UL, 0)), ((((void*)0 == &p_58) == (*l_81)) | 3L))), g_39)) || (*p_57)), (**l_80)))) < (**l_80)), (*g_97))), 13)))))) & p_56)), p_60)) && p_60) ^ g_39))) && 1UL)), g_73)) & p_60) && (*g_97)), (*l_81)))));
    }
    return g_225;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    g_97 = 0;
    g_139 = 0;
    g_435 = 0;
    g_609 = 0;
    g_796 = 0;
    csmith_sink_ = g_2;
    csmith_sink_ = g_39;
    csmith_sink_ = g_42;
    csmith_sink_ = g_73;
    csmith_sink_ = g_225;
    csmith_sink_ = g_379;
    csmith_sink_ = g_409;
    csmith_sink_ = g_452;
    csmith_sink_ = g_701;
    csmith_sink_ = g_858;
    csmith_sink_ = g_1000;
    csmith_sink_ = g_1144;
    csmith_sink_ = g_1151;
    platform_main_end(0,0);
    return 0;
}
