#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../fsm.h"


fsm_states_t spark_tnt_tick(void){

	FSM_trigger(SPARK_OUTPUT);
	return MAYBE_WONT_RUN_THIS_STATE;
}
