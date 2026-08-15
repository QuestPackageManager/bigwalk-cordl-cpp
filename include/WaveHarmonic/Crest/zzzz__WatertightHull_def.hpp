#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/WatertightHull.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "WaveHarmonic/Crest/Internal/zzzz__ManagedBehaviour_1_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WatertightHullMode_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(WatertightHull)
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
struct RenderTargetIdentifier;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class MonoBehaviour;
}
namespace UnityEngine {
struct Rect;
}
namespace WaveHarmonic::Crest {
class ILodInput;
}
namespace WaveHarmonic::Crest {
class Lod;
}
namespace WaveHarmonic::Crest {
class SampleCollisionHelper;
}
namespace WaveHarmonic::Crest {
class WaterRenderer;
}
namespace WaveHarmonic::Crest {
struct WatertightHullMode;
}
namespace WaveHarmonic::Crest {
class WatertightHull_ClipInput;
}
namespace WaveHarmonic::Crest {
class WatertightHull_DebugFields;
}
namespace WaveHarmonic::Crest {
class WatertightHull_DisplacementInput;
}
namespace WaveHarmonic::Crest {
class WatertightHull_ShaderIDs;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
class WatertightHull;
}
namespace WaveHarmonic::Crest {
class WatertightHull_ClipInput;
}
namespace WaveHarmonic::Crest {
class WatertightHull_DebugFields;
}
namespace WaveHarmonic::Crest {
class WatertightHull_DisplacementInput;
}
namespace WaveHarmonic::Crest {
class WatertightHull_ShaderIDs;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::WatertightHull*);
MARK_REF_T(::WaveHarmonic::Crest::WatertightHull_ClipInput*);
MARK_REF_T(::WaveHarmonic::Crest::WatertightHull_DebugFields*);
MARK_REF_T(::WaveHarmonic::Crest::WatertightHull_DisplacementInput*);
MARK_REF_T(::WaveHarmonic::Crest::WatertightHull_ShaderIDs*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::WatertightHull*, "WaveHarmonic.Crest", "WatertightHull");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::WatertightHull_ClipInput*, "WaveHarmonic.Crest", "WatertightHull/ClipInput");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::WatertightHull_DebugFields*, "WaveHarmonic.Crest", "WatertightHull/DebugFields");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::WatertightHull_DisplacementInput*, "WaveHarmonic.Crest", "WatertightHull/DisplacementInput");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::WatertightHull_ShaderIDs*, "WaveHarmonic.Crest", "WatertightHull/ShaderIDs");
// Dependencies System.Object
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.WatertightHull/DebugFields
class CORDL_TYPE WatertightHull_DebugFields : public ::System::Object {
public:
// Declarations
/// @brief Field _DrawBounds, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__DrawBounds, put=__cordl_internal_set__DrawBounds)) bool  _DrawBounds;

static inline ::WaveHarmonic::Crest::WatertightHull_DebugFields* New_ctor() ;

constexpr bool const& __cordl_internal_get__DrawBounds() const;

constexpr bool& __cordl_internal_get__DrawBounds() ;

constexpr void __cordl_internal_set__DrawBounds(bool  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WatertightHull_DebugFields() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WatertightHull_DebugFields", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WatertightHull_DebugFields(WatertightHull_DebugFields && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WatertightHull_DebugFields", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WatertightHull_DebugFields(WatertightHull_DebugFields const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16573};

/// @brief Field _DrawBounds, offset: 0x10, size: 0x1, def value: None
 bool  ____DrawBounds;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::WatertightHull_DebugFields, ____DrawBounds) == 0x10, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::WatertightHull_DebugFields) == 0x18, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies System.Object
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.WatertightHull/ShaderIDs
class CORDL_TYPE WatertightHull_ShaderIDs : public ::System::Object {
public:
// Declarations
/// @brief Field s_Inverted, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_Inverted, put=setStaticF_s_Inverted)) int32_t  s_Inverted;

static inline int32_t getStaticF_s_Inverted() ;

static inline void setStaticF_s_Inverted(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WatertightHull_ShaderIDs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WatertightHull_ShaderIDs", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WatertightHull_ShaderIDs(WatertightHull_ShaderIDs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WatertightHull_ShaderIDs", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WatertightHull_ShaderIDs(WatertightHull_ShaderIDs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16574};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::WatertightHull_ShaderIDs) == 0x10, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies System.Object
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.WatertightHull/ClipInput
class CORDL_TYPE WatertightHull_ClipInput : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Component)) ::UnityW<::UnityEngine::MonoBehaviour>  Component;

 __declspec(property(get=get_Enabled)) bool  Enabled;

 __declspec(property(get=get_IsCompute)) bool  IsCompute;

 __declspec(property(get=get_Pass)) int32_t  Pass;

 __declspec(property(get=get_Queue)) int32_t  Queue;

 __declspec(property(get=get_Rect)) ::UnityEngine::Rect  Rect;

