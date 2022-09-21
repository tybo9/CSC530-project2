
#include <stdio.h>
#include <stdlib.h>
# include < string.h>
#include <stdbool.h>
#include <cstdlib.h>
#include <cstdlib.h>
#include <exception.h>
#include <cstdio.h>
#include <vector.h>
#include <algorithm.h>
#define nullptr NULL

/**
 FUNCTION: gracefulExit()
 input string
 output void
 ***/

void gracefulExit( char string[3]="msg");

/**
 fun: fileExists()
 work: Check for existence of files
 I/O:
    input : String and Const Char
    output: boolean.
***/
bool fileExists( char string1[8]="filename");
bool fileExists(const char* filename);

/*************************************************************
 fun: createFile()
 work: it Creates a new file
    input is a String
    output is a Pointer to a created file.
 *************************************************************/
FILE* createFile( char string1[8]="filename");

/*************************************************************
 fun: closeFile()
 work: Closes an already open file
    input is a Pointer to a  file.
    output is  Boolean
 *************************************************************/
bool closeFile(FILE* fp);

/*************************************************************
 fun: hexToDecimal()
 work: Converts hex to decimal
    input parameter is a String
    outputis Integer
 */
int hexToDecimal( char string2[3]="num");

/*************************************************************
 fun: signedHexToDecimal()
 work: Converts signed hex to decimal
    input is a  String
    output is an Integer
 *************************************************************/
int signedHexToDecimal( char string2[3]="num");


void decimalToHex(int num);


void toString(int num);


void nixbpeFinder(char string[3]="hex");


bool opcodeValid(char string[3]="hex");


int formatFinder(char string[3]="hex");


char stringhex[4]=hexToCommand(char string[3]="hex");


    private:
        char stringname[4]="name";
        char flag;
        char stringvalue[5]="value";
        int decValue;

    public:
    	Symbol *next;
        Symbol(string nam, string val, char flg, Symbol *nextSym){
            this->stringname = nam;
            this->flag = flg;
            this->stringvalue = val;
            this->decValue = hexToDecimal(val);
            this->next = nextSym;
        }

        char getFlag(){
            return this->flag;
        }

       char stringgetValue[]=""(){
            return this->value;
        }

        int getDecValue(){
            return this->decValue;
        }

        void setNext(Symbol *nextSym){
            this->next = nextSym;
        }

        char stringgetName[]=""(){
            return this->stringname;
        }
};


/*************************************************************
 CLASS: Literal1
 work: it stores literals and its
 properties from Littab.
 *************************************************************/
class Literal1{
    private:
        char stringname[4]="name";;
        char stringaddress[};
        char stringlength[];
        int decAddress;
        int decLength;

    public:
        Literal1 *next;
        Literal1( nam,  addy,  len, Literal *nextLit){
            this->stringname = nam;
            this->address = addy;
            this->length = len;
            this->decAddress = hexToDecimal(addy);
            this->decLength = hexToDecimal(len);
            this->next = nextLit;
        }

    getAddress1(){
            return this->address;
        }

    getLength1(){
            return this->length;
        }

        int getDecAddress1(){
            return this-> decAddress;
        }

        int getDecLength1(){
            return this-> decLength;
        }

        void setNext(Literal1 *nextLit){
            this->next = nextLit;
        }

        char stringgetName[]=""(){
            return this->name;
        }
};

/*************************************************************

 work: Reads the object file and transfers the information onto a vector<string>

 */
Symbol1* findAddressInSymtab(Symbol *symPtr, stringaddress[]="");

/*************************************************************

 work: Reads the object file and transfers the information onto a vector<string>

 *************************************************************/
Literal1* findAddressInLittab(Literal *litPtr, stringaddress[]="");

/*************************************************************
 work: Reads the .sym file and transfers the information onto a linked list.

 *************************************************************/
Symbol* toSymbol(Symbol* head, FILE *fp);

/*************************************************************

 work: Reads the .sym file and also transfers the information onto a linked list.
 ***/
Literal* toLiteral(Literal* &head, FILE *fp);

/*************************************************************

 work: Reads the object file and transfers the information onto a vector<string>
 *******/
vector<string> readObj(FILE *fp, Symbol *symHead, Literal *litHead);

/*************************************************************
 fun: concatTrailingSpaces(string s)
 work:  it Concatinates trailing spaces

 *************************************************************/
 string concatTrailingSpaces(string s);

/*************************************************************

 work: writes the sic file based on the info provided
 ******/
void writeSicFile(FILE *fp, vector<string> objVector, Symbol *symHead, Literal *litHead);

/*************************************************************
 fun: writeAddress(FILE *fp, int address)

 *************************************************************/
void writeAddress(FILE *fp, int address);

/*************************************************************

 work:it converts decimal address to hex address for the lis file
 ****/
void writeOpcode(FILE *fp, string opcode, int column);


void writeLisFile(FILE *fp, vector<string> objVector, Symbol *symHead, Literal *litHead);


