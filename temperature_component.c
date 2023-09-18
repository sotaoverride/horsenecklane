#include "temperature_component.h"

void initTemperatureComponent(CoreComp* tmp, char* comp_dev, CoreRequestResponseQueue* TemperatureIncomingQueue){
	tmp->comp_abv = comp_dev;
	tmp->queue = *TemperatureIncomingQueue;

}

