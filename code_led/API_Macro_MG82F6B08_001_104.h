#ifndef _MACRO_MG82F6B08_001_104_H
#define _MACRO_MG82F6B08_001_104_H

#define SFR_SetPage(x)		SFRPI=x

/*
*************************************************************************************
*  INTERRUPT  
*
*************************************************************************************
*/
// INTERRUPT Vector
#define INT_VECTOR_INT0		0
#define INT_VECTOR_T0		1
#define INT_VECTOR_INT1		2
#define INT_VECTOR_T1		3
#define INT_VECTOR_UART0	4
#define INT_VECTOR_T2		5
#define INT_VECTOR_SPI		7
#define INT_VECTOR_ADC		8
#define INT_VECTOR_PCA		9
#define INT_VECTOR_SF		10
#define INT_VECTOR_KB		11
#define INT_VECTOR_TWI0		12
#define INT_VECTOR_AC0		13

// INTERRUPT Enable/Disable
#define INT_EnAll()			EA=1		// Enable ALL
#define INT_DisAll()		EA=0		// Disable ALL
#define INT_EnINT0()		EX0=1
#define INT_DisINT0()		EX0=0
#define INT_EnTIMER0()		ET0=1
#define INT_DisTIMER0()		ET0=0
#define INT_EnINT1()		EX1=1
#define INT_DisINT1()		EX1=0
#define INT_EnTIMER1()		ET1=1
#define INT_DisTIMER1()		ET1=0
#define INT_EnUART0()		ES0=1
#define INT_DisUART0()		ES0=0
#define INT_EnTIMER2()		ET2=1
#define INT_EnTIMER2L()		TL2IE=1
#define INT_DisTIMER2L()	TL2IE=0
#define INT_DisTIMER2()		ET2=0
#define INT_EnSPI()			EIE1=EIE1|ESPI
#define INT_DisSPI()		EIE1=EIE1&(~ESPI)
#define INT_EnADC()			EIE1=EIE1|EADC
#define INT_DisADC()		EIE1=EIE1&(~EADC)
#define INT_EnPCA()			EIE1=EIE1|EPCA
#define INT_DisPCA()		EIE1=EIE1&(~EPCA)
#define INT_EnSF()			EIE1=EIE1|ESF
#define INT_DisSF()			EIE1=EIE1&(~ESF)
#define INT_EnKBI()			EIE1=EIE1|EKB
#define INT_DisKBI()		EIE1=EIE1&(~EKB)
#define INT_EnTWI0()		EIE1=EIE1|ETWI0
#define INT_DisTWI0()		EIE1=EIE1&(~ETWI0)
#define INT_EnAC0()			EIE1=EIE1|EAC0
#define INT_DisAC0()		EIE1=EIE1&(~EAC0)

#define INT_EnSF_WDT()		SFIE=SFIE|WDTFIE
#define INT_DisSF_WDT()		SFIE=SFIE&(~WDTFIE)
#define INT_EnSF_BOD0()		SFIE=SFIE|BOF0IE
#define INT_DisSF_BOD0()	SFIE=SFIE&(~BOF0IE)
#define INT_EnSF_BOD1()		SFIE=SFIE|BOF1IE
#define INT_DisSF_BOD1()	SFIE=SFIE&(~BOF1IE)
#define INT_EnSF_RTC()		SFIE=SFIE|RTCFIE
#define INT_DisSF_RTC()		SFIE=SFIE&(~RTCFIE)
#define INT_EnSF_SID()		SFIE=SFIE|SIDFIE
#define INT_DisSF_SID()		SFIE=SFIE&(~SIDFIE)

// INTERRUPT Parity
#define IP_INT0		BIT0
#define IP_T0		BIT1
#define IP_INT1		BIT2
#define IP_T1		BIT3
#define IP_UART0	BIT4
#define IP_T2		BIT5
#define IP_INT2		BIT6
#define INT_SetIPHighest(x)			IP0H=IP0H|x;IP0L=IP0L|x
#define INT_SetIPHigh(x)			IP0H=IP0H|x;IP0L=IP0L&(~x)
#define INT_SetIPLow(x)				IP0H=IP0H&(~x);IP0L=IP0L|x
#define INT_SetIPLowest(x)			IP0H=IP0H&(~x);IP0L=IP0L&(~x)

#define IPX_SPI		BIT0
#define IPX_ADC		BIT1
#define IPX_PCA		BIT2
#define IPX_SF		BIT3
#define IPX_KB		BIT5
#define IPX_TWI0	BIT6
#define INT_SetIPXHighest(x)		EIP1H=EIP1H|x;EIP1L=EIP1L|x
#define INT_SetIPXHigh(x)			EIP1H=EIP1H|x;EIP1L=EIP1L&(~x)
#define INT_SetIPXLow(x)			EIP1H=EIP1H&(~x);EIP1L=EIP1L|x
#define INT_SetIPXLowest(x)			EIP1H=EIP1H&(~x);EIP1L=EIP1L&(~x)


// Clear INTERRUPT Flag
#define INT_ClrINT0()		IE0=0
#define INT_ClrTIMER0()		TF0=0
#define INT_ClrINT1()		IE1=0
#define INT_ClrTIMER1()		TF1=0
#define INT_ClrUART0_Rx()	RI0=0
#define INT_ClrUART0_Tx()	TI0=0
#define INT_ClrTIMER2()		TF2=0

#define INT_ClrSPI()		SPSTAT=SPSTAT&(~SPIF)
#define INT_ClrADC()		ADCON0=ADCON0&(~ADCI)
#define INT_ClrPCA_CF()		CF=0
#define INT_ClrPCA_CH0()	CCF0=0
#define INT_ClrPCA_CH1()	CCF1=0
#define INT_ClrPCA_CH2()	CCF2=0
#define INT_ClrPCA_CH3()	CCF3=0
#define INT_ClrSF_WDT()		PCON1=WDTF
#define INT_ClrSF_BOD0()	PCON1=BOF0
#define INT_ClrSF_BOD1()	PCON1=BOF1
#define INT_ClrSF_RTC()		PCON1=RTCF
#define INT_ClrKBI()		KBCON=KBCON&(~KBIF)
#define INT_ClrTWI0()		SICON=SICON&(~SI)


// exINT select pin
#define INT_SetINT0P45()			XICFG=XICFG&(~(INT0IS0|INT0IS1))
#define INT_SetINT0P30()			XICFG=(XICFG&(~INT0IS1))|INT0IS0
#define INT_SetINT0P32()			XICFG=(XICFG&(~INT0IS0))|INT0IS1
#define INT_SetINT0P46()			XICFG=XICFG|(INT0IS0|INT0IS1)

#define INT_SetINT1P33()			XICFG=XICFG&(~(INT1IS0|INT1IS1))
#define INT_SetINT1P31()			XICFG=(XICFG&(~INT1IS1))|INT1IS0
#define INT_SetINT1P44()			XICFG=(XICFG&(~INT1IS0))|INT1IS1
#define INT_SetINT1P10()			XICFG=XICFG|(INT1IS0|INT1IS1)


// exINT Set Level/Edge
#define INT_SetINT0_DetectHighLevel()		IT0=0;AUXR0=AUXR0|INT0H
#define INT_SetINT0_DetectLowLevel()		IT0=0;AUXR0=AUXR0&(~INT0H)
#define	INT_SetINT0_DetectFallingEdge()		IT0=1;AUXR0=AUXR0&(~INT0H)
#define	INT_SetINT0_DetectRisingEdge()		IT0=1;AUXR0=AUXR0|INT0H

#define INT_SetINT1_DetectHighLevel()		IT1=0;AUXR0=AUXR0|INT1H
#define INT_SetINT1_DetectLowLevel()		IT1=0;AUXR0=AUXR0&(~INT1H)
#define	INT_SetINT1_DetectFallingEdge()		IT1=1;AUXR0=AUXR0&(~INT1H)
#define	INT_SetINT1_DetectRisingEdge()		IT1=1;AUXR0=AUXR0|INT1H


// exINT Set Filter
#define INT_SetINT0Filter_Disable()				XICFG=XICFG&(~X0FLT);SFRPI=1;XICFG1=XICFG1&(~X0FLT1);SFRPI=0
#define INT_SetINT0Filter_Sysclk_x3()			XICFG=XICFG|X0FLT;SFRPI=1;XICFG1=XICFG1&(~X0FLT1);SFRPI=0
#define INT_SetINT0Filter_SysclkDiv6_x3()		XICFG=XICFG&(~X0FLT);SFRPI=1;XICFG1=XICFG1|X0FLT1;SFRPI=0
#define INT_SetINT0Filter_S0TOF_x3()			XICFG=XICFG|X0FLT;SFRPI=1;XICFG1=XICFG1|X0FLT1;SFRPI=0

#define INT_SetINT1Filter_Disable()				XICFG=XICFG&(~X1FLT);SFRPI=1;XICFG1=XICFG1&(~X1FLT1);SFRPI=0
#define INT_SetINT1Filter_Sysclk_x3()			XICFG=XICFG|X1FLT;SFRPI=1;XICFG1=XICFG1&(~X1FLT1);SFRPI=0
#define INT_SetINT1Filter_SysclkDiv6_x3()		XICFG=XICFG&(~X1FLT);SFRPI=1;XICFG1=XICFG1|X1FLT1;SFRPI=0
#define INT_SetINT1Filter_S0TOF_x3()			XICFG=XICFG|X1FLT;SFRPI=1;XICFG1=XICFG1|X1FLT1;SFRPI=0

/*
*************************************************************************************
*/ 

/*
*************************************************************************************
*  IAP 
*
*************************************************************************************
*/
//IAP CMD
#define ISP_STANBY			0
#define ISP_READ			1 	  		// Read
#define ISP_BYTE_WRITE 	    0xC2 	  	// Byte write
#define ISP_PAGE_WRITE 	    0xC1 	  	// Page write
#define ISP_ERASE 	    	0xC3 	  	// Erase
#define ISP_WRITE_P     	4    	 	// Write P page
#define ISP_READ_P     		5     		// Read P page
#define ISP_AUTO_FLASH_CRC	0x80		// Auto FLASH CRC
#define ISP_READ_BYTE_INC	0x81		// FLASH read,Auto address INC 
#define ISP_WRITE_BYTE_INC	0x82		// FLASH write,Auto address INC 
#define ISP_READ_EEPROM		0xC0		// Read EEPROM
#define ISP_WRITE_EEPROM	0xC8		// Read EEPROM

/*
*************************************************************************************
*/

/*
*************************************************************************************
*  CLOCK 
*
*************************************************************************************
*/
// CLOCK IHRCO 22.12MHz/11.0592MHz
#define IHRCO_16MHz						0
#define IHRCO_22118400Hz				0x80
#define CLK_SelIHRCO_16MHz()			CKCON0=CKCON0&(~AFS)				
#define CLK_SelIHRCO_22118400Hz()		CKCON0=CKCON0|(AFS)	

// CLOCK CPUCLK 
#define CPUCLK_SYSCLK_DIV_1				0
#define CPUCLK_SYSCLK_DIV_2				0x08
#define CLK_SetCpuclk_Sysclk()			CKCON0=CKCON0&(~CCKS)				
#define CLK_SetCpuclk_SysclkDiv2()		CKCON0=CKCON0|(CCKS)	

// CLOCK SYSCLK
#define SYSCLK_MCKDO_DIV_1			0
#define SYSCLK_MCKDO_DIV_2			1
#define SYSCLK_MCKDO_DIV_4			2
#define SYSCLK_MCKDO_DIV_8			3
#define SYSCLK_MCKDO_DIV_16			4
#define SYSCLK_MCKDO_DIV_32			5
#define SYSCLK_MCKDO_DIV_64			6
#define SYSCLK_MCKDO_DIV_128		7
#define CLK_SetSysclk(x)					CKCON0=(CKCON0&(~0x07))|x


// CLOCK CKCON0
#define CLK_SetCKCON0(x)					CKCON0=(x)|0x10

// CLOCK CKCON2

#define DISABLE_IHRCO				0x00
#define ENABLE_IHRCO				0x10

#define OSCIn_IHRCO					0x00
#define OSCIn_ILRCO					0x02
#define OSCIn_ECKI_P45				0x03

#define CLK_SetCKCON2(x)			ISPCR=0x80;IFADRH=0x0;IFADRL=CKCON2_P;IFMT=ISP_WRITE_P;IFD=x;SCMD=0x46;SCMD=0xB9;_nop_();IFMT=0;ISPCR=0x0

// CLOCK CKCON3
#define WDTCS_ILRCO					0x00
#define WDTCS_ECKI					0x40
#define WDTCS_SYSCLK_DIV_12			0x80
#define WDTCS_S0TOF					0xC0

#define FWKP_NORMAL_120uS			0x00
#define FWKP_FAST_30uS				0x20

#define MCKDO_MCK_DIV_1				0x00
#define MCKDO_MCK_DIV_2				0x04
#define MCKDO_MCK_DIV_4				0x08
#define MCKDO_MCK_DIV_8				0x0C

#define CLK_SetCKCON3(x)			ISPCR=0x80;IFADRH=0x0;IFADRL=CKCON3_P;IFMT=ISP_WRITE_P;IFD=(x)|0x02;SCMD=0x46;SCMD=0xB9;_nop_();IFMT=0;ISPCR=0x0


