#pragma once
// IWYU pragma private; include "Rewired/IControllerTemplateAxis3D.hpp"
#include "Rewired/zzzz__IControllerTemplateAxis3D_def.hpp"
#include "Rewired/zzzz__IControllerTemplateAxis_def.hpp"
#include "Rewired/zzzz__IControllerTemplateElement_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Rewired::IControllerTemplateAxis3D.get_value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Rewired::IControllerTemplateAxis3D::*)()>(&::Rewired::IControllerTemplateAxis3D::get_value)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::IControllerTemplateAxis3D*>(),
                    {::i2c::class_of<::Rewired::IControllerTemplateAxis3D*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::IControllerTemplateAxis3D.get_valuePrev
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Rewired::IControllerTemplateAxis3D::*)()>(&::Rewired::IControllerTemplateAxis3D::get_valuePrev)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::IControllerTemplateAxis3D*>(),
                    {::i2c::class_of<::Rewired::IControllerTemplateAxis3D*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::IControllerTemplateAxis3D.get_horizontal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::IControllerTemplateAxis* (::Rewired::IControllerTemplateAxis3D::*)()>(&::Rewired::IControllerTemplateAxis3D::get_horizontal)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::IControllerTemplateAxis3D*>(),
                    {::i2c::class_of<::Rewired::IControllerTemplateAxis3D*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::IControllerTemplateAxis3D.get_vertical
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::IControllerTemplateAxis* (::Rewired::IControllerTemplateAxis3D::*)()>(&::Rewired::IControllerTemplateAxis3D::get_vertical)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::IControllerTemplateAxis3D*>(),
                    {::i2c::class_of<::Rewired::IControllerTemplateAxis3D*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::IControllerTemplateAxis3D.get_depth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::IControllerTemplateAxis* (::Rewired::IControllerTemplateAxis3D::*)()>(&::Rewired::IControllerTemplateAxis3D::get_depth)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::IControllerTemplateAxis3D*>(),
                    {::i2c::class_of<::Rewired::IControllerTemplateAxis3D*>(), 4}
                ));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector3 Rewired::IControllerTemplateAxis3D::get_value()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::IControllerTemplateAxis3D*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Rewired::IControllerTemplateAxis3D::get_valuePrev()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::IControllerTemplateAxis3D*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::Rewired::IControllerTemplateAxis* Rewired::IControllerTemplateAxis3D::get_horizontal()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::IControllerTemplateAxis3D*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::IControllerTemplateAxis*>(this, ___internal_method);
}
inline ::Rewired::IControllerTemplateAxis* Rewired::IControllerTemplateAxis3D::get_vertical()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::IControllerTemplateAxis3D*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::IControllerTemplateAxis*>(this, ___internal_method);
}
inline ::Rewired::IControllerTemplateAxis* Rewired::IControllerTemplateAxis3D::get_depth()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::IControllerTemplateAxis3D*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::IControllerTemplateAxis*>(this, ___internal_method);
}
/// @brief Convert operator to "::Rewired::IControllerTemplateElement"
constexpr  Rewired::IControllerTemplateAxis3D::operator ::Rewired::IControllerTemplateElement*() noexcept {
return static_cast<::Rewired::IControllerTemplateElement*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::IControllerTemplateElement"
constexpr ::Rewired::IControllerTemplateElement* Rewired::IControllerTemplateAxis3D::i___Rewired__IControllerTemplateElement() noexcept {
return static_cast<::Rewired::IControllerTemplateElement*>(static_cast<void*>(this));
}
