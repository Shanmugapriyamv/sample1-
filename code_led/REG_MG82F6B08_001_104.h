/**
 ******************************************************************************
 *
 * @file        REG_MG82F6B08_001_104.H
 *
 * @brief       This is the header file of the SFR address.
 *
 * @par         Project
 *              MG82F6B08_001_104
 * @version     v1.01
 * @date        2022/01/25
 * @copyright   Copyright (c) 2019 MegaWin Technology Co., Ltd.
 *              All rights reserved.
 *
 ******************************************************************************
 * @par         Disclaimer
 *      The Demo software is provided "AS IF"  without any warranty, either
 *      expressed or implied, including, but not limited to, the implied warranties
 *      of merchantability and fitness for a particular purpose.  The author will
 *      not be liable for any special, incidental, consequential or indirect
 *      damages due to loss of data or any other reason.
 *      These statements agree with the world wide and local dictated laws about
 *      authorship and violence against these laws.
 ******************************************************************************
 @if HIDE
 Modify History:
 * #1.01_Blake_20220125
 * >>The following SFR.bit will be defined separately
 * >>sbit SM00_FE
 * >>sbit RCLK_TF2L
 * >>sbit TCLK_TL2IE
 * >>#define TL2X12_T2EIP
 * >>example:
 * >>#define EX01_EX02 0x08
 * >>Modify
 * >>#define EX01 0x08
 * >>#define EX02 0x08
 @endif
 ******************************************************************************
 * @internal
 * @sign
 * @endinternal
 */

#ifndef __REG_MG82F6B08_001_104_H
#define __REG_MG82F6B08_001_104_H

#define GF_7         0x80
#define GF_6         0x40
#define GF_5         0x20
#define GF_4         0x10
#define GF_3         0x08
#define GF_2         0x04
#define GF_1         0x02
#define GF_0         0x01

sfr SP                     = 0x81;     //Stack Pointer
#define SP_Page              0x00

sfr DPL                    = 0x82;     //Data Pointer Low
#define DPL_Page             0x00

sfr DPH                    = 0x83;     //Data Pointer High
#define DPH_Page             0x00

sfr SPSTAT                 = 0x84;     //SPI Status Register
#define SPSTAT_Page          0x00
// (bits in SPSTAT)
#define SPIF                 0x80
#define WCOL                 0x40
#define THRF                 0x20
#define SPIBSY               0x10
#define MODF                 0x08
#define SPR2                 0x01

sfr SPCON                  = 0x85;     //SPI Control Register
#define SPCON_Page           0x00
// (bits in SPCON)
#define SSIG                 0x80
#define SPEN                 0x40
#define DORD                 0x20
#define MSTR                 0x10
#define CPOL                 0x08
#define CPHA                 0x04
#define SPR1                 0x02
#define SPR0                 0x01

sfr SPDAT                  = 0x86;     //SPI Data Register
#define SPDAT_Page           0x00

sfr PCON0                  = 0x87;     //Power Control 0
#define PCON0_Page           0x00
// (bits in PCON0)
#define SMOD1                0x80
#define SMOD0                0x40
#define POF0                 0x10
#define PD                   0x02
#define IDL                  0x01

sfr TCON                   = 0x88;     //Timer Control
#define TCON_Page            0x00
// (bits in TCON)
sbit TF1                   = TCON^7;
sbit TR1                   = TCON^6;
sbit TF0                   = TCON^5;
sbit TR0                   = TCON^4;
sbit IE1                   = TCON^3;
sbit IT1                   = TCON^2;
sbit IE0                   = TCON^1;
sbit IT0                   = TCON^0;

sfr TMOD                   = 0x89;     //Timer Mode
#define TMOD_Page            0x00
// (bits in TMOD)
#define T1GATE               0x80
#define T1C_T                0x40
#define T1M1                 0x20
#define T1M0                 0x10
#define T0GATE               0x08
#define T0C_T                0x04
#define T0M1                 0x02
#define T0M0                 0x01

sfr TL0                    = 0x8A;     //Timer Low 0
#define TL0_Page             0x00

sfr TL1                    = 0x8B;     //Timer Low 1
#define TL1_Page             0x00

sfr TH0                    = 0x8C;     //Timer High 0
#define TH0_Page             0x00

sfr TH1                    = 0x8D;     //Timer High 1
#define TH1_Page             0x00

sfr SFIE                   = 0x8E;     //System Flag INT En.
#define SFIE_Page            0x00
// (bits in SFIE)
#define SIDFIE               0x80
#define RTCFIE               0x10
#define SPWIE                0x08
#define BOF1IE               0x04
#define BOF0IE               0x02
#define WDTFIE               0x01

sfr XRPS                   = 0x8F;     //XRAM Page Select
#define XRPS_Page            0x00

sfr P1                     = 0x90;     //Port 1
#define P1_Page              0x00
// (bits in P1)
sbit P10                   = P1^0;

