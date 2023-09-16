#ifndef CORE_SERVICES_HEADER
#define CORE_SERVICES_HEADER
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
