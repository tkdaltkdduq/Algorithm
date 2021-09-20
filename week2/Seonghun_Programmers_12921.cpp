#include <vector>
#include <iostream>
using namespace std;

int solution(int n) {
    int answer = 1;
    vector<int> result;
    vector<int>::iterator iter;
    if(n == 1) return 0;
    for(int k=3;k<=n;){
        for (iter = result.begin(); iter != result.end(); ++iter)
        {
            if(!(k%*iter)){break;}
        }
        if(iter == result.end()){
            result.push_back(k);
        }
        k=k+2;
    }
    answer += result.size();
    return answer;
}


int main(){
    std::cout << solution(1000000);
}