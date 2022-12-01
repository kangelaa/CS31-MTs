
//
//  main.cpp
//  Project 5
//
//  Created by Angela Kan on 11/24/20.
//
//ARRAYS!!!!

//#include <iostream>
//#include <string>
//#include <cassert>
//using namespace std;
//
////declare all the functions for readability/program order
//int appendToAll(string a[], int n, string value);
//int lookup(const string a[], int n, string target);
//int positionOfMax(const string a[], int n);
//int rotateLeft(string a[], int n, int pos);
//int countRuns(const string a[], int n);
//int flip(string a[], int n);
//int differ(const string a1[], int n1, const string a2[], int n2);
//int subsequence(const string a1[], int n1, const string a2[], int n2);
//int lookupAny(const string a1[], int n1, const string a2[], int n2);
//int divide(string a[], int n, string divider);
//
//int main() {
//    //test cases for the 10 functions, in order declared and separated by paragraphs
//    string g[4] = { "martha", "mark", "lindsey", "sara" };
//    assert(appendToAll(g, 4, "?") == 4 && g[0] == "martha?" && g[3] == "sara?");
//    string g1[4] = { "martha", "mark", "lindsey", "sara" };
//    assert(appendToAll(g1, 3, "3") == 3 && g1[0] == "martha3" && g1[3] == "sara");
//    string g2[4] = { "martha", "mark", "lindsey", "sara" };
//    assert(appendToAll(g2, 0, "?") == 0 && g2[0] == "martha" && g2[3] == "sara");
//    string g3[4] = { "martha", "mark", "lindsey", "sara" };
//    assert(appendToAll(g3, -4, "?") == -1 && g3[0] == "martha" && g3[3] == "sara");
//    string g4[4] = { "", "mark", "lindsey", "sara" };
//    assert(appendToAll(g4, 4, "?") == 4 && g4[0] == "?" && g4[3] == "sara?");
//    string g5[5] = { "donald", "joe", "mike", "lindsey", "kamala" };
//    assert(appendToAll(g5, 5, "!!!") == 5 && g5[0] == "donald!!!" && g5[4] == "kamala!!!");
//
//    string h[7] = { "martha", "mark", "joe", "joe", "", "kamala", "lindsey" };
//    assert(lookup(h, 7, "kamala") == 5);
//    assert(lookup(h, 7, "joe") == 2);
//    assert(lookup(h, 2, "joe") == -1);
//    assert(lookup(h, 0, "martha") == -1);
//    assert(lookup(h, -2, "joe") == -1);
//    assert(lookup(h, 7, "") == 4);
//    assert(lookup(h, 7, "Joe") == -1);
//
//    string k[6] = { "jamie", "lindsey", "mark", "susan", "joe", "donald" };
//    assert(positionOfMax(k, 6) == 3);
//    string k1[7] = { "martha", "mark", "joe", "susan", "", "kamala", "lindsey" };
//    assert(positionOfMax(k1, 7) == 3);
//    string k2[0] = { };
//    assert(positionOfMax(k2, 0) == -1);
//    string k3[0] = { };
//    assert(positionOfMax(k3, -5) == -1);
//    string k4[7] = { "martha", "mark", "joe", "susan", "", "kamala", "lindsey" };
//    assert(positionOfMax(k4, -5) == -1);
//    string k5[7] = { "", "", "", "susan", "", "kamala", "lindsey" };
//    assert(positionOfMax(k5, 3) == 0);
//    string k6[7] = { "", "", "", "susan", "", "kamala", "lindsey" };
//    assert(positionOfMax(k6, 4) == 3);
//    string k7[7] = { "susan", "mark", "joe", "martha", "", "kamala", "lindsey" };
//    assert(positionOfMax(k7, 7) == 0);
//    string k8[7] = { "martha", "susan", "joe", "susan", "", "kamala", "lindsey" };
//    assert(positionOfMax(k8, 7) == 1);
//    string k9[1] = { "martha"};
//    assert(positionOfMax(k9, 1) == 0);
//    string k10[7] = { "susan", "mark", "joe", "martha", "", "kamala", "lindsey" };
//    assert(positionOfMax(k10, 0) == -1);
//
//    string l[5] = { "kamala", "jamie", "lindsey", "sara", "mark" };
//    assert(rotateLeft(l, 5, 1) == 1 && l[1] == "lindsey" && l[4] == "jamie");
//    string l1[4] = { "martha", "mark", "lindsey", "sara" };
//    assert(rotateLeft(l1, 4, 1) == 1 && l1[1] == "lindsey" && l1[3] == "mark");
//    string l2[4] = { "martha", "mark", "lindsey", "sara" };
//    assert(rotateLeft(l2, 4, 1) == 1 && l2[1] == "lindsey" && l2[3] == "mark");
//    string l3[0] = { };
//    assert(rotateLeft(l3, 0, 3) == -1);
//    assert(rotateLeft(l3, 0, -1) == -1);
//    assert(rotateLeft(l3, -1, 3) == -1);
//    assert(rotateLeft(l3, 0, 3) == -1);
//    string l4[4] = { "martha", "mark", "lindsey", "sara" };
//    assert(rotateLeft(l4, 0, 1) == -1);
//    assert(rotateLeft(l4, 4, -1) == -1);
//    assert(rotateLeft(l4, 4, 4) == -1);
//    assert(rotateLeft(l4, 4, 5) == -1);
//    assert(rotateLeft(l4, 4, 0) == 0 && l4[0] == "mark" && l4[3] == "martha");
//    string l5[4] = { "martha", "", "lindsey", "sara" };
//    assert(rotateLeft(l5, 4, 1) == 1 && l5[1] == "lindsey" && l5[3] == "");
//    string l6[1] = { "martha" };
//    assert(rotateLeft(l6, 1, 0) == 0 && l6[0] == "martha");
//    string l7[4] = { "martha", "mark", "lindsey", "sara" };
//    assert(rotateLeft(l7, 4, 3) == 3 && l7[0] == "martha" && l7[3] == "sara");
//    assert(rotateLeft(l7, 3, 3) == -1);
//    assert(rotateLeft(l7, 3, 2) == 2 && l7[0] == "martha" && l7[2] == "lindsey" && l7[3] == "sara");
//    assert(rotateLeft(l7, 3, 1) == 1 && l7[0] == "martha" && l7[1] == "lindsey" && l7[2] == "mark" && l7[3] == "sara");
//
//    string d[9] = { "susan", "donald", "mike", "mike", "joe", "joe", "joe", "mike", "mike" };
//    assert(countRuns(d, 9) == 5);
//    string d1[5] = { "mark", "mark", "mark", "susan", "susan" };
//    assert(countRuns(d1, 5) == 2);
//    string d3[9] = { "susan", "donald", "mike", "mike", "joe", "joe", "joe", "mike", "" };
//    assert(countRuns(d3, 9) == 6);
//    string d4[9] = { "susan", "donald", "mike", "mike", "joe", "joe", "joe", "mike", "rob" };
//    assert(countRuns(d4, 9) == 6);
//    string d5[7] = { "susan", "donald", "mike", "mike", "joe", "joe", "joe" };
//    assert(countRuns(d5, 7) == 4);
//    string d6[9] = { "susan", "donald", "mike", "mike", "joe", "joe", "joe", "mike", "mike" };
//    assert(countRuns(d6, 4) == 3);
//    string d7[9] = { "susan", "donald", "mike", "mike", "joe", "joe", "joe", "mike", "mike" };
//    assert(countRuns(d7, 5) == 4);
//    string d8[0] = { };
//    assert(countRuns(d8, 0) == 0);
//    string d9[9] = { "susan", "donald", "mike", "mike", "joe", "joe", "joe", "mike", "mike" };
//    assert(countRuns(d9, 0) == 0);
//    string d10[9] = { "susan", "donald", "mike", "mike", "joe", "joe", "joe", "mike", "mike" };
//    assert(countRuns(d10, -4) == -1);
//    string d11[9] = { "susan", "donald", "mike", "mike", "joe", "joe", "joe", "", "" };
//    assert(countRuns(d11, 9) == 5);
//
//    string f[3] = { "lindsey", "joe", "mike" };
//    assert(flip(f, 3) == 3 && f[0] == "mike" && f[2] == "lindsey");
//    string f1[6] = { "donald", "mike", "", "susan", "sara", "jamie" };
//    assert(flip(f1, 4) == 4 && f1[0] == "susan" && f1[1] == "" && f1[2] == "mike");
//    string f2[6] = { "donald", "mike", "", "susan", "sara", "jamie" };
//    assert(flip(f2, 0) == 0 && f2[0] == "donald" && f2[1] == "mike");
//    string f3[0] = { };
//    assert(flip(f3, 0) == 0);
//    string f4[6] = { "donald", "mike", "", "susan", "sara", "jamie" };
//    assert(flip(f4, -2) == -1);
//    string f5[6] = { "donald", "mike", "", "susan", "sara", "jamie" };
//    assert(flip(f5, 6) == 6 && f5[0] == "jamie" && f5[1] == "sara" && f5[2] == "susan");
//    string f6[3] = { "lindsey", "joe", "mike" };
//    assert(flip(f6, 2) == 2 && f6[0] == "joe" && f6[2] == "mike");
//    string f7[6] = { "donald", "mike", "", "susan", "sara", "jamie" };
//    assert(flip(f7, 5) == 5 && f7[0] == "sara" && f7[1] == "susan" && f7[2] == "");
//
//    string mx[7] = { "martha", "mark", "joe", "susan", "", "kamala", "lindsey" };
//    string my[4] = { "martha", "mark", "lindsey", "sara" };
//    assert(differ(mx, 4, my, 4) == 2);
//    assert(differ(mx, 7, my, 4) == 2);
//    assert(differ(mx, 0, my, 4) == 0);
//    assert(differ(mx, -1, my, 4) == -1);
//    assert(differ(mx, 4, my, -4) == -1);
//    assert(differ(mx, 0, my, 0) == 0);
//    string mx1[6] = { "donald", "mike", "", "susan", "sara", "jamie" };
//    string my1[5] = { "donald", "mike", "jamie", "", "susan" };
//    assert(differ(mx1, 6, my1, 5) == 2);
//    assert(differ(mx1, 2, my1, 1) == 1);
//    string mx2[0] = { };
//    string my2[5] = { "donald", "mike", "jamie", "", "susan" };
//    assert(differ(mx2, 0, my2, 5) == 0);
//    string mx3[5] = { "donald", "mike", "jamie", "susan", "sara" };
//    string my3[5] = { "donald", "mike", "jamie", "susan", "sara" };
//    assert(differ(mx3, 5, my3, 5) == 5);
//
//    string nx[7] = { "martha", "mark", "joe", "susan", "", "kamala", "lindsey" };
//    string ny[4] = { "joe", "susan", "", "kamala" };
//    assert(subsequence(nx, 7, ny, 4) == 2);
//    assert(subsequence(nx, 6, ny, 3) == 2);
//    assert(subsequence(nx, 5, ny, 4) == -1);
//    string nx1[10] = { "kamala", "mark", "sara", "martha", "donald", "lindsey" };
//    string ny1[10] = { "mark", "sara", "martha" };
//    assert(subsequence(nx1, 6, ny1, 3) == 1);
//    string ny2[10] = { "kamala", "martha" };
//    assert(subsequence(nx, 5, ny2, 2) == -1);
//    assert(subsequence(nx1, 0, ny1, -3) == -1);
//    assert(subsequence(nx1, 0, ny1, 0) == 0);
//    assert(subsequence(nx1, 9, ny1, 0) == 0);
//    assert(subsequence(nx1, 0, ny1, 1) == -1);
//    assert(subsequence(nx1, 2, ny1, 3) == -1);
//    string nx3[10] = { "kamala", "mark", "liz", "martha", "donald", "lindsey" };
//    string ny3[10] = { "mark", "sara", "martha" };
//    assert(subsequence(nx3, 6, ny3, 3) == -1);
//    string nx4[10] = { "kamala", "mark", "sara", "martha", "donald", "lindsey" };
//    string ny4[10] = { "donald", "lindsey", "martha" };
//    assert(subsequence(nx4, 6, ny4, 3) == -1);
//    string nx5[10] = { "kamala", "mark", "sara", "kamala", "mark", "lindsey" };
//    string ny5[10] = { "kamala", "mark", "lindsey" };
//    assert(subsequence(nx5, 6, ny5, 2) == 0);
//    assert(subsequence(nx5, 6, ny5, 3) == 3);
//    string nx6[10] = { "kamala", "mark", "sara", "kamala", "mark", "lindsey" };
//    string ny6[10] = { "kamala", "sara", "kamala" };
//    assert(subsequence(nx6, 6, ny6, 3) == -1);
//
//    string ox[10] = { "kamala", "mark", "sara", "martha", "donald", "lindsey" };
//    string oy[10] = { "jamie", "donald", "martha", "mark" };
//    assert(lookupAny(ox, 6, oy, 4) == 1);
//    string oy1[10] = { "susan", "joe" };
//    assert(lookupAny(ox, 6, oy1, 2) == -1);
//    string ox2[7] = { "martha", "mark", "joe", "susan", "", "kamala", "lindsey" };
//    string oy2[3] = { "lindsey", "joe", "mike" };
//    assert(lookupAny(ox2, 7, oy2, 3) == 2);
//    assert(lookupAny(ox2, 3, oy2, 0) == -1);
//    assert(lookupAny(ox2, 0, oy2, 0) == -1);
//    assert(lookupAny(ox2, -1, oy2, 3) == -1);
//    assert(lookupAny(ox2, 7, oy2, 1) == 6);
//    assert(lookupAny(ox2, 6, oy2, 1) == -1);
//    string ox3[7] = { "", "mark", "joe", "susan", "", "kamala", "lindsey" };
//    string oy3[3] = { "lindsey", "", "mike" };
//    assert(lookupAny(ox3, 7, oy3, 3) == 0);
//    string ox4[7] = { "", "mark", "joe", "susan", "", "kamala", "lindsey" };
//    string oy4[3] = { "dory", "rath", "amy" };
//    assert(lookupAny(ox4, 7, oy4, 3) == -1);
//
//    string p[7] = { "martha", "mark", "joe", "susan", "", "kamala", "lindsey" };
//    assert(divide(p, 7, "lindsey") == 3);
//    assert(divide(p, 0, "lindsey") == 0);
//    string p1[7] = { "martha", "mark", "joe", "susan", "", "kamala", "lindsey" };
//    assert(divide(p1, 1, "lindsey") == 0);
//    assert(divide(p1, -11, "lindsey") == -1);
//    string p2[7] = { "martha", "mark", "joe", "susan", "", "kamala", "lindsey" };
//    string p3[6] = { "jamie", "lindsey", "mark", "susan", "joe", "donald" };
//    assert(divide(p3, 6, "kamala") == 3);
//    string p4[4] = { "mark", "sara", "lindsey", "mike" };
//    assert(divide(p4, 4, "mike") == 2);
//    string p5[4] = { "mark", "sara", "lindsey", "mike" };
//    assert(divide(p5, 3, "mike") == 2 && p5[3] == "mike");
//    string p6[3] = { "a", "a", "a" };
//    assert(divide(p6, 3, "a") == 0);
//    string p7[3] = { "a", "a", "a" };
//    assert(divide(p7, 3, "b") == 3);
//    string p8[3] = { "b", "b", "b" };
//    assert(divide(p8, 3, "a") == 0);
//    string p9[3] = { "c", "b", "a" };
//    assert(divide(p9, 3, "c") == 2 && p9[0] == "a" && p9[1] == "b" && p9[2] == "c");
//    string p10[3] = { "c", "b", "a" };
//    assert(divide(p10, 2, "c") == 1 && p10[0] == "b" && p10[1] == "c" && p10[2] == "a");
//
//    cout << "All tests succeeded" << endl;
//}
//
////adds string value to each element in the array specifed by n
//int appendToAll(string a[], int n, string value){
//    if (n < 0){
//        return -1;
//    } else {
//        for (int i=0; i<n; i++){
//            a[i] += value;
//        }
//        return n;   //returns n when done
//    }
//}
//
////looks for string target in array specified by n, returns position in array i of the target
//int lookup(const string a[], int n, string target){
//    if (n < 0){
//        return -1;
//    } else {
//        for (int i=0; i<n; i++){
//            if (a[i] == target){
//                return i;
//            }
//        }
//        return -1;  //if target isn't present, returns -1
//    }
//}
//
////returns position of the element >= all other elements
//int positionOfMax(const string a[], int n){
//    if (n <= 0){    //returns -1 if there's no interesting elements (n=0)
//        return -1;
//    } else {
//        string max = a[0];  //sets string max to first element in array at first
//        int pos = 0;
//        for (int i=0; i<n; i++){
//            if (a[i] > max){    //compares each element to current max element
//                max = a[i]; // updates max to current max element
//                pos = i;    //updates position to position i of the max element
//            }
//        }
//        return pos;     //returns position of the max element
//    }
//}
//
////shifts all elements to the left starting with the element one to the right of the given int position, moves the replaced element at pos to the end of the array specified by n
//int rotateLeft(string a[], int n, int pos){
//    if (n <= 0){
//        return -1;      //returns -1 if negative n OR if n=0, because then pos will > n which is accessing the array out of the bounds specified by n
//    } else {
//        if(pos >= 0 && pos < n){    //checks if pos is in bounds specified for the array
//            string tempStr = a[pos];
//            for (int i=pos; i<n - 1; i++){  //shifts all elements after specified pos one to the left
//                a[i] = a[i+1];
//            }
//            a[n-1] = tempStr;        //replaces last element with the replaced element originally at pos
//            return pos; //returns pos when done
//        } else {
//            return -1;  //returns -1 if pos is out of bounds specified
//        }
//    }
//}
//
////returns the number (count) of consecutive, identical sequences >= 1 element(s)
//int countRuns(const string a[], int n){
//    if (n < 0){
//        return -1;
//    } else {
//        int count = 0;
//        for (int i=0; i<n-1; i++){
//            if (a[i] != a[i+1]){
//                count++;    //adds one to the count by comparing the current element with the one to the right
//            }
//        }
//        if (n != 0){
//            count++;    //addresses fencepost error: if n>0, adds one to count for last element in array specified by n
//            return count;   //returns count
//        } else {
//            return 0;   //if n=0, there are 0 consecutive identical sequences of >= 1 element(s)
//        }
//    }
//}
//
////reverses the order of the array and returns n
//int flip(string a[], int n){
//    if (n < 0){
//        return -1;
//    } else {
//        for (int i=0; i<n/2; i++){   //only iterates through first half, because the second half gets flipped too
//            string tempStr = a[i];  //stores string in a temporary variable first before replacing a[i]
//            a[i] = a[n-1-i];    //swaps element a[i] and its corresponding match on the other end of the array
//            a[n-1-i] = tempStr;
//        }
//        return n;
//    }
//}
//
////returns the pos of the first corresponding elements of arrays a1 and a2 that aren't equal; if they're equal up until the end of at least one, returns the smaller n1 or n2 value
//int differ(const string a1[], int n1, const string a2[], int n2){
//    if (n1 < 0 || n2 < 0){
//        return -1;
//    } else {
//        int smallerN;
//        if (n1 <= n2){  //compares whether n1 or n2 is smaller value
//            smallerN = n1;
//        } else {
//            smallerN = n2;
//        }
//        for (int i=0; i<smallerN; i++){
//            if (a1[i] != a2[i]){    //compares the corresponding elements of a1 and a2
//                return i;   //returns the earliest pos of differing corresponding elements
//            }
//        }
//        return smallerN;
//    }
//}
//
////returns earliest beginning pos of a1 in which a2 appears consecutively and completely
//int subsequence(const string a1[], int n1, const string a2[], int n2){
//    if (n1 < 0 || n2 < 0){
//        return -1;
//    } else {
//        if (n2 == 0){   //treats an empty array as a subsequence of any array starting at pos 0
//            return 0;
//        }
//        if (n1 == 0 || n2>n1){  //if n1=0 and n2 doesn't equal zero OR if a2 is longer than a1, then a1 can't contain subsequence a2, so returns -1
//            return -1;
//        }
//        bool isSubseq = false;  //stores whether subseq is present or not, updates as program iterates through the array
//        for (int i=0; i<n1; i++){
//            if (a2[0] == a1[i]){
//                isSubseq = true;
//                int pos = i;
//                for (int j=0; j<n2; j++){
//                    if ((i+j) >= n1){   //checks to make sure a1 doesn't access out of bounds element, returns -1 if it does
//                        isSubseq = false;
//                        return -1;
//                    } if (a1[i+j] != a2[j]){
//                        isSubseq = false;   //updates subseq again if there is any discrepancy between the two arrays as it iterates through both
//                    }
//                }
//                if (isSubseq){
//                    return pos; //return position in a1 where subsequence begins
//                }
//            }
//        }
//        return -1;  //if no subsequence present in a1, returns -1
//    }
//}
//
////returns smallest position of a1 that is equal to any element in a2
//int lookupAny(const string a1[], int n1, const string a2[], int n2){
//    if (n1 <= 0 || n2 <= 0){    //if either n1 or n2 is negative or =0, then there is no way they will contain equal elements (a1 and a2, respectively), so returns -1
//        return -1;
//    } else {
//        for (int i=0; i<n1; i++){
//            for (int j=0; j<n2; j++){
//                if (a1[i] == a2[j]){
//                    return i;   //if there's a match, returns earliest pos i that match occurs in a1
//                }
//            }
//        }
//        return -1;  //returns -1 if no match after iterating through a1
//    }
//}
//
////rearranges string so that elements <string divider will come before elements >divider, returns first position of element that isn't <divider, or n if they're all <divider
//int divide(string a[], int n, string divider){
//    if (n < 0){
//        return -1;
//    } else {
//        int countLessThan = 0;
//        for (int i=0; i<n; i++){
//            if (a[i] < divider){
//                countLessThan++;    //adds one for each element in array specified by n that is less than the divider, this will be the position of the first element that isn't <divider
//            }
//        }
//        for (int j=0; j<n; j++){    //bubble sort from least to greatest (increasing order), iterates through n times
//            for (int i=0; i<n-1; i++){
//                if (a[i] > a[i+1]){     //swaps elements one-by-one if they're not in the correct order
//                    string tempStr = a[i];
//                    a[i] = a[i+1];
//                    a[i+1] = tempStr;
//                }
//            }
//        }
//        if (countLessThan < n){
//            return countLessThan;   //returns first position of element that isn't <divider
//        } else {    //if all elements are <divider OR n=0, return n
//            return n;
//        }
//    }
//}