sfr P1M0                   = 0x91;     //P1 Mode Register 0
#define P1M0_Page            0x00
// (bits in P1M0)
#define P1M00                0x01

sfr P1M1                   = 0x92;     //P1 Mode Register 1
#define P1M1_Page            0x00
// (bits in P1M1)
#define P1M10                0x01

sfr P4M1                   = 0x92;     //P4 Mode Register 1
#define P4M1_Page            0x02
// (bits in P4M1)
#define P4M17                0x80
#define P4M16                0x40
#define P4M15                0x20
#define P4M14                0x10

sfr P3FDC                  = 0x92;     //P3 Fast Drv. Ctrl.
#define P3FDC_Page           0x07
// (bits in P3FDC)
#define P3FDC3               0x08
#define P3FDC2               0x04
#define P3FDC1               0x02
#define P3FDC0               0x01

sfr P1FDC                  = 0x92;     //P1 Fast Drv. Ctrl.
#define P1FDC_Page           0x08
// (bits in P1FDC)
#define P1FDC0               0x01

sfr P4FDC                  = 0x92;     //P4 Fast Drv. Ctrl.
#define P4FDC_Page           0x0A
// (bits in P4FDC)
#define P4FDC6               0x40
#define P4FDC5               0x20
#define P4FDC4               0x10

sfr T2MOD1                 = 0x93;     //Timer2 mode 1 Reg.
#define T2MOD1_Page          0x01
// (bits in T2MOD1)
#define TL2CS                0x80
#define TF2IG                0x40
#define TL2IS                0x20
#define T2CKS                0x10
#define T2MS1                0x08
#define CP2S2                0x04
#define CP2S1                0x02
#define CP2S0                0x01

sfr TREN0                  = 0x95;     //Timer Run Enable Register 0
#define TREN0_Page           0x01
// (bits in TREN0)
#define TR2LE                0x20
#define TR2E                 0x04
#define TR1E                 0x02
#define TR0E                 0x01

sfr TRLC0                  = 0x95;     //Timer Reload Control Register 0
#define TRLC0_Page           0x02
// (bits in TRLC0)
#define TL2RLC               0x20
#define T2RLC                0x04
#define T1RLC                0x02
#define T0RLC                0x01

sfr TSPC0                  = 0x95;     //Timer Stop Control Register 0
#define TSPC0_Page           0x03
// (bits in TSPC0)
#define TL2SC                0x20
#define T2SC                 0x04
#define T1SC                 0x02
#define T0SC                 0x01

sfr BOREV                  = 0x96;     //Bit Order Reversed
#define BOREV_Page           0x00

sfr PCON1                  = 0x97;     //Power Control 1
#define PCON1_Page           0x00
// (bits in PCON1)
#define SWRF                 0x80
#define EXRF                 0x40
#define RTCF                 0x10
#define SPWF                 0x08
#define BOF1                 0x04
#define BOF0                 0x02
#define WDTF                 0x01

sfr S0CON                  = 0x98;     //Serial 0 Control
#define S0CON_Page           0x00
// (bits in S0CON)
sbit SM00                  = S0CON^7;
sbit FE                    = S0CON^7;
sbit SM10                  = S0CON^6;
sbit SM20                  = S0CON^5;
sbit REN0                  = S0CON^4;
sbit TB80                  = S0CON^3;
sbit RB80                  = S0CON^2;
sbit TI0                   = S0CON^1;
sbit RI0                   = S0CON^0;

sfr S0BUF                  = 0x99;     //Serial 0 Buffer
#define S0BUF_Page           0x00

sfr S0BRT                  = 0x9A;     //S0 Baud-Rate Timer
#define S0BRT_Page           0x00

sfr S0BRC                  = 0x9B;     //S0 Baud-Rate Counter
#define S0BRC_Page           0x00

sfr S0CFG                  = 0x9C;     //S0 Configuration
#define S0CFG_Page           0x00
// (bits in S0CFG)
#define URTS                 0x80
#define SMOD2                0x40
#define URM0X3               0x20
#define SM30                 0x10
#define S0DOR                0x08
#define BTI                  0x04
#define UTIE                 0x02
#define SMOD3                0x01

sfr S0CFG1                 = 0x9D;     //S0 Configuration 1 (LINCFG)
#define S0CFG1_Page          0x00
// (bits in S0CFG1)
#define SBF0                 0x80
#define TXER0                0x40
#define S0SB16               0x20
#define ATBR0                0x10
#define TXRX0                0x08
#define SYNC0                0x04

sfr AC0CON                 = 0x9E;     //AC0 Control Reg.
#define AC0CON_Page          0x00
// (bits in AC0CON)
#define AC0LP                0x80
#define AC0PDX               0x40
#define AC0OUT               0x20
#define AC0F                 0x10
#define AC0EN                0x08
#define AC0INV               0x04
#define AC0M1                0x02
#define AC0M0                0x01

sfr AC0MOD                 = 0x9F;     //AC0 Mode Reg.
#define AC0MOD_Page          0x00
// (bits in AC0MOD)
#define NVRL                 0x08
#define AC0FLT               0x04

