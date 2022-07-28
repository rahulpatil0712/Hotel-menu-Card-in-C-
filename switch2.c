#include <stdio.h>


/* menu card in switch application*/

int main() {
	
	int ch,vm,cm,nvm;
	
	        printf("\n 1. VEG MENU ");
		// 	printf("\n\t 1. panir masala");
		//	printf("\n\t 2. mix veg");
		//	printf("\n\t 3. panir handi");
		//	printf("\n\t 4. shev bhaji");
		  //  printf("\n\t 5. pav bhaji");
		    
		    printf("\n 2. NON-VEG MENU"); 
		//	printf("\n\t 1. chiken masala");
		//	printf("\n\t 2. chiken biryani");
		//	printf("\n\t 3. chiken handi");
		//	printf("\n\t 4. matan handi");
		//	printf("\n\t 5. matan kari");
			
		    
		    printf("\n 3. CHINESE MENU");
		//	printf("\n\t 1. manchuriyan");
		//	printf("\n\t 2. chiken manchav sup");
		//	printf("\n\t 3. nuddles");
		//	printf("\n\t 4. shejavan rice");
		//	printf("\n\t 5. soyabin chillee");
		
	
	
	
	printf("\n enter your choice");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:
			printf("\n 1. VEG MENU ");
			printf("\n\t 1. panir masala");
			printf("\n\t 2. mix veg");
			printf("\n\t 3. panir handi");
			printf("\n\t 4. shev bhaji");
		    printf("\n\t 5. pav bhaji");
		    
		    
		    
		    
		    
		    printf("\n enter your choice");
			scanf("%d",&vm);
			
			switch(vm)
			{
				
			    case 1:
			       printf("\n\t 1. panir masala");
			       break;
			    case 2:
		    	   printf("\n\t 2. mix veg");
		    	   break;
		    	case 3:   
			       printf("\n\t 3. panir handi");
			       break;
			    case 4:
			        printf("\n\t 4. shev bhaji");
			        break;
			    case 5:    
			        printf("\n\t 5. pav bhaji");
			        break;
			    default :
				   printf("NO item avilable");
			}
			break;
		    
		case 2:
			printf("\n 2. NON-VEG MENU"); 
			printf("\n\t 1. chiken masala");
			printf("\n\t 2. chiken biryani");
			printf("\n\t 3. chiken handi");
			printf("\n\t 4. matan handi");
			printf("\n\t 5. matan kari");
			
			
			printf("\n enter your choice");
			scanf("%d",&nvm);
			
			switch(nvm)
			{
			 case 1:
			
		      	printf("\n\t 1. chiken masala");
		      	break;
		     case 2:
			  	
		       	printf("\n\t 2. chiken biryani");
		       	break;
		     case 3:
		       	
			   printf("\n\t 3. chiken handi");
			   break;
			   
			 case 4:
			  
			   printf("\n\t 4. matan handi");
			   break;
			 
			  case 5:
			   
			   printf("\n\t 5. matan kari");
		    	break;
		    
		     default :
		    	printf("\n Invalid choice");
		    	
				
			}
			break;
		case 3:
		    printf("\n 3. CHINESE MENU");
			printf("\n\t 1. manchuriyan");
			printf("\n\t 2. chiken manchav sup");
			printf("\n\t 3. nuddles");
			printf("\n\t 4. shejavan rice");
			printf("\n\t 5. soyabin chillee");
		
			
			printf("\n enter your choice");
			scanf("%d",&cm);
			
			switch(cm)
			{
			case 1:
		     	printf("\n\t 1. manchuriyan");
		     	break;
		     	
		    case 2:
			 	
			     printf("\n\t 2. chiken manchav sup");
			     break;
			     
			case 3:
			     
			     printf("\n\t 3. nuddles");
			     break;
			     
			case 4:
			     
			     printf("\n\t 4. shejavan rice");
			     break;
			     
			case 5:   
			  
			     printf("\n\t 5. soyabin chillee");
			     
			     break;
			     
		  default :
			printf("Invalid choice");
			break;
		
				
			}
			break;
		
			
			
		
	}
	
	printf("\n\t Thank You...visit again");
	return 0;
}
