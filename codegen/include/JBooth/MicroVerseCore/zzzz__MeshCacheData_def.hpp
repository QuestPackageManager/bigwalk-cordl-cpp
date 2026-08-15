#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/MeshCacheData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
CORDL_MODULE_EXPORT(MeshCacheData)
// Forward declare root types
namespace JBooth::MicroVerseCore {
class MeshCacheData;
}
// Write type traits
MARK_REF_T(::JBooth::MicroVerseCore::MeshCacheData*);
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::MeshCacheData*, "JBooth.MicroVerseCore", "MeshCacheData");
// Dependencies System.Object, Unity.Collections.NativeArray`1<T>, UnityEngine.Vector3, UnityEngine.Vector4
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.MeshCacheData
class CORDL_TYPE MeshCacheData : public ::System::Object {
public:
// Declarations
/// @brief Field normals, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get_normals, put=__cordl_internal_set_normals)) ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  normals;

/// @brief Field tangents, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get_tangents, put=__cordl_internal_set_tangents)) ::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>  tangents;

/// @brief Field vertices, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_vertices, put=__cordl_internal_set_vertices)) ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  vertices;

static inline ::JBooth::MicroVerseCore::MeshCacheData* New_ctor() ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> const& __cordl_internal_get_normals() const;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>& __cordl_internal_get_normals() ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector4> const& __cordl_internal_get_tangents() const;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>& __cordl_internal_get_tangents() ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> const& __cordl_internal_get_vertices() const;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>& __cordl_internal_get_vertices() ;

constexpr void __cordl_internal_set_normals(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set_tangents(::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>  value) ;

constexpr void __cordl_internal_set_vertices(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MeshCacheData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MeshCacheData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MeshCacheData(MeshCacheData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MeshCacheData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MeshCacheData(MeshCacheData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17956};

/// @brief Field vertices, offset: 0x10, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  ___vertices;

/// @brief Field normals, offset: 0x20, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  ___normals;

/// @brief Field tangents, offset: 0x30, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>  ___tangents;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::MeshCacheData, ___vertices) == 0x10, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::MeshCacheData, ___normals) == 0x20, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::MeshCacheData, ___tangents) == 0x30, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::MeshCacheData) == 0x40, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
