#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/FloatingObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "WaveHarmonic/Crest/Internal/zzzz__ManagedBehaviour_1_def.hpp"
#include "WaveHarmonic/Crest/zzzz__CollisionLayer_def.hpp"
#include "WaveHarmonic/Crest/zzzz__FloatingObjectModel_def.hpp"
#include "WaveHarmonic/Crest/zzzz__FloatingObjectProbe_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FloatingObject)
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
struct Vector3;
}
namespace WaveHarmonic::Crest {
struct CollisionLayer;
}
namespace WaveHarmonic::Crest {
struct FloatingObjectModel;
}
namespace WaveHarmonic::Crest {
struct FloatingObjectProbe;
}
namespace WaveHarmonic::Crest {
class FloatingObject_DebugFields;
}
namespace WaveHarmonic::Crest {
class SampleCollisionHelper;
}
namespace WaveHarmonic::Crest {
class SampleFlowHelper;
}
namespace WaveHarmonic::Crest {
class WaterRenderer;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
class FloatingObject;
}
namespace WaveHarmonic::Crest {
class FloatingObject_DebugFields;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::FloatingObject*);
MARK_REF_T(::WaveHarmonic::Crest::FloatingObject_DebugFields*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::FloatingObject*, "WaveHarmonic.Crest", "FloatingObject");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::FloatingObject_DebugFields*, "WaveHarmonic.Crest", "FloatingObject/DebugFields");
// Dependencies System.Object
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.FloatingObject/DebugFields
class CORDL_TYPE FloatingObject_DebugFields : public ::System::Object {
public:
// Declarations
/// @brief Field _DrawQueries, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__DrawQueries, put=__cordl_internal_set__DrawQueries)) bool  _DrawQueries;

static inline ::WaveHarmonic::Crest::FloatingObject_DebugFields* New_ctor() ;

constexpr bool const& __cordl_internal_get__DrawQueries() const;

constexpr bool& __cordl_internal_get__DrawQueries() ;

constexpr void __cordl_internal_set__DrawQueries(bool  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FloatingObject_DebugFields() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FloatingObject_DebugFields", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FloatingObject_DebugFields(FloatingObject_DebugFields && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FloatingObject_DebugFields", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FloatingObject_DebugFields(FloatingObject_DebugFields const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16643};

/// @brief Field _DrawQueries, offset: 0x10, size: 0x1, def value: None
 bool  ____DrawQueries;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::FloatingObject_DebugFields, ____DrawQueries) == 0x10, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::FloatingObject_DebugFields) == 0x18, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies Unity.Profiling.ProfilerMarker, UnityEngine.Vector3, WaveHarmonic.Crest.CollisionLayer, WaveHarmonic.Crest.FloatingObjectModel, WaveHarmonic.Crest.FloatingObjectProbe, WaveHarmonic.Crest.Internal.ManagedBehaviour`1<T>
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.FloatingObject
class CORDL_TYPE FloatingObject : public ::WaveHarmonic::Crest::Internal::ManagedBehaviour_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>> {
public:
// Declarations
using DebugFields = ::WaveHarmonic::Crest::FloatingObject_DebugFields;

 __declspec(property(get=get_AccelerateDownhill, put=set_AccelerateDownhill)) float_t  AccelerateDownhill;

 __declspec(property(get=get_Advanced)) bool  Advanced;

 __declspec(property(get=get_AngularDrag, put=set_AngularDrag)) float_t  AngularDrag;

 __declspec(property(get=get_BuoyancyForceStrength, put=set_BuoyancyForceStrength)) float_t  BuoyancyForceStrength;

 __declspec(property(get=get_BuoyancyTorqueStrength, put=set_BuoyancyTorqueStrength)) float_t  BuoyancyTorqueStrength;

 __declspec(property(get=get_CenterToBottomOffset, put=set_CenterToBottomOffset)) float_t  CenterToBottomOffset;

 __declspec(property(get=get_Drag, put=set_Drag)) ::UnityEngine::Vector3  Drag;

 __declspec(property(get=get_ForceHeightOffset, put=set_ForceHeightOffset)) float_t  ForceHeightOffset;

 __declspec(property(get=get_InWater, put=set_InWater)) bool  InWater;

 __declspec(property(get=get_Layer, put=set_Layer)) ::WaveHarmonic::Crest::CollisionLayer  Layer;

 __declspec(property(get=get_MaximumBuoyancyForce, put=set_MaximumBuoyancyForce)) float_t  MaximumBuoyancyForce;

 __declspec(property(get=get_Model, put=set_Model)) ::WaveHarmonic::Crest::FloatingObjectModel  Model;

 __declspec(property(get=get_ObjectLength, put=set_ObjectLength)) float_t  ObjectLength;

 __declspec(property(get=get_ObjectWidth, put=set_ObjectWidth)) float_t  ObjectWidth;

 __declspec(property(get=get_OnFixedUpdateMethod)) ::System::Action_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>>*  OnFixedUpdateMethod;

 __declspec(property(get=get_Probes, put=set_Probes)) ::ArrayW<::WaveHarmonic::Crest::FloatingObjectProbe>  Probes;

 __declspec(property(get=get_RigidBody, put=set_RigidBody)) ::UnityW<::UnityEngine::Rigidbody>  RigidBody;

 __declspec(property(get=get_UseObjectLength, put=set_UseObjectLength)) bool  UseObjectLength;

/// @brief Field _AccelerateDownhill, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get__AccelerateDownhill, put=__cordl_internal_set__AccelerateDownhill)) float_t  _AccelerateDownhill;

/// @brief Field _AngularDrag, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get__AngularDrag, put=__cordl_internal_set__AngularDrag)) float_t  _AngularDrag;

/// @brief Field _BuoyancyForceStrength, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__BuoyancyForceStrength, put=__cordl_internal_set__BuoyancyForceStrength)) float_t  _BuoyancyForceStrength;

/// @brief Field _BuoyancyTorqueStrength, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get__BuoyancyTorqueStrength, put=__cordl_internal_set__BuoyancyTorqueStrength)) float_t  _BuoyancyTorqueStrength;

/// @brief Field _CenterToBottomOffset, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get__CenterToBottomOffset, put=__cordl_internal_set__CenterToBottomOffset)) float_t  _CenterToBottomOffset;

/// @brief Field _Debug, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__Debug, put=__cordl_internal_set__Debug)) ::WaveHarmonic::Crest::FloatingObject_DebugFields*  _Debug;

/// @brief Field _Drag, offset 0x80, size 0xc 
 __declspec(property(get=__cordl_internal_get__Drag, put=__cordl_internal_set__Drag)) ::UnityEngine::Vector3  _Drag;

/// @brief Field _ForceHeightOffset, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get__ForceHeightOffset, put=__cordl_internal_set__ForceHeightOffset)) float_t  _ForceHeightOffset;

/// @brief Field <InWater>k__BackingField, offset 0xa8, size 0x1 
 __declspec(property(get=__cordl_internal_get__InWater_k__BackingField, put=__cordl_internal_set__InWater_k__BackingField)) bool  _InWater_k__BackingField;

/// @brief Field _Layer, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get__Layer, put=__cordl_internal_set__Layer)) ::WaveHarmonic::Crest::CollisionLayer  _Layer;

/// @brief Field _MaximumBuoyancyForce, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get__MaximumBuoyancyForce, put=__cordl_internal_set__MaximumBuoyancyForce)) float_t  _MaximumBuoyancyForce;

/// @brief Field _Model, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__Model, put=__cordl_internal_set__Model)) ::WaveHarmonic::Crest::FloatingObjectModel  _Model;

/// @brief Field _ObjectLength, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get__ObjectLength, put=__cordl_internal_set__ObjectLength)) float_t  _ObjectLength;

/// @brief Field _ObjectWidth, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get__ObjectWidth, put=__cordl_internal_set__ObjectWidth)) float_t  _ObjectWidth;

/// @brief Field _Probe, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get__Probe, put=__cordl_internal_set__Probe)) ::ArrayW<::WaveHarmonic::Crest::FloatingObjectProbe>  _Probe;

/// @brief Field _Probes, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__Probes, put=__cordl_internal_set__Probes)) ::ArrayW<::WaveHarmonic::Crest::FloatingObjectProbe>  _Probes;

/// @brief Field _QueryPoints, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get__QueryPoints, put=__cordl_internal_set__QueryPoints)) ::ArrayW<::UnityEngine::Vector3>  _QueryPoints;

/// @brief Field _QueryResultDisplacements, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get__QueryResultDisplacements, put=__cordl_internal_set__QueryResultDisplacements)) ::ArrayW<::UnityEngine::Vector3>  _QueryResultDisplacements;

/// @brief Field _QueryResultNormal, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get__QueryResultNormal, put=__cordl_internal_set__QueryResultNormal)) ::ArrayW<::UnityEngine::Vector3>  _QueryResultNormal;

/// @brief Field _QueryResultVelocities, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get__QueryResultVelocities, put=__cordl_internal_set__QueryResultVelocities)) ::ArrayW<::UnityEngine::Vector3>  _QueryResultVelocities;

/// @brief Field _RigidBody, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__RigidBody, put=__cordl_internal_set__RigidBody)) ::UnityW<::UnityEngine::Rigidbody>  _RigidBody;

/// @brief Field _SampleFlowHelper, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get__SampleFlowHelper, put=__cordl_internal_set__SampleFlowHelper)) ::WaveHarmonic::Crest::SampleFlowHelper*  _SampleFlowHelper;

/// @brief Field _SampleHeightHelper, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__SampleHeightHelper, put=__cordl_internal_set__SampleHeightHelper)) ::WaveHarmonic::Crest::SampleCollisionHelper*  _SampleHeightHelper;

/// @brief Field _TotalWeight, offset 0xe8, size 0x4 
 __declspec(property(get=__cordl_internal_get__TotalWeight, put=__cordl_internal_set__TotalWeight)) float_t  _TotalWeight;

/// @brief Field _UseObjectLength, offset 0x98, size 0x1 
 __declspec(property(get=__cordl_internal_get__UseObjectLength, put=__cordl_internal_set__UseObjectLength)) bool  _UseObjectLength;

/// @brief Field s_FixedUpdateMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_FixedUpdateMarker, put=setStaticF_s_FixedUpdateMarker)) ::Unity::Profiling::ProfilerMarker  s_FixedUpdateMarker;

static inline ::WaveHarmonic::Crest::FloatingObject* New_ctor() ;

/// @brief Method OnFixedUpdate, addr 0x18258bc80, size 0x1570, virtual false, abstract: false, final false
inline void OnFixedUpdate(::WaveHarmonic::Crest::WaterRenderer*  water) ;

/// @brief Method OnStart, addr 0x18258d1f0, size 0x120, virtual true, abstract: false, final false
inline void OnStart() ;

constexpr float_t const& __cordl_internal_get__AccelerateDownhill() const;

constexpr float_t& __cordl_internal_get__AccelerateDownhill() ;

constexpr float_t const& __cordl_internal_get__AngularDrag() const;

constexpr float_t& __cordl_internal_get__AngularDrag() ;

constexpr float_t const& __cordl_internal_get__BuoyancyForceStrength() const;

constexpr float_t& __cordl_internal_get__BuoyancyForceStrength() ;

constexpr float_t const& __cordl_internal_get__BuoyancyTorqueStrength() const;

constexpr float_t& __cordl_internal_get__BuoyancyTorqueStrength() ;

constexpr float_t const& __cordl_internal_get__CenterToBottomOffset() const;

constexpr float_t& __cordl_internal_get__CenterToBottomOffset() ;

constexpr ::WaveHarmonic::Crest::FloatingObject_DebugFields* const& __cordl_internal_get__Debug() const;

constexpr ::WaveHarmonic::Crest::FloatingObject_DebugFields*& __cordl_internal_get__Debug() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__Drag() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__Drag() ;

constexpr float_t const& __cordl_internal_get__ForceHeightOffset() const;

constexpr float_t& __cordl_internal_get__ForceHeightOffset() ;

constexpr bool const& __cordl_internal_get__InWater_k__BackingField() const;

constexpr bool& __cordl_internal_get__InWater_k__BackingField() ;

constexpr ::WaveHarmonic::Crest::CollisionLayer const& __cordl_internal_get__Layer() const;

constexpr ::WaveHarmonic::Crest::CollisionLayer& __cordl_internal_get__Layer() ;

constexpr float_t const& __cordl_internal_get__MaximumBuoyancyForce() const;

constexpr float_t& __cordl_internal_get__MaximumBuoyancyForce() ;

constexpr ::WaveHarmonic::Crest::FloatingObjectModel const& __cordl_internal_get__Model() const;

constexpr ::WaveHarmonic::Crest::FloatingObjectModel& __cordl_internal_get__Model() ;

constexpr float_t const& __cordl_internal_get__ObjectLength() const;

constexpr float_t& __cordl_internal_get__ObjectLength() ;

constexpr float_t const& __cordl_internal_get__ObjectWidth() const;

constexpr float_t& __cordl_internal_get__ObjectWidth() ;

constexpr ::ArrayW<::WaveHarmonic::Crest::FloatingObjectProbe> const& __cordl_internal_get__Probe() const;

constexpr ::ArrayW<::WaveHarmonic::Crest::FloatingObjectProbe>& __cordl_internal_get__Probe() ;

constexpr ::ArrayW<::WaveHarmonic::Crest::FloatingObjectProbe> const& __cordl_internal_get__Probes() const;

constexpr ::ArrayW<::WaveHarmonic::Crest::FloatingObjectProbe>& __cordl_internal_get__Probes() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get__QueryPoints() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get__QueryPoints() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get__QueryResultDisplacements() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get__QueryResultDisplacements() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get__QueryResultNormal() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get__QueryResultNormal() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get__QueryResultVelocities() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get__QueryResultVelocities() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get__RigidBody() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get__RigidBody() ;

constexpr ::WaveHarmonic::Crest::SampleFlowHelper* const& __cordl_internal_get__SampleFlowHelper() const;

constexpr ::WaveHarmonic::Crest::SampleFlowHelper*& __cordl_internal_get__SampleFlowHelper() ;

constexpr ::WaveHarmonic::Crest::SampleCollisionHelper* const& __cordl_internal_get__SampleHeightHelper() const;

constexpr ::WaveHarmonic::Crest::SampleCollisionHelper*& __cordl_internal_get__SampleHeightHelper() ;

constexpr float_t const& __cordl_internal_get__TotalWeight() const;

constexpr float_t& __cordl_internal_get__TotalWeight() ;

constexpr bool const& __cordl_internal_get__UseObjectLength() const;

constexpr bool& __cordl_internal_get__UseObjectLength() ;

constexpr void __cordl_internal_set__AccelerateDownhill(float_t  value) ;

constexpr void __cordl_internal_set__AngularDrag(float_t  value) ;

constexpr void __cordl_internal_set__BuoyancyForceStrength(float_t  value) ;

constexpr void __cordl_internal_set__BuoyancyTorqueStrength(float_t  value) ;

constexpr void __cordl_internal_set__CenterToBottomOffset(float_t  value) ;

constexpr void __cordl_internal_set__Debug(::WaveHarmonic::Crest::FloatingObject_DebugFields*  value) ;

constexpr void __cordl_internal_set__Drag(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__ForceHeightOffset(float_t  value) ;

constexpr void __cordl_internal_set__InWater_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__Layer(::WaveHarmonic::Crest::CollisionLayer  value) ;

constexpr void __cordl_internal_set__MaximumBuoyancyForce(float_t  value) ;

constexpr void __cordl_internal_set__Model(::WaveHarmonic::Crest::FloatingObjectModel  value) ;

constexpr void __cordl_internal_set__ObjectLength(float_t  value) ;

constexpr void __cordl_internal_set__ObjectWidth(float_t  value) ;

constexpr void __cordl_internal_set__Probe(::ArrayW<::WaveHarmonic::Crest::FloatingObjectProbe>  value) ;

constexpr void __cordl_internal_set__Probes(::ArrayW<::WaveHarmonic::Crest::FloatingObjectProbe>  value) ;

constexpr void __cordl_internal_set__QueryPoints(::ArrayW<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set__QueryResultDisplacements(::ArrayW<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set__QueryResultNormal(::ArrayW<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set__QueryResultVelocities(::ArrayW<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set__RigidBody(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set__SampleFlowHelper(::WaveHarmonic::Crest::SampleFlowHelper*  value) ;

constexpr void __cordl_internal_set__SampleHeightHelper(::WaveHarmonic::Crest::SampleCollisionHelper*  value) ;

constexpr void __cordl_internal_set__TotalWeight(float_t  value) ;

constexpr void __cordl_internal_set__UseObjectLength(bool  value) ;

/// @brief Method .ctor, addr 0x18258d350, size 0x170, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_FixedUpdateMarker() ;

/// @brief Method get_AccelerateDownhill, addr 0x1802e58b0, size 0x10, virtual false, abstract: false, final false
inline float_t get_AccelerateDownhill() ;

/// @brief Method get_Advanced, addr 0x18258d4c0, size 0x10, virtual false, abstract: false, final false
inline bool get_Advanced() ;

/// @brief Method get_AngularDrag, addr 0x180483510, size 0x10, virtual false, abstract: false, final false
inline float_t get_AngularDrag() ;

/// @brief Method get_BuoyancyForceStrength, addr 0x18046fae0, size 0x10, virtual false, abstract: false, final false
inline float_t get_BuoyancyForceStrength() ;

/// @brief Method get_BuoyancyTorqueStrength, addr 0x18046fad0, size 0x10, virtual false, abstract: false, final false
inline float_t get_BuoyancyTorqueStrength() ;

/// @brief Method get_CenterToBottomOffset, addr 0x180474bd0, size 0x10, virtual false, abstract: false, final false
inline float_t get_CenterToBottomOffset() ;

/// @brief Method get_Drag, addr 0x18258d4d0, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_Drag() ;

/// @brief Method get_ForceHeightOffset, addr 0x1813ec940, size 0x10, virtual false, abstract: false, final false
inline float_t get_ForceHeightOffset() ;

/// @brief Method get_InWater, addr 0x1803b2c80, size 0x10, virtual false, abstract: false, final false
inline bool get_InWater() ;

/// @brief Method get_Layer, addr 0x180503b40, size 0x10, virtual false, abstract: false, final false
inline ::WaveHarmonic::Crest::CollisionLayer get_Layer() ;

/// @brief Method get_MaximumBuoyancyForce, addr 0x18034f9d0, size 0x10, virtual false, abstract: false, final false
inline float_t get_MaximumBuoyancyForce() ;

/// @brief Method get_Model, addr 0x1802e0b20, size 0x10, virtual false, abstract: false, final false
inline ::WaveHarmonic::Crest::FloatingObjectModel get_Model() ;

/// @brief Method get_ObjectLength, addr 0x181520640, size 0x10, virtual false, abstract: false, final false
inline float_t get_ObjectLength() ;

/// @brief Method get_ObjectWidth, addr 0x1803e0b10, size 0x10, virtual false, abstract: false, final false
inline float_t get_ObjectWidth() ;

/// @brief Method get_OnFixedUpdateMethod, addr 0x18258d4f0, size 0x40, virtual true, abstract: false, final false
inline ::System::Action_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>>* get_OnFixedUpdateMethod() ;

/// @brief Method get_Probes, addr 0x1803a74e0, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<::WaveHarmonic::Crest::FloatingObjectProbe> get_Probes() ;

/// @brief Method get_RigidBody, addr 0x1802e0b30, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Rigidbody> get_RigidBody() ;

/// @brief Method get_UseObjectLength, addr 0x180310e70, size 0x10, virtual false, abstract: false, final false
inline bool get_UseObjectLength() ;

static inline void setStaticF_s_FixedUpdateMarker(::Unity::Profiling::ProfilerMarker  value) ;

/// @brief Method set_AccelerateDownhill, addr 0x180474c70, size 0x10, virtual false, abstract: false, final false
inline void set_AccelerateDownhill(float_t  value) ;

/// @brief Method set_AngularDrag, addr 0x180eb78a0, size 0x10, virtual false, abstract: false, final false
inline void set_AngularDrag(float_t  value) ;

/// @brief Method set_BuoyancyForceStrength, addr 0x18046fb20, size 0x10, virtual false, abstract: false, final false
inline void set_BuoyancyForceStrength(float_t  value) ;

/// @brief Method set_BuoyancyTorqueStrength, addr 0x18046fb10, size 0x10, virtual false, abstract: false, final false
inline void set_BuoyancyTorqueStrength(float_t  value) ;

/// @brief Method set_CenterToBottomOffset, addr 0x180474c90, size 0x10, virtual false, abstract: false, final false
inline void set_CenterToBottomOffset(float_t  value) ;

/// @brief Method set_Drag, addr 0x18258d530, size 0x20, virtual false, abstract: false, final false
inline void set_Drag(::UnityEngine::Vector3  value) ;

/// @brief Method set_ForceHeightOffset, addr 0x18258d550, size 0x10, virtual false, abstract: false, final false
inline void set_ForceHeightOffset(float_t  value) ;

/// @brief Method set_InWater, addr 0x1803b30e0, size 0x10, virtual false, abstract: false, final false
inline void set_InWater(bool  value) ;

/// @brief Method set_Layer, addr 0x180503ba0, size 0x10, virtual false, abstract: false, final false
inline void set_Layer(::WaveHarmonic::Crest::CollisionLayer  value) ;

/// @brief Method set_MaximumBuoyancyForce, addr 0x180474c80, size 0x10, virtual false, abstract: false, final false
inline void set_MaximumBuoyancyForce(float_t  value) ;

/// @brief Method set_Model, addr 0x1802e0d10, size 0x10, virtual false, abstract: false, final false
inline void set_Model(::WaveHarmonic::Crest::FloatingObjectModel  value) ;

/// @brief Method set_ObjectLength, addr 0x18258d560, size 0x10, virtual false, abstract: false, final false
inline void set_ObjectLength(float_t  value) ;

/// @brief Method set_ObjectWidth, addr 0x1803e0b60, size 0x10, virtual false, abstract: false, final false
inline void set_ObjectWidth(float_t  value) ;

/// @brief Method set_Probes, addr 0x1803f5420, size 0x10, virtual false, abstract: false, final false
inline void set_Probes(::ArrayW<::WaveHarmonic::Crest::FloatingObjectProbe>  value) ;

/// @brief Method set_RigidBody, addr 0x180308de0, size 0x10, virtual false, abstract: false, final false
inline void set_RigidBody(::UnityEngine::Rigidbody*  value) ;

/// @brief Method set_UseObjectLength, addr 0x1803b3350, size 0x10, virtual false, abstract: false, final false
inline void set_UseObjectLength(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FloatingObject() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FloatingObject", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FloatingObject(FloatingObject && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FloatingObject", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FloatingObject(FloatingObject const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16644};

/// @brief Field k_FixedUpdateMarker offset 0xffffffff size 0x8
static constexpr ::ConstString  k_FixedUpdateMarker{u"Crest.FloatingObject.FixedUpdate"};

/// @brief Field k_WaterDensity offset 0xffffffff size 0x4
static constexpr float_t  k_WaterDensity{static_cast<float_t>(1000.0f)};

/// @brief Field _RigidBody, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ____RigidBody;

/// @brief Field _Model, offset: 0x58, size: 0x4, def value: None
 ::WaveHarmonic::Crest::FloatingObjectModel  ____Model;

/// @brief Field _Layer, offset: 0x5c, size: 0x4, def value: None
 ::WaveHarmonic::Crest::CollisionLayer  ____Layer;

/// @brief Field _BuoyancyForceStrength, offset: 0x60, size: 0x4, def value: None
 float_t  ____BuoyancyForceStrength;

/// @brief Field _BuoyancyTorqueStrength, offset: 0x64, size: 0x4, def value: None
 float_t  ____BuoyancyTorqueStrength;

/// @brief Field _MaximumBuoyancyForce, offset: 0x68, size: 0x4, def value: None
 float_t  ____MaximumBuoyancyForce;

/// @brief Field _CenterToBottomOffset, offset: 0x6c, size: 0x4, def value: None
 float_t  ____CenterToBottomOffset;

/// @brief Field _AccelerateDownhill, offset: 0x70, size: 0x4, def value: None
 float_t  ____AccelerateDownhill;

/// @brief Field _Probes, offset: 0x78, size: 0x8, def value: None
 ::ArrayW<::WaveHarmonic::Crest::FloatingObjectProbe>  ____Probes;

/// @brief Field _Drag, offset: 0x80, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____Drag;

/// @brief Field _AngularDrag, offset: 0x8c, size: 0x4, def value: None
 float_t  ____AngularDrag;

/// @brief Field _ForceHeightOffset, offset: 0x90, size: 0x4, def value: None
 float_t  ____ForceHeightOffset;

/// @brief Field _ObjectWidth, offset: 0x94, size: 0x4, def value: None
 float_t  ____ObjectWidth;

/// @brief Field _UseObjectLength, offset: 0x98, size: 0x1, def value: None
 bool  ____UseObjectLength;

/// @brief Field _ObjectLength, offset: 0x9c, size: 0x4, def value: None
 float_t  ____ObjectLength;

/// @brief Field _Debug, offset: 0xa0, size: 0x8, def value: None
 ::WaveHarmonic::Crest::FloatingObject_DebugFields*  ____Debug;

/// @brief Field <InWater>k__BackingField, offset: 0xa8, size: 0x1, def value: None
 bool  ____InWater_k__BackingField;

/// @brief Field _SampleHeightHelper, offset: 0xb0, size: 0x8, def value: None
 ::WaveHarmonic::Crest::SampleCollisionHelper*  ____SampleHeightHelper;

/// @brief Field _SampleFlowHelper, offset: 0xb8, size: 0x8, def value: None
 ::WaveHarmonic::Crest::SampleFlowHelper*  ____SampleFlowHelper;

/// @brief Field _QueryPoints, offset: 0xc0, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ____QueryPoints;

/// @brief Field _QueryResultDisplacements, offset: 0xc8, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ____QueryResultDisplacements;

/// @brief Field _QueryResultVelocities, offset: 0xd0, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ____QueryResultVelocities;

/// @brief Field _QueryResultNormal, offset: 0xd8, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ____QueryResultNormal;

/// @brief Field _Probe, offset: 0xe0, size: 0x8, def value: None
 ::ArrayW<::WaveHarmonic::Crest::FloatingObjectProbe>  ____Probe;

/// @brief Field _TotalWeight, offset: 0xe8, size: 0x4, def value: None
 float_t  ____TotalWeight;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::FloatingObject, ____RigidBody) == 0x50, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::FloatingObject, ____Model) == 0x58, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::FloatingObject, ____Layer) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::FloatingObject, ____BuoyancyForceStrength) == 0x60, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::FloatingObject, ____BuoyancyTorqueStrength) == 0x64, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::FloatingObject, ____MaximumBuoyancyForce) == 0x68, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::FloatingObject, ____CenterToBottomOffset) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::FloatingObject, ____AccelerateDownhill) == 0x70, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::FloatingObject, ____Probes) == 0x78, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::FloatingObject, ____Drag) == 0x80, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::FloatingObject, ____AngularDrag) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::FloatingObject, ____ForceHeightOffset) == 0x90, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::FloatingObject, ____ObjectWidth) == 0x94, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::FloatingObject, ____UseObjectLength) == 0x98, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::FloatingObject, ____ObjectLength) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::FloatingObject, ____Debug) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::FloatingObject, ____InWater_k__BackingField) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::FloatingObject, ____SampleHeightHelper) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::FloatingObject, ____SampleFlowHelper) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::FloatingObject, ____QueryPoints) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::FloatingObject, ____QueryResultDisplacements) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::FloatingObject, ____QueryResultVelocities) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::FloatingObject, ____QueryResultNormal) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::FloatingObject, ____Probe) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::FloatingObject, ____TotalWeight) == 0xe8, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::FloatingObject) == 0xf0, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
