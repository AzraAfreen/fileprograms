#include<stdio.h>
#include<string.h>
struct node
{
int data;
char name[10];
};
int main()
{
struct node n1,n2,n3,n4;
FILE *fp;
fp=fopen("strfile","rb");
if(fp==NULL)
{
printf("file error");
return;
}

fseek(fp,sizeof(n1)*4,SEEK_SET);
fread(&n4,1,sizeof(n4),fp);
printf("data=%d , name=%s\n",n4.data,n4.name);

fclose(fp);
}

