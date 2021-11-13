//
//  main.cpp
//  SecurityProject
//
//  Created by Mohanad Safwat on 10/11/2021.
//

#include <iostream>
#include "string.h"
#include "sstream"
#include "bitset"

using namespace std;

string XOR(string firstInput, string secondInput){
    string result;
    for (int i = 0; i< firstInput.length(); i++) {
        if(firstInput[i] == '0' && secondInput[i] == '0')
            result.push_back('0');
        else if(firstInput[i] == '1' && secondInput[i] == '1')
            result.push_back('0');
        else
            result.push_back('1');
    }
    return result;
}

string hexToBinary(string hex){
    
    string binarySum;
    
    for(int i =0 ; i< hex.length();i++){
        switch (hex[i]) {
                case '0':
                binarySum += "0000";
                    break;
                case '1':
                binarySum +=  "0001";
                    break;
                case '2':
                binarySum +=  "0010";
                    break;
                case '3':
                binarySum +=  "0011";
                    break;
                case '4':
                binarySum +=  "0100";
                    break;
                case '5':
                binarySum +=  "0101";
                    break;
                case '6':
                binarySum +=  "0110";
                    break;
                case '7':
                binarySum +=  "0111";
                    break;
                case '8':
                binarySum +=  "1000";
                    break;
                case '9':
                binarySum +=  "1001";
                    break;
                case 'A':
                case 'a':
                binarySum +=  "1010";
                    break;
                case 'B':
                case 'b':
                binarySum +=  "1011";
                    break;
                case 'C':
                case 'c':
                binarySum +=  "1100";
                    break;
                case 'D':
                case 'd':
                binarySum +=  "1101";
                    break;
                case 'E':
                case 'e':
                binarySum +=  "1110";
                    break;
                case 'F':
                case 'f':
                binarySum +=  "1111";
                    break;
        }
    }
    
    return binarySum;
}
string binaryToHex(string binary){
    
    string hexSum;
    
    bitset<64> set(binary);
    stringstream res;
    res << hex << uppercase << set.to_ulong();
    return res.str();
    
}

int binaryToDecimal(string binary){
    
    return stoi(binary,0,2);
}


string decimalToBinary(int decimal){
    string binary;
        switch (decimal) {
                case 0:
                    binary = "0000";
                    break;
                case 1:
                    binary = "0001";
                    break;
                case 2:
                    binary = "0010";
                    break;
                case 3:
                    binary = "0011";
                    break;
                case 4:
                    binary = "0100";
                    break;
                case 5:
                    binary = "0101";
                    break;
                case 6:
                    binary = "0110";
                    break;
                case 7:
                    binary = "0111";
                    break;
                case 8:
                    binary = "1000";
                    break;
                case 9:
                    binary = "1001";
                    break;
                case 10:
                    binary = "1010";
                    break;
                case 11:
                    binary = "1011";
                    break;
                case 12:
                    binary = "1100";
                    break;
                case 13:
                    binary = "1101";
                    break;
                case 14:
                    binary = "1110";
                    break;
                case 15:
                    binary = "1111";
                    break;
        }
    return binary;
}

string expansion(string rightDataSide){
    
    return {rightDataSide[31],rightDataSide[0],rightDataSide[1],rightDataSide[2],rightDataSide[3],rightDataSide[4],rightDataSide[3],rightDataSide[4],rightDataSide[5],rightDataSide[6],rightDataSide[7],rightDataSide[8],rightDataSide[7],rightDataSide[8],rightDataSide[9],rightDataSide[10],rightDataSide[11],rightDataSide[12],rightDataSide[11],rightDataSide[12],rightDataSide[13],rightDataSide[14],rightDataSide[15],rightDataSide[16],rightDataSide[15],rightDataSide[16],rightDataSide[17],rightDataSide[18],rightDataSide[19],rightDataSide[20],rightDataSide[19],rightDataSide[20],rightDataSide[21],rightDataSide[22],rightDataSide[23],rightDataSide[24],rightDataSide[23],rightDataSide[24],rightDataSide[25],rightDataSide[26],rightDataSide[27],rightDataSide[28],rightDataSide[27],rightDataSide[28],rightDataSide[29],rightDataSide[30],rightDataSide[31],rightDataSide[0]};
    
}

