#include <vector>
using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    int arr[200000] = { 0 };
    int cnt = nums.size() / 2;
    
    for(int i = 0; i<nums.size(); i++) {
        if(arr[nums[i]] == 0) {
            answer++;
            arr[nums[i]]++;
        }
    }
    
    if(cnt < answer) answer = cnt;
    
    return answer;
}