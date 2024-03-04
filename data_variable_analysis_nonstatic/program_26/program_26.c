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
static int16_t g_29 = (-9L);
static uint16_t g_32 = 0xFC9BL;
static int8_t g_79 = 0x8EL;
static int32_t g_88 = 1L;
static int32_t *g_114 = &g_88;
static int32_t **g_113 = &g_114;
static int32_t ***g_112 = &g_113;
static int32_t g_147 = 0xBD2F3BE1L;
static uint16_t g_185 = 0x3B1CL;
static int32_t g_339 = 4L;
static int32_t g_343 = 0x6C6404DCL;
static int8_t g_363 = 0xBAL;
static int32_t g_394 = (-4L);
static int32_t g_436 = 0L;
static uint32_t g_469 = 0UL;
static int8_t g_494 = 0xEBL;
static int32_t g_525 = 1L;
static uint32_t g_537 = 0xA956860FL;
static const int8_t g_585 = (-1L);
static int32_t g_671 = (-6L);
static int8_t g_676 = (-1L);
static int16_t g_680 = 1L;
static uint32_t g_767 = 18446744073709551608UL;
static uint32_t g_855 = 18446744073709551615UL;
static int16_t g_873 = 0x1847L;
static int8_t g_875 = 0L;
static int32_t g_877 = 0x8C375541L;
static int8_t g_888 = 0xEDL;
static uint8_t g_920 = 0x42L;
static int16_t g_1101 = 0L;
static int32_t g_1109 = 0x1FFC8FB8L;
static uint32_t g_1129 = 0UL;
static uint16_t g_1222 = 0x8E94L;
static int32_t g_1229 = (-6L);
static int32_t g_1231 = 0x8B08106DL;
static uint32_t g_1245 = 0xEAAA2163L;
static int32_t ****g_1250 = &g_112;
static int32_t *****g_1249 = &g_1250;
static int8_t g_1290 = 0x46L;
static int32_t g_1291 = 1L;
static int32_t g_1316 = (-3L);
static uint32_t g_1338 = 4294967288UL;
static const uint16_t g_1365 = 5UL;
static uint32_t g_1377 = 0x1D033CD5L;
static int32_t ****g_1385 = &g_112;
static int32_t *g_1531 = &g_436;
static int32_t func_1(void);
static int16_t func_4(int32_t p_5, uint32_t p_6, uint16_t p_7, int8_t p_8, int8_t p_9);
inline static int8_t func_13(const uint16_t p_14, uint16_t p_15, uint32_t p_16, int32_t p_17);
inline static int8_t func_22(uint16_t p_23, int32_t p_24, uint32_t p_25);
inline static int8_t func_26(int8_t p_27, int16_t p_28);
static uint16_t func_48(uint32_t p_49, uint16_t p_50, uint32_t p_51);
static uint32_t func_52(int32_t p_53, uint16_t p_54, int16_t p_55, int8_t p_56, int8_t p_57);
inline static uint8_t func_58(int16_t p_59, uint32_t p_60, const int32_t p_61);
static uint8_t func_66(int8_t p_67, uint32_t p_68, const uint8_t p_69, int8_t p_70);
static int8_t func_73(uint8_t p_74, int32_t p_75, uint8_t p_76, int8_t p_77);
static int32_t func_1(void)
{
    int32_t l_10 = 0x74B666A7L;
    uint32_t l_30 = 7UL;
    int32_t l_1545 = 0xAC3B659DL;
    int32_t l_1553 = 1L;
    l_1553 &= (safe_lshift_func_uint16_t_u_s(0xE559L, func_4(l_10, l_10, (safe_sub_func_int16_t_s_s((func_13((safe_unary_minus_func_int32_t_s((safe_unary_minus_func_uint32_t_u((((safe_rshift_func_int8_t_s_s(func_22(((l_10 ^ ((0xACL ^ func_26(g_29, l_30)) ^ 0xB0F48CC1L)) | 0x53F31A10L), l_10, g_875), 2)) <= l_10) | l_10))))), l_30, l_10, g_343) != l_1545), l_1545)), g_343, g_1245)));
    for (g_1129 = (-4); (g_1129 <= 60); g_1129++)
    {
        uint8_t l_1562 = 0x5DL;
        for (l_1553 = 4; (l_1553 != 4); l_1553 = safe_add_func_uint32_t_u_u(l_1553, 9))
        {
            uint32_t l_1571 = 0UL;
            (****g_1250) = (safe_rshift_func_uint8_t_u_u((safe_mod_func_int32_t_s_s((*****g_1249), l_1562)), (((0L && (safe_rshift_func_int8_t_s_s(((safe_rshift_func_int16_t_s_s(0x0A5CL, 8)) || (safe_add_func_uint32_t_u_u((((***g_1385) != (void*)0) & (0xE5L < ((safe_add_func_int8_t_s_s((l_1571 ^ (safe_mod_func_uint32_t_u_u(0x7EB56FA8L, 0xAF65F367L))), l_1571)) ^ l_1571))), 0x33BF664EL))), 7))) < g_1365) & g_1338)));
            (****g_1250) = (safe_unary_minus_func_uint32_t_u(((((**g_1249) == (void*)0) > l_1571) >= 0x2A91L)));
        }
    }
    return (**g_113);
}
static int16_t func_4(int32_t p_5, uint32_t p_6, uint16_t p_7, int8_t p_8, int8_t p_9)
{
    int16_t l_1546 = 7L;
    int32_t *l_1552 = &g_877;
    (****g_1385) = (l_1546 <= (g_1338 || ((safe_add_func_int32_t_s_s((safe_mod_func_uint32_t_u_u((!(((-4L) & (g_1291 >= p_9)) < ((g_585 != ((void*)0 == l_1552)) >= (*l_1552)))), (-10L))), (-9L))) < (***g_112))));
    return p_7;
}
inline static int8_t func_13(const uint16_t p_14, uint16_t p_15, uint32_t p_16, int32_t p_17)
{
    int32_t *l_994 = &g_147;
    int32_t *l_995 = &g_147;
    int32_t *l_996 = &g_147;
    int32_t *l_997 = &g_147;
    int32_t *l_998 = &g_877;
    int32_t *l_999 = (void*)0;
    int32_t *l_1000 = &g_877;
    int32_t *l_1001 = &g_88;
    int32_t *l_1002 = &g_877;
    int32_t *l_1003 = &g_436;
    int32_t *l_1004 = &g_671;
    int32_t *l_1005 = &g_671;
    int32_t *l_1006 = &g_436;
    int32_t l_1007 = 1L;
    int32_t *l_1008 = (void*)0;
    int32_t *l_1009 = &g_525;
    int32_t *l_1010 = &g_877;
    int32_t l_1011 = (-6L);
    int32_t l_1012 = 0x5F02047EL;
    int32_t *l_1013 = &g_525;
    int16_t l_1014 = 1L;
    int32_t *l_1015 = &g_877;
    int32_t *l_1016 = &g_525;
    int32_t *l_1017 = &g_436;
    int32_t *l_1018 = (void*)0;
    int32_t *l_1019 = &g_525;
    int32_t *l_1020 = &g_671;
    int32_t l_1021 = 1L;
    int32_t *l_1022 = &l_1021;
    int32_t *l_1023 = &g_671;
    int32_t l_1024 = (-1L);
    int32_t *l_1025 = &g_525;
    int32_t *l_1026 = (void*)0;
    int32_t *l_1027 = (void*)0;
    int32_t *l_1028 = &l_1021;
    int32_t *l_1029 = (void*)0;
    int32_t *l_1030 = &g_147;
    int32_t *l_1031 = (void*)0;
    int32_t *l_1032 = &l_1024;
    int32_t *l_1033 = &l_1012;
    int32_t l_1034 = (-1L);
    int32_t *l_1035 = &g_436;
    int32_t l_1036 = 0x38126FFDL;
    int32_t *l_1037 = &g_877;
    int32_t l_1038 = (-4L);
    int32_t *l_1039 = &l_1011;
    int32_t *l_1040 = (void*)0;
    int32_t *l_1041 = &g_436;
    int32_t *l_1042 = &l_1007;
    int32_t *l_1043 = &l_1021;
    int32_t *l_1044 = &g_436;
    int32_t *l_1045 = &l_1011;
    int32_t l_1046 = 0xA6F76317L;
    int32_t *l_1047 = &l_1046;
    int32_t *l_1048 = &g_436;
    int16_t l_1049 = 0L;
    int32_t *l_1050 = &g_436;
    int32_t *l_1051 = &l_1007;
    int32_t *l_1052 = &g_147;
    int32_t *l_1053 = &l_1038;
    int32_t l_1054 = 0x89DCFF2DL;
    int32_t *l_1055 = (void*)0;
    int32_t *l_1056 = (void*)0;
    int32_t *l_1057 = &l_1054;
    int32_t *l_1058 = &l_1034;
    int32_t *l_1059 = &l_1012;
    int32_t *l_1060 = &g_671;
    int32_t *l_1061 = &g_525;
    int32_t *l_1062 = &l_1024;
    int32_t *l_1063 = &g_436;
    int32_t *l_1064 = (void*)0;
    int32_t *l_1065 = &g_671;
    int32_t l_1066 = 0x92683E8AL;
    int16_t l_1067 = 9L;
    int32_t *l_1068 = &g_877;
    int32_t *l_1069 = &l_1007;
    int32_t *l_1070 = &l_1011;
    int32_t l_1071 = 0x2A37B740L;
    int32_t l_1072 = 7L;
    int32_t *l_1073 = &l_1071;
    int32_t *l_1074 = &g_147;
    int32_t *l_1075 = (void*)0;
    int32_t *l_1076 = &l_1071;
    int32_t *l_1077 = (void*)0;
    int32_t l_1078 = 0L;
    int32_t *l_1079 = &l_1012;
    int32_t l_1080 = 0x7ABEDC6EL;
    int32_t *l_1081 = (void*)0;
    int32_t *l_1082 = &l_1038;
    int32_t *l_1083 = (void*)0;
    int32_t *l_1084 = &l_1021;
    int32_t *l_1085 = &l_1071;
    int32_t *l_1086 = &l_1078;
    int32_t *l_1087 = &g_877;
    int32_t *l_1088 = &l_1038;
    int32_t *l_1089 = &l_1054;
    int32_t l_1090 = 0x96CDF6C1L;
    int32_t l_1091 = 0L;
    int32_t *l_1092 = &l_1034;
    int32_t *l_1093 = &l_1090;
    int32_t *l_1094 = (void*)0;
    int32_t *l_1095 = &l_1066;
    int32_t *l_1096 = &l_1046;
    int32_t *l_1097 = &l_1054;
    int32_t *l_1098 = &l_1071;
    int32_t *l_1099 = &g_525;
    int32_t *l_1100 = (void*)0;
    int32_t l_1102 = 0L;
    int32_t *l_1103 = &l_1012;
    int32_t *l_1104 = &l_1102;
    int32_t *l_1105 = &l_1066;
    int32_t *l_1106 = &g_147;
    int32_t *l_1107 = (void*)0;
    int32_t *l_1108 = &l_1066;
    int32_t *l_1110 = &l_1036;
    int32_t *l_1111 = &l_1102;
    int32_t *l_1112 = &l_1046;
    int32_t *l_1113 = &g_671;
    int32_t l_1114 = 0x94AB1042L;
    int32_t *l_1115 = &g_147;
    int32_t *l_1116 = &g_436;
    int32_t *l_1117 = &g_88;
    int32_t *l_1118 = (void*)0;
    int32_t *l_1119 = &l_1011;
    int32_t *l_1120 = (void*)0;
    int32_t l_1121 = (-1L);
    int32_t *l_1122 = &l_1011;
    int32_t *l_1123 = (void*)0;
    int32_t *l_1124 = &l_1046;
    int32_t *l_1125 = &g_671;
    int32_t *l_1126 = (void*)0;
    int32_t *l_1127 = (void*)0;
    int32_t *l_1128 = &l_1102;
    uint32_t l_1137 = 0UL;
    int32_t ***l_1160 = &g_113;
    uint8_t l_1261 = 0x96L;
    int16_t l_1370 = 6L;
    int32_t ***** const l_1509 = &g_1385;
    ++g_1129;
    for (l_1054 = (-2); (l_1054 < (-28)); l_1054--)
    {
        const uint16_t l_1149 = 65532UL;
        int32_t l_1151 = 0xDDB68611L;
        int32_t l_1152 = 3L;
        uint8_t l_1174 = 0x06L;
        int32_t ****l_1185 = &g_112;
        int32_t *****l_1184 = &l_1185;
        int32_t l_1190 = 0xB0AC903CL;
        int32_t l_1236 = 0x39A7DE60L;
        uint8_t l_1260 = 0x87L;
        int32_t l_1277 = (-1L);
        uint16_t l_1428 = 0x7977L;
        int8_t l_1436 = 1L;
        uint32_t l_1437 = 1UL;
        int16_t l_1487 = 0xD08AL;
        if ((*l_1098))
            break;
    }
    (*l_1074) = ((((((safe_add_func_int16_t_s_s((1UL >= (***g_112)), ((-1L) <= g_877))) ^ (((safe_mod_func_int32_t_s_s(((*g_1385) != (*g_1385)), (*l_995))) >= (safe_mod_func_uint8_t_u_u((((*l_1103) > (safe_add_func_int8_t_s_s(((!g_88) ^ g_1291), g_1101))) && p_17), g_469))) & g_1109)) ^ 8L) | (*l_1069)) & 0L) > (*l_1057));
    return (*l_1019);
}
inline static int8_t func_22(uint16_t p_23, int32_t p_24, uint32_t p_25)
{
    uint16_t l_993 = 0x9651L;
    return l_993;
}
inline static int8_t func_26(int8_t p_27, int16_t p_28)
{
    int8_t l_31 = 8L;
    int32_t l_271 = (-2L);
    int32_t ***l_273 = (void*)0;
    int32_t l_364 = 1L;
    uint32_t l_707 = 0UL;
    int32_t l_829 = 0x8A8602A0L;
    int32_t l_906 = 6L;
    int32_t **l_979 = (void*)0;
    uint8_t l_990 = 0xF3L;
    uint32_t l_991 = 4294967295UL;
    g_32--;
    if (((((safe_lshift_func_uint16_t_u_u((((+(safe_rshift_func_uint16_t_u_u((((((l_31 == ((safe_rshift_func_uint16_t_u_u((safe_unary_minus_func_uint32_t_u((safe_mod_func_uint32_t_u_u(0xF9F3B06DL, (safe_sub_func_uint8_t_u_u(0x87L, ((~func_48(func_52(g_32, l_31, l_31, g_32, (((func_58(g_32, g_29, l_31) == 0x5FL) & p_27) ^ 0x00ABD0B1L)), p_28, g_29)) == 0UL))))))), p_27)) | l_31)) != 0x2514DC0AL) ^ (-1L)) ^ g_32) < p_27), l_31))) >= p_27) < p_27), l_31)) != l_31) || 0xEEA4L) <= 1L))
    {
        int16_t l_272 = 0L;
        int32_t l_284 = 0x4C5443C5L;
        int32_t l_305 = 0x6F389892L;
        int32_t l_337 = 0x6011ED2FL;
        int32_t l_341 = 0L;
        int32_t l_342 = (-4L);
        int32_t l_383 = (-1L);
        int8_t l_406 = 0xDBL;
        int32_t l_409 = 1L;
        int32_t l_410 = (-1L);
        int32_t l_416 = 0x28952072L;
        int32_t l_422 = 0xA4226199L;
        int32_t *l_577 = &g_525;
        int32_t ***l_732 = (void*)0;
        int8_t l_939 = 0x0FL;
        if ((***g_112))
        {
            uint8_t l_283 = 0x0FL;
            int32_t l_367 = 0xB5E63313L;
            int32_t l_386 = 0xD302FA1FL;
            int32_t l_423 = 1L;
            l_271 |= (-10L);
            if (((l_271 && ((l_272 & (&g_113 != l_273)) >= ((safe_rshift_func_int16_t_s_u(p_27, ((**g_113) ^ 0x07154B7DL))) ^ (safe_add_func_uint32_t_u_u(l_272, (safe_rshift_func_uint8_t_u_u((!((safe_add_func_int32_t_s_s((l_272 != 255UL), l_272)) || g_79)), l_283))))))) < l_283))
            {
                int32_t *l_285 = &g_147;
                int32_t *l_286 = &l_271;
                int32_t *l_287 = &g_147;
                int32_t *l_288 = &g_88;
                int32_t *l_289 = &l_271;
                int32_t *l_290 = (void*)0;
                int32_t *l_291 = (void*)0;
                int32_t *l_292 = &l_284;
                int32_t *l_293 = (void*)0;
                int32_t *l_294 = (void*)0;
                int32_t *l_295 = &g_147;
                int32_t *l_296 = &l_271;
                int32_t *l_297 = &l_271;
                int32_t *l_298 = &l_271;
                int32_t *l_299 = &l_284;
                int32_t *l_300 = &l_284;
                int32_t *l_301 = &g_147;
                int32_t *l_302 = &l_284;
                int32_t *l_303 = &l_271;
                int32_t *l_304 = &l_271;
                int32_t *l_306 = &g_147;
                int32_t *l_307 = &l_305;
                int32_t *l_308 = &l_305;
                int32_t *l_309 = (void*)0;
                int32_t *l_310 = &g_147;
                int32_t *l_311 = &l_305;
                int32_t *l_312 = &g_147;
                int32_t *l_313 = &l_271;
                int32_t *l_314 = &l_271;
                int32_t *l_315 = &g_88;
                int32_t *l_316 = &g_147;
                int32_t *l_317 = &l_305;
                int32_t *l_318 = (void*)0;
                int32_t *l_319 = (void*)0;
                int32_t l_320 = 0x559E7449L;
                int32_t *l_321 = &l_305;
                int32_t *l_322 = &g_88;
                int32_t *l_323 = &l_271;
                int32_t *l_324 = &g_88;
                int32_t *l_325 = &l_284;
                int32_t *l_326 = (void*)0;
                int32_t *l_327 = &l_271;
                int32_t *l_328 = &l_284;
                int32_t *l_329 = &l_305;
                int32_t *l_330 = (void*)0;
                int32_t *l_331 = &g_88;
                int32_t *l_332 = &g_147;
                int32_t *l_333 = &l_305;
                int32_t *l_334 = &l_284;
                int32_t *l_335 = (void*)0;
                int32_t *l_336 = &g_147;
                int32_t *l_338 = &l_337;
                int32_t *l_340 = (void*)0;
                int32_t *l_344 = &l_341;
                int32_t *l_345 = (void*)0;
                int32_t *l_346 = &g_88;
                int32_t *l_347 = &l_337;
                int32_t *l_348 = &l_341;
                int32_t *l_349 = &l_337;
                int32_t *l_350 = &g_147;
                int32_t *l_351 = (void*)0;
                int32_t *l_352 = (void*)0;
                int32_t *l_353 = &g_147;
                int32_t *l_354 = &l_337;
                int32_t *l_355 = &l_342;
                int32_t *l_356 = (void*)0;
                int32_t *l_357 = &l_320;
                int32_t *l_358 = &l_337;
                int32_t *l_359 = &l_337;
                int32_t *l_360 = &l_341;
                int32_t *l_361 = &l_284;
                int32_t *l_362 = &l_271;
                int32_t *l_365 = &g_88;
                int32_t *l_366 = &l_284;
                int32_t *l_368 = &l_341;
                int32_t *l_369 = &l_305;
                int32_t *l_370 = (void*)0;
                int32_t *l_371 = &g_147;
                int32_t *l_372 = &g_88;
                int32_t *l_373 = (void*)0;
                int32_t *l_374 = &g_147;
                int32_t *l_375 = (void*)0;
                int32_t *l_376 = (void*)0;
                int32_t *l_377 = &l_271;
                int32_t *l_378 = &l_341;
                int32_t *l_379 = &l_342;
                int32_t *l_380 = &l_364;
                int32_t *l_381 = &l_320;
                int32_t *l_382 = &g_88;
                int32_t *l_384 = &l_383;
                int32_t *l_385 = &l_341;
                int32_t *l_387 = (void*)0;
                int32_t *l_388 = &l_337;
                int32_t *l_389 = &l_386;
                int32_t *l_390 = &l_342;
                int32_t *l_391 = &l_367;
                int32_t *l_392 = &l_271;
                int32_t *l_393 = &g_147;
                int32_t *l_395 = &l_341;
                int32_t *l_396 = &l_364;
                int32_t *l_397 = (void*)0;
                int32_t *l_398 = &l_337;
                int32_t *l_399 = &l_342;
                int32_t *l_400 = &l_386;
                int32_t *l_401 = &l_386;
                int32_t *l_402 = &l_305;
                int32_t *l_403 = &l_320;
                int32_t *l_404 = &l_386;
                int32_t *l_405 = (void*)0;
                int32_t *l_407 = &l_284;
                int32_t *l_408 = &l_284;
                int32_t *l_411 = (void*)0;
                int32_t *l_412 = &l_383;
                int32_t *l_413 = &l_409;
                int32_t *l_414 = &l_386;
                int32_t *l_415 = &l_409;
                int32_t l_417 = (-1L);
                int32_t *l_418 = &l_409;
                int32_t *l_419 = &l_305;
                int32_t *l_420 = &g_88;
                int32_t *l_421 = &l_341;
                int32_t *l_424 = &l_383;
                int32_t *l_425 = &l_423;
                int32_t *l_426 = &l_417;
                int32_t *l_427 = &l_410;
                int32_t *l_428 = &l_341;
                int32_t *l_429 = &g_88;
                int32_t *l_430 = &l_284;
                int32_t *l_431 = &g_88;
                int32_t *l_432 = &l_320;
                int32_t *l_433 = &l_416;
                int32_t *l_434 = &l_367;
                int32_t *l_435 = &l_367;
                int32_t *l_437 = &l_386;
                int32_t *l_438 = &l_409;
                int32_t *l_439 = &l_284;
                int32_t *l_440 = &l_337;
                int32_t *l_441 = &l_342;
                int32_t *l_442 = &g_436;
                int32_t *l_443 = &l_320;
                int32_t *l_444 = &l_386;
                int32_t *l_445 = &l_409;
                int32_t *l_446 = &l_423;
                int32_t *l_447 = &l_284;
                int32_t *l_448 = &l_410;
                int32_t *l_449 = &l_383;
                int32_t *l_450 = &l_410;
                int32_t *l_451 = &l_422;
                int32_t *l_452 = &l_271;
                int32_t *l_453 = &l_305;
                int32_t *l_454 = &g_147;
                int32_t *l_455 = (void*)0;
                int32_t *l_456 = &l_410;
                int32_t *l_457 = (void*)0;
                int32_t *l_458 = (void*)0;
                int32_t *l_459 = &g_436;
                int32_t *l_460 = &l_284;
                int32_t *l_461 = &g_88;
                int32_t *l_462 = &l_367;
                int32_t *l_463 = &g_147;
                int32_t *l_464 = &l_410;
                int32_t l_465 = 0x7CC21393L;
                int32_t *l_466 = &l_342;
                int32_t *l_467 = &g_436;
                int32_t *l_468 = (void*)0;
                --g_469;
            }
            else
            {
                int8_t l_481 = 0L;
                int32_t l_483 = 0xF30843EAL;
                int32_t *l_490 = (void*)0;
                int32_t *l_491 = &l_409;
                (*g_114) |= (safe_add_func_uint32_t_u_u((safe_add_func_uint32_t_u_u(((safe_rshift_func_uint8_t_u_s((&l_284 != (void*)0), 0)) && (safe_sub_func_int8_t_s_s(p_28, (!(l_481 && (~((((l_483 || (safe_unary_minus_func_uint32_t_u(0xD6A38756L))) == 0x9793804DL) ^ (safe_mod_func_int32_t_s_s((!((safe_add_func_int16_t_s_s(g_436, ((p_28 <= p_28) < l_283))) ^ 1UL)), 0x1DCF8AABL))) | 0x49L))))))), l_386)), p_27));
                (*l_491) |= (***g_112);
            }
            (***g_112) = (safe_rshift_func_uint16_t_u_u(g_494, 0));
        }
        else
        {
            int32_t **l_500 = &g_114;
            if ((***g_112))
            {
                int8_t l_497 = (-1L);
                (**l_500) |= (safe_lshift_func_uint16_t_u_s(l_497, (0L <= (safe_add_func_int32_t_s_s((g_339 >= (((l_500 != (*g_112)) >= (0x7FL || (safe_lshift_func_int8_t_s_u((((safe_lshift_func_int16_t_s_s(0x9DBDL, 12)) >= (g_339 ^ l_497)) > (-1L)), 0)))) && 3UL)), 0x38234334L)))));
                return g_469;
            }
            else
            {
                (**g_112) = (*l_500);
                (*l_500) = (**g_112);
            }
        }
        for (l_406 = 0; (l_406 == (-2)); l_406 = safe_sub_func_int16_t_s_s(l_406, 2))
        {
            const int32_t *l_514 = &l_383;
            const int32_t **l_513 = &l_514;
            int32_t l_534 = 0xF73DE939L;
            int32_t l_620 = 0xFE5F782EL;
        }
        if (p_27)
        {
            int32_t *l_714 = &l_337;
            if (((safe_add_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(p_28, ((l_714 != (*g_113)) >= ((~g_436) > g_671)))), p_28)) & (-1L)))
            {
                int32_t l_718 = 1L;
                int32_t **l_730 = &l_714;
                (**g_113) = (safe_rshift_func_int16_t_s_u((((0xB1L > l_718) != ((void*)0 == (*g_112))) >= (safe_mod_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((p_27 | ((safe_rshift_func_int8_t_s_s((((+(((safe_rshift_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((p_27 & (((((l_730 == (void*)0) >= (safe_unary_minus_func_int32_t_s(p_28))) != p_27) < p_27) > g_29)), g_88)), g_676)) <= 0xD9L) < p_28)) | 0xBFDEF3ACL) >= g_680), g_537)) >= (**l_730))), g_32)), (-7L)))), 4));
            }
            else
            {
                (*g_114) ^= (0x0D7B47D2L || g_494);
            }
            (**g_113) = (l_732 == (void*)0);
        }
        else
        {
            int32_t *l_735 = &l_341;
            int32_t l_783 = 1L;
            int32_t l_808 = (-6L);
            int32_t l_811 = 0xDA52E9FBL;
            int32_t l_812 = 0xF4E64863L;
            int32_t l_837 = 2L;
            int32_t l_846 = (-1L);
            uint32_t l_941 = 0x0B240730L;
            (*g_113) = (*g_113);
            for (g_525 = 0; (g_525 <= (-8)); --g_525)
            {
                int32_t *l_740 = &l_341;
                const int32_t *l_741 = &l_410;
                int32_t l_876 = 0L;
                int32_t l_917 = (-5L);
                uint16_t l_940 = 0UL;
                if ((((l_735 == (*g_113)) == (safe_lshift_func_int8_t_s_s(((safe_sub_func_uint32_t_u_u(((((l_740 == l_741) > 1UL) <= (g_32 >= (safe_sub_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(g_88, ((*l_741) ^ (safe_rshift_func_uint16_t_u_s((!(safe_mod_func_uint8_t_u_u(p_28, (*l_735)))), 3))))), p_27)))) ^ (*l_577)), (**g_113))) & g_585), p_27))) || 1UL))
                {
                    (***g_112) = (***g_112);
                    (**g_113) = (*l_577);
                    for (g_29 = 0; (g_29 < (-6)); g_29 = safe_sub_func_uint32_t_u_u(g_29, 7))
                    {
                        int32_t *l_753 = &l_383;
                        int32_t *l_754 = (void*)0;
                        int32_t *l_755 = &g_671;
                        int32_t *l_756 = &g_88;
                        int32_t *l_757 = &l_284;
                        int32_t *l_758 = &l_284;
                        int32_t *l_759 = &l_337;
                        int32_t *l_760 = (void*)0;
                        int32_t *l_761 = &g_147;
                        int32_t *l_762 = (void*)0;
                        int32_t *l_763 = &l_364;
                        int32_t *l_764 = (void*)0;
                        int32_t *l_765 = &l_410;
                        int32_t *l_766 = &l_342;
                        g_767++;
                    }
                }
                else
                {
                    int16_t l_805 = 0xDE78L;
                    int32_t l_836 = 0x85FC0F28L;
                    int32_t l_894 = 0xA1BA3C89L;
                    int32_t l_899 = 6L;
                    int32_t l_900 = (-1L);
                    if ((((*l_735) & p_28) | (safe_mod_func_uint8_t_u_u(((((safe_add_func_int8_t_s_s(((((*g_113) == (void*)0) > (p_28 ^ (g_394 || (safe_add_func_uint32_t_u_u(0xD631AC0CL, (((***g_112) < (***g_112)) ^ g_494)))))) != 0x6E74L), 1UL)) || (*l_740)) < p_27) | g_79), g_494))))
                    {
                        int32_t *l_776 = &l_337;
                        int32_t *l_777 = (void*)0;
                        int32_t l_778 = 0L;
                        int32_t *l_779 = &l_342;
                        int32_t *l_780 = (void*)0;
                        int32_t *l_781 = &l_409;
                        int32_t *l_782 = (void*)0;
                        int32_t *l_784 = &g_88;
                        int32_t *l_785 = &l_364;
                        int32_t *l_786 = &l_341;
                        int32_t *l_787 = &l_416;
                        int32_t *l_788 = &l_284;
                        int32_t *l_789 = &g_147;
                        int32_t l_790 = 0x0AB179F6L;
                        int32_t *l_791 = &g_147;
                        int32_t *l_792 = &g_147;
                        int32_t *l_793 = (void*)0;
                        int32_t *l_794 = &l_364;
                        int32_t *l_795 = &l_416;
                        int32_t *l_796 = (void*)0;
                        int32_t *l_797 = &l_416;
                        int32_t *l_798 = &l_790;
                        int32_t *l_799 = &l_341;
                        int32_t *l_800 = &l_778;
                        int32_t *l_801 = &l_341;
                        int32_t *l_802 = (void*)0;
                        int32_t *l_803 = (void*)0;
                        int32_t *l_804 = &l_410;
                        int32_t *l_806 = &g_436;
                        int32_t *l_807 = &l_790;
                        int32_t *l_809 = &l_416;
                        int32_t *l_810 = &l_342;
                        int32_t l_813 = 4L;
                        int32_t *l_814 = &g_671;
                        int32_t *l_815 = &l_416;
                        int32_t *l_816 = (void*)0;
                        int32_t *l_817 = &g_147;
                        int32_t *l_818 = &l_305;
                        int32_t *l_819 = (void*)0;
                        int32_t *l_820 = (void*)0;
                        int32_t *l_821 = &g_88;
                        int32_t *l_822 = &l_812;
                        int32_t *l_823 = (void*)0;
                        int32_t *l_824 = &g_671;
                        int32_t *l_825 = &g_147;
                        int32_t *l_826 = &l_409;
                        int32_t *l_827 = &l_305;
                        int32_t *l_828 = &l_305;
                        int32_t *l_830 = &l_342;
                        int32_t l_831 = 0xE4C37FB3L;
                        int32_t *l_832 = &l_284;
                        int32_t *l_833 = &l_284;
                        int32_t *l_834 = &l_337;
                        int32_t *l_835 = &g_436;
                        int32_t *l_838 = &l_811;
                        int32_t *l_839 = (void*)0;
                        int32_t *l_840 = (void*)0;
                        int32_t *l_841 = &l_813;
                        int32_t *l_842 = &l_284;
                        int32_t *l_843 = &g_147;
                        int32_t *l_844 = &l_837;
                        int32_t *l_845 = &l_778;
                        int32_t *l_847 = &l_808;
                        int32_t *l_848 = &l_271;
                        int32_t *l_849 = &l_409;
                        int32_t *l_850 = &l_812;
                        int32_t *l_851 = &l_808;
                        int32_t *l_852 = &l_305;
                        int32_t *l_853 = &l_364;
                        int32_t *l_854 = &l_808;
                        int32_t l_872 = 0xC03AC7ADL;
                        int32_t l_874 = 0xDB7756A1L;
                        int32_t *l_878 = (void*)0;
                        int32_t *l_879 = &l_836;
                        int32_t *l_880 = &l_811;
                        int32_t *l_881 = &g_671;
                        int32_t *l_882 = &l_305;
                        int32_t *l_883 = &g_147;
                        int32_t *l_884 = (void*)0;
                        int32_t *l_885 = &l_813;
                        int32_t *l_886 = &l_271;
                        int32_t *l_887 = &g_436;
                        int32_t *l_889 = &g_436;
                        int32_t *l_890 = &l_813;
                        int32_t *l_891 = &l_383;
                        int32_t *l_892 = &l_409;
                        int32_t *l_893 = &l_416;
                        int32_t *l_895 = &g_671;
                        int32_t *l_896 = &l_778;
                        int32_t *l_897 = &g_436;
                        int32_t *l_898 = &l_876;
                        int32_t *l_901 = &l_305;
                        int32_t *l_902 = &l_422;
                        int32_t *l_903 = &l_899;
                        int32_t *l_904 = &l_831;
                        int32_t *l_905 = &l_831;
                        int32_t *l_907 = &l_876;
                        int32_t *l_908 = (void*)0;
                        int32_t *l_909 = &g_88;
                        int32_t *l_910 = &l_341;
                        int32_t *l_911 = &l_894;
                        int32_t *l_912 = &l_778;
                        int32_t *l_913 = (void*)0;
                        int32_t *l_914 = &l_813;
                        int32_t *l_915 = &l_410;
                        int32_t *l_916 = &l_872;
                        int32_t *l_918 = &l_341;
                        int32_t *l_919 = (void*)0;
                        ++g_855;
                        l_872 = (safe_add_func_uint16_t_u_u(l_805, (p_27 > (safe_add_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u(g_855, 9)), (safe_add_func_uint8_t_u_u((0x3D98L ^ (((safe_add_func_uint8_t_u_u((l_836 && (safe_add_func_uint16_t_u_u(g_671, (p_28 >= (((((safe_mod_func_uint16_t_u_u(0UL, (*l_740))) & p_27) >= (*l_850)) & p_27) > l_836))))), 6L)) > g_469) < p_28)), l_836)))))));
                        g_920--;
                        (*l_740) = p_27;
                    }
                    else
                    {
                        int32_t **l_927 = &l_735;
                        int32_t ****l_961 = &g_112;
                        int32_t *****l_960 = &l_961;
                        (***g_112) = (safe_lshift_func_uint16_t_u_s((p_28 >= (safe_add_func_int16_t_s_s(((((((l_927 != (*g_112)) > (((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((safe_add_func_int8_t_s_s(((g_671 ^ (-8L)) || ((safe_sub_func_int16_t_s_s((-1L), g_469)) <= (safe_unary_minus_func_uint32_t_u((4L > ((safe_sub_func_uint32_t_u_u((p_28 && p_27), p_27)) <= p_27)))))), g_855)), l_939)), (-6L))) && l_940) ^ (*l_740))) || (*l_735)) >= g_875) <= 8L) ^ 0UL), p_28))), l_941));
                        (**l_927) &= (safe_rshift_func_uint8_t_u_u((g_494 > (safe_rshift_func_int16_t_s_s(((safe_sub_func_uint16_t_u_u(0x08AEL, (safe_sub_func_int16_t_s_s((((safe_sub_func_uint8_t_u_u(0x3EL, (safe_add_func_uint16_t_u_u(((g_671 == p_27) & (p_27 != (safe_add_func_int8_t_s_s((safe_sub_func_int8_t_s_s(1L, (safe_lshift_func_int8_t_s_u(((g_537 != (g_88 & 0x7E2CL)) & p_27), 5)))), (-1L))))), 65535UL)))) <= p_28) | l_900), 5UL)))) && (***g_112)), 11))), p_27));
                        (*l_960) = &g_112;
                    }
                    (***g_112) &= (g_676 == (&l_876 == (*g_113)));
                }
                for (g_888 = 0; (g_888 == (-11)); g_888 = safe_sub_func_uint32_t_u_u(g_888, 4))
                {
                    uint8_t l_975 = 249UL;
                    (**g_112) = (**g_112);
                    (*l_735) &= (*g_114);
                    (*g_114) = (6UL && ((0x52L == ((safe_rshift_func_uint16_t_u_s(((((safe_rshift_func_uint8_t_u_u((0x2E698B66L | (p_27 == g_88)), ((((safe_sub_func_int8_t_s_s(((((+(0x6DD2L | (safe_rshift_func_int8_t_s_u(((safe_lshift_func_int16_t_s_s((*l_577), 0)) >= (***g_112)), ((*g_112) == &l_577))))) > l_975) || p_28) & p_28), g_436)) & p_27) <= 0x4DCFL) | p_28))) != g_676) != (***g_112)) <= g_339), 10)) ^ p_27)) > 0x565DL));
                    (***g_112) &= p_27;
                }
            }
        }
        (*l_577) = (((!((((l_979 != l_979) > ((safe_sub_func_uint32_t_u_u((g_855 == g_185), ((safe_mod_func_int16_t_s_s(p_28, 65535UL)) & g_339))) <= (0xD422L > (0xF652L != p_28)))) == 3L) == 4294967294UL)) && p_28) & g_343);
    }
    else
    {
        int32_t *l_986 = &g_671;
        (*l_986) ^= ((p_27 || ((l_986 == (**g_112)) <= ((*g_114) & (safe_unary_minus_func_int8_t_s(0L))))) == ((void*)0 == (**g_112)));
        return g_343;
    }
    for (l_707 = (-18); (l_707 >= 49); l_707 = safe_add_func_int8_t_s_s(l_707, 4))
    {
        if (((l_990 < p_28) <= l_991))
        {
            uint8_t l_992 = 255UL;
            return l_992;
        }
        else
        {
            if ((***g_112))
                break;
            return p_27;
        }
    }
    return p_27;
}
static uint16_t func_48(uint32_t p_49, uint16_t p_50, uint32_t p_51)
{
    int32_t *l_219 = &g_88;
    int32_t *l_220 = &g_147;
    int32_t *l_221 = &g_88;
    int32_t *l_222 = &g_147;
    int32_t *l_223 = &g_88;
    int32_t *l_224 = (void*)0;
    int32_t *l_225 = &g_88;
    int32_t *l_226 = &g_88;
    int32_t *l_227 = &g_147;
    int32_t *l_228 = &g_88;
    int32_t *l_229 = &g_147;
    int32_t *l_230 = &g_88;
    int32_t *l_231 = &g_88;
    int32_t l_232 = 0x7BBE786AL;
    int32_t *l_233 = &l_232;
    int32_t *l_234 = &l_232;
    int32_t l_235 = (-10L);
    int32_t *l_236 = &g_88;
    int32_t *l_237 = (void*)0;
    int32_t *l_238 = &g_88;
    int32_t *l_239 = (void*)0;
    int32_t l_240 = 1L;
    int32_t *l_241 = &l_232;
    int32_t *l_242 = (void*)0;
    int32_t *l_243 = &l_232;
    int32_t *l_244 = &g_147;
    int32_t *l_245 = &l_232;
    int32_t l_246 = 0x95AD63A6L;
    int32_t *l_247 = (void*)0;
    int32_t *l_248 = &g_88;
    int32_t *l_249 = &g_88;
    int32_t *l_250 = &g_147;
    int32_t *l_251 = &g_88;
    int32_t l_252 = (-1L);
    int32_t *l_253 = &l_235;
    int32_t *l_254 = &l_232;
    int32_t *l_255 = &g_147;
    int32_t *l_256 = &l_246;
    int32_t *l_257 = &l_240;
    int32_t *l_258 = (void*)0;
    int32_t *l_259 = &l_235;
    int32_t *l_260 = &l_240;
    int32_t *l_261 = &l_232;
    int32_t *l_262 = &g_88;
    int32_t *l_263 = &g_88;
    int32_t l_264 = 7L;
    int32_t *l_265 = &l_264;
    int32_t *l_266 = &l_240;
    int32_t *l_267 = &l_252;
    uint32_t l_268 = 4UL;
    l_268--;
    return p_51;
}
static uint32_t func_52(int32_t p_53, uint16_t p_54, int16_t p_55, int8_t p_56, int8_t p_57)
{
    int32_t l_203 = 0xB7439DAFL;
    int32_t *l_209 = &g_88;
    for (g_88 = 0; (g_88 < (-2)); g_88 = safe_sub_func_uint8_t_u_u(g_88, 8))
    {
        int16_t l_197 = 0xFA41L;
        int32_t l_198 = 1L;
        l_198 &= (safe_mod_func_int16_t_s_s(p_55, (safe_unary_minus_func_uint8_t_u((safe_sub_func_int32_t_s_s((g_79 <= (safe_sub_func_int32_t_s_s(7L, g_147))), (l_197 && p_53)))))));
    }
    if ((g_147 ^ (p_56 || (g_147 ^ (((safe_add_func_uint16_t_u_u((safe_add_func_int32_t_s_s(l_203, (p_55 ^ (safe_rshift_func_int8_t_s_u(g_88, (((((p_53 == 0xDDB30E8AL) <= ((safe_rshift_func_uint16_t_u_u((~((**g_112) == l_209)), (*l_209))) == 5L)) < 255UL) || p_57) > g_88)))))), g_147)) && 0x8C53L) > g_29)))))
    {
        const uint32_t l_216 = 0x6CD91451L;
        int32_t *l_217 = &g_147;
        (*l_217) ^= (((p_54 & (safe_mod_func_uint8_t_u_u((p_55 ^ (safe_mod_func_uint8_t_u_u(((-5L) & 1UL), (safe_add_func_int16_t_s_s((-6L), p_57))))), g_185))) > (l_216 > (*l_209))) != 3UL);
        (**g_112) = (**g_112);
    }
    else
    {
        int32_t *l_218 = &g_88;
        (**g_112) = l_218;
    }
    return (*l_209);
}
inline static uint8_t func_58(int16_t p_59, uint32_t p_60, const int32_t p_61)
{
    int16_t l_65 = 1L;
    uint32_t l_72 = 7UL;
    uint8_t l_78 = 0x62L;
    int32_t *l_148 = &g_88;
    int32_t *l_149 = &g_147;
    int32_t *l_150 = &g_88;
    int32_t l_151 = 0x4D50EE72L;
    int32_t *l_152 = &g_147;
    int32_t l_153 = 0x4E21E3D0L;
    int32_t *l_154 = (void*)0;
    int32_t *l_155 = &l_153;
    int32_t *l_156 = &l_153;
    int32_t *l_157 = &l_151;
    int32_t *l_158 = &g_147;
    int32_t *l_159 = (void*)0;
    int32_t *l_160 = (void*)0;
    int32_t *l_161 = &l_153;
    int32_t *l_162 = &g_88;
    int32_t *l_163 = &g_147;
    int32_t *l_164 = &l_151;
    int32_t *l_165 = (void*)0;
    int32_t *l_166 = &l_151;
    int32_t *l_167 = &l_151;
    int32_t l_168 = 0x2B768FFDL;
    int32_t *l_169 = &l_168;
    int32_t l_170 = 0x0D8C1B61L;
    int32_t *l_171 = &l_168;
    int32_t *l_172 = &g_147;
    int32_t *l_173 = &l_170;
    int32_t *l_174 = &l_153;
    int32_t *l_175 = &g_88;
    int32_t *l_176 = &l_170;
    int32_t *l_177 = &g_147;
    int32_t *l_178 = &l_151;
    int32_t *l_179 = &l_151;
    int32_t *l_180 = (void*)0;
    int32_t *l_181 = &l_153;
    int32_t l_182 = 1L;
    int32_t *l_183 = &g_88;
    int32_t l_184 = 0xF98C0194L;
    (*l_148) = (((!g_32) == g_32) < (!(!((((l_65 == func_66(((+l_72) <= g_32), (((2L > func_73(p_60, l_65, (((l_78 <= g_29) != 0x29EFCF39L) != g_79), p_61)) == 0UL) <= g_29), g_32, g_29)) & p_59) < 0xB25DL) & g_29))));
    g_185++;
    return p_59;
}
static uint8_t func_66(int8_t p_67, uint32_t p_68, const uint8_t p_69, int8_t p_70)
{
    uint32_t l_101 = 0x9738BBD8L;
    int32_t ** const *l_109 = (void*)0;
    uint32_t l_115 = 0x0115B503L;
    int32_t **l_131 = &g_114;
    uint16_t l_133 = 65532UL;
    for (p_70 = 0; (p_70 != 14); ++p_70)
    {
        int16_t l_97 = (-2L);
        int32_t *l_99 = &g_88;
        int32_t **l_98 = &l_99;
        int32_t ***l_100 = &l_98;
        if (l_97)
            break;
        (*l_100) = l_98;
    }
    if (l_101)
    {
        const uint16_t l_104 = 0xEE0BL;
        (***g_112) = (((safe_lshift_func_uint16_t_u_s(l_101, l_104)) || (safe_rshift_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_u((((void*)0 == l_109) > ((safe_lshift_func_uint16_t_u_u(g_88, (l_104 == 0xAF746A6EL))) <= ((g_112 != &g_113) != (**g_113)))), 4)) <= l_115), g_88))) || g_88);
    }
    else
    {
        int32_t *l_116 = &g_88;
        int32_t ***l_144 = &g_113;
        uint8_t l_145 = 0x86L;
        int32_t *l_146 = &g_147;
        if ((g_88 | ((g_32 || 255UL) >= ((void*)0 == l_116))))
        {
            (*g_113) = (*g_113);
        }
        else
        {
            uint8_t l_132 = 0x25L;
            (***g_112) = ((safe_lshift_func_uint16_t_u_s(((p_70 != ((safe_sub_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_s((safe_sub_func_int32_t_s_s((0x437717E4L != (*l_116)), (safe_sub_func_int8_t_s_s((6UL && (g_29 | ((safe_sub_func_uint16_t_u_u(((((void*)0 != l_131) && p_69) == l_132), g_88)) & (-6L)))), p_70)))), l_132)) == (*l_116)), 65535UL)), 0UL)) && 7UL)) && g_29), g_79)) < l_133);
        }
        (*l_146) ^= ((safe_mod_func_uint32_t_u_u(((safe_add_func_int32_t_s_s(0x402E7910L, ((safe_mod_func_uint16_t_u_u((0x2484L > (safe_add_func_int8_t_s_s(((((safe_rshift_func_int16_t_s_u(((((p_69 && (0xEE9AL < ((**g_112) == l_116))) ^ 0x85C1L) ^ ((void*)0 == l_144)) <= l_145), p_67)) || p_67) > g_88) ^ 0xD2L), p_67))), 0xCF72L)) <= p_70))) == 0x6B7D2F2FL), (-2L))) > g_29);
    }
    (**g_113) &= (-1L);
    return g_29;
}
static int8_t func_73(uint8_t p_74, int32_t p_75, uint8_t p_76, int8_t p_77)
{
    uint8_t l_84 = 252UL;
    int32_t *l_87 = &g_88;
    (*l_87) = (g_32 < ((safe_sub_func_int16_t_s_s(g_29, ((0x3BB579ABL <= 4294967295UL) >= (p_74 & (safe_lshift_func_uint8_t_u_s(0xE0L, l_84)))))) && ((safe_add_func_int16_t_s_s(0xAF79L, ((l_84 ^ p_75) ^ p_75))) <= 0xB4L)));
    for (p_76 = (-25); (p_76 < 4); p_76 = safe_add_func_int8_t_s_s(p_76, 8))
    {
        for (g_79 = 7; (g_79 < 21); g_79 = safe_add_func_uint32_t_u_u(g_79, 8))
        {
            for (p_75 = 0; (p_75 <= (-19)); --p_75)
            {
                (*l_87) |= g_29;
            }
        }
    }
    return p_74;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_29;
    csmith_sink_ = g_32;
    csmith_sink_ = g_79;
    csmith_sink_ = g_88;
    csmith_sink_ = g_147;
    csmith_sink_ = g_185;
    csmith_sink_ = g_339;
    csmith_sink_ = g_343;
    csmith_sink_ = g_363;
    csmith_sink_ = g_394;
    csmith_sink_ = g_436;
    csmith_sink_ = g_469;
    csmith_sink_ = g_494;
    csmith_sink_ = g_525;
    csmith_sink_ = g_537;
    csmith_sink_ = g_585;
    csmith_sink_ = g_671;
    csmith_sink_ = g_676;
    csmith_sink_ = g_680;
    csmith_sink_ = g_767;
    csmith_sink_ = g_855;
    csmith_sink_ = g_873;
    csmith_sink_ = g_875;
    csmith_sink_ = g_877;
    csmith_sink_ = g_888;
    csmith_sink_ = g_920;
    csmith_sink_ = g_1101;
    csmith_sink_ = g_1109;
    csmith_sink_ = g_1129;
    csmith_sink_ = g_1222;
    csmith_sink_ = g_1229;
    csmith_sink_ = g_1231;
    csmith_sink_ = g_1245;
    csmith_sink_ = g_1290;
    csmith_sink_ = g_1291;
    csmith_sink_ = g_1316;
    csmith_sink_ = g_1338;
    csmith_sink_ = g_1365;
    csmith_sink_ = g_1377;
    platform_main_end(0,0);
    return 0;
}
