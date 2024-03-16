/*
 * hi6555v2_driver codec driver.
 *
 * Copyright (c) 2015 Hisilicon Technologies CO., Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef __HI6555V2_PMU_REG_DEF_H__
#define __HI6555V2_PMU_REG_DEF_H__

/* reg_codec Base address of Module's Register */
#define HI6555V200_PMU_CODEC_BASE                       (0x0)

/******************************************************************************/
/*                      Hi6555V200 reg_codec Registers' Definitions                            */
/******************************************************************************/

#define CLK_EN_CFG_REG         (HI6555V200_PMU_CODEC_BASE + 0x380) /* ʱ��ʹ�����üĴ����� */
#define CODEC_ANA_EN_LEN    1
#define CODEC_ANA_EN_OFFSET 6
#define SIF_EN_LEN          1
#define SIF_EN_OFFSET       5
#define ADC_MIC3_EN_LEN     1
#define ADC_MIC3_EN_OFFSET  4
#define ADCR_EN_LEN         1
#define ADCR_EN_OFFSET      3
#define ADCL_EN_LEN         1
#define ADCL_EN_OFFSET      2
#define DACR_EN_LEN         1
#define DACR_EN_OFFSET      1
#define DACL_EN_LEN         1
#define DACL_EN_OFFSET      0

#define CLK_EDGE_CFG_REG       (HI6555V200_PMU_CODEC_BASE + 0x381) /* ��ģ�ӿ�ʱ����ѡ�� */
#define ADC_MIC3_CLK_EDGE_SEL_LEN    1
#define ADC_MIC3_CLK_EDGE_SEL_OFFSET 4
#define ADCR_CLK_EDGE_SEL_LEN        1
#define ADCR_CLK_EDGE_SEL_OFFSET     3
#define ADCL_CLK_EDGE_SEL_LEN        1
#define ADCL_CLK_EDGE_SEL_OFFSET     2
#define DACR_CLK_EDGE_SEL_LEN        1
#define DACR_CLK_EDGE_SEL_OFFSET     1
#define DACL_CLK_EDGE_SEL_LEN        1
#define DACL_CLK_EDGE_SEL_OFFSET     0

#define SIF_LOOPBACK_CFG_REG   (HI6555V200_PMU_CODEC_BASE + 0x382) /* SIF�ӿڻ��ؿ��ơ� */
#define ADC_LOOPBACK_LEN    2
#define ADC_LOOPBACK_OFFSET 2
#define DAC_LOOPBACK_LEN    2
#define DAC_LOOPBACK_OFFSET 0

#define DAC_CHAN_CTRL_REG      (HI6555V200_PMU_CODEC_BASE + 0x383) /* DACͨ·���á� */
#define DACR_DIN_SEL_LEN    2
#define DACR_DIN_SEL_OFFSET 4
#define DACL_DIN_SEL_LEN    2
#define DACL_DIN_SEL_OFFSET 2
#define DACR_DWA_EN_LEN     1
#define DACR_DWA_EN_OFFSET  1
#define DACL_DWA_EN_LEN     1
#define DACL_DWA_EN_OFFSET  0

#define ADC_CHAN_CTRL_REG      (HI6555V200_PMU_CODEC_BASE + 0x384) /* ADCͨ·���á� */
#define ADC_MIC3_DOUT_SEL_LEN    2
#define ADC_MIC3_DOUT_SEL_OFFSET 4
#define ADCR_DOUT_SEL_LEN        2
#define ADCR_DOUT_SEL_OFFSET     2
#define ADCL_DOUT_SEL_LEN        2
#define ADCL_DOUT_SEL_OFFSET     0

#define ANA_IRQ_SIG_STAT_REG   (HI6555V200_PMU_CODEC_BASE + 0x385) /* ģ���ж�ԭʼ״̬�Ĵ����� */
#define HS_DET_IRQ_LEN         1
#define HS_DET_IRQ_OFFSET      3
#define HS_MIC_ECO_IRQ_LEN     1
#define HS_MIC_ECO_IRQ_OFFSET  2
#define HS_MIC_NOR2_IRQ_LEN    1
#define HS_MIC_NOR2_IRQ_OFFSET 1
#define HS_MIC_NOR1_IRQ_LEN    1
#define HS_MIC_NOR1_IRQ_OFFSET 0

#define ANA_IRQM_REG0_REG      (HI6555V200_PMU_CODEC_BASE + 0x386) /* ANA_IRQ_REG�ж����μĴ����� */
#define ANA_IRQ_MASK_LEN    8
#define ANA_IRQ_MASK_OFFSET 0

#define ANA_IRQ_REG0_REG       (HI6555V200_PMU_CODEC_BASE + 0x387) /* ģ���жϼĴ�����0��д1�壬���ϱ��ж���Ϣ�� */
#define HS_DET_IRQ_NEG_LEN         1
#define HS_DET_IRQ_NEG_OFFSET      7
#define HS_DET_IRQ_POS_LEN         1
#define HS_DET_IRQ_POS_OFFSET      6
#define HS_MIC_ECO_IRQ_NEG_LEN     1
#define HS_MIC_ECO_IRQ_NEG_OFFSET  5
#define HS_MIC_ECO_IRQ_POS_LEN     1
#define HS_MIC_ECO_IRQ_POS_OFFSET  4
#define HS_MIC_NOR2_IRQ_NEG_LEN    1
#define HS_MIC_NOR2_IRQ_NEG_OFFSET 3
#define HS_MIC_NOR2_IRQ_POS_LEN    1
#define HS_MIC_NOR2_IRQ_POS_OFFSET 2
#define HS_MIC_NOR1_IRQ_NEG_LEN    1
#define HS_MIC_NOR1_IRQ_NEG_OFFSET 1
#define HS_MIC_NOR1_IRQ_POS_LEN    1
#define HS_MIC_NOR1_IRQ_POS_OFFSET 0

