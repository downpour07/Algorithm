#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    int answer = babbling.size();
    vector<string> V={"aya", "ye", "woo", "ma"};
    
    for(int i = 0; i<babbling.size(); i++) {
        for(int j = 0; j < 4; j++) {
            if(babbling[i].find(V[j]) != string::npos)
                babbling[i].replace(babbling[i].find(V[j]), V[j].size(), "0");
        }
    }
    
    for(string s:babbling) {
        for(char c:s) {
            if(c != '0') {
                answer--;
                break;
            }
        }
    }
    
    return answer;
}