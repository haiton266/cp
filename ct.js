var listStudentBlock = document.querySelector('#list-students');

var studentApi = 'http://localhost:3000/student';

function start() {
    getStudent();
}

start();

function getStudent(callback) {
    fetch(studentApi)
        .then(function(response) {
            return response.json();
        })
        .then(callback);
}