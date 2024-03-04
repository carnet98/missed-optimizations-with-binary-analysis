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
static int32_t g_2 = (-2);
static int32_t g_5 = 0xDF2F4A8B;
static int32_t g_8 = 0x801FC3EE;
static int32_t g_12 = 3;
static int32_t g_20 = 0;
static uint8_t g_24[7] = {1U,1U,1U,1U,1U,1U,1U};
static uint32_t g_45 = 0xA8DAD4F6;
static uint32_t g_55 = 0xEB9D3763;
static uint32_t *g_54 = &g_55;
static uint8_t g_98 = 0U;
static int8_t g_101 = 0xB4;
static int16_t g_118[4][2][6] = {{{0x6C92,9,9,0x6C92,0xFE54,0x6C92},{0x6C92,0xFE54,0x6C92,9,9,0x6C92}},{{0,0,9,(-3),9,0},{9,0xFE54,(-3),(-3),0xFE54,9}},{{0,9,(-3),9,0,0},{0x6C92,9,9,0x6C92,0xFE54,0x6C92}},{{0x6C92,0xFE54,0x6C92,0x6C92,0x6C92,(-3)},{9,9,0x6C92,0xFE54,0x6C92,9}}};
static uint16_t g_140 = 65535U;
static int32_t *g_153 = &g_5;
static int32_t **g_152 = &g_153;
static int32_t ***g_151 = &g_152;
static uint8_t g_163 = 0x17;
static uint8_t g_166 = 0x04;
static uint8_t g_168 = 0U;
static uint32_t g_171 = 0xB5522D6D;
static int32_t g_174[2] = {0x4E873C8D,0x4E873C8D};
static const int32_t g_194 = (-5);
static const int32_t *g_220 = &g_174[0];
static uint16_t *g_249[3][6][2] = {{{&g_140,&g_140},{&g_140,&g_140},{&g_140,&g_140},{&g_140,&g_140},{&g_140,&g_140},{&g_140,&g_140}},{{&g_140,&g_140},{&g_140,&g_140},{&g_140,&g_140},{&g_140,&g_140},{&g_140,&g_140},{&g_140,&g_140}},{{&g_140,&g_140},{&g_140,&g_140},{&g_140,&g_140},{&g_140,&g_140},{&g_140,&g_140},{&g_140,&g_140}}};
static uint16_t **g_248[7][5][7] = {{{&g_249[2][5][0],&g_249[2][5][0],&g_249[1][0][0],&g_249[2][3][0],&g_249[1][3][1],&g_249[1][5][1],&g_249[1][3][1]},{(void*)0,&g_249[2][3][0],&g_249[2][3][0],&g_249[1][5][0],&g_249[0][0][0],&g_249[2][3][0],&g_249[2][3][0]},{&g_249[2][3][0],&g_249[1][5][1],&g_249[2][3][0],(void*)0,&g_249[1][3][1],&g_249[0][0][0],&g_249[2][3][0]},{&g_249[2][3][0],&g_249[2][4][0],&g_249[2][3][0],&g_249[1][3][1],&g_249[2][3][0],&g_249[2][3][0],&g_249[2][3][0]},{(void*)0,&g_249[0][5][1],&g_249[2][3][0],&g_249[0][5][1],(void*)0,&g_249[2][3][0],&g_249[0][0][0]}},{{&g_249[2][4][0],&g_249[1][3][1],&g_249[2][3][0],&g_249[2][3][0],(void*)0,&g_249[2][3][0],&g_249[2][3][0]},{&g_249[2][3][0],&g_249[2][3][0],&g_249[2][3][0],(void*)0,&g_249[2][3][0],&g_249[1][3][1],&g_249[1][5][1]},{&g_249[2][4][0],&g_249[2][3][0],&g_249[1][0][0],&g_249[1][3][1],&g_249[2][3][0],&g_249[1][3][1],(void*)0},{(void*)0,&g_249[2][1][0],&g_249[1][3][1],&g_249[2][3][0],&g_249[2][3][0],&g_249[1][3][1],&g_249[2][1][0]},{&g_249[2][3][0],&g_249[2][3][0],(void*)0,&g_249[1][0][0],&g_249[1][5][0],&g_249[1][3][1],&g_249[2][3][0]}},{{&g_249[2][3][0],&g_249[1][0][0],&g_249[1][3][1],&g_249[2][3][0],&g_249[0][5][1],&g_249[2][3][0],(void*)0},{(void*)0,(void*)0,&g_249[2][4][0],&g_249[1][0][0],&g_249[2][3][0],&g_249[2][3][0],&g_249[1][5][0]},{&g_249[2][5][0],(void*)0,&g_249[1][3][0],&g_249[2][3][0],&g_249[2][3][0],&g_249[2][3][0],&g_249[2][3][0]},{&g_249[1][3][1],(void*)0,(void*)0,&g_249[1][3][1],&g_249[2][3][0],&g_249[0][0][0],&g_249[2][3][0]},{&g_249[2][3][0],(void*)0,&g_249[2][1][0],(void*)0,&g_249[2][3][0],&g_249[2][3][0],&g_249[1][0][0]}},{{&g_249[1][0][0],&g_249[1][0][0],&g_249[2][3][0],&g_249[2][3][0],&g_249[2][5][0],&g_249[1][5][1],&g_249[2][3][0]},{&g_249[2][3][0],&g_249[2][3][0],&g_249[2][3][0],&g_249[0][5][1],&g_249[2][3][0],(void*)0,&g_249[2][3][0]},{&g_249[1][5][0],&g_249[2][1][0],&g_249[2][3][0],&g_249[1][3][1],&g_249[2][3][0],&g_249[2][1][0],&g_249[1][5][0]},{&g_249[2][3][0],&g_249[2][3][0],&g_249[2][3][0],(void*)0,&g_249[2][5][0],&g_249[2][3][0],(void*)0},{&g_249[0][5][1],&g_249[2][3][0],&g_249[2][3][0],&g_249[1][5][0],&g_249[2][3][0],(void*)0,&g_249[2][3][0]}},{{&g_249[1][0][0],&g_249[1][3][1],&g_249[2][3][0],&g_249[2][3][0],&g_249[2][4][0],&g_249[0][5][1],&g_249[1][0][0]},{(void*)0,&g_249[2][3][0],&g_249[2][3][0],&g_249[2][3][0],&g_249[2][3][0],&g_249[2][3][0],&g_249[2][3][0]},{(void*)0,&g_249[1][3][1],(void*)0,&g_249[2][3][0],&g_249[1][0][0],(void*)0,&g_249[2][3][0]},{&g_249[1][3][1],&g_249[2][3][0],&g_249[2][4][0],&g_249[2][3][0],&g_249[2][3][0],&g_249[2][5][0],&g_249[2][1][0]},{&g_249[2][3][0],&g_249[1][3][1],&g_249[1][0][0],&g_249[2][5][0],&g_249[0][5][1],(void*)0,&g_249[2][3][0]}},{{(void*)0,&g_249[1][4][1],&g_249[1][5][1],&g_249[2][3][0],&g_249[2][3][0],&g_249[2][3][0],&g_249[2][3][0]},{&g_249[0][5][1],&g_249[1][3][0],&g_249[2][3][0],&g_249[2][3][0],&g_249[1][3][0],&g_249[0][5][1],(void*)0},{&g_249[2][1][0],&g_249[0][5][1],&g_249[1][3][1],&g_249[2][5][0],(void*)0,&g_249[1][5][1],&g_249[1][0][0]},{&g_249[2][5][0],&g_249[2][3][0],(void*)0,&g_249[2][3][0],&g_249[1][5][0],&g_249[2][3][0],&g_249[2][3][0]},{&g_249[1][0][0],&g_249[0][5][1],&g_249[2][3][0],&g_249[2][3][0],&g_249[1][5][1],&g_249[1][0][0],&g_249[2][3][0]}},{{(void*)0,&g_249[1][3][0],&g_249[2][3][0],&g_249[2][3][0],&g_249[2][3][0],&g_249[2][3][0],&g_249[2][3][0]},{&g_249[1][4][1],&g_249[1][4][1],&g_249[2][5][0],&g_249[2][3][0],&g_249[2][3][0],&g_249[2][3][0],&g_249[2][3][0]},{(void*)0,&g_249[1][3][1],&g_249[2][3][0],&g_249[0][5][1],&g_249[2][3][0],&g_249[2][1][0],&g_249[1][0][0]},{&g_249[2][3][0],&g_249[2][3][0],&g_249[0][0][0],&g_249[1][5][0],&g_249[2][3][0],&g_249[2][3][0],(void*)0},{&g_249[0][0][0],&g_249[1][3][1],&g_249[2][1][0],&g_249[2][3][0],&g_249[2][3][0],&g_249[2][3][0],&g_249[2][3][0]}}};
static uint16_t g_268 = 65535U;
static int16_t g_272 = 6;
static int16_t *g_309 = &g_272;
static int16_t ** const g_308 = &g_309;
static const uint16_t g_364 = 0x7D69;
static const uint16_t *g_363 = &g_364;
static const uint16_t **g_362 = &g_363;
static int8_t g_422 = 0;
static int32_t ****g_443 = &g_151;
static const uint16_t ***g_514 = &g_362;
static const int16_t ***g_529 = (void*)0;
static const int16_t ****g_528 = &g_529;
static int16_t **g_569 = &g_309;
static int16_t ***g_568[9][1] = {{&g_569},{&g_569},{&g_569},{&g_569},{&g_569},{&g_569},{&g_569},{&g_569},{&g_569}};
static int16_t ****g_567 = &g_568[2][0];
static int32_t g_572 = 8;
static int16_t g_616[10] = {(-1),(-1),(-1),(-1),(-1),(-1),(-1),(-1),(-1),(-1)};
static uint8_t *g_634 = &g_168;
static uint8_t * const *g_633 = &g_634;
static uint8_t * const **g_632 = &g_633;
static int32_t g_653 = (-3);
static uint16_t * const g_659 = (void*)0;
static uint16_t * const *g_658[3][7][5] = {{{&g_659,&g_659,&g_659,&g_659,&g_659},{&g_659,(void*)0,&g_659,&g_659,&g_659},{&g_659,&g_659,(void*)0,&g_659,&g_659},{&g_659,&g_659,&g_659,&g_659,&g_659},{&g_659,&g_659,&g_659,&g_659,&g_659},{&g_659,&g_659,&g_659,(void*)0,&g_659},{&g_659,&g_659,&g_659,&g_659,(void*)0}},{{&g_659,&g_659,&g_659,&g_659,&g_659},{&g_659,(void*)0,(void*)0,&g_659,(void*)0},{&g_659,&g_659,&g_659,&g_659,&g_659},{&g_659,&g_659,&g_659,&g_659,&g_659},{&g_659,(void*)0,&g_659,&g_659,(void*)0},{&g_659,&g_659,&g_659,(void*)0,&g_659},{&g_659,&g_659,&g_659,&g_659,(void*)0}},{{&g_659,&g_659,(void*)0,&g_659,(void*)0},{&g_659,&g_659,&g_659,&g_659,(void*)0},{(void*)0,&g_659,&g_659,&g_659,&g_659},{(void*)0,&g_659,&g_659,&g_659,&g_659},{&g_659,&g_659,(void*)0,&g_659,&g_659},{&g_659,&g_659,&g_659,(void*)0,(void*)0},{(void*)0,(void*)0,&g_659,(void*)0,&g_659}}};
static uint16_t g_662 = 0x9259;
static uint16_t * const g_661 = &g_662;
static uint16_t * const *g_660 = &g_661;
static const uint32_t g_694 = 0x1E428ACA;
static int32_t g_708 = 0x90838AF6;
static const uint8_t *g_721 = &g_163;
static const uint8_t **g_720 = &g_721;
static const uint8_t ***g_719 = &g_720;
static int16_t *** const *g_794 = &g_568[2][0];
static int16_t *** const **g_793 = &g_794;
static int32_t g_835 = 1;
static int32_t **g_855 = &g_153;
static int32_t *** const g_854 = &g_855;
static int32_t *** const *g_853 = &g_854;
static int32_t *** const **g_852 = &g_853;
static const uint32_t func_1(void);
static uint8_t func_15(uint8_t p_16);
static uint16_t func_26(int32_t * p_27, uint8_t * p_28, uint8_t * p_29, uint8_t * p_30, int8_t p_31);
static int32_t * func_32(int16_t p_33, int32_t * p_34, const int32_t p_35, int16_t p_36);
static uint8_t func_37(int8_t p_38, uint16_t p_39);
static uint32_t * func_56(uint16_t p_57);
static int8_t func_70(int32_t p_71);
static int32_t ** func_73(uint32_t * p_74);
static uint32_t * func_75(const uint16_t p_76, int32_t p_77, int8_t p_78, int32_t * const p_79, const uint32_t * p_80);
static int32_t func_104(int32_t p_105, uint32_t * p_106, uint8_t p_107, int32_t ** p_108, int32_t ** p_109);
static const uint32_t func_1(void)
{
    int16_t l_11[2][10][4] = {{{0xDBBE,0x779C,(-1),1},{(-1),0xDBBE,(-2),0},{0,0xE5C2,(-1),0xE5C2},{2,0x0785,0,0x0874},{(-1),0x21F1,0x0874,0xDBBE},{0,0,0x0785,0x373A},{0,4,0x0874,(-1)},{(-1),0x373A,0,(-1)},{2,(-1),(-1),3},{0,(-1),(-2),(-2)}},{{(-1),(-1),(-1),0x21F1},{0xDBBE,(-4),0xB32A,0x779C},{(-1),0x28ED,0xE5C2,0xB32A},{4,0x28ED,1,0x779C},{0x28ED,(-4),3,0x21F1},{(-5),(-1),0xDBBE,(-2)},{1,(-1),0x0C54,3},{(-4),(-1),(-4),(-1)},{3,0x373A,0,(-1)},{0xE5C2,4,0xA55F,0x373A}}};
    int32_t *l_791 = &g_12;
    uint8_t *l_799 = &g_163;
    int32_t l_824 = 0;
    int8_t l_845 = 0x10;
    int8_t l_868 = (-4);
    uint8_t l_869 = 7U;
    uint8_t l_870 = 0x1E;
    int8_t *l_871 = &g_422;
    int8_t *l_872 = &l_845;
    const uint32_t l_899 = 0U;
    uint32_t l_957 = 0x47CF4966;
    int i, j, k;
    for (g_2 = 29; (g_2 < 25); g_2 = safe_sub_func_int16_t_s_s(g_2, 8))
    {
        int8_t l_17 = 0x56;
        int16_t ****l_820[10] = {&g_568[2][0],&g_568[2][0],&g_568[2][0],&g_568[2][0],&g_568[2][0],&g_568[2][0],&g_568[2][0],&g_568[2][0],&g_568[2][0],&g_568[2][0]};
        int32_t ** const *l_822 = &g_152;
        int8_t *l_843 = &l_17;
        int32_t *l_844[4][7][6] = {{{&g_8,&g_8,&g_174[1],(void*)0,&g_8,&g_174[1]},{&l_824,&g_8,&l_824,&g_20,&g_174[0],&g_174[1]},{&l_824,&g_174[1],&g_20,(void*)0,&g_8,&g_20},{&g_8,&g_8,&g_174[1],&g_8,&l_824,&g_174[1]},{&g_174[0],&g_8,&g_174[1],&l_824,&l_824,&g_174[1]},{&g_8,&g_8,&g_20,&g_20,&g_8,&g_174[0]},{&g_8,&g_174[1],&g_174[0],&l_824,&g_174[0],&g_20}},{{&g_174[1],&g_8,&g_174[0],&g_8,&g_8,&g_174[0]},{&g_174[0],&g_8,&g_20,(void*)0,&g_8,&g_174[1]},{(void*)0,&g_8,&g_174[1],&g_20,&g_174[1],&g_174[1]},{(void*)0,&g_174[1],&g_174[1],(void*)0,&g_174[0],&g_20},{&g_174[0],&g_8,&g_20,&g_8,(void*)0,&g_174[1]},{&g_174[1],&g_8,&l_824,&l_824,(void*)0,&g_174[1]},{&g_8,&g_8,&g_174[1],&g_20,&g_174[0],&g_174[0]}},{{&g_8,&g_174[1],&g_8,&l_824,&g_174[1],&g_20},{&g_174[0],&g_8,&g_8,&g_8,&g_8,&g_174[0]},{&g_8,&g_8,&g_174[1],(void*)0,&g_8,&g_174[1]},{&l_824,&g_8,&l_824,&g_20,&g_174[0],&g_174[1]},{&l_824,&g_174[1],&g_20,(void*)0,&g_8,&g_20},{&g_8,&g_8,&g_174[1],&g_8,&l_824,&g_174[1]},{&g_174[0],&g_8,&g_174[1],&l_824,&l_824,&g_174[1]}},{{&g_8,&g_8,&g_20,&g_20,&g_8,&g_174[0]},{&g_8,&g_174[1],&g_174[0],&l_824,&g_174[0],&g_20},{&g_174[1],&g_8,&g_174[0],&g_8,&g_8,&g_174[0]},{&g_174[0],&g_8,&g_20,(void*)0,&g_8,&g_174[1]},{(void*)0,&g_8,&g_174[1],&g_20,&g_174[1],&g_174[1]},{(void*)0,&g_174[1],&g_174[1],(void*)0,&g_174[0],&g_20},{&g_174[0],&g_8,&g_20,&g_8,(void*)0,&g_174[1]}}};
        int i, j, k;
        for (g_5 = (-14); (g_5 >= (-14)); g_5--)
        {
            const int16_t l_792 = (-4);
            for (g_8 = 0; (g_8 != 24); g_8 = safe_add_func_uint16_t_u_u(g_8, 4))
            {
                uint32_t l_40 = 0x3ECDC0F1;
                int32_t l_823 = 0xD07EFF5C;
                for (g_12 = 0; (g_12 <= 1); g_12 += 1)
                {
                    uint8_t *l_22 = (void*)0;
                    uint8_t *l_23 = &g_24[2];
                    int8_t *l_818 = &g_422;
                    int i, j, k;
                }
                l_823 = (safe_unary_minus_func_uint16_t_u((g_171 & ((void*)0 != l_822))));
            }
            l_824 = 7;
        }
        g_20 = (safe_add_func_int32_t_s_s((g_174[0] = (4U || (((safe_mul_func_int8_t_s_s((safe_add_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((g_616[4] >= ((*l_843) = (((safe_add_func_int32_t_s_s(((((((*l_791) = ((((g_835 ^ (safe_unary_minus_func_int16_t_s((***l_822)))) || (safe_mod_func_uint8_t_u_u(((safe_add_func_uint8_t_u_u(((void*)0 == &g_422), (-8))) < (((**g_152) = (safe_sub_func_int8_t_s_s(0xFF, ((****g_794) != 1)))) < 0xB5A929ED)), g_20))) & 0x265E) >= 0)) & 0x42FAE3F0) || g_268) <= 0x0B) != (-1)), 9)) < (-10)) & (**g_720)))), 5)), (*g_634))), (-1))) != l_11[0][9][1]) > 0xCEE5AC5C))), l_845));
    }
    if (((((safe_unary_minus_func_uint8_t_u(((*g_634) = ((+(safe_rshift_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((*l_791), ((**g_308) = (**g_569)))), (((*l_872) = (((((*l_871) = (((g_852 = (void*)0) != &g_443) ^ ((safe_lshift_func_int8_t_s_u((safe_add_func_uint8_t_u_u(((safe_mod_func_int32_t_s_s((safe_add_func_int8_t_s_s(g_572, (((safe_lshift_func_int8_t_s_u((((*l_799) = (*l_791)) != (safe_mod_func_int32_t_s_s((*l_791), (**g_152)))), 6)) != ((g_422 != (*l_791)) && l_868)) < l_869))), l_870)) < 1U), 0x9F)), (*l_791))) == (**g_362)))) >= g_140) & (*g_54)) & 1U)) && (*l_791))))) >= 0xD22D596A)))) <= (*l_791)) >= (*l_791)) ^ (*l_791)))
    {
        (*g_152) = func_56((**g_660));
        ((void) sizeof ((g_153 == &g_171) ? 1 : 0), __extension__ ({ if (g_153 == &g_171) ; else __assert_fail ("g_153 == &g_171", "/tmp/tmpyy782gvb.c", 152, __extension__ __PRETTY_FUNCTION__); }));
    }
    else
    {
        int16_t l_877[9] = {0x8BB7,0x8BB7,0x8BB7,0x8BB7,0x8BB7,0x8BB7,0x8BB7,0x8BB7,0x8BB7};
        int32_t *l_903 = &g_8;
        uint16_t * const *l_904 = &g_661;
        int32_t l_921 = 1;
        uint8_t l_939 = 1U;
        int i;
        for (g_2 = (-26); (g_2 != 24); g_2 = safe_add_func_uint32_t_u_u(g_2, 2))
        {
            uint8_t l_888 = 0x51;
            int32_t l_891 = 0x312C020A;
            uint32_t l_941 = 4294967295U;
            uint16_t l_956 = 65535U;
        }
    }
    ((void) sizeof ((g_153 == &g_5 || g_153 == &g_171) ? 1 : 0), __extension__ ({ if (g_153 == &g_5 || g_153 == &g_171) ; else __assert_fail ("g_153 == &g_5 || g_153 == &g_171", "/tmp/tmpyy782gvb.c", 171, __extension__ __PRETTY_FUNCTION__); }));
    ((void) sizeof ((g_852 == 0) ? 1 : 0), __extension__ ({ if (g_852 == 0) ; else __assert_fail ("g_852 == 0", "/tmp/tmpyy782gvb.c", 172, __extension__ __PRETTY_FUNCTION__); }));
    return (*l_791);
}
static uint8_t func_15(uint8_t p_16)
{
    int32_t * const l_18[8] = {&g_12,&g_2,&g_12,&g_2,&g_12,&g_2,&g_12,&g_2};
    int32_t *l_19 = &g_20;
    uint16_t l_21 = 0x7BDD;
    int i;
    l_19 = l_18[3];
    ((void) sizeof ((l_19 == 0 || l_19 == &g_2 || l_19 == &g_12) ? 1 : 0), __extension__ ({ if (l_19 == 0 || l_19 == &g_2 || l_19 == &g_12) ; else __assert_fail ("l_19 == 0 || l_19 == &g_2 || l_19 == &g_12", "/tmp/tmpyy782gvb.c", 190, __extension__ __PRETTY_FUNCTION__); }));
    return l_21;
}
static uint16_t func_26(int32_t * p_27, uint8_t * p_28, uint8_t * p_29, uint8_t * p_30, int8_t p_31)
{
    uint16_t *l_804 = &g_268;
    int16_t **** const l_805 = &g_568[2][0];
    int32_t l_815[3][7] = {{(-1),0x706D2075,0x706D2075,(-1),0x732FAD8B,0xA0CE8DD2,(-1)},{0xA0CE8DD2,0,0x732FAD8B,0x732FAD8B,0,0xA0CE8DD2,0x706D2075},{0,(-1),(-7),0xFD0C9F99,0xFD0C9F99,(-7),(-1)}};
    int32_t *l_816 = &l_815[1][6];
    int32_t *l_817 = &g_20;
    int i, j;
    (*l_817) = (1U || ((65535U <= (safe_mul_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((l_804 == l_804), ((((void*)0 != l_805) | ((safe_sub_func_uint32_t_u_u((safe_sub_func_int16_t_s_s(p_31, p_31)), (safe_sub_func_int32_t_s_s((((((~((*l_816) = (safe_lshift_func_uint8_t_u_s(((**g_633) = ((l_815[1][1] && l_815[1][1]) > l_815[1][1])), g_20)))) ^ g_140) >= (***g_514)) == p_31) >= p_31), (*p_27))))) ^ (*p_29))) || (*g_54)))), (*g_309)))) == p_31));
    return (**g_660);
}
static int32_t * func_32(int16_t p_33, int32_t * p_34, const int32_t p_35, int16_t p_36)
{
    int16_t *** const **l_795[3][8] = {{&g_794,&g_794,&g_794,(void*)0,(void*)0,&g_794,&g_794,&g_794},{&g_794,(void*)0,(void*)0,(void*)0,&g_794,&g_794,(void*)0,(void*)0},{&g_794,&g_794,(void*)0,(void*)0,(void*)0,&g_794,&g_794,(void*)0}};
    int16_t *** const **l_796 = &g_794;
    const int32_t *l_797[2][3] = {{&g_8,&g_8,&g_8},{&g_174[0],&g_174[0],&g_174[0]}};
    const int32_t **l_798 = &l_797[0][2];
    int i, j;
    l_796 = (l_795[0][3] = g_793);
    (*l_798) = l_797[0][2];
    return (***g_443);
}
static uint8_t func_37(int8_t p_38, uint16_t p_39)
{
    int32_t l_43 = 0x9F3C5A4A;
    uint32_t *l_44 = &g_45;
    uint32_t l_58 = 4294967287U;
    const uint32_t *l_693 = &g_694;
    const uint32_t **l_692 = &l_693;
    int32_t l_695 = 0xC52A4C85;
    int32_t l_696[9] = {0,8,8,0,8,8,0,8,8};
    int16_t ****l_727 = &g_568[2][0];
    int16_t *l_737 = (void*)0;
    uint8_t **l_769 = &g_634;
    uint8_t ***l_768 = &l_769;
    uint8_t **** const l_767 = &l_768;
    uint32_t l_776 = 0xCD9825A8;
    const uint16_t **l_782 = &g_363;
    int i;
lbl_738:
    l_696[8] = (((*l_44) = (safe_sub_func_int16_t_s_s(l_43, l_43))) > (safe_lshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((0x11F64DB2 > (safe_add_func_uint16_t_u_u((p_39 && ((safe_lshift_func_uint8_t_u_u((((**g_569) = (g_54 != ((*l_692) = func_56(l_58)))) != 0U), 1)) ^ ((((**g_633) = 6U) != g_572) < l_695))), l_43))), 1)), 7)));
    for (l_43 = 0; (l_43 >= (-4)); l_43 = safe_sub_func_uint32_t_u_u(l_43, 2))
    {
        uint32_t l_707 = 4294967286U;
        int32_t l_709 = (-6);
        const uint8_t ***l_723[2][5][6] = {{{(void*)0,(void*)0,&g_720,(void*)0,(void*)0,&g_720},{(void*)0,(void*)0,&g_720,&g_720,(void*)0,(void*)0},{(void*)0,&g_720,&g_720,&g_720,&g_720,&g_720},{&g_720,(void*)0,&g_720,&g_720,(void*)0,(void*)0},{&g_720,&g_720,(void*)0,&g_720,(void*)0,&g_720}},{{(void*)0,&g_720,(void*)0,(void*)0,(void*)0,&g_720},{&g_720,(void*)0,(void*)0,&g_720,&g_720,&g_720},{&g_720,&g_720,(void*)0,&g_720,&g_720,(void*)0},{&g_720,&g_720,&g_720,(void*)0,&g_720,&g_720},{(void*)0,&g_720,&g_720,&g_720,&g_720,&g_720}}};
        int16_t ****l_728 = &g_568[8][0];
        int i, j, k;
        for (g_653 = 0; (g_653 <= 15); ++g_653)
        {
            int8_t *l_701[10] = {&g_101,&g_101,&g_101,&g_101,&g_101,&g_101,&g_101,&g_101,&g_101,&g_101};
            int32_t l_702 = (-7);
            int16_t *****l_715 = &g_567;
            uint16_t l_716 = 0U;
            int i;
            (**g_151) = func_56(((((void*)0 == &g_694) > (0xF9 > (g_422 = ((void*)0 == &g_568[1][0])))) & (l_702 != ((safe_add_func_uint32_t_u_u((l_707 & ((1U && (l_709 = (g_653 < g_708))) >= g_616[4])), l_707)) > l_695))));
            ((void) sizeof ((g_153 == &g_171) ? 1 : 0), __extension__ ({ if (g_153 == &g_171) ; else __assert_fail ("g_153 == &g_171", "/tmp/tmpyy782gvb.c", 273, __extension__ __PRETTY_FUNCTION__); }));
            for (g_422 = 0; (g_422 != 0); g_422 = safe_add_func_int16_t_s_s(g_422, 7))
            {
                uint16_t l_724 = 8U;
                int16_t ***l_735 = &g_569;
                if (l_707)
                    break;
                (***g_151) = (safe_mul_func_int16_t_s_s(l_707, 65535U));
            }
            if (p_39)
                continue;
            if ((((****l_715) = (***l_728)) == l_737))
            {
                if (l_58)
                    goto lbl_738;
            }
            else
            {
                uint16_t **l_741 = &g_249[2][3][0];
                uint8_t **l_745 = &g_634;
                uint8_t ***l_744 = &l_745;
                const int32_t l_751[10][1] = {{0x306212DB},{0x04FF51B0},{0x306212DB},{0x04FF51B0},{0x306212DB},{0x04FF51B0},{0x306212DB},{0x04FF51B0},{0x306212DB},{0x04FF51B0}};
                int i, j;
                (***g_151) = 0x11F1B983;
                (****g_443) = (safe_mul_func_uint16_t_u_u(p_38, (((****g_567) = (&p_39 != ((*l_741) = &p_39))) | ((*g_661) = p_38))));
                (*g_153) = ((((l_702 & l_702) >= (safe_lshift_func_uint16_t_u_s(((**l_741) = (l_716 | (l_707 > ((**g_633) = ((void*)0 == l_744))))), p_38))) > p_38) >= ((safe_add_func_int32_t_s_s(((safe_sub_func_uint32_t_u_u((+g_653), (*g_54))) != l_751[7][0]), (*g_54))) & 4294967295U));
            }
        }
        for (g_98 = (-2); (g_98 <= 14); g_98 = safe_add_func_uint16_t_u_u(g_98, 9))
        {
            for (g_45 = (-25); (g_45 != 39); g_45 = safe_add_func_int16_t_s_s(g_45, 8))
            {
                return (*g_634);
            }
        }
    }
    for (g_708 = 9; (g_708 <= (-11)); g_708 = safe_sub_func_int32_t_s_s(g_708, 7))
    {
        uint32_t l_760 = 0x15998CE9;
        uint8_t ****l_766 = (void*)0;
        uint16_t ***l_772 = (void*)0;
        int8_t *l_773 = (void*)0;
        int8_t *l_774[9][8][1] = {{{&g_422},{&g_101},{&g_422},{&g_422},{&g_101},{&g_422},{&g_101},{&g_422}},{{&g_422},{&g_422},{&g_101},{&g_422},{&g_101},{&g_422},{&g_422},{&g_101}},{{&g_422},{&g_422},{&g_422},{&g_422},{&g_422},{&g_422},{&g_422},{&g_101}},{{&g_422},{&g_422},{&g_101},{&g_422},{&g_101},{&g_422},{&g_422},{&g_422}},{{&g_101},{&g_422},{&g_101},{&g_422},{&g_422},{&g_101},{&g_422},{&g_422}},{{&g_422},{&g_422},{&g_422},{&g_422},{&g_422},{&g_101},{&g_422},{&g_422}},{{&g_101},{&g_422},{&g_101},{&g_422},{&g_422},{&g_422},{&g_101},{&g_422}},{{&g_101},{&g_422},{&g_422},{&g_101},{&g_422},{&g_422},{&g_422},{&g_422}},{{&g_422},{&g_422},{&g_422},{&g_101},{&g_422},{&g_422},{&g_101},{&g_422}}};
        int32_t *l_775 = &g_20;
        int32_t *l_777 = (void*)0;
        int32_t *l_778[8] = {&l_696[5],&l_696[4],&l_696[5],&l_696[4],&l_696[5],&l_696[4],&l_696[5],&l_696[4]};
        const uint16_t **l_781 = (void*)0;
        int i, j, k;
    }
    return l_696[8];
}
static uint32_t * func_56(uint16_t p_57)
{
    uint32_t l_59 = 0x1A76A447;
    int32_t l_269[5];
    int32_t l_270 = 0x75CF9645;
    int32_t l_482 = 0x6E8A56CE;
    int32_t l_483 = 1;
    uint32_t l_493 = 0x121100BC;
    uint16_t l_502 = 65528U;
    int16_t ****l_520 = (void*)0;
    uint8_t *l_536[8] = {&g_163,&g_163,&g_163,&g_163,&g_163,&g_163,&g_163,&g_163};
    int32_t * const *l_585 = &g_153;
    int16_t l_623 = 4;
    int32_t *l_650 = &g_174[0];
    uint16_t * const *l_657 = (void*)0;
    const uint16_t **l_663 = &g_363;
    int i;
    for (i = 0; i < 5; i++)
        l_269[i] = 1;
    return &g_171;
}
static int8_t func_70(int32_t p_71)
{
    const uint32_t l_81[8][10] = {{0x7C1F20CF,0x23EFBB05,0x7C1F20CF,0x23EFBB05,0x7C1F20CF,0x23EFBB05,0x7C1F20CF,0x23EFBB05,0x7C1F20CF,0x23EFBB05},{1U,0x23EFBB05,1U,0x23EFBB05,1U,0x23EFBB05,1U,0x23EFBB05,1U,0x23EFBB05},{0x7C1F20CF,0x23EFBB05,0x7C1F20CF,0x23EFBB05,0x7C1F20CF,0x23EFBB05,0x7C1F20CF,0x23EFBB05,0x7C1F20CF,0x23EFBB05},{1U,0x23EFBB05,1U,0x23EFBB05,1U,0x23EFBB05,1U,0x23EFBB05,1U,0x23EFBB05},{0x7C1F20CF,0x23EFBB05,0x7C1F20CF,0x23EFBB05,0x7C1F20CF,0x23EFBB05,0x7C1F20CF,0x23EFBB05,0x7C1F20CF,0x23EFBB05},{1U,0x23EFBB05,1U,0x23EFBB05,1U,0x23EFBB05,1U,0x23EFBB05,1U,0x23EFBB05},{0x7C1F20CF,0x23EFBB05,0x7C1F20CF,0x23EFBB05,0x7C1F20CF,0x23EFBB05,0x7C1F20CF,0x23EFBB05,0x7C1F20CF,0x23EFBB05},{1U,0x23EFBB05,1U,0x23EFBB05,1U,0x23EFBB05,1U,0x23EFBB05,1U,0x23EFBB05}};
    int32_t *l_254[3][7] = {{&g_2,&g_12,&g_2,&g_12,&g_2,&g_12,&g_2},{&g_5,&g_5,&g_5,&g_5,&g_5,&g_5,&g_5},{&g_2,&g_12,&g_2,&g_12,&g_2,&g_12,&g_2}};
    int32_t ***l_255 = &g_152;
    int16_t l_259[3][1][8] = {{{0x852C,0x852C,0xBE11,0xBE11,0x852C,0x852C,0xBE11,0xBE11}},{{0x852C,0x852C,0xBE11,0xBE11,0x852C,0x852C,0xBE11,0xBE11}},{{0x852C,0x852C,0xBE11,0xBE11,0x852C,0x852C,0xBE11,0xBE11}}};
    int i, j, k;
    if (p_71)
    {
        uint16_t l_90 = 65533U;
        uint16_t *l_91 = &l_90;
        (*g_151) = func_73(func_75(l_81[7][9], l_81[2][7], ((safe_mul_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(((*l_91) = (0x03 > ((safe_lshift_func_int16_t_s_s(((safe_sub_func_int8_t_s_s(((p_71 >= 1U) > (-1)), ((((func_15(g_5) <= g_20) & l_90) <= g_12) || l_81[3][7]))) || p_71), 6)) > p_71))), l_81[7][9])), 1)) ^ p_71), &g_8, &g_55));
    }
    else
    {
        int32_t ****l_256 = &l_255;
        l_254[2][1] = ((*g_152) = l_254[2][4]);
        ((void) sizeof ((g_153 == &g_2 || (g_153 >= &g_174[0] && g_153 <= &g_174[1]) || g_153 == &g_12 || g_153 == &g_5) ? 1 : 0), __extension__ ({ if (g_153 == &g_2 || (g_153 >= &g_174[0] && g_153 <= &g_174[1]) || g_153 == &g_12 || g_153 == &g_5) ; else __assert_fail ("g_153 == &g_2 || (g_153 >= &g_174[0] && g_153 <= &g_174[1]) || g_153 == &g_12 || g_153 == &g_5", "/tmp/tmpyy782gvb.c", 383, __extension__ __PRETTY_FUNCTION__); }));
        (*l_256) = l_255;
    }
    for (g_140 = 0; (g_140 != 50); ++g_140)
    {
        return g_194;
    }
    return l_259[2][0][2];
}
static int32_t ** func_73(uint32_t * p_74)
{
    int32_t **l_253 = &g_153;
    return l_253;
}
static uint32_t * func_75(const uint16_t p_76, int32_t p_77, int8_t p_78, int32_t * const p_79, const uint32_t * p_80)
{
    int32_t *l_113 = &g_20;
    int32_t **l_112 = &l_113;
    int32_t l_225 = 0x4E5DE65A;
    int32_t ****l_251 = &g_151;
    for (p_78 = (-7); (p_78 < 25); p_78 = safe_add_func_int32_t_s_s(p_78, 4))
    {
        int32_t l_239 = 0x76450F9E;
        int32_t l_240[3];
        uint32_t *l_250 = (void*)0;
        int32_t ****l_252 = &g_151;
        int i;
        for (i = 0; i < 3; i++)
            l_240[i] = 5;
        for (p_77 = 16; (p_77 <= 23); p_77++)
        {
            uint8_t *l_96 = (void*)0;
            uint8_t *l_97[1][5][7] = {{{&g_98,&g_98,(void*)0,(void*)0,&g_98,&g_98,&g_98},{&g_98,(void*)0,(void*)0,&g_98,&g_98,&g_98,&g_98},{&g_98,&g_98,&g_98,&g_98,&g_98,&g_98,&g_98},{(void*)0,(void*)0,&g_98,&g_98,&g_98,(void*)0,(void*)0},{(void*)0,&g_98,&g_98,&g_98,&g_98,&g_98,&g_98}}};
            int32_t l_99[4] = {0x679804E6,0x679804E6,0x679804E6,0x679804E6};
            int32_t *l_100 = &l_99[0];
            int32_t **l_111 = &l_100;
            int32_t ***l_110 = &l_111;
            int i, j, k;
            g_101 = ((*l_100) = func_15((g_98 = (l_99[0] = p_77))));
        }
        l_252 = l_251;
    }
    return l_113;
}
static int32_t func_104(int32_t p_105, uint32_t * p_106, uint8_t p_107, int32_t ** p_108, int32_t ** p_109)
{
    int16_t l_132 = 0xC5A2;
    const uint32_t l_138 = 0x529FE0D4;
    int32_t l_172[2][7][6] = {{{(-6),0,0x96208B9B,0xBD512F4E,0xFB85D134,6},{6,0x4A799C40,0,0x4A799C40,6,0},{6,(-6),0x4A799C40,0xBD512F4E,0xCB1527D3,0xCB1527D3},{(-6),0xFB85D134,0xFB85D134,(-6),0,0xCB1527D3},{0x96208B9B,0xCB1527D3,0x4A799C40,0,0xBD512F4E,0},{0,1,0,0x53B8602F,0xBD512F4E,6},{0x4A799C40,0xCB1527D3,0x96208B9B,0,0,0x96208B9B}},{{0xFB85D134,0xFB85D134,(-6),0,0xCB1527D3,0x53B8602F},{0x4A799C40,(-6),6,0x53B8602F,6,(-6)},{0,0x4A799C40,6,0,0xFB85D134,0x53B8602F},{0x96208B9B,(-6),0xFB85D134,0xFB85D134,(-6),0},{0xFB85D134,(-6),0,0xCB1527D3,0x53B8602F,0x96208B9B},{0x96208B9B,1,0,1,0x96208B9B,(-6)},{0x96208B9B,0xFB85D134,1,0xCB1527D3,6,6}}};
    int32_t *l_199 = &l_172[0][4][0];
    int32_t **l_201 = &g_153;
    int32_t ***l_200 = &l_201;
    int32_t l_224 = 0xEC8C5487;
    int i, j, k;
    if ((!(safe_rshift_func_int16_t_s_s((+(*p_106)), 11))))
    {
        int32_t *l_124[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int32_t l_130[3];
        uint32_t l_191 = 8U;
        int i;
        for (i = 0; i < 3; i++)
            l_130[i] = 0;
        for (p_105 = 0; (p_105 <= 1); p_105 += 1)
        {
            int32_t l_119 = 1;
            (*p_109) = &g_8;
            if (g_12)
                continue;
            for (g_98 = 0; (g_98 <= 1); g_98 += 1)
            {
                int32_t **l_125 = &l_124[1];
                int32_t *l_127 = &g_8;
                int32_t **l_126 = &l_127;
                int32_t *l_131 = &l_119;
                uint16_t *l_139 = &g_140;
                if (l_119)
                    break;
                if (((safe_rshift_func_int8_t_s_u((safe_sub_func_uint16_t_u_u(((*l_139) = (((((*l_126) = ((*l_125) = ((*p_109) = l_124[1]))) != &g_20) != (safe_rshift_func_int8_t_s_s(p_107, 5))) > (l_130[1] | (((*l_131) = g_55) == (((l_132 > (safe_rshift_func_uint8_t_u_u(((p_109 == (void*)0) && (safe_mod_func_int32_t_s_s((~g_8), g_12))), g_2))) ^ 0) && l_138))))), 0x6F93)), p_105)) & l_130[1]))
                {
                    int32_t l_141 = 0x630802EB;
                    return l_141;
                }
                else
                {
                    int8_t l_158 = 0xBE;
                    int16_t l_164 = 0xE2C5;
                    uint8_t *l_165 = &g_166;
                    uint8_t *l_167 = &g_168;
                    uint32_t *l_169 = (void*)0;
                    uint32_t *l_170 = &g_171;
                    for (p_107 = 0; (p_107 <= 1); p_107 += 1)
                    {
                        int i, j, k;
                        if (g_118[(p_107 + 1)][g_98][(p_107 + 1)])
                            break;
                        return g_118[p_105][g_98][(p_107 + 2)];
                    }
                    l_172[0][4][0] = ((safe_lshift_func_int8_t_s_u(((l_119 = l_132) != ((safe_rshift_func_int16_t_s_s((!(((g_5 != ((safe_add_func_uint32_t_u_u(((*l_170) = (safe_lshift_func_int8_t_s_u((((g_151 = g_151) != &g_152) > (*p_106)), (safe_mod_func_uint16_t_u_u(((*l_139) = (safe_mul_func_int8_t_s_s((((l_158 > (safe_add_func_uint16_t_u_u((((((*l_167) = (safe_lshift_func_uint8_t_u_u(((*l_165) = (l_158 != ((g_163 = (((*g_153) && l_132) >= g_101)) && l_164))), 1))) & 0U) & g_118[1][1][4]) | g_101), p_107))) >= p_105) & 1U), (-3)))), p_107))))), (**g_152))) == 0x7DE1)) && (*g_54)) || p_107)), g_55)) >= p_107)), 7)) || p_107);
                }
                ((void) sizeof ((l_127 == 0 || l_127 == &g_2) ? 1 : 0), __extension__ ({ if (l_127 == 0 || l_127 == &g_2) ; else __assert_fail ("l_127 == 0 || l_127 == &g_2", "/tmp/tmpyy782gvb.c", 511, __extension__ __PRETTY_FUNCTION__); }));
                if (l_119)
                    continue;
                if (l_119)
                    break;
                for (g_168 = 0; (g_168 <= 1); g_168 += 1)
                {
                    int32_t l_173[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_173[i] = 0x4DB1C9D1;
                    for (g_101 = 0; (g_101 <= 1); g_101 += 1)
                    {
                        int i, j, k;
                        return g_118[(g_98 + 1)][g_98][(p_105 + 2)];
                    }
                    for (g_171 = 0; (g_171 <= 1); g_171 += 1)
                    {
                        g_174[0] = l_173[1];
                    }
                }
            }
        }
        (*g_152) = (**g_151);
        for (p_107 = 0; (p_107 <= 1); p_107 += 1)
        {
            for (g_166 = 0; (g_166 <= 1); g_166 += 1)
            {
                int16_t *l_179 = &l_132;
                int i;
                p_105 = (safe_add_func_int16_t_s_s(((safe_mul_func_int8_t_s_s(0xA2, ((1 > ((*l_179) = g_174[p_107])) == ((g_118[1][1][5] || (g_118[3][0][0] = ((safe_add_func_uint32_t_u_u(((void*)0 != (*g_151)), (safe_lshift_func_int8_t_s_s(0x88, 2)))) | p_105))) <= 252U)))) || g_174[p_107]), g_12));
                for (p_105 = 1; (p_105 >= 0); p_105 -= 1)
                {
                    uint8_t *l_190 = (void*)0;
                    int i, j, k;
                    l_172[g_166][(p_105 + 4)][(g_166 + 1)] = (safe_mul_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(((void*)0 == (**g_151)), g_118[(g_166 + 1)][g_166][(p_107 + 2)])), (safe_add_func_int32_t_s_s((&g_163 != l_190), 0xBB8701C1))));
                    g_174[p_107] = (**g_152);
                    (**g_151) = &l_130[1];
                    ((void) sizeof (((g_153 >= &l_130[0] && g_153 <= &l_130[2])) ? 1 : 0), __extension__ ({ if ((g_153 >= &l_130[0] && g_153 <= &l_130[2])) ; else __assert_fail ("(g_153 >= &l_130[0] && g_153 <= &l_130[2])", "/tmp/tmpyy782gvb.c", 554, __extension__ __PRETTY_FUNCTION__); }));
                }
            }
            l_191 = 0;
            for (g_168 = 0; (g_168 <= 1); g_168 += 1)
            {
                const int32_t *l_193 = &g_194;
                const int32_t **l_192 = &l_193;
                const int32_t *l_196[10][5];
                const int32_t **l_195 = &l_196[9][1];
                int i, j;
                for (i = 0; i < 10; i++)
                {
                    for (j = 0; j < 5; j++)
                        l_196[i][j] = &g_174[1];
                }
                for (l_191 = 0; (l_191 <= 1); l_191 += 1)
                {
                    if ((***g_151))
                        break;
                    for (g_98 = 0; (g_98 <= 1); g_98 += 1)
                    {
                        if ((***g_151))
                            break;
                    }
                }
                (*l_195) = ((*l_192) = (**g_151));
                ((void) sizeof (((l_193 >= &l_130[0] && l_193 <= &l_130[2]) || l_193 == &g_5) ? 1 : 0), __extension__ ({ if ((l_193 >= &l_130[0] && l_193 <= &l_130[2]) || l_193 == &g_5) ; else __assert_fail ("(l_193 >= &l_130[0] && l_193 <= &l_130[2]) || l_193 == &g_5", "/tmp/tmpyy782gvb.c", 582, __extension__ __PRETTY_FUNCTION__); }));
                for (g_98 = 0; (g_98 <= 1); g_98 += 1)
                {
                    int16_t l_197[8][10][3] = {{{0,0xD8EA,6},{0xBBF8,0,0xBBF8},{6,0xD8EA,0},{0x7936,0,(-8)},{0,1,0},{0x1C82,1,(-1)},{0,6,1},{0x7936,0xDEFF,0x287A},{6,0xC4B4,0xC4B4},{0xBBF8,0xA59A,0x287A}},{{0,(-6),1},{(-8),1,(-1)},{0,0,0},{(-1),1,(-8)},{1,(-6),0},{0x287A,0xA59A,0xBBF8},{0xC4B4,0xC4B4,6},{0x287A,0xDEFF,0x7936},{1,6,0},{(-1),1,0x1C82}},{{0,1,0},{(-8),0,0x7936},{0,0xD8EA,6},{0xBBF8,0,0xBBF8},{6,0xD8EA,0},{0x7936,0,(-8)},{0,1,0},{0x1C82,1,(-1)},{0,6,1},{0x7936,0xDEFF,0x287A}},{{6,0xC4B4,0xC4B4},{0xBBF8,0xA59A,0x287A},{0,(-6),1},{(-8),1,(-1)},{0,0,0},{(-1),1,(-8)},{1,(-6),0},{0x287A,0xA59A,0xBBF8},{0xC4B4,0xC4B4,6},{0x287A,0xDEFF,0x7936}},{{1,6,0},{(-1),1,0x1C82},{0,1,0},{(-8),0,0x7936},{0,0xD8EA,6},{0xBBF8,0,0xBBF8},{6,0xD8EA,0},{0x7936,0,(-8)},{0,1,0},{0x1C82,1,(-1)}},{{0,6,1},{0x7936,0xDEFF,0x287A},{6,0xC4B4,0xC4B4},{0xD1F4,0,(-8)},{0,0,0},{0xBBF8,0xDEFF,0x1C82},{0xD8EA,0x4250,0xD8EA},{0x1C82,0xDEFF,0xBBF8},{0,0,0},{(-8),0,0xD1F4}},{{0,0,0xC4B4},{(-8),1,1},{0,0xC4B4,0},{0x1C82,(-1),0x545A},{0xD8EA,0,0},{0xBBF8,0x2E7D,1},{0,6,0xC4B4},{0xD1F4,0xA757,0xD1F4},{0xC4B4,6,0},{1,0x2E7D,0xBBF8}},{{0,0,0xD8EA},{0x545A,(-1),0x1C82},{0,0xC4B4,0},{1,1,(-8)},{0xC4B4,0,0},{0xD1F4,0,(-8)},{0,0,0},{0xBBF8,0xDEFF,0x1C82},{0xD8EA,0x4250,0xD8EA},{0x1C82,0xDEFF,0xBBF8}}};
                    int i, j, k;
                    for (p_105 = 0; (p_105 <= 1); p_105 += 1)
                    {
                        (*l_192) = (*p_108);
                        return l_197[7][5][1];
                    }
                }
            }
        }
        ((void) sizeof (((g_153 >= &l_130[0] && g_153 <= &l_130[2]) || g_153 == &g_5) ? 1 : 0), __extension__ ({ if ((g_153 >= &l_130[0] && g_153 <= &l_130[2]) || g_153 == &g_5) ; else __assert_fail ("(g_153 >= &l_130[0] && g_153 <= &l_130[2]) || g_153 == &g_5", "/tmp/tmpyy782gvb.c", 601, __extension__ __PRETTY_FUNCTION__); }));
    }
    else
    {
        int16_t l_198 = (-10);
        return l_198;
    }
    (*l_199) = l_132;
    if (((*l_199) = (((void*)0 != &l_172[0][1][0]) != (((*g_151) = p_108) == ((*l_200) = &l_199)))))
    {
        uint8_t l_210 = 252U;
        uint32_t l_213 = 1U;
        int32_t *l_214 = &g_174[0];
        (*l_214) = (((((safe_sub_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((0U ^ (p_107 && 0U)), p_105)), (((((***l_200) = (safe_lshift_func_uint8_t_u_u((g_5 == (*l_199)), 2))) != (l_210 == 0xA580)) <= ((safe_mod_func_int32_t_s_s(p_107, l_210)) && p_105)) < 0x1BCC9791))), g_174[0])) < p_107) < (*p_106)) > (*g_54)) || l_213);
        if (p_105)
            goto lbl_223;
