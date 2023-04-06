int partitionString(char * s){
    int start=0, o=0;
    int l=strlen(s);
    for(int i=0; i<l; i++){
        for(int j=start; j<=i; j++){
            if(s[i]==s[j]&&i!=j){
                o=o+1;
                start=i;
                break;
            }
        }
    }
    return o+1;
}