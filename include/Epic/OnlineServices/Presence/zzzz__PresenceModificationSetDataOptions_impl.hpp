#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Presence/PresenceModificationSetDataOptions.hpp"
#include "Epic/OnlineServices/Presence/zzzz__DataRecord_impl.hpp"
#include "Epic/OnlineServices/Presence/zzzz__PresenceModificationSetDataOptions_def.hpp"
#include "Epic/OnlineServices/Presence/zzzz__DataRecord_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Presence::PresenceModificationSetDataOptions.get_Records
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Epic::OnlineServices::Presence::DataRecord> (::Epic::OnlineServices::Presence::PresenceModificationSetDataOptions::*)()>(&::Epic::OnlineServices::Presence::PresenceModificationSetDataOptions::get_Records)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::PresenceModificationSetDataOptions>(),
                        {"get_Records", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Presence::PresenceModificationSetDataOptions.set_Records
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Presence::PresenceModificationSetDataOptions::*)(::ArrayW<::Epic::OnlineServices::Presence::DataRecord>)>(&::Epic::OnlineServices::Presence::PresenceModificationSetDataOptions::set_Records)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::PresenceModificationSetDataOptions>(),
                        {"set_Records", {}, {::i2c::type_of<::ArrayW<::Epic::OnlineServices::Presence::DataRecord>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::ArrayW<::Epic::OnlineServices::Presence::DataRecord> Epic::OnlineServices::Presence::PresenceModificationSetDataOptions::get_Records()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::PresenceModificationSetDataOptions>(),
                        {"get_Records", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Epic::OnlineServices::Presence::DataRecord>>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Presence::PresenceModificationSetDataOptions::set_Records(::ArrayW<::Epic::OnlineServices::Presence::DataRecord>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::PresenceModificationSetDataOptions>(),
                        {"set_Records", {}, {::i2c::type_of<::ArrayW<::Epic::OnlineServices::Presence::DataRecord>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_Records_k__BackingField", ty: "::ArrayW<::Epic::OnlineServices::Presence::DataRecord>", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Presence::PresenceModificationSetDataOptions::PresenceModificationSetDataOptions(::ArrayW<::Epic::OnlineServices::Presence::DataRecord>  _Records_k__BackingField) noexcept  {
this->_Records_k__BackingField = _Records_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Presence::PresenceModificationSetDataOptions::PresenceModificationSetDataOptions()   {
}
