#include <stdio.h>
int main(){
    //statement: 執行一次(if-有條件; switch-選擇性)
    //loop: 重複執行(while-有條件(可能不執行); do-while(至少執行一次while); for-計次性)

    //一、if, else if, else:
    //括號裡放條件-只有對(非0)錯(0)
    //練習1: 滿額折扣計算- 餐廳1人300元，滿3000就打八折。輸入人數後，計算該桌顧客應付總額
    /*
    int people;
    printf("How many people eating here: ");
    scanf("%d", &people);
    if (people*300 >=3000){
        printf("%d dollars in total.\n", people*240); //不能打people*300*0.8
    }
    else{
        printf("%d dollars in total.\n", people*300);
    }
    */

    //練習2: 整數邊長三角形判斷(正三角、等腰、直角)
    /*
    printf("Input the length of three sides: ");
    int side1, side2, side3;
    scanf("%d%d%d", &side1, &side2, &side3);
    if (side1==side2 && side1==side3){
        printf("It's a regular triangle.\n"); //正三角形
    }
    if ((side1==side2 && side1 != side3) || (side1==side3 && side1 != side2) || (side2==side3 && side1 != side2)){
        printf("It's a isosceles triangle.\n"); //等腰
    }
    if ((side1*side1==side2*side2+side3*side3)|| //注意:C語言內建沒有次方語法
        (side2*side2==side1*side1+side3*side3)||
        (side3*side3==side1*side1+side2*side2)){
        printf("It's a rectangular triangle.\n"); //直角
    }
    */

    //練習3: 對三個輸入變數求最大值
    /*
    int number1, number2, number3, max;
    printf("Input three numbers: ");
    scanf("%d%d%d", &number1, &number2, &number3);
    max= number1;
    if (number2>max){
        max= number2;
    }
    if (number3>max){
        max= number3;
    }
    printf("Max is: %d\n", max);
    */


    //二、switch, case(開始執行處，直到switch結束或break處), default(所有case都不符合時執行):
    //括號裡放"整數"(char也算)-可能性很多。
    //練習4: 簡易整數加減乘除選擇計算
    /*
    int a, b;
    char op;
    float ans;
    printf("Input Integer1, operator, Integer2: ");
    scanf("%d%c%d", &a, &op, &b);
    switch(op){
        case '+':
            ans= a+b;
            break;
        case '-':
            ans= a-b;
            break;
        case '*':
            ans= a*b;
            break;
        case '/':
            ans= (float)a/b;
            break;
    }
    printf("%d%c%d= %f\n", a, op, b, ans);
    */


    return 0;
}
