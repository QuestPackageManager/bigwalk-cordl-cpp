#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/HardMuteMemberOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HardMuteMemberOptionsInternal)
namespace Epic::OnlineServices::Lobby {
struct HardMuteMemberOptions;
}
namespace Epic::OnlineServices {
template<typename T>
class ISettable_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Epic::OnlineServices::Lobby {
struct HardMuteMemberOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Lobby::HardMuteMemberOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Lobby::HardMuteMemberOptionsInternal, "Epic.OnlineServices.Lobby", "HardMuteMemberOptionsInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::Lobby {
// Is value type: true
// CS Name: Epic.OnlineServices.Lobby.HardMuteMemberOptionsInternal
struct CORDL_TYPE HardMuteMemberOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::HardMuteMemberOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::HardMuteMemberOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1804f1b70, size 0x40, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x1805050a0, size 0xc0, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::Lobby::HardMuteMemberOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::HardMuteMemberOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::HardMuteMemberOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Lobby__HardMuteMemberOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr HardMuteMemberOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_LobbyId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_TargetUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_HardMute", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HardMuteMemberOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_LobbyId, ::System::IntPtr  m_LocalUserId, ::System::IntPtr  m_TargetUserId, int32_t  m_HardMute) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8478};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_LobbyId, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_LobbyId;

/// @brief Field m_LocalUserId, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_LocalUserId;

/// @brief Field m_TargetUserId, offset: 0x18, size: 0x8, def value: None
 ::System::IntPtr  m_TargetUserId;

/// @brief Field m_HardMute, offset: 0x20, size: 0x4, def value: None
 int32_t  m_HardMute;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Lobby::HardMuteMemberOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::HardMuteMemberOptionsInternal, m_LobbyId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::HardMuteMemberOptionsInternal, m_LocalUserId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::HardMuteMemberOptionsInternal, m_TargetUserId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::HardMuteMemberOptionsInternal, m_HardMute) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Lobby::HardMuteMemberOptionsInternal) == 0x28, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Lobby
