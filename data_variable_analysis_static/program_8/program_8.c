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
static uint16_t g_7 = 0x666A;
static uint16_t g_30 = 0xFC75;
static int8_t g_52 = 0xA9;
static int32_t g_55 = (-8);
static uint8_t g_93 = 255U;
static uint32_t g_94 = 0x3517D3E8;
static uint32_t g_121 = 4294967287U;
static uint8_t g_125 = 0U;
static uint32_t g_141 = 0U;
static uint32_t g_148 = 0x6F087C22;
static int32_t g_181 = 0;
static uint32_t g_221 = 0xC6CBE70D;
static int16_t g_222 = 1;
static uint16_t g_241 = 65526U;
static uint16_t g_242 = 0x8A3B;
static int32_t g_559 = 0x617F2254;
static int8_t g_738 = 0x7C;
static uint8_t g_953 = 8U;
static uint16_t g_982 = 1U;
static uint16_t g_1073 = 0U;
static int32_t g_1081 = 0x62793994;
inline static uint8_t func_1(void);
static int16_t func_4(uint32_t p_5);
static int32_t func_8(uint32_t p_9, uint32_t p_10);
inline static uint8_t func_16(int8_t p_17, int8_t p_18);
static int8_t func_19(uint32_t p_20, int16_t p_21, int8_t p_22, int32_t p_23, uint32_t p_24);
static uint16_t func_26(int8_t p_27);
static int8_t func_32(int32_t p_33, uint8_t p_34, int32_t p_35, int32_t p_36);
inline static int8_t func_44(uint16_t p_45, uint8_t p_46, uint8_t p_47, uint16_t p_48);
inline static uint16_t func_61(uint16_t p_62, uint8_t p_63, uint8_t p_64);
inline static int16_t func_65(int8_t p_66, uint32_t p_67, int32_t p_68, int8_t p_69, uint32_t p_70);
inline static uint8_t func_1(void)
{
    int8_t l_6 = (-1);
    int32_t l_1119 = 0xE19FBF3D;
    l_1119 = (safe_lshift_func_uint16_t_u_s(65527U, func_4((l_6 & g_7))));
    return l_6;
}
static int16_t func_4(uint32_t p_5)
{
    uint16_t l_25 = 5U;
    int32_t l_31 = 9;
    int32_t l_1010 = 0xDE1D5612;
    int32_t l_1013 = 0x79CB3C86;
    int32_t l_1027 = 1;
    int32_t l_1028 = 0xA19035F3;
    uint8_t l_1056 = 0U;
    int16_t l_1057 = 7;
    int8_t l_1086 = 9;
    uint32_t l_1101 = 4294967295U;
    l_1013 = ((p_5 || g_7) == ((func_8(g_7, (!(safe_mod_func_int8_t_s_s(0x71, (safe_add_func_int16_t_s_s((func_16((l_1010 = func_19(g_7, g_7, g_7, (l_25 && (l_31 = (g_30 = (func_26(((p_5 ^ g_7) | 65527U)) >= 65530U)))), p_5)), l_25) < g_221), l_25)))))) && g_982) < p_5));
    l_1010 = (l_31 = (((0x8909 >= (g_242 = p_5)) >= g_141) && l_1010));
    l_1028 = (safe_mod_func_int32_t_s_s(((!g_241) , ((0x1D || (safe_lshift_func_uint16_t_u_u((l_1010 = g_30), 7))) > ((safe_rshift_func_int8_t_s_u((safe_sub_func_int16_t_s_s((g_222 = (65535U ^ (safe_rshift_func_uint16_t_u_u((l_1013 = (safe_div_func_uint32_t_u_u(((((l_31 = 1) >= l_1027) < ((p_5 , (l_1013 != 1U)) | 0x82)) , 4294967289U), l_25))), p_5)))), 0x1EFE)), g_241)) != g_559))), 2));
    if ((((safe_rshift_func_int16_t_s_s((l_1013 = (((-3) >= (safe_lshift_func_uint16_t_u_u((l_1028 ^ l_1010), 4))) , (((((safe_rshift_func_int16_t_s_s(((p_5 <= (g_30 = (safe_rshift_func_int16_t_s_s(((l_1057 = (safe_add_func_int32_t_s_s((safe_sub_func_int8_t_s_s((l_1056 = (((safe_rshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((((((g_222 = (safe_sub_func_int32_t_s_s((safe_sub_func_uint8_t_u_u(((g_982 , (p_5 || (l_1028 ^ (g_7 <= ((safe_mod_func_int16_t_s_s((!g_738), 0x7227)) == l_1028))))) > 7), l_1010)), 1U))) , 0xFBAF) < g_52) <= 255U) && 0U), 2)), 5)), 5)) && l_31) >= p_5)), g_242)), l_25))) && 0x21), 10)))) == 0xFA7D), 12)) ^ p_5) < 8U) && p_5) ^ l_1013))), l_1010)) | 0x7B7F) <= (-5)))
    {
        int8_t l_1065 = 0x67;
        int32_t l_1075 = 0x5421889C;
        int32_t l_1078 = 0x67514AE6;
        int32_t l_1079 = (-1);
        uint32_t l_1080 = 0xCFC12411;
        g_1081 = (safe_rshift_func_int16_t_s_s((g_222 = (l_1010 = (l_1028 = (((p_5 || 7U) | (((safe_rshift_func_int8_t_s_u((((safe_rshift_func_uint8_t_u_s(((l_1079 = ((g_559 = (~l_1065)) , (safe_unary_minus_func_uint16_t_u(((l_1065 , (safe_mod_func_int8_t_s_s((g_738 ^ ((l_1078 = ((((safe_add_func_int32_t_s_s((g_181 = (safe_div_func_uint32_t_u_u((g_1073 = (g_141 = 0x9C969BA5)), (safe_unary_minus_func_int8_t_s((p_5 >= ((l_1075 = p_5) == (safe_mod_func_uint8_t_u_u((l_31 = (g_953 = (((((0x08FD9B42 <= p_5) >= 0x8BD6) <= p_5) && p_5) & 0))), 0x84))))))))), 0xC24805BA)) <= p_5) > l_1010) , p_5)) , l_1013)), 0xB1))) >= 1))))) != p_5), g_982)) ^ p_5) || 255U), 4)) | 4294967287U) | p_5)) & l_1080)))), l_1065));
        l_1010 = ((l_1028 = (l_1078 < l_1079)) == (l_31 = (p_5 && ((g_93 = (safe_mod_func_uint32_t_u_u(l_1078, l_1079))) || (safe_lshift_func_int8_t_s_s(l_1086, (((((safe_sub_func_uint16_t_u_u(l_1079, ((((safe_add_func_uint32_t_u_u(((safe_sub_func_int16_t_s_s((p_5 > (((((safe_div_func_int32_t_s_s((-1), 0x611C0491)) < 0) >= 0x03C8) <= 0xFD2C9963) | g_55)), 0)) && l_1056), 0xEB882581)) < (-1)) , 0x2B249367) == (-2)))) , l_1057) >= 246U) == g_953) , p_5)))))));
        l_1079 = (l_1101 = ((p_5 == ((g_121 = (safe_rshift_func_int16_t_s_s(0x1B1C, g_125))) , g_1073)) , ((safe_mod_func_int8_t_s_s(g_148, p_5)) < ((l_31 = (g_141 = (~(~g_559)))) , l_1056))));
        l_1013 = (-2);
    }
    else
    {
        uint32_t l_1117 = 0x43AE74EA;
        int32_t l_1118 = 0x0D7C3EAB;
        l_1010 = (p_5 | ((safe_mod_func_int32_t_s_s(l_1028, 1U)) && (l_1013 = ((safe_add_func_uint16_t_u_u((+(safe_rshift_func_uint8_t_u_u((g_125 || 0x9EC8), (safe_sub_func_uint32_t_u_u((0x43CC > (safe_div_func_uint16_t_u_u(((((l_1118 = ((safe_mod_func_uint8_t_u_u((((l_31 = (5 != (l_1028 = (safe_sub_func_uint8_t_u_u((p_5 , ((g_148 <= g_1073) == l_1117)), g_221))))) || g_148) > 0U), 0xB7)) ^ g_982)) < 4294967295U) < 1) & g_559), p_5))), l_1010))))), 0xB07B)) || g_1073))));
    }
    return l_1013;
}
static int32_t func_8(uint32_t p_9, uint32_t p_10)
{
    g_181 = g_30;
    return g_181;
}
inline static uint8_t func_16(int8_t p_17, int8_t p_18)
{
    int8_t l_1011 = 0x2A;
    int32_t l_1012 = (-2);
    g_559 = (g_181 = g_125);
    l_1012 = (0x920C == l_1011);
    return l_1011;
}
static int8_t func_19(uint32_t p_20, int16_t p_21, int8_t p_22, int32_t p_23, uint32_t p_24)
{
    uint32_t l_41 = 0U;
    int32_t l_49 = 0xE255BB5F;
    l_49 = ((((func_32(p_22, p_24, g_30, ((safe_mod_func_uint16_t_u_u((func_26(g_7) || (safe_lshift_func_int16_t_s_s(0x093D, (l_41 = func_26(p_22))))), (safe_lshift_func_int8_t_s_s(func_44(l_49, g_30, l_49, g_30), l_49)))) , p_20)) < g_121) && l_41) ^ p_22) < l_49);
    return l_41;
}
static uint16_t func_26(int8_t p_27)
{
    int16_t l_28 = 0x4DF7;
    int32_t l_29 = 0xAC3A6081;
    l_29 = l_28;
    return g_7;
}
static int8_t func_32(int32_t p_33, uint8_t p_34, int32_t p_35, int32_t p_36)
{
    uint16_t l_630 = 1U;
    int32_t l_633 = (-5);
    int32_t l_634 = 0;
    uint32_t l_686 = 4294967292U;
    uint32_t l_710 = 9U;
    uint8_t l_822 = 1U;
    uint16_t l_847 = 0xC66C;
    uint32_t l_920 = 4294967290U;
    uint32_t l_1008 = 0xF2E34BE1;
    if ((((safe_lshift_func_uint8_t_u_s(((l_634 = (safe_sub_func_int8_t_s_s(l_630, (safe_rshift_func_uint8_t_u_u((l_633 = p_35), 3))))) & (safe_add_func_uint32_t_u_u(((7U | g_93) && (((safe_rshift_func_uint16_t_u_u((safe_add_func_int32_t_s_s((safe_sub_func_int8_t_s_s((((safe_lshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_s(p_34, (safe_div_func_int32_t_s_s((-10), (((((g_241 | (+(0xA545 ^ 65535U))) < p_35) >= g_55) < 0U) || l_630))))), p_36)) , 0x0C54) && 0), g_7)), 0x8FF27071)), 6)) & p_33) & l_630)), g_55))), 5)) <= 0x500F75CD) >= g_94))
    {
        uint8_t l_683 = 0x09;
        int32_t l_684 = 0xB7E46297;
        int32_t l_685 = (-1);
        int32_t l_687 = 0;
        for (g_125 = 0; (g_125 != 42); g_125 = safe_add_func_uint32_t_u_u(g_125, 6))
        {
            int32_t l_652 = 0x2ADA4E3D;
            l_652 = p_34;
        }
        g_181 = (((l_687 = (safe_mod_func_uint8_t_u_u((g_242 >= (((safe_add_func_uint32_t_u_u(((g_125 <= (safe_sub_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_s(0xE94A, 6)) ^ g_141), (((safe_mod_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s(((safe_add_func_uint16_t_u_u((((safe_rshift_func_int8_t_s_u(((+l_633) != g_94), ((safe_mod_func_uint8_t_u_u((((safe_mod_func_uint16_t_u_u((((((l_634 = (+(l_685 = ((g_93 == ((safe_div_func_int16_t_s_s(0xCA1E, (safe_add_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((l_684 = (l_683 != 2)), 0x6B1BB043)), l_683)))) != (-1))) , g_93)))) != 7U) , g_148) , 1U) == (-1)), (-6))) | g_93) <= g_125), g_221)) || 255U))) == l_683) | 65535U), g_55)) == p_35), l_686)), p_33)) == 0U) ^ p_33)))) & 3U), l_683)) || g_125) && (-1))), 5U))) , 255U) || g_93);
    }
    else
    {
        int32_t l_693 = (-1);
        int32_t l_708 = 0x47AA6B28;
        int8_t l_709 = 0xF1;
        int32_t l_711 = 0x0D2E7379;
        int32_t l_777 = 0x0D9C3733;
        uint32_t l_792 = 5U;
        int16_t l_795 = 0xBACC;
        uint32_t l_851 = 0x5FBDE304;
        int32_t l_952 = (-9);
        if ((l_711 = ((((safe_mod_func_int8_t_s_s((safe_add_func_uint32_t_u_u((safe_unary_minus_func_uint8_t_u(((((-7) | (l_693 = (g_30 = 65535U))) , (((safe_lshift_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(l_633, l_693)), 4)) , (safe_add_func_int8_t_s_s((g_559 >= (!(((g_241 = 65535U) > (g_242 = (safe_rshift_func_int8_t_s_s(((g_30 = (safe_lshift_func_int16_t_s_u(l_630, 2))) ^ ((!(safe_add_func_int16_t_s_s((((65535U >= ((l_708 = ((((((65535U == 3) || 0xFE244826) , 0xD8A54C4F) , p_33) & 5) != g_242)) < l_709)) , 0x80) , g_242), 6))) , l_634)), 4)))) != 0xBBB207A4))), 0))) < 0xA688A32F)) ^ l_710))), 0x95FF20CE)), 4U)) , 4294967295U) , 0xC1) ^ g_7)))
        {
            int32_t l_737 = 6;
            uint32_t l_752 = 4294967295U;
            int32_t l_780 = 0x6FE12CF4;
lbl_753:
            for (g_141 = 8; (g_141 < 24); ++g_141)
            {
                uint16_t l_734 = 6U;
                int32_t l_739 = 1;
                int32_t l_740 = 0;
                l_740 = (safe_div_func_uint16_t_u_u(((safe_sub_func_int32_t_s_s((l_737 = (g_559 = ((safe_sub_func_int16_t_s_s(g_559, (g_222 = ((safe_sub_func_int16_t_s_s((l_739 = (((safe_add_func_int16_t_s_s(((safe_div_func_int8_t_s_s((p_33 , (safe_sub_func_int8_t_s_s(((safe_div_func_uint32_t_u_u(((((0x15CD146A & (safe_mod_func_uint32_t_u_u(((g_242 | (safe_mod_func_int8_t_s_s(l_633, ((l_734 ^ p_33) , ((g_738 = (safe_add_func_uint16_t_u_u((l_737 >= l_711), g_55))) && 0x0429B1DE))))) <= 9), 0x69C58AD9))) <= p_35) | p_35) != l_737), g_181)) && g_7), p_36))), (-3))) && 0x8B), g_559)) != g_141) < l_737)), g_181)) < 7U)))) == l_737))), l_633)) || 0x8840), p_35));
            }
            l_752 = ((((-3) && (((safe_unary_minus_func_int16_t_s(((safe_mod_func_uint16_t_u_u(l_633, g_181)) >= (g_141 = ((p_36 || ((g_559 ^ 0xD0B4) == (safe_rshift_func_int8_t_s_u((safe_sub_func_uint32_t_u_u((((0x91 & (safe_sub_func_int32_t_s_s(((((l_708 = (safe_rshift_func_int16_t_s_s((g_141 , 0), 9))) ^ g_121) <= p_36) >= l_693), g_242))) , 0x52C6) < l_686), 0U)), l_633)))) > p_36))))) >= g_148) == 0x83)) > g_52) >= 0x58);
            if (g_242)
                goto lbl_753;
            l_633 = ((l_752 == (l_633 == (safe_add_func_int32_t_s_s((((((safe_add_func_int16_t_s_s((l_780 = (safe_sub_func_uint16_t_u_u((g_241 = (safe_unary_minus_func_int32_t_s((((safe_sub_func_uint8_t_u_u(((0 && ((safe_mod_func_uint32_t_u_u((((((p_33 > (l_737 = (safe_mod_func_int32_t_s_s(((safe_sub_func_uint8_t_u_u((p_35 , (safe_mod_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s(((65533U | (((safe_lshift_func_uint8_t_u_s(p_34, 2)) , ((g_141 = l_777) , (safe_mod_func_int16_t_s_s(0, g_221)))) < 255U)) != g_221), g_148)), 0x10))), l_737)) || l_633), l_777)))) >= 0x52) == l_752) >= l_693) >= p_34), g_181)) & l_710)) & l_686), 0x8A)) != p_35) <= g_93)))), 0xABF8))), (-1))) || l_711) > l_693) & l_630) & p_35), g_55)))) , p_33);
        }
        else
        {
            int32_t l_781 = 0;
            g_559 = (l_634 = (0U <= p_36));
            l_634 = (l_781 = (l_633 = g_121));
            if (g_121)
                goto lbl_1009;
        }
        if ((safe_add_func_uint32_t_u_u(((safe_div_func_uint32_t_u_u(((255U > (safe_mod_func_uint32_t_u_u((((safe_lshift_func_int8_t_s_s(((safe_mod_func_uint16_t_u_u((p_34 == p_36), (g_222 = l_792))) , (safe_mod_func_int32_t_s_s(((l_795 , (safe_rshift_func_int16_t_s_u(l_693, 4))) ^ (safe_mod_func_uint32_t_u_u(((g_7 > 0xB2EE) , l_633), l_792))), g_7))), 3)) < l_633) || g_241), 0x1FF37576))) <= l_693), 4294967295U)) <= g_148), g_241)))
        {
            int32_t l_821 = 0x65A5509E;
            uint16_t l_831 = 0U;
            int32_t l_843 = (-10);
            int32_t l_844 = 0xB9015A14;
            if (((l_633 = (safe_sub_func_uint16_t_u_u(p_34, l_710))) > ((!(((g_30 = (safe_mod_func_uint16_t_u_u(g_125, l_777))) < ((p_33 ^ ((((((p_33 || g_148) == (((safe_lshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((g_738 = (((safe_unary_minus_func_int32_t_s(g_222)) < (((safe_sub_func_int16_t_s_s((+((safe_lshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((((safe_mod_func_int8_t_s_s((safe_div_func_uint16_t_u_u(((255U >= p_33) >= 0x2F9F), l_710)), 0x1F)) & p_34) >= l_777), 1)), 1)) == g_242)), p_35)) > g_222) & p_33)) & g_242)), 4)), 0)) >= p_36) || l_777)) | g_94) , p_35) & l_630) <= g_148)) > l_821)) , 4294967287U)) < 0x77CF)))
            {
                uint32_t l_842 = 4294967293U;
                int32_t l_845 = 0x0C220121;
                int32_t l_846 = 0xE8CE01D9;
                l_822 = p_35;
                l_708 = (safe_rshift_func_uint8_t_u_s((((safe_lshift_func_int16_t_s_u(l_709, ((((safe_rshift_func_uint8_t_u_s((safe_add_func_int16_t_s_s((l_846 = ((((p_34 = l_831) != (l_845 = (l_711 = (g_222 , ((p_33 && (safe_add_func_uint8_t_u_u(0x47, ((l_844 = (safe_rshift_func_int16_t_s_s(((p_33 && (g_181 != (safe_lshift_func_uint16_t_u_u(g_559, 0)))) , (safe_lshift_func_uint8_t_u_s((g_125 = (safe_add_func_int8_t_s_s(((g_222 = (l_843 = (((4 <= l_842) || l_709) != g_559))) > l_630), 6U))), p_35))), l_842))) != 0)))) != 0xB12B))))) || l_777) <= 5)), l_847)), 2)) , p_34) > p_33) ^ g_559))) == p_35) || 0x6BFFCF77), 6));
                for (l_831 = 21; (l_831 > 2); l_831 = safe_sub_func_uint16_t_u_u(l_831, 4))
                {
                    int32_t l_858 = 0x0E94A83C;
                    if (p_34)
                    {
                        uint16_t l_859 = 1U;
                        int32_t l_860 = 0x3EBE9E1A;
                        if (g_181)
                            break;
                        g_181 = (((~(g_148 <= (l_851 == (0xDBD6FB7F | ((p_33 < (((l_710 <= l_844) == (l_859 = (g_141 > (((safe_sub_func_int8_t_s_s(g_222, (l_633 = ((l_858 = (safe_lshift_func_int16_t_s_u(((safe_mod_func_uint16_t_u_u((p_34 < l_846), g_242)) | p_33), 8))) >= g_559)))) , 0xE62C) < g_148)))) || 0xE8)) | l_860))))) >= 0xA3) >= l_693);
                    }
                    else
                    {
                        int32_t l_863 = (-3);
                        g_559 = (safe_mod_func_uint16_t_u_u(l_863, l_844));
                        g_559 = (!(((l_845 = (safe_add_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_u((safe_mod_func_int8_t_s_s(g_52, (g_738 = l_708))), 2)) != ((((safe_lshift_func_uint8_t_u_s((safe_add_func_int32_t_s_s(((safe_sub_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((l_777 , ((((((g_148 = ((safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s(4U, (safe_add_func_int32_t_s_s((safe_add_func_int16_t_s_s((safe_add_func_int8_t_s_s(0x65, (((l_846 = (safe_lshift_func_int8_t_s_u(g_222, 3))) , g_30) && (safe_rshift_func_int8_t_s_s(8, 4))))), (safe_rshift_func_int8_t_s_u((l_851 > 4294967287U), 2)))), p_35)))), 6)) && (-1))) , (-7)) | p_33) < p_34) , (-7)) < p_35)), 5U)), 0x84)) ^ p_33), g_222)), 1)) | 0x9271EA49) == l_842) >= 0)), p_36))) | l_858) > g_55));
                        if (g_7)
                            break;
                        l_634 = p_33;
                    }
                }
            }
            else
            {
                uint8_t l_908 = 0xBD;
                int32_t l_909 = 0x74DA118C;
                l_909 = (l_711 || (((g_222 == l_792) != p_33) ^ (((safe_add_func_int32_t_s_s(((((safe_div_func_int8_t_s_s((safe_mod_func_int8_t_s_s(0x05, ((((((g_125 = (safe_sub_func_uint32_t_u_u((p_34 > (~(safe_lshift_func_uint16_t_u_s((l_630 & 0x5B73), 15)))), ((g_242 = (safe_sub_func_int32_t_s_s(0x5640237A, l_847))) <= l_831)))) && p_36) | 0x99) > l_908) , p_36) || g_738))), g_141)) < p_35) , g_738) , 0), g_738)) <= p_36) >= 6)));
                g_181 = (l_711 <= (0x7D31E00E && (safe_div_func_int8_t_s_s((l_843 >= (((((l_630 | (7 != (safe_sub_func_uint32_t_u_u((((safe_div_func_int32_t_s_s((safe_sub_func_int8_t_s_s((l_822 || g_141), (l_909 = ((safe_unary_minus_func_int32_t_s((~g_125))) >= (l_708 = ((p_36 > l_909) != p_36)))))), p_34)) , g_94) & g_121), g_125)))) , l_920) != g_121) & l_851) <= 0x4510)), g_93))));
                for (p_34 = 0; (p_34 <= 23); ++p_34)
                {
                    uint16_t l_925 = 65535U;
                    for (l_844 = (-22); (l_844 != (-14)); ++l_844)
                    {
                        l_925 = (0xE0 || 0x14);
                        if (g_221)
                            break;
                        l_711 = 6;
                    }
                    g_559 = l_925;
                    l_634 = p_35;
                }
                l_708 = ((safe_div_func_int8_t_s_s(0, l_708)) <= (safe_mul_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s(1U, p_33)), ((safe_rshift_func_int8_t_s_u((0x7489 < (l_909 && 0xA1)), 2)) > ((((((p_36 | ((((+l_777) | l_693) != 4294967295U) | p_33)) >= 8U) | 4294967295U) > g_181) < l_831) != g_141)))));
            }
            g_559 = p_33;
        }
        else
        {
            int32_t l_951 = 2;
            int32_t l_974 = (-5);
            int32_t l_981 = (-1);
            g_953 = ((p_34 < (safe_rshift_func_int16_t_s_u((p_35 , ((l_847 != 0xA98C) != ((((safe_rshift_func_uint16_t_u_s((safe_mod_func_uint16_t_u_u(((l_711 = (safe_add_func_uint16_t_u_u((l_708 = (((((safe_rshift_func_uint16_t_u_u((((safe_rshift_func_int8_t_s_u(((((g_30 == ((((((((l_633 = (g_221 <= 0x3B67D412)) & p_35) && (((safe_add_func_int32_t_s_s((((safe_lshift_func_int8_t_s_s(0xEB, g_559)) || 0xBFC2) >= 0x30), l_630)) ^ g_738) < 0xA1F2)) & p_33) , g_52) , 0x0FCC9BEE) , l_951) != 5)) | p_35) || 1) != p_35), 1)) < g_52) , g_242), 15)) == l_630) == l_952) | l_686) , l_951)), l_951))) & l_710), 1)), p_35)) ^ 0x6FEC) , g_93) & p_33))), l_693))) && p_33);
            l_634 = (safe_add_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(0x6F, p_33)), (safe_div_func_int8_t_s_s(((safe_mod_func_int8_t_s_s(((((g_982 = ((((safe_div_func_uint32_t_u_u((g_141 = (safe_mod_func_uint16_t_u_u(((((safe_mod_func_uint16_t_u_u(((l_951 , (safe_sub_func_uint32_t_u_u(((l_981 = (((g_148 | (safe_rshift_func_uint8_t_u_u(p_34, 4))) , (safe_lshift_func_int16_t_s_s((l_693 , (l_974 = p_34)), (safe_div_func_uint32_t_u_u(l_633, (((safe_mod_func_int8_t_s_s(((l_711 = (g_52 = ((((safe_div_func_uint32_t_u_u(p_36, g_55)) < g_738) | l_951) ^ (-7)))) == (-1)), g_55)) <= 0xCD5B) && g_94)))))) , g_94)) > 0x3AC999DF), p_33))) ^ g_121), (-9))) == g_181) <= g_148) || p_33), l_920))), l_795)) , p_36) <= g_93) >= g_221)) & p_34) <= 0U) | g_55), p_35)) & 4U), g_55))));
        }
        l_633 = ((g_982 = ((((l_711 == (g_125 & (~p_36))) , (65531U ^ ((safe_div_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_s((p_33 , ((((~0x5A21) , g_738) || g_52) == p_33)), p_35)) , 1U), g_242)) || g_738))) ^ g_93) | 0x4870)) || g_222);
    }
