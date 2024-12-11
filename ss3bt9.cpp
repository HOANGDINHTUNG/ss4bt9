#include<stdio.h>
int main(){
	int day, month, year;
	printf("moi nhap vao ngay: ");
	scanf("%d",&day);
	printf("moi nhap vao thang: ");
	scanf("%d",&month);
	printf("moi nhap vao nam: ");
	scanf("%d",&year);
	if(year>0){
		//TH: NAM NHUAN
		if(year%4==0&&year%100!=0||year%400==0){
			
			if(month==2){
				if(day<1||day>29){
					printf("ngay %d thang %d nam %d KHONG HOP LE", day, month, year);
				}
				else{
					printf("ngay %d thang %d nam %d HOP LE", day, month, year);
				}
			}
			else if(month==4||month==6||month==9||month==11){
				if(day<1||day>30){
					printf("ngay %d thang %d nam %d KHONG HOP LE", day, month, year);
				}
				else{
					printf("ngay %d thang %d nam %d HOP LE", day, month, year);
				}
			}
			else if(month==1||month==3||month==5||month==7||month==8||month==10||month==12){
				if(day<1||day>31){
					printf("ngay %d thang %d nam %d KHONG HOP LE", day, month, year);
				}
				else{
					printf("ngay %d thang %d nam %d HOP LE", day, month, year);
				}
			}
			else{
				printf("ngay %d thang %d nam %d KHONG HOP LE", day, month, year);
			}
		}//TH: NAM KHONG NHUAN
		else{
			if(month==2){
				if(day<1||day>28){
					printf("ngay %d thang %d nam %d KHONG HOP LE", day, month, year);
				}
				else{
					printf("ngay %d thang %d nam %d HOP LE", day, month, year);
				}
			}
			else if(month==4||month==6||month==9||month==11){
				if(day<1||day>30){
					printf("ngay %d thang %d nam %d KHONG HOP LE", day, month, year);
				}
				else{
					printf("ngay %d thang %d nam %d HOP LE", day, month, year);
				}
			}
			else if(month==1||month==3||month==5||month==7||month==8||month==10||month==12){
				if(day<1||day>31){
					printf("ngay %d thang %d nam %d KHONG HOP LE", day, month, year);
				}
				else{
					printf("ngay %d thang %d nam %d HOP LE", day, month, year);
				}
			}
			else{
				printf("ngay %d thang %d nam %d KHONG HOP LE", day, month, year);
			} 
		}
	}
	else{
		printf("ngay %d thang %d nam %d KHONG HOP LE", day, month, year);
	}
	return 0;
}

	
	

	
