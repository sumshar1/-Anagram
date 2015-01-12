#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string.h>
#include<map>
using namespace std;
std::map<char, int> mymap;
std::map<char,int>::iterator it;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int input_count(0);
    int index(0);
    int len;
    int num_of_change(0);
    cin >> input_count;
    string stringtotest;
    for (int i=0; i<input_count; i++)
        {
       
        cin>>stringtotest;
        len = stringtotest.length();
        if(len % 2 == 0) 
            { 
            while(index < (stringtotest.length()/2))
                {
                mymap[stringtotest[index]] += 1;
                index++;
            }
            while( index < len)
                {
                if(mymap[stringtotest[index]]) 
                    mymap[stringtotest[index]]--;
                index++;
            }
            it = mymap.begin();
            while(it != mymap.end())
                {
                if(it->second != 0)
                    num_of_change += it->second;
                it++;
            }
            cout<< num_of_change<<"\n";
             index = 0 ;  num_of_change = 0; mymap.clear();
        }
        else {cout<<"-1"<<"\n"; }
       
    }
    return 0;
}
