#include<iostream>
using namespace std;
int indexOf1(char s1[], char s2[]) {
    if (s2[0] == 0) {
        return 0;
    }
    else {
        for (int i = 0; s1[i]; i++) {
            int k = i, j = 0;
            for (; s2[j];++k,++j) {
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
    int size1, size2;
    char s1[100];
    char s2[100];
    cout << "ÇëÊäÈë×Ö·û´®1µÄ³¤¶ÈÓë×Ö·û£º";
    cin >> size1;
    for (int i = 0; i < size1; i++) {
        cin >> s1[i];
    }
    cout << "ÇëÊäÈë×Ö·û´®2£º";
    cin >> s2;
    cout << endl;
    int n = indexOf1(s1,s2);
    cout << "location: " << n << endl;
    return 0;

}