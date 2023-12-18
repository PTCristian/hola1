#include <stdio.h>
int main(){
	
	int x=0, y=0, z=0;
	
	printf("x: ");
	scanf("%d", &x);
	printf("y: ");
	scanf("%d", &y);
	printf("z: ");
	scanf("%d", &z);
	if (y>x || y<0 && y!=z){
		printf("Correcto");
	}else{
		printf("Incorrecto");
	}
	
	return 0;
}