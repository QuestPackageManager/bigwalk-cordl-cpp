#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/RuntimeUtilities.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RuntimeUtilities)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Linq::Expressions {
template<typename TDelegate>
class Expression_1;
}
namespace System::Reflection {
class Assembly;
}
namespace System {
class Attribute;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class IDisposable;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessLayer;
}
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessProfile;
}
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessRenderContext;
}
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessResources;
}
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessVolume;
}
namespace UnityEngine::Rendering::PostProcessing {
class PropertySheet;
}
namespace UnityEngine::Rendering::PostProcessing {
template<typename T>
class RuntimeUtilities__GetAllSceneObjects_d__88_1;
}
namespace UnityEngine::Rendering::PostProcessing {
class RuntimeUtilities___c;
}
namespace UnityEngine::Rendering::PostProcessing {
template<typename T>
class RuntimeUtilities___c__96_1;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
struct RenderBufferLoadAction;
}
namespace UnityEngine::Rendering {
struct RenderBufferStoreAction;
}
namespace UnityEngine::Rendering {
struct RenderTargetIdentifier;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct RenderTextureFormat;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
class Texture3D;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::Rendering::PostProcessing {
class RuntimeUtilities;
}
namespace UnityEngine::Rendering::PostProcessing {
template<typename T>
class RuntimeUtilities__GetAllSceneObjects_d__88_1;
}
namespace UnityEngine::Rendering::PostProcessing {
class RuntimeUtilities___c;
}
namespace UnityEngine::Rendering::PostProcessing {
template<typename T>
class RuntimeUtilities___c__96_1;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*);
MARK_GEN_REF_T_PTR(::UnityEngine::Rendering::PostProcessing::RuntimeUtilities__GetAllSceneObjects_d__88_1);
MARK_REF_T(::UnityEngine::Rendering::PostProcessing::RuntimeUtilities___c*);
MARK_GEN_REF_T_PTR(::UnityEngine::Rendering::PostProcessing::RuntimeUtilities___c__96_1);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::RuntimeUtilities*, "UnityEngine.Rendering.PostProcessing", "RuntimeUtilities");
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::Rendering::PostProcessing::RuntimeUtilities__GetAllSceneObjects_d__88_1, "UnityEngine.Rendering.PostProcessing", "RuntimeUtilities/<GetAllSceneObjects>d__88`1");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::RuntimeUtilities___c*, "UnityEngine.Rendering.PostProcessing", "RuntimeUtilities/<>c");
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::Rendering::PostProcessing::RuntimeUtilities___c__96_1, "UnityEngine.Rendering.PostProcessing", "RuntimeUtilities/<>c__96`1");
// Dependencies System.Object
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: false
// CS Name: UnityEngine.Rendering.PostProcessing.RuntimeUtilities/<>c
class CORDL_TYPE RuntimeUtilities___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities___c*  __9;

/// @brief Field <>9__95_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__95_0, put=setStaticF___9__95_0)) ::System::Func_2<::System::Reflection::Assembly*,::System::Collections::Generic::IEnumerable_1<::System::Type*>*>*  __9__95_0;

static inline ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities___c* New_ctor() ;

/// @brief Method <GetAllAssemblyTypes>b__95_0, addr 0x181fd0410, size 0x50, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* _GetAllAssemblyTypes_b__95_0(::System::Reflection::Assembly*  t) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities___c* getStaticF___9() ;

static inline ::System::Func_2<::System::Reflection::Assembly*,::System::Collections::Generic::IEnumerable_1<::System::Type*>*>* getStaticF___9__95_0() ;

static inline void setStaticF___9(::UnityEngine::Rendering::PostProcessing::RuntimeUtilities___c*  value) ;

