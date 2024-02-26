 typedef signed char __int8_t;
  typedef unsigned char __uint8_t;
  typedef signed short int __int16_t;
  typedef unsigned short int __uint16_t;
  typedef signed int __int32_t;
  typedef unsigned int __uint32_t;
  typedef long int __off_t;
  typedef __int8_t int8_t;
  typedef __int16_t int16_t;
  typedef __int32_t int32_t;
  typedef __uint8_t uint8_t;
  typedef __uint16_t uint16_t;
  typedef __uint32_t uint32_t;
  typedef struct {
   int __count;
   union   {     unsigned int __wch;     char __wchb[4];   }
 __value;
 }
  __mbstate_t;
  typedef struct _G_fpos_t {
   __off_t __pos;
   __mbstate_t __state;
 }
  __fpos_t;
                      extern int printf (const char *__restrict __format, ...);
             static void platform_main_begin(void) {
 }
  static void platform_main_end(uint32_t crc, int flag) {
  printf ("checksum = %X\n", crc);
 }
     static int8_t (safe_mul_func_int8_t_s_s)(int8_t si1, int8_t si2 ) {
   return     si1 * si2;
 }
  static int8_t (safe_mod_func_int8_t_s_s)(int8_t si1, int8_t si2 ) {
   return     ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?     ((si1)) :     (si1 % si2);
 }
   static int8_t (safe_lshift_func_int8_t_s_s)(int8_t left, int right ) {
   return     ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((127) >> ((int)right)))) ?     ((left)) :     (left << ((int)right));
 }
  static int8_t (safe_lshift_func_int8_t_s_u)(int8_t left, unsigned int right ) {
   return     ((left < 0) || (((unsigned int)right) >= 32) || (left > ((127) >> ((unsigned int)right)))) ?     ((left)) :     (left << ((unsigned int)right));
 }
  static int8_t (safe_rshift_func_int8_t_s_s)(int8_t left, int right ) {
   return     ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?     ((left)) :     (left >> ((int)right));
 }
  static int8_t (safe_rshift_func_int8_t_s_u)(int8_t left, unsigned int right ) {
   return     ((left < 0) || (((unsigned int)right) >= 32)) ?     ((left)) :     (left >> ((unsigned int)right));
 }
  static int16_t (safe_unary_minus_func_int16_t_s)(int16_t si ) {
   return     -si;
 }
  static int16_t (safe_add_func_int16_t_s_s)(int16_t si1, int16_t si2 ) {
   return     (si1 + si2);
 }
  static int16_t (safe_sub_func_int16_t_s_s)(int16_t si1, int16_t si2 ) {
   return     (si1 - si2);
 }
  static int16_t (safe_mul_func_int16_t_s_s)(int16_t si1, int16_t si2 ) {
   return     si1 * si2;
 }
  static int16_t (safe_mod_func_int16_t_s_s)(int16_t si1, int16_t si2 ) {
   return     ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?     ((si1)) :     (si1 % si2);
 }
   static int16_t (safe_lshift_func_int16_t_s_s)(int16_t left, int right ) {
   return     ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((32767) >> ((int)right)))) ?     ((left)) :     (left << ((int)right));
 }
  static int16_t (safe_lshift_func_int16_t_s_u)(int16_t left, unsigned int right ) {
   return     ((left < 0) || (((unsigned int)right) >= 32) || (left > ((32767) >> ((unsigned int)right)))) ?     ((left)) :     (left << ((unsigned int)right));
 }
   static int16_t (safe_rshift_func_int16_t_s_u)(int16_t left, unsigned int right ) {
   return     ((left < 0) || (((unsigned int)right) >= 32)) ?     ((left)) :     (left >> ((unsigned int)right));
 }
   static int32_t (safe_add_func_int32_t_s_s)(int32_t si1, int32_t si2 ) {
   return     (((si1>0) && (si2>0) && (si1 > ((2147483647)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-2147483647-1)-si2)))) ?     ((si1)) :     (si1 + si2);
 }
  static int32_t (safe_sub_func_int32_t_s_s)(int32_t si1, int32_t si2 ) {
   return     (((si1^si2) & (((si1 ^ ((si1^si2) & (~(2147483647))))-si2)^si2)) < 0) ?     ((si1)) :     (si1 - si2);
 }
          static uint8_t (safe_add_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 ) {
   return ui1 + ui2;
 }
  static uint8_t (safe_sub_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 ) {
   return ui1 - ui2;
 }
  static uint8_t (safe_mul_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 ) {
   return ((unsigned int)ui1) * ((unsigned int)ui2);
 }
  static uint8_t (safe_mod_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 ) {
   return     (ui2 == 0) ?     ((ui1)) :     (ui1 % ui2);
 }
   static uint8_t (safe_lshift_func_uint8_t_u_s)(uint8_t left, int right ) {
   return     ((((int)right) < 0) || (((int)right) >= 32) || (left > ((255) >> ((int)right)))) ?     ((left)) :     (left << ((int)right));
 }
   static uint8_t (safe_rshift_func_uint8_t_u_s)(uint8_t left, int right ) {
   return     ((((int)right) < 0) || (((int)right) >= 32)) ?     ((left)) :     (left >> ((int)right));
 }
  static uint8_t (safe_rshift_func_uint8_t_u_u)(uint8_t left, unsigned int right ) {
   return     (((unsigned int)right) >= 32) ?     ((left)) :     (left >> ((unsigned int)right));
 }
   static uint16_t (safe_add_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 ) {
   return ui1 + ui2;
 }
  static uint16_t (safe_sub_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 ) {
   return ui1 - ui2;
 }
  static uint16_t (safe_mul_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 ) {
   return ((unsigned int)ui1) * ((unsigned int)ui2);
 }
  static uint16_t (safe_mod_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 ) {
   return     (ui2 == 0) ?     ((ui1)) :     (ui1 % ui2);
 }
   static uint16_t (safe_lshift_func_uint16_t_u_s)(uint16_t left, int right ) {
   return     ((((int)right) < 0) || (((int)right) >= 32) || (left > ((65535) >> ((int)right)))) ?     ((left)) :     (left << ((int)right));
 }
  static uint16_t (safe_lshift_func_uint16_t_u_u)(uint16_t left, unsigned int right ) {
   return     ((((unsigned int)right) >= 32) || (left > ((65535) >> ((unsigned int)right)))) ?     ((left)) :     (left << ((unsigned int)right));
 }
  static uint16_t (safe_rshift_func_uint16_t_u_s)(uint16_t left, int right ) {
   return     ((((int)right) < 0) || (((int)right) >= 32)) ?     ((left)) :     (left >> ((int)right));
 }
  static uint16_t (safe_rshift_func_uint16_t_u_u)(uint16_t left, unsigned int right ) {
   return     (((unsigned int)right) >= 32) ?     ((left)) :     (left >> ((unsigned int)right));
 }
   static uint32_t (safe_add_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 ) {
   return ui1 + ui2;
 }
  static uint32_t (safe_sub_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 ) {
   return ui1 - ui2;
 }
   static uint32_t (safe_mod_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 ) {
   return     (ui2 == 0) ?     ((ui1)) :     (ui1 % ui2);
 }
    volatile uint32_t csmith_sink_ = 0;
  struct S0 {
    uint32_t f0;
    uint16_t f1;
    uint32_t f2;
 };
  static uint16_t g_12 = 0x095A;
  static int32_t g_32 = (-1);
  static uint32_t g_36 = 8U;
  static uint8_t g_40 = 0U;
  static uint32_t g_47 = 0x3BB1D441;
  static int32_t g_64 = 0;
  static uint16_t g_80 = 0xF75F;
  static uint32_t g_117 = 0xE4C4DC47;
  static struct S0 g_154 = {
4294967295U,0U,0x099EBF92};
  static int32_t g_161 = 8;
  static uint32_t g_268 = 4294967286U;
  static int32_t g_324 = 6;
  static struct S0 g_328 = {
0x810F8373,1U,3U};
  static uint16_t g_331 = 9U;
  static int32_t g_350 = 0x1962AD8F;
  static uint32_t g_351 = 0xDB0E1881;
  static uint8_t g_368 = 0x0F;
  inline static int32_t func_2(int32_t p_3, uint32_t p_4);
  inline static int16_t func_9(int16_t p_10, uint8_t p_11);
  inline static int16_t func_13(uint8_t p_14, uint32_t p_15, int8_t p_16);
  static uint32_t func_21(uint32_t p_22, uint8_t p_23, int32_t p_24, uint8_t p_25);
  static uint8_t func_65(struct S0 p_66, int16_t p_67, int32_t p_68);
  static struct S0 func_69(uint32_t p_70, struct S0 p_71, struct S0 p_72, struct S0 p_73, int8_t p_74);
  inline static struct S0 func_75(uint16_t p_76, uint32_t p_77, uint32_t p_78, uint8_t p_79);
  inline static uint32_t func_85(uint16_t p_86, uint8_t p_87, int32_t p_88, uint32_t p_89, int16_t p_90);
  inline static uint8_t func_93(uint32_t p_94);
  inline static int8_t func_1(void) {
     int16_t l_5 = 8;
     uint32_t l_28 = 4294967295U;
     uint32_t l_31 = 1U;
     uint32_t l_39 = 0x525C7E4D;
     struct S0 l_354 = {0x7B4EDF28,0x20CE,0xA13B96F8};
     int32_t l_357 = 0x250DD05D;
     int32_t l_358 = 1;
     int32_t l_359 = 0xF49D43D7;
     uint32_t l_363 = 0x47BD279F;
     int32_t l_366 = 6;
     g_350 = func_2(l_5, (~(safe_mul_func_int16_t_s_s((func_9((g_12 ^ ((((func_13((safe_mul_func_uint8_t_u_u((((safe_rshift_func_uint16_t_u_s((func_21(l_5, (safe_sub_func_uint8_t_u_u(((l_28 && ((l_28 < g_12) != l_28)) > (((((safe_add_func_uint16_t_u_u((l_31 != g_12), l_28)) <= 0xF7) <= g_12) != g_12) && l_28)), g_12)), l_5, l_28) <= l_5), 15)) ^ l_31) <= l_28), 255U)), g_12, l_39) > l_5) != l_28) || 3) && 0x26315BFE)), l_5) <= g_12), g_32))));
     l_354 = l_354;
     return l_28;
 }
  inline static int32_t func_2(int32_t p_3, uint32_t p_4) {
     uint32_t l_63 = 0x7E08A84A;
     ++g_351;
     return p_3;
 }
  inline static int16_t func_9(int16_t p_10, uint8_t p_11) {
     uint32_t l_57 = 0xDEEA39BA;
     uint8_t l_60 = 0xAD;
     l_60 = (~((safe_lshift_func_uint8_t_u_s((safe_sub_func_int32_t_s_s(((safe_sub_func_uint32_t_u_u(l_57, (safe_add_func_int32_t_s_s((((l_57 & g_47) | l_57) != 7U), ((((0x34EC < (g_32 & (func_21(func_21(g_32, p_11, p_10, g_47), g_32, g_12, p_11) || (-1)))) < (-5)) == g_47) != p_10))))) || 0x44), g_12)), 4)) || p_10));
     return p_11;
 }
  inline static int16_t func_13(uint8_t p_14, uint32_t p_15, int8_t p_16) {
     --g_40;
     --g_47;
     return g_47;
 }
  static uint32_t func_21(uint32_t p_22, uint8_t p_23, int32_t p_24, uint8_t p_25) {
     int16_t l_33 = 0xEF9F;
     g_36++;
     return g_32;
 }
  static uint8_t func_65(struct S0 p_66, int16_t p_67, int32_t p_68) {
     return p_67;
 }
  static struct S0 func_69(uint32_t p_70, struct S0 p_71, struct S0 p_72, struct S0 p_73, int8_t p_74) {
     int32_t l_329 = (-1);
     int32_t l_330 = (-1);
     struct S0 l_334 = {4294967294U,0x69CB,4294967295U};
     ++g_331;
     return l_334;
 }
  inline static struct S0 func_75(uint16_t p_76, uint32_t p_77, uint32_t p_78, uint8_t p_79) {
     uint8_t l_279 = 0x30;
     int32_t l_305 = (-1);
     struct S0 l_326 = {0xCF8AAB92,3U,1U};
     for (g_268 = 0;
 (g_268 > 54);
 g_268 = safe_add_func_int32_t_s_s(g_268, 8))     {         uint16_t l_288 = 65535U;         uint16_t l_289 = 0x2312;         uint32_t l_304 = 4294967295U;         uint8_t l_322 = 0xC6;         struct S0 l_325 = {0x6C1B368D,0x6DCF,1U};         if ((((safe_add_func_uint32_t_u_u(((((l_279 > (-5)) != 0x7984) != (p_79 <= (safe_sub_func_uint8_t_u_u((((safe_lshift_func_int16_t_s_s((((((-1) < p_77) & ((safe_mod_func_uint8_t_u_u(g_154.f0, ((safe_add_func_uint16_t_u_u(l_288, (g_117 == l_288))) ^ p_77))) || 0x4136)) ^ l_288) <= (-1)), 11)) && p_77) | 4), 0xA6)))) == l_279), 0xABA6458F)) || g_64) & l_289))         {             int32_t l_299 = 0;             l_305 = (((safe_lshift_func_uint16_t_u_u(7U, 10)) >= (safe_rshift_func_int16_t_s_u((safe_sub_func_int32_t_s_s((safe_sub_func_uint8_t_u_u(((g_161 == (+((g_32 && ((p_77 ^ l_299) > (((((-1) <= (safe_mul_func_int8_t_s_s(l_288, (4294967295U >= (safe_sub_func_uint16_t_u_u((l_299 > p_77), p_78)))))) | 0x0B06) >= l_299) == l_288))) ^ g_40))) & p_76), l_299)), l_299)), 13))) == l_304);         }         else         {             uint32_t l_308 = 4294967292U;             l_305 ^= 0;             for (p_76 = 0; (p_76 != 36); p_76 = safe_add_func_int16_t_s_s(p_76, 3))             {                 int16_t l_323 = (-7);                 g_64 &= (((l_308 | (safe_lshift_func_uint16_t_u_u(5U, 3))) != ((l_308 >= ((+(-1)) && 0)) && 249U)) <= ((((0U | (safe_lshift_func_int16_t_s_u(p_77, ((safe_add_func_int32_t_s_s((safe_mod_func_int8_t_s_s((((safe_sub_func_uint32_t_u_u(((safe_mul_func_uint8_t_u_u((l_322 == l_323), l_305)) <= p_78), g_268)) > p_76) >= g_324), g_117)), g_154.f0)) || g_36)))) || l_308) > 249U) >= l_304));                 return l_325;             }         }     }
     return l_326;
 }
  inline static uint32_t func_85(uint16_t p_86, uint8_t p_87, int32_t p_88, uint32_t p_89, int16_t p_90) {
     struct S0 l_261 = {1U,1U,0x2BB30659};
     int32_t l_262 = 0x19E0181D;
     int32_t l_263 = 0x28DD6C4D;
     for (g_161 = 0;
 (g_161 < (-10));
 g_161 = safe_sub_func_uint8_t_u_u(g_161, 3))     {         g_64 = (safe_rshift_func_uint16_t_u_u(4U, 3));         g_64 &= ((p_90 >= 0x70) < p_86);     }
     l_263 = p_89;
     return p_89;
 }
  inline static uint8_t func_93(uint32_t p_94) {
     int8_t l_112 = 0;
     struct S0 l_124 = {0x3D8BAA40,65535U,0x5741E934};
     int32_t l_136 = 1;
     int32_t l_227 = 0x2E05E156;
     if ((safe_lshift_func_uint16_t_u_u(((~g_64) > (safe_rshift_func_uint16_t_u_s(((((safe_rshift_func_uint8_t_u_s((((65528U > (safe_mul_func_int16_t_s_s((((((p_94 && (safe_mul_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_u((safe_add_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((1U <= (l_112 <= (safe_mul_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(g_117, (l_112 && ((((safe_add_func_uint32_t_u_u((+l_112), (g_40 < p_94))) < p_94) >= 1) <= (-6))))), p_94)))), p_94)), l_112)), p_94)) <= 9U), g_32))) | p_94) ^ g_12) || p_94) | 1U), p_94))) & l_112) || g_117), 6)) == p_94) ^ 0x1811) > 1U), p_94))), 6)))     {         struct S0 l_123 = {4294967295U,5U,0xB90776C5};         l_124 = l_123;     }
     else     {         int16_t l_131 = 0x3435;         uint32_t l_152 = 0x7404BFF7;         int32_t l_181 = (-9);         if ((safe_add_func_uint32_t_u_u(p_94, (safe_mul_func_int16_t_s_s(((((safe_mod_func_uint8_t_u_u(l_131, (safe_mul_func_int8_t_s_s(1, l_131)))) ^ ((((0x4590 > 0xCEAE) | g_64) < 0x1DBE) ^ (safe_add_func_uint8_t_u_u(p_94, p_94)))) <= l_124.f0) <= 1), 0xE26A)))))         {             uint16_t l_137 = 65528U;             int32_t l_153 = 4;             l_137--;             l_153 = (safe_lshift_func_int8_t_s_u((((!l_124.f1) < ((safe_rshift_func_uint16_t_u_u(((safe_add_func_uint8_t_u_u(((0x3BE1 < g_80) | (((safe_unary_minus_func_int16_t_s(0x85D1)) > (safe_sub_func_int16_t_s_s(l_137, (0x9B5C0F6D || g_40)))) > (safe_mul_func_uint8_t_u_u((4U || (0x4E21 == 2U)), l_152)))), p_94)) != 0x22), 7)) < g_47)) != g_64), l_137));             g_154 = g_154;             g_161 ^= (((((safe_lshift_func_int8_t_s_u(p_94, 3)) == (((-1) > l_131) != (g_12 | (p_94 <= p_94)))) && 0xA4FE) != ((0x7991 & (safe_sub_func_int32_t_s_s(g_64, g_12))) && g_64)) > p_94);         }         else         {             uint32_t l_180 = 0x8C38B956;             int32_t l_224 = (-1);             int32_t l_225 = 0x13F8C49F;             for (p_94 = 0; (p_94 == 40); p_94 = safe_add_func_int32_t_s_s(p_94, 9))             {                 uint8_t l_179 = 0U;                 int32_t l_226 = 0xD2CF262F;                 l_181 ^= (g_80 && (safe_mod_func_uint32_t_u_u(2U, (l_152 & ((((safe_add_func_int16_t_s_s(((8 | (((safe_add_func_uint32_t_u_u((((0xAD < p_94) || (safe_mod_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_s(p_94, (safe_mul_func_uint16_t_u_u((p_94 == (((!((l_179 < g_80) | l_124.f1)) || 1) > 0x5F64)), 4)))), 13)), p_94))) >= l_136), g_154.f0)) != l_179) == p_94)) > 0xF159), 65526U)) >= 0x85599064) > l_180) < p_94)))));                 if (g_40)                     continue;                 if (p_94)                 {                     int16_t l_200 = 1;                     l_200 ^= (safe_add_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(((((safe_lshift_func_uint8_t_u_s(((safe_mod_func_uint32_t_u_u(g_161, (safe_mod_func_int8_t_s_s(p_94, 247U)))) | (g_40 >= l_180)), 2)) || l_124.f2) ^ (safe_lshift_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(l_180, (safe_sub_func_int16_t_s_s((p_94 < l_179), l_179)))), p_94)), 6))) < 0U), g_161)), 0x21A7));                 }                 else                 {                     uint8_t l_205 = 1U;                     int32_t l_223 = (-2);                     int32_t l_228 = 0xED5062BB;                     l_181 ^= (p_94 ^ ((g_154.f1 <= ((((safe_add_func_int16_t_s_s(((g_12 ^ ((0xB2C9 != (p_94 || l_205)) < (l_180 >= (((safe_mod_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((0xE63DA663 ^ 2), 4)), p_94)) & g_154.f0) & g_154.f1)))) ^ 65535U), l_124.f2)) && g_40) || l_131) <= 0x86CCD6D7)) & g_47));                     if ((((((+l_179) & g_64) != (g_47 >= (safe_sub_func_uint32_t_u_u(g_117, l_131)))) && (safe_sub_func_int32_t_s_s(g_154.f1, ((safe_mul_func_int8_t_s_s(((g_161 ^ ((((safe_lshift_func_uint16_t_u_s((safe_mod_func_int16_t_s_s((g_40 | p_94), l_136)), p_94)) == 2) == l_205) > l_124.f2)) != g_80), 0x12)) & g_47)))) == 1))                     {                         uint32_t l_229 = 4294967295U;                         l_229++;                         return p_94;                     }                     else                     {                         return l_223;                     }                 }                 for (l_224 = 7; (l_224 <= (-3)); --l_224)                 {                     int32_t l_244 = 0xB8F3440F;                     int16_t l_256 = 0xE1CC;                     l_256 ^= (safe_lshift_func_uint16_t_u_u((0x4F < ((safe_lshift_func_int16_t_s_s((safe_add_func_uint16_t_u_u(((safe_add_func_int32_t_s_s(((g_64 < (safe_add_func_int16_t_s_s(g_32, l_244))) < (((+(p_94 || (((safe_mul_func_int8_t_s_s((((safe_add_func_int16_t_s_s(g_154.f2, 0)) || (((((8 & ((((safe_mod_func_int8_t_s_s(((((safe_add_func_uint32_t_u_u((((safe_add_func_int16_t_s_s(((((((0x85E3D3FF != p_94) < 0x8B82) >= p_94) < 7) & 255U) || 1U), (-5))) | l_180) || p_94), l_179)) && l_124.f2) | g_47) && 0x32E1), 9)) == p_94) > 65535U) >= l_225)) <= 0x17) >= g_80) & g_154.f0) > g_64)) | l_227), l_244)) | 0x16D9) > l_131))) || g_161) ^ 0xE14C)), (-6))) ^ g_40), l_244)), g_40)) || p_94)), l_124.f0));                 }             }         }         l_181 = (safe_add_func_int32_t_s_s(l_136, (safe_add_func_int32_t_s_s((-1), p_94))));     }
     return p_94;
 }
  int main (void) {
     func_1();
     csmith_sink_ = g_12;
     csmith_sink_ = g_32;
     csmith_sink_ = g_36;
     csmith_sink_ = g_40;
     csmith_sink_ = g_47;
     csmith_sink_ = g_368;
     platform_main_end(0,0);
     return 0;
 }
