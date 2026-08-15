#pragma once
// IWYU pragma private; include "GlobalNamespace/PingDisplay.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(PingDisplay)
namespace TMPro {
class TMP_Text;
}
// Forward declare root types
namespace GlobalNamespace {
class PingDisplay;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PingDisplay*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PingDisplay*, "", "PingDisplay");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PingDisplay
class CORDL_TYPE PingDisplay : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _localizedValue, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__localizedValue, put=__cordl_internal_set__localizedValue)) ::StringW  _localizedValue;

/// @brief Field localizationKey, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_localizationKey, put=__cordl_internal_set_localizationKey)) ::StringW  localizationKey;

/// @brief Field textField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_textField, put=__cordl_internal_set_textField)) ::UnityW<::TMPro::TMP_Text>  textField;

static inline ::GlobalNamespace::PingDisplay* New_ctor() ;

/// @brief Method OnDisable, addr 0x180439020, size 0xf0, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x180439110, size 0x120, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method RefreshLocalizedValue, addr 0x180439230, size 0x40, virtual false, abstract: false, final false
inline void RefreshLocalizedValue() ;

/// @brief Method Update, addr 0x180439270, size 0x90, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::StringW const& __cordl_internal_get__localizedValue() const;

constexpr ::StringW& __cordl_internal_get__localizedValue() ;

constexpr ::StringW const& __cordl_internal_get_localizationKey() const;

constexpr ::StringW& __cordl_internal_get_localizationKey() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_textField() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_textField() ;

constexpr void __cordl_internal_set__localizedValue(::StringW  value) ;

constexpr void __cordl_internal_set_localizationKey(::StringW  value) ;

constexpr void __cordl_internal_set_textField(::UnityW<::TMPro::TMP_Text>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PingDisplay() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PingDisplay", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PingDisplay(PingDisplay && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PingDisplay", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PingDisplay(PingDisplay const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5251};

/// @brief Field textField, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___textField;

/// @brief Field localizationKey, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___localizationKey;

/// @brief Field _localizedValue, offset: 0x30, size: 0x8, def value: None
 ::StringW  ____localizedValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PingDisplay, ___textField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PingDisplay, ___localizationKey) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PingDisplay, ____localizedValue) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PingDisplay) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
