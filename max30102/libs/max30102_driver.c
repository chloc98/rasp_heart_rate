#include "../includes/max30102_driver.h"

int setUpMax30102(){
	int fd = wiringPiI2CSetup(MAX30102_ADDRESS);
	return fd;
}
