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
#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint16_t f0;
   int32_t f1;
   uint8_t f2;
   uint8_t f3;
   int8_t f4;
};
#pragma pack(pop)
struct S1 {
   uint8_t f0;
   uint32_t f1;
   int32_t f2;
   int32_t f3;
   uint32_t f4;
   int8_t f5;
   int8_t f6;
   int16_t f7;
};
struct S2 {
   uint16_t f0;
   uint32_t f1;
};
static int16_t g_5 = (-1);
static struct S1 g_6 = {7U,0x25B054DB,0xE56890C5,0x40874B28,0xD4A55F07,-1,0xB2,1};
static struct S2 g_18 = {65535U,1U};
static struct S1 *g_30 = &g_6;
static struct S1 **g_29 = &g_30;
static struct S0 g_42 = {0x4E48,2,0x4A,255U,0xB1};
static uint32_t g_66 = 4294967289U;
static struct S1 g_72 = {0x40,0x02764208,1,-4,0U,0x5A,9,8};
static int32_t *g_92 = &g_6.f2;
static uint16_t g_102 = 0U;
static uint32_t g_115[7] = {0x3D7553AF, 2U, 0x3D7553AF, 2U, 0x3D7553AF, 2U, 0x3D7553AF};
static uint8_t *g_136 = &g_42.f3;
static uint32_t g_186 = 5U;
static int16_t g_276 = 0xF7A4;
static uint16_t g_307 = 8U;
static int16_t g_344[5] = {(-2), 1, (-2), 1, (-2)};
static uint16_t g_375 = 0x7548;
static struct S1 ****g_404 = (void*)0;
static struct S1 ***g_408 = &g_29;
static struct S1 ****g_407[7][4][8] = {{{(void*)0, &g_408, (void*)0, &g_408, (void*)0, &g_408, (void*)0, &g_408}, {(void*)0, &g_408, (void*)0, &g_408, (void*)0, &g_408, (void*)0, &g_408}, {(void*)0, &g_408, (void*)0, &g_408, (void*)0, &g_408, (void*)0, &g_408}, {(void*)0, &g_408, (void*)0, &g_408, (void*)0, &g_408, (void*)0, &g_408}}, {{(void*)0, &g_408, (void*)0, &g_408, (void*)0, &g_408, (void*)0, &g_408}, {(void*)0, &g_408, (void*)0, &g_408, (void*)0, &g_408, (void*)0, &g_408}, {(void*)0, &g_408, (void*)0, &g_408, (void*)0, &g_408, (void*)0, &g_408}, {(void*)0, &g_408, (void*)0, &g_408, (void*)0, &g_408, (void*)0, &g_408}}, {{(void*)0, &g_408, (void*)0, &g_408, (void*)0, &g_408, (void*)0, &g_408}, {(void*)0, &g_408, (void*)0, &g_408, (void*)0, &g_408, (void*)0, &g_408}, {(void*)0, &g_408, (void*)0, &g_408, (void*)0, &g_408, (void*)0, &g_408}, {(void*)0, &g_408, (void*)0, &g_408, (void*)0, &g_408, (void*)0, &g_408}}, {{(void*)0, &g_408, (void*)0, &g_408, (void*)0, &g_408, (void*)0, &g_408}, {(void*)0, &g_408, (void*)0, &g_408, (void*)0, &g_408, (void*)0, &g_408}, {(void*)0, &g_408, (void*)0, &g_408, (void*)0, &g_408, (void*)0, &g_408}, {(void*)0, &g_408, (void*)0, &g_408, (void*)0, &g_408, (void*)0, &g_408}}, {{(void*)0, &g_408, (void*)0, &g_408, (void*)0, &g_408, (void*)0, &g_408}, {(void*)0, &g_408, (void*)0, &g_408, (void*)0, &g_408, (void*)0, &g_408}, {(void*)0, &g_408, (void*)0, &g_408, (void*)0, &g_408, (void*)0, &g_408}, {(void*)0, &g_408, (void*)0, &g_408, (void*)0, &g_408, (void*)0, &g_408}}, {{(void*)0, &g_408, (void*)0, &g_408, (void*)0, &g_408, (void*)0, &g_408}, {(void*)0, &g_408, (void*)0, &g_408, (void*)0, &g_408, (void*)0, &g_408}, {(void*)0, &g_408, (void*)0, &g_408, (void*)0, &g_408, (void*)0, &g_408}, {(void*)0, &g_408, (void*)0, &g_408, (void*)0, &g_408, (void*)0, &g_408}}, {{(void*)0, &g_408, (void*)0, &g_408, (void*)0, &g_408, (void*)0, &g_408}, {(void*)0, &g_408, (void*)0, &g_408, (void*)0, &g_408, (void*)0, &g_408}, {(void*)0, &g_408, (void*)0, &g_408, (void*)0, &g_408, (void*)0, &g_408}, {(void*)0, &g_408, (void*)0, &g_408, (void*)0, &g_408, (void*)0, &g_408}}};
static uint8_t **g_473 = &g_136;
static uint8_t ***g_472 = &g_473;
static uint8_t ****g_471 = &g_472;
static int32_t *g_500 = (void*)0;
static struct S1 *****g_503 = &g_404;
static int16_t **g_627 = (void*)0;
static uint16_t *g_648 = &g_18.f0;
static uint16_t **g_647 = &g_648;
static struct S0 g_666 = {1U,1,0x51,0x05,0x62};
static struct S2 *g_688 = &g_18;
static struct S2 **g_687 = &g_688;
static int8_t *g_732[7][7] = {{&g_6.f5, &g_666.f4, &g_666.f4, (void*)0, (void*)0, &g_72.f6, (void*)0}, {&g_6.f5, &g_666.f4, &g_666.f4, (void*)0, (void*)0, &g_72.f6, (void*)0}, {&g_6.f5, &g_666.f4, &g_666.f4, (void*)0, (void*)0, &g_72.f6, (void*)0}, {&g_6.f5, &g_666.f4, &g_666.f4, (void*)0, (void*)0, &g_72.f6, (void*)0}, {&g_6.f5, &g_666.f4, &g_666.f4, (void*)0, (void*)0, &g_72.f6, (void*)0}, {&g_6.f5, &g_666.f4, &g_666.f4, (void*)0, (void*)0, &g_72.f6, (void*)0}, {&g_6.f5, &g_666.f4, &g_666.f4, (void*)0, (void*)0, &g_72.f6, (void*)0}};
static int8_t **g_731 = &g_732[2][2];
static int16_t g_854 = 7;
static struct S0 g_904 = {0U,1,0x18,1U,4};
static uint16_t ***g_931 = &g_647;
static uint16_t ****g_930 = &g_931;
static int8_t g_935 = (-8);
static struct S2 ***g_936 = (void*)0;
static struct S2 g_941 = {65526U,4U};
static int8_t ***g_992 = (void*)0;
static int32_t **g_1022 = &g_92;
static int32_t ***g_1021 = &g_1022;
static int32_t *g_1167 = &g_6.f2;
static int32_t g_1211 = 0;
static struct S2 ****g_1263 = &g_936;
static struct S2 *****g_1262 = &g_1263;
static int8_t *****g_1289 = (void*)0;
static struct S0 *g_1326 = &g_666;
static uint32_t *g_1389 = (void*)0;
static uint32_t **g_1388 = &g_1389;
static uint32_t g_1436 = 0xFFAB950F;
static struct S1 ***g_1455 = (void*)0;
static uint8_t *****g_1502 = &g_471;
static struct S2 ***g_1623 = &g_687;
static uint32_t ****g_1632 = (void*)0;
inline static uint32_t func_1(void);
inline static int32_t func_2(uint16_t p_3, struct S1 p_4);
static struct S1 ** func_15(uint16_t p_16, struct S2 p_17);
static int32_t ** func_32(int32_t p_33, uint8_t p_34, struct S1 ** p_35, uint16_t p_36);
inline static uint16_t func_39(struct S0 p_40, uint8_t p_41);
inline static int32_t func_54(int8_t p_55, int32_t ** p_56, struct S1 p_57);
static struct S1 *** func_73(struct S1 ** p_74, struct S1 *** p_75, int32_t * p_76);
static struct S1 ** func_77(struct S1 ** p_78, uint8_t p_79, struct S1 *** p_80, uint8_t p_81, uint32_t p_82);
inline static struct S1 ** func_83(int16_t p_84, int16_t p_85, struct S1 p_86, int16_t * p_87);
static uint16_t func_89(struct S2 p_90);
inline static uint32_t func_1(void)
{
    struct S1 *l_7[6][3] = {{&g_6, (void*)0, &g_6}, {&g_6, (void*)0, &g_6}, {&g_6, (void*)0, &g_6}, {&g_6, (void*)0, &g_6}, {&g_6, (void*)0, &g_6}, {&g_6, (void*)0, &g_6}};
    int i, j;
    (*g_1167) = func_2(g_5, (g_6 = g_6));
    return g_6.f4;
}
inline static int32_t func_2(uint16_t p_3, struct S1 p_4)
{
    for (p_4.f3 = 0; (p_4.f3 != 2); p_4.f3++)
    {
        uint16_t l_14 = 0x537C;
        struct S1 **l_1693[8] = {&g_30, &g_30, &g_30, &g_30, &g_30, &g_30, &g_30, &g_30};
        int i;
        for (g_6.f3 = 0; (g_6.f3 != 27); ++g_6.f3)
        {
            for (p_4.f5 = 0; (p_4.f5 >= (-6)); p_4.f5--)
            {
                return l_14;
            }
            return g_5;
        }
    }
    return (**g_1022);
}
static struct S1 ** func_15(uint16_t p_16, struct S2 p_17)
{
    int32_t *l_23 = (void*)0;
    struct S1 *l_28 = &g_6;
    struct S1 **l_27 = &l_28;
    int32_t l_45 = 0xCDE89C67;
    int16_t *l_63[7][2][5] = {{{&g_6.f7, &g_5, &g_6.f7, &g_5, &g_6.f7}, {&g_6.f7, &g_5, &g_6.f7, &g_5, &g_6.f7}}, {{&g_6.f7, &g_5, &g_6.f7, &g_5, &g_6.f7}, {&g_6.f7, &g_5, &g_6.f7, &g_5, &g_6.f7}}, {{&g_6.f7, &g_5, &g_6.f7, &g_5, &g_6.f7}, {&g_6.f7, &g_5, &g_6.f7, &g_5, &g_6.f7}}, {{&g_6.f7, &g_5, &g_6.f7, &g_5, &g_6.f7}, {&g_6.f7, &g_5, &g_6.f7, &g_5, &g_6.f7}}, {{&g_6.f7, &g_5, &g_6.f7, &g_5, &g_6.f7}, {&g_6.f7, &g_5, &g_6.f7, &g_5, &g_6.f7}}, {{&g_6.f7, &g_5, &g_6.f7, &g_5, &g_6.f7}, {&g_6.f7, &g_5, &g_6.f7, &g_5, &g_6.f7}}, {{&g_6.f7, &g_5, &g_6.f7, &g_5, &g_6.f7}, {&g_6.f7, &g_5, &g_6.f7, &g_5, &g_6.f7}}};
    uint32_t *l_64 = (void*)0;
    uint32_t *l_65 = &g_66;
    int32_t l_71[2][4][9] = {{{(-1), 0x233887E9, 0x1C310705, (-6), 0x7732C352, 0x7732C352, (-6), 0x1C310705, 0x233887E9}, {(-1), 0x233887E9, 0x1C310705, (-6), 0x7732C352, 0x7732C352, (-6), 0x1C310705, 0x233887E9}, {(-1), 0x233887E9, 0x1C310705, (-6), 0x7732C352, 0x7732C352, (-6), 0x1C310705, 0x233887E9}, {(-1), 0x233887E9, 0x1C310705, (-6), 0x7732C352, 0x7732C352, (-6), 0x1C310705, 0x233887E9}}, {{(-1), 0x233887E9, 0x1C310705, (-6), 0x7732C352, 0x7732C352, (-6), 0x1C310705, 0x233887E9}, {(-1), 0x233887E9, 0x1C310705, (-6), 0x7732C352, 0x7732C352, (-6), 0x1C310705, 0x233887E9}, {(-1), 0x233887E9, 0x1C310705, (-6), 0x7732C352, 0x7732C352, (-6), 0x1C310705, 0x233887E9}, {(-1), 0x233887E9, 0x1C310705, (-6), 0x7732C352, 0x7732C352, (-6), 0x1C310705, 0x233887E9}}};
    int16_t l_962 = 0xC946;
    uint32_t l_1677[5];
    struct S1 **l_1678 = &l_28;
    struct S1 **l_1692 = &l_28;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_1677[i] = 4294967295U;
    for (p_17.f0 = (-12); (p_17.f0 == 44); ++p_17.f0)
    {
        uint8_t l_26 = 0x77;
        g_6.f2 = 3;
        for (p_17.f1 = 18; (p_17.f1 >= 55); ++p_17.f1)
        {
            int32_t **l_24 = (void*)0;
            int32_t **l_25 = &l_23;
            int32_t *l_31[2];
            int i;
            for (i = 0; i < 2; i++)
                l_31[i] = (void*)0;
            (*l_25) = l_23;
            g_6.f2 = (l_26 || (l_27 != g_29));
            if (g_6.f3)
                break;
        }
    }
    (*g_1021) = func_32((safe_mod_func_uint16_t_u_u(func_39(g_42, (safe_lshift_func_uint16_t_u_s(((((0x2D >= g_6.f1) || l_45) == (safe_sub_func_int16_t_s_s((safe_div_func_int16_t_s_s((safe_mod_func_int8_t_s_s(((safe_add_func_uint16_t_u_u(((func_54((safe_mod_func_int16_t_s_s((!(((safe_unary_minus_func_uint16_t_u((((*l_65) = (~(g_6.f7 = g_42.f0))) != (safe_add_func_uint16_t_u_u((((0x45D1 >= (l_71[0][2][0] = p_17.f1)) >= g_6.f0) || 0U), 0x2A19))))) > 0x3B) || p_16)), g_6.f1)), &l_23, g_72) & p_17.f0) < p_16), l_45)) ^ 7), (*g_136))), 0x4FF5)), 0x35BC))) || l_962), p_17.f0))), l_1677[0])), (*g_136), l_1678, p_17.f0);
    (*g_1022) = &l_71[0][2][7];
    ((void) sizeof (((g_92 >= &l_71[0][0][0] && g_92 <= &l_71[1][3][8])) ? 1 : 0), __extension__ ({ if ((g_92 >= &l_71[0][0][0] && g_92 <= &l_71[1][3][8])) ; else __assert_fail ("(g_92 >= &l_71[0][0][0] && g_92 <= &l_71[1][3][8])", "/tmp/tmpgeb25nc4.c", 205, __extension__ __PRETTY_FUNCTION__); }));
    return (*g_408);
}
static int32_t ** func_32(int32_t p_33, uint8_t p_34, struct S1 ** p_35, uint16_t p_36)
{
    int32_t *l_1681 = &g_6.f2;
    uint16_t l_1686[1];
    uint16_t *l_1687 = &l_1686[0];
    int16_t *l_1688 = (void*)0;
    int16_t *l_1689[8] = {&g_344[1], &g_854, &g_344[1], &g_854, &g_344[1], &g_854, &g_344[1], &g_854};
    int32_t l_1690 = 0x5E7A336B;
    int32_t *l_1691[10] = {&g_1211, &g_1211, &g_1211, &g_1211, &g_1211, &g_1211, &g_1211, &g_1211, &g_1211, &g_1211};
    int i;
    for (i = 0; i < 1; i++)
        l_1686[i] = 0x102B;
    g_1211 = ((*g_1167) = (safe_add_func_int16_t_s_s((l_1681 != ((**g_1021) = (**g_1021))), ((safe_sub_func_int32_t_s_s((((*g_648) = (*l_1681)) & (l_1690 = (((((g_344[1] = ((safe_add_func_uint16_t_u_u(l_1686[0], (*l_1681))) && (((*l_1687) = (&g_931 == (void*)0)) >= (*l_1681)))) != 65532U) & p_33) > (*****g_1502)) >= 0xD85BF4A1))), p_36)) != p_33))));
    return (*g_1021);
}
inline static uint16_t func_39(struct S0 p_40, uint8_t p_41)
{
    struct S1 **l_965 = &g_30;
    int16_t *l_966[10][10][2] = {{{&g_344[1], &g_276}, {&g_344[1], &g_276}, {&g_344[1], &g_276}, {&g_344[1], &g_276}, {&g_344[1], &g_276}, {&g_344[1], &g_276}, {&g_344[1], &g_276}, {&g_344[1], &g_276}, {&g_344[1], &g_276}, {&g_344[1], &g_276}}, {{&g_344[1], &g_276}, {&g_344[1], &g_276}, {&g_344[1], &g_276}, {&g_344[1], &g_276}, {&g_344[1], &g_276}, {&g_344[1], &g_276}, {&g_344[1], &g_276}, {&g_344[1], &g_276}, {&g_344[1], &g_276}, {&g_344[1], &g_276}}, {{&g_344[1], &g_276}, {&g_344[1], &g_276}, {&g_344[1], &g_276}, {&g_344[1], &g_276}, {&g_344[1], &g_276}, {&g_344[1], &g_276}, {&g_344[1], &g_276}, {&g_344[1], &g_276}, {&g_344[1], &g_276}, {&g_344[1], &g_276}}, {{&g_344[1], &g_276}, {&g_344[1], &g_276}, {&g_344[1], &g_276}, {&g_344[1], &g_276}, {&g_344[1], &g_276}, {&g_344[1], &g_276}, {&g_344[1], &g_276}, {&g_344[1], &g_276}, {&g_344[1], &g_276}, {&g_344[1], &g_276}}, {{&g_344[1], &g_276}, {&g_344[1], &g_276}, {&g_344[1], &g_276}, {&g_344[1], &g_276}, {&g_344[1], &g_276}, {&g_344[1], &g_276}, {&g_344[1], &g_276}, {&g_344[1], &g_276}, {&g_344[1], &g_276}, {&g_344[1], &g_276}}, {{&g_344[1], &g_276}, {&g_344[1], &g_276}, {&g_344[1], &g_276}, {&g_344[1], &g_276}, {&g_344[1], &g_276}, {&g_344[1], &g_276}, {&g_344[1], &g_276}, {&g_344[1], &g_276}, {&g_344[1], &g_276}, {&g_344[1], &g_276}}, {{&g_344[1], &g_276}, {&g_344[1], &g_276}, {&g_344[1], &g_276}, {&g_344[1], &g_276}, {&g_344[1], &g_276}, {&g_344[1], &g_276}, {&g_344[1], &g_276}, {&g_344[1], &g_276}, {&g_344[1], &g_276}, {&g_344[1], &g_276}}, {{&g_344[1], &g_276}, {&g_344[1], &g_276}, {&g_344[1], &g_276}, {&g_344[1], &g_276}, {&g_344[1], &g_276}, {&g_344[1], &g_276}, {&g_344[1], &g_276}, {&g_344[1], &g_276}, {&g_344[1], &g_276}, {&g_344[1], &g_276}}, {{&g_344[1], &g_276}, {&g_344[1], &g_276}, {&g_344[1], &g_276}, {&g_344[1], &g_276}, {&g_344[1], &g_276}, {&g_344[1], &g_276}, {&g_344[1], &g_276}, {&g_344[1], &g_276}, {&g_344[1], &g_276}, {&g_344[1], &g_276}}, {{&g_344[1], &g_276}, {&g_344[1], &g_276}, {&g_344[1], &g_276}, {&g_344[1], &g_276}, {&g_344[1], &g_276}, {&g_344[1], &g_276}, {&g_344[1], &g_276}, {&g_344[1], &g_276}, {&g_344[1], &g_276}, {&g_344[1], &g_276}}};
    int8_t **l_970 = &g_732[2][2];
    int32_t *l_972 = &g_6.f2;
    int32_t l_983[7][1];
    uint8_t l_987 = 0xF3;
    uint16_t l_1042 = 0xBD79;
    uint8_t l_1059[6][5] = {{253U, 0x1F, 5U, 7U, 0x1F}, {253U, 0x1F, 5U, 7U, 0x1F}, {253U, 0x1F, 5U, 7U, 0x1F}, {253U, 0x1F, 5U, 7U, 0x1F}, {253U, 0x1F, 5U, 7U, 0x1F}, {253U, 0x1F, 5U, 7U, 0x1F}};
    uint16_t l_1108 = 1U;
    uint32_t **l_1137 = (void*)0;
    uint32_t ***l_1136 = &l_1137;
    uint32_t ****l_1135[10][1][2] = {{{&l_1136, &l_1136}}, {{&l_1136, &l_1136}}, {{&l_1136, &l_1136}}, {{&l_1136, &l_1136}}, {{&l_1136, &l_1136}}, {{&l_1136, &l_1136}}, {{&l_1136, &l_1136}}, {{&l_1136, &l_1136}}, {{&l_1136, &l_1136}}, {{&l_1136, &l_1136}}};
    uint32_t *****l_1134 = &l_1135[9][0][0];
    uint16_t l_1165 = 0x0FD0;
    uint16_t *l_1173 = (void*)0;
    int32_t l_1213 = 0x99447182;
    int16_t l_1215[9] = {0x45C5, 0xBE4E, 0x45C5, 0xBE4E, 0x45C5, 0xBE4E, 0x45C5, 0xBE4E, 0x45C5};
    struct S0 *l_1220[2][3] = {{&g_42, &g_42, &g_904}, {&g_42, &g_42, &g_904}};
    int8_t ****l_1288 = &g_992;
    int8_t *****l_1287 = &l_1288;
    uint16_t ***l_1333 = &g_647;
    struct S1 *****l_1369 = &g_404;
    uint8_t l_1414 = 5U;
    uint8_t *****l_1564[6][2][3] = {{{&g_471, &g_471, &g_471}, {&g_471, &g_471, &g_471}}, {{&g_471, &g_471, &g_471}, {&g_471, &g_471, &g_471}}, {{&g_471, &g_471, &g_471}, {&g_471, &g_471, &g_471}}, {{&g_471, &g_471, &g_471}, {&g_471, &g_471, &g_471}}, {{&g_471, &g_471, &g_471}, {&g_471, &g_471, &g_471}}, {{&g_471, &g_471, &g_471}, {&g_471, &g_471, &g_471}}};
    struct S2 l_1652 = {65534U,0xD948831D};
    uint8_t l_1671 = 0xDD;
    int i, j, k;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
            l_983[i][j] = 0x5CAB675D;
    }
    return (**g_647);
}
inline static int32_t func_54(int8_t p_55, int32_t ** p_56, struct S1 p_57)
{
    int16_t l_88 = 0xD0E1;
    struct S2 l_91 = {0x9F6C,0x230FEFE5};
    uint32_t **l_435 = (void*)0;
    uint16_t *l_437 = (void*)0;
    uint16_t **l_436 = &l_437;
    int8_t *l_439[8] = {&g_72.f6, &g_72.f6, &g_72.f5, &g_72.f6, &g_72.f6, &g_72.f5, &g_72.f6, &g_72.f6};
    int8_t **l_438 = &l_439[4];
    int16_t l_440 = 0x418C;
    uint16_t *l_441 = &g_18.f0;
    int32_t l_442 = 0xC28F1687;
    struct S1 ***l_801 = (void*)0;
    uint32_t l_886 = 0x908946AA;
    struct S2 **l_895 = &g_688;
    uint8_t ****l_897 = &g_472;
    int32_t *l_906[5] = {&g_72.f2, &g_72.f2, &g_72.f2, &g_72.f2, &g_72.f2};
    uint16_t ***l_927[5][3][8] = {{{&g_647, &g_647, &g_647, &g_647, &g_647, &g_647, &g_647, &g_647}, {&g_647, &g_647, &g_647, &g_647, &g_647, &g_647, &g_647, &g_647}, {&g_647, &g_647, &g_647, &g_647, &g_647, &g_647, &g_647, &g_647}}, {{&g_647, &g_647, &g_647, &g_647, &g_647, &g_647, &g_647, &g_647}, {&g_647, &g_647, &g_647, &g_647, &g_647, &g_647, &g_647, &g_647}, {&g_647, &g_647, &g_647, &g_647, &g_647, &g_647, &g_647, &g_647}}, {{&g_647, &g_647, &g_647, &g_647, &g_647, &g_647, &g_647, &g_647}, {&g_647, &g_647, &g_647, &g_647, &g_647, &g_647, &g_647, &g_647}, {&g_647, &g_647, &g_647, &g_647, &g_647, &g_647, &g_647, &g_647}}, {{&g_647, &g_647, &g_647, &g_647, &g_647, &g_647, &g_647, &g_647}, {&g_647, &g_647, &g_647, &g_647, &g_647, &g_647, &g_647, &g_647}, {&g_647, &g_647, &g_647, &g_647, &g_647, &g_647, &g_647, &g_647}}, {{&g_647, &g_647, &g_647, &g_647, &g_647, &g_647, &g_647, &g_647}, {&g_647, &g_647, &g_647, &g_647, &g_647, &g_647, &g_647, &g_647}, {&g_647, &g_647, &g_647, &g_647, &g_647, &g_647, &g_647, &g_647}}};
    uint16_t ****l_926 = &l_927[1][1][1];
    struct S0 l_942[10] = {{65531U,0,1U,255U,0}, {0x5EF2,0x4BE26CFD,2U,0x97,-1}, {65535U,0xEEE70858,0x25,0xCA,2}, {65535U,0xEEE70858,0x25,0xCA,2}, {0x5EF2,0x4BE26CFD,2U,0x97,-1}, {65531U,0,1U,255U,0}, {0x5EF2,0x4BE26CFD,2U,0x97,-1}, {65535U,0xEEE70858,0x25,0xCA,2}, {65535U,0xEEE70858,0x25,0xCA,2}, {0x5EF2,0x4BE26CFD,2U,0x97,-1}};
    uint8_t *****l_952 = &l_897;
    int i, j, k;
    l_801 = func_73(func_77(func_83(l_88, (((((*l_441) = (func_89(l_91) | ((((((((void*)0 == l_435) ^ (l_436 != &l_437)) && ((void*)0 != l_438)) == 0x09) | 0x77BC) < l_440) || p_57.f5))) || l_442) < g_6.f1) == 0x9665), p_57, &g_344[1]), (**g_473), l_801, (***g_472), g_42.f3), l_801, &l_442);
    ((void) sizeof ((l_801 == 0 || l_801 == &g_29) ? 1 : 0), __extension__ ({ if (l_801 == 0 || l_801 == &g_29) ; else __assert_fail ("l_801 == 0 || l_801 == &g_29", "/tmp/tmpgeb25nc4.c", 309, __extension__ __PRETTY_FUNCTION__); }));
    for (p_57.f6 = 6; (p_57.f6 >= 0); p_57.f6 -= 1)
    {
        int32_t l_830[8] = {0x1325B2F3, 0x1325B2F3, 5, 0x1325B2F3, 0x1325B2F3, 5, 0x1325B2F3, 0x1325B2F3};
        struct S2 **l_894[10] = {&g_688, &g_688, &g_688, &g_688, &g_688, &g_688, &g_688, &g_688, &g_688, &g_688};
        struct S1 l_900 = {9U,0x1924B3ED,-1,1,4294967287U,0x39,0,0xFF49};
        struct S1 l_901 = {1U,4294967295U,0,0xE2ECD13A,0x056D5830,-7,0x78,0xD235};
        struct S0 l_905 = {0xD62B,0x6E45FE61,1U,0x89,0x32};
        int i;
        for (g_666.f1 = 0; (g_666.f1 <= 3); g_666.f1 += 1)
        {
            int16_t l_816[5] = {1, 0xC08D, 1, 0xC08D, 1};
            uint32_t *l_828 = &g_6.f1;
            int32_t l_831 = 0x87A8E5D4;
            struct S1 *****l_839[7][6][1] = {{{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}};
            uint16_t ***l_853 = &l_436;
            int16_t l_887[4];
            int32_t *l_889[8][5] = {{&l_442, &g_6.f2, &l_442, &l_442, (void*)0}, {&l_442, &g_6.f2, &l_442, &l_442, (void*)0}, {&l_442, &g_6.f2, &l_442, &l_442, (void*)0}, {&l_442, &g_6.f2, &l_442, &l_442, (void*)0}, {&l_442, &g_6.f2, &l_442, &l_442, (void*)0}, {&l_442, &g_6.f2, &l_442, &l_442, (void*)0}, {&l_442, &g_6.f2, &l_442, &l_442, (void*)0}, {&l_442, &g_6.f2, &l_442, &l_442, (void*)0}};
            struct S0 l_902 = {0x2884,0x2705ED53,1U,0xCF,6};
            struct S0 *l_903[3];
            int32_t *l_912 = (void*)0;
            uint8_t *****l_922[5] = {&l_897, &l_897, &l_897, &l_897, &l_897};
            int8_t l_934 = 0x0A;
            int i, j, k;
            for (i = 0; i < 4; i++)
                l_887[i] = 1;
            for (i = 0; i < 3; i++)
                l_903[i] = &g_904;
            for (g_307 = 0; (g_307 <= 6); g_307 += 1)
            {
                uint32_t l_829 = 5U;
                int8_t **l_832 = &g_732[2][2];
                uint16_t ***l_852[9][3] = {{&l_436, &l_436, &l_436}, {&l_436, &l_436, &l_436}, {&l_436, &l_436, &l_436}, {&l_436, &l_436, &l_436}, {&l_436, &l_436, &l_436}, {&l_436, &l_436, &l_436}, {&l_436, &l_436, &l_436}, {&l_436, &l_436, &l_436}, {&l_436, &l_436, &l_436}};
                int i, j;
            }
            l_901 = (l_900 = p_57);
            l_905 = (g_904 = (l_902 = g_42));
            l_906[0] = g_92;
            for (g_375 = 0; (g_375 <= 6); g_375 += 1)
            {
                uint8_t **l_911 = &g_136;
                uint8_t *****l_921 = &l_897;
                int i;
                if ((0xFBB37EEC | (g_115[p_57.f6] = (((0x513E172F < g_344[(g_666.f1 + 1)]) ^ g_115[g_375]) & (safe_mod_func_int32_t_s_s(g_344[(g_666.f1 + 1)], p_57.f7))))))
                {
                    int i, j;
                    if ((safe_lshift_func_int8_t_s_u(p_57.f6, p_57.f5)))
                    {
                        g_904 = g_666;
                        return (*g_92);
                    }
                    else
                    {
                        int32_t **l_915 = &g_500;
                        int32_t ***l_914 = &l_915;
                        int32_t ****l_913 = &l_914;
                        (*g_472) = l_911;
                        (*p_56) = l_912;
                        (*p_56) = (void*)0;
                        (*l_913) = &p_56;
                        ((void) sizeof ((l_914 == &p_56) ? 1 : 0), __extension__ ({ if (l_914 == &p_56) ; else __assert_fail ("l_914 == &p_56", "/tmp/tmpgeb25nc4.c", 372, __extension__ __PRETTY_FUNCTION__); }));
                    }
                    (*p_56) = (*p_56);
                    (*g_92) = 0x43F41025;
                }
                else
                {
                    if ((+(((safe_mod_func_int32_t_s_s(((safe_sub_func_int32_t_s_s((*g_92), g_115[p_57.f6])) || (l_921 == l_922[1])), g_344[(g_666.f1 + 1)])) > g_344[(g_666.f1 + 1)]) < ((safe_rshift_func_int8_t_s_s((-5), 5)) && ((**g_647) = 65535U)))))
                    {
                        (*p_56) = g_92;
                        l_830[0] = (!1);
                        if ((**p_56))
                            break;
                        (*p_56) = (*p_56);
                    }
                    else
                    {
                        uint16_t *****l_928 = (void*)0;
                        uint16_t *****l_929[9][10][2] = {{{&l_926, &l_926}, {&l_926, &l_926}, {&l_926, &l_926}, {&l_926, &l_926}, {&l_926, &l_926}, {&l_926, &l_926}, {&l_926, &l_926}, {&l_926, &l_926}, {&l_926, &l_926}, {&l_926, &l_926}}, {{&l_926, &l_926}, {&l_926, &l_926}, {&l_926, &l_926}, {&l_926, &l_926}, {&l_926, &l_926}, {&l_926, &l_926}, {&l_926, &l_926}, {&l_926, &l_926}, {&l_926, &l_926}, {&l_926, &l_926}}, {{&l_926, &l_926}, {&l_926, &l_926}, {&l_926, &l_926}, {&l_926, &l_926}, {&l_926, &l_926}, {&l_926, &l_926}, {&l_926, &l_926}, {&l_926, &l_926}, {&l_926, &l_926}, {&l_926, &l_926}}, {{&l_926, &l_926}, {&l_926, &l_926}, {&l_926, &l_926}, {&l_926, &l_926}, {&l_926, &l_926}, {&l_926, &l_926}, {&l_926, &l_926}, {&l_926, &l_926}, {&l_926, &l_926}, {&l_926, &l_926}}, {{&l_926, &l_926}, {&l_926, &l_926}, {&l_926, &l_926}, {&l_926, &l_926}, {&l_926, &l_926}, {&l_926, &l_926}, {&l_926, &l_926}, {&l_926, &l_926}, {&l_926, &l_926}, {&l_926, &l_926}}, {{&l_926, &l_926}, {&l_926, &l_926}, {&l_926, &l_926}, {&l_926, &l_926}, {&l_926, &l_926}, {&l_926, &l_926}, {&l_926, &l_926}, {&l_926, &l_926}, {&l_926, &l_926}, {&l_926, &l_926}}, {{&l_926, &l_926}, {&l_926, &l_926}, {&l_926, &l_926}, {&l_926, &l_926}, {&l_926, &l_926}, {&l_926, &l_926}, {&l_926, &l_926}, {&l_926, &l_926}, {&l_926, &l_926}, {&l_926, &l_926}}, {{&l_926, &l_926}, {&l_926, &l_926}, {&l_926, &l_926}, {&l_926, &l_926}, {&l_926, &l_926}, {&l_926, &l_926}, {&l_926, &l_926}, {&l_926, &l_926}, {&l_926, &l_926}, {&l_926, &l_926}}, {{&l_926, &l_926}, {&l_926, &l_926}, {&l_926, &l_926}, {&l_926, &l_926}, {&l_926, &l_926}, {&l_926, &l_926}, {&l_926, &l_926}, {&l_926, &l_926}, {&l_926, &l_926}, {&l_926, &l_926}}};
                        int i, j, k;
                        g_930 = l_926;
                        ((void) sizeof (((g_930 >= &l_927[0][0][0] && g_930 <= &l_927[4][2][7])) ? 1 : 0), __extension__ ({ if ((g_930 >= &l_927[0][0][0] && g_930 <= &l_927[4][2][7])) ; else __assert_fail ("(g_930 >= &l_927[0][0][0] && g_930 <= &l_927[4][2][7])", "/tmp/tmpgeb25nc4.c", 398, __extension__ __PRETTY_FUNCTION__); }));
                        return (*g_92);
                    }
                }
                (*g_92) = (safe_lshift_func_uint8_t_u_u(l_830[6], l_934));
                l_906[0] = ((*p_56) = &l_442);
                return g_935;
            }
        }
        for (g_72.f5 = 0; (g_72.f5 <= 3); g_72.f5 += 1)
        {
            struct S2 ***l_938 = &g_687;
            struct S2 ****l_937 = &l_938;
            struct S2 ***l_939 = &l_895;
            uint32_t l_956[2];
            int i;
            for (i = 0; i < 2; i++)
                l_956[i] = 1U;
            (*l_937) = (g_936 = (void*)0);
            ((void) sizeof ((l_938 == 0) ? 1 : 0), __extension__ ({ if (l_938 == 0) ; else __assert_fail ("l_938 == 0", "/tmp/tmpgeb25nc4.c", 429, __extension__ __PRETTY_FUNCTION__); }));
            if (g_344[(g_72.f5 + 1)])
                continue;
            (*p_56) = (void*)0;
            (*l_939) = l_894[2];
            for (g_18.f1 = 0; (g_18.f1 <= 3); g_18.f1 += 1)
            {
                struct S2 l_940 = {65533U,0x8E20566E};
                uint8_t *****l_953[6][1][1] = {{{&g_471}}, {{&g_471}}, {{&g_471}}, {{&g_471}}, {{&g_471}}, {{&g_471}}};
                int i, j, k;
                g_941 = l_940;
                l_900 = p_57;
                for (g_72.f4 = 0; (g_72.f4 <= 6); g_72.f4 += 1)
                {
                    struct S0 *l_943 = &l_942[4];
                    struct S0 *l_944 = (void*)0;
                    struct S0 *l_945 = &l_905;
                    uint32_t ***l_961 = &l_435;
                    uint32_t ****l_960 = &l_961;
                    (*l_945) = ((*l_943) = l_942[0]);
                    for (g_72.f6 = 0; (g_72.f6 <= 3); g_72.f6 += 1)
                    {
                        int32_t *l_946 = &l_901.f2;
                        int32_t **l_947 = &l_946;
                        int i, j;
                        (*p_56) = (*p_56);
                        (*l_947) = ((*p_56) = l_946);
                        (**p_56) = (safe_sub_func_uint32_t_u_u(l_940.f1, ((((l_952 = &g_471) != (l_953[0][0][0] = &l_897)) ^ ((**g_647) = (((*g_92) & (safe_div_func_uint16_t_u_u((***g_931), p_57.f5))) <= ((((l_956[0] = ((void*)0 == &g_732[p_57.f6][p_57.f6])) <= (!((safe_mod_func_uint8_t_u_u(((((l_901.f6 <= p_57.f2) > p_55) >= (**g_473)) || (*g_136)), 0xB1)) == 0))) | (-1)) >= 0x7FFC)))) != 0x7633)));
                        ((void) sizeof ((l_952 == &g_471) ? 1 : 0), __extension__ ({ if (l_952 == &g_471) ; else __assert_fail ("l_952 == &g_471", "/tmp/tmpgeb25nc4.c", 462, __extension__ __PRETTY_FUNCTION__); }));
                    }
                    (*l_960) = (void*)0;
                    ((void) sizeof ((l_961 == 0) ? 1 : 0), __extension__ ({ if (l_961 == 0) ; else __assert_fail ("l_961 == 0", "/tmp/tmpgeb25nc4.c", 466, __extension__ __PRETTY_FUNCTION__); }));
                }
            }
        }
    }
    ((void) sizeof ((l_952 == &g_471 || l_952 == &l_897) ? 1 : 0), __extension__ ({ if (l_952 == &g_471 || l_952 == &l_897) ; else __assert_fail ("l_952 == &g_471 || l_952 == &l_897", "/tmp/tmpgeb25nc4.c", 480, __extension__ __PRETTY_FUNCTION__); }));
    g_92 = g_92;
    (*g_930) = (*g_930);
    return (*g_92);
}
static struct S1 *** func_73(struct S1 ** p_74, struct S1 *** p_75, int32_t * p_76)
{
    struct S1 ***l_809[10][2] = {{&g_29, (void*)0}, {&g_29, (void*)0}, {&g_29, (void*)0}, {&g_29, (void*)0}, {&g_29, (void*)0}, {&g_29, (void*)0}, {&g_29, (void*)0}, {&g_29, (void*)0}, {&g_29, (void*)0}, {&g_29, (void*)0}};
    int i, j;
    for (g_666.f2 = 0; (g_666.f2 <= 3); g_666.f2 += 1)
    {
        uint32_t *l_804[7][9] = {{&g_115[5], &g_66, &g_115[5], &g_66, &g_115[5], &g_66, &g_115[5], &g_66, &g_115[5]}, {&g_115[5], &g_66, &g_115[5], &g_66, &g_115[5], &g_66, &g_115[5], &g_66, &g_115[5]}, {&g_115[5], &g_66, &g_115[5], &g_66, &g_115[5], &g_66, &g_115[5], &g_66, &g_115[5]}, {&g_115[5], &g_66, &g_115[5], &g_66, &g_115[5], &g_66, &g_115[5], &g_66, &g_115[5]}, {&g_115[5], &g_66, &g_115[5], &g_66, &g_115[5], &g_66, &g_115[5], &g_66, &g_115[5]}, {&g_115[5], &g_66, &g_115[5], &g_66, &g_115[5], &g_66, &g_115[5], &g_66, &g_115[5]}, {&g_115[5], &g_66, &g_115[5], &g_66, &g_115[5], &g_66, &g_115[5], &g_66, &g_115[5]}};
        uint32_t **l_803 = &l_804[4][6];
        uint32_t ***l_805 = (void*)0;
        uint32_t ***l_806 = (void*)0;
        uint32_t **l_808 = &l_804[4][6];
        uint32_t ***l_807 = &l_808;
        int i, j;
        (*p_76) = (l_803 == ((*l_807) = &l_804[4][6]));
        (*p_76) = ((*g_92) = (*g_92));
        return l_809[5][0];
    }
    return l_809[2][0];
}
static struct S1 ** func_77(struct S1 ** p_78, uint8_t p_79, struct S1 *** p_80, uint8_t p_81, uint32_t p_82)
{
    struct S1 **l_802 = (void*)0;
    return l_802;
}
inline static struct S1 ** func_83(int16_t p_84, int16_t p_85, struct S1 p_86, int16_t * p_87)
{
    struct S1 *****l_443 = &g_404;
    int32_t **l_444 = &g_92;
    uint32_t *l_451 = &g_115[6];
    uint32_t *l_474 = (void*)0;
    uint32_t *l_475 = &g_66;
    int16_t l_476 = 0xE36C;
    uint16_t *l_488 = (void*)0;
    uint16_t **l_650 = &l_488;
    int8_t ***l_742 = &g_731;
    int8_t ***l_743[3];
    struct S1 **l_745 = &g_30;
    struct S0 l_757 = {0xF6A1,0x98307DFD,247U,255U,1};
    struct S0 l_758 = {3U,0,255U,0xAC,4};
    int32_t l_786 = 3;
    int i;
    for (i = 0; i < 3; i++)
        l_743[i] = &g_731;
    l_443 = (void*)0;
    ((void) sizeof ((l_443 == 0) ? 1 : 0), __extension__ ({ if (l_443 == 0) ; else __assert_fail ("l_443 == 0", "/tmp/tmpgeb25nc4.c", 557, __extension__ __PRETTY_FUNCTION__); }));
    (*l_444) = g_92;
    return l_745;
}
static uint16_t func_89(struct S2 p_90)
{
    int32_t **l_93[2];
    uint8_t *l_138 = &g_6.f0;
    uint32_t *l_171 = (void*)0;
    int16_t *l_185 = &g_6.f7;
    int16_t **l_194[3][7][3] = {{{&l_185, &l_185, &l_185}, {&l_185, &l_185, &l_185}, {&l_185, &l_185, &l_185}, {&l_185, &l_185, &l_185}, {&l_185, &l_185, &l_185}, {&l_185, &l_185, &l_185}, {&l_185, &l_185, &l_185}}, {{&l_185, &l_185, &l_185}, {&l_185, &l_185, &l_185}, {&l_185, &l_185, &l_185}, {&l_185, &l_185, &l_185}, {&l_185, &l_185, &l_185}, {&l_185, &l_185, &l_185}, {&l_185, &l_185, &l_185}}, {{&l_185, &l_185, &l_185}, {&l_185, &l_185, &l_185}, {&l_185, &l_185, &l_185}, {&l_185, &l_185, &l_185}, {&l_185, &l_185, &l_185}, {&l_185, &l_185, &l_185}, {&l_185, &l_185, &l_185}}};
    uint8_t l_215 = 6U;
    uint32_t l_239[6][6][7] = {{{4294967287U, 0xA556991D, 4294967293U, 0U, 4294967295U, 1U, 4294967293U}, {4294967287U, 0xA556991D, 4294967293U, 0U, 4294967295U, 1U, 4294967293U}, {4294967287U, 0xA556991D, 4294967293U, 0U, 4294967295U, 1U, 4294967293U}, {4294967287U, 0xA556991D, 4294967293U, 0U, 4294967295U, 1U, 4294967293U}, {4294967287U, 0xA556991D, 4294967293U, 0U, 4294967295U, 1U, 4294967293U}, {4294967287U, 0xA556991D, 4294967293U, 0U, 4294967295U, 1U, 4294967293U}}, {{4294967287U, 0xA556991D, 4294967293U, 0U, 4294967295U, 1U, 4294967293U}, {4294967287U, 0xA556991D, 4294967293U, 0U, 4294967295U, 1U, 4294967293U}, {4294967287U, 0xA556991D, 4294967293U, 0U, 4294967295U, 1U, 4294967293U}, {4294967287U, 0xA556991D, 4294967293U, 0U, 4294967295U, 1U, 4294967293U}, {4294967287U, 0xA556991D, 4294967293U, 0U, 4294967295U, 1U, 4294967293U}, {4294967287U, 0xA556991D, 4294967293U, 0U, 4294967295U, 1U, 4294967293U}}, {{4294967287U, 0xA556991D, 4294967293U, 0U, 4294967295U, 1U, 4294967293U}, {4294967287U, 0xA556991D, 4294967293U, 0U, 4294967295U, 1U, 4294967293U}, {4294967287U, 0xA556991D, 4294967293U, 0U, 4294967295U, 1U, 4294967293U}, {4294967287U, 0xA556991D, 4294967293U, 0U, 4294967295U, 1U, 4294967293U}, {4294967287U, 0xA556991D, 4294967293U, 0U, 4294967295U, 1U, 4294967293U}, {4294967287U, 0xA556991D, 4294967293U, 0U, 4294967295U, 1U, 4294967293U}}, {{4294967287U, 0xA556991D, 4294967293U, 0U, 4294967295U, 1U, 4294967293U}, {4294967287U, 0xA556991D, 4294967293U, 0U, 4294967295U, 1U, 4294967293U}, {4294967287U, 0xA556991D, 4294967293U, 0U, 4294967295U, 1U, 4294967293U}, {4294967287U, 0xA556991D, 4294967293U, 0U, 4294967295U, 1U, 4294967293U}, {4294967287U, 0xA556991D, 4294967293U, 0U, 4294967295U, 1U, 4294967293U}, {4294967287U, 0xA556991D, 4294967293U, 0U, 4294967295U, 1U, 4294967293U}}, {{4294967287U, 0xA556991D, 4294967293U, 0U, 4294967295U, 1U, 4294967293U}, {4294967287U, 0xA556991D, 4294967293U, 0U, 4294967295U, 1U, 4294967293U}, {4294967287U, 0xA556991D, 4294967293U, 0U, 4294967295U, 1U, 4294967293U}, {4294967287U, 0xA556991D, 4294967293U, 0U, 4294967295U, 1U, 4294967293U}, {4294967287U, 0xA556991D, 4294967293U, 0U, 4294967295U, 1U, 4294967293U}, {4294967287U, 0xA556991D, 4294967293U, 0U, 4294967295U, 1U, 4294967293U}}, {{4294967287U, 0xA556991D, 4294967293U, 0U, 4294967295U, 1U, 4294967293U}, {4294967287U, 0xA556991D, 4294967293U, 0U, 4294967295U, 1U, 4294967293U}, {4294967287U, 0xA556991D, 4294967293U, 0U, 4294967295U, 1U, 4294967293U}, {4294967287U, 0xA556991D, 4294967293U, 0U, 4294967295U, 1U, 4294967293U}, {4294967287U, 0xA556991D, 4294967293U, 0U, 4294967295U, 1U, 4294967293U}, {4294967287U, 0xA556991D, 4294967293U, 0U, 4294967295U, 1U, 4294967293U}}};
    struct S2 l_246 = {8U,4294967292U};
    struct S0 l_256 = {0U,0x5B64537C,6U,255U,0x59};
    struct S0 l_310 = {1U,0x95B2C431,6U,0xD5,0x87};
    struct S1 *l_342 = (void*)0;
    int32_t **l_349 = (void*)0;
    struct S1 ****l_405 = (void*)0;
    int32_t *l_415 = &g_72.f2;
    uint32_t l_434 = 1U;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_93[i] = &g_92;
    return g_42.f3;
}
int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_5;
    csmith_sink_ = g_6.f0;
    csmith_sink_ = g_6.f1;
    csmith_sink_ = g_6.f2;
    csmith_sink_ = g_6.f3;
    csmith_sink_ = g_6.f4;
    csmith_sink_ = g_6.f5;
    csmith_sink_ = g_6.f6;
    csmith_sink_ = g_6.f7;
    csmith_sink_ = g_18.f0;
    csmith_sink_ = g_18.f1;
    csmith_sink_ = g_42.f0;
    csmith_sink_ = g_42.f1;
    csmith_sink_ = g_42.f2;
    csmith_sink_ = g_42.f3;
    csmith_sink_ = g_42.f4;
    csmith_sink_ = g_66;
    csmith_sink_ = g_72.f0;
    csmith_sink_ = g_72.f1;
    csmith_sink_ = g_72.f2;
    csmith_sink_ = g_72.f3;
    csmith_sink_ = g_72.f4;
    csmith_sink_ = g_72.f5;
    csmith_sink_ = g_72.f6;
    csmith_sink_ = g_72.f7;
    csmith_sink_ = g_102;
    for (i = 0; i < 7; i++)
    {
        csmith_sink_ = g_115[i];
    }
    csmith_sink_ = g_186;
    csmith_sink_ = g_276;
    csmith_sink_ = g_307;
    for (i = 0; i < 5; i++)
    {
        csmith_sink_ = g_344[i];
    }
    csmith_sink_ = g_375;
    csmith_sink_ = g_666.f0;
    csmith_sink_ = g_666.f1;
    csmith_sink_ = g_666.f2;
    csmith_sink_ = g_666.f3;
    csmith_sink_ = g_666.f4;
    csmith_sink_ = g_854;
    csmith_sink_ = g_904.f0;
    csmith_sink_ = g_904.f1;
    csmith_sink_ = g_904.f2;
    csmith_sink_ = g_904.f3;
    csmith_sink_ = g_904.f4;
    csmith_sink_ = g_935;
    csmith_sink_ = g_941.f0;
    csmith_sink_ = g_941.f1;
    csmith_sink_ = g_1211;
    csmith_sink_ = g_1436;
    platform_main_end(0,0);
    return 0;
}
