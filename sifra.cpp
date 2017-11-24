#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	FILE *fr = fopen("sifra.txt", "r");
	FILE *fw = fopen("odsifrovane.txt", "w");
	
		if(fr == NULL) {
		printf("File error");
		return 1;
		}
	
		if(fw == NULL) {
		printf("File error");
		return 1;
		fclose(fr);
		}
		
		char z;
		while((z = fgetc(fr)) != EOF) {
			
			if(z == 'z') {
				putc('i', fw);
				putchar('i');
			}

			else if(z=='Z'){
				putc('I', fw);
				putchar('I');
			}
			else if(z=='j') {
				putc('y', fw);
				putchar('y');
			}
			else if(z=='J') {
				putc('Y', fw);
				putchar('Y');
			}
			
			else if(z == '%' ) {
				putc(' ', fw);
				putchar(32);
			}
			
			else if(isalpha(z)) {
				putc(z-1, fw);
				putchar(z-1);
			}
			else {
				putc(z, fw);
				putchar(z);
			}	
			
		}
		
	fclose(fr);
	fclose(fw);



}