/// @brief Field _Input, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Input, put=__cordl_internal_set__Input)) ::UnityW<::WaveHarmonic::Crest::WatertightHull>  _Input;

/// @brief Convert operator to "::WaveHarmonic::Crest::ILodInput"
constexpr operator  ::WaveHarmonic::Crest::ILodInput*() noexcept;

/// @brief Method Draw, addr 0x182571160, size 0xd0, virtual true, abstract: false, final true
inline void Draw(::WaveHarmonic::Crest::Lod*  lod, ::UnityEngine::Rendering::CommandBuffer*  buffer, ::UnityEngine::Rendering::RenderTargetIdentifier  target, int32_t  pass, float_t  weight, int32_t  slice) ;

/// @brief Method Filter, addr 0x1802e30f0, size 0x10, virtual true, abstract: false, final true
inline float_t Filter(::WaveHarmonic::Crest::WaterRenderer*  water, int32_t  slice) ;

static inline ::WaveHarmonic::Crest::WatertightHull_ClipInput* New_ctor(::WaveHarmonic::Crest::WatertightHull*  input) ;

constexpr ::UnityW<::WaveHarmonic::Crest::WatertightHull> const& __cordl_internal_get__Input() const;

constexpr ::UnityW<::WaveHarmonic::Crest::WatertightHull>& __cordl_internal_get__Input() ;

constexpr void __cordl_internal_set__Input(::UnityW<::WaveHarmonic::Crest::WatertightHull>  value) ;

/// @brief Method .ctor, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::WaveHarmonic::Crest::WatertightHull*  input) ;

/// @brief Method get_Component, addr 0x1802db4a0, size 0x10, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::MonoBehaviour> get_Component() ;

/// @brief Method get_Enabled, addr 0x182571230, size 0x40, virtual true, abstract: false, final true
inline bool get_Enabled() ;

/// @brief Method get_IsCompute, addr 0x1802e2bd0, size 0x10, virtual true, abstract: false, final true
inline bool get_IsCompute() ;

/// @brief Method get_Pass, addr 0x180393450, size 0x10, virtual true, abstract: false, final true
inline int32_t get_Pass() ;

/// @brief Method get_Queue, addr 0x182559cc0, size 0x20, virtual true, abstract: false, final true
inline int32_t get_Queue() ;

/// @brief Method get_Rect, addr 0x182571270, size 0x30, virtual true, abstract: false, final true
inline ::UnityEngine::Rect get_Rect() ;

/// @brief Convert to "::WaveHarmonic::Crest::ILodInput"
constexpr ::WaveHarmonic::Crest::ILodInput* i___WaveHarmonic__Crest__ILodInput() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WatertightHull_ClipInput() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WatertightHull_ClipInput", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WatertightHull_ClipInput(WatertightHull_ClipInput && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WatertightHull_ClipInput", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WatertightHull_ClipInput(WatertightHull_ClipInput const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16575};

