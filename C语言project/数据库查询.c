#include<stdio.h>
#include<mysql.h>
#include<string.h>
#include<stdlib.h>
#include <windows.h>
#include <conio.h>
void gotoxy(int x,int y)
{
	COORD coord;
	coord.X=x;
	coord.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

MYSQL *mysql;
char query[1000]; 
int t;
char cha_in[100];
char zeng1[100],zeng2[100],zeng3[100],zeng4[100],zeng5[100],zeng6[100];
char shan_in[100];
char geng1[100],geng2[100];
char cu1[100],cu2[100];
char user[1000],pass[1000];
char stu_user[100],stu_pass[100],stu_power[100];
char root_user[100],root1_pass[100],root2_pass[100];

void self_init()//初始化 
{
	mysql= mysql_init(NULL);
}

/*连接mysql通讯录数据库*/
void connect_sql()
{
	gotoxy(0,0);
	printf("-------数据库连接中-----------");
	Sleep(500);
	gotoxy(0,0);
	printf("-------数据库连接中.----------");
	Sleep(500);
	gotoxy(0,0);
	printf("-------数据库连接中..---------");
	Sleep(500);
	gotoxy(0,0);
	printf("-------数据库连接中...--------");
	Sleep(500);
	if(!mysql_real_connect(mysql,"localhost","root","","1",0,NULL,0))
	{
		printf("数据库链接失败\n%s\n",mysql_error(mysql));
		exit(0) ;
	}
	gotoxy(0,0);
	printf("--------数据库连接成功--------\n");
}

//判断账号密码是否相等
int xiang_deng(char a[],char b[])
{
	int i;
	if(strlen(a)!=strlen(b))
	return 0;
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]!=b[i])
		return 0;
	}
	return 1;
} 

//登录 
int deng_lu(char a[],char b[])
{
	int flag1=0,flag2=0;
	int i;
	MYSQL_RES *res;
	MYSQL_ROW row;
	int rowcount;
	strcpy(user,"");
	strcat(user,"SELECT * FROM cmessage WHERE xing_ming='");
	strcat(user,a);
	strcat(user,"'"); 
	t=mysql_real_query(mysql,user,(unsigned int)strlen(user));  
	if(t!=0) 
    { 
    	printf("账号密码核对时出现异常:%s\n",mysql_error(mysql));
    	exit(0);
    }
	else 
    printf("账号密码核对无异常\n");
	res=mysql_store_result(mysql);
	rowcount=mysql_num_rows(res);
	while( (row = mysql_fetch_row(res)) )
    {          
    	for(i=0;i<res->field_count; i++)  
        {
        	strcpy(stu_user,row[0]);
        	strcpy(stu_pass,row[1]);
        	strcpy(stu_power,row[2]);
        }
    }
    printf("该用户权限为:%s\n",stu_power); 
    if(xiang_deng(stu_user,a))
    {
    	flag1=1;
	}
	if(xiang_deng(stu_pass,b))
    {
    	flag2=1;
	}
	if(flag1==1&&flag2==1)
	return 1;
	return 0;
	mysql_free_result(res);
}

