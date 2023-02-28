#include<stdio.h>

void main(){
 
 int N = 7;
 int arr[7] = {100, 180, 260, 310, 400, 535, 695};
 
 int maxProfit = 0;
 int b,s;
 for(int i = 0; i < N; i++){
  int buy = i, sell;
  int max = -1;
  for(int j = i + 1; j < N; j++){
   if(max < arr[j]){
    sell = j;
    max = arr[j];
    }
  }
  
  int profit = arr[sell] - arr[buy];
  if(profit > maxProfit) {
  b = buy;
  s = sell;
  maxProfit = profit;
  }
 }
 
 printf("Pair: (%d - %d)\n", b,s);
 printf("Maximum Profit: %d\n", maxProfit);
}
