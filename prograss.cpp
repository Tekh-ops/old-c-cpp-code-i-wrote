#include <iostream>
using namespace std;

int progress(int n);

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    cout << progress(n) << endl;
    return 0;
}

int progress(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
        count += i;
    return count;
}