#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Ecom/CopyLastRedeemEntitlementsResultByIndexOptionsInternal.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__RedeemEntitlementsResultListType_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__CopyLastRedeemEntitlementsResultByIndexOptionsInternal_def.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__CopyLastRedeemEntitlementsResultByIndexOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::CopyLastRedeemEntitlementsResultByIndexOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Ecom::CopyLastRedeemEntitlementsResultByIndexOptionsInternal::*)(::by_ref<::Epic::OnlineServices::Ecom::CopyLastRedeemEntitlementsResultByIndexOptions>)>(&::Epic::OnlineServices::Ecom::CopyLastRedeemEntitlementsResultByIndexOptionsInternal::Set)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x180512060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CopyLastRedeemEntitlementsResultByIndexOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::CopyLastRedeemEntitlementsResultByIndexOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::CopyLastRedeemEntitlementsResultByIndexOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Ecom::CopyLastRedeemEntitlementsResultByIndexOptionsInternal::*)()>(&::Epic::OnlineServices::Ecom::CopyLastRedeemEntitlementsResultByIndexOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804e6d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CopyLastRedeemEntitlementsResultByIndexOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Ecom::CopyLastRedeemEntitlementsResultByIndexOptionsInternal::Set(::by_ref<::Epic::OnlineServices::Ecom::CopyLastRedeemEntitlementsResultByIndexOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CopyLastRedeemEntitlementsResultByIndexOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::CopyLastRedeemEntitlementsResultByIndexOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Ecom::CopyLastRedeemEntitlementsResultByIndexOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CopyLastRedeemEntitlementsResultByIndexOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Ecom::CopyLastRedeemEntitlementsResultByIndexOptions>"
constexpr  Epic::OnlineServices::Ecom::CopyLastRedeemEntitlementsResultByIndexOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Ecom::CopyLastRedeemEntitlementsResultByIndexOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Ecom::CopyLastRedeemEntitlementsResultByIndexOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Ecom::CopyLastRedeemEntitlementsResultByIndexOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Ecom::CopyLastRedeemEntitlementsResultByIndexOptions>* Epic::OnlineServices::Ecom::CopyLastRedeemEntitlementsResultByIndexOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Ecom__CopyLastRedeemEntitlementsResultByIndexOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Ecom::CopyLastRedeemEntitlementsResultByIndexOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::Ecom::CopyLastRedeemEntitlementsResultByIndexOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::Ecom::CopyLastRedeemEntitlementsResultByIndexOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_EntitlementIndex", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ResultType", ty: "::Epic::OnlineServices::Ecom::RedeemEntitlementsResultListType", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Ecom::CopyLastRedeemEntitlementsResultByIndexOptionsInternal::CopyLastRedeemEntitlementsResultByIndexOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_LocalUserId, uint32_t  m_EntitlementIndex, ::Epic::OnlineServices::Ecom::RedeemEntitlementsResultListType  m_ResultType) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_LocalUserId = m_LocalUserId;
this->m_EntitlementIndex = m_EntitlementIndex;
this->m_ResultType = m_ResultType;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Ecom::CopyLastRedeemEntitlementsResultByIndexOptionsInternal::CopyLastRedeemEntitlementsResultByIndexOptionsInternal()   {
}
