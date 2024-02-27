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
struct S0 {
   int8_t f0;
   int16_t f1;
   uint32_t f2;
};
static int8_t g_7 = 5L;
static int32_t g_42 = 0x3D97867AL;
static int32_t **g_65 = (void*)0;
static int32_t ** const *g_64 = &g_65;
static uint32_t g_67 = 4294967294UL;
static uint16_t g_78 = 0UL;
static uint16_t g_80 = 0x8A5FL;
static uint16_t g_84 = 0xA1ABL;
static int32_t g_86 = (-1L);
static struct S0 g_87 = {1L,0L,0x7338D581L};
static int32_t *g_90 = &g_42;
static int16_t g_91 = 0x3979L;
static uint32_t g_145 = 0xAE71BBE2L;
static uint8_t g_164 = 0xFEL;
static const int16_t *g_189 = (void*)0;
static int8_t g_214 = 0xB6L;
static struct S0 *g_224 = &g_87;
static struct S0 **g_223 = &g_224;
static uint8_t g_281 = 1UL;
static int8_t g_341 = 0x46L;
static int32_t *g_346 = &g_42;
static uint32_t g_373 = 4294967295UL;
static uint8_t g_374 = 0xB3L;
static const uint16_t *g_391 = &g_84;
static const uint16_t **g_390 = &g_391;
static const uint16_t ***g_389 = &g_390;
static uint8_t *g_458 = &g_374;
static uint8_t **g_457 = &g_458;
static int32_t * const **g_535 = (void*)0;
static int32_t g_570 = (-6L);
static int32_t *** const g_593 = (void*)0;
static int32_t *** const *g_592 = &g_593;
static int32_t *** const **g_591 = &g_592;
static uint8_t *g_601 = &g_374;
static struct S0 g_679 = {0x78L,0x3E6EL,18446744073709551615UL};
static uint32_t ***g_683 = (void*)0;
static uint32_t ****g_682 = &g_683;
static uint8_t ***g_711 = &g_457;
static uint8_t ****g_710 = &g_711;
static uint8_t ***g_752 = (void*)0;
static int32_t ***g_754 = &g_65;
static uint32_t g_784 = 0x55DF994CL;
static int32_t *g_855 = (void*)0;
static uint8_t *****g_909 = (void*)0;
static uint8_t * const *g_923 = &g_458;
static uint8_t * const **g_922 = &g_923;
static uint8_t * const ***g_921 = &g_922;
static uint8_t * const ****g_920 = &g_921;
static uint8_t * const ****g_925 = (void*)0;
static const int32_t g_944 = (-1L);
inline static int16_t func_1(void);
static int32_t * func_2(int32_t p_3, int32_t p_4, int32_t p_5);
inline static int16_t func_12(uint32_t p_13, int32_t * const ** p_14, int32_t p_15, uint32_t p_16, uint32_t p_17);
inline static int32_t * const ** func_18(int32_t p_19, uint32_t p_20, int32_t *** p_21, const int32_t ** p_22, int32_t *** p_23);
static struct S0 func_24(int32_t *** p_25, int32_t *** p_26, int32_t p_27, uint8_t p_28, uint32_t p_29);
inline static int32_t *** func_32(uint16_t p_33, uint16_t p_34);
static int32_t func_35(int32_t * p_36, const uint32_t p_37, int32_t p_38, int32_t p_39, int32_t p_40);
inline static int32_t func_51(uint32_t p_52, int32_t ** const * p_53, int32_t p_54, int32_t * const * p_55);
inline static int32_t *** func_56(uint16_t p_57, int8_t p_58, uint32_t p_59);
inline static uint16_t func_60(uint16_t p_61);
inline static int16_t func_1(void)
{
    int32_t l_6 = 0x62E08974L;
    int32_t *l_885 = &l_6;
    uint8_t **l_888 = &g_601;
    uint16_t *l_890 = &g_80;
    uint16_t * const *l_889 = &l_890;
    int8_t l_895 = (-8L);
    int32_t ***l_915 = &g_65;
    struct S0 * const l_934 = &g_87;
    const int32_t *l_945 = (void*)0;
    l_885 = func_2(l_6, l_6, g_7);
    ((void) sizeof ((g_90 == 0 || g_90 == &g_42) ? 1 : 0), __extension__ ({ if (g_90 == 0 || g_90 == &g_42) ; else __assert_fail ("g_90 == 0 || g_90 == &g_42", "/tmp/tmpk1wtdnex.c", 108, __extension__ __PRETTY_FUNCTION__); }));
    ((void) sizeof ((l_885 == &g_42) ? 1 : 0), __extension__ ({ if (l_885 == &g_42) ; else __assert_fail ("l_885 == &g_42", "/tmp/tmpk1wtdnex.c", 109, __extension__ __PRETTY_FUNCTION__); }));
    for (g_91 = 0; (g_91 >= 27); ++g_91)
    {
        uint16_t **l_891 = &l_890;
        int32_t l_894 = 0x77C1605EL;
        uint32_t *l_899 = &g_87.f2;
        uint32_t **l_898 = &l_899;
    }
    return (*l_885);
}
static int32_t * func_2(int32_t p_3, int32_t p_4, int32_t p_5)
{
    int32_t **l_31 = (void*)0;
    int32_t ***l_30 = &l_31;
    uint8_t * const **l_492 = (void*)0;
    uint32_t *****l_719 = &g_682;
    struct S0 l_774 = {0x88L,5L,18446744073709551610UL};
    struct S0 *l_816 = &g_87;
    struct S0 ** const *l_854 = &g_223;
    struct S0 ** const **l_853 = &l_854;
    struct S0 *l_880 = &l_774;
    int32_t *l_884 = &g_42;
    for (p_5 = 28; (p_5 >= (-1)); p_5 = safe_sub_func_int16_t_s_s(p_5, 1))
    {
        int32_t **l_11 = (void*)0;
        int32_t ***l_10 = &l_11;
        int32_t l_493 = 0xCF85484AL;
        struct S0 *l_495 = &g_87;
        const int32_t *l_497 = &l_493;
        const int32_t **l_496 = &l_497;
        int16_t *l_688 = &g_679.f1;
        uint32_t ***l_729 = (void*)0;
        uint8_t *l_744 = &g_374;
        struct S0 ***l_790 = (void*)0;
        uint16_t *l_820 = &g_78;
        uint16_t **l_819 = &l_820;
        int32_t l_843 = 4L;
        int8_t l_845 = 0L;
        (*l_10) = (void*)0;
    }
    (*l_880) = ((***l_854) = (****l_853));
    for (g_374 = 23; (g_374 != 13); --g_374)
    {
        int32_t **l_883 = &g_90;
        (*l_883) = &p_5;
        ((void) sizeof ((g_90 == &p_5) ? 1 : 0), __extension__ ({ if (g_90 == &p_5) ; else __assert_fail ("g_90 == &p_5", "/tmp/tmpk1wtdnex.c", 162, __extension__ __PRETTY_FUNCTION__); }));
        (*l_883) = (void*)0;
        ((void) sizeof ((g_90 == 0) ? 1 : 0), __extension__ ({ if (g_90 == 0) ; else __assert_fail ("g_90 == 0", "/tmp/tmpk1wtdnex.c", 165, __extension__ __PRETTY_FUNCTION__); }));
    }
    ((void) sizeof ((g_90 == 0 || g_90 == &g_42) ? 1 : 0), __extension__ ({ if (g_90 == 0 || g_90 == &g_42) ; else __assert_fail ("g_90 == 0 || g_90 == &g_42", "/tmp/tmpk1wtdnex.c", 168, __extension__ __PRETTY_FUNCTION__); }));
    return l_884;
}
inline static int16_t func_12(uint32_t p_13, int32_t * const ** p_14, int32_t p_15, uint32_t p_16, uint32_t p_17)
{
    uint32_t *****l_684 = &g_682;
    uint32_t *****l_685 = (void*)0;
    uint32_t ****l_687 = &g_683;
    uint32_t *****l_686 = &l_687;
    (*l_686) = ((*l_684) = g_682);
    return p_15;
}
inline static int32_t * const ** func_18(int32_t p_19, uint32_t p_20, int32_t *** p_21, const int32_t ** p_22, int32_t *** p_23)
{
    int32_t *l_498 = &g_86;
    struct S0 l_551 = {0x96L,0L,0xA0AAD10DL};
    int32_t *l_571 = &g_86;
    int32_t ** const **l_587 = &g_64;
    uint8_t *l_599 = &g_281;
    uint16_t l_615 = 0x7374L;
    uint16_t *l_623 = &g_84;
    uint16_t **l_622 = &l_623;
    uint32_t *l_626 = &g_373;
    int32_t * const *l_643 = &l_571;
    int32_t * const **l_642 = &l_643;
    uint8_t **l_647 = &g_458;
    int32_t *l_655 = &g_86;
    int32_t ***l_678 = &g_65;
    (*p_22) = l_498;
    for (p_20 = 0; (p_20 != 12); ++p_20)
    {
        uint8_t ***l_514 = &g_457;
        int32_t l_520 = 0L;
        uint8_t ** const * const l_521 = &g_457;
        int32_t * const *l_534 = &g_90;
        int32_t * const **l_533 = &l_534;
        struct S0 l_594 = {-5L,0x5C6DL,0xF5346B59L};
        int32_t *l_595 = (void*)0;
        int32_t l_602 = (-1L);
        const uint8_t l_617 = 255UL;
        int32_t l_618 = (-5L);
        if ((*l_498))
            break;
        for (g_86 = (-22); (g_86 == 9); ++g_86)
        {
            uint32_t l_524 = 0x9F3F2C7FL;
            const struct S0 l_525 = {0xEAL,1L,0xC74E96E2L};
            int32_t *** const *l_590 = (void*)0;
            int32_t *** const **l_589 = &l_590;
            uint32_t *l_614 = &g_373;
            int32_t *l_616 = &l_520;
            for (g_91 = 0; (g_91 <= (-25)); g_91 = safe_sub_func_uint32_t_u_u(g_91, 1))
            {
                struct S0 ***l_505 = &g_223;
                uint8_t ****l_515 = (void*)0;
                uint8_t ****l_516 = (void*)0;
                uint8_t ****l_517 = &l_514;
                const uint32_t l_522 = 0UL;
                uint16_t *l_523 = &g_84;
                int32_t *l_526 = (void*)0;
                int32_t *l_527 = &g_42;
                int32_t l_549 = 0L;
                int32_t ***l_554 = &g_65;
                struct S0 *l_598 = &l_551;
                uint8_t **l_600 = &l_599;
                if (((*l_527) = ((&p_19 == l_498) | ((l_505 != (((safe_add_func_int16_t_s_s((((-9L) || ((g_341 ^ (safe_rshift_func_int16_t_s_u((safe_mod_func_uint8_t_u_u(((g_78 = ((*l_523) = (safe_rshift_func_uint8_t_u_s((((((*g_458) , ((*g_391) < (((*l_517) = l_514) == ((safe_mod_func_int8_t_s_s(l_520, p_19)) , l_521)))) | l_522) <= 0x1956L) > l_522), l_522)))) || p_20), 0xD6L)), p_19))) < 0x962FL)) && (*l_498)), l_524)) , l_525) , &g_223)) > p_19))))
                {
                    uint32_t *l_529 = &g_87.f2;
                    uint32_t * const *l_528 = &l_529;
                    uint32_t * const **l_530 = &l_528;
                    int32_t * const *l_532 = (void*)0;
                    int32_t * const **l_531 = &l_532;
                    (*l_530) = l_528;
                    return g_535;
                }
                else
                {
                    uint32_t l_548 = 1UL;
                    struct S0 l_550 = {0x89L,0x9B64L,0x6CD2A6ACL};
                    struct S0 ****l_552 = (void*)0;
                    struct S0 ****l_553 = &l_505;
                    int32_t ****l_555 = &l_554;
                    uint32_t ** const l_566 = (void*)0;
                    uint32_t ** const *l_565 = &l_566;
                    uint32_t ** const **l_564 = &l_565;
                    int8_t *l_567 = (void*)0;
                    int8_t *l_568 = (void*)0;
                    int8_t *l_569 = &g_7;
                    for (p_19 = 16; (p_19 < (-21)); p_19--)
                    {
                        uint32_t *l_543 = &g_145;
                        uint8_t *l_544 = (void*)0;
                        uint8_t *l_545 = (void*)0;
                        uint8_t *l_546 = &g_164;
                        int32_t l_547 = 0xA43EBCEDL;
                        l_549 = ((((void*)0 == &g_223) > (((safe_add_func_uint32_t_u_u(p_20, ((*l_527) = (safe_add_func_int16_t_s_s((((((((+(*g_458)) && ((*g_458) = (5UL > l_525.f1))) >= ((*l_543) = p_19)) == p_20) > ((*l_546) = (0xEACAL ^ 65526UL))) <= l_547) == p_20), l_548))))) != 0L) , g_373)) > p_19);
                        (*p_22) = &l_547;
                        l_551 = l_550;
                    }
                    if ((((*l_553) = &g_223) != (l_525 , (void*)0)))
                    {
                        int32_t ** const ***l_588 = &l_587;
                        (*p_22) = l_571;
                        (*p_22) = (*p_22);
                        l_551 = l_525;
                        (*p_22) = l_595;
                    }
                    else
                    {
                        struct S0 l_596 = {0x9CL,0x72DBL,0x4764E136L};
                        struct S0 *l_597 = &l_550;
                        (*l_527) = 0L;
                        (*l_597) = l_596;
                        (*p_22) = &g_86;
                        (*l_527) = (-2L);
                    }
                }
                (*l_598) = l_551;
                l_549 = ((g_78 || ((l_525 , 0x0FL) == (0xF31AL < (p_19 | ((((-9L) < (*l_527)) , ((((((*l_527) = (-6L)) , ((*l_600) = l_599)) != g_601) , l_602) > p_19)) || (*g_391)))))) & p_19);
            }
            l_594 = l_551;
            l_618 = (((*g_458) = (p_20 | p_20)) , (((((0x86L <= ((safe_add_func_int8_t_s_s((((safe_sub_func_int16_t_s_s(0x072CL, (*l_498))) | (((((((*l_571) >= ((*l_616) = (l_615 = (+(((p_19 >= l_524) || (safe_lshift_func_int8_t_s_s((((*l_614) = (safe_mod_func_uint16_t_u_u(((((safe_add_func_uint32_t_u_u(((((((((*g_458) != g_281) || p_20) == 0x4DL) < p_20) , p_19) || 0xA32F2236L) > (*l_571)), g_78)) == p_20) & 0x72L) && (**g_390)), p_20))) <= g_78), 5))) <= p_20))))) , 0x639AL) | p_19) | 0xB2FE15CDL) == g_145) == (*l_498))) ^ 251UL), (*g_601))) > l_617)) | (*l_498)) < p_19) || 8L) || g_84));
            (*l_616) = (((g_67 = (((void*)0 != &g_341) != (((6UL == ((g_281 != ((g_91 == (p_20 & p_20)) == 0xADL)) != (&g_164 != (void*)0))) && g_84) || (**g_390)))) , (***g_389)) <= p_20);
        }
        for (l_551.f0 = 5; (l_551.f0 < (-11)); l_551.f0 = safe_sub_func_int16_t_s_s(l_551.f0, 6))
        {
            int32_t * const **l_621 = &l_534;
            return g_535;
        }
    }
    if ((((((*l_622) = &g_80) == (*g_390)) > (-8L)) & ((((((((0UL > (safe_sub_func_uint8_t_u_u((((((*l_571) | (((((p_20 <= ((*l_626) = p_19)) || (safe_add_func_int16_t_s_s((0x960EL & (safe_sub_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_u((0x0A4E6D2AL != p_20), 6)) || p_19), (***g_389)))), 0xDD41L))) < p_19) & 1UL) || (*l_498))) < (*l_498)) > g_86) != 0x5841A13FL), g_7))) & (*l_571)) , g_145) > p_19) < p_19) > (*l_498)) & p_19) < p_19)))
    {
        if (((*l_498) = ((255UL >= (safe_rshift_func_int16_t_s_s(p_19, 7))) , (safe_lshift_func_uint8_t_u_u((((*g_223) = (void*)0) != &l_551), 5)))))
        {
lbl_639:
            (*l_498) = (*l_571);
        }
        else
        {
            int32_t * const *l_641 = &l_498;
            int32_t * const **l_640 = &l_641;
            for (g_87.f0 = (-11); (g_87.f0 > 26); g_87.f0++)
            {
                if (p_19)
                    goto lbl_639;
            }
            return g_535;
        }
    }
    else
    {
        int32_t *l_644 = &g_86;
        (*p_22) = l_644;
    }
    ((void) sizeof ((l_623 == &g_80) ? 1 : 0), __extension__ ({ if (l_623 == &g_80) ; else __assert_fail ("l_623 == &g_80", "/tmp/tmpk1wtdnex.c", 363, __extension__ __PRETTY_FUNCTION__); }));
    for (p_20 = 28; (p_20 < 16); p_20--)
    {
        uint8_t ***l_648 = &l_647;
        int32_t *l_658 = &g_42;
        int32_t l_677 = 0x37576D89L;
        (*l_648) = l_647;
        for (g_373 = 10; (g_373 >= 41); g_373++)
        {
            uint32_t l_667 = 18446744073709551615UL;
            struct S0 *l_680 = (void*)0;
            struct S0 *l_681 = &g_87;
            (*p_22) = (*p_22);
            for (g_42 = (-11); (g_42 <= 28); g_42 = safe_add_func_int8_t_s_s(g_42, 8))
            {
                int32_t *l_656 = (void*)0;
                for (l_551.f2 = (-19); (l_551.f2 != 52); l_551.f2++)
                {
                    int32_t *l_657 = &g_86;
                    l_657 = (l_656 = l_655);
                    ((void) sizeof ((l_656 == &g_86) ? 1 : 0), __extension__ ({ if (l_656 == &g_86) ; else __assert_fail ("l_656 == &g_86", "/tmp/tmpk1wtdnex.c", 384, __extension__ __PRETTY_FUNCTION__); }));
                }
                ((void) sizeof ((l_656 == &g_86 || l_656 == 0) ? 1 : 0), __extension__ ({ if (l_656 == &g_86 || l_656 == 0) ; else __assert_fail ("l_656 == &g_86 || l_656 == 0", "/tmp/tmpk1wtdnex.c", 387, __extension__ __PRETTY_FUNCTION__); }));
                l_571 = l_658;
                ((void) sizeof ((l_571 == &g_42) ? 1 : 0), __extension__ ({ if (l_571 == &g_42) ; else __assert_fail ("l_571 == &g_42", "/tmp/tmpk1wtdnex.c", 390, __extension__ __PRETTY_FUNCTION__); }));
            }
            (*l_681) = g_679;
        }
    }
    ((void) sizeof ((l_571 == &g_42 || l_571 == &g_86) ? 1 : 0), __extension__ ({ if (l_571 == &g_42 || l_571 == &g_86) ; else __assert_fail ("l_571 == &g_42 || l_571 == &g_86", "/tmp/tmpk1wtdnex.c", 396, __extension__ __PRETTY_FUNCTION__); }));
    return g_535;
}
static struct S0 func_24(int32_t *** p_25, int32_t *** p_26, int32_t p_27, uint8_t p_28, uint32_t p_29)
{
    struct S0 l_494 = {-3L,0xA73DL,0x831F8AEBL};
    (*g_224) = l_494;
    (*g_223) = (void*)0;
    ((void) sizeof ((g_224 == 0) ? 1 : 0), __extension__ ({ if (g_224 == 0) ; else __assert_fail ("g_224 == 0", "/tmp/tmpk1wtdnex.c", 414, __extension__ __PRETTY_FUNCTION__); }));
    return l_494;
}
inline static int32_t *** func_32(uint16_t p_33, uint16_t p_34)
{
    int32_t *l_41 = &g_42;
    const uint16_t l_43 = 0xBE26L;
    const uint32_t l_48 = 0xD9E96BB6L;
    uint32_t *l_66 = &g_67;
    int32_t l_68 = 0x1B27067DL;
    int32_t ***l_395 = &g_65;
    uint16_t l_396 = 2UL;
    int32_t *l_488 = &l_68;
    int32_t **l_489 = &l_41;
    (*g_224) = (((*l_488) = func_35(l_41, l_43, ((safe_rshift_func_uint8_t_u_u((safe_add_func_int32_t_s_s((((p_33 , ((l_48 , (safe_sub_func_int32_t_s_s(0xB6652F09L, func_51(((g_7 , func_56(func_60((((((*l_66) = ((*l_41) = ((safe_sub_func_int16_t_s_s(0x416DL, p_33)) , ((void*)0 != g_64)))) == l_43) & l_68) && 0x499CL)), p_34, p_33)) != l_395), l_395, p_33, (*l_395))))) , 0x80L)) , 0x0EL) ^ g_341), l_396)), 1)) , p_34), p_33, p_33)) , (**g_223));
    ((void) sizeof ((g_189 == 0 || g_189 == &g_91) ? 1 : 0), __extension__ ({ if (g_189 == 0 || g_189 == &g_91) ; else __assert_fail ("g_189 == 0 || g_189 == &g_91", "/tmp/tmpk1wtdnex.c", 438, __extension__ __PRETTY_FUNCTION__); }));
    (*l_489) = l_41;
    return &g_65;
}
static int32_t func_35(int32_t * p_36, const uint32_t p_37, int32_t p_38, int32_t p_39, int32_t p_40)
{
    struct S0 **l_401 = &g_224;
    int32_t l_403 = 0x9EFDA9F7L;
    int32_t l_422 = 0x18C485DBL;
    uint8_t *l_447 = (void*)0;
    uint8_t **l_446 = &l_447;
    uint32_t *l_484 = &g_87.f2;
    uint32_t **l_485 = (void*)0;
    uint32_t **l_486 = &l_484;
    int32_t l_487 = 0xFE9CAD12L;
    (*g_346) = (*p_36);
    for (g_67 = 0; (g_67 == 17); g_67++)
    {
        int32_t * const l_399 = &g_86;
        int32_t **l_400 = &g_346;
        struct S0 **l_402 = &g_224;
        uint16_t * const *l_419 = (void*)0;
        int32_t **l_429 = &g_90;
        (*l_400) = l_399;
        ((void) sizeof ((g_346 == &g_86) ? 1 : 0), __extension__ ({ if (g_346 == &g_86) ; else __assert_fail ("g_346 == &g_86", "/tmp/tmpk1wtdnex.c", 474, __extension__ __PRETTY_FUNCTION__); }));
        if (((l_401 != l_402) , l_403))
        {
            uint16_t *l_420 = &g_84;
            uint16_t *l_421 = &g_78;
            uint32_t *l_423 = &g_145;
            int32_t l_424 = 0x29A9F4B6L;
            for (g_91 = 9; (g_91 != (-23)); g_91 = safe_sub_func_uint8_t_u_u(g_91, 8))
            {
                for (g_341 = (-24); (g_341 <= 22); ++g_341)
                {
                }
                (*g_346) = (*p_36);
                (*l_400) = &p_40;
                ((void) sizeof ((g_346 == &p_40) ? 1 : 0), __extension__ ({ if (g_346 == &p_40) ; else __assert_fail ("g_346 == &p_40", "/tmp/tmpk1wtdnex.c", 489, __extension__ __PRETTY_FUNCTION__); }));
            }
            ((void) sizeof ((g_346 == &p_40 || g_346 == &g_86) ? 1 : 0), __extension__ ({ if (g_346 == &p_40 || g_346 == &g_86) ; else __assert_fail ("g_346 == &p_40 || g_346 == &g_86", "/tmp/tmpk1wtdnex.c", 492, __extension__ __PRETTY_FUNCTION__); }));
            if (((l_424 = (((p_40 < (p_38 || (((safe_lshift_func_int8_t_s_u(p_38, 3)) && ((**g_223) , ((*l_423) = (p_40 < (((safe_sub_func_uint16_t_u_u(((*l_421) = (l_403 = ((*l_420) = (safe_rshift_func_int8_t_s_s((((((safe_sub_func_uint8_t_u_u((*l_399), ((safe_sub_func_int16_t_s_s(p_38, (*g_391))) <= 0x5A6DB96EL))) & 0x5479BA9DL) == 255UL) , (*g_389)) == l_419), p_37))))), l_422)) || (*l_399)) > g_42))))) ^ p_39))) & 65534UL) , 0xB826L)) > p_39))
            {
                struct S0 ***l_427 = &l_401;
                struct S0 ****l_428 = &l_427;
                const uint8_t **l_430 = (void*)0;
                uint8_t *l_445 = &g_281;
                uint8_t **l_444 = &l_445;
                uint8_t ***l_459 = &l_446;
                int8_t *l_462 = &g_214;
                if ((*p_36))
                    break;
                if ((l_424 = ((*l_399) = ((((g_87.f2 , ((((*p_36) || ((((safe_mod_func_int32_t_s_s((&l_402 == ((*l_428) = l_427)), 0x65DE9853L)) , (*g_64)) == ((**g_223) , l_429)) | (**g_390))) , (void*)0) == l_430)) & p_38) >= p_38) , (-5L)))))
                {
                    int16_t *l_441 = &g_87.f1;
                    int32_t *l_450 = (void*)0;
                    for (g_373 = 0; (g_373 >= 4); g_373 = safe_add_func_int32_t_s_s(g_373, 4))
                    {
                        (*l_400) = &p_40;
                        ((void) sizeof ((g_346 == &p_40) ? 1 : 0), __extension__ ({ if (g_346 == &p_40) ; else __assert_fail ("g_346 == &p_40", "/tmp/tmpk1wtdnex.c", 512, __extension__ __PRETTY_FUNCTION__); }));
                    }
                    (*p_36) = ((safe_mod_func_uint32_t_u_u((safe_unary_minus_func_uint32_t_u((+247UL))), (safe_lshift_func_int16_t_s_u(((*l_441) = (safe_lshift_func_uint16_t_u_s(0x70D7L, 4))), 3)))) && (((*l_420) = ((l_424 = ((g_164 > ((((safe_sub_func_int32_t_s_s((*p_36), ((**l_400) = (*p_36)))) & ((((l_446 = l_444) != &l_447) , ((p_38 , &g_64) != (void*)0)) == 0UL)) != g_78) || 1UL)) | p_37)) != p_38)) ^ 0x70D1L));
                    ((void) sizeof ((l_446 == &l_447 || l_446 == &g_458 || l_446 == &l_445) ? 1 : 0), __extension__ ({ if (l_446 == &l_447 || l_446 == &g_458 || l_446 == &l_445) ; else __assert_fail ("l_446 == &l_447 || l_446 == &g_458 || l_446 == &l_445", "/tmp/tmpk1wtdnex.c", 516, __extension__ __PRETTY_FUNCTION__); }));
                    for (g_84 = 0; (g_84 <= 53); g_84++)
                    {
                        l_450 = &l_424;
                        ((void) sizeof ((l_450 == &l_424) ? 1 : 0), __extension__ ({ if (l_450 == &l_424) ; else __assert_fail ("l_450 == &l_424", "/tmp/tmpk1wtdnex.c", 521, __extension__ __PRETTY_FUNCTION__); }));
                    }
                    ((void) sizeof ((l_450 == &l_424 || l_450 == 0) ? 1 : 0), __extension__ ({ if (l_450 == &l_424 || l_450 == 0) ; else __assert_fail ("l_450 == &l_424 || l_450 == 0", "/tmp/tmpk1wtdnex.c", 524, __extension__ __PRETTY_FUNCTION__); }));
                    (*l_400) = &p_38;
                    ((void) sizeof ((g_346 == &p_38) ? 1 : 0), __extension__ ({ if (g_346 == &p_38) ; else __assert_fail ("g_346 == &p_38", "/tmp/tmpk1wtdnex.c", 527, __extension__ __PRETTY_FUNCTION__); }));
                }
                else
                {
                    return g_80;
                }
                ((void) sizeof ((g_346 == &p_38) ? 1 : 0), __extension__ ({ if (g_346 == &p_38) ; else __assert_fail ("g_346 == &p_38", "/tmp/tmpk1wtdnex.c", 537, __extension__ __PRETTY_FUNCTION__); }));
                ((void) sizeof ((l_446 == &l_447 || l_446 == &g_458 || l_446 == &l_445) ? 1 : 0), __extension__ ({ if (l_446 == &l_447 || l_446 == &g_458 || l_446 == &l_445) ; else __assert_fail ("l_446 == &l_447 || l_446 == &g_458 || l_446 == &l_445", "/tmp/tmpk1wtdnex.c", 538, __extension__ __PRETTY_FUNCTION__); }));
                (*p_36) = ((l_422 != (safe_lshift_func_int16_t_s_s(p_40, p_37))) != ((((((safe_mod_func_uint8_t_u_u(((safe_mod_func_uint8_t_u_u((((((g_457 = &l_447) != ((*l_459) = &g_458)) | ((*l_423) = ((((((**g_389) == (void*)0) < ((((safe_add_func_int8_t_s_s(((l_403 = (0x5E88L ^ (((*l_462) = g_86) & 0xD4L))) == p_40), l_422)) < p_39) ^ l_422) | p_39)) & l_422) != 0x42F22EB9L) , p_40))) ^ 0x09L) <= 0L), g_87.f0)) ^ g_91), g_86)) && l_403) | 1UL) >= 0UL) || g_91) < p_40));
                ((void) sizeof ((l_446 == &g_458) ? 1 : 0), __extension__ ({ if (l_446 == &g_458) ; else __assert_fail ("l_446 == &g_458", "/tmp/tmpk1wtdnex.c", 541, __extension__ __PRETTY_FUNCTION__); }));
                ((void) sizeof ((g_457 == &l_447) ? 1 : 0), __extension__ ({ if (g_457 == &l_447) ; else __assert_fail ("g_457 == &l_447", "/tmp/tmpk1wtdnex.c", 542, __extension__ __PRETTY_FUNCTION__); }));
            }
            else
            {
                for (l_424 = 0; (l_424 > 4); l_424 = safe_add_func_uint32_t_u_u(l_424, 8))
                {
                    int32_t l_467 = 0x73DC26DDL;
                    struct S0 l_470 = {-6L,-9L,0xE580B17CL};
                    for (l_403 = 0; (l_403 < (-27)); --l_403)
                    {
                        (*l_400) = &p_38;
                        ((void) sizeof ((g_346 == &p_38) ? 1 : 0), __extension__ ({ if (g_346 == &p_38) ; else __assert_fail ("g_346 == &p_38", "/tmp/tmpk1wtdnex.c", 554, __extension__ __PRETTY_FUNCTION__); }));
                        (*l_400) = &p_38;
                        if (l_467)
                            continue;
                    }
                    for (g_373 = 21; (g_373 != 33); g_373 = safe_add_func_int8_t_s_s(g_373, 3))
                    {
                        (**l_402) = l_470;
                        if ((*p_36))
                            break;
                    }
                }
                ((void) sizeof ((g_346 == &p_38 || g_346 == &p_40 || g_346 == &g_86) ? 1 : 0), __extension__ ({ if (g_346 == &p_38 || g_346 == &p_40 || g_346 == &g_86) ; else __assert_fail ("g_346 == &p_38 || g_346 == &p_40 || g_346 == &g_86", "/tmp/tmpk1wtdnex.c", 567, __extension__ __PRETTY_FUNCTION__); }));
            }
            ((void) sizeof ((g_346 == &p_38 || g_346 == &p_40 || g_346 == &g_86) ? 1 : 0), __extension__ ({ if (g_346 == &p_38 || g_346 == &p_40 || g_346 == &g_86) ; else __assert_fail ("g_346 == &p_38 || g_346 == &p_40 || g_346 == &g_86", "/tmp/tmpk1wtdnex.c", 570, __extension__ __PRETTY_FUNCTION__); }));
            (*p_36) = 0x1273016CL;
            (*g_346) = (*g_346);
        }
        else
        {
            (*l_429) = &p_40;
            ((void) sizeof ((g_90 == &p_40) ? 1 : 0), __extension__ ({ if (g_90 == &p_40) ; else __assert_fail ("g_90 == &p_40", "/tmp/tmpk1wtdnex.c", 578, __extension__ __PRETTY_FUNCTION__); }));
            return g_87.f2;
        }
        ((void) sizeof ((g_346 == &p_38 || g_346 == &p_40 || g_346 == &g_86) ? 1 : 0), __extension__ ({ if (g_346 == &p_38 || g_346 == &p_40 || g_346 == &g_86) ; else __assert_fail ("g_346 == &p_38 || g_346 == &p_40 || g_346 == &g_86", "/tmp/tmpk1wtdnex.c", 585, __extension__ __PRETTY_FUNCTION__); }));
        for (p_39 = 27; (p_39 <= (-30)); p_39 = safe_sub_func_uint8_t_u_u(p_39, 6))
        {
            uint8_t *l_473 = &g_281;
            (*g_346) = ((*g_457) == l_473);
        }
    }
    ((void) sizeof ((g_346 == &p_38 || g_346 == &p_40 || g_346 == &g_86 || g_346 == &g_42) ? 1 : 0), __extension__ ({ if (g_346 == &p_38 || g_346 == &p_40 || g_346 == &g_86 || g_346 == &g_42) ; else __assert_fail ("g_346 == &p_38 || g_346 == &p_40 || g_346 == &g_86 || g_346 == &g_42", "/tmp/tmpk1wtdnex.c", 593, __extension__ __PRETTY_FUNCTION__); }));
    ((void) sizeof ((l_446 == &l_447 || l_446 == &g_458) ? 1 : 0), __extension__ ({ if (l_446 == &l_447 || l_446 == &g_458) ; else __assert_fail ("l_446 == &l_447 || l_446 == &g_458", "/tmp/tmpk1wtdnex.c", 594, __extension__ __PRETTY_FUNCTION__); }));
    ((void) sizeof ((g_457 == &g_458 || g_457 == &l_447) ? 1 : 0), __extension__ ({ if (g_457 == &g_458 || g_457 == &l_447) ; else __assert_fail ("g_457 == &g_458 || g_457 == &l_447", "/tmp/tmpk1wtdnex.c", 595, __extension__ __PRETTY_FUNCTION__); }));
    g_90 = &l_422;
    ((void) sizeof ((g_90 == &l_422) ? 1 : 0), __extension__ ({ if (g_90 == &l_422) ; else __assert_fail ("g_90 == &l_422", "/tmp/tmpk1wtdnex.c", 598, __extension__ __PRETTY_FUNCTION__); }));
    (*g_90) = (safe_sub_func_int32_t_s_s(((**g_223) , (*g_346)), ((*p_36) && ((safe_mod_func_int32_t_s_s((l_487 = ((g_67 | (safe_rshift_func_uint16_t_u_s(((l_403 = g_341) , (((((*g_458) = p_39) , (safe_rshift_func_int8_t_s_s((-1L), ((safe_rshift_func_int8_t_s_s(((((((*l_486) = (g_87.f2 , l_484)) == (void*)0) != 0x76151B11L) , l_403) > 251UL), 7)) >= 0x5ECCFE28L)))) >= (*g_346)) & (*g_90))), p_37))) == (*p_36))), g_86)) , l_403))));
    return l_422;
}
inline static int32_t func_51(uint32_t p_52, int32_t ** const * p_53, int32_t p_54, int32_t * const * p_55)
{
    return (*g_346);
}
inline static int32_t *** func_56(uint16_t p_57, int8_t p_58, uint32_t p_59)
{
    int32_t ***l_111 = &g_65;
    uint32_t *l_114 = &g_67;
    int16_t *l_115 = &g_91;
    int16_t *l_116 = &g_87.f1;
    int32_t *l_133 = &g_86;
    struct S0 l_142 = {0x5CL,3L,5UL};
    uint16_t *l_143 = &g_80;
    uint32_t *l_144 = &g_145;
    const uint16_t l_146 = 1UL;
    uint8_t *l_180 = &g_164;
    int16_t *l_190 = (void*)0;
    uint16_t l_192 = 65535UL;
    const int16_t l_239 = 0xBB48L;
    struct S0 ***l_240 = &g_223;
    uint32_t l_263 = 0x1DF1B902L;
    uint8_t **l_295 = &l_180;
    uint8_t ***l_294 = &l_295;
    int16_t l_313 = 0x6BBBL;
    int32_t ***l_327 = &g_65;
    int32_t l_330 = (-3L);
    uint16_t l_376 = 0x1938L;
lbl_167:
    for (g_87.f2 = 13; (g_87.f2 != 26); ++g_87.f2)
    {
        int32_t *l_110 = &g_42;
        l_110 = l_110;
        return l_111;
    }
    if ((safe_rshift_func_int16_t_s_s(((((*l_116) = ((*l_115) = (&g_67 != l_114))) < ((((*l_144) = (safe_mod_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(g_84, ((*l_143) = (safe_add_func_int8_t_s_s((safe_mod_func_int16_t_s_s(g_42, (safe_add_func_uint32_t_u_u(((*l_114) = ((((((((safe_mod_func_uint32_t_u_u((((safe_lshift_func_uint8_t_u_u(((((safe_sub_func_uint8_t_u_u((((*l_133) = p_58) & ((+(+(((safe_sub_func_int8_t_s_s((l_133 != l_133), (safe_lshift_func_int8_t_s_s(p_57, 4)))) < ((safe_rshift_func_uint16_t_u_s(((l_142 , 5L) > g_42), 4)) , (*g_90))) | g_87.f0))) > 0x02L)), g_67)) && 0x0AA60CB9L) , g_7) <= p_57), 2)) , 0x4FF7D934L) , g_80), 0x54D2AC32L)) && 0UL) && p_57) <= g_87.f2) >= g_7) < g_7) != 0L) && (*l_133))), 0x63885E37L)))), 0x79L))))), p_59))) != g_87.f0) , (-1L))) || l_146), 0)))
    {
        int32_t *l_150 = &g_42;
        const uint8_t *l_201 = &g_164;
        int16_t l_241 = 0x8C59L;
        if ((safe_sub_func_int32_t_s_s(p_58, g_67)))
        {
            struct S0 *l_149 = &g_87;
            int32_t **l_151 = &l_133;
            (*l_149) = g_87;
            (*g_90) = p_57;
            (*l_151) = l_150;
            ((void) sizeof ((l_133 == &g_42) ? 1 : 0), __extension__ ({ if (l_133 == &g_42) ; else __assert_fail ("l_133 == &g_42", "/tmp/tmpk1wtdnex.c", 669, __extension__ __PRETTY_FUNCTION__); }));
        }
        else
        {
            uint32_t *l_154 = &g_67;
            int32_t l_161 = (-1L);
            struct S0 l_174 = {-8L,0L,0x96BB96E4L};
            int32_t ***l_179 = &g_65;
            uint8_t *l_193 = (void*)0;
            if ((safe_lshift_func_uint16_t_u_s(65535UL, 1)))
            {
                int16_t l_162 = 0x310DL;
                struct S0 l_200 = {9L,4L,7UL};
                const int32_t * const l_216 = &l_161;
                const int32_t * const *l_215 = &l_216;
                int32_t *l_218 = &g_42;
                uint8_t **l_220 = &l_193;
                if (((((*l_144) = (0x85D1L || 0xFD70L)) , l_154) != (void*)0))
                {
                    return &g_65;
                }
                else
                {
                    struct S0 l_166 = {0x64L,-1L,1UL};
                    if ((*g_90))
                    {
                        uint8_t *l_163 = &g_164;
                        struct S0 *l_165 = (void*)0;
                        l_150 = l_144;
                        ((void) sizeof ((l_150 == &g_145) ? 1 : 0), __extension__ ({ if (l_150 == &g_145) ; else __assert_fail ("l_150 == &g_145", "/tmp/tmpk1wtdnex.c", 701, __extension__ __PRETTY_FUNCTION__); }));
                        (*l_150) = (((*g_90) , (safe_add_func_int32_t_s_s((0xFF22B771L || ((safe_lshift_func_uint8_t_u_s((p_59 ^ 4294967295UL), 5)) | (((((*l_163) = ((safe_sub_func_uint32_t_u_u(0x6065F2B7L, (l_161 == ((((p_59 , (247UL > 250UL)) ^ 0x1060L) < g_87.f1) >= l_162)))) != p_59)) , &g_80) != (void*)0) , (*l_150)))), g_67))) < 0UL);
                        l_166 = g_87;
                    }
                    else
                    {
                        if (l_162)
                            goto lbl_167;
                        (*l_133) = p_57;
                    }
                    ((void) sizeof ((l_150 == &g_42 || l_150 == &g_145) ? 1 : 0), __extension__ ({ if (l_150 == &g_42 || l_150 == &g_145) ; else __assert_fail ("l_150 == &g_42 || l_150 == &g_145", "/tmp/tmpk1wtdnex.c", 712, __extension__ __PRETTY_FUNCTION__); }));
                }
                ((void) sizeof ((l_150 == &g_42 || l_150 == &g_145) ? 1 : 0), __extension__ ({ if (l_150 == &g_42 || l_150 == &g_145) ; else __assert_fail ("l_150 == &g_42 || l_150 == &g_145", "/tmp/tmpk1wtdnex.c", 715, __extension__ __PRETTY_FUNCTION__); }));
                for (g_87.f1 = 0; (g_87.f1 <= (-21)); g_87.f1 = safe_sub_func_uint8_t_u_u(g_87.f1, 7))
                {
                    (*l_133) = (*g_90);
                }
                for (g_87.f2 = 24; (g_87.f2 >= 42); g_87.f2++)
                {
                    uint8_t **l_181 = &l_180;
                    int8_t l_191 = 0x6CL;
                    struct S0 l_199 = {-6L,0x13ECL,0x3592EE31L};
                    const int32_t l_205 = 5L;
                    int32_t *l_219 = &l_161;
                    uint8_t ***l_221 = (void*)0;
                    uint8_t ***l_222 = &l_181;
                    for (p_58 = (-12); (p_58 > 14); ++p_58)
                    {
                        struct S0 *l_175 = (void*)0;
                        struct S0 *l_176 = (void*)0;
                        struct S0 *l_177 = &l_142;
                        int32_t **l_178 = &l_150;
                        (*l_177) = l_174;
                        (*l_178) = l_150;
                        return l_179;
                    }
                    if (((*l_133) = ((((*l_181) = l_180) == ((((l_111 != l_111) && (6L && (!0L))) < ((((safe_sub_func_int32_t_s_s((((((safe_mod_func_uint32_t_u_u(0xA7AFDC65L, 4294967295UL)) && (((safe_rshift_func_int8_t_s_s(((g_78 = 0x6D93L) ^ ((g_189 = &g_91) != l_190)), g_7)) | g_80) <= l_191)) , 1L) ^ l_192) < p_59), 0xCD91451FL)) , 247UL) ^ g_87.f1) > 2UL)) , l_193)) != p_57)))
                    {
                        struct S0 l_196 = {1L,-1L,1UL};
                        int8_t *l_210 = &l_142.f0;
                        l_200 = ((((((((0L <= (safe_sub_func_uint32_t_u_u(l_162, ((*l_150) = ((0x7AL ^ 255UL) ^ (((((((((*l_115) = ((l_196 , &g_67) == &g_145)) & ((((safe_add_func_int16_t_s_s(l_191, 0xC57CL)) >= p_57) , g_87.f2) ^ p_57)) == l_196.f2) , g_80) <= l_191) & 0x5A46787CL) >= 5UL) == g_80)))))) != 65529UL) & l_196.f2) == p_57) <= 0xB1117FE5L) < p_59) < 1L) , l_199);
                        if (p_57)
                            break;
                        (*l_133) = ((((void*)0 != l_201) || ((p_57 = ((!((*l_143) = g_91)) & ((((((((safe_sub_func_uint16_t_u_u(((3L | (((l_205 >= ((g_214 = ((*l_180) = (((((safe_rshift_func_int8_t_s_u((g_87.f0 = ((((safe_sub_func_uint32_t_u_u((((((*l_210) = 7L) || (+(safe_add_func_uint8_t_u_u(l_199.f1, g_87.f2)))) != (((*l_150) = (p_57 != 0x95L)) & 0xAC7EL)) , 0xD05F5F8CL), p_59)) == p_58) >= 0x85L) < p_59)), 0)) && p_58) && 7UL) == p_57) && (*l_150)))) <= g_67)) ^ g_7) < p_58)) >= p_57), g_84)) , p_57) || l_199.f2) == 0x9892L) | p_57) , p_58) , (void*)0) != l_215))) && p_57)) , (*l_150));
                    }
                    else
                    {
                        int32_t *l_217 = &l_161;
                        l_218 = l_217;
                        ((void) sizeof ((l_218 == &l_161) ? 1 : 0), __extension__ ({ if (l_218 == &l_161) ; else __assert_fail ("l_218 == &l_161", "/tmp/tmpk1wtdnex.c", 756, __extension__ __PRETTY_FUNCTION__); }));
                    }
                    g_90 = (g_87 , l_219);
                    ((void) sizeof ((g_90 == &l_161) ? 1 : 0), __extension__ ({ if (g_90 == &l_161) ; else __assert_fail ("g_90 == &l_161", "/tmp/tmpk1wtdnex.c", 760, __extension__ __PRETTY_FUNCTION__); }));
                    (*l_222) = l_220;
                    ((void) sizeof ((l_181 == &l_193) ? 1 : 0), __extension__ ({ if (l_181 == &l_193) ; else __assert_fail ("l_181 == &l_193", "/tmp/tmpk1wtdnex.c", 763, __extension__ __PRETTY_FUNCTION__); }));
                }
                ((void) sizeof ((g_90 == &l_161 || g_90 == &g_42) ? 1 : 0), __extension__ ({ if (g_90 == &l_161 || g_90 == &g_42) ; else __assert_fail ("g_90 == &l_161 || g_90 == &g_42", "/tmp/tmpk1wtdnex.c", 766, __extension__ __PRETTY_FUNCTION__); }));
                ((void) sizeof ((g_189 == 0 || g_189 == &g_91) ? 1 : 0), __extension__ ({ if (g_189 == 0 || g_189 == &g_91) ; else __assert_fail ("g_189 == 0 || g_189 == &g_91", "/tmp/tmpk1wtdnex.c", 767, __extension__ __PRETTY_FUNCTION__); }));
                ((void) sizeof ((l_218 == &l_161 || l_218 == &g_42) ? 1 : 0), __extension__ ({ if (l_218 == &l_161 || l_218 == &g_42) ; else __assert_fail ("l_218 == &l_161 || l_218 == &g_42", "/tmp/tmpk1wtdnex.c", 768, __extension__ __PRETTY_FUNCTION__); }));
            }
            else
            {
                struct S0 ***l_225 = &g_223;
                (*l_225) = g_223;
            }
            ((void) sizeof ((g_90 == &l_161 || g_90 == &g_42) ? 1 : 0), __extension__ ({ if (g_90 == &l_161 || g_90 == &g_42) ; else __assert_fail ("g_90 == &l_161 || g_90 == &g_42", "/tmp/tmpk1wtdnex.c", 776, __extension__ __PRETTY_FUNCTION__); }));
            ((void) sizeof ((l_150 == &g_42 || l_150 == &g_145) ? 1 : 0), __extension__ ({ if (l_150 == &g_42 || l_150 == &g_145) ; else __assert_fail ("l_150 == &g_42 || l_150 == &g_145", "/tmp/tmpk1wtdnex.c", 777, __extension__ __PRETTY_FUNCTION__); }));
            ((void) sizeof ((g_189 == 0 || g_189 == &g_91) ? 1 : 0), __extension__ ({ if (g_189 == 0 || g_189 == &g_91) ; else __assert_fail ("g_189 == 0 || g_189 == &g_91", "/tmp/tmpk1wtdnex.c", 778, __extension__ __PRETTY_FUNCTION__); }));
            l_241 = (((*g_90) = (((safe_add_func_uint16_t_u_u(((safe_sub_func_int8_t_s_s(g_145, (safe_mod_func_int16_t_s_s((p_58 && p_58), (*l_150))))) <= (((safe_rshift_func_int16_t_s_s((safe_add_func_int16_t_s_s((g_67 || (((((*l_114) = 0x57A2E974L) , &l_201) == &l_201) , ((safe_sub_func_uint32_t_u_u(((((*l_143) = (((!((((0L && (*l_133)) && g_145) >= (-4L)) > l_239)) , l_240) == &g_223)) || p_58) <= 0xE6L), 0x37A95C22L)) >= (*l_150)))), p_59)), 1)) , (void*)0) != (*l_179))), g_86)) | p_58) || p_58)) <= 0x08AE5EAEL);
        }
        ((void) sizeof ((l_133 == &g_86 || l_133 == &g_42) ? 1 : 0), __extension__ ({ if (l_133 == &g_86 || l_133 == &g_42) ; else __assert_fail ("l_133 == &g_86 || l_133 == &g_42", "/tmp/tmpk1wtdnex.c", 783, __extension__ __PRETTY_FUNCTION__); }));
        ((void) sizeof ((l_150 == &g_42 || l_150 == &g_145) ? 1 : 0), __extension__ ({ if (l_150 == &g_42 || l_150 == &g_145) ; else __assert_fail ("l_150 == &g_42 || l_150 == &g_145", "/tmp/tmpk1wtdnex.c", 784, __extension__ __PRETTY_FUNCTION__); }));
        ((void) sizeof ((g_189 == 0 || g_189 == &g_91) ? 1 : 0), __extension__ ({ if (g_189 == 0 || g_189 == &g_91) ; else __assert_fail ("g_189 == 0 || g_189 == &g_91", "/tmp/tmpk1wtdnex.c", 785, __extension__ __PRETTY_FUNCTION__); }));
    }
    else
    {
        uint16_t l_244 = 0xAD30L;
        for (g_164 = (-17); (g_164 >= 31); g_164 = safe_add_func_int16_t_s_s(g_164, 3))
        {
            (*g_90) = l_244;
            if ((*g_90))
                continue;
        }
        (**g_223) = (*g_224);
    }
    ((void) sizeof ((l_133 == &g_86 || l_133 == &g_42) ? 1 : 0), __extension__ ({ if (l_133 == &g_86 || l_133 == &g_42) ; else __assert_fail ("l_133 == &g_86 || l_133 == &g_42", "/tmp/tmpk1wtdnex.c", 800, __extension__ __PRETTY_FUNCTION__); }));
    ((void) sizeof ((g_189 == 0 || g_189 == &g_91) ? 1 : 0), __extension__ ({ if (g_189 == 0 || g_189 == &g_91) ; else __assert_fail ("g_189 == 0 || g_189 == &g_91", "/tmp/tmpk1wtdnex.c", 801, __extension__ __PRETTY_FUNCTION__); }));
    for (g_145 = (-6); (g_145 > 55); ++g_145)
    {
        int32_t *l_257 = &g_42;
        uint32_t l_304 = 0xB942CA0AL;
        struct S0 l_306 = {1L,4L,0UL};
        uint8_t *l_325 = &g_281;
        uint8_t ****l_336 = &l_294;
        int32_t ** const *l_337 = &g_65;
        uint16_t **l_382 = &l_143;
        uint16_t ***l_381 = &l_382;
        int32_t **l_394 = &l_257;
        for (g_164 = 29; (g_164 != 17); g_164--)
        {
            int8_t l_255 = 0x0CL;
            int32_t **l_256 = &g_90;
            uint32_t *l_268 = (void*)0;
            struct S0 ***l_290 = &g_223;
            struct S0 *l_326 = &l_306;
            uint8_t ****l_335 = &l_294;
            struct S0 l_369 = {0x5BL,-7L,18446744073709551615UL};
            int32_t l_377 = (-4L);
        }
        (**g_223) = l_306;
        (*l_257) = (((l_381 != (void*)0) && g_341) || (p_59 > (safe_lshift_func_int16_t_s_s(3L, (safe_sub_func_int8_t_s_s(p_58, (safe_rshift_func_int8_t_s_u((g_389 == &g_390), (safe_add_func_uint32_t_u_u(0UL, p_59))))))))));
        (*l_394) = (void*)0;
        ((void) sizeof ((l_257 == 0) ? 1 : 0), __extension__ ({ if (l_257 == 0) ; else __assert_fail ("l_257 == 0", "/tmp/tmpk1wtdnex.c", 828, __extension__ __PRETTY_FUNCTION__); }));
    }
    return l_111;
}
inline static uint16_t func_60(uint16_t p_61)
{
    int8_t l_69 = 0x93L;
    int32_t *l_72 = (void*)0;
    int32_t *l_73 = &g_42;
    int32_t ***l_76 = &g_65;
    uint16_t *l_77 = &g_78;
    uint16_t *l_79 = &g_80;
    uint16_t *l_83 = &g_84;
    int32_t *l_85 = &g_86;
    struct S0 *l_88 = &g_87;
    int32_t **l_89 = (void*)0;
    uint32_t *l_106 = &g_67;
    int16_t *l_107 = &g_87.f1;
    (*l_85) = ((((void*)0 == &g_65) == l_69) < (safe_add_func_int32_t_s_s(((*l_73) = 0x8B7DD145L), (p_61 | (safe_sub_func_uint8_t_u_u((((*l_79) = ((*l_77) = (l_76 == l_76))) && g_7), ((safe_mod_func_uint16_t_u_u(((*l_83) = g_67), p_61)) < 0x441147C0L)))))));
    (*l_88) = g_87;
    g_90 = l_73;
    ((void) sizeof ((g_90 == &g_42) ? 1 : 0), __extension__ ({ if (g_90 == &g_42) ; else __assert_fail ("g_90 == &g_42", "/tmp/tmpk1wtdnex.c", 859, __extension__ __PRETTY_FUNCTION__); }));
    (*l_85) = (g_91 ^ (0L | ((safe_lshift_func_int8_t_s_u(p_61, 1)) > (((*l_107) = (safe_rshift_func_uint8_t_u_s((safe_add_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((1L == (((((((((safe_mod_func_uint32_t_u_u(((*l_106) = (safe_mod_func_uint16_t_u_u(((((*l_88) , p_61) >= ((*l_85) >= (&l_89 != &g_65))) < g_7), 0x9150L))), g_84)) & g_87.f1) >= 0x0516A45AL) , &g_65) == (void*)0) , (*l_85)) , g_91) < p_61) <= g_87.f2)), 5)), g_80)), p_61))) & 1L))));
    return p_61;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_7;
    csmith_sink_ = g_42;
    csmith_sink_ = g_67;
    csmith_sink_ = g_78;
    csmith_sink_ = g_80;
    csmith_sink_ = g_84;
    csmith_sink_ = g_86;
    csmith_sink_ = g_87.f0;
    csmith_sink_ = g_87.f1;
    csmith_sink_ = g_87.f2;
    csmith_sink_ = g_91;
    csmith_sink_ = g_145;
    csmith_sink_ = g_164;
    csmith_sink_ = g_214;
    csmith_sink_ = g_281;
    csmith_sink_ = g_341;
    csmith_sink_ = g_373;
    csmith_sink_ = g_374;
    csmith_sink_ = g_570;
    csmith_sink_ = g_679.f0;
    csmith_sink_ = g_679.f1;
    csmith_sink_ = g_679.f2;
    csmith_sink_ = g_784;
    csmith_sink_ = g_944;
    platform_main_end(0,0);
    return 0;
}
