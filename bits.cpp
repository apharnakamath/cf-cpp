#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    int num;
    cin>>num;

    vector <string> words;

    for(int i=0;i<num;i++)
    {
        string word;
        cin>>word;
        words.push_back(word);
    }

    int score = 0;

    for(int i=0;i<words.size();i++)
    {
        for(int j=0;j<words[i].size()-1;j++)
        {
            if(words[i][j]=='+' && words[i][j+1]=='+') score++;
            else if(words[i][j]=='-' && words[i][j+1]=='-') score--;
        }
    }

    cout<<score;
}