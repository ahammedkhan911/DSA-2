#include <iostream>

using namespace std;

int main(){
  int profit[]={10,8,6,5,4,2};
  int deadline[]={3,2,0,0,3,0};
  int jobs[4]={0};

  for(int i=0;i<6;i++){
    for (int j=deadline[i]; j>=0;j--){
      if(jobs[j]==0){
        jobs[j]=i+1;
        break;
      }
    }
  }

  for(int i=0;i<4;i++)
    cout << jobs[i] <<" ";
}
