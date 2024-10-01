#include <stdio.h>
#include "my_function.c"

void main(){
	
	char name [20];
	
	printf ("enter your name: ");
	gets (name);
	
	strTitle(name);
	
	printf("srting : %s",name );
}
