#include <vector>
#include <cstdlib>


int Alt(int n){
    if(n % 2 ) return -1;
    return 1;
}

void calc(int i,
          int & n,
          std::vector<std::vector<int> > & Table)
{
    if(i == n){
        return;
    }else{
        Table[i][0] = i + 1 ;
        for(int j = 1; j <= i; j++){
            Table[i][j] = Alt(j) * (abs(Table[i - 1][j - 1]) + abs(Table[i - 1][j])) ;
        }
        Table[i].push_back(0) ;
        return calc(i + 1, n, Table) ; 
    }
}

std::vector<int> getP(int n)
{
    std::vector<std::vector<int> > Table(n) ;
    for (int i = 0 ; i < n ; i++ ){
        Table[i].resize(i + 1);
    }
    calc(0, n, Table) ;
    Table[n-1].pop_back() ;
    return Table[n - 1] ;
}

