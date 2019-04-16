#include<iostream>
#include<stack>
#include<string.h>
#include<iomanip>
#include<cstdlib>

using namespace std;

int main(){
	stack<int> a;
	stack<int> est;

	int i,x,n,k,top;
	cin>>n;
	do{
		cin>>x;
		if(x!=0){
			a.push(x);
		for(i=1;i<n;i++){
			cin>>x;
			a.push(x);
		}
		
		for(i=n;i>0;i--){
          
			if(!a.empty() && a.top()==i){

				a.pop();

			}
			
            
			else if(!est.empty() && est.top()==i){

				est.pop();

			}
			
		else if(!a.empty()){

            		top = a.top();

			   	while( (a.size()>1) && (top != i) ){

					est.push(a.top());
					a.pop();
					
                        	top = a.top();

				}
				if(a.top()== i) a.pop();
				else{
						est.push(a.top());
						a.pop();
					}


			}
	



		}
			if(est.empty())cout<<"Yes"<<endl;
			else cout<<"No"<<endl;
			
			while(!a.empty())a.pop();
			while(!est.empty())est.pop();

		}
		else{
			cout<<endl;
			cin>>n;
		}
	}while(n!=0);

	system("pause");
	return 0;
}
