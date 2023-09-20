int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int i = digitsSize - 1, j;
    int sum = 0;

// Perform the usual incrementation logic.
    while (i >= 0) {
            if (digits[i] < 9) {
                digits[i]++;
                break;
            } else {
                digits[i] = 0;
            }
            i--;
        }
    // Calculate the sum of all digits.
    for (j = 0; j < digitsSize; j++) {
        sum += digits[j];
    }

    // Check if additional space is needed.
    if ( sum == 0) {
        *returnSize = digitsSize + 1;
        int* result = malloc(sizeof(int) * (*returnSize));
        if (result == NULL) {
            return NULL; // Handle memory allocation error.
        }

        // Set the carry and the rest of the digits to 0.
        result[0] = 1;
        for (i = 1; i < (*returnSize); i++) {
            result[i] = 0;
        }
        return result;
    } else {
        *returnSize = digitsSize;
        int* result = malloc(sizeof(int) * (*returnSize));
        if (result == NULL) {
            return NULL; // Handle memory allocation error.
        }        

        // Copy the modified digits to the result.
        for (i = 0; i < (*returnSize); i++) {
            result[i] = digits[i];
        }
        return result;
    }
}

