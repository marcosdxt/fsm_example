#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fsm.h"
#include "states/startup.h"
#include "states/check_battery_level.h"
#include "states/count_to_spark.h"
#include "states/spark_tnt.h"
#include "states/maybe_wont_run_this_state.h"


static fsm_states_t current_state=STARTUP;


static fsm_states_t (*state_ticks[])(void)={
		[STARTUP] = startup_tick,
		[CHECK_BATTERY_LEVEL] = check_battery_level_tick,
		[COUNT_TO_SPARK] = count_to_spark_tick,
		[SPARK_TNT] = spark_tnt_tick,
		[MAYBE_WONT_RUN_THIS_STATE] = maybe_wont_run_this_state_tick,
		[SYSTEM_ERROR] = NULL
};

void FSM_tick(void){

	if(state_ticks[current_state]!=NULL)
	  current_state = state_ticks[current_state]();
}

unsigned char FSM_get_signal(fsm_signals signal){

	switch(signal){
	  case SYSTEM_VERIFY:
		  break;
	  case COUNTER_FINISH:
		  break;
	  case BATTERY_LEVEL_OK:
		  break;
	  case SPARK_CYCLE_OK:
		  break;
	}

	return FALSE;
}

void FSM_trigger(fsm_triggers tro){

	switch(tro){
	  case COUNTER_START:
		  break;
	  case SPARK_OUTPUT:
		  break;
	}
}