sfr AUXR0                  = 0xA1;     //Auxiliary Register 0
#define AUXR0_Page           0x00
// (bits in AUXR0)
#define P45OC1               0x80
#define P45OC0               0x40
#define PBKF                 0x10
#define INT1H                0x02
#define INT0H                0x01

sfr AUXR1                  = 0xA2;     //Auxiliary Register 1
#define AUXR1_Page           0x00
// (bits in AUXR1)
#define CRCDS1               0x20
#define CRCDS0               0x10
#define DPS                  0x01

sfr AUXR2                  = 0xA3;     //Auxiliary Register 2
#define AUXR2_Page           0x00
// (bits in AUXR2)
#define STAF                 0x80
#define STOF                 0x40
#define C0PLK				 0x01
#define T1X12                0x08
#define T0X12                0x04
#define T1CKOE               0x02
#define T0CKOE               0x01

sfr AUXR3                  = 0xA4;     //Auxiliary Register 3
#define AUXR3_Page           0x00
// (bits in AUXR3)
#define T0PS0                0x40
#define BPOC1                0x20
#define BPOC0                0x10
#define S0PS0                0x08
#define TWIPS1               0x04
#define TWIPS0               0x02
#define T0XL                 0x01

sfr AUXR4                  = 0xA4;     //Auxiliary Register 4
#define AUXR4_Page           0x01
// (bits in AUXR4)
#define T2PS1                0x80
#define T2PS0                0x40
#define T1PS0                0x10
#define AC0OE                0x02
#define AC0FLT1              0x01

sfr AUXR5                  = 0xA4;     //Auxiliary Register 5
#define AUXR5_Page           0x02
// (bits in AUXR5)
#define C0PS1                0x08
#define C0PS0                0x04
#define ECIPS0               0x02
#define C0COPS               0x01

sfr AUXR6                  = 0xA4;     //Auxiliary Register 6
#define AUXR6_Page           0x03
// (bits in AUXR6)
#define T2FCS                0x04
#define S0COPS               0x01

sfr AUXR7                  = 0xA4;     //Auxiliary Register 7
#define AUXR7_Page           0x04
// (bits in AUXR7)
#define C0CKOE               0x20
#define SPI0M0               0x10

sfr AUXR9                  = 0xA4;     //Auxiliary Register 9
#define AUXR9_Page           0x06
// (bits in AUXR9)
#define SIDPS0               0x40
#define T1G1                 0x20
#define T0G1                 0x10
#define C0FDC1               0x08
#define C0FDC0               0x04

sfr AUXR10                 = 0xA4;     //Aux. Register 10
#define AUXR10_Page          0x07
// (bits in AUXR10)
#define AC0HC0               0x40
#define SPIPS0               0x10
#define S0PS1                0x08
#define SPFACE               0x04
#define TWICF                0x02

sfr AUXR11                 = 0xA4;     //Aux. Register 11
#define AUXR11_Page          0x08
// (bits in AUXR11)
#define P30AM                0x80
#define P33AM                0x40
#define POEM0                0x04
#define C0M0                 0x02
#define C0OFS                0x01

sfr IE                     = 0xA8;     //Interrupt Enable
#define IE_Page              0x00
// (bits in IE)
sbit EA                    = IE^7;
sbit ET2                   = IE^5;
sbit ES0                   = IE^4;
sbit ET1                   = IE^3;
sbit EX1                   = IE^2;
sbit ET0                   = IE^1;
sbit EX0                   = IE^0;

sfr SADDR                  = 0xA9;     //Slave Address
#define SADDR_Page           0x00

sfr SFRPI                  = 0xAC;     //SFR Page Index
#define SFRPI_Page           0x00
// (bits in SFRPI)
#define IDX3                 0x08
#define IDX2                 0x04
#define IDX1                 0x02
#define IDX0                 0x01

sfr EIE1                   = 0xAD;     //Extended INT Enable 1
#define EIE1_Page            0x00
// (bits in EIE1)
#define EAC0                 0x80
#define ETWI0                0x40
#define EKB                  0x20
#define ESF                  0x08
#define EPCA                 0x04
#define EADC                 0x02
#define ESPI                 0x01

sfr EIP1L                  = 0xAE;     //Ext. INT Priority 1 Low
#define EIP1L_Page           0x00
// (bits in EIP1L)
#define PAC0L                0x80
#define PTWI0L               0x40
#define PKBL                 0x20
#define PSFL                 0x08
#define PPCAL                0x04
#define PADCL                0x02
#define PSPIL                0x01

sfr EIP1H                  = 0xAF;     //Ext. INT Priority 1 High
#define EIP1H_Page           0x00
// (bits in EIP1H)
#define PAC0H                0x80
#define PTWI0H               0x40
#define PKBH                 0x20
#define PSFH                 0x08
#define PPCAH                0x04
#define PADCH                0x02
#define PSPIH                0x01

