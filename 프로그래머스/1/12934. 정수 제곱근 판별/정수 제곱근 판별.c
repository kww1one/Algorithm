#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

long long solution(long long n) {
    long long answer = 0;
    long long square = sqrt(n);
    
    if (square * square == n)
        answer = (square + 1) * (square + 1);
    else
        answer = -1;
    
    
    
    return answer;
}