// C STRINGS!!!
//#include <iostream>
//#include <cassert>
//#include <cstring>
//#include <cctype>
//
//using namespace std;
//
//const int MAX_WORD_LENGTH = 20;
//const int MAX_DOC_LENGTH = 250+2;   //length of doc (250) + space padding for beginning+end of doc
//
//int cleanupRules(char wordin[][MAX_WORD_LENGTH+1],
//                 char wordout[][MAX_WORD_LENGTH+1],
//                 int nRules);
//
//int determineScore(const char document[],
//                   const char wordin[][MAX_WORD_LENGTH+1],
//                   const char wordout[][MAX_WORD_LENGTH+1],
//                   int nRules);
//
//int main() {
//    const int TEST1_NRULES = 12;
//    char test1win[TEST1_NRULES][MAX_WORD_LENGTH+1] = {
//                    "confusion", "FAMILY", "charm", "hearty", "house", "worn-out", "family", "charm", "ties", "", "charm", "FaMiLy"
//                };
//    char test1wout[TEST1_NRULES][MAX_WORD_LENGTH+1] = {
//                    "", "TIES", "confusion", "hearty", "intrigue", "younger", "first", "", "family", "frightened", "", "tIeS"
//                };
//    assert(cleanupRules(test1win, test1wout, 12) == 6);
//
//    const int TEST2_NRULES = 12;
//    char test2win[TEST2_NRULES][MAX_WORD_LENGTH+1] = {
//                    "hearty", "confusion", "charm", "FAMILY", "house", "worn-out", "family", "charm", "ties", "", "charm", "FaMiLy"
//                };
//    char test2wout[TEST2_NRULES][MAX_WORD_LENGTH+1] = {
//                    "hear-ty", "", "confusion", "TIES", "intrigue", "younger", "first", "", "family", "frightened", "", "tIeS"
//                };
//    assert(cleanupRules(test2win, test2wout, 12) == 6);
//    assert(cleanupRules(test2win, test2wout, -1) == 0);
//    assert(cleanupRules(test2win, test2wout, 0) == 0);
//
//    char test3win[7][MAX_WORD_LENGTH+1] = {
//                    "hOW", "how", "how", "FAMILY", "house", "how", "house"
//                };
//    char test3wout[7][MAX_WORD_LENGTH+1] = {
//                    "hearty", "confusion", "", "TIES", "intrigue", "hearty", ""
//                };
//    assert(cleanupRules(test3win, test3wout, 7) == 3);
//
//    char test4win[6][MAX_WORD_LENGTH+1] = {
//                    "who", "confusion", "charm", "FAMILY", "house", "charm"
//                };
//    char test4wout[6][MAX_WORD_LENGTH+1] = {
//                    "who", ";h", "", "TIES", "intrigue", "younger"
//                };
//    assert(cleanupRules(test4win, test4wout, 6) == 3);
//
//    char test5win[3][MAX_WORD_LENGTH+1] = {
//                    "", "mzs:", "charm"
//                };
//    char test5wout[3][MAX_WORD_LENGTH+1] = {
//                    "", "", "charm"
//                };
//    assert(cleanupRules(test5win, test5wout, 3) == 0);
//
//    const int TESTa_NRULES = 3;
//    char testawin[TESTa_NRULES][MAX_WORD_LENGTH+1] = {
//                    "family", "unhappy", "horse",
//                };
//    char testawout[TESTa_NRULES][MAX_WORD_LENGTH+1] = {
//                    "",       "horse",   "",
//                };
//    assert(determineScore("Happy families are all alike; every unhappy family is unhappy in its own way.",
//                            testawin, testawout, TESTa_NRULES) == 2);
//    assert(determineScore("Happy horses are all alike; every unhappy horse is unhappy in its own way.",
//                            testawin, testawout, TESTa_NRULES-1) == 0);
//    assert(determineScore("Happy horses are all alike; every unhappy horse is unhappy in its own way.",
//                            testawin, testawout, TESTa_NRULES) == 1);
//    assert(determineScore("A horse!  A horse!  My kingdom for a horse!",
//                            testawin, testawout, TESTa_NRULES) == 1);
//    assert(determineScore("horse:stable ratio is 10:1",
//                            testawin, testawout, TESTa_NRULES) == 0);
//    assert(determineScore("**** 2020 ****",
//                            testawin, testawout, TESTa_NRULES) == 0);
//
//    assert(determineScore("d", testawin, testawout, 0) == 0);
//    assert(determineScore("d", testawin, testawout, -1) == 0);
//    assert(determineScore("d", testawin, testawout, 0) == 0);
//
//    char testbwin[4][MAX_WORD_LENGTH+1] = {
//                    "family", "hi", "wow", "whoooooooooooooooooo"
//                };
//    char testbwout[4][MAX_WORD_LENGTH+1] = {
//                    "",       "horse",   "", "",
//                };
//    assert(determineScore("FAMILy first", testbwin, testbwout, 4) == 1);
//    assert(determineScore("family family family       first", testbwin, testbwout, 3) == 1);
//    assert(determineScore("", testbwin, testbwout, 4) == 0);
//    assert(determineScore("famiLya fir;;;;d wow;;;;;", testbwin, testbwout, 4) == 1);
//    assert(determineScore("hi      man", testbwin, testbwout, 4) == 1);
//    assert(determineScore("                ", testbwin, testbwout, 4) == 0);
//    assert(determineScore("----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------", testbwin, testbwout, 4) == 0);
//    assert(determineScore("whoooooooooooooooooo", testbwin, testbwout, 4) == 1);
//
//    cout << "All tests succeeded." << endl;
//}
//
////shifts all elements to the left for BOTH win and wout arrays starting with the element one to the right of the given int position
//void rotateLeft(char a[][MAX_WORD_LENGTH+1], char b[][MAX_WORD_LENGTH+1], int n, int pos){
//    for (int i=pos; i<n - 1; i++){  //shifts all elements after specified pos one to the left
//        strcpy(a[i], a[i+1]);
//        strcpy(b[i], b[i+1]);
//    } //if pos is 1 less than n, then it will skip the for loop, and  nRules-- in cleanupRules so n-1 gets "cut off"
//}
//
////removes rules that aren't in clean form by using rotateLeft
//int cleanupRules(char wordin[][MAX_WORD_LENGTH+1],
//                 char wordout[][MAX_WORD_LENGTH+1],
//                 int nRules){
//    if (nRules <= 0){
//        return 0;
//    } else {
//        //transform every upper case letter in the match rule words into lower case equivalent
//        for (int i=0; i<nRules; i++){
//            for (int j=0; wordin[i][j]!='\0'; j++){
//                wordin[i][j] = tolower(wordin[i][j]);
//            }
//            for (int k=0; wordout[i][k]!='\0'; k++){
//                wordout[i][k] = tolower(wordout[i][k]);
//            }
//        }
//        //remove match rule if word in wordIN array contains a char that's not a letter
//        for (int i=0; i<nRules; i++){
//            for (int j=0; wordin[i][j]!='\0'; j++){     //iterates through each letter of each string in the array
//                if (!isalpha(wordin[i][j])){
//                    rotateLeft(wordin, wordout, nRules, i);
//                    nRules--;       //updates nRules after removing a match rule
//                    i--;    //updates i to re-check index (after rotating a new rule over into that same index)
//                    break;     //ensures i++ to re-check the new word at the same index
//                }
//            }
//        }
//        //remove match rule if word in wordOUT array contains a char that's not a letter (same process as above loop)
//        for (int i=0; i<nRules; i++){
//            for (int k=0; wordout[i][k]!='\0'; k++){
//                if (!isalpha(wordout[i][k])){
//                    rotateLeft(wordin, wordout, nRules, i);
//                    nRules--;
//                    i--;
//                    break;
//                }
//            }
//        }
//        //removes match rule if a w-in word is the empty string
//        for (int i=0; i<nRules; i++){
//            if (strcmp(wordin[i], "") == 0){    //checks if w-in word at index is equal to empty string
//                rotateLeft(wordin, wordout, nRules, i);
//                nRules--;
//                i--; //i will automatically jump back to i++ in the for loop
//            }
//        }
//        //removes match rule if w-in word equals w-out word
//        for (int i=0; i<nRules; i++){
//            if (strcmp(wordin[i], wordout[i]) == 0){    //compares word-in and word-out at given index
//                rotateLeft(wordin, wordout, nRules, i);
//                nRules--;
//                i--;
//            }
//        }
//        //removes match rule if duplicate w-in word (compared to one-word rule)
//        for (int i=0; i<nRules; i++){
//            for (int j=0; j<nRules; j++){
//                //IF one word rule, check w/ all the OTHER rules in the array!
//                if (strcmp(wordout[i], "") == 0 && strcmp(wordin[i], wordin[j]) == 0 && i != j){
//                    rotateLeft(wordin, wordout, nRules, j);
//                    nRules--;
//                    j--;    //continues checking a NEW word at the same index against the one word w-in word specified
//                    if (j<i){   //if the removed word is at an index less than the w-in word we're checking against:
//                        i--; //update the index of the SAME w-in word we're checking against (i iterates forwards here (i++) after j finishes its loop, aka after we've checked all other words against the specified w-in word at i)
//                    }
//                }
//            }
//        }
//        //removes duplicate two-word match rules if both w-in and w-out are identical to first two-word match rule
//        for (int i=0; i<nRules; i++){
//            for (int j=1; (i+j)<nRules; j++){
//                //checks all two-word rule words AFTER the specified two-word rule w-in word at i
//                if (strcmp(wordout[i], "") != 0 && strcmp(wordin[i], wordin[i+j]) == 0 && strcmp(wordout[i], wordout[i+j]) == 0){   //if both w-win and w-out respectively match for two match rules:
//                    rotateLeft(wordin, wordout, nRules, (i+j));  //remove duplicate match rule at an index after the first one
//                    nRules--;
//                    j--;    //continues checking the new updated words at the same index against the two word rule words specified at i
//                }
//            }
//        }
//    }
//    return nRules;
//}
//
////returns score of the document based on specified clean match rules
//int determineScore(const char document[],
//                   const char wordin[][MAX_WORD_LENGTH+1],
//                   const char wordout[][MAX_WORD_LENGTH+1],
//                   int nRules){
//    if (nRules <= 0){
//        return 0;
//    } else {
//        int score = 0;
//
//        //creates a copy of doc with two extra spaces, one at start and one at end of doc
//        char doc[MAX_DOC_LENGTH+1] = " ";
//        strcat(doc, document);
//        strcat(doc, " ");
//
//        //changes all uppercase letters to lowercase in doc and removes all non-alpha/space characters
//        for (int i=0; doc[i]!='\0'; i++){
//            doc[i] = tolower(doc[i]);
//            if (!islower(doc[i]) && doc[i] != ' '){
//                for (int j=i; doc[j]!='\0'; j++){
//                    doc[j] = doc[j+1];  //shifts all char after the non-alpha/space char over one to left, replacing that non-alpha/space char
//                }
//                i--;    //updates index after shifting all characters over one to re-check the new updated char at index i
//            }
//        }
//
//        //checks doc for empty string
//        if (doc[2] == '\0'){
//            return 0;
//        }
//
//        //checks doc against set of match rules to determine score
//        for (int i=0; i<nRules; i++){
//            //creates a temp string for current w-in word at specified index i with space at beginning and end of word
//            char tempStrIn[MAX_WORD_LENGTH+2+1] = " ";
//            strcat(tempStrIn, wordin[i]);
//            strcat(tempStrIn, " ");
//
//            //searches doc for temp string (w-in word with spaces)
//            if (strstr(doc, tempStrIn) != NULL){
//                if (strcmp(wordout[i], "") == 0){
//                    score++;    //adds one to score if temp string (w-in word) is present and no corresponding w-out word
//                } else { //if there is a w-out word for that rule:
//                    //creates a temp string for current w-out word at specified index i with space at beginning and end of word
//                    char tempStrOut[MAX_WORD_LENGTH+2+1] = " ";
//                    strcat(tempStrOut, wordout[i]);
//                    strcat(tempStrOut, " ");
//
//                    if (strstr(doc, tempStrOut) == NULL){
//                        score++;    //adds one to score if temp string (w-out word) isn't present
//                    }
//                }
//            }
//        }
//        return score;
//    }
//}
//

