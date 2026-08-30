#include<iostream>
using namespace std;

int main(){
    int size;
    string name;
    char input;
    cout << "Type y to continue or q to quit: " << endl;
    cin >> input;
    while(input == 'y'){
    cout << "Enter name for your array: " << endl;
    cin >> name;
    cout << "how big do you want the array" << endl;
    cin >> size;
    int *p = new int[size];
    cout << "Enter " << size << " numbers: " << endl;
    for(int i=0;i<size;i++){
        cin >> p[i];
    }
    cout << "Here is the array you created: ";
     cout << name << " = " ;
    for(int i=0;i<size;i++){
        cout << p[i] << " , ";
    }
    delete[] p;
    p = nullptr;
    cout << "Type y to continue or q to quit: " << endl;
    cin >> input;
    }
}
