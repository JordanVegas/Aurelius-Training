להלן **סקירה ממוקדת וברורה של ה-syntax הבסיסי בשפת C**, בדיוק לפי מה שביקשת – בלי מערכים ובלי מצביעים.

---

## מבנה בסיסי של תוכנית C (`main`)

כל תוכנית C חייבת פונקציית `main` – זו נקודת ההתחלה של התוכנית.

```c
#include <stdio.h>

int main() {
    // קוד התוכנית
    return 0;
}
```

המשמעות:

* `#include <stdio.h>` – מאפשר שימוש ב־`printf`, `scanf`
* `int main()` – פונקציה שמחזירה מספר שלם
* `return 0;` – סימון שהתוכנית הסתיימה בהצלחה

---

## טיפוסים פרימיטיביים (Primitive Types)

### מספרים שלמים

```c
int x = 10;
signed int y = -5;        // ברירת מחדל – signed
unsigned int z = 20;     // רק ערכים חיוביים
```

### מספרים עשרוניים

```c
float a = 3.14f;
double b = 2.71828;
```

> הערה:
> `float` פחות מדויק מ־`double`, אבל לרוב מספיק ללימוד בסיסי.

---

## הדפסת פלט (`printf`)

```c
printf("Hello world\n");
printf("x = %d\n", x);
printf("a = %.2f\n", a);
```

פורמטים נפוצים:

* `%d` – int
* `%u` – unsigned int
* `%f` – float / double
* `%.2f` – שני ספרות אחרי הנקודה
* `\n` – ירידת שורה

---

## קבלת קלט מהמשתמש (`scanf`)

```c
int age;

printf("Enter age: ");
scanf("%d", &age);

printf("You entered: %d\n", age);
```

שימו לב:

* חייבים `&` לפני המשתנה
* הפורמט חייב להתאים לטיפוס

---

## הגדרת פונקציות

### הצהרה + מימוש

```c
int add(int a, int b) {
    return a + b;
}
```

### שימוש בפונקציה

```c
int result = add(3, 4);
printf("%d\n", result);
```

### פונקציה שלא מחזירה ערך

```c
void say_hi() {
    printf("Hi!\n");
}
```

---

## זרימת תוכנית בסיסית (if)

```c
int x = 5;

if (x > 0) {
    printf("Positive\n");
} else {
    printf("Non-positive\n");
}
```

---

## לולאת `while` ו־`for`

```c
int i = 0;
while (i < 3) {
    printf("%d\n", i);
    i++;
}
```

```c
for (int i = 0; i < 3; i++) {
    printf("%d\n", i);
}
```

---

## קומפילציה עם GCC (הכי חשוב)

### קובץ: `main.c`

#### קומפילציה בסיסית

```bash
gcc main.c
```

יוצר קובץ הרצה בשם `a.out`

#### קומפילציה עם שם מותאם

```bash
gcc main.c -o program
```

הרצה:

```bash
./program
```

#### קומפילציה עם אזהרות (מומלץ מאוד)

```bash
gcc -Wall -Wextra main.c -o program
```

---

## סיכום קצר

✔ `main` – נקודת כניסה
✔ טיפוסים: `int`, `unsigned`, `float`, `double`
✔ פלט: `printf`
✔ קלט: `scanf`
✔ פונקציות – עם או בלי ערך חזרה
✔ קומפילציה: `gcc file.c -o program`
