#pragma once
// IWYU pragma private; include "Shipmates/Utils/OpenObserverSessionLabel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(OpenObserverSessionLabel)
namespace TMPro {
class TextMeshProUGUI;
}
// Forward declare root types
namespace Shipmates::Utils {
class OpenObserverSessionLabel;
}
// Write type traits
MARK_REF_T(::Shipmates::Utils::OpenObserverSessionLabel*);
DEFINE_IL2CPP_CLASS(::Shipmates::Utils::OpenObserverSessionLabel*, "Shipmates.Utils", "OpenObserverSessionLabel");
// Dependencies UnityEngine.MonoBehaviour
namespace Shipmates::Utils {
// Is value type: false
// CS Name: Shipmates.Utils.OpenObserverSessionLabel
class CORDL_TYPE OpenObserverSessionLabel : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _label, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__label, put=__cordl_internal_set__label)) ::UnityW<::TMPro::TextMeshProUGUI>  _label;

/// @brief Field _wasSet, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__wasSet, put=__cordl_internal_set__wasSet)) bool  _wasSet;

/// @brief Method Awake, addr 0x181acce90, size 0x40, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::Shipmates::Utils::OpenObserverSessionLabel* New_ctor() ;

/// @brief Method Update, addr 0x181acced0, size 0x80, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__label() const;

constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__label() ;

constexpr bool const& __cordl_internal_get__wasSet() const;

constexpr bool& __cordl_internal_get__wasSet() ;

constexpr void __cordl_internal_set__label(::UnityW<::TMPro::TextMeshProUGUI>  value) ;

constexpr void __cordl_internal_set__wasSet(bool  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OpenObserverSessionLabel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OpenObserverSessionLabel", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OpenObserverSessionLabel(OpenObserverSessionLabel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OpenObserverSessionLabel", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OpenObserverSessionLabel(OpenObserverSessionLabel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21068};

/// @brief Field _label, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshProUGUI>  ____label;

/// @brief Field _wasSet, offset: 0x28, size: 0x1, def value: None
 bool  ____wasSet;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Shipmates::Utils::OpenObserverSessionLabel, ____label) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Shipmates::Utils::OpenObserverSessionLabel, ____wasSet) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Shipmates::Utils::OpenObserverSessionLabel) == 0x30, "Size mismatch!");

} // namespace end def Shipmates::Utils
