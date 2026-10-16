#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int x;

    for (x = 1; x < n; x++) {
        int mod = n % x;
        if (mod == 1) {
            break;
        }
    }

    return x;
}