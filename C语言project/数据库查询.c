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

void self_init()//��ʼ�� 
{
	mysql= mysql_init(NULL);
}

/*����mysqlͨѶ¼���ݿ�*/
void connect_sql()
{
	gotoxy(0,0);
	printf("-------���ݿ�������-----------");
	Sleep(500);
	gotoxy(0,0);
	printf("-------���ݿ�������.----------");
	Sleep(500);
	gotoxy(0,0);
	printf("-------���ݿ�������..---------");
	Sleep(500);
	gotoxy(0,0);
	printf("-------���ݿ�������...--------");
	Sleep(500);
	if(!mysql_real_connect(mysql,"localhost","root","","1",0,NULL,0))
	{
		printf("���ݿ�����ʧ��\n%s\n",mysql_error(mysql));
		exit(0) ;
	}
	gotoxy(0,0);
	printf("--------���ݿ����ӳɹ�--------\n");
}

//�ж��˺������Ƿ����
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

//��¼ 
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
    	printf("�˺�����˶�ʱ�����쳣:%s\n",mysql_error(mysql));
    	exit(0);
    }
	else 
    printf("�˺�����˶����쳣\n");
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
    printf("���û�Ȩ��Ϊ:%s\n",stu_power); 
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

//��ϸ��ѯͨѶ¼���ݿ�
void cha_xun()
{
	char whe[100];
	int i;
	int sum;
	int rowcount;
	MYSQL_RES *res;
	MYSQL_ROW row;
	printf("111.���\n");
	printf("222.�绰\n");
	printf("333.Email\n");
	printf("444.����\n");
	printf("555.��ϵ\n");
	printf("666.��ע\n");
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
    	printf("ִ�в�ѯʱ�����쳣:%s\n",mysql_error(mysql)); 
    }
	else 
    printf("[%s]��ѯ���쳣\n",query);
	res=mysql_store_result(mysql);
	rowcount=mysql_num_rows(res);
	printf("%-20s%-20s%-20s%-20s%-20s%-20s\n","���","�绰","Email","����","��ϵ","��ע");
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

//���Բ�ѯͨѶ¼���ݿ�
void cu_cha()
{
	char whe[100];
	int i;
	int sum;
	int rowcount;
	MYSQL_RES *res;
	MYSQL_ROW row;
	printf("111.���\n");
	printf("222.�绰\n");
	printf("333.Email\n");
	printf("444.����\n");
	printf("555.��ϵ\n");
	printf("666.��ע\n");
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
	printf("������Ϣ\n");
	scanf("%s",cu2);
	strcpy(query,"");
	strcat(query,"SELECT * FROM ctext WHERE ");
	strcat(query,whe);
	strcat(query," LIKE ");
	strcat(query,cu2);
    t=mysql_real_query(mysql,query,(unsigned int)strlen(query));  
	if(t!=0) 
    { 
    	printf("ִ�в�ѯʱ�����쳣:%s\n",mysql_error(mysql)); 
    }
	else 
    printf("[%s]��ѯ���쳣\n",query);
	res=mysql_store_result(mysql);
	rowcount=mysql_num_rows(res);
	printf("%-20s%-20s%-20s%-20s%-20s%-20s\n","���","�绰","Email","����","��ϵ","��ע");
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

//����ͨѶ¼���ݿ� 
void zeng_jia()
{
	strcpy(query,"");//��� 
	strcat(query,"INSERT INTO ctext VALUES ('");//���� 
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
    	printf("ִ������ʱ�����쳣:%s\n",mysql_error(mysql)); 
    }
	else 
    printf("[%s]���ӳɹ�\n",query);
}

//ɾ��ͨѶ¼���ݿ� 
void shan_chu()
{
	strcpy(query,"");
	strcat(query,"DELETE FROM ctext WHERE ");
	strcat(query,shan_in);
	t=mysql_real_query(mysql,query,(unsigned int)strlen(query));
	if(t!=0) 
    { 
    	printf("ִ��ɾ��ʱ�����쳣:%s\n",mysql_error(mysql)); 
    }
	else 
    printf("[%s]ɾ���ɹ�\n",query);
}

//����ͨѶ¼���ݿ� 
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
    	printf("ִ�и���ʱ�����쳣:%s\n",mysql_error(mysql)); 
    }
	else 
    printf("[%s]���³ɹ�\n",query);
}

//�����ַ���
void zi_fu()
{
	gotoxy(0,1);
	printf("-----���ݿ����������---------\n");
	Sleep(500);
	gotoxy(0,1);
	printf("-----���ݿ����������.--------\n");
	Sleep(500);
	gotoxy(0,1);
	printf("-----���ݿ����������..-------\n");
	Sleep(500);
	gotoxy(0,1);
	printf("-----���ݿ����������...------\n");
	Sleep(500);
	char gbk[]="SET CHARACTER SET GBK";
	t=mysql_real_query(mysql,gbk,(unsigned int)strlen(gbk));
	if(t!=0) 
    { 
    	printf("----���ݿ�������ó����쳣----\n"); 
    }
    else
    {
    	gotoxy(0,1);
    	printf("------���ݿ�������óɹ�------\n"); 
    }
}

