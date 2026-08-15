#pragma once
// IWYU pragma private; include "MA/InternalBridge/UnityObjectDispatcher.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnityObjectDispatcher)
namespace MA::InternalBridge {
struct UnityObjectDispatcher_TransformTrackingType;
}
namespace MA::InternalBridge {
struct UnityObjectDispatcher_TypeTrackingFlags;
}
namespace MA::InternalBridge {
struct UnityTransformDispatchData;
}
namespace MA::InternalBridge {
struct UnityTypeDispatchData;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class IDisposable;
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
namespace UnityEngine {
class Component;
}
namespace UnityEngine {
struct EntityId;
}
namespace UnityEngine {
class ObjectDispatcher;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct TransformDispatchData;
}
namespace UnityEngine {
struct TypeDispatchData;
}
// Forward declare root types
namespace MA::InternalBridge {
struct UnityObjectDispatcher_TransformTrackingType;
}
namespace MA::InternalBridge {
struct UnityObjectDispatcher_TypeTrackingFlags;
}
namespace MA::InternalBridge {
class UnityObjectDispatcher;
}
// Write type traits
MARK_VAL_T(::MA::InternalBridge::UnityObjectDispatcher_TransformTrackingType);
MARK_VAL_T(::MA::InternalBridge::UnityObjectDispatcher_TypeTrackingFlags);
MARK_REF_T(::MA::InternalBridge::UnityObjectDispatcher*);
DEFINE_IL2CPP_CLASS(::MA::InternalBridge::UnityObjectDispatcher_TransformTrackingType, "MA.InternalBridge", "UnityObjectDispatcher/TransformTrackingType");
DEFINE_IL2CPP_CLASS(::MA::InternalBridge::UnityObjectDispatcher_TypeTrackingFlags, "MA.InternalBridge", "UnityObjectDispatcher/TypeTrackingFlags");
DEFINE_IL2CPP_CLASS(::MA::InternalBridge::UnityObjectDispatcher*, "MA.InternalBridge", "UnityObjectDispatcher");
// Dependencies 
namespace MA::InternalBridge {
// Is value type: true
// CS Name: MA.InternalBridge.UnityObjectDispatcher/TransformTrackingType
struct CORDL_TYPE UnityObjectDispatcher_TransformTrackingType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __UnityObjectDispatcher_TransformTrackingType_Unwrapped
enum struct __UnityObjectDispatcher_TransformTrackingType_Unwrapped : int32_t {
__E_GlobalTRS = static_cast<int32_t>(0x0),
__E_LocalTRS = static_cast<int32_t>(0x1),
__E_Hierarchy = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityObjectDispatcher_TransformTrackingType_Unwrapped () const noexcept {
return static_cast<__UnityObjectDispatcher_TransformTrackingType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr UnityObjectDispatcher_TransformTrackingType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityObjectDispatcher_TransformTrackingType(int32_t  value__) noexcept;

/// @brief Field GlobalTRS value: I32(0)
static ::MA::InternalBridge::UnityObjectDispatcher_TransformTrackingType const GlobalTRS;

/// @brief Field Hierarchy value: I32(2)
static ::MA::InternalBridge::UnityObjectDispatcher_TransformTrackingType const Hierarchy;

/// @brief Field LocalTRS value: I32(1)
static ::MA::InternalBridge::UnityObjectDispatcher_TransformTrackingType const LocalTRS;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21116};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::InternalBridge::UnityObjectDispatcher_TransformTrackingType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::MA::InternalBridge::UnityObjectDispatcher_TransformTrackingType) == 0x4, "Size mismatch!");

} // namespace end def MA::InternalBridge
// Dependencies 
namespace MA::InternalBridge {
// Is value type: true
// CS Name: MA.InternalBridge.UnityObjectDispatcher/TypeTrackingFlags
struct CORDL_TYPE UnityObjectDispatcher_TypeTrackingFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __UnityObjectDispatcher_TypeTrackingFlags_Unwrapped
enum struct __UnityObjectDispatcher_TypeTrackingFlags_Unwrapped : int32_t {
__E_SceneObjects = static_cast<int32_t>(0x1),
__E_Assets = static_cast<int32_t>(0x2),
__E_EditorOnlyObjects = static_cast<int32_t>(0x4),
__E_Default = static_cast<int32_t>(0x3),
__E_All = static_cast<int32_t>(0x7),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityObjectDispatcher_TypeTrackingFlags_Unwrapped () const noexcept {
return static_cast<__UnityObjectDispatcher_TypeTrackingFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr UnityObjectDispatcher_TypeTrackingFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityObjectDispatcher_TypeTrackingFlags(int32_t  value__) noexcept;

/// @brief Field All value: I32(7)
static ::MA::InternalBridge::UnityObjectDispatcher_TypeTrackingFlags const All;

/// @brief Field Assets value: I32(2)
static ::MA::InternalBridge::UnityObjectDispatcher_TypeTrackingFlags const Assets;

/// @brief Field Default value: I32(3)
static ::MA::InternalBridge::UnityObjectDispatcher_TypeTrackingFlags const Default;

/// @brief Field EditorOnlyObjects value: I32(4)
static ::MA::InternalBridge::UnityObjectDispatcher_TypeTrackingFlags const EditorOnlyObjects;

/// @brief Field SceneObjects value: I32(1)
static ::MA::InternalBridge::UnityObjectDispatcher_TypeTrackingFlags const SceneObjects;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21117};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::InternalBridge::UnityObjectDispatcher_TypeTrackingFlags, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::MA::InternalBridge::UnityObjectDispatcher_TypeTrackingFlags) == 0x4, "Size mismatch!");

} // namespace end def MA::InternalBridge
// Dependencies System.Object
namespace MA::InternalBridge {
// Is value type: false
// CS Name: MA.InternalBridge.UnityObjectDispatcher
class CORDL_TYPE UnityObjectDispatcher : public ::System::Object {
public:
// Declarations
using TransformTrackingType = ::MA::InternalBridge::UnityObjectDispatcher_TransformTrackingType;

using TypeTrackingFlags = ::MA::InternalBridge::UnityObjectDispatcher_TypeTrackingFlags;

/// @brief Field m_ObjectDispatcher, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ObjectDispatcher, put=__cordl_internal_set_m_ObjectDispatcher)) ::UnityEngine::ObjectDispatcher*  m_ObjectDispatcher;

