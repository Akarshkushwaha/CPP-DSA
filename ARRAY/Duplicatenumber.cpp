#include<iostream>
using namespace std;

        for(int i = 0; i<n; i++){
            for(int j = i+1; j<n; j++){
                if(arr[i] + arr[j] == k){
                    count++;
                }
            }
            
        }
        return count;
        