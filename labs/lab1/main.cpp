// Fatih Bahceci - 300348275
#include <iostream>
#include<string>
#include <algorithm> 
#include <limits>


    void manipulation(){
    
        int storage[5] = {};
        for (int i = 0; i < 5; i++) {
            std::cout << "Enter number " << i+1 << ":\n";
    
            std::cin >> storage[i];
    
                
        }
        
        std::cout << "\n";
    
        for (int i = 4; i > -1; i--) {
            std::cout << storage[i] << " ";
            
         }
    }
    
    void palindrome(){
        std::string pali;
        std::cout << "Enter your string \n";
        std::cin >> pali;
        int half = pali.size()/2;
        int max = pali.size();
        bool p = true; 
        int oe = 0;
        if(max%2 == 1){
            
            oe = 1;
        }
        for(int i = 0; i < half-oe; i++){
            if(pali[i] != pali[max-i-1]){
                p = false;
                
            
            }
        }
        if (p == false){
            std::cout << "Not palindrome \n" << pali << ", ";
            reverse(pali.begin(), pali.end());
            std::cout << pali << "\n";
            return;
        }
        std::cout << "Is a palindrome \n";
        return;
        
    }
    
    void min_max(){
        int max = std::numeric_limits<int>::min(), min = std::numeric_limits<int>::max();
        int num;
        for (int i = 0; i < 5; i++) {
            std::cout << "Enter number " << i+1 << ":\n";
            std::cin >> num;
            if(num > max){
                max = num;
            }
            if(num < min){
                min = num;
            }
           
        }
        std::cout << min << ", " << max;
        
    }
    
    
    int main() {
        // Write C++ code here
        int select = -1;
            do{
                        std::cout << "\nMenu:\n";
            std::cout << "1. Run Function 1\n";
            std::cout << "2. Run Function 2\n";
            std::cout << "3. Run Function 3\n";
            std::cout << "0. Exit\n";
            std::cout << "Enter your choice (1-4): ";
            std::cin >> select;
            
                switch (select){
                    
                    case 1:
                        manipulation();
                        break;
                    case 2:
                        palindrome();
                        break;
                    
                    case 3:
                        min_max();
                        break;
                    
                    case 0:
                        std::cout << "Exiting the program...\n";
                        break;
                    
                    default:
                        std::cout << "Invalid. Pick 1, 2, 3, or 0";
                        break;
                    
                }
            }while(select != 0);
        

        return 0;
    }



