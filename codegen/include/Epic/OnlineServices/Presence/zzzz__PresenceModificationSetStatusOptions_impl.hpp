#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Presence/PresenceModificationSetStatusOptions.hpp"
#include "Epic/OnlineServices/Presence/zzzz__Status_impl.hpp"
#include "Epic/OnlineServices/Presence/zzzz__PresenceModificationSetStatusOptions_def.hpp"
#include "Epic/OnlineServices/Presence/zzzz__Status_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Presence::PresenceModificationSetStatusOptions.get_Status
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Presence::Status (::Epic::OnlineServices::Presence::PresenceModificationSetStatusOptions::*)()>(&::Epic::OnlineServices::Presence::PresenceModificationSetStatusOptions::get_Status)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803474c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::PresenceModificationSetStatusOptions>(),
                        {"get_Status", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Presence::PresenceModificationSetStatusOptions.set_Status
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Presence::PresenceModificationSetStatusOptions::*)(::Epic::OnlineServices::Presence::Status)>(&::Epic::OnlineServices::Presence::PresenceModificationSetStatusOptions::set_Status)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180379030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::PresenceModificationSetStatusOptions>(),
                        {"set_Status", {}, {::i2c::type_of<::Epic::OnlineServices::Presence::Status>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Epic::OnlineServices::Presence::Status Epic::OnlineServices::Presence::PresenceModificationSetStatusOptions::get_Status()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::PresenceModificationSetStatusOptions>(),
                        {"get_Status", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Presence::Status>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Presence::PresenceModificationSetStatusOptions::set_Status(::Epic::OnlineServices::Presence::Status  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::PresenceModificationSetStatusOptions>(),
                        {"set_Status", {}, {::i2c::type_of<::Epic::OnlineServices::Presence::Status>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_Status_k__BackingField", ty: "::Epic::OnlineServices::Presence::Status", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Presence::PresenceModificationSetStatusOptions::PresenceModificationSetStatusOptions(::Epic::OnlineServices::Presence::Status  _Status_k__BackingField) noexcept  {
this->_Status_k__BackingField = _Status_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Presence::PresenceModificationSetStatusOptions::PresenceModificationSetStatusOptions()   {
}
