#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Mods/ModInfoInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Mods/zzzz__ModEnumerationType_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ModInfoInternal)
namespace Epic::OnlineServices::Mods {
struct ModInfo;
}
namespace Epic::OnlineServices {
template<typename T>
class IGettable_1;
}
// Forward declare root types
namespace Epic::OnlineServices::Mods {
struct ModInfoInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Mods::ModInfoInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Mods::ModInfoInternal, "Epic.OnlineServices.Mods", "ModInfoInternal");
// Dependencies Epic.OnlineServices.Mods.ModEnumerationType, System.IntPtr
namespace Epic::OnlineServices::Mods {
// Is value type: true
// CS Name: Epic.OnlineServices.Mods.ModInfoInternal
struct CORDL_TYPE ModInfoInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Mods::ModInfo>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Mods::ModInfo>*() ;

/// @brief Method Get, addr 0x18050c580, size 0xa0, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::Mods::ModInfo>  other) ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Mods::ModInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Mods::ModInfo>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Mods__ModInfo_() ;

// Ctor Parameters []
// @brief default ctor
constexpr ModInfoInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_ModsCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Mods", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_Type", ty: "::Epic::OnlineServices::Mods::ModEnumerationType", modifiers: "", def_value: None }]
constexpr ModInfoInternal(int32_t  m_ApiVersion, int32_t  m_ModsCount, ::System::IntPtr  m_Mods, ::Epic::OnlineServices::Mods::ModEnumerationType  m_Type) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8384};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_ModsCount, offset: 0x4, size: 0x4, def value: None
 int32_t  m_ModsCount;

/// @brief Field m_Mods, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_Mods;

/// @brief Field m_Type, offset: 0x10, size: 0x4, def value: None
 ::Epic::OnlineServices::Mods::ModEnumerationType  m_Type;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Mods::ModInfoInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Mods::ModInfoInternal, m_ModsCount) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Mods::ModInfoInternal, m_Mods) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Mods::ModInfoInternal, m_Type) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Mods::ModInfoInternal) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Mods
