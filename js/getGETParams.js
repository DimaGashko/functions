/**
 * Возвращает объект GET-параметров из строки адреса
 * 
 * Возвращает объект вида:
 * {
 *    promName: value,
 * }
 */
function getGETParams() {
   var search = location.search.slice(1);
   var result = {};

   if (!search) return result;

   search.split('&').forEach(function (item) {
      var component = item.split('=');
      result[component[0]] = component[1];
   });

   return result;
}