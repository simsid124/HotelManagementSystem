#include<iostream>
using namespace std;
int  main(){
    int quant;
    int choice;

// q is quantity of items
    int Qrooms=0, Qpasta=0, Qburger=0, Qnoodles=0, Qpizza=0, Qshake=0;
// s is sold items
    int Srooms=0, Spasta=0, Sburger=0, Snoodles=0, Spizza=0, Sshake=0;
// t is total price of items
    int Trooms=0, Tpasta=0, Tburger=0, Tnoodles=0, Tpizza=0, Tshake=0;

    cout<<"\n\tQuantity of rooms we have";
    cout<<"\nRooms available:";
    cin>>Qrooms;
    cout<<"Quantity of pasta:";
    cin>>Qpasta;
    cout<<"Quantity of burger:";
    cin>>Qburger;
    cout<<"Quantity of noodles:";
    cin>>Qnoodles;
    cout<<"Quantity of pizza:";
    cin>>Qpizza;
    cout<<"Quantity of shake:";
    cin>>Qshake;

    m:
    cout<<"\n\t\tPlease select from the given menu";
    cout<<"\n1)Rooms";
    cout<<"\n2)Pasta";
    cout<<"\n3)Burger";
    cout<<"\n4)Noodles";
    cout<<"\n5)Pizza";
    cout<<"\n6)Shake";
    cout<<"\n7)Information regarding sales";
    cout<<"\n8)Exit";

    cout<<"\n\nPlease enter your choice";
    cin>>choice;

    switch (choice){
        case 1:
        cout<<"\nEnter the number of rooms you want: ";
        cin>>quant;
        if(Qrooms-Srooms>=quant){
            Srooms=Srooms+quant;
            Trooms=Trooms+(quant*1200);
            cout<<"\n\n\t"<<quant<<"rooms have been alloted to you";
        }
        else
            cout<<"\n\tOnly "<<Qrooms-Srooms<<"room(s) remaining in hotel";
            break;

        case 2:
        cout<<"\nEnter Pasta quantity: ";
        cin>>quant;
        if(Qpasta-Spasta>=quant){
            Spasta=Spasta+quant;
            Tpasta=Tpasta+(quant*250);
            cout<<"\n\n\t"<<quant<<"pasta(s) ordered";
        }
        else
            cout<<"\n\tOnly "<<Qpasta-Spasta<<"pasta(s) remaining in hotel";
            break;

        case 3:
        cout<<"\nEnter Burger quantity: ";
        cin>>quant;
        if(Qburger-Sburger>=quant){
            Sburger=Sburger+quant;
            Tburger=Tburger+(quant*120);
            cout<<"\n\n\t"<<quant<<"burger(s) ordered";
        }
        else
            cout<<"\n\tOnly "<<Qburger-Sburger<<"burger(s) remaining in hotel";
            break;

        case 4:
        cout<<"\nEnter Noodles quantity: ";
        cin>>quant;
        if(Qnoodles-Snoodles>=quant){
            Snoodles=Snoodles+quant;
            Tnoodles=Tnoodles+(quant*140);
            cout<<"\n\n\t"<<quant<<"noodles(s) ordered";
        }
        else
            cout<<"\n\tOnly "<<Qnoodles-Snoodles<<"noodles remaining in hotel";
            break;

        case 5:
        cout<<"\nEnter Pizza quantity: ";
        cin>>quant;
        if(Qpizza-Spizza>=quant){
            Spizza=Spizza+quant;
            Tpizza=Tpizza+(quant*200);
            cout<<"\n\n\t"<<quant<<"pizza(s) ordered";
        }
        else
            cout<<"\n\tOnly "<<Qpizza-Spizza<<"pizza(s) remaining in hotel";
            break;

        case 6:
        cout<<"\nEnter Shake quantity: ";
        cin>>quant;
        if(Qshake-Sshake>=quant){
            Sshake=Sshake+quant;
            Tshake=Tshake+(quant*70);
            cout<<"\n\n\t"<<quant<<"shake(s) ordered";
        }
        else
            cout<<"\n\tOnly "<<Qshake-Sshake<<"shake(s) remaining in hotel";
            break;

        case 7:
        cout<<"\n\t\tDetails regarding sales";
        cout<<"\n\nNumber of rooms we had: "<<Qrooms;
        cout<<"\nNumber of rooms we gave for rent: "<<Srooms;
        cout<<"\nRemaining rooms: "<<Qrooms-Srooms;
        cout<<"\nTotal room collection for the day: "<<Trooms;

        cout<<"\n\nNumber of pasta we had: "<<Qpasta;
        cout<<"\nNumber of pasta we sold: "<<Spasta;
        cout<<"\nRemaining pasta: "<<Qpasta-Spasta;
        cout<<"\nTotal pasta collection for the day: "<<Tpasta;

        cout<<"\n\nNumber of burger we had: "<<Qburger;
        cout<<"\nNumber of burger we sold: "<<Sburger;
        cout<<"\nRemaining burger: "<<Qburger-Sburger;
        cout<<"\nTotal burger collection for the day: "<<Tburger;

        cout<<"\n\nNumber of noodles we had: "<<Qnoodles;
        cout<<"\nNumber of noodles we sold: "<<Snoodles;
        cout<<"\nRemaining noodles: "<<Qnoodles-Snoodles;
        cout<<"\nTotal noodles collection for the day: "<<Tnoodles;

        cout<<"\n\nNumber of pizza we had: "<<Qpizza;
        cout<<"\nNumber of pizza we sold: "<<Spizza;
        cout<<"\nRemaining pizza: "<<Qpizza-Spizza;
        cout<<"\nTotal pizza collection for the day: "<<Tpizza;

        cout<<"\n\nNumber of shake we had: "<<Qshake;
        cout<<"\nNumber of shake we sold: "<<Sshake;
        cout<<"\nRemaining shake: "<<Qshake-Sshake;
        cout<<"\nTotal shake collection for the day: "<<Tshake;

        case 8:
        exit(0);

        default:
        cout<<"Please select from the mentioned above!!";
    }
    goto m;
    

}