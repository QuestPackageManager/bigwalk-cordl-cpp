#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Ecom/TransactionCopyEntitlementByIndexOptions.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__TransactionCopyEntitlementByIndexOptions_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::TransactionCopyEntitlementByIndexOptions.get_EntitlementIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Epic::OnlineServices::Ecom::TransactionCopyEntitlementByIndexOptions::*)()>(&::Epic::OnlineServices::Ecom::TransactionCopyEntitlementByIndexOptions::get_EntitlementIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803474c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::TransactionCopyEntitlementByIndexOptions>(),
                        {"get_EntitlementIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::TransactionCopyEntitlementByIndexOptions.set_EntitlementIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Ecom::TransactionCopyEntitlementByIndexOptions::*)(uint32_t)>(&::Epic::OnlineServices::Ecom::TransactionCopyEntitlementByIndexOptions::set_EntitlementIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180379030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::TransactionCopyEntitlementByIndexOptions>(),
                        {"set_EntitlementIndex", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline uint32_t Epic::OnlineServices::Ecom::TransactionCopyEntitlementByIndexOptions::get_EntitlementIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::TransactionCopyEntitlementByIndexOptions>(),
                        {"get_EntitlementIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Ecom::TransactionCopyEntitlementByIndexOptions::set_EntitlementIndex(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::TransactionCopyEntitlementByIndexOptions>(),
                        {"set_EntitlementIndex", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_EntitlementIndex_k__BackingField", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Ecom::TransactionCopyEntitlementByIndexOptions::TransactionCopyEntitlementByIndexOptions(uint32_t  _EntitlementIndex_k__BackingField) noexcept  {
this->_EntitlementIndex_k__BackingField = _EntitlementIndex_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Ecom::TransactionCopyEntitlementByIndexOptions::TransactionCopyEntitlementByIndexOptions()   {
}
