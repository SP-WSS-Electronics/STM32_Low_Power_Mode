#include "stm32l0xx_hal.h"


void Lpm_Enter_SleepMode(void)
{
	/* Suspend System tick interrupt to avoid waking up */
	HAL_SuspendTick();
	
	
	
	/* Enter Wakeups */
	//HAL_PWR_EnableSleepOnExit ();

	/* Enter into ARM Sleep Mode */
	HAL_PWR_EnterSLEEPMode(PWR_MAINREGULATOR_ON, PWR_SLEEPENTRY_WFI);
}

void Lpm_Exit_SleepMode(void)
{
	/* Resume System tick interrupt to avoid waking up */
	HAL_ResumeTick();
}


void Lpm_Enter_StopMode(void)
{
/* Suspend System tick interrupt to avoid waking up */
	HAL_SuspendTick();	
	
	/* Enter into ARM Stop Mode */
	HAL_PWR_EnterSTOPMode(PWR_LOWPOWERREGULATOR_ON, PWR_STOPENTRY_WFE);
}

void Lpm_Exit_StopMode(void)
{
	/* Resume System tick interrupt to avoid waking up */
	HAL_ResumeTick();
}

void Lpm_Enter_StandbyMode(void)
{
	/* Suspend System tick interrupt to avoid waking up */
	HAL_SuspendTick();	
	
	
   /* Clear the WU FLAG */
  __HAL_PWR_CLEAR_FLAG(PWR_FLAG_WU);
	
	/* Enable the WAKEUP PIN */
  HAL_PWR_EnableWakeUpPin(PWR_WAKEUP_PIN2);
	
	/* Enter into ARM Standby Mode */
	HAL_PWR_EnterSTANDBYMode();
}

void Lpm_Exit_StandbyMode(void)
{
	/* Resume System tick interrupt to avoid waking up */
	HAL_ResumeTick();
}
