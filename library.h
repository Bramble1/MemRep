#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

#define RED "\033[31m"
#define GREEN "\033[32m"
#define RESET "\033[0m"

/*print the bytes within buffer with certain colours*/
void c_print(int colour,char *buffer);

/*convert a string of bytes with numbers to actual integers and store within result pointer.*/
double convert_to_number(char *buffer);

/*After every repetition the user needs to make sure they are entering the locked in
 * sequence correctly.*/
int check_pattern(char *user_input,char *sequence);

void game_loop(char *user_input,char *sequence,int size,int reps);






