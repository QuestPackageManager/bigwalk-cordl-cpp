#pragma once
// IWYU pragma private; include "Unity/Hierarchy/HierarchyNodeTypeHandlerBase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HierarchyNodeTypeHandlerBase)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace System {
class Type;
}
namespace Unity::Hierarchy {
class HierarchyCommandList;
}
namespace Unity::Hierarchy {
struct HierarchyNodeFlags;
}
namespace Unity::Hierarchy {
class HierarchyNodeTypeHandlerBase_BindingsMarshaller;
}
namespace Unity::Hierarchy {
struct HierarchyNodeTypeHandlerBase_ConstructorScope;
}
namespace Unity::Hierarchy {
struct HierarchyNode;
}
namespace Unity::Hierarchy {
class HierarchySearchQueryDescriptor;
}
namespace Unity::Hierarchy {
class HierarchyViewModel;
}
namespace Unity::Hierarchy {
class Hierarchy;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
// Forward declare root types
namespace Unity::Hierarchy {
class HierarchyNodeTypeHandlerBase;
}
namespace Unity::Hierarchy {
class HierarchyNodeTypeHandlerBase_BindingsMarshaller;
}
namespace Unity::Hierarchy {
struct HierarchyNodeTypeHandlerBase_ConstructorScope;
}
// Write type traits
MARK_REF_T(::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*);
MARK_REF_T(::Unity::Hierarchy::HierarchyNodeTypeHandlerBase_BindingsMarshaller*);
MARK_VAL_T(::Unity::Hierarchy::HierarchyNodeTypeHandlerBase_ConstructorScope);
DEFINE_IL2CPP_CLASS(::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*, "Unity.Hierarchy", "HierarchyNodeTypeHandlerBase");
DEFINE_IL2CPP_CLASS(::Unity::Hierarchy::HierarchyNodeTypeHandlerBase_BindingsMarshaller*, "Unity.Hierarchy", "HierarchyNodeTypeHandlerBase/BindingsMarshaller");
DEFINE_IL2CPP_CLASS(::Unity::Hierarchy::HierarchyNodeTypeHandlerBase_ConstructorScope, "Unity.Hierarchy", "HierarchyNodeTypeHandlerBase/ConstructorScope");
// Dependencies System.Object
namespace Unity::Hierarchy {
// Is value type: false
// CS Name: Unity.Hierarchy.HierarchyNodeTypeHandlerBase/BindingsMarshaller
class CORDL_TYPE HierarchyNodeTypeHandlerBase_BindingsMarshaller : public ::System::Object {
public:
// Declarations
/// @brief Method ConvertToUnmanaged, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr ConvertToUnmanaged(::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*  handler) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HierarchyNodeTypeHandlerBase_BindingsMarshaller() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HierarchyNodeTypeHandlerBase_BindingsMarshaller", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HierarchyNodeTypeHandlerBase_BindingsMarshaller(HierarchyNodeTypeHandlerBase_BindingsMarshaller && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HierarchyNodeTypeHandlerBase_BindingsMarshaller", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HierarchyNodeTypeHandlerBase_BindingsMarshaller(HierarchyNodeTypeHandlerBase_BindingsMarshaller const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20722};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Hierarchy::HierarchyNodeTypeHandlerBase_BindingsMarshaller) == 0x10, "Size mismatch!");

} // namespace end def Unity::Hierarchy
// Dependencies System.IntPtr
namespace Unity::Hierarchy {
// Is value type: true
// CS Name: Unity.Hierarchy.HierarchyNodeTypeHandlerBase/ConstructorScope
#pragma pack(push, 0)
struct CORDL_TYPE HierarchyNodeTypeHandlerBase_ConstructorScope {
public:
// Declarations
/// @brief Field m_CommandList, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_CommandList, put=setStaticF_m_CommandList)) ::Unity::Hierarchy::HierarchyCommandList*  m_CommandList;

/// @brief Field m_Hierarchy, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_Hierarchy, put=setStaticF_m_Hierarchy)) ::Unity::Hierarchy::Hierarchy*  m_Hierarchy;

/// @brief Field m_Ptr, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_Ptr, put=setStaticF_m_Ptr)) ::System::IntPtr  m_Ptr;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1822b83b0, size 0x80, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method .ctor, addr 0x1822b8430, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  nativePtr, ::Unity::Hierarchy::Hierarchy*  hierarchy, ::Unity::Hierarchy::HierarchyCommandList*  cmdList) ;

static inline ::Unity::Hierarchy::HierarchyCommandList* getStaticF_m_CommandList() ;

static inline ::Unity::Hierarchy::Hierarchy* getStaticF_m_Hierarchy() ;

static inline ::System::IntPtr getStaticF_m_Ptr() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

static inline void setStaticF_m_CommandList(::Unity::Hierarchy::HierarchyCommandList*  value) ;

static inline void setStaticF_m_Hierarchy(::Unity::Hierarchy::Hierarchy*  value) ;

static inline void setStaticF_m_Ptr(::System::IntPtr  value) ;

/// @brief Method set_CommandList, addr 0x1822b84d0, size 0x40, virtual false, abstract: false, final false
static inline void set_CommandList(::Unity::Hierarchy::HierarchyCommandList*  value) ;

/// @brief Method set_Hierarchy, addr 0x1822b8510, size 0x40, virtual false, abstract: false, final false
static inline void set_Hierarchy(::Unity::Hierarchy::Hierarchy*  value) ;

/// @brief Method set_Ptr, addr 0x1822b8550, size 0x20, virtual false, abstract: false, final false
static inline void set_Ptr(::System::IntPtr  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr HierarchyNodeTypeHandlerBase_ConstructorScope() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20723};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::Unity::Hierarchy::HierarchyNodeTypeHandlerBase_ConstructorScope) == 0x1, "Size mismatch!");

} // namespace end def Unity::Hierarchy
// Dependencies System.IntPtr, System.Object
namespace Unity::Hierarchy {
// Is value type: false
// CS Name: Unity.Hierarchy.HierarchyNodeTypeHandlerBase
class CORDL_TYPE HierarchyNodeTypeHandlerBase : public ::System::Object {
public:
// Declarations
using BindingsMarshaller = ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase_BindingsMarshaller;

using ConstructorScope = ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase_ConstructorScope;

/// @brief Field m_CommandList, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CommandList, put=__cordl_internal_set_m_CommandList)) ::Unity::Hierarchy::HierarchyCommandList*  m_CommandList;

/// @brief Field m_Hierarchy, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Hierarchy, put=__cordl_internal_set_m_Hierarchy)) ::Unity::Hierarchy::Hierarchy*  m_Hierarchy;

/// @brief Field m_Ptr, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Ptr, put=__cordl_internal_set_m_Ptr)) ::System::IntPtr  m_Ptr;

/// @brief Field s_NodeTypes, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_NodeTypes, put=setStaticF_s_NodeTypes)) ::System::Collections::Generic::Dictionary_2<::System::Type*,int32_t>*  s_NodeTypes;

/// @brief Method ChangesPending, addr 0x1822b9e10, size 0x30, virtual true, abstract: false, final false
inline bool ChangesPending() ;

/// @brief Method ChangesPending_Injected, addr 0x1822b9e00, size 0x10, virtual false, abstract: false, final false
static inline bool ChangesPending_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method CreateNodeTypeHandlerFromType, addr 0x1822b9e40, size 0x1e0, virtual false, abstract: false, final false
static inline ::System::IntPtr CreateNodeTypeHandlerFromType(::System::IntPtr  nativePtr, ::System::Type*  handlerType, ::System::IntPtr  hierarchyPtr, ::System::IntPtr  cmdListPtr) ;

/// @brief Method Dispose, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method FromIntPtr, addr 0x1822b82b0, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase* FromIntPtr(::System::IntPtr  handlePtr) ;

/// @brief Method GetDefaultNodeFlags, addr 0x1822ba030, size 0x50, virtual true, abstract: false, final false
inline ::Unity::Hierarchy::HierarchyNodeFlags GetDefaultNodeFlags(::by_ref<::Unity::Hierarchy::HierarchyNode>  node, ::Unity::Hierarchy::HierarchyNodeFlags  defaultFlags) ;

/// @brief Method GetDefaultNodeFlags_Injected, addr 0x1822ba020, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Hierarchy::HierarchyNodeFlags GetDefaultNodeFlags_Injected(::System::IntPtr  _unity_self, ::by_ref<::Unity::Hierarchy::HierarchyNode>  node, ::Unity::Hierarchy::HierarchyNodeFlags  defaultFlags) ;

/// @brief Method GetNodeHashCode, addr 0x1822ba090, size 0x40, virtual true, abstract: false, final false
inline int32_t GetNodeHashCode(::by_ref<::Unity::Hierarchy::HierarchyNode>  node) ;

/// @brief Method GetNodeHashCode_Injected, addr 0x1822ba080, size 0x10, virtual false, abstract: false, final false
static inline int32_t GetNodeHashCode_Injected(::System::IntPtr  _unity_self, ::by_ref<::Unity::Hierarchy::HierarchyNode>  node) ;

/// @brief Method GetNodeTypeName, addr 0x1822ba0e0, size 0xb0, virtual true, abstract: false, final false
inline ::StringW GetNodeTypeName() ;

/// @brief Method GetNodeTypeName_Injected, addr 0x1822ba0d0, size 0x10, virtual false, abstract: false, final false
static inline void GetNodeTypeName_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// @brief Method Initialize, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void Initialize() ;

/// @brief Method IntegrateChanges, addr 0x1822ba1a0, size 0x50, virtual true, abstract: false, final false
inline bool IntegrateChanges(::Unity::Hierarchy::HierarchyCommandList*  cmdList) ;

/// @brief Method IntegrateChanges_Injected, addr 0x1822ba190, size 0x10, virtual false, abstract: false, final false
static inline bool IntegrateChanges_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  cmdList) ;

/// @brief Method Internal_SearchBegin, addr 0x181913e90, size 0x20, virtual false, abstract: false, final false
inline void Internal_SearchBegin(::Unity::Hierarchy::HierarchySearchQueryDescriptor*  query) ;

/// @brief Method InvokeChangesPending, addr 0x1822ba1f0, size 0x30, virtual false, abstract: false, final false
static inline bool InvokeChangesPending(::System::IntPtr  handlePtr) ;

/// @brief Method InvokeDispose, addr 0x1822ba220, size 0x40, virtual false, abstract: false, final false
static inline void InvokeDispose(::System::IntPtr  handlePtr) ;

/// @brief Method InvokeGetDefaultNodeFlags, addr 0x1822ba260, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Hierarchy::HierarchyNodeFlags InvokeGetDefaultNodeFlags(::System::IntPtr  handlePtr, ::by_ref<::Unity::Hierarchy::HierarchyNode>  node, ::Unity::Hierarchy::HierarchyNodeFlags  defaultFlags) ;

/// @brief Method InvokeGetNodeHashCode, addr 0x1822ba2a0, size 0x30, virtual false, abstract: false, final false
static inline int32_t InvokeGetNodeHashCode(::System::IntPtr  handlePtr, ::by_ref<::Unity::Hierarchy::HierarchyNode>  node) ;

/// @brief Method InvokeGetNodeTypeName, addr 0x1822ba2d0, size 0x30, virtual false, abstract: false, final false
static inline ::StringW InvokeGetNodeTypeName(::System::IntPtr  handlePtr) ;

/// @brief Method InvokeInitialize, addr 0x1822ba300, size 0x30, virtual false, abstract: false, final false
static inline void InvokeInitialize(::System::IntPtr  handlePtr) ;

/// @brief Method InvokeIntegrateChanges, addr 0x1822ba330, size 0xa0, virtual false, abstract: false, final false
static inline bool InvokeIntegrateChanges(::System::IntPtr  handlePtr, ::System::IntPtr  cmdListPtr) ;

/// @brief Method InvokeSearchEnd, addr 0x1822ba3d0, size 0x30, virtual false, abstract: false, final false
static inline void InvokeSearchEnd(::System::IntPtr  handlePtr) ;

/// @brief Method InvokeSearchMatch, addr 0x1822ba400, size 0x30, virtual false, abstract: false, final false
static inline bool InvokeSearchMatch(::System::IntPtr  handlePtr, ::by_ref<::Unity::Hierarchy::HierarchyNode>  node) ;

/// @brief Method InvokeViewModelPostUpdate, addr 0x1822ba430, size 0xa0, virtual false, abstract: false, final false
static inline void InvokeViewModelPostUpdate(::System::IntPtr  handlePtr, ::System::IntPtr  viewModelPtr) ;

/// @brief Method SearchBegin, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void SearchBegin(::Unity::Hierarchy::HierarchySearchQueryDescriptor*  query) ;

/// @brief Method SearchEnd, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void SearchEnd() ;

/// @brief Method SearchMatch, addr 0x1802e2bd0, size 0x10, virtual true, abstract: false, final false
inline bool SearchMatch(::by_ref<::Unity::Hierarchy::HierarchyNode>  node) ;

/// @brief Method TryGetStaticNodeType, addr 0x1822ba4d0, size 0x110, virtual false, abstract: false, final false
static inline bool TryGetStaticNodeType(::System::Type*  handlerType, ::by_ref<int32_t>  nodeType) ;

/// @brief Method ViewModelPostUpdate, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void ViewModelPostUpdate(::Unity::Hierarchy::HierarchyViewModel*  viewModel) ;

constexpr ::Unity::Hierarchy::HierarchyCommandList* const& __cordl_internal_get_m_CommandList() const;

constexpr ::Unity::Hierarchy::HierarchyCommandList*& __cordl_internal_get_m_CommandList() ;

constexpr ::Unity::Hierarchy::Hierarchy* const& __cordl_internal_get_m_Hierarchy() const;

constexpr ::Unity::Hierarchy::Hierarchy*& __cordl_internal_get_m_Hierarchy() ;

constexpr ::System::IntPtr const& __cordl_internal_get_m_Ptr() const;

constexpr ::System::IntPtr& __cordl_internal_get_m_Ptr() ;

constexpr void __cordl_internal_set_m_CommandList(::Unity::Hierarchy::HierarchyCommandList*  value) ;

constexpr void __cordl_internal_set_m_Hierarchy(::Unity::Hierarchy::Hierarchy*  value) ;

constexpr void __cordl_internal_set_m_Ptr(::System::IntPtr  value) ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Type*,int32_t>* getStaticF_s_NodeTypes() ;

static inline void setStaticF_s_NodeTypes(::System::Collections::Generic::Dictionary_2<::System::Type*,int32_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HierarchyNodeTypeHandlerBase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HierarchyNodeTypeHandlerBase", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HierarchyNodeTypeHandlerBase(HierarchyNodeTypeHandlerBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HierarchyNodeTypeHandlerBase", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HierarchyNodeTypeHandlerBase(HierarchyNodeTypeHandlerBase const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20724};

/// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  ___m_Ptr;

/// @brief Field m_Hierarchy, offset: 0x18, size: 0x8, def value: None
 ::Unity::Hierarchy::Hierarchy*  ___m_Hierarchy;

/// @brief Field m_CommandList, offset: 0x20, size: 0x8, def value: None
 ::Unity::Hierarchy::HierarchyCommandList*  ___m_CommandList;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Hierarchy::HierarchyNodeTypeHandlerBase, ___m_Ptr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyNodeTypeHandlerBase, ___m_Hierarchy) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyNodeTypeHandlerBase, ___m_CommandList) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Unity::Hierarchy::HierarchyNodeTypeHandlerBase) == 0x28, "Size mismatch!");

} // namespace end def Unity::Hierarchy
