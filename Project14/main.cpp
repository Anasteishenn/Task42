#include <iostream>
using namespace std;
int main()
{
    const int sz = 10;
    int arr[sz];
    cout << "Enter elements of array:" << endl;
    for (int i = 0; i < sz; i++)
    {
        cout << "arr[" << i + 1 << "] = ";
        cin >> arr[i];
    }
    cout << "Array: ";
    for (int i = 0; i < sz; i++)
        cout << arr[i] << " ";
    cout << endl;
    for (int i = 0; i < sz; i++)
        for (int j = i + 1; j < sz; j++)
            if (arr[i] == arr[j])
            {
                cout << "Yes !";
                return 0;
            }
    cout << "No !";
    return 0;
}