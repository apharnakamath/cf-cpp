#include <bits/stdc++.h>
using namespace std;

int main() {
    int num;
    cin >> num;

    vector<string> words(num);

    for (int i = 0; i < num; i++) 
    {
        cin >> words[i];
    }

    for (int i = 0; i < num; i++) 
    {
        if (words[i].size() > 10) 
        {
            string s = words[i];
            int size = s.size() - 2;

            string t = "";
            t += s[0];                   
            t += to_string(size);          
            t += s[s.size() - 1];          

            words[i] = t; 
        }
    }
    
    for (int i = 0; i < num; i++) 
    {
        cout << words[i] << "\n"; 
    }

    return 0;
}

