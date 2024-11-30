#include<iostream>
using namespace std;

int main(){

    int num;
    int evennum = 0 , oddnum = 0;
    cout << "Enter an integer: ";
    cin >> num;

        if(num%2==0){
            evennum++;
        }else{
            oddnum++;
        

    while(num>0){
        cout << "Enter an integer: ";
        cin >> num;

        if(num%2==0){
            evennum++;
        }else{
            oddnum++;
        }
    }
    
    cout << "#Even numbers = " << evennum-1 << endl;
    cout << "#Odd numbers = " << oddnum;

    return 0;
}