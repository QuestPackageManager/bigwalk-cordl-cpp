#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/QueryEvents.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "WaveHarmonic/Crest/Internal/zzzz__ManagedBehaviour_1_def.hpp"
#include "WaveHarmonic/Crest/zzzz__CollisionLayer_def.hpp"
#include "WaveHarmonic/Crest/zzzz__QuerySource_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(QueryEvents)
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class Camera;
}
namespace WaveHarmonic::Crest {
struct CollisionLayer;
}
namespace WaveHarmonic::Crest {
struct QuerySource;
}
namespace WaveHarmonic::Crest {
class SampleCollisionHelper;
}
namespace WaveHarmonic::Crest {
class SampleDepthHelper;
}
namespace WaveHarmonic::Crest {
class WaterRenderer;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
class QueryEvents;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::QueryEvents*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::QueryEvents*, "WaveHarmonic.Crest", "QueryEvents");
// Dependencies WaveHarmonic.Crest.CollisionLayer, WaveHarmonic.Crest.Internal.ManagedBehaviour`1<T>, WaveHarmonic.Crest.QuerySource
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.QueryEvents
class CORDL_TYPE QueryEvents : public ::WaveHarmonic::Crest::Internal::ManagedBehaviour_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>> {
public:
// Declarations
 __declspec(property(get=get_DistanceFromEdge, put=set_DistanceFromEdge)) ::System::Action_1<float_t>*  DistanceFromEdge;

 __declspec(property(get=get_DistanceFromEdgeCurve, put=set_DistanceFromEdgeCurve)) ::UnityEngine::AnimationCurve*  DistanceFromEdgeCurve;

 __declspec(property(get=get_DistanceFromEdgeMaximum, put=set_DistanceFromEdgeMaximum)) float_t  DistanceFromEdgeMaximum;

 __declspec(property(get=get_DistanceFromEdgeSigned, put=set_DistanceFromEdgeSigned)) bool  DistanceFromEdgeSigned;

 __declspec(property(get=get_DistanceFromEdgeUseCurve, put=set_DistanceFromEdgeUseCurve)) bool  DistanceFromEdgeUseCurve;

 __declspec(property(get=get_DistanceFromSurface, put=set_DistanceFromSurface)) ::System::Action_1<float_t>*  DistanceFromSurface;

 __declspec(property(get=get_DistanceFromSurfaceCurve, put=set_DistanceFromSurfaceCurve)) ::UnityEngine::AnimationCurve*  DistanceFromSurfaceCurve;

 __declspec(property(get=get_DistanceFromSurfaceMaximum, put=set_DistanceFromSurfaceMaximum)) float_t  DistanceFromSurfaceMaximum;

 __declspec(property(get=get_DistanceFromSurfaceSigned, put=set_DistanceFromSurfaceSigned)) bool  DistanceFromSurfaceSigned;

 __declspec(property(get=get_DistanceFromSurfaceUseCurve, put=set_DistanceFromSurfaceUseCurve)) bool  DistanceFromSurfaceUseCurve;

 __declspec(property(get=get_HasDistanceFromEdge)) bool  HasDistanceFromEdge;

 __declspec(property(get=get_HasDistanceFromSurface)) bool  HasDistanceFromSurface;

 __declspec(property(get=get_HasOnAboveWater)) bool  HasOnAboveWater;

 __declspec(property(get=get_HasOnBelowWater)) bool  HasOnBelowWater;

 __declspec(property(get=get_Layer, put=set_Layer)) ::WaveHarmonic::Crest::CollisionLayer  Layer;

 __declspec(property(get=get_MinimumWavelength, put=set_MinimumWavelength)) float_t  MinimumWavelength;

 __declspec(property(get=get_OnAboveWater, put=set_OnAboveWater)) ::System::Action*  OnAboveWater;

 __declspec(property(get=get_OnBelowWater, put=set_OnBelowWater)) ::System::Action*  OnBelowWater;

 __declspec(property(get=get_OnLateUpdateMethod)) ::System::Action_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>>*  OnLateUpdateMethod;

 __declspec(property(get=get_OnUpdateMethod)) ::System::Action_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>>*  OnUpdateMethod;

 __declspec(property(get=get_Source, put=set_Source)) ::WaveHarmonic::Crest::QuerySource  Source;

