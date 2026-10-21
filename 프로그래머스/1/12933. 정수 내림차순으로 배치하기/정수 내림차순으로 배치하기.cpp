#include <string>
#include <vector>
#include <cmath>

using namespace std;

long long solution(long long n) {
    
    long long answer = 0;
    int size = 0; //n의 길이
    long long temp = n;
    
    while(temp > 0){
        size++;
        temp /= 10;
    }
    
    vector <int> arr(size);
    
    for (int i = 0; i < size; i++){
        arr[i] = n % 10;
        n /= 10;
    } //arr에 n을 순서 반대로 저장
    
    int i, j, key;
    for (i = 1; i < size; i++){
        key = arr[i];
        for (j = i-1; j >= 0 && arr[j] > key; j--){
            arr [j+1] = arr[j];
        }
        arr [j+1] = key;
    }
    
    
    for (i = 0; i < size; i++){
        answer += arr[i] * pow(10, i);
    }
    
    
    
    
    return answer;
}