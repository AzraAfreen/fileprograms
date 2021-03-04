#include<stdio.h>
#include<string.h>
struct node 
{
int data;
char name[10];
};
int main()
{
struct node n;
FILE *fp;
fp=fopen("strfile","ab");
if(fp==NULL)
{
printf("file error");
return;
}
fseek(fp,sizeof(n),SEEK_SET);
n.data=500;
strcpy(n.name,"azzu");
fwrite(&n,1,sizeof(n),fp);

fread(&n,1,sizeof(n),fp);
printf("data=%d , name=%s\n",n.data,n.name);

fclose(fp);
}
