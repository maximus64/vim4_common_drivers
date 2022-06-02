/* SPDX-License-Identifier: (GPL-2.0+ OR MIT) */
/*
 * Copyright (c) 2019 Amlogic, Inc. All rights reserved.
 */

#ifndef __SC2_CLKC_H
#define __SC2_CLKC_H

/*
 * CLKID index values
 */

#define CLKID_PLL_BASE			0
#define CLKID_FIXED_PLL_DCO		(CLKID_PLL_BASE + 0)
#define CLKID_FIXED_PLL			(CLKID_PLL_BASE + 1)
#define CLKID_SYS_PLL_DCO		(CLKID_PLL_BASE + 2)
#define CLKID_SYS_PLL			(CLKID_PLL_BASE + 3)
#define CLKID_FCLK_DIV2_DIV		(CLKID_PLL_BASE + 4)
#define CLKID_FCLK_DIV2			(CLKID_PLL_BASE + 5)
#define CLKID_FCLK_DIV3_DIV		(CLKID_PLL_BASE + 6)
#define CLKID_FCLK_DIV3			(CLKID_PLL_BASE + 7)
#define CLKID_FCLK_DIV4_DIV		(CLKID_PLL_BASE + 8)
#define CLKID_FCLK_DIV4			(CLKID_PLL_BASE + 9)
#define CLKID_FCLK_DIV5_DIV		(CLKID_PLL_BASE + 10)
#define CLKID_FCLK_DIV5			(CLKID_PLL_BASE + 11)
#define CLKID_FCLK_DIV7_DIV		(CLKID_PLL_BASE + 12)
#define CLKID_FCLK_DIV7			(CLKID_PLL_BASE + 13)
#define CLKID_FCLK_DIV2P5_DIV		(CLKID_PLL_BASE + 14)
#define CLKID_FCLK_DIV2P5		(CLKID_PLL_BASE + 15)
#define CLKID_GP0_PLL_DCO		(CLKID_PLL_BASE + 16)
#define CLKID_GP0_PLL			(CLKID_PLL_BASE + 17)
#define CLKID_GP1_PLL_DCO		(CLKID_PLL_BASE + 18)
#define CLKID_GP1_PLL			(CLKID_PLL_BASE + 19)

#define CLKID_CPU_BASE			(CLKID_PLL_BASE  + 20)
#define CLKID_CPU_CLK_DYN0_SEL		(CLKID_CPU_BASE + 0)
#define CLKID_CPU_CLK_DYN0_DIV		(CLKID_CPU_BASE + 1)
#define CLKID_CPU_CLK_DYN0		(CLKID_CPU_BASE + 2)
#define CLKID_CPU_CLK_DYN1_SEL		(CLKID_CPU_BASE + 3)
#define CLKID_CPU_CLK_DYN1_DIV		(CLKID_CPU_BASE + 4)
#define CLKID_CPU_CLK_DYN1		(CLKID_CPU_BASE + 5)
#define CLKID_CPU_CLK_DYN		(CLKID_CPU_BASE + 6)
#define CLKID_CPU_CLK			(CLKID_CPU_BASE + 7)
#define CLKID_DSU_CLK_DYN0_SEL		(CLKID_CPU_BASE + 8)
#define CLKID_DSU_CLK_DYN0_DIV		(CLKID_CPU_BASE + 9)
#define CLKID_DSU_CLK_DYN0		(CLKID_CPU_BASE + 10)
#define CLKID_DSU_CLK_DYN1_SEL		(CLKID_CPU_BASE + 11)
#define CLKID_DSU_CLK_DYN1_DIV		(CLKID_CPU_BASE + 12)
#define CLKID_DSU_CLK_DYN1		(CLKID_CPU_BASE + 13)
#define CLKID_DSU_DYN_CLK		(CLKID_CPU_BASE + 14)
#define CLKID_DSU_CLK_FINAL		(CLKID_CPU_BASE + 15)
#define CLKID_DSU_CLK			(CLKID_CPU_BASE + 16)
#define CLKID_CPU1_CLK			(CLKID_CPU_BASE + 17)
#define CLKID_CPU2_CLK			(CLKID_CPU_BASE + 18)
#define CLKID_CPU3_CLK			(CLKID_CPU_BASE + 19)

