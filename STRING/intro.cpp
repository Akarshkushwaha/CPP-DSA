#include<iostream>
using namespace std;

  char toLowercase(char ch){
    if(ch >= 'a' && ch<= 'z'){
      return ch;
    }
    else{
      char temp = ch -'A' + 'a';
      return temp;
    }
  }

  int reverse(char Name[], int n){
    int s = 0;
    int e = n-1;
    while(s<e){
      swap(Name[s++], Name[e--]);
    }
  }

bool checkPalindrome(char a[], int n){
  int s = 0;
  int e = n-1;
  while(s<=e){
    if(a[s]!= a[e]){
      return 0;
    }
    else{
      s++;
      e--;
    }
  }
  return 1;
}

int getLength(char Name[]){
  int count = 0;
  for(int i = 0; Name[i] != '\0'; i++){
    count++;
  }
  return count;
}

char getMaxOccCharacter(string s) {

    int arr[26] = {0};


    //create an array of count of characters
    for(int i=0; i<s.length(); i++) {
        char ch = s[i];
        //lowercase
        int number = 0;
        number = ch - 'a';
        arr[number]++;
    }

    //find maximum occ character
    int maxi = -1, ans = 0;
    for(int i=0;i<26; i++) {
        if(maxi < arr[i]) {
            ans = i;
            maxi = arr[i];
        }
    }
    

    return 'a'+ans;

}


int main(){
  char Name[20];
  cout<<"your name is:";
  cin>>Name;
  cout<<Name<<endl;
  int len = getLength(Name);
  cout<<"Length:" <<len<<endl; 
  reverse(Name, len);
  cout<<"your name is: "<<endl;
  cout<<Name<<endl;
  cout<<"palindrome or not "<<checkPalindrome(Name, len)<<endl;
  return 0;
}