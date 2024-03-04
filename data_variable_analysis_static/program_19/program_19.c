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
static int32_t g_8 = 0x1FC3EEE2;
static int16_t g_60 = 0x40A9;
static int32_t g_77 = (-1);
static uint8_t g_99 = 246U;
static int32_t g_108 = 9;
static uint8_t g_109 = 0xB1;
static uint16_t g_129 = 65535U;
static uint32_t g_130 = 4294967293U;
static uint32_t g_132 = 0x18FFE4DF;
static int32_t g_149 = 0xD51AC0D5;
static uint32_t g_150 = 0xA491F1F1;
static int32_t g_211 = 0xD4C4B4CC;
static uint32_t g_254 = 0U;
static uint32_t g_265 = 0U;
static uint8_t g_295 = 0x17;
static uint32_t g_297 = 9U;
static int32_t g_426 = 0;
static uint16_t g_439 = 1U;
static int16_t g_477 = 0xCFA4;
static int16_t g_486 = 0xE677;
static int8_t g_627 = (-3);
static int16_t g_746 = (-1);
static int32_t g_883 = 0x6DD4B017;
static uint16_t func_1(void);
static uint16_t func_2(int8_t p_3, uint32_t p_4, int16_t p_5, int32_t p_6, int32_t p_7);
static int16_t func_13(uint32_t p_14, uint32_t p_15);
static uint8_t func_23(uint16_t p_24, uint8_t p_25, uint32_t p_26, int32_t p_27);
static uint16_t func_28(int16_t p_29, uint16_t p_30, uint16_t p_31, uint32_t p_32);
static uint32_t func_33(int32_t p_34, uint32_t p_35, int16_t p_36, uint32_t p_37);
static uint32_t func_42(int16_t p_43, int8_t p_44, int32_t p_45, uint16_t p_46, uint16_t p_47);
static uint8_t func_53(int16_t p_54, int32_t p_55, int32_t p_56);
static uint8_t func_57(int32_t p_58, uint16_t p_59);
static int8_t func_61(uint8_t p_62);
static uint16_t func_1(void)
{
    uint8_t l_16 = 0x79;
    int32_t l_17 = (-7);
    int32_t l_40 = 1;
    int16_t l_41 = 0x752E;
    int32_t l_298 = 0x35B34396;
    uint8_t l_631 = 252U;
    uint8_t l_640 = 0xBC;
    int32_t l_650 = 1;
    uint8_t l_713 = 0x39;
    int8_t l_802 = 0x41;
    if (((func_2(g_8, g_8, ((g_8 , (safe_add_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u(func_13((l_17 = (g_8 <= l_16)), (~(safe_lshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_u(func_23(func_28(g_8, (l_298 = (g_297 = (((((func_33(((l_40 = (safe_rshift_func_uint8_t_u_u(l_16, 5))) , (0x09B4AF7B & (((65535U || l_40) , 0x1F) & 0x2F))), g_8, l_41, g_8) || 0U) < g_8) , g_109) > g_150) > g_150))), l_41, g_150), g_8, l_16, g_8), 4)), 2)))), g_8)), g_8))) & 0x32DD), l_16, l_41) || (-6)) < l_631))
    {
        return g_8;
    }
    else
    {
        uint8_t l_641 = 1U;
        g_8 = (((1 ^ (safe_sub_func_int8_t_s_s((~0xED11), (g_149 , ((((g_627 > ((65528U & (l_16 == (g_99 || ((safe_mul_func_int16_t_s_s((+(safe_sub_func_uint32_t_u_u(l_640, l_641))), l_16)) != 0xF6E4C014)))) && g_129)) , l_641) != g_477) == g_8))))) >= g_211) && l_640);
    }
    if ((safe_mul_func_uint16_t_u_u(((((safe_mod_func_uint32_t_u_u(l_631, 0x1824B5A7)) | (((((g_486 > (g_265 != (g_439 = (((l_640 > ((safe_sub_func_int8_t_s_s(((0 <= g_108) <= ((l_298 < (safe_lshift_func_int16_t_s_s((g_150 == 0xFE50), g_109))) && g_8)), g_60)) , 4294967295U)) , l_640) || (-9))))) ^ 0xB9) ^ 4) >= 0x04BFDDC9) , l_650)) < l_41) ^ l_17), l_631)))
    {
        int32_t l_651 = 0;
        uint8_t l_654 = 5U;
        uint16_t l_655 = 0x96C1;
        l_654 = ((l_651 = l_16) != (safe_sub_func_uint8_t_u_u(g_132, 0x42)));
        g_77 = l_655;
        return l_16;
    }
    else
    {
        uint32_t l_663 = 0x164121E3;
        uint32_t l_668 = 0x00FCC997;
        int32_t l_747 = 0xDB7B9298;
        int32_t l_750 = (-6);
        uint32_t l_796 = 1U;
        uint16_t l_857 = 0xC20A;
        if (((safe_lshift_func_uint8_t_u_u((g_109 = ((0x62 ^ (l_640 ^ ((0x2110 ^ (g_297 == ((l_17 = g_211) < (safe_mul_func_int16_t_s_s((((safe_sub_func_uint32_t_u_u(((safe_unary_minus_func_int8_t_s(l_663)) & (safe_mul_func_int8_t_s_s(((0x5C7BD224 ^ 0x397CFA19) <= (((safe_lshift_func_uint16_t_u_s((g_426 || (-5)), l_663)) == 0xF8) < g_297)), l_663))), 0xA8B4A642)) == l_668) , 0xAF3B), l_16))))) <= g_130))) || g_477)), 7)) && l_663))
        {
            int8_t l_702 = (-1);
            int32_t l_703 = 0x12E9CEC5;
            l_703 = (safe_mul_func_uint8_t_u_u((((safe_rshift_func_int8_t_s_s((safe_div_func_uint16_t_u_u(65530U, (((safe_lshift_func_uint16_t_u_u((g_426 && ((safe_div_func_int32_t_s_s((!(safe_mod_func_uint16_t_u_u((l_650 = ((g_627 = g_477) >= ((2U <= ((((!(safe_mul_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u((0xE248 || (safe_div_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_u((safe_div_func_uint32_t_u_u((((g_8 != g_150) || (safe_add_func_int8_t_s_s(l_640, ((((+((safe_div_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(1, g_297)), l_41)) != 0x98B4E334)) != 0xBA11) > l_702) ^ l_663)))) && g_77), 0x3298D81E)), 7)), 10)) & g_477), 2))), g_129)) , l_663), g_297))) , l_17) != 4294967294U) || l_631)) & g_265))), 0x792D))), l_668)) || g_77)), l_298)) && 251U) && g_8))), 5)) < 255U) < 1), 0x73));
            g_8 = (+g_211);
        }
        else
        {
            return l_663;
        }
        for (g_129 = (-12); (g_129 < 47); g_129++)
        {
            int8_t l_748 = 0x78;
            int32_t l_749 = 0x50E18431;
            int32_t l_751 = 0x651E1C97;
            uint32_t l_797 = 0xE663E495;
            uint8_t l_843 = 1U;
            uint8_t l_853 = 0x47;
            if (((safe_div_func_int16_t_s_s(((safe_mod_func_uint8_t_u_u((l_40 = l_663), (l_663 | (((l_668 < (65532U || (0xB19616A6 | (l_298 ^ l_713)))) != ((safe_sub_func_int8_t_s_s(0xCF, 0xBA)) != l_668)) ^ (-5))))) > g_265), g_109)) , 0xF1FCE55A))
            {
                uint32_t l_716 = 4294967295U;
                if (l_716)
                    break;
            }
            else
            {
                uint32_t l_745 = 0x750C409C;
                uint8_t l_799 = 247U;
                int32_t l_808 = 1;
                int8_t l_882 = 0xD5;
                uint8_t l_887 = 0xCC;
                g_211 = (safe_add_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(g_99, 3U)), l_16));
                if ((((((l_40 = l_663) >= (safe_div_func_int32_t_s_s(g_109, (l_750 = ((g_150 ^ (safe_div_func_int8_t_s_s(((safe_unary_minus_func_int16_t_s((safe_mod_func_uint8_t_u_u((g_99 = (l_748 = (l_747 = (((+((safe_add_func_int16_t_s_s(0x8FC5, g_426)) , ((safe_lshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(((0x7EB40730 != (safe_mul_func_uint8_t_u_u(((safe_add_func_uint16_t_u_u((((((safe_lshift_func_int16_t_s_u((((g_99 && (((safe_div_func_int32_t_s_s(0xBCFEC69B, (safe_div_func_int8_t_s_s((g_149 != 0x430CDAC9), l_663)))) >= g_109) <= g_150)) & l_650) >= l_41), l_713)) >= l_745) == g_109) == g_60) <= 0x598D26FA), 0xE42F)) , g_295), 0x34))) || g_129), 7)), g_746)) | 65527U))) , 0xB86D0A33) & l_16)))), l_749)))) , g_150), l_650))) && l_745))))) , (-8)) != g_149) || 0x64666F7F))
                {
                    uint16_t l_756 = 4U;
                    if (l_745)
                    {
                        int32_t l_798 = 1;
                        int32_t l_800 = 0x82FBFC4E;
                        int32_t l_801 = 0xC211777C;
                        g_77 = ((l_751 = ((g_265 || (l_747 = (l_749 = 0x9245))) < (0xE4 || (((g_109 = g_486) <= 0x4E) < l_748)))) , (l_748 == (l_751 = (l_668 == ((safe_add_func_int32_t_s_s(g_150, g_109)) || 1)))));
                        g_77 = (safe_add_func_int32_t_s_s(((l_756 ^ (((g_439 > ((safe_sub_func_int32_t_s_s(g_150, (((safe_lshift_func_uint8_t_u_s((((safe_add_func_int32_t_s_s(((g_746 = (safe_rshift_func_int16_t_s_s(((safe_add_func_int8_t_s_s((safe_div_func_uint32_t_u_u((safe_div_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u(((g_627 = (safe_div_func_uint8_t_u_u((l_800 = (safe_mod_func_int32_t_s_s((l_749 = ((((safe_mod_func_uint32_t_u_u(((l_750 || (g_60 = (safe_sub_func_int8_t_s_s((((+(l_798 = (((safe_sub_func_uint32_t_u_u((l_747 >= (safe_rshift_func_uint8_t_u_u(((l_17 = (safe_div_func_int16_t_s_s(l_750, g_109))) , ((safe_div_func_int32_t_s_s((safe_sub_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s((l_17 >= (l_756 != l_749)), 0)), g_295)), l_650)) == l_796)), 4))), g_295)) ^ l_797) , g_109))) <= l_799) & g_254), l_745)))) >= 0xABEF2365), 6U)) && (-1)) & l_745) , 0xCD528889)), 1))), l_756))) , g_295), g_99)) , 0xB9), 0xDD)), l_756)), 4294967287U)), l_796)) != g_130), l_756))) != l_756), g_211)) >= g_130) > 0x46), 0)) | l_801) > l_802))) && g_439)) > l_801) > g_109)) , l_747), l_801));
                    }
                    else
                    {
                        g_211 = (~(safe_sub_func_int8_t_s_s((safe_sub_func_int16_t_s_s((l_799 , 0xA139), g_132)), (l_808 = l_745))));
                    }
                    if (l_749)
                        continue;
                    for (l_747 = 0; (l_747 == 11); l_747 = safe_add_func_int32_t_s_s(l_747, 6))
                    {
                        uint32_t l_817 = 0x1D57537F;
                        uint16_t l_826 = 7U;
                        g_77 = (0xF0 == ((((safe_lshift_func_int8_t_s_u(g_265, ((l_750 = l_756) | (-1)))) <= (safe_add_func_uint32_t_u_u((l_40 = (((g_627 && (((4294967291U <= ((safe_div_func_int32_t_s_s((l_817 , (safe_add_func_int8_t_s_s(l_747, (safe_mul_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((safe_add_func_uint8_t_u_u((0x37B5 >= l_756), 5U)), 6U)), g_8))))), l_826)) >= l_756)) <= (-8)) | 0)) ^ l_756) || g_439)), l_756))) | l_817) , 7));
                        return l_749;
                    }
                    g_211 = g_8;
                }
                else
                {
                    int32_t l_844 = 1;
                    for (g_149 = 0; (g_149 != (-16)); g_149 = safe_sub_func_uint32_t_u_u(g_149, 8))
                    {
                        return g_108;
                    }
                    if ((((((((g_130 >= ((safe_sub_func_int16_t_s_s((!g_426), (safe_rshift_func_int8_t_s_s((g_627 = ((safe_lshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u((g_109 , (((safe_add_func_int32_t_s_s((g_211 = (!(((65535U != (g_211 && 0xB7E3)) != (safe_add_func_uint32_t_u_u((((l_663 , g_477) < (g_627 == l_650)) <= g_109), 0x3C8E4E67))) >= g_149))), g_746)) | g_426) , 0x69)), g_8)), 0)) <= l_843)), 0)))) != 0x482B)) & l_844) || g_265) , 1U) & 0xFBBA0EE3) == g_60) != g_132))
                    {
                        g_77 = 0xCD98344D;
                    }
                    else
                    {
                        g_211 = 1;
                        l_650 = (safe_lshift_func_uint8_t_u_s(((((g_627 = ((safe_mod_func_uint8_t_u_u((65535U & (g_439 = 0x1A88)), (l_750 && ((safe_lshift_func_uint16_t_u_u(l_844, (safe_rshift_func_uint16_t_u_s((l_853 && (l_751 = g_211)), 7)))) >= (1U > g_130))))) && (+(safe_mul_func_uint8_t_u_u((g_150 | l_799), l_640))))) & 7U) || g_108) , l_857), 4));
                        if (l_668)
                            break;
                    }
                    l_844 = (safe_mod_func_uint32_t_u_u(((g_627 != l_857) & g_265), (safe_mul_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s((g_99 = l_799), 6)), (safe_mul_func_int16_t_s_s((safe_div_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(4U, l_640)), 8)), ((+(g_109 , (1 == ((safe_unary_minus_func_uint32_t_u((((safe_add_func_int8_t_s_s((g_883 = (safe_rshift_func_int16_t_s_u((safe_add_func_int32_t_s_s(((((((safe_lshift_func_int16_t_s_u((g_254 && g_486), l_882)) , g_426) == g_129) & l_853) || (-1)) , 0x349DB5F3), l_808)), g_426))), g_211)) != g_150) , g_129))) , l_844)))) | g_439))), (-8)))))));
                }
                if (l_802)
                    break;
                l_751 = ((g_627 = g_150) < (((safe_mod_func_uint8_t_u_u((+5), (g_99 = (g_132 && ((l_887 <= (l_650 = g_297)) || ((safe_lshift_func_int8_t_s_u((g_297 < l_843), l_802)) ^ (((g_477 & l_668) || l_713) <= l_882))))))) ^ 255U) , l_797));
            }
            l_750 = 0;
            if (g_150)
                continue;
        }
    }
    return g_295;
}
static uint16_t func_2(int8_t p_3, uint32_t p_4, int16_t p_5, int32_t p_6, int32_t p_7)
{
    uint16_t l_585 = 0xC2A0;
    uint16_t l_586 = 0x0F9E;
    int32_t l_587 = 0x6BEDF1BF;
    uint16_t l_597 = 65531U;
    int32_t l_598 = 0;
    int32_t l_599 = 0x68C03780;
    int32_t l_600 = 1;
    int32_t l_630 = 0xEFD9418C;
    l_587 = (safe_mul_func_int8_t_s_s(((0 == (((((0U & (((((((!g_130) > ((safe_sub_func_int32_t_s_s((safe_add_func_int32_t_s_s((safe_rshift_func_int8_t_s_u((-2), (7 >= g_426))), (((p_3 && (safe_div_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(((l_585 = ((g_132 = p_5) ^ (p_7 || p_6))) , l_586), g_150)), 4)), l_586)), p_7))) | l_586) , g_211))), 0x034FCF98)) , g_254)) || g_486) & (-1)) != 250U) || l_586) == g_439)) || (-3)) ^ 1) | 0) < g_99)) && 65535U), l_586));
    l_600 = ((g_108 < ((l_587 = (p_5 < (p_3 > 0x77))) | g_8)) != ((safe_add_func_int16_t_s_s((((p_7 != (safe_unary_minus_func_int8_t_s(0))) == ((l_599 = (safe_sub_func_int8_t_s_s((safe_mul_func_int16_t_s_s(((l_597 || (l_598 = (-1))) || (-2)), l_597)), (-9)))) > 0x9CE088B1)) && 0x57), 0)) | p_6));
    l_599 = (safe_lshift_func_int8_t_s_s((safe_add_func_int16_t_s_s((safe_add_func_uint16_t_u_u((~0xBB9E), ((safe_sub_func_uint32_t_u_u(((((safe_lshift_func_uint16_t_u_u((safe_div_func_int32_t_s_s((safe_sub_func_uint32_t_u_u((4294967287U < ((safe_mul_func_int8_t_s_s(g_297, (p_6 || ((l_600 = ((safe_mul_func_int16_t_s_s((safe_mul_func_int8_t_s_s((!p_4), ((safe_mod_func_int8_t_s_s((g_627 = 0xC7), p_3)) < ((l_587 = p_7) == ((safe_div_func_uint16_t_u_u(((((-8) <= g_129) != g_426) <= p_6), (-1))) , 1))))), p_3)) == l_599)) | 0U)))) >= (-7))), l_597)), l_599)), 9)) & l_630) , 8U) != l_630), p_4)) , p_3))), p_7)), 7));
    return l_598;
}
static int16_t func_13(uint32_t p_14, uint32_t p_15)
{
    int8_t l_538 = 1;
    int32_t l_547 = 0;
    int32_t l_549 = 0xF472CE6E;
    int32_t l_566 = 0xD72320E0;
    for (g_211 = 0; (g_211 >= 26); ++g_211)
    {
        int32_t l_563 = 2;
        int32_t l_567 = 0;
        for (g_129 = (-11); (g_129 <= 50); g_129++)
        {
            int32_t l_564 = (-1);
            uint8_t l_565 = 252U;
            l_567 = ((safe_mod_func_uint8_t_u_u((l_538 = g_265), (safe_mod_func_uint8_t_u_u(((safe_div_func_uint32_t_u_u((safe_div_func_int32_t_s_s(((safe_add_func_int8_t_s_s((l_547 = (p_14 , l_547)), 0xC8)) == ((!(((((p_15 & l_549) || (safe_add_func_uint32_t_u_u(((p_15 > (((safe_lshift_func_uint16_t_u_s((((l_563 = (safe_rshift_func_int8_t_s_u((l_549 = ((+(safe_mod_func_uint16_t_u_u((((safe_add_func_int16_t_s_s((g_211 , (l_549 | l_549)), 65527U)) < l_549) , g_211), p_14))) != 255U)), 5))) > 0) ^ g_297), 7)) < g_297) != 247U)) == l_564), p_14))) , 0xAA) , 0x2309) , l_565)) & l_566)), p_15)), p_15)) == p_15), g_149)))) || p_14);
            l_564 = g_149;
        }
        if (p_15)
            break;
    }
    return g_130;
}
static uint8_t func_23(uint16_t p_24, uint8_t p_25, uint32_t p_26, int32_t p_27)
{
    int32_t l_492 = (-2);
    int32_t l_503 = (-1);
    int32_t l_531 = 0xB2F08A16;
    l_492 = ((safe_mod_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(((~(l_492 == (((l_492 <= l_492) < (g_477 | g_295)) & (g_150 <= ((safe_rshift_func_uint16_t_u_s((safe_sub_func_uint32_t_u_u(((safe_mul_func_uint16_t_u_u((safe_div_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((p_24 = ((l_503 = 3U) <= (g_99 != ((g_77 & g_77) & g_297)))), p_27)), l_492)), 0x321F)) | 0x6D), g_265)), 11)) , l_503))))) > p_26), 0x53)), p_25)) , 1);
    p_27 = (safe_lshift_func_uint8_t_u_u((((safe_div_func_int16_t_s_s(0x4DCC, (safe_lshift_func_int16_t_s_s(((safe_mul_func_int16_t_s_s((l_503 ^ (safe_sub_func_int8_t_s_s((safe_add_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s((safe_rshift_func_uint16_t_u_u(l_503, 11)), 0)), (((+(((l_531 = (p_25 | (0x53B1 & (0x6719 != ((safe_rshift_func_int8_t_s_u((safe_div_func_uint8_t_u_u(((safe_add_func_int32_t_s_s(5, ((safe_mul_func_uint16_t_u_u(p_25, (l_492 = 0x1079))) || 1U))) ^ l_503), p_26)), p_27)) ^ 0x1D9A))))) , 0x50D5363C) ^ 0U)) && l_503) , g_109))), l_503))), g_109)) , p_25), 2)))) , 0x1E) , g_130), 5));
    return g_132;
}
static uint16_t func_28(int16_t p_29, uint16_t p_30, uint16_t p_31, uint32_t p_32)
{
    uint8_t l_305 = 255U;
    int32_t l_310 = 1;
    uint32_t l_320 = 0x4A9B1B63;
    uint16_t l_323 = 2U;
    uint8_t l_328 = 255U;
    uint8_t l_329 = 0x2A;
    int32_t l_330 = 0;
    int32_t l_331 = 8;
    int8_t l_462 = (-2);
    uint32_t l_485 = 0U;
    for (g_265 = 25; (g_265 < 58); g_265 = safe_add_func_int16_t_s_s(g_265, 3))
    {
        return p_31;
    }
    l_310 = (safe_add_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(l_305, ((g_109 | 0x896D) && (p_30 | ((p_31 && ((safe_mul_func_uint16_t_u_u((g_254 || (safe_lshift_func_int16_t_s_u((((0xD0 > g_77) < (g_60 , l_305)) != l_305), 1))), l_305)) , l_305)) == g_132))))), 0xCF));
    if ((l_331 = ((l_310 = (-5)) == (0x284081ED == (safe_mod_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((((l_330 = (g_129 = (safe_add_func_uint16_t_u_u(((safe_unary_minus_func_uint32_t_u((safe_mod_func_int32_t_s_s(((l_320 , ((((safe_lshift_func_uint8_t_u_u(l_323, 7)) || (((((safe_lshift_func_uint8_t_u_s(p_32, 1)) , (((g_211 | ((p_29 = (g_211 | (safe_add_func_int16_t_s_s(((((1U > g_77) , l_323) < l_323) & l_323), g_150)))) ^ l_328)) & p_31) || p_31)) <= 0x35) , 0x964E) > g_295)) == p_32) == (-7))) >= l_329), 1)))) || l_323), l_328)))) <= l_331) < p_30), 10)), p_32))))))
    {
        int8_t l_336 = 3;
        int32_t l_366 = 0;
        uint32_t l_397 = 0xCCC0493F;
        for (g_108 = 28; (g_108 < 1); g_108 = safe_sub_func_int32_t_s_s(g_108, 7))
        {
            uint32_t l_343 = 0xD4DA4FF0;
            int32_t l_365 = (-1);
            int32_t l_367 = 0x3351E878;
            l_367 = ((safe_rshift_func_int8_t_s_u((l_336 > (safe_add_func_int16_t_s_s((safe_div_func_uint16_t_u_u((((safe_mod_func_uint32_t_u_u((l_343 >= l_331), (safe_sub_func_int32_t_s_s((safe_add_func_int32_t_s_s((~1), (safe_mul_func_int8_t_s_s((safe_div_func_uint32_t_u_u((safe_mul_func_int16_t_s_s(p_30, (safe_mod_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((((safe_div_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(g_150, (l_366 = (safe_lshift_func_uint16_t_u_s(l_336, (((p_29 = l_365) > ((p_30 <= p_31) <= l_330)) > 65531U)))))), l_330)) <= g_297) != p_31), l_329)), p_30)))), l_336)), p_32)))), 4294967290U)))) | 0x6DCC) , l_367), 0x8133)), 1))), p_30)) <= g_265);
            l_397 = ((safe_div_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s((g_99 = (g_295 = (g_109 = (safe_sub_func_int16_t_s_s(0xEA4E, (safe_add_func_int8_t_s_s((safe_add_func_int32_t_s_s((safe_div_func_uint16_t_u_u(p_29, ((g_109 ^ (safe_div_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(((safe_div_func_int32_t_s_s((safe_add_func_uint32_t_u_u(((safe_sub_func_int16_t_s_s(p_29, (safe_sub_func_uint8_t_u_u((((safe_lshift_func_uint8_t_u_s(g_109, 4)) == (safe_rshift_func_uint16_t_u_u(0x264F, ((p_32 | (l_320 , ((safe_unary_minus_func_uint16_t_u(g_149)) >= p_29))) , g_211)))) & 0x5C358AB3), l_336)))) | l_367), 0x8548BBD5)), p_31)) , p_32), g_60)), 254U))) & l_320))), g_254)), l_336))))))), g_77)), p_30)) <= 0U);
            for (g_60 = (-21); (g_60 < 24); ++g_60)
            {
                for (g_150 = 0; (g_150 == 49); g_150 = safe_add_func_int8_t_s_s(g_150, 1))
                {
                    return g_150;
                }
            }
            g_211 = (l_310 < (0x21904DDF < (l_336 && (g_99 = (safe_lshift_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s(((safe_div_func_int8_t_s_s((safe_sub_func_int16_t_s_s((g_265 < (0x5C1F | l_330)), ((((8U ^ ((safe_lshift_func_uint8_t_u_s((((((p_30 ^ g_132) > g_297) == p_29) == l_330) != p_32), g_8)) , l_329)) & l_329) == 0x67) | g_254))), 7)) >= g_99), (-1))) && p_32), l_343))))));
        }
        l_366 = (safe_rshift_func_int8_t_s_s((((g_77 | g_99) , ((l_305 != ((g_108 = 0xD69C6D1A) , (((safe_rshift_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s(((((g_211 && g_8) , ((safe_sub_func_int32_t_s_s(((g_108 = (((((g_426 = (l_331 <= (safe_lshift_func_int16_t_s_s((l_310 = ((((safe_div_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(l_366, (p_29 != p_31))), l_330)) > (-8)) && 0xD4F73E1B) ^ 0x15)), l_305)))) == l_328) == l_328) > l_336) ^ 0x3F38)) , p_32), l_397)) , l_305)) , l_330) & l_397), 0xE4)) <= g_8), 2)) <= 1) <= 0xBF))) || p_30)) > l_331), 7));
        g_211 = l_305;
    }
    else
    {
        uint32_t l_461 = 4294967293U;
        int32_t l_463 = 0;
        int32_t l_480 = (-1);
        l_330 = (safe_mod_func_int16_t_s_s((p_32 ^ ((g_129 <= p_31) >= (g_60 , (((safe_add_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u((0xA3E8C22A != (safe_mul_func_uint8_t_u_u(((((((((safe_sub_func_int16_t_s_s((((safe_mul_func_int8_t_s_s((g_439 = (-2)), ((l_331 = (safe_mod_func_uint8_t_u_u(((~((safe_mod_func_uint16_t_u_u(((safe_add_func_int8_t_s_s(((g_150 = ((g_132 = (safe_rshift_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(65535U, (safe_sub_func_int32_t_s_s((safe_lshift_func_int16_t_s_u((((l_461 = (safe_rshift_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((g_77 & (g_132 == l_329)), p_30)), g_99)), p_32))) & p_29) , 0x5FA7), 4)), p_30)))), l_462))) || p_29)) > 4294967295U), p_30)) != 0), g_265)) <= 0U)) <= l_463), g_60))) , p_29))) | 65526U) & g_99), p_31)) || p_31) >= p_30) , 6U) >= 1) == g_130) , p_29) && p_30), p_30))), p_31)) & g_77), g_149)) ^ 0xE3) < 0x185D)))), p_29));
        l_331 = ((safe_mod_func_int16_t_s_s((g_486 = ((((l_329 || g_108) && (0xA8 == ((g_60 = g_109) > ((safe_rshift_func_int16_t_s_s((p_30 >= (+(safe_div_func_int16_t_s_s((p_29 = (((safe_div_func_uint8_t_u_u((((safe_sub_func_uint16_t_u_u((safe_div_func_int16_t_s_s((g_477 = g_426), l_463)), (safe_mod_func_int32_t_s_s((l_480 = 0x9081E52A), (safe_add_func_int32_t_s_s((safe_div_func_uint16_t_u_u(l_462, 0x7F62)), g_265)))))) , (-4)) <= 0xE2), 0x13)) < g_297) | 1U)), g_109)))), g_211)) , l_485)))) && g_99) && l_461)), l_463)) ^ g_99);
    }
    return p_31;
}
static uint32_t func_33(int32_t p_34, uint32_t p_35, int16_t p_36, uint32_t p_37)
{
    uint8_t l_50 = 0x8A;
    int32_t l_179 = 0xBB79EB04;
    int32_t l_294 = 0x42474D7A;
    int8_t l_296 = 1;
    g_265 = ((func_42((safe_sub_func_int8_t_s_s((((l_50 != (safe_div_func_uint8_t_u_u(func_53((((l_179 = func_57((g_60 = l_50), p_35)) , 0U) == (safe_unary_minus_func_uint16_t_u((g_150 | (l_50 < ((safe_mod_func_int32_t_s_s((!(p_36 | (safe_div_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u((!(safe_lshift_func_uint16_t_u_u(((l_50 , 9) ^ g_150), 10))), 3)) || 1U), l_50)))), (-1))) , p_37)))))), p_36, l_50), 0x28))) , l_50) >= l_50), l_50)), g_150, p_34, g_150, p_37) , 4294967294U) < 0U);
    l_296 = (safe_lshift_func_int8_t_s_u(((!(!(g_295 = ((p_35 , (safe_rshift_func_int8_t_s_u(((((((((l_50 & (((((((l_294 = (safe_sub_func_uint16_t_u_u(g_254, (safe_sub_func_uint8_t_u_u((((safe_sub_func_int32_t_s_s(l_50, ((g_211 = (safe_div_func_uint8_t_u_u((safe_add_func_int32_t_s_s(g_108, ((safe_div_func_int16_t_s_s(((l_179 = (safe_mul_func_uint8_t_u_u(l_179, g_254))) < l_50), (safe_rshift_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(((safe_rshift_func_uint16_t_u_u((safe_add_func_int16_t_s_s((g_129 && g_265), g_130)), 11)) , 0x8F25B8A7), 1)), p_37)))) , p_34))), p_34))) == l_50))) != p_37) >= g_132), l_50))))) <= g_109) >= g_99) != g_265) | p_36) <= l_50) & p_36)) && g_254) || g_265) >= g_130) != p_36) == l_50) | l_50) || l_50), 6))) && p_35)))) , (-1)), l_50));
    g_211 = 0x8493D40E;
    return l_294;
}
static uint32_t func_42(int16_t p_43, int8_t p_44, int32_t p_45, uint16_t p_46, uint16_t p_47)
{
    int32_t l_219 = 0xECA5BA27;
    uint32_t l_244 = 4294967295U;
    uint16_t l_263 = 0xF3F7;
    uint8_t l_264 = 0U;
    l_219 = ((safe_rshift_func_uint16_t_u_s(((safe_mod_func_uint32_t_u_u((l_219 >= (safe_add_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_u(g_129, 4)), 5)), ((safe_unary_minus_func_int8_t_s((p_43 && ((p_47 || ((~((g_109 = (safe_lshift_func_int8_t_s_u(l_219, p_47))) | (safe_add_func_int8_t_s_s(g_8, p_46)))) != (safe_mod_func_uint32_t_u_u(((g_99 = l_219) || g_129), g_60)))) > l_219)))) && g_99)))), g_108)) , g_129), 15)) , p_45);
    l_219 = ((safe_rshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((l_244 > ((safe_sub_func_int32_t_s_s(((safe_mul_func_uint16_t_u_u((l_263 = ((safe_mod_func_uint32_t_u_u((((safe_add_func_int8_t_s_s(0x1A, (~(g_254 = g_99)))) != 4294967294U) > (safe_add_func_int32_t_s_s(((((((safe_mul_func_int8_t_s_s(g_129, l_244)) ^ (safe_mul_func_int8_t_s_s((l_244 && g_108), (safe_div_func_int16_t_s_s(g_77, (-5)))))) | g_130) , l_244) > l_244) && 0xF8), p_45))), p_46)) , l_244)), g_211)) > g_130), p_43)) , l_244)), l_219)), p_45)), g_60)) <= g_149);
    return l_264;
}
static uint8_t func_53(int16_t p_54, int32_t p_55, int32_t p_56)
{
    uint8_t l_196 = 1U;
    int32_t l_209 = 1;
    int32_t l_213 = (-8);
    if ((safe_sub_func_int16_t_s_s((0xDD < p_54), (safe_div_func_uint8_t_u_u(((!p_55) < ((((l_196 > (+((safe_unary_minus_func_uint32_t_u((safe_sub_func_int32_t_s_s((p_56 , (safe_div_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s((((g_77 = (safe_div_func_int32_t_s_s(g_150, 0x45DD7FD4))) & (l_209 = (0x8D73 <= ((safe_mod_func_uint16_t_u_u(l_196, l_196)) , 0x3B4E)))) > g_130), 4)), 0xE592CA97))), l_196)))) <= g_99))) , l_209) <= p_54) != g_108)), g_60)))))
    {
        int8_t l_214 = 0x1C;
        l_214 = (p_56 = (+((g_211 = g_99) != (l_213 = (l_209 = (~p_54))))));
        return g_109;
    }
    else
    {
        p_56 = g_77;
    }
    return g_132;
}
static uint8_t func_57(int32_t p_58, uint16_t p_59)
{
    uint32_t l_63 = 8U;
    int32_t l_98 = 0x9F5B60AA;
    int32_t l_100 = (-1);
    int32_t l_110 = (-2);
    int16_t l_128 = 0x772B;
    if ((p_58 | func_61(l_63)))
    {
        int8_t l_101 = 2;
        int32_t l_127 = 0x6699CBFF;
        int32_t l_131 = 0;
        uint16_t l_133 = 3U;
        int32_t l_151 = 0;
        l_110 = (((safe_sub_func_int8_t_s_s((((((safe_mul_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_u((!(p_58 , (safe_mod_func_uint16_t_u_u(g_60, ((safe_div_func_int32_t_s_s((safe_unary_minus_func_uint16_t_u((((safe_mod_func_uint16_t_u_u(((~(safe_mod_func_int32_t_s_s(g_60, (g_8 & (4U <= (l_98 = (-1))))))) | ((((l_100 = (g_99 = p_59)) != (g_109 = (l_101 == (+(~(g_108 = (safe_lshift_func_int16_t_s_s((safe_mod_func_int8_t_s_s(0x50, g_8)), 7)))))))) || g_60) , g_99)), g_60)) != 247U) | g_77))), 8U)) , 0x65F1))))), 4)) != 0xB1342F27), g_8)) == l_101) , 0x5C) <= g_77) , g_109), g_60)) != 0x526D) & g_8);
        g_77 = (safe_div_func_int16_t_s_s(((safe_mod_func_uint8_t_u_u(0x98, (safe_mod_func_int32_t_s_s(((0x1534BB8E || g_77) > ((g_132 = (65533U <= ((l_131 = ((g_130 = (g_129 = (l_101 && (((safe_mod_func_int8_t_s_s((safe_add_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u(((((((safe_mul_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((p_59 = 0xED0E), (((0x0DEC7D61 < ((l_127 = (p_58 != p_58)) | p_58)) & l_101) > 0))), g_109)) & 2U) != l_101) < 0xD736) < g_109) ^ l_98), 6U)), p_58)), 0xA3)) , l_128) , p_58)))) >= 0x7432CFE0)) >= l_128))) != p_58)), g_8)))) , l_133), 0xBB0D));
        g_77 = ((safe_lshift_func_uint16_t_u_s((l_151 = (p_58 || (((safe_sub_func_uint8_t_u_u(((p_59 = p_59) <= ((l_127 = ((safe_add_func_int32_t_s_s((!((((((safe_add_func_int32_t_s_s(g_60, (((((l_110 = (safe_rshift_func_int8_t_s_u(((l_131 = (safe_unary_minus_func_int8_t_s(p_58))) || (g_108 , ((g_129 = p_58) , (g_108 < (safe_unary_minus_func_uint16_t_u((((p_58 <= (g_149 = ((safe_lshift_func_uint16_t_u_s((l_127 >= g_99), p_58)) & l_131))) >= g_60) & 9))))))), 2))) == p_58) >= l_127) < l_101) >= l_127))) , g_150) | g_130) == 1) | l_63) , p_58)), 0x3FF9C57F)) , (-10))) < l_133)), 3U)) <= g_8) , p_59))), 11)) , 0xD53FEA8E);
    }
    else
    {
        return g_60;
    }
    g_77 = (safe_add_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(((((l_110 , ((safe_rshift_func_uint16_t_u_s((l_128 < (l_100 = (1 >= (l_110 = (((safe_sub_func_uint32_t_u_u((((safe_lshift_func_int16_t_s_s(l_128, 14)) < (l_98 == (((safe_rshift_func_int16_t_s_u(((safe_add_func_uint8_t_u_u((((p_58 <= (p_59 == ((g_99 = (((-10) >= g_99) < p_58)) , p_59))) | l_100) | g_60), g_132)) && 0x04E3), l_128)) == g_77) ^ 0U))) , 4294967292U), (-1))) , 0x96) ^ 0U))))), 1)) , p_59)) != g_60) <= g_132) | 0xB152), 5)), l_98));
    l_98 = (safe_add_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s((((((g_77 = (p_58 <= ((g_60 = l_100) && 0x0EE9))) || ((safe_add_func_int16_t_s_s((l_98 | ((g_77 = g_99) | ((safe_rshift_func_int16_t_s_u((((safe_unary_minus_func_int8_t_s(l_100)) & 65531U) , (p_59 == (l_110 = 255U))), l_128)) < 0x1D))), l_63)) , g_150)) | l_100) <= p_59) < p_59), l_98)), g_109));
    g_77 = (0x2B || (safe_rshift_func_uint8_t_u_s((0xE451 != g_8), g_132)));
    return p_59;
}
static int8_t func_61(uint8_t p_62)
{
    uint16_t l_68 = 0x84A4;
    uint32_t l_73 = 0x519BA600;
    int32_t l_76 = 0;
    int32_t l_78 = 0x1A16747B;
    g_77 = (((safe_div_func_uint8_t_u_u((l_78 = (((safe_lshift_func_uint16_t_u_u(l_68, 7)) >= ((p_62 && (l_68 , p_62)) <= ((((safe_lshift_func_int8_t_s_u(((safe_lshift_func_int8_t_s_u(g_8, 2)) || ((l_76 = (((l_73 = g_8) , ((safe_rshift_func_uint8_t_u_s(g_60, 6)) < 0x0181)) != l_68)) || g_8)), 5)) >= 0xEC) || l_76) || p_62))) , g_77)), 0x05)) < p_62) != 0U);
    l_76 = ((g_8 , 0xF48B) <= g_60);
    return p_62;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_8;
    csmith_sink_ = g_60;
    csmith_sink_ = g_77;
    csmith_sink_ = g_99;
    csmith_sink_ = g_108;
    csmith_sink_ = g_109;
    csmith_sink_ = g_129;
    csmith_sink_ = g_130;
    csmith_sink_ = g_132;
    csmith_sink_ = g_149;
    csmith_sink_ = g_150;
    csmith_sink_ = g_211;
    csmith_sink_ = g_254;
    csmith_sink_ = g_265;
    csmith_sink_ = g_295;
    csmith_sink_ = g_297;
    csmith_sink_ = g_426;
    csmith_sink_ = g_439;
    csmith_sink_ = g_477;
    csmith_sink_ = g_486;
    csmith_sink_ = g_627;
    csmith_sink_ = g_746;
    csmith_sink_ = g_883;
    platform_main_end(0,0);
    return 0;
}
