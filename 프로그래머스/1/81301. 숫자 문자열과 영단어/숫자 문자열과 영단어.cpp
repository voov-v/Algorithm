#include <string>
#include <vector>

using namespace std;

string digits[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

int solution(string s) {
    string temp = "";
    string result = "";
    
    for (char c : s) 
    {
        if (isdigit(c))
        {
            result += c;
        } 
        else 
        {
            temp += c;
            
            for (int i = 0; i < 10; ++i) 
            {
                if (temp == digits[i]) 
                {
                    result += to_string(i);
                    temp = "";
                    break;
                }
            }
        }
    }
        
    return stoi(result);
}