#include <iostream>

using namespace std;

int main() {

  int N;
  int arr[101];
  int v;

  cin >> N; // 첫째 줄

  for(int i = 0; i < N; i++) {
    cin >> arr[i]; // 둘째 줄
  }
  cin >> v; // 셋째 줄

  int res = 0; 

  for(int i = 0; i < N; i++) {
    if(arr[i] == v) 
      res++;
  }

  cout << res;
}

// N개의 정수 -> 정수 v가 몇 개인지 구하는 프로그램
// 첫째 줄 : 정수의 개수 N
// 둘째 줄 : 정수가 공백으로 구분
// 셋째 줄 : 찾으려고 하는 정수 v
// -100 =< 입력 =< 100 