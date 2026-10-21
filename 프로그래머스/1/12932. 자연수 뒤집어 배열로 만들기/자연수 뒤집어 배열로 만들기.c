#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(long long n) {
    // 리턴할 값은 메모리를 동적 할당해주세요.
    
    int size = 0;
    long long temp = n;
    
    while(temp > 0){
        size++;
        temp /= 10;
    }
    
    int* answer = (int*)malloc(sizeof(int) * size);
    
    for (int i = 0; i < size; i++){
        answer[i] = n % 10;
        n /= 10;
    }
    
    
    
    
    
    return answer;
}