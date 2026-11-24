//#include <stdio.h>

//int main()
//{
//	int x;
//	
//	scanf("%d", &x);
//	
//	if(x>=90){
//		printf("优" );
//	}else if(x >= 80){
//		printf("良");
//	}else if(x >= 60){
//		printf("合格");
//	}else{
//		printf("不合格");
//	}
//	return 0;
//}
	
//	#include <stdio.h>
//	
//	int main()
//	{
//	int i;
//	int n=100;
//	
//	for(i=1; i<=n;i++){
//		if(i % 2==0){
//			printf(" %d ", i);
//		}
//		
//	}
//
//	return 0;} 


//#include <stdio.h>

//int main(){
//	int s=0,i,a[100],m,n;
//	
//	scanf("%d",&n);
//	for( i =0; i<n; i++){
//		scanf("%d",&a[i] );
//	} 
//	scanf("%d",&m);
//	for(i =0;i<n;i++){
//	if(a[i]==m){
//		s++;
//	   }	
//		
//	}
//	printf("%d", s);
//    return 0;
//
//}
//int main(){
//	int a,b,c;
//	scanf("%d %d %d",&a,&b,&c);
//	printf("%8d %8d %8d", a,b,c);
//	return 0;
//} 
//

//int main(){
//	float a;
//	scanf("%f",&a);
//	printf("%.3f",a);
//	return 0;
//}

//#include <stdio.h>
//int main(){
//	double a;
//	scanf("%lf" ,&a);
//	
//	printf("%f\n" "%.5f\n" "%e\n" "%g\n",a, a ,a, a);
//	return 0;
//} 
//
//#include <stdio.h>
//int main(){
//	char a;
//	int b;
//	float c;
//	double d;
//	scanf("%c",&a);
//	scanf("%d",&b);
//	scanf("%f",&c);
//	scanf("%lf",&d);
//	printf("%c %d %.6f %.6lf",a,b,c,d);
//	
//	return 0;
//}
//#include <stdio.h>
//int main(){
//
//
//printf("                ********\n");
//printf("               ************\n");
//printf("               ####....#.\n");
//printf("             #..###.....##....\n");
//printf("             ###.......######              ###                 ###           ###           ###\n");
//printf("                ...........               #...#               #...#         #...#         #...#\n");
//printf("               ##*#######                 #.#.#               #.#.#         #.#.#         #.#.#\n");
//printf("            ####*******######             #.#.#               #.#.#         #.#.#         #.#.#\n");
//printf("           ...#***.****.*###....          #...#               #...#         #...#         #...#\n");
//printf("           ....**********##.....           ###                 ###           ###           ###\n");
//printf("           ....****    *****....\n");
//printf("             ####        ####\n");
//printf("           ######        ######\n");
//printf("##############################################################              ##################################\n");
//printf("#...#......#.##...#......#.##...#......#.##------------------#              #...#......#.##------------------#\n");
//printf("###########################################------------------#              ###############------------------#\n");
//printf("#..#....#....##..#....#....##..#....#....#####################              #..#....#....#####################\n");
//printf("##########################################    #----------#                  ##############    #----------#\n");
//printf("#.....#......##.....#......##.....#......#    #----------#                  #.....#......#    #----------#\n");
//printf("##########################################    #----------#                  ##############    #----------#\n");
//printf("#.#..#....#..##.#..#....#..##.#..#....#..#    #----------#                  #.#..#....#..#    #----------#\n");
//printf("##########################################    ############                  ##############    ############\n");
//return 0;
//}
//
//#include <stdio.h>
//int main(){
//	printf("%d",sizeof("Hellow World!"));
//	return 0;
//
//}

//#include <stdio.h>
//int main(){
//	int a;
//	short b;
//	printf("%d %d",sizeof(int), sizeof(short));
//} 


//#include <stdio.h>
//int main(){
//	float a;
//	double b;
//	
//	printf("%d %d",sizeof(float),sizeof(double) );
//	return 0;
//}


//#include <stdio.h>
//int main(){
//	int a,b,c;
//	scanf("%d %d",&a,&b);
//	c=a+b;
//	printf("%d",c);
//	
//	return 0;
//}


//#include <stdio.h>
//int main(){
//	int a,b,c,d;
//	
//	scanf("%d %d %d",&a,&b, &c);
//	d=(a+b)*c;
//	printf("%d",d);
//	
//	return 0;
//}
//
//#include <stdio.h>
//int main(){
//	int n,x,y,s;
//	scanf("%d %d %d",&n,&x,&y);
//	if(y%x==0){
//		s=n-y/x;
//	} else{
//			s=n-y/x-1;
//	}
//	if(s<0){
//		s=0;
//	}
//	printf("%d",s);
//	return 0;
//	} 

