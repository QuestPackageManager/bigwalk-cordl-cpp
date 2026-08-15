#pragma once
// IWYU pragma private; include "Epic/OnlineServices/TitleStorage/FileTransferProgressCallbackInfoInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/TitleStorage/zzzz__FileTransferProgressCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/TitleStorage/zzzz__FileTransferProgressCallbackInfo_def.hpp"
#include "Epic/OnlineServices/zzzz__ICallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/zzzz__IGettable_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::TitleStorage::FileTransferProgressCallbackInfoInternal.get_ClientDataPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::Epic::OnlineServices::TitleStorage::FileTransferProgressCallbackInfoInternal::*)()>(&::Epic::OnlineServices::TitleStorage::FileTransferProgressCallbackInfoInternal::get_ClientDataPointer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::TitleStorage::FileTransferProgressCallbackInfoInternal>(),
                        {"get_ClientDataPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::TitleStorage::FileTransferProgressCallbackInfoInternal.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::TitleStorage::FileTransferProgressCallbackInfoInternal::*)(::by_ref<::Epic::OnlineServices::TitleStorage::FileTransferProgressCallbackInfo>)>(&::Epic::OnlineServices::TitleStorage::FileTransferProgressCallbackInfoInternal::Get)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x1804d8d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::TitleStorage::FileTransferProgressCallbackInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::TitleStorage::FileTransferProgressCallbackInfo>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::IntPtr Epic::OnlineServices::TitleStorage::FileTransferProgressCallbackInfoInternal::get_ClientDataPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::TitleStorage::FileTransferProgressCallbackInfoInternal>(),
                        {"get_ClientDataPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(*this, ___internal_method);
}
inline void Epic::OnlineServices::TitleStorage::FileTransferProgressCallbackInfoInternal::Get(::by_ref<::Epic::OnlineServices::TitleStorage::FileTransferProgressCallbackInfo>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::TitleStorage::FileTransferProgressCallbackInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::TitleStorage::FileTransferProgressCallbackInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr  Epic::OnlineServices::TitleStorage::FileTransferProgressCallbackInfoInternal::operator ::Epic::OnlineServices::ICallbackInfoInternal*()  {
return static_cast<::Epic::OnlineServices::ICallbackInfoInternal*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr ::Epic::OnlineServices::ICallbackInfoInternal* Epic::OnlineServices::TitleStorage::FileTransferProgressCallbackInfoInternal::i___Epic__OnlineServices__ICallbackInfoInternal()  {
return static_cast<::Epic::OnlineServices::ICallbackInfoInternal*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::TitleStorage::FileTransferProgressCallbackInfo>"
constexpr  Epic::OnlineServices::TitleStorage::FileTransferProgressCallbackInfoInternal::operator ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::TitleStorage::FileTransferProgressCallbackInfo>*()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::TitleStorage::FileTransferProgressCallbackInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::TitleStorage::FileTransferProgressCallbackInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::TitleStorage::FileTransferProgressCallbackInfo>* Epic::OnlineServices::TitleStorage::FileTransferProgressCallbackInfoInternal::i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__TitleStorage__FileTransferProgressCallbackInfo_()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::TitleStorage::FileTransferProgressCallbackInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ClientData", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Filename", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_BytesTransferred", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TotalFileSizeBytes", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::TitleStorage::FileTransferProgressCallbackInfoInternal::FileTransferProgressCallbackInfoInternal(::System::IntPtr  m_ClientData, ::System::IntPtr  m_LocalUserId, ::System::IntPtr  m_Filename, uint32_t  m_BytesTransferred, uint32_t  m_TotalFileSizeBytes) noexcept  {
this->m_ClientData = m_ClientData;
this->m_LocalUserId = m_LocalUserId;
this->m_Filename = m_Filename;
this->m_BytesTransferred = m_BytesTransferred;
this->m_TotalFileSizeBytes = m_TotalFileSizeBytes;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::TitleStorage::FileTransferProgressCallbackInfoInternal::FileTransferProgressCallbackInfoInternal()   {
}
