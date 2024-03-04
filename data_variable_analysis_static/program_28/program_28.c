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
static int32_t g_3 = 1L;
static int32_t g_19 = 1L;
static int32_t g_23 = 0x874B28EDL;
static int16_t g_75 = 4L;
static int32_t *g_105 = (void*)0;
static int32_t **g_104 = &g_105;
static uint16_t g_156 = 0x4A2BL;
static uint32_t g_160 = 1UL;
static int32_t g_177 = 0xDC7DF631L;
static int32_t g_179 = 1L;
static int32_t g_216 = 0x83AD51ACL;
static int16_t g_229 = 0x877AL;
static int32_t g_285 = 1L;
static int16_t g_295 = 0x7ECAL;
static uint32_t g_302 = 1UL;
static uint8_t g_324 = 4UL;
static uint8_t g_326 = 255UL;
static int8_t g_337 = 0x52L;
static int8_t g_370 = 0x2EL;
static int16_t g_372 = 0x1D0AL;
static int32_t g_411 = 0xD540DA22L;
static uint16_t g_439 = 0UL;
static uint32_t g_494 = 0xF50FCE14L;
static uint32_t g_496 = 1UL;
static int16_t g_695 = 2L;
static int32_t g_715 = (-3L);
static int16_t g_723 = 0xB65AL;
static uint32_t g_741 = 0xDBB6B75FL;
static int16_t *g_749 = &g_372;
static int16_t ***g_772 = (void*)0;
static int16_t ****g_771 = &g_772;
static uint16_t *g_796 = &g_156;
static uint16_t **g_795 = &g_796;
static uint16_t ***g_794 = &g_795;
static uint16_t ****g_793 = &g_794;
static uint32_t g_825 = 18446744073709551615UL;
static int8_t func_1(void);
static uint16_t func_14(int32_t * p_15, int32_t * p_16);
static int32_t func_65(int32_t * p_66, uint16_t p_67, int16_t p_68);
static int32_t * func_69(int8_t p_70, uint32_t p_71, int32_t * p_72, uint8_t p_73, uint16_t p_74);
static int32_t * func_80(uint16_t p_81, int32_t ** p_82, uint16_t p_83);
static int32_t * func_87(int32_t * p_88);
static int32_t * func_89(int32_t ** p_90, int32_t * p_91, uint32_t p_92);
static uint16_t func_95(int8_t p_96, int32_t ** p_97);
static int16_t func_98(int16_t p_99, uint8_t p_100, int32_t ** p_101, int16_t p_102, int32_t * p_103);
static int32_t func_109(int32_t * p_110, int32_t * p_111, uint16_t p_112, int16_t p_113);
static int8_t func_1(void)
{
    int32_t *l_2 = &g_3;
    int32_t *l_4 = (void*)0;
    int32_t *l_5 = &g_3;
    int32_t *l_6 = &g_3;
    int32_t *l_7 = &g_3;
    int32_t *l_8 = &g_3;
    uint8_t l_9 = 250UL;
    int32_t l_17 = 1L;
    int32_t *l_18 = (void*)0;
    int32_t l_818 = 1L;
    l_9++;
    for (g_3 = 29; (g_3 < 27); g_3--)
    {
        int8_t l_811 = 0x4BL;
        l_811 ^= (func_14(l_2, (l_17 , l_18)) < 0xF6C8L);
        for (g_494 = 13; (g_494 != 11); --g_494)
        {
            int16_t *l_814 = &g_295;
            int32_t *l_815 = &g_177;
            (*g_104) = func_89(&l_6, (((*l_814) = (&g_741 == (void*)0)) , l_815), (safe_mul_func_uint16_t_u_u((9L ^ (l_818 , 0xCFL)), (((safe_rshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s((0UL != (((safe_mod_func_uint16_t_u_u(((*g_796) = g_825), (-8L))) && 0xDD40L) && l_811)), 0)), 11)) < 0xBD161B3EL) || (*l_5)))));
        }
    }
    ((void) sizeof ((g_749 == 0 || g_749 == &g_372) ? 1 : 0), __extension__ ({ if (g_749 == 0 || g_749 == &g_372) ; else __assert_fail ("g_749 == 0 || g_749 == &g_372", "/tmp/tmpt6quxc4s.c", 100, __extension__ __PRETTY_FUNCTION__); }));
    return g_741;
}
static uint16_t func_14(int32_t * p_15, int32_t * p_16)
{
    int32_t l_28 = (-1L);
    int32_t l_45 = 0L;
    int32_t l_51 = 0x51F0EF2FL;
    int32_t l_54 = 0xC4EB0A11L;
    uint32_t l_62 = 5UL;
    int32_t l_708 = 1L;
    int32_t l_717 = 1L;
    int16_t *l_746 = (void*)0;
    int16_t **l_770 = &l_746;
    int16_t ***l_769 = &l_770;
    int16_t ****l_768 = &l_769;
    uint16_t l_775 = 65535UL;
    int8_t l_809 = (-7L);
    int32_t *l_810 = &g_19;
    for (g_19 = (-14); (g_19 != (-26)); g_19--)
    {
        int32_t *l_22 = &g_23;
        int32_t *l_24 = &g_23;
        int32_t *l_25 = &g_23;
        int32_t *l_26 = &g_23;
        int32_t *l_27 = &g_23;
        int32_t *l_29 = &g_23;
        int32_t *l_30 = &g_23;
        int32_t *l_31 = &g_23;
        int32_t *l_32 = &g_23;
        int32_t *l_33 = &g_23;
        int32_t *l_34 = (void*)0;
        int32_t *l_35 = (void*)0;
        int32_t *l_36 = (void*)0;
        int32_t *l_37 = &g_23;
        int32_t *l_38 = (void*)0;
        int32_t *l_39 = &g_23;
        int32_t *l_40 = &g_23;
        int32_t *l_41 = &g_23;
        int32_t *l_42 = (void*)0;
        int32_t *l_43 = &g_23;
        int32_t *l_44 = &g_23;
        int32_t *l_46 = &g_23;
        int32_t *l_47 = &l_45;
        int32_t *l_48 = &l_45;
        int32_t *l_49 = &g_23;
        int32_t *l_50 = &l_45;
        int32_t *l_52 = &l_45;
        int32_t *l_53 = &l_45;
        int32_t *l_55 = &l_45;
        int32_t *l_56 = &l_54;
        int32_t *l_57 = (void*)0;
        int32_t *l_58 = &l_54;
        int32_t *l_59 = &l_51;
        int32_t *l_60 = &l_45;
        int32_t *l_61 = &l_51;
        int32_t **l_76 = (void*)0;
        int32_t **l_77 = &l_36;
        int32_t **l_78 = &l_55;
        int32_t l_79 = (-8L);
        int32_t l_683 = 6L;
        int32_t l_713 = (-1L);
        int32_t l_731 = 0L;
        uint32_t l_753 = 0xF5ADEBA1L;
        uint32_t *l_762 = &g_741;
        ++l_62;
        if (func_65(func_69(g_3, (g_75 &= 18446744073709551615UL), ((*l_77) = (void*)0), (*l_40), (((p_16 == ((*l_78) = &g_19)) >= (0UL & (g_19 , l_79))) > l_62)), (*l_56), g_3))
        {
            int32_t *l_655 = &l_51;
            int32_t *l_656 = &g_177;
            int32_t *l_657 = &g_23;
            int32_t *l_658 = &l_51;
            int32_t *l_659 = (void*)0;
            int32_t *l_660 = &g_216;
            int32_t *l_661 = &g_177;
            int32_t *l_662 = &l_79;
            int32_t *l_663 = &g_23;
            int32_t *l_664 = (void*)0;
            int32_t *l_665 = &l_54;
            int32_t *l_666 = &l_79;
            int32_t *l_667 = (void*)0;
            int32_t *l_668 = &g_179;
            int32_t *l_669 = &l_51;
            int32_t *l_670 = &g_216;
            int32_t *l_671 = &g_179;
            int32_t *l_672 = &l_79;
            int32_t *l_673 = (void*)0;
            int32_t *l_674 = &l_54;
            int32_t *l_675 = &l_54;
            int32_t *l_676 = &g_177;
            int32_t *l_677 = &g_216;
            int32_t *l_678 = &l_54;
            int32_t *l_679 = &g_177;
            int32_t *l_680 = &g_23;
            int32_t *l_681 = &g_216;
            int32_t *l_682 = &g_216;
            int32_t *l_684 = &g_177;
            int32_t *l_685 = &g_177;
            int32_t *l_686 = &l_51;
            int32_t l_687 = 0x5743C387L;
            int32_t *l_688 = &g_179;
            int32_t *l_689 = &l_79;
            int32_t *l_690 = &g_177;
            int32_t l_691 = 7L;
            int32_t *l_692 = &g_23;
            int32_t *l_693 = &l_54;
            int32_t *l_694 = &l_691;
            int32_t *l_696 = &g_216;
            int32_t *l_697 = &l_687;
            int32_t *l_698 = &g_216;
            int32_t *l_699 = &g_23;
            int32_t *l_700 = &l_691;
            int32_t *l_701 = (void*)0;
            int32_t *l_702 = &l_79;
            int32_t l_703 = 0xF27F65B8L;
            int32_t *l_704 = &g_177;
            int32_t *l_705 = &l_51;
            int32_t *l_706 = &l_683;
            int32_t *l_707 = &l_691;
            int32_t *l_709 = &l_683;
            int32_t *l_710 = &l_54;
            int32_t *l_711 = &l_683;
            int32_t *l_712 = &l_45;
            int32_t *l_714 = &l_687;
            int32_t *l_716 = &g_216;
            int32_t *l_718 = (void*)0;
            int32_t *l_719 = &l_54;
            int32_t *l_720 = &l_708;
            int32_t *l_721 = &g_179;
            int32_t *l_722 = &l_54;
            int32_t *l_724 = &l_687;
            int32_t *l_725 = (void*)0;
            int32_t *l_726 = &l_691;
            int32_t *l_727 = &l_45;
            int32_t *l_728 = &l_691;
            int32_t *l_729 = &l_51;
            int32_t *l_730 = (void*)0;
            int32_t *l_732 = (void*)0;
            int32_t *l_733 = &l_691;
            int32_t *l_734 = &l_79;
            int32_t *l_735 = &l_713;
            int32_t *l_736 = &g_23;
            int32_t *l_737 = &l_687;
            int32_t *l_738 = &l_731;
            int32_t *l_739 = (void*)0;
            int32_t *l_740 = &g_23;
            int16_t **l_747 = &l_746;
            int16_t **l_748 = (void*)0;
            int32_t ***l_752 = &l_78;
            int16_t ***l_764 = &l_747;
            int16_t ****l_763 = &l_764;
            for (g_439 = 0; (g_439 >= 42); g_439 = safe_add_func_int32_t_s_s(g_439, 4))
            {
                if ((*p_15))
                    break;
                return (*l_46);
            }
            --g_741;
            (*l_688) = (safe_mul_func_uint8_t_u_u((&g_723 == (g_749 = ((*l_747) = l_746))), (((g_179 , 65535UL) | ((safe_mul_func_uint16_t_u_u((((*l_752) = ((*l_685) , &l_34)) != (void*)0), (l_753 = 0xDADAL))) & (safe_mod_func_uint16_t_u_u((l_51 ^ l_45), 0x22A5L)))) & (*l_665))));
            ((void) sizeof ((g_749 == 0) ? 1 : 0), __extension__ ({ if (g_749 == 0) ; else __assert_fail ("g_749 == 0", "/tmp/tmpt6quxc4s.c", 267, __extension__ __PRETTY_FUNCTION__); }));
            ((void) sizeof ((l_78 == &l_34) ? 1 : 0), __extension__ ({ if (l_78 == &l_34) ; else __assert_fail ("l_78 == &l_34", "/tmp/tmpt6quxc4s.c", 268, __extension__ __PRETTY_FUNCTION__); }));
            for (l_691 = 10; (l_691 < 25); ++l_691)
            {
                int16_t *****l_765 = (void*)0;
                int16_t *****l_766 = (void*)0;
                int16_t *****l_767 = &l_763;
                int32_t l_773 = 2L;
                int32_t l_774 = 0x38DB97C4L;
                for (g_216 = (-3); (g_216 == (-19)); g_216 = safe_sub_func_int8_t_s_s(g_216, 1))
                {
                    int16_t l_760 = (-1L);
                    (*l_56) = (*l_662);
                    (*l_77) = (l_760 , (*g_104));
                    (**l_752) = func_87((*l_77));
                }
                (*l_735) |= ((((((~((((*l_697) = 6L) >= (((((l_762 = &g_496) == (void*)0) >= (g_496 != (l_773 |= ((l_768 = ((*l_767) = ((g_23 , (l_763 != ((((l_708 & (l_54 == l_28)) & 1UL) , 255UL) , (void*)0))) , (void*)0))) == g_771)))) || l_773) || 0x50F9L)) < (*p_15))) | l_774) > g_179) , (-1L)) ^ (*l_720)) , l_775);
                ((void) sizeof ((l_762 == &g_496) ? 1 : 0), __extension__ ({ if (l_762 == &g_496) ; else __assert_fail ("l_762 == &g_496", "/tmp/tmpt6quxc4s.c", 285, __extension__ __PRETTY_FUNCTION__); }));
                ((void) sizeof ((l_763 == 0) ? 1 : 0), __extension__ ({ if (l_763 == 0) ; else __assert_fail ("l_763 == 0", "/tmp/tmpt6quxc4s.c", 286, __extension__ __PRETTY_FUNCTION__); }));
                ((void) sizeof ((l_768 == 0) ? 1 : 0), __extension__ ({ if (l_768 == 0) ; else __assert_fail ("l_768 == 0", "/tmp/tmpt6quxc4s.c", 287, __extension__ __PRETTY_FUNCTION__); }));
            }
            ((void) sizeof ((l_762 == &g_496 || l_762 == &g_741) ? 1 : 0), __extension__ ({ if (l_762 == &g_496 || l_762 == &g_741) ; else __assert_fail ("l_762 == &g_496 || l_762 == &g_741", "/tmp/tmpt6quxc4s.c", 290, __extension__ __PRETTY_FUNCTION__); }));
            ((void) sizeof ((l_763 == 0 || l_763 == &l_764) ? 1 : 0), __extension__ ({ if (l_763 == 0 || l_763 == &l_764) ; else __assert_fail ("l_763 == 0 || l_763 == &l_764", "/tmp/tmpt6quxc4s.c", 291, __extension__ __PRETTY_FUNCTION__); }));
        }
        else
        {
            int32_t l_776 = 0xE6FC17ADL;
            uint16_t l_777 = 1UL;
            int8_t *l_792 = &g_337;
            uint16_t *****l_797 = &g_793;
            l_777++;
            (*l_25) = ((*l_48) = ((safe_mod_func_int32_t_s_s(((*l_61) |= (safe_mul_func_uint8_t_u_u((((safe_add_func_uint16_t_u_u(l_777, g_285)) == (*l_48)) && 0x3908D176L), ((*l_792) = (safe_mod_func_uint8_t_u_u(g_723, (3UL && ((((safe_rshift_func_int16_t_s_s((g_439 < l_776), (safe_lshift_func_int8_t_s_u((*l_32), 3)))) , 0x8AL) == 0xE0L) , l_776)))))))), g_75)) != l_708));
            (*l_797) = g_793;
            return l_777;
        }
        ((void) sizeof ((l_55 == &g_19) ? 1 : 0), __extension__ ({ if (l_55 == &g_19) ; else __assert_fail ("l_55 == &g_19", "/tmp/tmpt6quxc4s.c", 305, __extension__ __PRETTY_FUNCTION__); }));
        ((void) sizeof ((l_78 == &l_34) ? 1 : 0), __extension__ ({ if (l_78 == &l_34) ; else __assert_fail ("l_78 == &l_34", "/tmp/tmpt6quxc4s.c", 306, __extension__ __PRETTY_FUNCTION__); }));
        ((void) sizeof ((g_749 == 0) ? 1 : 0), __extension__ ({ if (g_749 == 0) ; else __assert_fail ("g_749 == 0", "/tmp/tmpt6quxc4s.c", 307, __extension__ __PRETTY_FUNCTION__); }));
        ((void) sizeof ((l_762 == &g_496 || l_762 == &g_741) ? 1 : 0), __extension__ ({ if (l_762 == &g_496 || l_762 == &g_741) ; else __assert_fail ("l_762 == &g_496 || l_762 == &g_741", "/tmp/tmpt6quxc4s.c", 308, __extension__ __PRETTY_FUNCTION__); }));
    }
    ((void) sizeof ((l_768 == 0 || l_768 == &l_769) ? 1 : 0), __extension__ ({ if (l_768 == 0 || l_768 == &l_769) ; else __assert_fail ("l_768 == 0 || l_768 == &l_769", "/tmp/tmpt6quxc4s.c", 311, __extension__ __PRETTY_FUNCTION__); }));
    (*g_104) = (void*)0;
    (*l_810) |= (safe_lshift_func_uint8_t_u_s((safe_add_func_int32_t_s_s(((g_370 ^= (~((safe_mul_func_uint16_t_u_u((--(**g_795)), ((((&g_295 == ((*p_15) , (*l_770))) <= l_28) , (*p_15)) <= 0L))) , (safe_sub_func_uint32_t_u_u((((*l_769) = (void*)0) != &l_746), (*p_15)))))) && l_775), l_809)), 2));
    ((void) sizeof ((l_770 == 0) ? 1 : 0), __extension__ ({ if (l_770 == 0) ; else __assert_fail ("l_770 == 0", "/tmp/tmpt6quxc4s.c", 315, __extension__ __PRETTY_FUNCTION__); }));
    return (*l_810);
}
static int32_t func_65(int32_t * p_66, uint16_t p_67, int16_t p_68)
{
    uint8_t l_546 = 0UL;
    uint16_t *l_557 = &g_439;
    uint16_t **l_556 = &l_557;
    uint16_t ***l_555 = &l_556;
    uint16_t ****l_554 = &l_555;
    int32_t l_560 = 0x7922EA5CL;
    int32_t *l_561 = &g_179;
    int32_t *l_562 = &g_23;
    int32_t *l_563 = &g_216;
    int32_t *l_564 = &g_23;
    int32_t *l_565 = &l_560;
    int32_t *l_566 = &l_560;
    int32_t *l_567 = &g_179;
    int32_t l_568 = (-5L);
    int32_t *l_569 = (void*)0;
    int32_t *l_570 = (void*)0;
    int32_t *l_571 = &g_23;
    int32_t *l_572 = &g_216;
    int32_t *l_573 = (void*)0;
    int32_t *l_574 = (void*)0;
    int32_t *l_575 = &g_23;
    int32_t *l_576 = &g_177;
    int32_t *l_577 = &g_177;
    int32_t *l_578 = &g_177;
    int32_t *l_579 = &g_216;
    int32_t *l_580 = &g_23;
    int32_t *l_581 = &g_177;
    int32_t *l_582 = &l_568;
    int32_t *l_583 = &g_177;
    int32_t *l_584 = (void*)0;
    int32_t l_585 = 0x0A9F1085L;
    int32_t *l_586 = (void*)0;
    int32_t *l_587 = &l_568;
    int32_t *l_588 = &l_568;
    int32_t *l_589 = &l_568;
    int32_t *l_590 = (void*)0;
    int32_t *l_591 = (void*)0;
    int32_t l_592 = 0xD21812B4L;
    int32_t *l_593 = &g_23;
    int32_t l_594 = 0xBB856073L;
    int32_t *l_595 = &g_216;
    int32_t *l_596 = &l_568;
    int32_t *l_597 = &g_177;
    int32_t *l_598 = &l_594;
    int32_t *l_599 = &g_179;
    int32_t l_600 = (-6L);
    int32_t *l_601 = &l_600;
    int32_t *l_602 = &g_23;
    int32_t *l_603 = &l_600;
    int32_t *l_604 = (void*)0;
    int32_t *l_605 = &l_560;
    int32_t *l_606 = &l_594;
    int32_t *l_607 = &l_594;
    int32_t *l_608 = (void*)0;
    int32_t *l_609 = &l_600;
    int32_t *l_610 = &g_179;
    int32_t *l_611 = &g_177;
    int32_t l_612 = (-3L);
    int32_t *l_613 = &l_594;
    int32_t *l_614 = &l_592;
    int32_t *l_615 = &l_592;
    int32_t l_616 = 0x494CCD08L;
    int32_t *l_617 = &g_216;
    int32_t *l_618 = (void*)0;
    int32_t *l_619 = &g_23;
    int32_t *l_620 = (void*)0;
    int32_t *l_621 = &l_592;
    int32_t *l_622 = &g_23;
    int32_t *l_623 = &g_177;
    int32_t *l_624 = &l_612;
    int32_t *l_625 = &l_560;
    int32_t l_626 = 0xE093A666L;
    uint32_t l_627 = 0x3854BC38L;
    if ((safe_mod_func_int8_t_s_s((4L >= 0xCFL), g_496)))
    {
        int32_t *l_540 = (void*)0;
        int32_t *l_541 = &g_179;
        int32_t *l_542 = &g_23;
        int32_t l_543 = 0x1A346ECEL;
        int32_t *l_544 = &g_216;
        int32_t *l_545 = &g_179;
        l_546--;
    }
    else
    {
        uint16_t **l_553 = (void*)0;
        uint16_t ***l_552 = &l_553;
        uint16_t ****l_551 = &l_552;
        uint16_t *****l_558 = &l_554;
        int32_t l_559 = 0x0943D254L;
        l_559 = (safe_lshift_func_uint8_t_u_s((l_551 == ((*l_558) = l_554)), 0));
        g_216 &= p_67;
    }
    ++l_627;
    for (l_592 = 0; (l_592 == (-19)); l_592 = safe_sub_func_int16_t_s_s(l_592, 2))
    {
        int32_t **l_632 = &l_619;
        uint32_t *l_650 = &g_302;
        uint32_t **l_649 = &l_650;
        int32_t *l_651 = &g_285;
        int32_t l_652 = 0x5BF2325AL;
        p_66 = func_80(g_295, l_632, g_156);
        ((void) sizeof ((l_619 == 0) ? 1 : 0), __extension__ ({ if (l_619 == 0) ; else __assert_fail ("l_619 == 0", "/tmp/tmpt6quxc4s.c", 430, __extension__ __PRETTY_FUNCTION__); }));
        (*l_597) = (safe_add_func_uint8_t_u_u(((safe_sub_func_int16_t_s_s(((safe_sub_func_uint32_t_u_u((safe_sub_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(g_494, (((-1L) >= (((*l_651) = (safe_sub_func_int16_t_s_s((((((*l_582) == (safe_sub_func_int8_t_s_s(0xA3L, ((g_177 >= g_494) == ((*l_625) , ((((*l_649) = func_89(((((p_67 , ((((safe_rshift_func_uint8_t_u_u(5UL, g_3)) > 2UL) & 0x62L) , (void*)0)) != &l_554) != (*l_623)) , &g_105), &l_616, g_496)) == p_66) , 4294967295UL)))))) , g_337) , 0x9746L) > p_67), 65535UL))) , g_295)) < p_67))), 0xF51DL)), 0xDE9F1D2EL)) ^ 0xE7F4204EL), 0x50B7L)) > 0x56L), 0xCEL));
        ((void) sizeof ((l_650 == 0) ? 1 : 0), __extension__ ({ if (l_650 == 0) ; else __assert_fail ("l_650 == 0", "/tmp/tmpt6quxc4s.c", 433, __extension__ __PRETTY_FUNCTION__); }));
        if (l_652)
            break;
        (*g_104) = (*g_104);
    }
    ((void) sizeof ((l_619 == 0 || l_619 == &g_23) ? 1 : 0), __extension__ ({ if (l_619 == 0 || l_619 == &g_23) ; else __assert_fail ("l_619 == 0 || l_619 == &g_23", "/tmp/tmpt6quxc4s.c", 439, __extension__ __PRETTY_FUNCTION__); }));
    return (*l_593);
}
static int32_t * func_69(int8_t p_70, uint32_t p_71, int32_t * p_72, uint8_t p_73, uint16_t p_74)
{
    int16_t l_84 = 0xA91AL;
    int32_t *l_86 = &g_23;
    int32_t **l_85 = &l_86;
    uint32_t *l_386 = &g_302;
    uint16_t *l_438 = &g_439;
    (*g_104) = func_80(l_84, l_85, ((*l_438) &= (((g_19 >= (((**l_85) , (void*)0) != &g_23)) , p_72) != ((*g_104) = func_87(func_89(((&l_86 == (((((*l_386) = (safe_add_func_int8_t_s_s(((func_95((func_98((**l_85), (**l_85), g_104, p_74, (*g_104)) | 0UL), g_104) & g_326) > (*l_86)), 0xD6L))) || 0x150234E0L) || 0L) , &g_105)) , &g_105), (*l_85), (**l_85)))))));
    ((void) sizeof ((l_86 == 0) ? 1 : 0), __extension__ ({ if (l_86 == 0) ; else __assert_fail ("l_86 == 0", "/tmp/tmpt6quxc4s.c", 458, __extension__ __PRETTY_FUNCTION__); }));
    return (*g_104);
}
static int32_t * func_80(uint16_t p_81, int32_t ** p_82, uint16_t p_83)
{
    uint16_t l_440 = 65535UL;
    uint32_t *l_451 = &g_302;
    int16_t *l_459 = &g_372;
    int16_t **l_458 = &l_459;
    uint16_t **l_468 = (void*)0;
    uint8_t *l_472 = &g_326;
    uint32_t l_481 = 18446744073709551615UL;
    int16_t l_524 = 0xAF5DL;
    int32_t **l_536 = &g_105;
lbl_443:
    --l_440;
    (*g_104) = ((*p_82) = func_87((*p_82)));
    if (l_440)
        goto lbl_443;
    for (g_337 = (-2); (g_337 >= 10); g_337 = safe_add_func_int16_t_s_s(g_337, 1))
    {
        uint32_t *l_450 = &g_160;
        int32_t l_523 = 0x355F1645L;
        for (g_285 = (-10); (g_285 == (-1)); ++g_285)
        {
            uint16_t *l_466 = &g_439;
            uint16_t **l_465 = &l_466;
            int32_t l_469 = 0xE57E1535L;
            int16_t l_537 = 0L;
            if (((p_83 || ((safe_add_func_int8_t_s_s((((((l_450 != &g_160) , ((void*)0 != l_451)) | ((safe_lshift_func_int16_t_s_s((g_23 == (0xE05BL != g_370)), 5)) ^ (safe_rshift_func_int16_t_s_s(0x6BC5L, 13)))) < 0x47L) ^ 4294967295UL), (-10L))) , 0x45L)) > p_81))
            {
                int16_t *l_457 = &g_295;
                int16_t **l_456 = &l_457;
                l_458 = l_456;
                ((void) sizeof ((l_458 == &l_457) ? 1 : 0), __extension__ ({ if (l_458 == &l_457) ; else __assert_fail ("l_458 == &l_457", "/tmp/tmpt6quxc4s.c", 504, __extension__ __PRETTY_FUNCTION__); }));
                if (g_411)
                {
                    return (*g_104);
                }
                else
                {
                    uint16_t *l_462 = &g_439;
                    uint16_t **l_461 = &l_462;
                    uint16_t ***l_460 = &l_461;
                    (*l_460) = (void*)0;
                    ((void) sizeof ((l_461 == 0) ? 1 : 0), __extension__ ({ if (l_461 == 0) ; else __assert_fail ("l_461 == 0", "/tmp/tmpt6quxc4s.c", 518, __extension__ __PRETTY_FUNCTION__); }));
                    return (*g_104);
                }
            }
            else
            {
                uint16_t ***l_467 = &l_465;
                int32_t *l_482 = &l_469;
                if (((*l_482) = ((((((safe_lshift_func_int16_t_s_u((((*l_467) = l_465) != l_468), l_469)) && (safe_sub_func_int16_t_s_s(((**l_458) &= ((((void*)0 != l_472) != ((safe_rshift_func_uint8_t_u_s((p_83 && 0x79CEL), 0)) <= (safe_lshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u((p_83 != (safe_lshift_func_int16_t_s_u((((*g_104) == (void*)0) <= 0xD1L), g_285))), 2)), p_83)))) ^ (-3L))), l_481))) < l_469) < 7L) > g_177) , 1L)))
                {
                    int16_t *l_486 = &g_229;
                    uint32_t *l_493 = &g_494;
                    uint8_t *l_495 = &g_324;
                    (*l_482) = 0xF4106D26L;
                    if (p_81)
                        break;
                    (*l_482) = (safe_lshift_func_uint8_t_u_u(((((+(0L > (((*l_486) |= (0x5BL < g_372)) ^ (((((g_496 = ((safe_mul_func_uint8_t_u_u(((*l_495) = ((*l_472) = ((safe_lshift_func_int16_t_s_s((4294967295UL | ((*l_451)--)), (((*l_493) = p_83) < 1L))) > ((g_324 , (-1L)) < 0xDA25L)))), p_81)) , g_494)) && 0xABC6312CL) < 0xD1ED1595L) || 0x9BA9L) ^ 0x358AB34EL)))) == (*l_482)) < 0xFB56L) != 0x54L), 3));
                }
                else
                {
                    uint16_t ****l_500 = &l_467;
                    int32_t l_515 = (-1L);
                    for (g_177 = 0; (g_177 > (-17)); g_177 = safe_sub_func_int16_t_s_s(g_177, 6))
                    {
                        int32_t *l_499 = &g_216;
                        (*l_499) ^= (*l_482);
                    }
                    (*l_500) = &l_465;
                    for (g_160 = (-29); (g_160 > 23); g_160++)
                    {
                        int8_t *l_525 = &g_370;
                        int32_t l_526 = 0x00CC574BL;
                        int16_t ***l_527 = &l_458;
                        int16_t ****l_528 = (void*)0;
                        int16_t ****l_529 = &l_527;
                        (*l_482) = (safe_mul_func_uint8_t_u_u(255UL, (safe_lshift_func_int8_t_s_s((((!(safe_mul_func_int8_t_s_s((l_526 = ((*l_525) = (g_295 || (safe_add_func_uint32_t_u_u(p_81, ((+g_494) && (safe_add_func_int16_t_s_s(((((((l_515 , (((p_83 > (safe_mul_func_int8_t_s_s(l_481, (safe_mul_func_int16_t_s_s((((((safe_add_func_int8_t_s_s(((+l_523) , (p_81 , p_83)), 255UL)) & p_83) != g_3) , (*l_482)) , 1L), g_285))))) , 0xC8A1L) | p_81)) | p_81) && l_469) ^ p_83) != l_524) > l_524), l_469)))))))), p_81))) < 246UL) != (*l_482)), 0))));
                        (*l_529) = l_527;
                    }
                }
                for (g_179 = 0; (g_179 >= (-10)); g_179 = safe_sub_func_int16_t_s_s(g_179, 1))
                {
                    uint16_t ****l_532 = &l_467;
                    (*l_482) ^= (((*l_532) = l_467) == &l_465);
                    return (*p_82);
                }
                (*g_104) = (*p_82);
                (*g_104) = (*g_104);
            }
            return (*g_104);
        }
    }
    return (*g_104);
}
static int32_t * func_87(int32_t * p_88)
{
    int32_t l_421 = (-8L);
    int16_t l_422 = (-1L);
    int8_t *l_430 = &g_370;
    uint16_t l_433 = 0x3E44L;
    uint16_t *l_434 = &g_156;
    uint8_t *l_435 = &g_324;
    int8_t *l_436 = &g_337;
    int32_t *l_437 = &g_179;
    (*l_437) |= (safe_add_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(((safe_mod_func_int16_t_s_s(l_421, l_421)) , (((*l_436) = (((l_422 = (l_421 , g_177)) | 0L) , ((0xD15AL || ((g_229 , (safe_sub_func_int8_t_s_s((l_421 = (((*l_435) = (safe_lshift_func_uint16_t_u_u((+((*l_434) = (safe_mul_func_int8_t_s_s(((*l_430) = 0xD5L), (safe_sub_func_int32_t_s_s(1L, l_433)))))), 9))) == g_302)), g_216))) && 0UL)) >= 0x6F4BA2F3L))) || l_421)), 3)), l_433));
    return (*g_104);
}
static int32_t * func_89(int32_t ** p_90, int32_t * p_91, uint32_t p_92)
{
    int16_t *l_395 = &g_229;
    int16_t **l_396 = &l_395;
    int32_t l_412 = 0L;
    int32_t *l_413 = &l_412;
    int32_t l_414 = 0x945E16A5L;
    l_414 |= ((*l_413) = (safe_add_func_int8_t_s_s(((safe_mul_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((((((*p_91) || g_285) ^ g_229) & (((*p_91) & (safe_sub_func_int16_t_s_s((&g_229 != ((*l_396) = l_395)), (((safe_rshift_func_uint8_t_u_s((safe_unary_minus_func_uint32_t_u(0xA24BEC2CL)), (safe_add_func_int32_t_s_s((safe_mul_func_int16_t_s_s(((((safe_rshift_func_uint16_t_u_u((safe_add_func_int8_t_s_s((safe_sub_func_int32_t_s_s((0xE9L == (((safe_unary_minus_func_uint16_t_u(0UL)) != g_411) , l_412)), 0x85772B18L)), 0x2EL)), 1)) || p_92) < 0L) != l_412), p_92)), 0x83B5FAB9L)))) <= 0xEC935B34L) == (-4L))))) ^ 0x658DL)) || 0xDA131457L), 12)), 0x91L)) || 1L), 0xCBL)));
    return (*g_104);
}
static uint16_t func_95(int8_t p_96, int32_t ** p_97)
{
    uint16_t l_313 = 0x8703L;
    uint32_t l_316 = 0UL;
    int32_t *l_317 = &g_23;
    uint32_t l_339 = 18446744073709551606UL;
    for (g_285 = 29; (g_285 >= (-14)); g_285 = safe_sub_func_int32_t_s_s(g_285, 1))
    {
        int32_t *l_307 = &g_179;
        int32_t *l_308 = &g_179;
        int32_t *l_309 = &g_177;
        int32_t *l_310 = &g_177;
        int32_t *l_311 = &g_179;
        int32_t l_312 = 0xD9F3E276L;
        uint16_t l_340 = 0xBBADL;
        l_313--;
    }
    return g_372;
}
static int16_t func_98(int16_t p_99, uint8_t p_100, int32_t ** p_101, int16_t p_102, int32_t * p_103)
{
    int8_t l_164 = 0x95L;
    int32_t l_173 = 0x046699CBL;
    int32_t *l_176 = &g_177;
    int32_t *l_178 = &g_179;
    int32_t *l_183 = &g_177;
    int32_t *l_184 = (void*)0;
    int32_t *l_185 = &g_177;
    int32_t *l_186 = (void*)0;
    int32_t l_187 = 2L;
    int32_t *l_188 = &g_179;
    int32_t *l_189 = &l_173;
    int32_t *l_190 = &l_173;
    int32_t *l_191 = &g_179;
    int32_t *l_192 = &l_173;
    int32_t *l_193 = &g_177;
    int32_t *l_194 = &l_173;
    int32_t *l_195 = &g_179;
    int32_t *l_196 = &g_179;
    int32_t *l_197 = (void*)0;
    int32_t *l_198 = (void*)0;
    int32_t *l_199 = (void*)0;
    int32_t *l_200 = &l_187;
    int32_t *l_201 = &l_187;
    int32_t l_202 = 0x6AE2794CL;
    int32_t l_203 = 0x97282F80L;
    int32_t l_204 = 0L;
    int32_t l_205 = 1L;
    int32_t l_206 = 0xA1FF75AEL;
    int32_t *l_207 = &l_204;
    int32_t *l_208 = (void*)0;
    int32_t *l_209 = &g_177;
    int32_t *l_210 = &l_203;
    int32_t *l_211 = &l_173;
    int32_t *l_212 = (void*)0;
    int32_t *l_213 = &l_203;
    int32_t *l_214 = &g_177;
    int32_t l_215 = 0xECA9F70EL;
    int16_t l_217 = (-1L);
    int32_t *l_218 = &g_216;
    int32_t *l_219 = (void*)0;
    int32_t *l_220 = &l_205;
    int32_t *l_221 = &g_177;
    int32_t *l_222 = &l_202;
    int32_t *l_223 = (void*)0;
    int32_t *l_224 = &g_177;
    int32_t *l_225 = &g_177;
    int32_t l_226 = 1L;
    int32_t *l_227 = (void*)0;
    int32_t *l_228 = &g_177;
    int32_t l_230 = (-3L);
    int32_t *l_231 = &l_215;
    int32_t *l_232 = (void*)0;
    int32_t *l_233 = (void*)0;
    int32_t *l_234 = (void*)0;
    int32_t *l_235 = &l_230;
    int32_t *l_236 = &l_215;
    int32_t *l_237 = &l_205;
    int32_t *l_238 = &l_206;
    int32_t *l_239 = &l_206;
    int32_t *l_240 = &g_179;
    int32_t *l_241 = &l_173;
    int32_t *l_242 = &l_206;
    int32_t *l_243 = (void*)0;
    int32_t *l_244 = &g_179;
    int32_t *l_245 = (void*)0;
    int32_t *l_246 = &l_204;
    int32_t *l_247 = &l_202;
    int32_t l_248 = (-9L);
    int32_t *l_249 = &l_173;
    int32_t *l_250 = &g_216;
    int32_t *l_251 = &l_202;
    int32_t *l_252 = &l_205;
    int32_t *l_253 = &g_177;
    int32_t l_254 = 0x2FAA63A1L;
    int32_t *l_255 = (void*)0;
    int32_t *l_256 = &l_230;
    int32_t *l_257 = (void*)0;
    int32_t l_258 = 0x1CAF8AA5L;
    int32_t l_259 = 1L;
    int32_t *l_260 = &l_206;
    int32_t *l_261 = &l_215;
    int32_t *l_262 = &l_203;
    int32_t *l_263 = &l_230;
    int32_t l_264 = (-1L);
    int32_t *l_265 = &l_187;
    int32_t *l_266 = &l_215;
    int32_t *l_267 = (void*)0;
    int32_t *l_268 = &l_204;
    int32_t *l_269 = &l_259;
    int32_t *l_270 = &g_216;
    int32_t *l_271 = (void*)0;
    int32_t *l_272 = &g_179;
    int32_t *l_273 = (void*)0;
    int32_t *l_274 = &g_179;
    int32_t *l_275 = &g_179;
    int32_t *l_276 = &g_177;
    int32_t *l_277 = &l_215;
    int32_t l_278 = 0x1E6C26E6L;
    int32_t *l_279 = &g_179;
    int32_t *l_280 = &l_264;
    int32_t *l_281 = (void*)0;
    int32_t *l_282 = (void*)0;
    int32_t *l_283 = (void*)0;
    int32_t *l_284 = &l_248;
    int32_t *l_286 = &l_206;
    int32_t *l_287 = &l_204;
    int32_t *l_288 = &l_226;
    int32_t *l_289 = &l_264;
    int32_t *l_290 = (void*)0;
    int32_t *l_291 = &l_204;
    int32_t *l_292 = &l_206;
    int32_t *l_293 = (void*)0;
    int32_t *l_294 = &g_177;
    int32_t *l_296 = &l_205;
    int32_t *l_297 = &g_177;
    int32_t *l_298 = &l_248;
    int32_t *l_299 = &l_204;
    int32_t *l_300 = &l_215;
    int32_t *l_301 = &l_205;
    l_164 = (+(safe_mod_func_int32_t_s_s(func_109((*p_101), (*g_104), p_100, p_100), g_3)));
    (*l_178) = (safe_sub_func_uint16_t_u_u(((safe_mod_func_int8_t_s_s(p_99, (-3L))) >= ((l_173 &= (p_99 || (safe_mul_func_int8_t_s_s((-9L), (p_100 &= (safe_sub_func_uint16_t_u_u(p_99, l_164))))))) , (0x0FEFL > p_100))), (((*l_176) ^= ((safe_mod_func_int32_t_s_s((((((p_102 == g_160) || 0x772B8ADFL) ^ p_99) <= p_102) > p_102), 4294967289UL)) ^ 0xA7432CFEL)) ^ p_102)));
    for (g_156 = (-18); (g_156 == 8); g_156++)
    {
        int16_t l_182 = 8L;
        (*p_101) = (*p_101);
        l_182 = (*l_178);
    }
    ++g_302;
    return g_160;
}
static int32_t func_109(int32_t * p_110, int32_t * p_111, uint16_t p_112, int16_t p_113)
{
    int16_t l_114 = 0x6B1FL;
    int32_t l_115 = 1L;
    int32_t *l_116 = &l_115;
    int32_t *l_117 = (void*)0;
    int32_t *l_118 = &l_115;
    int32_t *l_119 = &l_115;
    int32_t *l_120 = &l_115;
    int32_t *l_121 = &l_115;
    int32_t *l_122 = &l_115;
    int32_t l_123 = 0x38B1AAE8L;
    int32_t *l_124 = (void*)0;
    int32_t *l_125 = &l_115;
    int32_t *l_126 = (void*)0;
    int32_t *l_127 = (void*)0;
    int32_t *l_128 = (void*)0;
    uint16_t l_129 = 0x3388L;
    int32_t *l_132 = &l_115;
    int32_t *l_133 = (void*)0;
    int32_t *l_134 = &l_115;
    int32_t *l_135 = &l_123;
    int32_t *l_136 = &l_123;
    int32_t *l_137 = &l_123;
    int32_t *l_138 = &l_123;
    int32_t *l_139 = &l_115;
    int32_t *l_140 = &l_123;
    int32_t *l_141 = &l_115;
    int32_t *l_142 = (void*)0;
    int32_t *l_143 = &l_115;
    int32_t *l_144 = &l_123;
    int32_t *l_145 = &l_123;
    int32_t *l_146 = &l_115;
    int32_t *l_147 = &l_115;
    int32_t *l_148 = &l_123;
    int32_t *l_149 = &l_123;
    int32_t *l_150 = (void*)0;
    int32_t l_151 = 0xE3FE27FCL;
    int32_t *l_152 = &l_123;
    int32_t *l_153 = &l_115;
    int32_t *l_154 = &l_123;
    int32_t *l_155 = &l_123;
    int32_t l_163 = (-1L);
    ++l_129;
    if (l_129)
        goto lbl_159;
lbl_159:
    g_156++;
    g_160--;
    return l_163;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_3;
    csmith_sink_ = g_19;
    csmith_sink_ = g_23;
    csmith_sink_ = g_75;
    csmith_sink_ = g_156;
    csmith_sink_ = g_160;
    csmith_sink_ = g_177;
    csmith_sink_ = g_179;
    csmith_sink_ = g_216;
    csmith_sink_ = g_229;
    csmith_sink_ = g_285;
    csmith_sink_ = g_295;
    csmith_sink_ = g_302;
    csmith_sink_ = g_324;
    csmith_sink_ = g_326;
    csmith_sink_ = g_337;
    csmith_sink_ = g_370;
    csmith_sink_ = g_372;
    csmith_sink_ = g_411;
    csmith_sink_ = g_439;
    csmith_sink_ = g_494;
    csmith_sink_ = g_496;
    csmith_sink_ = g_695;
    csmith_sink_ = g_715;
    csmith_sink_ = g_723;
    csmith_sink_ = g_741;
    csmith_sink_ = g_825;
    platform_main_end(0,0);
    return 0;
}
