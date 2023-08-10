#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include <conio.h>
# define max 100
 int i=0;
 int te=0;
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
        fprintf(fcustd,"\n\nEmp_ID\tEmp_Name\tEmp_Sal\n\n");
        }i++;
        fprintf(fcustd," %d\t  %s\t  %d\n",cid,name,pid);
        fclose(fcustd);
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
		printf("\n\n1. Add Details \n2. display Details \n3. exit\n\n");
		printf("Do you want to continue..... (yes /no)  : ");
		scanf("%s",&s1);
        int a=strcmp(s1,"yes");
      if(a!=0){ printf("\n\n ********************** Thank You !!  **********************  \n\n");
      exit(0);

}
printf("\nEnter your choice  : ");
scanf("%d",&ch);
switch(ch){
case 1:
add();
break;

case 2:
display();
break;
case 3:
exit(0);
default:
printf("\n enter the choice from 1 to 4 ");
}
}
		}
		else{
			printf("xxxx... You Are Not An HR .. xxxx \n");
		
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
    if (te==0){
    push("AI");
    push("Google");
    push("IRCTC");
    push("Tcs");
    push("Alexa");
    push("Amazon");}
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

printf("\nClient \t\t\tProject \n\n");
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
			printf("\n");
		}
	}
	else{
        printf("Client \t\t\tProject \n\n");
display1();
	}

}


void client(){
   
    char array[][20] = { "Google", "facebook", "Amazon" };

  void dis(){
    for (i = 0; i < 3; i++)
        printf("\t %s ", array[i]);
    }
    printf("\n");





    int n;
	n=3;

char a1[10],ad[100];
int i;

	printf(" \n\n Are you willing for be a client (yes / no ) : ");
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

		printf(" 1. What is the range of values that can be stored by int datatype in C : ");
		scanf("%s",&z1);
	printf("\n\n");
	int a3=strcmp(z1,"-(2^31)_to_(2^31)-1");
	if(a3==0){
		score++;
	}
	printf(" 2. What is the disadvantage of arrays in C : ");
		scanf("%s",&z1);
	printf("\n\n");
	int a4=strcmp(z1,"memory_allocation");
	if(a4==0){
		score++;
	}
	printf(" 3. What does the following declaration indicate  int x: 8; : ");
		scanf("%s",&z1);
	printf("\n\n");
	int a5=strcmp(z1,"8_bit");
	if(a5==0){
		score++;
	}
	printf(" 4. what  is the proper syntax for declaring macros in C : ");
		scanf("%s",&z1);
	printf("\n\n");
	int a6=strcmp(z1,"#define_||_long_long");
	if(a6==0){
		score++;
	}
	printf(" 5. Which  is an exit controlled loop : ");
		scanf("%s",&z1);
	printf("\n\n");
	int a7=strcmp(z1,"do-while_loop");
	if(a7==0){
		score++;
	}
	printf(" 6.  If p is an integer pointer with a value 1000, then what will the value of p + 5 be  : ");
		scanf("%s",&z1);
	printf("\n\n");
	int a8=strcmp(z1,"1020");
	if(a8==0){
		score++;
	}
	printf(" 7. In which of the following languages is function overloading not possible  : ");
		scanf("%s",&z1);
	printf("\n\n");
	int a9=strcmp(z1,"c");
	if(a9==0){
		score++;
	}
	printf(" 8. Which  is not a storage class specifier in C?  : ");
		scanf("%s",&z1);
	printf("\n\n");
	int a11=strcmp(z1,"volatile");
	if(a11==0){
		score++;
	}
	printf(" 9. what will occur if we call the free() function on a NULL pointer   : ");
		scanf("%s",&z1);
	printf("\n\n");
	int a111=strcmp(z1,"execute_normally");
	if(a111==0){
		score++;
	}
	printf(" 10. char (*x) (char*) what is x in the code  : ");
		scanf("%s",&z1);
	printf("\n\n");
	int a121=strcmp(z1,"pointer_to_function");
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
		printf(" Sorry You Failed the Exam Better Luck Next Time \n\n");
	}

	}

    printf("----------------------------------  OUR PRIDE CLIENTS -------------------------------------\n\n");
    dis();
    printf("\n\n");
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

printf("\n ************** AGILE METHODOLOGY IS ADOPTED ***************\n\n");



