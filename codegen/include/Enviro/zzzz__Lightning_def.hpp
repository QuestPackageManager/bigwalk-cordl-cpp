#pragma once
// IWYU pragma private; include "Enviro/Lightning.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Lightning)
namespace Enviro {
class ILightningEffect;
}
namespace Enviro {
class Lightning__CreateLightningBolt_d__19;
}
namespace Enviro {
class Lightning__CreateSplit_d__20;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Light;
}
namespace UnityEngine {
class LineRenderer;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Enviro {
class Lightning;
}
namespace Enviro {
class Lightning__CreateLightningBolt_d__19;
}
namespace Enviro {
class Lightning__CreateSplit_d__20;
}
// Write type traits
MARK_REF_T(::Enviro::Lightning*);
MARK_REF_T(::Enviro::Lightning__CreateLightningBolt_d__19*);
MARK_REF_T(::Enviro::Lightning__CreateSplit_d__20*);
DEFINE_IL2CPP_CLASS(::Enviro::Lightning*, "Enviro", "Lightning");
DEFINE_IL2CPP_CLASS(::Enviro::Lightning__CreateLightningBolt_d__19*, "Enviro", "Lightning/<CreateLightningBolt>d__19");
DEFINE_IL2CPP_CLASS(::Enviro::Lightning__CreateSplit_d__20*, "Enviro", "Lightning/<CreateSplit>d__20");
// Dependencies System.Object, UnityEngine.Vector3
namespace Enviro {
// Is value type: false
// CS Name: Enviro.Lightning/<CreateLightningBolt>d__19
class CORDL_TYPE Lightning__CreateLightningBolt_d__19 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Enviro::Lightning>  __4__this;

/// @brief Field <arcDist>5__2, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__arcDist_5__2, put=__cordl_internal_set__arcDist_5__2)) float_t  _arcDist_5__2;

/// @brief Field <i>5__3, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__i_5__3, put=__cordl_internal_set__i_5__3)) int32_t  _i_5__3;

/// @brief Field <pos>5__4, offset 0x30, size 0xc 
 __declspec(property(get=__cordl_internal_get__pos_5__4, put=__cordl_internal_set__pos_5__4)) ::UnityEngine::Vector3  _pos_5__4;

/// @brief Field <s>5__5, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__s_5__5, put=__cordl_internal_set__s_5__5)) int32_t  _s_5__5;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x18061a5b0, size 0xc30, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Enviro::Lightning__CreateLightningBolt_d__19* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x1802ecc10, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1802eb7d0, size 0x10, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x1802ecc10, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Enviro::Lightning> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Enviro::Lightning>& __cordl_internal_get___4__this() ;

constexpr float_t const& __cordl_internal_get__arcDist_5__2() const;

constexpr float_t& __cordl_internal_get__arcDist_5__2() ;

constexpr int32_t const& __cordl_internal_get__i_5__3() const;

constexpr int32_t& __cordl_internal_get__i_5__3() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__pos_5__4() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__pos_5__4() ;

constexpr int32_t const& __cordl_internal_get__s_5__5() const;

constexpr int32_t& __cordl_internal_get__s_5__5() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Enviro::Lightning>  value) ;

constexpr void __cordl_internal_set__arcDist_5__2(float_t  value) ;

constexpr void __cordl_internal_set__i_5__3(int32_t  value) ;

constexpr void __cordl_internal_set__pos_5__4(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__s_5__5(int32_t  value) ;

/// @brief Method .ctor, addr 0x180378ff0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Lightning__CreateLightningBolt_d__19() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Lightning__CreateLightningBolt_d__19", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Lightning__CreateLightningBolt_d__19(Lightning__CreateLightningBolt_d__19 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Lightning__CreateLightningBolt_d__19", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Lightning__CreateLightningBolt_d__19(Lightning__CreateLightningBolt_d__19 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18469};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Enviro::Lightning>  _____4__this;

/// @brief Field <arcDist>5__2, offset: 0x28, size: 0x4, def value: None
 float_t  ____arcDist_5__2;

/// @brief Field <i>5__3, offset: 0x2c, size: 0x4, def value: None
 int32_t  ____i_5__3;

/// @brief Field <pos>5__4, offset: 0x30, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____pos_5__4;

/// @brief Field <s>5__5, offset: 0x3c, size: 0x4, def value: None
 int32_t  ____s_5__5;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Enviro::Lightning__CreateLightningBolt_d__19, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Enviro::Lightning__CreateLightningBolt_d__19, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Enviro::Lightning__CreateLightningBolt_d__19, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Enviro::Lightning__CreateLightningBolt_d__19, ____arcDist_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Enviro::Lightning__CreateLightningBolt_d__19, ____i_5__3) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Enviro::Lightning__CreateLightningBolt_d__19, ____pos_5__4) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Enviro::Lightning__CreateLightningBolt_d__19, ____s_5__5) == 0x3c, "Offset mismatch!");

