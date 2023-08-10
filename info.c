#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int arr[6]={1,2,3,4,5,6};
int rear = 5;
int front = 0;

struct node_pack{
    char label_name[40];
    struct node_pack *link;
} *head,*temp,*ptr,*run;

struct node{
    int info;
    struct node *next;
};
struct node *start=NULL;
int c=0;
void insert();
void del();
void display();
void create1();
void display11();
void prof();
void queue_del();
void cust_details(){
    if (arr[front]==1) {
        int cid;
        char name[100];
        int pid;
        FILE *fcustd;
        fcustd = fopen("custd.txt", "a");
        printf("\n");
        printf("                ------------------------------------------------------------------------------------------------------------------------\n");
        printf("\n");
        printf("\t\t\t\t\t\t\t\t Customer Details \n");
        printf("\n");
        printf("                ------------------------------------------------------------------------------------------------------------------------\n");
        int i=0;
        printf("\n\n\t\tEnter Customer ID:");
        scanf("%d",&cid);
        printf("\n\t\tEnter Customer Name:");
        scanf("%s",name);
        printf("\n\t\tEnter Product ID:");
        scanf("%d",&pid);
        fprintf(fcustd,"CID : %d\nName : %s\nPID : %d\n\n",cid,name,pid);
        fclose(fcustd);
        printf("\t\t\t\tAre you confirmed your details? (1/0)");
        int move;
        scanf("%d",&move);
        if ( move==1 ){
            queue_del();
            c++;
        } else {
            cust_details();
        }
    }

}
int f1=1,f2=1,g=0;
void parameter(){
    if (arr[front]==2 || c>2 || g==1) {
        printf("\n\n");
        printf("                ------------------------------------------------------------------------------------------------------------------------\n");
        printf("\n");
        printf("\t\t\t\t\t\t\t\tIngredient Detail\n");
        printf("\n");
        printf("\n                ------------------------------------------------------------------------------------------------------------------------\n");
        printf("                                                           TO MAKE A BOTTLE OF MANGO PICKLE\n\n");
        printf("                  1. Update Ingredient\t\t\t 2. Display Ingredient\n\nPress 0 to exit section\n\n");
        printf("                  Enter choice: ");
        int ch;
        scanf("%d",&ch);
        float salt=250.0,sugar=2.5,water=500,vinegar=1000;

        if (ch==2){
            printf("                \t\t\t\tIngredient\t\t\t\t Quantity\n\n");
            printf("                \t\t\t\t1. Sugar\t\t\t\t%.2f gm\n",sugar);
            printf("                \t\t\t\t2. Salt\t\t\t\t\t%.2f gm \n",salt);
            printf("                \t\t\t\t3. Water\t\t\t\t%.2f ml\n",water);
            printf("                \t\t\t\t4. Mango Pieces\t\t\t\t900.0 gm\n");
            printf("                \t\t\t\t5. Vinegar\t\t\t\t%.2f ml\n",vinegar);
            printf("                \t\t\t\t6. Mustard oil\t\t\t\t28.35 gm\n");
            printf("                \t\t\t\t7. Black Powder\t\t\t\t28.35 gm\n");
            printf("                \t\t\t\t8. Red Chilly Powder\t\t\t28.35 gm\n");
            printf("Do you want to continue? (1/0)");
            int ch1;
            scanf("%d",ch1);
            if (ch1==1){
                g=1;
                parameter();
            } else if (ch1==0){
                printf("\t\t\t\tAre you confirmed your requirements? (1/0)");
                int move;
                scanf("%d",&move);
                if (f1==1){
                    if ( move==1 ){
                        queue_del();
                        c++;
                        f1=0;
                    } else {
                    parameter();
                    }
                    menu();
                }
            }
        } else if (ch==1){
            printf("What would you like to change?\n");
            printf("                1. Salt content\t\t\t2.Water content\nPress 0 to exit section\n\n");
            int d;
            printf("Enter choice: ");
            scanf("%d",&d);
            if (d==1){
                printf("Old quantity of salt: %f",salt);
                printf("Enter value for salt: ");
                float new_salt;
                scanf("%f",&new_salt);
                if (new_salt>350.000000000000000000){
                    printf("Ewwww! Your pickle would taste too salty! Add less salt\n");
                    printf("Enter quantity less than 350.0 gm\n");
                    int new_salt;
                    scanf("%f",&new_salt);
                    salt=new_salt;
                } else if (new_salt<100.0000000000000000000000){
                    printf("Ewwww! Your pickle would be less tasty! Add moree salttt\n");
                    printf("Enter quantity more than 350.0 gm\n");
                    int new_salt;
                    scanf("%f",&new_salt);
                    salt=new_salt;
                } else {
                    salt=new_salt;
                    sugar=salt/10;
                
                }

            }
            else if (d==2){

                printf("Old quantity of water: %f",water);
                printf("Enter value for water: ");
                float new_water;
                scanf("%f",&new_water);
                if (new_water>1500.00){
                    printf("Ewwww! Your pickle would taste too salty! Add less salt\n");
                    printf("Enter quantity less than 350.0 gm\n");
                    int new_water;
                    scanf("%f",&new_water);
                    water=new_water;
                } else if (new_water<700.00){
                    printf("Ewwww! Your pickle would be less tasty! Add moree salttt\n");
                    printf("Enter quantity more than 350.0 gm\n");
                    int new_water;
                    scanf("%f",&new_water);
                    water=new_water;
                } else {
                    water=new_water;
                    vinegar=(2/3)*water;
                
                }

            }
            printf("Do you want to continue? (1/0)");
            int p;
            scanf("%d",p);
            if (p==1){
                parameter();
            } else {
                printf("\t\t\t\tAre you confirmed your requirements? (1/0)");
                int move;
                scanf("%d",&move);
                
                    if ( move==1 ){
                        queue_del();
                        c++;
                        f1=0;
                    } else {
                        parameter();
                    }
              
                menu();
            }
        } else if(c==0){
            printf("\t\t\t\tAre you confirmed your requirements? (1/0)");
        int move;
        scanf("%d",&move);

        if (f1==1){
            if ( move==1 ){
                queue_del();
                c++;
                f1=0;
            } else {
            parameter();
            }
            menu();
        }


        }
    } else {
        printf("\t\t\t\tComplete the above process to view this section\n");
    }

}


