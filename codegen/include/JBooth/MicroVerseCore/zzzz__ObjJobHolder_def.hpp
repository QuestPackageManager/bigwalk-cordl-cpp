#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/ObjJobHolder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "JBooth/MicroVerseCore/zzzz__ObjectSpawnJob_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
CORDL_MODULE_EXPORT(ObjJobHolder)
namespace JBooth::MicroVerseCore {
struct ObjectSpawnJob_ObjEntry;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace JBooth::MicroVerseCore {
class ObjJobHolder;
}
// Write type traits
MARK_REF_T(::JBooth::MicroVerseCore::ObjJobHolder*);
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::ObjJobHolder*, "JBooth.MicroVerseCore", "ObjJobHolder");
// Dependencies JBooth.MicroVerseCore.ObjectSpawnJob, System.Object, Unity.Jobs.JobHandle
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.ObjJobHolder
class CORDL_TYPE ObjJobHolder : public ::System::Object {
public:
// Declarations
/// @brief Field entries, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_entries, put=__cordl_internal_set_entries)) ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ObjectSpawnJob_ObjEntry>*  entries;

/// @brief Field handle, offset 0x50, size 0x10 
 __declspec(property(get=__cordl_internal_get_handle, put=__cordl_internal_set_handle)) ::Unity::Jobs::JobHandle  handle;

/// @brief Field objBendJob, offset 0x10, size 0x40 
 __declspec(property(get=__cordl_internal_get_objBendJob, put=__cordl_internal_set_objBendJob)) ::JBooth::MicroVerseCore::ObjectSpawnJob  objBendJob;

/// @brief Field transforms, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_transforms, put=__cordl_internal_set_transforms)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  transforms;

static inline ::JBooth::MicroVerseCore::ObjJobHolder* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ObjectSpawnJob_ObjEntry>* const& __cordl_internal_get_entries() const;

constexpr ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ObjectSpawnJob_ObjEntry>*& __cordl_internal_get_entries() ;

constexpr ::Unity::Jobs::JobHandle const& __cordl_internal_get_handle() const;

constexpr ::Unity::Jobs::JobHandle& __cordl_internal_get_handle() ;

constexpr ::JBooth::MicroVerseCore::ObjectSpawnJob const& __cordl_internal_get_objBendJob() const;

constexpr ::JBooth::MicroVerseCore::ObjectSpawnJob& __cordl_internal_get_objBendJob() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* const& __cordl_internal_get_transforms() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*& __cordl_internal_get_transforms() ;

constexpr void __cordl_internal_set_entries(::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ObjectSpawnJob_ObjEntry>*  value) ;

constexpr void __cordl_internal_set_handle(::Unity::Jobs::JobHandle  value) ;

constexpr void __cordl_internal_set_objBendJob(::JBooth::MicroVerseCore::ObjectSpawnJob  value) ;

constexpr void __cordl_internal_set_transforms(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  value) ;

/// @brief Method .ctor, addr 0x18141d1f0, size 0x80, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ObjJobHolder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ObjJobHolder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ObjJobHolder(ObjJobHolder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ObjJobHolder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObjJobHolder(ObjJobHolder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17957};

/// @brief Field objBendJob, offset: 0x10, size: 0x40, def value: None
 ::JBooth::MicroVerseCore::ObjectSpawnJob  ___objBendJob;

/// @brief Field handle, offset: 0x50, size: 0x10, def value: None
 ::Unity::Jobs::JobHandle  ___handle;

/// @brief Field transforms, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  ___transforms;

/// @brief Field entries, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ObjectSpawnJob_ObjEntry>*  ___entries;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::ObjJobHolder, ___objBendJob) == 0x10, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::ObjJobHolder, ___handle) == 0x50, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::ObjJobHolder, ___transforms) == 0x60, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::ObjJobHolder, ___entries) == 0x68, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::ObjJobHolder) == 0x70, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
