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
static int32_t g_2 = 0x2EB90DA1L;
static int32_t g_4 = (-1L);
static uint32_t g_29 = 1UL;
static int32_t *g_31 = (void*)0;
static int32_t **g_30 = &g_31;
static uint64_t g_59 = 0x3A7221EBC5F93BE4LL;
static uint16_t g_64 = 0x1E18L;
static int16_t g_84 = 0x8647L;
static uint8_t g_87 = 0x57L;
static int16_t g_95 = 5L;
static int64_t g_107 = 0xCCC76BF08EAF5359LL;
static uint64_t g_111 = 0xC50754B492BB7607LL;
static int16_t g_112 = 0L;
static uint8_t g_147 = 0x73L;
static uint32_t g_174 = 3UL;
static uint32_t g_177 = 0x434A3FD7L;
static int32_t *g_181 = &g_4;
static int32_t g_186 = 0xC9EDED60L;
static uint64_t *g_235 = &g_59;
static uint64_t **g_234 = &g_235;
static uint16_t g_241 = 0x74F6L;
static uint32_t *****g_242 = (void*)0;
static uint16_t *g_345 = &g_241;
static int8_t g_471 = 0x74L;
static uint64_t g_472 = 18446744073709551614UL;
static uint32_t *g_487 = &g_177;
static uint32_t **g_486 = &g_487;
static uint8_t g_524 = 252UL;
static int64_t g_658 = 0xB60AD403DDED29C4LL;
static uint32_t g_713 = 0xD545F572L;
static int32_t g_760 = 0L;
static int32_t ****g_766 = (void*)0;
static int16_t *g_771 = (void*)0;
static int16_t **g_770 = &g_771;
static int16_t ***g_769 = &g_770;
static int16_t ****g_768 = &g_769;
static int8_t g_882 = (-7L);
static int32_t *g_999 = &g_2;
static int32_t *g_1009 = &g_760;
static int32_t **g_1008 = &g_1009;
static int32_t ***g_1007 = &g_1008;
static uint32_t g_1017 = 0x091BE74AL;
static uint16_t **g_1106 = &g_345;
static uint64_t *g_1117 = &g_472;
static int32_t g_1257 = (-1L);
static uint32_t ***g_1278 = &g_486;
static uint32_t ****g_1277 = &g_1278;
static int32_t *g_1368 = (void*)0;
static uint32_t *g_1374 = (void*)0;
static uint32_t **g_1373 = &g_1374;
static uint16_t g_1426 = 0x0E92L;
static uint32_t func_1(void);
inline static int32_t func_5(uint16_t p_6, uint32_t p_7);
inline static int8_t func_10(uint16_t p_11, int32_t * p_12);
static int32_t * func_13(int32_t * p_14, int32_t * p_15);
inline static int32_t ** func_16(int32_t p_17, int32_t * p_18, int32_t * p_19);
inline static int8_t func_24(uint32_t p_25, int8_t p_26, int32_t ** p_27);
static int32_t * func_32(int64_t p_33, int16_t p_34);
static uint32_t func_37(uint32_t p_38, uint32_t * p_39, int8_t p_40, int64_t p_41);
static int16_t func_44(int32_t * p_45, uint32_t * p_46);
static int32_t func_47(uint32_t * p_48, uint64_t p_49, uint32_t * p_50, int32_t p_51);
static uint32_t func_1(void)
{
    int32_t *l_3 = &g_4;
    int64_t l_1005 = (-1L);
    uint32_t **l_1012 = &g_487;
    uint32_t ***l_1013 = &l_1012;
    int32_t ***l_1015 = &g_1008;
    int32_t ****l_1014 = &l_1015;
    uint32_t *l_1016 = &g_1017;
    uint8_t l_1018 = 1UL;
    (*l_3) = g_2;
    (*l_3) = func_5((safe_mod_func_int8_t_s_s(func_10((*l_3), func_13(l_3, l_3)), ((l_1005 | (~l_1005)) , ((((((*l_1016) = ((g_1007 = g_1007) == ((*l_1014) = ((safe_mul_func_int8_t_s_s((((*l_1013) = l_1012) == (void*)0), 0x90L)) , (void*)0)))) >= l_1005) != l_1005) ^ g_2) , 9UL)))), l_1018);
    return (*l_3);
}
inline static int32_t func_5(uint16_t p_6, uint32_t p_7)
{
    int8_t *l_1020 = &g_882;
    int8_t **l_1019 = &l_1020;
    int8_t ***l_1021 = &l_1019;
    int32_t *l_1022 = &g_760;
    uint64_t *l_1027 = &g_111;
    int32_t l_1030 = 0xBBCEC7ABL;
    int32_t l_1074 = 0xEBDCE654L;
    uint32_t ***l_1092 = &g_486;
    uint32_t ****l_1091 = &l_1092;
    uint16_t **l_1107 = &g_345;
    int16_t l_1148 = (-1L);
    int8_t l_1170 = (-1L);
    uint8_t l_1184 = 0xD8L;
    int32_t l_1198 = (-9L);
    int32_t ***l_1253 = &g_30;
    int16_t *****l_1266 = &g_768;
    int32_t *****l_1319 = (void*)0;
    int32_t *****l_1320 = &g_766;
    int32_t l_1412 = 0x3B49BF7AL;
    uint8_t *l_1502 = &g_147;
    uint8_t **l_1501 = &l_1502;
    uint8_t ***l_1500 = &l_1501;
    uint16_t l_1507 = 0x90A8L;
    (*g_31) = (((*l_1021) = l_1019) != (void*)0);
    (*g_30) = &l_1030;
    for (g_84 = (-27); (g_84 <= (-24)); g_84 = safe_add_func_uint8_t_u_u(g_84, 6))
    {
        int64_t l_1037 = 0xD21D7E6916736659LL;
        uint32_t *l_1046 = &g_713;
        uint16_t *l_1047 = &g_64;
        int32_t l_1066 = 1L;
        int32_t l_1095 = 2L;
        int64_t l_1097 = 0L;
        uint64_t **l_1100 = &g_235;
        int16_t ****l_1101 = (void*)0;
        uint32_t l_1185 = 0x9197E703L;
        int32_t **l_1201 = &g_181;
        uint8_t *l_1215 = &g_147;
        int16_t l_1216 = 0xA6B8L;
        int32_t ****l_1369 = &l_1253;
        uint64_t l_1393 = 8UL;
        int8_t l_1459 = 0xD6L;
    }
    l_1320 = &g_766;
    return p_6;
}
inline static int8_t func_10(uint16_t p_11, int32_t * p_12)
{
    uint8_t l_632 = 0x8CL;
    uint8_t l_663 = 247UL;
    int32_t **l_688 = &g_31;
    int8_t *l_706 = &g_471;
    uint64_t *l_721 = (void*)0;
    int32_t **l_778 = &g_181;
    int32_t **l_779 = &g_181;
    int32_t **l_780 = &g_181;
    int32_t **l_781 = &g_181;
    int32_t **l_782 = &g_181;
    int32_t **l_783 = (void*)0;
    int32_t *l_784 = &g_4;
    int64_t *l_791 = (void*)0;
    int64_t *l_792 = &g_658;
    uint8_t *l_793 = &g_524;
    uint64_t *l_794 = (void*)0;
    uint64_t *l_795 = &g_472;
    uint32_t ****l_800 = (void*)0;
    uint32_t *****l_799 = &l_800;
    uint16_t **l_801 = &g_345;
    uint16_t *l_803 = &g_64;
    uint16_t **l_802 = &l_803;
    int16_t **l_837 = &g_771;
    int32_t *****l_848 = &g_766;
    int32_t l_862 = 0x4EF2F984L;
    for (p_11 = 0; (p_11 >= 53); p_11 = safe_add_func_uint8_t_u_u(p_11, 5))
    {
        int8_t l_633 = 0x64L;
        uint32_t l_654 = 1UL;
        int32_t l_672 = (-1L);
        int16_t *****l_772 = (void*)0;
        int16_t *****l_773 = &g_768;
    }
    (*p_12) = ((*g_31) = (((**l_688) >= (safe_rshift_func_uint8_t_u_u(0x5CL, (safe_add_func_uint32_t_u_u((p_11 & (((((*l_688) != (l_784 = (p_11 , p_12))) , ((*l_795) = (safe_lshift_func_int16_t_s_s(((g_147 || ((*l_793) = (((*l_792) = (safe_mod_func_int32_t_s_s(0x593B1CDBL, (safe_add_func_uint8_t_u_u(0x03L, g_84))))) | 0x9D565244B30B1212LL))) != p_11), p_11)))) > g_2) | p_11)), g_713))))) != p_11));
    if (((p_11 , (((!((*l_706) = (safe_add_func_uint32_t_u_u(7UL, ((void*)0 == l_799))))) || (((*g_345) != (((l_801 == (l_802 = l_801)) || (((*l_792) = (p_11 & 0x859A6D3F55F13AFFLL)) > g_147)) != 1L)) , p_11)) ^ p_11)) ^ g_84))
    {
        uint32_t l_808 = 0UL;
        int16_t **l_836 = (void*)0;
        int32_t *l_844 = &g_4;
        int16_t ***l_847 = &l_837;
        for (g_524 = (-26); (g_524 != (-1)); g_524 = safe_add_func_int8_t_s_s(g_524, 5))
        {
            int16_t l_811 = 0x861AL;
            uint32_t *l_816 = &g_713;
            uint32_t *l_832 = (void*)0;
            uint32_t *l_833 = &g_174;
            if ((*p_12))
                break;
            if ((safe_mod_func_int8_t_s_s(((l_808 & (safe_sub_func_uint16_t_u_u(l_811, (safe_mul_func_int8_t_s_s((safe_div_func_int64_t_s_s((((*l_816) = g_4) != (safe_add_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(((((safe_add_func_uint8_t_u_u(((!((safe_add_func_int32_t_s_s(0x2680E869L, l_811)) ^ (*g_31))) ^ ((l_811 > 1UL) , (((*l_833) = (safe_mod_func_int32_t_s_s(l_811, (*p_12)))) , p_11))), g_107)) & g_107) != p_11) ^ (*p_12)), p_11)), p_11)), (*g_345))), l_811))), p_11)), g_59))))) < p_11), p_11)))
            {
                return g_658;
            }
            else
            {
                for (l_811 = 0; (l_811 < 11); l_811++)
                {
                    return g_174;
                }
                if ((*g_31))
                    break;
            }
        }
        (*l_784) = (l_836 == l_837);
        for (g_241 = (-8); (g_241 >= 6); ++g_241)
        {
            (*l_780) = p_12;
            for (g_177 = (-19); (g_177 <= 19); g_177++)
            {
                for (g_147 = 0; (g_147 != 41); g_147++)
                {
                    if ((*p_12))
                        break;
                    if ((*p_12))
                    {
                        (*g_30) = (*l_779);
                        (*l_781) = l_844;
                        return g_174;
                    }
                    else
                    {
                        (*g_30) = p_12;
                        (*p_12) = 1L;
                    }
                }
                (*g_30) = l_844;
            }
        }
        (*l_782) = p_12;
    }
    else
    {
        int32_t l_863 = 5L;
        int32_t l_879 = 0x81598E2BL;
        uint16_t **l_910 = &g_345;
        uint32_t l_911 = 1UL;
        uint16_t l_912 = 2UL;
        uint64_t l_944 = 0x451E212AE376434ELL;
        int8_t l_961 = 0xE7L;
        int32_t *l_965 = &l_879;
        int32_t ***l_990 = &l_688;
        int32_t ****l_989 = &l_990;
        for (g_472 = 0; (g_472 < 49); g_472 = safe_add_func_int64_t_s_s(g_472, 6))
        {
            int32_t *****l_853 = &g_766;
            int16_t *l_856 = &g_95;
            uint32_t *l_859 = &g_174;
            int32_t l_864 = (-1L);
            uint16_t l_880 = 1UL;
            int8_t *l_881 = &g_882;
            l_864 = (p_11 < (((((0x8A71A114L < ((**l_688) = (safe_mod_func_uint16_t_u_u((*g_345), ((l_853 != l_853) ^ (((*l_856) = (safe_rshift_func_int8_t_s_s(g_84, 5))) < ((((safe_mul_func_uint8_t_u_u(((p_11 <= (((*l_859) = 1UL) && (safe_rshift_func_uint8_t_u_s(((*p_12) || 4294967290UL), 4)))) > 1UL), 0x0BL)) , (-4L)) || l_862) > (*g_345)))))))) | l_863) && g_64) >= 8L) , p_11));
            (*g_31) = ((0L ^ ((*l_881) = ((**l_688) | (safe_lshift_func_int16_t_s_u(((*l_856) = (((((((safe_add_func_uint8_t_u_u((l_863 ^ (safe_rshift_func_uint8_t_u_s(((**l_688) , g_95), 1))), (g_107 , (safe_mod_func_int64_t_s_s(((((safe_mod_func_int32_t_s_s((g_658 || ((*l_706) = (safe_lshift_func_int8_t_s_s(((safe_mul_func_uint16_t_u_u((&g_713 == (((l_879 = ((*l_784) = ((l_863 == g_95) == (-1L)))) < p_11) , l_859)), 0xE3A8L)) != p_11), g_95)))), p_11)) , p_11) > 0L) || (*g_345)), g_472))))) && p_11) == g_29) >= l_880) < (*g_31)) | 0xADE8B0EA1CB38105LL) <= l_863)), 2))))) != 0x33EF8DA8L);
            (*g_31) = (safe_div_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_s(l_863, 1)) == (safe_div_func_int8_t_s_s(((0x7DE3694AA5DA6BE3LL || ((safe_add_func_int64_t_s_s(0xFDA5A62C9E16B8F2LL, (safe_lshift_func_uint16_t_u_s((safe_mod_func_int32_t_s_s(l_879, (safe_lshift_func_int8_t_s_s(((safe_mod_func_uint64_t_u_u(p_11, (safe_mul_func_int16_t_s_s(((safe_mul_func_int8_t_s_s(0L, ((*l_793) = (safe_add_func_uint64_t_u_u(l_863, (~(safe_add_func_uint32_t_u_u((((*l_881) = g_107) , (safe_lshift_func_uint16_t_u_s((l_910 == &g_345), l_879))), 7L)))))))) , l_911), l_912)))) , p_11), 4)))), (**l_688))))) | (*p_12))) < p_11), 0x78L))), 0x37A8L));
            if (l_879)
                break;
        }
        for (g_29 = 0; (g_29 == 52); g_29 = safe_add_func_int16_t_s_s(g_29, 8))
        {
            uint32_t *l_927 = &g_713;
            int32_t l_941 = 0L;
            uint8_t *l_942 = (void*)0;
            uint8_t *l_943 = &g_87;
            uint16_t *l_949 = (void*)0;
            uint16_t *l_950 = &l_912;
            int16_t l_951 = (-6L);
            int32_t *l_964 = (void*)0;
            int16_t *l_968 = &g_112;
            int32_t ***l_988 = &l_688;
            int32_t ****l_987 = &l_988;
            l_941 = (((0xADL > (((&g_107 == (void*)0) , (safe_sub_func_uint8_t_u_u(((*l_943) = ((*l_793) = ((safe_mod_func_int64_t_s_s(((safe_mul_func_uint8_t_u_u(0x29L, (safe_sub_func_uint64_t_u_u(18446744073709551612UL, ((*l_792) = (safe_mod_func_int64_t_s_s((~((~(l_863 = ((*l_927) = g_59))) <= (((safe_rshift_func_int8_t_s_u((safe_mod_func_uint8_t_u_u(((~0x0DL) ^ (safe_div_func_int32_t_s_s((safe_div_func_uint8_t_u_u((((((p_11 , (safe_mul_func_int16_t_s_s((safe_mod_func_int8_t_s_s(l_941, 1UL)), (*g_345)))) > 0x049B4DC2C97F29B7LL) & p_11) > l_879) == (-3L)), 0x9BL)), g_4))), p_11)), p_11)) | l_911) >= p_11))), l_911))))))) != 1L), l_941)) ^ p_11))), g_84))) && l_944)) , 0x4A94C51FL) || 1UL);
            (*l_780) = p_12;
            l_965 = (l_964 = ((*l_782) = p_12));
            p_12 = ((((*l_968) = (safe_sub_func_int32_t_s_s((*g_181), p_11))) | (safe_div_func_int16_t_s_s((((((!(((*l_795) = (safe_mul_func_int16_t_s_s(((*g_31) && (safe_mul_func_int8_t_s_s(((*l_706) = g_658), ((safe_mul_func_int8_t_s_s(2L, (safe_unary_minus_func_uint64_t_u((safe_div_func_int8_t_s_s(((safe_rshift_func_int8_t_s_u(((0UL & (safe_rshift_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((((g_766 != (l_989 = l_987)) == (safe_mod_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((p_11 ^ p_11), p_11)), g_87))) & (**l_780)), 0L)), 6))) == (***l_990)), g_2)) <= (***l_988)), p_11)))))) & g_59)))), p_11))) , g_95)) || (**l_688)) ^ (***l_988)) == p_11) | (*l_964)), 1L))) , p_12);
        }
        if ((((safe_div_func_int64_t_s_s((safe_mul_func_uint8_t_u_u(((g_999 = l_965) != l_965), ((*g_345) , 4L))), ((&g_181 == (*l_990)) , ((*l_792) = (safe_lshift_func_int8_t_s_u(((safe_rshift_func_uint16_t_u_u(((((*g_345) || 0xA668L) > (**l_688)) && (-7L)), p_11)) <= (*l_965)), p_11)))))) && (***l_990)) , 0x4F0161ABL))
        {
            int32_t l_1004 = (-6L);
            (*p_12) = l_1004;
        }
        else
        {
            (*l_781) = (**l_990);
            (*l_965) = (*g_31);
        }
        (*l_784) = (*p_12);
    }
    return g_147;
}
static int32_t * func_13(int32_t * p_14, int32_t * p_15)
{
    int32_t l_20 = 1L;
    uint32_t *l_28 = &g_29;
    int32_t ***l_627 = &g_30;
    (*l_627) = func_16((l_20 | g_2), (((+((safe_div_func_int8_t_s_s(func_24(((*l_28) = (0x1CL | l_20)), l_20, g_30), l_20)) & g_524)) < g_524) , l_28), l_28);
    (*g_31) = (safe_rshift_func_uint16_t_u_u(65527UL, 3));
    return p_14;
}
inline static int32_t ** func_16(int32_t p_17, int32_t * p_18, int32_t * p_19)
{
    return &g_181;
}
inline static int8_t func_24(uint32_t p_25, int8_t p_26, int32_t ** p_27)
{
    uint64_t *l_58 = &g_59;
    int32_t l_62 = 0L;
    uint16_t *l_63 = &g_64;
    uint32_t *l_65 = &g_29;
    uint32_t *l_176 = &g_177;
    (*p_27) = func_32((safe_lshift_func_uint8_t_u_s((func_37((g_4 & (safe_sub_func_int16_t_s_s(func_44(((func_47(&g_29, (safe_mul_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_u(((safe_add_func_int64_t_s_s((1L < (((*l_58) = g_29) ^ 0L)), (safe_rshift_func_uint16_t_u_s(l_62, 7)))) ^ p_25), ((*l_63) = 6UL))) || 0x0997L), 0xAEL)), l_65, p_26) ^ (-6L)) , &l_62), l_176), g_2))), l_176, g_4, p_26) & 0x1DF76A9FL), 7)), p_25);
    return p_26;
}
static int32_t * func_32(int64_t p_33, int16_t p_34)
{
    int32_t *l_353 = (void*)0;
    int32_t *l_354 = &g_186;
    uint16_t *l_362 = &g_241;
    uint64_t l_390 = 0x9B3750E86C6B0ADALL;
    uint32_t ***l_422 = (void*)0;
    uint32_t ****l_421 = &l_422;
    uint32_t *****l_420 = &l_421;
    uint32_t l_540 = 0UL;
    uint8_t *l_546 = (void*)0;
    int64_t l_551 = 0xA70FA912836B3A9FLL;
    int16_t *l_556 = (void*)0;
    int16_t **l_555 = &l_556;
    uint8_t l_576 = 0x02L;
    uint64_t l_583 = 0xD7295ACF06F11A5ELL;
    int8_t *l_589 = (void*)0;
    int8_t **l_588 = &l_589;
    int16_t l_626 = 0xA586L;
    (*l_354) = (*g_181);
    for (g_107 = 0; (g_107 != 26); g_107++)
    {
        int32_t **l_357 = (void*)0;
        int32_t **l_358 = (void*)0;
        int32_t **l_359 = &g_181;
        (*l_359) = l_354;
    }
    if (p_33)
    {
        int8_t *l_363 = (void*)0;
        int32_t l_364 = 0x053202F8L;
        uint8_t *l_370 = &g_147;
        uint16_t **l_374 = &l_362;
        uint32_t *l_375 = (void*)0;
        uint32_t *l_376 = &g_174;
        uint32_t *l_387 = &g_177;
        uint32_t **l_386 = &l_387;
        int16_t *l_391 = &g_95;
        uint32_t l_427 = 0xEAA5562FL;
        int32_t l_518 = 1L;
        uint32_t l_533 = 1UL;
        l_353 = l_354;
        if ((safe_sub_func_int32_t_s_s((((*l_376) = (((l_364 = (l_362 == &g_241)) , ((safe_rshift_func_uint16_t_u_s((+((*l_370) = (safe_sub_func_uint8_t_u_u(g_112, (((p_34 = g_107) , (void*)0) != (g_345 = &g_64)))))), 6)) & (safe_rshift_func_int16_t_s_u(((+(((l_374 == l_374) , (0UL || p_33)) , p_33)) ^ (*l_354)), (*l_354))))) , g_2)) > p_33), (*l_353))))
        {
            int16_t **l_392 = &l_391;
            int32_t l_400 = 0xC31E6BA4L;
            int64_t l_432 = (-1L);
            uint64_t *l_453 = &l_390;
            uint16_t l_495 = 65535UL;
            uint32_t **l_515 = &g_487;
            int32_t **l_538 = &l_353;
            for (g_241 = 20; (g_241 <= 10); --g_241)
            {
                int32_t *l_379 = &l_364;
                l_379 = &l_364;
            }
            (*l_354) = ((safe_mul_func_int8_t_s_s(((safe_mod_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(((void*)0 == l_386), (*l_354))), (((g_95 < ((safe_sub_func_int8_t_s_s(l_390, (((*l_392) = l_391) != (void*)0))) >= (((((safe_sub_func_int64_t_s_s((safe_add_func_int64_t_s_s((~(safe_rshift_func_uint8_t_u_u(g_174, ((*l_370) = ((-1L) ^ g_186))))), l_400)), 0xAC577DD6AF282634LL)) & g_29) | g_112) == (*l_354)) , p_33))) , g_177) , p_33))) | g_111), g_107)) || 0xC72EL);
            if ((safe_lshift_func_int8_t_s_s((p_34 || (safe_sub_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(((safe_sub_func_uint16_t_u_u(((safe_add_func_int64_t_s_s((l_364 , (safe_lshift_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u((&g_235 != (void*)0), ((((safe_rshift_func_uint8_t_u_u(l_364, 2)) , ((safe_lshift_func_uint16_t_u_u((((l_400 >= ((**l_392) = ((~((((void*)0 == l_420) == (safe_rshift_func_uint16_t_u_u(((((safe_mod_func_uint32_t_u_u(l_427, (*l_354))) == p_33) || (*l_354)) & p_33), (*g_345)))) , l_364)) > 1UL))) >= l_400) , (*g_345)), 4)) ^ 0UL)) <= g_107) < g_186))) & p_34), 4))), p_33)) >= p_34), p_34)) & (-1L)), p_34)), l_400))), 7)))
            {
                int16_t l_435 = 0x155BL;
                (*l_353) = (((safe_rshift_func_uint8_t_u_s(((((safe_div_func_uint16_t_u_u(0xCBC9L, l_432)) <= ((safe_add_func_uint64_t_u_u(l_435, ((void*)0 == &l_432))) <= p_33)) > ((((safe_div_func_uint64_t_u_u(((~((safe_mul_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((safe_add_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s((safe_div_func_uint8_t_u_u(((void*)0 != &l_400), (p_34 && g_87))), 1)), p_34)), p_33)), 7)), p_33)) && p_34)) < p_33), 0xA4A15ADF492D8EACLL)) , 0xC1L) , 0x0AL) != l_432)) && (-1L)), 2)) & p_34) , (*g_181));
            }
            else
            {
                uint64_t **l_454 = (void*)0;
                uint64_t **l_455 = &l_453;
                int16_t *l_460 = &g_84;
                int8_t *l_470 = &g_471;
                int32_t l_473 = 0x02855B81L;
                int32_t **l_537 = &l_353;
                if ((0xB784680FL < (safe_div_func_uint8_t_u_u((((((*g_234) = &l_390) == ((*l_455) = l_453)) >= (safe_div_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((*g_181), 0x2CBFD598L)), ((*l_370) = p_34)))) ^ (g_174 & (((*l_392) = l_460) != ((safe_mod_func_int8_t_s_s((l_364 = ((safe_lshift_func_uint16_t_u_u(((((g_472 = (safe_div_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u((~((*l_470) = l_427)), 4)), l_364))) , l_432) == 0x793924C3FCAEC787LL) > l_473), (*g_345))) | p_33)), 0xC0L)) , &g_84)))), p_33))))
                {
                    int32_t **l_474 = &g_181;
                    (*l_474) = &l_364;
                    for (g_147 = 27; (g_147 < 53); g_147++)
                    {
                        int64_t l_494 = (-7L);
                        (*l_354) = (safe_div_func_uint8_t_u_u((g_95 ^ ((0xF420L > ((*l_391) = 0x5AEFL)) && (+((safe_mul_func_uint8_t_u_u(0x6EL, (((((((**l_474) = (safe_mod_func_int16_t_s_s(((safe_add_func_int8_t_s_s((g_486 == (void*)0), (0x0404CD1AL == (-6L)))) ^ (safe_mod_func_int8_t_s_s(((((safe_sub_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(((l_473 , 0xA6DE44C6F29780F7LL) < l_494), 9)), 1UL)) <= p_34) , 0xA4B7BF04F6DF0710LL) >= l_473), l_364))), g_29))) & l_495) <= l_473) | 2UL) , p_33) < l_494))) > l_494)))), p_34));
                    }
                }
                else
                {
                    uint64_t l_517 = 18446744073709551615UL;
                    for (l_473 = 0; (l_473 == 20); l_473 = safe_add_func_uint32_t_u_u(l_473, 6))
                    {
                        uint32_t l_516 = 0x6A1822A1L;
                        int32_t **l_519 = &g_181;
                        (*l_519) = (((safe_mod_func_uint64_t_u_u(((safe_sub_func_uint32_t_u_u(((((l_364 = ((g_242 != (((0x2A22D07DAD963D65LL >= (((((*l_362) = l_473) & (safe_lshift_func_uint8_t_u_s((((((l_473 , (safe_lshift_func_int8_t_s_u(g_472, ((*l_370) = (safe_sub_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((((((safe_div_func_int16_t_s_s(l_473, (((*l_354) = (safe_mod_func_uint16_t_u_u(9UL, (safe_unary_minus_func_uint16_t_u(p_33))))) , l_364))) > 0x562B50104BB7613CLL) == 0xFBL) < p_33) < l_473), g_177)), p_33)))))) == p_34) , (void*)0) == l_515) < p_34), 2))) > l_516) == l_516)) , 0xA839D5F4L) , g_242)) >= g_174)) < l_517) >= p_33) <= 0xD299L), l_518)) | 1UL), l_495)) , (*l_353)) , &l_473);
                        if (p_33)
                            break;
                        (*l_519) = ((safe_div_func_uint64_t_u_u(((4L >= 0xD0BC41B9L) & ((g_471 || (safe_div_func_uint16_t_u_u((g_524 != (((safe_add_func_uint32_t_u_u(l_473, (l_400 = ((*l_376) = l_517)))) || ((*g_235) == (safe_sub_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(g_2, ((*l_354) = (safe_lshift_func_int8_t_s_s(0x6FL, 6))))), l_533)))) <= (*g_345))), l_518))) == 0UL)), (-8L))) , (*l_519));
                        (*l_519) = &g_4;
                    }
                    for (g_147 = 0; (g_147 != 20); g_147++)
                    {
                        int32_t **l_536 = &g_31;
                        (*l_354) = p_34;
                        if ((*g_181))
                            continue;
                        if (p_34)
                            continue;
                        (*l_536) = &l_400;
                    }
                }
                (*l_537) = &l_400;
            }
            (*l_538) = (g_472 , &l_400);
        }
        else
        {
            int32_t **l_539 = &l_353;
            (*l_539) = l_353;
            (*l_353) = ((void*)0 == &g_345);
        }
    }
    else
    {
        uint32_t l_541 = 0x7D65FC68L;
        uint8_t *l_547 = &g_147;
        int16_t **l_590 = &l_556;
        uint16_t l_599 = 0x64C9L;
        uint8_t l_623 = 0UL;
        int32_t l_624 = 1L;
        if ((*g_181))
        {
            int8_t *l_543 = &g_471;
            int8_t **l_542 = &l_543;
            int8_t *l_544 = &g_471;
            uint8_t *l_548 = &g_524;
            int16_t *l_552 = &g_112;
            int16_t *l_553 = &g_84;
            int32_t **l_554 = &g_31;
            int16_t ***l_557 = &l_555;
            int8_t l_584 = 0x42L;
            l_541 = l_540;
            (*l_554) = (((((*l_553) = ((((*l_542) = &g_471) == l_544) == (((253UL && (((((*l_552) = ((~((((l_546 == l_547) , (p_34 , l_548)) != ((safe_mod_func_int8_t_s_s((((0x71L && 0xD9L) && p_33) < g_186), 1UL)) , l_548)) , g_87)) == l_551)) <= (-1L)) , p_34) != 0x19D5F81449091035LL)) > 65532UL) == g_84))) > 0xE413L) || 0x8351L) , (void*)0);
            (*l_557) = l_555;
            if (((((safe_mod_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(((*l_354) && (((((safe_sub_func_uint16_t_u_u(p_34, l_541)) < ((safe_add_func_int32_t_s_s(((safe_sub_func_int16_t_s_s(((-7L) & (*g_235)), (safe_rshift_func_uint16_t_u_s((((((safe_rshift_func_int8_t_s_u(l_576, 6)) & ((*g_345) | (safe_mul_func_uint16_t_u_u((safe_add_func_int64_t_s_s(l_541, ((safe_div_func_int16_t_s_s(0xB9ABL, 65535UL)) == p_34))), p_33)))) && (*g_345)) > (-8L)) || p_33), 3)))) & p_34), p_34)) || g_84)) , p_34) <= (*l_354)) || 0x57C05AC7BDA4903DLL)), 5)), 0xE984L)), g_112)), l_541)) ^ p_34) >= l_583) && l_584))
            {
                int8_t **l_587 = (void*)0;
                uint32_t *l_593 = &g_174;
                int32_t l_600 = 0x8F6F16FDL;
                (*l_354) = ((safe_div_func_int8_t_s_s(((l_587 == l_588) <= (((g_345 = l_553) == (void*)0) <= (l_590 != (((safe_sub_func_uint32_t_u_u(((*l_593) = p_33), ((+((safe_sub_func_int32_t_s_s((((((((*g_235) = 0x3FE0352624A3151DLL) & l_541) == (safe_mul_func_uint16_t_u_u((((((*l_552) = (((l_541 > 5L) & l_541) ^ 0x1EL)) ^ l_599) | l_600) , 0xE69EL), 7L))) >= 0x788BC8206E447777LL) || p_34) > l_541), 1UL)) , l_600)) <= (*l_354)))) <= l_599) , l_590)))), 0x78L)) || 1UL);
            }
            else
            {
                int32_t *l_601 = &g_4;
                (*l_554) = l_601;
            }
        }
        else
        {
            int16_t l_618 = (-4L);
            for (g_84 = 3; (g_84 > (-26)); g_84--)
            {
                int32_t ***l_619 = &g_30;
                uint32_t *l_622 = &l_541;
                uint8_t l_625 = 0xE1L;
                (*l_354) = p_34;
                (*l_354) = ((safe_lshift_func_int16_t_s_s((((((safe_lshift_func_uint16_t_u_s((((((safe_mod_func_int16_t_s_s((safe_mul_func_int8_t_s_s((0x6084L & (((safe_mod_func_int16_t_s_s((p_33 > (((((((((*l_547) = (((((safe_div_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_u(0L, 6)) | ((l_624 = (l_618 >= (((((void*)0 == l_619) != ((*g_181) == (((0UL != (safe_sub_func_uint32_t_u_u(((*l_622) = 7UL), l_623))) != (*l_354)) && g_107))) , 0UL) > l_618))) , 0x5C6A7C08CAE3961ELL)), g_2)) | 0x042FC192L) < p_33) & 65534UL) & l_618)) <= g_95) , g_2) > 0L) , g_29) <= l_625) != 0xC9L) , p_33)), p_34)) == g_524) < l_623)), 0x9AL)), 0x561AL)) , 255UL) , (void*)0) == (void*)0) | l_618), 8)) , 0x9D9AL) ^ g_472) , g_147) , g_4), l_626)) < p_34);
                (*l_354) = 0x4D16FD43L;
            }
        }
    }
    return &g_186;
}
static uint32_t func_37(uint32_t p_38, uint32_t * p_39, int8_t p_40, int64_t p_41)
{
    int32_t **l_182 = &g_181;
    int16_t **l_227 = (void*)0;
    int32_t l_248 = 0x7DDD3BA1L;
    uint32_t *l_252 = (void*)0;
    uint32_t **l_251 = &l_252;
    uint8_t l_286 = 0x25L;
    int16_t *l_351 = &g_112;
    int64_t *l_352 = &g_107;
    (*l_182) = g_181;
    for (p_40 = 18; (p_40 == (-4)); p_40--)
    {
        int32_t *l_185 = &g_186;
        (*l_185) = (g_147 , (**l_182));
        if ((*g_181))
            break;
    }
    for (g_84 = 0; (g_84 == 1); g_84++)
    {
        uint32_t ***l_201 = (void*)0;
        int8_t l_202 = 0xFCL;
        uint64_t l_203 = 8UL;
        int16_t *l_226 = &g_84;
        int16_t **l_225 = &l_226;
        int32_t *l_229 = (void*)0;
        uint64_t **l_236 = &g_235;
        uint32_t ****l_244 = &l_201;
        uint32_t *****l_243 = &l_244;
        int32_t l_245 = 0x3F160234L;
        int8_t l_313 = 0xACL;
        uint8_t l_348 = 6UL;
        if ((safe_sub_func_int64_t_s_s((l_203 = (safe_mod_func_uint64_t_u_u(((g_95 > ((safe_mod_func_int64_t_s_s(((safe_rshift_func_uint8_t_u_u((safe_div_func_int8_t_s_s((&g_30 == &g_30), g_64)), (**l_182))) , (g_111 , (((safe_sub_func_int64_t_s_s(1L, (l_201 == (void*)0))) && l_202) ^ 3UL))), 0x5527752A06A2A823LL)) , 0x6274B569L)) <= 0xF4E9L), g_107))), (**l_182))))
        {
            int16_t **l_210 = (void*)0;
            int16_t *l_211 = &g_112;
            int16_t *l_213 = (void*)0;
            int16_t **l_212 = &l_213;
            uint8_t *l_214 = (void*)0;
            int32_t l_215 = 1L;
            uint16_t *l_216 = &g_64;
            int32_t *l_223 = (void*)0;
            int32_t *l_224 = &g_186;
            (*l_224) = (((safe_div_func_uint16_t_u_u(((*l_216) = (l_215 = ((safe_div_func_int64_t_s_s((safe_lshift_func_uint16_t_u_u(((((l_211 = &g_112) == ((*l_212) = &g_112)) , l_214) == (void*)0), 13)), (-1L))) , 0UL))), 6L)) > 4294967288UL) && (safe_lshift_func_uint16_t_u_s((safe_mul_func_int8_t_s_s((safe_mul_func_int8_t_s_s((p_40 >= p_41), p_41)), 2UL)), l_203)));
        }
        else
        {
            int32_t *l_228 = &g_186;
            int32_t **l_230 = (void*)0;
            int32_t **l_231 = &l_229;
            int8_t *l_239 = &l_202;
            uint16_t *l_240 = &g_241;
            int16_t *l_247 = &g_112;
            int16_t **l_246 = &l_247;
            (*l_228) = (l_225 == ((**l_182) , l_227));
            (*l_231) = ((*l_182) = l_229);
            l_245 = (0x5331A3B0L ^ (safe_div_func_int32_t_s_s(((*l_228) = ((0x3E3CL < ((((*l_240) = (((g_234 != l_236) < (g_64 = (((l_182 != &l_229) , &g_29) != &g_29))) <= (safe_div_func_int8_t_s_s(((*l_239) = ((*l_228) == p_40)), 254UL)))) , g_242) == l_243)) == g_84)), g_177)));
            l_248 = (((*l_225) = &g_112) == ((*l_246) = &g_95));
        }
        (*l_182) = p_39;
        (*g_181) = ((safe_mul_func_int16_t_s_s(((void*)0 != l_251), ((p_38 > (*g_181)) & (g_87 > (safe_rshift_func_uint8_t_u_u((g_87 && (safe_add_func_int16_t_s_s((safe_mod_func_int32_t_s_s(((*g_235) ^ ((g_242 != (void*)0) == (**l_182))), (*g_181))), g_186))), g_241)))))) >= 0L);
        for (g_87 = 1; (g_87 <= 34); g_87++)
        {
            uint64_t l_261 = 0x3B6AC625639F120ELL;
            int32_t l_289 = 0xEC58B022L;
            uint32_t l_328 = 0xC3E9C7F9L;
            uint16_t *l_341 = &g_241;
            uint16_t *l_346 = &g_241;
        }
    }
    l_248 = (((*l_352) = (&g_112 != l_351)) < (((*l_351) = 0xBA08L) ^ (*g_345)));
    return p_38;
}
static int16_t func_44(int32_t * p_45, uint32_t * p_46)
{
    uint32_t ****l_179 = (void*)0;
    uint32_t *****l_178 = &l_179;
    int32_t l_180 = 0x32EC2C21L;
    (*p_45) = 0x49CFF131L;
    (*l_178) = (void*)0;
    return l_180;
}
static int32_t func_47(uint32_t * p_48, uint64_t p_49, uint32_t * p_50, int32_t p_51)
{
    int8_t l_72 = (-4L);
    int16_t *l_83 = &g_84;
    uint8_t *l_85 = (void*)0;
    uint8_t *l_86 = &g_87;
    int16_t *l_94 = &g_95;
    int32_t l_106 = 0xE39B9AA6L;
    int32_t l_108 = (-7L);
    uint64_t *l_109 = &g_59;
    uint64_t *l_110 = &g_111;
    uint64_t **l_125 = &l_110;
    uint32_t *l_153 = &g_29;
    uint32_t **l_152 = &l_153;
    uint32_t ***l_151 = &l_152;
    uint32_t l_175 = 0x0AEDAF9CL;
    g_112 = (safe_add_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(((((((safe_add_func_uint64_t_u_u((((*l_110) = (((*l_109) = (l_72 , ((safe_sub_func_uint64_t_u_u(((safe_rshift_func_int8_t_s_u((safe_sub_func_int8_t_s_s((safe_mul_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(((*l_86) = (g_59 < ((*l_83) = 6L))), (((safe_rshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(0L, 13)), ((4L ^ (((safe_rshift_func_int16_t_s_u(((*l_94) = g_4), 10)) , g_64) < (((safe_mod_func_int32_t_s_s((g_107 = (l_106 = (safe_sub_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s(((safe_rshift_func_uint16_t_u_s((safe_sub_func_int64_t_s_s(0xA9FF1DB06D673C04LL, (((0xA2283564F69674B1LL <= l_72) , (void*)0) != &g_31))), l_72)) || p_49), p_49)), l_72)))), p_49)) | 8L) , g_107))) >= l_72))) != l_72) ^ g_64))), p_51)), p_49)), g_59)) < g_59), 0UL)) <= l_108))) < 0L)) , l_106), g_2)) >= g_64) && 0xB7L) , &p_49) == (void*)0) , g_2), p_51)), l_108));
    for (p_49 = 20; (p_49 <= 59); p_49 = safe_add_func_uint8_t_u_u(p_49, 5))
    {
        int32_t *l_115 = &l_106;
        (*l_115) = g_107;
        (*g_30) = (*g_30);
        l_115 = &l_106;
    }
    if (((((safe_rshift_func_int8_t_s_s((+(safe_mul_func_int8_t_s_s((safe_add_func_int64_t_s_s(((-1L) & g_112), (safe_add_func_int64_t_s_s((((*l_125) = &g_59) == (void*)0), g_64)))), (g_107 || p_51)))), ((safe_mul_func_uint16_t_u_u((~0xE0L), g_64)) <= p_51))) > p_49) , l_106) , 0x5BB29A1BL))
    {
        uint16_t l_129 = 0xA67FL;
        int32_t *l_130 = (void*)0;
        int32_t *l_131 = (void*)0;
        int32_t *l_132 = (void*)0;
        int64_t l_133 = 7L;
        l_133 = l_129;
    }
    else
    {
        uint32_t *l_135 = (void*)0;
        uint32_t **l_134 = &l_135;
        uint32_t ***l_136 = &l_134;
        int32_t *l_137 = &l_106;
        uint8_t *l_146 = &g_147;
        uint64_t l_148 = 0x132E46A4E19C9FCCLL;
        int32_t *l_149 = &l_106;
        int64_t l_161 = 1L;
        (*l_136) = l_134;
        l_137 = l_135;
        if (((safe_add_func_int32_t_s_s(((*l_149) = (safe_div_func_uint64_t_u_u(((((safe_mul_func_uint16_t_u_u(0x5611L, 0xBE3FL)) , l_108) | (g_2 ^ g_107)) ^ (((0UL ^ (safe_rshift_func_int8_t_s_s((((g_87 > (g_95 = (((((*l_146) = p_49) != l_148) > g_4) , 0x57B5L))) || 0x24A0BD6DL) > 0xA910B13AL), l_148))) || p_51) & g_29)), g_64))), g_29)) < 65535UL))
        {
            int32_t ***l_150 = &g_30;
            (*l_150) = &l_149;
        }
        else
        {
            uint32_t ****l_154 = &l_151;
            int32_t l_172 = 0x88D6DCB7L;
            uint32_t *l_173 = &g_174;
            (*l_154) = l_151;
            (*g_30) = (*g_30);
            (*g_30) = p_50;
            (*g_30) = (((p_49 , (safe_mul_func_int8_t_s_s(p_49, p_51))) > (safe_lshift_func_uint8_t_u_u((0x015CL | ((((safe_add_func_int32_t_s_s(((**g_30) = l_161), (safe_unary_minus_func_int32_t_s(((*l_149) = (((-1L) > ((~((((*l_173) = (((*l_86) = (safe_sub_func_uint16_t_u_u(l_72, (safe_add_func_int32_t_s_s((safe_mul_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u(g_111, l_172)) , l_172), 2L)), p_51))))) != g_59)) || g_84) <= p_51)) && 0xEA87L)) , l_172)))))) && g_84) | l_172) <= p_51)), 2))) , (*g_30));
        }
    }
    return l_175;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_2;
    csmith_sink_ = g_4;
    csmith_sink_ = g_29;
    csmith_sink_ = g_59;
    csmith_sink_ = g_64;
    csmith_sink_ = g_84;
    csmith_sink_ = g_87;
    csmith_sink_ = g_95;
    csmith_sink_ = g_107;
    csmith_sink_ = g_111;
    csmith_sink_ = g_112;
    csmith_sink_ = g_147;
    csmith_sink_ = g_174;
    csmith_sink_ = g_177;
    csmith_sink_ = g_186;
    csmith_sink_ = g_241;
    csmith_sink_ = g_471;
    csmith_sink_ = g_472;
    csmith_sink_ = g_524;
    csmith_sink_ = g_658;
    csmith_sink_ = g_713;
    csmith_sink_ = g_760;
    csmith_sink_ = g_882;
    csmith_sink_ = g_1017;
    csmith_sink_ = g_1257;
    csmith_sink_ = g_1426;
    platform_main_end(0,0);
    return 0;
}