/// @brief Field _Input, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::WaveHarmonic::Crest::WatertightHull>  ____Input;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::WatertightHull_ClipInput, ____Input) == 0x10, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::WatertightHull_ClipInput) == 0x18, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies System.Object
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.WatertightHull/DisplacementInput
class CORDL_TYPE WatertightHull_DisplacementInput : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Component)) ::UnityW<::UnityEngine::MonoBehaviour>  Component;

 __declspec(property(get=get_Enabled)) bool  Enabled;

 __declspec(property(get=get_IsCompute)) bool  IsCompute;

 __declspec(property(get=get_Pass)) int32_t  Pass;

 __declspec(property(get=get_Queue)) int32_t  Queue;

 __declspec(property(get=get_Rect)) ::UnityEngine::Rect  Rect;

/// @brief Field _Input, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Input, put=__cordl_internal_set__Input)) ::UnityW<::WaveHarmonic::Crest::WatertightHull>  _Input;

/// @brief Convert operator to "::WaveHarmonic::Crest::ILodInput"
constexpr operator  ::WaveHarmonic::Crest::ILodInput*() noexcept;

/// @brief Method Draw, addr 0x1825750c0, size 0x120, virtual true, abstract: false, final true
inline void Draw(::WaveHarmonic::Crest::Lod*  lod, ::UnityEngine::Rendering::CommandBuffer*  buffer, ::UnityEngine::Rendering::RenderTargetIdentifier  target, int32_t  pass, float_t  weight, int32_t  slice) ;

/// @brief Method Filter, addr 0x1802e30f0, size 0x10, virtual true, abstract: false, final true
inline float_t Filter(::WaveHarmonic::Crest::WaterRenderer*  water, int32_t  slice) ;

static inline ::WaveHarmonic::Crest::WatertightHull_DisplacementInput* New_ctor(::WaveHarmonic::Crest::WatertightHull*  input) ;

constexpr ::UnityW<::WaveHarmonic::Crest::WatertightHull> const& __cordl_internal_get__Input() const;

constexpr ::UnityW<::WaveHarmonic::Crest::WatertightHull>& __cordl_internal_get__Input() ;

constexpr void __cordl_internal_set__Input(::UnityW<::WaveHarmonic::Crest::WatertightHull>  value) ;

/// @brief Method .ctor, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::WaveHarmonic::Crest::WatertightHull*  input) ;

/// @brief Method get_Component, addr 0x1802db4a0, size 0x10, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::MonoBehaviour> get_Component() ;

/// @brief Method get_Enabled, addr 0x182571230, size 0x40, virtual true, abstract: false, final true
inline bool get_Enabled() ;

/// @brief Method get_IsCompute, addr 0x1802e2bd0, size 0x10, virtual true, abstract: false, final true
inline bool get_IsCompute() ;

/// @brief Method get_Pass, addr 0x1802edfe0, size 0x10, virtual true, abstract: false, final true
inline int32_t get_Pass() ;

/// @brief Method get_Queue, addr 0x182559cc0, size 0x20, virtual true, abstract: false, final true
inline int32_t get_Queue() ;

/// @brief Method get_Rect, addr 0x182571270, size 0x30, virtual true, abstract: false, final true
inline ::UnityEngine::Rect get_Rect() ;

/// @brief Convert to "::WaveHarmonic::Crest::ILodInput"
constexpr ::WaveHarmonic::Crest::ILodInput* i___WaveHarmonic__Crest__ILodInput() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WatertightHull_DisplacementInput() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WatertightHull_DisplacementInput", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WatertightHull_DisplacementInput(WatertightHull_DisplacementInput && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WatertightHull_DisplacementInput", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WatertightHull_DisplacementInput(WatertightHull_DisplacementInput const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16576};

