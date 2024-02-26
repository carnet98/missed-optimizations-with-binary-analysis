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
struct S0 {
   int8_t f0;
   uint32_t f1;
   int8_t f2;
   uint16_t f3;
   uint32_t f4;
   signed f5 : 14;
   int8_t f6;
   int8_t f7;
   uint32_t f8;
};
struct S1 {
   signed f0 : 9;
   unsigned f1 : 20;
   signed f2 : 31;
   signed f3 : 27;
   unsigned f4 : 7;
   signed f5 : 2;
   signed f6 : 22;
};
struct S2 {
   int32_t f0;
   uint32_t f1;
   uint32_t f2;
};
struct S3 {
   uint8_t f0;
   int8_t f1;
   uint32_t f2;
   int8_t f3;
   int8_t f4;
};
static uint32_t g_16 = 0x79041289;
static int32_t g_48 = 1;
static uint16_t g_71 = 0xAD94;
static int32_t *g_82 = &g_48;
static int32_t **g_81 = &g_82;
static struct S1 g_99 = {18,69,-18741,-8675,2,1,1290};
static int32_t ***g_169 = &g_81;
static int32_t ****g_168 = &g_169;
static struct S0 g_192 = {1,0xCDC420A7,0xEC,65535U,1U,91,-8,0xEC,0x37B64F65};
static struct S3 g_194 = {1U,0x62,0U,0xAD,0xA0};
static struct S2 g_286 = {1,0xDF4A3FD3,0xFC477129};
static struct S2 *g_285 = &g_286;
static int32_t g_448 = 1;
static struct S3 **g_508 = (void*)0;
static struct S3 g_571 = {9U,7,4294967286U,0,-6};
static struct S3 *g_638 = &g_194;
static struct S3 g_700 = {253U,0x77,4294967286U,0xCA,0x15};
static int32_t func_1(void);
static int32_t * func_2(int8_t p_3, uint16_t p_4, int32_t * p_5, int32_t * p_6, int32_t p_7);
static uint16_t func_9(int32_t * p_10, uint16_t p_11, uint8_t p_12);
inline static int32_t * func_13(int32_t p_14);
inline static int32_t func_17(int8_t p_18, int16_t p_19, int32_t p_20, int32_t * p_21, uint8_t p_22);
inline static int32_t * func_24(uint32_t p_25, uint16_t p_26, int32_t * p_27, uint32_t p_28);
inline static uint8_t func_35(uint32_t p_36);
static uint32_t func_37(int16_t p_38, int32_t * p_39, int32_t * p_40);
static int32_t * func_41(uint8_t p_42, uint32_t p_43);
inline static uint8_t func_44(int32_t * p_45, int32_t * p_46);
static int32_t func_1(void)
{
    uint16_t l_8 = 1U;
    int32_t *l_15 = (void*)0;
    int32_t *l_718 = (void*)0;
    l_718 = func_2(l_8, func_9(func_13(((l_15 == l_15) | (g_16 <= 0xF5))), g_99.f4, l_8), l_15, l_15, g_99.f0);
    return g_192.f1;
}
static int32_t * func_2(int8_t p_3, uint16_t p_4, int32_t * p_5, int32_t * p_6, int32_t p_7)
{
    uint16_t l_474 = 65535U;
    struct S1 *l_479 = &g_99;
    uint8_t l_482 = 0xB1;
    int32_t *****l_483 = &g_168;
    int32_t *l_488 = &g_48;
    struct S2 *l_495 = (void*)0;
    struct S3 *l_520 = &g_194;
    int16_t l_577 = 0x6F24;
    uint8_t l_611 = 0x55;
    struct S3 *l_636 = &g_571;
    uint16_t l_645 = 0U;
    int8_t l_701 = (-6);
    struct S0 *l_717 = &g_192;
    if ((safe_sub_func_int32_t_s_s((0x4E30 > ((safe_add_func_int16_t_s_s((l_474 != p_4), (((safe_div_func_int32_t_s_s((((void*)0 == &g_194) | g_194.f1), (safe_lshift_func_int16_t_s_u((-10), ((l_479 != l_479) != p_4))))) != l_474) ^ p_3))) <= (-10))), l_474)))
    {
        int32_t ***l_486 = &g_81;
        uint32_t l_487 = 4U;
        int32_t **l_489 = &g_82;
        l_487 = ((((safe_sub_func_uint8_t_u_u((p_3 & (p_7 != l_482)), (&g_168 == l_483))) == g_286.f2) && (safe_add_func_int16_t_s_s(g_194.f3, ((**l_483) == l_486)))) || p_4);
        (*g_81) = l_488;
        l_489 = (**g_168);
    }
    else
    {
        int16_t l_498 = 2;
        int32_t l_545 = 5;
        uint16_t l_597 = 65535U;
        int32_t l_612 = 0x7D1C427D;
        struct S0 l_617 = {1,1U,0xE3,5U,2U,-18,-1,1,4294967295U};
        int32_t *l_655 = &g_286.f0;
        struct S2 l_658 = {8,4294967289U,0xEE97D52D};
        uint16_t l_716 = 1U;
lbl_522:
        (*l_488) = (safe_add_func_uint8_t_u_u(0x3C, ((((-1) && (safe_mod_func_uint32_t_u_u((!(l_495 == (void*)0)), (safe_mod_func_uint8_t_u_u(p_4, 0xE9))))) | ((l_498 <= (safe_div_func_uint8_t_u_u((((****l_483) != (void*)0) < 0U), g_194.f2))) && 0xF99B)) | p_7)));
        for (g_71 = 0; (g_71 < 56); g_71 = safe_add_func_int8_t_s_s(g_71, 2))
        {
            int32_t *****l_512 = &g_168;
            int32_t l_596 = 0x990C8106;
            int32_t l_598 = 0x4215E4BD;
            struct S0 l_615 = {0xEE,0xB0AB75D0,0,1U,4U,37,0xE2,5,1U};
            struct S2 *l_623 = (void*)0;
            struct S3 *l_637 = &g_571;
            uint16_t l_690 = 0x88B1;
            for (p_4 = 0; (p_4 == 55); p_4 = safe_add_func_int32_t_s_s(p_4, 1))
            {
                struct S3 *l_519 = &g_194;
                int16_t l_544 = 1;
                int8_t l_567 = 0;
                struct S1 *l_622 = &g_99;
                int16_t l_652 = (-6);
                struct S0 l_659 = {0x76,0x2D5F0B7E,-8,1U,0xCB2093C4,-45,0,-6,0x325BD0D0};
                if (g_194.f3)
                {
                    int32_t l_507 = 9;
                    int32_t *****l_536 = &g_168;
                    uint32_t l_562 = 0x9F104EF5;
                    for (g_286.f0 = 0; (g_286.f0 <= (-29)); --g_286.f0)
                    {
                        struct S3 ***l_509 = &g_508;
                        l_507 = 0;
                        (*l_509) = g_508;
                    }
                    if (((((safe_sub_func_int16_t_s_s((l_483 != l_512), ((l_507 || (p_3 || g_192.f2)) >= (+(safe_lshift_func_uint16_t_u_s(((safe_unary_minus_func_uint8_t_u(l_498)) & 0xEFEC), 12)))))) <= (safe_rshift_func_int8_t_s_u((l_519 != l_520), g_194.f4))) > 0x1D729A2F) || p_4))
                    {
                        (***l_512) = (**g_168);
                        return p_6;
                    }
                    else
                    {
                        int32_t l_521 = 4;
                        if (l_521)
                            break;
                        (**g_169) = p_6;
                        if (g_192.f2)
                            goto lbl_522;
                    }
                    for (g_192.f4 = 0; (g_192.f4 >= 27); g_192.f4 = safe_add_func_int16_t_s_s(g_192.f4, 5))
                    {
                        uint16_t l_533 = 0xD878;
                        (***g_168) = (***g_168);
                        (*l_488) = ((safe_rshift_func_int16_t_s_s((safe_div_func_int16_t_s_s(((((0x1B768BDA & ((((safe_mod_func_int32_t_s_s(1, l_533)) <= p_7) || ((safe_lshift_func_uint16_t_u_u((((((void*)0 == l_536) < (safe_mul_func_int16_t_s_s(l_533, (safe_add_func_uint16_t_u_u((*l_488), (safe_rshift_func_uint8_t_u_u((+p_4), 4))))))) >= l_533) > p_4), p_7)) > g_192.f0)) < l_533)) <= l_544) ^ g_192.f0) ^ 1), 0x3184)), 0)) >= p_3);
                        l_545 = 0x7515C299;
                    }
                    (*l_488) = (safe_sub_func_int32_t_s_s(l_545, (safe_rshift_func_int16_t_s_s(((g_286.f1 & ((safe_sub_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(((((((0xD3 > (safe_mul_func_int8_t_s_s(p_3, (1U && (safe_rshift_func_int8_t_s_u(l_498, 5)))))) || p_7) >= (safe_mul_func_int16_t_s_s((((l_562 | (safe_mod_func_uint8_t_u_u((((safe_mul_func_int8_t_s_s(0x7D, p_4)) < 255U) < 0xD8C914E6), g_99.f6))) == 0xB47B0789) & l_544), g_194.f3))) & 0x45) | 0xE953) || l_545), p_3)), 15)), p_7)) != l_498)) >= g_71), l_567))));
                }
                else
                {
                    int8_t l_593 = (-4);
                    int32_t **l_624 = &g_82;
                    for (g_194.f3 = 0; (g_194.f3 <= 20); ++g_194.f3)
                    {
                        struct S3 *l_570 = &g_571;
                        int32_t l_572 = (-8);
                        int32_t ***l_588 = &g_81;
                        (****l_483) = (***g_168);
                        (*l_570) = (*l_519);
                        if (l_572)
                            continue;
                        (*l_488) = (safe_add_func_uint32_t_u_u((0x245E == (safe_lshift_func_int8_t_s_s((l_577 <= (safe_add_func_int16_t_s_s(((((safe_add_func_int16_t_s_s((safe_add_func_int16_t_s_s(1, (((safe_sub_func_uint16_t_u_u(((safe_sub_func_int16_t_s_s((l_588 != (**l_483)), (safe_add_func_int16_t_s_s((0x2F >= (0x86 >= l_593)), ((((safe_lshift_func_uint8_t_u_u(255U, l_596)) & 0xEE) && 0x579D) != l_597))))) & 0xEB71DC75), p_7)) && g_16) > l_593))), 0xEC45)) && p_4) || 0xCB97) != g_99.f6), l_498))), g_192.f7))), l_598));
                    }
                    (****l_483) = func_41(((safe_add_func_int32_t_s_s(((***l_483) == (***l_483)), (((safe_add_func_uint32_t_u_u((0x0716 | ((((((p_4 & (safe_lshift_func_int8_t_s_u((safe_mul_func_int16_t_s_s(0x1D2A, 0x5B89)), p_3))) ^ (safe_mod_func_int32_t_s_s((((*l_488) & ((safe_rshift_func_uint8_t_u_u(l_545, l_611)) ^ g_192.f6)) || l_612), g_192.f7))) | l_545) < g_99.f1) == 4) ^ p_4)), 0)) && p_4) == 0x8E85CC07))) || 0U), p_4);
                    (***g_168) = (**g_169);
                    for (g_571.f3 = 12; (g_571.f3 != (-9)); g_571.f3 = safe_sub_func_uint32_t_u_u(g_571.f3, 3))
                    {
                        struct S0 *l_616 = (void*)0;
                        int32_t l_629 = 0x8553EB6B;
                        l_617 = l_615;
                        if ((*****l_483))
                            break;
                        (**l_624) = ((l_567 != (l_544 & ((safe_rshift_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_u(((void*)0 == l_622), (l_495 == l_623))) || (l_624 == (void*)0)), (((safe_lshift_func_uint16_t_u_s((safe_mul_func_int8_t_s_s(g_286.f2, 0xEC)), p_7)) || l_629) <= 0x39E35722))) < 0xC6AF))) != g_16);
                        (*g_81) = func_41(p_4, (0 == g_286.f0));
                    }
                }
                for (l_617.f6 = 0; (l_617.f6 > (-16)); l_617.f6 = safe_sub_func_int16_t_s_s(l_617.f6, 9))
                {
                    uint16_t l_639 = 1U;
                    struct S1 *l_644 = &g_99;
                    if ((((((safe_lshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_u((g_99.f2 || ((0xCF < p_7) | ((void*)0 == l_636))), g_99.f5)), (l_637 == g_638))) ^ 1) && 0) >= 0x28) <= l_639))
                    {
                        (*l_622) = (*l_479);
                    }
                    else
                    {
                        (*l_622) = (*l_622);
                        (*l_488) = (safe_add_func_int32_t_s_s(((safe_div_func_uint32_t_u_u((((((l_644 == (void*)0) | l_645) > ((0x76DD >= ((void*)0 != l_479)) && p_4)) != 0x0764) != (safe_sub_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((((safe_mod_func_uint16_t_u_u((g_192.f5 <= l_652), g_16)) < l_639) != 1), 255U)), l_639))), l_544)) >= l_639), 0x058D355F));
                        if (l_652)
                            continue;
                    }
                    if (l_615.f0)
                        goto lbl_522;
                    for (g_571.f3 = (-19); (g_571.f3 == 5); ++g_571.f3)
                    {
                        (****l_512) = func_41(g_194.f0, (&g_286 != &g_286));
                    }
                    (*l_488) = ((void*)0 == &g_168);
                }
                l_655 = func_41(l_617.f0, (g_286.f2 <= p_3));
                for (g_571.f1 = (-3); (g_571.f1 == (-23)); g_571.f1 = safe_sub_func_uint32_t_u_u(g_571.f1, 1))
                {
                    struct S0 *l_660 = &l_615;
                    (*g_285) = l_658;
                    p_6 = (***g_168);
                    (*l_660) = l_659;
                }
            }
            (*g_81) = func_41((*l_655), (((safe_lshift_func_uint8_t_u_s(((**g_168) != (***l_512)), p_3)) | p_3) <= (((safe_div_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(0U, (safe_unary_minus_func_int32_t_s((safe_lshift_func_int16_t_s_s(g_571.f3, 10)))))), (safe_rshift_func_int16_t_s_s(((void*)0 == l_479), g_192.f3)))) | p_7) || 1U)));
            if ((0x67EBC6C2 & (safe_div_func_int8_t_s_s((0xC3FC6330 <= (safe_mod_func_int16_t_s_s(g_192.f3, (((*g_82) ^ (safe_div_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u((safe_sub_func_int16_t_s_s(((safe_add_func_int32_t_s_s((((*g_169) != &l_655) ^ (*l_655)), (safe_sub_func_int8_t_s_s(((safe_mod_func_int32_t_s_s(((safe_mul_func_int8_t_s_s(g_571.f3, (((((((&g_286 != &l_658) == l_690) & p_4) && p_7) < 0xD59670E5) & p_7) <= 0xB6))) || 6), (*l_655))) && p_3), 1U)))) | 0x28), 0xDB06)), (*****l_483))), p_3))) || (-1))))), (*****l_483)))))
            {
                int32_t **l_693 = &l_488;
                for (g_192.f3 = 3; (g_192.f3 <= 22); g_192.f3 = safe_add_func_int32_t_s_s(g_192.f3, 1))
                {
                    int8_t l_694 = 0;
                    (*l_655) = (((l_693 == (*g_169)) && (0xCF == (*l_655))) <= ((((0xFA7F < (*****l_512)) ^ p_7) >= ((*g_168) == (*g_168))) != p_4));
                    if (l_694)
                        break;
                    (**g_168) = (*g_169);
                }
            }
            else
            {
                struct S3 ***l_702 = &g_508;
                uint8_t l_715 = 0xA8;
                g_99 = (*l_479);
                for (g_571.f2 = 0; (g_571.f2 > 25); g_571.f2++)
                {
                    for (l_658.f2 = (-9); (l_658.f2 >= 13); l_658.f2++)
                    {
                        int32_t *l_699 = (void*)0;
                        l_699 = p_6;
                    }
                    g_700 = (*g_638);
                    if (l_701)
                        break;
                }
                (**g_81) = (l_702 == l_702);
                (***g_169) = (1 && (safe_lshift_func_uint8_t_u_u(((((((safe_lshift_func_int8_t_s_s((0xA3 != ((safe_rshift_func_int8_t_s_u((safe_mul_func_int8_t_s_s((((0xC1 ^ (l_512 == &g_168)) >= ((safe_add_func_uint32_t_u_u(p_4, (g_192.f0 <= g_194.f3))) ^ (safe_div_func_int8_t_s_s(0x45, l_715)))) ^ p_4), p_3)), 1)) && l_716)), p_3)) < g_16) <= 0xC971) < (****g_168)) >= 0x60) > (*l_655)), l_715)));
            }
        }
    }
    (*l_717) = g_192;
    (***g_168) = (***g_168);
    return (***g_168);
}
static uint16_t func_9(int32_t * p_10, uint16_t p_11, uint8_t p_12)
{
    return g_99.f4;
}
inline static int32_t * func_13(int32_t p_14)
{
    uint32_t l_23 = 0xE4CFF15C;
    int32_t *l_47 = &g_48;
    (*l_47) = func_17(g_16, l_23, g_16, func_24((safe_div_func_int32_t_s_s(l_23, g_16)), (safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(1U, 13)), func_35(func_37(p_14, func_41(func_44(l_47, l_47), p_14), l_47)))), l_47, g_16), p_14);
    return (**g_169);
}
inline static int32_t func_17(int8_t p_18, int16_t p_19, int32_t p_20, int32_t * p_21, uint8_t p_22)
{
    int32_t *****l_467 = (void*)0;
    l_467 = l_467;
    return p_19;
}
inline static int32_t * func_24(uint32_t p_25, uint16_t p_26, int32_t * p_27, uint32_t p_28)
{
    int8_t l_313 = 0x76;
    uint8_t l_320 = 1U;
    struct S2 *l_327 = &g_286;
    int32_t l_344 = 0x6888C05F;
    struct S1 *l_364 = &g_99;
    int32_t **l_371 = (void*)0;
    struct S0 *l_376 = &g_192;
    int32_t ****l_421 = &g_169;
    int8_t l_445 = 0x89;
lbl_359:
    for (g_192.f8 = (-13); (g_192.f8 != 14); g_192.f8++)
    {
        int32_t *l_305 = &g_48;
        int32_t *l_306 = &g_286.f0;
        (*p_27) = ((((65533U ^ (safe_div_func_uint32_t_u_u(((safe_mul_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((safe_sub_func_uint16_t_u_u((+p_26), ((l_305 == l_306) < (safe_mod_func_uint8_t_u_u((((safe_lshift_func_uint16_t_u_u((((*l_306) <= (safe_mul_func_uint8_t_u_u(0xFC, p_25))) != (1U || (*l_305))), 1)) >= g_192.f1) && (-8)), 0x62))))), 3)), l_313)) & (*p_27)), (*p_27)))) ^ 0xDB37) == g_192.f7) || g_192.f6);
        if ((*p_27))
            break;
        l_306 = (**g_169);
    }
