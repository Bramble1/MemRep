#include "library.h"

/* ./program <sequence> <no_reps>     */
int main(int argc,char *argv[])
{
	/*if no arguments are supplied*/
	if(argc<2)
	{
		printf("./mr <sequence> <no_reps>\n");
		return 0;
	}


	char user_input[100]="\0";
	
	/*main logic resides here*/
	game_loop(user_input,argv[1],99,(int)convert_to_number(argv[2]));

	return 0;
}
