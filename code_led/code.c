/*********************************************************************
*Project:MG82F6B08_001_104-DEMO
*			MG82F6B08_001_104 SOP16_V11 EV Board (TH221A)
*			CpuCLK=8MHz, SysCLK=8MHz
*Description:
*			set P44/P45 to GPIO, Disable OCD function
*			set P47 to GPIO, Disable RESET function
*Note:
*			If P44,P45 and P47 are used for GPIO at the same time, OCD-ICE cannot be used for burning and simulation.
*			To restore OCD function, it is necessary to use U1 burning the other code.
*
*Creat time:
*Modify:
*    
*********************************************************************/
#define _MAIN_C

#include <Intrins.h>
#include <Absacc.h>

#include <Stdio.h>  // for printf

#include "REG_MG82F6B08_001_104.H"
#include "Type.h"
#include "API_Macro_MG82F6B08_001_104.H"
#include "API_Uart_BRGRL_MG82F6B08_001_104.H"


/*************************************************
*Set SysClk (MAX.24MHz)
*Selection: 
*	8000000,16000000
*	11059200,22118400
*************************************************/
#define MCU_SYSCLK		8000000
/*************************************************/
/*************************************************
*Set CpuClk (MAX.16MHz)
*	1) CpuCLK=SysCLK
*	2) CpuClk=SysClk/2
*************************************************/
#define MCU_CPUCLK		(MCU_SYSCLK)
//#define MCU_CPUCLK		(MCU_SYSCLK/2)

#define TIMER_1T_1ms_TH	((65536-(u16)(float)(1000*((float)(MCU_SYSCLK)/(float)(1000000)))) /256) 			
#define TIMER_1T_1ms_TL	((65536-(u16)(float)(1000*((float)(MCU_SYSCLK)/(float)(1000000)))) %256)

#define TIMER_12T_1ms_TH	((65536-(u16)(float)(1000*((float)(MCU_SYSCLK)/(float)(12000000)))) /256) 			
#define TIMER_12T_1ms_TL	((65536-(u16)(float)(1000*((float)(MCU_SYSCLK)/(float)(12000000)))) %256)

#define LED_R		P32
#define LED_G_0		P33
#define LED_G_1		P46


/*************************************************
*Function:     void DelayXus(u8 xUs)
*Description:  delay,unit:us
*Input:     u8 Us -> *1us  (1~255)
*Output:     
*************************************************/
void DelayXus(u8 xUs)
{
	while(xUs!=0)
	{
#if (MCU_CPUCLK>=11059200)
		_nop_();
#endif
#if (MCU_CPUCLK>=14745600)
		_nop_();
		_nop_();
		_nop_();
		_nop_();
#endif
#if (MCU_CPUCLK>=16000000)
		_nop_();
#endif

#if (MCU_CPUCLK>=22118400)
		_nop_();
		_nop_();
		_nop_();
		_nop_();
		_nop_();
		_nop_();
#endif
#if (MCU_CPUCLK>=24000000)
		_nop_();
		_nop_();
#endif		
#if (MCU_CPUCLK>=29491200)
		_nop_();
		_nop_();
		_nop_();
		_nop_();
		_nop_();
		_nop_();
#endif
#if (MCU_CPUCLK>=32000000)
		_nop_();
		_nop_();
#endif

		xUs--;
	}
}

/*************************************************
*Function:     void DelayXms(u16 xMs)
*Description:delay,unit:ms
*Input:     u16 xMs -> *1ms  (1~65535)
*Output:     
*************************************************/
void DelayXms(u16 xMs)
{
	while(xMs!=0)
	{
		CLRWDT();
		DelayXus(200);
		DelayXus(200);
		DelayXus(200);
		DelayXus(200);
		DelayXus(200);
		xMs--;
		
	}
}

/***********************************************************************************
*Function:   void EnP44P45GPIO(void)
*Description:   set P44/P45 to GPIO, Disable OCD function
*		Note: after this setting,P44/P45 will not be available for OCD-ICE, 
*Input:   
*Output:     
*************************************************************************************/
void EnP44P45GPIO(void)
{
	u8 x;
	bit bEA=EA;
	ISPCR=0x80;
	IFADRH=0x00;
	IFADRL=DCON0_P;
	IFMT=ISP_READ_P;
	SCMD=0x46;
	SCMD=0xB9;
	_nop_();
	x=IFD;
	x=x&(~OCDE_P);
	IFD=x;
	IFMT=ISP_WRITE_P;
	SCMD=0x46;
	SCMD=0xB9;
	_nop_();
	ISPCR=0x00;
	IFMT=ISP_STANBY;
	
}

/***********************************************************************************
*Function:   void EnP47GPIO(void)
*Description:   set P47 to GPIO, Disable RESET function
*Input:   
*Output:     
*************************************************************************************/
void EnP47GPIO(void)
{
	u8 x;
	bit bEA=EA;
	ISPCR=0x80;
	IFADRH=0x00;
	IFADRL=DCON0_P;
	IFMT=ISP_READ_P;
	SCMD=0x46;
	SCMD=0xB9;
	_nop_();
	x=IFD;
	x=x&(~RSTIO_P);
	IFD=x;
	IFMT=ISP_WRITE_P;
	SCMD=0x46;
	SCMD=0xB9;
	_nop_();
	ISPCR=0x00;
	IFMT=ISP_STANBY;
	
}


/***********************************************************************************
*Function:   void InitPort(void)
*Description:   Initialize IO Port
*Input:   
*Output:     
*************************************************************************************/
void InitPort(void)
{
//	PORT_SetP3QuasiBi(BIT0|BIT1|BIT2|BIT3);		// Set P30,P31,P32,P33 as Quasi-Bidirectional,for RXD/TXD,LED
//	PORT_SetP4OpenDrainPu(BIT6);				// Set P46 as Open-Drain with pull-up resistor,for LED

//	PORT_SetP4OpenDrainPu(BIT4|BIT5|BIT7);		// Set P44,P45,P47 as Open-Drain with pull-up resistor
	
	
	
	
	PORT_SetP3QuasiBi(BIT0|BIT1);
	PORT_SetP3PushPull(BIT3);
	PORT_SetP4PushPull(BIT4|BIT5|BIT6);
	
}

/***********************************************************************************
*Function:   void InitSystem(void)
*Description:   Initialize MCU
*Input:   
*Output:     
*************************************************************************************/
void InitSystem(void)
{
	InitPort();

}

void main()
{
    InitSystem();
//	
	LED_G_0=0;LED_G_1=0;LED_R=0;
	DelayXms(2000);
	LED_G_0=1;LED_G_1=1;LED_R=1;

	// Delay 2s before set P44,P45,P47 as GPIO
	// the SWD and reset pin are still valid for two seconds after power-on, 
	// and the OCD-ICE program can be updated during this time
	DelayXms(2000);
	EnP44P45GPIO();
//	EnP47GPIO();
		P44=0;P33=0;P46=0;	P45=0;
    while(1)
    {
//       if(P44==1)
//			 {
//			P33=1;
//			DelayXms(2000);
//			P33=0;
//			P46=1;
//			DelayXms(2000);
//			P46=0;
//			P45=1;
//			DelayXms(2000);
//			P45=0;
//			 }

P45=1;P44=1;DelayXms(2000);P45=0;P44=0;DelayXms(2000);
			
    }
}

