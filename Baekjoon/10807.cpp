#include <iostream>

using namespace std;

int main() {

  int N;
  int arr[101];
  int v;

  cin >> N; // ù° ��

  for(int i = 0; i < N; i++) {
    cin >> arr[i]; // ��° ��
  }
  cin >> v; // ��° ��

  int res = 0; 

  for(int i = 0; i < N; i++) {
    if(arr[i] == v) 
      res++;
  }

  cout << res;
}

// N���� ���� -> ���� v�� �� ������ ���ϴ� ���α׷�
// ù° �� : ������ ���� N
// ��° �� : ������ �������� ����
// ��° �� : ã������ �ϴ� ���� v
// -100 =< �Է� =< 100 