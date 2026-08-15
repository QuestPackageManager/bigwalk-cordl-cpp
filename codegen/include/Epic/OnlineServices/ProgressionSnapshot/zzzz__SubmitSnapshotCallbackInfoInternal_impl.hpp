#pragma once
// IWYU pragma private; include "Epic/OnlineServices/ProgressionSnapshot/SubmitSnapshotCallbackInfoInternal.hpp"
#include "Epic/OnlineServices/zzzz__Result_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/ProgressionSnapshot/zzzz__SubmitSnapshotCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/ProgressionSnapshot/zzzz__SubmitSnapshotCallbackInfo_def.hpp"
#include "Epic/OnlineServices/zzzz__ICallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/zzzz__IGettable_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotCallbackInfoInternal.get_ClientDataPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotCallbackInfoInternal::*)()>(&::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotCallbackInfoInternal::get_ClientDataPointer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803ed930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotCallbackInfoInternal>(),
                        {"get_ClientDataPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotCallbackInfoInternal.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotCallbackInfoInternal::*)(::by_ref<::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotCallbackInfo>)>(&::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotCallbackInfoInternal::Get)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x180502df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotCallbackInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotCallbackInfo>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::IntPtr Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotCallbackInfoInternal::get_ClientDataPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotCallbackInfoInternal>(),
                        {"get_ClientDataPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(*this, ___internal_method);
}
inline void Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotCallbackInfoInternal::Get(::by_ref<::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotCallbackInfo>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotCallbackInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotCallbackInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr  Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotCallbackInfoInternal::operator ::Epic::OnlineServices::ICallbackInfoInternal*()  {
return static_cast<::Epic::OnlineServices::ICallbackInfoInternal*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr ::Epic::OnlineServices::ICallbackInfoInternal* Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotCallbackInfoInternal::i___Epic__OnlineServices__ICallbackInfoInternal()  {
return static_cast<::Epic::OnlineServices::ICallbackInfoInternal*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotCallbackInfo>"
constexpr  Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotCallbackInfoInternal::operator ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotCallbackInfo>*()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotCallbackInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotCallbackInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotCallbackInfo>* Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotCallbackInfoInternal::i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__ProgressionSnapshot__SubmitSnapshotCallbackInfo_()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotCallbackInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ResultCode", ty: "::Epic::OnlineServices::Result", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_SnapshotId", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ClientData", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotCallbackInfoInternal::SubmitSnapshotCallbackInfoInternal(::Epic::OnlineServices::Result  m_ResultCode, uint32_t  m_SnapshotId, ::System::IntPtr  m_ClientData) noexcept  {
this->m_ResultCode = m_ResultCode;
this->m_SnapshotId = m_SnapshotId;
this->m_ClientData = m_ClientData;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotCallbackInfoInternal::SubmitSnapshotCallbackInfoInternal()   {
}