 __declspec(property(get=get_maxDispatchHistoryFramesCount, put=set_maxDispatchHistoryFramesCount)) int32_t  maxDispatchHistoryFramesCount;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method ClearTypeChanges, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void ClearTypeChanges() ;

/// @brief Method ClearTypeChanges, addr 0x181ece820, size 0x10, virtual false, abstract: false, final false
inline void ClearTypeChanges(::System::Type*  type) ;

/// @brief Method DisableTransformTracking, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void DisableTransformTracking(::MA::InternalBridge::UnityObjectDispatcher_TransformTrackingType  trackingType) ;

/// @brief Method DisableTransformTracking, addr 0x181ece830, size 0x10, virtual false, abstract: false, final false
inline void DisableTransformTracking(::MA::InternalBridge::UnityObjectDispatcher_TransformTrackingType  trackingType, ::ArrayW<::System::Type*>  types) ;

/// @brief Method DisableTypeTracking, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void DisableTypeTracking() ;

/// @brief Method DisableTypeTracking, addr 0x181ece840, size 0x10, virtual false, abstract: false, final false
inline void DisableTypeTracking(::ArrayW<::System::Type*>  types) ;

/// @brief Method DispatchTransformChangesAndClear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void DispatchTransformChangesAndClear(::MA::InternalBridge::UnityObjectDispatcher_TransformTrackingType  trackingType, ::System::Action_1<::ArrayW<::UnityW<::UnityEngine::Component>>>*  callback, bool  sortByInstanceID) ;

/// @brief Method DispatchTransformChangesAndClear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void DispatchTransformChangesAndClear(::MA::InternalBridge::UnityObjectDispatcher_TransformTrackingType  trackingType, ::System::Action_1<::UnityEngine::TransformDispatchData>*  callback) ;

/// @brief Method DispatchTransformChangesAndClear, addr 0x181ece850, size 0x20, virtual false, abstract: false, final false
inline void DispatchTransformChangesAndClear(::System::Type*  type, ::MA::InternalBridge::UnityObjectDispatcher_TransformTrackingType  trackingType, ::System::Action_1<::ArrayW<::UnityW<::UnityEngine::Component>>>*  callback, bool  sortByInstanceID) ;

/// @brief Method DispatchTransformChangesAndClear, addr 0x181ece870, size 0x20, virtual false, abstract: false, final false
inline void DispatchTransformChangesAndClear(::System::Type*  type, ::MA::InternalBridge::UnityObjectDispatcher_TransformTrackingType  trackingType, ::System::Action_1<::UnityEngine::TransformDispatchData>*  callback) ;

/// @brief Method DispatchTypeChangesAndClear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void DispatchTypeChangesAndClear(::System::Action_1<::UnityEngine::TypeDispatchData>*  callback, bool  sortByInstanceID, bool  noScriptingArray) ;

/// @brief Method DispatchTypeChangesAndClear, addr 0x181ece890, size 0x20, virtual false, abstract: false, final false
inline void DispatchTypeChangesAndClear(::System::Type*  type, ::System::Action_1<::UnityEngine::TypeDispatchData>*  callback, bool  sortByInstanceID, bool  noScriptingArray) ;

/// @brief Method Dispose, addr 0x181ece8b0, size 0x10, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method EnableTransformTracking, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void EnableTransformTracking(::MA::InternalBridge::UnityObjectDispatcher_TransformTrackingType  trackingType) ;

/// @brief Method EnableTransformTracking, addr 0x181ece8c0, size 0x10, virtual false, abstract: false, final false
inline void EnableTransformTracking(::MA::InternalBridge::UnityObjectDispatcher_TransformTrackingType  trackingType, ::ArrayW<::System::Type*>  types) ;

/// @brief Method EnableTypeTracking, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void EnableTypeTracking(::MA::InternalBridge::UnityObjectDispatcher_TypeTrackingFlags  typeTrackingMask) ;

/// @brief Method EnableTypeTracking, addr 0x181ece8e0, size 0x10, virtual false, abstract: false, final false
inline void EnableTypeTracking(::MA::InternalBridge::UnityObjectDispatcher_TypeTrackingFlags  typeTrackingMask, ::ArrayW<::System::Type*>  types) ;

/// @brief Method EnableTypeTracking, addr 0x181ece8d0, size 0x10, virtual false, abstract: false, final false
inline void EnableTypeTracking(::ArrayW<::System::Type*>  types) ;

/// @brief Method GetTransformChangesAndClear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline ::ArrayW<::UnityW<::UnityEngine::Component>> GetTransformChangesAndClear(::MA::InternalBridge::UnityObjectDispatcher_TransformTrackingType  trackingType, bool  sortByInstanceID) ;

/// @brief Method GetTransformChangesAndClear, addr 0x181ece960, size 0x20, virtual false, abstract: false, final false
inline ::ArrayW<::UnityW<::UnityEngine::Component>> GetTransformChangesAndClear(::System::Type*  type, ::MA::InternalBridge::UnityObjectDispatcher_TransformTrackingType  trackingType, bool  sortByInstanceID) ;

/// @brief Method GetTransformChangesAndClear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline ::MA::InternalBridge::UnityTransformDispatchData GetTransformChangesAndClear(::MA::InternalBridge::UnityObjectDispatcher_TransformTrackingType  trackingType, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method GetTransformChangesAndClear, addr 0x181ece8f0, size 0x70, virtual false, abstract: false, final false
inline ::MA::InternalBridge::UnityTransformDispatchData GetTransformChangesAndClear(::System::Type*  type, ::MA::InternalBridge::UnityObjectDispatcher_TransformTrackingType  trackingType, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method GetTypeChangesAndClear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline ::MA::InternalBridge::UnityTypeDispatchData GetTypeChangesAndClear(::Unity::Collections::Allocator  allocator, bool  sortByInstanceID, bool  noScriptingArray) ;

/// @brief Method GetTypeChangesAndClear, addr 0x181ecea20, size 0x70, virtual false, abstract: false, final false
inline ::MA::InternalBridge::UnityTypeDispatchData GetTypeChangesAndClear(::System::Type*  type, ::Unity::Collections::Allocator  allocator, bool  sortByInstanceID, bool  noScriptingArray) ;

/// @brief Method GetTypeChangesAndClear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void GetTypeChangesAndClear(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  changed, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>  changedID, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>  destroyedID, ::Unity::Collections::Allocator  allocator, bool  sortByInstanceID) ;

/// @brief Method GetTypeChangesAndClear, addr 0x181ece980, size 0xa0, virtual false, abstract: false, final false
inline void GetTypeChangesAndClear(::System::Type*  type, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  changed, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>  changedID, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>  destroyedID, ::Unity::Collections::Allocator  allocator, bool  sortByInstanceID) ;

/// @brief Method IsValid, addr 0x181ecea90, size 0x10, virtual false, abstract: false, final false
inline bool IsValid() ;

static inline ::MA::InternalBridge::UnityObjectDispatcher* New_ctor() ;

constexpr ::UnityEngine::ObjectDispatcher* const& __cordl_internal_get_m_ObjectDispatcher() const;

constexpr ::UnityEngine::ObjectDispatcher*& __cordl_internal_get_m_ObjectDispatcher() ;

constexpr void __cordl_internal_set_m_ObjectDispatcher(::UnityEngine::ObjectDispatcher*  value) ;

/// @brief Method .ctor, addr 0x181eceaa0, size 0x40, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_maxDispatchHistoryFramesCount, addr 0x181eceae0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_maxDispatchHistoryFramesCount() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method set_maxDispatchHistoryFramesCount, addr 0x181eceaf0, size 0x10, virtual false, abstract: false, final false
inline void set_maxDispatchHistoryFramesCount(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityObjectDispatcher() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityObjectDispatcher", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityObjectDispatcher(UnityObjectDispatcher && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityObjectDispatcher", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityObjectDispatcher(UnityObjectDispatcher const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21118};

/// @brief Field m_ObjectDispatcher, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::ObjectDispatcher*  ___m_ObjectDispatcher;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::MA::InternalBridge::UnityObjectDispatcher, ___m_ObjectDispatcher) == 0x10, "Offset mismatch!");

static_assert(sizeof(::MA::InternalBridge::UnityObjectDispatcher) == 0x18, "Size mismatch!");

} // namespace end def MA::InternalBridge
