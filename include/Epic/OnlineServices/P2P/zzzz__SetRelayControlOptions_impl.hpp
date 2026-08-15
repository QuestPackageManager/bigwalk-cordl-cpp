#pragma once
// IWYU pragma private; include "Epic/OnlineServices/P2P/SetRelayControlOptions.hpp"
#include "Epic/OnlineServices/P2P/zzzz__RelayControl_impl.hpp"
#include "Epic/OnlineServices/P2P/zzzz__SetRelayControlOptions_def.hpp"
#include "Epic/OnlineServices/P2P/zzzz__RelayControl_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::P2P::SetRelayControlOptions.get_RelayControl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::P2P::RelayControl (::Epic::OnlineServices::P2P::SetRelayControlOptions::*)()>(&::Epic::OnlineServices::P2P::SetRelayControlOptions::get_RelayControl)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803474c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SetRelayControlOptions>(),
                        {"get_RelayControl", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::SetRelayControlOptions.set_RelayControl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::P2P::SetRelayControlOptions::*)(::Epic::OnlineServices::P2P::RelayControl)>(&::Epic::OnlineServices::P2P::SetRelayControlOptions::set_RelayControl)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180379030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SetRelayControlOptions>(),
                        {"set_RelayControl", {}, {::i2c::type_of<::Epic::OnlineServices::P2P::RelayControl>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Epic::OnlineServices::P2P::RelayControl Epic::OnlineServices::P2P::SetRelayControlOptions::get_RelayControl()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SetRelayControlOptions>(),
                        {"get_RelayControl", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::P2P::RelayControl>(*this, ___internal_method);
}
inline void Epic::OnlineServices::P2P::SetRelayControlOptions::set_RelayControl(::Epic::OnlineServices::P2P::RelayControl  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SetRelayControlOptions>(),
                        {"set_RelayControl", {}, {::i2c::type_of<::Epic::OnlineServices::P2P::RelayControl>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_RelayControl_k__BackingField", ty: "::Epic::OnlineServices::P2P::RelayControl", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::P2P::SetRelayControlOptions::SetRelayControlOptions(::Epic::OnlineServices::P2P::RelayControl  _RelayControl_k__BackingField) noexcept  {
this->_RelayControl_k__BackingField = _RelayControl_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::P2P::SetRelayControlOptions::SetRelayControlOptions()   {
}