lbl_223:
        for (l_210 = 0; (l_210 > 51); l_210++)
        {
            const int32_t *l_218 = &g_5;
        }
        (**l_201) = l_224;
        l_214 = (*p_108);
    }
    else
    {
        return (*g_220);
    }
    ((void) sizeof ((l_201 == &l_199) ? 1 : 0), __extension__ ({ if (l_201 == &l_199) ; else __assert_fail ("l_201 == &l_199", "/tmp/tmpyy782gvb.c", 636, __extension__ __PRETTY_FUNCTION__); }));
    return (*g_220);
}
int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_2;
    csmith_sink_ = g_5;
    csmith_sink_ = g_8;
    csmith_sink_ = g_12;
    csmith_sink_ = g_20;
    for (i = 0; i < 7; i++)
    {
        csmith_sink_ = g_24[i];
    }
    csmith_sink_ = g_45;
    csmith_sink_ = g_55;
    csmith_sink_ = g_98;
    csmith_sink_ = g_101;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 6; k++)
            {
                csmith_sink_ = g_118[i][j][k];
            }
        }
    }
    csmith_sink_ = g_140;
    csmith_sink_ = g_163;
    csmith_sink_ = g_166;
    csmith_sink_ = g_168;
    csmith_sink_ = g_171;
    for (i = 0; i < 2; i++)
    {
        csmith_sink_ = g_174[i];
    }
    csmith_sink_ = g_194;
    csmith_sink_ = g_268;
    csmith_sink_ = g_272;
    csmith_sink_ = g_364;
    csmith_sink_ = g_422;
    csmith_sink_ = g_572;
    for (i = 0; i < 10; i++)
    {
        csmith_sink_ = g_616[i];
    }
    csmith_sink_ = g_653;
    csmith_sink_ = g_662;
    csmith_sink_ = g_694;
    csmith_sink_ = g_708;
    csmith_sink_ = g_835;
    platform_main_end(0,0);
    return 0;
}
