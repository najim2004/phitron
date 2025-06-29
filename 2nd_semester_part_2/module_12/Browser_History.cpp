#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<string> browser;
    string s;

    while (cin >> s && s != "end")
    {
        browser.push_back(s);
    }

    int q;
    cin >> q;
    cin.ignore(); 

    list<string>::iterator current = browser.begin(); 

    while (q--)
    {
        string command;
        getline(cin, command); 

        if (command.substr(0, 6) == "visit ")
        {
            string addr = command.substr(6);
            auto it = find(browser.begin(), browser.end(), addr);
            if (it != browser.end())
            {
                current = it;
                cout << *current << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (command == "next")
        {
            auto temp = current;
            temp++;
            if (temp != browser.end())
            {
                current = temp;
                cout << *current << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (command == "prev")
        {
            if (current != browser.begin())
            {
                current--;
                cout << *current << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
    }

    return 0;
}