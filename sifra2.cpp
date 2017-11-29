#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>

typedef struct {
	char first[2];
	char second[2];
}letter;

int main()
 {	
 	letter word[100]; 
 	FILE *f = fopen("codeTable.txt", "r");
 	FILE *fp = fopen("secretCode.txt", "r");
	
	if (f==NULL)
	{
	printf ("Read file error");
	return 1;
	}
	
	int n =0;
	while (fscanf (f,"%s%s", &word[n].first, &word[n].second)!=EOF) {
//		printf("%s %s\n", word[n].first, word[n].second);
		n++;
	}
	
	
	int i=0;
	int k = 0;
	int j = 0;
	char sifra[500000];
	
		while (fscanf (fp, "%c", &sifra[k])!=EOF) {
//			printf("%c", sifra[k]);
		k++;
	}
	
for(i=0;i<k;i++) {
	char z = sifra[i];
	
			if(islower(z)){
				for(j=0;j<k;j++){
				z=toupper(z);
				if(z==*word[j].second){
					z=*word[j].first;
					printf("%c",tolower(z));
					break;
				}
			}
		}
				 
			else if(isupper(z)){
				for(j=0;j<k;j++){
				if(z==*word[j].second){
					z=*word[j].first;
					printf("%c",z);
					break;
				}
			}
		} 	
		
			else {
				printf("%c",z);
			}
}	

	fclose(f);
	fclose(fp);

}
 	

