			/*
			 * Calculates the mode value as part of the warp1 instruction used
			 * in option 6
			 */

			if(j==1) {
				for(i=0;i<n;i++) {
					if(numTemp[i]==temp) {
						printf("%.4f\n",set[i]);
					}
				}
			} else {
				printf("Not have mode value\n");	
			}

		}

		/**
		 * This portion of the program outputs a menu, gathers the 
		 * input from the user, and outputs the appropriate response.
		 */

		 do {
			printf("\n===========================\n");
			printf("Accountant Calculator Menu\n");
			printf("===========================\n");
			printf("1.Show max\n");
			printf("2.Show min\n");
			printf("3.Show x-bar\n");
			printf("4.Show range\n");
			printf("5.Show Med\n");
			printf("6.Show Mode\n");
			printf("7.Show value(sort)\n");
			printf("8.Set new value\n");
			printf("0.Back\n");
			aMenu = input("Select Menu: ");
			system("clear");

			/*
			 * Menu options use the function Aryprint:
			 * a print function specifically for the accountant calculator
			 * menu. It has two parameters, a string and a floating number.
			 */

			if(aMenu==1) {
				printf("\n");
				Aryprint("Max is",max);
			}

			if(aMenu==2) {
				printf("\n");
				Aryprint("Min is",min);
			}

			if(aMenu==3) {
				printf("\n");
				Aryprint("X-bar is",xBar);
			}

			if(aMenu==4) {
				printf("\n");
				Aryprint("Range is",max-min);
			}

			if(aMenu==5) {
				printf("\n");
				Aryprint("Med is",med);
			}

			if(aMenu==6) {
				printf("\n");
				printf("Mode is: ");
				goto warp1;
			}

			if(aMenu==7) {
				printf("\n");
				printf("Set of number is(sort): ");
				for(i=0;i<n;i++){
					printf("%.3f ",set[i]);
				}
			}

			if(aMenu==8) {
				goto warp;
			}

		/**
		 * Accountant menu loop runs as long as the user input for menu does 
		 * not equal to zero (the back condition)
		 */

		} while(aMenu!=0);

		/*
		 * Checks menu flag for the fourth user option: help and notice
		 * Opens and saves the contents of the file User_helping.txt to the 
		 * text variable and outputs it to the screen (one character at a time)
		 */

		if(menu==4) {
			char text;
			help = fopen("User_helping.txt","r");
			while((text=fgetc(help))!=EOF){
				fprintf(stdout,"%c",text);
			}
			fclose(help);
		}
	
	/*
	 * Runs the overarching menu program while the user does not choose to quit
	 * (Option 0: Exit)
	 */

	}while(menu!=0);

	return 0;
}
