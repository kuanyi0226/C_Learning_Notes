#include <stdio.h>
int main(){
    //�m��1: ��ӼƦr�M
    int integer1;
    int integer2;
    int sum;
    printf("��J�Ĥ@�ӼƦr");
    scanf_s("%d", &integer1); //Ū���Q�i����(%d-��Ʈ榡)�A&:���}�B��l
    printf("��J�ĤG�ӼƦr");
    scanf_s("%d", &integer2);
    sum= integer1+integer2;
    printf("Sum is: %d\n", sum); //��������

    //�m��2: ����ܼƴN��p��T�ӿ�J���Ʀr���n
    int integer, product;
    printf("��J�Ĥ@�ӼƦr");
    scanf_s("%d", &integer);
    product= integer;
    printf("��J�ĤG�ӼƦr");
    scanf_s("%d", &integer);
    product*= integer;
    printf("��J�ĤT�ӼƦr");
    scanf_s("%d", &integer);
    product*= integer;
    printf("Product is: %d\n", product);

    //�m��3: �ƭȥ洫�A����a,b�Ȥ��� by�]�ĤT���ܼ�(�ƥ�)
    int a= 5;
    int b= 3;
    int temp= a;
    a= b;
    b= temp;
    printf("Now a=%d\n", a);
    printf("Now b=%d\n", b);

    return 0;
}
