#pragma once
// IWYU pragma private; include "Epic/OnlineServices/P2P/CloseConnectionsOptionsInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/P2P/zzzz__CloseConnectionsOptionsInternal_def.hpp"
#include "Epic/OnlineServices/P2P/zzzz__CloseConnectionsOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::P2P::CloseConnectionsOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::P2P::CloseConnectionsOptionsInternal::*)(::by_ref<::Epic::OnlineServices::P2P::CloseConnectionsOptions>)>(&::Epic::OnlineServices::P2P::CloseConnectionsOptionsInternal::Set)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x18052ddb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::CloseConnectionsOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::CloseConnectionsOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::CloseConnectionsOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::P2P::CloseConnectionsOptionsInternal::*)()>(&::Epic::OnlineServices::P2P::CloseConnectionsOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804e6820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::CloseConnectionsOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::P2P::CloseConnectionsOptionsInternal::Set(::by_ref<::Epic::OnlineServices::P2P::CloseConnectionsOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::CloseConnectionsOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::CloseConnectionsOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::P2P::CloseConnectionsOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::CloseConnectionsOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::P2P::CloseConnectionsOptions>"
constexpr  Epic::OnlineServices::P2P::CloseConnectionsOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::P2P::CloseConnectionsOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::P2P::CloseConnectionsOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::P2P::CloseConnectionsOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::P2P::CloseConnectionsOptions>* Epic::OnlineServices::P2P::CloseConnectionsOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__P2P__CloseConnectionsOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::P2P::CloseConnectionsOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::P2P::CloseConnectionsOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::P2P::CloseConnectionsOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_SocketId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::P2P::CloseConnectionsOptionsInternal::CloseConnectionsOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_LocalUserId, ::System::IntPtr  m_SocketId) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_LocalUserId = m_LocalUserId;
this->m_SocketId = m_SocketId;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::P2P::CloseConnectionsOptionsInternal::CloseConnectionsOptionsInternal()   {
}