void plan(){
    FILE *fp;
    char m[100];
    printf("Enter the planning  (developer) : \n\n");
    scanf("%s",m);
    fp=fopen("data.txt","w");
    fprintf(fp,m);
    fclose(fp);
    char a1[10],ad[100];


    printf(" \n\nIs There Any Changes ? (yes / no) (client ) : ");
    scanf("%s",&a1);


	int a2=strcmp(a1,"yes");
	if(a2==0){
        printf("\n\n what are the changes ? (client): \n\n");
    scanf("%s",&ad);
        printf("\n\n ------ Changes sent to the planning team -----------\n\n");
        plan();
    }



}
void req(){
    FILE *fp;
    char m[100];
    printf("\nEnter the requirement (developer): \n\n");
    scanf("%s",m);
    fp=fopen("data1.txt","w");
    fprintf(fp,m);
    fclose(fp);
    char a1[10],ad[100];
    printf("\n\n Is There Any Changes ? (yes / no) (client): ");
    scanf("%s",&a1);

	int a2=strcmp(a1,"yes");
	if(a2==0){
        printf("\n\n what are the changes ? (client): \n\n");
    scanf("%s",&ad);

        printf(" ------ Changes sent to the requirement team -----------\n\n");
        req();
    }

}
void des(){
    FILE *fp;
    char m[100];
    printf("\nEnter the design patern (developer) : \n\n");
    scanf("%s",m);
    fp=fopen("data2.txt","w");
    fprintf(fp,m);
    fclose(fp);
    char a1[10],ad[100];
    printf("\n\nIs There Any Changes ? (yes / no) (client): ");
    scanf("%s",&a1);

	int a2=strcmp(a1,"yes");
	if(a2==0){
        printf("\n\n what are the changes ? (client): ");
    scanf("%s",&ad);

        printf("\n\n ------ Changes sent to the design team -----------\n\n");
        des();
    }

}
void sde(){
    FILE *fp;
    char m[100];
    printf("\nEnter the development (developer) : \n\n");
    scanf("%s",m);
    fp=fopen("data3.txt","w");
    fprintf(fp,m);
    fclose(fp);
    char a1[10],ad[100];


    printf("\n\n Is There Any Changes ? (yes / no) (client): ");
    scanf("%s",&a1);

	int a2=strcmp(a1,"yes");
	if(a2==0){
        printf("\n\n what are the changes ? (client): ");
    scanf("%s",&ad);

        printf("\n\n ------ Changes sent to developer team -----------\n\n");
        sde();
    }

}
void st(){
    FILE *fp;
    char m[100];
    printf("\nEnter the test cases (developer): \n\n");
    scanf("%s",m);
    fp=fopen("data4.txt","w");
    fprintf(fp,m);
    fclose(fp);
    char a1[10],ad[100];


    printf(" \n\nIs There Any Changes ? (yes / no) (client) : ");
    scanf("%s",&a1);

	int a2=strcmp(a1,"yes");
	if(a2==0){
        printf("\n\n what are the changes ? (client) : ");
    scanf("%s",&ad);

        printf("\n\n ------ Changes sent to the testing team -----------\n\n");
        st();
    }

}
void integrate(){
    FILE *fp;
    char m[100];
    printf("\nEnter the integration way (developer): \n\n");
    scanf("%s",m);
    fp=fopen("data5.txt","w");
    fprintf(fp,m);
    fclose(fp);
    char a1[10],ad[100];


    printf("\n\n Is There Any Changes ? (yes / no) (client): ");
    scanf("%s",&a1);

	int a2=strcmp(a1,"yes");
	if(a2==0){
        printf("\n\n what are the changes ? (client) : ");
    scanf("%s",&ad);

        printf(" \n\n------ Changes sent to the integration team -----------\n\n");
        integrate();
    }

}
void maintain(){
    FILE *fp;
    char m[100];
    printf("\nEnter the maintainence plan (developer) : \n\n");
    scanf("%s",m);
    fp=fopen("data6.txt","w");
    fprintf(fp,m);
    fclose(fp);
    char a1[10],ad[100];


    printf("\n\n Is There Any Changes ? (yes / no) (client) : ");
    scanf("%s",&a1);

	int a2=strcmp(a1,"yes");
	if(a2==0){
        printf("\n\n what are the changes ? (client) : ");
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
exit(0);

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

    printf("\n\n -------------------  Congratsss !!!! Your Company Is Making Profitss And Growingg .. -------------------- \n\n");
    
    }
    else if (s==0){
        printf(" \t\tOverall neither profit nor loss");
        printf("\n\n -------------------   Your Company Is in Same psoition .. -------------------- \n\n");
    
    }


    else{

        printf("loss is %d lakhs .....",s);

        printf("\n\n -------------------  Alert !!!! Your Company Is Making LOSS And  .. -------------------- \n\n");
    
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
        exit(0);




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
   
   } else {
      printf("Could not insert data, Stack is full.\n");
   }
}
void display1(){
    int q=1;
     for(int x=top;x>=0;x--){
        printf("%s \t\t\t",stack[x]);
       if(q%2==0){
        printf("\n");
       }
       q++;
     }

}
int insq(char queue[max][80], int *rear, char data[80])
{
    int a=*rear;
    int a2=strcmp(data,"google");
    if(a2==0){
printf("\n\nalready existing client\n\n");
return (1);
    }
    int a3=strcmp(data,"facebook");
    if(a3==0){
printf("\n\nalready existing client\n\n");
return (1);
    }
    int a4=strcmp(data,"amazon");
    if(a4==0){
printf("\n\nalready existing client\n\n");
return (1);
    }
    int c=0;
    for (int j = front; j <= a; j++){
        int a1=strcmp(data,queue[j]);
        if(a1==0){
            c++;
        }
    }
    if(c==0){

      if(*rear == max -1)
            return(-1);
      else
      {
            *rear = *rear + 1;
            strcpy(queue[*rear], data);
            return(1);
      }
    }
    else{
    printf("\n\nalready existing client\n\n");
    return (1);
    }
}
void disp(){
    for (i = front; i <= rear; i++){
            printf("\t %s ", queue[i]);
            if(i%3==0){
        printf("\n");}}
}
