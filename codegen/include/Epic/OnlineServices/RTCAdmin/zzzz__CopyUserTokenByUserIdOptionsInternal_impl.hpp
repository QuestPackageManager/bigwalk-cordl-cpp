#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAdmin/CopyUserTokenByUserIdOptionsInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/RTCAdmin/zzzz__CopyUserTokenByUserIdOptionsInternal_def.hpp"
#include "Epic/OnlineServices/RTCAdmin/zzzz__CopyUserTokenByUserIdOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::RTCAdmin::CopyUserTokenByUserIdOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTCAdmin::CopyUserTokenByUserIdOptionsInternal::*)(::by_ref<::Epic::OnlineServices::RTCAdmin::CopyUserTokenByUserIdOptions>)>(&::Epic::OnlineServices::RTCAdmin::CopyUserTokenByUserIdOptionsInternal::Set)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1804f6ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAdmin::CopyUserTokenByUserIdOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAdmin::CopyUserTokenByUserIdOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAdmin::CopyUserTokenByUserIdOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTCAdmin::CopyUserTokenByUserIdOptionsInternal::*)()>(&::Epic::OnlineServices::RTCAdmin::CopyUserTokenByUserIdOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804e6d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAdmin::CopyUserTokenByUserIdOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::RTCAdmin::CopyUserTokenByUserIdOptionsInternal::Set(::by_ref<::Epic::OnlineServices::RTCAdmin::CopyUserTokenByUserIdOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAdmin::CopyUserTokenByUserIdOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAdmin::CopyUserTokenByUserIdOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::RTCAdmin::CopyUserTokenByUserIdOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAdmin::CopyUserTokenByUserIdOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAdmin::CopyUserTokenByUserIdOptions>"
constexpr  Epic::OnlineServices::RTCAdmin::CopyUserTokenByUserIdOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAdmin::CopyUserTokenByUserIdOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAdmin::CopyUserTokenByUserIdOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAdmin::CopyUserTokenByUserIdOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAdmin::CopyUserTokenByUserIdOptions>* Epic::OnlineServices::RTCAdmin::CopyUserTokenByUserIdOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__RTCAdmin__CopyUserTokenByUserIdOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAdmin::CopyUserTokenByUserIdOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::RTCAdmin::CopyUserTokenByUserIdOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::RTCAdmin::CopyUserTokenByUserIdOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TargetUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_QueryId", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::RTCAdmin::CopyUserTokenByUserIdOptionsInternal::CopyUserTokenByUserIdOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_TargetUserId, uint32_t  m_QueryId) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_TargetUserId = m_TargetUserId;
this->m_QueryId = m_QueryId;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::RTCAdmin::CopyUserTokenByUserIdOptionsInternal::CopyUserTokenByUserIdOptionsInternal()   {
}
