#pragma once
// IWYU pragma private; include "GlobalNamespace/FPSDisplay.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FPSDisplay)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace TMPro {
class TMP_Text;
}
// Forward declare root types
namespace GlobalNamespace {
class FPSDisplay;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::FPSDisplay*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FPSDisplay*, "", "FPSDisplay");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: FPSDisplay
class CORDL_TYPE FPSDisplay : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _fpsIndex, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__fpsIndex, put=__cordl_internal_set__fpsIndex)) int32_t  _fpsIndex;

/// @brief Field _localizedValue, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__localizedValue, put=__cordl_internal_set__localizedValue)) ::StringW  _localizedValue;

/// @brief Field fpsValues, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_fpsValues, put=__cordl_internal_set_fpsValues)) ::System::Collections::Generic::List_1<float_t>*  fpsValues;

/// @brief Field localizationKey, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_localizationKey, put=__cordl_internal_set_localizationKey)) ::StringW  localizationKey;

/// @brief Field textField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_textField, put=__cordl_internal_set_textField)) ::UnityW<::TMPro::TMP_Text>  textField;

static inline ::GlobalNamespace::FPSDisplay* New_ctor() ;

/// @brief Method OnDisable, addr 0x1804323c0, size 0xf0, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1804324b0, size 0x120, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method RefreshLocalizedValue, addr 0x1804325d0, size 0x40, virtual false, abstract: false, final false
inline void RefreshLocalizedValue() ;

/// @brief Method Start, addr 0x180432610, size 0x50, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x180432660, size 0x1d0, virtual false, abstract: false, final false
inline void Update() ;

constexpr int32_t const& __cordl_internal_get__fpsIndex() const;

constexpr int32_t& __cordl_internal_get__fpsIndex() ;

constexpr ::StringW const& __cordl_internal_get__localizedValue() const;

constexpr ::StringW& __cordl_internal_get__localizedValue() ;

constexpr ::System::Collections::Generic::List_1<float_t>* const& __cordl_internal_get_fpsValues() const;

constexpr ::System::Collections::Generic::List_1<float_t>*& __cordl_internal_get_fpsValues() ;

constexpr ::StringW const& __cordl_internal_get_localizationKey() const;

constexpr ::StringW& __cordl_internal_get_localizationKey() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_textField() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_textField() ;

constexpr void __cordl_internal_set__fpsIndex(int32_t  value) ;

constexpr void __cordl_internal_set__localizedValue(::StringW  value) ;

constexpr void __cordl_internal_set_fpsValues(::System::Collections::Generic::List_1<float_t>*  value) ;

constexpr void __cordl_internal_set_localizationKey(::StringW  value) ;

constexpr void __cordl_internal_set_textField(::UnityW<::TMPro::TMP_Text>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FPSDisplay() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FPSDisplay", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FPSDisplay(FPSDisplay && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FPSDisplay", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FPSDisplay(FPSDisplay const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5249};

/// @brief Field textField, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___textField;

/// @brief Field fpsValues, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<float_t>*  ___fpsValues;

/// @brief Field _fpsIndex, offset: 0x30, size: 0x4, def value: None
 int32_t  ____fpsIndex;

/// @brief Field localizationKey, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___localizationKey;

/// @brief Field _localizedValue, offset: 0x40, size: 0x8, def value: None
 ::StringW  ____localizedValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FPSDisplay, ___textField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FPSDisplay, ___fpsValues) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FPSDisplay, ____fpsIndex) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FPSDisplay, ___localizationKey) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FPSDisplay, ____localizedValue) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FPSDisplay) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
