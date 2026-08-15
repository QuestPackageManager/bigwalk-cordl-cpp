#pragma once
// IWYU pragma private; include "MA/Flora/StreamingSphereManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "MA/Flora/zzzz__EntityObjectRef_1_def.hpp"
#include "MA/Flora/zzzz__GraphicsBufferRef_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeHashMap_2_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "UnityEngine/zzzz__BoundingSphere_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StreamingSphereManager)
namespace MA::Flora {
template<typename T>
struct EntityObjectRef_1;
}
namespace MA::Flora {
struct StreamingSphereManager_StreamingIndex;
}
namespace System {
class IDisposable;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine {
struct BoundingSphere;
}
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace MA::Flora {
struct StreamingSphereManager;
}
namespace MA::Flora {
struct StreamingSphereManager_StreamingIndex;
}
// Write type traits
MARK_VAL_T(::MA::Flora::StreamingSphereManager);
MARK_VAL_T(::MA::Flora::StreamingSphereManager_StreamingIndex);
DEFINE_IL2CPP_CLASS(::MA::Flora::StreamingSphereManager, "MA.Flora", "StreamingSphereManager");
DEFINE_IL2CPP_CLASS(::MA::Flora::StreamingSphereManager_StreamingIndex, "MA.Flora", "StreamingSphereManager/StreamingIndex");
// Dependencies MA.Flora.EntityObjectRef`1<T>
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.StreamingSphereManager/StreamingIndex
struct CORDL_TYPE StreamingSphereManager_StreamingIndex {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr StreamingSphereManager_StreamingIndex() ;

// Ctor Parameters [CppParam { name: "Valid", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "LastUsedFrameIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Camera", ty: "::MA::Flora::EntityObjectRef_1<::UnityW<::UnityEngine::Camera>>", modifiers: "", def_value: None }]
constexpr StreamingSphereManager_StreamingIndex(bool  Valid, int32_t  LastUsedFrameIndex, ::MA::Flora::EntityObjectRef_1<::UnityW<::UnityEngine::Camera>>  Camera) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13243};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field Valid, offset: 0x0, size: 0x1, def value: None
 bool  Valid;

/// @brief Field LastUsedFrameIndex, offset: 0x4, size: 0x4, def value: None
 int32_t  LastUsedFrameIndex;

/// @brief Field Camera, offset: 0x8, size: 0x4, def value: None
 ::MA::Flora::EntityObjectRef_1<::UnityW<::UnityEngine::Camera>>  Camera;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::StreamingSphereManager_StreamingIndex, Valid) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::StreamingSphereManager_StreamingIndex, LastUsedFrameIndex) == 0x4, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::StreamingSphereManager_StreamingIndex, Camera) == 0x8, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::StreamingSphereManager_StreamingIndex) == 0xc, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.EntityObjectRef`1<T>, MA.Flora.GraphicsBufferRef, MA.Flora.StreamingSphereManager::StreamingIndex, Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2<TKey, TValue>, Unity.Collections.NativeList`1<T>, UnityEngine.BoundingSphere
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.StreamingSphereManager
struct CORDL_TYPE StreamingSphereManager {
public:
// Declarations
using StreamingIndex = ::MA::Flora::StreamingSphereManager_StreamingIndex;

