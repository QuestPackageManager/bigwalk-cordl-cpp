#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatClient/AddExternalIntegrityCatalogOptionsInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/AntiCheatClient/zzzz__AddExternalIntegrityCatalogOptionsInternal_def.hpp"
#include "Epic/OnlineServices/AntiCheatClient/zzzz__AddExternalIntegrityCatalogOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::AddExternalIntegrityCatalogOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatClient::AddExternalIntegrityCatalogOptionsInternal::*)(::by_ref<::Epic::OnlineServices::AntiCheatClient::AddExternalIntegrityCatalogOptions>)>(&::Epic::OnlineServices::AntiCheatClient::AddExternalIntegrityCatalogOptionsInternal::Set)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1804f0f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::AddExternalIntegrityCatalogOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatClient::AddExternalIntegrityCatalogOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::AddExternalIntegrityCatalogOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatClient::AddExternalIntegrityCatalogOptionsInternal::*)()>(&::Epic::OnlineServices::AntiCheatClient::AddExternalIntegrityCatalogOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804e6d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::AddExternalIntegrityCatalogOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::AntiCheatClient::AddExternalIntegrityCatalogOptionsInternal::Set(::by_ref<::Epic::OnlineServices::AntiCheatClient::AddExternalIntegrityCatalogOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::AddExternalIntegrityCatalogOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatClient::AddExternalIntegrityCatalogOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::AntiCheatClient::AddExternalIntegrityCatalogOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::AddExternalIntegrityCatalogOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatClient::AddExternalIntegrityCatalogOptions>"
constexpr  Epic::OnlineServices::AntiCheatClient::AddExternalIntegrityCatalogOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatClient::AddExternalIntegrityCatalogOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatClient::AddExternalIntegrityCatalogOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatClient::AddExternalIntegrityCatalogOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatClient::AddExternalIntegrityCatalogOptions>* Epic::OnlineServices::AntiCheatClient::AddExternalIntegrityCatalogOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__AntiCheatClient__AddExternalIntegrityCatalogOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatClient::AddExternalIntegrityCatalogOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::AntiCheatClient::AddExternalIntegrityCatalogOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::AntiCheatClient::AddExternalIntegrityCatalogOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_PathToBinFile", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::AntiCheatClient::AddExternalIntegrityCatalogOptionsInternal::AddExternalIntegrityCatalogOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_PathToBinFile) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_PathToBinFile = m_PathToBinFile;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::AntiCheatClient::AddExternalIntegrityCatalogOptionsInternal::AddExternalIntegrityCatalogOptionsInternal()   {
}
