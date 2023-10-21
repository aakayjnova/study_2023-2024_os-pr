#include<iostream>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<iomanip>

  char op;

using namespace std;
void sum()
   {
     
    int sum = 0;
    int n;
    int numbers;
    cout << "Enter number of items: \n";
    cin >> numbers;

    for(int i=0;i<numbers;i++)
    {
        cout<< "Enter number "<< i <<":\n\n" ;
        cin>>n; 
        sum+=n;
    }
    cout << "Sum is: "<< sum << "\n\n";
    
    }
void diff()
    {
     int diff;
     int n1,n2;
     cout << "Enter two numbers to find their difference:\n\n";
     cout << "Enter first number: ";
     cin >> n1;
     cout << "\nEnter second number: ";
     cin >> n2;
     diff=n1-n2;
     cout << "\nDifference is: " << diff << "\n\n";
     }
     
void mult()
    
    {
     int mult=1;
     int n;
     int numbers;
     cout << "Enter number of items:\n";
     cin >> numbers;
     for(int i=0;i<=numbers;i++)
     {
             cout << "\nEnter item "<<i<<":";
             cin >> n;
             mult*=n;
     }
             
     cout << "Product is: " << mult << "\n\n";    
     }
       
 void div()
     {
      int div;
      int n1;
      int n2;
      cout << "Enter 2 numbers to find their quotient\n\n";
      cout << "Enter numerator: ";
      cin >> n1;
      cout << "\nEnter denominator: ";
      cin >> n2;
      div=n1/n2;
      cout << "\nQuotient is: "<< div << "\n\n";
      }      

void power()
     {     
     long int p;
     int res=1,n; 
     cout << "Enter number: ";
     cin >> n;
     cout << "\nEnter power: ";
     cin >> p;
     for(int i=1;i<=p;i++)
     {
      res=n*res;
     }
      cout << "\n Power is : " << res <<"\n";
     } 
       
 void fact()
     {
      long int f=1;
      int c=1,n;
      cout << "Enter number to find its factorial: ";
      cin >> n;
      while(c<=n)
      {
                 f=f*c;
                 c+=1;
      }     
                 cout << "\nFactorial of " <<  n << " is : " << f <<"\n";     
      }
int main()
{   
    
    
    system("cls");

    while(op!='0')
    {
                
    system("pause");          
    system("cls");    
    cout << "*Which operation you want to perform*\n";
    cout << "Press 0 for exit\n";
    cout << "Press 1 for addition \n";
    cout << "Press 2 for subtraction\n";
    cout << "Press 3 for multiplication\n";
    cout << "Press 4 for division\n";
    cout << "Press 5 for power calculation\n";
    cout << "Press 6 for factorial calculation\n";
    cout << "Press option:";
    cin >> op;
    switch(op)
    {
              case '1':
              sum();
              break;

              case '2':
              diff();
              break;

              case '3':
              mult();
              break;

              case '4':
              div();
              break;

              case '5':
              power();
              break;

              case '6':
              fact();
              break;
                  
              case '0':
              exit(0); 
                 
              default:
              cout<<"Invalid input"  ;
              system("cls");
    } 
    }
                                                                        
                    
                    getch();
                    }
