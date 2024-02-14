#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,n,i,ch,n1,num;
	 
	printf("enter no of int:");
	scanf("%d",&n);
	p=(int*) malloc(n*sizeof(int));
	printf("enter %d numbers:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
	}
	printf("your data is :\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",*(p+i));
	}
	

    printf("\nyou want to save more data than press 1\n");
    scanf("%d",&ch);
    if(ch==1)
   {	   
        printf("enter no of int:\n");
	    scanf("%d",&n1);
	    p=(int*)realloc(p,(n1+n)*sizeof(int));
		printf("enter %d numbers:\n",n1);
		num=n1+n;
	    for(i=n;i<num;i++)
	    {
		   scanf("%d",(p+i));
	    }
	    printf("\nyour data:\n");
    	for(i=0;i<num;i++)
		{
			printf("%d\t",*(p+i));
		}
	}
    
    for(i=0;i<num;i++)
	{
		free(p+i);
		printf("%d\t",*(p+i));
	}
}
