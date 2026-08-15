#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sanctions/PlayerSanctionInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerSanctionInternal)
namespace Epic::OnlineServices::Sanctions {
struct PlayerSanction;
}
namespace Epic::OnlineServices {
template<typename T>
class IGettable_1;
}
// Forward declare root types
namespace Epic::OnlineServices::Sanctions {
struct PlayerSanctionInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Sanctions::PlayerSanctionInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Sanctions::PlayerSanctionInternal, "Epic.OnlineServices.Sanctions", "PlayerSanctionInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::Sanctions {
// Is value type: true
// CS Name: Epic.OnlineServices.Sanctions.PlayerSanctionInternal
struct CORDL_TYPE PlayerSanctionInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Sanctions::PlayerSanction>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Sanctions::PlayerSanction>*() ;

/// @brief Method Get, addr 0x1804ed910, size 0xd0, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::Sanctions::PlayerSanction>  other) ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Sanctions::PlayerSanction>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Sanctions::PlayerSanction>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Sanctions__PlayerSanction_() ;

// Ctor Parameters []
// @brief default ctor
constexpr PlayerSanctionInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_TimePlaced", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "m_Action", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_TimeExpires", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "m_ReferenceId", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr PlayerSanctionInternal(int32_t  m_ApiVersion, int64_t  m_TimePlaced, ::System::IntPtr  m_Action, int64_t  m_TimeExpires, ::System::IntPtr  m_ReferenceId) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7887};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_TimePlaced, offset: 0x8, size: 0x8, def value: None
 int64_t  m_TimePlaced;

/// @brief Field m_Action, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_Action;

/// @brief Field m_TimeExpires, offset: 0x18, size: 0x8, def value: None
 int64_t  m_TimeExpires;

/// @brief Field m_ReferenceId, offset: 0x20, size: 0x8, def value: None
 ::System::IntPtr  m_ReferenceId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Sanctions::PlayerSanctionInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sanctions::PlayerSanctionInternal, m_TimePlaced) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sanctions::PlayerSanctionInternal, m_Action) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sanctions::PlayerSanctionInternal, m_TimeExpires) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sanctions::PlayerSanctionInternal, m_ReferenceId) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Sanctions::PlayerSanctionInternal) == 0x28, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Sanctions
