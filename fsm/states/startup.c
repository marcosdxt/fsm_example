#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../fsm.h"


fsm_states_t startup_tick(void){

	if(FSM_get_signal(SYSTEM_VERIFY))
		return CHECK_BATTERY_LEVEL;

    return SYSTEM_ERROR;
}
