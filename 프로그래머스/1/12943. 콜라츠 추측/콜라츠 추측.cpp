#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    long long n = num;
    int answer = 0;
    while(n != 1){
        if (n % 2 == 0){
            n /= 2;
            if(answer < 500){
                answer++;
            } else {
                return -1;
            }
        } else {
            n = n * 3 + 1;
            if(answer < 500){
                answer++;
            } else {
                return -1;
            }
        }
    }
    return answer;
}