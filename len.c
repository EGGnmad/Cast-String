#include <stdio.h>

int len(char * text){
	int i = 0;
	while (text[i]){
		i++;
	}
	return i;
}