#include <vector>

using namespace std;

int check[200];

int solution(vector<vector<int>> lines) {
    int answer = 0;
    
    for(int i = 0; i < lines.size(); ++i) {
        for(int j = lines[i][0]; j < lines[i][1]; ++j) check[j + 100]++;
    }
    
    for(int i = 0; i < 200; ++i) {
        if(check[i] > 1) answer++;
    }
    return answer;
}