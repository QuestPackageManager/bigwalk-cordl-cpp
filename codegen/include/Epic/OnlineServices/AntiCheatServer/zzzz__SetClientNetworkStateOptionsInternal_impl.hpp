#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatServer/SetClientNetworkStateOptionsInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/AntiCheatServer/zzzz__SetClientNetworkStateOptionsInternal_def.hpp"
#include "Epic/OnlineServices/AntiCheatServer/zzzz__SetClientNetworkStateOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatServer::SetClientNetworkStateOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatServer::SetClientNetworkStateOptionsInternal::*)(::by_ref<::Epic::OnlineServices::AntiCheatServer::SetClientNetworkStateOptions>)>(&::Epic::OnlineServices::AntiCheatServer::SetClientNetworkStateOptionsInternal::Set)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18052bc60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::SetClientNetworkStateOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatServer::SetClientNetworkStateOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatServer::SetClientNetworkStateOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatServer::SetClientNetworkStateOptionsInternal::*)()>(&::Epic::OnlineServices::AntiCheatServer::SetClientNetworkStateOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::SetClientNetworkStateOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::AntiCheatServer::SetClientNetworkStateOptionsInternal::Set(::by_ref<::Epic::OnlineServices::AntiCheatServer::SetClientNetworkStateOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::SetClientNetworkStateOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatServer::SetClientNetworkStateOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::AntiCheatServer::SetClientNetworkStateOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::SetClientNetworkStateOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatServer::SetClientNetworkStateOptions>"
constexpr  Epic::OnlineServices::AntiCheatServer::SetClientNetworkStateOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatServer::SetClientNetworkStateOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatServer::SetClientNetworkStateOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatServer::SetClientNetworkStateOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatServer::SetClientNetworkStateOptions>* Epic::OnlineServices::AntiCheatServer::SetClientNetworkStateOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__AntiCheatServer__SetClientNetworkStateOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatServer::SetClientNetworkStateOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::AntiCheatServer::SetClientNetworkStateOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::AntiCheatServer::SetClientNetworkStateOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ClientHandle", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_IsNetworkActive", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::AntiCheatServer::SetClientNetworkStateOptionsInternal::SetClientNetworkStateOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_ClientHandle, int32_t  m_IsNetworkActive) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_ClientHandle = m_ClientHandle;
this->m_IsNetworkActive = m_IsNetworkActive;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::AntiCheatServer::SetClientNetworkStateOptionsInternal::SetClientNetworkStateOptionsInternal()   {
}