lbl_1009:
    l_633 = (((((safe_sub_func_int8_t_s_s((safe_mod_func_int8_t_s_s(p_36, g_221)), (((safe_lshift_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u((0x5581 < (~(g_181 = (g_559 = (l_920 <= ((safe_mod_func_int32_t_s_s((-1), (-6))) != ((g_52 != (safe_mod_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(p_35, (safe_lshift_func_int16_t_s_u((g_125 || 0x91), 0)))), l_1008))) <= g_221))))))), l_1008)), p_35)), 6)) || l_847) > 0U))) && (-1)) | g_7) || 4U) & p_35);
    g_559 = g_241;
    return p_33;
}
inline static int8_t func_44(uint16_t p_45, uint8_t p_46, uint8_t p_47, uint16_t p_48)
{
    int32_t l_60 = 0x2C6F7398;
    int32_t l_603 = (-1);
    int16_t l_613 = (-7);
    int32_t l_614 = 0x2A6AC009;
    int32_t l_615 = 0;
    int32_t l_625 = 7;
    for (p_46 = 8; (p_46 != 37); p_46 = safe_add_func_int16_t_s_s(p_46, 1))
    {
        g_52 = p_47;
        for (p_47 = 24; (p_47 >= 28); p_47 = safe_add_func_uint32_t_u_u(p_47, 7))
        {
            g_55 = g_7;
        }
    }
    if (g_7)
        goto lbl_604;
lbl_604:
    l_603 = ((safe_lshift_func_int8_t_s_u(l_60, g_7)) < (g_7 > func_61(l_60, ((-1) > 0x9BA5493A), p_47)));
    l_615 = ((((g_222 >= (g_221 || l_60)) & (((safe_mod_func_uint32_t_u_u(((l_614 = (l_603 = (g_559 = (((safe_mod_func_int16_t_s_s(l_60, (((safe_div_func_int16_t_s_s((safe_div_func_int8_t_s_s(((l_603 == ((p_48 || (g_30 == (g_121 <= ((5U || 0xAC) ^ p_46)))) & l_613)) && p_48), g_242)), p_46)) != g_52) | l_603))) ^ g_242) && p_46)))) <= p_45), g_125)) > p_46) == l_613)) , 0xB2) , l_60);
    g_559 = ((g_222 ^ ((l_614 = (safe_div_func_uint32_t_u_u((((((l_603 , (((g_181 | g_55) && ((((g_121 < (safe_rshift_func_uint8_t_u_u((((0x1C != 0x27) == (!((safe_add_func_uint32_t_u_u(0x7E2C7542, 4294967295U)) & g_241))) ^ l_615), l_615))) > l_613) , p_45) == p_46)) & l_613)) | 0x71) | g_148) < p_48) , l_625), 0x2BA1DA51))) & g_222)) , g_221);
    return g_181;
}
inline static uint16_t func_61(uint16_t p_62, uint8_t p_63, uint8_t p_64)
{
    uint32_t l_79 = 0x1AB70486;
    int32_t l_80 = 0;
    uint32_t l_81 = 0x6C79A83A;
    int32_t l_88 = 0x1000BAF3;
    int8_t l_89 = (-2);
    uint8_t l_594 = 251U;
    uint32_t l_602 = 0x7291F4E6;
    g_559 = (func_65((l_88 = (((-1) <= ((safe_sub_func_uint8_t_u_u(p_62, (l_80 = ((safe_rshift_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(((safe_rshift_func_uint8_t_u_s((p_64 ^ ((l_79 = p_63) & l_80)), 0)) <= l_81), (safe_add_func_uint32_t_u_u((safe_sub_func_int16_t_s_s(0, (safe_sub_func_int16_t_s_s((l_81 & p_64), p_64)))), g_7)))), g_52)) | l_80)))) | g_55)) , 1)), g_52, l_81, l_89, l_81) < g_30);
    for (l_88 = (-18); (l_88 > (-11)); l_88++)
    {
        l_80 = g_55;
    }
    for (g_94 = 0; (g_94 >= 34); g_94++)
    {
        uint32_t l_564 = 0x01AF9A5E;
        int32_t l_593 = 0;
        l_564 = p_64;
        l_80 = ((((+(g_148 | (safe_add_func_uint16_t_u_u(0U, ((-9) != (p_62 = (safe_sub_func_int8_t_s_s((l_81 > ((g_148 | (((safe_lshift_func_uint8_t_u_s(g_94, ((((l_88 = (safe_rshift_func_int16_t_s_s(((0x38741EED | ((safe_rshift_func_uint8_t_u_u(((safe_div_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((p_63 , l_564), 0xF85484A3)), 0x599E)) , 0x5C), l_81)) != p_63)) , g_55), g_55))) ^ 0xA5A67771) , 0x4A) ^ g_242))) , g_559) < p_64)) == l_564)), l_564)))))))) & 0x1233) <= p_63) < l_79);
        for (l_88 = 0; (l_88 == 11); ++l_88)
        {
            uint16_t l_588 = 65535U;
            g_181 = ((1U == (safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((((((((g_242 = g_559) | l_81) < (((l_588 = l_564) >= ((p_62 , p_63) , l_564)) < ((g_141 <= (safe_sub_func_int8_t_s_s((safe_add_func_int16_t_s_s(((((l_593 = (((p_63 < g_148) <= g_148) , p_64)) , 1U) || 4294967295U) ^ g_148), l_594)), g_241))) > g_30))) == p_64) ^ 0x7756) & 255U) , p_63), l_564)), g_148))) && (-5));
        }
    }
    l_80 = ((((((p_63 , ((0x5B0B != 9U) , (((g_55 & (g_181 != ((l_88 = ((((~((1 > (g_141 = (((safe_rshift_func_uint8_t_u_s((g_222 == (p_63 ^ ((safe_add_func_uint16_t_u_u(((safe_div_func_uint8_t_u_u(p_63, 0x72)) & 255U), l_89)) && (-1)))), g_222)) == g_222) && p_62))) < g_148)) || p_64) != g_181) ^ g_125)) & p_62))) != 0U) != l_602))) == p_64) && 0xBC974CA1) , g_242) | 0x68) >= g_241);
    return l_88;
}
inline static int16_t func_65(int8_t p_66, uint32_t p_67, int32_t p_68, int8_t p_69, uint32_t p_70)
{
    uint32_t l_92 = 0x84C7B934;
    int32_t l_108 = 0x516A45A2;
    int32_t l_123 = (-1);
    uint16_t l_191 = 65535U;
    uint8_t l_201 = 7U;
    uint32_t l_441 = 0xE3FEF301;
    int32_t l_532 = 7;
    int32_t l_557 = (-9);
    int32_t l_558 = 0xCEB77BD8;
    for (p_70 = 0; (p_70 >= 34); p_70++)
    {
        uint16_t l_97 = 0x6FFB;
        int32_t l_124 = 0;
        int32_t l_180 = 1;
        int8_t l_198 = 0xF1;
        int16_t l_216 = (-1);
        int8_t l_257 = 0xCF;
        int32_t l_271 = 7;
        uint16_t l_340 = 0U;
        uint32_t l_439 = 9U;
        g_94 = (l_92 , (g_93 = p_70));
        if (p_68)
        {
            if (p_70)
                break;
            for (p_69 = 0; (p_69 > 0); p_69 = safe_add_func_uint16_t_u_u(p_69, 2))
            {
                l_97 = 0xB00F6109;
            }
            return g_94;
        }
        else
        {
            int32_t l_107 = 0xE2EE0BD2;
            int32_t l_122 = 0xB7EAB328;
            int32_t l_126 = 0xE41AB876;
            uint8_t l_272 = 0xEB;
            int32_t l_288 = 0x1826830D;
            int32_t l_440 = 0;
            if (l_97)
                break;
            if ((safe_mul_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((safe_unary_minus_func_uint32_t_u((l_126 = ((g_125 = (safe_sub_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(((((l_108 = l_107) & l_92) & (((safe_add_func_int32_t_s_s((((safe_rshift_func_int8_t_s_s((safe_unary_minus_func_int32_t_s(g_94)), ((safe_add_func_int16_t_s_s((safe_add_func_int32_t_s_s(((l_124 = ((safe_add_func_int32_t_s_s(p_69, (((l_123 = ((g_93 = l_92) & (((l_122 = (((255U >= l_107) == (safe_unary_minus_func_int16_t_s(g_121))) , p_69)) && l_92) , g_7))) != p_67) && p_66))) || g_52)) || g_94), l_97)), p_66)) , l_122))) <= 0x58A71D4F) == g_30), 0U)) < 0x833D) >= l_107)) || (-1)), 0x55AEF273)), g_121))) | 0xE114)))), 6)), 0U)))
            {
                uint8_t l_143 = 0U;
                int32_t l_182 = 2;
                int16_t l_215 = (-3);
                uint32_t l_240 = 0U;
                int16_t l_275 = 0xA849;
                int32_t l_442 = (-10);
                for (g_94 = (-18); (g_94 < 57); ++g_94)
                {
                    uint32_t l_142 = 4294967295U;
                    int32_t l_144 = (-1);
                    l_144 = ((safe_sub_func_int32_t_s_s(g_30, 0xA016E985)) | (safe_div_func_uint16_t_u_u(p_69, (safe_lshift_func_int8_t_s_s((0x25D0D300 || ((p_66 = (safe_mod_func_uint8_t_u_u((g_93 = (safe_mod_func_uint16_t_u_u(((-1) & ((((safe_div_func_uint32_t_u_u((l_92 == ((l_123 = (((8 & ((((g_141 = (p_68 < p_68)) , g_52) && 254U) , l_142)) > l_143) < 0x8982)) || g_93)), g_121)) && p_68) != p_70) , p_67)), l_142))), l_143))) || 4U)), l_143)))));
                    return l_143;
                }
                if ((safe_div_func_uint32_t_u_u((+(g_148 = 0x08A6)), (l_123 && l_143))))
                {
                    int32_t l_179 = 0;
                    int32_t l_210 = 1;
                    g_181 = (l_180 = (((((((safe_mod_func_uint8_t_u_u(252U, (l_123 = (p_69 = (safe_lshift_func_uint8_t_u_u(((safe_div_func_int8_t_s_s(((safe_sub_func_uint8_t_u_u(((safe_mod_func_int8_t_s_s((p_66 = l_143), p_69)) > (safe_div_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(((((p_69 && (safe_sub_func_uint16_t_u_u(l_123, 0xDD64))) , (safe_mod_func_int16_t_s_s(((safe_rshift_func_int16_t_s_s(((((((safe_mod_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u((safe_mod_func_int8_t_s_s(g_121, (safe_lshift_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_u((((((p_67 != l_179) < g_93) | p_70) >= g_30) , 1U), 6)) , g_148), 11)))), 7)), p_68)) && p_70) ^ (-1)) , p_69) & l_179) ^ 0x3A), 11)) , l_124), 0x00AB))) ^ l_179) != l_179), 10)), p_68))), 254U)) >= g_52), g_93)) ^ 0x7B65), p_69)))))) == l_126) == g_125) | l_122) < l_107) || l_124) && p_66));
                    l_182 = g_141;
                    if ((((safe_lshift_func_uint8_t_u_u((p_70 , (((((((safe_rshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_s((0x15 && (-9)), (g_52 , ((((g_181 = l_182) , p_68) != (safe_rshift_func_int16_t_s_u(l_191, 9))) >= 0x49)))), (safe_add_func_uint16_t_u_u(((-10) < p_66), 0U)))) && g_181) | g_94) , (-1)) != l_182) <= p_68) || p_66)), p_69)) > 1U) | g_7))
                    {
                        uint32_t l_202 = 4294967288U;
                        g_181 = (safe_rshift_func_uint16_t_u_s((l_202 = ((g_125 = (l_179 > ((safe_sub_func_uint8_t_u_u(255U, (g_52 & l_198))) != ((safe_sub_func_int32_t_s_s(p_69, ((1U <= ((p_69 == (g_52 || l_201)) >= g_93)) , 4U))) , g_141)))) != g_52)), p_68));
                        g_181 = (p_67 < ((((l_202 && p_69) , (+(safe_lshift_func_uint16_t_u_u((l_179 < (((g_125 = (((safe_sub_func_int32_t_s_s(l_143, g_121)) == p_70) >= (l_123 = (l_210 = g_125)))) || ((safe_rshift_func_uint16_t_u_u(l_123, p_68)) | p_68)) == g_93)), 9)))) > p_66) <= 0));
                        return g_55;
                    }
                    else
                    {
                        l_108 = g_141;
                        g_181 = 0xB211735A;
                    }
                    g_242 = (((safe_rshift_func_uint16_t_u_s(((l_215 & g_93) , l_216), ((safe_add_func_int32_t_s_s((g_241 = (g_181 = (l_126 , ((g_52 , (safe_rshift_func_uint16_t_u_s((g_222 = g_221), 10))) || (((((p_66 = (safe_div_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((!(safe_rshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_s((((safe_mod_func_int8_t_s_s((safe_div_func_int8_t_s_s(g_52, (safe_rshift_func_int16_t_s_u(((l_143 | (((((safe_lshift_func_int16_t_s_u((g_30 , 0xBBBD), 8)) > l_123) >= g_121) > 0x7507154B) > l_108)) | 0x7F36C1BE), 3)))), l_240)) > l_122) & 0x8F3440FC), p_70)), g_93))), l_123)), p_69))) ^ g_222) <= g_222) & p_67) ^ 1))))), 0xD05F5F8C)) ^ 0xF2C49042))) , 0x2485) == p_69);
                }
                else
                {
                    uint16_t l_270 = 1U;
                    int32_t l_326 = 0x4C4EFF3E;
                    l_122 = (safe_div_func_int8_t_s_s(((((safe_div_func_int16_t_s_s(((((-1) > (l_180 = ((((safe_div_func_uint8_t_u_u((l_123 = g_55), ((l_124 = (p_70 >= ((safe_mod_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(g_181, 4)), ((((((safe_lshift_func_int8_t_s_s(((p_69 ^ l_257) && (safe_lshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((((p_68 = (((((((((safe_mod_func_int32_t_s_s(((0xED && (safe_mod_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((g_30 | (safe_add_func_uint32_t_u_u((0 >= 255U), p_69))), 7)), g_52))) >= l_270), p_69)) >= 255U) < g_141) < 1) | (-10)) != p_70) && l_215) > g_241) > l_216)) , p_68) || 0x05), 14)), 7))), l_126)) <= (-5)) & 0x484F157A) != p_70) & 2) && 0x8985A425))) | 0x137A))) ^ g_181))) != g_242) | 0x01) < p_66))) || g_141) ^ 246U), l_271)) > p_69) , (-1)) | l_272), p_70));
                    if (p_69)
                    {
                        l_180 = (0xD3 || (safe_rshift_func_uint16_t_u_s((l_275 && (((((g_222 = ((((safe_mod_func_int8_t_s_s(((((((safe_rshift_func_uint16_t_u_u(((safe_sub_func_int32_t_s_s(g_55, (p_67 >= (((safe_sub_func_int8_t_s_s(0x36, (g_93 = 0U))) | (safe_rshift_func_uint16_t_u_s((l_270 <= g_125), (safe_rshift_func_int8_t_s_s(((0xB3D72312 & l_270) >= g_141), p_69))))) == p_66)))) || p_67), g_242)) & p_70) <= p_66) , 0) > p_69) | g_148), p_68)) , 255U) || l_288) < 0x17DD)) == p_70) , p_66) <= 1U) , g_125)), g_242)));
                    }
                    else
                    {
                        uint32_t l_291 = 4294967288U;
                        g_181 = ((((((safe_lshift_func_int8_t_s_u((l_291 >= l_201), (((safe_lshift_func_int16_t_s_u((safe_add_func_uint8_t_u_u((1U & l_270), ((safe_sub_func_uint32_t_u_u(((safe_mod_func_int16_t_s_s((safe_div_func_int32_t_s_s(((safe_lshift_func_int8_t_s_u((l_108 = (((safe_add_func_uint16_t_u_u(((safe_add_func_uint8_t_u_u((0xE46704D3 <= (g_55 ^ (safe_rshift_func_uint16_t_u_u(l_291, 4)))), ((((safe_sub_func_int32_t_s_s(((safe_sub_func_int32_t_s_s((l_240 & (safe_add_func_uint8_t_u_u(((safe_sub_func_int16_t_s_s(p_69, g_141)) >= l_275), g_55))), l_215)) >= g_121), l_270)) & l_108) != p_70) > g_181))) ^ 65535U), (-6))) | g_221) ^ 4294967295U)), 1)) , 0xB368D36D), p_66)), 0x0239)) || 9), l_198)) , 4))), l_270)) < 0x5C11) , p_69))) ^ l_270) , p_70) || 0) ^ 3) && 0x93D7C05E);
                        if (p_66)
                            break;
                    }
                    if (((((safe_add_func_uint16_t_u_u((safe_div_func_uint32_t_u_u(((g_125 , ((((safe_sub_func_uint8_t_u_u(0U, (safe_sub_func_int16_t_s_s((l_326 = 5), ((p_69 = (-3)) == (safe_div_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(p_66, ((safe_lshift_func_int16_t_s_s(((safe_sub_func_uint32_t_u_u((safe_mod_func_int16_t_s_s(((!(((0x3345A6AC ^ l_270) , ((g_181 >= (safe_sub_func_int16_t_s_s((0U | g_93), 0))) , l_340)) , 0xF4E1)) & l_270), l_270)), p_66)) , g_7), p_68)) != 0x3AB3DB0E))), 0x0A))))))) == g_30) > g_222) >= 0xF1)) & l_126), p_66)), l_126)) || 4294967292U) , p_66) , l_326))
                    {
                        g_181 = p_66;
                        return l_270;
                    }
                    else
                    {
                        uint16_t l_357 = 0x783C;
                        int8_t l_370 = 0;
                        p_68 = l_198;
                        g_181 = l_108;
                        g_181 = (safe_lshift_func_int16_t_s_s(((l_180 = (safe_div_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(((safe_sub_func_int32_t_s_s((((safe_mod_func_int8_t_s_s(((p_69 , (safe_sub_func_int32_t_s_s((safe_rshift_func_int16_t_s_s(((p_68 = g_93) <= ((safe_add_func_int8_t_s_s(l_357, (((g_52 = l_215) && (safe_add_func_int32_t_s_s(g_181, ((((l_122 == ((safe_sub_func_int8_t_s_s(((((safe_lshift_func_int16_t_s_s((((0x335D || (l_370 = (safe_sub_func_int32_t_s_s((safe_mod_func_int16_t_s_s(((p_67 <= (safe_div_func_uint16_t_u_u(p_69, l_288))) != 0x52B0), l_357)), l_191)))) && p_66) || g_221), g_148)) > 0x08C0) > l_357) < l_240), g_241)) <= 0xD4180671)) , p_67) , g_125) < 4294967295U)))) | l_288))) >= g_221)), 1)), 0xAF9E53DD))) ^ p_70), 1)) & 250U) ^ l_198), g_93)) && l_108), l_182)), p_66))) > g_148), l_123));
                        p_68 = (((g_52 = p_69) < ((p_67 <= (safe_add_func_int16_t_s_s((((l_108 != (((((~(l_201 , (((safe_div_func_uint32_t_u_u(((safe_unary_minus_func_int32_t_s((-1))) != (safe_lshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_s((g_241 = ((safe_lshift_func_int16_t_s_u(g_7, p_70)) == (-1))), l_357)), 4))), 0x572A64BF)) , g_222) >= 1U))) , 0x14E5) , 0) < l_270) == 0U)) == p_69) | 0x1628), p_70))) > 0x64)) == 1U);
                    }
                    l_122 = (~((((0x15CC == (p_69 ^ 0x37043CBF)) == (safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(((((safe_unary_minus_func_uint8_t_u((safe_rshift_func_uint16_t_u_s((safe_mod_func_int8_t_s_s(((((((p_67 == (safe_sub_func_uint32_t_u_u((65534U >= (+(((((safe_sub_func_uint8_t_u_u((g_93 = (safe_mod_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((safe_div_func_int32_t_s_s((0xBD >= (g_125 = (safe_div_func_uint32_t_u_u((g_52 <= (((~(((((l_122 <= (l_326 = (safe_add_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u(g_148, g_181)), 0x5B)))) <= 0U) > p_68) || 0) > p_66)) || 0U) < l_216)), g_125)))), g_7)), g_222)), g_93))), 0xE4)) >= p_68) || l_270) < g_55) , p_70))), p_67))) & 0x02E03701) | 4294967295U) > l_97) <= l_124) & l_272), (-4))), l_275)))) >= (-4)) <= p_66) | l_92), 10)), 2))) == l_270) > l_270));
                }
                if ((g_94 < (l_123 = ((safe_mod_func_int32_t_s_s((safe_add_func_int32_t_s_s((safe_sub_func_uint32_t_u_u((safe_div_func_uint8_t_u_u(((1U == ((-1) >= (safe_lshift_func_uint16_t_u_s((p_67 ^ (l_123 & ((((safe_sub_func_uint16_t_u_u((((l_442 = ((l_108 = ((l_182 = 0x72) , ((((safe_sub_func_uint16_t_u_u(((l_182 = ((safe_mod_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(((((safe_lshift_func_uint16_t_u_s(((safe_lshift_func_int8_t_s_u((safe_div_func_uint16_t_u_u(((l_288 = ((safe_rshift_func_uint8_t_u_s(l_288, 6)) > p_69)) < ((safe_rshift_func_int16_t_s_u((p_69 != 0x99), l_271)) == 0x59)), p_70)), g_181)) <= 0x36B8), 9)) <= 0x083E5D9B) || p_69) <= p_70), l_439)), l_440)) ^ p_70)) && l_441), l_201)) , 0x1CBA) > p_70) , g_222))) & l_97)) , g_55) ^ g_241), 0x5E4E)) , g_222) || (-8)) == p_70))), 3)))) > 65532U), g_221)), g_241)), 0)), g_94)) ^ g_181))))
                {
                    uint16_t l_480 = 1U;
                    int32_t l_485 = 0xCC1155B4;
                    uint8_t l_518 = 0x6A;
                    if ((safe_add_func_int16_t_s_s((((!((safe_sub_func_int32_t_s_s((safe_div_func_uint16_t_u_u(1U, (p_70 , ((safe_unary_minus_func_int8_t_s((safe_add_func_uint16_t_u_u(((safe_add_func_int8_t_s_s((safe_unary_minus_func_int32_t_s(((safe_lshift_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(((l_182 = 0U) | ((((255U ^ 0xD9) && l_107) != (safe_lshift_func_uint16_t_u_u((g_241 = ((-1) ^ (safe_add_func_int16_t_s_s(((safe_lshift_func_int8_t_s_s(l_124, (g_52 = (p_66 = (l_126 = g_93))))) != 0xD2AF), g_7)))), 7))) ^ g_148)), p_70)), p_67)) & g_55))), p_68)) < g_55), g_141)))) | p_70)))), l_271)) & p_68)) ^ 0x8F80) , 1), p_67)))
                    {
                        uint16_t l_486 = 0x9EA5;
                        int32_t l_519 = 0x55D4B49C;
                        int32_t l_520 = (-7);
                        l_486 = (safe_div_func_int16_t_s_s(((((safe_sub_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_u(g_121, (safe_mod_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_s((safe_div_func_int32_t_s_s((p_66 >= (((-10) > ((((0x53CB167C || l_480) > g_93) || (((l_485 = (safe_mod_func_uint8_t_u_u((~((l_107 != ((g_221 >= ((safe_unary_minus_func_int8_t_s((l_288 = 0x57))) ^ l_182)) , g_241)) != p_70)), p_68))) , p_69) > 0xB0FB)) || g_55)) && 0U)), g_30)), 4)) , 0x90), p_67)))) | 2U), 0xA1)) , l_288) , (-8)) & 0xCBA9), 5U));
                        l_182 = (safe_add_func_uint32_t_u_u((((safe_lshift_func_uint16_t_u_s((l_108 = ((+((safe_sub_func_int16_t_s_s(p_68, p_70)) & 4U)) ^ ((safe_add_func_uint8_t_u_u((p_66 == (safe_mod_func_int8_t_s_s((((((l_126 | (((0U > l_201) ^ ((g_222 ^ 0U) >= l_441)) < 0U)) , g_141) >= 0U) , (-10)) & p_68), p_67))), 0x07)) , (-1)))), 3)) > l_485) , 4294967287U), 4294967295U));
                        l_520 = ((l_519 = (((p_68 = (l_480 ^ (safe_lshift_func_int8_t_s_s(((safe_div_func_int16_t_s_s((safe_sub_func_int8_t_s_s(((g_52 = (safe_add_func_uint32_t_u_u(4294967294U, (((safe_lshift_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_u(((((safe_add_func_uint16_t_u_u((l_126 = g_121), ((l_92 == g_94) , (g_242 = l_486)))) & l_272) != (safe_sub_func_uint32_t_u_u((safe_sub_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((l_288 = (((g_94 == (l_201 || l_92)) >= p_70) > l_518)), 14)), l_108)), l_107))) && p_68), l_97)) == g_125), 7)) > p_68) <= p_70)))) && 254U), l_486)), g_241)) != g_30), g_221)))) <= g_241) & 0x7A)) | l_191);
                        if (p_68)
                            continue;
                    }
                    else
                    {
                        p_68 = (((safe_rshift_func_int16_t_s_s((safe_unary_minus_func_uint16_t_u((safe_div_func_int32_t_s_s((safe_lshift_func_int8_t_s_u((safe_add_func_uint16_t_u_u((((l_108 = g_241) & 65535U) && 0xA7853665), g_181)), ((p_68 < ((l_180 = (l_532 , ((((l_480 | ((safe_div_func_int32_t_s_s(g_94, ((-6) && p_70))) == 9U)) != l_143) != p_69) , p_68))) <= l_122)) != p_69))), 4294967286U)))), 11)) && 3U) > g_242);
                        if (l_257)
                            goto lbl_538;
                    }
                }
                else
                {
                    p_68 = (safe_add_func_uint16_t_u_u(p_69, l_440));
                    g_181 = (-5);
                }
            }
            else
            {
                return p_66;
            }
        }
    }
