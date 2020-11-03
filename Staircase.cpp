#include <bits/stdc++.h>

using namespace std;

// Complete the staircase function below.
void staircase(int n) {
string znak = "#";
for (int i=1;i<=n;i++)
{
    cout<<setw(n)<<znak<<endl;
    znak=znak+"#";
}

}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    staircase(n);

    return 0;
}

