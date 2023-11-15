#include<stdio.h>
#include<math.h>
int main(){
int i;
printf("In ra cac so tu 1 den 100 :\n");
for (i=1;i<101;i++){
    if(i%3==0){
    printf("FIZZ\n");}
    if(i%5==0){
        printf("BUZZ\n");
    }
if(i%3==0&&i%5==0){
    printf("FIZZBUZZ\n");
}
if(i%3!=0&&i%5!=0){
    printf("%d\n",i);
}
}

}