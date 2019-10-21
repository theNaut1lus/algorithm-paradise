#include<iostream.h>
#include<conio.h>
#include<dos.h>
class Quiz
{
 private:
 char ans,r;
 int p,i,j,k,l;
 public:
 void initial()
 {
  p=0;
 }
 void ques1()
 {
quest1:
 for(i=18;i<26;i++)
 {       gotoxy(38,i);   cout<<"!";      }
 for(j=38;j<81;j++)
 {       gotoxy(j,17);   cout<<"!";      }
 for(k=38;k<80;k++)
 {       gotoxy(k,25);   cout<<"!";      }
 for(l=18;l<26;l++)
 {       gotoxy(80,l);   cout<<"!";      }
 gotoxy(47,17);
 cout<<"Lifelines Available";
 gotoxy(40,18);
 cout<<"[1]\t50/50";
 gotoxy(40,19);
 cout<<"[2]\tAudience Poll";
 gotoxy(39,22);
 cout<<"\t\tTo use a Lifeline PRESS";
 gotoxy(39,23);
 cout<<"[F] for 50/50 \t [P] for Audience Poll";
  gotoxy(1,1);
  cout<<"\t[1]\tWorld's Longest River is :\n\n";
  cout<<"         (A) Amazon      "<<"\t\t"<<" (B) Nile \n";

  cout<<"         (C) Ganga       "<<"\t\t"<<" (D) Tsang Po \n";

  cin>>ans;
  gotoxy(30,9);
  if(ans=='B'||ans=='b')
  {
   cout<<"Correct Answer\n";
   p++;
  }
  else if(ans=='A'||ans=='a')
  {
   cout<<"Wrong Answer\n";
  }
  else if(ans=='C'||ans=='c')
  {
   cout<<"Wrong Answer\n";
  }
  else if(ans=='D'||ans=='d')
  {
   cout<<"Wrong Answer\n";
  }
  else if(ans=='F'||ans=='f')
  {
     clrscr();
  q1:
     cout<<"\t\tAre you sure to Use 50/50 Lifeline\n";
     cout<<"\t\t\t    Y/N\n";
     cin>>r;
     if(r=='Y'||r=='y')
     {
   clrscr();
  gotoxy(1,1);
  cout<<"\t[1]\tWorld's Longest River is :\n\n";
  cout<<"         (A) Amazon      "<<"\t\t"<<" (B) Nile \n";

  cout<<"         (C)             "<<"\t\t"<<" (D)          \n";

  cin>>ans;
  gotoxy(30,9);
  if(ans=='B'||ans=='b')
  {        cout<<"Correct Answer\n";        p++;   }
  else if(ans=='A'||ans=='a')
  {        cout<<"Wrong Answer\n";      }
  else if(ans=='C'||ans=='c')
  {        cout<<"Wrong Answer\n";      }
  else if(ans=='D'||ans=='d')
  {        cout<<"Wrong Answer\n";      }
	  }
     else if(r=='N'||r=='n')
     {
	   clrscr();
	   goto quest1;
     }
     else{
	   cout<<"Enter a Valid Option\n";
	   delay(500);
	   clrscr();
	   goto q1;
	}
  }
  else if(ans=='P'||ans=='p')
  {   clrscr();
     cout<<"\t\t   Audience Polling!!!\n";
     delay(1000);
      cout<<"         (A) Amazon     32%      "<<"\t\t"<<" (B) Nile      56% \n";

  cout<<"         (C) Ganga     3%         "<<"\t\t"<<" (D) Tsang Po  9%       \n";
   cin>>ans;
   gotoxy(30,9);
   if(ans=='B'||ans=='b')
   {  cout<<"Correct Answer"; p++; }
   else
   {  cout<<"Wrong Answer"; }

  }
  else
  {
  cout<<"Enter a Valid Option\n";
  delay(500);
  clrscr();
  goto quest1;
  }
 }