void test(){
    if (arr[front]==3 || c>3) {
        printf("\n\n");
        printf("                ------------------------------------------------------------------------------------------------------------------------\n");
        printf("\n");
        printf("\t\t\t\t\t\t\t\t Testing Sample\n");
        printf("\n");
        printf("                ------------------------------------------------------------------------------------------------------------------------\n");
        printf(" `");
        printf("\t\t\t\tAre you confirmed your requirements? (1/0)");
        int move;
        scanf("%d",&move);
        if (f2==1){
            if ( move==1 ){
                queue_del();
                c++;
                f2=0;
            } else {
                test();
            }
        }

    } else {
            printf("\t\t\t\tComplete the above process to view this section\n");
    }
}

void manufact(){
    if (arr[front]==4 || front==6) {
        printf("\n\n");
        printf("                ------------------------------------------------------------------------------------------------------------------------\n");
        printf("\n");
        printf("\t\t\t\t\t\t\t\t Manufacturing Details\n");
        printf("\n");
        printf("                ------------------------------------------------------------------------------------------------------------------------\n");
        printf("\t\t\t\tAre you confirmed your requirements? (1/0)");
        int move;
        scanf("%d",&move);
        if ( move==1 ){
            queue_del();
            c++;
        } else {
            test();
        }

    } else {
        printf("\t\t\t\tComplete the above process to view this section\n");
    }

}

void package(){
    if (arr[front]==5 || front==6) {
        printf("\n");
        printf("                ------------------------------------------------------------------------------------------------------------------------\n");
        printf("\n");
        printf("\t\t\t\t\t\t\t\t Packaging Details\n");
        printf("\n");
        printf("                ------------------------------------------------------------------------------------------------------------------------\n");
        printf("\n\n");
        int ch;
        printf("\t\t\t\t\t\t 1. Label");
        printf("\t\t\t 2. Jar Size\n");
        printf("\t\t\t\t  Press 0 to exit Package section");
        printf("\n\n\t\t\t\t\t\t\t\t");
        printf(" Enter your Choice:");
        scanf("%d",&ch);
        if (ch==0) menu();
        if (ch==1){
            printf("\n                                                               ----------------------------\n");
            printf("                                                                      LABEL SECTION\n");
            printf("                                                               ----------------------------\n");
            printf("\n\t\t\t 1. Add Label");
            printf("\t\t 2. Update Label");
            printf("\t 3. Delete Current Label");
            printf("\t 4. Display Current Label\n\n");
            printf("\t\t\t\t\t\t  Press 0 to exit Label section");
            printf("\n\n\t\t\t\t\t\t\t\t");
            printf(" Enter your Choice:");
            int lab;
            scanf("%d",&lab);
            if (lab==0) package();
            if (lab==1){
                insert();

            } else if (lab==2){
                insert();
            } else if (lab==3){
                del();
            } else if (lab==4){
                display();
            } else {
                printf("\t\t\t\t\t\tEnter valid choice");
            }
            int check;
            printf("Do you want to continue (1/0) : ");
            scanf("%d",&check);
            if (check == 1){
                package();
            } else {
                menu();
            }
        } else if (ch==2){
            printf("\n                                                               ----------------------------\n");
            printf("                                                                      JAR SECTION\n");
            printf("                                                               ----------------------------\n");
            printf("\n\t\t\t 1. Add Label");
            printf("\t\t 2. Update Label");
            printf("\t 3. Delete Current Label");
            printf("\t 4. Display Current Label\n\n");
            printf("\t\t\t\t\t\t  Press 0 to exit Label section");
            printf("\n\n\t\t\t\t\t\t\t\t");
            printf(" Enter your Choice:");
            int lab;
            scanf("%d",&lab);
            if (lab==0) package();
            if (lab==1){
                insert();
            } else if (lab==2){
                insert();
            } else if (lab==3){
                del();
            } else if (lab==4){
                display();
            } else {
                printf("\t\t\t\t\t\tEnter valid choice");
            }
            int check;
            printf("Do you want to continue (1/0) : ");
            scanf("%d",&check);
            if (check == 1){
                package();
            } else {
                menu();
            }
        } else {
            printf("Enter Valid Choice\n");
        }
        printf("\t\t\t\tAre you confirmed your requirements? (1/0)");
        int move;
        scanf("%d",&move);
        if ( move==1 ){
            queue_del();
            c++;
        } else {
            package();
        }
    } else {
        printf("\t\t\t\tComplete the above process to view this section\n");
    }
}


