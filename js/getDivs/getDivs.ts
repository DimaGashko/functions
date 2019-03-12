/**
 * Возвращает массив делителей числа n
 * @param n обрабатываемое число (ожидается, что число целое)
 */
export default function getDivs(n: number): number[] {
   if (n === 0) return [];
   else if (n === 1) return [1];
   else if (n < 0) n = -n;

   const divs = [1, n];

   for (let d = 2; d <= Math.sqrt(n); d++) {
      if (n % d !== 0) continue;

      divs.push(d);
      divs.push(n / d);
   }

   return divs;
}

/** Объект кэша используемый функцией getDivs */
const cache: {[n: number]: number[]} = {};

/**
 * Обертка над функцией getDivs добавляющая кеширование результатов
 * (у большинства чисел количество делителей в пределах 2-50)
 * @param n обрабатываемое число
 */
export function getDivs_withCache(n: number): number[] { 
   if (n in cache) { 
      return cache[n];
   }

   const res = getDivs(n);
   cache[n] = res;

   return res;
}