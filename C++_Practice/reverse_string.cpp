#include <stdio>
using namespace std;
void reverse(string s)
{
    if (s.length() == 0)
    {
        return;
    }
    if (s[0] == 'e' || s[0] == 'f' || s[0] == 'g' || s[0] == 'h' || s[0] == 'i' || s[0] == 'j' || s[0] == 'k' || s[0] == 'l' || s[0] == 'm' || s[0] == 'n' || s[0] == 'o' || s[0] == 'p' || s[0] == 'q' || s[0] == 'r')
    {
           string ros = s.substr(1);
        reverse(ros);
        printf("%s",s[0]);
    }
    else
    {
     printf("%s", s[0]);
        reverse(s.substr(1));
    }
}
int main()
{
    string s;
    scanf("%s",&s);
    reverse(s);
    return 0;
}