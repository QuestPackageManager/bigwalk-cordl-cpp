#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/GetInviteIdByIndexOptionsInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__GetInviteIdByIndexOptionsInternal_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__GetInviteIdByIndexOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::GetInviteIdByIndexOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::GetInviteIdByIndexOptionsInternal::*)(::by_ref<::Epic::OnlineServices::Lobby::GetInviteIdByIndexOptions>)>(&::Epic::OnlineServices::Lobby::GetInviteIdByIndexOptionsInternal::Set)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1804e72b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::GetInviteIdByIndexOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::GetInviteIdByIndexOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::GetInviteIdByIndexOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::GetInviteIdByIndexOptionsInternal::*)()>(&::Epic::OnlineServices::Lobby::GetInviteIdByIndexOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804e6d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::GetInviteIdByIndexOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Lobby::GetInviteIdByIndexOptionsInternal::Set(::by_ref<::Epic::OnlineServices::Lobby::GetInviteIdByIndexOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::GetInviteIdByIndexOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::GetInviteIdByIndexOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Lobby::GetInviteIdByIndexOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::GetInviteIdByIndexOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::GetInviteIdByIndexOptions>"
constexpr  Epic::OnlineServices::Lobby::GetInviteIdByIndexOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::GetInviteIdByIndexOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::GetInviteIdByIndexOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::GetInviteIdByIndexOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::GetInviteIdByIndexOptions>* Epic::OnlineServices::Lobby::GetInviteIdByIndexOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Lobby__GetInviteIdByIndexOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::GetInviteIdByIndexOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::Lobby::GetInviteIdByIndexOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::Lobby::GetInviteIdByIndexOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Index", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Lobby::GetInviteIdByIndexOptionsInternal::GetInviteIdByIndexOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_LocalUserId, uint32_t  m_Index) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_LocalUserId = m_LocalUserId;
this->m_Index = m_Index;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Lobby::GetInviteIdByIndexOptionsInternal::GetInviteIdByIndexOptionsInternal()   {
}
