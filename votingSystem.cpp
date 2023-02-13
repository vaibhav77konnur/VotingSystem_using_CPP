#include<iostream>
using namespace std;

#define CANDIDATE_COUNT

#define CANDIDATE1 "Candidate A"
#define CANDIDATE2 "Candidate B"
#define CANDIDATE3 "Candidate C"
#define CANDIDATE4 "Candidate D"

int votesCount1=0, votesCount2=0, votesCount3=0, votesCount4=0, NOTA=0;


void CastVote()
{
    int choice = 0;
    cout<<"\n\n ----------------Please Choose your Candidate---------------\n\n";
    cout<<"\n 1."<<CANDIDATE1<<endl;
    cout<<"\n 2."<<CANDIDATE2<<endl;
    cout<<"\n 3."<<CANDIDATE3<<endl;
    cout<<"\n 4."<<CANDIDATE4<<endl;
    cout<<"\n 5.None of The Above" <<endl;

    cout<<"\n\n Enter Your Choice (1 - 4) : ";
    cin>>choice;

switch(choice)
{
    case 1: votesCount1++;
     break;
    case 2: votesCount2++;
     break;
    case 3: votesCount3++;
     break;
    case 4: votesCount4++;
    break;
    case 5: NOTA++;
    break;
    default: printf("\n Error: Wrong Choice !! Please retry");
             getchar();
}
cout<<"\n Thanks for voting\n";
}

void votesCount()
{
cout<<"\n\n------------------- Voting Statics---------------------------------"<<"\n";
cout<< CANDIDATE1<< votesCount1<<endl;
cout<< CANDIDATE2<< votesCount2<<endl;
cout<< CANDIDATE3<< votesCount3<<endl;
cout<< CANDIDATE4<< votesCount4<<endl;
cout<< "None of the above"<< NOTA<<endl;
}


void getLeadingCandidate()
{
    cout<<"\n\n"<<"-------------------Leading Candidate--------------------------"<<"\n\n";
    if(votesCount1>votesCount2 && votesCount1>votesCount3 && votesCount1 >votesCount4)
    cout<<CANDIDATE1;
    else if (votesCount2>votesCount3 && votesCount2>votesCount4 && votesCount2 >votesCount1)
    cout<<CANDIDATE2;
    else if(votesCount3>votesCount4 && votesCount3>votesCount2 && votesCount3 >votesCount1)
    cout<<CANDIDATE3;
    else if(votesCount4>votesCount1 && votesCount4>votesCount2 && votesCount4 >votesCount3)
    cout<<CANDIDATE4;
    else
    cout<<"----- Warning !!! No-win situation----\n";

}


int main()
{
    int choice = 0;
    while(1)
    {

    cout<<"------------------Welcome to Election 2023-------------------\n";
    cout<<"1. Cast the Vote \n";
    cout<<"2.Find Vote Count \n";
    cout<<"3.Find Leading Candidate\n";
    cout<<"4.EXIT \n";

        cout << "Enter Your choice: ";
        cin >> choice;
        cout << "\n";

        if(choice == 1)
        {
            CastVote();
        }
        else if(choice == 2)
        {
            votesCount();
        }
        else if(choice == 3)
        {
            getLeadingCandidate();
        }
        else if(choice == 4)
        {
            cout<<("__________________________________________________________\n");
            break;
        }

    }

     return 0;
}
