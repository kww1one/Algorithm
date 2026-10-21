#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int num) {
    
    int parity;
    if (num % 2 == 0) parity = 7;
    else parity = 6;
    
    
    
    
    // 리턴할 값은 메모리를 동적 할당해주세요
    char* answer = (char*)malloc(sizeof(char) * parity);
    
    if (parity == 7) strcpy(answer, "Even");
    else strcpy (answer, "Odd");
    
    return answer;
}