import 'student.dart';

void main() {
  Set<Student> set = {
    Student('Hai', '106200228', DateTime(2002, 6, 26), {'Math', 'IT'}),
    Student('Hai', '106200228', DateTime(2002, 6, 26), {'Math', 'IT'}),
    Student('Trong', '106202238', DateTime(2002, 6, 16), {'Math', 'English'}),
    Student('Phuong', '116202238', DateTime(2003, 6, 16), {'Math', 'IT'}),
    Student('Hai', '106200228', DateTime(2002, 6, 26), {'Math', 'IT'}),
    Student('Hai Nguyen', '206200228', DateTime(2003, 6, 26), {'Math', 'IT'}),
    Student('Trong Hoang', '106202238', DateTime(2002, 5, 16),
        {'Physis', 'English'}),
    Student('Phuong Thanh', '116202238', DateTime(2003, 6, 16), {'Math', 'IT'}),
    Student('Hai', '106200228', DateTime(2002, 6, 26), {'Math', 'IT'}),
    Student('Quynh', '106210227', DateTime(2003, 6, 25), {'IT'}),
    Student('Hai', '106200228', DateTime(2002, 6, 26), {'Math', 'IT'}),
    Student('Hai', '106200228', DateTime(2002, 6, 26), {'Math', 'IT'}),
    Student('Trong', '106202238', DateTime(2002, 6, 16), {'Math', 'English'}),
    Student('Phuong', '116202238', DateTime(2003, 6, 16), {'Math', 'IT'}),
    Student('Hai', '106200228', DateTime(2002, 6, 26), {'Math', 'IT'}),
    Student('Phuong Thanh', '116202238', DateTime(2003, 6, 16), {'Math', 'IT'}),
    Student('Hai', '106200228', DateTime(2002, 6, 26), {'Math', 'IT'}),
    Student('Hai Nguyen', '206200228', DateTime(2003, 6, 26), {'Math', 'IT'})
  };
  print(set);
}
