#include <stdio.h>
int main(){
    //練習1: 兩個數字和
    int integer1;
    int integer2;
    int sum;
    printf("輸入第一個數字");
    scanf_s("%d", &integer1); //讀取十進位整數(%d-資料格式)，&:取址運算子
    printf("輸入第二個數字");
    scanf_s("%d", &integer2);
    sum= integer1+integer2;
    printf("Sum is: %d\n", sum); //類似跳脫

    //練習2: 兩個變數就能計算三個輸入的數字的積
    int integer, product;
    printf("輸入第一個數字");
    scanf_s("%d", &integer);
    product= integer;
    printf("輸入第二個數字");
    scanf_s("%d", &integer);
    product*= integer;
    printf("輸入第三個數字");
    scanf_s("%d", &integer);
    product*= integer;
    printf("Product is: %d\n", product);

    //練習3: 數值交換，把讓a,b值互換 by設第三個變數(備份)
    int a= 5;
    int b= 3;
    int temp= a;
    a= b;
    b= temp;
    printf("Now a=%d\n", a);
    printf("Now b=%d\n", b);

    return 0;
}
