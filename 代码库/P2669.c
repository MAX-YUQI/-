#include <stdio.h>  
  
int main() {  
    int k, n = 1, total = 0, current_sum = 0, days = 0;  
  
    scanf("%d", &k);  
  
    while (days < k) {  
        // ���㵱ǰ���ڵĽ������  
        current_sum = n * n;  
  
        // ������ϵ�ǰ���ڵĽ�����ᳬ��k����ֻ�ۼӲ�������  
        if (days + n > k) {  
            total += (k - days) * n;  
            break;  
        }  
  
        // �����ۼ��������ڵĽ����  
        total += current_sum;  
        days += n;  
        n++; // ������һ������  
    }  
  
    printf("%d\n", total);  
  
    return 0;  
}
