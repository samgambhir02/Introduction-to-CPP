/* 
take user input for the number of rows and print the following pattern: 

A       A
 B     B
  C   C
   D D
    E
*/

#include <iostream>

using namespace std;

int main()
{
    int rows,ascii=64; //ascii is initialized the value of 64 because the first letter to be printed is "A"
    
    cout<<"Enter Number of Rows: ";
    cin>>rows;
    
    for(int i=1;i<=rows;i++)
    {
        //First Spaces
        for(int j=1;j<=i-1;j++)
        {
            cout<<" ";
        }
        
        //First Diagonal of Alphabets
        cout<<char(ascii+i);
        
        //Second Spaces
        for(int k=1;k<=(rows-i)*2-1;k++)
        {
            cout<<" ";
        }
        
        //Second Diagonal of Alphabets
        if(i!=rows)
        cout<< char(ascii+i);
        else
        continue;
        
        
        cout<<"\n";
    }

    return 0;
}