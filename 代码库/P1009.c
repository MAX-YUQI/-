#include<stdio.h> // 引入标准输入输出库  
  
int main() // 主函数开始  
{  
    int i,a[1005]={0},b[1005]={0},n,j; // 声明变量。其中a和b是数组，用于存储阶乘结果的每一位数字  
    scanf("%d",&n); // 从标准输入读取一个整数n  
  
    a[0] = b[0] = 1; // 初始化数组a和b的第一个元素为1，因为任何数的0次方都是1，所以这里表示的是结果的最高位是1（对于连乘的起始）  
  
    for(i=2;i<=n;i++){ // 从2开始循环到n，计算每一个数的阶乘并累加到a数组中  
        for(j=0;j<100;j++) // 对于数组b中的每一位，都乘以当前的i  
            b[j] *= i;  
  
        // 接下来的循环是为了处理b数组中的每一位，如果某一位大于9，则将其分解为十位和个位  
        for(j=0;j<100;j++){  
            if(b[j]>9){  
                b[j+1] += b[j]/10; // 十位加到下一位  
                b[j] %= 10; // 个位保留在本位  
            }  
        }  
  
        // 将b数组中的结果累加到a数组中  
        for(j=0;j<100;j++){  
            a[j] += b[j];  
            if(a[j]>9) // 如果a的某一位大于9，则进行同样的处理  
            {  
                a[j+1] += a[j]/10;  
                a[j] %= 10;  
            }  
        }  
    }  
  
    // 打印a数组中的值，但跳过前面的0  
    for(i=100;i>=0&&a[i]==0;i--); // 找到a数组中第一个非0的位置  
    for(j=i;j>=0;j--){ // 从找到的位置开始逆序打印每一位  
        printf("%d",a[j]);  
    }  
  
    return 0; // 主函数返回0，表示程序正常结束  
}