/// @brief Field _Input, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::WaveHarmonic::Crest::WatertightHull>  ____Input;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::WatertightHull_DisplacementInput, ____Input) == 0x10, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::WatertightHull_DisplacementInput) == 0x18, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies UnityEngine.Rect, UnityEngine.Vector3, WaveHarmonic.Crest.Internal.ManagedBehaviour`1<T>, WaveHarmonic.Crest.WatertightHullMode
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.WatertightHull
class CORDL_TYPE WatertightHull : public ::WaveHarmonic::Crest::Internal::ManagedBehaviour_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>> {
public:
// Declarations
using ClipInput = ::WaveHarmonic::Crest::WatertightHull_ClipInput;

using DebugFields = ::WaveHarmonic::Crest::WatertightHull_DebugFields;

using DisplacementInput = ::WaveHarmonic::Crest::WatertightHull_DisplacementInput;

using ShaderIDs = ::WaveHarmonic::Crest::WatertightHull_ShaderIDs;

 __declspec(property(get=get_Enabled)) bool  Enabled;

 __declspec(property(get=get_Inverted, put=set_Inverted)) bool  Inverted;

 __declspec(property(get=get_Mesh, put=set_Mesh)) ::UnityW<::UnityEngine::Mesh>  Mesh;

 __declspec(property(get=get_Mode, put=set_Mode)) ::WaveHarmonic::Crest::WatertightHullMode  Mode;

 __declspec(property(get=get_OnLateUpdateMethod)) ::System::Action_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>>*  OnLateUpdateMethod;

 __declspec(property(get=get_OnUpdateMethod)) ::System::Action_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>>*  OnUpdateMethod;

 __declspec(property(get=get_Queue, put=set_Queue)) int32_t  Queue;

 __declspec(property(get=get_Rect)) ::UnityEngine::Rect  Rect;

 __declspec(property(get=get_UseClipWithDisplacement, put=set_UseClipWithDisplacement)) bool  UseClipWithDisplacement;

 __declspec(property(get=get_UsesClip)) bool  UsesClip;

 __declspec(property(get=get_UsesDisplacement)) bool  UsesDisplacement;

