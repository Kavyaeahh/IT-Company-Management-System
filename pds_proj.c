#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include <conio.h>
# define max 5
int te=0;
 int i=0;
 int MAXSIZE = 100;       
char stack[50][50];     
int top = -1;   
char queue[max][80], data[80];
      int front, rear, reply;
      int ch;
     int front = -1;
     int rear = -1;
     
int isempty();
 int isfull();
 char* peek();
 char* pop();
 char push(char *data);
 void display1();
 int insq(char queue[max][80], int *rear, char data[80]);
void disp();

void hr(){
    char ch;
    int cid;
        char name[100];
        int pid;
    void add(){
        
    FILE *fcustd;
    fcustd = fopen("emp.txt", "a+");
    printf("\n\n\t\tEnter Employee ID: ");
        scanf("%d",&cid);
        printf("\n\t\tEnter Employee Name: ");
        scanf("%s",name);
        printf("\n\t\tEnter Employee Salary: ");
        scanf("%d",&pid);
       
        if(i==0){
        fprintf(fcustd,"Emp_ID\t\tEmp_Name\t\tEmp_Sal\n");
        i++;}
        fprintf(fcustd," %d\t  %s\t  %d\n",cid,name,pid);
        fclose(fcustd);
    }
    void update(){


    }
    void display(){
        FILE *fp;
		if ((fp=fopen("emp.txt","r"))==NULL){
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
add();
break;
case 2:
update();
break;
case 3:
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
void cli(){
    if(te==0){
    push("AI");
    push("Google");
    push("Edge");
    push("Microsoft");
    push("Alexa");
    push("Amazon");};
    te++;
    char nm[50],nm1[50];

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
	
	while(a==0){
		printf("\n\n1. Add Details \n2. Delete Last Entry Details \n3. Display Details \n4. exit\n\n");
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

printf("\nEnter Project Name : ");
scanf("%s",nm);
printf("\nEnter Client Name : ");
scanf("%s",nm1);
push(nm);
push(nm1);
break;
case 2:
pop();
pop();
break;
case 3:
printf("Client Name\t Project \n");
display1();
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
        printf("Client Name\t Project \n");
display1();
	}
    
}


void client(){
    printf("----------------------------------  OUR PRIDE CLIENTS ------------------------------------- \n\n");
    char array[][20] = { "Google", "facebook", "Amazon" };
	
  void dis(){
    for (i = 0; i < 3; i++)
        printf("\t %s ", array[i]);
    }
    printf("\n");


dis();


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
        
        scanf("%s",data);
        insq(queue, &rear, data);
	
		
	}
	else{
		printf("Your Score is  %d : " ,score );
		printf("\n\n");
		printf(" Sorry You Failed the Exam Better Luck Next Time ");
	}
	
	}

    printf("----------------------------------  OUR PRIDE CLIENTS -------------------------------------\n\n");
    dis();
    printf("\n");
    disp();

	


}
void project(){
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
    char array[][20] = { "proj x by Google", " proj y by facebook", "proj z by Amazon" };
	
  void dis(){
    for (i = 0; i < 3; i++)
        printf("\n %s ", array[i]);
    }
    disp();
    printf("\n----------let us take project x () by Google -------\n\n");

    printf(" there are 7 process in making softwares\n\n");
    printf("Planning Stage\nFeasibility or Requirements of Analysis Stage\nDesign and Prototyping Stage\nSoftware Development Stage\nSoftware Testing Stage\nImplementation and Integration\nOperations and Maintenance Stage\n");

printf("\n ****** AGILE METHODOLOGY IS ADOPTED ***************\n\n");

void plan(){
    char m[100];
    printf("Enter the planning : \n\n");
    scanf("%s",m);
    char a1[10],ad[100];


    printf(" \n\nIs There Any Changes ? (yes / no) : ");
    scanf("%s",&a1);
    
   
	int a2=strcmp(a1,"yes");
	if(a2==0){
        printf("\n\n what are the changes ? : \n\n");
    scanf("%s",&ad);
        printf("\n\n ------ Changes sent to the planning team -----------\n\n");
        plan();
    }
    


}
void req(){
    char m[100];
    printf("Enter the requirement : \n\n");
    scanf("%s",m);
    char a1[10],ad[100];
    printf("\n\n Is There Any Changes ? (yes / no) : ");
    scanf("%s",&a1);
    
	int a2=strcmp(a1,"yes");
	if(a2==0){
        printf("\n\n what are the changes ? : \n\n");
    scanf("%s",&ad);
        
        printf(" ------ Changes sent to the requirement team -----------\n\n");
        req();
    }

}
void des(){
    char m[100];
    printf("Enter the design patern : \n\n");
    scanf("%s",m);
    char a1[10],ad[100];
    printf("\n\nIs There Any Changes ? (yes / no) : ");
    scanf("%s",&a1);
  
	int a2=strcmp(a1,"yes");
	if(a2==0){
        printf("\n\n what are the changes ? : ");
    scanf("%s",&ad);
    
        printf("\n\n ------ Changes sent to the design team -----------\n\n");
        des();
    }

}
void sde(){
    char m[100];
    printf("Enter the development : \n\n");
    scanf("%s",m);
    char a1[10],ad[100];


    printf("\n\n Is There Any Changes ? (yes / no) : ");
    scanf("%s",&a1);
 
	int a2=strcmp(a1,"yes");
	if(a2==0){
        printf("\n\n what are the changes ? : ");
    scanf("%s",&ad);
    
        printf("\n\n ------ Changes sent to developer team -----------\n\n");
        sde();
    }

}
void st(){
    char m[100];
    printf("Enter the test cases : \n\n");
    scanf("%s",m);
    char a1[10],ad[100];


    printf(" \n\nIs There Any Changes ? (yes / no) : ");
    scanf("%s",&a1);
    
	int a2=strcmp(a1,"yes");
	if(a2==0){
        printf("\n\n what are the changes ? : ");
    scanf("%s",&ad);
    
        printf("\n\n ------ Changes sent to the testing team -----------\n\n");
        st();
    }

}
void integrate(){
    char m[100];
    printf("Enter the integration way : \n\n");
    scanf("%s",m);
    char a1[10],ad[100];


    printf("\n\n Is There Any Changes ? (yes / no) : ");
    scanf("%s",&a1);
    
	int a2=strcmp(a1,"yes");
	if(a2==0){
        printf("\n\n what are the changes ? : ");
    scanf("%s",&ad);
    
        printf(" \n\n------ Changes sent to the integration team -----------\n\n");
        integrate();
    }

}
void maintain(){
    char m[100];
    printf("Enter the maintainence plan : \n\n");
    scanf("%s",m);
    char a1[10],ad[100];


    printf("\n\n Is There Any Changes ? (yes / no) : ");
    scanf("%s",&a1);
    
	int a2=strcmp(a1,"yes");
	if(a2==0){
        printf("\n\n what are the changes ? : ");
    scanf("%s",&ad);
    
        printf(" \n\n------ Changes sent to the maintanence team -----------\n\n");
        maintain();
    }

}

plan();
req();
des();
sde();
st();
integrate();
maintain();

printf(" (:(:(:(:(:(:(:(:(:(:(:(:(:(:(:(:(:(:(:(:(:(:(:   Project Completed  :):):):):):):):):):):):):):):):):):):):):):):)");

}
else{
		printf("\n\n You Are Not An Emplyee");
	}

	}
	else{
		printf("\n\n You Are Not Allowed In This Module");
	}


}

