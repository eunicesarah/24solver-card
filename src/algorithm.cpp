#include <string>
#include <vector>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <bits/stdc++.h>
#include <chrono>
#include "splashscreen.cpp"

using namespace std;

int convert(string X){
        if (X == "2" || X == "3" || X == "4" || X == "5" || X == "6" || X == "7" || X == "8" || X == "9" || X == "10"){
            return stoi(X);
        }
        else if (X == "A")
        {
            return 1;
        }
        else if (X == "K")
        {
            return 13;
        }
        else if (X == "Q")
        {
            return 12;
        }
        else if (X == "J")
        {
            return 11;
        }
    }

bool validate(string X){
        if (X == "A"){
            return true;
        }
        else if (X == "K")
        {
            return true;
        }
        else if (X == "Q")
        {
            return true;
        }
        else if (X == "J")
        {
            return true;
        }
        else if(X == "2" || X == "3" || X == "4" || X == "5" || X == "6" || X == "7" || X == "8" || X == "9" || X == "10"){
            return true;
        }
        else{
            return false;
        }
}
float division(int a, int b) {
    if (b == 0) {
        return 0;
    } else {
        return (float) a / b;
    }
}
float calculate(int x1, int x2, int x3, int x4, int op1, int op2, int op3, int bracket){
    float result = 0;
    float results = 0;
    if (bracket == 0){
        if (op1 == 0){ 
            result = x1 + x2; 
        }
        else if (op1 == 1){ 
            result = x1 - x2; 
        }
        else if (op1 == 2){ 
            result = division(x1, x2); 
        }
        else{ 
            result = x1 * x2; 
        }
        
        if (op2 == 0){ 
            result += x3; 
        }
        else if (op2 == 1){ 
            result -= x3; 
        }
        else if (op2 == 2){ 
            result = division(result, x3); 
        }
        else{ 
            result *= x3; 
        }

        if (op3 == 0){ result += x4; }
        else if (op3 == 1){ 
            result -= x4; 
        }
        else if (op3 == 2){ 
            result = division(result, x4); 
        }
        else{ 
            result *= x4; 
        }
    }

    if (bracket == 1){
        if (op2 == 0){ 
            result = x2 + x3; 
        }
        else if (op2 == 1){ 
            result = x2 - x3; 
        }
        else if (op2 == 2){ 
            result = division(x2, x3); 
        }
        else{ 
            result = x2 * x3; 
        }
        
        if (op1 == 0){ 
            result += x1; 
        }
        else if (op1 == 1){ 
            result = x1 - result; 
        }
        else if (op1 == 2){ 
            result = division(x1, result); 
        }
        else{ 
            result *= x1; 
        }

        if (op3 == 0){ 
            result += x4; 
        }
        else if (op3 == 1){ 
            result -= x4; 
        }
        else if (op3 == 2){ 
            result = division(result, x4); 
        }
        else{ 
            result *= x4; 
        } 
    }

    if (bracket == 2){
        if (op2 == 0){ 
            result = x2 + x3; 
        }
        else if (op2 == 1){ 
            result = x2 - x3; 
        }
        else if (op2 == 2){ 
            result = division(x2, x3); 
        }
        else{ 
            result = x2 * x3; 
        }
        
        if (op3 == 0){ 
            result += x4; 
        }
        else if (op3 == 1){ 
            result -= x4; 
        }
        else if (op3 == 2){ 
            result = division(result, x4); 
        }
        else{ 
            result *= x4; 
        }

        if (op1 == 0){ 
            result += x1; 
        }
        else if (op1 == 1){ 
            result = x1 - result; 
        }
        else if (op1 == 2){ 
            result = division(x1, result); 
        }
        else{ 
            result *= x1; 
        } 
    }

    if (bracket == 3){
        if (op3 == 0){ 
            result = x3 + x4;
        }
        else if (op3 == 1){ 
            result = x3 - x4; 
        }
        else if (op3 == 2){ 
            result = division(x3, x4); 
        }
        else{ 
            result = x3 * x4; 
        }
        
        if (op2 == 0){ 
            result += x2; 
        }
        else if (op2 == 1){ 
            result = x2 - result;
        }
        else if (op2 == 2){ 
            result = division(x2, result); 
        }
        else{ 
            result *= x2; 
        }

        if (op1 == 0){ 
            result += x1; 
        }
        else if (op1 == 1){ 
            result = x1 - result; 
        }
        else if (op1 == 2){ 
            result = division(x1, result);
        }
        else{ 
            result = result * x1; 
        } 
    }

    if (bracket == 4){
        if (op1 == 0){ 
            result = x1 + x2; 
        }
        else if (op1 == 1){ 
            result = x1 - x2; 
        }
        else if (op1 == 2){ 
            result = division(x1, x2); 
        }
        else{ 
            result = x1 * x2; 
        }
        
        if (op3 == 0){ 
            results = x3 + x4; 
        }
        else if (op3 == 1){ 
            results = x3 - x4; 
        }
        else if (op3 == 2){ 
            results = division(x3, x4); 
        }
        else{ 
            result = x3 * x4; 
        }

        if (op2 == 0){ 
            result += results; 
        }
        else if (op2 == 1){ 
            result -= results; 
        }
        else if (op2 == 2){ 
            result = division(result, results); 
        }
        else{ 
            result = result * results; 
        } 
    }
    return result;
}

