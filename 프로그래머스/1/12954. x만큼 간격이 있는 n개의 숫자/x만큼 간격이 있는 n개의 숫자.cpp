#include <string>
#include <vector>

using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> answer(n, x);
    int num = x;
    for (int i = 0; i < n; i++){
        answer[i] = num;
        num += x;
    }
    return answer;
}