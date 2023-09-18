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

typedef struct CoreRequestResponseQueue{
	int res_head;
	int res_tail;
	int req_head;
	int req_tail;
	CoreRequest req_arr[QUEUE_SIZE];

	CoreResponse res_arr[QUEUE_SIZE];
} CoreRequestResponseQueue;

typedef struct CoreComp{
	char* comp_abv;
	CoreRequestResponseQueue queue;
} CoreComp;
#endif

bool enqueueIncomingRequest(CoreRequest* req, CoreComp* cc);
