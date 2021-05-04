#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> arr = {1,3,4,3,2};

vector<int> stack(vector<int> arr){

  vector<int> answer;

  //입력배열의 수보다 큰수가 나오면1을 더하고, 작으면 1로 초기화하고 증가하는 스택함수
  for(int i=0;i<arr.size();i++){
    int price = 0;
    for(int j=i+1;j<arr.size();j++){ //다음배열수와 비교
      if(arr[j]>=arr[i]) price++;
      else{
        price++;
        break;
      }
    } 
    answer.push_back(price);
  }

  return answer;

}

int main() {

  vector<int> answer;
  

  //입력데이터
  for(int i=0;i<answer.size();i++){
    printf("%d ",answer[i]);
  }

  //순서대로 증감적용
  answer = stack(arr);

  //출력데이터
  for(int i=0;i<answer.size();i++){
    printf("%d ",answer[i]);
  }
}
