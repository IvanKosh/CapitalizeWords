/* 
 * File:   main.cpp
 * Author: bat
 *
 * Created on 17 Сентябрь 2015 г., 17:30
 */

#include <iostream>
#include <fstream>
using namespace std;
int main(int argc, char *argv[]) {
    ifstream stream(argv[1]);
    string line;
    short i, l;
    bool need;
    while (getline(stream, line)) {
        l = line.length();
        need = false;
        if(96 < line[0] && line[0] < 123) {
            line[0] -= 32;
        }
        
        for (i = 1; i < l; i++) {
            if (need) {
                if (96 < line[i] && line[i] < 123) {
                    line[i] -= 32;
                }
                need = false;
            }
            if (line[i] == ' ') {
                need = true;
            }
        }
        cout << line << endl;
    }
    return 0;
}