// Name: Abdul Wasay                    Roll no: 22i-1198                          Assignment#4
#include<iostream>
#include<time.h>
using namespace std;

int main()
{   const int length=100;
    char words[length],guess_word[25],guess_user[25],guess;
    int k=0,j=0,n,word_length[15]={0},count=0, word_count=0,starting_index[10],length_guessword=0,tries=8;
    bool choice;

    cout<<"\t\t---Welcome to hangman!---\n\n";
    cout<<"Enter list of words(comma separated): ";
    cin.get(words,length);
    
    /*Calculating the starting indexes of each word in the array, 
    /number of letters in each word and the total number of words*/
    
    starting_index[0]=0;
    for(int i=0; i<length; i++)
    {   
        
        if(words[i]=='\0')
        break;

        else if(words[i]!=',')
        {
            word_length[k]=++count;    //word length is the length of each word
            continue;
        }
        else
        {   
            word_count++;     //word count is the number of words entered by the user
            count=0;
            k++;
            word_length[k]=0;
            j++;
            starting_index[j]=i+1;
        }
        
    }
    //generating a random starting index of the list of words
    n=starting_index[rand()%word_count];


    j=0;
    while(words[n]!=',')
    {   
        if(words[n]=='\0')
        break;
        guess_word[j]=words[n];    //storing the random guess word from the list of words
        length_guessword++;        //determining the length of the guess word
        n++;
        j++;
    }

    //replacing each letter in the word that the user will guess with an '_'
    cout<<"Letters you have to guess: ";
    for(int i=0; i<length_guessword; i++)
    {
        guess_user[i]='_';
        cout<<guess_user[i];
    }
    
    cout<<endl;
    
    while(tries>=0)
    {   
        count=0;   //counter for determining the length of the letters entered by the user
        choice=false;
        cout<<"====================================================\n";
        for(int k=0; k<length_guessword; k++)
            if(guess_word[k]==guess_user[k])    //this loop will check if the entered guess word by the user is equal to the word chosen
                count++;
            
        if(count==length_guessword)
        {
            cout<<"             Congratulations! You won!";
            cout<<endl<<"====================================================\n";
            break;
        }
        if(tries==1)   
        {   
            cout<<"You ran out of tries! The correct word was: ";
            for(int l=0; l<length_guessword; l++)
            cout<<guess_word[l];
            cout<<endl<<"====================================================\n";
            break;
        }
        

        cout<<"Enter your guess: ";
        cin>>guess;
        cout<<"\nProgress:";
        
        
        /*this loop determines if the guesses entered by the user 
        matches any of the letters of the guess word*/
        
        for(int i=0; i<length_guessword; i++)   
        {       
                if(guess==guess_word[i])
                {   
                    guess_user[i]=guess;
                    choice=true;
                }
            
        }
        
        for(int j=0; j<length_guessword; j++)  //this loop prints out the correct guesses + the '_' in place of unguessed words
        cout<<guess_user[j]<<' ';
        cout<<endl<<endl;
        
        if(choice==false)
        tries--;           //reduces the number of tries left
        
        switch(tries)
        {
            case 1:
            {
                cout<<"\t+---+"<<endl;
                cout<<"\t|   |"<<endl;
                cout<<"\tO   |"<<endl;
                cout<<"       /|\\  |"<<endl;
                cout<<"       / \\  |"<<endl;
                cout<<"\t    |"<<endl;
                cout<<"\t======="<<endl;
                break;
            }
            case 2:
            {
                cout<<"\t+---+"<<endl;
                cout<<"\t|   |"<<endl;
                cout<<"\tO   |"<<endl;
                cout<<"       /|\\  |"<<endl;
                cout<<"       /    |"<<endl;
                cout<<"\t    |"<<endl;
                cout<<"\t======="<<endl;
                break;
            }
            case 3:
            {
                cout<<"\t+---+"<<endl;
                cout<<"\t|   |"<<endl;
                cout<<"\tO   |"<<endl;
                cout<<"       /|\\  |"<<endl;
                cout<<"\t    |"<<endl;
                cout<<"\t    |"<<endl;
                cout<<"\t======="<<endl;
                break;
            }
            case 4:
            {
                cout<<"\t+---+"<<endl;
                cout<<"\t|   |"<<endl;
                cout<<"\tO   |"<<endl;
                cout<<"       /|   |"<<endl;
                cout<<"\t    |"<<endl;
                cout<<"\t    |"<<endl;
                cout<<"\t======="<<endl;
                break;
            }
            case 5:
            {
                cout<<"\t+---+"<<endl;
                cout<<"\t|   |"<<endl;
                cout<<"\tO   |"<<endl;
                cout<<"\t|   |"<<endl;
                cout<<"\t    |"<<endl;
                cout<<"\t    |"<<endl;
                cout<<"\t======="<<endl;
                break;
            }
            case 6:
            {
                cout<<"\t+---+"<<endl;
                cout<<"\t|   |"<<endl;
                cout<<"\tO   |"<<endl;
                cout<<"\t    |"<<endl;
                cout<<"\t    |"<<endl;
                cout<<"\t    |"<<endl;
                cout<<"\t======="<<endl;
                break;
            }
            case 7:
            {
                cout<<"\t+---+"<<endl;
                cout<<"\t|   |"<<endl;
                cout<<"\t    |"<<endl;
                cout<<"\t    |"<<endl;
                cout<<"\t    |"<<endl;
                cout<<"\t    |"<<endl;
                cout<<"\t======="<<endl;
                break;
            }
            default:
            {
                cout<<"\t+---+"<<endl;
                cout<<"\t    |"<<endl;
                cout<<"\t    |"<<endl;
                cout<<"\t    |"<<endl;
                cout<<"\t    |"<<endl;
                cout<<"\t    |"<<endl;
                cout<<"\t======="<<endl;
                break;
            }
        cout<<"====================================================";    

        }
    }




return 0;
}
    

    




