#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int a, b;
    cin >> a >> b;
    cout << a + b << endl;

    fclose(stdin);
    fclose(stdout);

    return 0;
}
