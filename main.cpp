#include <iostream>
#include <string.h>
#include <fstream>

using namespace std;

ifstream in("date.in");
ofstream out("date.out");

int main()
{
    char s[1000];
    while(in.getline(s,1000)){
        for(int i=0;i<strlen(s);i++){
            if(s[i]!='{' && s[i]!='}')out<<s[i];
            else {
                if(s[i]=='{')out<<"begin";
                else out<<"end";
            }
        }
        out<<"\n";
    }
}
