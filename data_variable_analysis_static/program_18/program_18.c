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
static uint8_t g_5 = 0x67;
static int32_t *g_52 = (void*)0;
static int32_t g_58 = 0x081B2706;
static int32_t ** const g_256 = &g_52;
static int32_t ** const *g_255 = &g_256;
static int32_t ** const **g_254 = &g_255;
static int32_t **g_289 = &g_52;
static int32_t ***g_288 = &g_289;
static int32_t ****g_287 = &g_288;
static int32_t *****g_286 = &g_287;
static int32_t g_401 = 1;
static uint8_t g_465 = 0U;
static uint32_t g_514 = 0x1C377F9D;
static int32_t g_721 = 0;
static uint32_t g_825 = 0U;
static uint32_t g_834 = 1U;
static int16_t g_856 = (-3);
static int32_t * const *g_986 = &g_52;
static int32_t * const **g_985 = &g_986;
static int32_t * const ***g_984 = &g_985;
static const uint32_t func_1(void);
static uint32_t func_2(uint32_t p_3, uint32_t p_4);
static uint16_t func_6(const int32_t p_7, uint16_t p_8, int16_t p_9, uint16_t p_10);
static int32_t * func_28(uint32_t p_29, uint16_t p_30, int32_t * p_31, int32_t * p_32, const int32_t * p_33);
static int32_t * func_36(int32_t * p_37, int32_t p_38);
static int8_t func_42(int32_t p_43, const int8_t p_44);
static uint16_t func_45(int32_t * p_46, int32_t p_47);
static int32_t * func_48(uint32_t p_49);
static uint16_t func_53(int8_t p_54, uint32_t p_55, uint32_t p_56);
static int32_t * const func_66(const int16_t p_67, int32_t * const p_68, int32_t * p_69, int32_t * p_70, uint8_t p_71);
static const uint32_t func_1(void)
{
    const int16_t l_11 = 0xA095;
    uint32_t l_1050 = 4294967292U;
    int32_t l_1051 = (-1);
    l_1051 = (func_2((g_5 >= (g_5 <= (g_5 <= func_6(l_11, (safe_mul_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(((((safe_mul_func_int8_t_s_s((l_11 | g_5), (safe_mod_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((safe_mul_func_int8_t_s_s((((g_5 >= ((((safe_lshift_func_int16_t_s_s(0xDE45, 11)) || g_5) != g_5) || 0x4D07)) < g_5) ^ l_11), l_11)), l_11)), l_11)) && l_11), (-1))))) & l_11) > g_5) < l_11), g_5)), l_11)), l_11, g_5)))), g_465) | l_1050);
    return l_1051;
}
static uint32_t func_2(uint32_t p_3, uint32_t p_4)
{
    uint32_t l_1031 = 0xB1CC18E5;
    int32_t *l_1033 = (void*)0;
    int32_t ***l_1042 = &g_289;
    int32_t l_1049 = (-6);
    for (g_721 = 27; (g_721 > 24); g_721--)
    {
        uint8_t l_1030 = 5U;
        int32_t *l_1032 = &g_58;
        l_1030 = p_3;
        l_1031 = l_1030;
        if (l_1030)
            continue;
        (**g_255) = l_1032;
    }
    (*g_289) = l_1033;
    for (g_514 = 0; (g_514 < 59); g_514 = safe_add_func_int32_t_s_s(g_514, 5))
    {
        int32_t ***l_1043 = &g_289;
        int32_t **** const l_1048 = (void*)0;
        for (p_4 = 19; (p_4 != 43); ++p_4)
        {
            return g_401;
        }
        if (p_3)
            break;
        l_1049 = ((safe_mul_func_int16_t_s_s(((l_1031 & p_4) < ((safe_mul_func_uint8_t_u_u((l_1042 == l_1043), (safe_sub_func_uint8_t_u_u((safe_add_func_int16_t_s_s((0x4D2C < (g_856 & l_1031)), ((void*)0 != l_1048))), 0U)))) < 0x8BB334DD)), 0xFF38)) && 0);
    }
    return p_3;
}
static uint16_t func_6(const int32_t p_7, uint16_t p_8, int16_t p_9, uint16_t p_10)
{
    int32_t *l_39 = (void*)0;
    int8_t l_570 = 0xA6;
    int32_t *l_976 = &g_721;
    uint32_t l_979 = 1U;
    int32_t * const *l_983 = &l_39;
    int32_t * const **l_982 = &l_983;
    int32_t * const ***l_981 = &l_982;
    int32_t *l_1012 = &g_721;
    int16_t l_1027 = 0x1133;
    (***g_254) = func_28(p_7, (safe_add_func_int32_t_s_s(p_10, g_5)), func_36(l_39, (((safe_mul_func_int8_t_s_s(func_42(p_7, p_7), (((safe_mod_func_int32_t_s_s(p_9, l_570)) | g_465) > g_465))) & g_5) >= (-1))), l_39, l_39);
    if ((l_976 == (void*)0))
    {
        uint32_t l_980 = 4294967287U;
        int32_t l_987 = (-1);
        int32_t *l_991 = &g_721;
        if (((g_825 == (((safe_mul_func_int8_t_s_s((p_9 >= 0x1D), g_401)) < p_8) & (p_8 <= (p_10 >= (-1))))) < ((l_979 & l_980) & g_825)))
        {
            g_984 = l_981;
            return l_987;
        }
        else
        {
            int32_t **l_990 = &l_976;
            (*l_976) = (p_9 || p_7);
            if ((p_7 <= ((safe_mul_func_uint8_t_u_u(p_8, ((((&l_982 != (void*)0) ^ ((p_7 & p_9) && ((((l_990 != (*g_985)) >= (-5)) | p_8) > p_8))) || p_10) < 0xA48A82FD))) & p_7)))
            {
                (*l_990) = l_991;
            }
            else
            {
                uint32_t l_1002 = 4294967295U;
                int32_t l_1011 = 1;
                l_1011 = ((safe_rshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_s(((safe_sub_func_int32_t_s_s((g_58 == (safe_lshift_func_uint8_t_u_s(((-9) & (0xA1 < (safe_mod_func_uint32_t_u_u(((g_58 && ((l_1002 != (*l_991)) != (0 != ((safe_rshift_func_int16_t_s_u(((safe_rshift_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((((safe_lshift_func_uint8_t_u_s((g_401 > l_1002), (*l_976))) > g_825) && (*l_976)), 0U)), p_9)) ^ (**l_990)), 5)) < 0U)))) >= (*l_991)), g_856)))), 2))), (**l_990))) && (*l_991)), 1)), 2)) && 0x91);
            }
            l_991 = (**l_982);
            (***g_254) = l_1012;
        }
        (*l_1012) = 0;
        (*l_976) = 0x8CC0FC5A;
        return g_58;
    }
    else
    {
        uint16_t l_1013 = 0x04E2;
        int32_t l_1014 = 0xEB6FBAF7;
        l_1014 = l_1013;
        (***g_254) = func_66((safe_mul_func_uint8_t_u_u(0x79, (((4294967295U >= (0x05 > ((safe_sub_func_int16_t_s_s((+(g_825 | ((!(-1)) <= (safe_add_func_uint16_t_u_u(((*g_256) != (void*)0), (safe_sub_func_uint16_t_u_u((((safe_lshift_func_uint16_t_u_u(g_825, ((((((-1) | p_7) <= 1) ^ p_8) == (*l_1012)) >= p_10))) < 0U) & g_401), g_5))))))), 1U)) | p_7))) >= 0U) == g_465))), &l_1014, (*g_289), &l_1014, p_10);
    }
    (*l_1012) = p_10;
    (*l_976) = p_9;
    return l_1027;
}
static int32_t * func_28(uint32_t p_29, uint16_t p_30, int32_t * p_31, int32_t * p_32, const int32_t * p_33)
{
    int32_t ***l_891 = &g_289;
    int32_t l_902 = 0x24A557D3;
    int32_t l_938 = 0;
    int32_t *****l_970 = &g_287;
    int32_t *l_975 = &g_58;
    if (((*g_254) == l_891))
    {
        int32_t *l_892 = &g_721;
        int32_t *l_893 = &g_721;
        (*l_892) = (65527U == g_5);
        (*g_256) = &l_902;
    }
    else
    {
        uint32_t l_907 = 0U;
        const int32_t ***l_910 = (void*)0;
        uint8_t l_939 = 255U;
        int8_t l_948 = 0x90;
        int32_t l_959 = 0xE8A62546;
        if (((safe_mul_func_uint16_t_u_u(((g_514 >= ((((safe_mod_func_uint8_t_u_u(254U, l_907)) != 6) ^ (safe_rshift_func_int8_t_s_u(l_907, (l_910 != l_910)))) ^ g_5)) <= (safe_add_func_uint32_t_u_u(((3U < l_907) & 0xD2DDFCDC), p_30))), g_465)) <= 0x46E0))
        {
            int32_t *l_920 = &g_721;
            for (g_401 = 0; (g_401 >= (-26)); g_401--)
            {
                uint32_t l_915 = 0x8262413A;
                const int32_t **l_916 = (void*)0;
                const int32_t **l_917 = (void*)0;
                const int32_t *l_919 = &g_58;
                const int32_t **l_918 = &l_919;
                if (l_915)
                    break;
                (*l_918) = p_33;
                return l_920;
            }
        }
        else
        {
            const int32_t *l_921 = &g_721;
            (**g_288) = p_32;
            l_921 = l_921;
            for (l_902 = 0; (l_902 == 29); l_902 = safe_add_func_int32_t_s_s(l_902, 8))
            {
                int32_t l_937 = 0xC2EE4D83;
                l_938 = ((((safe_mod_func_int16_t_s_s((((*g_254) == (void*)0) <= (safe_lshift_func_int16_t_s_s(((1 | ((void*)0 == &g_287)) | (!((safe_rshift_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(g_825, (0x3B | 0x24))), l_937)), g_58)) & 5), 7)) && (*l_921)))), g_465))), 0x4434)) | g_834) && p_29) >= g_825);
                l_939 = l_937;
                if (l_937)
                    continue;
            }
        }
        l_959 = ((((((safe_mod_func_uint16_t_u_u(g_834, (safe_mul_func_uint8_t_u_u(l_907, (safe_add_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((((l_948 >= (((safe_sub_func_int8_t_s_s((((((((safe_sub_func_int32_t_s_s((&g_288 == (void*)0), l_938)) || (safe_add_func_uint16_t_u_u(((safe_sub_func_uint8_t_u_u(247U, p_29)) ^ (((safe_add_func_int8_t_s_s((1U >= g_721), p_30)) <= l_938) && g_5)), p_29))) || p_30) > 0xB543) || p_29) <= (-1)) || p_29), g_465)) || 0x42EFFE01) & g_401)) || g_856) | 1U), g_401)), g_58)))))) < g_514) && l_938) && p_29) ^ g_721) < p_30);
    }
    (*l_975) = (safe_lshift_func_int8_t_s_u(((safe_mod_func_int16_t_s_s(((safe_mod_func_int16_t_s_s((safe_add_func_int16_t_s_s(0, (safe_mul_func_uint16_t_u_u(0U, (l_970 == (void*)0))))), (0xA0 ^ g_401))) == (safe_mul_func_int8_t_s_s(0, (l_938 == (safe_add_func_uint32_t_u_u(9U, 0)))))), 1)) == g_834), g_401));
    (*l_975) = 0x91E039FE;
    (***g_254) = &l_902;
    return p_31;
}
static int32_t * func_36(int32_t * p_37, int32_t p_38)
{
    int32_t *l_573 = &g_58;
    int32_t *** const l_588 = &g_289;
    int32_t *****l_660 = &g_287;
    uint32_t l_662 = 0xC9CC4180;
    uint8_t l_739 = 253U;
    uint32_t l_880 = 6U;
    int32_t *l_890 = &g_58;
    (*l_573) = ((safe_rshift_func_int8_t_s_u(0xDC, (p_38 == (l_573 == &p_38)))) < (safe_lshift_func_int16_t_s_s(g_5, (!(safe_rshift_func_int16_t_s_s((g_465 < (((safe_mod_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_s((((safe_add_func_int16_t_s_s((-1), 0x9AAC)) != ((safe_add_func_int8_t_s_s(1, 0)) && (*l_573))) ^ g_514), 4)) != g_401), (*l_573))) && p_38) != g_401)), p_38))))));
    if ((*l_573))
    {
        int32_t l_595 = 0x1039D80E;
        int32_t l_596 = 1;
        int32_t ***l_624 = &g_289;
        int32_t *****l_631 = &g_287;
        int32_t l_645 = 0xAC7718B6;
        const int8_t l_661 = 0x75;
        int16_t l_709 = 0x4482;
        int32_t ****l_720 = (void*)0;
        int32_t l_740 = 0x0C95DFDB;
        int32_t ** const l_744 = &g_52;
        int32_t l_749 = (-1);
        int32_t *l_848 = &g_721;
        (*g_256) = (*g_256);
        if ((*l_573))
        {
            int32_t ** const * const l_587 = &g_289;
            int32_t *l_687 = &g_58;
            if (((l_587 != l_588) || (((((safe_rshift_func_int8_t_s_u(((safe_add_func_uint8_t_u_u(g_401, (safe_add_func_int8_t_s_s(l_595, (l_596 <= p_38))))) & (1U > p_38)), 4)) | g_465) || g_514) != 0xA6) != g_58)))
            {
                return (**g_255);
            }
            else
            {
                uint16_t l_614 = 65535U;
                for (l_595 = 0; (l_595 <= (-7)); l_595--)
                {
                    uint32_t l_599 = 0xBF9409E8;
                    int16_t l_600 = 5;
                    int32_t l_615 = 4;
                    g_286 = (void*)0;
                    l_599 = (4294967295U && 0x65B0B300);
                    (*l_573) = l_600;
                    l_615 = (safe_mul_func_uint8_t_u_u(((((safe_mul_func_uint8_t_u_u(0x83, (((safe_add_func_uint32_t_u_u(((((*g_288) != (void*)0) == (((safe_rshift_func_uint16_t_u_u(g_514, ((safe_mod_func_int8_t_s_s(g_401, (safe_add_func_int32_t_s_s((+((-3) > ((((l_614 | g_401) == g_401) != l_614) || g_465))), l_596)))) | 4294967292U))) & 0xBC) | l_600)) ^ 254U), l_595)) == p_38) == 5U))) <= g_401) > p_38) || p_38), g_5));
                }
                (*l_573) = (0 && (safe_lshift_func_uint8_t_u_s(((((((safe_add_func_int16_t_s_s(p_38, (safe_rshift_func_int16_t_s_u(g_401, 14)))) || p_38) != l_614) || (safe_rshift_func_int8_t_s_u((l_624 == l_624), 7))) ^ p_38) && g_465), p_38)));
            }
            if ((safe_add_func_uint32_t_u_u(g_514, (&l_588 != (void*)0))))
            {
                const int32_t ***l_635 = (void*)0;
                const int32_t ****l_634 = &l_635;
                int32_t *l_648 = (void*)0;
                (**l_588) = func_48(g_465);
                if ((safe_mul_func_uint16_t_u_u(((safe_sub_func_uint16_t_u_u(0x8198, ((l_631 != &g_254) && (safe_mul_func_uint16_t_u_u((((((l_634 != (*l_631)) >= ((~(safe_sub_func_uint16_t_u_u(((safe_sub_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s(((void*)0 == &l_635), (safe_lshift_func_uint8_t_u_u(l_645, ((&p_38 != (**l_588)) > (***l_587)))))), 5U)) < 2U), p_38))) & (***l_587))) || g_58) & (-4)) < g_514), g_5))))) | 0x4B03DB69), 0)))
                {
                    int32_t ***l_658 = &g_289;
                    for (l_596 = 21; (l_596 >= (-2)); l_596 = safe_sub_func_int16_t_s_s(l_596, 1))
                    {
                        int32_t **l_649 = (void*)0;
                        int32_t **l_650 = &g_52;
                        (*l_650) = func_66(g_401, (**l_588), (***g_254), l_648, (***l_587));
                        (***g_255) = ((g_5 < ((*l_624) != (void*)0)) ^ (((safe_rshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(((safe_unary_minus_func_int16_t_s(((safe_rshift_func_int8_t_s_s(((l_658 != (**l_631)) || (!((p_38 || (&g_287 != l_660)) >= 0x3CEE95F5))), p_38)) == g_401))) >= l_661), (***l_587))), p_38)) > 1U) & l_662));
                    }
                    for (g_401 = 0; (g_401 == (-15)); g_401 = safe_sub_func_uint8_t_u_u(g_401, 3))
                    {
                        int32_t ****l_665 = &l_658;
                        (**l_658) = (**g_255);
                        (****l_631) = func_48((***l_658));
                        (*l_660) = l_665;
                        (*g_256) = func_48((***l_658));
                    }
                    for (g_58 = 6; (g_58 < 23); g_58 = safe_add_func_uint8_t_u_u(g_58, 9))
                    {
                        int32_t *l_680 = &l_595;
                        (*l_680) = ((g_465 != 0x3565D500) >= ((0x346B5924 & 0x40608B1C) || (((safe_rshift_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(5U, (((safe_rshift_func_int16_t_s_u((safe_sub_func_int32_t_s_s((***l_658), (safe_add_func_uint8_t_u_u(g_5, ((safe_unary_minus_func_uint16_t_u((+((***l_624) < g_5)))) == 0x6D))))), 2)) & p_38) && (*l_573)))), g_401)) <= (***l_587)) & p_38)));
                        (*g_256) = &p_38;
                    }
                    (****l_631) = (***g_254);
                }
                else
                {
                    (*g_256) = (**l_624);
                }
                for (p_38 = 0; (p_38 != (-5)); --p_38)
                {
                    int32_t ** const * const **l_683 = (void*)0;
                    int32_t ** const * const *l_685 = &g_255;
                    int32_t ** const * const **l_684 = &l_685;
                    (***g_254) = func_66((***l_624), (**l_624), func_48((***l_624)), (**l_587), p_38);
                    (*l_684) = &l_587;
                    if (p_38)
                        continue;
                }
            }
            else
            {
                int32_t l_686 = 0;
                int32_t l_722 = 0x00010428;
                int32_t ***l_723 = (void*)0;
                (*l_687) = (l_686 && ((((g_465 & (((l_687 != (void*)0) && (safe_mul_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(((safe_rshift_func_uint8_t_u_s(((((0x1237 && ((((safe_sub_func_int16_t_s_s(((safe_rshift_func_int16_t_s_u(1, ((**g_287) != (void*)0))) >= (((**l_631) != (*g_254)) > 0xFA)), g_401)) < 255U) && g_401) ^ g_401)) <= l_686) <= p_38) != g_401), 1)) != p_38), g_58)), (-1)))) <= p_38)) && p_38) == p_38) ^ p_38));
                if (l_686)
                {
                    int32_t ***l_698 = &g_289;
                    int32_t l_717 = 0xA688A32F;
                    if ((((((l_698 != (void*)0) ^ ((safe_lshift_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_u(p_38, (((safe_add_func_int32_t_s_s(((((-10) && g_401) > 1) | (safe_mod_func_int16_t_s_s((safe_mul_func_int8_t_s_s(g_465, g_465)), 0x1E7B))), g_401)) <= g_514) == (-1)))) > p_38), 3)) > 0x17)) | 0x357E33C8) >= l_709) ^ l_686))
                    {
                        l_722 = (safe_lshift_func_uint16_t_u_s(((safe_mul_func_int8_t_s_s(0, (p_38 < (safe_sub_func_uint32_t_u_u((((!((&g_287 != &g_254) > (l_717 != (p_38 || (1U < (((safe_sub_func_uint16_t_u_u((&g_288 == l_720), g_721)) == p_38) & 0xDFCBA623)))))) > 0xC6) >= p_38), 0))))) & g_514), 3));
                        (*l_573) = (l_698 != l_723);
                    }
                    else
                    {
                        int32_t *l_724 = (void*)0;
                        (*g_289) = func_66(p_38, (**g_288), (**l_624), l_724, g_465);
                        return (**g_288);
                    }
                    p_38 = (-5);
                }
                else
                {
                    int32_t l_734 = 0x34224D2B;
                    if ((((-5) >= (1 ^ g_401)) > (7 >= g_58)))
                    {
                        (*l_687) = (safe_rshift_func_uint8_t_u_u(p_38, ((safe_sub_func_int8_t_s_s((0x94AB && g_514), 0xB1)) && ((safe_unary_minus_func_uint32_t_u((((safe_mod_func_uint32_t_u_u(g_721, ((((l_734 == ((safe_lshift_func_uint16_t_u_s((g_514 <= (*l_573)), 4)) != (safe_add_func_int16_t_s_s((l_739 || 0), p_38)))) | g_465) <= g_401) ^ 0))) | l_740) || g_401))) | p_38))));
                    }
                    else
                    {
                        (*l_573) = ((safe_mul_func_int16_t_s_s(g_721, ((0xE2 >= g_401) | (safe_unary_minus_func_int32_t_s((l_744 != (***l_631))))))) | (g_401 | p_38));
                        (**g_255) = func_48(p_38);
                    }
                }
                (*l_660) = &g_288;
                (*g_256) = func_48(g_514);
            }
            (***g_255) = (safe_mod_func_uint32_t_u_u(((((-4) <= 0xE5) ^ (((*l_687) <= p_38) > ((65535U || (g_465 > ((-2) | (safe_mul_func_uint8_t_u_u((*l_687), (l_749 && (**g_256))))))) > (-7)))) != g_5), (*l_687)));
            (*g_289) = &p_38;
        }
        else
        {
            int32_t l_750 = (-1);
            int16_t l_779 = 0x4803;
            int32_t *****l_785 = &l_720;
            (*l_573) = ((-1) > (0xC919B584 == (l_750 == (safe_mul_func_int8_t_s_s(g_401, (0x4AA7 && 0xC693))))));
            if (((*l_660) != &g_255))
            {
                uint16_t l_753 = 0xF368;
                int8_t l_760 = 0xF0;
                int32_t l_761 = 0x2EBE50E9;
                l_761 = ((*l_573) != ((((p_38 != l_753) != 0xC6) >= ((safe_lshift_func_int8_t_s_s((-1), 3)) <= ((0x0B ^ ((safe_add_func_uint32_t_u_u(((0xC8 > (safe_mul_func_uint16_t_u_u(l_750, (0xB4 || 0x56)))) < g_514), g_401)) && l_753)) != l_753))) <= l_760));
            }
            else
            {
                int32_t * const *l_778 = &g_52;
                int32_t * const ** const l_777 = &l_778;
                for (p_38 = 0; (p_38 <= 18); p_38 = safe_add_func_uint32_t_u_u(p_38, 9))
                {
                    int32_t ****l_772 = &g_288;
                    (*l_573) = (safe_lshift_func_int8_t_s_u((~((+(((*g_289) == (void*)0) || ((***g_254) == &p_38))) != p_38)), (p_38 >= (((safe_mod_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(((void*)0 == l_772), (safe_sub_func_uint8_t_u_u((safe_add_func_int8_t_s_s((((p_38 == 1U) & g_401) ^ (-6)), 0x93)), g_721)))), g_5)) & (*l_573)) != p_38))));
                }
                l_779 = (l_777 != (void*)0);
            }
            (*l_573) = (((safe_mul_func_uint16_t_u_u(((~p_38) != g_514), ((safe_sub_func_int16_t_s_s(p_38, g_465)) & (((l_785 == &l_720) < (((void*)0 == (**g_255)) <= ((&l_750 == (**g_288)) <= g_58))) & 3)))) ^ 0x32A5) >= 9);
            if (p_38)
            {
                (***g_254) = func_48((((safe_add_func_int16_t_s_s(((((((void*)0 == &g_287) | ((safe_rshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_u((((*l_573) <= p_38) & ((safe_mod_func_int32_t_s_s((safe_mod_func_int8_t_s_s(((((~g_465) == g_58) <= p_38) >= (0x1F26FA47 == ((void*)0 == &p_37))), p_38)), g_514)) & g_5)), 0)), p_38)) >= 1U)) > p_38) < 0x60) ^ 4294967295U), 1)) && p_38) | 0x9657719A));
            }
            else
            {
                int32_t *** const **l_799 = (void*)0;
                const uint32_t l_855 = 4294967295U;
                uint8_t l_878 = 0xD0;
                int32_t l_879 = 0xD1741CA6;
                if (((*l_631) != (void*)0))
                {
                    const int16_t l_802 = 0x5D74;
                    int32_t ****l_803 = &l_624;
                    (*l_631) = (*l_785);
                    (*l_744) = &p_38;
                    (***l_803) = func_48((safe_mul_func_uint8_t_u_u(((((void*)0 == l_799) < (safe_lshift_func_uint16_t_u_s(65532U, ((l_802 ^ 0x90461228) < ((((g_514 <= (-5)) <= g_5) & (((void*)0 == l_803) == 0)) == 0x4B9D376D))))) <= (***l_624)), 0x1E)));
                }
                else
                {
                    uint32_t l_810 = 0xB7104366;
                    int32_t ***** const l_833 = (void*)0;
                    int32_t l_835 = 0;
                    for (l_739 = 0; (l_739 == 16); l_739 = safe_add_func_int8_t_s_s(l_739, 1))
                    {
                        int32_t l_826 = (-1);
                        p_38 = (safe_sub_func_uint16_t_u_u((((void*)0 != &p_37) ^ (l_810 != ((**l_660) != (*g_254)))), (((safe_mul_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s((((0xBFB99F0B > (safe_lshift_func_uint16_t_u_s((safe_sub_func_uint16_t_u_u(4U, (safe_lshift_func_int16_t_s_u(((((safe_rshift_func_int8_t_s_s(p_38, 5)) || (safe_rshift_func_uint8_t_u_u(g_58, p_38))) && g_514) ^ 65535U), 2)))), 7))) < (-7)) == 7), g_58)), p_38)) != p_38) == g_825)));
                        g_721 = (g_401 != (((*g_289) != &p_38) >= ((l_826 > (safe_rshift_func_int8_t_s_u((((safe_rshift_func_int16_t_s_u(p_38, 7)) != (safe_add_func_uint8_t_u_u((l_833 == l_785), g_721))) <= ((((p_38 & 9U) != p_38) & p_38) <= l_826)), (*l_573)))) < g_834)));
                    }
                    l_835 = 0x83B941B7;
                    p_38 = (safe_sub_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((safe_mul_func_int16_t_s_s(g_5, ((((((safe_rshift_func_int16_t_s_u((p_38 != (safe_add_func_uint32_t_u_u(p_38, (safe_mod_func_int32_t_s_s(((*g_256) != l_848), ((safe_mul_func_uint16_t_u_u((safe_add_func_int16_t_s_s(g_825, (safe_mul_func_uint16_t_u_u(g_514, (0x3811 != (&p_37 != (*g_288))))))), l_855)) || g_721)))))), 1)) >= 0xECECF2D6) >= g_825) && 6U) && g_856) ^ 0xF4))), p_38)), p_38));
                    if (p_38)
                    {
                        return (*g_289);
                    }
                    else
                    {
                        (*l_848) = ((*l_785) != (*l_631));
                        (*l_573) = (&l_720 == &g_287);
                    }
                }
                (*l_848) = (((safe_mod_func_int16_t_s_s(0x1EA4, ((((~(p_38 <= ((safe_mod_func_uint8_t_u_u((p_38 <= ((((g_58 && ((&p_38 != (**g_255)) || (safe_add_func_uint32_t_u_u(((safe_add_func_uint8_t_u_u((safe_add_func_int8_t_s_s((safe_mod_func_uint8_t_u_u((*l_848), g_856)), ((safe_mul_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(((safe_add_func_uint16_t_u_u((safe_mod_func_int16_t_s_s(0xDC91, 0xFF02)), g_856)) <= p_38), g_721)), p_38)) ^ p_38))), l_878)) > 0xDD), 0x871B461B)))) | l_879) != p_38) || p_38)), (*l_573))) && (*l_848)))) | g_465) & p_38) && 4U))) != 0xE830) ^ l_880);
            }
        }
    }
    else
    {
        uint32_t l_881 = 0x6BFF4D91;
        int32_t *l_889 = &g_58;
        if (((((p_38 & l_881) < ((l_881 == ((l_881 <= (*l_573)) >= (0xD0 && ((void*)0 == (**l_660))))) < ((g_834 != g_401) && 0xFF))) < p_38) & p_38))
        {
            int8_t l_884 = 0xED;
            l_884 = 1;
            (*l_573) = ((safe_mod_func_int32_t_s_s(l_884, l_881)) || g_58);
            if (l_884)
            {
                for (l_662 = 24; (l_662 < 23); --l_662)
                {
                    (***g_254) = (***g_254);
                }
            }
            else
            {
                (***g_287) = &p_38;
            }
            return l_889;
        }
        else
        {
            return (*g_256);
        }
    }
    return l_890;
}
static int8_t func_42(int32_t p_43, const int8_t p_44)
{
    int8_t l_273 = 0x9B;
    int32_t *l_293 = &g_58;
    int32_t ***** const l_300 = &g_287;
    int16_t l_474 = 0xF201;
    int32_t *l_529 = (void*)0;
    uint8_t l_566 = 255U;
    l_273 = (func_45(func_48((0xF9 || (g_5 == ((safe_rshift_func_uint16_t_u_s(((((void*)0 != g_52) | func_53(g_5, p_43, p_43)) ^ ((-1) | g_5)), 1)) == 0xA8B1)))), g_5) >= 0xF389);
    if ((((p_44 ^ (((&g_255 == &g_255) <= ((p_43 <= l_273) && p_43)) > (safe_lshift_func_int8_t_s_u(0x39, (safe_add_func_uint32_t_u_u((safe_sub_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((0xBE == (l_273 > g_58)), 0)), p_44)), l_273)))))) != l_273) < g_58))
    {
        int32_t **l_285 = &g_52;
        int32_t ***l_284 = &l_285;
        int32_t ****l_283 = &l_284;
        int32_t *****l_282 = &l_283;
        uint8_t l_416 = 0x99;
        int16_t l_456 = 1;
        g_286 = l_282;
        for (g_58 = (-4); (g_58 <= 25); g_58 = safe_add_func_int8_t_s_s(g_58, 2))
        {
            uint8_t l_292 = 254U;
            l_292 = l_273;
        }
        if (p_44)
        {
            int32_t *l_299 = &g_58;
            int32_t *** const **l_301 = (void*)0;
            (***l_283) = l_293;
            for (l_273 = 20; (l_273 > 18); l_273 = safe_sub_func_uint32_t_u_u(l_273, 5))
            {
                (*****l_282) = ((**l_285) == (p_43 <= g_5));
            }
            if ((0xBB306596 ^ ((***l_283) == (**l_284))))
            {
                (*g_52) = (safe_rshift_func_int8_t_s_u((!0x81), 4));
                (**g_255) = l_299;
                (***g_288) = (l_300 != l_301);
            }
            else
            {
                int8_t l_308 = 0x06;
                if (((0x137A95C2 >= ((void*)0 != &g_254)) ^ (**l_285)))
                {
                    (***g_254) = (****l_300);
                    (*****g_286) = ((*****l_300) >= ((!(((safe_mul_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_u(((p_44 & (safe_unary_minus_func_uint8_t_u((0xA1 && l_308)))) == (-2)), (0xF036 < (p_43 == (safe_rshift_func_uint8_t_u_s(0x5F, 5)))))) >= (g_5 <= p_43)), (*l_299))) ^ p_44) != 3)) || 0xA69F));
                }
                else
                {
                    (***g_287) = (**l_284);
                }
            }
        }
        else
        {
            int32_t * const l_311 = &g_58;
            int32_t **l_312 = &l_293;
            int32_t ** const **l_333 = &g_255;
            (*l_312) = func_66(((*g_286) == (void*)0), func_66((*l_293), l_311, (****l_300), (****l_300), (*l_311)), func_48(((((((p_43 <= 0x6458F5FF) > 3) > 0x24B1641B) <= p_44) | g_58) < 0x38ED)), (**g_288), g_58);
            l_282 = l_300;
            (*l_311) = (p_44 != p_43);
            for (l_273 = 17; (l_273 < 9); l_273 = safe_sub_func_int16_t_s_s(l_273, 6))
            {
                int32_t *****l_317 = (void*)0;
                int16_t l_324 = 0;
            }
        }
        for (l_273 = 0; (l_273 > 3); l_273 = safe_add_func_int16_t_s_s(l_273, 1))
        {
            int32_t ****l_346 = (void*)0;
            uint16_t l_366 = 7U;
            int32_t l_415 = (-1);
            int32_t l_431 = 0x857A78FE;
        }
    }
    else
    {
        uint8_t l_517 = 0x32;
        int32_t l_522 = (-1);
        int32_t **l_530 = &g_52;
        l_522 = ((safe_add_func_uint8_t_u_u(((*g_286) != (void*)0), (l_517 ^ (safe_add_func_uint8_t_u_u((g_58 && g_514), ((g_5 < 0x9D) || (safe_add_func_uint16_t_u_u((*l_293), g_5)))))))) == g_401);
        (*l_530) = func_66((*l_293), (****l_300), func_48((((safe_mul_func_int16_t_s_s(l_517, (p_43 == 0xAD23))) || ((safe_rshift_func_int8_t_s_s((l_522 != l_517), ((((safe_lshift_func_uint16_t_u_s(g_401, 5)) && (g_465 > g_465)) >= 0x21) && 0xDBE7A1A0))) | p_44)) & l_522)), l_529, p_43);
    }
    for (g_401 = 0; (g_401 <= (-4)); g_401 = safe_sub_func_uint16_t_u_u(g_401, 7))
    {
        int32_t **l_537 = &l_529;
        for (g_514 = 0; (g_514 == 54); g_514 = safe_add_func_uint8_t_u_u(g_514, 6))
        {
            uint16_t l_567 = 0U;
            for (p_43 = 12; (p_43 <= 1); p_43 = safe_sub_func_int32_t_s_s(p_43, 1))
            {
                int32_t l_540 = 0x0F29F923;
                uint32_t l_565 = 0U;
                (**g_255) = (****l_300);
                (*l_293) = ((**g_287) != l_537);
                (*l_293) = ((safe_rshift_func_int8_t_s_u(l_540, 5)) < (g_401 ^ ((safe_lshift_func_uint16_t_u_u((((safe_mod_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((((0xBD == (((l_540 ^ (safe_add_func_uint8_t_u_u(((safe_mod_func_int8_t_s_s((((safe_mul_func_int16_t_s_s(((safe_sub_func_int16_t_s_s((65535U != (((safe_rshift_func_int8_t_s_s((((safe_lshift_func_int16_t_s_u(((safe_lshift_func_uint8_t_u_u(g_58, (safe_add_func_int32_t_s_s(((((void*)0 == (***g_254)) == ((g_465 || g_401) >= p_44)) >= 0x3617), g_58)))) == p_43), g_514)) ^ l_565) < g_58), p_44)) | p_43) >= l_566)), 0x7E40)) && 65528U), 0xFB32)) && 0) == 0x844047B9), 0x07)) != 0x2FE9CAD1), g_514))) == g_401) ^ p_44)) && l_567) != p_43), l_565)), p_43)) == 0x37B9) > g_401), 14)) >= g_401)));
                (*l_537) = (***g_254);
            }
        }
    }
    return p_44;
}
static uint16_t func_45(int32_t * p_46, int32_t p_47)
{
    uint8_t l_63 = 254U;
    int32_t * const l_109 = &g_58;
    int32_t *l_110 = &g_58;
    int8_t l_124 = 0x83;
    uint8_t l_180 = 1U;
    int32_t **l_222 = &g_52;
    int32_t ***l_221 = &l_222;
    for (p_47 = 17; (p_47 <= 7); p_47 = safe_sub_func_int8_t_s_s(p_47, 3))
    {
        if (l_63)
            break;
    }
    for (l_63 = 0; (l_63 >= 45); l_63 = safe_add_func_uint8_t_u_u(l_63, 1))
    {
        int8_t l_106 = (-1);
        uint8_t l_107 = 255U;
        int16_t l_108 = 0xE839;
        int32_t **l_112 = (void*)0;
        int32_t **l_113 = &g_52;
        (*l_113) = func_66(((!(l_63 & (safe_sub_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(g_58, g_5)), (safe_mul_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s(((safe_sub_func_uint16_t_u_u(0xAB67, l_63)) != (((safe_mod_func_uint8_t_u_u(((((-7) & (safe_mul_func_int16_t_s_s(1, ((safe_mod_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((((7U && ((safe_rshift_func_int8_t_s_u((safe_mod_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u(((safe_mod_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u((!(safe_mul_func_int16_t_s_s(p_47, p_47))), g_58)), l_106)) != l_107), l_106)) & g_58), p_47)), 7)) | l_107)) || p_47) ^ (-4)), l_108)), g_58)) <= 5U)))) || 0x42E2EE0B) <= p_47), p_47)) ^ p_47) | 0xA291)), g_58)) != g_5), 0xED)))), g_5)))) != 253U), l_109, p_46, l_110, g_5);
        (*l_109) = (*l_109);
    }
    if ((!(safe_add_func_int8_t_s_s((*l_110), g_58))))
    {
        int16_t l_131 = 0x76A7;
        int32_t *l_163 = &g_58;
        (*l_110) = (safe_add_func_uint8_t_u_u((&p_46 == &g_52), ((void*)0 == &g_52)));
        (*l_109) = (*p_46);
        for (p_47 = 0; (p_47 <= 15); p_47 = safe_add_func_uint8_t_u_u(p_47, 3))
        {
            int32_t **l_121 = (void*)0;
            int32_t **l_122 = &g_52;
            int32_t **l_123 = &g_52;
            int16_t l_198 = (-10);
            (*l_122) = l_110;
            if (((void*)0 != &g_58))
            {
                (**l_123) = (l_123 == &p_46);
                return g_58;
            }
            else
            {
                int32_t l_125 = (-1);
                int32_t **l_126 = &l_110;
                uint16_t l_164 = 0x5BEC;
                (*l_126) = func_66(p_47, p_46, func_48(((((l_124 && (p_46 != (void*)0)) || (3U <= l_125)) & g_5) != p_47)), p_46, g_5);
                (*p_46) = 1;
                for (l_63 = 0; (l_63 >= 28); ++l_63)
                {
                    int32_t l_162 = 0x6792DBF0;
                    for (l_124 = (-1); (l_124 >= (-11)); l_124 = safe_sub_func_uint16_t_u_u(l_124, 1))
                    {
                        int32_t **l_147 = &l_110;
                        (**l_126) = ((l_131 || ((safe_add_func_int8_t_s_s(0, (safe_rshift_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s(((void*)0 == l_110), ((3 ^ (safe_unary_minus_func_int16_t_s((p_47 && ((**l_122) & l_131))))) ^ ((safe_add_func_uint16_t_u_u(p_47, (-8))) | (-1))))) | p_47), g_5)))) > g_5)) ^ 0U);
                        l_163 = func_48(((safe_lshift_func_uint8_t_u_s((safe_mul_func_uint16_t_u_u((safe_add_func_int32_t_s_s((&g_52 == l_147), (safe_lshift_func_int16_t_s_s((safe_mul_func_int8_t_s_s((((p_47 | (((safe_sub_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u(((safe_mul_func_uint8_t_u_u(((void*)0 != &g_58), ((*p_46) && ((0x1B ^ (safe_lshift_func_uint16_t_u_s((&g_52 == &p_46), g_58))) ^ l_131)))) != p_47), 15)), l_162)), g_58)) | p_47) >= p_47)) & 0xBA) | p_47), 0U)), 0)))), g_58)), 6)) <= p_47));
                        (*l_123) = p_46;
                        (*l_126) = (*l_147);
                    }
                    (*l_126) = p_46;
                    return l_164;
                }
            }
            (*g_52) = ((p_46 != &g_58) >= (safe_unary_minus_func_int8_t_s((safe_rshift_func_uint16_t_u_s(0x3E36, 8)))));
            if ((**l_122))
            {
                int32_t *l_173 = (void*)0;
                for (l_124 = 0; (l_124 >= (-18)); l_124--)
                {
                    int32_t *l_183 = &g_58;
                    (*l_163) = (!(safe_rshift_func_uint8_t_u_u(0U, (l_173 != (void*)0))));
                    (*p_46) = (3 > ((((((&p_46 != &l_110) > (**l_123)) & ((((safe_mul_func_int16_t_s_s(((safe_mul_func_int16_t_s_s((safe_mod_func_uint32_t_u_u(7U, ((0xBD & p_47) ^ 0xAAFE))), 0x4A7E)) > (-2)), 0xBBF4)) && l_180) | p_47) & g_5)) == 0x5799C725) ^ g_5) | 1));
                    for (l_63 = 24; (l_63 >= 52); l_63++)
                    {
                        (*l_123) = p_46;
                        (*l_123) = l_183;
                        (*l_183) = ((void*)0 != &p_46);
                        (*g_52) = (safe_mod_func_int16_t_s_s(g_5, (((void*)0 != &g_52) ^ (safe_add_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((safe_add_func_int16_t_s_s((p_47 || ((0x1236 > (safe_mul_func_uint8_t_u_u(0x04, (0xE95F & ((safe_rshift_func_uint16_t_u_s((&g_58 == &g_58), p_47)) | 0U))))) <= g_5)), 1)), l_198)), g_5)))));
                    }
                }
            }
            else
            {
                uint16_t l_214 = 0U;
                (*l_163) = (0x8C53 || (0x93F2 == (p_47 || (safe_mod_func_int32_t_s_s((((safe_add_func_uint8_t_u_u((((g_5 < ((~(safe_sub_func_uint8_t_u_u(((0xD91451F1 ^ (((safe_mul_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(0U, 7)), (safe_rshift_func_int8_t_s_u((safe_add_func_int8_t_s_s(p_47, (0x6E003A77 >= 0))), 2)))) > p_47) == l_214)) != l_214), g_5))) < 0x52D8D885)) | 0xD9) <= (*g_52)), g_5)) > g_58) != g_5), (*g_52))))));
            }
        }
        (*l_109) = (safe_add_func_int32_t_s_s(((void*)0 != &l_110), ((safe_lshift_func_int16_t_s_s(((void*)0 != &l_163), 8)) | 0x8D0B)));
    }
    else
    {
        int32_t l_244 = (-4);
        for (l_180 = 0; (l_180 < 11); l_180 = safe_add_func_int32_t_s_s(l_180, 7))
        {
            int32_t ****l_223 = &l_221;
            (*l_223) = l_221;
            (*p_46) = (safe_rshift_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(((g_5 > g_5) ^ ((safe_lshift_func_uint8_t_u_u((((p_47 | (&g_58 != &g_58)) && (safe_sub_func_int32_t_s_s((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((safe_add_func_uint16_t_u_u(p_47, ((+(!(p_47 | (p_47 >= (safe_lshift_func_int16_t_s_u((safe_mod_func_int32_t_s_s(0xD6C77FDB, g_58)), p_47)))))) >= l_244))), 3)), g_58)), 0))) | 1U), 1)) <= p_47)), g_58)), g_58));
            (*p_46) = (p_46 == (void*)0);
        }
    }
    for (l_124 = 0; (l_124 != 14); l_124 = safe_add_func_uint16_t_u_u(l_124, 7))
    {
        int32_t l_265 = 0xA96FC68C;
        int32_t **l_272 = &g_52;
        (*p_46) = (safe_lshift_func_uint16_t_u_u(g_58, 0));
        (*l_109) = (~(safe_sub_func_uint32_t_u_u(((((void*)0 == g_254) && ((safe_lshift_func_uint16_t_u_s(p_47, (safe_mod_func_uint32_t_u_u((safe_add_func_uint32_t_u_u(((safe_mul_func_int8_t_s_s(l_265, ((p_47 <= (safe_lshift_func_uint8_t_u_u((safe_add_func_int16_t_s_s(((*g_256) != (*g_256)), (0xC5443C59 ^ (((safe_mod_func_int16_t_s_s((l_272 == (*g_255)), 1)) < 0x8A3BB381) | g_58)))), l_265))) <= g_58))) < g_58), p_47)), 8)))) == p_47)) & 8U), (*p_46))));
        (**l_221) = (*l_222);
    }
    return g_58;
}
static int32_t * func_48(uint32_t p_49)
{
    int32_t *l_59 = (void*)0;
    int32_t l_60 = 0;
    l_60 = ((void*)0 != l_59);
    return &g_58;
}
static uint16_t func_53(int8_t p_54, uint32_t p_55, uint32_t p_56)
{
    int32_t *l_57 = &g_58;
    (*l_57) = p_56;
    return g_58;
}
static int32_t * const func_66(const int16_t p_67, int32_t * const p_68, int32_t * p_69, int32_t * p_70, uint8_t p_71)
{
    int32_t **l_111 = (void*)0;
    l_111 = &g_52;
    return p_68;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    g_287 = 0;
    g_286 = 0;
    g_984 = 0;
    csmith_sink_ = g_5;
    csmith_sink_ = g_58;
    csmith_sink_ = g_401;
    csmith_sink_ = g_465;
    csmith_sink_ = g_514;
    csmith_sink_ = g_721;
    csmith_sink_ = g_825;
    csmith_sink_ = g_834;
    csmith_sink_ = g_856;
    platform_main_end(0,0);
    return 0;
}
