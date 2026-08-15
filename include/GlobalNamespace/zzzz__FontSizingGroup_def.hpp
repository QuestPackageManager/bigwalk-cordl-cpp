#pragma once
// IWYU pragma private; include "GlobalNamespace/FontSizingGroup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LocalizedText_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(FontSizingGroup)
// Forward declare root types
namespace GlobalNamespace {
class FontSizingGroup;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::FontSizingGroup*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FontSizingGroup*, "", "FontSizingGroup");
// Dependencies LocalizedText, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: FontSizingGroup
class CORDL_TYPE FontSizingGroup : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field textInstances, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_textInstances, put=__cordl_internal_set_textInstances)) ::ArrayW<::UnityW<::GlobalNamespace::LocalizedText>>  textInstances;

static inline ::GlobalNamespace::FontSizingGroup* New_ctor() ;

/// @brief Method OnDisable, addr 0x1803e7500, size 0x140, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1803e7640, size 0x200, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnRefresh, addr 0x1803e7840, size 0x120, virtual false, abstract: false, final false
inline void OnRefresh() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::LocalizedText>> const& __cordl_internal_get_textInstances() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::LocalizedText>>& __cordl_internal_get_textInstances() ;

constexpr void __cordl_internal_set_textInstances(::ArrayW<::UnityW<::GlobalNamespace::LocalizedText>>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FontSizingGroup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FontSizingGroup", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FontSizingGroup(FontSizingGroup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FontSizingGroup", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FontSizingGroup(FontSizingGroup const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4995};

/// @brief Field textInstances, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::LocalizedText>>  ___textInstances;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FontSizingGroup, ___textInstances) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FontSizingGroup) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
