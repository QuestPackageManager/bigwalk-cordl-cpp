#pragma once
// IWYU pragma private; include "GlobalNamespace/TrainCar.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TrainCar)
namespace GlobalNamespace {
struct NetworkedTrain_CullMode;
}
namespace GlobalNamespace {
class PlatformingBody;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Unity::Mathematics {
struct float3;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class TrainCar;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TrainCar*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TrainCar*, "", "TrainCar");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: TrainCar
class CORDL_TYPE TrainCar : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _colliders, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__colliders, put=__cordl_internal_set__colliders)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  _colliders;

 __declspec(property(get=get_colliders)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  colliders;

/// @brief Field cullState, offset 0x54, size 0x1 
 __declspec(property(get=__cordl_internal_get_cullState, put=__cordl_internal_set_cullState)) bool  cullState;

/// @brief Field gap, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_gap, put=__cordl_internal_set_gap)) float_t  gap;

/// @brief Field grip, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_grip, put=__cordl_internal_set_grip)) ::UnityW<::UnityEngine::Transform>  grip;

/// @brief Field mainBody, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_mainBody, put=__cordl_internal_set_mainBody)) ::UnityW<::UnityEngine::Rigidbody>  mainBody;

/// @brief Field platformingBody, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_platformingBody, put=__cordl_internal_set_platformingBody)) ::UnityW<::GlobalNamespace::PlatformingBody>  platformingBody;

/// @brief Field proxy, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_proxy, put=__cordl_internal_set_proxy)) ::UnityW<::UnityEngine::Transform>  proxy;

/// @brief Field useProxy, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_useProxy, put=__cordl_internal_set_useProxy)) bool  useProxy;

static inline ::GlobalNamespace::TrainCar* New_ctor() ;

/// @brief Method SetCullState, addr 0x180419ab0, size 0x350, virtual false, abstract: false, final false
static inline void SetCullState(::GlobalNamespace::TrainCar*  trainCar, bool  isCulled, ::GlobalNamespace::NetworkedTrain_CullMode  cullMode) ;

/// @brief Method UpdateCullState, addr 0x180419e00, size 0x190, virtual false, abstract: false, final false
static inline void UpdateCullState(::GlobalNamespace::TrainCar*  trainCar, ::Unity::Mathematics::float3  position, ::System::Collections::Generic::List_1<::Unity::Mathematics::float3>*  playerPositions, ::GlobalNamespace::NetworkedTrain_CullMode  cullMode) ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& __cordl_internal_get__colliders() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& __cordl_internal_get__colliders() ;

constexpr bool const& __cordl_internal_get_cullState() const;

constexpr bool& __cordl_internal_get_cullState() ;

constexpr float_t const& __cordl_internal_get_gap() const;

constexpr float_t& __cordl_internal_get_gap() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_grip() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_grip() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_mainBody() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_mainBody() ;

constexpr ::UnityW<::GlobalNamespace::PlatformingBody> const& __cordl_internal_get_platformingBody() const;

constexpr ::UnityW<::GlobalNamespace::PlatformingBody>& __cordl_internal_get_platformingBody() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_proxy() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_proxy() ;

constexpr bool const& __cordl_internal_get_useProxy() const;

constexpr bool& __cordl_internal_get_useProxy() ;

constexpr void __cordl_internal_set__colliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value) ;

constexpr void __cordl_internal_set_cullState(bool  value) ;

constexpr void __cordl_internal_set_gap(float_t  value) ;

constexpr void __cordl_internal_set_grip(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_mainBody(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_platformingBody(::UnityW<::GlobalNamespace::PlatformingBody>  value) ;

constexpr void __cordl_internal_set_proxy(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_useProxy(bool  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_colliders, addr 0x180419f90, size 0x100, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* get_colliders() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TrainCar() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TrainCar", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TrainCar(TrainCar && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TrainCar", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TrainCar(TrainCar const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5142};

/// @brief Field useProxy, offset: 0x20, size: 0x1, def value: None
 bool  ___useProxy;

/// @brief Field mainBody, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___mainBody;

/// @brief Field platformingBody, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlatformingBody>  ___platformingBody;

/// @brief Field proxy, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___proxy;

/// @brief Field grip, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___grip;

/// @brief Field _colliders, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  ____colliders;

/// @brief Field gap, offset: 0x50, size: 0x4, def value: None
 float_t  ___gap;

/// @brief Field cullState, offset: 0x54, size: 0x1, def value: None
 bool  ___cullState;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TrainCar, ___useProxy) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrainCar, ___mainBody) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrainCar, ___platformingBody) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrainCar, ___proxy) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrainCar, ___grip) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrainCar, ____colliders) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrainCar, ___gap) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrainCar, ___cullState) == 0x54, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TrainCar) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