#define CLKID_PLL1_BASE			(CLKID_CPU_BASE + 20)
#define CLKID_HIFI_PLL_DCO		(CLKID_PLL1_BASE + 0)
#define CLKID_HIFI_PLL			(CLKID_PLL1_BASE + 1)
#define CLKID_PCIE_PLL_DCO		(CLKID_PLL1_BASE + 2)
#define CLKID_PCIE_PLL_DCO_DIV2		(CLKID_PLL1_BASE + 3)
#define CLKID_PCIE_PLL_OD		(CLKID_PLL1_BASE + 4)
#define CLKID_PCIE_PLL			(CLKID_PLL1_BASE + 5)
#define CLKID_HDMI_PLL_DCO		(CLKID_PLL1_BASE + 6)
#define CLKID_HDMI_PLL_OD		(CLKID_PLL1_BASE + 7)
#define CLKID_HDMI_PLL			(CLKID_PLL1_BASE + 8)
#define CLKID_MPLL_50M_DIV		(CLKID_PLL1_BASE + 9)
#define CLKID_MPLL_50M			(CLKID_PLL1_BASE + 10)
#define CLKID_MPLL_PREDIV		(CLKID_PLL1_BASE + 11)
#define CLKID_MPLL0_DIV			(CLKID_PLL1_BASE + 12)
#define CLKID_MPLL0			(CLKID_PLL1_BASE + 13)
#define CLKID_MPLL1_DIV			(CLKID_PLL1_BASE + 14)
#define CLKID_MPLL1			(CLKID_PLL1_BASE + 15)
#define CLKID_MPLL2_DIV			(CLKID_PLL1_BASE + 16)
#define CLKID_MPLL2			(CLKID_PLL1_BASE + 17)
#define CLKID_MPLL3_DIV			(CLKID_PLL1_BASE + 18)
#define CLKID_MPLL3			(CLKID_PLL1_BASE + 19)
#define CLKID_PCIE_BGP			(CLKID_PLL1_BASE + 20)
#define CLKID_PCIE_HCSL			(CLKID_PLL1_BASE + 21)

#define CLKID_BASE			(CLKID_PLL1_BASE + 22)
#define CLKID_RTC_32K_CLKIN		(CLKID_BASE + 0)
#define CLKID_RTC_32K_DIV		(CLKID_BASE + 1)
#define CLKID_RTC_32K_XATL		(CLKID_BASE + 2)
#define CLKID_RTC_32K_MUX		(CLKID_BASE + 3)
#define CLKID_RTC_CLK			(CLKID_BASE + 4)
#define CLKID_SYS_CLK_B_MUX		(CLKID_BASE + 5)
#define CLKID_SYS_CLK_B_DIV		(CLKID_BASE + 6)
#define CLKID_SYS_CLK_B_GATE		(CLKID_BASE + 7)
#define CLKID_SYS_CLK_A_MUX		(CLKID_BASE + 8)
#define CLKID_SYS_CLK_A_DIV		(CLKID_BASE + 9)
#define CLKID_SYS_CLK_A_GATE		(CLKID_BASE + 10)
#define CLKID_SYS_CLK			(CLKID_BASE + 11)

#define CLKID_CECA_32K_CLKIN		(CLKID_BASE + 12)
#define CLKID_CECA_32K_DIV		(CLKID_BASE + 13)
#define CLKID_CECA_32K_MUX_PRE		(CLKID_BASE + 14)
#define CLKID_CECA_32K_MUX		(CLKID_BASE + 15)
#define CLKID_CECA_32K_CLKOUT		(CLKID_BASE + 16)
#define CLKID_CECB_32K_CLKIN		(CLKID_BASE + 17)
#define CLKID_CECB_32K_DIV		(CLKID_BASE + 18)
#define CLKID_CECB_32K_MUX_PRE		(CLKID_BASE + 19)
#define CLKID_CECB_32K_MUX		(CLKID_BASE + 20)
#define CLKID_CECB_32K_CLKOUT		(CLKID_BASE + 21)

#define CLKID_SC_CLK_MUX		(CLKID_BASE + 22)
#define CLKID_SC_CLK_DIV		(CLKID_BASE + 23)
#define CLKID_SC_CLK_GATE		(CLKID_BASE + 24)

#define CLKID_DSPA_CLK_B_MUX		(CLKID_BASE + 25)
#define CLKID_DSPA_CLK_B_DIV		(CLKID_BASE + 26)
#define CLKID_DSPA_CLK_B_GATE		(CLKID_BASE + 27)
#define CLKID_DSPA_CLK_A_MUX		(CLKID_BASE + 28)
#define CLKID_DSPA_CLK_A_DIV		(CLKID_BASE + 29)
#define CLKID_DSPA_CLK_A_GATE		(CLKID_BASE + 30)
#define CLKID_DSPA_CLK			(CLKID_BASE + 31)