#define DEB_CNT_HS_DET_CFG_REG (HI6555V200_PMU_CODEC_BASE + 0x388) /* hs_det_irqȥ�����á� */
#define BYPASS_DEB_HS_DET_IRQ_LEN    1
#define BYPASS_DEB_HS_DET_IRQ_OFFSET 5
#define DEB_CNT_HS_DET_IRQ_LEN       5
#define DEB_CNT_HS_DET_IRQ_OFFSET    0

#define DEB_CNT_HS_MIC_CFG_REG (HI6555V200_PMU_CODEC_BASE + 0x389) /* hs_mic_irqȥ�����á� */
#define BYPASS_DEB_HS_MIC_IRQ_LEN    1
#define BYPASS_DEB_HS_MIC_IRQ_OFFSET 5
#define DEB_CNT_HS_MIC_IRQ_LEN       5
#define DEB_CNT_HS_MIC_IRQ_OFFSET    0

#define CODEC_ANA_RW01_REG (HI6555V200_PMU_CODEC_BASE + 0x38A) /* vref/ctcm/ibiasģ��ʹ�� */
#define CODEC_IBIAS_PD_LEN      1
#define CODEC_IBIAS_PD_OFFSET   2
#define CODEC_VREFSEL_LEN       2
#define CODEC_VREFSEL_OFFSET    0

#define CODEC_ANA_RW02_REG (HI6555V200_PMU_CODEC_BASE + 0x38B) /* micpgaʹ�� */
#define CODEC_MAINPGA_PD_LEN          1
#define CODEC_MAINPGA_PD_OFFSET       6
#define CODEC_AUXPGA_PD_LEN           1
#define CODEC_AUXPGA_PD_OFFSET        5
#define CODEC_MIC3PGA_PD_LEN          1
#define CODEC_MIC3PGA_PD_OFFSET       4
#define CODEC_CAPLESS_MODE_SEL_LEN    1
#define CODEC_CAPLESS_MODE_SEL_OFFSET 3
#define CODEC_MAINPGA_MUTE_LEN        1
#define CODEC_MAINPGA_MUTE_OFFSET     2
#define CODEC_AUXPGA_MUTE_LEN         1
#define CODEC_AUXPGA_MUTE_OFFSET      1
#define CODEC_MIC3PGA_MUTE_LEN        1
#define CODEC_MIC3PGA_MUTE_OFFSET     0

#define CODEC_ANA_RW03_REG (HI6555V200_PMU_CODEC_BASE + 0x38C) /* adcʹ�� */
#define CODEC_ADCL_PD_LEN       1
#define CODEC_ADCL_PD_OFFSET    6
#define CODEC_ADCR_PD_LEN       1
#define CODEC_ADCR_PD_OFFSET    5
#define CODEC_ADC3_PD_LEN       1
#define CODEC_ADC3_PD_OFFSET    4
#define CODEC_RESERVED_1_LEN    1
#define CODEC_RESERVED_1_OFFSET 3
#define CODEC_MUTE_ADCL_LEN     1
#define CODEC_MUTE_ADCL_OFFSET  2
#define CODEC_MUTE_ADCR_LEN     1
#define CODEC_MUTE_ADCR_OFFSET  1
#define CODEC_MUTE_ADC3_LEN     1
#define CODEC_MUTE_ADC3_OFFSET  0

#define CODEC_ANA_RW4_REG      (HI6555V200_PMU_CODEC_BASE + 0x38D) /* dacʹ�ܡ� */
#define CODEC_ANA_RW_04_LEN    8
#define CODEC_ANA_RW_04_OFFSET 0
#define CODEC_ANA_RW_04_DAPL_PD_LEN 1
#define CODEC_ANA_RW_04_DAPL_PD_OFFSET 1
#define CODEC_ANA_RW_04_DAPR_PD_LEN 1
#define CODEC_ANA_RW_04_DAPR_PD_OFFSET 0

#define CODEC_ANA_RW5_REG      (HI6555V200_PMU_CODEC_BASE + 0x38E) /* headphoneʹ�ܡ� */
#define CODEC_ANA_RW_05_CHARGEDUMP_PD_OFFSET 7
#define CODEC_ANA_RW_05_HP_POP_PD_OFFSET 6
#define CODEC_ANA_RW_05_HPL_MIXER_PD_OFFSET 5
#define CODEC_ANA_RW_05_HPR_MIXER_PD_OFFSET 4
#define CODEC_ANA_RW_05_HPL_PD_OFFSET 3
#define CODEC_ANA_RW_05_HPR_PD_OFFSET 2
#define CODEC_ANA_RW_05_HPL_MUTE_OFFSET 1
#define CODEC_ANA_RW_05_HPR_MUTE_OFFSET 0

