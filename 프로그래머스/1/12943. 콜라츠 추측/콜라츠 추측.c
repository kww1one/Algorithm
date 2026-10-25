#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num) {
    int answer = -1;
    int count = 0;
    long long n = num;
    
    if (n == 1)
        answer = 0;
    
    else {
        while (count < 500){
            count++;
            
            if(n % 2 == 0) n /= 2;
            else n = n * 3 + 1;
            
            if(n == 1){
                answer = count;
                break;
            }
        }
    }

    
    
    return answer;
}