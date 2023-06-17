char *intToRoman(int num){
	int i=0;
	static char result[50];
	//memset(result,0,strlen(result));
	while(num>0){
		if(num>=1000){
			result[i]='M';
			num-=1000;
		}else if(num>=900){
			result[i]='C';
			i++;
			result[i]='M';
			num-=900;
		}else if(num>=500){
			result[i]='D';
			num-=500;
		}else if(num>=400){
			result[i]='C';
			i++;
			result[i]='D';
			num-=400;
		}else if(num>=100){
			result[i]='C';
			num-=100;
		}else if(num>=90){
			result[i]='X';
			i++;
			result[i]='C';
			num-=90;
		}else if(num>=50){
			result[i]='L';
			num-=50;
		}else if(num>=40){
			result[i]='X';
			i++;
			result[i]='L';
			num-=40;
		}else if(num>=10){
			result[i]='X';
			num-=10;
		}else if(num>=9){
			result[i]='I';
			i++;
			result[i]='X';
			num-=9;
		}else if(num>=5){
			result[i]='V';
			num-=5;
		}else if(num>=4){
			result[i]='I';
			i++;
			result[i]='V';
			num-=4;
		}else{
			result[i]='I';
			num-=1;
		}
		i++;
	}
  result[i]='\0';
	return result;
}