vector <string> addList(vector <string> list, int x1, int x2, int x3, int x4, int op1, int op2, int op3, int bracket){
    string sym1, sym2, sym3, temp;
    if (op1 == 0){ 
        sym1 = "+"; 
    }
    else if (op1 == 1) { 
        sym1 = "-"; 
    }
    else if (op1 == 2) { 
        sym1 = "/"; 
    }
    else {
        sym1 = "*"; 
    }

    if (op2 == 0){ 
        sym2 = "+"; 
    }
    else if (op2 == 1) { 
        sym2 = "-"; 
    }
    else if (op2 == 2) { 
        sym2 = "/"; 
    }
    else {
        sym2 = "*"; 
    }

    if (op3 == 0){ 
        sym3 = "+"; 
    }
    else if (op3 == 1) { 
        sym3 = "-"; 
    }
    else if (op3 == 2) { 
        sym3 = "/"; 
    }
    else {
        sym3 = "*"; 
    }

    if(bracket == 0) { 
        temp = "((" + to_string(x1) + sym1 + to_string(x2) +  ")" + sym2 + to_string(x3) + ")" + sym3 + to_string(x4); 
    }
    else if(bracket == 1) { 
        temp = "(" + to_string(x1) + sym1 + "(" + to_string(x2) + sym2 + to_string(x3) + "))" + sym3 + to_string(x4); 
    }
    else if(bracket == 2) { 
        temp = to_string(x1) + sym1 + "((" + to_string(x2)  + sym2 + to_string(x3) + ")" + sym3 + to_string(x4) + ")"; 
    }
    else if(bracket == 3) { 
        temp = to_string(x1) + sym1 + "(" + to_string(x2)  + sym2 + "(" + to_string(x3) + sym3 + to_string(x4) + "))"; 
    }
    else if(bracket == 4) { 
        temp = "(" + to_string(x1) + sym1 + to_string(x2) + ")" + sym2 + "(" + to_string(x3) + sym3 + to_string(x4) + ")"; 
    }

    list.push_back(temp);
    return list;
}

