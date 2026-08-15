#pragma once
// IWYU pragma private; include "MA/InternalBridge/UnityTransformDispatchData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__TransformDispatchData_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(UnityTransformDispatchData)
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
struct Matrix4x4;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct TransformDispatchData;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace MA::InternalBridge {
struct UnityTransformDispatchData;
}
// Write type traits
MARK_VAL_T(::MA::InternalBridge::UnityTransformDispatchData);
DEFINE_IL2CPP_CLASS(::MA::InternalBridge::UnityTransformDispatchData, "MA.InternalBridge", "UnityTransformDispatchData");
// Dependencies UnityEngine.TransformDispatchData
namespace MA::InternalBridge {
// Is value type: true
// CS Name: MA.InternalBridge.UnityTransformDispatchData
struct CORDL_TYPE UnityTransformDispatchData {
public:
// Declarations
 __declspec(property(get=get_localToWorldMatrices)) ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>  localToWorldMatrices;

 __declspec(property(get=get_parentID)) ::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>  parentID;

 __declspec(property(get=get_positions)) ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  positions;

 __declspec(property(get=get_rotations)) ::Unity::Collections::NativeArray_1<::UnityEngine::Quaternion>  rotations;

 __declspec(property(get=get_scales)) ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  scales;

 __declspec(property(get=get_transformedID)) ::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>  transformedID;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x181ececb0, size 0x20, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x181ecebb0, size 0x100, virtual false, abstract: false, final false
inline void Dispose(::Unity::Jobs::JobHandle  inputDeps) ;

/// @brief Method get_localToWorldMatrices, addr 0x1802f41b0, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4> get_localToWorldMatrices() ;

/// @brief Method get_parentID, addr 0x181ececd0, size 0x50, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> get_parentID() ;

/// @brief Method get_positions, addr 0x1802e30e0, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> get_positions() ;

/// @brief Method get_rotations, addr 0x18052ca40, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::UnityEngine::Quaternion> get_rotations() ;

/// @brief Method get_scales, addr 0x180e3e650, size 0xbb40, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> get_scales() ;

/// @brief Method get_transformedID, addr 0x181ecdf60, size 0xa0, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> get_transformedID() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

/// @brief Method op_Implicit, addr 0x181eced20, size 0x40, virtual false, abstract: false, final false
static inline ::MA::InternalBridge::UnityTransformDispatchData op_Implicit___MA__InternalBridge__UnityTransformDispatchData(::UnityEngine::TransformDispatchData  transformDispatchData) ;

/// @brief Method op_Implicit, addr 0x181eced20, size 0x40, virtual false, abstract: false, final false
static inline ::UnityEngine::TransformDispatchData op_Implicit___UnityEngine__TransformDispatchData(::MA::InternalBridge::UnityTransformDispatchData  transformDispatchData) ;

// Ctor Parameters []
// @brief default ctor
constexpr UnityTransformDispatchData() ;

// Ctor Parameters [CppParam { name: "m_TransformDispatchData", ty: "::UnityEngine::TransformDispatchData", modifiers: "", def_value: None }]
constexpr UnityTransformDispatchData(::UnityEngine::TransformDispatchData  m_TransformDispatchData) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21115};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x60};

/// @brief Field m_TransformDispatchData, offset: 0x0, size: 0x60, def value: None
 ::UnityEngine::TransformDispatchData  m_TransformDispatchData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::InternalBridge::UnityTransformDispatchData, m_TransformDispatchData) == 0x0, "Offset mismatch!");

static_assert(sizeof(::MA::InternalBridge::UnityTransformDispatchData) == 0x60, "Size mismatch!");

} // namespace end def MA::InternalBridge
