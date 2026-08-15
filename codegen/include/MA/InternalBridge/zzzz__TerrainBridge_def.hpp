#pragma once
// IWYU pragma private; include "MA/InternalBridge/TerrainBridge.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TerrainBridge)
namespace MA::InternalBridge {
template<typename T>
class TerrainBridge_ListPrivateFieldAccess_1;
}
namespace MA::InternalBridge {
class TerrainBridge_TerrainDataInternal;
}
namespace MA::InternalBridge {
class TerrainBridge_UnityObjectInternal;
}
namespace MA::InternalBridge {
class TerrainDataInternal_TerrainBridge_ComputeDetailInstanceTransformsInjected;
}
namespace MA::InternalBridge {
class TerrainDataInternal_TerrainBridge_GetInterpolatedNormalInjected;
}
namespace MA::InternalBridge {
class TerrainDataInternal_TerrainBridge_InternalGetTreeInstancesInjected;
}
namespace MA::InternalBridge {
class TerrainDataInternal_TerrainBridge_InternalSetDetailLayerInjected;
}
namespace MA::InternalBridge {
class TerrainDataInternal_TerrainBridge_InternalSetTreeInstancesInjected;
}
namespace MA::InternalBridge {
class UnityObjectInternal_TerrainBridge_GetPtrFromInstanceIDPrivate;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace Unity::Collections {
struct Allocator;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace Unity::Collections {
template<typename T>
struct NativeList_1;
}
namespace UnityEngine::Bindings {
struct BlittableArrayWrapper;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct DetailInstanceTransform;
}
namespace UnityEngine {
struct EntityId;
}
namespace UnityEngine {
class TerrainData;
}
namespace UnityEngine {
struct TreeInstance;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace MA::InternalBridge {
class TerrainBridge;
}
namespace MA::InternalBridge {
template<typename T>
class TerrainBridge_ListPrivateFieldAccess_1;
}
namespace MA::InternalBridge {
class TerrainBridge_TerrainDataInternal;
}
namespace MA::InternalBridge {
class TerrainBridge_UnityObjectInternal;
}
namespace MA::InternalBridge {
class TerrainDataInternal_TerrainBridge_ComputeDetailInstanceTransformsInjected;
}
namespace MA::InternalBridge {
class TerrainDataInternal_TerrainBridge_GetInterpolatedNormalInjected;
}
namespace MA::InternalBridge {
class TerrainDataInternal_TerrainBridge_InternalGetTreeInstancesInjected;
}
namespace MA::InternalBridge {
class TerrainDataInternal_TerrainBridge_InternalSetDetailLayerInjected;
}
namespace MA::InternalBridge {
class TerrainDataInternal_TerrainBridge_InternalSetTreeInstancesInjected;
}
namespace MA::InternalBridge {
class UnityObjectInternal_TerrainBridge_GetPtrFromInstanceIDPrivate;
}
// Write type traits
MARK_REF_T(::MA::InternalBridge::TerrainBridge*);
MARK_GEN_REF_T_PTR(::MA::InternalBridge::TerrainBridge_ListPrivateFieldAccess_1);
MARK_REF_T(::MA::InternalBridge::TerrainBridge_TerrainDataInternal*);
MARK_REF_T(::MA::InternalBridge::TerrainBridge_UnityObjectInternal*);
MARK_REF_T(::MA::InternalBridge::TerrainDataInternal_TerrainBridge_ComputeDetailInstanceTransformsInjected*);
MARK_REF_T(::MA::InternalBridge::TerrainDataInternal_TerrainBridge_GetInterpolatedNormalInjected*);
MARK_REF_T(::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalGetTreeInstancesInjected*);
MARK_REF_T(::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalSetDetailLayerInjected*);
MARK_REF_T(::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalSetTreeInstancesInjected*);
MARK_REF_T(::MA::InternalBridge::UnityObjectInternal_TerrainBridge_GetPtrFromInstanceIDPrivate*);
DEFINE_IL2CPP_CLASS(::MA::InternalBridge::TerrainBridge*, "MA.InternalBridge", "TerrainBridge");
DEFINE_IL2CPP_GEN_CLASS_PTR(::MA::InternalBridge::TerrainBridge_ListPrivateFieldAccess_1, "MA.InternalBridge", "TerrainBridge/ListPrivateFieldAccess`1");
DEFINE_IL2CPP_CLASS(::MA::InternalBridge::TerrainBridge_TerrainDataInternal*, "MA.InternalBridge", "TerrainBridge/TerrainDataInternal");
DEFINE_IL2CPP_CLASS(::MA::InternalBridge::TerrainBridge_UnityObjectInternal*, "MA.InternalBridge", "TerrainBridge/UnityObjectInternal");
DEFINE_IL2CPP_CLASS(::MA::InternalBridge::TerrainDataInternal_TerrainBridge_ComputeDetailInstanceTransformsInjected*, "MA.InternalBridge", "TerrainBridge/TerrainDataInternal/ComputeDetailInstanceTransformsInjected");
DEFINE_IL2CPP_CLASS(::MA::InternalBridge::TerrainDataInternal_TerrainBridge_GetInterpolatedNormalInjected*, "MA.InternalBridge", "TerrainBridge/TerrainDataInternal/GetInterpolatedNormalInjected");
DEFINE_IL2CPP_CLASS(::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalGetTreeInstancesInjected*, "MA.InternalBridge", "TerrainBridge/TerrainDataInternal/InternalGetTreeInstancesInjected");
DEFINE_IL2CPP_CLASS(::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalSetDetailLayerInjected*, "MA.InternalBridge", "TerrainBridge/TerrainDataInternal/InternalSetDetailLayerInjected");
DEFINE_IL2CPP_CLASS(::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalSetTreeInstancesInjected*, "MA.InternalBridge", "TerrainBridge/TerrainDataInternal/InternalSetTreeInstancesInjected");
DEFINE_IL2CPP_CLASS(::MA::InternalBridge::UnityObjectInternal_TerrainBridge_GetPtrFromInstanceIDPrivate*, "MA.InternalBridge", "TerrainBridge/UnityObjectInternal/GetPtrFromInstanceIDPrivate");
// Dependencies System.MulticastDelegate
namespace MA::InternalBridge {
// Is value type: false
// CS Name: MA.InternalBridge.TerrainBridge/TerrainDataInternal/GetInterpolatedNormalInjected
class CORDL_TYPE TerrainDataInternal_TerrainBridge_GetInterpolatedNormalInjected : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x181ecc390, size 0xb0, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::IntPtr  terrainDataPtr, float_t  x, float_t  y, ::by_ref<::UnityEngine::Vector3>  normal, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1804dc830, size 0x20, virtual true, abstract: false, final false
inline void EndInvoke(::by_ref<::UnityEngine::Vector3>  normal, ::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x181ecc440, size 0xf0, virtual true, abstract: false, final false
inline void Invoke(::System::IntPtr  terrainDataPtr, float_t  x, float_t  y, ::by_ref<::UnityEngine::Vector3>  normal) ;

static inline ::MA::InternalBridge::TerrainDataInternal_TerrainBridge_GetInterpolatedNormalInjected* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x181ecc530, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TerrainDataInternal_TerrainBridge_GetInterpolatedNormalInjected() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TerrainDataInternal_TerrainBridge_GetInterpolatedNormalInjected", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TerrainDataInternal_TerrainBridge_GetInterpolatedNormalInjected(TerrainDataInternal_TerrainBridge_GetInterpolatedNormalInjected && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TerrainDataInternal_TerrainBridge_GetInterpolatedNormalInjected", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TerrainDataInternal_TerrainBridge_GetInterpolatedNormalInjected(TerrainDataInternal_TerrainBridge_GetInterpolatedNormalInjected const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21119};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::InternalBridge::TerrainDataInternal_TerrainBridge_GetInterpolatedNormalInjected) == 0x80, "Size mismatch!");

} // namespace end def MA::InternalBridge
// Dependencies System.MulticastDelegate
namespace MA::InternalBridge {
// Is value type: false
// CS Name: MA.InternalBridge.TerrainBridge/TerrainDataInternal/InternalGetTreeInstancesInjected
class CORDL_TYPE TerrainDataInternal_TerrainBridge_InternalGetTreeInstancesInjected : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x181ecc7f0, size 0x80, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::IntPtr  terrainDataPtr, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  treeInstances, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1804dc830, size 0x20, virtual true, abstract: false, final false
inline void EndInvoke(::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  treeInstances, ::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1804f6ae0, size 0xc0, virtual true, abstract: false, final false
inline void Invoke(::System::IntPtr  terrainDataPtr, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  treeInstances) ;

static inline ::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalGetTreeInstancesInjected* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x180552900, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TerrainDataInternal_TerrainBridge_InternalGetTreeInstancesInjected() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TerrainDataInternal_TerrainBridge_InternalGetTreeInstancesInjected", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TerrainDataInternal_TerrainBridge_InternalGetTreeInstancesInjected(TerrainDataInternal_TerrainBridge_InternalGetTreeInstancesInjected && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TerrainDataInternal_TerrainBridge_InternalGetTreeInstancesInjected", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TerrainDataInternal_TerrainBridge_InternalGetTreeInstancesInjected(TerrainDataInternal_TerrainBridge_InternalGetTreeInstancesInjected const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21120};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalGetTreeInstancesInjected) == 0x80, "Size mismatch!");

} // namespace end def MA::InternalBridge
// Dependencies System.MulticastDelegate
namespace MA::InternalBridge {
// Is value type: false
// CS Name: MA.InternalBridge.TerrainBridge/TerrainDataInternal/InternalSetTreeInstancesInjected
class CORDL_TYPE TerrainDataInternal_TerrainBridge_InternalSetTreeInstancesInjected : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x181eccb50, size 0x90, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::IntPtr  terrainDataPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  instances, bool  snapToHeightmap, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1804dc830, size 0x20, virtual true, abstract: false, final false
inline void EndInvoke(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  instances, ::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1803828b0, size 0x390, virtual true, abstract: false, final false
inline void Invoke(::System::IntPtr  terrainDataPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  instances, bool  snapToHeightmap) ;

static inline ::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalSetTreeInstancesInjected* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x181509da0, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TerrainDataInternal_TerrainBridge_InternalSetTreeInstancesInjected() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TerrainDataInternal_TerrainBridge_InternalSetTreeInstancesInjected", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TerrainDataInternal_TerrainBridge_InternalSetTreeInstancesInjected(TerrainDataInternal_TerrainBridge_InternalSetTreeInstancesInjected && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TerrainDataInternal_TerrainBridge_InternalSetTreeInstancesInjected", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TerrainDataInternal_TerrainBridge_InternalSetTreeInstancesInjected(TerrainDataInternal_TerrainBridge_InternalSetTreeInstancesInjected const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21121};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalSetTreeInstancesInjected) == 0x80, "Size mismatch!");

} // namespace end def MA::InternalBridge
// Dependencies System.MulticastDelegate
namespace MA::InternalBridge {
// Is value type: false
// CS Name: MA.InternalBridge.TerrainBridge/TerrainDataInternal/ComputeDetailInstanceTransformsInjected
class CORDL_TYPE TerrainDataInternal_TerrainBridge_ComputeDetailInstanceTransformsInjected : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x181ecbf90, size 0x260, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::IntPtr  terrainDataPtr, int32_t  patchX, int32_t  patchY, int32_t  layer, float_t  density, ::by_ref<::UnityEngine::Bounds>  bounds, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  ret, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x181399bf0, size 0x1e0, virtual true, abstract: false, final false
inline void EndInvoke(::by_ref<::UnityEngine::Bounds>  bounds, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  ret, ::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1804a33d0, size 0x1f0, virtual true, abstract: false, final false
inline void Invoke(::System::IntPtr  terrainDataPtr, int32_t  patchX, int32_t  patchY, int32_t  layer, float_t  density, ::by_ref<::UnityEngine::Bounds>  bounds, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  ret) ;

static inline ::MA::InternalBridge::TerrainDataInternal_TerrainBridge_ComputeDetailInstanceTransformsInjected* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x181ecc1f0, size 0x190, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TerrainDataInternal_TerrainBridge_ComputeDetailInstanceTransformsInjected() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TerrainDataInternal_TerrainBridge_ComputeDetailInstanceTransformsInjected", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TerrainDataInternal_TerrainBridge_ComputeDetailInstanceTransformsInjected(TerrainDataInternal_TerrainBridge_ComputeDetailInstanceTransformsInjected && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TerrainDataInternal_TerrainBridge_ComputeDetailInstanceTransformsInjected", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TerrainDataInternal_TerrainBridge_ComputeDetailInstanceTransformsInjected(TerrainDataInternal_TerrainBridge_ComputeDetailInstanceTransformsInjected const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21122};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::InternalBridge::TerrainDataInternal_TerrainBridge_ComputeDetailInstanceTransformsInjected) == 0x80, "Size mismatch!");

} // namespace end def MA::InternalBridge
// Dependencies System.MulticastDelegate
namespace MA::InternalBridge {
// Is value type: false
// CS Name: MA.InternalBridge.TerrainBridge/TerrainDataInternal/InternalSetDetailLayerInjected
class CORDL_TYPE TerrainDataInternal_TerrainBridge_InternalSetDetailLayerInjected : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x181ecc870, size 0x230, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::IntPtr  terrainDataPtr, int32_t  xBase, int32_t  yBase, int32_t  totalWidth, int32_t  totalHeight, int32_t  detailIndex, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  data, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1804dc830, size 0x20, virtual true, abstract: false, final false
inline void EndInvoke(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  data, ::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1804a33d0, size 0x1f0, virtual true, abstract: false, final false
inline void Invoke(::System::IntPtr  terrainDataPtr, int32_t  xBase, int32_t  yBase, int32_t  totalWidth, int32_t  totalHeight, int32_t  detailIndex, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  data) ;

static inline ::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalSetDetailLayerInjected* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x181eccaa0, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TerrainDataInternal_TerrainBridge_InternalSetDetailLayerInjected() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TerrainDataInternal_TerrainBridge_InternalSetDetailLayerInjected", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TerrainDataInternal_TerrainBridge_InternalSetDetailLayerInjected(TerrainDataInternal_TerrainBridge_InternalSetDetailLayerInjected && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TerrainDataInternal_TerrainBridge_InternalSetDetailLayerInjected", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TerrainDataInternal_TerrainBridge_InternalSetDetailLayerInjected(TerrainDataInternal_TerrainBridge_InternalSetDetailLayerInjected const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21123};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalSetDetailLayerInjected) == 0x80, "Size mismatch!");

} // namespace end def MA::InternalBridge
// Dependencies System.Object
namespace MA::InternalBridge {
// Is value type: false
// CS Name: MA.InternalBridge.TerrainBridge/TerrainDataInternal
class CORDL_TYPE TerrainBridge_TerrainDataInternal : public ::System::Object {
public:
// Declarations
using ComputeDetailInstanceTransformsInjected = ::MA::InternalBridge::TerrainDataInternal_TerrainBridge_ComputeDetailInstanceTransformsInjected;

using GetInterpolatedNormalInjected = ::MA::InternalBridge::TerrainDataInternal_TerrainBridge_GetInterpolatedNormalInjected;

using InternalGetTreeInstancesInjected = ::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalGetTreeInstancesInjected;

using InternalSetDetailLayerInjected = ::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalSetDetailLayerInjected;

using InternalSetTreeInstancesInjected = ::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalSetTreeInstancesInjected;

/// @brief Field ComputeDetailInstanceTransforms, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ComputeDetailInstanceTransforms, put=setStaticF_ComputeDetailInstanceTransforms)) ::MA::InternalBridge::TerrainDataInternal_TerrainBridge_ComputeDetailInstanceTransformsInjected*  ComputeDetailInstanceTransforms;

/// @brief Field GetInterpolatedNormal, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_GetInterpolatedNormal, put=setStaticF_GetInterpolatedNormal)) ::MA::InternalBridge::TerrainDataInternal_TerrainBridge_GetInterpolatedNormalInjected*  GetInterpolatedNormal;

/// @brief Field GetTreeInstances, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_GetTreeInstances, put=setStaticF_GetTreeInstances)) ::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalGetTreeInstancesInjected*  GetTreeInstances;

/// @brief Field SetDetailLayer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_SetDetailLayer, put=setStaticF_SetDetailLayer)) ::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalSetDetailLayerInjected*  SetDetailLayer;

/// @brief Field SetTreeInstances, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_SetTreeInstances, put=setStaticF_SetTreeInstances)) ::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalSetTreeInstancesInjected*  SetTreeInstances;

static inline ::MA::InternalBridge::TerrainDataInternal_TerrainBridge_ComputeDetailInstanceTransformsInjected* getStaticF_ComputeDetailInstanceTransforms() ;

static inline ::MA::InternalBridge::TerrainDataInternal_TerrainBridge_GetInterpolatedNormalInjected* getStaticF_GetInterpolatedNormal() ;

static inline ::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalGetTreeInstancesInjected* getStaticF_GetTreeInstances() ;

static inline ::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalSetDetailLayerInjected* getStaticF_SetDetailLayer() ;

static inline ::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalSetTreeInstancesInjected* getStaticF_SetTreeInstances() ;

static inline void setStaticF_ComputeDetailInstanceTransforms(::MA::InternalBridge::TerrainDataInternal_TerrainBridge_ComputeDetailInstanceTransformsInjected*  value) ;

static inline void setStaticF_GetInterpolatedNormal(::MA::InternalBridge::TerrainDataInternal_TerrainBridge_GetInterpolatedNormalInjected*  value) ;

static inline void setStaticF_GetTreeInstances(::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalGetTreeInstancesInjected*  value) ;

static inline void setStaticF_SetDetailLayer(::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalSetDetailLayerInjected*  value) ;

static inline void setStaticF_SetTreeInstances(::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalSetTreeInstancesInjected*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TerrainBridge_TerrainDataInternal() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TerrainBridge_TerrainDataInternal", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TerrainBridge_TerrainDataInternal(TerrainBridge_TerrainDataInternal && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TerrainBridge_TerrainDataInternal", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TerrainBridge_TerrainDataInternal(TerrainBridge_TerrainDataInternal const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21124};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::InternalBridge::TerrainBridge_TerrainDataInternal) == 0x10, "Size mismatch!");

} // namespace end def MA::InternalBridge
// Dependencies System.MulticastDelegate
namespace MA::InternalBridge {
// Is value type: false
// CS Name: MA.InternalBridge.TerrainBridge/UnityObjectInternal/GetPtrFromInstanceIDPrivate
class CORDL_TYPE UnityObjectInternal_TerrainBridge_GetPtrFromInstanceIDPrivate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x181ecc5e0, size 0x80, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::UnityEngine::EntityId  instanceID, ::System::Type*  objectType, ::by_ref<bool>  isMonoBehaviour, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x181ecc660, size 0xe0, virtual true, abstract: false, final false
inline ::System::IntPtr EndInvoke(::by_ref<bool>  isMonoBehaviour, ::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1803828b0, size 0x390, virtual true, abstract: false, final false
inline ::System::IntPtr Invoke(::UnityEngine::EntityId  instanceID, ::System::Type*  objectType, ::by_ref<bool>  isMonoBehaviour) ;

static inline ::MA::InternalBridge::UnityObjectInternal_TerrainBridge_GetPtrFromInstanceIDPrivate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x181ecc740, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityObjectInternal_TerrainBridge_GetPtrFromInstanceIDPrivate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityObjectInternal_TerrainBridge_GetPtrFromInstanceIDPrivate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityObjectInternal_TerrainBridge_GetPtrFromInstanceIDPrivate(UnityObjectInternal_TerrainBridge_GetPtrFromInstanceIDPrivate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityObjectInternal_TerrainBridge_GetPtrFromInstanceIDPrivate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityObjectInternal_TerrainBridge_GetPtrFromInstanceIDPrivate(UnityObjectInternal_TerrainBridge_GetPtrFromInstanceIDPrivate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21125};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::InternalBridge::UnityObjectInternal_TerrainBridge_GetPtrFromInstanceIDPrivate) == 0x80, "Size mismatch!");

} // namespace end def MA::InternalBridge
// Dependencies System.Object
namespace MA::InternalBridge {
// Is value type: false
// CS Name: MA.InternalBridge.TerrainBridge/UnityObjectInternal
class CORDL_TYPE TerrainBridge_UnityObjectInternal : public ::System::Object {
public:
// Declarations
using GetPtrFromInstanceIDPrivate = ::MA::InternalBridge::UnityObjectInternal_TerrainBridge_GetPtrFromInstanceIDPrivate;

/// @brief Field GetPtrFromInstanceID, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_GetPtrFromInstanceID, put=setStaticF_GetPtrFromInstanceID)) ::MA::InternalBridge::UnityObjectInternal_TerrainBridge_GetPtrFromInstanceIDPrivate*  GetPtrFromInstanceID;

static inline ::MA::InternalBridge::UnityObjectInternal_TerrainBridge_GetPtrFromInstanceIDPrivate* getStaticF_GetPtrFromInstanceID() ;

static inline void setStaticF_GetPtrFromInstanceID(::MA::InternalBridge::UnityObjectInternal_TerrainBridge_GetPtrFromInstanceIDPrivate*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TerrainBridge_UnityObjectInternal() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TerrainBridge_UnityObjectInternal", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TerrainBridge_UnityObjectInternal(TerrainBridge_UnityObjectInternal && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TerrainBridge_UnityObjectInternal", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TerrainBridge_UnityObjectInternal(TerrainBridge_UnityObjectInternal const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21126};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::InternalBridge::TerrainBridge_UnityObjectInternal) == 0x10, "Size mismatch!");

} // namespace end def MA::InternalBridge
// Dependencies System.Object
namespace MA::InternalBridge {
// cpp template
template<typename T>
// Is value type: false
// CS Name: MA.InternalBridge.TerrainBridge/ListPrivateFieldAccess`1<T>
class CORDL_TYPE TerrainBridge_ListPrivateFieldAccess_1 : public ::System::Object {
public:
// Declarations
/// @brief Field _items, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__items, put=__cordl_internal_set__items)) ::ArrayW<T>  _items;

/// @brief Field _size, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__size, put=__cordl_internal_set__size)) int32_t  _size;

/// @brief Field _version, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__version, put=__cordl_internal_set__version)) int32_t  _version;

static inline ::MA::InternalBridge::TerrainBridge_ListPrivateFieldAccess_1<T>* New_ctor() ;

constexpr ::ArrayW<T> const& __cordl_internal_get__items() const;

constexpr ::ArrayW<T>& __cordl_internal_get__items() ;

constexpr int32_t const& __cordl_internal_get__size() const;

constexpr int32_t& __cordl_internal_get__size() ;

constexpr int32_t const& __cordl_internal_get__version() const;

constexpr int32_t& __cordl_internal_get__version() ;

constexpr void __cordl_internal_set__items(::ArrayW<T>  value) ;

constexpr void __cordl_internal_set__size(int32_t  value) ;

constexpr void __cordl_internal_set__version(int32_t  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TerrainBridge_ListPrivateFieldAccess_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TerrainBridge_ListPrivateFieldAccess_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TerrainBridge_ListPrivateFieldAccess_1(TerrainBridge_ListPrivateFieldAccess_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TerrainBridge_ListPrivateFieldAccess_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TerrainBridge_ListPrivateFieldAccess_1(TerrainBridge_ListPrivateFieldAccess_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21127};

/// @brief Field _items, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<T>  ____items;

/// @brief Field _size, offset: 0x18, size: 0x4, def value: None
 int32_t  ____size;

/// @brief Field _version, offset: 0x1c, size: 0x4, def value: None
 int32_t  ____version;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def MA::InternalBridge
// Dependencies System.Object
namespace MA::InternalBridge {
// Is value type: false
// CS Name: MA.InternalBridge.TerrainBridge
class CORDL_TYPE TerrainBridge : public ::System::Object {
public:
// Declarations
template<typename T>
using ListPrivateFieldAccess_1 = ::MA::InternalBridge::TerrainBridge_ListPrivateFieldAccess_1<T>;

using TerrainDataInternal = ::MA::InternalBridge::TerrainBridge_TerrainDataInternal;

using UnityObjectInternal = ::MA::InternalBridge::TerrainBridge_UnityObjectInternal;

/// @brief Method ComputeDetailInstanceTransforms, addr 0x181eccdb0, size 0x200, virtual false, abstract: false, final false
static inline ::Unity::Collections::NativeArray_1<::UnityEngine::DetailInstanceTransform> ComputeDetailInstanceTransforms(::UnityEngine::TerrainData*  terrainData, int32_t  patchX, int32_t  patchY, int32_t  layer, float_t  density, ::Unity::Collections::Allocator  allocator, ::by_ref<::UnityEngine::Bounds>  bounds) ;

/// @brief Method ComputeDetailInstanceTransforms, addr 0x181eccc90, size 0x120, virtual false, abstract: false, final false
static inline ::Unity::Collections::NativeArray_1<::UnityEngine::DetailInstanceTransform> ComputeDetailInstanceTransforms(::System::IntPtr  terrainDataPtr, int32_t  patchX, int32_t  patchY, int32_t  layer, float_t  density, ::Unity::Collections::Allocator  allocator, ::by_ref<::UnityEngine::Bounds>  bounds) ;

/// @brief Method EnsureListElemCount, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void EnsureListElemCount(::System::Collections::Generic::List_1<T>*  list, int32_t  count) ;

/// @brief Method ExtractArrayFromListT, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::ArrayW<T> ExtractArrayFromListT(::System::Collections::Generic::List_1<T>*  list) ;

/// @brief Method GetInterpolatedNormal, addr 0x181eccfb0, size 0x60, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 GetInterpolatedNormal(::System::IntPtr  terrainDataPtr, float_t  x, float_t  y) ;

/// @brief Method GetTreeInstances, addr 0x181ecd160, size 0x150, virtual false, abstract: false, final false
static inline ::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance> GetTreeInstances(::UnityEngine::TerrainData*  terrainData, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method GetTreeInstances, addr 0x181ecd2b0, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance> GetTreeInstances(::System::IntPtr  terrainDataPtr, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method GetTreeInstances, addr 0x181ecd390, size 0x100, virtual false, abstract: false, final false
static inline void GetTreeInstances(::UnityEngine::TerrainData*  terrainData, ::System::Collections::Generic::List_1<::UnityEngine::TreeInstance>*  treeInstances) ;

/// @brief Method GetTreeInstances, addr 0x181ecd010, size 0x150, virtual false, abstract: false, final false
static inline void GetTreeInstances(::UnityEngine::TerrainData*  terrainData, ::Unity::Collections::NativeList_1<::UnityEngine::TreeInstance>  treeInstances) ;

/// @brief Method GetValues, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void GetValues(::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  array, ::Unity::Collections::NativeList_1<T>  list) ;

/// @brief Method MarshalFromInstanceId, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::IntPtr MarshalFromInstanceId(int32_t  instanceId) ;

/// @brief Method RemoveTreePrototype, addr 0x181ecd490, size 0x10, virtual false, abstract: false, final false
static inline void RemoveTreePrototype(::UnityEngine::TerrainData*  terrainData, int32_t  index) ;

/// @brief Method SetDetailLayer, addr 0x181ecd4a0, size 0xf0, virtual false, abstract: false, final false
static inline void SetDetailLayer(::UnityEngine::TerrainData*  terrainData, int32_t  xBase, int32_t  yBase, int32_t  totalWidth, int32_t  totalHeight, int32_t  detailIndex, ::Unity::Collections::NativeArray_1<int32_t>  data) ;

/// @brief Method SetTreeInstances, addr 0x181ecd590, size 0xf0, virtual false, abstract: false, final false
static inline void SetTreeInstances(::UnityEngine::TerrainData*  terrainData, ::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance>  instances, bool  snapToHeightmap) ;

/// @brief Method SetTreeInstances, addr 0x181ecd680, size 0xa0, virtual false, abstract: false, final false
static inline void SetTreeInstances(::System::IntPtr  terrainDataPtr, ::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance>  instances, bool  snapToHeightmap) ;

/// @brief Method ToNativeArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::Unity::Collections::NativeArray_1<T> ToNativeArray(::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  array, ::Unity::Collections::Allocator  allocator) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TerrainBridge() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TerrainBridge", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TerrainBridge(TerrainBridge && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TerrainBridge", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TerrainBridge(TerrainBridge const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21128};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::InternalBridge::TerrainBridge) == 0x10, "Size mismatch!");

} // namespace end def MA::InternalBridge