#define CODEC_ANA_RW06_REG (HI6555V200_PMU_CODEC_BASE + 0x38F) /* earphone/lineoutʹ�� */
#define CODEC_LOUT_PD_LEN          1
#define CODEC_LOUT_PD_OFFSET       5
#define CODEC_LOUT_MUTE_LEN        1
#define CODEC_LOUT_MUTE_OFFSET     4
#define CODEC_MIXOUT_EAR_PD_LEN    1
#define CODEC_MIXOUT_EAR_PD_OFFSET 3
#define CODEC_EAR_VREF_PD_LEN      1
#define CODEC_EAR_VREF_PD_OFFSET   2
#define CODEC_EAR_PD_LEN           1
#define CODEC_EAR_PD_OFFSET        1
#define CODEC_EAR_MUTE_LEN         1
#define CODEC_EAR_MUTE_OFFSET      0

#define CODEC_ANA_RW07_REG (HI6555V200_PMU_CODEC_BASE + 0x390) /* micbiasʹ�� */
#define CODEC_HSMIC_PD_LEN        1
#define CODEC_HSMIC_PD_OFFSET     6
#define CODEC_MICB1_PD_LEN        1
#define CODEC_MICB1_PD_OFFSET     5
#define CODEC_MICB2_PD_LEN        1
#define CODEC_MICB2_PD_OFFSET     4
#define CODEC_RESERVED_1_LEN      1
#define CODEC_RESERVED_1_OFFSET   3
#define CODEC_HSMICB_DSCHG_LEN    1
#define CODEC_HSMICB_DSCHG_OFFSET 2
#define CODEC_MICB1_DSCHG_LEN     1
#define CODEC_MICB1_DSCHG_OFFSET  1
#define CODEC_MICB2_DSCHG_LEN     1
#define CODEC_MICB2_DSCHG_OFFSET  0

#define CODEC_ANA_RW08_REG (HI6555V200_PMU_CODEC_BASE + 0x391) /* mbhdʹ�� */
#define CODEC_MBHD_COMP_PD_LEN    1
#define CODEC_MBHD_COMP_PD_OFFSET 2
#define CODEC_MBHD_BUFF_PD_LEN    1
#define CODEC_MBHD_BUFF_PD_OFFSET 1
#define CODEC_MBHD_ECO_EN_LEN     1
#define CODEC_MBHD_ECO_EN_OFFSET  0

#define CODEC_ANA_RW09_REG (HI6555V200_PMU_CODEC_BASE + 0x392) /* mainpga���� */
#define CODEC_MICPGA_UNLOCK_BPS_LEN    1
#define CODEC_MICPGA_UNLOCK_BPS_OFFSET 6
#define CODEC_MAINPGA_SEL_LEN          2
#define CODEC_MAINPGA_SEL_OFFSET       4
#define CODEC_MAINPGA_BOOST_LEN        1
#define CODEC_MAINPGA_BOOST_OFFSET     3
#define CODEC_MAINPGA_GAIN_LEN         3
#define CODEC_MAINPGA_GAIN_OFFSET      0

#define CODEC_ANA_RW10_REG (HI6555V200_PMU_CODEC_BASE + 0x393) /* auxpga���� */
#define CODEC_AUXPGA_SEL_LEN      2
#define CODEC_AUXPGA_SEL_OFFSET   4
#define CODEC_AUXPGA_BOOST_LEN    1
#define CODEC_AUXPGA_BOOST_OFFSET 3
#define CODEC_AUXPGA_GAIN_LEN     3
#define CODEC_AUXPGA_GAIN_OFFSET  0

#define CODEC_ANA_RW11_REG (HI6555V200_PMU_CODEC_BASE + 0x394) /* mic3pga���� */
#define CODEC_MIC3PGA_SEL_LEN      2
#define CODEC_MIC3PGA_SEL_OFFSET   4
#define CODEC_MIC3PGA_BOOST_LEN    1
#define CODEC_MIC3PGA_BOOST_OFFSET 3
#define CODEC_MIC3PGA_GAIN_LEN     3
#define CODEC_MIC3PGA_GAIN_OFFSET  0

#define CODEC_ANA_RW12_REG (HI6555V200_PMU_CODEC_BASE + 0x395) /* adcl���� */
#define CODEC_IDEL_TONE_CTRL_LEN    2
#define CODEC_IDEL_TONE_CTRL_OFFSET 6
#define CODEC_ADCL_MIXIN_LEN        6
#define CODEC_ADCL_MIXIN_OFFSET     0
#define CODEC_ADCL_MIXIN_DACR_LEN        1
#define CODEC_ADCL_MIXIN_DACR_OFFSET     5
#define CODEC_ADCL_MIXIN_DACL_LEN        1
#define CODEC_ADCL_MIXIN_DACL_OFFSET     4
#define CODEC_ADCL_MIXIN_MIC_PGA2_LEN        1
#define CODEC_ADCL_MIXIN_MIC_PGA2_OFFSET     1
#define CODEC_ADCL_MIXIN_MIC_PGA1_LEN        1
#define CODEC_ADCL_MIXIN_MIC_PGA1_OFFSET     0