static inline void setStaticF___9__95_0(::System::Func_2<::System::Reflection::Assembly*,::System::Collections::Generic::IEnumerable_1<::System::Type*>*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RuntimeUtilities___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RuntimeUtilities___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RuntimeUtilities___c(RuntimeUtilities___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeUtilities___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RuntimeUtilities___c(RuntimeUtilities___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18660};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::RuntimeUtilities___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
// Dependencies System.Object
namespace UnityEngine::Rendering::PostProcessing {
// cpp template
template<typename T>
// Is value type: false
// CS Name: UnityEngine.Rendering.PostProcessing.RuntimeUtilities/<>c__96`1<T>
class CORDL_TYPE RuntimeUtilities___c__96_1 : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities___c__96_1<T>*  __9;

/// @brief Field <>9__96_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__96_0, put=setStaticF___9__96_0)) ::System::Func_2<::System::Type*,bool>*  __9__96_0;

static inline ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities___c__96_1<T>* New_ctor() ;

/// @brief Method <GetAllTypesDerivedFrom>b__96_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool _GetAllTypesDerivedFrom_b__96_0(::System::Type*  t) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities___c__96_1<T>* getStaticF___9() ;

static inline ::System::Func_2<::System::Type*,bool>* getStaticF___9__96_0() ;

static inline void setStaticF___9(::UnityEngine::Rendering::PostProcessing::RuntimeUtilities___c__96_1<T>*  value) ;

static inline void setStaticF___9__96_0(::System::Func_2<::System::Type*,bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RuntimeUtilities___c__96_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RuntimeUtilities___c__96_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RuntimeUtilities___c__96_1(RuntimeUtilities___c__96_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeUtilities___c__96_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RuntimeUtilities___c__96_1(RuntimeUtilities___c__96_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18661};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Rendering::PostProcessing
// Dependencies System.Object, UnityEngine.GameObject
namespace UnityEngine::Rendering::PostProcessing {
// cpp template
template<typename T>
// Is value type: false
// CS Name: UnityEngine.Rendering.PostProcessing.RuntimeUtilities/<GetAllSceneObjects>d__88`1<T>
class CORDL_TYPE RuntimeUtilities__GetAllSceneObjects_d__88_1 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_T__get_Current)) T  System_Collections_Generic_IEnumerator_T__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) T  __2__current;

/// @brief Field <>7__wrap2, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___7__wrap2, put=__cordl_internal_set___7__wrap2)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  __7__wrap2;

/// @brief Field <>7__wrap3, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get___7__wrap3, put=__cordl_internal_set___7__wrap3)) int32_t  __7__wrap3;

/// @brief Field <>7__wrap4, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get___7__wrap4, put=__cordl_internal_set___7__wrap4)) ::System::Collections::IEnumerator*  __7__wrap4;

/// @brief Field <>l__initialThreadId, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get___l__initialThreadId, put=__cordl_internal_set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Field <queue>5__2, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__queue_5__2, put=__cordl_internal_set__queue_5__2)) ::System::Collections::Generic::Queue_1<::UnityW<::UnityEngine::Transform>>*  _queue_5__2;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<T>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<T>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities__GetAllSceneObjects_d__88_1<T>* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerator<T>.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline T System_Collections_Generic_IEnumerator_T__get_Current() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr T const& __cordl_internal_get___2__current() const;

constexpr T& __cordl_internal_get___2__current() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get___7__wrap2() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get___7__wrap2() ;

constexpr int32_t const& __cordl_internal_get___7__wrap3() const;

constexpr int32_t& __cordl_internal_get___7__wrap3() ;

constexpr ::System::Collections::IEnumerator* const& __cordl_internal_get___7__wrap4() const;

constexpr ::System::Collections::IEnumerator*& __cordl_internal_get___7__wrap4() ;

constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

constexpr int32_t& __cordl_internal_get___l__initialThreadId() ;

constexpr ::System::Collections::Generic::Queue_1<::UnityW<::UnityEngine::Transform>>* const& __cordl_internal_get__queue_5__2() const;

constexpr ::System::Collections::Generic::Queue_1<::UnityW<::UnityEngine::Transform>>*& __cordl_internal_get__queue_5__2() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(T  value) ;

constexpr void __cordl_internal_set___7__wrap2(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set___7__wrap3(int32_t  value) ;

constexpr void __cordl_internal_set___7__wrap4(::System::Collections::IEnumerator*  value) ;

constexpr void __cordl_internal_set___l__initialThreadId(int32_t  value) ;

constexpr void __cordl_internal_set__queue_5__2(::System::Collections::Generic::Queue_1<::UnityW<::UnityEngine::Transform>>*  value) ;

/// @brief Method <>m__Finally1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __m__Finally1() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
constexpr ::System::Collections::Generic::IEnumerable_1<T>* i___System__Collections__Generic__IEnumerable_1_T_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<T>"
constexpr ::System::Collections::Generic::IEnumerator_1<T>* i___System__Collections__Generic__IEnumerator_1_T_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RuntimeUtilities__GetAllSceneObjects_d__88_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RuntimeUtilities__GetAllSceneObjects_d__88_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RuntimeUtilities__GetAllSceneObjects_d__88_1(RuntimeUtilities__GetAllSceneObjects_d__88_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeUtilities__GetAllSceneObjects_d__88_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RuntimeUtilities__GetAllSceneObjects_d__88_1(RuntimeUtilities__GetAllSceneObjects_d__88_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18662};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 T  _____2__current;

/// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
 int32_t  _____l__initialThreadId;

/// @brief Field <queue>5__2, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<::UnityW<::UnityEngine::Transform>>*  ____queue_5__2;

/// @brief Field <>7__wrap2, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  _____7__wrap2;

/// @brief Field <>7__wrap3, offset: 0x38, size: 0x4, def value: None
 int32_t  _____7__wrap3;

/// @brief Field <>7__wrap4, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::IEnumerator*  _____7__wrap4;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Rendering::PostProcessing
// Dependencies System.Object
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: false
// CS Name: UnityEngine.Rendering.PostProcessing.RuntimeUtilities
class CORDL_TYPE RuntimeUtilities : public ::System::Object {
public:
// Declarations
template<typename T>
using _GetAllSceneObjects_d__88_1 = ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities__GetAllSceneObjects_d__88_1<T>;

using __c = ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities___c;

template<typename T>
using __c__96_1 = ::UnityEngine::Rendering::PostProcessing::RuntimeUtilities___c__96_1<T>;

/// @brief Field m_AssemblyTypes, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_AssemblyTypes, put=setStaticF_m_AssemblyTypes)) ::System::Collections::Generic::IEnumerable_1<::System::Type*>*  m_AssemblyTypes;

/// @brief Field m_BlackTexture, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_BlackTexture, put=setStaticF_m_BlackTexture)) ::UnityW<::UnityEngine::Texture2D>  m_BlackTexture;

/// @brief Field m_BlackTexture3D, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_BlackTexture3D, put=setStaticF_m_BlackTexture3D)) ::UnityW<::UnityEngine::Texture3D>  m_BlackTexture3D;

/// @brief Field m_LutStrips, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_LutStrips, put=setStaticF_m_LutStrips)) ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Texture2D>>*  m_LutStrips;

/// @brief Field m_TransparentTexture, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_TransparentTexture, put=setStaticF_m_TransparentTexture)) ::UnityW<::UnityEngine::Texture2D>  m_TransparentTexture;

/// @brief Field m_TransparentTexture3D, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_TransparentTexture3D, put=setStaticF_m_TransparentTexture3D)) ::UnityW<::UnityEngine::Texture3D>  m_TransparentTexture3D;

/// @brief Field m_WhiteTexture, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_WhiteTexture, put=setStaticF_m_WhiteTexture)) ::UnityW<::UnityEngine::Texture2D>  m_WhiteTexture;

/// @brief Field m_WhiteTexture3D, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_WhiteTexture3D, put=setStaticF_m_WhiteTexture3D)) ::UnityW<::UnityEngine::Texture3D>  m_WhiteTexture3D;

/// @brief Field s_CopyFromTexArrayMaterial, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_CopyFromTexArrayMaterial, put=setStaticF_s_CopyFromTexArrayMaterial)) ::UnityW<::UnityEngine::Material>  s_CopyFromTexArrayMaterial;

/// @brief Field s_CopyFromTexArraySheet, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_CopyFromTexArraySheet, put=setStaticF_s_CopyFromTexArraySheet)) ::UnityEngine::Rendering::PostProcessing::PropertySheet*  s_CopyFromTexArraySheet;

/// @brief Field s_CopyMaterial, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_CopyMaterial, put=setStaticF_s_CopyMaterial)) ::UnityW<::UnityEngine::Material>  s_CopyMaterial;

/// @brief Field s_CopySheet, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_CopySheet, put=setStaticF_s_CopySheet)) ::UnityEngine::Rendering::PostProcessing::PropertySheet*  s_CopySheet;

/// @brief Field s_CopyStdFromDoubleWideMaterial, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_CopyStdFromDoubleWideMaterial, put=setStaticF_s_CopyStdFromDoubleWideMaterial)) ::UnityW<::UnityEngine::Material>  s_CopyStdFromDoubleWideMaterial;

/// @brief Field s_CopyStdMaterial, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_CopyStdMaterial, put=setStaticF_s_CopyStdMaterial)) ::UnityW<::UnityEngine::Material>  s_CopyStdMaterial;

/// @brief Field s_FullscreenTriangle, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_FullscreenTriangle, put=setStaticF_s_FullscreenTriangle)) ::UnityW<::UnityEngine::Mesh>  s_FullscreenTriangle;

/// @brief Field s_Resources, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Resources, put=setStaticF_s_Resources)) ::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessResources>  s_Resources;

/// @brief Method BlitFullscreenTriangle, addr 0x181fcc6e0, size 0x1b0, virtual false, abstract: false, final false
static inline void BlitFullscreenTriangle(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RenderTargetIdentifier  source, ::UnityEngine::Rendering::RenderTargetIdentifier  destination, bool  clear, ::System::Nullable_1<::UnityEngine::Rect>  viewport, bool  preserveDepth) ;

/// @brief Method BlitFullscreenTriangle, addr 0x181fcc160, size 0x210, virtual false, abstract: false, final false
static inline void BlitFullscreenTriangle(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RenderTargetIdentifier  source, ::UnityEngine::Rendering::RenderTargetIdentifier  destination, ::UnityEngine::Rendering::RenderTargetIdentifier  depth, ::UnityEngine::Rendering::PostProcessing::PropertySheet*  propertySheet, int32_t  pass, bool  clear, ::System::Nullable_1<::UnityEngine::Rect>  viewport) ;

/// @brief Method BlitFullscreenTriangle, addr 0x181fcc370, size 0x1f0, virtual false, abstract: false, final false
static inline void BlitFullscreenTriangle(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RenderTargetIdentifier  source, ::UnityEngine::Rendering::RenderTargetIdentifier  destination, ::UnityEngine::Rendering::PostProcessing::PropertySheet*  propertySheet, int32_t  pass, bool  clear, ::System::Nullable_1<::UnityEngine::Rect>  viewport, bool  preserveDepth) ;

/// @brief Method BlitFullscreenTriangle, addr 0x181fcbf90, size 0x1d0, virtual false, abstract: false, final false
static inline void BlitFullscreenTriangle(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RenderTargetIdentifier  source, ::UnityEngine::Rendering::RenderTargetIdentifier  destination, ::UnityEngine::Rendering::PostProcessing::PropertySheet*  propertySheet, int32_t  pass, ::UnityEngine::Rendering::RenderBufferLoadAction  loadAction, ::System::Nullable_1<::UnityEngine::Rect>  viewport, bool  preserveDepth) ;

/// @brief Method BlitFullscreenTriangle, addr 0x181fcc560, size 0x180, virtual false, abstract: false, final false
static inline void BlitFullscreenTriangle(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RenderTargetIdentifier  source, ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>  destinations, ::UnityEngine::Rendering::RenderTargetIdentifier  depth, ::UnityEngine::Rendering::PostProcessing::PropertySheet*  propertySheet, int32_t  pass, bool  clear, ::System::Nullable_1<::UnityEngine::Rect>  viewport) ;

/// @brief Method BlitFullscreenTriangleFromDoubleWide, addr 0x181fcba10, size 0x140, virtual false, abstract: false, final false
static inline void BlitFullscreenTriangleFromDoubleWide(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RenderTargetIdentifier  source, ::UnityEngine::Rendering::RenderTargetIdentifier  destination, ::UnityEngine::Material*  material, int32_t  pass, int32_t  eye) ;

/// @brief Method BlitFullscreenTriangleFromTexArray, addr 0x181fcbb50, size 0x180, virtual false, abstract: false, final false
static inline void BlitFullscreenTriangleFromTexArray(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RenderTargetIdentifier  source, ::UnityEngine::Rendering::RenderTargetIdentifier  destination, ::UnityEngine::Rendering::PostProcessing::PropertySheet*  propertySheet, int32_t  pass, bool  clear, int32_t  depthSlice) ;

/// @brief Method BlitFullscreenTriangleToDoubleWide, addr 0x181fcbcd0, size 0x140, virtual false, abstract: false, final false
static inline void BlitFullscreenTriangleToDoubleWide(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RenderTargetIdentifier  source, ::UnityEngine::Rendering::RenderTargetIdentifier  destination, ::UnityEngine::Rendering::PostProcessing::PropertySheet*  propertySheet, int32_t  pass, int32_t  eye) ;

/// @brief Method BlitFullscreenTriangleToTexArray, addr 0x181fcbe10, size 0x180, virtual false, abstract: false, final false
static inline void BlitFullscreenTriangleToTexArray(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RenderTargetIdentifier  source, ::UnityEngine::Rendering::RenderTargetIdentifier  destination, ::UnityEngine::Rendering::PostProcessing::PropertySheet*  propertySheet, int32_t  pass, bool  clear, int32_t  depthSlice) ;

/// @brief Method BuiltinBlit, addr 0x181fcc970, size 0xd0, virtual false, abstract: false, final false
static inline void BuiltinBlit(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RenderTargetIdentifier  source, ::UnityEngine::Rendering::RenderTargetIdentifier  destination) ;

/// @brief Method BuiltinBlit, addr 0x181fcc890, size 0xe0, virtual false, abstract: false, final false
static inline void BuiltinBlit(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RenderTargetIdentifier  source, ::UnityEngine::Rendering::RenderTargetIdentifier  destination, ::UnityEngine::Material*  mat, int32_t  pass) ;

/// @brief Method CopyTexture, addr 0x181fcca40, size 0x1d0, virtual false, abstract: false, final false
static inline void CopyTexture(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RenderTargetIdentifier  source, ::UnityEngine::Rendering::RenderTargetIdentifier  destination) ;

/// @brief Method CreateIfNull, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void CreateIfNull(::by_ref<T>  obj) ;

/// @brief Method Destroy, addr 0x181fcce10, size 0x30, virtual false, abstract: false, final false
static inline void Destroy(::UnityEngine::Object*  obj) ;

/// @brief Method DestroyProfile, addr 0x181fccc10, size 0xc0, virtual false, abstract: false, final false
static inline void DestroyProfile(::UnityEngine::Rendering::PostProcessing::PostProcessProfile*  profile, bool  destroyEffects) ;

/// @brief Method DestroyVolume, addr 0x181fcccd0, size 0x140, virtual false, abstract: false, final false
static inline void DestroyVolume(::UnityEngine::Rendering::PostProcessing::PostProcessVolume*  volume, bool  destroyProfile, bool  destroyGameObject) ;

/// @brief Method Exp2, addr 0x181fcce40, size 0x10, virtual false, abstract: false, final false
static inline float_t Exp2(float_t  x) ;

/// @brief Method GenerateJitteredProjectionMatrixFromOriginal, addr 0x181fcce50, size 0x110, virtual false, abstract: false, final false
static inline ::UnityEngine::Matrix4x4 GenerateJitteredProjectionMatrixFromOriginal(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context, ::UnityEngine::Matrix4x4  origProj, ::UnityEngine::Vector2  jitter) ;

/// @brief Method GetAllAssemblyTypes, addr 0x181fccf60, size 0x140, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* GetAllAssemblyTypes() ;

/// @brief Method GetAllSceneObjects, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::Collections::Generic::IEnumerable_1<T>* GetAllSceneObjects() ;

/// @brief Method GetAllTypesDerivedFrom, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* GetAllTypesDerivedFrom() ;

/// @brief Method GetAttribute, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T GetAttribute(::System::Type*  type) ;

/// @brief Method GetFieldPath, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TType,typename TValue>
static inline ::StringW GetFieldPath(::System::Linq::Expressions::Expression_1<::System::Func_2<TType,TValue>*>*  expr) ;

/// @brief Method GetJitteredOrthographicProjectionMatrix, addr 0x181fcd0a0, size 0x140, virtual false, abstract: false, final false
static inline ::UnityEngine::Matrix4x4 GetJitteredOrthographicProjectionMatrix(::UnityEngine::Camera*  camera, ::UnityEngine::Vector2  offset) ;

/// @brief Method GetJitteredPerspectiveProjectionMatrix, addr 0x181fcd1e0, size 0x1b0, virtual false, abstract: false, final false
static inline ::UnityEngine::Matrix4x4 GetJitteredPerspectiveProjectionMatrix(::UnityEngine::Camera*  camera, ::UnityEngine::Vector2  offset) ;

/// @brief Method GetLutStrip, addr 0x181fcd390, size 0x2c0, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Texture2D> GetLutStrip(int32_t  size) ;

/// @brief Method GetMemberAttributes, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TType,typename TValue>
static inline ::ArrayW<::System::Attribute*> GetMemberAttributes(::System::Linq::Expressions::Expression_1<::System::Func_2<TType,TValue>*>*  expr) ;

/// @brief Method IsDynamicResolutionEnabled, addr 0x181fcd650, size 0x60, virtual false, abstract: false, final false
static inline bool IsDynamicResolutionEnabled(::UnityEngine::Camera*  camera) ;

/// @brief Method IsPostProcessingActive, addr 0x181fcd6b0, size 0x30, virtual false, abstract: false, final false
static inline bool IsPostProcessingActive(::UnityEngine::Rendering::PostProcessing::PostProcessLayer*  layer) ;

/// @brief Method IsResolvedDepthAvailable, addr 0x181fcd6e0, size 0x60, virtual false, abstract: false, final false
static inline bool IsResolvedDepthAvailable(::UnityEngine::Camera*  camera) ;

/// @brief Method IsTemporalAntialiasingActive, addr 0x181fcd740, size 0x50, virtual false, abstract: false, final false
static inline bool IsTemporalAntialiasingActive(::UnityEngine::Rendering::PostProcessing::PostProcessLayer*  layer) ;

/// @brief Method SetRenderTargetWithLoadStoreAction, addr 0x181fcd7e0, size 0x90, virtual false, abstract: false, final false
static inline void SetRenderTargetWithLoadStoreAction(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RenderTargetIdentifier  color, ::UnityEngine::Rendering::RenderBufferLoadAction  colorLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  colorStoreAction, ::UnityEngine::Rendering::RenderTargetIdentifier  depth, ::UnityEngine::Rendering::RenderBufferLoadAction  depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  depthStoreAction) ;

/// @brief Method SetRenderTargetWithLoadStoreAction, addr 0x181fcd870, size 0x40, virtual false, abstract: false, final false
static inline void SetRenderTargetWithLoadStoreAction(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RenderTargetIdentifier  rt, ::UnityEngine::Rendering::RenderBufferLoadAction  loadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  storeAction) ;

/// @brief Method SetRenderTargetWithLoadStoreAction, addr 0x181fcd790, size 0x50, virtual false, abstract: false, final false
static inline void SetRenderTargetWithLoadStoreAction(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RenderTargetIdentifier  rt, ::UnityEngine::Rendering::RenderBufferLoadAction  loadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  storeAction, ::UnityEngine::Rendering::RenderBufferLoadAction  depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  depthStoreAction) ;

/// @brief Method UpdateResources, addr 0x181fcd8b0, size 0x220, virtual false, abstract: false, final false
static inline void UpdateResources(::UnityEngine::Rendering::PostProcessing::PostProcessResources*  resources) ;

static inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* getStaticF_m_AssemblyTypes() ;

static inline ::UnityW<::UnityEngine::Texture2D> getStaticF_m_BlackTexture() ;

static inline ::UnityW<::UnityEngine::Texture3D> getStaticF_m_BlackTexture3D() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Texture2D>>* getStaticF_m_LutStrips() ;

static inline ::UnityW<::UnityEngine::Texture2D> getStaticF_m_TransparentTexture() ;

static inline ::UnityW<::UnityEngine::Texture3D> getStaticF_m_TransparentTexture3D() ;

static inline ::UnityW<::UnityEngine::Texture2D> getStaticF_m_WhiteTexture() ;

static inline ::UnityW<::UnityEngine::Texture3D> getStaticF_m_WhiteTexture3D() ;

static inline ::UnityW<::UnityEngine::Material> getStaticF_s_CopyFromTexArrayMaterial() ;

static inline ::UnityEngine::Rendering::PostProcessing::PropertySheet* getStaticF_s_CopyFromTexArraySheet() ;

static inline ::UnityW<::UnityEngine::Material> getStaticF_s_CopyMaterial() ;

static inline ::UnityEngine::Rendering::PostProcessing::PropertySheet* getStaticF_s_CopySheet() ;

static inline ::UnityW<::UnityEngine::Material> getStaticF_s_CopyStdFromDoubleWideMaterial() ;

static inline ::UnityW<::UnityEngine::Material> getStaticF_s_CopyStdMaterial() ;

static inline ::UnityW<::UnityEngine::Mesh> getStaticF_s_FullscreenTriangle() ;

static inline ::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessResources> getStaticF_s_Resources() ;

/// @brief Method get_blackTexture, addr 0x181fcdc60, size 0x120, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Texture2D> get_blackTexture() ;

/// @brief Method get_blackTexture3D, addr 0x181fcdb30, size 0x130, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Texture3D> get_blackTexture3D() ;

/// @brief Method get_copyFromTexArrayMaterial, addr 0x181fcdd80, size 0xf0, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Material> get_copyFromTexArrayMaterial() ;

/// @brief Method get_copyFromTexArraySheet, addr 0x181fcde70, size 0x1a0, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::PostProcessing::PropertySheet* get_copyFromTexArraySheet() ;

/// @brief Method get_copyMaterial, addr 0x181fce010, size 0xf0, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Material> get_copyMaterial() ;

/// @brief Method get_copySheet, addr 0x181fce100, size 0xe0, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::PostProcessing::PropertySheet* get_copySheet() ;

/// @brief Method get_copyStdFromDoubleWideMaterial, addr 0x181fce1e0, size 0xf0, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Material> get_copyStdFromDoubleWideMaterial() ;

/// @brief Method get_copyStdMaterial, addr 0x181fce2d0, size 0xf0, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Material> get_copyStdMaterial() ;

/// @brief Method get_defaultHDRRenderTextureFormat, addr 0x1813ef7d0, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::RenderTextureFormat get_defaultHDRRenderTextureFormat() ;

/// @brief Method get_fullscreenTriangle, addr 0x181fce3c0, size 0x280, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Mesh> get_fullscreenTriangle() ;

/// @brief Method get_isAndroidOpenGL, addr 0x181fce640, size 0x30, virtual false, abstract: false, final false
static inline bool get_isAndroidOpenGL() ;

/// @brief Method get_isLinearColorSpace, addr 0x1813efe50, size 0x20, virtual false, abstract: false, final false
static inline bool get_isLinearColorSpace() ;

/// @brief Method get_isOpenGLES, addr 0x181fce670, size 0x20, virtual false, abstract: false, final false
static inline bool get_isOpenGLES() ;

/// @brief Method get_isSinglePassStereoEnabled, addr 0x181fce690, size 0x30, virtual false, abstract: false, final false
static inline bool get_isSinglePassStereoEnabled() ;

/// @brief Method get_isVREnabled, addr 0x181fce6c0, size 0x10, virtual false, abstract: false, final false
static inline bool get_isVREnabled() ;

/// @brief Method get_isWebNonWebGPU, addr 0x181fce6d0, size 0x30, virtual false, abstract: false, final false
static inline bool get_isWebNonWebGPU() ;

/// @brief Method get_scriptableRenderPipelineActive, addr 0x181fce700, size 0x20, virtual false, abstract: false, final false
static inline bool get_scriptableRenderPipelineActive() ;

/// @brief Method get_supportsDeferredShading, addr 0x181fce720, size 0x40, virtual false, abstract: false, final false
static inline bool get_supportsDeferredShading() ;

/// @brief Method get_supportsDepthNormals, addr 0x181fce760, size 0x40, virtual false, abstract: false, final false
static inline bool get_supportsDepthNormals() ;

/// @brief Method get_transparentTexture, addr 0x181fce8d0, size 0x120, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Texture2D> get_transparentTexture() ;

/// @brief Method get_transparentTexture3D, addr 0x181fce7a0, size 0x130, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Texture3D> get_transparentTexture3D() ;

/// @brief Method get_whiteTexture, addr 0x181fceb20, size 0x120, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Texture2D> get_whiteTexture() ;

/// @brief Method get_whiteTexture3D, addr 0x181fce9f0, size 0x130, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Texture3D> get_whiteTexture3D() ;

/// @brief Method hasAlpha, addr 0x181fcec40, size 0x20, virtual false, abstract: false, final false
static inline bool hasAlpha(::UnityEngine::RenderTextureFormat  format) ;

/// @brief Method isFloatingPointFormat, addr 0x181fcec60, size 0x20, virtual false, abstract: false, final false
static inline bool isFloatingPointFormat(::UnityEngine::RenderTextureFormat  format) ;

/// @brief Method isValidResources, addr 0x181fcec80, size 0x40, virtual false, abstract: false, final false
static inline bool isValidResources() ;

static inline void setStaticF_m_AssemblyTypes(::System::Collections::Generic::IEnumerable_1<::System::Type*>*  value) ;

static inline void setStaticF_m_BlackTexture(::UnityW<::UnityEngine::Texture2D>  value) ;

static inline void setStaticF_m_BlackTexture3D(::UnityW<::UnityEngine::Texture3D>  value) ;

static inline void setStaticF_m_LutStrips(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Texture2D>>*  value) ;

static inline void setStaticF_m_TransparentTexture(::UnityW<::UnityEngine::Texture2D>  value) ;

static inline void setStaticF_m_TransparentTexture3D(::UnityW<::UnityEngine::Texture3D>  value) ;

static inline void setStaticF_m_WhiteTexture(::UnityW<::UnityEngine::Texture2D>  value) ;

static inline void setStaticF_m_WhiteTexture3D(::UnityW<::UnityEngine::Texture3D>  value) ;

static inline void setStaticF_s_CopyFromTexArrayMaterial(::UnityW<::UnityEngine::Material>  value) ;

static inline void setStaticF_s_CopyFromTexArraySheet(::UnityEngine::Rendering::PostProcessing::PropertySheet*  value) ;

static inline void setStaticF_s_CopyMaterial(::UnityW<::UnityEngine::Material>  value) ;

static inline void setStaticF_s_CopySheet(::UnityEngine::Rendering::PostProcessing::PropertySheet*  value) ;

static inline void setStaticF_s_CopyStdFromDoubleWideMaterial(::UnityW<::UnityEngine::Material>  value) ;

static inline void setStaticF_s_CopyStdMaterial(::UnityW<::UnityEngine::Material>  value) ;

static inline void setStaticF_s_FullscreenTriangle(::UnityW<::UnityEngine::Mesh>  value) ;

static inline void setStaticF_s_Resources(::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessResources>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RuntimeUtilities() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RuntimeUtilities", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RuntimeUtilities(RuntimeUtilities && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeUtilities", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RuntimeUtilities(RuntimeUtilities const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18663};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::RuntimeUtilities) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
