#pragma once
// IWYU pragma private; include "MA/Flora/FloraSpatialHashAccess.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(FloraSpatialHashAccess)
namespace MA::Flora {
struct AxisAlignedBox;
}
namespace MA::Flora {
struct CullingGrid;
}
namespace MA::Flora {
struct FloraInstanceFilter;
}
namespace MA::Flora {
struct FloraInstanceHandle;
}
namespace MA::Flora {
class FloraSpatialHashAccess_CullInstancesInSelectionPlanesWithBurst_000005D3$BurstDirectCall;
}
namespace MA::Flora {
class FloraSpatialHashAccess_CullInstancesInSelectionPlanesWithBurst_000005D3$PostfixBurstDelegate;
}
namespace MA::Flora {
class FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D8$BurstDirectCall;
}
namespace MA::Flora {
class FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D8$PostfixBurstDelegate;
}
namespace MA::Flora {
class FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D9$BurstDirectCall;
}
namespace MA::Flora {
class FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D9$PostfixBurstDelegate;
}
namespace MA::Flora {
class FloraSpatialHashAccess_FindInstancesIntersectingBoxWithBurst_000005D7$BurstDirectCall;
}
namespace MA::Flora {
class FloraSpatialHashAccess_FindInstancesIntersectingBoxWithBurst_000005D7$PostfixBurstDelegate;
}
namespace MA::Flora {
class FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D5$BurstDirectCall;
}
namespace MA::Flora {
class FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D5$PostfixBurstDelegate;
}
namespace MA::Flora {
class FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D6$BurstDirectCall;
}
namespace MA::Flora {
class FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D6$PostfixBurstDelegate;
}
namespace MA::Flora {
class FloraSpatialHashAccess_FindInstancesIntersectingSphereWithBurst_000005D4$BurstDirectCall;
}
namespace MA::Flora {
class FloraSpatialHashAccess_FindInstancesIntersectingSphereWithBurst_000005D4$PostfixBurstDelegate;
}
namespace MA::Flora {
struct InstanceTag;
}
namespace MA::Flora {
template<typename T>
struct NativeDataReference_1;
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
namespace Unity::Collections {
struct AllocatorManager_AllocatorHandle;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace Unity::Collections {
template<typename T>
struct NativeList_1;
}
namespace UnityEngine {
struct BoundingSphere;
}
namespace UnityEngine {
struct EntityId;
}
namespace UnityEngine {
struct Plane;
}
// Forward declare root types
namespace MA::Flora {
class FloraSpatialHashAccess;
}
namespace MA::Flora {
class FloraSpatialHashAccess_CullInstancesInSelectionPlanesWithBurst_000005D3$BurstDirectCall;
}
namespace MA::Flora {
class FloraSpatialHashAccess_CullInstancesInSelectionPlanesWithBurst_000005D3$PostfixBurstDelegate;
}
namespace MA::Flora {
class FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D8$BurstDirectCall;
}
namespace MA::Flora {
class FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D8$PostfixBurstDelegate;
}
namespace MA::Flora {
class FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D9$BurstDirectCall;
}
namespace MA::Flora {
class FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D9$PostfixBurstDelegate;
}
namespace MA::Flora {
class FloraSpatialHashAccess_FindInstancesIntersectingBoxWithBurst_000005D7$BurstDirectCall;
}
namespace MA::Flora {
class FloraSpatialHashAccess_FindInstancesIntersectingBoxWithBurst_000005D7$PostfixBurstDelegate;
}
namespace MA::Flora {
class FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D5$BurstDirectCall;
}
namespace MA::Flora {
class FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D5$PostfixBurstDelegate;
}
namespace MA::Flora {
class FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D6$BurstDirectCall;
}
namespace MA::Flora {
class FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D6$PostfixBurstDelegate;
}
namespace MA::Flora {
class FloraSpatialHashAccess_FindInstancesIntersectingSphereWithBurst_000005D4$BurstDirectCall;
}
namespace MA::Flora {
class FloraSpatialHashAccess_FindInstancesIntersectingSphereWithBurst_000005D4$PostfixBurstDelegate;
}
// Write type traits
MARK_REF_T(::MA::Flora::FloraSpatialHashAccess*);
MARK_REF_T(::MA::Flora::FloraSpatialHashAccess_CullInstancesInSelectionPlanesWithBurst_000005D3$BurstDirectCall*);
MARK_REF_T(::MA::Flora::FloraSpatialHashAccess_CullInstancesInSelectionPlanesWithBurst_000005D3$PostfixBurstDelegate*);
MARK_REF_T(::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D8$BurstDirectCall*);
MARK_REF_T(::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D8$PostfixBurstDelegate*);
MARK_REF_T(::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D9$BurstDirectCall*);
MARK_REF_T(::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D9$PostfixBurstDelegate*);
MARK_REF_T(::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxWithBurst_000005D7$BurstDirectCall*);
MARK_REF_T(::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxWithBurst_000005D7$PostfixBurstDelegate*);
MARK_REF_T(::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D5$BurstDirectCall*);
MARK_REF_T(::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D5$PostfixBurstDelegate*);
MARK_REF_T(::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D6$BurstDirectCall*);
MARK_REF_T(::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D6$PostfixBurstDelegate*);
MARK_REF_T(::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereWithBurst_000005D4$BurstDirectCall*);
MARK_REF_T(::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereWithBurst_000005D4$PostfixBurstDelegate*);
DEFINE_IL2CPP_CLASS(::MA::Flora::FloraSpatialHashAccess*, "MA.Flora", "FloraSpatialHashAccess");
DEFINE_IL2CPP_CLASS(::MA::Flora::FloraSpatialHashAccess_CullInstancesInSelectionPlanesWithBurst_000005D3$BurstDirectCall*, "MA.Flora", "FloraSpatialHashAccess/CullInstancesInSelectionPlanesWithBurst_000005D3$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::MA::Flora::FloraSpatialHashAccess_CullInstancesInSelectionPlanesWithBurst_000005D3$PostfixBurstDelegate*, "MA.Flora", "FloraSpatialHashAccess/CullInstancesInSelectionPlanesWithBurst_000005D3$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D8$BurstDirectCall*, "MA.Flora", "FloraSpatialHashAccess/FindInstancesIntersectingBoxMatchingWithBurst_000005D8$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D8$PostfixBurstDelegate*, "MA.Flora", "FloraSpatialHashAccess/FindInstancesIntersectingBoxMatchingWithBurst_000005D8$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D9$BurstDirectCall*, "MA.Flora", "FloraSpatialHashAccess/FindInstancesIntersectingBoxMatchingWithBurst_000005D9$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D9$PostfixBurstDelegate*, "MA.Flora", "FloraSpatialHashAccess/FindInstancesIntersectingBoxMatchingWithBurst_000005D9$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxWithBurst_000005D7$BurstDirectCall*, "MA.Flora", "FloraSpatialHashAccess/FindInstancesIntersectingBoxWithBurst_000005D7$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxWithBurst_000005D7$PostfixBurstDelegate*, "MA.Flora", "FloraSpatialHashAccess/FindInstancesIntersectingBoxWithBurst_000005D7$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D5$BurstDirectCall*, "MA.Flora", "FloraSpatialHashAccess/FindInstancesIntersectingSphereMatchingWithBurst_000005D5$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D5$PostfixBurstDelegate*, "MA.Flora", "FloraSpatialHashAccess/FindInstancesIntersectingSphereMatchingWithBurst_000005D5$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D6$BurstDirectCall*, "MA.Flora", "FloraSpatialHashAccess/FindInstancesIntersectingSphereMatchingWithBurst_000005D6$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D6$PostfixBurstDelegate*, "MA.Flora", "FloraSpatialHashAccess/FindInstancesIntersectingSphereMatchingWithBurst_000005D6$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereWithBurst_000005D4$BurstDirectCall*, "MA.Flora", "FloraSpatialHashAccess/FindInstancesIntersectingSphereWithBurst_000005D4$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereWithBurst_000005D4$PostfixBurstDelegate*, "MA.Flora", "FloraSpatialHashAccess/FindInstancesIntersectingSphereWithBurst_000005D4$PostfixBurstDelegate");
// Dependencies System.MulticastDelegate
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.FloraSpatialHashAccess/CullInstancesInSelectionPlanesWithBurst_000005D3$PostfixBurstDelegate
class CORDL_TYPE FloraSpatialHashAccess_CullInstancesInSelectionPlanesWithBurst_000005D3$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x1814b1360, size 0x1f0, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>  hash, ::MA::Flora::InstanceTag  includeTags, ::MA::Flora::InstanceTag  excludeTags, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>>  planes, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>  allocator, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>  instances, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_7) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x181309030, size 0x1790, virtual true, abstract: false, final false
inline void Invoke(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>  hash, ::MA::Flora::InstanceTag  includeTags, ::MA::Flora::InstanceTag  excludeTags, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>>  planes, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>  allocator, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>  instances) ;

static inline ::MA::Flora::FloraSpatialHashAccess_CullInstancesInSelectionPlanesWithBurst_000005D3$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x1814b1550, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FloraSpatialHashAccess_CullInstancesInSelectionPlanesWithBurst_000005D3$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FloraSpatialHashAccess_CullInstancesInSelectionPlanesWithBurst_000005D3$PostfixBurstDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FloraSpatialHashAccess_CullInstancesInSelectionPlanesWithBurst_000005D3$PostfixBurstDelegate(FloraSpatialHashAccess_CullInstancesInSelectionPlanesWithBurst_000005D3$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FloraSpatialHashAccess_CullInstancesInSelectionPlanesWithBurst_000005D3$PostfixBurstDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FloraSpatialHashAccess_CullInstancesInSelectionPlanesWithBurst_000005D3$PostfixBurstDelegate(FloraSpatialHashAccess_CullInstancesInSelectionPlanesWithBurst_000005D3$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13114};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::FloraSpatialHashAccess_CullInstancesInSelectionPlanesWithBurst_000005D3$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.IntPtr, System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.FloraSpatialHashAccess/CullInstancesInSelectionPlanesWithBurst_000005D3$BurstDirectCall
class CORDL_TYPE FloraSpatialHashAccess_CullInstancesInSelectionPlanesWithBurst_000005D3$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0x1814b1060, size 0x120, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// @brief Method GetFunctionPointerDiscard, addr 0x1814b0f30, size 0x130, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x1814b1180, size 0x1e0, virtual false, abstract: false, final false
static inline void Invoke(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>  hash, ::MA::Flora::InstanceTag  includeTags, ::MA::Flora::InstanceTag  excludeTags, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>>  planes, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>  allocator, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>  instances) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FloraSpatialHashAccess_CullInstancesInSelectionPlanesWithBurst_000005D3$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FloraSpatialHashAccess_CullInstancesInSelectionPlanesWithBurst_000005D3$BurstDirectCall", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FloraSpatialHashAccess_CullInstancesInSelectionPlanesWithBurst_000005D3$BurstDirectCall(FloraSpatialHashAccess_CullInstancesInSelectionPlanesWithBurst_000005D3$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FloraSpatialHashAccess_CullInstancesInSelectionPlanesWithBurst_000005D3$BurstDirectCall", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FloraSpatialHashAccess_CullInstancesInSelectionPlanesWithBurst_000005D3$BurstDirectCall(FloraSpatialHashAccess_CullInstancesInSelectionPlanesWithBurst_000005D3$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13115};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::FloraSpatialHashAccess_CullInstancesInSelectionPlanesWithBurst_000005D3$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.MulticastDelegate
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.FloraSpatialHashAccess/FindInstancesIntersectingSphereWithBurst_000005D4$PostfixBurstDelegate
class CORDL_TYPE FloraSpatialHashAccess_FindInstancesIntersectingSphereWithBurst_000005D4$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x1814bf690, size 0xb0, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>  hash, ::by_ref<::UnityEngine::BoundingSphere>  sphere, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>  allocator, ::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>  instances, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_5) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x1805522b0, size 0xe0, virtual true, abstract: false, final false
inline void Invoke(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>  hash, ::by_ref<::UnityEngine::BoundingSphere>  sphere, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>  allocator, ::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>  instances) ;

static inline ::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereWithBurst_000005D4$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x1814be840, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FloraSpatialHashAccess_FindInstancesIntersectingSphereWithBurst_000005D4$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FloraSpatialHashAccess_FindInstancesIntersectingSphereWithBurst_000005D4$PostfixBurstDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FloraSpatialHashAccess_FindInstancesIntersectingSphereWithBurst_000005D4$PostfixBurstDelegate(FloraSpatialHashAccess_FindInstancesIntersectingSphereWithBurst_000005D4$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FloraSpatialHashAccess_FindInstancesIntersectingSphereWithBurst_000005D4$PostfixBurstDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FloraSpatialHashAccess_FindInstancesIntersectingSphereWithBurst_000005D4$PostfixBurstDelegate(FloraSpatialHashAccess_FindInstancesIntersectingSphereWithBurst_000005D4$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13116};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereWithBurst_000005D4$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.IntPtr, System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.FloraSpatialHashAccess/FindInstancesIntersectingSphereWithBurst_000005D4$BurstDirectCall
class CORDL_TYPE FloraSpatialHashAccess_FindInstancesIntersectingSphereWithBurst_000005D4$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0x1814bf3e0, size 0x120, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// @brief Method GetFunctionPointerDiscard, addr 0x1814bf2b0, size 0x130, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x1814bf500, size 0x190, virtual false, abstract: false, final false
static inline void Invoke(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>  hash, ::by_ref<::UnityEngine::BoundingSphere>  sphere, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>  allocator, ::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>  instances) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FloraSpatialHashAccess_FindInstancesIntersectingSphereWithBurst_000005D4$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FloraSpatialHashAccess_FindInstancesIntersectingSphereWithBurst_000005D4$BurstDirectCall", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FloraSpatialHashAccess_FindInstancesIntersectingSphereWithBurst_000005D4$BurstDirectCall(FloraSpatialHashAccess_FindInstancesIntersectingSphereWithBurst_000005D4$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FloraSpatialHashAccess_FindInstancesIntersectingSphereWithBurst_000005D4$BurstDirectCall", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FloraSpatialHashAccess_FindInstancesIntersectingSphereWithBurst_000005D4$BurstDirectCall(FloraSpatialHashAccess_FindInstancesIntersectingSphereWithBurst_000005D4$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13117};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereWithBurst_000005D4$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.MulticastDelegate
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.FloraSpatialHashAccess/FindInstancesIntersectingSphereMatchingWithBurst_000005D5$PostfixBurstDelegate
class CORDL_TYPE FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D5$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x1814bed10, size 0xd0, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>  hash, ::by_ref<::MA::Flora::FloraInstanceFilter>  filter, ::by_ref<::UnityEngine::BoundingSphere>  sphere, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>  allocator, ::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>  instances, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_6) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x181308320, size 0xd10, virtual true, abstract: false, final false
inline void Invoke(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>  hash, ::by_ref<::MA::Flora::FloraInstanceFilter>  filter, ::by_ref<::UnityEngine::BoundingSphere>  sphere, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>  allocator, ::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>  instances) ;

static inline ::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D5$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x1814bdbc0, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D5$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D5$PostfixBurstDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D5$PostfixBurstDelegate(FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D5$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D5$PostfixBurstDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D5$PostfixBurstDelegate(FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D5$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13118};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D5$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.IntPtr, System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.FloraSpatialHashAccess/FindInstancesIntersectingSphereMatchingWithBurst_000005D5$BurstDirectCall
class CORDL_TYPE FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D5$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0x1814bea30, size 0x120, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// @brief Method GetFunctionPointerDiscard, addr 0x1814be900, size 0x130, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x1814beb50, size 0x1c0, virtual false, abstract: false, final false
static inline void Invoke(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>  hash, ::by_ref<::MA::Flora::FloraInstanceFilter>  filter, ::by_ref<::UnityEngine::BoundingSphere>  sphere, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>  allocator, ::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>  instances) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D5$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D5$BurstDirectCall", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D5$BurstDirectCall(FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D5$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D5$BurstDirectCall", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D5$BurstDirectCall(FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D5$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13119};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D5$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.MulticastDelegate
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.FloraSpatialHashAccess/FindInstancesIntersectingSphereMatchingWithBurst_000005D6$PostfixBurstDelegate
class CORDL_TYPE FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D6$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x1814bf1e0, size 0xd0, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>  hash, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>  prefabGameObjectIDs, ::by_ref<::UnityEngine::BoundingSphere>  sphere, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>  allocator, ::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>  instances, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_6) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x181308320, size 0xd10, virtual true, abstract: false, final false
inline void Invoke(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>  hash, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>  prefabGameObjectIDs, ::by_ref<::UnityEngine::BoundingSphere>  sphere, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>  allocator, ::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>  instances) ;

static inline ::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D6$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x1814bdbc0, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D6$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D6$PostfixBurstDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D6$PostfixBurstDelegate(FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D6$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D6$PostfixBurstDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D6$PostfixBurstDelegate(FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D6$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13120};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D6$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.IntPtr, System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.FloraSpatialHashAccess/FindInstancesIntersectingSphereMatchingWithBurst_000005D6$BurstDirectCall
class CORDL_TYPE FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D6$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0x1814bef10, size 0x120, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// @brief Method GetFunctionPointerDiscard, addr 0x1814bede0, size 0x130, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x1814bf030, size 0x1b0, virtual false, abstract: false, final false
static inline void Invoke(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>  hash, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>  prefabGameObjectIDs, ::by_ref<::UnityEngine::BoundingSphere>  sphere, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>  allocator, ::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>  instances) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D6$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D6$BurstDirectCall", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D6$BurstDirectCall(FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D6$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D6$BurstDirectCall", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D6$BurstDirectCall(FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D6$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13121};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D6$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.MulticastDelegate
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.FloraSpatialHashAccess/FindInstancesIntersectingBoxWithBurst_000005D7$PostfixBurstDelegate
class CORDL_TYPE FloraSpatialHashAccess_FindInstancesIntersectingBoxWithBurst_000005D7$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x1814be750, size 0xf0, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>  hash, ::by_ref<::MA::Flora::AxisAlignedBox>  bounds, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>  allocator, ::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>  instances, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_5) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x1805522b0, size 0xe0, virtual true, abstract: false, final false
inline void Invoke(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>  hash, ::by_ref<::MA::Flora::AxisAlignedBox>  bounds, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>  allocator, ::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>  instances) ;

static inline ::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxWithBurst_000005D7$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x1814be840, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FloraSpatialHashAccess_FindInstancesIntersectingBoxWithBurst_000005D7$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FloraSpatialHashAccess_FindInstancesIntersectingBoxWithBurst_000005D7$PostfixBurstDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FloraSpatialHashAccess_FindInstancesIntersectingBoxWithBurst_000005D7$PostfixBurstDelegate(FloraSpatialHashAccess_FindInstancesIntersectingBoxWithBurst_000005D7$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FloraSpatialHashAccess_FindInstancesIntersectingBoxWithBurst_000005D7$PostfixBurstDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FloraSpatialHashAccess_FindInstancesIntersectingBoxWithBurst_000005D7$PostfixBurstDelegate(FloraSpatialHashAccess_FindInstancesIntersectingBoxWithBurst_000005D7$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13122};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxWithBurst_000005D7$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.IntPtr, System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.FloraSpatialHashAccess/FindInstancesIntersectingBoxWithBurst_000005D7$BurstDirectCall
class CORDL_TYPE FloraSpatialHashAccess_FindInstancesIntersectingBoxWithBurst_000005D7$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0x1814be3a0, size 0x120, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// @brief Method GetFunctionPointerDiscard, addr 0x1814be270, size 0x130, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x1814be4c0, size 0x290, virtual false, abstract: false, final false
static inline void Invoke(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>  hash, ::by_ref<::MA::Flora::AxisAlignedBox>  bounds, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>  allocator, ::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>  instances) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FloraSpatialHashAccess_FindInstancesIntersectingBoxWithBurst_000005D7$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FloraSpatialHashAccess_FindInstancesIntersectingBoxWithBurst_000005D7$BurstDirectCall", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FloraSpatialHashAccess_FindInstancesIntersectingBoxWithBurst_000005D7$BurstDirectCall(FloraSpatialHashAccess_FindInstancesIntersectingBoxWithBurst_000005D7$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FloraSpatialHashAccess_FindInstancesIntersectingBoxWithBurst_000005D7$BurstDirectCall", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FloraSpatialHashAccess_FindInstancesIntersectingBoxWithBurst_000005D7$BurstDirectCall(FloraSpatialHashAccess_FindInstancesIntersectingBoxWithBurst_000005D7$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13123};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxWithBurst_000005D7$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.MulticastDelegate
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.FloraSpatialHashAccess/FindInstancesIntersectingBoxMatchingWithBurst_000005D8$PostfixBurstDelegate
class CORDL_TYPE FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D8$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x1814bdaf0, size 0xd0, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>  hash, ::by_ref<::MA::Flora::FloraInstanceFilter>  filter, ::by_ref<::MA::Flora::AxisAlignedBox>  bounds, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>  allocator, ::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>  instances, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_6) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x181308320, size 0xd10, virtual true, abstract: false, final false
inline void Invoke(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>  hash, ::by_ref<::MA::Flora::FloraInstanceFilter>  filter, ::by_ref<::MA::Flora::AxisAlignedBox>  bounds, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>  allocator, ::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>  instances) ;

static inline ::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D8$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x1814bdbc0, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D8$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D8$PostfixBurstDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D8$PostfixBurstDelegate(FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D8$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D8$PostfixBurstDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D8$PostfixBurstDelegate(FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D8$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13124};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D8$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.IntPtr, System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.FloraSpatialHashAccess/FindInstancesIntersectingBoxMatchingWithBurst_000005D8$BurstDirectCall
class CORDL_TYPE FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D8$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0x1814bd700, size 0x120, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// @brief Method GetFunctionPointerDiscard, addr 0x1814bd5d0, size 0x130, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x1814bd820, size 0x2d0, virtual false, abstract: false, final false
static inline void Invoke(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>  hash, ::by_ref<::MA::Flora::FloraInstanceFilter>  filter, ::by_ref<::MA::Flora::AxisAlignedBox>  bounds, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>  allocator, ::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>  instances) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D8$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D8$BurstDirectCall", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D8$BurstDirectCall(FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D8$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D8$BurstDirectCall", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D8$BurstDirectCall(FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D8$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13125};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D8$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.MulticastDelegate
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.FloraSpatialHashAccess/FindInstancesIntersectingBoxMatchingWithBurst_000005D9$PostfixBurstDelegate
class CORDL_TYPE FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D9$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x1814be1a0, size 0xd0, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>  hash, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>  prefabGameObjectIDs, ::by_ref<::MA::Flora::AxisAlignedBox>  bounds, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>  allocator, ::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>  instances, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_6) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x181308320, size 0xd10, virtual true, abstract: false, final false
inline void Invoke(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>  hash, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>  prefabGameObjectIDs, ::by_ref<::MA::Flora::AxisAlignedBox>  bounds, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>  allocator, ::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>  instances) ;

static inline ::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D9$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x1814bdbc0, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D9$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D9$PostfixBurstDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D9$PostfixBurstDelegate(FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D9$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D9$PostfixBurstDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D9$PostfixBurstDelegate(FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D9$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13126};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D9$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.IntPtr, System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.FloraSpatialHashAccess/FindInstancesIntersectingBoxMatchingWithBurst_000005D9$BurstDirectCall
class CORDL_TYPE FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D9$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0x1814bddb0, size 0x120, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// @brief Method GetFunctionPointerDiscard, addr 0x1814bdc80, size 0x130, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x1814bded0, size 0x2d0, virtual false, abstract: false, final false
static inline void Invoke(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>  hash, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>  prefabGameObjectIDs, ::by_ref<::MA::Flora::AxisAlignedBox>  bounds, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>  allocator, ::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>  instances) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D9$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D9$BurstDirectCall", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D9$BurstDirectCall(FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D9$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D9$BurstDirectCall", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D9$BurstDirectCall(FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D9$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13127};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D9$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.FloraSpatialHashAccess
class CORDL_TYPE FloraSpatialHashAccess : public ::System::Object {
public:
// Declarations
using CullInstancesInSelectionPlanesWithBurst_000005D3$BurstDirectCall = ::MA::Flora::FloraSpatialHashAccess_CullInstancesInSelectionPlanesWithBurst_000005D3$BurstDirectCall;

using CullInstancesInSelectionPlanesWithBurst_000005D3$PostfixBurstDelegate = ::MA::Flora::FloraSpatialHashAccess_CullInstancesInSelectionPlanesWithBurst_000005D3$PostfixBurstDelegate;

using FindInstancesIntersectingBoxMatchingWithBurst_000005D8$BurstDirectCall = ::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D8$BurstDirectCall;

using FindInstancesIntersectingBoxMatchingWithBurst_000005D8$PostfixBurstDelegate = ::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D8$PostfixBurstDelegate;

using FindInstancesIntersectingBoxMatchingWithBurst_000005D9$BurstDirectCall = ::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D9$BurstDirectCall;

using FindInstancesIntersectingBoxMatchingWithBurst_000005D9$PostfixBurstDelegate = ::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D9$PostfixBurstDelegate;

using FindInstancesIntersectingBoxWithBurst_000005D7$BurstDirectCall = ::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxWithBurst_000005D7$BurstDirectCall;

using FindInstancesIntersectingBoxWithBurst_000005D7$PostfixBurstDelegate = ::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxWithBurst_000005D7$PostfixBurstDelegate;

using FindInstancesIntersectingSphereMatchingWithBurst_000005D5$BurstDirectCall = ::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D5$BurstDirectCall;

using FindInstancesIntersectingSphereMatchingWithBurst_000005D5$PostfixBurstDelegate = ::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D5$PostfixBurstDelegate;

using FindInstancesIntersectingSphereMatchingWithBurst_000005D6$BurstDirectCall = ::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D6$BurstDirectCall;

using FindInstancesIntersectingSphereMatchingWithBurst_000005D6$PostfixBurstDelegate = ::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D6$PostfixBurstDelegate;

using FindInstancesIntersectingSphereWithBurst_000005D4$BurstDirectCall = ::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereWithBurst_000005D4$BurstDirectCall;

using FindInstancesIntersectingSphereWithBurst_000005D4$PostfixBurstDelegate = ::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereWithBurst_000005D4$PostfixBurstDelegate;

/// @brief Method CullInstancesInSelectionPlanesWithBurst, addr 0x1814b1180, size 0x1e0, virtual false, abstract: false, final false
static inline void CullInstancesInSelectionPlanesWithBurst(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>  hash, ::MA::Flora::InstanceTag  includeTags, ::MA::Flora::InstanceTag  excludeTags, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>>  planes, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>  allocator, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>  instances) ;

/// @brief Method CullInstancesInSelectionPlanesWithBurst$BurstManaged, addr 0x1814bf740, size 0x60, virtual false, abstract: false, final false
static inline void CullInstancesInSelectionPlanesWithBurst$BurstManaged(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>  hash, ::MA::Flora::InstanceTag  includeTags, ::MA::Flora::InstanceTag  excludeTags, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>>  planes, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>  allocator, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>  instances) ;

/// @brief Method FindInstancesIntersectingBoxMatchingWithBurst, addr 0x1814bfa10, size 0x10, virtual false, abstract: false, final false
static inline void FindInstancesIntersectingBoxMatchingWithBurst(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>  hash, ::by_ref<::MA::Flora::FloraInstanceFilter>  filter, ::by_ref<::MA::Flora::AxisAlignedBox>  bounds, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>  allocator, ::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>  instances) ;

/// @brief Method FindInstancesIntersectingBoxMatchingWithBurst, addr 0x1814bfa20, size 0x10, virtual false, abstract: false, final false
static inline void FindInstancesIntersectingBoxMatchingWithBurst(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>  hash, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>  prefabGameObjectIDs, ::by_ref<::MA::Flora::AxisAlignedBox>  bounds, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>  allocator, ::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>  instances) ;

/// @brief Method FindInstancesIntersectingBoxMatchingWithBurst$BurstManaged, addr 0x1814bf7a0, size 0x140, virtual false, abstract: false, final false
static inline void FindInstancesIntersectingBoxMatchingWithBurst$BurstManaged(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>  hash, ::by_ref<::MA::Flora::FloraInstanceFilter>  filter, ::by_ref<::MA::Flora::AxisAlignedBox>  bounds, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>  allocator, ::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>  instances) ;

/// @brief Method FindInstancesIntersectingBoxMatchingWithBurst$BurstManaged, addr 0x1814bf8e0, size 0x130, virtual false, abstract: false, final false
static inline void FindInstancesIntersectingBoxMatchingWithBurst$BurstManaged(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>  hash, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>  prefabGameObjectIDs, ::by_ref<::MA::Flora::AxisAlignedBox>  bounds, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>  allocator, ::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>  instances) ;

/// @brief Method FindInstancesIntersectingBoxWithBurst, addr 0x1814bfb50, size 0x10, virtual false, abstract: false, final false
static inline void FindInstancesIntersectingBoxWithBurst(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>  hash, ::by_ref<::MA::Flora::AxisAlignedBox>  bounds, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>  allocator, ::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>  instances) ;

/// @brief Method FindInstancesIntersectingBoxWithBurst$BurstManaged, addr 0x1814bfa30, size 0x120, virtual false, abstract: false, final false
static inline void FindInstancesIntersectingBoxWithBurst$BurstManaged(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>  hash, ::by_ref<::MA::Flora::AxisAlignedBox>  bounds, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>  allocator, ::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>  instances) ;

/// @brief Method FindInstancesIntersectingSphereMatchingWithBurst, addr 0x1814beb50, size 0x1c0, virtual false, abstract: false, final false
static inline void FindInstancesIntersectingSphereMatchingWithBurst(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>  hash, ::by_ref<::MA::Flora::FloraInstanceFilter>  filter, ::by_ref<::UnityEngine::BoundingSphere>  sphere, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>  allocator, ::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>  instances) ;

/// @brief Method FindInstancesIntersectingSphereMatchingWithBurst, addr 0x1814bf030, size 0x1b0, virtual false, abstract: false, final false
static inline void FindInstancesIntersectingSphereMatchingWithBurst(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>  hash, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>  prefabGameObjectIDs, ::by_ref<::UnityEngine::BoundingSphere>  sphere, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>  allocator, ::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>  instances) ;

/// @brief Method FindInstancesIntersectingSphereMatchingWithBurst$BurstManaged, addr 0x1814bfb60, size 0x50, virtual false, abstract: false, final false
static inline void FindInstancesIntersectingSphereMatchingWithBurst$BurstManaged(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>  hash, ::by_ref<::MA::Flora::FloraInstanceFilter>  filter, ::by_ref<::UnityEngine::BoundingSphere>  sphere, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>  allocator, ::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>  instances) ;

/// @brief Method FindInstancesIntersectingSphereMatchingWithBurst$BurstManaged, addr 0x1814bfbb0, size 0x50, virtual false, abstract: false, final false
static inline void FindInstancesIntersectingSphereMatchingWithBurst$BurstManaged(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>  hash, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>  prefabGameObjectIDs, ::by_ref<::UnityEngine::BoundingSphere>  sphere, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>  allocator, ::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>  instances) ;

/// @brief Method FindInstancesIntersectingSphereWithBurst, addr 0x1814bf500, size 0x190, virtual false, abstract: false, final false
static inline void FindInstancesIntersectingSphereWithBurst(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>  hash, ::by_ref<::UnityEngine::BoundingSphere>  sphere, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>  allocator, ::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>  instances) ;

/// @brief Method FindInstancesIntersectingSphereWithBurst$BurstManaged, addr 0x1814bfc00, size 0x30, virtual false, abstract: false, final false
static inline void FindInstancesIntersectingSphereWithBurst$BurstManaged(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>  hash, ::by_ref<::UnityEngine::BoundingSphere>  sphere, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>  allocator, ::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>  instances) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FloraSpatialHashAccess() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FloraSpatialHashAccess", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FloraSpatialHashAccess(FloraSpatialHashAccess && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FloraSpatialHashAccess", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FloraSpatialHashAccess(FloraSpatialHashAccess const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13128};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::FloraSpatialHashAccess) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