  void ques2()
 {
  quest2:
 for(i=18;i<26;i++)
 {       gotoxy(38,i);   cout<<"!";      }
 for(j=38;j<81;j++)
 {       gotoxy(j,17);   cout<<"!";      }
 for(k=38;k<80;k++)
 {       gotoxy(k,25);   cout<<"!";      }
 for(l=18;l<26;l++)
 {       gotoxy(80,l);   cout<<"!";      }
 gotoxy(47,17);
 cout<<"Lifelines Available";
 gotoxy(40,18);
 cout<<"[1]\t50/50";
 gotoxy(40,19);
 cout<<"[2]\tAudience Poll";
 gotoxy(39,22);
 cout<<"\t\tTo use a Lifeline PRESS";
 gotoxy(39,23);
 cout<<"[F] for 50/50 \t [P] for Audience Poll";
  gotoxy(1,1);
  cout<<"\t[2]\tWorld's Fastest Mammal is :\n\n";
  cout<<"         (A) Tiger       "<<"\t\t"<<" (B) Lion    \n  "  ;
  cout<<"       (C) Cheetah     "<<"\t\t"<<" (D) Jaguar  \n  "  ;

  cin>>ans;
  gotoxy(30,9);
  if(ans=='C'||ans=='c')
  {
   cout<<"Correct Answer\n";
   p++;
  }
  else if(ans=='B'||ans=='b')
  {
   cout<<"Wrong Answer\n";
  }
  else if(ans=='A'||ans=='a')
  { cout<<"Wrong Answer\n";   }
  else if(ans=='D'||ans=='d')
  { cout<<"Wrong Answer\n";	}
  else if(ans=='F'||ans=='f')
  {

     clrscr();
  q2:
     cout<<"\t\tAre you sure to Use 50/50 Lifeline\n";
     cout<<"\t\t\t    Y/N\n";
     cin>>r;
     if(r=='Y'||r=='y')
     {
   clrscr();
  gotoxy(1,1);
   cout<<"\t[2]\tWorld's Fastest Mammal is :\n\n";
  cout<<"         (A)             "<<"\t\t"<<" (B)         \n  "  ;
  cout<<"       (C) Cheetah     "<<"\t\t"<<" (D) Jaguar  \n  "  ;

  cin>>ans;
  gotoxy(30,9);
  if(ans=='C'||ans=='c')
  {        cout<<"Correct Answer\n";        p++;   }
  else if(ans=='A'||ans=='a')
  {        cout<<"Wrong Answer\n";      }
  else if(ans=='B'||ans=='b')
  {        cout<<"Wrong Answer\n";      }
  else if(ans=='D'||ans=='d')
  {        cout<<"Wrong Answer\n";      }
	  }
     else if(r=='N'||r=='n')
     {
	   clrscr();
	   goto quest2;
     }
     else{
	   cout<<"Enter a Valid Option\n";
	   delay(500);
	   clrscr();
	   goto q2;
	}
    }
  else if(ans=='P'||ans=='p')
  {
       clrscr();
     cout<<"\t\t   Audience Polling!!!\n";
     delay(1000);
      cout<<"         (A) Tiger      32%      "<<"\t\t"<<" (B) Lion      5% \n";

  cout<<"         (C) Cheetah    43 %         "<<"\t\t"<<" (D) Jaguar    30%       \n";
   cin>>ans;
   gotoxy(30,9);
   if(ans=='C'||ans=='c')
   {  cout<<"Correct Answer"; p++; }
   else
   {  cout<<"Wrong Answer"; }

  }
  else
  {
  cout<<"Enter a Valid Option\n";
  delay(500);
  clrscr();
  goto quest2;
  }
 }
  void ques3()
 {
quest3:
 for(i=18;i<26;i++)
 {       gotoxy(38,i);   cout<<"!";      }
 for(j=38;j<81;j++)
 {       gotoxy(j,17);   cout<<"!";      }
 for(k=38;k<80;k++)
 {       gotoxy(k,25);   cout<<"!";      }
 for(l=18;l<26;l++)
 {       gotoxy(80,l);   cout<<"!";      }
 gotoxy(47,17);
 cout<<"Lifelines Available";
 gotoxy(40,18);
 cout<<"[1]\t50/50";
 gotoxy(40,19);
 cout<<"[2]\tAudience Poll";
 gotoxy(39,22);
 cout<<"\t\tTo use a Lifeline PRESS";
 gotoxy(39,23);
 cout<<"[F] for 50/50 \t [P] for Audience Poll";

  gotoxy(1,1);
  cout<<"\t[3]\tPrime Minister of India :\n\n";
  cout<<"         (A) Dr Manmohan Singh"<<"\t\t"<<" (B) Dr A.P.J Abdul Kalam\n";
  cout<<"         (C) Narendra Modi    "<<"\t\t"<<" (D) Rahul Gandhi  \n  "  ;

  cin>>ans;
  gotoxy(30,9);
  if(ans=='C'||ans=='c')
  {       cout<<"Correct Answer\n";        p++;    }
  else if(ans=='A'||ans=='a')
  {          cout<<"Wrong Answer\n";            }
  else if(ans=='B'||ans=='b')
  {          cout<<"Wrong Answer\n";            }
  else if(ans=='D'||ans=='d')
  {          cout<<"Wrong Answer\n";          	}


  else if(ans=='F'||ans=='f')
  {     clrscr();
  q3:
     cout<<"\t\tAre you sure to Use 50/50 Lifeline\n";
     cout<<"\t\t\t    Y/N\n";
     cin>>r;
     if(r=='Y'||r=='y')
     {
   clrscr();
  gotoxy(1,1);
  cout<<"\t[3]\tPrime Minister of India :\n\n";
  cout<<"         (A) Dr Manmohan Singh"<<"\t\t"<<" (B)                      \n";
  cout<<"         (C) Narendra Modi    "<<"\t\t"<<" (D)               \n  "  ;

  cin>>ans;
  gotoxy(30,9);
  if(ans=='C'||ans=='c')
  {        cout<<"Correct Answer\n";        p++;   }
  else if(ans=='A'||ans=='a')
  {        cout<<"Wrong Answer\n";      }
  else if(ans=='B'||ans=='b')
  {        cout<<"Wrong Answer\n";      }
  else if(ans=='D'||ans=='d')
  {        cout<<"Wrong Answer\n";      }
	  }
     else if(r=='N'||r=='n')
     {
	   clrscr();
	   goto quest3;
     }
     else{
	   cout<<"Enter a Valid Option\n";
	   delay(500);
	   clrscr();
	   goto q3;
	}
  }
  else if(ans=='P'||ans=='p')
  {
     clrscr();
     cout<<"\t\t   Audience Polling!!!\n";
     delay(1000);
  cout<<"         (A) Dr Manmohan Singh    2% "<<"\t\t"<<" (B) Dr A.P.J Abdul Kalam  1% \n";
  cout<<"         (C) Narendra Modi        97% "<<"\t\t"<<" (D) Rahul Gandhi          0% \n  "  ;

   cin>>ans;
   gotoxy(30,9);
   if(ans=='C'||ans=='c')
   {  cout<<"Correct Answer"; p++; }
   else
   {  cout<<"Wrong Answer"; }

  }
  else
  {
  cout<<"Enter a Valid Option\n";
  delay(500);
  clrscr();
  goto quest3;
  }
 }

