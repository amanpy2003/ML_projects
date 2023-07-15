#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <time.h>
using namespace std;


int MaxPairwiseProduct(const vector<int>& numbers) {
    int max_product = 0;
    int n = numbers.size();

    for (int first = 0; first < n; ++first) {
        for (int second = first + 1; second < n; ++second) {
            max_product = max(max_product,numbers[first] * numbers[second]);
        }
    }

    return max_product;
}
long long int MaxpairwiseProduct_fast(const vector<int>& numbers){
    int index1=0;
    int index2=0;
    int n=numbers.size();
    cout << n << '\n';
    for (int i=0; i<n ;i++){
        cout << numbers[i] << " ";
    }
    cout << endl ;
    for (int i=0 ; i<n ; i++){
        if(numbers[i] < numbers[index1]){
            index1=i;
        }
    }
    for (int i=0; i<n ;i++){
        if(numbers[i]<numbers[index2] && i!=index1 ){
            index2=i;
        }
    }
    cout << index1 << index2 ;
    return ((long long) numbers[index1]*numbers[index2]);
}

int main() {
    // while(true){
    //     srand(time(NULL));
    //     int n;
    //     n=rand()%10+2;
    //     vector<int> arr;
    //     cout << n << endl ;
    //     for (int i = 0 ; i < n; i++){
    //         arr.push_back(rand()%10);

    //     }
    //     for (int i=0; i<n ;i++){
    //         cout << arr[i] << " ";
    //     }
    //     cout << endl ;
    //     if(MaxpairwiseProduct_fast(arr) == MaxPairwiseProduct(arr)){
    //         cout << "ok " << endl << MaxpairwiseProduct_fast(arr) ;
    //     }
    //     else{
    //         cout << "problem " << endl << MaxpairwiseProduct_fast(arr) << MaxPairwiseProduct(arr) ;
    //         break;
    //     }
    // }


    int n;
    cin >> n;
    vector<int> numbers(n);
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }
    cout << MaxpairwiseProduct_fast(numbers) << "\n";
    // cout << MaxPairwiseProduct(numbers) << "\n";
    return 0;
}
