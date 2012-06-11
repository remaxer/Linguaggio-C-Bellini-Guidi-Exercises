#include <stdio.h>
char r;
int score;
char pausa;
main(){
printf("4+4 è 8?");
scanf("%c",&r);
scanf("%c",&pausa);
if(r=='s')
score++;
printf("4-4 è 0?");
scanf("%c",&r);
scanf("%c",&pausa);
if(r=='s')
score++;
printf("8+9 è 17?");
scanf("%c",&r);
scanf("%c",&pausa);
if(r=='s')
score++;
printf("Your score is %d", score);

}