#define CODEC_ANA_RW13_REG (HI6555V200_PMU_CODEC_BASE + 0x396) /* adcl���� */
#define CODEC_ADCL_DWA_BPS_LEN      1
#define CODEC_ADCL_DWA_BPS_OFFSET   7
#define CODEC_ADCL_CLK_DELAY_LEN    3
#define CODEC_ADCL_CLK_DELAY_OFFSET 4
#define CODEC_ADCL_DAC_BIAS_LEN     2
#define CODEC_ADCL_DAC_BIAS_OFFSET  2
#define CODEC_ADCL_FLSTN_LEN        2
#define CODEC_ADCL_FLSTN_OFFSET     0

#define CODEC_ANA_RW14_REG (HI6555V200_PMU_CODEC_BASE + 0x397) /* adcr���� */
#define CODEC_ADCR_MIXIN_LEN    6
#define CODEC_ADCR_MIXIN_OFFSET 0
#define CODEC_ADCR_MIXIN_DACR_LEN        1
#define CODEC_ADCR_MIXIN_DACR_OFFSET     5
#define CODEC_ADCR_MIXIN_DACL_LEN        1
#define CODEC_ADCR_MIXIN_DACL_OFFSET     4
#define CODEC_ADCR_MIXIN_MIC_PGA1_LEN        1
#define CODEC_ADCR_MIXIN_MIC_PGA1_OFFSET     1
#define CODEC_ADCR_MIXIN_MIC_PGA2_LEN        1
#define CODEC_ADCR_MIXIN_MIC_PGA2_OFFSET     0

#define CODEC_ANA_RW15_REG (HI6555V200_PMU_CODEC_BASE + 0x398) /* adcr���� */
#define CODEC_ADCR_DWA_BPS_LEN      1
#define CODEC_ADCR_DWA_BPS_OFFSET   7
#define CODEC_ADCR_CLK_DELAY_LEN    3
#define CODEC_ADCR_CLK_DELAY_OFFSET 4
#define CODEC_ADCR_DAC_BIAS_LEN     2
#define CODEC_ADCR_DAC_BIAS_OFFSET  2
#define CODEC_ADCR_FLSTN_LEN        2
#define CODEC_ADCR_FLSTN_OFFSET     0

#define CODEC_ANA_RW16_REG (HI6555V200_PMU_CODEC_BASE + 0x399) /* adc3���� */
#define CODEC_ADC3_MIXIN_LEN    6
#define CODEC_ADC3_MIXIN_OFFSET 0
#define CODEC_ADC3_MIXIN_DACR_LEN        1
#define CODEC_ADC3_MIXIN_DACR_OFFSET     5
#define CODEC_ADC3_MIXIN_DACL_LEN        1
#define CODEC_ADC3_MIXIN_DACL_OFFSET     4
#define CODEC_ADC3_MIXIN_MIC_PGA1_LEN        1
#define CODEC_ADC3_MIXIN_MIC_PGA1_OFFSET     1
#define CODEC_ADC3_MIXIN_MIC_PGA3_LEN        1
#define CODEC_ADC3_MIXIN_MIC_PGA3_OFFSET     0

#define CODEC_ANA_RW17_REG (HI6555V200_PMU_CODEC_BASE + 0x39A) /* adc3���� */
#define CODEC_ADC3_DWA_BPS_LEN      1
#define CODEC_ADC3_DWA_BPS_OFFSET   7
#define CODEC_ADC3_CLK_DELAY_LEN    3
#define CODEC_ADC3_CLK_DELAY_OFFSET 4
#define CODEC_ADC3_DAC_BIAS_LEN     2
#define CODEC_ADC3_DAC_BIAS_OFFSET  2
#define CODEC_ADC3_FLSTN_LEN        2
#define CODEC_ADC3_FLSTN_OFFSET     0

#define CODEC_ANA_RW18_REG (HI6555V200_PMU_CODEC_BASE + 0x39B) /* dac���� */
#define CODEC_PULL_CPN_DIS_LEN    1
#define CODEC_PULL_CPN_DIS_OFFSET 4
#define CODEC_DACL_ICTRL_LEN      2
#define CODEC_DACL_ICTRL_OFFSET   2
#define CODEC_DACR_ICTRL_LEN      2
#define CODEC_DACR_ICTRL_OFFSET   0

#define CODEC_ANA_RW19_REG (HI6555V200_PMU_CODEC_BASE + 0x39C) /* chargepump���� */
#define CODEC_CP_CLKSET_LEN          1
#define CODEC_CP_CLKSET_OFFSET       7
#define CODEC_CP_AUTOSOFT_DIS_LEN    1
#define CODEC_CP_AUTOSOFT_DIS_OFFSET 6
#define CODEC_CP_SOFT_DLY_CFG_LEN    2
#define CODEC_CP_SOFT_DLY_CFG_OFFSET 4
#define CODEC_CP_SW_CFG_LEN          2
#define CODEC_CP_SW_CFG_OFFSET       2
#define CODEC_CP_DT_CFG_LEN          2
#define CODEC_CP_DT_CFG_OFFSET       0

#define CODEC_ANA_RW20_REG     (HI6555V200_PMU_CODEC_BASE + 0x39D) /* hp mixer����ѡ�� */
#define CODEC_ANA_RW_20_LEN    8
#define CODEC_ANA_RW_20_OFFSET 0
#define CODEC_ANA_RW_20_HP_L_DACL_OFFSET 7
#define CODEC_ANA_RW_20_HP_L_DACR_OFFSET 6
#define CODEC_ANA_RW_20_HP_R_DACL_OFFSET 2
#define CODEC_ANA_RW_20_HP_R_DACR_OFFSET 3

