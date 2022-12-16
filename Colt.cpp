// ��������� ���������� ��������� Colt
// @author ��������� �.�.


#include "Colt.h"
#include <iostream>


Colt::Colt() {

	setName("Colt Python");
	setDamage(30);
	maxAmmo = 6;
	setCurrentAmmo(6);
}


// ������������� ������ ��������
void Colt::shotEffect() {

	std::cout << R"(
		    (                               _        
		     )                             /=>	      
		    (+_________________/ \ / \___ / /|       
		   .''._____________'._____      / /|/\	  
		  : () :              :\ ----\|    \ )		  
		   '..'______________.'O|----|      \		  
		                    O_O/____/        \		  
		                        |----   / ----\      
		                       || -\\ --|      \    
		                       ||   || ||\      \   
		                        \\____// '|      \	  
		Bang!                           .'/       |  
		                               .:/        |  
		                               :/_________| )"
	<< std::endl;		
}
