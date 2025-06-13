#include <iostream>

// 每月的天數 (非閏年)
int days_in_month_arr[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

// 判斷是否為閏年
bool isLeap(int y) {
    return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
}

// 計算從公元1年1月1日到 y/m/d 的總天數
long long dateToSerial(int y, int m, int d) {
    long long num_total_days = 0;
    // 累加 y-1 年之前所有年份的天數
    for (int current_y = 1; current_y < y; ++current_y) {
        num_total_days += isLeap(current_y) ? 366 : 365;
    }
    // 累加當年 m-1 月之前所有月份的天數
    for (int current_m = 1; current_m < m; ++current_m) {
        if (current_m == 2 && isLeap(y)) {
            num_total_days += 29;
        } else {
            num_total_days += days_in_month_arr[current_m];
        }
    }
    // 加上當月的天數
    num_total_days += d;
    return num_total_days;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int num_test_cases;
    std::cin >> num_test_cases;

    // 參考日期: 2010年1月29日，星期五
    // 題目星期表示: 星期日=1, ..., 星期五=6, 星期六=7
    // 內部0索引表示: 星期日=0, ..., 星期五=5, 星期六=6
    int ref_y = 2010, ref_m = 1, ref_d = 29;
    int ref_day_0_idx = 5; // 星期五 (0-indexed)
    long long ref_serial = dateToSerial(ref_y, ref_m, ref_d);

    while (num_test_cases--) {
        int y, m, d;
        std::cin >> y >> m >> d;

        long long target_serial = dateToSerial(y, m, d);
        long long day_diff = target_serial - ref_serial;

        // 計算目標日期的0索引星期
        // (value % mod + mod) % mod 確保結果為正
        int target_day_0_idx = (ref_day_0_idx + (day_diff % 7) + 7) % 7;
        
        // 轉換為題目要求的1索引星期 (星期日=1, ..., 星期六=7)
        int result_day_1_idx = target_day_0_idx + 1;
        
        std::cout << result_day_1_idx << std::endl;
    }

    return 0;
}