 __declspec(property(get=get_Viewer, put=set_Viewer)) ::UnityW<::UnityEngine::Camera>  Viewer;

/// @brief Field _DistanceFromEdge, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__DistanceFromEdge, put=__cordl_internal_set__DistanceFromEdge)) ::UnityEngine::Events::UnityEvent_1<float_t>*  _DistanceFromEdge;

/// @brief Field _DistanceFromEdgeCurve, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__DistanceFromEdgeCurve, put=__cordl_internal_set__DistanceFromEdgeCurve)) ::UnityEngine::AnimationCurve*  _DistanceFromEdgeCurve;

/// @brief Field _DistanceFromEdgeMaximum, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get__DistanceFromEdgeMaximum, put=__cordl_internal_set__DistanceFromEdgeMaximum)) float_t  _DistanceFromEdgeMaximum;

/// @brief Field _DistanceFromEdgeSigned, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get__DistanceFromEdgeSigned, put=__cordl_internal_set__DistanceFromEdgeSigned)) bool  _DistanceFromEdgeSigned;

/// @brief Field _DistanceFromEdgeUseCurve, offset 0x88, size 0x1 
 __declspec(property(get=__cordl_internal_get__DistanceFromEdgeUseCurve, put=__cordl_internal_set__DistanceFromEdgeUseCurve)) bool  _DistanceFromEdgeUseCurve;

/// @brief Field <DistanceFromEdge>k__BackingField, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get__DistanceFromEdge_k__BackingField, put=__cordl_internal_set__DistanceFromEdge_k__BackingField)) ::System::Action_1<float_t>*  _DistanceFromEdge_k__BackingField;

/// @brief Field _DistanceFromSurface, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__DistanceFromSurface, put=__cordl_internal_set__DistanceFromSurface)) ::UnityEngine::Events::UnityEvent_1<float_t>*  _DistanceFromSurface;

/// @brief Field _DistanceFromSurfaceCurve, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__DistanceFromSurfaceCurve, put=__cordl_internal_set__DistanceFromSurfaceCurve)) ::UnityEngine::AnimationCurve*  _DistanceFromSurfaceCurve;

/// @brief Field _DistanceFromSurfaceMaximum, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get__DistanceFromSurfaceMaximum, put=__cordl_internal_set__DistanceFromSurfaceMaximum)) float_t  _DistanceFromSurfaceMaximum;

/// @brief Field _DistanceFromSurfaceSigned, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get__DistanceFromSurfaceSigned, put=__cordl_internal_set__DistanceFromSurfaceSigned)) bool  _DistanceFromSurfaceSigned;

/// @brief Field _DistanceFromSurfaceUseCurve, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get__DistanceFromSurfaceUseCurve, put=__cordl_internal_set__DistanceFromSurfaceUseCurve)) bool  _DistanceFromSurfaceUseCurve;

/// @brief Field <DistanceFromSurface>k__BackingField, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get__DistanceFromSurface_k__BackingField, put=__cordl_internal_set__DistanceFromSurface_k__BackingField)) ::System::Action_1<float_t>*  _DistanceFromSurface_k__BackingField;

/// @brief Field _IsAboveSurface, offset 0xb8, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsAboveSurface, put=__cordl_internal_set__IsAboveSurface)) bool  _IsAboveSurface;

/// @brief Field _IsFirstUpdate, offset 0xb9, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsFirstUpdate, put=__cordl_internal_set__IsFirstUpdate)) bool  _IsFirstUpdate;

/// @brief Field _Layer, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__Layer, put=__cordl_internal_set__Layer)) ::WaveHarmonic::Crest::CollisionLayer  _Layer;

/// @brief Field _MinimumWavelength, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get__MinimumWavelength, put=__cordl_internal_set__MinimumWavelength)) float_t  _MinimumWavelength;

/// @brief Field _OnAboveWater, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__OnAboveWater, put=__cordl_internal_set__OnAboveWater)) ::UnityEngine::Events::UnityEvent*  _OnAboveWater;

/// @brief Field <OnAboveWater>k__BackingField, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get__OnAboveWater_k__BackingField, put=__cordl_internal_set__OnAboveWater_k__BackingField)) ::System::Action*  _OnAboveWater_k__BackingField;

/// @brief Field _OnBelowWater, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__OnBelowWater, put=__cordl_internal_set__OnBelowWater)) ::UnityEngine::Events::UnityEvent*  _OnBelowWater;

/// @brief Field <OnBelowWater>k__BackingField, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get__OnBelowWater_k__BackingField, put=__cordl_internal_set__OnBelowWater_k__BackingField)) ::System::Action*  _OnBelowWater_k__BackingField;

/// @brief Field _SampleDepthHelper, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get__SampleDepthHelper, put=__cordl_internal_set__SampleDepthHelper)) ::WaveHarmonic::Crest::SampleDepthHelper*  _SampleDepthHelper;

/// @brief Field _SampleHeightHelper, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get__SampleHeightHelper, put=__cordl_internal_set__SampleHeightHelper)) ::WaveHarmonic::Crest::SampleCollisionHelper*  _SampleHeightHelper;

/// @brief Field _Source, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__Source, put=__cordl_internal_set__Source)) ::WaveHarmonic::Crest::QuerySource  _Source;

/// @brief Field _Viewer, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__Viewer, put=__cordl_internal_set__Viewer)) ::UnityW<::UnityEngine::Camera>  _Viewer;

static inline ::WaveHarmonic::Crest::QueryEvents* New_ctor() ;

/// @brief Method OnLateUpdate, addr 0x18257b7b0, size 0x40, virtual false, abstract: false, final false
inline void OnLateUpdate(::WaveHarmonic::Crest::WaterRenderer*  water) ;

/// @brief Method OnUpdate, addr 0x18257b7f0, size 0x40, virtual false, abstract: false, final false
inline void OnUpdate(::WaveHarmonic::Crest::WaterRenderer*  water) ;

/// @brief Method SendDistanceFromEdge, addr 0x18257b830, size 0x240, virtual false, abstract: false, final false
inline void SendDistanceFromEdge(::WaveHarmonic::Crest::WaterRenderer*  water) ;

/// @brief Method SendDistanceFromSurface, addr 0x18257ba70, size 0x3c0, virtual false, abstract: false, final false
inline void SendDistanceFromSurface(::WaveHarmonic::Crest::WaterRenderer*  water) ;

constexpr ::UnityEngine::Events::UnityEvent_1<float_t>* const& __cordl_internal_get__DistanceFromEdge() const;

constexpr ::UnityEngine::Events::UnityEvent_1<float_t>*& __cordl_internal_get__DistanceFromEdge() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__DistanceFromEdgeCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__DistanceFromEdgeCurve() ;

constexpr float_t const& __cordl_internal_get__DistanceFromEdgeMaximum() const;

constexpr float_t& __cordl_internal_get__DistanceFromEdgeMaximum() ;

constexpr bool const& __cordl_internal_get__DistanceFromEdgeSigned() const;

constexpr bool& __cordl_internal_get__DistanceFromEdgeSigned() ;

constexpr bool const& __cordl_internal_get__DistanceFromEdgeUseCurve() const;

constexpr bool& __cordl_internal_get__DistanceFromEdgeUseCurve() ;

constexpr ::System::Action_1<float_t>* const& __cordl_internal_get__DistanceFromEdge_k__BackingField() const;

constexpr ::System::Action_1<float_t>*& __cordl_internal_get__DistanceFromEdge_k__BackingField() ;

constexpr ::UnityEngine::Events::UnityEvent_1<float_t>* const& __cordl_internal_get__DistanceFromSurface() const;

constexpr ::UnityEngine::Events::UnityEvent_1<float_t>*& __cordl_internal_get__DistanceFromSurface() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__DistanceFromSurfaceCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__DistanceFromSurfaceCurve() ;

constexpr float_t const& __cordl_internal_get__DistanceFromSurfaceMaximum() const;

constexpr float_t& __cordl_internal_get__DistanceFromSurfaceMaximum() ;

constexpr bool const& __cordl_internal_get__DistanceFromSurfaceSigned() const;

constexpr bool& __cordl_internal_get__DistanceFromSurfaceSigned() ;

constexpr bool const& __cordl_internal_get__DistanceFromSurfaceUseCurve() const;

constexpr bool& __cordl_internal_get__DistanceFromSurfaceUseCurve() ;

constexpr ::System::Action_1<float_t>* const& __cordl_internal_get__DistanceFromSurface_k__BackingField() const;

constexpr ::System::Action_1<float_t>*& __cordl_internal_get__DistanceFromSurface_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsAboveSurface() const;

constexpr bool& __cordl_internal_get__IsAboveSurface() ;

constexpr bool const& __cordl_internal_get__IsFirstUpdate() const;

constexpr bool& __cordl_internal_get__IsFirstUpdate() ;

constexpr ::WaveHarmonic::Crest::CollisionLayer const& __cordl_internal_get__Layer() const;

constexpr ::WaveHarmonic::Crest::CollisionLayer& __cordl_internal_get__Layer() ;

constexpr float_t const& __cordl_internal_get__MinimumWavelength() const;

constexpr float_t& __cordl_internal_get__MinimumWavelength() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__OnAboveWater() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__OnAboveWater() ;

constexpr ::System::Action* const& __cordl_internal_get__OnAboveWater_k__BackingField() const;

constexpr ::System::Action*& __cordl_internal_get__OnAboveWater_k__BackingField() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__OnBelowWater() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__OnBelowWater() ;

constexpr ::System::Action* const& __cordl_internal_get__OnBelowWater_k__BackingField() const;

constexpr ::System::Action*& __cordl_internal_get__OnBelowWater_k__BackingField() ;

constexpr ::WaveHarmonic::Crest::SampleDepthHelper* const& __cordl_internal_get__SampleDepthHelper() const;

constexpr ::WaveHarmonic::Crest::SampleDepthHelper*& __cordl_internal_get__SampleDepthHelper() ;

constexpr ::WaveHarmonic::Crest::SampleCollisionHelper* const& __cordl_internal_get__SampleHeightHelper() const;

constexpr ::WaveHarmonic::Crest::SampleCollisionHelper*& __cordl_internal_get__SampleHeightHelper() ;

constexpr ::WaveHarmonic::Crest::QuerySource const& __cordl_internal_get__Source() const;

constexpr ::WaveHarmonic::Crest::QuerySource& __cordl_internal_get__Source() ;

constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get__Viewer() const;

constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get__Viewer() ;

constexpr void __cordl_internal_set__DistanceFromEdge(::UnityEngine::Events::UnityEvent_1<float_t>*  value) ;

constexpr void __cordl_internal_set__DistanceFromEdgeCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__DistanceFromEdgeMaximum(float_t  value) ;

constexpr void __cordl_internal_set__DistanceFromEdgeSigned(bool  value) ;

constexpr void __cordl_internal_set__DistanceFromEdgeUseCurve(bool  value) ;

constexpr void __cordl_internal_set__DistanceFromEdge_k__BackingField(::System::Action_1<float_t>*  value) ;

constexpr void __cordl_internal_set__DistanceFromSurface(::UnityEngine::Events::UnityEvent_1<float_t>*  value) ;

constexpr void __cordl_internal_set__DistanceFromSurfaceCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__DistanceFromSurfaceMaximum(float_t  value) ;

constexpr void __cordl_internal_set__DistanceFromSurfaceSigned(bool  value) ;

constexpr void __cordl_internal_set__DistanceFromSurfaceUseCurve(bool  value) ;

constexpr void __cordl_internal_set__DistanceFromSurface_k__BackingField(::System::Action_1<float_t>*  value) ;

constexpr void __cordl_internal_set__IsAboveSurface(bool  value) ;

constexpr void __cordl_internal_set__IsFirstUpdate(bool  value) ;

constexpr void __cordl_internal_set__Layer(::WaveHarmonic::Crest::CollisionLayer  value) ;

constexpr void __cordl_internal_set__MinimumWavelength(float_t  value) ;

constexpr void __cordl_internal_set__OnAboveWater(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__OnAboveWater_k__BackingField(::System::Action*  value) ;

constexpr void __cordl_internal_set__OnBelowWater(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__OnBelowWater_k__BackingField(::System::Action*  value) ;

constexpr void __cordl_internal_set__SampleDepthHelper(::WaveHarmonic::Crest::SampleDepthHelper*  value) ;

constexpr void __cordl_internal_set__SampleHeightHelper(::WaveHarmonic::Crest::SampleCollisionHelper*  value) ;

constexpr void __cordl_internal_set__Source(::WaveHarmonic::Crest::QuerySource  value) ;

constexpr void __cordl_internal_set__Viewer(::UnityW<::UnityEngine::Camera>  value) ;

/// @brief Method .ctor, addr 0x18257be30, size 0x220, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_DistanceFromEdge, addr 0x1803b2f10, size 0x10, virtual false, abstract: false, final false
inline ::System::Action_1<float_t>* get_DistanceFromEdge() ;

/// @brief Method get_DistanceFromEdgeCurve, addr 0x180312ea0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::AnimationCurve* get_DistanceFromEdgeCurve() ;

/// @brief Method get_DistanceFromEdgeMaximum, addr 0x180483520, size 0x10, virtual false, abstract: false, final false
inline float_t get_DistanceFromEdgeMaximum() ;

/// @brief Method get_DistanceFromEdgeSigned, addr 0x1802e56a0, size 0x10, virtual false, abstract: false, final false
inline bool get_DistanceFromEdgeSigned() ;

/// @brief Method get_DistanceFromEdgeUseCurve, addr 0x1803b2d60, size 0x10, virtual false, abstract: false, final false
inline bool get_DistanceFromEdgeUseCurve() ;

/// @brief Method get_DistanceFromSurface, addr 0x1803b2dc0, size 0x10, virtual false, abstract: false, final false
inline ::System::Action_1<float_t>* get_DistanceFromSurface() ;

/// @brief Method get_DistanceFromSurfaceCurve, addr 0x1803a74e0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::AnimationCurve* get_DistanceFromSurfaceCurve() ;

/// @brief Method get_DistanceFromSurfaceMaximum, addr 0x180474bd0, size 0x10, virtual false, abstract: false, final false
inline float_t get_DistanceFromSurfaceMaximum() ;

/// @brief Method get_DistanceFromSurfaceSigned, addr 0x180347a60, size 0xe0, virtual false, abstract: false, final false
inline bool get_DistanceFromSurfaceSigned() ;

/// @brief Method get_DistanceFromSurfaceUseCurve, addr 0x180352b00, size 0x10, virtual false, abstract: false, final false
inline bool get_DistanceFromSurfaceUseCurve() ;

/// @brief Method get_HasDistanceFromEdge, addr 0x18257c050, size 0x30, virtual false, abstract: false, final false
inline bool get_HasDistanceFromEdge() ;

/// @brief Method get_HasDistanceFromSurface, addr 0x18257c080, size 0x30, virtual false, abstract: false, final false
inline bool get_HasDistanceFromSurface() ;

/// @brief Method get_HasOnAboveWater, addr 0x18257c0b0, size 0x30, virtual false, abstract: false, final false
inline bool get_HasOnAboveWater() ;

/// @brief Method get_HasOnBelowWater, addr 0x18257c0e0, size 0x30, virtual false, abstract: false, final false
inline bool get_HasOnBelowWater() ;

/// @brief Method get_Layer, addr 0x18039fc60, size 0x10, virtual false, abstract: false, final false
inline ::WaveHarmonic::Crest::CollisionLayer get_Layer() ;

/// @brief Method get_MinimumWavelength, addr 0x18046fad0, size 0x10, virtual false, abstract: false, final false
inline float_t get_MinimumWavelength() ;

/// @brief Method get_OnAboveWater, addr 0x1803459d0, size 0x10, virtual false, abstract: false, final false
inline ::System::Action* get_OnAboveWater() ;

/// @brief Method get_OnBelowWater, addr 0x180474bf0, size 0x10, virtual false, abstract: false, final false
inline ::System::Action* get_OnBelowWater() ;

/// @brief Method get_OnLateUpdateMethod, addr 0x18257c110, size 0x40, virtual true, abstract: false, final false
inline ::System::Action_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>>* get_OnLateUpdateMethod() ;

/// @brief Method get_OnUpdateMethod, addr 0x18257c150, size 0x40, virtual true, abstract: false, final false
inline ::System::Action_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>>* get_OnUpdateMethod() ;

/// @brief Method get_Source, addr 0x1803d7410, size 0x10, virtual false, abstract: false, final false
inline ::WaveHarmonic::Crest::QuerySource get_Source() ;

/// @brief Method get_Viewer, addr 0x1802e75e0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Camera> get_Viewer() ;

/// @brief Method set_DistanceFromEdge, addr 0x1813fdbb0, size 0x20, virtual false, abstract: false, final false
inline void set_DistanceFromEdge(::System::Action_1<float_t>*  value) ;

/// @brief Method set_DistanceFromEdgeCurve, addr 0x1803e1880, size 0x20, virtual false, abstract: false, final false
inline void set_DistanceFromEdgeCurve(::UnityEngine::AnimationCurve*  value) ;

/// @brief Method set_DistanceFromEdgeMaximum, addr 0x1804a5a60, size 0x10, virtual false, abstract: false, final false
inline void set_DistanceFromEdgeMaximum(float_t  value) ;

/// @brief Method set_DistanceFromEdgeSigned, addr 0x1813bddf0, size 0x1ac0, virtual false, abstract: false, final false
inline void set_DistanceFromEdgeSigned(bool  value) ;

/// @brief Method set_DistanceFromEdgeUseCurve, addr 0x1817d6350, size 0x10, virtual false, abstract: false, final false
inline void set_DistanceFromEdgeUseCurve(bool  value) ;

/// @brief Method set_DistanceFromSurface, addr 0x1813fdc30, size 0x20, virtual false, abstract: false, final false
inline void set_DistanceFromSurface(::System::Action_1<float_t>*  value) ;

/// @brief Method set_DistanceFromSurfaceCurve, addr 0x1803f5420, size 0x10, virtual false, abstract: false, final false
inline void set_DistanceFromSurfaceCurve(::UnityEngine::AnimationCurve*  value) ;

/// @brief Method set_DistanceFromSurfaceMaximum, addr 0x180474c90, size 0x10, virtual false, abstract: false, final false
inline void set_DistanceFromSurfaceMaximum(float_t  value) ;

/// @brief Method set_DistanceFromSurfaceSigned, addr 0x180452bb0, size 0x10, virtual false, abstract: false, final false
inline void set_DistanceFromSurfaceSigned(bool  value) ;

/// @brief Method set_DistanceFromSurfaceUseCurve, addr 0x180c2bc10, size 0x31e0, virtual false, abstract: false, final false
inline void set_DistanceFromSurfaceUseCurve(bool  value) ;

/// @brief Method set_Layer, addr 0x1804f67b0, size 0x10, virtual false, abstract: false, final false
inline void set_Layer(::WaveHarmonic::Crest::CollisionLayer  value) ;

/// @brief Method set_MinimumWavelength, addr 0x18046fb10, size 0x10, virtual false, abstract: false, final false
inline void set_MinimumWavelength(float_t  value) ;

/// @brief Method set_OnAboveWater, addr 0x180352c10, size 0x20, virtual false, abstract: false, final false
inline void set_OnAboveWater(::System::Action*  value) ;

/// @brief Method set_OnBelowWater, addr 0x180474ca0, size 0x20, virtual false, abstract: false, final false
inline void set_OnBelowWater(::System::Action*  value) ;

/// @brief Method set_Source, addr 0x1803d75f0, size 0x10, virtual false, abstract: false, final false
inline void set_Source(::WaveHarmonic::Crest::QuerySource  value) ;

/// @brief Method set_Viewer, addr 0x1802f8080, size 0x10, virtual false, abstract: false, final false
inline void set_Viewer(::UnityEngine::Camera*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr QueryEvents() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "QueryEvents", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
QueryEvents(QueryEvents && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "QueryEvents", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
QueryEvents(QueryEvents const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16620};

/// @brief Field _Source, offset: 0x50, size: 0x4, def value: None
 ::WaveHarmonic::Crest::QuerySource  ____Source;

/// @brief Field _Viewer, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  ____Viewer;

/// @brief Field _Layer, offset: 0x60, size: 0x4, def value: None
 ::WaveHarmonic::Crest::CollisionLayer  ____Layer;

/// @brief Field _MinimumWavelength, offset: 0x64, size: 0x4, def value: None
 float_t  ____MinimumWavelength;

/// @brief Field _DistanceFromSurfaceSigned, offset: 0x68, size: 0x1, def value: None
 bool  ____DistanceFromSurfaceSigned;

/// @brief Field _DistanceFromSurfaceMaximum, offset: 0x6c, size: 0x4, def value: None
 float_t  ____DistanceFromSurfaceMaximum;

/// @brief Field _DistanceFromSurfaceUseCurve, offset: 0x70, size: 0x1, def value: None
 bool  ____DistanceFromSurfaceUseCurve;

/// @brief Field _DistanceFromSurfaceCurve, offset: 0x78, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____DistanceFromSurfaceCurve;

/// @brief Field _DistanceFromEdgeSigned, offset: 0x80, size: 0x1, def value: None
 bool  ____DistanceFromEdgeSigned;

/// @brief Field _DistanceFromEdgeMaximum, offset: 0x84, size: 0x4, def value: None
 float_t  ____DistanceFromEdgeMaximum;

/// @brief Field _DistanceFromEdgeUseCurve, offset: 0x88, size: 0x1, def value: None
 bool  ____DistanceFromEdgeUseCurve;

/// @brief Field _DistanceFromEdgeCurve, offset: 0x90, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____DistanceFromEdgeCurve;

/// @brief Field _OnBelowWater, offset: 0x98, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____OnBelowWater;

/// @brief Field _OnAboveWater, offset: 0xa0, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____OnAboveWater;

/// @brief Field _DistanceFromSurface, offset: 0xa8, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<float_t>*  ____DistanceFromSurface;

/// @brief Field _DistanceFromEdge, offset: 0xb0, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<float_t>*  ____DistanceFromEdge;

/// @brief Field _IsAboveSurface, offset: 0xb8, size: 0x1, def value: None
 bool  ____IsAboveSurface;

/// @brief Field _IsFirstUpdate, offset: 0xb9, size: 0x1, def value: None
 bool  ____IsFirstUpdate;

/// @brief Field _SampleHeightHelper, offset: 0xc0, size: 0x8, def value: None
 ::WaveHarmonic::Crest::SampleCollisionHelper*  ____SampleHeightHelper;

/// @brief Field _SampleDepthHelper, offset: 0xc8, size: 0x8, def value: None
 ::WaveHarmonic::Crest::SampleDepthHelper*  ____SampleDepthHelper;

/// @brief Field <DistanceFromEdge>k__BackingField, offset: 0xd0, size: 0x8, def value: None
 ::System::Action_1<float_t>*  ____DistanceFromEdge_k__BackingField;

/// @brief Field <DistanceFromSurface>k__BackingField, offset: 0xd8, size: 0x8, def value: None
 ::System::Action_1<float_t>*  ____DistanceFromSurface_k__BackingField;

/// @brief Field <OnAboveWater>k__BackingField, offset: 0xe0, size: 0x8, def value: None
 ::System::Action*  ____OnAboveWater_k__BackingField;

/// @brief Field <OnBelowWater>k__BackingField, offset: 0xe8, size: 0x8, def value: None
 ::System::Action*  ____OnBelowWater_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::QueryEvents, ____Source) == 0x50, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::QueryEvents, ____Viewer) == 0x58, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::QueryEvents, ____Layer) == 0x60, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::QueryEvents, ____MinimumWavelength) == 0x64, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::QueryEvents, ____DistanceFromSurfaceSigned) == 0x68, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::QueryEvents, ____DistanceFromSurfaceMaximum) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::QueryEvents, ____DistanceFromSurfaceUseCurve) == 0x70, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::QueryEvents, ____DistanceFromSurfaceCurve) == 0x78, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::QueryEvents, ____DistanceFromEdgeSigned) == 0x80, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::QueryEvents, ____DistanceFromEdgeMaximum) == 0x84, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::QueryEvents, ____DistanceFromEdgeUseCurve) == 0x88, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::QueryEvents, ____DistanceFromEdgeCurve) == 0x90, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::QueryEvents, ____OnBelowWater) == 0x98, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::QueryEvents, ____OnAboveWater) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::QueryEvents, ____DistanceFromSurface) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::QueryEvents, ____DistanceFromEdge) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::QueryEvents, ____IsAboveSurface) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::QueryEvents, ____IsFirstUpdate) == 0xb9, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::QueryEvents, ____SampleHeightHelper) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::QueryEvents, ____SampleDepthHelper) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::QueryEvents, ____DistanceFromEdge_k__BackingField) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::QueryEvents, ____DistanceFromSurface_k__BackingField) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::QueryEvents, ____OnAboveWater_k__BackingField) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::QueryEvents, ____OnBelowWater_k__BackingField) == 0xe8, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::QueryEvents) == 0xf0, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
