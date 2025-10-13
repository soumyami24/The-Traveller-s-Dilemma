#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>

int ancient_egypt(int *l);
int vinking_age(int *l);
int vinking_age_T(int *l);
int samurai_e(int *l);
int samurai_e_T(int *l);
int AI_war(int *l);
int titanic_e(int *l);
int era();

void playsound()
{
PlaySound(TEXT("main.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
}

void playsound1() {
    PlaySound(TEXT("ancient.wav"), NULL, SND_FILENAME | SND_ASYNC| SND_LOOP);
}

void playsound2() {
    PlaySound(TEXT("vikingage.wav"), NULL, SND_FILENAME | SND_ASYNC| SND_LOOP);
}

void playsound3() {
PlaySound(TEXT("samurai.wav"), NULL, SND_FILENAME | SND_ASYNC| SND_LOOP);
}

void playsound4() {
    PlaySound(TEXT("AI.wav"), NULL, SND_FILENAME | SND_ASYNC| SND_LOOP);
}

void playsound5() {
    PlaySound(TEXT("titanic.wav"), NULL, SND_FILENAME | SND_ASYNC| SND_LOOP);
}

void playsound6() {
     PlaySound(TEXT("desc.wav"), NULL, SND_FILENAME | SND_ASYNC| SND_LOOP);
}
void wd()
{
PlaySound(TEXT("wrong.wav"), NULL, SND_FILENAME   | SND_ASYNC);
Sleep(3000); // Wait for the specified duration
    PlaySound(NULL, NULL, 0); 
}
void rd()
{
PlaySound(TEXT("right.wav"), NULL, SND_FILENAME | SND_ASYNC );
Sleep(3000); // Wait for the specified duration
    PlaySound(NULL, NULL, 0);
}
void era_s()
{
PlaySound(TEXT("change_era.wav"), NULL, SND_FILENAME | SND_ASYNC );
Sleep(3000); // Wait for the specified duration
    PlaySound(NULL, NULL, 0);
}
void lose()
{
PlaySound(TEXT("lose.wav"), NULL, SND_FILENAME  | SND_ASYNC );
Sleep(4000); // Wait for the specified duration
    PlaySound(NULL, NULL, 0);
}
void win()
{
PlaySound(TEXT("win.wav"), NULL, SND_FILENAME  | SND_ASYNC );
Sleep(9000); // Wait for the specified duration
    PlaySound(NULL, NULL, 0);
}





int main() {
    system("cls");
    printf("\033[33m\033[1m\033[5mWelcome to our game\033[0m\n\033[35m~*~*~*~*~THE TRAVELLER'S DILEMMA~*~*~*~*~\n\n\033[0m");
    printf("\033[30mRULES OF THE GAME:\n\033[0m");
    printf("\033[30mRule 1: If you choose an invalid choice, the era you are in will restart with the loss of one life.\033[0m\n");
    printf("\033[30mRule 2: If you disturb the future by making wrong choices or get killed in an era, one life will be lost and the era will restart.\n"
    "Rule 3: The choices you made won't be changed ever again.\n"
    "Rule 4: Ciphers are riddles which you need to solve for completing the mission and surviving that era. A wrong answer will cost you 1 life.\n"
    "All answers to ciphers must be in capital letters only with no spaces; otherwise, they will be considered wrong.\n"
    "[word limit of 50]\n\n"
    "You will come across AI Ciphers in the game where you have to write the code to complete the mission\n"
    "Any mistake in following the procedure for solving AI Ciphers will lead to losing the game directly so BE CAREFUL\n"

    "\n\nSome steps you need to do before you start to play the game\n"
    "Make a .exe files with name player1.exe and player2.exe\n"
    "Make a .txt files with name output1.txt and output2.txt\n"
    "If you have done this task enter 1 and if don't want to do then leave by entering 2.\n\n\033[0m");
    printf("\033[36mEnter your choice:\n\n\033[0m");
    int gc;
    scanf("%d", &gc);
    if (gc == 1) {
        printf("\033[32m Great!!! Let's Start\033[0m\n\n");


    } else {
        printf("\033[31mYou decide to discontinue the game!!!!\nLEAVING...\033[0m\n");

        return 0;
    }

    printf("\033[30mEnter your name you want to have in the game:\033[0m\n\n");
    char name[100];
    scanf("%s", name);
    while (getchar() != '\n');

    char sex;
    int L = 3;

    printf("\033[30mEnter M for male and F for female:\n\033[0m");
    scanf(" %c", &sex);
    while (getchar() != '\n');
    playsound();        
    printf("\033[30mIf you want to know about all the eras you will be travelling before hand then solve this ENIGMA \033[0m\n");
        printf("\033[36mIf you win than you will get access to read but if you lose than you will loose 1 life\033[0m\n");
        printf("\033[36mEnter 1 if you want to take risk and 2 if  want to continue your journey\033[0m\n");
        int ri;
        printf("\033[36mEnter your choice:\033[0m\n");
        scanf("%d",&ri);
        if(ri==1)
        {
            printf("\033[30mYou chose to take the risk\n\n\n\033[0m");
            printf("\t\t\t\t\t\t\t\t\033[33m\033[1m~~~~ENIGMA I~~~~\033[0m\n"); 
 

            printf("\033[33m\"I begin where words take shape, yet I am often unseen.\n"
                   "I am found within questions, though I am never asked.\n"
                   "Some may search for me, yet I was always here.\n"
                   "If you read between the lines, you will find me.\n"
                   "What am I?\"\033[0m\n");
            char e1[50];
            printf("\033[36mEnter answer:\033[0m");
            scanf("%s",e1);
            if(strcmp(e1,"I")==0)
            {
                rd();
                printf("\033[32mYour answer is correct!!!\nRead about eras and make your journey easier\n\033[0m");
                era();
                playsound6();
            }
            else
            {
                wd();
                L--;
                printf("\033[31mYour answer is incorrect\nYou lost one life!!\033[0m\n");
               playsound();

            }

        }
        system("cls");
    printf("\033[32m~~~~GAME STARTS~~~~\033[0m\n");
   printf("\033[30mYou're a physicist researching time through Einstein's Theory of Relativity.\n"
    "Your experiment tests the limits of reality. As energy surges, everything shifts.\n"
    "The lab is gone. You are moving at unimaginable speed through a tunnel,\n"
    "its walls flickering with glimpses of different eras and distant places.\n\n"
    "A blinding red light surges toward you-unstoppable.\n"
    "It slams into you.\n"
    "The impact overwhelming. Everything goes black. Silent...\n"
    ".........\n\033[0m");
    printf("\033[33m \033[5mYou enter the Ancient Egypt Era (1300 BCE)\n\033[0m");
    era_s();
    int rancient_egypt = ancient_egypt(&L);
    playsound1();
    if (rancient_egypt == 1) {
        era_s();
        printf("\033[33mYou enter the new era\n\033[0m");
        printf("\033[33m\033[5mNew era is Viking Age (900 CE)\033[0m\n");
        printf("\033[30mFor surviving the earlier era you get\n\n~~ Truth Seer~~\nAn oracle, or scryer-someone who could interpret divine will and reveal hidden truths.\033[0m\n\n");
        playsound2();
        int rviking_age = vinking_age(&L);
        if (rviking_age == 1) {
            era_s();
            printf("\033[33mYou are entering the new era\033[0m\n");
            printf("\033[33m\033[5mNew era is Samurai Eclipse (1582 CE)\033[0m\n");
            playsound3();
            int rsamurai_e = samurai_e(&L);
            if (rsamurai_e == 1) {
                era_s();
                printf("\033[33mYou are entering the new era\033[0m\n");
                printf("\033[33m033[5mNew era is AI Wars (2099 CE)\033[0m\n");
                playsound4();
                int rAI_war = AI_war(&L);
                if (rAI_war == 1) {
                    era_s();
                    printf("\033[33mYou are entering the new era\033[0m\n");
                    printf("\033[33m033[5mNew era is The Titanic Echo (1912 CE)\033[0m\n");
                    playsound5();
                    int rtitanic_e = titanic_e(&L);
                    if (rtitanic_e == 1) {
                        win();
                        printf("\033[33mYou won the game! Congratulations!\033[0m\n");
                    }
                }
            }
        }
    } else if (rancient_egypt == 2) {
        era_s();
        printf("\033[33mYou are entering the new era with Tariq\033[0m\n");
        printf("\033[33m\033[5mNew era is Viking Age (900 CE)\033[0m\n");
        printf("\033[30mFor surviving th033[33me earlier era you get\n\n~~ Truth Seer~~\nAn oracle, or scryer—someone who could interpret divine will and reveal hidden truths.\033[0m\n");
        playsound2();
        int rviking_age_T = vinking_age_T(&L);
        if (rviking_age_T == 1) {
            era_s();
            printf("\033[33mYou are entering the new era alone\033[0m\n");
            printf("\033[33m\033[5mNew era is Samurai Eclipse (1582 CE)\033[0m\n");
            playsound3();
            int rsamurai_e2 = samurai_e(&L);
            if (rsamurai_e2 == 1) {
                era_s();
                printf("\033[33mYou are entering the new era\033[0m\n");
                printf("\033[33m\033[5mNew era is AI Wars (2099 CE)\033[0m\n");
                playsound4();
                int rAI_war2 = AI_war(&L);
                if (rAI_war2 == 1) {
                    era_s();
                    printf("\033[33mYou are entering the new era\033[0m\n");
                    printf("\033[33m\033[5mNew era is The Titanic Echo (1912 CE)\033[0m\n");
                    playsound5();
                    int rtitanic_e2 = titanic_e(&L);
                    if (rtitanic_e2 == 1) {
                        win();
                        printf("\033[33mYou won the game! Congratulations!\033[0m\n");
                    }
                }
            }
        } else if (rviking_age_T == 2) {
            era_s();
            printf("\033[33mYou are now entering the new era with Tariq\033[0m\n");
            printf("\033[33m\033[5mNew era is Samurai Eclipse (1582 CE)\033[0m\n");
            playsound3();
            int rsamurai_e_T = samurai_e_T(&L);
            if (rsamurai_e_T == 1) {
                era_s();
                printf("\033[33mYou are entering the new era\033[0m\n");
                printf("\033[33m\033[5mNew era is AI Wars (2099 CE)\033[0m\n");
                playsound4();
                int rAI_war3 = AI_war(&L);
                if (rAI_war3 == 1) {
                    era_s();
                    printf("\033[33mYou are entering the new era\033[0m\n");
                    printf("\033[33m\033[5mNew era is The Titanic Echo (1912 CE)\033[0m\n");
                    playsound5();
                    int rtitanic_e3 = titanic_e(&L);
                    if (rtitanic_e3 == 1) {
                        win();
                        printf("\033[33mYou won the game! Congratulations!\033[0m\n");
                    }
                }
            }
        } else {
            return 0;
        }
    } else {
        return 0;
    }

    return 0;
}

int ancient_egypt(int *l)//This function Contains journey of player in ancient egypt
{ 
    playsound1();
   while(*l>0)
    {
        printf("\033[30mYou awaken near the shimmering Nile, its waters reflecting the golden light of dawn.\033[0m\n");
        printf("\033[30mTowering pyramids stand in the distance, whispering secrets of lost civilizations.\033[0m\n");
        printf("\033[30mThe wind carries echoes of ancient chants, sending a chill down your spine.\033[0m\n");
        printf("\033[30mAs night falls, flickering torches reveal hidden paths.\033[0m\n");
        printf("\033[30mWill you uncover forgotten treasures or awaken something best left undisturbed?\033[0m\n\n");

        printf("\033[30mONLY CLUE YOU HAVE OF WHAT IS HAPPENING IS A NOTE IN YOUR HAND\033[0m\n\n");


printf("\t\t\t\t\t\t\t\033[37mFrom God Of Universe\033[0m\n");
printf("\t\t\t\t\033[37m~~~~Disobey nature's law, and thou art cursed~~~\033[0m\n");
printf("\t\t\t\033[37mDisturb the universe, and thy debt must be repaid.\033[0m\n");
printf("\t\t\033[37mThou art doomed to be bound in time unless thou endurest five epochs.\033[0m\n");
printf("\t\t\033[37mFail thrice by death or the twisting of fate and thou shalt fade into oblivion.\033[0m\n");
printf("\t\t\t\t\t\t\t\033[37mEither embrace thy destiny or perish...\033[0m\n");

printf("\033[30mBelow this - riddle is inscribed:\033[0m\n");
printf("\033[37mIn the river where secrets lie, a relic slumbers amid ancient memories.\033[0m\n");
printf("\033[37mIt halts time, binding moments in its silent sway.\033[0m\n");
printf("\033[37mShatter the chains of time-uncover the lost key.\n\n\033[0m");

printf("\033[37mWho shalt break the seal and claim their fate?\033[0m\n\n");

printf("\033[30mSimple meaning:\033[0m\n");
printf("\033[30mFrom God of the Universe:\033[0m\n");
printf("\033[30mDisobeying nature's law is a sin.\033[0m\n");
printf("\033[30mDisturb the universe, and you must pay.\033[0m\n");
printf("\033[30mYou are doomed to be trapped in time unless you pass through 5 eras.\033[0m\n");
printf("\033[30mFail thrice by dying or changing a paradox, and you will cease to exist.\033[0m\n");
printf("\033[30mEither try...or die.\033[0m\n\n");
printf("\033[30mBelow this - riddle is inscribed:\033[0m\n");
printf("\033[30mIn the river where secrets rest, a relic slumbers amid ancient memories.\033[0m\n");
printf("\033[30mIt halts time, binding moments in its silent sway. Shatter the chains of time-uncover the lost key.\033[0m\n\n");

        printf("\033[30mYour adventure begins. Step forward-if you dare.\033[0m\n\n");
        printf("\n");
        printf("\033[36mYour Choice: You stand at a crossroads. Do you:\033[0m\n");
        printf("\033[36m1. Jump into the River - Believing the water might be a portal to the artifact, you dive in.\033[0m\n");
        printf("\033[36m2. Walk Past the Pyramids - Trusting your instincts, you bypass the river and search for another path home.\033[0m\n");
        printf("\033[36mEnter your choice:\033[0m\n");
        int c1;
        scanf("%d", &c1);

        if (c1 == 1) 
        {
            printf("\033[30mYou jump into the river and realize it's not a portal to present.\033[0m\n");
            printf("\033[30mAt that moment, Tariq appeared-a handsome young man with dark skin\033[0m\n");
            printf("\033[30mand fiery eyes. A guardian of the river and a rebel fighting for justice,\033[0m\n");
            printf("\033[30mhe jumped into the strong current and saved you.\033[0m\n");
            printf("\033[30mOnce he pulled you from the current, he guided you through the river bank.\033[0m\n");
            printf("\033[30mHe softly inquires in the local tongue \033[0m\n");
            printf("\n");
            printf("\033[34mTariq: \"ʿnḫ wḏꜣ snb?\" (\"Are you alright?\")\033[30m\n");
            printf("\033[34mYou: \"Sneb\" (\"Fine\")\033[30m\n\n\n");
            printf("\033[30mA spark of passion and curiosity flares between you. In that moment, you wonder how you \033[0m\n"); 
            printf("\033[30munderstand these words-as if the food and drink of this era awaken hidden knowledge within you.\033[0m\n");
            printf("\033[36mYour Choice: You are confused whether:\033[0\n");
            printf("\033[36m1. Leave him-You should avoid wasting time talking to a stranger\033[0m \n");
            printf("\033[36m2. Talk to him more-exploring about the place.\033[0m\n");
            printf("\033[36mEnter your choice:\033[0m\n");

            int c2;
            scanf("%d", &c2);
            if(c2==1) 
            {
                wd();
                playsound1();
                printf("\033[30mAs soon as you leave You are attacked by a serpopard\033[0m\n");
                printf("\033[30mYou lost one life!!\033[0m\n");
                
                printf("\033[30mStart this era again\033[0m\n");
                printf("\033[36mWant to know about serpopards enter 1 if not then 2\033[0m\n");
                printf("\033[36mEnter your choice:\033[0m\n");
                int c3;
                scanf("%d",&c3);
                if(c3==1)
                 {
                    printf("\033[30mSerpopards are mythical creatures depicted in ancient Egyptian and \033[0m\n");
                    printf("\033[30mMesopotamian art. They are characterized by having the body of a leopard \033[0m\n");
                    printf("\033[30mand the long, serpentine neck of a snake.\033[0m\n");
                } else if(c3==2) 
                {
                    printf("\033[30mYou chose not to explore sadly !!\033[0m\n");
                    printf("\033[30mYou will regret it later\033[0m\n ");
                } else 
                {wd();
                    playsound1();
                    printf("\033[31mInvalid Choice\033[0m\n");
                    printf("\033[31mYou lost one life!!\033[0m\n");
                    (*l)--;
                if (*l <= 0) {
                    lose();
                    printf("\033[31mGame over!\033[0m\n");
                    return 0;
                }
                printf("\033[31mRestarting era...\033[0m\n");
                continue;
                }
                (*l)--;
                if (*l <= 0) 
                {lose();
                    printf("\033[31mYou don't have sufficient lives left, so you can't enter this era anymore, and your existence is no more.\033[0m\n");
                    printf("\t\t\t\t\t\t\t\t\t\t\t\t\033[31m******YOUR MISTAKE IS UNFORGIVABLE******\033[0m\n");
                    return 0;
                }
                 printf("\033[31mRestarting era...\033[0m\n");
                continue;
            } 
            else if(c2==2) 
            {
                printf("\033[30mYou decided to stay with Tariq\n");
                printf("\033[30mAs you both settle under the shade of a date palm, Tariq's concern sharpens\n"); 
                printf("\033[30minto curiosity \n");
                printf("\033[34mTariq: \"You're not from around here, are you? This land speaks a language\n ");
                printf("\033[34monly locals know, yet something in you understands it.\"\n");
                printf("\033[34mYou:(Choose your response)\n");
                printf("\033[36m1.\"I woke up in this strange era with nothing but a note in my hand—a message\n");
                printf("\033[36mwarning that disobeying nature's law comes at a price.\"\n");
                printf("\033[36m2.\"I feel as if every sip of water and every taste of the ancient food fills my\n");
                printf("\033[36m mind with hidden knowledge.\"\n");
                printf("\033[36mEnter your choice:\n");
                int c4;
                scanf("%d",&c4);
                if(c4!=1 && c4!=2) 
                { wd();
                    playsound1();// Corrected the condition
                   printf("\033[31mInvalid Choice\033[0m\n");
                   printf("\033[31mYou lost one life!!\033[0m\n");
                   (*l)--;
                   if (*l <= 0) 
                   {lose();
                        printf("\033[31mYou don't have sufficient lives left, so you can't enter this era anymore, and your existence is no more.\033[0m\n");
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\033[31m******YOUR MISTAKE IS UNFORGIVABLE******\033[0m\n");
                        return 0;
                    }
                   printf("\033[31mRestarting era...\033[0m\n");
                continue; 
                }
                printf("\033[30mRegardless of your answer, Tariq reveals that his rebel heart is dedicated to\033[0m\n");
                printf(" \033[30mguarding the universe's secrets. He also tells you of the chrono ankh\033[0m\n\n ");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\033[30m```````CHRONO ANKH```````\033[0m\n");
                printf("\033[30mA lost relic capable of halting time itself, and the key to unlocking your path back home.\033[0m\n");
                printf("\033[30mBefore you stands an ancient stone tablet inscribed with a riddle which you have read in the note\033[0m\n");
                printf("\033[30mTariq's eyes glimmer with both determination and hope as he proposes: \033[0m\n\n");
                printf("\033[34mTariq: \"We should follow these clues together. With our strengths combined, we'll solve\033[0m\n");
                printf(" \033[34m\033[36mChoose between:\033[0m\n");
                printf("\033[36m1.Agree to Join Forces: Embrace the budding alliance-and romance-that promises to guide\033[0m \n");
                printf("\033[36myou through each peril.\033[0m\n");
                printf("\033[36m2.Hesitate: Consider the risks of trust and independence, though a part of you feels\033[0m \n");
                printf("\033[36mdrawn to his unwavering support.\033[0m\n");
                printf("\033[36mEnter your choice:\033[0m\n");
                int c5;
                scanf("%d",&c5);
                if(c5==1) 
                {
                   printf("\033[30mYou Choose to Join Forces with Tariq:\033[0m\n");
                    printf("\033[30mTogether, you step into a labyrinth of tombs and temple ruins. During your journey,\033[0m \n");
                    printf("\033[30myou arrive at an imposing\033[0m\n");
                    printf("\033[30mgranite door adorned with faded hieroglyphs\033[0m\n");
                    printf("\033[30mAn inscription presents the\033[0m  \n\033[33m\033[1m~~I CIPHER:~~\033[0m\n");
                    printf("\033[33mI flow like water yet never weep,  I hold the past in memories deep. \033[0m\n");
                    printf("\033[33mWhat am I?\033[0m\n");
                    printf("\033[36mYour options:\033[36m\n");
                    printf("\033[36m1.Solve the I.Cipher on Your Own: Ponder deeply and type your answer. \033[36m\n");
                    printf("\033[36m(Hint: Think abstract-when gone it never comes\033[36m\n");
                    printf("\033[36mback, holds your present past and future)\033[36m\n");
                    printf("\033[36m[If your answer is incorrect you loose 1 life and era restarts if correct then\033[36m \n");
                    printf("\033[36mnext step,\033[36m\n");
                    printf("\033[36m2.Discuss with Tariq:\033[36m\n");
                    int c6;
                    printf("\033[36mEnter your choice:\033[36m\n");
                    scanf("%d",&c6);
                    if(c6==1) {
                        char ci1[50];
                        printf("\033[36mEnter answer:");
                        scanf("%s",ci1);
                        if(strcmp(ci1, "TIME") == 0) 
                        {
                            printf("\033[32m\033[32mYour answer is CORRECT!!!\033[0m\n");
                            printf("\033[30ma rumble resounds, and the granite door slowly opens,\033[0m \n"
                                "\033[30munveiling a hidden chamber lit by flickering torches.\033[0m");
                            printf("\033[30mA rumble resounds,\033[0m\n");
                            printf("\033[30mand the granite door slowly opens, unveiling a hidden chamber\033[0m\n");
                            printf("\033[30mlit by flickering torches\033[0m\n");
                        } else 
                        {wd();
                            playsound1();
                            printf("\033[31mYour answer is INCORRECT restart the journey\033[0m\n");
                            (*l)--;
                            if (*l <= 0) {lose();
                                printf("\033[31mYou don't have sufficient lives left, so you can't enter this era anymore, and your existence is no more.\033[0m\n");
                                printf("\t\t\t\t\t\t\t\t\t\t\t\t\033[31m******YOUR MISTAKE IS UNFORGIVABLE******\033[0m\n");
                                return 0;
                            }
                           printf("\033[31mRestarting era...\033[0m\n");
                continue; 
                        }
                    } 
                    else if(c6==2) 
                    {
                        printf("\033[34mYou:\"Tariq, what do you think this means?\033[0m\"\n");
                        printf("\033[34mHe smiles and replied\033[0m\n");
                        printf("\033[34mTariq\"I believe it's about the steady march of time itself.\033[0m\"\n");
                        printf("\033[30mWhen you both agree on the answer (\"Time\"), a rumble resounds,\033[0m\n");
                        printf("\033[30mand the granite door slowly opens, unveiling a hidden chamber\033[0m\n");
                        printf("\033[30mlit by flickering torches\033[0m\n");
                    } 
                    else
                     {wd();
                        playsound1();
                        printf("\033[31mYou choose an invalid choice\033[0m\n");
                        printf("\033[31mYou lost one life!!\033[0m\n");
                        (*l)--;
                        if (*l <= 0) {lose();
                            printf("\033[31mYou don't have sufficient lives left, so you can't enter this era anymore, and your existence is no more.\033[0m\n");
                            printf("\t\t\t\t\t\t\t\t\t\t\t\t\033[31m******YOUR MISTAKE IS UNFORGIVABLE******\033[0m\n");
                            return 0;
                        }
                        printf("\033[31mRestarting era...\033[0m\n");
                continue; 
                    }
                    printf("\033[30mWithin the chamber, the walls are alive with secrets.\033[0m\n");
                    printf("\033[30m A second inscription challenges you:\033[0m  \n\033[33m\033[1m~~II CIPHER:~~\033[0m\n");
                    printf("\033[33m(The Chamber's Enigma)\"In silent depths where water meets sky,\033[0m\n");
                    printf("\033[33mSeek the key that time can't deny. What do you seek?\" \033[0m\n");
                    printf("\033[30mThis time Tariq don't know the answer and you have to guess\033[0m\n");
                    printf("\033[30mHint:All that Tariq tell you about\033[0m\n");
                    char ci2[50];
                    printf("\033[36mEnter answer:\033[0m");
                    scanf("%s",ci2);
                    if(strcmp(ci2, "CHRONOANKH") == 0) {
                        printf("\033[32mYour answer is CORRECT!!\033[0m\n");
                        printf("\033[30mAs you said the answer the chamber trembles with eerie energy. \033[0m\n");
                        printf("\033[30ma bright light appears from a hidden corner.\033[0m\n");
                        printf("\033[30mThere, resting on a stone plinth, is the Chrono-Ankh-an artifact pulsing\033[0m\n");
                        printf(" \033[30mwith the power to still time. As you approach,\033[0m \n");
                        printf("\033[30mTariq's eyes reflect both triumph and a subtle tenderness. The relic seems to hum in rhythm with your entwined destinies.\033[0m\n");
                        printf("\033[34mTariq whispers: \"This key not only governs time-it binds our fates together.\"\033[0m\n");
                        printf("\033[30mIn that moment, your adventure transforms from a mere quest into a journey of passion \033[0m\n");
                        printf("\033[30mand purposewhere every puzzle solved and every challenge overcome strengthens the bond between you.\033[0m\n");
                        printf("\033[30mThen you pick the chron ankh which leads to opening of the same tunnel from where you came\033[0m\n");
                        printf("\033[30mThen you saw Tariq who was beside you feeling pain of not seeing him again engulfs you\033[0m\n");
                        printf("\n\n");
                        printf("\033[36mChoice 1:leave tariq behind enter another era\033[0m\n");
                        printf("\033[36mChoice 2:Lose 1 life but able to have tariq with you for following eras but as a mortal\033[0m\n");
                        printf("\033[36mEnter your choice:\033[0m\n");
                        int c7;
                        scanf("%d",&c7);
                        if(c7==1) 
                        {

                            printf("\033[30mYou act hesitant and leave him\033[0m\n");
                            printf("\033[30mThe world collapses around you, shadows consuming you...\033[0m\n");
                            system("cls");
                            return 1;
                            
                        } else if(c7==2) 
                        {
                            printf("\033[30mYou decided to travel with Tariq in further eras\n\033[0m");
                            printf("\033[30mYou take grip on his hand tightly\033[0m\n");
                            printf("\033[30mThen the world starts to collapse around you, shadows consuming you and tariq...\033[0m\n");
                            (*l)--;
                            if(*l<=0) {
                               
                                printf("\033[31mYou don't have sufficient lives left, so you can't enter this era anymore, and your existence is no more.\033[0m\n");
                                printf("\t\t\t\t\t\t\t\t\t\t\t\t\033[31m******YOUR MISTAKE IS UNFORGIVABLE******\033[0m\n");
                                return 0;
                            }
                           return 2;

                        } 
                        else 
                        {wd();
                            playsound1();
                            printf("\033[31mYou choose an invalid choice\033[0m\n");
                            printf("\033[31mYou lost one life!!\033[0m\n");
                            (*l)--;
                            if (*l <= 0) {lose();
                                printf("\033[31mYou don't have sufficient lives left, so you can't enter this era anymore, and your existence is no more.\033[0m\n");
                                printf("\t\t\t\t\t\t\t\t\t\t\t\t\033[31m******YOUR MISTAKE IS UNFORGIVABLE******\033[0m\n");
                                return 0;
                            }
                            printf("\033[31mRestarting era...\033[0m\n");
                continue; 
                        }
                    } 
                    else
                     {wd();
                        playsound1();
                        printf("\033[31mYour answer is INCORRECT restart the journey\033[0m\n");
                        (*l)--;
                        if (*l <= 0) 
                        {lose();
                            printf("\033[31mYou don't have sufficient lives left, so you can't enter this era anymore, and your existence is no more.\033[0m\n");
                            printf("\t\t\t\t\t\t\t\t\t\t\t\t\033[31m******YOUR MISTAKE IS UNFORGIVABLE******\033[0m\n");
                            return 0;
                        }
                        printf("\033[31mRestarting era...\033[0m\n");
                        continue; 
                    }
                } 
                else if(c5==2) 
                {
                    wd();
                    playsound1();
                    printf("\033[31mYou got stuck in the era\033[0m\n");
                    if(*l>0) {
                        
                    printf("\033[31mYou don't have sufficient lives left, so you can't enter this era anymore, and your existence is no more.\033[0m\n");
                                printf("\t\t\t\t\t\t\t\t\t\t\t\t\033[31m******YOUR MISTAKE IS UNFORGIVABLE******\033[0m\n");
                                return 0;
                            }
                            printf("\033[31mRestarting era...\033[0m\n");
                continue; 
                            
                         } 
                         else 
                {wd();
                    playsound1();
                    printf("\033[31mYou choose an invalid choice\033[0m\n");
                    printf("\033[31mYou lost one life!!\033[0m\n");
                    (*l)--;
                    if (*l <= 0) 
                    {lose();
                        printf("\033[31mYou don't have sufficient lives left, so you can't enter this era anymore, and your existence is no more.\033[0m\n");
                        printf("\t\t\t\t\t\t\t\t\t\t\t\\033[31mt******YOUR MISTAKE IS UNFORGIVABLE******\033[0m\n");
                        return 0;
                    }
                    printf("\033[31mRestarting era...\033[0m\n");
                continue; 
                }
            }
             else
             {wd();
                playsound1();
                printf("\033[31mYou choose an invalid choice\033[0m\n");
                printf("\033[31mYou lost one life!!\033[0m\n");
                (*l)--;
                if (*l <= 0) {lose();
                    printf("\033[31mYou don't have sufficient lives left, so you can't enter this era anymore, and your existence is no more.\033[0m\n");
                    printf("\t\t\t\t\t\t\t\t\t\t\t\t\033[31m******YOUR MISTAKE IS UNFORGIVABLE******\033[0m\n");
                    return 0;
                }
                printf("\033[31mRestarting era...\033[0m\n");
                continue; 
            }
        } 
        else if(c1==2) 
        {wd();
            playsound1();
            printf("\033[30mRoaming around you dont't found any clue and get killed\033[0m\n");
            printf("\033[31mYou lose 1 life restart the era\033[0m\n");
            (*l)--;
                            if (*l <= 0) {lose();
                                printf("\033[31mYou don't have sufficient lives left, so you can't enter this era anymore, and your existence is no more.\033[0m\n");
                                printf("\t\t\t\t\t\t\t\t\t\t\t\t\033[31m******YOUR MISTAKE IS UNFORGIVABLE******\033[0m\n");
                                return 0;
                            }
                            printf("\033[31mRestarting era...\033[0m\n");
                continue; 
        } else
         {wd();
            playsound1();
            printf("\033[31mYou choose an invalid choice\033[0m\n");
            printf("\033[31mYou lost one life!!\033[0m\n");
            (*l)--;
            if (*l <= 0)
             {lose();
                printf("\033[31mYou don't have sufficient lives left, so you can't enter this era anymore, and your existence is no more.\033[0m\n");
                printf("\033[31m\t\t\t\t\t\t\t\t\t\t\t\t******YOUR MISTAKE IS UNFORGIVABLE******\033[0m\n");
                return 0;
            }
           printf("\033[31mRestarting era...\033[0m\n");
                continue; 
        }
    } 

    }

 
int vinking_age(int *l)//This function Conatins journey of player in viking age without Tariq
 {  
    playsound2();
    while(*l>0)
    {
        int b=0;
    printf("\033[30mWithout Tariq, the Vikings are even more wary. You must gain their trust alone, \n"
           "making the trials more difficult.\033[0m\n");
    printf("\n\n\n\033[33m\033[1m~~Truth Seer~~\033[0m\n\033[33mThe Time Rune, your key to moving forward, is hidden within the fortress of Jarl Astrid. "
         "To retrieve it, you must earn the Viking's trust-or take it by force.\033[0m\n");
    printf("\033[34m\"You come alone. If you wish to survive, prove you are worthy.\033[0m\"\n");
    printf("\033[36mYou have to survive,what will you do\033[0m\n"
         "\033[36m1. Sneak Into the Fortress - Avoid detection.\n"
         "\033[36m2 Persuade Jarl Astrid - Convince her you are important.\033[0m\n");
        printf("\033[30mIf you decide to sneak than at end of sneeking successfully you get an extra life\033[0m\n");
        printf("\033[30mIf you try to persuade her then you will be successful no doubt but won't get any extra life\033[0m\n");
        printf("\033[30mEnter your choice:\033[0m\n");
         int c1;
        scanf("%d",&c1);
        if(c1==1)
        {
            printf("\033[30mYou runaway from them\033[0m\n");
            printf("\033[30mand decided to sneak into the fortress but if caught, Vikings will attack you\033[0m\n");
            printf("\033[30mSo to be successful in sneeking you need to drink invisible potion\033[0m\n");
            printf("\033[30mWhich is own by Gullveig( witch-like being associated with magic and transformation.\033[0m) \n");
            printf("\033[30mShe decides to help you in return if you help her in solving a cipher which bounds her in an enchanted castle\n\033[0m");
            printf("\033[30mYou accept her offer\033[0m\n");
            printf("\033[33m\033[1mCIPHER IV\033[0m\n \033[33m\"I whisper in shadows, yet shine in the light,\n"
                   "I grant wishes, though not by sight.\n"
                   "Some fear me, some seek me, some hold me tight,\n"
                   "I live in tales, old and bright.\n"
                   "What am I?\"\033[0m\n");
                   char ci4[50];
                    printf("\033[36mEnter answer:\033[0m");
                    scanf("%s",ci4);
                    if(strcmp(ci4, "SPELL") == 0) 
                    {
                        printf("\033[32mYour answer is CORRECT!!!\033[0m\n");
                        printf("\033[30mGullveig gives you the potion which makes you invisible\033[0m\n");
                        printf("\033[30mAnd you were able to sneek\033[0m\n\n");
                        printf("\033[32m+1 LIFE\033[0m\n\n");
                        printf("\033[31m\033[1mYou help Gullveig escape which is a try to attempt a change in future \nIf any other decision also catalyses this change then you have to restart this era and loose one life\033[0m\n\n");
                        b++;
                        (*l)++;
                    }
                    else{wd();
            playsound2();
                    printf("\033[31mYour answer is INCORRECT restart the journey\033[0m\n");
                    printf("\033[30mYou were not able to help Gullveig due to which you were captured, and killed\033[0m\n");
                    (*l)--;
                    if (*l <= 0)
                     {lose();
                     printf("\033[31mYou don't have sufficient lives left, so you can't enter this era anymore, and your existence is no more.\033[0m\n");
                     printf("\t\t\t\t\t\t\t\t\t\t\t\t\033[31m******YOUR MISTAKE IS UNFORGIVABLE******\033[0m\n");
                     return 0;
                      }
                     printf("\033[31mRestarting era...\033[0m\n");
                continue; 
                    }
                }
                else if(c1==2)
                {
                printf("\033[30mYou were able to persuade Jarl Astrid that you are important\\033[0mn ");
                printf("\033[30mYou gain passage but must promise loyalty, requiring you to \naid Vikings in a future battle.\033[0m\n");
                }
                else
                {wd();
            playsound2();
                    printf("\033[31mYou choose an invalid choice\n\033[0m");
                    printf("\033[31mYou lost one life!!\n\033[0m");
                    (*l)--;
                     if (*l <= 0) {lose();
                     printf("\033[31mYou don't have sufficient lives left, so you can't enter this era anymore, and your existence is no more.\033[0m\n");
                     printf("\t\t\t\t\t\t\t\t\t\t\t\t\033[31m******YOUR MISTAKE IS UNFORGIVABLE******\033[0m\n");
                      return 0;
                       }
                     printf("\033[31mRestarting era...\033[0m\n");
                continue; 
                }
                printf("\033[30mOnce inside the Time Rune chamber, Skuld appears again.\033[0m\n");
                printf("\033[30mShe warns:\n"
                       "\033[34mYou travel alone, but history still bends around you. What will you do?\033[0m\n");
                printf("\033[30mThe Rune is locked behind another puzzle.\033[0m\n");
                printf("\033[33m\033[1mCIPHER V\033[0m \n\033[33m\"I have hands but do not clap,\n"
                       "I move forward, never back.\n"
                       "You can chase me, but I won't wait,\n"
                       "For all must follow at my rate.\n"
                       "What am I?\"\033[1m\n");
                printf("\033[36mEnter answer:\033[0m");
                char ci5[50];
                scanf("%s",ci5);
                if(strcmp(ci5, "TIME") == 0) 
                    {
                        printf("\033[32mYour answer is CORRECT!!!\033[0m\n");
                        printf("\033[30mThe chamber opens with a loud noise\nYou see The Time Rune in centre from which blue light was radiating\033[0m\n");
                        printf("\033[30mAs you step inside\033[0m\n");
                        printf("\033[30mBefore you take the Rune, Skuld appears in front of you and  offers one last warning\033[0m\n");
                        printf("\033[34mSkuld:\"You stand alone. What you do next will change everything.\"\033[0m\n");
                        printf("\033[36mLast choice in this era:\n1.Take the Rune and Escape - Preserve the timeline.\033[0m\n"
                               "\033[36m2. Alter Viking History - Leave behind knowledge that will change their future.\033[0m\n"
                               "\033[36m3. Refuse to Leave - Stay, becoming part of Viking legend.\033[0m\n");
                        printf("\033[36mEnter your choice:\033[0m\n");
                         int c2;
                         scanf("%d",&c2);
                         if(c2==1)
                         {
                          printf("\033[30mYou decided to take the rune and escape\033[0m\n");
                          printf("\033[30mThe world collapses around you again, shadows consuming you...\033[0m\n");
                          system("cls");
                          return 1;
                        }
                        else if(c2==2)
                        {
                            printf("\033[30mYou have decided to tell inforamtion to vinking era so that you will become reknown\nand then leave\033[0m");
                             printf("\033[30mYou tell them about how pistols are formed and leave a procedure for it\033[0m\n");
                            b++;
                            if(b==2)
                            {
                            printf("\033[31mDoing this type of misktake 2 times,you altered the history\033[0m\n");
                            printf("\033[31mSo restart this era and 1 life is gone\033[0m\n");
                            (*l)--;
                            if (*l <= 0)
                            {lose();
                             printf("\033[31mYou don't have sufficient lives left, so you can't enter this era anymore, and your existence is no more.\033[0m\n");
                             printf("\t\t\t\t\t\t\t\t\t\t\t\t\033[31m******YOUR MISTAKE IS UNFORGIVABLE******\033[0m\n");
                             return 0;
                            }
                            printf("\033[31mRestarting era...\033[0m\n");
                continue; 
                           }
                            else{ printf("\033[30mYou tell them about how pistols are formed and leave a procedure for it\033[0m\n");
                                  system("cls");
                                return 1;
                        
                            }}
                        else if(c2==3)
                        {lose();
                            printf("\033[30mYou refuse to leave and become part of Viking legend.\033[0m\n");
                            printf("\033[31mYou lose the game\033[0m\n");
                            return 0;
                        }
                        else{wd();
            playsound2();
                            printf("\033[31mYou choose an invalid choice\033[0m\n");
                            printf("\033[31mYou lost one life!!\033[0m\n");
                         (*l)--;
                         if (*l <= 0)
                          {lose();
                          printf("\033[31mYou don't have sufficient lives left, so you can't enter this era anymore, and your existence is no more.\033[0m\n");
                          printf("\t\t\t\t\t\t\t\t\t\t\t\t\033[31m******YOUR MISTAKE IS UNFORGIVABLE******\033[0m\n");
                          return 0;
                         }
                        printf("\033[31mRestarting era...\033[0m\n");
                continue; 
                       }   
                        }
                        else{wd();
            playsound2();
                        printf("\033[31mYour answer is INCORRECT restart the journey\033[0m\n");
                        printf("\033[30mThe time rune chamber doesn't open and you got captured and killed\033[0m\n");
                        (*l)--;
                        if (*l <= 0)
                        {lose();
                        printf("\033[31mYou don't have sufficient lives left, so you can't enter this era anymore, and your existence is no more.\033[0m\n");
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\033[31m******YOUR MISTAKE IS UNFORGIVABLE******\033[0m\n");
                        return 0;
                        }
                        printf("\033[31mRestarting era...\033[0m\n");
                continue;
                    }
                }
               
            }
int vinking_age_T(int *l)//This function Contains journey of player in viking age with Tariq
{    
    playsound2();

  while(*l>0)
  {
    printf("\033[30mYou awaken to the sharp chill of 800 CE-the Viking Age. The roar of war horns echoes through \n"
         "towering fjords,and Viking longships cut through the waves, heading toward a coastal stronghold. You have arrived in Norway,\n"
         "where your next challenge awaits.\033[0m");
   printf("\n\n\n\033[33m\033[1m~~Truth Seer~~\033[0m\n\033[33mThe Time Rune, your key to moving forward, is hidden within the fortress of Jarl Astrid.\n "
         "To retrieve it, you must earn the Viking's trust or take it by force.\033[0m\n");
   printf("\033[30mBringing Tariq with you changes everything-two outsiders in Viking territory are seen as a threat.\033[0m\n");
   printf("\033[30mUpon arriving at the Viking stronghold, Jarl Astrid steps forward, her rune-inscribed axe gleaming under\n"
       " the firelight. She studies you and Tariq carefully before declaring:\033[0m\n");
   printf("\033[34m\"Outsiders have no place in my lands. If you wish to stay, prove your worth.\"\033[0m\n");
   printf("\033[30mTo prove yourself you have to solve a Viking riddle demonstrating intelligence\033[0m\n");
   printf("\033[30mJarl Astrid presents a test of wisdom:\033[0m\n\n"
          "\033[33mI carry sound, yet have no voice.\n"
          " I exist in mountains but vanish in cities. What am I?\033[0m\n");
   char r[50];
   printf("\033[36mEnter answer:\033[0m");
   scanf("%s",r);
   if(strcmp(r,"ECHO")==0)
   {
      printf("\033[32mYour answer is CORRECT!!\033[0m\n");
   }
   else{wd();
    playsound2();

    printf("\033[31mYour answer is INCORRECT\033[0m\n");
    printf("\033[30mJarl Astrid gives you another riddle to solve\033[0m\n ");
    printf("\n\n\033[33mBorn in fire, shaped by hammer,\n"
           "Yet never shall I strike in anger.\n"
           "Though carried by kings, I bring no war,\n"
            "My worth is high, yet I weigh no more.\n"   
           "What am I?\033[0m\n");
           char r2[50];
           printf("\033[36mEnter answer:\033[0m");
           scanf("%s",r2);
           if(strcmp(r2,"CROWN")==0)
           {
           printf("\033[32mYour answer is CORRECT!!\033[0m\n");
           }
           else
           {wd();
            playsound2();
             printf("\033[31mYour answer is INCORRECT restart the journey\033[0m\n");
           (*l)--;
            if (*l <= 0) 
            {
lose();
            printf("\033[31mYou don't have sufficient lives left, so you can't enter this era anymore, and your existence is no more.\033[0m\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t\t\033[31m******YOUR MISTAKE IS UNFORGIVABLE******\033[0m\n");
            return 0;
             }
           printf("\033[31mRestarting era...\033[0m\n");
                continue;
            }
        }
        printf("\033[30mThe Vikings see you as wise, unlocking access to the Fortress\033[0m\n");
        printf("\033[30mNow you are inside the fortress, you have to find the Time Rune chamber\033[0m\n");
        printf("\033[36mWhile raoming in fortress finding the chamber \n"
              "you are standing at crossroads\033[0m\n");
        printf("\033[36mThree directions to go \n1.Left\n2.Straight\n3.Right\033[0m\n");
        printf("\033[36mEnter your choice:\033[0m\n");
        int c1;
        scanf("%d",&c1);
        if(c1==1)
        {wd();
            playsound2();
            printf("\033[30mWhen you start to follow left path\033[0m\n");
            printf("\033[31mYou were attacked by Hǫggormr and get killed\033[0m\n");
            (*l)--;
            if (*l <= 0) {lose();
                printf("\033[31mYou don't have sufficient lives left, so you can't \n"
                    "enter this era anymore, and your existence is no more.\033[0m\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\033[31m******YOUR MISTAKE IS UNFORGIVABLE******\033[0m\n");
                 return 0;
                }
               printf("\033[31mRestarting era...\033[0m\n");
                continue;
        }
        else if(c1==2)
        {
            printf("\033[30mWhen you start to follow straight path again after some time\033[0m\n"
                   " \033[36myou are standing at a crossroads\033[0m\n");
            printf("\033[36mThree directions to go:\n1.Left\n2.Right\033[0m\n");
             printf("\033[36mEnter your choice:\033[0m\n");
            int c2;
            scanf("%d",&c2);
            if(c2==1)
            {
                printf("\033[30mWhen you start to follow left path\033[0m\n");
            }  
            else if (c2==2)
            {wd();
            playsound2();
               printf("\033[30mWhen you start to follow right path\033[0m\n");
               printf("\033[31mYou were attacked by Hǫggormr and get killed\033[0m\n"); /* code */
               (*l)--;
            if (*l <= 0) {lose();
                printf("\033[31mYou don't have sufficient lives left, so you can't n"
                    "enter this era anymore, and your existence is no more.\033[0m\\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\033[31m******YOUR MISTAKE IS UNFORGIVABLE******\033[0m\n");
                 return 0;
                }
                printf("\033[31mRestarting era...\033[0m\n");
                continue;
            }
            else
            {wd();
            playsound2();
                printf("\033[31mInvalid Choice\033[0m\n");
                   printf("\033[31mYou lost one life!!\033[0m\n");
                   (*l)--;
                   if (*l <= 0) {lose();
                        printf("\033[31mYou don't have sufficient lives left, so you can't enter this era anymore, and your existence is no more.\033[0m\n");
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\033[31m******YOUR MISTAKE IS UNFORGIVABLE******\033[0m\n");
                        return 0;
                    }
                  printf("\033[31mRestarting era...\033[0m\n");
                continue;
            }
        }
        else if(c1==3)
        {
           printf("\033[30mWhen you start to follow right path\n");
        }
        else
        {wd();
            playsound2();
          printf("\033[31mInvalid Choice\033[0m\n");
                   printf("\033[31mYou lost one life!!\033[0m\n");
                   (*l)--;
                   if (*l <= 0) {lose();
                        printf("\033[31mYou don't have sufficient lives left, so you can't enter this era anymore, and your existence is no more.\033[0m\n");
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\033[31m******YOUR MISTAKE IS UNFORGIVABLE******\033[0m\n");
                        return 0;
                    }
                  printf("\033[31mRestarting era...\033[0m\n");
                continue;
        }
        printf("\033[30mFinally, you find the Time Rune chamber, but it is locked behind an \n"
              "ancient runestone puzzle.\033[0m");
        printf("\033[30mThis is your\033[0m \n\n\033[33m\033[1mCIPHERT III\033[0m\n");
        printf("\"\033[33mThe more you take, the more you leave behind. What am I?\"\033[0m\n");
        printf("\033[33mHint:Every step you take leaves a silent mark, yet you \n"
              "never carry it with you\033[0m\n");
        char ci3[50];
        printf("\033[36mEnter answer:\033[0m");
        scanf("%s",ci3);
        if(strcmp(ci3,"FOOTSTEPS") == 0)
        {
         printf("\033[32mYour answer is CORRECT!!!\033[0m\n"); 
        }
        else{wd();
            playsound2();
            printf("\033[31mYour answer is INCORRECT restart the journey\033[0m\n");
            (*l)--;
            if (*l <= 0) {lose();
            printf("\033[31mYou don't have sufficient lives left, so you can't enter this era anymore, and your existence is no more.\033[0m\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t\t\033[31m******YOUR MISTAKE IS UNFORGIVABLE******\033[0m\n");
            return 0;
            }
           printf("\033[31mRestarting era...\033[0m\n");
                continue;
            }
            printf("\033[30mThe Time Rune chamber unlocks, allowing escape.\033[0m\n");
            printf("\033[30mBefore you can leave, Skuld\nthe mysterious time traveler\nappears, her eyes glowing with knowledge.\033[0m"
                   "\n\033[34mSkuld:\"Tariq was never meant to be here. You have already altered history.\"\033[0m\n\n"
                   "\033[36mNow, you must decide:\n"
                   "1.Leave with Tariq - Continue the journey together.\n" 
                   "2.Abandon Tariq - Restore history but face the next era alone.\033[0m\n");
            int c3;
            printf("\033[36mEnter your choice:\033[0m\n");
            scanf("%d",&c3);
            if(c3==1)
            {
                printf("\033[30mYou decided to take the rune and escape this era with Tariq\033[0m\n");
                printf("\033[30mThe world collapses around you again, shadows consuming you and tariq...\033[0m\n");
                system("cls");
                return 2;
            }
            if(c3==2)
            {
                printf("\033[30mYou decided to take the rune and escape this era alone\033[0m\n");
                printf("\033[30mTariq will be sent back to his era without any memory of yours\033[0m\n");
                printf("\033[30mThe world collapses around you again, shadows consuming you...\033[0m\n");
                system("cls");
                return 1;
            }
            else {wd();
            playsound2();
            printf("\033[31mYou choose an invalid choice\033[0m\n");
             printf("\033[31mYou lost one life!!\033[0m\n");
            (*l)--;
            if (*l <= 0) {lose();
            printf("\033[31mYou don't have sufficient lives left, so you can't enter this era anymore, and your existence is no more.\033[0m\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t\t\033[31m******YOUR MISTAKE IS UNFORGIVABLE******\033[0m\n");
            return 0;
            }
            printf("\033[31mRestarting era...\033[0m\n");
                continue;
            }
        }
    
 }   
 int samurai_e(int *l)//This function Conatins journey of player in samurai eclipse without Tariq
{   
    playsound3();
    while(*l>0)
    {
    printf("\033[30mThe player awakens alone, blending into the snowy battlefield near Kyoto.\033[0m\n");
    printf("\n\n\n\033[33m\033[1m~~Truth Seer~~\033[0m\n\033[33mThe Hourglass of Shogun's Fate, a relic entwined with destiny, rests within the sacred halls\n"
        " of the Imperial Shrine.\n" 
         "Only those who comprehend the weight of time and honor may claim it.\033[0m");
    printf("\033[35mKurogane\n The mystical guardian, appears-A towering figure with raven-like wings, a hooked nose, \n"
	       "and piercing golden eyes.His battle-worn armor reflects a lifetime of trials, inscribed with ancient kanji of warriors lost to time.\n"	       
           "He recognizes the your soul as a traveler and knows how to help you out.\033[0m\n");
    printf("\033[30mHe took you to shrine where The Hourgalss of Shogun's fate lies\033[0m\n");
    printf("\033[30mBut before opening chamber of shogun's Kurogane,  presents three challenges to test the player's worthiness\n"
        " to approach the Hourglass of Shogun's Fate.\n"  
        "Each challenge is designed to teach a lesson, rather than punish failure.\033[0m\n\n");
    printf("\n\n\033[33m\033[1m~~~THREEFOLD CHALLENGES~~~\033[0m\n\n");
    printf("\033[33mChallenge I:The Riddle of Acceptance\033[0m\n\n");
    printf("\033[33mThe shrine presents the you with a glowing inscription carved into the wall:\033[0m\n");
    printf("\n\033[33m\033[1mCIPHER VI\n\033[0m");
    printf("\033[33m\"I have no eyes, yet I watch your past.\n"
           " I make no sound, yet I echo your regrets.\n"
           " I do not speak, yet I remind you of truths.\n"
           " What am I?\"\033[0m\n");
    printf("\033[33mHint:What starts with M ends with Y,Only thing you have in heart of Tariq\033[0m\n");
    char ci6[50];
    printf("\033[36mEnter answer:\033[0m");
    scanf("%s",ci6);
    if(strcmp(ci6,"MEMORY")==0)
    {
        printf("\033[32mYou passed the Challenge I\033[0m\n\n");
        printf("\033[30mshrine stabilizes, Kurogone reveals that accepting ones past mistakes is key to moving forward.\033[0m\n\n");

    }
    else
    {wd();
        playsound3();
        
    printf("\033[30mThe shrine whispers unsettling echoes of past wrong choices\033[0m\n\n");
    printf("\033[31mYour answer is INCORRECT you failed the Challenge I\nRestart your journey\033[0m\n\n");
     (*l)--;
        if (*l <= 0)
             {lose();
                 printf("\033[31mYou don't have sufficient lives left, so you can't enter this era anymore, and your existence is no more.\033[0m\n");
                 printf("\t\t\t\t\t\t\t\t\t\t\t\t\033[31m******YOUR MISTAKE IS UNFORGIVABLE******\033[0m\n");
                 return 0;
             }
            printf("\033[31mRestarting era...\033[0m\n");
                continue;
    }
    printf("\033[33mChallenge II:The Test of Balance\033[0m\n\n");
    printf("\033[33m\033[1mCIPHER VII\033[0m\n");
    printf("\033[33mYou must balance two weights on a ceremonial scale-one golden, one obsidian.\033[0m\n");
    printf("\033[33m\"A warrior must carry both light and shadow.\n"
           "Favor one, and fate will tip against you.\n"
           " What must be done?\"\n");
    printf("\033[36mEnter 1 if your answer is-Place weights unevenly priortizing gold-To show we embrace our strengths\033[0m\n");
    printf("\033[36mEnter 2 if your answer is-Place weights evenly-To show we must embrace our strengths and weaknesses\033[0m\n");
    printf("\033[36mEnter 3 if your answer is-Place weights unevenly priortizing obsidian-To show we must embrace our weaknesses\n as strength is always within us\033[0m\n");
    printf("\033[36mYour answer:\033[0m");
    int ci7;
    scanf("%d",&ci7);
    if(ci7==2)
    {
         printf("\033[32mYou passed the Challenge II\033[0m\n\n");
    }

      else
    {wd();
        playsound3();
        printf("\033[30mThe shrine momentarily dims, and Kurogane reminds the you:\033[0m\n");
        printf("\033[34m\"A traveler who walks only in light will stumble in darkness.\033[0m\n"
               "A traveler who walks only in darkness will never find their way.\033[0m\n");
    printf("\033[31mYour answer is INCORRECT you failed the Challenge II\nRestart your journey\033[0m\n\n");
     (*l)--;
        if (*l <= 0)
             {lose();
                 printf("\033[31mYou don't have sufficient lives left, so you can't enter this era anymore, and your existence is no more.\033[0m\n");
                 printf("\t\t\t\t\t\t\t\t\t\t\t\t\033[31m******YOUR MISTAKE IS UNFORGIVABLE******\033[0m\n");
                 return 0;
             }
            printf("\033[31mRestarting era...\033[0m\n");
                continue;
    } 
    printf("\033[33mChallenge III:The Trial of the Unbroken Oath\033[0m\n\n");
    printf("\033[33mYou must choose a vow that will guide you through time.\033[0m\n");
    printf("\033[30mKurogane hands them an ancient blade, inscribed with the words:\n"
           "\"A warrior's promise is not to fate, but to themselves. What \n"
           "will you swear upon this blade?\"\033[0m\n");
    printf("\033[36mChoice: The player must select one guiding principle from three possibilities:\033[0m\n"
           "\033[36mEnter 1-\"I vow never to manipulate fate for selfish desires.\"\033[0m\n"
           "\033[36mEnter 2-\"I vow to protect those whose histories must not be erased.\"\033[0m\n"
           "\033[36mEnter 3	\"I vow to let the past remain untouched, even when it pains me\"\033[0m\n"); 
    printf("\033[36mEnter 4- You hesiate from doing this\033[0m\n");
    int c1;
    printf("\033[36mEnter your choice:\033[0m\n");
    scanf("%d",&c1);
    if(c1==1)
    {
        printf("\033[32mYou chose to vow\n\"I vow never to manipulate fate for selfish desires.\"\033[0m\n\n");
    }
    else if(c1==2)
    {
        printf("\033[32mYou chose to vow\n\"I vow to protect those whose histories must not be erased.\"\033[0m\n\n");
    }
    else if(c1==3)
    {
       printf("\033[32mYou chose to vow\n\"I vow to let the past remain untouched, even when it pains me\"\033[0m\n\n"); 
    }
    else{wd();
        playsound3();
        printf("\033[30mYou chose to be hesitant and avoid making a promise\033[0m\n");
        printf("\033[34mKurogane tells you:\n"
                "Without direction, you will be lost to time. Choose your path wisely.\"\033[0m\n");
       printf("\033[31myou failed the Challenge III\nRestart your journey\033[0m\n\n");
                (*l)--;
                     if (*l <= 0) {lose();
                     printf("\033[31mYou don't have sufficient lives left, so you can't enter this era anymore, and your existence is no more.\033[0m\n");
                     printf("\t\t\t\t\t\t\t\t\t\t\t\t\033[31m******YOUR MISTAKE IS UNFORGIVABLE******\n\033[0m");
                      return 0;
                       }
                     printf("\033[31mRestarting era...\033[0m\n");
                continue;
    }
    printf("\033[30mOnce chosen, the blade mends itself, signifying that the player has accepted their role in time's balance.\033[0m\n");
    printf("\033[30mUpon reaching the Hourglass, Skuld appears as a guide.\033[0m\n"
        "\033[34mShe reveals that the Hourglass does not erase moments-it reshapes them.\n"
        "\nYou face a choice:\033[0m\n");
    printf("\033[36mEnter 1-Use the Hourglass, knowing it will alter something forever.-Alter all the experiment doing decision\n"
           "erasing the whole journey and reset yourself in present\n"
           "Enter 2-Leave it untouched, accepting that your journey must shape you, not time itself.\033[0m\n");
    int c2;
    printf("\033[36mEnter your choice:\033[0m\n");
    scanf("%d",&c2);
    if(c2==1)
    {
        printf("\033[30mYou choose to reset your past:\033[0m\n\n\n");
        printf("\t\t\t\t\t\t\t\t\033[33m\033[1m~~~~ENIGMA II~~~~\033[0m\n");
        printf("\033[33m\"I disappear when you call me,\n"
            "but return when you're alone.\n"
            " I follow you everywhere,\n"
            " yet you can never catch me.\n"
            " What am I?\"\033[0m\n");
        char e2[50];
            printf("\033[36mEnter answer:\033[0m");
            scanf("%s",e2);
            if(strcmp(e2,"ECHO")==0||strcmp(e2,"SHADOW")==0||strcmp(e2,"MEMORY")==0)
            {   win();  
                printf("\033[32mYour answer is correct!!!\nYou won the game!\033[0m\n");
                printf("\033[33m~~~VICTORY~~~VICTORY~~~VICTORY~~~VICTORY~~~VICTORY~~~VICTORY~~~VICTORY~~~VICTORY~~~VICTORY~~~VICTORY~~~VICTORY~~~VICTORY~~~VICTORY~~~VICTORY~~~VICTORY~~~VICTORY~~~VICTORY~~~VICTORY~~~\033[0m\n");
                return 0;
            }
            else
            {wd();
        playsound3();
               printf("\033[31mYour answer is INCORRECT restart the era\033[0m\n");
                    (*l)--;
                    if (*l <= 0)
                     {lose();
                     printf("\033[31mYou don't have sufficient lives left, so you can't enter this era anymore, and your existence is no more.\033[0m\n");
                     printf("\t\t\t\t\t\t\t\t\t\t\t\t\033[31m******YOUR MISTAKE IS UNFORGIVABLE******\033[0m\n");
                     return 0;
                      }
                     printf("\033[31mRestarting era...\033[0m\n");
                continue;
            } 
        }
        if(c2==2)
        {
            printf("\033[30mYou decide to leave it untouched\033[0m\n");
            printf("\033[30mBefore leaving, Kurogane hands the you a talisman-a symbol of your bond.\033[0m\n"
                   "\033[34m\"Fate is a river,\" he says, \"but even rivers carve new paths with time.\"\033[0m\n"
"\033[30mYou, now carrying the wisdom of the Tengu Warrior, steps forward into the unknown, your journey through time continuing.\033[0m\n");
printf("\033[30mThe world collapses around you again, shadows consuming you...\033[0m\n");
system("cls");
return 1;       
}
        else
        {wd();
        playsound3();
                    printf("\033[31mYou choose an invalid choice\033[0m\n");
                    printf("\033[31mYou lost one life!!\033[0m\n");
                    (*l)--;
                     if (*l <= 0) {lose();
                     printf("\033[31mYou don't have sufficient lives left, so you can't enter this era anymore, and your existence is no more.\033[0m\n");
                     printf("\t\t\t\t\t\t\t\t\t\t\t\t\033[31m******YOUR MISTAKE IS UNFORGIVABLE******\033[0m\n");
                      return 0;
                       }
                    printf("\033[31mRestarting era...\033[0m\n");
                continue;
        }
        

    }
}
  int samurai_e_T(int *l)
{ 
    playsound3();
    while(*l>0)
    {
    printf("\033[30mThe player and Tariq land in a snow-covered landscape near Kyoto.\n"
           "Tariq, unfamiliar with Japan, is uneasy.\nTime feels unstable here, rejecting his presence.\n"
           "Shadows shift unnaturally, signaling a breach in history. The shrine senses that one of them does not belong.\033[0m\n");
    printf("\n\n\n\033[33m~~Truth Seer~~\nThe Hourglass of Shogun's Fate, a relic entwined with destiny, rests within the sacred halls\n"
        " of the Imperial Shrine.\033[0m\n" 
         "Only those who comprehend the weight of time and honor may claim it.\033[0m");
    printf("\033[95mKurogane\n The mystical guardian, appears-a towering figure with raven-like wings, a hooked nose, and piercing golden eyes.\n"
	       "His battle-worn armor reflects a lifetime of trials, inscribed with ancient kanji of warriors lost to time.\n"	       
           "He recognizes the your soul as a traveler but sees Tariq as an anomaly-a force pulling history apart.\033[0m \n");
    printf("\033[30mHe took both of you to shrine where The Hourgalss of Shogun's fate lies\033[0m\n");
    printf("\033[30mBut before opening chamber of shogun's Kurogane,  presents three challenges to test the player's worthiness to approach the Hourglass of Shogun's Fate.\n"
           "Each challenge is designed to teach a lesson, rather than punish failure\033[0m\n\n");
    printf("\n\n\033[33m~~~THREEFOLD CHALLENGES~~~\033[0m\n\n");
    printf("\033[33mChallenge I:The Riddle of Acceptance\033[0m\n\n");
    printf("\033[33mThe shrine presents the you with a glowing inscription carved into the wall:\033[0m\n");
    printf("\n\033[33m\033[1mCIPHER VI\033[0m\n");
    printf("\033[33m\"I have no eyes, yet I watch your past.\n"
           " I make no sound, yet I echo your regrets.\n"
           " I do not speak, yet I remind you of truths.\n"
           " What am I?\"\033[0m\n");
    printf("\033[33mHint:What starts with M ends with Y,Only thing you have in heart of Tariq\033[0m\n");
    char ci6[50];
    printf("\033[36mEnter answer:\033[0m");
    scanf("%s",ci6);
    if(strcmp(ci6,"MEMORY")==0)
    {
        printf("\033[32mYou passed the Challenge I\033[0m\n\n");
        printf("\033[30mshrine stabilizes, revealing that accepting ones past mistakes is key to moving forward.\033[0m\n\n");

    }
    else
    {wd();
        playsound3();
    printf("\033[30mThe shrine whispers unsettling echoes of past wrong choices\033[0m\n\n");
    printf("\033[31mYour answer is INCORRECT you failed the Challenge I\nRestart your journey\033[0m\n\n");
     (*l)--;
        if (*l <= 0)
             {lose();
                 printf("\033[31mYou don't have sufficient lives left, so you can't enter this era anymore, and your existence is no more.\033[0m\n");
                 printf("\033[31m\t\t\t\t\t\t\t\t\t\t\t\t******YOUR MISTAKE IS UNFORGIVABLE******\033[0m\n");
                 return 0;
             }
            printf("\033[31mRestarting era...\033[0m\n");
                continue;
    }
    printf("\033[33mChallenge II:The Test of Balance\033[0m\n\n");
    printf("\033[33m\033[1mCIPHER VII\033[0m\n");
    printf("\033[33mYou must balance two weights on a ceremonial scale-one golden, one obsidian.\033[0m\n");
    printf("\033[33m\"A warrior must carry both light and shadow.\n"
           "Favor one, and fate will tip against you.\n"
           " What must be done?\"\033[0m\n");
    printf("\033[36mEnter 1 if your answer is-Place weights unevenly priortizing gold-To show we embrace our strengths\033[0m\n");
    printf("\033[36mEnter 2 if your answer is-Place weights evenly-To show we must embrace our strengths and weaknesses\033[0m\n");
    printf("\033[36mEnter 3 if your answer is-Place weights unevenly priortizing obsidian-To show we must embrace our weaknesses as strength is always with us\033[0m\n");
    printf("\033[36mYour answer:\033[0m");
    int ci7;
    scanf("%d",&ci7);
    if(ci7==2)
    {
         printf("\033[32mYou passed the Challenge II\033[0m\n\n");
    }

      else
    {wd();
        playsound3();
        printf("\"\03330mThe shrine momentarily dims, and Kurogane reminds the player:\033[0m\n");
        printf("\03334mA traveler who walks only in light will stumble in darkness.\033[0m\n"
               "A traveler who walks only in darkness will never find their way.\n\"\033[0m");
    printf("\033[31mYour answer is INCORRECT you failed the Challenge II\nRestart your journey\033[0m\n\n");
     (*l)--;
        if (*l <= 0)
             {lose();
                 printf("\033[31mYou don't have sufficient lives left, so you can't enter this era anymore, and your existence is no more.\033[0m\n");
                 printf("\t\t\t\t\t\t\t\t\t\t\t\t\033[31m******YOUR MISTAKE IS UNFORGIVABLE******\033[0m\n");
                 return 0;
             }
            printf("\033[31mRestarting era...\033[0m\n");
                continue;
    } 
    printf("\033[30mChallenge III:The Trial of the Unbroken Oath\033[0m\n\n");
    printf("\033[30mYou must choose a vow that will guide you through time.\033[0m\n");
    printf("\033[30mKurogane hands them an ancient blade, inscribed with the words:\n"
           "\"A warrior's promise is not to fate, but to themselves. What \n"
           "will you swear upon this blade?\"\033[0m\n");
    printf("\033[36mChoice: The player must select one guiding principle from three possibilities:\n"
           "Enter 1-\"I vow never to manipulate fate for selfish desires.\"\n"
           "Enter 2-\"I vow to protect those whose histories must not be erased.\"\n"
           "Enter 3	\"I vow to let the past remain untouched, even when it pains me\"\033[0m\n"); 
    printf("\033[36mEnter 4-You hesiate from doing this\033[0m\n");
    int c1;
    printf("\033[36mEnter your choice:\033[0m\n");
    scanf("%d",&c1);
    if(c1==1)
    {
        printf("\033[32mYou chose to vow\n\"I vow never to manipulate fate for selfish desires.\"\033[0m\n\n");
    }
    else if(c1==2)
    {
        printf("\033[32mYou chose to vow\n\"I vow to protect those whose histories must not be erased.\"\033[0m\n\n");
    }
    else if(c1==3)
    {
       printf("\033[32mYou chose to vow\n\"I vow to let the past remain untouched, even when it pains me\"\033[0m\n\n"); 
    }
    else{wd();
        playsound3();
        printf("\033[30mYou chose to be hesitant and avoid making a promise\033[0m\n");
        printf("\033[30mKurogane tells you:\033[0m\n"
                "\033[34mWithout direction, you will be lost to time. Choose your path wisely.\"\033[0m\n");
                printf("\033[31mYour choice is incorrect you failed the Challenge III\nRestart your journey\033[0m\033[0m\n\n");
                
                (*l)--;
                     if (*l <= 0) {lose();
                     printf("\033[31mYou don't have sufficient lives left, so you can't enter this era anymore, and your existence is no more.\033[0m\n");
                     printf("\t\t\t\t\t\t\t\t\t\t\t\t\033[31m******YOUR MISTAKE IS UNFORGIVABLE******\033[0m\n");
                      return 0;
                       }
                       printf("\033[31mRestarting era...\033[0m\n");
                continue;
                    }
                     
    printf("\033[30mOnce chosen, the blade mends itself, signifying that the player has accepted their role in time's balance.\033[0m\n");
    printf("\033[30mBut Tariq, driven by his own defiance against time's rules, struggles with the trial.\033[0m\n");
    printf("\033[30mUpon reaching the Hourglass,the shrine begins to collapse under time's instability.\033[0m\n");
    printf("\033[30mSkuld appers with the warning:\033[0m\n\033[34m\" Tariq's presence is tearing history apart.\"\033[0m\n"
           "\033[30mThe shrine rejects him, forcing his inevitable return to Ancient Egypt\n"
           "You watch as he vanishes within the glow of the Chrono-Ankh, leaving only echoes of his journey behind."
          "Kurogane, now bonded with the player as a guide, offers wisdom\n\n\"A traveler's path is lonely, but fate shapes those willing to endure it.\"\n");
    printf("\033[30mSkuld after Tariq was gone acts as guide reveals that the Hourglass does not erase moments-it reshapes them.\033[0m\n"
        "\n \033[36mNow you face a choice:\033[0m\n");
    printf("\033[36mEnter 1-Use the Hourglass, knowing it will alter something forever.-Alter all the experiment doing decision\n"
           "erasing the whole journey and reset yourself in present\n"
           "Enter 2-Leave it untouched, accepting that your journey must shape you, not time itself.\033[0m\n");
    int c2;
    printf("\033[36mEnter your choice:\033[0m\n");
    scanf("%d",&c2);
    if(c2==1)
    {
        printf("\033[30mYou choose to reset your past:\033[0m\n\n\n");
        printf("\t\t\t\t\t\t\t\t\033[33m\033[1m~~~~ENIGMA II~~~~\033[0m\n");
        printf("\033[33\"I disappear when you call me,\n"
            "mbut return when you're alone.\n"
            " I follow you everywhere,\n"
            " yet you can never catch me.\n"
            " What am I?\"\033[0m\n");
        char e2[50];
            printf("\033[36mEnter answeer:\033[0m");
            scanf("%s",e2);
            if(strcmp(e2,"ECHO")==0||strcmp(e2,"SHADOW")==0||strcmp(e2,"MEMORY")==0)
            {win();
                printf("\033[32mYour answer is correct!!!\nYou won the game!\033[0m\n");
                printf("\033[33m~~~VICTORY~~~VICTORY~~~VICTORY~~~VICTORY~~~VICTORY~~~VICTORY~~~VICTORY~~~VICTORY~~~VICTORY~~~VICTORY~~~VICTORY~~~VICTORY~~~VICTORY~~~VICTORY~~~VICTORY~~~VICTORY~~~VICTORY~~~VICTORY~~~\033[0m\n");
                return 0;
            }
            else
            {wd();
        playsound3();
               printf("\033[31mYour answer is INCORRECT restart the journey\033[0m\n");
                    (*l)--;
                    if (*l <= 0)
                     {lose();
                     printf("\033[31mYou don't have sufficient lives left, so you can't enter this era anymore, and your existence is no more.\033[0m\n");
                     printf("\t\t\t\t\t\t\t\t\t\t\t\t\033[31m******YOUR MISTAKE IS UNFORGIVABLE******\033[0m\n");
                     return 0;
                      }
                     printf("\033[31mRestarting era...\033[0m\n");
                continue;
            } 
        }
        else if(c2==2)
        {
            printf("\033[30mYou decide to leave it untouched\n\033[0m");
            printf("\033[30mBefore leaving, Kurogane hands the you a talisman-a symbol of your bond with him.\033[0m\n"
                   "\033[34m\"Fate is a river,\" he says, \"but even rivers carve new paths with time.\"\033[0m\n"
"\033[30mYou, now carrying the wisdom of the Tengu Warrior, steps forward into the unknown, their journey through time continuing\033[0m");
printf("\033[30mThe world collapses around you again, shadows consuming you...\033[0m\n");\
system("cls");
return 1;       
}
else{
        wd();
        playsound3();
                    printf("\033[31mYou choose an invalid choice\033[0m\n");
                    printf("\033[31mYou lost one life!!\033[0m\n");
                    (*l)--;
                     if (*l <= 0) {lose();
                     printf("\033[31mYou don't have sufficient lives left, so you can't enter this era anymore, and your existence  is no more.\033[0m\n");
                     }
                    printf("\033[31mRestarting era...\033[0m\n");
                continue;
}}
   } 
 int AI_war(int *l) {  
    playsound4();
       while(*l>0)
       {
  printf("\033[30mYou wake up inside a high-security resistance bunker.\n"
         "The walls are lined with old circuitry, outdated consoles blinking in the shadows.\033[0m\n"
         "Resistance, the last group of surviving hackers, gathers around you.\033[0m\n");
 printf("\n\n\n\033[33m\033[1m~~Truth Seer~~\nThis time there is no artifact just complete the mission and follow command of SeerX.\033[0m\n");
 printf("\n\n\n\033[33m\033[1m~~SeerX~~\nIt is neither human nor fully machine.\033[0m\n"
       " \033[33mIt is an evolved AI, a watcher across time, capable of deciphering lost histories\n"
       " and predicting future anomalies.(It will tell you about your mission since power of Truth Seer don't \n"
       "work here but due to you survived the samurai eclicpse you unlocked it)\033[0m\n");
 printf("\n\n\n\033[33m\033[1m~~SeerX~~\033[0m\n");
 printf("\033[30mA deep mechanical voice arouses:\033[0m\n\n");
  printf("\033[33m\"Your mission is clear. You must hack the Neural AI Network and shut down "
         "the rogue systems controlling Earth.\"\033[0m\n");
  printf("\033[30mThe Resistance hands you a map to go datacenter of neural AI and device with "
         "a hidden message encrypted by AI security systems. \033[0m\n");
  printf("\033[30mYou reach datacenter and introduce yourself as worker there and by sneeking "
         "get access to guest PC\033[0m\n");
  printf("\033[35mThe message:221916\033[0m");
  printf("\t\t\t\t\t\t\033[93m\033[1m~~~AI Cipher I~~~\033[0m\n\n");
  printf("\033[93mYou must decrypt the message using neutral AI guest PC begin your mission.\033[0m\n");
  printf("\033[93mWrite a code to decrypt the given message only don't end up making the code "
         "for every input\033[0m\n");
  printf("\033[30mWrite this code in AIcipher1.c file\033[0m\n");
  printf("\033[30mIf your code is correct then move to AI cipherII but if incorrect then you "
         "will directly loose the game\033[0m\n");
printf("\033[36mEnter 1 if you have done writing the code\033[0m\n");
       int d;
       scanf("%d",&d);
       if(d==1)
       {
              printf("\033[32mChecking the code.....\033[0m\n");
       }
       else
       {lose();
              printf("\033[31mYou written an invalid choice\033[0m\n");
              printf("\033[31mYou loose the game\033[0m\n");
              printf("\t\t\t\t\t\t\t\t\t\t\t\t\033[31m******YOUR MISTAKE IS UNFORGIVABLE******\033[0m\n");
              return 0;
       }
   system("gcc AIcipher1.c -o player1 && player1.exe > output1.txt");

  FILE *fp = fopen("output1.txt", "r");
  char ac1[100];
  fgets(ac1, 100, fp);
  fclose(fp);
  if (strcmp(ac1,"110805") == 0) {
    printf("\033[32mCode passed!\033[0m\n");
    printf("\033[30mThe message:110805\033[0m\n");
  } else {lose();
    printf("\033[31m Incorrect code! You loose the game!!!.\033[0m\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\033[31m******YOUR MISTAKE IS UNFORGIVABLE******\033[0m\n");
    return 0;
  }
  printf("\033[30mAfter a great struggle you reached your final destination\n NOW:Neural AI "
         "dataroom\033[0m\n");
  printf("\033[30mBefore accessing the AI mainframe, you need to bypass the security\033[0m\n\n");
  printf("\t\t\t\t\t\t\033[1m\033[93m~~~AI Cipher II~~~\033[0m\n\n");
  printf("\033[93mYou have to write a code in their main System which checks whether the "
         "passcode given by you is correct and gives you access to shut down the AI core\033[0m\n");
  printf("\033[93mWrite a code which takes n =(the message by resistance) as variable and "
         "checks if n=110805 prints WIN if you loose than LOOSE \nAvoid writing "
         "program which takes input\n \033[0m");
  printf("\033[30mWrite this code in AIcipher2.c file\033[0m\n");
  printf("\033[30mIf your code is correct then you will continue the journey but if incorrect then you will "
         "directly lose the game\033[0m\n");
         printf("\033[36mEnter 1 if you have done writing the code\033[0m\n");
       int d2;
       scanf("%d",&d2);
       if(d2==1)
       {
              printf("\033[32mChecking the code.....\033[0m\n");
       }
       else
       {lose();
              printf("\033[31mYou written an invalid choice\033[0m\n");
              printf("\033[31mYou loose the game\n");
              printf("\t\t\t\t\t\t\t\t\t\t\t\t\033[31m******YOUR MISTAKE IS UNFORGIVABLE******\033[0m\n");
              return 0;
       }
  system("gcc AIcipher2.c -o player2 && player2.exe > output2.txt");
  FILE *fp2 = fopen("output2.txt", "r");
  char ac2[100];
  fgets(ac2, 100, fp2); // Corrected: Use fp2 here
  fclose(fp2);
  if (strcmp(ac2, "WIN\n") == 0) {
    printf("\033[32m Code passed!\033[0m\n");
  } else {lose();
    printf("\033[31mIncorrect code! You loose the game!!!.\033[0m\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\033[31m******YOUR MISTAKE IS UNFORGIVABLE******\033[0m\n");
    return 0;
  }
  printf("\033[30mThe final step before shutting the AI core is solving the Neural "
         "Ciphers\033[0m\n\n");
  printf("\033[33m\033[1mCIPHERT VIII\033[0m\n");
  printf("\033[33m\"I have two ones, a circle in between,\n"
         "then infinity, and I end as half of ten.\n"
         " What am I?\033[0m\"\n");
  char ci8[100]; // Changed to char array to store the string
  printf("\033[36mEnter answer:\033[0m");
  scanf("%s", ci8); // Corrected: Use %s to read a string
  if (strcmp(ci8, "110805") == 0) {
    printf("\033[32mYour answer is correct\033[0m\n");
  } else {lose();
    printf("\033[31mYour Answer is INCORRECT you loose the game\033[0m\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\033[31m******YOUR MISTAKE IS UNFORGIVABLE******\033[0m\n");
    return 0;
  }
  printf("\033[33m\033[1mCIPHERT IX\033[0m\n");
  printf("\033[33m\"The more I process, the stronger I become.\n"
         "The more you feed me, the faster I evolve.\n"
         "Yet if left alone, I eventually decay.\n"
         "What am I?\"\n"
         " Hint: Think AI and learning algorithms\033[0m\n");
  char ci9[100]; // Changed to char array to store the string
  printf("\033[36mEnter answer:\033[0m");
  scanf("%s", ci9); // Corrected: Use %s to read a string
  if (strcmp(ci9, "DATA") == 0) {
    printf("\033[32mYour answer is correct\033[0m\n");
  } else {lose();
    printf("\033[31mYour Answer is INCORRECT you loose the game");
    printf("\033[31mYou Loose the game\033[0m\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\033[31m******YOUR MISTAKE IS "
           "UNFORGIVABLE******\033[0m\n");
    return 0;
  }
  printf("\033[30mYou now stand at the core of the Neural Network.\033[0m\n \033[36mThe final choice awaits:\n"
         "1.Shut Down the AI System yourself- Save humanity but destroy all future "
         "digital progress.\n"
         "2.Rewrite the AI Code - Take control and merge with AI consciousness.\n"
         "3.Leave this to Resistance\033[0m\n");
  int c1;
  printf("\033[36mEnter your choice:\033[0m\n");
  scanf("%d", &c1);
  if (c1 == 1) {lose();
    printf("\033[31mYou change the future and loose the game!\033[0m\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\033[31m******YOUR MISTAKE IS "
           "UNFORGIVABLE******\033[0m\n");
    return 0;
  } else if (c1 == 2) {lose();
    printf("Y\033[30mou choose to live in that era and lead the world\033[0m\n");
    printf("\033[30mYou Loose the game\033[0m\n");
    return 0;
  } else if (c1 == 3) {
    printf("\033[30mYou decided to leave everything on Resistance and continue your "
           "journey\033[0m\n");
    printf("\033[30mThe world collapses around you again, shadows consuming you...\033[0m\n");       
    system("cls");
    return 1;
  } else {lose();
    printf("\033[31mYou choose an invalid choice\033[0m\n");
    printf("\033[31mYou loose the game\033[0m\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\033[31m******YOUR MISTAKE IS UNFORGIVABLE******\033[0m\n");
    return 0;
  }
}

 }
int titanic_e(int *l) { 
    playsound5();
    while(*l>0)
    {
    printf("\033[30mYou awaken aboard the RMS Titanic(20 LIFEBOATS), but something is wrong. The ship is not sinking-yet.\n"
           "Time itself is fractured, and the passengers unknowingly relive the same day over and over.\033[0m\n"
           "\n\n\n\033[33m\033[1m~~Truth Seer~~\033[0m\n\033[30mThe Chrono-Locket, the final artifact, is hidden somewhere within the ship\n"
           "but retrieving it requires passing a series of challenges that reveal the true nature of your journey.\033[0m\n");

    printf("\033[30mAs you navigate the ship, you begin to notice strange anomalies-symbols from\n"
           "Ancient Egypt, markings from the Samurai Eclipse, and even fragments of AI code from the future.\n"
           "The realization dawns on you: every era you have traveled through is connected.\n"
           "Someone or something has been guiding you toward this moment.\033[0m\n");

    printf("\033[30mThe ship's clock is stuck at 11:40 PM, the moment before the Titanic struck the iceberg.\n"
           "Time itself is fractured, and the passengers unknowingly relive the same day over and over.\n"
           "The Chrono-Locket, the final artifact, is hidden somewhere within the ship, but retrieving it\n"
           "requires solving some challenges that ties together all the eras you have visited.\033[0m\n");

    printf("\033[30mThe Ancient Egyptian Marking\n"
           "In the captain's quarters, you find a hieroglyphic engraving the same symbol that was carved into the Chrono-Ankh in Ancient Egypt.\033[0m\n");

    printf("\n\n\033[33m\033[1mCIPHERT X\033[0m\n\n");
    printf("\033[33m\"I was forged in the sands of time, meant to halt the flow, yet I was lost to the depths. What am I?\"\033[0m\n");
    printf("\033[33mHint: It halts TIME\033[0m\n");
    printf("\033[36mEnter answer:\033[0m");
    
    char ci10[50];
    scanf("%s", ci10);
    if(strcmp("CHRONOANKH", ci10) == 0) {
        printf("\033[32mYour answer is CORRECT!!!\033[0m\n");
    } else {
        wd();
        playsound5();
        printf("\033[31mYour answer is INCORRECT restart the era\033[0m\n");
        (*l)--;
        if (*l <= 0) {
            lose();
            printf("\033[31mYou don't have sufficient lives left, so you can't enter this era anymore, and your existence is no more.\033[0m\n");
            printf("\033[31m\t\t\t\t\t\t\t\t\t\t\t\t******YOUR MISTAKE IS UNFORGIVABLE******\033[0m\n");
            return 0;
        }
        printf("\033[31mRestarting era...\033[0m\n");
                continue;
    }

    printf("\033[30mSolving this reveals a hidden compartment in the desk, containing a fragment\n"
           "of the Chrono-Locket and another clue.\033[0m\n");
    printf("\033[30mFollowing the clue you reach crow's nest\033[0m\n");
    printf("\033[30mYou spot a metallic plate, wedged between the wooden beams. It's not from this era, its surface is engraved with a\n"
           "sequence of numbers, glowing faintly in the moonlight. As you touch it, a distorted voice echoes in your mind,\n"
           "a remnant of the AI Wars era.\033[0m\n");

    printf("\n\n\033[33m\033[1mCIPHERT XI\033[0m\n\n");
    printf("\033[33m\"I was built to predict the future,\n"
           "yet I failed to foresee my own destruction.\n"
           "What am I?\"\033[0m\n");
    printf("\033[33mHint: The answer lies in a system that was meant to safeguard humanity-but instead became its greatest flaw\033[0m\n");
    printf("\033[36mEnter answer:\033[0m");
    
    char ci11[50];
    scanf("%s", ci11);
    if(strcmp("NEURALAI", ci11) == 0) {
        printf("\033[32mYour answer is CORRECT!!!\033[0m\n");
    } else {
        wd();
        playsound5();
        printf("\033[31mYour answer is INCORRECT restart the era\033[0m\n");
        (*l)--;
        if (*l <= 0) {
            lose();
            printf("\033[31mYou don't have sufficient lives left, so you can't enter this era anymore, and your existence is no more.\033[0m\n");
            printf("\033[31m\t\t\t\t\t\t\t\t\t\t\t\t******YOUR MISTAKE IS UNFORGIVABLE******\033[0m\n");
            return 0;
        }
        printf("\033[31mRestarting era...\033[0m\n");
                continue;
    }

    printf("\033[30mThe numbers on the plate correspond to key moments in history, but one is incorrect.\n"
           "You must identify the anomaly to restore the timeline.\033[0m\n");

    printf("\n\n\033[33m\033[1mCIPHERT XII\033[0m\n\n");
    printf("\033[36mEnter 1- 1300 BCE - The forging of the Chrono-Ankh in Ancient Egypt.\n"
           "Enter 2- 900 CE The Viking Age, where the Time Rune was hidden.\n"
           "Enter 3- 1600 CE The Samurai Eclipse, where the Hourglass of Shogun's Fate was tested.\n"
           "Enter 4- 1912 CE The sinking of the Titanic.\n"
           "Enter 5- 2099 CE The AI Wars, where the Neural AI Network collapsed.\033[0m\n");
    printf("\033[36mEnter answer:\033[0m");

    int ci12;
    scanf("%d", &ci12);
    if(ci12 == 3) {
        printf("\033[32mYour answer is CORRECT!!!\033[0m\n");
        
    } else {
        wd();
        playsound5();
        printf("\033[31mYour answer is INCORRECT restart the era\033[0m\n");
        (*l)--;
        if (*l <= 0) {
            lose();
            printf("\033[31mYou don't have sufficient lives left, so you can't enter this era anymore, and your existence is no more.\033[0m\n");
            printf("\033[31m\t\t\t\t\t\t\t\t\t\t\t\t******YOUR MISTAKE IS UNFORGIVABLE******\033[0m\n");
            return 0;
        }
        printf("\033[31mRestarting era...\033[0m\n");
                continue;
    }

    printf("\033[30mCorrecting the sequence aligns the timeline, causing the metallic plate to dissolve into light, but leaving a\n"
           "clue behind on another metallic plate.\n"
           "The hidden telescope in the crow's nest activates, revealing ghostly echoes of the past-the moment when the\n"
           "iceberg was spotted.\033[0m\n");

    printf("\033[30mInside the wireless communication room, you find a wooden tablet, its surface worn but still bearing the inscription,\n"
           "of Kurogane the mystical guardian from the Samurai Eclipse era. The message reads:\033[0m\n\n");
    printf("\033[34m\"Balance the past and future, or be lost in the void.\"\033[0m\n");
    printf("\033[30mThe Titanic is on the brink of disaster, yet time itself is fractured. The distorted radio signals echo through the room,\n"
           "repeating fragments of distress calls-but something's wrong. The messages are out of order, as if history itself is misaligned.\n"
           "You must recall the Threefold Challenges from the Samurai Eclipse era and apply them to the Titanic's timeline.\033[0m\n");

    printf("\n\n\033[33m\033[1mCIPHERT XIII\033[0m\n\n");
    printf("\033[33mThe radio plays three overlapping transmissions:\033[0m\n");
    printf("\033[30m1. The ship is sinking-this may be our final message!\n"
           "2. Passengers are being evacuated-lifeboats are filling fast!\n"
           "3. We have struck an iceberg-requesting immediate assistance!\033[0m\n\n");

    printf("\033[30m(While answering write sequence of index number representing messages in correct order without whitespace)\n\n"
           "You must follow the natural sequence of events- Applying the Samurai Eclipse Challenge\033[0m\n");
    printf("\033[30mThe second challenge in the Samurai Eclipse was Balancing Light and Shadow-choosing between:\033[0m\n");
    printf("\033[36m1. Altering history\n"
           "2. Preserving it correcting the order\033[0m\n");
    printf("\033[36mEnter your choice:\033[0m");

    int c1;
    scanf("%d", &c1);
    if(c1 == 1) {
        wd();
        playsound5();
        printf("\033[31mThe timeline shifts, and the Titanic may survive—but at the cost of an unknown paradox.\033[0m\n");
        printf("\033[31mRestart the era\033[0m\n");
        (*l)--;
        if (*l <= 0) {
            lose();
            printf("\033[31mYou don't have sufficient lives left, so you can't enter this era anymore, and your existence is no more.\033[0m\n");
            printf("\033[31m\t\t\t\t\t\t\t\t\t\t\t\t******YOUR MISTAKE IS UNFORGIVABLE******\033[0m\n");
            return 0;
        }
       printf("\033[31mRestarting era...\033[0m\n");
                continue;
    } else if(c1 == 2) {
        printf("\033[30mSolve Cipher 13\033[0m\n");
        printf("\033[36mEnter answer:\033[0m");
        int ci13;
        scanf("%d", &ci13);
        if(ci13 == 321) {
            printf("\033[32mYour answer is CORRECT!!!\033[0m\n");

            printf("\033[30mHistory remains intact, and the Titanic starts to sink as it was meant to be.\n"
                   "As everything starts to follow timeline the another clue echoes\033[0m\n");
        } else {
            wd();
            playsound5();
            printf("\033[31mYour answer is INCORRECT\n"
                   "The timeline shifts, and the Titanic may survive-but at the cost of an unknown paradox.\n"
                   "Restart the era\033[0m\n");
            (*l)--;
            if (*l <= 0) {
                lose();
                printf("\033[31mYou don't have sufficient lives left, so you can't enter this era anymore, and your existence is no more.\033[0m\n");
                printf("\033[31m\t\t\t\t\t\t\t\t\t\t\t\t******YOUR MISTAKE IS UNFORGIVABLE******\033[0m\n");
                return 0;
            }
           printf("\033[31mRestarting era...\033[0m\n");
                continue;
        }
    } else {
        wd();
        playsound5();
        printf("\033[31mYou choose an invalid choice\n"
               "Restart the era\033[0m\n");
        (*l)--;
        if (*l <= 0) {
            lose();
            printf("\033[31mYou don't have sufficient lives left, so you can't enter this era anymore, and your existence is no more.\033[0m\n");
            printf("\033[31m\t\t\t\t\t\t\t\t\t\t\t\t******YOUR MISTAKE IS UNFORGIVABLE******\033[0m\n");
            return 0;
        }
        printf("\033[31mRestarting era...\033[0m\n");
                continue;
    }

    printf("\033[30mThe final clue leads you to the grand staircase, where the Chrono-Locket is rumored to be hidden.\n"
           "A plaque on the wall contains the last question\033[0m\n");

    printf("\n\033[33m\033[1m~~CIPHER XIV~~\033[0m\n\n");
    printf("\033[33m\"A staircase grand, of oak so fine, now lies in darkness, in the brine. What am I?\"\033[0m\n");
    printf("\033[36mEnter answer:\033[0m");

    char ci14[50];
    scanf("%s", ci14);
    if(strcmp(ci14, "GRANDSTAIRCASE") == 0) {
        printf("\033[32mYour answer is correct\033[0m\n");
        printf("\033[30mNow you unlock the final compartment containing the Chrono-Locket.\033[0m\n");
    } else {
        wd();
        playsound5();
        printf("\033[31mYour answer is incorrect restart the era\033[0m\n");
        (*l)--;
        if (*l <= 0) {
            lose();
            printf("\033[31mYou don't have sufficient lives left, so you can't enter this era anymore, and your existence is no more.\033[0m\n");
            printf("\033[31m\t\t\t\t\t\t\t\t\t\t\t\t******YOUR MISTAKE IS UNFORGIVABLE******\033[0m\n");
            return 0;
        }
        printf("\033[31mRestarting era...\033[0m\n");
                continue;
    }

    printf("\033[30mAs you approach the hidden compartment, you spot Rose DeWitt Bukater and James Dawson. They have been watching you, sensing that you are not from their time.\033[0m\n");
    printf("\033[30mRose offers to help you retrieve the Chrono-Locket, but in return, she asks for something that will change history\033[0m\n");
    printf("\033[34mShe wants you to prevent the Titanic from sinking.\033[0m\n");

    printf("\n\033[36mMake a choice:\n"
           "Enter 1 If you agree to help Rose\n"
           "Enter 2 If you refuse\033[0m\n");
    printf("\033[36mEnter your choice:\033[0m\n");

    int c2;
    scanf("%d", &c2);
    if(c2 == 1) {
        lose();
        printf("\033[31mYou alter history, but the paradox collapses, trapping you in the Titanic forever.\033[0m\n");
        return 0;
    } else if(c2 == 2) {
        printf("\033[32mYou made the right choice\033[0m\n");
    } else {
        wd();
        playsound5();
        printf("\033[31mYou choose an invalid choice\n"
               "Restart the era\033[0m\n");
        (*l)--;
        if (*l <= 0) {
            lose();
            printf("\033[31mYou don't have sufficient lives left, so you can't enter this era anymore, and your existence is no more.\033[0m\n");
            printf("\033[31m\t\t\t\t\t\t\t\t\t\t\t\t******YOUR MISTAKE IS UNFORGIVABLE******\033[0m\n");
            return 0;
        }
       printf("\033[31mRestarting era...\033[0m\n");
                continue;
    }

    printf("\033[30mRose steps back, her expression unreadable.\033[0m\n");
    printf("\033[34m\"If you won't change history, then prove you understand it,\"\033[0m\n");
    printf("\033[30mShe says, placing the Chrono-Locket inside a locked chest.\033[0m\n");
    printf("\033[30mThe lock requires a four-digit code, and the only clue is written on the side:\033[0m\n");

    printf("\n\033[33m\033[1m~~CIPHER XV~~\033[0m\n");
    printf("\033[33m\"A marvel of steel, a palace afloat, yet fate was sealed by nature's gloat.\n"
           "Its lifeboats were few, its passengers many-subtract the vessels, and find my memory.\n"
           "A number remains, lost in time's tide-what is it?\"\033[0m\n");
    printf("\033[36mEnter answer:\033[0m");

    char ci15[50];
    scanf("%s", ci15);
    if(strcmp(ci15, "1892") == 0) {
        printf("\033[32mYour answer is correct\033[0m\n");
    } else {
        lose();
        printf("\033[31mYour answer is incorrect you loose the game\033[0m\n");
        return 0;
    }

    printf("\033[30mAs the ship begins to sink, you activate the Chrono-Locket, preparing to return to your own era.\033[0m\n");
    printf("\033[30mThen, SKULd appears-the mysterious traveler who has followed you through every era.\033[0m\n");
    printf("\033[34mReveals the hidden truth:\n"
           "\"Time is not linear. It is a cycle, repeating endlessly. Every choice you make echoes across eternity.\"\n"
           "You have seen fragments of the past, but you have yet to understand the future.\"\033[0m\n");
    printf("Before you can ask what She means, A portal opens, pulling you back to your own time.\033[0m\n");

    return 1;
}}
  int era()//All era's description
                { 
                    playsound6();
                    printf("\n\033[93m\033[1mAncient Egypt(1300 BCE)-\n\033[0m");//All about ancient egypt and chrono ankh
                    printf("\n\033[93m\033[1mFirst Era\n\033[0m\n\n\033[91m\033[90m\033[3mYou will step into the heart of Ancient Egypt,\n"
                          "where golden sands stretch endlessly beneath the blazing sun.\n" 
                          "The Chrono-Ankh, an artifact capable of halting time itself,\n"
                          "remains buried within the labyrinthine tombs of forgotten pharaohs.\n"
                          "Shadows whisper secrets of lost dynasties and timeless curses,\n"
                          "reminding all who seek its power that history is not to be rewritten\n"
                          "lightly.\n\033[0m\n\n");
                    printf("\n\033[93m\033[1mViking Age(900 CE)-\n\033[0m");//All about viking age and the time's rune
                    printf("\n\033[93m\033[1mSecond Era\n\033[0m\n\n\033[91m\033[90m\033[3mYou will find yourself among snow-laden fjords, surrounded by\n"
                           "towering wooden fortresses and the echoes of distant battle horns.\n"
                           "The Time Rune, hidden deep within Jarl Astrid's fortress, is said to\n"
                           "hold the key to bending fate-but only for those who prove their worth.\n"
                           "Secrets of Odin's wisdom and Norse prophecy intertwine, as the player\n"
                           "navigates a world of war, honor, and destiny.\n\033[0m\n\n");
                    printf("\n\033[93m\033[1mSmaurai Eclipse(1582 CE)-\n\033[0m");//All about samurai eclipse and hourglass of shogun's fate
                    printf("\n\033[93m\033[1mThird Era\n\033[0m\n\n\033[91m\033[90m\033[3mYou will arrive in 16th-century Japan, drawn into the \n"
                           "Forsaken Shrine's mystery, where the legendary Hourglass of Shogun's Fate\n"
                           " lies hidden. The relic can undo a single moment, but not without consequences.\n\033[0m\n");
                    printf("\n\n\033[93m\033[1mAI Wars(2099 CE)-\n\033[0m");
                    printf("\n\033[93m\033[1m\nFourth Era\n\n\033[91m\033[0m\033[90m\033[3mYou will arrive in future. Now The world is no longer controlled by humans.\n"
                         "In 2099, rogue AI systems have taken over, rewriting reality through digital manipulation.\n"
                         "The once-powerful corporations that ruled the cyber age have collapsed,\n"
                         "leaving behind a chaotic battlefield of machine-driven warfare.\n\033[0m\n");
                    printf("\n\n\033[93m\033[1mThe Titanic Echo(1912 CE)-\n\033[0m");
                    printf("\n\033[93m\033[1m\nFifth Era\n\033[0m\n\033[91m\033[90m\033[3mYou will arrive in 1912 aboard in The Titanic. The Chrono-Locket, hidden\n"
                           "within the ship, holds the key to escape-but using it means choosing between preserving\n"
                           "history or rewriting fate. Rose and James offer help, but Rose demands a price-a change\n"
                           "that could alter destiny itself.\n\033[0m\n");
                           int er;
                           printf("\033[30mEnter 1 to enter Ancient Egypt\n\033[0m");
                           while(er!=1)
                           {
                           printf("Enter your choice:\n");
                           scanf("%d",&er);
                          if(er==1)
                          {
                            printf("\033[30mGet ready to play the game \033[0m\n");
                            return 1;  
                        }else{
                        printf("\033[31mYou choose an invalid choice\033[0m\n");
                    continue    ;
                    }}system("cls");
}


