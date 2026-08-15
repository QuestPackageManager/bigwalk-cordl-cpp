#pragma once
// IWYU pragma private; include "Dissonance/Demo/TriggerVisualizer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Dissonance/zzzz__BaseCommsTrigger_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TriggerVisualizer)
namespace Dissonance::Demo {
class TriggerVisualizer___c;
}
namespace Dissonance {
class BaseCommsTrigger;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine {
class BoxCollider;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class SphereCollider;
}
// Forward declare root types
namespace Dissonance::Demo {
class TriggerVisualizer;
}
namespace Dissonance::Demo {
class TriggerVisualizer___c;
}
// Write type traits
MARK_REF_T(::Dissonance::Demo::TriggerVisualizer*);
MARK_REF_T(::Dissonance::Demo::TriggerVisualizer___c*);
DEFINE_IL2CPP_CLASS(::Dissonance::Demo::TriggerVisualizer*, "Dissonance.Demo", "TriggerVisualizer");
DEFINE_IL2CPP_CLASS(::Dissonance::Demo::TriggerVisualizer___c*, "Dissonance.Demo", "TriggerVisualizer/<>c");
// Dependencies System.Object
namespace Dissonance::Demo {
// Is value type: false
// CS Name: Dissonance.Demo.TriggerVisualizer/<>c
class CORDL_TYPE TriggerVisualizer___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Dissonance::Demo::TriggerVisualizer___c*  __9;

/// @brief Field <>9__7_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__7_0, put=setStaticF___9__7_0)) ::System::Func_2<::UnityW<::Dissonance::BaseCommsTrigger>,bool>*  __9__7_0;

/// @brief Field <>9__7_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__7_1, put=setStaticF___9__7_1)) ::System::Func_2<::UnityW<::Dissonance::BaseCommsTrigger>,bool>*  __9__7_1;

static inline ::Dissonance::Demo::TriggerVisualizer___c* New_ctor() ;

/// @brief Method <Update>b__7_0, addr 0x1805ed230, size 0x30, virtual false, abstract: false, final false
inline bool _Update_b__7_0(::Dissonance::BaseCommsTrigger*  t) ;

/// @brief Method <Update>b__7_1, addr 0x1805ed260, size 0x20, virtual false, abstract: false, final false
inline bool _Update_b__7_1(::Dissonance::BaseCommsTrigger*  t) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Dissonance::Demo::TriggerVisualizer___c* getStaticF___9() ;

static inline ::System::Func_2<::UnityW<::Dissonance::BaseCommsTrigger>,bool>* getStaticF___9__7_0() ;

static inline ::System::Func_2<::UnityW<::Dissonance::BaseCommsTrigger>,bool>* getStaticF___9__7_1() ;

static inline void setStaticF___9(::Dissonance::Demo::TriggerVisualizer___c*  value) ;

static inline void setStaticF___9__7_0(::System::Func_2<::UnityW<::Dissonance::BaseCommsTrigger>,bool>*  value) ;

static inline void setStaticF___9__7_1(::System::Func_2<::UnityW<::Dissonance::BaseCommsTrigger>,bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TriggerVisualizer___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TriggerVisualizer___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TriggerVisualizer___c(TriggerVisualizer___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TriggerVisualizer___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TriggerVisualizer___c(TriggerVisualizer___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16854};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Dissonance::Demo::TriggerVisualizer___c) == 0x10, "Size mismatch!");

} // namespace end def Dissonance::Demo
// Dependencies Dissonance.BaseCommsTrigger, UnityEngine.Color, UnityEngine.MonoBehaviour
namespace Dissonance::Demo {
// Is value type: false
// CS Name: Dissonance.Demo.TriggerVisualizer
class CORDL_TYPE TriggerVisualizer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::Dissonance::Demo::TriggerVisualizer___c;

/// @brief Field Color, offset 0x44, size 0x10 
 __declspec(property(get=__cordl_internal_get_Color, put=__cordl_internal_set_Color)) ::UnityEngine::Color  Color;

/// @brief Field _alpha, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__alpha, put=__cordl_internal_set__alpha)) float_t  _alpha;

/// @brief Field _fillMaterial, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__fillMaterial, put=__cordl_internal_set__fillMaterial)) ::UnityW<::UnityEngine::Material>  _fillMaterial;

/// @brief Field _outlineMaterial, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__outlineMaterial, put=__cordl_internal_set__outlineMaterial)) ::UnityW<::UnityEngine::Material>  _outlineMaterial;

/// @brief Field _triggers, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__triggers, put=__cordl_internal_set__triggers)) ::ArrayW<::UnityW<::Dissonance::BaseCommsTrigger>>  _triggers;

/// @brief Field _visualisations, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__visualisations, put=__cordl_internal_set__visualisations)) ::UnityW<::UnityEngine::GameObject>  _visualisations;

/// @brief Method Awake, addr 0x1805ebec0, size 0x230, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CreateBox, addr 0x1805ec0f0, size 0x7f0, virtual false, abstract: false, final false
inline void CreateBox(::UnityEngine::BoxCollider*  box) ;

/// @brief Method CreateCircle, addr 0x1805ec8e0, size 0x680, virtual false, abstract: false, final false
inline void CreateCircle(::UnityEngine::SphereCollider*  sphere) ;

static inline ::Dissonance::Demo::TriggerVisualizer* New_ctor() ;

/// @brief Method Update, addr 0x1805ecf60, size 0x2c0, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_Color() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_Color() ;

constexpr float_t const& __cordl_internal_get__alpha() const;

constexpr float_t& __cordl_internal_get__alpha() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__fillMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__fillMaterial() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__outlineMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__outlineMaterial() ;

constexpr ::ArrayW<::UnityW<::Dissonance::BaseCommsTrigger>> const& __cordl_internal_get__triggers() const;

constexpr ::ArrayW<::UnityW<::Dissonance::BaseCommsTrigger>>& __cordl_internal_get__triggers() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__visualisations() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__visualisations() ;

constexpr void __cordl_internal_set_Color(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__alpha(float_t  value) ;

constexpr void __cordl_internal_set__fillMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__outlineMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__triggers(::ArrayW<::UnityW<::Dissonance::BaseCommsTrigger>>  value) ;

constexpr void __cordl_internal_set__visualisations(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TriggerVisualizer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TriggerVisualizer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TriggerVisualizer(TriggerVisualizer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TriggerVisualizer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TriggerVisualizer(TriggerVisualizer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16855};

/// @brief Field _visualisations, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____visualisations;

/// @brief Field _triggers, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::Dissonance::BaseCommsTrigger>>  ____triggers;

/// @brief Field _fillMaterial, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____fillMaterial;

/// @brief Field _outlineMaterial, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____outlineMaterial;

/// @brief Field _alpha, offset: 0x40, size: 0x4, def value: None
 float_t  ____alpha;

/// @brief Field Color, offset: 0x44, size: 0x10, def value: None
 ::UnityEngine::Color  ___Color;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Demo::TriggerVisualizer, ____visualisations) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Demo::TriggerVisualizer, ____triggers) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Demo::TriggerVisualizer, ____fillMaterial) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Demo::TriggerVisualizer, ____outlineMaterial) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Demo::TriggerVisualizer, ____alpha) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Demo::TriggerVisualizer, ___Color) == 0x44, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Demo::TriggerVisualizer) == 0x58, "Size mismatch!");

} // namespace end def Dissonance::Demo