//详细查询通讯录数据库
void cha_xun()
{
	char whe[100];
	int i;
	int sum;
	int rowcount;
	MYSQL_RES *res;
	MYSQL_ROW row;
	printf("111.序号\n");
	printf("222.电话\n");
	printf("333.Email\n");
	printf("444.姓名\n");
	printf("555.关系\n");
	printf("666.备注\n");
	scanf("%d",&sum);
	if(sum==111)
	{
		strcpy(whe,"");
		strcat(whe,"xu_hao=");
	}
	if(sum==222)
	{
		strcpy(whe,"");
		strcat(whe,"dian_hua=");
	}
	if(sum==333)
	{
		strcpy(whe,"");
		strcat(whe,"Email=");
	}
	if(sum==444)
	{
		strcpy(whe,"");
		strcat(whe,"xing_ming=");
	}
	if(sum==555)
	{
		strcpy(whe,"");
		strcat(whe,"guan_xi=");
	}
	if(sum==666)
	{
		strcpy(whe,"");
		strcat(whe,"bei_zhu=");
	}
	scanf("%s",cha_in);
	strcpy(query,"");
	strcat(query,"SELECT * FROM ctext WHERE ");
	strcat(query,whe);
	strcat(query,cha_in);
    t=mysql_real_query(mysql,query,(unsigned int)strlen(query));  
	if(t!=0) 
    { 
    	printf("执行查询时出现异常:%s\n",mysql_error(mysql)); 
    }
	else 
    printf("[%s]查询无异常\n",query);
	res=mysql_store_result(mysql);
	rowcount=mysql_num_rows(res);
	printf("%-20s%-20s%-20s%-20s%-20s%-20s\n","序号","电话","Email","姓名","关系","备注");
	while( (row = mysql_fetch_row(res)) )
    {          
    	for(i=0 ; i <  res->field_count; i++)  
        {
            printf("%-20s",row[i]);
        }    
        printf("\n");
    }      
    mysql_free_result(res); 
}

//粗略查询通讯录数据库
void cu_cha()
{
	char whe[100];
	int i;
	int sum;
	int rowcount;
	MYSQL_RES *res;
	MYSQL_ROW row;
	printf("111.序号\n");
	printf("222.电话\n");
	printf("333.Email\n");
	printf("444.姓名\n");
	printf("555.关系\n");
	printf("666.备注\n");
	scanf("%d",&sum);
	if(sum==111)
	{
		strcpy(whe,"");
		strcat(whe,"xu_hao");
	}
	if(sum==222)
	{
		strcpy(whe,"");
		strcat(whe,"dian_hua");
	}
	if(sum==333)
	{
		strcpy(whe,"");
		strcat(whe,"Email");
	}
	if(sum==444)
	{
		strcpy(whe,"");
		strcat(whe,"xing_ming");
	}
	if(sum==555)
	{
		strcpy(whe,"");
		strcat(whe,"guan_xi");
	}
	if(sum==666)
	{
		strcpy(whe,"");
		strcat(whe,"bei_zhu");
	}
	printf("类似信息\n");
	scanf("%s",cu2);
	strcpy(query,"");
	strcat(query,"SELECT * FROM ctext WHERE ");
	strcat(query,whe);
	strcat(query," LIKE ");
	strcat(query,cu2);
    t=mysql_real_query(mysql,query,(unsigned int)strlen(query));  
	if(t!=0) 
    { 
    	printf("执行查询时出现异常:%s\n",mysql_error(mysql)); 
    }
	else 
    printf("[%s]查询无异常\n",query);
	res=mysql_store_result(mysql);
	rowcount=mysql_num_rows(res);
	printf("%-20s%-20s%-20s%-20s%-20s%-20s\n","序号","电话","Email","姓名","关系","备注");
	while( (row = mysql_fetch_row(res)) )
    {          
    	for(i=0 ; i <  res->field_count; i++)  
        {
            printf("%-20s",row[i]);
        }    
        printf("\n");
    }      
    mysql_free_result(res); 
    sum=0;
}

//增加通讯录数据库 
void zeng_jia()
{
	strcpy(query,"");//清空 
	strcat(query,"INSERT INTO ctext VALUES ('");//连接 
	strcat(query,zeng1);
	strcat(query,"','");
	strcat(query,zeng2);
	strcat(query,"','");
	strcat(query,zeng3);
	strcat(query,"','");
	strcat(query,zeng4); 
	strcat(query,"','");
	strcat(query,zeng5);
	strcat(query,"','");
	strcat(query,zeng6);
	strcat(query,"')");
	t=mysql_real_query(mysql,query,(unsigned int)strlen(query));
	if(t!=0) 
    { 
    	printf("执行增加时出现异常:%s\n",mysql_error(mysql)); 
    }
	else 
    printf("[%s]增加成功\n",query);
}

