#pragma once
// IWYU pragma private; include "GlobalNamespace/StreetNumber.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SaveablePropName_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(StreetNumber)
namespace GlobalNamespace {
struct SaveablePropName;
}
namespace TMPro {
class TMP_Text;
}
// Forward declare root types
namespace GlobalNamespace {
class StreetNumber;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::StreetNumber*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::StreetNumber*, "", "StreetNumber");
// Dependencies SaveablePropName, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: StreetNumber
class CORDL_TYPE StreetNumber : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field saveablePropName, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_saveablePropName, put=__cordl_internal_set_saveablePropName)) ::GlobalNamespace::SaveablePropName  saveablePropName;

/// @brief Field textField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_textField, put=__cordl_internal_set_textField)) ::UnityW<::TMPro::TMP_Text>  textField;

/// @brief Method Awake, addr 0x180408f50, size 0x50, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GetHouseNumber, addr 0x180408fa0, size 0x20, virtual false, abstract: false, final false
static inline ::StringW GetHouseNumber(::GlobalNamespace::SaveablePropName  gourdSaveName) ;

static inline ::GlobalNamespace::StreetNumber* New_ctor() ;

constexpr ::GlobalNamespace::SaveablePropName const& __cordl_internal_get_saveablePropName() const;

constexpr ::GlobalNamespace::SaveablePropName& __cordl_internal_get_saveablePropName() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_textField() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_textField() ;

constexpr void __cordl_internal_set_saveablePropName(::GlobalNamespace::SaveablePropName  value) ;

constexpr void __cordl_internal_set_textField(::UnityW<::TMPro::TMP_Text>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StreetNumber() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StreetNumber", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StreetNumber(StreetNumber && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StreetNumber", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StreetNumber(StreetNumber const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5073};

/// @brief Field saveablePropName, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::SaveablePropName  ___saveablePropName;

/// @brief Field textField, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___textField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StreetNumber, ___saveablePropName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StreetNumber, ___textField) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::StreetNumber) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
