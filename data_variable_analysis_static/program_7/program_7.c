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
static uint16_t g_2 = 65528U;
static uint32_t g_79 = 4294967295U;
static int16_t g_95 = (-1);
static int32_t g_96 = 0x33887E98;
static uint32_t g_140 = 1U;
static uint32_t g_167 = 0U;
static uint32_t g_168 = 1U;
static int32_t g_218 = 1;
static uint32_t g_228 = 1U;
static uint16_t g_236 = 1U;
static uint16_t g_263 = 65527U;
static int16_t g_335 = 1;
static int8_t g_357 = (-5);
static uint32_t g_367 = 4294967295U;
static uint16_t g_394 = 0xAA33;
static int8_t g_415 = 0x54;
static uint32_t g_430 = 4294967290U;
static int8_t g_456 = 0;
static uint8_t g_475 = 1U;
static int16_t g_505 = 0x4A9C;
static uint16_t g_508 = 8U;
static int8_t g_591 = 0x92;
static int32_t g_594 = 0xEF6C8359;
static uint32_t g_725 = 0x92988B22;
static int8_t g_726 = 0;
static uint16_t g_738 = 5U;
static uint32_t g_754 = 1U;
static int32_t g_770 = 0x700A405B;
inline static uint16_t func_1(void);
static int8_t func_8(uint32_t p_9, int8_t p_10, uint32_t p_11, uint16_t p_12);
static int16_t func_13(int32_t p_14);
static int32_t func_25(uint16_t p_26, uint8_t p_27, uint8_t p_28, uint32_t p_29, uint32_t p_30);
inline static uint16_t func_33(uint32_t p_34, int32_t p_35, int8_t p_36, uint32_t p_37);
static int16_t func_42(uint16_t p_43, int32_t p_44, uint32_t p_45);
static uint32_t func_48(int32_t p_49, int16_t p_50, int32_t p_51);
inline static int16_t func_55(uint16_t p_56, uint32_t p_57, int16_t p_58, uint32_t p_59, int32_t p_60);
inline static uint32_t func_61(int16_t p_62, uint8_t p_63, uint8_t p_64, uint32_t p_65, uint8_t p_66);
inline static int16_t func_71(int16_t p_72);
inline static uint16_t func_1(void)
{
    uint32_t l_3 = 0x1E87DF2F;
    uint16_t l_701 = 0x9433;
    int32_t l_777 = 0;
    int16_t l_824 = 0;
    l_3 = g_2;
    if ((safe_mod_func_int8_t_s_s((((((safe_rshift_func_int8_t_s_u(func_8((65535U & func_13(l_3)), l_3, ((safe_sub_func_uint8_t_u_u(247U, 0x41)) == ((safe_lshift_func_uint16_t_u_s(l_3, 14)) >= (safe_mod_func_uint16_t_u_u(0x2DCD, (safe_add_func_int8_t_s_s((safe_add_func_int32_t_s_s((safe_sub_func_uint16_t_u_u(0x4B74, l_3)), 0)), g_167)))))), l_3), g_167)) == 0) <= l_3) < 8U) ^ 0xDBCE3D1A), l_701)))
    {
        uint8_t l_702 = 0xE1;
        uint16_t l_717 = 0U;
        int32_t l_732 = 0x8A0079CE;
        int32_t l_825 = 0x57E9151E;
        if ((l_3 > l_702))
        {
            return g_430;
        }
        else
        {
            int8_t l_711 = 7;
            int32_t l_722 = 0;
            int8_t l_798 = 0;
            if (l_702)
            {
                int16_t l_716 = 0;
                l_716 = (((-8) > (safe_rshift_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((safe_add_func_int8_t_s_s((4294967295U > l_701), (safe_lshift_func_int16_t_s_u(1, 11)))), 0xE6)), 14))) || (l_702 && ((l_711 != (l_3 != (((safe_mod_func_int32_t_s_s((safe_add_func_int8_t_s_s((l_702 != g_263), 0x87)), g_79)) > 0xBB) > l_711))) && g_367)));
                l_717 = l_3;
                g_594 = l_3;
            }
            else
            {
                for (g_591 = 0; (g_591 < 4); g_591 = safe_add_func_uint16_t_u_u(g_591, 1))
                {
                    l_722 = ((safe_add_func_int32_t_s_s(9, g_140)) ^ 2);
                    g_594 = 0x36F293F6;
                    return l_3;
                }
            }
            for (g_594 = 15; (g_594 <= (-11)); g_594 = safe_sub_func_uint8_t_u_u(g_594, 1))
            {
                uint32_t l_735 = 0x897F354D;
                int32_t l_753 = 0;
                g_726 = g_725;
                if (((safe_unary_minus_func_uint16_t_u(((((safe_sub_func_int8_t_s_s((((0xD15F ^ 0) & (((safe_mod_func_int16_t_s_s((l_732 | (safe_rshift_func_uint8_t_u_u((((1 < g_167) > l_732) > ((l_735 >= l_711) > 0U)), 5))), l_701)) != 0x3470) && l_735)) | g_236), g_168)) ^ g_357) != g_168) & l_717))) && l_722))
                {
                    uint8_t l_752 = 255U;
                    for (g_415 = (-5); (g_415 > 16); g_415++)
                    {
                        g_738 = g_475;
                        l_722 = l_717;
                        g_754 = (((l_735 && (g_456 > ((safe_add_func_uint16_t_u_u((g_96 != (5 != (((safe_add_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(g_140, (((safe_add_func_int8_t_s_s(g_738, (((((-1) ^ (((safe_sub_func_uint32_t_u_u((((safe_lshift_func_int8_t_s_s((((+((l_735 || (65535U && 0x573B)) & 0xA43EC917)) <= l_752) | 1), 5)) | l_711) < l_735), 0x8971AE0B)) | g_357) <= 0xABE5)) <= g_218) != 6U) >= l_753))) <= g_140) ^ l_722))), g_335)) <= l_735) & g_167))), l_702)) > l_752))) < g_508) <= 0);
                        if (g_754)
                            continue;
                    }
                }
                else
                {
                    int16_t l_765 = (-7);
                    if (((safe_add_func_uint32_t_u_u(g_140, ((((((l_701 ^ ((((safe_add_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((g_505 > (safe_sub_func_uint16_t_u_u(((safe_mod_func_uint32_t_u_u((0x459CE284 > g_167), 0x58A8E54D)) >= (0x6A8C86F4 && (l_765 < 0x53))), l_732))), g_415)), g_725)) != 0xC0ADF977) ^ l_735) & 6)) <= l_753) & 0x9F) | g_754) < l_765) <= (-2)))) < g_367))
                    {
                        g_770 = (safe_mod_func_uint16_t_u_u(l_702, (safe_lshift_func_int16_t_s_s(1, (0x7ED3039F < 0x441F0301)))));
                        return g_415;
                    }
                    else
                    {
                        l_777 = (((l_3 < (safe_lshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((safe_sub_func_uint8_t_u_u((l_3 | g_505), 0x2B)), 4)), 6))) == 1U) ^ g_218);
                    }
                    for (g_754 = (-13); (g_754 < 48); g_754 = safe_add_func_int8_t_s_s(g_754, 7))
                    {
                        if (g_456)
                            break;
                        l_777 = 0x1D57537F;
                    }
                }
                for (l_717 = (-6); (l_717 != 51); ++l_717)
                {
                    uint16_t l_796 = 0x82C6;
                    int32_t l_797 = 0x8C53145D;
                    int32_t l_801 = 0x08FF482B;
                    l_777 = (((g_218 >= (g_2 == ((safe_mod_func_uint32_t_u_u((((safe_add_func_uint16_t_u_u(((g_167 == (((safe_rshift_func_uint16_t_u_s(((g_335 | l_735) ^ (safe_add_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u(l_735, (((((((safe_mod_func_int16_t_s_s(l_777, g_357)) ^ ((safe_mod_func_int8_t_s_s((((l_735 == 1) != l_796) < 3U), g_263)) == l_722)) ^ 0x5144) ^ 0x5C) | l_797) ^ g_475) == l_798))), 0xC929B7E3))), g_96)) != l_777) || l_3)) > l_798), l_753)) == 248U) != (-1)), g_594)) && g_456))) & 0U) <= g_475);
                    for (l_732 = 0; (l_732 < 26); l_732 = safe_add_func_int32_t_s_s(l_732, 6))
                    {
                        l_722 = g_726;
                        l_801 = l_797;
                    }
                }
                return l_732;
            }
            l_825 = ((safe_rshift_func_uint8_t_u_s((safe_unary_minus_func_int8_t_s(((safe_add_func_uint8_t_u_u((safe_add_func_int8_t_s_s(((((((((~(safe_mod_func_int32_t_s_s((l_732 & l_777), g_456))) != (safe_rshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_s(((~((safe_lshift_func_uint8_t_u_s((~0x36), 0)) < (safe_rshift_func_int8_t_s_u(1, 6)))) >= ((g_167 || (l_777 == (safe_add_func_uint8_t_u_u((l_722 != (((0xC2 > l_824) <= 65535U) == g_738)), 0x80)))) < l_722)), 2)), g_508))) && l_702) != g_96) && 0x9AF25066) | l_824) ^ g_594) > g_96), l_824)), l_717)) > l_732))), g_95)) || l_777);
        }
    }
    else
    {
        int16_t l_840 = (-5);
        uint16_t l_854 = 0xCE9A;
        g_594 = (safe_lshift_func_int8_t_s_u((safe_add_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s((g_394 <= (((safe_sub_func_uint8_t_u_u(((((((-8) || ((safe_lshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u((((safe_rshift_func_uint8_t_u_s(l_840, 5)) == (l_840 ^ l_840)) || ((((((!(((l_840 && (g_725 & (l_840 & (safe_lshift_func_int8_t_s_s((((l_840 & g_725) > g_357) && 1U), 4))))) > 0xD8) <= g_725)) != l_840) || g_456) || 65534U) & l_840) || 4294967295U)), 3)), 1)) || (-1))) & l_840) < g_218) || l_824) || g_738), g_140)) || l_701) && g_456)), g_725)), l_840)), 6));
        l_777 = (((g_335 < (3 == g_263)) && (g_770 == ((((safe_sub_func_uint8_t_u_u((0 == g_140), g_167)) <= ((65530U ^ (0x6A54 > 0U)) > l_840)) <= g_228) & g_394))) > g_456);
        l_777 = ((safe_lshift_func_uint8_t_u_u((safe_add_func_int32_t_s_s(l_840, ((safe_add_func_int32_t_s_s((safe_add_func_uint32_t_u_u(g_228, (g_167 ^ (0x6AE8 != g_140)))), 4294967295U)) < (g_357 == l_854)))), l_3)) && g_95);
        l_777 = 0x67024B47;
    }
    return g_95;
}
static int8_t func_8(uint32_t p_9, int8_t p_10, uint32_t p_11, uint16_t p_12)
{
    int32_t l_700 = 1;
    l_700 = (safe_lshift_func_uint8_t_u_u(0x77, 7));
    return p_9;
}
static int16_t func_13(int32_t p_14)
{
    int16_t l_46 = 1;
    uint8_t l_634 = 255U;
    int32_t l_685 = (-8);
    l_685 = ((safe_sub_func_uint32_t_u_u(((g_2 < (safe_rshift_func_uint16_t_u_s(((safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint16_t_u_s(g_2, (safe_lshift_func_int16_t_s_s((func_25((safe_add_func_uint32_t_u_u((func_33((safe_mod_func_int16_t_s_s(0, (safe_rshift_func_int16_t_s_u(func_42(g_2, g_2, l_46), (((safe_mod_func_uint32_t_u_u((p_14 & (((((safe_unary_minus_func_uint8_t_u(p_14)) && 0x6329) | l_46) ^ l_46) == 0x7B63D270)), l_46)) > g_167) <= 0U))))), p_14, p_14, l_634) ^ p_14), p_14)), p_14, p_14, g_2, p_14) <= g_2), g_2)))), g_167)) || l_634), 7))) == (-6)), 4294967295U)) & g_167);
    return l_685;
}
static int32_t func_25(uint16_t p_26, uint8_t p_27, uint8_t p_28, uint32_t p_29, uint32_t p_30)
{
    int32_t l_672 = 0x65BA99D9;
    l_672 = (g_79 ^ (~(safe_sub_func_uint8_t_u_u(l_672, (safe_mod_func_uint8_t_u_u(((((safe_mod_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(l_672, l_672)), p_27)) | ((safe_mod_func_int32_t_s_s(((safe_sub_func_int8_t_s_s(7, ((safe_add_func_int16_t_s_s(p_26, (250U >= (l_672 != g_505)))) | p_28))) && p_30), 4294967289U)) | p_28)) > g_96) >= 7), g_456))))));
    l_672 = p_27;
    return l_672;
}
inline static uint16_t func_33(uint32_t p_34, int32_t p_35, int8_t p_36, uint32_t p_37)
{
    uint8_t l_646 = 0xB0;
    int32_t l_647 = 0xDCC9AE79;
    l_647 = (+(((((safe_add_func_int8_t_s_s(p_36, (((((safe_mod_func_int32_t_s_s(((g_415 >= (p_35 && (safe_sub_func_int8_t_s_s(((safe_add_func_int32_t_s_s((-1), (((safe_rshift_func_uint16_t_u_s(7U, 6)) ^ l_646) ^ (l_646 ^ l_646)))) | (((g_456 || 65535U) >= 5) | (-1))), p_37)))) & 0x9B66DC0A), (-9))) != g_508) ^ l_646) ^ p_35) <= 7))) > g_357) < g_591) != l_646) && l_646));
    l_647 = (g_508 ^ (safe_rshift_func_int8_t_s_s(l_647, 7)));
    l_647 = (((safe_mod_func_uint8_t_u_u(((((safe_add_func_uint32_t_u_u((!(safe_lshift_func_int8_t_s_u(p_34, ((((((safe_add_func_uint32_t_u_u(4294967292U, 2U)) | (((safe_mod_func_uint32_t_u_u((safe_add_func_uint32_t_u_u(((safe_add_func_uint32_t_u_u(0U, (g_95 != (safe_rshift_func_int16_t_s_u((safe_add_func_int32_t_s_s(8, p_35)), 11))))) != (((g_2 > p_35) && p_34) != p_37)), l_647)), p_37)) & p_37) && p_35)) && p_36) == 0xA1160241) <= 2U) < 248U)))), l_647)) != 1U) || 0) & 0x846C), 0x80)) >= 6) != g_218);
    return l_646;
}
static int16_t func_42(uint16_t p_43, int32_t p_44, uint32_t p_45)
{
    int32_t l_47 = (-2);
    int8_t l_304 = 0x99;
    int16_t l_319 = 0x7C4C;
    int8_t l_322 = 3;
    int16_t l_379 = 0xA005;
    int8_t l_544 = 0xB6;
    uint32_t l_587 = 0U;
    int32_t l_597 = 5;
    l_47 = 0x336AE3D4;
    l_47 = (-1);
    l_47 = ((func_48(((safe_add_func_int16_t_s_s((+(func_55(g_2, func_61(g_2, g_2, l_47, l_47, (safe_lshift_func_uint8_t_u_u((l_47 < (safe_lshift_func_uint16_t_u_s(p_45, func_71(p_43)))), 4))), l_47, p_43, g_2) < g_167)), 4U)) >= 0x12CC52EB), p_44, l_47) > p_44) == 0xD729);
    if (((0x393D > ((safe_add_func_uint16_t_u_u(((p_43 ^ (((safe_mod_func_uint32_t_u_u(((safe_mod_func_int8_t_s_s((0x442E >= ((safe_add_func_int8_t_s_s((-1), (safe_sub_func_int16_t_s_s(l_47, g_79)))) >= (safe_lshift_func_uint8_t_u_s((((safe_rshift_func_int16_t_s_s(((((safe_sub_func_uint16_t_u_u((l_47 < (l_47 && (safe_sub_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_s(((safe_add_func_uint8_t_u_u(l_47, 0x64)) ^ p_45), 10)) || 0xA2), 0xA9B1)))), g_96)) ^ (-1)) == g_79) || l_47), l_47)) > (-1)) | (-1)), 6)))), p_43)) >= 0xBA556991), g_218)) != l_304) || g_79)) > g_95), l_47)) < g_236)) != p_45))
    {
        uint32_t l_312 = 1U;
        l_47 = ((g_79 || ((g_263 >= ((g_95 && (((((((safe_add_func_uint16_t_u_u(((!p_44) == g_2), p_45)) > l_304) > (safe_sub_func_uint8_t_u_u(0x1B, ((safe_lshift_func_uint16_t_u_s(65527U, 14)) != g_218)))) | g_140) | g_140) ^ g_140) >= 255U)) >= g_218)) < l_304)) >= l_312);
        l_47 = (safe_sub_func_int8_t_s_s(p_43, ((((((safe_mod_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s((((l_319 == g_140) ^ g_218) ^ (((p_44 & (safe_sub_func_uint32_t_u_u((l_319 == ((l_312 <= 65535U) == (((g_228 != 255U) < 0x4ED3) >= 4294967291U))), 0x5933C535))) && p_44) != l_47)), 12)), l_312)) != p_44) < l_312) | 0x9C) >= 65531U) == l_322)));
        return p_45;
    }
    else
    {
        int8_t l_334 = 0x4E;
        uint32_t l_338 = 4294967290U;
        int32_t l_393 = 1;
        uint32_t l_543 = 4294967289U;
        int16_t l_628 = 1;
        if ((((0xEF == ((safe_rshift_func_uint16_t_u_u((~(g_168 ^ l_322)), (((safe_mod_func_int32_t_s_s((safe_sub_func_uint16_t_u_u(p_43, (((safe_add_func_int32_t_s_s(((g_168 | 0x68133992) && (p_44 || p_44)), (((safe_lshift_func_uint8_t_u_s(((l_334 | 0x8550) && g_140), 6)) || 0x5A) | 0x6ECC8533))) & p_45) == g_79))), 0x9C4DF7FA)) > g_79) != 0U))) & p_43)) & p_44) | p_44))
        {
            g_335 = g_167;
            g_357 = (((safe_lshift_func_uint8_t_u_s(0x25, l_338)) && (safe_lshift_func_int8_t_s_s((((!(safe_unary_minus_func_uint8_t_u(255U))) >= (((((safe_mod_func_int16_t_s_s(g_96, (safe_rshift_func_int8_t_s_u(p_43, 3)))) < (!p_44)) > 0xE0E8798E) ^ l_322) == (safe_add_func_int32_t_s_s((safe_mod_func_int16_t_s_s((safe_sub_func_int16_t_s_s(((~(safe_lshift_func_int8_t_s_s(p_44, l_322))) || 65528U), g_228)), g_140)), g_79)))) >= g_79), 2))) | l_334);
        }
        else
        {
            uint32_t l_362 = 7U;
            g_367 = (((safe_rshift_func_int8_t_s_u((g_335 & ((safe_add_func_int16_t_s_s(1, l_47)) < l_319)), 3)) < (l_362 | (safe_sub_func_uint8_t_u_u((g_140 && (g_167 ^ ((((safe_add_func_int8_t_s_s(0x7A, g_357)) || (-1)) ^ 2) > (-9)))), g_95)))) == 0x87);
        }
        if (((!l_322) && (l_47 == (safe_mod_func_int16_t_s_s((safe_rshift_func_int8_t_s_u((((safe_mod_func_int8_t_s_s(7, p_45)) != (g_236 > (((safe_add_func_int8_t_s_s(p_44, (0 ^ (0 && (safe_mod_func_int32_t_s_s((l_322 ^ g_167), l_334)))))) >= g_218) ^ p_45))) <= p_43), l_334)), l_379)))))
        {
            uint16_t l_386 = 1U;
            int32_t l_450 = 1;
            l_393 = (safe_rshift_func_int8_t_s_u(p_44, (safe_lshift_func_int8_t_s_u((((safe_sub_func_int16_t_s_s((p_43 >= (l_386 == (((safe_sub_func_int8_t_s_s((((~(((safe_sub_func_uint16_t_u_u((~(65527U || p_44)), l_338)) == (p_43 == p_45)) | g_236)) | g_95) | g_218), p_45)) >= (-1)) == g_228))), g_140)) || p_43) > g_140), 1))));
            g_394 = 1;
            for (l_338 = (-2); (l_338 > 3); l_338++)
            {
                int8_t l_413 = 0x07;
                int32_t l_414 = 0x1A32C9F2;
                int16_t l_416 = 0x0FD7;
                if (((((p_45 >= l_379) ^ p_43) > g_95) >= 0x2D))
                {
                    int8_t l_406 = 0;
                    int32_t l_417 = 0x747FD3BF;
                    if ((((safe_lshift_func_int16_t_s_u((((safe_sub_func_uint8_t_u_u(((l_386 || p_45) ^ 5), 246U)) ^ (safe_lshift_func_int16_t_s_s((((safe_add_func_int8_t_s_s((!(l_406 & (safe_add_func_int32_t_s_s(0x4DA4AE40, ((((((safe_rshift_func_int8_t_s_u((g_218 & ((((safe_lshift_func_uint8_t_u_s(((1 >= 0xC320A9F1) >= 0), 6)) & p_43) | g_2) == 0x17)), 4)) & 65535U) <= 0) | g_236) ^ 0x2BE534CB) == g_218))))), g_236)) <= 9U) ^ p_45), 5))) >= g_335), l_413)) != 0x32) | l_413))
                    {
                        l_414 = (0x31 ^ 6);
                    }
                    else
                    {
                        if (p_45)
                            break;
                        l_414 = (-1);
                        g_415 = 0x581CE634;
                    }
                    if (p_44)
                        break;
                    if (p_44)
                    {
                        int32_t l_429 = 0;
                        l_417 = l_416;
                        g_430 = (p_44 ^ ((safe_rshift_func_int8_t_s_u((p_45 <= (safe_sub_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((((-1) > g_218) ^ ((l_386 <= 1) == 8U)), (!0xE1FE8385))), 11)), (((safe_add_func_uint16_t_u_u((((l_429 || p_45) == 0x53) && p_44), g_168)) & 0) && l_393)))), 7)) >= g_95));
                    }
                    else
                    {
                        return l_322;
                    }
                    for (g_236 = 21; (g_236 == 25); g_236 = safe_add_func_uint32_t_u_u(g_236, 1))
                    {
                        uint32_t l_437 = 0U;
                        l_47 = (0U && p_43);
                        l_414 = (safe_sub_func_int8_t_s_s(((safe_lshift_func_int16_t_s_s(g_96, l_437)) == (((safe_mod_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_s(g_357, 13)), ((1 && (safe_lshift_func_int16_t_s_u(l_386, g_430))) >= (safe_sub_func_int32_t_s_s(l_437, l_304))))), g_168)) >= g_96) & 1)), 0U));
                        l_47 = 1;
                    }
                }
                else
                {
                    uint16_t l_453 = 3U;
                    for (l_334 = (-16); (l_334 < (-30)); l_334 = safe_sub_func_uint32_t_u_u(l_334, 8))
                    {
                        l_450 = g_367;
                        if (p_44)
                            break;
                    }
                    for (l_416 = 7; (l_416 >= 17); l_416 = safe_add_func_int8_t_s_s(l_416, 4))
                    {
                        l_414 = l_338;
                        g_456 = (((p_45 >= l_453) < (1U | ((safe_add_func_int32_t_s_s(((-4) <= (g_140 && (((-10) >= 1U) > g_2))), p_43)) > 0U))) >= g_95);
                    }
                }
                return g_394;
            }
            for (l_319 = 0; (l_319 < (-23)); --l_319)
            {
                int16_t l_504 = 0xD4F1;
                uint16_t l_506 = 1U;
                for (g_394 = 0; (g_394 < 56); ++g_394)
                {
                    int32_t l_461 = 0xFB1F0220;
                    l_450 = (((0xD7 & (p_45 == l_461)) != (safe_rshift_func_uint16_t_u_s(p_44, ((safe_add_func_uint8_t_u_u((safe_add_func_int16_t_s_s(9, (safe_add_func_int16_t_s_s(((g_357 || (safe_rshift_func_uint16_t_u_s((l_461 >= l_322), (5 || 2)))) & l_450), 0xD8DB)))), g_228)) & g_367)))) < l_461);
                    g_475 = (safe_rshift_func_uint16_t_u_s((!p_43), g_168));
                    g_505 = (g_168 < (safe_rshift_func_int8_t_s_u((0x35 <= ((safe_sub_func_int32_t_s_s((safe_mod_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(((0x9EA2F4C1 >= (safe_mod_func_int8_t_s_s((((safe_add_func_uint32_t_u_u(((safe_rshift_func_uint8_t_u_s(0x18, 5)) ^ (safe_lshift_func_uint16_t_u_s(g_415, (safe_sub_func_int8_t_s_s((((safe_sub_func_uint8_t_u_u((0xA322 <= ((safe_add_func_uint32_t_u_u(p_44, (((safe_lshift_func_int16_t_s_s(((((-5) & (safe_mod_func_int8_t_s_s((-1), g_357))) < g_167) ^ 0xBF), 13)) == l_338) > 0x7887))) <= l_338)), l_504)) == g_95) == g_140), 0x0C))))), l_504)) >= 0U) == 0xE4), l_504))) & p_44), 65535U)), g_2)), 65530U)), g_357)) > (-2))), 6)));
                    l_506 = p_45;
                }
            }
        }
        else
        {
            uint16_t l_518 = 65535U;
            int16_t l_557 = 0x984D;
            int32_t l_600 = 0xE0866E13;
            int8_t l_624 = (-1);
            g_508 = (safe_unary_minus_func_uint8_t_u(0U));
            if ((safe_add_func_int32_t_s_s((l_47 != (!((g_168 <= (safe_sub_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u((safe_sub_func_int16_t_s_s(((((g_263 && l_518) & (safe_sub_func_int32_t_s_s((safe_add_func_uint16_t_u_u((safe_add_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s((((((safe_rshift_func_uint8_t_u_s((safe_unary_minus_func_uint16_t_u((((g_218 <= ((safe_rshift_func_int16_t_s_u((safe_sub_func_uint16_t_u_u((+(g_335 ^ (safe_rshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_u((0 < p_45), (((safe_add_func_uint8_t_u_u(l_379, g_475)) & l_543) || g_168))), l_322)))), g_167)), 14)) >= 1U)) && l_518) | 0x35))), 2)) != l_319) == g_505) ^ 4) > g_79), g_2)), 9)), p_45)), 4U)), g_168))) && g_2) ^ l_544), 0xA12C)), l_518)), g_218))) > (-9)))), p_43)))
            {
                uint32_t l_556 = 0xDA7D5EBD;
                int16_t l_590 = 9;
                for (l_518 = 0; (l_518 > 38); ++l_518)
                {
                    int32_t l_588 = 0x55CBC5B2;
                    l_47 = (((safe_add_func_uint16_t_u_u(p_45, ((safe_lshift_func_int8_t_s_s(((p_43 != g_167) & g_415), 0)) > (l_304 & g_218)))) != l_47) || 0x2B1C);
                    if (p_45)
                    {
                        l_47 = (safe_mod_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s((((+l_304) && ((g_335 ^ 0x33338E9F) >= ((g_140 || p_43) > l_556))) && p_45), l_557)), l_319));
                        return p_44;
                    }
                    else
                    {
                        int32_t l_589 = 1;
                        g_591 = (((safe_lshift_func_uint16_t_u_s((((safe_sub_func_uint16_t_u_u(g_95, (3U & (p_44 || ((1U ^ (safe_sub_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u((!(((safe_mod_func_int32_t_s_s(((((safe_lshift_func_int16_t_s_u(((((safe_add_func_uint32_t_u_u(p_44, ((+(safe_rshift_func_uint16_t_u_u((!((safe_add_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(0x39, 1)), 14)), g_236)) & (safe_add_func_int32_t_s_s((((0x9C5781C0 == ((0U > l_587) < l_518)) != 0x4F3B51DB) < 0xB2), g_140)))), 3))) < p_44))) >= 1U) & g_96) == l_588), l_334)) ^ l_588) || l_556) <= l_589), g_2)) || l_590) || (-3))), p_43)) > 0x755E30A0), l_543)) < l_557), 1))) <= l_589))))) || 0xD939) || l_338), g_475)) != g_228) != g_218);
                    }
                }
                g_594 = (safe_rshift_func_uint8_t_u_s(0xE8, 2));
                l_597 = (p_45 >= ((safe_add_func_uint16_t_u_u((((((((l_597 == l_334) < g_168) && ((p_44 != g_2) | (p_45 < (1U >= ((safe_rshift_func_uint16_t_u_u((p_43 || l_338), 2)) || p_43))))) != l_557) == (-3)) <= l_319) >= 0x58AED116), 0)) <= 0xECDD));
            }
            else
            {
                l_393 = (-1);
            }
            l_600 = 0;
            for (g_475 = 0; (g_475 <= 8); g_475 = safe_add_func_uint32_t_u_u(g_475, 5))
            {
                uint32_t l_603 = 4294967288U;
                if (l_603)
                    break;
                for (p_45 = (-16); (p_45 >= 29); ++p_45)
                {
                    if (p_45)
                        break;
                    g_594 = (l_603 & (safe_lshift_func_uint8_t_u_u(0x9A, ((safe_sub_func_uint32_t_u_u(((((p_43 || ((safe_rshift_func_uint16_t_u_s(((safe_mod_func_uint16_t_u_u(p_45, ((p_43 <= (2U >= (7U != ((safe_lshift_func_int16_t_s_s(((((safe_add_func_int8_t_s_s(((safe_mod_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(0x21, p_45)), p_43)), l_603)) <= 0x99D01EAA), 0x8A)) & 0x19) == l_47) ^ g_335), l_338)) >= p_43)))) || 3U))) & g_140), 14)) || 0x953FFDE2)) < g_505) == 0x303509A9) < p_44), l_624)) || l_603))));
                    for (l_518 = 13; (l_518 != 43); l_518 = safe_add_func_uint8_t_u_u(l_518, 6))
                    {
                        return l_543;
                    }
                    g_594 = (~l_603);
                }
            }
        }
        l_393 = l_628;
    }
    return l_379;
}
static uint32_t func_48(int32_t p_49, int16_t p_50, int32_t p_51)
{
    int32_t l_235 = 0xBACB65B9;
    int32_t l_280 = 0x80C9BE5D;
    int8_t l_281 = 0xAC;
    g_236 = (safe_sub_func_uint32_t_u_u(g_79, (l_235 & 4294967292U)));
    g_263 = (safe_mod_func_int32_t_s_s((p_51 > (l_235 == (((safe_add_func_uint8_t_u_u((safe_unary_minus_func_int8_t_s((safe_lshift_func_int16_t_s_u(((safe_rshift_func_int16_t_s_u(((safe_rshift_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u(((safe_rshift_func_int16_t_s_u((g_168 != (8U >= ((((l_235 & (safe_rshift_func_int16_t_s_u((g_168 >= g_140), (safe_rshift_func_uint8_t_u_u((((safe_add_func_int32_t_s_s((((safe_add_func_int8_t_s_s((~(p_49 & (safe_mod_func_uint8_t_u_u(251U, l_235)))), g_168)) | p_51) != p_51), l_235)) > g_167) != 0xF2), p_51))))) < l_235) != l_235) > g_95))), p_51)) == p_51), l_235)), 7)) != 0x2764), 0)) && 4294967294U), 5)))), 0x0D)) && g_228) && p_49))), l_235));
    p_49 = (((l_235 && ((~l_235) <= (safe_rshift_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(((safe_rshift_func_uint8_t_u_u(p_49, 0)) == (safe_sub_func_int32_t_s_s((+(((safe_rshift_func_int16_t_s_s(p_49, 12)) || 0U) || ((safe_rshift_func_uint16_t_u_s(((safe_lshift_func_int8_t_s_s((g_95 != 0x57), ((g_95 != l_280) <= l_280))) != l_235), 6)) == 0))), p_50))), 0x2ECD07D7)), p_50)))) == l_281) && 1);
    l_235 = g_168;
    return l_235;
}
inline static int16_t func_55(uint16_t p_56, uint32_t p_57, int16_t p_58, uint32_t p_59, int32_t p_60)
{
    uint32_t l_151 = 0xF1A53783;
    uint16_t l_182 = 0xAE02;
    uint32_t l_226 = 0xF37C5CFF;
    uint32_t l_227 = 0x0336C129;
    g_140 = p_59;
    if ((safe_add_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(((safe_mod_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(((safe_sub_func_int32_t_s_s(((g_96 && l_151) < p_60), (((((safe_rshift_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(((l_151 == (g_79 || (((g_2 >= (safe_lshift_func_uint8_t_u_s((p_58 > (safe_rshift_func_uint16_t_u_s((0xBB >= (g_95 || l_151)), l_151))), 5))) | l_151) & l_151))) && 1), l_151)), p_56)) == 1) & p_59) >= l_151) & g_140))) == g_95), 6)), p_56)) == (-1)), 0x8E)), 0x26F7)))
    {
        int8_t l_166 = 0;
        uint32_t l_181 = 0x848BC0DD;
        uint16_t l_206 = 0U;
        int32_t l_207 = 6;
        g_168 = ((((((safe_add_func_int32_t_s_s(2, (4294967293U & g_95))) & (g_95 >= 0x3499)) || ((p_58 > (safe_rshift_func_int16_t_s_s(0x0C82, (safe_mod_func_int16_t_s_s(((p_58 >= (l_166 == 4)) | (-1)), g_95))))) & g_79)) ^ l_166) & g_167) < p_56);
        p_60 = (safe_add_func_int32_t_s_s((safe_mod_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(g_95, ((safe_mod_func_int8_t_s_s((l_151 ^ ((((safe_rshift_func_int16_t_s_s(2, (((((((((safe_add_func_int16_t_s_s((g_167 >= ((l_181 < l_182) || (safe_lshift_func_uint16_t_u_u(((((safe_rshift_func_int16_t_s_u((safe_sub_func_uint32_t_u_u((safe_sub_func_int32_t_s_s(g_95, ((safe_lshift_func_int8_t_s_u((safe_add_func_uint8_t_u_u(l_182, (safe_rshift_func_uint16_t_u_u((p_60 <= p_57), 11)))), 4)) || l_181))), p_57)), 2)) > p_57) <= l_182) != p_57), 13)))), g_167)) & p_59) || 9) > p_58) & g_96) || l_151) < g_2) != 0) | p_56))) == (-6)) ^ g_95) > l_151)), 7)) != (-3)))), 9U)), l_166));
        l_207 = ((0 != 0x93AE58DA) | ((((+(((((safe_rshift_func_uint8_t_u_s(((0x00010583 & (((l_166 != (1 ^ (safe_add_func_int16_t_s_s((safe_add_func_int8_t_s_s((-1), p_60)), g_96)))) <= 0x11) > l_166)) != p_59), 1)) <= g_168) || 4294967295U) == l_181) > l_166)) & 4294967288U) >= 9U) <= l_206));
        g_218 = (safe_mod_func_int16_t_s_s(g_79, ((g_95 ^ (safe_mod_func_uint32_t_u_u(((l_207 <= l_166) & (safe_add_func_int16_t_s_s(((safe_add_func_int32_t_s_s((p_60 <= (safe_lshift_func_int16_t_s_s((1U == g_167), 1))), (((l_182 & 4294967288U) || p_56) < p_59))) != 1), 0x939D))), l_182))) & 253U)));
    }
    else
    {
        uint32_t l_219 = 1U;
        int32_t l_229 = 1;
        p_60 = l_219;
        g_228 = (((safe_lshift_func_int8_t_s_s((g_168 >= ((((((g_95 > (g_96 == p_56)) | ((l_182 & (((safe_rshift_func_int8_t_s_u(l_219, 0)) && ((((((((p_59 && (l_151 == (safe_rshift_func_uint16_t_u_s((65528U & g_96), 2)))) && g_95) > 0) < p_57) && 0x0F) & g_95) | l_226) <= (-4))) ^ 0x3D)) < g_218)) != 0) > 0x3E28) == 0x28) == g_2)), l_227)) & p_57) != p_57);
        l_229 = ((0x1D432E6A == g_218) == g_79);
    }
    for (l_182 = (-29); (l_182 != 40); ++l_182)
    {
        uint16_t l_232 = 65533U;
        l_232 = 0x2E1585BB;
    }
    return l_151;
}
inline static uint32_t func_61(int16_t p_62, uint8_t p_63, uint8_t p_64, uint32_t p_65, uint8_t p_66)
{
    uint16_t l_94 = 0U;
    int16_t l_138 = 2;
    int32_t l_139 = 0x16A8AB26;
    g_95 = ((safe_lshift_func_int8_t_s_u(((g_79 == (safe_sub_func_uint32_t_u_u(9U, ((safe_add_func_int16_t_s_s(0xC292, (safe_mod_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s((255U > (-3)), (safe_mod_func_uint8_t_u_u(g_79, ((safe_lshift_func_uint8_t_u_u((p_65 != g_79), 2)) && (((((p_62 != l_94) & 5) == 0xD345) & g_2) != g_2)))))), g_79)))) <= 1)))) < g_2), 6)) | l_94);
    g_96 = ((((p_64 > g_2) ^ 6U) < 0xFCEEEC85) | l_94);
    for (g_96 = 0; (g_96 > (-21)); g_96--)
    {
        int8_t l_99 = 0xD2;
        int32_t l_100 = 0x5AE52E9A;
        uint8_t l_137 = 0xC9;
        if (g_96)
            break;
        l_100 = l_99;
        if ((((safe_sub_func_int8_t_s_s((p_66 || (safe_rshift_func_uint16_t_u_s(l_100, 4))), (safe_add_func_uint8_t_u_u(((safe_mod_func_uint32_t_u_u(p_63, (l_94 ^ ((l_94 == l_99) >= l_99)))) != p_63), p_64)))) & g_79) | 4))
        {
            l_100 = (-1);
        }
        else
        {
            int32_t l_133 = 0x6E721FB1;
            uint32_t l_136 = 1U;
            l_139 = ((-1) & (safe_rshift_func_uint16_t_u_s((safe_add_func_int32_t_s_s(0xDD067980, ((safe_mod_func_uint8_t_u_u(((((((safe_add_func_int8_t_s_s((safe_lshift_func_int16_t_s_u((safe_add_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_u(((safe_add_func_int32_t_s_s((+(safe_rshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_u(p_66, 4)), 2))), (safe_lshift_func_int16_t_s_u(((((((((((p_65 >= ((((~((l_133 || ((p_64 >= p_62) >= (((((safe_sub_func_int16_t_s_s(((0U || l_94) > p_63), 1U)) != g_2) ^ g_79) | l_99) || l_136))) >= l_137)) | g_96) > g_2) && p_63)) != l_94) ^ (-6)) != 0U) != p_66) || l_138) & 0xF4830711) < 0xC0CB) | g_96) != g_96), 11)))) != l_137), g_95)) && 0), 3U)), l_138)), 0xAF)) && 5) ^ p_66) | l_99) < 0xC2D95366) != l_136), g_2)) != (-7)))), 0)));
            l_139 = g_95;
            l_133 = p_63;
        }
    }
    return g_96;
}
inline static int16_t func_71(int16_t p_72)
{
    uint16_t l_73 = 65526U;
    int32_t l_78 = 0x54C62B41;
    l_78 = (((0x64E48C0C && l_73) < (safe_mod_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u((g_2 <= p_72), 250U)), ((((((l_73 <= 0xCD) <= 4294967294U) & g_2) && 2U) <= p_72) & l_73)))) >= 4294967295U);
    g_79 = p_72;
    return g_2;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_2;
    csmith_sink_ = g_79;
    csmith_sink_ = g_95;
    csmith_sink_ = g_96;
    csmith_sink_ = g_140;
    csmith_sink_ = g_167;
    csmith_sink_ = g_168;
    csmith_sink_ = g_218;
    csmith_sink_ = g_228;
    csmith_sink_ = g_236;
    csmith_sink_ = g_263;
    csmith_sink_ = g_335;
    csmith_sink_ = g_357;
    csmith_sink_ = g_367;
    csmith_sink_ = g_394;
    csmith_sink_ = g_415;
    csmith_sink_ = g_430;
    csmith_sink_ = g_456;
    csmith_sink_ = g_475;
    csmith_sink_ = g_505;
    csmith_sink_ = g_508;
    csmith_sink_ = g_591;
    csmith_sink_ = g_594;
    csmith_sink_ = g_725;
    csmith_sink_ = g_726;
    csmith_sink_ = g_738;
    csmith_sink_ = g_754;
    csmith_sink_ = g_770;
    platform_main_end(0,0);
    return 0;
}