#define CLKID_24M_CLK_GATE		(CLKID_BASE + 32)
#define CLKID_12M_CLK_DIV		(CLKID_BASE + 33)
#define CLKID_12M_CLK_GATE		(CLKID_BASE + 34)
#define CLKID_25M_CLK_DIV		(CLKID_BASE + 35)
#define CLKID_25M_CLK_GATE		(CLKID_BASE + 36)

#define CLKID_VID_PLL_DIV		(CLKID_BASE + 37)
#define CLKID_VID_PLL_MUX		(CLKID_BASE + 38)
#define CLKID_VID_PLL			(CLKID_BASE + 39)
#define CLKID_VCLK_MUX			(CLKID_BASE + 40)
#define CLKID_VCLK2_MUX			(CLKID_BASE + 41)
#define CLKID_VCLK_INPUT		(CLKID_BASE + 42)
#define CLKID_VCLK2_INPUT		(CLKID_BASE + 43)
#define CLKID_VCLK_DIV			(CLKID_BASE + 44)
#define CLKID_VCLK2_DIV			(CLKID_BASE + 45)
#define CLKID_VCLK			(CLKID_BASE + 46)
#define CLKID_VCLK2			(CLKID_BASE + 47)
#define CLKID_VCLK_DIV1			(CLKID_BASE + 48)
#define CLKID_VCLK_DIV2_EN		(CLKID_BASE + 49)
#define CLKID_VCLK_DIV4_EN		(CLKID_BASE + 50)
#define CLKID_VCLK_DIV6_EN		(CLKID_BASE + 51)
#define CLKID_VCLK_DIV12_EN		(CLKID_BASE + 52)
#define CLKID_VCLK2_DIV1		(CLKID_BASE + 53)
#define CLKID_VCLK2_DIV2_EN		(CLKID_BASE + 54)
#define CLKID_VCLK2_DIV4_EN		(CLKID_BASE + 55)
#define CLKID_VCLK2_DIV6_EN		(CLKID_BASE + 56)
#define CLKID_VCLK2_DIV12_EN		(CLKID_BASE + 57)
#define CLKID_VCLK_DIV2			(CLKID_BASE + 58)
#define CLKID_VCLK_DIV4			(CLKID_BASE + 59)
#define CLKID_VCLK_DIV6			(CLKID_BASE + 60)
#define CLKID_VCLK_DIV12		(CLKID_BASE + 61)
#define CLKID_VCLK2_DIV2		(CLKID_BASE + 62)
#define CLKID_VCLK2_DIV4		(CLKID_BASE + 63)
#define CLKID_VCLK2_DIV6		(CLKID_BASE + 64)
#define CLKID_VCLK2_DIV12		(CLKID_BASE + 65)
#define CLKID_CTS_ENCI_MUX		(CLKID_BASE + 66)
#define CLKID_CTS_ENCP_MUX		(CLKID_BASE + 67)
#define CLKID_CTS_VDAC_MUX		(CLKID_BASE + 68)
#define CLKID_HDMI_TX_MUX		(CLKID_BASE + 69)
#define CLKID_CTS_ENCI			(CLKID_BASE + 70)
#define CLKID_CTS_ENCP			(CLKID_BASE + 71)
#define CLKID_CTS_VDAC			(CLKID_BASE + 72)
#define CLKID_HDMI_TX			(CLKID_BASE + 73)

#define CLKID_HDMI_MUX			(CLKID_BASE + 74)
#define CLKID_HDMI_DIV			(CLKID_BASE + 75)
#define CLKID_HDMI			(CLKID_BASE + 76)
#define CLKID_TS_CLK_DIV		(CLKID_BASE + 77)
#define CLKID_TS_CLK_GATE		(CLKID_BASE + 78)

#define CLKID_MALI_0_SEL		(CLKID_BASE + 79)
#define CLKID_MALI_0_DIV		(CLKID_BASE + 80)
#define CLKID_MALI_0			(CLKID_BASE + 81)
#define CLKID_MALI_1_SEL		(CLKID_BASE + 82)
#define CLKID_MALI_1_DIV		(CLKID_BASE + 83)
#define CLKID_MALI_1			(CLKID_BASE + 84)
#define CLKID_MALI			(CLKID_BASE + 85)

