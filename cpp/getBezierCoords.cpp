#include <SFML/Graphics.hpp>

////////////////////////////////////////////////////////////
/// \brief Возвращает массив точек кривой Безье для 3 контрольных точек
///
/// \param p1, p2, p3  Соответственно 1, 2, 3 контрольные точки   
/// \param count	   Количество точек из которых будет состоять кривая
////////////////////////////////////////////////////////////
sf::VertexArray getBezierCoords(sf::Vector2f p1, sf::Vector2f p2, sf::Vector2f p3, int count = 30) {
	if (count < 3) count = 3;

	sf::VertexArray vertices(sf::LineStrip, count);

	for (int i = 0; i < count; i++) {
		float t = float(i) / (count - 1);

		vertices[i].position = ((1.f - t) * (1.f - t)) * p1
			+ (2.f * (1.f - t) * t) * p2
			+ (t * t) * p3;
	}

	return vertices;
}