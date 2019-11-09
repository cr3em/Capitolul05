#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    char sir[20];
    cout << "Introdu sirul de caratere: \n";

    for(int i = 0; i < 20; ++i){
        cin >> sir[i];
    }

    cout << "Sir introdus [ ";
    for(int i = 0; i < 20; ++i){
        cout << sir[i] << " ";
    }
    cout << " ]\n";

    for(int i = 0; i < 20; ++i){
        if(islower(sir[i]))
            sir[i] = toupper(sir[i]);
        else if (isupper(sir[i]))
            sir[i]  = tolower(sir[i]);
    }

    cout << "Sirul inversat [ ";
    for(int i = 0; i < 20; ++i){
        cout << sir[i] << " ";
    }
    cout << " ]\n";

    return 0;
}