sfr P3                     = 0xB0;     //Port 3
#define P3_Page              0x00
// (bits in P3)
sbit P33                   = P3^3;
sbit P32                   = P3^2;
sbit P31                   = P3^1;
sbit P30                   = P3^0;

sfr P3M0                   = 0xB1;     //P3 Mode Register 0
#define P3M0_Page            0x00
// (bits in P3M0)
#define P3M03                0x08
#define P3M02                0x04
#define P3M01                0x02
#define P3M00                0x01

sfr P3M1                   = 0xB2;     //P3 Mode Register 1
#define P3M1_Page            0x00
// (bits in P3M1)
#define P3M13                0x08
#define P3M12                0x04
#define P3M11                0x02
#define P3M10                0x01

sfr P4M0                   = 0xB3;     //P4 Mode Register 0
#define P4M0_Page            0x00
// (bits in P4M0)
#define P4M07                0x80
#define P4M06                0x40
#define P4M05                0x20
#define P4M04                0x10

sfr PDRVC0                 = 0xB4;     //Port Driving Control 0
#define PDRVC0_Page          0x02
// (bits in PDRVC0)
#define P3DC0                0x40
#define P1DC0                0x04

sfr PDRVC1                 = 0xB4;     //Port Driving Control 1
#define PDRVC1_Page          0x03
// (bits in PDRVC1)
#define P4DC1                0x02

sfr RTCTM                  = 0xB6;     //RTC Timer Register
#define RTCTM_Page           0x00
// (bits in RTCTM)
#define RTCCS1               0x80
#define RTCCS0               0x40
#define RTCCT5               0x20
#define RTCCT4               0x10
#define RTCCT3               0x08
#define RTCCT2               0x04
#define RTCCT1               0x02
#define RTCCT0               0x01

sfr IP0H                   = 0xB7;     //Interrupt Priority 0 High
#define IP0H_Page            0x00
// (bits in IP0H)
#define PT2H                 0x20
#define PSH                  0x10
#define PT1H                 0x08
#define PX1H                 0x04
#define PT0H                 0x02
#define PX0H                 0x01

sfr IP0L                   = 0xB8;     //Interrupt Priority Low
#define IP0L_Page            0x00
// (bits in IP0L)
sbit PT2L                  = IP0L^5;
sbit PSL                   = IP0L^4;
sbit PT1L                  = IP0L^3;
sbit PX1L                  = IP0L^2;
sbit PT0L                  = IP0L^1;
sbit PX0L                  = IP0L^0;

sfr SADEN                  = 0xB9;     //Slave Address Mask
#define SADEN_Page           0x00

sfr S0CR1                  = 0xB9;     //S0 Control 1
#define S0CR1_Page           0x00
// (bits in S0CR1)
#define S0TR                 0x80
#define S0TX12               0x40
#define S0TCK                0x20
#define S0RCK                0x10
#define S0CKOE               0x08
#define ARTE                 0x04
#define S0BC0                0x01

sfr PWMCR                  = 0xBC;     //PWM Control Reg.
#define PWMCR_Page           0x00
// (bits in PWMCR)
#define PCAE                 0x80
#define EXDT                 0x40
#define PBKM                 0x20
#define PBKE11               0x10
#define PBKE10               0x08
#define PBKE02               0x04
#define PBKE01               0x02
#define PBKE00               0x01

sfr PDTCRA                 = 0xBC;     //PWM Dead-Time Control Reg. ¡VA
#define PDTCRA_Page          0x01
// (bits in PDTCRA)
#define DTPS1                0x80
#define DTPS0                0x40
#define DT5                  0x20
#define DT4                  0x10
#define DT3                  0x08
#define DT2                  0x04
#define DT1                  0x02
#define DT0                  0x01

sfr CRC0DA                 = 0xBD;     //CRC0 Data Port
#define CRC0DA_Page          0x00

sfr RTCCR                  = 0xBE;     //RTC Control Reg.
#define RTCCR_Page           0x00
// (bits in RTCCR)
#define RTCE                 0x80
#define RTCO                 0x40
#define RTCRL5               0x20
#define RTCRL4               0x10
#define RTCRL3               0x08
#define RTCRL2               0x04
#define RTCRL1               0x02
#define RTCRL0               0x01

sfr CKCON1                 = 0xBF;     //Clock Control 1
#define CKCON1_Page          0x00
// (bits in CKCON1)
#define OSCSTA3              0x08
#define OSCSTA2              0x04
#define OSCSTA1              0x02
#define OSCSTA0              0x01

sfr XICFG                  = 0xC1;     //Ext. INT. Configured
#define XICFG_Page           0x00
// (bits in XICFG)
#define INT1IS1              0x80
#define INT1IS0              0x40
#define INT0IS1              0x20
#define INT0IS0              0x10
#define X1FLT                0x02
#define X0FLT                0x01

sfr XICFG1                 = 0xC1;     //Ext. INT. Configured 1
#define XICFG1_Page          0x01
// (bits in XICFG1)
#define X1FLT1               0x02
#define X0FLT1               0x01

