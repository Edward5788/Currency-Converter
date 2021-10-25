// Hashtag includes:
#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <string.h>
#include <string>
// End of hashtag includes

using namespace std;

void ClearScreen() { // This fdunction clears the screen
    cout << "\033[2J\033[1;1H";
}

void Aftermaths(string CurrencyName, string CurrencyName2, float TranslationAmount, float TotalAmount) {
    cout << "UYou have translated from " << CurrencyName << " to " << CurrencyName2 << endl;
    cout << "You translated " << TranslationAmount << CurrencyName << "'s to " << CurrencyName2 << endl;

    cout << "\nYour total amount now is " << TotalAmount << " " << CurrencyName2 << "'s " << endl;
}

void TranslationMathsGBP(string CurrencyName, string CurrencyName2, float TranslationAmount) {
    if (CurrencyName == "GBP" and CurrencyName2 == "USD") {
        float ConversionRate = 1.40;
        float TotalAmount = ConversionRate * TranslationAmount;
        Aftermaths(CurrencyName, CurrencyName2, TranslationAmount, TotalAmount);
    }
    else if (CurrencyName == "GBP" and CurrencyName2 == "EUR") {
        float ConversionRate = 1.2;
        float TotalAmount = ConversionRate * TranslationAmount;
        Aftermaths(CurrencyName, CurrencyName2, TranslationAmount, TotalAmount);
    }
    else if (CurrencyName == "GBP" and CurrencyName2 == "INR") {
        float ConversionRate = 103.3;
        float TotalAmount = ConversionRate * TranslationAmount;
        Aftermaths(CurrencyName, CurrencyName2, TranslationAmount, TotalAmount);
    }
    else if (CurrencyName == "GBP" and CurrencyName2 == "AUD") {
        float ConversionRate = 1.8;
        float TotalAmount = ConversionRate * TranslationAmount;
        Aftermaths(CurrencyName, CurrencyName2, TranslationAmount, TotalAmount);
    }
    else if (CurrencyName == "GBP" and CurrencyName2 == "CAD") {
        float ConversionRate = 1.7;
        float TotalAmount = ConversionRate * TranslationAmount;
        Aftermaths(CurrencyName, CurrencyName2, TranslationAmount, TotalAmount);
    }
    else if (CurrencyName == "GBP" and CurrencyName2 == "SGD") {
        float ConversionRate = 1.86;
        float TotalAmount = ConversionRate * TranslationAmount;
        Aftermaths(CurrencyName, CurrencyName2, TranslationAmount, TotalAmount);
    }
} // End } of void TranslationMathsGBP

void TranslationMaths(string CurrencyName, string CurrencyName2, float TranslationAmount) {

    if (CurrencyName == "GBP") {
        TranslationMathsGBP(CurrencyName, CurrencyName2, TranslationAmount);
    }
    /*
    else if (CurrencyName == "USD") {
        TranslationMathsUSD(CurrencyName, CurrencyName2, TranslationAmount);
    }
    */


} // End } of void TranslationMaths

void CurrencyNamer(string CurrencyName, int AmountOfCurrencys) {
    int CurrencyShortCutsCounter = 0;

    ClearScreen();

    string CurrencyShortCuts[] = { "USD", "EUR", "GBP", "INR", "AUD", "CAD", "SGD" }; // Add new Currency short name here

    string CurrencyNames[] = { "US Dollar", "Euro", "British Pound", "Indian Rupee", "Australian Dollar", "Canadian Dollar", "Singapore Dollar" }; // Add new currency full name here
    // AmountOfCurrencys is defined in the beginning of int main()

    /*
    The 3 variables (some are lists), that you change when adding another currency are: CurrencyShortCuts, CurrencyNames, AmountOfCurrencys
    (The currency's above)
    */

    int OverwritingProofWhileLoop = 1;

    int CountingCurrencyNameNumber = 1; // This gives the output of the currency ful name, this is the number for it
    cout << "\n\n\n\n" << endl;
    ClearScreen();
    int CurrencyOutputWhileLoop = 1;
    while (CurrencyOutputWhileLoop < 3) {

        string LastUsedCurrency;
        ClearScreen();
        while (OverwritingProofWhileLoop < 3) {
            if (CurrencyShortCuts[CurrencyShortCutsCounter] == CurrencyName) {
                CurrencyShortCutsCounter++;

                OverwritingProofWhileLoop = 4;
                // This should avoid writing the currency like GBP to GBP for example
            } // End } of if (CurrencyShortCuts[CurrencyShortCutsCounter] == StoredCurrencyName)
            else {
                break;
            } // End } of else statement
        } // End } of while loop


        cout << CountingCurrencyNameNumber << ". "; // This adds 1. (for example) just before it says the currency
        cout << CurrencyName << " to " << CurrencyShortCuts[CurrencyShortCutsCounter] << " (" << CurrencyNames[CurrencyShortCutsCounter] << ")" << endl;

        CurrencyShortCutsCounter++;
        CountingCurrencyNameNumber++; // For a number going up

        /*
        This while loop here constantly loops around until the counter above
        is equal to the amount of currency's I have.
        */



        if (CurrencyShortCutsCounter >= AmountOfCurrencys) {
            CurrencyOutputWhileLoop = 4;
        } // End }of while loop

    } // End } of while loop

    // Code contuines from here
     string CurrencyName2;
     cout << "\nEnter a currency to convert to: " << endl;
     cin >> CurrencyName2;

     float TranslationAmount;
     cout << "Enter the amount you would like to tanslate: " << endl;
     cin >> TranslationAmount;

     TranslationMaths(CurrencyName, CurrencyName2, TranslationAmount);
    
} // End } of CurrencyNamer(string CurrencyName)






