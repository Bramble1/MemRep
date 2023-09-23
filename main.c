#include "library.h"

/* ./program <sequence> <no_reps>     */
int main(int argc,char *argv[])
{
	/*clear the terminal history for user as we don't want the sensitive sequence being saved in the history
	 * file when supplying it to the program for example ./mr sequence 4 is visible in history file,
	 * which is why we clear it after invoking the program*/
	system("rm ~/.bash_history");

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
