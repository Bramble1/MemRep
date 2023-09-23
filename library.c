#include "library.h"

/*various useful outputs*/
void c_print(int colour,char *buffer)
{
	switch(colour)
	{
		case 0:
			printf("%s%s%s ",GREEN,buffer,RESET);
			break;
		case 1:
			printf("%s%s%s ",RED,buffer,RESET);
			break;
		case 2:
			printf("\t%sMEM-%sLoop%s program: %s\t\n",GREEN,RED,RESET,buffer);
			break;
		default:
			printf("%s ",buffer);
			break;
	}
}

/*convert given string to a number,no matter how many digits in the sequence.*/
double convert_to_number(char *buffer)
{
	double ans,dec,base;
	ans=dec=base=0x0;

	dec=base=(double)strlen(buffer);
	dec-=0x1;

	for(int i=0x0;i<base;i++)
		ans += ((double)buffer[i]-'0') * pow(0xA,dec--);

	return ans;
}

/*if -1 returned , then they're are not equal. */
int check_pattern(char *user_input,char *sequence)
{
	if(!strncmp(user_input,sequence,(strlen(user_input)-1))==0)
	{
		printf("%s != %s\n",user_input,sequence);
		return -1;
	}
	return 0;
}

/*MAIN logic*/
void game_loop(char *user_input,char *sequence,int size,int reps)
{
	system("clear");
	/*title screen*/
	c_print(2,sequence);

	
	char buffer[100]="\0";
	int colour=-1;

	for (int i=1;i<=reps;i++) 
	{
		sprintf(buffer,"rep.%d",i);	
		c_print(colour,buffer);
		fgets(user_input,size,stdin);
	
		if(check_pattern(user_input,sequence)==-1){
			i-=1;colour=1;
		}
		else
			colour=0;
	}
	char *message="Session complete [+].\0"; 
	c_print(0,message);	
}
