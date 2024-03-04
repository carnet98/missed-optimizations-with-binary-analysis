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
static uint32_t g_4 = 0x8B108F82;
static int32_t g_57 = 0x21BA52B3;
static int32_t *g_56 = &g_57;
static int32_t **g_139 = &g_56;
static int32_t ***g_138 = &g_139;
static uint8_t g_206 = 0x0D;
static uint32_t g_207 = 4294967290U;
static int32_t g_213 = 0x56720C7B;
static int16_t g_252 = 0x0DBE;
static int32_t g_255 = 0x0ABAC2E1;
static int32_t g_295 = 0x72E63399;
static uint32_t g_554 = 4294967292U;
static int32_t g_626 = 0x4FCBCCFB;
static int32_t g_679 = 0;
static int32_t ****g_708 = &g_138;
static int32_t *****g_707 = &g_708;
static int8_t g_860 = 0x29;
static int16_t func_1(void);
static int16_t func_5(int32_t p_6, uint16_t p_7, int8_t p_8);
static int32_t func_11(uint32_t p_12);
static uint8_t func_23(uint32_t p_24, uint32_t p_25, int32_t p_26, int32_t p_27);
static uint8_t func_34(uint16_t p_35, int32_t p_36, int8_t p_37);
inline static int32_t func_38(uint8_t p_39, uint32_t p_40, int16_t p_41, int32_t p_42, int16_t p_43);
static int32_t * func_50(int32_t * p_51, uint32_t p_52, int8_t p_53, int32_t * p_54, int32_t * p_55);
inline static uint8_t func_58(uint16_t p_59, uint32_t p_60, uint8_t p_61, int32_t * p_62);
inline static int32_t func_68(int32_t * p_69, int32_t * p_70);
static int32_t * func_71(int32_t * p_72, int8_t p_73, uint32_t p_74);
static int16_t func_1(void)
{
    uint16_t l_13 = 65527U;
    uint8_t l_758 = 255U;
    int32_t *l_760 = (void*)0;
    int32_t l_761 = 9;
    int32_t *l_762 = &g_57;
    int32_t l_769 = 0x1DB76AE8;
    int32_t ***l_774 = &g_139;
    int32_t l_775 = 8;
    int32_t l_778 = 0;
    uint32_t l_779 = 1U;
    uint8_t l_869 = 2U;
    int32_t *l_870 = &g_679;
    l_761 = (0x6DD1 || (g_4 , (((func_5(g_4, (safe_lshift_func_int16_t_s_s(g_4, (func_11(l_13) == ((safe_sub_func_uint16_t_u_u((g_4 & ((safe_rshift_func_uint8_t_u_u((g_252 <= ((((l_13 , g_206) || l_758) , g_206) && l_758)), 3)) == l_758)), g_206)) == 0)))), l_13) < l_758) & 1U) != l_758)));
    (*l_762) = (g_252 || ((void*)0 != (**g_708)));
    if (((safe_div_func_int32_t_s_s((((((safe_div_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(l_769, ((safe_sub_func_int32_t_s_s((g_207 >= ((g_213 >= (safe_unary_minus_func_uint32_t_u(((safe_unary_minus_func_uint8_t_u(g_679)) <= g_554)))) <= (((*l_762) <= (l_774 != ((l_775 >= (((safe_rshift_func_int16_t_s_s(0x36CF, g_554)) < (*l_762)) , (*l_762))) , (void*)0))) || 0xB9EB))), l_778)) && g_4))), g_206)) & g_295) < l_779) != g_57) & g_252), 4294967295U)) >= g_252))
    {
        uint32_t l_780 = 7U;
        int32_t *l_789 = &g_679;
        int8_t l_861 = 0x34;
        (*l_762) = (l_780 == (((safe_sub_func_int8_t_s_s(((2 & (safe_lshift_func_int8_t_s_s(((g_57 & g_206) ^ (g_295 && ((safe_lshift_func_uint16_t_u_s(l_780, l_780)) > g_295))), g_626))) && l_780), g_206)) , (*l_762)) , (-1)));
        for (g_213 = 0; (g_213 <= (-16)); g_213 = safe_sub_func_int32_t_s_s(g_213, 1))
        {
            int8_t l_799 = 0;
            int32_t *l_801 = &l_761;
            uint8_t l_806 = 247U;
            int32_t ****l_811 = &g_138;
            uint32_t l_830 = 0x05162630;
            l_789 = (void*)0;
            for (g_4 = (-18); (g_4 <= 52); g_4++)
            {
                uint16_t l_800 = 7U;
                int32_t *****l_845 = (void*)0;
                int32_t l_846 = 0x52EA8CD9;
                uint16_t l_859 = 0x91B5;
                (****g_707) = l_801;
                g_707 = &g_708;
                for (g_252 = (-8); (g_252 >= (-26)); g_252 = safe_sub_func_int8_t_s_s(g_252, 5))
                {
                    uint32_t l_832 = 1U;
                    int32_t l_833 = 0xEDB553F0;
                    for (l_778 = 0; (l_778 < 18); l_778 = safe_add_func_uint16_t_u_u(l_778, 9))
                    {
                        (*****g_707) = (0x37421BEB ^ l_806);
                        if ((*l_801))
                            break;
                        (*g_56) = (***g_138);
                    }
                    if ((((safe_lshift_func_uint8_t_u_u(0xF4, ((safe_rshift_func_int8_t_s_s((((g_213 , l_811) != (*g_707)) < (g_626 , (safe_rshift_func_uint16_t_u_u((((0U >= (safe_unary_minus_func_int8_t_s((safe_add_func_int8_t_s_s((0U || ((**g_139) , 254U)), g_213))))) | (*l_762)) & 0xC54A), g_252)))), 3)) < 0xDDEE))) , (-3)) < 0x4C5D7A30))
                    {
                        int32_t l_829 = 0x10E40178;
                        uint8_t l_831 = 0xFC;
                        (****l_811) = ((safe_div_func_int8_t_s_s(((*g_139) == ((safe_div_func_int16_t_s_s((((((((((((*l_762) & (((g_206 != 0xED) , ((safe_mod_func_int32_t_s_s((&g_708 == (void*)0), (safe_rshift_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((((0x152406B7 <= g_252) == g_206) >= l_829), l_830)), g_295)))) && l_829)) <= l_831)) , l_831) >= l_832) <= 0xD974) | g_207) , g_4) , (****l_811)) & l_800) , l_833) <= (*l_801)), g_295)) , (void*)0)), (*l_801))) , (***g_138));
                        (*g_139) = (void*)0;
                        (*g_139) = (**l_774);
                    }
                    else
                    {
                        int8_t l_844 = 1;
                        (**g_138) = (***l_811);
                        (**l_774) = func_50(((((safe_rshift_func_int16_t_s_u(((safe_rshift_func_int8_t_s_u((l_800 , g_213), 1)) <= g_207), 7)) <= ((safe_mod_func_uint32_t_u_u(g_252, (safe_sub_func_int32_t_s_s(((safe_sub_func_int32_t_s_s((l_844 != ((l_845 != &g_708) >= (g_206 , ((((0xFB || 0x65) == 4294967295U) & (****l_811)) ^ 0xF8AD)))), l_844)) & l_846), 0xB8E9A270)))) , l_832)) && (*l_801)) , (void*)0), g_626, g_252, (**l_774), (*g_139));
                        (*l_762) = ((safe_div_func_uint32_t_u_u(((0xA3 == (safe_lshift_func_uint16_t_u_s(((((*l_801) , (g_207 | (-1))) > ((safe_rshift_func_int8_t_s_s(0xAE, (safe_sub_func_uint8_t_u_u((g_206 != (safe_sub_func_int32_t_s_s((*l_762), ((*l_801) != (safe_div_func_uint32_t_u_u(l_833, 3)))))), 0)))) < l_859)) ^ g_860), 8))) >= 0xD9F0), g_4)) , g_255);
                        l_861 = l_832;
                    }
                    return g_206;
                }
            }
            (*l_762) = (*l_801);
        }
    }
    else
    {
        uint32_t l_862 = 3U;
        int32_t *l_868 = &g_295;
        (*l_762) = l_862;
        (**g_138) = func_50((**l_774), (((void*)0 != (*g_139)) | g_295), (safe_rshift_func_int16_t_s_s((0x3D19 ^ (safe_rshift_func_int16_t_s_s((!l_862), 8))), 2)), l_868, (*g_139));
        (***g_708) = l_870;
        for (l_775 = 24; (l_775 != 6); l_775 = safe_sub_func_int8_t_s_s(l_775, 6))
        {
            for (g_57 = 0; (g_57 > (-13)); --g_57)
            {
                int32_t l_875 = (-1);
                return l_875;
            }
            (**g_138) = (void*)0;
        }
    }
    return (*l_762);
}
static int16_t func_5(int32_t p_6, uint16_t p_7, int8_t p_8)
{
    int32_t *l_759 = (void*)0;
    (**g_138) = l_759;
    return p_6;
}
static int32_t func_11(uint32_t p_12)
{
    uint32_t l_18 = 0x27D373EE;
    int16_t l_46 = (-1);
    int32_t l_465 = 0xD5610DBB;
    int16_t l_661 = 0xCDA6;
    int32_t *l_701 = &g_295;
    int32_t ***l_702 = &g_139;
    for (p_12 = 0; (p_12 != 18); p_12 = safe_add_func_uint8_t_u_u(p_12, 6))
    {
        return g_4;
    }
    (*l_701) = (safe_sub_func_uint32_t_u_u(p_12, ((l_18 && ((safe_sub_func_uint16_t_u_u(((safe_mod_func_uint8_t_u_u(func_23(p_12, g_4, (safe_sub_func_int16_t_s_s(((0x63EC ^ (safe_lshift_func_int8_t_s_u(((0x09B4AF7B != (safe_rshift_func_int8_t_s_u((((l_18 ^ (func_34((func_38(((g_4 >= (safe_div_func_int8_t_s_s(p_12, g_4))) < 0xD7C8A36A), g_4, p_12, p_12, l_46) < l_465), g_295, p_12) || l_661)) & p_12) & l_465), g_4))) , g_626), 2))) > p_12), 0x7358)), p_12), g_554)) || g_554), g_295)) ^ 0x19)) < l_465)));
    if (((l_702 != &g_139) <= ((~0x1E86) | ((safe_mod_func_int16_t_s_s((!(((&g_139 != l_702) || (p_12 , ((*g_138) != ((((((p_12 != (g_252 , p_12)) , 0U) , 0xB6) == p_12) || 0x807253A2) , (void*)0)))) > 0x7D)), g_626)) > (-1)))))
    {
        uint16_t l_712 = 65535U;
        int32_t *l_718 = &g_626;
        int32_t *****l_721 = &g_708;
        g_707 = g_707;
        for (g_207 = (-29); (g_207 < 59); g_207++)
        {
            int32_t l_711 = 0x58B9A117;
            int32_t *l_713 = &g_213;
            l_712 = l_711;
            l_713 = func_50(l_713, ((*l_713) , p_12), (safe_add_func_uint8_t_u_u((p_12 >= ((((safe_lshift_func_int8_t_s_s(p_12, 5)) | p_12) <= 1) & (0x07 & 0x99))), g_207)), l_713, l_718);
            (*l_718) = (safe_add_func_int8_t_s_s((l_721 == ((safe_lshift_func_uint16_t_u_u(((safe_add_func_uint32_t_u_u(g_295, (g_626 , ((0xA6 < (255U | ((safe_sub_func_int8_t_s_s((((*l_713) > (safe_mod_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(p_12, (safe_sub_func_int16_t_s_s(g_554, ((0x58 != (-1)) <= p_12))))), g_213))) <= 0x239AF250), p_12)) && 0x8108))) < p_12)))) | g_295), 2)) , (void*)0)), g_295));
        }
        (****l_721) = l_718;
    }
    else
    {
        uint32_t l_734 = 4U;
        int32_t *l_740 = &g_57;
        int32_t ****l_741 = &l_702;
        l_734 = 0xE375A436;
        (*l_701) = (safe_mod_func_uint16_t_u_u(((1U > 0x244B0CC6) , ((safe_add_func_int32_t_s_s(((p_12 , g_206) > (!((void*)0 != l_740))), (l_741 == (((((((safe_div_func_uint32_t_u_u(p_12, (safe_lshift_func_uint8_t_u_s(p_12, g_4)))) , g_213) | g_207) , (*l_740)) , (*l_701)) == g_57) , l_741)))) , p_12)), p_12));
        (**l_702) = l_740;
        (***l_702) = ((p_12 , ((safe_lshift_func_uint16_t_u_u((safe_add_func_int8_t_s_s(7, g_57)), 12)) || p_12)) , (safe_mul_func_uint8_t_u_u((***l_702), ((safe_add_func_uint32_t_u_u(0xD0BE629D, p_12)) <= (***l_702)))));
    }
    return (****g_708);
}
static uint8_t func_23(uint32_t p_24, uint32_t p_25, int32_t p_26, int32_t p_27)
{
    int32_t **l_665 = &g_56;
    int16_t l_676 = 0x2888;
    uint32_t l_680 = 4294967288U;
    uint32_t l_686 = 0x51063BA9;
    if ((~(safe_add_func_int8_t_s_s((((l_665 != (*g_138)) , (safe_mod_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_u(((safe_lshift_func_uint16_t_u_u((l_676 , ((safe_lshift_func_int16_t_s_u(((p_24 , 0xD8501470) >= p_26), 5)) <= ((g_57 == 8) | l_676))), 13)) ^ g_679), 9)) ^ l_676), l_680)), (-4))), p_25))) | p_27), l_676))))
    {
        int16_t l_685 = (-8);
        int32_t l_687 = (-6);
        l_687 = (((safe_rshift_func_uint16_t_u_s((0x1EBE | ((((p_25 & g_4) & p_27) && ((safe_mod_func_int16_t_s_s(g_295, (-10))) ^ l_685)) <= l_686)), (g_207 == p_27))) == 0xD3) != (-3));
    }
    else
    {
        uint32_t l_690 = 0x129BBD25;
        int32_t *l_691 = &g_255;
        (*l_691) = (safe_div_func_int32_t_s_s(p_25, (((void*)0 == &p_26) && l_690)));
        p_27 = (((safe_sub_func_int32_t_s_s(((safe_mod_func_int16_t_s_s((safe_add_func_uint32_t_u_u(p_25, (safe_rshift_func_int8_t_s_s((*l_691), 1)))), g_679)) | ((void*)0 == l_691)), 0x37F6B2A6)) , ((((((((~((((void*)0 != &l_691) < ((&p_26 == &p_27) != 0x7DE1)) || p_25)) == 65534U) < p_27) , p_24) , g_554) > g_207) , g_295) | p_24)) >= (*l_691));
    }
    return g_554;
}
static uint8_t func_34(uint16_t p_35, int32_t p_36, int8_t p_37)
{
    uint32_t l_466 = 0xD40FB0CF;
    int32_t ***l_482 = &g_139;
    int8_t l_643 = (-6);
    int32_t l_659 = 0xEC9178BE;
    int32_t *l_660 = &l_659;
    if (p_35)
    {
        return l_466;
    }
    else
    {
        int16_t l_481 = 0x0E29;
        int32_t *l_485 = &g_213;
        uint32_t l_512 = 4294967295U;
        uint16_t l_551 = 0x687C;
        uint32_t l_572 = 0x26CA4341;
        int32_t l_594 = (-10);
        if (l_466)
        {
            int16_t l_483 = (-6);
            int32_t *l_484 = &g_57;
            (**l_482) = func_50(((p_35 , p_36) , ((((((safe_add_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((safe_div_func_uint8_t_u_u(((1 >= (safe_rshift_func_int16_t_s_u((safe_mod_func_uint8_t_u_u((((((((safe_sub_func_uint16_t_u_u((((safe_add_func_uint8_t_u_u(l_466, (l_481 ^ (l_482 == (void*)0)))) & ((((void*)0 == (**g_138)) ^ p_36) > g_252)) & (*g_56)), g_252)) && p_37) & g_213) ^ g_255) , g_206) < p_35) ^ g_252), 2)), p_37))) , l_481), p_36)), 0xBAA9)), 0x4B6C)) < l_481) | l_483) && 0x614F) != 0x4E) , (**g_138))), g_295, p_37, l_484, l_485);
            (**g_139) = (((*l_484) && (safe_div_func_uint16_t_u_u(0x1CBC, (+((((0x8A > (safe_rshift_func_uint8_t_u_u(((((((((((65529U > p_37) <= ((((((safe_div_func_uint8_t_u_u(0x84, 0x86)) && g_213) && (safe_sub_func_uint8_t_u_u((*l_485), g_295))) ^ (*l_484)) | g_57) > g_207)) > g_57) , &g_139) == &g_139) ^ p_37) <= 0x881A7689) <= (*l_484)) , p_36) & p_35), 4))) == (***l_482)) & g_255) || 9U))))) || (***l_482));
            (*l_485) = (-8);
            (*g_139) = (void*)0;
        }
        else
        {
            uint16_t l_509 = 0x8A29;
            int32_t l_527 = 1;
            int32_t ***l_576 = &g_139;
            uint32_t l_616 = 0x57200D2A;
            (*g_56) = (-1);
            (**g_139) = 0xC4057CCA;
            if (((((p_36 != (((***l_482) < ((safe_mod_func_int16_t_s_s((safe_mod_func_int8_t_s_s(((((safe_div_func_int32_t_s_s(0x71C1E499, (safe_rshift_func_int8_t_s_u((safe_mod_func_int16_t_s_s(0xE27C, ((safe_mod_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u((*l_485), l_509)), (p_35 , p_36))) && (safe_div_func_int8_t_s_s(((((((*l_485) == l_509) == g_4) > (*l_485)) , (void*)0) != (void*)0), l_509))))), g_252)))) || l_512) && p_36) , 0xAE), p_37)), (***l_482))) , p_36)) | 0x38C486AF)) , l_509) < g_57) < p_36))
            {
                int32_t l_523 = 0xE8A28EE4;
                int32_t ***l_535 = &g_139;
                for (l_481 = (-28); (l_481 >= (-15)); l_481 = safe_add_func_int16_t_s_s(l_481, 4))
                {
                    uint32_t l_524 = 0xC4BF73BA;
                    for (l_466 = 0; (l_466 >= 32); l_466 = safe_add_func_int16_t_s_s(l_466, 9))
                    {
                        (*l_485) = ((p_35 , ((g_4 , (safe_mul_func_uint8_t_u_u(0U, ((safe_div_func_int32_t_s_s(0, (safe_add_func_int8_t_s_s((g_4 | (l_523 ^ g_295)), l_524)))) == (safe_sub_func_uint32_t_u_u(((((l_509 || g_4) > (**g_139)) , l_485) != (void*)0), l_523)))))) && 4294967295U)) && l_509);
                        (*g_139) = l_485;
                    }
                    l_527 = (-1);
                    (**g_138) = (*g_139);
                    if ((((***g_138) != ((safe_mod_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((((((void*)0 == &l_527) , p_36) ^ g_206) || (!(((safe_rshift_func_int16_t_s_u((255U >= ((g_57 , ((((l_535 != l_535) == 0xE39D) , (*g_56)) == 9)) && g_207)), 15)) > 1U) != 1U))), 0x4865)), g_295)) | 0U)) != 0x24))
                    {
                        (*l_485) = p_35;
                    }
                    else
                    {
                        (*l_485) = ((((safe_div_func_uint8_t_u_u((l_524 , (g_252 & (p_36 != (safe_add_func_int32_t_s_s((safe_div_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u((safe_div_func_uint8_t_u_u((~(((g_4 != (p_36 || (***l_535))) | (((*g_138) == ((((safe_sub_func_uint16_t_u_u(((((*g_56) == 0xC690CF99) , p_36) && 0x92FE50AA), g_57)) < 0x6B) != 4294967295U) , (*g_138))) == p_36)) >= 8U)), p_37)), g_207)), g_206)), (*g_56)))))), l_551)) | 65535U) && (-5)) == l_524);
                        return p_37;
                    }
                }
            }
            else
            {
                uint8_t l_571 = 252U;
                int32_t **l_595 = (void*)0;
                int32_t ****l_615 = (void*)0;
                for (l_551 = 17; (l_551 >= 21); l_551 = safe_add_func_uint16_t_u_u(l_551, 2))
                {
                    uint32_t l_592 = 0xF2BA1160;
                    int16_t l_617 = 1;
                    if (((g_213 > ((g_554 == (g_206 > ((safe_div_func_uint16_t_u_u(g_252, (safe_sub_func_uint32_t_u_u(((safe_lshift_func_int8_t_s_s(((*g_56) & ((((safe_rshift_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(p_35, (safe_mod_func_int16_t_s_s(((((void*)0 == &l_482) < (safe_add_func_uint8_t_u_u((((((safe_lshift_func_int8_t_s_u(0x16, l_509)) || 0xFEEB) ^ l_571) && 0x3AB75C7B) , l_527), l_572))) || (*l_485)), p_36)))), 14)) < g_207) != 0U) || 255U)), 1)) > g_57), (**g_139))))) , l_571))) < (*l_485))) & 1U))
                    {
                        uint32_t l_585 = 2U;
                        int32_t l_593 = (-3);
                        (***g_138) = ((((~(((safe_lshift_func_int16_t_s_u((l_576 != ((((-10) >= (safe_sub_func_int32_t_s_s(((safe_sub_func_uint8_t_u_u(0U, (safe_mod_func_uint8_t_u_u(((p_35 <= ((safe_add_func_uint16_t_u_u(l_585, (safe_div_func_uint8_t_u_u((p_35 || (((safe_rshift_func_uint16_t_u_u(((((safe_lshift_func_uint8_t_u_u(((((((*g_56) & (((**g_138) != (**l_576)) != 6)) <= (***l_576)) , g_255) , (*l_485)) >= 0xCA4C636C), 6)) > 6) , (void*)0) == l_485), 15)) & p_36) <= p_35)), l_585)))) != p_35)) <= g_252), p_37)))) || g_57), (***g_138)))) != p_36) , (void*)0)), l_592)) ^ g_4) || l_592)) < l_593) , 0x32) ^ 6U);
                        return g_213;
                    }
                    else
                    {
                        int32_t ****l_600 = &g_138;
                        (***l_576) = ((((((-1) <= (g_252 == l_594)) , (*g_138)) != l_595) && (safe_sub_func_int16_t_s_s(((((safe_add_func_int16_t_s_s(((g_207 , l_600) == &l_576), 0xEC52)) | 0x85) || (*l_485)) | l_592), (***l_576)))) >= p_35);
                        (***l_576) = ((((safe_div_func_uint8_t_u_u(((g_295 > 0x7B) != g_4), (g_255 || (((p_37 && ((((safe_mod_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((&g_138 == (void*)0), (safe_lshift_func_int8_t_s_s(((safe_mod_func_int8_t_s_s((p_35 == (safe_mod_func_uint32_t_u_u((safe_sub_func_int16_t_s_s((((g_57 ^ (***l_576)) , &l_576) == l_615), l_592)), l_592))), g_295)) ^ (***l_482)), 4)))), g_213)) & p_35) && g_554) & l_616)) != (*l_485)) & 0x88)))) < l_617) | 1U) != 65532U);
                        (**l_576) = (***l_600);
                    }
                }
                (***g_138) = (p_36 < (safe_sub_func_int8_t_s_s(((p_35 == (safe_lshift_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(((safe_div_func_int8_t_s_s(((((*g_138) != (*l_576)) ^ (((((p_37 && ((0x61598BFD <= ((&l_485 != (*g_138)) && (g_626 , 0x4664BDAD))) == (-2))) != p_37) , 0x15) , 0x18) , (***l_576))) || p_35), 0x74)) & p_37), p_36)), 0))) | g_554), (***l_576))));
            }
        }
        (*l_485) = p_37;
        (*l_485) = 0xB4296491;
    }
    if (p_36)
    {
        int32_t l_633 = (-4);
        l_633 = ((safe_add_func_uint8_t_u_u(p_37, (((safe_add_func_int16_t_s_s(((safe_div_func_int8_t_s_s((g_252 ^ g_207), l_633)) || (((g_57 < (~(safe_div_func_uint32_t_u_u(p_35, (0x18 || p_35))))) ^ ((safe_add_func_int16_t_s_s(((((safe_add_func_uint16_t_u_u(g_252, 0x31C7)) >= p_37) == p_36) , (-4)), g_57)) && l_633)) , 0x1C0CB821)), 1U)) < l_466) & 0x20F91E9B))) | 0x0ABF15F7);
    }
    else
    {
        int32_t *l_641 = &g_57;
        (*l_641) = 2;
        (**g_138) = l_660;
    }
    return p_37;
}
inline static int32_t func_38(uint8_t p_39, uint32_t p_40, int16_t p_41, int32_t p_42, int16_t p_43)
{
    uint16_t l_251 = 1U;
    int32_t *l_278 = &g_213;
    int32_t ***l_317 = (void*)0;
    int16_t l_386 = 0x0CDC;
    for (p_41 = 0; (p_41 > (-5)); p_41--)
    {
        uint8_t l_49 = 0xD3;
        int32_t *l_254 = &g_255;
        int32_t *l_274 = (void*)0;
        uint32_t l_285 = 7U;
        int32_t ****l_344 = &g_138;
        uint32_t l_402 = 4294967288U;
    }
    return (***g_138);
}
static int32_t * func_50(int32_t * p_51, uint32_t p_52, int8_t p_53, int32_t * p_54, int32_t * p_55)
{
    int32_t *l_275 = (void*)0;
    (*g_139) = l_275;
    return p_51;
}
inline static uint8_t func_58(uint16_t p_59, uint32_t p_60, uint8_t p_61, int32_t * p_62)
{
    int8_t l_268 = (-1);
    int32_t ***l_271 = &g_139;
    int32_t *l_272 = &g_213;
    l_272 = ((safe_div_func_int16_t_s_s((5U && (((g_57 == p_61) | (((safe_mod_func_int16_t_s_s((((safe_mod_func_uint16_t_u_u((0xC7AF3F72 != (safe_div_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u(((safe_mod_func_int16_t_s_s(g_207, (l_268 || p_59))) , g_213), (safe_lshift_func_uint8_t_u_u((&g_139 == l_271), p_60)))), g_252))), g_252)) && 65527U) & 1), (***l_271))) == (*p_62)) <= (***g_138))) != g_4)), (-1))) , (**l_271));
    (*l_272) = (**g_139);
    return g_252;
}
inline static int32_t func_68(int32_t * p_69, int32_t * p_70)
{
    int32_t *l_221 = (void*)0;
    int32_t ****l_224 = &g_138;
    int32_t **l_233 = &l_221;
    uint16_t l_234 = 0xCB30;
    for (g_213 = 0; (g_213 < (-12)); g_213 = safe_sub_func_uint32_t_u_u(g_213, 2))
    {
        int32_t **l_222 = (void*)0;
        int32_t **l_223 = &l_221;
        (*l_223) = l_221;
    }
    (*l_233) = (((((l_224 != ((((safe_sub_func_uint16_t_u_u((((safe_add_func_int8_t_s_s((****l_224), (g_207 ^ (((l_224 != (void*)0) || (((****l_224) , g_213) < g_207)) > (safe_div_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(65535U, g_206)), (-1))))))) == 0) ^ g_207), 0xBABF)) , (****l_224)) & 0xEAB9) , (void*)0)) < 0x248F) , (*p_69)) , g_207) , (***l_224));
    return l_234;
}
static int32_t * func_71(int32_t * p_72, int8_t p_73, uint32_t p_74)
{
    int32_t l_81 = (-5);
    int16_t l_109 = 0xB665;
    uint16_t l_146 = 0x3D75;
    int8_t l_151 = 1;
    int32_t ****l_174 = &g_138;
    int32_t *l_217 = &l_81;
    int32_t **l_216 = &l_217;
    if ((safe_sub_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((((safe_sub_func_uint32_t_u_u(8U, (l_81 == p_74))) , ((safe_mod_func_int8_t_s_s((((((((((*p_72) > (safe_lshift_func_uint8_t_u_u((&l_81 != &l_81), 4))) && (safe_sub_func_int8_t_s_s((((safe_sub_func_uint32_t_u_u(((0x09 && p_74) && (((p_72 != (void*)0) < 0x6A) == g_57)), 5)) || 1) & p_73), g_57))) , &g_57) == &g_57) < l_81) >= l_81) , (*p_72)) || (*p_72)), 0xDE)) == 0x29)) > g_4), l_81)), p_74)))
    {
        uint8_t l_100 = 0U;
        int32_t **l_116 = (void*)0;
        for (p_74 = 0; (p_74 <= 56); ++p_74)
        {
            (*p_72) = (safe_add_func_uint8_t_u_u((g_57 >= (!(+((((safe_add_func_int32_t_s_s(l_100, (*p_72))) , (&g_57 == (void*)0)) & (safe_sub_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s((((safe_lshift_func_int16_t_s_s(0xC8A6, 11)) , &g_57) == p_72), (safe_mod_func_int8_t_s_s(4, p_73)))), 0x8D9E))) , (-1))))), l_109));
            (*g_56) = (*p_72);
            for (l_81 = (-11); (l_81 < 2); l_81 = safe_add_func_int32_t_s_s(l_81, 6))
            {
                int32_t *l_113 = &g_57;
                int32_t **l_112 = &l_113;
                (*l_112) = p_72;
            }
            return p_72;
        }
        for (p_73 = (-4); (p_73 <= (-20)); p_73 = safe_sub_func_int32_t_s_s(p_73, 7))
        {
            int32_t ***l_117 = &l_116;
            if (l_109)
                break;
            (*g_56) = 0x9175669B;
            (*l_117) = l_116;
        }
        (*g_56) = l_100;
    }
    else
    {
        int32_t **l_118 = (void*)0;
        int32_t *l_120 = (void*)0;
        int32_t **l_119 = &l_120;
        (*l_119) = p_72;
        (*l_119) = p_72;
        for (l_109 = 0; (l_109 == (-27)); l_109--)
        {
            uint32_t l_131 = 6U;
            int32_t *l_177 = &g_57;
            int32_t l_204 = (-4);
            (*p_72) = (((safe_div_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_s(((safe_sub_func_int16_t_s_s(l_131, (safe_rshift_func_int16_t_s_u((((+(l_131 ^ ((safe_mod_func_uint32_t_u_u((~0x54A9), (((g_138 == (((g_57 , (**g_138)) == (void*)0) , &l_118)) , ((g_57 || 246U) < 5U)) | g_4))) ^ 0x3D))) , (*g_139)) != (void*)0), 3)))) || (**g_139)), 5)), 3)), p_74)) | p_73) , l_81);
            if ((((**l_119) , p_74) || ((((p_73 | ((((((void*)0 == p_72) == g_57) == 0xFC961BCE) , (*g_138)) != (*g_138))) == 0xCA30E3E6) || 8U) <= (*p_72))))
            {
                int32_t l_167 = 0x6226F77E;
                (*l_119) = p_72;
                if (((((safe_add_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_s((l_146 <= (g_57 , (**g_139))), 1)) ^ (((((***g_138) > (l_131 ^ ((((((**l_119) <= ((safe_add_func_int32_t_s_s((***g_138), (safe_lshift_func_int16_t_s_u((((0x347FA911 != 0U) , g_4) <= (*g_56)), g_4)))) | 0x22)) , l_151) < p_73) < (**g_139)) && g_4))) ^ 0U) <= g_4) > 0x75F8F1AF)), g_4)) <= g_4) <= (*l_120)) , (*p_72)))
                {
                    uint8_t l_154 = 0x82;
                    int32_t **l_168 = (void*)0;
                    (**g_139) = (p_72 != p_72);
                    (*l_120) = ((~(+(((g_4 && g_57) | (((g_4 && (l_154 < l_151)) != ((!((!(safe_lshift_func_int16_t_s_u((safe_sub_func_int32_t_s_s(((safe_div_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u(l_131, (safe_lshift_func_uint8_t_u_s(l_167, (&p_72 != l_168))))), g_4)) ^ p_74), (*p_72))), 2))) == g_57)) != p_73)) == g_4)) == 0x94))) <= 0x5B283499);
                    (*l_120) = l_146;
                }
                else
                {
                    return p_72;
                }
            }
            else
            {
                uint8_t l_173 = 255U;
                int8_t l_208 = 0x1A;
                (*l_119) = p_72;
                if ((safe_lshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(p_73, g_57)), (l_173 != (l_131 | (0x69B8 | g_57))))))
                {
                    uint8_t l_185 = 0x75;
                    (*g_56) = 0x7804E31C;
                    l_174 = &g_138;
                    for (l_146 = (-20); (l_146 > 33); ++l_146)
                    {
                        int16_t l_184 = 0xDC18;
                        l_177 = p_72;
                        (*l_119) = p_72;
                        (*g_56) = ((((*p_72) >= 0x97568C23) , (&g_139 == (void*)0)) & ((((safe_mod_func_uint16_t_u_u(p_74, ((safe_sub_func_uint32_t_u_u(((0 & (safe_mod_func_int32_t_s_s(l_184, 0xBC0DD118))) <= (****l_174)), l_185)) || l_173))) > (***g_138)) != p_74) & g_57));
                    }
                    if ((**g_139))
                        break;
                }
                else
                {
                    int32_t l_205 = 0;
                    g_207 = ((((~(&g_138 == l_174)) < (safe_sub_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u(((((void*)0 == p_72) >= (safe_div_func_uint16_t_u_u((safe_div_func_int8_t_s_s((((safe_sub_func_int16_t_s_s((0x6EEA & p_74), g_57)) >= (((safe_lshift_func_uint16_t_u_s((((safe_div_func_int16_t_s_s((-9), (safe_lshift_func_int8_t_s_s(((+g_4) != (*l_177)), 7)))) , g_4) != l_204), l_205)) & 0xA6B184C1) < g_4)) || g_206), 0x91)), p_74))) || (*p_72)), l_173)), 0x56028530))) < p_73) >= 0x87);
                }
                (****l_174) = (l_208 <= (safe_lshift_func_uint16_t_u_s((p_73 < (safe_add_func_int32_t_s_s((**g_139), g_213))), 10)));
                (*l_119) = p_72;
            }
        }
        for (g_206 = 23; (g_206 < 49); g_206++)
        {
            (*l_119) = p_72;
        }
    }
    (*l_216) = (***l_174);
    (***g_138) = (**g_139);
    return p_72;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    g_56 = 0;
    csmith_sink_ = g_4;
    csmith_sink_ = g_57;
    csmith_sink_ = g_206;
    csmith_sink_ = g_207;
    csmith_sink_ = g_213;
    csmith_sink_ = g_252;
    csmith_sink_ = g_255;
    csmith_sink_ = g_295;
    csmith_sink_ = g_554;
    csmith_sink_ = g_626;
    csmith_sink_ = g_679;
    csmith_sink_ = g_860;
    platform_main_end(0,0);
    return 0;
}
