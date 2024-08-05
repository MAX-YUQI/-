#include <stdio.h>  
#include <string.h>  
#include <stdlib.h>  
  
// ����ԭ������  
void reverse_string(char *str, int start, int end);  
  
int main() {  
    char num_str[50];  
    char integer_part[50];  
    char decimal_part[50];  
    char reversed_num[50];  
    int decimal_position;  
    int integer_length, decimal_length;  
  
    // ��ȡ����ĸ�����  
    if (scanf("%[^.].%s", integer_part, decimal_part) != 2) {  
        printf("��������ֲ�����Ҫ��\n");  
        return 1;  
    }  
  
    // ������������Ƿ���������  
    if (atoi(integer_part) < 100 || atoi(integer_part) >= 1000) {  
        printf("��������ֲ�����Ҫ��\n");  
        return 1;  
    }  
  
    // ���С�������Ƿ�ֻ��һλ  
    if (strlen(decimal_part) != 1) {  
        printf("��������ֲ�����Ҫ��\n");  
        return 1;  
    }  
  
    // ��ת�������ֺ�С������  
    integer_length = strlen(integer_part);  
    decimal_length = strlen(decimal_part);  
    reverse_string(integer_part, 0, integer_length - 1);  
    reverse_string(decimal_part, 0, decimal_length - 1);  
  
    // ��Ͻ����ע��С�����λ��  
    sprintf(reversed_num, "%s.%s", decimal_part, integer_part);  
  
    // ������  
    printf("%s\n", reversed_num);  
  
    return 0;  
}  
  
// ��ת�ַ���ָ�������ڵ��ַ�  
void reverse_string(char *str, int start, int end) {  
    char temp;  
    while (start < end) {  
        temp = str[start];  
        str[start] = str[end];  
        str[end] = temp;  
        start++;  
        end--;  
    }  
}
