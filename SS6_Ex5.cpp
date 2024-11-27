#include <stdio.h>
int main(){
	int dd,mm,yy;
	printf("Moi ban nhap nam : ");
	scanf("%d",&yy);
	printf("Moi ban nhap thang : ");
	scanf("%d",&mm);
	switch(mm){
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			dd=31;
			break;
		case 4: case 6: case 9: case 11:
			dd=30;
			break;
		case 2:
			if(yy%4==0 && yy%100==0){
				dd=29;
			}else{
				dd=28;
			}
			break;
		default:
			printf("vui long xem lai du lieu ban da nhap");		 	
			break;
	}
	printf("%d/%d/%d",dd,mm,yy);
	return 0;
}
