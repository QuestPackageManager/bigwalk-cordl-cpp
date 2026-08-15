#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Ecom/GetLastRedeemEntitlementsResultCountOptions.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__RedeemEntitlementsResultListType_impl.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__GetLastRedeemEntitlementsResultCountOptions_def.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__RedeemEntitlementsResultListType_def.hpp"
#include "Epic/OnlineServices/zzzz__EpicAccountId_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::GetLastRedeemEntitlementsResultCountOptions.get_LocalUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::EpicAccountId* (::Epic::OnlineServices::Ecom::GetLastRedeemEntitlementsResultCountOptions::*)()>(&::Epic::OnlineServices::Ecom::GetLastRedeemEntitlementsResultCountOptions::get_LocalUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::GetLastRedeemEntitlementsResultCountOptions>(),
                        {"get_LocalUserId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::GetLastRedeemEntitlementsResultCountOptions.set_LocalUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Ecom::GetLastRedeemEntitlementsResultCountOptions::*)(::Epic::OnlineServices::EpicAccountId*)>(&::Epic::OnlineServices::Ecom::GetLastRedeemEntitlementsResultCountOptions::set_LocalUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::GetLastRedeemEntitlementsResultCountOptions>(),
                        {"set_LocalUserId", {}, {::i2c::type_of<::Epic::OnlineServices::EpicAccountId*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::GetLastRedeemEntitlementsResultCountOptions.get_ResultType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Ecom::RedeemEntitlementsResultListType (::Epic::OnlineServices::Ecom::GetLastRedeemEntitlementsResultCountOptions::*)()>(&::Epic::OnlineServices::Ecom::GetLastRedeemEntitlementsResultCountOptions::get_ResultType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f1880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::GetLastRedeemEntitlementsResultCountOptions>(),
                        {"get_ResultType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::GetLastRedeemEntitlementsResultCountOptions.set_ResultType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Ecom::GetLastRedeemEntitlementsResultCountOptions::*)(::Epic::OnlineServices::Ecom::RedeemEntitlementsResultListType)>(&::Epic::OnlineServices::Ecom::GetLastRedeemEntitlementsResultCountOptions::set_ResultType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bd900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::GetLastRedeemEntitlementsResultCountOptions>(),
                        {"set_ResultType", {}, {::i2c::type_of<::Epic::OnlineServices::Ecom::RedeemEntitlementsResultListType>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Epic::OnlineServices::EpicAccountId* Epic::OnlineServices::Ecom::GetLastRedeemEntitlementsResultCountOptions::get_LocalUserId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::GetLastRedeemEntitlementsResultCountOptions>(),
                        {"get_LocalUserId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::EpicAccountId*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Ecom::GetLastRedeemEntitlementsResultCountOptions::set_LocalUserId(::Epic::OnlineServices::EpicAccountId*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::GetLastRedeemEntitlementsResultCountOptions>(),
                        {"set_LocalUserId", {}, {::i2c::type_of<::Epic::OnlineServices::EpicAccountId*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::Ecom::RedeemEntitlementsResultListType Epic::OnlineServices::Ecom::GetLastRedeemEntitlementsResultCountOptions::get_ResultType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::GetLastRedeemEntitlementsResultCountOptions>(),
                        {"get_ResultType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Ecom::RedeemEntitlementsResultListType>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Ecom::GetLastRedeemEntitlementsResultCountOptions::set_ResultType(::Epic::OnlineServices::Ecom::RedeemEntitlementsResultListType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::GetLastRedeemEntitlementsResultCountOptions>(),
                        {"set_ResultType", {}, {::i2c::type_of<::Epic::OnlineServices::Ecom::RedeemEntitlementsResultListType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::EpicAccountId*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_ResultType_k__BackingField", ty: "::Epic::OnlineServices::Ecom::RedeemEntitlementsResultListType", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Ecom::GetLastRedeemEntitlementsResultCountOptions::GetLastRedeemEntitlementsResultCountOptions(::Epic::OnlineServices::EpicAccountId*  _LocalUserId_k__BackingField, ::Epic::OnlineServices::Ecom::RedeemEntitlementsResultListType  _ResultType_k__BackingField) noexcept  {
this->_LocalUserId_k__BackingField = _LocalUserId_k__BackingField;
this->_ResultType_k__BackingField = _ResultType_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Ecom::GetLastRedeemEntitlementsResultCountOptions::GetLastRedeemEntitlementsResultCountOptions()   {
}