sfr AUXIE0                 = 0xC1;     //Auxiliary INT Enable 0
#define AUXIE0_Page          0x0B
// (bits in AUXIE0)
#define EPIE                 0x20
#define CFIE                 0x10

sfr ADCFG0                 = 0xC3;     //ADC Configuration 0
#define ADCFG0_Page          0x00
// (bits in ADCFG0)
#define ADCKS2               0x80
#define ADCKS1               0x40
#define ADCKS0               0x20
#define ADRJ                 0x10
#define ACHS                 0x08
#define SMPF                 0x04
#define ADTM1                0x02
#define ADTM0                0x01

sfr ADCFG1                 = 0xC3;     //ADC Configuration 1
#define ADCFG1_Page          0x01
// (bits in ADCFG1)
#define IGADCI               0x80
#define EADCWI               0x40
#define SMPFIE               0x20
#define SIGN                 0x10
#define AOS3                 0x08
#define AOS2                 0x04
#define AOS1                 0x02
#define AOS0                 0x01

sfr ADCFG2                 = 0xC3;     //ADC Configuration 2
#define ADCFG2_Page          0x02
// (bits in ADCFG2)
#define SHT7                 0x80
#define SHT6                 0x40
#define SHT5                 0x20
#define SHT4                 0x10
#define SHT3                 0x08
#define SHT2                 0x04
#define SHT1                 0x02
#define SHT0                 0x01

sfr ADCFG3                 = 0xC3;     //ADC Configuration 3
#define ADCFG3_Page          0x03
// (bits in ADCFG3)
#define ADPS1                0x80
#define ADPS0                0x40
#define ARES1                0x08
#define ARES0                0x04

sfr ADCFG4                 = 0xC3;     //ADC Configuration 4
#define ADCFG4_Page          0x04
// (bits in ADCFG4)
#define ADWM0                0x40
#define ADTM3                0x20
#define ADTM2                0x10

sfr ADCFG11                = 0xC3;     //ADC Configuration 11
#define ADCFG11_Page         0x0B
// (bits in ADCFG11)
#define WHB3                 0x80
#define WHB2                 0x40
#define WHB1                 0x20
#define WHB0                 0x10

sfr ADCFG12                = 0xC3;     //ADC Configuration 12
#define ADCFG12_Page         0x0C
// (bits in ADCFG12)
#define WHB11                0x80
#define WHB10                0x40
#define WHB9                 0x20
#define WHB8                 0x10
#define WHB7                 0x08
#define WHB6                 0x04
#define WHB5                 0x02
#define WHB4                 0x01

sfr ADCFG13                = 0xC3;     //ADC Configuration 13
#define ADCFG13_Page         0x0D
// (bits in ADCFG13)
#define WLB3                 0x80
#define WLB2                 0x40
#define WLB1                 0x20
#define WLB0                 0x10

sfr ADCFG14                = 0xC3;     //ADC Configuration 14
#define ADCFG14_Page         0x0E
// (bits in ADCFG14)
#define WLB11                0x80
#define WLB10                0x40
#define WLB9                 0x20
#define WLB8                 0x10
#define WLB7                 0x08
#define WLB6                 0x04
#define WLB5                 0x02
#define WLB4                 0x01

sfr ADCON0                 = 0xC4;     //ADC Control 0
#define ADCON0_Page          0x00
// (bits in ADCON0)
#define ADCEN                0x80
#define ADCWI                0x40
#define CHS3                 0x20
#define ADCI                 0x10
#define ADCS                 0x08
#define CHS2                 0x04
#define CHS1                 0x02
#define CHS0                 0x01

sfr ADCDL                  = 0xC5;     //ADC Data Low
#define ADCDL_Page           0x00
// (bits in ADCDL)
#define ADCV3                0x80
#define ADCV2                0x40
#define ADCV1                0x20
#define ADCV0                0x10

sfr ADCDH                  = 0xC6;     //ADC Data High
#define ADCDH_Page           0x00
// (bits in ADCDH)
#define ADCV11               0x80
#define ADCV10               0x40
#define ADCV9                0x20
#define ADCV8                0x10
#define ADCV7                0x08
#define ADCV6                0x04
#define ADCV5                0x02
#define ADCV4                0x01

sfr CKCON0                 = 0xC7;     //Clock Control 0
#define CKCON0_Page          0x00
// (bits in CKCON0)
#define AFS                  0x80
#define CCKS                 0x08
#define SCKS2                0x04
#define SCKS1                0x02
#define SCKS0                0x01

sfr T2CON                  = 0xC8;     //Timer 2 Control Reg.
#define T2CON_Page           0x00
// (bits in T2CON)
sbit TF2                   = T2CON^7;
sbit EXF2                  = T2CON^6;
sbit RCLK                  = T2CON^5;
sbit TF2L                  = T2CON^5;
sbit TCLK                  = T2CON^4;
sbit TL2IE                 = T2CON^4;
sbit EXEN2                 = T2CON^3;
sbit TR2                   = T2CON^2;
sbit C_T2                  = T2CON^1;
sbit CP_RL2                = T2CON^0;

