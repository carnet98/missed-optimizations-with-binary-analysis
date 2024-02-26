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

volatile uint64_t csmith_sink_ = 0;
static long __undefined;
static uint32_t g_16 = 0xA9565E08L;
static int64_t g_79 = 0xB83DCDCBD5F5AB95LL;
static int32_t g_81 = 0x9D45C545L;
static int32_t * const g_82 = (void*)0;
static int32_t g_88 = 0x1449BABEL;
static int16_t g_111 = 2L;
static uint64_t g_121 = 0x26016E5DCA5B7F44LL;
static int16_t g_130 = 2L;
static int16_t g_138 = 0xFFF3L;
static const int32_t g_142 = 0x33D3A0D6L;
static int16_t **g_151 = (void*)0;
static int16_t *g_154 = (void*)0;
static int16_t **g_153 = &g_154;
static uint16_t g_160 = 0x490BL;
static uint16_t g_165 = 65532UL;
static uint8_t g_171 = 249UL;
static int16_t ***g_174 = &g_153;
static int16_t *** const *g_173 = &g_174;
static uint32_t g_192 = 0xB569DADAL;
static int16_t *g_229 = &g_130;
static int8_t g_245 = 0xE9L;
static int32_t g_290 = (-1L);
static int64_t g_320 = 9L;
static int64_t *g_319 = &g_320;
static const int32_t g_335 = 1L;
static const int16_t *g_365 = &g_138;
static const int16_t **g_364 = &g_365;
static const int16_t *** const g_363 = &g_364;
static uint32_t g_381 = 0x9D7EAA55L;
static int8_t g_388 = 0L;
static uint8_t g_403 = 1UL;
static int8_t *g_458 = &g_245;
static int8_t **g_457 = &g_458;
static int32_t *g_550 = &g_88;
static uint16_t **g_555 = (void*)0;
static int64_t ***g_572 = (void*)0;
static int32_t * const **g_619 = (void*)0;
static const uint16_t *g_666 = (void*)0;
static const uint16_t **g_665 = &g_666;
static const uint16_t ***g_664 = &g_665;
static const int32_t *g_670 = &g_88;
static uint16_t g_708 = 0x9E35L;
static const int64_t g_716 = 5L;
static const int64_t *g_715 = &g_716;
static const int64_t **g_714 = &g_715;
static const int64_t ***g_713 = &g_714;
static int32_t *g_859 = &g_88;
static int32_t ****g_910 = (void*)0;
static int32_t *****g_909 = &g_910;
static int16_t ****g_913 = &g_174;
static int16_t *****g_912 = &g_913;
static int32_t func_1(void);
static int64_t func_4(uint8_t p_5, uint32_t p_6, const int64_t p_7);
static int16_t func_10(uint32_t p_11, uint32_t p_12, int32_t p_13, int64_t p_14, int32_t p_15);
static uint32_t func_17(int16_t p_18, int32_t p_19);
static int8_t func_30(int8_t p_31, int16_t p_32);
static const int64_t func_35(int16_t p_36, int16_t p_37, uint32_t p_38, const int32_t p_39);
static int32_t func_41(uint16_t p_42, const uint64_t p_43, uint8_t p_44, uint64_t p_45, int32_t p_46);
static uint8_t func_49(uint16_t p_50, uint64_t p_51);
static uint32_t func_54(int32_t p_55, uint32_t p_56, uint16_t p_57);
static int8_t func_61(int32_t p_62, uint64_t p_63, int8_t p_64);
static int32_t func_1(void)
{
    const int64_t l_40 = 0x9A01C77DCDA7209CLL;
    int32_t l_963 = 0x45BC3E1FL;
    uint32_t l_966 = 0xEC7AB91DL;
    int32_t *l_978 = &g_88;
    int32_t l_979 = (-8L);
    (*l_978) = (safe_add_func_int64_t_s_s(func_4((safe_rshift_func_int16_t_s_u(func_10(g_16, func_17((l_963 = ((*g_229) = ((safe_rshift_func_uint16_t_u_u((((((safe_rshift_func_int8_t_s_s(((safe_add_func_int8_t_s_s(((safe_rshift_func_int16_t_s_s(((safe_sub_func_uint32_t_u_u(0xA7B7E80DL, (func_30(((safe_sub_func_int64_t_s_s(func_35(g_16, g_16, g_16, l_40), 0xC81547C4DC293719LL)) , (-10L)), l_40) < l_40))) > l_40), 7)) < l_40), 246UL)) && l_40), 0)) , l_40) | g_16) == l_40) < l_40), 14)) <= l_40))), l_40), l_40, (*g_715), l_966), l_966)), g_335, l_966), (**g_714)));
    l_978 = (void*)0;
    return l_979;
}
static int64_t func_4(uint8_t p_5, uint32_t p_6, const int64_t p_7)
{
    uint64_t l_972 = 0xF4AE9065158273F2LL;
    int32_t *l_977 = &g_88;
    (*l_977) = (((((p_6 = ((0x81L && g_165) , (((safe_lshift_func_uint16_t_u_u(p_7, ((l_972 < (((void*)0 == (*g_364)) >= g_88)) < l_972))) <= ((+(safe_mul_func_int8_t_s_s((+p_7), (-3L)))) != g_335)) && g_111))) , &p_6) == &g_16) > 0xA4EF34993F6A95A9LL) | l_972);
    return (*g_715);
}
static int16_t func_10(uint32_t p_11, uint32_t p_12, int32_t p_13, int64_t p_14, int32_t p_15)
{
    int32_t *l_967 = &g_88;
    int32_t **l_968 = &l_967;
    int16_t ***l_969 = &g_153;
    l_967 = &p_15;
    (*l_968) = (p_12 , l_967);
    (*g_913) = l_969;
    (*l_968) = (*l_968);
    return p_15;
}
static uint32_t func_17(int16_t p_18, int32_t p_19)
{
    int32_t **l_964 = &g_550;
    int32_t ***l_965 = &l_964;
    (*l_965) = l_964;
    return g_88;
}
static int8_t func_30(int8_t p_31, int16_t p_32)
{
    int16_t * const l_931 = &g_130;
    int32_t l_935 = 1L;
    uint32_t l_936 = 0xF884ADC4L;
    const int32_t l_939 = 0x873560EAL;
    uint16_t *l_949 = &g_165;
    uint16_t **l_948 = &l_949;
    uint16_t **l_951 = &l_949;
    const int64_t l_959 = 0xDC7472D0E3FC21E7LL;
    const int32_t **l_962 = &g_670;
    if ((safe_add_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(g_165, 3L)), g_320)))
    {
        uint64_t l_934 = 6UL;
        (*g_859) = (((**g_714) >= ((((safe_lshift_func_int8_t_s_u((safe_rshift_func_int16_t_s_u(((*g_364) == l_931), 14)), 0)) >= (safe_mod_func_uint8_t_u_u(p_31, l_934))) , l_935) || (l_934 != ((((((l_934 | (((1UL < l_936) >= g_335) > (**g_457))) <= p_31) > p_32) , 0x73L) != 0xADL) | 8L)))) >= 0xB5F8L);
        return (*g_458);
    }
    else
    {
        uint16_t ***l_950 = &l_948;
        int32_t l_956 = 0x7D46E0F8L;
        uint64_t l_960 = 18446744073709551615UL;
        int32_t **l_961 = &g_859;
        for (p_32 = 0; (p_32 <= (-25)); p_32--)
        {
            uint32_t l_942 = 18446744073709551615UL;
            int32_t *l_943 = &l_935;
            if (l_939)
                break;
            for (g_160 = 0; (g_160 != 24); g_160 = safe_add_func_uint32_t_u_u(g_160, 2))
            {
                int32_t **l_944 = &g_859;
                int32_t **l_945 = (void*)0;
                int32_t **l_946 = &g_550;
                (*l_946) = (l_942 , ((*l_944) = l_943));
                return p_31;
            }
        }
        l_956 = ((((safe_unary_minus_func_uint64_t_u(g_130)) , 4294967293UL) >= ((((((*l_950) = l_948) != (l_951 = &l_949)) & (safe_add_func_int8_t_s_s((((((*g_457) != (void*)0) && (safe_rshift_func_int8_t_s_u(l_956, (0xE8L != (safe_rshift_func_uint16_t_u_u((0x8098ED6EB20BF55FLL || p_32), l_939)))))) < l_959) && p_32), l_960))) , (void*)0) == &g_290)) , p_32);
        (*l_961) = (l_960 , &l_935);
    }
    (*l_962) = (void*)0;
    return p_31;
}
static const int64_t func_35(int16_t p_36, int16_t p_37, uint32_t p_38, const int32_t p_39)
{
    uint32_t l_65 = 0x8E548E01L;
    uint64_t l_70 = 0xC4B79A97A8D1D9D6LL;
    int64_t *l_78 = &g_79;
    int32_t *l_80 = &g_81;
    uint16_t l_90 = 0x8CF4L;
    int32_t l_324 = 0xFC40FA6EL;
    int32_t l_325 = 0L;
    int16_t l_367 = 0x581FL;
    int32_t *l_379 = (void*)0;
    int32_t *l_380 = (void*)0;
    int32_t **l_469 = (void*)0;
    int32_t ***l_468 = &l_469;
    int8_t l_474 = 0x60L;
    uint8_t *l_495 = &g_403;
    const int32_t *l_496 = (void*)0;
    const int64_t l_518 = 0x7D238100C5AB965BLL;
    int16_t *** const * const l_528 = &g_174;
    int64_t l_618 = 1L;
    uint64_t l_625 = 0x2D3BEE10AEB0365CLL;
    int64_t * const *l_661 = (void*)0;
    int64_t * const **l_660 = &l_661;
    int64_t * const ***l_659 = &l_660;
    int64_t *l_730 = &l_618;
    int16_t ***l_763 = &g_153;
    const uint16_t **l_815 = &g_666;
    int8_t **l_818 = &g_458;
    const int8_t *l_834 = &l_474;
    const int8_t * const *l_833 = &l_834;
    const int8_t * const **l_832 = &l_833;
    g_381 = func_41((((safe_lshift_func_uint8_t_u_u(func_49((safe_sub_func_int32_t_s_s(p_39, (((l_325 = ((((p_36 == (func_54((safe_mod_func_uint32_t_u_u((safe_unary_minus_func_int64_t_s(g_16)), (func_61(((*l_80) = (l_65 , (safe_rshift_func_int16_t_s_u(((((safe_mod_func_int8_t_s_s(g_16, (((*l_78) = (l_70 < (!(((g_16 != ((safe_sub_func_uint64_t_u_u((g_16 || (safe_mul_func_uint8_t_u_u((((safe_mul_func_int8_t_s_s(l_70, g_16)) >= 0L) != p_36), p_37))), 0x8647D02C9AA6F576LL)) , p_38)) & p_37) >= g_16)))) , p_38))) && p_36) <= l_70) <= l_65), 8)))), l_65, g_16) , l_90))), l_65, l_70) == 4294967291UL)) | l_324) & 0UL) , g_81)) & 0xEE98ABC2L) < l_65))), p_39), 6)) , 0x53EDL) | p_39), p_36, p_39, l_367, g_171);
    if (g_88)
    {
        int8_t *l_384 = &g_245;
        int8_t *l_385 = (void*)0;
        int8_t *l_386 = (void*)0;
        int8_t *l_387 = &g_388;
        int32_t l_395 = 0xE9F9F4B5L;
        int32_t *l_404 = (void*)0;
        int32_t *l_405 = &g_88;
        int64_t **l_410 = &l_78;
        if (((*l_405) = (((safe_mod_func_uint32_t_u_u((p_39 || (((g_165 & (p_38 || (((*l_387) = ((*l_384) = 0x81L)) >= (safe_add_func_int16_t_s_s(((*g_229) = (*g_229)), (safe_rshift_func_int8_t_s_u((safe_mul_func_uint16_t_u_u((((g_111 && ((((p_39 && (((l_395 == ((safe_mod_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_u((safe_add_func_uint64_t_u_u((safe_unary_minus_func_int64_t_s((*g_319))), g_320)), g_138)), (-1L))) , p_38)) == 4294967289UL) == g_403)) > g_290) == l_395) | 0x74A0215CL)) & g_81) <= l_395), l_395)), 7))))))) < p_36) == p_38)), 4294967295UL)) || g_16) == g_79)))
        {
            int64_t ***l_411 = &l_410;
            uint8_t *l_420 = &g_403;
            int32_t l_431 = 9L;
            int32_t l_450 = 0x7E6AA0FAL;
            int32_t l_451 = 1L;
            (*l_405) = (safe_mul_func_uint16_t_u_u(65530UL, (safe_sub_func_int8_t_s_s((((*l_411) = l_410) == &g_319), ((0x05L > ((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(((void*)0 != l_78), 13)), (safe_rshift_func_int8_t_s_s(((safe_mod_func_int8_t_s_s(((-1L) >= ((*l_420) = g_320)), ((*l_405) ^ g_130))) > (-1L)), p_37)))) <= (*l_405))) < g_171)))));
            (*l_405) = (safe_rshift_func_int16_t_s_u((((g_388 = 1L) , 0L) , p_37), 14));
            for (g_130 = (-5); (g_130 >= (-6)); --g_130)
            {
                uint32_t l_432 = 0x78794BD4L;
                int16_t *l_452 = &g_138;
                l_431 = (safe_rshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_s(g_290, ((*l_405) = (safe_sub_func_int8_t_s_s(((p_37 = l_431) < (g_245 , g_88)), ((l_432 , (((*l_452) = (0x2EFFL != (((safe_unary_minus_func_uint8_t_u((+(((*l_420) = (!(safe_mul_func_int16_t_s_s(0xD782L, g_130)))) ^ (safe_lshift_func_uint16_t_u_s((safe_mul_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(((l_451 = (safe_mod_func_int16_t_s_s(((l_450 = (safe_mul_func_int8_t_s_s(((*l_387) = l_432), p_36))) , (**g_364)), p_38))) != p_36), 0x6087L)), l_432)), p_36)), p_39)))))) >= l_431) >= 0x34L))) & 0UL)) >= p_39)))))), 3));
                (*l_405) = (safe_sub_func_int64_t_s_s((0UL | (*l_405)), 0xF49B51BDFFC9A4B7LL));
            }
        }
        else
        {
            for (p_36 = 0; (p_36 >= (-25)); p_36--)
            {
                int8_t ***l_459 = &g_457;
                int32_t *l_460 = &l_325;
                int32_t **l_461 = &l_405;
                (*l_459) = g_457;
                (*l_461) = l_460;
            }
        }
        (*l_405) = 1L;
    }
    else
    {
        int32_t ***l_465 = (void*)0;
        int32_t ****l_466 = (void*)0;
        int32_t ****l_467 = &l_465;
        uint16_t *l_475 = &g_165;
        g_88 = (~((safe_lshift_func_uint16_t_u_s(((*l_475) = (((((void*)0 != &l_90) && (((((*l_467) = l_465) != l_468) > (safe_sub_func_int64_t_s_s((*g_319), (p_36 == ((void*)0 == &l_468))))) <= ((*g_229) = ((safe_lshift_func_uint8_t_u_s(g_171, l_474)) || 65526UL)))) >= p_36) ^ g_138)), 1)) | p_38));
    }
    if ((safe_add_func_int8_t_s_s(((**g_457) = (p_39 != (safe_add_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u(((*l_495) = (!((safe_sub_func_int16_t_s_s((***g_363), (safe_sub_func_uint16_t_u_u(1UL, (0xEF98C274L > (safe_lshift_func_uint8_t_u_s(((safe_rshift_func_uint16_t_u_s(((0x6F8766C3L != ((((safe_rshift_func_int16_t_s_u(p_36, 14)) , (((*g_319) = (-1L)) | (safe_mul_func_int16_t_s_s(0L, 0L)))) , p_39) , p_39)) | p_38), 13)) ^ g_335), (**g_457)))))))) || g_142))), 4)), 0xC41BL)))), g_79)))
    {
        const int32_t **l_497 = (void*)0;
        const int32_t **l_498 = (void*)0;
        const int32_t **l_499 = &l_496;
        l_496 = &g_335;
        (*l_499) = &p_39;
    }
    else
    {
        int64_t l_507 = 4L;
        int64_t ***l_513 = (void*)0;
        int16_t ** const *l_526 = &g_153;
        int16_t ** const **l_525 = &l_526;
        uint16_t **l_557 = (void*)0;
        const int32_t *l_560 = (void*)0;
        uint8_t l_582 = 3UL;
        uint16_t *l_585 = &g_165;
        uint16_t **l_584 = &l_585;
        int32_t l_587 = 0x24A3151DL;
        int16_t ****l_677 = &g_174;
        uint32_t l_705 = 1UL;
        uint32_t l_717 = 0x61553071L;
        uint8_t **l_740 = &l_495;
        int32_t l_860 = 0xDB6F22ECL;
        int8_t ***l_867 = &l_818;
        int8_t ****l_866 = &l_867;
        uint32_t l_875 = 4294967292UL;
        const int8_t l_882 = (-2L);
        int32_t *** const *l_917 = (void*)0;
        int32_t *** const **l_916 = &l_917;
        if (g_335)
        {
            uint16_t *l_500 = &l_90;
            int32_t l_502 = 4L;
            int32_t **l_520 = &l_379;
            if ((((*l_500) = p_38) | g_192))
            {
                const int32_t **l_501 = &l_496;
                int32_t l_509 = 0x814F4F9EL;
                (*l_501) = &p_39;
                if (l_502)
                {
                    int32_t ****l_505 = &l_468;
                    for (l_474 = 0; (l_474 > 19); l_474++)
                    {
                        int32_t *****l_506 = &l_505;
                        int32_t l_508 = 0x691C5F55L;
                        (*l_506) = l_505;
                        (*l_501) = &p_39;
                        l_508 = l_507;
                    }
                    return p_39;
                }
                else
                {
                    int32_t l_512 = 1L;
                    int32_t l_517 = (-7L);
                    l_509 = ((void*)0 != (*g_173));
                    if ((l_512 = (safe_sub_func_uint32_t_u_u(p_37, l_507))))
                    {
                        int64_t ****l_514 = &l_513;
                        (*l_514) = l_513;
                        (*l_501) = &g_142;
                        (*l_501) = &p_39;
                    }
                    else
                    {
                        (*l_501) = &g_88;
                        (*l_501) = (*l_501);
                    }
                    l_517 = (safe_lshift_func_int8_t_s_u(l_507, 7));
                    return l_518;
                }
            }
            else
            {
                const int32_t **l_519 = &l_496;
                (*l_519) = &g_142;
                (*l_468) = l_520;
                return p_37;
            }
        }
        else
        {
            int16_t ** const ***l_527 = &l_525;
            int32_t l_533 = (-1L);
            uint16_t *l_534 = (void*)0;
            uint16_t *l_535 = &g_165;
            uint32_t *l_536 = (void*)0;
            uint32_t *l_537 = &g_192;
            if ((((*l_537) = (l_507 == (safe_sub_func_int32_t_s_s((p_38 < (safe_rshift_func_uint16_t_u_u((((*l_527) = l_525) == (l_507 , l_528)), (safe_unary_minus_func_int64_t_s((&g_165 == (void*)0)))))), (+((*l_535) = (safe_mul_func_uint16_t_u_u((g_111 , g_121), l_533)))))))) < 6L))
            {
                return (*g_319);
            }
            else
            {
                int64_t l_549 = 0xD41F283284EC7DB4LL;
                for (l_367 = 24; (l_367 == 28); ++l_367)
                {
                    int32_t *l_542 = &g_88;
                    const int32_t **l_545 = &l_496;
                    for (l_65 = 0; (l_65 < 54); ++l_65)
                    {
                        int32_t **l_543 = &l_380;
                        const int32_t **l_544 = &l_496;
                        (*l_543) = l_542;
                        (*l_544) = &p_39;
                        if (p_36)
                            break;
                        (**l_543) = 0x03576593L;
                    }
                    (*l_545) = &p_39;
                    (*l_545) = &g_88;
                }
                for (g_290 = 0; (g_290 <= 22); g_290 = safe_add_func_uint16_t_u_u(g_290, 7))
                {
                    uint32_t l_548 = 0xB84019BDL;
                    l_549 = (g_16 | l_548);
                    g_550 = g_550;
                }
            }
        }
        if (((g_138 || g_111) , (safe_sub_func_int32_t_s_s((4UL >= ((((0UL != p_37) != p_37) , (safe_lshift_func_int8_t_s_u((**g_457), g_290))) & p_37)), 0x47DCB6B8L))))
        {
            uint16_t ***l_556 = (void*)0;
            int64_t * const *l_564 = (void*)0;
            int64_t * const **l_563 = &l_564;
            const uint32_t l_571 = 0x43F426D7L;
            int32_t l_581 = 1L;
            const int32_t * const *l_624 = &l_560;
            int8_t *l_626 = &l_474;
            int16_t ****l_676 = &g_174;
            uint32_t l_681 = 18446744073709551609UL;
            uint16_t l_707 = 0x9DC9L;
            int64_t l_768 = 0x9BFD41E4FE405F5ELL;
            uint16_t l_783 = 0UL;
            int8_t ***l_831 = (void*)0;
            int32_t l_856 = (-1L);
            l_557 = g_555;
            for (l_324 = 0; (l_324 <= (-23)); l_324 = safe_sub_func_int64_t_s_s(l_324, 5))
            {
                uint16_t *l_566 = &g_165;
                uint16_t **l_565 = &l_566;
                int64_t * const l_570 = (void*)0;
                int64_t * const * const l_569 = &l_570;
                int64_t * const * const *l_568 = &l_569;
                int64_t * const * const **l_567 = &l_568;
                const int32_t l_583 = 0xE560A1FFL;
                uint16_t ***l_586 = &g_555;
                l_560 = &p_39;
                (*g_550) = (((safe_mod_func_uint32_t_u_u(4294967295UL, 4294967291UL)) , (((void*)0 != l_563) || 0x7B9ABF68L)) <= ((*g_319) = ((-1L) == p_36)));
                l_587 = ((l_557 = l_565) == ((*l_586) = ((((**l_565) = ((((*l_567) = &l_564) != ((l_571 & p_37) , g_572)) == (-3L))) && (safe_sub_func_int32_t_s_s((p_39 > (safe_add_func_uint32_t_u_u((((safe_lshift_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((l_581 = 4UL), ((((0xA3C9DEEEC245D851LL > g_88) & 0x90L) , p_37) >= l_582))), l_583)) , l_513) != &l_564), (*l_560)))), p_36))) , l_584)));
                if (p_38)
                {
                    const int32_t **l_588 = &l_496;
                    (*l_588) = &p_39;
                    (*l_588) = (p_36 , &p_39);
                }
                else
                {
                    (*g_550) = ((0x57L < (((((*g_319) = ((safe_mul_func_int16_t_s_s(((((safe_lshift_func_int16_t_s_s(p_37, (safe_mul_func_int16_t_s_s(((-1L) <= ((*g_229) = (-1L))), (safe_rshift_func_int16_t_s_s((*g_365), 12)))))) & (((safe_lshift_func_uint8_t_u_s((safe_sub_func_uint32_t_u_u(((~(g_160 < ((safe_add_func_uint8_t_u_u(((*l_560) , g_16), g_88)) ^ 254UL))) ^ g_138), l_583)), 6)) == 0xEAL) , 1UL)) , 4294967295UL) | 0x96B4E3A9L), (**g_555))) == p_36)) != 0x7976DDAF2135F334LL) | g_160) , (*l_560))) , p_39);
                }
            }
            if (((safe_mod_func_int8_t_s_s(((*l_626) = ((**g_457) = (0x28EEL > ((((**g_364) , ((((((safe_mul_func_uint8_t_u_u(((p_37 < (safe_mod_func_int32_t_s_s((+(safe_mod_func_int16_t_s_s(((((((*l_495) = g_245) || ((safe_rshift_func_int8_t_s_u((*g_458), ((~(safe_rshift_func_int8_t_s_s(l_618, 4))) < ((void*)0 == g_619)))) , ((*l_495) = (safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(l_581, 2)), p_38))))) || 0x9A34L) == p_38) <= 0L), l_581))), 1UL))) == 0x2042FC192ABF6E8ALL), p_39)) || l_581) , l_624) == l_624) ^ 6L) & l_625)) , l_582) < p_37)))), 8UL)) != 4294967295UL))
            {
                uint8_t l_627 = 0x2CL;
                int32_t *l_630 = &l_581;
                int64_t *l_631 = &l_507;
                int32_t *l_639 = (void*)0;
                uint16_t ***l_667 = &l_557;
                int32_t l_719 = 0x1606B654L;
                int32_t **l_720 = &l_379;
                int32_t *l_721 = &l_325;
                if ((l_627 < (safe_mul_func_int8_t_s_s(0x9DL, ((void*)0 != (*g_457))))))
                {
                    g_550 = l_630;
                }
                else
                {
                    int64_t **l_632 = &l_631;
                    int32_t l_635 = 0L;
                    uint32_t *l_636 = &l_65;
                    const int32_t *l_655 = &l_325;
                    const int32_t **l_656 = &l_496;
                    if (((((((*l_632) = l_631) != &g_79) != ((&g_403 == (void*)0) != (-1L))) > (safe_mod_func_uint32_t_u_u((l_635 = p_38), (((*l_636) = (g_192 = ((*l_630) = g_138))) & p_37)))) || (p_37 < (-9L))))
                    {
                        const int32_t **l_637 = &l_560;
                        (*l_637) = &p_39;
                    }
                    else
                    {
                        int32_t **l_638 = &l_630;
                        int32_t l_653 = 0x9F8DA1DDL;
                        uint16_t l_654 = 0xEDEBL;
                        (*l_638) = &g_88;
                        (*l_638) = l_639;
                        (*g_550) = (0x63F954FDB46A7616LL >= ((g_388 == (0L & (g_142 == ((p_38 > (safe_mod_func_uint8_t_u_u(p_37, ((**g_457) = ((safe_add_func_int32_t_s_s((safe_mul_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_u(0x80A9L, (safe_sub_func_int32_t_s_s(p_38, (~p_39))))) || l_653), l_654)), 0L)) || p_39))))) | p_37)))) , 0UL));
                    }
                    l_655 = &p_39;
                    l_560 = (void*)0;
                    (*l_656) = &p_39;
                }
                if ((((g_171 = ((0x9DEDD145L < (safe_mod_func_int8_t_s_s(((void*)0 != l_659), (safe_mod_func_uint16_t_u_u(((((g_664 = g_664) != l_667) <= p_37) >= ((((*l_626) = (p_38 >= (p_39 ^ p_38))) != 246UL) , 0x51217C7FL)), (*g_365)))))) < (**g_457))) & p_39) == (**g_364)))
                {
                    const int32_t **l_668 = &l_560;
                    const int32_t **l_669 = &l_496;
                    int16_t ****l_675 = &g_174;
                    (*l_669) = ((*l_668) = &p_39);
                    g_670 = (*l_669);
                    for (l_618 = 12; (l_618 != (-16)); l_618 = safe_sub_func_int32_t_s_s(l_618, 7))
                    {
                        (*g_550) = (g_16 != (((g_121 = ((((*l_631) = ((0x1E390565L && (safe_rshift_func_uint8_t_u_u(p_37, (l_675 != (l_677 = l_676))))) >= (!((*l_626) = (safe_mod_func_uint16_t_u_u((**l_624), l_681)))))) & g_111) != (safe_rshift_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(((-3L) && p_38), 0x87L)), 5)))) != (-6L)) , (-1L)));
                    }
                    for (l_324 = 0; (l_324 == (-7)); l_324 = safe_sub_func_uint64_t_u_u(l_324, 9))
                    {
                        int32_t l_704 = 0x52B233D5L;
                        uint32_t *l_706 = &g_192;
                        (*g_550) = ((p_38 && ((**l_668) , (safe_mod_func_int16_t_s_s((((**l_624) , ((((*l_585) = ((safe_rshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(((((safe_lshift_func_int8_t_s_s((*g_458), (safe_mod_func_uint32_t_u_u(1UL, ((*l_706) = (((((*g_229) = (**l_624)) > ((((void*)0 != (***l_525)) != (safe_sub_func_uint32_t_u_u((safe_add_func_uint64_t_u_u((safe_mul_func_uint8_t_u_u((((*l_626) = (*g_458)) , l_704), (*g_458))), l_705)), 0x289E6268L))) || 1L)) ^ p_39) ^ 0x892DL)))))) <= l_707) | (**l_624)) ^ (*g_670)), 12)), 1)) , 0x8B8EL)) ^ (*g_365)) ^ g_708)) , (**l_624)), (**g_364))))) >= 0x96L);
                        if (l_704)
                            continue;
                    }
                }
                else
                {
                    const int64_t **l_712 = (void*)0;
                    const int64_t ***l_711 = &l_712;
                    int32_t l_718 = 0xEDF9DA8DL;
                    l_719 = (p_36 > ((**l_584) = (~((!(((0xD9L & ((((g_713 = l_711) == (void*)0) , (p_39 >= (((*g_550) = ((l_717 ^ p_38) <= (7L >= (l_718 = (**g_714))))) == g_403))) != p_37)) , (*g_458)) ^ (**g_457))) > 0x98D4L))));
                    return p_37;
                }
                (*l_720) = &g_88;
                if (p_38)
                {
                    l_721 = &l_587;
                    (*l_721) = (((safe_rshift_func_uint16_t_u_u(0xCF8AL, ((**l_584) = ((*l_560) > ((safe_rshift_func_uint16_t_u_u((**l_720), 13)) ^ (safe_sub_func_int8_t_s_s((**g_457), (*g_458)))))))) , (((((((***g_713) <= (((*g_713) == (void*)0) <= (((safe_mul_func_int16_t_s_s((l_730 != (*g_714)), 65535UL)) & (*l_721)) , p_39))) < 0xB3189EFCL) == (**l_624)) | 0x15L) , 0xB20C2C47D8770A7ELL) > (*l_560))) & (*g_550));
                }
                else
                {
                    (*l_379) = (*g_670);
                }
            }
            else
            {
                uint32_t l_734 = 0xE8BFD0AAL;
                (*g_550) = (-7L);
                for (g_192 = (-12); (g_192 > 24); g_192++)
                {
                    int32_t l_733 = 1L;
                    if (l_733)
                        break;
                }
                (*g_550) = l_734;
            }
            if ((*g_670))
            {
                int64_t *l_746 = &l_618;
                int8_t ***l_755 = (void*)0;
                int32_t l_773 = 0x7091ECD2L;
                if ((safe_mul_func_uint16_t_u_u((((*l_525) = (*l_677)) == ((l_582 || 0x3E97F0320ADF2683LL) , (*l_528))), p_36)))
                {
                    uint8_t ***l_741 = &l_740;
                    int32_t l_742 = (-1L);
                    for (l_70 = 0; (l_70 == 2); ++l_70)
                    {
                        const int32_t **l_739 = &g_670;
                        (*l_739) = &p_39;
                        (*l_739) = &p_39;
                    }
                    (*l_741) = l_740;
                    l_581 = l_742;
                }
                else
                {
                    const int32_t **l_743 = &l_496;
                    uint16_t ***l_760 = &l_557;
                    int16_t ***l_764 = &g_151;
                    int32_t l_765 = 0x853B3733L;
                    (*l_743) = &p_39;
                    (*g_550) = ((((safe_lshift_func_uint8_t_u_u((l_746 == l_746), ((((safe_rshift_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u(((safe_rshift_func_uint16_t_u_u(((((void*)0 != l_755) != 2L) ^ (((safe_mod_func_int64_t_s_s(((p_37 >= 1L) && ((*g_229) = (((safe_add_func_int16_t_s_s(p_37, 7L)) >= p_36) | g_142))), (**l_743))) , (***g_713)) <= g_16)), g_381)) != (*g_458)), p_36)), (*g_550))) != g_121), 0)) != 0x69L) <= 5UL) || (*g_670)))) < p_38) , l_760) == &g_555);
                    l_765 = (safe_add_func_uint16_t_u_u(((*l_528) == (l_764 = l_763)), 0xA741L));
                }
                if ((p_39 && (safe_add_func_uint32_t_u_u(l_768, ((((safe_sub_func_uint32_t_u_u((safe_sub_func_int8_t_s_s(((void*)0 != &l_585), 4UL)), l_773)) , (safe_mul_func_int16_t_s_s(((safe_mul_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s(0UL, 8)), l_773)), ((safe_unary_minus_func_uint32_t_u((((*g_229) = l_783) & 1UL))) , l_773))) <= 0xE4598BBEL), p_38))) & g_171) , g_192)))))
                {
                    (*g_550) = ((0xC4CAE8720D5BCF2FLL | (0x0C9EE209L & 0x7777EC36L)) | g_142);
                    (*g_550) = (*g_550);
                }
                else
                {
                    uint32_t l_786 = 0x5A19B876L;
                    int32_t **l_795 = (void*)0;
                    int32_t **l_796 = &l_380;
                    for (l_474 = (-14); (l_474 <= (-13)); l_474 = safe_add_func_uint64_t_u_u(l_474, 5))
                    {
                        g_670 = &g_335;
                        return p_37;
                    }
                    (*g_550) = ((((*g_550) | (g_335 , l_786)) && (safe_rshift_func_int16_t_s_s(((2L > (((safe_mul_func_int16_t_s_s(((*g_229) = (l_587 = p_36)), (-1L))) == ((((safe_mod_func_uint64_t_u_u(((((l_786 , g_16) , (((safe_sub_func_int16_t_s_s(((void*)0 == (*l_660)), p_38)) | g_716) && p_36)) | g_320) , p_39), (***g_713))) , l_786) & g_381) <= (-1L))) , (*g_550))) > p_36), (*g_365)))) > 0x5E0515BCL);
                    (*l_796) = &l_587;
                }
            }
            else
            {
                int32_t *l_797 = (void*)0;
                int32_t **l_798 = &l_797;
                (*l_798) = l_797;
                if ((safe_mul_func_uint8_t_u_u(0xD6L, p_39)))
                {
                    const int64_t l_808 = (-7L);
                    const uint16_t **l_814 = &g_666;
                    uint16_t l_821 = 0xE024L;
                    int32_t *l_825 = (void*)0;
                    if ((safe_lshift_func_uint16_t_u_u(65534UL, p_36)))
                    {
                        int16_t **l_822 = (void*)0;
                        const int64_t ****l_823 = &g_713;
                        (*g_550) = ((safe_lshift_func_uint8_t_u_s(((safe_mod_func_int32_t_s_s(((!l_808) > ((safe_mul_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(l_507, (0xFF8A205D57CAB776LL >= (safe_unary_minus_func_int8_t_s((((**g_714) ^ ((*g_319) = p_37)) , p_37)))))), g_142)) , ((((l_815 = l_814) != (void*)0) <= 0xA7L) || 0x7AL))), p_36)) == p_39), 4)) || (*g_458));
                        (*g_550) = (safe_mod_func_uint16_t_u_u(((l_818 == &g_458) == ((*g_550) && g_245)), p_39));
                        (*g_550) = ((safe_mul_func_int16_t_s_s(l_821, 0x080BL)) || (((l_822 = ((*l_763) = (*g_174))) != (void*)0) , (**g_457)));
                        (*l_823) = &g_714;
                    }
                    else
                    {
                        int32_t *l_824 = &l_587;
                        const int32_t **l_826 = &g_670;
                        const int8_t * const ***l_835 = &l_832;
                        uint64_t *l_852 = (void*)0;
                        uint64_t *l_853 = &l_70;
                        uint8_t *l_854 = (void*)0;
                        uint8_t *l_855 = &l_582;
                        l_825 = l_824;
                        (*l_826) = &g_142;
                        l_856 = ((*l_824) = ((*g_550) = (((safe_lshift_func_int16_t_s_s(((safe_add_func_uint16_t_u_u(((l_831 != ((*l_835) = l_832)) | (p_36 >= (safe_mod_func_int8_t_s_s(((safe_lshift_func_int8_t_s_u((*l_825), 5)) ^ ((safe_rshift_func_int16_t_s_s((p_37 = (p_38 , (safe_rshift_func_uint8_t_u_s(((*l_855) = ((*l_495) = (4294967291UL < ((1L | (safe_mul_func_int8_t_s_s(((safe_add_func_int32_t_s_s((~(((*l_853) = (9L > (safe_unary_minus_func_int64_t_s(((((safe_mul_func_uint8_t_u_u(((**g_714) != 0xDDCF426840EE6719LL), 255UL)) , p_38) != 65526UL) && p_38))))) || p_36)), g_290)) | p_37), p_38))) <= 255UL)))), 5)))), p_39)) , (***g_363))), p_36)))), p_38)) <= g_121), (*l_825))) , (void*)0) != &l_526)));
                        (*l_826) = l_825;
                    }
                    for (g_160 = 0; (g_160 < 56); g_160 = safe_add_func_int64_t_s_s(g_160, 1))
                    {
                        (*l_798) = l_825;
                        if (p_39)
                            break;
                        (*l_798) = (p_38 , g_859);
                    }
                    l_860 = 0xA66C8E15L;
                }
                else
                {
                    const int32_t **l_861 = &l_560;
                    (*l_861) = &p_39;
                }
            }
        }
        else
        {
            const uint64_t l_868 = 0x45B6AD69DD57C685LL;
            uint32_t *l_871 = &g_192;
            int32_t *l_876 = &l_860;
            const int32_t **l_877 = &l_560;
            uint8_t l_899 = 0xE2L;
            uint64_t l_900 = 0x772299994A94C51FLL;
            int32_t *****l_911 = &g_910;
            int64_t **l_914 = &l_78;
            int16_t **** const *l_915 = &l_677;
            (*l_876) = (safe_mod_func_int64_t_s_s(((safe_mul_func_int8_t_s_s(((l_866 == (void*)0) , (((*l_871) = ((3UL > l_868) < ((*g_859) = (safe_lshift_func_uint16_t_u_s((p_37 > ((-1L) & (*g_458))), p_36))))) && (((safe_unary_minus_func_int64_t_s((safe_mod_func_int32_t_s_s((*g_670), l_875)))) < g_111) , 5UL))), p_36)) || 0UL), l_868));
            (*l_877) = &p_39;
            for (l_90 = (-10); (l_90 != 7); l_90 = safe_add_func_int64_t_s_s(l_90, 1))
            {
                uint16_t *l_901 = &g_160;
                int32_t l_902 = 0x285C02DEL;
                (*l_877) = &p_39;
                l_860 = (((safe_mod_func_uint32_t_u_u((p_39 , l_882), (safe_mod_func_int64_t_s_s((((0x4E0D5435FC29AADELL & (((safe_rshift_func_int8_t_s_u(((safe_mul_func_uint16_t_u_u(((*l_585) = (safe_mul_func_int8_t_s_s((*l_560), g_142))), (1UL != (0x7DL >= (safe_mod_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(((*l_901) = ((((((((*l_871) = (safe_lshift_func_uint16_t_u_s(((safe_mul_func_uint8_t_u_u(((*l_876) <= p_38), (*g_458))) && (*l_560)), p_37))) < 1UL) & p_37) < (-7L)) , l_899) | l_900) && (*l_876))), 1L)), l_902)))))) , p_36), 5)) ^ 0x96AB468FL) && (*g_458))) , g_81) <= (*g_458)), p_38)))) , 1L) < (*g_859));
                if ((*l_876))
                    continue;
                return p_36;
            }
            (*l_876) = ((0x2DL && ((void*)0 == &l_876)) <= (safe_mul_func_int8_t_s_s((0L != (safe_add_func_uint64_t_u_u((safe_add_func_uint8_t_u_u(((((l_911 = g_909) == ((((g_912 = g_912) == ((&l_507 == ((*l_914) = &g_79)) , l_915)) | 7UL) , l_916)) , (*g_859)) ^ 4294967295UL), g_381)), 0x914F3DB6DA48ACD9LL))), 1L)));
        }
    }
    for (g_403 = 0; (g_403 > 9); g_403++)
    {
        int32_t * const *l_921 = &g_550;
        int32_t * const **l_920 = &l_921;
        int32_t * const ***l_922 = &l_920;
        (*l_922) = l_920;
    }
    return p_39;
}
static int32_t func_41(uint16_t p_42, const uint64_t p_43, uint8_t p_44, uint64_t p_45, int32_t p_46)
{
    int32_t *l_368 = &g_88;
    int32_t **l_372 = &l_368;
    int32_t *l_378 = &g_88;
    (*l_368) = p_44;
    for (g_245 = 3; (g_245 == (-16)); g_245 = safe_sub_func_uint8_t_u_u(g_245, 5))
    {
        int32_t **l_371 = &l_368;
        (*l_371) = l_368;
    }
    (*l_372) = (void*)0;
    (*l_378) = (((*g_319) = ((***g_363) , (safe_mul_func_uint16_t_u_u(3UL, ((*g_319) & (safe_rshift_func_uint8_t_u_u((~p_46), 3))))))) , (p_42 <= g_138));
    return p_44;
}
static uint8_t func_49(uint16_t p_50, uint64_t p_51)
{
    const int32_t *l_334 = &g_335;
    int32_t l_340 = (-1L);
    int8_t l_343 = 0xE9L;
    int16_t ** const *l_352 = (void*)0;
    int16_t ***l_360 = &g_153;
    int16_t ****l_361 = (void*)0;
    int16_t ****l_362 = &g_174;
    int32_t *l_366 = &g_88;
    if ((safe_sub_func_int16_t_s_s(3L, (((*g_319) = (safe_sub_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u((((safe_rshift_func_uint16_t_u_u(((l_334 = (void*)0) == (void*)0), ((safe_mul_func_int8_t_s_s((safe_mod_func_int8_t_s_s(p_51, (l_340 | ((safe_rshift_func_uint16_t_u_u((p_50 == l_340), 4)) | (*g_229))))), (0xE5AF4E9B1BF553ECLL || l_340))) == l_340))) && (-2L)) , 65526UL), g_138)), p_50))) & l_343))))
    {
        int32_t *l_344 = &g_88;
        (*l_344) = p_51;
        (*l_344) = 0xE547229BL;
    }
    else
    {
        const int64_t l_351 = 3L;
        uint16_t *l_355 = &g_165;
        int32_t *l_356 = &g_88;
        (*l_356) = ((((*g_319) = ((l_340 = ((safe_sub_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s((((safe_mul_func_int8_t_s_s(g_88, (l_351 > (((-1L) > l_351) , ((l_352 == l_352) ^ ((*l_355) = ((safe_rshift_func_int16_t_s_s(p_50, (((0xC692L == 65535UL) & 0x36DBL) , 0xD6DFL))) <= 6L))))))) < 0x100968CAL) == g_192), 7)), p_50)) < 0x31E6BA40L)) , l_351)) | l_343) , 0x8B1DD971L);
        for (g_130 = 0; (g_130 != (-10)); --g_130)
        {
            int32_t **l_359 = &l_356;
            (*l_359) = l_356;
        }
    }
    (*l_366) = (((*l_362) = l_360) == g_363);
    return p_51;
}
static uint32_t func_54(int32_t p_55, uint32_t p_56, uint16_t p_57)
{
    int32_t l_117 = 0L;
    int32_t l_119 = (-6L);
    int32_t *l_122 = &l_117;
    uint8_t l_185 = 0xD8L;
    const int16_t ***l_225 = (void*)0;
    const int16_t *** const *l_224 = &l_225;
    const int16_t *** const **l_223 = &l_224;
    uint16_t *l_306 = &g_165;
    int64_t *l_321 = (void*)0;
    for (g_81 = 14; (g_81 == (-27)); g_81 = safe_sub_func_uint32_t_u_u(g_81, 6))
    {
        int32_t *l_101 = &g_88;
        int32_t **l_100 = &l_101;
        int32_t ***l_102 = &l_100;
        int16_t *l_110 = &g_111;
        const int64_t *l_116 = &g_79;
        int32_t *l_118 = &l_117;
        uint64_t *l_120 = &g_121;
        int32_t l_127 = 0x7BCD5AEBL;
        int16_t *l_129 = &g_130;
        int32_t *l_139 = &l_119;
        int8_t l_253 = (-1L);
        int32_t **l_323 = &l_122;
    }
    return p_55;
}
static int8_t func_61(int32_t p_62, uint64_t p_63, int8_t p_64)
{
    int32_t *l_84 = (void*)0;
    int32_t **l_83 = &l_84;
    int32_t *l_87 = &g_88;
    uint32_t l_89 = 0xDB06D673L;
    (*l_83) = g_82;
    (*l_87) = (!(!g_16));
    return l_89;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_16;
    csmith_sink_ = g_79;
    csmith_sink_ = g_81;
    csmith_sink_ = g_88;
    csmith_sink_ = g_111;
    csmith_sink_ = g_121;
    csmith_sink_ = g_130;
    csmith_sink_ = g_138;
    csmith_sink_ = g_142;
    csmith_sink_ = g_160;
    csmith_sink_ = g_165;
    csmith_sink_ = g_171;
    csmith_sink_ = g_192;
    csmith_sink_ = g_245;
    csmith_sink_ = g_290;
    csmith_sink_ = g_320;
    csmith_sink_ = g_335;
    csmith_sink_ = g_381;
    csmith_sink_ = g_388;
    csmith_sink_ = g_403;
    csmith_sink_ = g_708;
    csmith_sink_ = g_716;
    platform_main_end(0,0);
    return 0;
}
