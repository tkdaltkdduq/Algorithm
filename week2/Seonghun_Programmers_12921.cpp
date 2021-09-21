#include <vector>
using namespace std;

int solution(int n) {
    int answer = 1;
    bool IsprimeNum = true;
    vector<int> result;
    vector<int>::iterator iter;
    if(n == 1) return 0;
    for(int k=3;k<=n;){
        for (iter = result.begin(); iter != result.end() && (((*iter)*(*iter))<=k); ++iter)
        {
            if(!(k%*iter)){IsprimeNum=false; break;}
        }
        if(IsprimeNum){
            result.push_back(k);
        }
        IsprimeNum=true;
        k=k+2;
    }
    answer+= result.size();
    return answer;
}