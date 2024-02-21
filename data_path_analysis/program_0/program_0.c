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
static uint16_t g_3 = 0x6656;
static int16_t g_41 = 6;
static int16_t g_48 = 0x3988;
static int32_t g_94 = 0xDD78FD71;
static uint32_t g_101 = 4U;
static uint16_t g_134 = 1U;
static uint8_t g_135 = 255U;
static int8_t g_140 = 6;
static int32_t g_182 = 0x41530505;
static uint32_t g_186 = 7U;
static int8_t g_228 = 8;
static uint8_t g_308 = 0x30;
static int32_t g_309 = 0x326DC8C8;
static uint32_t g_311 = 5U;
static uint16_t g_348 = 0U;
static int8_t g_353 = 0x75;
static int16_t g_354 = (-1);
static int32_t g_357 = 0;
static uint8_t g_358 = 0x99;
static int32_t g_467 = (-1);
static int8_t g_483 = 5;
static uint8_t g_505 = 0xCB;
static uint16_t g_630 = 0x8039;
static int32_t g_634 = 1;
static uint8_t g_636 = 0x91;
static int16_t g_642 = (-3);
static uint32_t g_644 = 2U;
static int32_t g_647 = (-5);
static int32_t g_708 = 0xC5488CFB;
static int32_t g_728 = 0xF20ED74E;
static int16_t g_732 = (-3);
static uint32_t g_737 = 6U;
static int32_t g_759 = 2;
static int32_t g_775 = 0xDBA707F6;
static int32_t func_1(void);
static int8_t func_8(int32_t p_9);
static int16_t func_24(uint8_t p_25, uint16_t p_26, int32_t p_27);
static int16_t func_33(int32_t p_34, int32_t p_35, uint16_t p_36, uint16_t p_37, int8_t p_38);
static uint32_t func_42(uint32_t p_43, int32_t p_44, uint16_t p_45, uint8_t p_46);
static uint8_t func_51(int16_t p_52, uint32_t p_53, int32_t p_54, int32_t p_55);
static int8_t func_64(int32_t p_65, uint32_t p_66);
static uint16_t func_70(uint16_t p_71, int16_t p_72, uint32_t p_73, int32_t p_74, int32_t p_75);
static int16_t func_79(uint8_t p_80, uint32_t p_81);
static int8_t func_84(int8_t p_85);
static int32_t func_1(void)
{
    int32_t l_2 = 0x27CB3F4F;
    int8_t l_39 = 0x74;
    int32_t l_648 = 0xF51A3A6D;
    int32_t l_649 = 0xFC695F46;
    l_2 = l_2;
    --g_3;
    l_2 = (safe_add_func_uint32_t_u_u(((func_8(((safe_sub_func_int8_t_s_s(l_2, (safe_mul_func_int8_t_s_s((g_3 && (safe_add_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(((safe_div_func_int8_t_s_s((l_648 = (safe_add_func_int32_t_s_s(((g_647 ^= (safe_rshift_func_int16_t_s_s(func_24(g_3, ((g_3 >= ((((safe_sub_func_uint16_t_u_u(((g_3 || (g_3 != ((+0xA8551B32) <= ((l_2 < func_33(l_2, g_3, l_2, l_2, l_39)) > 0xE5F5)))) && g_3), g_3)) >= g_3) ^ l_39) > g_3)) && g_3), g_3), 10))) > g_642), 0U))), (-3))) | g_642), 0xBD9A)), 0U))), 1)))) > l_649)) <= l_39) ^ l_39), 0));
    return g_644;
}
static int8_t func_8(int32_t p_9)
{
    int32_t l_652 = 0xC61A893B;
    int32_t l_676 = (-8);
    int32_t l_681 = 0;
    int32_t l_682 = 0xD1B52101;
    int32_t l_715 = 0x38628702;
    uint8_t l_812 = 255U;
    g_182 = 0x88B26008;
    l_652 = (safe_lshift_func_uint8_t_u_u(0xF9, 6));
    if ((safe_sub_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u(((l_652 <= (((safe_sub_func_uint32_t_u_u((0xCC1B > ((((g_467 == (safe_mod_func_int32_t_s_s((!(((((safe_div_func_uint32_t_u_u((((safe_add_func_uint16_t_u_u(0x6242, (l_682 = (safe_add_func_int8_t_s_s((l_681 = (safe_div_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((-1), (safe_mul_func_int16_t_s_s((l_676 = ((g_140 = 5) | (g_135++))), ((p_9 | g_505) != 0U))))), 0x6A))), g_358))))) ^ l_652) <= g_358), l_652)) >= g_311) & l_652) | 8U) >= p_9)), p_9))) >= p_9) <= p_9) == 0x2F)), 0x7DAAB053)) >= p_9) > 0xFDBC)) || 0xAD2D), g_309)) < p_9), 1)))
    {
        g_182 &= g_228;
    }
    else
    {
        uint32_t l_690 = 8U;
        int32_t l_724 = 0x051C5BF2;
        int32_t l_726 = 0xE867CB1D;
        int32_t l_730 = 0x4C30F2E4;
        int32_t l_731 = 0xA63A098A;
        for (p_9 = 23; (p_9 < (-25)); p_9 = safe_sub_func_uint16_t_u_u(p_9, 9))
        {
            int16_t l_689 = 0xF41C;
            int32_t l_717 = 2;
            int32_t l_721 = 0xA517711E;
            int32_t l_722 = 0x436BD2E5;
            int32_t l_723 = (-3);
            int32_t l_725 = (-1);
            int32_t l_727 = 0;
            int32_t l_729 = (-1);
            int32_t l_733 = 0x593C3BF2;
            int32_t l_734 = 0;
            int32_t l_735 = 0x3F74C842;
            int32_t l_736 = 1;
            if ((safe_sub_func_uint8_t_u_u((((4294967294U == p_9) | ((p_9 ^ (l_689 <= l_689)) ^ (p_9 != (g_636 < (l_690 = 249U))))) ^ ((safe_div_func_uint32_t_u_u(((((safe_mod_func_int16_t_s_s((p_9 & p_9), p_9)) <= p_9) > (-9)) | l_689), p_9)) >= g_505)), g_348)))
            {
                uint32_t l_716 = 0x7B4E7857;
                g_94 = (safe_mod_func_uint8_t_u_u(((safe_div_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(((l_715 &= ((l_681 >= l_690) >= (0xE61FD518 != (safe_mul_func_int32_t_s_s((((safe_rshift_func_uint32_t_u_u(0U, (0xE4C8BF5B ^ p_9))) && ((l_676 = (safe_unary_minus_func_uint8_t_u((l_682 & (safe_div_func_uint16_t_u_u(g_708, (safe_rshift_func_int8_t_s_u(((safe_mod_func_uint8_t_u_u((((l_652 |= (safe_mod_func_uint8_t_u_u((l_690 || p_9), p_9))) || 0U) | 1), p_9)) && (-1)), 6)))))))) > g_353)) | p_9), p_9))))) | 4294967295U), 5U)), p_9)) > l_716), 1));
            }
            else
            {
                uint16_t l_718 = 7U;
                ++l_718;
            }
            --g_737;
            if (p_9)
                break;
            if (g_642)
                break;
        }
        g_94 = 8;
        g_634 = ((((l_730 |= 4U) < 0xB4) > (0 & (l_682 &= (safe_mul_func_int16_t_s_s((((l_726 < ((safe_mul_func_uint32_t_u_u(l_731, (g_182 = (g_94 = l_726)))) >= (l_715 ^= ((~(((p_9 > (g_48 = ((((safe_rshift_func_int32_t_s_u((safe_mul_func_int32_t_s_s(g_41, (++g_644))), (g_186 = (safe_lshift_func_int16_t_s_s((safe_add_func_uint8_t_u_u((((((safe_mul_func_uint16_t_u_u(((0x0AEE66FE != p_9) <= 0x4806CCE8), 65526U)) & p_9) & 0x6A57F8FC) || l_681) | g_48), 255U)), p_9))))) ^ l_676) == l_690) || l_731))) & 4294967295U) & p_9)) & l_726)))) ^ g_737) < g_759), p_9))))) && 65535U);
        l_724 = (safe_lshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(p_9, 4)), ((!(safe_add_func_int8_t_s_s((((safe_mul_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(0xE5DE1490, (safe_lshift_func_int16_t_s_u(p_9, 2)))), (g_647 != (1U < g_311)))) <= (safe_mod_func_uint32_t_u_u(g_775, g_3))) == ((safe_rshift_func_uint16_t_u_u(g_309, g_186)) < (-7))), 0U))) != l_724)));
    }
    for (p_9 = 0; (p_9 <= 28); p_9++)
    {
        int32_t l_782 = 0x428A1AF5;
        int32_t l_800 = 0x066D94D7;
        uint32_t l_813 = 0x1D57ED78;
        int32_t l_814 = 4;
        int32_t l_834 = 1;
        l_682 = (((safe_mul_func_int32_t_s_s((((l_800 = (l_782 | (safe_div_func_uint16_t_u_u((((((((g_354 == (safe_add_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(((+(safe_add_func_int8_t_s_s(p_9, 0x43))) & 0x8415), (((safe_rshift_func_uint8_t_u_s(5U, ((l_681 = (safe_mod_func_uint16_t_u_u((((!(safe_unary_minus_func_int8_t_s(l_715))) <= 0xB2B6) != l_652), 1U))) >= l_782))) < l_782) == 0x280E))), g_353))) < l_715) < p_9) | g_354) == g_186) == l_652) > 0U), g_644)))) == 0x7E) || l_681), g_182)) < 0x6EF0) > (-1));
        l_814 ^= (l_800 = (((p_9 > 0x2659E2B8) <= 4294967295U) == ((((((p_9 <= (!l_782)) & g_309) | (safe_add_func_uint8_t_u_u((l_676 ^= (p_9 <= (g_505 >= (safe_rshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(((safe_mod_func_int16_t_s_s(((safe_add_func_int16_t_s_s((p_9 >= l_812), g_182)) <= g_186), 0xEE1C)) ^ 0U), 0)), g_309))))), l_715))) == 9) == l_813) == g_634)));
        g_182 &= ((((safe_mul_func_int8_t_s_s(((0x47 != ((safe_mul_func_uint16_t_u_u((((p_9 <= (((safe_mod_func_uint32_t_u_u((safe_mul_func_int32_t_s_s((safe_mul_func_uint32_t_u_u((l_652 = (l_814 |= l_813)), (safe_sub_func_int32_t_s_s(l_715, p_9)))), (safe_lshift_func_uint8_t_u_u(p_9, g_483)))), (safe_rshift_func_int32_t_s_s(((((l_834 |= ((((g_732 = (0xCFF1 && (safe_rshift_func_uint8_t_u_u(((l_800 = (~(l_782 == 0x2AAF))) != 0), g_636)))) != (-1)) == 0xB99C8332) != l_682)) > l_813) <= l_682) && 0xF4), g_634)))) && 0) && g_708)) != g_48) == 4294967295U), 8)) > 0xD856576C)) > g_101), 249U)) || g_630) & g_186) == 0x5BA309EF);
    }
    return p_9;
}
static int16_t func_24(uint8_t p_25, uint16_t p_26, int32_t p_27)
{
    int32_t l_47 = (-9);
    int32_t l_578 = (-2);
    int32_t l_579 = 3;
    int32_t l_635 = (-1);
    int32_t l_639 = 0x9F10ABFB;
    int32_t l_640 = (-6);
    int32_t l_641 = 1;
    int32_t l_643 = 0xB4D982BF;
    g_634 = (func_42(g_41, p_26, (l_578 ^= ((++p_25) | func_51(l_47, l_47, p_26, p_27))), ((l_579 = (0x39 >= (0 & 0x4B3DC0BB))) < p_27)) && g_182);
    ++g_636;
    l_635 = (g_94 = l_578);
    ++g_644;
    return g_354;
}
static int16_t func_33(int32_t p_34, int32_t p_35, uint16_t p_36, uint16_t p_37, int8_t p_38)
{
    int16_t l_40 = 0x725F;
    l_40 = g_3;
    g_41 = g_3;
    return g_41;
}
static uint32_t func_42(uint32_t p_43, int32_t p_44, uint16_t p_45, uint8_t p_46)
{
    int8_t l_601 = 2;
    int32_t l_602 = (-8);
    int32_t l_607 = (-5);
    int32_t l_608 = (-10);
    int32_t l_609 = 0xB11FE966;
    int32_t l_610 = 3;
    int8_t l_629 = 5;
    uint32_t l_633 = 0xEDA58A44;
    l_610 = (safe_div_func_int32_t_s_s((safe_mul_func_int16_t_s_s((safe_add_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((safe_div_func_uint8_t_u_u(((((-5) & (1U < (safe_sub_func_uint32_t_u_u(4294967291U, (+((p_44 = p_44) == (((safe_add_func_int32_t_s_s((p_45 > p_46), (l_609 = (safe_add_func_uint32_t_u_u((l_602 = (l_601 != p_43)), ((l_608 &= (safe_sub_func_int32_t_s_s(((l_607 = (safe_div_func_uint8_t_u_u(0xE5, l_601))) != 0x85), g_467))) != p_45)))))) | l_601) | 0x7748))))))) > g_467) == g_48), 1U)), p_43)), l_601)), l_601)), 0)), p_45));
    p_44 = (safe_div_func_int8_t_s_s((safe_add_func_uint8_t_u_u((g_186 >= 0x907B), p_44)), ((safe_mul_func_uint8_t_u_u((safe_div_func_uint16_t_u_u((p_44 ^ ((safe_sub_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(2, 2)), ((l_610 &= (safe_sub_func_uint16_t_u_u((g_134 = ((p_43 &= (0x8A65 && g_467)) == ((safe_sub_func_int32_t_s_s(((safe_mod_func_int16_t_s_s((l_607 != g_134), 1)) & g_41), (-1))) || 0U))), 1))) >= l_608))) & 1)), l_608)), 0x6A)) ^ (-5))));
    g_630++;
    return l_633;
}
static uint8_t func_51(int16_t p_52, uint32_t p_53, int32_t p_54, int32_t p_55)
{
    uint32_t l_58 = 0x53312A7F;
    int32_t l_61 = (-1);
    int32_t l_76 = 0;
    int32_t l_568 = 0x25D151C8;
    uint8_t l_577 = 0U;
    l_61 |= (g_3 > (g_3 == (safe_lshift_func_int32_t_s_u((0xCDD1F665 < (l_58--)), 4))));
    l_568 ^= ((safe_sub_func_int32_t_s_s(((l_61 = l_58) == func_64((!p_55), (((safe_rshift_func_uint16_t_u_u(func_70((++g_3), (((p_52 = func_79((((safe_add_func_int8_t_s_s(func_84(g_48), (p_52 <= 1U))) <= (p_53 == ((-9) ^ ((safe_sub_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_s(l_76, 3)) >= p_54), l_58)) || l_76)))) >= l_76), l_58)) || 0xEEA7) || g_186), p_53, l_76, l_58), 11)) | p_55) | g_357))), (-10))) && l_76);
    l_61 = l_76;
    g_182 = (g_41 >= ((safe_add_func_int8_t_s_s(((safe_lshift_func_int8_t_s_s((g_357 < ((l_568 = ((((safe_sub_func_int32_t_s_s(((g_348 ^= 0x3FF1) < g_505), ((l_76 = (((((safe_add_func_uint8_t_u_u((l_61 = (g_3 ^ ((6 | 0U) < 0x78E4076F))), ((((p_53 | l_577) & l_58) >= l_58) > g_186))) & 0xF8) == p_52) ^ l_58) && g_3)) ^ g_101))) != (-1)) == 0x24372EC9) < (-5))) | p_55)), 3)) <= l_58), g_358)) <= l_58));
    return p_52;
}
static int8_t func_64(int32_t p_65, uint32_t p_66)
{
    int16_t l_555 = 6;
    g_94 = (((safe_mul_func_uint16_t_u_u(l_555, (g_483 != g_228))) <= (-5)) & (safe_sub_func_int32_t_s_s(((safe_sub_func_int16_t_s_s((p_65 != l_555), ((safe_mul_func_int8_t_s_s(((safe_mul_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s(g_358, (safe_mod_func_uint16_t_u_u((5 > l_555), 0x6F55)))), p_65)) ^ g_186), l_555)) <= 0x8669))) || p_66), g_467)));
    return p_66;
}
static uint16_t func_70(uint16_t p_71, int16_t p_72, uint32_t p_73, int32_t p_74, int32_t p_75)
{
    uint8_t l_520 = 0x30;
    int32_t l_529 = 0x46208832;
    int32_t l_549 = 6;
    g_182 = ((safe_mod_func_int32_t_s_s(g_309, 0x9151E2CE)) >= (safe_div_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_u(((safe_div_func_int16_t_s_s(l_520, (safe_mod_func_uint8_t_u_u((0x162BEFE8 ^ (safe_sub_func_uint16_t_u_u(((g_354 ^= (safe_sub_func_int32_t_s_s(l_520, (safe_div_func_int16_t_s_s(p_75, 5U))))) > ((g_186 = p_75) | g_94)), p_73))), l_520)))) && l_520), l_520)) && p_75), p_75)));
    l_529 &= g_140;
    l_549 = ((safe_add_func_int16_t_s_s((safe_mul_func_int8_t_s_s(0x23, g_354)), (g_354 ^ (((safe_add_func_uint16_t_u_u((((l_529 |= g_135) >= (((safe_lshift_func_uint8_t_u_u((g_308 = (!((g_348--) >= (0x4F ^ g_311)))), (safe_mul_func_uint8_t_u_u((((safe_add_func_int16_t_s_s(g_353, (p_74 >= (safe_lshift_func_int32_t_s_s(p_72, p_71))))) ^ l_520) && g_467), l_520)))) < p_75) && p_75)) < 0U), l_520)) == g_353) <= 0x9F78)))) | p_73);
    for (g_140 = 0; (g_140 != 9); g_140 = safe_add_func_int32_t_s_s(g_140, 9))
    {
        uint32_t l_552 = 0xD57DC6D3;
        l_529 |= l_552;
        return l_552;
    }
    return p_71;
}
static int16_t func_79(uint8_t p_80, uint32_t p_81)
{
    uint32_t l_511 = 4294967295U;
    g_182 = 0x506ACAF5;
    return l_511;
}
static int8_t func_84(int8_t p_85)
{
    int32_t l_95 = 0xD922041F;
    int32_t l_97 = 1;
    int32_t l_98 = 0xF0F9AB13;
    int32_t l_133 = 1;
    int32_t l_342 = 0xB660CBC0;
    int32_t l_346 = 0xA6B0373C;
    int32_t l_347 = 0;
    int8_t l_376 = 0x70;
    int8_t l_397 = 0;
    for (g_48 = 27; (g_48 <= 20); g_48 = safe_sub_func_int16_t_s_s(g_48, 5))
    {
        int16_t l_96 = (-1);
        int32_t l_99 = 6;
        int32_t l_100 = 0x70105C65;
        g_94 = (safe_add_func_int16_t_s_s(g_48, (safe_div_func_int8_t_s_s(((p_85 > p_85) >= ((l_98 = (safe_rshift_func_uint32_t_u_u(((l_99 &= (++g_101)) != ((p_85 ^ g_48) == 1)), (safe_sub_func_int8_t_s_s((1 ^ (l_100 = (safe_unary_minus_func_uint32_t_u((safe_mod_func_int16_t_s_s(8, p_85)))))), l_96))))) < 0x0323AA36)), 251U))));
        if ((((!(((safe_mul_func_int8_t_s_s(0xFB, p_85)) != (l_133 = ((l_98 = (((safe_lshift_func_int32_t_s_s(((l_99 = ((safe_mod_func_uint16_t_u_u(65535U, (safe_add_func_int32_t_s_s((safe_lshift_func_int8_t_s_u((safe_lshift_func_int32_t_s_s((safe_rshift_func_int8_t_s_s((((safe_add_func_uint8_t_u_u(p_85, ((safe_div_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(l_95, (safe_div_func_int32_t_s_s((g_94 &= g_41), (safe_unary_minus_func_uint16_t_u(g_41)))))), (l_98 || (l_99 < p_85)))) < p_85))) < 255U) && l_95), 2)), g_101)), 6)), p_85)))) >= g_101)) <= p_85), 15)) || 1U) == 1U)) < l_100))) && g_134)) | 0xDF32) & g_134))
        {
            int8_t l_141 = (-1);
            int32_t l_217 = (-5);
            int32_t l_250 = 0x51585644;
            int32_t l_310 = 0xE49781EE;
            g_94 = (((((++g_135) <= (safe_div_func_int8_t_s_s(p_85, (g_140 ^= 0U)))) || (--g_135)) == (((l_97 ^ l_100) != ((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint32_t_u_s(0x1BE15C8D, 5)), (safe_rshift_func_int8_t_s_s((g_48 != ((1 > 251U) | (l_141 <= l_99))), l_97)))) == 9)) ^ 0xE7)) == 0xACF152CE);
            for (l_141 = 0; (l_141 == (-26)); l_141 = safe_sub_func_uint8_t_u_u(l_141, 6))
            {
                uint32_t l_183 = 4294967291U;
                int32_t l_184 = 0x03707C23;
                int32_t l_185 = 0xC8F413EF;
                uint32_t l_204 = 0xF3380028;
                for (l_133 = 0; (l_133 <= 7); l_133 = safe_add_func_int8_t_s_s(l_133, 2))
                {
                    uint8_t l_158 = 0xA1;
                    int32_t l_181 = 1;
                    l_185 = ((l_158 || (safe_rshift_func_uint16_t_u_s((safe_rshift_func_int32_t_s_u((safe_mod_func_uint32_t_u_u(p_85, (p_85 ^ (safe_add_func_uint16_t_u_u((l_184 = (safe_add_func_uint8_t_u_u(((((((g_140 == ((safe_rshift_func_int32_t_s_s(0xD7CB0FD4, (safe_sub_func_uint8_t_u_u((p_85 && (safe_mod_func_int32_t_s_s(((safe_mul_func_int32_t_s_s((safe_mul_func_uint32_t_u_u((l_181 = (g_182 = ((safe_mul_func_int16_t_s_s((-2), (-8))) == l_181))), 8)), l_99)) & 0x0995), p_85))), g_94)))) <= 0x56C5)) <= 0U) == 0xF0A6BB71) | 1U) ^ 0xDE8C) || g_135), l_183))), l_183))))), l_141)), 7))) <= p_85);
                    ++g_186;
                }
                for (g_135 = 0; (g_135 != 0); g_135 = safe_add_func_uint8_t_u_u(g_135, 7))
                {
                    int32_t l_216 = (-4);
                    uint32_t l_282 = 4294967294U;
                    l_217 = (((~(safe_add_func_uint8_t_u_u((safe_div_func_int16_t_s_s((safe_div_func_uint32_t_u_u(((g_101 <= (safe_sub_func_uint8_t_u_u(0xA0, 0x96))) > (safe_add_func_int32_t_s_s(((safe_add_func_uint32_t_u_u((l_204 < (safe_mod_func_int16_t_s_s((safe_add_func_uint16_t_u_u((l_100 = ((((safe_unary_minus_func_uint16_t_u(p_85)) == ((safe_rshift_func_int32_t_s_u((l_99 &= 0xF62E77A0), (safe_mod_func_int32_t_s_s((g_182 != (p_85 & ((safe_add_func_uint32_t_u_u(l_100, p_85)) && 0x8291))), g_101)))) < l_133)) | 0x0514) <= 0xF7)), p_85)), (-1)))), g_48)) >= 0xF46C1DEF), 4294967295U))), l_216)), p_85)), g_101))) || g_140) && l_183);
                    if (((g_228 |= ((4294967295U && (((safe_sub_func_int32_t_s_s((~5), 0x44E1F5B4)) || 4294967291U) ^ (safe_sub_func_uint16_t_u_u(l_133, (p_85 > (!(g_41 == (g_186 ^= p_85)))))))) || (safe_mod_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(0U, p_85)), p_85)))) <= l_96))
                    {
                        uint8_t l_231 = 252U;
                        int32_t l_235 = 0x5C1886F3;
                        g_94 = (safe_rshift_func_int8_t_s_s(l_231, (p_85 >= l_217)));
                        g_182 = (safe_sub_func_uint16_t_u_u(p_85, 0x476E));
                        l_235 = (0xB1F273F2 != ((!g_94) && p_85));
                    }
                    else
                    {
                        int16_t l_259 = 0;
                        int32_t l_283 = 0x5399E5F1;
                        l_216 = ((safe_add_func_int32_t_s_s(5, ((g_186 && (safe_mod_func_uint8_t_u_u(g_186, ((((g_101 ^ (safe_unary_minus_func_int16_t_s(0))) | (l_98 = (safe_mul_func_int8_t_s_s((safe_unary_minus_func_int32_t_s(p_85)), (safe_mul_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u((g_134--), (l_250 > (l_133 |= ((((safe_add_func_int16_t_s_s((g_182 ^ 0x36), l_100)) < 0xBF) == p_85) | l_98))))), 0xAF)))))) <= p_85) && g_228)))) ^ g_48))) < g_41);
                        if (l_216)
                            continue;
                        l_283 ^= (((safe_mul_func_int8_t_s_s(g_186, (l_95 >= g_135))) & (+(safe_sub_func_uint16_t_u_u((~(l_259 == l_216)), (safe_add_func_int16_t_s_s((safe_rshift_func_int32_t_s_s((g_94 &= (((safe_mod_func_int32_t_s_s(((safe_sub_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((safe_mul_func_uint32_t_u_u((((g_182 && (g_186 >= (l_250 ^= (safe_lshift_func_uint16_t_u_s(((!l_216) == (safe_mul_func_int32_t_s_s((~((safe_add_func_int16_t_s_s((safe_add_func_uint8_t_u_u((l_98 || l_100), 0x68)), l_282)) | p_85)), 0xD401970B))), 0))))) <= g_48) < p_85), 0x97FD67A2)), l_95)), 0x8A)) ^ p_85), g_182)) <= p_85) <= l_141)), g_182)), l_96)))))) < l_282);
                        l_100 = ((safe_lshift_func_uint32_t_u_u((!(l_98 &= (safe_add_func_uint16_t_u_u(g_134, l_259)))), (safe_add_func_uint16_t_u_u((safe_div_func_uint16_t_u_u(((safe_sub_func_int32_t_s_s(p_85, (l_185 ^= (((safe_mul_func_uint32_t_u_u((p_85 >= (l_99 = p_85)), (safe_rshift_func_int32_t_s_u((l_216 = 0xAC62A2EA), 17)))) ^ (65535U >= (safe_mul_func_uint32_t_u_u(((safe_mul_func_uint8_t_u_u((((safe_lshift_func_int16_t_s_s(((g_186++) != 0x8B635356), 0)) > (~(g_309 |= (g_308 = g_48)))) & 1), g_41)) >= 4U), p_85)))) == l_97)))) || l_133), 0xD0DB)), 65534U)))) ^ p_85);
                    }
                    return l_95;
                }
                if (l_250)
                    continue;
                if (g_308)
                {
                    int32_t l_329 = 0x1A5B37FB;
                    ++g_311;
                    l_184 = (0x8B57 == (l_100 ^= (safe_mod_func_int32_t_s_s((safe_lshift_func_int16_t_s_u(g_41, p_85)), g_228))));
                    l_184 &= (0xE3 != ((safe_lshift_func_uint8_t_u_s((safe_mul_func_uint16_t_u_u(l_100, g_228)), (p_85 = p_85))) | (safe_lshift_func_uint8_t_u_s(l_133, ((3 || (g_140 > (-9))) >= ((!(((safe_mod_func_uint16_t_u_u((safe_rshift_func_int32_t_s_u((((g_135 < l_329) ^ 0x46) && 0xC3), l_250)), 0x7FE9)) & 0xCF50) & l_329)) && 0x46018AEF))))));
                }
                else
                {
                    int32_t l_343 = 0;
                    g_94 = (+(!(((0x89E38A55 && ((safe_lshift_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(((safe_rshift_func_int32_t_s_u(((p_85 > (g_228 | g_101)) < ((l_99 = (safe_lshift_func_int32_t_s_u(0x66632C65, ((safe_sub_func_uint16_t_u_u(((((6U == g_140) <= 0xD8) & (l_133 = ((0xFA || 0xE7) | g_182))) & g_41), (-1))) || 0x2BE5)))) == l_342)), p_85)) > g_182), l_343)), 7)) > 65535U)) == g_309) || p_85)));
                }
            }
        }
        else
        {
            return p_85;
        }
        g_94 = (safe_mod_func_int16_t_s_s(l_97, p_85));
        if (l_95)
            break;
    }
    --g_348;
    if (p_85)
    {
        int32_t l_351 = (-1);
        int32_t l_352 = 0x56744AC8;
        int32_t l_355 = 0xDC47B371;
        int32_t l_356 = 0x9FD15FEF;
        ++g_358;
        for (g_182 = 20; (g_182 < (-16)); g_182 = safe_sub_func_int32_t_s_s(g_182, 1))
        {
            int8_t l_390 = 0x64;
            int32_t l_426 = 0x03DBD97F;
            int32_t l_427 = 1;
            for (l_356 = (-10); (l_356 != (-16)); l_356 = safe_sub_func_int32_t_s_s(l_356, 6))
            {
                int16_t l_369 = 0x0280;
                uint32_t l_391 = 4294967295U;
                int32_t l_392 = 0xBCF4FF70;
                if ((safe_add_func_uint8_t_u_u((g_308 = ((l_392 = ((g_309 & (safe_mod_func_int16_t_s_s(l_369, (safe_lshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_u((safe_add_func_uint8_t_u_u(l_376, (((safe_lshift_func_uint16_t_u_u((l_355 < (safe_lshift_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(((p_85 = g_357) && l_369), (safe_mod_func_uint8_t_u_u((safe_unary_minus_func_uint8_t_u((g_358--))), g_308)))), (safe_lshift_func_int32_t_s_u((l_352 ^= (l_342 <= ((g_354 == l_390) || 0x5B27))), 9))))), 4)) & l_369) | 0x9EE9))), l_391)), 3))))) || g_140)) > 0x1D)), l_390)))
                {
                    int32_t l_406 = 0x9EE29C00;
                    int32_t l_425 = 0;
                    if ((safe_add_func_uint32_t_u_u((l_347 = (l_406 = (g_353 & ((l_392 ^ (safe_rshift_func_int16_t_s_u(((-4) <= l_397), (safe_rshift_func_int32_t_s_s(((safe_lshift_func_int32_t_s_u(p_85, ((safe_mul_func_int16_t_s_s(((p_85 ^ 0x2B) > ((safe_mul_func_int32_t_s_s((0x7A || ((0x0B18F1BF <= l_392) <= p_85)), g_348)) > g_134)), p_85)) == g_311))) >= g_311), p_85))))) == (-5))))), 0)))
                    {
                        int32_t l_414 = 0xF14C923D;
                        g_94 = (safe_sub_func_uint32_t_u_u((+(l_355 = ((l_98 == ((safe_mul_func_int8_t_s_s(p_85, g_354)) > (l_414 == ((safe_mul_func_int16_t_s_s((+g_309), (g_348 |= (l_427 = (((safe_div_func_int32_t_s_s(g_311, (+((safe_mod_func_int16_t_s_s(p_85, (safe_sub_func_int32_t_s_s(g_101, ((l_133 = (l_426 = ((l_425 = g_135) >= g_311))) >= l_406))))) == g_311)))) >= p_85) | 0x3274FA11))))) & 8)))) == p_85))), 4294967295U));
                        l_414 = g_101;
                    }
                    else
                    {
                        l_352 = (l_133 &= (safe_mul_func_uint16_t_u_u(65528U, ((safe_div_func_uint16_t_u_u((p_85 == (0x681A192B >= g_94)), ((p_85 < g_182) ^ (safe_sub_func_int32_t_s_s(1, ((safe_sub_func_uint32_t_u_u(l_356, (g_182 || p_85))) > p_85)))))) >= p_85))));
                    }
                }
                else
                {
                    l_133 = (safe_rshift_func_int8_t_s_u(g_48, (safe_mul_func_uint32_t_u_u((p_85 > l_355), ((((safe_sub_func_int32_t_s_s((g_467 &= (safe_rshift_func_uint16_t_u_u((l_392 = (safe_unary_minus_func_int32_t_s((safe_mod_func_uint32_t_u_u(((g_94 = (safe_sub_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s((1 < ((((safe_sub_func_int8_t_s_s((((safe_lshift_func_int16_t_s_u((~(g_309 || (l_392 & ((l_352 = (safe_lshift_func_int16_t_s_u((safe_lshift_func_int32_t_s_s((safe_add_func_int32_t_s_s((safe_unary_minus_func_uint16_t_u((safe_mul_func_uint8_t_u_u(((0x1B ^ 0xB6) | ((++g_186) & p_85)), g_353)))), l_356)), 18)), 10))) & p_85)))), l_390)) && 65534U) && g_358), p_85)) <= l_391) != p_85) >= 0x24)), 7)), l_390))) || 3), l_356))))), 10))), g_228)) == 0U) || p_85) <= 0xFF)))));
                }
                return g_467;
            }
        }
    }
    else
    {
        int16_t l_477 = 0x4A84;
        int32_t l_504 = 0xC71EBCF2;
        int32_t l_506 = 0xBA2EC1DA;
        for (l_397 = (-2); (l_397 == (-30)); l_397 = safe_sub_func_int8_t_s_s(l_397, 3))
        {
            int16_t l_482 = 0;
            for (g_353 = 0; (g_353 <= 22); g_353++)
            {
                uint8_t l_472 = 255U;
                --l_472;
                g_182 = g_182;
                g_483 = ((safe_mod_func_uint32_t_u_u(l_477, 0x4403DE6F)) & (safe_mod_func_uint32_t_u_u((safe_rshift_func_int32_t_s_s(l_482, 20)), 0x74A3EB68)));
            }
            l_506 = (((safe_div_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((p_85 <= (safe_rshift_func_uint32_t_u_s((((g_353 = (safe_mul_func_uint16_t_u_u((safe_unary_minus_func_int32_t_s((safe_unary_minus_func_uint8_t_u((l_482 && (safe_mod_func_int8_t_s_s((safe_lshift_func_uint32_t_u_s((safe_mul_func_uint8_t_u_u((0x2DD8 <= 0xAB7F), g_311)), 11)), p_85))))))), ((((safe_mod_func_uint8_t_u_u((g_48 || ((l_504 = ((g_134 && ((((((safe_rshift_func_uint16_t_u_u((p_85 > 0xB40D), 11)) & l_482) == 1) != 4294967295U) != g_353) > l_98)) | g_140)) && p_85)), l_482)) != 0x745BCA5C) >= 0xCD1CE3DA) == 0x631E)))) <= l_482) != g_505), 29))), l_482)), 0x75CB)) || p_85) < g_505);
            l_504 = g_467;
        }
        return l_98;
    }
    return l_95;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_41, "g_41", print_hash_value);
    transparent_crc(g_48, "g_48", print_hash_value);
    transparent_crc(g_94, "g_94", print_hash_value);
    transparent_crc(g_101, "g_101", print_hash_value);
    transparent_crc(g_134, "g_134", print_hash_value);
    transparent_crc(g_135, "g_135", print_hash_value);
    transparent_crc(g_140, "g_140", print_hash_value);
    transparent_crc(g_182, "g_182", print_hash_value);
    transparent_crc(g_186, "g_186", print_hash_value);
    transparent_crc(g_228, "g_228", print_hash_value);
    transparent_crc(g_308, "g_308", print_hash_value);
    transparent_crc(g_309, "g_309", print_hash_value);
    transparent_crc(g_311, "g_311", print_hash_value);
    transparent_crc(g_348, "g_348", print_hash_value);
    transparent_crc(g_353, "g_353", print_hash_value);
    transparent_crc(g_354, "g_354", print_hash_value);
    transparent_crc(g_357, "g_357", print_hash_value);
    transparent_crc(g_358, "g_358", print_hash_value);
    transparent_crc(g_467, "g_467", print_hash_value);
    transparent_crc(g_483, "g_483", print_hash_value);
    transparent_crc(g_505, "g_505", print_hash_value);
    transparent_crc(g_630, "g_630", print_hash_value);
    transparent_crc(g_634, "g_634", print_hash_value);
    transparent_crc(g_636, "g_636", print_hash_value);
    transparent_crc(g_642, "g_642", print_hash_value);
    transparent_crc(g_644, "g_644", print_hash_value);
    transparent_crc(g_647, "g_647", print_hash_value);
    transparent_crc(g_708, "g_708", print_hash_value);
    transparent_crc(g_728, "g_728", print_hash_value);
    transparent_crc(g_732, "g_732", print_hash_value);
    transparent_crc(g_737, "g_737", print_hash_value);
    transparent_crc(g_759, "g_759", print_hash_value);
    transparent_crc(g_775, "g_775", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
