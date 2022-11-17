#include <stdio.h>
int main(){
    //一、while loop: 小括弧內為true(不為0)即不斷重複迴圈
    //練習1: 猜Integer
    /*
    int ans= 566;
    int guess;
    int control= 0;
    while(control ==0){
        printf("Input your guess(An Integer): ");
        scanf("%d", &guess);
        if( guess>566){
            printf("Too large! Guess again.\n");
        }
        else if( guess<566){
            printf("Too small! Guess again.\n");
        }
        else{
            printf("Correct! The answer is 566.\n");
            control +=1;
        }
    }
    */

    //二、do-while: 至少做一次的重複執行(最後記得加分號)，小括弧是對的才會做第二次
    //do{程式片段} while(表示式);
    /*
    int count=4;
    do{ //先做一次do，若while是對的再繼續do
        printf("%d\n", count);
        count ++;
    } while(count <3);
    */

    //三、遞增遞減運算(a++，++a)
    /*
    int a= 0;
    int b1= a++; //運算結果: a 原本的值(a=1, b=0)，b獲得+1之前的a
    int b2= ++a; //運算結果: a加1後的值(a=1, b=1)，b獲得+1之後的a
    printf("%d\n", b1);
    printf("%d", b2);
    */

    //四、for loop:
    //for (初始式; 條件式; 迴圈式){ }，可搭配break(中斷迴圈)、continue(跳過圈內後面程式，強制繼續下一輪迴圈)
    //練習2: 印出1到N間不是3的倍數之偶數
    /*
    int N, count;
    printf("Choose an integer: \n");
    scanf("%d", &N);
    for (count=2; count<=N; count+=2){
        if(count%3 !=0){
            printf("%d\n", count);
        }
    }
    */
    //練習3: 找出所有正因數
    /*
    int N, count;
    printf("Choose an integer: \n");
    scanf("%d", &N);
    for(count=1; count<=N; count++){
        if(N%count==0){
            printf("%d ", count);
        }
    }
    printf("\n");
    */





    return 0;
}