 __declspec(property(get=get_StreamingSpheres)) ::Unity::Collections::NativeArray_1<::UnityEngine::BoundingSphere>  StreamingSpheres;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1814d7e30, size 0x50, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Initialize, addr 0x1814d7e80, size 0x170, virtual false, abstract: false, final false
inline void Initialize() ;

/// @brief Method RemoveCamera, addr 0x1814d7ff0, size 0xb0, virtual false, abstract: false, final false
inline void RemoveCamera(::MA::Flora::EntityObjectRef_1<::UnityW<::UnityEngine::Camera>>  camera) ;

/// @brief Method Update, addr 0x1814d8350, size 0xa0, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateCamera, addr 0x1814d80a0, size 0x2b0, virtual false, abstract: false, final false
inline void UpdateCamera(::UnityEngine::Camera*  camera) ;

/// @brief Method get_StreamingSpheres, addr 0x1814d83f0, size 0x50, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::UnityEngine::BoundingSphere> get_StreamingSpheres() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr StreamingSphereManager() ;

// Ctor Parameters [CppParam { name: "m_StreamingSphereIndexByCamera", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeHashMap_2<::MA::Flora::EntityObjectRef_1<::UnityW<::UnityEngine::Camera>>,int32_t>", modifiers: "", def_value: None }, CppParam { name: "m_Slots", ty: "::Unity::Collections::NativeList_1<::MA::Flora::StreamingSphereManager_StreamingIndex>", modifiers: "", def_value: None }, CppParam { name: "m_StreamingSpheres", ty: "::Unity::Collections::NativeList_1<::UnityEngine::BoundingSphere>", modifiers: "", def_value: None }, CppParam { name: "m_StreamingSphereFixedMoveDistance", ty: "::Unity::Collections::NativeList_1<uint16_t>", modifiers: "", def_value: None }, CppParam { name: "m_StreamingSphereBuffer", ty: "::MA::Flora::GraphicsBufferRef", modifiers: "", def_value: None }, CppParam { name: "m_FrameIndex", ty: "int32_t", modifiers: "", def_value: None }]
constexpr StreamingSphereManager(::Unity::Collections::LowLevel::Unsafe::UnsafeHashMap_2<::MA::Flora::EntityObjectRef_1<::UnityW<::UnityEngine::Camera>>,int32_t>  m_StreamingSphereIndexByCamera, ::Unity::Collections::NativeList_1<::MA::Flora::StreamingSphereManager_StreamingIndex>  m_Slots, ::Unity::Collections::NativeList_1<::UnityEngine::BoundingSphere>  m_StreamingSpheres, ::Unity::Collections::NativeList_1<uint16_t>  m_StreamingSphereFixedMoveDistance, ::MA::Flora::GraphicsBufferRef  m_StreamingSphereBuffer, int32_t  m_FrameIndex) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13244};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x60};

/// @brief Field m_StreamingSphereIndexByCamera, offset: 0x0, size: 0x40, def value: None
 ::Unity::Collections::LowLevel::Unsafe::UnsafeHashMap_2<::MA::Flora::EntityObjectRef_1<::UnityW<::UnityEngine::Camera>>,int32_t>  m_StreamingSphereIndexByCamera;

/// @brief Field m_Slots, offset: 0x40, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<::MA::Flora::StreamingSphereManager_StreamingIndex>  m_Slots;

/// @brief Field m_StreamingSpheres, offset: 0x48, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<::UnityEngine::BoundingSphere>  m_StreamingSpheres;

/// @brief Field m_StreamingSphereFixedMoveDistance, offset: 0x50, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<uint16_t>  m_StreamingSphereFixedMoveDistance;

/// @brief Field m_StreamingSphereBuffer, offset: 0x58, size: 0x4, def value: None
 ::MA::Flora::GraphicsBufferRef  m_StreamingSphereBuffer;

/// @brief Field m_FrameIndex, offset: 0x5c, size: 0x4, def value: None
 int32_t  m_FrameIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::StreamingSphereManager, m_StreamingSphereIndexByCamera) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::StreamingSphereManager, m_Slots) == 0x40, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::StreamingSphereManager, m_StreamingSpheres) == 0x48, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::StreamingSphereManager, m_StreamingSphereFixedMoveDistance) == 0x50, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::StreamingSphereManager, m_StreamingSphereBuffer) == 0x58, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::StreamingSphereManager, m_FrameIndex) == 0x5c, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::StreamingSphereManager) == 0x60, "Size mismatch!");

} // namespace end def MA::Flora
