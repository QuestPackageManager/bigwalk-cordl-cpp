#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/LobbyModificationSetBucketIdOptionsInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyModificationSetBucketIdOptionsInternal_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyModificationSetBucketIdOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::LobbyModificationSetBucketIdOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::LobbyModificationSetBucketIdOptionsInternal::*)(::by_ref<::Epic::OnlineServices::Lobby::LobbyModificationSetBucketIdOptions>)>(&::Epic::OnlineServices::Lobby::LobbyModificationSetBucketIdOptionsInternal::Set)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1804f0f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyModificationSetBucketIdOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LobbyModificationSetBucketIdOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::LobbyModificationSetBucketIdOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::LobbyModificationSetBucketIdOptionsInternal::*)()>(&::Epic::OnlineServices::Lobby::LobbyModificationSetBucketIdOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804e6d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyModificationSetBucketIdOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Lobby::LobbyModificationSetBucketIdOptionsInternal::Set(::by_ref<::Epic::OnlineServices::Lobby::LobbyModificationSetBucketIdOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyModificationSetBucketIdOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LobbyModificationSetBucketIdOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Lobby::LobbyModificationSetBucketIdOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyModificationSetBucketIdOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::LobbyModificationSetBucketIdOptions>"
constexpr  Epic::OnlineServices::Lobby::LobbyModificationSetBucketIdOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::LobbyModificationSetBucketIdOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::LobbyModificationSetBucketIdOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::LobbyModificationSetBucketIdOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::LobbyModificationSetBucketIdOptions>* Epic::OnlineServices::Lobby::LobbyModificationSetBucketIdOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Lobby__LobbyModificationSetBucketIdOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::LobbyModificationSetBucketIdOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::Lobby::LobbyModificationSetBucketIdOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::Lobby::LobbyModificationSetBucketIdOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_BucketId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Lobby::LobbyModificationSetBucketIdOptionsInternal::LobbyModificationSetBucketIdOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_BucketId) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_BucketId = m_BucketId;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Lobby::LobbyModificationSetBucketIdOptionsInternal::LobbyModificationSetBucketIdOptionsInternal()   {
}