//Write a function named hideNonDigits that takes two parameters and returns an int. The parameters are
//
//s, a C string (not a C++ string)
//ch, a char
//The function must replace all characters in s that are not digits with the character ch, and return the number of characters that were replaced. For example, this code fragment
//
//      char text[100] = "It's November 24, 2020";
//      int n = hideNonDigits(text, '*');
//      cout << n << ": " << text << endl;
//writes
//
//      16: **************24**2020

//// The following line avoids a VC++ issue; it's harmless for Xcode and g31
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <cstring>
//#include <cctype>
//#include <cassert>
//using namespace std;
//
//// SUBMIT AS YOUR ANSWER ONLY THE CODE BETWEEN THIS COMMENT AND THE
//// COMMENT AT THE END OF THE hideNonDigits FUNCTION
//
//int hideNonDigits(char s[], char ch){
//    int count = 0;
//    for (int i=0; s[i] != '\0'; i++){
//        if (!isdigit(s[i])){
//            s[i] = ch;
//            count++;
//        }
//    }
//    return count;
//}
//
//// SUBMIT AS YOUR ANSWER ONLY THE CODE BETWEEN THIS COMMENT AND THE
//// COMMENT AT THE START OF THE hideNonDigits FUNCTION
//
//int main()
//{
//    char text[100] = "It's November 24, 2020";
//    assert(hideNonDigits(text, '*') == 16);
//    assert(strcmp(text, "**************24**2020") == 0);
//
//    strcpy(text, "Wow!");
//    assert(hideNonDigits(text, '-') == 4);
//    assert(strcmp(text, "----") == 0);
//
//    strcpy(text, "1984");
//    assert(hideNonDigits(text, '?') == 0);
//    assert(strcmp(text, "1984") == 0);
//
//    strcpy(text, "");
//    assert(hideNonDigits(text, 'X') == 0);
//    assert(strcmp(text, "") == 0);
//
//    cout << "All tests succeeded" << endl;
//}

