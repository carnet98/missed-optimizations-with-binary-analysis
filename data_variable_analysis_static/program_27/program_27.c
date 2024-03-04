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
static int32_t g_4 = (-4);
static uint16_t g_9 = 1U;
static uint16_t g_50 = 0x53DD;
static int16_t g_72 = 0xE934;
static uint32_t g_76 = 4294967288U;
static int32_t g_87 = 0x158A35CC;
static uint32_t g_90 = 0U;
static uint16_t g_134 = 0x03B6;
static uint32_t g_135 = 0x4620FE39;
static int8_t g_138 = 0x3A;
static uint8_t g_146 = 0x93;
static uint32_t g_153 = 0xDD0EBFA9;
static uint16_t g_183 = 0x1E1C;
static uint32_t g_196 = 5U;
static int32_t g_297 = (-6);
static uint32_t g_309 = 0x8106815F;
static uint16_t g_330 = 0xFB2D;
static uint32_t g_365 = 0x92A9F23F;
static int8_t g_373 = (-1);
static int16_t g_407 = 0xC023;
static int32_t g_429 = (-4);
static int16_t g_528 = 0x4FF2;
static int32_t g_529 = (-5);
static int32_t g_530 = 0x96AB2E62;
static uint32_t g_531 = 0xFD4E2F48;
static uint8_t g_536 = 0U;
static int32_t g_544 = (-5);
static int16_t g_684 = 2;
static int32_t g_687 = (-8);
static int16_t g_689 = (-1);
static uint16_t g_690 = 65532U;
static int16_t g_723 = 6;
static uint8_t g_742 = 0x22;
static uint32_t g_743 = 0x9E1C7512;
static int8_t func_1(void);
static uint8_t func_10(int16_t p_11, int32_t p_12, uint32_t p_13, uint32_t p_14);
static uint32_t func_19(uint32_t p_20);
static uint16_t func_23(uint8_t p_24, int8_t p_25, uint32_t p_26, uint32_t p_27, uint32_t p_28);
static uint8_t func_32(uint32_t p_33, uint32_t p_34, uint32_t p_35, int16_t p_36, uint16_t p_37);
static uint32_t func_38(int8_t p_39, int8_t p_40, int32_t p_41);
static int32_t func_44(uint32_t p_45, uint8_t p_46, uint8_t p_47, int16_t p_48, int32_t p_49);
static int8_t func_67(uint32_t p_68, uint32_t p_69, int32_t p_70);
static int16_t func_97(uint32_t p_98, uint8_t p_99);
static uint16_t func_120(int32_t p_121, uint16_t p_122);
static int8_t func_1(void)
{
    uint8_t l_541 = 0xAA;
    int32_t l_545 = 0;
    int32_t l_575 = 0xE0C44CD4;
    uint32_t l_594 = 0x10C5DAC7;
    int32_t l_614 = (-1);
    int32_t l_624 = 4;
    uint32_t l_654 = 0x7662D5F0;
    int16_t l_686 = 0xAEC7;
    uint32_t l_707 = 0xCD29130F;
    uint16_t l_713 = 0x6491;
    uint16_t l_788 = 65535U;
    uint32_t l_789 = 0U;
    int32_t l_803 = 1;
    int16_t l_812 = 1;
    if ((((safe_rshift_func_uint16_t_u_u(((0U & g_4) != (safe_add_func_int32_t_s_s((((g_4 ^ (((safe_lshift_func_uint8_t_u_u((g_9 <= ((func_10(((safe_sub_func_int32_t_s_s(((((safe_sub_func_uint8_t_u_u(g_4, (((func_19(g_9) >= (1 > ((g_544 |= (++l_541)) | l_545))) > l_545) | g_4))) && 0x48) , l_545) & 4294967292U), l_545)) , 2), l_545, l_545, g_4) < 8) >= g_9)), 5)) == 1) > 0x2BE98BD8)) <= 0xD243) > l_545), 0xCB852216))), g_528)) != g_9) <= 0x7E))
    {
        for (g_531 = (-21); (g_531 < 44); ++g_531)
        {
            return g_72;
        }
    }
    else
    {
        int32_t l_550 = 1;
        uint32_t l_557 = 4294967295U;
        int32_t l_573 = 0xC481AC09;
        int32_t l_574 = 1;
        uint8_t l_576 = 0xDA;
        int32_t l_577 = 4;
        uint32_t l_655 = 0xB901674D;
        uint16_t l_679 = 0x221D;
        uint16_t l_708 = 65534U;
        int32_t l_796 = 9;
        g_87 ^= g_529;
        g_530 ^= ((safe_lshift_func_int8_t_s_u(((g_87 >= (l_550 &= l_545)) != (safe_mod_func_int32_t_s_s((((safe_mul_func_uint16_t_u_u(((l_557 = 0xBC) == (((safe_rshift_func_int16_t_s_s(((!(l_577 = (((-1) <= l_545) && (((safe_add_func_uint16_t_u_u(g_9, 1)) >= (((((safe_sub_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_s((g_134 = (safe_lshift_func_uint8_t_u_s(((l_574 = ((safe_lshift_func_int16_t_s_s((((safe_add_func_int16_t_s_s((l_575 = (((l_573 = (g_50 &= 0x24C9)) >= l_574) , 0x8306)), l_576)) , l_541) > l_574), 2)) , l_574)) != g_407), g_135))), 7)) && l_545), 249U)) | g_373) == g_373) < g_529) , g_297)) , g_72)))) && l_574), 8)) , 65535U) <= 65532U)), g_90)) | 4294967295U) | l_576), g_429))), l_576)) >= g_153);
        for (g_544 = (-12); (g_544 <= (-23)); --g_544)
        {
            int8_t l_601 = 7;
            int32_t l_613 = (-4);
            int32_t l_656 = 3;
            int32_t l_688 = (-8);
            g_529 = (g_87 ^= (safe_add_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s(g_407, (((5 & ((g_72 &= (((((safe_unary_minus_func_int8_t_s((l_613 = (g_138 &= ((safe_sub_func_int32_t_s_s((safe_mul_func_uint8_t_u_u((((safe_add_func_uint8_t_u_u((+((g_536 = l_594) & ((safe_mod_func_uint16_t_u_u((3 == ((safe_mod_func_uint32_t_u_u(g_529, (safe_add_func_uint16_t_u_u(l_601, l_601)))) , ((safe_mod_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s((~(((g_531 || ((safe_add_func_int8_t_s_s(((safe_lshift_func_int8_t_s_s((g_9 & l_601), l_601)) , l_557), l_550)) && 0xC6AF)) | l_541) || l_575)), 6)), 4U)), l_601)) != g_297))), g_373)) < l_601))), l_550)) < 0xF775) >= g_9), l_601)), l_577)) , (-2)))))) || g_365) , l_613) > l_550) | g_146)) <= l_614)) , 0xE9069BF6) & g_183))), l_614)));
            if (l_574)
                continue;
            if ((((safe_mul_func_int16_t_s_s(((l_573 != (l_614 < (safe_lshift_func_uint8_t_u_s(g_135, (~(((safe_mul_func_uint16_t_u_u((((((-3) ^ g_530) , l_594) , g_330) , (safe_mod_func_uint32_t_u_u(0x29CE98F5, 0x5C01EA24))), 0x307E)) , l_577) < l_575)))))) != g_365), l_576)) != l_624) == g_4))
            {
                int8_t l_657 = 0;
                g_529 &= (g_87 |= g_544);
                g_530 = ((((l_573 , g_528) > g_528) , (safe_lshift_func_int16_t_s_u(0x3A01, (safe_rshift_func_int16_t_s_u((((safe_rshift_func_int16_t_s_s((safe_mod_func_int16_t_s_s((((safe_lshift_func_uint8_t_u_u((((((((safe_mod_func_uint32_t_u_u((safe_add_func_uint8_t_u_u(((g_153 == ((((((l_656 = ((safe_mod_func_uint32_t_u_u((safe_mod_func_int8_t_s_s((~(safe_lshift_func_uint8_t_u_u(0x13, 6))), (safe_lshift_func_int8_t_s_u((((g_330 > ((safe_lshift_func_int8_t_s_u((safe_mul_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((l_654 |= 255U), (((((((((((g_544 > l_613) || 1U) , 0x78) , g_544) ^ 0U) ^ g_297) , 65535U) >= (-7)) & l_594) < g_72) | g_135))), l_613)), 3)) < 0xCC9E6B12)) , l_655) & l_613), 3)))), 0x9D683A84)) & g_135)) & l_624) < 1U) >= 1) != g_72) < 0)) || 8U), 1U)), g_373)) <= l_613) > 249U) , 1U) >= g_297) != 0x299B5ECC) || l_550), l_657)) | g_529) | 0xADE208DB), 0x5D03)), 6)) && g_407) | g_330), g_72))))) == g_330);
            }
            else
            {
                uint8_t l_668 = 246U;
                int32_t l_680 = 0xB4201561;
                int32_t l_685 = 0xB60DB3BF;
                int16_t l_702 = 0xABC9;
                int32_t l_706 = (-1);
                uint16_t l_720 = 0xAD8E;
                int32_t l_790 = 0;
                int32_t l_795 = 1;
                for (g_531 = 0; (g_531 > 36); ++g_531)
                {
                    int32_t l_671 = 0x438C0052;
                    int8_t l_678 = 1;
                    uint32_t l_681 = 1U;
                    int32_t l_719 = 0x34FF5BB2;
                    uint16_t l_724 = 1U;
                    for (l_574 = 0; (l_574 == (-20)); l_574--)
                    {
                        l_614 = ((safe_rshift_func_int8_t_s_s((safe_sub_func_int8_t_s_s(g_309, 253U)), ((safe_rshift_func_int16_t_s_s(l_668, (((((((safe_mod_func_int16_t_s_s((((l_573 &= l_671) , ((0xED | g_529) ^ ((safe_mul_func_int16_t_s_s((safe_mod_func_int32_t_s_s((safe_add_func_int32_t_s_s((((l_613 , 0x22B3BF13) < ((l_545 >= 4294967295U) ^ l_678)) < g_4), g_196)), 0xB6F16CD8)), l_577)) || l_679))) && g_429), 0x7E8C)) < g_528) & g_134) , l_574) <= 0x48B2AE1F) & l_678) != 0))) || l_668))) , 1);
                        l_681++;
                        ++g_690;
                        g_87 |= 1;
                    }
                    if (l_576)
                        break;
                    l_708 = (!(((safe_mul_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(g_530, 8)), ((-1) | 0xA75B7E22))) > (((((g_146--) , ((safe_mul_func_int8_t_s_s((((l_702 = 248U) & (((+(((0x166A && (g_687 | (l_671 = ((l_575 &= g_407) , g_183)))) == (safe_mod_func_int16_t_s_s((l_706 , g_309), (-6)))) , 0x18D10BD9)) > 9U) <= 0x2B)) == 0x7EAE0860), l_707)) < l_656)) < l_654) | g_196) < 0xFE2F)) & g_135));
                    for (l_680 = 2; (l_680 > 2); l_680 = safe_add_func_int8_t_s_s(l_680, 1))
                    {
                        int32_t l_741 = 0;
                        int32_t l_744 = 0;
                        g_529 = (((((safe_mul_func_int8_t_s_s(((l_713--) >= g_531), (g_689 > (safe_rshift_func_int16_t_s_u((safe_unary_minus_func_int8_t_s(l_545)), 8))))) & (7U | 0x27)) && (((g_138 ^= (g_373 = (g_153 ^ 0x1F))) <= g_544) <= g_530)) <= g_407) , g_536);
                        ++l_720;
                        l_724++;
                        l_744 ^= (+(((+(safe_mul_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s(((((-8) >= (safe_add_func_int8_t_s_s((((g_72 <= 1) & (-10)) || (((safe_sub_func_uint8_t_u_u((g_536 = (0x40D9 != ((l_678 < g_146) >= 0x6D2DC129))), (safe_mod_func_uint8_t_u_u((g_742 |= (safe_sub_func_int8_t_s_s((l_741 = ((((l_686 && l_575) & 1U) == g_146) > l_686)), (-7)))), 0xA0)))) | 0x55) >= 0x62456307)), 1U))) , g_330) & (-4)), 0x0CA4)) < l_681), g_743))) == 1U) , g_9));
                    }
                }
                l_545 = ((safe_mul_func_uint16_t_u_u(l_573, (((g_146--) >= (safe_mod_func_int32_t_s_s((-1), (safe_sub_func_uint16_t_u_u((l_601 & (safe_mod_func_int16_t_s_s((g_407 = (-2)), l_708))), ((g_529 , (safe_sub_func_uint16_t_u_u((((safe_rshift_func_int16_t_s_u(l_574, (safe_add_func_int32_t_s_s((l_575 <= ((safe_mod_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((~(safe_add_func_uint16_t_u_u((((-9) <= g_50) > l_624), g_196))), g_373)), g_90)) ^ g_72)), l_685)))) | g_530) , 0x8B41), l_707))) >= g_196)))))) >= l_706))) || l_685);
                if (l_577)
                {
                    return g_723;
                }
                else
                {
                    g_530 = l_668;
                }
                g_530 = (l_577 , ((safe_rshift_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(((!(g_87 | ((safe_mul_func_int16_t_s_s((+g_4), (g_72 = (safe_add_func_uint32_t_u_u((((safe_sub_func_int32_t_s_s(g_134, ((g_536--) == ((safe_add_func_int8_t_s_s((safe_add_func_uint16_t_u_u((safe_add_func_int8_t_s_s(l_788, (g_146 &= (l_789 , l_790)))), ((safe_sub_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u(l_541, (l_707 <= l_656))) & 0xE1C22D52), 65533U)) == 0x8F67))), 1)) , l_713)))) > l_795) < l_656), l_655))))) | l_796))) , g_135), l_541)), g_87)) != l_686));
            }
        }
    }
    l_614 = (safe_mul_func_int8_t_s_s(g_531, (safe_add_func_int32_t_s_s((safe_lshift_func_int8_t_s_s((((l_803 = l_789) > (safe_mod_func_int32_t_s_s(l_654, l_713))) ^ ((safe_sub_func_int16_t_s_s(l_713, 0x25E1)) , ((safe_mul_func_uint16_t_u_u(((g_90 >= (safe_mod_func_int16_t_s_s(l_541, g_689))) < g_530), g_9)) ^ l_812))), g_330)), g_687))));
    return l_654;
}
static uint8_t func_10(int16_t p_11, int32_t p_12, uint32_t p_13, uint32_t p_14)
{
    return p_14;
}
static uint32_t func_19(uint32_t p_20)
{
    uint32_t l_29 = 0x91EE4CFF;
    uint32_t l_55 = 0x1EC8F949;
    int16_t l_73 = 0x9CC1;
    int8_t l_74 = 5;
    int32_t l_75 = 1;
    uint16_t l_197 = 65535U;
    int32_t l_401 = 0x0E83303B;
    int32_t l_508 = 0x49753809;
    int16_t l_521 = (-9);
    int16_t l_527 = 0xFD85;
    int32_t l_534 = 0x1A237E60;
    int32_t l_535 = 3;
    if (((safe_sub_func_int16_t_s_s((func_23(p_20, l_29, ((safe_mul_func_int8_t_s_s((func_32(l_29, func_38(((((g_196 ^= ((safe_rshift_func_int8_t_s_s((func_44(((((p_20 , (((g_50++) && (g_76 = ((safe_sub_func_uint8_t_u_u(l_29, ((l_55 == ((l_75 &= (safe_sub_func_int32_t_s_s(((+(((safe_sub_func_uint8_t_u_u((g_4 ^ ((g_50 = 0xECF5) ^ (safe_mul_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((func_67(g_4, l_55, l_29) ^ l_73), l_74)), l_29)), g_4)))), g_9)) <= 0) || 0)) ^ p_20), 0x6CA138DB))) >= p_20)) < (-1)))) , g_72))) | l_73)) || l_55) & 0xFE) , p_20), g_9, l_55, p_20, g_9) , l_75), g_4)) , l_75)) < g_9) <= p_20) > l_197), g_4, g_4), g_9, g_4, l_55) >= l_73), 0xD5)) > g_9), p_20, g_4) == g_9), l_197)) < p_20))
    {
        int32_t l_380 = (-1);
        int32_t l_392 = 0x09A29ADE;
        g_87 = (l_392 = (((safe_lshift_func_uint8_t_u_u((255U <= ((l_75 = (g_138 |= p_20)) <= ((g_72 = ((g_50 , (((safe_rshift_func_int16_t_s_s((((safe_add_func_uint16_t_u_u(0x78A6, (l_380 = g_90))) && (safe_mod_func_int8_t_s_s(1, ((((safe_mod_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u(p_20, (safe_sub_func_int8_t_s_s(0x89, (safe_add_func_int8_t_s_s((~248U), g_90)))))), l_55)) > p_20) <= g_50) , 0x59)))) && g_50), 4)) && g_309) ^ p_20)) || p_20)) <= g_330))), 5)) ^ 9) != p_20));
    }
    else
    {
        int32_t l_394 = (-1);
        int32_t l_404 = 1;
        int32_t l_455 = 1;
        int32_t l_456 = (-8);
        uint8_t l_497 = 0x2B;
        uint8_t l_526 = 255U;
        if ((!(l_394 = p_20)))
        {
            uint8_t l_397 = 0x85;
            int32_t l_408 = 0;
            int32_t l_411 = 0xFDB41F92;
            l_75 = (l_401 |= ((l_408 = (g_183 >= ((safe_sub_func_int16_t_s_s((((l_75 | 0xEFD7) ^ (l_397 = p_20)) <= (safe_mod_func_uint8_t_u_u((+((((g_373 = (((l_394 ^ (g_309++)) , ((((l_404 = l_394) && (p_20 < (g_72 |= (((g_135 && ((g_87 = (safe_mod_func_int32_t_s_s(g_407, p_20))) < 0xEAAC3ADB)) | g_146) < (-2))))) <= g_138) && 247U)) & 4294967295U)) & 6U) > 1) > g_153)), 7U))), 0x460B)) >= g_153))) ^ 0x55));
            if (p_20)
            {
                return g_134;
            }
            else
            {
                l_401 = 0;
                l_404 = (safe_rshift_func_int8_t_s_s((l_408 = l_55), 0));
            }
            l_404 = (((l_411 &= p_20) , ((l_411 = 6U) == (((g_429 = (g_87 ^= (safe_lshift_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_s(l_74, 6)) , (safe_lshift_func_uint16_t_u_u((l_397 != 0x587263D7), ((g_407 = (safe_lshift_func_int16_t_s_u((p_20 , (safe_rshift_func_int8_t_s_u((safe_mul_func_int16_t_s_s((!l_73), ((safe_rshift_func_int8_t_s_s(l_408, 1)) == (p_20 , l_394)))), g_146))), l_397))) ^ 0x0EBA)))), (-10))), g_373)))) == 0x0EC0A1D0) || 0x128C111F))) < l_408);
        }
        else
        {
            uint16_t l_460 = 0x4F0B;
            g_87 = (safe_lshift_func_uint16_t_u_s((safe_rshift_func_int16_t_s_u((-1), 10)), (safe_sub_func_int32_t_s_s((((l_401 != (safe_unary_minus_func_int16_t_s(((0 > (safe_sub_func_int16_t_s_s(0x4293, (safe_sub_func_uint8_t_u_u((((safe_rshift_func_int16_t_s_u(p_20, (((safe_sub_func_uint8_t_u_u((l_455 &= ((((safe_mul_func_int16_t_s_s((((0x72 <= (((((safe_add_func_uint32_t_u_u((((safe_lshift_func_int16_t_s_u(((safe_lshift_func_uint16_t_u_s(((g_50 , (g_309 = (safe_add_func_uint32_t_u_u(l_404, (++g_153))))) > (((((safe_unary_minus_func_uint16_t_u(g_134)) >= 3U) == l_29) < p_20) , p_20)), 1)) >= 0xAC), g_76)) & l_401) ^ g_330), (-1))) > p_20) == (-8)) | l_460) , l_456)) != 0x8C) == p_20), p_20)) > g_297) , l_460) <= 0xC733)), p_20)) <= p_20) , g_134))) | p_20) , l_55), g_50))))) & l_456)))) , 0xF87219A0) , (-4)), p_20))));
            g_87 = ((l_394 | ((p_20 ^ (l_460 || ((safe_add_func_uint8_t_u_u(g_153, p_20)) < ((p_20 , 0x90) , (g_146 = 0xB6))))) == (safe_mod_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(((safe_add_func_int8_t_s_s(((g_297 = p_20) , 6), 255U)) != g_365), 5)), l_455)) ^ p_20), g_4)))) | 1);
            l_456 |= (((0xEE976597 & (((safe_unary_minus_func_uint32_t_u((safe_add_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_u(((safe_add_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(p_20, (((safe_sub_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(((-6) >= (safe_rshift_func_uint8_t_u_s((p_20 > (~(((safe_mod_func_int16_t_s_s((safe_mod_func_int16_t_s_s(g_138, (safe_add_func_int8_t_s_s((l_55 , l_401), (((-1) <= 1) , 0U))))), l_75)) < l_404) && l_394))), 1))), g_365)), g_135)), g_135)) == l_460) == 0x2C18))), g_407)) >= g_407), l_73)) || (-3)), l_455)))) || 0x78E7992D) > l_455)) <= 0x3E) , p_20);
        }
        l_401 = p_20;
        l_508 ^= (safe_mod_func_int8_t_s_s((((((p_20 && (((l_497 || l_497) ^ (p_20 <= (safe_rshift_func_uint16_t_u_s((((((p_20 , (l_455 = p_20)) != (safe_sub_func_uint32_t_u_u((g_153 |= ((l_404 &= (l_75 |= (g_297 = ((((0 | ((p_20 , (safe_mul_func_int16_t_s_s((safe_add_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_u(l_497, 5)) , 7), p_20)), l_401))) , 0x14)) != 0x438B3DC7) != 4294967290U) & 0xD8)))) , 4294967293U)), p_20))) || 0x3B79B07E) && p_20) || 0x9FD8), g_330)))) == l_73)) == 0xBE0F) , g_330) >= g_146) ^ 0xCB5A17DC), p_20));
        l_404 = (safe_mod_func_uint16_t_u_u(((g_146 = (((((g_153 != (safe_sub_func_uint8_t_u_u(((safe_sub_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(p_20, (g_309 <= (((((((l_508 = (p_20 ^ 0x69A7CB49)) != (!(1 | (l_404 , (+(l_527 = (g_87 = (safe_rshift_func_uint16_t_u_s(((l_521 > (safe_add_func_uint8_t_u_u((((safe_mul_func_int16_t_s_s(l_401, g_135)) > g_153) ^ (-6)), p_20))) == l_526), l_521))))))))) >= g_4) == p_20) & l_456) >= g_429) <= 1U)))), l_55)) , g_153), 1U))) , p_20) >= p_20) && 0xBC) <= 255U)) | 0x0B), p_20));
    }
    g_531--;
    g_536--;
    l_401 = (safe_mod_func_int32_t_s_s((l_75 = (g_529 = p_20)), ((-6) || ((g_138 != l_55) != 0xAF597063))));
    return p_20;
}
static uint16_t func_23(uint8_t p_24, int8_t p_25, uint32_t p_26, uint32_t p_27, uint32_t p_28)
{
    uint32_t l_300 = 0xDDB64655;
    int32_t l_306 = 0xCD69BB4E;
    int32_t l_315 = 1;
    int32_t l_317 = 0;
    uint32_t l_339 = 0x05617FD7;
    for (g_72 = 0; (g_72 == (-4)); --g_72)
    {
        int8_t l_293 = 0x49;
        int32_t l_310 = 0xC5D37358;
        int32_t l_313 = (-1);
        int32_t l_314 = 1;
        int32_t l_316 = 0xF71F425C;
        int32_t l_329 = 0xDFDB6566;
        uint8_t l_372 = 0U;
        g_87 |= 2;
        g_87 &= ((((7 > g_134) , (l_310 ^= (((((safe_mul_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((g_138 = (g_50 , 0xCC)), 3)), 12)), l_293)) >= ((~(((g_297 = (safe_rshift_func_uint8_t_u_u(254U, 2))) , (safe_mod_func_int32_t_s_s(l_300, (~((safe_sub_func_int32_t_s_s((safe_add_func_int32_t_s_s(0x72CC0702, ((--p_26) | 0xFAA13AD1))), p_24)) || l_293))))) || g_297)) <= l_293)) & p_28) && p_28) | g_309))) || l_306) || p_27);
        l_314 = ((((safe_sub_func_uint32_t_u_u(((++g_183) , (g_309 = (l_316 ^ (safe_add_func_int16_t_s_s(g_134, (g_330 = (255U && ((0x434B != (p_28 , ((safe_lshift_func_int8_t_s_u(((((safe_lshift_func_uint16_t_u_s((+((~g_134) == (0U && ((~((p_25 | (g_4 , p_27)) == 0x94F5)) == p_25)))), l_329)) == p_25) , 0xE907) | l_293), g_153)) < p_28))) && g_153)))))))), g_90)) & g_90) , 7) > g_4);
        l_315 = (safe_rshift_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(((1 ^ (p_25 = (safe_mod_func_int8_t_s_s((l_310 |= ((g_373 |= ((g_153 = (p_26 = ((safe_add_func_uint16_t_u_u((l_339--), (((((safe_sub_func_int16_t_s_s(((g_87 ^= (safe_lshift_func_uint16_t_u_s((g_330--), 5))) < 4294967295U), (safe_mul_func_int8_t_s_s((safe_lshift_func_int16_t_s_u((l_329 = (((safe_sub_func_uint16_t_u_u(((+((safe_add_func_uint32_t_u_u(((0x0A9B597B & (safe_lshift_func_uint8_t_u_s((((((~(((((safe_add_func_uint16_t_u_u(((4 || (+(((g_365 = 0x32A5C887) || ((++g_309) || (((safe_rshift_func_uint16_t_u_s(0x3727, 0)) || 0x0126B19A) == ((p_24 = ((p_28 && (l_316 = (safe_mod_func_int16_t_s_s((((l_313 & 3) & g_72) , 0xCACB), g_50)))) == g_134)) < g_196)))) && l_306))) != g_90), l_317)) && 0) <= 7) && 0x9E) || l_306)) ^ l_372) , 1) < p_28) == g_90), l_372))) ^ g_9), l_314)) >= g_90)) || g_50), g_183)) || 0x63B6ED5B) <= g_297)), 6)), l_300)))) <= g_50) < p_26) < 0xBADB) & p_27))) < 6U))) && p_24)) , 0xDC)), 0x92)))) || l_300), (-4))), l_300));
    }
    return l_306;
}
static uint8_t func_32(uint32_t p_33, uint32_t p_34, uint32_t p_35, int16_t p_36, uint16_t p_37)
{
    uint16_t l_284 = 0xEDE2;
    return l_284;
}
static uint32_t func_38(int8_t p_39, int8_t p_40, int32_t p_41)
{
    uint32_t l_200 = 0x5F2194A6;
    int32_t l_211 = 0;
    int32_t l_236 = 1;
    uint32_t l_283 = 1U;
    if ((p_40 >= ((safe_lshift_func_int8_t_s_u((((l_200 && l_200) || (p_39 > ((l_200 || (safe_rshift_func_uint8_t_u_s(((~(safe_sub_func_int8_t_s_s((((g_153 = l_200) | ((~(l_211 = ((g_87 = p_40) , (((safe_mod_func_int16_t_s_s((safe_mul_func_int8_t_s_s((l_200 > (g_9 > (-1))), l_200)), 8)) && 0x7C88) , p_40)))) ^ g_183)) , 3), 0xD2))) | 0x08D4), 6))) == l_200))) , g_146), 6)) | g_134)))
    {
        uint32_t l_212 = 0x7EFDBF38;
        l_212--;
    }
    else
    {
        int16_t l_234 = 0x021B;
        int32_t l_235 = (-4);
        l_236 |= (((safe_sub_func_uint32_t_u_u(((~(0xCC1DD9AC & ((safe_lshift_func_int8_t_s_s((((((!(((safe_mod_func_uint8_t_u_u((((safe_mod_func_int32_t_s_s((g_183 | (safe_mod_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(0, (0x81EA || (((((safe_mul_func_int16_t_s_s((+((0x14D1 > (0x36BF >= 65535U)) >= (g_146--))), (((l_211 = ((4294967292U || ((((((l_234 = (0x55 <= 0x6C)) >= 65528U) == l_211) , g_196) <= l_235) , 0x84810435)) , 0x7B6A1989)) , g_196) < g_90))) == 9U) && 0x276F) & p_41) >= g_76)))), l_235))), l_200)) ^ 0x40) != g_87), 3U)) <= p_40) , 0xFE33)) == p_40) == p_39) , g_9) < p_40), g_76)) & l_235))) , 0x8359BE37), g_138)) && 0xECDC9E86) < 1);
        l_235 = (((l_200 || (safe_rshift_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(g_87, 8U)), (safe_unary_minus_func_int16_t_s((safe_rshift_func_uint16_t_u_u(((safe_add_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_u((l_236 = (safe_lshift_func_int8_t_s_s((((!l_235) , g_87) == g_138), (+(safe_add_func_int32_t_s_s((l_211 &= (!(1U && l_236))), (0xE0309361 >= (-1)))))))), 0)) && 0x30B0), l_235)) != g_90), 13))))))) >= 1U) < l_235);
        g_87 = g_90;
        for (g_183 = (-29); (g_183 <= 49); g_183++)
        {
            int32_t l_261 = 0;
            int32_t l_262 = 0;
            int32_t l_263 = 0x3933B6CD;
            l_211 = (((safe_sub_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s(((l_263 = (l_262 = (g_135 ^ (l_261 = ((g_146 = 0xA2) == l_235))))) , ((((safe_lshift_func_int16_t_s_u(((l_236 |= (p_40 == (safe_rshift_func_uint16_t_u_u(g_76, l_261)))) , (((((((safe_sub_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_u((++g_50), ((((safe_sub_func_int16_t_s_s((g_72 &= ((+((g_196 < (safe_unary_minus_func_uint8_t_u(l_236))) & (((safe_lshift_func_uint8_t_u_s((l_263 |= ((l_261 = (safe_mul_func_uint16_t_u_u((~(l_261 , 0x5F)), g_196))) | l_211)), 5)) | g_146) && l_235))) , g_153)), g_153)) >= p_41) >= p_41) != g_90))) > 3), l_211)) , 0x3B00) > 5U) >= 0x971A) == 0x5CFCB859) , 0x55D90424) | l_283)), 2)) && 0x90C5) ^ l_262) | p_39)), p_40)) , 65535U), 1U)) > l_200) , (-1));
        }
    }
    return p_40;
}
static int32_t func_44(uint32_t p_45, uint8_t p_46, uint8_t p_47, int16_t p_48, int32_t p_49)
{
    int32_t l_81 = 1;
    int32_t l_86 = (-3);
    int32_t l_88 = (-1);
    int32_t l_89 = 6;
    int32_t l_178 = 0xE296350F;
    int32_t l_188 = 9;
    for (p_46 = 0; (p_46 < 14); ++p_46)
    {
        int16_t l_79 = 1;
        int32_t l_80 = (-3);
        int32_t l_82 = 1;
        int32_t l_83 = 0;
        int32_t l_84 = (-1);
        int32_t l_85 = 4;
        --g_90;
        for (g_76 = 0; (g_76 >= 12); g_76 = safe_add_func_uint8_t_u_u(g_76, 1))
        {
            int32_t l_103 = (-1);
            int32_t l_104 = 0x206E71D5;
            int32_t l_152 = (-8);
            int32_t l_168 = (-1);
            if ((g_134 ^= func_67((safe_mod_func_int32_t_s_s((((((func_97((((((l_89 = (g_4 , ((~g_4) && 0x320E))) < (safe_add_func_uint16_t_u_u((l_103 , ((l_88 < g_76) || (l_104 |= (l_82 ^= l_86)))), 65534U))) || g_87) || 3) , 0x74A76864), l_88) | 1) <= 5) != l_81) >= l_85) , p_49), (-8))), g_50, g_4)))
            {
                uint32_t l_143 = 4U;
                int32_t l_149 = (-1);
                g_87 = ((p_47 < (p_48 ^= ((g_72 >= 4294967293U) == ((((g_76 , p_47) || (g_138 |= (--g_135))) < (((g_87 & (safe_lshift_func_int8_t_s_s((((g_134 && (safe_rshift_func_int16_t_s_s(((l_143 >= (safe_add_func_uint16_t_u_u((((((g_146++) > ((l_104 , p_45) | 0x5AF9)) > 0xCA0F) , 0x91) > l_103), l_103))) >= l_143), 1))) & 255U) < 249U), g_50))) & l_149) != l_104)) | l_89)))) >= p_45);
                for (l_89 = 6; (l_89 == 25); l_89 = safe_add_func_int8_t_s_s(l_89, 5))
                {
                    l_104 = l_152;
                    if (p_46)
                        break;
                    ++g_153;
                }
            }
            else
            {
                int16_t l_161 = 5;
                l_152 = (safe_add_func_uint32_t_u_u(((safe_lshift_func_int16_t_s_s(1, (+(g_76 != 4294967295U)))) ^ (l_161 ^= 0xDA28E2A2)), 4294967295U));
                g_87 = (l_83 <= ((l_103 , ((((safe_mul_func_uint16_t_u_u(1U, ((((safe_sub_func_uint8_t_u_u((l_84 |= (((safe_rshift_func_uint16_t_u_u(l_88, g_9)) ^ l_168) < (((l_82 = 0xE765) < (((safe_mul_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(6U, (l_86 = (((((((safe_mod_func_uint16_t_u_u((((safe_mul_func_uint8_t_u_u((safe_unary_minus_func_uint8_t_u(l_88)), l_80)) ^ p_47) || 0), l_161)) ^ l_178) || 0x6E19) >= g_50) , 0xF159) == p_48) & p_46)))), g_50)) , l_79) , (-1))) > 3))), 0x21)) > 4294967295U) < (-10)) ^ l_81))) >= 0xD39C) && l_81) | p_47)) & g_153));
            }
        }
    }
    g_87 &= ((((l_89 ^ (safe_mul_func_uint8_t_u_u(g_153, (safe_mul_func_uint8_t_u_u((g_183 |= (l_88 = g_146)), ((safe_mul_func_int8_t_s_s(((l_188 |= ((l_86 &= 0xC12C) != (safe_rshift_func_int16_t_s_u(g_90, 2)))) && (l_86 |= (safe_lshift_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_s(p_47, (((+(safe_mod_func_uint32_t_u_u(((p_48 == ((l_188 = l_81) ^ (0xD000 && g_153))) <= l_81), p_49))) | 0U) != l_89))) && l_89), 8)))), g_135)) , p_49)))))) & p_45) <= l_178) , 0xB41A0BB3);
    return g_4;
}
static int8_t func_67(uint32_t p_68, uint32_t p_69, int32_t p_70)
{
    uint8_t l_71 = 255U;
    g_72 = (p_68 <= (l_71 = (0U < 0)));
    return l_71;
}
static int16_t func_97(uint32_t p_98, uint8_t p_99)
{
    uint32_t l_105 = 1U;
    int32_t l_127 = 1;
    int32_t l_131 = 0xC8947EB4;
    int32_t l_132 = 0x6B1C03A7;
    int32_t l_133 = (-1);
    ++l_105;
    l_133 &= ((+(((safe_mul_func_uint8_t_u_u(4U, g_4)) & ((l_105 | (0x03 ^ func_67((g_90 = func_67(((safe_rshift_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(l_105, ((func_67((safe_mod_func_uint32_t_u_u((((p_99 , (l_132 = (l_131 = (func_67((0xEFCBABA1 | ((+(safe_mul_func_int8_t_s_s(((func_120((((l_127 = (safe_mod_func_uint32_t_u_u((((safe_mod_func_uint16_t_u_u((((l_105 && ((-4) == p_98)) , 0xB2FD) >= p_99), l_105)) , l_105) <= p_99), 4294967295U))) | 0xEE841A11) | g_72), g_50) ^ 0x2BD5) == l_105), p_99))) == 0x4FC3DD16)), l_105, g_76) < p_99)))) ^ p_99) < p_99), g_4)), g_76, l_105) | p_98) >= p_99))), 1)) < 1U), p_99, p_99)), p_99, p_99))) , p_98)) , l_131)) && g_87);
    return g_90;
}
static uint16_t func_120(int32_t p_121, uint16_t p_122)
{
    uint32_t l_128 = 1U;
    l_128++;
    return g_90;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_4;
    csmith_sink_ = g_9;
    csmith_sink_ = g_50;
    csmith_sink_ = g_72;
    csmith_sink_ = g_76;
    csmith_sink_ = g_87;
    csmith_sink_ = g_90;
    csmith_sink_ = g_134;
    csmith_sink_ = g_135;
    csmith_sink_ = g_138;
    csmith_sink_ = g_146;
    csmith_sink_ = g_153;
    csmith_sink_ = g_183;
    csmith_sink_ = g_196;
    csmith_sink_ = g_297;
    csmith_sink_ = g_309;
    csmith_sink_ = g_330;
    csmith_sink_ = g_365;
    csmith_sink_ = g_373;
    csmith_sink_ = g_407;
    csmith_sink_ = g_429;
    csmith_sink_ = g_528;
    csmith_sink_ = g_529;
    csmith_sink_ = g_530;
    csmith_sink_ = g_531;
    csmith_sink_ = g_536;
    csmith_sink_ = g_544;
    csmith_sink_ = g_684;
    csmith_sink_ = g_687;
    csmith_sink_ = g_689;
    csmith_sink_ = g_690;
    csmith_sink_ = g_723;
    csmith_sink_ = g_742;
    csmith_sink_ = g_743;
    platform_main_end(0,0);
    return 0;
}
