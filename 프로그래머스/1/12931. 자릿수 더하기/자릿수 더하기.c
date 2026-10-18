#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    
    for (int i = 8; i >= 0; i--){
        int temp = n / pow(10, i);
        answer += temp;
        n = n - temp * pow(10,i);
    }
    
    return answer;
}