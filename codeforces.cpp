#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void)
{

}

// 4A WaterMelon
// int w;
// cin >> w;
// if(w > 2 && w % 2 == 0)
//     cout << "YES\n";
// else
//     cout << "NO\n";
// return 0;

// 71A Way Too Long Words
// int n;
// string s; 
// cin >> n;
// while(n--)
// {
//     cin >> s;
//     if(s.size() > 10)
//         cout << s[0] << s.size() - 2 << s[s.size() - 1] << endl;
//     else
//         cout << s << endl;
// }

// 231A Team
// int n, n1, n2, n3, count = 0;
// cin >> n;
// while(n--)
// {
//     cin >> n1 >> n2 >> n3;
//     if(n1 + n2 + n3 >= 2)
//     {
//         count++;
//     }
// }
// cout << count << endl;

// 282A Bit++
// int n, count = 0;
// string s;
// cin >> n;
// while(n--)
// {
//     cin >> s;
//     if(s == "X++" || s == "++X")
//     {
//         count++;
//     }
//     else if(s == "X--" || s == "--X")
//     {
//         count--;
//     }
// }
// cout << count << endl;

// 158A Next Round
// vector<int> nums;
// int n, k, count = 0, reference;
// cin >> n >> k;
// nums.resize(n);
// for (int i = 0; i < n; i++)
// {
//     cin >> nums[i];
//     if (i == k - 1)
//     {
//         reference = nums[i];
//     }
// }
// for (int i = 0; i < n; i++)
// {
//     if (nums[i] >= reference && nums[i] > 0)
//     {
//         count++;
//     }
// }
// cout << count << endl;

// 50A Domino piling
// int m, n;
// cin >> m >> n;
// cout << m * n / 2 << endl;

// 263A Beautiful Matrix
// int arr[5][5], x, y;
// for (int i = 0; i < 5; i++)
// {
//     for (int j = 0; j < 5; j++)
//     {
//         cin >> arr[i][j];
//         if (arr[i][j] == 1)
//         {
//             x = i;
//             y = j;
//         }
//     }
// }
// cout << abs(x - 2) + abs(y - 2) << endl;

// 1A Theatre Square
// long long n, m, a;
// cin >> n >> m >> a;
// cout << (n / a + (n % a != 0)) * ((m / a) + (m % a != 0)) << endl;

// 112A Petya and Strings
// string s1, s2;
// cin >> s1 >> s2;
// for (int i = 0; i < s1.size(); i++)
// {
//     s1[i] = tolower(s1[i]);
//     s2[i] = tolower(s2[i]);
// }
// cout << (s1 < s2 ? -1 : (s1 > s2 ? 1 : 0)) << endl;

// 236A Boy or Girl
// string s;
// cin >> s;
// sort(s.begin(), s.end());
// s.erase(unique(s.begin(), s.end()), s.end());
// cout << (s.size() % 2 == 0 ? "CHAT WITH HER!" : "IGNORE HIM!") << endl;

// 339A Helpful Maths
// string s, num, temp;
// cin >> s;
// if (s.size() == 1)
// {
//     cout << s << endl;
// }
// else
// {
//     for (int i = 0; i < s.size(); i += 2)
//     {
//         num.append(s.substr(i, 1));
//     }
//     sort(num.begin(), num.end());
//     for (int i = 0; i < num.size(); i++)
//     {
//         cout << num[i];
//         if (i != num.size() - 1)
//         {
//             cout << "+";
//         }
//     }
// }

// 281A Word Capitalization
// string s;
// cin >> s;
// s[0] = (s[0] >= 'a' && s[0] <= 'z') ? s[0] - 32 : s[0];
// cout << s << endl;

// 791A Bear and Big Brother
// int a, b, count = 0;
// cin >> a >> b;
// while (a <= b)
// {
//     a *= 3;
//     b *= 2;
//     count++;
// }
// cout << count << endl;

// 617A Elephant
// int x, count = 0;
// cin >> x;
// if (x > 5)
// {
//     count = x / 5;
//     if (x % 5 != 0)
//     {
//         count++;
//     }
// }
// else
// {
//     count = 1;
// }
// cout << count << endl;

