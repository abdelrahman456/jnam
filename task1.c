#include <stdio.h>


void main(void)
{

   
    int size =0 ;
	int Arr[size] ;
	printf("enter array size  \n\n");
    scanf("%d", &size);
	printf("enter array element:");
	for(int i = 0; i<size; i++)
	{
	
	
      scanf("%d", &Arr[i]);
	
	
	}
	for(int i =0; i<size; i++)
	{
	
	
      if(Arr[i]<0)
	  {
	    printf("negative element :%d", Arr[i]);
	  
	  }
	
	
	}
	
	
	
















}