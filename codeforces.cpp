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

// 266B Queue at the School
// int n, t;
// string s;
// cin >> n >> t >> s;
//  while(t--)
//  {
//      for(int j = 0; j < n - 1; j ++)
//      {
//          if((s[j] == 'B') && (s[j+1] == 'G'))
//          {
//              swap(s[j], s[j + 1]);
//              j++;
//          }
//      }
//  }
// cout << s;

// 467A George and Accommodation
// int n, p, q, rooms = 0;
// cin >> n;
// while(n--)
// {
//     cin >> p >> q;
//     if(q >= p + 2)
//     {
//         rooms++;
//     }
// }
// cout << rooms;

// 486A Calculating Function
//  signed long long n, calc;
//  cin >> n;
//  calc = (n % 2 == 0)? n / 2: -1 * ((n / 2) + 1);
//  cout << calc;

// 344A Magnets
// int n, magnet, groups = 0, prev = -1;
// cin >> n;
// while(n--)
// {
//     cin >> magnet;
//     if (magnet != prev)
//         groups++;
//     prev = magnet;
// }
// cout<< groups;

// 200B Drinks
//  double sum = 0, in;
//  int n, a;
//  cin >> n;
//  a = n;
//  while(n--)
//  {
//      cin >> in;
//      sum += in;
//  }
//  cout << fixed << setprecision(12) << sum / a;

// 136A Presents
// int n;
// cin >> n;
// vector<int> p(n), out(n + 1);
// for (int i = 0; i < n; i++)
// {
//     cin >> p[i];
//     out[p[i]] = i + 1;
// }
// for (int i = 1; i <= n; i++)
// {
//     cout << out[i] << (i == n ? "\n" : " ");
// }

// 228A Is your horseshoe on the other hoof?
// long long arr[4], count = 0;
// for(int i = 0; i < 4; i++)
//     cin >> arr[i];
// sort(arr, arr + 4);
// for(int i = 1; i < 4; i++)
// {
//     if(arr[i] == arr[i - 1])
//         count++;
// }
// cout << count;
// return 0;

// 1328A Division Problem
// long long t, n, a, b, count = 0;
// cin >> t;
// while(t--)
// {
//     cin >> a >> b;
//     cout << (b - a % b) % b << endl;
// }

// 705A Hulk
// int n;
// cin >> n;
// for(int i = 1; i <= n; i++)
// {
//     cout << (i % 2 ? "I hate " : "I love ");
//     cout << (i == n ? "it" : "that ");
// }

// 720A Pangram
// int n;
// string s;
// bool ss[26] = {false};
// cin >> n >> s;
// if (n < 26)
// {
//     cout << "NO";
//     return 0;
// }
// else
// {
//     for (int i = 0; i < n; i++)
//     {
//         char c = tolower(s[i]);
//         ss[c - 'a'] = true;
//     }
//     for (int i = 0; i < 26; i++)
//     {
//         if (!ss[i])
//         {
//             cout << "NO";
//             return 0;
//         }
//     }
// }
// cout << "YES";

// 144A Arrival of the General
// int n, lowindex = 0, highindex = 0, max = 0, min = 999999999;
// cin >> n;
// vector <int> a(n);
// for(int i = 0; i < n; i++)
// {
//     cin >> a[i];
// }
// for (int i = 0; i < n; i++) {
//     if (a[i] > max) {
//         max = a[i];
//         highindex = i;
//     }
//     if (a[i] <= min) {
//         min = a[i];
//         lowindex = i;
//     }
// }
// if(highindex < lowindex)
// {
//     cout << highindex + n - lowindex - 1;
// }
// else
// {
//     cout << highindex + n - lowindex - 2;
// }

// 469A I Wanna Be the Guy
//  int n, p, q, x;
//  cin >> n;
//  vector <bool> levels(n, false);
//  cin >> p;
//  for(int i = 0; i < p; i++)
//  {
//      cin >> x;
//      levels[x - 1] = true;
//  }
//  cin >> q;
//  for(int i = 0; i < q; i++)
//  {
//      cin >> x;
//      levels[x - 1] = true;
//  }
//  if(all_of(levels.begin(), levels.end(), [](bool b) { return b; }))
//  {
//      cout << "I become the guy.";
//  }
//  else
//  {
//      cout << "Oh, my keyboard!";
//  }

// 996A Hit the Lottery
//  int n, count = 0;
//  int coins[] = {100, 20, 10, 5, 1};
//  cin >> n;
//  for (int coin : coins) {
//      count += n / coin;
//      n %= coin;
//  }
//  cout << count;

// 61A Ultra-Fast Mathematician
// string a, b;
// cin >> a >> b;
// for (int i = 0; i < a.size(); i++) 
// {
//    cout << (a[i] != b[i] ? '1' : '0');
// }

// 148A Insomnia cure
// int k, l, m, n, d, count = 0;
// cin >> k >> l >> m >> n >> d;
// for(int i = 1; i <= d; i++)
// {
//    if(i % k == 0 || i % l == 0 || i % n == 0 || i % m == 0)
//    {
//        count ++;
//    }
// }
// cout << count;

// 785A Anton and Polyhedrons
// long long n ,count = 0;
// string s;
// cin >> n;
// while(n--)
// {
//     cin >> s;
//     if(s == "Tetrahedron")
//     {
//         count += 4;
//     }
//     else if (s == "Cube")
//     {
//         count += 6;
//     }
//     else if (s == "Octahedron")
//     {
//         count += 8;
//     }
//     else if (s == "Dodecahedron")
//     {
//         count += 12;
//     }
//     else if (s == "Icosahedron")
//     {
//         count += 20;
//     }
// }
// cout << count;

















