#include <stdio.h>           //�ļ����� ��ͷ���ļ��� 

void main()      // ��������main) 
{
	int max(int x, int y);
	void mo(); //Ҫ���õĺ������� 
	int a,b,c;					//�������  
	scanf("%d,%d",&a,&b);     //������� a��b ��ֵ 
	c=max(a,b);					//����max����������������ֵ����c 
	printf("max=%d", c);		//���c��ֵ 
}
int max(int x, int y)		//����max����������ֵΪ���Σ�x,yΪ��ʽ���� 
 {
 	int z;
 	if(x>y) z=x;
 	else z=y;
 	return(z);	         //��z��ֵ���أ�ͨ��max���ص��ô� 
 }

  
