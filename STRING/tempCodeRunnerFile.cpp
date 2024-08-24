  void reverse(char Name[], int n){
    int s = 0;
    int e = n-1;
    while(s<e){
      swap(Name[s++], Name[e--]);
    }
    return ;
  }