//#include <stdio.h>
//int main(){
//	long int a,b;
//	scanf("%ld %ld",&a,&b);
//	printf("%ld",a*b);
//	return 0;
//	} 


//#include <stdio.h>
//int main(){
//	float f;
//	int a;
//	scanf("%f",&f);
//	
//	a=(int)f;
//	printf("%d",a);
//	return 0;
//}

//#include <stdio.h>
//int main(){
//	int a,b;
//	scanf("%d %d",&a,&b);
//	
//	printf("%d %d",a/b, a%b);
//	return 0;
//}

//
//#include <stdio.h>
//int main(){
//	int N;
//	
//	scanf("%d",&N);
//	if(N>0){
//		printf("positive");
//		
//	    }else if(N==0){
//		printf("zero");
//	    }else{
//	    	printf("negative");
//		}
//		
//	return 0;
//
//}


//#include <stdio.h>
//int main(){
//	double a;
//	scanf("%lf",&a);
//	if(a>=0){
//	printf("%.2f",a);
//	}else{
//		printf("%.2f",-a);
//	}
//	return 0;
//}



//#include <stdio.h>
//int main(){
//	int a;
//	scanf("%d",&a);
//	
//	if(a%2!=0){
//		printf("odd");
//	}else{
//		printf("even");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main(){
//	long long a,b;
//	scanf("%lld %lld",&a,&b);
//	if(a>b){
//		printf(">"); 
//	}else if(a==b){
//		printf("=");
//	}else{
//		printf("<");
//	}
//
//}


//#include <stdio.h>
//int main(){
//	int a;
//	scanf("%d",&a);
//	if((a%4==0 && a%100!=0) || a%400==0){
//		
//		printf("366");
//	}else{
//		printf("365");
//	}
//
//return 0; 
//}




//#include <stdio.h>
//int main(){
//	char c;
//	scanf("%c",&c);
//	printf("%d",c);
//	
//	
//	
//	return 0;
//}

//#include <stdio.h>
//int main(){
//	int a;
//	scanf("%d",&a);
//	int x1=a%10;
//	int x2=a/10%10;
//	int x3=a/100%10;
//	
//	printf("%d%d%d",x1,x2,x3);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int x, y;
//	char ch;
//	scanf("%d %d %c",&x,&y,&ch);
//	if(ch!='+' && ch!='-' && ch!='/' && ch!='*'){
//		printf("Invalid operator!");
//	}else{
//		if(ch=='+')printf("%d",x+y);
//		if(ch=='-')printf("%d",x-y);
//		if(ch=='*')printf("%d",x*y);
//		if(ch=='/'){
//			if(y==0){
//				
//				printf("Divided by zero!");
//			}else{
//				printf("%d",x/y);
//			}
//			
//		}
//	}
//	
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//	float temp,sum=0.0;
//	int n,x;
//	scanf("%d",&x);
//	
//	for(n=1;n<=x;n++){
//		
//		scanf("%f",&temp);
//		sum=sum+temp;
//	}
//	sum=sum/x;
//	printf("%.4f",sum);
//
//	
//    return 0;
//}


//#include <bits/stdc++.h>
//using namespace std;
//int main(){
//	int n;
//	cin>>n;
//	
//	double m=1.0,sum=0.0;
//	
//	for(int i=1;i<=n;i++){
//		m=m/i;
//		sum+=m;
//	}
//	printf("%.10f",sum+1);
//	return 0;
//}


//#include <stdio.h>
//int main(){
//	
//int length; 
//char Num[] = {"电子协会 ->DZXH -> 207 "};
//
//printf("length=%zu",sizeof(Num)); 
//return 0;
//}




//void Delay(unsigned int xms)
//{
//	unsigned char data i, j;
//	while(xms--)
//	{
//		i = 2;
//		j = 199;
//		do
//		{
//			while (--j);
//		} while (--i);
//	
//	}
//	
//}
//
#include <stdio.h>
int main(){
	printf("扣1复活老大\n");
	int a;
	scanf("%d",&a);
	if(a==1){
		printf("复活成功"); 
	}else{
		printf("复活失败");
	}
	return 0; 
}

