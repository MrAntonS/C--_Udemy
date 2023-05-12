#include <iostream>

using namespace std;

int main() {
    int fav_num;
    while (true){
        cout << "Pick a number between 1 and 100" << endl;
        cin >> fav_num;
        if (fav_num > 100 || fav_num < 1) {
            cout << "No the number should be in 1 to 100 range!!!!" << endl;
        } else {
            break;
        }
    }
    cout << "You won't believe me, but it's my favorite number as well, " << fav_num << "!!!" << endl;
    return 0;
}