#include <iostream>
using namespace std;

const int MOD = 1e9 + 7;

// Hàm đệ quy để tính a^n mod m
long long power(long long n, long long k)
{
    if (k == 0)
        return 1;
    // Nếu n là số chẵn, tính (a^(n/2))^2 mod m
    long long x = power(n, k / 2);
    if (k % 2 == 0)
    {
        return (x * x) % MOD;
    }
    // Nếu n là số lẻ, tính a * (a^(n-1)) mod m
    else
    {
        return (n * ((x * x) % MOD)) % MOD;
    }
}

// Hàm để đảo ngược số n
long long reverse(long long n)
{
    // Khai báo biến rev để lưu kết quả và khởi tạo bằng 0
    long long rev = 0;
    // Lặp cho đến khi n = 0
    while (n > 0)
    {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}

int main()
{
    int T;
    // Nhập số lượng test T từ bàn phím
    cin >> T;
    while (T--)
    {
        long long n, k;
        cin >> n;
        // Gọi hàm reverse để tìm số đảo của n và gán cho k
        k = reverse(n);
        // Gọi hàm power để tính r^n mod m và in ra kết quả
        cout << power(n, k) << endl;
    }
}