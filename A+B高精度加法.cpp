#include<bits/stdc++.h> 
using namespace std;  
int main()  
{  
    string str1,str2;  
    int a[210],b[210],c[210];  
    int len1,len2;  
    int i;  
  
    cin>>str1;  
    cin>>str2;  
    len1=str1.length();  
    len2=str2.length();  
  
    //��0��������֤�����ַ�����ͬ 
    if(len1<len2)  
        for(i=1;i<=len2-len1;i++)  
           str1="0"+str1;  
    else  
        for(i=1;i<=len1-len2;i++)  
           str2="0"+str2;  
  
    len1=str1.length();  
    len2=str2.length();  
  
    for(i=0;i<=len1-1;i++)//����str1��������a  
        a[len1-i]=str1[i]-'0';  
    for(i=0;i<=len2-1;i++)//����str2��������b  
        b[len2-i]=str2[i]-'0';  
  
    int x=0;  
    int lenc=1;  
    while((lenc<=len1)||(lenc<=len2))  
    {  
        c[lenc]=a[lenc]+b[lenc]+x;//��iλ��Ӳ����ϴεĽ�λ  
        x=c[lenc]/10;//���λ��λ  
        c[lenc]%=10;//�洢��iλ��ֵ  
        lenc++;//λ���±�  
    }  
  
    //������߽�λ 
    c[lenc]=x;  
    while(c[lenc]==0)  
        lenc--;
  
    for(i=lenc;i>0;i--)//�������  
        cout<<c[i];  
    cout<<endl;  
  
    return 0;  
}
