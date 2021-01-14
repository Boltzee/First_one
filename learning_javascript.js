var a= [1,2,3,4,5];
a.forEach(greet_hello);

function greet_hello (value, index, array) {
	console.log("Hi to the newest member of the family "+ value);
}