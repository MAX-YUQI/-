#include <stdio.h>  
#include <ctype.h>  
#include <string.h>  
  
int main() {  
    char str[101];
    printf("������һ�����Ȳ�����100���ַ������������ո�: ");  
    fgets(str, sizeof(str), stdin);
  
    str[strcspn(str, "\n")] = 0;  
  
    for (int i = 0; str[i] != '\0'; i++) {  
        str[i] = toupper(str[i]);  
    }  

    printf("ת������ַ���: %s\n", str);  
  
    return 0;  
}
