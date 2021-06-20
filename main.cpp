#include "Header.h"
int main()
{
    int rows, columns;
    vector<vector<int>> Matrix;
    vector<vector<char>> Strings;
    vector<vector<int>> CopyByRowsMatrix;
    vector<vector<int>> CopyByCollumnsMatrix;
    vector<int> CopyOfRow;
    vector<int> CopyOfColumn;
    vector<char> CharCopyOfRow;
    vector<char> CharCopyOfColumn;
    vector<vector<char>> CharCopyByRows;
    vector<vector<char>> CharCopyByCollumns;
    scanvector(Matrix,rows,columns);
    cout<<"Matrix"<<endl;
    putvector(Matrix,rows,columns);
    copy_through_rows(Matrix,CopyByRowsMatrix,rows,columns);
    cout<<"Copied by rows matrix"<<endl;
    putvector(CopyByRowsMatrix,rows,columns);
    copy_through_columns(Matrix,CopyByCollumnsMatrix,rows,columns);
    cout<<"Copied by columns matrix"<<endl;
    putvector(CopyByCollumnsMatrix,columns,rows);
    int answer;
    cout<<"Choose row to copy from 0 to "<<rows-1<<endl;
    cin>>answer;
    copyrow(Matrix,CopyOfRow,columns,answer);
    cout<<"Copied row"<<endl;
    putvector(CopyOfRow);
    cout<<"Choose column to copy from 0 to "<<columns-1<<endl;
    cin>>answer;
    copycolumn(Matrix,CopyOfColumn,rows,answer);
    cout<<"Copied column"<<endl;
    putvector(CopyOfColumn);

    scanvector(Strings,rows,columns);
    cout<<"\nStrings: "<<endl;
    putvector(Strings,rows,columns);
    copy_through_rows(Strings,CharCopyByRows);
    cout<<"\nCopied by rows matrix"<<endl;
    putvector(CharCopyByRows,rows,columns);
    copy_through_columns(Strings,CharCopyByCollumns,rows,columns);
    cout<<"\nCopied by columns matrix"<<endl;
    putvector(CharCopyByCollumns,columns,rows);
    cout<<"Choose row to copy from 0 to "<<rows-1<<endl;
    cin>>answer;
    copyrow(Strings,CharCopyOfRow,answer);
    cout<<"\nCopied row"<<endl;
    putvector(CharCopyOfRow);
    cout<<"\nChoose column to copy from 0 to "<<columns-1<<endl;
    cin>>answer;
    copycolumn(Strings,CharCopyOfColumn,answer,rows);
    cout<<"\nCopied column"<<endl;
    putvector(CharCopyOfColumn);
    return 0;
}
