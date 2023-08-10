#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include <conio.h>
#define size 200
void hr(){

	struct emp
{
    int id;
    char *name;
}*emp1, *emp3;

char * arrr = "file4.txt";

FILE *fp, *fp1;
int count = 10;

void create()
{
	  int i;
    char *p;

    emp1 = (struct emp *)malloc(sizeof(struct emp));
    emp1->name = (char *)malloc((size)*(sizeof(char)));
    printf("Enter name of employee : ");
    scanf(" %[^\n]s", emp1->name);
    printf("Enter emp id : ");
    scanf(" %d", &emp1->id);
    fwrite(&emp1->id, sizeof(emp1->id), 1, fp);
    fwrite(emp1->name, size, 1, fp);
    count++;   
    fclose(fp);
   
}


void display()
{
    emp3=(struct emp *)malloc(1*sizeof(struct emp));
    emp3->name=(char *)malloc(size*sizeof(char));
    int i = 1;

    if (fp1 == NULL)
        printf("\nFile not opened for reading");
    while (i <= count)
    {
        fread(&emp3->id, sizeof(emp3->id), 1, fp1);
        fread(emp3->name, size, 1, fp1);
        printf("\n%d %s",emp3->id,emp3->name);
        i++;
    }
    fclose(fp1);
    free(emp3->name);
    free(emp3);
   
}

void update()
{
    int id, flag = 0, i = 1;
    char s[size];

    if (fp1 == NULL)
    {
        printf("File cant be opened");
        return;
    }
    printf("Enter employee id to update : ");
    scanf("%d", &id);
    emp3 = (struct emp *)malloc(1*sizeof(struct emp));
        emp3->name=(char *)malloc(size*sizeof(char));
    while(i<=count)
    {
        fread(&emp3->id, sizeof(emp3->id), 1, fp1);
        fread(emp3->name,size,1,fp1);
        if (id == emp3->id)
        {
            printf("Enter new name of emplyee to update : ");
            scanf(" %[^\n]s", s);
            fseek(fp1, -204L, SEEK_CUR);
            fwrite(&emp3->id, sizeof(emp3->id), 1, fp1);
            fwrite(s, size, 1, fp1);
            flag = 1;
            break;
        }
        i++;
    }
    if (flag != 1)
    {
        printf("No employee record found");
        flag = 0;
    }
    fclose(fp1);
}

	
	char a1[10],ad[100];
	
	printf(" \n Are you HR Person (yes / no ) : ");
	scanf("%s",&a1);
	printf("\n\n");
	int a2=strcmp(a1,"yes");
	if(a2==0){
		
	
		printf(" *********** Enter ADMIN PASSWORD **************  :   ");
		scanf("%s",&ad);
		int a=strcmp(ad,"UserIsAdmin");
		if(a==0){
		char s1[10]="yes";
int ch;
	int a=strcmp(s1,"yes");
	while(a==0){
		printf("\n\n1. Add Details \n2. update Details \n3. display Details \n4. exit\n\n");
		printf("Do you want to continue..... (yes /no)  : ");
		scanf("%s",&s1);
        int a=strcmp(s1,"yes");
      if(a!=0){ printf("\n\n ********************** Thank You !!  **********************  \n\n");
exit(2);
}
printf("\nEnter your choice  : ");
scanf("%d",&ch);
switch(ch){
case 1:
fp = fopen(arrr, "a");
            create();
break;

case 2:
 fp1 = fopen(arrr, "r+");
            update();
break;
case 3:
fp1 = fopen(arrr,"rb");
            display();
break;
case 4:
exit(0);
default:
printf("\n enter the choice from 1 to 4 ");
}
}
		}
		else{
			printf("xxxx... You Are Not An HR .. xxxx \n");
			exit(1);
		}
	}
	else{
		char ch;

		printf("Stats about our company \n\n ");

		printf("About Company \n\n ");
		FILE *fp;
		if ((fp=fopen("about.txt","r"))==NULL){
			exit(1);
		}
		else{
			    ch=fgetc(fp);
				while(ch!=EOF){
					printf("%c",ch);
					ch=fgetc(fp);
				}

		
		fclose(fp);

	}
	printf("\n");
	printf("\n\nContact Us\n\n ");
		FILE *fp1;
		if ((fp1=fopen("contact.txt","r"))==NULL){
			exit(1);
		}
		else{
			    ch=fgetc(fp1);
				while(ch!=EOF){
					printf("%c",ch);
					ch=fgetc(fp1);
				}

		
		fclose(fp1);

	}
}
}


