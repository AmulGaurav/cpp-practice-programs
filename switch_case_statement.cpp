#include <iostream>
using namespace std;

int main()
{
    int age;
    
    cout << "Enter your age:";
    cin  >> age;
    cout << "\n\nYou entered the age of " 
         << age << ". \n\nNow:\n";
    
    if (age >= 65)
        age = 65;
    if ((age >= 36) && (age < 65))
        age = 36;
    if ((age >= 24) && (age < 35))
        age = 24;
    if ((age >= 21) && (age <24))
        age = 21;
    if ((age >=19) && (age < 21))
        age = 19;
    if ((age >= 8) && age < 12)
        age = 8;
    if ((age >= 5) && (age < 8))
        age = 5;
    if ((age >= 0) && (age < 5))
        age = 0;
        
        
    switch (age) {
        case 65:
            cout << "You can apply for 100% of SS and"
                 << " senior descouts." << endl;
        case 36:
            cout << "You are late to join military."
                 << endl;
        case 35:
            cout << "You meet the minimum age to run"
                 << " for President of the United"
                 << " States." 
                 << endl;
        case 24:
            cout << "You must be filing IRS if never"
                 << " before, even if you are a"
                 << " student." << endl;
        case 21:
            cout << "You may drink liquor.\n"
                 << "You may Enter a gambling"
                 << " establishment and gamble.\n"
                 << "You may rent a car.\n"
                 << "You may purchase firearm." 
                 << endl;
        case 19:
            cout << "Your parents lose IRS deduction,"
                 << " unless you are a full time"
                 << " student, which extends the age"
                 << " to 24."
                 << endl;
        case 18:
            cout << "You may travel outside the US"
                 << " without your parents.\n"
                 << "You may rent hotel/motel room.\n"
                 << "You may apply for credit card.\n"
                 << "You may open checking account.\n"
                 << "You may take out a loan or"
                 << " mortgage.\n"
                 << "You may sign a legal contract.\n"
                 << "You may give own consent for"
                 << " medical procedure.\n"
                 << "You can take a body modification "
                 << " without consent.\n"
                 << "You can join military without"
                 << " consent (or be drafted if"
                 << " applicable).\n"
                 << "You may vote.\n"
                 << "You may marry.\n"
                 << "You may view and buy porn.\n"
                 << "You may buy and Smoke cigarettes."
                 << "\nYou may purchase Lottery"
                 << " tickets.\n"
                 << "You may legally own a property.\n"
                 << "You may drink liquor (military)."
                 << "\nYou may Work in a liquor"
                 << " serving establishment (with"
                 << " restrictions untill 21).\n"
                 << "You have right to trial by jury."
                 << "\nYou have the right to have"
                 << " legal representation of choice,"
                 << " without parental consent." 
                 << endl;
        case 17:
            cout << "You may view R-rated films.\n"
                 << "You may join military with"
                 << " consent of your parents." 
                 << endl;    
        case 16:
            cout << "You may get a driver's license." 
                 << endl;   
        case 15:
            cout << "You may get learners permit to"
                 << " drive and may drive with adult"
                 << " in vehicle." << endl;
        case 14:
            cout << "You may choose abortion without"
                 << " consent (in some states up to"
                 << " 18).\n"
                 << "You may have a body modification"
                 << " with parental consent." << endl;
        case 13:
            cout << "You may apply for emancipation in"
                 << " most states." << endl;
        case 12:
            cout << "Most airlines may allow you to"
                 << " travel alone." << endl;
        case 8:
            cout << "You meet with legal age to know"
                 << " right from wrong, lie vs.truth"
                 << " in court of law." << endl;
        case 5:
            cout << "You may enter public (or private)"
                 << " school." << endl;
        case 0:
            cout << "You may apply for Social Security"
                 << " Number." << endl;
    }

    return 0;
}