#include<iostream>  
#include<cstring>  
using namespace std;  
int a[100],b[100],c[100];  
int compare(int a[],int b[])//�Ƚ�a��b����a>bΪ1����a<bΪ-1����a=bΪ0  
{  
    int i;  
    if(a[0]>b[0])  
        return 1;  
    if(a[0]<b[0])  
        return -1;  
    for(i=a[0];i>0;i--)//�Ӹ�λ����λ�Ƚ�  
    {  
        if(a[i]>b[i])  
            return 1;  
        if(a[i]<b[i])  
            return -1;  
    }  
    return 0;  
}  
  
void subduction(int a[],int b[])//����a=a-b  
{  
    int flag;  
    int i;  
  
    flag=compare(a,b);  
    if(flag==0)//���  
    {  
        a[0]=0;  
        return;  
    }  
    if(flag==1)//����  
    {  
        for(i=1;i<=a[0];i++)  
        {  
            if(a[i]<b[i])//���������Ͻ�λ  
            {  
                a[i+1]--;  
                a[i]+=10;  
            }  
            a[i]-=b[i];  
        }  
        while(a[0]>0&&a[a[0]]==0)//ɾ��ǰ��0  
            a[0]--;  
        return;  
    }  
}  
int main()  
{  
    char str1[100],str2[100];  
    int i,j;  
  
    memset(a,0,sizeof(a));  
    memset(b,0,sizeof(b));  
    memset(c,0,sizeof(c));  
  
    cin>>str1>>str2;  
    a[0]=strlen(str1);//a[0]�洢��1��λ��  
    b[0]=strlen(str2);//b[0]�洢��2��λ��  
    for(i=1;i<=a[0];i++)  
        a[i]=str1[a[0]-i]-'0';  
    for(i=1;i<=b[0];i++)  
        b[i]=str2[b[0]-i]-'0';  
  
  
    int temp[100];  
    c[0]=a[0]-b[0]+1;  
    for(i=c[0];i>0;i--)  
    {  
        memset(temp,0,sizeof(temp));  
  
        for(j=1;j<=b[0];j++)//��i��ʼ�ĵط�����������b������temp  
            temp[j+i-1]=b[j];  
        temp[0]=b[0]+i-1;  
  
        while(compare(a,temp)>=0)//�ü���ģ��  
        {  
            c[i]++;  
            subduction(a,temp);  
        }  
    }  
  
    while(c[0]>0&&c[c[0]]==0)//ɾ��ǰ��0  
        c[0]--;  
  
//    cout<<"��Ϊ��";  
    if(c[0]==0)//������  
        cout<<0<<endl;  
    else  
    {  
        for(i=c[0];i>0;i--)  
            cout<<c[i];  
        cout<<endl;  
    }  
  
//    cout<<"����Ϊ��";  
    if(a[0]==0)//�������  
        cout<<0<<endl;  
    else  
    {  
        for(i=a[0];i>0;i--)  
            cout<<a[i];  
        cout<<endl;  
    }  
  
    return 0;  
} 
