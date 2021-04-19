#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <map>
#include <queue>
#include <algorithm>
using namespace std;
ifstream fin("sample.txt");
bool cmp(pair<string, int>& a, pair<string, int>& b)
{
    return a.second > b.second;
}
int main()
{
    string linie;
    string impartitor = " ";
    vector<string> cuvinte;
    map<string, int> aparitiiCuvinte;
    while (getline(fin, linie))
    {
        size_t pos_start = 0, pos_end, delim_len = impartitor.length();
        string token;
        while ((pos_end = linie.find(impartitor, pos_start)) != string::npos)
        {
            token = linie.substr(pos_start, pos_end - pos_start);
            pos_start = pos_end + delim_len;
            cuvinte.push_back(token);
        }
        cuvinte.push_back(linie.substr(pos_start));
    }

    for (string& cuvant : cuvinte)
    {
        for (int i = 0; i < cuvant.size(); i++)
            if (cuvant[i] >= 'A' && cuvant[i] <= 'Z')
                cuvant[i] = tolower(cuvant[i]);
        aparitiiCuvinte[cuvant]++;
    }

    //for (auto iterator = aparitiiCuvinte.begin(); iterator != aparitiiCuvinte.end(); iterator++)
        //cout << iterator->first << " => " << iterator->second << endl;
    //cout << endl;

    vector<pair<string, int> > A;
    for (auto& it : aparitiiCuvinte)
    {
        A.push_back(it);
    }
    sort(A.begin(), A.end(), cmp);
    for (auto& it : A)
        cout << it.first << " => " << it.second << endl;


}