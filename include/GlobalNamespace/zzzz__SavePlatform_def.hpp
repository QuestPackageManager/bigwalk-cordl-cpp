#pragma once
// IWYU pragma private; include "GlobalNamespace/SavePlatform.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskVoidMethodBuilder_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__YieldAwaitable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SavePlatform)
namespace Cysharp::Threading::Tasks {
struct UniTaskVoid;
}
namespace GlobalNamespace {
struct SavePlatform__DeleteRebindDatas_d__4;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
class SavePlatform;
}
namespace GlobalNamespace {
struct SavePlatform__DeleteRebindDatas_d__4;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SavePlatform*);
MARK_VAL_T(::GlobalNamespace::SavePlatform__DeleteRebindDatas_d__4);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SavePlatform*, "", "SavePlatform");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SavePlatform__DeleteRebindDatas_d__4, "", "SavePlatform/<DeleteRebindDatas>d__4");
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder, Cysharp.Threading.Tasks.YieldAwaitable::Awaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: SavePlatform/<DeleteRebindDatas>d__4
struct CORDL_TYPE SavePlatform__DeleteRebindDatas_d__4 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x18039f430, size 0x1a0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr SavePlatform__DeleteRebindDatas_d__4() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter", modifiers: "", def_value: None }]
constexpr SavePlatform__DeleteRebindDatas_d__4(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder, ::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5603};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder;

/// @brief Field <>u__1, offset: 0x10, size: 0x4, def value: None
 ::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SavePlatform__DeleteRebindDatas_d__4, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SavePlatform__DeleteRebindDatas_d__4, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SavePlatform__DeleteRebindDatas_d__4, __u__1) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SavePlatform__DeleteRebindDatas_d__4) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SavePlatform
class CORDL_TYPE SavePlatform : public ::System::Object {
public:
// Declarations
using _DeleteRebindDatas_d__4 = ::GlobalNamespace::SavePlatform__DeleteRebindDatas_d__4;

/// @brief Method DeleteRebindDatas, addr 0x180398420, size 0x50, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTaskVoid DeleteRebindDatas() ;

/// @brief Method DeleteSaveData, addr 0x180398470, size 0x20, virtual false, abstract: false, final false
static inline void DeleteSaveData(::StringW  slotName, ::StringW  filenameUid) ;

/// @brief Method GetAllSaveDataJsonsInFolder, addr 0x180398490, size 0x140, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::StringW>* GetAllSaveDataJsonsInFolder() ;

/// @brief Method GetPathForName, addr 0x1803985d0, size 0x1a0, virtual false, abstract: false, final false
static inline ::StringW GetPathForName(::StringW  name, ::StringW  filenameUid) ;

/// @brief Method GetRebindData, addr 0x1803987a0, size 0x110, virtual false, abstract: false, final false
static inline bool GetRebindData(::StringW  fileName, ::by_ref<::StringW>  rebindData) ;

/// @brief Method GetRebindDataFolder, addr 0x180398770, size 0x30, virtual false, abstract: false, final false
static inline ::StringW GetRebindDataFolder() ;

/// @brief Method GetRebindVersion, addr 0x1803988b0, size 0xa0, virtual false, abstract: false, final false
static inline void GetRebindVersion(::by_ref<int32_t>  version) ;

/// @brief Method GetSaveGameFolder, addr 0x180398950, size 0x30, virtual false, abstract: false, final false
static inline ::StringW GetSaveGameFolder() ;

/// @brief Method RenameSlot, addr 0x180397d80, size 0x50, virtual false, abstract: false, final false
static inline void RenameSlot(::StringW  oldName, ::StringW  newName, ::StringW  filenameUid) ;

/// @brief Method SaveRebindData, addr 0x180397dd0, size 0x90, virtual false, abstract: false, final false
static inline void SaveRebindData(::StringW  fileName, ::StringW  rebindData) ;

/// @brief Method SaveRebindVersion, addr 0x180398980, size 0xa0, virtual false, abstract: false, final false
static inline void SaveRebindVersion(int32_t  version) ;

/// @brief Method WriteSaveData, addr 0x180398a20, size 0x90, virtual false, abstract: false, final false
static inline void WriteSaveData(::StringW  slotName, ::StringW  filenameUid, ::StringW  saveDataJson) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SavePlatform() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SavePlatform", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SavePlatform(SavePlatform && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SavePlatform", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SavePlatform(SavePlatform const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5604};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::SavePlatform) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
