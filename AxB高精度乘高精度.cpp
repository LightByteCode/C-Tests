#include<bits/stdc++.h>
using namespace std;
int main(){
	string s1,s2;
	int a[1000]={0},b[1000]={0},c[10000]={0};
	cin>>s1>>s2;
	int la=s1.size(),lb=s2.size();
	//ת�������ֵ��Ŵ������� 
	for(int i=1;i<=la;i++)
        a[i]=s1[la-i]-'0';
        
    for(int i=1;i<=lb;i++)
        b[i]=s2[lb-i]-'0';
    //���� 
    for(int i=1;i<=la;i++){
    	int x=0;//��Ž�λ  
    	for(int j=1;j<=lb;j++){//�Գ���ÿһλ����  
    		c[i+j-1]=a[i]*b[j]+x+c[i+j-1];//��ǰ��+�ϴγ˻���λ+ԭ��  
    		x=c[i+j-1]/10;
    		c[i+j-1]%=10;
    	}
    	c[i+lb]=x;//��λ 
	}
	int lc=la+lb;   //λ�������la+lc��������la+lc-1 
    while(c[lc]==0&&lc>1)
    	lc--;
	for(int i=lc;i>=1;i--) //������� 
        cout<<c[i];
    cout<<endl;
	return 0;
}
