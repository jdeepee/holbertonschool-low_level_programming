char *leet(char *i){
	char temp;
	int a=0;

	while(i[a] != '\0'){
		temp=i[a];
		if (temp == 65 || temp == 97){
			temp=52;
		} else if (temp == 69 || temp == 101){
			temp=51;
		} else if (temp == 76 || temp == 111){
			temp=48;
		} else if (temp == 85 || temp == 116){
			temp=55;
		} else if (temp == 76 || temp == 108){
			temp=49;
		}
		i[a]=temp;
		a++;
	}

	return i;
}
