#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<vector<int>> v)
{
    cout << "Elements of Vector : " << endl;
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}

void printReverseWave(vector<vector<int>> v){
    int rowCount = v.size();

    //* First Find Max of columns
    int columnMax = 0;
    for(int i =0;i < rowCount;i++){
        if(v[i].size() > columnMax){
            columnMax = v[i].size();
        }
    }

    //* now  for each columns
    //* if odd (top -> bottom)
    //* if even (bottom -> top)
    for(int i =columnMax-1; i >=0;i--){
        if(i%2!=0){
            for(int j =0; j < rowCount;j++){
                //* to check element is present at this location
                if(i < v[j].size()){
                    cout<<v[j][i]<<" ";
                }
            }
        }else{
            for(int j=rowCount-1;j >=0;j--){
                //* to check element is present at this location
                if(i < v[j].size()){
                    cout<<v[j][i]<<" ";
                }
            }
        }
    }

}

int main()
{
    vector<vector<int>> v;
    int row;
    cout << "Enter Number of Rows : ";
    cin >> row;

     v.resize(row);

    for (int i = 0; i < row; i++)
    {
        int col;
        cout << "Enter Number of Columns for Row " << i << " ";
        cin >> col;

         v[i].resize(col);

        for (int j = 0; j < col; j++)
        {
            int element;
            cout << "Enter Element for i = " << i << " j = " << j << " ";
            cin >> element;

            v[i][j] = element;
        }
    }

    cout<<endl<<endl;
    printVector(v);
    cout<<endl<<endl;
    cout<<"Reverse Wave Print : "<<endl;
    printReverseWave(v);

    return 0;
}