void proj(){
	

	typedef struct node
{
    char s_name[20],s_address[50];
    
    struct node *next;
}s;


s *push(s *top)
{
    s *p;
    p=(s *)malloc(sizeof(s));
    if(p==NULL)
    {
        printf("no memory allocated");
    }
    else
    {
        printf("\nEnter The Project : ");
        scanf("%s",&p->s_name);
        printf("Enter The Client : ");
        scanf("%s",&p->s_address);
       
        p->next=top;
        top=p;
    }
    return(top);
}
s *pop(s *top)
{
   s *p;
   if(top==NULL)
   {
       printf("nothing to pop");
   }
   else
   {
       printf("\nThe project is: %s",top->s_name);
       printf("\nThe client is: %s",top->s_address);
   
       top=top->next;
   }
   return(top);
}
void display(s *top)
{
    if(top==NULL)
    {
        printf("nothing to display");
    }
    else
    {
        while(top!=NULL)
        {
             printf("\nThe project is: %s",top->s_name);
             printf("\t\tThe client is: %s",top->s_address);
             
             top=top->next;
         }
     }
}

	char a1[10],ad[100];
	
	printf(" \n Are you Project Head (yes / no ) : ");
	scanf("%s",&a1);
	printf("\n\n");
	int a2=strcmp(a1,"yes");
	
	if(a2==0){
		
		printf(" *********** Enter ADMIN PASSWORD **************  :   ");
		scanf("%s",&ad);
		int a=strcmp(ad,"ProjectAdmin");
		if(a==0){
		char s1[10]="yes";
int ch;
	int a=strcmp(s1,"yes");
	 s *top=NULL;
	while(a==0){
		printf("\n\n1. Add Details \n2. Delete Details \n3. Display Details \n4. exit\n\n");
		printf("Do you want to continue..... (yes /no)  : ");
		scanf("%s",&s1);
        int a=strcmp(s1,"yes");
      if(a!=0){ printf("\n\n ********************** Thank You !!  **********************  \n\n");
exit(2);
}
printf("\nEnter your choice  : ");
scanf("%d",&ch);
switch(ch){
case 1:
top=push(top);
break;
case 2:
top=pop(top);
break;
case 3:
display(top);
break;
case 4:
exit(0);
default:
printf("\n enter the choice from 1 to 4 ");
}
}
		}
		else{
			printf("xxxx... You Are Not An project manager .. xxxx \n");
			exit(1);
		}
	}
	else{
	printf(" projects\t\tClient\n");
	printf(" Siri\t\tGoogle\n");
	printf(" Edge\t\tMicrosoft\n");
	printf(" Alexa\t\tamazon\n");
	printf(" App\t\tFacebook\n");
		
	}
}

