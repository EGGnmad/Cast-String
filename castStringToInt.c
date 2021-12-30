#include <stdio.h>
#include "len.c"

int toInt(char* tNum){
	int num = 0;
	int now = 1, size;

	for(int i = (len(tNum) -1); i >= 0; i--){
		if(tNum[i] == 46){
			size = i;
		}
	}


	for(int i = size; i >= 0; i--){
		if(tNum[i] >= 48 && tNum[i] < 57){
			num += (tNum[i] - 48) * now;
			now *= 10;
		}
	}

	return num;
}

int main(){
	printf("%d", toInt(".4456"));
	return 0;
}