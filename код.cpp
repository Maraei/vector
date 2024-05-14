#include <iostream>
#include <vector>

using namespace std;
vector<int> vect(vector<int> vec, int n) {

  for (int& e : vec) {
    e += n;
  }
  return vec;
}

int main() {
  int n;
  vector<int> vec;

  cout << "Введите n: ";
  cin >> n;

  int e;
  cout << "Введите элементы вектора (по одному, завершая ввод 0): ";
  while (true) {
    cin >> e;
    if (e == 0) {
      break;
    }
    vec.push_back(e);
  }


  vector<int> result = vect(vec, n);
  cout << "Новый вектор: ";
  for (int el : result) {
    cout << el << " ";
  }
  return 0;
}
