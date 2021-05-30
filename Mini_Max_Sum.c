#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    long long int arr[5], i, sum = 0, min = 10000000, max = -1;
    for (i = 0; i < 5; i++){
        scanf("%lld", &arr[i]);
        sum = sum + arr[i];
        if (arr[i] < min){
            min = arr[i];
        }
        else if (arr[i] > max){
            max = arr[i];
        }
    }
    printf("%lld %lld", sum - max, sum - min);
    return 0;
}