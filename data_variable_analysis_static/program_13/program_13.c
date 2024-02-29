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
static const int32_t g_11 = 1;
static const int32_t *g_10 = &g_11;
static int32_t g_22 = 0x2F76EC75;
static int32_t *g_21 = &g_22;
static int32_t g_38 = 0xF928D9BA;
static int32_t g_87 = 1;
static const int32_t g_162 = 0x79C7D366;
static int32_t ***g_164[1] = {(void*)0};
static int32_t ****g_163 = &g_164[0];
static int32_t g_197 = (-1);
static const int32_t **g_235 = &g_10;
static const int32_t ***g_234[6] = {&g_235,&g_235,&g_235,&g_235,&g_235,&g_235};
static uint16_t g_272[5] = {0xA4C0,0xA4C0,0xA4C0,0xA4C0,0xA4C0};
static int16_t g_633 = 2;
static int32_t **g_733 = &g_21;
static const uint8_t g_825 = 255U;
static int32_t ***g_843[4] = {&g_733,&g_733,&g_733,&g_733};
static int32_t *****g_853 = &g_163;
static uint8_t g_1036 = 255U;
static const int32_t * const *g_1106 = &g_10;
static const int32_t * const **g_1105[10][5] = {{&g_1106,&g_1106,&g_1106,(void*)0,&g_1106},{&g_1106,&g_1106,&g_1106,&g_1106,&g_1106},{(void*)0,(void*)0,(void*)0,(void*)0,&g_1106},{&g_1106,&g_1106,&g_1106,&g_1106,&g_1106},{&g_1106,&g_1106,&g_1106,&g_1106,(void*)0},{&g_1106,&g_1106,&g_1106,&g_1106,&g_1106},{&g_1106,(void*)0,&g_1106,(void*)0,&g_1106},{&g_1106,&g_1106,&g_1106,&g_1106,(void*)0},{(void*)0,&g_1106,&g_1106,&g_1106,&g_1106},{&g_1106,&g_1106,&g_1106,&g_1106,(void*)0}};
static const int32_t * const ***g_1104[8] = {&g_1105[3][2],&g_1105[3][2],&g_1105[3][2],&g_1105[3][2],&g_1105[3][2],&g_1105[3][2],&g_1105[3][2],&g_1105[3][2]};
static const int32_t * const ****g_1103 = &g_1104[2];
static int16_t func_1(void);
static int32_t * func_2(int32_t p_3, int32_t p_4, uint8_t p_5);
static int32_t func_6(const int32_t * p_7, int32_t * p_8, int8_t p_9);
static int32_t * func_12(int32_t * p_13, int16_t p_14);
static int32_t * func_15(uint8_t p_16, int32_t * p_17, uint16_t p_18, uint8_t p_19, uint32_t p_20);
static uint32_t func_23(int32_t * p_24, int32_t p_25);
static const int16_t func_29(uint32_t p_30, uint32_t p_31, uint16_t p_32, uint8_t p_33, int32_t * p_34);
static const uint16_t func_40(int32_t * p_41, uint32_t p_42, int32_t * p_43);
static int32_t * func_45(int32_t p_46, uint32_t p_47, int16_t p_48);
static uint32_t func_49(int32_t * p_50, const int32_t * p_51, int8_t p_52, uint32_t p_53);
static int16_t func_1(void)
{
    int32_t *l_26 = &g_22;
    int32_t l_913 = 0x4047C0C5;
    (*g_235) = func_2(func_6(g_10, func_12(func_15(g_11, g_21, g_11, g_22, func_23(l_26, (g_22 > (safe_lshift_func_int16_t_s_u(func_29(g_11, g_22, g_22, (*l_26), &g_22), g_272[0]))))), g_162), g_11), l_913, l_913);
    return g_162;
}
static int32_t * func_2(int32_t p_3, int32_t p_4, uint8_t p_5)
{
    int32_t ***l_916[8];
    int32_t *****l_919 = &g_163;
    int8_t l_920 = 9;
    int32_t *l_976 = (void*)0;
    int32_t l_1035 = 0;
    int32_t *l_1093 = &l_1035;
    uint32_t l_1136 = 0U;
    int32_t l_1157 = 0x1AE2946C;
    int32_t *l_1158 = &g_22;
    int i;
    for (i = 0; i < 8; i++)
        l_916[i] = (void*)0;
    if ((p_5 || ((((safe_mod_func_int8_t_s_s(((p_3 || ((l_916[1] == l_916[1]) > (g_272[3] == (safe_mod_func_uint32_t_u_u((l_919 != &g_163), p_3))))) < ((*l_919) == (*l_919))), p_5)) & 248U) || l_920) < p_4)))
    {
        int32_t l_927 = 0x598D1855;
        int32_t *l_955 = &g_197;
        int32_t * const *l_957 = &g_21;
        int32_t * const **l_956 = &l_957;
        int8_t l_1073 = 5;
        if ((safe_sub_func_int16_t_s_s(p_3, (((safe_mul_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(g_272[3], ((0x0229 != l_927) == ((l_927 >= (g_825 != (safe_mul_func_int8_t_s_s((safe_div_func_uint32_t_u_u(g_272[3], (safe_sub_func_int16_t_s_s(g_272[1], g_272[0])))), g_22)))) > p_4)))), g_633)) == 1) && g_11))))
        {
            int32_t ****l_942 = &l_916[1];
            int32_t l_973 = 1;
            uint32_t l_974[1][3];
            uint8_t l_975 = 1U;
            int32_t l_991 = 1;
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 3; j++)
                    l_974[i][j] = 0x7094652D;
            }
            (*g_235) = &p_4;
            for (g_87 = 0; (g_87 <= 9); ++g_87)
            {
                int32_t * const *l_946[2][5][9] = {{{&g_21,&g_21,&g_21,&g_21,&g_21,(void*)0,&g_21,&g_21,&g_21},{(void*)0,&g_21,&g_21,(void*)0,&g_21,(void*)0,&g_21,&g_21,(void*)0},{(void*)0,(void*)0,&g_21,&g_21,&g_21,&g_21,&g_21,&g_21,&g_21},{&g_21,&g_21,&g_21,&g_21,&g_21,&g_21,&g_21,&g_21,&g_21},{(void*)0,&g_21,&g_21,&g_21,&g_21,&g_21,(void*)0,&g_21,&g_21}},{{(void*)0,&g_21,&g_21,&g_21,&g_21,&g_21,&g_21,&g_21,&g_21},{&g_21,&g_21,&g_21,&g_21,(void*)0,(void*)0,&g_21,&g_21,(void*)0},{&g_21,&g_21,&g_21,&g_21,(void*)0,(void*)0,(void*)0,(void*)0,&g_21},{&g_21,(void*)0,&g_21,&g_21,&g_21,&g_21,&g_21,(void*)0,(void*)0},{(void*)0,&g_21,&g_21,(void*)0,&g_21,&g_21,&g_21,&g_21,&g_21}}};
                int32_t * const **l_945 = &l_946[1][0][8];
                int32_t * const ***l_944 = &l_945;
                int32_t * const ****l_943 = &l_944;
                int32_t **l_983 = &l_955;
                int i, j, k;
                if (((((safe_sub_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_s(((((((*l_919) == l_942) & (l_927 > ((void*)0 == l_943))) <= ((0xAB & 1U) >= (safe_sub_func_uint16_t_u_u((safe_div_func_uint8_t_u_u(l_927, ((safe_mul_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(0U, 2)), p_4)) | l_927))), 0)))) <= g_197) != 1), 14)) >= p_3), g_272[3])) < p_4) > p_5) && 2))
                {
                    uint32_t l_972 = 4294967290U;
                    (*g_733) = l_976;
                    if (p_4)
                        continue;
                }
                else
                {
                    p_4 = ((((((~(safe_add_func_uint32_t_u_u((p_5 ^ (g_162 ^ ((~((((safe_mod_func_int32_t_s_s((l_983 == (void*)0), p_3)) != (!p_3)) <= p_3) ^ (safe_mod_func_uint16_t_u_u(((safe_mod_func_uint16_t_u_u((g_87 < ((safe_rshift_func_int16_t_s_u(1, l_991)) < p_3)), g_162)) & p_3), g_272[3])))) == 255U))), 4294967293U))) && 0xF55F) < g_87) | 0U) || 65535U) < p_4);
                }
                p_4 = (p_5 ^ g_87);
            }
        }
        else
        {
            int32_t **** const *l_994[10] = {&g_163,&g_163,(void*)0,&g_163,(void*)0,&g_163,&g_163,(void*)0,&g_163,(void*)0};
            int i;
            for (g_197 = 20; (g_197 != 20); g_197 = safe_add_func_int8_t_s_s(g_197, 5))
            {
                const uint32_t l_1011 = 0U;
                int32_t l_1012 = (-1);
                int32_t ***l_1039 = &g_733;
                l_994[2] = l_994[7];
                l_1012 = ((safe_mod_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s((p_4 & (((0 == (-1)) != ((g_38 != (g_22 & ((((safe_mod_func_uint8_t_u_u(((0xD5D4791C != (safe_mul_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u(249U, (safe_sub_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u(0x67DE, l_1011)), l_1011)))) >= 0xD2C1), 0xE51B))) || g_272[3]), 0x66)) | 0x2D48B639) < 255U) >= p_3))) & g_22)) >= 0x024A2B37)), 0x41)) != p_5), p_5)) < 0x89);
                if (p_5)
                    continue;
                for (g_87 = 0; (g_87 <= 1); g_87++)
                {
                    int32_t ****l_1018 = &g_164[0];
                    int32_t l_1037 = 0xE8E10942;
                    if ((safe_add_func_uint16_t_u_u((p_3 || ((safe_unary_minus_func_uint8_t_u((((void*)0 == l_1018) & (safe_lshift_func_uint16_t_u_s((((safe_sub_func_int8_t_s_s((p_4 || (safe_lshift_func_int16_t_s_s(p_4, ((safe_mod_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s(((((safe_mod_func_int8_t_s_s(g_633, ((safe_mod_func_uint16_t_u_u(g_87, ((safe_div_func_uint16_t_u_u(p_5, (g_87 ^ l_1035))) || g_1036))) && g_11))) == 0xD0C4) > g_272[1]) | p_4), 4)), l_1037)) <= 0x8CE00054)))), p_5)) || (-1)) >= g_197), 4))))) | 0x76)), g_633)))
                    {
                        int32_t ** const *l_1038 = &g_733;
                        (*g_733) = &p_4;
                        (***l_1038) = (safe_rshift_func_int16_t_s_u((p_3 || ((((safe_sub_func_int8_t_s_s((***l_1038), 254U)) >= ((safe_div_func_int32_t_s_s(((safe_add_func_int8_t_s_s((safe_lshift_func_int16_t_s_u(g_22, 4)), ((safe_sub_func_uint8_t_u_u(((-6) >= ((**g_733) >= (*g_21))), ((safe_sub_func_int32_t_s_s((&l_957 != (void*)0), (***l_1038))) && g_197))) | 0))) ^ 1U), p_5)) >= g_11)) < p_3) >= 65529U)), p_4));
                    }
                    else
                    {
                        int32_t *l_1054 = &g_38;
                        (*g_733) = l_1054;
                        (**l_1039) = &p_4;
                        p_4 = 0xFBCF84C6;
                        (*g_733) = l_1054;
                    }
                }
            }
            for (p_4 = 4; (p_4 != 14); p_4 = safe_add_func_uint16_t_u_u(p_4, 1))
            {
                int8_t l_1069 = 0xEA;
                int32_t ** const *l_1072 = (void*)0;
                int32_t l_1074[9][1] = {{0},{0x03A50F38},{0x03A50F38},{0},{0x03A50F38},{0x03A50F38},{0},{0x03A50F38},{0x03A50F38}};
                int i, j;
                l_1074[5][0] = (safe_sub_func_int8_t_s_s((safe_add_func_uint32_t_u_u(((p_4 || (((*g_853) == (void*)0) > ((safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s((g_87 || (l_1069 >= (((1U > (((void*)0 != l_1072) > p_5)) && 0U) > g_11))), 0)), g_11)) <= l_1073))) == g_633), 0x95DE3D5A)), g_87));
                return l_955;
            }
        }
        (*l_955) = (safe_rshift_func_uint8_t_u_s(((&l_957 != (void*)0) || (safe_add_func_int16_t_s_s((((safe_mul_func_int8_t_s_s(g_87, g_38)) >= (p_4 ^ (safe_rshift_func_uint8_t_u_u(p_5, 2)))) | (safe_add_func_uint32_t_u_u((((*g_853) != &l_956) | ((safe_mod_func_uint32_t_u_u((((safe_mul_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((((safe_sub_func_uint32_t_u_u(0x0EF64C90, g_87)) || p_5) | g_272[0]), g_633)), 0x75FB)) & g_38) <= g_22), 0xB00B8A36)) == 0x3C81EABA)), 0x9797C9B6))), p_5))), g_197));
    }
    else
    {
        int32_t *l_1094 = &g_22;
        return l_1094;
    }
    for (g_38 = 27; (g_38 != 8); g_38--)
    {
        const int32_t * const *l_1102 = &g_10;
        const int32_t * const **l_1101 = &l_1102;
        const int32_t * const ***l_1100 = &l_1101;
        const int32_t * const ****l_1099 = &l_1100;
        for (g_22 = 0; (g_22 <= 16); g_22 = safe_add_func_uint32_t_u_u(g_22, 1))
        {
            g_1103 = l_1099;
        }
    }
    (*g_235) = &p_4;
    (*g_733) = &p_4;
    return l_1158;
}
static int32_t func_6(const int32_t * p_7, int32_t * p_8, int8_t p_9)
{
    const int8_t l_422 = 0x41;
    int32_t l_433 = 0x1B676424;
    int32_t **l_440 = &g_21;
    int32_t ***l_439 = &l_440;
    uint32_t l_514[8];
    int32_t l_570 = 0xA6DE3D14;
    int32_t ***** const l_612[3] = {&g_163,&g_163,&g_163};
    int32_t *l_707 = &g_38;
    int32_t *l_738 = &g_22;
    uint8_t l_827[1][9] = {{0xA4,0xA4,0xA4,0xA4,0xA4,0xA4,0xA4,0xA4,0xA4}};
    int32_t *****l_852 = (void*)0;
    int32_t l_912 = 0xA66DA820;
    int i, j;
    for (i = 0; i < 8; i++)
        l_514[i] = 0x22A72A61;
    if (l_422)
    {
        int32_t *l_434[8] = {(void*)0,&g_197,(void*)0,&g_197,(void*)0,&g_197,(void*)0,&g_197};
        int32_t l_447 = 9;
        uint8_t l_459 = 0U;
        int32_t *****l_494 = &g_163;
        int32_t *****l_547 = &g_163;
        int32_t l_548 = 0xD1CBDA05;
        int8_t l_609 = 0x09;
        const int32_t *l_662 = &l_548;
        const uint32_t l_683 = 0x2367A982;
        int8_t l_688 = 0xC0;
        int32_t l_689 = 0xD026C830;
        uint8_t l_736 = 0x5E;
        int i;
        for (g_38 = 0; (g_38 <= 12); g_38++)
        {
            int32_t *****l_425 = &g_163;
            l_425 = l_425;
        }
        (*g_235) = func_12(l_434[7], p_9);
        if ((*g_21))
        {
            uint8_t l_441 = 0x1F;
            int32_t *****l_487 = &g_163;
            uint8_t l_557 = 0x31;
            int32_t **l_574 = &l_434[7];
            uint32_t l_592 = 0x06B654F8;
            int32_t l_661 = 0;
            if (((safe_add_func_int16_t_s_s((0x93669B76 | (p_9 != ((l_439 == (void*)0) || ((void*)0 != &g_234[5])))), (l_441 & (safe_sub_func_uint8_t_u_u(0xFA, (safe_lshift_func_uint8_t_u_s((safe_unary_minus_func_int16_t_s(((-7) || l_447))), g_197))))))) ^ p_9))
            {
                uint32_t l_454 = 1U;
                (**l_440) = (safe_rshift_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(0x4C, l_454)), (g_272[1] && p_9))), 5));
            }
            else
            {
                int32_t *****l_486 = (void*)0;
                uint16_t l_515 = 0xD9CE;
                int32_t l_550 = 0xA8684DB0;
                uint8_t l_624[9];
                uint16_t l_672 = 0x2946;
                int i;
                for (i = 0; i < 9; i++)
                    l_624[i] = 0x56;
                if (((&l_440 == (void*)0) | ((*p_7) >= (safe_mul_func_int16_t_s_s(l_441, (**l_440))))))
                {
                    int8_t l_460 = (-10);
                    int32_t ** const *l_532 = &l_440;
                    const int32_t *l_549 = (void*)0;
                    for (p_9 = 4; (p_9 >= 0); p_9 -= 1)
                    {
                        (**l_440) = ((p_9 < p_9) & 0x192F1295);
                        (***l_439) = ((safe_mul_func_uint16_t_u_u((p_8 != (void*)0), l_459)) != l_460);
                    }
                    (*g_21) = ((8U | ((safe_add_func_int16_t_s_s((p_9 && (((((safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u(((safe_mod_func_int32_t_s_s((~((safe_mod_func_int16_t_s_s(((l_460 | ((safe_add_func_int8_t_s_s((-10), (safe_mod_func_int8_t_s_s((safe_add_func_uint8_t_u_u(g_22, (safe_add_func_int16_t_s_s((safe_mod_func_int32_t_s_s((safe_lshift_func_int16_t_s_u((safe_sub_func_uint8_t_u_u(p_9, (((g_272[3] == (l_486 != l_487)) > g_272[3]) == p_9))), g_272[3])), g_197)), g_197)))), p_9)))) > (***l_439))) > g_272[3]), g_272[2])) > (*p_7))), 4294967295U)) == p_9), 6)), 10)) == p_9) <= g_272[3]) || g_272[3]) | p_9)), 0x5B73)) & g_87)) || (*p_7));
                    if (((safe_mul_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(p_9, ((p_9 && l_460) != ((safe_add_func_int16_t_s_s((((void*)0 == l_494) >= ((safe_sub_func_uint8_t_u_u((((safe_mod_func_int16_t_s_s((safe_add_func_int32_t_s_s((+g_38), ((((((safe_rshift_func_uint8_t_u_u((~(safe_lshift_func_uint8_t_u_u(0xEB, (safe_div_func_int8_t_s_s((!((0x842A > (~(!(safe_add_func_int16_t_s_s(0xBBCE, p_9))))) >= l_514[4])), g_11))))), 0)) && (*p_7)) ^ 0xD2A935E3) || l_515) == p_9) & p_9))), 3U)) < 0x06) <= 9), g_38)) < 0x728D24CA)), 65529U)) < 0xF9)))), p_9)) == g_272[3]))
                    {
                        const uint32_t l_529 = 0x095FA506;
                        (**l_440) = (safe_rshift_func_int8_t_s_u(((safe_add_func_int32_t_s_s((***l_439), (&g_235 == &g_235))) < (+(safe_div_func_int8_t_s_s(((safe_lshift_func_int8_t_s_u(g_197, 4)) & ((safe_sub_func_int16_t_s_s(g_11, (&g_164[0] != (*l_487)))) || ((((g_272[1] > (safe_add_func_uint32_t_u_u(g_11, 0xDDBE43CF))) | g_197) | l_529) && p_9))), 0x5D)))), g_272[3]));
                        (***l_439) = ((void*)0 != p_7);
                        (**l_532) = (**l_532);
                    }
                    else
                    {
                        (**l_439) = (void*)0;
                        l_549 = p_7;
                        l_550 = (&p_7 == (void*)0);
                    }
                    if ((+(((void*)0 == &g_234[1]) <= g_11)))
                    {
                        int32_t l_552 = (-1);
                        l_552 = 0x0B0584A9;
                        l_433 = ((safe_div_func_int16_t_s_s((safe_mod_func_uint32_t_u_u(p_9, l_557)), (safe_mul_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(((safe_mod_func_uint32_t_u_u(((safe_sub_func_uint32_t_u_u(g_272[2], (&g_235 != &g_235))) & (((255U == (&g_164[0] == &l_439)) > (safe_rshift_func_uint8_t_u_s((l_552 <= p_9), 4))) || 0x9685F7F2)), p_9)) ^ p_9), (*p_7))), l_570)))) <= 0x13);
                        return l_552;
                    }
                    else
                    {
                        int32_t l_571 = 0;
                        return l_571;
                    }
                }
                else
                {
                    int16_t l_577[10] = {0xB136,(-3),(-3),0xB136,(-3),(-3),0xB136,(-3),(-3),0xB136};
                    int32_t * const *l_585[2];
                    int32_t * const **l_584 = &l_585[1];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_585[i] = &l_434[1];
                    if ((safe_rshift_func_int8_t_s_u(((((l_574 != (void*)0) ^ (safe_rshift_func_uint8_t_u_s(0xB0, 4))) | (l_577[5] <= 4U)) && (safe_sub_func_uint8_t_u_u((5U || (safe_add_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u(((void*)0 == (*l_574)), 0xC8A0)), (**l_440)))), p_9))), 0)))
                    {
                        int32_t * const ***l_586 = &l_584;
                        (*l_586) = l_584;
                        (*g_235) = p_7;
                    }
                    else
                    {
                        int8_t l_606 = 0;
                        l_550 = ((((*g_21) | (((void*)0 == &l_585[1]) & (safe_unary_minus_func_int32_t_s((*g_21))))) & (safe_sub_func_int8_t_s_s((0 < (&g_163 != &g_163)), (((safe_lshift_func_int8_t_s_u((&p_7 != (void*)0), l_592)) ^ 0x4E597F0C) | 0x2BF1DC6E)))) > g_38);
                        (*g_21) = (!((((p_9 & p_9) ^ (**l_440)) > (safe_sub_func_uint32_t_u_u(((safe_rshift_func_uint8_t_u_s((safe_add_func_int8_t_s_s(p_9, (safe_mul_func_uint16_t_u_u((1 && (g_272[4] >= (safe_mod_func_uint8_t_u_u(((*g_21) | (((&p_8 == (void*)0) <= l_515) & 0x38)), p_9)))), p_9)))), 0)) ^ 0), l_606))) != 0xBBE3C3D4));
                    }
                }
                if ((**l_440))
                {
                    int32_t ****l_659 = &g_164[0];
                    for (l_557 = 0; (l_557 > 4); l_557 = safe_add_func_int16_t_s_s(l_557, 9))
                    {
                        int32_t ***l_634[5] = {&l_574,&l_574,&l_574,&l_574,&l_574};
                        int8_t l_635 = 0xC9;
                        int i;
                        (*g_21) = (-3);
                        (*g_21) = (l_609 >= (safe_mul_func_int16_t_s_s((l_494 == l_612[2]), (safe_rshift_func_uint8_t_u_s((safe_add_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_u((!((safe_mod_func_uint32_t_u_u(0xED77D429, ((safe_mod_func_uint32_t_u_u((l_624[1] == 7U), (safe_unary_minus_func_int8_t_s(((safe_rshift_func_int8_t_s_s((~(safe_rshift_func_int8_t_s_s(((((((*p_7) | p_9) & (0xA2C20462 >= p_9)) < 0U) <= (*g_21)) && 0x06B94084), 0))), 2)) | 0xF8))))) && g_38))) | 0x48A9DC16)), 3)) & g_633), 0x7A)), p_9)))));
                        (**l_487) = l_634[1];
                        (*g_21) = l_635;
                    }
                    (*l_574) = (*l_440);
                    for (l_557 = (-2); (l_557 > 8); l_557++)
                    {
                        int32_t * const l_638 = &g_22;
                        int32_t ****l_660 = &g_164[0];
                        (*l_440) = func_12(p_8, ((*l_574) != l_638));
                        l_661 = (safe_sub_func_int16_t_s_s((safe_div_func_uint8_t_u_u((safe_add_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u((((*p_7) <= (safe_mul_func_uint16_t_u_u((p_9 == (safe_sub_func_uint8_t_u_u(g_38, (safe_div_func_int16_t_s_s(g_197, p_9))))), ((((safe_mod_func_int8_t_s_s(g_22, (safe_div_func_uint8_t_u_u(((l_659 == l_660) | ((void*)0 == &g_234[1])), 0xC0)))) >= g_162) && 0x4F) > g_87)))) || p_9), g_197)), g_272[3])), p_9)), 1U)), (*l_638)));
                        return p_9;
                    }
                    l_662 = (*g_235);
                }
                else
                {
                    uint8_t l_669 = 248U;
                    int32_t ***l_679 = (void*)0;
                    (*g_235) = (*g_235);
                    (*l_574) = p_8;
                    (*g_21) = ((&g_234[1] != (void*)0) & (safe_rshift_func_int8_t_s_u((g_38 != (+l_683)), 5)));
                    if ((*p_7))
                    {
                        return g_87;
                    }
                    else
                    {
                        (*g_235) = p_7;
                    }
                }
            }
            return g_87;
        }
        else
        {
            uint8_t l_710 = 0x46;
            int32_t ***l_713 = &l_440;
            if ((safe_add_func_int32_t_s_s((*p_7), (+g_162))))
            {
                int32_t l_714 = (-2);
                (**l_713) = &l_714;
                (*l_440) = &l_714;
            }
            else
            {
                int16_t l_737 = 0x1A54;
                int32_t * const l_742[3] = {&l_433,&l_433,&l_433};
                int i;
                if ((*p_7))
                {
                    int8_t l_717 = 0xC9;
                    for (g_197 = 0; (g_197 != 10); g_197 = safe_add_func_uint32_t_u_u(g_197, 5))
                    {
                        return l_717;
                    }
                    if ((((safe_sub_func_int16_t_s_s(0x125F, p_9)) || (safe_add_func_uint32_t_u_u(7U, g_272[1]))) >= 0xFE3F57EA))
                    {
                        p_7 = (void*)0;
                    }
                    else
                    {
                        int32_t *****l_731 = &g_163;
                        (***l_439) = (((!g_272[3]) <= (((safe_lshift_func_uint16_t_u_s((safe_div_func_uint32_t_u_u(0U, (***l_713))), (safe_mod_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s(((l_731 == (void*)0) > (+(***l_713))), 2)), (l_717 & (248U >= 0xDD)))))) >= 1U) <= p_9)) ^ g_272[2]);
                        (*l_713) = g_733;
                    }
                    for (l_548 = (-1); (l_548 > 9); ++l_548)
                    {
                        (*g_733) = p_8;
                        l_737 = l_736;
                        (**l_713) = l_738;
                        (*l_738) = 0xC54849CF;
                    }
                }
                else
                {
                    int16_t l_741[8][4][1] = {{{1},{1},{0xDCF4},{0x6220}},{{1},{0x6220},{0xDCF4},{1}},{{1},{1},{0xDCF4},{0x6220}},{{1},{0x6220},{0xDCF4},{1}},{{1},{1},{0xDCF4},{0x6220}},{{1},{0x6220},{0xDCF4},{1}},{{1},{1},{0xDCF4},{0x6220}},{{1},{0x6220},{0xDCF4},{1}}};
                    int i, j, k;
                    for (l_689 = (-14); (l_689 > (-3)); l_689 = safe_add_func_int32_t_s_s(l_689, 2))
                    {
                        (*g_733) = l_742[2];
                        return g_197;
                    }
                    for (l_688 = 7; (l_688 >= 2); l_688 -= 1)
                    {
                        int i;
                    }
                }
                for (l_548 = 24; (l_548 < (-9)); l_548--)
                {
                    (*l_439) = (void*)0;
                }
            }
        }
    }
    else
    {
        const uint32_t l_794 = 0U;
        int32_t * const *l_806 = &l_707;
        int32_t * const **l_805 = &l_806;
        int32_t * const ***l_804 = &l_805;
        if (((void*)0 == p_7))
        {
            int32_t *****l_752 = (void*)0;
            uint16_t l_772 = 0xF14F;
            int16_t l_773 = 0x6C8F;
            for (g_87 = 6; (g_87 >= 0); g_87 -= 1)
            {
                int i;
                p_7 = (*g_733);
                (*g_21) = ((safe_div_func_uint16_t_u_u((safe_add_func_int32_t_s_s((l_514[g_87] ^ 0), (~(safe_mod_func_int16_t_s_s(((safe_mod_func_uint16_t_u_u((((safe_rshift_func_uint8_t_u_s((safe_mul_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(g_11, (safe_sub_func_int32_t_s_s(((void*)0 == &g_163), (safe_rshift_func_uint16_t_u_s(((0x6DBA0EF0 && (&p_8 == (void*)0)) < ((void*)0 == &p_8)), l_772)))))), l_514[g_87])), l_773)) ^ g_272[1]) & 0xF372AC80), 0x1A34)) <= (*l_738)), p_9))))), (-9))) <= g_197);
            }
        }
        else
        {
            int32_t **l_800 = (void*)0;
            int32_t ****l_815 = &g_164[0];
            uint16_t l_826 = 0xE814;
            for (g_22 = 0; (g_22 <= 0); g_22 += 1)
            {
                uint32_t l_798 = 0xBB0942C2;
                int16_t l_801[6][1][3] = {{{7,6,7}},{{4,4,4}},{{7,6,7}},{{4,4,4}},{{7,6,7}},{{4,4,4}}};
                int32_t l_808 = 0x19B8C05A;
                int i, j, k;
                for (p_9 = 0; (p_9 >= 0); p_9 -= 1)
                {
                    uint32_t l_795 = 5U;
                    for (g_633 = 0; (g_633 <= 4); g_633 += 1)
                    {
                        int i;
                        return g_272[(p_9 + 4)];
                    }
                    for (g_87 = 0; (g_87 >= 0); g_87 -= 1)
                    {
                        int32_t l_799 = 1;
                        int i;
                        g_163 = &g_164[g_22];
                        l_795 = (((((safe_div_func_int16_t_s_s((safe_add_func_int8_t_s_s(0x21, (g_272[1] & (*l_707)))), (safe_mul_func_int8_t_s_s((safe_lshift_func_int16_t_s_u((safe_sub_func_uint32_t_u_u(0x4451E212, ((safe_lshift_func_uint16_t_u_u((&g_235 == (void*)0), 0)) && (safe_sub_func_uint8_t_u_u((*l_738), (safe_rshift_func_int16_t_s_u(g_11, (((safe_mod_func_int8_t_s_s((safe_div_func_int8_t_s_s(p_9, g_272[0])), 0x60)) <= g_272[3]) <= (**g_733))))))))), p_9)), 1U)))) == p_9) && p_9) < g_162) && l_794);
                        l_799 = (safe_add_func_uint8_t_u_u((0U < g_197), l_798));
                    }
                    (*l_439) = l_800;
                }
                if (l_801[5][0][1])
                {
                    (*g_235) = p_8;
                }
                else
                {
                    int16_t l_807 = 3;
                    int32_t ***l_820 = &l_800;
                    if (((safe_mod_func_uint16_t_u_u(((void*)0 == l_804), l_807)) ^ p_9))
                    {
                        (****l_804) = (0xD9 && ((void*)0 != &g_234[1]));
                        l_808 = (1 && (&g_163 == &l_804));
                    }
                    else
                    {
                        uint8_t l_810 = 0U;
                        l_810 = (+g_272[1]);
                        (****l_804) = (safe_mod_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(((&g_164[0] != l_815) > g_272[3]), ((g_22 < (p_9 && 0)) > (safe_mod_func_uint8_t_u_u(g_272[3], (safe_rshift_func_int8_t_s_u(l_810, ((void*)0 != &g_163)))))))), p_9));
                        (*g_733) = (*g_733);
                    }
                    if (l_826)
                        continue;
                }
                if (l_827[0][3])
                    continue;
                if ((*p_7))
                    break;
            }
            for (p_9 = 14; (p_9 <= 15); p_9 = safe_add_func_uint8_t_u_u(p_9, 2))
            {
                int32_t *****l_830[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_830[i] = &l_815;
                l_830[1] = &g_163;
                (*l_707) = (p_9 && 65535U);
                (*g_235) = p_7;
            }
        }
        for (l_570 = 0; (l_570 <= (-11)); --l_570)
        {
            (****l_804) = 0xFA2CD589;
        }
    }
    l_852 = l_612[2];
    if ((g_87 ^ 0xCEF36128))
    {
        g_853 = &g_163;
        (*g_235) = p_8;
    }
    else
    {
        uint16_t l_858 = 0x73BE;
        int32_t * const *l_880 = &g_21;
        int32_t * const **l_879[10];
        int32_t * const ***l_878 = &l_879[8];
        int32_t * const ****l_877[4];
        int32_t *l_884 = &l_433;
        int32_t *l_889[6][5] = {{&g_87,&g_87,&l_433,&g_87,&g_87},{&l_570,&g_87,&g_38,(void*)0,&g_87},{&g_87,(void*)0,&g_38,&g_87,&l_570},{&g_87,&g_87,&l_433,&g_87,&g_87},{&l_570,&g_87,&g_38,(void*)0,&g_87},{&g_87,(void*)0,&g_38,&g_87,&l_570}};
        int i, j;
        for (i = 0; i < 10; i++)
            l_879[i] = &l_880;
        for (i = 0; i < 4; i++)
            l_877[i] = &l_878;
        if ((((p_9 != (safe_sub_func_uint8_t_u_u(((*g_853) != (void*)0), (((safe_rshift_func_uint8_t_u_u(0xF4, 3)) || l_858) != (((safe_mul_func_int16_t_s_s((l_858 || (safe_rshift_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint16_t_u_u((safe_unary_minus_func_int16_t_s(0x73F2)), 13)), (+(safe_mul_func_int16_t_s_s((safe_mod_func_uint32_t_u_u(((((safe_div_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u((&g_163 == l_877[1]), g_272[2])), g_197)) != 0x34) >= p_9) >= g_38), p_9)), p_9))))) && p_9), 4))), 0xA67D)) <= p_9) < 0x7A56))))) == p_9) ^ p_9))
        {
            const int32_t *l_881[4][10] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
            int32_t l_882 = 8;
            int32_t *l_883 = &g_87;
            int i, j;
            (*l_738) = 0x5087ADEC;
            l_881[3][3] = p_7;
            (*l_707) = l_882;
            l_884 = l_883;
        }
        else
        {
            int8_t l_890 = 6;
            int32_t *l_911 = &g_22;
            for (g_197 = 0; (g_197 == 27); g_197 = safe_add_func_int16_t_s_s(g_197, 1))
            {
                int32_t *****l_893 = &g_163;
                for (l_433 = 23; (l_433 >= 13); l_433--)
                {
                    (*l_738) = (l_889[4][2] == p_7);
                    if (l_890)
                        continue;
                    if (l_890)
                        continue;
                    for (g_633 = 3; (g_633 >= 0); g_633 -= 1)
                    {
                        int32_t *l_900 = &g_197;
                        int i;
                        (*l_738) = (safe_mod_func_uint32_t_u_u((l_893 != (void*)0), (safe_rshift_func_int16_t_s_u((g_272[(g_633 + 1)] == ((0x6F24 <= (safe_mod_func_int32_t_s_s(p_9, (g_22 ^ (p_7 == l_900))))) == ((safe_sub_func_uint16_t_u_u(p_9, g_11)) != g_633))), 7))));
                    }
                }
            }
            (*g_235) = l_911;
        }
        (*l_738) = (255U & ((*l_852) == (*g_853)));
        (*g_235) = p_8;
        l_912 = 0x2F8BFF56;
    }
    return g_633;
}
static int32_t * func_12(int32_t * p_13, int16_t p_14)
{
    int32_t *l_408 = (void*)0;
    int32_t l_421 = 0;
    p_13 = (void*)0;
    (*g_21) = ((l_408 != (void*)0) ^ (safe_sub_func_uint8_t_u_u(0U, (safe_add_func_uint8_t_u_u(((g_197 != (safe_mod_func_int32_t_s_s((((((void*)0 == &g_164[0]) < 6U) < (~(safe_mod_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(g_11, ((+(((g_22 && g_197) <= 0xFAFB) ^ 0x7777)) >= p_14))), (-5))))) && p_14), l_421))) & 0x8F), g_22)))));
    return p_13;
}
static int32_t * func_15(uint8_t p_16, int32_t * p_17, uint16_t p_18, uint8_t p_19, uint32_t p_20)
{
    int32_t *l_407 = (void*)0;
    for (g_197 = 15; (g_197 >= 20); ++g_197)
    {
        (*g_21) = (*p_17);
    }
    return l_407;
}
static uint32_t func_23(int32_t * p_24, int32_t p_25)
{
    int32_t ****l_380 = &g_164[0];
    int32_t l_383 = 0x1AFC6B86;
    int32_t **l_384 = &g_21;
    p_25 = 0x1AF41BFA;
    if ((safe_sub_func_int16_t_s_s((l_380 == l_380), (safe_mod_func_uint16_t_u_u((((*l_380) != (void*)0) && l_383), g_272[1])))))
    {
        for (g_38 = 0; g_38 < 1; g_38 += 1)
        {
            g_164[g_38] = &l_384;
        }
    }
    else
    {
        uint32_t l_404 = 0xE5A61A39;
        p_24 = func_45(((safe_add_func_int32_t_s_s(0x4FC5A9C8, ((~(safe_rshift_func_uint16_t_u_s(((**g_235) > (*p_24)), 9))) | 4294967295U))) < (safe_sub_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u(0xCD48, 0xD117)) >= ((safe_mod_func_uint32_t_u_u((safe_div_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_s((((safe_sub_func_int32_t_s_s(0xFBB87651, (*p_24))) >= 0U) & l_404), 7)) & l_404), p_25)) & g_272[3]), p_25)), (**l_384))) == g_22)), 0xC19D))), p_25, p_25);
    }
    p_24 = (*l_384);
    return g_11;
}
static const int16_t func_29(uint32_t p_30, uint32_t p_31, uint16_t p_32, uint8_t p_33, int32_t * p_34)
{
    int16_t l_39 = 0x2FF1;
    int32_t *l_245 = &g_38;
    const int32_t *l_316 = &g_38;
    if ((*g_10))
    {
        int32_t *l_44[8] = {&g_38,&g_22,&g_38,&g_22,&g_38,&g_22,&g_38,&g_22};
        int32_t **l_201 = &l_44[1];
        int8_t l_227 = (-1);
        int32_t **** const l_236 = &g_164[0];
        uint8_t l_286 = 0x79;
        uint16_t l_319 = 0U;
        int i;
        for (p_30 = 3; (p_30 <= 33); p_30++)
        {
            int32_t *l_37[2];
            uint16_t l_61 = 0xD370;
            const int32_t **l_232 = &g_10;
            const int32_t ***l_231 = &l_232;
            int32_t l_308 = 0x49F47200;
            int i;
            for (i = 0; i < 2; i++)
                l_37[i] = &g_38;
            l_39 = (*g_21);
        }
        (*l_201) = func_45(((((void*)0 == (*g_163)) > (p_32 > (safe_rshift_func_uint16_t_u_u(((((safe_lshift_func_uint16_t_u_s((((void*)0 != &l_245) & (safe_div_func_int8_t_s_s(g_272[2], ((&g_164[0] == l_236) & ((0x0D <= p_30) & p_32))))), 15)) > p_31) | 1) && (-1)), 11)))) >= 0xC2C1), g_272[0], (*l_245));
        (*l_245) = (~(((*g_235) != l_316) || (safe_lshift_func_int8_t_s_s((g_197 < (p_30 < 0x3206)), 3))));
        l_319 = (*p_34);
    }
    else
    {
        uint16_t l_327 = 65532U;
        int32_t *l_328[4] = {&g_197,&g_197,&g_197,&g_197};
        int32_t **l_349 = &l_245;
        int32_t ***l_348 = &l_349;
        int i;
        (*l_245) = (l_316 == l_316);
        (*l_245) = (**g_235);
        for (p_30 = 0; (p_30 <= 0); p_30 += 1)
        {
            int32_t *l_320 = &g_87;
            l_320 = p_34;
        }
        for (p_30 = (-24); (p_30 == 21); ++p_30)
        {
            uint32_t l_336 = 0x98F07CFA;
            const int32_t *l_351 = &g_162;
            int32_t l_377 = 0x2083D566;
        }
    }
    return (*l_245);
}
static const uint16_t func_40(int32_t * p_41, uint32_t p_42, int32_t * p_43)
{
    const int8_t l_199 = 3;
    return l_199;
}
static int32_t * func_45(int32_t p_46, uint32_t p_47, int16_t p_48)
{
    uint32_t l_91 = 0x7DE68BD5;
    int32_t *l_94 = (void*)0;
    int32_t *l_95 = &g_87;
    int32_t *l_196 = &g_197;
    int32_t *l_198[8] = {&g_197,(void*)0,(void*)0,&g_197,(void*)0,(void*)0,&g_197,(void*)0};
    int i;
    g_87 = (!(0U >= ((safe_div_func_int8_t_s_s(l_91, (safe_mul_func_uint16_t_u_u((1 ^ 4294967295U), (l_94 != (void*)0))))) != 0)));
    (*l_95) = p_47;
    for (g_87 = (-26); (g_87 <= (-27)); g_87 = safe_sub_func_uint16_t_u_u(g_87, 6))
    {
        int32_t l_100 = 9;
        int32_t **l_102[2][6] = {{&l_95,&l_95,&l_95,&l_95,&l_95,&l_95},{&l_95,&l_95,&l_95,&l_95,&l_95,&l_95}};
        uint32_t l_139 = 0xA6AAB061;
        int i, j;
        for (l_91 = 0; (l_91 > 5); l_91 = safe_add_func_int8_t_s_s(l_91, 6))
        {
            int32_t **l_101 = &l_94;
            const int32_t *l_161 = &g_162;
            uint16_t l_168 = 0xA0C0;
            int32_t ****l_176 = &g_164[0];
            if ((l_100 >= (l_100 > (((l_101 != l_102[1][5]) || (&p_46 != l_95)) > (g_38 >= p_47)))))
            {
                const int32_t ** const l_109 = &g_10;
                uint32_t l_122[3][5] = {{0U,0U,0xCD2A541E,0U,0U},{0xE4EBB7C4,0x3FE16D89,0xE4EBB7C4,0xE4EBB7C4,0x3FE16D89},{0U,0x1B7A1713,0x1B7A1713,0U,0x1B7A1713}};
                int32_t l_165 = 0x5527752A;
                int32_t ****l_166 = &g_164[0];
                int i, j;
                if (((g_22 != (safe_sub_func_int8_t_s_s(((safe_mul_func_uint16_t_u_u((&p_46 == (*l_101)), (((0xAADF <= ((safe_mod_func_int32_t_s_s((((void*)0 != l_109) >= (0x037596CD || ((((safe_mod_func_int16_t_s_s((safe_sub_func_int16_t_s_s((safe_add_func_int32_t_s_s((*g_21), (safe_lshift_func_uint8_t_u_s(g_38, 1)))), 0)), (*l_95))) == p_46) < g_38) == p_48))), 0x80980311)) && 4294967291U)) || g_22) > p_48))) < g_87), p_47))) >= 7))
                {
                    uint32_t l_138 = 0U;
                    int32_t **l_142 = &l_95;
                    p_46 = (((safe_div_func_int32_t_s_s(((((safe_mul_func_int8_t_s_s(l_122[1][3], ((safe_sub_func_int8_t_s_s(p_47, ((*g_21) <= (safe_mul_func_int16_t_s_s((safe_sub_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((safe_add_func_int16_t_s_s(p_47, (g_22 != 0x75C3))), ((safe_sub_func_uint16_t_u_u((+(safe_mod_func_int16_t_s_s(0, (**l_109)))), ((g_87 != 0x4120) | 0x4272))) > p_47))), g_38)), p_47))))) > p_46))) >= l_138) ^ 1) < p_47), p_46)) >= (**l_109)) != 0x63C109E6);
                    p_46 = ((l_139 && (((((safe_lshift_func_int16_t_s_s((l_142 != l_109), (&p_46 != (void*)0))) && 4U) > (safe_unary_minus_func_int16_t_s((((*g_10) >= ((void*)0 == l_142)) <= 0x9EBEB9EE)))) <= (**l_142)) & p_46)) == g_38);
                    for (l_100 = 0; (l_100 >= 27); l_100 = safe_add_func_int8_t_s_s(l_100, 3))
                    {
                        int32_t **l_154[8][3][4] = {{{&l_94,(void*)0,(void*)0,&l_94},{&g_21,(void*)0,(void*)0,&l_94},{&l_94,(void*)0,(void*)0,&l_94}},{{&g_21,(void*)0,(void*)0,&l_94},{&l_94,(void*)0,(void*)0,&l_94},{&l_95,(void*)0,(void*)0,&l_94}},{{&l_94,(void*)0,(void*)0,&l_94},{&g_21,(void*)0,(void*)0,&l_94},{&l_94,(void*)0,(void*)0,&l_94}},{{&g_21,(void*)0,(void*)0,&l_94},{&l_94,(void*)0,(void*)0,&l_94},{&l_95,(void*)0,(void*)0,&l_94}},{{&l_94,(void*)0,(void*)0,&l_94},{&l_95,(void*)0,(void*)0,&l_94},{&l_94,(void*)0,(void*)0,&l_94}},{{&l_95,(void*)0,&g_21,&l_94},{&l_94,(void*)0,(void*)0,&l_94},{&l_95,(void*)0,(void*)0,&l_94}},{{&l_94,(void*)0,(void*)0,&l_94},{&l_95,(void*)0,(void*)0,&l_94},{&l_94,(void*)0,(void*)0,&l_94}},{{&l_95,(void*)0,&g_21,&l_94},{&l_94,(void*)0,(void*)0,&l_94},{&l_95,(void*)0,(void*)0,&l_94}}};
                        int32_t ***l_158 = &l_154[0][2][2];
                        int32_t ****l_157 = &l_158;
                        int i, j, k;
                        (*l_142) = &p_46;
                        (**l_142) = (safe_div_func_uint32_t_u_u((((safe_mul_func_uint16_t_u_u(((**l_109) >= (safe_add_func_int32_t_s_s(((*l_95) <= (((void*)0 == &g_87) & ((void*)0 == l_154[0][2][2]))), (g_22 >= g_38)))), ((safe_mul_func_int32_t_s_s((l_109 != &l_95), 0U)) != p_47))) || 4294967295U) <= g_38), 4294967288U));
                        (*l_157) = &l_142;
                    }
                }
                else
                {
                    const int32_t *l_160 = &g_38;
                    const int32_t **l_159[4] = {&l_160,&l_160,&l_160,&l_160};
                    int i;
                    l_161 = (*l_109);
                }
                p_46 = (*g_10);
                l_165 = (g_163 == &g_164[0]);
                l_165 = ((((p_46 != (((*l_161) == (l_166 != (void*)0)) ^ (!0x57))) <= l_168) ^ g_38) || 1);
            }
            else
            {
                int32_t l_169 = 0x636B9821;
                const int32_t **l_171[6];
                const int32_t ***l_170 = &l_171[5];
                int16_t l_195[4];
                int i;
                for (i = 0; i < 6; i++)
                    l_171[i] = &l_161;
                for (i = 0; i < 4; i++)
                    l_195[i] = 0x05FA;
                l_169 = ((void*)0 != &p_46);
                (*l_170) = &l_161;
                p_46 = (safe_mul_func_int16_t_s_s(((void*)0 != l_102[0][4]), (safe_mod_func_uint16_t_u_u((((void*)0 == l_176) & (p_48 & 0xDDF1)), 1))));
                for (l_168 = (-3); (l_168 != 33); l_168 = safe_add_func_int16_t_s_s(l_168, 6))
                {
                    for (l_169 = 0; (l_169 == (-16)); l_169 = safe_sub_func_uint16_t_u_u(l_169, 3))
                    {
                        if ((*l_161))
                            break;
                    }
                    p_46 = (safe_mod_func_int8_t_s_s((((*g_163) != (void*)0) != (safe_lshift_func_uint8_t_u_u((safe_add_func_int8_t_s_s(((safe_mul_func_int16_t_s_s((p_47 < g_11), (g_38 & 0x6E3D7E29))) || (safe_sub_func_int8_t_s_s((safe_div_func_uint16_t_u_u((((safe_add_func_uint8_t_u_u(p_47, ((((void*)0 == &l_161) >= p_46) == (*l_95)))) && p_47) != p_48), g_11)), l_195[2]))), g_22)), g_162))), 0x62));
                }
            }
            l_196 = &p_46;
        }
    }
    return l_198[2];
}
static uint32_t func_49(int32_t * p_50, const int32_t * p_51, int8_t p_52, uint32_t p_53)
{
    int8_t l_75 = 0xA4;
    const int8_t l_80 = 6;
    const int32_t *l_83 = &g_11;
    const int32_t **l_82 = &l_83;
    int32_t *l_86 = &g_87;
    for (p_53 = 0; (p_53 == 38); p_53 = safe_add_func_uint16_t_u_u(p_53, 5))
    {
        int32_t l_69 = (-8);
        int32_t *l_81 = &l_69;
        (*l_81) = (p_53 || ((safe_unary_minus_func_uint32_t_u((safe_mul_func_uint8_t_u_u(p_52, p_52)))) | ((4294967293U < (l_69 || 0x8B14)) > (safe_lshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_u(((((((~l_75) < (safe_add_func_int32_t_s_s(((((4294967292U != 0x5104E0BB) || g_38) || 0U) ^ 0x84865E5A), g_11))) && g_22) != p_52) > (-1)) <= l_80), g_11)), l_75)))));
    }
    (*l_82) = (void*)0;
    (*l_86) = (safe_div_func_int32_t_s_s((*p_51), (-5)));
    if ((*p_50))
    {
        (*l_82) = &g_11;
    }
    else
    {
        (*l_82) = &g_38;
    }
    return g_22;
}
int main (void)
{
    int i, j;
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_11;
    csmith_sink_ = g_22;
    csmith_sink_ = g_38;
    csmith_sink_ = g_87;
    csmith_sink_ = g_162;
    csmith_sink_ = g_197;
    for (i = 0; i < 5; i++)
    {
        csmith_sink_ = g_272[i];
    }
    csmith_sink_ = g_633;
    csmith_sink_ = g_825;
    csmith_sink_ = g_1036;
    platform_main_end(0,0);
    return 0;
}
