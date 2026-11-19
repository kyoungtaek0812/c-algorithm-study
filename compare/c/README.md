# C 풀이 (박경택)

| 파일 | 문제 |
|---|---|
| `01_factorial.c` | 1. 팩토리얼은 어디까지 맞을까 |
| `02_division.c` | 2. -7 나누기 2는? (`floor_div` 포함) |
| `03_string.c` | 3. len() 없이 길이 재기 (`my_strlen`, `reverse`) |
| `04_min_max.c` | 4. 결과를 두 개 돌려주기 (`min_max`) |
| `05_bounds.c` | 5. 범위 검사 직접 만들기 (`safe_get`) |

모임(11/12, 11/19)에서 Visual Studio로 작성한 풀이는 따로 저장하지 않아서, 같은 요구사항으로 다시 정리해 올렸습니다(Claude 도움). 모든 파일은 gcc로 컴파일하고 실행해 결과를 확인했습니다.

Visual Studio에서 실행할 때는 파일을 `.c`로 저장하세요. 각 파일 첫 줄의 `#define _CRT_SECURE_NO_WARNINGS`는 `scanf` 경고(C4996)를 끄기 위한 것입니다.

`04_min_max.c`를 컴파일하면 "함수 매개변수 배열에 sizeof를 썼다"는 경고가 나옵니다. 함수 안에서 배열이 포인터로 바뀐다는 걸 보여주려고 일부러 넣은 코드입니다.