/*
void TranslationMathsUSD(string CurrencyName, string CurrencyName2, float TranslationAmount) {

} // End } of void TranslationMathsUSD
*/
void Validation(int CurrencyChoice) { // Input validator
    while (cin.good() == false) { // Works same as while(!cin.good())
        cout << "Invalid input" << endl;
        Sleep(1);
        ClearScreen();
    } // End } of while
} // End } of void Validation





void MenuAndChosenCurrency(int AmountOfCurrencys) {
    int CurrencyChoice;

    cout << "Select a currency to translate to another:\n\n " << endl;

    // Currency list:
    cout << "1. GBP (British Pound) to ..." << endl;
    cout << "2. USD (American Dollar) to ..." << endl;
    cout << "3. EUR (Euro) to ..." << endl;
    cout << "4. INR (Indian Rupee) to ..." << endl;
    cout << "5. AUD (Australian Dollar) to ..." << endl;
    cout << "6. CAD (Canadian Dollar) to ..." << endl;
    cout << "7. SGD (Singapore Dollar) to ..." << endl;

    cout << "\n\nEnter the number of the currency: " << endl;

    int WrongAttempts1 = 0; // Setting number of wrong attemps

    bool ValidInput;
    int CurrencyChoiceWhileLoop = 1; // Setting condition of while loop
    while (CurrencyChoiceWhileLoop < 3) {
        cin >> CurrencyChoice;
        while (cin.good() == false) { // Works same as while(!cin.good())
            cout << "Invalids input, try again." << endl;
            break;
        }  // End } of while cin.good() == false

        
        

        int MinimumNumberOfCurrencys = 1;
        // Max amount of currenys is the AmountOfCurrencys

        if (CurrencyChoice > AmountOfCurrencys) {
            cout << "The number you have entered is too big" << endl;
            Sleep(1);
            cout << "Try again." << endl;
            ClearScreen();
        } // End } of if if (CurrencyChoice > AmountOfCurrencys)
        else if (CurrencyChoice < MinimumNumberOfCurrencys) {
            cout << "The number you have entered is too small" << endl;
            Sleep(1);
            cout << "Try again." << endl;
            ClearScreen();
        } // End } of else if (CurrencyChoice < AmountOfCurrencys)

          CurrencyChoiceWhileLoop = 4;
          ClearScreen();
          //InputCurrencyMatch(CurrencyChoice, CurrencyName);

          string CurrencyName;
          if (CurrencyChoice == 1) {
              string CurrencyName = "GBP";
              CurrencyNamer(CurrencyName, AmountOfCurrencys);
          } // End } of if (CurrencyChoice == 1)
          else if (CurrencyChoice == 2) {
              string CurrencyName = "USD";
              CurrencyNamer(CurrencyName, AmountOfCurrencys);
          } // End } of else if (CurrencyChoice == 2)
          else if (CurrencyChoice == 3) {
              string CurrencyName = "EUR";
              CurrencyNamer(CurrencyName, AmountOfCurrencys);
          } // End } of else if (CurrencyChoice == 3)

          else if (CurrencyChoice == 4) {
              string CurrencyName = "INR";
              CurrencyNamer(CurrencyName, AmountOfCurrencys);
          } // End } of else if (CurrencyChoice == 4)

          else if (CurrencyChoice == 5) {
              string CurrencyName = "AUD";
              CurrencyNamer(CurrencyName, AmountOfCurrencys);
          } // End } of else if (CurrencyChoice == 5)

          else if (CurrencyChoice == 6) {
              string CurrencyName = "CAD";
              CurrencyNamer(CurrencyName, AmountOfCurrencys);
          } // End } of else if (CurrencyChoice == 6)
          else if (CurrencyChoice == 7) {
              string CurrencyName = "SGD";
              CurrencyNamer(CurrencyName, AmountOfCurrencys);
          } // End } of else if (CurrencyChoice == 7)
          else {
              cout << "\n\nDev Info - Error 3 (Restart the program)\n\n" << endl;
          } // End } of else statement 


    } // End } of while loop


} // End } of void MenuAndChosenCurrency


int main() {
    ClearScreen();
    int AmountOfCurrencys = 7, CurrencyChoice;

    MenuAndChosenCurrency(AmountOfCurrencys);

    return 0;
} // End } of int main()