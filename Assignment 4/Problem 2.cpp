#include <iostream>
#include <string>

using namespace std;

int main()
{
    int month, day, year;
    char again = 'Y';

    cout << "Welcome to Birthday Date Meaning Generator!\n";

    while (again == 'Y' || again == 'y')
    {
        // ----- INPUT -----
        cout << "Please enter the month of your birthday (1-12): ";
        cin >> month;

        cout << "Please enter the day of your birthday (1-31): ";
        cin >> day;

        cout << "Please enter the year of your birthday (2000-2023): ";
        cin >> year;


        // ----- MONTH MEANING -----
        string monthMeaning;

        switch (month)
        {
        case 1: monthMeaning = "January means Janus, the month of new beginnings"; break;
        case 2: monthMeaning = "February means purification"; break;
        case 3: monthMeaning = "March means Mars,  month of strength"; break;
        case 4: monthMeaning = "April means opening or blossoming"; break;
        case 5: monthMeaning = "May means Maia, month of growth"; break;
        case 6: monthMeaning = "June means Juno, month of protection"; break;
        case 7: monthMeaning = "July means Julius, month of leadership"; break;
        case 8: monthMeaning = "August means Augustus, generous month"; break;
        case 9: monthMeaning = "September means the 7th month in the old Roman calendar"; break;
        case 10: monthMeaning = "October means the 8th month (Roman origins)"; break;
        case 11: monthMeaning = "November means the 9th month"; break;
        case 12: monthMeaning = "December means the 10th month – month of closure"; break;
        default: monthMeaning = "Invalid month"; break;
        }


        // ----- DAY MEANING -----
        string dayMeaning;

        switch (day)
        {
        case 1: dayMeaning = "means Self-Starter"; break;
        case 2: dayMeaning = "means Diplomat"; break;
        case 3: dayMeaning = "means Creative Thinker"; break;
        case 4: dayMeaning = "means Organizer"; break;
        case 5: dayMeaning = "means Adventurer"; break;
        case 6: dayMeaning = "means Caregiver"; break;
        case 7: dayMeaning = "means Seeker"; break;
        case 8: dayMeaning = "means Powerhouse"; break;
        case 9: dayMeaning = "means Humanitarian"; break;
        default:
            dayMeaning = "Unique Day with a special meaning!";
            break;
        }


        // ----- YEAR MEANING (2000–2023) -----
        string yearMeaning;

        switch (year)
        {
        case 2000: yearMeaning = "You are a Millennial"; break;
        case 2001: yearMeaning = "You are energetic and forward-thinking"; break;
        case 2002: yearMeaning = "You value peace and cooperation"; break;
        case 2003: yearMeaning = "You are creative and expressive"; break;
        case 2004: yearMeaning = "You are hardworking and reliable"; break;
        case 2005: yearMeaning = "You are adaptable and curious"; break;
        case 2006: yearMeaning = "You are nurturing and supportive"; break;
        case 2007: yearMeaning = "You are analytical and observant"; break;
        case 2008: yearMeaning = "You are ambitious with strong willpower"; break;
        case 2009: yearMeaning = "You are idealistic and compassionate"; break;
        case 2010: yearMeaning = "You are independent and confident"; break;
        case 2011: yearMeaning = "You are intuitive and reflective"; break;
        case 2012: yearMeaning = "You are disciplined and responsible"; break;
        case 2013: yearMeaning = "You are expressive and imaginative"; break;
        case 2014: yearMeaning = "You are balanced and cooperative"; break;
        case 2015: yearMeaning = "You are adventurous and energetic"; break;
        case 2016: yearMeaning = "You are caring and loyal"; break;
        case 2017: yearMeaning = "You are deep thinking and spiritual"; break;
        case 2018: yearMeaning = "You are ambitious and driven"; break;
        case 2019: yearMeaning = "You are compassionate and giving"; break;
        case 2020: yearMeaning = "You are strong, resilient, and adaptable"; break;
        case 2021: yearMeaning = "You are hopeful and optimistic"; break;
        case 2022: yearMeaning = "You are creative and visionary"; break;
        case 2023: yearMeaning = "You are a future leader"; break;
        default:
            yearMeaning = "Invalid year";
            break;
        }


        // ----- OUTPUT -----
        cout << endl;
        cout << monthMeaning << endl;
        cout << "The " << day << "th of your month means " << dayMeaning << endl;
        cout << "The year " << year << " means " << yearMeaning << endl;


        // ----- ASK USER TO REPEAT -----
        cout << "\nWould you like to try another one? (Y/N): ";
        cin >> again;

        cout << endl;
    }

    cout << "Thanks for playing!" << endl;

    return 0;
}
