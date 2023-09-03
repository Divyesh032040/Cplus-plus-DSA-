#include<iostream>

#include<algorithm>

#include<string.h>

using namespace std;

int main(){

    string str;

    cin >> str;

    int st=0;

    int en=1;

    int len=1;

    int mxLen=INT_MIN;

    sort(str.begin(),str.end());

    cout << str << endl ;

    while(en<str.size())

    {

        if(str[st] == str[en]){

            len++;

        }

        else{

            len=1;

        }

        mxLen = max(mxLen, len);

        st+=1;

        en+=1;

    }

    return 0;

}