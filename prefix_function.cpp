int pi[1000001];
void pref_function(string s) {
    ll i,j;
    fli(i,1,s.length()) {
        j=pi[i-1];
        if(s[i]==s[j]) {
            pi[i]=j+1;
        }
        else {
            while(j>0 && s[i]!=s[j]) j=pi[j-1];
            if(s[i]==s[j]) j++;
            pi[i]=j;
        }
    }
}