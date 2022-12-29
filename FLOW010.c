#include <stdio.h>
int main(void) {
    int t;
	scanf("%c",&t);
	while (t--)
	{
	    char x;
	    scanf("%c",&x);
	   if(x=='b'||x== 'B'){
	        printf("BattleShip\n");}
	   else if(x=='c'||x=='C'){
	        printf("Cruiser\n");}
	   else if(x=='d'||x=='D'){
	        printf("Destroyer\n");}
	   else if(x=='f'||x=='F'){
	        printf("Frigate\n");}
	 }
	return 0;
}
