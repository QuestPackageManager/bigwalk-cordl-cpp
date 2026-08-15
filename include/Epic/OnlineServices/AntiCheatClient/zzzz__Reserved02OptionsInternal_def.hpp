#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatClient/Reserved02OptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Reserved02OptionsInternal)
namespace Epic::OnlineServices::AntiCheatClient {
struct Reserved02Options;
}
namespace Epic::OnlineServices {
template<typename T>
class ISettable_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Epic::OnlineServices::AntiCheatClient {
struct Reserved02OptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::AntiCheatClient::Reserved02OptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::AntiCheatClient::Reserved02OptionsInternal, "Epic.OnlineServices.AntiCheatClient", "Reserved02OptionsInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::AntiCheatClient {
// Is value type: true
// CS Name: Epic.OnlineServices.AntiCheatClient.Reserved02OptionsInternal
struct CORDL_TYPE Reserved02OptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatClient::Reserved02Options>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatClient::Reserved02Options>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x18050bcc0, size 0x20, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x180533690, size 0x60, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::AntiCheatClient::Reserved02Options>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatClient::Reserved02Options>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatClient::Reserved02Options>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__AntiCheatClient__Reserved02Options_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr Reserved02OptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Reserved1", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "m_Reserved2", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_Reserved3", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_Reserved4", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr Reserved02OptionsInternal(int32_t  m_ApiVersion, int64_t  m_Reserved1, uint32_t  m_Reserved2, uint32_t  m_Reserved3, ::System::IntPtr  m_Reserved4) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9447};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_Reserved1, offset: 0x8, size: 0x8, def value: None
 int64_t  m_Reserved1;

/// @brief Field m_Reserved2, offset: 0x10, size: 0x4, def value: None
 uint32_t  m_Reserved2;

/// @brief Field m_Reserved3, offset: 0x14, size: 0x4, def value: None
 uint32_t  m_Reserved3;

/// @brief Field m_Reserved4, offset: 0x18, size: 0x8, def value: None
 ::System::IntPtr  m_Reserved4;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::AntiCheatClient::Reserved02OptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatClient::Reserved02OptionsInternal, m_Reserved1) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatClient::Reserved02OptionsInternal, m_Reserved2) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatClient::Reserved02OptionsInternal, m_Reserved3) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatClient::Reserved02OptionsInternal, m_Reserved4) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::AntiCheatClient::Reserved02OptionsInternal) == 0x20, "Size mismatch!");

} // namespace end def Epic::OnlineServices::AntiCheatClient
