#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/IPlayerLoopItem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPlayerLoopItem)
// Forward declare root types
namespace Cysharp::Threading::Tasks {
class IPlayerLoopItem;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::IPlayerLoopItem*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::IPlayerLoopItem*, "Cysharp.Threading.Tasks", "IPlayerLoopItem");
// Dependencies 
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.IPlayerLoopItem
class CORDL_TYPE IPlayerLoopItem {
public:
// Declarations
/// @brief Method MoveNext, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool MoveNext() ;

// Ctor Parameters [CppParam { name: "", ty: "IPlayerLoopItem", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IPlayerLoopItem(IPlayerLoopItem const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14252};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
