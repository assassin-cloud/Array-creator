#include<iostream>
using namespace std;

void mainmenu(){
    cout << "====================" << endl;
    cout << "   Array Creator    " << endl;
    cout << "====================" << endl;
    cout << endl;
    cout << "1. Create a array" << endl;
    cout << "2. Exit" << endl;
    cout << "Input:" << endl;
}

void create_display_array(){
    cout << "Input the size of array:" << endl;
    int size {};
    cin >> size;
    if(size <= 0){
        cout << "Invalid Input!" << endl;
    }
    else{
        double* p = new double[size];
        for(int i=0;i<size;i++){
            cout << "Input " << i+1 << " element(integers and decimel supported only)" << endl;
            cin >> p[i];
        }
        cout << "Successfully created!" << endl;
        cout << endl;
        cout << "array you created:" << endl;
        for(int i=0;i<size;i++){
            cout << p[i] << " ,";
        }
        delete[] p;
        p = nullptr;
        cout << endl;
    }
}

void wait(){
    cout << "Type anything:" << endl;
    string anything;
    cin >> anything;
}

int main(){
    while(true){
        mainmenu();
        int userinput {};
        cin >> userinput;
        if(cin.fail()){
            cout << "Invalid Input!" << endl;
            cin.clear();
            cin.ignore(1000, '\n');
        }
        else{
            if(userinput == 1){
                create_display_array();
                wait();
            }
            else if(userinput == 2){
                break;
            }
            else{
                cout << "Invalid Input!" << endl;
                wait();
            }
        }
    }
}
