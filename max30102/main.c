#include <stdio.h>
#include "includes/max30102_driver.h"
#include "includes/server_controller.h"
 
int main(){
 
	int fd = setupMax30102();
 
	while(1){
		wiringPiI2CWrite(fd,val);
		printf("%d",val);
		fflush(stdout);
		delay(1000);
	}
	return 0;
}
