#include<stdio.h>
int main(void)
{
	//정수형 변수에 대한 예제
	/*int age = 12;
	printf("%d\n", age); // %d = 정수를 쓴다
	age = 13;
	printf("%d\n", age);*/

	//실수형 변수에 대한 예제
	/*float f = 46.5f;
	printf("%.2f\n", f); // %f = 실수를 쓴다 %앞에 .을 쓰고 숫자를 쓸경우 원하는 소수점 자리
	double d = 4.428;
	printf("%.2lf\n", d);*/ // double을 쓸 때는 %lf 를 쓴다
	//const int YEAR = 2000; // 상수 변하지 않음
	//printf("태어난 년도 : %d\n", YEAR);
	//YEAR = 2001;

	//printf
	//연산
	//int add = 3 + 7; // 10
	//printf("3 + 7 = %d\n", add); // 변수를 쓰는 경우
	//printf("%d x %d = %d\n", 30, 79, 30 * 79); // 바로 수를 쓰는 경우 [ * = x(곱하기) ] 

	//scanf
	// 키보드 입력을 받아서 저장
	/*int input;
	printf("값을 입력하세요 : ");
	scanf_s("%d", &input); // & = & 변수가 전이된 곳에 값을 입력 받겠다. 그냥 꼭 써 
	printf("입력값 : %d\n", input);*/

	/*int one, two, three; // 여러가지 변수를 사용
	printf("3개의 정수를 입력하세요 :");
	scanf_s("%d %d %d", &one, &two, &three);
	printf("첫번째 값 : %d\n", one);
	printf("두번째 값 : %d\n", two);
	printf("세번째 값 : %d\n", three);*/
	
	//문자(한글자), 문자열(한글자 이상의 여러 글자)
	/*char c = 'A';
	printf("%c\n", c);*/
	
	/*char str[256]; // 문자를 저장하기 위한 변수를 연속하여 256개 둔다 [] 안의 수만큼 둔다
	scanf_s("%s", str, sizeof(str)); // sizeof = str의 개수인 256개 이내의 문자만 받겠다라고 정함
	printf("%s\n", str);*/

	// 프로젝트
	// 경찰관이 범죄자의 정보를 입수 (조서 작성)
	// 이름? 나이? 몸무게? 키? 범죄명?

	char name[256];
	printf("이름이 뭐예요? ");
	scanf_s("%s", name, sizeof(name));
	
	int age;
	printf("몇 살이에요? ");
	scanf_s("%d", &age);

	float weight;
	printf("몸무게는 몇 kg이에요? ");
	scanf_s("%f", &weight);

	double height;
	printf("키는 몇 cm예요? ");
	scanf_s("%lf", &height);

	char what[256];
	printf("어떤 범죄를 저질렀어요? ");
	scanf_s("%s", what, sizeof(what));
	
	//조서 내용 출력
	printf("\n\n--- 범죄자 정보 ---\n\n");
	printf(" 이름         : %s\n", name);
	printf(" 나이         : %d\n", age);
	printf(" 몸무게       : %.2f\n", weight);
	printf(" 키           : %.2lf\n", height);
	printf(" 범죄         : %s\n", what);


	return 0;
}