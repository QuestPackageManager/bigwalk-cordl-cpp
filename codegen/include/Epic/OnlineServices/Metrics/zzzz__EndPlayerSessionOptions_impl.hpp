#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Metrics/EndPlayerSessionOptions.hpp"
#include "Epic/OnlineServices/Metrics/zzzz__EndPlayerSessionOptionsAccountId_impl.hpp"
#include "Epic/OnlineServices/Metrics/zzzz__EndPlayerSessionOptions_def.hpp"
#include "Epic/OnlineServices/Metrics/zzzz__EndPlayerSessionOptionsAccountId_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Metrics::EndPlayerSessionOptions.get_AccountId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Metrics::EndPlayerSessionOptionsAccountId (::Epic::OnlineServices::Metrics::EndPlayerSessionOptions::*)()>(&::Epic::OnlineServices::Metrics::EndPlayerSessionOptions::get_AccountId)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180503ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Metrics::EndPlayerSessionOptions>(),
                        {"get_AccountId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Metrics::EndPlayerSessionOptions.set_AccountId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Metrics::EndPlayerSessionOptions::*)(::Epic::OnlineServices::Metrics::EndPlayerSessionOptionsAccountId)>(&::Epic::OnlineServices::Metrics::EndPlayerSessionOptions::set_AccountId)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180503af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Metrics::EndPlayerSessionOptions>(),
                        {"set_AccountId", {}, {::i2c::type_of<::Epic::OnlineServices::Metrics::EndPlayerSessionOptionsAccountId>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Epic::OnlineServices::Metrics::EndPlayerSessionOptionsAccountId Epic::OnlineServices::Metrics::EndPlayerSessionOptions::get_AccountId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Metrics::EndPlayerSessionOptions>(),
                        {"get_AccountId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Metrics::EndPlayerSessionOptionsAccountId>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Metrics::EndPlayerSessionOptions::set_AccountId(::Epic::OnlineServices::Metrics::EndPlayerSessionOptionsAccountId  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Metrics::EndPlayerSessionOptions>(),
                        {"set_AccountId", {}, {::i2c::type_of<::Epic::OnlineServices::Metrics::EndPlayerSessionOptionsAccountId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_AccountId_k__BackingField", ty: "::Epic::OnlineServices::Metrics::EndPlayerSessionOptionsAccountId", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Metrics::EndPlayerSessionOptions::EndPlayerSessionOptions(::Epic::OnlineServices::Metrics::EndPlayerSessionOptionsAccountId  _AccountId_k__BackingField) noexcept  {
this->_AccountId_k__BackingField = _AccountId_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Metrics::EndPlayerSessionOptions::EndPlayerSessionOptions()   {
}
