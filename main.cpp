//
//  main.cpp
//  CS31 Midterm 1
//
//  Created by Angela Kan on 10/29/20.
//

//Write a program that reads one line of input as a string and for every occurrence of a digit character in that string that is immediately followed by an uppercase letter, writes one line of output consisting of nothing more than that digit character. For example, if the input string is R2D2 added 16GB more of 2GHz memory then the output must be simply be 2, 6, and 2, each on its own line (because of the 2D, 6G, and 2G). If the input is On 29 October, she weighed 8kg or is I love C++ then the program must write no output at all, since neither string has any digit character that is immediately followed by an uppercase letter. (Notice that in the first string, the character immediately after the 9 character is a space character, not the O.)


//#include <iostream>
//  #include <string>
//  #include <cctype>
//  using namespace std;
//
//  int main()
//  {
//      string str;
//      getline(cin, str);
//
//      for (int i = 0; i != str.size(); i++){
//          if (isdigit(str.at(i)) && isupper(str.at(i+1)) && isalpha(str.at(i+1))){
//              cout << str.at(i) << endl;
//          }
//      }
//  }

//#include <iostream>
//using namespace std;
//
//int main() {
//    int score = 0;
//    cout << "Please enter the student's score:";
//    cin >> score;
//
//    int grade;
//    if(score >= 90 && score <= 100){
//        grade = 1;
//    } else if(score < 90 && score >=80)
//        grade = 2;
//    else if(score < 80 && score >= 70)
//        grade = 3;
//    else if(score < 70 && score >= 60)
//        grade = 4;
//    else
//        grade = 5;
//
//    switch(grade){
//        case 1:
//            cout << "A" << endl;
//            break;
//        case 2:
//            cout << "B" << endl;
//            break;
//        case 3:
//            cout << "C" << endl;
//            break;
//        case 4:
//            cout << "D" << endl;
//            break;
//        default:
//            cout << "F" << endl;
//            break;
//    }
//}



//#include <iostream>
//#include <cctype>
//#include <string>
//using namespace std;
//int main() {
//     int i;
//     string str;
//     cin >> str;
//
//     i = -1;
//
//     do {
//     i++;
//     } while( i != str.size() && !islower(str[i]) );
//
//     if ( i == str.size() )
//     cout << "No lowercase character" << endl;
//     else
//     cout << str[i] << endl;
//}


//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int num;
//    cin >> num;
//    cout << (num * num * num) << endl;
//}

//Write a program that reads one line of input as a string and writes the string diagonally in the following manner. If the input string is Whee!, the output must be

//----W
//---h
//--e
//-e
//!
//There must be one line of output for each character in the string, with no hyphen before the last character of the string, and with each row before the last having one more hyphen than the line below it. If the string is empty, then no lines must be written. As another example, for the input string 5 days, the output must be
//
//-----5
//----
//---d
//--a
//-y
//s
//(There is a space character after the last hyphen in the second line.) The program must not write a prompt for its input.

//
//  #include <iostream>
//  #include <string>
//  using namespace std;
//
//  int main()
//  {
//      string str;
//      getline(cin, str);
//
//      for (int i = 0; i != str.size(); i++){
//          for (int j = i; j < str.size() - 1; j++){
//              cout << "-";
//          }
//          cout << str.at(i) << endl;
//      }
//  }


//Write a program that reads an integer and then reads the next line of input as a string. The program must not write prompts for its inputs. The integer specifies how many lines of output will be written. Let's explain the behavior with an example. For the input
//
//5
//abcdef @3xwvutsrq
//the output will be
//
//afwr
//b vq
//c@u
//d3t
//exs
//If we call the integer n, the first line of output contains the first character of the string, then the character that is n positions later in the string, then the one n positions after that, etc. (In this example, that's a, then 5 positions later f, then 5 positions later w, etc.) The second line starts with the second character of the string, followed by the character n positions later in the string, etc. (In this example, that's b, then the space character (that's after the f), then the v, etc.) The third line starts with the third character of the string, and so on. Notice that in the first line, for example, no character is written after the r because there is no character in the string that is n positions later in the string.


  #include <iostream>
  #include <string>
  using namespace std;

  int main()
  {
      int x;
      cin >> x;
      cin.ignore(10000, '\n');
      
      string str;
      getline(cin, str);
      
      for (int i = 0; i < x; i++){
          for (int j = i; j < str.size(); j += x){
              cout << str.at(j);
          }
          cout << endl;
      }
  }
