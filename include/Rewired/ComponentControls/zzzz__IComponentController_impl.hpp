#pragma once
// IWYU pragma private; include "Rewired/ComponentControls/IComponentController.hpp"
#include "Rewired/ComponentControls/zzzz__IComponentController_def.hpp"
#include "Rewired/ComponentControls/zzzz__IComponentControl_def.hpp"
#include "Rewired/Utils/Interfaces/zzzz__IRegistrar_1_def.hpp"
//  Writing Method size for method: ::Rewired::ComponentControls::IComponentController.ClearControlValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::IComponentController::*)()>(&::Rewired::ComponentControls::IComponentController::ClearControlValues)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ComponentControls::IComponentController*>(),
                    {::i2c::class_of<::Rewired::ComponentControls::IComponentController*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void Rewired::ComponentControls::IComponentController::ClearControlValues()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ComponentControls::IComponentController*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
/// @brief Convert operator to "::Rewired::Utils::Interfaces::IRegistrar_1<::Rewired::ComponentControls::IComponentControl*>"
constexpr  Rewired::ComponentControls::IComponentController::operator ::Rewired::Utils::Interfaces::IRegistrar_1<::Rewired::ComponentControls::IComponentControl*>*() noexcept {
return static_cast<::Rewired::Utils::Interfaces::IRegistrar_1<::Rewired::ComponentControls::IComponentControl*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::Utils::Interfaces::IRegistrar_1<::Rewired::ComponentControls::IComponentControl*>"
constexpr ::Rewired::Utils::Interfaces::IRegistrar_1<::Rewired::ComponentControls::IComponentControl*>* Rewired::ComponentControls::IComponentController::i___Rewired__Utils__Interfaces__IRegistrar_1___Rewired__ComponentControls__IComponentControl__() noexcept {
return static_cast<::Rewired::Utils::Interfaces::IRegistrar_1<::Rewired::ComponentControls::IComponentControl*>*>(static_cast<void*>(this));
}
