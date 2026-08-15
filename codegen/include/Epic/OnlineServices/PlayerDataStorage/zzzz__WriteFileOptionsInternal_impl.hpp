#pragma once
// IWYU pragma private; include "Epic/OnlineServices/PlayerDataStorage/WriteFileOptionsInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/PlayerDataStorage/zzzz__WriteFileOptionsInternal_def.hpp"
#include "Epic/OnlineServices/PlayerDataStorage/zzzz__WriteFileOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::PlayerDataStorage::WriteFileOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::PlayerDataStorage::WriteFileOptionsInternal::*)(::by_ref<::Epic::OnlineServices::PlayerDataStorage::WriteFileOptions>)>(&::Epic::OnlineServices::PlayerDataStorage::WriteFileOptionsInternal::Set)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x1805038e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::WriteFileOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::PlayerDataStorage::WriteFileOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::PlayerDataStorage::WriteFileOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::PlayerDataStorage::WriteFileOptionsInternal::*)()>(&::Epic::OnlineServices::PlayerDataStorage::WriteFileOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804e6820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::WriteFileOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::PlayerDataStorage::WriteFileOptionsInternal::Set(::by_ref<::Epic::OnlineServices::PlayerDataStorage::WriteFileOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::WriteFileOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::PlayerDataStorage::WriteFileOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::PlayerDataStorage::WriteFileOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::WriteFileOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::PlayerDataStorage::WriteFileOptions>"
constexpr  Epic::OnlineServices::PlayerDataStorage::WriteFileOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::PlayerDataStorage::WriteFileOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::PlayerDataStorage::WriteFileOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::PlayerDataStorage::WriteFileOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::PlayerDataStorage::WriteFileOptions>* Epic::OnlineServices::PlayerDataStorage::WriteFileOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__PlayerDataStorage__WriteFileOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::PlayerDataStorage::WriteFileOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::PlayerDataStorage::WriteFileOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::PlayerDataStorage::WriteFileOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Filename", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ChunkLengthBytes", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_WriteFileDataCallback", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_FileTransferProgressCallback", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::PlayerDataStorage::WriteFileOptionsInternal::WriteFileOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_LocalUserId, ::System::IntPtr  m_Filename, uint32_t  m_ChunkLengthBytes, ::System::IntPtr  m_WriteFileDataCallback, ::System::IntPtr  m_FileTransferProgressCallback) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_LocalUserId = m_LocalUserId;
this->m_Filename = m_Filename;
this->m_ChunkLengthBytes = m_ChunkLengthBytes;
this->m_WriteFileDataCallback = m_WriteFileDataCallback;
this->m_FileTransferProgressCallback = m_FileTransferProgressCallback;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::PlayerDataStorage::WriteFileOptionsInternal::WriteFileOptionsInternal()   {
}
