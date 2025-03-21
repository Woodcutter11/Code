#include<iostream>
#include<sstream>
#include<string>

using namespace std;

int main()
{
    string text = "i am zalmer Leparanon lived in calinan davao.";
    stringstream ss(text);
    string word;
    
    int word_count = 0;
    
    while(ss >> word) {
        ++word_count;
    }
    
    cout<<"The number of words is: "<< word_count<<endl;
    
    return 0;
    
    }
    