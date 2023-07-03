#include<iostream>

using namespace std;

bool check_string(string str){
    for(char c : str){
        if(c != '0' && c != '1'){
            return false;
        }
    }
    return true;
}

bool is_accepted(string str){
    char state = 'A';
    for(char c : str){
        switch(state){
            case 'A':
                state = (c == '0') ? 'B' : 'A';
                break;
            case 'B':
                state = (c == '0') ? 'B' : 'C';
                break;
            case 'C':
                state = (c == '0') ? 'B' : 'D';
                break;
            case 'D':
                state = (c == '0') ? 'D' : 'D';
                break;
        }
    }
    return state == 'D';
}

int main(){
    string str;
    char choice;
    do{
        cout << "Enter a string: ";
        cin >> str;
        if(check_string(str)){
            cout << (is_accepted(str) ? "Accepted" : "Not Accepted") << endl;
        }else{
            cout << "Invalid Input" << endl;
        }
        cout << "Do you want to continue? (y/n): ";
        cin >> choice;
    }while(choice == 'y');
    return 0;
}

