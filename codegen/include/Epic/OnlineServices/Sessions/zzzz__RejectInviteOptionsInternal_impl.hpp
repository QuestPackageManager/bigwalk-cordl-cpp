#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/RejectInviteOptionsInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__RejectInviteOptionsInternal_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__RejectInviteOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::RejectInviteOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::RejectInviteOptionsInternal::*)(::by_ref<::Epic::OnlineServices::Sessions::RejectInviteOptions>)>(&::Epic::OnlineServices::Sessions::RejectInviteOptionsInternal::Set)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1804e6900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::RejectInviteOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::RejectInviteOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::RejectInviteOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::RejectInviteOptionsInternal::*)()>(&::Epic::OnlineServices::Sessions::RejectInviteOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804e6820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::RejectInviteOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Sessions::RejectInviteOptionsInternal::Set(::by_ref<::Epic::OnlineServices::Sessions::RejectInviteOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::RejectInviteOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::RejectInviteOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Sessions::RejectInviteOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::RejectInviteOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::RejectInviteOptions>"
constexpr  Epic::OnlineServices::Sessions::RejectInviteOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::RejectInviteOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::RejectInviteOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::RejectInviteOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::RejectInviteOptions>* Epic::OnlineServices::Sessions::RejectInviteOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Sessions__RejectInviteOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::RejectInviteOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::Sessions::RejectInviteOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::Sessions::RejectInviteOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_InviteId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Sessions::RejectInviteOptionsInternal::RejectInviteOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_LocalUserId, ::System::IntPtr  m_InviteId) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_LocalUserId = m_LocalUserId;
this->m_InviteId = m_InviteId;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Sessions::RejectInviteOptionsInternal::RejectInviteOptionsInternal()   {
}
