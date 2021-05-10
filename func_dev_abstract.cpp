#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int main()
{
    vector<int> progresses = {95,90,99,99,80,99};
    vector<int> speeds = {1,1,1,1,1,1};
    vector<int> answer;
    int day;
    int max_day = 0;
    for(int i=0;i<progresses.size();i++)
    {
        day = (99-progresses[i])/speeds[i] + 1;
               
        if(answer.empty() || max_day<day)
        {
           answer.push_back(1);
           max_day = day;
        }
        else
        {
            answer.back()++;

        }
    }

    for(int i=0;i<answer.size();i++)
      cout << answer[i] << ",";

}