void payment(){
    struct node
{
        int info;
        struct node *next;
};
struct node *start=NULL;
  void create1()
{
       
        struct node *temp,*ptr;

         int l;
        printf("How Many Projects Succesfully Completed : \n");
        scanf("%d",&l);
        for(int i=0;i<l;i++){
       
        temp=(struct node *)malloc(sizeof (struct node));
        if(temp==NULL)
        {
                printf("nOut of Memory Space:n");
                exit(0);
        }
        printf("Enter the Cost For Project: ");
        scanf("%d",&temp->info);
        temp->next=NULL;
        if(start==NULL)
        {
                start=temp;
        }
        else
        {
                ptr=start;
                while(ptr->next!=NULL)
                {
                        ptr=ptr->next;
                }
                ptr->next=temp;
        }}
}
void display11()
{
        struct node *ptr;
        if(start==NULL)
        {
                printf("nList is empty:n");
                return;
        }
        else
        {
                ptr=start;
              int i=1;
                while(ptr!=NULL)
                {
                        printf("Cost For Project %d = %d\n", i,ptr->info );
                        ptr=ptr->next ;
                        i++;
                }
        }
}
void prof()
{int a,s=0,s1=0;
        struct node *ptr;
        if(start==NULL)
        {
                printf("nList is empty:n");
                return;
        }
        else
        {
                ptr=start;
           
                while(ptr!=NULL)
                {
                         a=ptr->info-50-5;
                        
                        s+=a;
                        s1+=ptr->info;
                        ptr=ptr->next ;
                }
        }
    if(s>0){
        int d=s;
    printf(" \t\tOverall Profit is %d lakhs .....",d);
    }
    else if (s==0){
        printf(" \t\tOverall neither profit nor loss");
    }

    
    else{
      
        printf("loss is %d lakhs .....",s);
    }
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
		printf("\n\n This is a sample project payments for a set of duration \n\n");
        printf("the project payment done if and only if the status of the project is over \n\n");
        create1();
        printf(" Emplyee Salary : Rs. 50 Lakhs \n\n");
        printf(" Miscellaneous  : Rs. 5 Lakhs \n\n");
        printf(" Total cost for the project \n");
        display11();
        printf("-*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*-\n\n");
        prof();
        printf("\n\n");
        printf("-*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*-\n\n");
        


	
        }
        else{
            exit(0);
        }
    }
    else{
        exit(0);
    }
}



