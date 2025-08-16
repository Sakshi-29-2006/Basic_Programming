#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T,A,B;
	cin>>T;
	while(T){
	    cin>>A>>B;
	    if(A==B){
	        cout<<A<<endl;
	    }
	    else if(A>B){
	        cout<<B<<endl;
	    }
	    else{
	        cout<<A<<endl;
	    }
	    T--;
	}

}
