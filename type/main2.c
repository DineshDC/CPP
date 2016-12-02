#include <stdio.h>

static void new(int i, int j)
{
	printf("new2 %d %d\n",i,j);
}

int main()
{
	reg_call(new);
	while(1);
}
