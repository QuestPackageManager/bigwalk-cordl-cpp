#pragma once
// IWYU pragma private; include "Rewired/IControllerTemplateThrottle.hpp"
#include "Rewired/zzzz__IControllerTemplateThrottle_def.hpp"
#include "Rewired/zzzz__IControllerTemplateAxis_def.hpp"
#include "Rewired/zzzz__IControllerTemplateButton_def.hpp"
#include "Rewired/zzzz__IControllerTemplateElement_def.hpp"
//  Writing Method size for method: ::Rewired::IControllerTemplateThrottle.get_value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::IControllerTemplateThrottle::*)()>(&::Rewired::IControllerTemplateThrottle::get_value)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::IControllerTemplateThrottle*>(),
                    {::i2c::class_of<::Rewired::IControllerTemplateThrottle*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::IControllerTemplateThrottle.get_valuePrev
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::IControllerTemplateThrottle::*)()>(&::Rewired::IControllerTemplateThrottle::get_valuePrev)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::IControllerTemplateThrottle*>(),
                    {::i2c::class_of<::Rewired::IControllerTemplateThrottle*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::IControllerTemplateThrottle.get_throttle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::IControllerTemplateAxis* (::Rewired::IControllerTemplateThrottle::*)()>(&::Rewired::IControllerTemplateThrottle::get_throttle)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::IControllerTemplateThrottle*>(),
                    {::i2c::class_of<::Rewired::IControllerTemplateThrottle*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::IControllerTemplateThrottle.get_minDetent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::IControllerTemplateButton* (::Rewired::IControllerTemplateThrottle::*)()>(&::Rewired::IControllerTemplateThrottle::get_minDetent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::IControllerTemplateThrottle*>(),
                    {::i2c::class_of<::Rewired::IControllerTemplateThrottle*>(), 3}
                ));
    return ___internal_method;
  }
};
inline float_t Rewired::IControllerTemplateThrottle::get_value()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::IControllerTemplateThrottle*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t Rewired::IControllerTemplateThrottle::get_valuePrev()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::IControllerTemplateThrottle*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::Rewired::IControllerTemplateAxis* Rewired::IControllerTemplateThrottle::get_throttle()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::IControllerTemplateThrottle*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::IControllerTemplateAxis*>(this, ___internal_method);
}
inline ::Rewired::IControllerTemplateButton* Rewired::IControllerTemplateThrottle::get_minDetent()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::IControllerTemplateThrottle*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::IControllerTemplateButton*>(this, ___internal_method);
}
/// @brief Convert operator to "::Rewired::IControllerTemplateElement"
constexpr  Rewired::IControllerTemplateThrottle::operator ::Rewired::IControllerTemplateElement*() noexcept {
return static_cast<::Rewired::IControllerTemplateElement*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::IControllerTemplateElement"
constexpr ::Rewired::IControllerTemplateElement* Rewired::IControllerTemplateThrottle::i___Rewired__IControllerTemplateElement() noexcept {
return static_cast<::Rewired::IControllerTemplateElement*>(static_cast<void*>(this));
}
