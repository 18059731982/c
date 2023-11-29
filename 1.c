#include <stdio.h>
void decimalToBinary(int decimal) {
    if (decimal > 0) {
        decimalToBinary(decimal / 2);
        printf("%d ", decimal % 2);
    }
}
int main() {
    int decimal;
    printf("请输入一个十进制数：");
    scanf("%d", &decimal);
    printf("对应的二进制数为：");
    decimalToBinary(decimal);
    printf("\n");
    return 0;
}