#include <iostream>
#include <bits/stdc++.h>
#define SIZE 101
using namespace std;

int A[101][101], B[101][101], rB[101][101];
void print(int row, int col)
{
    cout<<"YES"<<endl;
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++)
            cout<<A[i][j]<<" ";
        cout<<endl;
    }
}
int BtoA(int prow, int pcol, int row, int col)
{
    for(int i = 0; i < col; i++)
        if(!B[prow][i]) return 0;
    for(int i = 0; i < row; i++)
        if(!B[i][pcol]) return 0;
    return 1;
}
int orr(int prow, int pcol, int row, int col)
{
    for(int i = 0; i < col; i++)
        if(A[prow][i]) return 1;
    for(int i = 0; i < row; i++)
        if(A[i][pcol]) return 1;
    return 0;
}
void AtorB(int row, int col)
{
    for(int i = 0; i < row; i++)
        for(int j = 0; j < col; j++)
            rB[i][j] = orr(i, j, row, col);
}
int cmp(int row, int col)
{
    for(int i = 0; i < row; i++)
        for(int j = 0; j < col; j++)
            if(B[i][j] != rB[i][j]) return 0;
    return 1;
}
int main()
{
    int row, col;
    cin>>row>>col;

    for(int i = 0; i < row; i++)
        for(int j = 0; j < col; j++) cin>>B[i][j];
    //make A matrix
    for(int i = 0; i < row; i++)
        for(int j = 0; j < col; j++)
                A[i][j] = BtoA(i, j, row, col);
    AtorB(row, col); //make rB Matrix
    if(cmp(row, col)) print(row, col);
    else cout<<"NO"<<endl;

    return 0;
}