//#include <stdio.h>
//int main(){
//	int i=0;
//	int count=0;
//	int a,b,min,c;
//	scanf("%d %d",&a,&b);
//	int bells;
//	if(a<b){
//		min=a;
//	}else{
//		min=b;
//	}
//	c=min*12;
//		
//	for(i=0;i<c;i++){
//		
//		if(i%a==0 && i%b==0){
//			count++;
//		}
//		
//	} 
//	bells=24-count;
//	printf("bells=%d",bells);
//	
//	return 0;	
//} 



//#include <stdio.h>
//int main(){
//	int a,b,c,t;
//	scanf("%d%d%d",&a,&b,&c);
//	if(a>b)
//	{
//		t=a;
//		a=b;
//		b=t;	
//    }
//    	if(a>c)
//	{
//		t=a;
//		a=c;
//		c=t;	
//    }
//    	if(b>c)
//	{
//		t=b;
//		b=c;
//		c=t;	
//    }
//
//
//	printf("%d,%d,%d",a,b,c);
//
//return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a,b,c,t,max;
//	scanf("%d%d%d",&a,&b,&c);
//	if(a>b)
//	{
//		t=a;
//	}else{
//		t=b;
//	}
//	if(c>t)
//	{
//		max=c;
//	}else{
//		max=t;
//	}
//	printf("%d",max);
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	float a,b,x;
//	scanf("%f%f",&a,&b);
//	if(fabs(a)<1e7){
//		a=0;
//	}
//	if(fabs(b)<1e7){
//		b=0;
//	}
//	if(a!=0)
//	{
//		x=-b/a;
//		printf("%.3f",x);
//	}
//	
//	if(a==0 && b!=0){
//		printf("no solution");
//	}
//	if(a==0 && b==0){
//		printf("Infinitely solutions");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	if(n%2==0){
//		printf("Even\n");
//	}else{
//		printf("Odd\n");
//		}
//		return 0;
//	}

//#include <stdio.h>
//int main()
//{
//	int a ,b,t;
//	scanf("%d%d",&a,&b);
//	if(a>b){
//		t=a;
//		a=b;
//		b=t;
//	}
//		printf("%d %d\n",a,b);
//	return 0;
//}




//#include<stdio.h>
//int main()
//{
//int y,m,d;
//scanf("%d-%d-%d",&y,&m,&d);
//if(y<2021||(y==2021&&m<9)||(y==2021&&m==9&&d<=9))
//{
//printf("no");
//}
//else{
//if((y%4==0&&y%100!=0)||y%400==0)
//{
//if(m==2)
//{
//	if(d>=1&&d<=29)
//	{
//		printf("yes");
//	}
//	else{
//		printf("no");
//	}
//}  
//}
//else{
//	if(m==2)
//	{
//		if(d>=1&&d<=28)
//		{
//				printf("yes");
//		}
//	else  {
//		printf("no");
//	}
//	} 
//}
//if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
//{
//	if(d>=1&&d<=31)
//	{
//		printf("yes");
//	 } 
//	 else{
//	 	printf("no");
//	 }
// } 
// if(m==4||m==6||m==9||m==11)
// {
// 	if(d>=1&&d<=30)
// 	{
// 			printf("yes");
//	 }
//	 else{
//	 		printf("no");
//	 }
//}
//}
//    if(m<1||m>12)
//    {
//        printf("no");
//    }
// return 0;
//}

//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	double a,b,x;
//	scanf("%lf%lf",&a,&b);
//	
//
//   
//	if(a!=0)
//	{
//		x=-b/a*1.000;
//		printf("%.3lf",x);
//	}
//	
//	if(a==0 && b!=0){
//		printf("no solution");
//	}
//	if(a==0 && b==0){
//		printf("Infinitely solutions");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int a,b;
//    scanf("%d%d",&a,&b);
//    for()
//   
//	 sum+=i;
//     
//    printf("%d",sum);
//    return 0;
//}
//
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    int n = 0;
//    scanf("%d",&n);
//    getchar();
//    for(int i = 0;i<n;i++)
//    {
//        char sex = 0;
//        double h = 0.0;
//        scanf("%c %lf",&sex,&h);
//        getchar();
//        if(sex == 'F')
//        {
//            h *= 1.09;
//            printf("%.2lf\n",h);
//        }
//        else
//        {
//            h /= 1.09;
//            printf("%.2lf\n",h);
//        }
//    }
//    return 0;
//}


