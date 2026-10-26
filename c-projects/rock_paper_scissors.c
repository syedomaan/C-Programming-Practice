#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
    int n,a=0,m,r=0,t,i=0,w=0,l=0,d=0,z=0;
    srand(time(NULL));
    do
    {
        {
            printf("(Rock Papper Scissors)\n");
            printf("~start the game    1️⃣\n~View Instructions 2️⃣\n~exit              3️⃣\n~TOURNAMENT        4️⃣\n");
            printf("Enter your choice=\n");
            scanf("%d",&n);
            if(n==1 || n== 2 || n==3 || n==4 )
            {
                if(n==2)
                {
                    printf("(Instructions)\n HOW TO PLAY\n Rock🪨 beats Scissors✂️\n Scissors✂️ beats Paper📄\n Paper📄 beats Rock🪨\n If both choose the  same move, it's a draw🤝\n");
                    printf("start the game 1️⃣\n");
                    scanf("%d",&a);
                    if(a!=1)
                    {
                        printf("invalid choose❌\n");
                    }
                }
                if(n==1 || a==1)
                {
                    do
                    {
                        do
                        {
                            printf("~choose your move:\n •Rock🪨     1️⃣\n •Papper📄  2️⃣\n •Scissors✂️ 3️⃣\n");
                            scanf("%d",&m);
                            switch(m)
                            {
                            case(1):
                                printf("you choose : Rock🪨\n");
                                break;
                            case(2):
                                printf("you choose : papper📄\n");
                                break;
                            case(3):
                                printf("you choose : Scissors✂️\n");
                                break;
                            default:
                                printf("Invalid move\n");
                            }
                        }
                        while(m!=1 && m!=2 && m!=3);
                        int c=rand()%3+1;
                        if(m==1 || m==2 || m==3)
                        {
                            switch(c)
                            {
                            case(1):
                                printf("computer : Rock 🪨\n");
                                break;
                            case(2):
                                printf("computer : Papper📄\n");
                                break;
                            case(3):
                                printf("computer : Scissors✂️\n");
                                break;
                            }
                            if(m==1 && c==2)
                            {
                                printf("     computer won 🏆\n");
                                l++;
                            }
                            if(m==2 && c==1)
                            {
                                printf("     you win🏆\n");
                                w++;
                            }
                            if(m==2 && c==3)
                            {
                                printf("    computer win🏆\n");
                                l++;
                            }
                            if(m==3 && c==2)
                            {
                                printf("     you win🏆\n");
                                w++;
                            }
                            if(m==3 && c==1)
                            {
                                printf("    computer win🏆\n");
                                l++;
                            }
                            if(m==1 && c==3)
                            {
                                printf("     you win🏆\n");
                                w++;
                            }
                            if(m==1 && c==1)
                            {
                                printf("      Draw🤝\n");
                                d++;
                            }
                            if(m==2 && c==2)
                            {
                                printf("      Draw🤝\n");
                                d++;
                            }
                            if(m==3 && c==3)
                            {
                                printf("      Draw🤝\n");
                                d++;
                            }
                        }
                        if(m==1 || m==2 || m==3)
                        {
                            i++;
                            printf("wanna play another round:\n Yes 1️⃣\n No  2️⃣\n");
                            scanf("%d",&r);
                        }
                    }
                    while(r==1);
                    if(r==2)
                    {
                        printf("Number of rounds :%d\n Wins=%d\n lose=%d\n Draws=%d\n",i,w,l,d);
                    }
                }

                if(n==3 || r>1)
                {
                    printf("Good Bye🫡\n");
                    return 0;
                }
            }
            else
                printf("Invalid choose ❌\n");
            if(n==4)
            {
                printf("########🏆TOURNAMENT🏆########\n");
                printf("Instructions📜      1️⃣\n");
                printf("Start Tournament⚔️   2️⃣\n");
                printf("Back to main Menu↩️  3️⃣\n");
                printf("\n");
                scanf("%d",&t);
                if(t==1)
                {
                    printf("======= HOW TO PLAY =======\n");
                    printf("1. Defeat all 3 to become champion!\n 1)Rookie 3 times \n 2)Master 5 times\n 3)Champion 7 times\n");
                    printf("3. Win to advance to the next opponent.\n");
                    printf("4. If your rival reaches the target first,\n");
                    printf("   you lose the tournament.\n");
                    printf("5. Draws do not count as wins.\n");
                    printf("\n");
                    printf("       GOOD LUCK, PLAYER!\n");
                    printf("===========================\n");
                    printf("Start the tornament 2️⃣\n main menu 3️⃣\n");
                    scanf("%d",&t);
                }
                if(t==2)
                {
                    w=0;
                    l=0;
                    d=0;
                    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                    printf("Your fisrt opponent is Rookie\n");
                    do
                    {
                        do
                        {
                            printf("==========Round %d==========\n",++z);
                            printf("~choose your move:\n •Rock🪨 1️⃣\n •Papper📄 2️⃣\n •Scissors✂️ 3️⃣\n");
                            scanf("%d",&m);
                            switch(m)
                            {
                            case(1):
                                printf("you choose Rock🪨\n");
                                break;
                            case(2):
                                printf("you choose papper📄\n");
                                break;
                            case(3):
                                printf("you choose Scissors✂️\n");
                                break;
                            default:
                                printf("Invalid move ❌\n");
                            }
                        }
                        while(m!=1 && m!=2 && m!=3);
                        int c=rand()%3+1;
                        if(m==1 || m==2 || m==3)
                        {
                            switch(c)
                            {
                            case(1):
                                printf("Rookie : Rock 🪨\n");
                                break;
                            case(2):
                                printf("Rookie : Papper📄\n");
                                break;
                            case(3):
                                printf("Rookie : Scissors✂️\n");
                                break;
                            }
                            if(m==1 && c==2)
                            {
                                printf("Rookie won 🏆\n");
                                l++;
                            }
                            if(m==2 && c==1)
                            {
                                printf("you win🏆\n");
                                w++;
                            }
                            if(m==2 && c==3)
                            {
                                printf("Rookie win🏆\n");
                                l++;
                            }
                            if(m==3 && c==2)
                            {
                                printf("you win🏆\n");
                                w++;
                            }
                            if(m==3 && c==1)
                            {
                                printf("Rookie win🏆\n");
                                l++;
                            }
                            if(m==1 && c==3)
                            {
                                printf("you win🏆\n");
                                w++;
                            }
                            if(m==1 && c==1)
                            {
                                printf("Draw🤝\n");
                                d++;
                            }
                            if(m==2 && c==2)
                            {
                                printf("Draw🤝\n");
                                d++;
                            }
                            if(m==3 && c==3)
                            {
                                printf("Draw🤝\n");
                                d++;
                            }
                        }
                    }
                    while(w<3 && l<3);
                    if(w<l)
                    {
                        printf("\tRookie won😵\n Your out of Tornament🚪\n ");
                    }
                    if(w>l)
                    {
                        printf("~~~~~~You won~~~~~~‼️\n You Defeated Rookie👏🏻\n");
                        printf("The next opponent is Master\n");
                        z=0;
                        w=0;
                        d=0;
                        l=0;
                        do
                        {
                            do
                            {
                                printf("==========Round %d==========\n",++z);
                                printf("~choose your move:\n •Rock🪨 1️⃣\n •Papper📄 2️⃣\n •Scissors✂️ 3️⃣\n");
                                scanf("%d",&m);
                                switch(m)
                                {
                                case(1):
                                    printf("you choose Rock🪨\n");
                                    break;
                                case(2):
                                    printf("you choose papper📄\n");
                                    break;
                                case(3):
                                    printf("you choose Scissors✂️\n");
                                    break;
                                default:
                                    printf("Invalid move❌\n");
                                }
                            }
                            while(m!=1 && m!=2 && m!=3);
                            int c=rand()%3+1;
                            if(m==1 || m==2 || m==3)
                            {
                                switch(c)
                                {
                                case(1):
                                    printf("Master  : Rock 🪨\n");
                                    break;
                                case(2):
                                    printf("Master : Papper📄\n");
                                    break;
                                case(3):
                                    printf("Master : Scissors✂️\n");
                                    break;
                                }
                                if(m==1 && c==2)
                                {
                                    printf("Master won 🏆\n");
                                    l++;
                                }
                                if(m==2 && c==1)
                                {
                                    printf("you win🏆\n");
                                    w++;
                                }
                                if(m==2 && c==3)
                                {
                                    printf("Master win🏆\n");
                                    l++;
                                }
                                if(m==3 && c==2)
                                {
                                    printf("you win🏆\n");
                                    w++;
                                }
                                if(m==3 && c==1)
                                {
                                    printf("Master win🏆\n");
                                    l++;
                                }
                                if(m==1 && c==3)
                                {
                                    printf("you win🏆\n");
                                    w++;
                                }
                                if(m==1 && c==1)
                                {
                                    printf("Draw🤝\n");
                                    d++;
                                }
                                if(m==2 && c==2)
                                {
                                    printf("Draw🤝\n");
                                    d++;
                                }
                                if(m==3 && c==3)
                                {
                                    printf("Draw🤝\n");
                                    d++;
                                }
                            }
                        }
                        while(w<5 && l<5);
                        if(w<l)
                        {
                            printf("Master won😵\n Your out of Tornament 🚪\n");
                        }
                        if(w>l)
                        {
                                printf("You won‼️\n You have defeated The master 👏🏻\n");
                                printf("The next opponent is Champion\n");
                                z=0;
                                w=0;
                                d=0;
                                l=0;
                                do
                                {
                                    do
                                    {
                                        printf("==========Round %d==========\n",++z);
                                        printf("~choose your move:\n •Rock🪨 1️⃣\n •Papper📄 2️⃣\n •Scissors✂️ 3️⃣\n");
                                        scanf("%d",&m);
                                        switch(m)
                                        {
                                        case(1):
                                            printf("you choose Rock🪨\n");
                                            break;
                                        case(2):
                                            printf("you choose papper📄\n");
                                            break;
                                        case(3):
                                            printf("you choose Scissors✂️\n");
                                            break;
                                        default:
                                            printf("Invalid move ❌\n");
                                        }
                                    }
                                    while(m!=1 && m!=2 && m!=3);
                                    int c=rand()%3+1;
                                    if(m==1 || m==2 || m==3)
                                    {
                                        switch(c)
                                        {
                                        case(1):
                                            printf("Champion  : Rock 🪨\n");
                                            break;
                                        case(2):
                                            printf("Champion : Papper📄\n");
                                            break;
                                        case(3):
                                            printf("Champion : Scissors✂️\n");
                                            break;
                                        }
                                        if(m==1 && c==2)
                                        {
                                            printf("Champion win 🏆\n");
                                            l++;
                                        }
                                        if(m==2 && c==1)
                                        {
                                            printf("you win🏆\n");
                                            w++;
                                        }
                                        if(m==2 && c==3)
                                        {
                                            printf("Champion win🏆\n");
                                            l++;
                                        }
                                        if(m==3 && c==2)
                                        {
                                            printf("you win🏆\n");
                                            w++;
                                        }
                                        if(m==3 && c==1)
                                        {
                                            printf("Champion win🏆\n");
                                            l++;
                                        }
                                        if(m==1 && c==3)
                                        {
                                            printf("you win🏆\n");
                                            w++;
                                        }
                                        if(m==1 && c==1)
                                        {
                                            printf("Draw🤝\n");
                                            d++;
                                        }
                                        if(m==2 && c==2)
                                        {
                                            printf("Draw🤝\n");
                                            d++;
                                        }
                                        if(m==3 && c==3)
                                        {
                                            printf("Draw🤝\n");
                                            d++;
                                        }
                                    }
                                }
                                while(w<7 && l<7);
                                if(w<l)
                                {
                                    printf("Champion won😵\n Your out of Tornament 🚪");
                                }
                                if(w>l)
                                {
                                    printf("🏆 YOU WON THE TORNAMENT 🏆\n");
                                    printf("👑Now your the new champion🙌🏻\n");
                                }
                            }
                        }
                    }

                }
            }
        }
    while (n!=3);
    return 0;

}