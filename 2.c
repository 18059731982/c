#include<stdio.h>
int age(int n){
    if(n>0){
        age(n/2);
        printf("%d ",n%2);
    }
}
int main(){
    int a;
    printf("请输入一个整数：");
    scanf("%d",&a);
    age(a);
}