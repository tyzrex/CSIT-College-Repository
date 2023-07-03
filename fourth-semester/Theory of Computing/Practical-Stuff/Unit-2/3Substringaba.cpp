#include<iostream>

using namespace std;

bool check_string(string str){
    for(char c : str){
        if(c != 'a' && c != 'b'){
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
                state = (c == 'a') ? 'B' : 'A';
                break;
            case 'B':
                state = (c == 'a') ? 'B' : 'C';
                break;
            case 'C':
                state = (c == 'a') ? 'D' : 'A';
                break;
            case 'D':
                state = (c == 'a') ? 'D' : 'D';
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