//[This is the last of the two problems that will have you write code and is the last problem on the exam.]
//
//Cleo the Cat spotted Benny the Bunny 30 feet in front of her and started to chase him. They ran over rough terrain, so their speeds weren't constant; sometimes Cleo gained on Benny and sometimes Benny pulled further ahead. A drone flying overhead happened to catch the chase on camera, and processing the video produced a sequence of integers representing for each second of the chase, how many feet Benny's lead over Cleo increased or decreased by.
//
//For example, the sequence of change values 5 2 0 -3 6 2 -4 0 0 -5 -5 1 -8 means that in the first second, Benny's lead increased by 5 feet (making his lead 35 feet); in the next three seconds, his lead increased by 2 more feet, then stayed the same, then decreased by 3 feet (making his lead 34 feet). From this example, we see that by the end of the sequence (after thirteen seconds), Benny ended up 21 feet ahead of Cleo, and the largest lead he had over Cleo was 42 feet.
//
//Your task is to process an array representing a sequence of changes in Benny's lead. Write a function named process that takes three parameters and returns an int. The parameters are
//changes, an array of ints that the function promises not to modify, representing a sequence of changes in Benny's lead;
//n, an int that indicates how many elements of changes to examine;
//maxLead, a reference to an int. The function must not assume that maxLead has any particular value at the time it is called; the function sets maxLead as indicated below.
//We say a bad change value is an integer less than -15 or greater than 15. The function must return -3 if n is not positive. The function must return -2 if n is positive and changes contains any bad change value. The function must return -1 if n is positive and changes contains no bad change values, but at some point in the sequence, a change value would causes Benny's lead over Cleo to be negative. Otherwise (i.e., if n is positive and changes has no bad change values and the processing can be completed without Benny's lead becoming negative), the function returns the distance between Cleo and Benny after processing all the changes in the array. If the function returns -3 or -2 or -1, the value of maxLead must be the same as it was at the time the function was called; otherwise, the function must set maxLead to the largest lead Benny had at any time.
//
//Notice that it's OK for Benny's lead to become 0. (If there are further entries in changes after that point, then since the chase continued, apparently Cleo couldn't get a hold of Benny at that time; if changes ends at that point, we can only hope Benny dived into a hole to safety.)
//
//Here are some examples of how this function could be tested:
//
//    int chg1[13] = { 5, 2, 0, -3, 6, 2, -4, 0, 0, -5, -5, 1, -8 };
//    int m;
//    assert(process(chg1, 13, m) == 21  &&  m == 42);
//
//      // In this example, the sequence indicates that after five seconds,
//      // Benny's lead over Cleo was -2
//    int chg2[7] = { 0, 2, -12, -9, -13, 10, 10 };
//    m = 999;
//    assert(process(chg2, 5, m) == -1  &&  m == 999);
//      // m is unchanged, not 32
//We are providing a test framework that, if you wish, you may use with a compiler to test your function. What you will submit as your answer to this problem is only the process function. Do not submit things like the #include lines or a main routine. We will be giving partial credit if warranted, so be sure to submit your function even if you can't get it to work correctly. If we take the code you write in the space below and insert it into the program, the resulting program must compile, or you will receive zero points for this problem. You do not need to write comments in the code.
//
//Here is the test framework that you may copy and paste into a C++ source file. For your own testing purposes, you might add additional tests in the main routine, although you won't be turning them in, of course.
//// The following line avoids a VC++ issue; it's harmless for Xcode and g31
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cassert>
using namespace std;