#define CODEC_ANA_RW21_REG (HI6555V200_PMU_CODEC_BASE + 0x39E) /* hp ����ѡ�� */
#define CODEC_HSL_GAIN_LEN    4
#define CODEC_HSL_GAIN_OFFSET 4
#define CODEC_HSR_GAIN_LEN    4
#define CODEC_HSR_GAIN_OFFSET 0

#define CODEC_ANA_RW22_REG (HI6555V200_PMU_CODEC_BASE + 0x39F) /* hp���� */
#define CODEC_HSL_MIN_GAIN_LEN    1
#define CODEC_HSL_MIN_GAIN_OFFSET 5
#define CODEC_HSR_MIN_GAIN_LEN    1
#define CODEC_HSR_MIN_GAIN_OFFSET 4
#define CODEC_STB_CTRL_SEC_LEN    2
#define CODEC_STB_CTRL_SEC_OFFSET 2
#define CODEC_STB_CTRL_LEN        2
#define CODEC_STB_CTRL_OFFSET     0

#define CODEC_ANA_RW23_REG (HI6555V200_PMU_CODEC_BASE + 0x3A0) /* hp���� */
#define CODEC_STB_ACTIVE_CTRL_LEN    1
#define CODEC_STB_ACTIVE_CTRL_OFFSET 5
#define CODEC_STB_1N_LEN             1
#define CODEC_STB_1N_OFFSET          4
#define CODEC_HPOUT_1K_LOAD_LEN      1
#define CODEC_HPOUT_1K_LOAD_OFFSET   3
#define CODEC_STB_N12DB_GAIN_LEN     1
#define CODEC_STB_N12DB_GAIN_OFFSET  2
#define CODEC_THD_CTRL_SEC_LEN       2
#define CODEC_THD_CTRL_SEC_OFFSET    0

#define CODEC_ANA_RW24_REG (HI6555V200_PMU_CODEC_BASE + 0x3A1) /* hp pop���� */
#define CODEC_POP_DIS_LEN        1
#define CODEC_POP_DIS_OFFSET     6
#define CODEC_RST_POP_LEN        1
#define CODEC_RST_POP_OFFSET     5
#define CODEC_RL_SYNC_EN_LEN     1
#define CODEC_RL_SYNC_EN_OFFSET  4
#define CODEC_POP_DLY_CFG_LEN    2
#define CODEC_POP_DLY_CFG_OFFSET 2
#define CODEC_POP_SPD_CFG_LEN    2
#define CODEC_POP_SPD_CFG_OFFSET 0

#define CODEC_ANA_RW25_REG (HI6555V200_PMU_CODEC_BASE + 0x3A2) /* ep mixer���� */
#define CODEC_MIXOUT_EAR_DACL_LEN    1
#define CODEC_MIXOUT_EAR_DACL_OFFSET 7
#define CODEC_MIXOUT_EAR_DACR_LEN    1
#define CODEC_MIXOUT_EAR_DACR_OFFSET 6
#define CODEC_MIXOUT_EAR_LEN    4
#define CODEC_MIXOUT_EAR_OFFSET 4
#define CODEC_CR_MIXF_DACL_PGA_EN_LEN     1
#define CODEC_CR_MIXF_DACL_PGA_EN_OFFSET  3
#define CODEC_CR_MIXF_DACR_PGA_EN_LEN     1
#define CODEC_CR_MIXF_DACR_PGA_EN_OFFSET  2

#define CODEC_ANA_RW26_REG (HI6555V200_PMU_CODEC_BASE + 0x3A3) /* earphone���� */
#define CODEC_EAR_CM_CTRL_LEN    1
#define CODEC_EAR_CM_CTRL_OFFSET 4
#define CODEC_EAR_GAIN_LEN       4
#define CODEC_EAR_GAIN_OFFSET    0

#define CODEC_ANA_RW27_REG (HI6555V200_PMU_CODEC_BASE + 0x3A4) /* lineout���� */
#define CODEC_LOUT_VCM_CTRL_LEN    1
#define CODEC_LOUT_VCM_CTRL_OFFSET 4
#define CODEC_LOUT_GAIN_LEN        4
#define CODEC_LOUT_GAIN_OFFSET     0

#define CODEC_ANA_RW28_REG (HI6555V200_PMU_CODEC_BASE + 0x3A5) /* himicbias���� */
#define CODEC_HSMICB_ENB_SDET_LEN    1
#define CODEC_HSMICB_ENB_SDET_OFFSET 5
#define CODEC_HSMICB_LONOISE_LEN     1
#define CODEC_HSMICB_LONOISE_OFFSET  4
#define CODEC_HSMICB_ADJ_LEN         4
#define CODEC_HSMICB_ADJ_OFFSET      0

#define CODEC_ANA_RW29_REG (HI6555V200_PMU_CODEC_BASE + 0x3A6) /* micbias1���� */
#define CODEC_MICB1_ENB_SDET_LEN    1
#define CODEC_MICB1_ENB_SDET_OFFSET 5
#define CODEC_MICB1_LONOISE_LEN     1
#define CODEC_MICB1_LONOISE_OFFSET  4
#define CODEC_MICB1_ADJ_LEN         4
#define CODEC_MICB1_ADJ_OFFSET      0

