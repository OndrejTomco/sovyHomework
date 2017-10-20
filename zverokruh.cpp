#include <stdio.h>
main()
{
	int month = 0;
	int day = 0;
	
	printf("Enter month of birth: ");
	scanf("%d", &month);
	printf("Enter day of birth: ");
	scanf("%d", &day);
	
	switch(month)
	{
		case 1:
			if(day>0 && day<21) {
				printf("Capricorn");
			}
			else {
				printf("Aquarius");
			}
			break;
			
		case 2:
			if(day>0 && day<20) {
				printf("Aquarius");
			}
			else {
				printf("Pisces");
			}
			break;
			
		case 3:
			if(day>0 && day<21) {
				printf("Pisces");
			}
			else {
				printf("Aries");
			}
			break;
			
		case 4:
			if(day>0 && day<21) {
				printf("Aries");
			}
			else {
				printf("Taurus");
			}
			break;
			
		case 5:
			if(day>0 && day<21) {
				printf("Taurus");
			}
			else {
				printf("Gemini");
			}
			break;
			
		case 6:
			if(day>0 && day<21) {
				printf("Gemini");
			}
			else {
				printf("Cancer");
			}
			break;
			
		case 7:
			if(day>0 && day<23) {
				printf("Cancer");
			}
			else {
				printf("Leo");
			}
			break;
			
		case 8:
			if(day>0 && day<23) {
				printf("Leo");
			}
			else {
				printf("Virgo");
			}
			break;
			
		case 9:
			if(day>0 && day<23) {
				printf("Virgo");
			}
			else {
				printf("Libra");
			}
			break;
			
		case 10:
			if(day>0 && day<23) {
				printf("Libra");
			}
			else {
				printf("Scorpio");
			}
			break;
			
		case 11:
			if(day>0 && day<23) {
				printf("Scorpio");
			}
			else {
				printf("Sagittarius");
			}
			break;
			
		case 12:
			if(day>0 && day<22) {
				printf("Sagittarius");
			}
			else {
				printf("Capricorn");
			}
			break;
		default: printf("Wrong input");
		
		
	}
		
}
