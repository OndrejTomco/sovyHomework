#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main()
{	
	srand(time(NULL));
	int i;
	int guessCount = 0;
	char userGuess[2];
	char answer[20];
	char userAnswer[10];
	int result = 0;
	int found = 0;
	int res;
	int guessLen;
	
	printf("***************GUESS MY CITY***************\n\n");
	
	//Random city generator
	int random = rand()%3;
	switch(random) {
		case 0:strcpy(answer, "TOPOLCANY"); break;
		case 1:strcpy(answer, "PARTIZANSKE"); break;
		case 2:strcpy(answer, "KOMARNO"); break;
		default: strcpy(answer, "SOBRANCE");
	}
	
	int len = strlen(answer);
	
	for(i=0;i<len;i++) {
		userAnswer[i] = '_';
		printf("%c", userAnswer[i]);
	}
	
	userAnswer[len] = '\0';
	answer[len] = '\0';
	userGuess[1] = '\0';
	
	//Player has 7 tries
	while(guessCount<7){
		found = 0;
		printf("\n\n\nEnter 1 character:");
		scanf("%s", &userGuess);
		guessLen = strlen(userGuess);
		
		if(guessLen>1 || isalpha(userGuess[0])==0) {
			printf("Wrong input(Your guess is either not a letter or too long)");
			continue;
		}
		
		userGuess[0] = toupper(userGuess[0]);
	
		for(i=0;i<len;i++) {
			if(userGuess[0]==answer[i]) {
			userAnswer[i] = userGuess[0];
			found++;
			}
		}
	
		if(found==0) {
			guessCount++;
		}
		
		printf("\n%s", userAnswer);
		res = strcmp(userAnswer, answer);
		if(res==0) {
			printf("\n\nCorrect!");
			break;
		} 
		printf("\n\nYou have %d tries left", 7-guessCount);
}

	if(res!=0) {
	printf("\nYou have ran out of tries, correct answer is %s", answer);
	}

}
