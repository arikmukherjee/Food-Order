#include <iostream>

using namespace std;

int main()
{
  int returnTotalBill(void);
  int totalBill=returnTotalBill();
  cout<<"You have to pay :"<<totalBill<<endl;
  cout<<"Thank you for you order!"<<endl;
  cout<<"Visit Again!"<<endl;
}

int returnTotalBill()
{
    char c;
    char item; // to select items.
    char vegItem;
    int billAmount=0;
    char selectAgain;
    char nonvegItem;

    cout<<"----------WELCOME TO FOOD CORNER----------"<<endl;
    cout<<"Please follow the instructions given below"<<endl;
    cout<<"Step 1 : Please press s to start your order:"<<endl;
    cout<<"Step 2 : You can order both Veg & Non-veg items."<<endl;
    cout<<"Step 3 : Please press a to select veg item."<<endl;
    cout<<"Step 4 : Please press b to select nonveg item.:"<<endl;
    cout<<"Step 5 : You will get your final bill after order."<<endl;
    start:
    cin>>c; // taking inputs to start

    if (c=='s' || c=='S')
    {
      items:
      cout<<"Please select your choice!"<<endl;
      cout<<"(a)Veg Items              (b)Non-Veg Items"<<endl;

      cin>>item;  // taking inputs to select items.

      if(item=='a' || item=='A')
      {
         vegItemList: //if wrong value is pressed control will come back to here.

         cout<<"PLease select 1,2,3,4,5 as your wish."<<endl;
         cout<<"1. Paneer   :    250/-"<<endl;
         cout<<"2. Burger   :    50/-"<<endl;
         cout<<"3. Pizza    :    100/-"<<endl;
         cout<<"4. Chowmin  :    70/-"<<endl;
         cout<<"5. Veg-Roll :    40/-"<<endl;

         // veg items start from here.
         cin>>vegItem;
         if(vegItem=='1')
         {
             billAmount=billAmount+250;
         }
         else if(vegItem=='2')
         {
            billAmount=billAmount+50;
         }
         else if(vegItem=='3')
         {
            billAmount=billAmount+100;
         }
         else if(vegItem=='4')
         {
            billAmount=billAmount+70;
         }
         else if(vegItem=='5')
         {
            billAmount=billAmount+40;
         }
         else
         {
            cout<<"You have entered wrong character. Please try again!!"<<endl;
            goto vegItemList;
         }
         cout<<"Do you want to add more items ? y or n ?"<<endl;
         cin>>selectAgain;
         if(selectAgain=='y')
         {
             goto items;
         }
         else
         {
             return billAmount;
         }
      }
      else if(item=='b' || item=='B')
      {
         nonvegItemList: //if wrong value is pressed control will come back to here.

         cout<<"PLease select 1,2,3,4,5 as your wish."<<endl;
         cout<<"1. Chicken           :    350/-"<<endl;
         cout<<"2. Burger            :    250/-"<<endl;
         cout<<"3. Pizza             :    450/-"<<endl;
         cout<<"4. Chicken Chowmin   :    170/-"<<endl;
         cout<<"5. Chicken Roll      :    100/-"<<endl;

         // veg items start from here.
         cin>>nonvegItem;
         if(nonvegItem=='1')
         {
             billAmount=billAmount+350;
         }
         else if(nonvegItem=='2')
         {
            billAmount=billAmount+250;
         }
         else if(nonvegItem=='3')
         {
            billAmount=billAmount+450;
         }
         else if(nonvegItem=='4')
         {
            billAmount=billAmount+170;
         }
         else if(nonvegItem=='5')
         {
            billAmount=billAmount+100;
         }
         else
         {
            cout<<"You have entered wrong character. Please try again!!"<<endl;
            goto nonvegItemList;
         }
         cout<<"Do you want to add more items ? y or n ?"<<endl;
         cin>>selectAgain;
         if(selectAgain=='y')
         {
             goto items;
         }
         else
         {
             return billAmount;
         }
      }
      else
      {
         cout<<"You have entered wrong character. Please try again!!"<<endl;
         goto items;
      }
    }
    else
    {
        cout<<"You have entered wrong character. Please press S/s to continue!!"<<endl;
        goto start;
    }

    return billAmount;
}
