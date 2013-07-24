
/**
* Generates fibonnaci numbers up to n.
* @param {number} n
*/
function genFibonacciNumbers(n) {

	var fibs = [],
		i;

	// Dynamic programming algorithm
	// Base each result on the result of previous results
	// O(n) running time
	fibs.push(0);
	fibs.push(1);

	for (i = 2; i < n; i++) {
		fibs.push(fibs[i-1] + fibs[i-2]);
	}

	return fibs;
}

/**
* Prints the n fibonnaci numbers
* @param {number} n
*/
function printFibs(n) {
	var fibs = genFibonacciNumbers(n);

	for (var i = 0; i < n; i++) {
		console.log(fibs[i]);
	}
}