#define CODEC_ANA_RW30_REG (HI6555V200_PMU_CODEC_BASE + 0x3A7) /* micbias2���� */
#define CODEC_MICB2_ENB_SDET_LEN    1
#define CODEC_MICB2_ENB_SDET_OFFSET 5
#define CODEC_MICB2_LONOISE_LEN     1
#define CODEC_MICB2_LONOISE_OFFSET  4
#define CODEC_MICB2_ADJ_LEN         4
#define CODEC_MICB2_ADJ_OFFSET      0

#define CODEC_ANA_RW31_REG (HI6555V200_PMU_CODEC_BASE + 0x3A8) /* �������������� */
#define CODEC_HSD_INV_LEN         1
#define CODEC_HSD_INV_OFFSET      6
#define CODEC_HSD_PULLDOWN_LEN    1
#define CODEC_HSD_PULLDOWN_OFFSET 5
#define CODEC_HSD_SEL_LEN         1
#define CODEC_HSD_SEL_OFFSET      4
#define CODEC_HSD_VTH_CFG_LEN     2
#define CODEC_HSD_VTH_CFG_OFFSET  2
#define CODEC_HSD_EN_LEN          2
#define CODEC_HSD_EN_OFFSET       0

#define CODEC_ANA_RW32_REG (HI6555V200_PMU_CODEC_BASE + 0x3A9) /* �����γ�pop���� */
#define CODEC_ANALOG_LOOP_LEN            1
#define CODEC_ANALOG_LOOP_OFFSET         3
#define CODEC_PULLOUT_POP_EN1_LEN        1
#define CODEC_PULLOUT_POP_EN1_OFFSET     2
#define CODEC_PULLOUT_POP_EN2_LEN        1
#define CODEC_PULLOUT_POP_EN2_OFFSET     1
#define CODEC_PULLOUT_HSD_DIR_SEL_LEN    1
#define CODEC_PULLOUT_HSD_DIR_SEL_OFFSET 0

#define CODEC_ANA_RW33_REG (HI6555V200_PMU_CODEC_BASE + 0x3AA) /* mbhd ref���� */
#define CODEC_MBHD_VREF_CTRL_7_LEN      1
#define CODEC_MBHD_VREF_CTRL_7_OFFSET   7
#define CODEC_MBHD_VREF_CTRL_6_4_LEN    3
#define CODEC_MBHD_VREF_CTRL_6_4_OFFSET 4
#define CODEC_MBHD_VREF_CTRL_3_2_LEN    2
#define CODEC_MBHD_VREF_CTRL_3_2_OFFSET 2
#define CODEC_MBHD_VREF_CTRL_1_0_LEN    2
#define CODEC_MBHD_VREF_CTRL_1_0_OFFSET 0

#define CODEC_ANA_RW34_REG (HI6555V200_PMU_CODEC_BASE + 0x3AB) /* adc/dacʱ�������� */
#define CODEC_ADC_CLK_SYS_EDGE_LEN    2
#define CODEC_ADC_CLK_SYS_EDGE_OFFSET 2
#define CODEC_DAC_CLK_SYS_EDGE_LEN    2
#define CODEC_DAC_CLK_SYS_EDGE_OFFSET 0

#define CODEC_ANA_RW35_REG (HI6555V200_PMU_CODEC_BASE + 0x3AC) /* rxͨ·chopʱ������ */
#define CODEC_RX_CHOP_BPS_LEN         1
#define CODEC_RX_CHOP_BPS_OFFSET      6
#define CODEC_ADC_CHOP_CLK_SEL_LEN    2
#define CODEC_ADC_CHOP_CLK_SEL_OFFSET 4
#define CODEC_CTCM_CHOP_BPS_LEN       1
#define CODEC_CTCM_CHOP_BPS_OFFSET    3
#define CODEC_BYP_CAPLESS_CHP_LEN     1
#define CODEC_BYP_CAPLESS_CHP_OFFSET  2
#define CODEC_MICPGA_CHOP_BPS_LEN     1
#define CODEC_MICPGA_CHOP_BPS_OFFSET  1
#define CODEC_ADC_SDM_CHOP_BPS_LEN    1
#define CODEC_ADC_SDM_CHOP_BPS_OFFSET 0

#define CODEC_ANA_RW36_REG (HI6555V200_PMU_CODEC_BASE + 0x3AD) /* txͨ·chopʱ������ */
#define CODEC_TX_CHOP_BPS_LEN         1
#define CODEC_TX_CHOP_BPS_OFFSET      6
#define CODEC_DAC_CHOP_CLK_SEL_LEN    2
#define CODEC_DAC_CHOP_CLK_SEL_OFFSET 4
#define CODEC_DAC_CHOP_BPS_LEN        1
#define CODEC_DAC_CHOP_BPS_OFFSET     3
#define CODEC_HS_CHOP_BPS_LEN         1
#define CODEC_HS_CHOP_BPS_OFFSET      2
#define CODEC_EAR_CLD_CHOP_BPS_LEN    1
#define CODEC_EAR_CLD_CHOP_BPS_OFFSET 1
#define CODEC_LOUT_CHOP_BPS_LEN       1
#define CODEC_LOUT_CHOP_BPS_OFFSET    0

