#include <string>
#include <vector>

using namespace std;

bool isPrime(int num){
    for(int i=2; i*i<=num; i++){
        if(num % i == 0) return false;
    }
    return true;
}


int solution(int n) {
    int answer = 0;
    for(int k=2;k<=n;k++){
        if(isPrime(k)){answer++;};
    }
    return answer;
}