static_assert(sizeof(::Enviro::Lightning__CreateLightningBolt_d__19) == 0x40, "Size mismatch!");

} // namespace end def Enviro
// Dependencies System.Object, UnityEngine.Vector3
namespace Enviro {
// Is value type: false
// CS Name: Enviro.Lightning/<CreateSplit>d__20
class CORDL_TYPE Lightning__CreateSplit_d__20 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Enviro::Lightning>  __4__this;

/// @brief Field <split>5__2, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__split_5__2, put=__cordl_internal_set__split_5__2)) ::UnityW<::UnityEngine::GameObject>  _split_5__2;

/// @brief Field pos, offset 0x28, size 0xc 
 __declspec(property(get=__cordl_internal_get_pos, put=__cordl_internal_set_pos)) ::UnityEngine::Vector3  pos;

/// @brief Field targetP, offset 0x34, size 0xc 
 __declspec(property(get=__cordl_internal_get_targetP, put=__cordl_internal_set_targetP)) ::UnityEngine::Vector3  targetP;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x18061b1e0, size 0x740, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Enviro::Lightning__CreateSplit_d__20* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x1802ecc10, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1802eb7d0, size 0x10, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x1802ecc10, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Enviro::Lightning> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Enviro::Lightning>& __cordl_internal_get___4__this() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__split_5__2() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__split_5__2() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_pos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_pos() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_targetP() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_targetP() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Enviro::Lightning>  value) ;

