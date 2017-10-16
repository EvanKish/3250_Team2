#include "definitions.h"
#include "headers.h"
float input(char*inname)
{
	float key;
	char temp[9999];
	
	do{
	printf("%s",inname);
	 if(!scanf("%f",&key)){
		scanf("%s",&temp);//recieve temp
	      	printf("Please try again!\n");
	}
	else{
		return key;
	}
	}while(1);	 
}

float inputAry(char*inname,int num)
{
	float key;
	char temp[9999];

	do{
	printf("%s[%d]: ",inname,num+1);
	 if(!scanf("%f",&key)){
		scanf("%s",&temp);
	      	printf("Please try again!\n");
	}
	else{
		return key;
	}
	}while(1);	 
}

float plus(float adder,float addin)
{
	float result;
	result=adder+addin;
	return result;
}

float minus(float miner,float minin)
{
	float result;
	result=miner-minin;
	return result;
}

float mult(float multer,float multin)
{
	float result;
	result=multer*multin;
	return result;
}

float divind(float divider,float dividin)
{
	float result;
	result=divider/dividin;
	return result;
}

int factorial(int term)
{

	if(term==0){
		return 1;
	}

	return term*factorial(term-1);
}

int fib(int term)
{
	if(term==1){
		return 0;
	}
	if(term==2){
		return 1;
	}
	return fib(term-1)+fib(term-2);
}

float power(float base,int pow)
{
	int i;
	float mem=1;
	for(i=0;i<pow;i++){
		mem*=base;
	}
	return mem;
}

float sine(float radius)
{
	float val,sin;
		val=radius*(PI/180);
		sin=val-(power(val,3)/factorial(3))+(power(val,5)/factorial(5))-(power(val,7)/factorial(7));
	return sin;
}

float cosine(float radius)
{
	float val,cos;
		val=radius*(PI/180);
		cos=1-(power(val,2)/factorial(2))+(power(val,4)/factorial(4))-(power(val,6)/factorial(6));
	return cos;
}

int spprint(char*screen,char*sym,int ini,int res)
{
	printf("%s %d%s = %d\n",screen,ini,sym,res);
	
return 0;
}

float spprintf(char*screen,char*sym,float ini,float res)
{
	printf("%s %.4f%s = %.4f\n",screen,ini,sym,res);

return 0;
}

float print(char*screen,char*sym,float ini,float upt,float res)
{
	printf("%s %.4f %s %.4f = %.4f\n",screen,ini,sym,upt,res);

return 0;
}
float Aryprint(char*screen,float ans)
{
	printf("%s : %.4f\n",screen,ans);

return 0;
}








