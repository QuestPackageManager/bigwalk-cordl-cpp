#pragma once
// IWYU pragma private; include "Epic/OnlineServices/PlayerDataStorage/ReadFileDataCallbackInfoInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/PlayerDataStorage/zzzz__ReadFileDataCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/PlayerDataStorage/zzzz__ReadFileDataCallbackInfo_def.hpp"
#include "Epic/OnlineServices/zzzz__ICallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/zzzz__IGettable_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::PlayerDataStorage::ReadFileDataCallbackInfoInternal.get_ClientDataPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::Epic::OnlineServices::PlayerDataStorage::ReadFileDataCallbackInfoInternal::*)()>(&::Epic::OnlineServices::PlayerDataStorage::ReadFileDataCallbackInfoInternal::get_ClientDataPointer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::ReadFileDataCallbackInfoInternal>(),
                        {"get_ClientDataPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::PlayerDataStorage::ReadFileDataCallbackInfoInternal.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::PlayerDataStorage::ReadFileDataCallbackInfoInternal::*)(::by_ref<::Epic::OnlineServices::PlayerDataStorage::ReadFileDataCallbackInfo>)>(&::Epic::OnlineServices::PlayerDataStorage::ReadFileDataCallbackInfoInternal::Get)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x180501e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::ReadFileDataCallbackInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::PlayerDataStorage::ReadFileDataCallbackInfo>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::IntPtr Epic::OnlineServices::PlayerDataStorage::ReadFileDataCallbackInfoInternal::get_ClientDataPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::ReadFileDataCallbackInfoInternal>(),
                        {"get_ClientDataPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(*this, ___internal_method);
}
inline void Epic::OnlineServices::PlayerDataStorage::ReadFileDataCallbackInfoInternal::Get(::by_ref<::Epic::OnlineServices::PlayerDataStorage::ReadFileDataCallbackInfo>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::ReadFileDataCallbackInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::PlayerDataStorage::ReadFileDataCallbackInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr  Epic::OnlineServices::PlayerDataStorage::ReadFileDataCallbackInfoInternal::operator ::Epic::OnlineServices::ICallbackInfoInternal*()  {
return static_cast<::Epic::OnlineServices::ICallbackInfoInternal*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr ::Epic::OnlineServices::ICallbackInfoInternal* Epic::OnlineServices::PlayerDataStorage::ReadFileDataCallbackInfoInternal::i___Epic__OnlineServices__ICallbackInfoInternal()  {
return static_cast<::Epic::OnlineServices::ICallbackInfoInternal*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::PlayerDataStorage::ReadFileDataCallbackInfo>"
constexpr  Epic::OnlineServices::PlayerDataStorage::ReadFileDataCallbackInfoInternal::operator ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::PlayerDataStorage::ReadFileDataCallbackInfo>*()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::PlayerDataStorage::ReadFileDataCallbackInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::PlayerDataStorage::ReadFileDataCallbackInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::PlayerDataStorage::ReadFileDataCallbackInfo>* Epic::OnlineServices::PlayerDataStorage::ReadFileDataCallbackInfoInternal::i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__PlayerDataStorage__ReadFileDataCallbackInfo_()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::PlayerDataStorage::ReadFileDataCallbackInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ClientData", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Filename", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TotalFileSizeBytes", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_IsLastChunk", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DataChunkLengthBytes", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DataChunk", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::PlayerDataStorage::ReadFileDataCallbackInfoInternal::ReadFileDataCallbackInfoInternal(::System::IntPtr  m_ClientData, ::System::IntPtr  m_LocalUserId, ::System::IntPtr  m_Filename, uint32_t  m_TotalFileSizeBytes, int32_t  m_IsLastChunk, uint32_t  m_DataChunkLengthBytes, ::System::IntPtr  m_DataChunk) noexcept  {
this->m_ClientData = m_ClientData;
this->m_LocalUserId = m_LocalUserId;
this->m_Filename = m_Filename;
this->m_TotalFileSizeBytes = m_TotalFileSizeBytes;
this->m_IsLastChunk = m_IsLastChunk;
this->m_DataChunkLengthBytes = m_DataChunkLengthBytes;
this->m_DataChunk = m_DataChunk;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::PlayerDataStorage::ReadFileDataCallbackInfoInternal::ReadFileDataCallbackInfoInternal()   {
}