 __declspec(property(get=get_Version)) int32_t  Version;

/// @brief Field _AnimatedWavesInput, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get__AnimatedWavesInput, put=__cordl_internal_set__AnimatedWavesInput)) ::WaveHarmonic::Crest::WatertightHull_DisplacementInput*  _AnimatedWavesInput;

/// @brief Field _AnimatedWavesMaterial, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__AnimatedWavesMaterial, put=__cordl_internal_set__AnimatedWavesMaterial)) ::UnityW<::UnityEngine::Material>  _AnimatedWavesMaterial;

/// @brief Field _ClipInput, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__ClipInput, put=__cordl_internal_set__ClipInput)) ::WaveHarmonic::Crest::WatertightHull_ClipInput*  _ClipInput;

/// @brief Field _ClipMaterial, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__ClipMaterial, put=__cordl_internal_set__ClipMaterial)) ::UnityW<::UnityEngine::Material>  _ClipMaterial;

/// @brief Field _Debug, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__Debug, put=__cordl_internal_set__Debug)) ::WaveHarmonic::Crest::WatertightHull_DebugFields*  _Debug;

/// @brief Field _Displacement, offset 0xa0, size 0xc 
 __declspec(property(get=__cordl_internal_get__Displacement, put=__cordl_internal_set__Displacement)) ::UnityEngine::Vector3  _Displacement;

/// @brief Field _Inverted, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get__Inverted, put=__cordl_internal_set__Inverted)) bool  _Inverted;

/// @brief Field _Mesh, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__Mesh, put=__cordl_internal_set__Mesh)) ::UnityW<::UnityEngine::Mesh>  _Mesh;

/// @brief Field _Mode, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get__Mode, put=__cordl_internal_set__Mode)) ::WaveHarmonic::Crest::WatertightHullMode  _Mode;

/// @brief Field _Queue, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__Queue, put=__cordl_internal_set__Queue)) int32_t  _Queue;

/// @brief Field _RecalculateBounds, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get__RecalculateBounds, put=__cordl_internal_set__RecalculateBounds)) bool  _RecalculateBounds;

/// @brief Field _Rect, offset 0x84, size 0x10 
 __declspec(property(get=__cordl_internal_get__Rect, put=__cordl_internal_set__Rect)) ::UnityEngine::Rect  _Rect;

/// @brief Field _SampleCollisionHelper, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__SampleCollisionHelper, put=__cordl_internal_set__SampleCollisionHelper)) ::WaveHarmonic::Crest::SampleCollisionHelper*  _SampleCollisionHelper;

/// @brief Field _UseClipWithDisplacement, offset 0x61, size 0x1 
 __declspec(property(get=__cordl_internal_get__UseClipWithDisplacement, put=__cordl_internal_set__UseClipWithDisplacement)) bool  _UseClipWithDisplacement;

/// @brief Method DrawClip, addr 0x1825884b0, size 0xc0, virtual false, abstract: false, final false
inline void DrawClip(::WaveHarmonic::Crest::Lod*  simulation, ::UnityEngine::Rendering::CommandBuffer*  buffer, ::UnityEngine::Rendering::RenderTargetIdentifier  target, int32_t  pass, float_t  weight, int32_t  slice) ;

/// @brief Method DrawDisplacement, addr 0x182588570, size 0x110, virtual false, abstract: false, final false
inline void DrawDisplacement(::WaveHarmonic::Crest::Lod*  simulation, ::UnityEngine::Rendering::CommandBuffer*  buffer, ::UnityEngine::Rendering::RenderTargetIdentifier  target, int32_t  pass, float_t  weight, int32_t  slice) ;

/// @brief Method Initialize, addr 0x182588680, size 0x230, virtual true, abstract: false, final false
inline void Initialize() ;

static inline ::WaveHarmonic::Crest::WatertightHull* New_ctor() ;

/// @brief Method OnDisable, addr 0x1825888b0, size 0xc0, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnLateUpdate, addr 0x182555b30, size 0x30, virtual false, abstract: false, final false
inline void OnLateUpdate(::WaveHarmonic::Crest::WaterRenderer*  water) ;

/// @brief Method OnMigrate, addr 0x182588970, size 0x10, virtual true, abstract: false, final false
inline void OnMigrate() ;

/// @brief Method OnUpdate, addr 0x182588980, size 0x130, virtual false, abstract: false, final false
inline void OnUpdate(::WaveHarmonic::Crest::WaterRenderer*  water) ;

/// @brief Method SetMode, addr 0x182588ab0, size 0x40, virtual false, abstract: false, final false
inline void SetMode(::WaveHarmonic::Crest::WatertightHullMode  previous, ::WaveHarmonic::Crest::WatertightHullMode  current) ;

/// @brief Method SetQueue, addr 0x182588af0, size 0xd0, virtual false, abstract: false, final false
inline void SetQueue(int32_t  previous, int32_t  current) ;

/// @brief Method SetUseClipWithDisplacement, addr 0x182588bc0, size 0x40, virtual false, abstract: false, final false
inline void SetUseClipWithDisplacement(bool  previous, bool  current) ;

constexpr ::WaveHarmonic::Crest::WatertightHull_DisplacementInput* const& __cordl_internal_get__AnimatedWavesInput() const;

constexpr ::WaveHarmonic::Crest::WatertightHull_DisplacementInput*& __cordl_internal_get__AnimatedWavesInput() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__AnimatedWavesMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__AnimatedWavesMaterial() ;

constexpr ::WaveHarmonic::Crest::WatertightHull_ClipInput* const& __cordl_internal_get__ClipInput() const;

constexpr ::WaveHarmonic::Crest::WatertightHull_ClipInput*& __cordl_internal_get__ClipInput() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__ClipMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__ClipMaterial() ;

constexpr ::WaveHarmonic::Crest::WatertightHull_DebugFields* const& __cordl_internal_get__Debug() const;

constexpr ::WaveHarmonic::Crest::WatertightHull_DebugFields*& __cordl_internal_get__Debug() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__Displacement() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__Displacement() ;

constexpr bool const& __cordl_internal_get__Inverted() const;

constexpr bool& __cordl_internal_get__Inverted() ;

constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get__Mesh() const;

constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get__Mesh() ;

constexpr ::WaveHarmonic::Crest::WatertightHullMode const& __cordl_internal_get__Mode() const;

constexpr ::WaveHarmonic::Crest::WatertightHullMode& __cordl_internal_get__Mode() ;

constexpr int32_t const& __cordl_internal_get__Queue() const;

constexpr int32_t& __cordl_internal_get__Queue() ;

constexpr bool const& __cordl_internal_get__RecalculateBounds() const;

constexpr bool& __cordl_internal_get__RecalculateBounds() ;

constexpr ::UnityEngine::Rect const& __cordl_internal_get__Rect() const;

constexpr ::UnityEngine::Rect& __cordl_internal_get__Rect() ;

constexpr ::WaveHarmonic::Crest::SampleCollisionHelper* const& __cordl_internal_get__SampleCollisionHelper() const;

constexpr ::WaveHarmonic::Crest::SampleCollisionHelper*& __cordl_internal_get__SampleCollisionHelper() ;

constexpr bool const& __cordl_internal_get__UseClipWithDisplacement() const;

constexpr bool& __cordl_internal_get__UseClipWithDisplacement() ;

constexpr void __cordl_internal_set__AnimatedWavesInput(::WaveHarmonic::Crest::WatertightHull_DisplacementInput*  value) ;

constexpr void __cordl_internal_set__AnimatedWavesMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__ClipInput(::WaveHarmonic::Crest::WatertightHull_ClipInput*  value) ;

constexpr void __cordl_internal_set__ClipMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__Debug(::WaveHarmonic::Crest::WatertightHull_DebugFields*  value) ;

constexpr void __cordl_internal_set__Displacement(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__Inverted(bool  value) ;

constexpr void __cordl_internal_set__Mesh(::UnityW<::UnityEngine::Mesh>  value) ;

constexpr void __cordl_internal_set__Mode(::WaveHarmonic::Crest::WatertightHullMode  value) ;

constexpr void __cordl_internal_set__Queue(int32_t  value) ;

constexpr void __cordl_internal_set__RecalculateBounds(bool  value) ;

constexpr void __cordl_internal_set__Rect(::UnityEngine::Rect  value) ;

constexpr void __cordl_internal_set__SampleCollisionHelper(::WaveHarmonic::Crest::SampleCollisionHelper*  value) ;

constexpr void __cordl_internal_set__UseClipWithDisplacement(bool  value) ;

/// @brief Method .ctor, addr 0x182588c00, size 0xd0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Enabled, addr 0x182588cd0, size 0x30, virtual false, abstract: false, final false
inline bool get_Enabled() ;

/// @brief Method get_Inverted, addr 0x1802e75b0, size 0x10, virtual false, abstract: false, final false
inline bool get_Inverted() ;

/// @brief Method get_Mesh, addr 0x1802e0b30, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Mesh> get_Mesh() ;

/// @brief Method get_Mode, addr 0x180503b40, size 0x10, virtual false, abstract: false, final false
inline ::WaveHarmonic::Crest::WatertightHullMode get_Mode() ;

/// @brief Method get_OnLateUpdateMethod, addr 0x182588d00, size 0x40, virtual true, abstract: false, final false
inline ::System::Action_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>>* get_OnLateUpdateMethod() ;

/// @brief Method get_OnUpdateMethod, addr 0x182588d40, size 0x40, virtual true, abstract: false, final false
inline ::System::Action_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>>* get_OnUpdateMethod() ;

/// @brief Method get_Queue, addr 0x1802e0b20, size 0x10, virtual false, abstract: false, final false
inline int32_t get_Queue() ;

/// @brief Method get_Rect, addr 0x182588d80, size 0xe0, virtual false, abstract: false, final false
inline ::UnityEngine::Rect get_Rect() ;

/// @brief Method get_UseClipWithDisplacement, addr 0x1815f5410, size 0x10, virtual false, abstract: false, final false
inline bool get_UseClipWithDisplacement() ;

/// @brief Method get_UsesClip, addr 0x182588e60, size 0x10, virtual false, abstract: false, final false
inline bool get_UsesClip() ;

/// @brief Method get_UsesDisplacement, addr 0x182588e70, size 0x10, virtual false, abstract: false, final false
inline bool get_UsesDisplacement() ;

/// @brief Method get_Version, addr 0x182550980, size 0x20, virtual true, abstract: false, final false
inline int32_t get_Version() ;

/// @brief Method set_Inverted, addr 0x1803ac420, size 0x10, virtual false, abstract: false, final false
inline void set_Inverted(bool  value) ;

/// @brief Method set_Mesh, addr 0x180308de0, size 0x10, virtual false, abstract: false, final false
inline void set_Mesh(::UnityEngine::Mesh*  value) ;

/// @brief Method set_Mode, addr 0x182588e80, size 0x50, virtual false, abstract: false, final false
inline void set_Mode(::WaveHarmonic::Crest::WatertightHullMode  value) ;

/// @brief Method set_Queue, addr 0x182588ed0, size 0xd0, virtual false, abstract: false, final false
inline void set_Queue(int32_t  value) ;

/// @brief Method set_UseClipWithDisplacement, addr 0x182588fa0, size 0x50, virtual false, abstract: false, final false
inline void set_UseClipWithDisplacement(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WatertightHull() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WatertightHull", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WatertightHull(WatertightHull && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WatertightHull", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WatertightHull(WatertightHull const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16577};

/// @brief Field _Mesh, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  ____Mesh;

/// @brief Field _Queue, offset: 0x58, size: 0x4, def value: None
 int32_t  ____Queue;

/// @brief Field _Mode, offset: 0x5c, size: 0x4, def value: None
 ::WaveHarmonic::Crest::WatertightHullMode  ____Mode;

/// @brief Field _Inverted, offset: 0x60, size: 0x1, def value: None
 bool  ____Inverted;

/// @brief Field _UseClipWithDisplacement, offset: 0x61, size: 0x1, def value: None
 bool  ____UseClipWithDisplacement;

/// @brief Field _Debug, offset: 0x68, size: 0x8, def value: None
 ::WaveHarmonic::Crest::WatertightHull_DebugFields*  ____Debug;

/// @brief Field _ClipMaterial, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____ClipMaterial;

/// @brief Field _AnimatedWavesMaterial, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____AnimatedWavesMaterial;

/// @brief Field _RecalculateBounds, offset: 0x80, size: 0x1, def value: None
 bool  ____RecalculateBounds;

/// @brief Field _Rect, offset: 0x84, size: 0x10, def value: None
 ::UnityEngine::Rect  ____Rect;

/// @brief Field _SampleCollisionHelper, offset: 0x98, size: 0x8, def value: None
 ::WaveHarmonic::Crest::SampleCollisionHelper*  ____SampleCollisionHelper;

/// @brief Field _Displacement, offset: 0xa0, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____Displacement;

/// @brief Field _ClipInput, offset: 0xb0, size: 0x8, def value: None
 ::WaveHarmonic::Crest::WatertightHull_ClipInput*  ____ClipInput;

/// @brief Field _AnimatedWavesInput, offset: 0xb8, size: 0x8, def value: None
 ::WaveHarmonic::Crest::WatertightHull_DisplacementInput*  ____AnimatedWavesInput;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::WatertightHull, ____Mesh) == 0x50, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WatertightHull, ____Queue) == 0x58, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WatertightHull, ____Mode) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WatertightHull, ____Inverted) == 0x60, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WatertightHull, ____UseClipWithDisplacement) == 0x61, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WatertightHull, ____Debug) == 0x68, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WatertightHull, ____ClipMaterial) == 0x70, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WatertightHull, ____AnimatedWavesMaterial) == 0x78, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WatertightHull, ____RecalculateBounds) == 0x80, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WatertightHull, ____Rect) == 0x84, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WatertightHull, ____SampleCollisionHelper) == 0x98, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WatertightHull, ____Displacement) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WatertightHull, ____ClipInput) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WatertightHull, ____AnimatedWavesInput) == 0xb8, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::WatertightHull) == 0xc0, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
