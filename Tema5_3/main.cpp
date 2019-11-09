#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    char sir[20];
    cout << "Introdu sirul de caratere: \n";

    cin >> sir;
    cout << "[ " << sir << " ]" << endl;

    for(int i = 0; i < 20; ++i){
        if(islower(sir[i]))
            sir[i] = toupper(sir[i]);
        else if (isupper(sir[i]))
            sir[i]  = tolower(sir[i]);
    }
    cout << "[ " << sir << " ]" << endl;

    return 0;
}
