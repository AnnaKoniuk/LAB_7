#include "Header.h"
//���������� ������� ������������ �������, ������������� ���������� ������, ���� ���������� ����������
//� ���� �������� ���� � �-��� push_back, ��� ����� ��� ������ � ������������ ������
//(������ � ������ ������� ����� ����� ���������, ������ ��� ����������,�� �������� �� ����� � �����:))
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
//��������� ������������ �������
void putvector(vector<vector<int>>& vec,int rows,int columns){
    for(int i=0;i<rows;i++){
        for(int k=0;k<columns;k++){
            cout<<vec[i][k]<<" ";
        }
        cout<<endl;
    }
}
//��������� � ����� ����������� ������ �� ������
void copy_through_rows(vector<vector<int> >& source,vector<vector<int> >& destination,int rows,int columns){
    for(int i=0;i<rows;i++){
        vector<int> tmp;
        for(int k=0;k<columns;k++){
            tmp.push_back(source[i][k]);
        }
        destination.push_back(tmp);
    }
}
//��������� � ����� ����������� ������ �� ��������, �������� ��������� ��������� ������������� �������, � ����
//�������� �� �������� � ����������� �����, ����� �������� ����� ��������� �� ��������
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
//�-��� ��� ��������� � ����������� ������ ������� � �������� �����
void copyrow(vector<vector<int> >& source, vector<int>& chosen_row,int columns,int row){
    for(int i=0;i<columns;i++){
        chosen_row.push_back(source[row][i]);
    }
}
//�-��� ��� ��������� � ����������� ������ ������� � �������� �������
void copycolumn(vector<vector<int> >& source, vector<int>& chosen_column, int rows,int column){
    for(int i=0;i<rows;i++){
        chosen_column.push_back(source[i][column]);
    }
}
//��� � ������ ���������� �-��� ��� ������ ������, ��� ���� �������� ������ ���������� ����, ���� ���� �� ���
//���������
void putvector(vector<vector<char>>& vec,int rows,int columns){
    for(int i=0;i<rows;i++){
        for(int k=0;vec[i][k]!='\0';k++){
            cout<<vec[i][k];
        }
        cout<<endl;
    }
}
//� ����� ������� �� �������� ������� string, ���� ���� ����������� �������� �� � ���������� ������
//��� ������ ������ �� ������ ������ ������(������������ �������). �� �� 䳿 ���������� � ����
//��� ���������� ���������� ������ ��� ������ ����������� �������
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
//��������� �������  � ����� ��������� �� � �������� �������, ����� ��  �� ����� � ��������
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
//��� ��������� �� �������� ��������� ����� ��������� ����� string, �������� � �� �������,
//���� �� ��������� ����-������(������ ���������� ������), ��������� ����������
//������ ������� �� ��������� ������������, � ���� �������� ������� � ����� ������
//���� ������ ����-�����
//����� � ���� ��� �� ���������� � ����
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
