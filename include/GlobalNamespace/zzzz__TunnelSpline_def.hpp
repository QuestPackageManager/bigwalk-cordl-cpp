#pragma once
// IWYU pragma private; include "GlobalNamespace/TunnelSpline.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TunnelSpline)
namespace GlobalNamespace {
class SnapAnchor;
}
// Forward declare root types
namespace GlobalNamespace {
class TunnelSpline;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TunnelSpline*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TunnelSpline*, "", "TunnelSpline");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: TunnelSpline
class CORDL_TYPE TunnelSpline : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field alignerDistance, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_alignerDistance, put=__cordl_internal_set_alignerDistance)) float_t  alignerDistance;

/// @brief Field end, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_end, put=__cordl_internal_set_end)) ::UnityW<::GlobalNamespace::SnapAnchor>  end;

/// @brief Field start, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_start, put=__cordl_internal_set_start)) ::UnityW<::GlobalNamespace::SnapAnchor>  start;

static inline ::GlobalNamespace::TunnelSpline* New_ctor() ;

constexpr float_t const& __cordl_internal_get_alignerDistance() const;

constexpr float_t& __cordl_internal_get_alignerDistance() ;

constexpr ::UnityW<::GlobalNamespace::SnapAnchor> const& __cordl_internal_get_end() const;

constexpr ::UnityW<::GlobalNamespace::SnapAnchor>& __cordl_internal_get_end() ;

constexpr ::UnityW<::GlobalNamespace::SnapAnchor> const& __cordl_internal_get_start() const;

constexpr ::UnityW<::GlobalNamespace::SnapAnchor>& __cordl_internal_get_start() ;

constexpr void __cordl_internal_set_alignerDistance(float_t  value) ;

constexpr void __cordl_internal_set_end(::UnityW<::GlobalNamespace::SnapAnchor>  value) ;

constexpr void __cordl_internal_set_start(::UnityW<::GlobalNamespace::SnapAnchor>  value) ;

/// @brief Method .ctor, addr 0x1803f2590, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TunnelSpline() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TunnelSpline", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TunnelSpline(TunnelSpline && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TunnelSpline", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TunnelSpline(TunnelSpline const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4935};

/// @brief Field alignerDistance, offset: 0x20, size: 0x4, def value: None
 float_t  ___alignerDistance;

/// @brief Field start, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SnapAnchor>  ___start;

/// @brief Field end, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SnapAnchor>  ___end;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TunnelSpline, ___alignerDistance) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TunnelSpline, ___start) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TunnelSpline, ___end) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TunnelSpline) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
