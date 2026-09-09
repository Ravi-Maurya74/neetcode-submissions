func appendCharacters(s string, t string) int {
    ind:=0
    for i:=0;i<len(s);i++{
        if ind<len(t) && t[ind]==s[i]{
            ind++;
        }
    }
    return len(t)-ind
}