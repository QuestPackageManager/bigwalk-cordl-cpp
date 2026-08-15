#pragma once
// IWYU pragma private; include "GlobalNamespace/SaveNameDisplay.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SaveNameDisplay)
namespace GlobalNamespace {
class LocalizedText;
}
// Forward declare root types
namespace GlobalNamespace {
class SaveNameDisplay;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SaveNameDisplay*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SaveNameDisplay*, "", "SaveNameDisplay");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SaveNameDisplay
class CORDL_TYPE SaveNameDisplay : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field saveName, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_saveName, put=setStaticF_saveName)) ::StringW  saveName;

/// @brief Field textField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_textField, put=__cordl_internal_set_textField)) ::UnityW<::GlobalNamespace::LocalizedText>  textField;

static inline ::GlobalNamespace::SaveNameDisplay* New_ctor() ;

/// @brief Method OnEnable, addr 0x18043d520, size 0x40, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr ::UnityW<::GlobalNamespace::LocalizedText> const& __cordl_internal_get_textField() const;

constexpr ::UnityW<::GlobalNamespace::LocalizedText>& __cordl_internal_get_textField() ;

constexpr void __cordl_internal_set_textField(::UnityW<::GlobalNamespace::LocalizedText>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::StringW getStaticF_saveName() ;

static inline void setStaticF_saveName(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SaveNameDisplay() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SaveNameDisplay", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SaveNameDisplay(SaveNameDisplay && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SaveNameDisplay", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SaveNameDisplay(SaveNameDisplay const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5272};

/// @brief Field textField, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LocalizedText>  ___textField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SaveNameDisplay, ___textField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SaveNameDisplay) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
