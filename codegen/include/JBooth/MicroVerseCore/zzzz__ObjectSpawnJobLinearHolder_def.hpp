#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/ObjectSpawnJobLinearHolder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "JBooth/MicroVerseCore/zzzz__ObjSpawnJobLinear_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
CORDL_MODULE_EXPORT(ObjectSpawnJobLinearHolder)
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace JBooth::MicroVerseCore {
class ObjectSpawnJobLinearHolder;
}
// Write type traits
MARK_REF_T(::JBooth::MicroVerseCore::ObjectSpawnJobLinearHolder*);
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::ObjectSpawnJobLinearHolder*, "JBooth.MicroVerseCore", "ObjectSpawnJobLinearHolder");
// Dependencies JBooth.MicroVerseCore.ObjSpawnJobLinear, System.Object, Unity.Jobs.JobHandle
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.ObjectSpawnJobLinearHolder
class CORDL_TYPE ObjectSpawnJobLinearHolder : public ::System::Object {
public:
// Declarations
/// @brief Field handle, offset 0x80, size 0x10 
 __declspec(property(get=__cordl_internal_get_handle, put=__cordl_internal_set_handle)) ::Unity::Jobs::JobHandle  handle;

/// @brief Field job, offset 0x10, size 0x70 
 __declspec(property(get=__cordl_internal_get_job, put=__cordl_internal_set_job)) ::JBooth::MicroVerseCore::ObjSpawnJobLinear  job;

/// @brief Field prefab, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_prefab, put=__cordl_internal_set_prefab)) ::UnityW<::UnityEngine::GameObject>  prefab;

static inline ::JBooth::MicroVerseCore::ObjectSpawnJobLinearHolder* New_ctor() ;

constexpr ::Unity::Jobs::JobHandle const& __cordl_internal_get_handle() const;

constexpr ::Unity::Jobs::JobHandle& __cordl_internal_get_handle() ;

constexpr ::JBooth::MicroVerseCore::ObjSpawnJobLinear const& __cordl_internal_get_job() const;

constexpr ::JBooth::MicroVerseCore::ObjSpawnJobLinear& __cordl_internal_get_job() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_prefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_prefab() ;

constexpr void __cordl_internal_set_handle(::Unity::Jobs::JobHandle  value) ;

constexpr void __cordl_internal_set_job(::JBooth::MicroVerseCore::ObjSpawnJobLinear  value) ;

constexpr void __cordl_internal_set_prefab(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ObjectSpawnJobLinearHolder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ObjectSpawnJobLinearHolder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ObjectSpawnJobLinearHolder(ObjectSpawnJobLinearHolder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ObjectSpawnJobLinearHolder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObjectSpawnJobLinearHolder(ObjectSpawnJobLinearHolder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17950};

/// @brief Field job, offset: 0x10, size: 0x70, def value: None
 ::JBooth::MicroVerseCore::ObjSpawnJobLinear  ___job;

/// @brief Field handle, offset: 0x80, size: 0x10, def value: None
 ::Unity::Jobs::JobHandle  ___handle;

/// @brief Field prefab, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___prefab;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::ObjectSpawnJobLinearHolder, ___job) == 0x10, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::ObjectSpawnJobLinearHolder, ___handle) == 0x80, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::ObjectSpawnJobLinearHolder, ___prefab) == 0x90, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::ObjectSpawnJobLinearHolder) == 0x98, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
