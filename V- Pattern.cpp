/* 
take user input for the number of rows and print the following pattern: 

 *       *
  *     *
   *   *
    * *
     *
*/

#include <iostream>

using namespace std;

int main()
{
    int rows;
    
    cout<<"Enter Number of Rows: ";
    cin>>rows;
    
    for(int i=1;i<=rows;i++)
    {
        //First Spaces
        for(int j=1;j<=i-1;j++)
        {
            cout<<" ";
        }
        
        //First Diagonal of *
        cout<<"*";
        
        //Second Spaces
        for(int k=1;k<=(rows-i)*2-1;k++)
        {
            cout<<" ";
        }
        
        //Second Diagonal of *
        if(i!=rows)
        cout<<"*";
        else
        continue;
        
        
        cout<<"\n";
    }

    return 0;
}