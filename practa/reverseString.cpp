#include<iostream>
#include<string>
using namespace std;
string reversewords(string str){
    string word;
    // string str = "I.like.programming";
    string res_str="";
    int find = str.find_last_of(".");
    int l = str.length();
    while(find!=-1){
        word = str.substr(find+1,l-find-1); 
        res_str+=word + ".";
        str = str.substr(0,find);
        find = str.find_last_of(".");
        l=str.length();
    }
    res_str+=str;
    return res_str;
}
int main(){
    string str;
    cout << "Enter a string with words separated by dots: ";
    cin >> str;
    
    string reversed = reversewords(str);
    cout << "Reversed words: " << reversed << endl;
    return 0;
}