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

/*����mysql���ݿ�*/
void connect_sql()
{
	if(!mysql_real_connect(mysql,"localhost","root","","1",0,NULL,0))
	{
		printf("���ݿ�����ʧ��\n%s\n",mysql_error(mysql));
		exit(0) ;
	}
	printf("--------���ݿ����ӳɹ�--------\n");
}

//��ѯ
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

//���Բ�ѯ
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

//���� 
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

//ɾ�� 
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

//���� 
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
	gbk="SET CHARACTER SET GBK";
	t=mysql_real_query(mysql,gbk,(unsigned int)strlen(gbk));
	if(t!=0) 
    { 
    	printf("----���ݿ�������ó����쳣----\n"); 
    }
    else
    printf("------���ݿ�������óɹ�------\n"); 
}

//��¼ 
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

//�Ķ�
void gai_dong()
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
	printf("5.�˳�\n");
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
		}
		if(num==2)
		{
			system("color 75");
			printf("��������\n");
			printf("��� �绰 Email ���� ��ϵ ��ע\n");
			scanf("%s%s%s%s%s%s",zeng1,zeng2,zeng3,zeng4,zeng5,zeng6);
			zeng_jia();
		}
		if(num==3)
		{
			system("color 76");
			printf("ɾ������\n");
			scanf("%s",shan_in);
			shan_chu();
		}
		if(num==4)
		{
			system("color 72");
			printf("�������� ��������\n");
			scanf("%s%s",geng1,geng2);
			geng_xin(); 
		}
		if(num==5)
		{
			system("color 74");
			printf("�˳��ɹ�\n");
			Sleep(1000);
			exit(0);
			
		}
		for(i=10;i>0;i--)
		{
			gotoxy(50,0);
			printf("%d����Զ�����ѡ�����",i);
			Sleep(1000);
		}
		system("cls");
		num=0;
		c=0;
	}
	mysql_close(mysql);
}
