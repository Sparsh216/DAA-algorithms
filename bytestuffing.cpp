#include<stdio.h>
#include<string.h>

int main()
{
	char data[50] , stuff[50] , dstuff[50];
	int i,j,cnt=1,fsize,dsize,frames,denter,loop,check;
	
	printf("Enter data :- \n");
	scanf("%s",&data);
	
	dsize = strlen(data);
	
	printf("enter frame size\n");
	scanf("%d",&fsize);
	
	denter = fsize - 2;
	frames=(dsize/denter)+1;
	
	loop=dsize+(frames*2);
	
	j=0;
	for(i = 0 ; i < loop ; i++)
	{
		if(i%fsize==0)
		{
			stuff[i]='x';
		}
		else if(i==(fsize*cnt)-1)
		{
			stuff[i]='x';
		}
		else
		{
		    if(data[j]=='\0')
		    {
			check = 1;
			break;
		    }
		stuff[i]=data[j];
		j++;	
		}
	}
	if(check==1) 
	{
		stuff[loop-1]='x';
    }
	stuff[loop] ='\0';
	printf("the stuffed data is : %s \n",stuff);
	
	j=0;
	for(i=0;i<loop;i++)
	{
		if(stuff[i]!='x')
		{
			dstuff[j]=stuff[i];
			j++;
			
		}
    }
    dstuff[j]='\0';
    printf("\n destroyed data is : %s",dstuff);
    return 0;
}

