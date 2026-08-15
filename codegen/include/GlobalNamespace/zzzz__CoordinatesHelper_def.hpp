#pragma once
// IWYU pragma private; include "GlobalNamespace/CoordinatesHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CoordinatesHelper)
namespace GlobalNamespace {
struct CoordinatesHelper_CoordinatesMode;
}
namespace GlobalNamespace {
class LocalizedText;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct CoordinatesHelper_CoordinatesMode;
}
namespace GlobalNamespace {
class CoordinatesHelper;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CoordinatesHelper_CoordinatesMode);
MARK_REF_T(::GlobalNamespace::CoordinatesHelper*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CoordinatesHelper_CoordinatesMode, "", "CoordinatesHelper/CoordinatesMode");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CoordinatesHelper*, "", "CoordinatesHelper");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: CoordinatesHelper/CoordinatesMode
struct CORDL_TYPE CoordinatesHelper_CoordinatesMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CoordinatesHelper_CoordinatesMode_Unwrapped
enum struct __CoordinatesHelper_CoordinatesMode_Unwrapped : int32_t {
__E_Single = static_cast<int32_t>(0x0),
__E_Pair = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CoordinatesHelper_CoordinatesMode_Unwrapped () const noexcept {
return static_cast<__CoordinatesHelper_CoordinatesMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CoordinatesHelper_CoordinatesMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CoordinatesHelper_CoordinatesMode(int32_t  value__) noexcept;

/// @brief Field Pair value: I32(1)
static ::GlobalNamespace::CoordinatesHelper_CoordinatesMode const Pair;

/// @brief Field Single value: I32(0)
static ::GlobalNamespace::CoordinatesHelper_CoordinatesMode const Single;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5032};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CoordinatesHelper_CoordinatesMode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CoordinatesHelper_CoordinatesMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies CoordinatesHelper::CoordinatesMode, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: CoordinatesHelper
class CORDL_TYPE CoordinatesHelper : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using CoordinatesMode = ::GlobalNamespace::CoordinatesHelper_CoordinatesMode;

/// @brief Field localizedText, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_localizedText, put=__cordl_internal_set_localizedText)) ::UnityW<::GlobalNamespace::LocalizedText>  localizedText;

/// @brief Field mode, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_mode, put=__cordl_internal_set_mode)) ::GlobalNamespace::CoordinatesHelper_CoordinatesMode  mode;

/// @brief Field showGlobalGizmo, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_showGlobalGizmo, put=__cordl_internal_set_showGlobalGizmo)) bool  showGlobalGizmo;

/// @brief Field targetA, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetA, put=__cordl_internal_set_targetA)) ::UnityW<::UnityEngine::Transform>  targetA;

/// @brief Field targetB, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetB, put=__cordl_internal_set_targetB)) ::UnityW<::UnityEngine::Transform>  targetB;

/// @brief Method GetCoordinateString, addr 0x1803f8880, size 0x130, virtual false, abstract: false, final false
inline ::StringW GetCoordinateString(::UnityEngine::Vector3  position) ;

static inline ::GlobalNamespace::CoordinatesHelper* New_ctor() ;

/// @brief Method OnDrawGizmosSelected, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

/// @brief Method Sync, addr 0x1803f89b0, size 0x120, virtual false, abstract: false, final false
inline void Sync() ;

constexpr ::UnityW<::GlobalNamespace::LocalizedText> const& __cordl_internal_get_localizedText() const;

constexpr ::UnityW<::GlobalNamespace::LocalizedText>& __cordl_internal_get_localizedText() ;

constexpr ::GlobalNamespace::CoordinatesHelper_CoordinatesMode const& __cordl_internal_get_mode() const;

constexpr ::GlobalNamespace::CoordinatesHelper_CoordinatesMode& __cordl_internal_get_mode() ;

constexpr bool const& __cordl_internal_get_showGlobalGizmo() const;

constexpr bool& __cordl_internal_get_showGlobalGizmo() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_targetA() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_targetA() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_targetB() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_targetB() ;

constexpr void __cordl_internal_set_localizedText(::UnityW<::GlobalNamespace::LocalizedText>  value) ;

constexpr void __cordl_internal_set_mode(::GlobalNamespace::CoordinatesHelper_CoordinatesMode  value) ;

constexpr void __cordl_internal_set_showGlobalGizmo(bool  value) ;

constexpr void __cordl_internal_set_targetA(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_targetB(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CoordinatesHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CoordinatesHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CoordinatesHelper(CoordinatesHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CoordinatesHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CoordinatesHelper(CoordinatesHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5033};

/// @brief Field mode, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::CoordinatesHelper_CoordinatesMode  ___mode;

/// @brief Field targetA, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___targetA;

/// @brief Field targetB, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___targetB;

/// @brief Field localizedText, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LocalizedText>  ___localizedText;

/// @brief Field showGlobalGizmo, offset: 0x40, size: 0x1, def value: None
 bool  ___showGlobalGizmo;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CoordinatesHelper, ___mode) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CoordinatesHelper, ___targetA) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CoordinatesHelper, ___targetB) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CoordinatesHelper, ___localizedText) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CoordinatesHelper, ___showGlobalGizmo) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CoordinatesHelper) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