//ѡ����� 
void xuan_ze()
{
	printf("ѡ�����\n");
	system("color 71");
	printf("1.��ѯ ");
	Sleep(1000);
	system("color 75");
	printf("2.���� ");
	Sleep(1000);
	system("color 76");
	printf("3.ɾ�� ");
	Sleep(1000);
	system("color 72");
	printf("4.���� ");
	Sleep(1000);
	system("color 74");
	printf("5.�˳� ");
	Sleep(1000);
	system("color 70");
} 

//�û�
void yong_hu()
{
	char user[100],pass[100];
	int flag=0;
	int i=3;
	while(flag==0)
	{
		system("cls");
		printf("�û���:(����%d�λ���)\n",i);
		scanf("%s",user);
		printf("����:\n");
		scanf("%s",pass);
		if(deng_lu(user,pass))
		{
			printf("----------------��½�ɹ�----------------\n");
			flag=1;
		}
		else
		{
			printf("----���������û���������----\n");
		}
		if(i==0)
		{
			printf("--���������������--����ֹͣ--\n");
			exit(0);
		}
		i--;
		Sleep(1000);
	}	
} 

//rootȨ���µĲ��� 
void user_gai()
{
	int num;
	printf("11.�������� 22.�һ����� 33.����Ȩ��\n");
	scanf("%d",&num);
	if(num==11)
	{
		while(1)
		{
			printf("�������û���:");
			scanf("%s",root_user);
			putchar('\n');
			printf("��������ĵ�����:");
			scanf("%s",root1_pass);
			putchar('\n');
			printf("��ȷ������:");
			scanf("%s",root2_pass);
			putchar('\n');
			if(xiang_deng(root1_pass,root2_pass))
			{
				break;
			}
			else
			{
				printf("�������������������������\n");
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
    		printf("ִ�и���ʱ�����쳣:%s\n",mysql_error(mysql)); 
    	}
		else 
    	printf("[%s]���³ɹ�\n",query);
	}
	if(num==22)
	{
		int i;
		int sum;
		int rowcount;
		MYSQL_RES *res;
		MYSQL_ROW row;
		printf("�����붪ʧ������˻���\n");
		scanf("%s",root_user);
		strcpy(query,"");
		strcat(query,"SELECT * FROM cmessage WHERE ");
		strcat(query,"xing_ming='");
		strcat(query,root_user);
		strcat(query,"'");
    	t=mysql_real_query(mysql,query,(unsigned int)strlen(query));  
		if(t!=0) 
    	{ 
    		printf("ִ�в�ѯʱ�����쳣:%s\n",mysql_error(mysql)); 
    	}
		else 
    	printf("[%s]��ѯ���쳣\n",query);
		res=mysql_store_result(mysql);
		rowcount=mysql_num_rows(res);
		printf("%-20s%-20s%-20s\n","�˻�","����","Ȩ��");
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
		printf("��������ĵ��˻���\n");
		scanf("%s",root_user);
		printf("��������ĵ�Ȩ��(��\\С)\n");
		scanf("%s",root1_pass);
		strcpy(query,"");
		strcat(query,"UPDATE cmessage SET ");
		strcat(query,root1_pass);
		strcat(query," WHERE ");
		strcat(query,root_user);
		t=mysql_real_query(mysql,query,(unsigned int)strlen(query));
		if(t!=0) 
    	{ 
    		printf("ִ�и���ʱ�����쳣:%s\n",mysql_error(mysql)); 
    	}
		else 
    	printf("[%s]���³ɹ�\n",query);
	}
	num=0;
}

//Ȩ��ΪСʱ����
void pow_xiao()
{
	int i,c;
	while(1)
	{
		printf("��Ȩ��ֻ������в�ѯ����\n");
		system("color 70");
		printf("11.��ϸ��ѯ 22.���Բ�ѯ\n");
		scanf("%d",&c);
		if(c==11)
		{
			printf("��ѯ����\n");
			cha_xun();
		}
		if(c==22)
		{
			cu_cha();
		}
		gotoxy(90,0);
		printf("���ΪȨ��Ϊ����û�ô��");
		gotoxy(90,1);
		printf("��ӵ�����ӡ�ɾ�Ĺ��ܵĳ���ô��");
		gotoxy(90,2);
		printf("��root봽�ɣ�");
		for(i=10;i>0;i--)
		{
			gotoxy(50,0);
			printf("%d����Զ�����ѡ�����",i);
			Sleep(1000);
		}
		system("cls");
		c=0;
	}
} 

//Ȩ��Ϊ��ʱ����
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
			printf("11.��ϸ��ѯ 22.���Բ�ѯ\n");
			scanf("%d",&c);
			if(c==11)
			{
				printf("��ѯ����\n");
				cha_xun();
			}
			if(c==22)
			{
				cu_cha();
			}
			for(i=10;i>0;i--)
			{
				gotoxy(50,0);
				printf("%d����Զ�����ѡ�����",i);
				Sleep(1000);
			}
		}
		if(num==2)
		{
			system("color 75");
			printf("��������\n");
			printf("���:");
			scanf("%s",zeng1); 
			printf("�绰:");
			scanf("%s",zeng2);
			printf("Email:");
			scanf("%s",zeng3);
			printf("����:");
			scanf("%s",zeng4);
			printf("��ϵ:");
			scanf("%s",zeng5);
			printf("��ע:");
			scanf("%s",zeng6);
			zeng_jia();
			for(i=5;i>0;i--)
			{
				gotoxy(50,0);
				printf("%d����Զ�����ѡ�����",i);
				Sleep(1000);
			}
		}
		if(num==3)
		{
			system("color 76");
			printf("ɾ������\n");
			scanf("%s",shan_in);
			shan_chu();
			for(i=5;i>0;i--)
			{
				gotoxy(50,0);
				printf("%d����Զ�����ѡ�����",i);
				Sleep(1000);
			}
		}
		if(num==4)
		{
			system("color 72");
			printf("�������� ��������\n");
			scanf("%s%s",geng1,geng2);
			geng_xin();
			for(i=5;i>0;i--)
			{
				gotoxy(50,0);
				printf("%d����Զ�����ѡ�����",i);
				Sleep(1000);
			}
		}
			if(num==5)
		{
			system("color 74");
			printf("�˳��ɹ�\n");
			Sleep(1000);
			exit(0);
		}
		system("cls");
		num=0;
		c=0;
	}
} 

