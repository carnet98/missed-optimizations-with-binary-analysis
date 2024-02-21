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
extern char *strchrnul (const char *__s, int __c)
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
extern char *strcasestr (const char *__haystack, const char *__needle)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern void *memmem (const void *__haystack, size_t __haystacklen,
       const void *__needle, size_t __needlelen)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 3)))
                                         ;
extern void *__mempcpy (void *__restrict __dest,
   const void *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern void *mempcpy (void *__restrict __dest,
        const void *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
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
extern size_t strlcpy (char *__restrict __dest,
         const char *__restrict __src, size_t __n)
  __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2))) ;
extern size_t strlcat (char *__restrict __dest,
         const char *__restrict __src, size_t __n)
  __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2))) ;
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
typedef __ssize_t cookie_read_function_t (void *__cookie, char *__buf,
                                          size_t __nbytes);
typedef __ssize_t cookie_write_function_t (void *__cookie, const char *__buf,
                                           size_t __nbytes);
typedef int cookie_seek_function_t (void *__cookie, __off64_t *__pos, int __w);
typedef int cookie_close_function_t (void *__cookie);
typedef struct _IO_cookie_io_functions_t
{
  cookie_read_function_t *read;
  cookie_write_function_t *write;
  cookie_seek_function_t *seek;
  cookie_close_function_t *close;
} cookie_io_functions_t;
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
extern int fclose (FILE *__stream) __attribute__ ((__nonnull__ (1)));
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
        FILE *__restrict __stream) __attribute__ ((__nonnull__ (3)));
extern FILE *fdopen (int __fd, const char *__modes) __attribute__ ((__nothrow__ ))
  __attribute__ ((__malloc__)) ;
extern FILE *fopencookie (void *__restrict __magic_cookie,
     const char *__restrict __modes,
     cookie_io_functions_t __io_funcs) __attribute__ ((__nothrow__ ))
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
extern int vasprintf (char **__restrict __ptr, const char *__restrict __f,
        __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 0))) ;
extern int __asprintf (char **__restrict __ptr,
         const char *__restrict __fmt, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 3))) ;
