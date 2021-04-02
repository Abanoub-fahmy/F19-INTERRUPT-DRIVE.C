/*
 * EXT_INTER.c
 *
 * Created: 4/2/2021 1:43:19 PM
 *  Author: Infotech
 */ 
#include "EXT-INTER.h"


void SET_GlobalInterrupt(void)
{
	#if GLOBAL_INTERRUPT == GLOBAL_INTERRUPT_ENABLE
	
	SET_BIT(SREG,7);
	
	#elif GLOBAL_INTERRUPT == GLOBAL_INTERRUPT_DISABLE
	CLR_BIT(SREG,7);
	
	#endif
}



void   ExternalINT0_Init(void)
{
	/*Enable Global INT*/
	SET_GlobalInterrupt();
	
	/*Enable External INT0*/
	SET_BIT(GICR , 6);
	
	
	/*Select External INT0 Trigger*/
	#if  EXTERNAL_INT0_TRIGGER == TRIGGER_RISING
	SET_BIT(MCUCR , 0);
	SET_BIT(MCUCR , 1);

	#elif EXTERNAL_INT0_TRIGGER == TRIGGER_FALING
	CLR_BIT(MCUCR , 0);
	SET_BIT(MCUCR , 1);
	
	#elif EXTERNAL_INT0_TRIGGER == TRIGGER_LOW_LEVEL
	CLR_BIT(MCUCR , 0);
	CLR_BIT(MCUCR , 1);
	
	#elif EXTERNAL_INT0_TRIGGER == TRIGGER_ANY_LOGICAL_CHANGE
	SET_BIT(MCUCR , 0);
	CLR_BIT(MCUCR , 1);
	
	#endif
}

  void ExternalINT1_Inti(void)
  {
	  /*Enable Global INT*/
	  SET_GlobalInterrupt();
	  
	  /*Enable External INT0*/
	  SET_BIT(GICR , 7);
	  
	  
	  /*Select External INT1 Trigger*/
	  #if  EXTERNAL_INT0_TRIGGER == TRIGGER_RISING
	  SET_BIT(MCUCR , 2);
	  SET_BIT(MCUCR , 3);

	  #elif EXTERNAL_INT0_TRIGGER == TRIGGER_FALING
	  CLR_BIT(MCUCR , 2);
	  SET_BIT(MCUCR , 3);
	  
	  #elif EXTERNAL_INT0_TRIGGER == TRIGGER_LOW_LEVEL
	  CLR_BIT(MCUCR , 2);
	  CLR_BIT(MCUCR , 3);
	  
	  #elif EXTERNAL_INT0_TRIGGER == TRIGGER_ANY_LOGICAL_CHANGE
	  SET_BIT(MCUCR , 2);
	  CLR_BIT(MCUCR , 3);
	  
	  #endif
  }
  void ExternalINT2_Inti(void)
  {
	  /*Enable Global INT*/
	  SET_GlobalInterrupt();
	  
	  /*Enable External INT0*/
	  SET_BIT(GICR , 5);
	  
	  /*Select External INT2 Trigger*/
	  #if  EXTERNAL_INT0_TRIGGER == TRIGGER_RISING
	  SET_BIT(MCUCSR , 6);
	  

	  #elif EXTERNAL_INT0_TRIGGER == TRIGGER_FALING
	  CLR_BIT(MCUCSR , 6);
	  
	   
	  #endif
	  
  }



