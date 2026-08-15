#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/CopySessionHandleByInviteIdOptionsInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__CopySessionHandleByInviteIdOptionsInternal_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__CopySessionHandleByInviteIdOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::CopySessionHandleByInviteIdOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::CopySessionHandleByInviteIdOptionsInternal::*)(::by_ref<::Epic::OnlineServices::Sessions::CopySessionHandleByInviteIdOptions>)>(&::Epic::OnlineServices::Sessions::CopySessionHandleByInviteIdOptionsInternal::Set)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1804d7340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::CopySessionHandleByInviteIdOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::CopySessionHandleByInviteIdOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::CopySessionHandleByInviteIdOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::CopySessionHandleByInviteIdOptionsInternal::*)()>(&::Epic::OnlineServices::Sessions::CopySessionHandleByInviteIdOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1804d7300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::CopySessionHandleByInviteIdOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Sessions::CopySessionHandleByInviteIdOptionsInternal::Set(::by_ref<::Epic::OnlineServices::Sessions::CopySessionHandleByInviteIdOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::CopySessionHandleByInviteIdOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::CopySessionHandleByInviteIdOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Sessions::CopySessionHandleByInviteIdOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::CopySessionHandleByInviteIdOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::CopySessionHandleByInviteIdOptions>"
constexpr  Epic::OnlineServices::Sessions::CopySessionHandleByInviteIdOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::CopySessionHandleByInviteIdOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::CopySessionHandleByInviteIdOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::CopySessionHandleByInviteIdOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::CopySessionHandleByInviteIdOptions>* Epic::OnlineServices::Sessions::CopySessionHandleByInviteIdOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Sessions__CopySessionHandleByInviteIdOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::CopySessionHandleByInviteIdOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::Sessions::CopySessionHandleByInviteIdOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::Sessions::CopySessionHandleByInviteIdOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_InviteId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Sessions::CopySessionHandleByInviteIdOptionsInternal::CopySessionHandleByInviteIdOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_InviteId) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_InviteId = m_InviteId;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Sessions::CopySessionHandleByInviteIdOptionsInternal::CopySessionHandleByInviteIdOptionsInternal()   {
}
