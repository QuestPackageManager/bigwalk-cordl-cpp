#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Ecom/Transaction.hpp"
#include "Epic/OnlineServices/zzzz__Handle_impl.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__Transaction_def.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__Entitlement_def.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__TransactionCopyEntitlementByIndexOptions_def.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__TransactionGetEntitlementsCountOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include "Epic/OnlineServices/zzzz__Utf8String_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::Transaction._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Ecom::Transaction::*)()>(&::Epic::OnlineServices::Ecom::Transaction::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::Transaction*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::Transaction._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Ecom::Transaction::*)(::System::IntPtr)>(&::Epic::OnlineServices::Ecom::Transaction::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804f0510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::Transaction*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::Transaction.CopyEntitlementByIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Ecom::Transaction::*)(::by_ref<::Epic::OnlineServices::Ecom::TransactionCopyEntitlementByIndexOptions>, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Ecom::Entitlement>>)>(&::Epic::OnlineServices::Ecom::Transaction::CopyEntitlementByIndex)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18051e030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::Transaction*>(),
                        {"CopyEntitlementByIndex", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::TransactionCopyEntitlementByIndexOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::Ecom::Entitlement>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::Transaction.GetEntitlementsCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Epic::OnlineServices::Ecom::Transaction::*)(::by_ref<::Epic::OnlineServices::Ecom::TransactionGetEntitlementsCountOptions>)>(&::Epic::OnlineServices::Ecom::Transaction::GetEntitlementsCount)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18051e0b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::Transaction*>(),
                        {"GetEntitlementsCount", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::TransactionGetEntitlementsCountOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::Transaction.GetTransactionId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Ecom::Transaction::*)(::by_ref<::Epic::OnlineServices::Utf8String*>)>(&::Epic::OnlineServices::Ecom::Transaction::GetTransactionId)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18051e0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::Transaction*>(),
                        {"GetTransactionId", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Utf8String*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::Transaction.Release
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Ecom::Transaction::*)()>(&::Epic::OnlineServices::Ecom::Transaction::Release)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18051e170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::Transaction*>(),
                        {"Release", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Ecom::Transaction::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::Transaction*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Epic::OnlineServices::Ecom::Transaction::_ctor(::System::IntPtr  innerHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::Transaction*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, innerHandle);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Ecom::Transaction::CopyEntitlementByIndex(::by_ref<::Epic::OnlineServices::Ecom::TransactionCopyEntitlementByIndexOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Ecom::Entitlement>>  outEntitlement)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::Transaction*>(),
                        {"CopyEntitlementByIndex", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::TransactionCopyEntitlementByIndexOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::Ecom::Entitlement>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, outEntitlement);
}
inline uint32_t Epic::OnlineServices::Ecom::Transaction::GetEntitlementsCount(::by_ref<::Epic::OnlineServices::Ecom::TransactionGetEntitlementsCountOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::Transaction*>(),
                        {"GetEntitlementsCount", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::TransactionGetEntitlementsCountOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, options);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Ecom::Transaction::GetTransactionId(::by_ref<::Epic::OnlineServices::Utf8String*>  outBuffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::Transaction*>(),
                        {"GetTransactionId", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Utf8String*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, outBuffer);
}
inline void Epic::OnlineServices::Ecom::Transaction::Release()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::Transaction*>(),
                        {"Release", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Epic::OnlineServices::Ecom::Transaction* Epic::OnlineServices::Ecom::Transaction::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::Ecom::Transaction*>());
}
inline ::Epic::OnlineServices::Ecom::Transaction* Epic::OnlineServices::Ecom::Transaction::New_ctor(::System::IntPtr  innerHandle)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::Ecom::Transaction*>(innerHandle));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Ecom::Transaction::Transaction()   {
}