// CLOCK High speed(>48KHz)
#define CLK_SetCpuCLK_HighSpeed()	ISPCR=0x80;IFADRH=0x0;IFADRL=DCON0_P;IFMT=ISP_READ_P;SCMD=0x46;SCMD=0xB9;_nop_();IFD=IFD|(HSE_P);IFMT=ISP_WRITE_P;SCMD=0x46;SCMD=0xB9;_nop_();IFMT=0;ISPCR=0x0


// CLOCK Clock out
#define CLK_P45OC_P45()			AUXR0=AUXR0&(~(P45OC0|P45OC1))
#define CLK_P45OC_MCK()			AUXR0=(AUXR0&(~(P45OC0|P45OC1)))|(P45OC0)
#define CLK_P45OC_MCKDiv2()		AUXR0=(AUXR0&(~(P45OC0|P45OC1)))|(P45OC1)
#define CLK_P45OC_MCKDiv4()		AUXR0=AUXR0|((P45OC0|P45OC1))

/*
*************************************************************************************
*/ 

/*
*************************************************************************************
*  TIMER0 & TIMER1 
*
*************************************************************************************
*/
// Enable/Disabe TIMER
#define TM_DisableT0()			TR0=0					
#define TM_EnableT0()			TR0=1
#define TM_DisableT1()			TR1=0					
#define TM_EnableT1()			TR1=1

// TIMER Mode
#define TM_SetT0Mode_0_8BIT_PWM()				TMOD=(TMOD&(~(T0M0|T0M1)))
#define TM_SetT0Mode_1_16BIT_TIMER()			TMOD=(TMOD&(~(T0M0|T0M1)))|(T0M0)
#define TM_SetT0Mode_2_8BIT_AUTORELOAD()		TMOD=(TMOD&(~(T0M0|T0M1)))|(T0M1)
#define TM_SetT0Mode_3_TWO_8BIT()				TMOD=(TMOD|(T0M0|T0M1))


#define TM_SetT0Gate_Disable()					TMOD=TMOD&(~T0GATE);SFRPI=6;AUXR9=AUXR9&(~T0G1);SFRPI=0
#define TM_SetT0Gate_INT0()						TMOD=TMOD|T0GATE;SFRPI=6;AUXR9=AUXR9&(~T0G1);SFRPI=0
#define TM_SetT0Gate_TF2()						TMOD=TMOD&(~T0GATE);SFRPI=6;AUXR9=AUXR9|(T0G1);SFRPI=0
#define TM_SetT0Gate_KBI()						TMOD=TMOD|T0GATE;SFRPI=6;AUXR9=AUXR9|(T0G1);SFRPI=0

#define TM_SetT1Mode_0_8BIT_PWM()				TMOD=(TMOD&(~(T1M0|T1M1)))          
#define TM_SetT1Mode_1_16BIT_TIMER()			TMOD=(TMOD&(~(T1M0|T1M1)))|(T1M0)    
#define TM_SetT1Mode_2_8BIT_AUTORELOAD()		TMOD=(TMOD&(~(T1M0|T1M1)))|(T1M1)    
#define TM_SetT1Mode_3_Disable()				TMOD=(TMOD|(T1M0|T1M1))             

#define TM_SetT1Gate_Disable()					TMOD=TMOD&(~T1GATE);SFRPI=6;AUXR9=AUXR9&(~T1G1);SFRPI=0
#define TM_SetT1Gate_INT1()						TMOD=TMOD|T1GATE;SFRPI=6;AUXR9=AUXR9&(~T1G1);SFRPI=0
#define TM_SetT1Gate_TF2()						TMOD=TMOD&(~T1GATE);SFRPI=6;AUXR9=AUXR9|(T1G1);SFRPI=0
#define TM_SetT1Gate_KBI()						TMOD=TMOD|T1GATE;SFRPI=6;AUXR9=AUXR9|(T1G1);SFRPI=0

// Timer clock source
#define TM_SetT0Clock_SYSCLKDiv12()				AUXR3=(AUXR3&(~T0XL));AUXR2=(AUXR2&(~T0X12));TMOD=(TMOD&(~T0C_T))
#define TM_SetT0Clock_T0Port()					AUXR3=(AUXR3&(~T0XL));AUXR2=(AUXR2&(~T0X12));TMOD=(TMOD|(T0C_T))
#define TM_SetT0Clock_SYSCLK()					AUXR3=(AUXR3&(~T0XL));AUXR2=(AUXR2|(T0X12));TMOD=(TMOD&(~T0C_T))
#define TM_SetT0Clock_ILRCO()					AUXR3=(AUXR3&(~T0XL));AUXR2=(AUXR2|(T0X12));TMOD=(TMOD|(T0C_T))
#define TM_SetT0Clock_SYSCLKDiv48()				AUXR3=(AUXR3|(T0XL));AUXR2=(AUXR2&(~T0X12));TMOD=(TMOD&(~T0C_T))
#define TM_SetT0Clock_WDTPS()					AUXR3=(AUXR3|(T0XL));AUXR2=(AUXR2&(~T0X12));TMOD=(TMOD|(T0C_T))
#define TM_SetT0Clock_SYSCLKDiv192()			AUXR3=(AUXR3|(T0XL));AUXR2=(AUXR2|(T0X12));TMOD=(TMOD&(~T0C_T))
#define TM_SetT0Clock_T1OF()					AUXR3=(AUXR3|(T0XL));AUXR2=(AUXR2|(T0X12));TMOD=(TMOD|(T0C_T))

#define TM_SetT1Clock_SYSCLKDiv12()				AUXR2=(AUXR2&(~T1X12));TMOD=(TMOD&(~T1C_T))
#define TM_SetT1Clock_T1Port()					AUXR2=(AUXR2&(~T1X12));TMOD=(TMOD|(T1C_T))
#define TM_SetT1Clock_SYSCLK()					AUXR2=(AUXR2|(T1X12));TMOD=(TMOD&(~T1C_T))
#define TM_SetT1Clock_SYSCLKDiv48()				AUXR2=(AUXR2|(T1X12));TMOD=(TMOD|(T1C_T))

// Timer value
#define TM_SetT0HighByte(x)			TH0=x
#define TM_SetT0LowByte(x)			TL0=x

#define TM_SetT1LowByte(x)			TL1=x
#define TM_SetT1HighByte(x)			TH1=x


// OutPut Pin
#define TM_SetT0CKO_P46()			AUXR3=AUXR3&(~(T0PS0))
#define TM_SetT0CKO_P44()			AUXR3=AUXR3|(T0PS0)

#define TM_SetT1CKO_P33()			SFRPI=1;AUXR4=AUXR4&(~(T1PS0));SFRPI=0
#define TM_SetT1CKO_P45()			SFRPI=1;AUXR4=AUXR4|(T1PS0);SFRPI=0

// Timer En/Dis CKO
#define TM_EnT0CKO()				AUXR2=AUXR2|(T0CKOE)
#define TM_EnT1CKO()				AUXR2=AUXR2|(T1CKOE)

#define TM_DisT0CKO()				AUXR2=AUXR2&(~T0CKOE)
#define TM_DisT1CKO()				AUXR2=AUXR2&(~T1CKOE)

/*
*************************************************************************************
*/ 

/*
*************************************************************************************
*  TIMER2
*
*************************************************************************************
*/
// En/Dis TIMER2
#define TM_DisableT2()			TR2=0					
#define TM_EnableT2()			TR2=1

// En/Dis TL2
#define TM_DisableTL2()			T2MOD=T2MOD&(~TR2L)					
#define TM_EnableTL2()			T2MOD=T2MOD|(TR2L)	

// EN/Dis Clear TR2L by HW
#define TM_DisableTR2LC()			T2MOD=T2MOD&(~TR2LC)					
#define TM_EnableTR2LC()			T2MOD=T2MOD|(TR2LC)	

// Timer2 Mode
#define TM_SetT2Mode_AutoRLandExI()			CP_RL2=0;T2MOD=T2MOD&(~T2MS0)
#define TM_SetT2Mode_AutoRLwithExI()		CP_RL2=0;T2MOD=T2MOD|(T2MS0)
#define TM_SetT2Mode_Capture()				CP_RL2=1;T2MOD=T2MOD&(~T2MS0)
#define TM_SetT2Mode_CapturewithAutoZero()	CP_RL2=1;T2MOD=T2MOD|(T2MS0)
#define TM_SetT2Mode_8bitPWM()				CP_RL2=0;T2MOD=T2MOD&(~T2MS0);T2MOD=T2MOD|(T2SPL);SFRPI=1;T2MOD1=T2MOD1|T2MS1;SFRPI=0
#define TM_SetT2Mode_DutyCapture()			CP_RL2=1;T2MOD=T2MOD&(~T2MS0);T2MOD=T2MOD|(T2SPL);SFRPI=1;T2MOD1=T2MOD1|T2MS1;SFRPI=0

// Timer2 split
#define TM_EnT2Split()					T2MOD=T2MOD|(T2SPL)
#define TM_DisT2Split()					T2MOD=T2MOD&(~T2SPL)


// En/Dis TF2 interrupt
#define TM_DisTF2Int()					SFRPI=1;T2MOD1=T2MOD1|(TF2IG);SFRPI=0
#define TM_EnTF2Int()					SFRPI=1;T2MOD1=T2MOD1&(~TF2IG);SFRPI=0


// En/Dis Timer2 CKO
#define TM_EnT2CKO()					T2MOD=T2MOD|(T2OE)
#define TM_DisT2CKO()					T2MOD=T2MOD&(~T2OE)

// Timer2 Clock source
#define TM_SetT2Clock_SYSCLKDiv12()		C_T2=0;T2MOD=T2MOD&(~T2X12);SFRPI=1;T2MOD1=T2MOD1&(~T2CKS);SFRPI=0
#define TM_SetT2Clock_T2Pin()			C_T2=1;T2MOD=T2MOD&(~T2X12);SFRPI=1;T2MOD1=T2MOD1&(~T2CKS);SFRPI=0
#define TM_SetT2Clock_SYSCLK()			C_T2=0;T2MOD=T2MOD|(T2X12);SFRPI=1;T2MOD1=T2MOD1&(~T2CKS);SFRPI=0
#define TM_SetT2Clock_INT0ET()			C_T2=1;T2MOD=T2MOD|(T2X12);SFRPI=1;T2MOD1=T2MOD1&(~T2CKS);SFRPI=0	
#define TM_SetT2Clock_S0TOF()			C_T2=0;T2MOD=T2MOD&(~T2X12);SFRPI=1;T2MOD1=T2MOD1|(T2CKS);SFRPI=0
#define TM_SetT2Clock_T0OF()			C_T2=1;T2MOD=T2MOD&(~T2X12);SFRPI=1;T2MOD1=T2MOD1|(T2CKS);SFRPI=0
#define TM_SetT2Clock_AC0ES()			C_T2=0;T2MOD=T2MOD1|(T2X12);SFRPI=1;T2MOD1=T2MOD1|(T2CKS);SFRPI=0
#define TM_SetT2Clock_KBIET()			C_T2=1;T2MOD=T2MOD1|(T2X12);SFRPI=1;T2MOD1=T2MOD1|(T2CKS);SFRPI=0

// Timer2 TL2 Clock source
#define TM_SetTL2Clock_SYSCLKDiv12()	T2MOD=T2MOD&(~TL2X12);SFRPI=1;T2MOD1=T2MOD1&(~TL2CS);SFRPI=0
#define TM_SetTL2Clock_SYSCLK()			T2MOD=T2MOD|TL2X12;SFRPI=1;T2MOD1=T2MOD1&(~TL2CS);SFRPI=0
#define TM_SetTL2Clock_S0TOF()			T2MOD=T2MOD&(~TL2X12);SFRPI=1;T2MOD1=T2MOD1|(TL2CS);SFRPI=0
#define TM_SetTL2Clock_INT0ET()			T2MOD=T2MOD|(TL2X12);SFRPI=1;T2MOD1=T2MOD1|(TL2CS);SFRPI=0

// 
#define TM_EnableAccessTF2L()			SFRPI=1;T2MOD1=T2MOD1|TL2IS;SFRPI=0
#define TM_DisableAccessTF2L()			SFRPI=1;T2MOD1=T2MOD1&(~TL2IS);SFRPI=0

// 
#define TM_SetT2Capture_T2EXPin()		SFRPI=1;T2MOD1=T2MOD1&(0xF8);SFRPI=0
#define TM_SetT2Capture_RXD0()			SFRPI=1;T2MOD1=(T2MOD1&(0xF8))|(CP2S0);SFRPI=0
#define TM_SetT2Capture_P45()			SFRPI=1;T2MOD1=(T2MOD1&(0xF8))|(CP2S1);SFRPI=0
#define TM_SetT2Capture_INT1ET()		SFRPI=1;T2MOD1=(T2MOD1&(0xF8))|(CP2S0|CP2S1);SFRPI=0	
#define TM_SetT2Capture_ILRCO()			SFRPI=1;T2MOD1=(T2MOD1&(0xF8))|(CP2S2);SFRPI=0
#define TM_SetT2Capture_AC0OUT()		SFRPI=1;T2MOD1=(T2MOD1&(0xF8))|(CP2S0|CP2S2);SFRPI=0
#define TM_SetT2Capture_KBIET()			SFRPI=1;T2MOD1=(T2MOD1&(0xF8))|(CP2S1|CP2S2);SFRPI=0
#define TM_SetT2Capture_TWI0SCL()		SFRPI=1;T2MOD1=T2MOD1|(CP2S0|CP2S1|CP2S2);SFRPI=0

