#include<bits/stdc++.h> 
using namespace std;  
int main()  
{  
    char str1[256],str2[256],temp[256];  
    int a[256],b[256],c[256];  
    int lena={0},lenb={0},lenc={0};  
    int i; 
  
    cin>>str1>>str2;//���뱻����,�������  
  
    lena=strlen(str1);  
    lenb=strlen(str2);  
    if((lena<lenb)||(lena==lenb&&strcmp(str1,str2)))//���������С�ڼ�����ֵΪ�������߽���  
    {  
        strcpy(temp,str1);  
        strcpy(str1,str2);  
        strcpy(str2,temp); 
        swap(lena,lenb);//����lena,lenb 
        cout<<'-';//���������ͱ�����  
    }  
  
    lena=strlen(str1);
    lenb=strlen(str2);
  
    for(i=0;i<=lena-1;i++)//������str1��������a  
        a[lena-i]=str1[i]-'0';  
    for(i=0;i<=lenb-1;i++)//����str2��������b  
        b[lenb-i]=str2[i]-'0';  
  
    i=1;  
    while(i<=lena||i<=lenb)
    {  
        if(a[i]<b[i])  
        {  
            a[i]+=10;//��λ  
            a[i+1]--;//��һλ��1  
        }  
        c[i]=a[i]-b[i];//��Ӧλ���  
        i++;  
    }  
    lenc=i;  
    while((c[lenc]==0)&&(lenc>1))//ɾ��ǰ��0  
        lenc--;  
    
    for(i=lenc;i>=1;i--)//������� 
        cout<<c[i];
    cout<<endl;
    return 0;
}
