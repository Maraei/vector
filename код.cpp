#include <iostream>
#include <vector>

using namespace std;

vector<long long> vect(vector<long long> vec, long long n) {

  for (long long & e : vec) {
    e += n;
  }
  return vec;
}

int main() {
  long long n;
  vector<long long> vec;

  cout << "Введите n: ";
  cin >> n;

  long long e;
  cout << "Введите элементы вектора (по одному, завершая ввод 0): ";
  while (true) {
    cin >> e;
    if (e == 0) {
      break;
    }
    vec.push_back(e);
  }


  vector<long long> result = vect(vec, n);
  cout << "Новый вектор: ";
  for (long long el : result) {
    cout << el << " ";
  }
  return 0;
}
