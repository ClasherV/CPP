#include <iostream>
using namespace std;
int main()
{
    char Character;
    cout<<"Enter a Character (Alphabet only): ";
    cin>>Character;
    if((Character=='a'||Character=='e'||Character=='i'||Character=='o'||Character=='u')||(Character=='A'||Character=='E'||Character=='I'||Character=='O'||Character=='U'))
    {
        cout<<"Entered Character: "<<Character<<" is a Vowel";
    }
    else if((Character>='a'&&Character<='z')||(Character>='A'&&Character<='Z'))
    {
        cout<<"Entered Character: "<<Character<<" is a Consonant";
    }
    return 0;
}

// O/p 1: Enter a Character (Alphabet only): a
//        Entered Character: a is a Vowel
//
// O/p 2: Enter a Character (Alphabet only): A
//        Entered Character: A is a Vowel
//
// O/p 3: Enter a Character (Alphabet only): c
//        Entered Character: c is a Consonant
//
// O/p 4: Enter a Character (Alphabet only): C
//        Entered Character: C is a Consonant 