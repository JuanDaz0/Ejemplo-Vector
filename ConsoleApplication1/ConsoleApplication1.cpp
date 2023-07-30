
#include <iostream>
#include <string>

using namespace std;
int main()
{
    string nombres[10];
   
    for (int i = 0; i < size(nombres); i++) {
        cout << "Digame su nombre no me joda: " << i << " :" << endl;
        cin >> nombres[i];
    }


    for (int i = 0; i < 10; i++) {
        cout << nombres[i] << endl;
        if (i == 4 && nombres[i] == "carlos") {
            cout << "Te encontre " << nombres[i] << " Te vas preso manito " << endl;
        }
    }
  
    
}