void client(){






	int n;
	n=3;

char a1[10],ad[100];
int i;
	
	printf(" \n Are you willing for be a client (yes / no ) : ");
	scanf("%s",&a1);
	printf("\n\n");
	int a2=strcmp(a1,"yes");
	if(a2==0){
		printf("You Should Get Above 50 percent");
		printf(" in the test to be eligible for client \n\n");
		printf("....HERE'S YOUR TEST.....\n\n");
		int score=0;
		char z1[100];
		char name[100];
		
		printf(" 1. xxxxxxxxxxxxxxxxx  : ");
		scanf("%s",&z1);
	printf("\n\n");
	int a3=strcmp(z1,"ans");
	if(a3==0){
		score++;
	}
	printf(" 2. xxxxxxxxxxxxxxxxx  : ");
		scanf("%s",&z1);
	printf("\n\n");
	int a4=strcmp(z1,"ans");
	if(a4==0){
		score++;
	}
	printf(" 3. xxxxxxxxxxxxxxxxx  : ");
		scanf("%s",&z1);
	printf("\n\n");
	int a5=strcmp(z1,"ans");
	if(a5==0){
		score++;
	}
	printf(" 4. xxxxxxxxxxxxxxxxx  : ");
		scanf("%s",&z1);
	printf("\n\n");
	int a6=strcmp(z1,"ans");
	if(a6==0){
		score++;
	}
	printf(" 5. xxxxxxxxxxxxxxxxx  : ");
		scanf("%s",&z1);
	printf("\n\n");
	int a7=strcmp(z1,"ans");
	if(a7==0){
		score++;
	}
	printf(" 6. xxxxxxxxxxxxxxxxx  : ");
		scanf("%s",&z1);
	printf("\n\n");
	int a8=strcmp(z1,"ans");
	if(a8==0){
		score++;
	}
	printf(" 7. xxxxxxxxxxxxxxxxx  : ");
		scanf("%s",&z1);
	printf("\n\n");
	int a9=strcmp(z1,"ans");
	if(a9==0){
		score++;
	}
	printf(" 8. xxxxxxxxxxxxxxxxx  : ");
		scanf("%s",&z1);
	printf("\n\n");
	int a11=strcmp(z1,"ans");
	if(a11==0){
		score++;
	}
	printf(" 9. xxxxxxxxxxxxxxxxx  : ");
		scanf("%s",&z1);
	printf("\n\n");
	int a111=strcmp(z1,"ans");
	if(a111==0){
		score++;
	}
	printf(" 10. xxxxxxxxxxxxxxxxx  : ");
		scanf("%s",&z1);
	printf("\n\n");
	int a121=strcmp(z1,"ans");
	if(a121==0){
		score++;
	}

	if(score>5){
		
		printf("Your Score is  %d : " ,score );
		printf("\n\n");
		printf(" ----- CONGRATSSS YOU ARE ELIGIBLE --------- \n\n");
		printf("Enter Your Name : ");
	
		
	}
	else{
		printf("Your Score is  %d : " ,score );
		printf("\n\n");
		printf(" Sorry You Failed the Exam Better Luck Next Time ");
	}
	
	}
	


}
void project(){
	
}





int main(){
int ch;
	printf("\n ------------------------------------------------------------------- \n");
	printf("\t\t Welcome to Nithin's Tech Company ");

	printf("\n ------------------------------------------------------------------- \n\n");
	char s1[10]="yes";
	int a=strcmp(s1,"yes");
	while(a==0){
		printf("\n\n1.HR Management\n2.Projects\n3.Clients\n4. Project Development (Only for working ppl and clients) \n5.exit\n\n");
		printf("Do you want to continue..... (yes /no)  : ");
		scanf("%s",&s1);
int a=strcmp(s1,"yes");
      if(a!=0){ printf("\n\n ********************** Thank You !!  **********************  \n\n");
exit(2);
}
printf("\nEnter your choice  : ");
scanf("%d",&ch);
switch(ch){
case 1:
printf("\n Welcome to HR Management \n\n");
hr();
break;
case 2:
printf("\n Welcome to Project Section\n\n ");
proj();
break;
case 3:
printf("\n Welcome to Clients Section\n\n ");
client();
break;
case 4:
printf("\n Welcome to Project Development\n\n ");
project();
break;
case 5:
exit(0);
default:
printf("\n enter the choice from 1 to 5 ");
}
}
}
