# include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
   printf ("---------------------------\n");

	printf("|=========== ****GAME***===============|\n");
	printf("|                                   |\n");
	printf("| Welcome to NUMBWR GUESSING  Game   |\n");

	printf(" ----------------------------------- \n");

    int number, guess, nguess=1;
  //  printf("enter the number between 0to 100\n");
    //scanf("%d", number);

    

srand(time(0));
number = rand()%100+1;




//loop for game
do{
       
    printf(" ***! Please guess the number between 0 to 100  !***\n");
    scanf("%d", &guess);
if(guess>number){

    printf("!!! Sorry , You Guess the Wrong number .......\n");

    printf(" Please  Enter a lower number \n");
}
    else if(guess<number){
          printf("!!! Sorry , You Guess the Wrong number .......\n");

            printf(" Please  Enter a higher number \n");

        
    }
    else{
        printf ("---------------------------\n");
	printf("|                                   |\n");
	printf("|  !!! CONGRATULATION   |\n");
	printf(" ----------------------------------- \n");
    printf("\n");

        printf("you guess the number in %d attempt is \n", nguess);
     }
      nguess++;
}
while(number!=guess);




    return 0;
}