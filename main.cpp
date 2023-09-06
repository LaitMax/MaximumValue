#include <iostream>
#include <climits>
#include <algorithm>
#include <fstream>

using namespace std;

int main()
{
    ifstream read("var1.in");
    ofstream rec("var1.out", ios::out);
    int n;
    int A[1000];
    cout << "Enter the number of elements: ";
    cin >> n;
    if (n < 0 || n > 10)
    {
        cout << '\n' << "ERROR";
        cout << '\n' << "Enter the number of elements: ";
        cin >> n;
    }
    if (!read.good())
    {
        cout << "File 'var1.in' not found!" << endl;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            read >> A[i];
        }
        read.close();
        int min = INT_MAX, max = INT_MIN;
        for (int i : A)
        {
            if (i < min)
            {
                min = i;
            }
            if (i > max)
            {
                max = i;
            }
        }
        cout << '\n' << "The max element is " << max << endl;
        rec << max << endl;
        rec.close();
    }
}