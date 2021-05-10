#include <iostream>
#include <string>
#include <vector>
#include <queue>

using namespace std;

int main(){

    vector<int> progresses = {95,90,99,99,80,99};
    vector<int> speeds = {1,1,1,1,1,1};
    vector<int> answer;
    
    vector<int> days;
    queue<int> q;
    
    //작업별로 완성에 걸리는 시간 계산
    for(int i=0;i<progresses.size();i++)
    {
        int d = (100-progresses[i])/speeds[i];
        if((progresses[i] + d*speeds[i]) != 100) d++;
        days.push_back(d);
    }
    
    
    //첫번째 작업완성기간 삽입 초기화
    q.push(days[0]);
    
    for(int i=1;i<days.size();i++)
    {

        //앞의 날짜가 더 크면, 배포일을 기다림. 
        if(q.front() >= days[i])
        {
            q.push(days[i]);
        }
        else
        {
            //배포를 완료하고, 큐초기화
            answer.push_back(q.size());
            while(!q.empty()) q.pop();
            q.push(days[i]);
        }
    }

    if(!q.empty())answer.push_back(q.size());
    
    for(int i=0;i<answer.size();i++)
      cout << answer[i] << ",";
}