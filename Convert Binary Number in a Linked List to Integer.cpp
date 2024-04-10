 #include <bits/stdc++.h>
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        vector <int> v;
        int ans =0;
        while(head!= NULL){
            v.push_back(head -> val);
            head = head -> next;
        }
        reverse(v.begin(),v.end());
        for(int i =0; i<v.size(); i++){
            ans = ans + v[i]*pow(2,i);
        }
        return ans;
    }
};
