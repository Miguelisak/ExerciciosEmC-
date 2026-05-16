#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    
    int arr[n];
    
    for(int c = 0; c < n; c++) {
        cin >> arr[c];
    }
    
    for(int i = n - 1; i >= 0; i--){
        cout << arr[i] << " ";
    }
    
    return 0;
}
