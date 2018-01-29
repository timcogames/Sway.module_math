#ifndef SWAY_MATH_COLOR_H
#define SWAY_MATH_COLOR_H

#include <sway/math/vector4.h>
#include <sway/core.h>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(math)

template <typename type_t> class TVector4;

/*!
 * \brief
 *    Шаблонный класс представления цвета.
 */
template <typename type_t>
class TColor final {
public:
	/*!
	 * \brief 
	 *    Конструктор класса.
	 *
	 *    Выполняет инициализацию нового экземпляра класса.
	 * 
	 * \sa
	 *    TColor(type_t, type_t, type_t, type_t)
	 */
	TColor() {
		_r = _g = _b = (type_t) 0;
		_a = (type_t) 1;
	}

	/*!
	 * \brief 
	 *    Конструктор класса.
	 *
	 *    Выполняет инициализацию нового экземпляра класса.
	 *
	 * \param[in] r
	 *    Значение канала красного цвета.
	 * 
	 * \param[in] g
	 *    Значение канала зеленого цвета.
	 * 
	 * \param[in] b
	 *    Значение канала синего цвета.
	 * 
	 * \param[in] a
	 *    Значение альфа-канала.
	 * 
	 * \sa
	 *    TColor()
	 */
	TColor(type_t r, type_t g, type_t b, type_t a = (type_t) 1) {
		set(r, g, b, a);
	}

	/*!
	 * \brief 
	 *    Устанавливает новые значения.
	 *
	 * \param[in] r
	 *    Значение канала красного цвета.
	 * 
	 * \param[in] g
	 *    Значение канала зеленого цвета.
	 * 
	 * \param[in] b
	 *    Значение канала синего цвета.
	 * 
	 * \param[in] a
	 *    Значение альфа-канала.
	 */
	void set(type_t r, type_t g, type_t b, type_t a = (type_t) 1) {
		_r = r;
		_g = g;
		_b = b;
		_a = a;
	}

	/*!
	 * \brief
	 *    Получает значение канала красного цвета.
	 *
	 * \sa
	 *    getG() const
	 *    getB() const
	 *    getA() const
	 */
	type_t getR() const {
		return _r;
	}

	/*!
	 * \brief
	 *    Получает значение канала зеленого цвета.
	 *
	 * \sa
	 *    getR() const
	 *    getB() const
	 *    getA() const
	 */
	type_t getG() const {
		return _g;
	}

	/*!
	 * \brief
	 *    Получает значение канала синего цвета.
	 *
	 * \sa
	 *    getR() const
	 *    getG() const
	 *    getA() const
	 */
	type_t getB() const {
		return _b;
	}

	/*!
	 * \brief
	 *    Получает значение альфа-канала.
	 *
	 * \sa
	 *    getR() const
	 *    getG() const
	 *    getB() const
	 */
	type_t getA() const {
		return _a;
	}

	/*!
	 * \brief
	 *    Преобразовывает в TVector4<type_t> класс.
	 */
	TVector4<type_t> toVec4() const {
		return TVector4<type_t>(_r, _g, _b, _a);
	}

private:
	type_t _r, _g, _b, _a;
};

typedef TColor<s32_t> col4i_t;
typedef TColor<f32_t> col4f_t;
typedef TColor<f64_t> col4d_t;

NAMESPACE_END(math)
NAMESPACE_END(sway)

#endif // SWAY_MATH_COLOR_H
