/**
 * Создает и возвращает массив из переданного псевдомассива
 * @param {psevdo array} psevdo psevdo array
 */
function toArray(psevdo) {
   return Array.prototype.slice.apply(psevdo);
}
