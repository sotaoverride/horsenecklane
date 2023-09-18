#ifndef CORE_SERVICES_HEADER
#define CORE_SERVICES_HEADER
#include <stdbool.h>
#define QUEUE_SIZE 55

enum Component {temperatre, humidity};
typedef struct CoreRequest{
	char dest[4];
	char org[4];
	char req[4];
} CoreRequest;

typedef struct CoreResponse{
	char dest[4];
	char org[4];
	//response
} CoreResponse;

typedef struct CoreQueue{
	int head;
	int tail;
	union{
		CoreRequest req_arr[QUEUE_SIZE];

		CoreResponse res_arr[QUEUE_SIZE];
	};
} CoreQueue;

typedef struct CoreComp{
	char* comp_abv;
	CoreQueue incoming_queue;
	CoreQueue outgoing_queue;
} CoreComp;
#endif

bool enqueueIncomingRequest(CoreRequest* req, CoreComp* cc){
	if (cc->incoming_queue.head < QUEUE_SIZE){
		cc->incoming_queue.req_arr[cc->incoming_queue.head]=*req;
		if (cc->incomig_queue.head+1 < QUEUE_SIZE){
			cc->incoming_queue.head++;
		}
	return true;
	}
	else return false;
}
