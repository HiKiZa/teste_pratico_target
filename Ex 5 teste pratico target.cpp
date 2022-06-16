#include <iostream>
#include <string>

using namespace std;

int main (){
    string s("teste");
	string nova("");
    //cin >> s;
    for(int i=0; i<s.size(); i++)
        nova= s[i] + nova;
    cout << nova << endl;
    return 0;
}
