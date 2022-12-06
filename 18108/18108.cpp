#include <iostream>
#include <string>

using namespace std;
int main(){
    string inpt;
    int inpt_num = 0;
    
    cin >> inpt;
    inpt_num = stoi(inpt);
    inpt_num -= 543;
    cout << inpt_num << endl;

}