#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void letterRepresentation(int col, int row)
{
    string result;
    while(col)
    {
        int rem;
        if(!(col % 26))
        {
            rem = 26;
            col--;
        }
        else rem = col % 26;
        char ch = rem + 64;
        result.push_back(ch);
        col /= 26;
    }
    reverse(result.begin(), result.end());
    cout<<result<<row<<endl;
}
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string coordinate;
        cin>>coordinate;
        int ridx = 0, cidx = 0, ch = 0, row = 0, col = 0;
        for(int i = 0; i < coordinate.size(); i++)
        {
            if(coordinate[i] == 'R') ridx = i + 1;
            else if(coordinate[i] == 'C') cidx = i + 1;
            if(coordinate[i] >= 'A' && coordinate[i] <= 'Z') ch++;
        }
        if((ch == 2) && ((cidx - ridx) > 1) && cidx && ridx)
        {
            for(int i = ridx; coordinate[i] <= '9' && coordinate[i] != '\0'; i++)
                row = row * 10 + (coordinate[i] - '0');
            for(int i = cidx; coordinate[i] <= '9' && coordinate[i] != '\0'; i++)
                col = col * 10 + (coordinate[i] - '0');
            letterRepresentation(col, row);
        }
        else
        {
            string col, row;
            int i, result = 0;
            for(i = 0; coordinate[i] >= 'A'; i++)
                col.push_back(coordinate[i]);
            for(int j = i; j < coordinate.size(); j++)
                row.push_back(coordinate[j]);
            for(int i = 0; i < col.size(); i++)
                result = result * 26 + (col[i] - 64);
            cout<<"R"<<row<<"C"<<result<<endl;
        }
    }

    return 0;
}
