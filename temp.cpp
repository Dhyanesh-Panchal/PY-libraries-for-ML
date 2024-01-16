#include <bits/stdc++.h>

using namespace std;

int func(string arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        (arr[i] != '0') ? (cout << arr[i] << endl) : (cout << "YESY UESE");
    }
}

int main()
{
    int x[] = {1, 2, 3, 4};
    string str = "adasd";

    str = "1,2,3,3";
    func(str, 4);
    return 0;
}
