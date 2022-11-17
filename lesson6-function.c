//C標準函式庫: 可以上網查詢詳細函式資料型態、回傳值為何
#include <string.h>//字串處理
#include <math.h>//數學運算: sqrt(平方根), ceil(無條件進位), abs
#include <stdio.h>//輸入與輸出管理: printf(), scanf()
#include <stdlib.h>//記憶體管理: rand()
#include <time.h>

//可以先宣告函式，之後再去定義
int f(int);
void no_no(void); //無回傳值、無參數
int plus_one(int);
int step(int);

int main(){
    //函式: 一坨已寫好的程式碼，接受一或多個參數後，傳回一個回傳值(注意: 函式內不能定義其他函式)
    //程式會先呼叫main函式(無參數)
    printf("%d\n", f(5*2)); //會先做小括弧內運算，再塞到程式裡

    //一、變數名稱&可視範圍(scope)
    /*
    全域變數:在{ }之外
    區域變數:在{ }之內
    */

    //二、亂數生成函式: 設定不同的亂數種srand(ex.填入整數、根據時間)，它會去決定rand的序列
    srand(time(0)); //一個程式只需設定一個亂數種
    //練習1: 隨機產生5個變數
    /*
    int i;
    for (i=1; i<=5; i++){
        printf("%d\n", rand()); //只要不是同一時間執行，跑出的數字組合都不同
    }
    */
    //練習2: 擲骰子(rand不能指定頭尾)
    /*
    srand(time(0));
    int dice= rand()%6 +1; //餘0則點數1....
    printf("Dice number is %d\n", dice);
    */

    //三、函式遞迴:在函式定義裡呼叫所定義的函式
    printf("%d\n", plus_one(0)); //從0開始遞迴到最後一個才會印出來
    //練習3: 求上樓梯的方法數: 假設每次只走一階或兩階樓梯，印出走到第N階可能走法個數
    //1階: 1種，2階: 2種，3階: 3種，4階: 5種，5階: 8種...
    int N;
    printf("Input how many steps: \n");
    scanf("%d", &N);
    printf("Total methods: %d\n", step(N));

    return 0;
}

int f(int x){
    return x+3;
}

//用於三、
int plus_one(int x){
    if(x==2){ //終止條件
        return x;
    }
    return plus_one(x+1);//遞迴，不斷呼叫下一個plus_one，無限下去(未定義行為)，故需設定終止條件
}
//用於練習3
int step(int N){
    if (N<=2){
        return N;
    }
    return step(N-1)+step(N-2);
}
