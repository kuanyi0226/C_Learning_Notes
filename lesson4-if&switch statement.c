#include <stdio.h>
int main(){
    //statement: ����@��(if-������; switch-��ܩ�)
    //loop: ���ư���(while-������(�i�ण����); do-while(�ܤְ���@��while); for-�p����)

    //�@�Bif, else if, else:
    //�A���̩����-�u����(�D0)��(0)
    //�m��1: ���B�馩�p��- �\�U1�H300���A��3000�N���K��C��J�H�ƫ�A�p��Ӯ��U�����I�`�B
    /*
    int people;
    printf("How many people eating here: ");
    scanf("%d", &people);
    if (people*300 >=3000){
        printf("%d dollars in total.\n", people*240); //���ॴpeople*300*0.8
    }
    else{
        printf("%d dollars in total.\n", people*300);
    }
    */

    //�m��2: �������T���ΧP�_(���T���B���y�B����)
    /*
    printf("Input the length of three sides: ");
    int side1, side2, side3;
    scanf("%d%d%d", &side1, &side2, &side3);
    if (side1==side2 && side1==side3){
        printf("It's a regular triangle.\n"); //���T����
    }
    if ((side1==side2 && side1 != side3) || (side1==side3 && side1 != side2) || (side2==side3 && side1 != side2)){
        printf("It's a isosceles triangle.\n"); //���y
    }
    if ((side1*side1==side2*side2+side3*side3)|| //�`�N:C�y�����بS������y�k
        (side2*side2==side1*side1+side3*side3)||
        (side3*side3==side1*side1+side2*side2)){
        printf("It's a rectangular triangle.\n"); //����
    }
    */

    //�m��3: ��T�ӿ�J�ܼƨD�̤j��
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


    //�G�Bswitch, case(�}�l����B�A����switch������break�B), default(�Ҧ�case�����ŦX�ɰ���):
    //�A���̩�"���"(char�]��)-�i��ʫܦh�C
    //�m��4: ²����ƥ[�����ܭp��
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
