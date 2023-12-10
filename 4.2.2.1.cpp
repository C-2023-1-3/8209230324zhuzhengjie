#include<iostream>
using namespace std;
int indexOf(char *s1, char* s2) {
    if (s2[0] == 0) {
        return 0;
    }
    else {
        for (int i = 0; s1[i]; i++) {
            int k = i, j = 0;
            for (; s2[j]; ++k, ++j) {
                if (s1[k] != s2[j]) {
                    break;
                }
            }
            if (s2[j] == 0) {

                return i;
            }
        }
        return -1;
    }
}
int main() {
    char s1[40];
    char s2[40];
    cout << "s1= ";
    cin >> s1;
    cout << endl;
    cout << "s2= ";
    cin >> s2;
    int n = indexOf(s1, s2);
    cout << "location: " << n << endl;
    return 0;

}