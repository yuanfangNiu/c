#include <stdio.h>           //文件包含 （头部文件） 

void main()      // 主函数（main) 
{
	int max(int x, int y);
	void mo(); //要调用的函数声明 
	int a,b,c;					//定义变量  
	scanf("%d,%d",&a,&b);     //输入变量 a，b 的值 
	c=max(a,b);					//调用max函数，将函数返回值赋给c 
	printf("max=%d", c);		//输出c的值 
}
int max(int x, int y)		//定义max函数，函数值为整形，x,y为形式参数 
 {
 	int z;
 	if(x>y) z=x;
 	else z=y;
 	return(z);	         //将z的值返回，通过max带回调用处 
 }

  
