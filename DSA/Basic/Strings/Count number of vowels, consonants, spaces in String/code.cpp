#include<bits/stdc++.h>

using namespace std;
int solve(string str, int length) {
  int vowels = 0, consonants = 0, whitespaces = 0;
  for (int i = 0; i < length; i++) // converting given string to lowercase
  {
    str[i] = towlower(str[i]);
  }
  for (int i = 0; i < length; i++) {
    if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
      vowels++;
    else if (str[i] >= 'a' && str[i] <= 'z')
      consonants++;
    else if (str[i] == ' ')
      whitespaces++;
  }

  cout << "Vowels: " << vowels << "\n";
  cout << "Consonants: " << consonants << "\n";
  cout << "White Spaces: " << whitespaces << "\n";

}
int main() {
  string str = "Take u forward is Awesome";
  int length = str.length();
  solve(str, length);
  return 0;
}
/*

Output:

Vowels: 10
Consonants: 11
White Spaces: 4

Time Complexity: O(n), n is the length of string

Space Complexity: O(1)
*/