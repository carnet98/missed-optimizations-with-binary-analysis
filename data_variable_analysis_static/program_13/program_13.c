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
static uint32_t g_14 = 6UL;
static uint8_t g_65 = 246UL;
static int32_t *g_74 = (void*)0;
static int16_t g_84[3] = {(-3L),(-3L),(-3L)};
static int32_t g_86 = (-8L);
static uint16_t g_94 = 0x7806L;
static int8_t g_111 = 0x30L;
static uint16_t g_112[8][7][4] = {{{0x0555L,0xEFCBL,0x9B76L,7UL},{0x7879L,0xDEF6L,65530UL,4UL},{0xEFCBL,0x7879L,65535UL,65526UL},{65530UL,0xE593L,0xDEF6L,0x7BB5L},{0x4D29L,0x4EC1L,0x2DE5L,0xBD54L},{0xA235L,0x1417L,0xB852L,0xE746L},{0xE746L,0x4D29L,0x4FBAL,0x4D29L}},{{0x8BFCL,65527UL,0x7BB5L,7UL},{0xFE02L,65535UL,0xCC92L,0x7879L},{65527UL,4UL,65535UL,0x4EC1L},{65527UL,0xA235L,0xCC92L,0xB852L},{65535UL,0x5FB0L,7UL,0UL},{65531UL,0xDB04L,0x8BFCL,0x2DE5L},{0x7BB5L,0xCC92L,0x1417L,65535UL}},{{1UL,0xE746L,0UL,0xA235L},{65527UL,0x4EC1L,1UL,0xEFCBL},{0xE746L,65535UL,0xDB04L,0xBD54L},{0xD133L,65531UL,0xE746L,0x4FBAL},{65530UL,0x5FB0L,0x9A83L,0x9A83L},{0UL,0UL,0UL,0x4981L},{0x7BB5L,0xEFCBL,0xA235L,65535UL}},{{65532UL,0x9E23L,0xB852L,0xA235L},{0xCC92L,0x9E23L,65526UL,65535UL},{0x9E23L,0xEFCBL,0xDB04L,0x4981L},{1UL,0UL,0xD133L,0x9A83L},{0xDEF6L,0x5FB0L,0xF6C6L,0x4FBAL},{0xDB04L,65531UL,0x0555L,0xBD54L},{0x7BB5L,65535UL,65535UL,0xEFCBL}},{{65527UL,0x4EC1L,0xE52AL,0xA235L},{0xEFCBL,0xE746L,0x9E23L,65535UL},{0x4EC1L,0xCC92L,0xDB04L,0x2DE5L},{0x839BL,0xDB04L,0x839BL,0UL},{65535UL,0x5FB0L,0x4FBAL,0xB852L},{0x048DL,1UL,0xE593L,0x5FB0L},{0x7BB5L,0xDEF6L,0xE593L,65530UL}},{{0x048DL,0x839BL,0x4FBAL,0xA235L},{65535UL,65526UL,0x839BL,65527UL},{0x839BL,65527UL,0xDB04L,0x7BB5L},{0x4EC1L,0x048DL,0x9E23L,0xE52AL},{0xEFCBL,0x5FB0L,0xE52AL,7UL},{65527UL,65532UL,65535UL,0x5C55L},{0x7BB5L,65530UL,0x0555L,0xCC92L}},{{0xDB04L,1UL,0xF6C6L,0xA235L},{0xDEF6L,0xD133L,0xD133L,0xDEF6L},{1UL,65535UL,0xDB04L,0x9B76L},{0x9E23L,65527UL,65526UL,0xF6C6L},{0xCC92L,0x5FB0L,0xB852L,0xF6C6L},{65532UL,65527UL,0xA235L,0x9B76L},{0x7BB5L,65535UL,0UL,0xDEF6L}},{{0UL,0xD133L,0x9A83L,0xA235L},{65530UL,1UL,0xE746L,0xCC92L},{0xD133L,65530UL,0xDB04L,0x5C55L},{0xE746L,65532UL,1UL,7UL},{65527UL,0x5FB0L,0UL,0xE52AL},{1UL,0x048DL,0x1417L,0x7BB5L},{0x7BB5L,65527UL,0x8BFCL,65527UL}}};
static uint32_t g_129[1][4][8] = {{{1UL,0x981B607EL,0x981B607EL,1UL,0x7867E7C5L,1UL,0x981B607EL,0x981B607EL},{0x981B607EL,0x7867E7C5L,0x7867E7C5L,0x7867E7C5L,1UL,1UL,1UL,0x7867E7C5L},{0xCDB74EB9L,1UL,0xCDB74EB9L,1UL,1UL,0xCDB74EB9L,1UL,0xCDB74EB9L},{0x981B607EL,1UL,0x7867E7C5L,1UL,0x981B607EL,0x981B607EL,1UL,0x7867E7C5L}}};
static uint8_t ***g_162 = (void*)0;
static int8_t g_181 = (-10L);
static int8_t *g_240 = &g_181;
static int16_t *g_242 = &g_84[1];
static int16_t **g_241 = &g_242;
static uint16_t g_251[5] = {0x2FEDL,0x2FEDL,0x2FEDL,0x2FEDL,0x2FEDL};
static uint32_t g_320[8] = {0xEC828539L,0xEC828539L,0xEC828539L,0xEC828539L,0xEC828539L,0xEC828539L,0xEC828539L,0xEC828539L};
static int32_t g_326 = 1L;
static uint16_t g_327 = 0xF6E2L;
static int8_t g_337 = 0x57L;
static uint8_t g_351[5][7] = {{0x22L,0x60L,0x60L,0x22L,0x60L,0x60L,0x22L},{0x60L,0x22L,0x60L,0x60L,0x22L,0x60L,0x60L},{0x22L,0x22L,0xDDL,0x22L,0x22L,0xDDL,0x22L},{0x22L,0x60L,0x60L,0x22L,0x60L,0x60L,0x22L},{0x60L,0x22L,0x60L,0x60L,0x22L,0x60L,0x60L}};
static uint8_t *g_350 = &g_351[2][5];
static uint8_t **g_349 = &g_350;
static uint32_t g_377 = 1UL;
static int16_t ***g_426 = &g_241;
static uint32_t g_482 = 18446744073709551609UL;
static int32_t g_487 = 0xC51FBB9AL;
static int8_t g_488 = 0x4BL;
static uint16_t g_490 = 5UL;
static uint8_t g_499 = 0x28L;
static uint8_t g_521 = 0x69L;
static uint32_t g_522[6][3][9] = {{{0xE49874BAL,1UL,1UL,0xE49874BAL,3UL,0xE51E9565L,0x41FBABFEL,1UL,0x54FB5CBBL},{0xE49874BAL,0xCC247009L,1UL,0xE51E9565L,0x54FB5CBBL,3UL,3UL,0x54FB5CBBL,0xE51E9565L},{0xFC3F0EC1L,0UL,0xFC3F0EC1L,1UL,3UL,1UL,0x7C9C6825L,7UL,0xE51E9565L}},{{0xF9675A4DL,0xFC3F0EC1L,0x54FB5CBBL,0x41FBABFEL,1UL,7UL,1UL,0x41FBABFEL,0x54FB5CBBL},{0xE51E9565L,0xE51E9565L,0UL,1UL,0xF9675A4DL,0xFC3F0EC1L,0x54FB5CBBL,0x41FBABFEL,1UL},{1UL,0x7C9C6825L,7UL,0xE51E9565L,0x8E3EDC70L,0x8E3EDC70L,0xE51E9565L,7UL,0x7C9C6825L}},{{0x8E3EDC70L,0x48058D35L,0UL,0xE49874BAL,0xCC247009L,1UL,0xE51E9565L,0x54FB5CBBL,3UL},{0x41FBABFEL,1UL,0x54FB5CBBL,0x7C9C6825L,0x105CDAAAL,0x7C9C6825L,0x54FB5CBBL,1UL,0x41FBABFEL},{0xCC247009L,0x48058D35L,0xFC3F0EC1L,0x105CDAAAL,0xE51E9565L,0x7C9C6825L,1UL,0UL,1UL}},{{0x48058D35L,0x7C9C6825L,1UL,7UL,7UL,1UL,0x7C9C6825L,0x48058D35L,0xE49874BAL},{0xCC247009L,0xE51E9565L,1UL,0xF9675A4DL,7UL,0x8E3EDC70L,3UL,0x105CDAAAL,0x105CDAAAL},{0x41FBABFEL,0xFC3F0EC1L,0xE51E9565L,0x48058D35L,0xE51E9565L,0xFC3F0EC1L,0x41FBABFEL,0x8E3EDC70L,0xE49874BAL}},{{0x8E3EDC70L,0UL,0x41FBABFEL,0x48058D35L,0x105CDAAAL,7UL,1UL,0xE51E9565L,1UL},{1UL,0xCC247009L,0xF9675A4DL,0xFC3F0EC1L,1UL,0x105CDAAAL,0x8E3EDC70L,1UL,0x48058D35L},{0x41FBABFEL,0x54FB5CBBL,0xFC3F0EC1L,0xF9675A4DL,1UL,0UL,0xE51E9565L,0xE51E9565L,0UL}},{{0xFC3F0EC1L,0xE51E9565L,0x48058D35L,0xE51E9565L,0xFC3F0EC1L,0x41FBABFEL,0x8E3EDC70L,0xE49874BAL,1UL},{3UL,0xE51E9565L,0x41FBABFEL,1UL,0x54FB5CBBL,0x7C9C6825L,0x105CDAAAL,0x7C9C6825L,0x54FB5CBBL},{0x8E3EDC70L,0x54FB5CBBL,0x54FB5CBBL,0x8E3EDC70L,0UL,0x41FBABFEL,0x48058D35L,0x105CDAAAL,7UL}}};
static uint32_t g_529 = 4294967295UL;
static uint16_t func_1(void);
inline static int8_t func_4(int8_t p_5, int16_t p_6, int8_t p_7);
inline static int16_t func_8(uint16_t p_9, uint8_t p_10, int8_t p_11, uint32_t p_12, uint32_t p_13);
inline static uint8_t func_18(int32_t p_19);
inline static int32_t func_24(int32_t p_25, int32_t p_26, uint32_t p_27, int32_t p_28, uint16_t p_29);
static int32_t func_30(int16_t p_31, uint16_t p_32, uint16_t p_33);
inline static uint16_t func_34(int16_t p_35, int8_t p_36, uint32_t p_37, int32_t p_38);
static int32_t * func_43(int32_t * p_44, int32_t * p_45, int32_t * p_46);
inline static int32_t * func_47(int16_t p_48, int32_t p_49);
static int16_t func_51(uint16_t p_52, int32_t * p_53, int16_t p_54, int32_t * p_55);
static uint16_t func_1(void)
{
    uint16_t l_17 = 0x3358L;
    int32_t l_41[10][2][1] = {{{0xD9964974L},{8L}},{{0xD9964974L},{1L}},{{1L},{0xD9964974L}},{{8L},{0xD9964974L}},{{1L},{1L}},{{0xD9964974L},{8L}},{{0xD9964974L},{1L}},{{1L},{0xD9964974L}},{{8L},{0xD9964974L}},{{1L},{1L}}};
    uint16_t *l_322 = &g_112[1][5][1];
    int32_t l_323 = 0x993827F1L;
    int16_t *l_533 = (void*)0;
    int16_t *l_534 = &g_84[0];
    int32_t *l_535 = &g_487;
    int32_t *l_536 = (void*)0;
    int32_t *l_537 = &g_487;
    int32_t *l_538[8][8] = {{&l_41[3][0][0],(void*)0,&l_41[3][0][0],(void*)0,&l_41[3][0][0],(void*)0,&l_41[3][0][0],(void*)0},{&l_41[3][0][0],(void*)0,&l_41[3][0][0],(void*)0,&l_41[3][0][0],(void*)0,&l_41[3][0][0],(void*)0},{&l_41[3][0][0],(void*)0,&l_41[3][0][0],(void*)0,&l_41[3][0][0],(void*)0,&l_41[3][0][0],(void*)0},{&l_41[3][0][0],(void*)0,&l_41[3][0][0],(void*)0,&l_41[3][0][0],(void*)0,&l_41[3][0][0],(void*)0},{&l_41[3][0][0],(void*)0,&l_41[3][0][0],(void*)0,&l_41[3][0][0],(void*)0,&l_41[3][0][0],(void*)0},{&l_41[3][0][0],(void*)0,&l_41[3][0][0],(void*)0,&l_41[3][0][0],(void*)0,&l_41[3][0][0],(void*)0},{&l_41[3][0][0],(void*)0,&l_41[3][0][0],(void*)0,&l_41[3][0][0],(void*)0,&l_41[3][0][0],(void*)0},{&l_41[3][0][0],(void*)0,&l_41[3][0][0],(void*)0,&l_41[3][0][0],(void*)0,&l_41[3][0][0],(void*)0}};
    uint8_t l_539 = 1UL;
    int i, j, k;
    (*l_535) &= ((safe_mod_func_int16_t_s_s(((*l_534) = (func_4(((func_8(g_14, (safe_rshift_func_int16_t_s_s(l_17, (0x8EL | func_18(((1UL || (safe_sub_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((func_24(func_30(l_17, (l_323 &= ((*l_322) = func_34((l_41[3][0][0] = (g_14 , (safe_add_func_uint16_t_u_u(0x813BL, (((l_17 , g_14) , g_14) < l_17))))), g_14, l_17, l_17))), g_14), g_251[3], l_17, g_94, l_17) || 0x2CA25392L), 8)), l_17))) , l_17))))), g_320[5], l_17, g_94) != l_17) != g_337), l_17, l_17) ^ 4UL)), 0x0796L)) || (**g_349));
    ++l_539;
    return g_14;
}
inline static int8_t func_4(int8_t p_5, int16_t p_6, int8_t p_7)
{
    uint32_t l_339 = 0xEFD7E304L;
    uint8_t *l_344 = &g_65;
    uint8_t **l_352 = &g_350;
    uint8_t **l_353 = &l_344;
    uint8_t ***l_354 = &l_353;
    uint16_t *l_355[4][7][8] = {{{&g_112[1][2][1],&g_251[4],&g_112[3][0][1],&g_112[3][2][2],&g_94,&g_251[4],&g_251[4],&g_251[4]},{&g_251[2],&g_251[4],&g_251[4],&g_251[4],&g_251[2],(void*)0,&g_94,&g_251[4]},{&g_327,&g_251[2],&g_94,&g_94,&g_251[3],&g_251[4],(void*)0,&g_251[4]},{(void*)0,&g_112[3][2][2],&g_94,&g_112[3][0][1],&g_327,&g_327,&g_94,&g_94},{&g_251[3],&g_112[2][3][0],&g_251[4],&g_251[4],&g_112[2][3][0],&g_251[3],&g_251[4],&g_94},{&g_327,&g_327,&g_112[3][0][1],&g_94,&g_112[3][2][2],(void*)0,&g_327,&g_251[4]},{&g_251[4],&g_251[3],&g_94,&g_94,&g_251[2],&g_327,&g_112[3][2][2],&g_94}},{{(void*)0,&g_251[2],&g_251[4],&g_251[4],&g_251[4],&g_251[2],(void*)0,&g_94},{&g_251[4],&g_327,&g_112[1][2][1],&g_327,&g_251[4],&g_251[4],&g_251[4],&g_112[3][0][1]},{(void*)0,&g_251[4],&g_94,&g_327,&g_251[4],(void*)0,&g_251[2],&g_112[2][3][0]},{&g_94,(void*)0,&g_327,&g_112[3][0][1],&g_112[3][0][1],&g_327,(void*)0,&g_94},{&g_94,&g_251[4],(void*)0,&g_112[1][2][1],&g_251[3],&g_94,&g_112[3][0][1],(void*)0},{&g_112[3][2][2],&g_251[3],&g_327,&g_94,&g_112[1][2][1],&g_94,&g_94,(void*)0},{&g_94,&g_251[4],(void*)0,&g_327,&g_251[2],&g_327,(void*)0,&g_251[4]}},{{(void*)0,(void*)0,&g_251[4],(void*)0,&g_327,(void*)0,&g_251[4],&g_94},{(void*)0,&g_251[4],&g_327,&g_327,(void*)0,&g_251[4],&g_251[4],&g_94},{&g_251[4],&g_327,&g_251[4],(void*)0,&g_251[3],&g_251[3],(void*)0,&g_251[4]},{&g_251[3],&g_251[3],(void*)0,&g_251[4],&g_327,&g_251[4],&g_94,&g_112[1][2][1]},{&g_251[4],(void*)0,&g_327,&g_327,&g_251[4],(void*)0,&g_112[3][0][1],&g_112[1][2][1]},{(void*)0,&g_327,(void*)0,&g_251[4],(void*)0,(void*)0,(void*)0,&g_251[4]},{&g_327,&g_251[2],&g_327,(void*)0,&g_251[4],&g_94,&g_251[2],&g_94}},{{&g_94,&g_112[1][2][1],&g_94,&g_327,&g_251[3],&g_112[3][2][2],&g_251[4],&g_94},{&g_94,&g_251[3],&g_112[1][2][1],(void*)0,&g_251[4],&g_94,&g_94,&g_251[4]},{&g_327,&g_112[3][0][1],&g_112[3][0][1],&g_327,(void*)0,&g_94,&g_112[1][2][1],(void*)0},{(void*)0,&g_251[4],&g_327,&g_94,&g_251[4],(void*)0,&g_327,(void*)0},{&g_251[4],&g_251[4],&g_327,&g_112[1][2][1],&g_327,&g_94,&g_251[4],&g_94},{&g_251[3],&g_112[3][0][1],&g_112[2][3][0],&g_112[3][0][1],&g_251[3],&g_94,&g_327,&g_112[2][3][0]},{&g_251[4],&g_251[3],&g_251[4],&g_327,(void*)0,&g_112[3][2][2],&g_94,&g_112[3][0][1]}}};
    int32_t l_356 = (-1L);
    int32_t l_357[3];
    int16_t *l_374 = &g_84[1];
    uint8_t l_375 = 0x70L;
    int32_t *l_376[3][7][9] = {{{&l_357[2],&l_356,&l_357[1],&l_357[1],&l_357[1],&l_356,&l_357[2],&l_357[1],&l_357[2]},{(void*)0,(void*)0,&l_357[1],&l_357[1],(void*)0,(void*)0,&l_356,&l_356,&l_357[1]},{&g_86,&l_357[1],(void*)0,&l_357[1],&g_86,&l_357[1],(void*)0,&l_357[1],&g_86},{(void*)0,&l_356,&l_356,(void*)0,&l_357[1],&l_356,&l_356,(void*)0,(void*)0},{&l_357[1],&l_357[1],&l_357[1],&l_356,&l_357[2],&l_357[1],&l_357[2],&l_356,&l_357[1]},{(void*)0,(void*)0,&l_356,&l_356,&l_357[1],(void*)0,&l_357[1],&l_356,(void*)0},{&g_86,&l_357[0],&l_357[1],&l_356,&g_86,&l_356,&l_357[1],&l_357[0],&g_86}},{{&l_357[1],&l_357[1],&l_356,(void*)0,(void*)0,&l_356,&l_356,(void*)0,(void*)0},{&l_357[2],&l_357[0],&l_357[1],&l_357[1],&l_357[1],&l_357[0],&l_357[2],&l_357[1],&l_357[2]},{&l_357[1],(void*)0,&l_356,&l_357[1],(void*)0,(void*)0,&l_356,&l_356,(void*)0},{&g_86,&l_357[1],(void*)0,&l_357[1],&g_86,&l_357[1],(void*)0,&l_357[1],&g_86},{(void*)0,&l_356,&l_357[1],(void*)0,(void*)0,&l_356,&l_356,(void*)0,(void*)0},{&l_357[1],&l_357[1],&l_357[1],&l_357[0],&l_357[2],&l_357[1],&l_357[2],&l_357[0],&l_357[1]},{(void*)0,(void*)0,&l_356,&l_356,(void*)0,(void*)0,&l_356,&l_356,(void*)0}},{{&g_86,&l_356,&l_357[1],&l_357[0],&g_86,&l_357[0],&l_357[1],&l_356,&g_86},{(void*)0,&l_357[1],&l_356,(void*)0,(void*)0,&l_356,&l_357[1],(void*)0,&l_357[1]},{&l_357[2],&l_356,&l_357[1],&l_357[1],&l_357[1],&l_356,&l_357[2],&l_357[1],&l_357[2]},{(void*)0,(void*)0,&l_357[1],&l_357[1],(void*)0,(void*)0,&l_356,&l_356,&l_357[1]},{&g_86,&l_357[1],(void*)0,&l_357[1],&g_86,&l_357[1],(void*)0,&l_357[1],&g_86},{(void*)0,&l_356,&l_356,(void*)0,&l_357[1],&l_356,&l_356,(void*)0,(void*)0},{&l_357[1],&l_357[1],&l_357[1],&l_356,&l_357[2],&l_357[1],&l_357[2],&l_356,&l_357[1]}}};
    uint32_t *l_381 = &g_129[0][2][4];
    uint32_t **l_380 = &l_381;
    int8_t **l_403 = &g_240;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_357[i] = 0x7323745EL;
    l_357[1] |= (~(((*g_242) = ((l_339 & ((*l_344) |= (!(safe_rshift_func_int16_t_s_u((safe_unary_minus_func_uint16_t_u(l_339)), 11))))) & ((((l_356 = (safe_lshift_func_uint16_t_u_s(65535UL, (l_339 <= (safe_sub_func_int16_t_s_s((((l_352 = g_349) == ((*l_354) = l_353)) >= (((void*)0 != &l_339) != (p_7 != (*g_240)))), p_6)))))) > p_7) , p_7) <= p_7))) > 0xFE9BL));
    g_86 = ((0x4A67104AL && p_6) , ((((~(p_5 = ((safe_add_func_uint32_t_u_u(p_6, g_129[0][2][4])) & (safe_sub_func_int8_t_s_s((((safe_add_func_uint8_t_u_u((safe_unary_minus_func_int8_t_s((((*g_241) = l_355[3][4][4]) != l_355[2][6][4]))), ((((((safe_mod_func_uint16_t_u_u(((safe_add_func_uint8_t_u_u((((safe_div_func_int16_t_s_s(((((0xDED2L <= ((*l_374) &= ((l_357[1] |= 0x6A23L) | ((safe_add_func_uint32_t_u_u((g_181 , 0xA2A01E9AL), l_339)) || 0xB0L)))) , l_357[2]) , g_327) <= p_7), 0x1F8AL)) > p_7) & p_7), 0x36L)) , g_86), g_320[0])) | 0xBD3E55AAL) , 9L) > p_5) < 0x28L) || 0x9B2EL))) >= l_356) < l_375), (*g_350)))))) != 0x4253L) | p_7) >= (**g_349)));
    ++g_377;
    if (((((l_380 = l_380) == (void*)0) , (((safe_rshift_func_int16_t_s_u(((~(((((g_14 == (safe_lshift_func_int8_t_s_u((p_7 , (*g_240)), 4))) >= 1UL) | (((**l_353) |= (+((p_5 | (*g_350)) & p_7))) , (-1L))) == g_326) || p_7)) == 0xEA5F8B7EL), p_5)) , &g_240) != (void*)0)) != g_251[4]))
    {
        uint32_t ***l_388 = &l_380;
        int32_t l_391 = (-6L);
        int32_t l_404 = 0L;
        uint32_t **l_405[5][10][2] = {{{&l_381,&l_381},{(void*)0,&l_381},{(void*)0,&l_381},{&l_381,(void*)0},{(void*)0,&l_381},{(void*)0,(void*)0},{&l_381,&l_381},{(void*)0,&l_381},{(void*)0,&l_381},{&l_381,&l_381}},{{&l_381,&l_381},{&l_381,&l_381},{(void*)0,&l_381},{&l_381,&l_381},{(void*)0,&l_381},{&l_381,&l_381},{&l_381,&l_381},{&l_381,(void*)0},{(void*)0,&l_381},{&l_381,(void*)0}},{{&l_381,(void*)0},{&l_381,&l_381},{&l_381,&l_381},{&l_381,&l_381},{(void*)0,(void*)0},{&l_381,&l_381},{(void*)0,(void*)0},{&l_381,&l_381},{&l_381,&l_381},{&l_381,(void*)0}},{{&l_381,&l_381},{&l_381,&l_381},{&l_381,(void*)0},{(void*)0,&l_381},{&l_381,(void*)0},{(void*)0,&l_381},{&l_381,&l_381},{&l_381,&l_381},{&l_381,(void*)0},{&l_381,(void*)0}},{{&l_381,&l_381},{(void*)0,(void*)0},{&l_381,(void*)0},{(void*)0,&l_381},{&l_381,(void*)0},{&l_381,(void*)0},{&l_381,&l_381},{&l_381,&l_381},{&l_381,&l_381},{(void*)0,(void*)0}}};
        int32_t l_406 = 1L;
        int i, j, k;
        l_406 |= ((((*l_388) = &l_381) == ((((safe_div_func_uint16_t_u_u((l_391 ^ (&g_240 == (void*)0)), (((void*)0 == &l_353) , (l_404 &= (safe_rshift_func_uint8_t_u_s(255UL, (safe_div_func_uint8_t_u_u(((~(l_391 , ((safe_lshift_func_int8_t_s_u((safe_add_func_int32_t_s_s((((l_391 > 0L) , &g_240) != l_403), g_129[0][0][2])), (*g_350))) | (**g_349)))) & 6L), (*g_240))))))))) , (*g_240)) < 0xBEL) , l_405[3][5][0])) <= g_326);
    }
    else
    {
        int16_t l_407 = 0x0809L;
        int32_t **l_408 = &l_376[1][5][6];
        uint32_t *l_411 = &g_320[0];
        int32_t l_432 = 0x458DE11EL;
        int32_t l_481 = 0xCB978715L;
        (*l_408) = func_47(l_407, g_86);
        if (((-1L) || (((((*l_374) = (1UL < (((((*l_411) = g_326) , (0x46E04766L | ((p_7 <= (-1L)) , ((safe_sub_func_int32_t_s_s(((safe_lshift_func_int8_t_s_s(((*g_240) >= l_407), (safe_add_func_uint32_t_u_u(p_7, p_7)))) > p_6), 0xF1BEE13FL)) < (*g_350))))) > 0L) == p_6))) , p_5) & 0x3D1182DDL) ^ p_6)))
        {
            int16_t ***l_425 = &g_241;
            int16_t ****l_424[7][7] = {{&l_425,&l_425,&l_425,&l_425,&l_425,&l_425,&l_425},{&l_425,&l_425,&l_425,&l_425,&l_425,&l_425,&l_425},{&l_425,&l_425,&l_425,&l_425,&l_425,&l_425,&l_425},{&l_425,&l_425,&l_425,&l_425,&l_425,&l_425,&l_425},{&l_425,&l_425,(void*)0,&l_425,&l_425,&l_425,&l_425},{&l_425,&l_425,(void*)0,(void*)0,&l_425,&l_425,&l_425},{&l_425,(void*)0,&l_425,&l_425,&l_425,&l_425,&l_425}};
            uint32_t *l_431[4][6] = {{&l_339,&g_129[0][3][0],&g_129[0][3][0],&l_339,&g_129[0][3][0],&g_129[0][3][0]},{&l_339,&g_129[0][3][0],&g_129[0][3][0],&l_339,&g_129[0][3][0],&g_129[0][3][0]},{&l_339,&g_129[0][3][0],&g_129[0][3][0],&l_339,&g_129[0][3][0],&g_129[0][3][0]},{&l_339,&g_129[0][3][0],&g_129[0][3][0],&l_339,&g_129[0][3][0],&g_129[0][3][0]}};
            int i, j;
            l_432 |= (((safe_rshift_func_uint8_t_u_s(255UL, 5)) | p_7) & (safe_sub_func_uint16_t_u_u((g_251[4] ^= (safe_lshift_func_uint8_t_u_s(((g_129[0][2][0] , p_7) != ((((**l_353) = ((g_426 = &g_241) == (((*l_374) = (safe_div_func_uint8_t_u_u(0x79L, p_6))) , &g_241))) && ((((safe_div_func_uint16_t_u_u((((*l_380) = (void*)0) == l_431[3][1]), p_6)) , &l_374) != (*g_426)) , p_5)) > 0UL)), 4))), 0x6366L)));
            (*l_408) = func_47(p_7, (safe_sub_func_int16_t_s_s(p_5, (safe_unary_minus_func_uint16_t_u(65530UL)))));
        }
        else
        {
            uint8_t l_442 = 0x90L;
            int16_t *l_444 = &g_84[1];
            int32_t l_454 = (-4L);
            for (l_432 = 6; (l_432 == (-18)); --l_432)
            {
                int32_t *l_450 = &l_357[1];
                for (g_337 = 24; (g_337 == 13); g_337 = safe_sub_func_int16_t_s_s(g_337, 4))
                {
                    int16_t *l_445[3];
                    int8_t *l_451[5];
                    int32_t l_452 = (-1L);
                    int32_t *l_453[8][5] = {{(void*)0,&l_432,&l_432,(void*)0,&l_432},{&l_356,&l_356,&l_452,&l_356,&l_356},{&l_432,(void*)0,&l_432,&l_432,(void*)0},{&l_356,&l_432,&l_432,&l_356,&l_432},{(void*)0,(void*)0,&l_452,(void*)0,(void*)0},{&l_432,&l_356,&l_432,&l_432,&l_356},{(void*)0,&l_432,&l_432,(void*)0,&l_432},{&l_356,&l_356,&l_452,&l_356,&l_356}};
                    int i, j;
                    for (i = 0; i < 3; i++)
                        l_445[i] = &g_84[0];
                    for (i = 0; i < 5; i++)
                        l_451[i] = (void*)0;
                    l_454 ^= (safe_div_func_uint8_t_u_u((l_442 | (~(((l_444 != ((**g_426) = l_445[0])) | ((p_5 ^ (safe_div_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((l_357[1] ^= ((*g_240) , ((((*l_408) = &g_86) != l_450) > p_7))), 7)), 0x45BCL))) <= (*g_350))) , g_351[2][0]))), l_452));
                    return (*g_240);
                }
                if (l_454)
                    continue;
            }
            l_454 ^= 0x2D3FBA25L;
        }
        for (l_339 = 0; (l_339 <= 3); l_339 += 1)
        {
            uint8_t l_469 = 0x97L;
            int32_t **l_474 = &l_376[0][4][3];
            int32_t ***l_475 = (void*)0;
            int32_t ***l_476 = &l_408;
            int32_t l_486 = 0x4CF5EBA1L;
            int32_t l_489[3];
            uint8_t l_520 = 246UL;
            uint32_t *l_526 = &g_377;
            int i;
            for (i = 0; i < 3; i++)
                l_489[i] = 2L;
        }
    }
    return p_5;
}
inline static int16_t func_8(uint16_t p_9, uint8_t p_10, int8_t p_11, uint32_t p_12, uint32_t p_13)
{
    int32_t *l_336 = &g_86;
    (*l_336) = (safe_sub_func_uint32_t_u_u(p_13, p_11));
    return (*l_336);
}
inline static uint8_t func_18(int32_t p_19)
{
    uint8_t l_332 = 0x8CL;
    int32_t *l_333[8] = {&g_86,&g_86,&g_86,&g_86,&g_86,&g_86,&g_86,&g_86};
    int i;
    g_86 = (safe_unary_minus_func_int16_t_s(((l_332 &= g_112[1][2][1]) , l_332)));
    return p_19;
}
inline static int32_t func_24(int32_t p_25, int32_t p_26, uint32_t p_27, int32_t p_28, uint16_t p_29)
{
    int32_t *l_324 = (void*)0;
    int32_t *l_325[4];
    uint8_t l_330 = 0xEFL;
    int i;
    for (i = 0; i < 4; i++)
        l_325[i] = &g_86;
    ++g_327;
    return l_330;
}
static int32_t func_30(int16_t p_31, uint16_t p_32, uint16_t p_33)
{
    return g_84[2];
}
inline static uint16_t func_34(int16_t p_35, int8_t p_36, uint32_t p_37, int32_t p_38)
{
    uint8_t l_42 = 0xD3L;
    int32_t *l_134[1];
    int16_t *l_202 = &g_84[1];
    uint16_t l_214 = 0x569BL;
    uint16_t *l_297 = &g_112[0][2][0];
    uint8_t *l_303 = &l_42;
    int i;
    for (i = 0; i < 1; i++)
        l_134[i] = &g_86;
    if ((g_14 | l_42))
    {
        int32_t *l_85 = &g_86;
        int32_t *l_87 = &g_86;
        int32_t **l_88 = &g_74;
        int32_t **l_89 = &l_87;
        uint8_t **l_98[4];
        uint8_t ***l_97 = &l_98[1];
        int32_t l_104 = (-1L);
        uint32_t l_131 = 0x662F6D3EL;
        uint32_t l_148 = 1UL;
        int8_t **l_211 = (void*)0;
        int16_t *l_213 = &g_84[1];
        int32_t l_274 = 0x5D37358AL;
        int32_t l_290 = 0xAB975043L;
        int i;
        for (i = 0; i < 4; i++)
            l_98[i] = (void*)0;
        (*l_89) = ((*l_88) = func_43(func_47(g_14, p_36), (l_85 = g_74), l_87));
        l_104 = ((*g_74) = ((*g_74) || ((safe_rshift_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((g_94 , (safe_lshift_func_int16_t_s_u((((void*)0 == l_97) | (safe_div_func_int32_t_s_s((p_38 ^ (+((((((((((&g_84[1] == ((safe_mod_func_uint8_t_u_u((((((g_84[1] <= (0x2139L <= (p_38 ^ 0x2622L))) | g_84[1]) != g_84[1]) ^ (*g_74)) | p_37), 0x54L)) , &p_35)) && 0L) != g_84[1]) <= l_42) , p_37) || (**l_88)) < p_35) | 0x0EC44CB1L) <= 1L) > 0xEA20016CL))), p_35))), 13))), g_14)), 5)) != g_94)));
        for (p_36 = 0; (p_36 <= 2); p_36 += 1)
        {
            uint16_t l_130 = 0x91EEL;
            int32_t l_151[2];
            uint8_t l_271 = 255UL;
            int i;
            for (i = 0; i < 2; i++)
                l_151[i] = 0x211F742CL;
            (*l_89) = (void*)0;
            for (g_86 = 0; (g_86 <= 3); g_86 += 1)
            {
                int32_t *l_105 = &l_104;
                int8_t *l_109 = (void*)0;
                int8_t *l_110 = &g_111;
                uint32_t *l_113 = (void*)0;
                int32_t l_167[9][7] = {{0x94C051F8L,0x58545D76L,1L,8L,0L,1L,0xBB92B385L},{0x58545D76L,0xBB92B385L,8L,8L,0x47EBBD39L,0L,7L},{4L,0L,0x21460D04L,7L,0x58545D76L,0x1C1CC915L,0x1C1CC915L},{0x21460D04L,(-1L),8L,(-1L),0x21460D04L,0xB5F6A149L,(-1L)},{(-1L),(-1L),0L,0xBB92B385L,8L,0x94C051F8L,0x58545D76L},{(-1L),0L,8L,1L,8L,8L,1L},{(-1L),0xBB92B385L,(-1L),8L,0L,0L,1L},{0x21460D04L,1L,0x94C051F8L,0xB5F6A149L,1L,(-1L),0x58545D76L},{4L,(-1L),0L,1L,1L,0L,(-1L)}};
                uint32_t l_201 = 0x68C90CB2L;
                uint8_t l_221 = 0xF2L;
                int8_t l_277 = 0x54L;
                uint32_t *l_291 = &g_129[0][2][4];
                int i, j;
                (*l_89) = l_105;
            }
            (*l_88) = func_43(&g_86, (*l_89), &l_151[0]);
        }
    }
    else
    {
        return p_36;
    }
    (*g_74) = (safe_lshift_func_uint8_t_u_s(((((safe_unary_minus_func_int8_t_s((safe_rshift_func_int16_t_s_u((-1L), 10)))) || ((*l_297) = p_35)) , (*g_74)) | (safe_unary_minus_func_int16_t_s(((((safe_mod_func_int8_t_s_s(((*g_240) = ((*g_240) , (safe_add_func_int16_t_s_s(((g_84[1] & (++(*l_303))) == (((void*)0 != &p_35) || (((((*g_74) != p_35) | 0xBCL) == 0x97F0L) || (*g_74)))), 0xD38EL)))), p_38)) | (**g_241)) && g_14) ^ 0x0B111631L)))), 4));
    if (p_36)
    {
        return g_94;
    }
    else
    {
        int16_t l_306 = 0xBAE0L;
        uint16_t l_315 = 0x29E7L;
        int32_t l_321 = 8L;
        (*g_74) = (l_306 | (safe_add_func_int8_t_s_s((safe_add_func_uint8_t_u_u((((0L < l_306) & (((*g_74) != (safe_div_func_uint8_t_u_u(g_65, ((l_306 ^ ((((((((*l_297) = ((safe_sub_func_int32_t_s_s(((l_315 = (&g_74 != (void*)0)) || ((safe_div_func_uint32_t_u_u((((*l_303) &= (safe_lshift_func_uint8_t_u_s((0L != (**g_241)), 7))) < p_38), l_315)) && g_251[4])), 0L)) >= 3UL)) > p_35) ^ g_251[4]) != (*g_74)) , g_14) , 0xA18ECCDEL) , g_112[3][1][3])) && 4294967288UL)))) <= g_320[0])) > p_35), l_306)), l_321)));
    }
    return p_35;
}
static int32_t * func_43(int32_t * p_44, int32_t * p_45, int32_t * p_46)
{
    return &g_86;
}
inline static int32_t * func_47(int16_t p_48, int32_t p_49)
{
    int32_t l_50[1][4] = {{(-1L),(-1L),(-1L),(-1L)}};
    uint8_t *l_60 = (void*)0;
    int32_t l_61 = 0x885A1EC8L;
    uint8_t *l_62 = (void*)0;
    int32_t l_63 = 1L;
    uint8_t *l_64 = &g_65;
    int32_t *l_71 = &l_61;
    int32_t *l_73 = &l_50[0][1];
    int32_t **l_72 = &l_73;
    int16_t *l_82 = (void*)0;
    int16_t *l_83 = &g_84[1];
    int i, j;
    p_49 = (l_50[0][1] & (l_50[0][1] >= ((((*l_83) = func_51((safe_lshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_s(((--(*l_64)) , (l_60 == ((g_65 & (safe_lshift_func_int8_t_s_u(((g_65 , ((+((((*l_71) ^= (l_60 != l_60)) , &p_49) != ((*l_72) = &l_50[0][1]))) >= p_49)) && p_49), p_49))) , l_64))), 6)), 4)), g_74, g_14, g_74)) == p_48) >= p_49)));
    for (p_49 = 0; p_49 < 3; p_49 += 1)
    {
        g_84[p_49] = 0L;
    }
    return g_74;
}
static int16_t func_51(uint16_t p_52, int32_t * p_53, int16_t p_54, int32_t * p_55)
{
    uint8_t *l_76 = (void*)0;
    uint8_t **l_75[10] = {(void*)0,&l_76,(void*)0,(void*)0,&l_76,(void*)0,(void*)0,&l_76,(void*)0,(void*)0};
    uint8_t ***l_77 = (void*)0;
    uint8_t ***l_78 = &l_75[0];
    int32_t l_81 = 0xCC13236CL;
    int i;
    (*l_78) = l_75[8];
    for (g_65 = 0; (g_65 < 29); g_65 = safe_add_func_int8_t_s_s(g_65, 7))
    {
        if (l_81)
            break;
    }
    return l_81;
}
int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_14;
    csmith_sink_ = g_65;
    for (i = 0; i < 3; i++)
    {
        csmith_sink_ = g_84[i];
    }
    csmith_sink_ = g_86;
    csmith_sink_ = g_94;
    csmith_sink_ = g_111;
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 4; k++)
            {
                csmith_sink_ = g_112[i][j][k];
            }
        }
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 8; k++)
            {
                csmith_sink_ = g_129[i][j][k];
            }
        }
    }
    csmith_sink_ = g_181;
    for (i = 0; i < 5; i++)
    {
        csmith_sink_ = g_251[i];
    }
    for (i = 0; i < 8; i++)
    {
        csmith_sink_ = g_320[i];
    }
    csmith_sink_ = g_326;
    csmith_sink_ = g_327;
    csmith_sink_ = g_337;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 7; j++)
        {
            csmith_sink_ = g_351[i][j];
        }
    }
    csmith_sink_ = g_377;
    csmith_sink_ = g_482;
    csmith_sink_ = g_487;
    csmith_sink_ = g_488;
    csmith_sink_ = g_490;
    csmith_sink_ = g_499;
    csmith_sink_ = g_521;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 9; k++)
            {
                csmith_sink_ = g_522[i][j][k];
            }
        }
    }
    csmith_sink_ = g_529;
    platform_main_end(0,0);
    return 0;
}