string initialPermutation(string data){
    
    return {data[57],data[49],data[41],data[33],data[25],data[17],data[9],data[1],data[59],data[51],data[43],data[35],data[27],data[19],data[11],data[3],data[61],data[53],data[45],data[37],data[29],data[21],data[13],data[5],data[63],data[55],data[47],data[39],data[31],data[23],data[15],data[7],data[56],data[48],data[40],data[32],data[24],data[16],data[8],data[0],data[58],data[50],data[42],data[34],data[26],data[18],data[10],data[2],data[60],data[52],data[44],data[36],data[28],data[20],data[12],data[4],data[62],data[54],data[46],data[38],data[30],data[22],data[14],data[6]};
}

string firstPermutationChoice(string key){
    return {key[56],key[48],key[40],key[32],key[24],key[16],key[8],key[0],key[57],key[49],key[41],key[33],key[25],key[17],key[9],key[1],key[58],key[50],key[42],key[34],key[26],key[18],key[10],key[2],key[59],key[51],key[43],key[35],key[62],key[54],key[46],key[38],key[30],key[22],key[14],key[6],key[61],key[53],key[45],key[37],key[29],key[21],key[13],key[5],key[60],key[52],key[44],key[36],key[28],key[20],key[12],key[4],key[27],key[19],key[11],key[3]};
    
}

string secondPermutationChoice(string key){
    
    return {key[13],key[16],key[10],key[23],key[0],key[4],key[2],key[27],key[14],key[5],key[20],key[9],key[        22],key[18],key[11],key[3],key[25],key[7],key[15],key[6],key[26],key[19],key[12],key[1],key[                    40],key[51],key[30],key[36],key[46],key[54],key[29],key[39],key[50],key[44],key[32],key[47],key[                     43],key[48],key[38],key[55],key[33],key[52],key[45],key[41],key[49],key[35],key[28],key[31]};
}

string shiftLeftByOne(string key){
    string keyShifted;
    
    char shiftedChar = key[0];
    
    for (int i = 0; i< key.length() -1 ; i++) {
        keyShifted += key[i+1];
    }
    
    keyShifted += shiftedChar;
    
    return keyShifted;
}

