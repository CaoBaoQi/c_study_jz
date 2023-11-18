#include "stdio.h"
#include "string.h"
#include "stdbool.h"

/** 
 * 回文串判断
 * @author cbq
 * @date 2023/11/18
 * @since 1.0
 **/
int main() {
    const int COUNT = 10;
    char input[COUNT];

    printf("Please input content: \n");
    scanf("%s", input);

    bool isBackStr = true;
    int length = strlen(input);

    for (int i = 0; i < length / 2; ++i) {
        if (input[i] != input[length - 1 - i]) {
            isBackStr = false;
            break;
        }
    }

    if (isBackStr) {
        printf("the %s is backStr \n", input);
    } else {
        printf("the %s is not backStr \n", input);
    }

    return 0;
}