#include <stdio.h>

int is_esperente(char str[]){
	for( int i = 0; str[i] != '\0'; i++){
		switch(str[i]){
			case 'a':
			case 'i':
			case 'o':
			case 'u':
				return 0;
		}
	}
	return 1;
}

int main(){
	char str[150];
	scanf("%s", str);

	if(is_esperente(str)){
		printf("A(z) '%s' szo eszperente.\n", str);
	}
	else{
		printf("A(z) '%s' szo nem eszperente\n", str);
	}
	
	return 0;
}
/* - Irjunk egy fuggvenyt, ami parameterkent egy kisbetus sztringet var, es ha a sztringben talalhato osszes maganhangzo 'e' visszater 1-gyel, egyébként 0-val. */