//Task2
#include<iostream>
#include<fstream>
using namespace

int s;
int l;
char m[s][l];

int x;
int y;

int loadm(char m, file.txt) {
    ifstream fin("file.txt");
    fin>>m;
    fin.close("file.txt");
    return m;
}

int findcenterm(char m, int x, int y) {
    int cx;
    int cy;
    int count;
    x=0;
    y=0;
    cx=0;
    cy=0;
    count=0;

    for(i=0; i<s; i++) {
        for(j=0; j<l; j++) {
            if(m[i][j])=1{
                count++;
                cx=cx+1;
                cy=cy+1;
                return cx;
                return cy;
                return count;
            }
        }
    }

    x=cx/count;
    y=cy/count;
    return x;
    return y;
}

int test() {
    char m[6][6]={000000011100001100000010000000};

    int findcenterm(char m, int x, int y);

    cout<<"x: "<<x<<endl;
    cout<<"y: "<<y<<endl;
    return 0;
}

int main() {
   loadm(char m, file.txt);
   findcenterm(char m, int x, int y);
   test();

   return 0;
}