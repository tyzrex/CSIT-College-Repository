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
