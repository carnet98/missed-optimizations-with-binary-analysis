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
static int32_t g_3 = 0xDADA439BL;
static uint32_t g_37 = 0x0C3F30B9L;
static int32_t g_40 = 0x4D996497L;
static uint16_t g_69 = 0xE526L;
static int32_t g_78 = 0x5CD4DCD7L;
static uint32_t g_82 = 0x9347A64AL;
static uint32_t g_102 = 0x43A54D8FL;
static uint32_t g_104 = 4294967286UL;
static int32_t **g_106 = (void*)0;
static uint16_t *g_123 = &g_69;
static uint16_t **g_122 = &g_123;
static uint16_t **g_125 = &g_123;
static uint16_t g_127 = 5UL;
static uint8_t g_129 = 255UL;
static int8_t * const g_136 = (void*)0;
static const uint16_t *g_151 = &g_127;
static const uint16_t **g_150 = &g_151;
static const uint16_t *** const g_149 = &g_150;
static int16_t g_161 = (-1L);
static int32_t *g_175 = &g_78;
static int32_t **g_174 = &g_175;
static uint32_t g_196 = 4294967288UL;
static uint8_t *g_261 = &g_129;
static uint8_t **g_260 = &g_261;
static int8_t g_330 = 0x51L;
static int8_t g_332 = 0x07L;
static uint32_t *g_370 = &g_102;
static uint32_t ** const g_369 = &g_370;
static uint16_t * const **g_412 = (void*)0;
static int32_t *g_419 = &g_3;
static uint8_t g_435 = 0UL;
static uint8_t g_453 = 254UL;
static int32_t *g_495 = &g_78;
static uint8_t g_605 = 1UL;
static int16_t g_668 = 0x64D8L;
static uint32_t g_707 = 18446744073709551612UL;
static uint16_t ***g_742 = &g_122;
static uint32_t **g_745 = &g_370;
static int8_t g_764 = (-1L);
static const uint32_t g_822 = 18446744073709551611UL;
static int32_t g_861 = (-9L);
static int32_t g_869 = (-8L);
static int32_t *g_871 = (void*)0;
static uint32_t g_969 = 4294967295UL;
static uint16_t g_977 = 0x463CL;
static uint32_t g_995 = 0UL;
static uint32_t g_1004 = 0UL;
static int8_t **g_1056 = (void*)0;
static int32_t ** const *g_1065 = (void*)0;
static int32_t ** const **g_1064 = &g_1065;
static uint32_t *g_1071 = &g_37;
static uint32_t **g_1070 = &g_1071;
static uint32_t ***g_1069 = &g_1070;
static uint32_t *** const *g_1068 = &g_1069;
static uint32_t g_1087 = 6UL;
static uint8_t ***g_1107 = &g_260;
static uint8_t ****g_1106 = &g_1107;
static uint16_t ****g_1129 = &g_742;
static uint16_t *****g_1128 = &g_1129;
static int16_t *g_1155 = (void*)0;
static int16_t ** const g_1154 = &g_1155;
static int32_t ***g_1227 = &g_174;
static int32_t ****g_1226 = &g_1227;
static int32_t *****g_1225 = &g_1226;
static int32_t g_1384 = 1L;
static int8_t ****g_1389 = (void*)0;
static int32_t func_1(void);
static int32_t func_9(const int8_t p_10, uint16_t p_11, int16_t p_12);
static int8_t func_20(const uint16_t p_21, const int16_t p_22, uint16_t p_23, int8_t p_24, int32_t p_25);
static int32_t * func_32(const uint16_t p_33, uint32_t p_34);
static const int32_t func_43(uint32_t * p_44, uint32_t p_45, uint16_t p_46, uint16_t p_47);
static int32_t func_50(const uint32_t p_51);
static int32_t func_56(const int16_t p_57, int32_t * p_58);
static int32_t * func_59(int16_t p_60, int32_t * const p_61);
static int32_t * func_62(int32_t p_63, uint16_t * p_64, uint16_t p_65, uint16_t p_66, int32_t p_67);
static uint32_t func_71(uint16_t p_72);
static int32_t func_1(void)
{
    const uint32_t l_2 = 4294967287UL;
    uint16_t ** const *l_1011 = &g_122;
    uint16_t ** const **l_1010 = &l_1011;
    uint16_t ** const ***l_1009 = &l_1010;
    uint32_t **l_1033 = (void*)0;
    uint8_t ****l_1108 = &g_1107;
    uint16_t l_1159 = 0xAB1BL;
    int16_t l_1183 = 0xB6CCL;
    uint16_t l_1209 = 5UL;
    int32_t *****l_1228 = (void*)0;
    int16_t l_1230 = 0x8110L;
    int16_t l_1231 = 0x7D07L;
    int32_t l_1333 = 0x33B66108L;
    int16_t ** const l_1362 = &g_1155;
    int8_t l_1376 = 0xDAL;
    uint32_t *** const l_1380 = &g_1070;
    int8_t ***l_1388 = &g_1056;
    int8_t ****l_1387 = &l_1388;
    if (l_2)
    {
        const int16_t l_26 = (-1L);
        int32_t l_31 = (-1L);
        int16_t l_939 = 1L;
        int32_t l_955 = 0L;
        const int32_t *l_981 = &l_955;
        const int32_t **l_980 = &l_981;
        const int32_t ***l_979 = &l_980;
        uint8_t ***l_1092 = &g_260;
        uint8_t ****l_1091 = &l_1092;
        int8_t *l_1095 = &g_764;
        int8_t **l_1094 = &l_1095;
        uint32_t l_1109 = 1UL;
        int32_t l_1187 = 0x4456AFB5L;
        int32_t ***l_1205 = &g_106;
        int32_t ****l_1204 = &l_1205;
        uint32_t l_1207 = 8UL;
        uint32_t ***l_1208 = &g_1070;
        const uint32_t l_1210 = 18446744073709551612UL;
        uint32_t ** const *l_1212 = &l_1033;
        uint32_t ** const **l_1211 = &l_1212;
        for (g_3 = 0; (g_3 == (-7)); g_3 = safe_sub_func_uint16_t_u_u(g_3, 2))
        {
            const uint16_t l_13 = 2UL;
            int16_t *l_837 = &g_161;
            int8_t l_938 = (-3L);
            uint8_t l_966 = 0xF9L;
            int32_t l_970 = 0x445E5BE5L;
            uint32_t l_1081 = 4294967295UL;
            uint8_t **** const l_1093 = (void*)0;
            int16_t l_1122 = 9L;
            int16_t **l_1153 = &l_837;
            uint8_t l_1171 = 248UL;
            uint16_t l_1184 = 0xE281L;
            uint32_t ****l_1203 = &g_1069;
            int32_t *****l_1206 = &l_1204;
            uint32_t ** const ***l_1213 = &l_1211;
        }
    }
    else
    {
        uint8_t l_1214 = 0UL;
        uint16_t *l_1229 = &g_977;
        (*g_174) = func_62(l_1214, ((**l_1011) = ((l_1209 & (0xD44DL > (safe_mod_func_uint16_t_u_u(((****l_1010) = (**g_150)), ((((**g_260) , (safe_sub_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(l_1159, 3)), (g_332 = l_1214)))) >= (((((((l_1183 < (((safe_rshift_func_int16_t_s_u((safe_sub_func_int16_t_s_s(((((((l_1228 = g_1225) != &g_1064) == l_1214) | l_1214) , (*****l_1228)) <= l_1183), 0x83C3L)), 5)) >= (*g_495)) ^ (****g_1106))) != l_1214) == l_1214) ^ l_2) > l_2) , (*****l_1228)) >= (****g_1106))) | 0xC2L))))) , l_1229)), l_1209, l_1230, l_1214);
        return (*****l_1228);
    }
    (***g_1226) = (void*)0;
    if (l_1231)
    {
        int32_t *l_1234 = &g_78;
        uint32_t ****l_1253 = &g_1069;
        uint32_t *****l_1252 = &l_1253;
        uint8_t **l_1256 = &g_261;
        uint16_t *l_1283 = &l_1209;
        uint32_t l_1317 = 0UL;
        uint32_t ***l_1323 = &l_1033;
        uint32_t ****l_1322 = &l_1323;
        uint32_t *****l_1321 = &l_1322;
        uint16_t l_1358 = 65531UL;
        int16_t l_1379 = (-10L);
        uint32_t l_1414 = 1UL;
        for (g_102 = 0; (g_102 != 15); ++g_102)
        {
            int32_t l_1249 = 0x580CFAE9L;
            int8_t *l_1291 = (void*)0;
            int32_t *l_1316 = &g_3;
            int16_t l_1319 = 0x6013L;
            uint16_t ***l_1334 = &g_122;
            int8_t * const *l_1338 = &g_136;
            int8_t * const **l_1337 = &l_1338;
            int8_t * const ** const *l_1336 = &l_1337;
            int8_t * const ** const ** const l_1335 = &l_1336;
            int32_t l_1383 = 0x9F96A6C2L;
            (**g_1227) = l_1234;
            for (g_82 = 20; (g_82 == 4); --g_82)
            {
                uint8_t **l_1237 = &g_261;
                int32_t l_1247 = 0x9AF5A6C6L;
                uint16_t ****l_1248 = &g_742;
                (***g_1227) = (((*g_261) , l_1237) != (void*)0);
                for (g_995 = (-11); (g_995 == 49); ++g_995)
                {
                    uint32_t l_1250 = 1UL;
                    uint32_t *****l_1254 = &l_1253;
                    uint16_t *l_1284 = &g_977;
                    int32_t *l_1288 = (void*)0;
                    int8_t *l_1294 = &g_764;
                    if ((safe_mod_func_int16_t_s_s((((void*)0 != (*g_1064)) != (((+(+(safe_rshift_func_uint16_t_u_s(((safe_unary_minus_func_int8_t_s(l_1247)) <= 0xE319B56DL), (1UL && (((((void*)0 != (*g_1227)) <= ((((((void*)0 == l_1248) , 0x86L) >= l_1247) , 0L) | l_1249)) >= 0x41FEL) , l_1250)))))) >= (****g_1226)) >= l_1250)), (**g_125))))
                    {
                        uint32_t ****l_1251 = &g_1069;
                        (*l_1251) = (*g_1068);
                        (****g_1226) = (**g_174);
                        if (l_1249)
                            continue;
                    }
                    else
                    {
                        int32_t *l_1255 = &g_3;
                        if (l_1249)
                            break;
                        l_1254 = l_1252;
                        l_1255 = (void*)0;
                    }
                }
                (***g_1226) = (***g_1226);
            }
            if (((l_1249 , (safe_rshift_func_uint8_t_u_u(0UL, 0))) , (!(*l_1234))))
            {
                int32_t l_1320 = 5L;
                for (l_1231 = 0; (l_1231 <= (-29)); l_1231--)
                {
                    (*l_1234) = l_1249;
                }
                for (g_332 = 26; (g_332 >= 21); g_332--)
                {
                    int8_t *l_1303 = (void*)0;
                    int8_t *l_1304 = &g_764;
                    int32_t l_1311 = 0x1CF10DD5L;
                    int16_t *l_1318 = &l_1230;
                }
                return (**g_174);
            }
            else
            {
                int32_t *l_1324 = &g_40;
                l_1321 = (void*)0;
                l_1324 = (***g_1226);
                if ((***g_1227))
                    break;
                if ((*l_1234))
                    break;
            }
        }
        if (((!(((void*)0 == &g_370) != 0x46E2L)) | ((*g_260) == (***l_1108))))
        {
            int8_t l_1409 = 0x1BL;
            int32_t l_1412 = 0x30E06812L;
            if ((safe_lshift_func_int8_t_s_u(((*l_1234) , g_37), 0)))
            {
                int8_t l_1396 = (-1L);
                int32_t l_1397 = 0x9EAEE4ECL;
                int32_t **l_1410 = (void*)0;
                int16_t *l_1411 = &l_1231;
                uint16_t l_1413 = 65535UL;
                (*g_495) = (*g_419);
                (*g_419) = (((***g_1069) >= ((l_1397 = l_1396) && ((~((**g_125) | 4UL)) < (((safe_rshift_func_int8_t_s_u(((safe_mod_func_int8_t_s_s(((safe_sub_func_uint16_t_u_u((l_1412 = ((**g_150) < (safe_sub_func_uint8_t_u_u((((((*l_1283) = (safe_add_func_uint8_t_u_u((l_1409 < ((*l_1411) = ((void*)0 == l_1410))), (0x6F253D1CL != 0L)))) , (*l_1234)) <= l_1409) ^ g_127), l_1409)))), l_1413)) || (*g_1071)), 3L)) == (**g_1070)), (**g_260))) , (*g_151)) , (***g_1107))))) != l_1230);
                l_1414 = ((*l_1234) = (l_1412 > 4294967294UL));
            }
            else
            {
                (****g_1225) = (void*)0;
            }
        }
        else
        {
            const int16_t l_1417 = (-1L);
            int32_t l_1418 = 0x5C75AFB1L;
            (*g_174) = (**g_1227);
            (*l_1234) = (l_1418 = ((((void*)0 != (*g_1154)) <= ((****g_1129) = (safe_rshift_func_int16_t_s_s(l_1417, (*l_1234))))) && (****g_1129)));
        }
    }
    else
    {
        int32_t l_1419 = (-1L);
        l_1419 = l_1419;
    }
    return (*g_419);
}
static int32_t func_9(const int8_t p_10, uint16_t p_11, int16_t p_12)
{
    int32_t **l_842 = &g_495;
    int32_t l_850 = 1L;
    int16_t *l_853 = &g_161;
    uint32_t *l_857 = &g_82;
    uint16_t *** const l_872 = (void*)0;
    (*g_495) = (safe_lshift_func_int8_t_s_s(p_12, 3));
    for (g_40 = 21; (g_40 < 11); g_40 = safe_sub_func_int32_t_s_s(g_40, 1))
    {
        uint8_t l_856 = 0xE7L;
        int32_t *l_864 = &g_861;
        const int8_t *l_874 = &g_330;
        const int8_t **l_873 = &l_874;
        uint16_t l_937 = 1UL;
    }
    return (**l_842);
}
static int8_t func_20(const uint16_t p_21, const int16_t p_22, uint16_t p_23, int8_t p_24, int32_t p_25)
{
    uint32_t l_836 = 0x393F1274L;
    (*g_174) = func_32(g_3, g_3);
    (*g_495) = l_836;
    return p_21;
}
static int32_t * func_32(const uint16_t p_33, uint32_t p_34)
{
    uint32_t *l_35 = (void*)0;
    uint32_t *l_36 = &g_37;
    int32_t *l_38 = (void*)0;
    int32_t *l_39 = &g_40;
    uint16_t l_41 = 0UL;
    int32_t l_804 = 1L;
    const uint8_t *l_812 = (void*)0;
    int32_t *l_829 = &g_3;
    int32_t **l_830 = &l_829;
    (*l_39) = (((*l_36) = g_3) || p_33);
    return (*g_174);
}
static const int32_t func_43(uint32_t * p_44, uint32_t p_45, uint16_t p_46, uint16_t p_47)
{
    int32_t *l_52 = (void*)0;
    int32_t *l_53 = &g_40;
    uint8_t l_757 = 0xBFL;
    int8_t *l_763 = &g_764;
    int8_t **l_762 = &l_763;
    uint16_t l_765 = 65526UL;
    uint32_t *l_766 = &g_102;
    (*l_53) = func_50(((*l_766) = (((*l_53) = 0x46F26339L) | ((safe_add_func_int32_t_s_s(((func_56(g_3, &g_3) & (l_757 != (p_45 && ((safe_sub_func_uint8_t_u_u(((((safe_sub_func_uint8_t_u_u(0xB2L, ((l_762 == &l_763) == p_45))) != 1UL) , l_765) | p_47), p_46)) && 1UL)))) , (-7L)), g_668)) <= p_45))));
    if (g_161)
        goto lbl_784;
lbl_784:
    l_52 = l_53;
    (*l_53) = 0x4FE007C8L;
    return p_47;
}
static int32_t func_50(const uint32_t p_51)
{
    int32_t *l_767 = &g_3;
    int32_t **l_768 = &g_495;
    uint32_t *l_781 = &g_82;
    (*g_495) = p_51;
    (*l_768) = l_767;
    (*g_175) = (((safe_mod_func_int16_t_s_s((safe_add_func_int8_t_s_s(((**l_768) & 0xC8L), ((9UL != 1UL) < ((*l_781) = (((+p_51) | (safe_sub_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(p_51, (0L != ((safe_rshift_func_uint8_t_u_u(((0UL & (!(0x670520B6L != (**l_768)))) != (*l_767)), (**l_768))) & 0x14L)))), g_102))) ^ (**l_768)))))), p_51)) , p_51) ^ 250UL);
    for (g_330 = 10; (g_330 == 29); g_330 = safe_add_func_uint32_t_u_u(g_330, 1))
    {
        (*l_768) = (*l_768);
    }
    return p_51;
}
static int32_t func_56(const int16_t p_57, int32_t * p_58)
{
    uint16_t *l_68 = &g_69;
    uint16_t **l_70 = &l_68;
    int32_t l_73 = 0x7E942FAFL;
    uint32_t *l_198 = &g_82;
    int32_t **l_497 = &g_175;
    int32_t *l_754 = (void*)0;
    int32_t *l_755 = (void*)0;
    int32_t *l_756 = &l_73;
    (*l_497) = func_59(p_57, ((*l_497) = func_62((*p_58), ((*l_70) = l_68), p_57, g_37, (2L && (0xB7L != ((0x0BL | (((*l_198) = func_71((p_57 == l_73))) >= l_73)) >= 0L))))));
    (*l_756) = (safe_add_func_int32_t_s_s((*p_58), ((*g_175) = (**l_497))));
    return (*p_58);
}
static int32_t * func_59(int16_t p_60, int32_t * const p_61)
{
    uint16_t **l_513 = &g_123;
    uint16_t **l_514 = &g_123;
    int32_t l_515 = 8L;
    int32_t l_551 = 0x95F55AF5L;
    int16_t l_552 = 6L;
    int32_t l_621 = 0xD0581368L;
    int32_t l_647 = 0L;
    uint32_t l_666 = 4294967295UL;
    uint8_t **l_687 = &g_261;
    uint32_t **l_743 = &g_370;
    uint32_t ***l_744 = &l_743;
    uint32_t **l_747 = &g_370;
    uint32_t ***l_746 = &l_747;
    int32_t *l_748 = (void*)0;
    int32_t *l_749 = &l_621;
    int32_t *l_750 = (void*)0;
    int32_t *l_751 = &l_551;
    for (g_129 = 0; (g_129 != 39); ++g_129)
    {
        uint16_t l_500 = 65529UL;
        int32_t l_505 = 0xD0B17C0AL;
        int16_t l_532 = 0xA118L;
        uint16_t ***l_612 = &g_122;
        uint32_t *l_620 = &g_37;
        int32_t **l_648 = &g_419;
        uint16_t *****l_734 = (void*)0;
        const int32_t l_735 = 0x3C6F8139L;
        if (l_500)
            break;
        for (p_60 = 6; (p_60 != 20); ++p_60)
        {
            int32_t *l_510 = &g_78;
            const int8_t **l_686 = (void*)0;
            const uint16_t *l_689 = &g_127;
            const int32_t l_711 = (-4L);
            int32_t *l_722 = (void*)0;
            if (((*l_510) = ((safe_sub_func_int8_t_s_s(((l_505 = p_60) || (safe_sub_func_int8_t_s_s(p_60, ((((safe_add_func_int32_t_s_s(((**g_260) > ((g_332 , l_510) == l_510)), (safe_mod_func_uint8_t_u_u((((l_513 = l_513) != l_514) == ((*g_123) >= l_515)), (*l_510))))) ^ l_500) < l_515) == (*g_175))))), l_500)) == p_60)))
            {
                for (g_37 = (-21); (g_37 >= 52); g_37 = safe_add_func_uint8_t_u_u(g_37, 2))
                {
                    int8_t *l_522 = &g_330;
                    int32_t l_523 = 5L;
                    int32_t l_526 = 0xBBCC50A4L;
                    uint8_t *l_533 = (void*)0;
                    uint8_t *l_534 = &g_453;
                    (*l_510) = (((((*l_510) & (safe_mod_func_int8_t_s_s(((*l_522) = (safe_lshift_func_uint16_t_u_u(0x7515L, 2))), l_523))) == ((safe_rshift_func_uint8_t_u_s((g_435 = (((((l_526 = (*l_510)) <= (+l_505)) > (0x7CB4998AL ^ (*p_61))) , 0x2EL) == ((*l_534) = (safe_mod_func_uint32_t_u_u(((safe_lshift_func_int8_t_s_s((l_532 ^ 1UL), 5)) , g_102), 4294967289UL))))), 4)) ^ 0x0900L)) <= l_532) == 0x8DA0L);
                }
            }
            else
            {
                uint8_t l_550 = 247UL;
                int32_t l_591 = 0x8FC2E053L;
                (*l_510) = (&g_161 != (void*)0);
                if ((((safe_rshift_func_uint8_t_u_u((((*l_510) = ((((((((safe_lshift_func_int8_t_s_s((l_515 = (((**g_125) = ((safe_unary_minus_func_uint8_t_u(0xE9L)) , ((safe_sub_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_s(0x4FF2L, 1)) , ((void*)0 == &l_514)), ((p_60 ^ l_515) >= (safe_rshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_u(g_37, 13)), ((safe_sub_func_uint8_t_u_u(2UL, (g_102 > (*g_495)))) , 0x1CL)))))) || (*l_510)))) | 0xA724L)), 7)) , l_550) <= 0x38BEL) , (**g_260)) < p_60) == l_532) != l_551) < p_60)) , 0xE9L), (*g_261))) != l_552) | (***g_149)))
                {
                    int8_t *l_555 = &g_332;
                    uint8_t *l_558 = &g_435;
                    int32_t *l_564 = (void*)0;
                    int32_t *l_565 = &l_551;
                    int32_t **l_566 = &g_419;
                    uint16_t *l_588 = &g_127;
                    uint32_t *l_589 = &g_196;
                    int8_t *l_590 = &g_330;
                    (*l_565) = ((safe_add_func_uint16_t_u_u((((*g_495) = (0x56L | ((*l_555) = 0x93L))) , (((p_60 | ((***g_149) , (safe_sub_func_int8_t_s_s(((((((*l_558) = 9UL) >= p_60) | 0x2216D8CAL) != ((+(l_552 & (((safe_sub_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((-8L), 10)), (**g_260))) != g_161) < 65531UL))) < (-8L))) || (*l_510)), 0x5AL)))) != p_60) && g_161)), 3L)) != 0xB5ED8E83L);
                    (*l_566) = p_61;
                    for (g_78 = 0; (g_78 <= 1); g_78++)
                    {
                        if ((*g_495))
                            break;
                    }
                    (*l_565) = ((safe_add_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(((safe_lshift_func_int8_t_s_s((l_591 = (((*l_590) = ((p_60 | (g_161 == (((*l_589) = (p_60 && ((((*l_588) = (((**l_566) = ((*l_558) = (((*l_555) = (((((((*g_123) = (safe_lshift_func_int16_t_s_u(((((0x642AL == 0x128AL) < (*g_151)) < (safe_rshift_func_uint8_t_u_u(((**g_150) >= ((safe_lshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((+(p_60 , (safe_add_func_int32_t_s_s((*g_175), (*p_61))))), (**l_566))), 4)) != 0UL)), (**g_260)))) <= 3L), l_515))) || 0L) || 0x49FFL) > 0x9FL) , 0x44FAL) != 0x3F3DL)) == 8UL))) ^ p_60)) == g_129) >= l_505))) & l_550))) || (*l_510))) > p_60)), p_60)) && 0x63C96B18L), p_60)), g_161)) ^ p_60);
                }
                else
                {
                    (*l_510) = 3L;
                }
                (*g_495) = 0xB35768BBL;
            }
            for (l_532 = (-7); (l_532 >= 14); l_532++)
            {
                int16_t *l_598 = (void*)0;
                int16_t *l_599 = &g_161;
                uint16_t *** const l_613 = &g_125;
                int32_t l_650 = 0xC336B4B5L;
                int32_t l_710 = 0x2453D6ACL;
                uint16_t ***l_714 = &l_514;
            }
            (*g_175) = (((safe_mod_func_uint32_t_u_u(0x590158AEL, (safe_mod_func_uint32_t_u_u(((g_332 <= p_60) & (safe_lshift_func_int16_t_s_u((+(((((**g_125) = (((safe_sub_func_uint8_t_u_u(((l_647 >= l_621) == (safe_sub_func_int16_t_s_s((((1L != (p_60 >= ((l_551 = ((g_129 , ((void*)0 != l_734)) <= 1UL)) , (**g_260)))) >= 1L) , g_129), l_735))), 0xE5L)) | 0x9EL) , l_515)) > (*l_510)) & 0UL) | p_60)), p_60))), g_605)))) ^ (-1L)) >= p_60);
        }
    }
    (*l_751) = (l_666 >= ((*l_749) = ((*p_61) = (safe_sub_func_uint32_t_u_u(((*p_61) != 0xE16D2DC1L), ((p_60 <= p_60) , ((safe_rshift_func_uint16_t_u_s(((~(((**g_260) = (((((((*l_746) = (g_745 = ((*l_744) = (((!0xAAL) == (&g_150 != g_742)) , l_743)))) == &g_370) ^ 0x10L) & l_647) , g_127) , 252UL)) || p_60)) || 0x9E1C7512L), 7)) , 6L)))))));
    return &g_78;
}
static int32_t * func_62(int32_t p_63, uint16_t * p_64, uint16_t p_65, uint16_t p_66, int32_t p_67)
{
    const int32_t l_206 = 0x1CC493F2L;
    int16_t * const l_207 = (void*)0;
    int32_t **l_281 = &g_175;
    int32_t l_287 = (-1L);
    int32_t *l_372 = &g_3;
    int32_t l_404 = 0x72917E55L;
    int8_t **l_439 = (void*)0;
    uint8_t **l_447 = &g_261;
    int8_t *l_450 = &g_330;
    int32_t *l_492 = &l_287;
    int32_t *l_494 = &l_404;
    int32_t *l_496 = &g_78;
    for (g_82 = 0; (g_82 == 45); g_82 = safe_add_func_int16_t_s_s(g_82, 4))
    {
        int32_t l_205 = 0xC837B64FL;
        int16_t l_241 = 0x613DL;
        const int32_t l_255 = (-1L);
        const uint16_t l_288 = 6UL;
        int32_t l_306 = 1L;
        int32_t *l_336 = &g_78;
        uint8_t l_436 = 0x10L;
        if (((*g_175) = ((*p_64) && (p_65 , (((safe_mod_func_uint32_t_u_u((g_196 = ((0xD6L == ((!(&g_161 != ((!l_205) , &g_161))) ^ (6UL ^ (l_206 && ((((&g_161 == l_207) , (-2L)) && l_206) , 0xE8L))))) || (*g_175))), g_161)) == 0L) , (-7L))))))
        {
            int32_t **l_208 = (void*)0;
            int32_t **l_209 = (void*)0;
            int32_t **l_210 = &g_175;
            (*l_210) = &p_63;
        }
        else
        {
            uint32_t * const l_211 = &g_102;
            uint32_t *l_212 = (void*)0;
            uint32_t **l_213 = &l_212;
            int32_t l_214 = 0x1AF41016L;
            int8_t l_240 = 0x97L;
            (*g_175) = p_66;
            if ((p_65 <= ((l_211 != ((*l_213) = l_212)) <= l_214)))
            {
                for (g_69 = 0; (g_69 >= 59); g_69++)
                {
                    int8_t l_238 = 0x39L;
                    int8_t *l_242 = &l_238;
                    int16_t *l_243 = &l_241;
                    int32_t **l_248 = &g_175;
                    (*g_175) = ((safe_lshift_func_uint16_t_u_s(((safe_lshift_func_uint8_t_u_u(0xDEL, (p_63 < ((1UL < (safe_add_func_int16_t_s_s((0x18A6L > ((*l_243) = (((safe_lshift_func_int8_t_s_u(((*l_242) = ((safe_sub_func_int8_t_s_s((safe_sub_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s((+((safe_mod_func_int16_t_s_s(l_205, 0x4E8CL)) && (((safe_rshift_func_uint8_t_u_u((((safe_sub_func_uint32_t_u_u((l_238 | (+(((((l_205 = ((*l_213) == (void*)0)) < p_63) ^ 0L) , g_196) && 0xE3L))), 8UL)) <= 0x45L) ^ l_206), 6)) < p_63) | 4294967295UL))), l_240)), p_65)), 249UL)) != l_241)), 1)) , g_37) ^ 0x63L))), 0xCFC6L))) , 0x68EAD141L)))) && (-1L)), 13)) && g_69);
                    for (p_63 = 22; (p_63 != (-10)); p_63 = safe_sub_func_int8_t_s_s(p_63, 2))
                    {
                        int32_t **l_246 = (void*)0;
                        int32_t **l_247 = &g_175;
                        (*l_247) = &p_63;
                        (*l_247) = &l_214;
                    }
                    (*l_248) = &p_63;
                }
            }
            else
            {
                int16_t l_251 = (-9L);
                int32_t l_258 = 3L;
                uint16_t *l_259 = &g_127;
                uint8_t ***l_262 = &g_260;
                (*g_175) = (((*l_259) = (safe_mod_func_uint8_t_u_u((l_251 == (l_258 = ((((*g_123) != l_251) && ((((*g_151) > ((((*p_64) = 0x5CF6L) && (*p_64)) != ((safe_unary_minus_func_int8_t_s((safe_rshift_func_uint16_t_u_u((0xEAL <= l_255), 6)))) , ((((safe_add_func_uint8_t_u_u((g_196 != 0UL), g_102)) & l_206) > l_240) , g_82)))) != 0L) , 247UL)) , 254UL))), 0x22L))) & l_214);
                (*l_262) = g_260;
                (*g_175) = 1L;
            }
        }
        (*g_175) = p_67;
        for (p_65 = (-29); (p_65 < 57); p_65 = safe_add_func_int32_t_s_s(p_65, 2))
        {
            uint16_t l_280 = 1UL;
            int32_t l_286 = 0x964B614FL;
            uint32_t *l_302 = &g_37;
            uint32_t *l_303 = &g_196;
            uint32_t *l_304 = (void*)0;
            uint32_t *l_305 = &g_104;
            int16_t *l_307 = &l_241;
            int32_t *l_334 = &l_287;
            int32_t *l_349 = &g_3;
            int32_t *l_416 = (void*)0;
            uint16_t *l_423 = (void*)0;
            uint8_t **l_446 = &g_261;
            uint8_t *l_448 = &l_436;
            uint8_t *l_449 = &g_435;
            int8_t **l_451 = &l_450;
            uint8_t *l_452 = &g_453;
            uint16_t *l_460 = &g_127;
            const int32_t ***l_461 = (void*)0;
            const int32_t **l_464 = (void*)0;
            const int32_t ***l_463 = &l_464;
            const int32_t ****l_462 = &l_463;
            int32_t *l_469 = &l_404;
        }
    }
    for (p_67 = 8; (p_67 == 29); p_67++)
    {
        int32_t * const l_472 = &g_78;
        int32_t **l_473 = &g_419;
        (*l_473) = l_472;
    }
    if (((**l_281) = p_66))
    {
        int32_t *l_477 = (void*)0;
        if ((*l_372))
        {
            int32_t **l_474 = (void*)0;
            int32_t **l_475 = (void*)0;
            int32_t **l_476 = &g_419;
            l_477 = ((*l_476) = ((*l_281) = &p_63));
            (*l_281) = (*l_476);
        }
        else
        {
            uint32_t **l_482 = &g_370;
            int16_t *l_483 = &g_161;
            uint8_t ***l_489 = &g_260;
            uint8_t ****l_488 = &l_489;
            int32_t l_490 = (-8L);
            (*l_281) = &p_63;
            l_490 = ((*l_372) || (safe_add_func_uint8_t_u_u(((((*l_483) = (safe_lshift_func_uint8_t_u_u(((void*)0 != l_482), 2))) >= (safe_lshift_func_int8_t_s_u((safe_add_func_int16_t_s_s((7L == p_63), ((((((p_63 , 9UL) , ((*l_488) = &g_260)) == &g_260) ^ 0UL) | p_66) ^ 0xC6L))), 4))) == 0x12DCL), 0x90L)));
            (*g_175) = p_63;
        }
        (*l_281) = &p_63;
    }
    else
    {
        int32_t *l_491 = &l_404;
        int32_t *l_493 = &l_287;
        return g_495;
    }
    return l_496;
}
static uint32_t func_71(uint16_t p_72)
{
    const int32_t *l_74 = &g_3;
    const int32_t **l_75 = &l_74;
    int32_t l_76 = (-2L);
    int32_t *l_77 = &g_78;
    uint32_t *l_81 = &g_82;
    uint16_t *l_100 = &g_69;
    uint16_t **l_99 = &l_100;
    uint32_t *l_101 = &g_102;
    uint32_t *l_103 = &g_104;
    int32_t l_105 = 0xCDB7CFF1L;
    int8_t l_130 = 0xE2L;
    int8_t *l_181 = &l_130;
    int8_t **l_180 = &l_181;
    uint16_t **l_195 = &g_123;
    (*l_75) = l_74;
    (*l_77) = (l_76 = ((*l_74) ^ ((void*)0 != &g_3)));
    if ((p_72 & (safe_mod_func_int32_t_s_s(((((*l_81) = p_72) , 1UL) , (safe_add_func_int8_t_s_s((safe_lshift_func_int16_t_s_u((safe_mod_func_int16_t_s_s(0x9538L, ((safe_add_func_uint8_t_u_u((((((((g_3 && ((((*l_77) = (((safe_mod_func_int32_t_s_s((((((*l_103) = ((*l_81) = ((safe_mod_func_uint16_t_u_u(p_72, (safe_mod_func_uint16_t_u_u(p_72, ((((*l_101) = ((p_72 && (safe_lshift_func_int8_t_s_u(((l_99 = ((4294967291UL < g_3) , (void*)0)) != (void*)0), (*l_74)))) < 0x5CCCL)) , g_37) && 8UL))))) , p_72))) , 9L) < l_105) ^ 0L), 5L)) <= 1UL) || g_69)) | 1L) && g_78)) && p_72) < 0x68E5B495L) == (**l_75)) , (*l_77)) != 0x8272L) , 0UL), 5UL)) | 0xBEL))), g_69)), 0xC4L))), p_72))))
    {
        int32_t l_107 = 0x4C0A206EL;
        uint16_t ***l_124 = (void*)0;
        uint16_t *l_126 = &g_127;
        uint8_t *l_128 = &g_129;
        int8_t *l_131 = &l_130;
        uint32_t l_162 = 0x61754165L;
        (*l_77) = ((((l_107 = (g_106 == (void*)0)) , g_106) != g_106) > (safe_sub_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((*l_74), p_72)), p_72)));
        if ((g_3 == ((((*l_131) = (safe_lshift_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_u(((*l_128) = (safe_rshift_func_int16_t_s_s(g_69, ((0x0DEE2C54L < ((((safe_sub_func_int32_t_s_s((g_122 == (g_125 = &g_123)), (&g_102 == &g_102))) > ((*l_126) = (65535UL > 0xCBABL))) || 0x3F29L) <= 249UL)) <= (*l_77))))), g_102)) & g_102), l_130)), (*g_123)))) , g_82) & 0x63L)))
        {
            uint16_t ***l_134 = &g_122;
            int32_t l_135 = (-6L);
            int8_t *l_137 = &l_130;
            int8_t **l_138 = &l_137;
            (*l_77) = (0x2A12L || (g_37 == (safe_lshift_func_int16_t_s_s((((*l_134) = &l_100) == (void*)0), ((-4L) & ((l_135 == (g_136 != ((*l_138) = l_137))) & p_72))))));
        }
        else
        {
            int16_t l_141 = 0xF3D1L;
            int32_t l_155 = 2L;
            int16_t *l_159 = &l_141;
            int16_t *l_160 = &g_161;
            int32_t ***l_173 = &g_106;
            int8_t **l_194 = &l_131;
            (*l_77) = (safe_lshift_func_int16_t_s_u((g_69 | ((((*l_126) = (l_141 ^ (((safe_unary_minus_func_int32_t_s((((*l_128) = (((safe_lshift_func_int8_t_s_u((g_104 == l_107), l_107)) , (((((((safe_mod_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((l_107 & (l_124 != g_149)), 1)), l_141)) , p_72) < g_37) < l_141) >= (*l_77)) , (void*)0) != &l_131)) != 0xF6L)) != (*l_77)))) <= l_141) && 1L))) && (*l_74)) < (-9L))), 13));
            (*l_77) = (((p_72 | (!(255UL && (p_72 <= g_37)))) , p_72) , (((safe_lshift_func_int8_t_s_s((l_155 = ((*l_131) = (-7L))), l_107)) | ((((*l_160) = ((*l_159) = (((1UL > (~(safe_add_func_uint32_t_u_u((l_107 & l_107), l_141)))) & p_72) < p_72))) > l_162) , 65534UL)) ^ p_72));
            (*g_175) = (safe_rshift_func_uint16_t_u_u((((l_107 < (safe_sub_func_int32_t_s_s((((*g_123) = (safe_sub_func_uint8_t_u_u(l_162, ((*l_128) = (g_161 != ((((-9L) ^ (((*l_173) = g_106) != (g_174 = (void*)0))) == ((l_131 == &g_129) < ((p_72 != l_107) , (-7L)))) ^ p_72)))))) , l_107), 0xC4757C61L))) != p_72) >= p_72), 3));
            (*l_77) = (safe_rshift_func_int16_t_s_s((+(p_72 , p_72)), ((((*l_128) = ((!(((*l_81) = ((l_180 != &l_181) != ((l_162 , ((*l_103) = (safe_mod_func_int8_t_s_s((g_196 = (safe_rshift_func_uint16_t_u_s((((safe_add_func_uint16_t_u_u(((*l_100) = p_72), ((safe_mod_func_int32_t_s_s((((safe_add_func_uint16_t_u_u((&g_78 == ((((((((safe_add_func_uint8_t_u_u(((l_194 != &l_181) >= 0x86L), g_102)) , (void*)0) == &l_162) >= g_37) <= p_72) | (**l_75)) != 0xC04A76FCL) , &g_3)), 0xDBB9L)) , (void*)0) == l_195), g_82)) , l_162))) >= p_72) || 1UL), 4))), g_3)))) <= 0L))) > (*l_74))) || 0xC1CCL)) , (***g_149)) >= 65535UL)));
        }
    }
    else
    {
        int32_t l_197 = (-3L);
        l_197 = 0xD408D08FL;
    }
    return g_82;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_3;
    csmith_sink_ = g_37;
    csmith_sink_ = g_40;
    csmith_sink_ = g_69;
    csmith_sink_ = g_78;
    csmith_sink_ = g_82;
    csmith_sink_ = g_102;
    csmith_sink_ = g_104;
    csmith_sink_ = g_127;
    csmith_sink_ = g_129;
    csmith_sink_ = g_161;
    csmith_sink_ = g_196;
    csmith_sink_ = g_330;
    csmith_sink_ = g_332;
    csmith_sink_ = g_435;
    csmith_sink_ = g_453;
    csmith_sink_ = g_605;
    csmith_sink_ = g_668;
    csmith_sink_ = g_707;
    csmith_sink_ = g_764;
    csmith_sink_ = g_822;
    csmith_sink_ = g_861;
    csmith_sink_ = g_869;
    csmith_sink_ = g_969;
    csmith_sink_ = g_977;
    csmith_sink_ = g_995;
    csmith_sink_ = g_1004;
    csmith_sink_ = g_1087;
    csmith_sink_ = g_1384;
    platform_main_end(0,0);
    return 0;
}
