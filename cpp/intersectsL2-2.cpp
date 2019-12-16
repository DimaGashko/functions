// Пересекаются ли 2-мерные отрезки
bool intersectsL2(sf::Vector2f start1, sf::Vector2f end1, sf::Vector2f start2, sf::Vector2f end2) {
   double x1, y1, x2, y2, x3, y3, x4, y4;
   double Ua, Ub, numerator_a, numerator_b, denominator;

   x1 = start1.x;
   y1 = start1.y;
   x2 = end1.x;
   y2 = end1.y;

   x3 = start2.x;
   y3 = start2.y;
   x4 = end2.x;
   y4 = end2.y;

   denominator = (y4 - y3)*(x1 - x2) - (x4 - x3)*(y1 - y2);

   if (denominator == 0) {
      if ((x1*y2 - x2 * y1)*(x4 - x3) - (x3*y4 - x4 * y3)*(x2 - x1) == 0 && (x1*y2 - x2 * y1)*(y4 - y3) - (x3*y4 - x4 * y3)*(y2 - y1) == 0)
         return true;
      return false;
   }
   else {
      numerator_a = (x4 - x2)*(y4 - y3) - (x4 - x3)*(y4 - y2);
      numerator_b = (x1 - x2)*(y4 - y2) - (x4 - x2)*(y1 - y2);
      Ua = numerator_a / denominator;
      Ub = numerator_b / denominator;
      return (Ua >= 0 && Ua <= 1 && Ub >= 0 && Ub <= 1);
   }
}