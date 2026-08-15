#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Achievements/PlayerStatInfoInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerStatInfoInternal)
namespace Epic::OnlineServices::Achievements {
struct PlayerStatInfo;
}
namespace Epic::OnlineServices {
template<typename T>
class IGettable_1;
}
// Forward declare root types
namespace Epic::OnlineServices::Achievements {
struct PlayerStatInfoInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Achievements::PlayerStatInfoInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Achievements::PlayerStatInfoInternal, "Epic.OnlineServices.Achievements", "PlayerStatInfoInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::Achievements {
// Is value type: true
// CS Name: Epic.OnlineServices.Achievements.PlayerStatInfoInternal
struct CORDL_TYPE PlayerStatInfoInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Achievements::PlayerStatInfo>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Achievements::PlayerStatInfo>*() ;

/// @brief Method Get, addr 0x1805331c0, size 0xa0, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::Achievements::PlayerStatInfo>  other) ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Achievements::PlayerStatInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Achievements::PlayerStatInfo>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Achievements__PlayerStatInfo_() ;

// Ctor Parameters []
// @brief default ctor
constexpr PlayerStatInfoInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Name", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_CurrentValue", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_ThresholdValue", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PlayerStatInfoInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_Name, int32_t  m_CurrentValue, int32_t  m_ThresholdValue) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9511};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_Name, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_Name;

/// @brief Field m_CurrentValue, offset: 0x10, size: 0x4, def value: None
 int32_t  m_CurrentValue;

/// @brief Field m_ThresholdValue, offset: 0x14, size: 0x4, def value: None
 int32_t  m_ThresholdValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Achievements::PlayerStatInfoInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Achievements::PlayerStatInfoInternal, m_Name) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Achievements::PlayerStatInfoInternal, m_CurrentValue) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Achievements::PlayerStatInfoInternal, m_ThresholdValue) == 0x14, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Achievements::PlayerStatInfoInternal) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Achievements
