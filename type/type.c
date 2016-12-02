#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
typedef void p(int i, int j);
static void* xdl_rx(void* p);
pthread_t th;
p *gf = NULL;
void reg_call(p *f)
{
	gf = f;
	pthread_create(&th,NULL,&xdl_rx,NULL);

}

static void* xdl_rx(void* p)
{
	int i =10, j = 20;
	while(1)
	{
		gf(i,j);
		sleep(5);
	}
	return NULL;
}
