#pragma once
// IWYU pragma private; include "Unity/Hierarchy/HierarchyViewModel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyFlattenedNode_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyNode_def.hpp"
#include "Unity/Hierarchy/zzzz__ReadOnlyNativeVector_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HierarchyViewModel)
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace Unity::Hierarchy {
struct HierarchyFlattenedNode;
}
namespace Unity::Hierarchy {
class HierarchyFlattened;
}
namespace Unity::Hierarchy {
struct HierarchyNodeFlags;
}
namespace Unity::Hierarchy {
struct HierarchyNode;
}
namespace Unity::Hierarchy {
class HierarchySearchQueryDescriptor;
}
namespace Unity::Hierarchy {
struct HierarchyTraversalDirection;
}
namespace Unity::Hierarchy {
struct HierarchyViewModelNodesEnumerable;
}
namespace Unity::Hierarchy {
class HierarchyViewModel_BindingsMarshaller;
}
namespace Unity::Hierarchy {
struct HierarchyViewModel_Enumerator;
}
namespace Unity::Hierarchy {
class HierarchyViewModel_FlagsChangedEventHandler;
}
namespace Unity::Hierarchy {
class Hierarchy;
}
namespace Unity::Hierarchy {
class IHierarchySearchQueryParser;
}
namespace Unity::Hierarchy {
template<typename T>
struct ReadOnlyNativeVector_1;
}
// Forward declare root types
namespace Unity::Hierarchy {
class HierarchyViewModel;
}
namespace Unity::Hierarchy {
class HierarchyViewModel_BindingsMarshaller;
}
namespace Unity::Hierarchy {
class HierarchyViewModel_FlagsChangedEventHandler;
}
namespace Unity::Hierarchy {
struct HierarchyViewModel_Enumerator;
}
// Write type traits
MARK_REF_T(::Unity::Hierarchy::HierarchyViewModel*);
MARK_REF_T(::Unity::Hierarchy::HierarchyViewModel_BindingsMarshaller*);
MARK_REF_T(::Unity::Hierarchy::HierarchyViewModel_FlagsChangedEventHandler*);
MARK_VAL_T(::Unity::Hierarchy::HierarchyViewModel_Enumerator);
DEFINE_IL2CPP_CLASS(::Unity::Hierarchy::HierarchyViewModel*, "Unity.Hierarchy", "HierarchyViewModel");
DEFINE_IL2CPP_CLASS(::Unity::Hierarchy::HierarchyViewModel_BindingsMarshaller*, "Unity.Hierarchy", "HierarchyViewModel/BindingsMarshaller");
DEFINE_IL2CPP_CLASS(::Unity::Hierarchy::HierarchyViewModel_FlagsChangedEventHandler*, "Unity.Hierarchy", "HierarchyViewModel/FlagsChangedEventHandler");
DEFINE_IL2CPP_CLASS(::Unity::Hierarchy::HierarchyViewModel_Enumerator, "Unity.Hierarchy", "HierarchyViewModel/Enumerator");
// Dependencies System.Object
namespace Unity::Hierarchy {
// Is value type: false
// CS Name: Unity.Hierarchy.HierarchyViewModel/BindingsMarshaller
class CORDL_TYPE HierarchyViewModel_BindingsMarshaller : public ::System::Object {
public:
// Declarations
/// @brief Method ConvertToUnmanaged, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr ConvertToUnmanaged(::Unity::Hierarchy::HierarchyViewModel*  viewModel) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HierarchyViewModel_BindingsMarshaller() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HierarchyViewModel_BindingsMarshaller", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HierarchyViewModel_BindingsMarshaller(HierarchyViewModel_BindingsMarshaller && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HierarchyViewModel_BindingsMarshaller", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HierarchyViewModel_BindingsMarshaller(HierarchyViewModel_BindingsMarshaller const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20755};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Hierarchy::HierarchyViewModel_BindingsMarshaller) == 0x10, "Size mismatch!");

} // namespace end def Unity::Hierarchy
// Dependencies System.MulticastDelegate
namespace Unity::Hierarchy {
// Is value type: false
// CS Name: Unity.Hierarchy.HierarchyViewModel/FlagsChangedEventHandler
class CORDL_TYPE HierarchyViewModel_FlagsChangedEventHandler : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x1803e3a50, size 0x1b0, virtual true, abstract: false, final false
inline void Invoke(::Unity::Hierarchy::HierarchyNodeFlags  flags) ;

static inline ::Unity::Hierarchy::HierarchyViewModel_FlagsChangedEventHandler* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x180539220, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HierarchyViewModel_FlagsChangedEventHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HierarchyViewModel_FlagsChangedEventHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HierarchyViewModel_FlagsChangedEventHandler(HierarchyViewModel_FlagsChangedEventHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HierarchyViewModel_FlagsChangedEventHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HierarchyViewModel_FlagsChangedEventHandler(HierarchyViewModel_FlagsChangedEventHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20756};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Hierarchy::HierarchyViewModel_FlagsChangedEventHandler) == 0x80, "Size mismatch!");

} // namespace end def Unity::Hierarchy
// Dependencies Unity.Hierarchy.HierarchyNode, Unity.Hierarchy.ReadOnlyNativeVector`1<T>
namespace Unity::Hierarchy {
// Is value type: true
// CS Name: Unity.Hierarchy.HierarchyViewModel/Enumerator
struct CORDL_TYPE HierarchyViewModel_Enumerator {
public:
// Declarations
 __declspec(property(get=get_Current)) ::Unity::Hierarchy::HierarchyNode  Current;

/// @brief Method MoveNext, addr 0x1822b7f20, size 0x10, virtual false, abstract: false, final false
inline bool MoveNext() ;

/// @brief Method .ctor, addr 0x1822b8880, size 0x50, virtual false, abstract: false, final false
inline void _ctor(::Unity::Hierarchy::HierarchyViewModel*  hierarchyViewModel) ;

/// @brief Method get_Current, addr 0x1822b81b0, size 0x60, virtual false, abstract: false, final false
inline ::by_ref<::Unity::Hierarchy::HierarchyNode> get_Current() ;

// Ctor Parameters []
// @brief default ctor
constexpr HierarchyViewModel_Enumerator() ;

// Ctor Parameters [CppParam { name: "m_ViewModel", ty: "::Unity::Hierarchy::HierarchyViewModel*", modifiers: "", def_value: None }, CppParam { name: "m_Nodes", ty: "::Unity::Hierarchy::ReadOnlyNativeVector_1<::Unity::Hierarchy::HierarchyNode>", modifiers: "", def_value: None }, CppParam { name: "m_Version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HierarchyViewModel_Enumerator(::Unity::Hierarchy::HierarchyViewModel*  m_ViewModel, ::Unity::Hierarchy::ReadOnlyNativeVector_1<::Unity::Hierarchy::HierarchyNode>  m_Nodes, int32_t  m_Version, int32_t  m_Index) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20757};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field m_ViewModel, offset: 0x0, size: 0x8, def value: None
 ::Unity::Hierarchy::HierarchyViewModel*  m_ViewModel;

/// @brief Field m_Nodes, offset: 0x8, size: 0x10, def value: None
 ::Unity::Hierarchy::ReadOnlyNativeVector_1<::Unity::Hierarchy::HierarchyNode>  m_Nodes;

/// @brief Field m_Version, offset: 0x18, size: 0x4, def value: None
 int32_t  m_Version;

/// @brief Field m_Index, offset: 0x1c, size: 0x4, def value: None
 int32_t  m_Index;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Hierarchy::HierarchyViewModel_Enumerator, m_ViewModel) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyViewModel_Enumerator, m_Nodes) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyViewModel_Enumerator, m_Version) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyViewModel_Enumerator, m_Index) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::Unity::Hierarchy::HierarchyViewModel_Enumerator) == 0x20, "Size mismatch!");

} // namespace end def Unity::Hierarchy
// Dependencies System.IntPtr, System.Object, Unity.Hierarchy.HierarchyFlattenedNode, Unity.Hierarchy.HierarchyNode, Unity.Hierarchy.ReadOnlyNativeVector`1<T>
namespace Unity::Hierarchy {
// Is value type: false
// CS Name: Unity.Hierarchy.HierarchyViewModel
class CORDL_TYPE HierarchyViewModel : public ::System::Object {
public:
// Declarations
using BindingsMarshaller = ::Unity::Hierarchy::HierarchyViewModel_BindingsMarshaller;

using Enumerator = ::Unity::Hierarchy::HierarchyViewModel_Enumerator;

using FlagsChangedEventHandler = ::Unity::Hierarchy::HierarchyViewModel_FlagsChangedEventHandler;