int main(){
int ch;
	printf("\n ------------------------------------------------------------------- \n");
	printf("\t\t Welcome to Nithin's Tech Company ");

	printf("\n ------------------------------------------------------------------- \n\n");
	char s1[10]="yes";
	int a=strcmp(s1,"yes");
	while(a==0){
		printf("\n\n1.HR Management\n2.Projects\n3.Clients\n4. Project Development (Only for working ppl and clients) \n5.payment (only admin) \n6.exit\n\n");
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
cli();
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
payment();
break;
case 6:
exit(0);
default:
printf("\n enter the choice from 1 to 5 ");
}
}
}
int isempty() {

   if(top == -1)
      return 1;
   else
      return 0;
}
   
int isfull() {

   if(top == MAXSIZE)
      return 1;
   else
      return 0;
}

char* peek() {
   return stack[top];
}

char* pop() {
   char* data;
	
   if(!isempty()) {
      data = stack[top];
      top = top - 1;   
      return data;
   } else {
      printf("Could not retrieve data, Stack is empty.\n");
   }
}

char push(char *data) {

   if(!isfull()) {
      top = top + 1;
      strcpy(stack[top], data);
    //   stack[top] = data;
   } else {
      printf("Could not insert data, Stack is full.\n");
   }
}
void display1(){
    int q=1;
     int n=sizeof(stack)/sizeof(stack[0]);
     for(int x=top+1;x>=0;x--){
        printf("%s \t",stack[x]);
       if(q%2==0){
        printf("\n");
       }
       q++;
     }
    
}
int insq(char queue[max][80], int *rear, char data[80])
{
      if(*rear == max -1)
            return(-1);
      else
      {
            *rear = *rear + 1;
            strcpy(queue[*rear], data);
            return(1);
      }
}
void disp(){
    for (i = front; i <= rear; i++)
            printf("\t %s ", queue[i]);
            if(i%3==0){
        printf("\n");}
}
