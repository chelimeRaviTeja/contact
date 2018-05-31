#include<stdio.h>
#include<conio.h>
struct contact
{
char name1[12];
char number[12];
};
void contacts();
struct contact detail[12];
int i;
void main()
{
int n;
clrscr();
contacts();
getch();
}
void contacts()
{
int n,i=0,j,min,m,k=0;
char rt[12],rt1[12],rt2[12],a[10],name2[10],choice='y';
while(choice=='y')
{
printf("Add contact\n");
printf("Enter first name\t");
scanf("%s",detail[i].name1);
printf("\n");
printf("Enter contact number\t");
scanf("%s",detail[i].number);
printf("1 save     2 cancel");
scanf("%d",&n);
if(n==1)
{
printf("Contact has been added to Contact List\n");
printf("%s\n",detail[i].name1);
printf("%s\n",detail[i].number);
fflush(stdin);
printf("wether you want to add another contact(y/n)");
scanf("%c",&choice);
//printf("%c",choice);
if(choice=='y')
{
i++;
}
else if(choice=='n')
{
continue;
}
else
{
printf("Wrong choice\n");
break;
}
}
}
if(n==2)
exit(0);
for(i=0;i<5;i++)
{
for(j=i+1;j<5;j++)
{
if(strcmp(detail[i].name1,detail[j].name1)>0)
{
//printf("%s\n",detail[i].name1);
//printf("%s\n",detail[i].number);
//printf("\n");
strcpy(rt,detail[j].name1);
strcpy(detail[j].name1,detail[i].name1);
strcpy(detail[i].name1,rt);
if(strcpy(detail[i].name1,rt))
{
strcpy(rt1,detail[j].number);
strcpy(detail[j].number,detail[i].number);
strcpy(detail[i].number,rt1);
}
}
}
printf("%s\n",detail[i].name1);
printf("%s\n",detail[i].number);
printf("\n");
}
//printf("%s\n",detail[i].number);
j=7;
printf("Enter the Name to delete contact\n");
scanf("%s",detail[j].name1);
//puts(detail[j].name1);
//scanf("%d",&a);
i=0;
strcpy(detail[5].name1,'\0') ;
while((strcmp(detail[j].name1,detail[i].name1))!=0)
{
i++;
}
//while((strcmp(detail[j].name1,detail[i].name1))>0)
//printf("Contact not found");
/*free(detail[i].name1);
break;
}
i++;
}*/
while(i<5)
{
strcpy(detail[i].name1,detail[i+1].name1);
strcpy(detail[i].number,detail[i+1].number);
i++;
}
clrscr();
printf("New Contact List\n");
for(i=0;i<5;i++)
{
printf("%s\n",detail[i].name1);
printf("%s\n",detail[i].number);
}
printf("Did you want to edit contact\n");
printf("1 Edit Name \n");
printf("2 edit Number\n");
scanf("%d",&m);
if(m==1)
{
printf("Select a name to Edit\n");
j=8;
scanf("%s",detail[j].name1);
for(i=0;i<5;i++)
{
if(strcmp(detail[i].name1,detail[j].name1)==0)
{
printf("Enter new name\n");
scanf("%s",detail[k].name1);
strcpy(detail[i].name1,detail[k].name1);
}
}
clrscr();
printf("New Contact List\n");
for(i=0;i<5;i++)
{
for(j=i+1;j<5;j++)
{
if(strcmp(detail[i].name1,detail[j].name1)>0)
{
//printf("%s\n",detail[i].name1);
//printf("%s\n",detail[i].number);
//printf("\n");
strcpy(rt,detail[j].name1);
strcpy(detail[j].name1,detail[i].name1);
strcpy(detail[i].name1,rt);
if(strcpy(detail[i].name1,rt))
{
strcpy(rt1,detail[j].number);
strcpy(detail[j].number,detail[i].number);
strcpy(detail[i].number,rt1);
}
}
}
printf("%s\n",detail[i].name1);
printf("%s\n",detail[i].number);
}
}
if(m==2)
{
printf("Select a name to edit his/her number\n");
j=9,k=0;
scanf("%s",detail[j].name1);
for(i=0;i<5;i++)
{
if(strcmp(detail[i].name1,detail[j].name1)==0)
{
printf("Enter new number\n");
scanf("%s",detail[k].number);
strcpy(detail[i].number,detail[k].number);
}
}
clrscr();
printf("New Contact List\n");
for(i=0;i<5;i++)
{
printf("%s\n",detail[i].name1);
printf("%s\n",detail[i].number);
}
}
}
