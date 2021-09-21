#include <vector>

using namespace std;

double solution(vector<int> arr) {
    double answer = 0;
    int size = arr.size();
    vector<int>::iterator iter;
    for (iter = arr.begin(); iter != arr.end(); ++iter){ answer += *iter;}
    return answer/size;
}