// TIMER2 pin
#define TM_SetT2CKOT2EX_P31P30()		SFRPI=1;AUXR4=AUXR4&(~(T2PS1|T2PS0));SFRPI=0
#define TM_SetT2CKOT2EX_P33P46()		SFRPI=1;AUXR4=(AUXR4&(~(T2PS1|T2PS0)))|(T2PS0);SFRPI=0
#define TM_SetT2CKOT2EX_P46P33()		SFRPI=1;AUXR4=(AUXR4&(~(T2PS1|T2PS0)))|(T2PS1);SFRPI=0
#define TM_SetT2CKOT2EX_P45P44()		SFRPI=1;AUXR4=AUXR4|((T2PS1|T2PS0));SFRPI=0

// Timer2 Detect Falling/Rising
#define TM_EnableT2EX_DetectFalling()					EXEN2=1
#define TM_DisableT2EX_DetectFalling()					EXEN2=0
#define TM_EnableT2EX_DetectRising()					T2MOD=T2MOD|T2EXH
#define TM_DisableT2EX_DetectRising()					T2MOD=T2MOD&(~T2EXH)

// Timer2 T2EXI invert
#define TM_DisableT2EXI_Invert()		SFRPI=1;T2MOD1=T2MOD1|TL2IS;SFRPI=0;T2MOD=T2MOD&(~T2EIP);SFRPI=1;T2MOD1=T2MOD1&(~TL2IS);SFRPI=0
#define TM_EnableT2EXI_Invert()			SFRPI=1;T2MOD1=T2MOD1|TL2IS;SFRPI=0;T2MOD=T2MOD|(T2EIP);SFRPI=1;T2MOD1=T2MOD1&(~TL2IS);SFRPI=0


// Timer2 Value
#define TM_SetT2HighByte(x)				TH2=x
#define TM_SetT2LowByte(x)				TL2=x

#define TM_SetT2RLHighByte(x)			RCAP2H=x
#define TM_SetT2RLLowByte(x)			RCAP2L=x

/*
*************************************************************************************
*/ 


/*
*************************************************************************************
*  TIMER Global control
*
*************************************************************************************
*/
#define	TIMER0_GLOBAL_BIT  		0x01
#define	TIMER1_GLOBAL_BIT  		0x02
#define	TIMER2_GLOBAL_BIT  		0x04
#define	TIMER2TL_GLOBAL_BIT 	0x20
// TIMER global enable
#define TM_GlobalStart(x)				SFRPI=1;TREN0=TREN0|x;SFRPI=0

// TIMER global trigger reload
#define TM_GlobalReload(x)				SFRPI=2;TRLC0=TRLC0|x;SFRPI=0

// TIMER global stop
#define TM_GlobalSTOP(x)				SFRPI=3;TSPC0=TSPC0|x;SFRPI=0

/*
*************************************************************************************
*/ 


/*
*************************************************************************************
*  IO PORT 
*
*************************************************************************************
*/
// P3 mode
#define PORT_SetP3QuasiBi(x)				P3M0=P3M0&(~(x));P3M1=P3M1&(~(x))
#define PORT_SetP3PushPull(x)				P3M0=P3M0&(~(x));P3M1=P3M1|(x)
#define PORT_SetP3InputOnly(x)				P3M0=P3M0|(x);P3M1=P3M1&(~(x))
#define PORT_SetP3OpenDrain(x)				P3M0=P3M0|(x);P3M1=P3M1|(x)

// En/Dis P30 Analog-input-only
#define PORT_P30_EnAnalogOnly()				SFRPI=8;AUXR11=AUXR11|(P30AM);SFRPI=0
#define PORT_P30_DisAnalogOnly()			SFRPI=8;AUXR11=AUXR11&(~P30AM);SFRPI=0

// En/Dis P33 Analog-input-only
#define PORT_P33_EnAnalogOnly()				SFRPI=8;AUXR11=AUXR11|(P33AM);SFRPI=0
#define PORT_P33_DisAnalogOnly()			SFRPI=8;AUXR11=AUXR11&(~P33AM);SFRPI=0

// P3 Driver
#define PORT_P30P31P32P33_HighDrive()		SFRPI=2;PDRVC0=PDRVC0&(~(P3DC0));SFRPI=0
#define PORT_P30P31P32P33_LowDrive()		SFRPI=2;PDRVC0=PDRVC0|((P3DC0));SFRPI=0
#define PORT_P3_EnFastDrive(x)				SFRPI=7;P3FDC=P3FDC|((x));SFRPI=0
#define PORT_P3_DisFastDrive(x)				SFRPI=7;P3FDC=P3FDC&(~(x));SFRPI=0

// P1 mode
#define PORT_SetP1OpenDrainPu(x)			P1M0=P1M0|(x);P1M1=P1M1|(x)
#define PORT_SetP1PushPull(x)				P1M0=P1M0|(x);P1M1=P1M1&(~(x))
#define PORT_SetP1AInputOnly(x)				P1M0=P1M0&(~(x));P1M1=P1M1|(x)
#define PORT_SetP1OpenDrain(x)				P1M0=P1M0&(~(x));P1M1=P1M1&(~(x))
// P1 Driver
#define PORT_P10P11P12P13_HighDrive()		SFRPI=2;PDRVC0=PDRVC0&(~(P1DC0));SFRPI=0
#define PORT_P10P11P12P13_LowDrive()		SFRPI=2;PDRVC0=PDRVC0|((P1DC0));SFRPI=0
#define PORT_P1_EnFastDrive(x)				SFRPI=8;P1FDC=P1FDC|((x));SFRPI=0
#define PORT_P1_DisFastDrive(x)				SFRPI=8;P1FDC=P1FDC&(~(x));SFRPI=0


// P4 mode
#define PORT_SetP4OpenDrainPu(x)			P4M0=P4M0|(x); SFRPI=2;P4M1=P4M1|(x) ;SFRPI=0 
#define PORT_SetP4PushPull(x)				P4M0=P4M0|(x); SFRPI=2;P4M1=P4M1&(~(x));SFRPI=0 
#define PORT_SetP4AInputOnly(x)				P4M0=P4M0&(~(x));SFRPI=2;P4M1=P4M1|(x) ;SFRPI=0
#define PORT_SetP4OpenDrain(x)				P4M0=P4M0&(~(x));SFRPI=2;P4M1=P4M1&(~(x));SFRPI=0
// P4 Driver
#define PORT_P44P45P46_HighDrive()			SFRPI=3;PDRVC1=PDRVC1&(~(P4DC1));SFRPI=0
#define PORT_P44P45P46_LowDrive()			SFRPI=3;PDRVC1=PDRVC1|((P4DC1));SFRPI=0
#define PORT_P4_EnFastDrive(x)				SFRPI=10;P4FDC=P4FDC|((x));SFRPI=0
#define PORT_P4_DisFastDrive(x)				SFRPI=10;P4FDC=P4FDC&(~(x));SFRPI=0
                                                                               

/*
*************************************************************************************
*/ 

/*
*************************************************************************************
*  TWI0 
*
*************************************************************************************
*/
// Clear TWI0
#define TWI0_Clear()				SICON=0
// En/Dis TWI0
#define TWI0_Disable()						SICON=SICON&(~ENSI)					
#define TWI0_Enable()						SICON=SICON|(ENSI)

// Sel TWI0 Clock source
#define TWI0_CLK_SYSCLK_8	0	// SYSCLK/8
#define TWI0_CLK_SYSCLK_16	1	// SYSCLK/16
#define TWI0_CLK_SYSCLK_32	2	// SYSCLK/32
#define TWI0_CLK_SYSCLK_64	3	// SYSCLK/64
#define TWI0_CLK_SYSCLK_128	4	// SYSCLK/128
#define TWI0_CLK_SYSCLK_256	5	// SYSCLK/256
#define TWI0_CLK_S0TOF_6	6	// S0TOF/6	
#define TWI0_CLK_T0OF_6		7	// T0OF/6	

#define TWI0_SetClock(x)			SICON=(SICON&B01111100)|((x&0x03)|((x<<5)&B10000000))

#define TWI0_SetSlaveAddr(x)			SIADR=x							// Set slave address
#define TWI0_SetSlaveAddr2nd(x)			SFRPI=2;SIA2=x;SFRPI=0			// Set second slave address
#define TWI0_SetSlaveAddr2ndMask(x)		SFRPI=2;SIA2M=x;SFRPI=0			// Set second slave address mask


#define TWI0_SendACK()				SICON |= AA		// Send ACK
#define TWI0_SendNOACK()			SICON &= ~AA	// Send NO ACK
#define TWI0_SendSTART()			SICON |= STA	// Send START
#define TWI0_ClearSTART()			SICON &= ~STA	// Clear START
#define TWI0_SendSTOP()				SICON |= STO	// Send STOP, clear by HW
#define TWI0_ClearSI()				SICON &= ~SI	// Clear Int flag


// Sel TWI0 port
#define TWI0_SetSCLSDAP31P30()			AUXR3=(AUXR3&(~(TWIPS1|TWIPS0)))
#define TWI0_SetSCLSDAP44P45()			AUXR3=(AUXR3&(~(TWIPS1|TWIPS0)))|TWIPS0
#define TWI0_SetSCLSDAP30P31()			AUXR3=(AUXR3&(~(TWIPS1|TWIPS0)))|TWIPS1
#define TWI0_SetSCLSDAP33P46()			AUXR3=(AUXR3|(TWIPS1|TWIPS0))

// En/Dis TWI0 clock filter
#define TWI0_DisClkFilter()			SFRPI=7;AUXR7=AUXR7&(~TWICF);SFRPI=0			
#define TWI0_EnClkFilter()			SFRPI=7;AUXR7=AUXR7|(TWICF);SFRPI=0


/*
*************************************************************************************
*/ 


/*
*************************************************************************************
*  UART0 
*
*************************************************************************************
*/
// UART0 Mode
#define UART0_SetModeShiftReg()				S0CFG=S0CFG&(~SM30);SM00=0;SM10=0
#define UART0_SetMode8bitUARTVar()			S0CFG=S0CFG&(~SM30);SM00=0;SM10=1
#define UART0_SetMode9bitUART()				S0CFG=S0CFG&(~SM30);SM00=1;SM10=0
#define UART0_SetMode9bitUARTVar()			S0CFG=S0CFG&(~SM30);SM00=1;SM10=1
#define UART0_SetModeSPIMaster()			S0CFG=S0CFG|(SM30);SM00=0;SM10=0
#define UART0_SetModeLIN()					S0CFG=S0CFG|(SM30);SM00=0;SM10=1;S0CR1=S0CR1|(S0TCK|S0RCK)
#define UART0_SetMode9bitUART_S0BRT8BitTimer()	S0CFG=S0CFG&(~SM30);SM00=1;SM10=0;S0CR1=S0CR1|(S0TCK|S0RCK);S0CFG=S0CFG&(~S0DOR)
#define UART0_SetMode9bitUART_S0BRT16BitTimer()	S0CFG=S0CFG&(~SM30);SM00=1;SM10=0;S0CR1=S0CR1|(S0TCK|S0RCK);S0CFG=S0CFG|(S0DOR)

// UART0 En/Dis Auto address recognition
#define UART0_EnAutoAddressRecognition()	SM20=1
#define UART0_DisAutoAddressRecognition()	SM20=0

// UART0 En/Dis Reception
#define UART0_EnReception()					REN0=1
#define UART0_DisReception()				REN0=0

// UART0 MSB/LSB
#define UART0_SetDataMSB()					S0CFG=S0CFG&(~S0DOR)
#define UART0_SetDataLSB()					S0CFG=S0CFG|(S0DOR)

// UART0 En/Dis TI0 trigger UART0 interrupt
#define UART0_EnTI0toS0Interrupt()			S0CFG=S0CFG&(~BTI)
#define UART0_DisTI0toS0Interrupt()			S0CFG=S0CFG|(BTI)

// UART0 En/Dis TI0 trigger SYSFLG interrupt
#define UART0_EnTI0toSysFlagInterrupt()		S0CFG=S0CFG|(UTIE)
#define UART0_DisTI0toSysFlagInterrupt()	S0CFG=S0CFG&(~UTIE)

// UART0 Slave address
#define UART0_SetSlaveAddr(x)				SADDR=x

// UART0 Slave address mask
#define UART0_SetSlaveAddrMask(x)			SADEN=x

// UART0 Baud-Rate X
#define UART0_SetT1BaudRateX1()				PCON0=PCON0&(~SMOD1);S0CFG=S0CFG&(~SMOD2)
#define UART0_SetT1BaudRateX2()				PCON0=PCON0|(SMOD1);S0CFG=S0CFG&(~SMOD2)
#define UART0_SetT1BaudRateX4()				PCON0=PCON0&(~SMOD1);S0CFG=S0CFG|(SMOD2)
#define UART0_SetT1BaudRateX8()				PCON0=PCON0|(SMOD1);S0CFG=S0CFG|(SMOD2)

