//ex2: find pairs of characters in a string
//Define a C++ function that counts the number of occurrences of a pair of characters in a given string and 
//another one that does the same in a zero-terminated array of characters (example: "ab" occurs twice in string "dfdabf8987ffabuut"){this is an array\0}
#include<iostream>
using namespace std;

int count_pairs(string str, string pair, int len){
    int count=0, j=0; 
    for(int i=0;i<len;i++)
    if(str[i]==pair[0]&&str[i+1]==pair[1])
        count+=1;
    else count; 
    return count; 
}

int main(){
    int length, count;
    string term, pair_char; 
    cout<<"Enter term: ";
    cin>>term;
    cout<<"Enter pair of characters: ";
    cin>>pair_char; 
    length=term.length();
    count=count_pairs(term, pair_char, length);
    cout<<count; 
    return 0; 
}