#include "stdio.h"

/** 
 * 基础语法 BasicSyntax
 * @author cbq
 * @date 2023/11/18
 * @since 1.0
 **/
int main() {
    short short_a = 1;
    int int_a = 1;
    long long_a = 1;
    float float_a = 1.1;
    double double_a = 1.2;
    char char_a = 'a';

    const char str_1[] = "cbq";
    int counts[] = {1, 2, 3, 4, 5, 6};

    printf("Hello World");

    for (int i = 0; i < 100; ++i) {
        printf("i = %d", i);
    }


    return 0;
}