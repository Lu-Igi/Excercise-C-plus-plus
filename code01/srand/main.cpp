#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
//r=righe c=colonne
int r,c;
int matrici[5][5]; //1.[5]righe 2.[5]colonne
srand(time(NULL));
/* Il corpo del ciclo esterno è ripetuto 10 volte*/
for (r=0;r<5;r++)
{/* Il corpo del ciclo interno è ripetuto 10 volte*/
for (c=0;c<5;c++);
/*numero casuale 0-50*/
matrici[r][c]=rand()%50+1;
cout<<rand()%50+1<<endl;
}

    return 0;
}