#define CLKID_VDEC_P0_MUX		(CLKID_BASE + 86)
#define CLKID_VDEC_P0_DIV		(CLKID_BASE + 87)
#define CLKID_VDEC_P0			(CLKID_BASE + 88)
#define CLKID_VDEC_P1_MUX		(CLKID_BASE + 89)
#define CLKID_VDEC_P1_DIV		(CLKID_BASE + 90)
#define CLKID_VDEC_P1			(CLKID_BASE + 91)
#define CLKID_VDEC_MUX			(CLKID_BASE + 92)

#define CLKID_HCODEC_P0_MUX		(CLKID_BASE + 93)
#define CLKID_HCODEC_P0_DIV		(CLKID_BASE + 94)
#define CLKID_HCODEC_P0			(CLKID_BASE + 95)
#define CLKID_HCODEC_P1_MUX		(CLKID_BASE + 96)
#define CLKID_HCODEC_P1_DIV		(CLKID_BASE + 97)
#define CLKID_HCODEC_P1			(CLKID_BASE + 98)
#define CLKID_HCODEC_MUX		(CLKID_BASE + 99)

#define CLKID_HEVCB_P0_MUX		(CLKID_BASE + 100)
#define CLKID_HEVCB_P0_DIV		(CLKID_BASE + 101)
#define CLKID_HEVCB_P0			(CLKID_BASE + 102)
#define CLKID_HEVCB_P1_MUX		(CLKID_BASE + 103)
#define CLKID_HEVCB_P1_DIV		(CLKID_BASE + 104)
#define CLKID_HEVCB_P1			(CLKID_BASE + 105)
#define CLKID_HEVCB_MUX			(CLKID_BASE + 106)

#define CLKID_HEVCF_P0_MUX		(CLKID_BASE + 107)
#define CLKID_HEVCF_P0_DIV		(CLKID_BASE + 108)
#define CLKID_HEVCF_P0			(CLKID_BASE + 109)
#define CLKID_HEVCF_P1_MUX		(CLKID_BASE + 110)
#define CLKID_HEVCF_P1_DIV		(CLKID_BASE + 111)
#define CLKID_HEVCF_P1			(CLKID_BASE + 112)
#define CLKID_HEVCF_MUX			(CLKID_BASE + 113)

#define CLKID_WAVE_A_MUX		(CLKID_BASE + 114)
#define CLKID_WAVE_A_DIV		(CLKID_BASE + 115)
#define CLKID_WAVE_A_GATE		(CLKID_BASE + 116)
#define CLKID_WAVE_B_MUX		(CLKID_BASE + 117)
#define CLKID_WAVE_B_DIV		(CLKID_BASE + 118)
#define CLKID_WAVE_B_GATE		(CLKID_BASE + 119)
#define CLKID_WAVE_C_MUX		(CLKID_BASE + 120)
#define CLKID_WAVE_C_DIV		(CLKID_BASE + 121)
#define CLKID_WAVE_C_GATE		(CLKID_BASE + 122)

#define CLKID_VPU_0_MUX			(CLKID_BASE + 123)
#define CLKID_VPU_0_DIV			(CLKID_BASE + 124)
#define CLKID_VPU_0			(CLKID_BASE + 125)
#define CLKID_VPU_1_MUX			(CLKID_BASE + 126)
#define CLKID_VPU_1_DIV			(CLKID_BASE + 127)
#define CLKID_VPU_1			(CLKID_BASE + 128)
#define CLKID_VPU			(CLKID_BASE + 129)

#define CLKID_VPU_CLKB_TMP_MUX		(CLKID_BASE + 130)
#define CLKID_VPU_CLKB_TMP_DIV		(CLKID_BASE + 131)
#define CLKID_VPU_CLKB_TMP		(CLKID_BASE + 132)
#define CLKID_VPU_CLKB_DIV		(CLKID_BASE + 133)
#define CLKID_VPU_CLKB			(CLKID_BASE + 134)

#define CLKID_VPU_CLKC_P0_MUX		(CLKID_BASE + 135)
#define CLKID_VPU_CLKC_P0_DIV		(CLKID_BASE + 136)
#define CLKID_VPU_CLKC_P0		(CLKID_BASE + 137)
#define CLKID_VPU_CLKC_P1_MUX		(CLKID_BASE + 138)
#define CLKID_VPU_CLKC_P1_DIV		(CLKID_BASE + 139)
#define CLKID_VPU_CLKC_P1		(CLKID_BASE + 140)
#define CLKID_VPU_CLKC_MUX		(CLKID_BASE + 141)

