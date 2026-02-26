
#ifndef LOGISTIC_REGRESSOR_H
#define LOGISTIC_REGRESSOR_H

class LogisticRegressor {
    public:
        int predict(int* features, int length) {
            long sum = -205;
            for (int i = 0; i < length; i++) {
                sum += (long)features[i] * weights[i];
            }
            return (sum > 0) ? 1 : 0; // 1 = Positif, 0 = Négatif
        }

    private:
        int weights[78132] = { -2698, 623, -319, -221, -30, -13, -2, -458, 223, 26, 17, 223, -399, 669, 225, 119, 209, -89, 178, 95, -359, 26, -365, 85, 477, -67, 46, -544, -4, -4, -35, 29, 77, -98, 223, -1275, -365, 350, -648, 0, 585, -5292, 2020, 815, -33, -100, -198, -12, -90, -6 ... }; 
};
#endif
