#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Achievements/StatThresholdsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StatThresholdsInternal)
namespace Epic::OnlineServices::Achievements {
struct StatThresholds;
}
namespace Epic::OnlineServices {
template<typename T>
class IGettable_1;
}
// Forward declare root types
namespace Epic::OnlineServices::Achievements {
struct StatThresholdsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Achievements::StatThresholdsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Achievements::StatThresholdsInternal, "Epic.OnlineServices.Achievements", "StatThresholdsInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::Achievements {
// Is value type: true
// CS Name: Epic.OnlineServices.Achievements.StatThresholdsInternal
struct CORDL_TYPE StatThresholdsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Achievements::StatThresholds>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Achievements::StatThresholds>*() ;

/// @brief Method Get, addr 0x180517910, size 0x90, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::Achievements::StatThresholds>  other) ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Achievements::StatThresholds>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Achievements::StatThresholds>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Achievements__StatThresholds_() ;

// Ctor Parameters []
// @brief default ctor
constexpr StatThresholdsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Name", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_Threshold", ty: "int32_t", modifiers: "", def_value: None }]
constexpr StatThresholdsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_Name, int32_t  m_Threshold) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9517};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_Name, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_Name;

/// @brief Field m_Threshold, offset: 0x10, size: 0x4, def value: None
 int32_t  m_Threshold;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Achievements::StatThresholdsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Achievements::StatThresholdsInternal, m_Name) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Achievements::StatThresholdsInternal, m_Threshold) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Achievements::StatThresholdsInternal) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Achievements
