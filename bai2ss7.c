#include<stdio.h>
int main(){
    printf("Cac so Armstrong co ba chu so la:\n");
    for(int i=100;i<1000;i++){
        int a = i/100, b =(i%100)/10, c = (i%10);
            if((a*a*a+b*b*b+c*c*c)==i){
            printf("%d\n",i);
        }
        }
}



