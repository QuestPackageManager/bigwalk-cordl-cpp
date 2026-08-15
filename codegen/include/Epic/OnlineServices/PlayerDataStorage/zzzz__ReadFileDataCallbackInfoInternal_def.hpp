#pragma once
// IWYU pragma private; include "Epic/OnlineServices/PlayerDataStorage/ReadFileDataCallbackInfoInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ReadFileDataCallbackInfoInternal)
namespace Epic::OnlineServices::PlayerDataStorage {
struct ReadFileDataCallbackInfo;
}
namespace Epic::OnlineServices {
class ICallbackInfoInternal;
}
namespace Epic::OnlineServices {
template<typename T>
class IGettable_1;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Epic::OnlineServices::PlayerDataStorage {
struct ReadFileDataCallbackInfoInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::PlayerDataStorage::ReadFileDataCallbackInfoInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::PlayerDataStorage::ReadFileDataCallbackInfoInternal, "Epic.OnlineServices.PlayerDataStorage", "ReadFileDataCallbackInfoInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::PlayerDataStorage {
// Is value type: true
// CS Name: Epic.OnlineServices.PlayerDataStorage.ReadFileDataCallbackInfoInternal
struct CORDL_TYPE ReadFileDataCallbackInfoInternal {
public:
// Declarations
 __declspec(property(get=get_ClientDataPointer)) ::System::IntPtr  ClientDataPointer;

/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr operator  ::Epic::OnlineServices::ICallbackInfoInternal*() ;

/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::PlayerDataStorage::ReadFileDataCallbackInfo>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::PlayerDataStorage::ReadFileDataCallbackInfo>*() ;

/// @brief Method Get, addr 0x180501e70, size 0x140, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::PlayerDataStorage::ReadFileDataCallbackInfo>  other) ;

/// @brief Method get_ClientDataPointer, addr 0x1803a88d0, size 0x10, virtual true, abstract: false, final true
inline ::System::IntPtr get_ClientDataPointer() ;

/// @brief Convert to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr ::Epic::OnlineServices::ICallbackInfoInternal* i___Epic__OnlineServices__ICallbackInfoInternal() ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::PlayerDataStorage::ReadFileDataCallbackInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::PlayerDataStorage::ReadFileDataCallbackInfo>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__PlayerDataStorage__ReadFileDataCallbackInfo_() ;

// Ctor Parameters []
// @brief default ctor
constexpr ReadFileDataCallbackInfoInternal() ;

// Ctor Parameters [CppParam { name: "m_ClientData", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_Filename", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_TotalFileSizeBytes", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_IsLastChunk", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_DataChunkLengthBytes", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_DataChunk", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr ReadFileDataCallbackInfoInternal(::System::IntPtr  m_ClientData, ::System::IntPtr  m_LocalUserId, ::System::IntPtr  m_Filename, uint32_t  m_TotalFileSizeBytes, int32_t  m_IsLastChunk, uint32_t  m_DataChunkLengthBytes, ::System::IntPtr  m_DataChunk) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8330};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field m_ClientData, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  m_ClientData;

/// @brief Field m_LocalUserId, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_LocalUserId;

/// @brief Field m_Filename, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_Filename;

/// @brief Field m_TotalFileSizeBytes, offset: 0x18, size: 0x4, def value: None
 uint32_t  m_TotalFileSizeBytes;

/// @brief Field m_IsLastChunk, offset: 0x1c, size: 0x4, def value: None
 int32_t  m_IsLastChunk;

/// @brief Field m_DataChunkLengthBytes, offset: 0x20, size: 0x4, def value: None
 uint32_t  m_DataChunkLengthBytes;

/// @brief Field m_DataChunk, offset: 0x28, size: 0x8, def value: None
 ::System::IntPtr  m_DataChunk;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::PlayerDataStorage::ReadFileDataCallbackInfoInternal, m_ClientData) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::PlayerDataStorage::ReadFileDataCallbackInfoInternal, m_LocalUserId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::PlayerDataStorage::ReadFileDataCallbackInfoInternal, m_Filename) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::PlayerDataStorage::ReadFileDataCallbackInfoInternal, m_TotalFileSizeBytes) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::PlayerDataStorage::ReadFileDataCallbackInfoInternal, m_IsLastChunk) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::PlayerDataStorage::ReadFileDataCallbackInfoInternal, m_DataChunkLengthBytes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::PlayerDataStorage::ReadFileDataCallbackInfoInternal, m_DataChunk) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::PlayerDataStorage::ReadFileDataCallbackInfoInternal) == 0x30, "Size mismatch!");

} // namespace end def Epic::OnlineServices::PlayerDataStorage
