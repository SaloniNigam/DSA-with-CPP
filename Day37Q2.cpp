#include<iostream>
#include<string>
using namespace std;

//clockwise function
void rotateclockwise (string &s){
    char c = s[s.size()-1];
    int index = s.size()-2;
    while(index >= 0) {
        s[index+1] = s[index];
        index--;
    }
    s[0] = c;
}

//anticlockwise function
void rotateanticlockwise (string &s){
    char c = s[0];
    int index = 1;
    while(index < s.size()) {
        s[index-1] = s[index];
        index++;
    }
    s[s.size()-1] = c;
}

bool isRotated(string& str1, string& str2) {

    // check size
    if (str1.size()!= str2.size())
        return false;

    if(str1 == str2)
        return true;

    // 2 baar clockwise
    string clockwise = str1;
    rotateclockwise(clockwise);
    rotateclockwise(clockwise);
    if(clockwise == str2)
        return true;

    // 2 baar anticlockwise
    string anticlockwise = str1;
    rotateanticlockwise(anticlockwise);
    rotateanticlockwise(anticlockwise);
    if(anticlockwise == str2)
        return true;

    return false;
}

int main() {
    string s1, s2;

    cout << "Enter first string: ";
    cin >> s1;

    cout << "Enter second string: ";
    cin >> s2;

    if(isRotated(s1, s2))
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}