#include <stdio.h>

int main(){
    //一、資料型別
    /*
    short int
    int
    long int
    char(1 byte)
    wchar_t 寬字元
    float
    double
    void 無
    */
    float a= 123.45; //float跟double有精度上的差異
    double b= 123.45;
    printf("%f\n",a);
    printf("%f\n",b);


    //二、字面常數(直接打出數字會預設data type):
    /*
    123 - int, long int
    123.45 or 123. - double
    123.45f - float
    */

    //三、同資料型態+-*/還是同資料型態，同型才會計算(*隱性轉型)
    int number= 10;
    double average= number/3;
    printf("%f\n", average); // int/int 還是int
    average= number/3.;
    printf("%f\n", average); // int/double(3後面多一點) - int會隱性轉型成範圍較大的double

    //四、顯性轉型
    average= (double) number/ (double) 3; //直接把int轉double
    printf("%f\n", average);


    //五、字元型別的運算(char是一種整數型別，對應到ASCII編碼)
    char ch= 'A' +1; //A的編號是65(a是97號->差32個)，B的編號是66
    printf("%c\n", ch); //印出B
    //練習1: 輸入大寫字母轉成小寫:
    char capital;
    printf("Type a capital letter:");
    scanf("%c", &capital);
    char lower_case= capital+32;
    printf("Its lower case is: %c\n", lower_case);


    //六、賦值運算子(=): 有很多等於的時候，由右至左
    int A, C;
    double B, D;
    A= B= C= D= 3+7/2.; //A=6, B=6. , C= 6(隱性轉型), D= 6.5


    //七、運算子(非0為true，0為false)
    /* 關係運算子
    大於等於小於
    */

    /*邏輯運算子(關係運算子優先於&&和|| ; !優先於關係運算子)
    && and
    || or
    ! not (true變false，false變true)(是一元運算子:只有右邊有東西，若有多個! 則由右至左做)
    */
    int correct= !3; //3是true，加了!後，變成0(false)
    printf("correct changed to: %d", correct);

    return 0;
}