#define CLKID_VAPB_0_MUX		(CLKID_BASE + 142)
#define CLKID_VAPB_0_DIV		(CLKID_BASE + 143)
#define CLKID_VAPB_0			(CLKID_BASE + 144)
#define CLKID_VAPB_1_MUX		(CLKID_BASE + 145)
#define CLKID_VAPB_1_DIV		(CLKID_BASE + 146)
#define CLKID_VAPB_1			(CLKID_BASE + 147)
#define CLKID_VAPB			(CLKID_BASE + 148)

#define CLKID_GE2D			(CLKID_BASE + 149)

#define CLKID_VDIN_MEAS_MUX		(CLKID_BASE + 150)
#define CLKID_VDIN_MEAS_DIV		(CLKID_BASE + 151)
#define CLKID_VDIN_MEAS_GATE		(CLKID_BASE + 152)

#define CLKID_SD_EMMC_C_CLK_MUX		(CLKID_BASE + 153)
#define CLKID_SD_EMMC_C_CLK_DIV		(CLKID_BASE + 154)
#define CLKID_SD_EMMC_C_CLK		(CLKID_BASE + 155)
#define CLKID_SD_EMMC_A_CLK_MUX		(CLKID_BASE + 156)
#define CLKID_SD_EMMC_A_CLK_DIV		(CLKID_BASE + 157)
#define CLKID_SD_EMMC_A_CLK		(CLKID_BASE + 158)
#define CLKID_SD_EMMC_B_CLK_MUX		(CLKID_BASE + 159)
#define CLKID_SD_EMMC_B_CLK_DIV		(CLKID_BASE + 160)
#define CLKID_SD_EMMC_B_CLK		(CLKID_BASE + 161)

#define CLKID_SPICC0_MUX		(CLKID_BASE + 162)
#define CLKID_SPICC0_DIV		(CLKID_BASE + 163)
#define CLKID_SPICC0_GATE		(CLKID_BASE + 164)
#define CLKID_SPICC1_MUX		(CLKID_BASE + 165)
#define CLKID_SPICC1_DIV		(CLKID_BASE + 166)
#define CLKID_SPICC1_GATE		(CLKID_BASE + 167)

#define CLKID_PWM_A_MUX			(CLKID_BASE + 168)
#define CLKID_PWM_A_DIV			(CLKID_BASE + 169)
#define CLKID_PWM_A_GATE		(CLKID_BASE + 170)
#define CLKID_PWM_B_MUX			(CLKID_BASE + 171)
#define CLKID_PWM_B_DIV			(CLKID_BASE + 172)
#define CLKID_PWM_B_GATE		(CLKID_BASE + 173)
#define CLKID_PWM_C_MUX			(CLKID_BASE + 174)
#define CLKID_PWM_C_DIV			(CLKID_BASE + 175)
#define CLKID_PWM_C_GATE		(CLKID_BASE + 176)
#define CLKID_PWM_D_MUX			(CLKID_BASE + 177)
#define CLKID_PWM_D_DIV			(CLKID_BASE + 178)
#define CLKID_PWM_D_GATE		(CLKID_BASE + 179)
#define CLKID_PWM_E_MUX			(CLKID_BASE + 180)
#define CLKID_PWM_E_DIV			(CLKID_BASE + 181)
#define CLKID_PWM_E_GATE		(CLKID_BASE + 182)
#define CLKID_PWM_F_MUX			(CLKID_BASE + 183)
#define CLKID_PWM_F_DIV			(CLKID_BASE + 184)
#define CLKID_PWM_F_GATE		(CLKID_BASE + 185)
#define CLKID_PWM_G_MUX			(CLKID_BASE + 186)
#define CLKID_PWM_G_DIV			(CLKID_BASE + 187)
#define CLKID_PWM_G_GATE		(CLKID_BASE + 188)
#define CLKID_PWM_H_MUX			(CLKID_BASE + 189)
#define CLKID_PWM_H_DIV			(CLKID_BASE + 190)
#define CLKID_PWM_H_GATE		(CLKID_BASE + 191)
#define CLKID_PWM_I_MUX			(CLKID_BASE + 192)
#define CLKID_PWM_I_DIV			(CLKID_BASE + 193)
#define CLKID_PWM_I_GATE		(CLKID_BASE + 194)
#define CLKID_PWM_J_MUX			(CLKID_BASE + 195)
#define CLKID_PWM_J_DIV			(CLKID_BASE + 196)
#define CLKID_PWM_J_GATE		(CLKID_BASE + 197)

