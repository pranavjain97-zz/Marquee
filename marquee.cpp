#include<iostream>
#include<stdlib.h>

using namespace std; 



int main() 
{
	int n;
	cout<<"Enter the number of rotations?";
	cin>>n;
	char array[100]="!ECE150!";
	

	int size=60;
	for(int k=0;k<n;k++)
	{
		
		for(int j=0;j<=size;j++)
		{
			
			int remainder=j%size;
			system("cls");
			
			
			for(int i=0;i<60;i++) {
 
	cout<<"="; 
	
	}
			cout<<endl;
			
			for(int col=0;col<size;col++)
			{
				if(remainder>52)
				{
					int pointer_start=remainder-size+8;
					int pointer_end=8-pointer_start;
					if(col<pointer_start)
					
						cout<<array[8-pointer_start+col];
					
					else if(col>size-pointer_end-1)
					
						cout<<array[col-remainder];
					
					else
					
						cout<<" ";
						
					
				}
				else
				{
					if(col>=remainder+8 || col<remainder )
					
						cout<<" ";
						
					else
					
						cout<<array[col-remainder];
									
				}
				
			}
			
			cout<<endl;
			for(int i=0;i<60;i++) {
 
	       cout<<"="; 
	
	       }
			
		}
		
		
	}
	
	return 0;

}







