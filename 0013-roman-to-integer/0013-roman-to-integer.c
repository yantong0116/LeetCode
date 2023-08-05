// Simple hash map structure to store key-value pairs
struct HashMap
{
    char key;
    int value;
};

// Function to get the value from the hash map based on the key
int getValue(struct HashMap *map, int mapSize, char key)
{
    for (int i = 0; i < mapSize; i++)
    {
        if (map[i].key == key)
            return map[i].value;
    }
    return -1; // Return -1 if the key is not found (this indicates an error in the Roman numeral)
}

int romanToInt(char *s)
{
    int ans = 0, n = strlen(s);
    
    // Define the hash map (equivalent to the unordered_map in C++)
    struct HashMap mp[] = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };

    for (int i = 0; i < n - 1; i++)
    {
        int currentValue = getValue(mp, sizeof(mp) / sizeof(mp[0]), s[i]);
        int nextValue = getValue(mp, sizeof(mp) / sizeof(mp[0]), s[i + 1]);

        if (currentValue >= nextValue)
            ans += currentValue;
        else
            ans -= currentValue;
    }

    ans += getValue(mp, sizeof(mp) / sizeof(mp[0]), s[n - 1]);
    return ans;
}