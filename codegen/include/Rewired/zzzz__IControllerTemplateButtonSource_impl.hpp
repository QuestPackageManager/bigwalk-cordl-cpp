#pragma once
// IWYU pragma private; include "Rewired/IControllerTemplateButtonSource.hpp"
#include "Rewired/zzzz__IControllerTemplateButtonSource_def.hpp"
#include "Rewired/zzzz__IControllerElementTarget_def.hpp"
#include "Rewired/zzzz__IControllerTemplateElementSource_def.hpp"
//  Writing Method size for method: ::Rewired::IControllerTemplateButtonSource.get_target
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::IControllerElementTarget* (::Rewired::IControllerTemplateButtonSource::*)()>(&::Rewired::IControllerTemplateButtonSource::get_target)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::IControllerTemplateButtonSource*>(),
                    {::i2c::class_of<::Rewired::IControllerTemplateButtonSource*>(), 0}
                ));
    return ___internal_method;
  }
};
inline ::Rewired::IControllerElementTarget* Rewired::IControllerTemplateButtonSource::get_target()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::IControllerTemplateButtonSource*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::IControllerElementTarget*>(this, ___internal_method);
}
/// @brief Convert operator to "::Rewired::IControllerTemplateElementSource"
constexpr  Rewired::IControllerTemplateButtonSource::operator ::Rewired::IControllerTemplateElementSource*() noexcept {
return static_cast<::Rewired::IControllerTemplateElementSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::IControllerTemplateElementSource"
constexpr ::Rewired::IControllerTemplateElementSource* Rewired::IControllerTemplateButtonSource::i___Rewired__IControllerTemplateElementSource() noexcept {
return static_cast<::Rewired::IControllerTemplateElementSource*>(static_cast<void*>(this));
}
