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
static int32_t g_2 = 0x342EB90D;
static int32_t g_87 = 0x83564F69;
static int32_t *g_137 = &g_87;
static int32_t **g_172 = &g_137;
static int32_t ***g_171 = &g_172;
static int32_t ****g_170 = &g_171;
static uint8_t g_226 = 2U;
static int32_t *****g_329 = &g_170;
static int32_t g_365 = 1;
static int32_t **g_384 = &g_137;
static int32_t **g_403 = (void*)0;
static int32_t ***g_478 = &g_384;
static int16_t g_524 = 0x802C;
static uint16_t g_692 = 1U;
static int8_t g_769 = 1;
static int32_t *g_921 = &g_2;
static uint32_t g_935 = 4294967295U;
static uint32_t g_991 = 4294967295U;
static int32_t *g_1015 = &g_87;
inline static int32_t func_1(void);
inline static int16_t func_5(int32_t p_6, int16_t p_7, uint8_t p_8, int32_t p_9, int32_t p_10);
inline static uint8_t func_20(int8_t p_21, int8_t p_22);
inline static int16_t func_37(uint16_t p_38, uint8_t p_39, uint8_t p_40);
inline static int32_t * func_43(int32_t * p_44, uint32_t p_45, int32_t * p_46, int32_t * p_47, int32_t p_48);
static int32_t * func_49(uint8_t p_50, int32_t * p_51, int16_t p_52);
static int32_t func_54(int8_t p_55);
inline static int8_t func_56(int8_t p_57);
static int8_t func_58(int32_t * p_59);
static int32_t * func_60(int32_t * p_61, uint32_t p_62, int32_t * p_63, int32_t * p_64);
inline static int32_t func_1(void)
{
    int16_t l_17 = 0x0D68;
    uint32_t l_41 = 0U;
    int32_t l_42 = 0x55B65AB4;
    int32_t *l_721 = &g_87;
    uint16_t l_778 = 5U;
    uint32_t l_779 = 0x22ECC8F2;
    int32_t **l_829 = &g_137;
    uint8_t l_847 = 6U;
    int32_t *****l_930 = &g_170;
    int32_t **l_985 = (void*)0;
    int32_t *l_1007 = &g_2;
    uint32_t l_1038 = 0xB003DE8C;
    if (g_2)
    {
        int16_t l_23 = 0xA412;
        int8_t l_717 = 0xFF;
        int32_t *l_722 = (void*)0;
        int32_t ***l_738 = &g_403;
        int32_t l_741 = 0xCC59AEC8;
        int32_t l_806 = 0xACC6270C;
        if ((safe_mod_func_int16_t_s_s(func_5((((safe_lshift_func_int8_t_s_u(((((safe_sub_func_uint32_t_u_u(((safe_add_func_uint16_t_u_u((((-1) <= g_2) & 6U), ((((l_17 >= (safe_sub_func_int16_t_s_s((g_2 <= func_20(l_23, g_2)), ((safe_rshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s((safe_mul_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_s((safe_mod_func_int16_t_s_s(func_37((l_41 ^ l_42), g_2, g_2), g_2)), l_17)), g_2)) != l_41), g_2)), 1)), l_42)) >= (-7))))) != l_23) | 0x60A0) & 0x4E))) == l_41), l_23)) ^ g_2) && l_717) > l_23), 2)) | 0) & l_17), l_17, g_2, g_2, l_717), 7U)))
        {
            int32_t *l_733 = &g_87;
            (***g_170) = func_60(l_721, g_87, l_721, l_722);
            (***g_478) = (safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(5U, 3)), (safe_sub_func_uint32_t_u_u((((g_524 <= (*l_721)) >= (safe_rshift_func_uint16_t_u_s(((((g_692 ^ g_2) | g_226) < (-9)) > (safe_rshift_func_int16_t_s_u(g_87, ((l_733 == (void*)0) ^ (*l_721))))), 1))) < g_226), (*l_733)))));
            (*g_137) = 0xF162F56D;
        }
        else
        {
            uint8_t l_734 = 8U;
            int32_t l_735 = 0xC0CA3845;
            int32_t ***l_770 = &g_384;
            int32_t *l_798 = &l_735;
            int8_t l_809 = 0x26;
            int32_t *l_811 = &l_741;
            l_735 = l_734;
            if ((safe_mul_func_uint16_t_u_u((((((void*)0 == (*g_329)) > ((l_722 != &l_735) && (g_87 || (l_738 != (*g_170))))) | ((&l_735 == &l_735) != 0x2B8F)) < g_226), 7U)))
            {
                int32_t l_746 = 0xA794E776;
                int32_t ***l_753 = &g_403;
                (*l_721) = (((void*)0 == (*g_329)) <= 0xF169);
                for (g_87 = 0; (g_87 < (-23)); --g_87)
                {
                    int32_t *l_742 = (void*)0;
                    int32_t l_743 = 0x7AEA02C4;
                    l_741 = l_734;
                    (*g_384) = l_742;
                    (****g_329) = (***g_170);
                    l_743 = 0xFA06F48A;
                }
                for (g_365 = 0; (g_365 <= (-23)); g_365 = safe_sub_func_uint16_t_u_u(g_365, 6))
                {
                    uint32_t l_747 = 0x28AAFF28;
                    int32_t **l_756 = (void*)0;
                    l_747 = l_746;
                    (*l_721) = ((safe_unary_minus_func_uint32_t_u((safe_rshift_func_int16_t_s_u(((safe_mul_func_int16_t_s_s(l_747, l_747)) || ((l_735 || (((**g_329) == l_753) != ((*l_721) ^ (safe_add_func_uint16_t_u_u(((*g_171) != l_756), ((safe_mul_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(g_365, (*l_721))), g_692)) <= 0U)))))) ^ 0xE9C0)), 7)))) && l_735);
                    (*l_721) = (l_734 == ((1U == (((((safe_lshift_func_uint16_t_u_s((safe_sub_func_uint16_t_u_u(l_735, ((safe_lshift_func_int16_t_s_u(g_769, 14)) || g_87))), 4)) | 0x08) >= ((void*)0 == l_770)) > (-1)) < g_524)) & g_87));
                }
            }
            else
            {
                int32_t *l_771 = (void*)0;
                if (((void*)0 == &l_738))
                {
                    int16_t l_772 = 0xA81F;
                    (***g_170) = l_771;
                    if (l_772)
                    {
                        return l_772;
                    }
                    else
                    {
                        (***g_170) = l_721;
                        (****g_329) = (**g_171);
                        return g_692;
                    }
                }
                else
                {
                    (**l_770) = (void*)0;
                }
            }
            (*l_721) = ((safe_add_func_uint8_t_u_u(((g_2 ^ (*l_721)) ^ (g_2 || (((((+(*l_721)) || (((-1) <= (((((*g_171) != (*l_770)) >= (*l_721)) && (safe_mod_func_int32_t_s_s((-1), g_226))) | g_524)) < g_769)) & l_778) != g_2) > (-1)))), (*l_721))) | l_779);
            for (l_17 = 0; (l_17 <= 0); l_17++)
            {
                uint32_t l_787 = 4294967293U;
                int32_t *l_792 = &g_365;
                uint8_t l_793 = 255U;
                (*l_721) = ((safe_mul_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((safe_unary_minus_func_int32_t_s(g_2)), l_787)), g_769)) || ((safe_lshift_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((((void*)0 == l_792) | (l_793 < 0x91BA2B85)), (-5))), (g_226 >= 0x182E))) <= 0x4B4AD423));
                if ((safe_sub_func_int8_t_s_s((-3), (safe_add_func_int8_t_s_s((((***g_329) != (*l_738)) != (l_798 == l_721)), 0x25)))))
                {
                    (**g_478) = (void*)0;
                }
                else
                {
                    uint32_t l_803 = 0U;
                    uint32_t l_807 = 0x94C51FBA;
                    int32_t *l_810 = (void*)0;
                    if (((*l_721) == (safe_mod_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s((((*l_798) || ((l_721 == (void*)0) < ((4U == ((g_524 ^ ((0U ^ 1U) == (g_2 >= (*l_721)))) < 0xC950D690)) > 0xB1))) & l_803), (*l_721))), l_803))))
                    {
                        int32_t ****l_808 = &g_171;
                        (**g_171) = l_811;
                    }
                    else
                    {
                        int32_t *l_812 = &g_365;
                        if ((*l_721))
                            break;
                        (**l_770) = l_812;
                    }
                    (***g_171) = (g_692 <= ((safe_mod_func_int32_t_s_s((safe_unary_minus_func_int8_t_s(g_87)), (*l_792))) & (safe_mod_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((((0xD220 ^ (*l_792)) < ((**g_329) != (**g_329))) <= (safe_mul_func_int8_t_s_s((safe_mul_func_int8_t_s_s(g_226, (*l_798))), (*l_721)))), (*l_798))), (***l_770)))));
                    (*l_811) = ((-5) ^ (safe_lshift_func_int8_t_s_s((!1U), 4)));
                }
                if ((*l_792))
                    continue;
            }
        }
        l_721 = l_721;
        if ((*l_721))
        {
            uint8_t l_827 = 255U;
            int32_t **l_828 = &l_721;
            int32_t *l_830 = (void*)0;
            int32_t l_839 = 0xC8AE22FD;
            uint32_t l_920 = 0xD00766CD;
            (*l_721) = l_827;
            if ((((l_828 == l_829) ^ g_365) >= (((((*l_828) == l_830) != ((0xEE564454 != (~(((safe_add_func_uint8_t_u_u((((safe_add_func_uint8_t_u_u(0xAD, (safe_mod_func_int32_t_s_s((**l_828), (((g_692 & g_87) ^ (**l_828)) && 0x5FA7A5AD))))) <= 9U) || 0x1C), g_769)) && 4294967289U) != (*l_721)))) || (*l_721))) & (*l_721)) == 0xA23A6687)))
            {
                int32_t l_838 = 0x447D6662;
                (*l_721) = l_838;
                (*l_721) = ((l_838 | ((void*)0 == (*g_170))) > l_839);
                return (**l_828);
            }
            else
            {
                int16_t l_844 = 0;
                int32_t *l_854 = &l_741;
                (**l_828) = (safe_sub_func_uint8_t_u_u(((g_226 & (g_87 ^ ((safe_mod_func_int8_t_s_s(((((0x05C21903 | ((*g_329) == (void*)0)) ^ (l_844 & (g_87 < ((safe_add_func_uint32_t_u_u(((-6) <= 1U), l_847)) & 0x4A696345)))) <= 9U) ^ g_87), g_226)) >= l_844))) <= g_226), 0xE3));
                for (l_778 = 0; (l_778 == 58); ++l_778)
                {
                    int32_t *l_856 = &g_365;
                    (*l_721) = (65533U >= ((void*)0 != (*g_170)));
                    if (l_844)
                        continue;
                    for (g_365 = 0; (g_365 >= (-25)); g_365--)
                    {
                        int32_t *l_855 = (void*)0;
                        (*l_721) = (safe_sub_func_uint8_t_u_u((0xB0CC < g_524), (g_87 < g_365)));
                        (*l_829) = l_856;
                        (*l_854) = (((safe_mul_func_uint16_t_u_u((((*l_854) == (safe_unary_minus_func_int16_t_s(g_692))) & g_769), (safe_unary_minus_func_uint32_t_u((((**g_478) == (*l_828)) >= 0x9973))))) <= g_692) && 9U);
                    }
                }
                (**g_478) = (void*)0;
            }
            (*l_721) = (-2);
            for (g_2 = 0; (g_2 <= (-13)); g_2 = safe_sub_func_uint16_t_u_u(g_2, 5))
            {
                int32_t *l_863 = (void*)0;
                int16_t l_894 = 0;
                if ((&l_830 == &l_721))
                {
                    uint32_t l_868 = 6U;
                    (**g_171) = l_863;
                    for (l_741 = 0; (l_741 >= 11); l_741 = safe_add_func_int8_t_s_s(l_741, 9))
                    {
                        (*l_829) = (*g_384);
                    }
                    (*l_721) = (safe_lshift_func_uint16_t_u_u((**l_828), l_868));
                }
                else
                {
                    uint16_t l_871 = 65528U;
                    int32_t **l_922 = &g_921;
                    if (((((safe_mul_func_uint16_t_u_u(l_871, (((*g_172) == (*l_829)) ^ (safe_add_func_uint16_t_u_u(l_871, g_2))))) ^ (safe_lshift_func_int8_t_s_u(((((safe_add_func_int8_t_s_s((safe_rshift_func_int8_t_s_s(((((safe_add_func_uint32_t_u_u((safe_mul_func_int8_t_s_s(((0xB489 && 0x7867) < (safe_rshift_func_uint16_t_u_s((**l_828), 4))), 0xB0)), l_717)) && 65529U) || (**l_828)) & l_871), g_769)), g_226)) | (*l_721)) || 0x9A) == g_524), 5))) || (**l_828)) >= (**l_828)))
                    {
                        int32_t *l_886 = (void*)0;
                        uint16_t l_915 = 0U;
                        (**g_171) = l_886;
                        (*l_828) = func_43((****g_329), l_871, l_863, (****g_329), (((**l_828) & (0xFE15 ^ g_365)) & (((g_692 > (~(safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((safe_mod_func_int8_t_s_s(l_871, l_871)), 4)), 4)))) | g_769) || l_871)));
                        l_894 = l_871;
                        (*l_829) = func_43((**g_478), (safe_rshift_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((((safe_rshift_func_uint16_t_u_u(0U, (safe_add_func_int16_t_s_s(((safe_sub_func_int32_t_s_s(((safe_lshift_func_int8_t_s_u(g_87, (l_871 < (safe_add_func_uint8_t_u_u((((safe_rshift_func_uint8_t_u_s(l_871, (safe_lshift_func_uint8_t_u_s(((l_871 > ((safe_mod_func_int16_t_s_s(l_915, (safe_mod_func_int32_t_s_s((safe_mul_func_int8_t_s_s(g_87, (l_871 == g_365))), l_871)))) && 248U)) | 0xCD), 2)))) == l_871) & g_87), g_87))))) | l_920), 1)) > g_226), 0xF9B8)))) <= 0x5AB5) != g_769), g_769)), 10)), g_921, l_886, g_2);
                    }
                    else
                    {
                        (**l_828) = 0x61B5F784;
                        (**l_828) = (l_922 == (void*)0);
                    }
                    return g_692;
                }
                (*g_172) = (***g_170);
                (*l_721) = (g_87 != (*l_721));
                (****g_329) = (****g_329);
            }
        }
        else
        {
            int32_t *l_927 = &g_2;
            for (g_87 = 0; (g_87 == 17); g_87 = safe_add_func_int16_t_s_s(g_87, 8))
            {
                (*g_921) = (safe_rshift_func_int8_t_s_s(g_87, 0));
            }
            (*g_172) = l_927;
            for (g_769 = 29; (g_769 == 8); g_769--)
            {
                l_930 = (void*)0;
            }
        }
    }
    else
    {
        int32_t l_944 = 0x685559B1;
        int32_t l_950 = 0x19971224;
        int32_t **l_1006 = (void*)0;
        int32_t *l_1009 = &l_950;
        int32_t *****l_1056 = &g_170;
        int32_t *l_1058 = &l_950;
        int32_t *l_1059 = &l_950;
        int32_t *****l_1074 = (void*)0;
        if ((((((((0x71 == (safe_mul_func_uint8_t_u_u(0x18, (((safe_add_func_uint16_t_u_u((((g_935 > 0) | (safe_mod_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(((safe_mul_func_uint16_t_u_u((0x53B9 >= 0xB536), (*l_721))) || (((safe_mul_func_int16_t_s_s(g_935, ((***l_930) != (***g_329)))) & (*l_721)) & 0)), g_692)), g_935))) && g_365), l_944)) | 0x50EC) ^ (**l_829))))) && 0xB53C) <= l_944) == g_87) > g_769) > l_944) == g_226))
        {
            int32_t ***l_960 = &l_829;
            int32_t l_967 = 0xB22C7E0B;
            for (l_778 = 16; (l_778 > 2); l_778 = safe_sub_func_int16_t_s_s(l_778, 5))
            {
                int32_t l_947 = 0xD6049ECE;
                int32_t *l_962 = &g_365;
                int32_t *l_963 = (void*)0;
                int32_t ****l_1005 = &g_171;
                l_950 = ((l_947 <= (g_2 > ((0 || g_365) >= 0xD3))) ^ (safe_sub_func_int8_t_s_s(((void*)0 == &g_170), (g_935 <= (g_692 && 1)))));
            }
        }
        else
        {
            (****l_930) = (*g_172);
        }
        (*l_1007) = (***g_171);
        for (l_42 = 0; (l_42 == 9); l_42 = safe_add_func_int32_t_s_s(l_42, 6))
        {
            int8_t l_1057 = (-1);
            (*l_721) = ((safe_mul_func_int16_t_s_s((safe_add_func_int32_t_s_s((**g_172), ((g_991 == 0x17) == ((((safe_mod_func_int32_t_s_s(l_1038, (safe_add_func_int8_t_s_s((~g_2), (safe_rshift_func_int8_t_s_u(((safe_mul_func_int16_t_s_s(g_2, (((safe_sub_func_int32_t_s_s((((g_365 ^ (safe_rshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(((safe_add_func_int16_t_s_s(((safe_mul_func_int16_t_s_s(((l_1056 != &g_170) < (**l_829)), (*l_1009))) & (-10)), l_1057)) ^ g_935), g_991)), g_87))) != 0x8A8B) < g_87), 4294967295U)) <= 0x0E) >= 246U))) != g_935), (*****l_1056))))))) || (*l_1009)) & (*****l_930)) & 0x4112)))), g_226)) != g_365);
            l_1059 = l_1058;
            (*****g_329) = (safe_add_func_uint32_t_u_u(((0xE3D5 >= (0x7FACDD10 > (safe_mul_func_uint8_t_u_u(((*l_930) != (void*)0), (*l_721))))) != (((0x9C6B > ((safe_mul_func_int16_t_s_s(((248U | (((*g_170) == (void*)0) < (*l_1059))) >= 3U), 0xDDF9)) <= (**l_829))) < l_1057) ^ 0x2431)), 0x37AA6D77));
            (*****g_329) = (255U < ((void*)0 == &g_170));
        }
        for (l_778 = 0; (l_778 < 32); l_778 = safe_add_func_uint32_t_u_u(l_778, 1))
        {
            int32_t *l_1068 = &g_2;
            (**g_478) = func_49((*l_721), l_1068, (safe_mod_func_uint32_t_u_u((+((1 >= (safe_lshift_func_uint8_t_u_s(((l_1074 == &g_170) && (safe_mul_func_uint16_t_u_u(((((safe_add_func_uint16_t_u_u((*l_1068), (l_1068 == (*g_172)))) ^ (*g_921)) ^ 0x7BFC) < g_524), g_226))), g_991))) != g_524)), (*l_1009))));
            return g_692;
        }
    }
    (*g_384) = (*g_172);
    return (*l_721);
}
inline static int16_t func_5(int32_t p_6, int16_t p_7, uint8_t p_8, int32_t p_9, int32_t p_10)
{
    int32_t **l_718 = &g_137;
    (*g_384) = &p_6;
    (**g_171) = func_43((****g_329), (((*g_478) != l_718) & (safe_mul_func_uint8_t_u_u(p_10, 1U))), &p_6, (*l_718), (4294967286U | (**l_718)));
    (**l_718) = (**l_718);
    return g_87;
}
inline static uint8_t func_20(int8_t p_21, int8_t p_22)
{
    int8_t l_24 = 0x1F;
    return l_24;
}
inline static int16_t func_37(uint16_t p_38, uint8_t p_39, uint8_t p_40)
{
    int32_t *l_53 = &g_2;
    int32_t *l_693 = &g_2;
    int32_t *l_694 = &g_2;
    int32_t ****l_715 = &g_171;
    int32_t l_716 = 0x6F4DE2BB;
    l_693 = func_43(func_49(p_38, l_53, g_2), p_39, func_60(func_60(l_53, ((*l_53) > 0), l_53, l_53), p_38, l_693, l_694), l_53, (*l_53));
    for (g_226 = (-6); (g_226 == 22); g_226++)
    {
        uint16_t l_697 = 0x4E77;
        int32_t l_701 = (-5);
        int32_t *****l_706 = (void*)0;
        l_697 = (g_524 | 0x389B07A3);
        for (g_692 = 0; (g_692 > 41); g_692++)
        {
            uint16_t l_700 = 65528U;
            if (l_700)
            {
                (****g_329) = func_43(l_693, ((g_524 != 0U) && (p_39 > 0x20)), (****g_329), (**g_478), (g_692 > g_692));
                l_701 = ((void*)0 == (*g_478));
            }
            else
            {
                return p_40;
            }
        }
        if ((*l_53))
            break;
        l_701 = (g_87 & (safe_lshift_func_uint16_t_u_s(((safe_rshift_func_uint8_t_u_u((((void*)0 != l_706) > ((safe_add_func_uint8_t_u_u((safe_mod_func_int32_t_s_s((p_39 ^ p_40), (*l_694))), (0xFF85 ^ 0xDB3C))) >= (safe_lshift_func_int16_t_s_u(((safe_mul_func_int16_t_s_s((l_715 != l_715), p_38)) > g_226), 12)))), 6)) && p_39), 7)));
    }
    l_716 = 0x2E9BFD41;
    return g_692;
}
inline static int32_t * func_43(int32_t * p_44, uint32_t p_45, int32_t * p_46, int32_t * p_47, int32_t p_48)
{
    (**g_171) = (***g_170);
    return (****g_329);
}
static int32_t * func_49(uint8_t p_50, int32_t * p_51, int16_t p_52)
{
    uint8_t l_588 = 3U;
    int32_t **l_611 = &g_137;
    uint32_t l_676 = 4U;
    uint8_t l_677 = 0x0E;
    int32_t *l_678 = &g_87;
    if (func_54(func_56(func_58(func_60(&g_2, g_2, &g_2, &g_2)))))
    {
        int32_t *l_589 = (void*)0;
        int32_t *l_590 = &g_87;
        (*l_590) = (safe_add_func_int32_t_s_s((g_524 || 0x6C35ACBB), (safe_mul_func_uint8_t_u_u(((safe_mod_func_int32_t_s_s((*p_51), (*p_51))) <= ((((p_52 > (((!0x32) <= (safe_unary_minus_func_uint8_t_u((+g_226)))) <= 2U)) & ((l_588 > p_52) == 0x3D65)) == 1) > (*p_51))), g_87))));
        for (p_52 = 0; (p_52 < 4); p_52 = safe_add_func_uint32_t_u_u(p_52, 1))
        {
            int32_t *l_595 = &g_2;
            int32_t *****l_598 = &g_170;
            for (p_50 = 0; (p_50 < 25); p_50 = safe_add_func_uint16_t_u_u(p_50, 8))
            {
                (**g_171) = l_595;
                (**g_478) = (**g_171);
                (****g_329) = func_60((**g_478), p_50, p_51, l_589);
            }
            (*l_590) = (safe_sub_func_int32_t_s_s(((l_598 == l_598) < (safe_add_func_int32_t_s_s((p_52 | p_50), 6U))), (safe_add_func_uint32_t_u_u(((safe_rshift_func_uint16_t_u_s(p_50, (safe_lshift_func_int16_t_s_u(((safe_sub_func_uint16_t_u_u((g_87 <= (((((safe_lshift_func_int8_t_s_u(g_2, 3)) & ((l_611 != (void*)0) > 0x2F)) & 0xD9733126) | g_524) < p_52)), 7U)) <= p_52), g_2)))) || (*l_590)), (*p_51)))));
            (*l_590) = ((*p_51) & 0xB3823FD5);
            (****g_329) = p_51;
        }
    }
    else
    {
        uint16_t l_624 = 0xB5A8;
        int32_t ****l_656 = (void*)0;
        uint8_t l_659 = 0x27;
        for (g_87 = (-12); (g_87 != 6); g_87++)
        {
            int32_t l_614 = 6;
            int32_t *l_615 = &g_365;
            int32_t *****l_635 = &g_170;
            (*l_615) = l_614;
            for (g_226 = (-13); (g_226 == 27); g_226++)
            {
                int32_t l_636 = 0x8DC6315F;
                int32_t l_637 = 0x5FE190DD;
                l_637 = (safe_lshift_func_int8_t_s_s(2, (g_524 >= (safe_add_func_uint32_t_u_u((((0x3BDF == (safe_sub_func_uint8_t_u_u((l_624 & (safe_add_func_int32_t_s_s(((safe_add_func_uint16_t_u_u((p_52 == (safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s((g_87 & ((void*)0 == l_635)), (l_636 == p_52))), 2))), (-1))) == g_87), l_636))), g_524))) == l_624) <= g_524), (*p_51))))));
                if (((((safe_rshift_func_int8_t_s_s(p_50, p_52)) <= ((((safe_lshift_func_uint8_t_u_s((safe_add_func_int8_t_s_s((0x0D2D <= (safe_mul_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((g_524 < (!(l_624 & ((safe_add_func_uint32_t_u_u((l_636 | (~(safe_sub_func_int16_t_s_s(((*g_329) != l_656), (((((safe_add_func_uint8_t_u_u((((p_52 >= g_2) | g_87) | 0x46A3FA14), 0x89)) < g_2) > g_226) != (*p_51)) < 6))))), l_659)) || l_636)))), 6)), g_2)), 9))), g_524)), p_52)) == 0xEC1C) >= g_226) && 250U)) | (*l_615)) || 0xE1D867E3))
                {
                    int16_t l_673 = (-10);
                    l_637 = (safe_mul_func_uint8_t_u_u(g_365, (((g_2 != (((((((safe_sub_func_uint32_t_u_u(1U, (((0xDF9D | (safe_sub_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(7, g_2)), ((((~((void*)0 == (***g_170))) || (p_50 < g_365)) >= p_50) < l_637))), 5)) | p_52), (-1)))) && p_52) != (-1)))) ^ l_636) != p_50) | 0x722D) >= g_524) > l_673) | 0xCB5F3D00)) | g_365) < (*p_51))));
                }
                else
                {
                    for (l_637 = 0; (l_637 != 0); l_637 = safe_add_func_int16_t_s_s(l_637, 7))
                    {
                        if (l_676)
                            break;
                    }
                }
            }
        }
        (**g_171) = func_60((*l_611), l_677, func_60((****g_329), l_624, func_60((*g_172), p_50, p_51, func_60(p_51, l_624, p_51, (*g_172))), p_51), (*l_611));
    }
    (*l_678) = 0x4416E39A;
    p_51 = p_51;
    (*l_678) = ((safe_add_func_int8_t_s_s(0x9E, (~(((**g_329) == (void*)0) != ((safe_add_func_int32_t_s_s((p_50 > (safe_add_func_uint8_t_u_u((0xB7 != ((65535U | (safe_add_func_uint8_t_u_u(5U, (safe_mul_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(((*l_678) && 0x59), 1)), g_524))))) > g_87)), 9U))), (*p_51))) != (-1)))))) != g_692);
    return p_51;
}
static int32_t func_54(int8_t p_55)
{
    uint16_t l_578 = 65535U;
    return l_578;
}
inline static int8_t func_56(int8_t p_57)
{
    uint16_t l_369 = 1U;
    int32_t *l_370 = (void*)0;
    uint32_t l_399 = 0x16F0D455;
    int32_t ***l_508 = &g_172;
    int32_t l_569 = 0x7BC4CE6D;
    int32_t l_574 = (-1);
    int8_t l_575 = 0x27;
    int32_t l_576 = 5;
    int32_t *l_577 = &l_574;
    for (p_57 = (-6); (p_57 > 2); p_57 = safe_add_func_uint16_t_u_u(p_57, 2))
    {
        int32_t *****l_345 = &g_170;
        int32_t *l_346 = &g_87;
        (*l_346) = (l_345 != &g_170);
        for (g_87 = 0; (g_87 <= 8); g_87 = safe_add_func_int8_t_s_s(g_87, 7))
        {
            uint32_t l_363 = 0xF1FB9C76;
            int32_t *l_364 = &g_365;
            int8_t l_383 = (-4);
            (*l_364) = ((safe_rshift_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(0xBC31, (safe_rshift_func_uint8_t_u_u(0x7D, (safe_add_func_int32_t_s_s(0x8B1DD971, (((safe_add_func_int8_t_s_s((p_57 > 0x0590F931), g_2)) | 1) < (*l_346)))))))), (((safe_mod_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(((((**l_345) == (void*)0) ^ l_363) && p_57), l_363)), 1U)) && p_57) ^ p_57))) || g_226);
            for (l_363 = 0; (l_363 >= 34); ++l_363)
            {
                int32_t ***l_368 = &g_172;
                (*l_364) = ((((**l_345) == l_368) < ((l_369 && (l_370 != l_364)) ^ g_87)) >= (0x68 || (*l_346)));
                if ((*l_364))
                {
                    (*l_364) = p_57;
                    (*l_364) = ((**g_170) != (void*)0);
                    (*g_172) = l_370;
                    if (p_57)
                        break;
                }
                else
                {
                    (**g_170) = &l_370;
                }
                (****g_329) = l_364;
                (*l_364) = (safe_mul_func_int8_t_s_s(((((*l_368) == (*g_171)) <= ((*l_364) > 4294967295U)) != (safe_add_func_uint32_t_u_u(0x2318213D, (((~(safe_unary_minus_func_int8_t_s(((safe_lshift_func_int8_t_s_u((safe_mod_func_int32_t_s_s(((void*)0 != (**g_329)), 1U)), ((safe_rshift_func_uint16_t_u_s((*l_346), p_57)) || 0x9CAC))) && 0U)))) ^ p_57) >= 0xAA1E)))), l_383));
            }
        }
        (**g_170) = g_384;
    }
    if (((4294967291U < ((safe_sub_func_int16_t_s_s(0x8860, (safe_mul_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(g_87, (safe_lshift_func_uint8_t_u_u(((***g_170) != (void*)0), (safe_lshift_func_int16_t_s_u((safe_mod_func_uint32_t_u_u(((void*)0 == (**g_329)), g_226)), l_369)))))), 0)))) == g_365)) || g_2))
    {
        int16_t l_418 = (-1);
        int32_t ****l_457 = &g_171;
        int32_t l_533 = 9;
        for (g_226 = 0; (g_226 >= 32); g_226 = safe_add_func_int32_t_s_s(g_226, 8))
        {
            int32_t **l_402 = &l_370;
            int32_t ****l_417 = &g_171;
            int32_t l_510 = 0x0BD48041;
            if (l_399)
                break;
            if (((p_57 || (safe_lshift_func_uint16_t_u_u((((l_402 != g_403) | 0xB3) == (((safe_add_func_int8_t_s_s(6, (safe_mul_func_uint8_t_u_u((p_57 != (safe_lshift_func_int16_t_s_u(((((safe_mod_func_int8_t_s_s((+(safe_mod_func_uint32_t_u_u(((safe_mod_func_int16_t_s_s(0, (((void*)0 == l_417) && l_418))) | 2U), p_57))), (-5))) && p_57) && g_226) == 247U), g_2))), l_418)))) <= p_57) && p_57)), 9))) && p_57))
            {
                int8_t l_419 = 0xAD;
                if (l_419)
                    break;
            }
            else
            {
                int16_t l_422 = 0xDEE3;
                int32_t ****l_458 = (void*)0;
                uint32_t l_467 = 1U;
                for (g_365 = 0; (g_365 < 22); g_365 = safe_add_func_uint16_t_u_u(g_365, 3))
                {
                    l_422 = (g_87 > 0x66);
                }
                if ((safe_sub_func_int8_t_s_s((safe_mul_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(0U, (0x66E181E8 || (safe_add_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_s(((((safe_mod_func_int8_t_s_s(0xCD, (safe_rshift_func_int16_t_s_u(l_418, 12)))) ^ ((void*)0 != (***g_170))) >= (safe_mul_func_int16_t_s_s((safe_mod_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((((safe_sub_func_int32_t_s_s(p_57, (p_57 >= g_2))) >= l_422) <= 0x913ACF49), 5)), p_57)), p_57))) ^ (-6)), 15)), p_57))))), 0x93)), p_57)), 0x5F)))
                {
                    int32_t l_465 = 0;
                    for (l_399 = 0; (l_399 != 41); ++l_399)
                    {
                        int8_t l_468 = (-1);
                        if (p_57)
                            break;
                        l_468 = ((safe_rshift_func_int8_t_s_u((safe_sub_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u((safe_sub_func_uint32_t_u_u(((l_457 == l_458) > (safe_mul_func_int8_t_s_s(((0x22 >= (65535U ^ (safe_lshift_func_int8_t_s_s(((((safe_mul_func_uint8_t_u_u(((((l_465 < (g_87 >= 1U)) | (((~((&g_170 != &l_417) >= g_365)) <= 0x55DD7CDD) | p_57)) < 5U) & g_226), 8)) | g_87) <= 0) && l_465), 0)))) & 0xEF98C274), g_2))), 0x9BB46EE7)), l_467)), p_57)), 5)) | g_365);
                        (***l_457) = l_370;
                    }
                    return g_226;
                }
                else
                {
                    uint16_t l_477 = 0x6C56;
                    int32_t **l_480 = (void*)0;
                    if (p_57)
                    {
                        int8_t l_479 = 0x2A;
                        int32_t *l_481 = &g_87;
                        l_479 = (g_226 == (p_57 | ((safe_mod_func_uint16_t_u_u((p_57 != (0U > ((void*)0 != (***g_329)))), (safe_add_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(((safe_sub_func_int16_t_s_s(l_477, ((*l_457) != g_478))) < l_477), 3)), g_2)))) >= g_2)));
                        (*l_481) = (l_480 != (void*)0);
                        (*g_172) = (void*)0;
                    }
                    else
                    {
                        int32_t *l_482 = &g_87;
                        (*l_482) = (p_57 || (-4));
                        (*l_482) = (safe_rshift_func_uint8_t_u_u(p_57, g_365));
                        return g_365;
                    }
                }
                if (((safe_lshift_func_int16_t_s_u(0x0C36, ((****g_329) == (***g_170)))) != ((safe_add_func_int8_t_s_s((~p_57), (p_57 || 0xFF))) <= ((p_57 | (6U > ((safe_add_func_uint32_t_u_u((safe_add_func_uint16_t_u_u(p_57, 1)), p_57)) ^ p_57))) | 1))))
                {
                    int16_t l_494 = 1;
                    int32_t ***l_504 = &g_172;
                    uint8_t l_509 = 0xE9;
                    int32_t *l_532 = (void*)0;
                    l_494 = 0x610D8614;
                    l_510 = (safe_sub_func_uint16_t_u_u(((safe_sub_func_uint16_t_u_u((+((((safe_lshift_func_int8_t_s_u(((safe_rshift_func_int16_t_s_s(((((void*)0 != l_504) <= (safe_rshift_func_int16_t_s_s(0xB5A0, ((void*)0 != (*l_504))))) || (~((void*)0 != l_417))), (l_508 == (void*)0))) | p_57), 5)) || l_509) != p_57) != g_226)), p_57)) > 0U), 65535U));
                    if ((((0 & (safe_mod_func_uint16_t_u_u((((((~((((*g_329) != l_457) != (p_57 == (safe_rshift_func_int8_t_s_s((safe_mul_func_int8_t_s_s((safe_sub_func_int32_t_s_s((((p_57 < g_226) < ((safe_mul_func_int16_t_s_s(g_365, ((safe_lshift_func_int8_t_s_u(g_524, 0)) == (safe_add_func_uint16_t_u_u(((((g_524 >= g_226) && g_87) || 0xEF3ABFB5) || p_57), 0U))))) == p_57)) < 0x56), 4294967295U)), g_524)), 5)))) && p_57)) && p_57) <= p_57) || g_87) <= g_524), p_57))) ^ p_57) == g_365))
                    {
                        return g_2;
                    }
                    else
                    {
                        int32_t *l_527 = (void*)0;
                        int32_t ****l_531 = &l_504;
                        (**g_171) = l_527;
                        (**g_478) = func_60((*l_402), (safe_rshift_func_uint16_t_u_u((g_365 > (safe_unary_minus_func_int8_t_s(g_226))), (l_531 != (void*)0))), l_532, (****g_329));
                        l_533 = ((**g_329) == (*l_531));
                    }
                }
                else
                {
                    (**g_478) = (***l_457);
                }
            }
        }
        for (g_524 = 0; (g_524 == 13); ++g_524)
        {
            for (l_533 = (-29); (l_533 < 7); l_533 = safe_add_func_uint16_t_u_u(l_533, 8))
            {
                return p_57;
            }
        }
    }
    else
    {
        uint16_t l_545 = 0U;
        int32_t *****l_554 = &g_170;
        uint16_t l_557 = 9U;
        if ((safe_add_func_int32_t_s_s((!((void*)0 != (*l_508))), 0xF2559C4E)))
        {
            uint8_t l_541 = 0x26;
            l_541 = 0x9F482893;
            l_557 = ((safe_add_func_uint8_t_u_u(((!p_57) < (l_545 & (safe_sub_func_int8_t_s_s(p_57, p_57)))), p_57)) > (safe_lshift_func_uint8_t_u_u((safe_add_func_int32_t_s_s((((safe_mul_func_uint16_t_u_u((l_554 != &g_170), 1)) || (safe_lshift_func_uint8_t_u_s((((((p_57 == 2U) < p_57) < g_365) && p_57) | 0x90CF), l_541))) || g_365), g_226)), 4)));
        }
        else
        {
            uint16_t l_568 = 65527U;
            l_569 = (safe_add_func_int16_t_s_s(((-1) > (1 == g_87)), (safe_rshift_func_int16_t_s_s(((((6 || g_524) | (safe_mul_func_int8_t_s_s(g_226, ((safe_sub_func_uint32_t_u_u(((((*g_329) != (*l_554)) || (((safe_add_func_int16_t_s_s(p_57, 0xB47D)) | p_57) >= l_568)) != p_57), p_57)) & 0xDE3F)))) | p_57) < 0x9D93F26B), 7))));
        }
        if (l_557)
        {
            uint32_t l_570 = 0xF38F014C;
            int32_t *l_571 = &g_87;
            (*g_384) = func_60((****l_554), l_570, (**l_508), (****g_329));
            (*l_571) = ((*g_329) != &l_508);
        }
        else
        {
            int32_t l_572 = 0xF09F6C47;
            l_572 = l_572;
        }
        (*g_384) = func_60(func_60((**l_508), g_365, (**l_508), (**l_508)), (!(l_574 != (p_57 <= ((((***l_554) != (***g_329)) <= (-1)) || g_226)))), (**l_508), (**g_478));
    }
    g_365 = l_575;
    (***g_170) = func_60((**l_508), p_57, func_60(func_60(func_60(func_60((*g_172), l_576, l_577, (**l_508)), g_87, func_60(func_60((**l_508), p_57, (***g_170), (**l_508)), g_226, (**l_508), (**l_508)), (**g_171)), (*l_577), (**l_508), (**g_478)), (*l_577), (**l_508), (**l_508)), (**l_508));
    return g_2;
}
static int8_t func_58(int32_t * p_59)
{
    int32_t *l_342 = &g_87;
    (**g_171) = (void*)0;
    (*l_342) = (g_226 ^ 0xB0);
    return (*l_342);
}
static int32_t * func_60(int32_t * p_61, uint32_t p_62, int32_t * p_63, int32_t * p_64)
{
    uint32_t l_96 = 1U;
    int32_t *l_112 = &g_87;
    int32_t l_126 = 2;
    int32_t ***l_295 = &g_172;
    int32_t **l_320 = &l_112;
    int16_t l_325 = 0xD4E3;
    uint32_t l_327 = 0x65F1DF76;
    int32_t *****l_338 = &g_170;
    for (p_62 = 0; (p_62 == 17); p_62 = safe_add_func_int16_t_s_s(p_62, 9))
    {
        int32_t *l_67 = (void*)0;
        int32_t **l_68 = &l_67;
        int8_t l_75 = (-7);
        int32_t l_181 = 0x3A1CE40C;
        int32_t l_218 = 0x110C5E2D;
        int16_t l_219 = 0x1976;
        int32_t *****l_304 = &g_170;
        uint8_t l_323 = 0x90;
        (*l_68) = l_67;
    }
    return p_63;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    g_137 = 0;
    csmith_sink_ = g_2;
    csmith_sink_ = g_87;
    csmith_sink_ = g_226;
    csmith_sink_ = g_365;
    csmith_sink_ = g_524;
    csmith_sink_ = g_692;
    csmith_sink_ = g_769;
    csmith_sink_ = g_935;
    csmith_sink_ = g_991;
    platform_main_end(0,0);
    return 0;
}
