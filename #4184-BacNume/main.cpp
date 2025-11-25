#include <iostream>
#include <string.h>

void FNume(char s[], char id[])
{
    char *p = strchr(s, ' ');
    strcpy(id, p+1);
    strcat(id, "2022\0");

}

int main()
{
    char s[51], id[51];
    std::cin.getline(s, 51);
    FNume(s, id);
    std::cout<< id;
    return 0;
}
