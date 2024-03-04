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
static int32_t g_9 = 0;
static uint16_t g_56 = 0xE320;
static uint32_t g_93 = 0xDD0FD02F;
static uint8_t g_107 = 255U;
static uint32_t g_113 = 0xCBD03F0C;
static int32_t g_115 = 4;
static int16_t g_129 = 0x7B36;
static int8_t g_131 = 0xA9;
static int32_t *g_139 = &g_9;
static int32_t *g_153 = &g_9;
static int8_t g_168 = 0x04;
static const uint32_t **g_182 = (void*)0;
static const uint32_t *g_187 = (void*)0;
static const uint32_t **g_186 = &g_187;
static int16_t g_201 = 0xCC2B;
static uint16_t *g_203 = &g_56;
static uint16_t **g_202 = &g_203;
static int32_t **g_212 = &g_139;
static uint8_t *g_243 = &g_107;
static uint8_t **g_242 = &g_243;
static uint8_t ***g_241 = &g_242;
static uint16_t g_275 = 0x1B5F;
static uint32_t g_276 = 0U;
static uint8_t ** const *g_288 = &g_242;
static uint8_t ** const **g_287 = &g_288;
static uint16_t ***g_318 = &g_202;
static uint8_t ****g_430 = &g_241;
static uint8_t *****g_429[4][9][7] = {{{(void*)0,&g_430,&g_430,(void*)0,(void*)0,&g_430,&g_430},{&g_430,(void*)0,&g_430,&g_430,&g_430,&g_430,&g_430},{(void*)0,&g_430,&g_430,(void*)0,(void*)0,(void*)0,(void*)0},{&g_430,&g_430,&g_430,&g_430,&g_430,&g_430,&g_430},{&g_430,(void*)0,&g_430,(void*)0,(void*)0,(void*)0,(void*)0},{&g_430,&g_430,&g_430,&g_430,&g_430,&g_430,&g_430},{(void*)0,&g_430,(void*)0,&g_430,(void*)0,(void*)0,(void*)0},{&g_430,&g_430,&g_430,&g_430,&g_430,&g_430,&g_430},{(void*)0,&g_430,(void*)0,(void*)0,&g_430,&g_430,(void*)0}},{{&g_430,&g_430,&g_430,(void*)0,&g_430,(void*)0,&g_430},{&g_430,&g_430,(void*)0,(void*)0,(void*)0,(void*)0,&g_430},{&g_430,&g_430,&g_430,(void*)0,&g_430,&g_430,&g_430},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&g_430},{&g_430,&g_430,&g_430,&g_430,&g_430,&g_430,&g_430},{(void*)0,&g_430,&g_430,&g_430,&g_430,(void*)0,&g_430},{&g_430,(void*)0,&g_430,&g_430,&g_430,(void*)0,&g_430},{(void*)0,&g_430,&g_430,(void*)0,(void*)0,&g_430,&g_430},{&g_430,(void*)0,&g_430,&g_430,&g_430,&g_430,&g_430}},{{(void*)0,&g_430,&g_430,(void*)0,(void*)0,(void*)0,(void*)0},{&g_430,&g_430,&g_430,&g_430,&g_430,&g_430,&g_430},{&g_430,(void*)0,&g_430,(void*)0,(void*)0,(void*)0,(void*)0},{&g_430,&g_430,&g_430,&g_430,&g_430,&g_430,&g_430},{(void*)0,&g_430,(void*)0,&g_430,(void*)0,(void*)0,(void*)0},{&g_430,&g_430,&g_430,&g_430,&g_430,&g_430,&g_430},{(void*)0,&g_430,(void*)0,(void*)0,&g_430,&g_430,(void*)0},{&g_430,&g_430,&g_430,(void*)0,&g_430,(void*)0,&g_430},{&g_430,&g_430,(void*)0,(void*)0,(void*)0,(void*)0,&g_430}},{{&g_430,&g_430,&g_430,(void*)0,&g_430,&g_430,&g_430},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&g_430},{&g_430,&g_430,&g_430,&g_430,&g_430,&g_430,&g_430},{(void*)0,&g_430,&g_430,&g_430,&g_430,(void*)0,&g_430},{&g_430,(void*)0,&g_430,&g_430,&g_430,(void*)0,&g_430},{(void*)0,&g_430,&g_430,(void*)0,(void*)0,&g_430,&g_430},{&g_430,(void*)0,&g_430,&g_430,&g_430,&g_430,&g_430},{(void*)0,&g_430,&g_430,(void*)0,(void*)0,(void*)0,(void*)0},{&g_430,&g_430,&g_430,&g_430,&g_430,&g_430,&g_430}}};
static uint8_t *****g_431 = (void*)0;
static uint32_t * const ***g_496 = (void*)0;
static uint32_t * const ****g_495[10][10] = {{&g_496,&g_496,(void*)0,&g_496,(void*)0,&g_496,(void*)0,&g_496,(void*)0,&g_496},{(void*)0,(void*)0,&g_496,&g_496,&g_496,(void*)0,&g_496,&g_496,&g_496,&g_496},{&g_496,(void*)0,(void*)0,&g_496,(void*)0,(void*)0,&g_496,(void*)0,(void*)0,&g_496},{(void*)0,&g_496,(void*)0,(void*)0,(void*)0,&g_496,&g_496,(void*)0,&g_496,&g_496},{&g_496,&g_496,&g_496,&g_496,(void*)0,&g_496,&g_496,&g_496,&g_496,&g_496},{(void*)0,&g_496,&g_496,&g_496,(void*)0,&g_496,&g_496,&g_496,&g_496,&g_496},{&g_496,&g_496,(void*)0,&g_496,&g_496,(void*)0,&g_496,&g_496,&g_496,&g_496},{&g_496,&g_496,&g_496,&g_496,(void*)0,&g_496,(void*)0,&g_496,&g_496,&g_496},{&g_496,&g_496,&g_496,(void*)0,&g_496,&g_496,&g_496,&g_496,(void*)0,&g_496},{(void*)0,&g_496,(void*)0,&g_496,(void*)0,&g_496,&g_496,&g_496,&g_496,&g_496}};
static uint32_t g_566 = 1U;
static int32_t * const *g_654 = &g_139;
static int32_t * const **g_653 = &g_654;
static uint8_t * const *g_665 = &g_243;
static uint8_t * const **g_664 = &g_665;
static const uint8_t g_812 = 7U;
static int16_t *g_839 = &g_201;
static int16_t *g_842 = &g_201;
static int16_t **g_841 = &g_842;
static int16_t **g_843[4][10][6] = {{{&g_842,&g_842,&g_842,&g_842,&g_842,&g_842},{(void*)0,&g_842,&g_842,&g_842,&g_842,&g_842},{&g_842,&g_842,&g_842,(void*)0,&g_842,&g_842},{&g_842,&g_842,&g_842,&g_842,&g_842,&g_842},{&g_842,&g_842,&g_842,&g_842,&g_842,&g_842},{&g_842,&g_842,&g_842,&g_842,(void*)0,&g_842},{&g_842,(void*)0,&g_842,&g_842,&g_842,&g_842},{&g_842,&g_842,&g_842,&g_842,&g_842,&g_842},{&g_842,&g_842,&g_842,&g_842,&g_842,&g_842},{&g_842,&g_842,&g_842,&g_842,&g_842,&g_842}},{{&g_842,&g_842,&g_842,&g_842,&g_842,&g_842},{&g_842,&g_842,&g_842,&g_842,&g_842,&g_842},{&g_842,&g_842,&g_842,&g_842,&g_842,&g_842},{&g_842,&g_842,&g_842,(void*)0,&g_842,&g_842},{&g_842,&g_842,(void*)0,&g_842,&g_842,&g_842},{&g_842,&g_842,&g_842,&g_842,(void*)0,&g_842},{&g_842,&g_842,&g_842,&g_842,&g_842,&g_842},{&g_842,&g_842,&g_842,&g_842,&g_842,&g_842},{&g_842,(void*)0,(void*)0,&g_842,(void*)0,&g_842},{&g_842,&g_842,&g_842,&g_842,&g_842,&g_842}},{{&g_842,&g_842,&g_842,&g_842,&g_842,(void*)0},{&g_842,(void*)0,&g_842,&g_842,&g_842,&g_842},{&g_842,&g_842,&g_842,&g_842,&g_842,&g_842},{&g_842,&g_842,&g_842,&g_842,&g_842,&g_842},{&g_842,&g_842,&g_842,&g_842,&g_842,&g_842},{&g_842,&g_842,(void*)0,&g_842,&g_842,&g_842},{&g_842,&g_842,&g_842,&g_842,&g_842,&g_842},{&g_842,&g_842,&g_842,(void*)0,&g_842,&g_842},{&g_842,(void*)0,&g_842,&g_842,&g_842,&g_842},{(void*)0,&g_842,&g_842,&g_842,&g_842,&g_842}},{{&g_842,&g_842,&g_842,&g_842,(void*)0,&g_842},{&g_842,(void*)0,&g_842,&g_842,&g_842,&g_842},{&g_842,&g_842,(void*)0,&g_842,&g_842,&g_842},{&g_842,&g_842,&g_842,&g_842,(void*)0,&g_842},{&g_842,&g_842,&g_842,&g_842,&g_842,&g_842},{&g_842,&g_842,&g_842,&g_842,&g_842,&g_842},{&g_842,&g_842,&g_842,&g_842,&g_842,(void*)0},{(void*)0,&g_842,&g_842,&g_842,&g_842,&g_842},{&g_842,&g_842,&g_842,(void*)0,&g_842,&g_842},{&g_842,&g_842,(void*)0,&g_842,&g_842,&g_842}}};
static uint16_t ****g_879 = &g_318;
static uint16_t **** const *g_878 = &g_879;
static uint16_t *g_884 = &g_275;
static const int32_t g_928[5] = {0x6D70F24B,0x6D70F24B,0x6D70F24B,0x6D70F24B,0x6D70F24B};
static const int16_t g_933 = 0x8ACC;
static uint32_t g_963 = 4294967288U;
static int16_t ****g_1012 = (void*)0;
static int16_t *****g_1011 = &g_1012;
static const int32_t *g_1159 = &g_9;
static uint32_t func_1(void);
static int16_t func_5(int16_t p_6);
inline static int32_t func_10(int16_t p_11);
static int32_t func_12(int16_t p_13, int32_t p_14, const int32_t * p_15, uint16_t p_16);
static const uint32_t func_17(int32_t * p_18);
static int32_t * func_19(int32_t * p_20, int8_t p_21);
static int32_t * func_22(int32_t * p_23, uint32_t p_24);
inline static int32_t * func_25(int32_t p_26, uint32_t p_27);
static uint16_t func_30(uint8_t p_31);
static uint8_t func_32(int8_t p_33, uint16_t p_34, uint8_t p_35);
static uint32_t func_1(void)
{
    uint8_t l_4 = 0xB1;
    int32_t **l_1285[10][3][5] = {{{&g_139,(void*)0,&g_139,&g_153,&g_153},{&g_153,&g_139,&g_153,(void*)0,(void*)0},{&g_139,&g_139,&g_139,(void*)0,&g_153}},{{(void*)0,(void*)0,&g_139,(void*)0,&g_153},{&g_153,&g_139,&g_139,(void*)0,&g_139},{(void*)0,(void*)0,&g_139,&g_153,(void*)0}},{{&g_139,&g_153,(void*)0,&g_139,&g_139},{(void*)0,&g_153,&g_139,(void*)0,&g_139},{&g_139,&g_153,&g_153,&g_153,&g_139}},{{&g_139,(void*)0,&g_153,&g_139,(void*)0},{(void*)0,&g_139,&g_139,&g_153,(void*)0},{(void*)0,&g_153,&g_139,(void*)0,(void*)0}},{{&g_139,&g_153,&g_139,&g_139,&g_139},{(void*)0,&g_153,&g_139,&g_139,&g_139},{(void*)0,(void*)0,&g_153,&g_153,&g_139}},{{&g_139,&g_153,&g_139,&g_139,(void*)0},{(void*)0,&g_139,&g_139,&g_153,&g_139},{&g_139,(void*)0,&g_139,&g_153,&g_139}},{{&g_139,(void*)0,&g_139,&g_139,(void*)0},{&g_139,&g_153,&g_153,&g_139,&g_139},{(void*)0,&g_153,&g_153,(void*)0,&g_139}},{{&g_139,&g_139,&g_139,&g_139,&g_139},{(void*)0,&g_139,(void*)0,(void*)0,(void*)0},{(void*)0,&g_139,&g_139,&g_139,(void*)0}},{{&g_139,&g_153,&g_139,&g_139,(void*)0},{(void*)0,&g_153,&g_139,&g_153,&g_139},{(void*)0,&g_153,&g_153,&g_153,(void*)0}},{{&g_139,&g_139,&g_153,&g_139,(void*)0},{&g_139,&g_139,&g_139,&g_153,&g_139},{(void*)0,&g_139,&g_139,&g_139,(void*)0}}};
    int32_t **l_1286[3][1];
    uint32_t l_1287[1];
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
            l_1286[i][j] = &g_153;
    }
    for (i = 0; i < 1; i++)
        l_1287[i] = 0U;
    (***g_653) = (safe_mod_func_uint16_t_u_u((l_4 ^ 0xF825), ((*g_839) = func_5(l_4))));
    (*g_212) = (**g_653);
    return l_1287[0];
}
static int16_t func_5(int16_t p_6)
{
    uint8_t l_7[6][8] = {{0x51,0x1D,0x9D,0x9D,0x1D,0x51,5U,0x51},{0x1D,0x51,5U,0x51,0x1D,0x9D,0x9D,0x1D},{0x51,0xB1,0xB1,0x51,0x48,0x1D,0x48,0x51},{0xB1,0x48,0xB1,0x9D,5U,5U,0x9D,0xB1},{0x48,0x48,5U,0x1D,252U,0x1D,5U,0x48},{0x48,0xB1,0x9D,5U,5U,0x9D,0xB1,0x48}};
    int32_t *l_8[10][1] = {{(void*)0},{&g_9},{&g_9},{&g_9},{&g_9},{(void*)0},{&g_9},{&g_9},{&g_9},{&g_9}};
    const int16_t *l_399 = &g_201;
    uint32_t l_1177 = 0U;
    const int16_t *l_1235 = &g_201;
    int16_t *l_1236 = &g_201;
    int8_t l_1239 = 0;
    uint32_t **l_1253 = (void*)0;
    uint32_t ***l_1252[2][5][9] = {{{(void*)0,(void*)0,&l_1253,&l_1253,&l_1253,&l_1253,&l_1253,&l_1253,&l_1253},{&l_1253,&l_1253,&l_1253,&l_1253,&l_1253,&l_1253,&l_1253,&l_1253,&l_1253},{&l_1253,&l_1253,&l_1253,&l_1253,&l_1253,&l_1253,&l_1253,&l_1253,&l_1253},{&l_1253,&l_1253,&l_1253,&l_1253,&l_1253,&l_1253,&l_1253,&l_1253,&l_1253},{&l_1253,&l_1253,&l_1253,&l_1253,&l_1253,&l_1253,&l_1253,&l_1253,&l_1253}},{{&l_1253,&l_1253,&l_1253,&l_1253,&l_1253,&l_1253,&l_1253,&l_1253,&l_1253},{&l_1253,&l_1253,&l_1253,&l_1253,&l_1253,&l_1253,&l_1253,&l_1253,&l_1253},{&l_1253,&l_1253,&l_1253,&l_1253,&l_1253,&l_1253,&l_1253,&l_1253,&l_1253},{&l_1253,&l_1253,&l_1253,&l_1253,&l_1253,&l_1253,&l_1253,&l_1253,&l_1253},{&l_1253,&l_1253,&l_1253,&l_1253,&l_1253,&l_1253,&l_1253,&l_1253,&l_1253}}};
    uint32_t ****l_1251 = &l_1252[1][0][4];
    uint32_t *****l_1250[3][9][8] = {{{&l_1251,(void*)0,(void*)0,&l_1251,&l_1251,(void*)0,&l_1251,&l_1251},{&l_1251,&l_1251,&l_1251,&l_1251,(void*)0,&l_1251,&l_1251,(void*)0},{&l_1251,&l_1251,(void*)0,&l_1251,&l_1251,(void*)0,&l_1251,&l_1251},{&l_1251,&l_1251,&l_1251,&l_1251,&l_1251,&l_1251,&l_1251,&l_1251},{&l_1251,&l_1251,&l_1251,&l_1251,(void*)0,(void*)0,&l_1251,&l_1251},{(void*)0,&l_1251,&l_1251,&l_1251,&l_1251,&l_1251,&l_1251,(void*)0},{&l_1251,&l_1251,&l_1251,&l_1251,&l_1251,&l_1251,&l_1251,&l_1251},{(void*)0,&l_1251,&l_1251,&l_1251,&l_1251,&l_1251,&l_1251,&l_1251},{&l_1251,&l_1251,&l_1251,&l_1251,&l_1251,&l_1251,(void*)0,(void*)0}},{{&l_1251,&l_1251,&l_1251,&l_1251,&l_1251,(void*)0,&l_1251,&l_1251},{(void*)0,&l_1251,&l_1251,&l_1251,&l_1251,&l_1251,(void*)0,&l_1251},{&l_1251,&l_1251,&l_1251,&l_1251,&l_1251,(void*)0,(void*)0,&l_1251},{&l_1251,&l_1251,&l_1251,&l_1251,(void*)0,&l_1251,(void*)0,&l_1251},{&l_1251,&l_1251,&l_1251,&l_1251,(void*)0,(void*)0,&l_1251,&l_1251},{&l_1251,&l_1251,(void*)0,&l_1251,&l_1251,&l_1251,(void*)0,&l_1251},{&l_1251,&l_1251,&l_1251,&l_1251,(void*)0,&l_1251,&l_1251,&l_1251},{&l_1251,&l_1251,&l_1251,&l_1251,(void*)0,&l_1251,&l_1251,&l_1251},{&l_1251,(void*)0,(void*)0,&l_1251,(void*)0,(void*)0,&l_1251,&l_1251}},{{&l_1251,&l_1251,&l_1251,&l_1251,&l_1251,&l_1251,&l_1251,(void*)0},{(void*)0,&l_1251,&l_1251,(void*)0,&l_1251,&l_1251,&l_1251,&l_1251},{(void*)0,&l_1251,&l_1251,&l_1251,&l_1251,(void*)0,&l_1251,&l_1251},{(void*)0,(void*)0,&l_1251,&l_1251,&l_1251,&l_1251,&l_1251,&l_1251},{&l_1251,&l_1251,&l_1251,&l_1251,&l_1251,&l_1251,&l_1251,&l_1251},{(void*)0,&l_1251,&l_1251,&l_1251,&l_1251,&l_1251,&l_1251,&l_1251},{&l_1251,&l_1251,&l_1251,(void*)0,&l_1251,&l_1251,&l_1251,(void*)0},{&l_1251,(void*)0,&l_1251,&l_1251,(void*)0,(void*)0,&l_1251,&l_1251},{&l_1251,(void*)0,&l_1251,&l_1251,(void*)0,&l_1251,&l_1251,&l_1251}}};
    uint16_t ***l_1254[6];
    uint16_t **l_1257 = &g_203;
    uint16_t ***l_1256 = &l_1257;
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_1254[i] = (void*)0;
    g_9 = l_7[2][6];
    for (p_6 = 5; (p_6 >= 0); p_6 -= 1)
    {
        uint32_t l_396[10] = {0xD68F9C78,4294967286U,0x8DDD2812,4294967286U,0xD68F9C78,0xD68F9C78,4294967286U,0x8DDD2812,4294967286U,0xD68F9C78};
        int32_t l_400 = 0x7AB3F356;
        uint8_t l_1188 = 3U;
        int32_t l_1212[1][8] = {{0,(-1),(-1),0,(-1),(-1),0,(-1)}};
        uint32_t *l_1232 = &g_566;
        uint32_t **l_1231 = &l_1232;
        uint32_t ***l_1230 = &l_1231;
        uint32_t ****l_1229 = &l_1230;
        uint16_t **l_1242 = (void*)0;
        int i, j;
    }
    return (*g_842);
}
inline static int32_t func_10(int16_t p_11)
{
    (*g_153) = p_11;
    return p_11;
}
static int32_t func_12(int16_t p_13, int32_t p_14, const int32_t * p_15, uint16_t p_16)
{
    const int32_t l_833 = 0;
    uint16_t *l_834 = &g_275;
    int16_t *l_835 = &g_129;
    int16_t *l_838 = &g_201;
    int32_t l_876 = 0x58EACA6D;
    uint32_t l_886 = 0xDCB29EF2;
    int8_t l_897 = 0x4D;
    uint16_t ** const *l_920 = &g_202;
    uint16_t ** const **l_919[2];
    uint32_t l_964 = 1U;
    uint8_t *****l_1026[6][1];
    const int32_t *l_1070 = (void*)0;
    int16_t ** const *l_1087[4][3];
    int16_t ** const **l_1086 = &l_1087[1][2];
    uint32_t l_1130 = 0x9E84B45B;
    const uint16_t l_1131 = 0x8ED4;
    int16_t ***l_1144 = &g_843[1][1][0];
    int16_t ****l_1143 = &l_1144;
    uint16_t l_1157 = 65535U;
    int i, j;
    for (i = 0; i < 2; i++)
        l_919[i] = &l_920;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 1; j++)
            l_1026[i][j] = (void*)0;
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
            l_1087[i][j] = &g_841;
    }
