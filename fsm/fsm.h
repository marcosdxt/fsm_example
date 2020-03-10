#ifndef FSM_FSM_H_
#define FSM_FSM_H_

#define	MOORE									0
#define	MEALEY									1

#define	IMPLEMENTATION							MOORE

#ifndef TRUE
	#define	TRUE	1
	#define	FALSE	0
#endif

typedef enum{
	STARTUP,
	CHECK_BATTERY_LEVEL,
	COUNT_TO_SPARK,
	SPARK_TNT,
	MAYBE_WONT_RUN_THIS_STATE,
	SYSTEM_ERROR
}fsm_states_t;

typedef enum{
  SYSTEM_VERIFY,
  COUNTER_FINISH,
  BATTERY_LEVEL_OK,
  SPARK_CYCLE_OK
}fsm_signals;


typedef enum{
  COUNTER_START,
  SPARK_OUTPUT
}fsm_triggers;

void FSM_tick(void);
unsigned char FSM_get_signal(fsm_signals signal);
void FSM_trigger(fsm_triggers tro);


#endif /* FSM_FSM_H_ */
