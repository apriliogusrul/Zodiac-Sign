/*

WESTERN ASTROLOGY STAR SIGN DATES :

Aries (March 21-April 19)
Taurus (April 20-May 20)
Gemini (May 21-June 20)
Cancer (June 21-July 22)
Leo (July 23-August 22)
Virgo (August 23-September 22)
Libra (September 23-October 22)
Scorpio (October 23-November 21)
Sagittarius (November 22-December 21)
Capricorn (December 22-January 19)
Aquarius (January 20-February 18)
Pisces (February 19-March 20) 

*/

#include "iostream"
using namespace std;

int main(){
    int day, month;
    string sign;

    cout << "Input the day: ";
    cin >> day;
    if( day <= 0 || day >= 31 ){
        cout << "Invalid day, must be between 1 to 31";
        return -1;
    }
    cout << "Input the month: ( input in number, ex: April = 4 ) ";
    cin >> month;
    if( month <= 0 || month >= 12 ){
        cout << "Invalid month, must be between 1 to 12";
        return -1;
    }
    
    switch ( month )
    {
    case 1:
        cout << day << " January";
        break;
    case 2:
        cout << day << " February";
        break;
    case 3:
        cout << day << " March";
        break;
    case 4:
        cout << day << " April";
        break;
    case 5:
        cout << day << " May";
        break;
    case 6:
        cout << day << " June";
        break;
    case 7:
        cout << day << " July";
        break;
    case 8:
        cout << day << " August";
        break;
    case 9:
        cout << day << " September";
        break;
    case 10:
        cout << day << " October";
        break;
    case 11:
        cout << day << " November";
        break;
    case 12:
        cout << day << " December";
        break;
    
    default:
        break;
    }

    if ( month == 12 ){
         
        if ( day < 22 )
            sign = "Sagittarius";
        else
            sign ="Capricorn";
    }
         
    else if ( month == 1 ){
        if ( day < 20 )
            sign = "Capricorn";
        else
            sign = "Aquarius";
    }
         
    else if ( month == 2 ){
        if ( day < 19 )
            sign = "Aquarius";
        else
            sign = "Pisces";
    }
         
    else if( month == 3 ){
        if ( day < 21 )
            sign = "Pisces";
        else
            sign = "Aries";
    }
    else if (month == 4){
        if ( day < 20 )
            sign = "Aries";
        else
            sign = "Taurus";
    }
         
    else if ( month == 5 ){
        if ( day < 21 )
            sign = "Taurus";
        else
            sign = "Gemini";
    }
         
    else if( month == 6 ){
        if ( day < 21 )
            sign = "Gemini";
        else
            sign = "Cancer";
    }
         
    else if (month == 7){
        if ( day < 23 )
            sign = "Cancer";
        else
            sign = "Leo";
    }
         
    else if( month == 8 ){
        if ( day < 23 )
            sign = "Leo";
        else
            sign = "Virgo";
    }
         
    else if ( month == 9 ){
        if ( day < 23 )
            sign = "Virgo";
        else
            sign = "Libra";
    }
         
    else if ( month == 10 ){
        if ( day < 23 )
            sign = "Libra";
        else
            sign = "Scorpio";
    }
         
    else if ( month == 11 ){
        if ( day < 22 )
            sign = "Scorpio";
        else
            sign = "Sagittarius";
    }
         
    cout << endl;

    cout << "Your zodiac is " << sign << endl;

    return 0;


}
