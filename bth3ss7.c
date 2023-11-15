#include<stdio.h>
int main(){
int month;
float money,interestRatesYear;
printf("Nhap vao so tien goc:  ,lai suat nam:    ,so thang gui:\n"); 
scanf("%f%f%d",&money,&interestRatesYear,&month);
//lai xuat thang = lai xuat nam / 12
float interestRatesmonth= interestRatesYear / 12;
//tien lai = tien goc  * lai xuat thang 
for(int i=1;i<=month;i++){
float interest = money * interestRatesmonth;
 money = money + interest;
 printf("tien lai la: %f\n",interest)   ;
}
printf("tien nhan duoc la:%f",money);
}
// tien thang 1 = tien goc + lai xuat

