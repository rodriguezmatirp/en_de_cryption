#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<conio.h>

void dialpad_encrypt(char*);
void base64_encrypt(char*);
void caesarcipher_encrypt(char*);
void railfence_encrypt(char*);
void dialpad_decrypt(char*);
void caesarcipher_decrypt(char*);
void railfence_decrypt(char*);
void description();
void e_switch(int);
void d_switch(int);

int i=0,j=0;
char d[200];
char e[200];
char s[100];

int main()
{
    int e_choice,d_choice,choice;
    system("COLOR 0A");

    printf("_____________ENCRYPTION AND DECYPTION___________(19PW22)\n\n");
    printf("\n\n\t\t1.ENCRYPTION\n\t\t2.DECRYPTION\n\t\t3.RANDOM ENCRYPTION\n\n");
    printf("\t\tPlease Enter The Mode\n\t\t\t");
    scanf("%d",&choice);

    if(choice==1)
    {
        system("cls");
        system("COLOR 0C");
        printf("\t\t\t_________ENCRYPTION_______\n\n\n");
        printf("\t\t\t1.DIAL PAD\n");
        printf("\t\t\t2.BASE 64\n");
        printf("\t\t\t3.CAESAR CIPHER\n");
        printf("\t\t\t4.RAIL FENCE\n");
        printf("\t\t\t5.DESCRIPTION\n");
        printf("\t\t\t6.EXIT\n\n");
        printf("\t\tplease enter the valid choice\n\t\t\t");
        scanf("%d",&e_choice);
        e_switch(e_choice);
    }
    else if(choice==2)
    {
        system("cls");
        system("COLOR 0D");
        printf("\t\t\t_________DECRYPTION_______\n\n\n");
        printf("\t\t\t1.DIAL PAD\n");
        printf("\t\t\t2.CAESAR CIPHER\n");
        printf("\t\t\t3.RAIL FENCE\n");
        printf("\t\t\t4.DESCRIPTION\n");
        printf("\t\t\t5.EXIT\n\n");

        printf("\t\tplease enter the valid choice\n\t\t\t");
        scanf("%d",&d_choice);
        d_switch(d_choice);
    }
    else if(choice==3)
    {
        int i,t=1,p=0;
        system("cls");
        system("COLOR 0B");
        srand(time(0));
        e_choice=(rand()%4)+1;
        e_switch(e_choice);
        while(t==1)
        {
            printf("\nPRESS 1 TO FIND THE TYPE OF ENCRYPTION\nPRESS 2 TO FIND IT MANUALLY\n\t\t\t");
            scanf("%d",&i);
            switch(i)
            {
                case 1: if(e_choice==1)
                        {
                            printf("\n\n\t\t\tDIAL PAD\n");
                            break;
                        }
                        else if(e_choice==2)
                        {
                            printf("\n\n\t\tBASE64\n");
                            break;
                        }
                        else if(e_choice==3)
                        {
                            printf("\n\n\t\tCAESAR CIPHER\n");
                            break;
                        }
                        else if(e_choice==4)
                        {
                            printf("\n\n\t\tRAIL FENCE\n");
                            break;
                        }
                case 2: system("cls");
                        strcpy(s,d);
                        printf("\t\t\t\tDECRYPTION\n\n\n");
                        printf("\t\t\t1.DIAL PAD\n");
                        printf("\t\t\t2.CAESAR CIPHER\n");
                        printf("\t\t\t3.RAIL FENCE\n");

                        printf("\t\tplease enter the valid choice\n\t\t\t");
                        scanf("%d",&d_choice);
                        switch(d_choice)
                        {
                            case 1:dialpad_decrypt(s);
                                    break;
                            case 2:caesarcipher_decrypt(s);
                                    break;
                            case 3:railfence_decrypt(s);
                                    break;
                            default:printf("\n\n\tINVALID CHOICE\n");
                        }
                        break;

                default:printf("\n\n\t\tINVALID\n");
            }
        printf("\n\t\t\tDo you want to continue?\n\t\t\tPRESS 1 TO CONTINUE\n\t\t\tPRESS ANY OTHER KEY TO EXIT\n");
        scanf("%d",&t);
        }
    }
    else
    {
        printf("invalid input\n");
    }
    return 0;
    _getch();
}
void e_switch(int i)
{
    if(i==6)
    exit(0);
    else if(i==5)
    {
        description();
        exit(0);
    }
    char s[100];
    printf("ENTER THE MESSAGE : \n");
    scanf("%*c");
    gets(s);

    switch(i)
    {
        case 1:dialpad_encrypt(s);
                break;
        case 2:base64_encrypt(s);
                break;
        case 3:caesarcipher_encrypt(s);
                break;
        case 4:railfence_encrypt(s);
                break;
    }
}
void d_switch(int j)
{
    if(j==5)
    exit(0);
    else if(j==4)
    {
        description();
        exit(0);
    }
    char s[100];
    printf("ENTER THE CODE : \n");
    scanf("%*c");
    gets(s);

    switch(j)
    {
        case 1:dialpad_decrypt(s);
                break;
        case 2:caesarcipher_decrypt(s);
                break;
        case 3:railfence_decrypt(s);
                break;
    }
}