vector <string> combine(vector <string> list, int x1, int x2, int x3, int x4, int op1, int op2, int op3, int bracket){
    vector <string> solutions ;
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            for (int k = 0; k < 4; k++){
                for (int l = 0; l < 5; l++){
                    if(abs(calculate(x1, x2, x3, x4, i, j, k, l) - 24) < 0.000001) {
                        solutions = addList(solutions, x1, x2, x3, x4, i, j, k, l); 
                    }
                    if(abs(calculate(x1, x3, x4, x2, i, j, k, l) - 24) < 0.000001) {
                        solutions = addList(solutions, x1, x3, x4, x2, i, j, k, l); 
                    }
                    if(abs(calculate(x1, x4, x2, x3, i, j, k, l) - 24) < 0.000001) {
                        solutions = addList(solutions, x1, x4, x2, x3, i, j, k, l); 
                    }
                    if(abs(calculate(x1, x2, x4, x3, i, j, k, l) - 24) < 0.000001) {
                        solutions = addList(solutions, x1, x2, x4, x3, i, j, k, l); 
                    }
                    if(abs(calculate(x1, x3, x2, x4, i, j, k, l) - 24) < 0.000001) {
                        solutions = addList(solutions, x1, x3, x2, x4, i, j, k, l); 
                    }                    
                    if(abs(calculate(x1, x4, x3, x2, i, j, k, l) - 24) < 0.000001) {
                        solutions = addList(solutions, x1, x4, x3, x2, i, j, k, l); 
                    }
                    if(abs(calculate(x2, x3, x4, x1, i, j, k, l) - 24) < 0.000001) {
                        solutions = addList(solutions, x2, x3, x4, x1, i, j, k, l); 
                    }
                    if(abs(calculate(x2, x4, x1, x3, i, j, k, l) - 24) < 0.000001) {
                        solutions = addList(solutions, x2, x4, x1, x3, i, j, k, l); 
                    }                                        
                    if(abs(calculate(x2, x1, x3, x4, i, j, k, l) - 24) < 0.000001) {
                        solutions = addList(solutions, x2, x1, x3, x4, i, j, k, l); 
                    }
                    if(abs(calculate(x2, x3, x1, x4, i, j, k, l) - 24) < 0.000001) {
                        solutions = addList(solutions, x2, x3, x1, x4, i, j, k, l); 
                    }
                    if(abs(calculate(x2, x4, x3, x1, i, j, k, l) - 24) < 0.000001) {
                        solutions = addList(solutions, x2, x4, x3, x1, i, j, k, l); 
                    }
                    if(abs(calculate(x2, x1, x4, x3, i, j, k, l) - 24) < 0.000001) {
                        solutions = addList(solutions, x2, x1, x4, x3, i, j, k, l); 
                    }
                    if(abs(calculate(x3, x4, x1, x2, i, j, k, l) - 24) < 0.000001) {
                        solutions = addList(solutions, x3, x4, x1, x2, i, j, k, l); 
                    }
                    if(abs(calculate(x3, x1, x2, x4, i, j, k, l) - 24) < 0.000001) {
                        solutions = addList(solutions, x3, x1, x2, x4, i, j, k, l); 
                    }
                    if(abs(calculate(x3, x2, x4, x1, i, j, k, l) - 24) < 0.000001) {
                        solutions = addList(solutions, x3, x2, x4, x1, i, j, k, l); 
                    }
                    if(abs(calculate(x3, x4, x2, x1, i, j, k, l) - 24) < 0.000001) {
                        solutions = addList(solutions, x3, x4, x2, x1, i, j, k, l); 
                    }
                    if(abs(calculate(x3, x1, x4, x2, i, j, k, l) - 24) < 0.000001) {
                        solutions = addList(solutions, x3, x1, x4, x2, i, j, k, l); 
                    }
                    if(abs(calculate(x3, x2, x1, x4, i, j, k, l) - 24) < 0.000001) {
                        solutions = addList(solutions, x3, x2, x1, x4, i, j, k, l); 
                    }

                    if(abs(calculate(x4, x1, x2, x3, i, j, k, l) - 24) < 0.000001) {
                        solutions = addList(solutions, x4, x1, x2, x3, i, j, k, l); 
                    }
                    if(abs(calculate(x4, x2, x3, x1, i, j, k, l) - 24) < 0.000001) {
                        solutions = addList(solutions, x4, x2, x3, x1, i, j, k, l); 
                    }
                    if(abs(calculate(x4, x3, x1, x2, i, j, k, l) - 24) < 0.000001) {
                        solutions = addList(solutions, x4, x3, x1, x2, i, j, k, l); 
                    }
                    if(abs(calculate(x4, x1, x3, x2, i, j, k, l) - 24) < 0.000001) {
                        solutions = addList(solutions, x4, x1, x3, x2, i, j, k, l); 
                    }
                    if(abs(calculate(x4, x2, x1, x3, i, j, k, l) - 24) < 0.000001) {
                        solutions = addList(solutions, x4, x2, x1, x3, i, j, k, l); 
                    }
                    if(abs(calculate(x4, x3, x2, x1, i, j, k, l) - 24) < 0.000001) {
                        solutions = addList(solutions, x4, x3, x2, x1, i, j, k, l); 
                    }
                }
            }
        }
    }
    return solutions;
}