lbl_451:
    (*p_27) = (((l_313 <= g_192.f7) <= 0x1C45) > (safe_add_func_uint8_t_u_u(((((safe_rshift_func_int16_t_s_u(g_192.f6, g_48)) || p_28) ^ (safe_sub_func_int16_t_s_s(p_28, (((l_313 && ((0x12AE39DF == l_320) ^ g_192.f7)) && 0xC3) >= g_192.f5)))) ^ p_26), g_16)));
    for (g_194.f2 = 0; (g_194.f2 > 43); ++g_194.f2)
    {
        struct S2 *l_333 = &g_286;
        int32_t l_345 = 0xDD864097;
        int32_t *****l_355 = &g_168;
        struct S1 *l_363 = &g_99;
        uint8_t l_414 = 0xB2;
        if ((safe_add_func_uint16_t_u_u((0x0D ^ (0xE0 & ((void*)0 != l_327))), (&g_286 != (void*)0))))
        {
            int32_t *l_328 = &g_48;
            return l_328;
        }
        else
        {
            int32_t l_350 = 0x5E9E3D29;
            struct S1 l_353 = {-17,669,-16953,7440,9,0,899};
            for (g_71 = (-9); (g_71 != 34); ++g_71)
            {
                struct S1 l_356 = {-6,568,6007,1441,0,1,-1483};
                for (p_28 = 0; (p_28 < 38); p_28++)
                {
                    uint16_t l_334 = 0x63D6;
                    struct S0 l_335 = {-7,1U,0x0D,65535U,1U,-121,1,-1,0U};
                    struct S0 *l_336 = &g_192;
                    (*g_81) = func_41(p_25, ((0xBF16BD3A || (((void*)0 != l_333) != l_334)) < 0x2B));
                    (*g_81) = (***g_168);
                    (*l_336) = l_335;
                    if ((***g_169))
                        break;
                }
                for (g_192.f6 = 0; (g_192.f6 >= 29); g_192.f6 = safe_add_func_uint16_t_u_u(g_192.f6, 4))
                {
                    (*p_27) = ((0x0AB97504 > l_320) && ((((**g_168) == (void*)0) > (safe_div_func_uint16_t_u_u(((!(safe_add_func_uint16_t_u_u(65535U, (0xEA7871D9 > l_344)))) >= ((**g_169) == (void*)0)), 0xDA4C))) && l_345));
                    if ((safe_lshift_func_uint16_t_u_s((safe_mod_func_uint32_t_u_u(p_26, (g_286.f0 | l_350))), (safe_add_func_uint32_t_u_u(((*g_168) != (*g_168)), (5 == g_192.f7))))))
                    {
                        struct S1 *l_354 = &l_353;
                        (*l_354) = l_353;
                        l_355 = (void*)0;
                        (*g_81) = (void*)0;
                        (**g_169) = p_27;
                    }
                    else
                    {
                        l_356 = l_356;
                    }
                }
            }
        }
        for (p_28 = 24; (p_28 != 20); p_28 = safe_sub_func_int8_t_s_s(p_28, 2))
        {
            uint16_t l_360 = 65526U;
            struct S0 *l_377 = &g_192;
            struct S1 *l_392 = &g_99;
            int32_t l_446 = 0x4A67104A;
            if (g_192.f8)
                goto lbl_359;
            if (l_360)
                continue;
            if ((safe_add_func_uint16_t_u_u((l_363 != l_364), ((safe_mod_func_int32_t_s_s(((safe_lshift_func_int16_t_s_s((g_194.f1 | (l_371 == (void*)0)), (safe_mul_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((l_355 == &g_168), (l_376 == l_377))), p_26)))) || g_192.f3), p_26)) || (-9)))))
            {
                uint32_t l_405 = 0xE248C8C4;
                if ((&g_194 != &g_194))
                {
                    int32_t **l_380 = &g_82;
                    for (l_320 = 0; (l_320 == 26); ++l_320)
                    {
                        int8_t l_415 = 0x19;
                        (*g_81) = func_41(p_26, ((*p_27) > 0x2EA2ED9D));
                        (**g_168) = l_380;
                        (***g_168) = func_41(g_99.f6, (safe_mod_func_int32_t_s_s((safe_unary_minus_func_uint32_t_u(((4U < 0xA966) >= (((safe_sub_func_uint16_t_u_u(0x3827, (safe_div_func_int8_t_s_s((safe_mod_func_int8_t_s_s(0, (0x30 && (safe_rshift_func_uint16_t_u_s((l_392 == (void*)0), (0x50 >= 0x10)))))), p_25)))) < 0xAE923902) | p_25)))), (*p_27))));
                        (****g_168) = ((p_28 | ((safe_mul_func_uint8_t_u_u((g_194.f3 || (safe_mod_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u(((safe_rshift_func_int8_t_s_s(0x0C, 5)) != (**l_380)), (safe_add_func_int16_t_s_s(p_25, ((safe_mul_func_uint16_t_u_u(((l_363 != &g_99) < (l_405 == (safe_div_func_uint8_t_u_u(((safe_div_func_uint8_t_u_u((safe_add_func_int32_t_s_s(((safe_div_func_int32_t_s_s(0x56A64D3B, g_286.f1)) == g_194.f2), p_25)), p_25)) <= g_192.f4), l_414)))), g_192.f1)) == g_99.f0))))), l_360))), g_99.f1)) | p_26)) < l_415);
                    }
                    (*g_81) = func_41(g_194.f3, (safe_div_func_int32_t_s_s((*p_27), 0xD7E304C9)));
                    for (p_25 = 4; (p_25 <= 13); p_25 = safe_add_func_int16_t_s_s(p_25, 6))
                    {
                        (*p_27) = 3;
                    }
                }
                else
                {
                    int32_t *****l_420 = &g_168;
                    l_355 = l_420;
                }
                l_421 = &g_169;
            }
            else
            {
                int8_t l_434 = 0;
                l_446 = (((safe_add_func_int8_t_s_s((safe_sub_func_int8_t_s_s(((safe_rshift_func_int16_t_s_u((safe_div_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(l_434, (((void*)0 != &g_286) >= (g_194.f0 > p_25)))), 2)), (safe_mul_func_int16_t_s_s((((p_25 != (((safe_lshift_func_int16_t_s_u((safe_mul_func_int8_t_s_s((safe_mul_func_int16_t_s_s(g_99.f1, (safe_rshift_func_uint16_t_u_u(l_434, 15)))), p_25)), p_28)) | 0xF00D) ^ g_99.f3)) & g_99.f6) == l_445), g_194.f4)))), 15)) < p_25), g_48)), l_434)) ^ (-7)) >= p_25);
                g_448 = (~g_192.f0);
                for (g_192.f7 = (-1); (g_192.f7 != (-27)); --g_192.f7)
                {
                    int32_t ****l_452 = &g_169;
                    struct S2 l_455 = {0x3B2E6932,1U,1U};
                    if (g_99.f6)
                        goto lbl_451;
                    (*p_27) = (&g_169 != l_452);
                    for (g_194.f1 = 0; (g_194.f1 > 11); ++g_194.f1)
                    {
                        (*g_169) = (**g_168);
                        (*g_285) = l_455;
                        (*p_27) = (*p_27);
                    }
                }
                (*g_81) = func_41(g_286.f0, (safe_sub_func_uint8_t_u_u((((65535U == ((p_25 ^ g_194.f0) <= (((safe_add_func_int16_t_s_s((((*p_27) & (&g_286 == &g_286)) >= 0xDE7CE8A9), ((safe_lshift_func_int16_t_s_u(0x3645, g_71)) == g_192.f3))) <= l_434) || 65526U))) || g_286.f1) == g_286.f1), g_448)));
            }
            if (l_344)
                goto lbl_451;
        }
        for (g_194.f3 = 0; (g_194.f3 >= 5); g_194.f3++)
        {
            (*g_81) = (*g_81);
            (***l_421) = p_27;
        }
        (*p_27) = (safe_unary_minus_func_uint8_t_u(g_99.f6));
    }
    for (p_26 = 29; (p_26 < 3); --p_26)
    {
        (***l_421) = (void*)0;
    }
    return (*g_81);
}
inline static uint8_t func_35(uint32_t p_36)
{
    int32_t **l_83 = (void*)0;
    struct S1 l_100 = {-2,61,40462,-855,6,-1,-1995};
    int32_t ***l_111 = (void*)0;
    if ((((0U ^ (g_71 >= g_16)) | (g_81 == l_83)) & g_16))
    {
        uint32_t l_84 = 1U;
        int32_t **l_94 = &g_82;
        uint32_t l_95 = 4294967295U;
        (**g_81) = ((l_84 < (safe_lshift_func_uint8_t_u_s(((((safe_mod_func_uint8_t_u_u((g_48 == (g_48 || 0)), (-4))) <= (+g_16)) > ((safe_div_func_uint32_t_u_u((((((l_83 == l_94) && (**l_94)) | (-1)) < p_36) < 0x68641A01), l_95)) || g_71)) & (**l_94)), 1))) < (-8));
    }
    else
    {
        int32_t l_122 = 0xF9311F6B;
        int32_t *l_227 = &g_48;
        int32_t ***l_242 = &l_83;
        struct S2 l_245 = {1,0xB7D19052,0xC49024B7};
        int32_t ****l_266 = &l_111;
        if (p_36)
        {
            uint16_t l_96 = 0x30DE;
            int32_t *l_101 = &g_48;
            int32_t ***l_110 = &g_81;
            uint8_t l_129 = 0x05;
            int32_t ****l_170 = (void*)0;
            struct S0 *l_191 = &g_192;
            int32_t *l_196 = (void*)0;
            (*g_81) = (*g_81);
            if (((-1) == l_96))
            {
                uint16_t l_102 = 1U;
                uint8_t l_130 = 0x86;
                for (g_48 = 0; (g_48 <= 22); g_48++)
                {
                    l_100 = g_99;
                    (*g_81) = l_101;
                }
                if ((((((0x1E45A2DC ^ l_102) >= (!((safe_mod_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(((p_36 <= (l_110 == l_111)) > (safe_mul_func_int8_t_s_s((((safe_sub_func_int8_t_s_s(g_99.f4, ((safe_lshift_func_int16_t_s_u((0xFE8F < (safe_rshift_func_uint8_t_u_s((((safe_rshift_func_uint16_t_u_u(((((l_122 & (((safe_rshift_func_uint8_t_u_s((safe_sub_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u((g_99.f1 && 0xAC90574D), p_36)), p_36)), p_36)) || 246U) != p_36)) < p_36) ^ 0xB0) == g_99.f4), (*l_101))) | g_99.f2) && p_36), 6))), 15)) ^ 65535U))) | l_129) ^ g_99.f6), (-5)))), g_71)), l_102)) ^ l_130))) == 0x3CABD61F) <= l_122) & l_130))
                {
                    uint32_t l_134 = 0xDBDBD1F8;
                    (*l_101) = (((safe_mod_func_uint32_t_u_u(((safe_unary_minus_func_uint32_t_u(l_134)) >= (**g_81)), ((safe_add_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_s(((safe_div_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s(((safe_div_func_int16_t_s_s(((((!(((0U && (safe_add_func_uint16_t_u_u((&g_81 != &l_83), ((-4) > p_36)))) ^ (((*l_110) != &g_82) < 65535U)) && g_99.f6)) ^ l_134) >= p_36) != l_122), (*l_101))) > p_36), 0x46)) | 0x0B28), 7)), p_36)) > 65529U), 4)) ^ l_122), 6)), g_71)) || 0x389711EE))) == p_36) & g_99.f0);
                    (**g_81) = l_134;
                }
                else
                {
                    int8_t l_158 = 2;
                    int32_t **l_161 = &l_101;
                    if (((g_99.f3 >= (((((safe_rshift_func_uint16_t_u_s((safe_div_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(l_158, ((safe_rshift_func_int8_t_s_s((***l_110), 7)) || (l_158 < ((void*)0 == l_161))))), (safe_mod_func_uint8_t_u_u(0xDF, (safe_sub_func_uint32_t_u_u((((safe_mod_func_int16_t_s_s(((g_168 != l_170) == 0xE765359D), p_36)) <= l_102) & g_99.f6), 9)))))), g_48)) & g_99.f3) && 9U) ^ g_16) == (***l_110))) > g_99.f4))
                    {
                        int32_t *l_175 = (void*)0;
                        (**g_81) = (safe_mul_func_int8_t_s_s(l_122, (((safe_mod_func_int16_t_s_s(l_122, ((g_48 > (p_36 ^ p_36)) && (4294967289U ^ (**l_161))))) > 0xCC) <= (g_99.f4 | 0x5350))));
                        l_175 = (**l_110);
                    }
                    else
                    {
                        struct S0 l_176 = {3,0xB92B385C,0x5E,0x6223,0U,52,0xD0,3,0xDBFB6B4A};
                        struct S0 *l_177 = &l_176;
                        (*l_177) = l_176;
                    }
                }
                for (l_129 = 0; (l_129 <= 30); l_129 = safe_add_func_uint16_t_u_u(l_129, 8))
                {
                    int8_t l_193 = 0x75;
                    if ((p_36 | (l_130 & (safe_add_func_int8_t_s_s(0xD0, (((safe_mod_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(((safe_rshift_func_int16_t_s_s((+((0x89 < g_16) == (((safe_lshift_func_int16_t_s_u((l_102 > (l_191 == &g_192)), 15)) | l_193) || 0xF70AFF55))), 11)) || 2), p_36)), p_36)) == p_36) & 0x61CA15E8))))))
                    {
                        struct S3 *l_195 = &g_194;
                        (*l_195) = g_194;
                        return g_192.f7;
                    }
                    else
                    {
                        (***g_168) = l_196;
                        if (p_36)
                            break;
                    }
                }
            }
            else
            {
                int32_t ****l_205 = &g_169;
                struct S3 *l_228 = &g_194;
                if ((0x24557DD3 > (**g_81)))
                {
                    (***l_205) = func_41(g_194.f4, ((safe_lshift_func_uint8_t_u_u(p_36, p_36)) > (safe_add_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((g_48 || (safe_sub_func_uint8_t_u_u(g_192.f5, ((*g_81) == (***g_168))))), p_36)), ((&l_111 != l_205) || (**g_81))))));
                }
                else
                {
                    struct S0 *l_206 = &g_192;
                    int32_t l_217 = 0;
                    int32_t ***l_243 = &g_81;
                    if ((((*g_168) != (void*)0) > (0x54 != (p_36 | (((void*)0 != l_206) || 0x46)))))
                    {
                        int32_t **l_220 = &l_101;
                        (***l_205) = func_41((safe_div_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_u((l_122 == (safe_rshift_func_uint8_t_u_s(p_36, 6))), 4)) && (safe_lshift_func_uint16_t_u_u(l_122, (0xFE < (safe_mod_func_uint32_t_u_u(g_192.f7, (****g_168))))))), g_71)), l_217);
                        (*l_220) = func_41(((((safe_lshift_func_int8_t_s_s(((void*)0 != l_220), 7)) && (safe_rshift_func_uint16_t_u_u(((p_36 || (**l_220)) <= (safe_mod_func_int16_t_s_s((-1), p_36))), 6))) <= (0 | 4294967295U)) | (safe_sub_func_int16_t_s_s(((l_227 != l_227) <= p_36), 0xFFDF))), (**l_220));
                        (**l_110) = (*g_81);
                        (**l_110) = func_41((((void*)0 != (***g_168)) >= (&g_194 != l_228)), g_194.f4);
                    }
                    else
                    {
                        int16_t l_229 = 0xEC6D;
                        (**g_169) = l_227;
                        return l_229;
                    }
                    (**l_110) = func_41(((safe_sub_func_int16_t_s_s((safe_mul_func_int8_t_s_s(((&g_169 == l_205) ^ ((safe_mul_func_int16_t_s_s(l_217, (l_206 == (void*)0))) == (safe_rshift_func_uint16_t_u_s((safe_sub_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s((l_242 == l_243), (~(g_99.f6 != p_36)))), (***g_169))), 0)))), g_192.f8)), p_36)) || p_36), g_194.f3);
                }
                (***g_168) = (***g_168);
            }
        }
        else
        {
            struct S2 *l_246 = &l_245;
            int32_t l_263 = 0x94F7FA5D;
            int16_t l_287 = 0xAD17;
            (*l_246) = l_245;
            (*l_227) = (safe_rshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u((((((+((~(g_194.f3 == ((((((((&g_192 != (void*)0) == p_36) < (safe_mul_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((safe_sub_func_int32_t_s_s((-1), (safe_mod_func_int32_t_s_s((&g_192 != (void*)0), p_36)))), 9)), (safe_add_func_int8_t_s_s(p_36, 0x12))))) && 65535U) != g_192.f3) < 0) == l_263) >= p_36))) || g_194.f3)) != g_192.f1) == p_36) || p_36) || p_36), 3)), l_100.f1));
            if ((safe_mod_func_int16_t_s_s(4, (((void*)0 != l_266) ^ (safe_mod_func_int32_t_s_s((l_263 > ((((safe_mul_func_int16_t_s_s((safe_mul_func_int16_t_s_s((*l_227), (((safe_div_func_int32_t_s_s((safe_lshift_func_int16_t_s_u(((safe_div_func_int16_t_s_s(((g_194.f2 == l_263) | ((safe_lshift_func_int16_t_s_u((safe_mul_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_s(((4 > ((((l_246 != g_285) ^ 65535U) >= 0xDDED) & p_36)) <= 1), 4)) ^ (-1)), p_36)), 1)) ^ p_36)), p_36)) > p_36), l_263)), p_36)) <= p_36) != 0xD7))), p_36)) || l_263) && l_287) & p_36)), l_287))))))
            {
                for (g_286.f0 = 24; (g_286.f0 <= 0); --g_286.f0)
                {
                    int32_t *l_292 = (void*)0;
                    if ((safe_sub_func_int8_t_s_s((&l_245 == &g_286), g_192.f5)))
                    {
                        (**g_169) = l_292;
                        return g_286.f2;
                    }
                    else
                    {
                        int32_t *l_293 = &l_245.f0;
                        l_293 = l_293;
                    }
                    (*l_246) = l_245;
                }
                return l_263;
            }
            else
            {
                return g_286.f0;
            }
        }
        return p_36;
    }
    return g_99.f5;
}
static uint32_t func_37(int16_t p_38, int32_t * p_39, int32_t * p_40)
{
    int32_t l_69 = 0xA0F0C0ED;
    int32_t *l_70 = (void*)0;
    int32_t **l_72 = (void*)0;
    int32_t **l_73 = (void*)0;
    int32_t **l_74 = (void*)0;
    int32_t **l_75 = &l_70;
    int32_t ****l_76 = (void*)0;
    int32_t ***l_77 = &l_75;
    int16_t l_78 = 0;
    (*p_39) = (safe_sub_func_uint16_t_u_u((((((((((safe_unary_minus_func_uint8_t_u(((safe_sub_func_uint32_t_u_u((safe_add_func_int32_t_s_s((safe_mod_func_int8_t_s_s(l_69, g_16)), (l_70 != &g_48))), (((g_48 != ((g_48 != (*p_39)) & g_48)) ^ g_48) | p_38))) || g_16))) > 0x8B) != g_16) >= g_71) != 0) ^ g_71) == p_38) && p_38) != l_69), g_71));
    (*l_75) = &g_48;
    (*l_75) = func_41((**l_75), ((void*)0 == p_39));
    l_77 = &l_73;
    return l_78;
}
static int32_t * func_41(uint8_t p_42, uint32_t p_43)
{
    int32_t *l_59 = &g_48;
    l_59 = (void*)0;
    return &g_48;
}
inline static uint8_t func_44(int32_t * p_45, int32_t * p_46)
{
    int16_t l_53 = 0x653D;
    int32_t *l_58 = &g_48;
    (*l_58) = ((safe_sub_func_int8_t_s_s(((-5) == (safe_div_func_uint8_t_u_u(l_53, 0x20))), ((l_53 != (l_53 > ((((safe_sub_func_uint32_t_u_u((safe_div_func_int32_t_s_s((65528U & l_53), (*p_45))), (l_58 == p_45))) == (-1)) | (*l_58)) | 0xD632))) < g_16))) != (*l_58));
    return (*l_58);
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_16;
    csmith_sink_ = g_48;
    csmith_sink_ = g_71;
    csmith_sink_ = g_99.f0;
    csmith_sink_ = g_99.f1;
    csmith_sink_ = g_99.f2;
    csmith_sink_ = g_99.f3;
    csmith_sink_ = g_99.f4;
    csmith_sink_ = g_99.f5;
    csmith_sink_ = g_99.f6;
    csmith_sink_ = g_192.f0;
    csmith_sink_ = g_192.f1;
    csmith_sink_ = g_192.f2;
    csmith_sink_ = g_192.f3;
    csmith_sink_ = g_192.f4;
    csmith_sink_ = g_192.f5;
    csmith_sink_ = g_192.f6;
    csmith_sink_ = g_192.f7;
    csmith_sink_ = g_192.f8;
    csmith_sink_ = g_194.f0;
    csmith_sink_ = g_194.f1;
    csmith_sink_ = g_194.f2;
    csmith_sink_ = g_194.f3;
    csmith_sink_ = g_194.f4;
    csmith_sink_ = g_286.f0;
    csmith_sink_ = g_286.f1;
    csmith_sink_ = g_286.f2;
    csmith_sink_ = g_448;
    csmith_sink_ = g_571.f0;
    csmith_sink_ = g_571.f1;
    csmith_sink_ = g_571.f2;
    csmith_sink_ = g_571.f3;
    csmith_sink_ = g_571.f4;
    csmith_sink_ = g_700.f0;
    csmith_sink_ = g_700.f1;
    csmith_sink_ = g_700.f2;
    csmith_sink_ = g_700.f3;
    csmith_sink_ = g_700.f4;
    platform_main_end(0,0);
    return 0;
}
