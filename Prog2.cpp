#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "timer.h" 
#include "binarySearchTree.h"
#include "binaryNode.h"
#include "misspelledV.h"

using namespace std;

//declaring functions and data structures
string cleanWord(string wordD);
binarySearchTree<string> dictionaryTree1;
binarySearchTree<string> dictionaryTree2;
binarySearchTree<string> dictionaryTree3;
binarySearchTree<string> dictionaryTree4;


int main()
{

    Timer tim;
    
    //reading the dictionary
    int dictionarySize = 0;
    string tmp;

    ifstream dictFile;
    dictFile.open("dict.txt");
    
    while(dictFile >> tmp)
    {
        tmp = cleanWord(tmp);
        
        if(tmp[0] == 'e')
            dictionaryTree1.insert(tmp);
        else if(tmp[0] == 't')
            dictionaryTree2.insert(tmp);
        else if(tmp[0] == 'a')
            dictionaryTree3.insert(tmp);
        else if(tmp[0] == 'o')
            dictionaryTree1.insert(tmp);
        else if(tmp[0] == 'i')
            dictionaryTree2.insert(tmp);
        else if(tmp[0] == 'n')
            dictionaryTree3.insert(tmp);
        else if(tmp[0] == 's')
            dictionaryTree1.insert(tmp);
        else if(tmp[0] == 'r')
            dictionaryTree2.insert(tmp);
        else if(tmp[0] == 'h')
            dictionaryTree3.insert(tmp);
        else if(tmp[0] == 'l')
            dictionaryTree1.insert(tmp);
        else if(tmp[0] == 'd')
            dictionaryTree2.insert(tmp);
        else if(tmp[0] == 'c')
            dictionaryTree3.insert(tmp);
        else if(tmp[0] == 'u')
            dictionaryTree1.insert(tmp);
        else if(tmp[0] == 'm')
            dictionaryTree2.insert(tmp);
        else if(tmp[0] == 'f')
            dictionaryTree3.insert(tmp);
        else if(tmp[0] == 'p')
            dictionaryTree1.insert(tmp);
        else if(tmp[0] == 'g')
            dictionaryTree2.insert(tmp);
        else if(tmp[0] == 'u')
            dictionaryTree3.insert(tmp);
        else if(tmp[0] == 'y')
            dictionaryTree1.insert(tmp);
        else if(tmp[0] == 'b')
            dictionaryTree2.insert(tmp);
        else if(tmp[0] == 'v')
            dictionaryTree3.insert(tmp);
        else if(tmp[0] == 'k')
            dictionaryTree1.insert(tmp);
        else if(tmp[0] == 'x')
            dictionaryTree2.insert(tmp);
        else if(tmp[0] == 'j')
            dictionaryTree3.insert(tmp);
        else if(tmp[0] == 'q')
            dictionaryTree1.insert(tmp);
        else if(tmp[0] == 'z')
            dictionaryTree2.insert(tmp);
        else 
            dictionaryTree4.insert(tmp);



        dictionarySize++;
    }
    
    //starting the time
    tim.Start();

    //reading the book file and comparing to the dictionary
    string btmp;
    ifstream bookFile;
    vector<misspelledV*> bookV;

    bookFile.open("book.txt");

    //the number of skipped, misspelled, and matched words
    int skipped = 0; 
    int misspelled = 0;
    int matchNum = 0; 

    //keeping track of the number of compares
    long long int matchComp = 0;
    long long int missComp = 0; 
    long long int tempComp = 0;
    bool tracker;
    while(bookFile >> btmp)
    {
        btmp = cleanWord(btmp);
        if(btmp == "")
        {
        }
        else if(!isalpha(btmp[0]) || btmp[0] == '\"')
        {
            skipped++;
        }
        else
        {
            if(btmp[0] == 'e')
                tracker = dictionaryTree1.find(btmp, tempComp);
            else if(btmp[0] == 't')
                tracker = dictionaryTree2.find(btmp, tempComp);
            else if(btmp[0] == 'a')
                tracker = dictionaryTree3.find(btmp, tempComp);
            else if(btmp[0] == 'o')
                tracker = dictionaryTree1.find(btmp, tempComp);
            else if(btmp[0] == 'i')
                tracker = dictionaryTree2.find(btmp, tempComp);
            else if(btmp[0] == 'n')
                tracker = dictionaryTree3.find(btmp, tempComp);
            else if(btmp[0] == 's')
                tracker = dictionaryTree1.find(btmp, tempComp);
            else if(btmp[0] == 'r')
                tracker = dictionaryTree2.find(btmp, tempComp);
            else if(btmp[0] == 'h')
                tracker = dictionaryTree3.find(btmp, tempComp);
            else if(btmp[0] == 'l')
                tracker = dictionaryTree1.find(btmp, tempComp);
            else if(btmp[0] == 'd')
                tracker = dictionaryTree2.find(btmp, tempComp);
            else if(btmp[0] == 'c')
                tracker = dictionaryTree3.find(btmp, tempComp);
            else if(btmp[0] == 'u')
                tracker = dictionaryTree1.find(btmp, tempComp);
            else if(btmp[0] == 'm')
                tracker = dictionaryTree2.find(btmp, tempComp);
            else if(btmp[0] == 'f')
                tracker = dictionaryTree3.find(btmp, tempComp);
            else if(btmp[0] == 'p')
                tracker = dictionaryTree1.find(btmp, tempComp);
            else if(btmp[0] == 'g')
                tracker = dictionaryTree2.find(btmp, tempComp);
            else if(btmp[0] == 'u')
                tracker = dictionaryTree3.find(btmp, tempComp);
            else if(btmp[0] == 'y')
                tracker = dictionaryTree1.find(btmp, tempComp);
            else if(btmp[0] == 'b')
                tracker = dictionaryTree2.find(btmp, tempComp);
            else if(btmp[0] == 'v')
                tracker = dictionaryTree3.find(btmp, tempComp);
            else if(btmp[0] == 'k')
                tracker = dictionaryTree1.find(btmp, tempComp);
            else if(btmp[0] == 'x')
                tracker = dictionaryTree2.find(btmp, tempComp);
            else if(btmp[0] == 'j')
                tracker = dictionaryTree3.find(btmp, tempComp);
            else if(btmp[0] == 'q')
                tracker = dictionaryTree1.find(btmp, tempComp);
            else if(btmp[0] == 'z')
                tracker = dictionaryTree2.find(btmp, tempComp);
            else
                tracker = dictionaryTree4.find(btmp, tempComp);
            if(tracker == 1)
            {
                matchNum++;
                matchComp += tempComp;
                tempComp = 0;
                tracker = 0;
            }
            else
            {
                bookV.push_back(new misspelledV);
                bookV.at(misspelled) -> setWord(btmp);
                misspelled++;
                missComp += tempComp;
                tempComp = 0;
            }
        }
    }

    tim.Stop();

    cout << "dictionary Size: " << dictionarySize << "\n";
    cout << "Done checking and these are the results \n";
    cout << " Finished in time: " << tim.Time() << "\n";//setprecision(2) << tim.Time() << "\n";
    cout << " There are: " << matchNum << " words found in the dictionary\n";
    cout << matchComp  << " compares. Average : " << matchComp/matchNum << "\n";
    cout << "There are " << misspelled << " words NOT found in the dictionary\n"; 
    cout << missComp  << " compares. Average: " << missComp/misspelled << "\n";
    cout << "There are " << skipped << " words not checked.";
    
    //writing to the misspelled file
    ofstream missFile;
    string tempString;
    missFile.open("misspelled.txt");

    for(int i =0; i<bookV.size(); i++)
    {
        tempString = bookV.at(i)->getWord();
        missFile<< tempString << endl;
    }

    missFile.close();
}

string cleanWord(string word)
{
    string cleanW = "";
    for(int i =0; i< word.size(); i++)
    {
        if(isupper(word[i]))
        {
            word[i] = tolower(word[i]);
        }
        if(isalnum(word[i]))
        {
            cleanW = cleanW + word[i];
        }
        else if(word[i] == '\'')
        {
            cleanW = cleanW + word[i];
        }
    }
    
    //return word;
    return cleanW;
};