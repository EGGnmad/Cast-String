#include <stdio.h>
#include "len.c"

double toFloat(char* tNum){
	double num = 0.0;
	double now = 1.0;
	int size = -1;

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

	if(size != -1){
		now = 0.1;
		for(int i = size +1; i < len(tNum); i++){
			if(tNum[i] >= 48 && tNum[i] <= 57){
				num += (tNum[i] - 48) * now;
				now /= 10;
			}
		}
	}

	return num;
}

int main(){
	printf("%.10f", toFloat("123.4567891234"));
	return 0;
}