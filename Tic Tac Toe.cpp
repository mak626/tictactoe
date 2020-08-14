    /*

        TIC TAC TOE GAME
        DEVELOPED BY MAK
        
        IDE:CODE BLOCKS 16.01
        COMPILER:GNU GCC

    */

    #include<iostream>
    #include<stdio.h>
    #include<stdlib.h>
    #include<conio.h>
    #include<time.h>

    using namespace std;

    char box[10];                          //LAYOUT VARIABLES
    int  dplayer,choose,ch,gamestatus;     //PLAYER TURN, PLAYER VS PLAYER CHOICE(choose) , COMPUTER VS PLAYER CHOICE(ch), GAME STATUS
    int  level;                            //DIFFICULT OR EASY
    int  winner;                           //WINNER OF GAME 1=PLAYER1 , 2=PLAYER2
    int  anyval;                           //AI VARIABLE


    //COMMON FUNCTIONS

    //TO DISPLAY BOARD CURRENT GAME LAYOUT
    void layout()
    {
    system ("CLS");          // CLEAR CONSOLE SCREEN
    cout << "     |     |     " << endl;
    cout << "  " << box[1] << "  |  " << box[2] << "  |  " << box[3] << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << box[4] << "  |  " << box[5] << "  |  " << box[6] << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << box[7] << "  |  " << box[8] << "  |  " << box[9] << endl;
    cout << "     |     |     " << endl << endl;
    }

    //TO CHOOSE PLAYER VS PLAYER OR COMPUTER VS PLAYER
    int player()
    {
    //RESETTING BOARD VALUES
    box[1]='1';
    box[2]='2';
    box[3]='3';
    box[4]='4';
    box[5]='5';
    box[6]='6';
    box[7]='7';
    box[8]='8';
    box[9]='9';

    //RESETIING PLAYER TURN
    dplayer=2;

    system ("CLS");          // CLEAR CONSOLE
    system("color 07");
    char x;
    cout<<"\n PLEASE CHOOSE \n 1.PLAYER VS PLAYER \n 2.PLAYER VS COMPUTER \n ENTER:";
    for(int i=0;;i++){
        if(i>0)
        cout<<"\n PLEASE RE-ENTER:";
        cin.clear();                   //TO AVOID INFINITE LOOP
        cin>>x;
        cin.ignore(256,'\n');          //TO AVOID INFINITE LOOP
       if (x=='1')
        return 1;
       else if(x=='2')
        return 2;
                    }
    }

