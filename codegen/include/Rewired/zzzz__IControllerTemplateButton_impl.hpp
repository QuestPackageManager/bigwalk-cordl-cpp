#pragma once
// IWYU pragma private; include "Rewired/IControllerTemplateButton.hpp"
#include "Rewired/zzzz__IControllerTemplateButton_def.hpp"
#include "Rewired/zzzz__IControllerTemplateAxis_def.hpp"
#include "Rewired/zzzz__IControllerTemplateButtonSource_def.hpp"
#include "Rewired/zzzz__IControllerTemplateElement_def.hpp"
//  Writing Method size for method: ::Rewired::IControllerTemplateButton.get_value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::IControllerTemplateButton::*)()>(&::Rewired::IControllerTemplateButton::get_value)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::IControllerTemplateButton*>(),
                    {::i2c::class_of<::Rewired::IControllerTemplateButton*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::IControllerTemplateButton.get_valuePrev
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::IControllerTemplateButton::*)()>(&::Rewired::IControllerTemplateButton::get_valuePrev)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::IControllerTemplateButton*>(),
                    {::i2c::class_of<::Rewired::IControllerTemplateButton*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::IControllerTemplateButton.get_pressure
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::IControllerTemplateButton::*)()>(&::Rewired::IControllerTemplateButton::get_pressure)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::IControllerTemplateButton*>(),
                    {::i2c::class_of<::Rewired::IControllerTemplateButton*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::IControllerTemplateButton.get_pressurePrev
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::IControllerTemplateButton::*)()>(&::Rewired::IControllerTemplateButton::get_pressurePrev)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::IControllerTemplateButton*>(),
                    {::i2c::class_of<::Rewired::IControllerTemplateButton*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::IControllerTemplateButton.get_justPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::IControllerTemplateButton::*)()>(&::Rewired::IControllerTemplateButton::get_justPressed)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::IControllerTemplateButton*>(),
                    {::i2c::class_of<::Rewired::IControllerTemplateButton*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::IControllerTemplateButton.get_justReleased
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::IControllerTemplateButton::*)()>(&::Rewired::IControllerTemplateButton::get_justReleased)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::IControllerTemplateButton*>(),
                    {::i2c::class_of<::Rewired::IControllerTemplateButton*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::IControllerTemplateButton.get_justChangedState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::IControllerTemplateButton::*)()>(&::Rewired::IControllerTemplateButton::get_justChangedState)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::IControllerTemplateButton*>(),
                    {::i2c::class_of<::Rewired::IControllerTemplateButton*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::IControllerTemplateButton.get_source
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::IControllerTemplateButtonSource* (::Rewired::IControllerTemplateButton::*)()>(&::Rewired::IControllerTemplateButton::get_source)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::IControllerTemplateButton*>(),
                    {::i2c::class_of<::Rewired::IControllerTemplateButton*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::IControllerTemplateButton.get_AsAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::IControllerTemplateAxis* (::Rewired::IControllerTemplateButton::*)()>(&::Rewired::IControllerTemplateButton::get_AsAxis)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::IControllerTemplateButton*>(),
                    {::i2c::class_of<::Rewired::IControllerTemplateButton*>(), 8}
                ));
    return ___internal_method;
  }
};
inline bool Rewired::IControllerTemplateButton::get_value()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::IControllerTemplateButton*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Rewired::IControllerTemplateButton::get_valuePrev()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::IControllerTemplateButton*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t Rewired::IControllerTemplateButton::get_pressure()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::IControllerTemplateButton*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t Rewired::IControllerTemplateButton::get_pressurePrev()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::IControllerTemplateButton*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool Rewired::IControllerTemplateButton::get_justPressed()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::IControllerTemplateButton*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Rewired::IControllerTemplateButton::get_justReleased()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::IControllerTemplateButton*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Rewired::IControllerTemplateButton::get_justChangedState()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::IControllerTemplateButton*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Rewired::IControllerTemplateButtonSource* Rewired::IControllerTemplateButton::get_source()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::IControllerTemplateButton*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::IControllerTemplateButtonSource*>(this, ___internal_method);
}
inline ::Rewired::IControllerTemplateAxis* Rewired::IControllerTemplateButton::get_AsAxis()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::IControllerTemplateButton*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::IControllerTemplateAxis*>(this, ___internal_method);
}
/// @brief Convert operator to "::Rewired::IControllerTemplateElement"
constexpr  Rewired::IControllerTemplateButton::operator ::Rewired::IControllerTemplateElement*() noexcept {
return static_cast<::Rewired::IControllerTemplateElement*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::IControllerTemplateElement"
constexpr ::Rewired::IControllerTemplateElement* Rewired::IControllerTemplateButton::i___Rewired__IControllerTemplateElement() noexcept {
return static_cast<::Rewired::IControllerTemplateElement*>(static_cast<void*>(this));
}
