/* ----------------------------------------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------------------------------------------*/
/* Main code for error handler */
/* -------------------------------------------------------------------------------------------------------------------------
----------------------------------------------------------------------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
//#include <MQTTClient.h> //remove '//' when using RPi
#include "settingErrHandler.h" //file with array definitions and length

struct tbl {
    char errorCode[errorCode_LEN + 1]; //added one more space for '\0'
    char errorText[errorMSG_LEN + 1];
    struct tbl *next;
};

struct tbl *head = NULL;
struct tbl *current = NULL;

//insert_first function here
void insert_first(char *errorCode, char *errorText) {
    struct tbl *lnklist = (struct tbl*)malloc(sizeof(struct tbl));
    strcpy(lnklist -> errorCode, errorCode);
    strcpy(lnklist -> errorText, errorText);

    lnklist -> next = NULL;
    head = lnklist;
}

void insert_next(struct tbl *list, char *errorCode, char *errorText) {
    struct tbl *lnklist = (struct tbl*)malloc(sizeof(struct tbl));
    strcpy(lnklist -> errorCode, errorCode);
    strcpy(lnklist -> errorText, errorText);

    lnklist -> next = NULL;
    list -> next = lnklist;
}

//printlist function here

//searchErrorCode function here

//splitStrings function here

//openFile function here

//readInputMQTT function here

//format_incomingMSG function here

//searchCorrMSG function here

//dateTimestamp function here

//format_outgoingMSG function here

//main function here




