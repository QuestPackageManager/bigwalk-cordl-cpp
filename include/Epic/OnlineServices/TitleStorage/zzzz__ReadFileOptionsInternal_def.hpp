#pragma once
// IWYU pragma private; include "Epic/OnlineServices/TitleStorage/ReadFileOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ReadFileOptionsInternal)
namespace Epic::OnlineServices::TitleStorage {
struct ReadFileOptions;
}
namespace Epic::OnlineServices {
template<typename T>
class ISettable_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Epic::OnlineServices::TitleStorage {
struct ReadFileOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::TitleStorage::ReadFileOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::TitleStorage::ReadFileOptionsInternal, "Epic.OnlineServices.TitleStorage", "ReadFileOptionsInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::TitleStorage {
// Is value type: true
// CS Name: Epic.OnlineServices.TitleStorage.ReadFileOptionsInternal
struct CORDL_TYPE ReadFileOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::TitleStorage::ReadFileOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::TitleStorage::ReadFileOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1804d7440, size 0x60, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x1804e07f0, size 0x360, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::TitleStorage::ReadFileOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::TitleStorage::ReadFileOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::TitleStorage::ReadFileOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__TitleStorage__ReadFileOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr ReadFileOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_Filename", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_ReadChunkLengthBytes", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_ReadFileDataCallback", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_FileTransferProgressCallback", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr ReadFileOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_LocalUserId, ::System::IntPtr  m_Filename, uint32_t  m_ReadChunkLengthBytes, ::System::IntPtr  m_ReadFileDataCallback, ::System::IntPtr  m_FileTransferProgressCallback) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7636};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_LocalUserId, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_LocalUserId;

/// @brief Field m_Filename, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_Filename;

/// @brief Field m_ReadChunkLengthBytes, offset: 0x18, size: 0x4, def value: None
 uint32_t  m_ReadChunkLengthBytes;

/// @brief Field m_ReadFileDataCallback, offset: 0x20, size: 0x8, def value: None
 ::System::IntPtr  m_ReadFileDataCallback;

/// @brief Field m_FileTransferProgressCallback, offset: 0x28, size: 0x8, def value: None
 ::System::IntPtr  m_FileTransferProgressCallback;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::TitleStorage::ReadFileOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::TitleStorage::ReadFileOptionsInternal, m_LocalUserId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::TitleStorage::ReadFileOptionsInternal, m_Filename) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::TitleStorage::ReadFileOptionsInternal, m_ReadChunkLengthBytes) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::TitleStorage::ReadFileOptionsInternal, m_ReadFileDataCallback) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::TitleStorage::ReadFileOptionsInternal, m_FileTransferProgressCallback) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::TitleStorage::ReadFileOptionsInternal) == 0x30, "Size mismatch!");

} // namespace end def Epic::OnlineServices::TitleStorage
