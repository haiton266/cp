var hs = {
    name: 'Hai',
    age: 19,
    getName: function() {
        return this.name;
    }
}
console.log(hs.getName())

// Tạo constructor cho object
function User(firstName, lastName, avatar) {
    this.firstName = firstName;
    this.lastName = lastName;
    this.avatar = avatar;
}

// var author = new User('Sưn', 'Nguyen', 'New');
// console.log(author);

// author.rank = 5;
// console.log(author.firstName);