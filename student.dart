class Student {
  String name;
  String msv;
  DateTime birthday;
  Set<String> subject;

  Student(this.name, this.msv, this.birthday, this.subject);

  int getAge() {
    DateTime now = DateTime.now();
    int age = now.year - birthday.year - 1;
    if (now.month > birthday.month ||
        (now.month == birthday.month && now.day >= birthday.day)) {
      age++;
    }
    return age;
  }

  @override
  String toString() {
    return '{Name: $name, MSV: $msv, Age: ${getAge()} }';
  }

  @override
  bool operator ==(Object other) =>
      identical(this, other) ||
      other is Student &&
          runtimeType == other.runtimeType &&
          name == other.name &&
          msv == other.msv &&
          birthday == other.birthday;
  @override
  int get hashCode => name.hashCode ^ msv.hashCode ^ birthday.hashCode;
}
