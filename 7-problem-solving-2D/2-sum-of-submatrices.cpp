#include<bits/stdc++.h>
using namespace std;

#define R 2
#define C 2

// calculating new array
void prefixSum2D(int a[][C])
{
int psa[R][C];
psa[0][0] = a[0][0];

// Filling first row and first column
for (int i = 1; i < C; i++)
    psa[0][i] = psa[0][i - 1] + a[0][i];
for (int i = 1; i < R; i++)
    psa[i][0] = psa[i - 1][0] + a[i][0];

// updating the values in the cells
// as per the general formula
for (int i = 1; i < R; i++) {
    for (int j = 1; j < C; j++)

        // values in the cells of new
        // array are updated
        psa[i][j] = psa[i - 1][j] + psa[i][j - 1]
                    - psa[i - 1][j - 1] + a[i][j];
}

// displaying the values of the new array
for (int i = 0; i < R; i++) {
    for (int j = 0; j < C; j++)
        cout << psa[i][j] << " ";
    cout << "\n";
}
}

// driver code
int main()
{
int psa[R][C];

int sum=0;
for(int li=0;li<R;li++){
    for(int lj=0;lj<C;lj++){
        for(int bi=li;bi<R;bi++){
            for(int bj=0;bj<C;bj++){
                sum+=psa[bi][bj]-psa[li-1][bj]-psa[bi][lj-1]+psa[li-1][lj-1];
                
            }
        }
    }
}
int a[R][C] = { { 1, 1 },
                
                { 1, 1 } };

prefixSum2D(a);
cout<<sum<<endl;

return 0;
}