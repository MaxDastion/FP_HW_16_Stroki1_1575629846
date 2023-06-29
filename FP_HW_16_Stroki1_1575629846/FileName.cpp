#include<iostream>
#include<string>
using namespace std;
int mystrcmp(const char* str1, const char* str2) {
    while (*str1 || *str2) {
        if (*str1 > *str2) {
            return 1;
        }
        else if (*str1 < *str2) {
            return -1;
        }
        str1++;
        str2++;
    }
    return 0;
}
int StringToNumber(char* str) {
    int result = stoi(str);
    return result;
}
char* NumberToString(int number) {
    std::string str = std::to_string(number);
    char* res = new char[str.size() + 1];
    strcpy_s(res, str.size() + 1, str.c_str());
    return res;
}
char* Uppercase(char* str1) {
    int i = 0;
    while (str1[i]) {
        if (str1[i] >= 'a' && str1[i] <= 'z') {
            str1[i] = 'A' + (str1[i] - 'a');
        }
        i++;
    }
    return str1;
}
char* Lowercase(char* str1) {
    int i = 0;
    while (str1[i]) {
        if (str1[i] >= 'A' && str1[i] <= 'Z') {
            str1[i] = 'a' + (str1[i] - 'A');
        }
        i++;
    }
    return str1;
}
char* mystrrev(char* str) {
    int len = strlen(str);
    char* res = new char[len + 1];
    for (int i = 0; i < len; i++) {
        res[i] = str[len - i - 1];
    }
    res[len] = '\0';
    return res;
}