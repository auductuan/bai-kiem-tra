#include<stdio.h>
#include<stdlib.h>
int main(){
int n;
int numbers[100];
int sum;
int min,max;
int currentIndex;
do{
	printf("*****************MENU********************\n");
	printf("1. Nhap gia tri n phan tu cua mang\n");
	printf("2. In gia tri cac phan tu trong mang\n");
	printf("3. Tinh tong cac phan tu chia het cho 2 va 3 trong mang\n");
	printf("4. In ra gia tri phan tu lon nhat va nho nhat trong mang\n");
	printf("5. Su dung thuat toan sap xep chen sap xep mang tang dan\n");
    printf("6. Tinh tong cac phan tu la so nguyen trong mang\n");
    printf("7. Sap xep cac phan tu le chia het cho 5 o dau mang theo thu tu giam dan, cac phan tu chan chia het cho 5 o cuoi mang theo thu tu tang dan cac phan tu con lai o giua mang theo thu tu giam dan\n");
    printf("8. Nhap gia tri m tu ban phim, chen gia tri m vao mang xep theo tang dan\n");
    printf("9. Thoat\n");
    int choice;
    printf("Lua chon cua ban la: \n");
    scanf("%d", &choice);
    switch(choice){
    	case 1:
    	printf("Nhap gia tri n phan tu cua mang :\n");
    	scanf("%d", &n);
    	for(int i = 0; i < n; i++){
    		printf("numbers[%d]=", i);
    		scanf("%d", &numbers[i]);
		}
    		break;
    	    case 2:
    	    printf("Cac gia tri co trong mang la: %d\n", n);
    	    for(int i = 0; i < n; i++){
    		printf("numbers[%d]=", i);
		}
	    	break; 
	    	case 3:
        	for(int i = 0; i < n; i++){
    	    if(numbers[i]%2 == 0 || numbers[i]%3 == 0){
            	sum+=numbers[i];
		    }	
		}
	       	printf(" Tong cac phan tu chia het cho 2 va 3 la %d:\n", sum);
        	break;
	
    				case 4:
    				min = numbers[0];
					max = numbers[0]; 
					for(int i = 0;i<n;i++){
						if (min > numbers[i]){
						min = numbers[i];
						}
						if(max < numbers[i]){
							max = numbers[i];
						}
					}
					printf("Gia tri lon nhat: %d\n - Gia tri nho nhat: %d\n", max, min);
    					break;
    					case 5: 
    					break;
    					case 6:
    						break;	
    						case 7:
    							break;
    							case 8:
    								break;
    								case 9:
    									exit(0);
    									default:
    										printf("Vui long chon tu 1-9\n");




 }
  }while(1==1);
}
