#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int main(){
    vector<int> truck_weights = {7,4,5,6};
    int weight = 10;
    int bridge_length = 2;
    int answer = 0;
    int sum = 0;
    int time = 0;
    int truckIdx = 0;
    queue<int> q;
    queue<int> t;
    
    while(1)
    {
        time++;
        
        if(q.size() == bridge_length)
        {
            sum -= q.front();
            q.pop();            
        }
        
        if(sum + truck_weights[truckIdx] <= weight)
        {
            if(truck_weights.size()-1 == truckIdx)
            {
                time += bridge_length;
                break;
            }
            q.push(truck_weights[truckIdx]);
            sum += truck_weights[truckIdx];
            truckIdx++;
            
            
            
        } else
        {
            q.push(0);
        }
    }

    cout << time << endl;
    
    return time;

}