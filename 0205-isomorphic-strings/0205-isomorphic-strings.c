bool isIsomorphic(char * s, char * t){
    int map_s[128] = {};
    int map_t[128] = {};
    int i = 0;

    while (s[i]) {
        if (map_s[s[i]] != map_t[t[i]])
            return (false);
        map_s[s[i]] = i + 1;
        map_t[t[i]] = i + 1;
        i++;
    }
    return (true);
}
