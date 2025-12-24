#include <string>
#include <vector>

using namespace std;

int solution(int num1, int num2) {
    int answer = 0;
    double a = 0;
    if(0 < num1 <= 100 && 0 < num2 <= 100){
        answer = 1000 * num1 / num2;
    }
    return answer;
}