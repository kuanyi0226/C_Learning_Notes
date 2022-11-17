#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
//Array陣列: 一群具有相同資料型態元素集合的資料型態，用於取代定義一堆變數
//每個元素資料型態 陣列變數名稱[元素個數];     int var[3];
//元素編號從0號開始
//初始化: int counter[6]= {0,0,0,0,0,0}; ，至少需指定一個值，未指定的值為0(初始化的陣列，可省略元素個數)
int main(){
    //練習1: 骰子點數出現次數統計，模擬擲6000次，各點數出現次數
    /*
    srand(time(0));
    int counter[6]={0};
    for(int i=1; i<=6000; i++){
        int dice= rand()%6+1;
        counter[dice-1]++; //隨機存取陣列元素
    }
    for(int x=0; x<=5; x++){
        printf("%d: %d\n", x, counter[x]);
    }
    */
    //一、陣列複製(不能一次用=，整個複製；可以用迴圈一個一個元素複製)
    /*
    int v[10];
    int n[]= {1,2,3,4,5,6,7,8,9,10};
    for (int i=0; i<=9; i++){
        v[i]= n[i];
        printf("%d ", v[i]);
    }
    */

    //二、2D Array
    //int v[2][3]= {{1,2,3},{4,5,6}};
    //練習2: 隨機生成9宮格(難)
    /*
    srand(time(0));
    int v[3][3]= {{1,2,3},{4,5,6},{7,8,9}};
    int i,j,k=0;
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            int r= rand() % (9-k)+k;
            int m=r/3;
            int n= r%3;
            int t= v[i][j];
            v[i][j]= v[m][n];
            v[m][n]= t;
            k++;
        }
    }
    for( i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%d ", v[i][j]);
        }
        printf("\n");
    }
    */

    //三、字串: C語言沒有字串資料型別，而是"字元陣列"
    //char str[5]= {'H', 'E', 'L', 'L', 'O'};
    //char str[ ]= {'H', 'E', 'L', 'L', 'O', '\0'}; 以'\0'表示結尾
    //char str[ ]= "Hello" ; 可以用雙引號(%s)初始化，會自動加上'\0'
    //練習3: 讀取字串
    char str[15]; //設定字元上限
    str_read(str, 14); //迴圈讀取最多跑14次
    printf("%s\n", str);

    return 0;
}

//用於練習3
void str_read(char str[], int n){ //多設一個參數n限制讀取字元上限，避免溢位
    int i;
    for(i=0; i<n; i++){
        scanf("%c", &str[i]);
        if (str[i]== '\n'){ //讀取到Enter就停止讀取
            break;
        }
    }
    str[i]= '\0'; //字串最後一個要是'\0'
}