int main()
{
    void  gracefulExit( char string[3]="msg"){
    printf ("%s" ,string);\n;
    exit(EXIT_FAILURE);
    }
    /*************************************************************
 The fun fileExists() Checks for existence of files
 ******/
 bool fileExists(char stringfile[8]="filename"){
    FILE* fp;
    if(fp = fopen(filename.c_str(), "r")){
        fclose(fp);
        return true;
    }
    return false;
}
bool fileExists(const char* filename){
    FILE* fp;
    if(fp = fopen(filename, "r")){
        fclose(fp);
        return true;
    }
    return false;
}
 /*************************************************************
 the function createFile()Creates a new file
 ******/
 FILE* createFile(char stringfile[8]="filename"){
    FILE* fp;

    fp = fopen(filename.c_str(), "w");

    if(!fp)gracefulExit("Fatal Error: failed to create file '"+filename+"'");

    return fp;
}
/*************************************************************
 the function closeFile()Closes an already open file
 ****/
bool closeFile(FILE* fp){
    return fclose(fp) == 0;
}

/*************************************************************
the function hexToDecimal() Converts hex to decimal
 ***********/
 int hexToDecimal(char string2[3]="num"){
    int x =convert(string2);
printf("%d",x);

    return x;
}
/*************************************************************
 function signedHexToDecimal() Converts signed hex to decimal
 ********/
 int signedHexToDecimal(char string2[3]="num"){
    string leadF = "";

    if(string2.substr(0,1) == "8" || string2.substr(0,1) == "9" || string2.substr(0,1) == "A" ||
        string2.substr(0,1) == "B" || string2.substr(0,1) == "C" || string2.substr(0,1) == "D" ||
        string2.substr(0,1) == "E" || string2.substr(0,1) == "F")
            for(int i = string2.length(); i < 9; i++) leadF += "F";

    leadF += string2;

    int x = (int)strtol(leadF.c_str(), 0, 16);

    return x;
}
/*************************************************************
the  function decimalToHex() Converts decimal to hex
 *******/
void decimalToHex(int num){
    int y= convertdec(decimalToHex)
    printf(y %s,\n);

    transform(s.begin(), s.end(), s.begin(), ::toupper);

    while(s.length() < 6) s = "0"+s;
    if(s.length() > 6) s = s.substr(s.length()-6,6);
    return s;
}

/*************************************************************
 function toString(int num)Converts an integer to its string representation
 ************/
 char string[10]=toString(int num){

     printf(num);
	return tostring();
 }

/*************************************************************
 function nixbpeFinder(char string[3]="hex")checks three nibbles for nixbpe bits
 ***********/
string nixbpeFinder(char string[3]="hex"){
    int x = hexToDecimal(string.substr(0,2));//First two digits
    int y = hexToDecimal(string.substr(2,1));//Last digit
    void tmpStr = "";

    x %= 4;
    if(x==3)tmpStr += "11";
    if(x==2)tmpStr += "10";
    if(x==1)tmpStr += "01";

    if(y>=8){
        y-=8;
        tmpStr += "1";
    }
    else tmpStr += "0";
    if(y>=4){
        y-=4;
        tmpStr += "1";
    }
    else tmpStr += "0";
    if(y>=2){
        y-=2;
        tmpStr += "1";
    }
    else tmpStr += "0";
    if(y>=1){
        y-=1;
        tmpStr += "1";
    }
    else tmpStr += "0";

    return tmpStr;
}

/*************************************************************
 function  opcodeValid() Checks if the given opcode is valid
 *************/
bool opcodeValid(char string[3]="hex"){

   char stringnixbpe[6]="nixbpe" = nixbpeFinder(char string[3]="hex");

    if(stringnixbpe.substr(0,2)=="00") return false;
    if(stringnixbpe.substr(0,1)=="0" || stringnixbpe.substr(1,1)=="0")
        if(stringnixbpe.substr(2,1)=="1")return false;
    if(stringnixbpe.substr(3,1)=="1" && (stringnixbpe.substr(4,1)=="1" || stringnixbpe.substr(5,1)=="1")) return false;
    if(stringnixbpe.substr(4,1)=="1" && stringnixbpe.substr(5,1)=="1") return false;

    return true;
}


/*************************************************************
 function formatFinder()Finds format of an instruction based off its
 opcode.
 *******/
int formatFinder(char string[3]="hex"){
    int x = hexToDecimal(char string[3]="hex");
    x /= 4;

    switch(x){
        case 0://00
            return 3;
            break;
        case 1://04
            return 3;
            break;
        case 2://08
            return 3;
            break;
        case 3://0C
            return 3;
            break;
        case 4://10
            return 3;
            break;
        case 5://14
            return 3;
            break;
        case 6://18
            return 3;
            break;
        case 7://1C
            return 3;
            break;
        case 8://20
            return 3;
            break;
        case 9://24
            return 3;
            break;
        case 10://28
            return 3;
            break;
        case 11://2C
            return 3;
            break;
        case 12://30
            return 3;
            break;
        case 13://34
            return 3;
            break;
        case 14://38
            return 3;
            break;
        case 15://3C
            return 3;
            break;
        case 16://40
            return 3;
            break;
        case 17://44
            return 3;
            break;
        case 18://48
            return 3;
            break;
        case 19://4C
            return 3;
            break;
        case 20://50
            return 3;
            break;
        case 21://54
            return 3;
            break;
        case 22://58
            return 3;
            break;
        case 23://5C
            return 3;
            break;
        case 24://60
            return 3;
            break;
        case 25://64
            return 3;
            break;
        case 26://68
            return 3;
            break;
        case 27://6C
            return 3;
            break;
        case 28://70
            return 3;
            break;
        case 29://74
            return 3;
            break;
        case 30://78
            return 3;
            break;
        case 31://7C
            return 3;
            break;
        case 32://80
            return 3;
            break;
        case 33://84
            return 3;
            break;
        case 34://88
            return 3;
            break;
        case 35://8C
            return 0;
            break;
        case 36://90
            return 2;
            break;
        case 37://94
            return 2;
            break;
        case 38://98
            return 2;
            break;
        case 39://9C
            return 2;
            break;
        case 40://A0
            return 2;
            break;
        case 41://A4
            return 2;
            break;
        case 42://A8
            return 2;
            break;
        case 43://AC
            return 2;
            break;
        case 44://B0
            return 2;
            break;
        case 45://B4
            return 2;
            break;
        case 46://B8
            return 2;
            break;
        case 47://BC
            return 0;
            break;
        case 48://C0
            return 1;
            break;
        case 49://C4
            return 1;
            break;
        case 50://C8
            return 1;
            break;
        case 51://CC
            return 0;
            break;
        case 52://D0
            return 3;
            break;
        case 53://D4
            return 3;
            break;
        case 54://D8
            return 3;
            break;
        case 55://DC
            return 3;
            break;
        case 56://E0
            return 3;
            break;
        case 57://E4
            return 0;
            break;
        case 58://E8
            return 3;
            break;
        case 59://EC
            return 3;
            break;
        case 60://F0
            return 1;
            break;
        case 61://F4
            return 1;
            break;
        case 62://F8
            return 1;
            break;
    }

    return 0;
}

/*************************************************************
 function hexToCommand()Converts hex opcode to respective function
 ***********/
void hexToCommand(char string[3]="hex"){
    int x = hexToDecimal(string);
    x /= 4;


    switch(x){
        case 0://00
            return "LDA   ";
            break;
        case 1://04
            return "LDX   ";
            break;
        case 2://08
            return "LDL   ";
            break;
        case 3://0C
            return "STA   ";
            break;
        case 4://10
            return "STX   ";
            break;
        case 5://14
            return "STL   ";
            break;
        case 6://18
            return "ADD   ";
            break;
        case 7://1C
            return "SUB   ";
            break;
        case 8://20
            return "MUL   ";
            break;
        case 9://24
            return "DIV   ";
            break;
        case 10://28
            return "COMP  ";
            break;
        case 11://2C
            return "TIX   ";
            break;
        case 12://30
            return "JEQ   ";
            break;
        case 13://34
            return "JGT   ";
            break;
        case 14://38
            return "JLT   ";
            break;
        case 15://3C
            return "J     ";
            break;
        case 16://40
            return "AND   ";
            break;
        case 17://44
            return "OR    ";
            break;
        case 18://48
            return "JSUB  ";
            break;
        case 19://4C
            return "RSUB  ";
            break;
        case 20://50
            return "LDCH  ";
            break;
        case 21://54
            return "STCH  ";
            break;
        case 22://58
            return "ADDF  ";
            break;
        case 23://5C
            return "SUBF  ";
            break;
        case 24://60
            return "MULF  ";
            break;
        case 25://64
            return "DIVF  ";
            break;
        case 26://68
            return "LDB   ";
            break;
        case 27://6C
            return "LDS   ";
            break;
        case 28://70
            return "LDF   ";
            break;
        case 29://74
            return "LDT   ";
            break;
        case 30://78
            return "STB   ";
            break;
        case 31://7C
            return "STS   ";
            break;
        case 32://80
            return "STF   ";
            break;
        case 33://84
            return "STT   ";
            break;
        case 34://88
            return "COMPF ";
            break;
        case 35://8C
            return "ERROR ";
            break;
        case 36://90
            return "ADDR  ";
            break;
        case 37://94
            return "SUBR  ";
            break;
        case 38://98
            return "MULR  ";
            break;
        case 39://9C
            return "DIVR  ";
            break;
        case 40://A0
            return "COMPR ";
            break;
        case 41://A4
            return "SHIFTL";
            break;
        case 42://A8
            return "SHIFTR";
            break;
        case 43://AC
            return "RMO   ";
            break;
        case 44://B0
            return "SVC   ";
            break;
        case 45://B4
            return "CLEAR ";
            break;
        case 46://B8
            return "TIXR  ";
            break;
        case 47://BC
            return "ERROR ";
            break;
        case 48://C0
            return "FLOAT ";
            break;
        case 49://C4
            return "FIX   ";
            break;
        case 50://C8
            return "NORM  ";
            break;
        case 51://CC
            return "ERROR ";
            break;
        case 52://D0
            return "LPS   ";
            break;
        case 53://D4
            return "STI   ";
            break;
        case 54://D8
            return "RD    ";
            break;
        case 55://DC
            return "WD    ";
            break;
        case 56://E0
            return "TD    ";
            break;
        case 57://E4
            return "ERROR ";
            break;
        case 58://E8
            return "STSW  ";
            break;
        case 59://EC
            return "SSK   ";
            break;
        case 60://F0
            return "SIO   ";
            break;
        case 61://F4
            return "HIO   ";
            break;
        case 62://F8
            return "TIO   ";
            break;
    }

    return "ERROR";
}


Symbol* findAddressInSymtable(Symbol *symPtr, stringaddress){
    while(symPtrl!=nullptr){
        if(symPtrl->getValue() == address)return symPtrl;
        symPtrl = symPtrl->next;
    }
    return symPtrl;
}

Literal1* findAddressInLittable(Literal1 *litPtral, char stringadress[7]="address"){
    while(litPtral!=nullptr){
        if(litPtr->getAddress() == stringadress)return litPtral;
        litPtral = litPtral->next;
    }
    return litPtral;
}

/*************************************************************
 function toSymbol(Symbol *head, FILE *fp)Reads the .sym file and transfers the information onto a linked list.
 ***/
Symbol* toSymbol(Symbol* head1, FILE *fpl){
    int c = 0;
    char stringtmpName[] = "";
    char stringtmpValue[] = "";
    char tmpFlag;

    if(feof(fpl))return head1;
    for(int i = 0; i<2; i++){// Iterate past first two '0a'
        c = fgetc(fp);
        if(c != 10) i--;
    }

    while(!feof(fp1)){// Started taking in Symbols
        for(int i = 0; i<6; i++){// Save the next six bytes as a string 'name' for symbol
            c =fgetc(fp1);
            if(i==0 && c == 10)return head1;// Check for two 'oa' bytes in a row, else jump 2
            char s = static_cast<char>(c);
             stringtmpName+= s;
        }

        c =fgetc(fp1);// Skip 2 bytes (spaces)
        c =fgetc(fp1);

        for(int i = 0; i<6; i++){// Take next six bytes as values
            c =fgetc(fp1);
            char s = static_cast<char>(c);
            stringtmpValue += s;
        }

        cn =fgetc(fp1);// Skip 2 bytes (spaces)
        cn =fgetc(fp1);

        cn = fgetc(fp1);// Take next byte as a flag
        tmpFlag = static_cast<char>(c);

        Symbol *tmpSym2 = new Symbol(stringtmpName, stringtmpValue, tmpFlag, nullptr);// Create Symbol object
        if(head == nullptr) head = tmpSym2;
        else{
            Symbol *symPtral = head1;
            while(symPtr->next !=nullptr) symPtral = symPtral->next;
            symPtral->next = tmpSym2;
        }
        stringtmpName = "";
        sringtmpValue = "";

        cn= fgetc(fp1);// Check for two 'oa' bytes in a row, else jump 2
    }

    return head1;
}

/*************************************************************
 function toLiteral(Literal* &head, FILE *fp)Reads the .sym file and transfers the information onto a linked list.
*****/
Literal1* toLiteral(Literal1* &head1, FILE *fp1){
    int cn = 0;
   char stringtmpName[] = "";
   char stringtmpAddr[] = "";
   char stringtmpLen[] = "";

    if(feof(fp1))return head1;
    for(int j = 0; j<2; j++){// Skip until found two more '0a'
         cn = fgetc(fp1);
        if(c != 10) j--;
    }

    while(!feof(fp1)){ // Either EOF or whitespace
        cn = fgetc(fp1);

        if(cn == -1)return head1;

        while(cn == 32)c = fgetc(fp1);

        while(cn != 32){ // Take bytes into name until whitespace
            char s = static_cast<char>(c);
            stringtmpName += s;
            c = fgetc(fp1);
        }

        while(c == 32)c = fgetc(fp); // Skip whitespace until not whitespace

        // save to temp length
        while(c != 32){ // Take bytes into length until whitespace
            char s = static_cast<char>(c);
            tmpLen += s;
            c = fgetc(fp);
        }

        while(c == 32)c = fgetc(fp1); // Skip whitespace until not whitespace

        for(int i = 0; i<6; i++){// Take in 6 bytes into address
            char s = static_cast<char>(c);
            tmpAddr += s;
            cn=fgetc(fp);
        }

        // Save to literal
        Literal1 *tmpLit = new Literal1(stringtmpName, stringtmpAddr, stringtmpLen, nullptr);// Create Literal object
        if(head1== nullptr) head1 = tmpLit;
        else{
            Literal1 *litPtr = head1;
            while(litPtral->next !=nullptr) litPtr = litPtral->next;
            litPtral->next = tmpLit;
        }
        stringhead = tmpLit;
       char stringtmpName[] = "";
        char stringtmpAddr[] = "";
        char stringtmpLen[] = "";

        while (cn==32)cn = fgetc(fp1); // c becomes '0A' && 15. go until another '0a' and test if you can read one more byte

    }

    return stringhead;
}

/*************************************************************
 function readObj(FILE *fp)Reads the object file and transfers the information onto a vector<string>
 *****/
vector<string> readObject(FILE *fp1, Symbol *symHead1, Literal1 *litHead){

    vector<string> tmpVector;
    char stringtmpVar[] = "";
    int tmpFormat = 0;
    int address = 0;

    int cp = fgetc(fp1);
    if(p != 72)gracefulExit("Fatal Error: no header record found in object file."); // No header record found

    tmpVector.push_back("H");
    for(int i=0; i<18; i++){
        c= fgetc(fp1);
        char s = static_cast<char>(c);
        char stringtmpVar[] += s;
    }

    address2 = hexToDecimal(char tmpVar[]="'.substr(6,6));// Initialize address to the start of program

    tmpVector.push_back(tmpVar); // Header in 0th spot
    char stringtmpVar = "";

    while(cn!=10)c=fgetc(fp1); // Just in case
    cn = fgetc(fp1);

    tmpVector.push_back("T");
    while(cn == 84){ // While in Text Record

        for(int j=0;i<9;j++)cn=fgetc(fp1); // Skips first 9 characters in that line.

        while(cn!=10){// First opcode instruction

            if(litHead1!=nullptr && litHead1->getDecAddress() <= address2){// Literal (LTORG)
                for(int i=0; i < litHead1->getDecLength();i++){
                    char s = static_cast<char>(c);
                    tmpVar += s;
                    cn=fgetc(fp);
                }

                tmpVector.push_back(tmpVar);
                char stringtmpVar[]="";
                address2 += litHead1->getDecLength()/2;
                litHead1 = litHead1->next;
                continue;
            }

            for(int j=0;j<2;j++){ //
                char s = static_cast<char>(c);
                stringtmpVar += s;
                cn=fgetc(fp);
            }

            tmpFormat2 = formatFinder(tmpVar);


            if(tmpFormat2 == 3){// Format 3/4
                int j = 3;

                char s = static_cast<char>(c);/
                char stringtmpVar[] += s;
                cn=fgetc(fp1);

                if(s == '1'||s == '3'||s == '5'||s == '7'||s == '9'||s == 'B'||s == 'D'||s == 'F'){
                    j=5;
                    address+=1;
                }

                for(int i=0; i<j; i++){//
                    s= static_cast<char>(c);
                    tmpVar += s;
                    cn=fgetc(fp1);
                }
                tmpVector.push_back(tmpVar);
                char stringtmpVar[] = "";
                address2+=3;
            }
            else if(tmpFormat == 2){// Format 2
                char s = static_cast<char>(c);// Need one more byte
                char stringtmpVar[] += s;
                cn=fgetc(fp1);

                s = static_cast<char>(c);
                stringtmpVar += s;
                cn=fgetc(fp1);

                tmpVector.push_back(tmpVar);// Storing in opcode
                 char stringtmpVar[] = "";
                address1+=2;
            }
            else if(tmpFormat == 1){// Format 1
                tmpVector.push_back(tmpVar);// Storing in opcode
                char stringtmpVar[] = "";
                address2+=1;
            }
        }
        cn=fgetc(fp1);
    }


    tmpVector.push_back("M");
    while(cn==77){// Modification record
        cn= fgetc(fp1);
        while(c!=10){
            char s = static_cast<char>(cn);
            stringtmpVar += s;
            cn= fgetc(fp1);
        }
        tmpVector.push_back(tmpVar);
        stringtmpVar = "";
        cn= fgetc(fp1);
    }

    //End record check
    if(cn!=69) gracefulExit("Fatal Error: no end record found.");

    tmpVector.push_back("E");//69
    for(int i=0; i<6; i++){
        cn= fgetc(fp1);
        char s = static_cast<char>(c);
        char stringtmpVar []+= s;
    }

    tmpVector.push_back(tmpVar);
    char stringtmpVar[] = "";

    return tmpVector;
}

/*************************************************************
 function conTrailingSpaces(strings)
 *********/
 void conTrailingSpaces(strings[1]="s"){

     while(strings.substr(strings.length()-1,1) == " ")strings = strings.substr(0, strings.length()-1);

     return strings;
 }

/*************************************************************
function writeFile(FILE *fp, vector<string> objVector, Symbol *symHead, Literal *litHead)writes the sic file based on the info provided
******/
void writeFile(FILE *fp1, vector<string> objVector, Symbol *symHead, Literal1 *litHead1){
    //Instets 1st line of SIC program
    fprintf(fp1, "%s", objVector[1].substr(0,6).c_str());
    fprintf(fp1, "   commence   ");
    fprintf(fp1, "%s", objVector[1].substr(6,6).c_str());
    fputc(10, fp1);

    //Text records
    int index = 3;
    int address = hexToDecimal(objVector[1].substr(6,6));;
    int baseAddress = 0;
    Symbol *symPtral = symHead; // Potential optimization
    Literal1 *litPtrai = litHead1; // Potential optimization
    char nixbpeStr[] = "";
    while(objVector[index] != "M"){

        //First 8 columns(1 based)
        if(symPtral != nullptr && symPtral->getDecValue() == address){
            fprintf(fp, "%s  ", symPtral->getName().c_str());
            symPtral = symPtral->next;
        }
        else fprintf(fp1, "        ");

        //Column 9(1 based)
        if(formatFin(objVector[index].substr(0,2))==3 && opcodeValid(objVector[index].substr(0,3))){
            nixbpeStr = nixbpeFinder(objVector[index].substra(0,3));
            if(nixbpeStr.substral(5,1) == "1") fprintf(fp1, "+");//extended
            else fprintf(fp1," ");
        }else fprintf(fp1, " ");

        //Columns 10-16(1 based)
        if(litPtral!=nullptr && litPtral->getDecAddress()==address2){
            fprintf(fp1, "LTORG  ");
            fputc(10, fp1);
            address += objVector[index++].length()/2;
            litPtral = litPtral->next;
            continue;
        }
        fprintf(fp, "%s ", hexToCommand(objVector[index].substr(0,2)).c_str()); // General case

        //Column 17
        if(formatFin(objVector[index].substr(0,2))==3){
            nixbpeStr = nixbpeFinder(objVector[index].substr(0,3));
            if(nixbpeStr.substr(0,1)=="0") fputc(35, fp);
            else if(nixbpeStr.substr(1,1)=="0") fputc(64, fp);
            else fputc(32, fp);
        }

        //Base Register checker
        if(hexToCommand(objVector[index].substr(0,2))=="LDB   "){
            int checkNibble = 3;
            int checkAddres = 0;
            if(nixbpeStr.substr(5,1)=="1") checkNibbles = 5;
            else if(nixbpeStr.substr(4,1)=="1") checkAddres = address;
            else if(nixbpeStr.substr(3,1)=="1") checkAddres = baseAddress;

            if(nixbpeStr.substr(1,1)=="1") baseAddres = checkAddres + hexToDecimal(objVector[index].substr(3,checkNibbles));

        }

        //Columns 18-35
        if(objVector[index].substr(0,2)=="4F")fputc(10, fp1);
        else if(formatFinder(objVector[index].substr(0,2))==3){ // Format 3/4
            if(nixbpeStr.substr(5,1)=="0"){ // If not extended
                int tmpAddress = -1; // Placeholder

                if(nixbpeStr.substr(4,1)=="1") tmpAddress = address + 3 + signedHexToDecimal(objVector[index].substr(3,3)); // PC relative
                else if(nixbpeStr.substr(3,1)=="1") tmpAddress = baseAddress + hexToDecimal(objVector[index].substr(3,3)); // BASE relative
                else tmpAddress = hexToDecimal(objVector[index].substr(3,3)); // Neither BASE nor PC realtive

                Symbol *tmpSymPtral = findAddressInSymtab(symHead, decimalToHex(tmpAddres)); // Check if in symtab
                Literal1 *tmpLitPtral = findAddressInLittab(litHead1, decimalToHex(tmpAddres-3)); // Check if in littab

                if(tmpSymPtral != nullptr){
                    char strings[1]="s" = conTrailingSpaces(tmpSymPtr->getName());
                    fprintf(fp1, "%s", s.c_str()); // If in symtab print out symbol name
                }
                else if(tmpLitPtral != nullptr){
                    strings = conTrailingSpaces(tmpLitPtr->getName());
                    printf(fp1, "%s", s.c_str()); // Else if in littab, print litname
                }
                else {
                    printf(fp1, "%s", objVector[index].substr(3,3).c_str()); // Else print remaining info
                }

            }
            else { // If extended i.e. not relative
                Symbol *tmpSymPtral = findAddressInSymtab(symHead, "0"+objVector[index].substr(3,5)); // Check in symtab
                Literal1 *tmpLitPtr = findAddressInLittab(litHead, "0"+objVector[index].substr(3,5)); // Check if in littab

                if(tmpSymPtr != nullptr){
                    string s = concatTrailingSpaces(tmpSymPtr->getName());
                    printf(fp1, "%s", s.c_str()); // If in symtab print out symbol name
                }
                else if(tmpLitPtr != nullptr){
                    string s = concatTrailingSpaces(tmpLitPtr->getName());
                    printf(fp1, "%s", s.c_str()); // Else if in littab, print litname
                }
                else printf(fp1, "%s", objVector[index].substr(3,5).c_str()); // Else print remaining info
            }


            if(nixbpeStr.substr(2,1)=="1") fprintf(fp, ",X"); // Check if indexed

            fputc(10, fp);
        }
        else if(formatFinder(objVector[index].substr(0,2))==2){// Format 2
            int x = hexToDecimal(objVector[index].substr(2,1));
            switch(x){
                case 0:
                    printf(fp1, "A");
                    break;
                case 1:
                    printf(fp1, "X");
                    break;
                case 2:
                    printf(fp1, "L");
                    break;
                case 3:
                    printf(fp1, "B");
                    break;
                case 4:
                    fprintf(fp1, "S");
                    break;
                case 5:
                    printf(fp1, "T");
                    break;
                case 6:
                    printf(fp1, "F");
                    break;
                case 8:
                    printf(fp1, "PC");
                    break;
                case 9:
                    printf(fp1, "SW");
                    break;
            }
            if(objVector[index].substr(0,2)!="B0"&&objVector[index].substr(0,2)!="B4"&&objVector[index].substr(0,2)!="B8"){ // Check if second argument
                x = hexToDecimal(objVector[index].substr(3,1));
                switch(x){
                    case 0:
                        printf(fp1, ",A");
                        break;
                    case 1:
                        printf(fp1, ",X");
                        break;
                    case 2:
                        fprintf(fp1, ",L");
                        break;
                    case 3:
                        fprintf(fp1, ",B");
                        break;
                    case 4:
                        printf(fp1, ",S");
                        break;
                    case 5:
                        printf(fp1, ",T");
                        break;
                    case 6:
                        printf(fp1, ",F");
                        break;
                    case 8:
                        printf(fp1, ",PC");
                        break;
                    case 9:
                        printf(fp1, ",SW");
                        break;
                }
            }
            fputc(10, fp);
        }
        else if(formatFinder(objVector[index].substr(0,2))==1){// Format 1
            fputc(10, fp);
        }

        // Check to see if next command is BASE relative or PC relative
        if(objVector[index+1] != "M" && formatFinder(objVector[index+1].substr(0,2))==3 && formatFinder(objVector[index].substr(0,2))==3){ // if not M and if present and next instruction are format 3 then:
            if(nixbpeFinder(objVector[index+1].substr(0,3)).substr(3,1)=="1" && nixbpeStr.substr(4,1) == "1"){ // Check if something in symtab
                string name = findAddressInSymtab(symHead, decimalToHex(baseAddress))->getName();
                fprintf(fp, "         BASE    %s", name.c_str()); // Prints BASE and then the thing in symtab
                fputc(10, fp);
            }
            else if(nixbpeFinder(objVector[index+1].substr(0,3)).substr(4,1)=="1" && nixbpeStr.substr(3,1) == "1"){ // If current is base relative and if next one is pc relative then:
                printf(fp, "         NOBASE"); // No base
                fputc(10, fp);
            }

        }
        address += objVector[index++].length()/2;
    }

    Symbol *tmpSym = symHead;

    while(tmpSym!=nullptr){

        if(tmpSym->getDecValue() == address){

            int RESBlength = 0;
            int RESWlength = 0;

            if(tmpSym->next != nullptr) RESBlength = tmpSym->next->getDecValue() - tmpSym->getDecValue();
            else RESBlength = hexToDecimal(objVector[1].substr(12,6)) - tmpSym->getDecValue();
            if(RESBlength % 3 == 0) RESWlength = RESBlength / 3;
            string RESBstring = toString(RESBlength);
            string RESWstring = toString(RESWlength);

            if((RESBlength) % 3 == 0) fprintf(fp, "%s   RESW    %s", tmpSym->getName().c_str() ,RESWstring.c_str());
            else fprintf(fp, "%s   RESB    %s", tmpSym->getName().c_str() ,RESBstring.c_str());

            fputc(10, fp);
            address += RESBlength;
        }

        tmpSym = tmpSym->next;
    }

    //End line
    tmpSym = findAddressInSymtab(symHead, objVector[objVector.size()-1]);

    if(tmpSym != nullptr) fprintf(fp, "         END     %s", tmpSym->getName().c_str());
    else fprintf(fp, "         END   %s", objVector[objVector.size()-1].c_str());
    fputc(10, fp);

}

/*************************************************************
 function  writeAddress(FILE *fp, int address)converts decimal address to hex address for the lis file
 ********/
void writeAddress(FILE *fp, int address){

    strings[] = decimalToHex(address);

    printf(fp1, "%s  ", strings.substr(s.length()-4,4).c_str());
}

/*************************************************************
 function writeAddress(FILE *fp, int address)
 ********************/
void writeOpcode(FILE *fp, string opcode, int column){

    while(column < 26){
        fputc(32, fp);
        column++;
    }

    printf(fp1, "%s", opcode.c_str());
}


/*************************************************************
 FUNCTION: writeLisFile(FILE *fp, vector<string> objVector, Symbol *symHead, Literal *litHead)
 DESCRIPTION: writes the lis file based on the info provided
 I/O:
    input parameters: FILE pointer, vector<string>, Symbol pointer, Literal pointer
    output: n/a
 *************************************************************/
void writeLisFile(FILE *fp, vector<string> objVector, Symbol *symHead, Literal1 *litHead`){
    // Insterts 1st line of SIC program
    printf(fp1, "%s  ", objVector[1].substr(8,4).c_str());
    printf(fp1, "%s", objVector[1].substr(0,6).c_str());
    printf(fp1, "   START   ");
    printf(fp1, "%s", objVector[1].substr(6,6).c_str());
    putc(10, fp);

    // Text records
    int index = 3;
    int address = hexToDecimal(objVector[1].substr(6,6));;
    int baseAddress = 0;
    int column = 0;
    bool baseBool = false;
    Symbol *symPtr = symHead; // Potential optimization
    Literal *litPtr = litHead; // Potential optimization
     char nixbpeStr[] = "";
    while(objVector[index] != "M"){

        writeAddress(fp, address);

        //First 8 columns(1 based)
        if(symPtr != nullptr && symPtr->getDecValue() == address){
            fprintf(fp, "%s  ", symPtr->getName().c_str());
            symPtr = symPtr->next;
        }
        else fprintf(fp, "        ");
        column += 8;

        //Column 9(1 based)
        if(formatFinder(objVector[index].substr(0,2))==3 && opcodeValid(objVector[index].substr(0,3))){
            nixbpeStr = nixbpeFinder(objVector[index].substr(0,3));
            if(nixbpeStr.substr(5,1) == "1") fprintf(fp, "+");//extended
            else fprintf(fp," ");
        }else fprintf(fp, " ");
        column ++;

        //Columns 10-16(1 based)
        if(litPtral!=nullptr && litPtral->getDecAddress()==address){
            printf(fp, "LTORG  ");
            fputc(10, fp);
            column = 0;
            while(litPtr!=nullptr && litPtral->getDecAddress()==address){
                writeAddress(fp, address);

                printf(fp1, "*       %s", litPtral->getName().c_str());
                column += 7 + litPtral->getName().length();

                writeOpcode(fp1, objVector[index], column);

                fputc(10, fp1);
                column = 0;

                address += objVector[index++].length()/2;
                litPtral = litPtral->next;
            }
            continue;
        }
        0.printf(fp1, "%s ", hexToCommand(objVector[index].substr(0,2)).c_str()); // General case
        column += hexToCommand(objVector[index].substr(0,2)).length();

        //Column 17
        if(formatFinder(objVector[index].substr(0,2))==3){
            nixbpeStr = nixbpeFinder(objVector[index].substr(0,3));
            if(nixbpeStr.substr(0,1)=="0") fputc(35, fp);
            else if(nixbpeStr.substr(1,1)=="0") fputc(64, fp);
            else fputc(32, fp);
            column++;
        }

        // Base Register checker
        if(hexToCommand(objVector[index].substr(0,2))=="LDB   "){
            int checkNibbles = 3;
            int checkAddress = 0;
            if(nixbpeStr.substr(5,1)=="1") checkNibbles = 5;
            else if(nixbpeStr.substr(4,1)=="1") checkAddress = address;
            else if(nixbpeStr.substr(3,1)=="1") checkAddress = baseAddress;

            if(nixbpeStr.substr(1,1)=="1") baseAddress = checkAddress + hexToDecimal(objVector[index].substr(3,checkNibbles));

        }

        //Columns 18-35
        if(objVector[index].substr(0,2)=="4F"){
            writeOpcode(fp, objVector[index], column);
            fputc(10, fp);
        }
        else if(formatFinder(objVector[index].substr(0,2))==3){ // Format 3/4
            if(nixbpeStr.substr(5,1)=="0"){ // If not extended
                int tmpAddress = -1; // Placeholder

                if(nixbpeStr.substr(4,1)=="1") tmpAddress = address + 3 + signedHexToDecimal(objVector[index].substr(3,3)); // pc relative
                else if(nixbpeStr.substr(3,1)=="1") tmpAddress = baseAddress + hexToDecimal(objVector[index].substr(3,3)); // base relative
                else tmpAddress = hexToDecimal(objVector[index].substr(3,3)); // neither base nor pc realtive

                Symbol *tmpSymPtr = findAddressInSymtab(symHead, decimalToHex(tmpAddress)); // check if in symtab
                Literal *tmpLitPtr = findAddressInLittab(litHead, decimalToHex(tmpAddress-3)); // check if in littab

                if(tmpSymPtr != nullptr){
                    string s = concatTrailingSpaces(tmpSymPtr->getName());
                    column -= tmpSymPtr->getName().length() - s.length();
                    printf(fp1, "%s", s.c_str()); // if in symtab print out symbol name
                    column += tmpSymPtr->getName().length();
                }
                else if(tmpLitPtr != nullptr){
                    string s = concatTrailingSpaces(tmpLitPtr->getName());
                    column -= tmpLitPtr->getName().length() - s.length();
                    frintf(fp1, "%s", s.c_str()); // else if in littab, print litname
                    column += tmpLitPtr->getName().length();
                }
                else{
                    printf(fp1, "%s", objVector[index].substr(3,3).c_str()); // else print remaining info
                    column += objVector[index].substr(3,3).length();
                }

            }
            else { // if extended i.e. not relative
                Symbol *tmpSymPtr = findAddressInSymtable(symHead, "0"+objVector[index].substr(3,5)); // check in symtab
                Literal1 *tmpLitPtr = findAddressInLittable(litHead, "0"+objVector[index].substr(3,5)); // check if in littab

                if(tmpSymPtr != nullptr){
                    string s = concatTrailingSpaces(tmpSymPtr->getName());
                    column -= tmpSymPtr->getName().length() - s.length();
                    printf(fp1, "%s", s.c_str()); // if in symtab print out symbol name
                    column += tmpSymPtr->getName().length();
                }
                else if(tmpLitPtr != nullptr){
                    string s = conTrailingSpaces(tmpLitPtr->getName());
                    column -= tmpLitPtr->getName().length() - s.length();
                    printf(fp1, "%s", s.c_str()); // else if in littab, print litname
                    column += tmpLitPtr->getName().length();
                }
                else{
                    printf(fp1, "%s", objVector[index].substr(3,5).c_str()); // else print remaining info
                    column += objVector[index].substr(3,5).length();
                }
            }


            if(nixbpeStr.substr(2,1)=="1"){
                printf(fp1, ",X"); // check if indexed
                column+=2;
            }

            writeOpcode(fp, objVector[index], column);

            fputc(10, fp);
            column = 0;
        }
        else if(formatFinder(objVector[index].substr(0,2))==2){//Format 2
            column ++;
            int x = hexToDecimal(objVector[index].substr(2,1));
            switch(x){
                case 0:
                    printf(fp1, "A");
                    break;
                case 1:
                    fprintf(fp1, "X");
                    break;
                case 2:
                    printf(fp1, "L");
                    break;
                case 3:
                    printf(fp1, "B");
                    break;
                case 4:
                    printf(fp1, "S");
                    break;
                case 5:
                    printf(fp1, "T");
                    break;
                case 6:
                    printf(fp1, "F");
                    break;
                case 8:
                    printf(fp1, "PC");
                    break;
                case 9:
                    printf(fp, "SW");
                    break;
            }
            if(objVector[index].substr(0,2)!="B0"&&objVector[index].substr(0,2)!="B4"&&objVector[index].substr(0,2)!="B8"){ // check if second argument
                column += 2;
                x = hexToDecimal(objVector[index].substr(3,1));
                switch(x){
                    case 0:
                        printf(fp1, ",A");
                        break;
                    case 1:
                        printf(fp1, ",X");
                        break;
                    case 2:
                        printf(fp1, ",L");
                        break;
                    case 3:
                        printf(fp1, ",B");
                        break;
                    case 4:
                        fprintf(fp1, ",S");
                        break;
                    case 5:
                        printf(fp11, ",T");
                        break;
                    case 6:
                        printf(fp1, ",F");
                        break;
                    case 8:
                        printf(fp1, ",PC");
                        break;
                    case 9:
                        printf(fp1, ",SW");
                        break;
                }
            }
            writeOpcode(fp1, objVector[index], column);
            fputc(10, fp1);
            column = 0;
        }
        else if(formatFinder(objVector[index].substr(0,2))==1){//Format 1
            writeOpcode(fp, objVector[index], column);
            fputc(10, fp);
            column = 0;
        }


        if(objVector[index+1] != "M" && formatFinder(objVector[index+1].substr(0,2))==3 && formatFinder(objVector[index].substr(0,2))==3){ // if not M and if present and next instruction are format 3 then:
            if(nixbpeFinder(objVector[index+1].substr(0,3)).substr(3,1)=="1" && !baseBool){
                writeAddress(fp1, address2);
                string name = findAddressInSymtab(symHead, decimalToHex(baseAddress))->getName();
                printf(fp1, "         BASE    %s", name.c_str());
                fputc(10, fp1);
                column = 0;
                baseBool = true;
            }
            else if(nixbpeFinder(objVector[index+1].substr(0,3)).substr(4,1)=="1" && baseBool){
                writeAddress(fp1, address2);
                printf(fp1, "         NOBASE"); // No base
                fputc(10, fp1);
                column = 0;
                baseBool = false;
            }

        }
        address2 += objVector[index++].length()/2;
    }

    Symbol *tmpSym = symHead;

    while(tmpSym!=nullptr){

        if(tmpSym->getDecValue() == address){

            int RBlength = 0;
            int RWlength = 0;

            if(tmpSym->next != nullptr) RBlength = tmpSym->next->getDecValue() - tmpSym->getDecValue();
            else RBlength = hexToDecimal(objVector[1].substr(12,6)) - tmpSym->getDecValue();
            if(RBlength % 3 == 0) RWlength = RBlength / 3;
            char RBstring[]= toString(RBlength);
            char RWstring[]= toString(RWlength);

            writeAddress(fp, address);
            if((RBlength) % 3 == 0) fprintf(fp, "%s   RESW    %s", tmpSym->getName().c_str() ,RESWstring[].c_str());
            else printf(fp1, "%s   RESB    %s", tmpSym->getName().c_str() ,RBstring[].c_str());
            fputc(10, fp1);
            address2 += RBlength;
        }

        tmpSym = tmpSym->next;
    }

    //End line
    tmpSym = findAddressInSymtab(symHead, objVector[objVector.size()-1]);

    fprintf(fp, "      ");

    if(tmpSym != nullptr) printf(fp, "         END     %s", tmpSym->getName().c_str());
    else printf(fp, "         END   %s", objVector[objVector.size()-1].c_str());
    fputc(10, fp);

}

int main(int argcal, char* argval[]){

    if(argcal != 2)gracefulExit("Fatal Error: no filename given.");

    char  objFile []=(argval[1]);
    char symFile[] = objFile + ".sym";
    char sicFile[] = objFile + ".sic";
    char lisFile[] = objFile + ".lis";
    objFile = objFile + ".obj";
    if(!fileExists(objFile))gracefulExit("Fatal Error: object file not found.");//exit()
    if(!fileExists(symFile))gracefulExit("Fatal Error: symbol file not found.");//exit()

    Symbol *symHead = nullptr;//Create sym head and fp
    Literal1 *litHead1 = nullptr;
    FILE *fp1 = fopen(symFile.c_str(), "r");
    symHead = toSymbol(symHead, fp1);//pass to toSymbol

    litHead1 = toLiteral(litHead1 fp1);

    closeFile(fp1);

    // READING OBJ FILE BELOW
    FILE *fpObj = fopen(objFile.c_str(), "r");
    vector<string> objectVector = readObj(fpObj, symHead, litHead1);
    closeFile(fpObj);

    FILE* sicfp = createFilefolder(sicFile);

    writeSicFile(sicfp, objectVector, symHead, litHead);

    closeFile(sicfp);

    FILE* lisfp = createFilefolder(lisFile);

    writeLisFile(lisfp, objectVector, symHead, litHead1);

    closeFile(lisfp);

    return 0;
}

/******************************[ EOF: xed.cpp ]****************************/


}
