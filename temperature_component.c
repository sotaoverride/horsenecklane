#include "temperature_component.h"
CoreComp tempComp;
void initTemperatureConstant(CoreCompi* tmp, char* comp_dev, CoreQueue* TemperatureIncomingQueue, CoreQueue* TemperatureOutgoingQueue){
	*tmp = { comp_abv, *TemperatureIncomingQueue, *TemperatureOutgoingQueue};
}

