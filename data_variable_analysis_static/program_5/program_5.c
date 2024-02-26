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
static int32_t g_15 = 0x55F07C70;
static uint32_t g_63 = 4294967290U;
static int8_t g_71 = 0xDE;
static int32_t g_77 = (-3);
static int16_t g_78 = 1;
static int8_t g_91 = (-7);
static int8_t g_108 = 0;
static uint8_t g_109 = 251U;
static uint16_t g_110 = 65534U;
static int32_t g_152 = 0x49298730;
static int16_t g_155 = 0x87E5;
static int32_t g_156 = 0x121EC5D8;
static uint16_t g_186 = 0U;
static int8_t g_253 = (-1);
static uint8_t g_400 = 0x21;
static uint8_t g_514 = 9U;
static uint8_t g_691 = 253U;
static uint32_t g_693 = 6U;
static int32_t g_713 = 8;
static uint32_t g_720 = 4294967295U;
static int32_t g_732 = 0xE08397DE;
static int8_t g_734 = 0x9E;
inline static uint8_t func_1(void);
inline static int32_t func_2(const uint32_t p_3, int32_t p_4, uint16_t p_5, const uint16_t p_6);
static uint16_t func_7(int8_t p_8, int32_t p_9);
static int32_t func_22(int16_t p_23, int32_t p_24, uint32_t p_25, int32_t p_26, uint8_t p_27);
static uint32_t func_30(int16_t p_31, uint32_t p_32);
inline static uint32_t func_33(int16_t p_34, uint8_t p_35, uint8_t p_36, int8_t p_37, int8_t p_38);
inline static const uint32_t func_41(int32_t p_42);
static int8_t func_45(int32_t p_46);
static int8_t func_49(int16_t p_50, int16_t p_51, uint32_t p_52, uint32_t p_53);
inline static uint32_t func_57(uint32_t p_58, uint8_t p_59, int8_t p_60, const uint16_t p_61);
inline static uint8_t func_1(void)
{
    const int32_t l_12 = 0xF9C25B05;
    int8_t l_733 = 0xEA;
    int32_t l_735 = (-4);
    l_735 = (g_734 = func_2((g_732 = (((0x1FC3EEE2 != (func_7((0xD21F1EB3 ^ (safe_sub_func_int32_t_s_s(0x17E5C285, (l_12 && ((safe_mod_func_uint8_t_u_u(g_15, (safe_lshift_func_uint8_t_u_s((((safe_mod_func_uint8_t_u_u((0x24 == ((g_15 < (safe_div_func_int16_t_s_s(0x0EBB, l_12))) > g_15)), g_15)) == l_12) >= l_12), l_12)))) || l_12))))), l_12) == l_12)) != g_15) | 0xF3)), l_12, l_733, l_733));
    return l_733;
}
inline static int32_t func_2(const uint32_t p_3, int32_t p_4, uint16_t p_5, const uint16_t p_6)
{
    g_152 = 0x0C1B1A6E;
    return p_5;
}
static uint16_t func_7(int8_t p_8, int32_t p_9)
{
    int32_t l_28 = 0x51F0EF2F;
    uint32_t l_29 = 0xA6B2C4EB;
    int32_t l_692 = 0x934FB258;
    int32_t l_721 = 0x8CD21ED9;
    l_721 = (g_720 = func_22(((l_28 && (l_29 >= func_30(g_15, func_33((safe_sub_func_uint32_t_u_u(func_41((safe_rshift_func_int8_t_s_s(func_45(p_9), 1))), (p_8 == (((safe_rshift_func_int8_t_s_s((safe_add_func_uint32_t_u_u((g_693 = (((l_692 = (safe_rshift_func_int8_t_s_s((((safe_add_func_uint8_t_u_u(((safe_mod_func_uint32_t_u_u((g_691 = ((g_15 ^ l_28) >= 0x616A6E10)), 0x8B4661D7)) == 1U), g_15)) & l_28) < g_91), 5))) >= g_91) <= 4294967290U)), l_29)), g_15)) ^ 65531U) != l_29)))), p_9, g_91, l_28, g_91)))) | l_28), l_28, p_8, p_8, l_29));
    p_9 = ((safe_lshift_func_int16_t_s_s(((g_514 || (p_8 && (safe_rshift_func_int16_t_s_s((((~(l_721 = g_720)) || g_514) == (0x12258285 & (!(g_155 || (0x0C == l_692))))), 10)))) == ((safe_rshift_func_int16_t_s_s((((g_63 = ((((((safe_lshift_func_int16_t_s_s(1, 7)) == g_693) > g_155) < (-1)) && g_152) && p_9)) ^ 0xB0380E9B) != g_71), l_692)) <= 0U)), g_693)) && p_9);
    return p_9;
}
static int32_t func_22(int16_t p_23, int32_t p_24, uint32_t p_25, int32_t p_26, uint8_t p_27)
{
    int8_t l_718 = 0x0F;
    int32_t l_719 = (-3);
    for (g_77 = 8; (g_77 > (-29)); g_77 = safe_sub_func_uint8_t_u_u(g_77, 7))
    {
        for (g_186 = 28; (g_186 < 57); g_186 = safe_add_func_int32_t_s_s(g_186, 6))
        {
            return l_718;
        }
        g_152 = 0xF6CEA1F4;
    }
    l_719 = l_718;
    return p_26;
}
static uint32_t func_30(int16_t p_31, uint32_t p_32)
{
    return p_31;
}
inline static uint32_t func_33(int16_t p_34, uint8_t p_35, uint8_t p_36, int8_t p_37, int8_t p_38)
{
    int16_t l_694 = 0xCA4A;
    int32_t l_695 = 1;
    l_695 = l_694;
    g_152 = g_110;
    for (g_693 = (-15); (g_693 < 18); g_693++)
    {
        uint32_t l_702 = 0xAB81DD4E;
        int32_t l_711 = 0x0DC5047E;
        int32_t l_712 = (-1);
        g_156 = ((safe_lshift_func_int16_t_s_u((safe_div_func_int8_t_s_s(((((l_702 = (l_695 = g_63)) & (l_711 = ((g_71 ^ ((((p_35 < p_37) != ((safe_rshift_func_int8_t_s_u((safe_rshift_func_int16_t_s_s((p_37 != (safe_rshift_func_int8_t_s_u(0x74, (safe_sub_func_int16_t_s_s(0xDDF9, l_694))))), 10)), p_37)) ^ g_400)) ^ g_186) >= 0x7E09A933)) <= g_110))) < l_712) ^ p_38), p_36)), 6)) | p_36);
        g_713 = (0xC6 || 8);
    }
    l_695 = (0x30CDAC9B & ((0xBD46E123 < l_694) ^ g_110));
    return g_108;
}
inline static const uint32_t func_41(int32_t p_42)
{
    int8_t l_409 = 1;
    int32_t l_414 = 0x0016306C;
    int32_t l_444 = 0x0737BC0B;
    p_42 = (((-10) == (safe_lshift_func_int8_t_s_s((g_253 == (safe_rshift_func_int16_t_s_u(0x5757, 8))), 7))) >= ((safe_div_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(g_400, 0xA5B5)), ((l_409 = p_42) ^ (safe_rshift_func_int8_t_s_u((((((g_186 | (0 && g_63)) != l_414) | 0x8002) <= 0x6BF4) >= l_414), 6))))) ^ 0x44));
    if (((((safe_rshift_func_int8_t_s_s(7, 6)) & ((((safe_mod_func_int32_t_s_s((((safe_lshift_func_uint8_t_u_s(250U, 6)) == ((safe_sub_func_int32_t_s_s((0x176D <= p_42), (safe_sub_func_int32_t_s_s(0x155A29D4, g_110)))) != (safe_lshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_u(((l_414 = g_91) | 0xB2), (g_400 = (p_42 & g_109)))), 8)))) || l_414), l_409)) || l_414) | g_91) | g_152)) > (-1)) && l_414))
    {
        uint32_t l_437 = 0x61E55B3C;
        uint32_t l_442 = 0xBF895B2C;
        int32_t l_443 = 0xCB37EDD2;
        int32_t l_445 = 0x1E02231B;
        int16_t l_480 = 0x28EA;
        int32_t l_505 = 0x5743C387;
        int32_t l_590 = 1;
        int32_t l_625 = 9;
        l_445 = ((p_42 = (g_152 = ((g_156 = ((l_444 = (((p_42 & ((g_15 || g_77) >= ((l_443 = ((0x9536371D != (safe_add_func_uint16_t_u_u(((((((safe_sub_func_int8_t_s_s(((safe_div_func_uint32_t_u_u(g_108, (safe_div_func_int8_t_s_s((((l_437 = g_110) && ((safe_sub_func_uint16_t_u_u((g_186 = ((((l_414 = 8U) < (((((safe_lshift_func_int8_t_s_s(g_71, 3)) || g_155) || g_400) < 0xE697D69C) && l_442)) > (-8)) & l_409)), l_409)) > g_152)) > g_110), p_42)))) & g_71), p_42)) < 3U) && l_437) < l_442) | g_110) <= l_409), l_409))) && p_42)) < l_442))) || g_155) >= 0U)) & l_442)) >= 0x35D0FB07))) ^ (-1));
        for (l_437 = 0; (l_437 < 45); l_437++)
        {
            int32_t l_490 = 0x3EB4133E;
            int32_t l_499 = 0;
            int32_t l_515 = (-1);
            int32_t l_583 = 1;
            if (p_42)
                break;
            for (l_445 = (-22); (l_445 != 25); l_445++)
            {
                int16_t l_457 = 1;
                int32_t l_481 = 0;
                int32_t l_489 = 1;
                if ((g_253 <= 0xFA))
                {
                    uint32_t l_482 = 4294967295U;
                    uint16_t l_488 = 0U;
                    uint32_t l_500 = 0x5D0A36D6;
                    g_152 = (safe_lshift_func_uint16_t_u_s((((p_42 < (safe_div_func_int8_t_s_s((!((0x4C && ((safe_lshift_func_uint16_t_u_u(l_457, ((safe_sub_func_uint8_t_u_u((g_253 != (((g_109 < ((safe_mod_func_uint32_t_u_u(((((safe_div_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((l_481 = (0xEC != (safe_add_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((safe_div_func_uint16_t_u_u((g_110 = ((safe_add_func_int8_t_s_s((((safe_lshift_func_int16_t_s_s(((safe_lshift_func_int8_t_s_s(g_152, 6)) <= ((safe_lshift_func_uint16_t_u_u(l_480, l_480)) | l_414)), 7)) | g_156) ^ 0x53D6), 0x3B)) || 0x226D4EE6)), g_91)), 0x53)), p_42)))), g_71)), g_253)) & p_42) < g_71) && 0xF6), g_15)) <= p_42)) ^ 0xF8) < l_457)), l_414)) ^ g_15))) & l_437)) < l_482)), 1U))) == g_109) == p_42), p_42));
                    if ((0xA5 ^ 0x3B))
                    {
                        g_152 = p_42;
                    }
                    else
                    {
                        return l_442;
                    }
                    g_152 = ((safe_add_func_int32_t_s_s((((p_42 != (((((l_489 = (p_42 > (safe_unary_minus_func_int8_t_s((g_253 = (safe_rshift_func_int16_t_s_u((g_91 == p_42), (l_481 = l_488)))))))) <= (((g_156 < (l_414 = (l_490 = p_42))) != (g_63 = ((safe_div_func_int32_t_s_s((((safe_add_func_int16_t_s_s(((safe_mod_func_int16_t_s_s((safe_rshift_func_int8_t_s_u((-5), 0)), ((g_15 | 0) || g_110))) < p_42), 0x46D6)) && l_488) ^ l_444), 0xB7261D15)) & g_15))) >= g_71)) != g_15) ^ g_71) & l_444)) ^ l_499) > l_499), l_409)) && l_500);
                    g_152 = ((g_109 && p_42) < ((safe_add_func_uint8_t_u_u(p_42, 0)) < l_457));
                }
                else
                {
                    uint8_t l_540 = 255U;
                    int32_t l_551 = (-4);
                    for (g_186 = 9; (g_186 >= 31); ++g_186)
                    {
                        uint16_t l_550 = 0xBA30;
                        p_42 = ((((((l_505 == 0x3A) <= (safe_lshift_func_uint8_t_u_u(0x58, 4))) > (safe_div_func_int16_t_s_s((safe_sub_func_int16_t_s_s(l_505, (((safe_div_func_uint8_t_u_u((p_42 | (g_514 != l_515)), p_42)) >= (safe_sub_func_int8_t_s_s(g_91, 0x8D))) > l_409))), g_152))) && p_42) > 0xC5) == g_514);
                        l_551 = ((0x7887B8A3 & (safe_add_func_int16_t_s_s((safe_div_func_int8_t_s_s(((((safe_add_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_s((safe_rshift_func_uint16_t_u_s(0U, 13)), 0)) | (safe_lshift_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_u((safe_div_func_uint8_t_u_u((((safe_lshift_func_int8_t_s_s((safe_sub_func_int32_t_s_s(l_540, ((((safe_rshift_func_uint16_t_u_s((0x5EAB == (l_444 = ((!((g_152 = ((safe_div_func_uint8_t_u_u((p_42 >= (safe_mod_func_int32_t_s_s((-2), (-2)))), (safe_rshift_func_int16_t_s_s(p_42, 2)))) > 1U)) == 0xC793CACA)) && g_514))), 3)) != p_42) || 3) > (-1)))), l_442)) > l_414) && l_550), 0xA9)), 11)), l_457)) < l_414), 5))), l_550)) & g_77) != g_15) || 0xC1683796), g_15)), p_42))) ^ l_499);
                    }
                }
                g_156 = (safe_unary_minus_func_int32_t_s((safe_rshift_func_uint16_t_u_u(0x8BC2, 13))));
                if ((safe_add_func_int32_t_s_s((((g_253 = l_481) >= g_91) <= ((-1) ^ ((0xF5 > 0x6D) == (safe_div_func_int32_t_s_s(l_481, (safe_sub_func_uint8_t_u_u((l_490 = ((l_515 = (((safe_rshift_func_int16_t_s_u(0, 1)) < (g_108 >= (safe_add_func_int32_t_s_s(((p_42 = ((safe_div_func_uint8_t_u_u(((g_152 & g_400) >= l_515), l_490)) <= p_42)) <= l_481), 0U)))) != g_15)) != l_499)), 0xD3))))))), g_63)))
                {
                    p_42 = 0x00860358;
                }
                else
                {
                    g_152 = p_42;
                    for (l_444 = 27; (l_444 < (-8)); l_444 = safe_sub_func_int16_t_s_s(l_444, 4))
                    {
                        p_42 = g_155;
                    }
                }
            }
            if (((safe_sub_func_int16_t_s_s((l_583 = ((~(l_490 = (safe_sub_func_uint16_t_u_u((p_42 <= p_42), (l_515 = (l_499 = (l_414 = (safe_div_func_int32_t_s_s((safe_unary_minus_func_int16_t_s(l_414)), p_42))))))))) >= (((l_444 = (1U && 0x86)) > ((g_77 < (g_71 = ((p_42 >= ((g_155 = (safe_sub_func_uint16_t_u_u((safe_div_func_int32_t_s_s((safe_div_func_int16_t_s_s((l_480 <= g_78), 0xA710)), g_156)), p_42))) < (-10))) & g_108))) && 0xC1)) < p_42))), 0xD69E)) && g_109))
            {
                return l_490;
            }
            else
            {
                uint16_t l_622 = 0xEFD9;
                g_156 = (((safe_rshift_func_int16_t_s_u((l_583 = ((safe_add_func_uint16_t_u_u((((safe_sub_func_int32_t_s_s((251U >= ((((l_590 = l_515) > ((safe_sub_func_int16_t_s_s(((l_414 = ((((safe_mod_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(((p_42 >= (safe_div_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_u(((65535U && (safe_div_func_int16_t_s_s((safe_sub_func_int32_t_s_s(((((g_152 = ((~(safe_mod_func_int8_t_s_s((0x73FE690E == (g_63 = ((g_514 = 0x7B) <= (((safe_add_func_uint16_t_u_u((((safe_sub_func_int32_t_s_s((safe_mod_func_uint32_t_u_u((l_444 < ((safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_s((((safe_lshift_func_uint16_t_u_s(((((safe_sub_func_int32_t_s_s((l_409 && 0x2EA10CC8), 3U)) == p_42) != 0xA7) | g_91), l_480)) ^ p_42) | l_622), l_622)), 1)) > g_400)), g_110)), p_42)) && g_152) < 0xB0FC9665), 0U)) >= l_515) ^ l_409)))), g_110))) > l_499)) == 1U) <= g_110) < l_414), 0x58AED116)), 0xECDD))) != 1), 1)) > l_490), p_42))) != g_253), 6)), g_253)) <= 6U) <= 0xE13792FB) < 0x0B)) == 3U), p_42)) & (-9))) < g_110) ^ p_42)), 8)) > (-6)) > 0xB5), g_155)) <= l_444)), p_42)) || 0xABC02D9E) > p_42);
                l_515 = p_42;
            }
            for (g_110 = 0; (g_110 >= 14); ++g_110)
            {
                uint32_t l_636 = 4294967294U;
                g_152 = (l_625 >= ((safe_div_func_int32_t_s_s(((0x97A0F8B6 ^ (!(l_583 = (p_42 = ((+p_42) == (((g_77 | 0) >= (safe_lshift_func_int8_t_s_u((l_414 = (((safe_mod_func_int16_t_s_s(l_442, ((p_42 != ((((safe_rshift_func_uint16_t_u_s(((((((g_186 == 0x4E0953FF) & l_499) ^ p_42) <= 0xB1) < 0x388F) ^ 0x95AF0C2C), g_514)) <= g_108) > g_91) || 0xB5EA)) ^ g_77))) <= 0x991D) == 0x38)), 6))) > l_636)))))) & 0U), 0x29296126)) ^ 4));
            }
        }
        g_152 = 0x49D8796C;
        g_152 = l_414;
    }
    else
    {
        uint32_t l_640 = 1U;
        for (g_78 = 2; (g_78 > (-3)); g_78--)
        {
            uint8_t l_643 = 8U;
            int32_t l_650 = 8;
            l_650 = (6 < (l_444 = (((safe_unary_minus_func_uint32_t_u(l_640)) & (0xD95A6424 != (((safe_sub_func_uint16_t_u_u(((1U && (((g_253 = (l_643 = 0x16)) != ((safe_add_func_int16_t_s_s(((((g_108 & (safe_mod_func_int16_t_s_s(0xDE0E, ((safe_div_func_int32_t_s_s((g_152 = (p_42 < 0x8CD4)), g_186)) && p_42)))) <= g_78) > (-8)) && l_640), 0)) <= g_63)) != p_42)) || (-1)), 0xB66D)) == p_42) <= l_650))) >= p_42)));
        }
    }
    l_444 = 0x41B48068;
    if (g_15)
    {
        int8_t l_651 = 0xB6;
        g_156 = g_152;
        l_414 = (l_444 = l_651);
    }
    else
    {
        const int8_t l_665 = 0x1E;
        int32_t l_672 = (-8);
        if (((safe_lshift_func_uint8_t_u_u(g_253, 0)) & g_400))
        {
            uint32_t l_664 = 4294967292U;
            int32_t l_673 = 0xAF846CCD;
            p_42 = (((safe_add_func_int8_t_s_s((0x4C == (safe_rshift_func_uint16_t_u_u((((safe_sub_func_uint16_t_u_u((g_186 = (((safe_rshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((l_664 = p_42), p_42)), 4)) == l_665) > (safe_mod_func_int32_t_s_s((g_156 = ((g_514 = (l_673 = (l_672 = (safe_div_func_int16_t_s_s((((p_42 < (g_152 < (0x1EE8 | (safe_lshift_func_uint16_t_u_u((((((g_71 != ((-1) != l_665)) > 9) && g_77) == l_665) < 3U), 9))))) <= l_665) >= p_42), g_253))))) != l_665)), 0xC9F6A4FD)))), l_665)) == p_42) ^ l_665), l_665))), 254U)) && 5) ^ p_42);
            g_152 = p_42;
        }
        else
        {
            uint8_t l_678 = 0x95;
            p_42 = (safe_lshift_func_int16_t_s_u((safe_add_func_uint8_t_u_u((l_678 = p_42), (safe_rshift_func_uint16_t_u_u(g_78, 1)))), 0));
        }
        g_152 = p_42;
    }
    return g_152;
}
static int8_t func_45(int32_t p_46)
{
    uint32_t l_54 = 0xA9711F64;
    int32_t l_62 = 0xD982FC9A;
    int16_t l_76 = (-1);
    int8_t l_147 = (-6);
    const uint32_t l_245 = 0x4D21E74E;
    uint32_t l_355 = 0x06700EAA;
    int32_t l_398 = 8;
    int32_t l_399 = 0x91E8048C;
lbl_336:
    l_62 = (safe_mod_func_int8_t_s_s(0xCD, func_49(g_15, (l_54 = 0x12D4), (g_110 = (g_15 >= (safe_lshift_func_uint8_t_u_s((func_57(l_62, (((g_63 = 0x4A) <= ((safe_lshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_s((g_15 < (safe_lshift_func_uint8_t_u_s(((((g_71 = (!4294967295U)) > (g_78 = ((g_77 = (safe_sub_func_uint16_t_u_u((safe_add_func_int8_t_s_s((g_15 & p_46), l_76)), l_62))) <= p_46))) || 0xE4340421) && 5U), 5))), l_76)), l_76)) < g_15)) >= g_15), l_76, p_46) ^ 0x6DE3FE27), p_46)))), p_46)));
    for (g_108 = 0; (g_108 > (-10)); g_108 = safe_sub_func_uint16_t_u_u(g_108, 9))
    {
        uint32_t l_136 = 4294967288U;
        int32_t l_157 = (-1);
        uint16_t l_171 = 1U;
        uint32_t l_292 = 1U;
        if (((safe_sub_func_int8_t_s_s(l_136, ((safe_mod_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(((l_157 = (((((-7) >= ((safe_mod_func_uint16_t_u_u((((((l_62 = (safe_sub_func_int16_t_s_s((g_78 = (safe_mod_func_uint16_t_u_u((g_110 = l_147), (g_156 = (g_155 = (((safe_rshift_func_int16_t_s_u(p_46, 13)) & ((0x3080 != (((safe_div_func_uint32_t_u_u((g_71 != (((g_152 = 0U) | (safe_div_func_uint32_t_u_u((0xB369 < (1 < 0x83)), 4294967295U))) < 65527U)), 1U)) || 0) == p_46)) > 4294967289U)) && l_136)))))), g_108))) >= 0) > p_46) | l_76) <= 2), l_54)) ^ g_91)) < p_46) || g_77) >= p_46)) <= l_136), 7)), 0xC10F)) > 1U))) | l_136))
        {
            int16_t l_180 = (-1);
            int32_t l_187 = 0x19CEE683;
            for (g_63 = 21; (g_63 == 22); g_63 = safe_add_func_uint8_t_u_u(g_63, 3))
            {
                int16_t l_196 = 0x02F2;
                for (g_152 = 0; (g_152 != (-19)); g_152--)
                {
                    uint32_t l_162 = 0xFE0775E6;
                    return l_162;
                }
                for (l_157 = (-20); (l_157 > 29); l_157 = safe_add_func_int16_t_s_s(l_157, 8))
                {
                    uint8_t l_178 = 0x3E;
                    int32_t l_179 = (-6);
                    int32_t l_183 = 0x269B8F49;
                    g_152 = g_15;
                    g_152 = (safe_lshift_func_uint16_t_u_u(p_46, (0x2A42 | (((safe_div_func_uint16_t_u_u(l_171, g_108)) >= ((safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(l_76, (safe_rshift_func_uint8_t_u_s((l_179 = (l_178 = p_46)), ((l_180 != ((safe_sub_func_uint16_t_u_u((0xF0C11142 <= 3U), g_71)) || g_155)) < g_152))))), 0)) < l_183)) < 2U))));
                    l_187 = (((g_109 = l_180) != (safe_add_func_int32_t_s_s(((0x81DC == p_46) < g_15), (g_186 = l_157)))) == l_62);
                    l_187 = (((safe_rshift_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_u(g_186, ((0x8602 <= (safe_lshift_func_int16_t_s_u(g_186, 1))) > (0xEE & (((safe_div_func_uint8_t_u_u((g_109 = 1U), l_196)) >= (g_110 = (l_62 = (p_46 & ((safe_lshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((p_46 > ((~0xF3) == 0x32A01D18)), p_46)), 4)) && l_187))))) & g_71))))) | g_77), 12)) | 0x99BD) <= p_46);
                }
            }
        }
        else
        {
            int32_t l_213 = 0x953C472D;
            int8_t l_232 = (-1);
            int32_t l_304 = 0x1D57787E;
            l_213 = (g_152 = (((safe_add_func_int32_t_s_s(p_46, ((safe_div_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u((((!(p_46 | g_77)) || (safe_lshift_func_uint8_t_u_s((safe_sub_func_uint8_t_u_u(255U, ((l_213 & (g_186 || (((g_110 = (l_62 = (safe_div_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(g_71, 6)), g_155)))) ^ (safe_lshift_func_int8_t_s_u(((safe_mod_func_uint16_t_u_u((l_136 | p_46), l_157)) >= 255U), 2))) <= (-6)))) >= 0xB2))), 3))) < g_71), l_157)), g_78)) <= p_46))) & p_46) != p_46));
            for (g_110 = (-20); (g_110 < 20); ++g_110)
            {
                int8_t l_271 = 2;
                int32_t l_293 = 4;
                int32_t l_294 = 0;
                if (g_108)
                {
                    int32_t l_251 = 1;
                    int32_t l_295 = 0;
                    if ((g_110 || ((0xEF0F ^ (safe_div_func_int16_t_s_s((0x5B < l_136), (safe_lshift_func_int16_t_s_u((p_46 && (safe_sub_func_uint8_t_u_u(l_232, ((((((l_157 = (0x36 ^ (safe_add_func_uint16_t_u_u((p_46 || ((safe_sub_func_uint8_t_u_u((l_136 == p_46), l_136)) > (-1))), l_213)))) < p_46) && l_232) & 0xB528) < p_46) != p_46)))), l_76))))) < g_186)))
                    {
                        l_62 = g_155;
                        return p_46;
                    }
                    else
                    {
                        int32_t l_250 = 0xE1D0A500;
                        int32_t l_252 = (-1);
                        int32_t l_254 = 9;
                        int16_t l_272 = (-7);
                        l_254 = (0xB35A5BBF ^ (0U & (safe_sub_func_int32_t_s_s((g_71 > (g_253 = ((((g_63 = (safe_mod_func_int16_t_s_s((g_63 || ((safe_rshift_func_uint8_t_u_s(l_245, p_46)) < ((l_252 = (g_109 = ((safe_rshift_func_int8_t_s_s((safe_add_func_uint32_t_u_u(0x8842E752, (0x31 > 0x25))), l_250)) && l_251))) | l_232))), g_71))) ^ g_108) >= p_46) == p_46))), g_91))));
                        if (p_46)
                            break;
                        g_156 = g_108;
                        l_157 = (safe_lshift_func_int16_t_s_u((((safe_mod_func_int8_t_s_s((254U | (safe_add_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((((((l_271 = (g_15 <= ((g_91 || (safe_rshift_func_int8_t_s_s((p_46 != (~(((((!(safe_sub_func_int8_t_s_s(0xB0, l_171))) >= p_46) < (safe_add_func_int8_t_s_s(0, g_63))) < 0x0BACB65B) || p_46))), 6))) > g_152))) != l_272) == 0x0758) < g_63) || l_157), 8)), 1))), p_46)) || 0U) == p_46), 4));
                    }
                    l_157 = p_46;
                    l_295 = (safe_div_func_uint32_t_u_u((l_294 = ((!(~(g_63 = (safe_sub_func_int16_t_s_s(l_271, ((0x6A || l_251) > (safe_div_func_uint32_t_u_u((safe_div_func_uint8_t_u_u((((safe_mod_func_uint16_t_u_u((l_293 = (((0x45 || (g_253 = ((-1) >= (l_213 = (safe_lshift_func_uint16_t_u_u((safe_unary_minus_func_uint8_t_u((safe_add_func_uint32_t_u_u((p_46 != (g_152 == g_253)), ((safe_mod_func_int8_t_s_s(((0U ^ l_232) < 0x2F89), g_77)) & (-1)))))), l_292)))))) <= g_15) ^ g_110)), p_46)) && 1U) < 1U), g_71)), l_271)))))))) != g_108)), g_108));
                }
                else
                {
                    uint16_t l_311 = 0xB18E;
                    int32_t l_356 = 0xB29B32BA;
                    if (g_78)
                    {
                        int8_t l_312 = (-9);
                        l_312 = (((safe_lshift_func_int8_t_s_u(p_46, (safe_lshift_func_uint8_t_u_u(p_46, 6)))) | ((safe_lshift_func_uint8_t_u_s((l_213 = 0xD7), ((safe_lshift_func_int8_t_s_s((((p_46 ^ ((l_294 = (0xF614 >= l_304)) || g_156)) <= g_91) | ((safe_rshift_func_uint8_t_u_s((safe_mod_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((l_157 = p_46), l_311)), l_311)), g_91)) == l_292)), 3)) != 248U))) ^ p_46)) == (-2));
                        return p_46;
                    }
                    else
                    {
                        l_294 = (safe_add_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((((safe_sub_func_int8_t_s_s((-1), (safe_rshift_func_int8_t_s_u(((safe_div_func_uint8_t_u_u((l_293 = g_108), (safe_lshift_func_uint16_t_u_s(p_46, p_46)))) && 0), 6)))) | (safe_sub_func_uint32_t_u_u((((0 <= (((2 == l_294) != g_253) <= g_155)) < g_253) == g_91), l_54))) != 249U), 4)), 0xB138));
                        l_304 = ((safe_unary_minus_func_uint16_t_u(65531U)) >= ((((~g_186) && (safe_mod_func_uint32_t_u_u((g_155 ^ (l_62 = 0U)), ((safe_div_func_uint16_t_u_u((safe_unary_minus_func_uint16_t_u(65535U)), (-1))) ^ (((safe_rshift_func_int8_t_s_u((((g_77 > (-1)) & p_46) <= 0), g_152)) >= g_63) ^ 1))))) || 0xFC50761E) == (-2)));
                        if (g_15)
                            break;
                        if (l_157)
                            goto lbl_336;
                    }
                    g_156 = (safe_div_func_int16_t_s_s(g_15, (l_293 = (l_62 = (safe_div_func_int8_t_s_s((!(l_293 <= (-3))), (((safe_lshift_func_int8_t_s_s((!p_46), (safe_mod_func_int32_t_s_s((((safe_lshift_func_int16_t_s_u((((g_110 > (safe_sub_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s((l_356 = (l_304 <= ((((safe_mod_func_int8_t_s_s(l_355, (p_46 || p_46))) == 6U) < (-1)) > (-3)))), g_152)), (-1)))) || 0x57) > g_155), p_46)) == l_311) & 0x3B), 9)))) <= l_294) || p_46)))))));
                    g_152 = 0;
                    l_356 = (safe_lshift_func_int8_t_s_u(l_213, (safe_div_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((0U < (safe_sub_func_uint8_t_u_u((safe_div_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(((((((l_294 = l_271) < ((((l_293 = ((((safe_div_func_uint8_t_u_u(5U, (((((1U && 0x9779F3C6) < (safe_lshift_func_int8_t_s_s((g_253 = g_77), 0))) == (safe_lshift_func_int16_t_s_s(((safe_add_func_int16_t_s_s((g_156 ^ (l_62 = p_46)), l_304)) <= 0x4E2F047D), l_245))) & 0xAD85) & p_46))) & l_311) == l_355) | 0)) >= p_46) | p_46) ^ g_110)) ^ p_46) != p_46) <= 0x17E0) > 2), 0U)), (-2))), l_232))), 0x4DF7)), 10)) == 0), g_110))));
                }
            }
        }
    }
    g_152 = (safe_div_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u((((g_109 >= (g_110 = (((g_400 = (safe_rshift_func_uint8_t_u_u(((l_355 > ((((l_399 = (safe_sub_func_uint16_t_u_u(l_355, (~(safe_add_func_int16_t_s_s(l_147, (l_398 = ((((-5) >= p_46) & p_46) != (safe_sub_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_s((l_62 = g_63), g_152)) && 0xCCC0), 1)), g_186)))))))))) != l_355) ^ 3) >= l_76)) && g_78), 0))) > g_91) <= p_46))) > l_355) < 65531U), 14)), l_245));
    l_398 = g_15;
    return g_77;
}
static int8_t func_49(int16_t p_50, int16_t p_51, uint32_t p_52, uint32_t p_53)
{
    uint32_t l_111 = 0xBACA85E4;
    int32_t l_120 = 0x68CBA474;
    int32_t l_123 = 0x63BBBF13;
    int32_t l_130 = 0x0AD585B8;
    int8_t l_131 = (-7);
    l_130 = (((((l_111 = 0x8916A715) ^ (safe_div_func_int32_t_s_s((((l_131 = ((safe_div_func_uint16_t_u_u((((safe_rshift_func_int16_t_s_u(((safe_sub_func_int16_t_s_s((l_120 = (p_50 = l_120)), (p_51 = (l_123 = (g_71 || (safe_div_func_int16_t_s_s(3, 0x78ED))))))) || ((l_120 = (((0U >= ((safe_add_func_int16_t_s_s(p_53, (safe_sub_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_u(0xAA3A, 10)) | 1U), 0xE721)))) ^ (-1))) >= 0xDFDF) & (-1))) == p_52)), 0)) <= p_52) | 0xBD83), 0x2F77)) | l_130)) > g_109) ^ 0x79), g_109))) <= l_130) < 0x7DF6) == 0U);
    return l_131;
}
inline static uint32_t func_57(uint32_t p_58, uint8_t p_59, int8_t p_60, const uint16_t p_61)
{
    uint8_t l_94 = 0U;
    int32_t l_105 = 0x701FB033;
    int32_t l_106 = 0x19D8D777;
    uint8_t l_107 = 0xAC;
    g_109 = (safe_add_func_int32_t_s_s((((safe_lshift_func_uint8_t_u_u(((p_58 == g_77) | ((g_78 != ((safe_rshift_func_int16_t_s_u((g_108 = (safe_sub_func_uint8_t_u_u((safe_div_func_int32_t_s_s((((safe_add_func_uint32_t_u_u(g_91, (safe_lshift_func_uint16_t_u_u(l_94, 15)))) >= 0) > (l_106 = (safe_rshift_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_s(((l_105 = ((safe_rshift_func_uint16_t_u_u(p_60, ((g_78 >= ((safe_add_func_uint16_t_u_u(p_59, p_58)) >= 0U)) & p_61))) <= 0xE5)) ^ g_71), p_61)) || 0xA60B), l_94)))), l_107)), p_61))), l_94)) < 1U)) < p_60)), p_61)) != 0x342F) && p_58), 0x80F5C685));
    return p_60;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_15;
    csmith_sink_ = g_63;
    csmith_sink_ = g_71;
    csmith_sink_ = g_77;
    csmith_sink_ = g_78;
    csmith_sink_ = g_91;
    csmith_sink_ = g_108;
    csmith_sink_ = g_109;
    csmith_sink_ = g_110;
    csmith_sink_ = g_152;
    csmith_sink_ = g_155;
    csmith_sink_ = g_156;
    csmith_sink_ = g_186;
    csmith_sink_ = g_253;
    csmith_sink_ = g_400;
    csmith_sink_ = g_514;
    csmith_sink_ = g_691;
    csmith_sink_ = g_693;
    csmith_sink_ = g_713;
    csmith_sink_ = g_720;
    csmith_sink_ = g_732;
    csmith_sink_ = g_734;
    platform_main_end(0,0);
    return 0;
}
