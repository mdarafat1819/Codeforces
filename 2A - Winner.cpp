#include <iostream>
#include <bits/stdc++.h>

using namespace std;

typedef struct players plyrs;
struct players
{
    string name;
    int score;
};
int idxOfPlayer(plyrs data[], string name, int size)
{
    for(int i = 0; i < size; i++)
        if(data[i].name == name) return i;
    return -1;
}
string winner(plyrs data[], int size, string plyr1, string plyr2, int point)
{
    int sum1 = 0, sum2 = 0;
    for(int i = 0; i < size; i++)
    {
        if(plyr1 == data[i].name) sum1 += data[i].score;
        else if(plyr2 == data[i].name) sum2 += data[i].score;
        if(sum1 >= point) return plyr1;
        if(sum2 >= point) return plyr2;
    }
}
int nameToIdx(plyrs data[], int size, string name)
{
    for(int i = 0; i < size; i++)
        if(name == data[i].name) return i;
}
int main()
{
    int n, size = 0, idx;
    cin>>n;
    struct players data[n], temp[n];
    for(int i = 0; i < n; i++)
    {
        cin>>temp[i].name>>temp[i].score;
        idx = idxOfPlayer(data, temp[i].name, size);
        if(idx >= 0) data[idx].score += temp[i].score;
        else
        {
            data[size].name = temp[i].name;
            data[size].score = temp[i].score;
            size++;
        }
    }
    idx = 0;
    for(int i = 0; i < size; i++)
    {
        if(data[i].score >= data[idx].score)
        {
            if(data[idx].score == data[i].score)
            {
                string name;
                name = winner(temp, n, data[idx].name, data[i].name, data[i].score);
                idx = nameToIdx(data, size, name);
            }
            else idx = i;
        }
    }
    cout<<data[idx].name<<endl;

    return 0;
}
