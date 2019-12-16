/**
 * Возвращает случайное число в формате HEX
 */
function getRandomHexColor() { 
   const numColor = Math.round(Math.random() * 0xffffff);
   return "#" + ("00000" + numColor.toString(16)).slice(-6);
}