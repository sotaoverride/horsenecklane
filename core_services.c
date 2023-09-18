#include"core_services.h"
bool enqueueIncomingRequest(CoreRequest* req, CoreComp* cc){
	if (cc->queue.req_head < QUEUE_SIZE){
		cc->queue.req_arr[cc->queue.req_head]=*req;
		if (cc->queue.req_head+1 < QUEUE_SIZE){
			cc->queue.req_head++;
		}
	return true;
	}
	else return false;
}