constexpr void __cordl_internal_set__split_5__2(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_pos(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_targetP(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x180378ff0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Lightning__CreateSplit_d__20() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Lightning__CreateSplit_d__20", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Lightning__CreateSplit_d__20(Lightning__CreateSplit_d__20 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Lightning__CreateSplit_d__20", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Lightning__CreateSplit_d__20(Lightning__CreateSplit_d__20 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18470};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Enviro::Lightning>  _____4__this;

/// @brief Field pos, offset: 0x28, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___pos;

/// @brief Field targetP, offset: 0x34, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___targetP;

/// @brief Field <split>5__2, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____split_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Enviro::Lightning__CreateSplit_d__20, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Enviro::Lightning__CreateSplit_d__20, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Enviro::Lightning__CreateSplit_d__20, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Enviro::Lightning__CreateSplit_d__20, ___pos) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Enviro::Lightning__CreateSplit_d__20, ___targetP) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Enviro::Lightning__CreateSplit_d__20, ____split_5__2) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Enviro::Lightning__CreateSplit_d__20) == 0x48, "Size mismatch!");

} // namespace end def Enviro
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace Enviro {
// Is value type: false
// CS Name: Enviro.Lightning
class CORDL_TYPE Lightning : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _CreateLightningBolt_d__19 = ::Enviro::Lightning__CreateLightningBolt_d__19;

using _CreateSplit_d__20 = ::Enviro::Lightning__CreateSplit_d__20;

/// @brief Field arcLength, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_arcLength, put=__cordl_internal_set_arcLength)) float_t  arcLength;

/// @brief Field arcVariation, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_arcVariation, put=__cordl_internal_set_arcVariation)) float_t  arcVariation;

/// @brief Field arcs, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_arcs, put=__cordl_internal_set_arcs)) int32_t  arcs;

/// @brief Field fadeOut, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get_fadeOut, put=__cordl_internal_set_fadeOut)) bool  fadeOut;

/// @brief Field fadeTimer, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_fadeTimer, put=__cordl_internal_set_fadeTimer)) float_t  fadeTimer;

/// @brief Field flashIntensity, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_flashIntensity, put=__cordl_internal_set_flashIntensity)) float_t  flashIntensity;

/// @brief Field inaccuracy, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_inaccuracy, put=__cordl_internal_set_inaccuracy)) float_t  inaccuracy;

/// @brief Field lineRend, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_lineRend, put=__cordl_internal_set_lineRend)) ::UnityW<::UnityEngine::LineRenderer>  lineRend;

/// @brief Field maxSplits, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxSplits, put=__cordl_internal_set_maxSplits)) int32_t  maxSplits;

/// @brief Field myLight, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_myLight, put=__cordl_internal_set_myLight)) ::UnityW<::UnityEngine::Light>  myLight;

/// @brief Field planeMat, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_planeMat, put=__cordl_internal_set_planeMat)) ::UnityW<::UnityEngine::Material>  planeMat;

/// @brief Field splitCount, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_splitCount, put=__cordl_internal_set_splitCount)) int32_t  splitCount;

/// @brief Field splitLength, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_splitLength, put=__cordl_internal_set_splitLength)) float_t  splitLength;

/// @brief Field splitVariation, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_splitVariation, put=__cordl_internal_set_splitVariation)) float_t  splitVariation;

/// @brief Field splits, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_splits, put=__cordl_internal_set_splits)) int32_t  splits;

/// @brief Field target, offset 0x24, size 0xc 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityEngine::Vector3  target;

/// @brief Field toTarget, offset 0x6c, size 0xc 
 __declspec(property(get=__cordl_internal_get_toTarget, put=__cordl_internal_set_toTarget)) ::UnityEngine::Vector3  toTarget;

/// @brief Convert operator to "::Enviro::ILightningEffect"
constexpr operator  ::Enviro::ILightningEffect*() noexcept;

/// @brief Method CastBolt, addr 0x18061a0d0, size 0x70, virtual false, abstract: false, final false
inline void CastBolt() ;

/// @brief Method CastBolt, addr 0x18061a010, size 0xc0, virtual true, abstract: false, final true
inline void CastBolt(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  target) ;

/// @brief Method CreateLightningBolt, addr 0x18061a140, size 0x50, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* CreateLightningBolt() ;

/// @brief Method CreateSplit, addr 0x18061a190, size 0x80, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* CreateSplit(::UnityEngine::Vector3  pos, ::UnityEngine::Vector3  targetP) ;

static inline ::Enviro::Lightning* New_ctor() ;

/// @brief Method OnEnable, addr 0x18061a210, size 0x40, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Randomize, addr 0x18061a250, size 0xf0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 Randomize(::UnityEngine::Vector3  newVector, float_t  devation) ;

/// @brief Method Update, addr 0x18061a340, size 0xe0, virtual false, abstract: false, final false
inline void Update() ;

constexpr float_t const& __cordl_internal_get_arcLength() const;

constexpr float_t& __cordl_internal_get_arcLength() ;

constexpr float_t const& __cordl_internal_get_arcVariation() const;

constexpr float_t& __cordl_internal_get_arcVariation() ;

constexpr int32_t const& __cordl_internal_get_arcs() const;

constexpr int32_t& __cordl_internal_get_arcs() ;

constexpr bool const& __cordl_internal_get_fadeOut() const;

constexpr bool& __cordl_internal_get_fadeOut() ;

constexpr float_t const& __cordl_internal_get_fadeTimer() const;

constexpr float_t& __cordl_internal_get_fadeTimer() ;

constexpr float_t const& __cordl_internal_get_flashIntensity() const;

constexpr float_t& __cordl_internal_get_flashIntensity() ;

constexpr float_t const& __cordl_internal_get_inaccuracy() const;

constexpr float_t& __cordl_internal_get_inaccuracy() ;

constexpr ::UnityW<::UnityEngine::LineRenderer> const& __cordl_internal_get_lineRend() const;

constexpr ::UnityW<::UnityEngine::LineRenderer>& __cordl_internal_get_lineRend() ;

constexpr int32_t const& __cordl_internal_get_maxSplits() const;

constexpr int32_t& __cordl_internal_get_maxSplits() ;

constexpr ::UnityW<::UnityEngine::Light> const& __cordl_internal_get_myLight() const;

constexpr ::UnityW<::UnityEngine::Light>& __cordl_internal_get_myLight() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_planeMat() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_planeMat() ;

constexpr int32_t const& __cordl_internal_get_splitCount() const;

constexpr int32_t& __cordl_internal_get_splitCount() ;

constexpr float_t const& __cordl_internal_get_splitLength() const;

constexpr float_t& __cordl_internal_get_splitLength() ;

constexpr float_t const& __cordl_internal_get_splitVariation() const;

constexpr float_t& __cordl_internal_get_splitVariation() ;

constexpr int32_t const& __cordl_internal_get_splits() const;

constexpr int32_t& __cordl_internal_get_splits() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_target() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_target() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_toTarget() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_toTarget() ;

constexpr void __cordl_internal_set_arcLength(float_t  value) ;

constexpr void __cordl_internal_set_arcVariation(float_t  value) ;

constexpr void __cordl_internal_set_arcs(int32_t  value) ;

constexpr void __cordl_internal_set_fadeOut(bool  value) ;

constexpr void __cordl_internal_set_fadeTimer(float_t  value) ;

constexpr void __cordl_internal_set_flashIntensity(float_t  value) ;

constexpr void __cordl_internal_set_inaccuracy(float_t  value) ;

constexpr void __cordl_internal_set_lineRend(::UnityW<::UnityEngine::LineRenderer>  value) ;

constexpr void __cordl_internal_set_maxSplits(int32_t  value) ;

constexpr void __cordl_internal_set_myLight(::UnityW<::UnityEngine::Light>  value) ;

constexpr void __cordl_internal_set_planeMat(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_splitCount(int32_t  value) ;

constexpr void __cordl_internal_set_splitLength(float_t  value) ;

constexpr void __cordl_internal_set_splitVariation(float_t  value) ;

constexpr void __cordl_internal_set_splits(int32_t  value) ;

constexpr void __cordl_internal_set_target(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_toTarget(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x18061a420, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Enviro::ILightningEffect"
constexpr ::Enviro::ILightningEffect* i___Enviro__ILightningEffect() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Lightning() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Lightning", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Lightning(Lightning && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Lightning", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Lightning(Lightning const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18471};

/// @brief Field flashIntensity, offset: 0x20, size: 0x4, def value: None
 float_t  ___flashIntensity;

/// @brief Field target, offset: 0x24, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___target;

/// @brief Field lineRend, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::LineRenderer>  ___lineRend;

/// @brief Field myLight, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Light>  ___myLight;

/// @brief Field planeMat, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___planeMat;

/// @brief Field arcs, offset: 0x48, size: 0x4, def value: None
 int32_t  ___arcs;

/// @brief Field arcLength, offset: 0x4c, size: 0x4, def value: None
 float_t  ___arcLength;

/// @brief Field arcVariation, offset: 0x50, size: 0x4, def value: None
 float_t  ___arcVariation;

/// @brief Field inaccuracy, offset: 0x54, size: 0x4, def value: None
 float_t  ___inaccuracy;

/// @brief Field splits, offset: 0x58, size: 0x4, def value: None
 int32_t  ___splits;

/// @brief Field maxSplits, offset: 0x5c, size: 0x4, def value: None
 int32_t  ___maxSplits;

/// @brief Field splitCount, offset: 0x60, size: 0x4, def value: None
 int32_t  ___splitCount;

/// @brief Field splitLength, offset: 0x64, size: 0x4, def value: None
 float_t  ___splitLength;

/// @brief Field splitVariation, offset: 0x68, size: 0x4, def value: None
 float_t  ___splitVariation;

/// @brief Field toTarget, offset: 0x6c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___toTarget;

/// @brief Field fadeOut, offset: 0x78, size: 0x1, def value: None
 bool  ___fadeOut;

/// @brief Field fadeTimer, offset: 0x7c, size: 0x4, def value: None
 float_t  ___fadeTimer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Enviro::Lightning, ___flashIntensity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Enviro::Lightning, ___target) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Enviro::Lightning, ___lineRend) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Enviro::Lightning, ___myLight) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Enviro::Lightning, ___planeMat) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Enviro::Lightning, ___arcs) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Enviro::Lightning, ___arcLength) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Enviro::Lightning, ___arcVariation) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Enviro::Lightning, ___inaccuracy) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Enviro::Lightning, ___splits) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Enviro::Lightning, ___maxSplits) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Enviro::Lightning, ___splitCount) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Enviro::Lightning, ___splitLength) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Enviro::Lightning, ___splitVariation) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Enviro::Lightning, ___toTarget) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::Enviro::Lightning, ___fadeOut) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Enviro::Lightning, ___fadeTimer) == 0x7c, "Offset mismatch!");

static_assert(sizeof(::Enviro::Lightning) == 0x80, "Size mismatch!");

} // namespace end def Enviro
