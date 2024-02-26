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
static uint16_t g_2 = 1UL;
static int8_t g_3 = 7L;
static int32_t g_42 = 0x99649744L;
static int8_t g_81 = (-7L);
static int16_t g_129 = 1L;
static uint8_t g_149 = 4UL;
static uint8_t g_199 = 0UL;
static uint16_t g_337 = 0x0442L;
static uint32_t g_346 = 0xBA8A70E6L;
static int16_t g_347 = 0x5584L;
static int8_t g_350 = (-1L);
static int16_t g_351 = 0x97E5L;
static uint32_t g_409 = 1UL;
static int32_t g_410 = 0L;
static int32_t g_412 = 2L;
static int32_t g_570 = 0x15C299F0L;
static int32_t g_647 = 0x24383221L;
static uint16_t g_700 = 0xF41CL;
static int16_t g_767 = 0x28A6L;
inline static uint32_t func_1(void);
static uint32_t func_4(uint16_t p_5, uint32_t p_6, uint32_t p_7);
inline static uint8_t func_13(uint32_t p_14, int32_t p_15);
inline static int16_t func_17(int32_t p_18, int32_t p_19, int32_t p_20, int8_t p_21, int16_t p_22);
static int16_t func_27(int32_t p_28, int16_t p_29, int32_t p_30, int32_t p_31);
inline static uint8_t func_32(int16_t p_33, int16_t p_34);
static uint16_t func_37(uint8_t p_38, uint32_t p_39, uint8_t p_40);
static int16_t func_43(uint32_t p_44, uint16_t p_45, uint32_t p_46);
static uint8_t func_49(uint32_t p_50, int16_t p_51, uint32_t p_52, uint32_t p_53);
inline static uint8_t func_56(int32_t p_57, int32_t p_58, int32_t p_59, int16_t p_60);
inline static uint32_t func_1(void)
{
    uint32_t l_16 = 0x8E418A52L;
    int32_t l_915 = 0L;
    int32_t l_1024 = 0xD9A00CFAL;
    g_3 = g_2;
    l_1024 = (func_4((((safe_lshift_func_uint16_t_u_s((+g_3), 5)) && (safe_lshift_func_uint8_t_u_u(func_13(l_16, g_3), 2))) == (safe_sub_func_int8_t_s_s((((4UL != (safe_rshift_func_int8_t_s_u((g_347 || ((safe_mul_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s((l_16 & (((safe_sub_func_int16_t_s_s(0L, ((g_3 | 1UL) != 250UL))) == g_767) && g_3)), g_647)), l_16)) && g_347)), 5))) >= l_16) & g_767), l_915))), l_16, l_16) <= 0x501E9A13L);
    return l_915;
}
static uint32_t func_4(uint16_t p_5, uint32_t p_6, uint32_t p_7)
{
    int32_t l_924 = 0x1DE31946L;
    uint16_t l_958 = 65528UL;
    int16_t l_1022 = 0x4308L;
    int32_t l_1023 = 0x8B92581BL;
    l_924 = (safe_add_func_int8_t_s_s(g_346, (safe_mul_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(((safe_mod_func_int16_t_s_s(0x43DCL, (((((l_924 > (p_7 < ((safe_lshift_func_int16_t_s_u((g_346 && ((safe_mul_func_int16_t_s_s((p_7 <= ((safe_rshift_func_uint8_t_u_s(g_347, 3)) && g_81)), (((((safe_rshift_func_int8_t_s_u(((safe_sub_func_int32_t_s_s(g_346, p_5)) > g_42), 6)) | 0UL) && 0xB5L) && (-1L)) ^ l_924))) > l_924)), p_7)) ^ 0x93A46019L))) | l_924) >= p_7) ^ 65532UL) || l_924))) >= 0x3C13EDA9L), l_924)), g_409))));
    if ((g_337 && p_5))
    {
        int32_t l_937 = 0L;
        uint16_t l_961 = 0UL;
        uint32_t l_962 = 0x686E442DL;
        l_937 = l_937;
        g_412 = (safe_sub_func_int8_t_s_s((~((safe_mul_func_int8_t_s_s(g_199, (safe_add_func_int32_t_s_s((safe_rshift_func_int16_t_s_s((g_347 != g_412), (~((safe_sub_func_int32_t_s_s(((safe_unary_minus_func_uint8_t_u(p_7)) | l_924), (~(((l_924 <= (safe_sub_func_int32_t_s_s((safe_sub_func_uint32_t_u_u(((safe_lshift_func_int16_t_s_s((p_5 < l_958), (safe_lshift_func_int16_t_s_u((((g_2 > l_961) <= l_961) ^ l_958), g_347)))) ^ g_700), g_351)), 4294967290UL))) >= l_924) != g_409)))) | l_937)))), p_5)))) || l_962)), l_924));
        l_937 = p_5;
    }
    else
    {
        uint8_t l_985 = 0x03L;
        uint16_t l_986 = 0x2260L;
        if ((((((((safe_rshift_func_int16_t_s_u((safe_mul_func_int16_t_s_s(p_6, (safe_add_func_int32_t_s_s(g_410, (0x45L != (safe_mul_func_uint8_t_u_u(g_199, g_199))))))), 0)) > 6L) >= (safe_rshift_func_uint16_t_u_u((p_5 ^ (safe_add_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((((safe_rshift_func_int8_t_s_u(p_6, 1)) || ((safe_lshift_func_uint8_t_u_s((safe_add_func_int16_t_s_s((((g_129 > l_985) || 0xA838L) != 1L), 0xE65AL)), 3)) != 65534UL)) | 7UL), p_7)), l_958)), 0xCAF7L))), 5))) & l_986) == l_924) > 255UL) && 0x1DL))
        {
lbl_989:
            for (g_410 = 17; (g_410 > (-24)); g_410 = safe_sub_func_uint32_t_u_u(g_410, 2))
            {
                return g_42;
            }
            return p_5;
        }
        else
        {
            if (g_410)
                goto lbl_989;
        }
    }
    l_1023 = ((safe_add_func_uint32_t_u_u(((-1L) <= (((((safe_sub_func_int32_t_s_s(((safe_mod_func_uint32_t_u_u(((safe_sub_func_int8_t_s_s((safe_add_func_uint16_t_u_u(((((safe_mod_func_uint16_t_u_u(((((safe_mod_func_uint32_t_u_u(((safe_rshift_func_int16_t_s_u((safe_mod_func_uint8_t_u_u(g_351, ((safe_unary_minus_func_int16_t_s((safe_rshift_func_int8_t_s_s((((!(safe_add_func_uint32_t_u_u(l_958, 0x6888AB08L))) != l_924) > ((+((safe_mod_func_int16_t_s_s(l_958, (safe_lshift_func_uint8_t_u_s((+p_6), 2)))) > ((safe_mod_func_int16_t_s_s(l_924, g_346)) < 1L))) | g_700)), 3)))) | p_6))), 11)) ^ p_6), g_337)) <= 0xFA91CF5CL) | p_6) || 4294967286UL), 2L)) == 0x8BEDL) >= l_958) || 0xB808L), l_958)), g_409)) | 1L), g_337)) != p_6), l_1022)) == p_7) <= l_958) <= p_6) || 0xD754FCFAL)), l_1023)) < 0xB4L);
    l_1023 = 0xD6B52E8DL;
    return g_2;
}
inline static uint8_t func_13(uint32_t p_14, int32_t p_15)
{
    int8_t l_41 = 0x0CL;
    int32_t l_904 = 6L;
    l_904 = (func_17((safe_add_func_uint8_t_u_u(g_2, ((((safe_rshift_func_int16_t_s_u(func_27(g_3, (func_32(((safe_sub_func_int16_t_s_s((func_37(g_2, l_41, p_15) >= func_43((g_3 <= g_3), g_2, g_2)), 1L)) != p_15), p_15) & l_41), l_41, g_3), g_2)) > g_2) && g_647) == 0x9FF22645L))), l_41, g_2, g_647, p_14) > 0xFE70L);
    return g_129;
}
inline static int16_t func_17(int32_t p_18, int32_t p_19, int32_t p_20, int8_t p_21, int16_t p_22)
{
    uint32_t l_666 = 0xA1002B68L;
    uint32_t l_669 = 18446744073709551609UL;
    int32_t l_670 = (-1L);
    int32_t l_774 = 0x3DD4F4CFL;
    int8_t l_847 = 0x14L;
    int16_t l_893 = 0x106AL;
    l_670 = (safe_rshift_func_uint8_t_u_s(((safe_sub_func_int8_t_s_s(((g_347 == (safe_rshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((safe_unary_minus_func_uint32_t_u((~((safe_lshift_func_int16_t_s_s(((safe_sub_func_uint16_t_u_u((((safe_lshift_func_int8_t_s_u((-1L), 6)) && ((safe_sub_func_int8_t_s_s(((l_666 < p_18) || 0xA10CL), g_199)) <= (1UL <= ((safe_mod_func_uint8_t_u_u(0xCBL, (l_666 & p_18))) & 249UL)))) != 0x80L), p_21)) != p_22), 6)) < p_21)))), 7)), p_19))) <= 0x38B6L), p_18)) & l_669), 1));
    g_412 = (safe_mul_func_int8_t_s_s((l_666 || (safe_sub_func_int8_t_s_s(p_21, (g_346 ^ g_570)))), 8UL));
    if ((((0x39L >= ((safe_mod_func_uint32_t_u_u((1UL == ((safe_add_func_int16_t_s_s(0x089CL, l_669)) | ((safe_rshift_func_int16_t_s_s(p_19, 10)) < ((safe_lshift_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_u(((((safe_add_func_uint32_t_u_u((((((safe_unary_minus_func_int32_t_s(l_669)) == (safe_sub_func_int32_t_s_s((safe_lshift_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(g_347, (safe_add_func_uint32_t_u_u((((p_18 > l_669) || (-1L)) < p_18), 4294967292UL)))), g_700)), 1L))) >= g_42) ^ 0xF289L) & g_350), p_22)) == p_20) == p_18) == 248UL), 7)) <= p_20), g_409)), 2)) <= p_20), p_18)) || p_20)))), p_18)) >= 0x039BL)) ^ 0xD2CEL) >= l_669))
    {
        int8_t l_703 = 1L;
        uint8_t l_766 = 9UL;
        int32_t l_894 = 3L;
        g_412 = (safe_rshift_func_uint8_t_u_u(l_703, 6));
        if ((!((safe_rshift_func_uint16_t_u_u(0xE4C7L, 13)) & ((((safe_sub_func_int8_t_s_s(((safe_rshift_func_int16_t_s_s((l_703 | 0xDC35L), g_149)) != ((0x95804805L != (~(safe_mul_func_uint16_t_u_u(g_81, (((safe_unary_minus_func_uint32_t_u(l_670)) > (+(((safe_lshift_func_int8_t_s_s((!g_700), 1)) == (safe_sub_func_int8_t_s_s(((safe_mod_func_int32_t_s_s((safe_mul_func_uint8_t_u_u(((0xF78447BAL == g_410) != 0x213DL), l_703)), g_409)) != 0xE9A8L), 247UL))) | 4UL))) == 4294967288UL))))) | l_670)), 0x70L)) && g_337) < p_22) ^ g_410))))
        {
            int16_t l_727 = 0L;
            uint16_t l_765 = 0xE477L;
            int16_t l_872 = (-4L);
            if ((safe_rshift_func_uint16_t_u_s((p_21 || (l_727 & (safe_lshift_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_s((safe_sub_func_int8_t_s_s(((safe_add_func_int16_t_s_s((safe_sub_func_int32_t_s_s((safe_add_func_uint32_t_u_u(((safe_lshift_func_uint8_t_u_u(((p_20 || (+(safe_sub_func_int16_t_s_s(((safe_sub_func_int8_t_s_s((p_22 >= (safe_sub_func_uint8_t_u_u(((((safe_mul_func_uint8_t_u_u((((safe_mul_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_u((l_703 || (safe_sub_func_int32_t_s_s(((safe_mul_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s((g_149 != g_351), (safe_mul_func_uint16_t_u_u(((safe_sub_func_int32_t_s_s((((((((g_3 > (65535UL & l_727)) && g_410) & p_22) < l_727) == 0x8B766022L) && g_351) ^ 0UL), g_347)) <= g_347), l_765)))) && g_149), 0L)) < g_129), l_703))), 2)) | 0UL), l_765)) <= 0L) ^ p_18), p_19)) | g_346) && l_766) && 0x2154L), l_765))), p_19)) | l_765), l_766)))) <= p_22), g_767)) && g_346), g_351)), 0x9C6FF438L)), g_570)) & 4294967295UL), g_410)), p_21)) >= p_21), 6)))), 10)))
            {
                uint16_t l_782 = 6UL;
                uint32_t l_823 = 1UL;
                l_774 = (safe_mul_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_u(l_774, (p_22 < ((safe_sub_func_uint16_t_u_u((~(((safe_mul_func_uint16_t_u_u((p_20 > (1L < (safe_mul_func_int16_t_s_s(2L, l_782)))), (safe_rshift_func_uint16_t_u_s((4294967295UL < (((g_129 > 0x48B2L) != g_409) >= 0xB08BL)), g_42)))) ^ 0xC3B839A9L) == l_766)), g_347)) ^ p_19)))), 5)), (-1L)));
                for (l_670 = 0; (l_670 < (-26)); l_670 = safe_sub_func_int32_t_s_s(l_670, 5))
                {
                    uint32_t l_822 = 18446744073709551610UL;
                    g_412 = ((safe_mod_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s(((safe_unary_minus_func_int32_t_s(((safe_rshift_func_int16_t_s_s(g_129, (safe_lshift_func_int8_t_s_u(g_42, g_199)))) | (g_129 < (safe_mul_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(((safe_mod_func_int32_t_s_s((65534UL || 0xF819L), l_782)) || p_21), 4)), (safe_rshift_func_int16_t_s_s(p_19, l_765)))))))) || 248UL), 4)), g_81)) <= (-9L));
                    l_774 = l_782;
                    p_18 = (l_782 != (safe_add_func_int32_t_s_s(0L, (safe_mul_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u((g_647 != l_766), ((safe_lshift_func_int8_t_s_u(0L, l_666)) | ((safe_sub_func_uint16_t_u_u((((((-1L) >= ((safe_mod_func_uint32_t_u_u((safe_sub_func_int32_t_s_s(((safe_mod_func_uint32_t_u_u(((-8L) ^ ((safe_add_func_int8_t_s_s(l_822, g_42)) ^ 0xBDL)), l_782)) <= l_782), 8UL)), p_20)) != p_19)) & g_412) && g_767) | g_129), l_823)) >= p_22)))), p_22)))));
                    g_412 = (safe_mul_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(0xF9L, 3UL)), (-10L)));
                }
            }
            else
            {
                int16_t l_836 = 0x6484L;
                int32_t l_848 = 0L;
                l_848 = ((safe_lshift_func_int8_t_s_u((safe_add_func_uint16_t_u_u((((g_81 && (safe_mod_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((l_836 ^ g_81), (((((0x488CL > ((safe_mul_func_int8_t_s_s(((safe_lshift_func_int16_t_s_u((((((((g_409 ^ (safe_rshift_func_uint16_t_u_u(1UL, (((((safe_rshift_func_int16_t_s_s(l_774, l_836)) & 6L) & g_412) < p_19) && 0x57L)))) == g_412) < g_347) && g_700) != g_767) & p_21) > p_18), p_21)) >= (-8L)), l_766)) == 0x42L)) && 5UL) != l_847) >= l_727) & (-3L)))), g_410))) ^ 7L) > p_21), g_81)), 0)) || 0x021BL);
            }
            if ((g_647 ^ ((safe_mod_func_int16_t_s_s((((safe_mul_func_int16_t_s_s(((safe_mod_func_int32_t_s_s((+(-1L)), (safe_sub_func_int32_t_s_s((safe_add_func_int32_t_s_s((((safe_add_func_uint8_t_u_u(0x2AL, (g_346 > ((safe_mul_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((safe_mod_func_int8_t_s_s((safe_mod_func_int32_t_s_s((g_346 || p_22), 4294967291UL)), g_350)), (safe_rshift_func_uint8_t_u_s(246UL, g_409)))), l_666)) <= 0xB1L)))) < g_410) | p_20), p_21)), l_666)))) > l_774), l_703)) | 0xD502L) | g_81), l_872)) ^ g_346)))
            {
                int16_t l_891 = (-2L);
                uint16_t l_892 = 2UL;
                p_19 = ((safe_add_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_u(l_703, 7)) ^ p_21), ((safe_add_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u(l_766, g_412)), ((safe_rshift_func_int16_t_s_s((safe_sub_func_int32_t_s_s(((safe_add_func_int32_t_s_s((p_21 <= (safe_lshift_func_uint16_t_u_u(g_347, (2L >= (p_19 & (g_149 < 0xACL)))))), g_81)) != g_129), l_891)), l_892)) != p_20))), l_893)) & 4294967294UL))) > g_410);
            }
            else
            {
                p_18 = g_149;
                return p_20;
            }
        }
        else
        {
            l_670 = p_18;
            l_894 = 0xF86749AFL;
            g_412 = 0xAF6B0E7DL;
        }
        return g_647;
    }
    else
    {
        int16_t l_903 = 0xD775L;
        g_412 = 0L;
        g_412 = ((((safe_rshift_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s(p_22, ((safe_lshift_func_int8_t_s_s(((safe_add_func_int32_t_s_s(((g_350 > (g_346 < (0xE190DBB3L >= g_700))) && p_18), ((g_347 == (l_847 >= 0x077C87F6L)) > p_21))) & 1UL), 3)) >= l_903))) < g_42), 10)) == g_351) > p_21) & p_20);
    }
    l_774 = (-1L);
    return p_19;
}
static int16_t func_27(int32_t p_28, int16_t p_29, int32_t p_30, int32_t p_31)
{
    uint32_t l_642 = 0x6642A461L;
    p_31 = (!(safe_rshift_func_int16_t_s_s(p_31, (~(safe_mod_func_int32_t_s_s((-8L), (safe_mod_func_uint16_t_u_u(((safe_sub_func_uint8_t_u_u(0xEDL, ((safe_add_func_uint32_t_u_u(g_129, (safe_add_func_uint16_t_u_u(l_642, p_30)))) || 9UL))) | (safe_sub_func_int16_t_s_s(p_29, ((((safe_sub_func_uint8_t_u_u(g_149, g_351)) || 65527UL) != 0L) || p_31)))), 0x7F44L))))))));
    return g_350;
}
inline static uint8_t func_32(int16_t p_33, int16_t p_34)
{
    int8_t l_615 = 0xAAL;
    int32_t l_627 = 0x563D4E07L;
    l_627 = (((safe_mul_func_uint16_t_u_u((~(safe_mod_func_int16_t_s_s((((safe_lshift_func_uint8_t_u_s((safe_add_func_int8_t_s_s(p_33, (safe_lshift_func_uint8_t_u_s(l_615, ((safe_mul_func_int8_t_s_s(((((safe_mod_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(((g_347 < (0xD8EEL ^ (safe_rshift_func_uint16_t_u_u((((l_615 >= ((p_33 | g_81) & (+((safe_add_func_uint8_t_u_u((g_3 <= g_199), g_337)) <= g_3)))) < l_615) == g_129), 7)))) == l_615), g_149)), 4UL)) == l_615) != l_615) && 0xE5A90821L), g_351)) ^ g_3))))), g_2)) >= p_34) < p_33), p_33))), g_42)) ^ 65533UL) > g_129);
    return l_627;
}
static uint16_t func_37(uint8_t p_38, uint32_t p_39, uint8_t p_40)
{
    g_42 = (-1L);
    return g_3;
}
static int16_t func_43(uint32_t p_44, uint16_t p_45, uint32_t p_46)
{
    uint8_t l_54 = 0xA9L;
    uint8_t l_55 = 0x39L;
    int32_t l_603 = 1L;
    l_603 = (safe_rshift_func_uint8_t_u_s(func_49(l_54, (l_55 | (3UL | (g_3 || func_56(p_45, g_3, g_3, ((safe_sub_func_uint8_t_u_u(g_3, (((l_55 ^ p_45) >= 1L) > p_44))) ^ l_54))))), l_55, l_54), 7));
    l_603 = 4L;
    return p_44;
}
static uint8_t func_49(uint32_t p_50, int16_t p_51, uint32_t p_52, uint32_t p_53)
{
    int32_t l_89 = 0L;
    int32_t l_100 = 0x5AE89E6DL;
    int8_t l_102 = 0L;
    uint32_t l_208 = 0UL;
    int32_t l_312 = 4L;
    uint32_t l_475 = 2UL;
    uint16_t l_480 = 0xE4DEL;
    int32_t l_560 = (-1L);
    if ((g_81 || (g_2 > 0x9C50ED6CL)))
    {
        uint32_t l_101 = 0x3E77DF0EL;
        uint8_t l_130 = 9UL;
        int32_t l_151 = 1L;
        int8_t l_207 = 0xA0L;
        uint32_t l_260 = 1UL;
        if (((safe_rshift_func_int8_t_s_s((safe_mod_func_int32_t_s_s(((safe_lshift_func_int16_t_s_s((~l_89), (safe_lshift_func_uint16_t_u_u(0x19D5L, (((((l_89 || ((safe_mod_func_uint32_t_u_u((((0UL || g_3) >= (safe_rshift_func_int16_t_s_s((p_53 == ((((safe_mod_func_uint16_t_u_u((((l_89 > (safe_sub_func_uint8_t_u_u(((65526UL > l_89) & 0xE6L), g_81))) == g_3) != l_100), 1UL)) | 0x72L) > l_101) > p_50)), p_52))) | 0xC44CL), (-5L))) >= p_52)) >= g_2) && l_101) > l_102) >= g_3))))) <= p_52), p_51)), g_2)) <= (-1L)))
        {
            int8_t l_128 = 0xE2L;
            for (p_50 = (-22); (p_50 <= 52); ++p_50)
            {
                g_129 = (safe_add_func_uint16_t_u_u((((g_3 != ((safe_sub_func_uint32_t_u_u((~(safe_add_func_uint32_t_u_u((!(g_2 | (l_102 && ((safe_lshift_func_uint16_t_u_s(((safe_rshift_func_uint16_t_u_u((safe_add_func_int16_t_s_s((~(((-1L) && 0x1C75L) | (((((safe_rshift_func_uint16_t_u_s(p_53, (safe_add_func_int32_t_s_s(0L, 0x1048D1DFL)))) ^ (safe_rshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(((0xB9B7L ^ 65535UL) == p_52), p_51)), 1))) == g_2) > l_128) <= 0x4BL))), l_101)), g_3)) < l_128), 6)) >= l_128)))), 0x12E21983L))), l_128)) >= l_102)) & p_50) != l_100), 4L));
            }
            g_149 = (5L < (l_130 >= (safe_sub_func_uint32_t_u_u(((safe_mod_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((l_128 >= (safe_sub_func_uint8_t_u_u(5UL, (((safe_rshift_func_uint8_t_u_s(((safe_sub_func_uint8_t_u_u(g_81, (safe_lshift_func_int8_t_s_s(0x4FL, 0)))) == g_81), 3)) <= ((safe_add_func_int8_t_s_s(l_101, (0L >= g_129))) == l_89)) && g_81)))), l_130)), g_3)), l_101)) == p_52), p_53))));
            l_151 = (+l_89);
            l_89 = l_151;
        }
        else
        {
            uint32_t l_173 = 3UL;
            int8_t l_176 = 0x46L;
            int32_t l_209 = 0x94C051F8L;
            uint16_t l_224 = 0x4F65L;
            for (l_102 = (-30); (l_102 >= (-15)); l_102 = safe_add_func_int8_t_s_s(l_102, 7))
            {
                uint32_t l_154 = 4294967295UL;
                l_151 = ((p_51 || p_50) == p_50);
                l_100 = (l_154 == (safe_rshift_func_uint16_t_u_s(0xF34FL, (safe_rshift_func_int16_t_s_u(g_149, 3)))));
                for (p_53 = (-22); (p_53 < 47); ++p_53)
                {
                    int32_t l_198 = 0x419DF025L;
                    if (((((0x1F82L == (safe_sub_func_int8_t_s_s((safe_mod_func_int32_t_s_s((safe_mod_func_int8_t_s_s((safe_sub_func_int32_t_s_s(p_53, (0x3BB0L >= ((safe_mul_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((((l_173 > ((safe_mod_func_uint32_t_u_u((0xE7L != g_2), 1L)) || (((p_51 > 0x99DCED91L) || 0UL) & 4L))) < 0UL) | g_3), g_149)), l_89)) >= 0x2032L)))), 0x2FL)), 1L)), l_101))) > p_53) & l_176) < l_173))
                    {
                        return p_51;
                    }
                    else
                    {
                        g_199 = ((safe_mod_func_uint32_t_u_u(((0x946C84E0L <= ((safe_lshift_func_uint8_t_u_s(l_176, 5)) & (safe_lshift_func_uint16_t_u_u(g_149, 9)))) | (safe_mod_func_int32_t_s_s(l_154, (safe_rshift_func_uint8_t_u_s(l_173, 5))))), (~(safe_mul_func_int8_t_s_s((4294967291UL >= (((safe_rshift_func_int8_t_s_s(g_2, (safe_rshift_func_int8_t_s_u((safe_mod_func_uint16_t_u_u((((0xC9BFL != (safe_sub_func_uint16_t_u_u(g_81, l_176))) > l_198) > 0UL), l_130)), 2)))) <= g_149) == p_53)), g_149))))) | l_154);
                        return g_2;
                    }
                }
                l_209 = ((~(p_52 && (0L && ((safe_mod_func_int8_t_s_s(((((((safe_rshift_func_uint16_t_u_s(((0xA43FL | p_51) > (safe_rshift_func_int8_t_s_u(l_151, ((((l_207 <= (((0x9BD86A01L < p_50) | (-9L)) <= l_173)) & 0x5AL) == 65534UL) < l_208)))), g_149)) | g_2) || g_2) != 0x460DL) > g_149) != p_53), p_52)) == 0x447EL)))) >= 0xD3L);
            }
            l_209 = (safe_add_func_int16_t_s_s(((safe_mul_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((g_3 >= (l_130 <= l_176)), ((p_52 && ((((g_149 < (l_89 || ((safe_sub_func_uint32_t_u_u(((((p_50 | (l_209 | (safe_sub_func_int32_t_s_s((safe_mul_func_int8_t_s_s((safe_mul_func_int8_t_s_s(g_81, 249UL)), l_224)), l_100)))) < 0xBCB01993L) > 0x00L) ^ p_51), 0x31CC493FL)) ^ 0x25EF7775L))) | l_173) & g_129) > l_151)) != g_129))), g_149)) | 4UL), 0L));
            l_209 = (safe_sub_func_int16_t_s_s(p_50, (safe_rshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((safe_add_func_uint8_t_u_u(l_102, p_50)), 0)), l_130))));
        }
        l_89 = ((safe_add_func_uint32_t_u_u((((0xEA22L & p_51) > ((0xD3L ^ (safe_mod_func_int16_t_s_s(((g_2 > ((0UL < (safe_add_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(((((safe_sub_func_int32_t_s_s((safe_add_func_int16_t_s_s((+(g_199 ^ (((safe_mod_func_int32_t_s_s((~(safe_lshift_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u(l_89, (safe_mul_func_int8_t_s_s(p_53, ((+(((g_129 != g_129) & 0x80988709L) <= l_100)) > p_52))))) != g_199), g_129))), g_129)) && l_89) >= 0xFEL))), l_151)), l_208)) != (-7L)) == g_199) < g_129), 3)), p_52))) > 6UL)) < g_149), 3UL))) <= l_207)) ^ g_149), p_53)) <= l_151);
        l_151 = (safe_sub_func_uint32_t_u_u(l_151, (((safe_mul_func_int8_t_s_s(1L, l_101)) <= (g_2 && l_260)) == ((((((safe_sub_func_int16_t_s_s((((g_129 <= ((-1L) != ((safe_sub_func_int32_t_s_s(g_129, (safe_mul_func_uint16_t_u_u(((l_100 >= p_50) & g_81), g_81)))) || (-3L)))) <= 0xC6DFB0B2L) != l_151), l_260)) & l_100) != p_50) >= l_89) != l_101) >= l_207))));
    }
    else
    {
        int32_t l_267 = 0xD2DBEE02L;
        int32_t l_274 = 0xEA880BC6L;
        int16_t l_286 = 0x9D14L;
        uint8_t l_289 = 0xEAL;
        int32_t l_325 = 0xD029318BL;
        uint8_t l_336 = 0x0AL;
        uint32_t l_513 = 18446744073709551615UL;
        int32_t l_542 = 0xF0A78AF1L;
        int8_t l_599 = 0xCEL;
lbl_514:
        l_267 = (-6L);
        if ((((safe_add_func_uint32_t_u_u(((4294967286UL & (((safe_rshift_func_uint8_t_u_u((l_267 || p_52), (((0x1A0814C5L < ((safe_lshift_func_int8_t_s_s(0L, (l_274 | (g_129 || (safe_add_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u((safe_unary_minus_func_uint32_t_u(((safe_add_func_uint16_t_u_u((safe_add_func_int32_t_s_s((safe_lshift_func_int8_t_s_u(((l_267 ^ l_208) != l_267), g_199)), p_50)), l_208)) > l_267))), g_129)) || p_52), 255UL)))))) & l_102)) | l_286) < (-2L)))) & g_2) & g_199)) & 0x57L), 0UL)) >= l_102) != 0UL))
        {
            uint32_t l_311 = 0x93796DFDL;
            int32_t l_341 = 1L;
            uint16_t l_449 = 0x81BBL;
            l_274 = (safe_mod_func_uint16_t_u_u(l_289, (g_129 & 0xABF4L)));
            if ((safe_lshift_func_uint8_t_u_s(((safe_mul_func_int8_t_s_s(0x0DL, ((safe_mod_func_uint16_t_u_u(g_3, (safe_sub_func_uint16_t_u_u(65533UL, (safe_mul_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((~((((l_208 == ((safe_rshift_func_uint16_t_u_u((p_53 != (((safe_mod_func_int32_t_s_s((safe_mod_func_uint32_t_u_u((((safe_rshift_func_uint16_t_u_u((((l_311 == g_3) && l_312) && (g_199 != p_50)), 13)) > p_53) & g_199), (-1L))), l_274)) != 4294967295UL) > l_311)), 9)) != p_52)) <= 4L) && g_3) < l_289)), 5)), l_311)))))) > p_51))) || g_2), l_89)))
            {
                if ((safe_lshift_func_int8_t_s_s((((safe_rshift_func_uint8_t_u_s(((((safe_lshift_func_uint16_t_u_u(0x4661L, ((safe_add_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_s(g_129, 0)) == (safe_lshift_func_uint16_t_u_u(l_286, l_325))), ((safe_lshift_func_uint8_t_u_u(l_311, 7)) ^ (safe_rshift_func_int16_t_s_s(0L, ((l_289 >= ((safe_add_func_int8_t_s_s(l_311, (safe_mod_func_uint8_t_u_u(1UL, l_267)))) > 0L)) ^ g_81)))))) & p_50))) | g_199) ^ 1L) | p_50), g_81)) & 0xCB9E1FEDL) != l_89), 1)))
                {
lbl_369:
                    g_337 = (safe_lshift_func_uint8_t_u_s(l_336, 2));
                    return g_129;
                }
                else
                {
                    for (g_81 = 3; (g_81 > 15); g_81++)
                    {
                        int32_t l_340 = (-1L);
                        l_340 = 0x481DA661L;
                        l_341 = (g_3 || p_51);
                        return g_129;
                    }
                }
                for (g_149 = 7; (g_149 < 52); g_149 = safe_add_func_uint32_t_u_u(g_149, 1))
                {
                    uint8_t l_353 = 0UL;
                    g_346 = (safe_sub_func_int16_t_s_s(l_311, g_81));
                    l_100 = g_347;
                    for (g_199 = 0; (g_199 >= 46); g_199 = safe_add_func_int32_t_s_s(g_199, 8))
                    {
                        uint32_t l_352 = 0xEEF04CFCL;
                        g_350 = g_337;
                        g_351 = p_50;
                        l_352 = p_51;
                    }
                    l_353 = p_53;
                }
            }
            else
            {
                uint32_t l_362 = 0x8106815FL;
                int32_t l_366 = 2L;
                for (l_274 = (-23); (l_274 <= 27); ++l_274)
                {
                    int32_t l_365 = 0x2AE39DF6L;
                    l_366 = (((g_129 == p_53) >= (((((((safe_sub_func_int16_t_s_s(g_129, ((safe_lshift_func_int8_t_s_u(((safe_rshift_func_int8_t_s_s((0xAEL < l_362), g_81)) <= g_337), 3)) ^ ((safe_lshift_func_uint16_t_u_u(p_53, (g_350 ^ 251UL))) || 0xFDL)))) < l_311) <= l_365) < p_50) > l_341) <= 0xDA6E1C32L) & 1L)) == g_337);
                    for (l_336 = 24; (l_336 >= 32); l_336 = safe_add_func_int16_t_s_s(l_336, 6))
                    {
                        int32_t l_386 = 4L;
                        if (g_350)
                            goto lbl_369;
                        l_386 = (((255UL != (((safe_rshift_func_uint16_t_u_u((0xC039551FL ^ (safe_mul_func_int16_t_s_s(g_199, (p_50 <= (safe_lshift_func_uint8_t_u_u(((((g_337 && g_347) == (safe_sub_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((((g_3 ^ (safe_rshift_func_int16_t_s_u((safe_add_func_uint32_t_u_u((((safe_mod_func_uint8_t_u_u((0x00L > ((g_81 || 0x718072CEL) < g_129)), 0x0BL)) > l_386) ^ l_365), g_350)), g_81))) & 0xD151L) | 0x6B0BL), l_325)), p_53))) == g_129) & g_3), 0)))))), 7)) ^ l_386) >= p_52)) || g_351) >= g_350);
                        l_325 = (l_267 || g_149);
                        l_89 = ((0xDC4D7926L | (0L & (0UL != l_386))) ^ ((safe_lshift_func_uint16_t_u_s(p_50, 9)) < (((safe_rshift_func_int16_t_s_s((-1L), 11)) && l_365) || (safe_rshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_s((((g_81 == 0UL) != g_3) == p_52), 0)), 6)))));
                    }
                    if ((l_365 >= (((safe_lshift_func_uint8_t_u_s(g_81, ((((4294967295UL < (p_53 != (l_286 | (safe_rshift_func_int16_t_s_u((safe_add_func_int16_t_s_s((p_51 > 0L), ((safe_add_func_uint16_t_u_u((g_351 >= (((safe_add_func_uint8_t_u_u((((safe_rshift_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_s(0x00E8L, 4)) >= g_351), l_362)) || l_362) > l_100), g_347)) < l_365) && l_341)), l_362)) | 0xBA6F3B49L))), g_409))))) <= 2L) <= p_53) > l_311))) > l_366) && l_365)))
                    {
                        g_410 = g_347;
                        l_366 = l_312;
                    }
                    else
                    {
                        uint16_t l_411 = 0x95D1L;
                        g_412 = l_411;
                        if (p_53)
                            break;
                        l_341 = 0x3235E0E7L;
                        g_412 = (safe_sub_func_int8_t_s_s(((~(~(((safe_sub_func_int16_t_s_s(l_89, (-6L))) != 0x7530FD64L) < (safe_rshift_func_uint8_t_u_u(g_149, 7))))) > (((!(l_366 || ((safe_lshift_func_int8_t_s_u((((safe_mul_func_int16_t_s_s(g_350, 0x4C61L)) <= 0L) < (-1L)), p_52)) && g_351))) < 0x61A2151FL) >= g_412)), 0x27L));
                    }
                }
                if ((((safe_mul_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((0x77B3C187L & ((((safe_add_func_uint32_t_u_u((g_2 < (g_409 & (((safe_add_func_int32_t_s_s((safe_add_func_int32_t_s_s(((((safe_mod_func_uint8_t_u_u(((((((p_52 <= (safe_sub_func_int16_t_s_s(((safe_add_func_int16_t_s_s(g_410, (g_337 == (safe_rshift_func_uint16_t_u_u((((safe_rshift_func_int8_t_s_s((l_366 | (safe_unary_minus_func_int8_t_s(0xC9L))), 6)) | (p_50 != 0xC4L)) && 0xBAB2L), 11))))) || l_311), 1L))) | l_286) <= g_2) || 0x87L) & 0xA99ED4DEL) & 252UL), p_50)) || g_350) < l_311) >= 0x78C7L), g_199)), p_51)) && 0x19CBL) != 1L))), l_449)) | l_89) == 9UL) < p_50)), 0x6FE8L)), l_102)) ^ p_51) != p_51))
                {
                    int32_t l_460 = 0xAAC3ADBAL;
                    l_312 = 0x5AF14D8AL;
                    g_412 = (safe_lshift_func_int8_t_s_u(((safe_add_func_int16_t_s_s(((g_199 > g_337) >= (g_350 == ((((safe_mod_func_int16_t_s_s(0xBCA2L, (safe_rshift_func_uint16_t_u_u((((safe_lshift_func_uint16_t_u_u((((l_460 & ((((safe_lshift_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(p_52, (safe_sub_func_uint8_t_u_u(((((-7L) != l_341) ^ 0x460BL) != g_409), p_51)))), l_460)) || g_346) <= g_129) ^ g_347)) > p_53) <= 0x323745E6L), 3)) ^ g_129) == g_346), 3)))) & g_149) | 0x31L) ^ p_50))), 0L)) && p_52), l_460));
                    return p_53;
                }
                else
                {
                    return g_410;
                }
            }
            l_341 = (p_53 | (-10L));
            l_341 = (safe_mod_func_uint8_t_u_u(l_274, (safe_add_func_uint32_t_u_u(0UL, (safe_sub_func_uint32_t_u_u(1UL, ((l_449 > (safe_mod_func_uint8_t_u_u(((l_475 | (g_337 >= (safe_mul_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((l_480 >= l_100), (safe_mul_func_int16_t_s_s((p_53 & l_325), 0x00EAL)))), l_208)))) < 0L), 0xBDL))) >= (-3L))))))));
        }
        else
        {
            uint32_t l_493 = 4294967291UL;
            g_412 = ((((safe_lshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(((l_475 != (safe_mod_func_uint16_t_u_u(((l_267 == (l_208 & ((((safe_sub_func_int8_t_s_s((safe_sub_func_int8_t_s_s((((l_493 & (!(safe_sub_func_int8_t_s_s((safe_rshift_func_int8_t_s_s(p_51, g_149)), (safe_sub_func_uint32_t_u_u((safe_add_func_int16_t_s_s(((safe_sub_func_int32_t_s_s((l_274 || (safe_lshift_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((-10L), (((safe_add_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s((((-1L) && l_325) && 1UL), 2)), g_350)) == p_52) != l_493))), 5))), 0x6CBAF1C7L)) > g_410), p_51)), 0xE17F145DL)))))) ^ g_199) <= g_2), g_199)), l_286)) | 0x3D5AL) ^ l_493) >= l_89))) && l_513), l_89))) | l_100), l_100)), g_3)) ^ (-1L)) <= l_493) <= p_51);
            if (g_351)
                goto lbl_514;
            l_312 = (safe_sub_func_int16_t_s_s(g_410, (0xD9L != (((safe_add_func_int32_t_s_s((((safe_rshift_func_uint16_t_u_s((safe_unary_minus_func_uint32_t_u(0x99EA1FDAL)), 8)) <= (l_493 > g_199)) > (safe_sub_func_uint16_t_u_u(8UL, (0xB44387E8L && (safe_mul_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((((safe_rshift_func_int8_t_s_u(0xC0L, p_51)) >= l_289) >= 1L), 1L)), l_493)))))), l_475)) && l_208) < p_51))));
            g_412 = (p_52 ^ 0x65L);
        }
        for (l_480 = 0; (l_480 < 13); ++l_480)
        {
            uint32_t l_547 = 0xCBFC9696L;
            int16_t l_568 = 0xC428L;
            uint16_t l_574 = 4UL;
            int32_t l_600 = 0x00326CECL;
            for (p_50 = (-15); (p_50 > 13); ++p_50)
            {
                uint16_t l_555 = 0x6861L;
                if ((g_2 & ((((((safe_mul_func_int16_t_s_s((~((p_51 && (g_350 == ((~((safe_add_func_uint8_t_u_u((((g_129 < 4294967295UL) || (safe_sub_func_uint16_t_u_u(p_51, ((4UL < l_542) >= (safe_mul_func_int8_t_s_s((safe_add_func_uint16_t_u_u(l_547, 0xE6B4L)), 0x8BL)))))) & (-8L)), g_3)) >= g_149)) & 65535UL))) || p_50)), g_351)) <= g_149) >= g_81) != l_100) > g_410) < g_2)))
                {
                    uint32_t l_548 = 18446744073709551615UL;
                    l_548 = (p_52 < ((p_52 < (0xE22FE3B4L != p_51)) || 0x6067L));
                    g_412 = (((+0UL) | g_410) >= (((safe_unary_minus_func_int32_t_s((safe_add_func_uint32_t_u_u(l_542, ((((safe_add_func_int16_t_s_s((((((0xC697L > 5UL) & ((p_52 || l_100) != l_555)) && ((safe_rshift_func_uint16_t_u_s((safe_mod_func_uint16_t_u_u((l_547 < p_50), 0xE4D8L)), p_50)) < g_412)) == p_53) && l_560), 1UL)) | l_267) != l_274) && g_81))))) | g_81) == 0xAC78L));
                }
                else
                {
                    int32_t l_584 = 0x4C46E58AL;
                    g_412 = p_53;
                    for (g_412 = 0; (g_412 > 5); g_412++)
                    {
                        uint8_t l_563 = 0x00L;
                        l_563 = g_3;
                        g_570 = (((0x08L | (safe_mod_func_uint8_t_u_u((1L | 0UL), (safe_lshift_func_uint8_t_u_s(l_568, 0))))) | p_53) || (p_53 && (+p_53)));
                        l_325 = 0L;
                    }
                    g_412 = (!((safe_lshift_func_int16_t_s_s((0x5E04L < (((l_574 > (safe_mod_func_uint8_t_u_u((!(~((0xE8L != (-1L)) > g_347))), (-4L)))) >= g_2) < (((safe_unary_minus_func_int8_t_s((((safe_mod_func_uint16_t_u_u((safe_add_func_int8_t_s_s(((l_312 && 247UL) >= l_568), g_347)), g_570)) != p_50) > 255UL))) && l_480) > g_149))), 3)) == l_584));
                }
                l_600 = (l_555 || (((safe_rshift_func_int8_t_s_u(0x9CL, ((safe_rshift_func_uint8_t_u_u((!g_199), g_410)) >= (safe_lshift_func_int16_t_s_u(((safe_rshift_func_int16_t_s_s((+((((g_346 < (l_574 < (((0x37E6L && ((safe_add_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(l_599, ((p_52 | (-1L)) >= 0UL))), p_51)) && 1L)) ^ g_149) >= g_199))) >= 0xBAL) || l_555) ^ g_149)), 6)) >= l_555), 8))))) || p_53) < g_350));
                return l_574;
            }
        }
    }
    if (p_50)
    {
        return l_312;
    }
    else
    {
        for (l_475 = 0; (l_475 >= 12); l_475++)
        {
            g_412 = 0L;
        }
        return p_51;
    }
}
inline static uint8_t func_56(int32_t p_57, int32_t p_58, int32_t p_59, int16_t p_60)
{
    uint16_t l_65 = 65535UL;
    p_57 = ((safe_mul_func_int8_t_s_s(g_2, l_65)) & 0L);
    p_58 = ((safe_sub_func_int32_t_s_s((safe_unary_minus_func_int32_t_s(((safe_mod_func_uint8_t_u_u((0x7DFE98D7L < (safe_rshift_func_uint8_t_u_u(g_2, 7))), (safe_lshift_func_uint8_t_u_s(((((safe_mod_func_int32_t_s_s((0L == p_58), (9L | 0x0EL))) > (0xC683L <= l_65)) >= (safe_rshift_func_uint8_t_u_s((safe_mod_func_uint8_t_u_u(0x64L, l_65)), 5))) > 0x037DL), l_65)))) > l_65))), 1L)) <= 65527UL);
    return g_2;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_2;
    csmith_sink_ = g_3;
    csmith_sink_ = g_42;
    csmith_sink_ = g_81;
    csmith_sink_ = g_129;
    csmith_sink_ = g_149;
    csmith_sink_ = g_199;
    csmith_sink_ = g_337;
    csmith_sink_ = g_346;
    csmith_sink_ = g_347;
    csmith_sink_ = g_350;
    csmith_sink_ = g_351;
    csmith_sink_ = g_409;
    csmith_sink_ = g_410;
    csmith_sink_ = g_412;
    csmith_sink_ = g_570;
    csmith_sink_ = g_647;
    csmith_sink_ = g_700;
    csmith_sink_ = g_767;
    platform_main_end(0,0);
    return 0;
}