#define CLKID_SARADC_MUX		(CLKID_BASE + 198)
#define CLKID_SARADC_DIV		(CLKID_BASE + 199)
#define CLKID_SARADC_GATE		(CLKID_BASE + 200)
#define CLKID_GEN_MUX			(CLKID_BASE + 201)
#define CLKID_GEN_DIV			(CLKID_BASE + 202)
#define CLKID_GEN_GATE			(CLKID_BASE + 203)

#define CLKID_DDR			(CLKID_BASE + 204)
#define CLKID_DOS			(CLKID_BASE + 205)
#define CLKID_ETHPHY			(CLKID_BASE + 206)
#define CLKID_MALI_GATE			(CLKID_BASE + 207)
#define CLKID_AOCPU			(CLKID_BASE + 208)
#define CLKID_AUCPU			(CLKID_BASE + 209)
#define CLKID_CEC			(CLKID_BASE + 210)
#define CLKID_SD_EMMC_A			(CLKID_BASE + 211)
#define CLKID_SD_EMMC_B			(CLKID_BASE + 212)
#define CLKID_NAND			(CLKID_BASE + 213)
#define CLKID_SMARTCARD			(CLKID_BASE + 214)
#define CLKID_ACODEC			(CLKID_BASE + 215)
#define CLKID_SPIFC			(CLKID_BASE + 216)
#define CLKID_MSR_CLK			(CLKID_BASE + 217)
#define CLKID_IR_CTRL			(CLKID_BASE + 218)
#define CLKID_AUDIO			(CLKID_BASE + 219)
#define CLKID_ETH			(CLKID_BASE + 220)
#define CLKID_UART_A			(CLKID_BASE + 221)
#define CLKID_UART_B			(CLKID_BASE + 222)
#define CLKID_UART_C			(CLKID_BASE + 223)
#define CLKID_UART_D			(CLKID_BASE + 224)
#define CLKID_UART_E			(CLKID_BASE + 225)
#define CLKID_AIFIFO			(CLKID_BASE + 226)
#define CLKID_TS_DDR			(CLKID_BASE + 227)
#define CLKID_TS_PLL			(CLKID_BASE + 228)
#define CLKID_G2D			(CLKID_BASE + 229)
#define CLKID_SPICC0			(CLKID_BASE + 230)
#define CLKID_SPICC1			(CLKID_BASE + 231)
#define CLKID_PCIE			(CLKID_BASE + 232)
#define CLKID_USB			(CLKID_BASE + 233)
#define CLKID_PCIE_PHY			(CLKID_BASE + 234)
#define CLKID_I2C_M_A			(CLKID_BASE + 235)
#define CLKID_I2C_M_B			(CLKID_BASE + 236)
#define CLKID_I2C_M_C			(CLKID_BASE + 237)
#define CLKID_I2C_M_D			(CLKID_BASE + 238)
#define CLKID_I2C_M_E			(CLKID_BASE + 239)
#define CLKID_I2C_M_F			(CLKID_BASE + 240)
#define CLKID_HDMITX_APB		(CLKID_BASE + 241)
#define CLKID_I2C_S_A			(CLKID_BASE + 242)
#define CLKID_USB1_TO_DDR		(CLKID_BASE + 243)
#define CLKID_HDCP22			(CLKID_BASE + 244)
#define CLKID_MMC_APB			(CLKID_BASE + 245)
#define CLKID_RSA			(CLKID_BASE + 246)
#define CLKID_CPU_DEBUG			(CLKID_BASE + 247)
#define CLKID_DSPA			(CLKID_BASE + 248)
#define CLKID_VPU_INTR			(CLKID_BASE + 249)
#define CLKID_SAR_ADC			(CLKID_BASE + 250)
#define CLKID_GIC			(CLKID_BASE + 251)
#define CLKID_PWM_AB			(CLKID_BASE + 252)
#define CLKID_PWM_CD			(CLKID_BASE + 253)
#define CLKID_PWM_EF			(CLKID_BASE + 254)
#define CLKID_PWM_GH			(CLKID_BASE + 255)
#define CLKID_PWM_IJ			(CLKID_BASE + 256)

#define NR_CLKS				(CLKID_BASE + 257)

#endif /* __SC2_CLKC_H */
