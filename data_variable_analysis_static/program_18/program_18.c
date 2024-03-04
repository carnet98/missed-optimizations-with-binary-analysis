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
static int32_t g_2 = 0xDA439BEBL;
static uint32_t g_36 = 0x07EA4C57L;
static int32_t g_48 = 7L;
static int32_t g_130 = 0x9055545BL;
static int8_t g_212 = 0xE6L;
static int32_t ****g_233 = (void*)0;
static int32_t *g_358 = &g_48;
static int32_t **g_357 = &g_358;
static int32_t ***g_356 = &g_357;
static uint32_t g_520 = 1UL;
static int8_t g_799 = 0x13L;
static uint16_t g_1082 = 65535UL;
inline static int8_t func_1(void);
static int16_t func_3(int8_t p_4, uint32_t p_5, int8_t p_6, int32_t p_7, int32_t p_8);
static int8_t func_17(uint32_t p_18, uint16_t p_19, uint8_t p_20);
inline static uint8_t func_22(uint8_t p_23, int32_t p_24, uint16_t p_25, int32_t p_26, uint16_t p_27);
inline static int8_t func_32(uint16_t p_33);
static int16_t func_37(int32_t p_38);
inline static int8_t func_41(uint32_t p_42, uint32_t p_43, uint8_t p_44, uint8_t p_45, uint32_t p_46);
static int32_t * func_51(int8_t p_52, uint32_t p_53, int32_t p_54);
inline static uint8_t func_55(uint32_t p_56, int32_t * p_57, int8_t p_58);
inline static int32_t * func_66(int32_t * p_67, uint32_t p_68);
inline static int8_t func_1(void)
{
    uint32_t l_21 = 0x11BC383CL;
    uint16_t l_49 = 0x3F12L;
    uint8_t l_50 = 0xF5L;
    int8_t l_936 = 0x92L;
    uint8_t l_1084 = 4UL;
    int32_t l_1103 = (-1L);
    int32_t *l_1104 = &g_48;
    uint32_t l_1115 = 1UL;
    int16_t l_1119 = 0x2276L;
    int32_t ***l_1126 = &g_357;
    int32_t l_1127 = 0x3C1B71BCL;
    l_1103 = (g_2 & func_3((((safe_mod_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_s(((((safe_div_func_int8_t_s_s(((func_17(l_21, l_21, func_22((((((l_21 <= (safe_div_func_int8_t_s_s((safe_rshift_func_int8_t_s_s(func_32(((safe_mod_func_uint8_t_u_u((g_36 >= ((func_37(((((g_36 , ((safe_sub_func_int16_t_s_s((l_21 <= ((func_41(l_21, (g_36 <= g_36), l_21, g_2, l_21) ^ 0x81L) == 0x3F8DE905L)), l_21)) , l_21)) ^ l_49) & 0L) , l_50)) >= l_21) ^ l_49)), l_49)) , g_212)), g_2)), 0x8DL))) && g_799) , l_49) , l_936) == g_2), l_21, g_2, l_936, g_36)) <= g_1082) < g_2), l_936)) <= l_21) < l_50) | l_936), 7)), g_2)), l_49)) && l_49) > 0xA8242404L), g_2, l_21, l_21, l_1084));
    (*l_1104) = l_936;
    (*l_1104) = ((((safe_lshift_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_s((safe_sub_func_int8_t_s_s(((((((safe_mod_func_uint32_t_u_u(((*l_1104) , 0x88A5DE6FL), (safe_mod_func_uint32_t_u_u(l_1115, (*l_1104))))) != ((safe_unary_minus_func_int8_t_s(((*l_1104) & (safe_div_func_int8_t_s_s((((*l_1104) && l_1119) | (+(g_130 || (((safe_div_func_int32_t_s_s(((~(safe_mul_func_uint16_t_u_u(((((void*)0 == l_1126) || 0x0C332CD3L) == g_130), g_130))) ^ (*l_1104)), 0xF7245598L)) && g_2) , (*l_1104))))), 6UL))))) , g_520)) | l_1127) || (*l_1104)) ^ 0xB0L) ^ (*l_1104)), (*l_1104))), 3)) <= (*l_1104)), g_520)) , g_48) ^ (*l_1104)) != g_36);
    return (*l_1104);
}
static int16_t func_3(int8_t p_4, uint32_t p_5, int8_t p_6, int32_t p_7, int32_t p_8)
{
    uint8_t l_1095 = 250UL;
    int32_t *l_1096 = &g_2;
    int32_t ****l_1099 = &g_356;
    uint8_t l_1100 = 7UL;
    int32_t *l_1101 = &g_130;
    int32_t *****l_1102 = &g_233;
    (*l_1101) = (p_6 , (safe_rshift_func_uint16_t_u_s(((((safe_div_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_s((((g_2 >= (safe_mul_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(l_1095, 0L)), (l_1096 != ((safe_div_func_int16_t_s_s((((((*g_356) == (*g_356)) , l_1099) == ((g_1082 | (*l_1096)) , (void*)0)) <= p_7), g_36)) , (void*)0))))) , 1UL) , 249UL), 1)) <= l_1100), 0x49C8L)) | (-3L)) | 0UL) != g_212), 6)));
    (*l_1102) = (void*)0;
    return g_799;
}
static int8_t func_17(uint32_t p_18, uint16_t p_19, uint8_t p_20)
{
    int32_t *l_951 = &g_2;
    int32_t l_955 = (-3L);
    uint32_t l_958 = 0UL;
    uint8_t l_1000 = 1UL;
    int16_t l_1005 = 0x3BF3L;
    int32_t ****l_1006 = &g_356;
    uint8_t l_1014 = 0xE5L;
    int32_t l_1052 = (-10L);
    (*g_357) = l_951;
    for (g_36 = (-3); (g_36 != 47); ++g_36)
    {
        int16_t l_954 = 0L;
        int32_t *l_961 = &l_955;
        int32_t ****l_965 = &g_356;
        int16_t l_974 = 8L;
        l_955 = l_954;
        for (p_20 = (-4); (p_20 < 34); p_20 = safe_add_func_uint16_t_u_u(p_20, 4))
        {
            uint32_t l_973 = 0UL;
            uint32_t l_999 = 0xB6AFBCE9L;
            int32_t *l_1019 = &g_2;
            int16_t l_1083 = (-4L);
            (**g_356) = (void*)0;
        }
    }
    return p_18;
}
inline static uint8_t func_22(uint8_t p_23, int32_t p_24, uint16_t p_25, int32_t p_26, uint16_t p_27)
{
    int32_t *l_939 = &g_48;
    int32_t *****l_942 = &g_233;
    int32_t **l_950 = &g_358;
    for (g_799 = (-27); (g_799 <= (-25)); g_799++)
    {
        (*g_356) = (*g_356);
    }
    (*l_939) = 2L;
    (*l_950) = func_51((safe_rshift_func_uint16_t_u_s(((*l_939) <= (((void*)0 != &g_357) | 1UL)), (l_942 != l_942))), (((safe_sub_func_uint32_t_u_u(((safe_div_func_uint32_t_u_u(((safe_add_func_uint8_t_u_u(((+(((*l_939) , l_942) != (g_130 , (void*)0))) ^ 0x410AC822L), g_48)) != g_36), 1UL)) | (*l_939)), (*l_939))) , (*l_939)) , g_212), p_23);
    p_24 = ((void*)0 == (*g_356));
    return g_48;
}
inline static int8_t func_32(uint16_t p_33)
{
    int32_t l_935 = 0x19AF0EF3L;
    l_935 = l_935;
    return l_935;
}
static int16_t func_37(int32_t p_38)
{
    int32_t *l_59 = &g_48;
    int32_t **l_927 = &l_59;
    uint32_t l_934 = 0x9D6631C7L;
    (*l_927) = func_51(((void*)0 == &g_48), (0x06L & g_48), (func_55(g_2, l_59, (((void*)0 == &g_2) == (safe_rshift_func_uint8_t_u_s((65535UL > 0x230BL), 4)))) != 0UL));
    l_934 = (((((safe_lshift_func_uint8_t_u_u((**l_927), (((((*l_927) != (*l_927)) ^ 4L) > (safe_sub_func_int8_t_s_s(p_38, p_38))) , (**l_927)))) == ((p_38 > (safe_add_func_uint32_t_u_u(0xF2428072L, (*l_59)))) , (**l_927))) == p_38) < p_38) && g_212);
    return g_36;
}
inline static int8_t func_41(uint32_t p_42, uint32_t p_43, uint8_t p_44, uint8_t p_45, uint32_t p_46)
{
    int32_t *l_47 = &g_48;
    (*l_47) = 0xBF81606DL;
    return p_44;
}
static int32_t * func_51(int8_t p_52, uint32_t p_53, int32_t p_54)
{
    int8_t l_824 = 0x09L;
    int32_t l_825 = 0L;
    uint32_t l_834 = 18446744073709551608UL;
    uint8_t l_848 = 247UL;
    int32_t ***l_865 = &g_357;
    int8_t l_885 = (-10L);
    uint8_t l_886 = 248UL;
    int32_t *l_926 = &g_2;
    for (g_48 = (-1); (g_48 <= (-30)); g_48--)
    {
        uint32_t l_820 = 1UL;
        uint32_t l_822 = 7UL;
        for (p_53 = (-22); (p_53 < 1); p_53 = safe_add_func_int16_t_s_s(p_53, 4))
        {
            int32_t *l_805 = &g_130;
            int32_t ****l_817 = &g_356;
            int8_t l_821 = 3L;
            int32_t *l_823 = &g_48;
            (*g_357) = func_66((p_53 , l_805), (safe_rshift_func_uint16_t_u_u(p_52, ((~((safe_rshift_func_uint8_t_u_s(((safe_div_func_uint16_t_u_u(((safe_add_func_int32_t_s_s(((0xE4382FE3L ^ (safe_mod_func_uint8_t_u_u((((void*)0 == l_817) != g_520), ((safe_mul_func_uint16_t_u_u(((((void*)0 != l_817) , g_36) | l_820), p_54)) , l_821)))) & l_822), (-1L))) && p_53), 4UL)) >= g_36), g_2)) > p_54)) || p_52))));
            return l_823;
        }
    }
    l_824 = (g_520 == 0UL);
    l_825 = l_824;
    if ((safe_rshift_func_uint16_t_u_u(((&l_825 != &l_825) < ((safe_div_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u((p_52 > (((l_825 < (safe_lshift_func_uint16_t_u_u((l_834 && (g_48 == (safe_sub_func_int8_t_s_s(((((g_130 , (safe_div_func_int16_t_s_s((!(safe_lshift_func_uint16_t_u_s((((l_825 & (((safe_div_func_uint32_t_u_u((((safe_rshift_func_int8_t_s_s((g_48 <= 0L), 4)) && l_834) > g_799), 3L)) , 0xC37AL) < g_799)) , 1L) ^ 0x5C35L), l_824))), (-6L)))) , 1UL) <= l_848) || 9UL), l_825)))), p_52))) >= g_130) && 1UL)), 15)), p_52)) ^ g_48)), p_53)))
    {
        uint8_t l_874 = 0x03L;
        int32_t ***l_880 = &g_357;
        int32_t *l_887 = &g_48;
        int32_t *****l_896 = &g_233;
        uint16_t l_906 = 0x1DF8L;
        for (g_520 = (-10); (g_520 < 28); g_520 = safe_add_func_uint32_t_u_u(g_520, 7))
        {
            int16_t l_873 = 0L;
            l_825 = (safe_lshift_func_int8_t_s_s((((g_799 != 0x23L) <= (((((g_2 <= (((safe_sub_func_uint16_t_u_u((((safe_sub_func_uint32_t_u_u((g_520 >= ((((((((safe_mod_func_int8_t_s_s((safe_add_func_uint32_t_u_u((((safe_lshift_func_uint8_t_u_s((safe_mod_func_uint32_t_u_u(0xD8BFE494L, (((void*)0 != l_865) | ((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(((+(((*g_356) == ((((safe_rshift_func_uint8_t_u_u(l_825, 4)) > p_53) < 0xB0341400L) , (*g_356))) != g_799)) | l_873), g_799)), p_54)) >= 2UL)))), 5)) , 0x13L) != g_36), g_48)), g_520)) && 0x4BL) == p_54) > 0UL) == p_54) && g_2) ^ g_212) , l_874)), l_824)) , 0L) , 2UL), 1UL)) , (*g_356)) == (*l_865))) , (void*)0) != (*g_356)) <= 5L) > g_2)) , 0L), l_874));
        }
        (*l_887) = (safe_mod_func_int16_t_s_s(((p_54 && ((safe_mul_func_int8_t_s_s((l_848 , (0x54L && (g_520 || (safe_unary_minus_func_int8_t_s(((l_874 < (-9L)) | ((((l_865 == l_880) , (safe_add_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s((0xFD7EFBB5L | p_53), 1)), p_52))) , (void*)0) != (void*)0))))))), g_799)) ^ l_885)) > 7UL), l_886));
        if (p_52)
        {
            int8_t l_905 = 0L;
            (**l_865) = func_66(l_887, ((((safe_lshift_func_uint8_t_u_s(((safe_add_func_int32_t_s_s((safe_mul_func_int8_t_s_s((safe_sub_func_int16_t_s_s((((&g_357 == (void*)0) , l_896) == l_896), (safe_rshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_u((((((safe_rshift_func_uint8_t_u_u(g_212, (((safe_mul_func_uint8_t_u_u(g_520, (l_905 & (p_54 != p_52)))) , l_905) & 0UL))) == p_53) < l_905) , (void*)0) != (void*)0), 4)), 11)))), g_36)), g_520)) != g_212), l_906)) || g_36) || p_52) & g_2));
        }
        else
        {
            int32_t ****l_915 = &l_880;
            (**l_880) = (((safe_sub_func_int32_t_s_s((safe_add_func_uint32_t_u_u((safe_add_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s(9L, 0)), 4294967288UL)), (((*l_896) != l_915) == ((*l_896) == (*l_896))))), ((((safe_sub_func_uint8_t_u_u((g_520 >= (~((safe_mul_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(g_799, ((void*)0 == &l_825))), g_799)), g_212)) ^ p_53))), 1UL)) || g_520) , (**l_915)) != (**l_915)))) || g_212) , &l_825);
            (*g_358) = (*g_358);
            (***l_915) = (**g_356);
        }
    }
    else
    {
        int32_t *l_925 = &g_130;
        (*l_925) = p_54;
        (*g_356) = (*g_356);
        return l_925;
    }
    return l_926;
}
inline static uint8_t func_55(uint32_t p_56, int32_t * p_57, int8_t p_58)
{
    uint8_t l_91 = 246UL;
    int32_t *****l_311 = (void*)0;
    int32_t l_325 = 2L;
    uint32_t l_336 = 4294967295UL;
    int32_t ***l_359 = &g_357;
    uint32_t l_366 = 6UL;
    int32_t l_519 = 3L;
    uint32_t l_597 = 3UL;
    uint32_t l_630 = 18446744073709551607UL;
    int32_t l_654 = 8L;
    uint32_t l_729 = 0x645AC124L;
    uint8_t l_797 = 0UL;
    for (p_58 = (-17); (p_58 >= 13); p_58 = safe_add_func_int8_t_s_s(p_58, 1))
    {
        int32_t l_69 = (-1L);
        int32_t *l_289 = &g_48;
        int32_t *****l_318 = &g_233;
        for (p_56 = 0; (p_56 < 17); p_56 = safe_add_func_int32_t_s_s(p_56, 5))
        {
            uint8_t l_76 = 0xDEL;
            int16_t l_92 = 9L;
            int32_t *l_270 = (void*)0;
            int32_t **l_269 = &l_270;
            uint8_t l_284 = 0UL;
            uint16_t l_291 = 0x9361L;
            (*l_269) = func_66(p_57, ((l_69 || (((safe_mod_func_uint16_t_u_u(0x037DL, p_56)) , ((*p_57) == (((safe_add_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(l_76, ((safe_rshift_func_int16_t_s_s(g_2, 10)) || ((((safe_rshift_func_uint8_t_u_s((((safe_rshift_func_int16_t_s_u((safe_add_func_int16_t_s_s(0xBDF5L, (safe_div_func_int8_t_s_s((((safe_div_func_uint16_t_u_u(0UL, p_58)) == p_58) , l_69), g_2)))), 13)) < l_91) < g_2), p_56)) && 252UL) >= 1UL) <= p_56)))), g_48)) <= 1UL) ^ p_56))) , p_58)) <= l_92));
            (*l_269) = p_57;
            if (((*l_270) || 0x1B652CE7L))
            {
                int32_t *l_290 = &g_2;
                int32_t ***l_299 = &l_269;
                int32_t ****l_298 = &l_299;
                int32_t *l_312 = &g_130;
                (*l_269) = p_57;
                g_130 = ((safe_lshift_func_int8_t_s_s(((*l_270) || (safe_mod_func_int32_t_s_s((((((safe_add_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u((((safe_lshift_func_uint8_t_u_s(l_91, (safe_unary_minus_func_int32_t_s(l_284)))) & ((((((((safe_sub_func_int8_t_s_s(l_69, p_56)) > ((safe_mod_func_int16_t_s_s(p_58, (((0xCEF0L || ((l_289 == l_290) & (*p_57))) , 5UL) , 0x14CEL))) , p_56)) >= (**l_269)) & 0xFBL) , (-6L)) != l_91) >= 0xD995L) , (*l_290))) & g_130), 7)), (-1L))) | g_2) , 0x4ADBFCEAL) > 0L) && g_130), l_291))), 6)) <= p_56);
                (*l_312) = (safe_rshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_s((p_58 < (((*l_289) && ((((safe_div_func_uint16_t_u_u(((g_233 == l_298) ^ (safe_div_func_uint32_t_u_u((safe_unary_minus_func_int32_t_s((safe_rshift_func_uint16_t_u_u(((safe_add_func_int32_t_s_s(((0x1BL >= (safe_mul_func_int16_t_s_s((((safe_div_func_int16_t_s_s((((&g_130 == p_57) ^ (g_130 != ((l_311 != &g_233) , g_130))) , 0x7ADDL), g_36)) == (*l_289)) , (*l_270)), p_58))) , (****l_298)), p_56)) != g_130), p_56)))), 0x7A73CAB9L))), (*l_289))) , g_212) , 0xD160L) && p_56)) ^ (***l_299))), (*l_289))), 0));
            }
            else
            {
                int32_t l_324 = 7L;
                l_325 = ((safe_div_func_int16_t_s_s((*l_289), ((0x8CL ^ ((+(safe_sub_func_uint32_t_u_u((p_56 || ((void*)0 == l_318)), ((0xC4E5C6B9L | (safe_unary_minus_func_uint16_t_u(p_58))) || p_56)))) , (safe_mul_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(l_324, 0)), (*l_270))))) && (*p_57)))) || p_58);
                l_324 = (*p_57);
            }
            (*l_269) = l_289;
        }
    }
    if ((((p_58 & (safe_add_func_int32_t_s_s(0x4C872E6DL, ((safe_sub_func_uint16_t_u_u(((g_36 , ((((((safe_mod_func_int16_t_s_s(g_48, 5UL)) != ((safe_div_func_uint16_t_u_u(65534UL, (((safe_div_func_int8_t_s_s(((p_56 , &p_57) != &p_57), 0xBCL)) == g_36) ^ 1L))) , g_36)) , g_2) , 0xC4L) >= g_212) || l_336)) == g_36), p_58)) ^ (*p_57))))) , g_233) != (void*)0))
    {
        int32_t *l_337 = &l_325;
        int32_t *****l_355 = (void*)0;
        (*l_337) = 0x7C613937L;
        for (l_91 = 0; (l_91 < 19); l_91 = safe_add_func_int8_t_s_s(l_91, 1))
        {
            int32_t *l_340 = &l_325;
            (*l_337) = (*l_337);
            (*l_337) = 0x702C48DBL;
            l_340 = l_337;
            (*l_340) = (((safe_mul_func_uint8_t_u_u(p_58, p_58)) ^ (-4L)) | (65535UL <= p_56));
        }
        (*l_337) = (safe_mod_func_uint8_t_u_u((p_56 || p_58), (safe_mul_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(g_212, 13)), (((g_212 | ((((safe_mul_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(((0x17L & (((g_48 , l_355) != ((*l_337) , l_311)) == 0x9E29881EL)) && (*p_57)), 0)), g_2)) && p_56) && (-1L)) > g_2)) , g_356) != l_359)))));
        (*l_337) = (safe_unary_minus_func_uint8_t_u(1UL));
    }
    else
    {
        uint32_t l_365 = 0x643B3FE9L;
        int32_t l_401 = 1L;
        uint32_t l_485 = 0x075F8E6DL;
        int32_t ***l_511 = (void*)0;
        uint32_t l_518 = 4294967295UL;
        int32_t *l_531 = (void*)0;
        int32_t l_569 = 0L;
        int32_t *l_608 = &g_130;
        int8_t l_657 = 0L;
        int32_t *****l_662 = &g_233;
        uint32_t l_761 = 18446744073709551615UL;
        l_366 = (((p_58 <= g_130) >= ((void*)0 == &g_357)) > (safe_mod_func_uint32_t_u_u(l_365, (*g_358))));
        if ((~((**g_356) == p_57)))
        {
            uint32_t l_371 = 0UL;
            int32_t ****l_381 = &l_359;
            int8_t l_396 = 0x04L;
            int8_t l_504 = 4L;
            int32_t *l_602 = &l_401;
            uint8_t l_631 = 0xA3L;
            if (((((!p_56) , ((safe_mul_func_int16_t_s_s(l_371, ((((safe_lshift_func_uint16_t_u_u((safe_unary_minus_func_uint16_t_u((l_365 < (safe_lshift_func_uint16_t_u_u((safe_add_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(((l_381 == l_381) > ((+((((((****l_381) , (((safe_unary_minus_func_int32_t_s((((p_56 , (****l_381)) , (((g_130 <= g_212) , p_56) , 0UL)) ^ l_365))) , (****l_381)) < p_58)) < p_56) , (***g_356)) | p_56) , g_48)) >= (*p_57))), p_58)), 65531UL)), l_365))))), (****l_381))) < p_58) && p_56) | 0x1717L))) & (***l_359))) | g_48) && 0x01L))
            {
                int32_t ***l_392 = &g_357;
                int32_t l_395 = 0xD3F0CE08L;
                int32_t l_576 = 0x503C98C8L;
                l_396 = ((safe_mod_func_int16_t_s_s((!((((safe_unary_minus_func_int32_t_s((((*p_57) ^ (safe_rshift_func_int8_t_s_u(((((****l_381) , 0x29L) ^ ((((-1L) == p_56) < (l_392 == (void*)0)) ^ p_56)) || ((safe_sub_func_int8_t_s_s(l_365, l_365)) || (-5L))), p_58))) == g_36))) <= (****l_381)) | l_395) || 1L)), 1L)) != g_36);
                for (l_365 = 18; (l_365 != 18); l_365 = safe_add_func_uint32_t_u_u(l_365, 5))
                {
                    int32_t *l_399 = &g_130;
                    int32_t ***l_400 = &g_357;
                    (*l_399) = 1L;
                    l_401 = ((void*)0 != l_400);
                    for (l_91 = 0; (l_91 <= 25); ++l_91)
                    {
                        uint32_t l_404 = 1UL;
                        (*l_399) = ((&g_233 == &g_233) >= ((***l_392) , l_404));
                        if ((*l_399))
                            continue;
                        (**g_356) = (***l_381);
                        p_57 = func_66((*g_357), (*l_399));
                    }
                    (*l_399) = (safe_mul_func_int16_t_s_s((p_56 < ((safe_div_func_uint16_t_u_u(0UL, ((safe_sub_func_uint32_t_u_u(((safe_mod_func_uint8_t_u_u((safe_add_func_int8_t_s_s(((safe_sub_func_int16_t_s_s(g_36, (((safe_div_func_int32_t_s_s(((&g_233 != (((safe_mod_func_int16_t_s_s((!(safe_rshift_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((((safe_mul_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((safe_mod_func_uint32_t_u_u((safe_unary_minus_func_int16_t_s((((g_36 != (safe_sub_func_int8_t_s_s(0xCAL, ((l_400 == ((((****l_381) | (((safe_mul_func_uint8_t_u_u(((safe_div_func_uint32_t_u_u(((safe_add_func_int8_t_s_s(((safe_mul_func_int8_t_s_s(0L, (-9L))) == p_56), g_130)) == l_401), (***l_392))) || (-1L)), 250UL)) & g_2) | 3UL)) , p_56) , l_392)) && (***l_359))))) != 0L) , l_401))), (*p_57))), (-9L))), g_130)), 253UL)) != (*p_57)) ^ (***g_356)), (***l_400))), 5))), 0x14D8L)) , 0xF051051BL) , (void*)0)) == 0x1551B61BL), p_58)) , (*p_57)) == g_48))) , l_365), p_56)), g_130)) , (****l_381)), 4294967291UL)) , p_56))) | (***l_392))), p_58));
                }
                if ((4294967289UL == ((*g_357) == (((safe_rshift_func_int16_t_s_u((9UL && ((+((255UL >= ((safe_rshift_func_uint8_t_u_u(p_58, 7)) >= (safe_mul_func_uint16_t_u_u(((g_2 | 0xBE90L) != g_130), (((safe_add_func_int32_t_s_s((safe_lshift_func_int16_t_s_s((safe_sub_func_int32_t_s_s(0x23745E64L, (*g_358))), 5)), 0xE5F7D3A1L)) , p_57) != (*g_357)))))) , p_58)) , p_58)), p_56)) != 0UL) , (void*)0))))
                {
                    int32_t ***l_470 = &g_357;
                    uint8_t l_471 = 0x74L;
                    int32_t *****l_480 = (void*)0;
                    (*g_357) = ((((safe_mul_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((p_56 , 0xDFB4A65AL), (**g_357))), (p_56 != (safe_mod_func_uint8_t_u_u(g_130, ((safe_add_func_uint8_t_u_u((***l_392), (safe_add_func_int32_t_s_s((*p_57), ((l_470 != l_470) && g_212))))) , g_2)))))) != 0x4C93L) <= l_471) , (*g_357));
                    if ((*p_57))
                    {
                        int32_t *l_473 = &l_401;
                        (*l_473) = (!g_212);
                        (***l_381) = (void*)0;
                        (**l_359) = ((((safe_add_func_int32_t_s_s((g_212 == (p_56 , (safe_add_func_uint16_t_u_u((((p_58 , ((((((&g_233 != ((safe_lshift_func_int16_t_s_u(g_130, 4)) , l_480)) > (*p_57)) != (safe_mul_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((((&l_401 == (void*)0) & l_401) > g_130), p_56)), p_56))) && l_365) == (*p_57)) == 0x2D9DL)) > l_485) && g_36), p_58)))), g_130)) && 1UL) == 0x9884D231L) , (**g_356));
                        (*l_473) = ((safe_add_func_uint32_t_u_u((0x50E9C848L <= (safe_rshift_func_int8_t_s_s(((0x14L ^ (safe_sub_func_uint32_t_u_u(((0x16L ^ 0UL) , g_2), ((safe_mul_func_uint16_t_u_u((((safe_sub_func_uint8_t_u_u(((g_130 , (safe_add_func_int16_t_s_s(((-2L) <= g_36), ((safe_mul_func_int16_t_s_s((((safe_div_func_int8_t_s_s((0x30L == g_130), g_212)) && p_58) & 255UL), p_58)) && 0L)))) | 1L), 0x3EL)) , g_48) && (*p_57)), g_36)) == g_130)))) < l_504), g_2))), g_2)) || p_56);
                    }
                    else
                    {
                        int8_t l_507 = 0L;
                        g_520 = (p_58 && (((&g_356 == (void*)0) == (((((safe_add_func_int8_t_s_s((l_507 != ((((((safe_mod_func_int8_t_s_s((1L != (((~(((void*)0 != l_511) < (safe_mul_func_uint8_t_u_u(((safe_div_func_int32_t_s_s(0x1BEFFFF9L, ((((((safe_add_func_int32_t_s_s((((***l_359) >= p_58) | (***l_392)), p_56)) >= g_2) < g_36) || (***l_392)) | (****l_381)) ^ g_130))) & (***l_392)), 0xDEL)))) && l_518) == 0x98CBFC96L)), g_212)) <= 0xA7L) == (-9L)) , 65535UL) | g_130) <= (**g_357))), g_48)) < (***l_359)) , l_519) && (*p_57)) >= (-1L))) != 65534UL));
                    }
                    l_401 = (safe_div_func_uint32_t_u_u((((((65527UL && ((safe_sub_func_int32_t_s_s(((g_130 & (((safe_lshift_func_int16_t_s_s(((safe_mod_func_uint8_t_u_u(0x80L, (safe_rshift_func_uint16_t_u_u(((((((**g_356) != (void*)0) ^ 0x9BL) , ((**l_470) == (p_58 , (**l_470)))) , 0x6DL) >= g_212), 6)))) < 1UL), 14)) != p_56) || g_36)) ^ p_58), 0L)) == g_2)) > 0xF438B3DCL) <= 0xB964L) || p_58) > g_48), 0xC68050ACL));
                }
                else
                {
                    int32_t *l_534 = (void*)0;
                    int32_t ****l_541 = &l_359;
                    (**l_359) = (p_58 , (***l_381));
                    for (p_58 = 21; (p_58 < 19); p_58 = safe_sub_func_int8_t_s_s(p_58, 1))
                    {
                        (***l_381) = (*g_357);
                    }
                    for (l_518 = 0; (l_518 <= 15); l_518++)
                    {
                        int8_t l_553 = 0x10L;
                        int8_t l_567 = 0xE2L;
                        uint8_t l_568 = 0xDEL;
                        (***l_381) = (void*)0;
                        g_130 = (g_48 | ((safe_lshift_func_uint16_t_u_s(2UL, 5)) , ((safe_rshift_func_int8_t_s_s((g_212 && (l_553 & (~((((safe_add_func_int32_t_s_s((safe_rshift_func_int16_t_s_u(g_520, (safe_rshift_func_int8_t_s_u((((safe_mul_func_uint8_t_u_u((((((*p_57) > l_553) , (safe_lshift_func_int16_t_s_u(((safe_add_func_uint32_t_u_u((0xC1A5L ^ ((g_130 ^ p_56) != p_58)), (*p_57))) && l_567), 13))) || 0x8973L) && 0x6CL), p_56)) , (*p_57)) == (*p_57)), 0)))), l_567)) < 0xA5L) , g_520) && 0xA8D1L)))), 1)) ^ l_568)));
                        if (l_569)
                            continue;
                    }
                    if ((*p_57))
                    {
                        int32_t *l_570 = &l_401;
                        (**g_356) = l_570;
                    }
                    else
                    {
                        int32_t *l_575 = (void*)0;
                        p_57 = (**g_356);
                        (**g_356) = ((safe_sub_func_int32_t_s_s((0xAB950D48L != ((safe_mul_func_uint8_t_u_u(p_58, (g_2 == 0xB2L))) != g_130)), 4294967286UL)) , (*g_357));
                        l_576 = 0xC37CB852L;
                    }
                }
            }
            else
            {
                int32_t l_598 = 0xB89DED05L;
                uint8_t l_600 = 0x7DL;
                if ((0x226AL != g_520))
                {
                    int32_t l_599 = 0x44CD46D9L;
                    if ((g_130 != 0xD8EEL))
                    {
                        int32_t l_596 = 0x05295536L;
                        (*g_357) = func_66((((safe_add_func_uint16_t_u_u((g_2 && 0xE9EAL), (0x34L > (safe_rshift_func_uint8_t_u_s(255UL, (safe_div_func_int16_t_s_s(1L, ((safe_rshift_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((safe_add_func_int32_t_s_s(((((*p_57) != (((+(safe_rshift_func_uint16_t_u_u((((safe_mod_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(65534UL, (-5L))), l_596)) , (void*)0) == (void*)0), l_597))) , 7UL) < p_58)) , (*g_357)) != (***l_381)), g_48)), g_520)), 12)) , (****l_381))))))))) & l_598) , p_57), p_56);
                    }
                    else
                    {
                        return l_599;
                    }
                    (**g_356) = func_66((**l_359), l_600);
                    l_598 = ((0x66547D1CL | l_599) < (!g_48));
                    p_57 = l_602;
                }
                else
                {
                    (*g_357) = (p_56 , func_66(&l_598, g_48));
                }
                (*l_602) = (safe_mul_func_int16_t_s_s(((***l_359) == (safe_unary_minus_func_uint16_t_u((((((safe_mod_func_uint16_t_u_u(1UL, p_56)) < (((g_36 , l_608) != p_57) != (***l_359))) , ((*g_356) != &p_57)) && 0x2F9EL) == (*l_602))))), (-1L)));
                for (g_130 = 0; (g_130 == 3); g_130 = safe_add_func_uint16_t_u_u(g_130, 1))
                {
                    int32_t l_632 = (-9L);
                    (*l_602) = (((g_48 < (safe_rshift_func_uint16_t_u_u((((safe_add_func_int32_t_s_s((*p_57), ((((safe_mod_func_uint32_t_u_u(((safe_sub_func_int32_t_s_s((p_56 > g_130), (safe_lshift_func_int8_t_s_u(p_58, 7)))) < (-1L)), ((safe_mul_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_u((safe_unary_minus_func_uint8_t_u(((((safe_mul_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(((((g_520 && ((p_56 ^ (9UL > l_630)) < (*l_608))) == p_58) >= 0x9BL) , (-1L)), g_2)), 4UL)) >= 0x4108L) , p_58) , g_48))), 2)) != p_56), l_631)) , 1L))) , 0x41923634L) , g_520) , p_58))) , l_632) , g_48), p_56))) , 251UL) >= l_632);
                    (*g_357) = (*g_357);
                    for (l_598 = 3; (l_598 != 5); l_598++)
                    {
                        (*g_357) = p_57;
                        p_57 = p_57;
                    }
                }
            }
        }
        else
        {
            int8_t l_635 = 0x84L;
            uint16_t l_674 = 1UL;
            int8_t l_675 = 0x40L;
            int32_t ****l_687 = (void*)0;
            uint8_t l_787 = 0UL;
            int32_t *l_800 = &g_2;
            l_635 = (*p_57);
            if (((safe_add_func_uint16_t_u_u((*l_608), (safe_sub_func_int16_t_s_s(p_58, (safe_sub_func_int32_t_s_s((***g_356), ((safe_div_func_uint32_t_u_u((((void*)0 != (*l_359)) == ((p_56 > (safe_div_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((safe_add_func_uint32_t_u_u(1UL, ((safe_mul_func_int16_t_s_s((safe_div_func_uint8_t_u_u(l_635, l_654)), g_212)) | p_58))), g_48)), 0x0EF6L))) == 0xAD058136L)), (**g_357))) && (-8L)))))))) || p_56))
            {
                return p_56;
            }
            else
            {
                int32_t ****l_658 = &l_359;
                int8_t l_686 = (-9L);
                int32_t l_695 = 1L;
                uint8_t l_750 = 0x57L;
                uint32_t l_762 = 8UL;
                for (l_365 = (-25); (l_365 >= 59); ++l_365)
                {
                    uint32_t l_673 = 0UL;
                    uint8_t l_684 = 0x27L;
                    p_57 = (((l_657 , &g_356) != l_658) , (*g_357));
                    for (l_336 = 3; (l_336 == 6); ++l_336)
                    {
                        uint32_t l_685 = 1UL;
                        int32_t ****l_688 = &l_359;
                    }
                    (*l_608) = (*p_57);
                }
                (*l_658) = (*l_658);
                for (l_325 = 19; (l_325 <= 29); l_325 = safe_add_func_uint16_t_u_u(l_325, 7))
                {
                    (*l_608) = (***g_356);
                    (*l_608) = (*p_57);
                    return (*l_608);
                }
                if ((safe_mod_func_int32_t_s_s(((safe_mod_func_int16_t_s_s(p_58, (safe_mod_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u((safe_sub_func_uint8_t_u_u((safe_div_func_uint16_t_u_u((p_58 <= (((safe_sub_func_uint32_t_u_u(0xC4BF5E63L, (safe_add_func_int8_t_s_s((safe_mul_func_int16_t_s_s((safe_unary_minus_func_int32_t_s((((0xC901L & (safe_mul_func_uint8_t_u_u(p_58, p_58))) && (safe_rshift_func_uint8_t_u_s(((safe_mul_func_uint16_t_u_u((safe_add_func_int16_t_s_s(p_56, g_130)), ((&g_233 != l_662) < p_56))) >= p_56), 6))) , (*p_57)))), p_56)), 247UL)))) & l_729) , (****l_658))), g_48)), p_58)), g_130)), (*p_57))))) == g_130), 0x20D12E5BL)))
                {
                    int32_t l_751 = 0x13A05FC9L;
                    int32_t ****l_755 = &g_356;
                    (*g_357) = func_66(p_57, p_58);
                    (*l_608) = (*p_57);
                    if ((safe_lshift_func_int16_t_s_s(0xB812L, 8)))
                    {
                        uint32_t l_734 = 1UL;
                        int32_t *l_749 = &g_130;
                        int32_t ****l_754 = &g_356;
                        (*g_357) = (*g_357);
                        (*l_749) = ((safe_mod_func_uint16_t_u_u(l_734, ((****l_658) || 0x0EL))) , (((*p_57) & ((****l_658) , (safe_rshift_func_int16_t_s_u((safe_mod_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_u(0x9336L, 0)), (safe_lshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_u((0x8DL || ((((safe_mul_func_int8_t_s_s(((((((void*)0 == l_749) == l_750) , p_58) >= p_56) , 0x54L), g_2)) >= 0xD94F229DL) || 0x44EB7B80L) , l_751)), 3)), (*l_749))))), p_56)), 7)))) == p_58));
                        (***l_658) = func_66(p_57, (((safe_rshift_func_uint16_t_u_u(((((l_754 == (g_2 , (p_58 , l_755))) ^ (((safe_rshift_func_uint8_t_u_u(0x8DL, 5)) | ((+0xB0F9L) > (0x6DF5L < ((l_761 < g_2) >= p_56)))) & (****l_658))) , p_58) , 65535UL), l_762)) , 0xC6F81391L) <= (*l_608)));
                        (***l_754) = (*g_357);
                    }
                    else
                    {
                        (*l_608) = (p_56 || ((g_2 < (+((*p_57) < g_48))) ^ (((safe_mod_func_uint16_t_u_u(((&l_687 == &l_687) || g_2), (safe_unary_minus_func_int16_t_s(g_212)))) <= ((safe_mul_func_int16_t_s_s(((((+(safe_mod_func_uint16_t_u_u(((p_58 & (****l_658)) , p_56), (****l_755)))) | p_58) >= g_36) | g_2), 0xA05FL)) <= (****l_755))) | p_58)));
                    }
                    for (l_761 = 0; (l_761 <= 47); l_761++)
                    {
                        int32_t l_790 = 8L;
                        (***l_658) = (*g_357);
                        (*l_608) = (((safe_sub_func_int16_t_s_s((*l_608), (safe_mul_func_uint16_t_u_u((((safe_add_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(((((****l_658) > (safe_add_func_int32_t_s_s((safe_mul_func_uint16_t_u_u((((0xF81DL != (safe_unary_minus_func_int16_t_s(0x51A3L))) & (l_787 , (0xA2L > ((safe_lshift_func_int16_t_s_s(((((l_790 , ((~(((!p_58) || ((safe_add_func_uint32_t_u_u(((safe_add_func_int16_t_s_s(((g_36 ^ 0x31L) == p_56), (****l_658))) >= g_212), p_58)) && g_48)) ^ (****l_755))) , p_58)) > 1L) || 0x34780991L) || l_790), 0)) ^ 8L)))) | g_212), 0xA554L)), (*p_57)))) , g_2) > (*l_608)), l_790)), p_58)) || l_797) & 0L), p_56)))) != 0UL) , 0xF3FABB4CL);
                        if ((****l_658))
                            continue;
                    }
                }
                else
                {
                    int32_t *l_798 = &l_401;
                    l_798 = p_57;
                    g_799 = (*p_57);
                }
            }
            (**g_356) = func_66(l_800, g_520);
            (*g_357) = (**g_356);
        }
    }
    return p_58;
}
inline static int32_t * func_66(int32_t * p_67, uint32_t p_68)
{
    int32_t *l_93 = &g_2;
    int32_t **l_94 = &l_93;
    uint32_t l_164 = 0xF311A8DCL;
    uint32_t l_230 = 1UL;
    int32_t *****l_268 = &g_233;
    (*l_94) = (p_68 , l_93);
    if ((safe_mod_func_int32_t_s_s((((safe_add_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u((**l_94), p_68)) , (safe_add_func_int16_t_s_s(p_68, (*l_93)))), (safe_rshift_func_uint8_t_u_s(((((safe_lshift_func_uint8_t_u_u(((((((safe_mul_func_int16_t_s_s((safe_unary_minus_func_int8_t_s((safe_mul_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_s(g_48, ((safe_sub_func_uint32_t_u_u(((safe_sub_func_int8_t_s_s((p_68 != (safe_mul_func_int8_t_s_s((!((0UL && g_2) , (((255UL >= p_68) , (*l_93)) <= (**l_94)))), (**l_94)))), (**l_94))) > g_48), p_68)) , 1L))) < (*l_93)), 0L)))), g_36)) || 1L) <= (**l_94)) | (-2L)) & p_68) != (**l_94)), (**l_94))) || 2L) , g_2) != g_2), 3)))) >= 255UL) ^ 9L), 8L)))
    {
        int32_t *l_128 = &g_2;
        int32_t *l_129 = &g_130;
        (*l_94) = (*l_94);
        (*l_129) = ((0L && (0UL | 0L)) | (safe_add_func_int8_t_s_s((!((safe_div_func_int16_t_s_s((p_68 && g_2), ((((**l_94) || (l_128 != (g_36 , &g_48))) == 0x835EL) , p_68))) && 0xE219L)), (*l_128))));
    }
    else
    {
        uint32_t l_163 = 0xD6B4620FL;
        int32_t *l_203 = &g_48;
        (*l_94) = &g_130;
        (*l_94) = p_67;
        if (((((((safe_lshift_func_int8_t_s_u((safe_mod_func_int16_t_s_s((((safe_mod_func_uint16_t_u_u((((safe_div_func_int32_t_s_s((safe_add_func_uint16_t_u_u(((safe_sub_func_int8_t_s_s((g_130 , (~(safe_lshift_func_int8_t_s_s(((p_68 <= (p_67 == (void*)0)) , ((safe_rshift_func_int16_t_s_s(((**l_94) <= g_36), 5)) | (safe_rshift_func_int8_t_s_u((safe_add_func_uint8_t_u_u((((safe_lshift_func_int16_t_s_u((!(safe_div_func_uint16_t_u_u(p_68, p_68))), 9)) < (safe_sub_func_int16_t_s_s(((safe_add_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s(((&p_67 == &p_67) > p_68), 3)), 4294967289UL)) , 0x91D6L), l_163))) == (*p_67)), l_163)), 7)))), 0)))), l_163)) <= g_48), (**l_94))), 1UL)) , 9L) | g_48), l_163)) != p_68) ^ p_68), g_130)), g_130)) ^ l_164) > p_68) < p_68) & p_68) ^ l_163))
        {
            int32_t *l_165 = &g_130;
            int32_t **l_190 = &l_165;
            int32_t l_200 = 0x310A9C07L;
            (*l_165) = (*p_67);
            if (((safe_mod_func_int16_t_s_s((*l_165), (safe_rshift_func_int8_t_s_u((safe_mod_func_int8_t_s_s((&g_2 == &g_2), (safe_lshift_func_uint8_t_u_u(((((*l_165) == (0xEB54A4BBL >= (safe_rshift_func_int16_t_s_u((+(((((0x4EEAL > (safe_lshift_func_uint16_t_u_s((l_163 , (*l_93)), ((*l_165) | p_68)))) , p_68) <= 0xF14FL) == 0L) || l_163)), 9)))) ^ 6UL) , g_2), 7)))), p_68)))) && 0L))
            {
                int32_t ***l_179 = &l_94;
                int32_t ****l_180 = &l_179;
                (*l_180) = l_179;
            }
            else
            {
                int16_t l_189 = 0xDF02L;
                int32_t **l_191 = &l_165;
                int8_t l_206 = 0xAAL;
                (*l_165) = g_36;
                (*l_165) = 0x2574B05BL;
                if (((safe_mul_func_uint16_t_u_u((0xB37EAFC3L != (safe_lshift_func_int8_t_s_s((safe_div_func_int16_t_s_s(((((safe_sub_func_int8_t_s_s(p_68, ((((l_189 ^ (l_190 == l_191)) & (*p_67)) && (0xE3C26F71L & (safe_sub_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((safe_div_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u(g_2, ((g_2 , l_200) , l_163))), p_68)), g_36)), (-7L))))) , (**l_94)))) && 0xC097D859L) , 0UL) >= p_68), p_68)), l_163))), g_48)) && g_36))
                {
                    for (g_130 = 18; (g_130 >= (-27)); --g_130)
                    {
                        uint16_t l_207 = 0x7662L;
                        g_212 = ((p_67 == l_203) ^ (safe_sub_func_int16_t_s_s(((**l_191) <= l_206), (p_68 , (l_207 != (safe_lshift_func_int8_t_s_s((safe_sub_func_int32_t_s_s((p_68 , ((void*)0 != &l_191)), p_68)), p_68)))))));
                    }
                    (**l_191) = (**l_94);
                }
                else
                {
                    return p_67;
                }
            }
            for (g_212 = (-8); (g_212 != 12); ++g_212)
            {
                if ((**l_94))
                    break;
            }
            (*l_165) = ((safe_sub_func_int32_t_s_s(((((**l_94) > (safe_rshift_func_uint8_t_u_s((((safe_add_func_int16_t_s_s((*l_203), ((safe_lshift_func_int16_t_s_s(((safe_add_func_int16_t_s_s(((safe_div_func_int8_t_s_s(((safe_mul_func_int16_t_s_s(p_68, (*l_93))) , (safe_unary_minus_func_uint16_t_u((((p_67 != (void*)0) | 1L) < (((void*)0 != l_203) , p_68))))), p_68)) <= g_130), 0x0199L)) & 0x0004L), (**l_190))) ^ p_68))) ^ (*l_203)) != g_48), p_68))) , p_68) , (*p_67)), l_230)) >= 0UL);
        }
        else
        {
            int32_t ***l_232 = (void*)0;
            int32_t ****l_231 = &l_232;
            int32_t l_244 = 0x8A6757B9L;
            int32_t *l_267 = &g_130;
            if (((l_231 != g_233) & ((p_68 , g_233) == ((safe_rshift_func_uint16_t_u_u(g_48, (g_130 == (safe_lshift_func_int16_t_s_u(((safe_add_func_int32_t_s_s((*p_67), ((((0UL <= (safe_sub_func_int32_t_s_s((safe_lshift_func_int16_t_s_s(((((g_212 > 255UL) == (*l_203)) , l_244) == (*p_67)), 11)), (*l_203)))) == (**l_94)) ^ 0xA7L) , 0x7E4F7073L))) <= (*l_203)), g_130))))) , &l_232))))
            {
                (*l_94) = (*l_94);
            }
            else
            {
                int32_t *l_249 = &l_244;
                (*l_249) = (safe_rshift_func_int8_t_s_u((safe_add_func_int8_t_s_s((0x77C8831FL <= 0x1E180988L), (*l_203))), 4));
                for (l_163 = 8; (l_163 != 38); ++l_163)
                {
                    if ((*p_67))
                        break;
                    (*l_94) = p_67;
                    if (g_2)
                    {
                        int32_t *l_252 = &l_244;
                        (*l_94) = (void*)0;
                        return p_67;
                    }
                    else
                    {
                        uint32_t l_253 = 0x397D913FL;
                        if ((*p_67))
                            break;
                        if (l_253)
                            continue;
                    }
                }
            }
            (*l_267) = (safe_mod_func_uint32_t_u_u(g_36, ((p_68 | (safe_mod_func_int16_t_s_s(g_48, (safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_u(0x2613L, (*l_203))) <= (((((+(((p_68 , ((safe_mod_func_int8_t_s_s(((void*)0 != &p_67), (4294967292UL && p_68))) || 0xAAF2569BL)) & p_68) , g_130)) > p_68) && g_2) | (*l_93)) < 252UL)), 7)), 3))))) , 0xDFB0B29FL)));
        }
    }
    l_268 = (void*)0;
    return p_67;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_2;
    csmith_sink_ = g_36;
    csmith_sink_ = g_48;
    csmith_sink_ = g_130;
    csmith_sink_ = g_212;
    csmith_sink_ = g_520;
    csmith_sink_ = g_799;
    csmith_sink_ = g_1082;
    platform_main_end(0,0);
    return 0;
}