void payment(){
    if (arr[front]==6 || front==6){
        printf("\n\n");
        printf("                ------------------------------------------------------------------------------------------------------------------------\n");
        printf("\n");
        printf("\t\t\t\t\t\t\t\t\tPayment\n");
        printf("\n");
        printf("                ------------------------------------------------------------------------------------------------------------------------\n");
        printf("\n\n This is a sample project payments for a set of duration \n\n");
        printf("the project payment done if and only if the status of the project is over \n\n");
        create1();
        printf(" Emplyee Salary : Rs. 50  \n\n");
        printf(" Miscellaneous  : Rs. 10  \n\n");
        printf(" Total cost for the project \n");
        display11();
        printf("-*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*-\n\n");
        prof();
        printf("\n\n");
        printf("-*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*-\n\n");
    } else {

        }
}


void menu() {
    int choice;
    printf("\n\n");
    printf("                ------------------------------------------------------------------------------------------------------------------------\n");
    printf("\n");
    printf("\t\t\t\t\t\t\t\tFood Industry Management System\n");
    printf("\n");
    printf("                ------------------------------------------------------------------------------------------------------------------------\n");
    printf("\n\t\t\t\t 1. Customer Details\t\t");
    printf("2. Food Safety Parameters\t");
    printf("3. Testing Sample");
    printf("\n\n");
    printf("\t\t\t\t 4. Manufacturing Details \t\t");
    printf("5. Packaging Details\t\t");
    printf("6. Payment\n\n");
    printf("\t\t\t\t\t\t\t\t  Press 0 to exit");
    printf("\n\n\t\t\t\t\t\t\t\t");
    printf(" Enter your Choice:");
    scanf("%d",&choice);
    while (choice!=0){
        switch(choice){
            case 1: {
                cust_details();
                break;
            }
            case 2:{
                parameter();
                break;
            }
            case 3: {
                test();
                break;
            }
            case 4: {
                manufact();
                break;
            }
            case 5: {
                package();
                break;
            }
            case 6: {
                payment();
                break;
            }
            case 0: {
                printf("\n\n\t\t\t\t\t\t\t\t");
                printf("THANKYOU!\n");
                exit(1);
            }
            default: {
                printf("enter valid choice\n");
                break;
            }
        }
        printf("\n\n\t\t\t\t\t\t\t\t");
        printf(" Enter your Choice:");
        scanf("%d",&choice);
    }
}

int main(){
    menu();
    return 0;
}

void insert(){
    //char lname[40];
    temp=(struct node_pack *)malloc(sizeof(struct node_pack));
    printf("\t\t\tEnter Brand Name: ");
    scanf("%s",temp->label_name);
    //temp->label_name = lname;
    temp->link = NULL;
    if (head == NULL){
        head = temp;
    } else {
        temp->link=head;
        head=temp;
    }

}

void del(){
    head=ptr;
    head=head->link;
    free(ptr);
}

void display(){
    run = head;
    printf("%s\n",run->label_name);

}

void queue_del(){
    if (front == - 1 || front > rear){
        printf("Queue Underflow \n");
        return ;
    } else{
        printf("Element deleted from queue is : %d\n", arr[front]);
        front = front + 1;
    }
}
void create1(){
    struct node *temp,*ptr;
    int l;
         int pro;
        printf("How Many customers Succesfully Completed : \n");
        scanf("%d",&l);

        for(int i=0;i<l;i++){

        temp=(struct node *)malloc(sizeof (struct node));
        if(temp==NULL)
        {
                printf("nOut of Memory Space:n");
                exit(0);
        }
        printf("Enter how many products for customer : ");
        scanf("%d",&temp->info);
        temp->info=temp->info*10;
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
                        printf("Cost For  customer %d = %d\n", i,ptr->info );
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
    printf(" \t\tOverall Profit is %d  .....",d);
    }
    else if (s==0){
        printf(" \t\tOverall neither profit nor loss");
    }


    else{

        printf("loss is %d  .....",s);
    }
}
