// Пересекаются ли 1-мерные отрезки (a1; a2), (b1; b2)
// Косание не считается пересечением
// Параметры должны удовлетворять неравенству: a1 < a2 && b1 < b2
inline bool intersectsL1(float a1, float a2, float b1, float b2) {
   return (a1 < b1) ? (b1 < a2) : (a1 < b2);
}

// Пересекаются ли прямоугольники (со сторонами паралельными осям)
// Переданные координаты должны быть последовательными (ax1 < ax2, by1 < by2...)
inline bool intersectsNormalRect(
   float ax1, float ay1, float ax2, float ay2,
   float bx1, float by1, float bx2, float by2
) {
   return intersectsL1(ax1, ax2, bx1, bx2) &&
      intersectsL1(ay1, ay2, by1, by2);
}