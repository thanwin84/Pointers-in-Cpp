#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <map>
#include <queue>
#include<set>
#include<unordered_map>
#include<string>
using namespace std;
class Solution {
public:
	int maxSurvivingTime(int i_health, int i_armor) {
		int count = 1;
		int unit = 0;
		while (i_health > 0 and i_armor > 0) {
			//go to air
			unit++;
      // when odd, always go to air
			if (count % 2 != 0) {
				i_health += 3;
				i_armor += 2;
				count++;
			}
			else {
				if (i_health > 5 and i_armor > 10) {
					i_health -= 5;
					i_armor -= 10;
					count++;
				}
				else {
					i_health -= 20;
					i_armor += 5;
					count++;
				}
			}
		}
		return unit-1;
	}

};

int main() {
	int t;
	cin >> t;
	while (t--) {
		int h, a;
		cin >> h >> a;
		Solution obj;
		cout << obj.maxSurvivingTime(h, a) << endl;
	}

}
