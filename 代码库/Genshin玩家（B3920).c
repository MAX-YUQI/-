//#include <stdio.h>  
//#include <string.h>  
//  
//int main() {  
//    char s[1024]; // ����������ַ������ᳬ��1023���ַ���Ϊ�˱���һ��λ�ø��ַ���������'\0'��  
//    int ans = 0;  
//  
//    // ʹ��fgets����getline����ΪC���Ա�׼����û��getline����  
//    if (fgets(s, sizeof(s), stdin) != NULL) {  
//        // ȥ���ַ���ĩβ���ܴ��ڵĻ��з�  
//        s[strcspn(s, "\n")] = 0;  
//  
//        for (int i = 0; i < strlen(s); i++) {  
//            if (strncmp(&s[i], "Genshin", 7) == 0) {  
//                for (int j = i; j < strlen(s); j++) {  
//                    if (strncmp(&s[j], "player", 6) == 0) {  
//                        ans++;  
//                        break; // �ҵ�"player"�������ڲ�ѭ������Ϊ����Ҫ��������  
//                    }  
//                }  
//            }  
//        }  
//    }  
//  
//    printf("%d\n", ans);  
//    return 0;  
//}


#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    string  s;
    int ans=0;
    getline(cin,s);
    for (int i=0;i<s.size();i++){
        if (s.substr(i,7)=="Genshin") {
            for (int j=i;j<s.length();j++){
                if(s.substr(j,6)=="player") {
                    ans++;
                }
            }
        }
    }
    cout<<ans;
    return 0;
}