//Ȩ��Ϊrootʱ����
void pow_root()
{
	int i;
	int num=0;
	int c;
	while(1)
	{
		xuan_ze();
		system("color 74");
		printf("6.�����˻�������");
		putchar('\n');
		scanf("%d",&num);
		if(num==1)
		{
			system("color 71");
			printf("11.��ϸ��ѯ 22.���Բ�ѯ\n");
			scanf("%d",&c);
			if(c==11)
			{
				printf("��ѯ����\n");
				cha_xun();
			}
			if(c==22)
			{
				cu_cha();
			}
			for(i=10;i>0;i--)
			{
				gotoxy(50,0);
				printf("%d����Զ�����ѡ�����",i);
				Sleep(1000);
			}
		}
		if(num==2)
		{
			system("color 75");
			printf("��������\n");
			printf("���:");
			scanf("%s",zeng1);
			printf("�绰:");
			scanf("%s",zeng2);
			printf("Email:");
			scanf("%s",zeng3);
			printf("����:");
			scanf("%s",zeng4);
			printf("��ϵ:");
			scanf("%s",zeng5);
			printf("��ע:");
			scanf("%s",zeng6);
			zeng_jia();
			for(i=5;i>0;i--)
			{
				gotoxy(50,0);
				printf("%d����Զ�����ѡ�����",i);
				Sleep(1000);
			}
		}
		if(num==3)
		{
			system("color 76");
			printf("ɾ������\n");
			scanf("%s",shan_in);
			shan_chu();
			for(i=5;i>0;i--)
			{
				gotoxy(50,0);
				printf("%d����Զ�����ѡ�����",i);
				Sleep(1000);
			}
		}
		if(num==4)
		{
			system("color 72");
			printf("�������� ��������\n");
			scanf("%s%s",geng1,geng2);
			geng_xin();
			for(i=5;i>0;i--)
			{
				gotoxy(50,0);
				printf("%d����Զ�����ѡ�����",i);
				Sleep(1000);
			} 
		}
		if(num==5)
		{
			system("color 74");
			printf("�˳��ɹ�\n");
			Sleep(1000);
			exit(0);
		}
		if(num==6)
		{
			system("color 74");
			printf("�����û����Ľ���");
			Sleep(500);
			printf(".");
			Sleep(500);
			printf(".");
			Sleep(500);
			printf(".");
			Sleep(500);
			gotoxy(0,3);
			printf("������ý���ɹ���\n");
			Sleep(500);
			system("cls");
			user_gai();
			for(i=5;i>0;i--)
			{
				gotoxy(50,0);
				printf("%d����Զ�����ѡ�����",i);
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
	if(xiang_deng(stu_power,"С"))
	{
		pow_xiao();
	} 
	if(xiang_deng(stu_power,"��"))
	{ 
		pow_da();
	}
	if(xiang_deng(stu_power,"root"))
	{
		pow_root();
	}
	mysql_close(mysql);
}