#define CODEC_ANA_RW37_REG (HI6555V200_PMU_CODEC_BASE + 0x3AE) /* cp/popʱ������ */
#define CODEC_HS_SYS_CLK_PD_LEN     1
#define CODEC_HS_SYS_CLK_PD_OFFSET  5
#define CODEC_CLKPOP_SEL_LEN        1
#define CODEC_CLKPOP_SEL_OFFSET     4
#define CODEC_CLKCP_SRC_FREQ_LEN    1
#define CODEC_CLKCP_SRC_FREQ_OFFSET 3
#define CODEC_CLKCP_SEL_LEN         3
#define CODEC_CLKCP_SEL_OFFSET      0

#define CODEC_ANA_RW38_REG (HI6555V200_PMU_CODEC_BASE + 0x3AF) /* caplessʱ������ */
#define CODEC_CPLS_CLK_FQ_SEL_A_LEN     1
#define CODEC_CPLS_CLK_FQ_SEL_A_OFFSET  6
#define CODEC_CPLS_CLK_FQ_SEL_B_LEN     2
#define CODEC_CPLS_CLK_FQ_SEL_B_OFFSET  4
#define CODEC_CLK_CAPLESS_BPS_LEN       1
#define CODEC_CLK_CAPLESS_BPS_OFFSET    3
#define CODEC_CAPLESS_CLK_PH_SEL_LEN    1
#define CODEC_CAPLESS_CLK_PH_SEL_OFFSET 2
#define CODEC_CAPLESS_CLK_FQ_SEL_LEN    2
#define CODEC_CAPLESS_CLK_FQ_SEL_OFFSET 0

#define CODEC_ANA_RW39_REG (HI6555V200_PMU_CODEC_BASE + 0x3B0) /* ƫ�õ������� */
#define CODEC_CODEC_IBIAS_ADJ_LEN     1
#define CODEC_CODEC_IBIAS_ADJ_OFFSET  7
#define CODEC_IB05_CTCM_ADJ_LEN       3
#define CODEC_IB05_CTCM_ADJ_OFFSET    4
#define CODEC_IB05_CAPLESS_ADJ_LEN    3
#define CODEC_IB05_CAPLESS_ADJ_OFFSET 0

#define CODEC_ANA_RW40_REG (HI6555V200_PMU_CODEC_BASE + 0x3B1) /* ƫ�õ������� */
#define CODEC_IB05_MICPGA_ADJ_LEN         3
#define CODEC_IB05_MICPGA_ADJ_OFFSET      4
#define CODEC_RESERVED_1_LEN              1
#define CODEC_RESERVED_1_OFFSET           3
#define CODEC_IB05_MICPGALOGIC_ADJ_LEN    3
#define CODEC_IB05_MICPGALOGIC_ADJ_OFFSET 0

#define CODEC_ANA_RW41_REG (HI6555V200_PMU_CODEC_BASE + 0x3B2) /* ƫ�õ������� */
#define CODEC_IB05_ADCOP1_ADJ_LEN    3
#define CODEC_IB05_ADCOP1_ADJ_OFFSET 4
#define CODEC_RESERVED_1_LEN         1
#define CODEC_RESERVED_1_OFFSET      3
#define CODEC_IB05_ADCOP2_ADJ_LEN    3
#define CODEC_IB05_ADCOP2_ADJ_OFFSET 0

#define CODEC_ANA_RW42_REG (HI6555V200_PMU_CODEC_BASE + 0x3B3) /* ƫ�õ������� */
#define CODEC_IB05_ADCCOMP_ADJ_LEN    3
#define CODEC_IB05_ADCCOMP_ADJ_OFFSET 4
#define CODEC_RESERVED_1_LEN          1
#define CODEC_RESERVED_1_OFFSET       3
#define CODEC_IB05_DACI2V_ADJ_LEN     3
#define CODEC_IB05_DACI2V_ADJ_OFFSET  0

#define CODEC_ANA_RW43_REG (HI6555V200_PMU_CODEC_BASE + 0x3B4) /* ƫ�õ������� */
#define CODEC_IB05_HPMIX_ADJ_LEN    3
#define CODEC_IB05_HPMIX_ADJ_OFFSET 4
#define CODEC_RESERVED_1_LEN        1
#define CODEC_RESERVED_1_OFFSET     3
#define CODEC_IB05_HP_ADJ_LEN       3
#define CODEC_IB05_HP_ADJ_OFFSET    0

#define CODEC_ANA_RW44_REG (HI6555V200_PMU_CODEC_BASE + 0x3B5) /* ƫ�õ������� */
#define CODEC_IB05_HPLOGIC_ADJ_LEN    3
#define CODEC_IB05_HPLOGIC_ADJ_OFFSET 4
#define CODEC_RESERVED_1_LEN          1
#define CODEC_RESERVED_1_OFFSET       3
#define CODEC_IB05_EARLOGC_ADJ_LEN    3
#define CODEC_IB05_EARLOGC_ADJ_OFFSET 0

#define CODEC_ANA_RW45_REG (HI6555V200_PMU_CODEC_BASE + 0x3B6) /* ƫ�õ������� */
#define CODEC_IB05_EARMIX_ADJ_LEN    3
#define CODEC_IB05_EARMIX_ADJ_OFFSET 4
#define CODEC_RESERVED_1_LEN         1
#define CODEC_RESERVED_1_OFFSET      3
#define CODEC_IB05_EAR_ADJ_LEN       3
#define CODEC_IB05_EAR_ADJ_OFFSET    0

