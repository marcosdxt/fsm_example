#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../fsm.h"


fsm_states_t count_to_spark_tick(void){

	if(FSM_get_signal(COUNTER_FINISH))
		return SPARK_TNT;

	return COUNT_TO_SPARK;
}
