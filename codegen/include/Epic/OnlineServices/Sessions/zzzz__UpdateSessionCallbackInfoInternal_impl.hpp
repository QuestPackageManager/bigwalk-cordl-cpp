#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/UpdateSessionCallbackInfoInternal.hpp"
#include "Epic/OnlineServices/zzzz__Result_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__UpdateSessionCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__UpdateSessionCallbackInfo_def.hpp"
#include "Epic/OnlineServices/zzzz__ICallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/zzzz__IGettable_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::UpdateSessionCallbackInfoInternal.get_ClientDataPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::Epic::OnlineServices::Sessions::UpdateSessionCallbackInfoInternal::*)()>(&::Epic::OnlineServices::Sessions::UpdateSessionCallbackInfoInternal::get_ClientDataPointer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803ed930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::UpdateSessionCallbackInfoInternal>(),
                        {"get_ClientDataPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::UpdateSessionCallbackInfoInternal.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::UpdateSessionCallbackInfoInternal::*)(::by_ref<::Epic::OnlineServices::Sessions::UpdateSessionCallbackInfo>)>(&::Epic::OnlineServices::Sessions::UpdateSessionCallbackInfoInternal::Get)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1804f6560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::UpdateSessionCallbackInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::UpdateSessionCallbackInfo>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::IntPtr Epic::OnlineServices::Sessions::UpdateSessionCallbackInfoInternal::get_ClientDataPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::UpdateSessionCallbackInfoInternal>(),
                        {"get_ClientDataPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Sessions::UpdateSessionCallbackInfoInternal::Get(::by_ref<::Epic::OnlineServices::Sessions::UpdateSessionCallbackInfo>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::UpdateSessionCallbackInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::UpdateSessionCallbackInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr  Epic::OnlineServices::Sessions::UpdateSessionCallbackInfoInternal::operator ::Epic::OnlineServices::ICallbackInfoInternal*()  {
return static_cast<::Epic::OnlineServices::ICallbackInfoInternal*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr ::Epic::OnlineServices::ICallbackInfoInternal* Epic::OnlineServices::Sessions::UpdateSessionCallbackInfoInternal::i___Epic__OnlineServices__ICallbackInfoInternal()  {
return static_cast<::Epic::OnlineServices::ICallbackInfoInternal*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Sessions::UpdateSessionCallbackInfo>"
constexpr  Epic::OnlineServices::Sessions::UpdateSessionCallbackInfoInternal::operator ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Sessions::UpdateSessionCallbackInfo>*()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Sessions::UpdateSessionCallbackInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Sessions::UpdateSessionCallbackInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Sessions::UpdateSessionCallbackInfo>* Epic::OnlineServices::Sessions::UpdateSessionCallbackInfoInternal::i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Sessions__UpdateSessionCallbackInfo_()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Sessions::UpdateSessionCallbackInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ResultCode", ty: "::Epic::OnlineServices::Result", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ClientData", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_SessionName", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_SessionId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Sessions::UpdateSessionCallbackInfoInternal::UpdateSessionCallbackInfoInternal(::Epic::OnlineServices::Result  m_ResultCode, ::System::IntPtr  m_ClientData, ::System::IntPtr  m_SessionName, ::System::IntPtr  m_SessionId) noexcept  {
this->m_ResultCode = m_ResultCode;
this->m_ClientData = m_ClientData;
this->m_SessionName = m_SessionName;
this->m_SessionId = m_SessionId;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Sessions::UpdateSessionCallbackInfoInternal::UpdateSessionCallbackInfoInternal()   {
}
