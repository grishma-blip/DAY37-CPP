#include <iostream>
#include <string>
using namespace std;
int main()
{
    char str1[10] = "hello";
    char str2[10] = "world";
    char str3[10] ;
    int len;
    strcpy( str3, str1);
    cout << "strcpy(str3, str1) : " << str3 << endl;
    strcpy( str1, str2);
    cout << "strcpy(str1, str2) : " << str1 << endl;
    len = strlen(str1);
    cout << "strlen(str1) : " << len << endl;
    return 0;
}