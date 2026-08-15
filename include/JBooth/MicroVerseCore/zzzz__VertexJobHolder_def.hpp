#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/VertexJobHolder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "JBooth/MicroVerseCore/zzzz__BendVertexJob_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
CORDL_MODULE_EXPORT(VertexJobHolder)
namespace JBooth::MicroVerseCore {
class MeshCacheData;
}
namespace UnityEngine {
class MeshCollider;
}
namespace UnityEngine {
class MeshFilter;
}
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace JBooth::MicroVerseCore {
class VertexJobHolder;
}
// Write type traits
MARK_REF_T(::JBooth::MicroVerseCore::VertexJobHolder*);
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::VertexJobHolder*, "JBooth.MicroVerseCore", "VertexJobHolder");
// Dependencies JBooth.MicroVerseCore.BendVertexJob, System.Object, Unity.Jobs.JobHandle
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.VertexJobHolder
class CORDL_TYPE VertexJobHolder : public ::System::Object {
public:
// Declarations
/// @brief Field bendHandle, offset 0x118, size 0x10 
 __declspec(property(get=__cordl_internal_get_bendHandle, put=__cordl_internal_set_bendHandle)) ::Unity::Jobs::JobHandle  bendHandle;

/// @brief Field bendJob, offset 0x10, size 0x108 
 __declspec(property(get=__cordl_internal_get_bendJob, put=__cordl_internal_set_bendJob)) ::JBooth::MicroVerseCore::BendVertexJob  bendJob;

/// @brief Field cacheData, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get_cacheData, put=__cordl_internal_set_cacheData)) ::JBooth::MicroVerseCore::MeshCacheData*  cacheData;

/// @brief Field mesh, offset 0x140, size 0x8 
 __declspec(property(get=__cordl_internal_get_mesh, put=__cordl_internal_set_mesh)) ::UnityW<::UnityEngine::Mesh>  mesh;

/// @brief Field meshCollider, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get_meshCollider, put=__cordl_internal_set_meshCollider)) ::UnityW<::UnityEngine::MeshCollider>  meshCollider;

/// @brief Field meshFilter, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get_meshFilter, put=__cordl_internal_set_meshFilter)) ::UnityW<::UnityEngine::MeshFilter>  meshFilter;

static inline ::JBooth::MicroVerseCore::VertexJobHolder* New_ctor() ;

constexpr ::Unity::Jobs::JobHandle const& __cordl_internal_get_bendHandle() const;

constexpr ::Unity::Jobs::JobHandle& __cordl_internal_get_bendHandle() ;

constexpr ::JBooth::MicroVerseCore::BendVertexJob const& __cordl_internal_get_bendJob() const;

constexpr ::JBooth::MicroVerseCore::BendVertexJob& __cordl_internal_get_bendJob() ;

constexpr ::JBooth::MicroVerseCore::MeshCacheData* const& __cordl_internal_get_cacheData() const;

constexpr ::JBooth::MicroVerseCore::MeshCacheData*& __cordl_internal_get_cacheData() ;

constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_mesh() const;

constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_mesh() ;

constexpr ::UnityW<::UnityEngine::MeshCollider> const& __cordl_internal_get_meshCollider() const;

constexpr ::UnityW<::UnityEngine::MeshCollider>& __cordl_internal_get_meshCollider() ;

constexpr ::UnityW<::UnityEngine::MeshFilter> const& __cordl_internal_get_meshFilter() const;

constexpr ::UnityW<::UnityEngine::MeshFilter>& __cordl_internal_get_meshFilter() ;

constexpr void __cordl_internal_set_bendHandle(::Unity::Jobs::JobHandle  value) ;

constexpr void __cordl_internal_set_bendJob(::JBooth::MicroVerseCore::BendVertexJob  value) ;

constexpr void __cordl_internal_set_cacheData(::JBooth::MicroVerseCore::MeshCacheData*  value) ;

constexpr void __cordl_internal_set_mesh(::UnityW<::UnityEngine::Mesh>  value) ;

constexpr void __cordl_internal_set_meshCollider(::UnityW<::UnityEngine::MeshCollider>  value) ;

constexpr void __cordl_internal_set_meshFilter(::UnityW<::UnityEngine::MeshFilter>  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VertexJobHolder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VertexJobHolder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VertexJobHolder(VertexJobHolder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VertexJobHolder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VertexJobHolder(VertexJobHolder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17955};

/// @brief Field bendJob, offset: 0x10, size: 0x108, def value: None
 ::JBooth::MicroVerseCore::BendVertexJob  ___bendJob;

/// @brief Field bendHandle, offset: 0x118, size: 0x10, def value: None
 ::Unity::Jobs::JobHandle  ___bendHandle;

/// @brief Field cacheData, offset: 0x128, size: 0x8, def value: None
 ::JBooth::MicroVerseCore::MeshCacheData*  ___cacheData;

/// @brief Field meshFilter, offset: 0x130, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshFilter>  ___meshFilter;

/// @brief Field meshCollider, offset: 0x138, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshCollider>  ___meshCollider;

/// @brief Field mesh, offset: 0x140, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  ___mesh;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::VertexJobHolder, ___bendJob) == 0x10, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::VertexJobHolder, ___bendHandle) == 0x118, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::VertexJobHolder, ___cacheData) == 0x128, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::VertexJobHolder, ___meshFilter) == 0x130, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::VertexJobHolder, ___meshCollider) == 0x138, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::VertexJobHolder, ___mesh) == 0x140, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::VertexJobHolder) == 0x148, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
