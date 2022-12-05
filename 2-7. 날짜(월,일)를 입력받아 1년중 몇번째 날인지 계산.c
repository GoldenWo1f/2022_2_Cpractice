#include <stdio.h>

int main(void) {
	int month, day;   // 월, 일
	int day_count;    // 1년 중 날 수
  printf("Month? ");
  scanf("%d", &month);
  printf("Day? ");
  scanf("%d", &day);
  if(month == 1 && day >= 1 && day <= 31)
    day_count = day;
  else if(month == 2 && day >= 1 && day <= 28)
    day_count = day + 28;
  else if(month == 3 && day >= 1 && day <= 31)
    day_count = day + 59;
  else if(month == 4 && day >= 1 && day <= 30)
    day_count = day + 90;
  else if(month == 5 && day >= 1 && day <= 31)
    day_count = day + 120;
  else if(month == 6 && day >= 1 && day <= 30)
    day_count = day + 151;
  else if(month == 7 && day >= 1 && day <= 31)
    day_count = day + 181;
  else if(month == 8 && day >= 1 && day <= 31)
    day_count = day + 212;
  else if(month == 9 && day >= 1 && day <= 30)
    day_count = day + 243;
  else if(month == 10 && day >= 1 && day <= 31)
    day_count = day + 273;
  else if(month == 11 && day >= 1 && day <= 30)
    day_count = day + 304;
  else if(month == 12 && day >= 1 && day <= 31)
    day_count = day + 334;
  else
    day_count = -1;

  if(day_count > 0)
    printf("이 날짜는 1년 중 %d번째 날에 해당됩니다.", day_count);
  else
    printf("잘못 입력하셨습니다.");
  return 0;
}