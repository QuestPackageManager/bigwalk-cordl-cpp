#pragma once
// IWYU pragma private; include "Epic/OnlineServices/PlayerDataStorage/WriteFileOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WriteFileOptionsInternal)
namespace Epic::OnlineServices::PlayerDataStorage {
struct WriteFileOptions;
}
namespace Epic::OnlineServices {
template<typename T>
class ISettable_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Epic::OnlineServices::PlayerDataStorage {
struct WriteFileOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::PlayerDataStorage::WriteFileOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::PlayerDataStorage::WriteFileOptionsInternal, "Epic.OnlineServices.PlayerDataStorage", "WriteFileOptionsInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::PlayerDataStorage {
// Is value type: true
// CS Name: Epic.OnlineServices.PlayerDataStorage.WriteFileOptionsInternal
struct CORDL_TYPE WriteFileOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::PlayerDataStorage::WriteFileOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::PlayerDataStorage::WriteFileOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1804e6820, size 0x30, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x1805038e0, size 0x1f0, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::PlayerDataStorage::WriteFileOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::PlayerDataStorage::WriteFileOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::PlayerDataStorage::WriteFileOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__PlayerDataStorage__WriteFileOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr WriteFileOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_Filename", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_ChunkLengthBytes", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_WriteFileDataCallback", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_FileTransferProgressCallback", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr WriteFileOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_LocalUserId, ::System::IntPtr  m_Filename, uint32_t  m_ChunkLengthBytes, ::System::IntPtr  m_WriteFileDataCallback, ::System::IntPtr  m_FileTransferProgressCallback) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8339};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_LocalUserId, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_LocalUserId;

/// @brief Field m_Filename, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_Filename;

/// @brief Field m_ChunkLengthBytes, offset: 0x18, size: 0x4, def value: None
 uint32_t  m_ChunkLengthBytes;

/// @brief Field m_WriteFileDataCallback, offset: 0x20, size: 0x8, def value: None
 ::System::IntPtr  m_WriteFileDataCallback;

/// @brief Field m_FileTransferProgressCallback, offset: 0x28, size: 0x8, def value: None
 ::System::IntPtr  m_FileTransferProgressCallback;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::PlayerDataStorage::WriteFileOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::PlayerDataStorage::WriteFileOptionsInternal, m_LocalUserId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::PlayerDataStorage::WriteFileOptionsInternal, m_Filename) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::PlayerDataStorage::WriteFileOptionsInternal, m_ChunkLengthBytes) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::PlayerDataStorage::WriteFileOptionsInternal, m_WriteFileDataCallback) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::PlayerDataStorage::WriteFileOptionsInternal, m_FileTransferProgressCallback) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::PlayerDataStorage::WriteFileOptionsInternal) == 0x30, "Size mismatch!");

} // namespace end def Epic::OnlineServices::PlayerDataStorage
