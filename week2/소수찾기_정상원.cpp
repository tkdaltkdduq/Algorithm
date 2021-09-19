#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> primes; 
    int didComplete;
    
    if(n == 1)
        return 0;
    if(n == 2)
        return 1;
    
    primes.push_back(2);
    answer++;
    
    for( int numb = 3; numb <= n; numb = numb + 2 )
    {   
        didComplete = 1;
        
        for(int prime: primes)
        {
            if(numb % prime == 0)
            {
                didComplete = 0;
                break;
            }
                
        }
        
        if(didComplete)
        {
            answer++;
            primes.push_back(numb);
        }
    }
    
    return answer;
}