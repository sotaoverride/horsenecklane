#include "core_services.h"
#include "temperature_component.h"
CoreRequestResponseQueue queue;
CoreComp tempComp;
int main(){
	initTemperatureComponent(&tempComp, "temp", &queue);
	return 0;
}
