#include <iostream>
#include <vector>

using namespace std;




int main()
{

    int tab[6][7];
    int i, j;

    /* Affichage de chaque élément de tableau */
    for ( i = 0; i < 6; i++ )
    {
        cout << endl;
        for ( j = 0; j < 7; j++ ) {
            cout <<  tab[i][j] ;

        }
    }
    return 0;
}
