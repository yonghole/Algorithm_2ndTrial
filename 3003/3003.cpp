#include <iostream>
#include <vector>

using namespace std;

int main(){
    int tmp;
    int arr[6] = {1,1,2,2,2,8};
    for(int i = 0 ; i < 6 ; i++){
       cin >> tmp;

       cout << arr[i] - tmp << " ";
    }

    cout << endl;
}