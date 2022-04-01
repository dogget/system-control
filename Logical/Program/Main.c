
#include <bur/plctypes.h>

#ifdef _DEFAULT_INCLUDES
	#include <AsDefault.h>
#endif

void _INIT ProgramInit(void)
{
	speed=400;
	DRIVE.ENABLE=1;
}

void _CYCLIC ProgramCyclic(void)
{
	drive(&DRIVE);
}

void _EXIT ProgramExit(void)
{

}

