#include <stdio.h>
#include <ctype.h>
#define STRINGLENGTH 20

//String
char string[]="QuEsta è una Stringa";
void upCase(void);


int main(){
upCase();
printf("%s\n",string);

}


void upCase(void){
	int i;
	for(i=0;string[i]!='\0';i++){
		string[i]=toupper(string[i]);
	}
}