void saveFile(vector <string> a, string filename, float x1, float x2, float x3, float x4, float time) {
    ofstream myfile;
    myfile.open("../test/" + filename + ".txt");
    myfile << "Jumlah solusi yang didapatkan adalah: " << a.size() << endl;
    myfile << "Waktu yang dibutuhkan adalah: " << time << " detik" << endl;
    for (int i = 0; i < a.size(); i++) {
        myfile << a[i] << endl;
    }
    myfile.close();
}

void execute(){
    char pilih;
    string X1, X2, X3, X4;
    int x1, x2, x3, x4;
    vector <string> solutions;
    cout << "Apakah anda ingin memasukkan angka secara manual? (y/n)" << endl;
    cin >> pilih;
    while(pilih != 'y' && pilih != 'n'){
        cout << "Apakah anda ingin memasukkan angka secara manual? (y/n)" << endl;
        cin >> pilih;
    }
    if (pilih == 'y'){
        cout << "Masukkan 4 angka yang akan dihitung (Masukkan berupa angka 2-9 atau A K J Q)" << endl;
        cin >> X1 >> X2 >> X3 >> X4;
        while (validate(X1) != true || validate(X2) != true || validate(X3) != true || validate(X4) != true)
        {
            cout << "Masukkan 4 angka yang akan dihitung" << endl;
            cin >> X1 >> X2 >> X3 >> X4;
        }
        x1 = convert(X1);
        x2 = convert(X2);
        x3 = convert(X3);
        x4 = convert(X4);
    }
    else if (pilih == 'n')
    {
        srand(time(0));
        x1 = (rand() % 13) + 1; 
        x2 = (rand() % 13) + 1; 
        x3 = (rand() % 13) + 1; 
        x4 = (rand() % 13) + 1; 
        cout << x1 << " " << x2 << " " << x3 << " " << x4 << endl;
    }    
    auto start = chrono::high_resolution_clock::now();
    vector <string> a = combine(solutions, x1, x2, x3, x4, 0, 0, 0, 0);
    auto end = a.end();
    for (auto it = a.begin(); it != end; ++it) {
        end = remove(it + 1, end, *it);
    }
    a.erase(end, a.end());
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << endl;
    }
    cout << "Jumlah solusi yang didapatkan adalah: " << a.size() << endl;
    auto finish = chrono::high_resolution_clock::now();
    float extime = chrono::duration_cast<chrono::nanoseconds>(finish - start).count();
    extime *= 1e-9;
    cout << "Waktu yang dibutuhkan adalah: " << extime << " detik" << endl;

    char save;
    cout << "Apakah anda ingin menyimpan hasil ke file? (y/n)" << endl;
    cin >> save;
    if (save == 'y'){
        string filename;
        cout << "Masukkan nama file: ";
        cin >> filename;
        saveFile(a, filename, x1, x2, x3, x4, extime);
        cout << "File berhasil disimpan" << endl;
    }
    else if (save == 'n'){
        cout << "Terima kasih" << endl;    }
}

int main(){
    char loop;
    do{
        splashscreen();
        execute();
        cout << "Apakah anda ingin mengulang program? (y/n)" << endl;
        cin >> loop;
        system("CLS");
    } while(loop == 'y');  
}