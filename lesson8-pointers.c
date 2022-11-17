#include <stdio.h>
#include <string.h>
//Pointers指標: 資料型別，用來儲存"記憶體位置"--- 資料型別 *變數名稱;
/*一般情況不需要指標，不過指標可以解決:
(1)在被呼叫的函式中修改引數值; (2)直接複製陣列、字串; (3)動態改變陣列長度
*/

/*
建立一個有編號的記憶體位置ex.(int *)2293602 存放int -----存int
建立一個有編號的記憶體位置ex.(int **)2293640 存放(int *)2293602 -----存存int的位置
->宣告整數變數 int count= 9;
->宣告指標變數 int *countAddr= &count; 用取址運算子(&)存
->間接運算子(*): 取得存於該位置的變數 *countAddr;

總結:
表示式                資料型別       值
count                  int                   9
&count                int*                 2293602 (int的位置)
countAddr          int*                  2293602 (儲存int的位置)
*countAddr         int                    9
*/
int main(){
    //一、在被呼叫的函式中修改引數值
    /*
    int a=3;
    addone(&a); //複製a的記憶體位置給addone
    printf("%d", a); //印出3+1
    */
    //練習1: 數值交換
    /*
    int a= 3,  b= 5;
    swap(&a, &b);
    printf("a: %d\n", a);
    printf("b: %d\n", b);
    */


    //二、指標與陣列
    /*
    (1)陣列位置加減
    int v[5];
    &v[0] +1==&v[1]; 位置加一，即移動一格
    &v[4] -1==&v[3];

    (2)陣列位置可相減，不可相加
    &v[0] + &v[1] 位置相加會編譯失敗
    &v[2] - &v[1] == 1 相減則為一個整數

    (3)陣列型別可隱性轉型成該陣列第一個元素記憶體位址的指標
    int v[5];  //宣告定義一個5個元素的int陣列，佔據5個int大小的記憶體
    int *n;    //宣告定義一個int指標，佔據1個int * 大小的記憶體
    n= v;  //相當於n= &v[0];
    n+1== &v[1];
    *(n+1)== v[1];

    (4)指標與下標運算子(中括弧[ ])
    int v[5]= {1,2,3,4,5};
    int *n= v;
    v[0]== 1;
    n[0]== *(n+0)== v[0] == 0[v] //彈性很大
    */
    //練習2: 陣列歸零
    /*
    int v[5];
    int *p;
    for(p=v; p != &v[5]; p++){ //v[5]不能讀取，但是存在
        *p=0;
    }
    */

    //三、指標與字串
    /*
    (1)字串字面常數(" ")的特殊性
    char strA[ ]= "test"; //自己宣告定義的存字串空間
    char *strB= "test"; //字串字面常數可隱性轉型成字元指標(會自動產生一個唯讀的空間，只能讀不能寫

    strA[0]= 'T'; //可成功改寫
    strB[0]= 'T'; //失敗，未定義行為
    但是
    strA= "TEST"; //編譯失敗，只能改字元，不能整串換掉
    strB= "TEST"; //成功改寫，只能改字串，不能改字元

    補充const: 在變數的資料型別前加const，能讓變數除了初始化之外不能再被賦值(設定成唯讀，避免被修改)
    const int a[3]={3,4,5};

    (2)指標與const的關係: Type * 可以轉成 const Type *     (難!)
    char strA[]= "test";
    char *strB= "test";
    const char *strC= "test";

    strA= strB; (X)
    strA= strC; (X)
    strB= strA; (O)
    strB= strC; (X)
    strC= strA; (O)
    strC= strB; (O)


    */
    //練習3:複製字串
    //深複製: 一般字串不能直接複製，只能一個個字元慢慢複製
    //使用strcpy(char * desitnation, const char * source)函式複製 //參數(可寫, 可讀就好)
    /*
    const char *source= "test";
    char destination[5]; //destination要可寫-有產生空間去存字元(不能只是唯讀)
    strcpy(destination, source);
    printf("%s\n", destination);
    */

    //四、指標陣列:一次存多個位址
    int a[4]= {1,2,7,8};
    int b[2]= {3,4};
    int c[2]= {5,6};

    int *n[4]={&a[0], &a[1], &a[2], &a[3],};
    int *p[3]= {a, b, c};
    p[0][2]= 9;

    //五、陣列的指標
    int v[3]= {1,2,3}
    int (*q) [3] = &v; //q這"一"個空間存 陣列v的位置




    return 0;
}


//用於一、
void addone(int *n){  //n為記憶體位置，裡面存一個整數
    *n= *n+1; //變數值+1
}
//用於練習1
void swap(int *a, int *b){
    int t= *a; //a的值複製給t
    *a= *b;
    *b= t;
}