string shiftLeftByTwo(string key){
    string keyShifted;
    
    char shiftedChar1 = key[0];
    char shiftedChar2 = key[1];
    
    for (int i = 0; i< key.length() -2; i++) {
        keyShifted += key[i+2];
    }
    
    keyShifted += shiftedChar1;
    keyShifted += shiftedChar2;

    
    return keyShifted;
}
string sBoxPermutation(string sBoxResult){
    return {
        sBoxResult[15],sBoxResult[6],sBoxResult[19],sBoxResult[20],sBoxResult[28],sBoxResult[11],sBoxResult[27],sBoxResult[16],sBoxResult[0],sBoxResult[14],sBoxResult[22],sBoxResult[25],sBoxResult[4],sBoxResult[17],sBoxResult[30],sBoxResult[9],sBoxResult[1],sBoxResult[7],sBoxResult[23],sBoxResult[13],sBoxResult[31],sBoxResult[26],sBoxResult[2],sBoxResult[8],sBoxResult[18],sBoxResult[12],sBoxResult[29],sBoxResult[5],sBoxResult[21],sBoxResult[10],sBoxResult[3],sBoxResult[24]};
}
string sBox(string toBeReduced){
    
    int sBoxes[8][4][16] ={ { 14, 4, 13, 1, 2, 15, 11, 8, 3, 10, 6, 12, 5, 9, 0, 7,0, 15, 7, 4, 14, 2, 13, 1, 10, 6, 12, 11, 9, 5, 3, 8,4, 1, 14, 8, 13, 6, 2, 11, 15, 12, 9, 7, 3, 10, 5, 0,15, 12, 8, 2, 4, 9, 1, 7, 5, 11, 3, 14, 10, 0, 6, 13 },{ 15, 1, 8, 14, 6, 11, 3, 4, 9, 7, 2, 13, 12, 0, 5, 10,3, 13, 4, 7, 15, 2, 8, 14, 12, 0, 1, 10, 6, 9, 11, 5,0, 14, 7, 11, 10, 4, 13, 1, 5, 8, 12, 6, 9, 3, 2, 15,13, 8, 10, 1, 3, 15, 4, 2, 11, 6, 7, 12, 0, 5, 14, 9 },{ 10, 0, 9, 14, 6, 3, 15, 5, 1, 13, 12, 7, 11, 4, 2, 8,13, 7, 0, 9, 3, 4, 6, 10, 2, 8, 5, 14, 12, 11, 15, 1,13, 6, 4, 9, 8, 15, 3, 0, 11, 1, 2, 12, 5, 10, 14, 7,1, 10, 13, 0, 6, 9, 8, 7, 4, 15, 14, 3, 11, 5, 2, 12 },{ 7, 13, 14, 3, 0, 6, 9, 10, 1, 2, 8, 5, 11, 12, 4, 15,13, 8, 11, 5, 6, 15, 0, 3, 4, 7, 2, 12, 1, 10, 14, 9,10, 6, 9, 0, 12, 11, 7, 13, 15, 1, 3, 14, 5, 2, 8, 4,3, 15, 0, 6, 10, 1, 13, 8, 9, 4, 5, 11, 12, 7, 2, 14 },{ 2, 12, 4, 1, 7, 10, 11, 6, 8, 5, 3, 15, 13, 0, 14, 9,14, 11, 2, 12, 4, 7, 13, 1, 5, 0, 15, 10, 3, 9, 8, 6,4, 2, 1, 11, 10, 13, 7, 8, 15, 9, 12, 5, 6, 3, 0, 14,11, 8, 12, 7, 1, 14, 2, 13, 6, 15, 0, 9, 10, 4, 5, 3 },{ 12, 1, 10, 15, 9, 2, 6, 8, 0, 13, 3, 4, 14, 7, 5, 11,10, 15, 4, 2, 7, 12, 9, 5, 6, 1, 13, 14, 0, 11, 3, 8,9, 14, 15, 5, 2, 8, 12, 3, 7, 0, 4, 10, 1, 13, 11, 6,4, 3, 2, 12, 9, 5, 15, 10, 11, 14, 1, 7, 6, 0, 8, 13 },{ 4, 11, 2, 14, 15, 0, 8, 13, 3, 12, 9, 7, 5, 10, 6, 1,13, 0, 11, 7, 4, 9, 1, 10, 14, 3, 5, 12, 2, 15, 8, 6,1, 4, 11, 13, 12, 3, 7, 14, 10, 15, 6, 8, 0, 5, 9, 2,6, 11, 13, 8, 1, 4, 10, 7, 9, 5, 0, 15, 14, 2, 3, 12 },{ 13, 2, 8, 4, 6, 15, 11, 1, 10, 9, 3, 14, 5, 0, 12, 7,1, 15, 13, 8, 10, 3, 7, 4, 12, 5, 6, 11, 0, 14, 9, 2,7, 11, 4, 1, 9, 12, 14, 2, 0, 6, 10, 13, 15, 3, 5, 8,2, 1, 14, 7, 4, 10, 8, 13, 15, 12, 9, 0, 3, 5, 6, 11 } };
        
    string result ;

    for (int i =0; i<8; i++) {
        string split = toBeReduced.substr(i*6,6);
        
        string rowDetector = {split[0],split[5]};
        int rowNum = binaryToDecimal(rowDetector);
        int colNum = binaryToDecimal(split.substr(1,4));

        result+= decimalToBinary(sBoxes[i][rowNum][colNum]);
        
    }

    return sBoxPermutation(result);
}

