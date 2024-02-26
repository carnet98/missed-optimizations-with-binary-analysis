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
static int32_t g_18 = 5L;
static uint16_t g_30[10][2] = {{0xE450L,0x7DDBL},{0UL,0xE450L},{65527UL,65527UL},{65527UL,0xE450L},{0UL,0x7DDBL},{0xE450L,0x7DDBL},{0UL,0xE450L},{65527UL,65527UL},{65527UL,0xE450L},{0UL,0x7DDBL}};
static int32_t g_36 = 6L;
static int32_t g_84 = 0x79A83ADAL;
static int32_t g_147 = 0x85D133FDL;
static int32_t *g_146[3][6][4] = {{{(void*)0,(void*)0,&g_36,&g_36},{&g_147,&g_147,&g_147,&g_36},{&g_147,&g_36,&g_147,&g_36},{&g_147,&g_36,&g_147,&g_147},{&g_147,&g_147,(void*)0,&g_147},{&g_36,&g_147,&g_36,&g_36}},{{&g_147,&g_147,&g_147,&g_147},{&g_36,&g_147,&g_147,&g_147},{&g_36,&g_147,&g_36,&g_147},{(void*)0,&g_147,&g_147,&g_147},{&g_147,&g_147,&g_36,&g_147},{(void*)0,&g_36,&g_147,&g_36}},{{(void*)0,(void*)0,&g_36,&g_36},{&g_36,&g_147,&g_147,&g_36},{&g_147,&g_147,&g_36,&g_147},{&g_147,&g_147,&g_36,&g_36},{(void*)0,(void*)0,&g_147,&g_36},{&g_147,&g_147,&g_36,&g_36}}};
static int32_t **g_149 = &g_146[0][0][2];
static int32_t ***g_148 = &g_149;
static int32_t ****g_193 = &g_148;
static int32_t *****g_192 = &g_193;
static int8_t g_476 = 0x28L;
static int32_t g_480 = (-1L);
static int8_t g_496 = 0xB2L;
inline static uint8_t func_1(void);
static int8_t func_2(int16_t p_3);
inline static uint16_t func_8(int16_t p_9);
inline static uint8_t func_22(uint32_t p_23, uint16_t p_24, int32_t p_25, int32_t p_26, int32_t p_27);
static int32_t * func_31(int32_t * p_32, uint8_t p_33, int32_t p_34);
inline static uint8_t func_41(uint32_t p_42, uint32_t p_43);
static uint16_t func_44(uint32_t p_45);
static uint8_t func_52(int32_t * p_53, uint32_t p_54, uint8_t p_55);
inline static int32_t * func_56(int8_t p_57);
inline static int32_t func_60(uint8_t p_61, int32_t p_62, int32_t * p_63, int32_t * p_64);
inline static uint8_t func_1(void)
{
    uint32_t l_19[8];
    int32_t *l_481[8][3][8] = {{{&g_36,&g_36,&g_36,(void*)0,&g_147,&g_147,&g_36,&g_147},{&g_147,&g_147,&g_36,&g_36,&g_36,(void*)0,&g_147,&g_147},{(void*)0,&g_147,&g_147,&g_147,&g_147,&g_147,&g_147,&g_147}},{{(void*)0,(void*)0,&g_147,&g_147,&g_147,&g_36,&g_36,&g_36},{(void*)0,&g_147,&g_36,&g_147,(void*)0,&g_147,(void*)0,&g_36},{&g_147,&g_36,&g_147,&g_147,&g_147,(void*)0,&g_147,&g_147}},{{&g_147,&g_147,&g_147,&g_147,&g_147,&g_36,(void*)0,&g_147},{&g_147,&g_36,(void*)0,&g_36,&g_147,&g_147,&g_36,&g_147},{&g_147,&g_147,(void*)0,(void*)0,&g_147,&g_147,&g_36,&g_36}},{{&g_147,&g_36,&g_147,&g_36,&g_147,&g_36,(void*)0,(void*)0},{(void*)0,&g_36,&g_36,&g_147,&g_36,&g_36,(void*)0,&g_147},{&g_147,(void*)0,&g_147,&g_147,(void*)0,(void*)0,&g_36,&g_147}},{{&g_147,&g_36,&g_147,&g_36,(void*)0,&g_147,(void*)0,&g_147},{&g_147,&g_147,&g_36,&g_147,&g_36,&g_147,&g_147,&g_147},{(void*)0,&g_36,&g_36,&g_147,&g_147,&g_36,&g_147,&g_147}},{{&g_147,(void*)0,&g_147,&g_36,&g_147,(void*)0,&g_147,&g_36},{&g_147,(void*)0,&g_147,&g_36,&g_147,&g_147,&g_147,&g_36},{&g_147,&g_147,&g_36,&g_147,&g_147,&g_36,&g_36,&g_147}},{{&g_147,&g_147,&g_147,(void*)0,&g_36,&g_147,&g_147,&g_36},{(void*)0,&g_147,&g_36,&g_147,&g_147,&g_147,&g_36,&g_147},{&g_36,&g_147,(void*)0,&g_147,&g_147,&g_147,&g_147,&g_147}},{{&g_147,&g_147,&g_147,&g_147,&g_147,&g_147,&g_36,(void*)0},{(void*)0,&g_36,&g_36,&g_147,&g_147,&g_147,(void*)0,&g_36},{&g_36,&g_147,&g_36,&g_147,(void*)0,&g_147,(void*)0,&g_147}}};
    uint8_t l_488 = 0x19L;
    int32_t ***l_505 = &g_149;
    int16_t l_508 = 1L;
    uint32_t l_509 = 0x05096AF4L;
    int32_t l_510 = 0xB03DB69EL;
    int i, j, k;
    for (i = 0; i < 8; i++)
        l_19[i] = 0x0184DCC8L;
    if ((func_2(((safe_rshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(func_8((safe_sub_func_int32_t_s_s((0xC000L >= (safe_mul_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(0xBA20L, 9)), (((safe_sub_func_uint8_t_u_u(g_18, l_19[3])) ^ 0x65C2L) != (safe_lshift_func_uint8_t_u_s(((func_22(l_19[7], g_18, g_18, g_18, l_19[3]) == 0UL) | l_19[3]), g_18)))))), 0xB963E05AL))), 6)), 7)) == g_18)) != l_19[4]))
    {
        uint8_t l_475 = 3UL;
        int32_t l_477 = 0x2AF9B539L;
        int16_t l_483 = 0xC75EL;
        for (g_84 = 0; (g_84 < (-16)); g_84 = safe_sub_func_int32_t_s_s(g_84, 8))
        {
            int32_t *l_474[3];
            int i;
            for (i = 0; i < 3; i++)
                l_474[i] = &g_36;
            l_475 = 3L;
            if (g_476)
                break;
            l_477 = l_19[2];
            for (g_147 = 0; (g_147 > (-13)); --g_147)
            {
                if (l_19[3])
                    break;
                g_480 = 0L;
                if (l_19[3])
                    break;
            }
        }
        (***g_193) = l_481[6][1][2];
        l_477 = (g_480 == (!l_483));
        l_477 = l_475;
    }
    else
    {
        int8_t l_484[9][5][5] = {{{0xE1L,(-9L),1L,0x39L,1L},{(-9L),(-9L),0x6BL,0xC6L,1L},{0x0EL,(-9L),1L,1L,0x6BL},{0xA7L,(-9L),1L,3L,0xD8L},{0L,(-9L),0xD8L,(-9L),1L}},{{0xE1L,(-9L),1L,0x39L,1L},{(-9L),(-9L),0x6BL,0xC6L,1L},{0x0EL,(-9L),1L,1L,0x6BL},{0xA7L,(-9L),1L,3L,0xD8L},{0L,(-9L),0xD8L,(-9L),1L}},{{0xE1L,(-9L),1L,0x39L,1L},{(-9L),(-9L),0x6BL,0xC6L,1L},{0x0EL,(-9L),1L,1L,0x6BL},{0xA7L,(-9L),1L,3L,0xD8L},{0L,(-9L),0xD8L,(-9L),1L}},{{0xE1L,(-9L),1L,0x39L,1L},{(-9L),(-9L),0x6BL,0xC6L,1L},{0x0EL,(-9L),1L,1L,0x6BL},{0xA7L,(-9L),1L,3L,0xD8L},{0L,(-9L),0xD8L,(-9L),1L}},{{0xE1L,(-9L),1L,0x39L,1L},{(-9L),(-9L),0x6BL,0xC6L,1L},{0x0EL,(-9L),1L,1L,0x6BL},{0xA7L,(-9L),1L,3L,0xD8L},{0L,(-9L),0xD8L,(-9L),1L}},{{0xE1L,(-9L),1L,0x39L,1L},{(-9L),(-9L),0x6BL,0xC6L,1L},{0x0EL,(-9L),1L,1L,0x6BL},{0xA7L,(-9L),1L,0L,0x21L},{1L,0x6BL,0x21L,1L,(-1L)}},{{1L,0x6BL,0xE4L,2L,0xE4L},{0x6BL,0x6BL,0x46L,0x8AL,0x21L},{1L,0x6BL,(-1L),0x62L,0x46L},{0xD8L,0x6BL,0x21L,0L,0x21L},{1L,0x6BL,0x21L,1L,(-1L)}},{{1L,0x6BL,0xE4L,2L,0xE4L},{0x6BL,0x6BL,0x46L,0x8AL,0x21L},{1L,0x6BL,(-1L),0x62L,0x46L},{0xD8L,0x6BL,0x21L,0L,0x21L},{1L,0x6BL,0x21L,1L,(-1L)}},{{1L,0x6BL,0xE4L,2L,0xE4L},{0x6BL,0x6BL,0x46L,0x8AL,0x21L},{1L,0x6BL,(-1L),0x62L,0x46L},{0xD8L,0x6BL,0x21L,0L,0x21L},{1L,0x6BL,0x21L,1L,(-1L)}}};
        int32_t l_487[2];
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_487[i] = (-8L);
        (***g_193) = (*g_149);
        l_484[0][4][0] = ((void*)0 == &g_193);
        for (g_36 = (-17); (g_36 < 12); g_36 = safe_add_func_uint8_t_u_u(g_36, 9))
        {
            l_487[0] = l_484[0][4][0];
            l_487[0] = l_488;
            (***g_193) = (**g_148);
            (**g_148) = (*g_149);
        }
        for (g_147 = 0; (g_147 <= 1); g_147 += 1)
        {
            int32_t **l_490 = &g_146[0][2][0];
            for (l_488 = 0; (l_488 <= 1); l_488 += 1)
            {
                int32_t **l_489[8] = {&l_481[6][1][2],&l_481[6][1][2],&l_481[6][1][2],&l_481[6][1][2],&l_481[6][1][2],&l_481[6][1][2],&l_481[6][1][2],&l_481[6][1][2]};
                int i;
                l_490 = l_489[6];
            }
            ((void) sizeof (((l_490 >= &l_481[0][0][0] && l_490 <= &l_481[7][2][7]) || (l_490 >= &g_146[0][0][0] && l_490 <= &g_146[2][5][3])) ? 1 : 0), __extension__ ({ if ((l_490 >= &l_481[0][0][0] && l_490 <= &l_481[7][2][7]) || (l_490 >= &g_146[0][0][0] && l_490 <= &g_146[2][5][3])) ; else __assert_fail ("(l_490 >= &l_481[0][0][0] && l_490 <= &l_481[7][2][7]) || (l_490 >= &g_146[0][0][0] && l_490 <= &g_146[2][5][3])", "/tmp/tmp3b4_f_ac.c", 118, __extension__ __PRETTY_FUNCTION__); }));
        }
    }
    (*g_149) = (**l_505);
    return g_496;
}
static int8_t func_2(int16_t p_3)
{
    int32_t l_471 = 0x557D1DE0L;
    for (p_3 = 0; p_3 < 10; p_3 += 1)
    {
        for (g_18 = 0; g_18 < 2; g_18 += 1)
        {
            g_30[p_3][g_18] = 65534UL;
        }
    }
    for (g_36 = 0; (g_36 == (-1)); g_36--)
    {
        int8_t l_470 = 0x53L;
        if (l_470)
            break;
        return p_3;
    }
    return l_471;
}
inline static uint16_t func_8(int16_t p_9)
{
    int32_t *l_467 = &g_147;
    (***g_193) = l_467;
    return p_9;
}
inline static uint8_t func_22(uint32_t p_23, uint16_t p_24, int32_t p_25, int32_t p_26, int32_t p_27)
{
    int32_t ****l_439 = (void*)0;
    for (p_25 = 0; (p_25 != (-9)); p_25 = safe_sub_func_int8_t_s_s(p_25, 9))
    {
        int8_t l_451 = 3L;
        int32_t l_460 = 4L;
        for (p_24 = 0; (p_24 <= 1); p_24 += 1)
        {
            int32_t *l_35 = &g_36;
            int i, j;
            (**g_148) = func_31(l_35, (safe_add_func_uint16_t_u_u(0UL, (safe_sub_func_uint8_t_u_u(0xE2L, func_41((func_44(g_30[(p_24 + 3)][p_24]) | ((((l_439 == l_439) > (safe_add_func_uint16_t_u_u((0x7853L & g_30[(p_24 + 1)][p_24]), 0xADCCL))) | g_18) && (-8L))), g_18))))), l_451);
            l_460 = 0x7B3D9533L;
        }
    }
    g_192 = &l_439;
    ((void) sizeof ((g_192 == &l_439) ? 1 : 0), __extension__ ({ if (g_192 == &l_439) ; else __assert_fail ("g_192 == &l_439", "/tmp/tmp3b4_f_ac.c", 189, __extension__ __PRETTY_FUNCTION__); }));
    p_27 = (safe_mod_func_int16_t_s_s((4294967291UL > (safe_lshift_func_int8_t_s_u(0x0AL, 3))), (safe_mul_func_int16_t_s_s(g_84, g_84))));
    return g_30[1][1];
}
static int32_t * func_31(int32_t * p_32, uint8_t p_33, int32_t p_34)
{
    int8_t l_458 = 0x11L;
    int32_t *l_459 = &g_36;
    (*p_32) = (safe_unary_minus_func_uint16_t_u(1UL));
    for (g_147 = 0; (g_147 > 10); g_147++)
    {
        int32_t l_457[9][5][3] = {{{0xCAA6AD1DL,6L,0x0A29ADFAL},{0xF0802A14L,(-3L),(-4L)},{0x39FF32F1L,(-3L),0x54FFE9F7L},{7L,6L,7L},{0x07B9D86AL,0L,(-3L)}},{{0x4DF09485L,0x73DC26DDL,0xBDC0AB17L},{0L,0x580B17C5L,0xF0802A14L},{(-3L),(-1L),0x1B23E048L},{0L,0xB2F41BC7L,0xCAA6AD1DL},{0x4DF09485L,0x39FF32F1L,0x73DC26DDL}},{{0x07B9D86AL,0x8B18059FL,3L},{7L,0x36AF4B79L,0L},{0x39FF32F1L,0xBDC0AB17L,0L},{0xF0802A14L,3L,3L},{0xCAA6AD1DL,0L,0x73DC26DDL}},{{6L,(-4L),0xCAA6AD1DL},{0xEF9496C1L,1L,0x1B23E048L},{(-7L),(-4L),0xF0802A14L},{0x36AF4B79L,1L,0xBDC0AB17L},{0x580B17C5L,(-4L),(-3L)}},{{0x0A29ADFAL,0L,7L},{0x8B18059FL,3L,0x54FFE9F7L},{3L,0xBDC0AB17L,(-4L)},{3L,0x36AF4B79L,0x0A29ADFAL},{0x8B18059FL,0x8B18059FL,(-7L)}},{{0x0A29ADFAL,0x39FF32F1L,6L},{0x580B17C5L,0xB2F41BC7L,(-1L)},{0x36AF4B79L,(-1L),(-1L)},{(-7L),0x580B17C5L,(-1L)},{0xEF9496C1L,0x73DC26DDL,6L}},{{6L,0L,(-7L)},{0xCAA6AD1DL,6L,0x0A29ADFAL},{0xF0802A14L,(-3L),(-4L)},{0x39FF32F1L,(-3L),0L},{0xEF9496C1L,0xF0802A14L,0xEF9496C1L}},{{0x73DC26DDL,0x07B9D86AL,0x54FFE9F7L},{(-7L),(-1L),0x580B17C5L},{0x4DF09485L,(-4L),3L},{0x54FFE9F7L,6L,(-1L)},{0x4DF09485L,0x0A29ADFAL,(-1L)}},{{(-7L),0x36AF4B79L,(-1L)},{0x73DC26DDL,0xC2285C87L,0xB2F41BC7L},{0xEF9496C1L,(-3L),0x07B9D86AL},{0x36AF4B79L,0x580B17C5L,0x07B9D86AL},{3L,0xB2F41BC7L,0xB2F41BC7L}}};
        int i, j, k;
        for (p_33 = (-8); (p_33 != 50); ++p_33)
        {
            (*p_32) = (*p_32);
        }
        if (l_457[8][2][1])
            break;
    }
    (**g_148) = func_56(l_458);
    return l_459;
}
inline static uint8_t func_41(uint32_t p_42, uint32_t p_43)
{
    int16_t l_444 = 0x0E8BL;
    int32_t *****l_445 = &g_193;
    int32_t l_450 = 0xE7A1A031L;
    if (p_43)
    {
        int16_t l_448 = 0xD871L;
        l_450 = (((safe_mul_func_int8_t_s_s((l_444 != (l_445 == (void*)0)), ((safe_mod_func_uint8_t_u_u(g_36, (((**g_193) != (***l_445)) | l_448))) != (~p_42)))) != ((p_42 >= l_448) ^ p_42)) < g_36);
        (****g_192) = (void*)0;
    }
    else
    {
        (****l_445) = (void*)0;
    }
    return g_18;
}
static uint16_t func_44(uint32_t p_45)
{
    int8_t l_280 = 0x91L;
    int32_t *****l_329 = (void*)0;
    uint16_t l_438 = 3UL;
    if (((g_30[2][1] > (safe_sub_func_int32_t_s_s((safe_mul_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_u(p_45, 3)) ^ func_52(func_56(p_45), ((safe_rshift_func_int16_t_s_s(p_45, l_280)) && (((safe_rshift_func_uint8_t_u_s(0xE5L, 5)) > 8UL) > (((0L >= l_280) >= g_30[3][0]) & l_280))), l_280)), l_280)), 0xBBC25965L))) || p_45))
    {
        int32_t *l_327 = &g_36;
        int32_t l_328 = (-5L);
        int32_t ****l_336 = &g_148;
        for (p_45 = 4; (p_45 >= 50); p_45 = safe_add_func_uint16_t_u_u(p_45, 7))
        {
            uint8_t l_303 = 0xEAL;
            int32_t ****l_311 = &g_148;
            for (g_36 = 25; (g_36 >= (-26)); g_36 = safe_sub_func_int32_t_s_s(g_36, 3))
            {
                int16_t l_317 = 0xF2C3L;
                int32_t l_326 = 1L;
                if ((+l_303))
                {
                    int32_t *l_305 = &g_147;
                    (*l_305) = (~g_84);
                    return g_30[1][1];
                }
                else
                {
                    int32_t ***l_325[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_325[i] = &g_149;
                    for (g_147 = 1; (g_147 >= 0); g_147 -= 1)
                    {
                        int32_t l_306[6][1][9] = {{{0x49899420L,0x49899420L,0xC2600E6AL,0x49899420L,0x49899420L,0xC2600E6AL,0x49899420L,0x49899420L,0xC2600E6AL}},{{1L,1L,0x53CD4180L,1L,1L,0x53CD4180L,1L,1L,0x53CD4180L}},{{0x49899420L,0x49899420L,0xC2600E6AL,0x49899420L,0x49899420L,0xC2600E6AL,0x49899420L,0x49899420L,0xC2600E6AL}},{{1L,1L,0x53CD4180L,1L,1L,0x53CD4180L,1L,1L,0x53CD4180L}},{{0x49899420L,0x49899420L,0xC2600E6AL,0x49899420L,0x49899420L,0xC2600E6AL,0x49899420L,0x49899420L,0xC2600E6AL}},{{1L,1L,0x53CD4180L,1L,1L,0x53CD4180L,1L,1L,0x53CD4180L}}};
                        int i, j, k;
                        l_306[3][0][7] = (-5L);
                        if (p_45)
                            break;
                    }
                    if ((((*g_192) == (*g_192)) < ((safe_sub_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(l_303, 0)), g_18)) | ((void*)0 == l_311))))
                    {
                        l_326 = (~(((safe_add_func_int16_t_s_s(((safe_mod_func_int8_t_s_s(l_317, ((g_36 > (safe_add_func_int16_t_s_s((((!((safe_sub_func_uint16_t_u_u(((void*)0 != &g_193), (safe_sub_func_uint32_t_u_u((l_325[1] != (*g_193)), g_36)))) < p_45)) <= 0x3E37L) <= l_280), 0xD56CL))) && p_45))) ^ g_36), 1UL)) | p_45) >= g_147));
                        (*g_192) = (*g_192);
                        (***g_193) = l_327;
                        if (l_317)
                            break;
                    }
                    else
                    {
                        l_328 = p_45;
                        (**g_148) = (*g_149);
                        l_329 = &g_193;
                        ((void) sizeof ((l_329 == &g_193) ? 1 : 0), __extension__ ({ if (l_329 == &g_193) ; else __assert_fail ("l_329 == &g_193", "/tmp/tmp3b4_f_ac.c", 306, __extension__ __PRETTY_FUNCTION__); }));
                    }
                    if (l_326)
                        continue;
                    (**g_148) = (void*)0;
                }
                if (p_45)
                    break;
            }
            if ((*l_327))
                continue;
            for (g_84 = 0; (g_84 <= 2); g_84 += 1)
            {
                int32_t *****l_330 = (void*)0;
                (***g_193) = (void*)0;
                for (g_147 = 0; (g_147 <= 2); g_147 += 1)
                {
                    int32_t *****l_333 = &l_311;
                    int16_t l_358 = 0x09F7L;
                    int i, j, k;
                    g_146[g_84][g_84][(g_84 + 1)] = g_146[g_84][g_147][g_147];
                }
            }
            (*l_327) = p_45;
        }
        ((void) sizeof ((l_329 == &g_193 || l_329 == 0) ? 1 : 0), __extension__ ({ if (l_329 == &g_193 || l_329 == 0) ; else __assert_fail ("l_329 == &g_193 || l_329 == 0", "/tmp/tmp3b4_f_ac.c", 332, __extension__ __PRETTY_FUNCTION__); }));
    }
    else
    {
        int32_t *****l_363 = &g_193;
        l_363 = l_363;
    }
    ((void) sizeof ((l_329 == &g_193 || l_329 == 0) ? 1 : 0), __extension__ ({ if (l_329 == &g_193 || l_329 == 0) ; else __assert_fail ("l_329 == &g_193 || l_329 == 0", "/tmp/tmp3b4_f_ac.c", 340, __extension__ __PRETTY_FUNCTION__); }));
    for (g_147 = 6; (g_147 == (-8)); g_147 = safe_sub_func_int16_t_s_s(g_147, 3))
    {
        int32_t *l_374 = &g_147;
        for (l_280 = 0; (l_280 > 14); l_280 = safe_add_func_uint8_t_u_u(l_280, 6))
        {
            int32_t *l_368 = &g_147;
            int32_t *l_369 = (void*)0;
            int32_t *l_370 = &g_36;
            (***g_193) = l_368;
            (*l_370) = (0x49A6F945L > p_45);
        }
        for (g_84 = 0; (g_84 <= 2); g_84 += 1)
        {
            int16_t l_371 = 0x5DB3L;
            uint32_t l_412[9][2][6] = {{{0UL,1UL,3UL,18446744073709551614UL,1UL,18446744073709551614UL},{1UL,0x6198F1B2L,1UL,5UL,0xC7958272L,1UL}},{{1UL,0xF43A48F0L,0UL,3UL,1UL,0x4A5D0BC7L},{0xD85DBEB4L,18446744073709551612UL,0UL,3UL,0x03725270L,5UL}},{{1UL,1UL,0xB9E783FFL,5UL,0UL,18446744073709551611UL},{1UL,0xBA9512BAL,0x2A1DFCF9L,18446744073709551614UL,7UL,0x6FC845DFL}},{{0UL,0xC7958272L,0xD85DBEB4L,0xEA5E7D4BL,0x2B244828L,0x2B244828L},{0x473A7802L,18446744073709551609UL,18446744073709551609UL,0x473A7802L,0xEA5E7D4BL,3UL}},{{0xC7958272L,0x4D034F18L,1UL,0UL,0x6198F1B2L,0x2A1DFCF9L},{0x03725270L,0x473A7802L,0xED56C7AFL,1UL,0x6198F1B2L,0xD7E2D96DL}},{{0x2B244828L,0x4D034F18L,7UL,18446744073709551612UL,0xEA5E7D4BL,1UL},{0x8343486BL,18446744073709551609UL,0UL,1UL,0x2B244828L,0UL}},{{0xD7E2D96DL,0xC7958272L,18446744073709551614UL,0x2B244828L,7UL,18446744073709551609UL},{0UL,0xBA9512BAL,1UL,0xBA9512BAL,0UL,0x473A7802L}},{{6UL,1UL,1UL,0x4D034F18L,0x03725270L,0UL},{3UL,18446744073709551612UL,0x6FC845DFL,1UL,1UL,0UL}},{{0xED305FA5L,0xF43A48F0L,1UL,0x6FC845DFL,0xC7958272L,0x473A7802L},{1UL,18446744073709551611UL,1UL,0xF43A48F0L,1UL,0x8343486BL}}};
            int32_t *l_435 = &g_36;
            int i, j, k;
            if (((l_371 > (safe_add_func_uint16_t_u_u((l_374 != l_374), (safe_sub_func_int16_t_s_s(0x3472L, (((-1L) || (l_371 > (g_147 < (safe_sub_func_int8_t_s_s((safe_mul_func_int16_t_s_s(((p_45 & 0xB8A8L) >= p_45), 2UL)), l_371))))) ^ 0x07L)))))) != 0xF085L))
            {
                int32_t l_385[4][10] = {{0x795A6053L,0x795A6053L,7L,0x795A6053L,0x795A6053L,7L,0x795A6053L,0x795A6053L,7L,0x795A6053L},{0x795A6053L,0x76CCA64AL,0x76CCA64AL,0x795A6053L,0x76CCA64AL,0x76CCA64AL,0x795A6053L,0x76CCA64AL,0x76CCA64AL,0x795A6053L},{0x76CCA64AL,0x795A6053L,0x76CCA64AL,0x76CCA64AL,0x795A6053L,0x76CCA64AL,0x76CCA64AL,0x795A6053L,0x76CCA64AL,0x76CCA64AL},{0x795A6053L,0x795A6053L,7L,0x795A6053L,0x795A6053L,7L,0x795A6053L,0x795A6053L,7L,0x795A6053L}};
                int32_t l_388 = (-1L);
                int16_t l_391[10][2] = {{0x3C18L,0x3C18L},{0x3C18L,(-1L)},{0x57EAL,0L},{(-1L),0L},{0x57EAL,(-1L)},{0x3C18L,0x3C18L},{0x3C18L,(-1L)},{0x57EAL,0L},{(-1L),0L},{0x57EAL,(-1L)}};
                int32_t *l_413 = &g_36;
                int i, j;
                if (p_45)
                    break;
                for (p_45 = 0; (p_45 <= 1); p_45 += 1)
                {
                    uint32_t l_384 = 0xE63A26EFL;
                    l_385[1][9] = (safe_unary_minus_func_uint8_t_u(l_384));
                }
                (*l_413) = ((safe_sub_func_int8_t_s_s((l_388 == (safe_sub_func_uint32_t_u_u(l_391[6][0], (~1UL)))), (safe_rshift_func_int16_t_s_u((safe_mod_func_uint8_t_u_u(((safe_add_func_uint8_t_u_u(((((g_36 | l_371) > 2UL) == (safe_unary_minus_func_int32_t_s(((safe_add_func_uint16_t_u_u((((safe_sub_func_int8_t_s_s(((-5L) & (((safe_mod_func_int32_t_s_s(((safe_add_func_uint32_t_u_u(((safe_lshift_func_int8_t_s_u((-5L), ((l_391[6][1] > p_45) == l_371))) | p_45), p_45)) ^ g_36), g_84)) != g_84) >= g_18)), p_45)) || (*l_374)) & 0xF6FA15BBL), 1L)) && 0xDC7968EFL)))) ^ g_18), g_84)) && p_45), g_147)), 15)))) & l_412[4][1][5]);
                (*l_413) = (((safe_sub_func_uint16_t_u_u((safe_add_func_int8_t_s_s((*l_413), ((0L & (~(safe_lshift_func_uint8_t_u_u(g_30[6][0], (p_45 || (*l_413)))))) & 1UL))), (1L | ((l_371 <= p_45) != (*l_374))))) ^ 0x83782908L) | 0x5DE98533L);
            }
            else
            {
                uint32_t l_433 = 1UL;
                int32_t *l_434 = &g_147;
                for (p_45 = 0; (p_45 <= 2); p_45 += 1)
                {
                    int i, j, k;
                    g_146[g_84][g_84][(p_45 + 1)] = g_146[g_84][(g_84 + 3)][g_84];
                }
                (*l_435) = (safe_add_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(247UL, ((p_45 ^ (((((safe_mul_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(((safe_add_func_int32_t_s_s(((l_433 == (l_434 != l_435)) | g_18), (*l_434))) >= g_30[6][1]), 9)), p_45)), p_45)) && (*l_374)) != g_36) & g_30[8][0]) ^ 6UL)) & 9UL))), (*l_435)));
            }
        }
    }
    l_438 = (p_45 > (safe_mul_func_int16_t_s_s(((*g_192) != (*g_192)), 9UL)));
    return p_45;
}
static uint8_t func_52(int32_t * p_53, uint32_t p_54, uint8_t p_55)
{
    uint16_t l_292 = 0xD3ECL;
    int32_t l_297 = (-7L);
    l_297 = ((safe_lshift_func_int16_t_s_u(0L, p_54)) <= ((((safe_mod_func_int32_t_s_s((!(((safe_add_func_int32_t_s_s((-3L), 0xAE36C6A7L)) >= ((p_55 == (safe_rshift_func_int16_t_s_s(l_292, 11))) >= ((l_292 ^ (safe_lshift_func_uint16_t_u_s(p_54, (((+(safe_unary_minus_func_int16_t_s((p_54 > 0x72L)))) | g_30[4][1]) >= 0L)))) ^ g_147))) | (-6L))), 0x7783CCC9L)) > 0xD353L) > g_30[4][1]) != l_292));
    return g_18;
}
inline static int32_t * func_56(int8_t p_57)
{
    int32_t l_77[5][2][1] = {{{9L},{0x82408623L}},{{9L},{0x82408623L}},{{9L},{0x82408623L}},{{9L},{0x82408623L}},{{9L},{0x82408623L}}};
    int32_t *l_277 = &g_36;
    int i, j, k;
    for (p_57 = (-5); (p_57 != 10); p_57 = safe_add_func_uint8_t_u_u(p_57, 5))
    {
        int32_t l_67 = (-1L);
        int32_t *l_85 = &g_36;
        (*l_85) = (func_60((safe_sub_func_int8_t_s_s(l_67, ((0x126315BFL ^ (safe_mod_func_int8_t_s_s((p_57 < ((((safe_sub_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u(255UL, ((safe_mul_func_int16_t_s_s((!((0x7E8B7DD1L && l_77[1][1][0]) != (safe_rshift_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((g_18 < p_57), (safe_mod_func_int8_t_s_s(((4294967286UL || g_18) ^ 0x06L), 252UL)))), g_18)))), 6L)) && p_57))), 4294967291UL)) && g_18) >= l_77[2][1][0]) ^ g_36)), p_57))) > g_84))), l_67, l_85, &g_36) || 0x82343345L);
    }
    (****g_192) = l_277;
    return (*g_149);
}
inline static int32_t func_60(uint8_t p_61, int32_t p_62, int32_t * p_63, int32_t * p_64)
{
    int32_t *l_87 = &g_36;
    int32_t **l_86[9] = {&l_87,&l_87,&l_87,&l_87,&l_87,&l_87,&l_87,&l_87,&l_87};
    uint32_t l_96 = 0xFFC42E2EL;
    int32_t ***l_151[6][3][3] = {{{(void*)0,&l_86[4],(void*)0},{&g_149,&g_149,&l_86[6]},{&g_149,&g_149,&l_86[5]}},{{&g_149,&g_149,&l_86[2]},{&l_86[6],&l_86[4],&l_86[6]},{&g_149,&g_149,(void*)0}},{{(void*)0,(void*)0,&l_86[4]},{(void*)0,&g_149,(void*)0},{&l_86[6],&l_86[6],&l_86[6]}},{{&l_86[8],(void*)0,&l_86[2]},{(void*)0,&l_86[6],&l_86[5]},{(void*)0,&l_86[6],&l_86[6]}},{{(void*)0,&g_149,(void*)0},{&l_86[8],&l_86[4],&g_149},{&l_86[6],(void*)0,(void*)0}},{{(void*)0,&l_86[2],&g_149},{(void*)0,(void*)0,&g_149},{&g_149,&l_86[4],&l_86[6]}}};
    int32_t *****l_275 = (void*)0;
    int32_t l_276[4][5][3] = {{{6L,0x1D59750AL,(-9L)},{0x1D59750AL,0L,0xEFF3E88CL},{6L,0x6C29E382L,6L},{0xD4169CB3L,(-9L),0x978FE401L},{0x0497F3A2L,0x0677575DL,(-1L)}},{{6L,(-1L),(-1L)},{0x1D59750AL,8L,0x978FE401L},{0x6EFC7179L,0L,6L},{0xF5F39972L,0xF69DBDDCL,0xEFF3E88CL},{0x47298B66L,0x0677575DL,(-9L)}},{{6L,0xF69DBDDCL,(-9L)},{0x1D59750AL,0L,0L},{0x52C77892L,8L,6L},{0x0677575DL,(-1L),0x31A1BC2AL},{0x0677575DL,0x0677575DL,0x1D59750AL}},{{0x52C77892L,(-9L),0xF69DBDDCL},{0x1D59750AL,0x6C29E382L,1L},{6L,0L,0xEFF3E88CL},{0xF69DBDDCL,6L,0L},{(-9L),0x1D59750AL,6L}}};
    int i, j, k;
lbl_260:
    p_63 = &g_36;
    if (((safe_mod_func_int32_t_s_s(g_36, (((((void*)0 != &l_87) || (safe_mod_func_uint16_t_u_u(((g_30[1][1] && p_62) <= ((((((safe_add_func_int16_t_s_s((((g_36 & (safe_add_func_int32_t_s_s((p_61 < (1L > p_62)), (*p_64)))) < 3UL) <= (*p_63)), 0x75FBL)) || g_30[0][0]) & 9L) != (-9L)) != 0x86F270ADL) <= 0x02E8L)), (*l_87)))) <= l_96) && (-2L)))) & (-6L)))
    {
        int32_t *l_99 = &g_36;
        (*p_63) = ((*p_64) & ((void*)0 != &p_64));
        for (p_62 = 0; (p_62 == 22); p_62 = safe_add_func_int8_t_s_s(p_62, 7))
        {
            int32_t *l_100 = &g_36;
            l_100 = l_99;
        }
        p_64 = p_64;
    }
    else
    {
        int32_t l_107[1];
        int32_t *l_120[1];
        int32_t l_132[3];
        int32_t *****l_194[7] = {&g_193,&g_193,&g_193,&g_193,&g_193,&g_193,&g_193};
        int16_t l_205 = 0xBED5L;
        int32_t *l_240 = &g_36;
        int i;
        for (i = 0; i < 1; i++)
            l_107[i] = 0xEAB3286BL;
        for (i = 0; i < 1; i++)
            l_120[i] = &g_36;
        for (i = 0; i < 3; i++)
            l_132[i] = 0xF960B338L;
        if (((~(p_62 != (p_62 >= (~(safe_mod_func_int8_t_s_s((safe_add_func_int16_t_s_s((l_107[0] & (safe_rshift_func_uint16_t_u_s(((safe_rshift_func_int16_t_s_s((+((1L | (safe_rshift_func_int16_t_s_u((((void*)0 != &g_36) && l_107[0]), 7))) && ((void*)0 == p_63))), 8)) < g_36), 15))), (-3L))), 255UL)))))) || p_62))
        {
            uint32_t l_117 = 18446744073709551615UL;
            int32_t *l_145[8] = {&l_132[1],&l_132[1],&l_132[1],&l_132[1],&l_132[1],&l_132[1],&l_132[1],&l_132[1]};
            int32_t ***l_171[4][8][3] = {{{&g_149,&g_149,&l_86[6]},{&l_86[2],&l_86[6],&l_86[2]},{&g_149,&l_86[6],&l_86[6]},{&l_86[1],&l_86[6],&g_149},{&l_86[6],&g_149,&l_86[6]},{&l_86[2],(void*)0,&l_86[2]},{&l_86[6],&l_86[6],&l_86[6]},{&l_86[1],(void*)0,&g_149}},{{&g_149,&g_149,&l_86[6]},{&l_86[2],&l_86[6],&l_86[2]},{&g_149,&l_86[6],&l_86[6]},{&l_86[1],&l_86[6],&g_149},{&l_86[6],&g_149,&l_86[6]},{&l_86[2],(void*)0,&l_86[2]},{&l_86[6],&l_86[6],&l_86[6]},{&l_86[1],(void*)0,&g_149}},{{&g_149,&g_149,&l_86[6]},{&l_86[2],&l_86[6],&l_86[2]},{&g_149,&l_86[6],&l_86[6]},{&l_86[1],&l_86[6],&g_149},{&l_86[6],&g_149,&l_86[6]},{&l_86[2],(void*)0,&l_86[2]},{&l_86[6],&l_86[6],&l_86[6]},{&l_86[1],(void*)0,&g_149}},{{&g_149,&g_149,&l_86[6]},{&l_86[2],&l_86[6],&l_86[2]},{&g_149,&l_86[6],&l_86[6]},{&l_86[1],&l_86[6],&g_149},{&l_86[6],&g_149,&l_86[6]},{&l_86[2],(void*)0,&l_86[2]},{&l_86[6],&l_86[6],&l_86[6]},{&l_86[1],(void*)0,&g_149}}};
            int16_t l_234 = 1L;
            int i, j, k;
            if ((safe_lshift_func_int16_t_s_u(l_117, ((g_84 < g_18) & (((safe_lshift_func_int16_t_s_u(((l_107[0] != (l_120[0] == (void*)0)) ^ (((safe_lshift_func_uint16_t_u_s(((safe_mod_func_int16_t_s_s((safe_mul_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((safe_mul_func_uint16_t_u_u(l_117, ((safe_unary_minus_func_int8_t_s(g_18)) | (*p_63)))), p_62)), l_132[1])), g_18)) ^ g_36), g_18)) >= g_18) < (-3L))), (*l_87))) < p_62) & g_84)))))
            {
                int32_t *l_133 = &l_132[0];
                (*l_87) = (((void*)0 == l_133) < (*l_133));
                if (((safe_mul_func_int8_t_s_s(l_117, (1UL < (safe_rshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_u(((*p_63) >= (!p_61)), 6)), 15))))) >= (+1L)))
                {
                    for (g_36 = 20; (g_36 > (-27)); --g_36)
                    {
                        uint32_t l_144 = 18446744073709551611UL;
                        l_144 = (*p_64);
                        l_145[3] = p_63;
                        g_146[0][0][2] = &g_36;
                    }
                    for (l_96 = 0; (l_96 <= 2); l_96 += 1)
                    {
                        int32_t ****l_150[6] = {&g_148,&g_148,&g_148,&g_148,&g_148,&g_148};
                        int i;
                        l_151[5][2][0] = g_148;
                    }
                }
                else
                {
                    return (*p_64);
                }
            }
            else
            {
                int32_t ****l_153[2];
                int32_t *****l_152 = &l_153[0];
                int i;
                for (i = 0; i < 2; i++)
                    l_153[i] = &l_151[0][0][0];
                (*l_152) = &g_148;
            }
            for (g_147 = 0; (g_147 != (-11)); --g_147)
            {
                uint8_t l_156 = 0UL;
                int32_t l_157 = (-10L);
                uint32_t l_174[7][10] = {{0UL,0UL,0xC5D88C53L,18446744073709551614UL,0x0FB40517L,0xD93F2D2CL,4UL,4UL,0xD93F2D2CL,0x0FB40517L},{0xF8BFC28CL,0UL,0UL,0xF8BFC28CL,18446744073709551609UL,0xD93F2D2CL,0x6AFEBA28L,0xC5D88C53L,0x0FB40517L,0xC5D88C53L},{0UL,18446744073709551615UL,0xBE924755L,0xC5D88C53L,0xBE924755L,18446744073709551615UL,0UL,0x6AFEBA28L,0x0FB40517L,0UL},{0x6AFEBA28L,0xD93F2D2CL,18446744073709551609UL,0xF8BFC28CL,0UL,0UL,0xF8BFC28CL,18446744073709551609UL,0xD93F2D2CL,0x6AFEBA28L},{4UL,0xD93F2D2CL,0x0FB40517L,18446744073709551614UL,0xC5D88C53L,0UL,0UL,0UL,0xC5D88C53L,18446744073709551614UL},{18446744073709551614UL,18446744073709551615UL,18446744073709551614UL,0xD93F2D2CL,0xC5D88C53L,3UL,0x6AFEBA28L,0xBE924755L,0xBE924755L,0x6AFEBA28L},{0xC5D88C53L,0UL,3UL,3UL,0UL,0xC5D88C53L,0xD93F2D2CL,0x6AFEBA28L,0xC5D88C53L,0x0FB40517L}};
                int32_t *****l_197[9] = {&g_193,&g_193,&g_193,&g_193,&g_193,&g_193,&g_193,&g_193,&g_193};
                int i, j;
                l_157 = ((l_156 & ((((void*)0 == (*g_148)) == l_156) == p_61)) & 0x41B6L);
                for (g_84 = 0; (g_84 > (-21)); g_84 = safe_sub_func_int16_t_s_s(g_84, 5))
                {
                    int32_t l_166 = 0x96BB96E4L;
                    (*g_149) = (*g_149);
                    l_145[3] = (void*)0;
                    for (l_156 = 0; (l_156 >= 54); l_156++)
                    {
                        (*p_63) = ((safe_mul_func_int16_t_s_s((((safe_mod_func_uint8_t_u_u(((l_166 != (((safe_mod_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((l_171[2][5][0] != (void*)0), 1L)), p_62)) | (((-4L) & p_62) >= l_156)) != (((safe_rshift_func_int16_t_s_s(g_147, 0)) > p_62) >= p_62))) && 0x5490C034L), g_36)) >= 65532UL) >= (-3L)), g_18)) && l_174[2][3]);
                        (**g_148) = p_64;
                    }
                    for (p_61 = 1; (p_61 == 37); p_61 = safe_add_func_uint16_t_u_u(p_61, 6))
                    {
                        return (*p_63);
                    }
                }
                for (l_117 = 0; (l_117 <= 22); ++l_117)
                {
                    int32_t l_195 = 0xDEFA84F3L;
                }
                (*p_64) = (safe_mod_func_int32_t_s_s(((safe_sub_func_int8_t_s_s((~((void*)0 == p_63)), ((*g_192) != &l_151[5][2][0]))) & p_61), p_62));
            }
            (***g_193) = l_240;
            p_64 = p_64;
        }
        else
        {
            uint16_t l_241 = 0x1215L;
            int32_t *l_258[1];
            int32_t ****l_259[1];
            int i;
            for (i = 0; i < 1; i++)
                l_258[i] = &g_147;
            for (i = 0; i < 1; i++)
                l_259[i] = &l_151[5][2][0];
            if ((l_241 | l_241))
            {
                int32_t l_251 = 1L;
                for (p_62 = 0; (p_62 > (-3)); --p_62)
                {
                    int16_t l_256 = (-5L);
                    (****g_192) = p_63;
                    (*l_87) = (((-1L) < (-8L)) != 0x26B7B25FL);
                    if ((safe_rshift_func_int16_t_s_s((((((+((safe_rshift_func_uint16_t_u_s((((g_147 ^ (safe_lshift_func_int16_t_s_u(p_61, p_61))) >= l_251) != ((safe_add_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(4294967292UL, (*p_64))), g_18)) >= ((p_62 < l_256) >= p_62))), 7)) >= (-9L))) == p_62) ^ 0x91060841L) < p_62) > l_241), 2)))
                    {
                        int32_t *l_257 = &g_36;
                        (*g_149) = l_257;
                        return (*p_63);
                    }
                    else
                    {
                        (*p_64) = (*p_63);
                        (****g_192) = l_258[0];
                        (*l_240) = ((void*)0 == l_259[0]);
                    }
                    if (l_256)
                        goto lbl_260;
                }
            }
            else
            {
                int32_t l_274[4][7] = {{(-8L),0x875ADBA9L,(-8L),0x875ADBA9L,(-8L),0x875ADBA9L,(-8L)},{4L,4L,(-9L),(-9L),4L,4L,(-9L)},{0x31C94D66L,0x875ADBA9L,0x31C94D66L,0x875ADBA9L,0x31C94D66L,0x875ADBA9L,0x31C94D66L},{4L,(-9L),(-9L),4L,4L,(-9L),(-9L)}};
                int i, j;
                for (p_61 = 0; (p_61 <= 2); p_61 += 1)
                {
                    int i;
                    l_132[p_61] = ((((safe_rshift_func_uint16_t_u_u(((((void*)0 != (***g_193)) == (safe_mul_func_int8_t_s_s((+(((void*)0 != &l_86[6]) && ((((((safe_mod_func_int8_t_s_s(g_18, (safe_sub_func_int16_t_s_s(((((p_62 < ((safe_mul_func_uint8_t_u_u(g_30[1][0], ((((((safe_sub_func_uint32_t_u_u(g_30[2][0], (0x63680A18L == (*p_63)))) && 0xC18BL) || (*p_63)) > (*p_63)) < (*p_64)) || g_36))) > l_274[3][0])) & 1L) != (*p_63)) && g_147), (*l_87))))) && g_147) != 0x4D9622DCL) == g_147) | 249UL) > 0x7548L))), (-4L)))) || l_274[3][4]), g_30[6][1])) > 0x68D36DCFL) >= g_36) >= p_61);
                    for (g_84 = 0; g_84 < 1; g_84 += 1)
                    {
                        l_107[g_84] = 0x76463CA2L;
                    }
                    l_132[p_61] = (l_275 == l_275);
                }
            }
        }
        return (*p_63);
    }
    p_64 = (*g_149);
    ((void) sizeof ((p_64 == 0 || p_64 == &g_36 || p_64 == &g_147) ? 1 : 0), __extension__ ({ if (p_64 == 0 || p_64 == &g_36 || p_64 == &g_147) ; else __assert_fail ("p_64 == 0 || p_64 == &g_36 || p_64 == &g_147", "/tmp/tmp3b4_f_ac.c", 609, __extension__ __PRETTY_FUNCTION__); }));
    return l_276[0][4][0];
}
int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_18;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 2; j++)
        {
            csmith_sink_ = g_30[i][j];
        }
    }
    csmith_sink_ = g_36;
    csmith_sink_ = g_84;
    csmith_sink_ = g_147;
    csmith_sink_ = g_476;
    csmith_sink_ = g_480;
    csmith_sink_ = g_496;
    platform_main_end(0,0);
    return 0;
}
