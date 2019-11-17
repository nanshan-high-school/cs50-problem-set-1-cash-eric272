#include <iostream>
using namespace std;

int main() {
    cout << "請輸入你的價錢:"; 
    int price;
    cin >> price;    
    if (price >= 1000) {
      cout << price / 1000 << "張一千\n";
      cout << price % 1000 % 500 / 100 << "張一百\n";
      cout << price % 1000 % 500 % 100 / 50 << "個五十\n";
      cout << price % 1000 % 500 % 100 % 50 << "個十\n";
      cout << price % 1000 % 500 % 100 % 50 % 10 << "個一\n";
    }
}//655327 國272 31 陳麒元
