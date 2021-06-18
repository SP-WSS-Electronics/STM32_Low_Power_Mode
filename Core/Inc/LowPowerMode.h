#ifndef LPM_H
#define	LPM_H

#ifdef	__cplusplus
extern "C" {
#endif

    
void Lpm_Enter_SleepMode(void);

void Lpm_Exit_SleepMode(void);


void Lpm_Enter_StopMode(void);

void Lpm_Exit_StopMode(void);


void Lpm_Enter_StandbyMode(void);

void Lpm_Exit_StandbyMode(void);  



#ifdef	__cplusplus
}
#endif

#endif	/* LPM_H */