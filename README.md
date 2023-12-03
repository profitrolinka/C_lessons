# C lessons
## Lesson 1

In this lesson we implemented basic array operations in C, both static and dynamic. We can declare an array immediately or pre-allocate memory for a future array using malloc, for example:
```c++
double arr[len];

for (int i = 0; i < len; ++i) {
     scanf("%lf", &arr[i]);
}
```

There we just declare array named "arr" with length "len".

Or we can do something like this:

```c++
double *arr2;
arr2 = (double *)malloc(len2 * sizeof(double));

for (int i = 0; i < len2; ++i) {
    scanf("%lf", &*(arr2+i));
}
```
There we just prepare some memory to be filled with some information we need.