lbl_538:
    p_68 = (safe_unary_minus_func_uint8_t_u(g_241));
    p_68 = (g_181 = ((safe_lshift_func_int16_t_s_u((l_558 = ((safe_rshift_func_uint8_t_u_u((((((l_191 < (l_108 = (l_191 || (safe_rshift_func_int16_t_s_u(0, 8))))) ^ (((((g_55 = p_70) , (l_557 = (safe_mod_func_uint8_t_u_u(((((safe_rshift_func_uint8_t_u_u(7U, 2)) & l_191) < (((0x18BF8B18 | (((safe_add_func_int16_t_s_s((((safe_rshift_func_int16_t_s_u(((((l_123 = (l_532 , ((((-5) ^ 3) | 0x09) >= p_67))) || g_222) > l_191) && 0), l_191)) >= g_94) <= 65535U), 5)) ^ p_66) ^ l_532)) >= 0xBD62752A) != l_191)) | l_92), l_201)))) , 0x34) & l_191) <= 0)) <= l_191) > p_68) || 0x6E18), 7)) , 0x05D6)), 15)) > 0xB963));
    return g_221;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_7;
    csmith_sink_ = g_30;
    csmith_sink_ = g_52;
    csmith_sink_ = g_55;
    csmith_sink_ = g_93;
    csmith_sink_ = g_94;
    csmith_sink_ = g_121;
    csmith_sink_ = g_125;
    csmith_sink_ = g_141;
    csmith_sink_ = g_148;
    csmith_sink_ = g_181;
    csmith_sink_ = g_221;
    csmith_sink_ = g_222;
    csmith_sink_ = g_241;
    csmith_sink_ = g_242;
    csmith_sink_ = g_559;
    csmith_sink_ = g_738;
    csmith_sink_ = g_953;
    csmith_sink_ = g_982;
    csmith_sink_ = g_1073;
    csmith_sink_ = g_1081;
    platform_main_end(0,0);
    return 0;
}
