# Staircase
In this task I had to biuld stairs from '#'.
I used function 'setw'.

void staircase(int n) {
string znak = "#";
for (int i=1;i<=n;i++)
{
    cout<<setw(n)<<znak<<endl;
    znak=znak+"#";
}

