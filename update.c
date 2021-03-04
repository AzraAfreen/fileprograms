#include<stdio.h>
#include<string.h>
struct node
{
int data;
char name[10];
};
void search(int,int *,int *);
FILE *fp=NULL,*fp1=NULL;
int main()
{
FILE *fp;
int found=0,pos=0;
struct node n;

printf("enter data and new name to update\n");
scanf("%d",&n.data);
scanf("%s",n.name);
search(n.data,&found,&pos);

fp=fopen("strfile","r+");
 if(fp==NULL)
 {
	printf("file error");
        return;
 }

fseek(fp,sizeof(n)*(pos-1),SEEK_SET);
fwrite(&n,1,sizeof(n),fp);



fclose(fp);

}
void search(int data1,int *found,int *pos)
{
int count=0,flag=0;

struct node n1;
fp1=fopen("strfile","rb");
while(fread(&n1,1,sizeof(n1),fp1)>0)
 {
	count++;
	if(n1.data==data1)
	{
	flag=1;
	break;
        }	
 }
  if(flag==0)
  {
	printf("not found");
	fclose(fp1);
	exit(1);
  }
  else
  {
	*pos=count;
	*found=1;
  }

	fclose(fp1);
}



















































