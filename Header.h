#include <iostream>
#include <vector>
using namespace std;
void scanvector(vector<vector<int>>& vec,int&rows,int&columns);
void putvector(vector<vector<int>>& vec,int rows,int columns);
void copy_through_rows(vector<vector<int> >& source,vector<vector<int> >& destination,int rows,int columns);
void copy_through_columns(vector<vector<int> >& source,vector<vector<int> >& destination,int rows,int columns);
void copyrow(vector<vector<int> >& source, vector<int>& chosen_row,int columns,int row);
void copycolumn(vector<vector<int> >& source, vector<int>& chosen_column, int rows,int column);
void putvector(vector<vector<char>>& vec,int rows,int columns);
void scanvector(vector<vector<char>>& vec,int&rows,int&columns);
void copycolumn(vector<vector<char> >& source, vector<char>& chosen_row,int column, int rows);
void copyrow(vector<vector<char> >& source, vector<char>& chosen_row,int row);
void copy_through_rows(vector<vector<char> >& source,vector<vector<char> >& destination);
void copy_through_columns(vector<vector<char> >& source,vector<vector<char> >& destination,int rows,int columns);
//шаблонна ф-ція для виведення одновимірних векторів
template <class T>
void putvector(vector<T>&v){
    for(int i=0;i<(int)v.size();i++){
        cout<<v[i]<<"\t";
    }
    cout<<endl;
}


