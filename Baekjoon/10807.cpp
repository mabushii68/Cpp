#include <iostream>

using namespace std;

int main() {

  int N;
  int arr[100];
  int v;

  cin >> N;

  for(int i = 0; i < N; i++) {
    cin >> arr[i];
  }
  cin >> v;

  int res = 0; 

  for(int i = 0; i < N; i++) {
    if(arr[i] == v) 
      res++;
  }

  cout << res;
}