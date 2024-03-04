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
static int32_t g_2 = 0xA48BBCA6;
static uint32_t g_97 = 0xE3B8AEA2;
static uint32_t g_105 = 4294967288U;
static int8_t g_158 = (-1);
static uint32_t g_180 = 4294967290U;
static uint32_t g_210 = 0xBC257202;
static uint16_t g_211 = 0x1F0E;
static uint32_t g_213 = 9U;
static int8_t g_251 = (-1);
static uint16_t g_310 = 8U;
static int32_t g_326 = (-1);
static int8_t g_332 = 0x94;
static int32_t g_466 = 0xE290AA29;
inline static uint32_t func_1(void);
inline static int32_t func_5(int16_t p_6, int32_t p_7, int32_t p_8);
static int32_t func_10(const int16_t p_11, int8_t p_12, uint8_t p_13, int32_t p_14);
inline static int8_t func_21(int8_t p_22, uint16_t p_23, int32_t p_24);
static uint32_t func_26(int8_t p_27, uint32_t p_28, int32_t p_29, const uint8_t p_30, uint8_t p_31);
inline static int32_t func_35(int32_t p_36, int16_t p_37, int8_t p_38);
static uint16_t func_46(int32_t p_47, int32_t p_48, uint32_t p_49, uint16_t p_50, uint32_t p_51);
static uint8_t func_53(int16_t p_54, uint8_t p_55);
static int16_t func_56(uint16_t p_57, int8_t p_58);
static uint32_t func_61(uint16_t p_62, int16_t p_63, uint16_t p_64, uint16_t p_65, uint8_t p_66);
inline static uint32_t func_1(void)
{
    int32_t l_9 = 0xB8FAAAEB;
    int32_t l_469 = (-1);
    uint8_t l_678 = 0x69;
    for (g_2 = 0; (g_2 < 19); ++g_2)
    {
        uint32_t l_32 = 4294967295U;
        int32_t l_360 = 0;
        int16_t l_650 = (-1);
        uint8_t l_679 = 1U;
        uint32_t l_686 = 0U;
        l_469 = func_5(g_2, l_9, func_10((safe_add_func_uint32_t_u_u((((l_9 && (safe_mod_func_int16_t_s_s(((((safe_rshift_func_int8_t_s_s(g_2, func_21(l_9, ((((((~func_26(l_32, (((((((safe_lshift_func_int16_t_s_s(((g_2 , ((func_35((l_9 || 0x62), l_9, g_2) && 0xD7715F62) | g_332)) == l_32), g_332)) || l_9) , 0xC05F) >= (-2)) & g_332) & 0x45DA) < 0x48E1), l_360, g_332, l_360)) & 9) , l_360) < 249U) >= g_2) , g_466), g_466))) & l_360) & 0x78B6) , l_9), l_469))) & l_469) > l_9), g_2)), l_32, g_332, l_9));
        g_326 = (2 & ((l_469 | l_650) <= ((safe_mod_func_int16_t_s_s((((((-1) < (g_210 , (safe_mod_func_int8_t_s_s(((safe_rshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s((((safe_add_func_int16_t_s_s(g_180, (safe_sub_func_int8_t_s_s(((safe_rshift_func_int8_t_s_s(((0x03 > (((safe_add_func_uint32_t_u_u((safe_sub_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s(((((safe_unary_minus_func_int16_t_s(l_360)) <= (safe_mul_func_int8_t_s_s((safe_add_func_uint32_t_u_u((((l_678 , l_678) , l_469) , 0xFDB309DB), l_32)), 0x02))) >= 0U) , 0U), l_9)), l_9)), 0x0215)), l_9)) | l_678) != g_251)) ^ g_326), 5)) <= 5U), 253U)))) > l_679) | 0x00), 2)), g_332)) != 0xE5), 0xE9)))) && 0x9E) ^ 0x6C) ^ (-1)), 1U)) == 0xD636)));
        l_686 = (safe_add_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(l_678, 6)), (safe_add_func_int16_t_s_s(0x9D1B, g_105))));
        for (g_97 = (-12); (g_97 <= 36); g_97++)
        {
            uint32_t l_691 = 0x0E0A47C6;
            for (l_32 = (-13); (l_32 > 50); l_32 = safe_add_func_int32_t_s_s(l_32, 1))
            {
                l_469 = (1U != 0x16);
            }
            return l_691;
        }
    }
    l_469 = ((safe_mul_func_uint8_t_u_u((l_678 < (safe_sub_func_int8_t_s_s(g_180, (((((l_678 && 250U) , ((g_326 ^ (4U & (((l_678 ^ (l_678 <= ((((-10) <= 0xDB3B) , g_466) <= l_9))) == 254U) | 0x8A61375C))) < l_9)) > 252U) , 0x22) >= l_678)))), g_211)) , 0);
    return g_310;
}
inline static int32_t func_5(int16_t p_6, int32_t p_7, int32_t p_8)
{
    return g_213;
}
static int32_t func_10(const int16_t p_11, int8_t p_12, uint8_t p_13, int32_t p_14)
{
    int16_t l_473 = 0xA159;
    int32_t l_511 = 0x0B8E9D4F;
    int32_t l_529 = 0xEFB1DB1D;
    uint8_t l_584 = 250U;
    int16_t l_625 = 0x2FBA;
    uint32_t l_637 = 0x9BFE5494;
    for (g_105 = 20; (g_105 != 44); g_105 = safe_add_func_uint8_t_u_u(g_105, 4))
    {
        const uint16_t l_472 = 65535U;
        int16_t l_613 = 0x49FF;
        int32_t l_635 = 5;
        l_473 = l_472;
        for (g_466 = 0; (g_466 > (-13)); g_466 = safe_sub_func_int8_t_s_s(g_466, 1))
        {
            int16_t l_481 = 0x67FB;
            uint8_t l_649 = 1U;
            if ((((g_326 <= (p_13 && 4294967295U)) && p_11) >= g_158))
            {
                const int32_t l_482 = 1;
                int32_t l_530 = 1;
                g_326 = (safe_mod_func_uint32_t_u_u((p_13 && (!0xD9EA4978)), (safe_mod_func_uint8_t_u_u(p_12, l_481))));
                p_14 = (((g_213 >= l_482) <= 5U) | l_473);
                if (((((safe_mul_func_int8_t_s_s((!((+(safe_mod_func_int32_t_s_s(((safe_mul_func_uint16_t_u_u(((((((safe_sub_func_uint8_t_u_u((((g_213 <= ((safe_sub_func_uint32_t_u_u(4294967290U, g_310)) & g_213)) | (l_473 != ((safe_mod_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(((safe_add_func_int8_t_s_s((((safe_rshift_func_uint8_t_u_s(l_482, ((l_472 >= (safe_mul_func_uint16_t_u_u((((safe_mul_func_int16_t_s_s(((safe_mod_func_int32_t_s_s(((-1) <= (safe_rshift_func_uint16_t_u_u(0x6CBA, 1))), g_251)) , 0xF99B), 1U)) , 0xD59C3A3E) | l_472), l_473))) <= l_481))) , p_12) != g_158), l_482)) ^ p_14), 3)), p_12)) , l_511))) > g_251), 255U)) | g_2) != l_473) , g_158) & l_472) == 0x28), p_14)) , 0xBC7330FE), p_14))) && g_310)), l_482)) , 1U) , 0xF872) >= 0xB217))
                {
                    int8_t l_514 = 3;
                    int32_t l_515 = 9;
                    l_515 = (((safe_mod_func_uint16_t_u_u(l_514, l_472)) != 1) , p_13);
                }
                else
                {
                    uint32_t l_516 = 0x08C91F0A;
                    int8_t l_544 = 0;
                    int16_t l_548 = 0x7663;
                    if ((((p_14 , (((l_516 || (safe_mod_func_uint16_t_u_u((((+((safe_lshift_func_int16_t_s_s((((safe_rshift_func_uint16_t_u_s(l_516, 15)) < 249U) , (!p_12)), ((((safe_mod_func_uint8_t_u_u(((((((g_2 && ((((safe_mul_func_int16_t_s_s(p_12, (l_482 == (g_105 ^ l_516)))) <= g_105) || 6) == g_251)) != 0x1D166E64) && l_516) , l_516) || l_529) , 0x99), g_466)) & 0) < 1U) < l_530))) , l_472)) >= 0x98) < p_11), g_332))) | l_472) != p_13)) <= g_2) != 5U))
                    {
                        return g_158;
                    }
                    else
                    {
                        uint32_t l_543 = 0x6DE82977;
                        l_544 = (!(safe_mod_func_uint32_t_u_u(p_11, ((1U < ((((safe_sub_func_int16_t_s_s((((0xCACBAFCE != (safe_mod_func_int8_t_s_s(((safe_rshift_func_int16_t_s_u(g_2, p_14)) && (safe_sub_func_int8_t_s_s((safe_unary_minus_func_uint16_t_u(((-7) < ((g_326 , ((0x45 ^ g_326) && p_14)) , g_105)))), l_516))), g_332))) , 0x507B) > l_473), l_543)) , 4294967287U) < g_326) , l_530)) , 0xEBC97AA9))));
                        g_326 = ((((4294967295U > ((0xE4 != (~(((((((p_12 || ((safe_add_func_uint32_t_u_u(l_548, (safe_rshift_func_int8_t_s_u(p_11, (safe_rshift_func_int8_t_s_u(0xB1, 3)))))) && (((l_530 , p_11) & ((safe_lshift_func_int16_t_s_u(g_211, 0)) >= p_12)) ^ 0x28))) != (-10)) ^ p_14) || g_310) || g_310) && p_12) != g_97))) | l_516)) && p_12) , p_12) < g_2);
                    }
                    for (l_544 = (-1); (l_544 <= (-12)); l_544 = safe_sub_func_uint8_t_u_u(l_544, 4))
                    {
                        g_326 = g_213;
                    }
                    if (p_14)
                        continue;
                    if ((((safe_add_func_uint8_t_u_u((((0xCB49 | ((safe_sub_func_int32_t_s_s((+((~((((safe_lshift_func_int8_t_s_u(((((0x5B | ((safe_sub_func_uint32_t_u_u((4294967295U > p_11), (((((safe_lshift_func_uint8_t_u_s(((((safe_rshift_func_uint8_t_u_s((((0xE13E9DB4 >= (l_482 ^ (((safe_add_func_uint8_t_u_u(g_310, (((+(((safe_mod_func_uint32_t_u_u(((safe_mul_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(((safe_sub_func_int32_t_s_s(((safe_rshift_func_uint16_t_u_u(g_326, 7)) < 0x02FBBF1C), g_105)) > l_481), (-10))), g_105)) | l_516), l_511)) == l_473) | g_2)) ^ 2) >= 0x55AF5970))) || g_97) > g_97))) < l_473) >= g_466), p_13)) == p_11) != 6U) , 0xF7), 7)) ^ l_481) && g_105) && l_584) < l_530))) <= g_211)) <= g_2) != l_516) & l_530), l_482)) && g_180) & g_326) == (-1))) & l_530)), 0x6C5297BF)) , 0xCA24)) <= (-9)) , 0xE9), p_14)) > l_584) , l_544))
                    {
                        uint16_t l_612 = 65535U;
                        l_511 = ((g_105 < (((((safe_rshift_func_uint8_t_u_s(((safe_unary_minus_func_int32_t_s((g_251 >= p_13))) , 0x90), g_2)) >= (safe_rshift_func_int8_t_s_s((g_180 | g_2), (safe_add_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((p_13 > g_180), 65535U)), 0x2380))))) != l_482) == g_251) < p_14)) | p_14);
                        p_14 = ((l_482 ^ (((((safe_sub_func_int8_t_s_s((safe_add_func_uint16_t_u_u((((0x35 == 0xE0) || ((safe_mod_func_uint8_t_u_u(((0x63D4 | ((safe_lshift_func_int16_t_s_s((((safe_rshift_func_int16_t_s_s(l_481, (safe_add_func_int16_t_s_s((((g_332 >= (safe_sub_func_int16_t_s_s(((-5) > ((-1) || (safe_mod_func_int8_t_s_s((safe_mod_func_int16_t_s_s((p_13 == 255U), p_11)), p_12)))), l_612))) ^ p_14) || g_97), p_11)))) | p_14) , 0x5922), l_612)) , 0x4B5E)) >= (-1)), 6U)) , l_473)) & g_210), p_14)), l_613)) && (-6)) , 0x44FA) > g_251) ^ 0xD84D)) <= g_210);
                        g_326 = ((safe_sub_func_int32_t_s_s((-1), l_511)) >= (((safe_unary_minus_func_uint32_t_u(p_14)) <= g_251) && (((g_251 <= (p_11 ^ ((g_326 <= 251U) <= (l_584 || 0U)))) , (-1)) > g_310)));
                        p_14 = (((safe_lshift_func_int8_t_s_s(((safe_add_func_int16_t_s_s(p_12, (((safe_mul_func_int16_t_s_s((-7), g_326)) == (((((safe_sub_func_int32_t_s_s(l_481, g_158)) < g_310) | l_481) , p_14) != (9 ^ l_584))) || p_11))) , l_625), l_472)) && (-1)) > g_251);
                    }
                    else
                    {
                        return g_213;
                    }
                }
            }
            else
            {
                int32_t l_634 = 1;
                uint32_t l_636 = 0xDD2CE0D3;
                p_14 = (((((((((((((safe_rshift_func_int16_t_s_u((p_13 && (safe_unary_minus_func_int16_t_s(((0x43A70069 & (((((g_158 <= (!(safe_mul_func_int16_t_s_s(g_213, (safe_sub_func_int32_t_s_s((((l_634 && l_613) < ((p_13 <= ((((l_481 , (g_326 > l_584)) & p_12) && 0x1B25E860) <= 0U)) < 0x75)) , l_634), (-8))))))) >= l_635) && l_511) || p_14) ^ 5U)) , p_12)))), p_13)) && l_636) & g_97) , l_634) == l_637) & l_481) , g_2) != 4) | l_529) ^ 0x9D8E4C7A) < 0x260B9869) != g_326) ^ p_14);
                g_326 = (safe_lshift_func_int16_t_s_s((safe_sub_func_int32_t_s_s(0x8901F33D, ((~g_180) || ((((l_635 | l_635) < ((((0U <= (safe_rshift_func_int16_t_s_s(p_11, (0x25 | (l_481 > (g_158 ^ g_310)))))) || g_211) ^ (-1)) > l_529)) , l_636) | 1U)))), 3));
            }
            l_649 = (safe_add_func_uint16_t_u_u(g_2, ((((l_481 || 0xAB) | (safe_mul_func_uint16_t_u_u((0x4B | ((g_97 , (g_213 || p_13)) > p_13)), ((((p_13 < 249U) >= g_97) & p_14) & l_584)))) != g_326) != p_11)));
        }
        g_326 = 0xB16D0730;
    }
    return p_14;
}
inline static int8_t func_21(int8_t p_22, uint16_t p_23, int32_t p_24)
{
    const uint16_t l_467 = 65527U;
    int16_t l_468 = (-3);
    l_468 = l_467;
    return p_23;
}
static uint32_t func_26(int8_t p_27, uint32_t p_28, int32_t p_29, const uint8_t p_30, uint8_t p_31)
{
    int8_t l_363 = 0xB4;
    int8_t l_394 = 0x88;
    uint8_t l_412 = 254U;
    int8_t l_462 = 1;
    uint8_t l_465 = 0x10;
    if ((safe_sub_func_int8_t_s_s(l_363, (safe_mod_func_uint8_t_u_u(((((safe_sub_func_uint16_t_u_u((safe_unary_minus_func_uint16_t_u((safe_rshift_func_uint16_t_u_u(((l_363 & (+g_310)) != (safe_sub_func_uint8_t_u_u(((safe_sub_func_int32_t_s_s((p_31 || g_210), (safe_add_func_uint8_t_u_u(0x7E, (g_180 <= 65532U))))) | ((l_363 , 1U) && l_363)), p_31))), l_363)))), 0x4248)) , g_210) > (-1)) || p_29), g_210)))))
    {
        uint32_t l_395 = 0xE59004A7;
        uint16_t l_413 = 0xC61A;
        p_29 = (+(((safe_rshift_func_int8_t_s_u(((safe_mod_func_int32_t_s_s(((((((g_2 && g_105) , (safe_add_func_uint32_t_u_u(p_28, (safe_lshift_func_int8_t_s_s(p_28, ((safe_rshift_func_uint16_t_u_u(p_29, 8)) , ((safe_rshift_func_uint16_t_u_u(0x24BA, (safe_mul_func_uint16_t_u_u((safe_unary_minus_func_int32_t_s(p_29)), 0U)))) || ((l_394 < g_180) <= l_394)))))))) >= l_394) , (-4)) < g_251) || g_310), l_395)) || p_28), 7)) , 0) , g_332));
        p_29 = ((g_2 & (safe_lshift_func_int8_t_s_s((((~l_363) == (~(safe_mod_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(p_29, (safe_mul_func_int16_t_s_s((l_363 , (p_27 != 0x2853)), g_332)))), (safe_sub_func_int8_t_s_s(g_180, (safe_add_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((l_412 , g_326), 7)), l_412)))))))) && l_413), 1))) == g_332);
    }
    else
    {
        int16_t l_418 = 0x1002;
        uint32_t l_423 = 2U;
        uint16_t l_436 = 65535U;
        if ((((safe_add_func_int8_t_s_s(l_412, p_31)) >= 0xD309EBA8) > 0x36A6))
        {
            int32_t l_422 = 0x72917E55;
            l_418 = (0x65 & (safe_mod_func_uint8_t_u_u(g_210, 0x70)));
            g_326 = (((((safe_mul_func_int16_t_s_s(g_310, 0x4566)) , ((!(((((0xE6 & 252U) , g_326) ^ g_211) <= l_422) ^ ((g_210 & (l_422 == g_97)) , l_363))) == l_423)) | l_422) <= l_418) <= p_28);
            l_422 = ((safe_rshift_func_int8_t_s_u(((p_31 < (((safe_lshift_func_int16_t_s_u((g_310 , (((0xF3 || (safe_mul_func_uint16_t_u_u(65535U, g_326))) , (safe_lshift_func_int16_t_s_s((safe_sub_func_int32_t_s_s(((safe_sub_func_int16_t_s_s((l_436 | ((g_213 || (safe_mul_func_uint8_t_u_u(9U, p_30))) > p_28)), p_29)) | l_422), g_251)), 8))) < l_422)), g_332)) , l_422) <= 5U)) , l_423), p_27)) | g_332);
            for (g_210 = 5; (g_210 >= 57); g_210++)
            {
                l_422 = (+p_31);
                p_29 = p_29;
            }
        }
        else
        {
            return g_210;
        }
        p_29 = (safe_lshift_func_int16_t_s_u(p_30, (g_251 < (safe_rshift_func_int16_t_s_u(l_436, p_28)))));
    }
    l_465 = (safe_mod_func_int32_t_s_s(((safe_rshift_func_uint8_t_u_s(p_29, 2)) , (((safe_mod_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(g_2, p_27)), (safe_rshift_func_int8_t_s_u(p_27, (safe_rshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_u(((l_462 && g_213) >= l_412), 7)), ((safe_mod_func_uint8_t_u_u(g_213, g_213)) , p_27))), p_31)))))) != l_462) ^ 0xE5)), p_30));
    return p_28;
}
inline static int32_t func_35(int32_t p_36, int16_t p_37, int8_t p_38)
{
    uint32_t l_41 = 4294967288U;
    int32_t l_359 = 0x3C6ECB8E;
    l_359 = ((65534U && (safe_add_func_uint8_t_u_u(g_2, (l_41 ^ (0xB36C & (safe_add_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u(func_46(g_2, g_2, g_2, l_41, l_41), (-1))), 0))))))) && p_37);
    return l_41;
}
static uint16_t func_46(int32_t p_47, int32_t p_48, uint32_t p_49, uint16_t p_50, uint32_t p_51)
{
    int32_t l_67 = (-6);
    uint16_t l_85 = 4U;
    int32_t l_345 = 0x1AB3E258;
    p_47 = (safe_unary_minus_func_uint8_t_u(func_53(func_56((safe_rshift_func_uint16_t_u_u(g_2, 15)), (func_61((l_67 | g_2), (l_67 != (safe_mod_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s(((g_2 > ((safe_lshift_func_int16_t_s_u((safe_add_func_int32_t_s_s((((safe_sub_func_int32_t_s_s(((safe_sub_func_uint16_t_u_u(0x1D57, (((safe_rshift_func_uint8_t_u_u((l_67 , ((!(l_67 & ((safe_sub_func_uint8_t_u_u(((p_48 , 248U) < l_67), 0x32)) && 4294967295U))) & l_67)), l_67)) < g_2) , g_2))) < p_49), 7U)) , 0x77C19C50) || g_2), g_2)), l_85)) || g_2)) , 7), 0x12)) & 5U), l_67))), p_48, p_49, g_2) >= l_85)), p_49)));
    p_47 = g_105;
    l_345 = (safe_mul_func_uint8_t_u_u(((p_50 | g_332) , (safe_rshift_func_uint8_t_u_u(1U, ((g_332 && (((-4) <= 65535U) | ((g_211 > (((safe_rshift_func_uint16_t_u_u(((((((safe_mod_func_uint32_t_u_u((safe_sub_func_int8_t_s_s(((safe_mod_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(0xB9, 1)), ((((g_251 | g_326) & l_85) , l_85) | g_310))) && g_180), l_85)), g_210)) , g_97) , g_213) & 4294967295U) | g_158) , p_49), g_211)) <= p_50) != 0xC3)) ^ l_67))) && g_213)))), l_67));
    l_345 = ((((((safe_add_func_uint8_t_u_u(((l_67 , (((safe_sub_func_uint32_t_u_u((((safe_mod_func_uint16_t_u_u(p_48, l_67)) >= (((safe_lshift_func_uint16_t_u_u(1U, 1)) && l_345) , g_180)) || (safe_mul_func_int16_t_s_s((((0 == (p_51 < ((safe_unary_minus_func_uint32_t_u((((safe_rshift_func_uint16_t_u_u((((g_251 >= l_345) < 255U) | p_51), l_85)) , g_326) & 0U))) > p_49))) , 0xE367) < l_345), g_2))), p_49)) >= 1U) | (-4))) < 0x8F14), g_158)) & 7) & 0U) >= 65531U) & 0U) > g_2);
    return g_158;
}
static uint8_t func_53(int16_t p_54, uint8_t p_55)
{
    uint32_t l_329 = 0x7B01C23C;
    g_326 = l_329;
    return g_310;
}
static int16_t func_56(uint16_t p_57, int8_t p_58)
{
    int8_t l_321 = 0x17;
    int32_t l_327 = 0x03CEEFD6;
    uint8_t l_328 = 0x6E;
    l_327 = (safe_mul_func_int8_t_s_s((((((safe_rshift_func_int16_t_s_u(((g_210 , (((((((p_57 , ((safe_add_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s((safe_sub_func_int8_t_s_s(0x57, ((g_2 != l_321) , (safe_mul_func_uint8_t_u_u((((((l_321 , (((g_251 <= (safe_add_func_int16_t_s_s(p_57, p_58))) , 0x53) < g_211)) | 0xFE) && p_58) < 0xD8) & l_321), p_57))))), 6)), p_58)) & 0x4237)) != g_326) , l_321) ^ (-6)) | p_58) | 0x0234A52F) , 65530U)) != p_58), l_321)) <= 2U) && g_105) || 0x11EA) || 0x7D72), g_97));
    return l_328;
}
static uint32_t func_61(uint16_t p_62, int16_t p_63, uint16_t p_64, uint16_t p_65, uint8_t p_66)
{
    int32_t l_96 = 0x7DCB2139;
    uint32_t l_115 = 4294967287U;
    int32_t l_181 = (-9);
    int32_t l_284 = 4;
    uint32_t l_309 = 0x2917B7F4;
    if ((p_62 | (safe_unary_minus_func_uint8_t_u(((p_66 <= (9 == (!((g_2 & (g_2 , ((safe_mod_func_int16_t_s_s(((((p_63 != (((safe_sub_func_int8_t_s_s((safe_sub_func_int16_t_s_s(p_66, ((((((safe_sub_func_int8_t_s_s((-4), p_64)) | l_96) < g_2) || 65535U) || 0x224F) , g_2))), 0xB4)) != p_64) <= 0xDB030F3E)) != l_96) & g_2) , l_96), 0x0EC4)) & l_96))) , g_2)))) > 0x3B)))))
    {
        int8_t l_137 = 5;
        int32_t l_209 = 0x72B36A80;
        g_97 = p_64;
        for (p_62 = 0; (p_62 > 51); p_62 = safe_add_func_uint32_t_u_u(p_62, 6))
        {
            uint8_t l_104 = 0U;
            for (g_97 = 0; (g_97 <= 21); g_97 = safe_add_func_uint32_t_u_u(g_97, 1))
            {
                const uint32_t l_114 = 0xEB51834A;
                for (p_65 = 0; (p_65 >= 22); p_65++)
                {
                    int32_t l_136 = 0xB49816E0;
                    g_105 = l_104;
                    if (((safe_mul_func_uint8_t_u_u(253U, (safe_add_func_uint8_t_u_u(l_104, (p_65 , (p_63 && ((((safe_lshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u((((-1) < ((l_114 != (-5)) , (p_66 , 251U))) <= p_64), p_65)), l_96)) < g_2) , 65535U) && l_115))))))) >= 0xA8BFC022))
                    {
                        uint16_t l_116 = 65531U;
                        l_116 = (-6);
                        l_137 = (g_2 && ((!(l_114 != ((((-1) >= 8) , ((((((((safe_lshift_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((0x9839B2FD || (((safe_mul_func_uint16_t_u_u((g_105 , (safe_add_func_int32_t_s_s((safe_mod_func_int16_t_s_s((safe_unary_minus_func_uint16_t_u(((((safe_rshift_func_int16_t_s_u((0xA4 > (safe_unary_minus_func_int8_t_s((safe_lshift_func_int16_t_s_s((safe_mul_func_int8_t_s_s(0x18, (g_97 == l_136))), l_136))))), p_63)) <= g_97) || l_104) | l_96))), l_115)), 0xCCA7CC92))), g_105)) & p_66) != l_136)), g_2)), 1)) & g_105) == 0x26) > p_63) & 0) > 0x8C) <= 0x5F53E4EB) <= p_65)) ^ g_105))) , (-8)));
                    }
                    else
                    {
                        int8_t l_157 = 0xCB;
                        g_158 = (safe_sub_func_int32_t_s_s((((safe_mod_func_int16_t_s_s(1, g_97)) == ((safe_lshift_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((((safe_sub_func_uint32_t_u_u(p_64, (safe_lshift_func_uint16_t_u_u(g_105, l_136)))) ^ l_137) , (0 && (((~(safe_mul_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_u((((((safe_rshift_func_int8_t_s_u(p_65, l_114)) == l_157) <= 0xB7) & 65528U) == l_157), 7)) && g_2), l_96))) | p_63) != 0x91FBA64A))), l_137)), g_2)) < g_97)) < 0x5A), (-4)));
                    }
                }
            }
            if (l_115)
            {
                uint32_t l_194 = 0U;
                int32_t l_199 = 0x1E1C95C5;
                for (g_97 = 19; (g_97 < 42); g_97 = safe_add_func_uint32_t_u_u(g_97, 9))
                {
                    uint32_t l_161 = 1U;
                    l_161 = 0;
                    if (g_97)
                        goto lbl_285;
                    g_180 = (safe_rshift_func_int8_t_s_s((((((safe_add_func_int32_t_s_s((((!g_97) , ((~((safe_rshift_func_int16_t_s_u(0x5BEE, 2)) && l_137)) != 4294967295U)) || l_161), (safe_rshift_func_int8_t_s_u((((0xFA | (safe_unary_minus_func_uint8_t_u(((safe_mul_func_uint16_t_u_u((0xCE & (safe_add_func_uint16_t_u_u((0xAF & ((~(safe_add_func_int32_t_s_s((0xE1 >= l_137), 0x5914D98E))) | 0x3558)), l_115))), p_66)) > p_65)))) , 0xEFB7) == l_115), 0)))) | p_64) | 65530U) != l_161) > g_97), 2));
                    l_181 = l_96;
                    if ((l_161 != (+(p_62 && 65526U))))
                    {
                        l_199 = ((safe_unary_minus_func_uint32_t_u(((safe_add_func_int32_t_s_s(((safe_lshift_func_int16_t_s_s(0, l_137)) < ((safe_mod_func_uint16_t_u_u(((((safe_sub_func_uint32_t_u_u(((safe_lshift_func_uint8_t_u_u((g_105 == (((l_161 <= (l_194 & ((safe_mul_func_int16_t_s_s(8, g_105)) , ((9 | ((safe_rshift_func_int16_t_s_s((0xDBB92B38 == p_62), 4)) ^ (-1))) && l_194)))) > p_63) , l_161)), 4)) < p_62), g_97)) | g_2) && p_62) >= l_194), 7U)) & (-10))), l_137)) , 0xD408D08F))) , 0xD6E8A3BF);
                    }
                    else
                    {
                        l_181 = ((0x6A == (((safe_mul_func_uint8_t_u_u(0U, 0xE8)) ^ (safe_mul_func_int16_t_s_s(l_161, (safe_sub_func_uint8_t_u_u(((((safe_sub_func_uint32_t_u_u(4294967292U, (l_104 < (g_2 < ((1U && ((~5U) == g_105)) < g_158))))) , 0x04) <= l_137) || g_105), p_64))))) , 9)) , p_66);
                        if (g_97)
                            continue;
                    }
                }
                l_209 = p_65;
            }
            else
            {
                g_210 = (-1);
            }
        }
    }
    else
    {
        uint8_t l_218 = 0x08;
        int8_t l_229 = 0x9E;
        g_211 = 0x751AD0A0;
        g_213 = (+(0U > g_105));
        l_181 = (safe_mod_func_uint16_t_u_u((0x696D6245 < (l_96 && (safe_mul_func_int8_t_s_s((l_218 > g_97), (safe_lshift_func_int8_t_s_s(p_66, l_218)))))), ((((p_64 <= ((safe_mod_func_int32_t_s_s((((((safe_mul_func_int8_t_s_s(0x83, (safe_rshift_func_int16_t_s_u((safe_mod_func_int16_t_s_s(0x94B5, p_63)), g_105)))) >= g_2) & 0x5F) && 5) , l_229), 0x87FC3788)) > l_229)) ^ g_97) | p_65) ^ 0xEA)));
        for (l_181 = 0; (l_181 > 5); l_181 = safe_add_func_uint32_t_u_u(l_181, 1))
        {
            uint32_t l_244 = 0x28DE542F;
            if (p_62)
                break;
            g_251 = (safe_unary_minus_func_uint32_t_u(((safe_sub_func_int32_t_s_s(9, ((((((safe_add_func_int8_t_s_s((l_181 , (safe_mod_func_int8_t_s_s((~g_105), p_62))), (safe_mod_func_uint32_t_u_u(((p_66 <= (l_244 ^ (((((safe_mul_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(((((safe_rshift_func_uint16_t_u_u(l_244, 11)) < l_244) , p_65) == l_181), g_97)), 0x89D2)) , 1U) , l_218) || 2U) != g_97))) == p_66), g_158)))) < 0x62) != g_158) , g_105) <= (-10)) != l_229))) != g_97)));
        }
    }
