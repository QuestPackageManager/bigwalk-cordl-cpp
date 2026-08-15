#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Ecom/CopyLastRedeemedEntitlementByIndexOptions.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__CopyLastRedeemedEntitlementByIndexOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__EpicAccountId_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::CopyLastRedeemedEntitlementByIndexOptions.get_LocalUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::EpicAccountId* (::Epic::OnlineServices::Ecom::CopyLastRedeemedEntitlementByIndexOptions::*)()>(&::Epic::OnlineServices::Ecom::CopyLastRedeemedEntitlementByIndexOptions::get_LocalUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CopyLastRedeemedEntitlementByIndexOptions>(),
                        {"get_LocalUserId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::CopyLastRedeemedEntitlementByIndexOptions.set_LocalUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Ecom::CopyLastRedeemedEntitlementByIndexOptions::*)(::Epic::OnlineServices::EpicAccountId*)>(&::Epic::OnlineServices::Ecom::CopyLastRedeemedEntitlementByIndexOptions::set_LocalUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CopyLastRedeemedEntitlementByIndexOptions>(),
                        {"set_LocalUserId", {}, {::i2c::type_of<::Epic::OnlineServices::EpicAccountId*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::CopyLastRedeemedEntitlementByIndexOptions.get_RedeemedEntitlementIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Epic::OnlineServices::Ecom::CopyLastRedeemedEntitlementByIndexOptions::*)()>(&::Epic::OnlineServices::Ecom::CopyLastRedeemedEntitlementByIndexOptions::get_RedeemedEntitlementIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f1880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CopyLastRedeemedEntitlementByIndexOptions>(),
                        {"get_RedeemedEntitlementIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::CopyLastRedeemedEntitlementByIndexOptions.set_RedeemedEntitlementIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Ecom::CopyLastRedeemedEntitlementByIndexOptions::*)(uint32_t)>(&::Epic::OnlineServices::Ecom::CopyLastRedeemedEntitlementByIndexOptions::set_RedeemedEntitlementIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bd900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CopyLastRedeemedEntitlementByIndexOptions>(),
                        {"set_RedeemedEntitlementIndex", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Epic::OnlineServices::EpicAccountId* Epic::OnlineServices::Ecom::CopyLastRedeemedEntitlementByIndexOptions::get_LocalUserId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CopyLastRedeemedEntitlementByIndexOptions>(),
                        {"get_LocalUserId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::EpicAccountId*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Ecom::CopyLastRedeemedEntitlementByIndexOptions::set_LocalUserId(::Epic::OnlineServices::EpicAccountId*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CopyLastRedeemedEntitlementByIndexOptions>(),
                        {"set_LocalUserId", {}, {::i2c::type_of<::Epic::OnlineServices::EpicAccountId*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline uint32_t Epic::OnlineServices::Ecom::CopyLastRedeemedEntitlementByIndexOptions::get_RedeemedEntitlementIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CopyLastRedeemedEntitlementByIndexOptions>(),
                        {"get_RedeemedEntitlementIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Ecom::CopyLastRedeemedEntitlementByIndexOptions::set_RedeemedEntitlementIndex(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CopyLastRedeemedEntitlementByIndexOptions>(),
                        {"set_RedeemedEntitlementIndex", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::EpicAccountId*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_RedeemedEntitlementIndex_k__BackingField", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Ecom::CopyLastRedeemedEntitlementByIndexOptions::CopyLastRedeemedEntitlementByIndexOptions(::Epic::OnlineServices::EpicAccountId*  _LocalUserId_k__BackingField, uint32_t  _RedeemedEntitlementIndex_k__BackingField) noexcept  {
this->_LocalUserId_k__BackingField = _LocalUserId_k__BackingField;
this->_RedeemedEntitlementIndex_k__BackingField = _RedeemedEntitlementIndex_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Ecom::CopyLastRedeemedEntitlementByIndexOptions::CopyLastRedeemedEntitlementByIndexOptions()   {
}
