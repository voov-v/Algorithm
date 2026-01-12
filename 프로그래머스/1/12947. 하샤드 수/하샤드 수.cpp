#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;
    int a[5];
    int num = x;
    int num2 = 0;
    
    for(int i=0; i<5; i++){
        a[i] = num%10;
        num /= 10;
        while(true){
            num2 += a[i];
            break;
            }
    }
    
    
    if (x%num2 == 0){
        answer = true;
    } else {
        answer = false;
    }
    
    return answer;
}