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
static int32_t g_2 = 0xFF0EA75C;
static int32_t g_15 = 0xE5C285CE;
static int32_t **g_23 = (void*)0;
static int32_t *g_150 = &g_15;
static int32_t **g_149 = &g_150;
static int32_t ***g_148 = &g_149;
static int16_t g_214 = 0x3262;
static int8_t g_221 = 1;
static int32_t ****g_296[9] = {&g_148,&g_148,&g_148,&g_148,&g_148,&g_148,&g_148,&g_148,&g_148};
static int32_t *****g_295 = &g_296[7];
static int32_t *****g_356[8] = {&g_296[7],&g_296[7],&g_296[7],&g_296[7],&g_296[7],&g_296[7],&g_296[7],&g_296[7]};
static int32_t g_367 = 1;
static int32_t *g_415 = &g_367;
static int32_t g_509 = (-1);
static int32_t *g_617 = &g_15;
static int32_t *g_631 = &g_15;
static uint32_t g_658 = 4294967295U;
static int32_t *g_661[4] = {&g_15,&g_15,&g_15,&g_15};
static int32_t *g_672 = &g_2;
static uint32_t g_748 = 0x141C0B50;
static uint32_t g_766 = 1U;
static uint32_t g_775 = 0x89145419;
static int16_t g_868 = 0;
static uint16_t g_1172 = 0xA3B8;
static int32_t *g_1215 = (void*)0;
static int16_t g_1234 = 0xC4C1;
static int32_t *g_1236 = (void*)0;
static uint16_t g_1248 = 9U;
static int32_t *g_1249 = &g_2;
static int32_t *g_1344[3] = {&g_15,&g_15,&g_15};
static int32_t *g_1377 = (void*)0;
static int32_t ****g_1450 = &g_148;
static int32_t *g_1464 = &g_2;
static uint32_t g_1496 = 1U;
static uint32_t g_1505 = 1U;
static uint32_t g_1538[6] = {0U,0U,0U,0U,0U,0U};
static uint32_t func_1(void);
inline static int32_t * func_5(int32_t * p_6, int32_t * p_7);
static int32_t * func_9(int32_t * p_10, uint8_t p_11);
static uint8_t func_24(int16_t p_25, int32_t * p_26, uint32_t p_27);
inline static int16_t func_32(int16_t p_33, int32_t * p_34);
inline static int32_t * func_35(uint32_t p_36, uint16_t p_37, int32_t ** p_38);
static int32_t * func_44(uint16_t p_45, int8_t p_46);
static uint16_t func_49(int32_t ** p_50, uint32_t p_51, int32_t * p_52, int8_t p_53);
inline static int32_t ** func_54(int32_t ** p_55, uint32_t p_56, int8_t p_57);
inline static int16_t func_62(int32_t * p_63, uint32_t p_64, uint32_t p_65, uint16_t p_66, int32_t ** p_67);
static uint32_t func_1(void)
{
    int32_t **l_1359[4][5] = {{&g_631,&g_631,&g_631,&g_631,&g_631},{&g_1236,&g_672,&g_1236,&g_672,&g_1236},{&g_631,&g_631,&g_631,&g_631,&g_631},{&g_1236,&g_672,&g_1236,&g_672,&g_1236}};
    int32_t *l_1413 = &g_15;
    int32_t ****l_1449 = &g_148;
    uint8_t l_1451 = 8U;
    uint16_t l_1458 = 0xCC45;
    uint32_t l_1468 = 1U;
    int8_t l_1479 = 0;
    uint32_t l_1517[2];
    int32_t *l_1572[4][9][7] = {{{&g_2,&g_367,&g_15,&g_367,&g_367,&g_367,&g_367},{&g_15,&g_2,&g_367,&g_15,&g_367,&g_15,&g_367},{&g_367,&g_367,&g_367,&g_367,&g_2,&g_15,&g_367},{&g_367,&g_367,&g_15,&g_2,&g_15,&g_15,&g_2},{&g_15,&g_367,&g_15,&g_367,&g_2,&g_15,&g_367},{&g_2,&g_367,&g_367,&g_367,&g_367,&g_367,&g_367},{(void*)0,&g_367,&g_367,(void*)0,&g_367,&g_15,&g_2},{&g_15,&g_367,&g_367,&g_15,&g_2,&g_15,&g_15},{&g_367,&g_2,&g_367,&g_2,&g_367,&g_15,&g_2}},{{(void*)0,&g_367,&g_15,&g_2,&g_367,&g_15,&g_367},{&g_367,&g_367,&g_15,&g_15,&g_367,&g_367,&g_367},{(void*)0,&g_2,&g_367,(void*)0,&g_367,&g_15,&g_2},{&g_367,&g_15,&g_367,&g_367,&g_367,&g_15,&g_367},{&g_15,&g_2,&g_15,&g_367,&g_367,&g_15,&g_367},{(void*)0,&g_367,&g_15,&g_2,&g_2,&g_15,&g_367},{&g_2,&g_367,&g_15,&g_367,&g_367,&g_367,&g_367},{&g_15,&g_2,&g_367,&g_15,&g_367,&g_15,&g_367},{&g_367,&g_367,&g_367,&g_367,&g_2,&g_15,&g_367}},{{&g_367,&g_367,&g_15,&g_2,&g_15,&g_15,&g_2},{&g_15,&g_367,&g_15,&g_367,&g_2,&g_15,&g_367},{&g_2,&g_367,&g_367,&g_367,&g_367,&g_367,&g_367},{(void*)0,&g_367,&g_367,(void*)0,&g_367,&g_15,&g_2},{&g_15,&g_367,&g_367,&g_15,&g_2,&g_15,&g_15},{&g_367,&g_2,&g_367,&g_2,&g_367,&g_15,&g_2},{(void*)0,&g_367,&g_15,&g_2,&g_367,&g_15,&g_367},{&g_367,&g_367,&g_15,&g_15,&g_367,&g_367,&g_367},{(void*)0,&g_2,&g_367,(void*)0,&g_367,&g_367,&g_15}},{{&g_367,&g_367,&g_15,&g_367,&g_15,&g_367,&g_367},{&g_367,&g_15,&g_15,&g_15,&g_367,&g_367,&g_15},{&g_15,&g_15,&g_367,&g_15,&g_15,&g_367,&g_15},{&g_15,&g_15,&g_15,&g_367,&g_15,&g_15,&g_15},{&g_367,&g_15,&g_15,&g_367,&g_15,&g_367,&g_15},{&g_367,&g_367,(void*)0,&g_367,&g_15,&g_2,&g_367},{&g_367,&g_15,&g_15,&g_15,&g_367,&g_367,&g_15},{&g_367,&g_15,&g_367,&g_15,&g_15,&g_367,&g_15},{&g_15,&g_15,&g_367,&g_367,&g_15,(void*)0,&g_15}}};
    uint16_t l_1575 = 0x374A;
    uint16_t l_1587 = 0xBA84;
    int32_t l_1618 = 1;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_1517[i] = 4294967289U;
    for (g_2 = 24; (g_2 != 27); ++g_2)
    {
        int32_t *l_8 = &g_2;
        uint32_t l_1370 = 7U;
        int32_t ****l_1405 = &g_148;
        uint32_t l_1482[10] = {0x6C46631D,0x6C46631D,0x6C46631D,0x6C46631D,0x6C46631D,0x6C46631D,0x6C46631D,0x6C46631D,0x6C46631D,0x6C46631D};
        uint8_t l_1491 = 5U;
        uint32_t l_1516[5];
        uint16_t l_1522 = 0xF5A7;
        uint8_t l_1525 = 255U;
        int i;
        for (i = 0; i < 5; i++)
            l_1516[i] = 0x22914A10;
        (**g_148) = func_5(l_8, l_8);
        for (g_15 = 8; (g_15 >= 0); g_15 -= 1)
        {
            int32_t *l_1351 = &g_15;
            int32_t ***l_1365[2];
            int32_t *l_1378 = (void*)0;
            int8_t l_1492 = 1;
            uint32_t l_1524 = 0U;
            uint32_t l_1549[1][3][9] = {{{0xD72B50D4,0U,0U,0U,0U,0xD72B50D4,0x1D880729,0U,0x1D880729},{0xD72B50D4,0U,0U,0U,0U,0xD72B50D4,0x1D880729,0U,0x1D880729},{0xD72B50D4,0U,0U,0U,0U,0xD72B50D4,0x1D880729,0U,0x1D880729}}};
            int32_t l_1630 = (-7);
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_1365[i] = &l_1359[1][0];
            (**g_148) = (void*)0;
            (**g_148) = l_1351;
            (**g_148) = func_35((safe_div_func_uint16_t_u_u((g_868 >= 0xD9), ((*g_1249) & (!(safe_add_func_int32_t_s_s((0xC2 <= g_868), ((((*g_148) == l_1359[1][0]) & (0x7D < (((safe_mod_func_uint32_t_u_u(((~((g_509 == g_15) >= (*l_8))) | 0x83), g_658)) | 0x05) && 246U))) > (*l_8)))))))), g_1234, (*g_148));
            if ((((((safe_mod_func_int16_t_s_s(((l_1365[1] == (void*)0) && (**g_149)), (-9))) | 0x1D) <= ((*l_1351) | ((*l_8) && (safe_add_func_uint8_t_u_u(g_2, ((safe_sub_func_uint32_t_u_u((((*g_1249) && (*l_1351)) > (*l_1351)), 0U)) == 3U)))))) <= l_1370) | 4294967290U))
            {
                uint8_t l_1384[1];
                int32_t *l_1397 = &g_367;
                uint16_t l_1408 = 4U;
                int32_t **l_1410 = &g_631;
                int i;
                for (i = 0; i < 1; i++)
                    l_1384[i] = 0xCF;
                if (((safe_sub_func_int16_t_s_s(g_766, (safe_rshift_func_uint8_t_u_s(((safe_sub_func_int8_t_s_s((g_1377 == l_1378), (safe_sub_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_s((~((*g_672) | l_1384[0])), 5)) != (safe_div_func_uint32_t_u_u((((safe_mod_func_uint32_t_u_u(((safe_add_func_uint8_t_u_u(g_2, (safe_sub_func_uint32_t_u_u((safe_div_func_uint16_t_u_u(g_2, 0x3600)), (safe_mod_func_int32_t_s_s((g_658 >= l_1384[0]), g_1172)))))) && g_748), g_1248)) ^ 4294967287U) == g_509), l_1384[0]))), g_748)))) == g_1234), g_766)))) >= (*l_8)))
                {
                    uint32_t l_1399 = 0x3E6D92DC;
                    l_1397 = l_8;
                    (***g_148) = (safe_unary_minus_func_int8_t_s((g_1172 ^ l_1399)));
                    for (g_509 = 2; (g_509 >= 0); g_509 -= 1)
                    {
                        int i;
                        if ((*l_1351))
                            break;
                    }
                }
                else
                {
                    uint32_t l_1400[2];
                    int32_t ****l_1406 = &g_148;
                    int32_t l_1414 = 9;
                    int32_t ***l_1438 = &l_1359[1][0];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1400[i] = 4294967286U;
                    if (l_1400[0])
                    {
                        int32_t l_1407 = 7;
                        (*l_1397) = (((((safe_div_func_int32_t_s_s((((((g_214 ^ (l_1405 == l_1406)) | (((****l_1406) ^ g_766) | l_1407)) ^ 0xB720) > ((void*)0 == (***l_1406))) <= l_1408), g_766)) != 0x474F) || (****l_1406)) || (-1)) == g_1234);
                        if ((*g_1249))
                            break;
                        return g_367;
                    }
                    else
                    {
                        if ((****l_1406))
                            break;
                        if ((*l_1397))
                            break;
                        (***l_1406) = func_35((~((**g_148) == (*g_149))), g_868, func_54(func_54(l_1410, (((((void*)0 == (*l_1406)) ^ (g_868 >= (safe_mod_func_int16_t_s_s((g_2 || (l_1413 != (void*)0)), (*l_8))))) > (*l_1413)) || 0xDCA21FD4), g_748), l_1414, g_214));
                    }
                    for (g_658 = 0; g_658 < 8; g_658 += 1)
                    {
                        g_356[g_658] = &g_296[7];
                    }
                    for (g_221 = 0; (g_221 >= 21); g_221++)
                    {
                        int32_t l_1417 = 8;
                        (*l_1410) = func_35(g_766, l_1417, func_54(func_54(&l_1397, (safe_add_func_int16_t_s_s((((g_367 | (****l_1406)) || (safe_sub_func_int32_t_s_s((*l_8), 9))) > (safe_mod_func_int32_t_s_s((0x38BD49BA && (safe_sub_func_int32_t_s_s((safe_lshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_s((&l_1417 != (void*)0), g_868)), 6)), (*g_415)))), (*l_8)))), g_748)), g_2), g_1172, (*l_1413)));
                        (**g_149) = ((safe_div_func_int8_t_s_s(((((((*l_1406) != l_1365[1]) ^ (safe_lshift_func_uint8_t_u_u((*l_1397), g_658))) & (safe_div_func_uint32_t_u_u(((safe_add_func_uint8_t_u_u(((void*)0 != l_1438), (safe_sub_func_uint32_t_u_u(((((safe_add_func_uint8_t_u_u(((**l_1410) ^ (0xB6433317 >= ((safe_add_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s((safe_sub_func_int16_t_s_s(((l_1449 != g_1450) < l_1451), 0x9CDB)), (*l_8))), (*l_8))) ^ g_775))), 0x1C)) != g_1248) || 0x99216D4B) & g_15), 0U)))) != 7), 0x9D46C758))) <= (-4)) < (****l_1449)), g_1248)) < (*l_1397));
                    }
                }
                return g_748;
            }
            else
            {
                int32_t *l_1454 = (void*)0;
                int8_t l_1478[10][7] = {{(-1),0,0,1,(-8),(-1),(-1)},{0xF1,2,0x5E,2,0xF1,6,2},{1,0,(-1),(-8),0,(-1),2},{0x37,0,0,0,0,0x37,(-1)},{1,(-8),1,1,2,0x72,(-8)},{0xF1,0,0x37,(-5),0x37,0,0xF1},{(-1),(-8),1,0,0,(-1),0},{2,0,0x06,2,2,0x06,0},{(-8),0,1,0x7F,0,0,2},{0x90,2,0x37,0x90,0,0x90,0x37}};
                int32_t l_1493 = 0;
                int32_t l_1515[9][5] = {{0xEC3BF4F3,0xEC3BF4F3,3,0xEC3BF4F3,0xEC3BF4F3},{0,0,0,0,0},{0xEC3BF4F3,0x02AE239A,0x02AE239A,0xEC3BF4F3,0x02AE239A},{0,0,(-1),0,0},{3,0x02AE239A,3,3,0x02AE239A},{0,(-1),(-1),0,(-1)},{0x02AE239A,0x02AE239A,0xEC3BF4F3,0x02AE239A,0x02AE239A},{(-1),0,(-1),(-1),0},{0x02AE239A,3,3,0x02AE239A,3}};
                int32_t ****l_1548[1][7][8] = {{{&l_1365[1],&l_1365[1],&l_1365[1],&l_1365[1],&g_148,&g_148,&g_148,&g_148},{&l_1365[1],&l_1365[1],&l_1365[1],&l_1365[1],&l_1365[1],&g_148,&l_1365[1],&g_148},{&g_148,&g_148,&g_148,(void*)0,(void*)0,&g_148,(void*)0,&l_1365[1]},{&g_148,&g_148,&l_1365[1],&l_1365[1],&g_148,&g_148,&g_148,&g_148},{&l_1365[1],&l_1365[1],&l_1365[1],&l_1365[1],&l_1365[1],&g_148,&g_148,&l_1365[1]},{(void*)0,&l_1365[1],&g_148,&g_148,&g_148,(void*)0,&g_148,&l_1365[1]},{&l_1365[1],&l_1365[1],&g_148,&l_1365[1],(void*)0,&g_148,&g_148,&g_148}}};
                uint32_t l_1579[6][5][7] = {{{1U,0xCEA51C3B,4294967294U,0U,0xDB6CF33E,0U,0U},{0x092BEAA9,0x5E249B5C,9U,4294967292U,1U,4294967289U,0xC02BE99A},{1U,1U,4294967294U,0x092BEAA9,4294967289U,0U,0U},{2U,4294967286U,1U,0U,0U,4294967292U,4294967294U},{0x4E1DE7B6,0x3926BAC5,0U,4294967295U,7U,0x4C6F0421,4294967294U}},{{9U,0U,0U,4294967294U,4294967294U,0U,0U},{1U,0x8DF67BA4,0x5E249B5C,4294967295U,4294967291U,4294967293U,0xC02BE99A},{0x99BCF15C,1U,0x2FE2816E,0x0F0857CB,0U,0xC02BE99A,0U},{0x8DF67BA4,4294967291U,4294967295U,4294967295U,9U,0x3926BAC5,7U},{0xDB6CF33E,0U,7U,4294967294U,1U,4294967295U,2U}},{{7U,1U,1U,4294967295U,4294967293U,0x99BCF15C,9U},{7U,0x99BCF15C,0xCEA51C3B,0U,0x3926BAC5,0U,0xCEA51C3B},{0xDB6CF33E,0xDB6CF33E,0U,0x092BEAA9,0x8DF67BA4,4294967295U,0x99BCF15C},{0x8DF67BA4,0U,4294967289U,4294967292U,0U,0xE909195D,9U},{0x99BCF15C,4294967295U,0x0F0857CB,0U,0x8DF67BA4,0x4E1DE7B6,0x5E249B5C}},{{1U,0x4C6F0421,0x8DF67BA4,4294967294U,4294967286U,0x88D2B8D8,0x99BCF15C},{2U,0x2D759E36,0x2FE2816E,7U,4294967289U,0x3926BAC5,0x7AAF1E96},{9U,0x2D759E36,0x8DF67BA4,0U,0x092BEAA9,0x092BEAA9,0U},{0xCEA51C3B,0xE909195D,0xCEA51C3B,4294967289U,2U,0x950F29A5,0x092BEAA9},{0x99BCF15C,4294967293U,4294967295U,1U,1U,7U,0U}},{{9U,1U,9U,0xDB6CF33E,0U,0x950F29A5,4294967295U},{0x5E249B5C,0U,1U,1U,0x3926BAC5,0x092BEAA9,4294967293U},{1U,0U,0U,4294967292U,4294967294U,0x3926BAC5,0x5E249B5C},{0xE909195D,0x5E249B5C,0U,7U,0xDB6CF33E,0x88D2B8D8,0xDB6CF33E},{0x7AAF1E96,1U,1U,0x7AAF1E96,4294967295U,9U,0x4E1DE7B6}},{{1U,0U,9U,0U,7U,0x7AAF1E96,0U},{0x2D759E36,0x99BCF15C,4294967295U,0x0F0857CB,0U,0x8DF67BA4,0x4E1DE7B6},{4294967289U,0xC02BE99A,0xCEA51C3B,0x2FE2816E,0x99BCF15C,1U,0xDB6CF33E},{4294967295U,4294967291U,0x8DF67BA4,0x88D2B8D8,0U,0U,0x5E249B5C},{1U,4294967286U,0x2FE2816E,0x88D2B8D8,1U,4294967293U,4294967293U}}};
                int32_t l_1588[7][8] = {{0x30045F7D,0x30045F7D,0x30045F7D,0x30045F7D,0x30045F7D,0x30045F7D,0x30045F7D,0x30045F7D},{0x30045F7D,0x30045F7D,0x30045F7D,0x30045F7D,0x30045F7D,0x30045F7D,0x30045F7D,0x30045F7D},{0x30045F7D,0x30045F7D,0x30045F7D,0x30045F7D,0x30045F7D,0x30045F7D,0x30045F7D,0x30045F7D},{0x30045F7D,0x30045F7D,0x30045F7D,0x30045F7D,0x30045F7D,0x30045F7D,0x30045F7D,0x30045F7D},{0x30045F7D,0x30045F7D,0x30045F7D,0x30045F7D,0x30045F7D,0x30045F7D,0x30045F7D,0x30045F7D},{0x30045F7D,0x30045F7D,0x30045F7D,0x30045F7D,0x30045F7D,0x30045F7D,0x30045F7D,0x30045F7D},{0x30045F7D,0x30045F7D,0x30045F7D,0x30045F7D,0x30045F7D,0x30045F7D,0x30045F7D,0x30045F7D}};
                int32_t **l_1595 = &l_1351;
                int i, j, k;
                for (g_775 = 0; (g_775 <= 55); ++g_775)
                {
                    if ((*g_150))
                        break;
                    return (*l_8);
                }
                if ((***g_148))
                {
                    int32_t l_1461 = 0;
                    int32_t **l_1465 = &g_672;
                    (*g_149) = l_1454;
                    for (g_658 = (-4); (g_658 < 14); g_658 = safe_add_func_int8_t_s_s(g_658, 6))
                    {
                        int32_t *l_1457 = &g_367;
                        (***g_1450) = l_1457;
                    }
                    if (l_1458)
                        break;
                    if ((((safe_add_func_uint8_t_u_u(l_1461, ((*g_672) > (safe_lshift_func_uint8_t_u_u((l_1405 == (void*)0), (((void*)0 != (***l_1405)) < (g_1464 != (***l_1405)))))))) | g_1172) >= 0xBD7A))
                    {
                        uint16_t l_1471 = 65532U;
                        g_295 = &g_1450;
                        (*g_415) = (1U | ((&l_1454 == l_1465) == ((safe_lshift_func_uint8_t_u_u((l_1468 & (safe_mod_func_uint8_t_u_u((l_1471 < ((5 < (g_221 == (g_868 <= (safe_add_func_uint8_t_u_u((safe_div_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(g_775, 3)), l_1478[3][3])), 1U))))) ^ g_766)), g_868))), g_214)) & g_1234)));
                    }
                    else
                    {
                        int8_t l_1490 = 1;
                        l_1492 = (((l_1479 && g_221) == ((safe_mod_func_int32_t_s_s(l_1482[5], (safe_sub_func_int16_t_s_s((1 < (safe_sub_func_uint8_t_u_u(((((((+(safe_div_func_uint8_t_u_u((((((4294967295U || (((4294967294U | 4294967293U) > g_367) | ((-1) || (**l_1465)))) & 0x050A517B) ^ (*g_617)) > g_221) <= l_1490), g_221))) > g_15) <= g_221) >= 0xD70CC5DE) && 0x9D17) || 3), l_1490))), l_1491)))) | 1)) | 0x49);
                        if (l_1493)
                            break;
                        (**g_148) = (***l_1405);
                    }
                }
                else
                {
                    int32_t *l_1497 = &g_2;
                    for (g_766 = 5; (g_766 > 60); g_766 = safe_add_func_int16_t_s_s(g_766, 6))
                    {
                        uint32_t l_1498 = 0xED398C45;
                        g_1496 = (***g_148);
                        (**g_148) = l_1497;
                        l_1498 = (-2);
                    }
                    return (****l_1405);
                }
                if (((-1) != (safe_mod_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((g_1505 > (g_775 > 0x87463E69)), (((((safe_div_func_int32_t_s_s((((0x992D | (g_1172 <= (~(safe_sub_func_uint32_t_u_u((safe_div_func_uint8_t_u_u((*l_1351), (((((safe_div_func_int16_t_s_s((g_221 ^ g_2), (*l_8))) | (*l_8)) == l_1515[7][0]) && g_1496) | 2U))), l_1516[1]))))) >= 0x2D) & 1), 5U)) >= l_1517[0]) != (*l_1413)) != g_775) >= g_748))), 1U))))
                {
                    uint8_t l_1523 = 0xC2;
                    int32_t ***l_1537 = &l_1359[1][0];
                    uint8_t l_1559[1];
                    uint8_t l_1576[3][1][9] = {{{1U,0U,0U,1U,0U,0U,1U,0U,0U}},{{0xB3,0xCE,0xCE,0xB3,0xCE,0xCE,0xB3,0xCE,0xCE}},{{1U,0U,0U,1U,0U,0U,1U,0U,0U}}};
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                        l_1559[i] = 0xD4;
                    for (l_1458 = (-18); (l_1458 >= 25); l_1458++)
                    {
                        int32_t ***l_1520 = &l_1359[1][0];
                        int32_t l_1521 = 8;
                        l_1524 = (((void*)0 == l_1520) <= ((((g_214 <= (-3)) != ((((0xECDF97A7 && l_1521) >= g_775) < (*g_631)) >= l_1522)) & l_1523) < g_15));
                    }
                    l_1525 = (*l_8);
                    if (((((safe_rshift_func_uint8_t_u_s(g_1248, (*l_1351))) != (-10)) <= (safe_unary_minus_func_uint8_t_u((safe_add_func_uint32_t_u_u((((*l_1413) && g_367) && (((safe_add_func_uint16_t_u_u(g_214, (((safe_add_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_u(l_1523, ((-10) > (l_1537 != (*l_1449))))) && g_766), 1)) >= l_1478[2][5]) || 0x7B8F2EC9))) ^ (*l_8)) || g_1496)), g_766))))) <= 0xE5))
                    {
                        (***l_1449) = (***g_1450);
                        if (g_1538[0])
                            continue;
                    }
                    else
                    {
                        int32_t *l_1558 = &g_15;
                        (***l_1405) = func_35(((safe_unary_minus_func_int8_t_s(((safe_div_func_int32_t_s_s((safe_rshift_func_int16_t_s_u(g_509, ((g_1538[5] & ((safe_sub_func_uint8_t_u_u((*l_1413), ((*g_295) == l_1548[0][3][4]))) && l_1549[0][1][1])) >= (safe_sub_func_int32_t_s_s((((+g_1496) & ((~(safe_div_func_uint32_t_u_u((safe_div_func_uint32_t_u_u((l_1558 == (void*)0), (*l_8))), (*l_1558)))) <= 7)) > (*l_1558)), (*l_1558)))))), (*g_672))) >= 0U))) || g_1248), g_214, (*g_148));
                        if (l_1559[0])
                            continue;
                        (**g_148) = l_1558;
                        (*g_415) = ((~((void*)0 == l_1537)) ^ (safe_mod_func_int8_t_s_s((-3), g_221)));
                    }
                    l_1576[1][0][1] = (safe_add_func_int8_t_s_s(((safe_sub_func_uint16_t_u_u(((1U >= (((safe_unary_minus_func_uint8_t_u((safe_mod_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(((((void*)0 != l_1572[3][1][1]) != 0xDB) != (((0U || (g_1248 ^ (g_1538[4] != (((safe_rshift_func_uint16_t_u_u((g_214 < g_1248), 12)) == g_2) && g_2)))) & 9) && 0x289A)), l_1575)), g_1538[3])))) != 0x37C724F4) && (*l_8))) != g_509), 3U)) < 1U), 0xA8));
                }
                else
                {
                    uint16_t l_1582 = 65531U;
                    int32_t l_1586 = 0xE256D147;
                    int32_t **l_1597 = (void*)0;
                    if (((((&l_1548[0][3][4] != &g_296[6]) && ((g_1172 ^ ((((safe_mod_func_uint32_t_u_u((((&l_1548[0][3][7] != &g_296[7]) && l_1579[0][3][5]) || ((*l_1413) > (safe_lshift_func_uint8_t_u_s((((l_1582 < (((!(safe_mod_func_int8_t_s_s((0x224258F3 <= 0x6F7FA18C), 0xCB))) && g_766) != l_1586)) | (-3)) < l_1582), g_1505)))), 0xC7810CED)) <= g_1496) < g_214) | 0xF42898A8)) <= l_1587)) <= g_1234) != 3U))
                    {
                        int32_t **l_1596 = &g_631;
                        int32_t *l_1621 = &g_367;
                        l_1586 = ((*l_8) != g_1538[2]);
                        (*l_1595) = func_35(l_1588[3][6], (safe_rshift_func_uint8_t_u_s((((+(safe_add_func_int8_t_s_s(((safe_unary_minus_func_int8_t_s((l_1595 == l_1596))) && l_1586), ((**g_1450) == l_1597)))) && (safe_lshift_func_int8_t_s_s((**l_1596), (((safe_sub_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s((g_1172 >= 0U), g_748)), 0x97DACE8E)) || g_1538[5]) >= 0xED06)))) && 0x46634707), 4)), (**l_1449));
                        l_1618 = (safe_mod_func_uint32_t_u_u(((-6) <= ((safe_rshift_func_int8_t_s_s((((&l_1597 == (*l_1449)) >= (safe_sub_func_uint16_t_u_u(((*l_8) && (*l_1413)), ((((g_748 != (g_1248 >= ((safe_sub_func_uint32_t_u_u((safe_add_func_int32_t_s_s((safe_sub_func_uint32_t_u_u((safe_sub_func_int32_t_s_s((**l_1596), (*g_415))), g_1248)), (**l_1595))), 0x431911B1)) < (*g_415)))) || g_1172) || g_1248) & (**l_1596))))) == g_509), 4)) || g_766)), 0xA98CB09C));
                        (***g_1450) = func_35((safe_add_func_uint32_t_u_u((l_1621 == (void*)0), ((g_1248 < (-1)) && (safe_div_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s((safe_div_func_int32_t_s_s(((safe_lshift_func_uint16_t_u_u(g_1538[0], (((*g_1450) == &l_1597) || (*l_8)))) | ((((l_1630 || 0xE5) && g_748) < (*l_8)) | 9U)), 0xD1A27881)), g_1538[0])), (*g_617)))))), g_775, (**l_1449));
                    }
                    else
                    {
                        (**g_148) = (***l_1405);
                    }
                }
            }
        }
        (***g_1450) = (***l_1449);
        if ((*l_1413))
            continue;
    }
    return (*l_1413);
}
inline static int32_t * func_5(int32_t * p_6, int32_t * p_7)
{
    uint32_t l_12 = 1U;
    int32_t l_1345 = 0x351E8263;
    int32_t *l_1350 = (void*)0;
    (*g_149) = func_9(&g_2, l_12);
    (*g_415) = (l_1345 ^ ((safe_lshift_func_uint8_t_u_u((l_12 > ((*p_6) >= l_12)), g_658)) <= l_12));
    return l_1350;
}
static int32_t * func_9(int32_t * p_10, uint8_t p_11)
{
    int32_t *l_18 = &g_2;
    int32_t ****l_1151 = &g_148;
    int16_t l_1180 = 0;
    int32_t *l_1273[10] = {&g_15,&g_15,&g_15,&g_15,&g_15,&g_15,&g_15,&g_15,&g_15,&g_15};
    int32_t *l_1274 = (void*)0;
    int32_t *l_1343[9][7] = {{&g_2,&g_15,&g_2,&g_367,(void*)0,&g_2,&g_367},{(void*)0,&g_15,&g_2,&g_367,&g_15,&g_15,&g_15},{&g_367,&g_367,&g_367,&g_367,&g_367,&g_2,(void*)0},{(void*)0,&g_2,&g_367,&g_15,(void*)0,(void*)0,(void*)0},{&g_2,(void*)0,&g_2,(void*)0,&g_2,&g_15,(void*)0},{&g_367,&g_367,&g_2,(void*)0,&g_367,&g_2,&g_15},{&g_367,&g_15,&g_15,&g_15,&g_15,&g_367,&g_367},{&g_367,(void*)0,&g_15,&g_367,&g_15,(void*)0,(void*)0},{&g_2,(void*)0,&g_367,&g_367,&g_367,(void*)0,&g_2}};
    int i, j;
    for (p_11 = 0; (p_11 >= 60); p_11++)
    {
        int32_t **l_19 = &l_18;
        uint32_t l_41 = 0U;
        int32_t *l_1141 = &g_15;
        uint16_t l_1175 = 3U;
        int32_t *****l_1182 = &g_296[7];
        uint16_t l_1183 = 0U;
        uint32_t l_1306 = 4294967290U;
        for (g_15 = (-8); (g_15 >= (-27)); g_15 = safe_sub_func_int8_t_s_s(g_15, 1))
        {
            return p_10;
        }
        (*l_19) = l_18;
    }
    l_1343[5][4] = func_44(g_748, g_775);
    return g_1344[2];
}
static uint8_t func_24(int16_t p_25, int32_t * p_26, uint32_t p_27)
{
    uint8_t l_635 = 0xF8;
    int32_t ****l_638 = (void*)0;
    uint8_t l_654[3];
    int32_t l_657 = (-8);
    uint16_t l_701 = 0x910F;
    int16_t l_721 = 7;
    int32_t *l_758 = &g_2;
    int32_t *l_780 = &g_15;
    int32_t *****l_804 = &g_296[7];
    int32_t ***l_1140 = (void*)0;
    int i;
    for (i = 0; i < 3; i++)
        l_654[i] = 5U;
    if ((safe_lshift_func_int16_t_s_s(l_635, ((safe_rshift_func_uint8_t_u_u((l_638 == (*g_295)), 0)) ^ ((!(safe_rshift_func_int16_t_s_u(0x3BA9, ((safe_div_func_int32_t_s_s(2, (safe_div_func_int16_t_s_s((((p_27 || (p_27 <= ((l_638 == (void*)0) != p_25))) <= 4U) != g_2), p_25)))) > g_367)))) && p_25)))))
    {
        uint32_t l_646 = 4294967295U;
        int32_t *l_662 = (void*)0;
        int32_t ****l_680 = (void*)0;
        uint32_t l_1052 = 0xB8650137;
        uint8_t l_1055 = 251U;
        int16_t l_1117 = 4;
        int8_t l_1132 = 1;
        int32_t ***l_1138[5][6] = {{&g_149,&g_23,&g_149,&g_149,&g_23,&g_149},{&g_149,&g_23,&g_149,&g_149,&g_23,&g_149},{&g_149,&g_23,&g_149,&g_149,&g_23,&g_149},{&g_149,&g_23,&g_149,&g_149,&g_23,&g_149},{&g_149,&g_23,&g_149,&g_149,&g_23,&g_149}};
        int32_t ****l_1139[6][2] = {{&g_148,&l_1138[1][3]},{&l_1138[1][3],(void*)0},{&l_1138[1][3],(void*)0},{&l_1138[1][3],&l_1138[1][3]},{&g_148,&g_148},{&g_148,&l_1138[1][3]}};
        int i, j;
    }
    else
    {
        return p_27;
    }
    (*g_149) = p_26;
    (**g_148) = p_26;
    (*g_149) = p_26;
    return (*l_780);
}
inline static int16_t func_32(int16_t p_33, int32_t * p_34)
{
    return g_367;
}
inline static int32_t * func_35(uint32_t p_36, uint16_t p_37, int32_t ** p_38)
{
    uint16_t l_116 = 0xFDD0;
    uint16_t l_437[8] = {65529U,65529U,65529U,65529U,65529U,65529U,65529U,65529U};
    int32_t *l_441 = (void*)0;
    int32_t ***l_526 = &g_149;
    int32_t *****l_547[7] = {(void*)0,&g_296[7],&g_296[7],(void*)0,&g_296[7],&g_296[7],(void*)0};
    int32_t *l_616 = &g_367;
    int32_t ****l_624 = &g_148;
    int32_t *l_632 = &g_367;
    int i;
    for (p_37 = (-7); (p_37 == 43); p_37 = safe_add_func_int8_t_s_s(p_37, 1))
    {
        uint32_t l_117[7] = {4294967288U,4294967288U,4294967288U,4294967288U,4294967288U,4294967288U,4294967288U};
        int32_t *l_118 = &g_2;
        int32_t ***l_458[4] = {&g_23,&g_23,&g_23,&g_23};
        int i;
    }
    return l_632;
}
static int32_t * func_44(uint16_t p_45, int8_t p_46)
{
    int32_t l_336 = 0xAFCF35AF;
    int32_t l_375 = 0xCB0C6D8F;
    int32_t *l_414 = &l_336;
lbl_364:
    l_336 = ((p_46 || l_336) < l_336);
    for (p_46 = 0; (p_46 >= (-5)); p_46 = safe_sub_func_uint16_t_u_u(p_46, 1))
    {
        int16_t l_362 = 0x1355;
        int32_t *l_366[3];
        int32_t ****l_380 = &g_148;
        int i;
        for (i = 0; i < 3; i++)
            l_366[i] = &g_367;
        for (g_15 = 7; (g_15 >= 3); g_15 -= 1)
        {
            int32_t *l_340 = &g_2;
            int i;
            for (g_221 = 5; (g_221 >= 0); g_221 -= 1)
            {
                int32_t *****l_357 = &g_296[7];
                int32_t *l_385 = &g_2;
                int8_t l_412[1][5];
                int32_t *l_413[2];
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 5; j++)
                        l_412[i][j] = 0;
                }
                for (i = 0; i < 2; i++)
                    l_413[i] = &g_15;
                for (g_214 = 5; (g_214 >= 0); g_214 -= 1)
                {
                    int32_t *****l_339 = &g_296[7];
                    int i;
                    l_339 = &g_296[(g_214 + 3)];
                    for (l_336 = 2; (l_336 <= 8); l_336 += 1)
                    {
                        return l_340;
                    }
                }
                for (g_214 = 8; (g_214 >= 0); g_214 -= 1)
                {
                    int32_t *l_355 = &l_336;
                    int i;
                    (*l_355) = (((safe_rshift_func_int16_t_s_s(1, (safe_sub_func_uint32_t_u_u((((p_46 != (safe_sub_func_int8_t_s_s((safe_div_func_int32_t_s_s((p_46 && p_45), (safe_sub_func_int8_t_s_s(0, (safe_div_func_int16_t_s_s(((((g_2 ^ l_336) && (0U & p_45)) != p_46) >= p_46), (-9))))))), p_45))) && 1) | g_15), p_45)))) && 6) < p_46);
                    if ((p_45 & p_46))
                    {
                        int32_t l_363 = 0x58FE9995;
                        l_357 = g_356[5];
                        (*l_355) = (0xBF3F1525 ^ (0xAA57 || ((safe_mod_func_int8_t_s_s(p_46, l_336)) > (safe_rshift_func_uint8_t_u_u(p_46, l_362)))));
                        l_340 = l_340;
                        if (l_363)
                            break;
                    }
                    else
                    {
                        int32_t *l_365 = &g_15;
                        if (p_45)
                            goto lbl_364;
                        if (p_46)
                            break;
                        return l_365;
                    }
                }
                for (l_336 = 8; (l_336 >= 2); l_336 -= 1)
                {
                    int i;
                    l_366[1] = (void*)0;
                    if ((!(safe_div_func_int8_t_s_s((safe_div_func_int8_t_s_s(1, p_46)), 248U))))
                    {
                        int32_t *l_373 = &g_15;
                        (*g_149) = l_373;
                    }
                    else
                    {
                        uint16_t l_374 = 2U;
                        l_375 = l_374;
                        return l_366[1];
                    }
                    for (p_45 = 0; (p_45 <= 11); ++p_45)
                    {
                        int32_t l_378 = 0;
                        int32_t l_379 = 1;
                        if (l_362)
                            goto lbl_364;
                        l_378 = 0x7FBB295A;
                        l_379 = (**g_149);
                        (*g_295) = l_380;
                    }
                }
                if (p_46)
                {
                    return l_340;
                }
                else
                {
                    int32_t l_398 = 1;
                    int32_t *l_399 = &l_375;
                    if ((safe_lshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_u((0x3038 < ((*l_340) < (l_385 != (void*)0))), (safe_div_func_int8_t_s_s((0xFB86A834 >= (safe_lshift_func_uint8_t_u_s((1U < (*l_385)), 6))), (((safe_lshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_u((safe_mod_func_uint32_t_u_u((safe_add_func_uint16_t_u_u(p_45, ((1U & l_336) & g_221))), p_46)), 1)), g_15)) & g_15) ^ l_398))))), g_15)))
                    {
                        (*g_149) = (void*)0;
                    }
                    else
                    {
                        (*g_149) = l_399;
                    }
                    (*l_399) = (0x8B || (0x12 | (((((0x04 != ((p_45 <= (((((l_380 != (void*)0) & (*l_340)) == ((safe_rshift_func_int8_t_s_s((((((safe_sub_func_int8_t_s_s((((safe_add_func_int32_t_s_s(p_45, (safe_add_func_int32_t_s_s((safe_rshift_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(l_412[0][2], l_336)), p_46)), 0)))) <= l_375) != 0x7E), (*l_385))) | 65529U) && p_46) >= g_2) | g_221), 7)) | p_46)) || 1U) > 0U)) > g_15)) <= (*l_340)) <= p_45) == 1) | p_46)));
                    (*g_149) = l_413[1];
                }
            }
            l_375 = 0x93A6662E;
            (*g_149) = (void*)0;
        }
    }
    (*g_149) = &l_375;
    return g_415;
}
static uint16_t func_49(int32_t ** p_50, uint32_t p_51, int32_t * p_52, int8_t p_53)
{
    int32_t l_119 = 0x9CBFF9F6;
    int32_t *l_120 = (void*)0;
    int32_t l_131[10] = {0xA0260AD5,6,6,0xA0260AD5,6,6,0xA0260AD5,6,6,0xA0260AD5};
    int32_t l_137 = (-7);
    uint32_t l_139[10][6] = {{0x2D953666,0x2D953666,1U,0xA3939728,0xE60D347F,4294967295U},{1U,0xF010A371,0xD1832462,1U,4294967295U,1U},{0xD1832462,1U,0xD1832462,0x6BF4B6F1,0x2D953666,4294967295U},{6U,0x6BF4B6F1,1U,0xAB26F933,0x802EBDDE,0x802EBDDE},{0xAB26F933,0x802EBDDE,0x802EBDDE,0xAB26F933,1U,0x6BF4B6F1},{6U,4294967295U,0x2D953666,0x6BF4B6F1,0xD1832462,1U},{0xD1832462,1U,4294967295U,1U,0xD1832462,0xF010A371},{1U,4294967295U,0xE60D347F,0xA3939728,1U,1U},{1U,0xAB26F933,0x802EBDDE,0x802EBDDE,0xAB26F933,1U},{0x6BF4B6F1,0xF010A371,4294967295U,4294967295U,1U,0xE60D347F}};
    int32_t *l_251[6];
    int32_t ****l_313 = &g_148;
    int8_t l_335 = 0x0C;
    int i, j;
    for (i = 0; i < 6; i++)
        l_251[i] = &g_2;
    if (l_119)
    {
        int32_t **l_121 = &l_120;
        (*l_121) = l_120;
    }
    else
    {
        uint32_t l_138 = 9U;
        int32_t *l_154 = &l_131[6];
        int32_t ****l_179[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int32_t *****l_178 = &l_179[5];
        int i;
        if (((safe_rshift_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((safe_div_func_int32_t_s_s(((!(l_131[6] < ((p_53 | ((p_51 ^ p_51) & 8)) | g_2))) >= ((safe_unary_minus_func_int8_t_s((safe_rshift_func_int8_t_s_s(1, (safe_mod_func_uint16_t_u_u((p_53 && ((g_23 == g_23) >= 0x23)), l_137)))))) > l_138)), l_137)), g_2)), 8)) <= l_139[5][4]))
        {
            return p_53;
        }
        else
        {
            uint16_t l_142 = 7U;
            int32_t *l_153 = &l_131[6];
            int32_t *****l_219[5];
            int32_t ***l_250 = (void*)0;
            int32_t **l_284 = (void*)0;
            int8_t l_332 = (-1);
            int i;
            for (i = 0; i < 5; i++)
                l_219[i] = &l_179[9];
            if (l_131[6])
            {
                int32_t ***l_145 = &g_23;
                for (g_15 = 0; (g_15 < (-17)); g_15 = safe_sub_func_uint16_t_u_u(g_15, 1))
                {
                    return l_142;
                }
                for (l_137 = 13; (l_137 <= (-12)); l_137--)
                {
                    int32_t ****l_146 = (void*)0;
                    int32_t ****l_147[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_147[i] = &l_145;
                    g_148 = l_145;
                    (*g_150) = (*p_52);
                    for (g_15 = (-5); (g_15 != (-28)); g_15--)
                    {
                        l_153 = p_52;
                        (*g_149) = (*g_149);
                        l_154 = p_52;
                    }
                }
                (*g_150) = (safe_sub_func_int16_t_s_s((((((7U & (safe_add_func_uint32_t_u_u((safe_mod_func_int32_t_s_s((*l_153), (*g_150))), ((safe_add_func_int32_t_s_s((safe_mod_func_uint32_t_u_u(0x6F77E7A5, 4294967295U)), ((((0x77822E2C ^ 4294967288U) < ((safe_add_func_uint16_t_u_u(p_53, (safe_rshift_func_int8_t_s_u((safe_unary_minus_func_uint32_t_u((+(safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint16_t_u_s(0x2760, 12)), 7))))), g_2)))) != (*l_154))) && p_53) > (*p_52)))) && g_15)))) >= 255U) && p_51) != g_15) != 0x60), p_53));
            }
            else
            {
                int16_t l_183 = 0x27D3;
                int32_t *l_184 = &g_2;
                int32_t *****l_220 = (void*)0;
                int32_t *****l_297 = &g_296[0];
                if ((*l_154))
                {
                    int32_t *****l_180 = &l_179[4];
                    for (l_137 = (-3); (l_137 < (-2)); ++l_137)
                    {
                        int32_t ****l_177 = &g_148;
                        (*l_177) = &p_50;
                        l_180 = l_178;
                    }
                    if (g_2)
                        goto lbl_185;
                    for (g_15 = (-29); (g_15 >= 29); g_15 = safe_add_func_int8_t_s_s(g_15, 2))
                    {
                        if (l_183)
                            break;
                    }
lbl_185:
                    p_52 = l_184;
                    (*g_149) = l_184;
                }
                else
                {
                    for (l_183 = 1; (l_183 <= 5); l_183 += 1)
                    {
                        int i;
                        (**g_149) = (&p_50 != &p_50);
                        return p_51;
                    }
                    (**g_149) = (-1);
                    for (l_183 = 17; (l_183 <= 11); l_183 = safe_sub_func_int16_t_s_s(l_183, 5))
                    {
                        int32_t *l_188 = &l_131[6];
                        l_188 = (*g_149);
                        (***g_148) = 0x8D9F3E27;
                    }
                }
                for (l_183 = 26; (l_183 > 8); l_183 = safe_sub_func_int16_t_s_s(l_183, 7))
                {
                    int32_t *l_191 = &g_15;
                    int32_t ****l_206 = (void*)0;
                    for (p_51 = 0; (p_51 <= 9); p_51 += 1)
                    {
                        (*g_149) = l_191;
                    }
                }
                for (l_183 = 0; (l_183 >= (-14)); l_183 = safe_sub_func_int32_t_s_s(l_183, 1))
                {
                    int32_t ****l_271[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_271[i] = (void*)0;
                    for (l_137 = 0; (l_137 == 16); l_137 = safe_add_func_uint32_t_u_u(l_137, 9))
                    {
                        int32_t l_282 = 0x852D9DEA;
                        int8_t l_283 = 0x51;
                        (*g_149) = &l_131[6];
                        (*l_154) = (0x55E4C580 != (((*p_52) < (safe_rshift_func_uint16_t_u_u(g_2, (safe_rshift_func_int8_t_s_u((!((((safe_div_func_int8_t_s_s(p_51, (safe_lshift_func_uint16_t_u_s(((((~(safe_rshift_func_int16_t_s_s(((g_214 ^ (((~(&g_148 == l_271[2])) | ((safe_mod_func_int8_t_s_s(g_15, (safe_sub_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((safe_sub_func_int8_t_s_s(0x47, g_221)), (*p_52))), 3)), p_53)))) >= l_282)) & (*l_184))) && 0xA24B), l_282))) ^ l_283) >= 0xC6A9ADD8) & 7U), 6)))) == (*p_52)) && (-5)) > p_53)), 6))))) | 0x13F45361));
                        if ((*p_52))
                            continue;
                        (**g_149) = ((void*)0 != &l_137);
                    }
                    for (l_138 = 0; (l_138 <= 9); l_138 += 1)
                    {
                        int i;
                        if ((*p_52))
                            break;
                        if ((*p_52))
                            continue;
                        l_284 = &l_251[0];
                    }
                    (*l_153) = (*g_150);
                }
                for (g_214 = (-25); (g_214 > (-14)); g_214 = safe_add_func_uint32_t_u_u(g_214, 3))
                {
                    uint32_t l_287 = 1U;
                    for (l_142 = 0; (l_142 <= 5); l_142 += 1)
                    {
                        int i, j;
                        return l_139[l_142][l_142];
                    }
                    if (((void*)0 == &g_149))
                    {
                        if ((*g_150))
                            break;
                        if (l_287)
                            break;
                        (*g_149) = (*g_149);
                    }
                    else
                    {
                        if ((**g_149))
                            break;
                    }
                    (*g_149) = (*g_149);
                    (*l_153) = (safe_lshift_func_int16_t_s_u((((void*)0 != &g_148) | (!(safe_div_func_int32_t_s_s((safe_add_func_uint16_t_u_u(((g_2 >= (&p_52 == (*g_148))) & p_53), (g_295 == l_297))), (safe_sub_func_uint8_t_u_u(((safe_add_func_int32_t_s_s((p_52 != p_52), 0x44EA9E6C)) == 0xA556991D), p_51)))))), l_287));
                }
            }
            for (p_53 = 24; (p_53 <= (-28)); p_53--)
            {
                int32_t ****l_314 = &l_250;
                int32_t l_317 = (-5);
                l_317 = ((g_2 && ((safe_lshift_func_uint16_t_u_s((((((safe_lshift_func_uint16_t_u_u(((((+(((((safe_sub_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(0x6BC5, 13)), ((0xB42ADA26 && 0x7CED499C) >= (l_313 == l_314)))) >= p_53) || (safe_sub_func_int16_t_s_s(((void*)0 == &l_314), p_51))) == p_51) == g_2)) != g_221) != 0x0A57) > g_2), 9)) | 0x74F9F1FA) <= 0x5C9E) <= 254U) && g_15), 12)) ^ p_51)) >= g_221);
                l_317 = ((g_15 ^ ((safe_sub_func_int8_t_s_s(g_15, (safe_lshift_func_int16_t_s_u((safe_add_func_uint32_t_u_u(g_221, (safe_sub_func_int16_t_s_s(1, (safe_div_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_u(247U, 5)) && (l_332 & (safe_add_func_uint8_t_u_u(((&p_52 != (**l_313)) > 65531U), g_2)))), p_51)))))), l_335)))) != p_51)) || (-1));
                return g_2;
            }
        }
    }
    return g_15;
}
inline static int32_t ** func_54(int32_t ** p_55, uint32_t p_56, int8_t p_57)
{
    int32_t *l_68 = &g_2;
    int32_t l_85 = (-5);
    for (p_56 = 0; (p_56 >= 16); ++p_56)
    {
        int32_t *l_75 = &g_2;
        int32_t *l_111[3];
        int i;
        for (i = 0; i < 3; i++)
            l_111[i] = &l_85;
        l_85 = ((safe_sub_func_int16_t_s_s(func_62(l_68, g_2, (safe_lshift_func_int16_t_s_s((safe_add_func_uint16_t_u_u((+((&l_68 != g_23) | ((+0x8791) || ((l_75 != l_75) > (*l_75))))), (safe_mod_func_uint16_t_u_u(p_57, p_56)))), p_57)), (*l_68), p_55), g_15)) <= g_15);
        l_85 = ((((((safe_rshift_func_uint16_t_u_s((safe_div_func_int8_t_s_s((~(g_15 | ((((safe_div_func_int16_t_s_s((g_15 > ((((+(g_23 == (void*)0)) <= ((safe_add_func_uint8_t_u_u(((p_56 || ((g_15 <= (!(safe_mod_func_uint8_t_u_u((((!(g_23 == g_23)) == (~(safe_sub_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u((safe_add_func_int16_t_s_s(((safe_mod_func_int8_t_s_s(0, 0xF8)) ^ (*l_68)), g_15)), (*l_68))), 0)))) == p_56), (*l_75))))) & g_15)) ^ (*l_75)), g_2)) || g_2)) | g_15) || (*l_68))), g_15)) ^ g_15) < (*l_75)) >= 0U))), g_2)), 10)) < 0x1756) & g_15) <= p_57) != (*l_75)) | 0);
    }
    return g_23;
}
inline static int16_t func_62(int32_t * p_63, uint32_t p_64, uint32_t p_65, uint16_t p_66, int32_t ** p_67)
{
    int8_t l_80[4] = {0,0,0,0};
    int32_t *l_83 = &g_2;
    int i;
    for (p_66 = 0; (p_66 > 49); p_66 = safe_add_func_int16_t_s_s(p_66, 2))
    {
        l_80[3] = 0xE4340421;
        for (p_64 = 0; (p_64 >= 47); p_64 = safe_add_func_uint8_t_u_u(p_64, 4))
        {
            int32_t **l_84 = &l_83;
            (*l_84) = l_83;
        }
        return p_66;
    }
    return (*l_83);
}
int main (void)
{
    int i;
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_2;
    csmith_sink_ = g_15;
    csmith_sink_ = g_214;
    csmith_sink_ = g_221;
    csmith_sink_ = g_367;
    csmith_sink_ = g_509;
    csmith_sink_ = g_658;
    csmith_sink_ = g_748;
    csmith_sink_ = g_766;
    csmith_sink_ = g_775;
    csmith_sink_ = g_868;
    csmith_sink_ = g_1172;
    csmith_sink_ = g_1234;
    csmith_sink_ = g_1248;
    csmith_sink_ = g_1496;
    csmith_sink_ = g_1505;
    for (i = 0; i < 6; i++)
    {
        csmith_sink_ = g_1538[i];
    }
    platform_main_end(0,0);
    return 0;
}
