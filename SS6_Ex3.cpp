#include <stdio.h>
int main(){
	char pass[10] = "pttc1";
	char testpass[10];
	printf("Vui long nhap mat khau phong hop Zoom\n");
	scanf("%s",&testpass);
	while(testpass != pass){
		printf("Vui long nhap lai mat khau\n");
		scanf("%s",&testpass);
		break;
	}
	return 0;
}