sfr T2MOD                  = 0xC9;     //Timer 2 mode Reg.
#define T2MOD_Page           0x00
// (bits in T2MOD)
#define T2SPL                0x80
#define TL2X12               0x40
#define T2EIP                0x40
#define T2EXH                0x20
#define T2X12                0x10
#define TR2L                 0x08
#define TR2LC                0x04
#define T2OE                 0x02
#define T2MS0                0x01

sfr RCAP2L                 = 0xCA;     //Timer2 Capture Low
#define RCAP2L_Page          0x00

sfr RCAP2H                 = 0xCB;     //Timer2 Capture High
#define RCAP2H_Page          0x00

sfr TL2                    = 0xCC;     //Timer Low 2
#define TL2_Page             0x00

sfr TH2                    = 0xCD;     //Timer High 2
#define TH2_Page             0x00

sfr CLRL                   = 0xCE;     //CL Reload register
#define CLRL_Page            0x00

sfr CHRL                   = 0xCF;     //CH Reload register
#define CHRL_Page            0x00

sfr PSW                    = 0xD0;     //Program Status Word
#define PSW_Page             0x00
// (bits in PSW)
sbit CY                    = PSW^7;
sbit AC                    = PSW^6;
sbit F0                    = PSW^5;
sbit RS1                   = PSW^4;
sbit RS0                   = PSW^3;
sbit OV                    = PSW^2;
sbit F1                    = PSW^1;
sbit P                     = PSW^0;

sfr SIADR                  = 0xD1;     //TWI0 Address Reg.
#define SIADR_Page           0x00
// (bits in SIADR)
#define GC                   0x01

sfr SIA2                   = 0xD1;     //TWI0 2nd Addr Reg.
#define SIA2_Page            0x02
// (bits in SIA2)
#define A2E                  0x01

sfr SIDAT                  = 0xD2;     //TWI0 Data Reg.
#define SIDAT_Page           0x00

sfr SIA2M                  = 0xD2;     //SIA2 Mask Reg.
#define SIA2M_Page           0x02
// (bits in SIA2M)
#define SIA2M7               0x80
#define SIA2M6               0x40
#define SIA2M5               0x20
#define SIA2M4               0x10
#define SIA2M3               0x08
#define SIA2M2               0x04
#define SIA2M1               0x02

sfr SISTA                  = 0xD3;     //TWI0 Status Reg.
#define SISTA_Page           0x00

sfr SICON                  = 0xD4;     //TWI0 Control Reg.
#define SICON_Page           0x00
// (bits in SICON)
#define CR2                  0x80
#define ENSI                 0x40
#define STA                  0x20
#define STO                  0x10
#define SI                   0x08
#define AA                   0x04
#define CR1                  0x02
#define CR0                  0x01

sfr KBPATN                 = 0xD5;     //Keypad Pattern
#define KBPATN_Page          0x00

sfr KBCON                  = 0xD6;     //Keypad Control
#define KBCON_Page           0x00
// (bits in KBCON)
#define KBCS1                0x80
#define KBCS0                0x40
#define KBES                 0x20
#define PATN_SEL             0x02
#define KBIF                 0x01

sfr KBMASK                 = 0xD7;     //Keypad Int. Mask
#define KBMASK_Page          0x00

sfr CCON                   = 0xD8;     //PCA Control Reg.
#define CCON_Page            0x00
// (bits in CCON)
sbit CF                    = CCON^7;
sbit CR                    = CCON^6;
sbit CCF3                  = CCON^3;
sbit CCF2                  = CCON^2;
sbit CCF1                  = CCON^1;
sbit CCF0                  = CCON^0;

sfr CMOD                   = 0xD9;     //PCA Mode Reg.
#define CMOD_Page            0x00
// (bits in CMOD)
#define CIDL                 0x80
#define BME2                 0x20
#define BME0                 0x10
#define CPS2                 0x08
#define CPS1                 0x04
#define CPS0                 0x02
#define ECF                  0x01

sfr CCAPM0                 = 0xDA;     //PCA Module0 Mode
#define CCAPM0_Page          0x00
// (bits in CCAPM0)
#define DTE0                 0x80
#define ECOM0                0x40
#define CAPP0                0x20
#define CAPN0                0x10
#define MAT0                 0x08
#define TOG0                 0x04
#define PWM0                 0x02
#define ECCF0                0x01

sfr CCAPM1                 = 0xDB;     //PCA Module1 Mode
#define CCAPM1_Page          0x00
// (bits in CCAPM1)
#define ECOM1                0x40
#define CAPP1                0x20
#define CAPN1                0x10
#define MAT1                 0x08
#define TOG1                 0x04
#define PWM1                 0x02
#define ECCF1                0x01

