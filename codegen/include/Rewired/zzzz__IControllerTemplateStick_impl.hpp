#pragma once
// IWYU pragma private; include "Rewired/IControllerTemplateStick.hpp"
#include "Rewired/zzzz__IControllerTemplateStick_def.hpp"
#include "Rewired/zzzz__IControllerTemplateAxis_def.hpp"
#include "Rewired/zzzz__IControllerTemplateElement_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Rewired::IControllerTemplateStick.get_value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Rewired::IControllerTemplateStick::*)()>(&::Rewired::IControllerTemplateStick::get_value)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::IControllerTemplateStick*>(),
                    {::i2c::class_of<::Rewired::IControllerTemplateStick*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::IControllerTemplateStick.get_valuePrev
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Rewired::IControllerTemplateStick::*)()>(&::Rewired::IControllerTemplateStick::get_valuePrev)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::IControllerTemplateStick*>(),
                    {::i2c::class_of<::Rewired::IControllerTemplateStick*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::IControllerTemplateStick.get_horizontal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::IControllerTemplateAxis* (::Rewired::IControllerTemplateStick::*)()>(&::Rewired::IControllerTemplateStick::get_horizontal)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::IControllerTemplateStick*>(),
                    {::i2c::class_of<::Rewired::IControllerTemplateStick*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::IControllerTemplateStick.get_vertical
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::IControllerTemplateAxis* (::Rewired::IControllerTemplateStick::*)()>(&::Rewired::IControllerTemplateStick::get_vertical)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::IControllerTemplateStick*>(),
                    {::i2c::class_of<::Rewired::IControllerTemplateStick*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::IControllerTemplateStick.get_rotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::IControllerTemplateAxis* (::Rewired::IControllerTemplateStick::*)()>(&::Rewired::IControllerTemplateStick::get_rotation)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::IControllerTemplateStick*>(),
                    {::i2c::class_of<::Rewired::IControllerTemplateStick*>(), 4}
                ));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector3 Rewired::IControllerTemplateStick::get_value()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::IControllerTemplateStick*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Rewired::IControllerTemplateStick::get_valuePrev()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::IControllerTemplateStick*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::Rewired::IControllerTemplateAxis* Rewired::IControllerTemplateStick::get_horizontal()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::IControllerTemplateStick*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::IControllerTemplateAxis*>(this, ___internal_method);
}
inline ::Rewired::IControllerTemplateAxis* Rewired::IControllerTemplateStick::get_vertical()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::IControllerTemplateStick*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::IControllerTemplateAxis*>(this, ___internal_method);
}
inline ::Rewired::IControllerTemplateAxis* Rewired::IControllerTemplateStick::get_rotation()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::IControllerTemplateStick*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::IControllerTemplateAxis*>(this, ___internal_method);
}
/// @brief Convert operator to "::Rewired::IControllerTemplateElement"
constexpr  Rewired::IControllerTemplateStick::operator ::Rewired::IControllerTemplateElement*() noexcept {
return static_cast<::Rewired::IControllerTemplateElement*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::IControllerTemplateElement"
constexpr ::Rewired::IControllerTemplateElement* Rewired::IControllerTemplateStick::i___Rewired__IControllerTemplateElement() noexcept {
return static_cast<::Rewired::IControllerTemplateElement*>(static_cast<void*>(this));
}
