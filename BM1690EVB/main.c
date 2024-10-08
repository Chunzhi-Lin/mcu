#define DEBUG 1
#include <gd32e50x_gpio.h>
#include <gd32e50x_misc.h>
#include <tick.h>
#include <system.h>
#include <i2c_slave.h>
#include <debug.h>
#include <timer.h>
#include <power.h>
#include <pin.h>
#include <common.h>
#include <project.h>
#include <console.h>
#include <stdio.h>
#include <slave.h>
#include <chip.h>
#include <loop.h>
#include <board_power_impl.h>

int main(void)
{
	system_init();
	debug("\nBM1690 EVB\n");
	debug("firmware build time:%s-%s\n", __DATE__, __TIME__);
	led_init();
	board_init();
	power_init();
	chip_init();
	slave_init();
	console_add();

	/* never return */
	loop_start();

	return 0;
}
