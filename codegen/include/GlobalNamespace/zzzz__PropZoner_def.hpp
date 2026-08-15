#pragma once
// IWYU pragma private; include "GlobalNamespace/PropZoner.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PropZoner)
namespace GlobalNamespace {
class PropZone;
}
namespace GlobalNamespace {
struct PropZoner_ZoneChangeType;
}
namespace GlobalNamespace {
class Prop;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
// Forward declare root types
namespace GlobalNamespace {
struct PropZoner_ZoneChangeType;
}
namespace GlobalNamespace {
class PropZoner;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PropZoner_ZoneChangeType);
MARK_REF_T(::GlobalNamespace::PropZoner*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PropZoner_ZoneChangeType, "", "PropZoner/ZoneChangeType");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PropZoner*, "", "PropZoner");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: PropZoner/ZoneChangeType
struct CORDL_TYPE PropZoner_ZoneChangeType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PropZoner_ZoneChangeType_Unwrapped
enum struct __PropZoner_ZoneChangeType_Unwrapped : int32_t {
__E_Enter = static_cast<int32_t>(0x0),
__E_Exit = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PropZoner_ZoneChangeType_Unwrapped () const noexcept {
return static_cast<__PropZoner_ZoneChangeType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PropZoner_ZoneChangeType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PropZoner_ZoneChangeType(int32_t  value__) noexcept;

/// @brief Field Enter value: I32(0)
static ::GlobalNamespace::PropZoner_ZoneChangeType const Enter;

/// @brief Field Exit value: I32(1)
static ::GlobalNamespace::PropZoner_ZoneChangeType const Exit;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5627};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PropZoner_ZoneChangeType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PropZoner_ZoneChangeType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PropZoner
class CORDL_TYPE PropZoner : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ZoneChangeType = ::GlobalNamespace::PropZoner_ZoneChangeType;

/// @brief Field onZoneChange, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_onZoneChange, put=__cordl_internal_set_onZoneChange)) ::System::Action_2<::UnityW<::GlobalNamespace::PropZone>,::GlobalNamespace::PropZoner_ZoneChangeType>*  onZoneChange;

/// @brief Field prop, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_prop, put=__cordl_internal_set_prop)) ::UnityW<::GlobalNamespace::Prop>  prop;

static inline ::GlobalNamespace::PropZoner* New_ctor() ;

constexpr ::System::Action_2<::UnityW<::GlobalNamespace::PropZone>,::GlobalNamespace::PropZoner_ZoneChangeType>* const& __cordl_internal_get_onZoneChange() const;

constexpr ::System::Action_2<::UnityW<::GlobalNamespace::PropZone>,::GlobalNamespace::PropZoner_ZoneChangeType>*& __cordl_internal_get_onZoneChange() ;

constexpr ::UnityW<::GlobalNamespace::Prop> const& __cordl_internal_get_prop() const;

constexpr ::UnityW<::GlobalNamespace::Prop>& __cordl_internal_get_prop() ;

constexpr void __cordl_internal_set_onZoneChange(::System::Action_2<::UnityW<::GlobalNamespace::PropZone>,::GlobalNamespace::PropZoner_ZoneChangeType>*  value) ;

constexpr void __cordl_internal_set_prop(::UnityW<::GlobalNamespace::Prop>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PropZoner() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PropZoner", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PropZoner(PropZoner && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PropZoner", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PropZoner(PropZoner const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5628};

/// @brief Field prop, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::Prop>  ___prop;

/// @brief Field onZoneChange, offset: 0x28, size: 0x8, def value: None
 ::System::Action_2<::UnityW<::GlobalNamespace::PropZone>,::GlobalNamespace::PropZoner_ZoneChangeType>*  ___onZoneChange;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PropZoner, ___prop) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropZoner, ___onZoneChange) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PropZoner) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
