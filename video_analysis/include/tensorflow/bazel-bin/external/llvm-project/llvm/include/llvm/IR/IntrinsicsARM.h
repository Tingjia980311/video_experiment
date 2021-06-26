/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Intrinsic Function Source Fragment                                         *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifndef LLVM_IR_INTRINSIC_ARM_ENUMS_H
#define LLVM_IR_INTRINSIC_ARM_ENUMS_H

namespace llvm {
namespace Intrinsic {
enum ARMIntrinsics : unsigned {
// Enum values for intrinsics
    arm_cdp = 1689,                                   // llvm.arm.cdp
    arm_cdp2,                                  // llvm.arm.cdp2
    arm_clrex,                                 // llvm.arm.clrex
    arm_cls,                                   // llvm.arm.cls
    arm_cls64,                                 // llvm.arm.cls64
    arm_cmse_tt,                               // llvm.arm.cmse.tt
    arm_cmse_tta,                              // llvm.arm.cmse.tta
    arm_cmse_ttat,                             // llvm.arm.cmse.ttat
    arm_cmse_ttt,                              // llvm.arm.cmse.ttt
    arm_crc32b,                                // llvm.arm.crc32b
    arm_crc32cb,                               // llvm.arm.crc32cb
    arm_crc32ch,                               // llvm.arm.crc32ch
    arm_crc32cw,                               // llvm.arm.crc32cw
    arm_crc32h,                                // llvm.arm.crc32h
    arm_crc32w,                                // llvm.arm.crc32w
    arm_dbg,                                   // llvm.arm.dbg
    arm_dmb,                                   // llvm.arm.dmb
    arm_dsb,                                   // llvm.arm.dsb
    arm_get_fpscr,                             // llvm.arm.get.fpscr
    arm_gnu_eabi_mcount,                       // llvm.arm.gnu.eabi.mcount
    arm_hint,                                  // llvm.arm.hint
    arm_isb,                                   // llvm.arm.isb
    arm_ldaex,                                 // llvm.arm.ldaex
    arm_ldaexd,                                // llvm.arm.ldaexd
    arm_ldc,                                   // llvm.arm.ldc
    arm_ldc2,                                  // llvm.arm.ldc2
    arm_ldc2l,                                 // llvm.arm.ldc2l
    arm_ldcl,                                  // llvm.arm.ldcl
    arm_ldrex,                                 // llvm.arm.ldrex
    arm_ldrexd,                                // llvm.arm.ldrexd
    arm_mcr,                                   // llvm.arm.mcr
    arm_mcr2,                                  // llvm.arm.mcr2
    arm_mcrr,                                  // llvm.arm.mcrr
    arm_mcrr2,                                 // llvm.arm.mcrr2
    arm_mrc,                                   // llvm.arm.mrc
    arm_mrc2,                                  // llvm.arm.mrc2
    arm_mrrc,                                  // llvm.arm.mrrc
    arm_mrrc2,                                 // llvm.arm.mrrc2
    arm_mve_abd_predicated,                    // llvm.arm.mve.abd.predicated
    arm_mve_abs_predicated,                    // llvm.arm.mve.abs.predicated
    arm_mve_add_predicated,                    // llvm.arm.mve.add.predicated
    arm_mve_and_predicated,                    // llvm.arm.mve.and.predicated
    arm_mve_asrl,                              // llvm.arm.mve.asrl
    arm_mve_bic_predicated,                    // llvm.arm.mve.bic.predicated
    arm_mve_cls_predicated,                    // llvm.arm.mve.cls.predicated
    arm_mve_clz_predicated,                    // llvm.arm.mve.clz.predicated
    arm_mve_eor_predicated,                    // llvm.arm.mve.eor.predicated
    arm_mve_hadd_predicated,                   // llvm.arm.mve.hadd.predicated
    arm_mve_hsub_predicated,                   // llvm.arm.mve.hsub.predicated
    arm_mve_lsll,                              // llvm.arm.mve.lsll
    arm_mve_max_predicated,                    // llvm.arm.mve.max.predicated
    arm_mve_maxv_s,                            // llvm.arm.mve.maxv.s
    arm_mve_maxv_u,                            // llvm.arm.mve.maxv.u
    arm_mve_min_predicated,                    // llvm.arm.mve.min.predicated
    arm_mve_minv_s,                            // llvm.arm.mve.minv.s
    arm_mve_minv_u,                            // llvm.arm.mve.minv.u
    arm_mve_mul_predicated,                    // llvm.arm.mve.mul.predicated
    arm_mve_mulh_predicated,                   // llvm.arm.mve.mulh.predicated
    arm_mve_mull_int_predicated,               // llvm.arm.mve.mull.int.predicated
    arm_mve_mull_poly_predicated,              // llvm.arm.mve.mull.poly.predicated
    arm_mve_mvn_predicated,                    // llvm.arm.mve.mvn.predicated
    arm_mve_neg_predicated,                    // llvm.arm.mve.neg.predicated
    arm_mve_orn_predicated,                    // llvm.arm.mve.orn.predicated
    arm_mve_orr_predicated,                    // llvm.arm.mve.orr.predicated
    arm_mve_pred_i2v,                          // llvm.arm.mve.pred.i2v
    arm_mve_pred_v2i,                          // llvm.arm.mve.pred.v2i
    arm_mve_qabs_predicated,                   // llvm.arm.mve.qabs.predicated
    arm_mve_qadd_predicated,                   // llvm.arm.mve.qadd.predicated
    arm_mve_qdmulh_predicated,                 // llvm.arm.mve.qdmulh.predicated
    arm_mve_qneg_predicated,                   // llvm.arm.mve.qneg.predicated
    arm_mve_qrdmulh_predicated,                // llvm.arm.mve.qrdmulh.predicated
    arm_mve_qsub_predicated,                   // llvm.arm.mve.qsub.predicated
    arm_mve_rhadd_predicated,                  // llvm.arm.mve.rhadd.predicated
    arm_mve_rmulh_predicated,                  // llvm.arm.mve.rmulh.predicated
    arm_mve_shl_imm_predicated,                // llvm.arm.mve.shl.imm.predicated
    arm_mve_shr_imm_predicated,                // llvm.arm.mve.shr.imm.predicated
    arm_mve_sqrshr,                            // llvm.arm.mve.sqrshr
    arm_mve_sqrshrl,                           // llvm.arm.mve.sqrshrl
    arm_mve_sqshl,                             // llvm.arm.mve.sqshl
    arm_mve_sqshll,                            // llvm.arm.mve.sqshll
    arm_mve_srshr,                             // llvm.arm.mve.srshr
    arm_mve_srshrl,                            // llvm.arm.mve.srshrl
    arm_mve_sub_predicated,                    // llvm.arm.mve.sub.predicated
    arm_mve_uqrshl,                            // llvm.arm.mve.uqrshl
    arm_mve_uqrshll,                           // llvm.arm.mve.uqrshll
    arm_mve_uqshl,                             // llvm.arm.mve.uqshl
    arm_mve_uqshll,                            // llvm.arm.mve.uqshll
    arm_mve_urshr,                             // llvm.arm.mve.urshr
    arm_mve_urshrl,                            // llvm.arm.mve.urshrl
    arm_mve_vabav,                             // llvm.arm.mve.vabav
    arm_mve_vabav_predicated,                  // llvm.arm.mve.vabav.predicated
    arm_mve_vabd,                              // llvm.arm.mve.vabd
    arm_mve_vadc,                              // llvm.arm.mve.vadc
    arm_mve_vadc_predicated,                   // llvm.arm.mve.vadc.predicated
    arm_mve_vbrsr,                             // llvm.arm.mve.vbrsr
    arm_mve_vbrsr_predicated,                  // llvm.arm.mve.vbrsr.predicated
    arm_mve_vcaddq,                            // llvm.arm.mve.vcaddq
    arm_mve_vcaddq_predicated,                 // llvm.arm.mve.vcaddq.predicated
    arm_mve_vcls,                              // llvm.arm.mve.vcls
    arm_mve_vcmlaq,                            // llvm.arm.mve.vcmlaq
    arm_mve_vcmlaq_predicated,                 // llvm.arm.mve.vcmlaq.predicated
    arm_mve_vcmulq,                            // llvm.arm.mve.vcmulq
    arm_mve_vcmulq_predicated,                 // llvm.arm.mve.vcmulq.predicated
    arm_mve_vctp16,                            // llvm.arm.mve.vctp16
    arm_mve_vctp32,                            // llvm.arm.mve.vctp32
    arm_mve_vctp64,                            // llvm.arm.mve.vctp64
    arm_mve_vctp8,                             // llvm.arm.mve.vctp8
    arm_mve_vcvt_fix,                          // llvm.arm.mve.vcvt.fix
    arm_mve_vcvt_fix_predicated,               // llvm.arm.mve.vcvt.fix.predicated
    arm_mve_vcvt_fp_int_predicated,            // llvm.arm.mve.vcvt.fp.int.predicated
    arm_mve_vcvt_narrow,                       // llvm.arm.mve.vcvt.narrow
    arm_mve_vcvt_narrow_predicated,            // llvm.arm.mve.vcvt.narrow.predicated
    arm_mve_vddup,                             // llvm.arm.mve.vddup
    arm_mve_vddup_predicated,                  // llvm.arm.mve.vddup.predicated
    arm_mve_vdwdup,                            // llvm.arm.mve.vdwdup
    arm_mve_vdwdup_predicated,                 // llvm.arm.mve.vdwdup.predicated
    arm_mve_vhadd,                             // llvm.arm.mve.vhadd
    arm_mve_vhsub,                             // llvm.arm.mve.vhsub
    arm_mve_vidup,                             // llvm.arm.mve.vidup
    arm_mve_vidup_predicated,                  // llvm.arm.mve.vidup.predicated
    arm_mve_viwdup,                            // llvm.arm.mve.viwdup
    arm_mve_viwdup_predicated,                 // llvm.arm.mve.viwdup.predicated
    arm_mve_vld2q,                             // llvm.arm.mve.vld2q
    arm_mve_vld4q,                             // llvm.arm.mve.vld4q
    arm_mve_vldr_gather_base,                  // llvm.arm.mve.vldr.gather.base
    arm_mve_vldr_gather_base_predicated,       // llvm.arm.mve.vldr.gather.base.predicated
    arm_mve_vldr_gather_base_wb,               // llvm.arm.mve.vldr.gather.base.wb
    arm_mve_vldr_gather_base_wb_predicated,    // llvm.arm.mve.vldr.gather.base.wb.predicated
    arm_mve_vldr_gather_offset,                // llvm.arm.mve.vldr.gather.offset
    arm_mve_vldr_gather_offset_predicated,     // llvm.arm.mve.vldr.gather.offset.predicated
    arm_mve_vmaxa_predicated,                  // llvm.arm.mve.vmaxa.predicated
    arm_mve_vmaxnma_predicated,                // llvm.arm.mve.vmaxnma.predicated
    arm_mve_vmina_predicated,                  // llvm.arm.mve.vmina.predicated
    arm_mve_vminnma_predicated,                // llvm.arm.mve.vminnma.predicated
    arm_mve_vmldava,                           // llvm.arm.mve.vmldava
    arm_mve_vmldava_predicated,                // llvm.arm.mve.vmldava.predicated
    arm_mve_vmlldava,                          // llvm.arm.mve.vmlldava
    arm_mve_vmlldava_predicated,               // llvm.arm.mve.vmlldava.predicated
    arm_mve_vmovl_predicated,                  // llvm.arm.mve.vmovl.predicated
    arm_mve_vmovn_predicated,                  // llvm.arm.mve.vmovn.predicated
    arm_mve_vmulh,                             // llvm.arm.mve.vmulh
    arm_mve_vmull,                             // llvm.arm.mve.vmull
    arm_mve_vmull_poly,                        // llvm.arm.mve.vmull.poly
    arm_mve_vqdmulh,                           // llvm.arm.mve.vqdmulh
    arm_mve_vqdmull,                           // llvm.arm.mve.vqdmull
    arm_mve_vqdmull_predicated,                // llvm.arm.mve.vqdmull.predicated
    arm_mve_vqrdmulh,                          // llvm.arm.mve.vqrdmulh
    arm_mve_vqshl_imm,                         // llvm.arm.mve.vqshl.imm
    arm_mve_vqshl_imm_predicated,              // llvm.arm.mve.vqshl.imm.predicated
    arm_mve_vqshlu_imm,                        // llvm.arm.mve.vqshlu.imm
    arm_mve_vqshlu_imm_predicated,             // llvm.arm.mve.vqshlu.imm.predicated
    arm_mve_vreinterpretq,                     // llvm.arm.mve.vreinterpretq
    arm_mve_vrev_predicated,                   // llvm.arm.mve.vrev.predicated
    arm_mve_vrhadd,                            // llvm.arm.mve.vrhadd
    arm_mve_vrinta_predicated,                 // llvm.arm.mve.vrinta.predicated
    arm_mve_vrintm_predicated,                 // llvm.arm.mve.vrintm.predicated
    arm_mve_vrintn,                            // llvm.arm.mve.vrintn
    arm_mve_vrintn_predicated,                 // llvm.arm.mve.vrintn.predicated
    arm_mve_vrintp_predicated,                 // llvm.arm.mve.vrintp.predicated
    arm_mve_vrintx_predicated,                 // llvm.arm.mve.vrintx.predicated
    arm_mve_vrintz_predicated,                 // llvm.arm.mve.vrintz.predicated
    arm_mve_vrmlldavha,                        // llvm.arm.mve.vrmlldavha
    arm_mve_vrmlldavha_predicated,             // llvm.arm.mve.vrmlldavha.predicated
    arm_mve_vrmulh,                            // llvm.arm.mve.vrmulh
    arm_mve_vrshr_imm,                         // llvm.arm.mve.vrshr.imm
    arm_mve_vrshr_imm_predicated,              // llvm.arm.mve.vrshr.imm.predicated
    arm_mve_vshl_scalar,                       // llvm.arm.mve.vshl.scalar
    arm_mve_vshl_scalar_predicated,            // llvm.arm.mve.vshl.scalar.predicated
    arm_mve_vshl_vector,                       // llvm.arm.mve.vshl.vector
    arm_mve_vshl_vector_predicated,            // llvm.arm.mve.vshl.vector.predicated
    arm_mve_vshll_imm,                         // llvm.arm.mve.vshll.imm
    arm_mve_vshll_imm_predicated,              // llvm.arm.mve.vshll.imm.predicated
    arm_mve_vshrn,                             // llvm.arm.mve.vshrn
    arm_mve_vshrn_predicated,                  // llvm.arm.mve.vshrn.predicated
    arm_mve_vsli,                              // llvm.arm.mve.vsli
    arm_mve_vsli_predicated,                   // llvm.arm.mve.vsli.predicated
    arm_mve_vsri,                              // llvm.arm.mve.vsri
    arm_mve_vsri_predicated,                   // llvm.arm.mve.vsri.predicated
    arm_mve_vst2q,                             // llvm.arm.mve.vst2q
    arm_mve_vst4q,                             // llvm.arm.mve.vst4q
    arm_mve_vstr_scatter_base,                 // llvm.arm.mve.vstr.scatter.base
    arm_mve_vstr_scatter_base_predicated,      // llvm.arm.mve.vstr.scatter.base.predicated
    arm_mve_vstr_scatter_base_wb,              // llvm.arm.mve.vstr.scatter.base.wb
    arm_mve_vstr_scatter_base_wb_predicated,   // llvm.arm.mve.vstr.scatter.base.wb.predicated
    arm_mve_vstr_scatter_offset,               // llvm.arm.mve.vstr.scatter.offset
    arm_mve_vstr_scatter_offset_predicated,    // llvm.arm.mve.vstr.scatter.offset.predicated
    arm_neon_aesd,                             // llvm.arm.neon.aesd
    arm_neon_aese,                             // llvm.arm.neon.aese
    arm_neon_aesimc,                           // llvm.arm.neon.aesimc
    arm_neon_aesmc,                            // llvm.arm.neon.aesmc
    arm_neon_sdot,                             // llvm.arm.neon.sdot
    arm_neon_sha1c,                            // llvm.arm.neon.sha1c
    arm_neon_sha1h,                            // llvm.arm.neon.sha1h
    arm_neon_sha1m,                            // llvm.arm.neon.sha1m
    arm_neon_sha1p,                            // llvm.arm.neon.sha1p
    arm_neon_sha1su0,                          // llvm.arm.neon.sha1su0
    arm_neon_sha1su1,                          // llvm.arm.neon.sha1su1
    arm_neon_sha256h,                          // llvm.arm.neon.sha256h
    arm_neon_sha256h2,                         // llvm.arm.neon.sha256h2
    arm_neon_sha256su0,                        // llvm.arm.neon.sha256su0
    arm_neon_sha256su1,                        // llvm.arm.neon.sha256su1
    arm_neon_udot,                             // llvm.arm.neon.udot
    arm_neon_vabds,                            // llvm.arm.neon.vabds
    arm_neon_vabdu,                            // llvm.arm.neon.vabdu
    arm_neon_vabs,                             // llvm.arm.neon.vabs
    arm_neon_vacge,                            // llvm.arm.neon.vacge
    arm_neon_vacgt,                            // llvm.arm.neon.vacgt
    arm_neon_vbsl,                             // llvm.arm.neon.vbsl
    arm_neon_vcadd_rot270,                     // llvm.arm.neon.vcadd.rot270
    arm_neon_vcadd_rot90,                      // llvm.arm.neon.vcadd.rot90
    arm_neon_vcls,                             // llvm.arm.neon.vcls
    arm_neon_vcvtas,                           // llvm.arm.neon.vcvtas
    arm_neon_vcvtau,                           // llvm.arm.neon.vcvtau
    arm_neon_vcvtfp2fxs,                       // llvm.arm.neon.vcvtfp2fxs
    arm_neon_vcvtfp2fxu,                       // llvm.arm.neon.vcvtfp2fxu
    arm_neon_vcvtfp2hf,                        // llvm.arm.neon.vcvtfp2hf
    arm_neon_vcvtfxs2fp,                       // llvm.arm.neon.vcvtfxs2fp
    arm_neon_vcvtfxu2fp,                       // llvm.arm.neon.vcvtfxu2fp
    arm_neon_vcvthf2fp,                        // llvm.arm.neon.vcvthf2fp
    arm_neon_vcvtms,                           // llvm.arm.neon.vcvtms
    arm_neon_vcvtmu,                           // llvm.arm.neon.vcvtmu
    arm_neon_vcvtns,                           // llvm.arm.neon.vcvtns
    arm_neon_vcvtnu,                           // llvm.arm.neon.vcvtnu
    arm_neon_vcvtps,                           // llvm.arm.neon.vcvtps
    arm_neon_vcvtpu,                           // llvm.arm.neon.vcvtpu
    arm_neon_vhadds,                           // llvm.arm.neon.vhadds
    arm_neon_vhaddu,                           // llvm.arm.neon.vhaddu
    arm_neon_vhsubs,                           // llvm.arm.neon.vhsubs
    arm_neon_vhsubu,                           // llvm.arm.neon.vhsubu
    arm_neon_vld1,                             // llvm.arm.neon.vld1
    arm_neon_vld1x2,                           // llvm.arm.neon.vld1x2
    arm_neon_vld1x3,                           // llvm.arm.neon.vld1x3
    arm_neon_vld1x4,                           // llvm.arm.neon.vld1x4
    arm_neon_vld2,                             // llvm.arm.neon.vld2
    arm_neon_vld2dup,                          // llvm.arm.neon.vld2dup
    arm_neon_vld2lane,                         // llvm.arm.neon.vld2lane
    arm_neon_vld3,                             // llvm.arm.neon.vld3
    arm_neon_vld3dup,                          // llvm.arm.neon.vld3dup
    arm_neon_vld3lane,                         // llvm.arm.neon.vld3lane
    arm_neon_vld4,                             // llvm.arm.neon.vld4
    arm_neon_vld4dup,                          // llvm.arm.neon.vld4dup
    arm_neon_vld4lane,                         // llvm.arm.neon.vld4lane
    arm_neon_vmaxnm,                           // llvm.arm.neon.vmaxnm
    arm_neon_vmaxs,                            // llvm.arm.neon.vmaxs
    arm_neon_vmaxu,                            // llvm.arm.neon.vmaxu
    arm_neon_vminnm,                           // llvm.arm.neon.vminnm
    arm_neon_vmins,                            // llvm.arm.neon.vmins
    arm_neon_vminu,                            // llvm.arm.neon.vminu
    arm_neon_vmullp,                           // llvm.arm.neon.vmullp
    arm_neon_vmulls,                           // llvm.arm.neon.vmulls
    arm_neon_vmullu,                           // llvm.arm.neon.vmullu
    arm_neon_vmulp,                            // llvm.arm.neon.vmulp
    arm_neon_vpadals,                          // llvm.arm.neon.vpadals
    arm_neon_vpadalu,                          // llvm.arm.neon.vpadalu
    arm_neon_vpadd,                            // llvm.arm.neon.vpadd
    arm_neon_vpaddls,                          // llvm.arm.neon.vpaddls
    arm_neon_vpaddlu,                          // llvm.arm.neon.vpaddlu
    arm_neon_vpmaxs,                           // llvm.arm.neon.vpmaxs
    arm_neon_vpmaxu,                           // llvm.arm.neon.vpmaxu
    arm_neon_vpmins,                           // llvm.arm.neon.vpmins
    arm_neon_vpminu,                           // llvm.arm.neon.vpminu
    arm_neon_vqabs,                            // llvm.arm.neon.vqabs
    arm_neon_vqdmulh,                          // llvm.arm.neon.vqdmulh
    arm_neon_vqdmull,                          // llvm.arm.neon.vqdmull
    arm_neon_vqmovns,                          // llvm.arm.neon.vqmovns
    arm_neon_vqmovnsu,                         // llvm.arm.neon.vqmovnsu
    arm_neon_vqmovnu,                          // llvm.arm.neon.vqmovnu
    arm_neon_vqneg,                            // llvm.arm.neon.vqneg
    arm_neon_vqrdmulh,                         // llvm.arm.neon.vqrdmulh
    arm_neon_vqrshiftns,                       // llvm.arm.neon.vqrshiftns
    arm_neon_vqrshiftnsu,                      // llvm.arm.neon.vqrshiftnsu
    arm_neon_vqrshiftnu,                       // llvm.arm.neon.vqrshiftnu
    arm_neon_vqrshifts,                        // llvm.arm.neon.vqrshifts
    arm_neon_vqrshiftu,                        // llvm.arm.neon.vqrshiftu
    arm_neon_vqshiftns,                        // llvm.arm.neon.vqshiftns
    arm_neon_vqshiftnsu,                       // llvm.arm.neon.vqshiftnsu
    arm_neon_vqshiftnu,                        // llvm.arm.neon.vqshiftnu
    arm_neon_vqshifts,                         // llvm.arm.neon.vqshifts
    arm_neon_vqshiftsu,                        // llvm.arm.neon.vqshiftsu
    arm_neon_vqshiftu,                         // llvm.arm.neon.vqshiftu
    arm_neon_vraddhn,                          // llvm.arm.neon.vraddhn
    arm_neon_vrecpe,                           // llvm.arm.neon.vrecpe
    arm_neon_vrecps,                           // llvm.arm.neon.vrecps
    arm_neon_vrhadds,                          // llvm.arm.neon.vrhadds
    arm_neon_vrhaddu,                          // llvm.arm.neon.vrhaddu
    arm_neon_vrinta,                           // llvm.arm.neon.vrinta
    arm_neon_vrintm,                           // llvm.arm.neon.vrintm
    arm_neon_vrintn,                           // llvm.arm.neon.vrintn
    arm_neon_vrintp,                           // llvm.arm.neon.vrintp
    arm_neon_vrintx,                           // llvm.arm.neon.vrintx
    arm_neon_vrintz,                           // llvm.arm.neon.vrintz
    arm_neon_vrshiftn,                         // llvm.arm.neon.vrshiftn
    arm_neon_vrshifts,                         // llvm.arm.neon.vrshifts
    arm_neon_vrshiftu,                         // llvm.arm.neon.vrshiftu
    arm_neon_vrsqrte,                          // llvm.arm.neon.vrsqrte
    arm_neon_vrsqrts,                          // llvm.arm.neon.vrsqrts
    arm_neon_vrsubhn,                          // llvm.arm.neon.vrsubhn
    arm_neon_vshiftins,                        // llvm.arm.neon.vshiftins
    arm_neon_vshifts,                          // llvm.arm.neon.vshifts
    arm_neon_vshiftu,                          // llvm.arm.neon.vshiftu
    arm_neon_vst1,                             // llvm.arm.neon.vst1
    arm_neon_vst1x2,                           // llvm.arm.neon.vst1x2
    arm_neon_vst1x3,                           // llvm.arm.neon.vst1x3
    arm_neon_vst1x4,                           // llvm.arm.neon.vst1x4
    arm_neon_vst2,                             // llvm.arm.neon.vst2
    arm_neon_vst2lane,                         // llvm.arm.neon.vst2lane
    arm_neon_vst3,                             // llvm.arm.neon.vst3
    arm_neon_vst3lane,                         // llvm.arm.neon.vst3lane
    arm_neon_vst4,                             // llvm.arm.neon.vst4
    arm_neon_vst4lane,                         // llvm.arm.neon.vst4lane
    arm_neon_vtbl1,                            // llvm.arm.neon.vtbl1
    arm_neon_vtbl2,                            // llvm.arm.neon.vtbl2
    arm_neon_vtbl3,                            // llvm.arm.neon.vtbl3
    arm_neon_vtbl4,                            // llvm.arm.neon.vtbl4
    arm_neon_vtbx1,                            // llvm.arm.neon.vtbx1
    arm_neon_vtbx2,                            // llvm.arm.neon.vtbx2
    arm_neon_vtbx3,                            // llvm.arm.neon.vtbx3
    arm_neon_vtbx4,                            // llvm.arm.neon.vtbx4
    arm_qadd,                                  // llvm.arm.qadd
    arm_qadd16,                                // llvm.arm.qadd16
    arm_qadd8,                                 // llvm.arm.qadd8
    arm_qasx,                                  // llvm.arm.qasx
    arm_qsax,                                  // llvm.arm.qsax
    arm_qsub,                                  // llvm.arm.qsub
    arm_qsub16,                                // llvm.arm.qsub16
    arm_qsub8,                                 // llvm.arm.qsub8
    arm_sadd16,                                // llvm.arm.sadd16
    arm_sadd8,                                 // llvm.arm.sadd8
    arm_sasx,                                  // llvm.arm.sasx
    arm_sel,                                   // llvm.arm.sel
    arm_set_fpscr,                             // llvm.arm.set.fpscr
    arm_shadd16,                               // llvm.arm.shadd16
    arm_shadd8,                                // llvm.arm.shadd8
    arm_shasx,                                 // llvm.arm.shasx
    arm_shsax,                                 // llvm.arm.shsax
    arm_shsub16,                               // llvm.arm.shsub16
    arm_shsub8,                                // llvm.arm.shsub8
    arm_smlabb,                                // llvm.arm.smlabb
    arm_smlabt,                                // llvm.arm.smlabt
    arm_smlad,                                 // llvm.arm.smlad
    arm_smladx,                                // llvm.arm.smladx
    arm_smlald,                                // llvm.arm.smlald
    arm_smlaldx,                               // llvm.arm.smlaldx
    arm_smlatb,                                // llvm.arm.smlatb
    arm_smlatt,                                // llvm.arm.smlatt
    arm_smlawb,                                // llvm.arm.smlawb
    arm_smlawt,                                // llvm.arm.smlawt
    arm_smlsd,                                 // llvm.arm.smlsd
    arm_smlsdx,                                // llvm.arm.smlsdx
    arm_smlsld,                                // llvm.arm.smlsld
    arm_smlsldx,                               // llvm.arm.smlsldx
    arm_smuad,                                 // llvm.arm.smuad
    arm_smuadx,                                // llvm.arm.smuadx
    arm_smulbb,                                // llvm.arm.smulbb
    arm_smulbt,                                // llvm.arm.smulbt
    arm_smultb,                                // llvm.arm.smultb
    arm_smultt,                                // llvm.arm.smultt
    arm_smulwb,                                // llvm.arm.smulwb
    arm_smulwt,                                // llvm.arm.smulwt
    arm_smusd,                                 // llvm.arm.smusd
    arm_smusdx,                                // llvm.arm.smusdx
    arm_space,                                 // llvm.arm.space
    arm_ssat,                                  // llvm.arm.ssat
    arm_ssat16,                                // llvm.arm.ssat16
    arm_ssax,                                  // llvm.arm.ssax
    arm_ssub16,                                // llvm.arm.ssub16
    arm_ssub8,                                 // llvm.arm.ssub8
    arm_stc,                                   // llvm.arm.stc
    arm_stc2,                                  // llvm.arm.stc2
    arm_stc2l,                                 // llvm.arm.stc2l
    arm_stcl,                                  // llvm.arm.stcl
    arm_stlex,                                 // llvm.arm.stlex
    arm_stlexd,                                // llvm.arm.stlexd
    arm_strex,                                 // llvm.arm.strex
    arm_strexd,                                // llvm.arm.strexd
    arm_sxtab16,                               // llvm.arm.sxtab16
    arm_sxtb16,                                // llvm.arm.sxtb16
    arm_uadd16,                                // llvm.arm.uadd16
    arm_uadd8,                                 // llvm.arm.uadd8
    arm_uasx,                                  // llvm.arm.uasx
    arm_uhadd16,                               // llvm.arm.uhadd16
    arm_uhadd8,                                // llvm.arm.uhadd8
    arm_uhasx,                                 // llvm.arm.uhasx
    arm_uhsax,                                 // llvm.arm.uhsax
    arm_uhsub16,                               // llvm.arm.uhsub16
    arm_uhsub8,                                // llvm.arm.uhsub8
    arm_undefined,                             // llvm.arm.undefined
    arm_uqadd16,                               // llvm.arm.uqadd16
    arm_uqadd8,                                // llvm.arm.uqadd8
    arm_uqasx,                                 // llvm.arm.uqasx
    arm_uqsax,                                 // llvm.arm.uqsax
    arm_uqsub16,                               // llvm.arm.uqsub16
    arm_uqsub8,                                // llvm.arm.uqsub8
    arm_usad8,                                 // llvm.arm.usad8
    arm_usada8,                                // llvm.arm.usada8
    arm_usat,                                  // llvm.arm.usat
    arm_usat16,                                // llvm.arm.usat16
    arm_usax,                                  // llvm.arm.usax
    arm_usub16,                                // llvm.arm.usub16
    arm_usub8,                                 // llvm.arm.usub8
    arm_uxtab16,                               // llvm.arm.uxtab16
    arm_uxtb16,                                // llvm.arm.uxtb16
    arm_vcvtr,                                 // llvm.arm.vcvtr
    arm_vcvtru,                                // llvm.arm.vcvtru
}; // enum
} // namespace Intrinsic
} // namespace llvm

#endif