lbl_285:
    l_181 = ((safe_add_func_int16_t_s_s((p_66 >= (safe_rshift_func_int8_t_s_s(g_210, (safe_lshift_func_uint8_t_u_s(((p_64 >= (((safe_mul_func_uint8_t_u_u((((safe_lshift_func_int8_t_s_u((safe_mul_func_int16_t_s_s((safe_mul_func_int8_t_s_s((safe_mul_func_int8_t_s_s((safe_mod_func_int16_t_s_s(0x7B6A, (g_210 ^ l_96))), ((safe_mul_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(((l_181 != (safe_add_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(l_115, (safe_rshift_func_int16_t_s_s(((0x880BC6D3 <= 0x08AECDC9) ^ 1), 9)))), g_180))) ^ 0xEB45), 0)), p_65)), l_181)), g_97)) == l_284))), l_284)), l_181)), g_210)) ^ l_181) | 4), p_62)) , 65535U) | g_2)) ^ l_284), 0))))), 0xE53F)) > g_97);
    g_310 = (safe_sub_func_int8_t_s_s(((safe_sub_func_uint8_t_u_u(((safe_add_func_int8_t_s_s((((safe_add_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_u((safe_mod_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s(2U, g_105)), ((((safe_unary_minus_func_int8_t_s(l_115)) <= l_284) == (((g_210 , (safe_sub_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((safe_add_func_uint32_t_u_u(((((p_66 , (((l_181 , ((((p_65 ^ l_96) < l_115) && g_180) & 4294967295U)) <= 7) , p_64)) <= p_63) , g_158) , 0x67F5F9C3), g_2)), g_251)), g_210))) | l_309) && l_115)) , 0xAD))), 0)), p_62)), g_251)) & 4294967288U) , 0x41), p_63)) == 0x714A), 8)) >= g_105), l_96));
    return p_66;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_2;
    csmith_sink_ = g_97;
    csmith_sink_ = g_105;
    csmith_sink_ = g_158;
    csmith_sink_ = g_180;
    csmith_sink_ = g_210;
    csmith_sink_ = g_211;
    csmith_sink_ = g_213;
    csmith_sink_ = g_251;
    csmith_sink_ = g_310;
    csmith_sink_ = g_326;
    csmith_sink_ = g_332;
    csmith_sink_ = g_466;
    platform_main_end(0,0);
    return 0;
}
