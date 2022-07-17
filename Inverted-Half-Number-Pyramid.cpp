/* 
take user input for the number of rows and print the following pattern: 

10 9 8 7
6 5 4 
3 2
1

*/

#include <iostream>

using namespace std;

int main()
{
    int rows,max_term; //max_term is the first and the largest digit to be printed in the pattern
    
    cout<<"Enter Number of Rows: ";
    cin>>rows;
    
    max_term=((rows)*(rows+1))/2; //max_term is the sum of AP from 1 to the number if rows enetered by the user
    
    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=rows-i+1;j++)
        {
            cout<<max_term<<" ";
            max_term--;
        }
        
        cout<<"\n";
    }
    
    
    return 0;
}