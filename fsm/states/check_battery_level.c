#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../fsm.h"



fsm_states_t check_battery_level_tick(void){

	if(FSM_get_signal(BATTERY_LEVEL_OK)){
		FSM_trigger(COUNTER_START);
		return COUNT_TO_SPARK;
	}

	return SYSTEM_ERROR;
}
