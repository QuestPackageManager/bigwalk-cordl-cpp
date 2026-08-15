#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Connect/QueryProductUserIdMappingsOptionsInternal.hpp"
#include "Epic/OnlineServices/zzzz__ExternalAccountType_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Connect/zzzz__QueryProductUserIdMappingsOptionsInternal_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__QueryProductUserIdMappingsOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Connect::QueryProductUserIdMappingsOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Connect::QueryProductUserIdMappingsOptionsInternal::*)(::by_ref<::Epic::OnlineServices::Connect::QueryProductUserIdMappingsOptions>)>(&::Epic::OnlineServices::Connect::QueryProductUserIdMappingsOptionsInternal::Set)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18052b530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::QueryProductUserIdMappingsOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::QueryProductUserIdMappingsOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Connect::QueryProductUserIdMappingsOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Connect::QueryProductUserIdMappingsOptionsInternal::*)()>(&::Epic::OnlineServices::Connect::QueryProductUserIdMappingsOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804e7630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::QueryProductUserIdMappingsOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Connect::QueryProductUserIdMappingsOptionsInternal::Set(::by_ref<::Epic::OnlineServices::Connect::QueryProductUserIdMappingsOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::QueryProductUserIdMappingsOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::QueryProductUserIdMappingsOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Connect::QueryProductUserIdMappingsOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::QueryProductUserIdMappingsOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Connect::QueryProductUserIdMappingsOptions>"
constexpr  Epic::OnlineServices::Connect::QueryProductUserIdMappingsOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Connect::QueryProductUserIdMappingsOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Connect::QueryProductUserIdMappingsOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Connect::QueryProductUserIdMappingsOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Connect::QueryProductUserIdMappingsOptions>* Epic::OnlineServices::Connect::QueryProductUserIdMappingsOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Connect__QueryProductUserIdMappingsOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Connect::QueryProductUserIdMappingsOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::Connect::QueryProductUserIdMappingsOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::Connect::QueryProductUserIdMappingsOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AccountIdType_DEPRECATED", ty: "::Epic::OnlineServices::ExternalAccountType", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ProductUserIds", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ProductUserIdCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Connect::QueryProductUserIdMappingsOptionsInternal::QueryProductUserIdMappingsOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_LocalUserId, ::Epic::OnlineServices::ExternalAccountType  m_AccountIdType_DEPRECATED, ::System::IntPtr  m_ProductUserIds, uint32_t  m_ProductUserIdCount) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_LocalUserId = m_LocalUserId;
this->m_AccountIdType_DEPRECATED = m_AccountIdType_DEPRECATED;
this->m_ProductUserIds = m_ProductUserIds;
this->m_ProductUserIdCount = m_ProductUserIdCount;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Connect::QueryProductUserIdMappingsOptionsInternal::QueryProductUserIdMappingsOptionsInternal()   {
}
