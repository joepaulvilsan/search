#include <stdio.h>
#include <stdlib.h>
#include <time.h>
float timedifference_msec(struct timeval t0, struct timeval t1)
{
    return (t1.tv_sec - t0.tv_sec) * 1000.0f + (t1.tv_usec - t0.tv_usec) / 1000.0f;
}

int main()
{
	struct timeval t0;
   	struct timeval t1;
   	float elapsed;
    
    int num,j;
    printf("enter no of random numbers");
    scanf("%d",&num);
    int data[num];
    srand( (unsigned) time(NULL) * getpid());
    for(j = 0; j < num; j++)
        {
            data[j] = rand()%100;
            printf("%d\n",data[j]);
        }
    

 
    int key,flag=0;
    printf("enter element to be searched");
    scanf("%d",&key);
     gettimeofday(&t0, NULL);
    for(j = 0; j < num; j++)
    {
    	if(key==data[j])
   	 	{
    		flag=1;
   			break;
    	}
    	else
    	{
    		flag=0;
    	}
   	
	}
	 if(flag==1)
    	printf("element is present");
    else
    	printf("element is not present");
    	gettimeofday(&t1, NULL);

   elapsed = timedifference_msec(t0, t1);

   printf("\nCode executed in %f milliseconds.\n", elapsed);

	
	return 0;
}
