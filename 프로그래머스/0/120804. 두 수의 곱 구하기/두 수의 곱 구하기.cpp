#include <string>
#include <vector>

using namespace std;

int solution(int num1, int num2) {
    int answer = 0;
    if (100>=num1>=0 &&100>=num2>=0)
        answer = num1*num2;
    return answer;
}