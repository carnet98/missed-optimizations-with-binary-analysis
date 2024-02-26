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
static uint32_t g_21 = 4294967287U;
static uint32_t g_64 = 0x4B79A97A;
static int16_t g_148[8] = {1,0x74B5,1,1,0x74B5,1,1,0x74B5};
static int32_t g_149[6] = {0x3948B2FD,6,6,0x3948B2FD,6,6};
static uint8_t g_223[2][4][9] = {{{6U,0x8A,0xBE,6U,0xBE,0x8A,6U,0xF7,0xF7},{255U,0x92,0x9B,0xE9,0x9B,0x92,255U,0x20,0xDD},{6U,0x8A,0xBE,6U,0xBE,0x8A,6U,0xF7,0xF7},{255U,0x92,0x9B,0xE9,0x9B,255U,0xDD,6U,0xE7}},{{0xF7,255U,1U,0xF7,1U,255U,0xF7,255U,255U},{0xDD,255U,0x9E,0x20,0x9E,255U,0xDD,6U,0xE7},{0xF7,255U,1U,0xF7,1U,255U,0xF7,255U,255U},{0xDD,255U,0x9E,0x20,0x9E,255U,0xDD,6U,0xE7}}};
static uint32_t g_401 = 0xC1AD0A15;
static uint32_t g_474 = 0x71D9B870;
static int16_t g_555 = 0x6C0E;
static uint8_t func_1(void);
inline static uint16_t func_6(int8_t p_7, int32_t p_8, uint8_t p_9, int32_t p_10);
static int32_t func_16(int32_t p_17, uint8_t p_18, uint32_t p_19, uint8_t p_20);
static uint8_t func_25(int8_t p_26, int32_t p_27, uint16_t p_28);
inline static int32_t func_36(int32_t p_37, uint32_t p_38, uint16_t p_39, uint8_t p_40);
static uint8_t func_46(uint32_t p_47, int32_t p_48, int32_t p_49);
inline static int32_t func_52(int8_t p_53, int8_t p_54, uint8_t p_55, int32_t p_56);
static uint16_t func_59(uint32_t p_60);
static uint32_t func_70(uint32_t p_71, int32_t p_72);
inline static int32_t func_73(int32_t p_74);
static uint8_t func_1(void)
{
    int8_t l_13 = (-1);
    uint32_t l_22 = 0x29ACD409;
    int16_t l_639[3][8] = {{0x05A9,0x05A9,0x05A9,0x05A9,0x05A9,0x05A9,0x05A9,0x05A9},{0x05A9,0x05A9,0x05A9,0x05A9,0x05A9,0x05A9,0x05A9,0x05A9},{0x05A9,0x05A9,0x05A9,0x05A9,0x05A9,0x05A9,0x05A9,0x05A9}};
    int32_t l_641 = (-1);
    int32_t l_688 = 0x5F3D58B3;
    uint32_t l_689 = 0xF26830F0;
    int32_t l_692 = 0;
    uint32_t l_693 = 0x36D73A02;
    int i, j;
    if ((safe_mod_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(func_6((((safe_mod_func_int32_t_s_s(l_13, 0xCDDD1D8F)) == (safe_mod_func_int16_t_s_s(((func_16(g_21, l_22, l_13, l_13) > (l_13 & (((l_22 , l_639[1][0]) >= g_148[6]) , 0x961D))) <= 0x4B786491), g_555))) || 0xC9), g_555, l_13, g_474), g_148[7])), g_148[3])))
    {
        uint32_t l_665 = 1U;
        g_149[4] = 1;
        l_641 &= (g_149[5] || g_223[0][3][1]);
        l_665 = (safe_mul_func_int16_t_s_s(l_13, ((safe_rshift_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((safe_sub_func_int32_t_s_s((l_641 == l_13), 0x8AA51B17)), (safe_lshift_func_uint16_t_u_s(((safe_sub_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u(0x0DDC, 3)), ((safe_lshift_func_int8_t_s_u(((l_639[1][0] , (safe_rshift_func_int16_t_s_s(g_148[6], ((safe_div_func_uint16_t_u_u(((safe_unary_minus_func_uint32_t_u(l_22)) > (safe_mod_func_int8_t_s_s(g_474, g_474))), 1U)) < g_149[5])))) > l_639[1][4]), 7)) , g_474))) && g_401), l_22)))), 9)) , l_13)));
        return g_149[3];
    }
    else
    {
        uint32_t l_690[4] = {0U,0U,0U,0U};
        int32_t l_691[10][7] = {{(-10),(-5),(-10),(-10),(-5),(-10),(-10)},{(-5),(-5),1,(-5),(-5),1,(-5)},{(-5),(-10),(-10),(-5),(-10),(-10),(-5)},{(-10),(-5),(-10),(-10),(-5),(-10),(-10)},{(-5),(-5),1,(-5),(-5),1,(-5)},{(-5),(-10),(-10),(-5),(-10),(-10),(-5)},{(-10),(-5),(-10),(-10),(-5),(-10),(-10)},{(-5),(-5),1,(-5),(-5),1,(-5)},{(-5),(-10),(-10),(-5),(-10),(-10),(-5)},{(-10),(-5),(-10),(-10),(-5),(-10),(-10)}};
        int i, j;
        l_691[9][4] = ((0x0B20 & (safe_mod_func_uint8_t_u_u(255U, (safe_lshift_func_int16_t_s_s(0xC309, (l_13 & (1U == (safe_div_func_int8_t_s_s((0xCC25 <= (g_555 , ((safe_add_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u(((safe_div_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(((safe_div_func_uint16_t_u_u((safe_div_func_uint16_t_u_u(g_64, l_688)), l_689)) | l_22), 0xF361)), l_688)) != 0U), 65533U)) , l_690[1]), g_223[0][3][1])) && g_223[0][3][1]), l_690[1])) < g_149[0]))), g_21))))))))) != 0x4084D062);
    }
    ++l_693;
    return g_148[6];
}
inline static uint16_t func_6(int8_t p_7, int32_t p_8, uint8_t p_9, int32_t p_10)
{
    uint8_t l_640 = 253U;
    p_8 = l_640;
    return g_149[0];
}
static int32_t func_16(int32_t p_17, uint8_t p_18, uint32_t p_19, uint8_t p_20)
{
    int32_t l_379 = 0x1D616B5A;
    int32_t l_449 = 0x6F072E33;
    uint8_t l_470 = 0xFC;
    uint8_t l_471 = 0xDA;
    uint8_t l_531 = 0xD7;
    int8_t l_532 = 0x47;
    int16_t l_594 = (-9);
    if ((p_19 ^ (((((safe_mul_func_uint8_t_u_u(func_25(p_19, g_21, (0x61FC | 1U)), (safe_sub_func_int8_t_s_s(g_148[6], (g_148[0] > (0U && g_148[1])))))) >= 0xC847) ^ l_379) >= 254U) ^ 0xB9D46EC3)))
    {
        int8_t l_384 = 0xAC;
        int32_t l_418[1][3];
        int16_t l_559 = (-9);
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
                l_418[i][j] = (-1);
        }
        for (g_21 = 0; (g_21 >= 60); g_21 = safe_add_func_uint16_t_u_u(g_21, 6))
        {
            int32_t l_394 = (-1);
            g_401 ^= (safe_sub_func_uint16_t_u_u(l_384, ((safe_add_func_int8_t_s_s(0x5E, (~0x34))) >= (safe_rshift_func_int8_t_s_s(((safe_mul_func_int16_t_s_s((((safe_mod_func_int32_t_s_s((g_149[0] || l_394), (safe_add_func_uint32_t_u_u((~((safe_mul_func_uint16_t_u_u((g_148[6] | g_148[6]), (((((!p_20) == p_18) != g_21) == p_17) == 0x58))) | 4294967293U)), 0x9B8FF13E)))) < l_394) & p_18), p_18)) > 1U), 4)))));
            p_17 = ((~(safe_mul_func_int8_t_s_s(1, (((safe_add_func_int8_t_s_s((((0xF0D45506 | (p_17 == (g_148[6] || ((((l_384 | ((0xD5 >= l_379) > ((-1) == ((((safe_mul_func_int16_t_s_s((safe_div_func_int8_t_s_s((safe_add_func_uint8_t_u_u(0x4F, 0xD3)), g_149[5])), p_19)) , l_384) , 255U) | 254U)))) , (-10)) , 0x448FBCCC) >= l_379)))) && 0x87) , g_223[0][1][2]), 9)) != 1U) & 0x73)))) , 0x8A464E92);
            if (l_394)
                continue;
        }
        for (l_384 = 0; (l_384 <= (-29)); l_384 = safe_sub_func_int16_t_s_s(l_384, 1))
        {
            uint32_t l_419[6][7] = {{1U,0U,0U,1U,1U,0U,0U},{0x42A22D07,0x17F358C7,0x42A22D07,0x17F358C7,0x42A22D07,0x17F358C7,0x42A22D07},{1U,1U,0U,0U,1U,1U,0U},{0xC1B076C0,0x17F358C7,0xC1B076C0,0x17F358C7,0xC1B076C0,0x17F358C7,0xC1B076C0},{1U,0U,0U,1U,1U,0U,0U},{0x42A22D07,0x17F358C7,0x42A22D07,0x17F358C7,0x42A22D07,0x17F358C7,0x42A22D07}};
            int32_t l_432 = 0x7CDD833F;
            int i, j;
            for (g_21 = 0; (g_21 <= 5); g_21 += 1)
            {
                int32_t l_417[7][8][4] = {{{0xA0FA19F6,0,(-1),1},{(-1),1,0x5B3812A1,0},{7,0,(-1),0},{(-1),0x5B3812A1,0,0x5B3812A1},{(-8),1,0,0xAB18A529},{7,(-1),(-1),0x07101F39},{1,0,0x07101F39,7},{1,0x5CB3C5C3,(-1),(-1)}},{{7,7,0,0xA0FA19F6},{(-8),0,0,1},{(-1),0,0xF7B21165,0},{0,0,7,1},{0,0,0,0xA0FA19F6},{0x5CB3C5C3,7,(-1),(-1)},{0xAB18A529,0x5CB3C5C3,0xA0FA19F6,7},{1,0,0xA0FA19F6,0x07101F39}},{{0xAB18A529,(-1),(-1),0xAB18A529},{0x5CB3C5C3,1,0,0x5B3812A1},{0,0x5B3812A1,7,0},{0,1,0xF7B21165,0},{(-1),0x5B3812A1,0,0x5B3812A1},{(-8),1,0,0xAB18A529},{7,(-1),(-1),0x07101F39},{1,0,0x07101F39,7}},{{1,0x5CB3C5C3,(-1),(-1)},{7,7,0,0xA0FA19F6},{(-8),0,0,1},{(-1),0,0xF7B21165,0},{0,0,7,1},{0,0,0,0xA0FA19F6},{0x5CB3C5C3,7,(-1),(-1)},{0xAB18A529,0x5CB3C5C3,0xA0FA19F6,7}},{{1,0,0xA0FA19F6,0x07101F39},{0xAB18A529,(-1),(-1),0xAB18A529},{0x5CB3C5C3,1,0,0x5B3812A1},{0,0x5B3812A1,7,0},{0,1,0xF7B21165,0},{(-1),0x5B3812A1,0,0x5B3812A1},{(-8),1,0,0xAB18A529},{7,(-1),(-1),0x07101F39}},{{1,0,0x07101F39,7},{1,0x5CB3C5C3,(-1),(-1)},{7,7,0,0xA0FA19F6},{(-8),0,0,1},{(-1),0,0xF7B21165,0},{0,0,7,1},{0,0,0,0xA0FA19F6},{0x5CB3C5C3,7,(-1),(-1)}},{{0xAB18A529,0x5CB3C5C3,0xA0FA19F6,7},{1,0,0xA0FA19F6,0x07101F39},{0xAB18A529,0xF7B21165,0xF7B21165,(-8)},{(-1),0xAB18A529,8,7},{8,7,0,1},{1,0x5B3812A1,0x07101F39,1},{0,7,1,7},{0xA0FA19F6,0xAB18A529,0,(-8)}}};
                int i, j, k;
                ++l_419[3][1];
                for (g_64 = 1; (g_64 <= 5); g_64 += 1)
                {
                    int32_t l_440 = 0xB81B9BB4;
                    for (p_17 = 1; (p_17 <= 5); p_17 += 1)
                    {
                        int i;
                        if (g_149[g_21])
                            break;
                        l_449 = (safe_add_func_int32_t_s_s(((safe_rshift_func_int16_t_s_s((((((safe_lshift_func_uint16_t_u_s(l_418[0][2], p_18)) <= (safe_mod_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(0x11F6, ((p_20 > (l_432 && (safe_mod_func_uint16_t_u_u(((+(safe_div_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(((((l_440 < (g_223[0][0][3] | ((safe_div_func_uint32_t_u_u(((((safe_add_func_int16_t_s_s((safe_add_func_uint16_t_u_u((((((safe_mul_func_uint16_t_u_u(((g_149[5] , (((p_17 && p_17) >= p_19) < g_149[g_21])) == p_19), l_440)) != 65535U) , 0xA71829D1) && 0U) || l_417[2][5][1]), p_19)), 0x77FC)) , l_417[2][5][1]) , 0U) || p_19), p_19)) | g_223[0][3][1]))) > p_19) ^ l_440) && g_149[0]), g_64)), p_19))) , 65535U), 0x1F02)))) , p_17))), 0xC2))) || g_149[5]) || 0x7379) && l_379), 9)) | l_379), l_379));
                    }
                }
            }
            if (g_148[6])
            {
                uint16_t l_469 = 65535U;
                l_418[0][2] = (+((g_401 < (safe_div_func_uint16_t_u_u((((-9) ^ ((safe_add_func_uint8_t_u_u((safe_div_func_int16_t_s_s(((safe_sub_func_uint16_t_u_u((safe_div_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_u(((((l_419[0][2] ^ g_149[2]) < (1U != (safe_add_func_int32_t_s_s((safe_div_func_uint32_t_u_u(g_223[0][3][1], 1)), ((g_223[0][3][1] , (p_20 & l_469)) || p_18))))) & 0U) , 0xB965), l_470)) >= p_19), g_149[0])), l_471)) <= l_469), 65535U)), p_19)) , 0)) != 0xB2B6D177), p_18))) , 0xC983524A));
                l_418[0][1] = (safe_mul_func_uint8_t_u_u(g_474, (safe_lshift_func_uint16_t_u_s(((g_149[5] , ((0x4BD7E9FF | (-1)) , ((safe_div_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(g_149[5], ((((safe_rshift_func_uint16_t_u_u(g_148[6], p_20)) ^ ((safe_mod_func_int32_t_s_s(((((safe_div_func_int16_t_s_s(((safe_div_func_uint32_t_u_u((l_379 <= p_19), p_20)) < g_401), l_419[3][1])) > g_21) , g_223[0][3][1]) | l_471), 0x0BD48041)) == g_148[6])) & g_149[5]) >= g_149[5]))), g_474)) < 0xF283284E))) & 65529U), g_474))));
            }
            else
            {
                uint32_t l_505[9][6][4] = {{{4294967294U,6U,4294967295U,0xF0279FFE},{0U,0U,4294967293U,0x16FBDB85},{0x12A79366,0x3C937039,4294967295U,0x02D1D452},{4294967295U,0x02D1D452,0x9CEDBF01,4294967295U},{4294967295U,4294967288U,0xB7611907,0xBDA4903D},{1U,4294967291U,0xF0279FFE,0x736988EC}},{{6U,0U,0xFA089E56,4294967295U},{0xC6BA4E8C,1U,6U,0xBDA4903D},{7U,1U,4294967294U,0x43741E1E},{0U,0x02D1D452,6U,0x9CEDBF01},{1U,0xD730E397,0x7295ACF0,0x16FBDB85},{0x2893DC63,0U,1U,4U}},{{0x9C7857CB,6U,4294967295U,0xFA089E56},{0xFA43F426,0xBDA4903D,7U,0x43741E1E},{0x2893DC63,0xFA089E56,0x4EDFD152,1U},{4294967294U,0x68CFEE64,6U,6U},{0U,0U,4294967295U,0x1A7B9ABF},{7U,0xFA5839F4,4294967295U,4294967288U}},{{0x3C9DEEEC,1U,0xFA089E56,4294967295U},{3U,1U,0xF2559C4E,4294967288U},{1U,0xFA5839F4,0x624A3151,0x1A7B9ABF},{0U,0U,0x9CEDBF01,6U},{0x43741E1E,0x68CFEE64,6U,1U},{0x12A79366,0xFA089E56,0xB442E5E9,0x43741E1E}},{{4294967286U,0xBDA4903D,4294967295U,0xFA089E56},{1U,6U,0U,4U},{0U,0U,0xB442E5E9,0x16FBDB85},{0U,0xD730E397,4294967295U,0x9CEDBF01},{0x43741E1E,0x02D1D452,1U,0x43741E1E},{4294967295U,1U,0x624A3151,0xBDA4903D}},{{4294967294U,1U,0xF0279FFE,4294967295U},{3U,0U,0xCB201B67,0x736988EC},{0xC6BA4E8C,4294967291U,4294967295U,0xBDA4903D},{0U,4294967288U,4294967294U,4294967295U},{0U,0x02D1D452,0x178596C5,0x02D1D452},{1U,0x3C937039,0x4EDFD152,0x16FBDB85}},{{0x505BFE8E,0U,1U,0xF0279FFE},{0xFA43F426,6U,6U,1U},{0xFA43F426,0xB442E5E9,1U,0x43741E1E},{0x505BFE8E,1U,0x4EDFD152,4294967294U},{1U,0x68CFEE64,0x178596C5,4294967291U},{0U,0U,4294967294U,0x1A7B9ABF}},{{0xF2559C4E,0x505BFE8E,0U,0U},{6U,0x9C7857CB,7U,4294967295U},{0xB442E5E9,4294967291U,0x46AA76B3,0U},{4294967291U,0x505BFE8E,0U,0x15EF3ABF},{1U,4294967294U,0x43741E1E,1U},{4294967295U,1U,0U,0x9C7857CB}},{{0xB7611907,0U,0x566E9846,0U},{0xFA089E56,0x3C9DEEEC,0xD730E397,0U},{0x9C7857CB,3U,0U,0xFA5839F4},{0xCB201B67,4294967294U,0x566E9846,0U},{0x624A3151,0U,0x736988EC,4294967295U},{4294967295U,6U,6U,4294967295U}}};
                int i, j, k;
                l_505[4][5][3] = (safe_mul_func_int8_t_s_s(0xBE, (safe_lshift_func_int16_t_s_s((safe_add_func_uint16_t_u_u((((safe_add_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(l_419[3][1], l_419[3][0])), 0x93)) & ((0xAE47DCB6 & (g_64 , (safe_sub_func_int8_t_s_s(g_21, ((safe_add_func_uint32_t_u_u(p_18, ((l_418[0][2] ^ g_21) >= g_21))) , p_19))))) < 0)) <= 1U), p_17)), p_20))));
                p_17 = (safe_rshift_func_int16_t_s_s(((l_419[1][1] <= (safe_mul_func_int8_t_s_s(l_505[4][5][3], (((safe_div_func_uint32_t_u_u(1U, 1U)) >= g_223[0][3][1]) || (safe_add_func_int8_t_s_s(g_474, (safe_rshift_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u((248U != (((p_19 | p_20) >= p_18) != g_401)), (-10))), 1)))))))) != l_505[4][5][3]), p_20));
                g_149[4] |= 0x9D4A1178;
            }
            if (((safe_add_func_int16_t_s_s(((safe_mul_func_uint32_t_u_u(1U, (((((safe_rshift_func_int8_t_s_s(l_419[3][1], (!((safe_add_func_int8_t_s_s(g_148[2], 0xD2)) < ((safe_rshift_func_int16_t_s_s(p_19, l_418[0][1])) != ((4294967286U && (safe_add_func_uint16_t_u_u(l_531, l_532))) >= l_419[3][1])))))) & g_21) | g_474) & 0U) == g_401))) <= 0x50), 65527U)) == g_21))
            {
                uint16_t l_554 = 5U;
                int32_t l_558 = (-7);
                for (p_17 = 0; (p_17 >= (-19)); p_17 = safe_sub_func_uint8_t_u_u(p_17, 6))
                {
                    uint16_t l_560 = 0x3A9A;
                    int32_t l_595 = (-3);
                    g_149[5] = (((((safe_rshift_func_uint8_t_u_s(((safe_div_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s(g_149[5], g_401)) , ((safe_div_func_uint16_t_u_u((((~(((((((((safe_add_func_uint16_t_u_u(g_223[1][0][5], ((((((safe_rshift_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s((safe_add_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((-9), 2)), l_554)), (4294967295U & g_555))) ^ (((safe_mul_func_uint16_t_u_u(g_474, p_19)) , 1) | 0x2059)), 1)) != l_419[0][6]) | g_21) < l_558) , 0) < 0x9A))) < l_559) , p_19) >= 0x0375DF7C) != 0) > p_17) == l_554) , 0x6FD4) , p_18)) & p_17) == 0xD85C06E6), 1U)) , l_384)), l_560)) > 65535U), 6)) <= p_17) | l_554) == p_18) | 8);
                    g_149[0] = (((safe_sub_func_uint32_t_u_u(p_20, ((safe_div_func_uint8_t_u_u((0x2155 > (g_149[5] <= ((1U | p_17) , (!(l_560 == (safe_rshift_func_uint16_t_u_u(l_558, 4))))))), 255U)) == l_470))) && p_20) <= g_555);
                    for (g_401 = 15; (g_401 > 23); ++g_401)
                    {
                        l_595 = (((safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(((0x1C566884 && (safe_add_func_int32_t_s_s((0x3DB8 <= (g_223[0][3][1] ^ (safe_lshift_func_int16_t_s_s((safe_mul_func_int16_t_s_s(((((safe_rshift_func_uint16_t_u_u(((l_554 && g_149[5]) <= (((((safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(((4294967295U >= (0xB8E4 >= g_555)) != ((safe_mod_func_uint16_t_u_u(((((((safe_lshift_func_uint16_t_u_s(p_17, 7)) , p_17) >= g_148[6]) != 0xB02F) , 0x9733) >= 0x99E7), p_17)) <= g_555)), l_432)), p_19)) < 2U) > p_20) ^ p_17) , (-1))), p_20)) > p_18) | 0x7FCC) <= 0x72B7B50C), 0x400F)), p_20)))), 4294967293U))) || 0x9286), g_148[5])), p_20)), p_17)) < 0x88D1) || l_594);
                    }
                    return p_19;
                }
                if (l_559)
                    continue;
                g_149[5] = (~g_223[1][2][8]);
            }
            else
            {
                int8_t l_597 = 0xB4;
                l_597 ^= (3U & 1);
            }
        }
    }
    else
    {
        int32_t l_617 = 1;
        int16_t l_638 = 0x1C52;
        l_449 |= ((safe_sub_func_uint8_t_u_u(((-1) ^ (safe_mul_func_uint16_t_u_u(1U, (((safe_sub_func_int16_t_s_s((safe_sub_func_int32_t_s_s(((((+(((g_149[5] <= (p_17 , (((~((safe_rshift_func_uint16_t_u_u(((safe_mod_func_uint32_t_u_u((safe_mod_func_int8_t_s_s((g_149[5] , ((!(g_223[0][3][1] >= p_18)) != ((p_17 == (safe_lshift_func_int8_t_s_u(g_148[6], 0))) < p_20))), l_617)), p_19)) || l_594), p_20)) & l_617)) == g_64) | l_532))) , l_617) & p_17)) <= g_401) , l_532) <= g_223[0][3][1]), g_223[0][1][1])), p_18)) , 0xD160FA78) & g_148[6])))), p_18)) || 4);
        p_17 = (+(((g_223[1][3][6] || 1) != l_449) || (safe_mod_func_int8_t_s_s(((safe_sub_func_uint8_t_u_u((((((safe_mod_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u(((((((safe_sub_func_uint32_t_u_u(l_617, (l_471 & 4294967295U))) , (g_21 < g_149[5])) || (~(safe_div_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s((safe_add_func_uint32_t_u_u(((((safe_sub_func_uint8_t_u_u((1 | l_531), l_532)) != p_18) == 0x0B8F) > l_617), g_223[1][0][4])), 7)), 0x136FE55A)))) < p_17) ^ g_223[0][3][1]) ^ g_64), l_638)), g_223[0][1][7])) || g_223[0][3][1]) , 0x1506C4F2) < 1U) & l_471), 0x10)) <= (-3)), l_617))));
    }
    return g_21;
}
static uint8_t func_25(int8_t p_26, int32_t p_27, uint16_t p_28)
{
    uint32_t l_29 = 0xDA7209C3;
lbl_376:
    l_29--;
    for (g_21 = 0; (g_21 <= 52); ++g_21)
    {
        for (p_28 = (-23); (p_28 <= 28); p_28 = safe_add_func_int16_t_s_s(p_28, 8))
        {
            int16_t l_254 = 0x9FD3;
            int32_t l_375 = 0x3544DA8E;
            l_375 ^= func_36(((((+(safe_mul_func_uint8_t_u_u((safe_div_func_int32_t_s_s(g_21, g_21)), func_46((safe_add_func_uint32_t_u_u((func_52((((safe_add_func_uint8_t_u_u((func_59(p_26) >= (((safe_sub_func_int32_t_s_s((safe_lshift_func_int16_t_s_u(g_148[6], p_27)), (p_26 > ((safe_mod_func_uint32_t_u_u(g_148[6], (+(safe_rshift_func_int16_t_s_u((safe_add_func_int32_t_s_s((0U <= 9), 4294967292U)), 5))))) ^ 0x7A)))) && l_254) & g_148[1])), 3)) < p_28) , g_223[1][3][2]), g_148[6], p_27, l_254) || p_28), g_148[6])), p_27, l_29)))) < 0xE9594678) < 0xA916) & l_29), l_254, g_148[5], p_28);
            if (l_254)
                goto lbl_376;
        }
    }
    return g_148[6];
}
inline static int32_t func_36(int32_t p_37, uint32_t p_38, uint16_t p_39, uint8_t p_40)
{
    uint32_t l_302 = 4U;
    int32_t l_306 = (-6);
    int32_t l_372[6] = {9,0x38CF908F,9,9,0x38CF908F,9};
    int32_t l_373 = (-1);
    uint32_t l_374 = 4294967295U;
    int i;
    for (p_38 = 0; (p_38 <= 1); p_38 += 1)
    {
        int16_t l_305[2];
        int i;
        for (i = 0; i < 2; i++)
            l_305[i] = 1;
        if (g_149[p_38])
        {
            int i;
            l_306 = ((safe_div_func_uint32_t_u_u(0x27A70E27, (g_148[(p_38 + 3)] , (safe_rshift_func_int16_t_s_u((safe_unary_minus_func_int32_t_s(((((safe_sub_func_uint32_t_u_u((((safe_add_func_uint16_t_u_u((((safe_mul_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((safe_mul_func_int8_t_s_s((safe_div_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u((((safe_rshift_func_int16_t_s_s(((((safe_sub_func_int8_t_s_s((!((safe_div_func_int8_t_s_s(((((safe_add_func_uint8_t_u_u((!0x41E6), 1)) | (((g_148[(p_38 + 2)] & (safe_sub_func_int32_t_s_s((l_302 || 0xE9C7), ((p_37 < (((safe_mul_func_uint16_t_u_u(g_64, p_38)) , p_39) , p_38)) & p_39)))) , p_39) >= g_223[0][3][1])) > 4U) | p_39), 0x71)) , p_37)), g_148[6])) & p_38) & g_148[(p_38 + 2)]) != 0x45), 14)) >= g_149[p_38]) ^ g_223[0][3][1]), 5)), 1U)), g_149[p_38])), p_39)), g_149[p_38])) ^ 0x93) <= p_40), g_148[6])) || 0U) , p_38), 1)) != g_223[0][1][0]) && p_38) || l_305[0]))), p_38))))) & p_39);
            if (g_223[0][3][1])
                break;
        }
        else
        {
            return g_21;
        }
        for (l_306 = 5; (l_306 >= 0); l_306 -= 1)
        {
            uint8_t l_311 = 0xA7;
            uint32_t l_328 = 1U;
            p_37 = (((safe_add_func_int16_t_s_s(((safe_add_func_uint16_t_u_u((1 < ((((((((l_311 , (((safe_unary_minus_func_uint16_t_u(p_38)) >= (safe_lshift_func_int8_t_s_u((~(safe_rshift_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(((safe_add_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(((((((safe_sub_func_uint32_t_u_u(p_38, ((p_38 & (0U & (safe_sub_func_int32_t_s_s(l_328, (safe_mod_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(l_305[0], p_39)), p_38)))))) , 0xEE98ABC2))) ^ l_328) || p_38) >= l_311) <= g_223[0][3][1]) | g_149[5]), l_302)), 1)) , p_38), p_37)), 7))), 7))) == g_64)) , p_38) & 0xB46675EF) && g_223[0][1][6]) >= l_305[0]) != g_149[1]) , 0x442EEB04) ^ p_40)), g_148[7])) , l_311), p_40)) , 0xFED9) <= 0x8C47);
            for (l_302 = 2; (l_302 <= 7); l_302 += 1)
            {
                int i, j, k;
                p_37 ^= ((((((safe_sub_func_int32_t_s_s(g_223[p_38][(p_38 + 2)][p_38], 0xBBFA448F)) >= (safe_add_func_int32_t_s_s(g_223[p_38][p_38][(p_38 + 1)], (+((safe_sub_func_uint8_t_u_u(251U, 0x59)) > l_305[0]))))) & (l_302 > l_305[0])) <= (p_40 & g_148[6])) | l_328) , p_38);
                g_149[p_38] &= (p_37 != (g_223[p_38][(p_38 + 2)][p_38] , p_38));
                return g_148[6];
            }
        }
    }
    l_306 = (safe_mul_func_int16_t_s_s((((safe_div_func_uint8_t_u_u((((safe_rshift_func_uint16_t_u_u(0x8132, 2)) , (g_223[1][3][0] != p_38)) && (l_302 | ((safe_lshift_func_uint16_t_u_s(((safe_mod_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u((((((safe_add_func_int8_t_s_s(l_302, (((l_302 && (safe_rshift_func_uint8_t_u_u((safe_div_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u((0x6EAB ^ ((safe_sub_func_uint8_t_u_u((safe_div_func_uint32_t_u_u((safe_sub_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(g_21, (safe_lshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u((((((((g_148[6] != p_40) > p_40) >= 0) >= l_302) >= 0x73) , l_372[0]) == 0xB9), 11)), 10)))), 0x9DA6)), g_21)), l_372[5])) > l_373)), p_38)), g_149[5])), 0))) , 0xF78231FD) != 0xBC5EB3F9))) <= g_149[5]) < l_374) & 0x12) ^ (-5)), (-6))), l_302)) && p_39), 15)) , l_374))), 248U)) > g_148[7]) , p_40), 65526U));
    return l_373;
}
static uint8_t func_46(uint32_t p_47, int32_t p_48, int32_t p_49)
{
    int8_t l_269 = 0xAA;
    uint16_t l_270 = 0xAC3F;
    p_49 = (safe_div_func_int16_t_s_s(((g_223[0][1][0] , (p_47 <= (g_149[5] < ((safe_rshift_func_int16_t_s_u(0, (((g_149[5] != (safe_lshift_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_u(0x52, 0)) | ((safe_sub_func_int8_t_s_s(g_148[4], ((safe_mod_func_int16_t_s_s((g_149[4] , g_21), l_269)) > l_269))) && l_270)), l_270))) > l_270) <= 7U))) | l_269)))) ^ 0x71), l_270));
    return p_49;
}
inline static int32_t func_52(int8_t p_53, int8_t p_54, uint8_t p_55, int32_t p_56)
{
    return g_223[0][3][7];
}
static uint16_t func_59(uint32_t p_60)
{
    int8_t l_63 = (-7);
    uint8_t l_237 = 250U;
    int32_t l_242[10] = {(-1),(-1),(-1),(-1),(-1),(-1),(-1),(-1),(-1),(-1)};
    int i;
    for (p_60 = 0; (p_60 >= 59); p_60 = safe_add_func_uint16_t_u_u(p_60, 7))
    {
        uint8_t l_65 = 0x40;
        g_64 &= l_63;
        if (g_64)
        {
            return g_64;
        }
        else
        {
            l_65 = g_64;
            return g_21;
        }
    }
    l_242[1] = ((safe_lshift_func_int16_t_s_s((((safe_sub_func_uint8_t_u_u(((func_70(g_21, func_73((safe_rshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(l_63, 5)), 6)))) , (safe_mul_func_int8_t_s_s(((safe_mod_func_int8_t_s_s(0, l_237)) , 0x15), (safe_div_func_int32_t_s_s((l_63 && ((((((l_237 , 4) <= 0xF77F) , l_237) & 0x7B09) < g_64) , 0)), l_63))))) != l_237), p_60)) != 255U) >= g_21), 5)) != 5);
    return g_148[3];
}
static uint32_t func_70(uint32_t p_71, int32_t p_72)
{
    uint16_t l_232 = 0x0422;
    g_149[5] |= p_72;
    return l_232;
}
inline static int32_t func_73(int32_t p_74)
{
    uint32_t l_79[4][8] = {{4294967290U,0xDCBD5F5A,0x784865E5,4294967295U,4294967295U,0x784865E5,0xDCBD5F5A,4294967290U},{0xDCBD5F5A,0x104E0BBE,4294967290U,0x45C545F0,4294967290U,0x104E0BBE,0xDCBD5F5A,0xDCBD5F5A},{0x104E0BBE,0x45C545F0,0x784865E5,0x784865E5,0x45C545F0,0x104E0BBE,4294967295U,0x104E0BBE},{0x45C545F0,0x104E0BBE,4294967295U,0x104E0BBE,0x45C545F0,0x784865E5,0x784865E5,0x45C545F0}};
    int32_t l_80 = 0x9FF1DB06;
    int16_t l_147 = (-10);
    int32_t l_184[4] = {0x69DADA64,0x69DADA64,0x69DADA64,0x69DADA64};
    int32_t l_222 = 0x38398E1D;
    int i, j;
lbl_183:
    l_80 |= (p_74 < (l_79[3][7] >= l_79[1][3]));
    if ((safe_div_func_uint8_t_u_u(((safe_add_func_uint8_t_u_u(1U, (((((g_21 | (safe_sub_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((g_64 & ((safe_lshift_func_int16_t_s_s(((((((safe_mod_func_uint16_t_u_u((g_64 && (safe_mod_func_uint16_t_u_u((((((((safe_div_func_int8_t_s_s(((safe_sub_func_int8_t_s_s((safe_sub_func_int8_t_s_s((safe_mul_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_s(l_79[3][7], l_79[3][7])), (g_64 | g_64))), (0xF4 < 1U))), g_64)), g_21)) != l_79[3][7]), 0xA4)) <= (-1)) < 0xC1BB) < 0) <= l_79[3][7]) < p_74) & p_74), p_74))), g_21)) != g_21) ^ l_79[1][3]) && 0x8636) & 0x47) >= g_21), p_74)) && l_79[3][7])), l_79[0][6])), g_64))) > l_79[0][1]) | 9U) ^ p_74) & g_21))) != 1U), 0xEB)))
    {
        uint32_t l_130 = 4294967287U;
        uint32_t l_150 = 0x0FED7273;
        int32_t l_186 = 0x730F596B;
        int32_t l_187 = 0;
        int32_t l_192[2];
        uint16_t l_196[5][10][5] = {{{0xEBF1,1U,3U,65535U,0xB377},{0U,0U,0x3951,0x61AE,2U},{3U,0x5D01,3U,0xB377,0x79D1},{0xED63,0xCF23,0x3951,1U,1U},{3U,0x3C2A,3U,0x335B,65535U},{0xA22E,0x48C2,0x3951,0U,1U},{0x2447,7U,3U,0x79D1,0x335B},{65530U,0U,0x3951,1U,0x61AE},{0U,0xA2D5,3U,0x4419,0x4419},{0x3951,65526U,0x3951,2U,0U}},{{0xEBF1,1U,3U,65535U,0xB377},{0U,0U,0x3951,0x61AE,2U},{3U,0x5D01,3U,0xB377,0x79D1},{0xED63,0xCF23,0x3951,1U,1U},{3U,0x3C2A,3U,0x335B,65535U},{0xA22E,0x48C2,0x3951,0U,1U},{0x2447,7U,3U,0x79D1,0x335B},{65530U,0U,0x3951,1U,0x61AE},{0U,0x47BC,0xD29D,3U,3U},{0U,0U,0U,0U,0xED63}},{{0xFBD2,65535U,0xD29D,0U,3U},{0x0E28,1U,0U,0xA22E,0U},{1U,0U,0xD29D,3U,0xEBF1},{0x5807,0x31A3,0U,0x3951,0x3951},{0xD29D,65526U,0xD29D,0x2447,0U},{0xE3D7,0x1E94,0U,0xED63,65530U},{0xE1C4,0U,0xD29D,0xEBF1,0x2447},{0x5373,65535U,0U,65530U,0xA22E},{4U,0x47BC,0xD29D,3U,3U},{0U,0U,0U,0U,0xED63}},{{0xFBD2,65535U,0xD29D,0U,3U},{0x0E28,1U,0U,0xA22E,0U},{1U,0U,0xD29D,3U,0xEBF1},{0x5807,0x31A3,0U,0x3951,0x3951},{0xD29D,65526U,0xD29D,0x2447,0U},{0xE3D7,0x1E94,0U,0xED63,65530U},{0xE1C4,0U,0xD29D,0xEBF1,0x2447},{0x5373,65535U,0U,65530U,0xA22E},{4U,0x47BC,0xD29D,3U,3U},{0U,0U,0U,0U,0xED63}},{{0xFBD2,65535U,0xD29D,0U,3U},{0x0E28,1U,0U,0xA22E,0U},{1U,0U,0xD29D,3U,0xEBF1},{0x5807,0x31A3,0U,0x3951,0x3951},{0xD29D,65526U,0xD29D,0x2447,0U},{0xE3D7,0x1E94,0U,0xED63,65530U},{0xE1C4,0U,0xD29D,0xEBF1,0x2447},{0x5373,65535U,0U,65530U,0xA22E},{4U,0x47BC,0xD29D,3U,3U},{0U,0U,0U,0U,0xED63}}};
        int8_t l_201[2];
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_192[i] = 0x2DC6FEDB;
        for (i = 0; i < 2; i++)
            l_201[i] = (-2);
        if (((((safe_div_func_int16_t_s_s((((safe_lshift_func_uint8_t_u_u(((((p_74 > ((((safe_rshift_func_uint16_t_u_s((((safe_div_func_int16_t_s_s((safe_mul_func_int8_t_s_s((+p_74), (safe_mod_func_int16_t_s_s(0xC214, (65530U | ((safe_mul_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(((safe_sub_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s(l_130, (safe_lshift_func_uint16_t_u_s((safe_div_func_int32_t_s_s((((safe_mul_func_int8_t_s_s((safe_div_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(((safe_add_func_uint8_t_u_u(p_74, (safe_sub_func_int8_t_s_s(g_64, (((((3U && (((safe_add_func_int32_t_s_s(((0x28 < 0xCD) & 0x0F), 0U)) ^ 0xDA5F02B5) <= 0xF4)) >= p_74) , p_74) > g_64) | (-1)))))) == l_147), g_148[6])), l_130)), g_148[6])) ^ l_130) , l_79[3][7]), g_149[5])), l_130)))) ^ l_80), (-5))) , 8U), p_74)), g_21)) >= g_149[3])))))), 65531U)) | 0xCEF6A3D7) == p_74), g_64)) > p_74) != p_74) , g_21)) , g_148[6]) , 0x8E) <= 4U), l_147)) | l_150) == p_74), g_148[6])) , l_80) | p_74) == p_74))
        {
            int32_t l_181 = 0x125E79E5;
            int32_t l_182 = 0xDBC48275;
            int16_t l_185[1];
            int32_t l_188 = 1;
            int32_t l_189 = 0x1578ADDD;
            int32_t l_190 = 0x5CA0C00B;
            int8_t l_191 = (-2);
            int32_t l_193 = (-1);
            int32_t l_194[8] = {2,0x82148F47,0x82148F47,2,0x82148F47,0x82148F47,2,0x82148F47};
            int32_t l_195[3];
            int i;
            for (i = 0; i < 1; i++)
                l_185[i] = 0;
            for (i = 0; i < 3; i++)
                l_195[i] = (-6);
            g_149[5] = p_74;
            l_182 = (safe_add_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((((safe_div_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((safe_lshift_func_int16_t_s_u(((safe_add_func_int16_t_s_s(g_149[2], 0xCAA3)) & (safe_sub_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s(((((((l_150 > ((safe_sub_func_uint16_t_u_u(l_130, (0x7B5E < (safe_sub_func_int16_t_s_s((safe_mul_func_int8_t_s_s((safe_mod_func_int32_t_s_s(((((safe_add_func_uint32_t_u_u((((((p_74 < p_74) >= (g_149[5] != (safe_sub_func_uint16_t_u_u(p_74, l_130)))) , p_74) >= l_80) | p_74), p_74)) , g_148[6]) && 252U) ^ l_147), l_79[0][5])), l_150)), g_64))))) <= 6U)) ^ (-7)) | 0x8DD8) > 4294967293U) && g_149[5]) < g_64), p_74)) && p_74), g_148[6]))), p_74)), g_148[1])), l_130)) != l_80) != l_181), p_74)), p_74)), 0x6ADFC38D));
            if (l_147)
                goto lbl_183;
            --l_196[0][3][1];
        }
        else
        {
            uint32_t l_221 = 8U;
            g_223[0][3][1] |= ((safe_mod_func_uint8_t_u_u(l_201[1], (safe_sub_func_int32_t_s_s((g_149[0] , (g_64 != ((safe_rshift_func_uint8_t_u_u((((0x138454CA <= (safe_add_func_uint32_t_u_u(p_74, 0x93DA9AB6))) != (((g_149[5] | (safe_lshift_func_uint16_t_u_s((l_150 < ((safe_div_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s((safe_mod_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((!(((safe_mod_func_uint16_t_u_u(l_221, 65535U)) || l_221) , g_149[5])), 0)), g_148[6])), l_222)) && 2U), p_74)) & g_64)), 2))) <= 0x3E9D) , p_74)) >= g_148[4]), 5)) < 1))), p_74)))) || 0U);
        }
        l_192[0] = (~(safe_sub_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((g_148[6] != l_80), p_74)), l_79[3][7])));
    }
    else
    {
        uint32_t l_229 = 0x381652B8;
        l_229++;
        g_149[5] = l_229;
    }
    return p_74;
}
int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_21;
    csmith_sink_ = g_64;
    for (i = 0; i < 8; i++)
    {
        csmith_sink_ = g_148[i];
    }
    for (i = 0; i < 6; i++)
    {
        csmith_sink_ = g_149[i];
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 9; k++)
            {
                csmith_sink_ = g_223[i][j][k];
            }
        }
    }
    csmith_sink_ = g_401;
    csmith_sink_ = g_474;
    csmith_sink_ = g_555;
    platform_main_end(0,0);
    return 0;
}
