//
// Created by ssunny on 4/4/16.
//

#ifndef DYNINST_AARCH64_SYS_REGS_H
#define DYNINST_AARCH64_SYS_REGS_H

DEF_REGISTER(tlbi_vale3is,		0 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(id_aa64pfr1_el1,		1 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(sder32_el3,		2 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(icc_ctlr_el3,		3 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(dacr32_el2,		4 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(ich_vtr_el2,		5 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(icc_dir_el1,		6 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(tlbi_ipas2le1,		7 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(afsr0_el3,		9 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(dczid_el0,		10 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(actlr_el1,		11 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(sctlr_el3,		12 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(sctlr_el2,		13 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(at_s1e2r,		14 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(ic_iallu,		15 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(icc_igrpen1_el3,		16 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(pmceid0_el0,		17 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(tpidr_el0,		18 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(tlbi_ipas2le1is,		19 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(contextidr_el1,		20 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(id_mmfr2_el1,		21 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(pmevtyper0_el0,		22 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(pmevtyper1_el0,		23 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(pmevtyper2_el0,		24 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(pmevtyper3_el0,		25 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(pmevtyper4_el0,		26 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(pmevtyper5_el0,		27 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(pmevtyper6_el0,		28 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(pmevtyper7_el0,		29 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(pmevtyper8_el0,		30 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(pmevtyper9_el0,		31 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(pmevtyper10_el0,		32 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(pmevtyper11_el0,		33 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(pmevtyper12_el0,		34 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(pmevtyper13_el0,		35 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(pmevtyper14_el0,		36 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(pmevtyper15_el0,		37 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(pmevtyper16_el0,		38 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(pmevtyper17_el0,		39 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(pmevtyper18_el0,		40 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(pmevtyper19_el0,		41 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(pmevtyper20_el0,		42 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(pmevtyper21_el0,		43 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(pmevtyper22_el0,		44 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(pmevtyper23_el0,		45 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(pmevtyper24_el0,		46 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(pmevtyper25_el0,		47 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(pmevtyper26_el0,		48 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(pmevtyper27_el0,		49 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(pmevtyper28_el0,		50 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(pmevtyper29_el0,		51 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(pmevtyper30_el0,		52 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(mair_el1,		53 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(tlbi_vale2is,		54 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(ccsidr_el1,		55 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(spsr_irq,		56 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(elr_el3,		57 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(tlbi_alle3is,		58 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(sp_el0,		59 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(id_mmfr1_el1,		60 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(ic_ivau,		61 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(icc_eoir0_el1,		62 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(icc_sgi0r_el1,		63 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(icc_sgi1r_el1,		64 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(tlbi_vae2,		65 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(cntp_ctl_el0,		66 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(tpidr_el1,		67 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(dc_civac,		68 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(tlbi_ipas2e1is,		69 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(cntv_cval_el0,		70 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(icc_bpr0_el1,		71 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(mdccsr_el0,		72 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(dbgclaimset_el1,		73 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(ich_ap0r0_el2,		74 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(ich_ap0r1_el2,		75 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(ich_ap0r2_el2,		76 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(ich_ap0r3_el2,		77 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(dc_ivac,		78 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(ich_elrsr_el2,		79 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(ich_hcr_el2,		80 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(vbar_el2,		81 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(icc_asgi1r_el1,		82 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(id_aa64afr1_el1,		83 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(nzcv,		84 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(ttbr0_el1,		85 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(actlr_el3,		86 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(mdrar_el1,		87 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(rmr_el3,		88 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(cntkctl_el1,		89 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(rvbar_el3,		90 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(id_dfr0_el1,		91 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(at_s1e1r,		92 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(icc_ap1r0_el1,		93 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(icc_ap1r1_el1,		94 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(icc_ap1r2_el1,		95 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(icc_ap1r3_el1,		96 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(icc_pmr_el1,		97 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(pmceid1_el0,		98 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(dc_csw,		99 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(id_pfr1_el1,		100 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(id_afr0_el1,		101 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(amair_el2,		102 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(pmovsset_el0,		103 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(tlbi_vmalle1,		104 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(tlbi_vale2,		105 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(at_s12e0w,		106 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(id_isar5_el1,		107 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(tcr_el1,		108 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(pmevcntr0_el0,		109 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(pmevcntr1_el0,		110 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(pmevcntr2_el0,		111 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(pmevcntr3_el0,		112 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(pmevcntr4_el0,		113 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(pmevcntr5_el0,		114 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(pmevcntr6_el0,		115 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(pmevcntr7_el0,		116 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(pmevcntr8_el0,		117 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(pmevcntr9_el0,		118 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(pmevcntr10_el0,		119 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(pmevcntr11_el0,		120 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(pmevcntr12_el0,		121 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(pmevcntr13_el0,		122 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(pmevcntr14_el0,		123 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(pmevcntr15_el0,		124 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(pmevcntr16_el0,		125 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(pmevcntr17_el0,		126 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(pmevcntr18_el0,		127 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(pmevcntr19_el0,		128 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(pmevcntr20_el0,		129 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(pmevcntr21_el0,		130 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(pmevcntr22_el0,		131 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(pmevcntr23_el0,		132 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(pmevcntr24_el0,		133 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(pmevcntr25_el0,		134 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(pmevcntr26_el0,		135 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(pmevcntr27_el0,		136 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(pmevcntr28_el0,		137 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(pmevcntr29_el0,		138 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(pmevcntr30_el0,		139 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(dbgdtr_el0,		140 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(amair_el3,		141 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(rvbar_el1,		142 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(dc_cvau,		143 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(afsr0_el2,		144 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(icc_iar0_el1,		145 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(icc_bpr1_el1,		146 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(dc_cisw,		147 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(hpfar_el2,		148 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(spsr_abt,		149 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(csselr_el1,		150 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(pmintenclr_el1,		151 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(tlbi_vaae1,		152 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(far_el2,		153 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(currentel,		154 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(dbgprcr_el1,		155 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(tlbi_ipas2e1,		156 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(mair_el3,		157 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(ttbr1_el1,		158 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(cntvct_el0,		159 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(tlbi_aside1is,		160 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(scr_el3,		161 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(mvfr0_el1,		162 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(tlbi_alle1,		163 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(pmovsclr_el0,		164 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(mvfr1_el1,		165 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(tlbi_vaale1,		166 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(elr_el1,		167 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(rvbar_el2,		168 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(esr_el1,		169 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(tlbi_aside1,		170 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(osdtrrx_el1,		171 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(pmcntenset_el0,		172 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(dspsr_el0,		173 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(dc_zva,		174 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(ich_misr_el2,		175 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(vbar_el1,		176 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(id_isar1_el1,		177 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(cpacr_el1,		178 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(par_el1,		179 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(cnthp_ctl_el2,		180 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(actlr_el2,		181 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(spsr_fiq,		182 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(id_aa64pfr0_el1,		183 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(tpidr_el3,		184 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(at_s1e2w,		185 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(tlbi_alle2,		186 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(id_isar4_el1,		187 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(dbgvcr32_el2,		188 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(hcr_el2,		189 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(ich_eisr_el2,		190 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(mdccint_el1,		191 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(dlr_el0,		192 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(tpidr_el2,		193 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(pmuserenr_el0,		194 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(oseccr_el1,		195 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(tlbi_vmalls12e1is,		196 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(mdscr_el1,		197 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(ich_vmcr_el2,		198 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(far_el3,		199 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(spsr_el2,		200 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(oslsr_el1,		201 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(tlbi_vae1,		202 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(daif,		203 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(far_el1,		204 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(hstr_el2,		205 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(clidr_el1,		206 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(vttbr_el2,		207 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(id_aa64afr0_el1,		208 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(icc_rpr_el1,		209 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(cntps_ctl_el1,		210 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(afsr1_el1,		211 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(spsel,		212 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(pmcr_el0,		214 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(tlbi_vaae1is,		215 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(icc_sre_el1,		216 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(cntpct_el0,		217 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(tlbi_alle2is,		218 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(icc_igrpen1_el1,		219 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(ifsr32_el2,		220 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(icc_igrpen0_el1,		221 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(tpidrro_el0,		222 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(hacr_el2,		223 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(at_s1e0w,		224 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(pmccfiltr_el0,		225 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(cnthp_tval_el2,		226 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(at_s12e0r,		227 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(cntvoff_el2,		228 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(icc_sre_el2,		229 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(spsr_el1,		230 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(isr_el1,		231 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(cnthctl_el2,		232 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(vtcr_el2,		233 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(vmpidr_el2,		234 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(pmswinc_el0,		235 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(id_mmfr0_el1,		236 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(cntp_cval_el0,		237 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(icc_hppir0_el1,		238 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(mdcr_el3,		239 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(dbgwvr0_el1,		240 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(dbgwvr1_el1,		241 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(dbgwvr2_el1,		242 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(dbgwvr3_el1,		243 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(dbgwvr4_el1,		244 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(dbgwvr5_el1,		245 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(dbgwvr6_el1,		246 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(dbgwvr7_el1,		247 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(dbgwvr8_el1,		248 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(dbgwvr9_el1,		249 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(dbgwvr10_el1,		250 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(dbgwvr11_el1,		251 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(dbgwvr12_el1,		252 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(dbgwvr13_el1,		253 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(dbgwvr14_el1,		254 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(dbgwvr15_el1,		255 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(dbgauthstatus_el1,		256 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(dbgdtrtx_el0,		257 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(icc_eoir1_el1,		258 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(elr_el2,		259 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(dbgbvr0_el1,		260 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(dbgbvr1_el1,		261 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(dbgbvr2_el1,		262 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(dbgbvr3_el1,		263 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(dbgbvr4_el1,		264 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(dbgbvr5_el1,		265 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(dbgbvr6_el1,		266 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(dbgbvr7_el1,		267 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(dbgbvr8_el1,		268 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(dbgbvr9_el1,		269 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(dbgbvr10_el1,		270 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(dbgbvr11_el1,		271 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(dbgbvr12_el1,		272 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(dbgbvr13_el1,		273 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(dbgbvr14_el1,		274 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(dbgbvr15_el1,		275 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(ic_ialluis,		276 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(tcr_el3,		277 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(aidr_el1,		278 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(cntfrq_el0,		279 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(tlbi_vae3,		280 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(tlbi_vmalls12e1,		281 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(esr_el2,		282 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(vbar_el3,		283 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(dbgwcr0_el1,		284 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(dbgwcr1_el1,		285 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(dbgwcr2_el1,		286 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(dbgwcr3_el1,		287 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(dbgwcr4_el1,		288 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(dbgwcr5_el1,		289 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(dbgwcr6_el1,		290 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(dbgwcr7_el1,		291 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(dbgwcr8_el1,		292 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(dbgwcr9_el1,		293 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(dbgwcr10_el1,		294 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(dbgwcr11_el1,		295 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(dbgwcr12_el1,		296 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(dbgwcr13_el1,		297 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(dbgwcr14_el1,		298 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(dbgwcr15_el1,		299 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(rmr_el1,		300 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(midr_el1,		301 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(dc_isw,		302 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(id_isar0_el1,		303 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(ctr_el0,		304 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(sp_el1,		305 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(cntv_tval_el0,		306 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(tlbi_vae3is,		307 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(afsr1_el3,		308 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(id_mmfr4_el1,		309 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(ttbr0_el3,		310 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(spsr_und,		311 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(tlbi_vae2is,		312 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(at_s1e3w,		313 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(osdlr_el1,		314 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(ich_lr0_el2,		315 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(ich_lr1_el2,		316 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(ich_lr2_el2,		317 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(ich_lr3_el2,		318 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(ich_lr4_el2,		319 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(ich_lr5_el2,		320 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(ich_lr6_el2,		321 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(ich_lr7_el2,		322 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(ich_lr8_el2,		323 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(ich_lr9_el2,		324 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(ich_lr10_el2,		325 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(ich_lr11_el2,		326 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(ich_lr12_el2,		327 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(ich_lr13_el2,		328 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(ich_lr14_el2,		329 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(ich_lr15_el2,		330 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(dbgclaimclr_el1,		331 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(tlbi_vmalle1is,		332 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(id_aa64mmfr1_el1,		333 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(pmccntr_el0,		334 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(esr_el3,		335 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(cptr_el3,		336 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(cntp_tval_el0,		337 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(tcr_el2,		338 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(dc_cvac,		339 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(tlbi_vaale1is,		340 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(pmintenset_el1,		341 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(dbgbcr0_el1,		342 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(dbgbcr1_el1,		343 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(dbgbcr2_el1,		344 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(dbgbcr3_el1,		345 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(dbgbcr4_el1,		346 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(dbgbcr5_el1,		347 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(dbgbcr6_el1,		348 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(dbgbcr7_el1,		349 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(dbgbcr8_el1,		350 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(dbgbcr9_el1,		351 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(dbgbcr10_el1,		352 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(dbgbcr11_el1,		353 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(dbgbcr12_el1,		354 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(dbgbcr13_el1,		355 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(dbgbcr14_el1,		356 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(dbgbcr15_el1,		357 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(pmselr_el0,		358 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(tlbi_alle1is,		359 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(icc_hppir1_el1,		360 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(tlbi_vae1is,		361 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(mdcr_el2,		362 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(at_s12e1w,		363 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(vpidr_el2,		364 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(id_aa64dfr0_el1,		365 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(id_isar2_el1,		366 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(ttbr0_el2,		367 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(icc_ap0r0_el1,		368 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(icc_ap0r1_el1,		369 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(icc_ap0r2_el1,		370 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(icc_ap0r3_el1,		371 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(dbgdtrrx_el0,		372 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(fpexc32_el2,		373 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(pmxevtyper_el0,		374 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(oslar_el1,		375 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(id_pfr0_el1,		376 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(id_mmfr3_el1,		377 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(osdtrtx_el1,		378 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(id_aa64isar0_el1,		379 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(mvfr2_el1,		380 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(pmcntenclr_el0,		381 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(ich_ap1r0_el2,		382 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(ich_ap1r1_el2,		383 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(ich_ap1r2_el2,		384 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(ich_ap1r3_el2,		385 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(id_aa64mmfr0_el1,		386 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(tlbi_vale3,		387 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(revidr_el1,		388 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(mair_el2,		389 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(sctlr_el1,		390 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(at_s1e0r,		391 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(cptr_el2,		392 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(at_s12e1r,		393 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(pmxevcntr_el0,		394 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(afsr0_el1,		395 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(at_s1e1w,		396 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(id_isar3_el1,		397 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(afsr1_el2,		398 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(tlbi_vale1is,		399 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(sp_el2,		400 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(cntps_cval_el1,		401 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(cntps_tval_el1,		402 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(icc_ctlr_el1,		403 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(cntv_ctl_el0,		404 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(rmr_el2,		405 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(id_aa64dfr1_el1,		406 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(cnthp_cval_el2,		407 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(at_s1e3r,		408 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(id_aa64isar1_el1,		409 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(mpidr_el1,		410 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(amair_el1,		411 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(tlbi_alle3,		412 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(spsr_el3,		413 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(tlbi_vale1,		414 | FULL |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(icc_sre_el3,		415 | D_REG |SYSREG | Arch_aarch64, "aarch64");
DEF_REGISTER(icc_iar1_el1,		416 | D_REG |SYSREG | Arch_aarch64, "aarch64");

DEF_REGISTER(IMPLEMENTATION_DEFINED_SYSREG,     417 | D_REG |SYSREG | Arch_aarch64, "aarch64");


#endif //DYNINST_AARCH64_SYS_REGS_H
