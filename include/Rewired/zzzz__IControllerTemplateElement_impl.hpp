#pragma once
// IWYU pragma private; include "Rewired/IControllerTemplateElement.hpp"
#include "Rewired/zzzz__IControllerTemplateElement_def.hpp"
#include "Rewired/zzzz__ControllerTemplateElementType_def.hpp"
#include "Rewired/zzzz__IControllerTemplateElementSource_def.hpp"
//  Writing Method size for method: ::Rewired::IControllerTemplateElement.get_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::IControllerTemplateElement::*)()>(&::Rewired::IControllerTemplateElement::get_id)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::IControllerTemplateElement*>(),
                    {::i2c::class_of<::Rewired::IControllerTemplateElement*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::IControllerTemplateElement.get_descriptiveName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::IControllerTemplateElement::*)()>(&::Rewired::IControllerTemplateElement::get_descriptiveName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::IControllerTemplateElement*>(),
                    {::i2c::class_of<::Rewired::IControllerTemplateElement*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::IControllerTemplateElement.get_type
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerTemplateElementType (::Rewired::IControllerTemplateElement::*)()>(&::Rewired::IControllerTemplateElement::get_type)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::IControllerTemplateElement*>(),
                    {::i2c::class_of<::Rewired::IControllerTemplateElement*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::IControllerTemplateElement.get_exists
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::IControllerTemplateElement::*)()>(&::Rewired::IControllerTemplateElement::get_exists)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::IControllerTemplateElement*>(),
                    {::i2c::class_of<::Rewired::IControllerTemplateElement*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::IControllerTemplateElement.get_source
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::IControllerTemplateElementSource* (::Rewired::IControllerTemplateElement::*)()>(&::Rewired::IControllerTemplateElement::get_source)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::IControllerTemplateElement*>(),
                    {::i2c::class_of<::Rewired::IControllerTemplateElement*>(), 4}
                ));
    return ___internal_method;
  }
};
inline int32_t Rewired::IControllerTemplateElement::get_id()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::IControllerTemplateElement*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW Rewired::IControllerTemplateElement::get_descriptiveName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::IControllerTemplateElement*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Rewired::ControllerTemplateElementType Rewired::IControllerTemplateElement::get_type()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::IControllerTemplateElement*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerTemplateElementType>(this, ___internal_method);
}
inline bool Rewired::IControllerTemplateElement::get_exists()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::IControllerTemplateElement*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Rewired::IControllerTemplateElementSource* Rewired::IControllerTemplateElement::get_source()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::IControllerTemplateElement*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::IControllerTemplateElementSource*>(this, ___internal_method);
}