//删除通讯录数据库 
void shan_chu()
{
	strcpy(query,"");
	strcat(query,"DELETE FROM ctext WHERE ");
	strcat(query,shan_in);
	t=mysql_real_query(mysql,query,(unsigned int)strlen(query));
	if(t!=0) 
    { 
    	printf("执行删除时出现异常:%s\n",mysql_error(mysql)); 
    }
	else 
    printf("[%s]删除成功\n",query);
}

//更新通讯录数据库 
void geng_xin()
{	
	strcpy(query,"");
	strcat(query,"UPDATE ctext SET ");
	strcat(query,geng1);
	strcat(query," WHERE ");
	strcat(query,geng2);
	t=mysql_real_query(mysql,query,(unsigned int)strlen(query));
	if(t!=0) 
    { 
    	printf("执行更新时出现异常:%s\n",mysql_error(mysql)); 
    }
	else 
    printf("[%s]更新成功\n",query);
}

//设置字符集
void zi_fu()
{
	gotoxy(0,1);
	printf("-----数据库编码设置中---------\n");
	Sleep(500);
	gotoxy(0,1);
	printf("-----数据库编码设置中.--------\n");
	Sleep(500);
	gotoxy(0,1);
	printf("-----数据库编码设置中..-------\n");
	Sleep(500);
	gotoxy(0,1);
	printf("-----数据库编码设置中...------\n");
	Sleep(500);
	char gbk[]="SET CHARACTER SET GBK";
	t=mysql_real_query(mysql,gbk,(unsigned int)strlen(gbk));
	if(t!=0) 
    { 
    	printf("----数据库编码设置出现异常----\n"); 
    }
    else
    {
    	gotoxy(0,1);
    	printf("------数据库编码设置成功------\n"); 
    }
}

//选择界面 
void xuan_ze()
{
	printf("选择界面\n");
	system("color 71");
	printf("1.查询 ");
	Sleep(1000);
	system("color 75");
	printf("2.增加 ");
	Sleep(1000);
	system("color 76");
	printf("3.删除 ");
	Sleep(1000);
	system("color 72");
	printf("4.更新 ");
	Sleep(1000);
	system("color 74");
	printf("5.退出 ");
	Sleep(1000);
	system("color 70");
} 

//用户
void yong_hu()
{
	char user[100],pass[100];
	int flag=0;
	int i=3;
	while(flag==0)
	{
		system("cls");
		printf("用户名:(还有%d次机会)\n",i);
		scanf("%s",user);
		printf("密码:\n");
		scanf("%s",pass);
		if(deng_lu(user,pass))
		{
			printf("----------------登陆成功----------------\n");
			flag=1;
		}
		else
		{
			printf("----密码错误或用户名不存在----\n");
		}
		if(i==0)
		{
			printf("--输入三次密码错误--程序停止--\n");
			exit(0);
		}
		i--;
		Sleep(1000);
	}	
} 

