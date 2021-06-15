#ifndef FR_H
#define FR_H
#include "ELiPS/bls12.h"
extern void fr_order_init();
extern void mpn_set_mpz_size(mp_limb_t *ans,mpz_t a,mp_size_t size);
extern int w_naf_frt(int *dw,mpz_t d,int w);
extern void fr_init(fr_t *A);
extern void mpz_set_fr(mpz_t ans,fr_t *a);
extern size_t fr_sizeinbase_2(fr_t *A);
extern void fr_printf(char *str,fr_t *A);
extern void fr_println(char *str,fr_t *A);
extern void fr_set(fr_t *ANS,fr_t *A);
extern void fr_set_ui(fr_t *ANS,unsigned long int UI);
extern void fr_set_mpn(fr_t *ANS,mp_limb_t *A);
extern void fr_mod(fr_t *ans,mp_limb_t *a,mp_size_t size_a);
extern void fr_add(fr_t *ANS,fr_t *A,fr_t *B);
extern void fr_mul(fr_t *ANS,fr_t *A,fr_t *B);
extern void fr_inv(fr_t *ANS,fr_t *A);
extern void fr_pow(fr_t *ANS,fr_t *A,mpz_t scalar);
extern void fr_sub(fr_t *ANS,fr_t *A,fr_t *B);
extern void fr_set_random(fr_t *ANS,gmp_randstate_t state);
extern void g1_init(g1_t *A);
extern void g1_printf(char *s,g1_t *A);
extern void g1_println(char *s,g1_t *A);
extern void g1_set(g1_t *ANS,g1_t *A);
extern int g1_cmp(g1_t *ANS,g1_t *A);
extern void g1_set_random(g1_t *ANS, gmp_randstate_t state);
extern int g1_cmp_efp12(g1_t *A, efp12_t *B);
extern void g1_ecd(g1_t *ANS,g1_t *P);
extern void g1_eca(g1_t *ANS,g1_t *P,g1_t *Q);
extern void g1_scm(g1_t *ANS,g1_t *P,fr_t *sca);
extern void g1_set_random_with_basepoint(g1_t *ANS,g1_t *basepoint, gmp_randstate_t state);
extern void g1_test(int scm);
extern void g1_set_random_schoolbook(g1_t *ANS, gmp_randstate_t state);
extern void g1_set_random_test(int scm);

extern void g2_init(g2_t *A);
extern void g2_printf(char *s,g2_t *A);
extern void g2_println(char *s,g2_t *A);
extern void g2_set(g2_t *ANS,g2_t *A);
extern void g2_set_random(g2_t *ANS, gmp_randstate_t state);
extern int g2_cmp_efp12(g2_t *A, efp12_t *B);
extern void g2_ecd(g2_t *ANS,g2_t *Q);
extern void g2_eca(g2_t *ANS,g2_t *P,g2_t *Q);
extern void g2_scm(g2_t *ANS,g2_t *Q,fr_t *sca);
extern void g2_set_random_with_basepoint(g2_t *ANS,g2_t *basepoint, gmp_randstate_t state);
extern int g2_cmp(g2_t *A,g2_t *B);

extern void g2_test(int scm);
extern void g3_init(g3_t *A);
extern void g3_set(g3_t *A,g3_t *B);
extern int g3_cmp(g3_t *A,g3_t *B);
extern void g3_mul(g3_t *ANS,g3_t *A,g3_t *B);
extern void g3_sqr(g3_t *ANS,g3_t *A);
extern void g3_exp(g3_t *ANS,g3_t *A,fr_t *sca);
extern void g3_inv(g3_t *ANS,g3_t *A);
extern void g3_printf(char *s,g3_t *A);
extern void g3_println(char *s,g3_t *A);
extern void g1g2_to_g3_miller_algo(g3_t *ANS,g1_t *P,g2_t *Q);
extern void g1g2_to_g3_miller_algo_affine(g3_t *ANS,g1_t *P,g2_t *Q);
extern void g1g2_to_g3_hardpart(fp12_t *ANS, fp12_t *A);
extern void g1g2_to_g3_final_exp(g3_t *ANS,g3_t *A);
extern void g1g2_to_g3_pairing(g3_t *ANS,g1_t *P,g2_t *Q);
extern void g1g2_to_g3_pairing_affine(g3_t *ANS,g1_t *P,g2_t *Q);
extern int debug_pairing(int pairing);
extern void billinear_test();
extern void g3_test(int exp);
#endif
