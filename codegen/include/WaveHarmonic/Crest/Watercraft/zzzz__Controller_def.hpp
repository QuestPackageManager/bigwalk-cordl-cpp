#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Watercraft/Controller.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "WaveHarmonic/Crest/Internal/zzzz__ManagedBehaviour_1_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Controller)
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace WaveHarmonic::Crest::Watercraft {
class Control;
}
namespace WaveHarmonic::Crest {
class FloatingObject;
}
namespace WaveHarmonic::Crest {
class WaterRenderer;
}
// Forward declare root types
namespace WaveHarmonic::Crest::Watercraft {
class Controller;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::Watercraft::Controller*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::Watercraft::Controller*, "WaveHarmonic.Crest.Watercraft", "Controller");
// Dependencies WaveHarmonic.Crest.Internal.ManagedBehaviour`1<T>
namespace WaveHarmonic::Crest::Watercraft {
// Is value type: false
// CS Name: WaveHarmonic.Crest.Watercraft.Controller
class CORDL_TYPE Controller : public ::WaveHarmonic::Crest::Internal::ManagedBehaviour_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>> {
public:
// Declarations
 __declspec(property(get=get_BuoyancyCurveFactor, put=set_BuoyancyCurveFactor)) ::UnityEngine::AnimationCurve*  BuoyancyCurveFactor;

 __declspec(property(get=get_Control, put=set_Control)) ::UnityW<::WaveHarmonic::Crest::Watercraft::Control>  Control;

 __declspec(property(get=get_FloatingObject, put=set_FloatingObject)) ::UnityW<::WaveHarmonic::Crest::FloatingObject>  FloatingObject;

 __declspec(property(get=get_ForceHeightOffset, put=set_ForceHeightOffset)) float_t  ForceHeightOffset;

 __declspec(property(get=get_OnFixedUpdateMethod)) ::System::Action_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>>*  OnFixedUpdateMethod;

 __declspec(property(get=get_SteerPower, put=set_SteerPower)) float_t  SteerPower;

 __declspec(property(get=get_ThrustPower, put=set_ThrustPower)) float_t  ThrustPower;