#define CODEC_ANA_RW46_REG (HI6555V200_PMU_CODEC_BASE + 0x3B7) /* ƫ�õ������� */
#define CODEC_IB05_LO_ADJ_LEN         3
#define CODEC_IB05_LO_ADJ_OFFSET      4
#define CODEC_RESERVED_1_LEN          1
#define CODEC_RESERVED_1_OFFSET       3
#define CODEC_IB05_LOLOGIC_ADJ_LEN    3
#define CODEC_IB05_LOLOGIC_ADJ_OFFSET 0

#define CODEC_ANA_RW47_REG (HI6555V200_PMU_CODEC_BASE + 0x3B8) /* ƫ�õ������� */
#define CODEC_IB05_MICB_ADJ_LEN    3
#define CODEC_IB05_MICB_ADJ_OFFSET 0

#define CODEC_ANA_RW48_REG (HI6555V200_PMU_CODEC_BASE + 0x3B9) /* ƫ�õ������� */
#define CODEC_IB05_REV1_ADJ_LEN    3
#define CODEC_IB05_REV1_ADJ_OFFSET 4
#define CODEC_RESERVED_1_LEN       1
#define CODEC_RESERVED_1_OFFSET    3
#define CODEC_IB05_REV2_ADJ_LEN    3
#define CODEC_IB05_REV2_ADJ_OFFSET 0

#define CODEC_ANA_RW49_REG (HI6555V200_PMU_CODEC_BASE + 0x3BA) /* ƫ�õ������� */
#define CODEC_IB05_REV3_ADJ_LEN    3
#define CODEC_IB05_REV3_ADJ_OFFSET 4
#define CODEC_RESERVED_1_LEN       1
#define CODEC_RESERVED_1_OFFSET    3
#define CODEC_IB05_REV4_ADJ_LEN    3
#define CODEC_IB05_REV4_ADJ_OFFSET 0


/******************************************************************************/
/*                      Hi6555V200 ctrl Registers' Definitions                            */
/******************************************************************************/
#define CTRL_REG_CLASSD_CTRL0_REG               (HI6555V200_PMU_CODEC_BASE + 0x109)
#define CTRL_REG_CLASSD_GAIN_LEN        2
#define CTRL_REG_CLASSD_GAIN_OFFSET     6
#define CTRL_REG_CLASSD_I_OCP_LEN       2
#define CTRL_REG_CLASSD_I_OCP_OFFSET    4
#define CTRL_REG_CLASSD_DRV_EN_LEN      1
#define CTRL_REG_CLASSD_DRV_EN_OFFSET   3
#define CTRL_REG_CLASSD_MUTE_SEL_LEN    1
#define CTRL_REG_CLASSD_MUTE_SEL_OFFSET 2
#define CTRL_REG_CLASSD_MUTE_LEN        1
#define CTRL_REG_CLASSD_MUTE_OFFSET     1
#define CTRL_REG_REG_CLASSD_EN_LEN      1
#define CTRL_REG_REG_CLASSD_EN_OFFSET   0

#define CTRL_REG_CLASSD_CTRL1_REG               (HI6555V200_PMU_CODEC_BASE + 0x10A)
#define CTRL_REG_CLASSD_CTRL1_LEN     2
#define CTRL_REGCLASSD_CTRL1_OFFSET   6
#define CTRL_REG_CLASSD_N_SEL_LEN     2
#define CTRL_REG_CLASSD_N_SEL_OFFSET  4
#define CTRL_REG_CLASSD_P_SEL_LEN     2
#define CTRL_REG_CLASSD_P_SEL_OFFSET  2
#define CTRL_REG_CLASSD_I_PUMP_LEN    2
#define CTRL_REG_CLASSD_I_PUMP_OFFSET 0

#define CTRL_REG_CLASSD_CTRL2_REG               (HI6555V200_PMU_CODEC_BASE + 0x10B)
#define CTRL_REG_CLASSD_RESERVE0_LEN    4
#define CTRL_REG_CLASSD_RESERVE0_OFFSET 4
#define CTRL_REG_CLASSD_CTRL2_LEN       1
#define CTRL_REG_CLASSD_CTRL2_OFFSET    3
#define CTRL_REG_CLASSD_OCP_BPS_LEN     1
#define CTRL_REG_CLASSD_OCP_BPS_OFFSET  2
#define CTRL_REG_CLASSD_DT_SEL_LEN      1
#define CTRL_REG_CLASSD_DT_SEL_OFFSET   1
#define CTRL_REG_CLASSD_PLS_BYP_LEN     1
#define CTRL_REG_CLASSD_PLS_BYP_OFFSET  0

#define CTRL_REG_CLASSD_CTRL3_REG               (HI6555V200_PMU_CODEC_BASE + 0x10C)
#define CTRL_REG_CLASSD_RESERVE1_LEN    8
#define CTRL_REG_CLASSD_RESERVE1_OFFSET 0


#define CTRL_REG_PMU_SOFT_RST_REG        (HI6555V200_PMU_CODEC_BASE + 0x10D) /* PMU����λ�Ĵ����� */
#define CTRL_REG_SOFT_RST_N_LEN    8
#define CTRL_REG_SOFT_RST_N_OFFSET 0

#endif /* __HI6555V2_PMU_REG_DEF_H__ */
