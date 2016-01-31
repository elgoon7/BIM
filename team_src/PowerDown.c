/*
 * PowerDown.c
 *
 *  Created on: Oct 30, 2013
 *      Author: Nathan
 */

#include "all.h"

void PowerDown()
{
	UserPowerDown();
	SystemPowerDown();
}

void UserPowerDown()
{
	//todo USER: special user power down
	GpioDataRegs.GPBTOGGLE.bit.GPIO35 = 1;
	SLAVEENSET();
	DELAY_US(200);
	BMM_Sleep();

}