#define UART0_SetT2BaudRateX1()				S0CFG=S0CFG&(~SMOD2)
#define UART0_SetT2BaudRateX2()				PCON0=PCON0&(~SMOD1);S0CFG=S0CFG|(SMOD2)
#define UART0_SetT2BaudRateX4()				PCON0=PCON0|(SMOD1);S0CFG=S0CFG|(SMOD2)

#define UART0_SetS0BRGBaudRateX1()			PCON0=PCON0&(~SMOD1);S0CFG=S0CFG&(~SMOD2)
#define UART0_SetS0BRGBaudRateX2()			PCON0=PCON0&(~SMOD1);S0CFG=S0CFG|(SMOD2)



// UART0 Baud-Rate source
#define UART0_SetBRGFromT1()				S0CR1=S0CR1&(~(S0TCK|S0RCK));SFRPI=1;T2MOD1=T2MOD1&(~TL2IS);SFRPI=0;RCLK=0;TCLK=0;S0CFG=S0CFG&(~URTS)		
#define UART0_SetBRGFromT2()				S0CR1=S0CR1&(~(S0TCK|S0RCK));SFRPI=1;T2MOD1=T2MOD1&(~TL2IS);SFRPI=0;RCLK=1;TCLK=1
#define UART0_SetBRGFromS0BRG()				S0CR1=S0CR1|(S0TCK|S0RCK)		
#define UART0_SetBRGFromS1BRG()				S0CR1=S0CR1&(~(S0TCK|S0RCK));SFRPI=1;T2MOD1=T2MOD1&(~TL2IS);SFRPI=0;RCLK=0;TCLK=0;S0CFG=S0CFG|(URTS)

// UART0 Sel pin
#define UART0_SetRxTxP30P31()				SFRPI=7;AUXR10=AUXR10&(~S0PS1);SFRPI=0;	AUXR3=AUXR3&(~S0PS0)
#define UART0_SetRxTxP44P45()				SFRPI=7;AUXR10=AUXR10&(~S0PS1);SFRPI=0;	AUXR3=AUXR3|(S0PS0)
#define UART0_SetRxTxP45P30()				SFRPI=7;AUXR10=AUXR10|(S0PS1);SFRPI=0;	AUXR3=AUXR3&(~S0PS0)
#define UART0_SetRxTxP45P44()				SFRPI=7;AUXR10=AUXR10|(S0PS1);SFRPI=0;	AUXR3=AUXR3|(S0PS0)


// UART0 En/Dis S0BRG
#define UART0_EnS0BRG()						S0CR1=S0CR1|S0TR
#define UART0_DisS0BRG()					S0CR1=S0CR1&(~S0TR)

// UART0 Set S0BRG clock source
#define UART0_SetS0BRGSelSYSCLK()			S0CR1=S0CR1|(S0TX12)
#define UART0_SetS0BRGSelSYSCLKdiv12()		S0CR1=S0CR1&(~S0TX12)

// UART0 Set S0BRG Value
#define UART0_SetS0BRGValue(x)				S0BRT=x;S0BRC=x

// UART0 En/Dis S0CKO 
#define UART0_EnS0CKO()						S0CR1=S0CR1|S0CKOE
#define UART0_DisS0CKO()					S0CR1=S0CR1&(~S0CKOE)

// UART0 Sel S0CKO pin
#define UART0_SetS0CKOP33()					SFRPI=3;AUXR6=AUXR6|S0COPS;SFRPI=0
#define UART0_SetS0CKOP47()					SFRPI=3;AUXR6=AUXR6&(~S0COPS);SFRPI=0

// UART0 En/Dis auto repeat trans
#define UART0_EnAutoRepeatTrans()			S0CR1=S0CR1|ARTE
#define UART0_DisAutoRepeatTrans()			S0CR1=S0CR1&(~ARTE)

// UART0 Set SFR 0xB9 address access SADEN or S0CR1
#define UART0_SetAccess_SADEN()				S0CFG=S0CFG&(~SMOD3)
#define UART0_SetAccess_S0CR1()				S0CFG=S0CFG|(SMOD3)

// UART0 SPI MASTER clock
#define UART0_SetSPIClock_SYSCLKDiv4()		S0CFG=S0CFG|(URM0X3)
#define UART0_SetSPIClock_SYSCLKDiv12()		S0CFG=S0CFG&(~URM0X3)


// UART0 Set LIN TX/RX
#define UART0_LIN_SetTX()					S0CFG1=S0CFG1|(TXRX0)
#define UART0_LIN_SetRX()					S0CFG1=S0CFG1&(~TXRX0)

// UART0 Set LIN SYNC
#define UART0_LIN_SendSYNC()				S0CFG1=S0CFG1|(SYNC0)
#define UART0_LIN_WaitSYNC()				S0CFG1=S0CFG1|(SYNC0)

// UART0 LIN TX SYNC 13bi/16Bit
#define UART0_LIN_TxSYNC_16Bit()			S0CFG1=S0CFG1|(S0SB16)
#define UART0_LIN_TxSYNC_13Bit()			S0CFG1=S0CFG1&(~S0SB16)

// UART0 LIN RX auto Baud-Rate
#define UART0_LIN_AutoBR()					S0CFG1=S0CFG1|(ATBR0)
#define UART0_LIN_DisAutoBR()				S0CFG1=S0CFG1&(~ATBR0)

// UART0 LIN clear flag
#define UART0_LIN_ClrSBF0()					S0CFG1=S0CFG1|(SBF0)
#define UART0_LIN_ClrTXER0()				S0CFG1=S0CFG1|(TXER0)
/*
*************************************************************************************
*/ 


/*
*************************************************************************************
*  ADC
*
*************************************************************************************
*/
// ADC Enable/Disable
#define ADC_Disable()						ADCON0=ADCON0&(~ADCEN)					
#define ADC_Enable()						ADCON0=ADCON0|(ADCEN)

// ADC Start
#define ADC_SoftStart()						ADCON0=ADCON0|(ADCS)					

// ADC Clock source
#define ADC_SetClock_SYSCLK()				ADCFG0=ADCFG0&(~(ADCKS0|ADCKS1|ADCKS2))
#define ADC_SetClock_SYSCLKDiv2()			ADCFG0=(ADCFG0&(~(ADCKS0|ADCKS1|ADCKS2)))|(ADCKS0)
#define ADC_SetClock_SYSCLKDiv4()			ADCFG0=(ADCFG0&(~(ADCKS0|ADCKS1|ADCKS2)))|(ADCKS1)
#define ADC_SetClock_SYSCLKDiv8()			ADCFG0=(ADCFG0&(~(ADCKS0|ADCKS1|ADCKS2)))|(ADCKS0|ADCKS1)
#define ADC_SetClock_SYSCLKDiv16()			ADCFG0=(ADCFG0&(~(ADCKS0|ADCKS1|ADCKS2)))|(ADCKS2)
#define ADC_SetClock_SYSCLKDiv32()			ADCFG0=(ADCFG0&(~(ADCKS0|ADCKS1|ADCKS2)))|(ADCKS0|ADCKS2)
#define ADC_SetClock_S0TOFDiv2()			ADCFG0=(ADCFG0&(~(ADCKS0|ADCKS1|ADCKS2)))|(ADCKS1|ADCKS2)
#define ADC_SetClock_T2OFDiv2()				ADCFG0=ADCFG0|(ADCKS0|ADCKS1|ADCKS2)

// ADC Channel
#define ADC_SetChannel_AIN0_P10()				ADCFG0=ADCFG0&(~ACHS);ADCON0=(ADCON0&(~(CHS3|CHS2|CHS1|CHS0)))
#define ADC_SetChannel_AIN1_P46()				ADCFG0=ADCFG0&(~ACHS);ADCON0=(ADCON0&(~(CHS3|CHS2|CHS1|CHS0)))|(CHS0)
#define ADC_SetChannel_AIN2_P45()				ADCFG0=ADCFG0&(~ACHS);ADCON0=(ADCON0&(~(CHS3|CHS2|CHS1|CHS0)))|(CHS1)
#define ADC_SetChannel_AIN3_P44()				ADCFG0=ADCFG0&(~ACHS);ADCON0=(ADCON0&(~(CHS3|CHS2|CHS1|CHS0)))|(CHS1|CHS0)
#define ADC_SetChannel_AIN4_P30()				ADCFG0=ADCFG0&(~ACHS);ADCON0=(ADCON0&(~(CHS3|CHS2|CHS1|CHS0)))|(CHS2)
#define ADC_SetChannel_AIN5_P33()				ADCFG0=ADCFG0&(~ACHS);ADCON0=(ADCON0&(~(CHS3|CHS2|CHS1|CHS0)))|(CHS2|CHS0)
#define ADC_SetChannel_IVR14()					ADCFG0=ADCFG0|(ACHS);ADCON0=(ADCON0&(~(CHS3|CHS2|CHS1|CHS0)))
#define ADC_SetChannel_AVSS()					ADCFG0=ADCFG0|(ACHS);ADCON0=(ADCON0&(~(CHS3|CHS2|CHS1|CHS0)))|(CHS0)

// ADC Trigger mode
#define ADC_SetMode_SetADCS()				SFRPI=ADCFG4_Page;ADCFG4=(ADCFG4&(~(ADTM3|ADTM2)));SFRPI=0;ADCFG0=ADCFG0&(~(ADTM0|ADTM1))
#define ADC_SetMode_T0Overflow()			SFRPI=ADCFG4_Page;ADCFG4=(ADCFG4&(~(ADTM3|ADTM2)));SFRPI=0;ADCFG0=(ADCFG0&(~(ADTM0|ADTM1)))|(ADTM0)
#define ADC_SetMode_FreeRunning()			SFRPI=ADCFG4_Page;ADCFG4=(ADCFG4&(~(ADTM3|ADTM2)));SFRPI=0;ADCFG0=(ADCFG0&(~(ADTM0|ADTM1)))|(ADTM1)
#define ADC_SetMode_S0BRGOverflow()			SFRPI=ADCFG4_Page;ADCFG4=(ADCFG4&(~(ADTM3|ADTM2)));SFRPI=0;ADCFG0=ADCFG0|(ADTM0|ADTM1)
#define ADC_SetMode_KBIET()					SFRPI=ADCFG4_Page;ADCFG4=(ADCFG4&(~(ADTM3|ADTM2)))|(ADTM2);SFRPI=0;ADCFG0=ADCFG0&(~(ADTM0|ADTM1))
#define ADC_SetMode_INT1ET()				SFRPI=ADCFG4_Page;ADCFG4=(ADCFG4&(~(ADTM3|ADTM2)))|(ADTM2);SFRPI=0;ADCFG0=(ADCFG0&(~(ADTM0|ADTM1)))|(ADTM0)
#define ADC_SetMode_INT0ET()				SFRPI=ADCFG4_Page;ADCFG4=(ADCFG4&(~(ADTM3|ADTM2)))|(ADTM2);SFRPI=0;ADCFG0=ADCFG0|(ADTM0|ADTM1)
#define ADC_SetMode_T2EXES()				SFRPI=ADCFG4_Page;ADCFG4=(ADCFG4&(~(ADTM3|ADTM2)))|(ADTM3);SFRPI=0;ADCFG0=ADCFG0&(~(ADTM0|ADTM1))
#define ADC_SetMode_AC0ES()					SFRPI=ADCFG4_Page;ADCFG4=(ADCFG4&(~(ADTM3|ADTM2)))|(ADTM3);SFRPI=0;ADCFG0=(ADCFG0&(~(ADTM0|ADTM1)))|(ADTM1)
#define ADC_SetMode_PCA0Overflow()			SFRPI=ADCFG4_Page;ADCFG4=(ADCFG4&(~(ADTM3|ADTM2)))|(ADTM3|ADTM2);SFRPI=0;ADCFG0=(ADCFG0&(~(ADTM0|ADTM1)))


// ADC Result Right-Justified selection)
#define ADC_SetLeftJustified()				ADCFG0=ADCFG0&(~ADRJ)					
#define ADC_SetRightJustified()				ADCFG0=ADCFG0|(ADRJ)					

// ADC sample hold time
#define ADC_SetSampleHoldTime(x)		SFRPI=ADCFG2_Page;ADCFG2=x;SFRPI=0	// SHT=x

// ADC Result offset
#define ADC_SetOffsetAdd(x)				SFRPI=ADCFG1_Page;ADCFG1=(ADCFG1&(~(0x1F)))|(x);SFRPI=0	// ADC+x (x=0~15)
#define ADC_SetOffsetSub(x)				SFRPI=ADCFG1_Page;ADCFG1=(ADCFG1&(~(0x1F)))|((~x));SFRPI=0	// ADC-x (x=1~16)

// ADC ADCWI within or outside
#define ADC_SetWindow_WithIn()			SFRPI=ADCFG4_Page;ADCFG4=ADCFG4&(~ADWM0);SFRPI=0
#define ADC_SetWindow_OutSide()			SFRPI=ADCFG4_Page;ADCFG4=ADCFG4|(ADWM0);SFRPI=0

