#include<bits/stdc++.h>
#include <iostream>
#include<fstream>
#include<cstdio>
#include<conio.h>
#include<cstring>
#include<stdlib.h>
#include<windows.h>
/// Header file that is created by me
#include"mydetails.h"
#include"forBD.h"
#include"main_menu.h"
#include"division_names.h"
#include"route_details.h"
#include"route_details_2.h"
#include"add_details_2.h"
#include"sure_shortview.h"
#include"overview.h"
#include"add_menu.h"
#include"return_pro.h"
#include"sure_add.h"
using namespace std;

char city[100],filename[200],filename2[200],ex[200],shortc[200],read[2000],ck[100];
char over[5000],loc[2000],backup[1000],yes_no[100],yes_no_2[100],at_last[200];

class bus
{
    public:
    char seri[30];
    char title[200];
    char detail[1500];
    char stand[200];
    char schedule[200];
    char fare[200];
    char j_time[200];

};

class busn
{
    public:
    char s[30];
    char nam[200];

};

class short_add
{
    public:
    char title2[200];
    char stand2[200];
    char schedule2[200];
    char fare2[200];
    char j_time2[200];

};

int main()
{
     FILE *fp,*fpt,*fpi;

    bus file;
    busn lst;
    short_add shortcut;

    char m,n,ch[20];

         mydetails();
         getch(); ///it is an input function used to read single character and hold the output<conio.h>

       system("cls");

    forBD();
    getch();

    while(1)
    {
        main:

        system("cls");

        main_menu();
        fflush(stdin);///buffer before reading between stdin-every input take serially

         n=getchar();///input single char and return it to the program<stdio.h>

         switch(n)
         {
          case '1':
          local:
          system("cls");

        division_names();

        fflush(stdin);

        gets(city);
        if(!strcmp(city,"0"))
         goto main;
            system("cls");
         if(!strcmp(city,"1"))
         {
        dhaka:
  fp=fopen("Dhaka//Dhaka.txt","r");
  fread(&loc,sizeof(loc),1,fp);
  cout<<loc<<endl;
  fclose(fp);

  route_details();

   fflush(stdin);

   gets(filename);
   char Dhaka[30]="Dhaka//";
   strcat(Dhaka,filename);
   if(!strcmp(filename,"0"))
    goto main;

    if(!strcmp(filename,"00"))
    goto local;

     fpt=fopen(Dhaka,"r+");
    if(fpt==NULL)
    {
        system("cls");
        cout<<endl<<"   Wrong keyword,press any key to go back: ";
        getch();
        system("cls");
        goto dhaka;
    }

       bac:

     rewind(fpt);
      fread(&read,sizeof(read),1,fpt);
       system("cls");
       cout<<read<<endl;

       cout<<endl<<"### Press 0 to go main menu...";
       cout<<endl<<"### Press 00 to go back page...";
       cout<<endl<<endl<<"=> At last press any key from above: ";

       fflush(stdin);
       gets(ck);
       if(!strcmp(ck,"0"))
       {
           goto main;
       }
       if(!strcmp(ck,"00"))
       {
           system("cls");
           goto dhaka;
       }
       else
       {
           system("cls");
          cout<<endl<<"   Wrong keyword,press any key to go back: ";
          getch();
          system("cls");
          goto bac;
       }

         fclose(fpt);
          getch();
           break;
         }

          else if(!strcmp(city,"2"))
         {
         chit:
         fp=fopen("Chittagong//Chittagong.txt","r");
         fread(&loc,sizeof(loc),1,fp);
         cout<<loc<<endl;
         fclose(fp);

         route_details();

         fflush(stdin);

   gets(filename);
   char Chittagong[30]="Chittagong//";
   strcat(Chittagong,filename);
   if(!strcmp(filename,"0"))
    goto main;
     if(!strcmp(filename,"00"))
    goto local;

     fpt=fopen(Chittagong,"r+");
    if(fpt==NULL)
    {
        system("cls");
        cout<<endl<<"   Wrong keyword,press any key to go back: ";
        getch();
        system("cls");
        goto chit;
    }

    bac2:

     rewind(fpt);
      fread(&read,sizeof(read),1,fpt);
       system("cls");
       cout<<read<<endl;

       cout<<endl<<"### Press 0 to go main menu...";
       cout<<endl<<"### Press 00 to go back page...";
       cout<<endl<<endl<<"=> At last press any key from above: ";

       fflush(stdin);
       gets(ck);
       if(!strcmp(ck,"0"))
       {
           goto main;
       }
       if(!strcmp(ck,"00"))
       {
           system("cls");
           goto chit;
       }
       else
       {
          system("cls");
          cout<<endl<<"   Wrong keyword,press any key to go back: ";
          getch();
          system("cls");
          goto bac2;
       }

         fclose(fpt);
          getch();
           break;
         }

          else if(!strcmp(city,"3"))
         {
        raj:
fp=fopen("Rajshahi//Rajshahi.txt","r");
  fread(&loc,sizeof(loc),1,fp);
 cout<<loc<<endl;
fclose(fp);

       route_details();

       fflush(stdin);

   gets(filename);
   char Rajshahi[30]="Rajshahi//";
   strcat(Rajshahi,filename);
   if(!strcmp(filename,"0"))
    goto main;
     if(!strcmp(filename,"00"))
    goto local;

     fpt=fopen(Rajshahi,"r+");
    if(fpt==NULL)
    {
        system("cls");
     cout<<endl<<"   Wrong keyword,press any key to go back: ";
        getch();
        system("cls");
        goto raj;
    }

    bac3:

     rewind(fpt);
      fread(&read,sizeof(read),1,fpt);
       system("cls");
        cout<<read<<endl;

       cout<<endl<<"### Press 0 to go main menu...";
       cout<<endl<<"### Press 00 to go back page...";
       cout<<endl<<endl<<"=> At last press any key from above: ";

       fflush(stdin);
       gets(ck);
       if(!strcmp(ck,"0"))
       {
           goto main;
       }
       if(!strcmp(ck,"00"))
       {
           system("cls");
           goto raj;
       }
       else
       {
          system("cls");
          cout<<endl<<"   Wrong keyword,press any key to go back: ";
          getch();
          system("cls");
          goto bac3;
       }

         fclose(fpt);
          getch();
           break;
         }

          else if(!strcmp(city,"4"))
         {
         mymen:
fp=fopen("Mymensingh//Mymensingh.txt","r");
  fread(&loc,sizeof(loc),1,fp);
 cout<<loc<<endl;
fclose(fp);

        route_details();

        fflush(stdin);

   gets(filename);
   char Mymensingh[30]="Mymensingh//";
   strcat(Mymensingh,filename);
   if(!strcmp(filename,"0"))
    goto main;
     if(!strcmp(filename,"00"))
    goto local;

     fpt=fopen(Mymensingh,"r+");
    if(fpt==NULL)
    {
        system("cls");
        cout<<endl<<"   Wrong keyword,press any key to go back: ";
        getch();
        system("cls");
        goto mymen;
    }

    bac4:

     rewind(fpt);
      fread(&read,sizeof(read),1,fpt);
       system("cls");
        cout<<read<<endl;

       cout<<endl<<"### Press 0 to go main menu...";
       cout<<endl<<"### Press 00 to go back page...";
       cout<<endl<<endl<<"=> At last press any key from above: ";

       fflush(stdin);
       gets(ck);
       if(!strcmp(ck,"0"))
       {
           goto main;
       }
       if(!strcmp(ck,"00"))
       {
           system("cls");
           goto mymen;
       }
       else
       {
          system("cls");
          cout<<endl<<"   Wrong keyword,press any key to go back: ";
          getch();
          system("cls");
          goto bac4;
       }

         fclose(fpt);
          getch();
           break;
         }

          else if(!strcmp(city,"5"))
         {
         khulna:
 fp=fopen("Khulna//Khulna.txt","r");
  fread(&loc,sizeof(loc),1,fp);
 cout<<loc<<endl;
fclose(fp);

         route_details();

         fflush(stdin);

   gets(filename);
   char khulna[30]="Khulna//";
   strcat(khulna,filename);
   if(!strcmp(filename,"0"))
    goto main;
     if(!strcmp(filename,"00"))
    goto local;

     fpt=fopen(khulna,"r+");
    if(fpt==NULL)
    {
        system("cls");
        cout<<endl<<"   Wrong keyword,press any key to go back: ";
        getch();
        system("cls");
        goto khulna;
    }

    bac5:

     rewind(fpt);
      fread(&read,sizeof(read),1,fpt);
       system("cls");
        cout<<read<<endl;

       cout<<endl<<"### Press 0 to go main menu...";
       cout<<endl<<"### Press 00 to go back page...";
       cout<<endl<<endl<<"=> At last press any key from above: ";

       fflush(stdin);
       gets(ck);
       if(!strcmp(ck,"0"))
       {
           goto main;
       }
       if(!strcmp(ck,"00"))
       {
           system("cls");
           goto khulna;
       }
       else
       {
          system("cls");
          cout<<endl<<"   Wrong keyword,press any key to go back: ";
          getch();
          system("cls");
          goto bac5;
       }

         fclose(fpt);
          getch();
           break;
         }

          else if(!strcmp(city,"6"))
         {
         barisal:
fp=fopen("Barisal//Barisal.txt","r");
  fread(&loc,sizeof(loc),1,fp);
cout<<loc<<endl;
fclose(fp);

         route_details();

         fflush(stdin);

   gets(filename);
   char Barisal[30]="Barisal//";
   strcat(Barisal,filename);
   if(!strcmp(filename,"0"))
    goto main;
     if(!strcmp(filename,"00"))
    goto local;

     fpt=fopen(Barisal,"r+");
    if(fpt==NULL)
    {
        system("cls");
        cout<<endl<<"   Wrong keyword,press any key to go back: ";
        getch();
        system("cls");
        goto barisal;

    }

    bac6:

     rewind(fpt);
      fread(&read,sizeof(read),1,fpt);
       system("cls");
        cout<<read<<endl;

       cout<<endl<<"### Press 0 to go main menu...";
       cout<<endl<<"### Press 00 to go back page...";
       cout<<endl<<endl<<"=> At last press any key from above: ";

       fflush(stdin);
       gets(ck);
       if(!strcmp(ck,"0"))
       {
           goto main;
       }
       if(!strcmp(ck,"00"))
       {
           system("cls");
           goto barisal;
       }
       else
       {
          system("cls");
          cout<<endl<<"   Wrong keyword,press any key to go back: ";
          getch();
          system("cls");
          goto bac6;
       }

         fclose(fpt);
          getch();
           break;
         }

          else if(!strcmp(city,"7"))
         {
        sylhet:
 fp=fopen("Sylhet//Sylhet.txt","r");
  fread(&loc,sizeof(loc),1,fp);
 cout<<loc<<endl;
fclose(fp);

         route_details();

         fflush(stdin);

   gets(filename);
   char Sylhet[30]="Sylhet//";
   strcat(Sylhet,filename);
   if(!strcmp(filename,"0"))
    goto main;
     if(!strcmp(filename,"00"))
    goto local;

     fpt=fopen(Sylhet,"r+");
    if(fpt==NULL)
    {
        system("cls");
        cout<<endl<<"   Wrong keyword,press any key to go back: ";
        getch();
        system("cls");
        goto sylhet;
    }

    bac7:

     rewind(fpt);
      fread(&read,sizeof(read),1,fpt);
       system("cls");
       cout<<read<<endl;

       cout<<endl<<"### Press 0 to go main menu...";
       cout<<endl<<"### Press 00 to go back page...";
       cout<<endl<<endl<<"=> At last press any key from above: ";

       fflush(stdin);
       gets(ck);
       if(!strcmp(ck,"0"))
       {
           goto main;
       }
       if(!strcmp(ck,"00"))
       {
           system("cls");
           goto sylhet;
       }
       else
       {
          system("cls");
          cout<<endl<<"   Wrong keyword,press any key to go back: ";
          getch();
          system("cls");
          goto bac7;
       }

         fclose(fpt);
          getch();
           break;
         }


         else if(!strcmp(city,"8"))
         {
         rangpur:
fp=fopen("Rangpur//Rangpur.txt","r");
  fread(&loc,sizeof(loc),1,fp);
 cout<<loc<<endl;
fclose(fp);

         route_details();

         fflush(stdin);

   gets(filename);
   char Rangpur[30]="Rangpur//";
   strcat(Rangpur,filename);
   if(!strcmp(filename,"0"))
    goto main;
     if(!strcmp(filename,"00"))
    goto local;

     fpt=fopen(Rangpur,"r+");
    if(fpt==NULL)
    {
        system("cls");
        cout<<endl<<"   Wrong keyword,press any key to go back: ";
        getch();
        system("cls");
        goto rangpur;
    }

    bac8:

     rewind(fpt);
      fread(&read,sizeof(read),1,fpt);
       system("cls");
       cout<<read<<endl;

       cout<<endl<<"### Press 0 to go main menu...";
       cout<<endl<<"### Press 00 to go back page...";
       cout<<endl<<endl<<"=> At last press any key from above: ";

       fflush(stdin);
       gets(ck);
       if(!strcmp(ck,"0"))
       {
           goto main;
       }
       if(!strcmp(ck,"00"))
       {
           system("cls");
           goto rangpur;
       }
       else
       {
          system("cls");
          cout<<endl<<"   Wrong keyword,press any key to go back: ";
          getch();
          system("cls");
          goto bac8;
       }

         fclose(fpt);
          getch();
           break;
         }
         else
         {
             cout<<endl<<"   Invalid choose..."<<endl;
             cout<<"   Press any key to go back page: ";
            getch();
            goto local;
         }

        case '2':

        short_c:
        system("cls");
        sure_shortview();

        fflush(stdin);
        gets(yes_no);

        if(!strcmp(yes_no,"1"))
        {

        over:
 system("cls");

  fp=fopen("Overview//Overview.txt","r");
  fread(&over,sizeof(over),1,fp);
  cout<<over<<endl;
   fclose(fp);

   cout<<endl<<"=> Press 0 to go main menu..."<<endl<<endl;
    cout<<"=> Press any serial number from above to see routes detail: ";

         fflush(stdin);

   gets(shortc);
   char overv[2000]="Overview//";
   strcat(overv,shortc);
   if(!strcmp(shortc,"0"))
    goto main;

    fpt=fopen(overv,"r+");
    if(fpt==NULL)
    {
        system("cls");
        cout<<endl<<"   Wrong keyword,press any key to go back: ";
        getch();
        system("cls");
        goto over;
    }
    stay_here:

     rewind(fpt);
      fread(&read,sizeof(read),1,fpt);
       system("cls");
       cout<<read<<endl;

       cout<<endl<<"### Press 0 to go main menu..."<<endl;
       cout<<"### Press 00 to go back page..."<<endl;
       cout<<endl<<"=> Press any key from above: ";

       fflush(stdin);
       gets(at_last);
       if(!strcmp(at_last,"0"))
       {
           goto main;
       }
       if(!strcmp(at_last,"00"))
       {
           goto over;
       }
       else
       {
          system("cls");
          cout<<endl<<"   Wrong keyword,press any key to go back: ";
          getch();
          system("cls");
          goto stay_here;
       }

         fclose(fpt);
          getch();
           break;

        }
        if(!strcmp(yes_no,"2"))
        {
            system("cls");
            goto main;
        }
        else
        {
          system("cls");
          cout<<endl<<"   Wrong keyword,press any key to go back: ";
          getch();
          system("cls");
          goto short_c;
        }

        case '3':

        sub:
       system("cls");

       add_menu();

       fflush(stdin);

        gets(ch);
        if(!strcmp(ch,"0"))
        {
       goto main;
        }

      if(!strcmp(ch,"1"))


       {
           add:

          system("cls");

          division_names();

          fflush(stdin);

         gets(city);
         if(!strcmp(city,"0"))
         goto main;
         if(!strcmp(city,"00"))
         goto sub;
            system("cls");
         if(!strcmp(city,"1"))
         {
        dhaka_add:
fp=fopen("Dhaka//Dhaka.txt","r");
  fread(&loc,sizeof(loc),1,fp);
  cout<<loc<<endl;
   fclose(fp);

    route_details_2();

   fflush(stdin);

   gets(filename);
   char Dhaka[30]="Dhaka//";
   strcat(Dhaka,filename);
   if(!strcmp(filename,"0"))
    goto main;

    if(!strcmp(filename,"00"))
    goto add;

    if(!strcmp(filename,"000"))
    goto sub;

    fpt=fopen(Dhaka,"r+");
    if(fpt==NULL)
    {
        system("cls");
        cout<<endl<<"   Wrong keyword,press any key to go back: ";
        getch();
        system("cls");
        goto dhaka_add;
    }
    system("cls");

    back_part:

    sure_add();

    fflush(stdin);
    gets(yes_no);
    if(!strcmp(yes_no,"1"))
        {
    system("cls");
    fpt=fopen(Dhaka,"a+");
    fprintf(fpt,"\n*** From/To: ",file.title);
    fclose(fpt);

    fflush(stdin);
    cout<<endl<<"   Please input title [From, To] of the route (After finishing it press 'Enter' to go next step): ";
    gets(file.title);
    fpt=fopen(Dhaka,"a+");
    fprintf(fpt,"%s\n",file.title);
    fclose(fpt);
    cout<<endl;

    fflush(stdin);
    cout<<"   Please input other details of the route: "<<endl;
    cout<<"   After finishing all steps in the last step press '#' and 'Enter' to close the adding works..."<<endl<<endl;
    cout<<"   (1) Input stand name and after finishing it press 'Enter' key to go next: ";
    fpt=fopen(Dhaka,"a+");
    fprintf(fpt,"\nStand name: ",file.stand);
    fclose(fpt);
    gets(file.stand);
    fpt=fopen(Dhaka,"a+");
    fprintf(fpt,"%s\n",file.stand);
    fclose(fpt);
    cout<<endl;

    cout<<"   (2) Input schedule and after finishing it press 'Enter' key to go next: ";
    fpt=fopen(Dhaka,"a+");
    fprintf(fpt,"\nSchedule: ",file.schedule);
    fclose(fpt);
    gets(file.schedule);
    fpt=fopen(Dhaka,"a+");
    fprintf(fpt,"%s\n",file.schedule);
    fclose(fpt);
    cout<<endl;

    cout<<"   (3) Input fare and after finishing it press 'Enter' key to go next: ";
    fpt=fopen(Dhaka,"a+");
    fprintf(fpt,"\nFare: ",file.fare);
    fclose(fpt);
    gets(file.fare);
    fpt=fopen(Dhaka,"a+");
    fprintf(fpt,"%s\n",file.fare);
    fclose(fpt);
    cout<<endl;

    cout<<"   *** It is the last step after finishing it press '#' and 'Enter' to close the adding works..."<<endl;
    cout<<"   (Last) Input journey time: ";
    fpt=fopen(Dhaka,"a+");
    fprintf(fpt,"\nJourney time: ",file.j_time);
    fclose(fpt);
    scanf("%[^#]",file.j_time);
    fpt=fopen(Dhaka,"a+");
    fprintf(fpt,"%s\n",file.j_time);
    fclose(fpt);

    cout<<endl<<endl<<"   You have successfully added a new route in the local bus section."<<endl;
    cout<<endl<<"   => Press any key to go back: ";
    getch();
    system("cls");
    goto dhaka_add;
        }

    if(!strcmp(yes_no,"2"))
    {
        system("cls");
        goto dhaka_add;
    }
    else
    {
        system("cls");
        cout<<endl<<"   Wrong keyword,press any key to go back: ";
        getch();
        system("cls");
        goto back_part;
    }

    }

    else if(!strcmp(city,"2"))
    {

    chit_add:
fp=fopen("Chittagong//Chittagong.txt","r");
  fread(&loc,sizeof(loc),1,fp);
cout<<loc<<endl;
fclose(fp);

    route_details_2();

    fflush(stdin);

    gets(filename);
    char Chittagong[30]="Chittagong//";
    strcat(Chittagong,filename);
   if(!strcmp(filename,"0"))
    goto main;
     if(!strcmp(filename,"00"))
    goto add;

    if(!strcmp(filename,"000"))
    goto sub;

     fpt=fopen(Chittagong,"r+");
    if(fpt==NULL)
    {
        system("cls");
        cout<<endl<<"   Wrong keyword,press any key to go back: ";
        getch();
        system("cls");
        goto chit_add;
    }
    system("cls");

    back_part_2:

    sure_add();

    fflush(stdin);
    gets(yes_no);
    if(!strcmp(yes_no,"1"))
        {
    system("cls");

    fpt=fopen(Chittagong,"a+");
    fprintf(fpt,"\n*** From/To: ",file.title);
    fclose(fpt);

    fflush(stdin);
    cout<<endl<<"   Please input title [From, To] of the route (After finishing it press 'Enter' to go next step): ";
    gets(file.title);
    fpt=fopen(Chittagong,"a+");
    fprintf(fpt,"%s\n",file.title);
    fclose(fpt);
    cout<<endl;

    fflush(stdin);
    cout<<"   Please input other details of the route: "<<endl;
    cout<<"   After finishing all steps in the last step press '#' and 'Enter' to close the adding works..."<<endl<<endl;
    cout<<"   (1) Input stand name and after finishing it press 'Enter' key to go next: ";
    fpt=fopen(Chittagong,"a+");
    fprintf(fpt,"\nStand name: ",file.stand);
    fclose(fpt);
    gets(file.stand);
    fpt=fopen(Chittagong,"a+");
    fprintf(fpt,"%s\n",file.stand);
    fclose(fpt);
    cout<<endl;

    cout<<"   (2) Input schedule and after finishing it press 'Enter' key to go next: ";
    fpt=fopen(Chittagong,"a+");
    fprintf(fpt,"\nSchedule: ",file.schedule);
    fclose(fpt);
    gets(file.schedule);
    fpt=fopen(Chittagong,"a+");
    fprintf(fpt,"%s\n",file.schedule);
    fclose(fpt);
    cout<<endl;

    cout<<"   (3) Input fare and after finishing it press 'Enter' key to go next: ";
    fpt=fopen(Chittagong,"a+");
    fprintf(fpt,"\nFare: ",file.fare);
    fclose(fpt);
    gets(file.fare);
    fpt=fopen(Chittagong,"a+");
    fprintf(fpt,"%s\n",file.fare);
    fclose(fpt);
    cout<<endl;

    cout<<"   *** It is the last step after finishing it press '#' and 'Enter' to close the adding works..."<<endl;
    cout<<"   (Last) Input journey time: ";
    fpt=fopen(Chittagong,"a+");
    fprintf(fpt,"\nJourney time: ",file.j_time);
    fclose(fpt);
    scanf("%[^#]",file.j_time);
    fpt=fopen(Chittagong,"a+");
    fprintf(fpt,"%s\n",file.j_time);
    fclose(fpt);
    cout<<endl<<endl<<"   You have successfully added a new route in the local bus section."<<endl;
    cout<<endl<<"   => Press any key to go back: ";
    getch();
    system("cls");
    goto chit_add;
     }

    if(!strcmp(yes_no,"2"))
    {
        system("cls");
        goto chit_add;
    }
    else
    {
        system("cls");
        cout<<endl<<"   Wrong keyword,press any key to go back: ";
        getch();
        system("cls");
        goto back_part_2;
    }

         }

          else if(!strcmp(city,"3"))
         {
        raj_add:
fp=fopen("Rajshahi//Rajshahi.txt","r");
  fread(&loc,sizeof(loc),1,fp);
 cout<<loc<<endl;
fclose(fp);

   route_details_2();

   fflush(stdin);

   gets(filename);
   char Rajshahi[30]="Rajshahi//";
   strcat(Rajshahi,filename);
   if(!strcmp(filename,"0"))
    goto main;
     if(!strcmp(filename,"00"))
    goto add;

    if(!strcmp(filename,"000"))
    goto sub;

     fpt=fopen(Rajshahi,"r+");
    if(fpt==NULL)
    {
        system("cls");
     cout<<endl<<"   Wrong keyword,press any key to go back: ";
        getch();
        system("cls");
        goto raj_add;
    }
    system("cls");

    back_part_3:

    sure_add();

    fflush(stdin);
    gets(yes_no);
    if(!strcmp(yes_no,"1"))
        {
    system("cls");

    fpt=fopen(Rajshahi,"a+");
    fprintf(fpt,"\n*** From/To: ",file.title);
    fclose(fpt);

    fflush(stdin);
    cout<<endl<<"   Please input title [From, To] of the route (After finishing it press 'Enter' to go next step): ";
    gets(file.title);
    fpt=fopen(Rajshahi,"a+");
    fprintf(fpt,"%s\n",file.title);
    fclose(fpt);
    cout<<endl;

    fflush(stdin);
    cout<<"   Please input other details of the route: "<<endl;
    cout<<"   After finishing all steps in the last step press '#' and 'Enter' to close the adding works..."<<endl<<endl;
    cout<<"   (1) Input stand name and after finishing it press 'Enter' key to go next: ";
    fpt=fopen(Rajshahi,"a+");
    fprintf(fpt,"\nStand name: ",file.stand);
    fclose(fpt);
    gets(file.stand);
    fpt=fopen(Rajshahi,"a+");
    fprintf(fpt,"%s\n",file.stand);
    fclose(fpt);
    cout<<endl;

    cout<<"   (2) Input schedule and after finishing it press 'Enter' key to go next: ";
    fpt=fopen(Rajshahi,"a+");
    fprintf(fpt,"\nSchedule: ",file.schedule);
    fclose(fpt);
    gets(file.schedule);
    fpt=fopen(Rajshahi,"a+");
    fprintf(fpt,"%s\n",file.schedule);
    fclose(fpt);
    cout<<endl;

    cout<<"   (3) Input fare and after finishing it press 'Enter' key to go next: ";
    fpt=fopen(Rajshahi,"a+");
    fprintf(fpt,"\nFare: ",file.fare);
    fclose(fpt);
    gets(file.fare);
    fpt=fopen(Rajshahi,"a+");
    fprintf(fpt,"%s\n",file.fare);
    fclose(fpt);
    cout<<endl;

    cout<<"   *** It is the last step after finishing it press '#' and 'Enter' to close the adding works..."<<endl;
    cout<<"   (Last) Input journey time: ";
    fpt=fopen(Rajshahi,"a+");
    fprintf(fpt,"\nJourney time: ",file.j_time);
    fclose(fpt);
    scanf("%[^#]",file.j_time);
    fpt=fopen(Rajshahi,"a+");
    fprintf(fpt,"%s\n",file.j_time);
    fclose(fpt);

    cout<<endl<<endl<<"   You have successfully added a new route in the local bus section."<<endl;
    cout<<endl<<"   => Press any key to go back: ";
    getch();
    system("cls");
    goto raj_add;
     }

    if(!strcmp(yes_no,"2"))
    {
        system("cls");
        goto raj_add;
    }
    else
    {
        system("cls");
        cout<<endl<<"   Wrong keyword,press any key to go back: ";
        getch();
        system("cls");
        goto back_part_3;
    }

         }

          else if(!strcmp(city,"4"))
         {
         mymen_add:
fp=fopen("Mymensingh//Mymensingh.txt","r");
  fread(&loc,sizeof(loc),1,fp);
 cout<<loc<<endl;
fclose(fp);

   route_details_2();

   fflush(stdin);

   gets(filename);
   char Mymensingh[30]="Mymensingh//";
   strcat(Mymensingh,filename);
   if(!strcmp(filename,"0"))
    goto main;
     if(!strcmp(filename,"00"))
    goto add;

    if(!strcmp(filename,"000"))
    goto sub;

     fpt=fopen(Mymensingh,"r+");
    if(fpt==NULL)
    {
        system("cls");
        cout<<endl<<"   Wrong keyword,press any key to go back: ";
        getch();
        system("cls");
        goto mymen_add;
    }
    system("cls");

    back_part_4:

    sure_add();

    fflush(stdin);
    gets(yes_no);
    if(!strcmp(yes_no,"1"))
        {
    system("cls");

    fpt=fopen(Mymensingh,"a+");
    fprintf(fpt,"\n*** From/To: ",file.title);
    fclose(fpt);

    fflush(stdin);
    cout<<endl<<"   Please input title [From, To] of the route (After finishing it press 'Enter' to go next step): ";
    gets(file.title);
    fpt=fopen(Mymensingh,"a+");
    fprintf(fpt,"%s\n",file.title);
    fclose(fpt);
    cout<<endl;

    fflush(stdin);
    cout<<"   Please input other details of the route: "<<endl;
    cout<<"   After finishing all steps in the last step press '#' and 'Enter' to close the adding works..."<<endl<<endl;
    cout<<"   (1) Input stand name and after finishing it press 'Enter' key to go next: ";
    fpt=fopen(Mymensingh,"a+");
    fprintf(fpt,"\nStand name: ",file.stand);
    fclose(fpt);
    gets(file.stand);
    fpt=fopen(Mymensingh,"a+");
    fprintf(fpt,"%s\n",file.stand);
    fclose(fpt);
    cout<<endl;

    cout<<"   (2) Input schedule and after finishing it press 'Enter' key to go next: ";
    fpt=fopen(Mymensingh,"a+");
    fprintf(fpt,"\nSchedule: ",file.schedule);
    fclose(fpt);
    gets(file.schedule);
    fpt=fopen(Mymensingh,"a+");
    fprintf(fpt,"%s\n",file.schedule);
    fclose(fpt);
    cout<<endl;

    cout<<"   (3) Input fare and after finishing it press 'Enter' key to go next: ";
    fpt=fopen(Mymensingh,"a+");
    fprintf(fpt,"\nFare: ",file.fare);
    fclose(fpt);
    gets(file.fare);
    fpt=fopen(Mymensingh,"a+");
    fprintf(fpt,"%s\n",file.fare);
    fclose(fpt);
    cout<<endl;

    cout<<"   *** It is the last step after finishing it press '#' and 'Enter' to close the adding works..."<<endl;
    cout<<"   (Last) Input journey time: ";
    fpt=fopen(Mymensingh,"a+");
    fprintf(fpt,"\nJourney time: ",file.j_time);
    fclose(fpt);
    scanf("%[^#]",file.j_time);
    fpt=fopen(Mymensingh,"a+");
    fprintf(fpt,"%s\n",file.j_time);
    fclose(fpt);
    cout<<endl<<endl<<"   You have successfully added a new route in the local bus section."<<endl;
    cout<<endl<<"   => Press any key to go back: ";
    getch();
    system("cls");
    goto mymen_add;
     }

    if(!strcmp(yes_no,"2"))
    {
        system("cls");
        goto mymen_add;
    }
    else
    {
        system("cls");
        cout<<endl<<"   Wrong keyword,press any key to go back: ";
        getch();
        system("cls");
        goto back_part_4;
    }

         }

          else if(!strcmp(city,"5"))
         {
         khulna_add:
 fp=fopen("Khulna//Khulna.txt","r");
  fread(&loc,sizeof(loc),1,fp);
 cout<<loc<<endl;
fclose(fp);

   route_details_2();

   fflush(stdin);

   gets(filename);
   char khulna[30]="Khulna//";
   strcat(khulna,filename);
   if(!strcmp(filename,"0"))
    goto main;
     if(!strcmp(filename,"00"))
    goto add;

    if(!strcmp(filename,"000"))
    goto sub;

     fpt=fopen(khulna,"r+");
    if(fpt==NULL)
    {
        system("cls");
        cout<<endl<<"   Wrong keyword,press any key to go back: ";
        getch();
        system("cls");
        goto khulna_add;
    }
    system("cls");

    back_part_5:

    sure_add();

    fflush(stdin);
    gets(yes_no);
    if(!strcmp(yes_no,"1"))
        {
    system("cls");

    fpt=fopen(khulna,"a+");
    fprintf(fpt,"\n*** From/To: ",file.title);
    fclose(fpt);

    fflush(stdin);
    cout<<endl<<"   Please input title [From, To] of the route (After finishing it press 'Enter' to go next step): ";
    gets(file.title);
    fpt=fopen(khulna,"a+");
    fprintf(fpt,"%s\n",file.title);
    fclose(fpt);
    cout<<endl;

    fflush(stdin);
    cout<<"   Please input other details of the route: "<<endl;
    cout<<"   After finishing all steps in the last step press '#' and 'Enter' to close the adding works..."<<endl<<endl;
    cout<<"   (1) Input stand name and after finishing it press 'Enter' key to go next: ";
    fpt=fopen(khulna,"a+");
    fprintf(fpt,"\nStand name: ",file.stand);
    fclose(fpt);
    gets(file.stand);
    fpt=fopen(khulna,"a+");
    fprintf(fpt,"%s\n",file.stand);
    fclose(fpt);
    cout<<endl;

    cout<<"   (2) Input schedule and after finishing it press 'Enter' key to go next: ";
    fpt=fopen(khulna,"a+");
    fprintf(fpt,"\nSchedule: ",file.schedule);
    fclose(fpt);
    gets(file.schedule);
    fpt=fopen(khulna,"a+");
    fprintf(fpt,"%s\n",file.schedule);
    fclose(fpt);
    cout<<endl;

    cout<<"   (3) Input fare and after finishing it press 'Enter' key to go next: ";
    fpt=fopen(khulna,"a+");
    fprintf(fpt,"\nFare: ",file.fare);
    fclose(fpt);
    gets(file.fare);
    fpt=fopen(khulna,"a+");
    fprintf(fpt,"%s\n",file.fare);
    fclose(fpt);
    cout<<endl;

    cout<<"   *** It is the last step after finishing it press '#' and 'Enter' to close the adding works..."<<endl;
    cout<<"   (Last) Input journey time: ";
    fpt=fopen(khulna,"a+");
    fprintf(fpt,"\nJourney time: ",file.j_time);
    fclose(fpt);
    scanf("%[^#]",file.j_time);
    fpt=fopen(khulna,"a+");
    fprintf(fpt,"%s\n",file.j_time);
    fclose(fpt);

    cout<<endl<<endl<<"   You have successfully added a new route in the local bus section."<<endl;
    cout<<endl<<"   => Press any key to go back: ";
    getch();
    system("cls");
    goto khulna_add;
     }

    if(!strcmp(yes_no,"2"))
    {
        system("cls");
        goto khulna_add;
    }
    else
    {
        system("cls");
        cout<<endl<<"   Wrong keyword,press any key to go back: ";
        getch();
        system("cls");
        goto back_part_5;
    }

         }

          else if(!strcmp(city,"6"))
         {
         barisal_add:
fp=fopen("Barisal//Barisal.txt","r");
  fread(&loc,sizeof(loc),1,fp);
cout<<loc<<endl;
fclose(fp);

   route_details_2();

   fflush(stdin);

   gets(filename);
   char Barisal[30]="Barisal//";
   strcat(Barisal,filename);
   if(!strcmp(filename,"0"))
    goto main;
     if(!strcmp(filename,"00"))
    goto add;

    if(!strcmp(filename,"000"))
    goto sub;

     fpt=fopen(Barisal,"r+");
    if(fpt==NULL)
    {
        system("cls");
        cout<<endl<<"   Wrong keyword,press any key to go back: ";
        getch();
        system("cls");
        goto barisal_add;

    }
    system("cls");

    back_part_6:

    sure_add();

    fflush(stdin);
    gets(yes_no);
    if(!strcmp(yes_no,"1"))
        {
    system("cls");

    fpt=fopen(Barisal,"a+");
    fprintf(fpt,"\n*** From/To: ",file.title);
    fclose(fpt);

    fflush(stdin);
    cout<<endl<<"   Please input title [From, To] of the route (After finishing it press 'Enter' to go next step): ";
    gets(file.title);
    fpt=fopen(Barisal,"a+");
    fprintf(fpt,"%s\n",file.title);
    fclose(fpt);
    cout<<endl;

    fflush(stdin);
    cout<<"   Please input other details of the route: "<<endl;
    cout<<"   After finishing all steps in the last step press '#' and 'Enter' to close the adding works..."<<endl<<endl;
    cout<<"   (1) Input stand name and after finishing it press 'Enter' key to go next: ";
    fpt=fopen(Barisal,"a+");
    fprintf(fpt,"\nStand name: ",file.stand);
    fclose(fpt);
    gets(file.stand);
    fpt=fopen(Barisal,"a+");
    fprintf(fpt,"%s\n",file.stand);
    fclose(fpt);
    cout<<endl;

    cout<<"   (2) Input schedule and after finishing it press 'Enter' key to go next: ";
    fpt=fopen(Barisal,"a+");
    fprintf(fpt,"\nSchedule: ",file.schedule);
    fclose(fpt);
    gets(file.schedule);
    fpt=fopen(Barisal,"a+");
    fprintf(fpt,"%s\n",file.schedule);
    fclose(fpt);
    cout<<endl;

    cout<<"   (3) Input fare and after finishing it press 'Enter' key to go next: ";
    fpt=fopen(Barisal,"a+");
    fprintf(fpt,"\nFare: ",file.fare);
    fclose(fpt);
    gets(file.fare);
    fpt=fopen(Barisal,"a+");
    fprintf(fpt,"%s\n",file.fare);
    fclose(fpt);
    cout<<endl;

    cout<<"   *** It is the last step after finishing it press '#' and 'Enter' to close the adding works..."<<endl;
    cout<<"   (Last) Input journey time: ";
    fpt=fopen(Barisal,"a+");
    fprintf(fpt,"\nJourney time: ",file.j_time);
    fclose(fpt);
    scanf("%[^#]",file.j_time);
    fpt=fopen(Barisal,"a+");
    fprintf(fpt,"%s\n",file.j_time);
    fclose(fpt);

    cout<<endl<<endl<<"   You have successfully added a new route in the local bus section."<<endl;
    cout<<endl<<"   => Press any key to go back: ";
    getch();
    system("cls");
    goto barisal_add;
     }

    if(!strcmp(yes_no,"2"))
    {
        system("cls");
        goto barisal_add;
    }
    else
    {
        system("cls");
        cout<<endl<<"   Wrong keyword,press any key to go back: ";
        getch();
        system("cls");
        goto back_part_6;
    }

         }

          else if(!strcmp(city,"7"))
         {
        sylhet_add:
 fp=fopen("Sylhet//Sylhet.txt","r");
  fread(&loc,sizeof(loc),1,fp);
 cout<<loc<<endl;
fclose(fp);

   route_details_2();

   fflush(stdin);

   gets(filename);
   char Sylhet[30]="Sylhet//";
   strcat(Sylhet,filename);
   if(!strcmp(filename,"0"))
    goto main;
     if(!strcmp(filename,"00"))
    goto add;

    if(!strcmp(filename,"000"))
    goto sub;

     fpt=fopen(Sylhet,"r+");
    if(fpt==NULL)
    {
        system("cls");
        cout<<endl<<"   Wrong keyword,press any key to go back: ";
        getch();
        system("cls");
        goto sylhet_add;
    }
    system("cls");

    back_part_7:

    sure_add();

    fflush(stdin);
    gets(yes_no);
    if(!strcmp(yes_no,"1"))
        {
    system("cls");

    fpt=fopen(Sylhet,"a+");
    fprintf(fpt,"\n*** From/To: ",file.title);
    fclose(fpt);

    fflush(stdin);
    cout<<endl<<"   Please input title [From, To] of the route (After finishing it press 'Enter' to go next step): ";
    gets(file.title);
    fpt=fopen(Sylhet,"a+");
    fprintf(fpt,"%s\n",file.title);
    fclose(fpt);
    cout<<endl;

    fflush(stdin);
    cout<<"   Please input other details of the route: "<<endl;
    cout<<"   After finishing all steps in the last step press '#' and 'Enter' to close the adding works..."<<endl<<endl;
    cout<<"   (1) Input stand name and after finishing it press 'Enter' key to go next: ";
    fpt=fopen(Sylhet,"a+");
    fprintf(fpt,"\nStand name: ",file.stand);
    fclose(fpt);
    gets(file.stand);
    fpt=fopen(Sylhet,"a+");
    fprintf(fpt,"%s\n",file.stand);
    fclose(fpt);
    cout<<endl;

    cout<<"   (2) Input schedule and after finishing it press 'Enter' key to go next: ";
    fpt=fopen(Sylhet,"a+");
    fprintf(fpt,"\nSchedule: ",file.schedule);
    fclose(fpt);
    gets(file.schedule);
    fpt=fopen(Sylhet,"a+");
    fprintf(fpt,"%s\n",file.schedule);
    fclose(fpt);
    cout<<endl;

    cout<<"   (3) Input fare and after finishing it press 'Enter' key to go next: ";
    fpt=fopen(Sylhet,"a+");
    fprintf(fpt,"\nFare: ",file.fare);
    fclose(fpt);
    gets(file.fare);
    fpt=fopen(Sylhet,"a+");
    fprintf(fpt,"%s\n",file.fare);
    fclose(fpt);
    cout<<endl;

    cout<<"   *** It is the last step after finishing it press '#' and 'Enter' to close the adding works..."<<endl;
    cout<<"   (Last) Input journey time: ";
    fpt=fopen(Sylhet,"a+");
    fprintf(fpt,"\nJourney time: ",file.j_time);
    fclose(fpt);
    scanf("%[^#]",file.j_time);
    fpt=fopen(Sylhet,"a+");
    fprintf(fpt,"%s\n",file.j_time);
    fclose(fpt);

    cout<<endl<<endl<<"   You have successfully added a new route in the local bus section."<<endl;
    cout<<endl<<"   => Press any key to go back: ";
    getch();
    system("cls");
    goto sylhet_add;
     }

    if(!strcmp(yes_no,"2"))
    {
        system("cls");
        goto sylhet_add;
    }
    else
    {
        system("cls");
        cout<<endl<<"   Wrong keyword,press any key to go back: ";
        getch();
        system("cls");
        goto back_part_7;
    }

         }

         else if(!strcmp(city,"8"))
         {
         rangpur_add:
fp=fopen("Rangpur//Rangpur.txt","r");
  fread(&loc,sizeof(loc),1,fp);
 cout<<loc<<endl;
fclose(fp);

   route_details_2();

   fflush(stdin);

   gets(filename);
   char Rangpur[30]="Rangpur//";
   strcat(Rangpur,filename);
   if(!strcmp(filename,"0"))
    goto main;
     if(!strcmp(filename,"00"))
    goto add;

    if(!strcmp(filename,"000"))
    goto sub;

     fpt=fopen(Rangpur,"r+");
    if(fpt==NULL)
    {
        system("cls");
        cout<<endl<<"   Wrong keyword,press any key to go back: ";
        getch();
        system("cls");
        goto rangpur_add;
    }
    system("cls");

    back_part_8:

    sure_add();

    fflush(stdin);
    gets(yes_no);
    if(!strcmp(yes_no,"1"))
        {
    system("cls");

    fpt=fopen(Rangpur,"a+");
    fprintf(fpt,"\n*** From/To: ",file.title);
    fclose(fpt);

    fflush(stdin);
    cout<<endl<<"   Please input title [From, To] of the route (After finishing it press 'Enter' to go next step): ";
    gets(file.title);
    fpt=fopen(Rangpur,"a+");
    fprintf(fpt,"%s\n",file.title);
    fclose(fpt);
    cout<<endl;

    fflush(stdin);
    cout<<"   Please input other details of the route: "<<endl;
    cout<<"   After finishing all steps in the last step press '#' and 'Enter' to close the adding works..."<<endl<<endl;
    cout<<"   (1) Input stand name and after finishing it press 'Enter' key to go next: ";
    fpt=fopen(Rangpur,"a+");
    fprintf(fpt,"\nStand name: ",file.stand);
    fclose(fpt);
    gets(file.stand);
    fpt=fopen(Rangpur,"a+");
    fprintf(fpt,"%s\n",file.stand);
    fclose(fpt);
    cout<<endl;

    cout<<"   (2) Input schedule and after finishing it press 'Enter' key to go next: ";
    fpt=fopen(Rangpur,"a+");
    fprintf(fpt,"\nSchedule: ",file.schedule);
    fclose(fpt);
    gets(file.schedule);
    fpt=fopen(Rangpur,"a+");
    fprintf(fpt,"%s\n",file.schedule);
    fclose(fpt);
    cout<<endl;

    cout<<"   (3) Input fare and after finishing it press 'Enter' key to go next: ";
    fpt=fopen(Rangpur,"a+");
    fprintf(fpt,"\nFare: ",file.fare);
    fclose(fpt);
    gets(file.fare);
    fpt=fopen(Rangpur,"a+");
    fprintf(fpt,"%s\n",file.fare);
    fclose(fpt);
    cout<<endl;

    cout<<"   *** It is the last step after finishing it press '#' and 'Enter' to close the adding works..."<<endl;
    cout<<"   (Last) Input journey time: ";
    fpt=fopen(Rangpur,"a+");
    fprintf(fpt,"\nJourney time: ",file.j_time);
    fclose(fpt);
    scanf("%[^#]",file.j_time);
    fpt=fopen(Rangpur,"a+");
    fprintf(fpt,"%s\n",file.j_time);
    fclose(fpt);

    cout<<endl<<endl<<"   You have successfully added a new route in the local bus section."<<endl;
    cout<<endl<<"   => Press any key to go back: ";
    getch();
    system("cls");
    goto rangpur_add;
     }

    if(!strcmp(yes_no,"2"))
    {
        system("cls");
        goto rangpur_add;
    }
    else
    {
        system("cls");
        cout<<endl<<"   Wrong keyword,press any key to go back: ";
        getch();
        system("cls");
        goto back_part_8;
    }

         }

         else
         {
             cout<<endl<<"   Invalid choose..."<<endl;
             cout<<"   Press any key to go back page: ";
            getch();
            goto add;
         }

       }

       if(!strcmp(ch,"2"))
       {
           add2:
           system("cls");

           fp=fopen("Overview//Overview.txt","r");
           fread(&over,sizeof(over),1,fp);
           cout<<over<<endl;
           fclose(fp);

           add_details_2();

          fflush(stdin);

   gets(filename2);
   char Overview[2000]="Overview//";
   strcat(Overview,filename2);
   if(!strcmp(filename2,"0"))
    goto main;

    if(!strcmp(filename2,"00"))
    goto sub;

    fp=fopen(Overview,"r+");
    if(fp==NULL)
    {
        system("cls");
        cout<<endl<<"   Wrong keyword,press any key to go back: ";
        getch();
        system("cls");
        goto add2;
    }
    system("cls");

    back_part2:

    sure_add();

    fflush(stdin);
    gets(yes_no_2);
    if(!strcmp(yes_no_2,"1"))
        {
    system("cls");
    fp=fopen(Overview,"a+");
    fprintf(fp,"\n*** From/To: ",shortcut.title2);
    fclose(fp);

    fflush(stdin);
    cout<<endl<<"   Please input title [From, To] of the route (After finishing it press 'Enter' to go next step): ";
    gets(shortcut.title2);
    fp=fopen(Overview,"a+");
    fprintf(fp,"%s\n",shortcut.title2);
    fclose(fp);
    cout<<endl;

    fflush(stdin);
    cout<<"   Please input other details of the route: "<<endl;
    cout<<"   After finishing all steps in the last step press '#' and 'Enter' to close the adding works..."<<endl<<endl;
    cout<<"   (1) Input stand name and after finishing it press 'Enter' key to go next: ";
    fp=fopen(Overview,"a+");
    fprintf(fp,"\nStand name: ",shortcut.stand2);
    fclose(fp);
    gets(shortcut.stand2);
    fp=fopen(Overview,"a+");
    fprintf(fp,"%s\n",shortcut.stand2);
    fclose(fp);
    cout<<endl;

    cout<<"   (2) Input schedule and after finishing it press 'Enter' key to go next: ";
    fp=fopen(Overview,"a+");
    fprintf(fp,"\nSchedule: ",shortcut.schedule2);
    fclose(fp);
    gets(shortcut.schedule2);
    fp=fopen(Overview,"a+");
    fprintf(fp,"%s\n",shortcut.schedule2);
    fclose(fp);
    cout<<endl;

    cout<<"   (3) Input fare and after finishing it press 'Enter' key to go next: ";
    fp=fopen(Overview,"a+");
    fprintf(fp,"\nFare: ",shortcut.fare2);
    fclose(fp);
    gets(shortcut.fare2);
    fp=fopen(Overview,"a+");
    fprintf(fp,"%s\n",shortcut.fare2);
    fclose(fp);
    cout<<endl;

    cout<<"   *** It is the last step after finishing it press '#' and 'Enter' to close the adding works..."<<endl;
    cout<<"   (Last) Input journey time: ";
    fp=fopen(Overview,"a+");
    fprintf(fp,"\nJourney time: ",shortcut.j_time2);
    fclose(fp);
    scanf("%[^#]",shortcut.j_time2);
    fp=fopen(Overview,"a+");
    fprintf(fp,"%s\n",shortcut.j_time2);
    fclose(fp);

    cout<<endl<<endl<<"   You have successfully added a new route in the local bus section."<<endl;
    cout<<endl<<"   => Press any key to go back: ";
    getch();
    system("cls");
    goto add2;

       }

       if(!strcmp(yes_no_2,"2"))
    {
        system("cls");
        goto add2;
    }
    else
    {
        system("cls");
        cout<<endl<<"   Wrong keyword,press any key to go back: ";
        getch();
        system("cls");
        goto sub;
    }

  }

    else
    {

  system("cls");

   cout<<endl<<"   Sorry you have entered a wrong keyword..."<<endl;
   cout<<endl<<"   =>Press any key to go back: ";

    getch();
     goto sub;

      }

        case '4':

          system("cls");

          return_pro();

   fflush(stdin);
   gets(ex);

    if(!strcmp(ex,"0"))
    goto main;
    else
    {
     return 0;
    }


default:

 system("cls");

  cout<<endl<<"   Sorry you have entered a wrong keyword..."<<endl;
   cout<<"   =>Please press any key to go back page: ";

    getch();
     goto main;
    }
      }

    return 0;
}
