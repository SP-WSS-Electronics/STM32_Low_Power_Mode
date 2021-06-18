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
	HAL_PWR_EnterSTOPMode(PWR_LOWPOWERREGULATOR_ON, PWR_STOPENTRY_WFI);
}

void Lpm_Exit_StopMode(void)
{
	/* Resume System tick interrupt to avoid waking up */
	HAL_ResumeTick();
}

void Lpm_Enter_StandbyMode(void)
{
}

void Lpm_Exit_StandbyMode(void)
{

}
