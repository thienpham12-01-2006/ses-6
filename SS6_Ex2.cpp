#include <stdio.h>
int main(){
	int number,le=0,chan=0;
	for(int i=1;i<=5;i++){
		printf("Nhap so nguyen thu %d :",i);
		scanf("%d",&number);
		if(number%2 != 0){
			le++;
		}else{
			chan++;
		}
	}
	printf("So luong so le trong cac so da nhap la %d\n",le);
	printf("So luong so chan trong cac so da nhap la %d",chan);
	return 0;
}