void dialpad_encrypt(char* s)
{
    int i;
    int l=strlen(s);
    char p[100];
    strcpy(p,s);
    strlwr(p);
    for(i=0;i<l;i++)
    {
        switch(p[i])
        {
            case 'a':strcat(d,"2");break;
            case 'b':strcat(d,"22");break;
            case 'c':strcat(d,"222");break;
            case 'd':strcat(d,"3");break;
            case 'e':strcat(d,"33");break;
            case 'f':strcat(d,"333");break;
            case 'g':strcat(d,"4");break;
            case 'h':strcat(d,"44");break;
            case 'i':strcat(d,"444");break;
            case 'j':strcat(d,"5");break;
            case 'k':strcat(d,"55");break;
            case 'l':strcat(d,"555");break;
            case 'm':strcat(d,"6");break;
            case 'n':strcat(d,"66");break;
            case 'o':strcat(d,"666");break;
            case 'p':strcat(d,"7");break;
            case 'q':strcat(d,"77");break;
            case 'r':strcat(d,"777");break;
            case 's':strcat(d,"7777");break;
            case 't':strcat(d,"8");break;
            case 'u':strcat(d,"88");break;
            case 'v':strcat(d,"888");break;
            case 'w':strcat(d,"9");break;
            case 'x':strcat(d,"99");break;
            case 'y':strcat(d,"999");break;
            case 'z':strcat(d,"9999");break;
            case ' ':strcat(d," ");break;
            case '1':strcat(d,"1");break;
            case '2':strcat(d,"2");break;
            case '3':strcat(d,"3");break;
            case '4':strcat(d,"4");break;
            case '5':strcat(d,"5");break;
            case '6':strcat(d,"6");break;
            case '7':strcat(d,"7");break;
            case '8':strcat(d,"8");break;
            case '9':strcat(d,"9");break;
            case '0':strcat(d,"0");break;

        }
    }
    printf("\n\n\tTHE ENCRYPTED CODE OF YOUR MESSAGE : %s\n",d);
}

void dialpad_decrypt(char* s)
{
    int i,j,t=1,k=0,c=0;
    int l=strlen(s);
    for(i=0;i<l-1;i=i+t)
     {
        t=1;
        for(j=i+1;j<l;j++)
        {
            if(s[i]==s[j])
            {
                t++;
            }
            else
            {
                c++;
                break;
            }
        }
        if(t==1)
        {
            if(s[i]=='2')
            {
                e[k]='a';
                k++;
            }
            else if(s[i]=='3')
            {
                e[k]='d';
                k++;
            }
            else if(s[i]=='4')
            {
                e[k]='g';
                k++;
            }
            else if(s[i]=='5')
            {
                e[k]='j';
                k++;
            }
            else if(s[i]=='6')
            {
                e[k]='m';
                k++;
            }
            else if(s[i]=='7')
            {
                e[k]='p';
                k++;
            }
            else if(s[i]=='8')
            {
                e[k]='t';
                k++;
            }
            else if(s[i]=='9')
            {
                e[k]='w';
                k++;
            }
            else if(s[i]==' ')
            {
                e[k]=' ';
                k++;
            }
        }
        else if(t==2)
        {
            if(s[i]=='2')
            {
                e[k]='b';
                k++;
            }
            else if(s[i]=='3')
            {
                e[k]='e';
                k++;
            }
            else if(s[i]=='4')
            {
                e[k]='h';
                k++;
            }
            else if(s[i]=='5')
            {
                e[k]='i';
                k++;
            }
            else if(s[i]=='6')
            {
                e[k]='n';
                k++;
            }
            else if(s[i]=='7')
            {
                e[k]='q';
                k++;
            }
            else if(s[i]=='8')
            {
                e[k]='u';
                k++;
            }
            else if(s[i]=='9')
            {
                e[k]='x';
                k++;
            }
            else if(s[i]==' ')
            {
                e[k]=' ';
                k++;
            }
        }
        else if(t==3)
        {
            if(s[i]=='2')
            {
                e[k]='c';
                k++;
            }
            else if(s[i]=='3')
            {
                e[k]='f';
                k++;
            }
            else if(s[i]=='4')
            {
                e[k]='i';
                k++;
            }
            else if(s[i]=='5')
            {
                e[k]='l';
                k++;
            }
            else if(s[i]=='6')
            {
                e[k]='o';
                k++;
            }
            else if(s[i]=='7')
            {
                e[k]='r';
                k++;
            }
            else if(s[i]=='8')
            {
                e[k]='w';
                k++;
            }
            else if(s[i]=='9')
            {
                e[k]='y';
                k++;
            }

        }
        else if(t==4)
        {
            if(s[i]=='7')
            {
                e[k]='s';
                k++;
            }
            else if(s[i]=='9')
            {
                e[k]='z';
                k++;
            }
        }
    }
    if(s[l-1]=='2'&&t==1)
    {
        e[k]='a';
        k++;
    }
    else if(s[l-1]=='3'&&t==1)
    {
        e[k]='d';
        k++;
    }
    else if(s[l-1]=='4'&&t==1)
    {
        e[k]='g';
        k++;
    }
    else if(s[l-1]=='5'&&t==1)
    {
        e[k]='j';
        k++;
    }
    else if(s[l-1]=='6'&&t==1)
    {
        e[k]='m';
        k++;
    }
    else if(s[l-1]=='7'&&t==1)
    {
        e[k]='p';
        k++;
    }
    else if(s[l-1]=='8'&&t==1)
    {
        e[k]='t';
        k++;
    }
    else if(s[l-1]=='9'&&t==1)
    {
        e[k]='w';
        k++;
    }
    printf("\n\n\t\tTHE DECRYPTED MESSAGE OF YOUR CODE : %s\n",e);
}