 __declspec(property(get=get_TurningHeel, put=set_TurningHeel)) float_t  TurningHeel;

/// @brief Field _BuoyancyCurveFactor, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__BuoyancyCurveFactor, put=__cordl_internal_set__BuoyancyCurveFactor)) ::UnityEngine::AnimationCurve*  _BuoyancyCurveFactor;

/// @brief Field _BuoyancyFactor, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get__BuoyancyFactor, put=__cordl_internal_set__BuoyancyFactor)) float_t  _BuoyancyFactor;

/// @brief Field _Control, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__Control, put=__cordl_internal_set__Control)) ::UnityW<::WaveHarmonic::Crest::Watercraft::Control>  _Control;

/// @brief Field _FloatingObject, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__FloatingObject, put=__cordl_internal_set__FloatingObject)) ::UnityW<::WaveHarmonic::Crest::FloatingObject>  _FloatingObject;

/// @brief Field _ForceHeightOffset, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__ForceHeightOffset, put=__cordl_internal_set__ForceHeightOffset)) float_t  _ForceHeightOffset;

/// @brief Field _SteerPower, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get__SteerPower, put=__cordl_internal_set__SteerPower)) float_t  _SteerPower;

/// @brief Field _ThrustPower, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get__ThrustPower, put=__cordl_internal_set__ThrustPower)) float_t  _ThrustPower;

/// @brief Field _TurningHeel, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get__TurningHeel, put=__cordl_internal_set__TurningHeel)) float_t  _TurningHeel;

static inline ::WaveHarmonic::Crest::Watercraft::Controller* New_ctor() ;

/// @brief Method OnFixedUpdate, addr 0x18259e200, size 0x340, virtual false, abstract: false, final false
inline void OnFixedUpdate(::WaveHarmonic::Crest::WaterRenderer*  water) ;

/// @brief Method OnStart, addr 0x18259e540, size 0x80, virtual true, abstract: false, final false
inline void OnStart() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__BuoyancyCurveFactor() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__BuoyancyCurveFactor() ;

constexpr float_t const& __cordl_internal_get__BuoyancyFactor() const;

constexpr float_t& __cordl_internal_get__BuoyancyFactor() ;

constexpr ::UnityW<::WaveHarmonic::Crest::Watercraft::Control> const& __cordl_internal_get__Control() const;

constexpr ::UnityW<::WaveHarmonic::Crest::Watercraft::Control>& __cordl_internal_get__Control() ;

constexpr ::UnityW<::WaveHarmonic::Crest::FloatingObject> const& __cordl_internal_get__FloatingObject() const;

constexpr ::UnityW<::WaveHarmonic::Crest::FloatingObject>& __cordl_internal_get__FloatingObject() ;

constexpr float_t const& __cordl_internal_get__ForceHeightOffset() const;

constexpr float_t& __cordl_internal_get__ForceHeightOffset() ;

constexpr float_t const& __cordl_internal_get__SteerPower() const;

constexpr float_t& __cordl_internal_get__SteerPower() ;

constexpr float_t const& __cordl_internal_get__ThrustPower() const;

constexpr float_t& __cordl_internal_get__ThrustPower() ;

constexpr float_t const& __cordl_internal_get__TurningHeel() const;

constexpr float_t& __cordl_internal_get__TurningHeel() ;

constexpr void __cordl_internal_set__BuoyancyCurveFactor(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__BuoyancyFactor(float_t  value) ;

constexpr void __cordl_internal_set__Control(::UnityW<::WaveHarmonic::Crest::Watercraft::Control>  value) ;

constexpr void __cordl_internal_set__FloatingObject(::UnityW<::WaveHarmonic::Crest::FloatingObject>  value) ;

constexpr void __cordl_internal_set__ForceHeightOffset(float_t  value) ;

constexpr void __cordl_internal_set__SteerPower(float_t  value) ;

constexpr void __cordl_internal_set__ThrustPower(float_t  value) ;

constexpr void __cordl_internal_set__TurningHeel(float_t  value) ;

/// @brief Method .ctor, addr 0x18259e5c0, size 0x1c0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_BuoyancyCurveFactor, addr 0x18039fe40, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::AnimationCurve* get_BuoyancyCurveFactor() ;

/// @brief Method get_Control, addr 0x1802e75e0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::WaveHarmonic::Crest::Watercraft::Control> get_Control() ;

/// @brief Method get_FloatingObject, addr 0x1802e0b30, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::WaveHarmonic::Crest::FloatingObject> get_FloatingObject() ;

/// @brief Method get_ForceHeightOffset, addr 0x18046fae0, size 0x10, virtual false, abstract: false, final false
inline float_t get_ForceHeightOffset() ;

/// @brief Method get_OnFixedUpdateMethod, addr 0x18259e780, size 0x40, virtual true, abstract: false, final false
inline ::System::Action_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>>* get_OnFixedUpdateMethod() ;

/// @brief Method get_SteerPower, addr 0x18034f9d0, size 0x10, virtual false, abstract: false, final false
inline float_t get_SteerPower() ;

/// @brief Method get_ThrustPower, addr 0x18046fad0, size 0x10, virtual false, abstract: false, final false
inline float_t get_ThrustPower() ;

/// @brief Method get_TurningHeel, addr 0x180474bd0, size 0x10, virtual false, abstract: false, final false
inline float_t get_TurningHeel() ;

/// @brief Method set_BuoyancyCurveFactor, addr 0x1803d5ad0, size 0x10, virtual false, abstract: false, final false
inline void set_BuoyancyCurveFactor(::UnityEngine::AnimationCurve*  value) ;

/// @brief Method set_Control, addr 0x1802f8080, size 0x10, virtual false, abstract: false, final false
inline void set_Control(::WaveHarmonic::Crest::Watercraft::Control*  value) ;

/// @brief Method set_FloatingObject, addr 0x180308de0, size 0x10, virtual false, abstract: false, final false
inline void set_FloatingObject(::WaveHarmonic::Crest::FloatingObject*  value) ;

/// @brief Method set_ForceHeightOffset, addr 0x18046fb20, size 0x10, virtual false, abstract: false, final false
inline void set_ForceHeightOffset(float_t  value) ;

/// @brief Method set_SteerPower, addr 0x180474c80, size 0x10, virtual false, abstract: false, final false
inline void set_SteerPower(float_t  value) ;

/// @brief Method set_ThrustPower, addr 0x18046fb10, size 0x10, virtual false, abstract: false, final false
inline void set_ThrustPower(float_t  value) ;

/// @brief Method set_TurningHeel, addr 0x180474c90, size 0x10, virtual false, abstract: false, final false
inline void set_TurningHeel(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Controller() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Controller", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Controller(Controller && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Controller", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Controller(Controller const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16755};

/// @brief Field _FloatingObject, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::WaveHarmonic::Crest::FloatingObject>  ____FloatingObject;

/// @brief Field _Control, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::WaveHarmonic::Crest::Watercraft::Control>  ____Control;

/// @brief Field _ForceHeightOffset, offset: 0x60, size: 0x4, def value: None
 float_t  ____ForceHeightOffset;

/// @brief Field _ThrustPower, offset: 0x64, size: 0x4, def value: None
 float_t  ____ThrustPower;

/// @brief Field _SteerPower, offset: 0x68, size: 0x4, def value: None
 float_t  ____SteerPower;

/// @brief Field _TurningHeel, offset: 0x6c, size: 0x4, def value: None
 float_t  ____TurningHeel;

/// @brief Field _BuoyancyCurveFactor, offset: 0x70, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____BuoyancyCurveFactor;

/// @brief Field _BuoyancyFactor, offset: 0x78, size: 0x4, def value: None
 float_t  ____BuoyancyFactor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::Watercraft::Controller, ____FloatingObject) == 0x50, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::Watercraft::Controller, ____Control) == 0x58, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::Watercraft::Controller, ____ForceHeightOffset) == 0x60, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::Watercraft::Controller, ____ThrustPower) == 0x64, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::Watercraft::Controller, ____SteerPower) == 0x68, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::Watercraft::Controller, ____TurningHeel) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::Watercraft::Controller, ____BuoyancyCurveFactor) == 0x70, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::Watercraft::Controller, ____BuoyancyFactor) == 0x78, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::Watercraft::Controller) == 0x80, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest::Watercraft
