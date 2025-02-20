#include <iostream>

using namespace std;
int main() {

  int weight[5]={10,20,30,7,12};
  int profit[5]={30,100,60,35,48};
  float ppu[5];

  for(int i=0;i<=5;i++)
    ppu[i]=(float)profit[i]/weight[i];
  for(int i=0;i<4;i++){
    for(int j=i+1;j<5;j++){
      if(ppu[i]<ppu[j])
        swap(ppu[i],ppu[j]);
        swap(profit[i],profit[j]);
        swap(weight[i],weight[j]);

  }


}

int capacity=30;
int total_profit=0;

for(int i=0;i<5;i++){
    int taken_weight=weight[i]<capacity? weight[i]:capacity;
    capacity-=taken_weight;
    total_profit+=taken_weight*ppu[i];
  }
    cout << "total profit: "<<total_profit;

}
