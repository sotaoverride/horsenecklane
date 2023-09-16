#include "temperature_component.h"
CoreComp initTemperatureConstant(char* comp_dev, CoreQueue TemperatureIncomingQueue, CoreQueue TemperatureOutgoingQueue){
	CoreComp TemperatureComponent = {comp_abv, TemperatureIncomingQueue, TemperatureOutgoingQueue};
	return TemperatureComponent;
}

