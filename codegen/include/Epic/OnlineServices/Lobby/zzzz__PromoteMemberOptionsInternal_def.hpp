#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/PromoteMemberOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PromoteMemberOptionsInternal)
namespace Epic::OnlineServices::Lobby {
struct PromoteMemberOptions;
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
struct PromoteMemberOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Lobby::PromoteMemberOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Lobby::PromoteMemberOptionsInternal, "Epic.OnlineServices.Lobby", "PromoteMemberOptionsInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::Lobby {
// Is value type: true
// CS Name: Epic.OnlineServices.Lobby.PromoteMemberOptionsInternal
struct CORDL_TYPE PromoteMemberOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::PromoteMemberOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::PromoteMemberOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1804f1b70, size 0x40, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x1804f1bb0, size 0xb0, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::Lobby::PromoteMemberOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::PromoteMemberOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::PromoteMemberOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Lobby__PromoteMemberOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr PromoteMemberOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_LobbyId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_TargetUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr PromoteMemberOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_LobbyId, ::System::IntPtr  m_LocalUserId, ::System::IntPtr  m_TargetUserId) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8673};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_LobbyId, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_LobbyId;

/// @brief Field m_LocalUserId, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_LocalUserId;

/// @brief Field m_TargetUserId, offset: 0x18, size: 0x8, def value: None
 ::System::IntPtr  m_TargetUserId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Lobby::PromoteMemberOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::PromoteMemberOptionsInternal, m_LobbyId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::PromoteMemberOptionsInternal, m_LocalUserId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::PromoteMemberOptionsInternal, m_TargetUserId) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Lobby::PromoteMemberOptionsInternal) == 0x20, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Lobby