// ADC set window
#define ADC_SetWindow_High(x)			SFRPI=ADCFG11_Page;ADCFG11=(((x&0x0F)<<4)|0x0F)	;SFRPI=ADCFG12_Page;ADCFG12=((x>>4)&0xFF);SFRPI=0
#define ADC_SetWindow_Low(x)			SFRPI=ADCFG13_Page;ADCFG13=(((x&0x0F)<<4)&0xF0)	;SFRPI=ADCFG14_Page;ADCFG14=((x>>4)&0xFF);SFRPI=0

// ADC Data
#define ADC_SetADCData_10Bit()			SFRPI=ADCFG3_Page;ADCFG3=(ADCFG3&(~(ARES1|ARES0)))|(ARES0);SFRPI=0
#define ADC_SetADCData_8Bit()			SFRPI=ADCFG3_Page;ADCFG3=(ADCFG3&(~(ARES1|ARES0)))|(ARES1);SFRPI=0

// ADC Power
#define ADC_SetADCPOWER_HIGH()			SFRPI=ADCFG3_Page;ADCFG3=ADCFG3&(~(ADPS0|ADPS1));SFRPI=0
#define ADC_SetADCPOWER_MHIGH()			SFRPI=ADCFG3_Page;ADCFG3=(ADCFG3&(~(ADPS0|ADPS1)))|(ADPS0);SFRPI=0
#define ADC_SetADCPOWER_MLOW()			SFRPI=ADCFG3_Page;ADCFG3=(ADCFG3&(~(ADPS0|ADPS1)))|(ADPS1);SFRPI=0
#define ADC_SetADCPOWER_LOW()			SFRPI=ADCFG3_Page;ADCFG3=ADCFG3|(ADPS0|ADPS1);SFRPI=0

// 
#define ADC_EnInterrupt_ADCI()			SFRPI=ADCFG1_Page;ADCFG1=ADCFG1&(~IGADCI);SFRPI=0
#define ADC_DisInterrupt_ADCI()			SFRPI=ADCFG1_Page;ADCFG1=ADCFG1|(IGADCI);SFRPI=0

// 
#define ADC_DisInterrupt_ADCWI()		SFRPI=ADCFG1_Page;ADCFG1=ADCFG1&(~EADCWI);SFRPI=0
#define ADC_EnInterrupt_ADCWI()			SFRPI=ADCFG1_Page;ADCFG1=ADCFG1|(EADCWI);SFRPI=0

// 
#define ADC_DisInterrupt_SMPF()			SFRPI=ADCFG1_Page;ADCFG1=ADCFG1&(~SMPFIE);SFRPI=0
#define ADC_ENInterrupt_SMPF()			SFRPI=ADCFG1_Page;ADCFG1=ADCFG1|(SMPFIE);SFRPI=0


#define ADC_ClrInterruptFlag()			ADCON0=ADCON0&(~ADCI)

/*
*************************************************************************************
*/ 

/*
*************************************************************************************
*  IVREF
*
*************************************************************************************
*/
#define IVREF_Enable()						ISPCR=0x80;IFADRH=0x0;IFADRL=PCON3_P;IFMT=ISP_READ_P;SCMD=0x46;SCMD=0xB9;_nop_();IFD=IFD|(IVREN_P);IFMT=ISP_WRITE_P;SCMD=0x46;SCMD=0xB9;_nop_();IFMT=0;ISPCR=0x0		
#define IVREF_Disable()						ISPCR=0x80;IFADRH=0x0;IFADRL=PCON3_P;IFMT=ISP_READ_P;SCMD=0x46;SCMD=0xB9;_nop_();IFD=IFD&(~IVREN_P);IFMT=ISP_WRITE_P;SCMD=0x46;SCMD=0xB9;_nop_();IFMT=0;ISPCR=0x0		
/*
*************************************************************************************
*/ 

/*
*************************************************************************************
*  SPI 
*
*************************************************************************************
*/
// SPI Enable/Disable
#define SPI_Disable()						SPCON=SPCON&(~SPEN)					
#define SPI_Enable()						SPCON=SPCON|(SPEN)

// SPI Sel MASTER/SLAVE
#define SPI_SelectMASTERByMSTRbit()			SPCON=SPCON|(SSIG|MSTR)					
#define SPI_SelectSLAVEByMSTRbit()			SPCON=(SPCON|(SSIG))&(~MSTR)						
#define SPI_SelectMASTERSLAVEBynSSpin()		SPCON=SPCON&(~SSIG)

// SPI CPOL 
#define SPI_SetCPOL_0()						SPCON=SPCON&(~CPOL)
#define SPI_SetCPOL_1()						SPCON=SPCON|(CPOL)

// SPI DORD
#define SPI_SetDataMSB()					SPCON=SPCON&(~DORD)
#define SPI_SetDataLSB()					SPCON=SPCON|(DORD)

// SPI clock source
#define SPI_CLK_SYSCLK_4	0	// SYSCLK/4
#define SPI_CLK_SYSCLK_8	1	// SYSCLK/8
#define SPI_CLK_SYSCLK_16	2	// SYSCLK/16
#define SPI_CLK_SYSCLK_32	3	// SYSCLK/32
#define SPI_CLK_SYSCLK_64	4	// SYSCLK/64
#define SPI_CLK_SYSCLK_2	5	// SYSCLK/2
#define SPI_CLK_S0TOF_6		6	// S0TOF/6	
#define SPI_CLK_T0OF_6		7	// T0OF/6	

#define SPI_SetClock(x)						SPCON=(SPCON&B11111100)|(x&0x03);SPSTAT=(x>>2)

// SPI CPHA
#define SPI_SetCPHA_0()						SPCON=SPCON&(~CPHA)
#define SPI_SetCPHA_1()						SPCON=SPCON|(CPHA)

// SPI select pin  nSS/MOSI/MISO/SPICLK
#define SPI_SetUseP46P44P45P33()			SFRPI=AUXR10_Page;AUXR10=AUXR10&(~SPIPS0);SFRPI=0
#define SPI_SetUseP30P44P31P33()			SFRPI=AUXR10_Page;AUXR10=AUXR10|(SPIPS0);SFRPI=0


//
#define SPI_ClearCompleteFlag()				SPSTAT=SPSTAT|SPIF
#define SPI_ChkCompleteFlag()				(SPSTAT&SPIF)

// 
#define SPI_SendData(x)						SPDAT=x
#define SPI_GetData()						SPDAT

// 
#define SPI_DisDaisyChain()					SFRPI=AUXR7_Page;AUXR7=AUXR7&(~SPI0M0);SFRPI=0					
#define SPI_EnDaisyChain()					SFRPI=AUXR7_Page;AUXR7=AUXR7|SPI0M0;SFRPI=0	

// 
#define SPI_DisAutoSPIFClear()				SFRPI=AUXR10_Page;AUXR10=AUXR10&(~SPFACE);SFRPI=0	
#define SPI_EnAutoSPIFClear()				SFRPI=AUXR10_Page;AUXR10=AUXR10|SPFACE;SFRPI=0	


/*
*************************************************************************************
*/ 

/*
*************************************************************************************
*  PCA
*
*************************************************************************************
*/
// PCA Enable/Disable counter
#define	PCA_EnPCACounter()					CR=1
#define	PCA_DisPCACounter()					CR=0

// PCA clock soure
#define PCA_SetCLOCK_SYSCLKdiv12()			CMOD=CMOD&(~(CPS2|CPS1|CPS0))
#define PCA_SetCLOCK_SYSCLKdiv2()			CMOD=(CMOD&(~(CPS2|CPS1|CPS0)))|(CPS0)
#define PCA_SetCLOCK_TO()					CMOD=(CMOD&(~(CPS2|CPS1|CPS0)))|(CPS1)
#define PCA_SetCLOCK_ECI()					CMOD=(CMOD&(~(CPS2|CPS1|CPS0)))|(CPS1|CPS0)
#define PCA_SetCLOCK_CKMIX16()				CMOD=(CMOD&(~(CPS2|CPS1|CPS0)))|(CPS2)
#define PCA_SetCLOCK_SYSCLK()				CMOD=(CMOD&(~(CPS2|CPS1|CPS0)))|(CPS2|CPS0)
#define PCA_SetCLOCK_S0BRT()				CMOD=(CMOD&(~(CPS2|CPS1|CPS0)))|(CPS2|CPS1)
#define PCA_SetCLOCK_MCKDO()				CMOD=CMOD|(CPS2|CPS1|CPS0)

// PCA FIFO Data clock
#define PCA_SetFDCK_T0OF()					SFRPI=6;AUXR9=AUXR9&(C0FDC1|C0FDC0);SFRPI=0			
#define PCA_SetFDCK_T1OF()					SFRPI=6;AUXR9=(AUXR9&(C0FDC1|C0FDC0))|(C0FDC0);SFRPI=0			
#define PCA_SetFDCK_T3OF()					SFRPI=6;AUXR9=(AUXR9&(C0FDC1|C0FDC0))|(C0FDC1);SFRPI=0			
#define PCA_SetFDCK_S0TOF()					SFRPI=6;AUXR9=AUXR9|(C0FDC1|C0FDC0);SFRPI=0			

// PCA Counter/Reload counter
#define PCA_SetCounter(x)					CH=HIBYTE(x);CL=LOBYTE(x)
#define PCA_SetCounterReload(x)				CHRL=HIBYTE(x);CLRL=LOBYTE(x)


// PCA Mode
#define PCA_CH0_SetMode_16BitCaptureRising()	CCAPM0=CAPP0		
#define PCA_CH0_SetMode_16BitCaptureFalling()	CCAPM0=CAPN0		
#define PCA_CH0_SetMode_16BitCaptureDaul()		CCAPM0=CAPP0|CAPN0		
#define PCA_CH0_SetMode_16BitSoftwareTimer()	CCAPM0=ECOM0|MAT0		
#define PCA_CH0_SetMode_16BitHighSpeedOutput()	CCAPM0=ECOM0|MAT0|TOG0		
#define PCA_CH0_SetMode_PWM()					CCAPM0=ECOM0|PWM0	
#define PCA_CH0_SetMode_COPM()					CCAPM0=ECOM0|PWM0|TOG0	
#define PCA_CH0_SetMode_FIFOData()				CCAPM0=ECOM0|CAPN0|PWM0	

#define PCA_CH1_SetMode_16BitCaptureRising()	CCAPM1=CAPP1		
#define PCA_CH1_SetMode_16BitCaptureFalling()	CCAPM1=CAPN1		
#define PCA_CH1_SetMode_16BitCaptureDaul()		CCAPM1=CAPP1|CAPN1		
#define PCA_CH1_SetMode_16BitSoftwareTimer()	CCAPM1=ECOM1|MAT1		
#define PCA_CH1_SetMode_16BitHighSpeedOutput()	CCAPM1=ECOM1|MAT1|TOG1		
#define PCA_CH1_SetMode_PWM()					CCAPM1=ECOM1|PWM1	
#define PCA_CH1_SetMode_COPM()					CCAPM1=ECOM1|PWM1|TOG1	
#define PCA_CH1_SetMode_FIFOData()				CCAPM1=ECOM1|CAPN1|PWM1	

#define PCA_CH2_SetMode_16BitCaptureRising()	CCAPM2=CAPP2		
#define PCA_CH2_SetMode_16BitCaptureFalling()	CCAPM2=CAPN2		
#define PCA_CH2_SetMode_16BitCaptureDaul()		CCAPM2=CAPP2|CAPN2		
#define PCA_CH2_SetMode_16BitSoftwareTimer()	CCAPM2=ECOM2|MAT2		
#define PCA_CH2_SetMode_16BitHighSpeedOutput()	CCAPM2=ECOM2|MAT2|TOG2		
#define PCA_CH2_SetMode_PWM()					CCAPM2=ECOM2|PWM2	
#define PCA_CH2_SetMode_COPM()					CCAPM2=ECOM2|PWM2|TOG2	
#define PCA_CH2_SetMode_FIFOData()				CCAPM2=ECOM2|CAPN2|PWM2	

#define PCA_CH3_SetMode_16BitCaptureRising()	CCAPM3=CAPP3		
#define PCA_CH3_SetMode_16BitCaptureFalling()	CCAPM3=CAPN3		
#define PCA_CH3_SetMode_16BitCaptureDaul()		CCAPM3=CAPP3|CAPN3		
#define PCA_CH3_SetMode_16BitSoftwareTimer()	CCAPM3=ECOM3|MAT3		
#define PCA_CH3_SetMode_16BitHighSpeedOutput()	CCAPM3=ECOM3|MAT3|TOG3		
#define PCA_CH3_SetMode_PWM()					CCAPM3=ECOM3|PWM3	
#define PCA_CH3_SetMode_COPM()					CCAPM3=ECOM3|PWM3|TOG3	
#define PCA_CH3_SetMode_FIFOData()				CCAPM3=ECOM3|CAPN3|PWM3	



#define PCA_CH0_SetPWM_8Bit()					PCAPWM0=PCAPWM0&(~(P0RS0|P0RS1))
#define PCA_CH0_SetPWM_10Bit()					PCAPWM0=(PCAPWM0&(~(P0RS0|P0RS1)))|(P0RS0)
#define PCA_CH0_SetPWM_12Bit()					PCAPWM0=(PCAPWM0&(~(P0RS0|P0RS1)))|(P0RS1)
#define PCA_CH0_SetPWM_16Bit()					PCAPWM0=PCAPWM0|((P0RS0|P0RS1))

