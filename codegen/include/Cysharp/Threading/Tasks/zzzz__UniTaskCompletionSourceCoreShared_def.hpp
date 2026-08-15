#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/UniTaskCompletionSourceCoreShared.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(UniTaskCompletionSourceCoreShared)
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks {
class UniTaskCompletionSourceCoreShared;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCoreShared*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCoreShared*, "Cysharp.Threading.Tasks", "UniTaskCompletionSourceCoreShared");
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTaskCompletionSourceCoreShared
class CORDL_TYPE UniTaskCompletionSourceCoreShared : public ::System::Object {
public:
// Declarations
/// @brief Field s_sentinel, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_sentinel, put=setStaticF_s_sentinel)) ::System::Action_1<::System::Object*>*  s_sentinel;

/// @brief Method CompletionSentinel, addr 0x181e696c0, size 0x20, virtual false, abstract: false, final false
static inline void CompletionSentinel(::System::Object*  _) ;

static inline ::System::Action_1<::System::Object*>* getStaticF_s_sentinel() ;

static inline void setStaticF_s_sentinel(::System::Action_1<::System::Object*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniTaskCompletionSourceCoreShared() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniTaskCompletionSourceCoreShared", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UniTaskCompletionSourceCoreShared(UniTaskCompletionSourceCoreShared && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniTaskCompletionSourceCoreShared", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniTaskCompletionSourceCoreShared(UniTaskCompletionSourceCoreShared const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14443};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCoreShared) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
