
#include <bur/plctypes.h>

#ifdef _DEFAULT_INCLUDES
#include <AsDefault.h>
#endif

void _INIT ProgramInit(void)
{
	led1 = 0;
	led2 = 0;
	led3 = 0;
	led4 = 0;
	Blink =0;
}

void _CYCLIC ProgramCyclic(void)
{if (Blink ==1){
		led1 = !led1;
		if(i%2){
			led2 = !led2;
		}
		if(i%7){
			led3 = !led3;
		}
		if(i%9){
			led4 = !led4;
		}
		i++;}
}

void _EXIT ProgramExit(void)
{

}
