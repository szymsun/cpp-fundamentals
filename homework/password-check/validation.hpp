// TODO: I'm empty :) Put enum and function headers here.
// Don't forget the header guard - #pragma once
#pragma once
#include <iostream>

enum ErrorCode {
    Ok,
    PasswordNeedsAtLeastNineCharacters,
    PasswordNeedsAtLeastOneNumber,
    PasswordNeedsAtLeastOneSpecialCharacter,
    PasswordNeedsAtLeastOneUppercaseLetter,
    PasswordsDoNotMatch,
};

std::string getErrorMessage(ErrorCode code);

bool doPasswordsMatch(const std::string& password1, const std::string& password2);

ErrorCode checkPasswordRules(const std::string& password);

ErrorCode checkPassword(const std::string& password1, const std::string& password2);