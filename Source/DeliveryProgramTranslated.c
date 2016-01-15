//This program will be used to calculate how much driver's owe at the end of a shift...
//Will ask for total amount owed... then will ask how many deliveries the driver took.
//2) then will ask user to input all prepaids
//3) then will ask user to input all credits
//4) then will ask user for any other payments made... (poker chips, grocery store runs, etc..)
//5) program will then add all of these values into a total.
//6) program will subtract total from the amount owed....
//7) program will eventualy be able to list all data entered back to the driver, so they can easily double, and triple check everything...	NOT DONE
//8) program should be able to list the amount of credit, prepaids, and others back to driver at end.		DONE
//9) if a driver puts in a wrong digit, they should be able to go back and fix it. (this might be hard)		NOT DONE
//10) This is a long-shot. But maybe pull data for POS. That would be sweet.								DONE
//11) Need's GUI																							NOT DONE
//12) Driver's shoudld be able to write a comment for the manager, if anything wierd happens				DONE (will need to change eventually)
//13) if driver is owed money, execute a seperate line of code ex:"Take 20.00 out of till"					NOT DONE
//14) Program needs to be way more modular... holy fuck...													NOT DONE
//15) Program works on the work PCs																			NOT DONE
//16) Program can calculate the amnt of expected credits, based on credits in POS							NOT DONE
//17) Program reads back driver's name based on POS															NOT DONE
//18) Another long shot, but program handles finalized credit's (maybe not)									NOT DONE
//19) Program can calculate how much the driver made, if the driver wants to know 							NOT DONE
//20) Program writes to DATABASE!(or spreadsheet)															NOT DONE
//21) Program doesn't need user to enter -1...																NOT DONE




