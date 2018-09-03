/**
 * Табулирует функцию func
 * 
 * @param {number} start начальное значение
 * @param {number} end конечное значение
 * @param {number} step шаг табуляции
 * @param {function} func функция табулирования 
 *  (получает значение аргумента через паарметр) 
 */
function tabulateFunc(start, end, step, func) {
	let result = [];

	for (let i = 0; true; i++) {
		let val = start + step * i;
		if (val > end) return result;

		result.push({
			val: val,
			res: func(val),
		});
	}
	
}