void base64_encrypt(char* s)
{
    char char_set[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    int index,n = 0,p = 0,v = 0,count = 0,temp;
    int i,j,k = 0;
    int l=strlen(s);
    for (i = 0; i < l; i += 3)
    {
        v = 0, count = 0, n = 0;
        for (j=i;(j<l)&&(j<=i+2);j++)
        {
            v = v << 8;
            v = v | s[j];
            count++;
        }
        n=count*8;
        p = n%3;
        while (n!= 0)
        {
            if (n>= 6)
            {
                temp = n-6;
                index = (v >> temp) & 63;
                n-= 6;
            }
            else
            {
                temp = 6-n;
                index = (v << temp) & 63;
                n = 0;
            }
            d[k++] = char_set[index];
        }
    }
    for (i = 1; i <= p; i++)
    {
        d[k++] = '=';
    }
    d[k] = '\0';
    printf("\n\n\tTHE ENCRYPTED CODE OF YOUR MESSAGE : %s\n",d);
}


void caesarcipher_encrypt(char* s)
{
    int i;
    for(i=0;i<200&&s[i]!='\0';i++)
    {
            d[i]=s[i]+3;
    }
    printf("\n\n\tTHE ENCRYPTED CODE OF YOUR MESSAGE : %s\n",d);

}

void caesarcipher_decrypt(char* s)
{
    int i,j=0;
    char c[100];
    for(i=0;i<200&&s[i]!='\0';i++)
    {
        c[i]=s[i]-3;
        j++;
    }
    c[j+1]='\0';
    printf("\n\n\tTHE DECRYPTED MESSAGE OF YOUR CODE : %s\n",c);
}

void railfence_encrypt(char* s)
{
    int i,j,l=strlen(s);
    int rails[100][100];
    for(i=0;i<4;i++)
    {
        for(j=0;j<l;j++)
        {
            rails[i][j]=0;
        }
    }
    int count=0;
    j=0;
    while(j<l)
    {
        if(count%2==0)
           {
               for(i=0;i<4;i++)
               {
                   rails[i][j]=(int)s[j];
                   j++;
               }
           }
        else
        {
            for(i=2;i>0;i--)
            {
                rails[i][j]=(int)s[j];
                j++;
            }
        }
        count++;
    }

    printf("\n\n\tTHE ENCRYPTED CODE OF YOUR MESSAGE : ");

    for(i=0;i<4;i++)
    {
        for(j=0;j<l;j++)
        {
            if(rails[i][j]!=0)
            printf("%c",rails[i][j]);
        }
    }
    printf("\n");
}

void railfence_decrypt(char* s)
{
    system("cls");
    char c[100];
    strcpy(c,s);
    int l= strlen(c),i,j,k = -1,row = 0,col = 0,m = 0;
    char rail[4][l];

    for(i = 0; i < 4; ++i)
        for(j = 0; j < l; ++j)
            rail[i][j] = '\n';

    for(i = 0; i < l; ++i)
    {
        rail[row][col++] = '*';
        if(row == 0 || row == 3)
            k= k * (-1);

        row = row + k;
    }

    for(i = 0; i < 4; ++i)
        for(j = 0; j < l; ++j)
            if(rail[i][j] == '*')
                rail[i][j] = c[m++];

    row = col = 0;
    k = -1;

    printf("\n\n\tDECRYPTED MESSAGE FOR YOUR CODE : ");

    for(i = 0; i < l; ++i)
    {
        printf("%c", rail[row][col++]);

        if(row == 0 || row == 3)
            k= k * (-1);

        row = row + k;
    }
    printf("\n");
}


void description()
{
    system("cls");

    printf("\n\n\t\tYOU WILL HAVE TO SELECT THE MODE (ENCRYPTION OR DECRYPTION)\n\n\t\tTHE TYPE SHOULD BE GIVEN AS INPUT\n\n\t\tTHE MESSAGE OR CODE SHOULD BE GIVEN\n\n\t\tTHE FOLLOWING CODE AFTER ENCODING OR DECODING WILL BE DISPLAYED\n\n\t\t");
    printf("IF YOUR MODE IS RANDOM ENCRYPTION,U CAN CHECK WHAT TYPE OF ENCRYPTION BY MANUALLY ALSO\n");

}
