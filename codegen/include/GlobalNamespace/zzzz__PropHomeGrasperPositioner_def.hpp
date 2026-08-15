#pragma once
// IWYU pragma private; include "GlobalNamespace/PropHomeGrasperPositioner.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PropHomeGrasperPositioner)
namespace GlobalNamespace {
class Corpse;
}
namespace GlobalNamespace {
class ICustomHomePositioner;
}
namespace GlobalNamespace {
class IOccasional;
}
namespace GlobalNamespace {
class OccasionalPartner;
}
namespace GlobalNamespace {
class Prop;
}
// Forward declare root types
namespace GlobalNamespace {
class PropHomeGrasperPositioner;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PropHomeGrasperPositioner*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PropHomeGrasperPositioner*, "", "PropHomeGrasperPositioner");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PropHomeGrasperPositioner
class CORDL_TYPE PropHomeGrasperPositioner : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _dampVelocity, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__dampVelocity, put=__cordl_internal_set__dampVelocity)) float_t  _dampVelocity;

/// @brief Field _holdRaised, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__holdRaised, put=__cordl_internal_set__holdRaised)) bool  _holdRaised;

/// @brief Field _holdRaisedness, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__holdRaisedness, put=__cordl_internal_set__holdRaisedness)) float_t  _holdRaisedness;

/// @brief Field corpse, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_corpse, put=__cordl_internal_set_corpse)) ::UnityW<::GlobalNamespace::Corpse>  corpse;

/// @brief Field dampTimeLower, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_dampTimeLower, put=__cordl_internal_set_dampTimeLower)) float_t  dampTimeLower;

/// @brief Field dampTimeRaise, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_dampTimeRaise, put=__cordl_internal_set_dampTimeRaise)) float_t  dampTimeRaise;

 __declspec(property(get=get_holdRaised, put=set_holdRaised)) bool  holdRaised;

 __declspec(property(get=get_holdRaisedness, put=set_holdRaisedness)) float_t  holdRaisedness;

/// @brief Field occasionalPartner, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_occasionalPartner, put=__cordl_internal_set_occasionalPartner)) ::UnityW<::GlobalNamespace::OccasionalPartner>  occasionalPartner;

/// @brief Convert operator to "::GlobalNamespace::ICustomHomePositioner"
constexpr operator  ::GlobalNamespace::ICustomHomePositioner*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IOccasional"
constexpr operator  ::GlobalNamespace::IOccasional*() noexcept;

/// @brief Method Awake, addr 0x180382d70, size 0x140, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::PropHomeGrasperPositioner* New_ctor() ;

/// @brief Method OccasionalUpdate, addr 0x180382eb0, size 0xf0, virtual true, abstract: false, final true
inline void OccasionalUpdate() ;

/// @brief Method OnChangePinOrHold, addr 0x180382fa0, size 0x60, virtual false, abstract: false, final false
inline void OnChangePinOrHold() ;

/// @brief Method Position, addr 0x180383000, size 0x240, virtual true, abstract: false, final true
inline void Position(::GlobalNamespace::Prop*  prop) ;

/// @brief Method Reposition, addr 0x180383240, size 0x2a0, virtual false, abstract: false, final false
inline void Reposition() ;

constexpr float_t const& __cordl_internal_get__dampVelocity() const;

constexpr float_t& __cordl_internal_get__dampVelocity() ;

constexpr bool const& __cordl_internal_get__holdRaised() const;

constexpr bool& __cordl_internal_get__holdRaised() ;

constexpr float_t const& __cordl_internal_get__holdRaisedness() const;

constexpr float_t& __cordl_internal_get__holdRaisedness() ;

constexpr ::UnityW<::GlobalNamespace::Corpse> const& __cordl_internal_get_corpse() const;

constexpr ::UnityW<::GlobalNamespace::Corpse>& __cordl_internal_get_corpse() ;

constexpr float_t const& __cordl_internal_get_dampTimeLower() const;

constexpr float_t& __cordl_internal_get_dampTimeLower() ;

constexpr float_t const& __cordl_internal_get_dampTimeRaise() const;

constexpr float_t& __cordl_internal_get_dampTimeRaise() ;

constexpr ::UnityW<::GlobalNamespace::OccasionalPartner> const& __cordl_internal_get_occasionalPartner() const;

constexpr ::UnityW<::GlobalNamespace::OccasionalPartner>& __cordl_internal_get_occasionalPartner() ;

constexpr void __cordl_internal_set__dampVelocity(float_t  value) ;

constexpr void __cordl_internal_set__holdRaised(bool  value) ;

constexpr void __cordl_internal_set__holdRaisedness(float_t  value) ;

constexpr void __cordl_internal_set_corpse(::UnityW<::GlobalNamespace::Corpse>  value) ;

constexpr void __cordl_internal_set_dampTimeLower(float_t  value) ;

constexpr void __cordl_internal_set_dampTimeRaise(float_t  value) ;

constexpr void __cordl_internal_set_occasionalPartner(::UnityW<::GlobalNamespace::OccasionalPartner>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_holdRaised, addr 0x1803023c0, size 0x10, virtual false, abstract: false, final false
inline bool get_holdRaised() ;

/// @brief Method get_holdRaisedness, addr 0x1802e2b90, size 0x10, virtual false, abstract: false, final false
inline float_t get_holdRaisedness() ;

/// @brief Convert to "::GlobalNamespace::ICustomHomePositioner"
constexpr ::GlobalNamespace::ICustomHomePositioner* i___GlobalNamespace__ICustomHomePositioner() noexcept;

/// @brief Convert to "::GlobalNamespace::IOccasional"
constexpr ::GlobalNamespace::IOccasional* i___GlobalNamespace__IOccasional() noexcept;

/// @brief Method set_holdRaised, addr 0x1803834e0, size 0x30, virtual false, abstract: false, final false
inline void set_holdRaised(bool  value) ;

/// @brief Method set_holdRaisedness, addr 0x180383510, size 0x20, virtual false, abstract: false, final false
inline void set_holdRaisedness(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PropHomeGrasperPositioner() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PropHomeGrasperPositioner", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PropHomeGrasperPositioner(PropHomeGrasperPositioner && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PropHomeGrasperPositioner", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PropHomeGrasperPositioner(PropHomeGrasperPositioner const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5572};

/// @brief Field corpse, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::Corpse>  ___corpse;

/// @brief Field occasionalPartner, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::OccasionalPartner>  ___occasionalPartner;

/// @brief Field dampTimeRaise, offset: 0x30, size: 0x4, def value: None
 float_t  ___dampTimeRaise;

/// @brief Field dampTimeLower, offset: 0x34, size: 0x4, def value: None
 float_t  ___dampTimeLower;

/// @brief Field _holdRaised, offset: 0x38, size: 0x1, def value: None
 bool  ____holdRaised;

/// @brief Field _dampVelocity, offset: 0x3c, size: 0x4, def value: None
 float_t  ____dampVelocity;

/// @brief Field _holdRaisedness, offset: 0x40, size: 0x4, def value: None
 float_t  ____holdRaisedness;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PropHomeGrasperPositioner, ___corpse) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropHomeGrasperPositioner, ___occasionalPartner) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropHomeGrasperPositioner, ___dampTimeRaise) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropHomeGrasperPositioner, ___dampTimeLower) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropHomeGrasperPositioner, ____holdRaised) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropHomeGrasperPositioner, ____dampVelocity) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropHomeGrasperPositioner, ____holdRaisedness) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PropHomeGrasperPositioner) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