extern int asprintf (char **__restrict __ptr,
       const char *__restrict __fmt, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 3))) ;
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
extern void perror (const char *__s) __attribute__ ((__cold__));
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
float fabsf(float);
double fabs(double);
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
static long __undefined;
static int32_t g_2 = 0x1824A8C6;
static int16_t g_29 = 0x0168;
static uint8_t g_30 = 0x55;
static uint8_t g_37 = 0U;
static uint32_t g_43 = 0xB6BA00B6;
static uint32_t g_90 = 4294967291U;
static int32_t g_93 = 2;
static int32_t g_96 = 0xD8A5C089;
static int8_t g_166 = 0;
static uint32_t g_168 = 4294967295U;
static uint32_t g_171 = 0x926FAA81;
static int8_t g_174 = 0xCA;
static int8_t g_175 = 1;
static uint32_t g_180 = 0U;
static int8_t g_184 = 0;
static int32_t g_185 = 8;
static int8_t g_187 = (-2);
static int8_t g_188 = 0x3A;
static int16_t g_236 = (-4);
static uint8_t g_248 = 252U;
static uint16_t g_259 = 1U;
static int32_t g_273 = 0x8DA62DAB;
static int32_t g_274 = 0xCF02AD15;
static int16_t g_275 = 0xE09C;
static uint32_t g_281 = 0xC8013064;
static int32_t g_316 = (-1);
static uint32_t g_338 = 1U;
static int32_t g_351 = 0x89D8E522;
static uint32_t g_352 = 0x80E2AD8F;
static int8_t g_364 = 1;
static uint32_t g_365 = 0x193FF477;
static int32_t g_439 = 0x2DFB8CD4;
static uint8_t g_440 = 0xD3;
static uint8_t g_494 = 1U;
static int8_t g_593 = 0x8C;
static uint32_t g_595 = 0x55B21C62;
static int32_t g_661 = (-4);
static uint8_t g_663 = 0xE3;
static uint32_t g_686 = 0x03A05312;
static int16_t g_820 = 0xFA79;
static uint8_t g_830 = 1U;
static int16_t g_1014 = 9;
static int32_t g_1054 = 0x0BCB88AB;
static int16_t func_1(void);
static uint32_t func_16(uint16_t p_17, int32_t p_18, uint16_t p_19);
static uint8_t func_22(const uint32_t p_23, const int32_t p_24, uint32_t p_25, uint8_t p_26, uint8_t p_27);
static const uint16_t func_59(uint16_t p_60, uint32_t p_61);
static uint8_t func_103(int32_t p_104, uint16_t p_105, const uint16_t p_106, int32_t p_107);
static int16_t func_109(const uint8_t p_110, int16_t p_111, const uint32_t p_112, int16_t p_113);
static int8_t func_135(int8_t p_136);
static uint32_t func_144(int32_t p_145, int32_t p_146, const int32_t p_147);
static uint32_t func_201(uint32_t p_202, int32_t p_203, const int32_t p_204, uint32_t p_205);
static int32_t func_207(uint8_t p_208, const int32_t p_209);
static int16_t func_1(void)
{
    const int8_t l_33 = (-7);
    int32_t l_1153 = 0x815CAE4B;
    int8_t l_1168 = 9;
    for (g_2 = 0; (g_2 <= 11); g_2 = safe_add_func_int16_t_s_s(g_2, 1))
    {
        uint8_t l_15 = 5U;
        int32_t l_28 = 0x6B6CD333;
        int32_t l_1164 = (-6);
        uint8_t l_1173 = 0x32;
        l_28 = (safe_div_func_int32_t_s_s(((safe_lshift_func_int32_t_s_s((safe_mod_func_int8_t_s_s(((safe_div_func_uint8_t_u_u((0xEE <= g_2), g_2)) < 0xB61D), (safe_sub_func_int16_t_s_s(((l_15 <= 6) | (l_1153 = func_16((safe_mod_func_int8_t_s_s(0xC1, func_22((--g_30), l_33, l_15, g_29, g_2))), l_28, l_33))), 0xBB77)))), 2)) && g_180), 0xBF52A11F));
        g_274 = (((((safe_rshift_func_uint8_t_u_u(((l_28 &= ((safe_mod_func_uint8_t_u_u((!((((safe_sub_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((l_15 < g_281), (safe_unary_minus_func_int16_t_s(((g_316 = 0xF20E9CB7) ^ ((l_1164 && (((!(safe_add_func_uint32_t_u_u((l_1168 && ((safe_add_func_uint32_t_u_u(g_830, g_595)) <= ((safe_lshift_func_int8_t_s_s(l_1153, 7)) <= g_185))), g_184))) <= l_15) && g_365)) & g_661)))))), 0xBC70)) || 0xCD30) != l_33) && l_1164)), g_595)) < 0x202A2F3C)) == l_1173), 0)) == g_440) ^ l_15) || l_28) <= 0xAD);
    }
    g_316 = 0x8C88BAF1;
    return l_33;
}
static uint32_t func_16(uint16_t p_17, int32_t p_18, uint16_t p_19)
{
    uint8_t l_42 = 0x3C;
    int32_t l_936 = 0xF97976AD;
    int32_t l_983 = (-1);
    int16_t l_1027 = (-1);
    uint32_t l_1055 = 1U;
    const uint16_t l_1086 = 0xAD55;
    int16_t l_1152 = 0x337F;
    g_43 = (safe_add_func_int16_t_s_s(l_42, l_42));
    for (g_43 = 0; (g_43 >= 19); g_43++)
    {
        uint16_t l_62 = 0x71C2;
        uint32_t l_859 = 0x3C136092;
        int32_t l_860 = (-10);
        uint16_t l_861 = 3U;
        l_860 = (((0x55A24B83 != (safe_mod_func_uint32_t_u_u(4294967295U, (safe_mod_func_uint16_t_u_u(((p_19 != ((g_187 = (safe_add_func_uint16_t_u_u(p_18, (+(safe_add_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_u(func_59(l_62, g_2), (0 > (l_62 ^ l_859)))) || 0x92586E07), 7)), 2U)))))) == l_42)) == p_17), 0xC4B5))))) != p_17) & p_17);
        l_861 = 3;
    }
    for (g_275 = 17; (g_275 <= (-26)); g_275--)
    {
        uint32_t l_900 = 0x46150AF1;
        int32_t l_907 = 0;
        int32_t l_934 = 0xA44BDE8E;
        int32_t l_938 = 0x0CF0C988;
        for (g_593 = 4; (g_593 == (-26)); g_593--)
        {
            int16_t l_881 = (-2);
            int32_t l_984 = 0;
            int16_t l_1047 = 1;
            int32_t l_1123 = 0;
            int32_t l_1139 = 0x4AA29D12;
            for (g_830 = 20; (g_830 == 48); g_830 = safe_add_func_int16_t_s_s(g_830, 4))
            {
                int8_t l_872 = (-1);
                int32_t l_880 = (-1);
                int32_t l_908 = (-2);
                uint16_t l_1089 = 2U;
                if ((((safe_lshift_func_int16_t_s_u((safe_sub_func_uint32_t_u_u((l_872 <= (g_440 = ((safe_unary_minus_func_uint8_t_u(l_872)) ^ (g_259 = g_273)))), (safe_unary_minus_func_int8_t_s(((l_872 <= 2) > (safe_mod_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((((g_37 ^ ((l_881 = ((+p_19) && (l_880 ^= g_187))) & 0x99)) != 0xDA7C) | 2), 1U)), p_19))))))), 4)) ^ g_316) ^ g_93))
                {
                    uint8_t l_909 = 0xFF;
                    if (((safe_div_func_int16_t_s_s((g_236 = ((safe_add_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint32_t_u_u(((safe_div_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(((safe_rshift_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_s(g_175, 4)) == ((l_881 || ((7 == ((g_274 ^= ((4294967291U >= (safe_unary_minus_func_int16_t_s(((safe_unary_minus_func_uint32_t_u(((l_900 = (-1)) != l_42))) >= ((safe_mod_func_int16_t_s_s((0x7C >= (safe_div_func_uint16_t_u_u(((safe_mod_func_uint16_t_u_u(((l_42 & ((g_166 = (p_19 < l_907)) || 0U)) <= l_42), g_29)) ^ g_281), g_830))), 65535U)) <= p_17))))) || g_168)) && 1U)) & g_236)) == l_881)), 1)) ^ 0x19C6CB38), 5)), p_18)) > g_175), 17)), g_820)), 0xCF)) != p_18)), l_42)) != p_17))
                    {
                        return g_820;
                    }
                    else
                    {
                        ++l_909;
                        return p_17;
                    }
                }
                else
                {
                    int16_t l_935 = (-1);
                    int32_t l_937 = 1;
                    g_439 = l_881;
                    if ((safe_lshift_func_uint16_t_u_s(((!l_907) < (safe_add_func_int32_t_s_s((g_439 ^= (l_936 = (safe_mod_func_int8_t_s_s((((!(~((~(safe_lshift_func_int8_t_s_s((g_188 = (l_880 ^= (safe_sub_func_int8_t_s_s(((l_900 && (l_935 = (1 < (l_934 = (p_19 ^ (((((g_281 = p_18) > ((((safe_mod_func_int16_t_s_s(((safe_add_func_int32_t_s_s((g_351 & p_17), (safe_mod_func_int32_t_s_s(g_338, (((safe_div_func_int16_t_s_s((p_19 == p_17), 0x5840)) == p_17) & g_248))))) && 0x03C9), p_19)) & l_881) || g_275) < g_37)) & p_17) || 0x4918D01A) & 0xD5)))))) != 0x6D), l_908)))), 6))) | l_881))) && p_18) ^ 0x51BF), g_236)))), 0xFE20A5DA))), 0)))
                    {
                        g_274 = (l_937 = g_820);
                        l_937 = l_938;
                        g_316 = (0 ^ (safe_add_func_int8_t_s_s(((safe_sub_func_int8_t_s_s(((g_281 >= p_18) != (l_936 && 0x73)), 0U)) >= (((safe_mod_func_int8_t_s_s((((((((255U ^ (g_188 || (safe_mod_func_uint16_t_u_u(p_18, 0x01CC)))) || p_18) <= 0xDF625C16) ^ l_937) <= p_17) <= p_17) < g_439), g_661)) > p_18) ^ g_830)), p_17)));
                    }
                    else
                    {
                        uint8_t l_990 = 0xDA;
                        int32_t l_991 = 1;
                        g_439 &= g_281;
                        l_936 ^= (safe_sub_func_int16_t_s_s(p_18, ((g_259 |= (safe_lshift_func_int16_t_s_u(((+9) < ((safe_sub_func_uint8_t_u_u((g_248 ^= ((safe_lshift_func_uint32_t_u_s(l_881, 8)) <= ((safe_div_func_uint8_t_u_u(l_908, (safe_add_func_uint16_t_u_u(((g_440 = g_440) | ((((g_43 < 0xBEBE78E1) <= (safe_lshift_func_uint16_t_u_u(((safe_add_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(((safe_sub_func_int32_t_s_s(0x1D82194D, (g_593 > p_19))) | g_166), 7)), g_281)) != g_338), g_595))) & l_907) && l_900)), 0x06BE)))) ^ l_872))), p_18)) != 0x0A30)), 13))) ^ g_686)));
                        l_907 = ((((((g_364 = (-1)) && (g_663 = (safe_add_func_uint16_t_u_u(((l_935 && (safe_div_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(((-1) || ((l_936 = (l_937 = (+0xE745))) == p_18)), (safe_div_func_uint16_t_u_u(((l_990 &= (l_934 = (safe_mod_func_int32_t_s_s((0x80E6 < ((safe_sub_func_int8_t_s_s((safe_sub_func_int8_t_s_s(((l_984 = (l_983 ^= l_900)) > (-9)), (safe_mod_func_int8_t_s_s((((((((((!(safe_lshift_func_uint8_t_u_s((g_352 && l_881), 6))) < p_19) & g_259) && p_19) <= g_593) ^ p_18) ^ g_494) < l_935) & l_881), p_19)))), g_175)) || 0U)), 4294967287U)))) == 1U), l_880)))), g_168))) <= l_991), p_17)))) | 0x74) != g_166) & p_17) > l_880);
                    }
                    for (l_872 = 0; (l_872 < 3); ++l_872)
                    {
                        int16_t l_994 = 1;
                        l_994 = 0x896BF7FC;
                    }
                }
                if ((((safe_rshift_func_int16_t_s_u((!0x6780), 7)) || l_881) == (safe_lshift_func_uint16_t_u_u((l_908 &= ((safe_sub_func_int8_t_s_s((g_248 | p_18), 1)) & ((safe_rshift_func_uint8_t_u_s((g_30 >= ((safe_sub_func_uint16_t_u_u(((safe_add_func_uint32_t_u_u(g_166, (safe_div_func_int32_t_s_s(l_984, (safe_mod_func_uint16_t_u_u(((((l_936 = (((((safe_mod_func_int16_t_s_s(((l_880 > p_17) == p_17), 0xFD45)) && g_30) | 0U) ^ 3) ^ g_663)) == 0U) & p_19) <= 0x55048BFD), g_29)))))) >= l_872), p_19)) ^ g_440)), g_90)) | g_1014))), 2))))
                {
                    uint32_t l_1052 = 4294967292U;
                    l_984 = ((l_936 == (g_663 = p_18)) <= (safe_mod_func_uint32_t_u_u((1U == g_37), (safe_add_func_int32_t_s_s(p_17, ((~(((safe_div_func_int8_t_s_s(((safe_div_func_uint32_t_u_u((((g_188 ^ p_17) & ((safe_unary_minus_func_int32_t_s((~(+g_364)))) != 0xF7ED8110)) ^ 0xB5), g_275)) | l_1027), g_275)) != p_18) < p_19)) | p_17))))));
                    if ((safe_div_func_uint16_t_u_u(l_907, p_19)))
                    {
                        uint32_t l_1030 = 0U;
                        l_1030++;
                        l_907 &= (-3);
                    }
                    else
                    {
                        return p_17;
                    }
                    l_983 &= (safe_add_func_uint16_t_u_u((+((safe_lshift_func_int16_t_s_u(((safe_rshift_func_int8_t_s_s(((+(safe_add_func_int16_t_s_s((p_19 || (safe_add_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(l_1047, (safe_mod_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(p_18, (g_166 = ((g_259 = l_1052) <= l_936)))), p_17)))), ((g_1054 = ((0xDF < (!p_19)) <= 0x2EF9)) <= l_1055)))), g_174))) > l_1052), 7)) < p_18), g_338)) == 0)), g_830));
                }
                else
                {
                    int32_t l_1062 = (-10);
                    for (g_168 = (-29); (g_168 != 49); ++g_168)
                    {
                        g_316 |= (safe_mod_func_int16_t_s_s(g_494, (safe_mod_func_uint16_t_u_u(0xA600, l_1062))));
                    }
                    for (p_18 = 0; (p_18 <= (-29)); p_18 = safe_sub_func_uint8_t_u_u(p_18, 1))
                    {
                        uint16_t l_1090 = 1U;
                        int32_t l_1091 = 8;
                        l_908 ^= ((safe_div_func_int8_t_s_s((g_175 ^= (l_1091 &= (g_187 = (safe_add_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u(p_17, ((+(((l_936 || (p_18 <= (safe_lshift_func_uint16_t_u_s((2 | (1U > (safe_div_func_int8_t_s_s((((l_936 = (safe_div_func_uint32_t_u_u((((p_19 &= ((safe_div_func_int8_t_s_s((safe_sub_func_int32_t_s_s(p_18, (safe_sub_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s(g_595, 7)), (l_1086 <= (safe_lshift_func_uint32_t_u_s(g_174, 27))))))), 0x68)) < 0x33)) & g_830) || l_938), p_17))) ^ 0x05) < l_934), p_17)))), 5)))) > 0x421A) | 65531U)) || l_1089))), l_1090))))), g_174)) || 0x21C6);
                        return g_364;
                    }
                }
                g_274 = 0xFADB3EBC;
                if (g_686)
                    continue;
            }
            l_984 ^= ((safe_sub_func_uint16_t_u_u(((((safe_rshift_func_int32_t_s_u(((0xAA956835 > (((((l_983 &= g_352) || (l_900 == ((safe_lshift_func_uint8_t_u_s(p_18, l_1086)) >= l_1047))) > ((((safe_mod_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(0x81, 0x57)), (safe_mod_func_int32_t_s_s(((g_259 &= l_1047) > 0x5304), 0x9379CDDB)))) >= g_236) >= 0x861B) >= g_273)) <= g_180) <= p_19)) <= 4294967287U), g_595)) | 7) == g_1054) >= 255U), l_934)) | (-6));
            for (g_171 = 0; (g_171 == 26); ++g_171)
            {
                uint8_t l_1138 = 0x6F;
                int32_t l_1141 = 0x7422E1D8;
                uint16_t l_1145 = 6U;
                for (l_938 = 0; (l_938 == (-14)); --l_938)
                {
                    int32_t l_1126 = (-3);
                    int32_t l_1140 = (-1);
                    for (l_42 = (-29); (l_42 >= 57); ++l_42)
                    {
                        uint16_t l_1112 = 1U;
                        g_274 = p_17;
                        g_439 = p_17;
                        return l_1112;
                    }
                    for (g_830 = (-12); (g_830 < 1); g_830 = safe_add_func_uint16_t_u_u(g_830, 2))
                    {
                        uint32_t l_1142 = 4294967293U;
                        l_984 = 0;
                        g_439 |= (l_1141 = (((((1U != (g_259++)) && (safe_lshift_func_int32_t_s_u((((safe_div_func_uint16_t_u_u(p_17, (++g_259))) && (l_1126 <= (l_1140 = ((safe_add_func_uint8_t_u_u((p_17 != ((safe_lshift_func_int16_t_s_s(((0xB5E2 <= (safe_sub_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((~0xA3BB896C), 14)), (g_184 ^= (((0U != ((safe_mod_func_uint8_t_u_u(0x19, l_907)) < g_686)) >= (-1)) || l_1138))))) > l_1138), 1)) != g_168)), l_1139)) <= g_830)))) || g_275), 14))) ^ g_316) ^ p_18) && g_171));
                        l_1142++;
                        return p_18;
                    }
                }
                --l_1145;
                if (g_275)
                    continue;
                l_936 ^= g_830;
            }
        }
        g_316 = (safe_sub_func_int16_t_s_s(g_281, (g_259--)));
    }
    return l_1152;
}
static uint8_t func_22(const uint32_t p_23, const int32_t p_24, uint32_t p_25, uint8_t p_26, uint8_t p_27)
{
    uint16_t l_34 = 0x5809;
    int32_t l_35 = 0x39384257;
    int32_t l_36 = 0xEE56E31B;
    l_34 = g_29;
    ++g_37;
    l_36 = g_30;
    return p_26;
}
static const uint16_t func_59(uint16_t p_60, uint32_t p_61)
{
    uint16_t l_88 = 0U;
    int32_t l_89 = 0x4477D717;
    int32_t l_514 = 0;
    uint8_t l_658 = 0x73;
    int32_t l_659 = 0xFBAA37DF;
    int32_t l_750 = 0xE0DE5307;
    int16_t l_769 = 0xE2FF;
    int32_t l_809 = 0x6703E9E4;
    int8_t l_826 = 0x8B;
    if (g_37)
    {
        uint32_t l_66 = 0x05A42069;
        int32_t l_67 = (-6);
        int32_t l_91 = 0xB27F9695;
        uint32_t l_126 = 0x0D5E4710;
        l_91 ^= ((g_90 = (+(((((l_67 &= l_66) >= (255U >= 0x52)) & p_61) | ((g_29 = (((safe_lshift_func_int16_t_s_s(((safe_rshift_func_int8_t_s_s((safe_sub_func_int32_t_s_s((safe_div_func_uint32_t_u_u(0x1D8D4885, func_22(p_61, ((p_61 || (((l_89 ^= ((+p_61) == (safe_rshift_func_int32_t_s_s(((safe_lshift_func_uint32_t_u_u((safe_add_func_int16_t_s_s(func_22(((+(safe_lshift_func_uint16_t_u_s(0x077D, 14))) < 9), l_66, l_88, g_37, g_43), p_61)), p_61)) == p_61), 27)))) <= l_88) > l_88)) <= p_60), l_88, p_61, p_61))), g_43)), l_66)) | 0x15), 5)) != g_30) || l_66)) != l_66)) && g_29))) >= g_30);
        if (g_29)
        {
            int32_t l_92 = 0xEC3887D1;
            g_93 = (l_92 > 65535U);
            for (l_66 = (-11); (l_66 == 7); l_66++)
            {
                uint32_t l_97 = 4294967291U;
                l_97--;
            }
        }
        else
        {
            int32_t l_108 = 6;
            l_91 = (l_88 > (safe_unary_minus_func_int32_t_s((safe_mod_func_uint8_t_u_u(0x20, func_103((l_108 = (l_108 & (0x2DDF81C5 >= ((l_89 > (func_109((g_37 ^= g_2), (((-1) > (safe_rshift_func_int32_t_s_u((safe_div_func_uint8_t_u_u((((safe_lshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(((safe_rshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_u((g_43 == p_60), 7)), g_43)) < p_61), g_30)), 4)) >= l_108) > 0x34DB4AF4), p_61)), 7))) == 0x5700), p_61, p_60) || l_126)) >= p_60)))), p_61, p_61, g_2))))));
            l_89 &= ((g_37 = (p_61 != (safe_sub_func_int32_t_s_s(g_281, p_60)))) >= (g_494 = p_61));
        }
    }
    else
    {
        int32_t l_509 = (-1);
        uint8_t l_606 = 0x8F;
        int8_t l_609 = 0x33;
        int32_t l_618 = 0;
        int8_t l_622 = 0x9E;
        int32_t l_662 = 0xAF0CEFF6;
        int32_t l_827 = 0;
        int32_t l_828 = (-1);
        int16_t l_856 = 0x8F59;
        if (((l_89 = p_60) | ((safe_add_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_s(p_61, 10)) == 0xE6), (g_174 = (l_514 ^= (((((safe_rshift_func_uint16_t_u_u(((safe_mod_func_uint16_t_u_u((g_259 = l_509), (safe_mod_func_uint16_t_u_u(65534U, (safe_lshift_func_int16_t_s_u(((p_60 == l_509) != (-5)), (1U & p_60))))))) | 0xFF72D38E), l_88)) | (-1)) >= p_60) > p_60) & g_273))))) == l_88)))
        {
            uint32_t l_519 = 0xD4BE4FD5;
            int32_t l_532 = 0x3A894B27;
            uint32_t l_558 = 8U;
            int16_t l_592 = 0x65F5;
            int32_t l_594 = 0x1A28FC56;
            int32_t l_660 = 0;
            uint16_t l_732 = 1U;
            if (g_365)
            {
                uint32_t l_526 = 1U;
                int32_t l_531 = 1;
                int32_t l_533 = 0x5C97E8F1;
                for (g_184 = (-25); (g_184 >= (-8)); g_184 = safe_add_func_int8_t_s_s(g_184, 1))
                {
                    int32_t l_534 = 0x15E37E83;
                    int32_t l_544 = (-4);
                    int32_t l_559 = 0x544A4EC7;
                    int16_t l_591 = 0x7AA9;
                    l_534 = (safe_div_func_int32_t_s_s((g_316 &= (l_519 ^= p_61)), ((g_364 = (3 < (safe_add_func_uint16_t_u_u(p_60, (l_533 &= (((safe_add_func_int8_t_s_s(((-1) >= (safe_lshift_func_int32_t_s_s(4, 19))), (l_526 < ((safe_sub_func_int8_t_s_s(l_88, (((((((-1) != ((safe_sub_func_int32_t_s_s((l_531 = g_352), g_352)) ^ (-1))) || g_37) ^ 0x7B84) > l_532) & 0U) < p_60))) < p_61)))) == p_61) <= p_60)))))) & 1)));
                    if ((g_274 = (safe_rshift_func_uint16_t_u_u((((~((g_259 = (l_531 &= ((safe_lshift_func_int32_t_s_s((((((p_60 <= (safe_rshift_func_uint32_t_u_u((((((safe_lshift_func_uint16_t_u_s(((0x8DD2 != ((g_248++) < ((0x0F7F >= g_2) <= (safe_add_func_int16_t_s_s(((g_168 = (+(safe_div_func_uint16_t_u_u((0x14E9ACD0 && (safe_rshift_func_uint16_t_u_u((l_533 = (((safe_mod_func_uint8_t_u_u(255U, (l_509 = (((safe_add_func_int32_t_s_s(l_533, l_514)) != p_61) ^ l_544)))) >= 7U) <= l_519)), 15))), g_259)))) & p_60), 9))))) <= l_519), l_558)) <= 7) & p_61) >= g_175) > l_519), 17))) & l_559) | g_37) && p_61) == l_526), l_534)) >= p_61))) ^ l_526)) < 0U) == 1), p_61))))
                    {
                        uint16_t l_571 = 6U;
                        g_593 = (((safe_add_func_int8_t_s_s((g_275 != (!(p_60 || ((safe_sub_func_uint8_t_u_u((4294967290U ^ (((((((((safe_sub_func_int16_t_s_s((safe_rshift_func_int32_t_s_s((g_439 |= (g_274 = (l_571 >= (safe_div_func_uint8_t_u_u((((safe_lshift_func_int16_t_s_u(((safe_add_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s((((l_544 = ((g_365 && (+((safe_lshift_func_int16_t_s_u(g_166, ((safe_lshift_func_int32_t_s_s((g_316 ^= g_259), 9)) || (safe_div_func_int8_t_s_s(p_60, (((g_259 = ((l_532 ^= (((safe_add_func_uint8_t_u_u((((safe_div_func_uint32_t_u_u(l_558, l_514)) != g_43) > 0xAB), p_60)) && p_61) >= (-1))) >= l_533)) == 0xA4F9) & g_440)))))) == 0x29B99F9D))) || p_60)) & l_88) == g_364), p_60)), p_61)) != 1), 5)) > 0) != l_88), g_29))))), 13)), p_60)) > l_509) & g_494) >= g_352) & l_591) ^ 0x64172BA1) >= 1) & p_60) == l_592)), l_571)) >= g_365)))), 0xAD)) >= p_61) ^ g_180);
                        --g_595;
                    }
                    else
                    {
                        uint8_t l_621 = 1U;
                        g_439 = (l_544 = (((safe_div_func_int8_t_s_s(((safe_sub_func_uint16_t_u_u((safe_add_func_int8_t_s_s((g_174 & 0xA31BCA2B), (safe_div_func_int32_t_s_s(((l_606 = g_338) && (((safe_lshift_func_uint8_t_u_s(p_61, 2)) | l_609) == ((safe_rshift_func_uint32_t_u_s((safe_add_func_int8_t_s_s(p_60, (l_533 |= (248U && g_171)))), (safe_sub_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s((++g_259), l_621)), 0x02CC)))) | l_509))), (-3))))), p_61)) <= p_60), 255U)) | l_622) && p_61));
                    }
                    l_532 = (-1);
                    if (l_88)
                        break;
                }
                return g_274;
            }
            else
            {
                const int32_t l_625 = 0xF659D80F;
                int32_t l_630 = 0;
                l_509 ^= (safe_add_func_uint8_t_u_u((((g_281 > (l_625 >= p_61)) || (g_281 != (g_281 ^ 0xE032))) <= ((-1) != g_43)), (safe_add_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((g_96 < p_61), 4294967295U)), g_273))));
                l_630 = ((l_625 <= p_61) <= p_60);
            }
            l_532 = ((safe_div_func_uint16_t_u_u((g_259 = (safe_lshift_func_int32_t_s_s((safe_lshift_func_uint32_t_u_s((safe_div_func_uint16_t_u_u((((g_236 > (l_609 != 4U)) < l_618) < (safe_add_func_uint8_t_u_u((safe_add_func_int16_t_s_s(((safe_mod_func_uint8_t_u_u((safe_add_func_int16_t_s_s((safe_mod_func_int16_t_s_s(((safe_mod_func_int16_t_s_s(((safe_sub_func_uint32_t_u_u(l_89, (safe_add_func_int16_t_s_s((l_514 = 0x901A), (!(safe_mod_func_int8_t_s_s(((g_259 != p_61) ^ ((l_594 = l_658) | g_30)), l_519))))))) < l_606), 0x7620)) && 0x3A5F), 0x4E1A)), g_273)), 1)) ^ g_96), p_60)), l_609))), p_60)), 8)), l_88))), 0xBD81)) != 7U);
            --g_663;
            for (l_532 = 0; (l_532 < (-1)); l_532--)
            {
                int8_t l_679 = 0;
                int32_t l_712 = 9;
                int32_t l_723 = 0xBDE27934;
                uint32_t l_786 = 0U;
                l_662 = ((l_514 = ((g_338 > l_662) || g_593)) ^ (!((((safe_rshift_func_int16_t_s_u(g_364, (safe_add_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(((l_618 = 0) & (safe_add_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((l_679 ^= g_338), p_61)), g_187))), l_609)), g_236)))) <= g_364) > p_61) | l_558)));
                for (l_594 = (-14); (l_594 < 9); l_594 = safe_add_func_int8_t_s_s(l_594, 7))
                {
                    uint16_t l_682 = 0xB13D;
                    int8_t l_685 = 0x85;
                    int32_t l_721 = (-8);
                    uint16_t l_728 = 0x22DA;
                    --l_682;
                    ++g_686;
                    if ((safe_add_func_uint8_t_u_u(((l_712 &= ((safe_sub_func_int16_t_s_s(((((safe_add_func_uint16_t_u_u(p_60, 0x4177)) != (g_30 = (safe_rshift_func_int8_t_s_u(0xEC, g_184)))) | 0x58661366) || p_60), ((g_166 &= (g_593 ^ (!(((g_259 = (((safe_add_func_int32_t_s_s(((((safe_add_func_uint8_t_u_u(((safe_sub_func_int32_t_s_s(((safe_rshift_func_uint16_t_u_u((safe_lshift_func_int32_t_s_s((safe_sub_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u(0U, 0U)) != 0xC2312C8D), l_679)), 25)), 6)) != p_61), 0xD36FD1B1)) != l_662), 4U)) & p_60) < (-10)) | p_60), 0x25F862E1)) & 9) | 0x54)) > 1U) <= g_439)))) ^ g_168))) < 0x7F7AD1E2)) >= 0x23), g_439)))
                    {
                        int32_t l_722 = 1;
                        l_723 = ((l_659 = (g_275 = (l_712 = (g_236 = (-5))))) <= ((((((l_519 & g_171) < (0x4AD80568 != (l_660 = (l_88 || (g_274 = (l_721 &= ((safe_lshift_func_uint16_t_u_s(((safe_sub_func_int16_t_s_s(7, 65535U)) < g_663), 5)) && (l_89 &= (safe_add_func_int16_t_s_s((p_60 || 0x11), p_60)))))))))) < g_259) > p_60) < p_60) >= l_722));
                        l_659 = (l_662 = (safe_lshift_func_int8_t_s_u((safe_lshift_func_int8_t_s_u(0x2F, l_728)), 0)));
                        g_274 |= (l_728 >= p_60);
                    }
                    else
                    {
                        g_439 = (safe_sub_func_int8_t_s_s(((+g_187) ^ ((p_60 != l_732) != 0x6ACE)), (g_686 <= ((safe_lshift_func_uint16_t_u_s((4 || (safe_add_func_int16_t_s_s(g_281, ((l_89 = (safe_div_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(0x4C, ((safe_mod_func_int32_t_s_s((g_440 >= g_439), (-1))) | g_2))), g_686))) && p_60)))), 6)) || g_595))));
                    }
                    for (g_274 = 0; (g_274 < (-9)); g_274--)
                    {
                        return g_185;
                    }
                }
                g_439 = (safe_rshift_func_uint8_t_u_s(((safe_rshift_func_uint32_t_u_s(((!((l_750 = g_259) >= (l_712 = (255U != (-6))))) != (safe_mod_func_uint32_t_u_u(0xD6F70A8B, ((safe_sub_func_int16_t_s_s((safe_div_func_int16_t_s_s(0xE803, p_61)), (+(l_723 = (safe_rshift_func_int32_t_s_u(((safe_add_func_uint16_t_u_u(((!(safe_mod_func_int8_t_s_s(0x6A, l_658))) <= (p_60 < l_622)), g_90)) >= p_61), 21)))))) || g_661)))), p_61)) < g_494), 6));
                l_509 = (safe_sub_func_int8_t_s_s(l_769, (g_364 = (g_185 >= ((g_188 ^ ((safe_sub_func_int8_t_s_s((((((safe_div_func_uint8_t_u_u(g_43, (safe_sub_func_uint8_t_u_u(((0x5F37 ^ (safe_rshift_func_int8_t_s_s(((p_61 >= p_60) > ((safe_sub_func_uint32_t_u_u((safe_lshift_func_int32_t_s_u((safe_div_func_int16_t_s_s(1, (g_259++))), (g_168 = g_316))), 0x6F6F6073)) && p_60)), p_61))) | g_180), p_60)))) < l_786) == p_61) | 0x3A7AE3B5) != 0x3B5B), l_618)) && g_184)) > (-3))))));
            }
        }
        else
        {
            int8_t l_808 = (-10);
            const int16_t l_810 = (-9);
            int32_t l_811 = (-7);
            l_811 = ((safe_unary_minus_func_uint8_t_u((safe_rshift_func_int8_t_s_s(p_61, 4)))) | ((((safe_rshift_func_uint8_t_u_s(((safe_rshift_func_int32_t_s_s((safe_lshift_func_int16_t_s_s(0x1C3F, 10)), 18)) ^ (safe_sub_func_uint8_t_u_u(g_236, ((((((safe_div_func_int8_t_s_s(((l_662 &= ((p_61 && (safe_add_func_uint32_t_u_u(0x0149D376, ((0x0E53E591 < ((l_809 = ((safe_mod_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_u(((safe_add_func_int32_t_s_s(l_808, (g_43 | ((((((l_809 < l_88) ^ (-1)) > p_60) != g_185) >= 0x010F4C15) <= 6)))) < p_60), p_61)) ^ l_808), p_61)) != l_809)) & p_60)) || l_622)))) <= (-7))) > l_808), 0x11)) == 0xA7D4CBF4) <= p_61) != 0xBC) <= g_275) == (-5))))), l_808)) == p_60) & l_810) >= 0x33));
            for (g_259 = 3; (g_259 >= 17); g_259 = safe_add_func_uint16_t_u_u(g_259, 1))
            {
                int32_t l_814 = (-7);
                l_814 = g_593;
            }
            for (l_514 = 0; (l_514 != (-24)); l_514 = safe_sub_func_uint32_t_u_u(l_514, 8))
            {
                uint32_t l_821 = 4294967290U;
                int32_t l_824 = 0x48514600;
                if ((safe_rshift_func_uint16_t_u_s((((!(g_820 |= 253U)) && ((l_821 = 4294967295U) < 0xB3789B34)) <= (safe_div_func_uint8_t_u_u(g_661, (g_494 = g_275)))), 6)))
                {
                    int32_t l_825 = 0x3975C9B3;
                    int32_t l_829 = 0x585EEB95;
                    if (g_96)
                        break;
                    g_830++;
                }
                else
                {
                    for (g_37 = 6; (g_37 > 16); ++g_37)
                    {
                        uint32_t l_857 = 0x4D886B19;
                        g_439 ^= p_60;
                        g_316 |= (l_857 = (g_439 = (g_274 = (((g_440 &= (p_60 != (safe_rshift_func_int32_t_s_s((((safe_lshift_func_int8_t_s_u(g_30, 7)) | (safe_add_func_uint8_t_u_u((safe_div_func_int16_t_s_s((((safe_div_func_int32_t_s_s((safe_lshift_func_int8_t_s_s((l_811 ^= (safe_sub_func_uint32_t_u_u((safe_mod_func_int32_t_s_s((0 && 0x0F69), (safe_add_func_int8_t_s_s((l_824 = p_60), (g_187 <= ((((g_338--) >= ((0x56 ^ (+((l_750 < 0xEB) != g_180))) ^ (-7))) <= 0xD2C9E072) <= p_61)))))), l_828))), p_60)), l_509)) == 0xE3D8) == l_606), l_856)), 0xCD))) == g_248), 9)))) | 0xE4) > (-1)))));
                    }
                    l_659 |= g_275;
                    return l_811;
                }
            }
            l_809 ^= p_61;
        }
        l_828 &= (((l_662 = p_60) >= (l_509 = (~p_61))) || l_514);
    }
    return g_440;
}
static uint8_t func_103(int32_t p_104, uint16_t p_105, const uint16_t p_106, int32_t p_107)
{
    const uint32_t l_183 = 0x247B8CF3;
    int32_t l_186 = 0x2EE7B9A5;
    int32_t l_190 = 0x5459814C;
    uint32_t l_191 = 0x11135B92;
    int8_t l_206 = 0xB4;
    int8_t l_443 = 0xF9;
    int32_t l_483 = 1;
    int32_t l_484 = (-2);
    int32_t l_485 = 0x59C979C9;
    int32_t l_486 = 5;
    int32_t l_487 = 8;
    int32_t l_488 = 0x48DC905E;
    int32_t l_489 = (-1);
    int32_t l_490 = 2;
    int32_t l_491 = 1;
    int32_t l_492 = 5;
    int32_t l_493 = 0x5BA97845;
    if ((func_109((safe_lshift_func_int8_t_s_u(g_37, 6)), g_93, (safe_lshift_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(func_109(p_104, (p_107 & ((safe_add_func_int8_t_s_s(func_135(p_104), 2)) <= p_105)), l_183, g_30), 0U)), 14)), l_183) <= l_183))
    {
        int32_t l_189 = (-8);
        --l_191;
        return p_106;
    }
    else
    {
        int32_t l_200 = 0x0B61D6DE;
        int32_t l_417 = 0xD2D7D5BE;
        if (((safe_sub_func_int8_t_s_s((l_190 ^ (((safe_div_func_uint32_t_u_u((safe_div_func_int32_t_s_s(func_135(l_200), (func_109(((func_201(l_206, func_207((((safe_sub_func_uint16_t_u_u(((safe_lshift_func_uint32_t_u_u(l_191, ((l_186 ^= (((p_106 ^ (safe_lshift_func_int16_t_s_u((((0x41 != ((safe_div_func_uint8_t_u_u((safe_div_func_int16_t_s_s((safe_sub_func_int32_t_s_s((((safe_add_func_int32_t_s_s((safe_unary_minus_func_int32_t_s((safe_mod_func_int32_t_s_s((p_107 |= (safe_mod_func_uint8_t_u_u((0xE0A404EE < 0xDCCF353F), p_104))), g_30)))), p_105)) < p_106) < p_106), l_191)), g_2)), p_106)) ^ g_37)) & p_106) & p_105), p_105))) | p_104) > p_105)) & 255U))) >= 65534U), l_200)) < g_174) ^ g_37), g_174), l_200, p_105) ^ 6U) || p_107), p_104, p_106, g_90) | (-1)))), 0x4332C901)) | 0) ^ l_191)), 0x8B)) <= p_104))
        {
            uint16_t l_418 = 0xE88A;
            g_316 = p_106;
            l_418++;
        }
        else
        {
            uint16_t l_426 = 1U;
            int32_t l_438 = (-1);
            int32_t l_472 = 0x97996149;
            l_438 ^= ((safe_mod_func_uint8_t_u_u(p_106, l_200)) && (safe_add_func_uint8_t_u_u((safe_unary_minus_func_int8_t_s((l_190 = l_426))), (safe_sub_func_uint32_t_u_u(p_106, ((safe_sub_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s((!7U), 0)), (((safe_mod_func_int32_t_s_s(3, g_174)) != ((g_168 = g_37) && (safe_div_func_uint16_t_u_u(p_104, g_275)))) > g_166))) ^ p_107))))));
            --g_440;
            g_439 = (g_30 > ((g_174 | l_443) > (p_105 <= ((safe_lshift_func_uint32_t_u_u(g_316, ((safe_lshift_func_uint16_t_u_s((((((safe_sub_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(((safe_mod_func_uint32_t_u_u(p_107, g_364)) && g_90), p_105)), p_106)), 0x4A)) == p_107) > g_364) || g_338) > 0x567AF07C), l_190)) && 0x5E62))) || p_106))));
            g_274 |= (l_472 |= (safe_rshift_func_uint32_t_u_s(((safe_rshift_func_int8_t_s_u((safe_sub_func_int32_t_s_s(p_104, (0U != (6U || 1)))), (0x061F1601 || (l_438 == (safe_rshift_func_uint8_t_u_s(g_439, ((((safe_sub_func_uint32_t_u_u((((safe_mod_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(0x7AB3DE0F, (safe_div_func_int16_t_s_s((g_236 ^= (p_107 == p_106)), p_104)))), g_352)) ^ g_180) >= g_30), p_106)) < l_191) && 4U) && g_364))))))) & 0x1AD52204), 4)));
        }
        p_107 = ((l_186 = (safe_mod_func_uint8_t_u_u(l_443, ((safe_mod_func_uint32_t_u_u(g_236, g_274)) || l_191)))) != (safe_div_func_uint8_t_u_u(0xE5, (safe_rshift_func_uint32_t_u_u(p_104, 4)))));
    }
    p_107 &= (safe_mod_func_uint16_t_u_u(l_443, p_104));
    --g_494;
    return g_168;
}
static int16_t func_109(const uint8_t p_110, int16_t p_111, const uint32_t p_112, int16_t p_113)
{
    return p_112;
}
static int8_t func_135(int8_t p_136)
{
    int32_t l_137 = 2;
    int16_t l_165 = 0x2FC2;
    int32_t l_167 = 0x1603581D;
    int32_t l_169 = 0x3079E446;
    int8_t l_170 = 3;
    int32_t l_176 = 1;
    int32_t l_177 = 1;
    int32_t l_178 = (-9);
    int32_t l_179 = 0x5E6F9BC8;
    l_137 = (l_137 == (l_170 = ((safe_rshift_func_int8_t_s_s(((safe_mod_func_uint8_t_u_u((g_2 | (g_29 = ((safe_lshift_func_uint16_t_u_s((l_169 = (func_109((func_144(((safe_mod_func_int8_t_s_s((((l_167 ^= (safe_div_func_int8_t_s_s((!(safe_mod_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(4294967295U, 3)), (safe_lshift_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u((g_166 &= func_109(func_109(p_136, p_136, (l_137 > (l_165 = func_109(func_109(g_37, ((safe_add_func_int16_t_s_s((safe_add_func_uint8_t_u_u(l_137, l_137)), l_137)) >= p_136), l_137, p_136), l_137, g_30, p_136))), p_136), p_136, g_96, p_136)), l_137)) == g_2), 12))))), 1))) || p_136) || g_96), g_2)) > 0xEA2219E0), l_137, p_136) & 0x80D5DAD1), p_136, l_137, g_43) & (-8))), 7)) || (-1)))), l_137)) < g_96), 3)) < 0xA8)));
    g_171++;
    --g_180;
    l_179 = (0x85D9 >= g_2);
    return l_165;
}
static uint32_t func_144(int32_t p_145, int32_t p_146, const int32_t p_147)
{
    g_168 ^= p_146;
    return g_93;
}
static uint32_t func_201(uint32_t p_202, int32_t p_203, const int32_t p_204, uint32_t p_205)
{
    int32_t l_405 = 1;
    uint32_t l_414 = 0x5401C7BE;
    uint16_t l_416 = 1U;
    g_316 = l_405;
    g_316 = l_405;
    if (l_405)
        goto lbl_415;
lbl_415:
    g_316 = ((safe_rshift_func_uint16_t_u_s((l_405 <= ((l_405 < (((safe_mod_func_uint8_t_u_u(p_203, (g_248 = p_202))) ^ ((p_203 <= (((g_274 |= (safe_lshift_func_uint16_t_u_u(65535U, 1))) < (safe_lshift_func_uint8_t_u_u((((g_93 > g_273) > g_90) & l_414), g_187))) | p_204)) || 0xAD35E5ED)) > p_205)) & l_405)), 2)) ^ l_405);
    p_203 = (((g_248 ^= l_416) < ((l_405 |= (g_259 = p_204)) ^ g_185)) < l_414);
    return g_273;
}
static int32_t func_207(uint8_t p_208, const int32_t p_209)
{
    uint8_t l_232 = 0x4D;
    int32_t l_271 = 0x9A800174;
    int8_t l_272 = (-1);
    int32_t l_357 = 0xD85689E5;
    int16_t l_363 = 0x228D;
    int32_t l_402 = 0x0E7BC498;
    if ((g_174 | p_208))
    {
        int32_t l_231 = 0x83ED9FA1;
        int32_t l_293 = (-1);
        int32_t l_328 = 0xDC56D0B5;
        int32_t l_337 = 0;
        int32_t l_368 = 0x1EEAA21F;
        for (g_184 = 0; (g_184 == (-10)); g_184 = safe_sub_func_uint16_t_u_u(g_184, 4))
        {
            const int32_t l_235 = (-5);
            int32_t l_270 = (-3);
            int32_t l_350 = 0x5CF373AB;
            if (l_231)
            {
                l_232 = l_231;
                g_236 = ((l_232 && (safe_add_func_int32_t_s_s(l_235, (l_232 && (0xF0 | 0xB8))))) ^ g_30);
            }
            else
            {
                int32_t l_269 = 0x273CA0E7;
                int32_t l_276 = (-4);
                int32_t l_279 = 0x65DDC268;
                if (g_37)
                    break;
                if ((safe_mod_func_uint8_t_u_u((safe_div_func_int32_t_s_s(l_232, (safe_add_func_uint16_t_u_u(((((safe_mod_func_int8_t_s_s(((safe_rshift_func_int8_t_s_u(((g_248 = (~l_231)) >= (safe_div_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s((p_208 = p_208), (4294967289U ^ (safe_sub_func_uint32_t_u_u(((safe_lshift_func_uint32_t_u_u((p_209 <= ((safe_add_func_int8_t_s_s((((g_259--) >= (-7)) || p_209), g_96)) < 0x23)), l_235)) > g_184), p_209))))), l_231))), 4)) > g_185), 1)) & p_209) <= g_30) > p_209), g_93)))), p_209)))
                {
                    int16_t l_277 = (-1);
                    int32_t l_278 = 0x4A2BDFB0;
                    int32_t l_280 = 1;
                    l_271 = ((-5) || (((l_270 &= (g_30 < ((7 <= (safe_lshift_func_int16_t_s_s((((0xFA7F8D44 && ((safe_sub_func_int8_t_s_s(g_236, l_232)) == 0x5F)) <= (((g_90 | (~((safe_mod_func_uint32_t_u_u((l_269 < 0x9424BF6E), p_208)) < 0x5B))) <= g_236) > g_30)) == g_37), g_174))) || 1))) > 0xA9D5) != g_37));
                    l_272 ^= p_208;
                    --g_281;
                }
                else
                {
                    uint16_t l_304 = 0x8E0B;
                    int32_t l_315 = 9;
                    g_316 = (!((safe_add_func_int8_t_s_s((l_231 = ((safe_lshift_func_int32_t_s_s(p_208, (safe_sub_func_uint8_t_u_u(((g_275 = g_281) == (((safe_mod_func_uint8_t_u_u(l_293, p_209)) ^ (safe_div_func_int8_t_s_s((((safe_rshift_func_int8_t_s_s(((safe_mod_func_int8_t_s_s(0xDC, (safe_lshift_func_int16_t_s_s((safe_sub_func_int8_t_s_s(((l_304 = (g_274 &= g_175)) > (safe_sub_func_uint16_t_u_u(g_259, ((safe_lshift_func_int32_t_s_u((safe_rshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_s(0x1631, (((g_185 && 4294967295U) >= l_315) != 0x069160EC))) != g_90), 4)), 6)), 29)) & l_279)))), l_231)), p_208)))) ^ g_184), p_209)) ^ l_276) && l_270), 0x11))) | l_315)), 0xFB)))) != p_209)), g_281)) || l_293));
                    l_270 |= p_208;
                }
                if ((((safe_mod_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((l_293 && (g_248 = (((g_259++) & g_2) < p_208))), (safe_lshift_func_int32_t_s_s(((((((!(((((safe_add_func_uint32_t_u_u(((l_231 <= (1U <= (l_328 = 65535U))) >= g_96), ((safe_mod_func_int8_t_s_s(((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint32_t_u_s((((4294967295U | ((-3) && p_209)) & g_37) >= p_208), p_208)), 13)), 9U)) || g_316), l_276)) == 0x9A2F))) != 0xEC) >= p_208) | g_37) < l_271)) < p_208) & g_185) & g_187) && p_209) < l_276), p_209)))), l_337)) < g_338) ^ 0x2E))
                {
                    uint8_t l_349 = 0xCF;
                    g_274 = (g_273 || (0U & (((((l_276 &= (safe_mod_func_uint16_t_u_u(p_208, l_270))) ^ ((safe_add_func_uint16_t_u_u(g_259, ((((safe_add_func_uint16_t_u_u(p_208, (l_349 = p_208))) ^ g_175) > (--g_352)) < (safe_div_func_int32_t_s_s(((g_316 & p_208) && 0xB606CB08), l_357))))) == p_208)) & l_235) < (-1)) > p_208)));
                }
                else
                {
                    return g_2;
                }
            }
        }
        for (l_328 = 0; (l_328 >= 27); l_328 = safe_add_func_int8_t_s_s(l_328, 8))
        {
            int16_t l_362 = 0xC543;
            g_274 = (((safe_add_func_int16_t_s_s(0xA398, p_209)) < p_209) || (l_357 |= g_37));
            g_365++;
            if (l_362)
                continue;
        }
        l_328 &= l_368;
    }
    else
    {
        uint32_t l_376 = 0x8D247692;
        int32_t l_383 = (-8);
        int32_t l_384 = 0xB9B7F2E9;
        l_384 &= ((safe_div_func_uint32_t_u_u((g_43 || (safe_add_func_uint8_t_u_u(0x65, ((0xCBDC && (~(l_357 &= ((p_209 ^ (safe_rshift_func_int16_t_s_s((l_376 &= g_275), 3))) || (l_383 = ((0x20 <= p_209) & (safe_add_func_int32_t_s_s(((g_174 = (safe_div_func_uint16_t_u_u((g_259 = (((((safe_sub_func_int8_t_s_s(((l_271 = (p_208 & ((l_376 <= g_259) <= p_208))) > l_376), g_185)) || g_351) ^ p_208) >= p_208) && p_208)), p_209))) || p_209), l_363)))))))) | g_37)))), g_273)) == g_30);
    }
    g_274 = ((l_357 = 8) ^ (safe_add_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(((+l_271) != (safe_mod_func_int8_t_s_s((safe_add_func_int8_t_s_s(l_272, ((+((-1) == (p_209 && (((safe_lshift_func_uint8_t_u_s(((safe_sub_func_uint16_t_u_u((~g_187), g_365)) == ((65535U && (g_259++)) || g_96)), l_232)) > 0x6B983BC1) <= 4294967295U)))) | l_363))), 0xFA))), 1)), l_363)), 0x7E83)));
    return g_351;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_29, "g_29", print_hash_value);
    transparent_crc(g_30, "g_30", print_hash_value);
    transparent_crc(g_37, "g_37", print_hash_value);
    transparent_crc(g_43, "g_43", print_hash_value);
    transparent_crc(g_90, "g_90", print_hash_value);
    transparent_crc(g_93, "g_93", print_hash_value);
    transparent_crc(g_96, "g_96", print_hash_value);
    transparent_crc(g_166, "g_166", print_hash_value);
    transparent_crc(g_168, "g_168", print_hash_value);
    transparent_crc(g_171, "g_171", print_hash_value);
    transparent_crc(g_174, "g_174", print_hash_value);
    transparent_crc(g_175, "g_175", print_hash_value);
    transparent_crc(g_180, "g_180", print_hash_value);
    transparent_crc(g_184, "g_184", print_hash_value);
    transparent_crc(g_185, "g_185", print_hash_value);
    transparent_crc(g_187, "g_187", print_hash_value);
    transparent_crc(g_188, "g_188", print_hash_value);
    transparent_crc(g_236, "g_236", print_hash_value);
    transparent_crc(g_248, "g_248", print_hash_value);
    transparent_crc(g_259, "g_259", print_hash_value);
    transparent_crc(g_273, "g_273", print_hash_value);
    transparent_crc(g_274, "g_274", print_hash_value);
    transparent_crc(g_275, "g_275", print_hash_value);
    transparent_crc(g_281, "g_281", print_hash_value);
    transparent_crc(g_316, "g_316", print_hash_value);
    transparent_crc(g_338, "g_338", print_hash_value);
    transparent_crc(g_351, "g_351", print_hash_value);
    transparent_crc(g_352, "g_352", print_hash_value);
    transparent_crc(g_364, "g_364", print_hash_value);
    transparent_crc(g_365, "g_365", print_hash_value);
    transparent_crc(g_439, "g_439", print_hash_value);
    transparent_crc(g_440, "g_440", print_hash_value);
    transparent_crc(g_494, "g_494", print_hash_value);
    transparent_crc(g_593, "g_593", print_hash_value);
    transparent_crc(g_595, "g_595", print_hash_value);
    transparent_crc(g_661, "g_661", print_hash_value);
    transparent_crc(g_663, "g_663", print_hash_value);
    transparent_crc(g_686, "g_686", print_hash_value);
    transparent_crc(g_820, "g_820", print_hash_value);
    transparent_crc(g_830, "g_830", print_hash_value);
    transparent_crc(g_1014, "g_1014", print_hash_value);
    transparent_crc(g_1054, "g_1054", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
