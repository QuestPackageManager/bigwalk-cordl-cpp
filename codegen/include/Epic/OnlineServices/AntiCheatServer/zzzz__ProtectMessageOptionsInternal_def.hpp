#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatServer/ProtectMessageOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProtectMessageOptionsInternal)
namespace Epic::OnlineServices::AntiCheatServer {
struct ProtectMessageOptions;
}
namespace Epic::OnlineServices {
template<typename T>
class ISettable_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Epic::OnlineServices::AntiCheatServer {
struct ProtectMessageOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::AntiCheatServer::ProtectMessageOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::AntiCheatServer::ProtectMessageOptionsInternal, "Epic.OnlineServices.AntiCheatServer", "ProtectMessageOptionsInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::AntiCheatServer {
// Is value type: true
// CS Name: Epic.OnlineServices.AntiCheatServer.ProtectMessageOptionsInternal
struct CORDL_TYPE ProtectMessageOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatServer::ProtectMessageOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatServer::ProtectMessageOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x18050bcc0, size 0x20, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x18052b280, size 0xc0, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::AntiCheatServer::ProtectMessageOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatServer::ProtectMessageOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatServer::ProtectMessageOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__AntiCheatServer__ProtectMessageOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr ProtectMessageOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_ClientHandle", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_DataLengthBytes", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_Data", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_OutBufferSizeBytes", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr ProtectMessageOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_ClientHandle, uint32_t  m_DataLengthBytes, ::System::IntPtr  m_Data, uint32_t  m_OutBufferSizeBytes) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9322};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_ClientHandle, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_ClientHandle;

/// @brief Field m_DataLengthBytes, offset: 0x10, size: 0x4, def value: None
 uint32_t  m_DataLengthBytes;

/// @brief Field m_Data, offset: 0x18, size: 0x8, def value: None
 ::System::IntPtr  m_Data;

/// @brief Field m_OutBufferSizeBytes, offset: 0x20, size: 0x4, def value: None
 uint32_t  m_OutBufferSizeBytes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::AntiCheatServer::ProtectMessageOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatServer::ProtectMessageOptionsInternal, m_ClientHandle) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatServer::ProtectMessageOptionsInternal, m_DataLengthBytes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatServer::ProtectMessageOptionsInternal, m_Data) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatServer::ProtectMessageOptionsInternal, m_OutBufferSizeBytes) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::AntiCheatServer::ProtectMessageOptionsInternal) == 0x28, "Size mismatch!");

} // namespace end def Epic::OnlineServices::AntiCheatServer