 __declspec(property(get=get_Count)) int32_t  Count;

/// @brief Field FlagsChanged, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_FlagsChanged, put=__cordl_internal_set_FlagsChanged)) ::Unity::Hierarchy::HierarchyViewModel_FlagsChangedEventHandler*  FlagsChanged;

 __declspec(property(get=get_FlattenedNodes)) ::Unity::Hierarchy::ReadOnlyNativeVector_1<::Unity::Hierarchy::HierarchyFlattenedNode>  FlattenedNodes;

 __declspec(property(get=get_IsCreated)) bool  IsCreated;

 __declspec(property(get=get_Item)) ::Unity::Hierarchy::HierarchyNode  Item[];

 __declspec(property(get=get_Query)) ::Unity::Hierarchy::HierarchySearchQueryDescriptor*  Query;

 __declspec(property(put=set_QueryParser)) ::Unity::Hierarchy::IHierarchySearchQueryParser*  QueryParser;

 __declspec(property(get=get_UpdateNeeded)) bool  UpdateNeeded;

 __declspec(property(get=get_Version)) int32_t  Version;

/// @brief Field <QueryParser>k__BackingField, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__QueryParser_k__BackingField, put=__cordl_internal_set__QueryParser_k__BackingField)) ::Unity::Hierarchy::IHierarchySearchQueryParser*  _QueryParser_k__BackingField;

/// @brief Field m_FlattenedNodes, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_FlattenedNodes, put=__cordl_internal_set_m_FlattenedNodes)) ::Unity::Hierarchy::ReadOnlyNativeVector_1<::Unity::Hierarchy::HierarchyFlattenedNode>  m_FlattenedNodes;

/// @brief Field m_Hierarchy, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Hierarchy, put=__cordl_internal_set_m_Hierarchy)) ::Unity::Hierarchy::Hierarchy*  m_Hierarchy;

/// @brief Field m_HierarchyFlattened, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_HierarchyFlattened, put=__cordl_internal_set_m_HierarchyFlattened)) ::Unity::Hierarchy::HierarchyFlattened*  m_HierarchyFlattened;

/// @brief Field m_IsOwner, offset 0x4c, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_IsOwner, put=__cordl_internal_set_m_IsOwner)) bool  m_IsOwner;

/// @brief Field m_Nodes, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_Nodes, put=__cordl_internal_set_m_Nodes)) ::Unity::Hierarchy::ReadOnlyNativeVector_1<::Unity::Hierarchy::HierarchyNode>  m_Nodes;

/// @brief Field m_Ptr, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Ptr, put=__cordl_internal_set_m_Ptr)) ::System::IntPtr  m_Ptr;

/// @brief Field m_Version, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Version, put=__cordl_internal_set_m_Version)) int32_t  m_Version;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method ClearFlags, addr 0x1822bb710, size 0x40, virtual false, abstract: false, final false
inline void ClearFlags(::by_ref<::Unity::Hierarchy::HierarchyNode>  node, ::Unity::Hierarchy::HierarchyNodeFlags  flags) ;

/// @brief Method ClearFlagsNode, addr 0x1822bb710, size 0x40, virtual false, abstract: false, final false
inline void ClearFlagsNode(::by_ref<::Unity::Hierarchy::HierarchyNode>  node, ::Unity::Hierarchy::HierarchyNodeFlags  flags) ;

/// @brief Method ClearFlagsNode_Injected, addr 0x1822bb700, size 0x10, virtual false, abstract: false, final false
static inline void ClearFlagsNode_Injected(::System::IntPtr  _unity_self, ::by_ref<::Unity::Hierarchy::HierarchyNode>  node, ::Unity::Hierarchy::HierarchyNodeFlags  flags) ;

/// @brief Method ClearFlagsRecursive, addr 0x1822bb760, size 0x50, virtual false, abstract: false, final false
inline void ClearFlagsRecursive(::by_ref<::Unity::Hierarchy::HierarchyNode>  node, ::Unity::Hierarchy::HierarchyNodeFlags  flags, ::Unity::Hierarchy::HierarchyTraversalDirection  direction) ;

/// @brief Method ClearFlagsRecursiveNode, addr 0x1822bb760, size 0x50, virtual false, abstract: false, final false
inline void ClearFlagsRecursiveNode(::by_ref<::Unity::Hierarchy::HierarchyNode>  node, ::Unity::Hierarchy::HierarchyNodeFlags  flags, ::Unity::Hierarchy::HierarchyTraversalDirection  direction) ;

/// @brief Method ClearFlagsRecursiveNode_Injected, addr 0x1822bb750, size 0x10, virtual false, abstract: false, final false
static inline void ClearFlagsRecursiveNode_Injected(::System::IntPtr  _unity_self, ::by_ref<::Unity::Hierarchy::HierarchyNode>  node, ::Unity::Hierarchy::HierarchyNodeFlags  flags, ::Unity::Hierarchy::HierarchyTraversalDirection  direction) ;

/// @brief Method Contains, addr 0x1822bb7c0, size 0x40, virtual false, abstract: false, final false
inline bool Contains(::by_ref<::Unity::Hierarchy::HierarchyNode>  node) ;

/// @brief Method Contains_Injected, addr 0x1822bb7b0, size 0x10, virtual false, abstract: false, final false
static inline bool Contains_Injected(::System::IntPtr  _unity_self, ::by_ref<::Unity::Hierarchy::HierarchyNode>  node) ;

/// @brief Method Create, addr 0x1822bb980, size 0x20, virtual false, abstract: false, final false
static inline ::System::IntPtr Create(::System::IntPtr  handlePtr, ::Unity::Hierarchy::HierarchyFlattened*  hierarchyFlattened, ::Unity::Hierarchy::HierarchyNodeFlags  defaultFlags, ::by_ref<::System::IntPtr>  nodesPtr, ::by_ref<int32_t>  nodesCount, ::by_ref<::System::IntPtr>  indicesPtr, ::by_ref<int32_t>  indicesCount, ::by_ref<int32_t>  version) ;

/// @brief Method CreateHierarchyViewModel, addr 0x1822bb800, size 0x170, virtual false, abstract: false, final false
static inline ::System::IntPtr CreateHierarchyViewModel(::System::IntPtr  nativePtr, ::System::IntPtr  flattenedPtr, ::System::IntPtr  flattenedNodesPtr, int32_t  flattenedNodesCount, ::System::IntPtr  nodesPtr, int32_t  nodesCount, int32_t  version) ;

/// @brief Method Create_Injected, addr 0x1822bb970, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr Create_Injected(::System::IntPtr  handlePtr, ::System::IntPtr  hierarchyFlattened, ::Unity::Hierarchy::HierarchyNodeFlags  defaultFlags, ::by_ref<::System::IntPtr>  nodesPtr, ::by_ref<int32_t>  nodesCount, ::by_ref<::System::IntPtr>  indicesPtr, ::by_ref<int32_t>  indicesCount, ::by_ref<int32_t>  version) ;

/// @brief Method Destroy, addr 0x1822bb9a0, size 0x10, virtual false, abstract: false, final false
static inline void Destroy(::System::IntPtr  nativePtr) ;

/// @brief Method Dispose, addr 0x1822bb9b0, size 0x50, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x1822bba00, size 0x40, virtual false, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method EnumerateNodesWithAllFlags, addr 0x1822bba40, size 0x150, virtual false, abstract: false, final false
inline ::Unity::Hierarchy::HierarchyViewModelNodesEnumerable EnumerateNodesWithAllFlags(::Unity::Hierarchy::HierarchyNodeFlags  flags) ;

/// @brief Method Finalize, addr 0x1822bba00, size 0x40, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method FromIntPtr, addr 0x1822bbb90, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Hierarchy::HierarchyViewModel* FromIntPtr(::System::IntPtr  handlePtr) ;

/// @brief Method GetEnumerator, addr 0x1822bbc00, size 0x50, virtual false, abstract: false, final false
inline ::Unity::Hierarchy::HierarchyViewModel_Enumerator GetEnumerator() ;

/// @brief Method HasAllFlags, addr 0x1822bbc60, size 0x50, virtual false, abstract: false, final false
inline bool HasAllFlags(::by_ref<::Unity::Hierarchy::HierarchyNode>  node, ::Unity::Hierarchy::HierarchyNodeFlags  flags) ;

/// @brief Method HasAllFlagsNode, addr 0x1822bbc60, size 0x50, virtual false, abstract: false, final false
inline bool HasAllFlagsNode(::by_ref<::Unity::Hierarchy::HierarchyNode>  node, ::Unity::Hierarchy::HierarchyNodeFlags  flags) ;

/// @brief Method HasAllFlagsNode_Injected, addr 0x1822bbc50, size 0x10, virtual false, abstract: false, final false
static inline bool HasAllFlagsNode_Injected(::System::IntPtr  _unity_self, ::by_ref<::Unity::Hierarchy::HierarchyNode>  node, ::Unity::Hierarchy::HierarchyNodeFlags  flags) ;

/// @brief Method IndexOf, addr 0x1822bbcc0, size 0x40, virtual false, abstract: false, final false
inline int32_t IndexOf(::by_ref<::Unity::Hierarchy::HierarchyNode>  node) ;

/// @brief Method IndexOf_Injected, addr 0x1822bbcb0, size 0x10, virtual false, abstract: false, final false
static inline int32_t IndexOf_Injected(::System::IntPtr  _unity_self, ::by_ref<::Unity::Hierarchy::HierarchyNode>  node) ;

/// @brief Method InvokeFlagsChanged, addr 0x1822bbd00, size 0x90, virtual false, abstract: false, final false
static inline void InvokeFlagsChanged(::System::IntPtr  handlePtr, ::Unity::Hierarchy::HierarchyNodeFlags  flags) ;

static inline ::Unity::Hierarchy::HierarchyViewModel* New_ctor(::Unity::Hierarchy::HierarchyFlattened*  hierarchyFlattened, ::Unity::Hierarchy::HierarchyNodeFlags  defaultFlags) ;

static inline ::Unity::Hierarchy::HierarchyViewModel* New_ctor(::System::IntPtr  nativePtr, ::Unity::Hierarchy::HierarchyFlattened*  hierarchyFlattened, ::System::IntPtr  flattenedNodesPtr, int32_t  flattenedNodesCount, ::System::IntPtr  nodesPtr, int32_t  nodesCount, int32_t  version) ;

/// @brief Method SearchBegin, addr 0x1822bbd90, size 0x1a0, virtual false, abstract: false, final false
static inline void SearchBegin(::System::IntPtr  handlePtr) ;

/// @brief Method SetFlags, addr 0x1822bbf40, size 0x30, virtual false, abstract: false, final false
inline void SetFlags(::Unity::Hierarchy::HierarchyNodeFlags  flags) ;

/// @brief Method SetFlags, addr 0x1822bbf80, size 0x40, virtual false, abstract: false, final false
inline void SetFlags(::by_ref<::Unity::Hierarchy::HierarchyNode>  node, ::Unity::Hierarchy::HierarchyNodeFlags  flags) ;

/// @brief Method SetFlagsAll, addr 0x1822bbf40, size 0x30, virtual false, abstract: false, final false
inline void SetFlagsAll(::Unity::Hierarchy::HierarchyNodeFlags  flags) ;

/// @brief Method SetFlagsAll_Injected, addr 0x1822bbf30, size 0x10, virtual false, abstract: false, final false
static inline void SetFlagsAll_Injected(::System::IntPtr  _unity_self, ::Unity::Hierarchy::HierarchyNodeFlags  flags) ;

/// @brief Method SetFlagsNode, addr 0x1822bbf80, size 0x40, virtual false, abstract: false, final false
inline void SetFlagsNode(::by_ref<::Unity::Hierarchy::HierarchyNode>  node, ::Unity::Hierarchy::HierarchyNodeFlags  flags) ;

/// @brief Method SetFlagsNode_Injected, addr 0x1822bbf70, size 0x10, virtual false, abstract: false, final false
static inline void SetFlagsNode_Injected(::System::IntPtr  _unity_self, ::by_ref<::Unity::Hierarchy::HierarchyNode>  node, ::Unity::Hierarchy::HierarchyNodeFlags  flags) ;

/// @brief Method SetFlagsRecursive, addr 0x1822bbfd0, size 0x50, virtual false, abstract: false, final false
inline void SetFlagsRecursive(::by_ref<::Unity::Hierarchy::HierarchyNode>  node, ::Unity::Hierarchy::HierarchyNodeFlags  flags, ::Unity::Hierarchy::HierarchyTraversalDirection  direction) ;

/// @brief Method SetFlagsRecursiveNode, addr 0x1822bbfd0, size 0x50, virtual false, abstract: false, final false
inline void SetFlagsRecursiveNode(::by_ref<::Unity::Hierarchy::HierarchyNode>  node, ::Unity::Hierarchy::HierarchyNodeFlags  flags, ::Unity::Hierarchy::HierarchyTraversalDirection  direction) ;

/// @brief Method SetFlagsRecursiveNode_Injected, addr 0x1822bbfc0, size 0x10, virtual false, abstract: false, final false
static inline void SetFlagsRecursiveNode_Injected(::System::IntPtr  _unity_self, ::by_ref<::Unity::Hierarchy::HierarchyNode>  node, ::Unity::Hierarchy::HierarchyNodeFlags  flags, ::Unity::Hierarchy::HierarchyTraversalDirection  direction) ;

/// @brief Method Update, addr 0x1822bc120, size 0x30, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateHierarchyViewModel, addr 0x1822bc020, size 0xf0, virtual false, abstract: false, final false
static inline void UpdateHierarchyViewModel(::System::IntPtr  handlePtr, ::System::IntPtr  flattenedNodesPtr, int32_t  flattenedNodesCount, ::System::IntPtr  nodesPtr, int32_t  nodesCount, int32_t  version) ;

/// @brief Method Update_Injected, addr 0x1822bc110, size 0x10, virtual false, abstract: false, final false
static inline void Update_Injected(::System::IntPtr  _unity_self) ;

constexpr ::Unity::Hierarchy::HierarchyViewModel_FlagsChangedEventHandler* const& __cordl_internal_get_FlagsChanged() const;

constexpr ::Unity::Hierarchy::HierarchyViewModel_FlagsChangedEventHandler*& __cordl_internal_get_FlagsChanged() ;

constexpr ::Unity::Hierarchy::IHierarchySearchQueryParser* const& __cordl_internal_get__QueryParser_k__BackingField() const;

constexpr ::Unity::Hierarchy::IHierarchySearchQueryParser*& __cordl_internal_get__QueryParser_k__BackingField() ;

constexpr ::Unity::Hierarchy::ReadOnlyNativeVector_1<::Unity::Hierarchy::HierarchyFlattenedNode> const& __cordl_internal_get_m_FlattenedNodes() const;

constexpr ::Unity::Hierarchy::ReadOnlyNativeVector_1<::Unity::Hierarchy::HierarchyFlattenedNode>& __cordl_internal_get_m_FlattenedNodes() ;

constexpr ::Unity::Hierarchy::Hierarchy* const& __cordl_internal_get_m_Hierarchy() const;

constexpr ::Unity::Hierarchy::Hierarchy*& __cordl_internal_get_m_Hierarchy() ;

constexpr ::Unity::Hierarchy::HierarchyFlattened* const& __cordl_internal_get_m_HierarchyFlattened() const;

constexpr ::Unity::Hierarchy::HierarchyFlattened*& __cordl_internal_get_m_HierarchyFlattened() ;

constexpr bool const& __cordl_internal_get_m_IsOwner() const;

constexpr bool& __cordl_internal_get_m_IsOwner() ;

constexpr ::Unity::Hierarchy::ReadOnlyNativeVector_1<::Unity::Hierarchy::HierarchyNode> const& __cordl_internal_get_m_Nodes() const;

constexpr ::Unity::Hierarchy::ReadOnlyNativeVector_1<::Unity::Hierarchy::HierarchyNode>& __cordl_internal_get_m_Nodes() ;

constexpr ::System::IntPtr const& __cordl_internal_get_m_Ptr() const;

constexpr ::System::IntPtr& __cordl_internal_get_m_Ptr() ;

constexpr int32_t const& __cordl_internal_get_m_Version() const;

constexpr int32_t& __cordl_internal_get_m_Version() ;

constexpr void __cordl_internal_set_FlagsChanged(::Unity::Hierarchy::HierarchyViewModel_FlagsChangedEventHandler*  value) ;

constexpr void __cordl_internal_set__QueryParser_k__BackingField(::Unity::Hierarchy::IHierarchySearchQueryParser*  value) ;

constexpr void __cordl_internal_set_m_FlattenedNodes(::Unity::Hierarchy::ReadOnlyNativeVector_1<::Unity::Hierarchy::HierarchyFlattenedNode>  value) ;

constexpr void __cordl_internal_set_m_Hierarchy(::Unity::Hierarchy::Hierarchy*  value) ;

constexpr void __cordl_internal_set_m_HierarchyFlattened(::Unity::Hierarchy::HierarchyFlattened*  value) ;

constexpr void __cordl_internal_set_m_IsOwner(bool  value) ;

constexpr void __cordl_internal_set_m_Nodes(::Unity::Hierarchy::ReadOnlyNativeVector_1<::Unity::Hierarchy::HierarchyNode>  value) ;

constexpr void __cordl_internal_set_m_Ptr(::System::IntPtr  value) ;

constexpr void __cordl_internal_set_m_Version(int32_t  value) ;

/// @brief Method .ctor, addr 0x1822bc220, size 0x150, virtual false, abstract: false, final false
inline void _ctor(::Unity::Hierarchy::HierarchyFlattened*  hierarchyFlattened, ::Unity::Hierarchy::HierarchyNodeFlags  defaultFlags) ;

/// @brief Method .ctor, addr 0x1822bc150, size 0xd0, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  nativePtr, ::Unity::Hierarchy::HierarchyFlattened*  hierarchyFlattened, ::System::IntPtr  flattenedNodesPtr, int32_t  flattenedNodesCount, ::System::IntPtr  nodesPtr, int32_t  nodesCount, int32_t  version) ;

/// @brief Method get_Count, addr 0x1803eb0e0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Method get_FlattenedNodes, addr 0x180a26490, size 0x12a0, virtual false, abstract: false, final false
inline ::Unity::Hierarchy::ReadOnlyNativeVector_1<::Unity::Hierarchy::HierarchyFlattenedNode> get_FlattenedNodes() ;

/// @brief Method get_IsCreated, addr 0x181458e50, size 0x20, virtual false, abstract: false, final false
inline bool get_IsCreated() ;

/// @brief Method get_Item, addr 0x1822bc370, size 0x30, virtual false, abstract: false, final false
inline ::by_ref<::Unity::Hierarchy::HierarchyNode> get_Item(int32_t  index) ;

/// @brief Method get_Query, addr 0x1822bc3b0, size 0x30, virtual false, abstract: false, final false
inline ::Unity::Hierarchy::HierarchySearchQueryDescriptor* get_Query() ;

/// @brief Method get_Query_Injected, addr 0x1822bc3a0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Hierarchy::HierarchySearchQueryDescriptor* get_Query_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_UpdateNeeded, addr 0x1822bc3f0, size 0x60, virtual false, abstract: false, final false
inline bool get_UpdateNeeded() ;

/// @brief Method get_UpdateNeeded_Injected, addr 0x1822bc3e0, size 0x10, virtual false, abstract: false, final false
static inline bool get_UpdateNeeded_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_Version, addr 0x1803d4dd0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_Version() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method set_QueryParser, addr 0x1802f8080, size 0x10, virtual false, abstract: false, final false
inline void set_QueryParser(::Unity::Hierarchy::IHierarchySearchQueryParser*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HierarchyViewModel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HierarchyViewModel", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HierarchyViewModel(HierarchyViewModel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HierarchyViewModel", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HierarchyViewModel(HierarchyViewModel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20758};

/// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  ___m_Ptr;

/// @brief Field m_Hierarchy, offset: 0x18, size: 0x8, def value: None
 ::Unity::Hierarchy::Hierarchy*  ___m_Hierarchy;

/// @brief Field m_HierarchyFlattened, offset: 0x20, size: 0x8, def value: None
 ::Unity::Hierarchy::HierarchyFlattened*  ___m_HierarchyFlattened;

/// @brief Field m_FlattenedNodes, offset: 0x28, size: 0x10, def value: None
 ::Unity::Hierarchy::ReadOnlyNativeVector_1<::Unity::Hierarchy::HierarchyFlattenedNode>  ___m_FlattenedNodes;

/// @brief Field m_Nodes, offset: 0x38, size: 0x10, def value: None
 ::Unity::Hierarchy::ReadOnlyNativeVector_1<::Unity::Hierarchy::HierarchyNode>  ___m_Nodes;

/// @brief Field m_Version, offset: 0x48, size: 0x4, def value: None
 int32_t  ___m_Version;

/// @brief Field m_IsOwner, offset: 0x4c, size: 0x1, def value: None
 bool  ___m_IsOwner;

/// @brief Field FlagsChanged, offset: 0x50, size: 0x8, def value: None
 ::Unity::Hierarchy::HierarchyViewModel_FlagsChangedEventHandler*  ___FlagsChanged;

/// @brief Field <QueryParser>k__BackingField, offset: 0x58, size: 0x8, def value: None
 ::Unity::Hierarchy::IHierarchySearchQueryParser*  ____QueryParser_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Hierarchy::HierarchyViewModel, ___m_Ptr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyViewModel, ___m_Hierarchy) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyViewModel, ___m_HierarchyFlattened) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyViewModel, ___m_FlattenedNodes) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyViewModel, ___m_Nodes) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyViewModel, ___m_Version) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyViewModel, ___m_IsOwner) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyViewModel, ___FlagsChanged) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyViewModel, ____QueryParser_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(sizeof(::Unity::Hierarchy::HierarchyViewModel) == 0x60, "Size mismatch!");

} // namespace end def Unity::Hierarchy
