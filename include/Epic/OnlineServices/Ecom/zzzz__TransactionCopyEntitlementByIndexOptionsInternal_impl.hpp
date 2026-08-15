#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Ecom/TransactionCopyEntitlementByIndexOptionsInternal.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__TransactionCopyEntitlementByIndexOptionsInternal_def.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__TransactionCopyEntitlementByIndexOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::TransactionCopyEntitlementByIndexOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Ecom::TransactionCopyEntitlementByIndexOptionsInternal::*)(::by_ref<::Epic::OnlineServices::Ecom::TransactionCopyEntitlementByIndexOptions>)>(&::Epic::OnlineServices::Ecom::TransactionCopyEntitlementByIndexOptionsInternal::Set)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804bdbe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::TransactionCopyEntitlementByIndexOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::TransactionCopyEntitlementByIndexOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::TransactionCopyEntitlementByIndexOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Ecom::TransactionCopyEntitlementByIndexOptionsInternal::*)()>(&::Epic::OnlineServices::Ecom::TransactionCopyEntitlementByIndexOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::TransactionCopyEntitlementByIndexOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Ecom::TransactionCopyEntitlementByIndexOptionsInternal::Set(::by_ref<::Epic::OnlineServices::Ecom::TransactionCopyEntitlementByIndexOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::TransactionCopyEntitlementByIndexOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::TransactionCopyEntitlementByIndexOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Ecom::TransactionCopyEntitlementByIndexOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::TransactionCopyEntitlementByIndexOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Ecom::TransactionCopyEntitlementByIndexOptions>"
constexpr  Epic::OnlineServices::Ecom::TransactionCopyEntitlementByIndexOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Ecom::TransactionCopyEntitlementByIndexOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Ecom::TransactionCopyEntitlementByIndexOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Ecom::TransactionCopyEntitlementByIndexOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Ecom::TransactionCopyEntitlementByIndexOptions>* Epic::OnlineServices::Ecom::TransactionCopyEntitlementByIndexOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Ecom__TransactionCopyEntitlementByIndexOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Ecom::TransactionCopyEntitlementByIndexOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::Ecom::TransactionCopyEntitlementByIndexOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::Ecom::TransactionCopyEntitlementByIndexOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_EntitlementIndex", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Ecom::TransactionCopyEntitlementByIndexOptionsInternal::TransactionCopyEntitlementByIndexOptionsInternal(int32_t  m_ApiVersion, uint32_t  m_EntitlementIndex) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_EntitlementIndex = m_EntitlementIndex;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Ecom::TransactionCopyEntitlementByIndexOptionsInternal::TransactionCopyEntitlementByIndexOptionsInternal()   {
}