//root权限下的操作 
void user_gai()
{
	int num;
	printf("11.更改密码 22.找回密码 33.更改权限\n");
	scanf("%d",&num);
	if(num==11)
	{
		while(1)
		{
			printf("请输入用户名:");
			scanf("%s",root_user);
			putchar('\n');
			printf("请输入更改的密码:");
			scanf("%s",root1_pass);
			putchar('\n');
			printf("请确认密码:");
			scanf("%s",root2_pass);
			putchar('\n');
			if(xiang_deng(root1_pass,root2_pass))
			{
				break;
			}
			else
			{
				printf("两次密码输入错误，请重新输入\n");
				Sleep(1000);
				system("cls");
				continue;
			}
		}
		strcpy(query,"");
		strcat(query,"UPDATE cmessage SET password=");
		strcat(query,root1_pass);
		strcat(query," WHERE xing_ming='");
		strcat(query,root_user);
		strcat(query,"'");
		t=mysql_real_query(mysql,query,(unsigned int)strlen(query));
		if(t!=0) 
    	{ 
    		printf("执行更新时出现异常:%s\n",mysql_error(mysql)); 
    	}
		else 
    	printf("[%s]更新成功\n",query);
	}
	if(num==22)
	{
		int i;
		int sum;
		int rowcount;
		MYSQL_RES *res;
		MYSQL_ROW row;
		printf("请输入丢失密码的账户名\n");
		scanf("%s",root_user);
		strcpy(query,"");
		strcat(query,"SELECT * FROM cmessage WHERE ");
		strcat(query,"xing_ming='");
		strcat(query,root_user);
		strcat(query,"'");
    	t=mysql_real_query(mysql,query,(unsigned int)strlen(query));  
		if(t!=0) 
    	{ 
    		printf("执行查询时出现异常:%s\n",mysql_error(mysql)); 
    	}
		else 
    	printf("[%s]查询无异常\n",query);
		res=mysql_store_result(mysql);
		rowcount=mysql_num_rows(res);
		printf("%-20s%-20s%-20s\n","账户","密码","权限");
		while( (row = mysql_fetch_row(res)) )
    	{          
    		for(i=0 ; i <  res->field_count; i++)  
    	    {
    	        printf("%-20s",row[i]);
    	    }    
    	    printf("\n");
    	}      
    	mysql_free_result(res);
	}
	if(num==33)
	{
		printf("请输入更改的账户名\n");
		scanf("%s",root_user);
		printf("请输入更改的权限(大\\小)\n");
		scanf("%s",root1_pass);
		strcpy(query,"");
		strcat(query,"UPDATE cmessage SET ");
		strcat(query,root1_pass);
		strcat(query," WHERE ");
		strcat(query,root_user);
		t=mysql_real_query(mysql,query,(unsigned int)strlen(query));
		if(t!=0) 
    	{ 
    		printf("执行更新时出现异常:%s\n",mysql_error(mysql)); 
    	}
		else 
    	printf("[%s]更新成功\n",query);
	}
	num=0;
}

//权限为小时操作
void pow_xiao()
{
	int i,c;
	while(1)
	{
		printf("该权限只允许进行查询操作\n");
		system("color 70");
		printf("11.详细查询 22.粗略查询\n");
		scanf("%d",&c);
		if(c==11)
		{
			printf("查询条件\n");
			cha_xun();
		}
		if(c==22)
		{
			cu_cha();
		}
		gotoxy(90,0);
		printf("想成为权限为大的用户么？");
		gotoxy(90,1);
		printf("想拥有增加、删改功能的程序么？");
		gotoxy(90,2);
		printf("找root氪金吧！");
		for(i=10;i>0;i--)
		{
			gotoxy(50,0);
			printf("%d秒后自动返回选择界面",i);
			Sleep(1000);
		}
		system("cls");
		c=0;
	}
} 

//权限为大时操作
void pow_da()
{
	int i;
	int num=0;
	int c;
	while(1)
	{
		xuan_ze();
		putchar('\n');
		scanf("%d",&num);
		if(num==1)
		{
			system("color 71");
			printf("11.详细查询 22.粗略查询\n");
			scanf("%d",&c);
			if(c==11)
			{
				printf("查询条件\n");
				cha_xun();
			}
			if(c==22)
			{
				cu_cha();
			}
			for(i=10;i>0;i--)
			{
				gotoxy(50,0);
				printf("%d秒后自动返回选择界面",i);
				Sleep(1000);
			}
		}
		if(num==2)
		{
			system("color 75");
			printf("增加内容\n");
			printf("序号:");
			scanf("%s",zeng1); 
			printf("电话:");
			scanf("%s",zeng2);
			printf("Email:");
			scanf("%s",zeng3);
			printf("姓名:");
			scanf("%s",zeng4);
			printf("关系:");
			scanf("%s",zeng5);
			printf("备注:");
			scanf("%s",zeng6);
			zeng_jia();
			for(i=5;i>0;i--)
			{
				gotoxy(50,0);
				printf("%d秒后自动返回选择界面",i);
				Sleep(1000);
			}
		}
		if(num==3)
		{
			system("color 76");
			printf("删除条件\n");
			scanf("%s",shan_in);
			shan_chu();
			for(i=5;i>0;i--)
			{
				gotoxy(50,0);
				printf("%d秒后自动返回选择界面",i);
				Sleep(1000);
			}
		}
		if(num==4)
		{
			system("color 72");
			printf("更新内容 更新条件\n");
			scanf("%s%s",geng1,geng2);
			geng_xin();
			for(i=5;i>0;i--)
			{
				gotoxy(50,0);
				printf("%d秒后自动返回选择界面",i);
				Sleep(1000);
			}
		}
			if(num==5)
		{
			system("color 74");
			printf("退出成功\n");
			Sleep(1000);
			exit(0);
		}
		system("cls");
		num=0;
		c=0;
	}
} 

