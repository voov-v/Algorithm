#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    int num;
    if (a>b) {num = a - b;}
    else {num = b - a;}
    for (int i = 0; i <= num; i++){
        if (a>b){
            answer += b;
            b++;
        } else {
            answer += a;
            a++;
        }
        
    }
    return answer;
}