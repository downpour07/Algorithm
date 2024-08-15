#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_str, int n) {
    vector<string> answer;
    int i = 0;
    for(i = 0; i<my_str.size(); i+=n) {
        answer.push_back(my_str.substr(i,n));
    }
    return answer;
}