// SUBMIT AS YOUR ANSWER ONLY THE CODE BETWEEN THIS COMMENT AND THE
// COMMENT AT THE END OF THE process FUNCTION

int process(const int changes[], int n, int& maxLead){
    if (n<=0){
        return -3;
    } else {
        int lead = 30;
        for (int i=0; i<n; i++){
            if (changes[i] < -15 || changes[i] > 15){
                return -2;
            }
            lead += changes[i];
            if (lead < 0){
                return -1;
            }
        }
        lead = 30;
        maxLead = 30;
        for (int i=0; i<n; i++){
            lead += changes[i];
            if (lead > maxLead){
                maxLead = lead;
            }
        }
        return lead;
    }
}

// SUBMIT AS YOUR ANSWER ONLY THE CODE BETWEEN THIS COMMENT AND THE
// COMMENT AT THE START OF THE process FUNCTION

int main()
{
    int chg1[13] = { 5, 2, 0, -3, 6, 2, -4, 0, 0, -5, -5, 1, -8 };
    int m;
    assert(process(chg1, 13, m) == 21);
    assert(m == 42);

    int chg2[7] = { 0, 2, -12, -9, -13, 10, 10 };
    m = 999;
    assert(process(chg2, 5, m) == -1);
    assert(m == 999);

    int chg3[3] = { 10, 20, 10 };
    m = 999;
    assert(process(chg3, 3, m) == -2);
    assert(m == 999);

    assert(process(chg3, -1, m) == -3);
    assert(process(chg3, 0, m) == -3);
    assert(m == 999);

    int chg4[3] = { 10, 15, -15 };
    m = 999;
    assert(process(chg4, 3, m) == 40);
    assert(m == 55);

    int chg5[3] = { -16, 10, 10 };
    m = 999;
    assert(process(chg5, 3, m) == -2);
    assert(m == 999);

    int chg6[3] = { -15, -15, -1 };
    m = 999;
    assert(process(chg6, 3, m) == -1);
    assert(m == 999);

    int chg7[3] = { -15, -15, 0 };
    m = 999;
    assert(process(chg7, 3, m) == 0);
    assert(m == 30);

    cout << "All tests succeeded" << endl;
}

