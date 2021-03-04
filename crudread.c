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

fread(&n1,1,sizeof(n1),fp);
printf("data=%d , name=%s\n",n1.data,n1.name);

fread(&n2,1,sizeof(n2),fp);
printf("data=%d , name=%s\n",n2.data,n2.name);


fread(&n3,1,sizeof(n3),fp);
printf("data=%d , name=%s\n",n3.data,n3.name);

fread(&n4,1,sizeof(n4),fp);
printf("data=%d , name=%s\n",n4.data,n4.name);

fread(&n4,1,sizeof(n4),fp);
printf("data=%d , name=%s\n",n4.data,n4.name);
fclose(fp);
}

