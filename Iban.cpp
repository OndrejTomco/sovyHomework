#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char accountNum[15];
	char bankNum[10];
	int errorCount = 0;
	int i;
	
	printf("Enter your bank account number:\n");
	scanf("%s", &accountNum );
	int anLen = strlen(accountNum);
	
	if(anLen!=10 ) {
		errorCount++;
	}
	
	for(i=0;i<anLen;i++) {
		if(accountNum[i]<0 &&accountNum[i] > 9) {
			errorCount++;
		}
	}
	
	printf("Enter your bank number:\n");
	scanf("%s", &bankNum );
	int bnLen = strlen(bankNum);
	
	if(bnLen!=4 ) {
		errorCount++;
	}
	
	for(i=0;i<bnLen;i++) {
		if(bankNum[i]<0 &&bankNum[i] > 9) {
			errorCount++;
		}
	}

	if(errorCount!=0) {
		printf("Error");
	}
	else {
		
	char iban[20];
	
	for(i=0;i<10;i++) {
		if(i>3) {
			iban[i] = '0';
		}
		else{
		iban[i] = bankNum[i];
		}
	}
	
	for(i=10;i<20;i++) {
		iban[i] = accountNum[i-10];
	}
	
	iban[20] = '2';
	iban[21] = '8';
	iban[22] = '2';
	iban[23] = '0';
	iban[24] = '0';
	iban[25] = '0';
	iban[26] = '\0';
	
	//printf("\n%s", iban);
	
	int y = 0;
	int x = 0;
	for(i=0;i<26;i++)
  	{
  		y=0;
  		y=(iban[i]-48);
  		x=((x*10)+y)%97;	
	}
	
	int z = 98-x;
	//printf("\n%d", z);
	
	char c1 = z%10;
	char c2 = z/10;
	
	char iban2[30];
	iban2[0] = 'S';
	iban2[1] = 'K';
	iban2[2] = c2+48;
	iban2[3] = c1+48;
	for(i=4;i<8;i++) {
		iban2[i] = bankNum[i-4];
	}
	
	for(i=8;i<14;i++) {
		iban2[i] = '0';
	}
	
	for(i=14;i<26;i++) {
		iban2[i] = accountNum[i-14];
	}
	
	printf("\nYour IBAN: %s", iban2);
	
}
}
