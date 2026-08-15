#pragma once
// IWYU pragma private; include "Rewired/IControllerTemplateAxisSource.hpp"
#include "Rewired/zzzz__IControllerTemplateAxisSource_def.hpp"
#include "Rewired/zzzz__IControllerElementTarget_def.hpp"
#include "Rewired/zzzz__IControllerTemplateElementSource_def.hpp"
//  Writing Method size for method: ::Rewired::IControllerTemplateAxisSource.get_splitAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::IControllerTemplateAxisSource::*)()>(&::Rewired::IControllerTemplateAxisSource::get_splitAxis)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::IControllerTemplateAxisSource*>(),
                    {::i2c::class_of<::Rewired::IControllerTemplateAxisSource*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::IControllerTemplateAxisSource.get_fullTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::IControllerElementTarget* (::Rewired::IControllerTemplateAxisSource::*)()>(&::Rewired::IControllerTemplateAxisSource::get_fullTarget)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::IControllerTemplateAxisSource*>(),
                    {::i2c::class_of<::Rewired::IControllerTemplateAxisSource*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::IControllerTemplateAxisSource.get_positiveTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::IControllerElementTarget* (::Rewired::IControllerTemplateAxisSource::*)()>(&::Rewired::IControllerTemplateAxisSource::get_positiveTarget)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::IControllerTemplateAxisSource*>(),
                    {::i2c::class_of<::Rewired::IControllerTemplateAxisSource*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::IControllerTemplateAxisSource.get_negativeTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::IControllerElementTarget* (::Rewired::IControllerTemplateAxisSource::*)()>(&::Rewired::IControllerTemplateAxisSource::get_negativeTarget)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::IControllerTemplateAxisSource*>(),
                    {::i2c::class_of<::Rewired::IControllerTemplateAxisSource*>(), 3}
                ));
    return ___internal_method;
  }
};
inline bool Rewired::IControllerTemplateAxisSource::get_splitAxis()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::IControllerTemplateAxisSource*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Rewired::IControllerElementTarget* Rewired::IControllerTemplateAxisSource::get_fullTarget()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::IControllerTemplateAxisSource*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::IControllerElementTarget*>(this, ___internal_method);
}
inline ::Rewired::IControllerElementTarget* Rewired::IControllerTemplateAxisSource::get_positiveTarget()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::IControllerTemplateAxisSource*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::IControllerElementTarget*>(this, ___internal_method);
}
inline ::Rewired::IControllerElementTarget* Rewired::IControllerTemplateAxisSource::get_negativeTarget()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::IControllerTemplateAxisSource*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::IControllerElementTarget*>(this, ___internal_method);
}
/// @brief Convert operator to "::Rewired::IControllerTemplateElementSource"
constexpr  Rewired::IControllerTemplateAxisSource::operator ::Rewired::IControllerTemplateElementSource*() noexcept {
return static_cast<::Rewired::IControllerTemplateElementSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::IControllerTemplateElementSource"
constexpr ::Rewired::IControllerTemplateElementSource* Rewired::IControllerTemplateAxisSource::i___Rewired__IControllerTemplateElementSource() noexcept {
return static_cast<::Rewired::IControllerTemplateElementSource*>(static_cast<void*>(this));
}