  void ques4()
 {
 quest4:
 for(i=18;i<26;i++)
 {       gotoxy(38,i);   cout<<"!";      }
 for(j=38;j<81;j++)
 {       gotoxy(j,17);   cout<<"!";      }
 for(k=38;k<80;k++)
 {       gotoxy(k,25);   cout<<"!";      }
 for(l=18;l<26;l++)
 {       gotoxy(80,l);   cout<<"!";      }
 gotoxy(47,17);
 cout<<"Lifelines Available";
 gotoxy(40,18);
 cout<<"[1]\t50/50";
 gotoxy(40,19);
 cout<<"[2]\tAudience Poll";
 gotoxy(39,22);
 cout<<"\t\tTo use a Lifeline PRESS";
 gotoxy(39,23);
 cout<<"[F] for 50/50 \t [P] for Audience Poll";
  gotoxy(1,1);
  cout<<"\t[4]\tNational Sport of England is :\n";
  cout<<"         (A) Football         "<<"\t\t"<<" (B) Cricket \n";
  cout<<"         (C) Baseball         "<<"\t\t"<<" (D) Hockey  \n";

  cin>>ans;
  gotoxy(30,9);
  if(ans=='B'||ans=='b')
  {
   cout<<"Correct Answer\n";
   p++;
  }
  else if(ans=='A'||ans=='a')
  {          cout<<"Wrong Answer\n";            }
   else if(ans=='C'||ans=='c')
  {          cout<<"Wrong Answer\n";            }
  else if(ans=='D'||ans=='d')
  {          cout<<"Wrong Answer\n";          	}


  else if(ans=='F'||ans=='f')
  {    clrscr();
  q4:
     cout<<"\t\tAre you sure to Use 50/50 Lifeline\n";
     cout<<"\t\t\t    Y/N\n";
     cin>>r;
     if(r=='Y'||r=='y')
     {
   clrscr();
  gotoxy(1,1);
  cout<<"\t[4]\tNational Sport of England is :\n";
  cout<<"         (A) Football         "<<"\t\t"<<" (B) Cricket \n";
  cout<<"         (C)                  "<<"\t\t"<<" (D)         \n";

  cin>>ans;
  gotoxy(30,9);
  if(ans=='b'||ans=='B')
  {        cout<<"Correct Answer\n";        p++;   }
  else if(ans=='A'||ans=='a')
  {        cout<<"Wrong Answer\n";      }
  else if(ans=='C'||ans=='c')
  {        cout<<"Wrong Answer\n";      }
  else if(ans=='D'||ans=='d')
  {        cout<<"Wrong Answer\n";      }
	  }
     else if(r=='N'||r=='n')
     {
	   clrscr();
	   goto quest4;
     }
     else{
	   cout<<"Enter a Valid Option\n";
	   delay(500);
	   clrscr();
	   goto q4;
	}
  }
  else if(ans=='P'||ans=='p')
  {  clrscr();
     cout<<"\t\t   Audience Polling!!!\n";
     delay(1000);
  cout<<"         (A) Football    32%     "<<"\t\t"<<" (B) Cricket   37% \n";
  cout<<"         (C) Baseball    7%     "<<"\t\t"<<" (D) Hockey    27%  \n";

   cin>>ans;
   gotoxy(30,9);
   if(ans=='B'||ans=='b')
   {  cout<<"Correct Answer"; p++; }
   else
   {  cout<<"Wrong Answer"; }

  }
  else
  {
  cout<<"Enter a Valid Option\n";
  delay(500);
  clrscr();
  goto quest4;
  }


 }
 void ques5()
 {
 quest5:
 for(i=18;i<26;i++)
 {       gotoxy(38,i);   cout<<"!";      }
 for(j=38;j<81;j++)
 {       gotoxy(j,17);   cout<<"!";      }
 for(k=38;k<80;k++)
 {       gotoxy(k,25);   cout<<"!";      }
 for(l=18;l<26;l++)
 {       gotoxy(80,l);   cout<<"!";      }
 gotoxy(47,17);
 cout<<"Lifelines Available";
 gotoxy(40,18);
 cout<<"[1]\t50/50";
 gotoxy(40,19);
 cout<<"[2]\tAudience Poll";
 gotoxy(39,22);
 cout<<"\t\tTo use a Lifeline PRESS";
 gotoxy(39,23);
 cout<<"[F] for 50/50 \t [P] for Audience Poll";
  gotoxy(1,1);
  cout<<"\t[5]\tNational Animal of India :\n";
  cout<<"         (A) Lion             "<<"\t\t"<<" (B) Kangaroo \n";
  cout<<"         (C) Kiwi             "<<"\t\t"<<" (D) Tiger    \n";
  cin>>ans;
  gotoxy(30,9);
  if(ans=='D'||ans=='d')
  {
   cout<<"Correct Answer\n";
   p++;
  }
  else if(ans=='A'||ans=='a')
  {          cout<<"Wrong Answer\n";            }
   else if(ans=='B'||ans=='b')
  {          cout<<"Wrong Answer\n";            }
  else if(ans=='C'||ans=='c')
  {          cout<<"Wrong Answer\n";          	}


  else if(ans=='F'||ans=='f')
  {  clrscr();
  q5:
     cout<<"\t\tAre you sure to Use 50/50 Lifeline\n";
     cout<<"\t\t\t    Y/N\n";
     cin>>r;
     if(r=='Y'||r=='y')
     {
   clrscr();
  gotoxy(1,1);
  cout<<"\t[5]\tNational Animal of India :\n";
  cout<<"         (A) Lion             "<<"\t\t"<<" (B)          \n";
  cout<<"         (C)                  "<<"\t\t"<<" (D) Tiger    \n";

  cin>>ans;
  gotoxy(30,9);
  if(ans=='d'||ans=='D')
  {        cout<<"Correct Answer\n";        p++;   }
  else if(ans=='A'||ans=='a')
  {        cout<<"Wrong Answer\n";      }
  else if(ans=='C'||ans=='c')
  {        cout<<"Wrong Answer\n";      }
  else if(ans=='b'||ans=='B')
  {        cout<<"Wrong Answer\n";      }
	  }
     else if(r=='N'||r=='n')
     {
	   clrscr();
	   goto quest5;
     }
     else{
	   cout<<"Enter a Valid Option\n";
	   delay(500);
	   clrscr();
	   goto q5;
	}

  }
  else if(ans=='P'||ans=='p')
  {  clrscr();
     cout<<"\t\t   Audience Polling!!!\n";
     delay(1000);
  cout<<"\t[5]\tNational Animal of India :\n";
  cout<<"         (A) Lion      23%       "<<"\t\t"<<" (B) Kangaroo    1% \n";
  cout<<"         (C) Kiwi       2%      "<<"\t\t"<<" (D) Tiger      74%    \n";

   cin>>ans;
   gotoxy(30,9);
   if(ans=='D'||ans=='d')
   {  cout<<"Correct Answer"; p++; }
   else
   {  cout<<"Wrong Answer"; }

  }
  else
  {
  cout<<"Enter a Valid Option\n";
  delay(500);
  clrscr();
  goto quest5;
  }
  delay(300);
  clrscr();
  delay(500);
  gotoxy(33,9);
  cout<<"Marks : "<<p<<"/5";
 }
};
 void main()
 {
  textbackground(BLUE+BLINK);
  textcolor(6+BLINK);
  clrscr();
  gotoxy(23,13);
  cout<<"Press any key to Enter Quiz";
  getch();
  clrscr();
  gotoxy(33,9);
  cout<<"Loading....";
  delay(1000);
  textcolor(6);
  clrscr();
  Quiz object;
  object.initial();
  object.ques1();
  delay(1000);
  clrscr();
  object.ques2();
  delay(1000);
  clrscr();
  object.ques3();
  delay(1000);
  clrscr();
  object.ques4();
  delay(1000);
  clrscr();
  object.ques5();

  getch();
 }