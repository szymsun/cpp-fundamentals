#include "validation.hpp"
#include <algorithm>
#include <cctype>
#include <vector>

std::vector<char> SPECIAL_CHARACTERS = {33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 58, 59, 60, 61, 62, 63, 64};

std::string getErrorMessage(ErrorCode code) {
    switch (code) {
    case ErrorCode::Ok:
        return "Ok";
    case ErrorCode::PasswordNeedsAtLeastNineCharacters:
        return "Password needs to have at least nine characters";
    case ErrorCode::PasswordNeedsAtLeastOneNumber:
        return "Password needs to have at least one number";
    case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter:
        return "Password needs to have at least one special character";
    case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter:
        return "Password needs to have at least one uppercase letter";
    default:
        return "Passwords do not match";
    }

    return "";
}

bool doPasswordsMatch(const std::string& password1, const std::string& password2) {
    return password1 == password2;
}

ErrorCode checkPasswordRules(const std::string& password) {
    if (password.size() < 9) {
        return ErrorCode::PasswordNeedsAtLeastNineCharacters;
    }

    bool numbers = false;
    bool special = false;
    bool upper = false;
    for (auto chr : password) {
        if (isdigit(chr) && !numbers) {
            numbers = true;
        }
        if (!special) {
            if (std::find(SPECIAL_CHARACTERS.begin(), SPECIAL_CHARACTERS.end(), chr) != SPECIAL_CHARACTERS.end()) {
                special = true;
            }
        }
        if (isupper(chr) && !upper) {
            upper = true;
        }
    }
    if (!numbers) {
        return ErrorCode::PasswordNeedsAtLeastOneNumber;
    }

    if (!special) {
        return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
    }

    if (!upper) {
        return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
    }

    return ErrorCode::Ok;
}

ErrorCode checkPassword(const std::string& password1, const std::string& password2) {
    if (!doPasswordsMatch(password1, password2)) {
        return ErrorCode::PasswordsDoNotMatch;
    }

    return ErrorCode::Ok;
}