const char* FoodForToday(char letter) {
    if( letter == 'a' || letter == 'A') {
        return "Apple";
    } else if (letter == 'b' || letter == 'B') {
        return "Banana";
    } else {
        return "This dish is not available";
    }
}