lbl_1030:
    (*g_153) = ((safe_sub_func_uint8_t_u_u(255U, 0x24)) && ((*g_243) = ((safe_sub_func_uint8_t_u_u(l_833, g_115)) >= ((((-1) || ((*l_835) = (0xFF37 == ((*l_834) = ((**g_202) = (***g_318)))))) & (safe_add_func_int16_t_s_s((p_16 & p_16), g_812))) || 0xDC))));
    for (g_115 = 3; (g_115 >= 0); g_115 -= 1)
    {
        int16_t **l_840 = &l_835;
        int32_t l_848 = (-8);
        int16_t l_923 = 0x8738;
        uint32_t *l_926 = &g_566;
        const int32_t *l_927 = &g_928[1];
        uint32_t l_1022 = 7U;
        int16_t l_1041 = (-1);
        int16_t l_1048 = 1;
        uint16_t ** const l_1095 = (void*)0;
        int16_t l_1096 = 0x7129;
        (*g_153) = (((l_838 != ((*l_840) = (g_839 = l_835))) | (g_841 != (g_843[1][3][3] = &g_842))) <= (((safe_lshift_func_int8_t_s_u(g_275, ((safe_rshift_func_int16_t_s_s(1, 2)) || 0U))) == (l_848 != ((safe_lshift_func_int8_t_s_u(g_113, 1)) < p_14))) || l_833));
    }
    for (g_168 = 8; (g_168 >= 0); g_168 -= 1)
    {
        uint32_t l_1099 = 0xB0D8EB90;
        uint8_t ****l_1129 = &g_241;
        int32_t *l_1132 = (void*)0;
        if (g_275)
            goto lbl_1030;
        if (p_16)
            continue;
        for (g_276 = 0; (g_276 <= 0); g_276 += 1)
        {
            uint32_t *l_1115 = &g_276;
            uint32_t **l_1114[8][8] = {{&l_1115,&l_1115,&l_1115,&l_1115,&l_1115,&l_1115,&l_1115,&l_1115},{&l_1115,&l_1115,&l_1115,&l_1115,&l_1115,&l_1115,&l_1115,&l_1115},{&l_1115,&l_1115,&l_1115,&l_1115,&l_1115,&l_1115,&l_1115,&l_1115},{&l_1115,&l_1115,&l_1115,&l_1115,&l_1115,&l_1115,&l_1115,&l_1115},{&l_1115,&l_1115,&l_1115,&l_1115,&l_1115,&l_1115,&l_1115,&l_1115},{&l_1115,&l_1115,&l_1115,&l_1115,&l_1115,&l_1115,&l_1115,&l_1115},{&l_1115,&l_1115,&l_1115,&l_1115,&l_1115,&l_1115,&l_1115,&l_1115},{&l_1115,&l_1115,&l_1115,&l_1115,&l_1115,&l_1115,&l_1115,&l_1115}};
            uint8_t l_1126 = 1U;
            int i, j;
            for (l_876 = 0; (l_876 >= 0); l_876 -= 1)
            {
                uint8_t l_1111 = 0xAF;
                int32_t l_1112 = 0x8A91026D;
                for (g_93 = 0; (g_93 <= 3); g_93 += 1)
                {
                    int32_t l_1108 = 0x8B73D797;
                    int32_t l_1113 = (-1);
                    int i, j, k;
                    (*g_153) = (((safe_sub_func_int16_t_s_s(l_1099, (safe_sub_func_int32_t_s_s((+0x69CB), (p_13 != (p_13 < ((!(safe_sub_func_uint32_t_u_u(((safe_mod_func_int16_t_s_s((l_1108 | (safe_add_func_uint8_t_u_u((***g_664), (l_1113 = (l_1112 = (p_16 & ((p_13 ^ ((*g_884) = (**g_202))) || l_1111))))))), l_1099)) ^ (****g_879)), l_1111))) && (-9)))))))) > l_1099) <= p_14);
                    for (g_115 = 3; (g_115 <= 9); g_115 += 1)
                    {
                        (*g_153) = 0xB675DF0C;
                    }
                    for (p_14 = 6; (p_14 >= 0); p_14 -= 1)
                    {
                        uint32_t ***l_1116 = &l_1114[1][5];
                        int i, j;
                        (*l_1116) = l_1114[4][7];
                        p_15 = p_15;
                        return p_14;
                    }
                }
                if (l_1112)
                    break;
                if ((*g_153))
                    continue;
            }
            (*g_153) = ((((safe_sub_func_int8_t_s_s(p_13, (1U <= p_14))) || ((((safe_lshift_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((((+(((((**g_665) = ((0x9A06CAB6 > ((l_1126 | l_1126) > (safe_sub_func_uint8_t_u_u((*g_243), ((l_1129 = (void*)0) != (void*)0))))) ^ l_1130)) > p_13) != 8U) == p_16)) <= 0x67) && (-1)), l_1099)), l_1099)), 1)) != 2U) >= p_13) && l_1131)) | p_13) <= (*g_153));
            p_15 = l_1132;
        }
    }
    for (l_886 = (-1); (l_886 >= 26); l_886 = safe_add_func_int8_t_s_s(l_886, 9))
    {
        uint32_t l_1139[9][1] = {{1U},{0x6ED3D25B},{1U},{0x6ED3D25B},{1U},{0x6ED3D25B},{1U},{0x6ED3D25B},{1U}};
        uint32_t *l_1140 = (void*)0;
        uint32_t *l_1141[3];
        int32_t l_1142 = 0xC36A7DB6;
        int16_t ****l_1145 = (void*)0;
        int32_t l_1146 = (-2);
        uint8_t *l_1153 = &g_107;
        const uint8_t **l_1154 = (void*)0;
        const uint8_t *l_1156 = &g_812;
        const uint8_t **l_1155 = &l_1156;
        const int32_t *l_1158 = &l_1142;
        int8_t l_1174 = 0xA1;
        int8_t l_1175 = 3;
        uint8_t *****l_1176 = &g_430;
        int i, j;
        for (i = 0; i < 3; i++)
            l_1141[i] = &g_93;
        g_1159 = l_1158;
        for (g_276 = 28; (g_276 < 50); ++g_276)
        {
            uint8_t *****l_1169 = &g_430;
            int32_t l_1172 = (-1);
            int8_t *l_1173 = &g_131;
            l_1146 = ((safe_mod_func_uint16_t_u_u(((p_13 = ((!(l_876 = ((((safe_lshift_func_int8_t_s_u((safe_add_func_uint32_t_u_u((((l_1169 != &g_430) & ((0x001C4666 | 0x0F8F92ED) >= ((*l_835) = (p_13 > (((*l_1173) = (0x53 <= ((((*l_838) = (l_1142 = ((p_15 == &l_1146) >= ((safe_lshift_func_uint8_t_u_u(l_1172, (*l_1158))) != p_13)))) > p_13) & p_16))) ^ (-1)))))) || l_1174), l_1172)), 2)) < l_1175) | (****g_879)) || 1U))) < 0)) != (****g_879)), p_16)) && (*l_1158));
            g_429[1][3][4] = (l_1176 = &g_430);
        }
    }
    return p_16;
}
static const uint32_t func_17(int32_t * p_18)
{
    int32_t *l_822 = &g_9;
    int32_t l_828 = 0;
    for (g_9 = (-22); (g_9 <= (-16)); g_9 = safe_add_func_int32_t_s_s(g_9, 9))
    {
        int32_t l_826 = 1;
        int16_t *l_827 = &g_129;
        (*g_212) = func_19(l_822, (~(safe_lshift_func_int16_t_s_u(((*l_827) = l_826), 15))));
        (*g_212) = p_18;
        l_828 = l_826;
    }
    return (*l_822);
}
static int32_t * func_19(int32_t * p_20, int8_t p_21)
{
    int32_t *l_534[10][4] = {{&g_9,&g_9,&g_9,&g_9},{&g_115,&g_9,&g_115,&g_9},{&g_9,(void*)0,&g_115,&g_115},{&g_115,&g_115,&g_9,&g_115},{&g_9,(void*)0,&g_9,&g_9},{&g_9,&g_9,&g_9,&g_9},{&g_115,&g_9,&g_115,&g_9},{&g_9,(void*)0,&g_115,&g_115},{&g_115,&g_115,&g_9,&g_115},{&g_9,(void*)0,&g_9,&g_9}};
    uint16_t l_548 = 0U;
    int16_t *l_555 = &g_201;
    int16_t * const *l_554 = &l_555;
    uint32_t l_558 = 0xE535241B;
    uint32_t l_565 = 2U;
    uint16_t **l_610 = (void*)0;
    const uint32_t ***l_632 = &g_182;
    const uint32_t ****l_631 = &l_632;
    const uint32_t *****l_630 = &l_631;
    uint16_t l_661[3][7] = {{65535U,65535U,65535U,65535U,65535U,65535U,65535U},{1U,2U,1U,2U,1U,2U,1U},{65535U,65535U,65535U,65535U,65535U,65535U,65535U}};
    int32_t ***l_697 = &g_212;
    uint8_t * const ***l_705 = &g_664;
    uint8_t * const ****l_704 = &l_705;
    uint8_t * const ****l_706 = &l_705;
    uint32_t l_714 = 4294967295U;
    uint16_t l_720 = 65535U;
    uint16_t *l_730 = (void*)0;
    const uint8_t *l_808[1][3];
    const uint8_t *l_811 = &g_812;
    int8_t *l_816[8] = {&g_131,(void*)0,&g_131,(void*)0,&g_131,(void*)0,&g_131,(void*)0};
    uint32_t l_817 = 4294967295U;
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_808[i][j] = (void*)0;
    }
    for (g_93 = 0; (g_93 <= 36); ++g_93)
    {
        (*g_212) = p_20;
    }
    for (g_115 = 0; (g_115 < 10); g_115 = safe_add_func_int16_t_s_s(g_115, 5))
    {
        int32_t l_605 = 0x33C63A25;
        int32_t l_614 = 1;
        uint16_t l_659 = 0x6386;
        uint8_t l_699 = 0x71;
        uint8_t l_737 = 255U;
        int32_t l_778 = 0xB304FF51;
        int32_t l_780[4][7] = {{0,0x0248581D,0,0x0248581D,0,0x0248581D,0},{(-1),(-1),7,7,(-1),(-1),7},{0x53F0F93C,0x0248581D,0x53F0F93C,0x0248581D,0x53F0F93C,0x0248581D,0x53F0F93C},{(-1),7,7,(-1),(-1),7,7}};
        uint16_t l_786[3];
        uint32_t ***l_800[1][1];
        uint32_t ****l_799[10][2] = {{(void*)0,(void*)0},{(void*)0,&l_800[0][0]},{&l_800[0][0],(void*)0},{&l_800[0][0],(void*)0},{&l_800[0][0],&l_800[0][0]},{(void*)0,(void*)0},{(void*)0,&l_800[0][0]},{&l_800[0][0],(void*)0},{&l_800[0][0],(void*)0},{&l_800[0][0],&l_800[0][0]}};
        uint32_t *****l_798 = &l_799[5][1];
        int8_t *l_815 = (void*)0;
        int i, j;
        for (i = 0; i < 3; i++)
            l_786[i] = 6U;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
                l_800[i][j] = (void*)0;
        }
    }
    (*g_212) = p_20;
    return (*g_212);
}
static int32_t * func_22(int32_t * p_23, uint32_t p_24)
{
    uint8_t l_401 = 0xED;
    int16_t l_402[9][10] = {{0xBC3E,1,1,0xBC3E,1,1,0xBC3E,1,1,0xBC3E},{1,0xBC3E,1,1,0xBC3E,1,1,0xBC3E,1,1},{0xBC3E,0xBC3E,0x2325,0xBC3E,0xBC3E,0x2325,0xBC3E,0xBC3E,0x2325,0xBC3E},{0xBC3E,1,1,0xBC3E,1,1,0xBC3E,1,1,0xBC3E},{1,0xBC3E,1,1,0xBC3E,1,1,0xBC3E,1,1},{0xBC3E,0xBC3E,0x2325,0xBC3E,0xBC3E,0x2325,0xBC3E,0xBC3E,0x2325,0xBC3E},{0xBC3E,1,0x2325,1,0x2325,0x2325,1,0x2325,0x2325,1},{0x2325,1,0x2325,0x2325,1,0x2325,0x2325,1,0x2325,0x2325},{1,1,0xBC3E,1,1,0xBC3E,1,1,0xBC3E,1}};
    uint8_t ****l_406 = &g_241;
    uint8_t *****l_405 = &l_406;
    int32_t * const l_432 = &g_115;
    int8_t l_510 = 0x4A;
    uint16_t *** const *l_523[6][6][4] = {{{&g_318,(void*)0,&g_318,&g_318},{(void*)0,&g_318,&g_318,&g_318},{&g_318,&g_318,&g_318,(void*)0},{(void*)0,&g_318,&g_318,&g_318},{&g_318,&g_318,&g_318,(void*)0},{&g_318,&g_318,&g_318,&g_318}},{{&g_318,&g_318,&g_318,&g_318},{&g_318,&g_318,&g_318,&g_318},{(void*)0,&g_318,&g_318,&g_318},{&g_318,&g_318,(void*)0,(void*)0},{&g_318,(void*)0,(void*)0,&g_318},{&g_318,&g_318,&g_318,&g_318}},{{&g_318,&g_318,&g_318,(void*)0},{&g_318,&g_318,(void*)0,(void*)0},{&g_318,&g_318,(void*)0,&g_318},{(void*)0,&g_318,&g_318,&g_318},{&g_318,(void*)0,&g_318,(void*)0},{&g_318,&g_318,&g_318,&g_318}},{{(void*)0,&g_318,&g_318,&g_318},{&g_318,&g_318,&g_318,&g_318},{&g_318,&g_318,&g_318,&g_318},{(void*)0,&g_318,(void*)0,(void*)0},{(void*)0,&g_318,&g_318,&g_318},{&g_318,&g_318,&g_318,(void*)0}},{{&g_318,&g_318,&g_318,&g_318},{&g_318,&g_318,&g_318,&g_318},{&g_318,(void*)0,&g_318,(void*)0},{&g_318,&g_318,&g_318,&g_318},{&g_318,&g_318,&g_318,&g_318},{(void*)0,&g_318,(void*)0,(void*)0}},{{(void*)0,&g_318,&g_318,(void*)0},{&g_318,&g_318,&g_318,&g_318},{&g_318,(void*)0,&g_318,&g_318},{(void*)0,&g_318,&g_318,&g_318},{&g_318,&g_318,&g_318,&g_318},{&g_318,&g_318,&g_318,&g_318}}};
    int32_t *l_531 = (void*)0;
    int i, j, k;
    (*p_23) = l_401;
    for (l_401 = 1; (l_401 <= 8); l_401 += 1)
    {
        uint8_t ****l_404[10] = {&g_241,&g_241,&g_241,&g_241,&g_241,&g_241,&g_241,&g_241,&g_241,&g_241};
        uint8_t *****l_403 = &l_404[3];
        int32_t l_407 = (-1);
        uint8_t * const * const l_421 = (void*)0;
        uint8_t * const * const *l_420[3][9][2] = {{{&l_421,&l_421},{(void*)0,&l_421},{(void*)0,&l_421},{&l_421,&l_421},{(void*)0,&l_421},{&l_421,&l_421},{&l_421,&l_421},{&l_421,&l_421},{&l_421,&l_421}},{{&l_421,&l_421},{&l_421,&l_421},{&l_421,&l_421},{&l_421,&l_421},{&l_421,&l_421},{&l_421,&l_421},{&l_421,&l_421},{&l_421,&l_421},{&l_421,&l_421}},{{&l_421,&l_421},{&l_421,&l_421},{&l_421,&l_421},{&l_421,&l_421},{&l_421,&l_421},{&l_421,&l_421},{&l_421,&l_421},{&l_421,&l_421},{&l_421,&l_421}}};
        uint8_t * const * const **l_419 = &l_420[2][8][0];
        int32_t l_424 = (-4);
        int8_t *l_449 = &g_168;
        uint32_t l_450 = 4294967287U;
        int16_t *l_451[1];
        uint8_t ****l_464[3];
        int32_t ***l_474 = &g_212;
        uint32_t * const ****l_507 = (void*)0;
        uint16_t ****l_530[5][7][7] = {{{&g_318,&g_318,&g_318,&g_318,&g_318,&g_318,&g_318},{&g_318,&g_318,&g_318,&g_318,&g_318,&g_318,&g_318},{(void*)0,&g_318,&g_318,&g_318,&g_318,&g_318,&g_318},{&g_318,(void*)0,&g_318,&g_318,&g_318,&g_318,&g_318},{&g_318,&g_318,&g_318,&g_318,(void*)0,&g_318,(void*)0},{(void*)0,&g_318,&g_318,&g_318,&g_318,&g_318,&g_318},{&g_318,(void*)0,&g_318,&g_318,&g_318,&g_318,&g_318}},{{&g_318,&g_318,&g_318,&g_318,&g_318,&g_318,(void*)0},{&g_318,&g_318,(void*)0,&g_318,&g_318,&g_318,(void*)0},{&g_318,(void*)0,&g_318,&g_318,&g_318,&g_318,&g_318},{&g_318,&g_318,(void*)0,&g_318,(void*)0,&g_318,&g_318},{&g_318,&g_318,&g_318,&g_318,&g_318,&g_318,&g_318},{&g_318,&g_318,&g_318,(void*)0,(void*)0,&g_318,&g_318},{&g_318,&g_318,(void*)0,&g_318,(void*)0,&g_318,&g_318}},{{&g_318,&g_318,&g_318,&g_318,&g_318,&g_318,&g_318},{(void*)0,&g_318,&g_318,(void*)0,&g_318,&g_318,&g_318},{(void*)0,&g_318,&g_318,&g_318,&g_318,&g_318,&g_318},{&g_318,&g_318,&g_318,&g_318,&g_318,&g_318,&g_318},{&g_318,(void*)0,&g_318,&g_318,&g_318,(void*)0,&g_318},{&g_318,&g_318,&g_318,&g_318,&g_318,&g_318,(void*)0},{&g_318,(void*)0,(void*)0,&g_318,(void*)0,&g_318,&g_318}},{{&g_318,&g_318,&g_318,&g_318,(void*)0,&g_318,&g_318},{&g_318,&g_318,&g_318,&g_318,&g_318,(void*)0,(void*)0},{&g_318,&g_318,(void*)0,(void*)0,&g_318,(void*)0,&g_318},{&g_318,(void*)0,&g_318,(void*)0,&g_318,&g_318,&g_318},{&g_318,&g_318,&g_318,&g_318,&g_318,(void*)0,(void*)0},{(void*)0,&g_318,(void*)0,&g_318,&g_318,&g_318,&g_318},{&g_318,&g_318,&g_318,&g_318,&g_318,&g_318,&g_318}},{{&g_318,&g_318,&g_318,&g_318,&g_318,&g_318,&g_318},{&g_318,&g_318,&g_318,(void*)0,&g_318,&g_318,&g_318},{(void*)0,&g_318,&g_318,&g_318,&g_318,(void*)0,&g_318},{&g_318,&g_318,&g_318,&g_318,&g_318,(void*)0,(void*)0},{(void*)0,&g_318,&g_318,&g_318,&g_318,(void*)0,&g_318},{&g_318,(void*)0,&g_318,&g_318,&g_318,&g_318,&g_318},{(void*)0,&g_318,&g_318,&g_318,&g_318,&g_318,&g_318}}};
        uint16_t *****l_529 = &l_530[3][6][4];
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_451[i] = (void*)0;
        for (i = 0; i < 3; i++)
            l_464[i] = &g_241;
        for (g_201 = 0; (g_201 <= 8); g_201 += 1)
        {
            int i, j;
            if (l_402[g_201][(g_201 + 1)])
                break;
            for (g_115 = 5; (g_115 >= 2); g_115 -= 1)
            {
                l_405 = l_403;
                if ((*g_153))
                    break;
                (*g_212) = (*g_212);
                if (l_407)
                    break;
            }
        }
        for (g_113 = 2; (g_113 <= 9); g_113 += 1)
        {
            if ((*p_23))
                break;
        }
    }
    return l_531;
}
inline static int32_t * func_25(int32_t p_26, uint32_t p_27)
{
    int32_t *l_48[2][6][3] = {{{&g_9,&g_9,&g_9},{&g_9,&g_9,(void*)0},{(void*)0,&g_9,&g_9},{(void*)0,&g_9,&g_9},{&g_9,&g_9,&g_9},{&g_9,&g_9,&g_9}},{{&g_9,&g_9,&g_9},{&g_9,&g_9,(void*)0},{(void*)0,&g_9,&g_9},{(void*)0,&g_9,&g_9},{&g_9,&g_9,&g_9},{&g_9,&g_9,&g_9}}};
    uint32_t *l_369 = &g_93;
    uint32_t **l_368 = &l_369;
    uint32_t ***l_367 = &l_368;
    uint32_t ****l_366 = &l_367;
    int8_t l_382 = (-1);
    int i, j, k;
    p_26 = ((((***g_318) = (0x2803 && (safe_mod_func_uint8_t_u_u(((0x2F == 0xFC) <= (0x4A6B && ((func_30(func_32((safe_mod_func_int8_t_s_s(((safe_mod_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((((safe_unary_minus_func_int8_t_s(4)) == (safe_add_func_int32_t_s_s((safe_sub_func_uint8_t_u_u((+(p_27 <= (p_27 | ((l_48[1][1][2] == (void*)0) & 0x20C3)))), p_26)), p_26))) != p_27), (-1))), p_27)) ^ p_27), g_9)), p_26, g_9)) < 1U) && (-1)))), p_26)))) >= 0xAD14) < p_27);
    for (g_276 = 0; (g_276 >= 44); ++g_276)
    {
        uint32_t *****l_370[8][2] = {{&l_366,&l_366},{&l_366,&l_366},{&l_366,&l_366},{&l_366,&l_366},{&l_366,&l_366},{&l_366,&l_366},{&l_366,&l_366},{&l_366,&l_366}};
        int16_t *l_374 = &g_129;
        int32_t *l_383 = &g_115;
        int16_t l_391 = (-8);
        int i, j;
        for (g_107 = 0; (g_107 == 39); g_107 = safe_add_func_uint16_t_u_u(g_107, 8))
        {
            if ((*g_139))
                break;
        }
        g_115 = (safe_sub_func_int32_t_s_s(((l_366 = l_366) != (void*)0), (safe_rshift_func_int16_t_s_u((((*l_374) = (0x32 > (+((**g_212) = ((*g_241) == (void*)0))))) && ((safe_rshift_func_uint16_t_u_s(((safe_mod_func_int32_t_s_s((*g_153), p_26)) > g_113), p_27)) & 0xFF97)), 0))));
        p_26 = ((*g_153) = 0xD7C328C4);
        if (p_27)
        {
            int16_t l_381[7] = {0x1046,(-4),0x1046,0x1046,(-4),0x1046,0x1046};
            int i;
            (*g_153) = 0xE9C39695;
            for (p_26 = 0; (p_26 >= (-13)); p_26--)
            {
                l_382 = l_381[3];
            }
            return l_383;
        }
        else
        {
            int32_t l_386 = 7;
            for (g_56 = 0; (g_56 <= 1); g_56 += 1)
            {
                (*g_212) = (*g_212);
                (**g_212) = ((safe_mod_func_uint32_t_u_u((l_386 && 0), p_27)) <= ((safe_rshift_func_uint16_t_u_s((g_275 = ((safe_sub_func_uint16_t_u_u((g_131 <= ((l_391 <= 0x48E30274) < p_27)), g_113)) || (((*l_383) = (((void*)0 == &l_391) != g_56)) | 0xCF))), 13)) >= g_107));
            }
        }
    }
    return (*g_212);
}
static uint16_t func_30(uint8_t p_31)
{
    const uint16_t *l_102 = &g_56;
    uint32_t *l_126 = &g_113;
    uint8_t *l_134[6];
    uint8_t ** const l_133 = &l_134[0];
    int32_t l_148 = 0;
    int32_t *l_169 = (void*)0;
    uint32_t l_245 = 4294967288U;
    uint8_t ****l_283[9][9] = {{&g_241,&g_241,&g_241,(void*)0,&g_241,&g_241,(void*)0,&g_241,&g_241},{&g_241,&g_241,&g_241,&g_241,&g_241,&g_241,&g_241,&g_241,&g_241},{&g_241,&g_241,&g_241,&g_241,&g_241,&g_241,&g_241,&g_241,&g_241},{&g_241,&g_241,&g_241,&g_241,&g_241,&g_241,&g_241,&g_241,&g_241},{(void*)0,&g_241,&g_241,&g_241,&g_241,&g_241,&g_241,&g_241,&g_241},{&g_241,&g_241,(void*)0,&g_241,(void*)0,&g_241,&g_241,&g_241,&g_241},{(void*)0,&g_241,(void*)0,&g_241,&g_241,(void*)0,&g_241,(void*)0,&g_241},{&g_241,&g_241,&g_241,(void*)0,(void*)0,&g_241,&g_241,(void*)0,&g_241},{&g_241,&g_241,&g_241,&g_241,&g_241,&g_241,&g_241,(void*)0,&g_241}};
    const uint16_t l_312 = 0xABC6;
    uint16_t l_341 = 0x024C;
    uint32_t * const *l_356 = &l_126;
    uint32_t * const **l_355 = &l_356;
    int i, j;
    for (i = 0; i < 6; i++)
        l_134[i] = &g_107;
    if (g_93)
    {
        uint32_t *l_125 = &g_93;
        uint32_t **l_124 = &l_125;
        uint16_t *l_127 = &g_56;
        int16_t *l_128 = &g_129;
        int8_t *l_130 = &g_131;
        int32_t l_132 = 0x83AD51AC;
        uint8_t **l_136 = &l_134[5];
        uint8_t ***l_135 = &l_136;
        int32_t *l_138 = (void*)0;
        int32_t **l_137[7] = {&l_138,&l_138,&l_138,&l_138,&l_138,&l_138,&l_138};
        int i;
        for (g_93 = 4; (g_93 == 7); g_93 = safe_add_func_uint8_t_u_u(g_93, 5))
        {
            uint32_t l_100[1];
            int32_t l_108 = 0x31F48307;
            uint8_t l_116 = 255U;
            int i;
            for (i = 0; i < 1; i++)
                l_100[i] = 0x7123A743;
            for (g_9 = 0; (g_9 <= 0); g_9 += 1)
            {
                const uint16_t **l_103 = (void*)0;
                const uint16_t **l_104 = (void*)0;
                const uint16_t **l_105 = &l_102;
                uint8_t *l_106[2];
                uint32_t *l_111 = (void*)0;
                uint32_t *l_112 = &g_113;
                int32_t *l_114 = &g_115;
                int i;
                for (i = 0; i < 2; i++)
                    l_106[i] = &g_107;
                (*l_114) = (((*l_112) = (~((l_108 = (((*l_105) = l_102) != (void*)0)) & (safe_rshift_func_uint8_t_u_s(l_100[g_9], 2))))) >= p_31);
                if (g_56)
                    break;
            }
            if (l_116)
                break;
        }
        g_115 = ((safe_add_func_uint8_t_u_u(g_113, 0x66)) || ((safe_mod_func_int8_t_s_s(0x00, (((0xAB26F933 > (-4)) && g_93) & (safe_add_func_uint16_t_u_u((+(((*l_130) = (g_9 == ((*l_128) = (((*l_127) = (((*l_124) = &g_113) != (l_126 = &g_113))) >= 65530U)))) < g_107)), l_132))))) && g_56));
        (*l_135) = l_133;
        g_139 = &g_9;
    }
    else
    {
        int32_t **l_150 = &g_139;
        int32_t *l_152 = &g_115;
        int32_t **l_151[7] = {&l_152,&l_152,&l_152,&l_152,&l_152,&l_152,&l_152};
        int i;
        for (g_56 = 28; (g_56 >= 48); g_56 = safe_add_func_uint16_t_u_u(g_56, 3))
        {
            uint32_t l_145 = 0xA92C7647;
            for (g_129 = 5; (g_129 >= 0); g_129 -= 1)
            {
                int32_t l_144 = 1;
                if (p_31)
                    break;
                for (p_31 = 0; (p_31 <= 5); p_31 += 1)
                {
                    int32_t l_149 = (-9);
                    int i;
                    l_148 = (((*l_126) = ((safe_add_func_int32_t_s_s((l_134[p_31] == &p_31), ((g_115 | l_144) <= (l_145 & (0x3A172F11 | ((*g_139) = ((p_31 | p_31) > (safe_add_func_uint8_t_u_u(0x5B, 253U))))))))) & 4)) && p_31);
                    (*g_139) = l_149;
                }
            }
        }
        g_153 = ((*l_150) = &g_9);
    }
    for (g_113 = 0; (g_113 != 18); g_113 = safe_add_func_int16_t_s_s(g_113, 9))
    {
        uint16_t l_156 = 0x9696;
        uint32_t *l_163[3][1];
        int32_t l_164 = 0x553B8602;
        uint16_t *l_165 = &g_56;
        uint8_t l_166 = 0x12;
        uint8_t **l_228 = &l_134[0];
        uint8_t ****l_285 = (void*)0;
        int32_t l_310 = 6;
        uint16_t ***l_317 = &g_202;
        int32_t **l_335 = &l_169;
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 1; j++)
                l_163[i][j] = &g_93;
        }
        if ((1 ^ ((*g_153) | ((p_31 = ((1U < l_156) | ((safe_rshift_func_uint16_t_u_s(((safe_add_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u(g_131, ((0x97568C23 < (l_164 = (&g_139 != (void*)0))) | ((((*l_165) = l_148) != g_9) == p_31)))), l_166)) || 65535U), p_31)) > g_115))) != (-1)))))
        {
            int8_t *l_167 = &g_168;
            (*g_153) = (g_131 != (l_148 = ((*l_167) = 1)));
        }
        else
        {
            (*g_153) = p_31;
            l_169 = &l_148;
        }
    }
    for (g_129 = 1; (g_129 <= 8); g_129 += 1)
    {
        uint32_t * const *l_353 = &l_126;
        uint32_t * const **l_352 = &l_353;
        uint32_t * const ***l_354[2][4] = {{&l_352,(void*)0,&l_352,&l_352},{(void*)0,(void*)0,&l_352,(void*)0}};
        int32_t *l_357 = &g_115;
        int i, j;
        l_355 = l_352;
        (*g_212) = (l_357 = (*g_212));
        for (g_56 = 3; (g_56 <= 8); g_56 += 1)
        {
            const int32_t *l_358 = (void*)0;
            const int32_t **l_359 = &l_358;
            (*l_359) = l_358;
            return (***g_318);
        }
        for (g_275 = 0; (g_275 <= 8); g_275 += 1)
        {
            return (***g_318);
        }
    }
    return p_31;
}
static uint8_t func_32(int8_t p_33, uint16_t p_34, uint8_t p_35)
{
    uint32_t l_51[8] = {0x6A447D05,0U,0U,0x6A447D05,0U,0U,0x6A447D05,0U};
    int32_t l_61 = (-9);
    int32_t *l_73 = &g_9;
    int32_t **l_72[2];
    int32_t *l_74 = &g_9;
    int32_t **l_78 = &l_73;
    uint16_t l_89 = 0U;
    uint32_t *l_92 = &g_93;
    uint32_t l_94 = 0x699CBFF9;
    int i;
    for (i = 0; i < 2; i++)
        l_72[i] = &l_73;
    for (p_35 = 0; (p_35 < 13); p_35 = safe_add_func_uint8_t_u_u(p_35, 7))
    {
        int32_t *l_52 = &g_9;
        uint16_t *l_55 = &g_56;
        int32_t **l_64 = &l_52;
        int32_t *l_71[8][9] = {{&g_9,&l_61,&l_61,&g_9,&l_61,&g_9,&l_61,&l_61,&g_9},{(void*)0,&l_61,(void*)0,&l_61,(void*)0,(void*)0,&l_61,(void*)0,&l_61},{&l_61,&l_61,(void*)0,(void*)0,&l_61,&l_61,&l_61,(void*)0,(void*)0},{(void*)0,(void*)0,&l_61,(void*)0,&l_61,(void*)0,(void*)0,&l_61,(void*)0},{&g_9,&l_61,&g_9,&l_61,&l_61,&g_9,&l_61,&g_9,&l_61},{&g_9,&l_61,&l_61,&g_9,&l_61,&g_9,&l_61,&l_61,&g_9},{(void*)0,&l_61,(void*)0,&l_61,(void*)0,(void*)0,&l_61,(void*)0,&l_61},{&l_61,&l_61,(void*)0,(void*)0,&l_61,&l_61,&l_61,(void*)0,(void*)0}};
        int i, j;
        (*l_52) = l_51[2];
        (*l_52) = (safe_add_func_uint16_t_u_u(((*l_55) = 1U), (safe_rshift_func_int16_t_s_u((l_61 = (((g_9 >= (248U <= (safe_unary_minus_func_uint8_t_u(p_34)))) == 0x19) & ((0xE1 ^ (+(l_51[2] != (0 != p_34)))) >= p_35))), l_51[6]))));
        l_61 = (safe_add_func_int8_t_s_s((((l_61 || ((0U ^ ((&p_34 != (void*)0) == g_56)) || 0xF20C)) || (&l_61 == ((*l_64) = &l_61))) | ((safe_add_func_int16_t_s_s(((safe_rshift_func_int16_t_s_u((safe_sub_func_int8_t_s_s(p_34, 0x03)), 10)) <= p_35), p_34)) && 0xD1739C36)), p_34));
    }
    l_74 = &l_61;
    (*l_74) = (safe_add_func_uint16_t_u_u((!((((6 < (*l_74)) < ((g_9 && ((void*)0 != l_78)) || g_56)) != ((safe_lshift_func_int16_t_s_u((safe_sub_func_uint32_t_u_u((((safe_sub_func_uint32_t_u_u((((safe_add_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(((((((l_89 = (-1)) | (((*l_92) = (safe_add_func_int8_t_s_s((((*l_78) != &g_9) != (*l_74)), 0xC4))) || 0xD0E11B63)) == p_34) && (-5)) >= 0x90BB50B9) < 0x0DEC), 5)), 0xDD26)) | (*l_74)) || g_93), l_94)) > g_56) != g_56), g_56)), (**l_78))) == (**l_78))) | (**l_78))), g_56));
    for (g_93 = (-17); (g_93 <= 12); g_93 = safe_add_func_int32_t_s_s(g_93, 5))
    {
        int32_t *l_97 = &l_61;
        (*l_78) = l_97;
    }
    return p_33;
}
int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_9;
    csmith_sink_ = g_56;
    csmith_sink_ = g_93;
    csmith_sink_ = g_107;
    csmith_sink_ = g_113;
    csmith_sink_ = g_115;
    csmith_sink_ = g_129;
    csmith_sink_ = g_131;
    csmith_sink_ = g_168;
    csmith_sink_ = g_201;
    csmith_sink_ = g_275;
    csmith_sink_ = g_276;
    csmith_sink_ = g_566;
    csmith_sink_ = g_812;
    for (i = 0; i < 5; i++)
    {
        csmith_sink_ = g_928[i];
    }
    csmith_sink_ = g_933;
    csmith_sink_ = g_963;
    platform_main_end(0,0);
    return 0;
}
