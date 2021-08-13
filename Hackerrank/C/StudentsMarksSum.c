

//Complete the following function.

int marks_summation(int* marks, int number_of_students, char gender) {
  int boys=0;
  int girls=0;
  
  for(int i=0;i<number_of_students;i++){
      if (i%2==0){
          boys += marks[i];
      }
      else {
          girls += marks[i];
      }
  }
  return gender == 'b' ? boys : girls;
}

