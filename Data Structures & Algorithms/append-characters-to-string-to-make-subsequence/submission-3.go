func appendCharacters(s string, t string) int {
    ind:=0
    for _,val:=range []byte(s){
        if ind<len(t) && val==t[ind]{
            ind++
        }
    }
    return len(t)-ind
}