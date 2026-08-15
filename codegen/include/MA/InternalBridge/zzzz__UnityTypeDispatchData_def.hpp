#pragma once
// IWYU pragma private; include "MA/InternalBridge/UnityTypeDispatchData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__TypeDispatchData_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(UnityTypeDispatchData)
namespace System {
class IDisposable;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace Unity::Jobs {
struct JobHandle;
}
namespace UnityEngine {
struct EntityId;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct TypeDispatchData;
}
// Forward declare root types
namespace MA::InternalBridge {
struct UnityTypeDispatchData;
}
// Write type traits
MARK_VAL_T(::MA::InternalBridge::UnityTypeDispatchData);
DEFINE_IL2CPP_CLASS(::MA::InternalBridge::UnityTypeDispatchData, "MA.InternalBridge", "UnityTypeDispatchData");
// Dependencies UnityEngine.TypeDispatchData
namespace MA::InternalBridge {
// Is value type: true
// CS Name: MA.InternalBridge.UnityTypeDispatchData
struct CORDL_TYPE UnityTypeDispatchData {
public:
// Declarations
 __declspec(property(get=get_changed)) ::ArrayW<::UnityW<::UnityEngine::Object>>  changed;

 __declspec(property(get=get_changedID)) ::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>  changedID;

 __declspec(property(get=get_destroyedID)) ::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>  destroyedID;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x181ecedf0, size 0x20, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x181eced60, size 0x90, virtual false, abstract: false, final false
inline void Dispose(::Unity::Jobs::JobHandle  inputDeps) ;

/// @brief Method get_changed, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<::UnityW<::UnityEngine::Object>> get_changed() ;

/// @brief Method get_changedID, addr 0x181ecee10, size 0x50, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> get_changedID() ;

/// @brief Method get_destroyedID, addr 0x181ecee60, size 0x50, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> get_destroyedID() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

/// @brief Method op_Implicit, addr 0x181eceeb0, size 0xc0, virtual false, abstract: false, final false
static inline ::MA::InternalBridge::UnityTypeDispatchData op_Implicit___MA__InternalBridge__UnityTypeDispatchData(::UnityEngine::TypeDispatchData  typeDispatchData) ;

/// @brief Method op_Implicit, addr 0x1812e3650, size 0x1e30, virtual false, abstract: false, final false
static inline ::UnityEngine::TypeDispatchData op_Implicit___UnityEngine__TypeDispatchData(::MA::InternalBridge::UnityTypeDispatchData  typeDispatchData) ;

// Ctor Parameters []
// @brief default ctor
constexpr UnityTypeDispatchData() ;

// Ctor Parameters [CppParam { name: "m_TypeDispatchData", ty: "::UnityEngine::TypeDispatchData", modifiers: "", def_value: None }]
constexpr UnityTypeDispatchData(::UnityEngine::TypeDispatchData  m_TypeDispatchData) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21114};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field m_TypeDispatchData, offset: 0x0, size: 0x28, def value: None
 ::UnityEngine::TypeDispatchData  m_TypeDispatchData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::InternalBridge::UnityTypeDispatchData, m_TypeDispatchData) == 0x0, "Offset mismatch!");

static_assert(sizeof(::MA::InternalBridge::UnityTypeDispatchData) == 0x28, "Size mismatch!");

} // namespace end def MA::InternalBridge
