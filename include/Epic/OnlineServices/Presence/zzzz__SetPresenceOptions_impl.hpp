#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Presence/SetPresenceOptions.hpp"
#include "Epic/OnlineServices/Presence/zzzz__SetPresenceOptions_def.hpp"
#include "Epic/OnlineServices/Presence/zzzz__PresenceModification_def.hpp"
#include "Epic/OnlineServices/zzzz__EpicAccountId_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Presence::SetPresenceOptions.get_LocalUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::EpicAccountId* (::Epic::OnlineServices::Presence::SetPresenceOptions::*)()>(&::Epic::OnlineServices::Presence::SetPresenceOptions::get_LocalUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::SetPresenceOptions>(),
                        {"get_LocalUserId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Presence::SetPresenceOptions.set_LocalUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Presence::SetPresenceOptions::*)(::Epic::OnlineServices::EpicAccountId*)>(&::Epic::OnlineServices::Presence::SetPresenceOptions::set_LocalUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::SetPresenceOptions>(),
                        {"set_LocalUserId", {}, {::i2c::type_of<::Epic::OnlineServices::EpicAccountId*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Presence::SetPresenceOptions.get_PresenceModificationHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Presence::PresenceModification* (::Epic::OnlineServices::Presence::SetPresenceOptions::*)()>(&::Epic::OnlineServices::Presence::SetPresenceOptions::get_PresenceModificationHandle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803ed930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::SetPresenceOptions>(),
                        {"get_PresenceModificationHandle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Presence::SetPresenceOptions.set_PresenceModificationHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Presence::SetPresenceOptions::*)(::Epic::OnlineServices::Presence::PresenceModification*)>(&::Epic::OnlineServices::Presence::SetPresenceOptions::set_PresenceModificationHandle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::SetPresenceOptions>(),
                        {"set_PresenceModificationHandle", {}, {::i2c::type_of<::Epic::OnlineServices::Presence::PresenceModification*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Epic::OnlineServices::EpicAccountId* Epic::OnlineServices::Presence::SetPresenceOptions::get_LocalUserId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::SetPresenceOptions>(),
                        {"get_LocalUserId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::EpicAccountId*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Presence::SetPresenceOptions::set_LocalUserId(::Epic::OnlineServices::EpicAccountId*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::SetPresenceOptions>(),
                        {"set_LocalUserId", {}, {::i2c::type_of<::Epic::OnlineServices::EpicAccountId*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::Presence::PresenceModification* Epic::OnlineServices::Presence::SetPresenceOptions::get_PresenceModificationHandle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::SetPresenceOptions>(),
                        {"get_PresenceModificationHandle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Presence::PresenceModification*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Presence::SetPresenceOptions::set_PresenceModificationHandle(::Epic::OnlineServices::Presence::PresenceModification*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::SetPresenceOptions>(),
                        {"set_PresenceModificationHandle", {}, {::i2c::type_of<::Epic::OnlineServices::Presence::PresenceModification*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::EpicAccountId*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_PresenceModificationHandle_k__BackingField", ty: "::Epic::OnlineServices::Presence::PresenceModification*", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Presence::SetPresenceOptions::SetPresenceOptions(::Epic::OnlineServices::EpicAccountId*  _LocalUserId_k__BackingField, ::Epic::OnlineServices::Presence::PresenceModification*  _PresenceModificationHandle_k__BackingField) noexcept  {
this->_LocalUserId_k__BackingField = _LocalUserId_k__BackingField;
this->_PresenceModificationHandle_k__BackingField = _PresenceModificationHandle_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Presence::SetPresenceOptions::SetPresenceOptions()   {
}