//权限为root时操作
void pow_root()
{
	int i;
	int num=0;
	int c;
	while(1)
	{
		xuan_ze();
		system("color 74");
		printf("6.更改账户及密码");
		putchar('\n');
		scanf("%d",&num);
		if(num==1)
		{
			system("color 71");
			printf("11.详细查询 22.粗略查询\n");
			scanf("%d",&c);
			if(c==11)
			{
				printf("查询条件\n");
				cha_xun();
			}
			if(c==22)
			{
				cu_cha();
			}
			for(i=10;i>0;i--)
			{
				gotoxy(50,0);
				printf("%d秒后自动返回选择界面",i);
				Sleep(1000);
			}
		}
		if(num==2)
		{
			system("color 75");
			printf("增加内容\n");
			printf("序号:");
			scanf("%s",zeng1);
			printf("电话:");
			scanf("%s",zeng2);
			printf("Email:");
			scanf("%s",zeng3);
			printf("姓名:");
			scanf("%s",zeng4);
			printf("关系:");
			scanf("%s",zeng5);
			printf("备注:");
			scanf("%s",zeng6);
			zeng_jia();
			for(i=5;i>0;i--)
			{
				gotoxy(50,0);
				printf("%d秒后自动返回选择界面",i);
				Sleep(1000);
			}
		}
		if(num==3)
		{
			system("color 76");
			printf("删除条件\n");
			scanf("%s",shan_in);
			shan_chu();
			for(i=5;i>0;i--)
			{
				gotoxy(50,0);
				printf("%d秒后自动返回选择界面",i);
				Sleep(1000);
			}
		}
		if(num==4)
		{
			system("color 72");
			printf("更新内容 更新条件\n");
			scanf("%s%s",geng1,geng2);
			geng_xin();
			for(i=5;i>0;i--)
			{
				gotoxy(50,0);
				printf("%d秒后自动返回选择界面",i);
				Sleep(1000);
			} 
		}
		if(num==5)
		{
			system("color 74");
			printf("退出成功\n");
			Sleep(1000);
			exit(0);
		}
		if(num==6)
		{
			system("color 74");
			printf("进入用户更改界面");
			Sleep(500);
			printf(".");
			Sleep(500);
			printf(".");
			Sleep(500);
			printf(".");
			Sleep(500);
			gotoxy(0,3);
			printf("进入更该界面成功！\n");
			Sleep(500);
			system("cls");
			user_gai();
			for(i=5;i>0;i--)
			{
				gotoxy(50,0);
				printf("%d秒后自动返回选择界面",i);
				Sleep(1000);
			}
		}
		system("cls");
		num=0;
		c=0;
	}
} 

main()
{
	self_init();
	system("color 70");
	system("cls");
	connect_sql();
	Sleep(1000);
	zi_fu();
	Sleep(1000);
	yong_hu();
	Sleep(1000);
	system("cls");
	if(xiang_deng(stu_power,"小"))
	{
		pow_xiao();
	} 
	if(xiang_deng(stu_power,"大"))
	{ 
		pow_da();
	}
	if(xiang_deng(stu_power,"root"))
	{
		pow_root();
	}
	mysql_close(mysql);
}
