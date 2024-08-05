#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    int square[n][n];
    memset(square, 0, sizeof(square)); // ��ʼ���÷�Ϊ0

    int row = 0, col = n / 2; // �ӵ�һ���м��λ�ÿ�ʼ
    for (int num = 1; num <= n * n; num++) {
        square[row][col] = num;
        int new_row = (row - 1 + n) % n; // �����µ���
        int new_col = (col + 1) % n; // �����µ���
        if (square[new_row][new_col]) { // ����µ�λ���Ѿ������
            row = (row + 1) % n; // ������������һ��
        } else { // ����
            row = new_row; // ������
            col = new_col; // ������
        }
    }

    // ��ӡ�÷�
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", square[i][j]);
        }
        printf("\n");
    }

    return 0;
}
