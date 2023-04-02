#include"unistd.h"
void myrot13 (char c)
{
    int i = 0;
    char *s ="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz\0";
    char *f="NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm\0";
    while (c !=s[i] && s[i])
        ++i;
    if(s[i] == '\0')
        write(1, &c, 1);
    else
        write(1, &f[i], 1);

}
int main(int argc, char const *argv[])
{
    int i = -1;
    if (argv[1])
        while (argv[1][++i])
            myrot13(argv[1][i]);
    return 0;
}
