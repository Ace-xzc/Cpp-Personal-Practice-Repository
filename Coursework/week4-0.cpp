#include <iostream>
#include <cmath>
using namespace std;

// 判断一个数是否为质数
bool isPrime(int n) {
    // 小于 2 的数不是质数
    if (n < 2)
        return false;

    // 检查从 2 到 sqrt(n) 是否能整除 n
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int num;
    cout << "请输入一个整数：";
    cin >> num;

    if (isPrime(num)) {
        cout << num << " 是质数" << endl;
    } else {
        cout << num << " 不是质数" << endl;
    }

    return 0;
}
