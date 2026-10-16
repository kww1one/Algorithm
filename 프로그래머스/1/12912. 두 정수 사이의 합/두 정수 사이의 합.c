#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int a, int b) {
    long long answer = 0;
    long long A, B;
    if (a >= b) {
        A = a;
        B = b;
    }
    else {
        A = b;
        B = a;
    }
    
    for (B; B <= A; B++){
        answer = answer + B;
    }
    
    
    return answer;
}