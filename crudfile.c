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
//create

n1.data=100;
n2.data=200;
n3.data=300;
n4.data=400;
fp=fopen("strfile","wb");
if(fp==NULL)
{
printf("file error");
return;
}
strcpy(n1.name,"azra");
fwrite(&n1,1,sizeof(n1),fp);

strcpy(n2.name,"afreen");
fwrite(&n2,1,sizeof(n2),fp);

strcpy(n3.name,"shaik");
fwrite(&n3,1,sizeof(n3),fp);

strcpy(n4.name,"cds");
fwrite(&n4,1,sizeof(n4),fp);

fclose(fp);



}

