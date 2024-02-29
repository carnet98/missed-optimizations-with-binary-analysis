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
static int32_t g_5 = 0x974B666AL;
static uint8_t g_7 = 0x5EL;
static uint32_t *g_30 = (void*)0;
static int32_t g_71 = (-1L);
static int32_t g_87 = 0x8228F8F0L;
static int32_t g_89 = 0x5AF75FBDL;
static uint32_t ***g_104 = (void*)0;
static int16_t *g_116 = (void*)0;
static int32_t g_132 = 0x17BD2F3BL;
static uint16_t g_138 = 0xDF77L;
static int16_t g_139 = 1L;
static int32_t g_140 = 0x335754D7L;
static int8_t g_142 = (-3L);
static int32_t *g_157 = &g_89;
static int32_t **g_156 = &g_157;
static int32_t ***g_155 = &g_156;
static int32_t ****g_154 = &g_155;
static int16_t ***g_229 = (void*)0;
static int32_t *g_246 = &g_140;
static int32_t **g_245 = &g_246;
static int32_t g_324 = 0x783CCC9BL;
static int16_t g_325 = 0L;
static uint8_t g_379 = 7UL;
static uint32_t ****g_387 = (void*)0;
static uint32_t *****g_386 = &g_387;
static int8_t g_394 = 0x90L;
static int8_t g_434 = (-1L);
static uint32_t g_437 = 0xEDB2B042L;
static uint16_t *g_463 = &g_138;
static uint16_t **g_462 = &g_463;
static int16_t g_564 = 0x3B6CL;
static int16_t **g_571 = (void*)0;
static uint16_t g_575 = 0x0E8AL;
static uint32_t **g_655 = (void*)0;
static uint32_t ***g_654 = &g_655;
static int32_t g_736 = 7L;
static int32_t g_760 = 0L;
static uint8_t g_794 = 0x62L;
static int16_t g_830 = (-9L);
static uint16_t g_905 = 8UL;
static int32_t g_909 = (-1L);
static uint8_t g_1087 = 0UL;
static int8_t g_1140 = (-10L);
static uint32_t ****g_1209 = &g_654;
static uint32_t *****g_1208 = &g_1209;
static uint32_t *****g_1210 = (void*)0;
static int32_t *g_1213 = (void*)0;
static uint32_t g_1267 = 1UL;
static int8_t g_1268 = 0x98L;
static uint8_t g_1281 = 0xBAL;
static int32_t ***g_1359 = &g_245;
static int32_t ****g_1358 = &g_1359;
static int32_t *****g_1357 = &g_1358;
static uint16_t g_1543 = 0xFDB4L;
static int32_t *g_1544 = &g_132;
inline static int32_t func_1(void);
static int16_t func_10(uint32_t * p_11, uint32_t * p_12, uint32_t * p_13, int32_t p_14, uint32_t * p_15);
inline static uint32_t * func_16(uint16_t p_17, uint16_t p_18, int32_t p_19, uint32_t p_20, uint32_t * p_21);
inline static uint8_t func_33(uint32_t * p_34, int8_t p_35);
static uint8_t func_38(uint32_t p_39);
inline static int16_t func_42(uint32_t * p_43, uint32_t * p_44, uint32_t * p_45, int32_t p_46, int32_t p_47);
inline static uint32_t * func_48(int32_t p_49, uint32_t * p_50);
inline static int16_t func_56(uint8_t p_57, int16_t p_58, int16_t p_59);
static uint8_t func_61(int32_t p_62, uint32_t * p_63);
static uint32_t ** func_65(uint32_t ** p_66);
inline static int32_t func_1(void)
{
    int32_t l_2 = 0x960F57A7L;
    uint32_t *l_6 = (void*)0;
    uint8_t l_1144 = 252UL;
    uint32_t *l_1212 = (void*)0;
    uint32_t **l_1254 = (void*)0;
    uint32_t **l_1255 = &l_6;
    int16_t *l_1545 = &g_830;
    uint32_t *l_1546 = &g_437;
    int32_t l_1547 = 0xDB5BC8D8L;
    l_1547 = (l_2 && (safe_lshift_func_uint8_t_u_u(((g_7 = g_5) | ((*l_1546) = (safe_add_func_uint8_t_u_u(((0UL >= ((l_2 = (((*l_1545) = func_10(((*l_1255) = func_16(g_5, g_5, (safe_add_func_int32_t_s_s((0xCDL != ((safe_rshift_func_int16_t_s_u(((safe_mod_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(((g_30 == (l_6 = ((safe_lshift_func_uint8_t_u_u(func_33(((((((((safe_sub_func_uint8_t_u_u(func_38(l_2), l_1144)) , (-5L)) ^ l_2) < l_2) || (**g_462)) != 0L) && 0xB087L) , l_6), g_325), g_139)) , (void*)0))) , g_1140), 1)), l_2)) | l_2), 1)) | 1UL)), 3UL)), l_1144, l_1212)), l_1212, l_1212, l_1144, &g_437)) , l_2)) == l_1144)) & l_1144), l_1144)))), g_1087)));
    return l_2;
}
static int16_t func_10(uint32_t * p_11, uint32_t * p_12, uint32_t * p_13, int32_t p_14, uint32_t * p_15)
{
    uint32_t ****l_1259 = &g_104;
    uint8_t *l_1262 = &g_794;
    int32_t l_1265 = 0L;
    uint32_t *l_1266 = &g_1267;
    uint32_t ***l_1269 = (void*)0;
    uint16_t ***l_1286 = &g_462;
    int16_t ****l_1294 = &g_229;
    int32_t l_1374 = 0xC1A104D4L;
    int32_t ****l_1441 = &g_1359;
    int16_t l_1451 = 0xB97EL;
    int32_t ****l_1508 = &g_155;
    if ((+(((*l_1259) = ((l_1265 = ((safe_add_func_uint8_t_u_u((((((((((((9L && (*g_463)) ^ (((*g_386) = l_1259) == (void*)0)) > 1L) , (((*l_1262) = (safe_rshift_func_uint8_t_u_u(p_14, 1))) || (safe_lshift_func_int16_t_s_u((1UL || p_14), 3)))) , (((((g_1268 = ((*l_1266) = l_1265)) , (void*)0) == (void*)0) && p_14) && 0xB86AL)) && l_1265) || (-1L)) | (*p_15)) ^ p_14) < 0xD059L) | (*g_463)), 0xA0L)) , p_14)) , (void*)0)) == l_1269)))
    {
        int32_t *l_1270 = &g_5;
        int16_t ****l_1295 = &g_229;
        uint32_t *****l_1316 = (void*)0;
        uint8_t *l_1330 = (void*)0;
        uint32_t l_1352 = 9UL;
        uint32_t l_1364 = 0UL;
        uint8_t l_1392 = 0UL;
        int32_t **l_1401 = &g_246;
        int32_t *l_1403 = &l_1265;
        (*g_156) = l_1270;
        if ((((safe_rshift_func_int8_t_s_s(((g_909 , ((**g_462) = (*g_463))) && (safe_sub_func_int8_t_s_s(p_14, ((*l_1270) <= (g_138 && (p_14 >= l_1265)))))), (((*p_11) & (safe_mod_func_uint16_t_u_u((((((*g_246) = (safe_sub_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(g_575, l_1265)), 7L))) , (-3L)) <= p_14) == p_14), g_1281))) , (*l_1270)))) < p_14) && 0xFFL))
        {
            int32_t ***l_1285 = &g_245;
            int32_t ****l_1284 = &l_1285;
            int32_t l_1289 = (-1L);
            (***g_154) = &l_1289;
            return p_14;
        }
        else
        {
            uint32_t ****l_1290 = &g_104;
            int32_t l_1297 = 7L;
            uint8_t *l_1332 = &g_1087;
            if ((l_1290 == (*g_386)))
            {
                int32_t ***l_1301 = &g_245;
                int32_t ****l_1300 = &l_1301;
                int32_t l_1306 = 0x6468B34EL;
                uint32_t *****l_1317 = &l_1259;
                uint32_t l_1350 = 0x682252A3L;
                int32_t *l_1355 = (void*)0;
                l_1306 = (((((safe_add_func_int32_t_s_s((0x1EE8L ^ ((***l_1286) = (safe_unary_minus_func_int16_t_s((l_1294 == l_1295))))), (!p_14))) ^ (l_1297 && ((safe_add_func_uint8_t_u_u(((((*l_1300) = &g_245) == (void*)0) || ((g_1140 ^ (safe_lshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_u(((****g_154) ^ p_14), 4)), 2))) , 0x03B0L)), g_760)) >= p_14))) , (*l_1270)) , l_1297) || l_1306);
                if (l_1297)
                {
                    int16_t l_1320 = 0xD770L;
                    int32_t l_1321 = (-8L);
                    uint8_t *l_1331 = (void*)0;
                    l_1321 = (safe_rshift_func_int16_t_s_s((((g_89 = (safe_mod_func_uint8_t_u_u(((safe_add_func_int32_t_s_s((safe_unary_minus_func_uint8_t_u((safe_lshift_func_int16_t_s_s(p_14, (0x502F7E3BL && ((l_1317 = l_1316) == &l_1259)))))), 0x855F673DL)) , ((void*)0 != &g_142)), ((safe_mod_func_uint16_t_u_u((g_324 == l_1306), l_1320)) || l_1297)))) , 0x83L) || g_794), 2));
                    if ((!g_1140))
                    {
                        uint32_t l_1324 = 18446744073709551611UL;
                        uint32_t *l_1325 = &l_1324;
                        uint8_t *l_1329 = &g_1281;
                        int8_t *l_1333 = &g_434;
                        int32_t *l_1334 = &l_1321;
                        (*g_156) = (*g_156);
                        (*l_1334) = (((*l_1333) = ((((safe_unary_minus_func_uint8_t_u(l_1265)) , (l_1324 , ((*l_1262) = l_1265))) , (l_1325 = &l_1324)) != ((safe_lshift_func_uint8_t_u_s(((void*)0 == &g_1087), (((l_1331 = ((((*l_1329) = (~g_379)) || p_14) , l_1330)) == l_1332) & p_14))) , (void*)0))) <= p_14);
                    }
                    else
                    {
                        int32_t l_1349 = 6L;
                        uint16_t *l_1351 = &g_575;
                        uint8_t l_1353 = 0x2EL;
                        int32_t *l_1354 = (void*)0;
                        (***g_154) = l_1270;
                        l_1354 = func_16(((*l_1351) = (((((safe_add_func_int32_t_s_s((safe_sub_func_int16_t_s_s(0x46F1L, ((safe_add_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(((*g_463) = (safe_lshift_func_int8_t_s_s((*l_1270), 1))), (safe_add_func_uint16_t_u_u(1UL, (safe_sub_func_int32_t_s_s(p_14, l_1306)))))), l_1349)) , (0x26CE6AE1L && (p_14 == ((*g_157) <= p_14)))))), l_1297)) , l_1350) , p_14) > (*l_1270)) && 0x0DL)), l_1352, (**g_156), l_1353, p_15);
                        (*l_1354) = l_1265;
                        return (*l_1270);
                    }
                    (**g_155) = l_1355;
                }
                else
                {
                    int32_t *****l_1356 = &l_1300;
                    int32_t l_1373 = 0xDAE12296L;
                    uint16_t *l_1375 = (void*)0;
                    int32_t **l_1376 = &g_1213;
                    (**g_155) = &p_14;
                    g_1357 = l_1356;
                    p_14 = ((*p_15) | (safe_rshift_func_int16_t_s_s((p_14 < (safe_mod_func_uint16_t_u_u((((*l_1376) = func_16((*g_463), (l_1364 = 0UL), ((safe_rshift_func_int16_t_s_s(((((l_1265 || (safe_sub_func_uint32_t_u_u((*p_15), ((g_575 = (safe_sub_func_uint8_t_u_u((((safe_mod_func_uint8_t_u_u(l_1297, ((p_14 , ((l_1265 = (g_132 = (&g_1140 == (void*)0))) ^ l_1373)) | 0x6B76L))) != 0xBF75AC40L) <= l_1374), g_794))) == p_14)))) == (**g_156)) <= p_14) ^ p_14), 12)) | (**g_462)), (*p_15), p_13)) != l_1270), 0x68D6L))), 5)));
                    return (*l_1270);
                }
                return p_14;
            }
            else
            {
                int32_t l_1378 = 0xE07860B6L;
                int8_t *l_1394 = &g_1268;
                (*g_156) = ((safe_unary_minus_func_int8_t_s(((((l_1378 , (((*l_1262) = 3UL) ^ p_14)) && (safe_unary_minus_func_uint32_t_u(((((safe_add_func_int16_t_s_s(((((safe_rshift_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u(((*l_1394) = (((safe_rshift_func_int8_t_s_u((safe_mod_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u((*g_463), ((*****g_1357) , ((((((p_14 , ((((l_1392 > l_1265) , (safe_unary_minus_func_uint8_t_u(l_1297))) || l_1265) , (*p_11))) , (void*)0) != (void*)0) || g_564) ^ 0xADE9L) & 65533UL)))), l_1297)), p_14)) <= p_14) > 0xAAL)), l_1374)) | 0x2A2DL), 11)) , 0x2218L) != l_1378) == 0xD3L), p_14)) ^ (-10L)) , (*g_157)) == p_14)))) , (*p_15)) >= l_1374))) , (**g_155));
            }
        }
        p_14 = ((*l_1403) = (l_1265 , (((safe_add_func_int32_t_s_s(l_1374, ((*p_15) = (*l_1270)))) | (safe_sub_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(0xD8CAL, (4294967295UL & (l_1401 != (void*)0)))), p_14))) , (safe_unary_minus_func_uint32_t_u(l_1265)))));
    }
    else
    {
        int16_t *l_1406 = &g_325;
        int32_t l_1408 = 0x8B1B141CL;
        int8_t *l_1417 = (void*)0;
        int8_t *l_1418 = &g_434;
        int16_t *l_1425 = &g_564;
        uint32_t *****l_1426 = &g_1209;
        uint32_t *l_1427 = &g_437;
        int32_t l_1442 = 0xF2972119L;
        uint32_t l_1488 = 0UL;
        int32_t ****l_1505 = &g_155;
        int32_t l_1541 = 0xDC491005L;
        (*g_156) = func_48((safe_lshift_func_int8_t_s_u(((l_1426 = ((((*l_1406) = p_14) == ((*l_1425) = ((~(l_1408 , ((0xF5L | (((((safe_rshift_func_int8_t_s_u((((safe_rshift_func_int16_t_s_u(0x26F1L, 6)) <= ((safe_add_func_uint16_t_u_u(((p_14 || 5UL) | (safe_add_func_int8_t_s_s(((*l_1418) = 0x8EL), (((safe_lshift_func_int16_t_s_s((safe_mod_func_int16_t_s_s((safe_mod_func_int16_t_s_s(p_14, l_1374)), 0xABE3L)), 4)) ^ l_1408) | l_1265)))), p_14)) >= p_14)) ^ 0x27E14EB7L), 3)) ^ 4294967290UL) == (**g_462)) , 0x6CL) , 255UL)) < (*p_11)))) & l_1374))) , (void*)0)) == (void*)0), p_14)), l_1427);
        for (g_325 = 0; (g_325 < 22); ++g_325)
        {
            uint32_t l_1432 = 0x9EEDFBB8L;
            int32_t ****l_1483 = &g_155;
            int16_t ***l_1524 = &g_571;
            int32_t *l_1542 = &l_1408;
        }
    }
    (**g_155) = &p_14;
    (***l_1508) = g_1544;
    return (****l_1508);
}
inline static uint32_t * func_16(uint16_t p_17, uint16_t p_18, int32_t p_19, uint32_t p_20, uint32_t * p_21)
{
    uint32_t *****l_1218 = (void*)0;
    int32_t l_1221 = 0L;
    int8_t *l_1222 = (void*)0;
    int8_t *l_1223 = &g_394;
    int32_t **l_1234 = &g_246;
    int32_t *l_1235 = &g_71;
    uint32_t *l_1253 = (void*)0;
    (***g_154) = g_1213;
    l_1221 = ((*l_1235) = (safe_mod_func_int16_t_s_s((safe_add_func_uint8_t_u_u((&g_387 == (l_1218 = l_1218)), ((*l_1223) = (safe_rshift_func_uint16_t_u_s((((p_19 || 65534UL) != l_1221) > l_1221), p_17))))), ((((safe_mod_func_int16_t_s_s((g_830 = (0x3BL < ((((safe_rshift_func_int8_t_s_u((((*g_463) = (((safe_sub_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(((safe_sub_func_uint16_t_u_u(((void*)0 == l_1234), p_18)) <= p_20), p_18)), (-1L))) || l_1221) , p_19)) && p_20), 6)) >= p_19) , 6UL) < l_1221))), (-1L))) && l_1221) || (*g_463)) , 0x6DC2L))));
    (*g_156) = &l_1221;
    (*g_156) = &l_1221;
    return &g_437;
}
inline static uint8_t func_33(uint32_t * p_34, int8_t p_35)
{
    uint32_t ****l_1164 = &g_654;
    uint32_t *****l_1163 = &l_1164;
    int32_t l_1166 = 0x5CAA7CB9L;
    int32_t l_1168 = 1L;
    uint16_t ****l_1181 = (void*)0;
    int16_t *l_1204 = (void*)0;
    int32_t *l_1211 = &l_1166;
    for (g_325 = 0; (g_325 > 11); g_325++)
    {
        int32_t *l_1147 = (void*)0;
        l_1147 = l_1147;
    }
    if ((*g_157))
    {
        return g_142;
    }
    else
    {
        uint16_t l_1151 = 65535UL;
        int32_t l_1156 = 0x6937A1D3L;
        int32_t ***l_1162 = &g_245;
        int32_t ****l_1161 = &l_1162;
        uint32_t *****l_1165 = &l_1164;
        int32_t l_1167 = 0L;
        uint32_t *l_1169 = &g_437;
        uint16_t *****l_1190 = (void*)0;
        uint16_t *****l_1192 = &l_1181;
        int16_t l_1194 = 7L;
        int16_t **l_1198 = &g_116;
        (*g_156) = p_34;
        g_89 = ((p_35 < p_35) ^ (safe_lshift_func_uint8_t_u_s(0xAEL, 5)));
        (**g_155) = func_48((safe_unary_minus_func_uint32_t_u((l_1151 = p_35))), func_48((safe_lshift_func_int16_t_s_s((l_1168 = (((safe_lshift_func_uint8_t_u_u(p_35, 2)) || (p_35 < (l_1156 = (-1L)))) >= (safe_lshift_func_int16_t_s_s((l_1166 = (((safe_lshift_func_int8_t_s_u((((((p_35 <= (g_139 != ((l_1161 == ((l_1163 != l_1165) , (void*)0)) | p_35))) | 0xDC679090L) <= 0xB3L) , l_1166) , p_35), 5)) , p_35) && l_1166)), l_1167)))), 4)), l_1169));
        for (l_1168 = 24; (l_1168 >= (-11)); l_1168 = safe_sub_func_int8_t_s_s(l_1168, 5))
        {
            uint16_t *****l_1182 = &l_1181;
            uint16_t ***l_1185 = (void*)0;
            uint32_t l_1186 = 8UL;
            uint32_t *****l_1207 = &l_1164;
        }
    }
    (*l_1211) = 0x06318CABL;
    return g_89;
}
static uint8_t func_38(uint32_t p_39)
{
    int32_t l_64 = 9L;
    uint32_t *l_436 = &g_437;
    int32_t *l_522 = &g_89;
    int16_t *l_540 = &g_325;
    uint8_t l_599 = 0xB5L;
    int32_t l_624 = 1L;
    uint32_t l_629 = 0x6796F03CL;
    int8_t l_641 = 0xCFL;
    int32_t l_645 = 0x0608B1CBL;
    uint32_t l_646 = 6UL;
    uint16_t l_648 = 0UL;
    int32_t **l_664 = &g_246;
    int16_t ***l_739 = &g_571;
    int32_t ****l_829 = &g_155;
    uint32_t **l_847 = &l_436;
    uint32_t l_872 = 0xC4F738E2L;
    int32_t **l_887 = (void*)0;
    int16_t l_900 = 0xC8D4L;
    uint16_t l_908 = 0xEB48L;
    uint32_t l_934 = 18446744073709551615UL;
    uint32_t ****l_951 = &g_104;
    uint32_t **l_969 = &g_30;
    uint32_t l_991 = 7UL;
    int32_t l_1089 = 0xD5F24854L;
    uint32_t l_1090 = 0xC265D861L;
    int32_t l_1103 = 0x59B2D8DEL;
    int32_t *l_1143 = &l_645;
    return (****l_829);
}
inline static int16_t func_42(uint32_t * p_43, uint32_t * p_44, uint32_t * p_45, int32_t p_46, int32_t p_47)
{
    int32_t l_464 = 0xFCF9E425L;
    int8_t l_465 = 0xAAL;
    int32_t *l_466 = &g_87;
    for (g_89 = 0; (g_89 == 21); g_89 = safe_add_func_uint8_t_u_u(g_89, 8))
    {
        l_464 = ((void*)0 != g_462);
        return l_464;
    }
    (*l_466) = l_465;
    for (g_142 = 13; (g_142 < 11); g_142 = safe_sub_func_uint8_t_u_u(g_142, 9))
    {
        for (g_138 = 0; (g_138 > 43); ++g_138)
        {
            int32_t ***l_471 = &g_245;
            int32_t *l_476 = (void*)0;
            (*l_471) = &g_246;
            for (g_140 = 0; (g_140 >= (-21)); g_140--)
            {
                for (g_139 = 0; (g_139 <= 12); g_139 = safe_add_func_uint8_t_u_u(g_139, 1))
                {
                    l_476 = l_476;
                }
            }
        }
        return p_47;
    }
    (**g_155) = (void*)0;
    return p_47;
}
inline static uint32_t * func_48(int32_t p_49, uint32_t * p_50)
{
    int32_t *l_440 = &g_71;
    int16_t ****l_457 = &g_229;
lbl_458:
    for (g_394 = 0; (g_394 == (-12)); g_394 = safe_sub_func_int16_t_s_s(g_394, 2))
    {
        uint32_t l_441 = 0x3E73978AL;
        uint32_t l_450 = 18446744073709551615UL;
        int32_t l_456 = 0xFCA1F228L;
        (*g_156) = l_440;
        p_49 = (((((l_441 != l_441) , ((*l_440) = (safe_rshift_func_int16_t_s_s((l_456 = (safe_add_func_uint32_t_u_u((safe_mod_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(l_450, 11)), (safe_mod_func_int8_t_s_s(((0x59DB557BL >= ((((l_450 ^ (*p_50)) , g_324) >= p_49) >= (~(g_138 = 0xEFDAL)))) < g_394), (*l_440))))), (***g_155)))), (*l_440))))) <= 0x58L) <= 0x54L) , 0x32876BD8L);
    }
    (*l_440) = ((void*)0 != l_457);
    (*l_440) = p_49;
    if (g_394)
        goto lbl_458;
    return p_50;
}
inline static int16_t func_56(uint8_t p_57, int16_t p_58, int16_t p_59)
{
    int32_t *l_96 = &g_71;
    int16_t *l_109 = (void*)0;
    int32_t ***l_117 = (void*)0;
    int16_t **l_244 = &g_116;
    int16_t ***l_243 = &l_244;
    uint32_t **l_275 = &g_30;
    uint32_t ***l_274 = &l_275;
    int32_t **l_293 = &g_246;
    int8_t *l_321 = &g_142;
    uint32_t l_322 = 9UL;
    for (g_89 = 0; (g_89 == (-28)); g_89--)
    {
        int32_t *l_97 = &g_87;
        int16_t l_102 = 0xD6CDL;
        int32_t ****l_133 = &l_117;
        int32_t *l_297 = &g_87;
        if (((l_97 = l_96) != (void*)0))
        {
            int32_t **l_98 = &l_97;
            int16_t *l_103 = &l_102;
            uint32_t **l_106 = (void*)0;
            uint32_t ***l_105 = &l_106;
            (*l_98) = l_97;
            (**l_98) = ((((safe_mod_func_int8_t_s_s((*l_97), 0xCDL)) >= (*l_96)) | ((~(((((*l_103) = ((*l_96) , (l_102 | (0x5BL && (0xCDL >= p_58))))) < (((g_104 != l_105) , p_58) , (*l_97))) < g_71) , 2UL)) | p_59)) >= p_58);
            if (p_59)
            {
                int8_t l_110 = 0xA7L;
                int32_t *l_113 = &g_71;
                (*l_97) = ((p_57 > ((0L < (((*l_103) = g_87) > ((l_109 == &p_59) <= (1L == ((g_87 , ((**l_98) ^ 1L)) & g_87))))) , g_5)) , l_110);
                for (l_110 = 0; (l_110 != (-18)); l_110 = safe_sub_func_uint16_t_u_u(l_110, 6))
                {
                    (*l_97) = p_57;
                    return p_58;
                }
                l_113 = (*l_98);
                for (p_58 = (-30); (p_58 > 24); p_58 = safe_add_func_int32_t_s_s(p_58, 7))
                {
                    int32_t ****l_118 = &l_117;
                    int32_t *l_119 = &g_87;
                    (*l_113) = (l_103 != g_116);
                    (*l_118) = l_117;
                    (*l_119) = ((*l_113) && (p_57 | ((*l_97) = g_89)));
                }
            }
            else
            {
                (*l_98) = (g_87 , &g_5);
            }
            (*l_98) = (*l_98);
        }
        else
        {
            int32_t *l_120 = &g_87;
            int32_t *l_131 = &g_132;
            int16_t *l_134 = &l_102;
            uint16_t *l_135 = (void*)0;
            uint16_t *l_136 = (void*)0;
            uint16_t *l_137 = &g_138;
            int8_t *l_141 = &g_142;
            int32_t *l_248 = (void*)0;
            int32_t l_267 = 0x5FF72895L;
            uint16_t l_285 = 1UL;
            int16_t ***l_290 = (void*)0;
            (*l_120) = ((*l_97) = 0L);
            if ((((((*l_141) = (safe_rshift_func_int8_t_s_s(((safe_sub_func_int32_t_s_s(0x85E37C3EL, ((*l_120) ^ (+((safe_rshift_func_uint16_t_u_s(((safe_rshift_func_uint8_t_u_s(((~(*l_97)) == ((*l_97) >= (p_59 < ((*l_97) == ((*l_120) >= ((*l_131) = 0L)))))), 1)) ^ (g_140 = (g_139 = ((*l_137) = (((*l_134) = (((((void*)0 != l_133) >= g_87) < p_59) ^ (*l_97))) > g_5))))), 12)) && (-1L)))))) && 0UL), 6))) == (-1L)) , p_59) == p_59))
            {
                uint32_t l_161 = 0x642D8EDDL;
                int32_t *l_162 = &g_71;
                int32_t *l_170 = &g_140;
                int32_t **l_169 = &l_170;
                uint32_t ****l_190 = &g_104;
                int16_t ***l_194 = (void*)0;
                uint32_t l_247 = 18446744073709551607UL;
                int8_t l_276 = 0L;
                for (l_102 = 0; (l_102 >= 11); l_102 = safe_add_func_uint32_t_u_u(l_102, 2))
                {
                    uint32_t l_149 = 18446744073709551606UL;
                    int16_t *l_150 = (void*)0;
                    int16_t *l_151 = &g_139;
                    int32_t *l_158 = (void*)0;
                    int32_t *l_159 = &g_140;
                    (*l_96) = (((safe_lshift_func_uint16_t_u_u(((((p_58 >= (p_57 , g_138)) == ((((*l_159) = (5UL ^ (safe_add_func_int16_t_s_s(((65529UL || (((*l_151) = ((p_58 ^ l_149) | (p_59 = (*l_131)))) , ((((safe_sub_func_uint32_t_u_u(4UL, 0xD29671F1L)) != (*l_97)) , g_154) == &l_117))) , 0L), g_142)))) , p_57) & p_57)) <= p_57) || 0xD095L), 10)) , p_57) | g_5);
                    (**g_155) = (p_57 , (***g_154));
                    (*l_97) = (!((g_5 >= g_142) > l_161));
                    (*g_156) = l_162;
                }
                if ((safe_add_func_uint32_t_u_u(0x6101610AL, ((((safe_mod_func_int32_t_s_s(((*l_97) == (g_138 = ((((safe_lshift_func_int8_t_s_u(((((((void*)0 == &g_140) , (p_57 = (&g_138 == ((l_162 != ((*l_169) = l_96)) , &g_138)))) < ((0L < (*l_120)) & g_132)) , (void*)0) != (void*)0), 1)) | (-7L)) , (void*)0) != &g_140))), (*l_162))) >= 0x6197L) >= p_59) > 0x1A72L))))
                {
                    uint32_t l_173 = 4294967288UL;
                    (*l_120) = (*g_157);
                    if ((safe_mod_func_uint32_t_u_u(p_58, p_57)))
                    {
                        l_173 = p_59;
                        (*l_97) = (((*l_137) = 0UL) , (safe_rshift_func_int8_t_s_s(((safe_lshift_func_int8_t_s_s(g_138, 6)) > 1L), 1)));
                        (**g_155) = l_162;
                    }
                    else
                    {
                        int16_t **l_179 = &l_109;
                        int16_t ***l_178 = &l_179;
                        (*l_178) = &l_134;
                        (***g_154) = (*g_156);
                        if ((*g_157))
                            continue;
                    }
                    for (p_59 = 0; (p_59 != (-28)); p_59--)
                    {
                        int32_t *l_182 = (void*)0;
                        uint32_t **l_184 = &g_30;
                        uint32_t ***l_183 = &l_184;
                        uint32_t ****l_185 = &g_104;
                        uint32_t *****l_188 = (void*)0;
                        uint32_t *****l_189 = &l_185;
                        int16_t ****l_195 = &l_194;
                        int16_t **l_198 = &l_109;
                        int16_t ***l_197 = &l_198;
                        int16_t ****l_196 = &l_197;
                        (***g_154) = (***g_154);
                        l_182 = ((*g_156) = (***g_154));
                        (*l_185) = l_183;
                        (*l_97) = ((safe_rshift_func_uint8_t_u_s(((((((*l_189) = &l_183) == l_190) , (p_57 ^ (safe_lshift_func_int8_t_s_u((((!((p_59 != g_71) & (((*l_196) = ((*l_195) = l_194)) == (void*)0))) || ((p_59 <= (safe_lshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_u((p_57 & 0x9F0944A3L), (*l_162))), 12))) == (*l_120))) >= 0xB0DCD2CFL), p_57)))) & (***g_155)) , (*l_162)), 6)) ^ (*l_182));
                    }
                }
                else
                {
                    uint32_t *****l_213 = (void*)0;
                    uint32_t *****l_214 = (void*)0;
                    int16_t ****l_230 = &l_194;
                    int32_t **l_234 = &l_170;
                    int16_t l_242 = (-9L);
                    int32_t ***l_255 = &g_156;
                    (*l_120) = ((*l_131) = (((safe_rshift_func_int8_t_s_u(((*l_141) = (p_57 <= (*l_96))), 4)) < ((((((safe_rshift_func_int16_t_s_u(((safe_add_func_uint16_t_u_u((*l_162), ((*l_162) != (safe_rshift_func_int16_t_s_s(0x14C0L, ((*l_96) , (safe_mod_func_uint16_t_u_u((((l_190 = &g_104) != &g_104) && ((safe_rshift_func_uint8_t_u_s((((~((safe_lshift_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_s((g_139 & p_58), 11)) >= (*l_162)), g_71)) || g_71)) != g_139) != 5L), 0)) | (**g_156))), 1UL)))))))) ^ g_89), 5)) || p_57) | 0L) || 65535UL) || (*l_96)) >= (*g_157))) & 0x7D783D8BL));
                    if ((safe_sub_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(((!(safe_lshift_func_uint8_t_u_s((((p_58 && (((*l_230) = g_229) == g_229)) || ((0xC4D2L < (safe_rshift_func_uint8_t_u_u((2L == (((!((*l_141) = ((l_234 != ((safe_mod_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(((((safe_add_func_int8_t_s_s((*l_131), (((*l_96) = (((safe_unary_minus_func_uint16_t_u(((*l_97) & ((((p_58 == (*l_97)) <= g_89) , p_57) , 0xD0L)))) ^ l_242) < 65535UL)) == p_59))) , g_229) != l_243) , 9UL), p_58)), p_59)) , g_245)) < p_57))) || g_71) > 1UL)), l_247))) & 0x21L)) >= (-1L)), 0))) | 0xA4L), g_140)), 0x36BDL)))
                    {
                        (*l_96) = 0xE226BEB4L;
                    }
                    else
                    {
                        int32_t l_262 = 0x605A821BL;
                        int32_t l_273 = 0xED7BFA6EL;
                        l_248 = ((***g_154) = (*g_156));
                        (*l_96) = (0x07L ^ (safe_mod_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_s((safe_sub_func_int32_t_s_s((((*l_133) = l_117) != l_255), ((safe_lshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((((safe_rshift_func_int16_t_s_u((l_262 <= (safe_lshift_func_uint16_t_u_u((((((((((safe_sub_func_int16_t_s_s(p_58, (l_267 ^ (~((((*l_190) = g_104) == ((safe_lshift_func_uint8_t_u_u(((((l_273 = ((*g_154) != (((g_142 = (safe_sub_func_int16_t_s_s((g_71 && p_58), p_57))) < p_57) , (void*)0))) , (*l_162)) == (***g_155)) > p_57), p_59)) , l_274)) && l_276))))) | l_262) || g_139) == 251UL) != p_59) ^ p_59) , 0xB06FB9F2L) || 1UL) , p_58), (***l_255)))), p_58)) == 0x5DL) >= p_57), p_57)), p_58)) < 0x19L))), 4)) , 0x1529L), 0xC32AL)));
                    }
                }
                (**g_155) = &l_267;
                (**g_155) = (**g_155);
            }
            else
            {
                int16_t **l_279 = &l_134;
                int32_t l_288 = (-1L);
                uint16_t l_291 = 0x7886L;
                for (g_138 = 0; (g_138 != 19); g_138 = safe_add_func_int8_t_s_s(g_138, 1))
                {
                    uint32_t l_292 = 4294967293UL;
                    uint16_t *l_294 = &l_291;
                    uint16_t *l_295 = &l_285;
                    int32_t l_296 = 0x39972021L;
                    (***g_154) = (((**g_245) = ((void*)0 == l_279)) , (*g_156));
                    l_296 = (safe_unary_minus_func_int8_t_s((((*l_295) = ((*l_120) = (((safe_lshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_s((p_57 >= 0xAF4F0EBAL), 2)), ((void*)0 != l_248))) <= (-10L)) != ((*l_294) = ((((***g_155) , (((**l_279) = l_285) | (((((((safe_rshift_func_int8_t_s_u(l_288, 5)) , (safe_unary_minus_func_int32_t_s(0x2393EE34L))) , l_290) != (void*)0) , 254UL) || l_291) , l_292))) , &g_246) == l_293))))) & 0x136CL)));
                }
                (***g_154) = l_297;
            }
            for (l_285 = 0; (l_285 >= 29); ++l_285)
            {
                return p_58;
            }
            return (*l_297);
        }
        return (*l_97);
    }
    for (g_142 = 0; (g_142 <= 22); ++g_142)
    {
        uint32_t l_302 = 0x7EC65E06L;
        int16_t *l_320 = &g_139;
        int32_t l_326 = 0x827C7132L;
        int32_t l_353 = 1L;
        int32_t l_354 = 6L;
        uint16_t l_370 = 5UL;
        int8_t *l_374 = (void*)0;
        l_302 = (0xBDDC878DL || p_57);
        for (g_138 = 0; (g_138 <= 28); ++g_138)
        {
            uint32_t ****l_307 = &l_274;
            int32_t l_323 = 0xFD0BA7A7L;
            int16_t l_345 = 0x58D0L;
            uint8_t *l_409 = &g_379;
        }
        (***g_155) = (-8L);
    }
    (**g_155) = l_96;
    return p_59;
}
static uint8_t func_61(int32_t p_62, uint32_t * p_63)
{
    uint32_t **l_93 = &g_30;
    uint32_t ***l_92 = &l_93;
    (*l_92) = func_65(&g_30);
    return g_71;
}
static uint32_t ** func_65(uint32_t ** p_66)
{
    int32_t *l_67 = &g_5;
    int32_t *l_70 = &g_71;
    uint32_t l_84 = 0x27DFDEEAL;
    int8_t l_85 = 0xE0L;
    int32_t *l_86 = &g_87;
    int32_t *l_88 = &g_89;
    uint32_t **l_91 = &g_30;
    l_67 = l_67;
    (*l_70) = ((p_66 == &g_30) != (safe_rshift_func_int16_t_s_u((g_5 , (*l_67)), 14)));
    (*l_88) = ((*l_70) = ((*l_67) ^ (((safe_mod_func_uint16_t_u_u(g_71, (((((*l_86) = (0UL || (safe_add_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(((((safe_rshift_func_uint16_t_u_s((((g_71 >= ((safe_add_func_uint16_t_u_u((safe_add_func_int8_t_s_s(((*l_70) , (*l_70)), (((*l_70) > (0xA84A0002L < l_84)) <= (*l_70)))), 0xBAF3L)) & 0x979DL)) && (*l_67)) ^ 0x918CD8B1L), (*l_67))) >= 65535UL) , l_85) && (*l_67)), 0x92L)), (*l_67))))) >= (-1L)) <= g_71) ^ g_71))) , 0x0F61L) >= g_5)));
    (*l_88) = (safe_unary_minus_func_int16_t_s(((*p_66) != (void*)0)));
    return l_91;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    g_157 = 0;
    g_1357 = 0;
    csmith_sink_ = g_5;
    csmith_sink_ = g_7;
    csmith_sink_ = g_71;
    csmith_sink_ = g_87;
    csmith_sink_ = g_89;
    csmith_sink_ = g_132;
    csmith_sink_ = g_138;
    csmith_sink_ = g_139;
    csmith_sink_ = g_140;
    csmith_sink_ = g_142;
    csmith_sink_ = g_324;
    csmith_sink_ = g_325;
    csmith_sink_ = g_379;
    csmith_sink_ = g_394;
    csmith_sink_ = g_434;
    csmith_sink_ = g_437;
    csmith_sink_ = g_564;
    csmith_sink_ = g_575;
    csmith_sink_ = g_736;
    csmith_sink_ = g_760;
    csmith_sink_ = g_794;
    csmith_sink_ = g_830;
    csmith_sink_ = g_905;
    csmith_sink_ = g_909;
    csmith_sink_ = g_1087;
    csmith_sink_ = g_1140;
    csmith_sink_ = g_1267;
    csmith_sink_ = g_1268;
    csmith_sink_ = g_1281;
    csmith_sink_ = g_1543;
    platform_main_end(0,0);
    return 0;
}