#define PCA_CH1_SetPWM_8Bit()					PCAPWM1=PCAPWM1&(~(P1RS0|P1RS1))
#define PCA_CH1_SetPWM_10Bit()					PCAPWM1=(PCAPWM1&(~(P1RS0|P1RS1)))|(P1RS0)
#define PCA_CH1_SetPWM_12Bit()					PCAPWM1=(PCAPWM1&(~(P1RS0|P1RS1)))|(P1RS1)
#define PCA_CH1_SetPWM_16Bit()					PCAPWM1=PCAPWM1|((P1RS0|P1RS1))

#define PCA_CH2_SetPWM_8Bit()					PCAPWM2=PCAPWM0&(~(P2RS0|P2RS1))
#define PCA_CH2_SetPWM_10Bit()					PCAPWM2=(PCAPWM0&(~(P2RS0|P2RS1)))|(P2RS0)
#define PCA_CH2_SetPWM_12Bit()					PCAPWM2=(PCAPWM0&(~(P2RS0|P2RS1)))|(P2RS1)
#define PCA_CH2_SetPWM_16Bit()					PCAPWM2=PCAPWM0|((P2RS0|P2RS1))

#define PCA_CH3_SetPWM_8Bit()					PCAPWM3=PCAPWM0&(~(P3RS0|P3RS1))
#define PCA_CH3_SetPWM_10Bit()					PCAPWM3=(PCAPWM0&(~(P3RS0|P3RS1)))|(P3RS0)
#define PCA_CH3_SetPWM_12Bit()					PCAPWM3=(PCAPWM0&(~(P3RS0|P3RS1)))|(P3RS1)
#define PCA_CH3_SetPWM_16Bit()					PCAPWM3=PCAPWM0|((P3RS0|P3RS1))


// PCA Channel value
#define PCA_CH0_SetValue(x,y)					AUXR2=AUXR2|(C0PLK);if((x==0)&&(y==0)){PCAPWM0=PCAPWM0|0x03;}else{CCAP0L=y;CCAP0H=x;PCAPWM0=PCAPWM0&(~0x03);};AUXR2=AUXR2&(~C0PLK)		// 0 0,1
#define PCA_CH1_SetValue(x,y)					AUXR2=AUXR2|(C0PLK);if((x==0)&&(y==0)){PCAPWM1=PCAPWM1|0x03;}else{CCAP1L=y;CCAP1H=x;PCAPWM1=PCAPWM1&(~0x03);};AUXR2=AUXR2&(~C0PLK)		// 1 0,1
#define PCA_CH2_SetValue(x,y)					AUXR2=AUXR2|(C0PLK);if((x==0)&&(y==0)){PCAPWM2=PCAPWM2|0x03;}else{CCAP2L=y;CCAP2H=x;PCAPWM2=PCAPWM2&(~0x03);};AUXR2=AUXR2&(~C0PLK)		// 2 2,3
#define PCA_CH3_SetValue(x,y)					AUXR2=AUXR2|(C0PLK);if((x==0)&&(y==0)){PCAPWM3=PCAPWM3|0x03;}else{CCAP3L=y;CCAP3H=x;PCAPWM3=PCAPWM3&(~0x03);};AUXR2=AUXR2&(~C0PLK)		// 3 2,3

#define PCA_CH0_SetValue_12Bit(x,y)				AUXR2=AUXR2|(C0PLK);if((x>=0x10)){PCAPWM0=PCAPWM0|0x03;}else{CCAP0L=y;CCAP0H=x;PCAPWM0=PCAPWM0&(~0x03);};AUXR2=AUXR2&(~C0PLK)		// 0 0,1
#define PCA_CH1_SetValue_12Bit(x,y)				AUXR2=AUXR2|(C0PLK);if((x>=0x10)){PCAPWM1=PCAPWM1|0x03;}else{CCAP1L=y;CCAP1H=x;PCAPWM1=PCAPWM1&(~0x03);};AUXR2=AUXR2&(~C0PLK)		// 1 0,1
#define PCA_CH2_SetValue_12Bit(x,y)				AUXR2=AUXR2|(C0PLK);if((x>=0x10)){PCAPWM2=PCAPWM2|0x03;}else{CCAP2L=y;CCAP2H=x;PCAPWM2=PCAPWM2&(~0x03);};AUXR2=AUXR2&(~C0PLK)		// 2 2,3
#define PCA_CH3_SetValue_12Bit(x,y)				AUXR2=AUXR2|(C0PLK);if((x>=0x10)){PCAPWM3=PCAPWM3|0x03;}else{CCAP3L=y;CCAP3H=x;PCAPWM3=PCAPWM3&(~0x03);};AUXR2=AUXR2&(~C0PLK)		// 3 2,3

#define PCA_CH0_SetValue_10Bit(x,y)				AUXR2=AUXR2|(C0PLK);if((x>=0x04)){PCAPWM0=PCAPWM0|0x03;}else{CCAP0L=y;CCAP0H=x;PCAPWM0=PCAPWM0&(~0x03);};AUXR2=AUXR2&(~C0PLK)		// 0 0,1
#define PCA_CH1_SetValue_10Bit(x,y)				AUXR2=AUXR2|(C0PLK);if((x>=0x04)){PCAPWM1=PCAPWM1|0x03;}else{CCAP1L=y;CCAP1H=x;PCAPWM1=PCAPWM1&(~0x03);};AUXR2=AUXR2&(~C0PLK)		// 1 0,1
#define PCA_CH2_SetValue_10Bit(x,y)				AUXR2=AUXR2|(C0PLK);if((x>=0x04)){PCAPWM2=PCAPWM2|0x03;}else{CCAP2L=y;CCAP2H=x;PCAPWM2=PCAPWM2&(~0x03);};AUXR2=AUXR2&(~C0PLK)		// 2 2,3
#define PCA_CH3_SetValue_10Bit(x,y)				AUXR2=AUXR2|(C0PLK);if((x>=0x04)){PCAPWM3=PCAPWM3|0x03;}else{CCAP3L=y;CCAP3H=x;PCAPWM3=PCAPWM3&(~0x03);};AUXR2=AUXR2&(~C0PLK)		// 3 2,3

#define PCA_CH0_SetValue_8Bit(x,y)				AUXR2=AUXR2|(C0PLK);if((x!=0)){PCAPWM0=PCAPWM0|0x02;}else{CCAP0H=y;PCAPWM0=PCAPWM0&(~0x02);};AUXR2=AUXR2&(~C0PLK)		// 0 
#define PCA_CH1_SetValue_8Bit(x,y)				AUXR2=AUXR2|(C0PLK);if((x!=0)){PCAPWM1=PCAPWM1|0x02;}else{CCAP1H=y;PCAPWM1=PCAPWM1&(~0x02);};AUXR2=AUXR2&(~C0PLK)		// 1 
#define PCA_CH2_SetValue_8Bit(x,y)				AUXR2=AUXR2|(C0PLK);if((x!=0)){PCAPWM2=PCAPWM2|0x02;}else{CCAP2H=y;PCAPWM2=PCAPWM2&(~0x02);};AUXR2=AUXR2&(~C0PLK)		// 2 
#define PCA_CH3_SetValue_8Bit(x,y)				AUXR2=AUXR2|(C0PLK);if((x!=0)){PCAPWM3=PCAPWM3|0x02;}else{CCAP3H=y;PCAPWM3=PCAPWM3&(~0x02);};AUXR2=AUXR2&(~C0PLK)		// 3 

#define PCA_CH0_SetValue_L(x)					CCAP0L=x                        // 0
#define PCA_CH1_SetValue_L(x)					CCAP1L=x                        // 1
#define PCA_CH2_SetValue_L(x)					CCAP2L=x                        // 2
#define PCA_CH3_SetValue_L(x)					CCAP3L=x                        // 3

#define PCA_CH0_SetValue_H(x)					CCAP0H=x						// 0
#define PCA_CH1_SetValue_H(x)					CCAP1H=x                        // 1
#define PCA_CH2_SetValue_H(x)					CCAP2H=x                        // 2
#define PCA_CH3_SetValue_H(x)					CCAP3H=x                        // 3

#define PCA_CH0_SetValue_9thBit_L_0()			PCAPWM0=PCAPWM0&(~0x01)        	// 0
#define PCA_CH1_SetValue_9thBit_L_0()			PCAPWM1=PCAPWM1&(~0x01)         // 1
#define PCA_CH2_SetValue_9thBit_L_0()			PCAPWM2=PCAPWM2&(~0x01)         // 2
#define PCA_CH3_SetValue_9thBit_L_0()			PCAPWM3=PCAPWM3&(~0x01)         // 3
#define PCA_CH0_SetValue_9thBit_L_1()			PCAPWM0=PCAPWM0|(0x01)        	// 0             
#define PCA_CH1_SetValue_9thBit_L_1()			PCAPWM1=PCAPWM1|(0x01)         // 1             
#define PCA_CH2_SetValue_9thBit_L_1()			PCAPWM2=PCAPWM2|(0x01)         // 2             
#define PCA_CH3_SetValue_9thBit_L_1()			PCAPWM3=PCAPWM3|(0x01)         // 3             

#define PCA_CH0_SetValue_9thBit_H_0()			PCAPWM0=PCAPWM0&(~0x02)        	// 0             
#define PCA_CH1_SetValue_9thBit_H_0()			PCAPWM1=PCAPWM1&(~0x02)         // 1             
#define PCA_CH2_SetValue_9thBit_H_0()			PCAPWM2=PCAPWM2&(~0x02)         // 2             
#define PCA_CH3_SetValue_9thBit_H_0()			PCAPWM3=PCAPWM3&(~0x02)         // 3             
#define PCA_CH0_SetValue_9thBit_H_1()			PCAPWM0=PCAPWM0|(0x02)        	// 0             
#define PCA_CH1_SetValue_9thBit_H_1()			PCAPWM1=PCAPWM1|(0x02)         // 1              
#define PCA_CH2_SetValue_9thBit_H_1()			PCAPWM2=PCAPWM2|(0x02)         // 2              

// PCA output invert
#define PCA_CH0_SetPWM_EnInvert()				PCAPWM0=PCAPWM0|P0INV
#define PCA_CH1_SetPWM_EnInvert()				PCAPWM1=PCAPWM1|P1INV
#define PCA_CH2_SetPWM_EnInvert()				PCAPWM2=PCAPWM2|P2INV
#define PCA_CH3_SetPWM_EnInvert()				PCAPWM3=PCAPWM3|P3INV

#define PCA_CH0_SetPWM_DisInvert()				PCAPWM0=PCAPWM0&(~(P0INV))
#define PCA_CH1_SetPWM_DisInvert()				PCAPWM1=PCAPWM1&(~(P1INV))
#define PCA_CH2_SetPWM_DisInvert()				PCAPWM2=PCAPWM2&(~(P2INV))
#define PCA_CH3_SetPWM_DisInvert()				PCAPWM3=PCAPWM3&(~(P3INV))

// PCA En/Dis PWM output
#define PCA_SetPWM0_EnOutput()					PAOE=PAOE|(POE0)
#define PCA_SetPWM1_EnOutput()					PAOE=PAOE|(POE1)
#define PCA_SetPWM2_EnOutput()					PAOE=PAOE|(POE2)
#define PCA_SetPWM3_EnOutput()					PAOE=PAOE|(POE3)

#define PCA_SetPWM0_DisOutput()					PAOE=PAOE&(~POE0)
#define PCA_SetPWM1_DisOutput()					PAOE=PAOE&(~POE1)
#define PCA_SetPWM2_DisOutput()					PAOE=PAOE&(~POE2)
#define PCA_SetPWM3_DisOutput()					PAOE=PAOE&(~POE3)

// PCA Set PWM buffer mode
#define PCA_CH01_SetPWM_EnBufferMode()				CMOD=CMOD|BME0
#define PCA_CH23_SetPWM_EnBufferMode()				CMOD=CMOD|BME2
#define PCA_CH01_SetPWM_DisBufferMode()				CMOD=CMOD&(~(BME0))
#define PCA_CH23_SetPWM_DisBufferMode()				CMOD=CMOD&(~(BME2))

// PCA Dead-Time
#define PCA_CH01_SetPWM_EnDeadTime()				CCAPM0=CCAPM0|DTE0
#define PCA_CH23_SetPWM_EnDeadTime()				CCAPM2=CCAPM2|DTE2
#define PCA_CH01_SetPWM_DisDeadTime()				CCAPM0=CCAPM0&(~(DTE0))
#define PCA_CH23_SetPWM_DisDeadTime()				CCAPM2=CCAPM2&(~(DTE2))

// PCA Dead-Time prescaler
#define PCA_SetDeadTimePreScaler_Sysclk()		SFRPI=1;PDTCRA=(PDTCRA&(~(DTPS1|DTPS0)));SFRPI=0
#define PCA_SetDeadTimePreScaler_SysclkDiv2()	SFRPI=1;PDTCRA=(PDTCRA&(~(DTPS1|DTPS0)))|(DTPS0);SFRPI=0
#define PCA_SetDeadTimePreScaler_SysclkDiv4()	SFRPI=1;PDTCRA=(PDTCRA&(~(DTPS1|DTPS0)))|(DTPS1);SFRPI=0
#define PCA_SetDeadTimePreScaler_SysclkDiv8()	SFRPI=1;PDTCRA=(PDTCRA|((DTPS1|DTPS0)));SFRPI=0

