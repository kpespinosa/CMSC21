
int intArr(int arr[], int length) {
  int result = 0;
  for(int i = 0; i < length; i++) {
    ...
  }
  return result;
}

int string(char str[]) {
  for(int i = 0; str[i] != '\0'; i++) {
    ...
  }
}

// mathy, range of numbers
int mathy(int n) {
  for(int i = start; i < stop; i += step) {
    ...
  }
}

// until, keep doing, while
int doWhile(int n) {
  while(...) {
    ...
  }
}

// pairwise
int twoArrs(int arr1[], int length1, int arr2[], int length2) {
  for(int i = 0; i < length; i++) {
    ...
  }
}

// for every element in arr1, check every element in arr2
int twoArrs(int arr1[], int length1, int arr2[], int length2) {
  for(int i = 0; i < length1; i++) {
    for(int j = 0; j < length2; j++) {
      ...
    }
  }
}
