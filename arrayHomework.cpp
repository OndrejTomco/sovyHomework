//Ondrej Tomco, 1.N

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

main()
{
srand(time(NULL));

int arr[20];
int i;	
int count = 0;
int oneDigit = 0;
int twoDigit = 0;
int threeDigit = 0;
int fourDigit = 0;
int max = 0;
int min = 0;

for(i=0;i<20;i++){
	arr[i] = rand()%9990+10;
	printf("%d ", arr[i]);
	
	//Checks if number is even
		if(arr[i]%2 == 0)
			count++;
			
	//Counting one,two,three and four digit numbers
			if(arr[i]<10) {
				oneDigit++;
			}
			if(arr[i]<100 && arr[i]>9){
				twoDigit++;

			}
			if(arr[i]>100 && arr[i]<1000){
				threeDigit++;

			}
			if(arr[i]>999 && arr[i]<10000){
				fourDigit++;

			}
			
			
		}	printf("\n");
			printf("\nNumber of even numbers: %d", count);
			printf("\nNumber of odd numbers: %d", 20-count);
			printf("\nnumber of one digit numbers: %d", oneDigit);
			printf("\nnumber of two digit numbers: %d", twoDigit);
			printf("\nnumber of three digit numbers: %d", threeDigit);
			printf("\nnumber of four digit numbers: %d\n", fourDigit);
			
			//finding Highest number
			max=arr[0];
			for(i=0;i<20;i++){
				if(arr[i]>max){
					max = arr[i];
				}
			}
			printf("\nHighest number: %d", max);
			
			//finding lowest number
				min=arr[0];
				for(i=0;i<20;i++){
					if(arr[i]<min){
					min = arr[i];
				}
			}
			printf("\nLowest number: %d\n", min);
			
			//printing array backwards
			printf("\nArray backwards: ");
			for(i=19;i>=0;i--){
				printf("%d ", arr[i]);
			}
			printf("\n");
			
			//finding palindroms
			int first;
			int second;
			int third;
			int last;
			
			printf("\nAll palindroms:\n");
			int sum=0;
			for(i=0;i<20;i++) {
	
			if(arr[i]<100 && arr[i]>9) {
				last = arr[i]%10;
				first = arr[i]/10;
				if(first==last){
					printf("%d ", arr[i]);
					sum++;
				}

			}
			
			if(arr[i]>100 && arr[i]<1000) {
				last = arr[i]%10;
				second = (arr[i]/10)%10;
				first = arr[i]/100;
				if(first==last){
				printf("%d ", arr[i]);
				sum++;
				}
			}
			
			if(arr[i]>999 && arr[i]<10000) {
				last = arr[i]%10;
				third = (arr[i]/10)%10;
				second = (arr[i]/100)%10;
				first = arr[i]/1000;
				if(first==last&& second==third) {
				sum++;
				printf("%d ", arr[i]);
				}
			}	
			
		}
		if(sum==0){
			printf("There are no palindroms in array\n");
		}
		
		//finding numbers divisible by 7
		count = 0;
		for(i=0;i<20;i++) {
			if(arr[i]%7==0) {
				count++;
			}
		}
			printf("\n%d Numbers from array are divisible by 7", count);

}