sfr CCAPM2                 = 0xDC;     //PCA Module2 Mode
#define CCAPM2_Page          0x00
// (bits in CCAPM2)
#define DTE2                 0x80
#define ECOM2                0x40
#define CAPP2                0x20
#define CAPN2                0x10
#define MAT2                 0x08
#define TOG2                 0x04
#define PWM2                 0x02
#define ECCF2                0x01

sfr CCAPM3                 = 0xDD;     //PCA Module3 Mode
#define CCAPM3_Page          0x00
// (bits in CCAPM3)
#define ECOM3                0x40
#define CAPP3                0x20
#define CAPN3                0x10
#define MAT3                 0x08
#define TOG3                 0x04
#define PWM3                 0x02
#define ECCF3                0x01

sfr ACC                    = 0xE0;     //Accumulator
#define ACC_Page             0x00

sfr WDTCR                  = 0xE1;     //WDT Control register
#define WDTCR_Page           0x00
// (bits in WDTCR)
#define WREN                 0x80
#define NSW                  0x40
#define ENW                  0x20
#define CLRW                 0x10
#define WIDL                 0x08
#define PS2                  0x04
#define PS1                  0x02
#define PS0                  0x01

sfr IFD                    = 0xE2;     //ISP Flash data
#define IFD_Page             0x00

sfr IFADRH                 = 0xE3;     //ISP Flash Addr. High
#define IFADRH_Page          0x00

sfr IFADRL                 = 0xE4;     //ISP Flash Addr. Low
#define IFADRL_Page          0x00

sfr IFMT                   = 0xE5;     //ISP Mode Table
#define IFMT_Page            0x00
// (bits in IFMT)
#define MS7                  0x80
#define MS6                  0x40
#define MS5                  0x20
#define MS4                  0x10
#define MS3                  0x08
#define MS2                  0x04
#define MS1                  0x02
#define MS0                  0x01

sfr SCMD                   = 0xE6;     //ISP Serial Command
#define SCMD_Page            0x00

sfr ISPCR                  = 0xE7;     //ISP Control Register
#define ISPCR_Page           0x00
// (bits in ISPCR)
#define ISPEN                0x80
#define SWBS                 0x40
#define SRST                 0x20
#define CFAIL                0x10
#define PBSY                 0x02
#define EEPF                 0x01

sfr P4                     = 0xE8;     //Port 4
#define P4_Page              0x00
// (bits in P4)
sbit P47                   = P4^7;
sbit P46                   = P4^6;
sbit P45                   = P4^5;
sbit P44                   = P4^4;

sfr CL                     = 0xE9;     //PCA base timer Low
#define CL_Page              0x00

sfr CCAP0L                 = 0xEA;     //PCA module0 capture Low
#define CCAP0L_Page          0x00

sfr CCAP1L                 = 0xEB;     //PCA module1 capture Low
#define CCAP1L_Page          0x00

sfr CCAP2L                 = 0xEC;     //PCA module2 capture Low
#define CCAP2L_Page          0x00

sfr CCAP3L                 = 0xED;     //PCA module3 capture Low
#define CCAP3L_Page          0x00

sfr B                      = 0xF0;     //B Register
#define B_Page               0x00

sfr PAOE                   = 0xF1;     //PWM Additional Output Enable
#define PAOE_Page            0x00
// (bits in PAOE)
#define POE3                 0x80
#define POE2                 0x10
#define POE1                 0x08
#define POE0                 0x01

sfr PCAPWM0                = 0xF2;     //PCA PWM0 Mode
#define PCAPWM0_Page         0x00
// (bits in PCAPWM0)
#define P0RS1                0x80
#define P0RS0                0x40
#define P0INV                0x04
#define ECAP0H               0x02
#define ECAP0L               0x01

sfr PCAPWM1                = 0xF3;     //PCA PWM1 Mode
#define PCAPWM1_Page         0x00
// (bits in PCAPWM1)
#define P1RS1                0x80
#define P1RS0                0x40
#define P1INV                0x04
#define ECAP1H               0x02
#define ECAP1L               0x01

sfr PCAPWM2                = 0xF4;     //PCA PWM2 Mode
#define PCAPWM2_Page         0x00
// (bits in PCAPWM2)
#define P2RS1                0x80
#define P2RS0                0x40
#define P2INV                0x04
#define ECAP2H               0x02
#define ECAP2L               0x01

sfr PCAPWM3                = 0xF5;     //PCA PWM3 Mode
#define PCAPWM3_Page         0x00
// (bits in PCAPWM3)
#define P3RS1                0x80
#define P3RS0                0x40
#define P3INV                0x04
#define ECAP3H               0x02
#define ECAP3L               0x01

sfr CH                     = 0xF9;     //PCA base timer High
#define CH_Page              0x00

sfr CCAP0H                 = 0xFA;     //PCA Module0 capture High
#define CCAP0H_Page          0x00

sfr CCAP1H                 = 0xFB;     //PCA Module1 capture High
#define CCAP1H_Page          0x00

