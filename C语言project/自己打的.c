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
char *gbk;
int t;
char cha_in[100];
char zeng1[100],zeng2[100],zeng3[100],zeng4[100],zeng5[100],zeng6[100];
char shan_in[100];
char geng1[100],geng2[100];
char cu1[100],cu2[100];

void self_init()
{
	mysql= mysql_init(NULL);
}

/*连接mysql数据库*/
void connect_sql()
{
	if(!mysql_real_connect(mysql,"localhost","root","","1",0,NULL,0))
	{
		printf("数据库链接失败\n%s\n",mysql_error(mysql));
		exit(0) ;
	}
	printf("--------数据库连接成功--------\n");
}

//查询
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

//粗略查询
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

//增加 
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

//删除 
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

//更新 
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
	gbk="SET CHARACTER SET GBK";
	t=mysql_real_query(mysql,gbk,(unsigned int)strlen(gbk));
	if(t!=0) 
    { 
    	printf("----数据库编码设置出现异常----\n"); 
    }
    else
    printf("------数据库编码设置成功------\n"); 
}

//登录 
int deng_lu(char a[],char b[])
{
	int i;
	if(strlen(a)!=4)
	return 0;
	if(strlen(b)!=4)
	return 0;
	if(a[0]!='r'&&a[1]!='o'&&a[2]!='o'&&a[3]!='t')
	return 0;
	if(b[0]!='1'&&b[1]!='2'&&b[2]!='3'&&b[3]!='4')
	return 0;
	return 1;
}

//改动
void gai_dong()
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
	printf("5.退出\n");
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

main()
{
	int i;
	int num=0;
	int c; 
	char yn;
	yong_hu();
	system("color 70");
	system("cls");
	self_init();
	connect_sql();
	Sleep(3000);
	zi_fu();
	Sleep(3000);
	system("cls");
	while(1)
	{
		gai_dong();
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
		}
		if(num==2)
		{
			system("color 75");
			printf("增加内容\n");
			printf("序号 电话 Email 姓名 关系 备注\n");
			scanf("%s%s%s%s%s%s",zeng1,zeng2,zeng3,zeng4,zeng5,zeng6);
			zeng_jia();
		}
		if(num==3)
		{
			system("color 76");
			printf("删除条件\n");
			scanf("%s",shan_in);
			shan_chu();
		}
		if(num==4)
		{
			system("color 72");
			printf("更新内容 更新条件\n");
			scanf("%s%s",geng1,geng2);
			geng_xin(); 
		}
		if(num==5)
		{
			system("color 74");
			printf("退出成功\n");
			Sleep(1000);
			exit(0);
			
		}
		for(i=10;i>0;i--)
		{
			gotoxy(50,0);
			printf("%d秒后自动返回选择界面",i);
			Sleep(1000);
		}
		system("cls");
		num=0;
		c=0;
	}
	mysql_close(mysql);
}
