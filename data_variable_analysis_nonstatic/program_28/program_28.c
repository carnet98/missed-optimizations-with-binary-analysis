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
   uint32_t f0;
   uint32_t f1;
   int32_t f2;
   uint16_t f3;
   uint16_t f4;
   uint32_t f5;
   uint16_t f6;
};
struct S1 {
   signed f0 : 11;
   int32_t f1;
   signed f2 : 14;
   uint32_t f3;
   signed f4 : 11;
   unsigned f5 : 10;
   unsigned f6 : 14;
};
struct S2 {
   signed f0 : 13;
   signed f1 : 16;
   signed f2 : 5;
   int32_t f3;
   unsigned f4 : 15;
   unsigned f5 : 14;
   unsigned f6 : 7;
};
static uint32_t g_5 = 0xA1245C81;
static struct S2 g_15 = {80,-77,-1,-1,24,5,1};
static struct S0 g_16 = {4294967289U,0U,0xFAA9634D,0x1B36,0x9384,4294967288U,5U};
static struct S1 g_17 = {-12,8,9,0U,38,12,54};
static struct S2 g_53 = {-24,216,-4,1,147,105,8};
static uint32_t g_116 = 0U;
static struct S1 g_134 = {33,0x3E7769F7,48,4294967295U,-23,27,3};
static int16_t g_141 = 0x0C18;
static uint16_t g_152 = 0x61BC;
static struct S2 g_167 = {-58,-49,-3,0x4C53010F,170,99,10};
static uint16_t g_183 = 0x25EB;
static uint32_t g_205 = 4294967295U;
static uint16_t g_234 = 65527U;
static uint32_t g_236 = 0x815FF81F;
static uint16_t g_269 = 2U;
static int16_t g_346 = 0x2017;
static struct S0 g_395 = {5U,8U,0xF1BEE13F,0x9918,1U,0U,4U};
static uint8_t g_404 = 0xD7;
static int32_t g_419 = 0;
static struct S2 g_451 = {69,196,1,1,25,83,2};
static int8_t g_505 = 0xB5;
static int32_t g_531 = 0x4D87CB01;
static uint32_t g_576 = 0x68F9C57D;
static int8_t g_577 = 2;
static int8_t g_623 = 0xD0;
static uint16_t g_624 = 0xEC56;
static uint32_t g_683 = 0x3F41D85E;
static int32_t g_748 = 1;
static int32_t g_765 = (-7);
static uint32_t func_1(void);
static int32_t func_2(int8_t p_3, uint8_t p_4);
static int32_t func_6(uint32_t p_7);
static uint32_t func_8(uint32_t p_9, struct S2 p_10, struct S0 p_11, struct S1 p_12, struct S2 p_13);
static int32_t func_20(int8_t p_21, uint16_t p_22, uint16_t p_23);
static int8_t func_24(struct S0 p_25);
static int32_t func_33(int8_t p_34, uint32_t p_35, int32_t p_36);
static int32_t func_41(uint32_t p_42, int32_t p_43, uint32_t p_44);
static int16_t func_48(struct S2 p_49, int16_t p_50, int8_t p_51, uint8_t p_52);
static uint32_t func_62(uint32_t p_63, struct S2 p_64, int8_t p_65);
static uint32_t func_1(void)
{
    uint8_t l_14 = 0x27;
    int32_t l_457 = 0x4EB9D772;
    int32_t l_786 = 0x4410A1AE;
    int32_t l_787 = 0x6BCDC86E;
    uint8_t l_808 = 0x57;
    int16_t l_809 = 0xA703;
    l_787 = ((l_786 = (func_2(g_5, ((l_457 = func_6(func_8(l_14, g_15, g_16, g_17, g_15))) == (((safe_mod_func_uint8_t_u_u(l_14, g_16.f1)) & g_451.f3) ^ g_16.f5))) == g_451.f2)) != l_14);
    g_134.f1 = (safe_rshift_func_int16_t_s_u((safe_add_func_uint16_t_u_u(((g_395.f3 = g_134.f2) >= ((g_16.f4 = ((((safe_mod_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_s((g_53.f2 || (1U <= ((safe_sub_func_int8_t_s_s(((safe_rshift_func_int16_t_s_s((((((safe_sub_func_int32_t_s_s((0xEDCD >= (g_624 == (l_457 & ((safe_unary_minus_func_uint8_t_u((l_808 = ((0x29 <= (((~((((g_16.f3 = (65535U | ((safe_mod_func_uint32_t_u_u((safe_add_func_int16_t_s_s(g_17.f4, g_419)), l_786)) == l_457))) >= g_505) && 0x6F) < g_395.f1)) > 0x84) | l_14)) & g_15.f1)))) != g_395.f1)))), 0x300DF225)) > 0x60DB) ^ 0xD1FD75FA) || l_457) && 0x3927), 9)) != 0x3D7F0CE9), g_451.f5)) && g_419))), l_457)) > g_53.f5), l_457)) != g_134.f0) < l_809) > l_14)) != g_395.f4)), g_17.f1)), g_134.f0));
    return g_53.f1;
}
static int32_t func_2(int8_t p_3, uint8_t p_4)
{
    uint8_t l_467 = 0x43;
    int32_t l_478 = (-10);
    int32_t l_524 = 0;
    uint32_t l_622 = 0x20FA5E4E;
    int32_t l_681 = 1;
    uint32_t l_698 = 0x8A15FD45;
    struct S0 l_702 = {0x0F6B0341,0U,0,0U,0xB882,0x1216FB59,0xF330};
    int32_t l_725 = (-10);
    if ((+(safe_sub_func_int16_t_s_s(((safe_rshift_func_int8_t_s_s((g_15.f1 >= (p_3 && (safe_lshift_func_uint8_t_u_s(((((0x19 & (l_467 = g_134.f0)) && ((((g_134.f0 = (safe_add_func_uint32_t_u_u((g_451.f4 = 4294967295U), 0x4086E0A7))) ^ (safe_sub_func_int32_t_s_s((safe_sub_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(4U, l_467)), (((l_478 = (0xB80001A5 || g_17.f3)) && g_53.f0) >= (-7)))), 5U)), g_167.f6))) ^ g_451.f5) != p_3)) != (-1)) && g_53.f3), g_395.f6)))), 0)) || l_478), p_3))))
    {
        uint8_t l_481 = 6U;
        int32_t l_503 = 0xCC247009;
        int16_t l_504 = 8;
        int32_t l_506 = 0x7E14A855;
        int32_t l_507 = 0xA11640FA;
        g_134 = g_134;
        l_507 = (safe_add_func_int8_t_s_s(((l_481 = g_167.f5) <= (safe_sub_func_int16_t_s_s((0xBE ^ g_346), ((0xB0764945 >= (safe_mod_func_uint32_t_u_u(((safe_sub_func_int32_t_s_s((l_478 = (safe_mod_func_int8_t_s_s((l_506 = (safe_lshift_func_int8_t_s_u((p_3 = (((safe_sub_func_uint8_t_u_u((0xBD1D >= ((+(safe_sub_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_s(((safe_rshift_func_int16_t_s_s((safe_add_func_int32_t_s_s(p_3, (((((l_503 = ((p_3 ^ p_3) ^ (0x5E551F96 <= 0))) & 0xEDC70967) == l_504) == 4) >= 1U))), g_16.f6)) >= 5), 14)) && g_395.f2), 65535U))) >= g_134.f6)), 7)) & g_505) && l_504)), 2))), l_467))), l_504)) != 1), g_395.f1))) < p_4)))), g_451.f5));
    }
    else
    {
        g_134 = g_17;
    }
    if (p_3)
    {
        int32_t l_523 = (-1);
        int32_t l_527 = 0xB5D03B61;
        int32_t l_528 = 1;
        uint8_t l_578 = 0xF9;
        uint32_t l_682 = 1U;
        struct S0 l_703 = {3U,0xCB890483,0xBA4B0EAF,1U,0x12A4,0x669F8B11,0x8739};
        if (((safe_sub_func_uint16_t_u_u((p_4 >= ((safe_mod_func_uint8_t_u_u((g_404 = (4294967292U == ((safe_add_func_uint32_t_u_u(4294967287U, (((l_528 = ((safe_add_func_uint8_t_u_u(g_116, ((((safe_add_func_uint32_t_u_u(l_467, (l_527 = (safe_mod_func_uint16_t_u_u(((safe_add_func_uint8_t_u_u((l_478 = (((!(((l_523 = l_478) <= 0x94) == (((l_524 = g_234) <= (safe_add_func_int32_t_s_s((p_3 >= 65533U), g_205))) == l_467))) > l_527) < g_16.f6)), l_467)) || l_527), p_3))))) & p_4) && 0x0FC89685) <= 0x43))) && l_527)) != g_395.f6) >= 8))) <= p_4))), p_4)) & 8U)), g_16.f5)) != 0xE70388B1))
        {
            uint32_t l_533 = 0x9D4D636A;
            int8_t l_591 = 0x6D;
            int32_t l_598 = 0xC60C17DE;
            uint32_t l_599 = 0x80AA3E34;
            g_53.f1 = l_524;
            if (((l_533 = (safe_sub_func_uint32_t_u_u(((g_167.f1 = (g_531 || 8)) ^ (((l_528 = (~p_3)) && 0x0052) < (g_234 = (l_523 = p_4)))), (p_3 != (g_16.f4 > g_451.f1))))) && (safe_lshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_u(((safe_mod_func_int8_t_s_s((l_533 > l_528), g_451.f4)) | p_4), 2)), 7))))
            {
                uint16_t l_560 = 65535U;
                int32_t l_562 = (-1);
                for (g_505 = 25; (g_505 >= 9); g_505 = safe_sub_func_uint8_t_u_u(g_505, 1))
                {
                    uint16_t l_556 = 65532U;
                    int32_t l_561 = (-1);
                    uint16_t l_600 = 6U;
                    l_528 = g_269;
                    l_478 = ((((safe_sub_func_uint8_t_u_u(((-10) | (((l_562 = ((((g_15.f6 <= ((!(0x83 > g_15.f3)) ^ ((safe_mod_func_int16_t_s_s((((safe_rshift_func_int8_t_s_u((+(l_561 = (safe_sub_func_int32_t_s_s((0xC2 <= (safe_lshift_func_uint8_t_u_u((g_167.f1 && (l_556 >= (~(g_16.f0 = 0xD68A6137)))), 4))), (g_451.f4 = (((safe_mod_func_int16_t_s_s((g_505 && p_3), l_533)) <= l_560) >= l_533)))))), 3)) && g_16.f6) || 251U), 0xC6A3)) != g_134.f6))) < 1U) == l_560) & p_3)) <= 65534U) > g_15.f2)), 0U)) | l_556) & p_3) >= l_533);
                    if (l_533)
                        continue;
                    if ((l_527 = p_3))
                    {
                        uint32_t l_575 = 0x29DA7EAE;
                        int32_t l_579 = (-2);
                        l_579 = ((safe_rshift_func_int16_t_s_s((safe_sub_func_int8_t_s_s(g_269, (g_577 = (g_576 = (g_141 && (safe_rshift_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(l_523, ((safe_mod_func_int16_t_s_s(l_467, (safe_mod_func_int32_t_s_s(l_560, g_395.f4)))) & (((((((l_575 & p_3) == 0U) <= g_346) || p_4) >= 0x0FEA67AB) > l_527) < p_4)))), l_528))))))), l_578)) != 0x94);
                    }
                    else
                    {
                        g_167.f2 = (g_531 > (((((safe_rshift_func_uint16_t_u_s(((p_3 != ((safe_mod_func_uint32_t_u_u(((safe_add_func_int8_t_s_s(((safe_rshift_func_int16_t_s_u((0xDA7A >= g_15.f3), 8)) && g_234), ((safe_lshift_func_int8_t_s_s(((safe_unary_minus_func_int32_t_s((l_591 = 0x978B0F99))) >= (safe_mod_func_uint32_t_u_u((l_562 < (safe_sub_func_uint16_t_u_u((247U > (((safe_rshift_func_int8_t_s_s((g_577 = (l_598 = g_152)), l_528)) == g_236) ^ 3)), l_599))), l_600))), g_53.f6)) == l_528))) || 254U), p_4)) || p_3)) > g_17.f5), 0)) & p_3) ^ l_578) < g_419) | l_561));
                        g_531 = ((g_346 = (safe_rshift_func_int8_t_s_s((~(g_167.f0 = ((g_134.f0 = (l_561 = (p_4 <= (((safe_sub_func_int16_t_s_s((g_141 = (safe_mod_func_uint8_t_u_u(((g_141 || ((-10) && (((safe_rshift_func_uint8_t_u_s((safe_add_func_int32_t_s_s(p_4, 0)), ((safe_rshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_u((safe_sub_func_int8_t_s_s(g_576, (safe_mod_func_int8_t_s_s(((((safe_rshift_func_int16_t_s_u((l_598 = p_4), 6)) & 0x74) <= 1) != p_4), g_134.f0)))), 4)), l_523)) != 0xDA42))) == g_53.f6) && l_562))) && p_3), l_622))), 0x8CE9)) >= 0xCD50) | g_623)))) > p_4))), g_624))) == 0U);
                    }
                }
            }
            else
            {
                uint32_t l_648 = 4294967295U;
                l_528 = ((safe_lshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(0x62, ((p_3 ^ (l_523 = ((safe_unary_minus_func_int16_t_s((safe_sub_func_int16_t_s_s(((((safe_mod_func_uint8_t_u_u((0x56DD != (safe_sub_func_uint8_t_u_u((g_404 = ((((+(l_599 >= ((safe_lshift_func_uint8_t_u_s((p_3 == (safe_lshift_func_int8_t_s_s((l_527 = (!0x888EDC37)), 4))), p_3)) == ((-10) == ((safe_mod_func_uint16_t_u_u((safe_add_func_int8_t_s_s(p_4, l_528)), l_528)) != 0x942B34D4))))) >= l_648) <= g_234) < (-1))), 0x3C))), g_505)) & p_4) | l_622) <= 4294967287U), g_134.f2)))) < p_4))) == l_524))), 0)) > 0xE0336BB6);
                l_478 = (safe_lshift_func_int8_t_s_s(l_578, (0xDBB3 & (safe_lshift_func_uint16_t_u_u(((safe_mod_func_uint16_t_u_u(g_451.f3, g_17.f0)) >= l_524), (safe_mod_func_uint8_t_u_u((p_3 || (!((g_624 || 1U) ^ (p_4 = (safe_add_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(((((safe_lshift_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_s((safe_add_func_uint16_t_u_u(g_15.f4, 0xE3FA)), g_15.f2)) ^ g_53.f0), l_622)) | g_167.f5) <= 0xA586DC91) > p_4), 2)), p_4)))))), 1)))))));
                g_419 = (((1 && (((((safe_sub_func_int8_t_s_s(l_622, 0x71)) | (safe_rshift_func_uint16_t_u_s((safe_mod_func_int16_t_s_s(((0x20BC < l_598) == ((((safe_add_func_int8_t_s_s((((1U == (g_53.f2 = (safe_add_func_uint16_t_u_u(4U, (((g_683 = ((g_152 = ((((p_4 = ((((+((4294967291U >= ((((safe_add_func_uint8_t_u_u(g_16.f3, l_578)) || 0x4F) >= g_167.f4) || g_53.f3)) && g_505)) >= 0x8FC6) && p_4) < 0xDE)) | l_681) ^ (-9)) ^ l_682)) | 65535U)) >= 1U) < l_648))))) && 0x1713) ^ 0), g_15.f4)) ^ 0x35) >= l_527) | p_3)), p_3)), l_578))) | p_3) < (-1)) != 65528U)) > g_16.f6) != g_451.f6);
                g_134.f1 = 0xA26BFECB;
            }
            l_524 = (((g_15.f4 >= 0x76) >= g_116) >= p_3);
        }
        else
        {
            int8_t l_695 = 0x38;
            int32_t l_699 = 0x5F4F100E;
            l_699 = ((g_16.f3 && g_16.f3) >= ((p_3 = (safe_add_func_uint8_t_u_u((+0xCA), ((l_527 != (g_531 < (safe_rshift_func_uint16_t_u_s((safe_add_func_int16_t_s_s((0 || (-1)), (((safe_lshift_func_uint16_t_u_u(((l_681 = ((safe_lshift_func_uint16_t_u_u(l_695, 12)) >= ((safe_lshift_func_uint16_t_u_u(((l_478 = (0x54 && 0x49)) < 8U), g_15.f1)) <= l_524))) <= g_451.f3), 8)) && l_698) <= 0))), p_3)))) < l_682)))) == p_4));
            for (g_576 = 0; (g_576 > 58); g_576++)
            {
                l_702 = (g_16 = (l_703 = l_702));
            }
        }
        l_725 = (safe_lshift_func_int16_t_s_u(((l_524 = (safe_sub_func_uint8_t_u_u(((l_681 = (safe_add_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(g_17.f1, g_15.f0)), (safe_unary_minus_func_int16_t_s(p_3))))) ^ 1U), ((safe_add_func_int8_t_s_s((l_478 = (((safe_lshift_func_uint8_t_u_s((safe_mod_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s((((g_404 = (((safe_sub_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u((0x7F && ((((p_4 < p_4) >= (((g_167.f3 < g_116) < l_703.f4) & p_3)) || 0xA2AB) ^ g_134.f1)), 7)), p_3)) >= p_4) || l_702.f2)) & 1) > p_3), g_5)), g_53.f4)), g_576)) < 0xC789) ^ 0)), l_702.f4)) <= l_527)))) >= 0x96), l_702.f5));
        g_53.f2 = (-6);
    }
    else
    {
        int16_t l_734 = 0x4B1D;
        int32_t l_745 = 7;
        for (g_395.f5 = 0; (g_395.f5 >= 16); g_395.f5 = safe_add_func_int16_t_s_s(g_395.f5, 3))
        {
            int32_t l_744 = 0;
            int32_t l_766 = 8;
            for (g_624 = 0; (g_624 > 56); g_624 = safe_add_func_uint8_t_u_u(g_624, 1))
            {
                if (((-6) ^ ((((((((((safe_add_func_uint32_t_u_u(l_702.f2, ((((0xAB7B < (0x81 > (p_3 = (l_745 = ((((p_3 < (l_734 = l_702.f2)) < (safe_add_func_int16_t_s_s(((((p_4 == (safe_mod_func_uint32_t_u_u((safe_add_func_int8_t_s_s(((safe_add_func_int32_t_s_s((p_4 <= (~0x78CFF22F)), 0x58EB3C0C)) | g_451.f0), 0x8A)), g_16.f2))) ^ l_744) == p_3) < (-7)), 0xC7BF))) == g_451.f0) <= l_702.f1))))) > p_4) < 0xBB1D7C1D) | l_524))) <= g_152) < p_4) ^ l_702.f3) ^ p_4) && g_152) < 0x45D0) | 0x7633464F) != g_683) ^ g_395.f4)))
                {
                    uint32_t l_746 = 4294967290U;
                    return l_746;
                }
                else
                {
                    uint32_t l_747 = 0xE0414D9A;
                    l_747 = g_53.f0;
                }
                l_681 = l_702.f4;
            }
            g_748 = l_744;
            g_167.f0 = (safe_rshift_func_int8_t_s_s((safe_sub_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_s((l_744 & l_524), 7)) & (g_53.f1 = (safe_add_func_int8_t_s_s((safe_sub_func_int8_t_s_s((l_745 >= ((safe_lshift_func_uint16_t_u_u(p_3, (safe_sub_func_int8_t_s_s(((!((g_346 = (g_134.f1 | (!g_17.f1))) || (l_766 = ((g_765 | p_3) || g_167.f0)))) | g_531), g_419)))) != l_698)), p_3)), 1)))), p_4)), 6));
        }
    }
    for (g_395.f6 = 0; (g_395.f6 != 57); g_395.f6++)
    {
        int32_t l_784 = (-7);
        int32_t l_785 = 0xFE221F97;
        l_785 = (p_3 || (safe_rshift_func_int16_t_s_s((l_725 = (safe_mod_func_int32_t_s_s(p_4, g_451.f2))), (safe_rshift_func_int16_t_s_u((((((+l_702.f6) && ((65535U <= ((safe_add_func_int8_t_s_s((l_702.f6 <= (safe_rshift_func_uint8_t_u_u((g_134.f2 == ((((safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_u((((p_3 > (0x4D || 0x16)) >= 0xFB0AD480) | g_134.f5), 3)), 8)) <= p_4) & g_395.f4) && g_205)), l_784))), l_784)) ^ l_784)) <= l_785)) && p_4) < g_395.f2) ^ 0), g_451.f5)))));
    }
    return g_134.f0;
}
static int32_t func_6(uint32_t p_7)
{
    struct S0 l_26 = {0xF58A4122,0x7DFE98D7,0x942FAFEC,0U,0xFB11,4294967291U,1U};
    struct S2 l_31 = {-82,59,0,0,4,91,2};
    for (g_16.f2 = 0; (g_16.f2 == 4); g_16.f2 = safe_add_func_int8_t_s_s(g_16.f2, 1))
    {
        struct S0 l_29 = {1U,0x33686A8E,1,1U,0xE934,0xA64A0F0C,0xED6D};
        struct S1 l_30 = {28,0xA0BDEC7E,-65,0xC39FA237,17,9,11};
        l_30.f1 = func_20((func_24((l_26 = l_26)) & (0xDD || (safe_sub_func_int8_t_s_s((l_30.f4 = func_8(p_7, g_15, l_29, l_30, l_31)), l_30.f1)))), g_17.f6, g_17.f0);
        l_30 = (g_17 = l_30);
    }
    return g_134.f4;
}
static uint32_t func_8(uint32_t p_9, struct S2 p_10, struct S0 p_11, struct S1 p_12, struct S2 p_13)
{
    return p_13.f6;
}
static int32_t func_20(int8_t p_21, uint16_t p_22, uint16_t p_23)
{
    uint16_t l_32 = 0xD780;
    struct S2 l_37 = {46,111,4,6,14,8,6};
    struct S2 l_38 = {57,-169,-4,-2,98,70,9};
    uint32_t l_450 = 0x6455D9A9;
    struct S0 l_452 = {8U,1U,0x8C594E84,0x3C72,0xE5FE,0U,0x3736};
    struct S1 l_453 = {35,0xC96B18DE,-125,0xC7810A82,31,1,102};
    l_32 = p_23;
    g_451.f1 = func_33(((func_8(g_16.f3, l_37, g_16, g_17, (l_38 = l_37)) != (0xE7 | p_22)) & func_8((l_450 = (safe_mod_func_int32_t_s_s(func_41((safe_unary_minus_func_int32_t_s(p_22)), l_37.f5, p_23), g_17.f6))), g_451, l_452, l_453, l_37)), l_452.f0, p_23);
    g_395 = (l_452 = l_452);
    return g_134.f6;
}
static int8_t func_24(struct S0 p_25)
{
    return g_17.f6;
}
static int32_t func_33(int8_t p_34, uint32_t p_35, int32_t p_36)
{
    p_36 = 0x3D20DEDA;
    for (g_419 = 16; (g_419 == 21); ++g_419)
    {
        uint32_t l_456 = 1U;
        g_17.f2 = l_456;
    }
    return g_395.f6;
}
static int32_t func_41(uint32_t p_42, int32_t p_43, uint32_t p_44)
{
    struct S0 l_409 = {4294967295U,0xE80C1388,0xE898332D,0xBA06,0xC90C,4294967295U,0U};
    struct S2 l_410 = {43,-76,4,0x29C4F5B0,89,16,1};
    int32_t l_416 = (-1);
    struct S0 l_421 = {0xAA0FAB28,1U,0x12807B3F,65535U,0x43D8,4U,65534U};
    struct S0 l_422 = {0U,0U,-1,0U,9U,0x7888637A,0U};
    if (func_24(g_16))
    {
        struct S0 l_60 = {0U,0x5A2DC96F,0x97794FBA,0xB33E,0x469B,4294967295U,65535U};
        int32_t l_407 = 0x47515C29;
        struct S1 l_420 = {11,0xA5B36698,2,0x8BED41E4,41,29,30};
        for (p_42 = (-13); (p_42 <= 8); p_42 = safe_add_func_int8_t_s_s(p_42, 6))
        {
            uint32_t l_56 = 0x6F6C633F;
            int32_t l_59 = (-1);
            struct S2 l_408 = {-1,49,-0,-10,25,76,1};
            l_410.f1 = (func_8((l_59 = ((p_44 = ((((l_407 = func_48((g_53 = (g_15 = g_15)), (p_44 <= ((safe_mod_func_uint8_t_u_u((((l_56 = 4294967286U) < (safe_add_func_uint8_t_u_u(l_59, (func_24(l_60) | (((0xFB == (func_24(l_60) == 0)) || (-10)) < g_16.f6))))) && 1), l_59)) < 0x34EE)), l_60.f1, p_44)) <= g_16.f6) & l_59) && g_116)) && p_43)), l_408, l_409, g_17, l_410) < g_17.f1);
            if (l_408.f3)
                break;
            g_134.f2 = (0 | (g_134.f5 & (safe_add_func_uint32_t_u_u((g_15.f4 = (safe_unary_minus_func_uint8_t_u(((-5) >= ((((safe_add_func_uint16_t_u_u(0x12AA, (-7))) | (p_42 == 4U)) < ((((g_269 = l_416) < ((safe_sub_func_int8_t_s_s((g_419 = g_16.f6), l_407)) & p_42)) != l_410.f4) && 0xFBBF1C53)) == 1U))))), g_53.f5))));
        }
        g_134 = l_420;
        l_422 = (l_421 = (l_409 = g_16));
    }
    else
    {
        uint16_t l_423 = 0x4BD2;
        int32_t l_424 = 1;
        g_53.f0 = (l_423 && ((0x21 ^ p_43) < 1));
        l_424 = l_423;
        for (l_409.f4 = (-12); (l_409.f4 <= 47); l_409.f4 = safe_add_func_uint16_t_u_u(l_409.f4, 5))
        {
            if (p_44)
                break;
            if (p_43)
                continue;
            if (l_410.f3)
                continue;
        }
        p_43 = ((safe_rshift_func_uint16_t_u_s(g_15.f5, 9)) != 3U);
    }
    for (g_395.f3 = 0; (g_395.f3 > 14); g_395.f3++)
    {
        g_53.f2 = g_53.f6;
        if (g_269)
            break;
    }
    for (l_422.f3 = (-1); (l_422.f3 != 2); l_422.f3 = safe_add_func_uint32_t_u_u(l_422.f3, 3))
    {
        uint8_t l_433 = 254U;
        struct S1 l_449 = {8,-9,86,0xF1C565F0,41,29,106};
        p_43 = l_433;
        g_167.f1 = (+((g_141 = ((+((g_15.f1 < ((g_15.f4 = (safe_add_func_uint32_t_u_u(p_42, p_44))) <= (safe_add_func_int16_t_s_s(7, l_433)))) | (-10))) == (((((safe_lshift_func_int8_t_s_s((~((safe_sub_func_int8_t_s_s(0x05, ((((safe_lshift_func_int16_t_s_u(((0xFAF2 >= p_42) | g_167.f2), 3)) > 4294967291U) < p_43) > g_134.f0))) > p_44)), 0)) && 0x6C) | g_269) == p_42) || g_53.f4))) ^ l_421.f0));
        g_53.f0 = (0x5A14 && (safe_rshift_func_uint16_t_u_s((0x27DA < l_433), 10)));
        l_449 = l_449;
    }
    return l_422.f1;
}
static int16_t func_48(struct S2 p_49, int16_t p_50, int8_t p_51, uint8_t p_52)
{
    struct S2 l_61 = {67,-215,-1,-1,171,20,3};
    int8_t l_70 = (-9);
    int16_t l_406 = (-1);
    g_15 = (l_61 = p_49);
    l_406 = (((0xE5BA >= p_52) && (func_62(p_49.f0, g_53, (safe_add_func_int16_t_s_s((((safe_unary_minus_func_uint8_t_u(((((0U & (~p_49.f6)) | (((p_51 = l_70) >= g_15.f6) >= (l_61.f2 = (p_50 = (safe_lshift_func_int16_t_s_s((((safe_sub_func_uint16_t_u_u(g_15.f5, p_49.f3)) == 0) >= 0xAA9F20BB), 4)))))) & 0x3366) | l_61.f6))) < l_61.f1) != l_61.f6), l_61.f1))) <= (-2))) & g_17.f4);
    return g_16.f5;
}
static uint32_t func_62(uint32_t p_63, struct S2 p_64, int8_t p_65)
{
    uint32_t l_75 = 1U;
    int32_t l_81 = 0x5199DCED;
    struct S1 l_135 = {-44,1,-65,1U,-40,17,120};
    int32_t l_258 = 0x2AE9B445;
    uint32_t l_320 = 4294967286U;
    struct S0 l_394 = {1U,0x78E7992D,1,0x893E,1U,0xCBAFCE22,1U};
    if ((l_75 != 0x664DD2F3))
    {
        int16_t l_76 = 0x64A4;
        l_76 = p_64.f1;
        g_53 = g_15;
    }
    else
    {
        uint8_t l_90 = 0xEF;
        int32_t l_91 = 1;
        int32_t l_113 = 0x827581F2;
        int32_t l_114 = 0x98A83C55;
        struct S2 l_136 = {13,-23,3,0x6573C08D,31,65,0};
        struct S0 l_165 = {1U,0U,1,0U,0x0035,0U,0xCD2D};
        struct S2 l_168 = {76,-26,-3,0xC6D34CFE,138,15,2};
        g_53.f0 = (0x41C0 < (safe_sub_func_int16_t_s_s((safe_mod_func_int16_t_s_s((l_81 = p_64.f4), ((safe_rshift_func_uint16_t_u_s(((safe_lshift_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_u(p_64.f5, 3)) != p_65), 14)) | p_63), 2)) & l_75))), (safe_lshift_func_int8_t_s_u(p_64.f5, 7)))));
        if (p_64.f4)
        {
            uint32_t l_98 = 4294967290U;
            l_91 = (l_90 > (p_65 ^ p_64.f6));
            p_64.f2 = ((safe_sub_func_int16_t_s_s(g_17.f5, (((0x2CA7 ^ (safe_sub_func_uint32_t_u_u(((safe_rshift_func_uint16_t_u_s(((l_81 = (l_98 || (safe_sub_func_uint16_t_u_u(g_53.f3, (safe_sub_func_int16_t_s_s((-1), (safe_sub_func_int32_t_s_s((((l_114 = (l_91 & (safe_add_func_int8_t_s_s(l_98, (l_113 = (((((safe_rshift_func_int16_t_s_s((((safe_mod_func_uint16_t_u_u(p_64.f4, (safe_lshift_func_int16_t_s_s((((((l_91 || 0x03) && 1) | 0xB3D1FD5F) & p_64.f4) | p_65), 9)))) <= p_64.f0) > 0x160A43F8), g_16.f1)) >= g_15.f5) < 65535U) ^ l_91) | p_64.f3)))))) == g_16.f2) | 0U), (-1))))))))) != 0xE7EF), 12)) & l_98), g_15.f4))) ^ g_16.f0) > l_75))) >= 0x5932);
            g_15.f0 = (l_81 = ((g_116 = (safe_unary_minus_func_int32_t_s(7))) || ((safe_add_func_uint8_t_u_u(((((g_16.f3 || (l_90 <= (65535U ^ ((safe_lshift_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_s(p_64.f3, p_64.f4)) > (safe_add_func_int32_t_s_s((safe_sub_func_int8_t_s_s((g_53.f0 & ((0 | (safe_rshift_func_uint16_t_u_u(g_15.f2, 12))) == 0xCE41)), l_90)), 0U))), 10)) != p_65)))) != 1) | 251U) || 0), g_16.f0)) & 0xAD6EEDD9)));
        }
        else
        {
            struct S1 l_133 = {-15,2,16,0x1B52123E,33,19,23};
            struct S0 l_164 = {0U,0U,-1,0x0816,1U,0x36BFB3EC,0xDFB0};
            l_135 = (l_133 = (g_134 = l_133));
            l_136 = (g_53 = (g_15 = (p_64 = g_53)));
            for (l_114 = 0; (l_114 != 5); l_114++)
            {
                uint16_t l_148 = 1U;
                int32_t l_163 = 0x2569BDC7;
                struct S2 l_166 = {-46,-246,2,0,61,62,2};
                p_64.f1 = ((safe_rshift_func_uint8_t_u_s((((g_141 = l_136.f5) & (l_81 = ((safe_sub_func_int32_t_s_s((safe_mod_func_uint8_t_u_u((g_15.f6 && ((safe_add_func_int8_t_s_s(p_64.f1, (g_134.f5 < ((0x5804 < l_135.f6) ^ (l_135.f2 = 0x46))))) | (l_148 | (l_133.f1 = ((0x1CCE & 0) < 0x93))))), l_135.f4)), g_17.f5)) | g_16.f3))) == 0xCB26), 6)) && g_15.f0);
                if ((((safe_sub_func_uint32_t_u_u(p_64.f6, ((~((g_152 = l_135.f2) && ((p_64.f0 < (safe_rshift_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(g_134.f3, (safe_sub_func_uint16_t_u_u((5 ^ (safe_sub_func_uint32_t_u_u(l_133.f4, 0x71733CD6))), (249U ^ l_135.f5))))), g_17.f5))) | p_64.f0))) != 0U))) ^ p_65) <= l_91))
                {
                    if (p_64.f2)
                        break;
                    l_163 = (safe_lshift_func_int16_t_s_u(g_17.f1, 0));
                }
                else
                {
                    l_165 = l_164;
                    if (g_15.f6)
                        continue;
                    l_168 = (l_136 = (p_64 = (g_167 = (g_53 = (g_15 = l_166)))));
                }
                return g_17.f5;
            }
        }
    }
    for (g_152 = 0; (g_152 >= 35); ++g_152)
    {
        uint32_t l_177 = 0x7A8E80D3;
        int32_t l_182 = 1;
        uint32_t l_204 = 1U;
        int32_t l_237 = 5;
        g_167 = (p_64 = g_167);
        if ((safe_sub_func_int32_t_s_s(0x01CB5AC6, (safe_lshift_func_uint8_t_u_u(g_167.f0, 4)))))
        {
            l_135 = g_17;
        }
        else
        {
            int32_t l_176 = 0x978347AB;
            int32_t l_229 = 0x0B5BDB62;
            int32_t l_238 = (-1);
            int32_t l_250 = 0x5FB812E3;
            int32_t l_251 = 0xB576518F;
            p_64.f2 = g_16.f0;
            p_64.f1 = ((g_53.f1 = ((g_17.f0 | (((+0x24) | (l_176 = 1U)) | ((l_135.f1 && l_177) || (p_65 <= ((safe_lshift_func_uint8_t_u_u(0xB4, (l_135.f0 = ((((((l_135.f3 | (2U && 0x910C)) && g_17.f1) & p_64.f5) > p_64.f5) && 0xD0E2) | g_15.f4)))) >= p_64.f6))))) & 0x4B61)) <= p_63);
            for (l_135.f3 = 8; (l_135.f3 < 35); l_135.f3++)
            {
                uint16_t l_206 = 8U;
                int32_t l_235 = 0x789EAE0A;
                int32_t l_268 = (-1);
                struct S1 l_288 = {-26,0xD78BCD14,38,4294967286U,10,12,60};
                struct S0 l_300 = {0xA8DE84D2,0x78A66868,0x869D018C,1U,0x6FA4,0xEE690960,0U};
                l_182 = p_64.f0;
                p_64.f2 = ((0xB7A567F5 != 0U) != ((((g_183 = 0x45CD) >= (l_182 = ((((safe_mod_func_int16_t_s_s(((safe_mod_func_uint16_t_u_u((+(safe_lshift_func_int16_t_s_u((safe_add_func_uint32_t_u_u(((safe_mod_func_int16_t_s_s((g_152 == 4294967295U), 0x132B)) && ((safe_sub_func_uint32_t_u_u(((0x4661 > p_64.f0) == (((((safe_sub_func_uint16_t_u_u((g_205 = ((safe_sub_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((((!g_17.f1) && g_53.f5) || g_17.f5), p_65)), l_204)) <= g_17.f5)), l_81)) == p_63) == g_134.f5) ^ g_53.f2) == 65535U)), (-1))) >= l_206)), g_15.f3)), 4))), g_53.f1)) == g_167.f2), g_17.f4)) && p_64.f6) >= g_53.f2) >= p_64.f2))) ^ l_176) || 4294967295U));
                p_64.f2 = (safe_lshift_func_int16_t_s_u((0 >= (safe_rshift_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(g_53.f1, 0xA90DBD7C)), (g_16.f6 <= 65535U)))), 15));
                if ((l_238 = (g_15.f0 = (((p_64.f0 = ((((l_237 = (safe_sub_func_uint16_t_u_u(l_206, ((safe_add_func_int8_t_s_s((g_236 = ((l_235 = (0xCC != ((g_167.f3 != (safe_sub_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((safe_sub_func_int32_t_s_s((((safe_mod_func_int8_t_s_s(l_135.f4, ((safe_lshift_func_int16_t_s_u((l_229 = g_15.f0), (0 >= (l_182 = (safe_rshift_func_uint8_t_u_s((safe_mod_func_uint8_t_u_u(p_64.f2, l_176)), (g_234 = (0x9B || l_206)))))))) & g_16.f4))) == g_134.f5) >= g_167.f6), 1)), 0xBB9B)), 1)), p_64.f2))) >= g_134.f5))) <= g_17.f1)), 248U)) && g_17.f3)))) <= 65535U) <= l_204) != 4294967287U)) | p_63) > (-9)))))
                {
                    int32_t l_242 = (-2);
                    int32_t l_249 = 0x18072CEC;
                    int32_t l_272 = 0x732A5C88;
                    l_251 = (((safe_add_func_int8_t_s_s(9, ((p_64.f6 = (g_15.f4 = p_65)) > (((l_237 = (+p_64.f0)) | (l_242 = (p_65 || g_134.f2))) < (((p_64.f5 < 0U) | (l_235 = ((l_250 = (safe_lshift_func_int16_t_s_u((((((((safe_sub_func_int32_t_s_s(l_135.f4, (l_229 = ((l_238 = ((((safe_sub_func_int16_t_s_s(p_64.f1, 0)) || 0x9079) == p_65) & p_64.f4)) == l_206)))) || g_167.f2) == g_152) || 0xB2) || (-9)) > l_249) ^ 0xE2), 11))) || g_134.f5))) >= g_16.f6))))) && 0xF069DA9D) == p_64.f1);
                    l_135.f4 = (l_242 = p_64.f1);
                    if ((((p_65 > g_17.f4) < (g_167.f0 <= ((safe_add_func_int8_t_s_s(l_206, (g_269 = (safe_lshift_func_uint16_t_u_s((safe_lshift_func_int16_t_s_u((l_242 = (l_237 = (p_64.f1 || ((g_141 = l_258) < (p_64.f6 & ((safe_rshift_func_int8_t_s_u(((safe_rshift_func_int16_t_s_u((safe_sub_func_int8_t_s_s(((safe_mod_func_uint32_t_u_u((((+0x15CE) < g_134.f2) == l_135.f3), g_53.f0)) & 255U), 3)), g_16.f0)) <= g_16.f4), g_53.f6)) & l_268)))))), 11)), g_53.f3))))) && l_251))) & 0U))
                    {
                        if (g_17.f3)
                            break;
                    }
                    else
                    {
                        l_81 = (safe_lshift_func_int8_t_s_s(g_15.f5, 2));
                        p_64.f1 = (l_272 == g_234);
                    }
                }
                else
                {
                    int32_t l_275 = 0x144AFDD0;
                    uint32_t l_287 = 0xB9BABAE2;
                    int32_t l_298 = 0x9E10025E;
                    p_64.f0 = 0;
                    l_235 = 1;
                    for (l_258 = 0; (l_258 <= 13); l_258 = safe_add_func_uint32_t_u_u(l_258, 4))
                    {
                        g_15.f2 = 0x3BD1F372;
                        l_275 = g_134.f2;
                    }
                    if (((g_15.f4 ^ (l_237 = (g_15.f0 = l_275))) & (safe_rshift_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(((l_204 <= (safe_sub_func_int16_t_s_s((((safe_mod_func_int8_t_s_s(6, 255U)) & ((safe_mod_func_int16_t_s_s((safe_unary_minus_func_int32_t_s(((p_64.f0 & (0xB4 | (((p_64.f4 | 5U) == l_182) ^ 1U))) >= 4294967295U))), 0x0DDE)) == g_15.f1)) < 0xB4), g_134.f3))) <= 1), l_287)), 2))))
                    {
                        int32_t l_299 = 0xDA117F8C;
                        l_288 = l_288;
                        p_64.f2 = (safe_rshift_func_uint8_t_u_s(((~((l_229 = (safe_sub_func_int32_t_s_s(p_64.f6, 0))) != ((safe_add_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(l_288.f5, (0U == (l_298 & g_16.f6)))), l_177)) || l_299))) ^ l_182), l_135.f3));
                        l_300 = l_300;
                    }
                    else
                    {
                        int8_t l_311 = (-1);
                        int32_t l_315 = 0x5ED7D3D8;
                        p_64.f2 = (g_53.f0 = (1U || 2));
                        p_64.f1 = 0;
                        l_81 = (safe_lshift_func_int8_t_s_s((((g_16.f6 || (((safe_mod_func_int32_t_s_s((l_287 || ((p_64.f5 = (safe_sub_func_int16_t_s_s((0xB2 & p_64.f4), ((l_238 > g_53.f1) | (safe_unary_minus_func_uint16_t_u(g_167.f6)))))) < (l_315 = (~(l_288.f4 = ((((safe_add_func_uint8_t_u_u((((l_311 ^ ((safe_rshift_func_int16_t_s_s((~(l_298 = ((l_237 = 0xF0E83303) > p_64.f2))), g_15.f4)) == g_116)) != g_53.f6) != 3U), g_16.f6)) & g_15.f5) & 0x25DD) >= 0xA2AA)))))), l_135.f3)) || 0x37) | l_250)) < l_275) || 65528U), 5));
                        g_134.f1 = (6 == p_65);
                    }
                }
            }
        }
    }
    for (p_65 = 8; (p_65 >= 10); p_65++)
    {
        uint32_t l_330 = 0xFCE30931;
        int32_t l_336 = 0x68629A8D;
        int32_t l_354 = 0x50084BEE;
        struct S0 l_357 = {0U,4294967292U,1,1U,0U,9U,65533U};
        int8_t l_403 = (-1);
        for (g_134.f1 = 3; (g_134.f1 == 24); g_134.f1 = safe_add_func_uint8_t_u_u(g_134.f1, 9))
        {
            uint32_t l_329 = 0x64348B52;
            struct S1 l_391 = {-40,-1,-6,0x7898CBFC,38,25,118};
            l_320 = l_135.f0;
            if ((0x1FB4 == (safe_mod_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((g_167.f0 > (safe_sub_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((l_329 && (p_64.f2 = (l_330 && (p_64.f5 = ((safe_unary_minus_func_uint8_t_u(0U)) && (l_336 = (255U != ((g_167.f6 = (safe_rshift_func_uint16_t_u_s(((l_330 | (safe_mod_func_uint32_t_u_u(p_64.f2, (p_64.f4 = l_329)))) ^ (-1)), p_64.f5))) < l_135.f1)))))))), l_329)), g_17.f6))), 9)), 4))))
            {
                uint32_t l_353 = 7U;
                struct S0 l_358 = {0xF5ED74E0,4294967293U,0x94970F5A,1U,1U,0x231ED3BF,4U};
                l_336 = g_236;
                l_354 = ((safe_add_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(((safe_sub_func_uint8_t_u_u((p_65 | ((0xE6A233A8 | (0xA0 < l_329)) && g_16.f6)), (g_15.f0 >= (((g_346 = (safe_lshift_func_uint16_t_u_s(((+65532U) || 0x7CE8), 9))) >= (safe_sub_func_uint32_t_u_u((l_135.f0 = (safe_rshift_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_s((l_336 = 0x28), p_65)) ^ p_64.f0), l_353))), 0x34253AB8))) == l_330)))) && 0xD7), p_64.f5)), p_64.f6)) ^ g_53.f1);
                for (l_81 = 26; (l_81 <= 7); l_81--)
                {
                    int8_t l_359 = 0xE3;
                    if (l_353)
                        break;
                    l_358 = l_357;
                    g_134.f0 = (-4);
                    l_359 = 1;
                }
            }
            else
            {
                uint8_t l_366 = 5U;
                uint32_t l_371 = 7U;
                g_134.f4 = (safe_lshift_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((g_141 = g_53.f0), ((((safe_sub_func_uint8_t_u_u(((l_336 = (0x6B748E91 & ((p_64.f6 && l_366) ^ l_135.f0))) == (safe_sub_func_int16_t_s_s((((safe_sub_func_int32_t_s_s(l_371, (g_15.f5 = 0xB18FB1C9))) >= (3 ^ ((p_64.f5 && g_53.f0) == p_64.f1))) && p_64.f3), 0U))), g_205)) < p_64.f2) > 0x8C344374) && l_336))), l_135.f3));
                for (g_234 = 0; (g_234 == 51); g_234 = safe_add_func_int8_t_s_s(g_234, 4))
                {
                    g_53 = g_53;
                }
                g_53.f1 = l_81;
            }
            if (l_357.f3)
            {
                uint8_t l_376 = 0U;
                int32_t l_387 = 0x9BD179C0;
                int16_t l_390 = 0xE01D;
                g_134.f2 = (safe_sub_func_int32_t_s_s(g_152, ((l_376 | (safe_add_func_int32_t_s_s(((safe_mod_func_uint8_t_u_u(((((((safe_add_func_uint32_t_u_u(p_64.f4, (safe_rshift_func_uint8_t_u_u(0U, 3)))) <= (0xB9EC7BC6 <= l_135.f0)) < p_65) != ((l_387 = l_329) ^ (safe_sub_func_uint8_t_u_u((0x8A46075F >= 4294967295U), l_376)))) & g_53.f0) != 0xB1), l_390)) >= 0xB2), 0x3D08090F))) ^ g_167.f6)));
            }
            else
            {
                l_391 = l_135;
                if (g_15.f0)
                    break;
            }
        }
        if (p_64.f3)
        {
            for (p_64.f3 = 26; (p_64.f3 > (-20)); p_64.f3 = safe_sub_func_uint16_t_u_u(p_64.f3, 6))
            {
                return g_17.f4;
            }
        }
        else
        {
            uint32_t l_400 = 9U;
            uint32_t l_405 = 1U;
            g_395 = (l_394 = l_394);
            g_53.f1 = ((safe_add_func_uint16_t_u_u(g_236, l_135.f0)) >= ((safe_mod_func_int16_t_s_s((l_394.f2 && ((g_134.f5 & l_400) & ((safe_add_func_int8_t_s_s(l_394.f6, (g_404 = (l_403 = (l_400 ^ (((250U <= (((((((p_63 != g_134.f3) != p_64.f3) | 0x9F) & 0x6E) >= l_354) > (-1)) == 0x0A)) || 0) ^ l_357.f6)))))) && g_53.f6))), p_65)) && l_405));
        }
    }
    return g_205;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_5;
    csmith_sink_ = g_15.f0;
    csmith_sink_ = g_15.f1;
    csmith_sink_ = g_15.f2;
    csmith_sink_ = g_15.f3;
    csmith_sink_ = g_15.f4;
    csmith_sink_ = g_15.f5;
    csmith_sink_ = g_15.f6;
    csmith_sink_ = g_16.f0;
    csmith_sink_ = g_16.f1;
    csmith_sink_ = g_16.f2;
    csmith_sink_ = g_16.f3;
    csmith_sink_ = g_16.f4;
    csmith_sink_ = g_16.f5;
    csmith_sink_ = g_16.f6;
    csmith_sink_ = g_17.f0;
    csmith_sink_ = g_17.f1;
    csmith_sink_ = g_17.f2;
    csmith_sink_ = g_17.f3;
    csmith_sink_ = g_17.f4;
    csmith_sink_ = g_17.f5;
    csmith_sink_ = g_17.f6;
    csmith_sink_ = g_53.f0;
    csmith_sink_ = g_53.f1;
    csmith_sink_ = g_53.f2;
    csmith_sink_ = g_53.f3;
    csmith_sink_ = g_53.f4;
    csmith_sink_ = g_53.f5;
    csmith_sink_ = g_53.f6;
    csmith_sink_ = g_116;
    csmith_sink_ = g_134.f0;
    csmith_sink_ = g_134.f1;
    csmith_sink_ = g_134.f2;
    csmith_sink_ = g_134.f3;
    csmith_sink_ = g_134.f4;
    csmith_sink_ = g_134.f5;
    csmith_sink_ = g_134.f6;
    csmith_sink_ = g_141;
    csmith_sink_ = g_152;
    csmith_sink_ = g_167.f0;
    csmith_sink_ = g_167.f1;
    csmith_sink_ = g_167.f2;
    csmith_sink_ = g_167.f3;
    csmith_sink_ = g_167.f4;
    csmith_sink_ = g_167.f5;
    csmith_sink_ = g_167.f6;
    csmith_sink_ = g_183;
    csmith_sink_ = g_205;
    csmith_sink_ = g_234;
    csmith_sink_ = g_236;
    csmith_sink_ = g_269;
    csmith_sink_ = g_346;
    csmith_sink_ = g_395.f0;
    csmith_sink_ = g_395.f1;
    csmith_sink_ = g_395.f2;
    csmith_sink_ = g_395.f3;
    csmith_sink_ = g_395.f4;
    csmith_sink_ = g_395.f5;
    csmith_sink_ = g_395.f6;
    csmith_sink_ = g_404;
    csmith_sink_ = g_419;
    csmith_sink_ = g_451.f0;
    csmith_sink_ = g_451.f1;
    csmith_sink_ = g_451.f2;
    csmith_sink_ = g_451.f3;
    csmith_sink_ = g_451.f4;
    csmith_sink_ = g_451.f5;
    csmith_sink_ = g_451.f6;
    csmith_sink_ = g_505;
    csmith_sink_ = g_531;
    csmith_sink_ = g_576;
    csmith_sink_ = g_577;
    csmith_sink_ = g_623;
    csmith_sink_ = g_624;
    csmith_sink_ = g_683;
    csmith_sink_ = g_748;
    csmith_sink_ = g_765;
    platform_main_end(0,0);
    return 0;
}
