// User function Template for C++


int countWords(string s)
{
    int cnt=0;
    bool cont=false;
    for(int i=0;i<s.size();i++){
        if(s[i]==' '|| s[i]=='\\'){
            cont=false;
        }else if(!cont&&s[i-1]!='\\'){
            cnt++;
            cont=true;
        }
    }
    return cnt;
}