string inverseInitialPermutation(string finalResult){
    return
    {finalResult[39],finalResult[7],finalResult[47],finalResult[15],finalResult[55],finalResult[23],finalResult[63],finalResult[31],finalResult[38],finalResult[6],finalResult[46],finalResult[14],finalResult[54],finalResult[22],finalResult[62],finalResult[30],finalResult[37],finalResult[5],finalResult[45],finalResult[13],finalResult[53],finalResult[21],finalResult[61],finalResult[29],finalResult[36],finalResult[4],finalResult[44],finalResult[12],finalResult[52],finalResult[20],finalResult[60],finalResult[28],finalResult[35],finalResult[3],finalResult[43],finalResult[11],finalResult[51],finalResult[19],finalResult[59],finalResult[27],finalResult[34],finalResult[2],finalResult[42],finalResult[10],finalResult[50],finalResult[18],finalResult[58],finalResult[26],finalResult[33],finalResult[1],finalResult[41],finalResult[9],finalResult[49],finalResult[17],finalResult[57],finalResult[25],finalResult[32],finalResult[0],finalResult[40],finalResult[8],finalResult[48],finalResult[16],finalResult[56],finalResult[24]
    };
}

string* keyAnalysis(string key){
    
    string keyBinary = hexToBinary(key);
    string permutatedKey56 = firstPermutationChoice(keyBinary);
    string c0 = permutatedKey56.substr(0,28);
    string d0 = permutatedKey56.substr(28,56);
    string c[17] = {c0};
    string d[17] = {d0};
    
    for(int i = 1 ; i <= 16 ; i++){
        
        if(i == 1 || i == 2 || i == 9 || i == 16){
            c[i]=(shiftLeftByOne(c[i-1]));
            d[i]=(shiftLeftByOne(d[i-1]));

        }
        else{
            c[i]=(shiftLeftByTwo(c[i-1]));
            d[i]=(shiftLeftByTwo(d[i-1]));
        }
        
    }
    string* subKeysArr = new string[16];
    
    for(int i = 0 ; i < 16 ; i++){
        subKeysArr[i] = c[i+1]+d[i+1];
        string tmp =  secondPermutationChoice(subKeysArr[i]);
        subKeysArr[i] = tmp;
    }
    return subKeysArr;
}

string encryption(string data, string key){
    string* subKeysArr = keyAnalysis(key);
    string dataBinary = hexToBinary(data);
    
    string dataInitialPermutated = initialPermutation(dataBinary);
    

    string l0 = dataInitialPermutated.substr(0,32);
    string r0 = dataInitialPermutated.substr(32,64);
    
   
    string leftData[17] = {l0};
    string rightData[17] = {r0};
    
    for (int i = 0; i < 16; i++) {
        
        string expandedRightDataSide = expansion(rightData[i]);
        string rightDataSideXorKey = XOR(expandedRightDataSide,subKeysArr[i]);
        string sBoxResult = sBox(rightDataSideXorKey);
        rightData[i+1] = XOR(leftData[i],sBoxResult);
        leftData[i+1] = rightData[i];
    }
    
    string l16_r16 = rightData[16] + leftData[16];
    
    return binaryToHex(inverseInitialPermutation(l16_r16));

}

string decryption(string data, string key){
    
    string* subKeysArr = keyAnalysis(key);
    
    string reverseSubKeys[16];
    
    for(int i = 0 ; i < 16 ; i++ ){
        reverseSubKeys[i] = subKeysArr[15-i];
    }
    
    string dataBinary = hexToBinary(data);
    
    string dataInitialPermutated = initialPermutation(dataBinary);
    

    string l0 = dataInitialPermutated.substr(0,32);
    string r0 = dataInitialPermutated.substr(32,64);
    
   
    string leftData[17] = {l0};
    string rightData[17] = {r0};
    
    for (int i = 0; i < 16; i++) {
        
        string expandedRightDataSide = expansion(rightData[i]);
        string rightDataSideXorKey = XOR(expandedRightDataSide,reverseSubKeys[i]);
        string sBoxResult = sBox(rightDataSideXorKey);
        rightData[i+1] = XOR(leftData[i],sBoxResult);
        leftData[i+1] = rightData[i];
    }
    
    string l16_r16 = rightData[16] + leftData[16];
    
    return binaryToHex(inverseInitialPermutation(l16_r16));

    
}

int main(int argc, const char * argv[]) {
    // insert code here...
    
        string choice, data ,key;
        cin >> choice>>data>>key;

        if(choice == "encrypt"){
            cout<<"cipher: "<<encryption(data, key)<<endl;
        }
        else if(choice == "decrypt"){
            cout<<"plain: "<<decryption(data, key)<<endl;
        }
    
    return 0;
}
