#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int i = s.size() / 2;
    if (s.size() % 2 == 0)
    {
        answer += s[i-1];
        answer += s[i];
    } 
    else
    {
        answer += s[i];
    }
        
    return answer;
}