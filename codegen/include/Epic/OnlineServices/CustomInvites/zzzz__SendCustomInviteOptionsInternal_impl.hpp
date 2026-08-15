#pragma once
// IWYU pragma private; include "Epic/OnlineServices/CustomInvites/SendCustomInviteOptionsInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/CustomInvites/zzzz__SendCustomInviteOptionsInternal_def.hpp"
#include "Epic/OnlineServices/CustomInvites/zzzz__SendCustomInviteOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::SendCustomInviteOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::CustomInvites::SendCustomInviteOptionsInternal::*)(::by_ref<::Epic::OnlineServices::CustomInvites::SendCustomInviteOptions>)>(&::Epic::OnlineServices::CustomInvites::SendCustomInviteOptionsInternal::Set)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x18052bb20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::SendCustomInviteOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::CustomInvites::SendCustomInviteOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::SendCustomInviteOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::CustomInvites::SendCustomInviteOptionsInternal::*)()>(&::Epic::OnlineServices::CustomInvites::SendCustomInviteOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804e6820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::SendCustomInviteOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::CustomInvites::SendCustomInviteOptionsInternal::Set(::by_ref<::Epic::OnlineServices::CustomInvites::SendCustomInviteOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::SendCustomInviteOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::CustomInvites::SendCustomInviteOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::CustomInvites::SendCustomInviteOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::SendCustomInviteOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::CustomInvites::SendCustomInviteOptions>"
constexpr  Epic::OnlineServices::CustomInvites::SendCustomInviteOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::CustomInvites::SendCustomInviteOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::CustomInvites::SendCustomInviteOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::CustomInvites::SendCustomInviteOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::CustomInvites::SendCustomInviteOptions>* Epic::OnlineServices::CustomInvites::SendCustomInviteOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__CustomInvites__SendCustomInviteOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::CustomInvites::SendCustomInviteOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::CustomInvites::SendCustomInviteOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::CustomInvites::SendCustomInviteOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TargetUserIds", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TargetUserIdsCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::CustomInvites::SendCustomInviteOptionsInternal::SendCustomInviteOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_LocalUserId, ::System::IntPtr  m_TargetUserIds, uint32_t  m_TargetUserIdsCount) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_LocalUserId = m_LocalUserId;
this->m_TargetUserIds = m_TargetUserIds;
this->m_TargetUserIdsCount = m_TargetUserIdsCount;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::CustomInvites::SendCustomInviteOptionsInternal::SendCustomInviteOptionsInternal()   {
}
