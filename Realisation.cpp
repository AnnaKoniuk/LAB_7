#include "Header.h"
//сканування значень цілочисельної матриці, використовуємо тимчасовий вектор, який заповнюємо значеннями
//а потім передаємо його в ф-цію push_back, яка додаэ цей вектор у двохвимырний вектор
//(вектор в даному випадку скоріш масив динамічний, просто так називається,не сприймав як штуку з матем:))
void scanvector(vector<vector<int>>& vec,int&rows,int&columns){
    cout<<"Enter number of rows and columns"<<endl;
    cin>>rows>>columns;
    cout<<"Enter values"<<endl;
    for(int i=0;i<rows;i++){
        vector<int>tmp;
        for(int k=0;k<columns;k++){
            int num;
            cin>>num;
            tmp.push_back(num);
        }
        vec.push_back(tmp);
    }
}
//виведення двохвимірного вектора
void putvector(vector<vector<int>>& vec,int rows,int columns){
    for(int i=0;i<rows;i++){
        for(int k=0;k<columns;k++){
            cout<<vec[i][k]<<" ";
        }
        cout<<endl;
    }
}
//копіювання в інший двохвимірний вектор по рядках
void copy_through_rows(vector<vector<int> >& source,vector<vector<int> >& destination,int rows,int columns){
    for(int i=0;i<rows;i++){
        vector<int> tmp;
        for(int k=0;k<columns;k++){
            tmp.push_back(source[i][k]);
        }
        destination.push_back(tmp);
    }
}
//копіювання в інший двохвимірний вектор по стовпцях, спочатку створюємо тимчасову транспоновану матрицю, а потім
//передаємо її значення в двохвимірний масив, тобто виконуємо умову копіювання по стовпцях
void copy_through_columns(vector<vector<int> >& source,vector<vector<int> >& destination,int rows,int columns){
    int mas[columns][rows];
    for(int i=0;i<columns;i++){
        for(int k=0;k<rows;k++){
            mas[i][k] = source[k][i];
        }
    }
    for(int i=0;i<columns;i++){
        vector<int> tmp;
        for(int k=0;k<rows;k++){
            tmp.push_back(mas[i][k]);
        }
        destination.push_back(tmp);
    }
}
//ф-ція для копіювання в одновимірний вектор значень з заданого рядка
void copyrow(vector<vector<int> >& source, vector<int>& chosen_row,int columns,int row){
    for(int i=0;i<columns;i++){
        chosen_row.push_back(source[row][i]);
    }
}
//ф-ція для копіювання в одновимірний вектор значень з заданого стовпця
void copycolumn(vector<vector<int> >& source, vector<int>& chosen_column, int rows,int column){
    for(int i=0;i<rows;i++){
        chosen_column.push_back(source[i][column]);
    }
}
//далі є багато аналогічних ф-цій для масиву стрічок, але буду додавати просто особливості коду, хоча ідея по суті
//аналогічна
void putvector(vector<vector<char>>& vec,int rows,int columns){
    for(int i=0;i<rows;i++){
        for(int k=0;vec[i][k]!='\0';k++){
            cout<<vec[i][k];
        }
        cout<<endl;
    }
}
//в цьому випадку ми спочатку скануємо string, після чого посимвольно передаємо її в тимчасовий вектор
//той вектор додаємо до нашого масиву стрічок(двохвимірного вектору). всі ці дії відбувається в циклі
//для повторного зчитування стрічок для нашого двохвиміного вектору
void scanvector(vector<vector<char>>& vec,int&rows,int&columns){
    cout<<"Enter number of strings"<<endl;
    cin>>rows;
    cout<<"Enter MAX number of symbols in row"<<endl;
    cin>>columns;
    for(int i=0;i<rows;i++){
        string tmp;
        cin>>tmp;
        vector<char> stmp;
        for(int i=0;i<(int)tmp.size();i++){
            stmp.push_back(tmp[i]);
        }
        stmp.push_back('\0');
        vec.push_back(stmp);
    }
}
//копіювання колонки  і рядка аналогічне як в минулому прикладі, тільки ми  це робим зі стрічками
void copycolumn(vector<vector<char> >& source, vector<char>& chosen_column,int column, int rows){
    for(int i=0;i<rows;i++){
        chosen_column.push_back(source[i][column]);
    }
    chosen_column.push_back('\0');
}
void copyrow(vector<vector<char> >& source, vector<char>& chosen_row, int row){
    for(int i=0;source[row][i]!='\0';i++){
        chosen_row.push_back(source[row][i]);
    }
    chosen_row.push_back('\0');
}
void copy_through_rows(vector<vector<char> >& source,vector<vector<char> >& destination){
    destination = source;
}
//для копіювання по колонках створюємо знову тимчасову змінну string, заносимо в неї символи,
//поки не зустрінемо нуль-вимвол(символ припинення стрічки), створюємо тимчасовий
//вектор символів за допомогою конструктора, в який передаємо початок і кінець стрічки
//подім додаємо нуль-сивол
//знову ж таки все це відбувається в циклі
void copy_through_columns(vector<vector<char> >& source,vector<vector<char> >& destination,int rows,int columns){
    for(int i=0;i<columns;i++){
        string s;
        for(int k=0;k<rows;k++){
            if(source[k][i]=='\0'||source[k][i]==' '){
                break;
            }
            s+= source[k][i];
        }
        vector <char>tmp(s.c_str(),s.c_str()+s.size());
        tmp.push_back('\0');
        destination.push_back(tmp);
    }
}