// PCA Dead-Time period PreScaler*(x) 0:None, 1~63:PreScaler*(1~63)
#define PCA_SetDeadTimePeriod(x)				SFRPI=1;PDTCRA=(PDTCRA&((DTPS1|DTPS0)))|x;SFRPI=0


// PCA Interrupt

#define PCA_CF_EnInterrupt()				CMOD=CMOD|ECF
#define PCA_CF_DisInterrupt()				CMOD=CMOD&(~(ECF))

#define PCA_CH0_EnInterrupt()				CCAPM0=CCAPM0|ECCF0
#define PCA_CH1_EnInterrupt()				CCAPM1=CCAPM1|ECCF1
#define PCA_CH2_EnInterrupt()				CCAPM2=CCAPM2|ECCF2
#define PCA_CH3_EnInterrupt()				CCAPM3=CCAPM3|ECCF3

#define PCA_CH0_DisInterrupt()				CCAPM0=CCAPM0&(~(ECCF0))
#define PCA_CH1_DisInterrupt()				CCAPM1=CCAPM1&(~(ECCF1))
#define PCA_CH2_DisInterrupt()				CCAPM2=CCAPM2&(~(ECCF2))
#define PCA_CH3_DisInterrupt()				CCAPM3=CCAPM3&(~(ECCF3))

// PCA Aligned
#define PCA_SetPWM_EdgeAligned()			PWMCR=PWMCR&(~PCAE)
#define PCA_SetPWM_CenterAligned()			PWMCR=PWMCR|(PCAE)

// PCA Variable resolution on central aligned PWM
#define PCA_SetCenterAligned_DisVar()			SFRPI=8;AUXR11=AUXR11&(~C0M0);SFRPI=0
#define PCA_SetCenterAligned_EnVar()			SFRPI=8;AUXR11=AUXR11|(C0M0);SFRPI=0

// PCA CF set on the top/botton of central aligned PWM cycle
#define PCA_SetCenterAligned_CFonTop()			SFRPI=8;AUXR11=AUXR11&(~C0OFS);SFRPI=0
#define PCA_SetCenterAligned_CFonBottom()		SFRPI=8;AUXR11=AUXR11|(C0OFS);SFRPI=0

// PCA Pin
#define PCA_SetPCA0ClockOut_P47()			SFRPI=2;AUXR5=AUXR5&(~C0COPS);SFRPI=0
#define PCA_SetPCA0ClockOut_P33()			SFRPI=2;AUXR5=AUXR5|(C0COPS);SFRPI=0

#define PCA_SetPCA0ECIPort_P44()			SFRPI=2;AUXR5=AUXR5&(~ECIPS0);SFRPI=0
#define PCA_SetPCA0ECIPort_P10()			SFRPI=2;AUXR5=AUXR5|(ECIPS0);SFRPI=0

#define PCA_SetCEX0CEX1CEX2CEX3_P30P33P31P46()		SFRPI=2;AUXR5=AUXR5&(~(C0PS0|C0PS1));SFRPI=0
#define PCA_SetCEX0CEX1CEX2CEX3_P44P33P45P46()		SFRPI=2;AUXR5=(AUXR5&(~(C0PS0|C0PS1)))|(C0PS0);SFRPI=0
#define PCA_SetCEX0CEX1CEX2CEX3_P44P33P30P46()		SFRPI=2;AUXR5=(AUXR5&(~(C0PS0|C0PS1)))|(C0PS1);SFRPI=0
#define PCA_SetCEX0CEX1CEX2CEX3_P44P33P10P46()		SFRPI=2;AUXR5=AUXR5|(C0PS0|C0PS1);SFRPI=0


/*
*************************************************************************************
*/ 


/*
*************************************************************************************
*  WDT 
*
*************************************************************************************
*/
#define WDT_SetClock_32K_DIV_1_16ms()		WDTCR=(WDTCR&(~0x07))
#define WDT_SetClock_32K_DIV_2_32ms()		WDTCR=(WDTCR&(~0x07))|0x01	
#define WDT_SetClock_32K_DIV_4_64ms()		WDTCR=(WDTCR&(~0x07))|0x02
#define WDT_SetClock_32K_DIV_8_128ms()		WDTCR=(WDTCR&(~0x07))|0x03
#define WDT_SetClock_32K_DIV_16_256ms()		WDTCR=(WDTCR&(~0x07))|0x04
#define WDT_SetClock_32K_DIV_32_512ms()		WDTCR=(WDTCR&(~0x07))|0x05
#define WDT_SetClock_32K_DIV_64_1024ms()	WDTCR=(WDTCR&(~0x07))|0x06
#define WDT_SetClock_32K_DIV_128_2048ms()	WDTCR=(WDTCR|(0x07))

#define WDT_EnReset()		WDTCR|=WREN
#define WDT_Enable_OnPD()	WDTCR|=NSW
#define WDT_Enable_OnIDLE()	WDTCR|=WIDL
#define WDT_Clear()			WDTCR|=CLRW
#define WDT_Enable()		WDTCR|=ENW

#define CLRWDT()	WDTCR|=CLRW
#define ENWDT()		WDTCR|=ENW
/*
*************************************************************************************
*/ 

/*
*************************************************************************************
*  RTC  
*
*************************************************************************************
*/
// RTC Enable/Disable
#define RTC_Enable()			RTCCR=RTCCR|RTCE
#define RTC_Disable()			RTCCR=RTCCR&(~RTCE)

// RTC Enable/Disable RTCO 
#define RTC_EnRTCO_OutP44()			RTCCR=RTCCR|RTCO
#define RTC_DisRTCO_OutP44()		RTCCR=RTCCR&(~RTCO)

// RTC Reload x=0~63 
#define RTC_SetReload(x)		RTCCR=(RTCCR&(0xC0))|(x)

// RTC Counter x=0~63
#define RTC_SetCounter(x)		RTCTM=(RTCTM&(0xC0))|(x)

// RTC Clock prescale x=0~15 2^15~2^0
#define RTC_SetClock_Div_1()		RTCTM=(RTCTM&(0x3F))|(BIT7|BIT6);ISPCR=0x80;IFADRH=0x0;IFADRL=CKCON4_P;IFMT=ISP_READ_P;SCMD=0x46;SCMD=0xB9;_nop_();IFD=(IFD&(0xFC))|(BIT1|BIT0);IFADRH=0x0;IFADRL=CKCON4_P;IFMT=ISP_WRITE_P;SCMD=0x46;SCMD=0xB9;_nop_();IFMT=0;ISPCR=0x0
#define RTC_SetClock_Div_2()		RTCTM=(RTCTM&(0x3F))|(BIT7);ISPCR=0x80;IFADRH=0x0;IFADRL=CKCON4_P;IFMT=ISP_READ_P;SCMD=0x46;SCMD=0xB9;_nop_();IFD=(IFD&(0xFC))|(BIT1|BIT0);IFADRH=0x0;IFADRL=CKCON4_P;IFMT=ISP_WRITE_P;SCMD=0x46;SCMD=0xB9;_nop_();IFMT=0;ISPCR=0x0
#define RTC_SetClock_Div_4()		RTCTM=(RTCTM&(0x3F))|(BIT6);ISPCR=0x80;IFADRH=0x0;IFADRL=CKCON4_P;IFMT=ISP_READ_P;SCMD=0x46;SCMD=0xB9;_nop_();IFD=(IFD&(0xFC))|(BIT1|BIT0);IFADRH=0x0;IFADRL=CKCON4_P;IFMT=ISP_WRITE_P;SCMD=0x46;SCMD=0xB9;_nop_();IFMT=0;ISPCR=0x0
#define RTC_SetClock_Div_8()		RTCTM=(RTCTM&(0x3F));ISPCR=0x80;IFADRH=0x0;IFADRL=CKCON4_P;IFMT=ISP_READ_P;SCMD=0x46;SCMD=0xB9;_nop_();IFD=(IFD&(0xFC))|(BIT1|BIT0);IFADRH=0x0;IFADRL=CKCON4_P;IFMT=ISP_WRITE_P;SCMD=0x46;SCMD=0xB9;_nop_();IFMT=0;ISPCR=0x0
#define RTC_SetClock_Div_16()		RTCTM=(RTCTM&(0x3F))|(BIT7|BIT6);ISPCR=0x80;IFADRH=0x0;IFADRL=CKCON4_P;IFMT=ISP_READ_P;SCMD=0x46;SCMD=0xB9;_nop_();IFD=(IFD&(0xFC))|(BIT1);IFADRH=0x0;IFADRL=CKCON4_P;IFMT=ISP_WRITE_P;SCMD=0x46;SCMD=0xB9;_nop_();IFMT=0;ISPCR=0x0
#define RTC_SetClock_Div_32()		RTCTM=(RTCTM&(0x3F))|(BIT7);ISPCR=0x80;IFADRH=0x0;IFADRL=CKCON4_P;IFMT=ISP_READ_P;SCMD=0x46;SCMD=0xB9;_nop_();IFD=(IFD&(0xFC))|(BIT1);IFADRH=0x0;IFADRL=CKCON4_P;IFMT=ISP_WRITE_P;SCMD=0x46;SCMD=0xB9;_nop_();IFMT=0;ISPCR=0x0
#define RTC_SetClock_Div_64()		RTCTM=(RTCTM&(0x3F))|(BIT6);ISPCR=0x80;IFADRH=0x0;IFADRL=CKCON4_P;IFMT=ISP_READ_P;SCMD=0x46;SCMD=0xB9;_nop_();IFD=(IFD&(0xFC))|(BIT1);IFADRH=0x0;IFADRL=CKCON4_P;IFMT=ISP_WRITE_P;SCMD=0x46;SCMD=0xB9;_nop_();IFMT=0;ISPCR=0x0
#define RTC_SetClock_Div_128()		RTCTM=(RTCTM&(0x3F));ISPCR=0x80;IFADRH=0x0;IFADRL=CKCON4_P;IFMT=ISP_READ_P;SCMD=0x46;SCMD=0xB9;_nop_();IFD=(IFD&(0xFC))|(BIT1);IFADRH=0x0;IFADRL=CKCON4_P;IFMT=ISP_WRITE_P;SCMD=0x46;SCMD=0xB9;_nop_();IFMT=0;ISPCR=0x0
#define RTC_SetClock_Div_256()		RTCTM=(RTCTM&(0x3F))|(BIT7|BIT6);ISPCR=0x80;IFADRH=0x0;IFADRL=CKCON4_P;IFMT=ISP_READ_P;SCMD=0x46;SCMD=0xB9;_nop_();IFD=(IFD&(0xFC))|(BIT0);IFADRH=0x0;IFADRL=CKCON4_P;IFMT=ISP_WRITE_P;SCMD=0x46;SCMD=0xB9;_nop_();IFMT=0;ISPCR=0x0
#define RTC_SetClock_Div_512()		RTCTM=(RTCTM&(0x3F))|(BIT7);ISPCR=0x80;IFADRH=0x0;IFADRL=CKCON4_P;IFMT=ISP_READ_P;SCMD=0x46;SCMD=0xB9;_nop_();IFD=(IFD&(0xFC))|(BIT0);IFADRH=0x0;IFADRL=CKCON4_P;IFMT=ISP_WRITE_P;SCMD=0x46;SCMD=0xB9;_nop_();IFMT=0;ISPCR=0x0
#define RTC_SetClock_Div_1024()		RTCTM=(RTCTM&(0x3F))|(BIT6);ISPCR=0x80;IFADRH=0x0;IFADRL=CKCON4_P;IFMT=ISP_READ_P;SCMD=0x46;SCMD=0xB9;_nop_();IFD=(IFD&(0xFC))|(BIT0);IFADRH=0x0;IFADRL=CKCON4_P;IFMT=ISP_WRITE_P;SCMD=0x46;SCMD=0xB9;_nop_();IFMT=0;ISPCR=0x0
#define RTC_SetClock_Div_2048()		RTCTM=(RTCTM&(0x3F));ISPCR=0x80;IFADRH=0x0;IFADRL=CKCON4_P;IFMT=ISP_READ_P;SCMD=0x46;SCMD=0xB9;_nop_();IFD=(IFD&(0xFC))|(BIT0);IFADRH=0x0;IFADRL=CKCON4_P;IFMT=ISP_WRITE_P;SCMD=0x46;SCMD=0xB9;_nop_();IFMT=0;ISPCR=0x0
#define RTC_SetClock_Div_4096()		RTCTM=(RTCTM&(0x3F))|(BIT7|BIT6);ISPCR=0x80;IFADRH=0x0;IFADRL=CKCON4_P;IFMT=ISP_READ_P;SCMD=0x46;SCMD=0xB9;_nop_();IFD=(IFD&(0xFC));IFADRH=0x0;IFADRL=CKCON4_P;IFMT=ISP_WRITE_P;SCMD=0x46;SCMD=0xB9;_nop_();IFMT=0;ISPCR=0x0
#define RTC_SetClock_Div_8192()		RTCTM=(RTCTM&(0x3F))|(BIT7);ISPCR=0x80;IFADRH=0x0;IFADRL=CKCON4_P;IFMT=ISP_READ_P;SCMD=0x46;SCMD=0xB9;_nop_();IFD=(IFD&(0xFC));IFADRH=0x0;IFADRL=CKCON4_P;IFMT=ISP_WRITE_P;SCMD=0x46;SCMD=0xB9;_nop_();IFMT=0;ISPCR=0x0
#define RTC_SetClock_Div_16384()	RTCTM=(RTCTM&(0x3F))|(BIT6);ISPCR=0x80;IFADRH=0x0;IFADRL=CKCON4_P;IFMT=ISP_READ_P;SCMD=0x46;SCMD=0xB9;_nop_();IFD=(IFD&(0xFC));IFADRH=0x0;IFADRL=CKCON4_P;IFMT=ISP_WRITE_P;SCMD=0x46;SCMD=0xB9;_nop_();IFMT=0;ISPCR=0x0
#define RTC_SetClock_Div_32768()	RTCTM=(RTCTM&(0x3F));ISPCR=0x80;IFADRH=0x0;IFADRL=CKCON4_P;IFMT=ISP_READ_P;SCMD=0x46;SCMD=0xB9;_nop_();IFD=(IFD&(0xFC));IFADRH=0x0;IFADRL=CKCON4_P;IFMT=ISP_WRITE_P;SCMD=0x46;SCMD=0xB9;_nop_();IFMT=0;ISPCR=0x0

