func scoreOfString(s string) int {
    result := 0
    for i := 1; i < len(s); i++{
        result += abs(int(s[i]) - int(s[i-1]))
    }
    return result
}

func abs(n int) int{
    if n < 0{
        return -n
    }
    return n
}