/*
     win() FUNCTION RETURN VALUES:-
     GAME RUNNING=0
     A PLAYER WON=1
     GAME OVER WITH NO WINNER=-1
*/
    int win()
    {
        if (box[1] == box[2] && box[2] == box[3])
           {
            if(box[2]=='X')
                winner=1;
            else if(box[2]=='O')
                winner=2;
            box[4]=box[5]=box[6]=box[7]=box[8]=box[9]=' ';
            return 1;
           }
        else if (box[4] == box[5] && box[5] == box[6])
           {
            if(box[5]=='X')
                winner=1;
            else if(box[5]=='O')
                winner=2;
            box[1]=box[2]=box[3]=box[7]=box[8]=box[9]=' ';
            return 1;
           }
        else if (box[7] == box[8] && box[8] == box[9])
           {
            if(box[8]=='X')
                winner=1;
            else if(box[8]=='O')
                winner=2;
            box[1]=box[2]=box[3]=box[4]=box[5]=box[6]=' ';
            return 1;
           }
        else if (box[1] == box[4] && box[4] == box[7])
            {
            if(box[4]=='X')
                winner=1;
            else if(box[4]=='O')
                winner=2;
            box[2]=box[3]=box[5]=box[6]=box[8]=box[9]=' ';
            return 1;
            }
        else if (box[2] == box[5] && box[5] == box[8])
            {
            if(box[5]=='X')
                winner=1;
            else if(box[5]=='O')
                winner=2;
            box[1]=box[3]=box[4]=box[6]=box[7]=box[9]=' ';
            return 1;
            }
        else if (box[3] == box[6] && box[6] == box[9])
           {
            if(box[6]=='X')
                winner=1;
            else if(box[6]=='O')
                winner=2;
            box[1]=box[2]=box[4]=box[5]=box[7]=box[8]=' ';
            return 1;
           }
        else if (box[1] == box[5] && box[5] == box[9])
           {
            if(box[5]=='X')
                winner=1;
            else if(box[5]=='O')
                winner=2;
            box[2]=box[3]=box[4]=box[6]=box[7]=box[8]=' ';
            return 1;
           }
        else if (box[3] == box[5] && box[5] == box[7])
           {
            if(box[5]=='X')
                winner=1;
            else if(box[5]=='O')
                winner=2;
            box[1]=box[2]=box[4]=box[6]=box[8]=box[9]=' ';
            return 1;
           }

        else if (box[1]!='1' && box[2]!='2' && box[3]!='3' && box[4]!='4' && box[5]!='5' && box[6]!='6' && box[7]!='7' && box[8]!='8' && box[9]!='9')
            return -1;
        else
            return 0;
    }


    //PLAYER VS PLAYER FUNCTIONS

    //PROGRAM START FUNCTION.RETURNS 1=START,0=STOP THE PROGRAM
    int start()
    {
    char x;
    cout<<"\n                                                   TIC TAC TOE";
    cout<<"\n HOW TO PLAY"<<"\n THERE ARE TWO MODES"<<"\n 1.PLAYER VS PLAYER \n 2.PLAYER VS COMPUTER";
    cout<<"\n\n THE LAYOUT OF THE GAME IS:- \n\n";

    cout << "     |     |     " << '\n';
    cout << "  " <<"1" << "  |  " << "2" << "  |  " << "3" << '\n';
    cout << "_____|_____|_____" << '\n';
    cout << "     |     |     " << '\n';
    cout << "  " << "4" << "  |  " << "5" << "  |  " << "6" << '\n';
    cout << "_____|_____|_____" << '\n';
    cout << "     |     |     " << '\n';
    cout << "  " << "7" << "  |  " << "8" << "  |  " << "9" << '\n';
    cout << "     |     |     " << '\n' << '\n';

    cout<<"\n\n THE PLAYER IS REQUESTED TO TYPE THE NUMBER OF THE PLACE AS IN THE LAYOUT WHERE HE/SHE WANTS TO PUT X OR O";

    cout<<"\n\n WOULD YOU LIKE TO BEGIN:Y/N?:";
    for(int i=0;;i++){
        if(i>0)
        cout<<"\n PLEASE ENTER Y/N:";
        cin.clear();             //TO AVOID INFINITE LOOP
        cin>>x;
        cin.ignore(256,'\n');    //TO AVOID INFINITE LOOP
        if(x=='y'||x=='Y')
           return 1;
        else if(x=='n'||x=='N')
           return 0;
                    }
    }

    //TO CHOOSE WHICH PLAYER TO PLAY (PLAYER 1 OR PLAYER 2
    int decideplayer(int x)
    {
        if(x==1)
            return 2;       //PLAYER 2
        else if(x==2)
            return 1;       //PLAYER 1
    }



    //COMPUTER VS PLAYER FUCTIONS
    void AI()
{   int status;
        status=win();
    while(status==0)
    {
    cout<<"\n COMPUTER CHOOSING PLEASE WAIT";
    if(box[5]=='5'&&level==1)
        {
           box[5]='O';
           break;
        }

        //COUNTER ATTACK
        if (box[1] == box[3])
            {
            if( box[2]=='2')
                {
                    box[2]='O';
                    break;
                }
            }
        else if (box[1] == box[2])
            {
            if(box[3]=='3')
                {
                    box[3]='O';
                    break;
                }
            }
        else if (box[2] == box[3])
            {
            if(box[1]=='1')
                {
                    box[1]='O';
                    break;
                }
            }
        else if (box[4] == box[6])
            {
            if(box[5]=='5')
                {
                    box[5]='O';
                    break;
                }
            }
        else if (box[4] == box[5])
            {
            if(box[6]=='6')
                {
                    box[6]='O';
                    break;
                }
            }
        else if (box[5] == box[6])
            {
            if(box[4]=='4')
                {
                    box[4]='O';
                    break;
                }
            }
        else if (box[7] == box[9])
           {
            if(box[8]=='8')
                {
                    box[8]='O';
                    break;
                }
           }
        else if (box[8] == box[9])
           {
            if(box[7]=='7')
                {
                    box[7]='O';
                    break;
                }
           }
        else if (box[7] == box[8])
           {
            if(box[9]=='9')
                {
                    box[9]='O';
                    break;
                }
           }
        else if (box[1] == box[7])
            {
            if(box[4]=='4')
                {
                    box[4]='O';
                    break;
                }
            }
        else if (box[1] == box[4])
            {
            if(box[7]=='7')
                {
                    box[7]='O';
                    break;
                }
            }
        else if (box[4] == box[7])
            {
            if(box[1]=='1')
                {
                    box[1]='O';
                    break;
                }
            }
        else if (box[2]== box[8])
            {
            if(box[5]=='5')
                {
                    box[5]='O';
                    break;
                }
            }
         else if (box[2]== box[5])
            {
            if(box[8]=='8')
                {
                    box[8]='O';
                    break;
                }
            }
         else if (box[5]== box[8])
            {
            if(box[2]=='2')
                {
                    box[2]='O';
                    break;
                }
            }
        else if (box[3] == box[9])
           {
            if(box[6]=='6')
                {
                    box[6]='O';
                    break;
                }
           }
        else if (box[6] == box[9])
           {
            if(box[3]=='3')
                {
                    box[3]='O';
                    break;
                }
           }
        else if (box[3] == box[6])
           {
            if(box[9]=='9')
                {
                    box[9]='O';
                    break;
                }
           }
        else if (box[1]== box[9])
           {
            if(box[5]=='5')
                {
                    box[5]='O';
                    break;
                }
           }
        else if (box[5]== box[9])
           {
            if(box[1]=='1')
                {
                    box[1]='O';
                    break;
                }
           }
        else if (box[1]== box[5])
           {
            if(box[9]=='9')
                {
                    box[9]='O';
                    break;
                }
           }
        else if (box[3] == box[7])
           {
            if(box[5]=='5')
                {
                    box[5]='O';
                    break;
                }
           }
        else if (box[5] == box[7])
           {
            if(box[3]=='3')
                {
                    box[3]='O';
                    break;
                }
           }
        else if (box[3] == box[5])
           {
            if(box[7]=='7')
                {
                    box[7]='O';
                    break;
                }
           }

        //returns a random box number and if the box is already marked it chooses a different value
        once:
        srand(time(NULL));
        anyval=rand()%10;
        if((box[anyval]=='X')||anyval==0||(box[anyval]=='O'))
            goto once;
        box[anyval]='O';
        break;
    }
}



    //MAIN PROGRAM
    int main()
    {
        int strt,pler,i;  //START,MODE OF PLAYER,LOOP VARIABLE
        char rplay;       //REPLAY

        //TO DECIDE WHETHER TO START GAME OR NOT
        strt=start();                               //ASSIGNING RETURN VALUE OF FUNCTION START TO VARIABLE strt
        if(strt==1)
            pler=player();                          //RECIEVING INFO IF IT IS 1.PLAYER VS PLAYER OR 2.COMP VS PLAYER
        else
            return 0;                               //STOPPING PROGRAM

    GAME:
        switch(pler)                                //TO CHOOSE CODE FOR PLAYER VS PLAYER / COMPUTER VS PLAYER
        {
         case 1:goto pvp;
                break;
         case 2:goto pvc;
                break;
        }

                //PLAYER VS PLAYER CODE

        pvp:cout<<"\n PLAYER 1:X \n PLAYER 2:O";
            cout<<"\n PRESS ANY KEY TO CONTINUE";
            getch();

            //GAME
            do{
                layout();
                dplayer=decideplayer(dplayer);
                //PLAYER TURN
                if(dplayer==1)      //PLAYER 1
                 {
                    cout<<"\n PLAYER 1 CHOOSE:";
                    cin>>choose;
                        c1:
                            if(box[choose]=='X'||box[choose]=='O'||choose>9||choose<1)
                            {
                                cout<<"\n PLEASE RE-ENTER A VALID PLACE:";
                                cin>>choose;
                                goto c1;
                            }
                            else
                                box[choose]='X';

                 }
                else                 //PLAYER 2
                 {
                    cout<<"\n PLAYER 2 CHOOSE:";
                    cin>>choose;
                        c2:
                        if(box[choose]=='X'||box[choose]=='O'||choose>9||choose<1)
                        {
                            cout<<"\n PLEASE RE-ENTER A VALID PLACE:";
                            cin>>choose;
                            goto c2;
                        }
                    else
                        box[choose]='O';

                 }

                 //CHECKING STATUS OF GAME
                 gamestatus=win();
                 if(gamestatus==1)
                    {
                     layout();
                     system("color 0A");
                     cout<<"\n GAME OVER";
                     cout<<"\n PLAYER:"<<winner<<" WON";
                    }
                 else if(gamestatus==-1)
                     {
                        layout();
                        system("color 0C");
                        cout<<"\n GAME OVER:NO WINNER";
                     }
                }while(gamestatus==0);

            cout<<"\n\n WOULD YOU LIKE TO PLAY AGAIN:Y/N?:";
            for(i=0;;i++){
            if(i>0)
            cout<<"\n PLEASE ENTER Y/N:";
            cin.clear();
            cin>>rplay;
            cin.ignore(256,'\n');
            if(rplay=='y'||rplay=='Y')
                {
                    pler=player();
                    goto GAME;               //STARTING GAME ONCE MORE
                }
            else if(rplay=='n'||rplay=='N')
                return 0;                    //STOPPING PROGRAM
                         }



                   //COMPUTER VS PLAYER

        pvc:
            cout<<"\n PLEASE CHOOSE LEVEL \n 1.EASY \n 2.DIFFICULT \n ENTER:";
            for(int i=0;;i++){
                if(i>0)
                cout<<"\n PLEASE RE-ENTER:";
                cin.clear();                   //TO AVOID INFINITE LOOP
                cin>>level;
                cin.ignore(256,'\n');          //TO AVOID INFINITE LOOP
                if(level==1)
                 {
                    level=0;
                    break;
                 }
                else if (level==2)
                {
                    level=1;
                    break;
                 }
                            }

            cout<<"\n PLAYER 1:X \n COMPUTER:O";
            cout<<"\n PRESS ANY KEY TO CONTINUE";
            getch();


                   //GAME
            do{
                layout();
                cout<<"\n PLAYER CHOOSE:";
                cin>>ch;
                c3:
                if(box[ch]=='X'||box[ch]=='O'||ch>9||ch<1)
                {
                    cout<<"\n PLEASE RE-ENTER A VALID PLACE:";
                    cin>>ch;
                    goto c3;
                }
                else
                    box[ch]='X';

                    layout();
                //COMPUTER TURN DECIDING AI
                    AI();
                    layout();


                //CHECKING STATUS OF GAME
                 gamestatus=win();
                 if(gamestatus==1)
                    {
                     layout();
                     system("color 0A");
                     cout<<"\n GAME OVER";
                     if(winner==1)
                      cout<<"\n PLAYER:1"<<" WON";
                     else if(winner==2)
                       cout<<"\n COMPUTER WON";
                    }
                 else if(gamestatus==-1)
                     {
                        layout();
                        system("color 0C");
                        cout<<"\n GAME OVER:NO WINNER";
                     }
              }while(gamestatus==0);

        cout<<"\n\n WOULD YOU LIKE TO PLAY AGAIN:Y/N?:";
        for( i=0;;i++){
        if(i>0)
        cout<<"\n PLEASE ENTER Y/N:";
        cin.clear();
        cin>>rplay;
        cin.ignore(256,'\n');                //TO AVOID INFINITE LOOP
        if(rplay=='y'||rplay=='Y')
                {
                    pler=player();
                    goto GAME;               //STARTING GAME ONCE MORE
                }
        else if(rplay=='n'||rplay=='N')
                return 0;                   //STOPPING PROGRAM
                      }

    }


