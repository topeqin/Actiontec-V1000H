/*
 * IRAM
 */
#define MX31_IRAM_BASE_ADDR		0x1FFC0000	/* internal ram */
#define MX31_IRAM_SIZE			SZ_16K

#define OTG_BASE_ADDR		(AIPS1_BASE_ADDR + 0x00088000)
#define ATA_BASE_ADDR		(AIPS1_BASE_ADDR + 0x0008C000)
#define UART4_BASE_ADDR 	(AIPS1_BASE_ADDR + 0x000B0000)
#define UART5_BASE_ADDR 	(AIPS1_BASE_ADDR + 0x000B4000)

#define MMC_SDHC1_BASE_ADDR	(SPBA0_BASE_ADDR + 0x00004000)
#define MMC_SDHC2_BASE_ADDR	(SPBA0_BASE_ADDR + 0x00008000)
#define SIM1_BASE_ADDR		(SPBA0_BASE_ADDR + 0x00018000)
#define IIM_BASE_ADDR		(SPBA0_BASE_ADDR + 0x0001C000)

#define CSPI3_BASE_ADDR		(AIPS2_BASE_ADDR + 0x00084000)
#define FIRI_BASE_ADDR		(AIPS2_BASE_ADDR + 0x0008C000)
#define SCM_BASE_ADDR		(AIPS2_BASE_ADDR + 0x000AE000)
#define SMN_BASE_ADDR		(AIPS2_BASE_ADDR + 0x000AF000)
#define MPEG4_ENC_BASE_ADDR	(AIPS2_BASE_ADDR + 0x000C8000)

#define MX31_NFC_BASE_ADDR	(X_MEMC_BASE_ADDR + 0x0000)

#define MXC_INT_MPEG4_ENCODER	5
#define MXC_INT_FIRI		7
#define MX31_INT_MMC_SDHC2	8
#define MXC_INT_MMC_SDHC1	9
#define MX31_INT_SSI2		11
#define MX31_INT_SSI1		12
#define MXC_INT_MBX		16
#define MXC_INT_CSPI3		17
#define MXC_INT_SIM2		20
#define MXC_INT_SIM1		21
#define MXC_INT_CCM_DVFS	31
#define MXC_INT_USB1		35
#define MXC_INT_USB2		36
#define MXC_INT_USB3		37
#define MXC_INT_USB4		38
#define MXC_INT_MSHC2		40
#define MXC_INT_UART4		46
#define MXC_INT_UART5		47
#define MXC_INT_CCM		53
#define MXC_INT_PCMCIA		54
