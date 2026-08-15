#pragma once
// IWYU pragma private; include "Rewired/IControllerTemplateAxis.hpp"
#include "Rewired/zzzz__IControllerTemplateAxis_def.hpp"
#include "Rewired/zzzz__AxisRange_def.hpp"
#include "Rewired/zzzz__IControllerTemplateAxisSource_def.hpp"
#include "Rewired/zzzz__IControllerTemplateButton_def.hpp"
#include "Rewired/zzzz__IControllerTemplateElement_def.hpp"
//  Writing Method size for method: ::Rewired::IControllerTemplateAxis.get_positiveDescriptiveName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::IControllerTemplateAxis::*)()>(&::Rewired::IControllerTemplateAxis::get_positiveDescriptiveName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::IControllerTemplateAxis*>(),
                    {::i2c::class_of<::Rewired::IControllerTemplateAxis*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::IControllerTemplateAxis.get_negativeDescriptiveName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::IControllerTemplateAxis::*)()>(&::Rewired::IControllerTemplateAxis::get_negativeDescriptiveName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::IControllerTemplateAxis*>(),
                    {::i2c::class_of<::Rewired::IControllerTemplateAxis*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::IControllerTemplateAxis.GetDescriptiveName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::IControllerTemplateAxis::*)(::Rewired::AxisRange)>(&::Rewired::IControllerTemplateAxis::GetDescriptiveName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::IControllerTemplateAxis*>(),
                    {::i2c::class_of<::Rewired::IControllerTemplateAxis*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::IControllerTemplateAxis.get_value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::IControllerTemplateAxis::*)()>(&::Rewired::IControllerTemplateAxis::get_value)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::IControllerTemplateAxis*>(),
                    {::i2c::class_of<::Rewired::IControllerTemplateAxis*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::IControllerTemplateAxis.get_valuePrev
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::IControllerTemplateAxis::*)()>(&::Rewired::IControllerTemplateAxis::get_valuePrev)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::IControllerTemplateAxis*>(),
                    {::i2c::class_of<::Rewired::IControllerTemplateAxis*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::IControllerTemplateAxis.get_source
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::IControllerTemplateAxisSource* (::Rewired::IControllerTemplateAxis::*)()>(&::Rewired::IControllerTemplateAxis::get_source)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::IControllerTemplateAxis*>(),
                    {::i2c::class_of<::Rewired::IControllerTemplateAxis*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::IControllerTemplateAxis.get_AsButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::IControllerTemplateButton* (::Rewired::IControllerTemplateAxis::*)()>(&::Rewired::IControllerTemplateAxis::get_AsButton)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::IControllerTemplateAxis*>(),
                    {::i2c::class_of<::Rewired::IControllerTemplateAxis*>(), 6}
                ));
    return ___internal_method;
  }
};
inline ::StringW Rewired::IControllerTemplateAxis::get_positiveDescriptiveName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::IControllerTemplateAxis*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Rewired::IControllerTemplateAxis::get_negativeDescriptiveName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::IControllerTemplateAxis*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Rewired::IControllerTemplateAxis::GetDescriptiveName(::Rewired::AxisRange  axisRange)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::IControllerTemplateAxis*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, axisRange);
}
inline float_t Rewired::IControllerTemplateAxis::get_value()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::IControllerTemplateAxis*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t Rewired::IControllerTemplateAxis::get_valuePrev()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::IControllerTemplateAxis*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::Rewired::IControllerTemplateAxisSource* Rewired::IControllerTemplateAxis::get_source()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::IControllerTemplateAxis*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::IControllerTemplateAxisSource*>(this, ___internal_method);
}
inline ::Rewired::IControllerTemplateButton* Rewired::IControllerTemplateAxis::get_AsButton()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::IControllerTemplateAxis*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::IControllerTemplateButton*>(this, ___internal_method);
}
/// @brief Convert operator to "::Rewired::IControllerTemplateElement"
constexpr  Rewired::IControllerTemplateAxis::operator ::Rewired::IControllerTemplateElement*() noexcept {
return static_cast<::Rewired::IControllerTemplateElement*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::IControllerTemplateElement"
constexpr ::Rewired::IControllerTemplateElement* Rewired::IControllerTemplateAxis::i___Rewired__IControllerTemplateElement() noexcept {
return static_cast<::Rewired::IControllerTemplateElement*>(static_cast<void*>(this));
}