//pi/4=1-1/3+1/5-1/7 .... 
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	 int f=1;
//	 float pi=0,t=1,n=1;
//	while(fabs(t)>1e-6)
//	{
//		pi=pi+t;
//		n=n+2;
//		
//		f=-f;
//		t=f/n;
//	
//		
//	}
//	pi=pi*4;
//	printf("%.6f",pi);
//	return 0;
//	
//}


//
//#include <stdio.h>
//int main()
//{
//	int n,m;
//	scanf("%d",&n);
//	
//	for(m=2;m<=n-1;m++)
//	{
//		if(n%m==0)
//		break;
//
//	}
//	if(m>=n)
//	{
//		printf("yes");
//	}else
//	{
//		printf("no");
//	}
//	return 0;
//	
//}




//#include <stdio.h>
//int main()
//{
//	int i,j,n;
//	int flag,cnt=0;
//	scanf("%d",&n);
//	
//	for(i=2;i<=n;i++)
//	{
//		flag=1;
//		for(j=2;j<i;j++) 
//		
//		if(i%j==0)
//		{
//			flag=0;
//			break;
//			
//			
//		}
//			cnt+=flag;
//	}
//
//	printf("%d",cnt);
//	return 0;
//}

//
//#include<reg52.h>
// 
//sbit IN1 = P1^3;
//sbit PWMA = P1^2;
//sbit IN3 = P1^1;
//sbit PWMB = P1^0;
// 
//sbit hdIN1 = P1^6;
//sbit hdIN2 = P1^7;
// 
//#define uint unsigned int
//#define uchar unsigned char
//#define ulong unsigned long
// 
//uchar PWMCntA = 0;
//uchar PWMCntB = 0;
//uchar cntPWMA = 0;
//uchar cntPWMB = 0;
// 
//uchar THx = (65536 - 10)/256;
//uchar TLx = (65536 - 10)%256;
// 
//void Time0Init()
//{
//    TH0 = THx;
//    TL0 = TLx;
//    TMOD &= 0XF0;
//    TMOD |= 0X01;
//    EA = 1;
//    ET0 = 1;
//    TR0 = 1;
//}
// 
//void left()
//{
//    IN1 = 0;
//    //PWMA = 1;
//    IN3 = 0;
//    //PWMB = 1;
//    cntPWMA = 10;
//    cntPWMB = 25;
//}//???????
// 
//void right()
//{
//    IN1 = 0;
////  PWMA = 1;
//    IN3 = 0;
////  PWMB = 1;
//    cntPWMA = 25;
//    cntPWMB = 10;
//}//???????
// 
//void gostraight()
//{
//    IN1 = 0;
//    //PWMA = 1;
//    IN3 = 0;
////  PWMB = 1;
//    cntPWMA = 10;
//    cntPWMB = 10;
//}
// 
///*void back()
//{
//    IN1 = 1;
//    PWMA = 0;
//    IN3 = 1;
//    PWMB = 0;
//}//????
//     
//void stop()
//{
//    IN1 = 1;
//    PWMA = 1;
//    IN3 = 1;
//    PWMB = 1;
//}//??*/
// 
//void hdxj()
//{
// 
//    if(hdIN1 == 1 && hdIN2 == 0)
//        right();
//    else if(hdIN1 == 0 && hdIN2 == 1)
//        left();
//    else
//        gostraight();
//}
// 
//void delay(uint xms)
//{
//    uint i,j;
//    for(i=xms;i>0;i--)
//    for(j=112;j>0;j--);
//}
// 
//void main()
//{
//    //BlueteethInit();
//    Time0Init();
//     
//    IN1 = 0;
//    //PWMA = 1;
//    IN3 = 0;
////  PWMB = 1;
//    cntPWMA = 80;
//    cntPWMB = 80;
//    delay(10);
//    while(1)
//    {
//         
//        hdxj();
//    }
//}
// 
//void InterruptTime0() interrupt 1
//{
//    PWMCntA++;
//    PWMCntB++;
//     
//    if(PWMCntA >= 100)
//    {
//        PWMCntA = 0;
//    }
//     
//    if(PWMCntB >= 100)
//    {
//        PWMCntB = 0;
//    }
//     
//    if(PWMCntA <= cntPWMA)
//    {
//        PWMA = 1;
//    }
//    else
//    {
//        PWMA = 0;
//    }
//     
//    if(PWMCntB <= cntPWMB)
//    {
//        PWMB = 1;
//    }
//    else
//    {
//        PWMB = 0;
//    }
//    TH0 = THx;
//    TL0 = TLx;
//}

//#include "stdio.h"
//int main()
//{
//    scanf();
//    
//	printf("%d",max); 
// } 




















































