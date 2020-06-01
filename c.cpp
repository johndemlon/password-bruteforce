#include <bits/stdc++.h> 
using namespace std; 
  
// int cnt; 
  
// Recursive helper function, adds/removes characters 
// until len is reached 
void generate(char* arr, int i, string s, int len) 
{ 
    // base case 
    if (i == 0) // when len has been reached 
    { 
        // print it out 
        cout << s << "\n"; 
        // cnt++; 
        return; 
    } 
    for (int j = 0; j < len; j++) { 
        string appended = s + arr[j]; 
        generate(arr, i - 1, appended, len); 
    } 
  
    return; 
} 
  
// function to generate all possible passwords 
void crack(char* arr, int len) 
{ 
    // call for all required lengths 
    for (int i = 1; i <= len; i++) { 
        generate(arr, i, "", len); 
    } 
} 
  
// driver function 
int main() 
{ 
    char arr[] = { 'a', 'b', 'c','d' ,'e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','1','2','3','4','5','6','7','8','9','0','@','_','-'}; 
    int len = sizeof(arr) / sizeof(arr[0]); 
    crack(arr, len); 
  
    //cout << cnt << endl; 
    return 0; 
} 