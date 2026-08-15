#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/UnregisterPlayersOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnregisterPlayersOptionsInternal)
namespace Epic::OnlineServices::Sessions {
struct UnregisterPlayersOptions;
}
namespace Epic::OnlineServices {
template<typename T>
class ISettable_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Epic::OnlineServices::Sessions {
struct UnregisterPlayersOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Sessions::UnregisterPlayersOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Sessions::UnregisterPlayersOptionsInternal, "Epic.OnlineServices.Sessions", "UnregisterPlayersOptionsInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::Sessions {
// Is value type: true
// CS Name: Epic.OnlineServices.Sessions.UnregisterPlayersOptionsInternal
struct CORDL_TYPE UnregisterPlayersOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::UnregisterPlayersOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::UnregisterPlayersOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1804e6820, size 0x30, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x1804f6160, size 0xb0, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::Sessions::UnregisterPlayersOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::UnregisterPlayersOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::UnregisterPlayersOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Sessions__UnregisterPlayersOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr UnregisterPlayersOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_SessionName", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_PlayersToUnregister", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_PlayersToUnregisterCount", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr UnregisterPlayersOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_SessionName, ::System::IntPtr  m_PlayersToUnregister, uint32_t  m_PlayersToUnregisterCount) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7865};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_SessionName, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_SessionName;

/// @brief Field m_PlayersToUnregister, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_PlayersToUnregister;

/// @brief Field m_PlayersToUnregisterCount, offset: 0x18, size: 0x4, def value: None
 uint32_t  m_PlayersToUnregisterCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Sessions::UnregisterPlayersOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sessions::UnregisterPlayersOptionsInternal, m_SessionName) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sessions::UnregisterPlayersOptionsInternal, m_PlayersToUnregister) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sessions::UnregisterPlayersOptionsInternal, m_PlayersToUnregisterCount) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Sessions::UnregisterPlayersOptionsInternal) == 0x20, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Sessions
