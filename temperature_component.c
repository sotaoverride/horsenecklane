#include "temperature_component.h"

void initTemperatureComponent(CoreComp* tmp, char* comp_dev, CoreRequestResponseQueue* TemperatureIncomingQueue){
	*tmp = {tmp, comp_abv, *TemperatureIncomingQueue, };

}

