//credit: Yen Hsu, github: https://github.com/yen2451/CLang/introToC_basicMethod.c
// 兩個斜線，為單行註解，註解內容不執行
/* 斜線＋乘號，為多行註解，註解內容不執行
    （我是註解）
    （我還是註解）
    （好啦要結束ㄌㄚ）
    以乘號＋斜線做結尾
*/
#include <stdio.h> //宣告引入Ｃ語言基本輸出入程式庫
int main()
{
    //main函式，只能有一個，為整個程式的進入點（開始點）int 表回傳值為整數值，後面會再介紹
    int a = 0; //宣告一個記憶體形式為int，名字為a的空間 >> a稱為變數
    int b = 1; //宣告一個記憶體形式為int，名字為b的空間 >> b稱為變數
    int c, d;  //宣告c與d，待賦值
    //以下為基本輸出入示範

    /*printf，為一關鍵字，表示輸出的函式，使用方式為:
    printf("%輸出入格式","輸出入內容[變數則直接呼叫]");
    以下為示範：
    */
    printf("%s", "hello world\n"); //helloworld這幾字為字串“string”，故輸出時需格式化為s，單行程式碼以分號作結
    printf("%d %d", a, b);         //輸出a和b，而輸出格式為“數字（空格）數字”，故輸出時格式化為“%d %d”，再分別呼叫變數
    a = a + b;                     //基本運算，一個等號為「賦值」，兩個等號才是「運算子」，本行程式碼意為將變數a設為a+b之值
    // 倒斜線＋n為一跳脫字元，表換行
    /*scanf 為另一關鍵字，表示接受輸入值，使用方法為：
    scanf("%輸入格式",&存入變數名稱);
    以下為示範
    */
    scanf("%d", &b);        //接受輸入，並存入b
    scanf("%d %d", &c, &d); //連續輸入，中間以空格分隔，依序存入c、d
    printf("%s %d\n", "b is", b);
    printf("%s %d %s %d\n", "c is", c, ",and d is", d);
    return 0; //最後，回傳0值，代表程序順利執行而為出錯
}
//叮嚀：windows系統中中文編碼是big5，與常用unicode分屬不同編碼系統，故在命令列輸出時盡量用英文，否則可能會有亂碼出現