sfr CCAP2H                 = 0xFC;     //PCA Module2 capture High
#define CCAP2H_Page          0x00

sfr CCAP3H                 = 0xFD;     //PCA Module3 capture High
#define CCAP3H_Page          0x00


//===== Page P =====//
#define IAPLB_P              0x03     //IAP Low Boundary
// (bits in IAPLB)
#define IAPLB6_P             0x80
#define IAPLB5_P             0x40
#define IAPLB4_P             0x20
#define IAPLB3_P             0x10
#define IAPLB2_P             0x08
#define IAPLB1_P             0x04
#define IAPLB0_P             0x02

#define CKCON2_P             0x40     //Clock Control 2
// (bits in CKCON2)
#define IHRCOE_P             0x10
#define OSCS1_P              0x02
#define OSCS0_P              0x01

#define CKCON3_P             0x41     //Clock Control 3
// (bits in CKCON3)
#define WDTCS1_P             0x80
#define WDTCS0_P             0x40
#define FWKP_P               0x20
#define WDTFS_P              0x10
#define MCKD1_P              0x08
#define MCKD0_P              0x04

#define CKCON4_P             0x42     //Clock Control 4
// (bits in CKCON4)
#define RCSS2_P              0x80
#define RCSS1_P              0x40
#define RCSS0_P              0x20
#define RPSC2_P              0x10
#define RPSC1_P              0x08
#define RPSC0_P              0x04
#define RTCCS3_P             0x02
#define RTCCS2_P             0x01

#define PCON2_P              0x44     //Power Control 2
// (bits in PCON2)
#define AWBOD1_P             0x80
#define BO1S1_P              0x20
#define BO1S0_P              0x10
#define BO1RE_P              0x08
#define EBOD1_P              0x04
#define BO0RE_P              0x02

#define PCON3_P              0x45     //Power Control 3
// (bits in PCON3)
#define IVREN_P              0x80
#define SPWRE_P              0x10

#define PCON4_P              0x46     //Power Control 3
// (bits in PCON4)
#define BO1S2_P              0x10
#define FBGE_P               0x04

#define SPCON0_P             0x48     //SFR Page Control 0
// (bits in SPCON0)
#define P4CTL_P              0x20
#define WRCTL_P              0x10
#define CKCTL0_P             0x04
#define PWCTL1_P             0x02
#define PWCTL0_P             0x01

#define DCON0_P              0x4C     //Device Control 0
// (bits in DCON0)
#define HSE_P                0x80
#define IAPO_P               0x40
#define IORCTL_P             0x04
#define RSTIO_P              0x02
#define OCDE_P               0x01

#define SPHB_P               0x53     //SP High Boundary
// (bits in SPHB)
#define SPHB3_P              0x08
#define SPHB2_P              0x04
#define SPHB1_P              0x02
#define SPHB0_P              0x01

#define RTCCR_P              0x54     //RTC Control Reg.
// (bits in RTCCR)
#define RTCE_P               0x80
#define RTCO_P               0x40
#define RTCRL5_P             0x20
#define RTCRL4_P             0x10
#define RTCRL3_P             0x08
#define RTCRL2_P             0x04
#define RTCRL1_P             0x02
#define RTCRL0_P             0x01

#define RTCTM_P              0x55     //RTC Timer Register
// (bits in RTCTM)
#define RTCCS1_P             0x80
#define RTCCS0_P             0x40
#define RTCCT5_P             0x20
#define RTCCT4_P             0x10
#define RTCCT3_P             0x08
#define RTCCT2_P             0x04
#define RTCCT1_P             0x02
#define RTCCT0_P             0x01

#define PCON0_P              0x87     //Power Control 0
// (bits in PCON0)
#define SMOD1_P              0x80
#define SMOD0_P              0x40
#define POF0_P               0x10
#define PD_P                 0x02
#define IDL_P                0x01

#define PCON1_P              0x97     //Power Control 1
// (bits in PCON1)
#define SWRF_P               0x80
#define EXRF_P               0x40
#define RTCF_P               0x10
#define SPWF_P               0x08
#define BOF1_P               0x04
#define BOF0_P               0x02
#define WDTF_P               0x01

#define CKCON0_P             0xC7     //Clock Control 0
// (bits in CKCON0)
#define AFS_P                0x80
#define CCKS_P               0x08
#define SCKS2_P              0x04
#define SCKS1_P              0x02
#define SCKS0_P              0x01

#define WDTCR_P              0xE1     //Watch-dog-timer Control register
// (bits in WDTCR)
#define WREN_P               0x80
#define NSW_P                0x40
#define ENW_P                0x20
#define CLRW_P               0x10
#define WIDL_P               0x08
#define PS2_P                0x04
#define PS1_P                0x02
#define PS0_P                0x01

#define P4_P                 0xE8     //Port 4
// (bits in P4)
#define P47_P                0x80
#define P46_P                0x40
#define P45_P                0x20
#define P44_P                0x10

#endif
