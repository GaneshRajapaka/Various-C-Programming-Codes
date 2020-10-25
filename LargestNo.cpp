#include<iostream>
using namespace std;

int main()
{
    system("cls");
    int n1,n2,n3;
    cin >> n1;
    cin >> n2;
    cin >> n3;
    if (n1>=n2 && n1>=n3)
    {
        cout << n1 << " is the largest no." << endl;
    }
    else if (n2>=n1 && n2>=n3)
    {
        cout << n2 << " is the largest no." << endl;
    }
    else if (n3>=n2 && n3>=n1)
    {
        cout << n3 << " is the largest no." << endl;
    }
    return 0;
}