#include <string.h>
#include <stdio.h>
int main()
{

	FILE *fp;
	char str[200];
    char str2[200];	// Cash Amount
    char str3[200];	// Due Amount
    char str4[200];	// Driver's Name
    char str5[200];	// Delivery Amount
    char str6[200];
    char cashAmnt[7];
    char dueAmnt[7];
    char deliveryAmnt[7];
    char driverName[20];
    int check;
    int x = 0;
	/* opening file for reading */
	fp = fopen("/Users/MaxM/Desktop/C_programs/FileReading/dFile.txt" , "r");
	if( fgets (str, 200, fp)!=NULL ) {
	} //end if
	if( fgets (str, 200, fp)!=NULL ) {

	} //end if
	if( fgets (str, 200, fp)!=NULL ) {
	} //end if
	if( fgets (str, 200, fp)!=NULL ) {
	} //end if
    if( fgets (str, 200, fp)!=NULL ) {
        //puts(str);    This Line should Have Bank: # for driver
	} //end if
	if( fgets (str4, 200, fp)!=NULL ) {
	    puts(str4);     //DRIVER NAME
	} //end if
	if( fgets (str, 200, fp)!=NULL ) {
	} //end if
	if( fgets (str, 200, fp)!=NULL ) {
	    puts(str); //This line shouws a dash... could start loop here..

	} //end if
	check = 0;
	do {

      	fgets (str, 100, fp);
      		for (int i = 0; i < 100; i++)
      		{
      			if (str[i] == '_')
      			{
      				check = 1;	// So we know we are done with loop.
      				break; // Shoud break out of iteration..
      			}
      			else
      			{
      				puts(str);
			      	fgets (str, 100, fp);


      			}	// End of nested if/else
      		} // end of for loop
	} while (check != 1);	// Check will be 1 when we reach the end of our loop. so we will stop loop then.


	if( fgets (str, 200, fp)!=NULL ) {
	    //puts(str);
	} //end if


	if( fgets (str3, 200, fp)!=NULL ) {

	  puts(str3);

	} //end if


	if( fgets (str2, 200, fp)!=NULL ) {
        puts(str2);
	} //end if


	if( fgets (str, 200, fp)!=NULL ) {
	  //puts(str);
	} //end if


	if( fgets (str, 200, fp)!=NULL ) {
	  //puts(str);
	} //end if
	if( fgets (str, 200, fp)!=NULL ) {
	  //puts(str);

	} //end if
	if( fgets (str, 200, fp)!=NULL ) {
	  //puts(str);

	} //end if


	if( fgets (str5, 200, fp)!=NULL ) {

	  puts(str5);

	} //end if


	if( fgets (str, 200, fp)!=NULL ) {
        //puts(str);
	} //end if
	if( fgets (str, 200, fp)!=NULL ) {
	} //end if
	if( fgets (str, 200, fp)!=NULL ) {
	} //end if
	if( fgets (str, 200, fp)!=NULL ) {
	} //end if


	if( fgets (str, 200, fp)!=NULL ) {

	  //puts(str);


	} //end if


	if( fgets (str, 200, fp)!=NULL ) {
        //puts(str);
	} //end if


	if( fgets (str, 200, fp)!=NULL ) {
	} //end if

	fclose(fp);




    for (int i = 5; i < strlen(str2); i++)      //Starts at five to ignore time data....
    {
        if ((isdigit(str2[i])) || (str2[i] == '.'))
        {

            cashAmnt[x] = str2[i];
            x++;
        }
        else
        {
            continue;
        }


    }
    x = 0;
    for (int i = 0; i < strlen(str3); i++)
        {
        if ((isdigit(str3[i])) || (str3[i] == '.'))
            {
                dueAmnt[x] = str3[i];
                x++;
            } else
            {
                continue;
            }

        }


        // SKIPPED STRING 4... DON'T KNOW IF I NEED CASH AGAIN, LOL



    x = 0;
    for (int i=0; i < strlen(str4); i++)		// For array with driver's name...
    {
        if (isalpha(str4[i]))
    	{
    		driverName[x] = str4[i];
    		x++;
    	} else
    	{
    		continue;
    	}
    }




    x = 0;
    for (int i = 0; i < strlen(str5); i++)
    {
    	if (isdigit(str5[i]))
    	{
    		deliveryAmnt[x] = str5[i];
    		x++;
    	} else
    	{
    		continue;
    	}

    }


    printf("\n\n\nname: %c%c%c%c%c%c%c%c", driverName[0], driverName[1], driverName[2], driverName[3], driverName[4], driverName[5], driverName[6], driverName[7]);
    printf("\ncash: %c%c%c%c", cashAmnt[0], cashAmnt[1], cashAmnt[2], cashAmnt[3]);
    printf("\ndue: %c%c%c%c%c%c", dueAmnt[0], dueAmnt[1], dueAmnt[2], dueAmnt[3], dueAmnt[4], dueAmnt[5]);
    printf("\nDeliv#: %c%c\n", deliveryAmnt[0], deliveryAmnt[1]);







    // Converting arrays to int and float...
    int n;
    sscanf(deliveryAmnt, "%d", &n);
    printf("\n\n\nDelivery amnt as int variable: %d\n", n);


    float c;
    sscanf(cashAmnt,"%f",&c);
    printf("Cash amnt var: %.2f\n", c);

    float d;
    sscanf(dueAmnt, "%f",&d);
    printf("Due amnt var: %.2f\n", d);




    // Start program ui here:
    char ansA, ansB, ansC;

    printf("\n\n\n\nWelcome! DriverName!!");

    // Delivery number or deliveryAmnt
    printf("\nYou took %d deliveries today! good job!!", n);
    printf("\nIs this number correct? (Y)/(N) answer plz...\n");
    scanf(" %c", &ansA);
    if (ansA == 'N')
    {
    	printf("\nPlease enter the correct number.\n");
    	scanf(" %d", &n);
    	printf("\nNew delivery number is now: %d", n);
    }



    // Bank or cashAmnt
    printf("\nYou took a bank of $%.2f at the start of your shift.", c);
    printf("\nIs this number correct? (Y)/(N) answer plz...\n");
    scanf(" %c", &ansB);
    if (ansB == 'N')
    {
    	printf("\nPlease enter the correct number.\n");
    	scanf(" %f", &c);
    	printf("\nNew cash bank is now: $%.2f.\n", c);
    }



    // Owed or dueAmnt
    printf("\nYou Owe the Pizzeria a total of :  $%.2f.\n", d);
    printf("\nIs this number correct? (Y)/(N) answer plz...\n");
    scanf(" %c", &ansC);
    if (ansC == 'N')
    {
    	printf("\nPlease enter the correct number.\n");
    	scanf(" %f", &d);
    	printf("New amount Due is : $%.2f.\n", d);
    }



    // ==================================================================================
    /*
    printf("\nAlright! looks like everything is where it needs to be...\n");
    printf("Now, please type in all of your credit card tips..");
    printf("\nGreat!, looks like you have %.2f in credit card tips.")
    printf("\nNow, please type in the total for all of your pre-paid online orders..")
    printf("\nGreat!, looks like you have %.2f in pre-paid orders.");
    */



    // Layout all of the data values... ei: amnt due.. final amnt due.. total credits... num of credits... num of prepaids...

	float owed = d, total = 0.00, finalTotal, deliveries, credit, prepaid, other;
	int numPrepaid, numCredit, numOther;
	char driver[20], msg[50];
	// All variables will be declared here!!!! =================================================



	//Program starts executing here!
	//Now we add all the prepaids the drive took to the total sum
	printf("Now please enter the totals for all of your prepaid tickets!\n(NOT THE TOTAL ON THE TICKET, THE TOTAL ON THE FAX RECEIPT.)\n");
	printf("==========================================================================================================================\n");

	for (numPrepaid = 0; numPrepaid < 30; numPrepaid++)
	{
		if (numPrepaid == 0)
		{
		scanf(" %f", &prepaid);

		}
		else
		{
		printf("=============================================================================================================");
		printf("\nThanks! enter the next prepaid total!\n");
		printf("When you are done, type any number less than 1, to move on.\n");
		printf("=============================================================================================================\n");

		scanf(" %f", &prepaid);
		}

		if (prepaid < 0.00)
		{
			break;

		} // end if
		total += prepaid;
	} //end of numprepaid loop

	printf("\nSweet! looks like you have $%.2f in prepaids all together!\n", total);
	printf("You entered %d prepaids just now.\n", numPrepaid);




	//and Now we will add all of the credit card tips the driver recieved
	printf("Please enter all of your credit card tips!(just type the tip, not subtotal.)\n");
	printf("==========================================================================================================================\n");

	for (numCredit = 0; numCredit < 30; numCredit++)
	{
		if (numCredit == 0)
		{
			scanf(" %f", &credit);
		}
		else
		{
			printf("=============================================================================================================");
			printf("\nThanks! enter another credit card tip! please do not include the subtotal, just the tip..\n");
			printf("=============================================================================================================\n");
			scanf(" %f", &credit);
		}

		if (credit < 0.00)
		{
			break;
		} // end if

		total += credit;
	} // end of numCredit loop

	printf("Okay, if we add together all your prepaid, and tips we now get $%.2f\n", total);
    printf("You have entered %d credit card tips, and %d prepaids.\n", numCredit, numPrepaid);





	//Just incase driver has poker chips, or someone else assigned a delivery to the wrong driver..
	printf("If there are any other items you paid for today, please enter them now!\n");
	for (numOther = 0; numOther < 30; numOther++)
	{
		if (numOther == 0)
		{
			scanf(" %f", &other);

		}
		else
		{
			printf("=============================================================================================================");
			printf("\nEnter other charges now!\n");
			scanf(" %f", &other);
		}


		if (other < 0.00)
		{
			break;
		}
		total += other;
	} //end of numother loop





	// Here driver's can write a comment to the manager, in case of emergency...
	printf("Input messages for manager now: \n");
	scanf(" %s", msg);


	printf("You Said: \n \t %s", msg); //only accepts one word... fuck

	//We need to calculate the gas the driver is owed... so we will add the amnt of deliveries to the total here...
	total += (float)n;	// Typecasts n to a float for calculation...
	printf("\n\nYou took %d deliveries. The pizzeria pays out $1.00 for every delivery you take to account for gas.\n", n);
	printf("So we will add $%d to the total...\n\n", n);
	printf("------------------------------------------------------------------------------------------------------------\n");
	printf("Prepaid:    %d\n", numPrepaid);
	printf("Credit:     %d\n", numCredit);
	printf("Other:      %d\n", numOther);
	printf("Deliveries: %d\n", n);
	printf("------------------------------------------------------------------------------------------------------------\n");
	printf("When we add all of your charges together we get $%.2f.\n",total);
	printf("That includes your prepaids, your credits, your gas, and any other deductions..\n");
	printf("You owed the pizzeria $%.2f, so we will subtract your $%.2f from the total amount owed.\n", d, total);

	//This is how much the driver needs to put in or take out of the till at the end of the day...




	finalTotal = d - total;



	printf("\n\nFinal: %.2f - %.2f = %.2f\n", d, total, finalTotal);
	printf("Put $%.2f in the till, and finalize all your credits! :), good night!\n\n", finalTotal);



	return(0);
	}