// 266A Stones on the Table
// int n, count = 0;
// string s;
// cin >> n;
// cin >> s;
// for (int i = 0; i < n - 1; i++)
// {
//     if (s[i] == s[i + 1])
//     {
//         count++;
//     }
// }
// cout << count << endl;

// 546A Soldier and Bananas
// long long w, k, n, money = 0;
// cin >> k >> n >> w;
// for (int i = 1; i <= w; i++)
// {
//     money += k * i;
// }
// cout << (money > n ? money - n : 0) << endl;

// 59A Word
// string s;
// int upper = 0, lower = 0;
// cin >> s;
// for (int i = 0; i < s.size(); i++)
// {
//     if (s[i] >= 'A' && s[i] <= 'Z')
//     {
//         upper++;
//     }
//     else
//     {
//         lower++;
//     }
// }
// if (upper > lower)
// {
//     transform(s.begin(), s.end(), s.begin(), ::toupper);
// }
// else
// {
//     transform(s.begin(), s.end(), s.begin(), ::tolower);
// }
// cout << s << endl;

// 118A String Task
// string s;
// cin >> s;
// transform(s.begin(), s.end(), s.begin(), ::tolower);
// for (int i = 0; i < s.size(); i++)
// {
//     if (s[i] == 'a' || s[i] == 'o' || s[i] == 'y' || s[i] == 'e' || s[i] == 'u' || s[i] == 'i')
//     {
//         continue;
//     }
//     else
//     {
//         cout << "." << s[i];
//     }
// }

// 977A Wrong Subtraction
// long long n;
// int k;
// cin >> n >> k;
// for(int i = 0; i < k; i++)
// {
//     if( n % 10 == 0)
//     {
//         n /= 10;
//     }
//     else
//     {
//         n -= 1;
//     }
// }
// cout << n;

// 110A Nearly Lucky Number
// long long n;
// cin >> n;

// int cnt = 0;

// while (n > 0)
// {
//     int digit = n % 10;

//     if (digit == 4 || digit == 7)
//         cnt++;

//     n /= 10;
// }

// if (cnt == 4 || cnt == 7)
//     cout << "YES";
// else
//     cout << "NO";

// 734A Anton and Danik
// int n, A = 0, D = 0;
// string s;
// cin >> n;
// cin >> s;
// for(int i = 0; i < n; i++)
// {
//     (s[i] == 'A') ? A++ : D++;
// }
// if(A > D)
// {
//     cout << "Anton";
// }
// else if (A < D)
// {
//     cout << "Danik";
// }
// else
// {
//     cout << "Friendship";
// }

// 41A Translation
// string s, t;
// bool flag = true;
// cin >> s >> t;
// if(s.size() != t.size())
// {
//     flag = false;
// }
// for(int i = 0, j = t.size() - 1; i < s.size() && flag == true; i++, j--)
// {
//     if(s[i] != t[j])
//     {
//         flag = false;
//         break;
//     }
// }
// if(flag)
// {
//     cout << "YES";
// }
// else
// {
//     cout << "NO";
// }

// 677A Vanya and Fence
// int n, h, w = 0, a;
// cin >> n >> h;
// while(n--)
// {
//     cin >> a;
//     if(a <= h)
//     {
//         w += 1;
//     }
//     else
//     {
//         w += 2;
//     }
// }
// cout << w;

// 271A Beautiful Year
// int y;
// cin >> y;
// while (true)
// {
//     y++;
//     int a = y / 1000;
//     int b = (y / 100) % 10;
//     int c = (y / 10) % 10;
//     int d = y % 10;
//     if (a != b && a != c && a != d &&
//         b != c && b != d && c != d)
//     {
//         cout << y;
//         break;
//     }
// }

// 116A Tram
// int n, cap = 0, a, b, calc = 0;
//  cin >> n;
//  while(n--)
//  {
//      cin >> a >> b;
//      calc = abs(calc + b - a);
//      cap = max(cap, calc);
//  }
//  cout << cap;

 // 1030A In Search of an Easy Problem
// int n, a;
// bool flag = true;
// cin >> n;
// while(n--)
// {
//     cin >> a;
//     if (a == 1)
//     {
//         flag = false;
//         break;
//     }
// }
// if(flag)
// {
//     cout << "EASY";
// }
// else
// {
//     cout << "HARD";
// }