// RTC Clock source
#define RTC_SetClock_ECKI_P45()		ISPCR=0x80;IFADRH=0x0;IFADRL=CKCON4_P;IFMT=ISP_READ_P;SCMD=0x46;SCMD=0xB9;_nop_();IFD=(IFD&(0x1F));IFADRH=0x0;IFADRL=CKCON4_P;IFMT=ISP_WRITE_P;SCMD=0x46;SCMD=0xB9;_nop_();IFMT=0;ISPCR=0x0
#define RTC_SetClock_ILRCO()		ISPCR=0x80;IFADRH=0x0;IFADRL=CKCON4_P;IFMT=ISP_READ_P;SCMD=0x46;SCMD=0xB9;_nop_();IFD=(IFD&(0x1F))|(RCSS0_P);IFADRH=0x0;IFADRL=CKCON4_P;IFMT=ISP_WRITE_P;SCMD=0x46;SCMD=0xB9;_nop_();IFMT=0;ISPCR=0x0
#define RTC_SetClock_WDTPS()		ISPCR=0x80;IFADRH=0x0;IFADRL=CKCON4_P;IFMT=ISP_READ_P;SCMD=0x46;SCMD=0xB9;_nop_();IFD=(IFD&(0x1F))|(RCSS1_P);IFADRH=0x0;IFADRL=CKCON4_P;IFMT=ISP_WRITE_P;SCMD=0x46;SCMD=0xB9;_nop_();IFMT=0;ISPCR=0x0
#define RTC_SetClock_WDTOF()		ISPCR=0x80;IFADRH=0x0;IFADRL=CKCON4_P;IFMT=ISP_READ_P;SCMD=0x46;SCMD=0xB9;_nop_();IFD=(IFD&(0x1F))|(RCSS1_P|RCSS0_P);IFADRH=0x0;IFADRL=CKCON4_P;IFMT=ISP_WRITE_P;SCMD=0x46;SCMD=0xB9;_nop_();IFMT=0;ISPCR=0x0
#define RTC_SetClock_SYSCLK()		ISPCR=0x80;IFADRH=0x0;IFADRL=CKCON4_P;IFMT=ISP_READ_P;SCMD=0x46;SCMD=0xB9;_nop_();IFD=(IFD&(0x1F))|(RCSS2_P);IFADRH=0x0;IFADRL=CKCON4_P;IFMT=ISP_WRITE_P;SCMD=0x46;SCMD=0xB9;_nop_();IFMT=0;ISPCR=0x0
#define RTC_SetClock_SYSCLKDiv12()		ISPCR=0x80;IFADRH=0x0;IFADRL=CKCON4_P;IFMT=ISP_READ_P;SCMD=0x46;SCMD=0xB9;_nop_();IFD=(IFD&(0x1F))|(RCSS2_P|RCSS0_P);IFADRH=0x0;IFADRL=CKCON4_P;IFMT=ISP_WRITE_P;SCMD=0x46;SCMD=0xB9;_nop_();IFMT=0;ISPCR=0x0

// RTC Clear RTCF
#define RTC_ClearRTCF()				PCON1=RTCF

// RTC En/Dis RTC interrupt
#define RTC_EnInterrupt()			SFIE=SFIE|RTCFIE
#define RTC_DisInterrupt()			SFIE=SFIE&(~RTCFIE)

/*
*************************************************************************************
*/ 

/*
*************************************************************************************
*  SID  I2C START/STOP 
*
*************************************************************************************
*/

/*
*************************************************************************************
*/ 

/*
*************************************************************************************
*  BEEPER  
*
*************************************************************************************
*/
// BEEPER 
#define BEEP_SetP44_IOPort()						AUXR3=AUXR3&(~(BPOC0|BPOC1))
#define BEEP_SetP44_OutILRCODiv32_1KHz()			AUXR3=(AUXR3&(~(BPOC0|BPOC1)))|(BPOC0)
#define BEEP_SetP44_OutILRCODiv16_2KHz()			AUXR3=(AUXR3&(~(BPOC0|BPOC1)))|(BPOC1)
#define BEEP_SetP44_OutILRCODiv8_4KHz()				AUXR3=AUXR3|((BPOC0|BPOC1))

/*
*************************************************************************************
*/ 


/*
*************************************************************************************
*  KBI  
*
*************************************************************************************
*/
// KBI Pattern
#define KBI0_1	0x01
#define KBI1_1	0x02
#define KBI2_1	0x04
#define KBI3_1	0x08
#define KBI4_1	0x10
#define KBI5_1	0x20
#define KBI6_1	0x40
#define KBI7_1	0x80
#define KBI0_0	0x00
#define KBI1_0	0x00
#define KBI2_0	0x00
#define KBI3_0	0x00
#define KBI4_0	0x00
#define KBI5_0	0x00
#define KBI6_0	0x00
#define KBI7_0	0x00
#define KBI_SetKBPattern(x)					KBPATN=x

// KBI Mask
#define KBI0	0x01
#define KBI1	0x02
#define KBI2	0x04
#define KBI3	0x08
#define KBI4	0x10
#define KBI5	0x20
#define KBI6	0x40
#define KBI7	0x80
#define KBI_SetKBMask(x)					KBMASK=x

// KBI clear flag
#define KBI_ClrITFlag()						KBCON=KBCON&(~KBIF)

// KBI Detect level/edge
#define KBI_SetDetectLevel()				KBCON=KBCON&(~KBES)
#define KBI_SetDetectEdge()					KBCON=KBCON|(KBES)

// KBI 
#define KBI_SetPatternNotEqual()			KBCON=KBCON&(~PATN_SEL)
#define KBI_SetPatternEqual()				KBCON=KBCON|(PATN_SEL)

// KBI filter
#define KBI_SetFilter_Disable()				KBCON=KBCON&(~(KBCS0|KBCS1))
#define KBI_SetFilter_Sysclk_x3()			KBCON=(KBCON&(~(KBCS0|KBCS1)))|(KBCS0)
#define KBI_SetFilter_SysclkDiv6_x3()		KBCON=(KBCON&(~(KBCS0|KBCS1)))|(KBCS1)
#define KBI_SetFilter_S0TOF_x3()			KBCON=KBCON|((KBCS0|KBCS1))
/*
*************************************************************************************
*/ 


/*
*************************************************************************************
*  GPL 
*
*************************************************************************************
*/
// GPL BOREV 
#define GPL_BOREV(x)						BOREV=x;x=BOREV

// GPL CRC

#define GPL_CRC_CRC0DA_DataIn()				AUXR1=(CRCDS0|CRCDS1)

#define GPL_CRC_WriteCRCSeedL(x)			AUXR1=AUXR1&(~(CRCDS0|CRCDS1));CRC0DA=x
#define GPL_CRC_WriteCRCSeedH(x)			AUXR1=(AUXR1&(~(CRCDS0|CRCDS1)))|(CRCDS0);CRC0DA=x
#define GPL_CRC_WriteCRCData(x)				AUXR1=(AUXR1&(~(CRCDS0|CRCDS1)))|(CRCDS0|CRCDS1);CRC0DA=x
#define GPL_CRC_ReadCRCResultL(x)			AUXR1=AUXR1&(~(CRCDS0|CRCDS1));x=CRC0DA
#define GPL_CRC_ReadCRCResultH(x)			AUXR1=(AUXR1&(~(CRCDS0|CRCDS1)))|(CRCDS0);x=CRC0DA


/*
*************************************************************************************
*/ 

/*
*************************************************************************************
*  AC0 
*
*************************************************************************************
*/
// AC0 Power
#define AC0_DisLowPower()							AC0CON=AC0CON&(~(AC0LP))
#define AC0_EnLowPower()							AC0CON=AC0CON|AC0LP

// AC0 Running on PD mode
#define AC0_DisPDRunning()							AC0CON=AC0CON&(~(AC0PDX))
#define AC0_EnPDRunning()							AC0CON=AC0CON|AC0PDX

// AC0 Enable/Disable
#define AC0_Disable()								AC0CON=AC0CON&(~(AC0EN))
#define AC0_Enable()								AC0CON=AC0CON|AC0EN

// AC0 Output invert
#define AC0_SetOutput_DisInvert()					AC0CON=AC0CON&(~(AC0INV))
#define AC0_SetOutput_EnInvert()					AC0CON=AC0CON|AC0INV

// AC0 Interrupt mode
#define AC0_SetInterruptMode_Falling()				AC0CON=AC0CON&(~(AC0M0|AC0M1))|(AC0M0)
#define AC0_SetInterruptMode_Rising()				AC0CON=AC0CON&(~(AC0M0|AC0M1))|(AC0M1)
#define AC0_SetInterruptMode_Togging()				AC0CON=AC0CON|(AC0M0|AC0M1)

// AC0 
#define AC0_SetNegaReferenceVoltage_IntVref()		AC0MOD=AC0MOD|(NVRL)
#define AC0_SetNegaReferenceVoltage_AC0NI()			AC0MOD=AC0MOD&(~NVRL)

// AC0 Ouput filter
#define AC0_SetFilter_Disable()						AC0MOD=AC0MOD&(~(AC0FLT|AC0FLT1))
#define AC0_SetFilter_Sysclk_x3()					AC0MOD=AC0MOD&(~(AC0FLT|AC0FLT1))|(AC0FLT)
#define AC0_SetFilter_SysclkDiv6_x3()				AC0MOD=AC0MOD&(~(AC0FLT|AC0FLT1))|(AC0FLT1)
#define AC0_SetFilter_T3OF_x3()						AC0MOD=AC0MOD|(AC0FLT|AC0FLT1)

// AC0 Hysteresis
#define AC0_DisHysteresis()							SFRPI=7;AUXR10=AUXR10&(~(AC0HC0));SFRPI=0
#define AC0_EnHysteresis()							SFRPI=7;AUXR10=AUXR10|AC0HC0;SFRPI=0

// AC0 OUTPUT
#define AC0_DisableAC0OUTPUTP10()					SFRPI=1;AUXR4=AUXR4&(~(AC0OE));SFRPI=0
#define AC0_EnableAC0OUTPUTP10()					SFRPI=1;AUXR4=AUXR4|AC0OE;SFRPI=0

/*
*************************************************************************************
*/ 


/*
*************************************************************************************
*  POWER 
*
*************************************************************************************
*/

// POWER 
#define POW_BOD1_Enable_OnPD		BIT7
#define POW_BOD1_Disable_OnPD		0x00

#define POW_BOD1_Set24V			B00010000
#define POW_BOD1_Set36V			B00100000
#define POW_BOD1_Set42V			B00110000
#define POW_BOD1_Set27V			B00000000

#define POW_BOD1_PCON4_27V				B00010000
#define POW_BOD1_PCON4_24V_36V_42V		B00000000

#define POW_BOD1_Enable			BIT2
#define POW_BOD1_Disable		0x00

#define POW_BOD1_EnReset		BIT3
#define POW_BOD1_DisReset		0x00

#define POW_BOD0_EnReset		BIT1
#define POW_BOD0_DisReset		0x00

#define POW_SetPCON2(x)			ISPCR=0x80;IFADRH=0x0;IFADRL=PCON2_P;IFMT=ISP_WRITE_P;IFD=x;SCMD=0x46;SCMD=0xB9;_nop_();IFMT=0;ISPCR=0x0
#define POW_SetPCON4(x)			ISPCR=0x80;IFADRH=0x0;IFADRL=PCON4_P;IFMT=ISP_WRITE_P;IFD=x;SCMD=0x46;SCMD=0xB9;_nop_();IFMT=0;ISPCR=0x0

#define POW_SetMode_PD()		PCON0|=PD;

#define POW_ResetToAP()			ISPCR=SRST
#define POW_ResetToISP()		ISPCR=SWBS|SRST


/*
*************************************************************************************
*/ 


#endif



