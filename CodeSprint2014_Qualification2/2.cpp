/*https://www.hackerrank.com/ajayporwal
www.hackerrank.com/indian__*/

#include<iostream>
#include<string>
using namespace std;

std::string lex_min(const std::string&);
 
int main() {
    int t,i;
	string p;
	cin>>t;
	while(t--){
		cin>>p;
    std::cout<<lex_min(p)<<endl;
	}
    return 0;
}

std::string lex_min(const std::string& str) { 
    
    int size = str.size(); 
    std::string input = str + str; 
     
    int offset = 0; 
    int answer = -1; 
     
    for (int i = 0; i < size * 2; i++) { 
        if (answer == -1) 
        { 
            // First character 
            answer = i; 
        } 
        else if (input[i] > input[answer]) { 
            // We definitely have a new answer here 
            answer = i; 
            // Reset the offset for future tie 
            offset = 0; 
        } 
        else if (input[i] == input[answer + offset]) { 
            // We might have another answer here 
            // move the offset forward 
            offset++; 
        } 
        else if (input[i] > input[answer + offset]) { 
            // we have found something even better 
            // than what we had before 
            // Set marker for new answer 
            answer = i - offset; 
            offset = 0; 
            if(input[i] == input[answer]) /* THIS IS THE CORRECTION*/
                offset=1;
        } 
        else { 
            offset = 0; 
        } 
    } 
     
    return input.substr(answer, size); 
    
}
