#include <iostream>
#include <string>

using namespace std;

// Function to determine zodiac sign and print it
void getZodiacSign(int day, int month, string &zodiacSign) {
    if ((month == 3 && day >= 21) || (month == 4 && day <= 19)) {
        zodiacSign = "Aries";
    } else if ((month == 4 && day >= 20) || (month == 5 && day <= 20)) {
        zodiacSign = "Taurus";
    } else if ((month == 5 && day >= 21) || (month == 6 && day <= 20)) {
        zodiacSign = "Gemini";
    } else if ((month == 6 && day >= 21) || (month == 7 && day <= 22)) {
        zodiacSign = "Cancer";
    } else if ((month == 7 && day >= 23) || (month == 8 && day <= 22)) {
        zodiacSign = "Leo";
    } else if ((month == 8 && day >= 23) || (month == 9 && day <= 22)) {
        zodiacSign = "Virgo";
    } else if ((month == 9 && day >= 23) || (month == 10 && day <= 22)) {
        zodiacSign = "Libra";
    } else if ((month == 10 && day >= 23) || (month == 11 && day <= 21)) {
        zodiacSign = "Scorpio";
    } else if ((month == 11 && day >= 22) || (month == 12 && day <= 21)) {
        zodiacSign = "Sagittarius";
    } else if ((month == 12 && day >= 22) || (month == 1 && day <= 19)) {
        zodiacSign = "Capricorn";
    } else if ((month == 1 && day >= 20) || (month == 2 && day <= 18)) {
        zodiacSign = "Aquarius";
    } else if ((month == 2 && day >= 19) || (month == 3 && day <= 20)) {
        zodiacSign = "Pisces";
    } else {
        zodiacSign = "Unknown";
    }
    
    cout << zodiacSign; // Print the zodiac sign directly
}

// Function to generate horoscope based on zodiac sign
void generateHoroscope(const string &zodiacSign) {
    cout << "\nHoroscope: ";
    
    if (zodiacSign == "Aries") {
        cout << "Today, Aries, is a day of excitement. Take risks, but don't forget to weigh the consequences.";
    } else if (zodiacSign == "Taurus") {
        cout << "Taurus, your patience will be rewarded today. A steady pace leads to long-term success.";
    } else if (zodiacSign == "Gemini") {
        cout << "Gemini, your curiosity is at an all-time high. Embrace new learning opportunities.";
    } else if (zodiacSign == "Cancer") {
        cout << "Cancer, trust your intuition today. You may discover something you've been seeking.";
    } else if (zodiacSign == "Leo") {
        cout << "Leo, it's your time to shine! Confidence will help you overcome any challenges.";
    } else if (zodiacSign == "Virgo") {
        cout << "Virgo, focus on the details today. Precision and organization will pay off.";
    } else if (zodiacSign == "Libra") {
        cout << "Libra, seek balance in your relationships. Harmony is the key to success.";
    } else if (zodiacSign == "Scorpio") {
        cout << "Scorpio, today brings transformation. Embrace change and trust your inner strength.";
    } else if (zodiacSign == "Sagittarius") {
        cout << "Sagittarius, adventure is calling. Step out of your comfort zone and explore new horizons.";
    } else if (zodiacSign == "Capricorn") {
        cout << "Capricorn, stay focused on your goals. Your hard work will bring you closer to your dreams.";
    } else if (zodiacSign == "Aquarius") {
        cout << "Aquarius, innovation is key today. Your creative ideas will pave the way for success.";
    } else if (zodiacSign == "Pisces") {
        cout << "Pisces, trust in your empathy. Your ability to understand others will create strong bonds.";
    } else {
        cout << "Oops! Something went wrong. Please check your input.";
    }
}

int main() {
    int day, month;
    string zodiacSign;
    
    cout << "Enter your birth day (1-31): ";
    cin >> day;
    cout << "Enter your birth month (1-12): ";
    cin >> month;

    cout << "\nYour zodiac sign is: ";
    getZodiacSign(day, month, zodiacSign); // Print zodiac sign and store in variable
    
    generateHoroscope(zodiacSign); // Generate horoscope
    
    return 0;
}

